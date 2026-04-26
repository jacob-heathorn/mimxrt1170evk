#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::anadig_pll {

// ARM_PLL_CTRL_REGISTER
struct ARM_PLL_CTRL_fields_ {
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
};  // struct ARM_PLL_CTRL_fields_

struct ARM_PLL_CTRL : ftl::mmio::Register<
    0x40C84200u,
    std::uint32_t,
    0x400000A6u,
    ftl::mmio::RW,
    ARM_PLL_CTRL_fields_::DIV_SELECT,
    ftl::mmio::Reserved<4, 8>,
    ARM_PLL_CTRL_fields_::HOLD_RING_OFF,
    ARM_PLL_CTRL_fields_::POWERUP,
    ARM_PLL_CTRL_fields_::ENABLE_CLK,
    ARM_PLL_CTRL_fields_::POST_DIV_SEL,
    ARM_PLL_CTRL_fields_::BYPASS,
    ftl::mmio::Reserved<11, 18>,
    ARM_PLL_CTRL_fields_::ARM_PLL_STABLE,
    ARM_PLL_CTRL_fields_::ARM_PLL_GATE,
    ARM_PLL_CTRL_fields_::ARM_PLL_CONTROL_MODE> {
  using eHOLD_RING_OFF = ARM_PLL_CTRL_fields_::eHOLD_RING_OFF;
  using ePOWERUP = ARM_PLL_CTRL_fields_::ePOWERUP;
  using eENABLE_CLK = ARM_PLL_CTRL_fields_::eENABLE_CLK;
  using ePOST_DIV_SEL = ARM_PLL_CTRL_fields_::ePOST_DIV_SEL;
  using eBYPASS = ARM_PLL_CTRL_fields_::eBYPASS;
  using eARM_PLL_STABLE = ARM_PLL_CTRL_fields_::eARM_PLL_STABLE;
  using eARM_PLL_GATE = ARM_PLL_CTRL_fields_::eARM_PLL_GATE;
  using eARM_PLL_CONTROL_MODE = ARM_PLL_CTRL_fields_::eARM_PLL_CONTROL_MODE;
  using DIV_SELECT = ARM_PLL_CTRL_fields_::DIV_SELECT;
  using HOLD_RING_OFF = ARM_PLL_CTRL_fields_::HOLD_RING_OFF;
  using POWERUP = ARM_PLL_CTRL_fields_::POWERUP;
  using ENABLE_CLK = ARM_PLL_CTRL_fields_::ENABLE_CLK;
  using POST_DIV_SEL = ARM_PLL_CTRL_fields_::POST_DIV_SEL;
  using BYPASS = ARM_PLL_CTRL_fields_::BYPASS;
  using ARM_PLL_STABLE = ARM_PLL_CTRL_fields_::ARM_PLL_STABLE;
  using ARM_PLL_GATE = ARM_PLL_CTRL_fields_::ARM_PLL_GATE;
  using ARM_PLL_CONTROL_MODE = ARM_PLL_CTRL_fields_::ARM_PLL_CONTROL_MODE;
};

// SYS_PLL3_CTRL_REGISTER
struct SYS_PLL3_CTRL_fields_ {
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
};  // struct SYS_PLL3_CTRL_fields_

struct SYS_PLL3_CTRL : ftl::mmio::Register<
    0x40C84210u,
    std::uint32_t,
    0x40000003u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    SYS_PLL3_CTRL_fields_::SYS_PLL3_DIV2,
    SYS_PLL3_CTRL_fields_::PLL_REG_EN,
    ftl::mmio::Reserved<6, 5>,
    SYS_PLL3_CTRL_fields_::HOLD_RING_OFF,
    ftl::mmio::Reserved<1, 12>,
    SYS_PLL3_CTRL_fields_::ENABLE_CLK,
    ftl::mmio::Reserved<2, 14>,
    SYS_PLL3_CTRL_fields_::BYPASS,
    ftl::mmio::Reserved<4, 17>,
    SYS_PLL3_CTRL_fields_::POWERUP,
    ftl::mmio::Reserved<6, 22>,
    SYS_PLL3_CTRL_fields_::SYS_PLL3_DIV2_CONTROL_MODE,
    SYS_PLL3_CTRL_fields_::SYS_PLL3_STABLE,
    SYS_PLL3_CTRL_fields_::SYS_PLL3_GATE,
    SYS_PLL3_CTRL_fields_::SYS_PLL3_CONTROL_MODE> {
  using eHOLD_RING_OFF = SYS_PLL3_CTRL_fields_::eHOLD_RING_OFF;
  using eENABLE_CLK = SYS_PLL3_CTRL_fields_::eENABLE_CLK;
  using eBYPASS = SYS_PLL3_CTRL_fields_::eBYPASS;
  using ePOWERUP = SYS_PLL3_CTRL_fields_::ePOWERUP;
  using eSYS_PLL3_DIV2_CONTROL_MODE = SYS_PLL3_CTRL_fields_::eSYS_PLL3_DIV2_CONTROL_MODE;
  using eSYS_PLL3_GATE = SYS_PLL3_CTRL_fields_::eSYS_PLL3_GATE;
  using eSYS_PLL3_CONTROL_MODE = SYS_PLL3_CTRL_fields_::eSYS_PLL3_CONTROL_MODE;
  using SYS_PLL3_DIV2 = SYS_PLL3_CTRL_fields_::SYS_PLL3_DIV2;
  using PLL_REG_EN = SYS_PLL3_CTRL_fields_::PLL_REG_EN;
  using HOLD_RING_OFF = SYS_PLL3_CTRL_fields_::HOLD_RING_OFF;
  using ENABLE_CLK = SYS_PLL3_CTRL_fields_::ENABLE_CLK;
  using BYPASS = SYS_PLL3_CTRL_fields_::BYPASS;
  using POWERUP = SYS_PLL3_CTRL_fields_::POWERUP;
  using SYS_PLL3_DIV2_CONTROL_MODE = SYS_PLL3_CTRL_fields_::SYS_PLL3_DIV2_CONTROL_MODE;
  using SYS_PLL3_STABLE = SYS_PLL3_CTRL_fields_::SYS_PLL3_STABLE;
  using SYS_PLL3_GATE = SYS_PLL3_CTRL_fields_::SYS_PLL3_GATE;
  using SYS_PLL3_CONTROL_MODE = SYS_PLL3_CTRL_fields_::SYS_PLL3_CONTROL_MODE;
};

// SYS_PLL3_UPDATE_REGISTER
struct SYS_PLL3_UPDATE_fields_ {
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
};  // struct SYS_PLL3_UPDATE_fields_

struct SYS_PLL3_UPDATE : ftl::mmio::Register<
    0x40C84220u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SYS_PLL3_UPDATE_fields_::PFD0_UPDATE,
    SYS_PLL3_UPDATE_fields_::PFD1_UPDATE,
    SYS_PLL3_UPDATE_fields_::PFD2_UPDATE,
    SYS_PLL3_UPDATE_fields_::PFD3_UPDATE,
    SYS_PLL3_UPDATE_fields_::PFD0_CONTROL_MODE,
    SYS_PLL3_UPDATE_fields_::PFD1_CONTROL_MODE,
    SYS_PLL3_UPDATE_fields_::PDF2_CONTROL_MODE,
    SYS_PLL3_UPDATE_fields_::PFD3_CONTROL_MODE,
    ftl::mmio::Reserved<23, 9>> {
  using ePFD0_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::ePFD0_CONTROL_MODE;
  using ePFD1_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::ePFD1_CONTROL_MODE;
  using ePDF2_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::ePDF2_CONTROL_MODE;
  using ePFD3_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::ePFD3_CONTROL_MODE;
  using PFD0_UPDATE = SYS_PLL3_UPDATE_fields_::PFD0_UPDATE;
  using PFD1_UPDATE = SYS_PLL3_UPDATE_fields_::PFD1_UPDATE;
  using PFD2_UPDATE = SYS_PLL3_UPDATE_fields_::PFD2_UPDATE;
  using PFD3_UPDATE = SYS_PLL3_UPDATE_fields_::PFD3_UPDATE;
  using PFD0_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::PFD0_CONTROL_MODE;
  using PFD1_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::PFD1_CONTROL_MODE;
  using PDF2_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::PDF2_CONTROL_MODE;
  using PFD3_CONTROL_MODE = SYS_PLL3_UPDATE_fields_::PFD3_CONTROL_MODE;
};

// SYS_PLL3_PFD_REGISTER
struct SYS_PLL3_PFD_fields_ {
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
};  // struct SYS_PLL3_PFD_fields_

struct SYS_PLL3_PFD : ftl::mmio::Register<
    0x40C84230u,
    std::uint32_t,
    0x8CA0918Du,
    ftl::mmio::RW,
    SYS_PLL3_PFD_fields_::PFD0_FRAC,
    SYS_PLL3_PFD_fields_::PFD0_STABLE,
    SYS_PLL3_PFD_fields_::PFD0_DIV1_CLKGATE,
    SYS_PLL3_PFD_fields_::PFD1_FRAC,
    SYS_PLL3_PFD_fields_::PFD1_STABLE,
    SYS_PLL3_PFD_fields_::PFD1_DIV1_CLKGATE,
    SYS_PLL3_PFD_fields_::PFD2_FRAC,
    SYS_PLL3_PFD_fields_::PFD2_STABLE,
    SYS_PLL3_PFD_fields_::PFD2_DIV1_CLKGATE,
    SYS_PLL3_PFD_fields_::PFD3_FRAC,
    SYS_PLL3_PFD_fields_::PFD3_STABLE,
    SYS_PLL3_PFD_fields_::PFD3_DIV1_CLKGATE> {
  using ePFD0_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::ePFD0_DIV1_CLKGATE;
  using ePFD1_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::ePFD1_DIV1_CLKGATE;
  using ePFD2_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::ePFD2_DIV1_CLKGATE;
  using ePFD3_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::ePFD3_DIV1_CLKGATE;
  using PFD0_FRAC = SYS_PLL3_PFD_fields_::PFD0_FRAC;
  using PFD0_STABLE = SYS_PLL3_PFD_fields_::PFD0_STABLE;
  using PFD0_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::PFD0_DIV1_CLKGATE;
  using PFD1_FRAC = SYS_PLL3_PFD_fields_::PFD1_FRAC;
  using PFD1_STABLE = SYS_PLL3_PFD_fields_::PFD1_STABLE;
  using PFD1_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::PFD1_DIV1_CLKGATE;
  using PFD2_FRAC = SYS_PLL3_PFD_fields_::PFD2_FRAC;
  using PFD2_STABLE = SYS_PLL3_PFD_fields_::PFD2_STABLE;
  using PFD2_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::PFD2_DIV1_CLKGATE;
  using PFD3_FRAC = SYS_PLL3_PFD_fields_::PFD3_FRAC;
  using PFD3_STABLE = SYS_PLL3_PFD_fields_::PFD3_STABLE;
  using PFD3_DIV1_CLKGATE = SYS_PLL3_PFD_fields_::PFD3_DIV1_CLKGATE;
};

// SYS_PLL2_CTRL_REGISTER
struct SYS_PLL2_CTRL_fields_ {
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
};  // struct SYS_PLL2_CTRL_fields_

struct SYS_PLL2_CTRL : ftl::mmio::Register<
    0x40C84240u,
    std::uint32_t,
    0x40000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    SYS_PLL2_CTRL_fields_::PLL_REG_EN,
    ftl::mmio::Reserved<7, 4>,
    SYS_PLL2_CTRL_fields_::HOLD_RING_OFF,
    ftl::mmio::Reserved<1, 12>,
    SYS_PLL2_CTRL_fields_::ENABLE_CLK,
    ftl::mmio::Reserved<2, 14>,
    SYS_PLL2_CTRL_fields_::BYPASS,
    SYS_PLL2_CTRL_fields_::DITHER_ENABLE,
    SYS_PLL2_CTRL_fields_::PFD_OFFSET_EN,
    SYS_PLL2_CTRL_fields_::PLL_DDR_OVERRIDE,
    ftl::mmio::Reserved<3, 20>,
    SYS_PLL2_CTRL_fields_::POWERUP,
    ftl::mmio::Reserved<5, 24>,
    SYS_PLL2_CTRL_fields_::SYS_PLL2_STABLE,
    SYS_PLL2_CTRL_fields_::SYS_PLL2_GATE,
    SYS_PLL2_CTRL_fields_::SYS_PLL2_CONTROL_MODE> {
  using eHOLD_RING_OFF = SYS_PLL2_CTRL_fields_::eHOLD_RING_OFF;
  using eENABLE_CLK = SYS_PLL2_CTRL_fields_::eENABLE_CLK;
  using eBYPASS = SYS_PLL2_CTRL_fields_::eBYPASS;
  using eDITHER_ENABLE = SYS_PLL2_CTRL_fields_::eDITHER_ENABLE;
  using ePOWERUP = SYS_PLL2_CTRL_fields_::ePOWERUP;
  using eSYS_PLL2_GATE = SYS_PLL2_CTRL_fields_::eSYS_PLL2_GATE;
  using eSYS_PLL2_CONTROL_MODE = SYS_PLL2_CTRL_fields_::eSYS_PLL2_CONTROL_MODE;
  using PLL_REG_EN = SYS_PLL2_CTRL_fields_::PLL_REG_EN;
  using HOLD_RING_OFF = SYS_PLL2_CTRL_fields_::HOLD_RING_OFF;
  using ENABLE_CLK = SYS_PLL2_CTRL_fields_::ENABLE_CLK;
  using BYPASS = SYS_PLL2_CTRL_fields_::BYPASS;
  using DITHER_ENABLE = SYS_PLL2_CTRL_fields_::DITHER_ENABLE;
  using PFD_OFFSET_EN = SYS_PLL2_CTRL_fields_::PFD_OFFSET_EN;
  using PLL_DDR_OVERRIDE = SYS_PLL2_CTRL_fields_::PLL_DDR_OVERRIDE;
  using POWERUP = SYS_PLL2_CTRL_fields_::POWERUP;
  using SYS_PLL2_STABLE = SYS_PLL2_CTRL_fields_::SYS_PLL2_STABLE;
  using SYS_PLL2_GATE = SYS_PLL2_CTRL_fields_::SYS_PLL2_GATE;
  using SYS_PLL2_CONTROL_MODE = SYS_PLL2_CTRL_fields_::SYS_PLL2_CONTROL_MODE;
};

// SYS_PLL2_UPDATE_REGISTER
struct SYS_PLL2_UPDATE_fields_ {
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
};  // struct SYS_PLL2_UPDATE_fields_

struct SYS_PLL2_UPDATE : ftl::mmio::Register<
    0x40C84250u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SYS_PLL2_UPDATE_fields_::PFD0_UPDATE,
    SYS_PLL2_UPDATE_fields_::PFD1_UPDATE,
    SYS_PLL2_UPDATE_fields_::PFD2_UPDATE,
    SYS_PLL2_UPDATE_fields_::PFD3_UPDATE,
    SYS_PLL2_UPDATE_fields_::PFD0_CONTROL_MODE,
    SYS_PLL2_UPDATE_fields_::PFD1_CONTROL_MODE,
    SYS_PLL2_UPDATE_fields_::PFD2_CONTROL_MODE,
    SYS_PLL2_UPDATE_fields_::PFD3_CONTROL_MODE,
    ftl::mmio::Reserved<23, 9>> {
  using ePFD0_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::ePFD0_CONTROL_MODE;
  using ePFD1_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::ePFD1_CONTROL_MODE;
  using ePFD2_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::ePFD2_CONTROL_MODE;
  using ePFD3_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::ePFD3_CONTROL_MODE;
  using PFD0_UPDATE = SYS_PLL2_UPDATE_fields_::PFD0_UPDATE;
  using PFD1_UPDATE = SYS_PLL2_UPDATE_fields_::PFD1_UPDATE;
  using PFD2_UPDATE = SYS_PLL2_UPDATE_fields_::PFD2_UPDATE;
  using PFD3_UPDATE = SYS_PLL2_UPDATE_fields_::PFD3_UPDATE;
  using PFD0_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::PFD0_CONTROL_MODE;
  using PFD1_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::PFD1_CONTROL_MODE;
  using PFD2_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::PFD2_CONTROL_MODE;
  using PFD3_CONTROL_MODE = SYS_PLL2_UPDATE_fields_::PFD3_CONTROL_MODE;
};

// SYS_PLL2_SS_REGISTER
struct SYS_PLL2_SS_fields_ {
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
};  // struct SYS_PLL2_SS_fields_

struct SYS_PLL2_SS : ftl::mmio::Register<
    0x40C84260u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SYS_PLL2_SS_fields_::STEP,
    SYS_PLL2_SS_fields_::ENABLE,
    SYS_PLL2_SS_fields_::STOP> {
  using eENABLE = SYS_PLL2_SS_fields_::eENABLE;
  using STEP = SYS_PLL2_SS_fields_::STEP;
  using ENABLE = SYS_PLL2_SS_fields_::ENABLE;
  using STOP = SYS_PLL2_SS_fields_::STOP;
};

// SYS_PLL2_PFD_REGISTER
struct SYS_PLL2_PFD_fields_ {
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
};  // struct SYS_PLL2_PFD_fields_

struct SYS_PLL2_PFD : ftl::mmio::Register<
    0x40C84270u,
    std::uint32_t,
    0xA098909Bu,
    ftl::mmio::RW,
    SYS_PLL2_PFD_fields_::PFD0_FRAC,
    SYS_PLL2_PFD_fields_::PFD0_STABLE,
    SYS_PLL2_PFD_fields_::PFD0_DIV1_CLKGATE,
    SYS_PLL2_PFD_fields_::PFD1_FRAC,
    SYS_PLL2_PFD_fields_::PFD1_STABLE,
    SYS_PLL2_PFD_fields_::PFD1_DIV1_CLKGATE,
    SYS_PLL2_PFD_fields_::PFD2_FRAC,
    SYS_PLL2_PFD_fields_::PFD2_STABLE,
    SYS_PLL2_PFD_fields_::PFD2_DIV1_CLKGATE,
    SYS_PLL2_PFD_fields_::PFD3_FRAC,
    SYS_PLL2_PFD_fields_::PFD3_STABLE,
    SYS_PLL2_PFD_fields_::PFD3_DIV1_CLKGATE> {
  using PFD0_FRAC = SYS_PLL2_PFD_fields_::PFD0_FRAC;
  using PFD0_STABLE = SYS_PLL2_PFD_fields_::PFD0_STABLE;
  using PFD0_DIV1_CLKGATE = SYS_PLL2_PFD_fields_::PFD0_DIV1_CLKGATE;
  using PFD1_FRAC = SYS_PLL2_PFD_fields_::PFD1_FRAC;
  using PFD1_STABLE = SYS_PLL2_PFD_fields_::PFD1_STABLE;
  using PFD1_DIV1_CLKGATE = SYS_PLL2_PFD_fields_::PFD1_DIV1_CLKGATE;
  using PFD2_FRAC = SYS_PLL2_PFD_fields_::PFD2_FRAC;
  using PFD2_STABLE = SYS_PLL2_PFD_fields_::PFD2_STABLE;
  using PFD2_DIV1_CLKGATE = SYS_PLL2_PFD_fields_::PFD2_DIV1_CLKGATE;
  using PFD3_FRAC = SYS_PLL2_PFD_fields_::PFD3_FRAC;
  using PFD3_STABLE = SYS_PLL2_PFD_fields_::PFD3_STABLE;
  using PFD3_DIV1_CLKGATE = SYS_PLL2_PFD_fields_::PFD3_DIV1_CLKGATE;
};

// SYS_PLL2_MFD_REGISTER
struct SYS_PLL2_MFD_fields_ {
  // Denominator
  using MFD = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SYS_PLL2_MFD_fields_

struct SYS_PLL2_MFD : ftl::mmio::Register<
    0x40C842A0u,
    std::uint32_t,
    0x0FFFFFFFu,
    ftl::mmio::RW,
    SYS_PLL2_MFD_fields_::MFD,
    ftl::mmio::Reserved<2, 30>> {
  using MFD = SYS_PLL2_MFD_fields_::MFD;
};

// SYS_PLL1_SS_REGISTER
struct SYS_PLL1_SS_fields_ {
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
};  // struct SYS_PLL1_SS_fields_

struct SYS_PLL1_SS : ftl::mmio::Register<
    0x40C842B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SYS_PLL1_SS_fields_::STEP,
    SYS_PLL1_SS_fields_::ENABLE,
    SYS_PLL1_SS_fields_::STOP> {
  using eENABLE = SYS_PLL1_SS_fields_::eENABLE;
  using STEP = SYS_PLL1_SS_fields_::STEP;
  using ENABLE = SYS_PLL1_SS_fields_::ENABLE;
  using STOP = SYS_PLL1_SS_fields_::STOP;
};

// SYS_PLL1_CTRL_REGISTER
struct SYS_PLL1_CTRL_fields_ {
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
};  // struct SYS_PLL1_CTRL_fields_

struct SYS_PLL1_CTRL : ftl::mmio::Register<
    0x40C842C0u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    SYS_PLL1_CTRL_fields_::ENABLE_CLK,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_GATE,
    ftl::mmio::Reserved<10, 15>,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV2,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV5,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV5_CONTROL_MODE,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV2_CONTROL_MODE,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_STABLE,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_AI_BUSY,
    SYS_PLL1_CTRL_fields_::SYS_PLL1_CONTROL_MODE> {
  using eSYS_PLL1_GATE = SYS_PLL1_CTRL_fields_::eSYS_PLL1_GATE;
  using eSYS_PLL1_DIV5_CONTROL_MODE = SYS_PLL1_CTRL_fields_::eSYS_PLL1_DIV5_CONTROL_MODE;
  using eSYS_PLL1_DIV2_CONTROL_MODE = SYS_PLL1_CTRL_fields_::eSYS_PLL1_DIV2_CONTROL_MODE;
  using eSYS_PLL1_CONTROL_MODE = SYS_PLL1_CTRL_fields_::eSYS_PLL1_CONTROL_MODE;
  using ENABLE_CLK = SYS_PLL1_CTRL_fields_::ENABLE_CLK;
  using SYS_PLL1_GATE = SYS_PLL1_CTRL_fields_::SYS_PLL1_GATE;
  using SYS_PLL1_DIV2 = SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV2;
  using SYS_PLL1_DIV5 = SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV5;
  using SYS_PLL1_DIV5_CONTROL_MODE = SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV5_CONTROL_MODE;
  using SYS_PLL1_DIV2_CONTROL_MODE = SYS_PLL1_CTRL_fields_::SYS_PLL1_DIV2_CONTROL_MODE;
  using SYS_PLL1_STABLE = SYS_PLL1_CTRL_fields_::SYS_PLL1_STABLE;
  using SYS_PLL1_AI_BUSY = SYS_PLL1_CTRL_fields_::SYS_PLL1_AI_BUSY;
  using SYS_PLL1_CONTROL_MODE = SYS_PLL1_CTRL_fields_::SYS_PLL1_CONTROL_MODE;
};

// SYS_PLL1_DENOMINATOR_REGISTER
struct SYS_PLL1_DENOMINATOR_fields_ {
  // DENOM
  using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SYS_PLL1_DENOMINATOR_fields_

struct SYS_PLL1_DENOMINATOR : ftl::mmio::Register<
    0x40C842D0u,
    std::uint32_t,
    0x2FFFFFFEu,
    ftl::mmio::RW,
    SYS_PLL1_DENOMINATOR_fields_::DENOM,
    ftl::mmio::Reserved<2, 30>> {
  using DENOM = SYS_PLL1_DENOMINATOR_fields_::DENOM;
};

// SYS_PLL1_NUMERATOR_REGISTER
struct SYS_PLL1_NUMERATOR_fields_ {
  // NUM
  using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SYS_PLL1_NUMERATOR_fields_

struct SYS_PLL1_NUMERATOR : ftl::mmio::Register<
    0x40C842E0u,
    std::uint32_t,
    0x1FFFFFFFu,
    ftl::mmio::RW,
    SYS_PLL1_NUMERATOR_fields_::NUM,
    ftl::mmio::Reserved<2, 30>> {
  using NUM = SYS_PLL1_NUMERATOR_fields_::NUM;
};

// SYS_PLL1_DIV_SELECT_REGISTER
struct SYS_PLL1_DIV_SELECT_fields_ {
  // DIV_SELECT
  using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SYS_PLL1_DIV_SELECT_fields_

struct SYS_PLL1_DIV_SELECT : ftl::mmio::Register<
    0x40C842F0u,
    std::uint32_t,
    0x0000001Du,
    ftl::mmio::RW,
    SYS_PLL1_DIV_SELECT_fields_::DIV_SELECT,
    ftl::mmio::Reserved<25, 7>> {
  using DIV_SELECT = SYS_PLL1_DIV_SELECT_fields_::DIV_SELECT;
};

// PLL_AUDIO_CTRL_REGISTER
struct PLL_AUDIO_CTRL_fields_ {
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
};  // struct PLL_AUDIO_CTRL_fields_

struct PLL_AUDIO_CTRL : ftl::mmio::Register<
    0x40C84300u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    PLL_AUDIO_CTRL_fields_::ENABLE_CLK,
    PLL_AUDIO_CTRL_fields_::PLL_AUDIO_GATE,
    ftl::mmio::Reserved<14, 15>,
    PLL_AUDIO_CTRL_fields_::PLL_AUDIO_STABLE,
    PLL_AUDIO_CTRL_fields_::PLL_AUDIO_AI_BUSY,
    PLL_AUDIO_CTRL_fields_::PLL_AUDIO_CONTROL_MODE> {
  using ePLL_AUDIO_GATE = PLL_AUDIO_CTRL_fields_::ePLL_AUDIO_GATE;
  using ePLL_AUDIO_CONTROL_MODE = PLL_AUDIO_CTRL_fields_::ePLL_AUDIO_CONTROL_MODE;
  using ENABLE_CLK = PLL_AUDIO_CTRL_fields_::ENABLE_CLK;
  using PLL_AUDIO_GATE = PLL_AUDIO_CTRL_fields_::PLL_AUDIO_GATE;
  using PLL_AUDIO_STABLE = PLL_AUDIO_CTRL_fields_::PLL_AUDIO_STABLE;
  using PLL_AUDIO_AI_BUSY = PLL_AUDIO_CTRL_fields_::PLL_AUDIO_AI_BUSY;
  using PLL_AUDIO_CONTROL_MODE = PLL_AUDIO_CTRL_fields_::PLL_AUDIO_CONTROL_MODE;
};

// PLL_AUDIO_SS_REGISTER
struct PLL_AUDIO_SS_fields_ {
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
};  // struct PLL_AUDIO_SS_fields_

struct PLL_AUDIO_SS : ftl::mmio::Register<
    0x40C84310u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PLL_AUDIO_SS_fields_::STEP,
    PLL_AUDIO_SS_fields_::ENABLE,
    PLL_AUDIO_SS_fields_::STOP> {
  using eENABLE = PLL_AUDIO_SS_fields_::eENABLE;
  using STEP = PLL_AUDIO_SS_fields_::STEP;
  using ENABLE = PLL_AUDIO_SS_fields_::ENABLE;
  using STOP = PLL_AUDIO_SS_fields_::STOP;
};

// PLL_AUDIO_DENOMINATOR_REGISTER
struct PLL_AUDIO_DENOMINATOR_fields_ {
  // DENOM
  using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_AUDIO_DENOMINATOR_fields_

struct PLL_AUDIO_DENOMINATOR : ftl::mmio::Register<
    0x40C84320u,
    std::uint32_t,
    0x2FFFFFFEu,
    ftl::mmio::RW,
    PLL_AUDIO_DENOMINATOR_fields_::DENOM,
    ftl::mmio::Reserved<2, 30>> {
  using DENOM = PLL_AUDIO_DENOMINATOR_fields_::DENOM;
};

// PLL_AUDIO_NUMERATOR_REGISTER
struct PLL_AUDIO_NUMERATOR_fields_ {
  // NUM
  using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_AUDIO_NUMERATOR_fields_

struct PLL_AUDIO_NUMERATOR : ftl::mmio::Register<
    0x40C84330u,
    std::uint32_t,
    0x1FFFFFFFu,
    ftl::mmio::RW,
    PLL_AUDIO_NUMERATOR_fields_::NUM,
    ftl::mmio::Reserved<2, 30>> {
  using NUM = PLL_AUDIO_NUMERATOR_fields_::NUM;
};

// PLL_AUDIO_DIV_SELECT_REGISTER
struct PLL_AUDIO_DIV_SELECT_fields_ {
  // PLL_AUDIO_DIV_SELECT
  using PLL_AUDIO_DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_AUDIO_DIV_SELECT_fields_

struct PLL_AUDIO_DIV_SELECT : ftl::mmio::Register<
    0x40C84340u,
    std::uint32_t,
    0x00000029u,
    ftl::mmio::RW,
    PLL_AUDIO_DIV_SELECT_fields_::PLL_AUDIO_DIV_SELECT,
    ftl::mmio::Reserved<25, 7>> {
  using VALUE = PLL_AUDIO_DIV_SELECT_fields_::PLL_AUDIO_DIV_SELECT;
};

// PLL_VIDEO_CTRL_REGISTER
struct PLL_VIDEO_CTRL_fields_ {
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
};  // struct PLL_VIDEO_CTRL_fields_

struct PLL_VIDEO_CTRL : ftl::mmio::Register<
    0x40C84350u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<13, 0>,
    PLL_VIDEO_CTRL_fields_::ENABLE_CLK,
    PLL_VIDEO_CTRL_fields_::PLL_VIDEO_GATE,
    ftl::mmio::Reserved<9, 15>,
    PLL_VIDEO_CTRL_fields_::PLL_VIDEO_COUNTER_CLR,
    ftl::mmio::Reserved<4, 25>,
    PLL_VIDEO_CTRL_fields_::PLL_VIDEO_STABLE,
    PLL_VIDEO_CTRL_fields_::PLL_VIDEO_AI_BUSY,
    PLL_VIDEO_CTRL_fields_::PLL_VIDEO_CONTROL_MODE> {
  using ePLL_VIDEO_GATE = PLL_VIDEO_CTRL_fields_::ePLL_VIDEO_GATE;
  using ePLL_VIDEO_CONTROL_MODE = PLL_VIDEO_CTRL_fields_::ePLL_VIDEO_CONTROL_MODE;
  using ENABLE_CLK = PLL_VIDEO_CTRL_fields_::ENABLE_CLK;
  using PLL_VIDEO_GATE = PLL_VIDEO_CTRL_fields_::PLL_VIDEO_GATE;
  using PLL_VIDEO_COUNTER_CLR = PLL_VIDEO_CTRL_fields_::PLL_VIDEO_COUNTER_CLR;
  using PLL_VIDEO_STABLE = PLL_VIDEO_CTRL_fields_::PLL_VIDEO_STABLE;
  using PLL_VIDEO_AI_BUSY = PLL_VIDEO_CTRL_fields_::PLL_VIDEO_AI_BUSY;
  using PLL_VIDEO_CONTROL_MODE = PLL_VIDEO_CTRL_fields_::PLL_VIDEO_CONTROL_MODE;
};

// PLL_VIDEO_SS_REGISTER
struct PLL_VIDEO_SS_fields_ {
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
};  // struct PLL_VIDEO_SS_fields_

struct PLL_VIDEO_SS : ftl::mmio::Register<
    0x40C84360u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PLL_VIDEO_SS_fields_::STEP,
    PLL_VIDEO_SS_fields_::ENABLE,
    PLL_VIDEO_SS_fields_::STOP> {
  using eENABLE = PLL_VIDEO_SS_fields_::eENABLE;
  using STEP = PLL_VIDEO_SS_fields_::STEP;
  using ENABLE = PLL_VIDEO_SS_fields_::ENABLE;
  using STOP = PLL_VIDEO_SS_fields_::STOP;
};

// PLL_VIDEO_DENOMINATOR_REGISTER
struct PLL_VIDEO_DENOMINATOR_fields_ {
  // DENOM
  using DENOM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_VIDEO_DENOMINATOR_fields_

struct PLL_VIDEO_DENOMINATOR : ftl::mmio::Register<
    0x40C84370u,
    std::uint32_t,
    0x2FFFFFFEu,
    ftl::mmio::RW,
    PLL_VIDEO_DENOMINATOR_fields_::DENOM,
    ftl::mmio::Reserved<2, 30>> {
  using DENOM = PLL_VIDEO_DENOMINATOR_fields_::DENOM;
};

// PLL_VIDEO_NUMERATOR_REGISTER
struct PLL_VIDEO_NUMERATOR_fields_ {
  // NUM
  using NUM = ftl::mmio::Field<30, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_VIDEO_NUMERATOR_fields_

struct PLL_VIDEO_NUMERATOR : ftl::mmio::Register<
    0x40C84380u,
    std::uint32_t,
    0x1FFFFFFFu,
    ftl::mmio::RW,
    PLL_VIDEO_NUMERATOR_fields_::NUM,
    ftl::mmio::Reserved<2, 30>> {
  using NUM = PLL_VIDEO_NUMERATOR_fields_::NUM;
};

// PLL_VIDEO_DIV_SELECT_REGISTER
struct PLL_VIDEO_DIV_SELECT_fields_ {
  // DIV_SELECT
  using DIV_SELECT = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_VIDEO_DIV_SELECT_fields_

struct PLL_VIDEO_DIV_SELECT : ftl::mmio::Register<
    0x40C84390u,
    std::uint32_t,
    0x00000029u,
    ftl::mmio::RW,
    PLL_VIDEO_DIV_SELECT_fields_::DIV_SELECT,
    ftl::mmio::Reserved<25, 7>> {
  using DIV_SELECT = PLL_VIDEO_DIV_SELECT_fields_::DIV_SELECT;
};

}  // namespace regs::anadig_pll