#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nXBARA1 {


// Crossbar A Select Register 0
//
union XBARA1_SEL0 {
  
  // Bit field definition.
  struct {
    uint32_t SEL0 : 8;
    uint32_t SEL1 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL0 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL0*>(0x4003C000); }
};

// Crossbar A Select Register 1
//
union XBARA1_SEL1 {
  
  // Bit field definition.
  struct {
    uint32_t SEL2 : 8;
    uint32_t SEL3 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL1 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL1*>(0x4003C002); }
};

// Crossbar A Select Register 2
//
union XBARA1_SEL2 {
  
  // Bit field definition.
  struct {
    uint32_t SEL4 : 8;
    uint32_t SEL5 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL2 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL2*>(0x4003C004); }
};

// Crossbar A Select Register 3
//
union XBARA1_SEL3 {
  
  // Bit field definition.
  struct {
    uint32_t SEL6 : 8;
    uint32_t SEL7 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL3 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL3*>(0x4003C006); }
};

// Crossbar A Select Register 4
//
union XBARA1_SEL4 {
  
  // Bit field definition.
  struct {
    uint32_t SEL8 : 8;
    uint32_t SEL9 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL4 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL4*>(0x4003C008); }
};

// Crossbar A Select Register 5
//
union XBARA1_SEL5 {
  
  // Bit field definition.
  struct {
    uint32_t SEL10 : 8;
    uint32_t SEL11 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL5 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL5*>(0x4003C00A); }
};

// Crossbar A Select Register 6
//
union XBARA1_SEL6 {
  
  // Bit field definition.
  struct {
    uint32_t SEL12 : 8;
    uint32_t SEL13 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL6 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL6*>(0x4003C00C); }
};

// Crossbar A Select Register 7
//
union XBARA1_SEL7 {
  
  // Bit field definition.
  struct {
    uint32_t SEL14 : 8;
    uint32_t SEL15 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL7 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL7*>(0x4003C00E); }
};

// Crossbar A Select Register 8
//
union XBARA1_SEL8 {
  
  // Bit field definition.
  struct {
    uint32_t SEL16 : 8;
    uint32_t SEL17 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL8 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL8*>(0x4003C010); }
};

// Crossbar A Select Register 9
//
union XBARA1_SEL9 {
  
  // Bit field definition.
  struct {
    uint32_t SEL18 : 8;
    uint32_t SEL19 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL9 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL9*>(0x4003C012); }
};

// Crossbar A Select Register 10
//
union XBARA1_SEL10 {
  
  // Bit field definition.
  struct {
    uint32_t SEL20 : 8;
    uint32_t SEL21 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL10 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL10*>(0x4003C014); }
};

// Crossbar A Select Register 11
//
union XBARA1_SEL11 {
  
  // Bit field definition.
  struct {
    uint32_t SEL22 : 8;
    uint32_t SEL23 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL11 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL11*>(0x4003C016); }
};

// Crossbar A Select Register 12
//
union XBARA1_SEL12 {
  
  // Bit field definition.
  struct {
    uint32_t SEL24 : 8;
    uint32_t SEL25 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL12 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL12*>(0x4003C018); }
};

// Crossbar A Select Register 13
//
union XBARA1_SEL13 {
  
  // Bit field definition.
  struct {
    uint32_t SEL26 : 8;
    uint32_t SEL27 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL13 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL13*>(0x4003C01A); }
};

// Crossbar A Select Register 14
//
union XBARA1_SEL14 {
  
  // Bit field definition.
  struct {
    uint32_t SEL28 : 8;
    uint32_t SEL29 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL14 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL14*>(0x4003C01C); }
};

// Crossbar A Select Register 15
//
union XBARA1_SEL15 {
  
  // Bit field definition.
  struct {
    uint32_t SEL30 : 8;
    uint32_t SEL31 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL15 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL15*>(0x4003C01E); }
};

// Crossbar A Select Register 16
//
union XBARA1_SEL16 {
  
  // Bit field definition.
  struct {
    uint32_t SEL32 : 8;
    uint32_t SEL33 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL16 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL16*>(0x4003C020); }
};

// Crossbar A Select Register 17
//
union XBARA1_SEL17 {
  
  // Bit field definition.
  struct {
    uint32_t SEL34 : 8;
    uint32_t SEL35 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL17 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL17*>(0x4003C022); }
};

// Crossbar A Select Register 18
//
union XBARA1_SEL18 {
  
  // Bit field definition.
  struct {
    uint32_t SEL36 : 8;
    uint32_t SEL37 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL18 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL18*>(0x4003C024); }
};

// Crossbar A Select Register 19
//
union XBARA1_SEL19 {
  
  // Bit field definition.
  struct {
    uint32_t SEL38 : 8;
    uint32_t SEL39 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL19 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL19*>(0x4003C026); }
};

// Crossbar A Select Register 20
//
union XBARA1_SEL20 {
  
  // Bit field definition.
  struct {
    uint32_t SEL40 : 8;
    uint32_t SEL41 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL20 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL20*>(0x4003C028); }
};

// Crossbar A Select Register 21
//
union XBARA1_SEL21 {
  
  // Bit field definition.
  struct {
    uint32_t SEL42 : 8;
    uint32_t SEL43 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL21 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL21*>(0x4003C02A); }
};

// Crossbar A Select Register 22
//
union XBARA1_SEL22 {
  
  // Bit field definition.
  struct {
    uint32_t SEL44 : 8;
    uint32_t SEL45 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL22 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL22*>(0x4003C02C); }
};

// Crossbar A Select Register 23
//
union XBARA1_SEL23 {
  
  // Bit field definition.
  struct {
    uint32_t SEL46 : 8;
    uint32_t SEL47 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL23 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL23*>(0x4003C02E); }
};

// Crossbar A Select Register 24
//
union XBARA1_SEL24 {
  
  // Bit field definition.
  struct {
    uint32_t SEL48 : 8;
    uint32_t SEL49 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL24 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL24*>(0x4003C030); }
};

// Crossbar A Select Register 25
//
union XBARA1_SEL25 {
  
  // Bit field definition.
  struct {
    uint32_t SEL50 : 8;
    uint32_t SEL51 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL25 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL25*>(0x4003C032); }
};

// Crossbar A Select Register 26
//
union XBARA1_SEL26 {
  
  // Bit field definition.
  struct {
    uint32_t SEL52 : 8;
    uint32_t SEL53 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL26 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL26*>(0x4003C034); }
};

// Crossbar A Select Register 27
//
union XBARA1_SEL27 {
  
  // Bit field definition.
  struct {
    uint32_t SEL54 : 8;
    uint32_t SEL55 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL27 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL27*>(0x4003C036); }
};

// Crossbar A Select Register 28
//
union XBARA1_SEL28 {
  
  // Bit field definition.
  struct {
    uint32_t SEL56 : 8;
    uint32_t SEL57 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL28 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL28*>(0x4003C038); }
};

// Crossbar A Select Register 29
//
union XBARA1_SEL29 {
  
  // Bit field definition.
  struct {
    uint32_t SEL58 : 8;
    uint32_t SEL59 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL29 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL29*>(0x4003C03A); }
};

// Crossbar A Select Register 30
//
union XBARA1_SEL30 {
  
  // Bit field definition.
  struct {
    uint32_t SEL60 : 8;
    uint32_t SEL61 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL30 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL30*>(0x4003C03C); }
};

// Crossbar A Select Register 31
//
union XBARA1_SEL31 {
  
  // Bit field definition.
  struct {
    uint32_t SEL62 : 8;
    uint32_t SEL63 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL31 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL31*>(0x4003C03E); }
};

// Crossbar A Select Register 32
//
union XBARA1_SEL32 {
  
  // Bit field definition.
  struct {
    uint32_t SEL64 : 8;
    uint32_t SEL65 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL32 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL32*>(0x4003C040); }
};

// Crossbar A Select Register 33
//
union XBARA1_SEL33 {
  
  // Bit field definition.
  struct {
    uint32_t SEL66 : 8;
    uint32_t SEL67 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL33 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL33*>(0x4003C042); }
};

// Crossbar A Select Register 34
//
union XBARA1_SEL34 {
  
  // Bit field definition.
  struct {
    uint32_t SEL68 : 8;
    uint32_t SEL69 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL34 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL34*>(0x4003C044); }
};

// Crossbar A Select Register 35
//
union XBARA1_SEL35 {
  
  // Bit field definition.
  struct {
    uint32_t SEL70 : 8;
    uint32_t SEL71 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL35 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL35*>(0x4003C046); }
};

// Crossbar A Select Register 36
//
union XBARA1_SEL36 {
  
  // Bit field definition.
  struct {
    uint32_t SEL72 : 8;
    uint32_t SEL73 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL36 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL36*>(0x4003C048); }
};

// Crossbar A Select Register 37
//
union XBARA1_SEL37 {
  
  // Bit field definition.
  struct {
    uint32_t SEL74 : 8;
    uint32_t SEL75 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL37 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL37*>(0x4003C04A); }
};

// Crossbar A Select Register 38
//
union XBARA1_SEL38 {
  
  // Bit field definition.
  struct {
    uint32_t SEL76 : 8;
    uint32_t SEL77 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL38 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL38*>(0x4003C04C); }
};

// Crossbar A Select Register 39
//
union XBARA1_SEL39 {
  
  // Bit field definition.
  struct {
    uint32_t SEL78 : 8;
    uint32_t SEL79 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL39 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL39*>(0x4003C04E); }
};

// Crossbar A Select Register 40
//
union XBARA1_SEL40 {
  
  // Bit field definition.
  struct {
    uint32_t SEL80 : 8;
    uint32_t SEL81 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL40 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL40*>(0x4003C050); }
};

// Crossbar A Select Register 41
//
union XBARA1_SEL41 {
  
  // Bit field definition.
  struct {
    uint32_t SEL82 : 8;
    uint32_t SEL83 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL41 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL41*>(0x4003C052); }
};

// Crossbar A Select Register 42
//
union XBARA1_SEL42 {
  
  // Bit field definition.
  struct {
    uint32_t SEL84 : 8;
    uint32_t SEL85 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL42 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL42*>(0x4003C054); }
};

// Crossbar A Select Register 43
//
union XBARA1_SEL43 {
  
  // Bit field definition.
  struct {
    uint32_t SEL86 : 8;
    uint32_t SEL87 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL43 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL43*>(0x4003C056); }
};

// Crossbar A Select Register 44
//
union XBARA1_SEL44 {
  
  // Bit field definition.
  struct {
    uint32_t SEL88 : 8;
    uint32_t SEL89 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL44 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL44*>(0x4003C058); }
};

// Crossbar A Select Register 45
//
union XBARA1_SEL45 {
  
  // Bit field definition.
  struct {
    uint32_t SEL90 : 8;
    uint32_t SEL91 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL45 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL45*>(0x4003C05A); }
};

// Crossbar A Select Register 46
//
union XBARA1_SEL46 {
  
  // Bit field definition.
  struct {
    uint32_t SEL92 : 8;
    uint32_t SEL93 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL46 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL46*>(0x4003C05C); }
};

// Crossbar A Select Register 47
//
union XBARA1_SEL47 {
  
  // Bit field definition.
  struct {
    uint32_t SEL94 : 8;
    uint32_t SEL95 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL47 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL47*>(0x4003C05E); }
};

// Crossbar A Select Register 48
//
union XBARA1_SEL48 {
  
  // Bit field definition.
  struct {
    uint32_t SEL96 : 8;
    uint32_t SEL97 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL48 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL48*>(0x4003C060); }
};

// Crossbar A Select Register 49
//
union XBARA1_SEL49 {
  
  // Bit field definition.
  struct {
    uint32_t SEL98 : 8;
    uint32_t SEL99 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL49 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL49*>(0x4003C062); }
};

// Crossbar A Select Register 50
//
union XBARA1_SEL50 {
  
  // Bit field definition.
  struct {
    uint32_t SEL100 : 8;
    uint32_t SEL101 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL50 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL50*>(0x4003C064); }
};

// Crossbar A Select Register 51
//
union XBARA1_SEL51 {
  
  // Bit field definition.
  struct {
    uint32_t SEL102 : 8;
    uint32_t SEL103 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL51 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL51*>(0x4003C066); }
};

// Crossbar A Select Register 52
//
union XBARA1_SEL52 {
  
  // Bit field definition.
  struct {
    uint32_t SEL104 : 8;
    uint32_t SEL105 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL52 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL52*>(0x4003C068); }
};

// Crossbar A Select Register 53
//
union XBARA1_SEL53 {
  
  // Bit field definition.
  struct {
    uint32_t SEL106 : 8;
    uint32_t SEL107 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL53 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL53*>(0x4003C06A); }
};

// Crossbar A Select Register 54
//
union XBARA1_SEL54 {
  
  // Bit field definition.
  struct {
    uint32_t SEL108 : 8;
    uint32_t SEL109 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL54 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL54*>(0x4003C06C); }
};

// Crossbar A Select Register 55
//
union XBARA1_SEL55 {
  
  // Bit field definition.
  struct {
    uint32_t SEL110 : 8;
    uint32_t SEL111 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL55 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL55*>(0x4003C06E); }
};

// Crossbar A Select Register 56
//
union XBARA1_SEL56 {
  
  // Bit field definition.
  struct {
    uint32_t SEL112 : 8;
    uint32_t SEL113 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL56 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL56*>(0x4003C070); }
};

// Crossbar A Select Register 57
//
union XBARA1_SEL57 {
  
  // Bit field definition.
  struct {
    uint32_t SEL114 : 8;
    uint32_t SEL115 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL57 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL57*>(0x4003C072); }
};

// Crossbar A Select Register 58
//
union XBARA1_SEL58 {
  
  // Bit field definition.
  struct {
    uint32_t SEL116 : 8;
    uint32_t SEL117 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL58 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL58*>(0x4003C074); }
};

// Crossbar A Select Register 59
//
union XBARA1_SEL59 {
  
  // Bit field definition.
  struct {
    uint32_t SEL118 : 8;
    uint32_t SEL119 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL59 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL59*>(0x4003C076); }
};

// Crossbar A Select Register 60
//
union XBARA1_SEL60 {
  
  // Bit field definition.
  struct {
    uint32_t SEL120 : 8;
    uint32_t SEL121 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL60 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL60*>(0x4003C078); }
};

// Crossbar A Select Register 61
//
union XBARA1_SEL61 {
  
  // Bit field definition.
  struct {
    uint32_t SEL122 : 8;
    uint32_t SEL123 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL61 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL61*>(0x4003C07A); }
};

// Crossbar A Select Register 62
//
union XBARA1_SEL62 {
  
  // Bit field definition.
  struct {
    uint32_t SEL124 : 8;
    uint32_t SEL125 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL62 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL62*>(0x4003C07C); }
};

// Crossbar A Select Register 63
//
union XBARA1_SEL63 {
  
  // Bit field definition.
  struct {
    uint32_t SEL126 : 8;
    uint32_t SEL127 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL63 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL63*>(0x4003C07E); }
};

// Crossbar A Select Register 64
//
union XBARA1_SEL64 {
  
  // Bit field definition.
  struct {
    uint32_t SEL128 : 8;
    uint32_t SEL129 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL64 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL64*>(0x4003C080); }
};

// Crossbar A Select Register 65
//
union XBARA1_SEL65 {
  
  // Bit field definition.
  struct {
    uint32_t SEL130 : 8;
    uint32_t SEL131 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL65() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL65 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL65*>(0x4003C082); }
};

// Crossbar A Select Register 66
//
union XBARA1_SEL66 {
  
  // Bit field definition.
  struct {
    uint32_t SEL132 : 8;
    uint32_t SEL133 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL66() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL66 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL66*>(0x4003C084); }
};

// Crossbar A Select Register 67
//
union XBARA1_SEL67 {
  
  // Bit field definition.
  struct {
    uint32_t SEL134 : 8;
    uint32_t SEL135 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL67() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL67 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL67*>(0x4003C086); }
};

// Crossbar A Select Register 68
//
union XBARA1_SEL68 {
  
  // Bit field definition.
  struct {
    uint32_t SEL136 : 8;
    uint32_t SEL137 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL68() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL68 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL68*>(0x4003C088); }
};

// Crossbar A Select Register 69
//
union XBARA1_SEL69 {
  
  // Bit field definition.
  struct {
    uint32_t SEL138 : 8;
    uint32_t SEL139 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL69() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL69 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL69*>(0x4003C08A); }
};

// Crossbar A Select Register 70
//
union XBARA1_SEL70 {
  
  // Bit field definition.
  struct {
    uint32_t SEL140 : 8;
    uint32_t SEL141 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL70() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL70 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL70*>(0x4003C08C); }
};

// Crossbar A Select Register 71
//
union XBARA1_SEL71 {
  
  // Bit field definition.
  struct {
    uint32_t SEL142 : 8;
    uint32_t SEL143 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL71() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL71 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL71*>(0x4003C08E); }
};

// Crossbar A Select Register 72
//
union XBARA1_SEL72 {
  
  // Bit field definition.
  struct {
    uint32_t SEL144 : 8;
    uint32_t SEL145 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL72() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL72 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL72*>(0x4003C090); }
};

// Crossbar A Select Register 73
//
union XBARA1_SEL73 {
  
  // Bit field definition.
  struct {
    uint32_t SEL146 : 8;
    uint32_t SEL147 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL73() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL73 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL73*>(0x4003C092); }
};

// Crossbar A Select Register 74
//
union XBARA1_SEL74 {
  
  // Bit field definition.
  struct {
    uint32_t SEL148 : 8;
    uint32_t SEL149 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL74() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL74 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL74*>(0x4003C094); }
};

// Crossbar A Select Register 75
//
union XBARA1_SEL75 {
  
  // Bit field definition.
  struct {
    uint32_t SEL150 : 8;
    uint32_t SEL151 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL75() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL75 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL75*>(0x4003C096); }
};

// Crossbar A Select Register 76
//
union XBARA1_SEL76 {
  
  // Bit field definition.
  struct {
    uint32_t SEL152 : 8;
    uint32_t SEL153 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL76() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL76 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL76*>(0x4003C098); }
};

// Crossbar A Select Register 77
//
union XBARA1_SEL77 {
  
  // Bit field definition.
  struct {
    uint32_t SEL154 : 8;
    uint32_t SEL155 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL77() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL77 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL77*>(0x4003C09A); }
};

// Crossbar A Select Register 78
//
union XBARA1_SEL78 {
  
  // Bit field definition.
  struct {
    uint32_t SEL156 : 8;
    uint32_t SEL157 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL78() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL78 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL78*>(0x4003C09C); }
};

// Crossbar A Select Register 79
//
union XBARA1_SEL79 {
  
  // Bit field definition.
  struct {
    uint32_t SEL158 : 8;
    uint32_t SEL159 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL79() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL79 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL79*>(0x4003C09E); }
};

// Crossbar A Select Register 80
//
union XBARA1_SEL80 {
  
  // Bit field definition.
  struct {
    uint32_t SEL160 : 8;
    uint32_t SEL161 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL80() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL80 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL80*>(0x4003C0A0); }
};

// Crossbar A Select Register 81
//
union XBARA1_SEL81 {
  
  // Bit field definition.
  struct {
    uint32_t SEL162 : 8;
    uint32_t SEL163 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL81() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL81 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL81*>(0x4003C0A2); }
};

// Crossbar A Select Register 82
//
union XBARA1_SEL82 {
  
  // Bit field definition.
  struct {
    uint32_t SEL164 : 8;
    uint32_t SEL165 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL82() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL82 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL82*>(0x4003C0A4); }
};

// Crossbar A Select Register 83
//
union XBARA1_SEL83 {
  
  // Bit field definition.
  struct {
    uint32_t SEL166 : 8;
    uint32_t SEL167 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL83() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL83 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL83*>(0x4003C0A6); }
};

// Crossbar A Select Register 84
//
union XBARA1_SEL84 {
  
  // Bit field definition.
  struct {
    uint32_t SEL168 : 8;
    uint32_t SEL169 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL84() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL84 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL84*>(0x4003C0A8); }
};

// Crossbar A Select Register 85
//
union XBARA1_SEL85 {
  
  // Bit field definition.
  struct {
    uint32_t SEL170 : 8;
    uint32_t SEL171 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL85() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL85 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL85*>(0x4003C0AA); }
};

// Crossbar A Select Register 86
//
union XBARA1_SEL86 {
  
  // Bit field definition.
  struct {
    uint32_t SEL172 : 8;
    uint32_t SEL173 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL86() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL86 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL86*>(0x4003C0AC); }
};

// Crossbar A Select Register 87
//
union XBARA1_SEL87 {
  
  // Bit field definition.
  struct {
    uint32_t SEL174 : 8;
    uint32_t SEL175 : 8;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL87() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL87 &Instance() { return *reinterpret_cast<volatile XBARA1_SEL87*>(0x4003C0AE); }
};

// Crossbar A Control Register 0
//
union XBARA1_CTRL0 {
  
  enum class eDEN0 : uint32_t {
    eDEN0_0 = 0, // DMA disabled
    eDEN0_1 = 1, // DMA enabled
  };
  
  enum class eIEN0 : uint32_t {
    eIEN0_0 = 0, // Interrupt disabled
    eIEN0_1 = 1, // Interrupt enabled
  };
  
  enum class eEDGE0 : uint32_t {
    eEDGE0_0 = 0, // STS0 never asserts
    eEDGE0_1 = 1, // STS0 asserts on rising edges of XBAR_OUT0
    eEDGE0_2 = 2, // STS0 asserts on falling edges of XBAR_OUT0
    eEDGE0_3 = 3, // STS0 asserts on rising and falling edges of XBAR_OUT0
  };
  
  enum class eSTS0 : uint32_t {
    eSTS0_0 = 0, // Active edge not yet detected on XBAR_OUT0
    eSTS0_1 = 1, // Active edge detected on XBAR_OUT0
  };
  
  enum class eDEN1 : uint32_t {
    eDEN1_0 = 0, // DMA disabled
    eDEN1_1 = 1, // DMA enabled
  };
  
  enum class eIEN1 : uint32_t {
    eIEN1_0 = 0, // Interrupt disabled
    eIEN1_1 = 1, // Interrupt enabled
  };
  
  enum class eEDGE1 : uint32_t {
    eEDGE1_0 = 0, // STS1 never asserts
    eEDGE1_1 = 1, // STS1 asserts on rising edges of XBAR_OUT1
    eEDGE1_2 = 2, // STS1 asserts on falling edges of XBAR_OUT1
    eEDGE1_3 = 3, // STS1 asserts on rising and falling edges of XBAR_OUT1
  };
  
  enum class eSTS1 : uint32_t {
    eSTS1_0 = 0, // Active edge not yet detected on XBAR_OUT1
    eSTS1_1 = 1, // Active edge detected on XBAR_OUT1
  };
  
  // Bit field definition.
  struct {
    eDEN0 DEN0 : 1;
    eIEN0 IEN0 : 1;
    eEDGE0 EDGE0 : 2;
    eSTS0 STS0 : 1;
    uint32_t _reserved_4 : 3;
    eDEN1 DEN1 : 1;
    eIEN1 IEN1 : 1;
    eEDGE1 EDGE1 : 2;
    eSTS1 STS1 : 1;
    uint32_t _reserved_end : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_CTRL0 &Instance() { return *reinterpret_cast<volatile XBARA1_CTRL0*>(0x4003C0B0); }
};

// Crossbar A Control Register 1
//
union XBARA1_CTRL1 {
  
  enum class eDEN2 : uint32_t {
    eDEN2_0 = 0, // DMA disabled
    eDEN2_1 = 1, // DMA enabled
  };
  
  enum class eIEN2 : uint32_t {
    eIEN2_0 = 0, // Interrupt disabled
    eIEN2_1 = 1, // Interrupt enabled
  };
  
  enum class eEDGE2 : uint32_t {
    eEDGE2_0 = 0, // STS2 never asserts
    eEDGE2_1 = 1, // STS2 asserts on rising edges of XBAR_OUT2
    eEDGE2_2 = 2, // STS2 asserts on falling edges of XBAR_OUT2
    eEDGE2_3 = 3, // STS2 asserts on rising and falling edges of XBAR_OUT2
  };
  
  enum class eSTS2 : uint32_t {
    eSTS2_0 = 0, // Active edge not yet detected on XBAR_OUT2
    eSTS2_1 = 1, // Active edge detected on XBAR_OUT2
  };
  
  enum class eDEN3 : uint32_t {
    eDEN3_0 = 0, // DMA disabled
    eDEN3_1 = 1, // DMA enabled
  };
  
  enum class eIEN3 : uint32_t {
    eIEN3_0 = 0, // Interrupt disabled
    eIEN3_1 = 1, // Interrupt enabled
  };
  
  enum class eEDGE3 : uint32_t {
    eEDGE3_0 = 0, // STS3 never asserts
    eEDGE3_1 = 1, // STS3 asserts on rising edges of XBAR_OUT3
    eEDGE3_2 = 2, // STS3 asserts on falling edges of XBAR_OUT3
    eEDGE3_3 = 3, // STS3 asserts on rising and falling edges of XBAR_OUT3
  };
  
  enum class eSTS3 : uint32_t {
    eSTS3_0 = 0, // Active edge not yet detected on XBAR_OUT3
    eSTS3_1 = 1, // Active edge detected on XBAR_OUT3
  };
  
  // Bit field definition.
  struct {
    eDEN2 DEN2 : 1;
    eIEN2 IEN2 : 1;
    eEDGE2 EDGE2 : 2;
    eSTS2 STS2 : 1;
    uint32_t _reserved_4 : 3;
    eDEN3 DEN3 : 1;
    eIEN3 IEN3 : 1;
    eEDGE3 EDGE3 : 2;
    eSTS3 STS3 : 1;
    uint32_t _reserved_end : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_CTRL1 &Instance() { return *reinterpret_cast<volatile XBARA1_CTRL1*>(0x4003C0B2); }
};


} // namespace nXBARA1