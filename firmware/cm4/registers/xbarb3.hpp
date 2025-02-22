#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nXBARB3 {


// Crossbar B Select Register 0
//
union XBARB3_SEL0 {
  
  // Bit field definition.
  struct {
    uint32_t SEL0 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL1 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL0 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL0*>(0x40044000); }
};

// Crossbar B Select Register 1
//
union XBARB3_SEL1 {
  
  // Bit field definition.
  struct {
    uint32_t SEL2 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL3 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL1 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL1*>(0x40044002); }
};

// Crossbar B Select Register 2
//
union XBARB3_SEL2 {
  
  // Bit field definition.
  struct {
    uint32_t SEL4 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL5 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL2 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL2*>(0x40044004); }
};

// Crossbar B Select Register 3
//
union XBARB3_SEL3 {
  
  // Bit field definition.
  struct {
    uint32_t SEL6 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL7 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL3 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL3*>(0x40044006); }
};

// Crossbar B Select Register 4
//
union XBARB3_SEL4 {
  
  // Bit field definition.
  struct {
    uint32_t SEL8 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL9 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL4 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL4*>(0x40044008); }
};

// Crossbar B Select Register 5
//
union XBARB3_SEL5 {
  
  // Bit field definition.
  struct {
    uint32_t SEL10 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL11 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL5 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL5*>(0x4004400A); }
};

// Crossbar B Select Register 6
//
union XBARB3_SEL6 {
  
  // Bit field definition.
  struct {
    uint32_t SEL12 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL13 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL6 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL6*>(0x4004400C); }
};

// Crossbar B Select Register 7
//
union XBARB3_SEL7 {
  
  // Bit field definition.
  struct {
    uint32_t SEL14 : 7;
    uint32_t _reserved_1 : 1;
    uint32_t SEL15 : 7;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARB3_SEL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARB3_SEL7 &Instance() { return *reinterpret_cast<volatile XBARB3_SEL7*>(0x4004400E); }
};


} // namespace nXBARB3