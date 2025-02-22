#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCM4_SystemControl {


// Auxiliary Control Register,
//
union SCB_ACTLR {
  
  // Bit field definition.
  struct {
    uint32_t DISMCYCINT : 1;
    uint32_t DISDEFWBUF : 1;
    uint32_t DISFOLD : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ACTLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ACTLR &Instance() { return *reinterpret_cast<volatile SCB_ACTLR*>(0xE000E008); }
};

// CPUID Base Register
//
union SCB_CPUID {
  
  // Bit field definition.
  struct {
    uint32_t REVISION : 4;
    uint32_t PARTNO : 12;
    uint32_t _reserved_0 : 4;
    uint32_t VARIANT : 4;
    uint32_t IMPLEMENTER : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CPUID() = delete;
  inline void Reset() volatile { this->value = 0x410FC240; }
  static inline volatile SCB_CPUID &Instance() { return *reinterpret_cast<volatile SCB_CPUID*>(0xE000ED00); }
};

// Interrupt Control and State Register
//
union SCB_ICSR {
  
  enum class eRETTOBASE : uint32_t {
    eRETTOBASE_0 = 0, // there are preempted active exceptions to execute
    eRETTOBASE_1 = 1, // there are no active exceptions, or the currently-executing exception is the only active exception
  };
  
  enum class eISRPREEMPT : uint32_t {
    eISRPREEMPT_0 = 0, // Will not service
    eISRPREEMPT_1 = 1, // Will service a pending exception
  };
  
  enum class ePENDSTCLR : uint32_t {
    ePENDSTCLR_0 = 0, // no effect
    ePENDSTCLR_1 = 1, // removes the pending state from the SysTick exception
  };
  
  enum class ePENDSTSET : uint32_t {
    ePENDSTSET_0 = 0, // write: no effect; read: SysTick exception is not pending
    ePENDSTSET_1 = 1, // write: changes SysTick exception state to pending; read: SysTick exception is pending
  };
  
  enum class ePENDSVCLR : uint32_t {
    ePENDSVCLR_0 = 0, // no effect
    ePENDSVCLR_1 = 1, // removes the pending state from the PendSV exception
  };
  
  enum class ePENDSVSET : uint32_t {
    ePENDSVSET_0 = 0, // write: no effect; read: PendSV exception is not pending
    ePENDSVSET_1 = 1, // write: changes PendSV exception state to pending; read: PendSV exception is pending
  };
  
  enum class eNMIPENDSET : uint32_t {
    eNMIPENDSET_0 = 0, // write: no effect; read: NMI exception is not pending
    eNMIPENDSET_1 = 1, // write: changes NMI exception state to pending; read: NMI exception is pending
  };
  
  // Bit field definition.
  struct {
    uint32_t VECTACTIVE : 9;
    uint32_t _reserved_0 : 2;
    eRETTOBASE RETTOBASE : 1;
    uint32_t VECTPENDING : 6;
    uint32_t _reserved_1 : 4;
    uint32_t ISRPENDING : 1;
    eISRPREEMPT ISRPREEMPT : 1;
    uint32_t _reserved_2 : 1;
    ePENDSTCLR PENDSTCLR : 1;
    ePENDSTSET PENDSTSET : 1;
    ePENDSVCLR PENDSVCLR : 1;
    ePENDSVSET PENDSVSET : 1;
    uint32_t _reserved_3 : 2;
    eNMIPENDSET NMIPENDSET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ICSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICSR &Instance() { return *reinterpret_cast<volatile SCB_ICSR*>(0xE000ED04); }
};

// Vector Table Offset Register
//
union SCB_VTOR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    uint32_t TBLOFF : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_VTOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_VTOR &Instance() { return *reinterpret_cast<volatile SCB_VTOR*>(0xE000ED08); }
};

// Application Interrupt and Reset Control Register
//
union SCB_AIRCR {
  
  enum class eSYSRESETREQ : uint32_t {
    eSYSRESETREQ_0 = 0, // no system reset request
    eSYSRESETREQ_1 = 1, // asserts a signal to the outer system that requests a reset
  };
  
  enum class eENDIANNESS : uint32_t {
    eENDIANNESS_0 = 0, // Little-endian
    eENDIANNESS_1 = 1, // Big-endian
  };
  
  // Bit field definition.
  struct {
    uint32_t VECTRESET : 1;
    uint32_t VECTCLRACTIVE : 1;
    eSYSRESETREQ SYSRESETREQ : 1;
    uint32_t _reserved_0 : 5;
    uint32_t PRIGROUP : 3;
    uint32_t _reserved_1 : 4;
    eENDIANNESS ENDIANNESS : 1;
    uint32_t VECTKEY : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_AIRCR() = delete;
  inline void Reset() volatile { this->value = 0xFA050000; }
  static inline volatile SCB_AIRCR &Instance() { return *reinterpret_cast<volatile SCB_AIRCR*>(0xE000ED0C); }
};

// System Control Register
//
union SCB_SCR {
  
  enum class eSLEEPONEXIT : uint32_t {
    eSLEEPONEXIT_0 = 0, // o not sleep when returning to Thread mode
    eSLEEPONEXIT_1 = 1, // enter sleep, or deep sleep, on return from an ISR
  };
  
  enum class eSLEEPDEEP : uint32_t {
    eSLEEPDEEP_0 = 0, // sleep
    eSLEEPDEEP_1 = 1, // deep sleep
  };
  
  enum class eSEVONPEND : uint32_t {
    eSEVONPEND_0 = 0, // only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
    eSEVONPEND_1 = 1, // enabled events and all interrupts, including disabled interrupts, can wakeup the processor
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eSLEEPONEXIT SLEEPONEXIT : 1;
    eSLEEPDEEP SLEEPDEEP : 1;
    uint32_t _reserved_1 : 1;
    eSEVONPEND SEVONPEND : 1;
    uint32_t _reserved_2 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SCR &Instance() { return *reinterpret_cast<volatile SCB_SCR*>(0xE000ED10); }
};

// Configuration and Control Register
//
union SCB_CCR {
  
  enum class eNONBASETHRDENA : uint32_t {
    eNONBASETHRDENA_0 = 0, // processor can enter Thread mode only when no exception is active
    eNONBASETHRDENA_1 = 1, // processor can enter Thread mode from any level under the control of an EXC_RETURN value
  };
  
  enum class eUSERSETMPEND : uint32_t {
    eUSERSETMPEND_0 = 0, // disable
    eUSERSETMPEND_1 = 1, // enable
  };
  
  enum class eUNALIGN_TRP : uint32_t {
    eUNALIGN_TRP_0 = 0, // do not trap unaligned halfword and word accesses
    eUNALIGN_TRP_1 = 1, // trap unaligned halfword and word accesses
  };
  
  enum class eDIV_0_TRP : uint32_t {
    eDIV_0_TRP_0 = 0, // do not trap divide by 0
    eDIV_0_TRP_1 = 1, // trap divide by 0
  };
  
  enum class eBFHFNMIGN : uint32_t {
    eBFHFNMIGN_0 = 0, // data bus faults caused by load and store instructions cause a lock-up
    eBFHFNMIGN_1 = 1, // handlers running at priority -1 and -2 ignore data bus faults caused by load and store instructions
  };
  
  enum class eSTKALIGN : uint32_t {
    eSTKALIGN_0 = 0, // 4-byte aligned
    eSTKALIGN_1 = 1, // 8-byte aligned
  };
  
  // Bit field definition.
  struct {
    eNONBASETHRDENA NONBASETHRDENA : 1;
    eUSERSETMPEND USERSETMPEND : 1;
    uint32_t _reserved_0 : 1;
    eUNALIGN_TRP UNALIGN_TRP : 1;
    eDIV_0_TRP DIV_0_TRP : 1;
    uint32_t _reserved_1 : 3;
    eBFHFNMIGN BFHFNMIGN : 1;
    eSTKALIGN STKALIGN : 1;
    uint32_t _reserved_2 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CCR &Instance() { return *reinterpret_cast<volatile SCB_CCR*>(0xE000ED14); }
};

// System Handler Priority Register 1
//
union SCB_SHPR1 {
  
  // Bit field definition.
  struct {
    uint32_t PRI_4 : 8;
    uint32_t PRI_5 : 8;
    uint32_t PRI_6 : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR1 &Instance() { return *reinterpret_cast<volatile SCB_SHPR1*>(0xE000ED18); }
};

// System Handler Priority Register 2
//
union SCB_SHPR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    uint32_t PRI_11 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR2 &Instance() { return *reinterpret_cast<volatile SCB_SHPR2*>(0xE000ED1C); }
};

// System Handler Priority Register 3
//
union SCB_SHPR3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    uint32_t PRI_14 : 8;
    uint32_t PRI_15 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR3 &Instance() { return *reinterpret_cast<volatile SCB_SHPR3*>(0xE000ED20); }
};

// System Handler Control and State Register
//
union SCB_SHCSR {
  
  enum class eMEMFAULTACT : uint32_t {
    eMEMFAULTACT_0 = 0, // exception is not active
    eMEMFAULTACT_1 = 1, // exception is active
  };
  
  enum class eBUSFAULTACT : uint32_t {
    eBUSFAULTACT_0 = 0, // exception is not active
    eBUSFAULTACT_1 = 1, // exception is active
  };
  
  enum class eUSGFAULTACT : uint32_t {
    eUSGFAULTACT_0 = 0, // exception is not active
    eUSGFAULTACT_1 = 1, // exception is active
  };
  
  enum class eSVCALLACT : uint32_t {
    eSVCALLACT_0 = 0, // exception is not active
    eSVCALLACT_1 = 1, // exception is active
  };
  
  enum class eMONITORACT : uint32_t {
    eMONITORACT_0 = 0, // exception is not active
    eMONITORACT_1 = 1, // exception is active
  };
  
  enum class ePENDSVACT : uint32_t {
    ePENDSVACT_0 = 0, // exception is not active
    ePENDSVACT_1 = 1, // exception is active
  };
  
  enum class eSYSTICKACT : uint32_t {
    eSYSTICKACT_0 = 0, // exception is not active
    eSYSTICKACT_1 = 1, // exception is active
  };
  
  enum class eUSGFAULTPENDED : uint32_t {
    eUSGFAULTPENDED_0 = 0, // exception is not pending
    eUSGFAULTPENDED_1 = 1, // exception is pending
  };
  
  enum class eMEMFAULTPENDED : uint32_t {
    eMEMFAULTPENDED_0 = 0, // exception is not pending
    eMEMFAULTPENDED_1 = 1, // exception is pending
  };
  
  enum class eBUSFAULTPENDED : uint32_t {
    eBUSFAULTPENDED_0 = 0, // exception is not pending
    eBUSFAULTPENDED_1 = 1, // exception is pending
  };
  
  enum class eSVCALLPENDED : uint32_t {
    eSVCALLPENDED_0 = 0, // exception is not pending
    eSVCALLPENDED_1 = 1, // exception is pending
  };
  
  enum class eMEMFAULTENA : uint32_t {
    eMEMFAULTENA_0 = 0, // disable the exception
    eMEMFAULTENA_1 = 1, // enable the exception
  };
  
  enum class eBUSFAULTENA : uint32_t {
    eBUSFAULTENA_0 = 0, // disable the exception
    eBUSFAULTENA_1 = 1, // enable the exception
  };
  
  enum class eUSGFAULTENA : uint32_t {
    eUSGFAULTENA_0 = 0, // disable the exception
    eUSGFAULTENA_1 = 1, // enable the exception
  };
  
  // Bit field definition.
  struct {
    eMEMFAULTACT MEMFAULTACT : 1;
    eBUSFAULTACT BUSFAULTACT : 1;
    uint32_t _reserved_0 : 1;
    eUSGFAULTACT USGFAULTACT : 1;
    uint32_t _reserved_1 : 3;
    eSVCALLACT SVCALLACT : 1;
    eMONITORACT MONITORACT : 1;
    uint32_t _reserved_2 : 1;
    ePENDSVACT PENDSVACT : 1;
    eSYSTICKACT SYSTICKACT : 1;
    eUSGFAULTPENDED USGFAULTPENDED : 1;
    eMEMFAULTPENDED MEMFAULTPENDED : 1;
    eBUSFAULTPENDED BUSFAULTPENDED : 1;
    eSVCALLPENDED SVCALLPENDED : 1;
    eMEMFAULTENA MEMFAULTENA : 1;
    eBUSFAULTENA BUSFAULTENA : 1;
    eUSGFAULTENA USGFAULTENA : 1;
    uint32_t _reserved_3 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHCSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHCSR &Instance() { return *reinterpret_cast<volatile SCB_SHCSR*>(0xE000ED24); }
};

// Configurable Fault Status Registers
//
union SCB_CFSR {
  
  enum class eIACCVIOL : uint32_t {
    eIACCVIOL_0 = 0, // no instruction access violation fault
    eIACCVIOL_1 = 1, // the processor attempted an instruction fetch from a location that does not permit execution
  };
  
  enum class eDACCVIOL : uint32_t {
    eDACCVIOL_0 = 0, // no data access violation fault
    eDACCVIOL_1 = 1, // the processor attempted a load or store at a location that does not permit the operation
  };
  
  enum class eMUNSTKERR : uint32_t {
    eMUNSTKERR_0 = 0, // no unstacking fault
    eMUNSTKERR_1 = 1, // unstack for an exception return has caused one or more access violations
  };
  
  enum class eMSTKERR : uint32_t {
    eMSTKERR_0 = 0, // no stacking fault
    eMSTKERR_1 = 1, // stacking for an exception entry has caused one or more access violations
  };
  
  enum class eMLSPERR : uint32_t {
    eMLSPERR_0 = 0, // No MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_1 = 1, // A MemManage fault occurred during floating-point lazy state preservation
  };
  
  enum class eMMARVALID : uint32_t {
    eMMARVALID_0 = 0, // value in MMAR is not a valid fault address
    eMMARVALID_1 = 1, // MMAR holds a valid fault address
  };
  
  enum class eIBUSERR : uint32_t {
    eIBUSERR_0 = 0, // no instruction bus error
    eIBUSERR_1 = 1, // instruction bus error
  };
  
  enum class ePRECISERR : uint32_t {
    ePRECISERR_0 = 0, // no precise data bus error
    ePRECISERR_1 = 1, // a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
  };
  
  enum class eIMPRECISERR : uint32_t {
    eIMPRECISERR_0 = 0, // no imprecise data bus error
    eIMPRECISERR_1 = 1, // a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
  };
  
  enum class eUNSTKERR : uint32_t {
    eUNSTKERR_0 = 0, // no unstacking fault
    eUNSTKERR_1 = 1, // unstack for an exception return has caused one or more BusFaults
  };
  
  enum class eSTKERR : uint32_t {
    eSTKERR_0 = 0, // no stacking fault
    eSTKERR_1 = 1, // stacking for an exception entry has caused one or more BusFaults
  };
  
  enum class eLSPERR : uint32_t {
    eLSPERR_0 = 0, // No bus fault occurred during floating-point lazy state preservation
    eLSPERR_1 = 1, // A bus fault occurred during floating-point lazy state preservation
  };
  
  enum class eBFARVALID : uint32_t {
    eBFARVALID_0 = 0, // value in BFAR is not a valid fault address
    eBFARVALID_1 = 1, // BFAR holds a valid fault address
  };
  
  enum class eUNDEFINSTR : uint32_t {
    eUNDEFINSTR_0 = 0, // no undefined instruction UsageFault
    eUNDEFINSTR_1 = 1, // the processor has attempted to execute an undefined instruction
  };
  
  enum class eINVSTATE : uint32_t {
    eINVSTATE_0 = 0, // no invalid state UsageFault
    eINVSTATE_1 = 1, // the processor has attempted to execute an instruction that makes illegal use of the EPSR
  };
  
  enum class eINVPC : uint32_t {
    eINVPC_0 = 0, // no invalid PC load UsageFault
    eINVPC_1 = 1, // the processor has attempted an illegal load of EXC_RETURN to the PC
  };
  
  enum class eNOCP : uint32_t {
    eNOCP_0 = 0, // no UsageFault caused by attempting to access a coprocessor
    eNOCP_1 = 1, // the processor has attempted to access a coprocessor
  };
  
  enum class eUNALIGNED : uint32_t {
    eUNALIGNED_0 = 0, // no unaligned access fault, or unaligned access trapping not enabled
    eUNALIGNED_1 = 1, // the processor has made an unaligned memory access
  };
  
  enum class eDIVBYZERO : uint32_t {
    eDIVBYZERO_0 = 0, // no divide by zero fault, or divide by zero trapping not enabled
    eDIVBYZERO_1 = 1, // the processor has executed an SDIV or UDIV instruction with a divisor of 0
  };
  
  // Bit field definition.
  struct {
    eIACCVIOL IACCVIOL : 1;
    eDACCVIOL DACCVIOL : 1;
    uint32_t _reserved_0 : 1;
    eMUNSTKERR MUNSTKERR : 1;
    eMSTKERR MSTKERR : 1;
    eMLSPERR MLSPERR : 1;
    uint32_t _reserved_1 : 1;
    eMMARVALID MMARVALID : 1;
    eIBUSERR IBUSERR : 1;
    ePRECISERR PRECISERR : 1;
    eIMPRECISERR IMPRECISERR : 1;
    eUNSTKERR UNSTKERR : 1;
    eSTKERR STKERR : 1;
    eLSPERR LSPERR : 1;
    uint32_t _reserved_2 : 1;
    eBFARVALID BFARVALID : 1;
    eUNDEFINSTR UNDEFINSTR : 1;
    eINVSTATE INVSTATE : 1;
    eINVPC INVPC : 1;
    eNOCP NOCP : 1;
    uint32_t _reserved_3 : 4;
    eUNALIGNED UNALIGNED : 1;
    eDIVBYZERO DIVBYZERO : 1;
    uint32_t _reserved_4 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CFSR &Instance() { return *reinterpret_cast<volatile SCB_CFSR*>(0xE000ED28); }
};

// HardFault Status register
//
union SCB_HFSR {
  
  enum class eVECTTBL : uint32_t {
    eVECTTBL_0 = 0, // no BusFault on vector table read
    eVECTTBL_1 = 1, // BusFault on vector table read
  };
  
  enum class eFORCED : uint32_t {
    eFORCED_0 = 0, // no forced HardFault
    eFORCED_1 = 1, // forced HardFault
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eVECTTBL VECTTBL : 1;
    uint32_t _reserved_1 : 28;
    eFORCED FORCED : 1;
    uint32_t DEBUGEVT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_HFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_HFSR &Instance() { return *reinterpret_cast<volatile SCB_HFSR*>(0xE000ED2C); }
};

// Debug Fault Status Register
//
union SCB_DFSR {
  
  enum class eHALTED : uint32_t {
    eHALTED_0 = 0, // No active halt request debug event
    eHALTED_1 = 1, // Halt request debug event active
  };
  
  enum class eBKPT : uint32_t {
    eBKPT_0 = 0, // No current breakpoint debug event
    eBKPT_1 = 1, // At least one current breakpoint debug event
  };
  
  enum class eDWTTRAP : uint32_t {
    eDWTTRAP_0 = 0, // No current debug events generated by the DWT
    eDWTTRAP_1 = 1, // At least one current debug event generated by the DWT
  };
  
  enum class eVCATCH : uint32_t {
    eVCATCH_0 = 0, // No Vector catch triggered
    eVCATCH_1 = 1, // Vector catch triggered
  };
  
  enum class eEXTERNAL : uint32_t {
    eEXTERNAL_0 = 0, // No EDBGRQ debug event
    eEXTERNAL_1 = 1, // EDBGRQ debug event
  };
  
  // Bit field definition.
  struct {
    eHALTED HALTED : 1;
    eBKPT BKPT : 1;
    eDWTTRAP DWTTRAP : 1;
    eVCATCH VCATCH : 1;
    eEXTERNAL EXTERNAL : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DFSR &Instance() { return *reinterpret_cast<volatile SCB_DFSR*>(0xE000ED30); }
};

// MemManage Address Register
//
union SCB_MMFAR {
  
  // Bit field definition.
  struct {
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_MMFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_MMFAR &Instance() { return *reinterpret_cast<volatile SCB_MMFAR*>(0xE000ED34); }
};

// BusFault Address Register
//
union SCB_BFAR {
  
  // Bit field definition.
  struct {
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_BFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_BFAR &Instance() { return *reinterpret_cast<volatile SCB_BFAR*>(0xE000ED38); }
};

// Auxiliary Fault Status Register
//
union SCB_AFSR {
  
  // Bit field definition.
  struct {
    uint32_t AUXFAULT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_AFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_AFSR &Instance() { return *reinterpret_cast<volatile SCB_AFSR*>(0xE000ED3C); }
};

// Coprocessor Access Control Register
//
union SCB_CPACR {
  
  enum class eCP10 : uint32_t {
    eCP10_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault
    eCP10_1 = 1, // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP10_3 = 3, // Full access.
  };
  
  enum class eCP11 : uint32_t {
    eCP11_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault
    eCP11_1 = 1, // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP11_3 = 3, // Full access.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    eCP10 CP10 : 2;
    eCP11 CP11 : 2;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CPACR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CPACR &Instance() { return *reinterpret_cast<volatile SCB_CPACR*>(0xE000ED88); }
};

// Floating-point Context Control Register
//
union SCB_FPCCR {
  
  enum class eLSPACT : uint32_t {
    eLSPACT_0 = 0, // Lazy state preservation is not active.
    eLSPACT_1 = 1, // Lazy state preservation is active. floating-point stack frame has been allocated but saving state to it has been deferred.
  };
  
  enum class eUSER : uint32_t {
    eUSER_0 = 0, // Privilege level was not user when the floating-point stack frame was allocated.
    eUSER_1 = 1, // Privilege level was user when the floating-point stack frame was allocated.
  };
  
  enum class eTHREAD : uint32_t {
    eTHREAD_0 = 0, // Mode was not Thread Mode when the floating-point stack frame was allocated.
    eTHREAD_1 = 1, // Mode was Thread Mode when the floating-point stack frame was allocated.
  };
  
  enum class eHFRDY : uint32_t {
    eHFRDY_0 = 0, // Priority did not permit setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY_1 = 1, // Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
  };
  
  enum class eMMRDY : uint32_t {
    eMMRDY_0 = 0, // MemManage is disabled or priority did not permit setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY_1 = 1, // MemManage is enabled and priority permitted setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
  };
  
  enum class eBFRDY : uint32_t {
    eBFRDY_0 = 0, // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY_1 = 1, // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
  };
  
  enum class eMONRDY : uint32_t {
    eMONRDY_0 = 0, // DebugMonitor is disabled or priority did not permit setting MON_PEND when the floating-point stack frame was allocated.
    eMONRDY_1 = 1, // DebugMonitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated.
  };
  
  enum class eLSPEN : uint32_t {
    eLSPEN_0 = 0, // Disable automatic lazy state preservation for floating-point context.
    eLSPEN_1 = 1, // Enable automatic lazy state preservation for floating-point context.
  };
  
  enum class eASPEN : uint32_t {
    eASPEN_0 = 0, // Disable CONTROL2 setting on execution of a floating-point instruction.
    eASPEN_1 = 1, // Enable CONTROL2 setting on execution of a floating-point instruction.
  };
  
  // Bit field definition.
  struct {
    eLSPACT LSPACT : 1;
    eUSER USER : 1;
    uint32_t _reserved_0 : 1;
    eTHREAD THREAD : 1;
    eHFRDY HFRDY : 1;
    eMMRDY MMRDY : 1;
    eBFRDY BFRDY : 1;
    uint32_t _reserved_1 : 1;
    eMONRDY MONRDY : 1;
    uint32_t _reserved_2 : 21;
    eLSPEN LSPEN : 1;
    eASPEN ASPEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_FPCCR() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile SCB_FPCCR &Instance() { return *reinterpret_cast<volatile SCB_FPCCR*>(0xE000EF34); }
};

// Floating-point Context Address Register
//
union SCB_FPCAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    uint32_t ADDRESS : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_FPCAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_FPCAR &Instance() { return *reinterpret_cast<volatile SCB_FPCAR*>(0xE000EF38); }
};

// Floating-point Default Status Control Register
//
union SCB_FPDSCR {
  
  enum class eRMode : uint32_t {
    eRMode_0 = 0, // Round to Nearest (RN) mode
    eRMode_1 = 1, // Round towards Plus Infinity (RP) mode.
    eRMode_2 = 2, // Round towards Minus Infinity (RM) mode.
    eRMode_3 = 3, // Round towards Zero (RZ) mode.
  };
  
  enum class eFZ : uint32_t {
    eFZ_0 = 0, // Flush-to-zero mode disabled. Behavior of the floating-point system is fully compliant with the IEEE 754 standard.
    eFZ_1 = 1, // Flush-to-zero mode enabled.
  };
  
  enum class eDN : uint32_t {
    eDN_0 = 0, // NaN operands propagate through to the output of a floating-point operation.
    eDN_1 = 1, // Any operation involving one or more NaNs returns the Default NaN.
  };
  
  enum class eAHP : uint32_t {
    eAHP_0 = 0, // IEEE half-precision format selected.
    eAHP_1 = 1, // Alternative half-precision format selected.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 22;
    eRMode RMode : 2;
    eFZ FZ : 1;
    eDN DN : 1;
    eAHP AHP : 1;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_FPDSCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_FPDSCR &Instance() { return *reinterpret_cast<volatile SCB_FPDSCR*>(0xE000EF3C); }
};


} // namespace nCM4_SystemControl