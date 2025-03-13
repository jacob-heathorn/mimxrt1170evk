#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nPHY_LDO {


// Analog Control Register CTRL0
union CTRL0 {
  
  // LinReg power-up load disable
  enum class eLINREG_PWRUPLOAD_DIS : uint32_t {
    // Internal pull-down enabled
    eLINREG_PWRUPLOAD_DIS_0 = 0,
    // Internal pull-down disabled
    eLINREG_PWRUPLOAD_DIS_1 = 1,
  };
  
  // LinReg output voltage target setting
  enum class eLINREG_OUTPUT_TRG : uint32_t {
    // Set output voltage to x.xV
    eLINREG_OUTPUT_TRG_0 = 0,
    // Sets output voltage to 1.0V
    eLINREG_OUTPUT_TRG_16 = 16,
    // Set output voltage to x.xV
    eLINREG_OUTPUT_TRG_31 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - LinrReg master enable
    uint32_t LINREG_EN : 1;
    // read-write - LinReg power-up load disable
    eLINREG_PWRUPLOAD_DIS LINREG_PWRUPLOAD_DIS : 1;
    // read-write - LinReg current-limit enable
    uint32_t LINREG_ILIMIT_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - LinReg output voltage target setting
    eLINREG_OUTPUT_TRG LINREG_OUTPUT_TRG : 5;
    uint32_t _reserved_1 : 6;
    // read-write - Isolation control for attached PHY load
    uint32_t LINREG_PHY_ISO_B : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &ref() { return *reinterpret_cast<volatile CTRL0*>(0x00000000); }
};

// Analog Control Register CTRL0
union CTRL0_SET {
  
  // Bit field definition.
  struct {
    // read-write - LinrReg master enable
    uint32_t LINREG_EN : 1;
    // read-write - LinReg power-up load disable
    uint32_t LINREG_PWRUPLOAD_DIS : 1;
    // read-write - LinReg current-limit enable
    uint32_t LINREG_ILIMIT_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - LinReg output voltage target setting
    uint32_t LINREG_OUTPUT_TRG : 5;
    uint32_t _reserved_1 : 6;
    // read-write - Isolation control for attached PHY load
    uint32_t LINREG_PHY_ISO_B : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_SET &ref() { return *reinterpret_cast<volatile CTRL0_SET*>(0x00000004); }
};

// Analog Control Register CTRL0
union CTRL0_CLR {
  
  // Bit field definition.
  struct {
    // read-write - LinrReg master enable
    uint32_t LINREG_EN : 1;
    // read-write - LinReg power-up load disable
    uint32_t LINREG_PWRUPLOAD_DIS : 1;
    // read-write - LinReg current-limit enable
    uint32_t LINREG_ILIMIT_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - LinReg output voltage target setting
    uint32_t LINREG_OUTPUT_TRG : 5;
    uint32_t _reserved_1 : 6;
    // read-write - Isolation control for attached PHY load
    uint32_t LINREG_PHY_ISO_B : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_CLR &ref() { return *reinterpret_cast<volatile CTRL0_CLR*>(0x00000008); }
};

// Analog Control Register CTRL0
union CTRL0_TOG {
  
  // Bit field definition.
  struct {
    // read-write - LinrReg master enable
    uint32_t LINREG_EN : 1;
    // read-write - LinReg power-up load disable
    uint32_t LINREG_PWRUPLOAD_DIS : 1;
    // read-write - LinReg current-limit enable
    uint32_t LINREG_ILIMIT_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - LinReg output voltage target setting
    uint32_t LINREG_OUTPUT_TRG : 5;
    uint32_t _reserved_1 : 6;
    // read-write - Isolation control for attached PHY load
    uint32_t LINREG_PHY_ISO_B : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_TOG &ref() { return *reinterpret_cast<volatile CTRL0_TOG*>(0x0000000C); }
};

// Analog Status Register STAT0
union STAT0 {
  
  // Bit field definition.
  struct {
    // read-only - LinReg Status Bits
    uint32_t LINREG_STAT : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0 &ref() { return *reinterpret_cast<volatile STAT0*>(0x00000050); }
};

// Analog Status Register STAT0
union STAT0_SET {
  
  // Bit field definition.
  struct {
    // read-only - LinReg Status Bits
    uint32_t LINREG_STAT : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_SET &ref() { return *reinterpret_cast<volatile STAT0_SET*>(0x00000054); }
};

// Analog Status Register STAT0
union STAT0_CLR {
  
  // Bit field definition.
  struct {
    // read-only - LinReg Status Bits
    uint32_t LINREG_STAT : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_CLR &ref() { return *reinterpret_cast<volatile STAT0_CLR*>(0x00000058); }
};

// Analog Status Register STAT0
union STAT0_TOG {
  
  // Bit field definition.
  struct {
    // read-only - LinReg Status Bits
    uint32_t LINREG_STAT : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_TOG &ref() { return *reinterpret_cast<volatile STAT0_TOG*>(0x0000005C); }
};


} // namespace nPHY_LDO