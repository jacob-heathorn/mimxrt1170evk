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
  struct WCR_fields_ {
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
  };  // struct WCR_fields_

  struct WCR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0030u,
      ftl::mmio::RW,
      typename WCR_fields_::WDZST,
      typename WCR_fields_::WDBG,
      typename WCR_fields_::WDE,
      typename WCR_fields_::WDT,
      typename WCR_fields_::SRS,
      typename WCR_fields_::WDA,
      typename WCR_fields_::SRE,
      typename WCR_fields_::WDW,
      typename WCR_fields_::WT> {
    using eWDZST = typename WCR_fields_::eWDZST;
    using eWDBG = typename WCR_fields_::eWDBG;
    using eWDE = typename WCR_fields_::eWDE;
    using eWDT = typename WCR_fields_::eWDT;
    using eSRS = typename WCR_fields_::eSRS;
    using eWDA = typename WCR_fields_::eWDA;
    using eSRE = typename WCR_fields_::eSRE;
    using eWDW = typename WCR_fields_::eWDW;
    using eWT = typename WCR_fields_::eWT;
    using WDZST = typename WCR_fields_::WDZST;
    using WDBG = typename WCR_fields_::WDBG;
    using WDE = typename WCR_fields_::WDE;
    using WDT = typename WCR_fields_::WDT;
    using SRS = typename WCR_fields_::SRS;
    using WDA = typename WCR_fields_::WDA;
    using SRE = typename WCR_fields_::SRE;
    using WDW = typename WCR_fields_::WDW;
    using WT = typename WCR_fields_::WT;
  };

  // Watchdog Service Register
  struct WSR_fields_ {
    enum class eWSR : std::uint32_t {
      // Write to the Watchdog Service Register (WDOG_WSR).
      eWSR_21845 = 21845,
      // Write to the Watchdog Service Register (WDOG_WSR).
      eWSR_43690 = 43690,
    };

    // WSR
    using WSR = ftl::mmio::Field<16, 0, eWSR, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WSR_fields_

  struct WSR : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename WSR_fields_::WSR> {
    using eWSR = typename WSR_fields_::eWSR;
    using value_ = typename WSR_fields_::WSR;
  };

  // Watchdog Reset Status Register
  struct WRSR_fields_ {
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
  };  // struct WRSR_fields_

  struct WRSR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename WRSR_fields_::SFTW,
      typename WRSR_fields_::TOUT,
      ftl::mmio::Reserved<2, 2>,
      typename WRSR_fields_::POR,
      ftl::mmio::Reserved<11, 5>> {
    using eSFTW = typename WRSR_fields_::eSFTW;
    using eTOUT = typename WRSR_fields_::eTOUT;
    using ePOR = typename WRSR_fields_::ePOR;
    using SFTW = typename WRSR_fields_::SFTW;
    using TOUT = typename WRSR_fields_::TOUT;
    using POR = typename WRSR_fields_::POR;
  };

  // Watchdog Interrupt Control Register
  struct WICR_fields_ {
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
  };  // struct WICR_fields_

  struct WICR : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0004u,
      ftl::mmio::RW,
      typename WICR_fields_::WICT,
      ftl::mmio::Reserved<6, 8>,
      typename WICR_fields_::WTIS,
      typename WICR_fields_::WIE> {
    using eWICT = typename WICR_fields_::eWICT;
    using eWTIS = typename WICR_fields_::eWTIS;
    using eWIE = typename WICR_fields_::eWIE;
    using WICT = typename WICR_fields_::WICT;
    using WTIS = typename WICR_fields_::WTIS;
    using WIE = typename WICR_fields_::WIE;
  };

  // Watchdog Miscellaneous Control Register
  struct WMCR_fields_ {
    enum class ePDE : std::uint32_t {
      // Power Down Counter of WDOG is disabled.
      ePDE_0 = 0,
      // Power Down Counter of WDOG is enabled (Default).
      ePDE_1 = 1,
    };

    // PDE
    using PDE = ftl::mmio::Field<1, 0, ePDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WMCR_fields_

  struct WMCR : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint16_t,
      0x0001u,
      ftl::mmio::RW,
      typename WMCR_fields_::PDE,
      ftl::mmio::Reserved<15, 1>> {
    using ePDE = typename WMCR_fields_::ePDE;
    using PDE = typename WMCR_fields_::PDE;
  };

};

}  // namespace regs