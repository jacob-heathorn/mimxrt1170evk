#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nVMBANDGAP {


// Analog Control Register CTRL0
//
union CTRL0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_PWD : 1;
    uint32_t REFTOP_LINREGREF_PWD : 1;
    uint32_t REFTOP_PWDVBGUP : 1;
    uint32_t REFTOP_LOWPOWER : 1;
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_end : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x00000000); }
};

// Analog Control Register CTRL0
//
union CTRL0_SET {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_PWD : 1;
    uint32_t REFTOP_LINREGREF_PWD : 1;
    uint32_t REFTOP_PWDVBGUP : 1;
    uint32_t REFTOP_LOWPOWER : 1;
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_end : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_SET &Instance() { return *reinterpret_cast<volatile CTRL0_SET*>(0x00000004); }
};

// Analog Control Register CTRL0
//
union CTRL0_CLR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_PWD : 1;
    uint32_t REFTOP_LINREGREF_PWD : 1;
    uint32_t REFTOP_PWDVBGUP : 1;
    uint32_t REFTOP_LOWPOWER : 1;
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_end : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_CLR &Instance() { return *reinterpret_cast<volatile CTRL0_CLR*>(0x00000008); }
};

// Analog Control Register CTRL0
//
union CTRL0_TOG {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_PWD : 1;
    uint32_t REFTOP_LINREGREF_PWD : 1;
    uint32_t REFTOP_PWDVBGUP : 1;
    uint32_t REFTOP_LOWPOWER : 1;
    uint32_t REFTOP_SELFBIASOFF : 1;
    uint32_t _reserved_end : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0_TOG &Instance() { return *reinterpret_cast<volatile CTRL0_TOG*>(0x0000000C); }
};

// Analog Status Register STAT0
//
union STAT0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_VBGUP : 1;
    uint32_t VDD1_PORB : 1;
    uint32_t VDD2_PORB : 1;
    uint32_t VDD3_PORB : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0 &Instance() { return *reinterpret_cast<volatile STAT0*>(0x00000050); }
};

// Analog Status Register STAT0
//
union STAT0_SET {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_VBGUP : 1;
    uint32_t VDD1_PORB : 1;
    uint32_t VDD2_PORB : 1;
    uint32_t VDD3_PORB : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_SET &Instance() { return *reinterpret_cast<volatile STAT0_SET*>(0x00000054); }
};

// Analog Status Register STAT0
//
union STAT0_CLR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_VBGUP : 1;
    uint32_t VDD1_PORB : 1;
    uint32_t VDD2_PORB : 1;
    uint32_t VDD3_PORB : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_CLR &Instance() { return *reinterpret_cast<volatile STAT0_CLR*>(0x00000058); }
};

// Analog Status Register STAT0
//
union STAT0_TOG {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_VBGUP : 1;
    uint32_t VDD1_PORB : 1;
    uint32_t VDD2_PORB : 1;
    uint32_t VDD3_PORB : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  STAT0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STAT0_TOG &Instance() { return *reinterpret_cast<volatile STAT0_TOG*>(0x0000005C); }
};


} // namespace nVMBANDGAP