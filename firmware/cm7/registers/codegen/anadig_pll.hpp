#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigPll {
  // ARM_PLL_CTRL_REGISTER
  struct ArmPllCtrlFields {
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

    enum class eENABLE_CLK : std::uint32_t {
      // Disable the clock
      eDISABLE = 0,
      // Enable the clock
      eENABLE = 1,
    };

    enum class ePOST_DIV_SEL : std::uint32_t {
      // Divide by 2
      eDIV2 = 0,
      // Divide by 4
      eDIV4 = 1,
      // Divide by 8
      eDIV8 = 2,
      // Divide by 1
      eDIV1 = 3,
    };

    enum class eBYPASS : std::uint32_t {
      // Function mode
      eFUNC = 0,
      // Bypass Mode
      eBYPASS = 1,
    };

    enum class eARM_PLL_STABLE : std::uint32_t {
      // ARM PLL is not stable
      eDISABLE = 0,
      // ARM PLL is stable
      eENABLE = 1,
    };

    enum class eARM_PLL_GATE : std::uint32_t {
      // Clock is not gated
      eDISABLE = 0,
      // Clock is gated
      eENABLE = 1,
    };

    enum class eARM_PLL_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 12, eHOLD_RING_OFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Powers up the PLL.
    using POWERUP = ftl::mmio::Field<1, 13, ePOWERUP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable the clock output.
    using ENABLE_CLK = ftl::mmio::Field<1, 14, eENABLE_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // POST_DIV_SEL
    using POST_DIV_SEL = ftl::mmio::Field<2, 15, ePOST_DIV_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bypass the pll.
    using BYPASS = ftl::mmio::Field<1, 17, eBYPASS, ftl::mmio::RW, ftl::mmio::Normal>;
    // ARM_PLL_STABLE
    using ARM_PLL_STABLE = ftl::mmio::Field<1, 29, eARM_PLL_STABLE, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARM_PLL_GATE
    using ARM_PLL_GATE = ftl::mmio::Field<1, 30, eARM_PLL_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pll_arm_control_mode
    using ARM_PLL_CONTROL_MODE = ftl::mmio::Field<1, 31, eARM_PLL_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ArmPllCtrlFields

  struct ARM_PLL_CTRL : ftl::mmio::Register<
      0x40C84200u,
      std::uint32_t,
      0x400000A6u,
      ftl::mmio::RW,
      ArmPllCtrlFields::DIV_SELECT,
      ftl::mmio::Reserved<4, 8>,
      ArmPllCtrlFields::HOLD_RING_OFF,
      ArmPllCtrlFields::POWERUP,
      ArmPllCtrlFields::ENABLE_CLK,
      ArmPllCtrlFields::POST_DIV_SEL,
      ArmPllCtrlFields::BYPASS,
      ftl::mmio::Reserved<11, 18>,
      ArmPllCtrlFields::ARM_PLL_STABLE,
      ArmPllCtrlFields::ARM_PLL_GATE,
      ArmPllCtrlFields::ARM_PLL_CONTROL_MODE> {
    using eHOLD_RING_OFF = ArmPllCtrlFields::eHOLD_RING_OFF;
    using ePOWERUP = ArmPllCtrlFields::ePOWERUP;
    using eENABLE_CLK = ArmPllCtrlFields::eENABLE_CLK;
    using ePOST_DIV_SEL = ArmPllCtrlFields::ePOST_DIV_SEL;
    using eBYPASS = ArmPllCtrlFields::eBYPASS;
    using eARM_PLL_STABLE = ArmPllCtrlFields::eARM_PLL_STABLE;
    using eARM_PLL_GATE = ArmPllCtrlFields::eARM_PLL_GATE;
    using eARM_PLL_CONTROL_MODE = ArmPllCtrlFields::eARM_PLL_CONTROL_MODE;
    using DIV_SELECT = ArmPllCtrlFields::DIV_SELECT;
    using HOLD_RING_OFF = ArmPllCtrlFields::HOLD_RING_OFF;
    using POWERUP = ArmPllCtrlFields::POWERUP;
    using ENABLE_CLK = ArmPllCtrlFields::ENABLE_CLK;
    using POST_DIV_SEL = ArmPllCtrlFields::POST_DIV_SEL;
    using BYPASS = ArmPllCtrlFields::BYPASS;
    using ARM_PLL_STABLE = ArmPllCtrlFields::ARM_PLL_STABLE;
    using ARM_PLL_GATE = ArmPllCtrlFields::ARM_PLL_GATE;
    using ARM_PLL_CONTROL_MODE = ArmPllCtrlFields::ARM_PLL_CONTROL_MODE;
  };

  // SYS_PLL3_CTRL_REGISTER
  struct SysPll3CtrlFields {
    enum class eHOLD_RING_OFF : std::uint32_t {
      // Normal operation
      eNORMAL = 0,
      // Initialize PLL start up
      eENABLE = 1,
    };

    enum class eENABLE_CLK : std::uint32_t {
      // Disable the clock
      eDISABLE = 0,
      // Enable the clock
      eENABLE = 1,
    };

    enum class eBYPASS : std::uint32_t {
      // Function mode
      eFUNC = 0,
      // Bypass Mode
      eBYPASS = 1,
    };

    enum class ePOWERUP : std::uint32_t {
      // Power down the PLL
      ePDOWN = 0,
      // Power Up the PLL
      ePUP = 1,
    };

    enum class eSYS_PLL3_DIV2_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class eSYS_PLL3_GATE : std::uint32_t {
      // Clock is not gated
      eDISABLE = 0,
      // Clock is gated
      eENABLE = 1,
    };

    enum class eSYS_PLL3_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // SYS PLL3 DIV2 gate
    using SYS_PLL3_DIV2 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Internal PLL Regulator
    using PLL_REG_EN = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 11, eHOLD_RING_OFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable the clock output.
    using ENABLE_CLK = ftl::mmio::Field<1, 13, eENABLE_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // BYPASS
    using BYPASS = ftl::mmio::Field<1, 16, eBYPASS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Powers up the PLL.
    using POWERUP = ftl::mmio::Field<1, 21, ePOWERUP, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL3_DIV2_CONTROL_MODE
    using SYS_PLL3_DIV2_CONTROL_MODE = ftl::mmio::Field<1, 28, eSYS_PLL3_DIV2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL3_STABLE
    using SYS_PLL3_STABLE = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SYS_PLL3_GATE
    using SYS_PLL3_GATE = ftl::mmio::Field<1, 30, eSYS_PLL3_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL3_control_mode
    using SYS_PLL3_CONTROL_MODE = ftl::mmio::Field<1, 31, eSYS_PLL3_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll3CtrlFields

  struct SYS_PLL3_CTRL : ftl::mmio::Register<
      0x40C84210u,
      std::uint32_t,
      0x40000003u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      SysPll3CtrlFields::SYS_PLL3_DIV2,
      SysPll3CtrlFields::PLL_REG_EN,
      ftl::mmio::Reserved<6, 5>,
      SysPll3CtrlFields::HOLD_RING_OFF,
      ftl::mmio::Reserved<1, 12>,
      SysPll3CtrlFields::ENABLE_CLK,
      ftl::mmio::Reserved<2, 14>,
      SysPll3CtrlFields::BYPASS,
      ftl::mmio::Reserved<4, 17>,
      SysPll3CtrlFields::POWERUP,
      ftl::mmio::Reserved<6, 22>,
      SysPll3CtrlFields::SYS_PLL3_DIV2_CONTROL_MODE,
      SysPll3CtrlFields::SYS_PLL3_STABLE,
      SysPll3CtrlFields::SYS_PLL3_GATE,
      SysPll3CtrlFields::SYS_PLL3_CONTROL_MODE> {
    using eHOLD_RING_OFF = SysPll3CtrlFields::eHOLD_RING_OFF;
    using eENABLE_CLK = SysPll3CtrlFields::eENABLE_CLK;
    using eBYPASS = SysPll3CtrlFields::eBYPASS;
    using ePOWERUP = SysPll3CtrlFields::ePOWERUP;
    using eSYS_PLL3_DIV2_CONTROL_MODE = SysPll3CtrlFields::eSYS_PLL3_DIV2_CONTROL_MODE;
    using eSYS_PLL3_GATE = SysPll3CtrlFields::eSYS_PLL3_GATE;
    using eSYS_PLL3_CONTROL_MODE = SysPll3CtrlFields::eSYS_PLL3_CONTROL_MODE;
    using SYS_PLL3_DIV2 = SysPll3CtrlFields::SYS_PLL3_DIV2;
    using PLL_REG_EN = SysPll3CtrlFields::PLL_REG_EN;
    using HOLD_RING_OFF = SysPll3CtrlFields::HOLD_RING_OFF;
    using ENABLE_CLK = SysPll3CtrlFields::ENABLE_CLK;
    using BYPASS = SysPll3CtrlFields::BYPASS;
    using POWERUP = SysPll3CtrlFields::POWERUP;
    using SYS_PLL3_DIV2_CONTROL_MODE = SysPll3CtrlFields::SYS_PLL3_DIV2_CONTROL_MODE;
    using SYS_PLL3_STABLE = SysPll3CtrlFields::SYS_PLL3_STABLE;
    using SYS_PLL3_GATE = SysPll3CtrlFields::SYS_PLL3_GATE;
    using SYS_PLL3_CONTROL_MODE = SysPll3CtrlFields::SYS_PLL3_CONTROL_MODE;
  };

  // SYS_PLL3_UPDATE_REGISTER
  struct SysPll3UpdateFields {
    enum class ePFD0_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePFD1_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePDF2_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePFD3_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // PFD0_OVERRIDE
    using PFD0_UPDATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_OVERRIDE
    using PFD1_UPDATE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_OVERRIDE
    using PFD2_UPDATE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_UPDATE
    using PFD3_UPDATE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd0_control_mode
    using PFD0_CONTROL_MODE = ftl::mmio::Field<1, 5, ePFD0_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd1_control_mode
    using PFD1_CONTROL_MODE = ftl::mmio::Field<1, 6, ePFD1_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pdf2_control_mode
    using PDF2_CONTROL_MODE = ftl::mmio::Field<1, 7, ePDF2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd3_control_mode
    using PFD3_CONTROL_MODE = ftl::mmio::Field<1, 8, ePFD3_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll3UpdateFields

  struct SYS_PLL3_UPDATE : ftl::mmio::Register<
      0x40C84220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SysPll3UpdateFields::PFD0_UPDATE,
      SysPll3UpdateFields::PFD1_UPDATE,
      SysPll3UpdateFields::PFD2_UPDATE,
      SysPll3UpdateFields::PFD3_UPDATE,
      SysPll3UpdateFields::PFD0_CONTROL_MODE,
      SysPll3UpdateFields::PFD1_CONTROL_MODE,
      SysPll3UpdateFields::PDF2_CONTROL_MODE,
      SysPll3UpdateFields::PFD3_CONTROL_MODE,
      ftl::mmio::Reserved<23, 9>> {
    using ePFD0_CONTROL_MODE = SysPll3UpdateFields::ePFD0_CONTROL_MODE;
    using ePFD1_CONTROL_MODE = SysPll3UpdateFields::ePFD1_CONTROL_MODE;
    using ePDF2_CONTROL_MODE = SysPll3UpdateFields::ePDF2_CONTROL_MODE;
    using ePFD3_CONTROL_MODE = SysPll3UpdateFields::ePFD3_CONTROL_MODE;
    using PFD0_UPDATE = SysPll3UpdateFields::PFD0_UPDATE;
    using PFD1_UPDATE = SysPll3UpdateFields::PFD1_UPDATE;
    using PFD2_UPDATE = SysPll3UpdateFields::PFD2_UPDATE;
    using PFD3_UPDATE = SysPll3UpdateFields::PFD3_UPDATE;
    using PFD0_CONTROL_MODE = SysPll3UpdateFields::PFD0_CONTROL_MODE;
    using PFD1_CONTROL_MODE = SysPll3UpdateFields::PFD1_CONTROL_MODE;
    using PDF2_CONTROL_MODE = SysPll3UpdateFields::PDF2_CONTROL_MODE;
    using PFD3_CONTROL_MODE = SysPll3UpdateFields::PFD3_CONTROL_MODE;
  };

  // SYS_PLL3_PFD_REGISTER
  struct SysPll3PfdFields {
    enum class ePFD0_DIV1_CLKGATE : std::uint32_t {
      // ref_pfd0 fractional divider clock is enabled
      eON = 0,
      // Fractional divider clock (reference ref_pfd0) is off (power savings
      eOFF = 1,
    };

    enum class ePFD1_DIV1_CLKGATE : std::uint32_t {
      // ref_pfd1 fractional divider clock is enabled
      eON = 0,
      // Fractional divider clock (reference ref_pfd1) is off (power savings)
      eOFF = 1,
    };

    enum class ePFD2_DIV1_CLKGATE : std::uint32_t {
      // ref_pfd2 fractional divider clock is enabled
      eON = 0,
      // Fractional divider clock (reference ref_pfd2) is off (power savings)
      eOFF = 1,
    };

    enum class ePFD3_DIV1_CLKGATE : std::uint32_t {
      // ref_pfd3 fractional divider clock is enabled
      eON = 0,
      // Fractional divider clock (reference ref_pfd3) is off (power savings)
      eOFF = 1,
    };

    // PFD0_FRAC
    using PFD0_FRAC = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD0_STABLE
    using PFD0_STABLE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD0_DIV1_CLKGATE
    using PFD0_DIV1_CLKGATE = ftl::mmio::Field<1, 7, ePFD0_DIV1_CLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_FRAC
    using PFD1_FRAC = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_STABLE
    using PFD1_STABLE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD1_DIV1_CLKGATE
    using PFD1_DIV1_CLKGATE = ftl::mmio::Field<1, 15, ePFD1_DIV1_CLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_FRAC
    using PFD2_FRAC = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_STABLE
    using PFD2_STABLE = ftl::mmio::Field<1, 22, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD2_DIV1_CLKGATE
    using PFD2_DIV1_CLKGATE = ftl::mmio::Field<1, 23, ePFD2_DIV1_CLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_FRAC
    using PFD3_FRAC = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_STABLE
    using PFD3_STABLE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD3_DIV1_CLKGATE
    using PFD3_DIV1_CLKGATE = ftl::mmio::Field<1, 31, ePFD3_DIV1_CLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll3PfdFields

  struct SYS_PLL3_PFD : ftl::mmio::Register<
      0x40C84230u,
      std::uint32_t,
      0x8CA0918Du,
      ftl::mmio::RW,
      SysPll3PfdFields::PFD0_FRAC,
      SysPll3PfdFields::PFD0_STABLE,
      SysPll3PfdFields::PFD0_DIV1_CLKGATE,
      SysPll3PfdFields::PFD1_FRAC,
      SysPll3PfdFields::PFD1_STABLE,
      SysPll3PfdFields::PFD1_DIV1_CLKGATE,
      SysPll3PfdFields::PFD2_FRAC,
      SysPll3PfdFields::PFD2_STABLE,
      SysPll3PfdFields::PFD2_DIV1_CLKGATE,
      SysPll3PfdFields::PFD3_FRAC,
      SysPll3PfdFields::PFD3_STABLE,
      SysPll3PfdFields::PFD3_DIV1_CLKGATE> {
    using ePFD0_DIV1_CLKGATE = SysPll3PfdFields::ePFD0_DIV1_CLKGATE;
    using ePFD1_DIV1_CLKGATE = SysPll3PfdFields::ePFD1_DIV1_CLKGATE;
    using ePFD2_DIV1_CLKGATE = SysPll3PfdFields::ePFD2_DIV1_CLKGATE;
    using ePFD3_DIV1_CLKGATE = SysPll3PfdFields::ePFD3_DIV1_CLKGATE;
    using PFD0_FRAC = SysPll3PfdFields::PFD0_FRAC;
    using PFD0_STABLE = SysPll3PfdFields::PFD0_STABLE;
    using PFD0_DIV1_CLKGATE = SysPll3PfdFields::PFD0_DIV1_CLKGATE;
    using PFD1_FRAC = SysPll3PfdFields::PFD1_FRAC;
    using PFD1_STABLE = SysPll3PfdFields::PFD1_STABLE;
    using PFD1_DIV1_CLKGATE = SysPll3PfdFields::PFD1_DIV1_CLKGATE;
    using PFD2_FRAC = SysPll3PfdFields::PFD2_FRAC;
    using PFD2_STABLE = SysPll3PfdFields::PFD2_STABLE;
    using PFD2_DIV1_CLKGATE = SysPll3PfdFields::PFD2_DIV1_CLKGATE;
    using PFD3_FRAC = SysPll3PfdFields::PFD3_FRAC;
    using PFD3_STABLE = SysPll3PfdFields::PFD3_STABLE;
    using PFD3_DIV1_CLKGATE = SysPll3PfdFields::PFD3_DIV1_CLKGATE;
  };

  // SYS_PLL2_CTRL_REGISTER
  struct SysPll2CtrlFields {
    enum class eHOLD_RING_OFF : std::uint32_t {
      // Normal operation
      eNORMAL = 0,
      // Initialize PLL start up
      eENABLE = 1,
    };

    enum class eENABLE_CLK : std::uint32_t {
      // Disable the clock
      eDISABLE = 0,
      // Enable the clock
      eENABLE = 1,
    };

    enum class eBYPASS : std::uint32_t {
      // Function mode
      eFUNC = 0,
      // Bypass Mode
      eBYPASS = 1,
    };

    enum class eDITHER_ENABLE : std::uint32_t {
      // Disable Dither
      eDISABLE = 0,
      // Enable Dither
      eENABLE = 1,
    };

    enum class ePOWERUP : std::uint32_t {
      // Power down the PLL
      ePDOWN = 0,
      // Power Up the PLL
      ePUP = 1,
    };

    enum class eSYS_PLL2_GATE : std::uint32_t {
      // Clock is not gated
      eDISABLE = 0,
      // Clock is gated
      eENABLE = 1,
    };

    enum class eSYS_PLL2_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // Enable Internal PLL Regulator
    using PLL_REG_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL Start up initialization
    using HOLD_RING_OFF = ftl::mmio::Field<1, 11, eHOLD_RING_OFF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable the clock output.
    using ENABLE_CLK = ftl::mmio::Field<1, 13, eENABLE_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bypass the pll.
    using BYPASS = ftl::mmio::Field<1, 16, eBYPASS, ftl::mmio::RW, ftl::mmio::Normal>;
    // DITHER_ENABLE
    using DITHER_ENABLE = ftl::mmio::Field<1, 17, eDITHER_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD_OFFSET_EN
    using PFD_OFFSET_EN = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_DDR_OVERRIDE
    using PLL_DDR_OVERRIDE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Powers up the PLL.
    using POWERUP = ftl::mmio::Field<1, 23, ePOWERUP, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL2_STABLE
    using SYS_PLL2_STABLE = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SYS_PLL2_GATE
    using SYS_PLL2_GATE = ftl::mmio::Field<1, 30, eSYS_PLL2_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL2_control_mode
    using SYS_PLL2_CONTROL_MODE = ftl::mmio::Field<1, 31, eSYS_PLL2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll2CtrlFields

  struct SYS_PLL2_CTRL : ftl::mmio::Register<
      0x40C84240u,
      std::uint32_t,
      0x40000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      SysPll2CtrlFields::PLL_REG_EN,
      ftl::mmio::Reserved<7, 4>,
      SysPll2CtrlFields::HOLD_RING_OFF,
      ftl::mmio::Reserved<1, 12>,
      SysPll2CtrlFields::ENABLE_CLK,
      ftl::mmio::Reserved<2, 14>,
      SysPll2CtrlFields::BYPASS,
      SysPll2CtrlFields::DITHER_ENABLE,
      SysPll2CtrlFields::PFD_OFFSET_EN,
      SysPll2CtrlFields::PLL_DDR_OVERRIDE,
      ftl::mmio::Reserved<3, 20>,
      SysPll2CtrlFields::POWERUP,
      ftl::mmio::Reserved<5, 24>,
      SysPll2CtrlFields::SYS_PLL2_STABLE,
      SysPll2CtrlFields::SYS_PLL2_GATE,
      SysPll2CtrlFields::SYS_PLL2_CONTROL_MODE> {
    using eHOLD_RING_OFF = SysPll2CtrlFields::eHOLD_RING_OFF;
    using eENABLE_CLK = SysPll2CtrlFields::eENABLE_CLK;
    using eBYPASS = SysPll2CtrlFields::eBYPASS;
    using eDITHER_ENABLE = SysPll2CtrlFields::eDITHER_ENABLE;
    using ePOWERUP = SysPll2CtrlFields::ePOWERUP;
    using eSYS_PLL2_GATE = SysPll2CtrlFields::eSYS_PLL2_GATE;
    using eSYS_PLL2_CONTROL_MODE = SysPll2CtrlFields::eSYS_PLL2_CONTROL_MODE;
    using PLL_REG_EN = SysPll2CtrlFields::PLL_REG_EN;
    using HOLD_RING_OFF = SysPll2CtrlFields::HOLD_RING_OFF;
    using ENABLE_CLK = SysPll2CtrlFields::ENABLE_CLK;
    using BYPASS = SysPll2CtrlFields::BYPASS;
    using DITHER_ENABLE = SysPll2CtrlFields::DITHER_ENABLE;
    using PFD_OFFSET_EN = SysPll2CtrlFields::PFD_OFFSET_EN;
    using PLL_DDR_OVERRIDE = SysPll2CtrlFields::PLL_DDR_OVERRIDE;
    using POWERUP = SysPll2CtrlFields::POWERUP;
    using SYS_PLL2_STABLE = SysPll2CtrlFields::SYS_PLL2_STABLE;
    using SYS_PLL2_GATE = SysPll2CtrlFields::SYS_PLL2_GATE;
    using SYS_PLL2_CONTROL_MODE = SysPll2CtrlFields::SYS_PLL2_CONTROL_MODE;
  };

  // SYS_PLL2_UPDATE_REGISTER
  struct SysPll2UpdateFields {
    enum class ePFD0_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePFD1_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePFD2_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class ePFD3_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // PFD0_UPDATE
    using PFD0_UPDATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_UPDATE
    using PFD1_UPDATE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_UPDATE
    using PFD2_UPDATE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_UPDATE
    using PFD3_UPDATE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd0_control_mode
    using PFD0_CONTROL_MODE = ftl::mmio::Field<1, 5, ePFD0_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd1_control_mode
    using PFD1_CONTROL_MODE = ftl::mmio::Field<1, 6, ePFD1_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd2_control_mode
    using PFD2_CONTROL_MODE = ftl::mmio::Field<1, 7, ePFD2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pfd3_control_mode
    using PFD3_CONTROL_MODE = ftl::mmio::Field<1, 8, ePFD3_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll2UpdateFields

  struct SYS_PLL2_UPDATE : ftl::mmio::Register<
      0x40C84250u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SysPll2UpdateFields::PFD0_UPDATE,
      SysPll2UpdateFields::PFD1_UPDATE,
      SysPll2UpdateFields::PFD2_UPDATE,
      SysPll2UpdateFields::PFD3_UPDATE,
      SysPll2UpdateFields::PFD0_CONTROL_MODE,
      SysPll2UpdateFields::PFD1_CONTROL_MODE,
      SysPll2UpdateFields::PFD2_CONTROL_MODE,
      SysPll2UpdateFields::PFD3_CONTROL_MODE,
      ftl::mmio::Reserved<23, 9>> {
    using ePFD0_CONTROL_MODE = SysPll2UpdateFields::ePFD0_CONTROL_MODE;
    using ePFD1_CONTROL_MODE = SysPll2UpdateFields::ePFD1_CONTROL_MODE;
    using ePFD2_CONTROL_MODE = SysPll2UpdateFields::ePFD2_CONTROL_MODE;
    using ePFD3_CONTROL_MODE = SysPll2UpdateFields::ePFD3_CONTROL_MODE;
    using PFD0_UPDATE = SysPll2UpdateFields::PFD0_UPDATE;
    using PFD1_UPDATE = SysPll2UpdateFields::PFD1_UPDATE;
    using PFD2_UPDATE = SysPll2UpdateFields::PFD2_UPDATE;
    using PFD3_UPDATE = SysPll2UpdateFields::PFD3_UPDATE;
    using PFD0_CONTROL_MODE = SysPll2UpdateFields::PFD0_CONTROL_MODE;
    using PFD1_CONTROL_MODE = SysPll2UpdateFields::PFD1_CONTROL_MODE;
    using PFD2_CONTROL_MODE = SysPll2UpdateFields::PFD2_CONTROL_MODE;
    using PFD3_CONTROL_MODE = SysPll2UpdateFields::PFD3_CONTROL_MODE;
  };

  // SYS_PLL2_SS_REGISTER
  struct SysPll2SsFields {
    enum class eENABLE : std::uint32_t {
      // Disable Spread Spectrum
      eDISABLE = 0,
      // Enable Spread Spectrum
      eENABLE = 1,
    };

    // STEP
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll2SsFields

  struct SYS_PLL2_SS : ftl::mmio::Register<
      0x40C84260u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SysPll2SsFields::STEP,
      SysPll2SsFields::ENABLE,
      SysPll2SsFields::STOP> {
    using eENABLE = SysPll2SsFields::eENABLE;
    using STEP = SysPll2SsFields::STEP;
    using ENABLE = SysPll2SsFields::ENABLE;
    using STOP = SysPll2SsFields::STOP;
  };

  // SYS_PLL2_PFD_REGISTER
  struct SysPll2PfdFields {
    // PFD0_FRAC
    using PFD0_FRAC = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD0_STABLE
    using PFD0_STABLE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD0_DIV1_CLKGATE
    using PFD0_DIV1_CLKGATE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_FRAC
    using PFD1_FRAC = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD1_STABLE
    using PFD1_STABLE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD1_DIV1_CLKGATE
    using PFD1_DIV1_CLKGATE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_FRAC
    using PFD2_FRAC = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD2_STABLE
    using PFD2_STABLE = ftl::mmio::Field<1, 22, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD2_DIV1_CLKGATE
    using PFD2_DIV1_CLKGATE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_FRAC
    using PFD3_FRAC = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PFD3_STABLE
    using PFD3_STABLE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PFD3_DIV1_CLKGATE
    using PFD3_DIV1_CLKGATE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll2PfdFields

  struct SYS_PLL2_PFD : ftl::mmio::Register<
      0x40C84270u,
      std::uint32_t,
      0xA098909Bu,
      ftl::mmio::RW,
      SysPll2PfdFields::PFD0_FRAC,
      SysPll2PfdFields::PFD0_STABLE,
      SysPll2PfdFields::PFD0_DIV1_CLKGATE,
      SysPll2PfdFields::PFD1_FRAC,
      SysPll2PfdFields::PFD1_STABLE,
      SysPll2PfdFields::PFD1_DIV1_CLKGATE,
      SysPll2PfdFields::PFD2_FRAC,
      SysPll2PfdFields::PFD2_STABLE,
      SysPll2PfdFields::PFD2_DIV1_CLKGATE,
      SysPll2PfdFields::PFD3_FRAC,
      SysPll2PfdFields::PFD3_STABLE,
      SysPll2PfdFields::PFD3_DIV1_CLKGATE> {
    using PFD0_FRAC = SysPll2PfdFields::PFD0_FRAC;
    using PFD0_STABLE = SysPll2PfdFields::PFD0_STABLE;
    using PFD0_DIV1_CLKGATE = SysPll2PfdFields::PFD0_DIV1_CLKGATE;
    using PFD1_FRAC = SysPll2PfdFields::PFD1_FRAC;
    using PFD1_STABLE = SysPll2PfdFields::PFD1_STABLE;
    using PFD1_DIV1_CLKGATE = SysPll2PfdFields::PFD1_DIV1_CLKGATE;
    using PFD2_FRAC = SysPll2PfdFields::PFD2_FRAC;
    using PFD2_STABLE = SysPll2PfdFields::PFD2_STABLE;
    using PFD2_DIV1_CLKGATE = SysPll2PfdFields::PFD2_DIV1_CLKGATE;
    using PFD3_FRAC = SysPll2PfdFields::PFD3_FRAC;
    using PFD3_STABLE = SysPll2PfdFields::PFD3_STABLE;
    using PFD3_DIV1_CLKGATE = SysPll2PfdFields::PFD3_DIV1_CLKGATE;
  };

  // SYS_PLL2_MFD_REGISTER
  struct SysPll2MfdFields {
    // Denominator
    using MFD = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll2MfdFields

  struct SYS_PLL2_MFD : ftl::mmio::Register<
      0x40C842A0u,
      std::uint32_t,
      0x0FFFFFFFu,
      ftl::mmio::RW,
      SysPll2MfdFields::MFD,
      ftl::mmio::Reserved<2, 30>> {
    using MFD = SysPll2MfdFields::MFD;
  };

  // SYS_PLL1_SS_REGISTER
  struct SysPll1SsFields {
    enum class eENABLE : std::uint32_t {
      // Disable Spread Spectrum
      eDISABLE = 0,
      // Enable Spread Spectrum
      eENABLE = 1,
    };

    // STEP
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll1SsFields

  struct SYS_PLL1_SS : ftl::mmio::Register<
      0x40C842B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SysPll1SsFields::STEP,
      SysPll1SsFields::ENABLE,
      SysPll1SsFields::STOP> {
    using eENABLE = SysPll1SsFields::eENABLE;
    using STEP = SysPll1SsFields::STEP;
    using ENABLE = SysPll1SsFields::ENABLE;
    using STOP = SysPll1SsFields::STOP;
  };

  // SYS_PLL1_CTRL_REGISTER
  struct SysPll1CtrlFields {
    enum class eSYS_PLL1_GATE : std::uint32_t {
      // No gate
      eNOGATE = 0,
      // Gate the output
      eGATED = 1,
    };

    enum class eSYS_PLL1_DIV5_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class eSYS_PLL1_DIV2_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    enum class eSYS_PLL1_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // ENABLE_CLK
    using ENABLE_CLK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_GATE
    using SYS_PLL1_GATE = ftl::mmio::Field<1, 14, eSYS_PLL1_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_DIV2
    using SYS_PLL1_DIV2 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_DIV5
    using SYS_PLL1_DIV5 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_DIV5_CONTROL_MODE
    using SYS_PLL1_DIV5_CONTROL_MODE = ftl::mmio::Field<1, 27, eSYS_PLL1_DIV5_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_DIV2_CONTROL_MODE
    using SYS_PLL1_DIV2_CONTROL_MODE = ftl::mmio::Field<1, 28, eSYS_PLL1_DIV2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // SYS_PLL1_STABLE
    using SYS_PLL1_STABLE = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SYS_PLL1_AI_BUSY
    using SYS_PLL1_AI_BUSY = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SYS_PLL1_CONTROL_MODE
    using SYS_PLL1_CONTROL_MODE = ftl::mmio::Field<1, 31, eSYS_PLL1_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll1CtrlFields

  struct SYS_PLL1_CTRL : ftl::mmio::Register<
      0x40C842C0u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      SysPll1CtrlFields::ENABLE_CLK,
      SysPll1CtrlFields::SYS_PLL1_GATE,
      ftl::mmio::Reserved<10, 15>,
      SysPll1CtrlFields::SYS_PLL1_DIV2,
      SysPll1CtrlFields::SYS_PLL1_DIV5,
      SysPll1CtrlFields::SYS_PLL1_DIV5_CONTROL_MODE,
      SysPll1CtrlFields::SYS_PLL1_DIV2_CONTROL_MODE,
      SysPll1CtrlFields::SYS_PLL1_STABLE,
      SysPll1CtrlFields::SYS_PLL1_AI_BUSY,
      SysPll1CtrlFields::SYS_PLL1_CONTROL_MODE> {
    using eSYS_PLL1_GATE = SysPll1CtrlFields::eSYS_PLL1_GATE;
    using eSYS_PLL1_DIV5_CONTROL_MODE = SysPll1CtrlFields::eSYS_PLL1_DIV5_CONTROL_MODE;
    using eSYS_PLL1_DIV2_CONTROL_MODE = SysPll1CtrlFields::eSYS_PLL1_DIV2_CONTROL_MODE;
    using eSYS_PLL1_CONTROL_MODE = SysPll1CtrlFields::eSYS_PLL1_CONTROL_MODE;
    using ENABLE_CLK = SysPll1CtrlFields::ENABLE_CLK;
    using SYS_PLL1_GATE = SysPll1CtrlFields::SYS_PLL1_GATE;
    using SYS_PLL1_DIV2 = SysPll1CtrlFields::SYS_PLL1_DIV2;
    using SYS_PLL1_DIV5 = SysPll1CtrlFields::SYS_PLL1_DIV5;
    using SYS_PLL1_DIV5_CONTROL_MODE = SysPll1CtrlFields::SYS_PLL1_DIV5_CONTROL_MODE;
    using SYS_PLL1_DIV2_CONTROL_MODE = SysPll1CtrlFields::SYS_PLL1_DIV2_CONTROL_MODE;
    using SYS_PLL1_STABLE = SysPll1CtrlFields::SYS_PLL1_STABLE;
    using SYS_PLL1_AI_BUSY = SysPll1CtrlFields::SYS_PLL1_AI_BUSY;
    using SYS_PLL1_CONTROL_MODE = SysPll1CtrlFields::SYS_PLL1_CONTROL_MODE;
  };

  // SYS_PLL1_DENOMINATOR_REGISTER
  struct SysPll1DenominatorFields {
    // DENOM
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll1DenominatorFields

  struct SYS_PLL1_DENOMINATOR : ftl::mmio::Register<
      0x40C842D0u,
      std::uint32_t,
      0x2FFFFFFEu,
      ftl::mmio::RW,
      SysPll1DenominatorFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = SysPll1DenominatorFields::DENOM;
  };

  // SYS_PLL1_NUMERATOR_REGISTER
  struct SysPll1NumeratorFields {
    // NUM
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll1NumeratorFields

  struct SYS_PLL1_NUMERATOR : ftl::mmio::Register<
      0x40C842E0u,
      std::uint32_t,
      0x1FFFFFFFu,
      ftl::mmio::RW,
      SysPll1NumeratorFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = SysPll1NumeratorFields::NUM;
  };

  // SYS_PLL1_DIV_SELECT_REGISTER
  struct SysPll1DivSelectFields {
    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysPll1DivSelectFields

  struct SYS_PLL1_DIV_SELECT : ftl::mmio::Register<
      0x40C842F0u,
      std::uint32_t,
      0x0000001Du,
      ftl::mmio::RW,
      SysPll1DivSelectFields::DIV_SELECT,
      ftl::mmio::Reserved<25, 7>> {
    using DIV_SELECT = SysPll1DivSelectFields::DIV_SELECT;
  };

  // PLL_AUDIO_CTRL_REGISTER
  struct PllAudioCtrlFields {
    enum class ePLL_AUDIO_GATE : std::uint32_t {
      // No gate
      eNOGATE = 0,
      // Gate the output
      eGATED = 1,
    };

    enum class ePLL_AUDIO_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // ENABLE_CLK
    using ENABLE_CLK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_AUDIO_GATE
    using PLL_AUDIO_GATE = ftl::mmio::Field<1, 14, ePLL_AUDIO_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_AUDIO_STABLE
    using PLL_AUDIO_STABLE = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // pll_audio_ai_busy
    using PLL_AUDIO_AI_BUSY = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // pll_audio_control_mode
    using PLL_AUDIO_CONTROL_MODE = ftl::mmio::Field<1, 31, ePLL_AUDIO_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllAudioCtrlFields

  struct PLL_AUDIO_CTRL : ftl::mmio::Register<
      0x40C84300u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      PllAudioCtrlFields::ENABLE_CLK,
      PllAudioCtrlFields::PLL_AUDIO_GATE,
      ftl::mmio::Reserved<14, 15>,
      PllAudioCtrlFields::PLL_AUDIO_STABLE,
      PllAudioCtrlFields::PLL_AUDIO_AI_BUSY,
      PllAudioCtrlFields::PLL_AUDIO_CONTROL_MODE> {
    using ePLL_AUDIO_GATE = PllAudioCtrlFields::ePLL_AUDIO_GATE;
    using ePLL_AUDIO_CONTROL_MODE = PllAudioCtrlFields::ePLL_AUDIO_CONTROL_MODE;
    using ENABLE_CLK = PllAudioCtrlFields::ENABLE_CLK;
    using PLL_AUDIO_GATE = PllAudioCtrlFields::PLL_AUDIO_GATE;
    using PLL_AUDIO_STABLE = PllAudioCtrlFields::PLL_AUDIO_STABLE;
    using PLL_AUDIO_AI_BUSY = PllAudioCtrlFields::PLL_AUDIO_AI_BUSY;
    using PLL_AUDIO_CONTROL_MODE = PllAudioCtrlFields::PLL_AUDIO_CONTROL_MODE;
  };

  // PLL_AUDIO_SS_REGISTER
  struct PllAudioSsFields {
    enum class eENABLE : std::uint32_t {
      // Disable Spread Spectrum
      eDISABLE = 0,
      // Enable Spread Spectrum
      eENABLE = 1,
    };

    // STEP
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllAudioSsFields

  struct PLL_AUDIO_SS : ftl::mmio::Register<
      0x40C84310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PllAudioSsFields::STEP,
      PllAudioSsFields::ENABLE,
      PllAudioSsFields::STOP> {
    using eENABLE = PllAudioSsFields::eENABLE;
    using STEP = PllAudioSsFields::STEP;
    using ENABLE = PllAudioSsFields::ENABLE;
    using STOP = PllAudioSsFields::STOP;
  };

  // PLL_AUDIO_DENOMINATOR_REGISTER
  struct PllAudioDenominatorFields {
    // DENOM
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllAudioDenominatorFields

  struct PLL_AUDIO_DENOMINATOR : ftl::mmio::Register<
      0x40C84320u,
      std::uint32_t,
      0x2FFFFFFEu,
      ftl::mmio::RW,
      PllAudioDenominatorFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = PllAudioDenominatorFields::DENOM;
  };

  // PLL_AUDIO_NUMERATOR_REGISTER
  struct PllAudioNumeratorFields {
    // NUM
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllAudioNumeratorFields

  struct PLL_AUDIO_NUMERATOR : ftl::mmio::Register<
      0x40C84330u,
      std::uint32_t,
      0x1FFFFFFFu,
      ftl::mmio::RW,
      PllAudioNumeratorFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = PllAudioNumeratorFields::NUM;
  };

  // PLL_AUDIO_DIV_SELECT_REGISTER
  struct PllAudioDivSelectFields {
    // PLL_AUDIO_DIV_SELECT
    using PLL_AUDIO_DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllAudioDivSelectFields

  struct PLL_AUDIO_DIV_SELECT : ftl::mmio::Register<
      0x40C84340u,
      std::uint32_t,
      0x00000029u,
      ftl::mmio::RW,
      PllAudioDivSelectFields::PLL_AUDIO_DIV_SELECT,
      ftl::mmio::Reserved<25, 7>> {
    using VALUE = PllAudioDivSelectFields::PLL_AUDIO_DIV_SELECT;
  };

  // PLL_VIDEO_CTRL_REGISTER
  struct PllVideoCtrlFields {
    enum class ePLL_VIDEO_GATE : std::uint32_t {
      // No gate
      eNOGATE = 0,
      // Gate the output
      eGATED = 1,
    };

    enum class ePLL_VIDEO_CONTROL_MODE : std::uint32_t {
      // Software Mode (Default)
      eSW = 0,
      // GPC Mode
      eGPC = 1,
    };

    // ENABLE_CLK
    using ENABLE_CLK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_VIDEO_GATE
    using PLL_VIDEO_GATE = ftl::mmio::Field<1, 14, ePLL_VIDEO_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // pll_video_counter_clr
    using PLL_VIDEO_COUNTER_CLR = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PLL_VIDEO_STABLE
    using PLL_VIDEO_STABLE = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // pll_video_ai_busy
    using PLL_VIDEO_AI_BUSY = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // pll_video_control_mode
    using PLL_VIDEO_CONTROL_MODE = ftl::mmio::Field<1, 31, ePLL_VIDEO_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllVideoCtrlFields

  struct PLL_VIDEO_CTRL : ftl::mmio::Register<
      0x40C84350u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<13, 0>,
      PllVideoCtrlFields::ENABLE_CLK,
      PllVideoCtrlFields::PLL_VIDEO_GATE,
      ftl::mmio::Reserved<9, 15>,
      PllVideoCtrlFields::PLL_VIDEO_COUNTER_CLR,
      ftl::mmio::Reserved<4, 25>,
      PllVideoCtrlFields::PLL_VIDEO_STABLE,
      PllVideoCtrlFields::PLL_VIDEO_AI_BUSY,
      PllVideoCtrlFields::PLL_VIDEO_CONTROL_MODE> {
    using ePLL_VIDEO_GATE = PllVideoCtrlFields::ePLL_VIDEO_GATE;
    using ePLL_VIDEO_CONTROL_MODE = PllVideoCtrlFields::ePLL_VIDEO_CONTROL_MODE;
    using ENABLE_CLK = PllVideoCtrlFields::ENABLE_CLK;
    using PLL_VIDEO_GATE = PllVideoCtrlFields::PLL_VIDEO_GATE;
    using PLL_VIDEO_COUNTER_CLR = PllVideoCtrlFields::PLL_VIDEO_COUNTER_CLR;
    using PLL_VIDEO_STABLE = PllVideoCtrlFields::PLL_VIDEO_STABLE;
    using PLL_VIDEO_AI_BUSY = PllVideoCtrlFields::PLL_VIDEO_AI_BUSY;
    using PLL_VIDEO_CONTROL_MODE = PllVideoCtrlFields::PLL_VIDEO_CONTROL_MODE;
  };

  // PLL_VIDEO_SS_REGISTER
  struct PllVideoSsFields {
    enum class eENABLE : std::uint32_t {
      // Disable Spread Spectrum
      eDISABLE = 0,
      // Enable Spread Spectrum
      eENABLE = 1,
    };

    // STEP
    using STEP = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENABLE
    using ENABLE = ftl::mmio::Field<1, 15, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // STOP
    using STOP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllVideoSsFields

  struct PLL_VIDEO_SS : ftl::mmio::Register<
      0x40C84360u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PllVideoSsFields::STEP,
      PllVideoSsFields::ENABLE,
      PllVideoSsFields::STOP> {
    using eENABLE = PllVideoSsFields::eENABLE;
    using STEP = PllVideoSsFields::STEP;
    using ENABLE = PllVideoSsFields::ENABLE;
    using STOP = PllVideoSsFields::STOP;
  };

  // PLL_VIDEO_DENOMINATOR_REGISTER
  struct PllVideoDenominatorFields {
    // DENOM
    using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllVideoDenominatorFields

  struct PLL_VIDEO_DENOMINATOR : ftl::mmio::Register<
      0x40C84370u,
      std::uint32_t,
      0x2FFFFFFEu,
      ftl::mmio::RW,
      PllVideoDenominatorFields::DENOM,
      ftl::mmio::Reserved<2, 30>> {
    using DENOM = PllVideoDenominatorFields::DENOM;
  };

  // PLL_VIDEO_NUMERATOR_REGISTER
  struct PllVideoNumeratorFields {
    // NUM
    using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllVideoNumeratorFields

  struct PLL_VIDEO_NUMERATOR : ftl::mmio::Register<
      0x40C84380u,
      std::uint32_t,
      0x1FFFFFFFu,
      ftl::mmio::RW,
      PllVideoNumeratorFields::NUM,
      ftl::mmio::Reserved<2, 30>> {
    using NUM = PllVideoNumeratorFields::NUM;
  };

  // PLL_VIDEO_DIV_SELECT_REGISTER
  struct PllVideoDivSelectFields {
    // DIV_SELECT
    using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PllVideoDivSelectFields

  struct PLL_VIDEO_DIV_SELECT : ftl::mmio::Register<
      0x40C84390u,
      std::uint32_t,
      0x00000029u,
      ftl::mmio::RW,
      PllVideoDivSelectFields::DIV_SELECT,
      ftl::mmio::Reserved<25, 7>> {
    using DIV_SELECT = PllVideoDivSelectFields::DIV_SELECT;
  };

};

}  // namespace regs