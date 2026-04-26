#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Rtwdog {
  static_assert(
        Instance == 3u || Instance == 4u,
        "Rtwdog: Instance must be one of 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 3u ? 0x40038000u :
      Instance == 4u ? 0x40C10000u :
      0u;

  // Watchdog Control and Status Register
  struct CS_fields_ {
    enum class eSTOP : std::uint32_t {
      // Watchdog disabled in chip stop mode.
      eSTOP_0 = 0,
      // Watchdog enabled in chip stop mode.
      eSTOP_1 = 1,
    };

    enum class eWAIT : std::uint32_t {
      // Watchdog disabled in chip wait mode.
      eWAIT_0 = 0,
      // Watchdog enabled in chip wait mode.
      eWAIT_1 = 1,
    };

    enum class eDBG : std::uint32_t {
      // Watchdog disabled in chip debug mode.
      eDBG_0 = 0,
      // Watchdog enabled in chip debug mode.
      eDBG_1 = 1,
    };

    enum class eTST : std::uint32_t {
      // Watchdog test mode disabled.
      eTST_0 = 0,
      // Watchdog user mode enabled. (Watchdog test mode disabled.) After testing the watchdog, software should use this setting to indicate that the watchdog is functioning normally in user mode.
      eTST_1 = 1,
      // Watchdog test mode enabled, only the low byte is used. CNT[CNTLOW] is compared with TOVAL[TOVALLOW].
      eTST_2 = 2,
      // Watchdog test mode enabled, only the high byte is used. CNT[CNTHIGH] is compared with TOVAL[TOVALHIGH].
      eTST_3 = 3,
    };

    enum class eUPDATE : std::uint32_t {
      // Updates not allowed. After the initial configuration, the watchdog cannot be later modified without forcing a reset.
      eUPDATE_0 = 0,
      // Updates allowed. Software can modify the watchdog configuration registers within 255 bus clocks after performing the unlock write sequence.
      eUPDATE_1 = 1,
    };

    enum class eINT : std::uint32_t {
      // Watchdog interrupts are disabled. Watchdog resets are not delayed.
      eINT_0 = 0,
      // Watchdog interrupts are enabled. Watchdog resets are delayed by 255 bus clocks from the interrupt vector fetch.
      eINT_1 = 1,
    };

    enum class eEN : std::uint32_t {
      // Watchdog disabled.
      eEN_0 = 0,
      // Watchdog enabled.
      eEN_1 = 1,
    };

    enum class eRCS : std::uint32_t {
      // Reconfiguring WDOG.
      eRCS_0 = 0,
      // Reconfiguration is successful.
      eRCS_1 = 1,
    };

    enum class eULK : std::uint32_t {
      // WDOG is locked.
      eULK_0 = 0,
      // WDOG is unlocked.
      eULK_1 = 1,
    };

    enum class ePRES : std::uint32_t {
      // 256 prescaler disabled.
      ePRES_0 = 0,
      // 256 prescaler enabled.
      ePRES_1 = 1,
    };

    enum class eCMD32EN : std::uint32_t {
      // Disables support for 32-bit refresh/unlock command write words. Only 16-bit or 8-bit is supported.
      eCMD32EN_0 = 0,
      // Enables support for 32-bit refresh/unlock command write words. 16-bit or 8-bit is NOT supported.
      eCMD32EN_1 = 1,
    };

    enum class eFLG : std::uint32_t {
      // No interrupt occurred.
      eFLG_0 = 0,
      // An interrupt occurred.
      eFLG_1 = 1,
    };

    enum class eWIN : std::uint32_t {
      // Window mode disabled.
      eWIN_0 = 0,
      // Window mode enabled.
      eWIN_1 = 1,
    };

    // Stop Enable
    using STOP = ftl::mmio::Field<1, 0, eSTOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAIT = ftl::mmio::Field<1, 1, eWAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBG = ftl::mmio::Field<1, 2, eDBG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Test
    using TST = ftl::mmio::Field<2, 3, eTST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow updates
    using UPDATE = ftl::mmio::Field<1, 5, eUPDATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Interrupt
    using INT = ftl::mmio::Field<1, 6, eINT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Enable
    using EN = ftl::mmio::Field<1, 7, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Clock
    using CLK = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reconfiguration Success
    using RCS = ftl::mmio::Field<1, 10, eRCS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Unlock status
    using ULK = ftl::mmio::Field<1, 11, eULK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Watchdog prescaler
    using PRES = ftl::mmio::Field<1, 12, ePRES, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit) refresh/unlock command write words
    using CMD32EN = ftl::mmio::Field<1, 13, eCMD32EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Interrupt Flag
    using FLG = ftl::mmio::Field<1, 14, eFLG, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Watchdog Window
    using WIN = ftl::mmio::Field<1, 15, eWIN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CS_fields_

  struct CS : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00002180u,
      ftl::mmio::RW,
      typename CS_fields_::STOP,
      typename CS_fields_::WAIT,
      typename CS_fields_::DBG,
      typename CS_fields_::TST,
      typename CS_fields_::UPDATE,
      typename CS_fields_::INT,
      typename CS_fields_::EN,
      typename CS_fields_::CLK,
      typename CS_fields_::RCS,
      typename CS_fields_::ULK,
      typename CS_fields_::PRES,
      typename CS_fields_::CMD32EN,
      typename CS_fields_::FLG,
      typename CS_fields_::WIN,
      ftl::mmio::Reserved<16, 16>> {
    using eSTOP = typename CS_fields_::eSTOP;
    using eWAIT = typename CS_fields_::eWAIT;
    using eDBG = typename CS_fields_::eDBG;
    using eTST = typename CS_fields_::eTST;
    using eUPDATE = typename CS_fields_::eUPDATE;
    using eINT = typename CS_fields_::eINT;
    using eEN = typename CS_fields_::eEN;
    using eRCS = typename CS_fields_::eRCS;
    using eULK = typename CS_fields_::eULK;
    using ePRES = typename CS_fields_::ePRES;
    using eCMD32EN = typename CS_fields_::eCMD32EN;
    using eFLG = typename CS_fields_::eFLG;
    using eWIN = typename CS_fields_::eWIN;
    using STOP = typename CS_fields_::STOP;
    using WAIT = typename CS_fields_::WAIT;
    using DBG = typename CS_fields_::DBG;
    using TST = typename CS_fields_::TST;
    using UPDATE = typename CS_fields_::UPDATE;
    using INT = typename CS_fields_::INT;
    using EN = typename CS_fields_::EN;
    using CLK = typename CS_fields_::CLK;
    using RCS = typename CS_fields_::RCS;
    using ULK = typename CS_fields_::ULK;
    using PRES = typename CS_fields_::PRES;
    using CMD32EN = typename CS_fields_::CMD32EN;
    using FLG = typename CS_fields_::FLG;
    using WIN = typename CS_fields_::WIN;
  };

  // Watchdog Counter Register
  struct CNT_fields_ {
    // Low byte of the Watchdog Counter
    using CNTLOW = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // High byte of the Watchdog Counter
    using CNTHIGH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CNT_fields_

  struct CNT : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CNT_fields_::CNTLOW,
      typename CNT_fields_::CNTHIGH,
      ftl::mmio::Reserved<16, 16>> {
    using CNTLOW = typename CNT_fields_::CNTLOW;
    using CNTHIGH = typename CNT_fields_::CNTHIGH;
  };

  // Watchdog Timeout Value Register
  struct TOVAL_fields_ {
    // Low byte of the timeout value
    using TOVALLOW = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // High byte of the timeout value
    using TOVALHIGH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TOVAL_fields_

  struct TOVAL : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00007D00u,
      ftl::mmio::RW,
      typename TOVAL_fields_::TOVALLOW,
      typename TOVAL_fields_::TOVALHIGH,
      ftl::mmio::Reserved<16, 16>> {
    using TOVALLOW = typename TOVAL_fields_::TOVALLOW;
    using TOVALHIGH = typename TOVAL_fields_::TOVALHIGH;
  };

  // Watchdog Window Register
  struct WIN_fields_ {
    // Low byte of Watchdog Window
    using WINLOW = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // High byte of Watchdog Window
    using WINHIGH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WIN_fields_

  struct WIN : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename WIN_fields_::WINLOW,
      typename WIN_fields_::WINHIGH,
      ftl::mmio::Reserved<16, 16>> {
    using WINLOW = typename WIN_fields_::WINLOW;
    using WINHIGH = typename WIN_fields_::WINHIGH;
  };

};

}  // namespace regs