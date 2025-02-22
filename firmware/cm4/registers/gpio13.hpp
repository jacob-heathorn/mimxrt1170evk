#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // GPIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nGPIO13 {


// GPIO data register
//
union DR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DR &Instance() { return *reinterpret_cast<volatile DR*>(0x40CA0000); }
};

// GPIO direction register
//
union GDIR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t GDIR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GDIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GDIR &Instance() { return *reinterpret_cast<volatile GDIR*>(0x40CA0004); }
};

// GPIO pad status register
//
union PSR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PSR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSR &Instance() { return *reinterpret_cast<volatile PSR*>(0x40CA0008); }
};

// GPIO interrupt configuration register1
//
union ICR1 {
  
  // Enum definitions.
  enum class eICR0 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 0 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 0 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 0 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 0 is falling-edge sensitive.
  };
  enum class eICR1 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 1 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 1 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 1 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 1 is falling-edge sensitive.
  };
  enum class eICR2 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 2 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 2 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 2 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 2 is falling-edge sensitive.
  };
  enum class eICR3 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 3 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 3 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 3 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 3 is falling-edge sensitive.
  };
  enum class eICR4 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 4 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 4 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 4 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 4 is falling-edge sensitive.
  };
  enum class eICR5 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 5 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 5 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 5 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 5 is falling-edge sensitive.
  };
  enum class eICR6 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 6 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 6 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 6 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 6 is falling-edge sensitive.
  };
  enum class eICR7 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 7 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 7 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 7 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 7 is falling-edge sensitive.
  };
  enum class eICR8 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 8 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 8 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 8 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 8 is falling-edge sensitive.
  };
  enum class eICR9 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 9 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 9 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 9 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 9 is falling-edge sensitive.
  };
  enum class eICR10 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 10 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 10 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 10 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 10 is falling-edge sensitive.
  };
  enum class eICR11 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 11 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 11 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 11 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 11 is falling-edge sensitive.
  };
  enum class eICR12 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 12 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 12 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 12 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 12 is falling-edge sensitive.
  };
  enum class eICR13 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 13 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 13 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 13 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 13 is falling-edge sensitive.
  };
  enum class eICR14 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 14 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 14 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 14 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 14 is falling-edge sensitive.
  };
  enum class eICR15 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 15 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 15 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 15 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 15 is falling-edge sensitive.
  };
  
  // Bit field definition.
  struct {
    eICR0 ICR0 : 2;
    eICR1 ICR1 : 2;
    eICR2 ICR2 : 2;
    eICR3 ICR3 : 2;
    eICR4 ICR4 : 2;
    eICR5 ICR5 : 2;
    eICR6 ICR6 : 2;
    eICR7 ICR7 : 2;
    eICR8 ICR8 : 2;
    eICR9 ICR9 : 2;
    eICR10 ICR10 : 2;
    eICR11 ICR11 : 2;
    eICR12 ICR12 : 2;
    eICR13 ICR13 : 2;
    eICR14 ICR14 : 2;
    eICR15 ICR15 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ICR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR1 &Instance() { return *reinterpret_cast<volatile ICR1*>(0x40CA000C); }
};

// GPIO interrupt configuration register2
//
union ICR2 {
  
  // Enum definitions.
  enum class eICR16 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 16 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 16 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 16 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 16 is falling-edge sensitive.
  };
  enum class eICR17 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 17 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 17 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 17 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 17 is falling-edge sensitive.
  };
  enum class eICR18 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 18 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 18 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 18 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 18 is falling-edge sensitive.
  };
  enum class eICR19 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 19 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 19 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 19 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 19 is falling-edge sensitive.
  };
  enum class eICR20 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 20 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 20 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 20 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 20 is falling-edge sensitive.
  };
  enum class eICR21 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 21 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 21 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 21 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 21 is falling-edge sensitive.
  };
  enum class eICR22 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 22 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 22 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 22 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 22 is falling-edge sensitive.
  };
  enum class eICR23 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 23 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 23 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 23 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 23 is falling-edge sensitive.
  };
  enum class eICR24 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 24 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 24 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 24 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 24 is falling-edge sensitive.
  };
  enum class eICR25 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 25 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 25 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 25 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 25 is falling-edge sensitive.
  };
  enum class eICR26 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 26 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 26 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 26 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 26 is falling-edge sensitive.
  };
  enum class eICR27 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 27 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 27 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 27 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 27 is falling-edge sensitive.
  };
  enum class eICR28 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 28 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 28 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 28 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 28 is falling-edge sensitive.
  };
  enum class eICR29 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 29 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 29 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 29 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 29 is falling-edge sensitive.
  };
  enum class eICR30 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 30 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 30 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 30 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 30 is falling-edge sensitive.
  };
  enum class eICR31 : uint32_t {
    eLOW_LEVEL = 0, // Interrupt 31 is low-level sensitive.
    eHIGH_LEVEL = 1, // Interrupt 31 is high-level sensitive.
    eRISING_EDGE = 2, // Interrupt 31 is rising-edge sensitive.
    eFALLING_EDGE = 3, // Interrupt 31 is falling-edge sensitive.
  };
  
  // Bit field definition.
  struct {
    eICR16 ICR16 : 2;
    eICR17 ICR17 : 2;
    eICR18 ICR18 : 2;
    eICR19 ICR19 : 2;
    eICR20 ICR20 : 2;
    eICR21 ICR21 : 2;
    eICR22 ICR22 : 2;
    eICR23 ICR23 : 2;
    eICR24 ICR24 : 2;
    eICR25 ICR25 : 2;
    eICR26 ICR26 : 2;
    eICR27 ICR27 : 2;
    eICR28 ICR28 : 2;
    eICR29 ICR29 : 2;
    eICR30 ICR30 : 2;
    eICR31 ICR31 : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ICR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR2 &Instance() { return *reinterpret_cast<volatile ICR2*>(0x40CA0010); }
};

// GPIO interrupt mask register
//
union IMR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t IMR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  IMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMR &Instance() { return *reinterpret_cast<volatile IMR*>(0x40CA0014); }
};

// GPIO interrupt status register
//
union ISR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ISR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ISR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ISR &Instance() { return *reinterpret_cast<volatile ISR*>(0x40CA0018); }
};

// GPIO edge select register
//
union EDGE_SEL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t GPIO_EDGE_SEL : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  EDGE_SEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile EDGE_SEL &Instance() { return *reinterpret_cast<volatile EDGE_SEL*>(0x40CA001C); }
};

// GPIO data register SET
//
union DR_SET {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DR_SET : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DR_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DR_SET &Instance() { return *reinterpret_cast<volatile DR_SET*>(0x40CA0084); }
};

// GPIO data register CLEAR
//
union DR_CLEAR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DR_CLEAR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DR_CLEAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DR_CLEAR &Instance() { return *reinterpret_cast<volatile DR_CLEAR*>(0x40CA0088); }
};

// GPIO data register TOGGLE
//
union DR_TOGGLE {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DR_TOGGLE : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  DR_TOGGLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DR_TOGGLE &Instance() { return *reinterpret_cast<volatile DR_TOGGLE*>(0x40CA008C); }
};


} // namespace nGPIO13