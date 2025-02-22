#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMA42
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nRDC_SEMAPHORE2 {


// Gate Register
//
union RDC_SEMAPHORE2_GATE0 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE1 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE2 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE3 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE4 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE5 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE6 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE7 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE8 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE9 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE10 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE11 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE12 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE13 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE14 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE15 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE16 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE17 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE18 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE19 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE20 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE21 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE22 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE23 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE24 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE25 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE26 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE27 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE28 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE29 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE30 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE31 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE32 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE33 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE34 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE35 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE36 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE37 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE38 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE39 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE40 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE41 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE42 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE43 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE44 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE45 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE46 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE47 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE48 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE49 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE50 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE51 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE52 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE53 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE54 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE55 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE56 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE57 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE58 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE59 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE60 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE61 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE62 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_GATE63 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor with master_index = 0.
    eGTFSM_2 = 2, // The gate has been locked by processor with master_index = 1.
    eGTFSM_3 = 3, // The gate has been locked by processor with master_index = 2.
    eGTFSM_4 = 4, // The gate has been locked by processor with master_index = 3.
    eGTFSM_5 = 5, // The gate has been locked by processor with master_index = 4.
    eGTFSM_6 = 6, // The gate has been locked by processor with master_index = 5.
    eGTFSM_7 = 7, // The gate has been locked by processor with master_index = 6.
    eGTFSM_8 = 8, // The gate has been locked by processor with master_index = 7.
    eGTFSM_9 = 9, // The gate has been locked by processor with master_index = 8.
    eGTFSM_10 = 10, // The gate has been locked by processor with master_index = 9.
    eGTFSM_11 = 11, // The gate has been locked by processor with master_index = 10.
    eGTFSM_12 = 12, // The gate has been locked by processor with master_index = 11.
    eGTFSM_13 = 13, // The gate has been locked by processor with master_index = 12.
    eGTFSM_14 = 14, // The gate has been locked by processor with master_index = 13.
    eGTFSM_15 = 15, // The gate has been locked by processor with master_index = 14.
  };
  
  enum class eLDOM : uint32_t {
    eLDOM_0 = 0, // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
    eLDOM_1 = 1, // The gate has been locked by domain 1.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 4;
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
//
union RDC_SEMAPHORE2_RSTGT_R {
  
  enum class eRSTGSM : uint32_t {
    eRSTGSM_0 = 0, // Idle, waiting for the first data pattern write.
    eRSTGSM_1 = 1, // Waiting for the second data pattern write.
    eRSTGSM_2 = 2, // The 2-write sequence has completed. Generate the specified gate reset(s). After the reset is performed, this machine returns to the idle (waiting for first data pattern write) state. The "01" state persists for only one clock cycle. Software will never be able to observe this state.
    eRSTGSM_3 = 3, // This state encoding is never used and therefore reserved.
  };
  
  // Bit field definition.
  struct {
    uint32_t RSTGMS : 4;
    eRSTGSM RSTGSM : 2;
    uint32_t _reserved_0 : 2;
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
//
union RDC_SEMAPHORE2_RSTGT_W {
  
  // Bit field definition.
  struct {
    uint32_t RSTGDP : 8;
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