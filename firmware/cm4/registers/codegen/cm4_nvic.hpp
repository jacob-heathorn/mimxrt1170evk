#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Nested Vectored Interrupt Controller
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCM4_NVIC {


// Interrupt Set Enable Register n
union NVICISER0 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt set enable bits
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER0 &ref() { return *reinterpret_cast<volatile NVICISER0*>(0xE000E100); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER1 &ref() { return *reinterpret_cast<volatile NVICISER1*>(0xE000E104); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER2 &ref() { return *reinterpret_cast<volatile NVICISER2*>(0xE000E108); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER3 &ref() { return *reinterpret_cast<volatile NVICISER3*>(0xE000E10C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER4 &ref() { return *reinterpret_cast<volatile NVICISER4*>(0xE000E110); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER5 &ref() { return *reinterpret_cast<volatile NVICISER5*>(0xE000E114); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER6 &ref() { return *reinterpret_cast<volatile NVICISER6*>(0xE000E118); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER0 &ref() { return *reinterpret_cast<volatile NVICICER0*>(0xE000E180); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER1 &ref() { return *reinterpret_cast<volatile NVICICER1*>(0xE000E184); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER2 &ref() { return *reinterpret_cast<volatile NVICICER2*>(0xE000E188); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER3 &ref() { return *reinterpret_cast<volatile NVICICER3*>(0xE000E18C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER4 &ref() { return *reinterpret_cast<volatile NVICICER4*>(0xE000E190); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER5 &ref() { return *reinterpret_cast<volatile NVICICER5*>(0xE000E194); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER6 &ref() { return *reinterpret_cast<volatile NVICICER6*>(0xE000E198); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR0 &ref() { return *reinterpret_cast<volatile NVICISPR0*>(0xE000E200); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR1 &ref() { return *reinterpret_cast<volatile NVICISPR1*>(0xE000E204); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR2 &ref() { return *reinterpret_cast<volatile NVICISPR2*>(0xE000E208); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR3 &ref() { return *reinterpret_cast<volatile NVICISPR3*>(0xE000E20C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR4 &ref() { return *reinterpret_cast<volatile NVICISPR4*>(0xE000E210); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR5 &ref() { return *reinterpret_cast<volatile NVICISPR5*>(0xE000E214); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR6 &ref() { return *reinterpret_cast<volatile NVICISPR6*>(0xE000E218); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR0 &ref() { return *reinterpret_cast<volatile NVICICPR0*>(0xE000E280); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR1 &ref() { return *reinterpret_cast<volatile NVICICPR1*>(0xE000E284); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR2 &ref() { return *reinterpret_cast<volatile NVICICPR2*>(0xE000E288); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR3 &ref() { return *reinterpret_cast<volatile NVICICPR3*>(0xE000E28C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR4 &ref() { return *reinterpret_cast<volatile NVICICPR4*>(0xE000E290); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR5 &ref() { return *reinterpret_cast<volatile NVICICPR5*>(0xE000E294); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR6 &ref() { return *reinterpret_cast<volatile NVICICPR6*>(0xE000E298); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR0 &ref() { return *reinterpret_cast<volatile NVICIABR0*>(0xE000E300); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR1 &ref() { return *reinterpret_cast<volatile NVICIABR1*>(0xE000E304); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR2 &ref() { return *reinterpret_cast<volatile NVICIABR2*>(0xE000E308); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR3 &ref() { return *reinterpret_cast<volatile NVICIABR3*>(0xE000E30C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR4 &ref() { return *reinterpret_cast<volatile NVICIABR4*>(0xE000E310); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR5 &ref() { return *reinterpret_cast<volatile NVICIABR5*>(0xE000E314); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR6 &ref() { return *reinterpret_cast<volatile NVICIABR6*>(0xE000E318); }
};

// Interrupt Priority Register 0
union NVICIP0 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 0
    uint8_t PRI0 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP0 &ref() { return *reinterpret_cast<volatile NVICIP0*>(0xE000E400); }
};

// Interrupt Priority Register 1
union NVICIP1 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 1
    uint8_t PRI1 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP1 &ref() { return *reinterpret_cast<volatile NVICIP1*>(0xE000E401); }
};

// Interrupt Priority Register 2
union NVICIP2 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 2
    uint8_t PRI2 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP2 &ref() { return *reinterpret_cast<volatile NVICIP2*>(0xE000E402); }
};

// Interrupt Priority Register 3
union NVICIP3 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 3
    uint8_t PRI3 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP3 &ref() { return *reinterpret_cast<volatile NVICIP3*>(0xE000E403); }
};

// Interrupt Priority Register 4
union NVICIP4 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 4
    uint8_t PRI4 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP4 &ref() { return *reinterpret_cast<volatile NVICIP4*>(0xE000E404); }
};

// Interrupt Priority Register 5
union NVICIP5 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 5
    uint8_t PRI5 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP5 &ref() { return *reinterpret_cast<volatile NVICIP5*>(0xE000E405); }
};

// Interrupt Priority Register 6
union NVICIP6 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 6
    uint8_t PRI6 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP6 &ref() { return *reinterpret_cast<volatile NVICIP6*>(0xE000E406); }
};

// Interrupt Priority Register 7
union NVICIP7 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 7
    uint8_t PRI7 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP7 &ref() { return *reinterpret_cast<volatile NVICIP7*>(0xE000E407); }
};

// Interrupt Priority Register 8
union NVICIP8 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 8
    uint8_t PRI8 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP8 &ref() { return *reinterpret_cast<volatile NVICIP8*>(0xE000E408); }
};

// Interrupt Priority Register 9
union NVICIP9 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 9
    uint8_t PRI9 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP9 &ref() { return *reinterpret_cast<volatile NVICIP9*>(0xE000E409); }
};

// Interrupt Priority Register 10
union NVICIP10 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 10
    uint8_t PRI10 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP10 &ref() { return *reinterpret_cast<volatile NVICIP10*>(0xE000E40A); }
};

// Interrupt Priority Register 11
union NVICIP11 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 11
    uint8_t PRI11 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP11 &ref() { return *reinterpret_cast<volatile NVICIP11*>(0xE000E40B); }
};

// Interrupt Priority Register 12
union NVICIP12 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 12
    uint8_t PRI12 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP12 &ref() { return *reinterpret_cast<volatile NVICIP12*>(0xE000E40C); }
};

// Interrupt Priority Register 13
union NVICIP13 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 13
    uint8_t PRI13 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP13 &ref() { return *reinterpret_cast<volatile NVICIP13*>(0xE000E40D); }
};

// Interrupt Priority Register 14
union NVICIP14 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 14
    uint8_t PRI14 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP14 &ref() { return *reinterpret_cast<volatile NVICIP14*>(0xE000E40E); }
};

// Interrupt Priority Register 15
union NVICIP15 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 15
    uint8_t PRI15 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP15 &ref() { return *reinterpret_cast<volatile NVICIP15*>(0xE000E40F); }
};

// Interrupt Priority Register 16
union NVICIP16 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 16
    uint8_t PRI16 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP16 &ref() { return *reinterpret_cast<volatile NVICIP16*>(0xE000E410); }
};

// Interrupt Priority Register 17
union NVICIP17 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 17
    uint8_t PRI17 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP17 &ref() { return *reinterpret_cast<volatile NVICIP17*>(0xE000E411); }
};

// Interrupt Priority Register 18
union NVICIP18 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 18
    uint8_t PRI18 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP18 &ref() { return *reinterpret_cast<volatile NVICIP18*>(0xE000E412); }
};

// Interrupt Priority Register 19
union NVICIP19 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 19
    uint8_t PRI19 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP19 &ref() { return *reinterpret_cast<volatile NVICIP19*>(0xE000E413); }
};

// Interrupt Priority Register 20
union NVICIP20 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 20
    uint8_t PRI20 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP20 &ref() { return *reinterpret_cast<volatile NVICIP20*>(0xE000E414); }
};

// Interrupt Priority Register 21
union NVICIP21 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 21
    uint8_t PRI21 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP21 &ref() { return *reinterpret_cast<volatile NVICIP21*>(0xE000E415); }
};

// Interrupt Priority Register 22
union NVICIP22 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 22
    uint8_t PRI22 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP22 &ref() { return *reinterpret_cast<volatile NVICIP22*>(0xE000E416); }
};

// Interrupt Priority Register 23
union NVICIP23 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 23
    uint8_t PRI23 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP23 &ref() { return *reinterpret_cast<volatile NVICIP23*>(0xE000E417); }
};

// Interrupt Priority Register 24
union NVICIP24 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 24
    uint8_t PRI24 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP24 &ref() { return *reinterpret_cast<volatile NVICIP24*>(0xE000E418); }
};

// Interrupt Priority Register 25
union NVICIP25 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 25
    uint8_t PRI25 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP25 &ref() { return *reinterpret_cast<volatile NVICIP25*>(0xE000E419); }
};

// Interrupt Priority Register 26
union NVICIP26 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 26
    uint8_t PRI26 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP26 &ref() { return *reinterpret_cast<volatile NVICIP26*>(0xE000E41A); }
};

// Interrupt Priority Register 27
union NVICIP27 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 27
    uint8_t PRI27 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP27 &ref() { return *reinterpret_cast<volatile NVICIP27*>(0xE000E41B); }
};

// Interrupt Priority Register 28
union NVICIP28 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 28
    uint8_t PRI28 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP28 &ref() { return *reinterpret_cast<volatile NVICIP28*>(0xE000E41C); }
};

// Interrupt Priority Register 29
union NVICIP29 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 29
    uint8_t PRI29 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP29 &ref() { return *reinterpret_cast<volatile NVICIP29*>(0xE000E41D); }
};

// Interrupt Priority Register 30
union NVICIP30 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 30
    uint8_t PRI30 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP30 &ref() { return *reinterpret_cast<volatile NVICIP30*>(0xE000E41E); }
};

// Interrupt Priority Register 31
union NVICIP31 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 31
    uint8_t PRI31 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP31 &ref() { return *reinterpret_cast<volatile NVICIP31*>(0xE000E41F); }
};

// Interrupt Priority Register 32
union NVICIP32 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 32
    uint8_t PRI32 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP32 &ref() { return *reinterpret_cast<volatile NVICIP32*>(0xE000E420); }
};

// Interrupt Priority Register 33
union NVICIP33 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 33
    uint8_t PRI33 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP33 &ref() { return *reinterpret_cast<volatile NVICIP33*>(0xE000E421); }
};

// Interrupt Priority Register 34
union NVICIP34 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 34
    uint8_t PRI34 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP34 &ref() { return *reinterpret_cast<volatile NVICIP34*>(0xE000E422); }
};

// Interrupt Priority Register 35
union NVICIP35 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 35
    uint8_t PRI35 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP35 &ref() { return *reinterpret_cast<volatile NVICIP35*>(0xE000E423); }
};

// Interrupt Priority Register 36
union NVICIP36 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 36
    uint8_t PRI36 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP36 &ref() { return *reinterpret_cast<volatile NVICIP36*>(0xE000E424); }
};

// Interrupt Priority Register 37
union NVICIP37 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 37
    uint8_t PRI37 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP37 &ref() { return *reinterpret_cast<volatile NVICIP37*>(0xE000E425); }
};

// Interrupt Priority Register 38
union NVICIP38 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 38
    uint8_t PRI38 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP38 &ref() { return *reinterpret_cast<volatile NVICIP38*>(0xE000E426); }
};

// Interrupt Priority Register 39
union NVICIP39 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 39
    uint8_t PRI39 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP39 &ref() { return *reinterpret_cast<volatile NVICIP39*>(0xE000E427); }
};

// Interrupt Priority Register 40
union NVICIP40 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 40
    uint8_t PRI40 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP40 &ref() { return *reinterpret_cast<volatile NVICIP40*>(0xE000E428); }
};

// Interrupt Priority Register 41
union NVICIP41 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 41
    uint8_t PRI41 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP41 &ref() { return *reinterpret_cast<volatile NVICIP41*>(0xE000E429); }
};

// Interrupt Priority Register 42
union NVICIP42 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 42
    uint8_t PRI42 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP42 &ref() { return *reinterpret_cast<volatile NVICIP42*>(0xE000E42A); }
};

// Interrupt Priority Register 43
union NVICIP43 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 43
    uint8_t PRI43 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP43 &ref() { return *reinterpret_cast<volatile NVICIP43*>(0xE000E42B); }
};

// Interrupt Priority Register 44
union NVICIP44 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 44
    uint8_t PRI44 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP44 &ref() { return *reinterpret_cast<volatile NVICIP44*>(0xE000E42C); }
};

// Interrupt Priority Register 45
union NVICIP45 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 45
    uint8_t PRI45 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP45 &ref() { return *reinterpret_cast<volatile NVICIP45*>(0xE000E42D); }
};

// Interrupt Priority Register 46
union NVICIP46 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 46
    uint8_t PRI46 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP46 &ref() { return *reinterpret_cast<volatile NVICIP46*>(0xE000E42E); }
};

// Interrupt Priority Register 47
union NVICIP47 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 47
    uint8_t PRI47 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP47 &ref() { return *reinterpret_cast<volatile NVICIP47*>(0xE000E42F); }
};

// Interrupt Priority Register 48
union NVICIP48 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 48
    uint8_t PRI48 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP48 &ref() { return *reinterpret_cast<volatile NVICIP48*>(0xE000E430); }
};

// Interrupt Priority Register 49
union NVICIP49 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 49
    uint8_t PRI49 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP49 &ref() { return *reinterpret_cast<volatile NVICIP49*>(0xE000E431); }
};

// Interrupt Priority Register 50
union NVICIP50 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 50
    uint8_t PRI50 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP50 &ref() { return *reinterpret_cast<volatile NVICIP50*>(0xE000E432); }
};

// Interrupt Priority Register 51
union NVICIP51 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 51
    uint8_t PRI51 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP51 &ref() { return *reinterpret_cast<volatile NVICIP51*>(0xE000E433); }
};

// Interrupt Priority Register 52
union NVICIP52 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 52
    uint8_t PRI52 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP52 &ref() { return *reinterpret_cast<volatile NVICIP52*>(0xE000E434); }
};

// Interrupt Priority Register 53
union NVICIP53 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 53
    uint8_t PRI53 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP53 &ref() { return *reinterpret_cast<volatile NVICIP53*>(0xE000E435); }
};

// Interrupt Priority Register 54
union NVICIP54 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 54
    uint8_t PRI54 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP54 &ref() { return *reinterpret_cast<volatile NVICIP54*>(0xE000E436); }
};

// Interrupt Priority Register 55
union NVICIP55 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 55
    uint8_t PRI55 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP55 &ref() { return *reinterpret_cast<volatile NVICIP55*>(0xE000E437); }
};

// Interrupt Priority Register 56
union NVICIP56 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 56
    uint8_t PRI56 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP56 &ref() { return *reinterpret_cast<volatile NVICIP56*>(0xE000E438); }
};

// Interrupt Priority Register 57
union NVICIP57 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 57
    uint8_t PRI57 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP57 &ref() { return *reinterpret_cast<volatile NVICIP57*>(0xE000E439); }
};

// Interrupt Priority Register 58
union NVICIP58 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 58
    uint8_t PRI58 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP58 &ref() { return *reinterpret_cast<volatile NVICIP58*>(0xE000E43A); }
};

// Interrupt Priority Register 59
union NVICIP59 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 59
    uint8_t PRI59 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP59 &ref() { return *reinterpret_cast<volatile NVICIP59*>(0xE000E43B); }
};

// Interrupt Priority Register 60
union NVICIP60 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 60
    uint8_t PRI60 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP60 &ref() { return *reinterpret_cast<volatile NVICIP60*>(0xE000E43C); }
};

// Interrupt Priority Register 61
union NVICIP61 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 61
    uint8_t PRI61 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP61 &ref() { return *reinterpret_cast<volatile NVICIP61*>(0xE000E43D); }
};

// Interrupt Priority Register 62
union NVICIP62 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 62
    uint8_t PRI62 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP62 &ref() { return *reinterpret_cast<volatile NVICIP62*>(0xE000E43E); }
};

// Interrupt Priority Register 63
union NVICIP63 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 63
    uint8_t PRI63 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP63 &ref() { return *reinterpret_cast<volatile NVICIP63*>(0xE000E43F); }
};

// Interrupt Priority Register 64
union NVICIP64 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 64
    uint8_t PRI64 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP64 &ref() { return *reinterpret_cast<volatile NVICIP64*>(0xE000E440); }
};

// Interrupt Priority Register 65
union NVICIP65 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 65
    uint8_t PRI65 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP65 &ref() { return *reinterpret_cast<volatile NVICIP65*>(0xE000E441); }
};

// Interrupt Priority Register 66
union NVICIP66 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 66
    uint8_t PRI66 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP66 &ref() { return *reinterpret_cast<volatile NVICIP66*>(0xE000E442); }
};

// Interrupt Priority Register 67
union NVICIP67 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 67
    uint8_t PRI67 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP67 &ref() { return *reinterpret_cast<volatile NVICIP67*>(0xE000E443); }
};

// Interrupt Priority Register 68
union NVICIP68 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 68
    uint8_t PRI68 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP68 &ref() { return *reinterpret_cast<volatile NVICIP68*>(0xE000E444); }
};

// Interrupt Priority Register 69
union NVICIP69 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 69
    uint8_t PRI69 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP69 &ref() { return *reinterpret_cast<volatile NVICIP69*>(0xE000E445); }
};

// Interrupt Priority Register 70
union NVICIP70 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 70
    uint8_t PRI70 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP70 &ref() { return *reinterpret_cast<volatile NVICIP70*>(0xE000E446); }
};

// Interrupt Priority Register 71
union NVICIP71 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 71
    uint8_t PRI71 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP71 &ref() { return *reinterpret_cast<volatile NVICIP71*>(0xE000E447); }
};

// Interrupt Priority Register 72
union NVICIP72 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 72
    uint8_t PRI72 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP72 &ref() { return *reinterpret_cast<volatile NVICIP72*>(0xE000E448); }
};

// Interrupt Priority Register 73
union NVICIP73 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 73
    uint8_t PRI73 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP73 &ref() { return *reinterpret_cast<volatile NVICIP73*>(0xE000E449); }
};

// Interrupt Priority Register 74
union NVICIP74 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 74
    uint8_t PRI74 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP74 &ref() { return *reinterpret_cast<volatile NVICIP74*>(0xE000E44A); }
};

// Interrupt Priority Register 75
union NVICIP75 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 75
    uint8_t PRI75 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP75 &ref() { return *reinterpret_cast<volatile NVICIP75*>(0xE000E44B); }
};

// Interrupt Priority Register 76
union NVICIP76 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 76
    uint8_t PRI76 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP76 &ref() { return *reinterpret_cast<volatile NVICIP76*>(0xE000E44C); }
};

// Interrupt Priority Register 77
union NVICIP77 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 77
    uint8_t PRI77 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP77 &ref() { return *reinterpret_cast<volatile NVICIP77*>(0xE000E44D); }
};

// Interrupt Priority Register 78
union NVICIP78 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 78
    uint8_t PRI78 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP78 &ref() { return *reinterpret_cast<volatile NVICIP78*>(0xE000E44E); }
};

// Interrupt Priority Register 79
union NVICIP79 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 79
    uint8_t PRI79 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP79 &ref() { return *reinterpret_cast<volatile NVICIP79*>(0xE000E44F); }
};

// Interrupt Priority Register 80
union NVICIP80 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 80
    uint8_t PRI80 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP80 &ref() { return *reinterpret_cast<volatile NVICIP80*>(0xE000E450); }
};

// Interrupt Priority Register 81
union NVICIP81 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 81
    uint8_t PRI81 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP81 &ref() { return *reinterpret_cast<volatile NVICIP81*>(0xE000E451); }
};

// Interrupt Priority Register 82
union NVICIP82 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 82
    uint8_t PRI82 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP82 &ref() { return *reinterpret_cast<volatile NVICIP82*>(0xE000E452); }
};

// Interrupt Priority Register 83
union NVICIP83 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 83
    uint8_t PRI83 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP83 &ref() { return *reinterpret_cast<volatile NVICIP83*>(0xE000E453); }
};

// Interrupt Priority Register 84
union NVICIP84 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 84
    uint8_t PRI84 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP84 &ref() { return *reinterpret_cast<volatile NVICIP84*>(0xE000E454); }
};

// Interrupt Priority Register 85
union NVICIP85 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 85
    uint8_t PRI85 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP85 &ref() { return *reinterpret_cast<volatile NVICIP85*>(0xE000E455); }
};

// Interrupt Priority Register 86
union NVICIP86 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 86
    uint8_t PRI86 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP86 &ref() { return *reinterpret_cast<volatile NVICIP86*>(0xE000E456); }
};

// Interrupt Priority Register 87
union NVICIP87 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 87
    uint8_t PRI87 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP87 &ref() { return *reinterpret_cast<volatile NVICIP87*>(0xE000E457); }
};

// Interrupt Priority Register 88
union NVICIP88 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 88
    uint8_t PRI88 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP88 &ref() { return *reinterpret_cast<volatile NVICIP88*>(0xE000E458); }
};

// Interrupt Priority Register 89
union NVICIP89 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 89
    uint8_t PRI89 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP89 &ref() { return *reinterpret_cast<volatile NVICIP89*>(0xE000E459); }
};

// Interrupt Priority Register 90
union NVICIP90 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 90
    uint8_t PRI90 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP90 &ref() { return *reinterpret_cast<volatile NVICIP90*>(0xE000E45A); }
};

// Interrupt Priority Register 91
union NVICIP91 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 91
    uint8_t PRI91 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP91 &ref() { return *reinterpret_cast<volatile NVICIP91*>(0xE000E45B); }
};

// Interrupt Priority Register 92
union NVICIP92 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 92
    uint8_t PRI92 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP92 &ref() { return *reinterpret_cast<volatile NVICIP92*>(0xE000E45C); }
};

// Interrupt Priority Register 93
union NVICIP93 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 93
    uint8_t PRI93 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP93 &ref() { return *reinterpret_cast<volatile NVICIP93*>(0xE000E45D); }
};

// Interrupt Priority Register 94
union NVICIP94 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 94
    uint8_t PRI94 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP94 &ref() { return *reinterpret_cast<volatile NVICIP94*>(0xE000E45E); }
};

// Interrupt Priority Register 95
union NVICIP95 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 95
    uint8_t PRI95 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP95 &ref() { return *reinterpret_cast<volatile NVICIP95*>(0xE000E45F); }
};

// Interrupt Priority Register 96
union NVICIP96 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 96
    uint8_t PRI96 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP96 &ref() { return *reinterpret_cast<volatile NVICIP96*>(0xE000E460); }
};

// Interrupt Priority Register 97
union NVICIP97 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 97
    uint8_t PRI97 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP97 &ref() { return *reinterpret_cast<volatile NVICIP97*>(0xE000E461); }
};

// Interrupt Priority Register 98
union NVICIP98 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 98
    uint8_t PRI98 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP98 &ref() { return *reinterpret_cast<volatile NVICIP98*>(0xE000E462); }
};

// Interrupt Priority Register 99
union NVICIP99 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 99
    uint8_t PRI99 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP99 &ref() { return *reinterpret_cast<volatile NVICIP99*>(0xE000E463); }
};

// Interrupt Priority Register 100
union NVICIP100 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 100
    uint8_t PRI100 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP100 &ref() { return *reinterpret_cast<volatile NVICIP100*>(0xE000E464); }
};

// Interrupt Priority Register 101
union NVICIP101 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 101
    uint8_t PRI101 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP101 &ref() { return *reinterpret_cast<volatile NVICIP101*>(0xE000E465); }
};

// Interrupt Priority Register 102
union NVICIP102 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 102
    uint8_t PRI102 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP102 &ref() { return *reinterpret_cast<volatile NVICIP102*>(0xE000E466); }
};

// Interrupt Priority Register 103
union NVICIP103 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 103
    uint8_t PRI103 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP103 &ref() { return *reinterpret_cast<volatile NVICIP103*>(0xE000E467); }
};

// Interrupt Priority Register 104
union NVICIP104 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 104
    uint8_t PRI104 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP104 &ref() { return *reinterpret_cast<volatile NVICIP104*>(0xE000E468); }
};

// Interrupt Priority Register 105
union NVICIP105 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 105
    uint8_t PRI105 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP105 &ref() { return *reinterpret_cast<volatile NVICIP105*>(0xE000E469); }
};

// Interrupt Priority Register 106
union NVICIP106 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 106
    uint8_t PRI106 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP106 &ref() { return *reinterpret_cast<volatile NVICIP106*>(0xE000E46A); }
};

// Interrupt Priority Register 107
union NVICIP107 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 107
    uint8_t PRI107 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP107 &ref() { return *reinterpret_cast<volatile NVICIP107*>(0xE000E46B); }
};

// Interrupt Priority Register 108
union NVICIP108 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 108
    uint8_t PRI108 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP108 &ref() { return *reinterpret_cast<volatile NVICIP108*>(0xE000E46C); }
};

// Interrupt Priority Register 109
union NVICIP109 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 109
    uint8_t PRI109 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP109 &ref() { return *reinterpret_cast<volatile NVICIP109*>(0xE000E46D); }
};

// Interrupt Priority Register 110
union NVICIP110 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 110
    uint8_t PRI110 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP110 &ref() { return *reinterpret_cast<volatile NVICIP110*>(0xE000E46E); }
};

// Interrupt Priority Register 111
union NVICIP111 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 111
    uint8_t PRI111 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP111 &ref() { return *reinterpret_cast<volatile NVICIP111*>(0xE000E46F); }
};

// Interrupt Priority Register 112
union NVICIP112 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 112
    uint8_t PRI112 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP112 &ref() { return *reinterpret_cast<volatile NVICIP112*>(0xE000E470); }
};

// Interrupt Priority Register 113
union NVICIP113 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 113
    uint8_t PRI113 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP113 &ref() { return *reinterpret_cast<volatile NVICIP113*>(0xE000E471); }
};

// Interrupt Priority Register 114
union NVICIP114 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 114
    uint8_t PRI114 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP114 &ref() { return *reinterpret_cast<volatile NVICIP114*>(0xE000E472); }
};

// Interrupt Priority Register 115
union NVICIP115 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 115
    uint8_t PRI115 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP115 &ref() { return *reinterpret_cast<volatile NVICIP115*>(0xE000E473); }
};

// Interrupt Priority Register 116
union NVICIP116 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 116
    uint8_t PRI116 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP116 &ref() { return *reinterpret_cast<volatile NVICIP116*>(0xE000E474); }
};

// Interrupt Priority Register 117
union NVICIP117 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 117
    uint8_t PRI117 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP117 &ref() { return *reinterpret_cast<volatile NVICIP117*>(0xE000E475); }
};

// Interrupt Priority Register 118
union NVICIP118 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 118
    uint8_t PRI118 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP118 &ref() { return *reinterpret_cast<volatile NVICIP118*>(0xE000E476); }
};

// Interrupt Priority Register 119
union NVICIP119 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 119
    uint8_t PRI119 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP119 &ref() { return *reinterpret_cast<volatile NVICIP119*>(0xE000E477); }
};

// Interrupt Priority Register 120
union NVICIP120 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 120
    uint8_t PRI120 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP120 &ref() { return *reinterpret_cast<volatile NVICIP120*>(0xE000E478); }
};

// Interrupt Priority Register 121
union NVICIP121 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 121
    uint8_t PRI121 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP121 &ref() { return *reinterpret_cast<volatile NVICIP121*>(0xE000E479); }
};

// Interrupt Priority Register 122
union NVICIP122 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 122
    uint8_t PRI122 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP122 &ref() { return *reinterpret_cast<volatile NVICIP122*>(0xE000E47A); }
};

// Interrupt Priority Register 123
union NVICIP123 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 123
    uint8_t PRI123 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP123 &ref() { return *reinterpret_cast<volatile NVICIP123*>(0xE000E47B); }
};

// Interrupt Priority Register 124
union NVICIP124 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 124
    uint8_t PRI124 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP124 &ref() { return *reinterpret_cast<volatile NVICIP124*>(0xE000E47C); }
};

// Interrupt Priority Register 125
union NVICIP125 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 125
    uint8_t PRI125 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP125 &ref() { return *reinterpret_cast<volatile NVICIP125*>(0xE000E47D); }
};

// Interrupt Priority Register 126
union NVICIP126 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 126
    uint8_t PRI126 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP126 &ref() { return *reinterpret_cast<volatile NVICIP126*>(0xE000E47E); }
};

// Interrupt Priority Register 127
union NVICIP127 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 127
    uint8_t PRI127 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP127 &ref() { return *reinterpret_cast<volatile NVICIP127*>(0xE000E47F); }
};

// Interrupt Priority Register 128
union NVICIP128 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 128
    uint8_t PRI128 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP128 &ref() { return *reinterpret_cast<volatile NVICIP128*>(0xE000E480); }
};

// Interrupt Priority Register 129
union NVICIP129 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 129
    uint8_t PRI129 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP129 &ref() { return *reinterpret_cast<volatile NVICIP129*>(0xE000E481); }
};

// Interrupt Priority Register 130
union NVICIP130 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 130
    uint8_t PRI130 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP130 &ref() { return *reinterpret_cast<volatile NVICIP130*>(0xE000E482); }
};

// Interrupt Priority Register 131
union NVICIP131 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 131
    uint8_t PRI131 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP131 &ref() { return *reinterpret_cast<volatile NVICIP131*>(0xE000E483); }
};

// Interrupt Priority Register 132
union NVICIP132 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 132
    uint8_t PRI132 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP132 &ref() { return *reinterpret_cast<volatile NVICIP132*>(0xE000E484); }
};

// Interrupt Priority Register 133
union NVICIP133 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 133
    uint8_t PRI133 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP133 &ref() { return *reinterpret_cast<volatile NVICIP133*>(0xE000E485); }
};

// Interrupt Priority Register 134
union NVICIP134 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 134
    uint8_t PRI134 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP134 &ref() { return *reinterpret_cast<volatile NVICIP134*>(0xE000E486); }
};

// Interrupt Priority Register 135
union NVICIP135 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 135
    uint8_t PRI135 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP135 &ref() { return *reinterpret_cast<volatile NVICIP135*>(0xE000E487); }
};

// Interrupt Priority Register 136
union NVICIP136 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 136
    uint8_t PRI136 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP136 &ref() { return *reinterpret_cast<volatile NVICIP136*>(0xE000E488); }
};

// Interrupt Priority Register 137
union NVICIP137 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 137
    uint8_t PRI137 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP137 &ref() { return *reinterpret_cast<volatile NVICIP137*>(0xE000E489); }
};

// Interrupt Priority Register 138
union NVICIP138 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 138
    uint8_t PRI138 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP138 &ref() { return *reinterpret_cast<volatile NVICIP138*>(0xE000E48A); }
};

// Interrupt Priority Register 139
union NVICIP139 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 139
    uint8_t PRI139 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP139 &ref() { return *reinterpret_cast<volatile NVICIP139*>(0xE000E48B); }
};

// Interrupt Priority Register 140
union NVICIP140 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 140
    uint8_t PRI140 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP140 &ref() { return *reinterpret_cast<volatile NVICIP140*>(0xE000E48C); }
};

// Interrupt Priority Register 141
union NVICIP141 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 141
    uint8_t PRI141 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP141 &ref() { return *reinterpret_cast<volatile NVICIP141*>(0xE000E48D); }
};

// Interrupt Priority Register 142
union NVICIP142 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 142
    uint8_t PRI142 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP142 &ref() { return *reinterpret_cast<volatile NVICIP142*>(0xE000E48E); }
};

// Interrupt Priority Register 143
union NVICIP143 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 143
    uint8_t PRI143 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP143 &ref() { return *reinterpret_cast<volatile NVICIP143*>(0xE000E48F); }
};

// Interrupt Priority Register 144
union NVICIP144 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 144
    uint8_t PRI144 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP144 &ref() { return *reinterpret_cast<volatile NVICIP144*>(0xE000E490); }
};

// Interrupt Priority Register 145
union NVICIP145 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 145
    uint8_t PRI145 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP145 &ref() { return *reinterpret_cast<volatile NVICIP145*>(0xE000E491); }
};

// Interrupt Priority Register 146
union NVICIP146 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 146
    uint8_t PRI146 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP146 &ref() { return *reinterpret_cast<volatile NVICIP146*>(0xE000E492); }
};

// Interrupt Priority Register 147
union NVICIP147 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 147
    uint8_t PRI147 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP147 &ref() { return *reinterpret_cast<volatile NVICIP147*>(0xE000E493); }
};

// Interrupt Priority Register 148
union NVICIP148 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 148
    uint8_t PRI148 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP148 &ref() { return *reinterpret_cast<volatile NVICIP148*>(0xE000E494); }
};

// Interrupt Priority Register 149
union NVICIP149 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 149
    uint8_t PRI149 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP149 &ref() { return *reinterpret_cast<volatile NVICIP149*>(0xE000E495); }
};

// Interrupt Priority Register 150
union NVICIP150 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 150
    uint8_t PRI150 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP150 &ref() { return *reinterpret_cast<volatile NVICIP150*>(0xE000E496); }
};

// Interrupt Priority Register 151
union NVICIP151 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 151
    uint8_t PRI151 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP151 &ref() { return *reinterpret_cast<volatile NVICIP151*>(0xE000E497); }
};

// Interrupt Priority Register 152
union NVICIP152 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 152
    uint8_t PRI152 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP152 &ref() { return *reinterpret_cast<volatile NVICIP152*>(0xE000E498); }
};

// Interrupt Priority Register 153
union NVICIP153 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 153
    uint8_t PRI153 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP153 &ref() { return *reinterpret_cast<volatile NVICIP153*>(0xE000E499); }
};

// Interrupt Priority Register 154
union NVICIP154 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 154
    uint8_t PRI154 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP154 &ref() { return *reinterpret_cast<volatile NVICIP154*>(0xE000E49A); }
};

// Interrupt Priority Register 155
union NVICIP155 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 155
    uint8_t PRI155 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP155 &ref() { return *reinterpret_cast<volatile NVICIP155*>(0xE000E49B); }
};

// Interrupt Priority Register 156
union NVICIP156 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 156
    uint8_t PRI156 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP156 &ref() { return *reinterpret_cast<volatile NVICIP156*>(0xE000E49C); }
};

// Interrupt Priority Register 157
union NVICIP157 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 157
    uint8_t PRI157 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP157 &ref() { return *reinterpret_cast<volatile NVICIP157*>(0xE000E49D); }
};

// Interrupt Priority Register 158
union NVICIP158 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 158
    uint8_t PRI158 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP158 &ref() { return *reinterpret_cast<volatile NVICIP158*>(0xE000E49E); }
};

// Interrupt Priority Register 159
union NVICIP159 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 159
    uint8_t PRI159 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP159 &ref() { return *reinterpret_cast<volatile NVICIP159*>(0xE000E49F); }
};

// Interrupt Priority Register 160
union NVICIP160 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 160
    uint8_t PRI160 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP160 &ref() { return *reinterpret_cast<volatile NVICIP160*>(0xE000E4A0); }
};

// Interrupt Priority Register 161
union NVICIP161 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 161
    uint8_t PRI161 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP161 &ref() { return *reinterpret_cast<volatile NVICIP161*>(0xE000E4A1); }
};

// Interrupt Priority Register 162
union NVICIP162 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 162
    uint8_t PRI162 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP162 &ref() { return *reinterpret_cast<volatile NVICIP162*>(0xE000E4A2); }
};

// Interrupt Priority Register 163
union NVICIP163 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 163
    uint8_t PRI163 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP163 &ref() { return *reinterpret_cast<volatile NVICIP163*>(0xE000E4A3); }
};

// Interrupt Priority Register 164
union NVICIP164 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 164
    uint8_t PRI164 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP164 &ref() { return *reinterpret_cast<volatile NVICIP164*>(0xE000E4A4); }
};

// Interrupt Priority Register 165
union NVICIP165 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 165
    uint8_t PRI165 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP165 &ref() { return *reinterpret_cast<volatile NVICIP165*>(0xE000E4A5); }
};

// Interrupt Priority Register 166
union NVICIP166 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 166
    uint8_t PRI166 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP166 &ref() { return *reinterpret_cast<volatile NVICIP166*>(0xE000E4A6); }
};

// Interrupt Priority Register 167
union NVICIP167 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 167
    uint8_t PRI167 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP167 &ref() { return *reinterpret_cast<volatile NVICIP167*>(0xE000E4A7); }
};

// Interrupt Priority Register 168
union NVICIP168 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 168
    uint8_t PRI168 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP168 &ref() { return *reinterpret_cast<volatile NVICIP168*>(0xE000E4A8); }
};

// Interrupt Priority Register 169
union NVICIP169 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 169
    uint8_t PRI169 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP169 &ref() { return *reinterpret_cast<volatile NVICIP169*>(0xE000E4A9); }
};

// Interrupt Priority Register 170
union NVICIP170 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 170
    uint8_t PRI170 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP170 &ref() { return *reinterpret_cast<volatile NVICIP170*>(0xE000E4AA); }
};

// Interrupt Priority Register 171
union NVICIP171 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 171
    uint8_t PRI171 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP171 &ref() { return *reinterpret_cast<volatile NVICIP171*>(0xE000E4AB); }
};

// Interrupt Priority Register 172
union NVICIP172 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 172
    uint8_t PRI172 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP172 &ref() { return *reinterpret_cast<volatile NVICIP172*>(0xE000E4AC); }
};

// Interrupt Priority Register 173
union NVICIP173 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 173
    uint8_t PRI173 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP173 &ref() { return *reinterpret_cast<volatile NVICIP173*>(0xE000E4AD); }
};

// Interrupt Priority Register 174
union NVICIP174 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 174
    uint8_t PRI174 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP174 &ref() { return *reinterpret_cast<volatile NVICIP174*>(0xE000E4AE); }
};

// Interrupt Priority Register 175
union NVICIP175 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 175
    uint8_t PRI175 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP175 &ref() { return *reinterpret_cast<volatile NVICIP175*>(0xE000E4AF); }
};

// Interrupt Priority Register 176
union NVICIP176 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 176
    uint8_t PRI176 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP176 &ref() { return *reinterpret_cast<volatile NVICIP176*>(0xE000E4B0); }
};

// Interrupt Priority Register 177
union NVICIP177 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 177
    uint8_t PRI177 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP177 &ref() { return *reinterpret_cast<volatile NVICIP177*>(0xE000E4B1); }
};

// Interrupt Priority Register 178
union NVICIP178 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 178
    uint8_t PRI178 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP178 &ref() { return *reinterpret_cast<volatile NVICIP178*>(0xE000E4B2); }
};

// Interrupt Priority Register 179
union NVICIP179 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 179
    uint8_t PRI179 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP179 &ref() { return *reinterpret_cast<volatile NVICIP179*>(0xE000E4B3); }
};

// Interrupt Priority Register 180
union NVICIP180 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 180
    uint8_t PRI180 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP180 &ref() { return *reinterpret_cast<volatile NVICIP180*>(0xE000E4B4); }
};

// Interrupt Priority Register 181
union NVICIP181 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 181
    uint8_t PRI181 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP181 &ref() { return *reinterpret_cast<volatile NVICIP181*>(0xE000E4B5); }
};

// Interrupt Priority Register 182
union NVICIP182 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 182
    uint8_t PRI182 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP182 &ref() { return *reinterpret_cast<volatile NVICIP182*>(0xE000E4B6); }
};

// Interrupt Priority Register 183
union NVICIP183 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 183
    uint8_t PRI183 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP183 &ref() { return *reinterpret_cast<volatile NVICIP183*>(0xE000E4B7); }
};

// Interrupt Priority Register 184
union NVICIP184 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 184
    uint8_t PRI184 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP184 &ref() { return *reinterpret_cast<volatile NVICIP184*>(0xE000E4B8); }
};

// Interrupt Priority Register 185
union NVICIP185 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 185
    uint8_t PRI185 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP185 &ref() { return *reinterpret_cast<volatile NVICIP185*>(0xE000E4B9); }
};

// Interrupt Priority Register 186
union NVICIP186 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 186
    uint8_t PRI186 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP186 &ref() { return *reinterpret_cast<volatile NVICIP186*>(0xE000E4BA); }
};

// Interrupt Priority Register 187
union NVICIP187 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 187
    uint8_t PRI187 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP187 &ref() { return *reinterpret_cast<volatile NVICIP187*>(0xE000E4BB); }
};

// Interrupt Priority Register 188
union NVICIP188 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 188
    uint8_t PRI188 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP188 &ref() { return *reinterpret_cast<volatile NVICIP188*>(0xE000E4BC); }
};

// Interrupt Priority Register 189
union NVICIP189 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 189
    uint8_t PRI189 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP189 &ref() { return *reinterpret_cast<volatile NVICIP189*>(0xE000E4BD); }
};

// Interrupt Priority Register 190
union NVICIP190 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 190
    uint8_t PRI190 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP190 &ref() { return *reinterpret_cast<volatile NVICIP190*>(0xE000E4BE); }
};

// Interrupt Priority Register 191
union NVICIP191 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 191
    uint8_t PRI191 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP191 &ref() { return *reinterpret_cast<volatile NVICIP191*>(0xE000E4BF); }
};

// Interrupt Priority Register 192
union NVICIP192 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 192
    uint8_t PRI192 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP192 &ref() { return *reinterpret_cast<volatile NVICIP192*>(0xE000E4C0); }
};

// Interrupt Priority Register 193
union NVICIP193 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 193
    uint8_t PRI193 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP193 &ref() { return *reinterpret_cast<volatile NVICIP193*>(0xE000E4C1); }
};

// Interrupt Priority Register 194
union NVICIP194 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 194
    uint8_t PRI194 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP194 &ref() { return *reinterpret_cast<volatile NVICIP194*>(0xE000E4C2); }
};

// Interrupt Priority Register 195
union NVICIP195 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 195
    uint8_t PRI195 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP195 &ref() { return *reinterpret_cast<volatile NVICIP195*>(0xE000E4C3); }
};

// Interrupt Priority Register 196
union NVICIP196 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 196
    uint8_t PRI196 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP196 &ref() { return *reinterpret_cast<volatile NVICIP196*>(0xE000E4C4); }
};

// Interrupt Priority Register 197
union NVICIP197 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 197
    uint8_t PRI197 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP197 &ref() { return *reinterpret_cast<volatile NVICIP197*>(0xE000E4C5); }
};

// Interrupt Priority Register 198
union NVICIP198 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 198
    uint8_t PRI198 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP198 &ref() { return *reinterpret_cast<volatile NVICIP198*>(0xE000E4C6); }
};

// Interrupt Priority Register 199
union NVICIP199 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 199
    uint8_t PRI199 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP199 &ref() { return *reinterpret_cast<volatile NVICIP199*>(0xE000E4C7); }
};

// Interrupt Priority Register 200
union NVICIP200 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 200
    uint8_t PRI200 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP200 &ref() { return *reinterpret_cast<volatile NVICIP200*>(0xE000E4C8); }
};

// Interrupt Priority Register 201
union NVICIP201 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 201
    uint8_t PRI201 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP201 &ref() { return *reinterpret_cast<volatile NVICIP201*>(0xE000E4C9); }
};

// Interrupt Priority Register 202
union NVICIP202 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 202
    uint8_t PRI202 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP202 &ref() { return *reinterpret_cast<volatile NVICIP202*>(0xE000E4CA); }
};

// Interrupt Priority Register 203
union NVICIP203 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 203
    uint8_t PRI203 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP203 &ref() { return *reinterpret_cast<volatile NVICIP203*>(0xE000E4CB); }
};

// Interrupt Priority Register 204
union NVICIP204 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 204
    uint8_t PRI204 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP204 &ref() { return *reinterpret_cast<volatile NVICIP204*>(0xE000E4CC); }
};

// Interrupt Priority Register 205
union NVICIP205 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 205
    uint8_t PRI205 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP205 &ref() { return *reinterpret_cast<volatile NVICIP205*>(0xE000E4CD); }
};

// Interrupt Priority Register 206
union NVICIP206 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 206
    uint8_t PRI206 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP206 &ref() { return *reinterpret_cast<volatile NVICIP206*>(0xE000E4CE); }
};

// Interrupt Priority Register 207
union NVICIP207 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 207
    uint8_t PRI207 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP207 &ref() { return *reinterpret_cast<volatile NVICIP207*>(0xE000E4CF); }
};

// Interrupt Priority Register 208
union NVICIP208 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 208
    uint8_t PRI208 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP208 &ref() { return *reinterpret_cast<volatile NVICIP208*>(0xE000E4D0); }
};

// Interrupt Priority Register 209
union NVICIP209 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 209
    uint8_t PRI209 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP209 &ref() { return *reinterpret_cast<volatile NVICIP209*>(0xE000E4D1); }
};

// Interrupt Priority Register 210
union NVICIP210 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 210
    uint8_t PRI210 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP210 &ref() { return *reinterpret_cast<volatile NVICIP210*>(0xE000E4D2); }
};

// Interrupt Priority Register 211
union NVICIP211 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 211
    uint8_t PRI211 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP211 &ref() { return *reinterpret_cast<volatile NVICIP211*>(0xE000E4D3); }
};

// Interrupt Priority Register 212
union NVICIP212 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 212
    uint8_t PRI212 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP212 &ref() { return *reinterpret_cast<volatile NVICIP212*>(0xE000E4D4); }
};

// Interrupt Priority Register 213
union NVICIP213 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 213
    uint8_t PRI213 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP213 &ref() { return *reinterpret_cast<volatile NVICIP213*>(0xE000E4D5); }
};

// Interrupt Priority Register 214
union NVICIP214 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 214
    uint8_t PRI214 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP214 &ref() { return *reinterpret_cast<volatile NVICIP214*>(0xE000E4D6); }
};

// Interrupt Priority Register 215
union NVICIP215 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 215
    uint8_t PRI215 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP215 &ref() { return *reinterpret_cast<volatile NVICIP215*>(0xE000E4D7); }
};

// Interrupt Priority Register 216
union NVICIP216 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 216
    uint8_t PRI216 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP216 &ref() { return *reinterpret_cast<volatile NVICIP216*>(0xE000E4D8); }
};

// Interrupt Priority Register 217
union NVICIP217 {
  
  // Bit field definition.
  struct {
    uint8_t _reserved_0 : 4;
    // read-write - Priority of interrupt 217
    uint8_t PRI217 : 4;
  } bits;
  
  // Full 8-bit register value.
  uint8_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP217 &ref() { return *reinterpret_cast<volatile NVICIP217*>(0xE000E4D9); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICSTIR &ref() { return *reinterpret_cast<volatile NVICSTIR*>(0xE000EF00); }
};


} // namespace nCM4_NVIC