#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// EWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nEWM {


// Control Register
//
union CTRL {
  
  enum class eEWMEN : uint32_t {
    eDISABLE = 0, // EWM module is disabled.
    eENABLE = 1, // EWM module is enabled.
  };
  
  enum class eASSIN : uint32_t {
    eDISABLE = 0, // Default assert state of the EWM_in signal.
    eENABLE = 1, // Inverts the assert state of EWM_in signal.
  };
  
  enum class eINEN : uint32_t {
    eDISABLE = 0, // EWM_in port is disabled.
    eENABLE = 1, // EWM_in port is enabled.
  };
  
  enum class eINTEN : uint32_t {
    eZERO = 0, // Deasserts the interrupt request.
    eINT_REQ = 1, // Generates an interrupt request, when EWM_OUT_b is asserted.
  };
  
  // Bit field definition.
  struct {
    eEWMEN EWMEN : 1;
    eASSIN ASSIN : 1;
    eINEN INEN : 1;
    eINTEN INTEN : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x4002C000); }
};

// Service Register
//
union SERV {
  
  // Bit field definition.
  struct {
    uint32_t SERVICE : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SERV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SERV &Instance() { return *reinterpret_cast<volatile SERV*>(0x4002C001); }
};

// Compare Low Register
//
union CMPL {
  
  // Bit field definition.
  struct {
    uint32_t COMPAREL : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPL &Instance() { return *reinterpret_cast<volatile CMPL*>(0x4002C002); }
};

// Compare High Register
//
union CMPH {
  
  // Bit field definition.
  struct {
    uint32_t COMPAREH : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPH() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile CMPH &Instance() { return *reinterpret_cast<volatile CMPH*>(0x4002C003); }
};

// Clock Control Register
//
union CLKCTRL {
  
  // Bit field definition.
  struct {
    uint32_t CLKSEL : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLKCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKCTRL &Instance() { return *reinterpret_cast<volatile CLKCTRL*>(0x4002C004); }
};

// Clock Prescaler Register
//
union CLKPRESCALER {
  
  // Bit field definition.
  struct {
    uint32_t CLK_DIV : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLKPRESCALER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKPRESCALER &Instance() { return *reinterpret_cast<volatile CLKPRESCALER*>(0x4002C005); }
};


} // namespace nEWM