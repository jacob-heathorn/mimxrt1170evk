// #define BOARD_NETWORK_USE_100M_ENET_PORT (0U)

#include "fsl_common.h"
#include "pin_mux.h"
#include "fsl_gpio.h"
#include "stdio.h"
#include "tx_api.h"
#include "nx_api.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

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

extern "C"
{
/* return the ENET MDIO interface clock frequency */
uint32_t BOARD_GetMDIOClock(void)
{
    return CLOCK_GetRootClockFreq(kCLOCK_Root_Bus);
}
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
}
