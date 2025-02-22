#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // Fractional PLL
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nETHERNET_PLL {


// Fractional PLL Control Register
//
union CTRL0 {
  
  enum class eENABLE_ALT : uint32_t {
    eDISABLE = 0, // Disable the alternate clock output
    eENABLE = 1, // Enable the alternate clock output which is the output of the post_divider, and cannot be bypassed
  };
  
  enum class eHOLD_RING_OFF : uint32_t {
    eNORMAL = 0, // Normal operation
    eENABLE = 1, // Initialize PLL start up
  };
  
  enum class ePOWERUP : uint32_t {
    ePDOWN = 0, // Power down the PLL
    ePUP = 1, // Power Up the PLL
  };
  
  enum class eENABLE : uint32_t {
    eDISABLE = 0, // Disable the clock output
    eENABLE = 1, // Enable the clock output
  };
  
  enum class eBYPASS : uint32_t {
    eNOBYPASS = 0, // No Bypass
    eBYPASS = 1, // Bypass the PLL
  };
  
  enum class eDITHER_EN : uint32_t {
    eDISABLE = 0, // Disable Dither
    eENABLE = 1, // Enable Dither
  };
  
  enum class ePOST_DIV_SEL : uint32_t {
    eDIVIDE1 = 0, // Divide by 1
    eDIVIDE2 = 1, // Divide by 2
    eDIVIDE4 = 2, // Divide by 4
    eDIVIDE8 = 3, // Divide by 8
    eDIVIDE16 = 4, // Divide by 16
    eDIVIDE32 = 5, // Divide by 32
  };
  
  enum class eBIAS_SELECT : uint32_t {
    eBAIS10 = 0, // Used in SoCs with a bias current of 10uA
    eBAIS2 = 1, // Used in SoCs with a bias current of 2uA
  };
  
  // Bit field definition.
  struct {
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_1 : 1;
    eENABLE_ALT ENABLE_ALT : 1;
    uint32_t _reserved_2 : 4;
    eHOLD_RING_OFF HOLD_RING_OFF : 1;
    ePOWERUP POWERUP : 1;
    eENABLE ENABLE : 1;
    eBYPASS BYPASS : 1;
    eDITHER_EN DITHER_EN : 1;
    uint32_t _reserved_7 : 1;
    uint32_t BIAS_TRIM : 3;
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_9 : 2;
    ePOST_DIV_SEL POST_DIV_SEL : 3;
    uint32_t _reserved_10 : 1;
    eBIAS_SELECT BIAS_SELECT : 1;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x00000000); }
};

// Fractional PLL Control Register
//
union CTRL0_SET {
  
  // Bit field definition.
  struct {
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_1 : 1;
    uint32_t ENABLE_ALT : 1;
    uint32_t _reserved_2 : 4;
    uint32_t HOLD_RING_OFF : 1;
    uint32_t POWERUP : 1;
    uint32_t ENABLE : 1;
    uint32_t BYPASS : 1;
    uint32_t DITHER_EN : 1;
    uint32_t _reserved_7 : 1;
    uint32_t BIAS_TRIM : 3;
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_9 : 2;
    uint32_t POST_DIV_SEL : 3;
    uint32_t _reserved_10 : 1;
    uint32_t BIAS_SELECT : 1;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_SET &Instance() { return *reinterpret_cast<volatile CTRL0_SET*>(0x00000004); }
};

// Fractional PLL Control Register
//
union CTRL0_CLR {
  
  // Bit field definition.
  struct {
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_1 : 1;
    uint32_t ENABLE_ALT : 1;
    uint32_t _reserved_2 : 4;
    uint32_t HOLD_RING_OFF : 1;
    uint32_t POWERUP : 1;
    uint32_t ENABLE : 1;
    uint32_t BYPASS : 1;
    uint32_t DITHER_EN : 1;
    uint32_t _reserved_7 : 1;
    uint32_t BIAS_TRIM : 3;
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_9 : 2;
    uint32_t POST_DIV_SEL : 3;
    uint32_t _reserved_10 : 1;
    uint32_t BIAS_SELECT : 1;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_CLR &Instance() { return *reinterpret_cast<volatile CTRL0_CLR*>(0x00000008); }
};

// Fractional PLL Control Register
//
union CTRL0_TOG {
  
  // Bit field definition.
  struct {
    uint32_t DIV_SELECT : 7;
    uint32_t _reserved_1 : 1;
    uint32_t ENABLE_ALT : 1;
    uint32_t _reserved_2 : 4;
    uint32_t HOLD_RING_OFF : 1;
    uint32_t POWERUP : 1;
    uint32_t ENABLE : 1;
    uint32_t BYPASS : 1;
    uint32_t DITHER_EN : 1;
    uint32_t _reserved_7 : 1;
    uint32_t BIAS_TRIM : 3;
    uint32_t PLL_REG_EN : 1;
    uint32_t _reserved_9 : 2;
    uint32_t POST_DIV_SEL : 3;
    uint32_t _reserved_10 : 1;
    uint32_t BIAS_SELECT : 1;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_TOG &Instance() { return *reinterpret_cast<volatile CTRL0_TOG*>(0x0000000C); }
};

// Fractional PLL Spread Spectrum Control Register
//
union SPREAD_SPECTRUM {
  
  // Bit field definition.
  struct {
    uint32_t STEP : 15;
    uint32_t ENABLE : 1;
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SPREAD_SPECTRUM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SPREAD_SPECTRUM &Instance() { return *reinterpret_cast<volatile SPREAD_SPECTRUM*>(0x00000010); }
};

// Fractional PLL Spread Spectrum Control Register
//
union SPREAD_SPECTRUM_SET {
  
  // Bit field definition.
  struct {
    uint32_t STEP : 15;
    uint32_t ENABLE : 1;
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SPREAD_SPECTRUM_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SPREAD_SPECTRUM_SET &Instance() { return *reinterpret_cast<volatile SPREAD_SPECTRUM_SET*>(0x00000014); }
};

// Fractional PLL Spread Spectrum Control Register
//
union SPREAD_SPECTRUM_CLR {
  
  // Bit field definition.
  struct {
    uint32_t STEP : 15;
    uint32_t ENABLE : 1;
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SPREAD_SPECTRUM_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SPREAD_SPECTRUM_CLR &Instance() { return *reinterpret_cast<volatile SPREAD_SPECTRUM_CLR*>(0x00000018); }
};

// Fractional PLL Spread Spectrum Control Register
//
union SPREAD_SPECTRUM_TOG {
  
  // Bit field definition.
  struct {
    uint32_t STEP : 15;
    uint32_t ENABLE : 1;
    uint32_t STOP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SPREAD_SPECTRUM_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SPREAD_SPECTRUM_TOG &Instance() { return *reinterpret_cast<volatile SPREAD_SPECTRUM_TOG*>(0x0000001C); }
};

// Fractional PLL Numerator Control Register
//
union NUMERATOR {
  
  // Bit field definition.
  struct {
    uint32_t NUM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NUMERATOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NUMERATOR &Instance() { return *reinterpret_cast<volatile NUMERATOR*>(0x00000020); }
};

// Fractional PLL Numerator Control Register
//
union NUMERATOR_SET {
  
  // Bit field definition.
  struct {
    uint32_t NUM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NUMERATOR_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NUMERATOR_SET &Instance() { return *reinterpret_cast<volatile NUMERATOR_SET*>(0x00000024); }
};

// Fractional PLL Numerator Control Register
//
union NUMERATOR_CLR {
  
  // Bit field definition.
  struct {
    uint32_t NUM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NUMERATOR_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NUMERATOR_CLR &Instance() { return *reinterpret_cast<volatile NUMERATOR_CLR*>(0x00000028); }
};

// Fractional PLL Numerator Control Register
//
union NUMERATOR_TOG {
  
  // Bit field definition.
  struct {
    uint32_t NUM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NUMERATOR_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NUMERATOR_TOG &Instance() { return *reinterpret_cast<volatile NUMERATOR_TOG*>(0x0000002C); }
};

// Fractional PLL Denominator Control Register
//
union DENOMINATOR {
  
  // Bit field definition.
  struct {
    uint32_t DENOM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DENOMINATOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DENOMINATOR &Instance() { return *reinterpret_cast<volatile DENOMINATOR*>(0x00000030); }
};

// Fractional PLL Denominator Control Register
//
union DENOMINATOR_SET {
  
  // Bit field definition.
  struct {
    uint32_t DENOM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DENOMINATOR_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DENOMINATOR_SET &Instance() { return *reinterpret_cast<volatile DENOMINATOR_SET*>(0x00000034); }
};

// Fractional PLL Denominator Control Register
//
union DENOMINATOR_CLR {
  
  // Bit field definition.
  struct {
    uint32_t DENOM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DENOMINATOR_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DENOMINATOR_CLR &Instance() { return *reinterpret_cast<volatile DENOMINATOR_CLR*>(0x00000038); }
};

// Fractional PLL Denominator Control Register
//
union DENOMINATOR_TOG {
  
  // Bit field definition.
  struct {
    uint32_t DENOM : 30;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DENOMINATOR_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DENOMINATOR_TOG &Instance() { return *reinterpret_cast<volatile DENOMINATOR_TOG*>(0x0000003C); }
};


} // namespace nETHERNET_PLL