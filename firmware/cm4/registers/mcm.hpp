#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Core Platform Miscellaneous Control Module
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nMCM {


// SoC-defined platform revision
union MCM_PLREV {
  
  // Bit field definition.
  struct {
    // read-only - The PLREV[15:0] field is specified by an platform input signal to define a software-visible revision number.
    uint32_t PLREV : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLREV() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_PLREV &ref() { return *reinterpret_cast<volatile MCM_PLREV*>(0xE0080000); }
};

// Processor core type
union MCM_PCT {
  
  // This MCM design supports the ARM Cortex M4 core. The following value identifies this core complex.
  enum class ePCT : uint32_t {
    // ARM Cortex M4
    ePCT_44096 = 44096,
  };
  
  // Bit field definition.
  struct {
    // read-only - This MCM design supports the ARM Cortex M4 core. The following value identifies this core complex.
    ePCT PCT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PCT() = delete;
  inline void Reset() volatile { this->value = 0x0000AC40; }
  static inline volatile MCM_PCT &ref() { return *reinterpret_cast<volatile MCM_PCT*>(0xE0080002); }
};

// Memory configuration
union MCM_MEMCFG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-only - TCRAMU size
    uint32_t TCRAMUSZ : 4;
    uint32_t _reserved_1 : 2;
    // read-only - TCRAML size
    uint32_t TCRAMLSZ : 4;
    uint32_t _reserved_2 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_MEMCFG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_MEMCFG &ref() { return *reinterpret_cast<volatile MCM_MEMCFG*>(0xE0080004); }
};

// Crossbar Switch (AXBS) Slave Configuration
union MCM_PLASC {
  
  // Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
  enum class eASC : uint32_t {
    // A bus slave connection to AXBS input port n is absent
    eASC_0 = 0,
    // A bus slave connection to AXBS input port n is present
    eASC_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
    eASC ASC : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLASC() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile MCM_PLASC &ref() { return *reinterpret_cast<volatile MCM_PLASC*>(0xE0080008); }
};

// Crossbar Switch (AXBS) Master Configuration
union MCM_PLAMC {
  
  // Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
  enum class eAMC : uint32_t {
    // A bus master connection to AXBS input port n is absent
    eAMC_0 = 0,
    // A bus master connection to AXBS input port n is present
    eAMC_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
    eAMC AMC : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_PLAMC() = delete;
  inline void Reset() volatile { this->value = 0x0000001F; }
  static inline volatile MCM_PLAMC &ref() { return *reinterpret_cast<volatile MCM_PLAMC*>(0xE008000A); }
};

// Control Register
union MCM_CR {
  
  // Crossbar round-robin arbitration enable
  enum class eCBRR : uint32_t {
    // Fixed-priority arbitration
    eCBRR_0 = 0,
    // Round-robin arbitration
    eCBRR_1 = 1,
  };
  
  // System TCM arbitration priority
  enum class eSTCMAP : uint32_t {
    // Round robin
    eSTCMAP_0 = 0,
    // Special round robin (favors TCM backoor accesses over the processor)
    eSTCMAP_1 = 1,
    // Fixed priority. Processor has highest, backdoor has lowest
    eSTCMAP_2 = 2,
    // Fixed priority. Backdoor has highest, processor has lowest
    eSTCMAP_3 = 3,
  };
  
  // Code TCM arbitration priority
  enum class eCTCMAP : uint32_t {
    // Round robin
    eCTCMAP_0 = 0,
    // Special round robin (favors TCM backoor accesses over the processor)
    eCTCMAP_1 = 1,
    // Fixed priority. Processor has highest, backdoor has lowest
    eCTCMAP_2 = 2,
    // Fixed priority. Backdoor has highest, processor has lowest
    eCTCMAP_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-only - Status bits
    uint32_t STATUS : 9;
    // read-write - Crossbar round-robin arbitration enable
    eCBRR CBRR : 1;
    uint32_t _reserved_0 : 14;
    // read-write - System TCM arbitration priority
    eSTCMAP STCMAP : 2;
    // read-write - System TCM write protect
    uint32_t STCMWP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Code TCM arbitration priority
    eCTCMAP CTCMAP : 2;
    // read-write - Code TCM Write Protect
    uint32_t CTCMWP : 1;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_CR &ref() { return *reinterpret_cast<volatile MCM_CR*>(0xE008000C); }
};

// Interrupt Status and Control Register
union MCM_ISCR {
  
  // Cache write buffer error status
  enum class eCWBER : uint32_t {
    // No error
    eCWBER_0 = 0,
    // Error occurred
    eCWBER_1 = 1,
  };
  
  // FPU invalid operation interrupt status
  enum class eFIOC : uint32_t {
    // No interrupt
    eFIOC_0 = 0,
    // Interrupt occurred
    eFIOC_1 = 1,
  };
  
  // FPU divide-by-zero interrupt status
  enum class eFDZC : uint32_t {
    // No interrupt
    eFDZC_0 = 0,
    // Interrupt occurred
    eFDZC_1 = 1,
  };
  
  // FPU overflow interrupt status
  enum class eFOFC : uint32_t {
    // No interrupt
    eFOFC_0 = 0,
    // Interrupt occurred
    eFOFC_1 = 1,
  };
  
  // FPU underflow interrupt status
  enum class eFUFC : uint32_t {
    // No interrupt
    eFUFC_0 = 0,
    // Interrupt occurred
    eFUFC_1 = 1,
  };
  
  // FPU inexact interrupt status
  enum class eFIXC : uint32_t {
    // No interrupt
    eFIXC_0 = 0,
    // Interrupt occurred
    eFIXC_1 = 1,
  };
  
  // FPU input denormal interrupt status
  enum class eFIDC : uint32_t {
    // No interrupt
    eFIDC_0 = 0,
    // Interrupt occurred
    eFIDC_1 = 1,
  };
  
  // Cache write buffer error enable
  enum class eCWBEE : uint32_t {
    // Disable error interrupt
    eCWBEE_0 = 0,
    // Enable error interrupt
    eCWBEE_1 = 1,
  };
  
  // FPU invalid operation interrupt enable
  enum class eFIOCE : uint32_t {
    // Disable interrupt
    eFIOCE_0 = 0,
    // Enable interrupt
    eFIOCE_1 = 1,
  };
  
  // FPU divide-by-zero interrupt enable
  enum class eFDZCE : uint32_t {
    // Disable interrupt
    eFDZCE_0 = 0,
    // Enable interrupt
    eFDZCE_1 = 1,
  };
  
  // FPU overflow interrupt enable
  enum class eFOFCE : uint32_t {
    // Disable interrupt
    eFOFCE_0 = 0,
    // Enable interrupt
    eFOFCE_1 = 1,
  };
  
  // FPU underflow interrupt enable
  enum class eFUFCE : uint32_t {
    // Disable interrupt
    eFUFCE_0 = 0,
    // Enable interrupt
    eFUFCE_1 = 1,
  };
  
  // FPU inexact interrupt enable
  enum class eFIXCE : uint32_t {
    // Disable interrupt
    eFIXCE_0 = 0,
    // Enable interrupt
    eFIXCE_1 = 1,
  };
  
  // FPU input denormal interrupt enable
  enum class eFIDCE : uint32_t {
    // Disable interrupt
    eFIDCE_0 = 0,
    // Enable interrupt
    eFIDCE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - Cache write buffer error status
    eCWBER CWBER : 1;
    uint32_t _reserved_1 : 3;
    // read-only - FPU invalid operation interrupt status
    eFIOC FIOC : 1;
    // read-only - FPU divide-by-zero interrupt status
    eFDZC FDZC : 1;
    // read-only - FPU overflow interrupt status
    eFOFC FOFC : 1;
    // read-only - FPU underflow interrupt status
    eFUFC FUFC : 1;
    // read-only - FPU inexact interrupt status
    eFIXC FIXC : 1;
    uint32_t _reserved_2 : 2;
    // read-only - FPU input denormal interrupt status
    eFIDC FIDC : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Cache write buffer error enable
    eCWBEE CWBEE : 1;
    uint32_t _reserved_4 : 3;
    // read-write - FPU invalid operation interrupt enable
    eFIOCE FIOCE : 1;
    // read-write - FPU divide-by-zero interrupt enable
    eFDZCE FDZCE : 1;
    // read-write - FPU overflow interrupt enable
    eFOFCE FOFCE : 1;
    // read-write - FPU underflow interrupt enable
    eFUFCE FUFCE : 1;
    // read-write - FPU inexact interrupt enable
    eFIXCE FIXCE : 1;
    uint32_t _reserved_5 : 2;
    // read-write - FPU input denormal interrupt enable
    eFIDCE FIDCE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_ISCR() = delete;
  inline void Reset() volatile { this->value = 0x00020000; }
  static inline volatile MCM_ISCR &ref() { return *reinterpret_cast<volatile MCM_ISCR*>(0xE0080010); }
};

// Fault address register
union MCM_FADR {
  
  // Bit field definition.
  struct {
    // read-only - Fault address
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FADR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FADR &ref() { return *reinterpret_cast<volatile MCM_FADR*>(0xE0080020); }
};

// Fault attributes register
union MCM_FATR {
  
  // Bus error access type
  enum class eBEDA : uint32_t {
    // Instruction
    eBEDA_0 = 0,
    // Data
    eBEDA_1 = 1,
  };
  
  // Bus error privilege level
  enum class eBEMD : uint32_t {
    // User mode
    eBEMD_0 = 0,
    // Supervisor/privileged mode
    eBEMD_1 = 1,
  };
  
  // Bus error size
  enum class eBESZ : uint32_t {
    // 8-bit access
    eBESZ_0 = 0,
    // 16-bit access
    eBESZ_1 = 1,
    // 32-bit access
    eBESZ_2 = 2,
  };
  
  // Bus error write
  enum class eBEWT : uint32_t {
    // Read access
    eBEWT_0 = 0,
    // Write access
    eBEWT_1 = 1,
  };
  
  // Bus error overrun
  enum class eBEOVR : uint32_t {
    // No bus error overrun
    eBEOVR_0 = 0,
    // Bus error overrun occurred. The FADR and FDR registers and the other FATR bits are not updated to reflect this new bus error.
    eBEOVR_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Bus error access type
    eBEDA BEDA : 1;
    // read-only - Bus error privilege level
    eBEMD BEMD : 1;
    uint32_t _reserved_0 : 2;
    // read-only - Bus error size
    eBESZ BESZ : 2;
    uint32_t _reserved_1 : 1;
    // read-only - Bus error write
    eBEWT BEWT : 1;
    // read-only - Bus error master number
    uint32_t BEMN : 4;
    uint32_t _reserved_2 : 19;
    // read-only - Bus error overrun
    eBEOVR BEOVR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FATR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FATR &ref() { return *reinterpret_cast<volatile MCM_FATR*>(0xE0080024); }
};

// Fault data register
union MCM_FDR {
  
  // Bit field definition.
  struct {
    // read-only - Fault data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_FDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_FDR &ref() { return *reinterpret_cast<volatile MCM_FDR*>(0xE0080028); }
};

// Local Memory Descriptor Register
union MCM_LMDR0 {
  
  // Memory Type
  enum class eMT : uint32_t {
    // code TCM
    eMT_0 = 0,
    // system TCM
    eMT_1 = 1,
    // PC Cache
    eMT_2 = 2,
    // PS Cache
    eMT_3 = 3,
  };
  
  // Read-Only
  enum class eRO : uint32_t {
    // Writes to the LMDRn[7:0] are allowed.
    eRO_0 = 0,
    // Writes to the LMDRn[7:0] are ignored.
    eRO_1 = 1,
  };
  
  // LMEM Data Path Width. This read-only field defines the width of the local memory.
  enum class eDPW : uint32_t {
    // LMEMn 32-bits wide
    eDPW_2 = 2,
    // LMEMn 64-bits wide
    eDPW_3 = 3,
  };
  
  // Level 1 Cache Ways
  enum class eWY : uint32_t {
    // No Cache
    eWY_0 = 0,
    // 2-Way Set Associative
    eWY_2 = 2,
    // 4-Way Set Associative
    eWY_4 = 4,
  };
  
  // LMEM Size
  enum class eLMSZ : uint32_t {
    // no LMEMn (0 KB)
    eLMSZ_0 = 0,
    // 1 KB LMEMn
    eLMSZ_1 = 1,
    // 2 KB LMEMn
    eLMSZ_2 = 2,
    // 4 KB LMEMn
    eLMSZ_3 = 3,
    // 8 KB LMEMn
    eLMSZ_4 = 4,
    // 16 KB LMEMn
    eLMSZ_5 = 5,
    // 32 KB LMEMn
    eLMSZ_6 = 6,
    // 64 KB LMEMn
    eLMSZ_7 = 7,
    // 128 KB LMEMn
    eLMSZ_8 = 8,
    // 256 KB LMEMn
    eLMSZ_9 = 9,
    // 512 KB LMEMn
    eLMSZ_10 = 10,
    // 1024 KB LMEMn
    eLMSZ_11 = 11,
    // 2048 KB LMEMn
    eLMSZ_12 = 12,
    // 4096 KB LMEMn
    eLMSZ_13 = 13,
    // 8192 KB LMEMn
    eLMSZ_14 = 14,
    // 16384 KB LMEMn
    eLMSZ_15 = 15,
  };
  
  // LMEM Size "Hole"
  enum class eLMSZH : uint32_t {
    // LMEMn is a power-of-2 capacity.
    eLMSZH_0 = 0,
    // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
    eLMSZH_1 = 1,
  };
  
  // Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
  enum class eV : uint32_t {
    // LMEMn is not present.
    eV_0 = 0,
    // LMEMn is present.
    eV_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control Field 0
    uint32_t CF0 : 4;
    // read-write - Control Field 1 - for Cache Parity control functions
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    // read-only - Memory Type
    eMT MT : 3;
    // read-only - Read-Only
    eRO RO : 1;
    // read-only - LMEM Data Path Width. This read-only field defines the width of the local memory.
    eDPW DPW : 3;
    // read-only - Level 1 Cache Ways
    eWY WY : 4;
    // read-only - LMEM Size
    eLMSZ LMSZ : 4;
    // read-only - LMEM Size "Hole"
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR0 &ref() { return *reinterpret_cast<volatile MCM_LMDR0*>(0xE0080400); }
};
// Local Memory Descriptor Register
union MCM_LMDR1 {
  
  // Memory Type
  enum class eMT : uint32_t {
    // code TCM
    eMT_0 = 0,
    // system TCM
    eMT_1 = 1,
    // PC Cache
    eMT_2 = 2,
    // PS Cache
    eMT_3 = 3,
  };
  
  // Read-Only
  enum class eRO : uint32_t {
    // Writes to the LMDRn[7:0] are allowed.
    eRO_0 = 0,
    // Writes to the LMDRn[7:0] are ignored.
    eRO_1 = 1,
  };
  
  // LMEM Data Path Width. This read-only field defines the width of the local memory.
  enum class eDPW : uint32_t {
    // LMEMn 32-bits wide
    eDPW_2 = 2,
    // LMEMn 64-bits wide
    eDPW_3 = 3,
  };
  
  // Level 1 Cache Ways
  enum class eWY : uint32_t {
    // No Cache
    eWY_0 = 0,
    // 2-Way Set Associative
    eWY_2 = 2,
    // 4-Way Set Associative
    eWY_4 = 4,
  };
  
  // LMEM Size
  enum class eLMSZ : uint32_t {
    // no LMEMn (0 KB)
    eLMSZ_0 = 0,
    // 1 KB LMEMn
    eLMSZ_1 = 1,
    // 2 KB LMEMn
    eLMSZ_2 = 2,
    // 4 KB LMEMn
    eLMSZ_3 = 3,
    // 8 KB LMEMn
    eLMSZ_4 = 4,
    // 16 KB LMEMn
    eLMSZ_5 = 5,
    // 32 KB LMEMn
    eLMSZ_6 = 6,
    // 64 KB LMEMn
    eLMSZ_7 = 7,
    // 128 KB LMEMn
    eLMSZ_8 = 8,
    // 256 KB LMEMn
    eLMSZ_9 = 9,
    // 512 KB LMEMn
    eLMSZ_10 = 10,
    // 1024 KB LMEMn
    eLMSZ_11 = 11,
    // 2048 KB LMEMn
    eLMSZ_12 = 12,
    // 4096 KB LMEMn
    eLMSZ_13 = 13,
    // 8192 KB LMEMn
    eLMSZ_14 = 14,
    // 16384 KB LMEMn
    eLMSZ_15 = 15,
  };
  
  // LMEM Size "Hole"
  enum class eLMSZH : uint32_t {
    // LMEMn is a power-of-2 capacity.
    eLMSZH_0 = 0,
    // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
    eLMSZH_1 = 1,
  };
  
  // Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
  enum class eV : uint32_t {
    // LMEMn is not present.
    eV_0 = 0,
    // LMEMn is present.
    eV_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control Field 0
    uint32_t CF0 : 4;
    // read-write - Control Field 1 - for Cache Parity control functions
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    // read-only - Memory Type
    eMT MT : 3;
    // read-only - Read-Only
    eRO RO : 1;
    // read-only - LMEM Data Path Width. This read-only field defines the width of the local memory.
    eDPW DPW : 3;
    // read-only - Level 1 Cache Ways
    eWY WY : 4;
    // read-only - LMEM Size
    eLMSZ LMSZ : 4;
    // read-only - LMEM Size "Hole"
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR1 &ref() { return *reinterpret_cast<volatile MCM_LMDR1*>(0xE0080404); }
};
// Local Memory Descriptor Register
union MCM_LMDR2 {
  
  // Memory Type
  enum class eMT : uint32_t {
    // code TCM
    eMT_0 = 0,
    // system TCM
    eMT_1 = 1,
    // PC Cache
    eMT_2 = 2,
    // PS Cache
    eMT_3 = 3,
  };
  
  // Read-Only
  enum class eRO : uint32_t {
    // Writes to the LMDRn[7:0] are allowed.
    eRO_0 = 0,
    // Writes to the LMDRn[7:0] are ignored.
    eRO_1 = 1,
  };
  
  // LMEM Data Path Width. This read-only field defines the width of the local memory.
  enum class eDPW : uint32_t {
    // LMEMn 32-bits wide
    eDPW_2 = 2,
    // LMEMn 64-bits wide
    eDPW_3 = 3,
  };
  
  // Level 1 Cache Ways
  enum class eWY : uint32_t {
    // No Cache
    eWY_0 = 0,
    // 2-Way Set Associative
    eWY_2 = 2,
    // 4-Way Set Associative
    eWY_4 = 4,
  };
  
  // LMEM Size
  enum class eLMSZ : uint32_t {
    // no LMEMn (0 KB)
    eLMSZ_0 = 0,
    // 1 KB LMEMn
    eLMSZ_1 = 1,
    // 2 KB LMEMn
    eLMSZ_2 = 2,
    // 4 KB LMEMn
    eLMSZ_3 = 3,
    // 8 KB LMEMn
    eLMSZ_4 = 4,
    // 16 KB LMEMn
    eLMSZ_5 = 5,
    // 32 KB LMEMn
    eLMSZ_6 = 6,
    // 64 KB LMEMn
    eLMSZ_7 = 7,
    // 128 KB LMEMn
    eLMSZ_8 = 8,
    // 256 KB LMEMn
    eLMSZ_9 = 9,
    // 512 KB LMEMn
    eLMSZ_10 = 10,
    // 1024 KB LMEMn
    eLMSZ_11 = 11,
    // 2048 KB LMEMn
    eLMSZ_12 = 12,
    // 4096 KB LMEMn
    eLMSZ_13 = 13,
    // 8192 KB LMEMn
    eLMSZ_14 = 14,
    // 16384 KB LMEMn
    eLMSZ_15 = 15,
  };
  
  // LMEM Size "Hole"
  enum class eLMSZH : uint32_t {
    // LMEMn is a power-of-2 capacity.
    eLMSZH_0 = 0,
    // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
    eLMSZH_1 = 1,
  };
  
  // Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
  enum class eV : uint32_t {
    // LMEMn is not present.
    eV_0 = 0,
    // LMEMn is present.
    eV_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control Field 0
    uint32_t CF0 : 4;
    // read-write - Control Field 1 - for Cache Parity control functions
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    // read-only - Memory Type
    eMT MT : 3;
    // read-only - Read-Only
    eRO RO : 1;
    // read-only - LMEM Data Path Width. This read-only field defines the width of the local memory.
    eDPW DPW : 3;
    // read-only - Level 1 Cache Ways
    eWY WY : 4;
    // read-only - LMEM Size
    eLMSZ LMSZ : 4;
    // read-only - LMEM Size "Hole"
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR2 &ref() { return *reinterpret_cast<volatile MCM_LMDR2*>(0xE0080408); }
};
// Local Memory Descriptor Register
union MCM_LMDR3 {
  
  // Memory Type
  enum class eMT : uint32_t {
    // code TCM
    eMT_0 = 0,
    // system TCM
    eMT_1 = 1,
    // PC Cache
    eMT_2 = 2,
    // PS Cache
    eMT_3 = 3,
  };
  
  // Read-Only
  enum class eRO : uint32_t {
    // Writes to the LMDRn[7:0] are allowed.
    eRO_0 = 0,
    // Writes to the LMDRn[7:0] are ignored.
    eRO_1 = 1,
  };
  
  // LMEM Data Path Width. This read-only field defines the width of the local memory.
  enum class eDPW : uint32_t {
    // LMEMn 32-bits wide
    eDPW_2 = 2,
    // LMEMn 64-bits wide
    eDPW_3 = 3,
  };
  
  // Level 1 Cache Ways
  enum class eWY : uint32_t {
    // No Cache
    eWY_0 = 0,
    // 2-Way Set Associative
    eWY_2 = 2,
    // 4-Way Set Associative
    eWY_4 = 4,
  };
  
  // LMEM Size
  enum class eLMSZ : uint32_t {
    // no LMEMn (0 KB)
    eLMSZ_0 = 0,
    // 1 KB LMEMn
    eLMSZ_1 = 1,
    // 2 KB LMEMn
    eLMSZ_2 = 2,
    // 4 KB LMEMn
    eLMSZ_3 = 3,
    // 8 KB LMEMn
    eLMSZ_4 = 4,
    // 16 KB LMEMn
    eLMSZ_5 = 5,
    // 32 KB LMEMn
    eLMSZ_6 = 6,
    // 64 KB LMEMn
    eLMSZ_7 = 7,
    // 128 KB LMEMn
    eLMSZ_8 = 8,
    // 256 KB LMEMn
    eLMSZ_9 = 9,
    // 512 KB LMEMn
    eLMSZ_10 = 10,
    // 1024 KB LMEMn
    eLMSZ_11 = 11,
    // 2048 KB LMEMn
    eLMSZ_12 = 12,
    // 4096 KB LMEMn
    eLMSZ_13 = 13,
    // 8192 KB LMEMn
    eLMSZ_14 = 14,
    // 16384 KB LMEMn
    eLMSZ_15 = 15,
  };
  
  // LMEM Size "Hole"
  enum class eLMSZH : uint32_t {
    // LMEMn is a power-of-2 capacity.
    eLMSZH_0 = 0,
    // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
    eLMSZH_1 = 1,
  };
  
  // Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
  enum class eV : uint32_t {
    // LMEMn is not present.
    eV_0 = 0,
    // LMEMn is present.
    eV_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control Field 0
    uint32_t CF0 : 4;
    // read-write - Control Field 1 - for Cache Parity control functions
    uint32_t CF1 : 4;
    uint32_t _reserved_0 : 5;
    // read-only - Memory Type
    eMT MT : 3;
    // read-only - Read-Only
    eRO RO : 1;
    // read-only - LMEM Data Path Width. This read-only field defines the width of the local memory.
    eDPW DPW : 3;
    // read-only - Level 1 Cache Ways
    eWY WY : 4;
    // read-only - LMEM Size
    eLMSZ LMSZ : 4;
    // read-only - LMEM Size "Hole"
    eLMSZH LMSZH : 1;
    uint32_t _reserved_1 : 2;
    // read-only - Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
    eV V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMDR3 &ref() { return *reinterpret_cast<volatile MCM_LMDR3*>(0xE008040C); }
};

// LMEM Parity & ECC Control Register
union MCM_LMPECR {
  
  // Enable RAM ECC Non-correctable Reporting
  enum class eERNCR : uint32_t {
    // reporting enabled
    eERNCR_0 = 0,
    // reporting disabled
    eERNCR_1 = 1,
  };
  
  // Enable RAM Non-correctable ECC Interrupt
  enum class eERNCI : uint32_t {
    // Interrupt is disabled
    eERNCI_0 = 0,
    // Interrupt is enabled
    eERNCI_1 = 1,
  };
  
  // Enable RAM ECC 1-bit Reporting
  enum class eER1BR : uint32_t {
    // reporting enabled
    eER1BR_0 = 0,
    // reporting disabled
    eER1BR_1 = 1,
  };
  
  // Enable RAM ECC 1-bit Interrupt
  enum class eER1BI : uint32_t {
    // Interrupt is disabled
    eER1BI_0 = 0,
    // Interrupt is enabled
    eER1BI_1 = 1,
  };
  
  // Enable Cache Parity Reporting
  enum class eECPR : uint32_t {
    // reporting enabled
    eECPR_0 = 0,
    // reporting disabled
    eECPR_1 = 1,
  };
  
  // Enable Cache Parity IRQ
  enum class eECPI : uint32_t {
    // enabled
    eECPI_0 = 0,
    // disabled
    eECPI_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable RAM ECC Non-correctable Reporting
    eERNCR ERNCR : 1;
    // read-write - Enable RAM Non-correctable ECC Interrupt
    eERNCI ERNCI : 1;
    uint32_t _reserved_0 : 6;
    // read-write - Enable RAM ECC 1-bit Reporting
    eER1BR ER1BR : 1;
    // read-write - Enable RAM ECC 1-bit Interrupt
    eER1BI ER1BI : 1;
    uint32_t _reserved_1 : 10;
    // read-write - Enable Cache Parity Reporting
    eECPR ECPR : 1;
    // read-write - Enable Cache Parity IRQ
    eECPI ECPI : 1;
    uint32_t _reserved_2 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMPECR() = delete;
  inline void Reset() volatile { this->value = 0x00300003; }
  static inline volatile MCM_LMPECR &ref() { return *reinterpret_cast<volatile MCM_LMPECR*>(0xE0080480); }
};

// LMEM Parity & ECC Interrupt Register
union MCM_LMPEIR {
  
  // Bit field definition.
  struct {
    // read-write - ENCn = ECC Non-correctable Error n
    uint32_t ENC : 8;
    // read-write - E1Bn = ECC 1-bit Error n
    uint32_t E1B : 8;
    // read-write - Parity Error
    uint32_t PE : 8;
    // read-write - Parity or ECC Error Location
    uint32_t PEELOC : 5;
    uint32_t _reserved_0 : 2;
    // read-only - Valid bit
    uint32_t V : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMPEIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMPEIR &ref() { return *reinterpret_cast<volatile MCM_LMPEIR*>(0xE0080488); }
};

// LMEM Fault Address Register
union MCM_LMFAR {
  
  // Bit field definition.
  struct {
    // read-only - ECC Fault Address
    uint32_t EFADD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFAR &ref() { return *reinterpret_cast<volatile MCM_LMFAR*>(0xE0080490); }
};

// LMEM Fault Attribute Register
union MCM_LMFATR {
  
  // Bit field definition.
  struct {
    // read-write - Parity/ECC Fault Protection FATR[3] is Cacheable: 0=Non-cacheable, 1=Cacheable FATR[2] is Bufferable: 0=Non-bufferable, 1=Bufferable FATR[1] is Mode: 0=User mode, 1=Supervisor mode FATR[0] is Type: 0=I-Fetch, 1=Data
    uint32_t PEFPRT : 4;
    // read-write - Parity/ECC Fault Master Size 3'b000 = 8-bit access 3'b001 = 16-bit access 3'b010 = 32-bit access 3'b011 = 64-bit access 3'b1xx = Reserved
    uint32_t PEFSIZE : 3;
    // read-only - Parity/ECC Fault Write
    uint32_t PEFW : 1;
    // read-only - Parity/ECC Fault Master Number
    uint32_t PEFMST : 8;
    uint32_t _reserved_0 : 8;
    // read-only - ID of the word which has ECC error
    uint32_t WORDID : 1;
    uint32_t _reserved_1 : 6;
    // read-only - Overrun
    uint32_t OVR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFATR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFATR &ref() { return *reinterpret_cast<volatile MCM_LMFATR*>(0xE0080494); }
};

// LMEM Fault Data High Register
union MCM_LMFDHR {
  
  // Bit field definition.
  struct {
    // read-only - Parity or ECC Fault Data High
    uint32_t PEFDH : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFDHR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFDHR &ref() { return *reinterpret_cast<volatile MCM_LMFDHR*>(0xE00804A0); }
};

// LMEM Fault Data Low Register
union MCM_LMFDLR {
  
  // Bit field definition.
  struct {
    // read-only - Parity or ECC Fault Data Low
    uint32_t PEFDL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCM_LMFDLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCM_LMFDLR &ref() { return *reinterpret_cast<volatile MCM_LMFDLR*>(0xE00804A4); }
};


} // namespace nMCM