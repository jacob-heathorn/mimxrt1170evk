#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// KPP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Kpp {
  // Keypad Control Register
  struct KpcrFields {
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
  };  // struct KpcrFields

  struct KPCR : ftl::mmio::Register<
      0x400E0000u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KpcrFields::KRE,
      KpcrFields::KCO> {
    using eKRE = KpcrFields::eKRE;
    using eKCO = KpcrFields::eKCO;
    using KRE = KpcrFields::KRE;
    using KCO = KpcrFields::KCO;
  };

  // Keypad Status Register
  struct KpsrFields {
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
  };  // struct KpsrFields

  struct KPSR : ftl::mmio::Register<
      0x400E0002u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      KpsrFields::KPKD,
      KpsrFields::KPKR,
      KpsrFields::KDSC,
      KpsrFields::KRSS,
      ftl::mmio::Reserved<4, 4>,
      KpsrFields::KDIE,
      KpsrFields::KRIE,
      ftl::mmio::Reserved<6, 10>> {
    using eKPKD = KpsrFields::eKPKD;
    using eKPKR = KpsrFields::eKPKR;
    using eKDSC = KpsrFields::eKDSC;
    using eKRSS = KpsrFields::eKRSS;
    using eKDIE = KpsrFields::eKDIE;
    using eKRIE = KpsrFields::eKRIE;
    using KPKD = KpsrFields::KPKD;
    using KPKR = KpsrFields::KPKR;
    using KDSC = KpsrFields::KDSC;
    using KRSS = KpsrFields::KRSS;
    using KDIE = KpsrFields::KDIE;
    using KRIE = KpsrFields::KRIE;
  };

  // Keypad Data Direction Register
  struct KddrFields {
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
  };  // struct KddrFields

  struct KDDR : ftl::mmio::Register<
      0x400E0004u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KddrFields::KRDD,
      KddrFields::KCDD> {
    using eKRDD = KddrFields::eKRDD;
    using eKCDD = KddrFields::eKCDD;
    using KRDD = KddrFields::KRDD;
    using KCDD = KddrFields::KCDD;
  };

  // Keypad Data Register
  struct KpdrFields {
    // KRD
    using KRD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // KCD
    using KCD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KpdrFields

  struct KPDR : ftl::mmio::Register<
      0x400E0006u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      KpdrFields::KRD,
      KpdrFields::KCD> {
    using KRD = KpdrFields::KRD;
    using KCD = KpdrFields::KCD;
  };

};

}  // namespace regs