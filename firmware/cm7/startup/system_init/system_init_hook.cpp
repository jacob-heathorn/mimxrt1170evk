#include "clock_config.h"
#include "board.h"
#include "mcmgr.h"
#include "registers/codegen/iomuxc.hpp"
#include "registers/codegen/ccm.hpp"
#include "core_cm7.h"
#include "cachel1_armv7.h"
#include <cstdio>
#include <array>
#include "platform/console_uart.hpp"
#include "platform/assert_led.hpp"
#include "utils/dtcm_allocator.hpp"
#include "utils/ocram1_allocator.hpp"
#include "utils/ocram2_allocator.hpp"

extern "C" {

void BoardInitPins()
{
    using Ccm    = regs::Ccm;
    using Iomuxc = regs::Iomuxc;
    using Lpcg49Direct = Ccm::LPCG49_DIRECT;
    using Lpcg49Status = Ccm::LPCG49_STATUS0;
    // Enable the IOMUXC clock and wait for it.
    Lpcg49Direct::modify(Lpcg49Direct::ON{Lpcg49Direct::eON::eON_1});
    while (Lpcg49Status::read().get<Lpcg49Status::ON>() != Lpcg49Status::eON::eON_1) {}

    // Enable lpuart1 RX and TX.
    using TxPad = Iomuxc::SW_MUX_CTL_PAD_GPIO_AD_24;
    using RxPad = Iomuxc::SW_MUX_CTL_PAD_GPIO_AD_25;
    TxPad::modify(TxPad::MUX_MODE{TxPad::eMUX_MODE::eALT0_lpuart1_TX});
    RxPad::modify(RxPad::MUX_MODE{RxPad::eMUX_MODE::eALT0_lpuart1_RX});
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
  static char linebuf[ConsoleUart::kTxBufferSize];
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
  ConsoleUart::create();
}

void __post_main()
{
  while (true) {}
}

}
