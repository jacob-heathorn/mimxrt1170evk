#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// WDOG
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Wdog {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Wdog: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40030000u :
      Instance == 2u ? 0x40034000u :
      0u;

  // Watchdog Control Register
  struct WcrFields {
    enum class eWDZST : std::uint32_t {
      // Continue timer operation (Default).
      eWDZST_0 = 0,
      // Suspend the watchdog timer.
      eWDZST_1 = 1,
    };

    enum class eWDBG : std::uint32_t {
      // Continue WDOG timer operation (Default).
      eWDBG_0 = 0,
      // Suspend the watchdog timer.
      eWDBG_1 = 1,
    };

    enum class eWDE : std::uint32_t {
      // Disable the Watchdog (Default).
      eWDE_0 = 0,
      // Enable the Watchdog.
      eWDE_1 = 1,
    };

    enum class eWDT : std::uint32_t {
      // No effect on WDOG_B (Default).
      eWDT_0 = 0,
      // Assert WDOG_B upon a Watchdog Time-out event.
      eWDT_1 = 1,
    };

    enum class eSRS : std::uint32_t {
      // Assert system reset signal.
      eSRS_0 = 0,
      // No effect on the system (Default).
      eSRS_1 = 1,
    };

    enum class eWDA : std::uint32_t {
      // Assert WDOG_B output.
      eWDA_0 = 0,
      // No effect on system (Default).
      eWDA_1 = 1,
    };

    enum class eSRE : std::uint32_t {
      // using original way to generate software reset (default)
      eSRE_0 = 0,
      // using new way to generate software reset.
      eSRE_1 = 1,
    };

    enum class eWDW : std::uint32_t {
      // Continue WDOG timer operation (Default).
      eWDW_0 = 0,
      // Suspend WDOG timer operation.
      eWDW_1 = 1,
    };

    enum class eWT : std::uint32_t {
      // - 0.5 Seconds (Default).
      eWT_0 = 0,
      // - 1.0 Seconds.
      eWT_1 = 1,
      // - 1.5 Seconds.
      eWT_2 = 2,
      // - 2.0 Seconds.
      eWT_3 = 3,
      // - 128 Seconds.
      eWT_255 = 255,
    };

    // WDZST
    using WDZST = ftl::mmio::Field<1, 0, eWDZST, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDBG
    using WDBG = ftl::mmio::Field<1, 1, eWDBG, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDE
    using WDE = ftl::mmio::Field<1, 2, eWDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDT
    using WDT = ftl::mmio::Field<1, 3, eWDT, ftl::mmio::RW, ftl::mmio::Normal>;
    // SRS
    using SRS = ftl::mmio::Field<1, 4, eSRS, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDA
    using WDA = ftl::mmio::Field<1, 5, eWDA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset Extension, an optional way to generate software reset
    using SRE = ftl::mmio::Field<1, 6, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDW
    using WDW = ftl::mmio::Field<1, 7, eWDW, ftl::mmio::RW, ftl::mmio::Normal>;
    // WT
    using WT = ftl::mmio::Field<8, 8, eWT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WcrFields

  struct WCR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0030u,
      ftl::mmio::RW,
      typename WcrFields::WDZST,
      typename WcrFields::WDBG,
      typename WcrFields::WDE,
      typename WcrFields::WDT,
      typename WcrFields::SRS,
      typename WcrFields::WDA,
      typename WcrFields::SRE,
      typename WcrFields::WDW,
      typename WcrFields::WT> {
    using eWDZST = typename WcrFields::eWDZST;
    using eWDBG = typename WcrFields::eWDBG;
    using eWDE = typename WcrFields::eWDE;
    using eWDT = typename WcrFields::eWDT;
    using eSRS = typename WcrFields::eSRS;
    using eWDA = typename WcrFields::eWDA;
    using eSRE = typename WcrFields::eSRE;
    using eWDW = typename WcrFields::eWDW;
    using eWT = typename WcrFields::eWT;
    using WDZST = typename WcrFields::WDZST;
    using WDBG = typename WcrFields::WDBG;
    using WDE = typename WcrFields::WDE;
    using WDT = typename WcrFields::WDT;
    using SRS = typename WcrFields::SRS;
    using WDA = typename WcrFields::WDA;
    using SRE = typename WcrFields::SRE;
    using WDW = typename WcrFields::WDW;
    using WT = typename WcrFields::WT;
  };

  // Watchdog Service Register
  struct WsrFields {
    enum class eWSR : std::uint32_t {
      // Write to the Watchdog Service Register (WDOG_WSR).
      eWSR_21845 = 21845,
      // Write to the Watchdog Service Register (WDOG_WSR).
      eWSR_43690 = 43690,
    };

    // WSR
    using WSR = ftl::mmio::Field<16, 0, eWSR, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WsrFields

  struct WSR : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename WsrFields::WSR> {
    using eWSR = typename WsrFields::eWSR;
    using VALUE = typename WsrFields::WSR;
  };

  // Watchdog Reset Status Register
  struct WrsrFields {
    enum class eSFTW : std::uint32_t {
      // Reset is not the result of a software reset.
      eSFTW_0 = 0,
      // Reset is the result of a software reset.
      eSFTW_1 = 1,
    };

    enum class eTOUT : std::uint32_t {
      // Reset is not the result of a WDOG timeout.
      eTOUT_0 = 0,
      // Reset is the result of a WDOG timeout.
      eTOUT_1 = 1,
    };

    enum class ePOR : std::uint32_t {
      // Reset is not the result of a power on reset.
      ePOR_0 = 0,
      // Reset is the result of a power on reset.
      ePOR_1 = 1,
    };

    // SFTW
    using SFTW = ftl::mmio::Field<1, 0, eSFTW, ftl::mmio::RO, ftl::mmio::Normal>;
    // TOUT
    using TOUT = ftl::mmio::Field<1, 1, eTOUT, ftl::mmio::RO, ftl::mmio::Normal>;
    // POR
    using POR = ftl::mmio::Field<1, 4, ePOR, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct WrsrFields

  struct WRSR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename WrsrFields::SFTW,
      typename WrsrFields::TOUT,
      ftl::mmio::Reserved<2, 2>,
      typename WrsrFields::POR,
      ftl::mmio::Reserved<11, 5>> {
    using eSFTW = typename WrsrFields::eSFTW;
    using eTOUT = typename WrsrFields::eTOUT;
    using ePOR = typename WrsrFields::ePOR;
    using SFTW = typename WrsrFields::SFTW;
    using TOUT = typename WrsrFields::TOUT;
    using POR = typename WrsrFields::POR;
  };

  // Watchdog Interrupt Control Register
  struct WicrFields {
    enum class eWICT : std::uint32_t {
      // WICT[7:0] = Time duration between interrupt and time-out is 0 seconds.
      eWICT_0 = 0,
      // WICT[7:0] = Time duration between interrupt and time-out is 0.5 seconds.
      eWICT_1 = 1,
      // WICT[7:0] = Time duration between interrupt and time-out is 2 seconds (Default).
      eWICT_4 = 4,
      // WICT[7:0] = Time duration between interrupt and time-out is 127.5 seconds.
      eWICT_255 = 255,
    };

    enum class eWTIS : std::uint32_t {
      // No interrupt has occurred (Default).
      eWTIS_0 = 0,
      // Interrupt has occurred
      eWTIS_1 = 1,
    };

    enum class eWIE : std::uint32_t {
      // Disable Interrupt (Default).
      eWIE_0 = 0,
      // Enable Interrupt.
      eWIE_1 = 1,
    };

    // WICT
    using WICT = ftl::mmio::Field<8, 0, eWICT, ftl::mmio::RW, ftl::mmio::Normal>;
    // WTIS
    using WTIS = ftl::mmio::Field<1, 14, eWTIS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // WIE
    using WIE = ftl::mmio::Field<1, 15, eWIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WicrFields

  struct WICR : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0004u,
      ftl::mmio::RW,
      typename WicrFields::WICT,
      ftl::mmio::Reserved<6, 8>,
      typename WicrFields::WTIS,
      typename WicrFields::WIE> {
    using eWICT = typename WicrFields::eWICT;
    using eWTIS = typename WicrFields::eWTIS;
    using eWIE = typename WicrFields::eWIE;
    using WICT = typename WicrFields::WICT;
    using WTIS = typename WicrFields::WTIS;
    using WIE = typename WicrFields::WIE;
  };

  // Watchdog Miscellaneous Control Register
  struct WmcrFields {
    enum class ePDE : std::uint32_t {
      // Power Down Counter of WDOG is disabled.
      ePDE_0 = 0,
      // Power Down Counter of WDOG is enabled (Default).
      ePDE_1 = 1,
    };

    // PDE
    using PDE = ftl::mmio::Field<1, 0, ePDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WmcrFields

  struct WMCR : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint16_t,
      0x0001u,
      ftl::mmio::RW,
      typename WmcrFields::PDE,
      ftl::mmio::Reserved<15, 1>> {
    using ePDE = typename WmcrFields::ePDE;
    using PDE = typename WmcrFields::PDE;
  };

};

}  // namespace regs