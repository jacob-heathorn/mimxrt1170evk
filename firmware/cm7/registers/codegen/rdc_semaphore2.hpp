#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMA42
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nRDC_SEMAPHORE2 {


// Gate Register
union RDC_SEMAPHORE2_GATE0 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE0 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE0*>(0x40CCC000); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE1 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE1 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE1*>(0x40CCC001); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE2 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE2 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE2*>(0x40CCC002); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE3 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE3 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE3*>(0x40CCC003); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE4 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE4 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE4*>(0x40CCC004); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE5 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE5 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE5*>(0x40CCC005); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE6 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE6 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE6*>(0x40CCC006); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE7 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE7 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE7*>(0x40CCC007); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE8 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE8 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE8*>(0x40CCC008); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE9 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE9 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE9*>(0x40CCC009); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE10 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE10 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE10*>(0x40CCC00A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE11 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE11 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE11*>(0x40CCC00B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE12 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE12 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE12*>(0x40CCC00C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE13 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE13 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE13*>(0x40CCC00D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE14 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE14 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE14*>(0x40CCC00E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE15 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE15 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE15*>(0x40CCC00F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE16 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE16 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE16*>(0x40CCC010); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE17 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE17 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE17*>(0x40CCC011); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE18 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE18 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE18*>(0x40CCC012); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE19 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE19 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE19*>(0x40CCC013); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE20 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE20 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE20*>(0x40CCC014); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE21 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE21 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE21*>(0x40CCC015); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE22 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE22 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE22*>(0x40CCC016); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE23 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE23 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE23*>(0x40CCC017); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE24 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE24 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE24*>(0x40CCC018); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE25 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE25 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE25*>(0x40CCC019); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE26 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE26 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE26*>(0x40CCC01A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE27 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE27 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE27*>(0x40CCC01B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE28 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE28 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE28*>(0x40CCC01C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE29 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE29 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE29*>(0x40CCC01D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE30 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE30 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE30*>(0x40CCC01E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE31 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE31 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE31*>(0x40CCC01F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE32 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE32 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE32*>(0x40CCC020); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE33 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE33 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE33*>(0x40CCC021); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE34 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE34 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE34*>(0x40CCC022); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE35 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE35 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE35*>(0x40CCC023); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE36 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE36 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE36*>(0x40CCC024); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE37 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE37 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE37*>(0x40CCC025); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE38 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE38 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE38*>(0x40CCC026); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE39 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE39 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE39*>(0x40CCC027); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE40 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE40 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE40*>(0x40CCC028); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE41 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE41 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE41*>(0x40CCC029); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE42 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE42 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE42*>(0x40CCC02A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE43 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE43 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE43*>(0x40CCC02B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE44 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE44 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE44*>(0x40CCC02C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE45 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE45 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE45*>(0x40CCC02D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE46 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE46 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE46*>(0x40CCC02E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE47 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE47 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE47*>(0x40CCC02F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE48 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE48 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE48*>(0x40CCC030); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE49 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE49 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE49*>(0x40CCC031); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE50 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE50 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE50*>(0x40CCC032); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE51 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE51 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE51*>(0x40CCC033); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE52 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE52 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE52*>(0x40CCC034); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE53 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE53 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE53*>(0x40CCC035); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE54 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE54 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE54*>(0x40CCC036); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE55 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE55 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE55*>(0x40CCC037); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE56 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE56 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE56*>(0x40CCC038); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE57 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE57 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE57*>(0x40CCC039); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE58 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE58 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE58*>(0x40CCC03A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE59 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE59 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE59*>(0x40CCC03B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE60 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE60 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE60*>(0x40CCC03C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE61 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE61 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE61*>(0x40CCC03D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE62 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE62 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE62*>(0x40CCC03E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE63 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint8_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor with master_index = 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor with master_index = 1.
    eGTFSM_2 = 2,
    // The gate has been locked by processor with master_index = 2.
    eGTFSM_3 = 3,
    // The gate has been locked by processor with master_index = 3.
    eGTFSM_4 = 4,
    // The gate has been locked by processor with master_index = 4.
    eGTFSM_5 = 5,
    // The gate has been locked by processor with master_index = 5.
    eGTFSM_6 = 6,
    // The gate has been locked by processor with master_index = 6.
    eGTFSM_7 = 7,
    // The gate has been locked by processor with master_index = 7.
    eGTFSM_8 = 8,
    // The gate has been locked by processor with master_index = 8.
    eGTFSM_9 = 9,
    // The gate has been locked by processor with master_index = 9.
    eGTFSM_10 = 10,
    // The gate has been locked by processor with master_index = 10.
    eGTFSM_11 = 11,
    // The gate has been locked by processor with master_index = 11.
    eGTFSM_12 = 12,
    // The gate has been locked by processor with master_index = 12.
    eGTFSM_13 = 13,
    // The gate has been locked by processor with master_index = 13.
    eGTFSM_14 = 14,
    // The gate has been locked by processor with master_index = 14.
    eGTFSM_15 = 15,
  };
  
  // Read-only bits. They indicate which domain had currently locked the gate.
  enum class eLDOM : uint8_t {
    // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_0 = 0,
    // The gate has been locked by domain 1.
    eLDOM_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Gate Finite State Machine.
    eGTFSM GTFSM : 4;
    // read-only - Read-only bits. They indicate which domain had currently locked the gate.
    eLDOM LDOM : 2;
    uint8_t _reserved_0 : 2;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE63 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE63*>(0x40CCC03F); }
};

// Reset Gate Read
union RDC_SEMAPHORE2_RSTGT_R {
  
  // Reset Gate Finite State Machine
  enum class eRSTGSM : uint16_t {
    // Idle, waiting for the first data pattern write.
    eRSTGSM_0 = 0,
    // Waiting for the second data pattern write.
    eRSTGSM_1 = 1,
    // The 2-write sequence has completed. Generate the specified gate reset(s). After the reset is performed, this machine returns to the idle (waiting for first data pattern write) state. The "01" state persists for only one clock cycle. Software will never be able to observe this state.
    eRSTGSM_2 = 2,
    // This state encoding is never used and therefore reserved.
    eRSTGSM_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-only - Reset Gate Bus Master
    uint16_t RSTGMS : 4;
    // read-only - Reset Gate Finite State Machine
    eRSTGSM RSTGSM : 2;
    uint16_t _reserved_0 : 2;
    // read-write - Reset Gate Number
    uint16_t RSTGTN : 8;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_RSTGT_R &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_RSTGT_R*>(0x40CCC042); }
};

// Reset Gate Write
union RDC_SEMAPHORE2_RSTGT_W {
  
  // Bit field definition.
  struct {
    // read-write - Reset Gate Data Pattern
    uint16_t RSTGDP : 8;
    // read-write - Reset Gate Number
    uint16_t RSTGTN : 8;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_RSTGT_W &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_RSTGT_W*>(0x40CCC042); }
};


} // namespace nRDC_SEMAPHORE2