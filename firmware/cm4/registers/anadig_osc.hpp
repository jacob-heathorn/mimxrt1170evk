#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nANADIG_OSC {


// 48MHz RCOSC Control Register
//
union OSC_48M_CTRL {
  
  enum class eTEN : uint32_t {
    ePD = 0, // Power down
    ePU = 1, // Power up
  };
  
  enum class eRC_48M_DIV2_EN : uint32_t {
    ePD = 0, // Disable
    ePU = 1, // Enable
  };
  
  enum class eRC_48M_DIV2_CONTROL_MODE : uint32_t {
    eSW = 0, // Software mode (default)
    eGPC = 1, // GPC mode (Setpoint)
  };
  
  enum class eRC_48M_CONTROL_MODE : uint32_t {
    eSW = 0, // Software mode (default)
    eGPC = 1, // GPC mode (Setpoint)
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eTEN TEN : 1;
    uint32_t _reserved_1 : 22;
    eRC_48M_DIV2_EN RC_48M_DIV2_EN : 1;
    uint32_t _reserved_2 : 5;
    eRC_48M_DIV2_CONTROL_MODE RC_48M_DIV2_CONTROL_MODE : 1;
    eRC_48M_CONTROL_MODE RC_48M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_48M_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x017901F2; }
  static inline volatile OSC_48M_CTRL &Instance() { return *reinterpret_cast<volatile OSC_48M_CTRL*>(0x40C84010); }
};

// 24MHz OSC Control Register
//
union OSC_24M_CTRL {
  
  enum class eBYPASS_EN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eLP_EN : uint32_t {
    eHP = 0, // High Gain mode (HP)
    eLP = 1, // Low-power mode (LP)
  };
  
  enum class eOSC_COMP_MODE : uint32_t {
    eSINGLE = 0, // Single-ended mode (default)
    eDIFF = 1, // Differential mode (test mode)
  };
  
  enum class eOSC_EN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eOSC_24M_GATE : uint32_t {
    eNG = 0, // Not Gated
    eGATE = 1, // Gated
  };
  
  enum class eOSC_24M_STABLE : uint32_t {
    eNS = 0, // Not Stable
    eSTABLE = 1, // Stable
  };
  
  enum class eOSC_24M_CONTROL_MODE : uint32_t {
    eSW = 0, // Software mode (default)
    eGPC = 1, // GPC mode (Setpoint)
  };
  
  // Bit field definition.
  struct {
    uint32_t BYPASS_CLK : 1;
    eBYPASS_EN BYPASS_EN : 1;
    eLP_EN LP_EN : 1;
    eOSC_COMP_MODE OSC_COMP_MODE : 1;
    eOSC_EN OSC_EN : 1;
    uint32_t _reserved_5 : 2;
    eOSC_24M_GATE OSC_24M_GATE : 1;
    uint32_t _reserved_6 : 22;
    eOSC_24M_STABLE OSC_24M_STABLE : 1;
    eOSC_24M_CONTROL_MODE OSC_24M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_24M_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000080; }
  static inline volatile OSC_24M_CTRL &Instance() { return *reinterpret_cast<volatile OSC_24M_CTRL*>(0x40C84020); }
};

// 400MHz RCOSC Control0 Register
//
union OSC_400M_CTRL0 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 31;
    uint32_t OSC400M_AI_BUSY : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_400M_CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OSC_400M_CTRL0 &Instance() { return *reinterpret_cast<volatile OSC_400M_CTRL0*>(0x40C84040); }
};

// 400MHz RCOSC Control1 Register
//
union OSC_400M_CTRL1 {
  
  enum class ePWD : uint32_t {
    ePD = 0, // No Power down
    ePU = 1, // Power down
  };
  
  enum class eCLKGATE_400MEG : uint32_t {
    eNG = 0, // Not Gated
    eGATE = 1, // Gated
  };
  
  enum class eRC_400M_CONTROL_MODE : uint32_t {
    eSW = 0, // Software mode (default)
    eGPC = 1, // GPC mode (Setpoint)
  };
  
  // Bit field definition.
  struct {
    ePWD PWD : 1;
    eCLKGATE_400MEG CLKGATE_400MEG : 1;
    uint32_t _reserved_2 : 29;
    eRC_400M_CONTROL_MODE RC_400M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_400M_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile OSC_400M_CTRL1 &Instance() { return *reinterpret_cast<volatile OSC_400M_CTRL1*>(0x40C84050); }
};

// 400MHz RCOSC Control2 Register
//
union OSC_400M_CTRL2 {
  
  enum class eENABLE_CLK : uint32_t {
    eDISABLE = 0, // Clock is disabled before entering GPC mode
    eENABLE = 1, // Clock is enabled before entering GPC mode
  };
  
  enum class eTUNE_BYP : uint32_t {
    eRUN = 0, // Use the output of tuning logic to run the oscillator
    eBYPASS = 1, // Bypass the tuning logic and use the programmed OSC_TUNE_VAL to run the oscillator
  };
  
  // Bit field definition.
  struct {
    eENABLE_CLK ENABLE_CLK : 1;
    uint32_t _reserved_1 : 9;
    eTUNE_BYP TUNE_BYP : 1;
    uint32_t _reserved_2 : 13;
    uint32_t OSC_TUNE_VAL : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_400M_CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OSC_400M_CTRL2 &Instance() { return *reinterpret_cast<volatile OSC_400M_CTRL2*>(0x40C84060); }
};

// 16MHz RCOSC Control Register
//
union OSC_16M_CTRL {
  
  enum class eEN_IRC4M16M : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eEN_POWER_SAVE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSOURCE_SEL_16M : uint32_t {
    eMhz_16 = 0, // 16MHz Oscillator
    eMhz_24 = 1, // 24MHz Oscillator
  };
  
  enum class eRC_16M_CONTROL_MODE : uint32_t {
    eSW = 0, // Software mode (default)
    eGPC = 1, // GPC mode (Setpoint)
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eEN_IRC4M16M EN_IRC4M16M : 1;
    uint32_t _reserved_1 : 1;
    eEN_POWER_SAVE EN_POWER_SAVE : 1;
    uint32_t _reserved_2 : 4;
    eSOURCE_SEL_16M SOURCE_SEL_16M : 1;
    uint32_t _reserved_3 : 22;
    eRC_16M_CONTROL_MODE RC_16M_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OSC_16M_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000007; }
  static inline volatile OSC_16M_CTRL &Instance() { return *reinterpret_cast<volatile OSC_16M_CTRL*>(0x40C840C0); }
};


} // namespace nANADIG_OSC