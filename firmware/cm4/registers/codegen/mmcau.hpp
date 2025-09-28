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

  inline void Reset() volatile { this->value = 0x20000000; }
  static inline volatile CASR &ref() { return *reinterpret_cast<volatile CASR*>(0xE0081000); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAA &ref() { return *reinterpret_cast<volatile CAA*>(0xE0081004); }
};

// General Purpose Register
union CA_0 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_0 &ref() { return *reinterpret_cast<volatile CA_0*>(0xE0081008); }
};
// General Purpose Register
union CA_1 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_1 &ref() { return *reinterpret_cast<volatile CA_1*>(0xE008100C); }
};
// General Purpose Register
union CA_2 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_2 &ref() { return *reinterpret_cast<volatile CA_2*>(0xE0081010); }
};
// General Purpose Register
union CA_3 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_3 &ref() { return *reinterpret_cast<volatile CA_3*>(0xE0081014); }
};
// General Purpose Register
union CA_4 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_4 &ref() { return *reinterpret_cast<volatile CA_4*>(0xE0081018); }
};
// General Purpose Register
union CA_5 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_5 &ref() { return *reinterpret_cast<volatile CA_5*>(0xE008101C); }
};
// General Purpose Register
union CA_6 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_6 &ref() { return *reinterpret_cast<volatile CA_6*>(0xE0081020); }
};
// General Purpose Register
union CA_7 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_7 &ref() { return *reinterpret_cast<volatile CA_7*>(0xE0081024); }
};
// General Purpose Register
union CA_8 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Registers
    uint32_t CAn : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CA_8 &ref() { return *reinterpret_cast<volatile CA_8*>(0xE0081028); }
};


} // namespace nMMCAU