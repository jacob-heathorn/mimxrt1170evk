#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Vmbandgap {
  // Analog Control Register CTRL0
  struct Ctrl0Fields {
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
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0Fields::REFTOP_PWD,
      Ctrl0Fields::REFTOP_LINREGREF_PWD,
      Ctrl0Fields::REFTOP_PWDVBGUP,
      Ctrl0Fields::REFTOP_LOWPOWER,
      Ctrl0Fields::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = Ctrl0Fields::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = Ctrl0Fields::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = Ctrl0Fields::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = Ctrl0Fields::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = Ctrl0Fields::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct Ctrl0SetFields {
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
  };  // struct Ctrl0SetFields

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0SetFields::REFTOP_PWD,
      Ctrl0SetFields::REFTOP_LINREGREF_PWD,
      Ctrl0SetFields::REFTOP_PWDVBGUP,
      Ctrl0SetFields::REFTOP_LOWPOWER,
      Ctrl0SetFields::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = Ctrl0SetFields::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = Ctrl0SetFields::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = Ctrl0SetFields::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = Ctrl0SetFields::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = Ctrl0SetFields::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct Ctrl0ClrFields {
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
  };  // struct Ctrl0ClrFields

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0ClrFields::REFTOP_PWD,
      Ctrl0ClrFields::REFTOP_LINREGREF_PWD,
      Ctrl0ClrFields::REFTOP_PWDVBGUP,
      Ctrl0ClrFields::REFTOP_LOWPOWER,
      Ctrl0ClrFields::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = Ctrl0ClrFields::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = Ctrl0ClrFields::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = Ctrl0ClrFields::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = Ctrl0ClrFields::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = Ctrl0ClrFields::REFTOP_SELFBIASOFF;
  };

  // Analog Control Register CTRL0
  struct Ctrl0TogFields {
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
  };  // struct Ctrl0TogFields

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0TogFields::REFTOP_PWD,
      Ctrl0TogFields::REFTOP_LINREGREF_PWD,
      Ctrl0TogFields::REFTOP_PWDVBGUP,
      Ctrl0TogFields::REFTOP_LOWPOWER,
      Ctrl0TogFields::REFTOP_SELFBIASOFF,
      ftl::mmio::Reserved<27, 5>> {
    using REFTOP_PWD = Ctrl0TogFields::REFTOP_PWD;
    using REFTOP_LINREGREF_PWD = Ctrl0TogFields::REFTOP_LINREGREF_PWD;
    using REFTOP_PWDVBGUP = Ctrl0TogFields::REFTOP_PWDVBGUP;
    using REFTOP_LOWPOWER = Ctrl0TogFields::REFTOP_LOWPOWER;
    using REFTOP_SELFBIASOFF = Ctrl0TogFields::REFTOP_SELFBIASOFF;
  };

  // Analog Status Register STAT0
  struct Stat0Fields {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Stat0Fields

  struct STAT0 : ftl::mmio::Register<
      0x00000050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0Fields::REFTOP_VBGUP,
      Stat0Fields::VDD1_PORB,
      Stat0Fields::VDD2_PORB,
      Stat0Fields::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = Stat0Fields::REFTOP_VBGUP;
    using VDD1_PORB = Stat0Fields::VDD1_PORB;
    using VDD2_PORB = Stat0Fields::VDD2_PORB;
    using VDD3_PORB = Stat0Fields::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct Stat0SetFields {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  };  // struct Stat0SetFields

  struct STAT0_SET : ftl::mmio::Register<
      0x00000054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0SetFields::REFTOP_VBGUP,
      Stat0SetFields::VDD1_PORB,
      Stat0SetFields::VDD2_PORB,
      Stat0SetFields::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = Stat0SetFields::REFTOP_VBGUP;
    using VDD1_PORB = Stat0SetFields::VDD1_PORB;
    using VDD2_PORB = Stat0SetFields::VDD2_PORB;
    using VDD3_PORB = Stat0SetFields::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct Stat0ClrFields {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  };  // struct Stat0ClrFields

  struct STAT0_CLR : ftl::mmio::Register<
      0x00000058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0ClrFields::REFTOP_VBGUP,
      Stat0ClrFields::VDD1_PORB,
      Stat0ClrFields::VDD2_PORB,
      Stat0ClrFields::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = Stat0ClrFields::REFTOP_VBGUP;
    using VDD1_PORB = Stat0ClrFields::VDD1_PORB;
    using VDD2_PORB = Stat0ClrFields::VDD2_PORB;
    using VDD3_PORB = Stat0ClrFields::VDD3_PORB;
  };

  // Analog Status Register STAT0
  struct Stat0TogFields {
    // Brief description here
    using REFTOP_VBGUP = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD1_PORB = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD2_PORB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Brief description here
    using VDD3_PORB = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  };  // struct Stat0TogFields

  struct STAT0_TOG : ftl::mmio::Register<
      0x0000005Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0TogFields::REFTOP_VBGUP,
      Stat0TogFields::VDD1_PORB,
      Stat0TogFields::VDD2_PORB,
      Stat0TogFields::VDD3_PORB,
      ftl::mmio::Reserved<28, 4>> {
    using REFTOP_VBGUP = Stat0TogFields::REFTOP_VBGUP;
    using VDD1_PORB = Stat0TogFields::VDD1_PORB;
    using VDD2_PORB = Stat0TogFields::VDD2_PORB;
    using VDD3_PORB = Stat0TogFields::VDD3_PORB;
  };

};

}  // namespace regs