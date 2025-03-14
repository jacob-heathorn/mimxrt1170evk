#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMA42
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nRDC_SEMAPHORE1 {


// Gate Register
union RDC_SEMAPHORE1_GATE0 {
  
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

  RDC_SEMAPHORE1_GATE0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE0 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE0*>(0x40C44000); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE1 {
  
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

  RDC_SEMAPHORE1_GATE1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE1 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE1*>(0x40C44001); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE2 {
  
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

  RDC_SEMAPHORE1_GATE2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE2 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE2*>(0x40C44002); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE3 {
  
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

  RDC_SEMAPHORE1_GATE3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE3 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE3*>(0x40C44003); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE4 {
  
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

  RDC_SEMAPHORE1_GATE4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE4 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE4*>(0x40C44004); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE5 {
  
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

  RDC_SEMAPHORE1_GATE5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE5 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE5*>(0x40C44005); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE6 {
  
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

  RDC_SEMAPHORE1_GATE6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE6 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE6*>(0x40C44006); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE7 {
  
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

  RDC_SEMAPHORE1_GATE7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE7 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE7*>(0x40C44007); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE8 {
  
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

  RDC_SEMAPHORE1_GATE8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE8 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE8*>(0x40C44008); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE9 {
  
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

  RDC_SEMAPHORE1_GATE9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE9 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE9*>(0x40C44009); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE10 {
  
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

  RDC_SEMAPHORE1_GATE10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE10 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE10*>(0x40C4400A); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE11 {
  
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

  RDC_SEMAPHORE1_GATE11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE11 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE11*>(0x40C4400B); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE12 {
  
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

  RDC_SEMAPHORE1_GATE12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE12 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE12*>(0x40C4400C); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE13 {
  
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

  RDC_SEMAPHORE1_GATE13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE13 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE13*>(0x40C4400D); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE14 {
  
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

  RDC_SEMAPHORE1_GATE14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE14 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE14*>(0x40C4400E); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE15 {
  
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

  RDC_SEMAPHORE1_GATE15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE15 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE15*>(0x40C4400F); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE16 {
  
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

  RDC_SEMAPHORE1_GATE16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE16 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE16*>(0x40C44010); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE17 {
  
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

  RDC_SEMAPHORE1_GATE17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE17 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE17*>(0x40C44011); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE18 {
  
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

  RDC_SEMAPHORE1_GATE18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE18 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE18*>(0x40C44012); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE19 {
  
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

  RDC_SEMAPHORE1_GATE19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE19 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE19*>(0x40C44013); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE20 {
  
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

  RDC_SEMAPHORE1_GATE20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE20 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE20*>(0x40C44014); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE21 {
  
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

  RDC_SEMAPHORE1_GATE21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE21 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE21*>(0x40C44015); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE22 {
  
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

  RDC_SEMAPHORE1_GATE22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE22 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE22*>(0x40C44016); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE23 {
  
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

  RDC_SEMAPHORE1_GATE23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE23 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE23*>(0x40C44017); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE24 {
  
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

  RDC_SEMAPHORE1_GATE24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE24 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE24*>(0x40C44018); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE25 {
  
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

  RDC_SEMAPHORE1_GATE25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE25 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE25*>(0x40C44019); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE26 {
  
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

  RDC_SEMAPHORE1_GATE26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE26 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE26*>(0x40C4401A); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE27 {
  
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

  RDC_SEMAPHORE1_GATE27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE27 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE27*>(0x40C4401B); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE28 {
  
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

  RDC_SEMAPHORE1_GATE28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE28 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE28*>(0x40C4401C); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE29 {
  
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

  RDC_SEMAPHORE1_GATE29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE29 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE29*>(0x40C4401D); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE30 {
  
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

  RDC_SEMAPHORE1_GATE30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE30 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE30*>(0x40C4401E); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE31 {
  
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

  RDC_SEMAPHORE1_GATE31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE31 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE31*>(0x40C4401F); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE32 {
  
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

  RDC_SEMAPHORE1_GATE32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE32 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE32*>(0x40C44020); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE33 {
  
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

  RDC_SEMAPHORE1_GATE33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE33 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE33*>(0x40C44021); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE34 {
  
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

  RDC_SEMAPHORE1_GATE34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE34 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE34*>(0x40C44022); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE35 {
  
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

  RDC_SEMAPHORE1_GATE35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE35 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE35*>(0x40C44023); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE36 {
  
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

  RDC_SEMAPHORE1_GATE36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE36 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE36*>(0x40C44024); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE37 {
  
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

  RDC_SEMAPHORE1_GATE37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE37 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE37*>(0x40C44025); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE38 {
  
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

  RDC_SEMAPHORE1_GATE38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE38 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE38*>(0x40C44026); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE39 {
  
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

  RDC_SEMAPHORE1_GATE39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE39 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE39*>(0x40C44027); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE40 {
  
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

  RDC_SEMAPHORE1_GATE40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE40 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE40*>(0x40C44028); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE41 {
  
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

  RDC_SEMAPHORE1_GATE41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE41 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE41*>(0x40C44029); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE42 {
  
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

  RDC_SEMAPHORE1_GATE42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE42 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE42*>(0x40C4402A); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE43 {
  
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

  RDC_SEMAPHORE1_GATE43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE43 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE43*>(0x40C4402B); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE44 {
  
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

  RDC_SEMAPHORE1_GATE44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE44 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE44*>(0x40C4402C); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE45 {
  
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

  RDC_SEMAPHORE1_GATE45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE45 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE45*>(0x40C4402D); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE46 {
  
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

  RDC_SEMAPHORE1_GATE46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE46 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE46*>(0x40C4402E); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE47 {
  
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

  RDC_SEMAPHORE1_GATE47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE47 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE47*>(0x40C4402F); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE48 {
  
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

  RDC_SEMAPHORE1_GATE48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE48 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE48*>(0x40C44030); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE49 {
  
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

  RDC_SEMAPHORE1_GATE49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE49 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE49*>(0x40C44031); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE50 {
  
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

  RDC_SEMAPHORE1_GATE50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE50 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE50*>(0x40C44032); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE51 {
  
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

  RDC_SEMAPHORE1_GATE51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE51 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE51*>(0x40C44033); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE52 {
  
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

  RDC_SEMAPHORE1_GATE52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE52 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE52*>(0x40C44034); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE53 {
  
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

  RDC_SEMAPHORE1_GATE53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE53 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE53*>(0x40C44035); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE54 {
  
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

  RDC_SEMAPHORE1_GATE54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE54 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE54*>(0x40C44036); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE55 {
  
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

  RDC_SEMAPHORE1_GATE55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE55 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE55*>(0x40C44037); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE56 {
  
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

  RDC_SEMAPHORE1_GATE56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE56 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE56*>(0x40C44038); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE57 {
  
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

  RDC_SEMAPHORE1_GATE57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE57 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE57*>(0x40C44039); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE58 {
  
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

  RDC_SEMAPHORE1_GATE58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE58 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE58*>(0x40C4403A); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE59 {
  
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

  RDC_SEMAPHORE1_GATE59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE59 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE59*>(0x40C4403B); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE60 {
  
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

  RDC_SEMAPHORE1_GATE60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE60 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE60*>(0x40C4403C); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE61 {
  
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

  RDC_SEMAPHORE1_GATE61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE61 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE61*>(0x40C4403D); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE62 {
  
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

  RDC_SEMAPHORE1_GATE62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE62 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE62*>(0x40C4403E); }
};
// Gate Register
union RDC_SEMAPHORE1_GATE63 {
  
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

  RDC_SEMAPHORE1_GATE63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_GATE63 &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_GATE63*>(0x40C4403F); }
};

// Reset Gate Read
union RDC_SEMAPHORE1_RSTGT_R {
  
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

  RDC_SEMAPHORE1_RSTGT_R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_RSTGT_R &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_RSTGT_R*>(0x40C44042); }
};

// Reset Gate Write
union RDC_SEMAPHORE1_RSTGT_W {
  
  // Bit field definition.
  struct {
    // read-write - Reset Gate Data Pattern
    uint16_t RSTGDP : 8;
    // read-write - Reset Gate Number
    uint16_t RSTGTN : 8;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  RDC_SEMAPHORE1_RSTGT_W() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE1_RSTGT_W &ref() { return *reinterpret_cast<volatile RDC_SEMAPHORE1_RSTGT_W*>(0x40C44042); }
};


} // namespace nRDC_SEMAPHORE1