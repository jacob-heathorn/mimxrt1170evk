#include "fsl_common.h"
#include "pin_mux.h"

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
  BOARD_InitModuleClock();
  IOMUXC_SelectENETClock();

  BOARD_InitEnet1GPins();
  // GPIO_PinInit(GPIO11, 14, &gpio_config);
  // /* For a complete PHY reset of RTL8211FDI-CG, this pin must be asserted low for at least 20ms. And
  //   * wait for a further 60ms(for internal circuits settling time) before accessing the PHY register */
  // GPIO_WritePinOutput(GPIO11, 14, 0);
  // SDK_DelayAtLeastUs(20000, CLOCK_GetFreq(kCLOCK_CpuClk));
  // GPIO_WritePinOutput(GPIO11, 14, 1);
  // SDK_DelayAtLeastUs(60000, CLOCK_GetFreq(kCLOCK_CpuClk));
}
