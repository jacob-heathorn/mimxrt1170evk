#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // QDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nENC1 {


// Control Register
//
union CTRL {
  
  enum class eCMPIE : uint32_t {
    eCMPIE_0 = 0, // Disabled
    eCMPIE_1 = 1, // Enabled
  };
  
  enum class eCMPIRQ : uint32_t {
    eCMPIRQ_0 = 0, // No match has occurred (the counter does not match the COMP value)
    eCMPIRQ_1 = 1, // COMP match has occurred (the counter matches the COMP value)
  };
  
  enum class eWDE : uint32_t {
    eWDE_0 = 0, // Disabled
    eWDE_1 = 1, // Enabled
  };
  
  enum class eDIE : uint32_t {
    eDIE_0 = 0, // Disabled
    eDIE_1 = 1, // Enabled
  };
  
  enum class eDIRQ : uint32_t {
    eDIRQ_0 = 0, // No Watchdog timeout interrupt has occurred
    eDIRQ_1 = 1, // Watchdog timeout interrupt has occurred
  };
  
  enum class eXNE : uint32_t {
    eXNE_0 = 0, // Use positive edge of INDEX pulse
    eXNE_1 = 1, // Use negative edge of INDEX pulse
  };
  
  enum class eXIP : uint32_t {
    eXIP_0 = 0, // INDEX pulse does not initialize the position counter
    eXIP_1 = 1, // INDEX pulse initializes the position counter
  };
  
  enum class eXIE : uint32_t {
    eXIE_0 = 0, // Disabled
    eXIE_1 = 1, // Enabled
  };
  
  enum class eXIRQ : uint32_t {
    eXIRQ_0 = 0, // INDEX pulse has not occurred
    eXIRQ_1 = 1, // INDEX pulse has occurred
  };
  
  enum class ePH1 : uint32_t {
    ePH1_0 = 0, // Use the standard quadrature decoder, where PHASEA and PHASEB represent a two-phase quadrature signal.
    ePH1_1 = 1, // Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction: If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 1, PHASEB = 1, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down
  };
  
  enum class eREV : uint32_t {
    eREV_0 = 0, // Count normally
    eREV_1 = 1, // Count in the reverse direction
  };
  
  enum class eSWIP : uint32_t {
    eSWIP_0 = 0, // No action
    eSWIP_1 = 1, // Initialize position counter (using upper and lower initialization registers, UINIT and LINIT)
  };
  
  enum class eHNE : uint32_t {
    eHNE_0 = 0, // Use positive-going edge-to-trigger initialization of position counters UPOS and LPOS
    eHNE_1 = 1, // Use negative-going edge-to-trigger initialization of position counters UPOS and LPOS
  };
  
  enum class eHIP : uint32_t {
    eHIP_0 = 0, // No action
    eHIP_1 = 1, // HOME signal initializes the position counter
  };
  
  enum class eHIE : uint32_t {
    eHIE_0 = 0, // Disabled
    eHIE_1 = 1, // Enabled
  };
  
  enum class eHIRQ : uint32_t {
    eHIRQ_0 = 0, // No transition on the HOME signal has occurred
    eHIRQ_1 = 1, // A transition on the HOME signal has occurred
  };
  
  // Bit field definition.
  struct {
    eCMPIE CMPIE : 1;
    eCMPIRQ CMPIRQ : 1;
    eWDE WDE : 1;
    eDIE DIE : 1;
    eDIRQ DIRQ : 1;
    eXNE XNE : 1;
    eXIP XIP : 1;
    eXIE XIE : 1;
    eXIRQ XIRQ : 1;
    ePH1 PH1 : 1;
    eREV REV : 1;
    eSWIP SWIP : 1;
    eHNE HNE : 1;
    eHIP HIP : 1;
    eHIE HIE : 1;
    eHIRQ HIRQ : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40174000); }
};

// Input Filter Register
//
union FILT {
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_2 : 2;
    uint32_t FILT_PRSC : 3;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FILT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FILT &Instance() { return *reinterpret_cast<volatile FILT*>(0x40174002); }
};

// Watchdog Timeout Register
//
union WTR {
  
  // Bit field definition.
  struct {
    uint32_t WDOG : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  WTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile WTR &Instance() { return *reinterpret_cast<volatile WTR*>(0x40174004); }
};

// Position Difference Counter Register
//
union POSD {
  
  // Bit field definition.
  struct {
    uint32_t POSD : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile POSD &Instance() { return *reinterpret_cast<volatile POSD*>(0x40174006); }
};

// Position Difference Hold Register
//
union POSDH {
  
  // Bit field definition.
  struct {
    uint32_t POSDH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile POSDH &Instance() { return *reinterpret_cast<volatile POSDH*>(0x40174008); }
};

// Revolution Counter Register
//
union REV {
  
  // Bit field definition.
  struct {
    uint32_t REV : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REV &Instance() { return *reinterpret_cast<volatile REV*>(0x4017400A); }
};

// Revolution Hold Register
//
union REVH {
  
  // Bit field definition.
  struct {
    uint32_t REVH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REVH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REVH &Instance() { return *reinterpret_cast<volatile REVH*>(0x4017400C); }
};

// Upper Position Counter Register
//
union UPOS {
  
  // Bit field definition.
  struct {
    uint32_t POS : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UPOS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UPOS &Instance() { return *reinterpret_cast<volatile UPOS*>(0x4017400E); }
};

// Lower Position Counter Register
//
union LPOS {
  
  // Bit field definition.
  struct {
    uint32_t POS : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPOS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPOS &Instance() { return *reinterpret_cast<volatile LPOS*>(0x40174010); }
};

// Upper Position Hold Register
//
union UPOSH {
  
  // Bit field definition.
  struct {
    uint32_t POSH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UPOSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UPOSH &Instance() { return *reinterpret_cast<volatile UPOSH*>(0x40174012); }
};

// Lower Position Hold Register
//
union LPOSH {
  
  // Bit field definition.
  struct {
    uint32_t POSH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPOSH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPOSH &Instance() { return *reinterpret_cast<volatile LPOSH*>(0x40174014); }
};

// Upper Initialization Register
//
union UINIT {
  
  // Bit field definition.
  struct {
    uint32_t INIT : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UINIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UINIT &Instance() { return *reinterpret_cast<volatile UINIT*>(0x40174016); }
};

// Lower Initialization Register
//
union LINIT {
  
  // Bit field definition.
  struct {
    uint32_t INIT : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LINIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LINIT &Instance() { return *reinterpret_cast<volatile LINIT*>(0x40174018); }
};

// Input Monitor Register
//
union IMR {
  
  // Bit field definition.
  struct {
    uint32_t HOME : 1;
    uint32_t INDEX : 1;
    uint32_t PHB : 1;
    uint32_t PHA : 1;
    uint32_t FHOM : 1;
    uint32_t FIND : 1;
    uint32_t FPHB : 1;
    uint32_t FPHA : 1;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IMR &Instance() { return *reinterpret_cast<volatile IMR*>(0x4017401A); }
};

// Test Register
//
union TST {
  
  enum class eQDN : uint32_t {
    eQDN_0 = 0, // Generates a positive quadrature decoder signal
    eQDN_1 = 1, // Generates a negative quadrature decoder signal
  };
  
  enum class eTCE : uint32_t {
    eTCE_0 = 0, // Disabled
    eTCE_1 = 1, // Enabled
  };
  
  enum class eTEN : uint32_t {
    eTEN_0 = 0, // Disabled
    eTEN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t TEST_COUNT : 8;
    uint32_t TEST_PERIOD : 5;
    eQDN QDN : 1;
    eTCE TCE : 1;
    eTEN TEN : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TST &Instance() { return *reinterpret_cast<volatile TST*>(0x4017401C); }
};

// Control 2 Register
//
union CTRL2 {
  
  enum class eUPDHLD : uint32_t {
    eUPDHLD_0 = 0, // Disable updates of hold registers on the rising edge of TRIGGER input signal
    eUPDHLD_1 = 1, // Enable updates of hold registers on the rising edge of TRIGGER input signal
  };
  
  enum class eUPDPOS : uint32_t {
    eUPDPOS_0 = 0, // No action for POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
    eUPDPOS_1 = 1, // Clear POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
  };
  
  enum class eMOD : uint32_t {
    eMOD_0 = 0, // Disable modulo counting
    eMOD_1 = 1, // Enable modulo counting
  };
  
  enum class eDIR : uint32_t {
    eDIR_0 = 0, // Last count was in the down direction
    eDIR_1 = 1, // Last count was in the up direction
  };
  
  enum class eRUIE : uint32_t {
    eRUIE_0 = 0, // Disabled
    eRUIE_1 = 1, // Enabled
  };
  
  enum class eRUIRQ : uint32_t {
    eRUIRQ_0 = 0, // No roll-under has occurred
    eRUIRQ_1 = 1, // Roll-under has occurred
  };
  
  enum class eROIE : uint32_t {
    eROIE_0 = 0, // Disabled
    eROIE_1 = 1, // Enabled
  };
  
  enum class eROIRQ : uint32_t {
    eROIRQ_0 = 0, // No roll-over has occurred
    eROIRQ_1 = 1, // Roll-over has occurred
  };
  
  enum class eREVMOD : uint32_t {
    eREVMOD_0 = 0, // Use INDEX pulse to increment/decrement revolution counter (REV)
    eREVMOD_1 = 1, // Use modulus counting roll-over/under to increment/decrement revolution counter (REV)
  };
  
  enum class eOUTCTL : uint32_t {
    eOUTCTL_0 = 0, // POSMATCH pulses when a match occurs between the position counters (POS) and the corresponding compare value (COMP )
    eOUTCTL_1 = 1, // POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read
  };
  
  enum class eSABIE : uint32_t {
    eSABIE_0 = 0, // Disabled
    eSABIE_1 = 1, // Enabled
  };
  
  enum class eSABIRQ : uint32_t {
    eSABIRQ_0 = 0, // No simultaneous change of PHASEA and PHASEB has occurred
    eSABIRQ_1 = 1, // A simultaneous change of PHASEA and PHASEB has occurred
  };
  
  // Bit field definition.
  struct {
    eUPDHLD UPDHLD : 1;
    eUPDPOS UPDPOS : 1;
    eMOD MOD : 1;
    eDIR DIR : 1;
    eRUIE RUIE : 1;
    eRUIRQ RUIRQ : 1;
    eROIE ROIE : 1;
    eROIRQ ROIRQ : 1;
    eREVMOD REVMOD : 1;
    eOUTCTL OUTCTL : 1;
    eSABIE SABIE : 1;
    eSABIRQ SABIRQ : 1;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x4017401E); }
};

// Upper Modulus Register
//
union UMOD {
  
  // Bit field definition.
  struct {
    uint32_t MOD : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UMOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile UMOD &Instance() { return *reinterpret_cast<volatile UMOD*>(0x40174020); }
};

// Lower Modulus Register
//
union LMOD {
  
  // Bit field definition.
  struct {
    uint32_t MOD : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LMOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LMOD &Instance() { return *reinterpret_cast<volatile LMOD*>(0x40174022); }
};

// Upper Position Compare Register
//
union UCOMP {
  
  // Bit field definition.
  struct {
    uint32_t COMP : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  UCOMP() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile UCOMP &Instance() { return *reinterpret_cast<volatile UCOMP*>(0x40174024); }
};

// Lower Position Compare Register
//
union LCOMP {
  
  // Bit field definition.
  struct {
    uint32_t COMP : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCOMP() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LCOMP &Instance() { return *reinterpret_cast<volatile LCOMP*>(0x40174026); }
};

// Last Edge Time Register
//
union LASTEDGE {
  
  // Bit field definition.
  struct {
    uint32_t LASTEDGE : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LASTEDGE() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LASTEDGE &Instance() { return *reinterpret_cast<volatile LASTEDGE*>(0x40174028); }
};

// Last Edge Time Hold Register
//
union LASTEDGEH {
  
  // Bit field definition.
  struct {
    uint32_t LASTEDGEH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LASTEDGEH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile LASTEDGEH &Instance() { return *reinterpret_cast<volatile LASTEDGEH*>(0x4017402A); }
};

// Position Difference Period Counter Register
//
union POSDPER {
  
  // Bit field definition.
  struct {
    uint32_t POSDPER : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPER() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPER &Instance() { return *reinterpret_cast<volatile POSDPER*>(0x4017402C); }
};

// Position Difference Period Buffer Register
//
union POSDPERBFR {
  
  // Bit field definition.
  struct {
    uint32_t POSDPERBFR : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPERBFR() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPERBFR &Instance() { return *reinterpret_cast<volatile POSDPERBFR*>(0x4017402E); }
};

// Position Difference Period Hold Register
//
union POSDPERH {
  
  // Bit field definition.
  struct {
    uint32_t POSDPERH : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  POSDPERH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile POSDPERH &Instance() { return *reinterpret_cast<volatile POSDPERH*>(0x40174030); }
};

// Control 3 Register
//
union CTRL3 {
  
  enum class ePMEN : uint32_t {
    ePMEN_0 = 0, // Period measurement functions are not used. POSD is loaded to POSDH and then cleared whenever POSD, UPOS, LPOS, or REV is read.
    ePMEN_1 = 1, // Period measurement functions are used. POSD is loaded to POSDH and then cleared only when POSD is read.
  };
  
  // Bit field definition.
  struct {
    ePMEN PMEN : 1;
    uint32_t _reserved_1 : 3;
    uint32_t PRSC : 4;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL3 &Instance() { return *reinterpret_cast<volatile CTRL3*>(0x40174032); }
};


} // namespace nENC1