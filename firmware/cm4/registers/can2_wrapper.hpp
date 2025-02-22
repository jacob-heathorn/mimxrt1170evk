#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FlexCAN wrapper
namespace nCAN2_WRAPPER {


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

  GFWR() = delete;
  inline void Reset() volatile { this->value = 0x0000007F; }
  static inline volatile GFWR &Instance() { return *reinterpret_cast<volatile GFWR*>(0x400C89E0); }
};


} // namespace nCAN2_WRAPPER