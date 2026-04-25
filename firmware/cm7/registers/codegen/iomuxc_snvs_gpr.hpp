#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC SNVS GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::iomuxc_snvs_gpr {


// GPR0 General Purpose Register
struct GPR_fields_ {
  // General purpose bits
  using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR_fields_

template<std::uint32_t Index>
struct GPR : ftl::mmio::Register<
    0x40C98000u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR_fields_::GPR> {
  static_assert(Index < 32u, "GPR: Index out of range");
  using value_ = GPR_fields_::GPR;
};


// GPR32 General Purpose Register
struct GPR32_fields_ {
  // General purpose bits
  using GPR = ftl::mmio::Field<15, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR32_fields_

struct GPR32 : ftl::mmio::Register<
    0x40C98080u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    GPR32_fields_::GPR,
    GPR32_fields_::LOCK> {
  using GPR = GPR32_fields_::GPR;
  using LOCK = GPR32_fields_::LOCK;
};


// GPR33 General Purpose Register
struct GPR33_fields_ {

  enum class eDCDC_STATUS_CAPT_CLR : std::uint32_t {
    // No change
    eOVER = 0,
    // Clear the 3 bits of DCDC captured status: DCDC_OVER_VOL, DCDC_OVER_CUR, and DCDC_IN_LOW_VOL
    eNO = 1,
  };

  enum class eSNVS_BYPASS_EN : std::uint32_t {
    // Disable bypass
    eNO = 0,
    // Enable bypass
    eOVER = 1,
  };

  enum class eDCDC_IN_LOW_VOL : std::uint32_t {
    // Voltage on DCDC_IN is higher than 2.6V
    eNO = 0,
    // Voltage on DCDC_IN is lower than 2.6V
    eOVER = 1,
  };

  enum class eDCDC_OVER_CUR : std::uint32_t {
    // No Overcurrent on DCDC output
    eNO = 0,
    // Overcurrent on DCDC output
    eOVER = 1,
  };

  enum class eDCDC_OVER_VOL : std::uint32_t {
    // No Overvoltage on DCDC VDDLP0 or VDDLP8 output
    eNO = 0,
    // Overvoltage on DCDC VDDLP0 or VDDLP8 output
    eOVERVOLTAGE = 1,
  };

  enum class eDCDC_STS_DC_OK : std::uint32_t {
    // DCDC is settling
    eDISABLE = 0,
    // DCDC already settled
    eENABLE = 1,
  };

  enum class eSNVS_XTAL_CLK_OK : std::uint32_t {
    // 32K oscillator is NOT stable into normal operation
    eUNSTABLE = 0,
    // 32K oscillator is stable into normal operation
    eSTABLE = 1,
  };
  // DCDC captured status clear
  using DCDC_STATUS_CAPT_CLR = ftl::mmio::Field<1, 1, eDCDC_STATUS_CAPT_CLR, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS LDO_SNVS_ANA bypass enable
  using SNVS_BYPASS_EN = ftl::mmio::Field<1, 2, eSNVS_BYPASS_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // DCDC_IN low voltage detect
  using DCDC_IN_LOW_VOL = ftl::mmio::Field<1, 16, eDCDC_IN_LOW_VOL, ftl::mmio::RO, ftl::mmio::Normal>;
  // DCDC output over current alert
  using DCDC_OVER_CUR = ftl::mmio::Field<1, 17, eDCDC_OVER_CUR, ftl::mmio::RO, ftl::mmio::Normal>;
  // DCDC output over voltage alert
  using DCDC_OVER_VOL = ftl::mmio::Field<1, 18, eDCDC_OVER_VOL, ftl::mmio::RO, ftl::mmio::Normal>;
  // DCDC status OK
  using DCDC_STS_DC_OK = ftl::mmio::Field<1, 19, eDCDC_STS_DC_OK, ftl::mmio::RO, ftl::mmio::Normal>;
  // 32K OSC ok flag
  using SNVS_XTAL_CLK_OK = ftl::mmio::Field<1, 20, eSNVS_XTAL_CLK_OK, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct GPR33_fields_

struct GPR33 : ftl::mmio::Register<
    0x40C98084u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    GPR33_fields_::DCDC_STATUS_CAPT_CLR,
    GPR33_fields_::SNVS_BYPASS_EN,
    ftl::mmio::Reserved<13, 3>,
    GPR33_fields_::DCDC_IN_LOW_VOL,
    GPR33_fields_::DCDC_OVER_CUR,
    GPR33_fields_::DCDC_OVER_VOL,
    GPR33_fields_::DCDC_STS_DC_OK,
    GPR33_fields_::SNVS_XTAL_CLK_OK,
    ftl::mmio::Reserved<11, 21>> {
  using eDCDC_STATUS_CAPT_CLR = GPR33_fields_::eDCDC_STATUS_CAPT_CLR;
  using eSNVS_BYPASS_EN = GPR33_fields_::eSNVS_BYPASS_EN;
  using eDCDC_IN_LOW_VOL = GPR33_fields_::eDCDC_IN_LOW_VOL;
  using eDCDC_OVER_CUR = GPR33_fields_::eDCDC_OVER_CUR;
  using eDCDC_OVER_VOL = GPR33_fields_::eDCDC_OVER_VOL;
  using eDCDC_STS_DC_OK = GPR33_fields_::eDCDC_STS_DC_OK;
  using eSNVS_XTAL_CLK_OK = GPR33_fields_::eSNVS_XTAL_CLK_OK;
  using DCDC_STATUS_CAPT_CLR = GPR33_fields_::DCDC_STATUS_CAPT_CLR;
  using SNVS_BYPASS_EN = GPR33_fields_::SNVS_BYPASS_EN;
  using DCDC_IN_LOW_VOL = GPR33_fields_::DCDC_IN_LOW_VOL;
  using DCDC_OVER_CUR = GPR33_fields_::DCDC_OVER_CUR;
  using DCDC_OVER_VOL = GPR33_fields_::DCDC_OVER_VOL;
  using DCDC_STS_DC_OK = GPR33_fields_::DCDC_STS_DC_OK;
  using SNVS_XTAL_CLK_OK = GPR33_fields_::SNVS_XTAL_CLK_OK;
};


// GPR34 General Purpose Register
struct GPR34_fields_ {

  enum class eLOCK : std::uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };

  enum class eSNVS_CORE_VOLT_DET_TRIM_SEL : std::uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of core voltage detectors used to change the voltage falling trip point are selected from SNVS_CORE_VOLT_DET_TRIM
    eNO1 = 1,
  };

  enum class eSNVS_CLK_DET_TRIM_SEL : std::uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of clock detector used to change the boundary frequencies are selected from SNVS_CLK_DET_TRIM
    eNO1 = 1,
  };

  enum class eSNVS_CLK_DET_OFFSET_HIGH : std::uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };

  enum class eSNVS_CLK_DET_OFFSET_LOW : std::uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };

  enum class eSNVS_CAP_TRIM_SEL : std::uint32_t {
    // The trimming codes are selected from eFuse
    eOVER = 0,
    // The trimming codes are used from SNVS_OSC_CAP_TRIM (osc32k's load capacitor)
    eNO = 1,
  };
  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS core voltage detect trim select
  using SNVS_CORE_VOLT_DET_TRIM_SEL = ftl::mmio::Field<1, 1, eSNVS_CORE_VOLT_DET_TRIM_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS core voltage detect trim
  using SNVS_CORE_VOLT_DET_TRIM = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS clock detect trim select
  using SNVS_CLK_DET_TRIM_SEL = ftl::mmio::Field<1, 7, eSNVS_CLK_DET_TRIM_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS clock detect trim bits
  using SNVS_CLK_DET_TRIM = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS clock detect offset of high boundary frequency
  using SNVS_CLK_DET_OFFSET_HIGH = ftl::mmio::Field<2, 16, eSNVS_CLK_DET_OFFSET_HIGH, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS clock detect offset of low boundary frequency
  using SNVS_CLK_DET_OFFSET_LOW = ftl::mmio::Field<2, 18, eSNVS_CLK_DET_OFFSET_LOW, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS OSC load capacitor trim select
  using SNVS_CAP_TRIM_SEL = ftl::mmio::Field<1, 23, eSNVS_CAP_TRIM_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS OSC load capacitor trim
  using SNVS_OSC_CAP_TRIM = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR34_fields_

struct GPR34 : ftl::mmio::Register<
    0x40C98088u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR34_fields_::LOCK,
    GPR34_fields_::SNVS_CORE_VOLT_DET_TRIM_SEL,
    GPR34_fields_::SNVS_CORE_VOLT_DET_TRIM,
    ftl::mmio::Reserved<3, 4>,
    GPR34_fields_::SNVS_CLK_DET_TRIM_SEL,
    GPR34_fields_::SNVS_CLK_DET_TRIM,
    GPR34_fields_::SNVS_CLK_DET_OFFSET_HIGH,
    GPR34_fields_::SNVS_CLK_DET_OFFSET_LOW,
    ftl::mmio::Reserved<3, 20>,
    GPR34_fields_::SNVS_CAP_TRIM_SEL,
    GPR34_fields_::SNVS_OSC_CAP_TRIM,
    ftl::mmio::Reserved<4, 28>> {
  using eLOCK = GPR34_fields_::eLOCK;
  using eSNVS_CORE_VOLT_DET_TRIM_SEL = GPR34_fields_::eSNVS_CORE_VOLT_DET_TRIM_SEL;
  using eSNVS_CLK_DET_TRIM_SEL = GPR34_fields_::eSNVS_CLK_DET_TRIM_SEL;
  using eSNVS_CLK_DET_OFFSET_HIGH = GPR34_fields_::eSNVS_CLK_DET_OFFSET_HIGH;
  using eSNVS_CLK_DET_OFFSET_LOW = GPR34_fields_::eSNVS_CLK_DET_OFFSET_LOW;
  using eSNVS_CAP_TRIM_SEL = GPR34_fields_::eSNVS_CAP_TRIM_SEL;
  using LOCK = GPR34_fields_::LOCK;
  using SNVS_CORE_VOLT_DET_TRIM_SEL = GPR34_fields_::SNVS_CORE_VOLT_DET_TRIM_SEL;
  using SNVS_CORE_VOLT_DET_TRIM = GPR34_fields_::SNVS_CORE_VOLT_DET_TRIM;
  using SNVS_CLK_DET_TRIM_SEL = GPR34_fields_::SNVS_CLK_DET_TRIM_SEL;
  using SNVS_CLK_DET_TRIM = GPR34_fields_::SNVS_CLK_DET_TRIM;
  using SNVS_CLK_DET_OFFSET_HIGH = GPR34_fields_::SNVS_CLK_DET_OFFSET_HIGH;
  using SNVS_CLK_DET_OFFSET_LOW = GPR34_fields_::SNVS_CLK_DET_OFFSET_LOW;
  using SNVS_CAP_TRIM_SEL = GPR34_fields_::SNVS_CAP_TRIM_SEL;
  using SNVS_OSC_CAP_TRIM = GPR34_fields_::SNVS_OSC_CAP_TRIM;
};


// GPR35 General Purpose Register
struct GPR35_fields_ {

  enum class eLOCK : std::uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };

  enum class eSNVS_VOLT_DET_TRIM_SEL : std::uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of voltage detectors to change the voltage boundaries in battery voltage detecting are selected from SNVS_VOLT_DET_TRIM
    eNO1 = 1,
  };

  enum class eSNVS_TEMP_DET_TRIM_SEL : std::uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes to define the temperature boundaries of temperature detector are selected from SNVS_TEMP_DET_TRIM
    eNO1 = 1,
  };

  enum class eSNVS_TEMP_DET_OFFSET_HIGH : std::uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };

  enum class eSNVS_TEMP_DET_OFFSET_LOW : std::uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };
  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS voltage detect trim select
  using SNVS_VOLT_DET_TRIM_SEL = ftl::mmio::Field<1, 3, eSNVS_VOLT_DET_TRIM_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS voltage detect trim
  using SNVS_VOLT_DET_TRIM = ftl::mmio::Field<8, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS temperature detect trim select
  using SNVS_TEMP_DET_TRIM_SEL = ftl::mmio::Field<1, 15, eSNVS_TEMP_DET_TRIM_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS temperature detect trim
  using SNVS_TEMP_DET_TRIM = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS temperature detect offset of high temperature boundary
  using SNVS_TEMP_DET_OFFSET_HIGH = ftl::mmio::Field<2, 28, eSNVS_TEMP_DET_OFFSET_HIGH, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS temperature detect offset of low temperature boundary
  using SNVS_TEMP_DET_OFFSET_LOW = ftl::mmio::Field<2, 30, eSNVS_TEMP_DET_OFFSET_LOW, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR35_fields_

struct GPR35 : ftl::mmio::Register<
    0x40C9808Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR35_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR35_fields_::SNVS_VOLT_DET_TRIM_SEL,
    GPR35_fields_::SNVS_VOLT_DET_TRIM,
    ftl::mmio::Reserved<3, 12>,
    GPR35_fields_::SNVS_TEMP_DET_TRIM_SEL,
    GPR35_fields_::SNVS_TEMP_DET_TRIM,
    GPR35_fields_::SNVS_TEMP_DET_OFFSET_HIGH,
    GPR35_fields_::SNVS_TEMP_DET_OFFSET_LOW> {
  using eLOCK = GPR35_fields_::eLOCK;
  using eSNVS_VOLT_DET_TRIM_SEL = GPR35_fields_::eSNVS_VOLT_DET_TRIM_SEL;
  using eSNVS_TEMP_DET_TRIM_SEL = GPR35_fields_::eSNVS_TEMP_DET_TRIM_SEL;
  using eSNVS_TEMP_DET_OFFSET_HIGH = GPR35_fields_::eSNVS_TEMP_DET_OFFSET_HIGH;
  using eSNVS_TEMP_DET_OFFSET_LOW = GPR35_fields_::eSNVS_TEMP_DET_OFFSET_LOW;
  using LOCK = GPR35_fields_::LOCK;
  using SNVS_VOLT_DET_TRIM_SEL = GPR35_fields_::SNVS_VOLT_DET_TRIM_SEL;
  using SNVS_VOLT_DET_TRIM = GPR35_fields_::SNVS_VOLT_DET_TRIM;
  using SNVS_TEMP_DET_TRIM_SEL = GPR35_fields_::SNVS_TEMP_DET_TRIM_SEL;
  using SNVS_TEMP_DET_TRIM = GPR35_fields_::SNVS_TEMP_DET_TRIM;
  using SNVS_TEMP_DET_OFFSET_HIGH = GPR35_fields_::SNVS_TEMP_DET_OFFSET_HIGH;
  using SNVS_TEMP_DET_OFFSET_LOW = GPR35_fields_::SNVS_TEMP_DET_OFFSET_LOW;
};


// GPR36 General Purpose Register
struct GPR36_fields_ {

  enum class eSNVSDIG_SNVS1P8_ISO_EN : std::uint32_t {
    // Enable SRAM access (It should be cleared after LDO_SNVS_DIG and SNVS SRAM peripheral power is back)
    eDIS = 0,
    // Enable the isolation to avoid extra leakage power before SNVS SRAM peripheral power or LDO_SNVS_DIG is switched off
    eEN = 1,
  };

  enum class eSNVS_SRAM_SLEEP : std::uint32_t {
    // Enable SRAM access (It should be cleared after LDO_SNVS_DIG is enabled)
    eDIS = 0,
    // SNVS SRAM can go in Shutdown/ Periphery Off Array On/ Periphery On Array Off mode. In addition, this bit ensures power-up without stuck-at /high DC current states and hence must be held to 1 during wake-up, so this bit is default high.
    eEN = 1,
  };

  enum class eSNVS_SRAM_STDBY : std::uint32_t {
    // SNVS SRAM does not enter low leakage state
    eNo = 0,
    // SNVS SRAM enters low leakage state and large drivers are switched OFF
    eDISABLE = 1,
  };

  enum class eSNVS_SRAM_PSWLARGEMP_FORCE : std::uint32_t {
    // Switch on SNVS SRAM power for peripheral
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral (SRAM array power is not impacted, and data can be retained)
    eDISABLE = 1,
  };

  enum class eSNVS_SRAM_PSWLARGE : std::uint32_t {
    // Switch on SNVS SRAM power for peripheral and array
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral and array
    eDISABLE = 1,
  };

  enum class eSNVS_SRAM_PSWSMALLMP_FORCE : std::uint32_t {
    // Switch on SNVS SRAM power for peripheral
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral (SRAM array power is not impacted, and data can be retained)
    eDISABLE = 1,
  };

  enum class eSNVS_SRAM_PSWSMALL : std::uint32_t {
    // Switch on SNVS SRAM power for peripheral and array
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral and array
    eDISABLE = 1,
  };
  // SNVS RAM isolation enable bit
  using SNVSDIG_SNVS1P8_ISO_EN = ftl::mmio::Field<1, 23, eSNVSDIG_SNVS1P8_ISO_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM power-down enable bit
  using SNVS_SRAM_SLEEP = ftl::mmio::Field<1, 26, eSNVS_SRAM_SLEEP, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM standby enable bit
  using SNVS_SRAM_STDBY = ftl::mmio::Field<1, 27, eSNVS_SRAM_STDBY, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM large switch control bit for peripheral
  using SNVS_SRAM_PSWLARGEMP_FORCE = ftl::mmio::Field<1, 28, eSNVS_SRAM_PSWLARGEMP_FORCE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM large switch control bit
  using SNVS_SRAM_PSWLARGE = ftl::mmio::Field<1, 29, eSNVS_SRAM_PSWLARGE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM small switch control bit for peripheral
  using SNVS_SRAM_PSWSMALLMP_FORCE = ftl::mmio::Field<1, 30, eSNVS_SRAM_PSWSMALLMP_FORCE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS SRAM small switch control bit
  using SNVS_SRAM_PSWSMALL = ftl::mmio::Field<1, 31, eSNVS_SRAM_PSWSMALL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR36_fields_

struct GPR36 : ftl::mmio::Register<
    0x40C98090u,
    std::uint32_t,
    0x04800000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<23, 0>,
    GPR36_fields_::SNVSDIG_SNVS1P8_ISO_EN,
    ftl::mmio::Reserved<2, 24>,
    GPR36_fields_::SNVS_SRAM_SLEEP,
    GPR36_fields_::SNVS_SRAM_STDBY,
    GPR36_fields_::SNVS_SRAM_PSWLARGEMP_FORCE,
    GPR36_fields_::SNVS_SRAM_PSWLARGE,
    GPR36_fields_::SNVS_SRAM_PSWSMALLMP_FORCE,
    GPR36_fields_::SNVS_SRAM_PSWSMALL> {
  using eSNVSDIG_SNVS1P8_ISO_EN = GPR36_fields_::eSNVSDIG_SNVS1P8_ISO_EN;
  using eSNVS_SRAM_SLEEP = GPR36_fields_::eSNVS_SRAM_SLEEP;
  using eSNVS_SRAM_STDBY = GPR36_fields_::eSNVS_SRAM_STDBY;
  using eSNVS_SRAM_PSWLARGEMP_FORCE = GPR36_fields_::eSNVS_SRAM_PSWLARGEMP_FORCE;
  using eSNVS_SRAM_PSWLARGE = GPR36_fields_::eSNVS_SRAM_PSWLARGE;
  using eSNVS_SRAM_PSWSMALLMP_FORCE = GPR36_fields_::eSNVS_SRAM_PSWSMALLMP_FORCE;
  using eSNVS_SRAM_PSWSMALL = GPR36_fields_::eSNVS_SRAM_PSWSMALL;
  using SNVSDIG_SNVS1P8_ISO_EN = GPR36_fields_::SNVSDIG_SNVS1P8_ISO_EN;
  using SNVS_SRAM_SLEEP = GPR36_fields_::SNVS_SRAM_SLEEP;
  using SNVS_SRAM_STDBY = GPR36_fields_::SNVS_SRAM_STDBY;
  using SNVS_SRAM_PSWLARGEMP_FORCE = GPR36_fields_::SNVS_SRAM_PSWLARGEMP_FORCE;
  using SNVS_SRAM_PSWLARGE = GPR36_fields_::SNVS_SRAM_PSWLARGE;
  using SNVS_SRAM_PSWSMALLMP_FORCE = GPR36_fields_::SNVS_SRAM_PSWSMALLMP_FORCE;
  using SNVS_SRAM_PSWSMALL = GPR36_fields_::SNVS_SRAM_PSWSMALL;
};


// GPR37 General Purpose Register
struct GPR37_fields_ {

  enum class eLOCK : std::uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };
  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS tamper detect pin pull enable bit
  using SNVS_TAMPER_PUE = ftl::mmio::Field<10, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS tamper detect pin pull selection bit
  using SNVS_TAMPER_PUS = ftl::mmio::Field<10, 11, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR37_fields_

struct GPR37 : ftl::mmio::Register<
    0x40C98094u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR37_fields_::LOCK,
    GPR37_fields_::SNVS_TAMPER_PUE,
    GPR37_fields_::SNVS_TAMPER_PUS,
    ftl::mmio::Reserved<11, 21>> {
  using eLOCK = GPR37_fields_::eLOCK;
  using LOCK = GPR37_fields_::LOCK;
  using SNVS_TAMPER_PUE = GPR37_fields_::SNVS_TAMPER_PUE;
  using SNVS_TAMPER_PUS = GPR37_fields_::SNVS_TAMPER_PUS;
};

}  // namespace regs::iomuxc_snvs_gpr