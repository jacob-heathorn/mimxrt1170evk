#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Fractional PLL
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct EthernetPll {
  // Fractional PLL Control Register
  struct Ctrl0Fields {
    enum class eENABLE_ALT : std::uint32_t {
      // Disable the alternate clock output
      eDISABLE = 0,
      // Enable the alternate clock output which is the output of the post_divider, and cannot be bypassed
      eENABLE = 1,
    };

    enum class eHOLD_RING_OFF : std::uint32_t {
      // Normal operation
      eNORMAL = 0,
      // Initialize PLL start up
      eENABLE = 1,
    };

    enum class ePOWERUP : std::uint32_t {
      // Power down the PLL
      ePDOWN = 0,
      // Power Up the PLL
      ePUP = 1,
    };

    enum class eENABLE : std::uint32_t {
      // Disable the clock output
      eDISABLE = 0,
      // Enable the clock output
      eENABLE = 1,
    };

    enum class eBYPASS : std::uint32_t {
      // No Bypass
      eNOBYPASS = 0,
      // Bypass the PLL
      eBYPASS = 1,
    };

    enum class eDITHER_EN : std::uint32_t {
      // Disable Dither
      eDISABLE = 0,
      // Enable Dither
      eENABLE = 1,
    };

    enum class ePOST_DIV_SEL : std::uint32_t {
      // Divide by 1
      eDIVIDE1 = 0,
      // Divide by 2
      eDIVIDE2 = 1,
      // Divide by 4
      eDIVIDE4 = 2,
      // Divide by 8
      eDIVIDE8 = 3,
      // Divide by 16
      eDIVIDE16 = 4,
      // Divide by 32
      eDIVIDE32 = 5,
    };

    enum class eBIAS_SELECT : std::uint32_t {
      // Used in SoCs with a bias current of 10uA
      eBAIS10 = 0,
      // Used in SoCs with a bias current of 2uA
      eBAIS2 = 1,
    };

    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE_ALT
    using ENABLE_ALT = ftl::mmio::Field<1, 8, eENABLE_ALT, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 13, eHOLD_RING_OFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // POWERUP
    using POWERUP = ftl::mmio::Field<1, 14, ePOWERUP, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // BYPASS
    using BYPASS = ftl::mmio::Field<1, 16, eBYPASS, ftl::mmio::RW, ftl::mmio::Normal>;
    // DITHER_EN
    using DITHER_EN = ftl::mmio::Field<1, 17, eDITHER_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // BIAS_TRIM
    using BIAS_TRIM = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_REG_EN
    using PLL_REG_EN = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Post Divide Select
    using POST_DIV_SEL = ftl::mmio::Field<3, 25, ePOST_DIV_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // BIAS_SELECT
    using BIAS_SELECT = ftl::mmio::Field<1, 29, eBIAS_SELECT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0Fields::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      Ctrl0Fields::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      Ctrl0Fields::HOLD_RING_OFF,
      Ctrl0Fields::POWERUP,
      Ctrl0Fields::ENABLE,
      Ctrl0Fields::BYPASS,
      Ctrl0Fields::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      Ctrl0Fields::BIAS_TRIM,
      Ctrl0Fields::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      Ctrl0Fields::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      Ctrl0Fields::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using eENABLE_ALT = Ctrl0Fields::eENABLE_ALT;
    using eHOLD_RING_OFF = Ctrl0Fields::eHOLD_RING_OFF;
    using ePOWERUP = Ctrl0Fields::ePOWERUP;
    using eENABLE = Ctrl0Fields::eENABLE;
    using eBYPASS = Ctrl0Fields::eBYPASS;
    using eDITHER_EN = Ctrl0Fields::eDITHER_EN;
    using ePOST_DIV_SEL = Ctrl0Fields::ePOST_DIV_SEL;
    using eBIAS_SELECT = Ctrl0Fields::eBIAS_SELECT;
    using DIV_SELECT = Ctrl0Fields::DIV_SELECT;
    using ENABLE_ALT = Ctrl0Fields::ENABLE_ALT;
    using HOLD_RING_OFF = Ctrl0Fields::HOLD_RING_OFF;
    using POWERUP = Ctrl0Fields::POWERUP;
    using ENABLE = Ctrl0Fields::ENABLE;
    using BYPASS = Ctrl0Fields::BYPASS;
    using DITHER_EN = Ctrl0Fields::DITHER_EN;
    using BIAS_TRIM = Ctrl0Fields::BIAS_TRIM;
    using PLL_REG_EN = Ctrl0Fields::PLL_REG_EN;
    using POST_DIV_SEL = Ctrl0Fields::POST_DIV_SEL;
    using BIAS_SELECT = Ctrl0Fields::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct Ctrl0SetFields {
    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // ENABLE_ALT
    using ENABLE_ALT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // POWERUP
    using POWERUP = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // BYPASS
    using BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // DITHER_EN
    using DITHER_EN = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // BIAS_TRIM
    using BIAS_TRIM = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // PLL_REG_EN
    using PLL_REG_EN = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Post Divide Select
    using POST_DIV_SEL = ftl::mmio::Field<3, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // BIAS_SELECT
    using BIAS_SELECT = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl0SetFields

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0SetFields::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      Ctrl0SetFields::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      Ctrl0SetFields::HOLD_RING_OFF,
      Ctrl0SetFields::POWERUP,
      Ctrl0SetFields::ENABLE,
      Ctrl0SetFields::BYPASS,
      Ctrl0SetFields::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      Ctrl0SetFields::BIAS_TRIM,
      Ctrl0SetFields::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      Ctrl0SetFields::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      Ctrl0SetFields::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = Ctrl0SetFields::DIV_SELECT;
    using ENABLE_ALT = Ctrl0SetFields::ENABLE_ALT;
    using HOLD_RING_OFF = Ctrl0SetFields::HOLD_RING_OFF;
    using POWERUP = Ctrl0SetFields::POWERUP;
    using ENABLE = Ctrl0SetFields::ENABLE;
    using BYPASS = Ctrl0SetFields::BYPASS;
    using DITHER_EN = Ctrl0SetFields::DITHER_EN;
    using BIAS_TRIM = Ctrl0SetFields::BIAS_TRIM;
    using PLL_REG_EN = Ctrl0SetFields::PLL_REG_EN;
    using POST_DIV_SEL = Ctrl0SetFields::POST_DIV_SEL;
    using BIAS_SELECT = Ctrl0SetFields::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct Ctrl0ClrFields {
    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ENABLE_ALT
    using ENABLE_ALT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // POWERUP
    using POWERUP = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // BYPASS
    using BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DITHER_EN
    using DITHER_EN = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // BIAS_TRIM
    using BIAS_TRIM = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // PLL_REG_EN
    using PLL_REG_EN = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Post Divide Select
    using POST_DIV_SEL = ftl::mmio::Field<3, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // BIAS_SELECT
    using BIAS_SELECT = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl0ClrFields

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0ClrFields::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      Ctrl0ClrFields::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      Ctrl0ClrFields::HOLD_RING_OFF,
      Ctrl0ClrFields::POWERUP,
      Ctrl0ClrFields::ENABLE,
      Ctrl0ClrFields::BYPASS,
      Ctrl0ClrFields::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      Ctrl0ClrFields::BIAS_TRIM,
      Ctrl0ClrFields::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      Ctrl0ClrFields::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      Ctrl0ClrFields::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = Ctrl0ClrFields::DIV_SELECT;
    using ENABLE_ALT = Ctrl0ClrFields::ENABLE_ALT;
    using HOLD_RING_OFF = Ctrl0ClrFields::HOLD_RING_OFF;
    using POWERUP = Ctrl0ClrFields::POWERUP;
    using ENABLE = Ctrl0ClrFields::ENABLE;
    using BYPASS = Ctrl0ClrFields::BYPASS;
    using DITHER_EN = Ctrl0ClrFields::DITHER_EN;
    using BIAS_TRIM = Ctrl0ClrFields::BIAS_TRIM;
    using PLL_REG_EN = Ctrl0ClrFields::PLL_REG_EN;
    using POST_DIV_SEL = Ctrl0ClrFields::POST_DIV_SEL;
    using BIAS_SELECT = Ctrl0ClrFields::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct Ctrl0TogFields {
    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // ENABLE_ALT
    using ENABLE_ALT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // POWERUP
    using POWERUP = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // BYPASS
    using BYPASS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // DITHER_EN
    using DITHER_EN = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // BIAS_TRIM
    using BIAS_TRIM = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // PLL_REG_EN
    using PLL_REG_EN = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Post Divide Select
    using POST_DIV_SEL = ftl::mmio::Field<3, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // BIAS_SELECT
    using BIAS_SELECT = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl0TogFields

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl0TogFields::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      Ctrl0TogFields::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      Ctrl0TogFields::HOLD_RING_OFF,
      Ctrl0TogFields::POWERUP,
      Ctrl0TogFields::ENABLE,
      Ctrl0TogFields::BYPASS,
      Ctrl0TogFields::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      Ctrl0TogFields::BIAS_TRIM,
      Ctrl0TogFields::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      Ctrl0TogFields::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      Ctrl0TogFields::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = Ctrl0TogFields::DIV_SELECT;
    using ENABLE_ALT = Ctrl0TogFields::ENABLE_ALT;
    using HOLD_RING_OFF = Ctrl0TogFields::HOLD_RING_OFF;
    using POWERUP = Ctrl0TogFields::POWERUP;
    using ENABLE = Ctrl0TogFields::ENABLE;
    using BYPASS = Ctrl0TogFields::BYPASS;
    using DITHER_EN = Ctrl0TogFields::DITHER_EN;
    using BIAS_TRIM = Ctrl0TogFields::BIAS_TRIM;
    using PLL_REG_EN = Ctrl0TogFields::PLL_REG_EN;
    using POST_DIV_SEL = Ctrl0TogFields::POST_DIV_SEL;
    using BIAS_SELECT = Ctrl0TogFields::BIAS_SELECT;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SpreadSpectrumFields {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SpreadSpectrumFields

  struct SPREAD_SPECTRUM : ftl::mmio::Register<
      0x00000010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpreadSpectrumFields::STEP,
      SpreadSpectrumFields::ENABLE,
      SpreadSpectrumFields::STOP> {
    using STEP = SpreadSpectrumFields::STEP;
    using ENABLE = SpreadSpectrumFields::ENABLE;
    using STOP = SpreadSpectrumFields::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SpreadSpectrumSetFields {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct SpreadSpectrumSetFields

  struct SPREAD_SPECTRUM_SET : ftl::mmio::Register<
      0x00000014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpreadSpectrumSetFields::STEP,
      SpreadSpectrumSetFields::ENABLE,
      SpreadSpectrumSetFields::STOP> {
    using STEP = SpreadSpectrumSetFields::STEP;
    using ENABLE = SpreadSpectrumSetFields::ENABLE;
    using STOP = SpreadSpectrumSetFields::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SpreadSpectrumClrFields {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SpreadSpectrumClrFields

  struct SPREAD_SPECTRUM_CLR : ftl::mmio::Register<
      0x00000018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpreadSpectrumClrFields::STEP,
      SpreadSpectrumClrFields::ENABLE,
      SpreadSpectrumClrFields::STOP> {
    using STEP = SpreadSpectrumClrFields::STEP;
    using ENABLE = SpreadSpectrumClrFields::ENABLE;
    using STOP = SpreadSpectrumClrFields::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SpreadSpectrumTogFields {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct SpreadSpectrumTogFields

  struct SPREAD_SPECTRUM_TOG : ftl::mmio::Register<
      0x0000001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpreadSpectrumTogFields::STEP,
      SpreadSpectrumTogFields::ENABLE,
      SpreadSpectrumTogFields::STOP> {
    using STEP = SpreadSpectrumTogFields::STEP;
    using ENABLE = SpreadSpectrumTogFields::ENABLE;
    using STOP = SpreadSpectrumTogFields::STOP;
  };

  // Fractional PLL Numerator Control Register
  struct NumeratorFields {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct NumeratorFields

  struct NUMERATOR : ftl::mmio::Register<
      0x00000020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NumeratorFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NumeratorFields::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NumeratorSetFields {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct NumeratorSetFields

  struct NUMERATOR_SET : ftl::mmio::Register<
      0x00000024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NumeratorSetFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NumeratorSetFields::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NumeratorClrFields {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct NumeratorClrFields

  struct NUMERATOR_CLR : ftl::mmio::Register<
      0x00000028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NumeratorClrFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NumeratorClrFields::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NumeratorTogFields {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct NumeratorTogFields

  struct NUMERATOR_TOG : ftl::mmio::Register<
      0x0000002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NumeratorTogFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NumeratorTogFields::NUM;
  };

  // Fractional PLL Denominator Control Register
  struct DenominatorFields {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DenominatorFields

  struct DENOMINATOR : ftl::mmio::Register<
      0x00000030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DenominatorFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DenominatorFields::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DenominatorSetFields {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct DenominatorSetFields

  struct DENOMINATOR_SET : ftl::mmio::Register<
      0x00000034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DenominatorSetFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DenominatorSetFields::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DenominatorClrFields {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct DenominatorClrFields

  struct DENOMINATOR_CLR : ftl::mmio::Register<
      0x00000038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DenominatorClrFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DenominatorClrFields::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DenominatorTogFields {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct DenominatorTogFields

  struct DENOMINATOR_TOG : ftl::mmio::Register<
      0x0000003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DenominatorTogFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DenominatorTogFields::DENOM;
  };

};

}  // namespace regs