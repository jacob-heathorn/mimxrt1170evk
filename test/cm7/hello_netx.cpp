#include <utility>

#include "fsl_common.h"
#include "enet_pin_mux.h"
#include "fsl_gpio.h"
#include "stdio.h"
#include "tx_api.h"
#include "nx_api.h"
#include "ftl/tx_thread.hpp"
#include "network/gigabit_ethernet.hpp"
#include "ftl/ipv4/udp/socket.hpp"

using namespace ftl::ipv4;


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


int main()
{
  printf("Entering the kernel..\n\r");
  tx_kernel_enter();
  return 0;
}

void echo_hello()
{

    printf("Waiting for link...\r\n");
    GigabitEthernet::instance().WaitUntilReady();
    printf("Starting Hello World loop...\r\n");

    for (int i = 0;; ++i) {
        // Try creating and destroying it in the loop to execise the full socket and smart pointer
        // functionality
        udp::SocketPtr socket = GigabitEthernet::instance().CreateUdpSocket();

        socket->join_multicast_group("224.1.0.1");

        if (!socket->open(2) || !socket->bind(5010)) {
            assert(false && "Failed to open or bind UDP socket");
        }
        
        // Send unicast message.
        udp::Payload msg1(strlen("Hello unicast") + 2);
        sprintf((char *)msg1.data(), "Hello unicast %d", i % 10);
        if (!socket->send(std::move(msg1), Endpoint("192.2.2.100", 5001))) {
            printf("Failed to send UDP packet\r\n");
        }

        // Send multicast message.
        udp::Payload msg2(strlen("Hello multicast") + 2);
        sprintf((char *)msg2.data(), "Hello multicast %d", i % 10);
        if (!socket->send(std::move(msg2), Endpoint("224.1.0.2", 5002))) {
            printf("Failed to send UDP packet\r\n");
        }

        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // ~1 second

        // Try receiving
        udp::Payload payload;
        do {
            Endpoint peer{};
            payload = socket->receive(&peer);
            if (payload) {
                printf("Received UDP: '%.*s' from %s (len=%u)\r\n",
                    payload.size(),    // precision for the %s
                    payload.string_view().data(),
                    peer.ToString().data(),
                    payload.size());
            }
        }
        while (payload);
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    NX_PARAMETER_NOT_USED(first_unused_memory);

    // Set up the etherenet interface
    GigabitEthernet::create("192.2.2.149", Mask{255, 255, 255, 0});

    // Init board hardware.
    gpio_pin_config_t gpio_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};

    BOARD_InitModuleClock();
    GigabitEthernet::instance().IomuxcSelectEnetClock();
    //   IOMUXC_SelectENETClock();

    BOARD_InitEnet1GPins();
    GPIO_PinInit(GPIO11, 14, &gpio_config);
    /* For a complete PHY reset of RTL8211FDI-CG, this pin must be asserted low for at least 20ms. And
        * wait for a further 60ms(for internal circuits settling time) before accessing the PHY register */
    GPIO_WritePinOutput(GPIO11, 14, 0);
    SDK_DelayAtLeastUs(20000, CLOCK_GetFreq(kCLOCK_CpuClk));
    GPIO_WritePinOutput(GPIO11, 14, 1);
    SDK_DelayAtLeastUs(60000, CLOCK_GetFreq(kCLOCK_CpuClk));

    // Create hello thread.
    static ftl::TxThread thread1(
        "Thread 1", 
        etl::delegate<void(void)>::create<echo_hello>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}
