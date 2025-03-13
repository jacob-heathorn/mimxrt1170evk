#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_PLL {


// ARM_PLL_CTRL_REGISTER
union ARM_PLL_CTRL {
  
  // PLL Start up initialization
  enum class eHOLD_RING_OFF : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Initialize PLL start up
    eENABLE = 1,
  };
  
  // Powers up the PLL.
  enum class ePOWERUP : uint32_t {
    // Power down the PLL
    ePDOWN = 0,
    // Power Up the PLL
    ePUP = 1,
  };
  
  // Enable the clock output.
  enum class eENABLE_CLK : uint32_t {
    // Disable the clock
    eDISABLE = 0,
    // Enable the clock
    eENABLE = 1,
  };
  
  // POST_DIV_SEL
  enum class ePOST_DIV_SEL : uint32_t {
    // Divide by 2
    eDIV2 = 0,
    // Divide by 4
    eDIV4 = 1,
    // Divide by 8
    eDIV8 = 2,
    // Divide by 1
    eDIV1 = 3,
  };
  
  // Bypass the pll.
  enum class eBYPASS : uint32_t {
    // Function mode
    eFUNC = 0,
    // Bypass Mode
    eBYPASS = 1,
  };
  
  // ARM_PLL_STABLE
  enum class eARM_PLL_STABLE : uint32_t {
    // ARM PLL is not stable
    eDISABLE = 0,
    // ARM PLL is stable
    eENABLE = 1,
  };
  
  // ARM_PLL_GATE
  enum class eARM_PLL_GATE : uint32_t {
    // Clock is not gated
    eDISABLE = 0,
    // Clock is gated
    eENABLE = 1,
  };
  
  // pll_arm_control_mode
  enum class eARM_PLL_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DIV_SELECT
    uint32_t DIV_SELECT : 8;
    uint32_t _reserved_0 : 4;
    // read-write - PLL Start up initialization
    eHOLD_RING_OFF HOLD_RING_OFF : 1;
    // read-write - Powers up the PLL.
    ePOWERUP POWERUP : 1;
    // read-write - Enable the clock output.
    eENABLE_CLK ENABLE_CLK : 1;
    // read-write - POST_DIV_SEL
    ePOST_DIV_SEL POST_DIV_SEL : 2;
    // read-write - Bypass the pll.
    eBYPASS BYPASS : 1;
    uint32_t _reserved_1 : 11;
    // read-only - ARM_PLL_STABLE
    eARM_PLL_STABLE ARM_PLL_STABLE : 1;
    // read-write - ARM_PLL_GATE
    eARM_PLL_GATE ARM_PLL_GATE : 1;
    // read-write - pll_arm_control_mode
    eARM_PLL_CONTROL_MODE ARM_PLL_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ARM_PLL_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x400000A6; }
  static inline volatile ARM_PLL_CTRL &ref() { return *reinterpret_cast<volatile ARM_PLL_CTRL*>(0x40C84200); }
};

// SYS_PLL3_CTRL_REGISTER
union SYS_PLL3_CTRL {
  
  // PLL Start up initialization
  enum class eHOLD_RING_OFF : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Initialize PLL start up
    eENABLE = 1,
  };
  
  // Enable the clock output.
  enum class eENABLE_CLK : uint32_t {
    // Disable the clock
    eDISABLE = 0,
    // Enable the clock
    eENABLE = 1,
  };
  
  // BYPASS
  enum class eBYPASS : uint32_t {
    // Function mode
    eFUNC = 0,
    // Bypass Mode
    eBYPASS = 1,
  };
  
  // Powers up the PLL.
  enum class ePOWERUP : uint32_t {
    // Power down the PLL
    ePDOWN = 0,
    // Power Up the PLL
    ePUP = 1,
  };
  
  // SYS_PLL3_DIV2_CONTROL_MODE
  enum class eSYS_PLL3_DIV2_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // SYS_PLL3_GATE
  enum class eSYS_PLL3_GATE : uint32_t {
    // Clock is not gated
    eDISABLE = 0,
    // Clock is gated
    eENABLE = 1,
  };
  
  // SYS_PLL3_control_mode
  enum class eSYS_PLL3_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - SYS PLL3 DIV2 gate
    uint32_t SYS_PLL3_DIV2 : 1;
    // read-write - Enable Internal PLL Regulator
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_1 : 6;
    // read-write - PLL Start up initialization
    eHOLD_RING_OFF HOLD_RING_OFF : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Enable the clock output.
    eENABLE_CLK ENABLE_CLK : 1;
    uint32_t _reserved_3 : 2;
    // read-write - BYPASS
    eBYPASS BYPASS : 1;
    uint32_t _reserved_4 : 4;
    // read-write - Powers up the PLL.
    ePOWERUP POWERUP : 1;
    uint32_t _reserved_5 : 6;
    // read-write - SYS_PLL3_DIV2_CONTROL_MODE
    eSYS_PLL3_DIV2_CONTROL_MODE SYS_PLL3_DIV2_CONTROL_MODE : 1;
    // read-only - SYS_PLL3_STABLE
    uint32_t SYS_PLL3_STABLE : 1;
    // read-write - SYS_PLL3_GATE
    eSYS_PLL3_GATE SYS_PLL3_GATE : 1;
    // read-write - SYS_PLL3_control_mode
    eSYS_PLL3_CONTROL_MODE SYS_PLL3_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL3_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x40000003; }
  static inline volatile SYS_PLL3_CTRL &ref() { return *reinterpret_cast<volatile SYS_PLL3_CTRL*>(0x40C84210); }
};

// SYS_PLL3_UPDATE_REGISTER
union SYS_PLL3_UPDATE {
  
  // pfd0_control_mode
  enum class ePFD0_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pfd1_control_mode
  enum class ePFD1_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pdf2_control_mode
  enum class ePDF2_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pfd3_control_mode
  enum class ePFD3_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - PFD0_OVERRIDE
    uint32_t PFD0_UPDATE : 1;
    // read-write - PFD1_OVERRIDE
    uint32_t PFD1_UPDATE : 1;
    // read-write - PFD2_OVERRIDE
    uint32_t PFD2_UPDATE : 1;
    // read-write - PFD3_UPDATE
    uint32_t PFD3_UPDATE : 1;
    // read-write - pfd0_control_mode
    ePFD0_CONTROL_MODE PFD0_CONTROL_MODE : 1;
    // read-write - pfd1_control_mode
    ePFD1_CONTROL_MODE PFD1_CONTROL_MODE : 1;
    // read-write - pdf2_control_mode
    ePDF2_CONTROL_MODE PDF2_CONTROL_MODE : 1;
    // read-write - pfd3_control_mode
    ePFD3_CONTROL_MODE PFD3_CONTROL_MODE : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL3_UPDATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SYS_PLL3_UPDATE &ref() { return *reinterpret_cast<volatile SYS_PLL3_UPDATE*>(0x40C84220); }
};

// SYS_PLL3_PFD_REGISTER
union SYS_PLL3_PFD {
  
  // PFD0_DIV1_CLKGATE
  enum class ePFD0_DIV1_CLKGATE : uint32_t {
    // ref_pfd0 fractional divider clock is enabled
    eON = 0,
    // Fractional divider clock (reference ref_pfd0) is off (power savings
    eOFF = 1,
  };
  
  // PFD1_DIV1_CLKGATE
  enum class ePFD1_DIV1_CLKGATE : uint32_t {
    // ref_pfd1 fractional divider clock is enabled
    eON = 0,
    // Fractional divider clock (reference ref_pfd1) is off (power savings)
    eOFF = 1,
  };
  
  // PFD2_DIV1_CLKGATE
  enum class ePFD2_DIV1_CLKGATE : uint32_t {
    // ref_pfd2 fractional divider clock is enabled
    eON = 0,
    // Fractional divider clock (reference ref_pfd2) is off (power savings)
    eOFF = 1,
  };
  
  // PFD3_DIV1_CLKGATE
  enum class ePFD3_DIV1_CLKGATE : uint32_t {
    // ref_pfd3 fractional divider clock is enabled
    eON = 0,
    // Fractional divider clock (reference ref_pfd3) is off (power savings)
    eOFF = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PFD0_FRAC
    uint32_t PFD0_FRAC : 6;
    // read-only - PFD0_STABLE
    uint32_t PFD0_STABLE : 1;
    // read-write - PFD0_DIV1_CLKGATE
    ePFD0_DIV1_CLKGATE PFD0_DIV1_CLKGATE : 1;
    // read-write - PFD1_FRAC
    uint32_t PFD1_FRAC : 6;
    // read-only - PFD1_STABLE
    uint32_t PFD1_STABLE : 1;
    // read-write - PFD1_DIV1_CLKGATE
    ePFD1_DIV1_CLKGATE PFD1_DIV1_CLKGATE : 1;
    // read-write - PFD2_FRAC
    uint32_t PFD2_FRAC : 6;
    // read-only - PFD2_STABLE
    uint32_t PFD2_STABLE : 1;
    // read-write - PFD2_DIV1_CLKGATE
    ePFD2_DIV1_CLKGATE PFD2_DIV1_CLKGATE : 1;
    // read-write - PFD3_FRAC
    uint32_t PFD3_FRAC : 6;
    // read-only - PFD3_STABLE
    uint32_t PFD3_STABLE : 1;
    // read-write - PFD3_DIV1_CLKGATE
    ePFD3_DIV1_CLKGATE PFD3_DIV1_CLKGATE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL3_PFD() = delete;
  inline void Reset() volatile { this->value = 0x8CA0918D; }
  static inline volatile SYS_PLL3_PFD &ref() { return *reinterpret_cast<volatile SYS_PLL3_PFD*>(0x40C84230); }
};

// SYS_PLL2_CTRL_REGISTER
union SYS_PLL2_CTRL {
  
  // PLL Start up initialization
  enum class eHOLD_RING_OFF : uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Initialize PLL start up
    eENABLE = 1,
  };
  
  // Enable the clock output.
  enum class eENABLE_CLK : uint32_t {
    // Disable the clock
    eDISABLE = 0,
    // Enable the clock
    eENABLE = 1,
  };
  
  // Bypass the pll.
  enum class eBYPASS : uint32_t {
    // Function mode
    eFUNC = 0,
    // Bypass Mode
    eBYPASS = 1,
  };
  
  // DITHER_ENABLE
  enum class eDITHER_ENABLE : uint32_t {
    // Disable Dither
    eDISABLE = 0,
    // Enable Dither
    eENABLE = 1,
  };
  
  // Powers up the PLL.
  enum class ePOWERUP : uint32_t {
    // Power down the PLL
    ePDOWN = 0,
    // Power Up the PLL
    ePUP = 1,
  };
  
  // SYS_PLL2_GATE
  enum class eSYS_PLL2_GATE : uint32_t {
    // Clock is not gated
    eDISABLE = 0,
    // Clock is gated
    eENABLE = 1,
  };
  
  // SYS_PLL2_control_mode
  enum class eSYS_PLL2_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - Enable Internal PLL Regulator
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_1 : 7;
    // read-write - PLL Start up initialization
    eHOLD_RING_OFF HOLD_RING_OFF : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Enable the clock output.
    eENABLE_CLK ENABLE_CLK : 1;
    uint32_t _reserved_3 : 2;
    // read-write - Bypass the pll.
    eBYPASS BYPASS : 1;
    // read-write - DITHER_ENABLE
    eDITHER_ENABLE DITHER_ENABLE : 1;
    // read-write - PFD_OFFSET_EN
    uint32_t PFD_OFFSET_EN : 1;
    // read-write - PLL_DDR_OVERRIDE
    uint32_t PLL_DDR_OVERRIDE : 1;
    uint32_t _reserved_4 : 3;
    // read-write - Powers up the PLL.
    ePOWERUP POWERUP : 1;
    uint32_t _reserved_5 : 5;
    // read-only - SYS_PLL2_STABLE
    uint32_t SYS_PLL2_STABLE : 1;
    // read-write - SYS_PLL2_GATE
    eSYS_PLL2_GATE SYS_PLL2_GATE : 1;
    // read-write - SYS_PLL2_control_mode
    eSYS_PLL2_CONTROL_MODE SYS_PLL2_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL2_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x40000000; }
  static inline volatile SYS_PLL2_CTRL &ref() { return *reinterpret_cast<volatile SYS_PLL2_CTRL*>(0x40C84240); }
};

// SYS_PLL2_UPDATE_REGISTER
union SYS_PLL2_UPDATE {
  
  // pfd0_control_mode
  enum class ePFD0_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pfd1_control_mode
  enum class ePFD1_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pfd2_control_mode
  enum class ePFD2_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // pfd3_control_mode
  enum class ePFD3_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - PFD0_UPDATE
    uint32_t PFD0_UPDATE : 1;
    // read-write - PFD1_UPDATE
    uint32_t PFD1_UPDATE : 1;
    // read-write - PFD2_UPDATE
    uint32_t PFD2_UPDATE : 1;
    // read-write - PFD3_UPDATE
    uint32_t PFD3_UPDATE : 1;
    // read-write - pfd0_control_mode
    ePFD0_CONTROL_MODE PFD0_CONTROL_MODE : 1;
    // read-write - pfd1_control_mode
    ePFD1_CONTROL_MODE PFD1_CONTROL_MODE : 1;
    // read-write - pfd2_control_mode
    ePFD2_CONTROL_MODE PFD2_CONTROL_MODE : 1;
    // read-write - pfd3_control_mode
    ePFD3_CONTROL_MODE PFD3_CONTROL_MODE : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL2_UPDATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SYS_PLL2_UPDATE &ref() { return *reinterpret_cast<volatile SYS_PLL2_UPDATE*>(0x40C84250); }
};

// SYS_PLL2_SS_REGISTER
union SYS_PLL2_SS {
  
  // ENABLE
  enum class eENABLE : uint32_t {
    // Disable Spread Spectrum
    eDISABLE = 0,
    // Enable Spread Spectrum
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STEP
    uint32_t STEP : 15;
    // read-write - ENABLE
    eENABLE ENABLE : 1;
    // read-write - STOP
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL2_SS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SYS_PLL2_SS &ref() { return *reinterpret_cast<volatile SYS_PLL2_SS*>(0x40C84260); }
};

// SYS_PLL2_PFD_REGISTER
union SYS_PLL2_PFD {
  
  // Bit field definition.
  struct {
    // read-write - PFD0_FRAC
    uint32_t PFD0_FRAC : 6;
    // read-only - PFD0_STABLE
    uint32_t PFD0_STABLE : 1;
    // read-write - PFD0_DIV1_CLKGATE
    uint32_t PFD0_DIV1_CLKGATE : 1;
    // read-write - PFD1_FRAC
    uint32_t PFD1_FRAC : 6;
    // read-only - PFD1_STABLE
    uint32_t PFD1_STABLE : 1;
    // read-write - PFD1_DIV1_CLKGATE
    uint32_t PFD1_DIV1_CLKGATE : 1;
    // read-write - PFD2_FRAC
    uint32_t PFD2_FRAC : 6;
    // read-only - PFD2_STABLE
    uint32_t PFD2_STABLE : 1;
    // read-write - PFD2_DIV1_CLKGATE
    uint32_t PFD2_DIV1_CLKGATE : 1;
    // read-write - PFD3_FRAC
    uint32_t PFD3_FRAC : 6;
    // read-only - PFD3_STABLE
    uint32_t PFD3_STABLE : 1;
    // read-write - PFD3_DIV1_CLKGATE
    uint32_t PFD3_DIV1_CLKGATE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL2_PFD() = delete;
  inline void Reset() volatile { this->value = 0xA098909B; }
  static inline volatile SYS_PLL2_PFD &ref() { return *reinterpret_cast<volatile SYS_PLL2_PFD*>(0x40C84270); }
};

// SYS_PLL2_MFD_REGISTER
union SYS_PLL2_MFD {
  
  // Bit field definition.
  struct {
    // read-write - Denominator
    uint32_t MFD : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL2_MFD() = delete;
  inline void Reset() volatile { this->value = 0x0FFFFFFF; }
  static inline volatile SYS_PLL2_MFD &ref() { return *reinterpret_cast<volatile SYS_PLL2_MFD*>(0x40C842A0); }
};

// SYS_PLL1_SS_REGISTER
union SYS_PLL1_SS {
  
  // ENABLE
  enum class eENABLE : uint32_t {
    // Disable Spread Spectrum
    eDISABLE = 0,
    // Enable Spread Spectrum
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STEP
    uint32_t STEP : 15;
    // read-write - ENABLE
    eENABLE ENABLE : 1;
    // read-write - STOP
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL1_SS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SYS_PLL1_SS &ref() { return *reinterpret_cast<volatile SYS_PLL1_SS*>(0x40C842B0); }
};

// SYS_PLL1_CTRL_REGISTER
union SYS_PLL1_CTRL {
  
  // SYS_PLL1_GATE
  enum class eSYS_PLL1_GATE : uint32_t {
    // No gate
    eNOGATE = 0,
    // Gate the output
    eGATED = 1,
  };
  
  // SYS_PLL1_DIV5_CONTROL_MODE
  enum class eSYS_PLL1_DIV5_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // SYS_PLL1_DIV2_CONTROL_MODE
  enum class eSYS_PLL1_DIV2_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // SYS_PLL1_CONTROL_MODE
  enum class eSYS_PLL1_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENABLE_CLK
    uint32_t ENABLE_CLK : 1;
    // read-write - SYS_PLL1_GATE
    eSYS_PLL1_GATE SYS_PLL1_GATE : 1;
    uint32_t _reserved_1 : 10;
    // read-write - SYS_PLL1_DIV2
    uint32_t SYS_PLL1_DIV2 : 1;
    // read-write - SYS_PLL1_DIV5
    uint32_t SYS_PLL1_DIV5 : 1;
    // read-write - SYS_PLL1_DIV5_CONTROL_MODE
    eSYS_PLL1_DIV5_CONTROL_MODE SYS_PLL1_DIV5_CONTROL_MODE : 1;
    // read-write - SYS_PLL1_DIV2_CONTROL_MODE
    eSYS_PLL1_DIV2_CONTROL_MODE SYS_PLL1_DIV2_CONTROL_MODE : 1;
    // read-only - SYS_PLL1_STABLE
    uint32_t SYS_PLL1_STABLE : 1;
    // read-only - SYS_PLL1_AI_BUSY
    uint32_t SYS_PLL1_AI_BUSY : 1;
    // read-write - SYS_PLL1_CONTROL_MODE
    eSYS_PLL1_CONTROL_MODE SYS_PLL1_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL1_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile SYS_PLL1_CTRL &ref() { return *reinterpret_cast<volatile SYS_PLL1_CTRL*>(0x40C842C0); }
};

// SYS_PLL1_DENOMINATOR_REGISTER
union SYS_PLL1_DENOMINATOR {
  
  // Bit field definition.
  struct {
    // read-write - DENOM
    uint32_t DENOM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL1_DENOMINATOR() = delete;
  inline void Reset() volatile { this->value = 0x2FFFFFFE; }
  static inline volatile SYS_PLL1_DENOMINATOR &ref() { return *reinterpret_cast<volatile SYS_PLL1_DENOMINATOR*>(0x40C842D0); }
};

// SYS_PLL1_NUMERATOR_REGISTER
union SYS_PLL1_NUMERATOR {
  
  // Bit field definition.
  struct {
    // read-write - NUM
    uint32_t NUM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL1_NUMERATOR() = delete;
  inline void Reset() volatile { this->value = 0x1FFFFFFF; }
  static inline volatile SYS_PLL1_NUMERATOR &ref() { return *reinterpret_cast<volatile SYS_PLL1_NUMERATOR*>(0x40C842E0); }
};

// SYS_PLL1_DIV_SELECT_REGISTER
union SYS_PLL1_DIV_SELECT {
  
  // Bit field definition.
  struct {
    // read-write - DIV_SELECT
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SYS_PLL1_DIV_SELECT() = delete;
  inline void Reset() volatile { this->value = 0x0000001D; }
  static inline volatile SYS_PLL1_DIV_SELECT &ref() { return *reinterpret_cast<volatile SYS_PLL1_DIV_SELECT*>(0x40C842F0); }
};

// PLL_AUDIO_CTRL_REGISTER
union PLL_AUDIO_CTRL {
  
  // PLL_AUDIO_GATE
  enum class ePLL_AUDIO_GATE : uint32_t {
    // No gate
    eNOGATE = 0,
    // Gate the output
    eGATED = 1,
  };
  
  // pll_audio_control_mode
  enum class ePLL_AUDIO_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENABLE_CLK
    uint32_t ENABLE_CLK : 1;
    // read-write - PLL_AUDIO_GATE
    ePLL_AUDIO_GATE PLL_AUDIO_GATE : 1;
    uint32_t _reserved_1 : 14;
    // read-only - PLL_AUDIO_STABLE
    uint32_t PLL_AUDIO_STABLE : 1;
    // read-only - pll_audio_ai_busy
    uint32_t PLL_AUDIO_AI_BUSY : 1;
    // read-write - pll_audio_control_mode
    ePLL_AUDIO_CONTROL_MODE PLL_AUDIO_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_AUDIO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile PLL_AUDIO_CTRL &ref() { return *reinterpret_cast<volatile PLL_AUDIO_CTRL*>(0x40C84300); }
};

// PLL_AUDIO_SS_REGISTER
union PLL_AUDIO_SS {
  
  // ENABLE
  enum class eENABLE : uint32_t {
    // Disable Spread Spectrum
    eDISABLE = 0,
    // Enable Spread Spectrum
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STEP
    uint32_t STEP : 15;
    // read-write - ENABLE
    eENABLE ENABLE : 1;
    // read-write - STOP
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_AUDIO_SS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLL_AUDIO_SS &ref() { return *reinterpret_cast<volatile PLL_AUDIO_SS*>(0x40C84310); }
};

// PLL_AUDIO_DENOMINATOR_REGISTER
union PLL_AUDIO_DENOMINATOR {
  
  // Bit field definition.
  struct {
    // read-write - DENOM
    uint32_t DENOM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_AUDIO_DENOMINATOR() = delete;
  inline void Reset() volatile { this->value = 0x2FFFFFFE; }
  static inline volatile PLL_AUDIO_DENOMINATOR &ref() { return *reinterpret_cast<volatile PLL_AUDIO_DENOMINATOR*>(0x40C84320); }
};

// PLL_AUDIO_NUMERATOR_REGISTER
union PLL_AUDIO_NUMERATOR {
  
  // Bit field definition.
  struct {
    // read-write - NUM
    uint32_t NUM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_AUDIO_NUMERATOR() = delete;
  inline void Reset() volatile { this->value = 0x1FFFFFFF; }
  static inline volatile PLL_AUDIO_NUMERATOR &ref() { return *reinterpret_cast<volatile PLL_AUDIO_NUMERATOR*>(0x40C84330); }
};

// PLL_AUDIO_DIV_SELECT_REGISTER
union PLL_AUDIO_DIV_SELECT {
  
  // Bit field definition.
  struct {
    // read-write - PLL_AUDIO_DIV_SELECT
    uint32_t PLL_AUDIO_DIV_SELECT : 7;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_AUDIO_DIV_SELECT() = delete;
  inline void Reset() volatile { this->value = 0x00000029; }
  static inline volatile PLL_AUDIO_DIV_SELECT &ref() { return *reinterpret_cast<volatile PLL_AUDIO_DIV_SELECT*>(0x40C84340); }
};

// PLL_VIDEO_CTRL_REGISTER
union PLL_VIDEO_CTRL {
  
  // PLL_VIDEO_GATE
  enum class ePLL_VIDEO_GATE : uint32_t {
    // No gate
    eNOGATE = 0,
    // Gate the output
    eGATED = 1,
  };
  
  // pll_video_control_mode
  enum class ePLL_VIDEO_CONTROL_MODE : uint32_t {
    // Software Mode (Default)
    eSW = 0,
    // GPC Mode
    eGPC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 13;
    // read-write - ENABLE_CLK
    uint32_t ENABLE_CLK : 1;
    // read-write - PLL_VIDEO_GATE
    ePLL_VIDEO_GATE PLL_VIDEO_GATE : 1;
    uint32_t _reserved_1 : 9;
    // read-write - pll_video_counter_clr
    uint32_t PLL_VIDEO_COUNTER_CLR : 1;
    uint32_t _reserved_2 : 4;
    // read-only - PLL_VIDEO_STABLE
    uint32_t PLL_VIDEO_STABLE : 1;
    // read-only - pll_video_ai_busy
    uint32_t PLL_VIDEO_AI_BUSY : 1;
    // read-write - pll_video_control_mode
    ePLL_VIDEO_CONTROL_MODE PLL_VIDEO_CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_VIDEO_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile PLL_VIDEO_CTRL &ref() { return *reinterpret_cast<volatile PLL_VIDEO_CTRL*>(0x40C84350); }
};

// PLL_VIDEO_SS_REGISTER
union PLL_VIDEO_SS {
  
  // ENABLE
  enum class eENABLE : uint32_t {
    // Disable Spread Spectrum
    eDISABLE = 0,
    // Enable Spread Spectrum
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STEP
    uint32_t STEP : 15;
    // read-write - ENABLE
    eENABLE ENABLE : 1;
    // read-write - STOP
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_VIDEO_SS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLL_VIDEO_SS &ref() { return *reinterpret_cast<volatile PLL_VIDEO_SS*>(0x40C84360); }
};

// PLL_VIDEO_DENOMINATOR_REGISTER
union PLL_VIDEO_DENOMINATOR {
  
  // Bit field definition.
  struct {
    // read-write - DENOM
    uint32_t DENOM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_VIDEO_DENOMINATOR() = delete;
  inline void Reset() volatile { this->value = 0x2FFFFFFE; }
  static inline volatile PLL_VIDEO_DENOMINATOR &ref() { return *reinterpret_cast<volatile PLL_VIDEO_DENOMINATOR*>(0x40C84370); }
};

// PLL_VIDEO_NUMERATOR_REGISTER
union PLL_VIDEO_NUMERATOR {
  
  // Bit field definition.
  struct {
    // read-write - NUM
    uint32_t NUM : 30;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_VIDEO_NUMERATOR() = delete;
  inline void Reset() volatile { this->value = 0x1FFFFFFF; }
  static inline volatile PLL_VIDEO_NUMERATOR &ref() { return *reinterpret_cast<volatile PLL_VIDEO_NUMERATOR*>(0x40C84380); }
};

// PLL_VIDEO_DIV_SELECT_REGISTER
union PLL_VIDEO_DIV_SELECT {
  
  // Bit field definition.
  struct {
    // read-write - DIV_SELECT
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_VIDEO_DIV_SELECT() = delete;
  inline void Reset() volatile { this->value = 0x00000029; }
  static inline volatile PLL_VIDEO_DIV_SELECT &ref() { return *reinterpret_cast<volatile PLL_VIDEO_DIV_SELECT*>(0x40C84390); }
};


} // namespace nANADIG_PLL