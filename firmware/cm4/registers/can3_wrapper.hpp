#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // FlexCAN wrapper
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCAN3_WRAPPER {


// Glitch Filter Width Register
//
union GFWR {
  
  // Bit field definition.
  struct {
    uint32_t GFWR : 8;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GFWR() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile GFWR &Instance() { return *reinterpret_cast<volatile GFWR*>(0x40C3C9E0); }
};


} // namespace nCAN3_WRAPPER