// #define BOARD_NETWORK_USE_100M_ENET_PORT (0U)

#include "fsl_common.h"
#include "pin_mux.h"
#include "fsl_gpio.h"
#include "stdio.h"
#include "tx_api.h"
#include "nx_api.h"
#include "ftl/tx_thread.hpp"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define STACK_SIZE 2048
uint8_t thread_1_stack[STACK_SIZE];

/* Define packet pool for the demonstration.  */
#define NX_PACKET_POOL_SIZE ((1536 + sizeof(NX_PACKET)) * 50)

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* Define the ThreadX and NetX object control blocks...  */
NX_PACKET_POOL pool_0;
NX_IP ip_0;

/* Define the IP thread's stack area.  */
ULONG ip_thread_stack[2 * 1024 / sizeof(ULONG)];

AT_NONCACHEABLE_SECTION_ALIGN(ULONG packet_pool_area[NX_PACKET_POOL_SIZE / 4 + 4], 64);

/* Define the ARP cache area.  */
ULONG arp_space_area[1024 / sizeof(ULONG)];

/* Define an error counter.  */
ULONG error_counter;

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
extern "C"
{
VOID nx_link_driver(NX_IP_DRIVER *driver_req_ptr);
}

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
  tx_kernel_enter();
  return 0;
}

static NX_UDP_SOCKET udp_socket;

void send_udp_hello()
{
    printf("Waiting for the link..\r\n");
    UINT status;
    ULONG actual_status;
    // 🟢 Wait for stack to be fully ready
    status = nx_ip_status_check(&ip_0, NX_IP_INITIALIZE_DONE, &actual_status, NX_WAIT_FOREVER);
    if (status != NX_SUCCESS) {
        printf("IP initialization failed: %u\r\n", status);
    }

    printf("Sending hello world udp packet..\r\n");
    ULONG remote_ip = IP_ADDRESS(192, 2, 2, 100); // Change this to your host PC IP
    UINT remote_port = 5001;                     // Set destination port

    // Create UDP socket
    status = nx_udp_socket_create(&ip_0, &udp_socket, "UDP Socket",
                                  NX_IP_NORMAL, NX_FRAGMENT_OKAY, NX_IP_TIME_TO_LIVE, 512);
    if (status != NX_SUCCESS) return;

    // Bind the socket to any port (0 = ephemeral)
    status = nx_udp_socket_bind(&udp_socket, 0, TX_NO_WAIT);
    if (status != NX_SUCCESS) return;

    int i = 0;
    char msg[64];  // Make sure this is big enough for your message

    while (true)
    {
        NX_PACKET *packet_ptr;

        // Create the message
        sprintf(msg, "Hello, world UDP %d\n", i);

        // Allocate a UDP packet
        status = nx_packet_allocate(&pool_0, &packet_ptr, NX_UDP_PACKET, TX_NO_WAIT);
        if (status != NX_SUCCESS) return;

        // Append the message to the packet
        status = nx_packet_data_append(packet_ptr, msg, strlen(msg), &pool_0, TX_NO_WAIT);
        if (status != NX_SUCCESS) {
            nx_packet_release(packet_ptr);
            continue;
        }

        // Send the packet
        status = nx_udp_socket_send(&udp_socket, packet_ptr, remote_ip, remote_port);
        if (status != NX_SUCCESS) {
            nx_packet_release(packet_ptr);
        }

        ++i;
        tx_thread_sleep(NX_IP_PERIODIC_RATE);  // Sleep ~1s to avoid flooding
    }

    // Clean up
    nx_udp_socket_unbind(&udp_socket);
    nx_udp_socket_delete(&udp_socket);
    while (true)
    {
        tx_thread_sleep(75);
    }
}

/* Define what the initial system looks like.  */
VOID tx_application_define(void *first_unused_memory)
{
    
    UINT status;

    NX_PARAMETER_NOT_USED(first_unused_memory);

    /* Initialize the NetX system.  */
    nx_system_initialize();

    /* Create a packet pool.  */
    status = nx_packet_pool_create(&pool_0, "NetX Main Packet Pool", 1536,
                                   (ULONG *)(((int)packet_pool_area + 15) & ~15), NX_PACKET_POOL_SIZE);

    /* Check for pool creation error.  */
    if (status)
        error_counter++;

    /* Create an IP instance.  */
    status = nx_ip_create(&ip_0, "NetX IP Instance 0",
                          IP_ADDRESS(192, 2, 2, 149), 0xFFFFFF00UL,
                          &pool_0, nx_link_driver, (UCHAR *)ip_thread_stack, sizeof(ip_thread_stack), 1);

    /* Check for IP create errors.  */
    if (status)
        error_counter++;

    /* Enable ARP and supply ARP cache memory for IP Instance 0.  */
    status = nx_arp_enable(&ip_0, (void *)arp_space_area, sizeof(arp_space_area));

    /* Check for ARP enable errors.  */
    if (status)
        error_counter++;

    /* Enable TCP traffic.  */
    status = nx_tcp_enable(&ip_0);

    /* Check for TCP enable errors.  */
    if (status)
        error_counter++;

    /* Enable UDP traffic.  */
    status = nx_udp_enable(&ip_0);

    /* Check for UDP enable errors.  */
    if (status)
        error_counter++;

    /* Enable ICMP.  */
    status = nx_icmp_enable(&ip_0);

    /* Check for errors.  */
    if (status)
        error_counter++;


    // Create hello thread.
    static ftl::TxThread thread1(
        "Thread 1", 
        etl::delegate<void(void)>::create<send_udp_hello>(),
        thread_1_stack,
        STACK_SIZE,
        10
    );
}
