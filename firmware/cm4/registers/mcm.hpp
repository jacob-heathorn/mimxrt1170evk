#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Core Platform Miscellaneous Control Module
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nMCM {


// SoC-defined platform revision
//
union MCM_PLREV {
  
  // Bit field definition.
  struct {
    uint32_t PLREV : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLREV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_PLREV &Instance() { return *reinterpret_cast<volatile MCM_PLREV*>(0xE0080000); }
};

// Processor core type
//
union MCM_PCT {
  
  enum class ePCT : uint32_t {
    ePCT_44096 = 44096, // ARM Cortex M4
  };
  
  // Bit field definition.
  struct {
    ePCT PCT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PCT() = delete;
  inline void Reset() volatile { this->value = 0x0000AC40; }
  static inline volatile MCM_PCT &Instance() { return *reinterpret_cast<volatile MCM_PCT*>(0xE0080002); }
};

// Memory configuration
//
union MCM_MEMCFG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    uint32_t TCRAMUSZ : 4;
    uint32_t _reserved_1 : 2;
    uint32_t TCRAMLSZ : 4;
    uint32_t _reserved_2 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_MEMCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_MEMCFG &Instance() { return *reinterpret_cast<volatile MCM_MEMCFG*>(0xE0080004); }
};

// Crossbar Switch (AXBS) Slave Configuration
//
union MCM_PLASC {
  
  enum class eASC : uint32_t {
    eASC_0 = 0, // A bus slave connection to AXBS input port n is absent
    eASC_1 = 1, // A bus slave connection to AXBS input port n is present
  };
  
  // Bit field definition.
  struct {
    eASC ASC : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLASC() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile MCM_PLASC &Instance() { return *reinterpret_cast<volatile MCM_PLASC*>(0xE0080008); }
};

// Crossbar Switch (AXBS) Master Configuration
//
union MCM_PLAMC {
  
  enum class eAMC : uint32_t {
    eAMC_0 = 0, // A bus master connection to AXBS input port n is absent
    eAMC_1 = 1, // A bus master connection to AXBS input port n is present
  };
  
  // Bit field definition.
  struct {
    eAMC AMC : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLAMC() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile MCM_PLAMC &Instance() { return *reinterpret_cast<volatile MCM_PLAMC*>(0xE008000A); }
};

// Control Register
//
union MCM_CR {
  
  enum class eCBRR : uint32_t {
    eCBRR_0 = 0, // Fixed-priority arbitration
    eCBRR_1 = 1, // Round-robin arbitration
  };
  
  enum class eSTCMAP : uint32_t {
    eSTCMAP_0 = 0, // Round robin
    eSTCMAP_1 = 1, // Special round robin (favors TCM backoor accesses over the processor)
    eSTCMAP_2 = 2, // Fixed priority. Processor has highest, backdoor has lowest
    eSTCMAP_3 = 3, // Fixed priority. Backdoor has highest, processor has lowest
  };
  
  enum class eCTCMAP : uint32_t {
    eCTCMAP_0 = 0, // Round robin
    eCTCMAP_1 = 1, // Special round robin (favors TCM backoor accesses over the processor)
    eCTCMAP_2 = 2, // Fixed priority. Processor has highest, backdoor has lowest
    eCTCMAP_3 = 3, // Fixed priority. Backdoor has highest, processor has lowest
  };
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 9;
    eCBRR CBRR : 1;
    uint32_t _reserved_0 : 14;
    eSTCMAP STCMAP : 2;
    uint32_t STCMWP : 1;
    uint32_t _reserved_1 : 1;
    eCTCMAP CTCMAP : 2;
    uint32_t CTCMWP : 1;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_CR &Instance() { return *reinterpret_cast<volatile MCM_CR*>(0xE008000C); }
};

// Interrupt Status and Control Register
//
union MCM_ISCR {
  
  enum class eCWBER : uint32_t {
    eCWBER_0 = 0, // No error
    eCWBER_1 = 1, // Error occurred
  };
  
  enum class eFIOC : uint32_t {
    eFIOC_0 = 0, // No interrupt
    eFIOC_1 = 1, // Interrupt occurred
  };
  
  enum class eFDZC : uint32_t {
    eFDZC_0 = 0, // No interrupt
    eFDZC_1 = 1, // Interrupt occurred
  };
  
  enum class eFOFC : uint32_t {
    eFOFC_0 = 0, // No interrupt
    eFOFC_1 = 1, // Interrupt occurred
  };
  
  enum class eFUFC : uint32_t {
    eFUFC_0 = 0, // No interrupt
    eFUFC_1 = 1, // Interrupt occurred
  };
  
  enum class eFIXC : uint32_t {
    eFIXC_0 = 0, // No interrupt
    eFIXC_1 = 1, // Interrupt occurred
  };
  
  enum class eFIDC : uint32_t {
    eFIDC_0 = 0, // No interrupt
    eFIDC_1 = 1, // Interrupt occurred
  };
  
  enum class eCWBEE : uint32_t {
    eCWBEE_0 = 0, // Disable error interrupt
    eCWBEE_1 = 1, // Enable error interrupt
  };
  
  enum class eFIOCE : uint32_t {
    eFIOCE_0 = 0, // Disable interrupt
    eFIOCE_1 = 1, // Enable interrupt
  };
  
  enum class eFDZCE : uint32_t {
    eFDZCE_0 = 0, // Disable interrupt
    eFDZCE_1 = 1, // Enable interrupt
  };
  
  enum class eFOFCE : uint32_t {
    eFOFCE_0 = 0, // Disable interrupt
    eFOFCE_1 = 1, // Enable interrupt
  };
  
  enum class eFUFCE : uint32_t {
    eFUFCE_0 = 0, // Disable interrupt
    eFUFCE_1 = 1, // Enable interrupt
  };
  
  enum class eFIXCE : uint32_t {
    eFIXCE_0 = 0, // Disable interrupt
    eFIXCE_1 = 1, // Enable interrupt
  };
  
  enum class eFIDCE : uint32_t {
    eFIDCE_0 = 0, // Disable interrupt
    eFIDCE_1 = 1, // Enable interrupt
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eCWBER CWBER : 1;
    uint32_t _reserved_1 : 3;
    eFIOC FIOC : 1;
    eFDZC FDZC : 1;
    eFOFC FOFC : 1;
    eFUFC FUFC : 1;
    eFIXC FIXC : 1;
    uint32_t _reserved_2 : 2;
    eFIDC FIDC : 1;
    uint32_t _reserved_3 : 4;
    eCWBEE CWBEE : 1;
    uint32_t _reserved_4 : 3;
    eFIOCE FIOCE : 1;
    eFDZCE FDZCE : 1;
    eFOFCE FOFCE : 1;
    eFUFCE FUFCE : 1;
    eFIXCE FIXCE : 1;
    uint32_t _reserved_5 : 2;
    eFIDCE FIDCE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_ISCR() = delete;
  inline void Reset() volatile { this->value = 0x00020000; }
  static inline volatile MCM_ISCR &Instance() { return *reinterpret_cast<volatile MCM_ISCR*>(0xE0080010); }
};

// Fault address register
//
union MCM_FADR {
  
  // Bit field definition.
  struct {
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FADR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FADR &Instance() { return *reinterpret_cast<volatile MCM_FADR*>(0xE0080020); }
};

// Fault attributes register
//
union MCM_FATR {
  
  enum class eBEDA : uint32_t {
    eBEDA_0 = 0, // Instruction
    eBEDA_1 = 1, // Data
  };
  
  enum class eBEMD : uint32_t {
    eBEMD_0 = 0, // User mode
    eBEMD_1 = 1, // Supervisor/privileged mode
  };
  
  enum class eBESZ : uint32_t {
    eBESZ_0 = 0, // 8-bit access
    eBESZ_1 = 1, // 16-bit access
    eBESZ_2 = 2, // 32-bit access
  };
  
  enum class eBEWT : uint32_t {
    eBEWT_0 = 0, // Read access
    eBEWT_1 = 1, // Write access
  };
  
  enum class eBEOVR : uint32_t {
    eBEOVR_0 = 0, // No bus error overrun
    eBEOVR_1 = 1, // Bus error overrun occurred. The FADR and FDR registers and the other FATR bits are not updated to reflect this new bus error.
  };
  
  // Bit field definition.
  struct {
    eBEDA BEDA : 1;
    eBEMD BEMD : 1;
    uint32_t _reserved_0 : 2;
    eBESZ BESZ : 2;
    uint32_t _reserved_1 : 1;
    eBEWT BEWT : 1;
    uint32_t BEMN : 4;
    uint32_t _reserved_2 : 19;
    eBEOVR BEOVR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FATR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FATR &Instance() { return *reinterpret_cast<volatile MCM_FATR*>(0xE0080024); }
};

// Fault data register
//
union MCM_FDR {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FDR &Instance() { return *reinterpret_cast<volatile MCM_FDR*>(0xE0080028); }
};

// Local Memory Descriptor Register
//
union MCM_LMDR0 {
  
  enum class eMT : uint32_t {
    eMT_0 = 0, // code TCM
    eMT_1 = 1, // system TCM
    eMT_2 = 2, // PC Cache
    eMT_3 = 3, // PS Cache
  };
  
  enum class eRO : uint32_t {
    eRO_0 = 0, // Writes to the LMDRn[7:0] are allowed.
    eRO_1 = 1, // Writes to the LMDRn[7:0] are ignored.
  };
  
  enum class eDPW : uint32_t {
    eDPW_2 = 2, // LMEMn 32-bits wide
    eDPW_3 = 3, // LMEMn 64-bits wide
  };
  
  enum class eWY : uint32_t {
    eWY_0 = 0, // No Cache
    eWY_2 = 2, // 2-Way Set Associative
    eWY_4 = 4, // 4-Way Set Associative
  };
  
  enum class eLMSZ : uint32_t {
    eLMSZ_0 = 0, // no LMEMn (0 KB)
    eLMSZ_1 = 1, // 1 KB LMEMn
    eLMSZ_2 = 2, // 2 KB LMEMn
    eLMSZ_3 = 3, // 4 KB LMEMn
    eLMSZ_4 = 4, // 8 KB LMEMn
    eLMSZ_5 = 5, // 16 KB LMEMn
    eLMSZ_6 = 6, // 32 KB LMEMn
    eLMSZ_7 = 7, // 64 KB LMEMn
    eLMSZ_8 = 8, // 128 KB LMEMn
    eLMSZ_9 = 9, // 256 KB LMEMn
    eLMSZ_10 = 10, // 512 KB LMEMn
    eLMSZ_11 = 11, // 1024 KB LMEMn
    eLMSZ_12 = 12, // 2048 KB LMEMn
    eLMSZ_13 = 13, // 4096 KB LMEMn
    eLMSZ_14 = 14, // 8192 KB LMEMn
    eLMSZ_15 = 15, // 16384 KB LMEMn
  };
  
  enum class eLMSZH : uint32_t {
    eLMSZH_0 = 0, // LMEMn is a power-of-2 capacity.
    eLMSZH_1 = 1, // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
  };
  
  enum class eV : uint32_t {
    eV_0 = 0, // LMEMn is not present.
    eV_1 = 1, // LMEMn is present.
  };
  
  // Bit field definition.
  struct {
    uint32_t CF0 : 4;
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    eMT MT : 3;
    eRO RO : 1;
    eDPW DPW : 3;
    eWY WY : 4;
    eLMSZ LMSZ : 4;
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR0 &Instance() { return *reinterpret_cast<volatile MCM_LMDR0*>(0xE0080400); }
};
// Local Memory Descriptor Register
//
union MCM_LMDR1 {
  
  enum class eMT : uint32_t {
    eMT_0 = 0, // code TCM
    eMT_1 = 1, // system TCM
    eMT_2 = 2, // PC Cache
    eMT_3 = 3, // PS Cache
  };
  
  enum class eRO : uint32_t {
    eRO_0 = 0, // Writes to the LMDRn[7:0] are allowed.
    eRO_1 = 1, // Writes to the LMDRn[7:0] are ignored.
  };
  
  enum class eDPW : uint32_t {
    eDPW_2 = 2, // LMEMn 32-bits wide
    eDPW_3 = 3, // LMEMn 64-bits wide
  };
  
  enum class eWY : uint32_t {
    eWY_0 = 0, // No Cache
    eWY_2 = 2, // 2-Way Set Associative
    eWY_4 = 4, // 4-Way Set Associative
  };
  
  enum class eLMSZ : uint32_t {
    eLMSZ_0 = 0, // no LMEMn (0 KB)
    eLMSZ_1 = 1, // 1 KB LMEMn
    eLMSZ_2 = 2, // 2 KB LMEMn
    eLMSZ_3 = 3, // 4 KB LMEMn
    eLMSZ_4 = 4, // 8 KB LMEMn
    eLMSZ_5 = 5, // 16 KB LMEMn
    eLMSZ_6 = 6, // 32 KB LMEMn
    eLMSZ_7 = 7, // 64 KB LMEMn
    eLMSZ_8 = 8, // 128 KB LMEMn
    eLMSZ_9 = 9, // 256 KB LMEMn
    eLMSZ_10 = 10, // 512 KB LMEMn
    eLMSZ_11 = 11, // 1024 KB LMEMn
    eLMSZ_12 = 12, // 2048 KB LMEMn
    eLMSZ_13 = 13, // 4096 KB LMEMn
    eLMSZ_14 = 14, // 8192 KB LMEMn
    eLMSZ_15 = 15, // 16384 KB LMEMn
  };
  
  enum class eLMSZH : uint32_t {
    eLMSZH_0 = 0, // LMEMn is a power-of-2 capacity.
    eLMSZH_1 = 1, // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
  };
  
  enum class eV : uint32_t {
    eV_0 = 0, // LMEMn is not present.
    eV_1 = 1, // LMEMn is present.
  };
  
  // Bit field definition.
  struct {
    uint32_t CF0 : 4;
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    eMT MT : 3;
    eRO RO : 1;
    eDPW DPW : 3;
    eWY WY : 4;
    eLMSZ LMSZ : 4;
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR1 &Instance() { return *reinterpret_cast<volatile MCM_LMDR1*>(0xE0080404); }
};
// Local Memory Descriptor Register
//
union MCM_LMDR2 {
  
  enum class eMT : uint32_t {
    eMT_0 = 0, // code TCM
    eMT_1 = 1, // system TCM
    eMT_2 = 2, // PC Cache
    eMT_3 = 3, // PS Cache
  };
  
  enum class eRO : uint32_t {
    eRO_0 = 0, // Writes to the LMDRn[7:0] are allowed.
    eRO_1 = 1, // Writes to the LMDRn[7:0] are ignored.
  };
  
  enum class eDPW : uint32_t {
    eDPW_2 = 2, // LMEMn 32-bits wide
    eDPW_3 = 3, // LMEMn 64-bits wide
  };
  
  enum class eWY : uint32_t {
    eWY_0 = 0, // No Cache
    eWY_2 = 2, // 2-Way Set Associative
    eWY_4 = 4, // 4-Way Set Associative
  };
  
  enum class eLMSZ : uint32_t {
    eLMSZ_0 = 0, // no LMEMn (0 KB)
    eLMSZ_1 = 1, // 1 KB LMEMn
    eLMSZ_2 = 2, // 2 KB LMEMn
    eLMSZ_3 = 3, // 4 KB LMEMn
    eLMSZ_4 = 4, // 8 KB LMEMn
    eLMSZ_5 = 5, // 16 KB LMEMn
    eLMSZ_6 = 6, // 32 KB LMEMn
    eLMSZ_7 = 7, // 64 KB LMEMn
    eLMSZ_8 = 8, // 128 KB LMEMn
    eLMSZ_9 = 9, // 256 KB LMEMn
    eLMSZ_10 = 10, // 512 KB LMEMn
    eLMSZ_11 = 11, // 1024 KB LMEMn
    eLMSZ_12 = 12, // 2048 KB LMEMn
    eLMSZ_13 = 13, // 4096 KB LMEMn
    eLMSZ_14 = 14, // 8192 KB LMEMn
    eLMSZ_15 = 15, // 16384 KB LMEMn
  };
  
  enum class eLMSZH : uint32_t {
    eLMSZH_0 = 0, // LMEMn is a power-of-2 capacity.
    eLMSZH_1 = 1, // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
  };
  
  enum class eV : uint32_t {
    eV_0 = 0, // LMEMn is not present.
    eV_1 = 1, // LMEMn is present.
  };
  
  // Bit field definition.
  struct {
    uint32_t CF0 : 4;
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    eMT MT : 3;
    eRO RO : 1;
    eDPW DPW : 3;
    eWY WY : 4;
    eLMSZ LMSZ : 4;
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR2 &Instance() { return *reinterpret_cast<volatile MCM_LMDR2*>(0xE0080408); }
};
// Local Memory Descriptor Register
//
union MCM_LMDR3 {
  
  enum class eMT : uint32_t {
    eMT_0 = 0, // code TCM
    eMT_1 = 1, // system TCM
    eMT_2 = 2, // PC Cache
    eMT_3 = 3, // PS Cache
  };
  
  enum class eRO : uint32_t {
    eRO_0 = 0, // Writes to the LMDRn[7:0] are allowed.
    eRO_1 = 1, // Writes to the LMDRn[7:0] are ignored.
  };
  
  enum class eDPW : uint32_t {
    eDPW_2 = 2, // LMEMn 32-bits wide
    eDPW_3 = 3, // LMEMn 64-bits wide
  };
  
  enum class eWY : uint32_t {
    eWY_0 = 0, // No Cache
    eWY_2 = 2, // 2-Way Set Associative
    eWY_4 = 4, // 4-Way Set Associative
  };
  
  enum class eLMSZ : uint32_t {
    eLMSZ_0 = 0, // no LMEMn (0 KB)
    eLMSZ_1 = 1, // 1 KB LMEMn
    eLMSZ_2 = 2, // 2 KB LMEMn
    eLMSZ_3 = 3, // 4 KB LMEMn
    eLMSZ_4 = 4, // 8 KB LMEMn
    eLMSZ_5 = 5, // 16 KB LMEMn
    eLMSZ_6 = 6, // 32 KB LMEMn
    eLMSZ_7 = 7, // 64 KB LMEMn
    eLMSZ_8 = 8, // 128 KB LMEMn
    eLMSZ_9 = 9, // 256 KB LMEMn
    eLMSZ_10 = 10, // 512 KB LMEMn
    eLMSZ_11 = 11, // 1024 KB LMEMn
    eLMSZ_12 = 12, // 2048 KB LMEMn
    eLMSZ_13 = 13, // 4096 KB LMEMn
    eLMSZ_14 = 14, // 8192 KB LMEMn
    eLMSZ_15 = 15, // 16384 KB LMEMn
  };
  
  enum class eLMSZH : uint32_t {
    eLMSZH_0 = 0, // LMEMn is a power-of-2 capacity.
    eLMSZH_1 = 1, // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
  };
  
  enum class eV : uint32_t {
    eV_0 = 0, // LMEMn is not present.
    eV_1 = 1, // LMEMn is present.
  };
  
  // Bit field definition.
  struct {
    uint32_t CF0 : 4;
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    eMT MT : 3;
    eRO RO : 1;
    eDPW DPW : 3;
    eWY WY : 4;
    eLMSZ LMSZ : 4;
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR3 &Instance() { return *reinterpret_cast<volatile MCM_LMDR3*>(0xE008040C); }
};

// LMEM Parity & ECC Control Register
//
union MCM_LMPECR {
  
  enum class eERNCR : uint32_t {
    eERNCR_0 = 0, // reporting enabled
    eERNCR_1 = 1, // reporting disabled
  };
  
  enum class eERNCI : uint32_t {
    eERNCI_0 = 0, // Interrupt is disabled
    eERNCI_1 = 1, // Interrupt is enabled
  };
  
  enum class eER1BR : uint32_t {
    eER1BR_0 = 0, // reporting enabled
    eER1BR_1 = 1, // reporting disabled
  };
  
  enum class eER1BI : uint32_t {
    eER1BI_0 = 0, // Interrupt is disabled
    eER1BI_1 = 1, // Interrupt is enabled
  };
  
  enum class eECPR : uint32_t {
    eECPR_0 = 0, // reporting enabled
    eECPR_1 = 1, // reporting disabled
  };
  
  enum class eECPI : uint32_t {
    eECPI_0 = 0, // enabled
    eECPI_1 = 1, // disabled
  };
  
  // Bit field definition.
  struct {
    eERNCR ERNCR : 1;
    eERNCI ERNCI : 1;
    uint32_t _reserved_0 : 6;
    eER1BR ER1BR : 1;
    eER1BI ER1BI : 1;
    uint32_t _reserved_1 : 10;
    eECPR ECPR : 1;
    eECPI ECPI : 1;
    uint32_t _reserved_2 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMPECR() = delete;
  inline void Reset() volatile { this->value = 0x00300003; }
  static inline volatile MCM_LMPECR &Instance() { return *reinterpret_cast<volatile MCM_LMPECR*>(0xE0080480); }
};

// LMEM Parity & ECC Interrupt Register
//
union MCM_LMPEIR {
  
  // Bit field definition.
  struct {
    uint32_t ENC : 8;
    uint32_t E1B : 8;
    uint32_t PE : 8;
    uint32_t PEELOC : 5;
    uint32_t _reserved_0 : 2;
    uint32_t V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMPEIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMPEIR &Instance() { return *reinterpret_cast<volatile MCM_LMPEIR*>(0xE0080488); }
};

// LMEM Fault Address Register
//
union MCM_LMFAR {
  
  // Bit field definition.
  struct {
    uint32_t EFADD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFAR &Instance() { return *reinterpret_cast<volatile MCM_LMFAR*>(0xE0080490); }
};

// LMEM Fault Attribute Register
//
union MCM_LMFATR {
  
  // Bit field definition.
  struct {
    uint32_t PEFPRT : 4;
    uint32_t PEFSIZE : 3;
    uint32_t PEFW : 1;
    uint32_t PEFMST : 8;
    uint32_t _reserved_0 : 8;
    uint32_t WORDID : 1;
    uint32_t _reserved_1 : 6;
    uint32_t OVR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFATR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFATR &Instance() { return *reinterpret_cast<volatile MCM_LMFATR*>(0xE0080494); }
};

// LMEM Fault Data High Register
//
union MCM_LMFDHR {
  
  // Bit field definition.
  struct {
    uint32_t PEFDH : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFDHR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFDHR &Instance() { return *reinterpret_cast<volatile MCM_LMFDHR*>(0xE00804A0); }
};

// LMEM Fault Data Low Register
//
union MCM_LMFDLR {
  
  // Bit field definition.
  struct {
    uint32_t PEFDL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFDLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFDLR &Instance() { return *reinterpret_cast<volatile MCM_LMFDLR*>(0xE00804A4); }
};


} // namespace nMCM