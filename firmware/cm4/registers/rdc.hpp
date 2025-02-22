#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // RDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nRDC {


// Version Information
//
union RDC_VIR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t NDID : 4;
    uint32_t NMSTR : 8;
    uint32_t NPER : 8;
    uint32_t NRGN : 8;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_VIR() = delete;
  inline void Reset() volatile { this->value = 0x03B800C2; }
  static inline volatile RDC_VIR &Instance() { return *reinterpret_cast<volatile RDC_VIR*>(0x40C78000); }
};

// Status
//
union RDC_STAT {
  
  // Enum definitions.
  enum class ePDS : uint32_t {
    ePDS_0 = 0, // Power Down Domain is OFF
    ePDS_1 = 1, // Power Down Domain is ON
  };
  
  // Bit field definition.
  struct {
    uint32_t DID : 4;
    uint32_t _reserved_1 : 4;
    ePDS PDS : 1;
    uint32_t _reserved_end : 23;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile RDC_STAT &Instance() { return *reinterpret_cast<volatile RDC_STAT*>(0x40C78024); }
};

// Interrupt and Control
//
union RDC_INTCTRL {
  
  // Enum definitions.
  enum class eRCI_EN : uint32_t {
    eRCI_EN_0 = 0, // Interrupt Disabled
    eRCI_EN_1 = 1, // Interrupt Enabled
  };
  
  // Bit field definition.
  struct {
    eRCI_EN RCI_EN : 1;
    uint32_t _reserved_end : 31;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_INTCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_INTCTRL &Instance() { return *reinterpret_cast<volatile RDC_INTCTRL*>(0x40C78028); }
};

// Interrupt Status
//
union RDC_INTSTAT {
  
  // Enum definitions.
  enum class eINT : uint32_t {
    eINT_0 = 0, // No Interrupt Pending
    eINT_1 = 1, // Interrupt Pending
  };
  
  // Bit field definition.
  struct {
    eINT INT : 1;
    uint32_t _reserved_end : 31;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_INTSTAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_INTSTAT &Instance() { return *reinterpret_cast<volatile RDC_INTSTAT*>(0x40C7802C); }
};

// Master Domain Assignment
//
union RDC_MDA0 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA0 &Instance() { return *reinterpret_cast<volatile RDC_MDA0*>(0x40C78200); }
};
// Master Domain Assignment
//
union RDC_MDA1 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA1 &Instance() { return *reinterpret_cast<volatile RDC_MDA1*>(0x40C78204); }
};
// Master Domain Assignment
//
union RDC_MDA2 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA2 &Instance() { return *reinterpret_cast<volatile RDC_MDA2*>(0x40C78208); }
};
// Master Domain Assignment
//
union RDC_MDA3 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA3 &Instance() { return *reinterpret_cast<volatile RDC_MDA3*>(0x40C7820C); }
};
// Master Domain Assignment
//
union RDC_MDA4 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA4 &Instance() { return *reinterpret_cast<volatile RDC_MDA4*>(0x40C78210); }
};
// Master Domain Assignment
//
union RDC_MDA5 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA5 &Instance() { return *reinterpret_cast<volatile RDC_MDA5*>(0x40C78214); }
};
// Master Domain Assignment
//
union RDC_MDA6 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA6 &Instance() { return *reinterpret_cast<volatile RDC_MDA6*>(0x40C78218); }
};
// Master Domain Assignment
//
union RDC_MDA7 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA7 &Instance() { return *reinterpret_cast<volatile RDC_MDA7*>(0x40C7821C); }
};
// Master Domain Assignment
//
union RDC_MDA8 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA8 &Instance() { return *reinterpret_cast<volatile RDC_MDA8*>(0x40C78220); }
};
// Master Domain Assignment
//
union RDC_MDA9 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA9 &Instance() { return *reinterpret_cast<volatile RDC_MDA9*>(0x40C78224); }
};
// Master Domain Assignment
//
union RDC_MDA10 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA10 &Instance() { return *reinterpret_cast<volatile RDC_MDA10*>(0x40C78228); }
};
// Master Domain Assignment
//
union RDC_MDA11 {
  
  // Enum definitions.
  enum class eDID : uint32_t {
    eDID_0 = 0, // Master assigned to Processing Domain 0
    eDID_1 = 1, // Master assigned to Processing Domain 1
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eDID DID : 2;
    uint32_t _reserved_1 : 29;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MDA11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MDA11 &Instance() { return *reinterpret_cast<volatile RDC_MDA11*>(0x40C7822C); }
};

// Peripheral Domain Access Permissions
//
union RDC_PDAP0 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP0() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP0 &Instance() { return *reinterpret_cast<volatile RDC_PDAP0*>(0x40C78400); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP1 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP1() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP1 &Instance() { return *reinterpret_cast<volatile RDC_PDAP1*>(0x40C78404); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP2 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP2() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP2 &Instance() { return *reinterpret_cast<volatile RDC_PDAP2*>(0x40C78408); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP3 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP3() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP3 &Instance() { return *reinterpret_cast<volatile RDC_PDAP3*>(0x40C7840C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP4 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP4() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP4 &Instance() { return *reinterpret_cast<volatile RDC_PDAP4*>(0x40C78410); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP5 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP5() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP5 &Instance() { return *reinterpret_cast<volatile RDC_PDAP5*>(0x40C78414); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP6 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP6() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP6 &Instance() { return *reinterpret_cast<volatile RDC_PDAP6*>(0x40C78418); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP7 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP7() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP7 &Instance() { return *reinterpret_cast<volatile RDC_PDAP7*>(0x40C7841C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP8 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP8() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP8 &Instance() { return *reinterpret_cast<volatile RDC_PDAP8*>(0x40C78420); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP9 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP9() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP9 &Instance() { return *reinterpret_cast<volatile RDC_PDAP9*>(0x40C78424); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP10 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP10() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP10 &Instance() { return *reinterpret_cast<volatile RDC_PDAP10*>(0x40C78428); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP11 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP11() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP11 &Instance() { return *reinterpret_cast<volatile RDC_PDAP11*>(0x40C7842C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP12 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP12() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP12 &Instance() { return *reinterpret_cast<volatile RDC_PDAP12*>(0x40C78430); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP13 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP13() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP13 &Instance() { return *reinterpret_cast<volatile RDC_PDAP13*>(0x40C78434); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP14 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP14() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP14 &Instance() { return *reinterpret_cast<volatile RDC_PDAP14*>(0x40C78438); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP15 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP15() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP15 &Instance() { return *reinterpret_cast<volatile RDC_PDAP15*>(0x40C7843C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP16 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP16() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP16 &Instance() { return *reinterpret_cast<volatile RDC_PDAP16*>(0x40C78440); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP17 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP17() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP17 &Instance() { return *reinterpret_cast<volatile RDC_PDAP17*>(0x40C78444); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP18 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP18() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP18 &Instance() { return *reinterpret_cast<volatile RDC_PDAP18*>(0x40C78448); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP19 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP19() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP19 &Instance() { return *reinterpret_cast<volatile RDC_PDAP19*>(0x40C7844C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP20 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP20() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP20 &Instance() { return *reinterpret_cast<volatile RDC_PDAP20*>(0x40C78450); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP21 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP21() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP21 &Instance() { return *reinterpret_cast<volatile RDC_PDAP21*>(0x40C78454); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP22 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP22() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP22 &Instance() { return *reinterpret_cast<volatile RDC_PDAP22*>(0x40C78458); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP23 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP23() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP23 &Instance() { return *reinterpret_cast<volatile RDC_PDAP23*>(0x40C7845C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP24 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP24() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP24 &Instance() { return *reinterpret_cast<volatile RDC_PDAP24*>(0x40C78460); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP25 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP25() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP25 &Instance() { return *reinterpret_cast<volatile RDC_PDAP25*>(0x40C78464); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP26 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP26() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP26 &Instance() { return *reinterpret_cast<volatile RDC_PDAP26*>(0x40C78468); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP27 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP27() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP27 &Instance() { return *reinterpret_cast<volatile RDC_PDAP27*>(0x40C7846C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP28 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP28() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP28 &Instance() { return *reinterpret_cast<volatile RDC_PDAP28*>(0x40C78470); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP29 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP29() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP29 &Instance() { return *reinterpret_cast<volatile RDC_PDAP29*>(0x40C78474); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP30 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP30() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP30 &Instance() { return *reinterpret_cast<volatile RDC_PDAP30*>(0x40C78478); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP31 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP31() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP31 &Instance() { return *reinterpret_cast<volatile RDC_PDAP31*>(0x40C7847C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP32 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP32() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP32 &Instance() { return *reinterpret_cast<volatile RDC_PDAP32*>(0x40C78480); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP33 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP33() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP33 &Instance() { return *reinterpret_cast<volatile RDC_PDAP33*>(0x40C78484); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP34 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP34() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP34 &Instance() { return *reinterpret_cast<volatile RDC_PDAP34*>(0x40C78488); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP35 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP35() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP35 &Instance() { return *reinterpret_cast<volatile RDC_PDAP35*>(0x40C7848C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP36 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP36() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP36 &Instance() { return *reinterpret_cast<volatile RDC_PDAP36*>(0x40C78490); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP37 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP37() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP37 &Instance() { return *reinterpret_cast<volatile RDC_PDAP37*>(0x40C78494); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP38 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP38() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP38 &Instance() { return *reinterpret_cast<volatile RDC_PDAP38*>(0x40C78498); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP39 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP39() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP39 &Instance() { return *reinterpret_cast<volatile RDC_PDAP39*>(0x40C7849C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP40 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP40() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP40 &Instance() { return *reinterpret_cast<volatile RDC_PDAP40*>(0x40C784A0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP41 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP41() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP41 &Instance() { return *reinterpret_cast<volatile RDC_PDAP41*>(0x40C784A4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP42 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP42() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP42 &Instance() { return *reinterpret_cast<volatile RDC_PDAP42*>(0x40C784A8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP43 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP43() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP43 &Instance() { return *reinterpret_cast<volatile RDC_PDAP43*>(0x40C784AC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP44 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP44() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP44 &Instance() { return *reinterpret_cast<volatile RDC_PDAP44*>(0x40C784B0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP45 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP45() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP45 &Instance() { return *reinterpret_cast<volatile RDC_PDAP45*>(0x40C784B4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP46 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP46() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP46 &Instance() { return *reinterpret_cast<volatile RDC_PDAP46*>(0x40C784B8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP47 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP47() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP47 &Instance() { return *reinterpret_cast<volatile RDC_PDAP47*>(0x40C784BC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP48 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP48() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP48 &Instance() { return *reinterpret_cast<volatile RDC_PDAP48*>(0x40C784C0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP49 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP49() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP49 &Instance() { return *reinterpret_cast<volatile RDC_PDAP49*>(0x40C784C4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP50 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP50() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP50 &Instance() { return *reinterpret_cast<volatile RDC_PDAP50*>(0x40C784C8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP51 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP51() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP51 &Instance() { return *reinterpret_cast<volatile RDC_PDAP51*>(0x40C784CC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP52 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP52() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP52 &Instance() { return *reinterpret_cast<volatile RDC_PDAP52*>(0x40C784D0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP53 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP53() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP53 &Instance() { return *reinterpret_cast<volatile RDC_PDAP53*>(0x40C784D4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP54 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP54() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP54 &Instance() { return *reinterpret_cast<volatile RDC_PDAP54*>(0x40C784D8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP55 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP55() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP55 &Instance() { return *reinterpret_cast<volatile RDC_PDAP55*>(0x40C784DC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP56 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP56() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP56 &Instance() { return *reinterpret_cast<volatile RDC_PDAP56*>(0x40C784E0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP57 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP57() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP57 &Instance() { return *reinterpret_cast<volatile RDC_PDAP57*>(0x40C784E4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP58 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP58() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP58 &Instance() { return *reinterpret_cast<volatile RDC_PDAP58*>(0x40C784E8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP59 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP59() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP59 &Instance() { return *reinterpret_cast<volatile RDC_PDAP59*>(0x40C784EC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP60 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP60() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP60 &Instance() { return *reinterpret_cast<volatile RDC_PDAP60*>(0x40C784F0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP61 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP61() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP61 &Instance() { return *reinterpret_cast<volatile RDC_PDAP61*>(0x40C784F4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP62 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP62() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP62 &Instance() { return *reinterpret_cast<volatile RDC_PDAP62*>(0x40C784F8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP63 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP63() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP63 &Instance() { return *reinterpret_cast<volatile RDC_PDAP63*>(0x40C784FC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP64 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP64() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP64 &Instance() { return *reinterpret_cast<volatile RDC_PDAP64*>(0x40C78500); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP65 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP65() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP65 &Instance() { return *reinterpret_cast<volatile RDC_PDAP65*>(0x40C78504); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP66 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP66() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP66 &Instance() { return *reinterpret_cast<volatile RDC_PDAP66*>(0x40C78508); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP67 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP67() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP67 &Instance() { return *reinterpret_cast<volatile RDC_PDAP67*>(0x40C7850C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP68 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP68() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP68 &Instance() { return *reinterpret_cast<volatile RDC_PDAP68*>(0x40C78510); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP69 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP69() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP69 &Instance() { return *reinterpret_cast<volatile RDC_PDAP69*>(0x40C78514); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP70 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP70() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP70 &Instance() { return *reinterpret_cast<volatile RDC_PDAP70*>(0x40C78518); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP71 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP71() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP71 &Instance() { return *reinterpret_cast<volatile RDC_PDAP71*>(0x40C7851C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP72 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP72() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP72 &Instance() { return *reinterpret_cast<volatile RDC_PDAP72*>(0x40C78520); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP73 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP73() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP73 &Instance() { return *reinterpret_cast<volatile RDC_PDAP73*>(0x40C78524); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP74 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP74() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP74 &Instance() { return *reinterpret_cast<volatile RDC_PDAP74*>(0x40C78528); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP75 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP75() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP75 &Instance() { return *reinterpret_cast<volatile RDC_PDAP75*>(0x40C7852C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP76 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP76() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP76 &Instance() { return *reinterpret_cast<volatile RDC_PDAP76*>(0x40C78530); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP77 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP77() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP77 &Instance() { return *reinterpret_cast<volatile RDC_PDAP77*>(0x40C78534); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP78 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP78() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP78 &Instance() { return *reinterpret_cast<volatile RDC_PDAP78*>(0x40C78538); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP79 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP79() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP79 &Instance() { return *reinterpret_cast<volatile RDC_PDAP79*>(0x40C7853C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP80 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP80() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP80 &Instance() { return *reinterpret_cast<volatile RDC_PDAP80*>(0x40C78540); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP81 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP81() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP81 &Instance() { return *reinterpret_cast<volatile RDC_PDAP81*>(0x40C78544); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP82 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP82() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP82 &Instance() { return *reinterpret_cast<volatile RDC_PDAP82*>(0x40C78548); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP83 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP83() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP83 &Instance() { return *reinterpret_cast<volatile RDC_PDAP83*>(0x40C7854C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP84 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP84() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP84 &Instance() { return *reinterpret_cast<volatile RDC_PDAP84*>(0x40C78550); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP85 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP85() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP85 &Instance() { return *reinterpret_cast<volatile RDC_PDAP85*>(0x40C78554); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP86 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP86() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP86 &Instance() { return *reinterpret_cast<volatile RDC_PDAP86*>(0x40C78558); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP87 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP87() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP87 &Instance() { return *reinterpret_cast<volatile RDC_PDAP87*>(0x40C7855C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP88 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP88() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP88 &Instance() { return *reinterpret_cast<volatile RDC_PDAP88*>(0x40C78560); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP89 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP89() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP89 &Instance() { return *reinterpret_cast<volatile RDC_PDAP89*>(0x40C78564); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP90 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP90() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP90 &Instance() { return *reinterpret_cast<volatile RDC_PDAP90*>(0x40C78568); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP91 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP91() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP91 &Instance() { return *reinterpret_cast<volatile RDC_PDAP91*>(0x40C7856C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP92 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP92() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP92 &Instance() { return *reinterpret_cast<volatile RDC_PDAP92*>(0x40C78570); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP93 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP93() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP93 &Instance() { return *reinterpret_cast<volatile RDC_PDAP93*>(0x40C78574); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP94 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP94() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP94 &Instance() { return *reinterpret_cast<volatile RDC_PDAP94*>(0x40C78578); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP95 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP95() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP95 &Instance() { return *reinterpret_cast<volatile RDC_PDAP95*>(0x40C7857C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP96 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP96() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP96 &Instance() { return *reinterpret_cast<volatile RDC_PDAP96*>(0x40C78580); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP97 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP97() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP97 &Instance() { return *reinterpret_cast<volatile RDC_PDAP97*>(0x40C78584); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP98 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP98() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP98 &Instance() { return *reinterpret_cast<volatile RDC_PDAP98*>(0x40C78588); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP99 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP99() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP99 &Instance() { return *reinterpret_cast<volatile RDC_PDAP99*>(0x40C7858C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP100 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP100() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP100 &Instance() { return *reinterpret_cast<volatile RDC_PDAP100*>(0x40C78590); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP101 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP101() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP101 &Instance() { return *reinterpret_cast<volatile RDC_PDAP101*>(0x40C78594); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP102 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP102() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP102 &Instance() { return *reinterpret_cast<volatile RDC_PDAP102*>(0x40C78598); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP103 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP103() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP103 &Instance() { return *reinterpret_cast<volatile RDC_PDAP103*>(0x40C7859C); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP104 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP104() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP104 &Instance() { return *reinterpret_cast<volatile RDC_PDAP104*>(0x40C785A0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP105 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP105() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP105 &Instance() { return *reinterpret_cast<volatile RDC_PDAP105*>(0x40C785A4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP106 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP106() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP106 &Instance() { return *reinterpret_cast<volatile RDC_PDAP106*>(0x40C785A8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP107 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP107() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP107 &Instance() { return *reinterpret_cast<volatile RDC_PDAP107*>(0x40C785AC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP108 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP108() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP108 &Instance() { return *reinterpret_cast<volatile RDC_PDAP108*>(0x40C785B0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP109 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP109() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP109 &Instance() { return *reinterpret_cast<volatile RDC_PDAP109*>(0x40C785B4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP110 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP110() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP110 &Instance() { return *reinterpret_cast<volatile RDC_PDAP110*>(0x40C785B8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP111 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP111() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP111 &Instance() { return *reinterpret_cast<volatile RDC_PDAP111*>(0x40C785BC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP112 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP112() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP112 &Instance() { return *reinterpret_cast<volatile RDC_PDAP112*>(0x40C785C0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP113 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP113() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP113 &Instance() { return *reinterpret_cast<volatile RDC_PDAP113*>(0x40C785C4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP114 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP114() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP114 &Instance() { return *reinterpret_cast<volatile RDC_PDAP114*>(0x40C785C8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP115 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP115() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP115 &Instance() { return *reinterpret_cast<volatile RDC_PDAP115*>(0x40C785CC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP116 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP116() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP116 &Instance() { return *reinterpret_cast<volatile RDC_PDAP116*>(0x40C785D0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP117 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP117() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP117 &Instance() { return *reinterpret_cast<volatile RDC_PDAP117*>(0x40C785D4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP118 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP118() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP118 &Instance() { return *reinterpret_cast<volatile RDC_PDAP118*>(0x40C785D8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP119 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP119() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP119 &Instance() { return *reinterpret_cast<volatile RDC_PDAP119*>(0x40C785DC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP120 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP120() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP120 &Instance() { return *reinterpret_cast<volatile RDC_PDAP120*>(0x40C785E0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP121 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP121() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP121 &Instance() { return *reinterpret_cast<volatile RDC_PDAP121*>(0x40C785E4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP122 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP122() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP122 &Instance() { return *reinterpret_cast<volatile RDC_PDAP122*>(0x40C785E8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP123 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP123() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP123 &Instance() { return *reinterpret_cast<volatile RDC_PDAP123*>(0x40C785EC); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP124 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP124() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP124 &Instance() { return *reinterpret_cast<volatile RDC_PDAP124*>(0x40C785F0); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP125 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP125() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP125 &Instance() { return *reinterpret_cast<volatile RDC_PDAP125*>(0x40C785F4); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP126 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP126() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP126 &Instance() { return *reinterpret_cast<volatile RDC_PDAP126*>(0x40C785F8); }
};
// Peripheral Domain Access Permissions
//
union RDC_PDAP127 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // No Write Access
    eD0W_1 = 1, // Write Access Allowed
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // No Read Access
    eD0R_1 = 1, // Read Access Allowed
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // No Write Access
    eD1W_1 = 1, // Write Access Allowed
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // No Read Access
    eD1R_1 = 1, // Read Access Allowed
  };
  enum class eSREQ : uint32_t {
    eSREQ_0 = 0, // Semaphores have no effect
    eSREQ_1 = 1, // Semaphores are enforced
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // Not Locked
    eLCK_1 = 1, // Locked
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eSREQ SREQ : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_PDAP127() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile RDC_PDAP127 &Instance() { return *reinterpret_cast<volatile RDC_PDAP127*>(0x40C785FC); }
};

// Memory Region Start Address
//
union RDC_MRSA0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA0 &Instance() { return *reinterpret_cast<volatile RDC_MRSA0*>(0x40C78800); }
};
// Memory Region Start Address
//
union RDC_MRSA1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA1 &Instance() { return *reinterpret_cast<volatile RDC_MRSA1*>(0x40C78810); }
};
// Memory Region Start Address
//
union RDC_MRSA2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA2 &Instance() { return *reinterpret_cast<volatile RDC_MRSA2*>(0x40C78820); }
};
// Memory Region Start Address
//
union RDC_MRSA3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA3 &Instance() { return *reinterpret_cast<volatile RDC_MRSA3*>(0x40C78830); }
};
// Memory Region Start Address
//
union RDC_MRSA4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA4 &Instance() { return *reinterpret_cast<volatile RDC_MRSA4*>(0x40C78840); }
};
// Memory Region Start Address
//
union RDC_MRSA5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA5 &Instance() { return *reinterpret_cast<volatile RDC_MRSA5*>(0x40C78850); }
};
// Memory Region Start Address
//
union RDC_MRSA6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA6 &Instance() { return *reinterpret_cast<volatile RDC_MRSA6*>(0x40C78860); }
};
// Memory Region Start Address
//
union RDC_MRSA7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA7 &Instance() { return *reinterpret_cast<volatile RDC_MRSA7*>(0x40C78870); }
};
// Memory Region Start Address
//
union RDC_MRSA8 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA8 &Instance() { return *reinterpret_cast<volatile RDC_MRSA8*>(0x40C78880); }
};
// Memory Region Start Address
//
union RDC_MRSA9 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA9 &Instance() { return *reinterpret_cast<volatile RDC_MRSA9*>(0x40C78890); }
};
// Memory Region Start Address
//
union RDC_MRSA10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA10 &Instance() { return *reinterpret_cast<volatile RDC_MRSA10*>(0x40C788A0); }
};
// Memory Region Start Address
//
union RDC_MRSA11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA11 &Instance() { return *reinterpret_cast<volatile RDC_MRSA11*>(0x40C788B0); }
};
// Memory Region Start Address
//
union RDC_MRSA12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA12 &Instance() { return *reinterpret_cast<volatile RDC_MRSA12*>(0x40C788C0); }
};
// Memory Region Start Address
//
union RDC_MRSA13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA13 &Instance() { return *reinterpret_cast<volatile RDC_MRSA13*>(0x40C788D0); }
};
// Memory Region Start Address
//
union RDC_MRSA14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA14 &Instance() { return *reinterpret_cast<volatile RDC_MRSA14*>(0x40C788E0); }
};
// Memory Region Start Address
//
union RDC_MRSA15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA15 &Instance() { return *reinterpret_cast<volatile RDC_MRSA15*>(0x40C788F0); }
};
// Memory Region Start Address
//
union RDC_MRSA16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA16 &Instance() { return *reinterpret_cast<volatile RDC_MRSA16*>(0x40C78900); }
};
// Memory Region Start Address
//
union RDC_MRSA17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA17 &Instance() { return *reinterpret_cast<volatile RDC_MRSA17*>(0x40C78910); }
};
// Memory Region Start Address
//
union RDC_MRSA18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA18 &Instance() { return *reinterpret_cast<volatile RDC_MRSA18*>(0x40C78920); }
};
// Memory Region Start Address
//
union RDC_MRSA19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA19 &Instance() { return *reinterpret_cast<volatile RDC_MRSA19*>(0x40C78930); }
};
// Memory Region Start Address
//
union RDC_MRSA20 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA20 &Instance() { return *reinterpret_cast<volatile RDC_MRSA20*>(0x40C78940); }
};
// Memory Region Start Address
//
union RDC_MRSA21 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA21 &Instance() { return *reinterpret_cast<volatile RDC_MRSA21*>(0x40C78950); }
};
// Memory Region Start Address
//
union RDC_MRSA22 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA22 &Instance() { return *reinterpret_cast<volatile RDC_MRSA22*>(0x40C78960); }
};
// Memory Region Start Address
//
union RDC_MRSA23 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA23 &Instance() { return *reinterpret_cast<volatile RDC_MRSA23*>(0x40C78970); }
};
// Memory Region Start Address
//
union RDC_MRSA24 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA24 &Instance() { return *reinterpret_cast<volatile RDC_MRSA24*>(0x40C78980); }
};
// Memory Region Start Address
//
union RDC_MRSA25 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA25 &Instance() { return *reinterpret_cast<volatile RDC_MRSA25*>(0x40C78990); }
};
// Memory Region Start Address
//
union RDC_MRSA26 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA26 &Instance() { return *reinterpret_cast<volatile RDC_MRSA26*>(0x40C789A0); }
};
// Memory Region Start Address
//
union RDC_MRSA27 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA27 &Instance() { return *reinterpret_cast<volatile RDC_MRSA27*>(0x40C789B0); }
};
// Memory Region Start Address
//
union RDC_MRSA28 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA28 &Instance() { return *reinterpret_cast<volatile RDC_MRSA28*>(0x40C789C0); }
};
// Memory Region Start Address
//
union RDC_MRSA29 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA29 &Instance() { return *reinterpret_cast<volatile RDC_MRSA29*>(0x40C789D0); }
};
// Memory Region Start Address
//
union RDC_MRSA30 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA30 &Instance() { return *reinterpret_cast<volatile RDC_MRSA30*>(0x40C789E0); }
};
// Memory Region Start Address
//
union RDC_MRSA31 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA31 &Instance() { return *reinterpret_cast<volatile RDC_MRSA31*>(0x40C789F0); }
};
// Memory Region Start Address
//
union RDC_MRSA32 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA32 &Instance() { return *reinterpret_cast<volatile RDC_MRSA32*>(0x40C78A00); }
};
// Memory Region Start Address
//
union RDC_MRSA33 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA33 &Instance() { return *reinterpret_cast<volatile RDC_MRSA33*>(0x40C78A10); }
};
// Memory Region Start Address
//
union RDC_MRSA34 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA34 &Instance() { return *reinterpret_cast<volatile RDC_MRSA34*>(0x40C78A20); }
};
// Memory Region Start Address
//
union RDC_MRSA35 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA35 &Instance() { return *reinterpret_cast<volatile RDC_MRSA35*>(0x40C78A30); }
};
// Memory Region Start Address
//
union RDC_MRSA36 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA36 &Instance() { return *reinterpret_cast<volatile RDC_MRSA36*>(0x40C78A40); }
};
// Memory Region Start Address
//
union RDC_MRSA37 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA37 &Instance() { return *reinterpret_cast<volatile RDC_MRSA37*>(0x40C78A50); }
};
// Memory Region Start Address
//
union RDC_MRSA38 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA38 &Instance() { return *reinterpret_cast<volatile RDC_MRSA38*>(0x40C78A60); }
};
// Memory Region Start Address
//
union RDC_MRSA39 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA39 &Instance() { return *reinterpret_cast<volatile RDC_MRSA39*>(0x40C78A70); }
};
// Memory Region Start Address
//
union RDC_MRSA40 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA40 &Instance() { return *reinterpret_cast<volatile RDC_MRSA40*>(0x40C78A80); }
};
// Memory Region Start Address
//
union RDC_MRSA41 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA41 &Instance() { return *reinterpret_cast<volatile RDC_MRSA41*>(0x40C78A90); }
};
// Memory Region Start Address
//
union RDC_MRSA42 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA42 &Instance() { return *reinterpret_cast<volatile RDC_MRSA42*>(0x40C78AA0); }
};
// Memory Region Start Address
//
union RDC_MRSA43 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA43 &Instance() { return *reinterpret_cast<volatile RDC_MRSA43*>(0x40C78AB0); }
};
// Memory Region Start Address
//
union RDC_MRSA44 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA44 &Instance() { return *reinterpret_cast<volatile RDC_MRSA44*>(0x40C78AC0); }
};
// Memory Region Start Address
//
union RDC_MRSA45 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA45 &Instance() { return *reinterpret_cast<volatile RDC_MRSA45*>(0x40C78AD0); }
};
// Memory Region Start Address
//
union RDC_MRSA46 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA46 &Instance() { return *reinterpret_cast<volatile RDC_MRSA46*>(0x40C78AE0); }
};
// Memory Region Start Address
//
union RDC_MRSA47 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA47 &Instance() { return *reinterpret_cast<volatile RDC_MRSA47*>(0x40C78AF0); }
};
// Memory Region Start Address
//
union RDC_MRSA48 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA48 &Instance() { return *reinterpret_cast<volatile RDC_MRSA48*>(0x40C78B00); }
};
// Memory Region Start Address
//
union RDC_MRSA49 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA49 &Instance() { return *reinterpret_cast<volatile RDC_MRSA49*>(0x40C78B10); }
};
// Memory Region Start Address
//
union RDC_MRSA50 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA50 &Instance() { return *reinterpret_cast<volatile RDC_MRSA50*>(0x40C78B20); }
};
// Memory Region Start Address
//
union RDC_MRSA51 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA51 &Instance() { return *reinterpret_cast<volatile RDC_MRSA51*>(0x40C78B30); }
};
// Memory Region Start Address
//
union RDC_MRSA52 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA52 &Instance() { return *reinterpret_cast<volatile RDC_MRSA52*>(0x40C78B40); }
};
// Memory Region Start Address
//
union RDC_MRSA53 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA53 &Instance() { return *reinterpret_cast<volatile RDC_MRSA53*>(0x40C78B50); }
};
// Memory Region Start Address
//
union RDC_MRSA54 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA54 &Instance() { return *reinterpret_cast<volatile RDC_MRSA54*>(0x40C78B60); }
};
// Memory Region Start Address
//
union RDC_MRSA55 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA55 &Instance() { return *reinterpret_cast<volatile RDC_MRSA55*>(0x40C78B70); }
};
// Memory Region Start Address
//
union RDC_MRSA56 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA56 &Instance() { return *reinterpret_cast<volatile RDC_MRSA56*>(0x40C78B80); }
};
// Memory Region Start Address
//
union RDC_MRSA57 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA57 &Instance() { return *reinterpret_cast<volatile RDC_MRSA57*>(0x40C78B90); }
};
// Memory Region Start Address
//
union RDC_MRSA58 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t SADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRSA58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRSA58 &Instance() { return *reinterpret_cast<volatile RDC_MRSA58*>(0x40C78BA0); }
};

// Memory Region End Address
//
union RDC_MREA0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA0 &Instance() { return *reinterpret_cast<volatile RDC_MREA0*>(0x40C78804); }
};
// Memory Region End Address
//
union RDC_MREA1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA1 &Instance() { return *reinterpret_cast<volatile RDC_MREA1*>(0x40C78814); }
};
// Memory Region End Address
//
union RDC_MREA2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA2 &Instance() { return *reinterpret_cast<volatile RDC_MREA2*>(0x40C78824); }
};
// Memory Region End Address
//
union RDC_MREA3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA3 &Instance() { return *reinterpret_cast<volatile RDC_MREA3*>(0x40C78834); }
};
// Memory Region End Address
//
union RDC_MREA4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA4 &Instance() { return *reinterpret_cast<volatile RDC_MREA4*>(0x40C78844); }
};
// Memory Region End Address
//
union RDC_MREA5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA5 &Instance() { return *reinterpret_cast<volatile RDC_MREA5*>(0x40C78854); }
};
// Memory Region End Address
//
union RDC_MREA6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA6 &Instance() { return *reinterpret_cast<volatile RDC_MREA6*>(0x40C78864); }
};
// Memory Region End Address
//
union RDC_MREA7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA7 &Instance() { return *reinterpret_cast<volatile RDC_MREA7*>(0x40C78874); }
};
// Memory Region End Address
//
union RDC_MREA8 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA8 &Instance() { return *reinterpret_cast<volatile RDC_MREA8*>(0x40C78884); }
};
// Memory Region End Address
//
union RDC_MREA9 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA9 &Instance() { return *reinterpret_cast<volatile RDC_MREA9*>(0x40C78894); }
};
// Memory Region End Address
//
union RDC_MREA10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA10 &Instance() { return *reinterpret_cast<volatile RDC_MREA10*>(0x40C788A4); }
};
// Memory Region End Address
//
union RDC_MREA11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA11 &Instance() { return *reinterpret_cast<volatile RDC_MREA11*>(0x40C788B4); }
};
// Memory Region End Address
//
union RDC_MREA12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA12 &Instance() { return *reinterpret_cast<volatile RDC_MREA12*>(0x40C788C4); }
};
// Memory Region End Address
//
union RDC_MREA13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA13 &Instance() { return *reinterpret_cast<volatile RDC_MREA13*>(0x40C788D4); }
};
// Memory Region End Address
//
union RDC_MREA14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA14 &Instance() { return *reinterpret_cast<volatile RDC_MREA14*>(0x40C788E4); }
};
// Memory Region End Address
//
union RDC_MREA15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA15 &Instance() { return *reinterpret_cast<volatile RDC_MREA15*>(0x40C788F4); }
};
// Memory Region End Address
//
union RDC_MREA16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA16 &Instance() { return *reinterpret_cast<volatile RDC_MREA16*>(0x40C78904); }
};
// Memory Region End Address
//
union RDC_MREA17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA17 &Instance() { return *reinterpret_cast<volatile RDC_MREA17*>(0x40C78914); }
};
// Memory Region End Address
//
union RDC_MREA18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA18 &Instance() { return *reinterpret_cast<volatile RDC_MREA18*>(0x40C78924); }
};
// Memory Region End Address
//
union RDC_MREA19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA19 &Instance() { return *reinterpret_cast<volatile RDC_MREA19*>(0x40C78934); }
};
// Memory Region End Address
//
union RDC_MREA20 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA20 &Instance() { return *reinterpret_cast<volatile RDC_MREA20*>(0x40C78944); }
};
// Memory Region End Address
//
union RDC_MREA21 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA21 &Instance() { return *reinterpret_cast<volatile RDC_MREA21*>(0x40C78954); }
};
// Memory Region End Address
//
union RDC_MREA22 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA22 &Instance() { return *reinterpret_cast<volatile RDC_MREA22*>(0x40C78964); }
};
// Memory Region End Address
//
union RDC_MREA23 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA23 &Instance() { return *reinterpret_cast<volatile RDC_MREA23*>(0x40C78974); }
};
// Memory Region End Address
//
union RDC_MREA24 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA24 &Instance() { return *reinterpret_cast<volatile RDC_MREA24*>(0x40C78984); }
};
// Memory Region End Address
//
union RDC_MREA25 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA25 &Instance() { return *reinterpret_cast<volatile RDC_MREA25*>(0x40C78994); }
};
// Memory Region End Address
//
union RDC_MREA26 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA26 &Instance() { return *reinterpret_cast<volatile RDC_MREA26*>(0x40C789A4); }
};
// Memory Region End Address
//
union RDC_MREA27 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA27 &Instance() { return *reinterpret_cast<volatile RDC_MREA27*>(0x40C789B4); }
};
// Memory Region End Address
//
union RDC_MREA28 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA28 &Instance() { return *reinterpret_cast<volatile RDC_MREA28*>(0x40C789C4); }
};
// Memory Region End Address
//
union RDC_MREA29 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA29 &Instance() { return *reinterpret_cast<volatile RDC_MREA29*>(0x40C789D4); }
};
// Memory Region End Address
//
union RDC_MREA30 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA30 &Instance() { return *reinterpret_cast<volatile RDC_MREA30*>(0x40C789E4); }
};
// Memory Region End Address
//
union RDC_MREA31 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA31 &Instance() { return *reinterpret_cast<volatile RDC_MREA31*>(0x40C789F4); }
};
// Memory Region End Address
//
union RDC_MREA32 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA32 &Instance() { return *reinterpret_cast<volatile RDC_MREA32*>(0x40C78A04); }
};
// Memory Region End Address
//
union RDC_MREA33 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA33 &Instance() { return *reinterpret_cast<volatile RDC_MREA33*>(0x40C78A14); }
};
// Memory Region End Address
//
union RDC_MREA34 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA34 &Instance() { return *reinterpret_cast<volatile RDC_MREA34*>(0x40C78A24); }
};
// Memory Region End Address
//
union RDC_MREA35 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA35 &Instance() { return *reinterpret_cast<volatile RDC_MREA35*>(0x40C78A34); }
};
// Memory Region End Address
//
union RDC_MREA36 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA36 &Instance() { return *reinterpret_cast<volatile RDC_MREA36*>(0x40C78A44); }
};
// Memory Region End Address
//
union RDC_MREA37 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA37 &Instance() { return *reinterpret_cast<volatile RDC_MREA37*>(0x40C78A54); }
};
// Memory Region End Address
//
union RDC_MREA38 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA38 &Instance() { return *reinterpret_cast<volatile RDC_MREA38*>(0x40C78A64); }
};
// Memory Region End Address
//
union RDC_MREA39 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA39 &Instance() { return *reinterpret_cast<volatile RDC_MREA39*>(0x40C78A74); }
};
// Memory Region End Address
//
union RDC_MREA40 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA40 &Instance() { return *reinterpret_cast<volatile RDC_MREA40*>(0x40C78A84); }
};
// Memory Region End Address
//
union RDC_MREA41 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA41 &Instance() { return *reinterpret_cast<volatile RDC_MREA41*>(0x40C78A94); }
};
// Memory Region End Address
//
union RDC_MREA42 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA42 &Instance() { return *reinterpret_cast<volatile RDC_MREA42*>(0x40C78AA4); }
};
// Memory Region End Address
//
union RDC_MREA43 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA43 &Instance() { return *reinterpret_cast<volatile RDC_MREA43*>(0x40C78AB4); }
};
// Memory Region End Address
//
union RDC_MREA44 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA44 &Instance() { return *reinterpret_cast<volatile RDC_MREA44*>(0x40C78AC4); }
};
// Memory Region End Address
//
union RDC_MREA45 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA45 &Instance() { return *reinterpret_cast<volatile RDC_MREA45*>(0x40C78AD4); }
};
// Memory Region End Address
//
union RDC_MREA46 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA46 &Instance() { return *reinterpret_cast<volatile RDC_MREA46*>(0x40C78AE4); }
};
// Memory Region End Address
//
union RDC_MREA47 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA47 &Instance() { return *reinterpret_cast<volatile RDC_MREA47*>(0x40C78AF4); }
};
// Memory Region End Address
//
union RDC_MREA48 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA48 &Instance() { return *reinterpret_cast<volatile RDC_MREA48*>(0x40C78B04); }
};
// Memory Region End Address
//
union RDC_MREA49 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA49 &Instance() { return *reinterpret_cast<volatile RDC_MREA49*>(0x40C78B14); }
};
// Memory Region End Address
//
union RDC_MREA50 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA50 &Instance() { return *reinterpret_cast<volatile RDC_MREA50*>(0x40C78B24); }
};
// Memory Region End Address
//
union RDC_MREA51 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA51 &Instance() { return *reinterpret_cast<volatile RDC_MREA51*>(0x40C78B34); }
};
// Memory Region End Address
//
union RDC_MREA52 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA52 &Instance() { return *reinterpret_cast<volatile RDC_MREA52*>(0x40C78B44); }
};
// Memory Region End Address
//
union RDC_MREA53 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA53 &Instance() { return *reinterpret_cast<volatile RDC_MREA53*>(0x40C78B54); }
};
// Memory Region End Address
//
union RDC_MREA54 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA54 &Instance() { return *reinterpret_cast<volatile RDC_MREA54*>(0x40C78B64); }
};
// Memory Region End Address
//
union RDC_MREA55 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA55 &Instance() { return *reinterpret_cast<volatile RDC_MREA55*>(0x40C78B74); }
};
// Memory Region End Address
//
union RDC_MREA56 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA56 &Instance() { return *reinterpret_cast<volatile RDC_MREA56*>(0x40C78B84); }
};
// Memory Region End Address
//
union RDC_MREA57 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA57 &Instance() { return *reinterpret_cast<volatile RDC_MREA57*>(0x40C78B94); }
};
// Memory Region End Address
//
union RDC_MREA58 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t EADR : 25;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MREA58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MREA58 &Instance() { return *reinterpret_cast<volatile RDC_MREA58*>(0x40C78BA4); }
};

// Memory Region Control
//
union RDC_MRC0 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC0() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC0 &Instance() { return *reinterpret_cast<volatile RDC_MRC0*>(0x40C78808); }
};
// Memory Region Control
//
union RDC_MRC1 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC1() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC1 &Instance() { return *reinterpret_cast<volatile RDC_MRC1*>(0x40C78818); }
};
// Memory Region Control
//
union RDC_MRC2 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC2() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC2 &Instance() { return *reinterpret_cast<volatile RDC_MRC2*>(0x40C78828); }
};
// Memory Region Control
//
union RDC_MRC3 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC3() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC3 &Instance() { return *reinterpret_cast<volatile RDC_MRC3*>(0x40C78838); }
};
// Memory Region Control
//
union RDC_MRC4 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC4() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC4 &Instance() { return *reinterpret_cast<volatile RDC_MRC4*>(0x40C78848); }
};
// Memory Region Control
//
union RDC_MRC5 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC5() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC5 &Instance() { return *reinterpret_cast<volatile RDC_MRC5*>(0x40C78858); }
};
// Memory Region Control
//
union RDC_MRC6 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC6() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC6 &Instance() { return *reinterpret_cast<volatile RDC_MRC6*>(0x40C78868); }
};
// Memory Region Control
//
union RDC_MRC7 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC7() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC7 &Instance() { return *reinterpret_cast<volatile RDC_MRC7*>(0x40C78878); }
};
// Memory Region Control
//
union RDC_MRC8 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC8() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC8 &Instance() { return *reinterpret_cast<volatile RDC_MRC8*>(0x40C78888); }
};
// Memory Region Control
//
union RDC_MRC9 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC9() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC9 &Instance() { return *reinterpret_cast<volatile RDC_MRC9*>(0x40C78898); }
};
// Memory Region Control
//
union RDC_MRC10 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC10() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC10 &Instance() { return *reinterpret_cast<volatile RDC_MRC10*>(0x40C788A8); }
};
// Memory Region Control
//
union RDC_MRC11 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC11() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC11 &Instance() { return *reinterpret_cast<volatile RDC_MRC11*>(0x40C788B8); }
};
// Memory Region Control
//
union RDC_MRC12 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC12() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC12 &Instance() { return *reinterpret_cast<volatile RDC_MRC12*>(0x40C788C8); }
};
// Memory Region Control
//
union RDC_MRC13 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC13() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC13 &Instance() { return *reinterpret_cast<volatile RDC_MRC13*>(0x40C788D8); }
};
// Memory Region Control
//
union RDC_MRC14 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC14() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC14 &Instance() { return *reinterpret_cast<volatile RDC_MRC14*>(0x40C788E8); }
};
// Memory Region Control
//
union RDC_MRC15 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC15() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC15 &Instance() { return *reinterpret_cast<volatile RDC_MRC15*>(0x40C788F8); }
};
// Memory Region Control
//
union RDC_MRC16 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC16() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC16 &Instance() { return *reinterpret_cast<volatile RDC_MRC16*>(0x40C78908); }
};
// Memory Region Control
//
union RDC_MRC17 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC17() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC17 &Instance() { return *reinterpret_cast<volatile RDC_MRC17*>(0x40C78918); }
};
// Memory Region Control
//
union RDC_MRC18 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC18() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC18 &Instance() { return *reinterpret_cast<volatile RDC_MRC18*>(0x40C78928); }
};
// Memory Region Control
//
union RDC_MRC19 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC19() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC19 &Instance() { return *reinterpret_cast<volatile RDC_MRC19*>(0x40C78938); }
};
// Memory Region Control
//
union RDC_MRC20 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC20() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC20 &Instance() { return *reinterpret_cast<volatile RDC_MRC20*>(0x40C78948); }
};
// Memory Region Control
//
union RDC_MRC21 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC21() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC21 &Instance() { return *reinterpret_cast<volatile RDC_MRC21*>(0x40C78958); }
};
// Memory Region Control
//
union RDC_MRC22 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC22() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC22 &Instance() { return *reinterpret_cast<volatile RDC_MRC22*>(0x40C78968); }
};
// Memory Region Control
//
union RDC_MRC23 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC23() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC23 &Instance() { return *reinterpret_cast<volatile RDC_MRC23*>(0x40C78978); }
};
// Memory Region Control
//
union RDC_MRC24 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC24() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC24 &Instance() { return *reinterpret_cast<volatile RDC_MRC24*>(0x40C78988); }
};
// Memory Region Control
//
union RDC_MRC25 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC25() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC25 &Instance() { return *reinterpret_cast<volatile RDC_MRC25*>(0x40C78998); }
};
// Memory Region Control
//
union RDC_MRC26 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC26() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC26 &Instance() { return *reinterpret_cast<volatile RDC_MRC26*>(0x40C789A8); }
};
// Memory Region Control
//
union RDC_MRC27 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC27() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC27 &Instance() { return *reinterpret_cast<volatile RDC_MRC27*>(0x40C789B8); }
};
// Memory Region Control
//
union RDC_MRC28 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC28() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC28 &Instance() { return *reinterpret_cast<volatile RDC_MRC28*>(0x40C789C8); }
};
// Memory Region Control
//
union RDC_MRC29 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC29() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC29 &Instance() { return *reinterpret_cast<volatile RDC_MRC29*>(0x40C789D8); }
};
// Memory Region Control
//
union RDC_MRC30 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC30() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC30 &Instance() { return *reinterpret_cast<volatile RDC_MRC30*>(0x40C789E8); }
};
// Memory Region Control
//
union RDC_MRC31 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC31() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC31 &Instance() { return *reinterpret_cast<volatile RDC_MRC31*>(0x40C789F8); }
};
// Memory Region Control
//
union RDC_MRC32 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC32() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC32 &Instance() { return *reinterpret_cast<volatile RDC_MRC32*>(0x40C78A08); }
};
// Memory Region Control
//
union RDC_MRC33 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC33() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC33 &Instance() { return *reinterpret_cast<volatile RDC_MRC33*>(0x40C78A18); }
};
// Memory Region Control
//
union RDC_MRC34 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC34() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC34 &Instance() { return *reinterpret_cast<volatile RDC_MRC34*>(0x40C78A28); }
};
// Memory Region Control
//
union RDC_MRC35 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC35() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC35 &Instance() { return *reinterpret_cast<volatile RDC_MRC35*>(0x40C78A38); }
};
// Memory Region Control
//
union RDC_MRC36 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC36() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC36 &Instance() { return *reinterpret_cast<volatile RDC_MRC36*>(0x40C78A48); }
};
// Memory Region Control
//
union RDC_MRC37 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC37() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC37 &Instance() { return *reinterpret_cast<volatile RDC_MRC37*>(0x40C78A58); }
};
// Memory Region Control
//
union RDC_MRC38 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC38() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC38 &Instance() { return *reinterpret_cast<volatile RDC_MRC38*>(0x40C78A68); }
};
// Memory Region Control
//
union RDC_MRC39 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC39() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC39 &Instance() { return *reinterpret_cast<volatile RDC_MRC39*>(0x40C78A78); }
};
// Memory Region Control
//
union RDC_MRC40 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC40() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC40 &Instance() { return *reinterpret_cast<volatile RDC_MRC40*>(0x40C78A88); }
};
// Memory Region Control
//
union RDC_MRC41 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC41() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC41 &Instance() { return *reinterpret_cast<volatile RDC_MRC41*>(0x40C78A98); }
};
// Memory Region Control
//
union RDC_MRC42 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC42() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC42 &Instance() { return *reinterpret_cast<volatile RDC_MRC42*>(0x40C78AA8); }
};
// Memory Region Control
//
union RDC_MRC43 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC43() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC43 &Instance() { return *reinterpret_cast<volatile RDC_MRC43*>(0x40C78AB8); }
};
// Memory Region Control
//
union RDC_MRC44 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC44() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC44 &Instance() { return *reinterpret_cast<volatile RDC_MRC44*>(0x40C78AC8); }
};
// Memory Region Control
//
union RDC_MRC45 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC45() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC45 &Instance() { return *reinterpret_cast<volatile RDC_MRC45*>(0x40C78AD8); }
};
// Memory Region Control
//
union RDC_MRC46 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC46() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC46 &Instance() { return *reinterpret_cast<volatile RDC_MRC46*>(0x40C78AE8); }
};
// Memory Region Control
//
union RDC_MRC47 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC47() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC47 &Instance() { return *reinterpret_cast<volatile RDC_MRC47*>(0x40C78AF8); }
};
// Memory Region Control
//
union RDC_MRC48 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC48() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC48 &Instance() { return *reinterpret_cast<volatile RDC_MRC48*>(0x40C78B08); }
};
// Memory Region Control
//
union RDC_MRC49 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC49() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC49 &Instance() { return *reinterpret_cast<volatile RDC_MRC49*>(0x40C78B18); }
};
// Memory Region Control
//
union RDC_MRC50 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC50() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC50 &Instance() { return *reinterpret_cast<volatile RDC_MRC50*>(0x40C78B28); }
};
// Memory Region Control
//
union RDC_MRC51 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC51() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC51 &Instance() { return *reinterpret_cast<volatile RDC_MRC51*>(0x40C78B38); }
};
// Memory Region Control
//
union RDC_MRC52 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC52() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC52 &Instance() { return *reinterpret_cast<volatile RDC_MRC52*>(0x40C78B48); }
};
// Memory Region Control
//
union RDC_MRC53 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC53() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC53 &Instance() { return *reinterpret_cast<volatile RDC_MRC53*>(0x40C78B58); }
};
// Memory Region Control
//
union RDC_MRC54 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC54() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC54 &Instance() { return *reinterpret_cast<volatile RDC_MRC54*>(0x40C78B68); }
};
// Memory Region Control
//
union RDC_MRC55 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC55() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC55 &Instance() { return *reinterpret_cast<volatile RDC_MRC55*>(0x40C78B78); }
};
// Memory Region Control
//
union RDC_MRC56 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC56() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC56 &Instance() { return *reinterpret_cast<volatile RDC_MRC56*>(0x40C78B88); }
};
// Memory Region Control
//
union RDC_MRC57 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC57() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC57 &Instance() { return *reinterpret_cast<volatile RDC_MRC57*>(0x40C78B98); }
};
// Memory Region Control
//
union RDC_MRC58 {
  
  // Enum definitions.
  enum class eD0W : uint32_t {
    eD0W_0 = 0, // Processing Domain 0 does not have Write access to the memory region
    eD0W_1 = 1, // Processing Domain 0 has Write access to the memory region
  };
  enum class eD0R : uint32_t {
    eD0R_0 = 0, // Processing Domain 0 does not have Read access to the memory region
    eD0R_1 = 1, // Processing Domain 0 has Read access to the memory region
  };
  enum class eD1W : uint32_t {
    eD1W_0 = 0, // Processing Domain 1 does not have Write access to the memory region
    eD1W_1 = 1, // Processing Domain 1 has Write access to the memory region
  };
  enum class eD1R : uint32_t {
    eD1R_0 = 0, // Processing Domain 1 does not have Read access to the memory region
    eD1R_1 = 1, // Processing Domain 1 has Read access to the memory region
  };
  enum class eENA : uint32_t {
    eENA_0 = 0, // Memory region is not defined or restricted.
    eENA_1 = 1, // Memory boundaries, domain permissions and controls are in effect.
  };
  enum class eLCK : uint32_t {
    eLCK_0 = 0, // No Lock. All fields in this register may be modified.
    eLCK_1 = 1, // Locked. No fields in this register may be modified except ENA, which may be set but not cleared.
  };
  
  // Bit field definition.
  struct {
    eD0W D0W : 1;
    eD0R D0R : 1;
    eD1W D1W : 1;
    eD1R D1R : 1;
    uint32_t _reserved_4 : 26;
    eENA ENA : 1;
    eLCK LCK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRC58() = delete;
  inline void Reset() volatile { this->value = 0x000000FF; }
  static inline volatile RDC_MRC58 &Instance() { return *reinterpret_cast<volatile RDC_MRC58*>(0x40C78BA8); }
};

// Memory Region Violation Status
//
union RDC_MRVS0 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS0 &Instance() { return *reinterpret_cast<volatile RDC_MRVS0*>(0x40C7880C); }
};
// Memory Region Violation Status
//
union RDC_MRVS1 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS1 &Instance() { return *reinterpret_cast<volatile RDC_MRVS1*>(0x40C7881C); }
};
// Memory Region Violation Status
//
union RDC_MRVS2 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS2 &Instance() { return *reinterpret_cast<volatile RDC_MRVS2*>(0x40C7882C); }
};
// Memory Region Violation Status
//
union RDC_MRVS3 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS3 &Instance() { return *reinterpret_cast<volatile RDC_MRVS3*>(0x40C7883C); }
};
// Memory Region Violation Status
//
union RDC_MRVS4 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS4 &Instance() { return *reinterpret_cast<volatile RDC_MRVS4*>(0x40C7884C); }
};
// Memory Region Violation Status
//
union RDC_MRVS5 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS5 &Instance() { return *reinterpret_cast<volatile RDC_MRVS5*>(0x40C7885C); }
};
// Memory Region Violation Status
//
union RDC_MRVS6 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS6 &Instance() { return *reinterpret_cast<volatile RDC_MRVS6*>(0x40C7886C); }
};
// Memory Region Violation Status
//
union RDC_MRVS7 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS7 &Instance() { return *reinterpret_cast<volatile RDC_MRVS7*>(0x40C7887C); }
};
// Memory Region Violation Status
//
union RDC_MRVS8 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS8 &Instance() { return *reinterpret_cast<volatile RDC_MRVS8*>(0x40C7888C); }
};
// Memory Region Violation Status
//
union RDC_MRVS9 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS9 &Instance() { return *reinterpret_cast<volatile RDC_MRVS9*>(0x40C7889C); }
};
// Memory Region Violation Status
//
union RDC_MRVS10 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS10 &Instance() { return *reinterpret_cast<volatile RDC_MRVS10*>(0x40C788AC); }
};
// Memory Region Violation Status
//
union RDC_MRVS11 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS11 &Instance() { return *reinterpret_cast<volatile RDC_MRVS11*>(0x40C788BC); }
};
// Memory Region Violation Status
//
union RDC_MRVS12 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS12 &Instance() { return *reinterpret_cast<volatile RDC_MRVS12*>(0x40C788CC); }
};
// Memory Region Violation Status
//
union RDC_MRVS13 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS13 &Instance() { return *reinterpret_cast<volatile RDC_MRVS13*>(0x40C788DC); }
};
// Memory Region Violation Status
//
union RDC_MRVS14 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS14 &Instance() { return *reinterpret_cast<volatile RDC_MRVS14*>(0x40C788EC); }
};
// Memory Region Violation Status
//
union RDC_MRVS15 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS15 &Instance() { return *reinterpret_cast<volatile RDC_MRVS15*>(0x40C788FC); }
};
// Memory Region Violation Status
//
union RDC_MRVS16 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS16 &Instance() { return *reinterpret_cast<volatile RDC_MRVS16*>(0x40C7890C); }
};
// Memory Region Violation Status
//
union RDC_MRVS17 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS17 &Instance() { return *reinterpret_cast<volatile RDC_MRVS17*>(0x40C7891C); }
};
// Memory Region Violation Status
//
union RDC_MRVS18 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS18 &Instance() { return *reinterpret_cast<volatile RDC_MRVS18*>(0x40C7892C); }
};
// Memory Region Violation Status
//
union RDC_MRVS19 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS19 &Instance() { return *reinterpret_cast<volatile RDC_MRVS19*>(0x40C7893C); }
};
// Memory Region Violation Status
//
union RDC_MRVS20 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS20 &Instance() { return *reinterpret_cast<volatile RDC_MRVS20*>(0x40C7894C); }
};
// Memory Region Violation Status
//
union RDC_MRVS21 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS21 &Instance() { return *reinterpret_cast<volatile RDC_MRVS21*>(0x40C7895C); }
};
// Memory Region Violation Status
//
union RDC_MRVS22 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS22 &Instance() { return *reinterpret_cast<volatile RDC_MRVS22*>(0x40C7896C); }
};
// Memory Region Violation Status
//
union RDC_MRVS23 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS23 &Instance() { return *reinterpret_cast<volatile RDC_MRVS23*>(0x40C7897C); }
};
// Memory Region Violation Status
//
union RDC_MRVS24 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS24 &Instance() { return *reinterpret_cast<volatile RDC_MRVS24*>(0x40C7898C); }
};
// Memory Region Violation Status
//
union RDC_MRVS25 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS25 &Instance() { return *reinterpret_cast<volatile RDC_MRVS25*>(0x40C7899C); }
};
// Memory Region Violation Status
//
union RDC_MRVS26 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS26 &Instance() { return *reinterpret_cast<volatile RDC_MRVS26*>(0x40C789AC); }
};
// Memory Region Violation Status
//
union RDC_MRVS27 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS27 &Instance() { return *reinterpret_cast<volatile RDC_MRVS27*>(0x40C789BC); }
};
// Memory Region Violation Status
//
union RDC_MRVS28 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS28 &Instance() { return *reinterpret_cast<volatile RDC_MRVS28*>(0x40C789CC); }
};
// Memory Region Violation Status
//
union RDC_MRVS29 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS29 &Instance() { return *reinterpret_cast<volatile RDC_MRVS29*>(0x40C789DC); }
};
// Memory Region Violation Status
//
union RDC_MRVS30 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS30 &Instance() { return *reinterpret_cast<volatile RDC_MRVS30*>(0x40C789EC); }
};
// Memory Region Violation Status
//
union RDC_MRVS31 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS31 &Instance() { return *reinterpret_cast<volatile RDC_MRVS31*>(0x40C789FC); }
};
// Memory Region Violation Status
//
union RDC_MRVS32 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS32 &Instance() { return *reinterpret_cast<volatile RDC_MRVS32*>(0x40C78A0C); }
};
// Memory Region Violation Status
//
union RDC_MRVS33 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS33 &Instance() { return *reinterpret_cast<volatile RDC_MRVS33*>(0x40C78A1C); }
};
// Memory Region Violation Status
//
union RDC_MRVS34 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS34 &Instance() { return *reinterpret_cast<volatile RDC_MRVS34*>(0x40C78A2C); }
};
// Memory Region Violation Status
//
union RDC_MRVS35 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS35 &Instance() { return *reinterpret_cast<volatile RDC_MRVS35*>(0x40C78A3C); }
};
// Memory Region Violation Status
//
union RDC_MRVS36 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS36 &Instance() { return *reinterpret_cast<volatile RDC_MRVS36*>(0x40C78A4C); }
};
// Memory Region Violation Status
//
union RDC_MRVS37 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS37 &Instance() { return *reinterpret_cast<volatile RDC_MRVS37*>(0x40C78A5C); }
};
// Memory Region Violation Status
//
union RDC_MRVS38 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS38 &Instance() { return *reinterpret_cast<volatile RDC_MRVS38*>(0x40C78A6C); }
};
// Memory Region Violation Status
//
union RDC_MRVS39 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS39 &Instance() { return *reinterpret_cast<volatile RDC_MRVS39*>(0x40C78A7C); }
};
// Memory Region Violation Status
//
union RDC_MRVS40 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS40 &Instance() { return *reinterpret_cast<volatile RDC_MRVS40*>(0x40C78A8C); }
};
// Memory Region Violation Status
//
union RDC_MRVS41 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS41 &Instance() { return *reinterpret_cast<volatile RDC_MRVS41*>(0x40C78A9C); }
};
// Memory Region Violation Status
//
union RDC_MRVS42 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS42 &Instance() { return *reinterpret_cast<volatile RDC_MRVS42*>(0x40C78AAC); }
};
// Memory Region Violation Status
//
union RDC_MRVS43 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS43 &Instance() { return *reinterpret_cast<volatile RDC_MRVS43*>(0x40C78ABC); }
};
// Memory Region Violation Status
//
union RDC_MRVS44 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS44 &Instance() { return *reinterpret_cast<volatile RDC_MRVS44*>(0x40C78ACC); }
};
// Memory Region Violation Status
//
union RDC_MRVS45 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS45 &Instance() { return *reinterpret_cast<volatile RDC_MRVS45*>(0x40C78ADC); }
};
// Memory Region Violation Status
//
union RDC_MRVS46 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS46 &Instance() { return *reinterpret_cast<volatile RDC_MRVS46*>(0x40C78AEC); }
};
// Memory Region Violation Status
//
union RDC_MRVS47 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS47 &Instance() { return *reinterpret_cast<volatile RDC_MRVS47*>(0x40C78AFC); }
};
// Memory Region Violation Status
//
union RDC_MRVS48 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS48 &Instance() { return *reinterpret_cast<volatile RDC_MRVS48*>(0x40C78B0C); }
};
// Memory Region Violation Status
//
union RDC_MRVS49 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS49 &Instance() { return *reinterpret_cast<volatile RDC_MRVS49*>(0x40C78B1C); }
};
// Memory Region Violation Status
//
union RDC_MRVS50 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS50 &Instance() { return *reinterpret_cast<volatile RDC_MRVS50*>(0x40C78B2C); }
};
// Memory Region Violation Status
//
union RDC_MRVS51 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS51 &Instance() { return *reinterpret_cast<volatile RDC_MRVS51*>(0x40C78B3C); }
};
// Memory Region Violation Status
//
union RDC_MRVS52 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS52 &Instance() { return *reinterpret_cast<volatile RDC_MRVS52*>(0x40C78B4C); }
};
// Memory Region Violation Status
//
union RDC_MRVS53 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS53 &Instance() { return *reinterpret_cast<volatile RDC_MRVS53*>(0x40C78B5C); }
};
// Memory Region Violation Status
//
union RDC_MRVS54 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS54 &Instance() { return *reinterpret_cast<volatile RDC_MRVS54*>(0x40C78B6C); }
};
// Memory Region Violation Status
//
union RDC_MRVS55 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS55 &Instance() { return *reinterpret_cast<volatile RDC_MRVS55*>(0x40C78B7C); }
};
// Memory Region Violation Status
//
union RDC_MRVS56 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS56 &Instance() { return *reinterpret_cast<volatile RDC_MRVS56*>(0x40C78B8C); }
};
// Memory Region Violation Status
//
union RDC_MRVS57 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS57 &Instance() { return *reinterpret_cast<volatile RDC_MRVS57*>(0x40C78B9C); }
};
// Memory Region Violation Status
//
union RDC_MRVS58 {
  
  // Enum definitions.
  enum class eVDID : uint32_t {
    eVDID_0 = 0, // Processing Domain 0
    eVDID_1 = 1, // Processing Domain 1
  };
  
  // Bit field definition.
  struct {
    eVDID VDID : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AD : 1;
    uint32_t VADR : 27;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  RDC_MRVS58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RDC_MRVS58 &Instance() { return *reinterpret_cast<volatile RDC_MRVS58*>(0x40C78BAC); }
};


} // namespace nRDC