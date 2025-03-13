#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nVMBANDGAP {


// Analog Control Register CTRL0
union CTRL0 {
  
  // Bit field definition.
  struct {
    // read-write - Master power-down for bandgap module
    uint32_t REFTOP_PWD : 1;
    // read-write - Power-down for bandgap voltage-reference buffer
    uint32_t REFTOP_LINREGREF_PWD : 1;
    // read-write - Power-down VBGUP detector in bandgap
    uint32_t REFTOP_PWDVBGUP : 1;
    // read-write - Low-power control bit
    uint32_t REFTOP_LOWPOWER : 1;
    // read-write - bandgap self-bias control bit
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_0 : 27;
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
    // read-write - Master power-down for bandgap module
    uint32_t REFTOP_PWD : 1;
    // read-write - Power-down for bandgap voltage-reference buffer
    uint32_t REFTOP_LINREGREF_PWD : 1;
    // read-write - Power-down VBGUP detector in bandgap
    uint32_t REFTOP_PWDVBGUP : 1;
    // read-write - Low-power control bit
    uint32_t REFTOP_LOWPOWER : 1;
    // read-write - bandgap self-bias control bit
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_0 : 27;
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
    // read-write - Master power-down for bandgap module
    uint32_t REFTOP_PWD : 1;
    // read-write - Power-down for bandgap voltage-reference buffer
    uint32_t REFTOP_LINREGREF_PWD : 1;
    // read-write - Power-down VBGUP detector in bandgap
    uint32_t REFTOP_PWDVBGUP : 1;
    // read-write - Low-power control bit
    uint32_t REFTOP_LOWPOWER : 1;
    // read-write - bandgap self-bias control bit
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_0 : 27;
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
    // read-write - Master power-down for bandgap module
    uint32_t REFTOP_PWD : 1;
    // read-write - Power-down for bandgap voltage-reference buffer
    uint32_t REFTOP_LINREGREF_PWD : 1;
    // read-write - Power-down VBGUP detector in bandgap
    uint32_t REFTOP_PWDVBGUP : 1;
    // read-write - Low-power control bit
    uint32_t REFTOP_LOWPOWER : 1;
    // read-write - bandgap self-bias control bit
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_0 : 27;
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
    // read-only - Brief description here
    uint32_t REFTOP_VBGUP : 1;
    // read-only - Brief description here
    uint32_t VDD1_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD2_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD3_PORB : 1;
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
    // read-only - Brief description here
    uint32_t REFTOP_VBGUP : 1;
    // read-only - Brief description here
    uint32_t VDD1_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD2_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD3_PORB : 1;
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
    // read-only - Brief description here
    uint32_t REFTOP_VBGUP : 1;
    // read-only - Brief description here
    uint32_t VDD1_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD2_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD3_PORB : 1;
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
    // read-only - Brief description here
    uint32_t REFTOP_VBGUP : 1;
    // read-only - Brief description here
    uint32_t VDD1_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD2_PORB : 1;
    // read-only - Brief description here
    uint32_t VDD3_PORB : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_TOG &ref() { return *reinterpret_cast<volatile STAT0_TOG*>(0x0000005C); }
};


} // namespace nVMBANDGAP