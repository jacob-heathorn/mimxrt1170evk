#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Nested Vectored Interrupt Controller
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCM7_NVIC {


// Interrupt Set Enable Register n
union NVICISER0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER0 &Instance() { return *reinterpret_cast<volatile NVICISER0*>(0xE000E100); }
};

// Interrupt Set Enable Register n
union NVICISER1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER1 &Instance() { return *reinterpret_cast<volatile NVICISER1*>(0xE000E104); }
};

// Interrupt Set Enable Register n
union NVICISER2 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER2 &Instance() { return *reinterpret_cast<volatile NVICISER2*>(0xE000E108); }
};

// Interrupt Set Enable Register n
union NVICISER3 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER3 &Instance() { return *reinterpret_cast<volatile NVICISER3*>(0xE000E10C); }
};

// Interrupt Set Enable Register n
union NVICISER4 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER4 &Instance() { return *reinterpret_cast<volatile NVICISER4*>(0xE000E110); }
};

// Interrupt Set Enable Register n
union NVICISER5 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER5 &Instance() { return *reinterpret_cast<volatile NVICISER5*>(0xE000E114); }
};

// Interrupt Set Enable Register n
union NVICISER6 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER6 &Instance() { return *reinterpret_cast<volatile NVICISER6*>(0xE000E118); }
};

// Interrupt Clear Enable Register n
union NVICICER0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER0 &Instance() { return *reinterpret_cast<volatile NVICICER0*>(0xE000E180); }
};

// Interrupt Clear Enable Register n
union NVICICER1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER1 &Instance() { return *reinterpret_cast<volatile NVICICER1*>(0xE000E184); }
};

// Interrupt Clear Enable Register n
union NVICICER2 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER2 &Instance() { return *reinterpret_cast<volatile NVICICER2*>(0xE000E188); }
};

// Interrupt Clear Enable Register n
union NVICICER3 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER3 &Instance() { return *reinterpret_cast<volatile NVICICER3*>(0xE000E18C); }
};

// Interrupt Clear Enable Register n
union NVICICER4 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER4 &Instance() { return *reinterpret_cast<volatile NVICICER4*>(0xE000E190); }
};

// Interrupt Clear Enable Register n
union NVICICER5 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER5 &Instance() { return *reinterpret_cast<volatile NVICICER5*>(0xE000E194); }
};

// Interrupt Clear Enable Register n
union NVICICER6 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-enable bits
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER6 &Instance() { return *reinterpret_cast<volatile NVICICER6*>(0xE000E198); }
};

// Interrupt Set Pending Register n
union NVICISPR0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR0 &Instance() { return *reinterpret_cast<volatile NVICISPR0*>(0xE000E200); }
};

// Interrupt Set Pending Register n
union NVICISPR1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR1 &Instance() { return *reinterpret_cast<volatile NVICISPR1*>(0xE000E204); }
};

// Interrupt Set Pending Register n
union NVICISPR2 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR2 &Instance() { return *reinterpret_cast<volatile NVICISPR2*>(0xE000E208); }
};

// Interrupt Set Pending Register n
union NVICISPR3 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR3 &Instance() { return *reinterpret_cast<volatile NVICISPR3*>(0xE000E20C); }
};

// Interrupt Set Pending Register n
union NVICISPR4 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR4 &Instance() { return *reinterpret_cast<volatile NVICISPR4*>(0xE000E210); }
};

// Interrupt Set Pending Register n
union NVICISPR5 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR5 &Instance() { return *reinterpret_cast<volatile NVICISPR5*>(0xE000E214); }
};

// Interrupt Set Pending Register n
union NVICISPR6 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set-pending bits
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR6 &Instance() { return *reinterpret_cast<volatile NVICISPR6*>(0xE000E218); }
};

// Interrupt Clear Pending Register n
union NVICICPR0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR0 &Instance() { return *reinterpret_cast<volatile NVICICPR0*>(0xE000E280); }
};

// Interrupt Clear Pending Register n
union NVICICPR1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR1 &Instance() { return *reinterpret_cast<volatile NVICICPR1*>(0xE000E284); }
};

// Interrupt Clear Pending Register n
union NVICICPR2 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR2 &Instance() { return *reinterpret_cast<volatile NVICICPR2*>(0xE000E288); }
};

// Interrupt Clear Pending Register n
union NVICICPR3 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR3 &Instance() { return *reinterpret_cast<volatile NVICICPR3*>(0xE000E28C); }
};

// Interrupt Clear Pending Register n
union NVICICPR4 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR4 &Instance() { return *reinterpret_cast<volatile NVICICPR4*>(0xE000E290); }
};

// Interrupt Clear Pending Register n
union NVICICPR5 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR5 &Instance() { return *reinterpret_cast<volatile NVICICPR5*>(0xE000E294); }
};

// Interrupt Clear Pending Register n
union NVICICPR6 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt clear-pending bits
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR6 &Instance() { return *reinterpret_cast<volatile NVICICPR6*>(0xE000E298); }
};

// Interrupt Active bit Register n
union NVICIABR0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR0 &Instance() { return *reinterpret_cast<volatile NVICIABR0*>(0xE000E300); }
};

// Interrupt Active bit Register n
union NVICIABR1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR1 &Instance() { return *reinterpret_cast<volatile NVICIABR1*>(0xE000E304); }
};

// Interrupt Active bit Register n
union NVICIABR2 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR2 &Instance() { return *reinterpret_cast<volatile NVICIABR2*>(0xE000E308); }
};

// Interrupt Active bit Register n
union NVICIABR3 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR3 &Instance() { return *reinterpret_cast<volatile NVICIABR3*>(0xE000E30C); }
};

// Interrupt Active bit Register n
union NVICIABR4 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR4 &Instance() { return *reinterpret_cast<volatile NVICIABR4*>(0xE000E310); }
};

// Interrupt Active bit Register n
union NVICIABR5 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR5 &Instance() { return *reinterpret_cast<volatile NVICIABR5*>(0xE000E314); }
};

// Interrupt Active bit Register n
union NVICIABR6 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt active flags
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR6 &Instance() { return *reinterpret_cast<volatile NVICIABR6*>(0xE000E318); }
};

// Interrupt Priority Register 0
union NVICIP0 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 0
    uint32_t PRI0 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP0 &Instance() { return *reinterpret_cast<volatile NVICIP0*>(0xE000E400); }
};

// Interrupt Priority Register 1
union NVICIP1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 1
    uint32_t PRI1 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP1 &Instance() { return *reinterpret_cast<volatile NVICIP1*>(0xE000E401); }
};

// Interrupt Priority Register 2
union NVICIP2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 2
    uint32_t PRI2 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP2 &Instance() { return *reinterpret_cast<volatile NVICIP2*>(0xE000E402); }
};

// Interrupt Priority Register 3
union NVICIP3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 3
    uint32_t PRI3 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP3 &Instance() { return *reinterpret_cast<volatile NVICIP3*>(0xE000E403); }
};

// Interrupt Priority Register 4
union NVICIP4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 4
    uint32_t PRI4 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP4 &Instance() { return *reinterpret_cast<volatile NVICIP4*>(0xE000E404); }
};

// Interrupt Priority Register 5
union NVICIP5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 5
    uint32_t PRI5 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP5 &Instance() { return *reinterpret_cast<volatile NVICIP5*>(0xE000E405); }
};

// Interrupt Priority Register 6
union NVICIP6 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 6
    uint32_t PRI6 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP6 &Instance() { return *reinterpret_cast<volatile NVICIP6*>(0xE000E406); }
};

// Interrupt Priority Register 7
union NVICIP7 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 7
    uint32_t PRI7 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP7 &Instance() { return *reinterpret_cast<volatile NVICIP7*>(0xE000E407); }
};

// Interrupt Priority Register 8
union NVICIP8 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 8
    uint32_t PRI8 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP8 &Instance() { return *reinterpret_cast<volatile NVICIP8*>(0xE000E408); }
};

// Interrupt Priority Register 9
union NVICIP9 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 9
    uint32_t PRI9 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP9 &Instance() { return *reinterpret_cast<volatile NVICIP9*>(0xE000E409); }
};

// Interrupt Priority Register 10
union NVICIP10 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 10
    uint32_t PRI10 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP10 &Instance() { return *reinterpret_cast<volatile NVICIP10*>(0xE000E40A); }
};

// Interrupt Priority Register 11
union NVICIP11 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 11
    uint32_t PRI11 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP11 &Instance() { return *reinterpret_cast<volatile NVICIP11*>(0xE000E40B); }
};

// Interrupt Priority Register 12
union NVICIP12 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 12
    uint32_t PRI12 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP12 &Instance() { return *reinterpret_cast<volatile NVICIP12*>(0xE000E40C); }
};

// Interrupt Priority Register 13
union NVICIP13 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 13
    uint32_t PRI13 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP13 &Instance() { return *reinterpret_cast<volatile NVICIP13*>(0xE000E40D); }
};

// Interrupt Priority Register 14
union NVICIP14 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 14
    uint32_t PRI14 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP14 &Instance() { return *reinterpret_cast<volatile NVICIP14*>(0xE000E40E); }
};

// Interrupt Priority Register 15
union NVICIP15 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 15
    uint32_t PRI15 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP15 &Instance() { return *reinterpret_cast<volatile NVICIP15*>(0xE000E40F); }
};

// Interrupt Priority Register 16
union NVICIP16 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 16
    uint32_t PRI16 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP16 &Instance() { return *reinterpret_cast<volatile NVICIP16*>(0xE000E410); }
};

// Interrupt Priority Register 17
union NVICIP17 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 17
    uint32_t PRI17 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP17 &Instance() { return *reinterpret_cast<volatile NVICIP17*>(0xE000E411); }
};

// Interrupt Priority Register 18
union NVICIP18 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 18
    uint32_t PRI18 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP18 &Instance() { return *reinterpret_cast<volatile NVICIP18*>(0xE000E412); }
};

// Interrupt Priority Register 19
union NVICIP19 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 19
    uint32_t PRI19 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP19 &Instance() { return *reinterpret_cast<volatile NVICIP19*>(0xE000E413); }
};

// Interrupt Priority Register 20
union NVICIP20 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 20
    uint32_t PRI20 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP20 &Instance() { return *reinterpret_cast<volatile NVICIP20*>(0xE000E414); }
};

// Interrupt Priority Register 21
union NVICIP21 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 21
    uint32_t PRI21 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP21 &Instance() { return *reinterpret_cast<volatile NVICIP21*>(0xE000E415); }
};

// Interrupt Priority Register 22
union NVICIP22 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 22
    uint32_t PRI22 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP22 &Instance() { return *reinterpret_cast<volatile NVICIP22*>(0xE000E416); }
};

// Interrupt Priority Register 23
union NVICIP23 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 23
    uint32_t PRI23 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP23 &Instance() { return *reinterpret_cast<volatile NVICIP23*>(0xE000E417); }
};

// Interrupt Priority Register 24
union NVICIP24 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 24
    uint32_t PRI24 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP24 &Instance() { return *reinterpret_cast<volatile NVICIP24*>(0xE000E418); }
};

// Interrupt Priority Register 25
union NVICIP25 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 25
    uint32_t PRI25 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP25 &Instance() { return *reinterpret_cast<volatile NVICIP25*>(0xE000E419); }
};

// Interrupt Priority Register 26
union NVICIP26 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 26
    uint32_t PRI26 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP26 &Instance() { return *reinterpret_cast<volatile NVICIP26*>(0xE000E41A); }
};

// Interrupt Priority Register 27
union NVICIP27 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 27
    uint32_t PRI27 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP27 &Instance() { return *reinterpret_cast<volatile NVICIP27*>(0xE000E41B); }
};

// Interrupt Priority Register 28
union NVICIP28 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 28
    uint32_t PRI28 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP28 &Instance() { return *reinterpret_cast<volatile NVICIP28*>(0xE000E41C); }
};

// Interrupt Priority Register 29
union NVICIP29 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 29
    uint32_t PRI29 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP29 &Instance() { return *reinterpret_cast<volatile NVICIP29*>(0xE000E41D); }
};

// Interrupt Priority Register 30
union NVICIP30 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 30
    uint32_t PRI30 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP30 &Instance() { return *reinterpret_cast<volatile NVICIP30*>(0xE000E41E); }
};

// Interrupt Priority Register 31
union NVICIP31 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 31
    uint32_t PRI31 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP31 &Instance() { return *reinterpret_cast<volatile NVICIP31*>(0xE000E41F); }
};

// Interrupt Priority Register 32
union NVICIP32 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 32
    uint32_t PRI32 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP32 &Instance() { return *reinterpret_cast<volatile NVICIP32*>(0xE000E420); }
};

// Interrupt Priority Register 33
union NVICIP33 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 33
    uint32_t PRI33 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP33 &Instance() { return *reinterpret_cast<volatile NVICIP33*>(0xE000E421); }
};

// Interrupt Priority Register 34
union NVICIP34 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 34
    uint32_t PRI34 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP34 &Instance() { return *reinterpret_cast<volatile NVICIP34*>(0xE000E422); }
};

// Interrupt Priority Register 35
union NVICIP35 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 35
    uint32_t PRI35 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP35 &Instance() { return *reinterpret_cast<volatile NVICIP35*>(0xE000E423); }
};

// Interrupt Priority Register 36
union NVICIP36 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 36
    uint32_t PRI36 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP36 &Instance() { return *reinterpret_cast<volatile NVICIP36*>(0xE000E424); }
};

// Interrupt Priority Register 37
union NVICIP37 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 37
    uint32_t PRI37 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP37 &Instance() { return *reinterpret_cast<volatile NVICIP37*>(0xE000E425); }
};

// Interrupt Priority Register 38
union NVICIP38 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 38
    uint32_t PRI38 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP38 &Instance() { return *reinterpret_cast<volatile NVICIP38*>(0xE000E426); }
};

// Interrupt Priority Register 39
union NVICIP39 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 39
    uint32_t PRI39 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP39 &Instance() { return *reinterpret_cast<volatile NVICIP39*>(0xE000E427); }
};

// Interrupt Priority Register 40
union NVICIP40 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 40
    uint32_t PRI40 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP40 &Instance() { return *reinterpret_cast<volatile NVICIP40*>(0xE000E428); }
};

// Interrupt Priority Register 41
union NVICIP41 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 41
    uint32_t PRI41 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP41 &Instance() { return *reinterpret_cast<volatile NVICIP41*>(0xE000E429); }
};

// Interrupt Priority Register 42
union NVICIP42 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 42
    uint32_t PRI42 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP42 &Instance() { return *reinterpret_cast<volatile NVICIP42*>(0xE000E42A); }
};

// Interrupt Priority Register 43
union NVICIP43 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 43
    uint32_t PRI43 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP43 &Instance() { return *reinterpret_cast<volatile NVICIP43*>(0xE000E42B); }
};

// Interrupt Priority Register 44
union NVICIP44 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 44
    uint32_t PRI44 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP44 &Instance() { return *reinterpret_cast<volatile NVICIP44*>(0xE000E42C); }
};

// Interrupt Priority Register 45
union NVICIP45 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 45
    uint32_t PRI45 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP45 &Instance() { return *reinterpret_cast<volatile NVICIP45*>(0xE000E42D); }
};

// Interrupt Priority Register 46
union NVICIP46 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 46
    uint32_t PRI46 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP46 &Instance() { return *reinterpret_cast<volatile NVICIP46*>(0xE000E42E); }
};

// Interrupt Priority Register 47
union NVICIP47 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 47
    uint32_t PRI47 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP47 &Instance() { return *reinterpret_cast<volatile NVICIP47*>(0xE000E42F); }
};

// Interrupt Priority Register 48
union NVICIP48 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 48
    uint32_t PRI48 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP48 &Instance() { return *reinterpret_cast<volatile NVICIP48*>(0xE000E430); }
};

// Interrupt Priority Register 49
union NVICIP49 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 49
    uint32_t PRI49 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP49 &Instance() { return *reinterpret_cast<volatile NVICIP49*>(0xE000E431); }
};

// Interrupt Priority Register 50
union NVICIP50 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 50
    uint32_t PRI50 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP50 &Instance() { return *reinterpret_cast<volatile NVICIP50*>(0xE000E432); }
};

// Interrupt Priority Register 51
union NVICIP51 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 51
    uint32_t PRI51 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP51 &Instance() { return *reinterpret_cast<volatile NVICIP51*>(0xE000E433); }
};

// Interrupt Priority Register 52
union NVICIP52 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 52
    uint32_t PRI52 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP52 &Instance() { return *reinterpret_cast<volatile NVICIP52*>(0xE000E434); }
};

// Interrupt Priority Register 53
union NVICIP53 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 53
    uint32_t PRI53 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP53 &Instance() { return *reinterpret_cast<volatile NVICIP53*>(0xE000E435); }
};

// Interrupt Priority Register 54
union NVICIP54 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 54
    uint32_t PRI54 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP54 &Instance() { return *reinterpret_cast<volatile NVICIP54*>(0xE000E436); }
};

// Interrupt Priority Register 55
union NVICIP55 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 55
    uint32_t PRI55 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP55 &Instance() { return *reinterpret_cast<volatile NVICIP55*>(0xE000E437); }
};

// Interrupt Priority Register 56
union NVICIP56 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 56
    uint32_t PRI56 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP56 &Instance() { return *reinterpret_cast<volatile NVICIP56*>(0xE000E438); }
};

// Interrupt Priority Register 57
union NVICIP57 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 57
    uint32_t PRI57 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP57 &Instance() { return *reinterpret_cast<volatile NVICIP57*>(0xE000E439); }
};

// Interrupt Priority Register 58
union NVICIP58 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 58
    uint32_t PRI58 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP58 &Instance() { return *reinterpret_cast<volatile NVICIP58*>(0xE000E43A); }
};

// Interrupt Priority Register 59
union NVICIP59 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 59
    uint32_t PRI59 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP59 &Instance() { return *reinterpret_cast<volatile NVICIP59*>(0xE000E43B); }
};

// Interrupt Priority Register 60
union NVICIP60 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 60
    uint32_t PRI60 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP60 &Instance() { return *reinterpret_cast<volatile NVICIP60*>(0xE000E43C); }
};

// Interrupt Priority Register 61
union NVICIP61 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 61
    uint32_t PRI61 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP61 &Instance() { return *reinterpret_cast<volatile NVICIP61*>(0xE000E43D); }
};

// Interrupt Priority Register 62
union NVICIP62 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 62
    uint32_t PRI62 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP62 &Instance() { return *reinterpret_cast<volatile NVICIP62*>(0xE000E43E); }
};

// Interrupt Priority Register 63
union NVICIP63 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 63
    uint32_t PRI63 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP63 &Instance() { return *reinterpret_cast<volatile NVICIP63*>(0xE000E43F); }
};

// Interrupt Priority Register 64
union NVICIP64 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 64
    uint32_t PRI64 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP64 &Instance() { return *reinterpret_cast<volatile NVICIP64*>(0xE000E440); }
};

// Interrupt Priority Register 65
union NVICIP65 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 65
    uint32_t PRI65 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP65() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP65 &Instance() { return *reinterpret_cast<volatile NVICIP65*>(0xE000E441); }
};

// Interrupt Priority Register 66
union NVICIP66 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 66
    uint32_t PRI66 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP66() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP66 &Instance() { return *reinterpret_cast<volatile NVICIP66*>(0xE000E442); }
};

// Interrupt Priority Register 67
union NVICIP67 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 67
    uint32_t PRI67 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP67() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP67 &Instance() { return *reinterpret_cast<volatile NVICIP67*>(0xE000E443); }
};

// Interrupt Priority Register 68
union NVICIP68 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 68
    uint32_t PRI68 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP68() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP68 &Instance() { return *reinterpret_cast<volatile NVICIP68*>(0xE000E444); }
};

// Interrupt Priority Register 69
union NVICIP69 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 69
    uint32_t PRI69 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP69() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP69 &Instance() { return *reinterpret_cast<volatile NVICIP69*>(0xE000E445); }
};

// Interrupt Priority Register 70
union NVICIP70 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 70
    uint32_t PRI70 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP70() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP70 &Instance() { return *reinterpret_cast<volatile NVICIP70*>(0xE000E446); }
};

// Interrupt Priority Register 71
union NVICIP71 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 71
    uint32_t PRI71 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP71() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP71 &Instance() { return *reinterpret_cast<volatile NVICIP71*>(0xE000E447); }
};

// Interrupt Priority Register 72
union NVICIP72 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 72
    uint32_t PRI72 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP72() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP72 &Instance() { return *reinterpret_cast<volatile NVICIP72*>(0xE000E448); }
};

// Interrupt Priority Register 73
union NVICIP73 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 73
    uint32_t PRI73 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP73() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP73 &Instance() { return *reinterpret_cast<volatile NVICIP73*>(0xE000E449); }
};

// Interrupt Priority Register 74
union NVICIP74 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 74
    uint32_t PRI74 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP74() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP74 &Instance() { return *reinterpret_cast<volatile NVICIP74*>(0xE000E44A); }
};

// Interrupt Priority Register 75
union NVICIP75 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 75
    uint32_t PRI75 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP75() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP75 &Instance() { return *reinterpret_cast<volatile NVICIP75*>(0xE000E44B); }
};

// Interrupt Priority Register 76
union NVICIP76 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 76
    uint32_t PRI76 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP76() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP76 &Instance() { return *reinterpret_cast<volatile NVICIP76*>(0xE000E44C); }
};

// Interrupt Priority Register 77
union NVICIP77 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 77
    uint32_t PRI77 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP77() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP77 &Instance() { return *reinterpret_cast<volatile NVICIP77*>(0xE000E44D); }
};

// Interrupt Priority Register 78
union NVICIP78 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 78
    uint32_t PRI78 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP78() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP78 &Instance() { return *reinterpret_cast<volatile NVICIP78*>(0xE000E44E); }
};

// Interrupt Priority Register 79
union NVICIP79 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 79
    uint32_t PRI79 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP79() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP79 &Instance() { return *reinterpret_cast<volatile NVICIP79*>(0xE000E44F); }
};

// Interrupt Priority Register 80
union NVICIP80 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 80
    uint32_t PRI80 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP80() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP80 &Instance() { return *reinterpret_cast<volatile NVICIP80*>(0xE000E450); }
};

// Interrupt Priority Register 81
union NVICIP81 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 81
    uint32_t PRI81 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP81() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP81 &Instance() { return *reinterpret_cast<volatile NVICIP81*>(0xE000E451); }
};

// Interrupt Priority Register 82
union NVICIP82 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 82
    uint32_t PRI82 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP82() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP82 &Instance() { return *reinterpret_cast<volatile NVICIP82*>(0xE000E452); }
};

// Interrupt Priority Register 83
union NVICIP83 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 83
    uint32_t PRI83 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP83() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP83 &Instance() { return *reinterpret_cast<volatile NVICIP83*>(0xE000E453); }
};

// Interrupt Priority Register 84
union NVICIP84 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 84
    uint32_t PRI84 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP84() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP84 &Instance() { return *reinterpret_cast<volatile NVICIP84*>(0xE000E454); }
};

// Interrupt Priority Register 85
union NVICIP85 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 85
    uint32_t PRI85 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP85() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP85 &Instance() { return *reinterpret_cast<volatile NVICIP85*>(0xE000E455); }
};

// Interrupt Priority Register 86
union NVICIP86 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 86
    uint32_t PRI86 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP86() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP86 &Instance() { return *reinterpret_cast<volatile NVICIP86*>(0xE000E456); }
};

// Interrupt Priority Register 87
union NVICIP87 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 87
    uint32_t PRI87 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP87() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP87 &Instance() { return *reinterpret_cast<volatile NVICIP87*>(0xE000E457); }
};

// Interrupt Priority Register 88
union NVICIP88 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 88
    uint32_t PRI88 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP88() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP88 &Instance() { return *reinterpret_cast<volatile NVICIP88*>(0xE000E458); }
};

// Interrupt Priority Register 89
union NVICIP89 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 89
    uint32_t PRI89 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP89() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP89 &Instance() { return *reinterpret_cast<volatile NVICIP89*>(0xE000E459); }
};

// Interrupt Priority Register 90
union NVICIP90 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 90
    uint32_t PRI90 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP90() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP90 &Instance() { return *reinterpret_cast<volatile NVICIP90*>(0xE000E45A); }
};

// Interrupt Priority Register 91
union NVICIP91 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 91
    uint32_t PRI91 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP91() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP91 &Instance() { return *reinterpret_cast<volatile NVICIP91*>(0xE000E45B); }
};

// Interrupt Priority Register 92
union NVICIP92 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 92
    uint32_t PRI92 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP92() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP92 &Instance() { return *reinterpret_cast<volatile NVICIP92*>(0xE000E45C); }
};

// Interrupt Priority Register 93
union NVICIP93 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 93
    uint32_t PRI93 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP93() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP93 &Instance() { return *reinterpret_cast<volatile NVICIP93*>(0xE000E45D); }
};

// Interrupt Priority Register 94
union NVICIP94 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 94
    uint32_t PRI94 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP94() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP94 &Instance() { return *reinterpret_cast<volatile NVICIP94*>(0xE000E45E); }
};

// Interrupt Priority Register 95
union NVICIP95 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 95
    uint32_t PRI95 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP95() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP95 &Instance() { return *reinterpret_cast<volatile NVICIP95*>(0xE000E45F); }
};

// Interrupt Priority Register 96
union NVICIP96 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 96
    uint32_t PRI96 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP96() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP96 &Instance() { return *reinterpret_cast<volatile NVICIP96*>(0xE000E460); }
};

// Interrupt Priority Register 97
union NVICIP97 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 97
    uint32_t PRI97 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP97() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP97 &Instance() { return *reinterpret_cast<volatile NVICIP97*>(0xE000E461); }
};

// Interrupt Priority Register 98
union NVICIP98 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 98
    uint32_t PRI98 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP98() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP98 &Instance() { return *reinterpret_cast<volatile NVICIP98*>(0xE000E462); }
};

// Interrupt Priority Register 99
union NVICIP99 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 99
    uint32_t PRI99 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP99() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP99 &Instance() { return *reinterpret_cast<volatile NVICIP99*>(0xE000E463); }
};

// Interrupt Priority Register 100
union NVICIP100 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 100
    uint32_t PRI100 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP100() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP100 &Instance() { return *reinterpret_cast<volatile NVICIP100*>(0xE000E464); }
};

// Interrupt Priority Register 101
union NVICIP101 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 101
    uint32_t PRI101 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP101() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP101 &Instance() { return *reinterpret_cast<volatile NVICIP101*>(0xE000E465); }
};

// Interrupt Priority Register 102
union NVICIP102 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 102
    uint32_t PRI102 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP102() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP102 &Instance() { return *reinterpret_cast<volatile NVICIP102*>(0xE000E466); }
};

// Interrupt Priority Register 103
union NVICIP103 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 103
    uint32_t PRI103 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP103() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP103 &Instance() { return *reinterpret_cast<volatile NVICIP103*>(0xE000E467); }
};

// Interrupt Priority Register 104
union NVICIP104 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 104
    uint32_t PRI104 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP104() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP104 &Instance() { return *reinterpret_cast<volatile NVICIP104*>(0xE000E468); }
};

// Interrupt Priority Register 105
union NVICIP105 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 105
    uint32_t PRI105 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP105() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP105 &Instance() { return *reinterpret_cast<volatile NVICIP105*>(0xE000E469); }
};

// Interrupt Priority Register 106
union NVICIP106 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 106
    uint32_t PRI106 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP106() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP106 &Instance() { return *reinterpret_cast<volatile NVICIP106*>(0xE000E46A); }
};

// Interrupt Priority Register 107
union NVICIP107 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 107
    uint32_t PRI107 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP107() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP107 &Instance() { return *reinterpret_cast<volatile NVICIP107*>(0xE000E46B); }
};

// Interrupt Priority Register 108
union NVICIP108 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 108
    uint32_t PRI108 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP108() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP108 &Instance() { return *reinterpret_cast<volatile NVICIP108*>(0xE000E46C); }
};

// Interrupt Priority Register 109
union NVICIP109 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 109
    uint32_t PRI109 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP109() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP109 &Instance() { return *reinterpret_cast<volatile NVICIP109*>(0xE000E46D); }
};

// Interrupt Priority Register 110
union NVICIP110 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 110
    uint32_t PRI110 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP110() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP110 &Instance() { return *reinterpret_cast<volatile NVICIP110*>(0xE000E46E); }
};

// Interrupt Priority Register 111
union NVICIP111 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 111
    uint32_t PRI111 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP111() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP111 &Instance() { return *reinterpret_cast<volatile NVICIP111*>(0xE000E46F); }
};

// Interrupt Priority Register 112
union NVICIP112 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 112
    uint32_t PRI112 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP112() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP112 &Instance() { return *reinterpret_cast<volatile NVICIP112*>(0xE000E470); }
};

// Interrupt Priority Register 113
union NVICIP113 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 113
    uint32_t PRI113 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP113() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP113 &Instance() { return *reinterpret_cast<volatile NVICIP113*>(0xE000E471); }
};

// Interrupt Priority Register 114
union NVICIP114 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 114
    uint32_t PRI114 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP114() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP114 &Instance() { return *reinterpret_cast<volatile NVICIP114*>(0xE000E472); }
};

// Interrupt Priority Register 115
union NVICIP115 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 115
    uint32_t PRI115 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP115() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP115 &Instance() { return *reinterpret_cast<volatile NVICIP115*>(0xE000E473); }
};

// Interrupt Priority Register 116
union NVICIP116 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 116
    uint32_t PRI116 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP116() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP116 &Instance() { return *reinterpret_cast<volatile NVICIP116*>(0xE000E474); }
};

// Interrupt Priority Register 117
union NVICIP117 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 117
    uint32_t PRI117 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP117() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP117 &Instance() { return *reinterpret_cast<volatile NVICIP117*>(0xE000E475); }
};

// Interrupt Priority Register 118
union NVICIP118 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 118
    uint32_t PRI118 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP118() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP118 &Instance() { return *reinterpret_cast<volatile NVICIP118*>(0xE000E476); }
};

// Interrupt Priority Register 119
union NVICIP119 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 119
    uint32_t PRI119 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP119() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP119 &Instance() { return *reinterpret_cast<volatile NVICIP119*>(0xE000E477); }
};

// Interrupt Priority Register 120
union NVICIP120 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 120
    uint32_t PRI120 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP120() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP120 &Instance() { return *reinterpret_cast<volatile NVICIP120*>(0xE000E478); }
};

// Interrupt Priority Register 121
union NVICIP121 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 121
    uint32_t PRI121 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP121() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP121 &Instance() { return *reinterpret_cast<volatile NVICIP121*>(0xE000E479); }
};

// Interrupt Priority Register 122
union NVICIP122 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 122
    uint32_t PRI122 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP122() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP122 &Instance() { return *reinterpret_cast<volatile NVICIP122*>(0xE000E47A); }
};

// Interrupt Priority Register 123
union NVICIP123 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 123
    uint32_t PRI123 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP123() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP123 &Instance() { return *reinterpret_cast<volatile NVICIP123*>(0xE000E47B); }
};

// Interrupt Priority Register 124
union NVICIP124 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 124
    uint32_t PRI124 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP124() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP124 &Instance() { return *reinterpret_cast<volatile NVICIP124*>(0xE000E47C); }
};

// Interrupt Priority Register 125
union NVICIP125 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 125
    uint32_t PRI125 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP125() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP125 &Instance() { return *reinterpret_cast<volatile NVICIP125*>(0xE000E47D); }
};

// Interrupt Priority Register 126
union NVICIP126 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 126
    uint32_t PRI126 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP126() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP126 &Instance() { return *reinterpret_cast<volatile NVICIP126*>(0xE000E47E); }
};

// Interrupt Priority Register 127
union NVICIP127 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 127
    uint32_t PRI127 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP127() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP127 &Instance() { return *reinterpret_cast<volatile NVICIP127*>(0xE000E47F); }
};

// Interrupt Priority Register 128
union NVICIP128 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 128
    uint32_t PRI128 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP128() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP128 &Instance() { return *reinterpret_cast<volatile NVICIP128*>(0xE000E480); }
};

// Interrupt Priority Register 129
union NVICIP129 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 129
    uint32_t PRI129 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP129() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP129 &Instance() { return *reinterpret_cast<volatile NVICIP129*>(0xE000E481); }
};

// Interrupt Priority Register 130
union NVICIP130 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 130
    uint32_t PRI130 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP130() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP130 &Instance() { return *reinterpret_cast<volatile NVICIP130*>(0xE000E482); }
};

// Interrupt Priority Register 131
union NVICIP131 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 131
    uint32_t PRI131 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP131() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP131 &Instance() { return *reinterpret_cast<volatile NVICIP131*>(0xE000E483); }
};

// Interrupt Priority Register 132
union NVICIP132 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 132
    uint32_t PRI132 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP132() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP132 &Instance() { return *reinterpret_cast<volatile NVICIP132*>(0xE000E484); }
};

// Interrupt Priority Register 133
union NVICIP133 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 133
    uint32_t PRI133 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP133() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP133 &Instance() { return *reinterpret_cast<volatile NVICIP133*>(0xE000E485); }
};

// Interrupt Priority Register 134
union NVICIP134 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 134
    uint32_t PRI134 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP134() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP134 &Instance() { return *reinterpret_cast<volatile NVICIP134*>(0xE000E486); }
};

// Interrupt Priority Register 135
union NVICIP135 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 135
    uint32_t PRI135 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP135() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP135 &Instance() { return *reinterpret_cast<volatile NVICIP135*>(0xE000E487); }
};

// Interrupt Priority Register 136
union NVICIP136 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 136
    uint32_t PRI136 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP136() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP136 &Instance() { return *reinterpret_cast<volatile NVICIP136*>(0xE000E488); }
};

// Interrupt Priority Register 137
union NVICIP137 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 137
    uint32_t PRI137 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP137() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP137 &Instance() { return *reinterpret_cast<volatile NVICIP137*>(0xE000E489); }
};

// Interrupt Priority Register 138
union NVICIP138 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 138
    uint32_t PRI138 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP138() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP138 &Instance() { return *reinterpret_cast<volatile NVICIP138*>(0xE000E48A); }
};

// Interrupt Priority Register 139
union NVICIP139 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 139
    uint32_t PRI139 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP139() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP139 &Instance() { return *reinterpret_cast<volatile NVICIP139*>(0xE000E48B); }
};

// Interrupt Priority Register 140
union NVICIP140 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 140
    uint32_t PRI140 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP140() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP140 &Instance() { return *reinterpret_cast<volatile NVICIP140*>(0xE000E48C); }
};

// Interrupt Priority Register 141
union NVICIP141 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 141
    uint32_t PRI141 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP141() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP141 &Instance() { return *reinterpret_cast<volatile NVICIP141*>(0xE000E48D); }
};

// Interrupt Priority Register 142
union NVICIP142 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 142
    uint32_t PRI142 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP142() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP142 &Instance() { return *reinterpret_cast<volatile NVICIP142*>(0xE000E48E); }
};

// Interrupt Priority Register 143
union NVICIP143 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 143
    uint32_t PRI143 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP143() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP143 &Instance() { return *reinterpret_cast<volatile NVICIP143*>(0xE000E48F); }
};

// Interrupt Priority Register 144
union NVICIP144 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 144
    uint32_t PRI144 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP144() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP144 &Instance() { return *reinterpret_cast<volatile NVICIP144*>(0xE000E490); }
};

// Interrupt Priority Register 145
union NVICIP145 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 145
    uint32_t PRI145 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP145() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP145 &Instance() { return *reinterpret_cast<volatile NVICIP145*>(0xE000E491); }
};

// Interrupt Priority Register 146
union NVICIP146 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 146
    uint32_t PRI146 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP146() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP146 &Instance() { return *reinterpret_cast<volatile NVICIP146*>(0xE000E492); }
};

// Interrupt Priority Register 147
union NVICIP147 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 147
    uint32_t PRI147 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP147() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP147 &Instance() { return *reinterpret_cast<volatile NVICIP147*>(0xE000E493); }
};

// Interrupt Priority Register 148
union NVICIP148 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 148
    uint32_t PRI148 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP148() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP148 &Instance() { return *reinterpret_cast<volatile NVICIP148*>(0xE000E494); }
};

// Interrupt Priority Register 149
union NVICIP149 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 149
    uint32_t PRI149 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP149() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP149 &Instance() { return *reinterpret_cast<volatile NVICIP149*>(0xE000E495); }
};

// Interrupt Priority Register 150
union NVICIP150 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 150
    uint32_t PRI150 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP150() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP150 &Instance() { return *reinterpret_cast<volatile NVICIP150*>(0xE000E496); }
};

// Interrupt Priority Register 151
union NVICIP151 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 151
    uint32_t PRI151 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP151() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP151 &Instance() { return *reinterpret_cast<volatile NVICIP151*>(0xE000E497); }
};

// Interrupt Priority Register 152
union NVICIP152 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 152
    uint32_t PRI152 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP152() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP152 &Instance() { return *reinterpret_cast<volatile NVICIP152*>(0xE000E498); }
};

// Interrupt Priority Register 153
union NVICIP153 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 153
    uint32_t PRI153 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP153() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP153 &Instance() { return *reinterpret_cast<volatile NVICIP153*>(0xE000E499); }
};

// Interrupt Priority Register 154
union NVICIP154 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 154
    uint32_t PRI154 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP154() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP154 &Instance() { return *reinterpret_cast<volatile NVICIP154*>(0xE000E49A); }
};

// Interrupt Priority Register 155
union NVICIP155 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 155
    uint32_t PRI155 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP155() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP155 &Instance() { return *reinterpret_cast<volatile NVICIP155*>(0xE000E49B); }
};

// Interrupt Priority Register 156
union NVICIP156 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 156
    uint32_t PRI156 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP156() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP156 &Instance() { return *reinterpret_cast<volatile NVICIP156*>(0xE000E49C); }
};

// Interrupt Priority Register 157
union NVICIP157 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 157
    uint32_t PRI157 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP157() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP157 &Instance() { return *reinterpret_cast<volatile NVICIP157*>(0xE000E49D); }
};

// Interrupt Priority Register 158
union NVICIP158 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 158
    uint32_t PRI158 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP158() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP158 &Instance() { return *reinterpret_cast<volatile NVICIP158*>(0xE000E49E); }
};

// Interrupt Priority Register 159
union NVICIP159 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 159
    uint32_t PRI159 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP159() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP159 &Instance() { return *reinterpret_cast<volatile NVICIP159*>(0xE000E49F); }
};

// Interrupt Priority Register 160
union NVICIP160 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 160
    uint32_t PRI160 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP160() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP160 &Instance() { return *reinterpret_cast<volatile NVICIP160*>(0xE000E4A0); }
};

// Interrupt Priority Register 161
union NVICIP161 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 161
    uint32_t PRI161 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP161() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP161 &Instance() { return *reinterpret_cast<volatile NVICIP161*>(0xE000E4A1); }
};

// Interrupt Priority Register 162
union NVICIP162 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 162
    uint32_t PRI162 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP162() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP162 &Instance() { return *reinterpret_cast<volatile NVICIP162*>(0xE000E4A2); }
};

// Interrupt Priority Register 163
union NVICIP163 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 163
    uint32_t PRI163 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP163() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP163 &Instance() { return *reinterpret_cast<volatile NVICIP163*>(0xE000E4A3); }
};

// Interrupt Priority Register 164
union NVICIP164 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 164
    uint32_t PRI164 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP164() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP164 &Instance() { return *reinterpret_cast<volatile NVICIP164*>(0xE000E4A4); }
};

// Interrupt Priority Register 165
union NVICIP165 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 165
    uint32_t PRI165 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP165() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP165 &Instance() { return *reinterpret_cast<volatile NVICIP165*>(0xE000E4A5); }
};

// Interrupt Priority Register 166
union NVICIP166 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 166
    uint32_t PRI166 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP166() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP166 &Instance() { return *reinterpret_cast<volatile NVICIP166*>(0xE000E4A6); }
};

// Interrupt Priority Register 167
union NVICIP167 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 167
    uint32_t PRI167 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP167() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP167 &Instance() { return *reinterpret_cast<volatile NVICIP167*>(0xE000E4A7); }
};

// Interrupt Priority Register 168
union NVICIP168 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 168
    uint32_t PRI168 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP168() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP168 &Instance() { return *reinterpret_cast<volatile NVICIP168*>(0xE000E4A8); }
};

// Interrupt Priority Register 169
union NVICIP169 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 169
    uint32_t PRI169 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP169() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP169 &Instance() { return *reinterpret_cast<volatile NVICIP169*>(0xE000E4A9); }
};

// Interrupt Priority Register 170
union NVICIP170 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 170
    uint32_t PRI170 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP170() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP170 &Instance() { return *reinterpret_cast<volatile NVICIP170*>(0xE000E4AA); }
};

// Interrupt Priority Register 171
union NVICIP171 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 171
    uint32_t PRI171 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP171() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP171 &Instance() { return *reinterpret_cast<volatile NVICIP171*>(0xE000E4AB); }
};

// Interrupt Priority Register 172
union NVICIP172 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 172
    uint32_t PRI172 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP172() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP172 &Instance() { return *reinterpret_cast<volatile NVICIP172*>(0xE000E4AC); }
};

// Interrupt Priority Register 173
union NVICIP173 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 173
    uint32_t PRI173 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP173() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP173 &Instance() { return *reinterpret_cast<volatile NVICIP173*>(0xE000E4AD); }
};

// Interrupt Priority Register 174
union NVICIP174 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 174
    uint32_t PRI174 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP174() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP174 &Instance() { return *reinterpret_cast<volatile NVICIP174*>(0xE000E4AE); }
};

// Interrupt Priority Register 175
union NVICIP175 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 175
    uint32_t PRI175 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP175() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP175 &Instance() { return *reinterpret_cast<volatile NVICIP175*>(0xE000E4AF); }
};

// Interrupt Priority Register 176
union NVICIP176 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 176
    uint32_t PRI176 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP176() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP176 &Instance() { return *reinterpret_cast<volatile NVICIP176*>(0xE000E4B0); }
};

// Interrupt Priority Register 177
union NVICIP177 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 177
    uint32_t PRI177 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP177() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP177 &Instance() { return *reinterpret_cast<volatile NVICIP177*>(0xE000E4B1); }
};

// Interrupt Priority Register 178
union NVICIP178 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 178
    uint32_t PRI178 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP178() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP178 &Instance() { return *reinterpret_cast<volatile NVICIP178*>(0xE000E4B2); }
};

// Interrupt Priority Register 179
union NVICIP179 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 179
    uint32_t PRI179 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP179() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP179 &Instance() { return *reinterpret_cast<volatile NVICIP179*>(0xE000E4B3); }
};

// Interrupt Priority Register 180
union NVICIP180 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 180
    uint32_t PRI180 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP180() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP180 &Instance() { return *reinterpret_cast<volatile NVICIP180*>(0xE000E4B4); }
};

// Interrupt Priority Register 181
union NVICIP181 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 181
    uint32_t PRI181 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP181() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP181 &Instance() { return *reinterpret_cast<volatile NVICIP181*>(0xE000E4B5); }
};

// Interrupt Priority Register 182
union NVICIP182 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 182
    uint32_t PRI182 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP182() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP182 &Instance() { return *reinterpret_cast<volatile NVICIP182*>(0xE000E4B6); }
};

// Interrupt Priority Register 183
union NVICIP183 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 183
    uint32_t PRI183 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP183() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP183 &Instance() { return *reinterpret_cast<volatile NVICIP183*>(0xE000E4B7); }
};

// Interrupt Priority Register 184
union NVICIP184 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 184
    uint32_t PRI184 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP184() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP184 &Instance() { return *reinterpret_cast<volatile NVICIP184*>(0xE000E4B8); }
};

// Interrupt Priority Register 185
union NVICIP185 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 185
    uint32_t PRI185 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP185() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP185 &Instance() { return *reinterpret_cast<volatile NVICIP185*>(0xE000E4B9); }
};

// Interrupt Priority Register 186
union NVICIP186 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 186
    uint32_t PRI186 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP186() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP186 &Instance() { return *reinterpret_cast<volatile NVICIP186*>(0xE000E4BA); }
};

// Interrupt Priority Register 187
union NVICIP187 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 187
    uint32_t PRI187 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP187() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP187 &Instance() { return *reinterpret_cast<volatile NVICIP187*>(0xE000E4BB); }
};

// Interrupt Priority Register 188
union NVICIP188 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 188
    uint32_t PRI188 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP188() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP188 &Instance() { return *reinterpret_cast<volatile NVICIP188*>(0xE000E4BC); }
};

// Interrupt Priority Register 189
union NVICIP189 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 189
    uint32_t PRI189 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP189() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP189 &Instance() { return *reinterpret_cast<volatile NVICIP189*>(0xE000E4BD); }
};

// Interrupt Priority Register 190
union NVICIP190 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 190
    uint32_t PRI190 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP190() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP190 &Instance() { return *reinterpret_cast<volatile NVICIP190*>(0xE000E4BE); }
};

// Interrupt Priority Register 191
union NVICIP191 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 191
    uint32_t PRI191 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP191() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP191 &Instance() { return *reinterpret_cast<volatile NVICIP191*>(0xE000E4BF); }
};

// Interrupt Priority Register 192
union NVICIP192 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 192
    uint32_t PRI192 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP192() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP192 &Instance() { return *reinterpret_cast<volatile NVICIP192*>(0xE000E4C0); }
};

// Interrupt Priority Register 193
union NVICIP193 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 193
    uint32_t PRI193 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP193() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP193 &Instance() { return *reinterpret_cast<volatile NVICIP193*>(0xE000E4C1); }
};

// Interrupt Priority Register 194
union NVICIP194 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 194
    uint32_t PRI194 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP194() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP194 &Instance() { return *reinterpret_cast<volatile NVICIP194*>(0xE000E4C2); }
};

// Interrupt Priority Register 195
union NVICIP195 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 195
    uint32_t PRI195 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP195() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP195 &Instance() { return *reinterpret_cast<volatile NVICIP195*>(0xE000E4C3); }
};

// Interrupt Priority Register 196
union NVICIP196 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 196
    uint32_t PRI196 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP196() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP196 &Instance() { return *reinterpret_cast<volatile NVICIP196*>(0xE000E4C4); }
};

// Interrupt Priority Register 197
union NVICIP197 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 197
    uint32_t PRI197 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP197() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP197 &Instance() { return *reinterpret_cast<volatile NVICIP197*>(0xE000E4C5); }
};

// Interrupt Priority Register 198
union NVICIP198 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 198
    uint32_t PRI198 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP198() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP198 &Instance() { return *reinterpret_cast<volatile NVICIP198*>(0xE000E4C6); }
};

// Interrupt Priority Register 199
union NVICIP199 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 199
    uint32_t PRI199 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP199() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP199 &Instance() { return *reinterpret_cast<volatile NVICIP199*>(0xE000E4C7); }
};

// Interrupt Priority Register 200
union NVICIP200 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 200
    uint32_t PRI200 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP200() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP200 &Instance() { return *reinterpret_cast<volatile NVICIP200*>(0xE000E4C8); }
};

// Interrupt Priority Register 201
union NVICIP201 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 201
    uint32_t PRI201 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP201() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP201 &Instance() { return *reinterpret_cast<volatile NVICIP201*>(0xE000E4C9); }
};

// Interrupt Priority Register 202
union NVICIP202 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 202
    uint32_t PRI202 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP202() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP202 &Instance() { return *reinterpret_cast<volatile NVICIP202*>(0xE000E4CA); }
};

// Interrupt Priority Register 203
union NVICIP203 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 203
    uint32_t PRI203 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP203() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP203 &Instance() { return *reinterpret_cast<volatile NVICIP203*>(0xE000E4CB); }
};

// Interrupt Priority Register 204
union NVICIP204 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 204
    uint32_t PRI204 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP204() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP204 &Instance() { return *reinterpret_cast<volatile NVICIP204*>(0xE000E4CC); }
};

// Interrupt Priority Register 205
union NVICIP205 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 205
    uint32_t PRI205 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP205() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP205 &Instance() { return *reinterpret_cast<volatile NVICIP205*>(0xE000E4CD); }
};

// Interrupt Priority Register 206
union NVICIP206 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 206
    uint32_t PRI206 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP206() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP206 &Instance() { return *reinterpret_cast<volatile NVICIP206*>(0xE000E4CE); }
};

// Interrupt Priority Register 207
union NVICIP207 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 207
    uint32_t PRI207 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP207() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP207 &Instance() { return *reinterpret_cast<volatile NVICIP207*>(0xE000E4CF); }
};

// Interrupt Priority Register 208
union NVICIP208 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 208
    uint32_t PRI208 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP208() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP208 &Instance() { return *reinterpret_cast<volatile NVICIP208*>(0xE000E4D0); }
};

// Interrupt Priority Register 209
union NVICIP209 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 209
    uint32_t PRI209 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP209() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP209 &Instance() { return *reinterpret_cast<volatile NVICIP209*>(0xE000E4D1); }
};

// Interrupt Priority Register 210
union NVICIP210 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 210
    uint32_t PRI210 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP210() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP210 &Instance() { return *reinterpret_cast<volatile NVICIP210*>(0xE000E4D2); }
};

// Interrupt Priority Register 211
union NVICIP211 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 211
    uint32_t PRI211 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP211() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP211 &Instance() { return *reinterpret_cast<volatile NVICIP211*>(0xE000E4D3); }
};

// Interrupt Priority Register 212
union NVICIP212 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 212
    uint32_t PRI212 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP212() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP212 &Instance() { return *reinterpret_cast<volatile NVICIP212*>(0xE000E4D4); }
};

// Interrupt Priority Register 213
union NVICIP213 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 213
    uint32_t PRI213 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP213() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP213 &Instance() { return *reinterpret_cast<volatile NVICIP213*>(0xE000E4D5); }
};

// Interrupt Priority Register 214
union NVICIP214 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 214
    uint32_t PRI214 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP214() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP214 &Instance() { return *reinterpret_cast<volatile NVICIP214*>(0xE000E4D6); }
};

// Interrupt Priority Register 215
union NVICIP215 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 215
    uint32_t PRI215 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP215() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP215 &Instance() { return *reinterpret_cast<volatile NVICIP215*>(0xE000E4D7); }
};

// Interrupt Priority Register 216
union NVICIP216 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 216
    uint32_t PRI216 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP216() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP216 &Instance() { return *reinterpret_cast<volatile NVICIP216*>(0xE000E4D8); }
};

// Interrupt Priority Register 217
union NVICIP217 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Priority of interrupt 217
    uint32_t PRI217 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP217() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP217 &Instance() { return *reinterpret_cast<volatile NVICIP217*>(0xE000E4D9); }
};

// Software Trigger Interrupt Register
union NVICSTIR {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
    uint32_t INTID : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICSTIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICSTIR &Instance() { return *reinterpret_cast<volatile NVICSTIR*>(0xE000EF00); }
};


} // namespace nCM7_NVIC