#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// QDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nENC4 {


// Control Register
union CTRL {
  
  // Compare Interrupt Enable
  enum class eCMPIE : uint32_t {
    // Disabled
    eCMPIE_0 = 0,
    // Enabled
    eCMPIE_1 = 1,
  };
  
  // Compare Interrupt Request
  enum class eCMPIRQ : uint32_t {
    // No match has occurred (the counter does not match the COMP value)
    eCMPIRQ_0 = 0,
    // COMP match has occurred (the counter matches the COMP value)
    eCMPIRQ_1 = 1,
  };
  
  // Watchdog Enable
  enum class eWDE : uint32_t {
    // Disabled
    eWDE_0 = 0,
    // Enabled
    eWDE_1 = 1,
  };
  
  // Watchdog Timeout Interrupt Enable
  enum class eDIE : uint32_t {
    // Disabled
    eDIE_0 = 0,
    // Enabled
    eDIE_1 = 1,
  };
  
  // Watchdog Timeout Interrupt Request
  enum class eDIRQ : uint32_t {
    // No Watchdog timeout interrupt has occurred
    eDIRQ_0 = 0,
    // Watchdog timeout interrupt has occurred
    eDIRQ_1 = 1,
  };
  
  // Use Negative Edge of INDEX Pulse
  enum class eXNE : uint32_t {
    // Use positive edge of INDEX pulse
    eXNE_0 = 0,
    // Use negative edge of INDEX pulse
    eXNE_1 = 1,
  };
  
  // INDEX Triggered Initialization of Position Counters UPOS and LPOS
  enum class eXIP : uint32_t {
    // INDEX pulse does not initialize the position counter
    eXIP_0 = 0,
    // INDEX pulse initializes the position counter
    eXIP_1 = 1,
  };
  
  // INDEX Pulse Interrupt Enable
  enum class eXIE : uint32_t {
    // Disabled
    eXIE_0 = 0,
    // Enabled
    eXIE_1 = 1,
  };
  
  // INDEX Pulse Interrupt Request
  enum class eXIRQ : uint32_t {
    // INDEX pulse has not occurred
    eXIRQ_0 = 0,
    // INDEX pulse has occurred
    eXIRQ_1 = 1,
  };
  
  // Enable Signal Phase Count Mode
  enum class ePH1 : uint32_t {
    // Use the standard quadrature decoder, where PHASEA and PHASEB represent a two-phase quadrature signal.
    ePH1_0 = 0,
    // Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction: If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 1, PHASEB = 1, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down
    ePH1_1 = 1,
  };
  
  // Enable Reverse Direction Counting
  enum class eREV : uint32_t {
    // Count normally
    eREV_0 = 0,
    // Count in the reverse direction
    eREV_1 = 1,
  };
  
  // Software-Triggered Initialization of Position Counters UPOS and LPOS
  enum class eSWIP : uint32_t {
    // No action
    eSWIP_0 = 0,
    // Initialize position counter (using upper and lower initialization registers, UINIT and LINIT)
    eSWIP_1 = 1,
  };
  
  // Use Negative Edge of HOME Input
  enum class eHNE : uint32_t {
    // Use positive-going edge-to-trigger initialization of position counters UPOS and LPOS
    eHNE_0 = 0,
    // Use negative-going edge-to-trigger initialization of position counters UPOS and LPOS
    eHNE_1 = 1,
  };
  
  // Enable HOME to Initialize Position Counters UPOS and LPOS
  enum class eHIP : uint32_t {
    // No action
    eHIP_0 = 0,
    // HOME signal initializes the position counter
    eHIP_1 = 1,
  };
  
  // HOME Interrupt Enable
  enum class eHIE : uint32_t {
    // Disabled
    eHIE_0 = 0,
    // Enabled
    eHIE_1 = 1,
  };
  
  // HOME Signal Transition Interrupt Request
  enum class eHIRQ : uint32_t {
    // No transition on the HOME signal has occurred
    eHIRQ_0 = 0,
    // A transition on the HOME signal has occurred
    eHIRQ_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Interrupt Enable
    eCMPIE CMPIE : 1;
    // read-write - Compare Interrupt Request
    eCMPIRQ CMPIRQ : 1;
    // read-write - Watchdog Enable
    eWDE WDE : 1;
    // read-write - Watchdog Timeout Interrupt Enable
    eDIE DIE : 1;
    // read-write - Watchdog Timeout Interrupt Request
    eDIRQ DIRQ : 1;
    // read-write - Use Negative Edge of INDEX Pulse
    eXNE XNE : 1;
    // read-write - INDEX Triggered Initialization of Position Counters UPOS and LPOS
    eXIP XIP : 1;
    // read-write - INDEX Pulse Interrupt Enable
    eXIE XIE : 1;
    // read-write - INDEX Pulse Interrupt Request
    eXIRQ XIRQ : 1;
    // read-write - Enable Signal Phase Count Mode
    ePH1 PH1 : 1;
    // read-write - Enable Reverse Direction Counting
    eREV REV : 1;
    // read-write - Software-Triggered Initialization of Position Counters UPOS and LPOS
    eSWIP SWIP : 1;
    // read-write - Use Negative Edge of HOME Input
    eHNE HNE : 1;
    // read-write - Enable HOME to Initialize Position Counters UPOS and LPOS
    eHIP HIP : 1;
    // read-write - HOME Interrupt Enable
    eHIE HIE : 1;
    // read-write - HOME Signal Transition Interrupt Request
    eHIRQ HIRQ : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40180000); }
};

// Input Filter Register
union FILT {
  
  // Bit field definition.
  struct {
    // read-write - Input Filter Sample Period
    uint32_t FILT_PER : 8;
    // read-write - Input Filter Sample Count
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT &Instance() { return *reinterpret_cast<volatile FILT*>(0x40180002); }
};

// Watchdog Timeout Register
union WTR {
  
  // Bit field definition.
  struct {
    // read-write - WDOG
    uint32_t WDOG : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WTR &Instance() { return *reinterpret_cast<volatile WTR*>(0x40180004); }
};

// Position Difference Counter Register
union POSD {
  
  // Bit field definition.
  struct {
    // read-write - POSD
    uint32_t POSD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile POSD &Instance() { return *reinterpret_cast<volatile POSD*>(0x40180006); }
};

// Position Difference Hold Register
union POSDH {
  
  // Bit field definition.
  struct {
    // read-only - POSDH
    uint32_t POSDH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile POSDH &Instance() { return *reinterpret_cast<volatile POSDH*>(0x40180008); }
};

// Revolution Counter Register
union REV {
  
  // Bit field definition.
  struct {
    // read-write - REV
    uint32_t REV : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REV &Instance() { return *reinterpret_cast<volatile REV*>(0x4018000A); }
};

// Revolution Hold Register
union REVH {
  
  // Bit field definition.
  struct {
    // read-only - REVH
    uint32_t REVH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REVH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REVH &Instance() { return *reinterpret_cast<volatile REVH*>(0x4018000C); }
};

// Upper Position Counter Register
union UPOS {
  
  // Bit field definition.
  struct {
    // read-write - POS
    uint32_t POS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UPOS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UPOS &Instance() { return *reinterpret_cast<volatile UPOS*>(0x4018000E); }
};

// Lower Position Counter Register
union LPOS {
  
  // Bit field definition.
  struct {
    // read-write - POS
    uint32_t POS : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPOS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPOS &Instance() { return *reinterpret_cast<volatile LPOS*>(0x40180010); }
};

// Upper Position Hold Register
union UPOSH {
  
  // Bit field definition.
  struct {
    // read-only - POSH
    uint32_t POSH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UPOSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UPOSH &Instance() { return *reinterpret_cast<volatile UPOSH*>(0x40180012); }
};

// Lower Position Hold Register
union LPOSH {
  
  // Bit field definition.
  struct {
    // read-only - POSH
    uint32_t POSH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPOSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPOSH &Instance() { return *reinterpret_cast<volatile LPOSH*>(0x40180014); }
};

// Upper Initialization Register
union UINIT {
  
  // Bit field definition.
  struct {
    // read-write - INIT
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UINIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UINIT &Instance() { return *reinterpret_cast<volatile UINIT*>(0x40180016); }
};

// Lower Initialization Register
union LINIT {
  
  // Bit field definition.
  struct {
    // read-write - INIT
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LINIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LINIT &Instance() { return *reinterpret_cast<volatile LINIT*>(0x40180018); }
};

// Input Monitor Register
union IMR {
  
  // Bit field definition.
  struct {
    // read-only - HOME
    uint32_t HOME : 1;
    // read-only - INDEX
    uint32_t INDEX : 1;
    // read-only - PHB
    uint32_t PHB : 1;
    // read-only - PHA
    uint32_t PHA : 1;
    // read-only - FHOM
    uint32_t FHOM : 1;
    // read-only - FIND
    uint32_t FIND : 1;
    // read-only - FPHB
    uint32_t FPHB : 1;
    // read-only - FPHA
    uint32_t FPHA : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMR &Instance() { return *reinterpret_cast<volatile IMR*>(0x4018001A); }
};

// Test Register
union TST {
  
  // Quadrature Decoder Negative Signal
  enum class eQDN : uint32_t {
    // Generates a positive quadrature decoder signal
    eQDN_0 = 0,
    // Generates a negative quadrature decoder signal
    eQDN_1 = 1,
  };
  
  // Test Counter Enable
  enum class eTCE : uint32_t {
    // Disabled
    eTCE_0 = 0,
    // Enabled
    eTCE_1 = 1,
  };
  
  // Test Mode Enable
  enum class eTEN : uint32_t {
    // Disabled
    eTEN_0 = 0,
    // Enabled
    eTEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TEST_COUNT
    uint32_t TEST_COUNT : 8;
    // read-write - TEST_PERIOD
    uint32_t TEST_PERIOD : 5;
    // read-write - Quadrature Decoder Negative Signal
    eQDN QDN : 1;
    // read-write - Test Counter Enable
    eTCE TCE : 1;
    // read-write - Test Mode Enable
    eTEN TEN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TST &Instance() { return *reinterpret_cast<volatile TST*>(0x4018001C); }
};

// Control 2 Register
union CTRL2 {
  
  // Update Hold Registers
  enum class eUPDHLD : uint32_t {
    // Disable updates of hold registers on the rising edge of TRIGGER input signal
    eUPDHLD_0 = 0,
    // Enable updates of hold registers on the rising edge of TRIGGER input signal
    eUPDHLD_1 = 1,
  };
  
  // Update Position Registers
  enum class eUPDPOS : uint32_t {
    // No action for POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
    eUPDPOS_0 = 0,
    // Clear POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
    eUPDPOS_1 = 1,
  };
  
  // Enable Modulo Counting
  enum class eMOD : uint32_t {
    // Disable modulo counting
    eMOD_0 = 0,
    // Enable modulo counting
    eMOD_1 = 1,
  };
  
  // Count Direction Flag
  enum class eDIR : uint32_t {
    // Last count was in the down direction
    eDIR_0 = 0,
    // Last count was in the up direction
    eDIR_1 = 1,
  };
  
  // Roll-under Interrupt Enable
  enum class eRUIE : uint32_t {
    // Disabled
    eRUIE_0 = 0,
    // Enabled
    eRUIE_1 = 1,
  };
  
  // Roll-under Interrupt Request
  enum class eRUIRQ : uint32_t {
    // No roll-under has occurred
    eRUIRQ_0 = 0,
    // Roll-under has occurred
    eRUIRQ_1 = 1,
  };
  
  // Roll-over Interrupt Enable
  enum class eROIE : uint32_t {
    // Disabled
    eROIE_0 = 0,
    // Enabled
    eROIE_1 = 1,
  };
  
  // Roll-over Interrupt Request
  enum class eROIRQ : uint32_t {
    // No roll-over has occurred
    eROIRQ_0 = 0,
    // Roll-over has occurred
    eROIRQ_1 = 1,
  };
  
  // Revolution Counter Modulus Enable
  enum class eREVMOD : uint32_t {
    // Use INDEX pulse to increment/decrement revolution counter (REV)
    eREVMOD_0 = 0,
    // Use modulus counting roll-over/under to increment/decrement revolution counter (REV)
    eREVMOD_1 = 1,
  };
  
  // Output Control
  enum class eOUTCTL : uint32_t {
    // POSMATCH pulses when a match occurs between the position counters (POS) and the corresponding compare value (COMP )
    eOUTCTL_0 = 0,
    // POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read
    eOUTCTL_1 = 1,
  };
  
  // Simultaneous PHASEA and PHASEB Change Interrupt Enable
  enum class eSABIE : uint32_t {
    // Disabled
    eSABIE_0 = 0,
    // Enabled
    eSABIE_1 = 1,
  };
  
  // Simultaneous PHASEA and PHASEB Change Interrupt Request
  enum class eSABIRQ : uint32_t {
    // No simultaneous change of PHASEA and PHASEB has occurred
    eSABIRQ_0 = 0,
    // A simultaneous change of PHASEA and PHASEB has occurred
    eSABIRQ_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Update Hold Registers
    eUPDHLD UPDHLD : 1;
    // read-write - Update Position Registers
    eUPDPOS UPDPOS : 1;
    // read-write - Enable Modulo Counting
    eMOD MOD : 1;
    // read-only - Count Direction Flag
    eDIR DIR : 1;
    // read-write - Roll-under Interrupt Enable
    eRUIE RUIE : 1;
    // read-write - Roll-under Interrupt Request
    eRUIRQ RUIRQ : 1;
    // read-write - Roll-over Interrupt Enable
    eROIE ROIE : 1;
    // read-write - Roll-over Interrupt Request
    eROIRQ ROIRQ : 1;
    // read-write - Revolution Counter Modulus Enable
    eREVMOD REVMOD : 1;
    // read-write - Output Control
    eOUTCTL OUTCTL : 1;
    // read-write - Simultaneous PHASEA and PHASEB Change Interrupt Enable
    eSABIE SABIE : 1;
    // read-write - Simultaneous PHASEA and PHASEB Change Interrupt Request
    eSABIRQ SABIRQ : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x4018001E); }
};

// Upper Modulus Register
union UMOD {
  
  // Bit field definition.
  struct {
    // read-write - MOD
    uint32_t MOD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UMOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UMOD &Instance() { return *reinterpret_cast<volatile UMOD*>(0x40180020); }
};

// Lower Modulus Register
union LMOD {
  
  // Bit field definition.
  struct {
    // read-write - MOD
    uint32_t MOD : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LMOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LMOD &Instance() { return *reinterpret_cast<volatile LMOD*>(0x40180022); }
};

// Upper Position Compare Register
union UCOMP {
  
  // Bit field definition.
  struct {
    // read-write - COMP
    uint32_t COMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UCOMP() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile UCOMP &Instance() { return *reinterpret_cast<volatile UCOMP*>(0x40180024); }
};

// Lower Position Compare Register
union LCOMP {
  
  // Bit field definition.
  struct {
    // read-write - COMP
    uint32_t COMP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCOMP() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LCOMP &Instance() { return *reinterpret_cast<volatile LCOMP*>(0x40180026); }
};

// Last Edge Time Register
union LASTEDGE {
  
  // Bit field definition.
  struct {
    // read-only - Last Edge Time Counter
    uint32_t LASTEDGE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LASTEDGE() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LASTEDGE &Instance() { return *reinterpret_cast<volatile LASTEDGE*>(0x40180028); }
};

// Last Edge Time Hold Register
union LASTEDGEH {
  
  // Bit field definition.
  struct {
    // read-only - Last Edge Time Hold
    uint32_t LASTEDGEH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LASTEDGEH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LASTEDGEH &Instance() { return *reinterpret_cast<volatile LASTEDGEH*>(0x4018002A); }
};

// Position Difference Period Counter Register
union POSDPER {
  
  // Bit field definition.
  struct {
    // read-only - Position difference period
    uint32_t POSDPER : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPER() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPER &Instance() { return *reinterpret_cast<volatile POSDPER*>(0x4018002C); }
};

// Position Difference Period Buffer Register
union POSDPERBFR {
  
  // Bit field definition.
  struct {
    // read-only - Position difference period buffer
    uint32_t POSDPERBFR : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPERBFR() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPERBFR &Instance() { return *reinterpret_cast<volatile POSDPERBFR*>(0x4018002E); }
};

// Position Difference Period Hold Register
union POSDPERH {
  
  // Bit field definition.
  struct {
    // read-only - Position difference period hold
    uint32_t POSDPERH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPERH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPERH &Instance() { return *reinterpret_cast<volatile POSDPERH*>(0x40180030); }
};

// Control 3 Register
union CTRL3 {
  
  // Period measurement function enable
  enum class ePMEN : uint32_t {
    // Period measurement functions are not used. POSD is loaded to POSDH and then cleared whenever POSD, UPOS, LPOS, or REV is read.
    ePMEN_0 = 0,
    // Period measurement functions are used. POSD is loaded to POSDH and then cleared only when POSD is read.
    ePMEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Period measurement function enable
    ePMEN PMEN : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Prescaler
    uint32_t PRSC : 4;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3 &Instance() { return *reinterpret_cast<volatile CTRL3*>(0x40180032); }
};


} // namespace nENC4