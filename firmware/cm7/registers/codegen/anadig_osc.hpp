#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigOsc {
  // 48MHz RCOSC Control Register
  struct OSC_48M_CTRL_fields_ {
    enum class eTEN : std::uint32_t {
      // Power down
      ePD = 0,
      // Power up
      ePU = 1,
    };

    enum class eRC_48M_DIV2_EN : std::uint32_t {
      // Disable
      ePD = 0,
      // Enable
      ePU = 1,
    };

    enum class eRC_48M_DIV2_CONTROL_MODE : std::uint32_t {
      // Software mode (default)
      eSW = 0,
      // GPC mode (Setpoint)
      eGPC = 1,
    };

    enum class eRC_48M_CONTROL_MODE : std::uint32_t {
      // Software mode (default)
      eSW = 0,
      // GPC mode (Setpoint)
      eGPC = 1,
    };

    // 48MHz RCOSC Enable
    using TEN = ftl::mmio::Field<1, 1, eTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // RCOSC_48M_DIV2 Enable
    using RC_48M_DIV2_EN = ftl::mmio::Field<1, 24, eRC_48M_DIV2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // RCOSC_48M_DIV2 Control Mode
    using RC_48M_DIV2_CONTROL_MODE = ftl::mmio::Field<1, 30, eRC_48M_DIV2_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // 48MHz RCOSC Control Mode
    using RC_48M_CONTROL_MODE = ftl::mmio::Field<1, 31, eRC_48M_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OSC_48M_CTRL_fields_

  struct OSC_48M_CTRL : ftl::mmio::Register<
      0x40C84010u,
      std::uint32_t,
      0x017901F2u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      OSC_48M_CTRL_fields_::TEN,
      ftl::mmio::Reserved<22, 2>,
      OSC_48M_CTRL_fields_::RC_48M_DIV2_EN,
      ftl::mmio::Reserved<5, 25>,
      OSC_48M_CTRL_fields_::RC_48M_DIV2_CONTROL_MODE,
      OSC_48M_CTRL_fields_::RC_48M_CONTROL_MODE> {
    using eTEN = OSC_48M_CTRL_fields_::eTEN;
    using eRC_48M_DIV2_EN = OSC_48M_CTRL_fields_::eRC_48M_DIV2_EN;
    using eRC_48M_DIV2_CONTROL_MODE = OSC_48M_CTRL_fields_::eRC_48M_DIV2_CONTROL_MODE;
    using eRC_48M_CONTROL_MODE = OSC_48M_CTRL_fields_::eRC_48M_CONTROL_MODE;
    using TEN = OSC_48M_CTRL_fields_::TEN;
    using RC_48M_DIV2_EN = OSC_48M_CTRL_fields_::RC_48M_DIV2_EN;
    using RC_48M_DIV2_CONTROL_MODE = OSC_48M_CTRL_fields_::RC_48M_DIV2_CONTROL_MODE;
    using RC_48M_CONTROL_MODE = OSC_48M_CTRL_fields_::RC_48M_CONTROL_MODE;
  };

  // 24MHz OSC Control Register
  struct OSC_24M_CTRL_fields_ {
    enum class eBYPASS_EN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eLP_EN : std::uint32_t {
      // High Gain mode (HP)
      eHP = 0,
      // Low-power mode (LP)
      eLP = 1,
    };

    enum class eOSC_COMP_MODE : std::uint32_t {
      // Single-ended mode (default)
      eSINGLE = 0,
      // Differential mode (test mode)
      eDIFF = 1,
    };

    enum class eOSC_EN : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eOSC_24M_GATE : std::uint32_t {
      // Not Gated
      eNG = 0,
      // Gated
      eGATE = 1,
    };

    enum class eOSC_24M_STABLE : std::uint32_t {
      // Not Stable
      eNS = 0,
      // Stable
      eSTABLE = 1,
    };

    enum class eOSC_24M_CONTROL_MODE : std::uint32_t {
      // Software mode (default)
      eSW = 0,
      // GPC mode (Setpoint)
      eGPC = 1,
    };

    // 24MHz OSC Bypass Clock
    using BYPASS_CLK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Bypass Enable
    using BYPASS_EN = ftl::mmio::Field<1, 1, eBYPASS_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Low-Power Mode Enable
    using LP_EN = ftl::mmio::Field<1, 2, eLP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Comparator Mode
    using OSC_COMP_MODE = ftl::mmio::Field<1, 3, eOSC_COMP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Enable
    using OSC_EN = ftl::mmio::Field<1, 4, eOSC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Gate Control
    using OSC_24M_GATE = ftl::mmio::Field<1, 7, eOSC_24M_GATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24MHz OSC Stable
    using OSC_24M_STABLE = ftl::mmio::Field<1, 30, eOSC_24M_STABLE, ftl::mmio::RO, ftl::mmio::Normal>;
    // 24MHz OSC Control Mode
    using OSC_24M_CONTROL_MODE = ftl::mmio::Field<1, 31, eOSC_24M_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OSC_24M_CTRL_fields_

  struct OSC_24M_CTRL : ftl::mmio::Register<
      0x40C84020u,
      std::uint32_t,
      0x00000080u,
      ftl::mmio::RW,
      OSC_24M_CTRL_fields_::BYPASS_CLK,
      OSC_24M_CTRL_fields_::BYPASS_EN,
      OSC_24M_CTRL_fields_::LP_EN,
      OSC_24M_CTRL_fields_::OSC_COMP_MODE,
      OSC_24M_CTRL_fields_::OSC_EN,
      ftl::mmio::Reserved<2, 5>,
      OSC_24M_CTRL_fields_::OSC_24M_GATE,
      ftl::mmio::Reserved<22, 8>,
      OSC_24M_CTRL_fields_::OSC_24M_STABLE,
      OSC_24M_CTRL_fields_::OSC_24M_CONTROL_MODE> {
    using eBYPASS_EN = OSC_24M_CTRL_fields_::eBYPASS_EN;
    using eLP_EN = OSC_24M_CTRL_fields_::eLP_EN;
    using eOSC_COMP_MODE = OSC_24M_CTRL_fields_::eOSC_COMP_MODE;
    using eOSC_EN = OSC_24M_CTRL_fields_::eOSC_EN;
    using eOSC_24M_GATE = OSC_24M_CTRL_fields_::eOSC_24M_GATE;
    using eOSC_24M_STABLE = OSC_24M_CTRL_fields_::eOSC_24M_STABLE;
    using eOSC_24M_CONTROL_MODE = OSC_24M_CTRL_fields_::eOSC_24M_CONTROL_MODE;
    using BYPASS_CLK = OSC_24M_CTRL_fields_::BYPASS_CLK;
    using BYPASS_EN = OSC_24M_CTRL_fields_::BYPASS_EN;
    using LP_EN = OSC_24M_CTRL_fields_::LP_EN;
    using OSC_COMP_MODE = OSC_24M_CTRL_fields_::OSC_COMP_MODE;
    using OSC_EN = OSC_24M_CTRL_fields_::OSC_EN;
    using OSC_24M_GATE = OSC_24M_CTRL_fields_::OSC_24M_GATE;
    using OSC_24M_STABLE = OSC_24M_CTRL_fields_::OSC_24M_STABLE;
    using OSC_24M_CONTROL_MODE = OSC_24M_CTRL_fields_::OSC_24M_CONTROL_MODE;
  };

  // 400MHz RCOSC Control0 Register
  struct OSC_400M_CTRL0_fields_ {
    // 400MHz OSC AI BUSY
    using OSC400M_AI_BUSY = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OSC_400M_CTRL0_fields_

  struct OSC_400M_CTRL0 : ftl::mmio::Register<
      0x40C84040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<31, 0>,
      OSC_400M_CTRL0_fields_::OSC400M_AI_BUSY> {
    using OSC400M_AI_BUSY = OSC_400M_CTRL0_fields_::OSC400M_AI_BUSY;
  };

  // 400MHz RCOSC Control1 Register
  struct OSC_400M_CTRL1_fields_ {
    enum class ePWD : std::uint32_t {
      // No Power down
      ePD = 0,
      // Power down
      ePU = 1,
    };

    enum class eCLKGATE_400MEG : std::uint32_t {
      // Not Gated
      eNG = 0,
      // Gated
      eGATE = 1,
    };

    enum class eRC_400M_CONTROL_MODE : std::uint32_t {
      // Software mode (default)
      eSW = 0,
      // GPC mode (Setpoint)
      eGPC = 1,
    };

    // Power down control for 400MHz RCOSC
    using PWD = ftl::mmio::Field<1, 0, ePWD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock gate control for 400MHz RCOSC
    using CLKGATE_400MEG = ftl::mmio::Field<1, 1, eCLKGATE_400MEG, ftl::mmio::RW, ftl::mmio::Normal>;
    // 400MHz RCOSC Control mode
    using RC_400M_CONTROL_MODE = ftl::mmio::Field<1, 31, eRC_400M_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OSC_400M_CTRL1_fields_

  struct OSC_400M_CTRL1 : ftl::mmio::Register<
      0x40C84050u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      OSC_400M_CTRL1_fields_::PWD,
      OSC_400M_CTRL1_fields_::CLKGATE_400MEG,
      ftl::mmio::Reserved<29, 2>,
      OSC_400M_CTRL1_fields_::RC_400M_CONTROL_MODE> {
    using ePWD = OSC_400M_CTRL1_fields_::ePWD;
    using eCLKGATE_400MEG = OSC_400M_CTRL1_fields_::eCLKGATE_400MEG;
    using eRC_400M_CONTROL_MODE = OSC_400M_CTRL1_fields_::eRC_400M_CONTROL_MODE;
    using PWD = OSC_400M_CTRL1_fields_::PWD;
    using CLKGATE_400MEG = OSC_400M_CTRL1_fields_::CLKGATE_400MEG;
    using RC_400M_CONTROL_MODE = OSC_400M_CTRL1_fields_::RC_400M_CONTROL_MODE;
  };

  // 400MHz RCOSC Control2 Register
  struct OSC_400M_CTRL2_fields_ {
    enum class eENABLE_CLK : std::uint32_t {
      // Clock is disabled before entering GPC mode
      eDISABLE = 0,
      // Clock is enabled before entering GPC mode
      eENABLE = 1,
    };

    enum class eTUNE_BYP : std::uint32_t {
      // Use the output of tuning logic to run the oscillator
      eRUN = 0,
      // Bypass the tuning logic and use the programmed OSC_TUNE_VAL to run the oscillator
      eBYPASS = 1,
    };

    // Clock enable
    using ENABLE_CLK = ftl::mmio::Field<1, 0, eENABLE_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bypass tuning logic
    using TUNE_BYP = ftl::mmio::Field<1, 10, eTUNE_BYP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Oscillator Tune Value
    using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OSC_400M_CTRL2_fields_

  struct OSC_400M_CTRL2 : ftl::mmio::Register<
      0x40C84060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      OSC_400M_CTRL2_fields_::ENABLE_CLK,
      ftl::mmio::Reserved<9, 1>,
      OSC_400M_CTRL2_fields_::TUNE_BYP,
      ftl::mmio::Reserved<13, 11>,
      OSC_400M_CTRL2_fields_::OSC_TUNE_VAL> {
    using eENABLE_CLK = OSC_400M_CTRL2_fields_::eENABLE_CLK;
    using eTUNE_BYP = OSC_400M_CTRL2_fields_::eTUNE_BYP;
    using ENABLE_CLK = OSC_400M_CTRL2_fields_::ENABLE_CLK;
    using TUNE_BYP = OSC_400M_CTRL2_fields_::TUNE_BYP;
    using OSC_TUNE_VAL = OSC_400M_CTRL2_fields_::OSC_TUNE_VAL;
  };

  // 16MHz RCOSC Control Register
  struct OSC_16M_CTRL_fields_ {
    enum class eEN_IRC4M16M : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eEN_POWER_SAVE : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eSOURCE_SEL_16M : std::uint32_t {
      // 16MHz Oscillator
      eMhz_16 = 0,
      // 24MHz Oscillator
      eMhz_24 = 1,
    };

    enum class eRC_16M_CONTROL_MODE : std::uint32_t {
      // Software mode (default)
      eSW = 0,
      // GPC mode (Setpoint)
      eGPC = 1,
    };

    // Enable Clock Output
    using EN_IRC4M16M = ftl::mmio::Field<1, 1, eEN_IRC4M16M, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Save Enable
    using EN_POWER_SAVE = ftl::mmio::Field<1, 3, eEN_POWER_SAVE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Source select
    using SOURCE_SEL_16M = ftl::mmio::Field<1, 8, eSOURCE_SEL_16M, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control Mode for 16MHz Oscillator
    using RC_16M_CONTROL_MODE = ftl::mmio::Field<1, 31, eRC_16M_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OSC_16M_CTRL_fields_

  struct OSC_16M_CTRL : ftl::mmio::Register<
      0x40C840C0u,
      std::uint32_t,
      0x00000007u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      OSC_16M_CTRL_fields_::EN_IRC4M16M,
      ftl::mmio::Reserved<1, 2>,
      OSC_16M_CTRL_fields_::EN_POWER_SAVE,
      ftl::mmio::Reserved<4, 4>,
      OSC_16M_CTRL_fields_::SOURCE_SEL_16M,
      ftl::mmio::Reserved<22, 9>,
      OSC_16M_CTRL_fields_::RC_16M_CONTROL_MODE> {
    using eEN_IRC4M16M = OSC_16M_CTRL_fields_::eEN_IRC4M16M;
    using eEN_POWER_SAVE = OSC_16M_CTRL_fields_::eEN_POWER_SAVE;
    using eSOURCE_SEL_16M = OSC_16M_CTRL_fields_::eSOURCE_SEL_16M;
    using eRC_16M_CONTROL_MODE = OSC_16M_CTRL_fields_::eRC_16M_CONTROL_MODE;
    using EN_IRC4M16M = OSC_16M_CTRL_fields_::EN_IRC4M16M;
    using EN_POWER_SAVE = OSC_16M_CTRL_fields_::EN_POWER_SAVE;
    using SOURCE_SEL_16M = OSC_16M_CTRL_fields_::SOURCE_SEL_16M;
    using RC_16M_CONTROL_MODE = OSC_16M_CTRL_fields_::RC_16M_CONTROL_MODE;
  };

};

}  // namespace regs