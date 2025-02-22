#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // PIT
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPIT2 {


// PIT Module Control Register
//
union MCR {
  
  enum class eFRZ : uint32_t {
    et000001 = 0, // Timers continue to run in Debug mode.
    et0000011 = 1, // Timers are stopped in Debug mode.
  };
  
  enum class eMDIS : uint32_t {
    et0301 = 0, // Clock for standard PIT timers is enabled.
    et00000111 = 1, // Clock for standard PIT timers is disabled.
  };
  
  // Bit field definition.
  struct {
    eFRZ FRZ : 1;
    eMDIS MDIS : 1;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile MCR &Instance() { return *reinterpret_cast<volatile MCR*>(0x40CB0000); }
};

// PIT Upper Lifetime Timer Register
//
union LTMR64H {
  
  // Bit field definition.
  struct {
    uint32_t LTH : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LTMR64H() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LTMR64H &Instance() { return *reinterpret_cast<volatile LTMR64H*>(0x40CB00E0); }
};

// PIT Lower Lifetime Timer Register
//
union LTMR64L {
  
  // Bit field definition.
  struct {
    uint32_t LTL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LTMR64L() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LTMR64L &Instance() { return *reinterpret_cast<volatile LTMR64L*>(0x40CB00E4); }
};



} // namespace nPIT2