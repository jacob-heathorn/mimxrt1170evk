#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FlexCAN wrapper
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCAN1_WRAPPER {


// Glitch Filter Width Register
union GFWR {
  
  // Bit field definition.
  struct {
    // read-write - Glitch Filter Width
    uint32_t GFWR : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile GFWR &ref() { return *reinterpret_cast<volatile GFWR*>(0x400C49E0); }
};


} // namespace nCAN1_WRAPPER