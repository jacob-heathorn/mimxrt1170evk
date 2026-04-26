#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// KPP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Kpp {
  // Keypad Control Register
  struct KPCR_fields_ {
    enum class eKRE : std::uint32_t {
      // Row is not included in the keypad key press detect.
      eKRE_0 = 0,
      // Row is included in the keypad key press detect.
      eKRE_1 = 1,
    };

    enum class eKCO : std::uint32_t {
      // Column strobe output is totem pole drive.
      eTOTEM_POLE = 0,
      // Column strobe output is open drain.
      eOPEN_DRAIN = 1,
    };

    // KRE
    using KRE = ftl::mmio::Field<8, 0, eKRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // KCO
    using KCO = ftl::mmio::Field<8, 8, eKCO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KPCR_fields_

  struct KPCR : ftl::mmio::Register<
      0x400E0000u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KPCR_fields_::KRE,
      KPCR_fields_::KCO> {
    using eKRE = KPCR_fields_::eKRE;
    using eKCO = KPCR_fields_::eKCO;
    using KRE = KPCR_fields_::KRE;
    using KCO = KPCR_fields_::KCO;
  };

  // Keypad Status Register
  struct KPSR_fields_ {
    enum class eKPKD : std::uint32_t {
      // No key presses detected
      eKPKD_0 = 0,
      // A key has been depressed
      eKPKD_1 = 1,
    };

    enum class eKPKR : std::uint32_t {
      // No key release detected
      eKPKR_0 = 0,
      // All keys have been released
      eKPKR_1 = 1,
    };

    enum class eKDSC : std::uint32_t {
      // No effect
      eKDSC_0 = 0,
      // Set bits that clear the keypad depress synchronizer chain
      eKDSC_1 = 1,
    };

    enum class eKRSS : std::uint32_t {
      // No effect
      eKRSS_0 = 0,
      // Set bits which sets keypad release synchronizer chain
      eKRSS_1 = 1,
    };

    enum class eKDIE : std::uint32_t {
      // No interrupt request is generated when KPKD is set.
      eKDIE_0 = 0,
      // An interrupt request is generated when KPKD is set.
      eKDIE_1 = 1,
    };

    enum class eKRIE : std::uint32_t {
      // No interrupt request is generated when KPKR is set.
      eKRIE_0 = 0,
      // An interrupt request is generated when KPKR is set.
      eKRIE_1 = 1,
    };

    // KPKD
    using KPKD = ftl::mmio::Field<1, 0, eKPKD, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // KPKR
    using KPKR = ftl::mmio::Field<1, 1, eKPKR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // KDSC
    using KDSC = ftl::mmio::Field<1, 2, eKDSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // KRSS
    using KRSS = ftl::mmio::Field<1, 3, eKRSS, ftl::mmio::RW, ftl::mmio::Normal>;
    // KDIE
    using KDIE = ftl::mmio::Field<1, 8, eKDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // KRIE
    using KRIE = ftl::mmio::Field<1, 9, eKRIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KPSR_fields_

  struct KPSR : ftl::mmio::Register<
      0x400E0002u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      KPSR_fields_::KPKD,
      KPSR_fields_::KPKR,
      KPSR_fields_::KDSC,
      KPSR_fields_::KRSS,
      ftl::mmio::Reserved<4, 4>,
      KPSR_fields_::KDIE,
      KPSR_fields_::KRIE,
      ftl::mmio::Reserved<6, 10>> {
    using eKPKD = KPSR_fields_::eKPKD;
    using eKPKR = KPSR_fields_::eKPKR;
    using eKDSC = KPSR_fields_::eKDSC;
    using eKRSS = KPSR_fields_::eKRSS;
    using eKDIE = KPSR_fields_::eKDIE;
    using eKRIE = KPSR_fields_::eKRIE;
    using KPKD = KPSR_fields_::KPKD;
    using KPKR = KPSR_fields_::KPKR;
    using KDSC = KPSR_fields_::KDSC;
    using KRSS = KPSR_fields_::KRSS;
    using KDIE = KPSR_fields_::KDIE;
    using KRIE = KPSR_fields_::KRIE;
  };

  // Keypad Data Direction Register
  struct KDDR_fields_ {
    enum class eKRDD : std::uint32_t {
      // ROWn pin configured as an input.
      eINPUT = 0,
      // ROWn pin configured as an output.
      eOUTPUT = 1,
    };

    enum class eKCDD : std::uint32_t {
      // COLn pin is configured as an input.
      eINPUT = 0,
      // COLn pin is configured as an output.
      eOUTPUT = 1,
    };

    // KRDD
    using KRDD = ftl::mmio::Field<8, 0, eKRDD, ftl::mmio::RW, ftl::mmio::Normal>;
    // KCDD
    using KCDD = ftl::mmio::Field<8, 8, eKCDD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KDDR_fields_

  struct KDDR : ftl::mmio::Register<
      0x400E0004u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KDDR_fields_::KRDD,
      KDDR_fields_::KCDD> {
    using eKRDD = KDDR_fields_::eKRDD;
    using eKCDD = KDDR_fields_::eKCDD;
    using KRDD = KDDR_fields_::KRDD;
    using KCDD = KDDR_fields_::KCDD;
  };

  // Keypad Data Register
  struct KPDR_fields_ {
    // KRD
    using KRD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // KCD
    using KCD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KPDR_fields_

  struct KPDR : ftl::mmio::Register<
      0x400E0006u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KPDR_fields_::KRD,
      KPDR_fields_::KCD> {
    using KRD = KPDR_fields_::KRD;
    using KCD = KPDR_fields_::KCD;
  };

};

}  // namespace regs