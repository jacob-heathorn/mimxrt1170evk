#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>
#include "platform/lpuart.hpp"
#include "platform/assert_led.hpp"
#include "utils/dtcm_allocator.hpp"

extern "C" {

void BoardInitPins()
{
    // Enable the IOMUXC clock and wait for it.
    nCCM::LPCG49_DIRECT::ref().bits.ON = nCCM::LPCG49_DIRECT::eON::eON_1;
    while (nCCM::LPCG49_STATUS0::ref().bits.ON != nCCM::LPCG49_STATUS0::eON::eON_1) {}

    // Enable lpuartt1 RX and TX.
    nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_24::ref().bits.MUX_MODE =
        nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_24::eMUX_MODE::eALT0_lpuart1_TX;
    nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_25::ref().bits.MUX_MODE =
        nIOMUXC::SW_MUX_CTL_PAD_GPIO_AD_25::eMUX_MODE::eALT0_lpuart1_RX;
}


/*!
 * @brief Application-specific implementation of the SystemInitHook() weak function.
 */
void SystemInitHook(void)
{
    /* Initialize MCMGR - low level multicore management library. Call this
       function as close to the reset entry as possible to allow CoreUp event
       triggering. The SystemInitHook() weak function overloading is used in this
       application. */
    (void)MCMGR_EarlyInit();
}

void __pre_main_init()
{
  // Initialize MCMGR, install generic event handlers.
  (void)MCMGR_Init();

  // Init board hardware.
  BOARD_ConfigMPU();
  BoardInitPins();
  BOARD_BootClockRUN();

  DtcmAllocator::instance().initialize();
//   AssertLed::instance().initialize();
  Lpuart1::instance().initialize();
}

}
