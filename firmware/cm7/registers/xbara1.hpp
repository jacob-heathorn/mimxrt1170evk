#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nXBARA1 {


// Crossbar A Select Register 0
union XBARA1_SEL0 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT0 (refer to Functional Description section for input/output assignment)
    uint32_t SEL0 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT1 (refer to Functional Description section for input/output assignment)
    uint32_t SEL1 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL0 &ref() { return *reinterpret_cast<volatile XBARA1_SEL0*>(0x4003C000); }
};

// Crossbar A Select Register 1
union XBARA1_SEL1 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT2 (refer to Functional Description section for input/output assignment)
    uint32_t SEL2 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT3 (refer to Functional Description section for input/output assignment)
    uint32_t SEL3 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL1 &ref() { return *reinterpret_cast<volatile XBARA1_SEL1*>(0x4003C002); }
};

// Crossbar A Select Register 2
union XBARA1_SEL2 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT4 (refer to Functional Description section for input/output assignment)
    uint32_t SEL4 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT5 (refer to Functional Description section for input/output assignment)
    uint32_t SEL5 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL2 &ref() { return *reinterpret_cast<volatile XBARA1_SEL2*>(0x4003C004); }
};

// Crossbar A Select Register 3
union XBARA1_SEL3 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT6 (refer to Functional Description section for input/output assignment)
    uint32_t SEL6 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT7 (refer to Functional Description section for input/output assignment)
    uint32_t SEL7 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL3 &ref() { return *reinterpret_cast<volatile XBARA1_SEL3*>(0x4003C006); }
};

// Crossbar A Select Register 4
union XBARA1_SEL4 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT8 (refer to Functional Description section for input/output assignment)
    uint32_t SEL8 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT9 (refer to Functional Description section for input/output assignment)
    uint32_t SEL9 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL4 &ref() { return *reinterpret_cast<volatile XBARA1_SEL4*>(0x4003C008); }
};

// Crossbar A Select Register 5
union XBARA1_SEL5 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT10 (refer to Functional Description section for input/output assignment)
    uint32_t SEL10 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT11 (refer to Functional Description section for input/output assignment)
    uint32_t SEL11 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL5 &ref() { return *reinterpret_cast<volatile XBARA1_SEL5*>(0x4003C00A); }
};

// Crossbar A Select Register 6
union XBARA1_SEL6 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT12 (refer to Functional Description section for input/output assignment)
    uint32_t SEL12 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT13 (refer to Functional Description section for input/output assignment)
    uint32_t SEL13 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL6 &ref() { return *reinterpret_cast<volatile XBARA1_SEL6*>(0x4003C00C); }
};

// Crossbar A Select Register 7
union XBARA1_SEL7 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT14 (refer to Functional Description section for input/output assignment)
    uint32_t SEL14 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT15 (refer to Functional Description section for input/output assignment)
    uint32_t SEL15 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL7 &ref() { return *reinterpret_cast<volatile XBARA1_SEL7*>(0x4003C00E); }
};

// Crossbar A Select Register 8
union XBARA1_SEL8 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT16 (refer to Functional Description section for input/output assignment)
    uint32_t SEL16 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT17 (refer to Functional Description section for input/output assignment)
    uint32_t SEL17 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL8 &ref() { return *reinterpret_cast<volatile XBARA1_SEL8*>(0x4003C010); }
};

// Crossbar A Select Register 9
union XBARA1_SEL9 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT18 (refer to Functional Description section for input/output assignment)
    uint32_t SEL18 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT19 (refer to Functional Description section for input/output assignment)
    uint32_t SEL19 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL9 &ref() { return *reinterpret_cast<volatile XBARA1_SEL9*>(0x4003C012); }
};

// Crossbar A Select Register 10
union XBARA1_SEL10 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT20 (refer to Functional Description section for input/output assignment)
    uint32_t SEL20 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT21 (refer to Functional Description section for input/output assignment)
    uint32_t SEL21 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL10 &ref() { return *reinterpret_cast<volatile XBARA1_SEL10*>(0x4003C014); }
};

// Crossbar A Select Register 11
union XBARA1_SEL11 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT22 (refer to Functional Description section for input/output assignment)
    uint32_t SEL22 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT23 (refer to Functional Description section for input/output assignment)
    uint32_t SEL23 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL11 &ref() { return *reinterpret_cast<volatile XBARA1_SEL11*>(0x4003C016); }
};

// Crossbar A Select Register 12
union XBARA1_SEL12 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT24 (refer to Functional Description section for input/output assignment)
    uint32_t SEL24 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT25 (refer to Functional Description section for input/output assignment)
    uint32_t SEL25 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL12 &ref() { return *reinterpret_cast<volatile XBARA1_SEL12*>(0x4003C018); }
};

// Crossbar A Select Register 13
union XBARA1_SEL13 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT26 (refer to Functional Description section for input/output assignment)
    uint32_t SEL26 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT27 (refer to Functional Description section for input/output assignment)
    uint32_t SEL27 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL13 &ref() { return *reinterpret_cast<volatile XBARA1_SEL13*>(0x4003C01A); }
};

// Crossbar A Select Register 14
union XBARA1_SEL14 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT28 (refer to Functional Description section for input/output assignment)
    uint32_t SEL28 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT29 (refer to Functional Description section for input/output assignment)
    uint32_t SEL29 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL14 &ref() { return *reinterpret_cast<volatile XBARA1_SEL14*>(0x4003C01C); }
};

// Crossbar A Select Register 15
union XBARA1_SEL15 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT30 (refer to Functional Description section for input/output assignment)
    uint32_t SEL30 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT31 (refer to Functional Description section for input/output assignment)
    uint32_t SEL31 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL15 &ref() { return *reinterpret_cast<volatile XBARA1_SEL15*>(0x4003C01E); }
};

// Crossbar A Select Register 16
union XBARA1_SEL16 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT32 (refer to Functional Description section for input/output assignment)
    uint32_t SEL32 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT33 (refer to Functional Description section for input/output assignment)
    uint32_t SEL33 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL16 &ref() { return *reinterpret_cast<volatile XBARA1_SEL16*>(0x4003C020); }
};

// Crossbar A Select Register 17
union XBARA1_SEL17 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT34 (refer to Functional Description section for input/output assignment)
    uint32_t SEL34 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT35 (refer to Functional Description section for input/output assignment)
    uint32_t SEL35 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL17 &ref() { return *reinterpret_cast<volatile XBARA1_SEL17*>(0x4003C022); }
};

// Crossbar A Select Register 18
union XBARA1_SEL18 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT36 (refer to Functional Description section for input/output assignment)
    uint32_t SEL36 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT37 (refer to Functional Description section for input/output assignment)
    uint32_t SEL37 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL18 &ref() { return *reinterpret_cast<volatile XBARA1_SEL18*>(0x4003C024); }
};

// Crossbar A Select Register 19
union XBARA1_SEL19 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT38 (refer to Functional Description section for input/output assignment)
    uint32_t SEL38 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT39 (refer to Functional Description section for input/output assignment)
    uint32_t SEL39 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL19 &ref() { return *reinterpret_cast<volatile XBARA1_SEL19*>(0x4003C026); }
};

// Crossbar A Select Register 20
union XBARA1_SEL20 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT40 (refer to Functional Description section for input/output assignment)
    uint32_t SEL40 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT41 (refer to Functional Description section for input/output assignment)
    uint32_t SEL41 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL20 &ref() { return *reinterpret_cast<volatile XBARA1_SEL20*>(0x4003C028); }
};

// Crossbar A Select Register 21
union XBARA1_SEL21 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT42 (refer to Functional Description section for input/output assignment)
    uint32_t SEL42 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT43 (refer to Functional Description section for input/output assignment)
    uint32_t SEL43 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL21 &ref() { return *reinterpret_cast<volatile XBARA1_SEL21*>(0x4003C02A); }
};

// Crossbar A Select Register 22
union XBARA1_SEL22 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT44 (refer to Functional Description section for input/output assignment)
    uint32_t SEL44 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT45 (refer to Functional Description section for input/output assignment)
    uint32_t SEL45 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL22 &ref() { return *reinterpret_cast<volatile XBARA1_SEL22*>(0x4003C02C); }
};

// Crossbar A Select Register 23
union XBARA1_SEL23 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT46 (refer to Functional Description section for input/output assignment)
    uint32_t SEL46 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT47 (refer to Functional Description section for input/output assignment)
    uint32_t SEL47 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL23 &ref() { return *reinterpret_cast<volatile XBARA1_SEL23*>(0x4003C02E); }
};

// Crossbar A Select Register 24
union XBARA1_SEL24 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT48 (refer to Functional Description section for input/output assignment)
    uint32_t SEL48 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT49 (refer to Functional Description section for input/output assignment)
    uint32_t SEL49 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL24 &ref() { return *reinterpret_cast<volatile XBARA1_SEL24*>(0x4003C030); }
};

// Crossbar A Select Register 25
union XBARA1_SEL25 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT50 (refer to Functional Description section for input/output assignment)
    uint32_t SEL50 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT51 (refer to Functional Description section for input/output assignment)
    uint32_t SEL51 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL25 &ref() { return *reinterpret_cast<volatile XBARA1_SEL25*>(0x4003C032); }
};

// Crossbar A Select Register 26
union XBARA1_SEL26 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT52 (refer to Functional Description section for input/output assignment)
    uint32_t SEL52 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT53 (refer to Functional Description section for input/output assignment)
    uint32_t SEL53 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL26() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL26 &ref() { return *reinterpret_cast<volatile XBARA1_SEL26*>(0x4003C034); }
};

// Crossbar A Select Register 27
union XBARA1_SEL27 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT54 (refer to Functional Description section for input/output assignment)
    uint32_t SEL54 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT55 (refer to Functional Description section for input/output assignment)
    uint32_t SEL55 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL27() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL27 &ref() { return *reinterpret_cast<volatile XBARA1_SEL27*>(0x4003C036); }
};

// Crossbar A Select Register 28
union XBARA1_SEL28 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT56 (refer to Functional Description section for input/output assignment)
    uint32_t SEL56 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT57 (refer to Functional Description section for input/output assignment)
    uint32_t SEL57 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL28() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL28 &ref() { return *reinterpret_cast<volatile XBARA1_SEL28*>(0x4003C038); }
};

// Crossbar A Select Register 29
union XBARA1_SEL29 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT58 (refer to Functional Description section for input/output assignment)
    uint32_t SEL58 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT59 (refer to Functional Description section for input/output assignment)
    uint32_t SEL59 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL29() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL29 &ref() { return *reinterpret_cast<volatile XBARA1_SEL29*>(0x4003C03A); }
};

// Crossbar A Select Register 30
union XBARA1_SEL30 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT60 (refer to Functional Description section for input/output assignment)
    uint32_t SEL60 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT61 (refer to Functional Description section for input/output assignment)
    uint32_t SEL61 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL30() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL30 &ref() { return *reinterpret_cast<volatile XBARA1_SEL30*>(0x4003C03C); }
};

// Crossbar A Select Register 31
union XBARA1_SEL31 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT62 (refer to Functional Description section for input/output assignment)
    uint32_t SEL62 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT63 (refer to Functional Description section for input/output assignment)
    uint32_t SEL63 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL31() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL31 &ref() { return *reinterpret_cast<volatile XBARA1_SEL31*>(0x4003C03E); }
};

// Crossbar A Select Register 32
union XBARA1_SEL32 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT64 (refer to Functional Description section for input/output assignment)
    uint32_t SEL64 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT65 (refer to Functional Description section for input/output assignment)
    uint32_t SEL65 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL32 &ref() { return *reinterpret_cast<volatile XBARA1_SEL32*>(0x4003C040); }
};

// Crossbar A Select Register 33
union XBARA1_SEL33 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT66 (refer to Functional Description section for input/output assignment)
    uint32_t SEL66 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT67 (refer to Functional Description section for input/output assignment)
    uint32_t SEL67 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL33 &ref() { return *reinterpret_cast<volatile XBARA1_SEL33*>(0x4003C042); }
};

// Crossbar A Select Register 34
union XBARA1_SEL34 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT68 (refer to Functional Description section for input/output assignment)
    uint32_t SEL68 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT69 (refer to Functional Description section for input/output assignment)
    uint32_t SEL69 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL34 &ref() { return *reinterpret_cast<volatile XBARA1_SEL34*>(0x4003C044); }
};

// Crossbar A Select Register 35
union XBARA1_SEL35 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT70 (refer to Functional Description section for input/output assignment)
    uint32_t SEL70 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT71 (refer to Functional Description section for input/output assignment)
    uint32_t SEL71 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL35 &ref() { return *reinterpret_cast<volatile XBARA1_SEL35*>(0x4003C046); }
};

// Crossbar A Select Register 36
union XBARA1_SEL36 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT72 (refer to Functional Description section for input/output assignment)
    uint32_t SEL72 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT73 (refer to Functional Description section for input/output assignment)
    uint32_t SEL73 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL36 &ref() { return *reinterpret_cast<volatile XBARA1_SEL36*>(0x4003C048); }
};

// Crossbar A Select Register 37
union XBARA1_SEL37 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT74 (refer to Functional Description section for input/output assignment)
    uint32_t SEL74 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT75 (refer to Functional Description section for input/output assignment)
    uint32_t SEL75 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL37 &ref() { return *reinterpret_cast<volatile XBARA1_SEL37*>(0x4003C04A); }
};

// Crossbar A Select Register 38
union XBARA1_SEL38 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT76 (refer to Functional Description section for input/output assignment)
    uint32_t SEL76 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT77 (refer to Functional Description section for input/output assignment)
    uint32_t SEL77 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL38 &ref() { return *reinterpret_cast<volatile XBARA1_SEL38*>(0x4003C04C); }
};

// Crossbar A Select Register 39
union XBARA1_SEL39 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT78 (refer to Functional Description section for input/output assignment)
    uint32_t SEL78 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT79 (refer to Functional Description section for input/output assignment)
    uint32_t SEL79 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL39 &ref() { return *reinterpret_cast<volatile XBARA1_SEL39*>(0x4003C04E); }
};

// Crossbar A Select Register 40
union XBARA1_SEL40 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT80 (refer to Functional Description section for input/output assignment)
    uint32_t SEL80 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT81 (refer to Functional Description section for input/output assignment)
    uint32_t SEL81 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL40 &ref() { return *reinterpret_cast<volatile XBARA1_SEL40*>(0x4003C050); }
};

// Crossbar A Select Register 41
union XBARA1_SEL41 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT82 (refer to Functional Description section for input/output assignment)
    uint32_t SEL82 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT83 (refer to Functional Description section for input/output assignment)
    uint32_t SEL83 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL41 &ref() { return *reinterpret_cast<volatile XBARA1_SEL41*>(0x4003C052); }
};

// Crossbar A Select Register 42
union XBARA1_SEL42 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT84 (refer to Functional Description section for input/output assignment)
    uint32_t SEL84 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT85 (refer to Functional Description section for input/output assignment)
    uint32_t SEL85 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL42() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL42 &ref() { return *reinterpret_cast<volatile XBARA1_SEL42*>(0x4003C054); }
};

// Crossbar A Select Register 43
union XBARA1_SEL43 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT86 (refer to Functional Description section for input/output assignment)
    uint32_t SEL86 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT87 (refer to Functional Description section for input/output assignment)
    uint32_t SEL87 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL43() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL43 &ref() { return *reinterpret_cast<volatile XBARA1_SEL43*>(0x4003C056); }
};

// Crossbar A Select Register 44
union XBARA1_SEL44 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT88 (refer to Functional Description section for input/output assignment)
    uint32_t SEL88 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT89 (refer to Functional Description section for input/output assignment)
    uint32_t SEL89 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL44() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL44 &ref() { return *reinterpret_cast<volatile XBARA1_SEL44*>(0x4003C058); }
};

// Crossbar A Select Register 45
union XBARA1_SEL45 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT90 (refer to Functional Description section for input/output assignment)
    uint32_t SEL90 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT91 (refer to Functional Description section for input/output assignment)
    uint32_t SEL91 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL45() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL45 &ref() { return *reinterpret_cast<volatile XBARA1_SEL45*>(0x4003C05A); }
};

// Crossbar A Select Register 46
union XBARA1_SEL46 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT92 (refer to Functional Description section for input/output assignment)
    uint32_t SEL92 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT93 (refer to Functional Description section for input/output assignment)
    uint32_t SEL93 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL46() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL46 &ref() { return *reinterpret_cast<volatile XBARA1_SEL46*>(0x4003C05C); }
};

// Crossbar A Select Register 47
union XBARA1_SEL47 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT94 (refer to Functional Description section for input/output assignment)
    uint32_t SEL94 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT95 (refer to Functional Description section for input/output assignment)
    uint32_t SEL95 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL47() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL47 &ref() { return *reinterpret_cast<volatile XBARA1_SEL47*>(0x4003C05E); }
};

// Crossbar A Select Register 48
union XBARA1_SEL48 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT96 (refer to Functional Description section for input/output assignment)
    uint32_t SEL96 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT97 (refer to Functional Description section for input/output assignment)
    uint32_t SEL97 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL48() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL48 &ref() { return *reinterpret_cast<volatile XBARA1_SEL48*>(0x4003C060); }
};

// Crossbar A Select Register 49
union XBARA1_SEL49 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT98 (refer to Functional Description section for input/output assignment)
    uint32_t SEL98 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT99 (refer to Functional Description section for input/output assignment)
    uint32_t SEL99 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL49() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL49 &ref() { return *reinterpret_cast<volatile XBARA1_SEL49*>(0x4003C062); }
};

// Crossbar A Select Register 50
union XBARA1_SEL50 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT100 (refer to Functional Description section for input/output assignment)
    uint32_t SEL100 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT101 (refer to Functional Description section for input/output assignment)
    uint32_t SEL101 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL50() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL50 &ref() { return *reinterpret_cast<volatile XBARA1_SEL50*>(0x4003C064); }
};

// Crossbar A Select Register 51
union XBARA1_SEL51 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT102 (refer to Functional Description section for input/output assignment)
    uint32_t SEL102 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT103 (refer to Functional Description section for input/output assignment)
    uint32_t SEL103 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL51() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL51 &ref() { return *reinterpret_cast<volatile XBARA1_SEL51*>(0x4003C066); }
};

// Crossbar A Select Register 52
union XBARA1_SEL52 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT104 (refer to Functional Description section for input/output assignment)
    uint32_t SEL104 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT105 (refer to Functional Description section for input/output assignment)
    uint32_t SEL105 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL52() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL52 &ref() { return *reinterpret_cast<volatile XBARA1_SEL52*>(0x4003C068); }
};

// Crossbar A Select Register 53
union XBARA1_SEL53 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT106 (refer to Functional Description section for input/output assignment)
    uint32_t SEL106 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT107 (refer to Functional Description section for input/output assignment)
    uint32_t SEL107 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL53() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL53 &ref() { return *reinterpret_cast<volatile XBARA1_SEL53*>(0x4003C06A); }
};

// Crossbar A Select Register 54
union XBARA1_SEL54 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT108 (refer to Functional Description section for input/output assignment)
    uint32_t SEL108 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT109 (refer to Functional Description section for input/output assignment)
    uint32_t SEL109 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL54() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL54 &ref() { return *reinterpret_cast<volatile XBARA1_SEL54*>(0x4003C06C); }
};

// Crossbar A Select Register 55
union XBARA1_SEL55 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT110 (refer to Functional Description section for input/output assignment)
    uint32_t SEL110 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT111 (refer to Functional Description section for input/output assignment)
    uint32_t SEL111 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL55() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL55 &ref() { return *reinterpret_cast<volatile XBARA1_SEL55*>(0x4003C06E); }
};

// Crossbar A Select Register 56
union XBARA1_SEL56 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT112 (refer to Functional Description section for input/output assignment)
    uint32_t SEL112 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT113 (refer to Functional Description section for input/output assignment)
    uint32_t SEL113 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL56() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL56 &ref() { return *reinterpret_cast<volatile XBARA1_SEL56*>(0x4003C070); }
};

// Crossbar A Select Register 57
union XBARA1_SEL57 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT114 (refer to Functional Description section for input/output assignment)
    uint32_t SEL114 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT115 (refer to Functional Description section for input/output assignment)
    uint32_t SEL115 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL57() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL57 &ref() { return *reinterpret_cast<volatile XBARA1_SEL57*>(0x4003C072); }
};

// Crossbar A Select Register 58
union XBARA1_SEL58 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT116 (refer to Functional Description section for input/output assignment)
    uint32_t SEL116 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT117 (refer to Functional Description section for input/output assignment)
    uint32_t SEL117 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL58() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL58 &ref() { return *reinterpret_cast<volatile XBARA1_SEL58*>(0x4003C074); }
};

// Crossbar A Select Register 59
union XBARA1_SEL59 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT118 (refer to Functional Description section for input/output assignment)
    uint32_t SEL118 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT119 (refer to Functional Description section for input/output assignment)
    uint32_t SEL119 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL59() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL59 &ref() { return *reinterpret_cast<volatile XBARA1_SEL59*>(0x4003C076); }
};

// Crossbar A Select Register 60
union XBARA1_SEL60 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT120 (refer to Functional Description section for input/output assignment)
    uint32_t SEL120 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT121 (refer to Functional Description section for input/output assignment)
    uint32_t SEL121 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL60() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL60 &ref() { return *reinterpret_cast<volatile XBARA1_SEL60*>(0x4003C078); }
};

// Crossbar A Select Register 61
union XBARA1_SEL61 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT122 (refer to Functional Description section for input/output assignment)
    uint32_t SEL122 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT123 (refer to Functional Description section for input/output assignment)
    uint32_t SEL123 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL61() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL61 &ref() { return *reinterpret_cast<volatile XBARA1_SEL61*>(0x4003C07A); }
};

// Crossbar A Select Register 62
union XBARA1_SEL62 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT124 (refer to Functional Description section for input/output assignment)
    uint32_t SEL124 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT125 (refer to Functional Description section for input/output assignment)
    uint32_t SEL125 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL62() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL62 &ref() { return *reinterpret_cast<volatile XBARA1_SEL62*>(0x4003C07C); }
};

// Crossbar A Select Register 63
union XBARA1_SEL63 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT126 (refer to Functional Description section for input/output assignment)
    uint32_t SEL126 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT127 (refer to Functional Description section for input/output assignment)
    uint32_t SEL127 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL63() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL63 &ref() { return *reinterpret_cast<volatile XBARA1_SEL63*>(0x4003C07E); }
};

// Crossbar A Select Register 64
union XBARA1_SEL64 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT128 (refer to Functional Description section for input/output assignment)
    uint32_t SEL128 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT129 (refer to Functional Description section for input/output assignment)
    uint32_t SEL129 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL64() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL64 &ref() { return *reinterpret_cast<volatile XBARA1_SEL64*>(0x4003C080); }
};

// Crossbar A Select Register 65
union XBARA1_SEL65 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT130 (refer to Functional Description section for input/output assignment)
    uint32_t SEL130 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT131 (refer to Functional Description section for input/output assignment)
    uint32_t SEL131 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL65() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL65 &ref() { return *reinterpret_cast<volatile XBARA1_SEL65*>(0x4003C082); }
};

// Crossbar A Select Register 66
union XBARA1_SEL66 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT132 (refer to Functional Description section for input/output assignment)
    uint32_t SEL132 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT133 (refer to Functional Description section for input/output assignment)
    uint32_t SEL133 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL66() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL66 &ref() { return *reinterpret_cast<volatile XBARA1_SEL66*>(0x4003C084); }
};

// Crossbar A Select Register 67
union XBARA1_SEL67 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT134 (refer to Functional Description section for input/output assignment)
    uint32_t SEL134 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT135 (refer to Functional Description section for input/output assignment)
    uint32_t SEL135 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL67() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL67 &ref() { return *reinterpret_cast<volatile XBARA1_SEL67*>(0x4003C086); }
};

// Crossbar A Select Register 68
union XBARA1_SEL68 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT136 (refer to Functional Description section for input/output assignment)
    uint32_t SEL136 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT137 (refer to Functional Description section for input/output assignment)
    uint32_t SEL137 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL68() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL68 &ref() { return *reinterpret_cast<volatile XBARA1_SEL68*>(0x4003C088); }
};

// Crossbar A Select Register 69
union XBARA1_SEL69 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT138 (refer to Functional Description section for input/output assignment)
    uint32_t SEL138 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT139 (refer to Functional Description section for input/output assignment)
    uint32_t SEL139 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL69() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL69 &ref() { return *reinterpret_cast<volatile XBARA1_SEL69*>(0x4003C08A); }
};

// Crossbar A Select Register 70
union XBARA1_SEL70 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT140 (refer to Functional Description section for input/output assignment)
    uint32_t SEL140 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT141 (refer to Functional Description section for input/output assignment)
    uint32_t SEL141 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL70() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL70 &ref() { return *reinterpret_cast<volatile XBARA1_SEL70*>(0x4003C08C); }
};

// Crossbar A Select Register 71
union XBARA1_SEL71 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT142 (refer to Functional Description section for input/output assignment)
    uint32_t SEL142 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT143 (refer to Functional Description section for input/output assignment)
    uint32_t SEL143 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL71() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL71 &ref() { return *reinterpret_cast<volatile XBARA1_SEL71*>(0x4003C08E); }
};

// Crossbar A Select Register 72
union XBARA1_SEL72 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT144 (refer to Functional Description section for input/output assignment)
    uint32_t SEL144 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT145 (refer to Functional Description section for input/output assignment)
    uint32_t SEL145 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL72() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL72 &ref() { return *reinterpret_cast<volatile XBARA1_SEL72*>(0x4003C090); }
};

// Crossbar A Select Register 73
union XBARA1_SEL73 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT146 (refer to Functional Description section for input/output assignment)
    uint32_t SEL146 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT147 (refer to Functional Description section for input/output assignment)
    uint32_t SEL147 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL73() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL73 &ref() { return *reinterpret_cast<volatile XBARA1_SEL73*>(0x4003C092); }
};

// Crossbar A Select Register 74
union XBARA1_SEL74 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT148 (refer to Functional Description section for input/output assignment)
    uint32_t SEL148 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT149 (refer to Functional Description section for input/output assignment)
    uint32_t SEL149 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL74() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL74 &ref() { return *reinterpret_cast<volatile XBARA1_SEL74*>(0x4003C094); }
};

// Crossbar A Select Register 75
union XBARA1_SEL75 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT150 (refer to Functional Description section for input/output assignment)
    uint32_t SEL150 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT151 (refer to Functional Description section for input/output assignment)
    uint32_t SEL151 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL75() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL75 &ref() { return *reinterpret_cast<volatile XBARA1_SEL75*>(0x4003C096); }
};

// Crossbar A Select Register 76
union XBARA1_SEL76 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT152 (refer to Functional Description section for input/output assignment)
    uint32_t SEL152 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT153 (refer to Functional Description section for input/output assignment)
    uint32_t SEL153 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL76() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL76 &ref() { return *reinterpret_cast<volatile XBARA1_SEL76*>(0x4003C098); }
};

// Crossbar A Select Register 77
union XBARA1_SEL77 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT154 (refer to Functional Description section for input/output assignment)
    uint32_t SEL154 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT155 (refer to Functional Description section for input/output assignment)
    uint32_t SEL155 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL77() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL77 &ref() { return *reinterpret_cast<volatile XBARA1_SEL77*>(0x4003C09A); }
};

// Crossbar A Select Register 78
union XBARA1_SEL78 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT156 (refer to Functional Description section for input/output assignment)
    uint32_t SEL156 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT157 (refer to Functional Description section for input/output assignment)
    uint32_t SEL157 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL78() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL78 &ref() { return *reinterpret_cast<volatile XBARA1_SEL78*>(0x4003C09C); }
};

// Crossbar A Select Register 79
union XBARA1_SEL79 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT158 (refer to Functional Description section for input/output assignment)
    uint32_t SEL158 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT159 (refer to Functional Description section for input/output assignment)
    uint32_t SEL159 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL79() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL79 &ref() { return *reinterpret_cast<volatile XBARA1_SEL79*>(0x4003C09E); }
};

// Crossbar A Select Register 80
union XBARA1_SEL80 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT160 (refer to Functional Description section for input/output assignment)
    uint32_t SEL160 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT161 (refer to Functional Description section for input/output assignment)
    uint32_t SEL161 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL80() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL80 &ref() { return *reinterpret_cast<volatile XBARA1_SEL80*>(0x4003C0A0); }
};

// Crossbar A Select Register 81
union XBARA1_SEL81 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT162 (refer to Functional Description section for input/output assignment)
    uint32_t SEL162 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT163 (refer to Functional Description section for input/output assignment)
    uint32_t SEL163 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL81() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL81 &ref() { return *reinterpret_cast<volatile XBARA1_SEL81*>(0x4003C0A2); }
};

// Crossbar A Select Register 82
union XBARA1_SEL82 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT164 (refer to Functional Description section for input/output assignment)
    uint32_t SEL164 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT165 (refer to Functional Description section for input/output assignment)
    uint32_t SEL165 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL82() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL82 &ref() { return *reinterpret_cast<volatile XBARA1_SEL82*>(0x4003C0A4); }
};

// Crossbar A Select Register 83
union XBARA1_SEL83 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT166 (refer to Functional Description section for input/output assignment)
    uint32_t SEL166 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT167 (refer to Functional Description section for input/output assignment)
    uint32_t SEL167 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL83() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL83 &ref() { return *reinterpret_cast<volatile XBARA1_SEL83*>(0x4003C0A6); }
};

// Crossbar A Select Register 84
union XBARA1_SEL84 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT168 (refer to Functional Description section for input/output assignment)
    uint32_t SEL168 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT169 (refer to Functional Description section for input/output assignment)
    uint32_t SEL169 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL84() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL84 &ref() { return *reinterpret_cast<volatile XBARA1_SEL84*>(0x4003C0A8); }
};

// Crossbar A Select Register 85
union XBARA1_SEL85 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT170 (refer to Functional Description section for input/output assignment)
    uint32_t SEL170 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT171 (refer to Functional Description section for input/output assignment)
    uint32_t SEL171 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL85() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL85 &ref() { return *reinterpret_cast<volatile XBARA1_SEL85*>(0x4003C0AA); }
};

// Crossbar A Select Register 86
union XBARA1_SEL86 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT172 (refer to Functional Description section for input/output assignment)
    uint32_t SEL172 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT173 (refer to Functional Description section for input/output assignment)
    uint32_t SEL173 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL86() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL86 &ref() { return *reinterpret_cast<volatile XBARA1_SEL86*>(0x4003C0AC); }
};

// Crossbar A Select Register 87
union XBARA1_SEL87 {
  
  // Bit field definition.
  struct {
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT174 (refer to Functional Description section for input/output assignment)
    uint32_t SEL174 : 8;
    // read-write - Input (XBARA_INn) to be muxed to XBARA_OUT175 (refer to Functional Description section for input/output assignment)
    uint32_t SEL175 : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_SEL87() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_SEL87 &ref() { return *reinterpret_cast<volatile XBARA1_SEL87*>(0x4003C0AE); }
};

// Crossbar A Control Register 0
union XBARA1_CTRL0 {
  
  // DMA Enable for XBAR_OUT0
  enum class eDEN0 : uint32_t {
    // DMA disabled
    eDEN0_0 = 0,
    // DMA enabled
    eDEN0_1 = 1,
  };
  
  // Interrupt Enable for XBAR_OUT0
  enum class eIEN0 : uint32_t {
    // Interrupt disabled
    eIEN0_0 = 0,
    // Interrupt enabled
    eIEN0_1 = 1,
  };
  
  // Active edge for edge detection on XBAR_OUT0
  enum class eEDGE0 : uint32_t {
    // STS0 never asserts
    eEDGE0_0 = 0,
    // STS0 asserts on rising edges of XBAR_OUT0
    eEDGE0_1 = 1,
    // STS0 asserts on falling edges of XBAR_OUT0
    eEDGE0_2 = 2,
    // STS0 asserts on rising and falling edges of XBAR_OUT0
    eEDGE0_3 = 3,
  };
  
  // Edge detection status for XBAR_OUT0
  enum class eSTS0 : uint32_t {
    // Active edge not yet detected on XBAR_OUT0
    eSTS0_0 = 0,
    // Active edge detected on XBAR_OUT0
    eSTS0_1 = 1,
  };
  
  // DMA Enable for XBAR_OUT1
  enum class eDEN1 : uint32_t {
    // DMA disabled
    eDEN1_0 = 0,
    // DMA enabled
    eDEN1_1 = 1,
  };
  
  // Interrupt Enable for XBAR_OUT1
  enum class eIEN1 : uint32_t {
    // Interrupt disabled
    eIEN1_0 = 0,
    // Interrupt enabled
    eIEN1_1 = 1,
  };
  
  // Active edge for edge detection on XBAR_OUT1
  enum class eEDGE1 : uint32_t {
    // STS1 never asserts
    eEDGE1_0 = 0,
    // STS1 asserts on rising edges of XBAR_OUT1
    eEDGE1_1 = 1,
    // STS1 asserts on falling edges of XBAR_OUT1
    eEDGE1_2 = 2,
    // STS1 asserts on rising and falling edges of XBAR_OUT1
    eEDGE1_3 = 3,
  };
  
  // Edge detection status for XBAR_OUT1
  enum class eSTS1 : uint32_t {
    // Active edge not yet detected on XBAR_OUT1
    eSTS1_0 = 0,
    // Active edge detected on XBAR_OUT1
    eSTS1_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Enable for XBAR_OUT0
    eDEN0 DEN0 : 1;
    // read-write - Interrupt Enable for XBAR_OUT0
    eIEN0 IEN0 : 1;
    // read-write - Active edge for edge detection on XBAR_OUT0
    eEDGE0 EDGE0 : 2;
    // read-write - Edge detection status for XBAR_OUT0
    eSTS0 STS0 : 1;
    uint32_t _reserved_0 : 3;
    // read-write - DMA Enable for XBAR_OUT1
    eDEN1 DEN1 : 1;
    // read-write - Interrupt Enable for XBAR_OUT1
    eIEN1 IEN1 : 1;
    // read-write - Active edge for edge detection on XBAR_OUT1
    eEDGE1 EDGE1 : 2;
    // read-write - Edge detection status for XBAR_OUT1
    eSTS1 STS1 : 1;
    uint32_t _reserved_1 : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_CTRL0 &ref() { return *reinterpret_cast<volatile XBARA1_CTRL0*>(0x4003C0B0); }
};

// Crossbar A Control Register 1
union XBARA1_CTRL1 {
  
  // DMA Enable for XBAR_OUT2
  enum class eDEN2 : uint32_t {
    // DMA disabled
    eDEN2_0 = 0,
    // DMA enabled
    eDEN2_1 = 1,
  };
  
  // Interrupt Enable for XBAR_OUT2
  enum class eIEN2 : uint32_t {
    // Interrupt disabled
    eIEN2_0 = 0,
    // Interrupt enabled
    eIEN2_1 = 1,
  };
  
  // Active edge for edge detection on XBAR_OUT2
  enum class eEDGE2 : uint32_t {
    // STS2 never asserts
    eEDGE2_0 = 0,
    // STS2 asserts on rising edges of XBAR_OUT2
    eEDGE2_1 = 1,
    // STS2 asserts on falling edges of XBAR_OUT2
    eEDGE2_2 = 2,
    // STS2 asserts on rising and falling edges of XBAR_OUT2
    eEDGE2_3 = 3,
  };
  
  // Edge detection status for XBAR_OUT2
  enum class eSTS2 : uint32_t {
    // Active edge not yet detected on XBAR_OUT2
    eSTS2_0 = 0,
    // Active edge detected on XBAR_OUT2
    eSTS2_1 = 1,
  };
  
  // DMA Enable for XBAR_OUT3
  enum class eDEN3 : uint32_t {
    // DMA disabled
    eDEN3_0 = 0,
    // DMA enabled
    eDEN3_1 = 1,
  };
  
  // Interrupt Enable for XBAR_OUT3
  enum class eIEN3 : uint32_t {
    // Interrupt disabled
    eIEN3_0 = 0,
    // Interrupt enabled
    eIEN3_1 = 1,
  };
  
  // Active edge for edge detection on XBAR_OUT3
  enum class eEDGE3 : uint32_t {
    // STS3 never asserts
    eEDGE3_0 = 0,
    // STS3 asserts on rising edges of XBAR_OUT3
    eEDGE3_1 = 1,
    // STS3 asserts on falling edges of XBAR_OUT3
    eEDGE3_2 = 2,
    // STS3 asserts on rising and falling edges of XBAR_OUT3
    eEDGE3_3 = 3,
  };
  
  // Edge detection status for XBAR_OUT3
  enum class eSTS3 : uint32_t {
    // Active edge not yet detected on XBAR_OUT3
    eSTS3_0 = 0,
    // Active edge detected on XBAR_OUT3
    eSTS3_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DMA Enable for XBAR_OUT2
    eDEN2 DEN2 : 1;
    // read-write - Interrupt Enable for XBAR_OUT2
    eIEN2 IEN2 : 1;
    // read-write - Active edge for edge detection on XBAR_OUT2
    eEDGE2 EDGE2 : 2;
    // read-write - Edge detection status for XBAR_OUT2
    eSTS2 STS2 : 1;
    uint32_t _reserved_0 : 3;
    // read-write - DMA Enable for XBAR_OUT3
    eDEN3 DEN3 : 1;
    // read-write - Interrupt Enable for XBAR_OUT3
    eIEN3 IEN3 : 1;
    // read-write - Active edge for edge detection on XBAR_OUT3
    eEDGE3 EDGE3 : 2;
    // read-write - Edge detection status for XBAR_OUT3
    eSTS3 STS3 : 1;
    uint32_t _reserved_1 : 19;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  XBARA1_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile XBARA1_CTRL1 &ref() { return *reinterpret_cast<volatile XBARA1_CTRL1*>(0x4003C0B2); }
};


} // namespace nXBARA1