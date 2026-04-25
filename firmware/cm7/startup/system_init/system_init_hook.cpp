#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>
#include <array>
#include "platform/lpuart.hpp"
#include "platform/assert_led.hpp"
#include "utils/dtcm_allocator.hpp"
#include "utils/ocram1_allocator.hpp"
#include "utils/ocram2_allocator.hpp"

extern "C" {

void BoardInitPins()
{
    namespace ccm    = regs::ccm;
    namespace iomuxc = regs::iomuxc;
    using lpcg49_direct = ccm::LPCG49_DIRECT;
    using lpcg49_status = ccm::LPCG49_STATUS0;
    // Enable the IOMUXC clock and wait for it.
    lpcg49_direct::modify(lpcg49_direct::ON{lpcg49_direct::eON::eON_1});
    while (lpcg49_status::read().get<lpcg49_status::ON>() != lpcg49_status::eON::eON_1) {}

    // Enable lpuart1 RX and TX.
    using tx_pad = iomuxc::SW_MUX_CTL_PAD_GPIO_AD_24;
    using rx_pad = iomuxc::SW_MUX_CTL_PAD_GPIO_AD_25;
    tx_pad::modify(tx_pad::MUX_MODE{tx_pad::eMUX_MODE::eALT0_lpuart1_TX});
    rx_pad::modify(rx_pad::MUX_MODE{rx_pad::eMUX_MODE::eALT0_lpuart1_RX});
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
  // Set the printf buffer size and behavior to flush on newline.
  static char linebuf[Lpuart1::kTxBufferSize];
  setvbuf(stdout, linebuf, _IOLBF, sizeof(linebuf));

  // Initialize MCMGR, install generic event handlers.
  (void)MCMGR_Init();

  // Init board hardware.
  BOARD_ConfigMPU();
  BoardInitPins();
  BOARD_BootClockRUN();

  AssertLed::create();
  DtcmAllocator::create();
  Ocram1Allocator::create();
  Ocram2Allocator::create();
  Lpuart1::create();
}

void __post_main()
{
  while (true) {}
}

}
