#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// TMR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nTMR3 {


// Timer Channel Compare Register 1
union COMP10 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 1
    uint16_t COMPARISON_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP10 &ref() { return *reinterpret_cast<volatile COMP10*>(0x40164000); }
};

// Timer Channel Compare Register 2
union COMP20 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 2
    uint16_t COMPARISON_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP20 &ref() { return *reinterpret_cast<volatile COMP20*>(0x40164002); }
};

// Timer Channel Capture Register
union CAPT0 {
  
  // Bit field definition.
  struct {
    // read-write - Capture Value
    uint16_t CAPTURE : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT0 &ref() { return *reinterpret_cast<volatile CAPT0*>(0x40164004); }
};

// Timer Channel Load Register
union LOAD0 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Load Register
    uint16_t LOAD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD0 &ref() { return *reinterpret_cast<volatile LOAD0*>(0x40164006); }
};

// Timer Channel Hold Register
union HOLD0 {
  
  // Bit field definition.
  struct {
    // read-write - HOLD
    uint16_t HOLD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD0 &ref() { return *reinterpret_cast<volatile HOLD0*>(0x40164008); }
};

// Timer Channel Counter Register
union CNTR0 {
  
  // Bit field definition.
  struct {
    // read-write - COUNTER
    uint16_t COUNTER : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR0 &ref() { return *reinterpret_cast<volatile CNTR0*>(0x4016400A); }
};

// Timer Channel Control Register
union CTRL0 {
  
  // Output Mode
  enum class eOUTMODE : uint16_t {
    // Asserted while counter is active
    eCOUNTER_ACTIVE = 0,
    // Clear OFLAG output on successful compare
    eCLEAR_OFLAG = 1,
    // Set OFLAG output on successful compare
    eSET_OFLAG = 2,
    // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3,
    // Toggle OFLAG output using alternating compare registers
    eTOGGLE_OFLAG_ALT = 4,
    // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_SECONDARY = 5,
    // Set on compare, cleared on counter rollover
    eCLEAR_ON_ROLLOVER = 6,
    // Enable gated clock output while counter is active
    eENABLE_GATED_OUT = 7,
  };
  
  // Co-Channel Initialization
  enum class eCOINIT : uint16_t {
    // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eDISABLE = 0,
    // Co-channel counter/timers may force a re-initialization of this counter/timer
    eENABLE = 1,
  };
  
  // Count Direction
  enum class eDIR : uint16_t {
    // Count up.
    eCOUNTUP = 0,
    // Count down.
    eCOUNTDOWN = 1,
  };
  
  // Count Length
  enum class eLENGTH : uint16_t {
    // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_ROLLOVER = 0,
    // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
    eUNTIL_COMPARE = 1,
  };
  
  // Count Once
  enum class eONCE : uint16_t {
    // Count repeatedly.
    eREPEAT = 0,
    // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
    eUNTIL_COMPARE = 1,
  };
  
  // Secondary Count Source
  enum class eSCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
  };
  
  // Primary Count Source
  enum class ePCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
    // Counter 0 output
    eCOUNTER0_OUT = 4,
    // Counter 1 output
    eCOUNTER1_OUT = 5,
    // Counter 2 output
    eCOUNTER2_OUT = 6,
    // Counter 3 output
    eCOUNTER3_OUT = 7,
    // IP bus clock divide by 1 prescaler
    eBUS_DIVBY1 = 8,
    // IP bus clock divide by 2 prescaler
    eBUS_DIVBY2 = 9,
    // IP bus clock divide by 4 prescaler
    eBUS_DIVBY4 = 10,
    // IP bus clock divide by 8 prescaler
    eBUS_DIVBY8 = 11,
    // IP bus clock divide by 16 prescaler
    eBUS_DIVBY16 = 12,
    // IP bus clock divide by 32 prescaler
    eBUS_DIVBY32 = 13,
    // IP bus clock divide by 64 prescaler
    eBUS_DIVBY64 = 14,
    // IP bus clock divide by 128 prescaler
    eBUS_DIVBY128 = 15,
  };
  
  // Count Mode
  enum class eCM : uint16_t {
    // No operation
    eNOOP = 0,
    // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_ONLY = 1,
    // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_AND_FALLING = 2,
    // Count rising edges of primary source while secondary input high active
    eRISING_WHILE_SEC_HIGH = 3,
    // Quadrature count mode, uses primary and secondary sources
    eQUADRATURE = 4,
    // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eRISING_SEC_DIR = 5,
    // Edge of secondary source triggers primary count until compare
    eSECONDARY = 6,
    // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
    eCASCADE = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Mode
    eOUTMODE OUTMODE : 3;
    // read-write - Co-Channel Initialization
    eCOINIT COINIT : 1;
    // read-write - Count Direction
    eDIR DIR : 1;
    // read-write - Count Length
    eLENGTH LENGTH : 1;
    // read-write - Count Once
    eONCE ONCE : 1;
    // read-write - Secondary Count Source
    eSCS SCS : 2;
    // read-write - Primary Count Source
    ePCS PCS : 4;
    // read-write - Count Mode
    eCM CM : 3;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL0 &ref() { return *reinterpret_cast<volatile CTRL0*>(0x4016400C); }
};

// Timer Channel Status and Control Register
union SCTRL0 {
  
  // Output Enable
  enum class eOEN : uint16_t {
    // The external pin is configured as an input.
    eINPUT = 0,
    // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
    eOFLAG_OUT = 1,
  };
  
  // Output Polarity Select
  enum class eOPS : uint16_t {
    // True polarity.
    eTRUE = 0,
    // Inverted polarity.
    eINVERTED = 1,
  };
  
  // Input Capture Mode
  enum class eCAPTURE_MODE : uint16_t {
    // Capture function is disabled
    eDISABLED = 0,
    // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_RISING = 1,
    // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_FALLING = 2,
    // Load capture register on both edges of input
    eENABLE_BOTH = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Enable
    eOEN OEN : 1;
    // read-write - Output Polarity Select
    eOPS OPS : 1;
    // read-write - Force OFLAG Output
    uint16_t FORCE : 1;
    // read-write - Forced OFLAG Value
    uint16_t VAL : 1;
    // read-write - Enable External OFLAG Force
    uint16_t EEOF : 1;
    // read-write - Master Mode
    uint16_t MSTR : 1;
    // read-write - Input Capture Mode
    eCAPTURE_MODE CAPTURE_MODE : 2;
    // read-only - External Input Signal
    uint16_t INPUT : 1;
    // read-write - Input Polarity Select
    uint16_t IPS : 1;
    // read-write - Input Edge Flag Interrupt Enable
    uint16_t IEFIE : 1;
    // read-write - Input Edge Flag
    uint16_t IEF : 1;
    // read-write - Timer Overflow Flag Interrupt Enable
    uint16_t TOFIE : 1;
    // read-write - Timer Overflow Flag
    uint16_t TOF : 1;
    // read-write - Timer Compare Flag Interrupt Enable
    uint16_t TCFIE : 1;
    // read-write - Timer Compare Flag
    uint16_t TCF : 1;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL0 &ref() { return *reinterpret_cast<volatile SCTRL0*>(0x4016400E); }
};

// Timer Channel Comparator Load Register 1
union CMPLD10 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_1
    uint16_t COMPARATOR_LOAD_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD10 &ref() { return *reinterpret_cast<volatile CMPLD10*>(0x40164010); }
};

// Timer Channel Comparator Load Register 2
union CMPLD20 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_2
    uint16_t COMPARATOR_LOAD_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD20 &ref() { return *reinterpret_cast<volatile CMPLD20*>(0x40164012); }
};

// Timer Channel Comparator Status and Control Register
union CSCTRL0 {
  
  // Compare Load Control 1
  enum class eCL1 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Compare Load Control 2
  enum class eCL2 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Counting Direction Indicator
  enum class eUP : uint16_t {
    // The last count was in the DOWN direction.
    eDOWN = 0,
    // The last count was in the UP direction.
    eUP = 1,
  };
  
  // Triggered Count Initialization Control
  enum class eTCI : uint16_t {
    // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eSTOP = 0,
    // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1,
  };
  
  // Reload on Capture
  enum class eROC : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Alternative Load Enable
  enum class eALT_LOAD : uint16_t {
    // Counter can be re-initialized only with the LOAD register.
    eDISABLE = 0,
    // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
    eENABLE = 1,
  };
  
  // Fault Enable
  enum class eFAULT : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Debug Actions Enable
  enum class eDBG_EN : uint16_t {
    // Continue with normal operation during debug mode. (default)
    eNORMAL = 0,
    // Halt TMR counter during debug mode.
    eHALT_TMR = 1,
    // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eFORCE_0 = 2,
    // Both halt counter and force output to 0 during debug mode.
    eHALT_AND_FORCE_0 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Load Control 1
    eCL1 CL1 : 2;
    // read-write - Compare Load Control 2
    eCL2 CL2 : 2;
    // read-write - Timer Compare 1 Interrupt Flag
    uint16_t TCF1 : 1;
    // read-write - Timer Compare 2 Interrupt Flag
    uint16_t TCF2 : 1;
    // read-write - Timer Compare 1 Interrupt Enable
    uint16_t TCF1EN : 1;
    // read-write - Timer Compare 2 Interrupt Enable
    uint16_t TCF2EN : 1;
    // read-only - Output flag
    uint16_t OFLAG : 1;
    // read-only - Counting Direction Indicator
    eUP UP : 1;
    // read-write - Triggered Count Initialization Control
    eTCI TCI : 1;
    // read-write - Reload on Capture
    eROC ROC : 1;
    // read-write - Alternative Load Enable
    eALT_LOAD ALT_LOAD : 1;
    // read-write - Fault Enable
    eFAULT FAULT : 1;
    // read-write - Debug Actions Enable
    eDBG_EN DBG_EN : 2;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL0 &ref() { return *reinterpret_cast<volatile CSCTRL0*>(0x40164014); }
};

// Timer Channel Input Filter Register
union FILT0 {
  
  // Bit field definition.
  struct {
    // read-write - Input Filter Sample Period
    uint16_t FILT_PER : 8;
    // read-write - Input Filter Sample Count
    uint16_t FILT_CNT : 3;
    uint16_t _reserved_0 : 5;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT0 &ref() { return *reinterpret_cast<volatile FILT0*>(0x40164016); }
};

// Timer Channel DMA Enable Register
union DMA0 {
  
  // Bit field definition.
  struct {
    // read-write - Input Edge Flag DMA Enable
    uint16_t IEFDE : 1;
    // read-write - Comparator Preload Register 1 DMA Enable
    uint16_t CMPLD1DE : 1;
    // read-write - Comparator Preload Register 2 DMA Enable
    uint16_t CMPLD2DE : 1;
    uint16_t _reserved_0 : 13;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA0 &ref() { return *reinterpret_cast<volatile DMA0*>(0x40164018); }
};

// Timer Channel Enable Register
union ENBL {
  
  // Timer Channel Enable
  enum class eENBL : uint16_t {
    // Disables the timer channel.
    eDISABLE = 0,
    // Enables the timer channel. (default)
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Timer Channel Enable
    eENBL ENBL : 4;
    uint16_t _reserved_0 : 12;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile ENBL &ref() { return *reinterpret_cast<volatile ENBL*>(0x4016401E); }
};

// Timer Channel Compare Register 1
union COMP11 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 1
    uint16_t COMPARISON_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP11 &ref() { return *reinterpret_cast<volatile COMP11*>(0x40164020); }
};

// Timer Channel Compare Register 2
union COMP21 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 2
    uint16_t COMPARISON_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP21 &ref() { return *reinterpret_cast<volatile COMP21*>(0x40164022); }
};

// Timer Channel Capture Register
union CAPT1 {
  
  // Bit field definition.
  struct {
    // read-write - Capture Value
    uint16_t CAPTURE : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT1 &ref() { return *reinterpret_cast<volatile CAPT1*>(0x40164024); }
};

// Timer Channel Load Register
union LOAD1 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Load Register
    uint16_t LOAD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD1 &ref() { return *reinterpret_cast<volatile LOAD1*>(0x40164026); }
};

// Timer Channel Hold Register
union HOLD1 {
  
  // Bit field definition.
  struct {
    // read-write - HOLD
    uint16_t HOLD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD1 &ref() { return *reinterpret_cast<volatile HOLD1*>(0x40164028); }
};

// Timer Channel Counter Register
union CNTR1 {
  
  // Bit field definition.
  struct {
    // read-write - COUNTER
    uint16_t COUNTER : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR1 &ref() { return *reinterpret_cast<volatile CNTR1*>(0x4016402A); }
};

// Timer Channel Control Register
union CTRL1 {
  
  // Output Mode
  enum class eOUTMODE : uint16_t {
    // Asserted while counter is active
    eCOUNTER_ACTIVE = 0,
    // Clear OFLAG output on successful compare
    eCLEAR_OFLAG = 1,
    // Set OFLAG output on successful compare
    eSET_OFLAG = 2,
    // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3,
    // Toggle OFLAG output using alternating compare registers
    eTOGGLE_OFLAG_ALT = 4,
    // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_SECONDARY = 5,
    // Set on compare, cleared on counter rollover
    eCLEAR_ON_ROLLOVER = 6,
    // Enable gated clock output while counter is active
    eENABLE_GATED_OUT = 7,
  };
  
  // Co-Channel Initialization
  enum class eCOINIT : uint16_t {
    // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eDISABLE = 0,
    // Co-channel counter/timers may force a re-initialization of this counter/timer
    eENABLE = 1,
  };
  
  // Count Direction
  enum class eDIR : uint16_t {
    // Count up.
    eCOUNTUP = 0,
    // Count down.
    eCOUNTDOWN = 1,
  };
  
  // Count Length
  enum class eLENGTH : uint16_t {
    // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_ROLLOVER = 0,
    // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
    eUNTIL_COMPARE = 1,
  };
  
  // Count Once
  enum class eONCE : uint16_t {
    // Count repeatedly.
    eREPEAT = 0,
    // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
    eUNTIL_COMPARE = 1,
  };
  
  // Secondary Count Source
  enum class eSCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
  };
  
  // Primary Count Source
  enum class ePCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
    // Counter 0 output
    eCOUNTER0_OUT = 4,
    // Counter 1 output
    eCOUNTER1_OUT = 5,
    // Counter 2 output
    eCOUNTER2_OUT = 6,
    // Counter 3 output
    eCOUNTER3_OUT = 7,
    // IP bus clock divide by 1 prescaler
    eBUS_DIVBY1 = 8,
    // IP bus clock divide by 2 prescaler
    eBUS_DIVBY2 = 9,
    // IP bus clock divide by 4 prescaler
    eBUS_DIVBY4 = 10,
    // IP bus clock divide by 8 prescaler
    eBUS_DIVBY8 = 11,
    // IP bus clock divide by 16 prescaler
    eBUS_DIVBY16 = 12,
    // IP bus clock divide by 32 prescaler
    eBUS_DIVBY32 = 13,
    // IP bus clock divide by 64 prescaler
    eBUS_DIVBY64 = 14,
    // IP bus clock divide by 128 prescaler
    eBUS_DIVBY128 = 15,
  };
  
  // Count Mode
  enum class eCM : uint16_t {
    // No operation
    eNOOP = 0,
    // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_ONLY = 1,
    // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_AND_FALLING = 2,
    // Count rising edges of primary source while secondary input high active
    eRISING_WHILE_SEC_HIGH = 3,
    // Quadrature count mode, uses primary and secondary sources
    eQUADRATURE = 4,
    // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eRISING_SEC_DIR = 5,
    // Edge of secondary source triggers primary count until compare
    eSECONDARY = 6,
    // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
    eCASCADE = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Mode
    eOUTMODE OUTMODE : 3;
    // read-write - Co-Channel Initialization
    eCOINIT COINIT : 1;
    // read-write - Count Direction
    eDIR DIR : 1;
    // read-write - Count Length
    eLENGTH LENGTH : 1;
    // read-write - Count Once
    eONCE ONCE : 1;
    // read-write - Secondary Count Source
    eSCS SCS : 2;
    // read-write - Primary Count Source
    ePCS PCS : 4;
    // read-write - Count Mode
    eCM CM : 3;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL1 &ref() { return *reinterpret_cast<volatile CTRL1*>(0x4016402C); }
};

// Timer Channel Status and Control Register
union SCTRL1 {
  
  // Output Enable
  enum class eOEN : uint16_t {
    // The external pin is configured as an input.
    eINPUT = 0,
    // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
    eOFLAG_OUT = 1,
  };
  
  // Output Polarity Select
  enum class eOPS : uint16_t {
    // True polarity.
    eTRUE = 0,
    // Inverted polarity.
    eINVERTED = 1,
  };
  
  // Input Capture Mode
  enum class eCAPTURE_MODE : uint16_t {
    // Capture function is disabled
    eDISABLED = 0,
    // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_RISING = 1,
    // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_FALLING = 2,
    // Load capture register on both edges of input
    eENABLE_BOTH = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Enable
    eOEN OEN : 1;
    // read-write - Output Polarity Select
    eOPS OPS : 1;
    // read-write - Force OFLAG Output
    uint16_t FORCE : 1;
    // read-write - Forced OFLAG Value
    uint16_t VAL : 1;
    // read-write - Enable External OFLAG Force
    uint16_t EEOF : 1;
    // read-write - Master Mode
    uint16_t MSTR : 1;
    // read-write - Input Capture Mode
    eCAPTURE_MODE CAPTURE_MODE : 2;
    // read-only - External Input Signal
    uint16_t INPUT : 1;
    // read-write - Input Polarity Select
    uint16_t IPS : 1;
    // read-write - Input Edge Flag Interrupt Enable
    uint16_t IEFIE : 1;
    // read-write - Input Edge Flag
    uint16_t IEF : 1;
    // read-write - Timer Overflow Flag Interrupt Enable
    uint16_t TOFIE : 1;
    // read-write - Timer Overflow Flag
    uint16_t TOF : 1;
    // read-write - Timer Compare Flag Interrupt Enable
    uint16_t TCFIE : 1;
    // read-write - Timer Compare Flag
    uint16_t TCF : 1;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL1 &ref() { return *reinterpret_cast<volatile SCTRL1*>(0x4016402E); }
};

// Timer Channel Comparator Load Register 1
union CMPLD11 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_1
    uint16_t COMPARATOR_LOAD_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD11 &ref() { return *reinterpret_cast<volatile CMPLD11*>(0x40164030); }
};

// Timer Channel Comparator Load Register 2
union CMPLD21 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_2
    uint16_t COMPARATOR_LOAD_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD21 &ref() { return *reinterpret_cast<volatile CMPLD21*>(0x40164032); }
};

// Timer Channel Comparator Status and Control Register
union CSCTRL1 {
  
  // Compare Load Control 1
  enum class eCL1 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Compare Load Control 2
  enum class eCL2 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Counting Direction Indicator
  enum class eUP : uint16_t {
    // The last count was in the DOWN direction.
    eDOWN = 0,
    // The last count was in the UP direction.
    eUP = 1,
  };
  
  // Triggered Count Initialization Control
  enum class eTCI : uint16_t {
    // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eSTOP = 0,
    // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1,
  };
  
  // Reload on Capture
  enum class eROC : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Alternative Load Enable
  enum class eALT_LOAD : uint16_t {
    // Counter can be re-initialized only with the LOAD register.
    eDISABLE = 0,
    // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
    eENABLE = 1,
  };
  
  // Fault Enable
  enum class eFAULT : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Debug Actions Enable
  enum class eDBG_EN : uint16_t {
    // Continue with normal operation during debug mode. (default)
    eNORMAL = 0,
    // Halt TMR counter during debug mode.
    eHALT_TMR = 1,
    // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eFORCE_0 = 2,
    // Both halt counter and force output to 0 during debug mode.
    eHALT_AND_FORCE_0 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Load Control 1
    eCL1 CL1 : 2;
    // read-write - Compare Load Control 2
    eCL2 CL2 : 2;
    // read-write - Timer Compare 1 Interrupt Flag
    uint16_t TCF1 : 1;
    // read-write - Timer Compare 2 Interrupt Flag
    uint16_t TCF2 : 1;
    // read-write - Timer Compare 1 Interrupt Enable
    uint16_t TCF1EN : 1;
    // read-write - Timer Compare 2 Interrupt Enable
    uint16_t TCF2EN : 1;
    // read-only - Output flag
    uint16_t OFLAG : 1;
    // read-only - Counting Direction Indicator
    eUP UP : 1;
    // read-write - Triggered Count Initialization Control
    eTCI TCI : 1;
    // read-write - Reload on Capture
    eROC ROC : 1;
    // read-write - Alternative Load Enable
    eALT_LOAD ALT_LOAD : 1;
    // read-write - Fault Enable
    eFAULT FAULT : 1;
    // read-write - Debug Actions Enable
    eDBG_EN DBG_EN : 2;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL1 &ref() { return *reinterpret_cast<volatile CSCTRL1*>(0x40164034); }
};

// Timer Channel Input Filter Register
union FILT1 {
  
  // Bit field definition.
  struct {
    // read-write - Input Filter Sample Period
    uint16_t FILT_PER : 8;
    // read-write - Input Filter Sample Count
    uint16_t FILT_CNT : 3;
    uint16_t _reserved_0 : 5;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT1 &ref() { return *reinterpret_cast<volatile FILT1*>(0x40164036); }
};

// Timer Channel DMA Enable Register
union DMA1 {
  
  // Bit field definition.
  struct {
    // read-write - Input Edge Flag DMA Enable
    uint16_t IEFDE : 1;
    // read-write - Comparator Preload Register 1 DMA Enable
    uint16_t CMPLD1DE : 1;
    // read-write - Comparator Preload Register 2 DMA Enable
    uint16_t CMPLD2DE : 1;
    uint16_t _reserved_0 : 13;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA1 &ref() { return *reinterpret_cast<volatile DMA1*>(0x40164038); }
};

// Timer Channel Compare Register 1
union COMP12 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 1
    uint16_t COMPARISON_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP12 &ref() { return *reinterpret_cast<volatile COMP12*>(0x40164040); }
};

// Timer Channel Compare Register 2
union COMP22 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 2
    uint16_t COMPARISON_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP22 &ref() { return *reinterpret_cast<volatile COMP22*>(0x40164042); }
};

// Timer Channel Capture Register
union CAPT2 {
  
  // Bit field definition.
  struct {
    // read-write - Capture Value
    uint16_t CAPTURE : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT2 &ref() { return *reinterpret_cast<volatile CAPT2*>(0x40164044); }
};

// Timer Channel Load Register
union LOAD2 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Load Register
    uint16_t LOAD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD2 &ref() { return *reinterpret_cast<volatile LOAD2*>(0x40164046); }
};

// Timer Channel Hold Register
union HOLD2 {
  
  // Bit field definition.
  struct {
    // read-write - HOLD
    uint16_t HOLD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD2 &ref() { return *reinterpret_cast<volatile HOLD2*>(0x40164048); }
};

// Timer Channel Counter Register
union CNTR2 {
  
  // Bit field definition.
  struct {
    // read-write - COUNTER
    uint16_t COUNTER : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR2 &ref() { return *reinterpret_cast<volatile CNTR2*>(0x4016404A); }
};

// Timer Channel Control Register
union CTRL2 {
  
  // Output Mode
  enum class eOUTMODE : uint16_t {
    // Asserted while counter is active
    eCOUNTER_ACTIVE = 0,
    // Clear OFLAG output on successful compare
    eCLEAR_OFLAG = 1,
    // Set OFLAG output on successful compare
    eSET_OFLAG = 2,
    // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3,
    // Toggle OFLAG output using alternating compare registers
    eTOGGLE_OFLAG_ALT = 4,
    // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_SECONDARY = 5,
    // Set on compare, cleared on counter rollover
    eCLEAR_ON_ROLLOVER = 6,
    // Enable gated clock output while counter is active
    eENABLE_GATED_OUT = 7,
  };
  
  // Co-Channel Initialization
  enum class eCOINIT : uint16_t {
    // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eDISABLE = 0,
    // Co-channel counter/timers may force a re-initialization of this counter/timer
    eENABLE = 1,
  };
  
  // Count Direction
  enum class eDIR : uint16_t {
    // Count up.
    eCOUNTUP = 0,
    // Count down.
    eCOUNTDOWN = 1,
  };
  
  // Count Length
  enum class eLENGTH : uint16_t {
    // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_ROLLOVER = 0,
    // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
    eUNTIL_COMPARE = 1,
  };
  
  // Count Once
  enum class eONCE : uint16_t {
    // Count repeatedly.
    eREPEAT = 0,
    // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
    eUNTIL_COMPARE = 1,
  };
  
  // Secondary Count Source
  enum class eSCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
  };
  
  // Primary Count Source
  enum class ePCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
    // Counter 0 output
    eCOUNTER0_OUT = 4,
    // Counter 1 output
    eCOUNTER1_OUT = 5,
    // Counter 2 output
    eCOUNTER2_OUT = 6,
    // Counter 3 output
    eCOUNTER3_OUT = 7,
    // IP bus clock divide by 1 prescaler
    eBUS_DIVBY1 = 8,
    // IP bus clock divide by 2 prescaler
    eBUS_DIVBY2 = 9,
    // IP bus clock divide by 4 prescaler
    eBUS_DIVBY4 = 10,
    // IP bus clock divide by 8 prescaler
    eBUS_DIVBY8 = 11,
    // IP bus clock divide by 16 prescaler
    eBUS_DIVBY16 = 12,
    // IP bus clock divide by 32 prescaler
    eBUS_DIVBY32 = 13,
    // IP bus clock divide by 64 prescaler
    eBUS_DIVBY64 = 14,
    // IP bus clock divide by 128 prescaler
    eBUS_DIVBY128 = 15,
  };
  
  // Count Mode
  enum class eCM : uint16_t {
    // No operation
    eNOOP = 0,
    // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_ONLY = 1,
    // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_AND_FALLING = 2,
    // Count rising edges of primary source while secondary input high active
    eRISING_WHILE_SEC_HIGH = 3,
    // Quadrature count mode, uses primary and secondary sources
    eQUADRATURE = 4,
    // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eRISING_SEC_DIR = 5,
    // Edge of secondary source triggers primary count until compare
    eSECONDARY = 6,
    // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
    eCASCADE = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Mode
    eOUTMODE OUTMODE : 3;
    // read-write - Co-Channel Initialization
    eCOINIT COINIT : 1;
    // read-write - Count Direction
    eDIR DIR : 1;
    // read-write - Count Length
    eLENGTH LENGTH : 1;
    // read-write - Count Once
    eONCE ONCE : 1;
    // read-write - Secondary Count Source
    eSCS SCS : 2;
    // read-write - Primary Count Source
    ePCS PCS : 4;
    // read-write - Count Mode
    eCM CM : 3;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2 &ref() { return *reinterpret_cast<volatile CTRL2*>(0x4016404C); }
};

// Timer Channel Status and Control Register
union SCTRL2 {
  
  // Output Enable
  enum class eOEN : uint16_t {
    // The external pin is configured as an input.
    eINPUT = 0,
    // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
    eOFLAG_OUT = 1,
  };
  
  // Output Polarity Select
  enum class eOPS : uint16_t {
    // True polarity.
    eTRUE = 0,
    // Inverted polarity.
    eINVERTED = 1,
  };
  
  // Input Capture Mode
  enum class eCAPTURE_MODE : uint16_t {
    // Capture function is disabled
    eDISABLED = 0,
    // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_RISING = 1,
    // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_FALLING = 2,
    // Load capture register on both edges of input
    eENABLE_BOTH = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Enable
    eOEN OEN : 1;
    // read-write - Output Polarity Select
    eOPS OPS : 1;
    // read-write - Force OFLAG Output
    uint16_t FORCE : 1;
    // read-write - Forced OFLAG Value
    uint16_t VAL : 1;
    // read-write - Enable External OFLAG Force
    uint16_t EEOF : 1;
    // read-write - Master Mode
    uint16_t MSTR : 1;
    // read-write - Input Capture Mode
    eCAPTURE_MODE CAPTURE_MODE : 2;
    // read-only - External Input Signal
    uint16_t INPUT : 1;
    // read-write - Input Polarity Select
    uint16_t IPS : 1;
    // read-write - Input Edge Flag Interrupt Enable
    uint16_t IEFIE : 1;
    // read-write - Input Edge Flag
    uint16_t IEF : 1;
    // read-write - Timer Overflow Flag Interrupt Enable
    uint16_t TOFIE : 1;
    // read-write - Timer Overflow Flag
    uint16_t TOF : 1;
    // read-write - Timer Compare Flag Interrupt Enable
    uint16_t TCFIE : 1;
    // read-write - Timer Compare Flag
    uint16_t TCF : 1;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL2 &ref() { return *reinterpret_cast<volatile SCTRL2*>(0x4016404E); }
};

// Timer Channel Comparator Load Register 1
union CMPLD12 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_1
    uint16_t COMPARATOR_LOAD_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD12 &ref() { return *reinterpret_cast<volatile CMPLD12*>(0x40164050); }
};

// Timer Channel Comparator Load Register 2
union CMPLD22 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_2
    uint16_t COMPARATOR_LOAD_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD22 &ref() { return *reinterpret_cast<volatile CMPLD22*>(0x40164052); }
};

// Timer Channel Comparator Status and Control Register
union CSCTRL2 {
  
  // Compare Load Control 1
  enum class eCL1 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Compare Load Control 2
  enum class eCL2 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Counting Direction Indicator
  enum class eUP : uint16_t {
    // The last count was in the DOWN direction.
    eDOWN = 0,
    // The last count was in the UP direction.
    eUP = 1,
  };
  
  // Triggered Count Initialization Control
  enum class eTCI : uint16_t {
    // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eSTOP = 0,
    // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1,
  };
  
  // Reload on Capture
  enum class eROC : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Alternative Load Enable
  enum class eALT_LOAD : uint16_t {
    // Counter can be re-initialized only with the LOAD register.
    eDISABLE = 0,
    // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
    eENABLE = 1,
  };
  
  // Fault Enable
  enum class eFAULT : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Debug Actions Enable
  enum class eDBG_EN : uint16_t {
    // Continue with normal operation during debug mode. (default)
    eNORMAL = 0,
    // Halt TMR counter during debug mode.
    eHALT_TMR = 1,
    // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eFORCE_0 = 2,
    // Both halt counter and force output to 0 during debug mode.
    eHALT_AND_FORCE_0 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Load Control 1
    eCL1 CL1 : 2;
    // read-write - Compare Load Control 2
    eCL2 CL2 : 2;
    // read-write - Timer Compare 1 Interrupt Flag
    uint16_t TCF1 : 1;
    // read-write - Timer Compare 2 Interrupt Flag
    uint16_t TCF2 : 1;
    // read-write - Timer Compare 1 Interrupt Enable
    uint16_t TCF1EN : 1;
    // read-write - Timer Compare 2 Interrupt Enable
    uint16_t TCF2EN : 1;
    // read-only - Output flag
    uint16_t OFLAG : 1;
    // read-only - Counting Direction Indicator
    eUP UP : 1;
    // read-write - Triggered Count Initialization Control
    eTCI TCI : 1;
    // read-write - Reload on Capture
    eROC ROC : 1;
    // read-write - Alternative Load Enable
    eALT_LOAD ALT_LOAD : 1;
    // read-write - Fault Enable
    eFAULT FAULT : 1;
    // read-write - Debug Actions Enable
    eDBG_EN DBG_EN : 2;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL2 &ref() { return *reinterpret_cast<volatile CSCTRL2*>(0x40164054); }
};

// Timer Channel Input Filter Register
union FILT2 {
  
  // Bit field definition.
  struct {
    // read-write - Input Filter Sample Period
    uint16_t FILT_PER : 8;
    // read-write - Input Filter Sample Count
    uint16_t FILT_CNT : 3;
    uint16_t _reserved_0 : 5;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT2 &ref() { return *reinterpret_cast<volatile FILT2*>(0x40164056); }
};

// Timer Channel DMA Enable Register
union DMA2 {
  
  // Bit field definition.
  struct {
    // read-write - Input Edge Flag DMA Enable
    uint16_t IEFDE : 1;
    // read-write - Comparator Preload Register 1 DMA Enable
    uint16_t CMPLD1DE : 1;
    // read-write - Comparator Preload Register 2 DMA Enable
    uint16_t CMPLD2DE : 1;
    uint16_t _reserved_0 : 13;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA2 &ref() { return *reinterpret_cast<volatile DMA2*>(0x40164058); }
};

// Timer Channel Compare Register 1
union COMP13 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 1
    uint16_t COMPARISON_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP13 &ref() { return *reinterpret_cast<volatile COMP13*>(0x40164060); }
};

// Timer Channel Compare Register 2
union COMP23 {
  
  // Bit field definition.
  struct {
    // read-write - Comparison Value 2
    uint16_t COMPARISON_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile COMP23 &ref() { return *reinterpret_cast<volatile COMP23*>(0x40164062); }
};

// Timer Channel Capture Register
union CAPT3 {
  
  // Bit field definition.
  struct {
    // read-write - Capture Value
    uint16_t CAPTURE : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAPT3 &ref() { return *reinterpret_cast<volatile CAPT3*>(0x40164064); }
};

// Timer Channel Load Register
union LOAD3 {
  
  // Bit field definition.
  struct {
    // read-write - Timer Load Register
    uint16_t LOAD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOAD3 &ref() { return *reinterpret_cast<volatile LOAD3*>(0x40164066); }
};

// Timer Channel Hold Register
union HOLD3 {
  
  // Bit field definition.
  struct {
    // read-write - HOLD
    uint16_t HOLD : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HOLD3 &ref() { return *reinterpret_cast<volatile HOLD3*>(0x40164068); }
};

// Timer Channel Counter Register
union CNTR3 {
  
  // Bit field definition.
  struct {
    // read-write - COUNTER
    uint16_t COUNTER : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNTR3 &ref() { return *reinterpret_cast<volatile CNTR3*>(0x4016406A); }
};

// Timer Channel Control Register
union CTRL3 {
  
  // Output Mode
  enum class eOUTMODE : uint16_t {
    // Asserted while counter is active
    eCOUNTER_ACTIVE = 0,
    // Clear OFLAG output on successful compare
    eCLEAR_OFLAG = 1,
    // Set OFLAG output on successful compare
    eSET_OFLAG = 2,
    // Toggle OFLAG output on successful compare
    eTOGGLE_OFLAG_SUCCESS = 3,
    // Toggle OFLAG output using alternating compare registers
    eTOGGLE_OFLAG_ALT = 4,
    // Set on compare, cleared on secondary source input edge
    eCLEAR_ON_SECONDARY = 5,
    // Set on compare, cleared on counter rollover
    eCLEAR_ON_ROLLOVER = 6,
    // Enable gated clock output while counter is active
    eENABLE_GATED_OUT = 7,
  };
  
  // Co-Channel Initialization
  enum class eCOINIT : uint16_t {
    // Co-channel counter/timers cannot force a re-initialization of this counter/timer
    eDISABLE = 0,
    // Co-channel counter/timers may force a re-initialization of this counter/timer
    eENABLE = 1,
  };
  
  // Count Direction
  enum class eDIR : uint16_t {
    // Count up.
    eCOUNTUP = 0,
    // Count down.
    eCOUNTDOWN = 1,
  };
  
  // Count Length
  enum class eLENGTH : uint16_t {
    // Count until roll over at $FFFF and continue from $0000.
    eUNTIL_ROLLOVER = 0,
    // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
    eUNTIL_COMPARE = 1,
  };
  
  // Count Once
  enum class eONCE : uint16_t {
    // Count repeatedly.
    eREPEAT = 0,
    // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
    eUNTIL_COMPARE = 1,
  };
  
  // Secondary Count Source
  enum class eSCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
  };
  
  // Primary Count Source
  enum class ePCS : uint16_t {
    // Counter 0 input pin
    eCOUNTER0_IN = 0,
    // Counter 1 input pin
    eCOUNTER1_IN = 1,
    // Counter 2 input pin
    eCOUNTER2_IN = 2,
    // Counter 3 input pin
    eCOUNTER3_IN = 3,
    // Counter 0 output
    eCOUNTER0_OUT = 4,
    // Counter 1 output
    eCOUNTER1_OUT = 5,
    // Counter 2 output
    eCOUNTER2_OUT = 6,
    // Counter 3 output
    eCOUNTER3_OUT = 7,
    // IP bus clock divide by 1 prescaler
    eBUS_DIVBY1 = 8,
    // IP bus clock divide by 2 prescaler
    eBUS_DIVBY2 = 9,
    // IP bus clock divide by 4 prescaler
    eBUS_DIVBY4 = 10,
    // IP bus clock divide by 8 prescaler
    eBUS_DIVBY8 = 11,
    // IP bus clock divide by 16 prescaler
    eBUS_DIVBY16 = 12,
    // IP bus clock divide by 32 prescaler
    eBUS_DIVBY32 = 13,
    // IP bus clock divide by 64 prescaler
    eBUS_DIVBY64 = 14,
    // IP bus clock divide by 128 prescaler
    eBUS_DIVBY128 = 15,
  };
  
  // Count Mode
  enum class eCM : uint16_t {
    // No operation
    eNOOP = 0,
    // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
    eRISING_ONLY = 1,
    // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
    eRISING_AND_FALLING = 2,
    // Count rising edges of primary source while secondary input high active
    eRISING_WHILE_SEC_HIGH = 3,
    // Quadrature count mode, uses primary and secondary sources
    eQUADRATURE = 4,
    // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
    eRISING_SEC_DIR = 5,
    // Edge of secondary source triggers primary count until compare
    eSECONDARY = 6,
    // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
    eCASCADE = 7,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Mode
    eOUTMODE OUTMODE : 3;
    // read-write - Co-Channel Initialization
    eCOINIT COINIT : 1;
    // read-write - Count Direction
    eDIR DIR : 1;
    // read-write - Count Length
    eLENGTH LENGTH : 1;
    // read-write - Count Once
    eONCE ONCE : 1;
    // read-write - Secondary Count Source
    eSCS SCS : 2;
    // read-write - Primary Count Source
    ePCS PCS : 4;
    // read-write - Count Mode
    eCM CM : 3;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3 &ref() { return *reinterpret_cast<volatile CTRL3*>(0x4016406C); }
};

// Timer Channel Status and Control Register
union SCTRL3 {
  
  // Output Enable
  enum class eOEN : uint16_t {
    // The external pin is configured as an input.
    eINPUT = 0,
    // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
    eOFLAG_OUT = 1,
  };
  
  // Output Polarity Select
  enum class eOPS : uint16_t {
    // True polarity.
    eTRUE = 0,
    // Inverted polarity.
    eINVERTED = 1,
  };
  
  // Input Capture Mode
  enum class eCAPTURE_MODE : uint16_t {
    // Capture function is disabled
    eDISABLED = 0,
    // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
    eENABLE_RISING = 1,
    // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
    eENABLE_FALLING = 2,
    // Load capture register on both edges of input
    eENABLE_BOTH = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Enable
    eOEN OEN : 1;
    // read-write - Output Polarity Select
    eOPS OPS : 1;
    // read-write - Force OFLAG Output
    uint16_t FORCE : 1;
    // read-write - Forced OFLAG Value
    uint16_t VAL : 1;
    // read-write - Enable External OFLAG Force
    uint16_t EEOF : 1;
    // read-write - Master Mode
    uint16_t MSTR : 1;
    // read-write - Input Capture Mode
    eCAPTURE_MODE CAPTURE_MODE : 2;
    // read-only - External Input Signal
    uint16_t INPUT : 1;
    // read-write - Input Polarity Select
    uint16_t IPS : 1;
    // read-write - Input Edge Flag Interrupt Enable
    uint16_t IEFIE : 1;
    // read-write - Input Edge Flag
    uint16_t IEF : 1;
    // read-write - Timer Overflow Flag Interrupt Enable
    uint16_t TOFIE : 1;
    // read-write - Timer Overflow Flag
    uint16_t TOF : 1;
    // read-write - Timer Compare Flag Interrupt Enable
    uint16_t TCFIE : 1;
    // read-write - Timer Compare Flag
    uint16_t TCF : 1;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCTRL3 &ref() { return *reinterpret_cast<volatile SCTRL3*>(0x4016406E); }
};

// Timer Channel Comparator Load Register 1
union CMPLD13 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_1
    uint16_t COMPARATOR_LOAD_1 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD13 &ref() { return *reinterpret_cast<volatile CMPLD13*>(0x40164070); }
};

// Timer Channel Comparator Load Register 2
union CMPLD23 {
  
  // Bit field definition.
  struct {
    // read-write - COMPARATOR_LOAD_2
    uint16_t COMPARATOR_LOAD_2 : 16;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CMPLD23 &ref() { return *reinterpret_cast<volatile CMPLD23*>(0x40164072); }
};

// Timer Channel Comparator Status and Control Register
union CSCTRL3 {
  
  // Compare Load Control 1
  enum class eCL1 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Compare Load Control 2
  enum class eCL2 : uint16_t {
    // Never preload
    eNEVER = 0,
    // Load upon successful compare with the value in COMP1
    eCOMP1 = 1,
    // Load upon successful compare with the value in COMP2
    eCOMP2 = 2,
  };
  
  // Counting Direction Indicator
  enum class eUP : uint16_t {
    // The last count was in the DOWN direction.
    eDOWN = 0,
    // The last count was in the UP direction.
    eUP = 1,
  };
  
  // Triggered Count Initialization Control
  enum class eTCI : uint16_t {
    // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
    eSTOP = 0,
    // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
    eRELOAD = 1,
  };
  
  // Reload on Capture
  enum class eROC : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Alternative Load Enable
  enum class eALT_LOAD : uint16_t {
    // Counter can be re-initialized only with the LOAD register.
    eDISABLE = 0,
    // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
    eENABLE = 1,
  };
  
  // Fault Enable
  enum class eFAULT : uint16_t {
    // Disables
    eDISABLE = 0,
    // Enables
    eENABLE = 1,
  };
  
  // Debug Actions Enable
  enum class eDBG_EN : uint16_t {
    // Continue with normal operation during debug mode. (default)
    eNORMAL = 0,
    // Halt TMR counter during debug mode.
    eHALT_TMR = 1,
    // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
    eFORCE_0 = 2,
    // Both halt counter and force output to 0 during debug mode.
    eHALT_AND_FORCE_0 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Load Control 1
    eCL1 CL1 : 2;
    // read-write - Compare Load Control 2
    eCL2 CL2 : 2;
    // read-write - Timer Compare 1 Interrupt Flag
    uint16_t TCF1 : 1;
    // read-write - Timer Compare 2 Interrupt Flag
    uint16_t TCF2 : 1;
    // read-write - Timer Compare 1 Interrupt Enable
    uint16_t TCF1EN : 1;
    // read-write - Timer Compare 2 Interrupt Enable
    uint16_t TCF2EN : 1;
    // read-only - Output flag
    uint16_t OFLAG : 1;
    // read-only - Counting Direction Indicator
    eUP UP : 1;
    // read-write - Triggered Count Initialization Control
    eTCI TCI : 1;
    // read-write - Reload on Capture
    eROC ROC : 1;
    // read-write - Alternative Load Enable
    eALT_LOAD ALT_LOAD : 1;
    // read-write - Fault Enable
    eFAULT FAULT : 1;
    // read-write - Debug Actions Enable
    eDBG_EN DBG_EN : 2;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CSCTRL3 &ref() { return *reinterpret_cast<volatile CSCTRL3*>(0x40164074); }
};

// Timer Channel Input Filter Register
union FILT3 {
  
  // Bit field definition.
  struct {
    // read-write - Input Filter Sample Period
    uint16_t FILT_PER : 8;
    // read-write - Input Filter Sample Count
    uint16_t FILT_CNT : 3;
    uint16_t _reserved_0 : 5;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT3 &ref() { return *reinterpret_cast<volatile FILT3*>(0x40164076); }
};

// Timer Channel DMA Enable Register
union DMA3 {
  
  // Bit field definition.
  struct {
    // read-write - Input Edge Flag DMA Enable
    uint16_t IEFDE : 1;
    // read-write - Comparator Preload Register 1 DMA Enable
    uint16_t CMPLD1DE : 1;
    // read-write - Comparator Preload Register 2 DMA Enable
    uint16_t CMPLD2DE : 1;
    uint16_t _reserved_0 : 13;
  } bits;
  
  // Full 16-bit register value.
  uint16_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA3 &ref() { return *reinterpret_cast<volatile DMA3*>(0x40164078); }
};


} // namespace nTMR3