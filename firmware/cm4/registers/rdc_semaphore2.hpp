#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMA42
namespace nRDC_SEMAPHORE2 {


// Gate Register
union RDC_SEMAPHORE2_GATE0 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE0 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE0*>(0x40CCC000); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE1 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE1 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE1*>(0x40CCC001); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE2 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE2 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE2*>(0x40CCC002); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE3 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE3 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE3*>(0x40CCC003); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE4 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE4 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE4*>(0x40CCC004); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE5 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE5 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE5*>(0x40CCC005); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE6 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE6 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE6*>(0x40CCC006); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE7 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE7 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE7*>(0x40CCC007); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE8 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE8 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE8*>(0x40CCC008); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE9 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE9 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE9*>(0x40CCC009); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE10 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE10 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE10*>(0x40CCC00A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE11 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE11 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE11*>(0x40CCC00B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE12 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE12 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE12*>(0x40CCC00C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE13 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE13 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE13*>(0x40CCC00D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE14 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE14 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE14*>(0x40CCC00E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE15 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE15 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE15*>(0x40CCC00F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE16 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE16 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE16*>(0x40CCC010); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE17 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE17 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE17*>(0x40CCC011); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE18 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE18 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE18*>(0x40CCC012); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE19 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE19 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE19*>(0x40CCC013); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE20 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE20 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE20*>(0x40CCC014); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE21 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE21 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE21*>(0x40CCC015); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE22 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE22 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE22*>(0x40CCC016); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE23 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE23 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE23*>(0x40CCC017); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE24 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE24 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE24*>(0x40CCC018); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE25 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE25 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE25*>(0x40CCC019); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE26 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE26 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE26*>(0x40CCC01A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE27 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE27 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE27*>(0x40CCC01B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE28 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE28 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE28*>(0x40CCC01C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE29 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE29 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE29*>(0x40CCC01D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE30 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE30 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE30*>(0x40CCC01E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE31 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE31 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE31*>(0x40CCC01F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE32 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE32 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE32*>(0x40CCC020); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE33 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE33 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE33*>(0x40CCC021); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE34 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE34 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE34*>(0x40CCC022); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE35 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE35 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE35*>(0x40CCC023); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE36 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE36 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE36*>(0x40CCC024); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE37 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE37 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE37*>(0x40CCC025); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE38 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE38 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE38*>(0x40CCC026); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE39 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE39 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE39*>(0x40CCC027); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE40 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE40 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE40*>(0x40CCC028); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE41 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE41 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE41*>(0x40CCC029); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE42 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE42 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE42*>(0x40CCC02A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE43 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE43 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE43*>(0x40CCC02B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE44 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE44 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE44*>(0x40CCC02C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE45 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE45 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE45*>(0x40CCC02D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE46 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE46 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE46*>(0x40CCC02E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE47 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE47 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE47*>(0x40CCC02F); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE48 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE48 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE48*>(0x40CCC030); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE49 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE49 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE49*>(0x40CCC031); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE50 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE50 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE50*>(0x40CCC032); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE51 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE51 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE51*>(0x40CCC033); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE52 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE52 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE52*>(0x40CCC034); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE53 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE53 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE53*>(0x40CCC035); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE54 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE54 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE54*>(0x40CCC036); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE55 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE55 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE55*>(0x40CCC037); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE56 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE56 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE56*>(0x40CCC038); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE57 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE57 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE57*>(0x40CCC039); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE58 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE58 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE58*>(0x40CCC03A); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE59 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE59 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE59*>(0x40CCC03B); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE60 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE60 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE60*>(0x40CCC03C); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE61 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE61 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE61*>(0x40CCC03D); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE62 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE62 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE62*>(0x40CCC03E); }
};
// Gate Register
union RDC_SEMAPHORE2_GATE63 {
  
  // Gate Finite State Machine.
  enum class eGTFSM : uint32_t {
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
  enum class eLDOM : uint32_t {
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
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_GATE63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_GATE63 &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_GATE63*>(0x40CCC03F); }
};

// Reset Gate Read
union RDC_SEMAPHORE2_RSTGT_R {
  
  // Reset Gate Finite State Machine
  enum class eRSTGSM : uint32_t {
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
    uint32_t RSTGMS : 4;
    // read-only - Reset Gate Finite State Machine
    eRSTGSM RSTGSM : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Reset Gate Number
    uint32_t RSTGTN : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_RSTGT_R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_RSTGT_R &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_RSTGT_R*>(0x40CCC042); }
};

// Reset Gate Write
union RDC_SEMAPHORE2_RSTGT_W {
  
  // Bit field definition.
  struct {
    // read-write - Reset Gate Data Pattern
    uint32_t RSTGDP : 8;
    // read-write - Reset Gate Number
    uint32_t RSTGTN : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_SEMAPHORE2_RSTGT_W() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_SEMAPHORE2_RSTGT_W &Instance() { return *reinterpret_cast<volatile RDC_SEMAPHORE2_RSTGT_W*>(0x40CCC042); }
};


} // namespace nRDC_SEMAPHORE2