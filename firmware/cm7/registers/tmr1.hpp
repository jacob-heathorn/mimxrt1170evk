#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// TMR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nTMR1 {


// Timer Channel Compare Register 1
//
union COMP10 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP10 &Instance() { return *reinterpret_cast<volatile COMP10*>(0x4015C000); }
};

// Timer Channel Compare Register 2
//
union COMP20 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP20 &Instance() { return *reinterpret_cast<volatile COMP20*>(0x4015C002); }
};

// Timer Channel Capture Register
//
union CAPT0 {
  
  // Bit field definition.
  struct {
    uint32_t CAPTURE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAPT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT0 &Instance() { return *reinterpret_cast<volatile CAPT0*>(0x4015C004); }
};

// Timer Channel Load Register
//
union LOAD0 {
  
  // Bit field definition.
  struct {
    uint32_t LOAD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOAD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD0 &Instance() { return *reinterpret_cast<volatile LOAD0*>(0x4015C006); }
};

// Timer Channel Hold Register
//
union HOLD0 {
  
  // Bit field definition.
  struct {
    uint32_t HOLD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOLD0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD0 &Instance() { return *reinterpret_cast<volatile HOLD0*>(0x4015C008); }
};

// Timer Channel Counter Register
//
union CNTR0 {
  
  // Bit field definition.
  struct {
    uint32_t COUNTER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNTR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR0 &Instance() { return *reinterpret_cast<volatile CNTR0*>(0x4015C00A); }
};

// Timer Channel Control Register
//
union CTRL0 {
  
  enum class eOUTMODE : uint32_t {
    eCOUNTER_ACTIVE = 0, // Asserted while counter is active
    eCLEAR_OFLAG = 1, // Clear OFLAG output on successful compare
    eSET_OFLAG = 2, // Set OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3, // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_ALT = 4, // Toggle OFLAG output using alternating compare registers
    eCLEAR_ON_SECONDARY = 5, // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_ROLLOVER = 6, // Set on compare, cleared on counter rollover
    eENABLE_GATED_OUT = 7, // Enable gated clock output while counter is active
  };
  
  enum class eCOINIT : uint32_t {
    eDISABLE = 0, // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eENABLE = 1, // Co-channel counter/timers may force a re-initialization of this counter/timer
  };
  
  enum class eDIR : uint32_t {
    eCOUNTUP = 0, // Count up.
    eCOUNTDOWN = 1, // Count down.
  };
  
  enum class eLENGTH : uint32_t {
    eUNTIL_ROLLOVER = 0, // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_COMPARE = 1, // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
  };
  
  enum class eONCE : uint32_t {
    eREPEAT = 0, // Count repeatedly.
    eUNTIL_COMPARE = 1, // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
  };
  
  enum class eSCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
  };
  
  enum class ePCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
    eCOUNTER0_OUT = 4, // Counter 0 output
    eCOUNTER1_OUT = 5, // Counter 1 output
    eCOUNTER2_OUT = 6, // Counter 2 output
    eCOUNTER3_OUT = 7, // Counter 3 output
    eBUS_DIVBY1 = 8, // IP bus clock divide by 1 prescaler
    eBUS_DIVBY2 = 9, // IP bus clock divide by 2 prescaler
    eBUS_DIVBY4 = 10, // IP bus clock divide by 4 prescaler
    eBUS_DIVBY8 = 11, // IP bus clock divide by 8 prescaler
    eBUS_DIVBY16 = 12, // IP bus clock divide by 16 prescaler
    eBUS_DIVBY32 = 13, // IP bus clock divide by 32 prescaler
    eBUS_DIVBY64 = 14, // IP bus clock divide by 64 prescaler
    eBUS_DIVBY128 = 15, // IP bus clock divide by 128 prescaler
  };
  
  enum class eCM : uint32_t {
    eNOOP = 0, // No operation
    eRISING_ONLY = 1, // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_AND_FALLING = 2, // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_WHILE_SEC_HIGH = 3, // Count rising edges of primary source while secondary input high active
    eQUADRATURE = 4, // Quadrature count mode, uses primary and secondary sources
    eRISING_SEC_DIR = 5, // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eSECONDARY = 6, // Edge of secondary source triggers primary count until compare
    eCASCADE = 7, // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
  };
  
  // Bit field definition.
  struct {
    eOUTMODE OUTMODE : 3;
    eCOINIT COINIT : 1;
    eDIR DIR : 1;
    eLENGTH LENGTH : 1;
    eONCE ONCE : 1;
    eSCS SCS : 2;
    ePCS PCS : 4;
    eCM CM : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x4015C00C); }
};

// Timer Channel Status and Control Register
//
union SCTRL0 {
  
  enum class eOEN : uint32_t {
    eINPUT = 0, // The external pin is configured as an input.
    eOFLAG_OUT = 1, // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
  };
  
  enum class eOPS : uint32_t {
    eTRUE = 0, // True polarity.
    eINVERTED = 1, // Inverted polarity.
  };
  
  enum class eCAPTURE_MODE : uint32_t {
    eDISABLED = 0, // Capture function is disabled
    eENABLE_RISING = 1, // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_FALLING = 2, // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_BOTH = 3, // Load capture register on both edges of input
  };
  
  // Bit field definition.
  struct {
    eOEN OEN : 1;
    eOPS OPS : 1;
    uint32_t FORCE : 1;
    uint32_t VAL : 1;
    uint32_t EEOF : 1;
    uint32_t MSTR : 1;
    eCAPTURE_MODE CAPTURE_MODE : 2;
    uint32_t INPUT : 1;
    uint32_t IPS : 1;
    uint32_t IEFIE : 1;
    uint32_t IEF : 1;
    uint32_t TOFIE : 1;
    uint32_t TOF : 1;
    uint32_t TCFIE : 1;
    uint32_t TCF : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL0 &Instance() { return *reinterpret_cast<volatile SCTRL0*>(0x4015C00E); }
};

// Timer Channel Comparator Load Register 1
//
union CMPLD10 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD10 &Instance() { return *reinterpret_cast<volatile CMPLD10*>(0x4015C010); }
};

// Timer Channel Comparator Load Register 2
//
union CMPLD20 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD20 &Instance() { return *reinterpret_cast<volatile CMPLD20*>(0x4015C012); }
};

// Timer Channel Comparator Status and Control Register
//
union CSCTRL0 {
  
  enum class eCL1 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eCL2 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eUP : uint32_t {
    eDOWN = 0, // The last count was in the DOWN direction.
    eUP = 1, // The last count was in the UP direction.
  };
  
  enum class eTCI : uint32_t {
    eSTOP = 0, // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1, // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
  };
  
  enum class eROC : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eALT_LOAD : uint32_t {
    eDISABLE = 0, // Counter can be re-initialized only with the LOAD register.
    eENABLE = 1, // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
  };
  
  enum class eFAULT : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eDBG_EN : uint32_t {
    eNORMAL = 0, // Continue with normal operation during debug mode. (default)
    eHALT_TMR = 1, // Halt TMR counter during debug mode.
    eFORCE_0 = 2, // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eHALT_AND_FORCE_0 = 3, // Both halt counter and force output to 0 during debug mode.
  };
  
  // Bit field definition.
  struct {
    eCL1 CL1 : 2;
    eCL2 CL2 : 2;
    uint32_t TCF1 : 1;
    uint32_t TCF2 : 1;
    uint32_t TCF1EN : 1;
    uint32_t TCF2EN : 1;
    uint32_t OFLAG : 1;
    eUP UP : 1;
    eTCI TCI : 1;
    eROC ROC : 1;
    eALT_LOAD ALT_LOAD : 1;
    eFAULT FAULT : 1;
    eDBG_EN DBG_EN : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL0 &Instance() { return *reinterpret_cast<volatile CSCTRL0*>(0x4015C014); }
};

// Timer Channel Input Filter Register
//
union FILT0 {
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT0 &Instance() { return *reinterpret_cast<volatile FILT0*>(0x4015C016); }
};

// Timer Channel DMA Enable Register
//
union DMA0 {
  
  // Bit field definition.
  struct {
    uint32_t IEFDE : 1;
    uint32_t CMPLD1DE : 1;
    uint32_t CMPLD2DE : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA0 &Instance() { return *reinterpret_cast<volatile DMA0*>(0x4015C018); }
};

// Timer Channel Enable Register
//
union ENBL {
  
  enum class eENBL : uint32_t {
    eDISABLE = 0, // Disables the timer channel.
    eENABLE = 1, // Enables the timer channel. (default)
  };
  
  // Bit field definition.
  struct {
    eENBL ENBL : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENBL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile ENBL &Instance() { return *reinterpret_cast<volatile ENBL*>(0x4015C01E); }
};

// Timer Channel Compare Register 1
//
union COMP11 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP11 &Instance() { return *reinterpret_cast<volatile COMP11*>(0x4015C020); }
};

// Timer Channel Compare Register 2
//
union COMP21 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP21 &Instance() { return *reinterpret_cast<volatile COMP21*>(0x4015C022); }
};

// Timer Channel Capture Register
//
union CAPT1 {
  
  // Bit field definition.
  struct {
    uint32_t CAPTURE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAPT1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT1 &Instance() { return *reinterpret_cast<volatile CAPT1*>(0x4015C024); }
};

// Timer Channel Load Register
//
union LOAD1 {
  
  // Bit field definition.
  struct {
    uint32_t LOAD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOAD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD1 &Instance() { return *reinterpret_cast<volatile LOAD1*>(0x4015C026); }
};

// Timer Channel Hold Register
//
union HOLD1 {
  
  // Bit field definition.
  struct {
    uint32_t HOLD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOLD1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD1 &Instance() { return *reinterpret_cast<volatile HOLD1*>(0x4015C028); }
};

// Timer Channel Counter Register
//
union CNTR1 {
  
  // Bit field definition.
  struct {
    uint32_t COUNTER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNTR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR1 &Instance() { return *reinterpret_cast<volatile CNTR1*>(0x4015C02A); }
};

// Timer Channel Control Register
//
union CTRL1 {
  
  enum class eOUTMODE : uint32_t {
    eCOUNTER_ACTIVE = 0, // Asserted while counter is active
    eCLEAR_OFLAG = 1, // Clear OFLAG output on successful compare
    eSET_OFLAG = 2, // Set OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3, // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_ALT = 4, // Toggle OFLAG output using alternating compare registers
    eCLEAR_ON_SECONDARY = 5, // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_ROLLOVER = 6, // Set on compare, cleared on counter rollover
    eENABLE_GATED_OUT = 7, // Enable gated clock output while counter is active
  };
  
  enum class eCOINIT : uint32_t {
    eDISABLE = 0, // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eENABLE = 1, // Co-channel counter/timers may force a re-initialization of this counter/timer
  };
  
  enum class eDIR : uint32_t {
    eCOUNTUP = 0, // Count up.
    eCOUNTDOWN = 1, // Count down.
  };
  
  enum class eLENGTH : uint32_t {
    eUNTIL_ROLLOVER = 0, // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_COMPARE = 1, // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
  };
  
  enum class eONCE : uint32_t {
    eREPEAT = 0, // Count repeatedly.
    eUNTIL_COMPARE = 1, // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
  };
  
  enum class eSCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
  };
  
  enum class ePCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
    eCOUNTER0_OUT = 4, // Counter 0 output
    eCOUNTER1_OUT = 5, // Counter 1 output
    eCOUNTER2_OUT = 6, // Counter 2 output
    eCOUNTER3_OUT = 7, // Counter 3 output
    eBUS_DIVBY1 = 8, // IP bus clock divide by 1 prescaler
    eBUS_DIVBY2 = 9, // IP bus clock divide by 2 prescaler
    eBUS_DIVBY4 = 10, // IP bus clock divide by 4 prescaler
    eBUS_DIVBY8 = 11, // IP bus clock divide by 8 prescaler
    eBUS_DIVBY16 = 12, // IP bus clock divide by 16 prescaler
    eBUS_DIVBY32 = 13, // IP bus clock divide by 32 prescaler
    eBUS_DIVBY64 = 14, // IP bus clock divide by 64 prescaler
    eBUS_DIVBY128 = 15, // IP bus clock divide by 128 prescaler
  };
  
  enum class eCM : uint32_t {
    eNOOP = 0, // No operation
    eRISING_ONLY = 1, // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_AND_FALLING = 2, // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_WHILE_SEC_HIGH = 3, // Count rising edges of primary source while secondary input high active
    eQUADRATURE = 4, // Quadrature count mode, uses primary and secondary sources
    eRISING_SEC_DIR = 5, // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eSECONDARY = 6, // Edge of secondary source triggers primary count until compare
    eCASCADE = 7, // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
  };
  
  // Bit field definition.
  struct {
    eOUTMODE OUTMODE : 3;
    eCOINIT COINIT : 1;
    eDIR DIR : 1;
    eLENGTH LENGTH : 1;
    eONCE ONCE : 1;
    eSCS SCS : 2;
    ePCS PCS : 4;
    eCM CM : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x4015C02C); }
};

// Timer Channel Status and Control Register
//
union SCTRL1 {
  
  enum class eOEN : uint32_t {
    eINPUT = 0, // The external pin is configured as an input.
    eOFLAG_OUT = 1, // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
  };
  
  enum class eOPS : uint32_t {
    eTRUE = 0, // True polarity.
    eINVERTED = 1, // Inverted polarity.
  };
  
  enum class eCAPTURE_MODE : uint32_t {
    eDISABLED = 0, // Capture function is disabled
    eENABLE_RISING = 1, // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_FALLING = 2, // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_BOTH = 3, // Load capture register on both edges of input
  };
  
  // Bit field definition.
  struct {
    eOEN OEN : 1;
    eOPS OPS : 1;
    uint32_t FORCE : 1;
    uint32_t VAL : 1;
    uint32_t EEOF : 1;
    uint32_t MSTR : 1;
    eCAPTURE_MODE CAPTURE_MODE : 2;
    uint32_t INPUT : 1;
    uint32_t IPS : 1;
    uint32_t IEFIE : 1;
    uint32_t IEF : 1;
    uint32_t TOFIE : 1;
    uint32_t TOF : 1;
    uint32_t TCFIE : 1;
    uint32_t TCF : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL1 &Instance() { return *reinterpret_cast<volatile SCTRL1*>(0x4015C02E); }
};

// Timer Channel Comparator Load Register 1
//
union CMPLD11 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD11 &Instance() { return *reinterpret_cast<volatile CMPLD11*>(0x4015C030); }
};

// Timer Channel Comparator Load Register 2
//
union CMPLD21 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD21 &Instance() { return *reinterpret_cast<volatile CMPLD21*>(0x4015C032); }
};

// Timer Channel Comparator Status and Control Register
//
union CSCTRL1 {
  
  enum class eCL1 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eCL2 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eUP : uint32_t {
    eDOWN = 0, // The last count was in the DOWN direction.
    eUP = 1, // The last count was in the UP direction.
  };
  
  enum class eTCI : uint32_t {
    eSTOP = 0, // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1, // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
  };
  
  enum class eROC : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eALT_LOAD : uint32_t {
    eDISABLE = 0, // Counter can be re-initialized only with the LOAD register.
    eENABLE = 1, // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
  };
  
  enum class eFAULT : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eDBG_EN : uint32_t {
    eNORMAL = 0, // Continue with normal operation during debug mode. (default)
    eHALT_TMR = 1, // Halt TMR counter during debug mode.
    eFORCE_0 = 2, // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eHALT_AND_FORCE_0 = 3, // Both halt counter and force output to 0 during debug mode.
  };
  
  // Bit field definition.
  struct {
    eCL1 CL1 : 2;
    eCL2 CL2 : 2;
    uint32_t TCF1 : 1;
    uint32_t TCF2 : 1;
    uint32_t TCF1EN : 1;
    uint32_t TCF2EN : 1;
    uint32_t OFLAG : 1;
    eUP UP : 1;
    eTCI TCI : 1;
    eROC ROC : 1;
    eALT_LOAD ALT_LOAD : 1;
    eFAULT FAULT : 1;
    eDBG_EN DBG_EN : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL1 &Instance() { return *reinterpret_cast<volatile CSCTRL1*>(0x4015C034); }
};

// Timer Channel Input Filter Register
//
union FILT1 {
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT1 &Instance() { return *reinterpret_cast<volatile FILT1*>(0x4015C036); }
};

// Timer Channel DMA Enable Register
//
union DMA1 {
  
  // Bit field definition.
  struct {
    uint32_t IEFDE : 1;
    uint32_t CMPLD1DE : 1;
    uint32_t CMPLD2DE : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA1 &Instance() { return *reinterpret_cast<volatile DMA1*>(0x4015C038); }
};

// Timer Channel Compare Register 1
//
union COMP12 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP12 &Instance() { return *reinterpret_cast<volatile COMP12*>(0x4015C040); }
};

// Timer Channel Compare Register 2
//
union COMP22 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP22 &Instance() { return *reinterpret_cast<volatile COMP22*>(0x4015C042); }
};

// Timer Channel Capture Register
//
union CAPT2 {
  
  // Bit field definition.
  struct {
    uint32_t CAPTURE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAPT2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT2 &Instance() { return *reinterpret_cast<volatile CAPT2*>(0x4015C044); }
};

// Timer Channel Load Register
//
union LOAD2 {
  
  // Bit field definition.
  struct {
    uint32_t LOAD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOAD2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD2 &Instance() { return *reinterpret_cast<volatile LOAD2*>(0x4015C046); }
};

// Timer Channel Hold Register
//
union HOLD2 {
  
  // Bit field definition.
  struct {
    uint32_t HOLD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOLD2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD2 &Instance() { return *reinterpret_cast<volatile HOLD2*>(0x4015C048); }
};

// Timer Channel Counter Register
//
union CNTR2 {
  
  // Bit field definition.
  struct {
    uint32_t COUNTER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNTR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR2 &Instance() { return *reinterpret_cast<volatile CNTR2*>(0x4015C04A); }
};

// Timer Channel Control Register
//
union CTRL2 {
  
  enum class eOUTMODE : uint32_t {
    eCOUNTER_ACTIVE = 0, // Asserted while counter is active
    eCLEAR_OFLAG = 1, // Clear OFLAG output on successful compare
    eSET_OFLAG = 2, // Set OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3, // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_ALT = 4, // Toggle OFLAG output using alternating compare registers
    eCLEAR_ON_SECONDARY = 5, // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_ROLLOVER = 6, // Set on compare, cleared on counter rollover
    eENABLE_GATED_OUT = 7, // Enable gated clock output while counter is active
  };
  
  enum class eCOINIT : uint32_t {
    eDISABLE = 0, // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eENABLE = 1, // Co-channel counter/timers may force a re-initialization of this counter/timer
  };
  
  enum class eDIR : uint32_t {
    eCOUNTUP = 0, // Count up.
    eCOUNTDOWN = 1, // Count down.
  };
  
  enum class eLENGTH : uint32_t {
    eUNTIL_ROLLOVER = 0, // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_COMPARE = 1, // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
  };
  
  enum class eONCE : uint32_t {
    eREPEAT = 0, // Count repeatedly.
    eUNTIL_COMPARE = 1, // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
  };
  
  enum class eSCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
  };
  
  enum class ePCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
    eCOUNTER0_OUT = 4, // Counter 0 output
    eCOUNTER1_OUT = 5, // Counter 1 output
    eCOUNTER2_OUT = 6, // Counter 2 output
    eCOUNTER3_OUT = 7, // Counter 3 output
    eBUS_DIVBY1 = 8, // IP bus clock divide by 1 prescaler
    eBUS_DIVBY2 = 9, // IP bus clock divide by 2 prescaler
    eBUS_DIVBY4 = 10, // IP bus clock divide by 4 prescaler
    eBUS_DIVBY8 = 11, // IP bus clock divide by 8 prescaler
    eBUS_DIVBY16 = 12, // IP bus clock divide by 16 prescaler
    eBUS_DIVBY32 = 13, // IP bus clock divide by 32 prescaler
    eBUS_DIVBY64 = 14, // IP bus clock divide by 64 prescaler
    eBUS_DIVBY128 = 15, // IP bus clock divide by 128 prescaler
  };
  
  enum class eCM : uint32_t {
    eNOOP = 0, // No operation
    eRISING_ONLY = 1, // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_AND_FALLING = 2, // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_WHILE_SEC_HIGH = 3, // Count rising edges of primary source while secondary input high active
    eQUADRATURE = 4, // Quadrature count mode, uses primary and secondary sources
    eRISING_SEC_DIR = 5, // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eSECONDARY = 6, // Edge of secondary source triggers primary count until compare
    eCASCADE = 7, // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
  };
  
  // Bit field definition.
  struct {
    eOUTMODE OUTMODE : 3;
    eCOINIT COINIT : 1;
    eDIR DIR : 1;
    eLENGTH LENGTH : 1;
    eONCE ONCE : 1;
    eSCS SCS : 2;
    ePCS PCS : 4;
    eCM CM : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x4015C04C); }
};

// Timer Channel Status and Control Register
//
union SCTRL2 {
  
  enum class eOEN : uint32_t {
    eINPUT = 0, // The external pin is configured as an input.
    eOFLAG_OUT = 1, // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
  };
  
  enum class eOPS : uint32_t {
    eTRUE = 0, // True polarity.
    eINVERTED = 1, // Inverted polarity.
  };
  
  enum class eCAPTURE_MODE : uint32_t {
    eDISABLED = 0, // Capture function is disabled
    eENABLE_RISING = 1, // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_FALLING = 2, // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_BOTH = 3, // Load capture register on both edges of input
  };
  
  // Bit field definition.
  struct {
    eOEN OEN : 1;
    eOPS OPS : 1;
    uint32_t FORCE : 1;
    uint32_t VAL : 1;
    uint32_t EEOF : 1;
    uint32_t MSTR : 1;
    eCAPTURE_MODE CAPTURE_MODE : 2;
    uint32_t INPUT : 1;
    uint32_t IPS : 1;
    uint32_t IEFIE : 1;
    uint32_t IEF : 1;
    uint32_t TOFIE : 1;
    uint32_t TOF : 1;
    uint32_t TCFIE : 1;
    uint32_t TCF : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL2 &Instance() { return *reinterpret_cast<volatile SCTRL2*>(0x4015C04E); }
};

// Timer Channel Comparator Load Register 1
//
union CMPLD12 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD12 &Instance() { return *reinterpret_cast<volatile CMPLD12*>(0x4015C050); }
};

// Timer Channel Comparator Load Register 2
//
union CMPLD22 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD22 &Instance() { return *reinterpret_cast<volatile CMPLD22*>(0x4015C052); }
};

// Timer Channel Comparator Status and Control Register
//
union CSCTRL2 {
  
  enum class eCL1 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eCL2 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eUP : uint32_t {
    eDOWN = 0, // The last count was in the DOWN direction.
    eUP = 1, // The last count was in the UP direction.
  };
  
  enum class eTCI : uint32_t {
    eSTOP = 0, // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1, // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
  };
  
  enum class eROC : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eALT_LOAD : uint32_t {
    eDISABLE = 0, // Counter can be re-initialized only with the LOAD register.
    eENABLE = 1, // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
  };
  
  enum class eFAULT : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eDBG_EN : uint32_t {
    eNORMAL = 0, // Continue with normal operation during debug mode. (default)
    eHALT_TMR = 1, // Halt TMR counter during debug mode.
    eFORCE_0 = 2, // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eHALT_AND_FORCE_0 = 3, // Both halt counter and force output to 0 during debug mode.
  };
  
  // Bit field definition.
  struct {
    eCL1 CL1 : 2;
    eCL2 CL2 : 2;
    uint32_t TCF1 : 1;
    uint32_t TCF2 : 1;
    uint32_t TCF1EN : 1;
    uint32_t TCF2EN : 1;
    uint32_t OFLAG : 1;
    eUP UP : 1;
    eTCI TCI : 1;
    eROC ROC : 1;
    eALT_LOAD ALT_LOAD : 1;
    eFAULT FAULT : 1;
    eDBG_EN DBG_EN : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL2 &Instance() { return *reinterpret_cast<volatile CSCTRL2*>(0x4015C054); }
};

// Timer Channel Input Filter Register
//
union FILT2 {
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT2 &Instance() { return *reinterpret_cast<volatile FILT2*>(0x4015C056); }
};

// Timer Channel DMA Enable Register
//
union DMA2 {
  
  // Bit field definition.
  struct {
    uint32_t IEFDE : 1;
    uint32_t CMPLD1DE : 1;
    uint32_t CMPLD2DE : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA2 &Instance() { return *reinterpret_cast<volatile DMA2*>(0x4015C058); }
};

// Timer Channel Compare Register 1
//
union COMP13 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP13 &Instance() { return *reinterpret_cast<volatile COMP13*>(0x4015C060); }
};

// Timer Channel Compare Register 2
//
union COMP23 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARISON_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  COMP23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP23 &Instance() { return *reinterpret_cast<volatile COMP23*>(0x4015C062); }
};

// Timer Channel Capture Register
//
union CAPT3 {
  
  // Bit field definition.
  struct {
    uint32_t CAPTURE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CAPT3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT3 &Instance() { return *reinterpret_cast<volatile CAPT3*>(0x4015C064); }
};

// Timer Channel Load Register
//
union LOAD3 {
  
  // Bit field definition.
  struct {
    uint32_t LOAD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOAD3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD3 &Instance() { return *reinterpret_cast<volatile LOAD3*>(0x4015C066); }
};

// Timer Channel Hold Register
//
union HOLD3 {
  
  // Bit field definition.
  struct {
    uint32_t HOLD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HOLD3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD3 &Instance() { return *reinterpret_cast<volatile HOLD3*>(0x4015C068); }
};

// Timer Channel Counter Register
//
union CNTR3 {
  
  // Bit field definition.
  struct {
    uint32_t COUNTER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNTR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR3 &Instance() { return *reinterpret_cast<volatile CNTR3*>(0x4015C06A); }
};

// Timer Channel Control Register
//
union CTRL3 {
  
  enum class eOUTMODE : uint32_t {
    eCOUNTER_ACTIVE = 0, // Asserted while counter is active
    eCLEAR_OFLAG = 1, // Clear OFLAG output on successful compare
    eSET_OFLAG = 2, // Set OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3, // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_ALT = 4, // Toggle OFLAG output using alternating compare registers
    eCLEAR_ON_SECONDARY = 5, // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_ROLLOVER = 6, // Set on compare, cleared on counter rollover
    eENABLE_GATED_OUT = 7, // Enable gated clock output while counter is active
  };
  
  enum class eCOINIT : uint32_t {
    eDISABLE = 0, // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eENABLE = 1, // Co-channel counter/timers may force a re-initialization of this counter/timer
  };
  
  enum class eDIR : uint32_t {
    eCOUNTUP = 0, // Count up.
    eCOUNTDOWN = 1, // Count down.
  };
  
  enum class eLENGTH : uint32_t {
    eUNTIL_ROLLOVER = 0, // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_COMPARE = 1, // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
  };
  
  enum class eONCE : uint32_t {
    eREPEAT = 0, // Count repeatedly.
    eUNTIL_COMPARE = 1, // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
  };
  
  enum class eSCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
  };
  
  enum class ePCS : uint32_t {
    eCOUNTER0_IN = 0, // Counter 0 input pin
    eCOUNTER1_IN = 1, // Counter 1 input pin
    eCOUNTER2_IN = 2, // Counter 2 input pin
    eCOUNTER3_IN = 3, // Counter 3 input pin
    eCOUNTER0_OUT = 4, // Counter 0 output
    eCOUNTER1_OUT = 5, // Counter 1 output
    eCOUNTER2_OUT = 6, // Counter 2 output
    eCOUNTER3_OUT = 7, // Counter 3 output
    eBUS_DIVBY1 = 8, // IP bus clock divide by 1 prescaler
    eBUS_DIVBY2 = 9, // IP bus clock divide by 2 prescaler
    eBUS_DIVBY4 = 10, // IP bus clock divide by 4 prescaler
    eBUS_DIVBY8 = 11, // IP bus clock divide by 8 prescaler
    eBUS_DIVBY16 = 12, // IP bus clock divide by 16 prescaler
    eBUS_DIVBY32 = 13, // IP bus clock divide by 32 prescaler
    eBUS_DIVBY64 = 14, // IP bus clock divide by 64 prescaler
    eBUS_DIVBY128 = 15, // IP bus clock divide by 128 prescaler
  };
  
  enum class eCM : uint32_t {
    eNOOP = 0, // No operation
    eRISING_ONLY = 1, // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_AND_FALLING = 2, // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_WHILE_SEC_HIGH = 3, // Count rising edges of primary source while secondary input high active
    eQUADRATURE = 4, // Quadrature count mode, uses primary and secondary sources
    eRISING_SEC_DIR = 5, // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eSECONDARY = 6, // Edge of secondary source triggers primary count until compare
    eCASCADE = 7, // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
  };
  
  // Bit field definition.
  struct {
    eOUTMODE OUTMODE : 3;
    eCOINIT COINIT : 1;
    eDIR DIR : 1;
    eLENGTH LENGTH : 1;
    eONCE ONCE : 1;
    eSCS SCS : 2;
    ePCS PCS : 4;
    eCM CM : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3 &Instance() { return *reinterpret_cast<volatile CTRL3*>(0x4015C06C); }
};

// Timer Channel Status and Control Register
//
union SCTRL3 {
  
  enum class eOEN : uint32_t {
    eINPUT = 0, // The external pin is configured as an input.
    eOFLAG_OUT = 1, // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
  };
  
  enum class eOPS : uint32_t {
    eTRUE = 0, // True polarity.
    eINVERTED = 1, // Inverted polarity.
  };
  
  enum class eCAPTURE_MODE : uint32_t {
    eDISABLED = 0, // Capture function is disabled
    eENABLE_RISING = 1, // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_FALLING = 2, // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_BOTH = 3, // Load capture register on both edges of input
  };
  
  // Bit field definition.
  struct {
    eOEN OEN : 1;
    eOPS OPS : 1;
    uint32_t FORCE : 1;
    uint32_t VAL : 1;
    uint32_t EEOF : 1;
    uint32_t MSTR : 1;
    eCAPTURE_MODE CAPTURE_MODE : 2;
    uint32_t INPUT : 1;
    uint32_t IPS : 1;
    uint32_t IEFIE : 1;
    uint32_t IEF : 1;
    uint32_t TOFIE : 1;
    uint32_t TOF : 1;
    uint32_t TCFIE : 1;
    uint32_t TCF : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL3 &Instance() { return *reinterpret_cast<volatile SCTRL3*>(0x4015C06E); }
};

// Timer Channel Comparator Load Register 1
//
union CMPLD13 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD13 &Instance() { return *reinterpret_cast<volatile CMPLD13*>(0x4015C070); }
};

// Timer Channel Comparator Load Register 2
//
union CMPLD23 {
  
  // Bit field definition.
  struct {
    uint32_t COMPARATOR_LOAD_2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CMPLD23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD23 &Instance() { return *reinterpret_cast<volatile CMPLD23*>(0x4015C072); }
};

// Timer Channel Comparator Status and Control Register
//
union CSCTRL3 {
  
  enum class eCL1 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eCL2 : uint32_t {
    eNEVER = 0, // Never preload
    eCOMP1 = 1, // Load upon successful compare with the value in COMP1
    eCOMP2 = 2, // Load upon successful compare with the value in COMP2
  };
  
  enum class eUP : uint32_t {
    eDOWN = 0, // The last count was in the DOWN direction.
    eUP = 1, // The last count was in the UP direction.
  };
  
  enum class eTCI : uint32_t {
    eSTOP = 0, // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1, // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
  };
  
  enum class eROC : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eALT_LOAD : uint32_t {
    eDISABLE = 0, // Counter can be re-initialized only with the LOAD register.
    eENABLE = 1, // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
  };
  
  enum class eFAULT : uint32_t {
    eDISABLE = 0, // Disables
    eENABLE = 1, // Enables
  };
  
  enum class eDBG_EN : uint32_t {
    eNORMAL = 0, // Continue with normal operation during debug mode. (default)
    eHALT_TMR = 1, // Halt TMR counter during debug mode.
    eFORCE_0 = 2, // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eHALT_AND_FORCE_0 = 3, // Both halt counter and force output to 0 during debug mode.
  };
  
  // Bit field definition.
  struct {
    eCL1 CL1 : 2;
    eCL2 CL2 : 2;
    uint32_t TCF1 : 1;
    uint32_t TCF2 : 1;
    uint32_t TCF1EN : 1;
    uint32_t TCF2EN : 1;
    uint32_t OFLAG : 1;
    eUP UP : 1;
    eTCI TCI : 1;
    eROC ROC : 1;
    eALT_LOAD ALT_LOAD : 1;
    eFAULT FAULT : 1;
    eDBG_EN DBG_EN : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSCTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL3 &Instance() { return *reinterpret_cast<volatile CSCTRL3*>(0x4015C074); }
};

// Timer Channel Input Filter Register
//
union FILT3 {
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT3 &Instance() { return *reinterpret_cast<volatile FILT3*>(0x4015C076); }
};

// Timer Channel DMA Enable Register
//
union DMA3 {
  
  // Bit field definition.
  struct {
    uint32_t IEFDE : 1;
    uint32_t CMPLD1DE : 1;
    uint32_t CMPLD2DE : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA3 &Instance() { return *reinterpret_cast<volatile DMA3*>(0x4015C078); }
};


} // namespace nTMR1