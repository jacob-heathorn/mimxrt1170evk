#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_OSC {


// 48MHz RCOSC Control Register
union OSC_48M_CTRL {
  
  // 48MHz RCOSC Enable
  enum class eTEN : uint32_t {
    // Power down
    ePD = 0,
    // Power up
    ePU = 1,
  };
  
  // RCOSC_48M_DIV2 Enable
  enum class eRC_48M_DIV2_EN : uint32_t {
    // Disable
    ePD = 0,
    // Enable
    ePU = 1,
  };
  
  // RCOSC_48M_DIV2 Control Mode
  enum class eRC_48M_DIV2_CONTROL_MODE : uint32_t {
    // Software mode (default)
    eSW = 0,
    // GPC mode (Setpoint)
    eGPC = 1,
  };
  
  // 48MHz RCOSC Control Mode
  enum class eRC_48M_CONTROL_MODE : uint32_t {
    // Software mode (default)
    eSW = 0,
    // GPC mode (Setpoint)
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - 48MHz RCOSC Enable
    eTEN TEN : 1;
    uint32_t _reserved_1 : 22;
    // read-write - RCOSC_48M_DIV2 Enable
    eRC_48M_DIV2_EN RC_48M_DIV2_EN : 1;
    uint32_t _reserved_2 : 5;
    // read-write - RCOSC_48M_DIV2 Control Mode
    eRC_48M_DIV2_CONTROL_MODE RC_48M_DIV2_CONTROL_MODE : 1;
    // read-write - 48MHz RCOSC Control Mode
    eRC_48M_CONTROL_MODE RC_48M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x017901F2; }
  static inline volatile OSC_48M_CTRL &ref() { return *reinterpret_cast<volatile OSC_48M_CTRL*>(0x40C84010); }
};

// 24MHz OSC Control Register
union OSC_24M_CTRL {
  
  // 24MHz OSC Bypass Enable
  enum class eBYPASS_EN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // 24MHz OSC Low-Power Mode Enable
  enum class eLP_EN : uint32_t {
    // High Gain mode (HP)
    eHP = 0,
    // Low-power mode (LP)
    eLP = 1,
  };
  
  // 24MHz OSC Comparator Mode
  enum class eOSC_COMP_MODE : uint32_t {
    // Single-ended mode (default)
    eSINGLE = 0,
    // Differential mode (test mode)
    eDIFF = 1,
  };
  
  // 24MHz OSC Enable
  enum class eOSC_EN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // 24MHz OSC Gate Control
  enum class eOSC_24M_GATE : uint32_t {
    // Not Gated
    eNG = 0,
    // Gated
    eGATE = 1,
  };
  
  // 24MHz OSC Stable
  enum class eOSC_24M_STABLE : uint32_t {
    // Not Stable
    eNS = 0,
    // Stable
    eSTABLE = 1,
  };
  
  // 24MHz OSC Control Mode
  enum class eOSC_24M_CONTROL_MODE : uint32_t {
    // Software mode (default)
    eSW = 0,
    // GPC mode (Setpoint)
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - 24MHz OSC Bypass Clock
    uint32_t BYPASS_CLK : 1;
    // read-write - 24MHz OSC Bypass Enable
    eBYPASS_EN BYPASS_EN : 1;
    // read-write - 24MHz OSC Low-Power Mode Enable
    eLP_EN LP_EN : 1;
    // read-write - 24MHz OSC Comparator Mode
    eOSC_COMP_MODE OSC_COMP_MODE : 1;
    // read-write - 24MHz OSC Enable
    eOSC_EN OSC_EN : 1;
    uint32_t _reserved_0 : 2;
    // read-write - 24MHz OSC Gate Control
    eOSC_24M_GATE OSC_24M_GATE : 1;
    uint32_t _reserved_1 : 22;
    // read-only - 24MHz OSC Stable
    eOSC_24M_STABLE OSC_24M_STABLE : 1;
    // read-write - 24MHz OSC Control Mode
    eOSC_24M_CONTROL_MODE OSC_24M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000080; }
  static inline volatile OSC_24M_CTRL &ref() { return *reinterpret_cast<volatile OSC_24M_CTRL*>(0x40C84020); }
};

// 400MHz RCOSC Control0 Register
union OSC_400M_CTRL0 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 31;
    // read-only - 400MHz OSC AI BUSY
    uint32_t OSC400M_AI_BUSY : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OSC_400M_CTRL0 &ref() { return *reinterpret_cast<volatile OSC_400M_CTRL0*>(0x40C84040); }
};

// 400MHz RCOSC Control1 Register
union OSC_400M_CTRL1 {
  
  // Power down control for 400MHz RCOSC
  enum class ePWD : uint32_t {
    // No Power down
    ePD = 0,
    // Power down
    ePU = 1,
  };
  
  // Clock gate control for 400MHz RCOSC
  enum class eCLKGATE_400MEG : uint32_t {
    // Not Gated
    eNG = 0,
    // Gated
    eGATE = 1,
  };
  
  // 400MHz RCOSC Control mode
  enum class eRC_400M_CONTROL_MODE : uint32_t {
    // Software mode (default)
    eSW = 0,
    // GPC mode (Setpoint)
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Power down control for 400MHz RCOSC
    ePWD PWD : 1;
    // read-write - Clock gate control for 400MHz RCOSC
    eCLKGATE_400MEG CLKGATE_400MEG : 1;
    uint32_t _reserved_0 : 29;
    // read-write - 400MHz RCOSC Control mode
    eRC_400M_CONTROL_MODE RC_400M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile OSC_400M_CTRL1 &ref() { return *reinterpret_cast<volatile OSC_400M_CTRL1*>(0x40C84050); }
};

// 400MHz RCOSC Control2 Register
union OSC_400M_CTRL2 {
  
  // Clock enable
  enum class eENABLE_CLK : uint32_t {
    // Clock is disabled before entering GPC mode
    eDISABLE = 0,
    // Clock is enabled before entering GPC mode
    eENABLE = 1,
  };
  
  // Bypass tuning logic
  enum class eTUNE_BYP : uint32_t {
    // Use the output of tuning logic to run the oscillator
    eRUN = 0,
    // Bypass the tuning logic and use the programmed OSC_TUNE_VAL to run the oscillator
    eBYPASS = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock enable
    eENABLE_CLK ENABLE_CLK : 1;
    uint32_t _reserved_0 : 9;
    // read-write - Bypass tuning logic
    eTUNE_BYP TUNE_BYP : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Oscillator Tune Value
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OSC_400M_CTRL2 &ref() { return *reinterpret_cast<volatile OSC_400M_CTRL2*>(0x40C84060); }
};

// 16MHz RCOSC Control Register
union OSC_16M_CTRL {
  
  // Enable Clock Output
  enum class eEN_IRC4M16M : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Power Save Enable
  enum class eEN_POWER_SAVE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Source select
  enum class eSOURCE_SEL_16M : uint32_t {
    // 16MHz Oscillator
    eMhz_16 = 0,
    // 24MHz Oscillator
    eMhz_24 = 1,
  };
  
  // Control Mode for 16MHz Oscillator
  enum class eRC_16M_CONTROL_MODE : uint32_t {
    // Software mode (default)
    eSW = 0,
    // GPC mode (Setpoint)
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Enable Clock Output
    eEN_IRC4M16M EN_IRC4M16M : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Power Save Enable
    eEN_POWER_SAVE EN_POWER_SAVE : 1;
    uint32_t _reserved_2 : 4;
    // read-write - Source select
    eSOURCE_SEL_16M SOURCE_SEL_16M : 1;
    uint32_t _reserved_3 : 22;
    // read-write - Control Mode for 16MHz Oscillator
    eRC_16M_CONTROL_MODE RC_16M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile OSC_16M_CTRL &ref() { return *reinterpret_cast<volatile OSC_16M_CTRL*>(0x40C840C0); }
};


} // namespace nANADIG_OSC