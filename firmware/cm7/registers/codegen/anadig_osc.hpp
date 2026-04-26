#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigOsc {
  // 48MHz RCOSC Control Register
  struct Osc48mCtrlFields {
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
  };  // struct Osc48mCtrlFields

  struct OSC_48M_CTRL : ftl::mmio::Register<
      0x40C84010u,
      std::uint32_t,
      0x017901F2u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Osc48mCtrlFields::TEN,
      ftl::mmio::Reserved<22, 2>,
      Osc48mCtrlFields::RC_48M_DIV2_EN,
      ftl::mmio::Reserved<5, 25>,
      Osc48mCtrlFields::RC_48M_DIV2_CONTROL_MODE,
      Osc48mCtrlFields::RC_48M_CONTROL_MODE> {
    using eTEN = Osc48mCtrlFields::eTEN;
    using eRC_48M_DIV2_EN = Osc48mCtrlFields::eRC_48M_DIV2_EN;
    using eRC_48M_DIV2_CONTROL_MODE = Osc48mCtrlFields::eRC_48M_DIV2_CONTROL_MODE;
    using eRC_48M_CONTROL_MODE = Osc48mCtrlFields::eRC_48M_CONTROL_MODE;
    using TEN = Osc48mCtrlFields::TEN;
    using RC_48M_DIV2_EN = Osc48mCtrlFields::RC_48M_DIV2_EN;
    using RC_48M_DIV2_CONTROL_MODE = Osc48mCtrlFields::RC_48M_DIV2_CONTROL_MODE;
    using RC_48M_CONTROL_MODE = Osc48mCtrlFields::RC_48M_CONTROL_MODE;
  };

  // 24MHz OSC Control Register
  struct Osc24mCtrlFields {
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
  };  // struct Osc24mCtrlFields

  struct OSC_24M_CTRL : ftl::mmio::Register<
      0x40C84020u,
      std::uint32_t,
      0x00000080u,
      ftl::mmio::RW,
      Osc24mCtrlFields::BYPASS_CLK,
      Osc24mCtrlFields::BYPASS_EN,
      Osc24mCtrlFields::LP_EN,
      Osc24mCtrlFields::OSC_COMP_MODE,
      Osc24mCtrlFields::OSC_EN,
      ftl::mmio::Reserved<2, 5>,
      Osc24mCtrlFields::OSC_24M_GATE,
      ftl::mmio::Reserved<22, 8>,
      Osc24mCtrlFields::OSC_24M_STABLE,
      Osc24mCtrlFields::OSC_24M_CONTROL_MODE> {
    using eBYPASS_EN = Osc24mCtrlFields::eBYPASS_EN;
    using eLP_EN = Osc24mCtrlFields::eLP_EN;
    using eOSC_COMP_MODE = Osc24mCtrlFields::eOSC_COMP_MODE;
    using eOSC_EN = Osc24mCtrlFields::eOSC_EN;
    using eOSC_24M_GATE = Osc24mCtrlFields::eOSC_24M_GATE;
    using eOSC_24M_STABLE = Osc24mCtrlFields::eOSC_24M_STABLE;
    using eOSC_24M_CONTROL_MODE = Osc24mCtrlFields::eOSC_24M_CONTROL_MODE;
    using BYPASS_CLK = Osc24mCtrlFields::BYPASS_CLK;
    using BYPASS_EN = Osc24mCtrlFields::BYPASS_EN;
    using LP_EN = Osc24mCtrlFields::LP_EN;
    using OSC_COMP_MODE = Osc24mCtrlFields::OSC_COMP_MODE;
    using OSC_EN = Osc24mCtrlFields::OSC_EN;
    using OSC_24M_GATE = Osc24mCtrlFields::OSC_24M_GATE;
    using OSC_24M_STABLE = Osc24mCtrlFields::OSC_24M_STABLE;
    using OSC_24M_CONTROL_MODE = Osc24mCtrlFields::OSC_24M_CONTROL_MODE;
  };

  // 400MHz RCOSC Control0 Register
  struct Osc400mCtrl0Fields {
    // 400MHz OSC AI BUSY
    using OSC400M_AI_BUSY = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Osc400mCtrl0Fields

  struct OSC_400M_CTRL0 : ftl::mmio::Register<
      0x40C84040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<31, 0>,
      Osc400mCtrl0Fields::OSC400M_AI_BUSY> {
    using OSC400M_AI_BUSY = Osc400mCtrl0Fields::OSC400M_AI_BUSY;
  };

  // 400MHz RCOSC Control1 Register
  struct Osc400mCtrl1Fields {
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
  };  // struct Osc400mCtrl1Fields

  struct OSC_400M_CTRL1 : ftl::mmio::Register<
      0x40C84050u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      Osc400mCtrl1Fields::PWD,
      Osc400mCtrl1Fields::CLKGATE_400MEG,
      ftl::mmio::Reserved<29, 2>,
      Osc400mCtrl1Fields::RC_400M_CONTROL_MODE> {
    using ePWD = Osc400mCtrl1Fields::ePWD;
    using eCLKGATE_400MEG = Osc400mCtrl1Fields::eCLKGATE_400MEG;
    using eRC_400M_CONTROL_MODE = Osc400mCtrl1Fields::eRC_400M_CONTROL_MODE;
    using PWD = Osc400mCtrl1Fields::PWD;
    using CLKGATE_400MEG = Osc400mCtrl1Fields::CLKGATE_400MEG;
    using RC_400M_CONTROL_MODE = Osc400mCtrl1Fields::RC_400M_CONTROL_MODE;
  };

  // 400MHz RCOSC Control2 Register
  struct Osc400mCtrl2Fields {
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
  };  // struct Osc400mCtrl2Fields

  struct OSC_400M_CTRL2 : ftl::mmio::Register<
      0x40C84060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Osc400mCtrl2Fields::ENABLE_CLK,
      ftl::mmio::Reserved<9, 1>,
      Osc400mCtrl2Fields::TUNE_BYP,
      ftl::mmio::Reserved<13, 11>,
      Osc400mCtrl2Fields::OSC_TUNE_VAL> {
    using eENABLE_CLK = Osc400mCtrl2Fields::eENABLE_CLK;
    using eTUNE_BYP = Osc400mCtrl2Fields::eTUNE_BYP;
    using ENABLE_CLK = Osc400mCtrl2Fields::ENABLE_CLK;
    using TUNE_BYP = Osc400mCtrl2Fields::TUNE_BYP;
    using OSC_TUNE_VAL = Osc400mCtrl2Fields::OSC_TUNE_VAL;
  };

  // 16MHz RCOSC Control Register
  struct Osc16mCtrlFields {
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
  };  // struct Osc16mCtrlFields

  struct OSC_16M_CTRL : ftl::mmio::Register<
      0x40C840C0u,
      std::uint32_t,
      0x00000007u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Osc16mCtrlFields::EN_IRC4M16M,
      ftl::mmio::Reserved<1, 2>,
      Osc16mCtrlFields::EN_POWER_SAVE,
      ftl::mmio::Reserved<4, 4>,
      Osc16mCtrlFields::SOURCE_SEL_16M,
      ftl::mmio::Reserved<22, 9>,
      Osc16mCtrlFields::RC_16M_CONTROL_MODE> {
    using eEN_IRC4M16M = Osc16mCtrlFields::eEN_IRC4M16M;
    using eEN_POWER_SAVE = Osc16mCtrlFields::eEN_POWER_SAVE;
    using eSOURCE_SEL_16M = Osc16mCtrlFields::eSOURCE_SEL_16M;
    using eRC_16M_CONTROL_MODE = Osc16mCtrlFields::eRC_16M_CONTROL_MODE;
    using EN_IRC4M16M = Osc16mCtrlFields::EN_IRC4M16M;
    using EN_POWER_SAVE = Osc16mCtrlFields::EN_POWER_SAVE;
    using SOURCE_SEL_16M = Osc16mCtrlFields::SOURCE_SEL_16M;
    using RC_16M_CONTROL_MODE = Osc16mCtrlFields::RC_16M_CONTROL_MODE;
  };

};

}  // namespace regs