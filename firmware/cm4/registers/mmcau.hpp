#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// CAU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nMMCAU {


// Status Register
union CASR {
  
  // Illegal Command
  enum class eIC : uint32_t {
    // No illegal commands issued.
    eIC_0 = 0,
    // Illegal command issued.
    eIC_1 = 1,
  };
  
  // DES Parity Error
  enum class eDPE : uint32_t {
    // No error detected.
    eDPE_0 = 0,
    // DES key parity error detected.
    eDPE_1 = 1,
  };
  
  // CAU Version
  enum class eVER : uint32_t {
    // Initial CAU version.
    eVER_1 = 1,
    // Second version, added support for SHA-256 algorithm (This is the value on this device).
    eVER_2 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Illegal Command
    eIC IC : 1;
    // read-write - DES Parity Error
    eDPE DPE : 1;
    uint32_t _reserved_0 : 26;
    // read-only - CAU Version
    eVER VER : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CASR() = delete;
  inline void Reset() volatile { this->value = 0x20000000; }
  static inline volatile CASR &Instance() { return *reinterpret_cast<volatile CASR*>(0xE0081000); }
};

// Accumulator
union CAA {
  
  // Bit field definition.
  struct {
    // read-write - Accumulator
    uint32_t ACC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAA &Instance() { return *reinterpret_cast<volatile CAA*>(0xE0081004); }
};

// General Purpose Register
union CA[0] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[0] &Instance() { return *reinterpret_cast<volatile CA[0]*>(0xE0081008); }
};
// General Purpose Register
union CA[1] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[1] &Instance() { return *reinterpret_cast<volatile CA[1]*>(0xE008100C); }
};
// General Purpose Register
union CA[2] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[2] &Instance() { return *reinterpret_cast<volatile CA[2]*>(0xE0081010); }
};
// General Purpose Register
union CA[3] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[3] &Instance() { return *reinterpret_cast<volatile CA[3]*>(0xE0081014); }
};
// General Purpose Register
union CA[4] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[4] &Instance() { return *reinterpret_cast<volatile CA[4]*>(0xE0081018); }
};
// General Purpose Register
union CA[5] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[5] &Instance() { return *reinterpret_cast<volatile CA[5]*>(0xE008101C); }
};
// General Purpose Register
union CA[6] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[6] &Instance() { return *reinterpret_cast<volatile CA[6]*>(0xE0081020); }
};
// General Purpose Register
union CA[7] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[7] &Instance() { return *reinterpret_cast<volatile CA[7]*>(0xE0081024); }
};
// General Purpose Register
union CA[8] {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CA[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA[8] &Instance() { return *reinterpret_cast<volatile CA[8]*>(0xE0081028); }
};


} // namespace nMMCAU