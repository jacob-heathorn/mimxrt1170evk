#include "fsl_common.h"
#include "enet_pin_mux.h"
#include "fsl_gpio.h"
#include "stdio.h"
#include "tx_api.h"
#include "nx_api.h"
#include "ftl/tx_thread.hpp"
#include "network/gigabit_ethernet.hpp"
#include "network/udp_socket.hpp"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];


/*******************************************************************************
 * Code
 ******************************************************************************/
void BOARD_InitModuleClock(void)
{
    const clock_sys_pll1_config_t sysPll1Config = {
        .pllDiv2En = true,
        .pllDiv5En = false,
        .ss = nullptr,
        .ssEnable = false
    };
    CLOCK_InitSysPll1(&sysPll1Config);

    clock_root_config_t rootCfg = {.clockOff = false, .mux = 4, .div = 4}; /* Generate 125M root clock. */
    CLOCK_SetRootClock(kCLOCK_Root_Enet2, &rootCfg);

    /* Select syspll2pfd3, 528*18/24 = 396M */
    CLOCK_InitPfd(kCLOCK_PllSys2, kCLOCK_Pfd3, 24);
    rootCfg.mux = 7;
    rootCfg.div = 2;
    CLOCK_SetRootClock(kCLOCK_Root_Bus, &rootCfg); /* Generate 198M bus clock. */
}

void IOMUXC_SelectENETClock(void)
{
    IOMUXC_GPR->GPR5 |= IOMUXC_GPR_GPR5_ENET1G_RGMII_EN_MASK; // bit1:iomuxc_gpr_enet_clk_dir

    // Wait 1 ms for stabilizing clock.
    SDK_DelayAtLeastUs(1000, CLOCK_GetFreq(kCLOCK_CpuClk));
}

int main()
{
  // Init board hardware.
  gpio_pin_config_t gpio_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};

  BOARD_InitModuleClock();
  IOMUXC_SelectENETClock();

  BOARD_InitEnet1GPins();
  GPIO_PinInit(GPIO11, 14, &gpio_config);
  /* For a complete PHY reset of RTL8211FDI-CG, this pin must be asserted low for at least 20ms. And
    * wait for a further 60ms(for internal circuits settling time) before accessing the PHY register */
  GPIO_WritePinOutput(GPIO11, 14, 0);
  SDK_DelayAtLeastUs(20000, CLOCK_GetFreq(kCLOCK_CpuClk));
  GPIO_WritePinOutput(GPIO11, 14, 1);
  SDK_DelayAtLeastUs(60000, CLOCK_GetFreq(kCLOCK_CpuClk));

  printf("Entering the kernel..\n\r");
  fflush(stdout);
  tx_kernel_enter();
  return 0;
}

void echo_hello()
{
    printf("Waiting for link...\r\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Starting Hello World loop...\r\n");

    UdpSocket* socket = GigabitEthernet::instance().CreateUdpSocket();

    if (!socket->open() || !socket->bind()) {
        assert(false && "Failed to open or bind UDP socket");
    }

    for (int i = 0;; ++i) {
        // Send packet
        char msg[64];
        sprintf(msg, "Hello World %d", i);

        if (!socket->send(msg, Ipv4Endpoint("192.2.2.100", 5001))) {
            printf("Failed to send UDP packet\r\n");
        }

        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // ~1 second

        // Try receiving
        char buf[256];
        size_t received_len = 0;
        Ipv4Endpoint peer{};
        if (socket->receive(buf, sizeof(buf) - 1, received_len, &peer)) {
            printf("Received UDP: '%s' from %s\r\n", buf, peer.ToString().begin());
        }
    }

    socket->close();  // Unreachable, but good practice
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    
    // UINT status;

    NX_PARAMETER_NOT_USED(first_unused_memory);

    GigabitEthernet::create("192.2.2.149", Ipv4Mask{255, 255, 255, 0});

    // Create hello thread.
    static ftl::TxThread thread1(
        "Thread 1", 
        etl::delegate<void(void)>::create<echo_hello>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}
