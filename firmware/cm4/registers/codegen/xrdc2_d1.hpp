#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// XRDC2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nXRDC2_D1 {


// Module Control Register
union MCR {
  
  // Global Valid MDAC
  enum class eGVLDM : uint32_t {
    // MDACs are disabled.
    edisabled = 0,
    // MDACs are enabled.
    eenabled = 1,
  };
  
  // Global Valid Access Control
  enum class eGVLDC : uint32_t {
    // Access controls are disabled, XRDC2 allows all transactions.
    edisabled = 0,
    // Access controls are enabled.
    eenabled = 1,
  };
  
  // Global Configuration Lock
  enum class eGCL : uint32_t {
    // Lock disabled, registers can be written by any domain.
    edisabled_00 = 0,
    // Lock disabled until the next reset, registers can be written by any domain.
    edisabled_01 = 1,
    // Lock enabled, only the global configuration lock owner (SR[GCLO]) can write to registers.
    eenabled_10 = 2,
    // Lock enabled, all registers are read only until the next reset.
    eenabled_11 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Global Valid MDAC
    eGVLDM GVLDM : 1;
    // read-write - Global Valid Access Control
    eGVLDC GVLDC : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Global Configuration Lock
    eGCL GCL : 2;
    uint32_t _reserved_1 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCR &ref() { return *reinterpret_cast<volatile MCR*>(0x40CD0000); }
};

// Status Register
union SR {
  
  // Bit field definition.
  struct {
    // read-only - Domain Identifier Number
    uint32_t DIN : 4;
    // read-only - Hardware Revision Level
    uint32_t HRL : 4;
    // read-only - Global Configuration Lock Owner
    uint32_t GCLO : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000010; }
  static inline volatile SR &ref() { return *reinterpret_cast<volatile SR*>(0x40CD0004); }
};






} // namespace nXRDC2_D1