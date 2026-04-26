#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Fractional PLL
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct EthernetPll {
  // Fractional PLL Control Register
  struct CTRL0_fields_ {
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
  };  // struct CTRL0_fields_

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_fields_::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      CTRL0_fields_::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      CTRL0_fields_::HOLD_RING_OFF,
      CTRL0_fields_::POWERUP,
      CTRL0_fields_::ENABLE,
      CTRL0_fields_::BYPASS,
      CTRL0_fields_::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      CTRL0_fields_::BIAS_TRIM,
      CTRL0_fields_::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      CTRL0_fields_::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      CTRL0_fields_::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using eENABLE_ALT = CTRL0_fields_::eENABLE_ALT;
    using eHOLD_RING_OFF = CTRL0_fields_::eHOLD_RING_OFF;
    using ePOWERUP = CTRL0_fields_::ePOWERUP;
    using eENABLE = CTRL0_fields_::eENABLE;
    using eBYPASS = CTRL0_fields_::eBYPASS;
    using eDITHER_EN = CTRL0_fields_::eDITHER_EN;
    using ePOST_DIV_SEL = CTRL0_fields_::ePOST_DIV_SEL;
    using eBIAS_SELECT = CTRL0_fields_::eBIAS_SELECT;
    using DIV_SELECT = CTRL0_fields_::DIV_SELECT;
    using ENABLE_ALT = CTRL0_fields_::ENABLE_ALT;
    using HOLD_RING_OFF = CTRL0_fields_::HOLD_RING_OFF;
    using POWERUP = CTRL0_fields_::POWERUP;
    using ENABLE = CTRL0_fields_::ENABLE;
    using BYPASS = CTRL0_fields_::BYPASS;
    using DITHER_EN = CTRL0_fields_::DITHER_EN;
    using BIAS_TRIM = CTRL0_fields_::BIAS_TRIM;
    using PLL_REG_EN = CTRL0_fields_::PLL_REG_EN;
    using POST_DIV_SEL = CTRL0_fields_::POST_DIV_SEL;
    using BIAS_SELECT = CTRL0_fields_::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct CTRL0_SET_fields_ {
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
  };  // struct CTRL0_SET_fields_

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_SET_fields_::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      CTRL0_SET_fields_::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      CTRL0_SET_fields_::HOLD_RING_OFF,
      CTRL0_SET_fields_::POWERUP,
      CTRL0_SET_fields_::ENABLE,
      CTRL0_SET_fields_::BYPASS,
      CTRL0_SET_fields_::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      CTRL0_SET_fields_::BIAS_TRIM,
      CTRL0_SET_fields_::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      CTRL0_SET_fields_::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      CTRL0_SET_fields_::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = CTRL0_SET_fields_::DIV_SELECT;
    using ENABLE_ALT = CTRL0_SET_fields_::ENABLE_ALT;
    using HOLD_RING_OFF = CTRL0_SET_fields_::HOLD_RING_OFF;
    using POWERUP = CTRL0_SET_fields_::POWERUP;
    using ENABLE = CTRL0_SET_fields_::ENABLE;
    using BYPASS = CTRL0_SET_fields_::BYPASS;
    using DITHER_EN = CTRL0_SET_fields_::DITHER_EN;
    using BIAS_TRIM = CTRL0_SET_fields_::BIAS_TRIM;
    using PLL_REG_EN = CTRL0_SET_fields_::PLL_REG_EN;
    using POST_DIV_SEL = CTRL0_SET_fields_::POST_DIV_SEL;
    using BIAS_SELECT = CTRL0_SET_fields_::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct CTRL0_CLR_fields_ {
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
  };  // struct CTRL0_CLR_fields_

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_CLR_fields_::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      CTRL0_CLR_fields_::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      CTRL0_CLR_fields_::HOLD_RING_OFF,
      CTRL0_CLR_fields_::POWERUP,
      CTRL0_CLR_fields_::ENABLE,
      CTRL0_CLR_fields_::BYPASS,
      CTRL0_CLR_fields_::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      CTRL0_CLR_fields_::BIAS_TRIM,
      CTRL0_CLR_fields_::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      CTRL0_CLR_fields_::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      CTRL0_CLR_fields_::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = CTRL0_CLR_fields_::DIV_SELECT;
    using ENABLE_ALT = CTRL0_CLR_fields_::ENABLE_ALT;
    using HOLD_RING_OFF = CTRL0_CLR_fields_::HOLD_RING_OFF;
    using POWERUP = CTRL0_CLR_fields_::POWERUP;
    using ENABLE = CTRL0_CLR_fields_::ENABLE;
    using BYPASS = CTRL0_CLR_fields_::BYPASS;
    using DITHER_EN = CTRL0_CLR_fields_::DITHER_EN;
    using BIAS_TRIM = CTRL0_CLR_fields_::BIAS_TRIM;
    using PLL_REG_EN = CTRL0_CLR_fields_::PLL_REG_EN;
    using POST_DIV_SEL = CTRL0_CLR_fields_::POST_DIV_SEL;
    using BIAS_SELECT = CTRL0_CLR_fields_::BIAS_SELECT;
  };

  // Fractional PLL Control Register
  struct CTRL0_TOG_fields_ {
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
  };  // struct CTRL0_TOG_fields_

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL0_TOG_fields_::DIV_SELECT,
      ftl::mmio::Reserved<1, 7>,
      CTRL0_TOG_fields_::ENABLE_ALT,
      ftl::mmio::Reserved<4, 9>,
      CTRL0_TOG_fields_::HOLD_RING_OFF,
      CTRL0_TOG_fields_::POWERUP,
      CTRL0_TOG_fields_::ENABLE,
      CTRL0_TOG_fields_::BYPASS,
      CTRL0_TOG_fields_::DITHER_EN,
      ftl::mmio::Reserved<1, 18>,
      CTRL0_TOG_fields_::BIAS_TRIM,
      CTRL0_TOG_fields_::PLL_REG_EN,
      ftl::mmio::Reserved<2, 23>,
      CTRL0_TOG_fields_::POST_DIV_SEL,
      ftl::mmio::Reserved<1, 28>,
      CTRL0_TOG_fields_::BIAS_SELECT,
      ftl::mmio::Reserved<2, 30>> {
    using DIV_SELECT = CTRL0_TOG_fields_::DIV_SELECT;
    using ENABLE_ALT = CTRL0_TOG_fields_::ENABLE_ALT;
    using HOLD_RING_OFF = CTRL0_TOG_fields_::HOLD_RING_OFF;
    using POWERUP = CTRL0_TOG_fields_::POWERUP;
    using ENABLE = CTRL0_TOG_fields_::ENABLE;
    using BYPASS = CTRL0_TOG_fields_::BYPASS;
    using DITHER_EN = CTRL0_TOG_fields_::DITHER_EN;
    using BIAS_TRIM = CTRL0_TOG_fields_::BIAS_TRIM;
    using PLL_REG_EN = CTRL0_TOG_fields_::PLL_REG_EN;
    using POST_DIV_SEL = CTRL0_TOG_fields_::POST_DIV_SEL;
    using BIAS_SELECT = CTRL0_TOG_fields_::BIAS_SELECT;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SPREAD_SPECTRUM_fields_ {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SPREAD_SPECTRUM_fields_

  struct SPREAD_SPECTRUM : ftl::mmio::Register<
      0x00000010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SPREAD_SPECTRUM_fields_::STEP,
      SPREAD_SPECTRUM_fields_::ENABLE,
      SPREAD_SPECTRUM_fields_::STOP> {
    using STEP = SPREAD_SPECTRUM_fields_::STEP;
    using ENABLE = SPREAD_SPECTRUM_fields_::ENABLE;
    using STOP = SPREAD_SPECTRUM_fields_::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SPREAD_SPECTRUM_SET_fields_ {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct SPREAD_SPECTRUM_SET_fields_

  struct SPREAD_SPECTRUM_SET : ftl::mmio::Register<
      0x00000014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SPREAD_SPECTRUM_SET_fields_::STEP,
      SPREAD_SPECTRUM_SET_fields_::ENABLE,
      SPREAD_SPECTRUM_SET_fields_::STOP> {
    using STEP = SPREAD_SPECTRUM_SET_fields_::STEP;
    using ENABLE = SPREAD_SPECTRUM_SET_fields_::ENABLE;
    using STOP = SPREAD_SPECTRUM_SET_fields_::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SPREAD_SPECTRUM_CLR_fields_ {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SPREAD_SPECTRUM_CLR_fields_

  struct SPREAD_SPECTRUM_CLR : ftl::mmio::Register<
      0x00000018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SPREAD_SPECTRUM_CLR_fields_::STEP,
      SPREAD_SPECTRUM_CLR_fields_::ENABLE,
      SPREAD_SPECTRUM_CLR_fields_::STOP> {
    using STEP = SPREAD_SPECTRUM_CLR_fields_::STEP;
    using ENABLE = SPREAD_SPECTRUM_CLR_fields_::ENABLE;
    using STOP = SPREAD_SPECTRUM_CLR_fields_::STOP;
  };

  // Fractional PLL Spread Spectrum Control Register
  struct SPREAD_SPECTRUM_TOG_fields_ {
    // Step
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Enable
    using ENABLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Stop
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct SPREAD_SPECTRUM_TOG_fields_

  struct SPREAD_SPECTRUM_TOG : ftl::mmio::Register<
      0x0000001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SPREAD_SPECTRUM_TOG_fields_::STEP,
      SPREAD_SPECTRUM_TOG_fields_::ENABLE,
      SPREAD_SPECTRUM_TOG_fields_::STOP> {
    using STEP = SPREAD_SPECTRUM_TOG_fields_::STEP;
    using ENABLE = SPREAD_SPECTRUM_TOG_fields_::ENABLE;
    using STOP = SPREAD_SPECTRUM_TOG_fields_::STOP;
  };

  // Fractional PLL Numerator Control Register
  struct NUMERATOR_fields_ {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct NUMERATOR_fields_

  struct NUMERATOR : ftl::mmio::Register<
      0x00000020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NUMERATOR_fields_::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NUMERATOR_fields_::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NUMERATOR_SET_fields_ {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct NUMERATOR_SET_fields_

  struct NUMERATOR_SET : ftl::mmio::Register<
      0x00000024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NUMERATOR_SET_fields_::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NUMERATOR_SET_fields_::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NUMERATOR_CLR_fields_ {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct NUMERATOR_CLR_fields_

  struct NUMERATOR_CLR : ftl::mmio::Register<
      0x00000028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NUMERATOR_CLR_fields_::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NUMERATOR_CLR_fields_::NUM;
  };

  // Fractional PLL Numerator Control Register
  struct NUMERATOR_TOG_fields_ {
    // Numerator
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct NUMERATOR_TOG_fields_

  struct NUMERATOR_TOG : ftl::mmio::Register<
      0x0000002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NUMERATOR_TOG_fields_::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = NUMERATOR_TOG_fields_::NUM;
  };

  // Fractional PLL Denominator Control Register
  struct DENOMINATOR_fields_ {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DENOMINATOR_fields_

  struct DENOMINATOR : ftl::mmio::Register<
      0x00000030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DENOMINATOR_fields_::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DENOMINATOR_fields_::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DENOMINATOR_SET_fields_ {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct DENOMINATOR_SET_fields_

  struct DENOMINATOR_SET : ftl::mmio::Register<
      0x00000034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DENOMINATOR_SET_fields_::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DENOMINATOR_SET_fields_::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DENOMINATOR_CLR_fields_ {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct DENOMINATOR_CLR_fields_

  struct DENOMINATOR_CLR : ftl::mmio::Register<
      0x00000038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DENOMINATOR_CLR_fields_::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DENOMINATOR_CLR_fields_::DENOM;
  };

  // Fractional PLL Denominator Control Register
  struct DENOMINATOR_TOG_fields_ {
    // Denominator
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct DENOMINATOR_TOG_fields_

  struct DENOMINATOR_TOG : ftl::mmio::Register<
      0x0000003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DENOMINATOR_TOG_fields_::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = DENOMINATOR_TOG_fields_::DENOM;
  };

};

}  // namespace regs