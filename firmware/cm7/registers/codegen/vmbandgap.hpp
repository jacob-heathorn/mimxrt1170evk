#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Vmbandgap {
  // Analog Control Register CTRL0
  struct CTRL0_fields_ {
    // Master power-down for bandgap module
    using REFTOP_PWD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power-down for bandgap voltage-reference buffer
    using REFTOP_LINREGREF_PWD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power-down VBGUP detector in bandgap
    using REFTOP_PWDVBGUP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Low-power control bit
    using REFTOP_LOWPOWER = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // bandgap self-bias control bit
    using REFTOP_SELFBIASOFF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL0_fields_

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_fields_::REFTOP_PWD,
      CTRL0_fields_::REFTOP_LINREGREF_PWD,
      CTRL0_fields_::REFTOP_PWDVBGUP,
      CTRL0_fields_::REFTOP_LOWPOWER,
      CTRL0_fields_::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = CTRL0_fields_::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = CTRL0_fields_::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = CTRL0_fields_::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = CTRL0_fields_::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = CTRL0_fields_::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct CTRL0_SET_fields_ {
    // Master power-down for bandgap module
    using REFTOP_PWD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Power-down for bandgap voltage-reference buffer
    using REFTOP_LINREGREF_PWD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Power-down VBGUP detector in bandgap
    using REFTOP_PWDVBGUP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Low-power control bit
    using REFTOP_LOWPOWER = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // bandgap self-bias control bit
    using REFTOP_SELFBIASOFF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct CTRL0_SET_fields_

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_SET_fields_::REFTOP_PWD,
      CTRL0_SET_fields_::REFTOP_LINREGREF_PWD,
      CTRL0_SET_fields_::REFTOP_PWDVBGUP,
      CTRL0_SET_fields_::REFTOP_LOWPOWER,
      CTRL0_SET_fields_::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = CTRL0_SET_fields_::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = CTRL0_SET_fields_::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = CTRL0_SET_fields_::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = CTRL0_SET_fields_::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = CTRL0_SET_fields_::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct CTRL0_CLR_fields_ {
    // Master power-down for bandgap module
    using REFTOP_PWD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Power-down for bandgap voltage-reference buffer
    using REFTOP_LINREGREF_PWD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Power-down VBGUP detector in bandgap
    using REFTOP_PWDVBGUP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Low-power control bit
    using REFTOP_LOWPOWER = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // bandgap self-bias control bit
    using REFTOP_SELFBIASOFF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CTRL0_CLR_fields_

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_CLR_fields_::REFTOP_PWD,
      CTRL0_CLR_fields_::REFTOP_LINREGREF_PWD,
      CTRL0_CLR_fields_::REFTOP_PWDVBGUP,
      CTRL0_CLR_fields_::REFTOP_LOWPOWER,
      CTRL0_CLR_fields_::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = CTRL0_CLR_fields_::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = CTRL0_CLR_fields_::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = CTRL0_CLR_fields_::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = CTRL0_CLR_fields_::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = CTRL0_CLR_fields_::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct CTRL0_TOG_fields_ {
    // Master power-down for bandgap module
    using REFTOP_PWD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Power-down for bandgap voltage-reference buffer
    using REFTOP_LINREGREF_PWD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Power-down VBGUP detector in bandgap
    using REFTOP_PWDVBGUP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Low-power control bit
    using REFTOP_LOWPOWER = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // bandgap self-bias control bit
    using REFTOP_SELFBIASOFF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct CTRL0_TOG_fields_

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_TOG_fields_::REFTOP_PWD,
      CTRL0_TOG_fields_::REFTOP_LINREGREF_PWD,
      CTRL0_TOG_fields_::REFTOP_PWDVBGUP,
      CTRL0_TOG_fields_::REFTOP_LOWPOWER,
      CTRL0_TOG_fields_::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = CTRL0_TOG_fields_::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = CTRL0_TOG_fields_::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = CTRL0_TOG_fields_::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = CTRL0_TOG_fields_::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = CTRL0_TOG_fields_::REFTOP_SELFBIASOFF;
  };

  // Analog Status Register STAT0
  struct STAT0_fields_ {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STAT0_fields_

  struct STAT0 : ftl::mmio::Register<
      0x00000050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      STAT0_fields_::REFTOP_VBGUP,
      STAT0_fields_::VDD1_PORB,
      STAT0_fields_::VDD2_PORB,
      STAT0_fields_::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = STAT0_fields_::REFTOP_VBGUP;
    using VDD1_PORB = STAT0_fields_::VDD1_PORB;
    using VDD2_PORB = STAT0_fields_::VDD2_PORB;
    using VDD3_PORB = STAT0_fields_::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct STAT0_SET_fields_ {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  };  // struct STAT0_SET_fields_

  struct STAT0_SET : ftl::mmio::Register<
      0x00000054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      STAT0_SET_fields_::REFTOP_VBGUP,
      STAT0_SET_fields_::VDD1_PORB,
      STAT0_SET_fields_::VDD2_PORB,
      STAT0_SET_fields_::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = STAT0_SET_fields_::REFTOP_VBGUP;
    using VDD1_PORB = STAT0_SET_fields_::VDD1_PORB;
    using VDD2_PORB = STAT0_SET_fields_::VDD2_PORB;
    using VDD3_PORB = STAT0_SET_fields_::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct STAT0_CLR_fields_ {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  };  // struct STAT0_CLR_fields_

  struct STAT0_CLR : ftl::mmio::Register<
      0x00000058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      STAT0_CLR_fields_::REFTOP_VBGUP,
      STAT0_CLR_fields_::VDD1_PORB,
      STAT0_CLR_fields_::VDD2_PORB,
      STAT0_CLR_fields_::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = STAT0_CLR_fields_::REFTOP_VBGUP;
    using VDD1_PORB = STAT0_CLR_fields_::VDD1_PORB;
    using VDD2_PORB = STAT0_CLR_fields_::VDD2_PORB;
    using VDD3_PORB = STAT0_CLR_fields_::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct STAT0_TOG_fields_ {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  };  // struct STAT0_TOG_fields_

  struct STAT0_TOG : ftl::mmio::Register<
      0x0000005Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      STAT0_TOG_fields_::REFTOP_VBGUP,
      STAT0_TOG_fields_::VDD1_PORB,
      STAT0_TOG_fields_::VDD2_PORB,
      STAT0_TOG_fields_::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = STAT0_TOG_fields_::REFTOP_VBGUP;
    using VDD1_PORB = STAT0_TOG_fields_::VDD1_PORB;
    using VDD2_PORB = STAT0_TOG_fields_::VDD2_PORB;
    using VDD3_PORB = STAT0_TOG_fields_::VDD3_PORB;
  };

};

}  // namespace regs