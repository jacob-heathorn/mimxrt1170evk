#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Nested Vectored Interrupt Controller
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nNVIC {


// Interrupt Set Enable Register n
//
union NVICISER0 {
  
  // Bit field definition.
  struct {
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER0 &Instance() { return *reinterpret_cast<volatile NVICISER0*>(0xE000E100); }
};

// Interrupt Set Enable Register n
//
union NVICISER1 {
  
  // Bit field definition.
  struct {
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER1 &Instance() { return *reinterpret_cast<volatile NVICISER1*>(0xE000E104); }
};

// Interrupt Set Enable Register n
//
union NVICISER2 {
  
  // Bit field definition.
  struct {
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER2 &Instance() { return *reinterpret_cast<volatile NVICISER2*>(0xE000E108); }
};

// Interrupt Set Enable Register n
//
union NVICISER3 {
  
  // Bit field definition.
  struct {
    uint32_t SETENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISER3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISER3 &Instance() { return *reinterpret_cast<volatile NVICISER3*>(0xE000E10C); }
};

// Interrupt Clear Enable Register n
//
union NVICICER0 {
  
  // Bit field definition.
  struct {
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER0 &Instance() { return *reinterpret_cast<volatile NVICICER0*>(0xE000E180); }
};

// Interrupt Clear Enable Register n
//
union NVICICER1 {
  
  // Bit field definition.
  struct {
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER1 &Instance() { return *reinterpret_cast<volatile NVICICER1*>(0xE000E184); }
};

// Interrupt Clear Enable Register n
//
union NVICICER2 {
  
  // Bit field definition.
  struct {
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER2 &Instance() { return *reinterpret_cast<volatile NVICICER2*>(0xE000E188); }
};

// Interrupt Clear Enable Register n
//
union NVICICER3 {
  
  // Bit field definition.
  struct {
    uint32_t CLRENA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICER3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICER3 &Instance() { return *reinterpret_cast<volatile NVICICER3*>(0xE000E18C); }
};

// Interrupt Set Pending Register n
//
union NVICISPR0 {
  
  // Bit field definition.
  struct {
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR0 &Instance() { return *reinterpret_cast<volatile NVICISPR0*>(0xE000E200); }
};

// Interrupt Set Pending Register n
//
union NVICISPR1 {
  
  // Bit field definition.
  struct {
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR1 &Instance() { return *reinterpret_cast<volatile NVICISPR1*>(0xE000E204); }
};

// Interrupt Set Pending Register n
//
union NVICISPR2 {
  
  // Bit field definition.
  struct {
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR2 &Instance() { return *reinterpret_cast<volatile NVICISPR2*>(0xE000E208); }
};

// Interrupt Set Pending Register n
//
union NVICISPR3 {
  
  // Bit field definition.
  struct {
    uint32_t SETPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICISPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICISPR3 &Instance() { return *reinterpret_cast<volatile NVICISPR3*>(0xE000E20C); }
};

// Interrupt Clear Pending Register n
//
union NVICICPR0 {
  
  // Bit field definition.
  struct {
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR0 &Instance() { return *reinterpret_cast<volatile NVICICPR0*>(0xE000E280); }
};

// Interrupt Clear Pending Register n
//
union NVICICPR1 {
  
  // Bit field definition.
  struct {
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR1 &Instance() { return *reinterpret_cast<volatile NVICICPR1*>(0xE000E284); }
};

// Interrupt Clear Pending Register n
//
union NVICICPR2 {
  
  // Bit field definition.
  struct {
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR2 &Instance() { return *reinterpret_cast<volatile NVICICPR2*>(0xE000E288); }
};

// Interrupt Clear Pending Register n
//
union NVICICPR3 {
  
  // Bit field definition.
  struct {
    uint32_t CLRPEND : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICICPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICICPR3 &Instance() { return *reinterpret_cast<volatile NVICICPR3*>(0xE000E28C); }
};

// Interrupt Active bit Register n
//
union NVICIABR0 {
  
  // Bit field definition.
  struct {
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR0 &Instance() { return *reinterpret_cast<volatile NVICIABR0*>(0xE000E300); }
};

// Interrupt Active bit Register n
//
union NVICIABR1 {
  
  // Bit field definition.
  struct {
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR1 &Instance() { return *reinterpret_cast<volatile NVICIABR1*>(0xE000E304); }
};

// Interrupt Active bit Register n
//
union NVICIABR2 {
  
  // Bit field definition.
  struct {
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR2 &Instance() { return *reinterpret_cast<volatile NVICIABR2*>(0xE000E308); }
};

// Interrupt Active bit Register n
//
union NVICIABR3 {
  
  // Bit field definition.
  struct {
    uint32_t ACTIVE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIABR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIABR3 &Instance() { return *reinterpret_cast<volatile NVICIABR3*>(0xE000E30C); }
};

// Interrupt Priority Register 0
//
union NVICIP0 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP6 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP7 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP8 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP9 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP10 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP11 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP12 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP13 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP14 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP15 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP16 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP17 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP18 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP19 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP20 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP21 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP22 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP23 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP24 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP25 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP26 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP27 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP28 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP29 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP30 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP31 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP32 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP33 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP34 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP35 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP36 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP37 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP38 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP39 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP40 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP41 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP42 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP43 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP44 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP45 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP46 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP47 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP48 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP49 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP50 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP51 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP52 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP53 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP54 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP55 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP56 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP57 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP58 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP59 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP60 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP61 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP62 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP63 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP64 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP65 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP66 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP67 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP68 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP69 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP70 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP71 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP72 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP73 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP74 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP75 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP76 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP77 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP78 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP79 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP80 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP81 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP82 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP83 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP84 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP85 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP86 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP87 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP88 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP89 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP90 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP91 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP92 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP93 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP94 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP95 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP96 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP97 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP98 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP99 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP100 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP101 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP102 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP103 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP104 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
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
//
union NVICIP105 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    uint32_t PRI105 : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICIP105() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICIP105 &Instance() { return *reinterpret_cast<volatile NVICIP105*>(0xE000E469); }
};

// Software Trigger Interrupt Register
//
union NVICSTIR {
  
  // Bit field definition.
  struct {
    uint32_t INTID : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NVICSTIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NVICSTIR &Instance() { return *reinterpret_cast<volatile NVICSTIR*>(0xE000EF00); }
};


} // namespace nNVIC