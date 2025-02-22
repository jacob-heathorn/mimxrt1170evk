#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MUA
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nMUA {


// Processor A Transmit Register 0
union TR0 {
  
  // Bit field definition.
  struct {
    // read-write - TR0
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR0 &Instance() { return *reinterpret_cast<volatile TR0*>(0x40C48000); }
};

// Processor A Transmit Register 1
union TR1 {
  
  // Bit field definition.
  struct {
    // read-write - TR1
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR1 &Instance() { return *reinterpret_cast<volatile TR1*>(0x40C48004); }
};

// Processor A Transmit Register 2
union TR2 {
  
  // Bit field definition.
  struct {
    // read-write - TR2
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR2 &Instance() { return *reinterpret_cast<volatile TR2*>(0x40C48008); }
};

// Processor A Transmit Register 3
union TR3 {
  
  // Bit field definition.
  struct {
    // read-write - TR3
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TR3 &Instance() { return *reinterpret_cast<volatile TR3*>(0x40C4800C); }
};

// Processor A Receive Register 0
union RR0 {
  
  // Bit field definition.
  struct {
    // read-only - RR0
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR0 &Instance() { return *reinterpret_cast<volatile RR0*>(0x40C48010); }
};

// Processor A Receive Register 1
union RR1 {
  
  // Bit field definition.
  struct {
    // read-only - RR1
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR1 &Instance() { return *reinterpret_cast<volatile RR1*>(0x40C48014); }
};

// Processor A Receive Register 2
union RR2 {
  
  // Bit field definition.
  struct {
    // read-only - RR2
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR2 &Instance() { return *reinterpret_cast<volatile RR2*>(0x40C48018); }
};

// Processor A Receive Register 3
union RR3 {
  
  // Bit field definition.
  struct {
    // read-only - RR3
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RR3 &Instance() { return *reinterpret_cast<volatile RR3*>(0x40C4801C); }
};

// Processor A Status Register
union SR {
  
  // Fn
  enum class eFn : uint32_t {
    // BAFn bit in MUB.CR register is written 0 (default).
    ezero = 0,
    // BAFn bit in MUB.CR register is written 1.
    eone = 1,
  };
  
  // EP
  enum class eEP : uint32_t {
    // The Processor A-side event is not pending (default).
    enot_pending = 0,
    // The Processor A-side event is pending.
    epending = 1,
  };
  
  // RS
  enum class eRS : uint32_t {
    // The Processor B-side of the MU is not in reset.
    enot_reset = 0,
    // The Processor B-side of the MU is in reset.
    ereset = 1,
  };
  
  // FUP
  enum class eFUP : uint32_t {
    // No flags updated, initiated by the Processor A, in progress (default)
    eno_update = 0,
    // Processor A initiated flags update, processing
    eupdate = 1,
  };
  
  // TEn
  enum class eTEn : uint32_t {
    // MUA.TRn register is not empty.
    enot_empty = 0,
    // MUA.TRn register is empty (default).
    eempty = 1,
  };
  
  // RFn
  enum class eRFn : uint32_t {
    // MUA.RRn register is not full (default).
    enot_full = 0,
    // MUA.RRn register has received data from MUB.TRn register and is ready to be read by the Processor A.
    efull = 1,
  };
  
  // GIPn
  enum class eGIPn : uint32_t {
    // Processor A general purpose interrupt n is not pending. (default)
    enot_pending = 0,
    // Processor A general purpose interrupt n is pending.
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

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00F00080; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x40C48020); }
};

// Processor A Control Register
union CR {
  
  // Fn
  enum class eFn : uint32_t {
    // N/A. Self clearing bit (default).
    enot_appl = 0,
    // Asserts the Processor A MU reset.
    eassert_reset = 1,
  };
  
  // MUR
  enum class eMUR : uint32_t {
    // N/A. Self clearing bit (default).
    enot_appl = 0,
    // Asserts the Processor A MU reset.
    eassert_reset = 1,
  };
  
  // GIRn
  enum class eGIRn : uint32_t {
    // Processor A General Interrupt n is not requested to the Processor B (default).
    enot_requested = 0,
    // Processor A General Interrupt n is requested to the Processor B.
    erequested = 1,
  };
  
  // TIEn
  enum class eTIEn : uint32_t {
    // Disables Processor A Transmit Interrupt n. (default)
    edisable = 0,
    // Enables Processor A Transmit Interrupt n.
    eenable = 1,
  };
  
  // RIEn
  enum class eRIEn : uint32_t {
    // Disables Processor A Receive Interrupt n. (default)
    edisable = 0,
    // Enables Processor A Receive Interrupt n.
    eenable = 1,
  };
  
  // GIEn
  enum class eGIEn : uint32_t {
    // Disables Processor A General Interrupt n. (default)
    edisable = 0,
    // Enables Processor A General Interrupt n.
    eenable = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fn
    eFn Fn : 3;
    uint32_t _reserved_0 : 2;
    // read-write - MUR
    eMUR MUR : 1;
    uint32_t _reserved_1 : 10;
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

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x40C48024); }
};


} // namespace nMUA