#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// EWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nEWM {


// Control Register
union CTRL {
  
  // EWM enable.
  enum class eEWMEN : uint8_t {
    // EWM module is disabled.
    eDISABLE = 0,
    // EWM module is enabled.
    eENABLE = 1,
  };
  
  // EWM_in's Assertion State Select.
  enum class eASSIN : uint8_t {
    // Default assert state of the EWM_in signal.
    eDISABLE = 0,
    // Inverts the assert state of EWM_in signal.
    eENABLE = 1,
  };
  
  // Input Enable.
  enum class eINEN : uint8_t {
    // EWM_in port is disabled.
    eDISABLE = 0,
    // EWM_in port is enabled.
    eENABLE = 1,
  };
  
  // Interrupt Enable.
  enum class eINTEN : uint8_t {
    // Deasserts the interrupt request.
    eZERO = 0,
    // Generates an interrupt request, when EWM_OUT_b is asserted.
    eINT_REQ = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - EWM enable.
    eEWMEN EWMEN : 1;
    // read-writeOnce - EWM_in's Assertion State Select.
    eASSIN ASSIN : 1;
    // read-writeOnce - Input Enable.
    eINEN INEN : 1;
    // read-write - Interrupt Enable.
    eINTEN INTEN : 1;
    uint8_t _reserved_0 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &ref() { return *reinterpret_cast<volatile CTRL*>(0x4002C000); }
};

// Service Register
union SERV {
  
  // Bit field definition.
  struct {
    // read-write - SERVICE
    uint8_t SERVICE : 8;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  SERV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SERV &ref() { return *reinterpret_cast<volatile SERV*>(0x4002C001); }
};

// Compare Low Register
union CMPL {
  
  // Bit field definition.
  struct {
    // read-writeOnce - COMPAREL
    uint8_t COMPAREL : 8;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  CMPL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPL &ref() { return *reinterpret_cast<volatile CMPL*>(0x4002C002); }
};

// Compare High Register
union CMPH {
  
  // Bit field definition.
  struct {
    // read-writeOnce - COMPAREH
    uint8_t COMPAREH : 8;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  CMPH() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile CMPH &ref() { return *reinterpret_cast<volatile CMPH*>(0x4002C003); }
};

// Clock Control Register
union CLKCTRL {
  
  // Bit field definition.
  struct {
    // read-writeOnce - CLKSEL
    uint8_t CLKSEL : 2;
    uint8_t _reserved_0 : 6;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  CLKCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKCTRL &ref() { return *reinterpret_cast<volatile CLKCTRL*>(0x4002C004); }
};

// Clock Prescaler Register
union CLKPRESCALER {
  
  // Bit field definition.
  struct {
    // read-writeOnce - CLK_DIV
    uint8_t CLK_DIV : 8;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  CLKPRESCALER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLKPRESCALER &ref() { return *reinterpret_cast<volatile CLKPRESCALER*>(0x4002C005); }
};


} // namespace nEWM