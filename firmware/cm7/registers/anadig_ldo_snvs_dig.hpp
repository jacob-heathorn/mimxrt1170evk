#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_LDO_SNVS_DIG {


// PMU_LDO_SNVS_DIG_REGISTER
union PMU_LDO_SNVS_DIG {
  
  // Bit field definition.
  struct {
    // read-write - REG_LP_EN
    uint32_t REG_LP_EN : 1;
    // read-write - test_override
    uint32_t TEST_OVERRIDE : 1;
    // read-write - REG_EN
    uint32_t REG_EN : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_LDO_SNVS_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PMU_LDO_SNVS_DIG &Instance() { return *reinterpret_cast<volatile PMU_LDO_SNVS_DIG*>(0x40C84540); }
};


} // namespace nANADIG_LDO_SNVS_DIG