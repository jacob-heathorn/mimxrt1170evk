#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_TEMPSENSOR {


// Tempsensor Register
union TEMPSENSOR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 15;
    // read-write - AI toggle
    uint32_t TEMPSNS_AI_TOGGLE : 1;
    // read-only - AI Busy monitor
    uint32_t TEMPSNS_AI_BUSY : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TEMPSENSOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TEMPSENSOR &Instance() { return *reinterpret_cast<volatile TEMPSENSOR*>(0x40C84400); }
};

// TEMPSNS_OTP_TRIM_VALUE_REGISTER
union TEMPSNS_OTP_TRIM_VALUE {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 10;
    // read-only - Temperature Value at 25C
    uint32_t TEMPSNS_TEMP_VAL : 12;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TEMPSNS_OTP_TRIM_VALUE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TEMPSNS_OTP_TRIM_VALUE &Instance() { return *reinterpret_cast<volatile TEMPSNS_OTP_TRIM_VALUE*>(0x40C84430); }
};


} // namespace nANADIG_TEMPSENSOR