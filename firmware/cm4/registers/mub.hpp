#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MUB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nMUB {


// Processor B Transmit Register 0
//
union TR0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR0 &Instance() { return *reinterpret_cast<volatile TR0*>(0x40C4C000); }
};

// Processor B Transmit Register 1
//
union TR1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR1 &Instance() { return *reinterpret_cast<volatile TR1*>(0x40C4C004); }
};

// Processor B Transmit Register 2
//
union TR2 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR2 &Instance() { return *reinterpret_cast<volatile TR2*>(0x40C4C008); }
};

// Processor B Transmit Register 3
//
union TR3 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR3 &Instance() { return *reinterpret_cast<volatile TR3*>(0x40C4C00C); }
};

// Processor B Receive Register 0
//
union RR0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR0 &Instance() { return *reinterpret_cast<volatile RR0*>(0x40C4C010); }
};

// Processor B Receive Register 1
//
union RR1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR1 &Instance() { return *reinterpret_cast<volatile RR1*>(0x40C4C014); }
};

// Processor B Receive Register 2
//
union RR2 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR2 &Instance() { return *reinterpret_cast<volatile RR2*>(0x40C4C018); }
};

// Processor B Receive Register 3
//
union RR3 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR3 &Instance() { return *reinterpret_cast<volatile RR3*>(0x40C4C01C); }
};

// Processor B Status Register
//
union SR {
  
  enum class eFn : uint32_t {
    ezero = 0, // ABFn bit in MUA.CR register is written 0 (default).
    eone = 1, // ABFn bit in MUA.CR register is written 1.
  };
  
  enum class eEP : uint32_t {
    enot_pending = 0, // The Processor B-side event is not pending (default).
    epending = 1, // The Processor B-side event is pending.
  };
  
  enum class eRS : uint32_t {
    enot_reset = 0, // The Processor A or the Processor A-side of the MU is not in reset.
    ereset = 1, // The Processor A or the Processor A-side of the MU is in reset.
  };
  
  enum class eFUP : uint32_t {
    eno_update = 0, // No flags updated, initiated by the Processor B, in progress (default)
    eupdate = 1, // Processor B initiated flags update, processing
  };
  
  enum class eTEn : uint32_t {
    enot_empty = 0, // MUB.TRn register is not empty.
    eempty = 1, // MUB.TRn register is empty (default).
  };
  
  enum class eRFn : uint32_t {
    enot_full = 0, // MUB.RRn register is not full (default).
    efull = 1, // MUB.RRn register has received data from MUA.TRn register and is ready to be read by the Processor B.
  };
  
  enum class eGIPn : uint32_t {
    enot_pending = 0, // Processor B general purpose interrupt n is not pending. (default)
    epending = 1, // Processor B general purpose interrupt n is pending.
  };
  
  // Bit field definition.
  struct {
    eFn Fn : 3;
    uint32_t _reserved_0 : 1;
    eEP EP : 1;
    uint32_t _reserved_1 : 2;
    eRS RS : 1;
    eFUP FUP : 1;
    uint32_t _reserved_2 : 11;
    eTEn TEn : 4;
    eRFn RFn : 4;
    eGIPn GIPn : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00F00080; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x40C4C020); }
};

// Processor B Control Register
//
union CR {
  
  enum class eFn : uint32_t {
    eclear = 0, // Clears the Fn bit in the MUA.SR register.
    eset = 1, // Sets the Fn bit in the MUA.SR register.
  };
  
  enum class eGIRn : uint32_t {
    enot_requested = 0, // Processor B General Interrupt n is not requested to the Processor A (default).
    erequested = 1, // Processor B General Interrupt n is requested to the Processor A.
  };
  
  enum class eTIEn : uint32_t {
    edisable = 0, // Disables Processor B Transmit Interrupt n. (default)
    eenable = 1, // Enables Processor B Transmit Interrupt n.
  };
  
  enum class eRIEn : uint32_t {
    edisable = 0, // Disables Processor B Receive Interrupt n. (default)
    eenable = 1, // Enables Processor B Receive Interrupt n.
  };
  
  enum class eGIEn : uint32_t {
    edisable = 0, // Disables Processor B General Interrupt n. (default)
    eenable = 1, // Enables Processor B General Interrupt n.
  };
  
  // Bit field definition.
  struct {
    eFn Fn : 3;
    uint32_t _reserved_0 : 13;
    eGIRn GIRn : 4;
    eTIEn TIEn : 4;
    eRIEn RIEn : 4;
    eGIEn GIEn : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x40C4C024); }
};


} // namespace nMUB