#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MUB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nMUB {


// Processor B Transmit Register 0
union TR0 {
  
  // Bit field definition.
  struct {
    // read-write - TR0
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR0 &ref() { return *reinterpret_cast<volatile TR0*>(0x40C4C000); }
};

// Processor B Transmit Register 1
union TR1 {
  
  // Bit field definition.
  struct {
    // read-write - TR1
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR1 &ref() { return *reinterpret_cast<volatile TR1*>(0x40C4C004); }
};

// Processor B Transmit Register 2
union TR2 {
  
  // Bit field definition.
  struct {
    // read-write - TR2
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR2 &ref() { return *reinterpret_cast<volatile TR2*>(0x40C4C008); }
};

// Processor B Transmit Register 3
union TR3 {
  
  // Bit field definition.
  struct {
    // read-write - TR3
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR3 &ref() { return *reinterpret_cast<volatile TR3*>(0x40C4C00C); }
};

// Processor B Receive Register 0
union RR0 {
  
  // Bit field definition.
  struct {
    // read-only - RR0
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR0 &ref() { return *reinterpret_cast<volatile RR0*>(0x40C4C010); }
};

// Processor B Receive Register 1
union RR1 {
  
  // Bit field definition.
  struct {
    // read-only - RR1
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR1 &ref() { return *reinterpret_cast<volatile RR1*>(0x40C4C014); }
};

// Processor B Receive Register 2
union RR2 {
  
  // Bit field definition.
  struct {
    // read-only - RR2
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR2 &ref() { return *reinterpret_cast<volatile RR2*>(0x40C4C018); }
};

// Processor B Receive Register 3
union RR3 {
  
  // Bit field definition.
  struct {
    // read-only - RR3
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR3 &ref() { return *reinterpret_cast<volatile RR3*>(0x40C4C01C); }
};

// Processor B Status Register
union SR {
  
  // Fn
  enum class eFn : uint32_t {
    // ABFn bit in MUA.CR register is written 0 (default).
    ezero = 0,
    // ABFn bit in MUA.CR register is written 1.
    eone = 1,
  };
  
  // EP
  enum class eEP : uint32_t {
    // The Processor B-side event is not pending (default).
    enot_pending = 0,
    // The Processor B-side event is pending.
    epending = 1,
  };
  
  // RS
  enum class eRS : uint32_t {
    // The Processor A or the Processor A-side of the MU is not in reset.
    enot_reset = 0,
    // The Processor A or the Processor A-side of the MU is in reset.
    ereset = 1,
  };
  
  // FUP
  enum class eFUP : uint32_t {
    // No flags updated, initiated by the Processor B, in progress (default)
    eno_update = 0,
    // Processor B initiated flags update, processing
    eupdate = 1,
  };
  
  // TEn
  enum class eTEn : uint32_t {
    // MUB.TRn register is not empty.
    enot_empty = 0,
    // MUB.TRn register is empty (default).
    eempty = 1,
  };
  
  // RFn
  enum class eRFn : uint32_t {
    // MUB.RRn register is not full (default).
    enot_full = 0,
    // MUB.RRn register has received data from MUA.TRn register and is ready to be read by the Processor B.
    efull = 1,
  };
  
  // GIPn
  enum class eGIPn : uint32_t {
    // Processor B general purpose interrupt n is not pending. (default)
    enot_pending = 0,
    // Processor B general purpose interrupt n is pending.
    epending = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Fn
    eFn Fn : 3;
    uint32_t _reserved_0 : 1;
    // read-only - EP
    eEP EP : 1;
    uint32_t _reserved_1 : 2;
    // read-only - RS
    eRS RS : 1;
    // read-only - FUP
    eFUP FUP : 1;
    uint32_t _reserved_2 : 11;
    // read-only - TEn
    eTEn TEn : 4;
    // read-only - RFn
    eRFn RFn : 4;
    // read-write - GIPn
    eGIPn GIPn : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00F00080; }
  static inline volatile SR &ref() { return *reinterpret_cast<volatile SR*>(0x40C4C020); }
};

// Processor B Control Register
union CR {
  
  // Fn
  enum class eFn : uint32_t {
    // Clears the Fn bit in the MUA.SR register.
    eclear = 0,
    // Sets the Fn bit in the MUA.SR register.
    eset = 1,
  };
  
  // GIRn
  enum class eGIRn : uint32_t {
    // Processor B General Interrupt n is not requested to the Processor A (default).
    enot_requested = 0,
    // Processor B General Interrupt n is requested to the Processor A.
    erequested = 1,
  };
  
  // TIEn
  enum class eTIEn : uint32_t {
    // Disables Processor B Transmit Interrupt n. (default)
    edisable = 0,
    // Enables Processor B Transmit Interrupt n.
    eenable = 1,
  };
  
  // RIEn
  enum class eRIEn : uint32_t {
    // Disables Processor B Receive Interrupt n. (default)
    edisable = 0,
    // Enables Processor B Receive Interrupt n.
    eenable = 1,
  };
  
  // GIEn
  enum class eGIEn : uint32_t {
    // Disables Processor B General Interrupt n. (default)
    edisable = 0,
    // Enables Processor B General Interrupt n.
    eenable = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fn
    eFn Fn : 3;
    uint32_t _reserved_0 : 13;
    // read-write - GIRn
    eGIRn GIRn : 4;
    // read-write - TIEn
    eTIEn TIEn : 4;
    // read-write - RIEn
    eRIEn RIEn : 4;
    // read-write - GIEn
    eGIEn GIEn : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &ref() { return *reinterpret_cast<volatile CR*>(0x40C4C024); }
};


} // namespace nMUB