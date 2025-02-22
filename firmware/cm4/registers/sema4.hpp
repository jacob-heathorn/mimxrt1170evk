#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // IPS_Semaphores
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSEMA4 {


// Semaphores Gate n Register
//
union SEMA4_Gate0 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate0 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate0*>(0x40CC8000); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate1 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate1 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate1*>(0x40CC8001); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate2 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate2 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate2*>(0x40CC8002); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate3 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate3 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate3*>(0x40CC8003); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate4 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate4 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate4*>(0x40CC8004); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate5 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate5 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate5*>(0x40CC8005); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate6 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate6 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate6*>(0x40CC8006); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate7 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate7 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate7*>(0x40CC8007); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate8 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate8 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate8*>(0x40CC8008); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate9 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate9 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate9*>(0x40CC8009); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate10 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate10 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate10*>(0x40CC800A); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate11 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate11 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate11*>(0x40CC800B); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate12 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate12 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate12*>(0x40CC800C); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate13 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate13 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate13*>(0x40CC800D); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate14 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate14 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate14*>(0x40CC800E); }
};
// Semaphores Gate n Register
//
union SEMA4_Gate15 {
  
  enum class eGTFSM : uint32_t {
    eGTFSM_0 = 0, // The gate is unlocked (free).
    eGTFSM_1 = 1, // The gate has been locked by processor 0.
    eGTFSM_2 = 2, // The gate has been locked by processor 1.
    eGTFSM_3 = 3, // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
  };
  
  // Bit field definition.
  struct {
    eGTFSM GTFSM : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_Gate15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_Gate15 &Instance() { return *reinterpret_cast<volatile SEMA4_Gate15*>(0x40CC800F); }
};

// Semaphores Processor n IRQ Notification Enable
//
union SEMA4_CP0INE {
  
  enum class eINE7 : uint32_t {
    eINE7_0 = 0, // The generation of the notification interrupt is disabled.
    eINE7_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE6 : uint32_t {
    eINE6_0 = 0, // The generation of the notification interrupt is disabled.
    eINE6_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE5 : uint32_t {
    eINE5_0 = 0, // The generation of the notification interrupt is disabled.
    eINE5_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE4 : uint32_t {
    eINE4_0 = 0, // The generation of the notification interrupt is disabled.
    eINE4_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE3 : uint32_t {
    eINE3_0 = 0, // The generation of the notification interrupt is disabled.
    eINE3_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE2 : uint32_t {
    eINE2_0 = 0, // The generation of the notification interrupt is disabled.
    eINE2_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE1 : uint32_t {
    eINE1_0 = 0, // The generation of the notification interrupt is disabled.
    eINE1_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE0 : uint32_t {
    eINE0_0 = 0, // The generation of the notification interrupt is disabled.
    eINE0_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE15 : uint32_t {
    eINE15_0 = 0, // The generation of the notification interrupt is disabled.
    eINE15_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE14 : uint32_t {
    eINE14_0 = 0, // The generation of the notification interrupt is disabled.
    eINE14_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE13 : uint32_t {
    eINE13_0 = 0, // The generation of the notification interrupt is disabled.
    eINE13_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE12 : uint32_t {
    eINE12_0 = 0, // The generation of the notification interrupt is disabled.
    eINE12_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE11 : uint32_t {
    eINE11_0 = 0, // The generation of the notification interrupt is disabled.
    eINE11_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE10 : uint32_t {
    eINE10_0 = 0, // The generation of the notification interrupt is disabled.
    eINE10_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE9 : uint32_t {
    eINE9_0 = 0, // The generation of the notification interrupt is disabled.
    eINE9_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE8 : uint32_t {
    eINE8_0 = 0, // The generation of the notification interrupt is disabled.
    eINE8_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  // Bit field definition.
  struct {
    eINE7 INE7 : 1;
    eINE6 INE6 : 1;
    eINE5 INE5 : 1;
    eINE4 INE4 : 1;
    eINE3 INE3 : 1;
    eINE2 INE2 : 1;
    eINE1 INE1 : 1;
    eINE0 INE0 : 1;
    eINE15 INE15 : 1;
    eINE14 INE14 : 1;
    eINE13 INE13 : 1;
    eINE12 INE12 : 1;
    eINE11 INE11 : 1;
    eINE10 INE10 : 1;
    eINE9 INE9 : 1;
    eINE8 INE8 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_CP0INE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_CP0INE &Instance() { return *reinterpret_cast<volatile SEMA4_CP0INE*>(0x40CC8040); }
};
// Semaphores Processor n IRQ Notification Enable
//
union SEMA4_CP1INE {
  
  enum class eINE7 : uint32_t {
    eINE7_0 = 0, // The generation of the notification interrupt is disabled.
    eINE7_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE6 : uint32_t {
    eINE6_0 = 0, // The generation of the notification interrupt is disabled.
    eINE6_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE5 : uint32_t {
    eINE5_0 = 0, // The generation of the notification interrupt is disabled.
    eINE5_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE4 : uint32_t {
    eINE4_0 = 0, // The generation of the notification interrupt is disabled.
    eINE4_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE3 : uint32_t {
    eINE3_0 = 0, // The generation of the notification interrupt is disabled.
    eINE3_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE2 : uint32_t {
    eINE2_0 = 0, // The generation of the notification interrupt is disabled.
    eINE2_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE1 : uint32_t {
    eINE1_0 = 0, // The generation of the notification interrupt is disabled.
    eINE1_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE0 : uint32_t {
    eINE0_0 = 0, // The generation of the notification interrupt is disabled.
    eINE0_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE15 : uint32_t {
    eINE15_0 = 0, // The generation of the notification interrupt is disabled.
    eINE15_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE14 : uint32_t {
    eINE14_0 = 0, // The generation of the notification interrupt is disabled.
    eINE14_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE13 : uint32_t {
    eINE13_0 = 0, // The generation of the notification interrupt is disabled.
    eINE13_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE12 : uint32_t {
    eINE12_0 = 0, // The generation of the notification interrupt is disabled.
    eINE12_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE11 : uint32_t {
    eINE11_0 = 0, // The generation of the notification interrupt is disabled.
    eINE11_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE10 : uint32_t {
    eINE10_0 = 0, // The generation of the notification interrupt is disabled.
    eINE10_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE9 : uint32_t {
    eINE9_0 = 0, // The generation of the notification interrupt is disabled.
    eINE9_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  enum class eINE8 : uint32_t {
    eINE8_0 = 0, // The generation of the notification interrupt is disabled.
    eINE8_1 = 1, // The generation of the notification interrupt is enabled.
  };
  
  // Bit field definition.
  struct {
    eINE7 INE7 : 1;
    eINE6 INE6 : 1;
    eINE5 INE5 : 1;
    eINE4 INE4 : 1;
    eINE3 INE3 : 1;
    eINE2 INE2 : 1;
    eINE1 INE1 : 1;
    eINE0 INE0 : 1;
    eINE15 INE15 : 1;
    eINE14 INE14 : 1;
    eINE13 INE13 : 1;
    eINE12 INE12 : 1;
    eINE11 INE11 : 1;
    eINE10 INE10 : 1;
    eINE9 INE9 : 1;
    eINE8 INE8 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_CP1INE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_CP1INE &Instance() { return *reinterpret_cast<volatile SEMA4_CP1INE*>(0x40CC8048); }
};

// Semaphores Processor n IRQ Notification
//
union SEMA4_CP0NTF {
  
  // Bit field definition.
  struct {
    uint32_t GN7 : 1;
    uint32_t GN6 : 1;
    uint32_t GN5 : 1;
    uint32_t GN4 : 1;
    uint32_t GN3 : 1;
    uint32_t GN2 : 1;
    uint32_t GN1 : 1;
    uint32_t GN0 : 1;
    uint32_t GN15 : 1;
    uint32_t GN14 : 1;
    uint32_t GN13 : 1;
    uint32_t GN12 : 1;
    uint32_t GN11 : 1;
    uint32_t GN10 : 1;
    uint32_t GN9 : 1;
    uint32_t GN8 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_CP0NTF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_CP0NTF &Instance() { return *reinterpret_cast<volatile SEMA4_CP0NTF*>(0x40CC8080); }
};
// Semaphores Processor n IRQ Notification
//
union SEMA4_CP1NTF {
  
  // Bit field definition.
  struct {
    uint32_t GN7 : 1;
    uint32_t GN6 : 1;
    uint32_t GN5 : 1;
    uint32_t GN4 : 1;
    uint32_t GN3 : 1;
    uint32_t GN2 : 1;
    uint32_t GN1 : 1;
    uint32_t GN0 : 1;
    uint32_t GN15 : 1;
    uint32_t GN14 : 1;
    uint32_t GN13 : 1;
    uint32_t GN12 : 1;
    uint32_t GN11 : 1;
    uint32_t GN10 : 1;
    uint32_t GN9 : 1;
    uint32_t GN8 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_CP1NTF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_CP1NTF &Instance() { return *reinterpret_cast<volatile SEMA4_CP1NTF*>(0x40CC8088); }
};

// Semaphores (Secure) Reset Gate n
//
union SEMA4_RSTGT {
  
  // Bit field definition.
  struct {
    uint32_t RSTGSM_RSTGMS_RSTGDP : 8;
    uint32_t RSTGTN : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_RSTGT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_RSTGT &Instance() { return *reinterpret_cast<volatile SEMA4_RSTGT*>(0x40CC8100); }
};

// Semaphores (Secure) Reset IRQ Notification
//
union SEMA4_RSTNTF {
  
  // Bit field definition.
  struct {
    uint32_t RSTNSM_RSTNMS_RSTNDP : 8;
    uint32_t RSTNTN : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEMA4_RSTNTF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEMA4_RSTNTF &Instance() { return *reinterpret_cast<volatile SEMA4_RSTNTF*>(0x40CC8104); }
};


} // namespace nSEMA4