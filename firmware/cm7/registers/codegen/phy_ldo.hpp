#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::phy_ldo {

// Analog Control Register CTRL0
struct CTRL0_fields_ {
  enum class eLINREG_PWRUPLOAD_DIS : std::uint32_t {
    // Internal pull-down enabled
    eLINREG_PWRUPLOAD_DIS_0 = 0,
    // Internal pull-down disabled
    eLINREG_PWRUPLOAD_DIS_1 = 1,
  };

  enum class eLINREG_OUTPUT_TRG : std::uint32_t {
    // Set output voltage to x.xV
    eLINREG_OUTPUT_TRG_0 = 0,
    // Sets output voltage to 1.0V
    eLINREG_OUTPUT_TRG_16 = 16,
    // Set output voltage to x.xV
    eLINREG_OUTPUT_TRG_31 = 31,
  };

  // LinrReg master enable
  using LINREG_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // LinReg power-up load disable
  using LINREG_PWRUPLOAD_DIS = ftl::mmio::Field<1, 1, eLINREG_PWRUPLOAD_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // LinReg current-limit enable
  using LINREG_ILIMIT_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // LinReg output voltage target setting
  using LINREG_OUTPUT_TRG = ftl::mmio::Field<5, 4, eLINREG_OUTPUT_TRG, ftl::mmio::RW, ftl::mmio::Normal>;
  // Isolation control for attached PHY load
  using LINREG_PHY_ISO_B = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL0_fields_

struct CTRL0 : ftl::mmio::Register<
    0x00000000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL0_fields_::LINREG_EN,
    CTRL0_fields_::LINREG_PWRUPLOAD_DIS,
    CTRL0_fields_::LINREG_ILIMIT_EN,
    ftl::mmio::Reserved<1, 3>,
    CTRL0_fields_::LINREG_OUTPUT_TRG,
    ftl::mmio::Reserved<6, 9>,
    CTRL0_fields_::LINREG_PHY_ISO_B,
    ftl::mmio::Reserved<16, 16>> {
  using eLINREG_PWRUPLOAD_DIS = CTRL0_fields_::eLINREG_PWRUPLOAD_DIS;
  using eLINREG_OUTPUT_TRG = CTRL0_fields_::eLINREG_OUTPUT_TRG;
  using LINREG_EN = CTRL0_fields_::LINREG_EN;
  using LINREG_PWRUPLOAD_DIS = CTRL0_fields_::LINREG_PWRUPLOAD_DIS;
  using LINREG_ILIMIT_EN = CTRL0_fields_::LINREG_ILIMIT_EN;
  using LINREG_OUTPUT_TRG = CTRL0_fields_::LINREG_OUTPUT_TRG;
  using LINREG_PHY_ISO_B = CTRL0_fields_::LINREG_PHY_ISO_B;
};

// Analog Control Register CTRL0
struct CTRL0_SET_fields_ {
  // LinrReg master enable
  using LINREG_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // LinReg power-up load disable
  using LINREG_PWRUPLOAD_DIS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // LinReg current-limit enable
  using LINREG_ILIMIT_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // LinReg output voltage target setting
  using LINREG_OUTPUT_TRG = ftl::mmio::Field<5, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Isolation control for attached PHY load
  using LINREG_PHY_ISO_B = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL0_SET_fields_

struct CTRL0_SET : ftl::mmio::Register<
    0x00000004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL0_SET_fields_::LINREG_EN,
    CTRL0_SET_fields_::LINREG_PWRUPLOAD_DIS,
    CTRL0_SET_fields_::LINREG_ILIMIT_EN,
    ftl::mmio::Reserved<1, 3>,
    CTRL0_SET_fields_::LINREG_OUTPUT_TRG,
    ftl::mmio::Reserved<6, 9>,
    CTRL0_SET_fields_::LINREG_PHY_ISO_B,
    ftl::mmio::Reserved<16, 16>> {
  using LINREG_EN = CTRL0_SET_fields_::LINREG_EN;
  using LINREG_PWRUPLOAD_DIS = CTRL0_SET_fields_::LINREG_PWRUPLOAD_DIS;
  using LINREG_ILIMIT_EN = CTRL0_SET_fields_::LINREG_ILIMIT_EN;
  using LINREG_OUTPUT_TRG = CTRL0_SET_fields_::LINREG_OUTPUT_TRG;
  using LINREG_PHY_ISO_B = CTRL0_SET_fields_::LINREG_PHY_ISO_B;
};

// Analog Control Register CTRL0
struct CTRL0_CLR_fields_ {
  // LinrReg master enable
  using LINREG_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LinReg power-up load disable
  using LINREG_PWRUPLOAD_DIS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LinReg current-limit enable
  using LINREG_ILIMIT_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LinReg output voltage target setting
  using LINREG_OUTPUT_TRG = ftl::mmio::Field<5, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Isolation control for attached PHY load
  using LINREG_PHY_ISO_B = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL0_CLR_fields_

struct CTRL0_CLR : ftl::mmio::Register<
    0x00000008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL0_CLR_fields_::LINREG_EN,
    CTRL0_CLR_fields_::LINREG_PWRUPLOAD_DIS,
    CTRL0_CLR_fields_::LINREG_ILIMIT_EN,
    ftl::mmio::Reserved<1, 3>,
    CTRL0_CLR_fields_::LINREG_OUTPUT_TRG,
    ftl::mmio::Reserved<6, 9>,
    CTRL0_CLR_fields_::LINREG_PHY_ISO_B,
    ftl::mmio::Reserved<16, 16>> {
  using LINREG_EN = CTRL0_CLR_fields_::LINREG_EN;
  using LINREG_PWRUPLOAD_DIS = CTRL0_CLR_fields_::LINREG_PWRUPLOAD_DIS;
  using LINREG_ILIMIT_EN = CTRL0_CLR_fields_::LINREG_ILIMIT_EN;
  using LINREG_OUTPUT_TRG = CTRL0_CLR_fields_::LINREG_OUTPUT_TRG;
  using LINREG_PHY_ISO_B = CTRL0_CLR_fields_::LINREG_PHY_ISO_B;
};

// Analog Control Register CTRL0
struct CTRL0_TOG_fields_ {
  // LinrReg master enable
  using LINREG_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // LinReg power-up load disable
  using LINREG_PWRUPLOAD_DIS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // LinReg current-limit enable
  using LINREG_ILIMIT_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // LinReg output voltage target setting
  using LINREG_OUTPUT_TRG = ftl::mmio::Field<5, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Isolation control for attached PHY load
  using LINREG_PHY_ISO_B = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL0_TOG_fields_

struct CTRL0_TOG : ftl::mmio::Register<
    0x0000000Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL0_TOG_fields_::LINREG_EN,
    CTRL0_TOG_fields_::LINREG_PWRUPLOAD_DIS,
    CTRL0_TOG_fields_::LINREG_ILIMIT_EN,
    ftl::mmio::Reserved<1, 3>,
    CTRL0_TOG_fields_::LINREG_OUTPUT_TRG,
    ftl::mmio::Reserved<6, 9>,
    CTRL0_TOG_fields_::LINREG_PHY_ISO_B,
    ftl::mmio::Reserved<16, 16>> {
  using LINREG_EN = CTRL0_TOG_fields_::LINREG_EN;
  using LINREG_PWRUPLOAD_DIS = CTRL0_TOG_fields_::LINREG_PWRUPLOAD_DIS;
  using LINREG_ILIMIT_EN = CTRL0_TOG_fields_::LINREG_ILIMIT_EN;
  using LINREG_OUTPUT_TRG = CTRL0_TOG_fields_::LINREG_OUTPUT_TRG;
  using LINREG_PHY_ISO_B = CTRL0_TOG_fields_::LINREG_PHY_ISO_B;
};

// Analog Status Register STAT0
struct STAT0_fields_ {
  // LinReg Status Bits
  using LINREG_STAT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STAT0_fields_

struct STAT0 : ftl::mmio::Register<
    0x00000050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_fields_::LINREG_STAT,
    ftl::mmio::Reserved<28, 4>> {
  using LINREG_STAT = STAT0_fields_::LINREG_STAT;
};

// Analog Status Register STAT0
struct STAT0_SET_fields_ {
  // LinReg Status Bits
  using LINREG_STAT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct STAT0_SET_fields_

struct STAT0_SET : ftl::mmio::Register<
    0x00000054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_SET_fields_::LINREG_STAT,
    ftl::mmio::Reserved<28, 4>> {
  using LINREG_STAT = STAT0_SET_fields_::LINREG_STAT;
};

// Analog Status Register STAT0
struct STAT0_CLR_fields_ {
  // LinReg Status Bits
  using LINREG_STAT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct STAT0_CLR_fields_

struct STAT0_CLR : ftl::mmio::Register<
    0x00000058u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_CLR_fields_::LINREG_STAT,
    ftl::mmio::Reserved<28, 4>> {
  using LINREG_STAT = STAT0_CLR_fields_::LINREG_STAT;
};

// Analog Status Register STAT0
struct STAT0_TOG_fields_ {
  // LinReg Status Bits
  using LINREG_STAT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct STAT0_TOG_fields_

struct STAT0_TOG : ftl::mmio::Register<
    0x0000005Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_TOG_fields_::LINREG_STAT,
    ftl::mmio::Reserved<28, 4>> {
  using LINREG_STAT = STAT0_TOG_fields_::LINREG_STAT;
};

}  // namespace regs::phy_ldo