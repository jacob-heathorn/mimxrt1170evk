#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSystemControl {


// Auxiliary Control Register,
//
union SCB_ACTLR {
  
  enum class eDISFOLD : uint32_t {
    eDISFOLD_0 = 0, // Normal operation.
  };
  
  enum class eFPEXCODIS : uint32_t {
    eFPEXCODIS_0 = 0, // Normal operation.
    eFPEXCODIS_1 = 1, // FPU exception outputs are disabled.
  };
  
  enum class eDISRAMODE : uint32_t {
    eDISRAMODE_0 = 0, // Normal operation.
    eDISRAMODE_1 = 1, // Dynamic disabled.
  };
  
  enum class eDISITMATBFLUSH : uint32_t {
    eDISITMATBFLUSH_1 = 1, // ITM and DWT ATB flush disabled, this bit is always 1.
  };
  
  enum class eDISBTACREAD : uint32_t {
    eDISBTACREAD_0 = 0, // Normal operation.
    eDISBTACREAD_1 = 1, // BTAC is not used and only static branch prediction can occur.
  };
  
  enum class eDISBTACALLOC : uint32_t {
    eDISBTACALLOC_0 = 0, // Normal operation.
    eDISBTACALLOC_1 = 1, // No new entries are allocated in Branch Target Address Cache (BTAC), but existing entries can be updated.
  };
  
  enum class eDISCRITAXIRUR : uint32_t {
    eDISCRITAXIRUR_0 = 0, // Normal operation.
    eDISCRITAXIRUR_1 = 1, // An AXI read to Strongly-Ordered or Device memory, or an LDREX to Shareable memory, is not put on AXI if there are any outstanding reads on AXI. Transactions on AXI cannot be interrupted. This bit might reduce the time that these transactions are in progress and might improve worst case interrupt latency. Performance is decreased when this bit is set.
  };
  
  enum class eDISDI : uint32_t {
    eDISDI_0 = 0, // Normal operation.
    eDISDI_1 = 1, // Nothing can be dual-issued when this instruction type is in channel 0.
  };
  
  enum class eDISISSCH1 : uint32_t {
    eDISISSCH1_0 = 0, // Normal operation.
    eDISISSCH1_1 = 1, // Nothing can be dual-issued when this instruction type is in channel 1.
  };
  
  enum class eDISDYNADD : uint32_t {
    eDISDYNADD_0 = 0, // Normal operation. Some ADD and SUB instrctions are resolved in EX1.
    eDISDYNADD_1 = 1, // All ADD and SUB instructions are resolved in EX2.
  };
  
  enum class eDISCRITAXIRUW : uint32_t {
    eDISCRITAXIRUW_0 = 0, // Normal operation. This is backwards compatible with r0.
    eDISCRITAXIRUW_1 = 1, // AXI reads to DEV/SO memory. Exclusive reads to Shareable memory are not initiated on the AXIM AR channel until all outstanding stores on AXI are complete.
  };
  
  enum class eDISFPUISSOPT : uint32_t {
    eDISFPUISSOPT_0 = 0, // Normal operation.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    eDISFOLD DISFOLD : 1;
    uint32_t _reserved_1 : 7;
    eFPEXCODIS FPEXCODIS : 1;
    eDISRAMODE DISRAMODE : 1;
    eDISITMATBFLUSH DISITMATBFLUSH : 1;
    eDISBTACREAD DISBTACREAD : 1;
    eDISBTACALLOC DISBTACALLOC : 1;
    eDISCRITAXIRUR DISCRITAXIRUR : 1;
    eDISDI DISDI : 5;
    eDISISSCH1 DISISSCH1 : 5;
    eDISDYNADD DISDYNADD : 1;
    eDISCRITAXIRUW DISCRITAXIRUW : 1;
    eDISFPUISSOPT DISFPUISSOPT : 1;
    uint32_t _reserved_2 : 3;
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
    uint32_t ARCHITECTURE : 4;
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
  
  enum class eISRPENDING : uint32_t {
    eISRPENDING_0 = 0, // No external interrupt pending.
    eISRPENDING_1 = 1, // External interrupt pending.
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
    uint32_t VECTPENDING : 9;
    uint32_t _reserved_1 : 1;
    eISRPENDING ISRPENDING : 1;
    uint32_t _reserved_2 : 2;
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
  
  enum class eVECTRESET : uint32_t {
    eVECTRESET_0 = 0, // No change
    eVECTRESET_1 = 1, // Causes a local system reset
  };
  
  enum class eVECTCLRACTIVE : uint32_t {
    eVECTCLRACTIVE_0 = 0, // No change
    eVECTCLRACTIVE_1 = 1, // Clears all active state information for fixed and configurable exceptions
  };
  
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
    eVECTRESET VECTRESET : 1;
    eVECTCLRACTIVE VECTCLRACTIVE : 1;
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
  
  enum class eDC : uint32_t {
    eDC_0 = 0, // L1 data cache disabled
    eDC_1 = 1, // L1 data cache enabled
  };
  
  enum class eIC : uint32_t {
    eIC_0 = 0, // L1 instruction cache disabled
    eIC_1 = 1, // L1 instruction cache enabled
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
    uint32_t _reserved_2 : 6;
    eDC DC : 1;
    eIC IC : 1;
    uint32_t BP : 1;
    uint32_t _reserved_3 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CCR() = delete;
  inline void Reset() volatile { this->value = 0x00040000; }
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

// Configurable Fault Status Register
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
  
  enum class eDEBUGEVT : uint32_t {
    eDEBUGEVT_0 = 0, // No Debug event has occurred.
    eDEBUGEVT_1 = 1, // Debug event has occurred. The Debug Fault Status Register has been updated.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eVECTTBL VECTTBL : 1;
    uint32_t _reserved_1 : 28;
    eFORCED FORCED : 1;
    eDEBUGEVT DEBUGEVT : 1;
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
    eEXTERNAL_0 = 0, // No external debug request debug event
    eEXTERNAL_1 = 1, // External debug request debug event
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

// MemManage Fault Address Register
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

// Processor Feature Register 0
//
union SCB_ID_PFR0 {
  
  enum class eSTATE0 : uint32_t {
    eSTATE0_0 = 0, // ARMv7-M unused
    eSTATE0_1 = 1, // ARMv7-M unused
    eSTATE0_2 = 2, // ARMv7-M unused
    eSTATE0_3 = 3, // Support for Thumb encoding including Thumb-2 technology, with all basic 16-bit and 32-bit instructions.
  };
  
  enum class eSTATE1 : uint32_t {
    eSTATE1_0 = 0, // The processor does not support the ARM instruction set.
    eSTATE1_1 = 1, // ARMv7-M unused
  };
  
  // Bit field definition.
  struct {
    eSTATE0 STATE0 : 4;
    eSTATE1 STATE1 : 4;
    uint32_t STATE2 : 4;
    uint32_t STATE3 : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_PFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_PFR0 &Instance() { return *reinterpret_cast<volatile SCB_ID_PFR0*>(0xE000ED40); }
};

// Processor Feature Register 1
//
union SCB_ID_PFR1 {
  
  enum class ePROGMODEL : uint32_t {
    ePROGMODEL_0 = 0, // ARMv7-M unused
    ePROGMODEL_2 = 2, // Two-stack programmers' model supported
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    ePROGMODEL PROGMODEL : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_PFR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_PFR1 &Instance() { return *reinterpret_cast<volatile SCB_ID_PFR1*>(0xE000ED44); }
};

// Debug Feature Register
//
union SCB_ID_DFR0 {
  
  enum class eDEBUGMODEL : uint32_t {
    eDEBUGMODEL_0 = 0, // Not supported
    eDEBUGMODEL_1 = 1, // Support for M profile Debug architecture, with memory-mapped access.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    eDEBUGMODEL DEBUGMODEL : 4;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_DFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_DFR0 &Instance() { return *reinterpret_cast<volatile SCB_ID_DFR0*>(0xE000ED48); }
};

// Auxiliary Feature Register
//
union SCB_ID_AFR0 {
  
  // Bit field definition.
  struct {
    uint32_t IMPLEMENTATION_DEFINED0 : 4;
    uint32_t IMPLEMENTATION_DEFINED1 : 4;
    uint32_t IMPLEMENTATION_DEFINED2 : 4;
    uint32_t IMPLEMENTATION_DEFINED3 : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_AFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_AFR0 &Instance() { return *reinterpret_cast<volatile SCB_ID_AFR0*>(0xE000ED4C); }
};

// Memory Model Feature Register 0
//
union SCB_ID_MMFR0 {
  
  enum class ePMSASUPPORT : uint32_t {
    ePMSASUPPORT_0 = 0, // Not supported
    ePMSASUPPORT_1 = 1, // ARMv7-M unused
    ePMSASUPPORT_2 = 2, // ARMv7-M unused
    ePMSASUPPORT_3 = 3, // PMSAv7, providing support for a base region and subregions.
  };
  
  enum class eOUTERMOST_SHAREABILITY : uint32_t {
    eOUTERMOST_SHAREABILITY_0 = 0, // Implemented as Non-cacheable
    eOUTERMOST_SHAREABILITY_1 = 1, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_2 = 2, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_3 = 3, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_4 = 4, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_5 = 5, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_6 = 6, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_7 = 7, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_8 = 8, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_9 = 9, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_10 = 10, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_11 = 11, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_12 = 12, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_13 = 13, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_14 = 14, // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_15 = 15, // Shareability ignored.
  };
  
  enum class eSHAREABILITY_LEVELS : uint32_t {
    eSHAREABILITY_LEVELS_0 = 0, // One level of shareability implemented
    eSHAREABILITY_LEVELS_1 = 1, // ARMv7-M unused
  };
  
  enum class eTCM_SUPPORT : uint32_t {
    eTCM_SUPPORT_0 = 0, // No tightly coupled memories implemented.
    eTCM_SUPPORT_1 = 1, // Tightly coupled memories implemented with IMPLEMENTATION DEFINED control.
    eTCM_SUPPORT_2 = 2, // ARMv7-M unused
  };
  
  enum class eAUXILIARY_REGISTERS : uint32_t {
    eAUXILIARY_REGISTERS_0 = 0, // Not supported
    eAUXILIARY_REGISTERS_1 = 1, // Support for Auxiliary Control Register only.
    eAUXILIARY_REGISTERS_2 = 2, // ARMv7-M unused
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    ePMSASUPPORT PMSASUPPORT : 4;
    eOUTERMOST_SHAREABILITY OUTERMOST_SHAREABILITY : 4;
    eSHAREABILITY_LEVELS SHAREABILITY_LEVELS : 4;
    eTCM_SUPPORT TCM_SUPPORT : 4;
    eAUXILIARY_REGISTERS AUXILIARY_REGISTERS : 4;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_MMFR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR0 &Instance() { return *reinterpret_cast<volatile SCB_ID_MMFR0*>(0xE000ED50); }
};

// Memory Model Feature Register 1
//
union SCB_ID_MMFR1 {
  
  // Bit field definition.
  struct {
    uint32_t ID_MMFR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_MMFR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR1 &Instance() { return *reinterpret_cast<volatile SCB_ID_MMFR1*>(0xE000ED54); }
};

// Memory Model Feature Register 2
//
union SCB_ID_MMFR2 {
  
  enum class eWFI_STALL : uint32_t {
    eWFI_STALL_0 = 0, // Not supported
    eWFI_STALL_1 = 1, // Support for WFI stalling
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    eWFI_STALL WFI_STALL : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_MMFR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR2 &Instance() { return *reinterpret_cast<volatile SCB_ID_MMFR2*>(0xE000ED58); }
};

// Memory Model Feature Register 3
//
union SCB_ID_MMFR3 {
  
  // Bit field definition.
  struct {
    uint32_t ID_MMFR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_MMFR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR3 &Instance() { return *reinterpret_cast<volatile SCB_ID_MMFR3*>(0xE000ED5C); }
};

// Instruction Set Attributes Register 0
//
union SCB_ID_ISAR0 {
  
  enum class eBITCOUNT_INSTRS : uint32_t {
    eBITCOUNT_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eBITCOUNT_INSTRS_1 = 1, // Adds support for the CLZ instruction
  };
  
  enum class eBITFIELD_INSTRS : uint32_t {
    eBITFIELD_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eBITFIELD_INSTRS_1 = 1, // Adds support for the BFC, BFI, SBFX, and UBFX instructions
  };
  
  enum class eCMPBRANCH_INSTRS : uint32_t {
    eCMPBRANCH_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eCMPBRANCH_INSTRS_1 = 1, // Adds support for the CBNZ and CBZ instructions
  };
  
  enum class eCOPROC_INSTRS : uint32_t {
    eCOPROC_INSTRS_0 = 0, // None supported, except for separately attributed architectures, for example the Floating-point extension
    eCOPROC_INSTRS_1 = 1, // Adds support for generic CDP, LDC, MCR, MRC, and STC instructions
    eCOPROC_INSTRS_2 = 2, // As for 1, and adds support for generic CDP2, LDC2, MCR2, MRC2, and STC2 instructions
    eCOPROC_INSTRS_3 = 3, // As for 2, and adds support for generic MCRR and MRRC instructions
    eCOPROC_INSTRS_4 = 4, // As for 3, and adds support for generic MCRR2 and MRRC2 instructions
  };
  
  enum class eDEBUG_INSTRS : uint32_t {
    eDEBUG_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eDEBUG_INSTRS_1 = 1, // Adds support for the BKPT instruction
  };
  
  enum class eDIVIDE_INSTRS : uint32_t {
    eDIVIDE_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eDIVIDE_INSTRS_1 = 1, // Adds support for the SDIV and UDIV instructions
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eBITCOUNT_INSTRS BITCOUNT_INSTRS : 4;
    eBITFIELD_INSTRS BITFIELD_INSTRS : 4;
    eCMPBRANCH_INSTRS CMPBRANCH_INSTRS : 4;
    eCOPROC_INSTRS COPROC_INSTRS : 4;
    eDEBUG_INSTRS DEBUG_INSTRS : 4;
    eDIVIDE_INSTRS DIVIDE_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_ISAR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR0 &Instance() { return *reinterpret_cast<volatile SCB_ID_ISAR0*>(0xE000ED60); }
};

// Instruction Set Attributes Register 1
//
union SCB_ID_ISAR1 {
  
  enum class eEXTEND_INSTRS : uint32_t {
    eEXTEND_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eEXTEND_INSTRS_1 = 1, // Adds support for the SXTB, SXTH, UXTB, and UXTH instructions
    eEXTEND_INSTRS_2 = 2, // As for 1, and adds support for the SXTAB, SXTAB16, SXTAH, SXTB16, UXTAB, UXTAB16, UXTAH, and UXTB16 instructions
  };
  
  enum class eIFTHEN_INSTRS : uint32_t {
    eIFTHEN_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eIFTHEN_INSTRS_1 = 1, // Adds support for the IT instructions, and for the IT bits in the PSRs
  };
  
  enum class eIMMEDIATE_INSTRS : uint32_t {
    eIMMEDIATE_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eIMMEDIATE_INSTRS_1 = 1, // Adds support for the ADDW, MOVW, MOVT, and SUBW instructions
  };
  
  enum class eINTERWORK_INSTRS : uint32_t {
    eINTERWORK_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eINTERWORK_INSTRS_1 = 1, // Adds support for the BX instruction, and the T bit in the PSR
    eINTERWORK_INSTRS_2 = 2, // As for 1, and adds support for the BLX instruction, and PC loads have BX-like behavior
    eINTERWORK_INSTRS_3 = 3, // ARMv7-M unused
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    eEXTEND_INSTRS EXTEND_INSTRS : 4;
    eIFTHEN_INSTRS IFTHEN_INSTRS : 4;
    eIMMEDIATE_INSTRS IMMEDIATE_INSTRS : 4;
    eINTERWORK_INSTRS INTERWORK_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_ISAR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR1 &Instance() { return *reinterpret_cast<volatile SCB_ID_ISAR1*>(0xE000ED64); }
};

// Instruction Set Attributes Register 2
//
union SCB_ID_ISAR2 {
  
  enum class eLOADSTORE_INSTRS : uint32_t {
    eLOADSTORE_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eLOADSTORE_INSTRS_1 = 1, // Adds support for the LDRD and STRD instructions
  };
  
  enum class eMEMHINT_INSTRS : uint32_t {
    eMEMHINT_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eMEMHINT_INSTRS_1 = 1, // Adds support for the PLD instruction, ARMv7-M unused.
    eMEMHINT_INSTRS_2 = 2, // As for 1, ARMv7-M unused.
    eMEMHINT_INSTRS_3 = 3, // As for 1 or 2, and adds support for the PLI instruction.
  };
  
  enum class eMULTIACCESSINT_INSTRS : uint32_t {
    eMULTIACCESSINT_INSTRS_0 = 0, // None supported. This means the LDM and STM instructions are not interruptible. ARMv7-M unused.
    eMULTIACCESSINT_INSTRS_1 = 1, // LDM and STM instructions are restartable.
    eMULTIACCESSINT_INSTRS_2 = 2, // LDM and STM instructions are continuable.
  };
  
  enum class eMULT_INSTRS : uint32_t {
    eMULT_INSTRS_0 = 0, // None supported. This means only MUL is supported. ARMv7-M unused.
    eMULT_INSTRS_1 = 1, // Adds support for the MLA instruction, ARMv7-M unused.
    eMULT_INSTRS_2 = 2, // As for 1, and adds support for the MLS instruction.
  };
  
  enum class eMULTS_INSTRS : uint32_t {
    eMULTS_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eMULTS_INSTRS_1 = 1, // Adds support for the SMULL and SMLAL instructions
    eMULTS_INSTRS_2 = 2, // As for 1, and adds support for the SMLABB, SMLABT, SMLALBB, SMLALBT, SMLALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB, SMULTT, SMULWB, and SMULWT instructions.
    eMULTS_INSTRS_3 = 3, // As for 2, and adds support for the SMLAD, SMLADX, SMLALD, SMLALDX, SMLSD, SMLSDX, SMLSLD, SMLSLDX, SMMLA, SMMLAR, SMMLS, SMMLSR, SMMUL, SMMULR, SMUAD, SMUADX, SMUSD, and SMUSDX instructions.
  };
  
  enum class eMULTU_INSTRS : uint32_t {
    eMULTU_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eMULTU_INSTRS_1 = 1, // Adds support for the UMULL and UMLAL instructions.
    eMULTU_INSTRS_2 = 2, // As for 1, and adds support for the UMAAL instruction.
  };
  
  enum class eREVERSAL_INSTRS : uint32_t {
    eREVERSAL_INSTRS_0 = 0, // None supported, ARMv7-M unused
    eREVERSAL_INSTRS_1 = 1, // Adds support for the REV, REV16, and REVSH instructions, ARMv7-M unused.
    eREVERSAL_INSTRS_2 = 2, // As for 1, and adds support for the RBIT instruction.
  };
  
  // Bit field definition.
  struct {
    eLOADSTORE_INSTRS LOADSTORE_INSTRS : 4;
    eMEMHINT_INSTRS MEMHINT_INSTRS : 4;
    eMULTIACCESSINT_INSTRS MULTIACCESSINT_INSTRS : 4;
    eMULT_INSTRS MULT_INSTRS : 4;
    eMULTS_INSTRS MULTS_INSTRS : 4;
    eMULTU_INSTRS MULTU_INSTRS : 4;
    uint32_t _reserved_0 : 4;
    eREVERSAL_INSTRS REVERSAL_INSTRS : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_ISAR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR2 &Instance() { return *reinterpret_cast<volatile SCB_ID_ISAR2*>(0xE000ED68); }
};

// Instruction Set Attributes Register 3
//
union SCB_ID_ISAR3 {
  
  enum class eSATURATE_INSTRS : uint32_t {
    eSATURATE_INSTRS_0 = 0, // None supported
    eSATURATE_INSTRS_1 = 1, // Adds support for the QADD, QDADD, QDSUB, and QSUB instructions, and for the Q bit in the PSRs.
  };
  
  enum class eSIMD_INSTRS : uint32_t {
    eSIMD_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eSIMD_INSTRS_1 = 1, // Adds support for the SSAT and USAT instructions, and for the Q bit in the PSRs.
    eSIMD_INSTRS_3 = 3, // As for 1, and adds support for the PKHBT, PKHTB, QADD16, QADD8, QASX, QSUB16, QSUB8, QSAX, SADD16, SADD8, SASX, SEL, SHADD16, SHADD8, SHASX, SHSUB16, SHSUB8, SHSAX, SSAT16, SSUB16, SSUB8, SSAX, SXTAB16, SXTB16, UADD16, UADD8, UASX, UHADD16, UHADD8, UHASX, UHSUB16, UHSUB8, UHSAX, UQADD16, UQADD8, UQASX, UQSUB16, UQSUB8, UQSAX, USAD8, USADA8, USAT16, USUB16, USUB8, USAX, UXTAB16, and UXTB16 instructions. Also adds support for the GE[3:0] bits in the PSRs.
  };
  
  enum class eSVC_INSTRS : uint32_t {
    eSVC_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eSVC_INSTRS_1 = 1, // Adds support for the SVC instruction.
  };
  
  enum class eTABBRANCH_INSTRS : uint32_t {
    eTABBRANCH_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eTABBRANCH_INSTRS_1 = 1, // Adds support for the TBB and TBH instructions.
  };
  
  enum class eTHUMBCOPY_INSTRS : uint32_t {
    eTHUMBCOPY_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eTHUMBCOPY_INSTRS_1 = 1, // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
  };
  
  enum class eTRUENOP_INSTRS : uint32_t {
    eTRUENOP_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eTRUENOP_INSTRS_1 = 1, // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
  };
  
  // Bit field definition.
  struct {
    eSATURATE_INSTRS SATURATE_INSTRS : 4;
    eSIMD_INSTRS SIMD_INSTRS : 4;
    eSVC_INSTRS SVC_INSTRS : 4;
    uint32_t SYNCHPRIM_INSTRS : 4;
    eTABBRANCH_INSTRS TABBRANCH_INSTRS : 4;
    eTHUMBCOPY_INSTRS THUMBCOPY_INSTRS : 4;
    eTRUENOP_INSTRS TRUENOP_INSTRS : 4;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_ISAR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR3 &Instance() { return *reinterpret_cast<volatile SCB_ID_ISAR3*>(0xE000ED6C); }
};

// Instruction Set Attributes Register 4
//
union SCB_ID_ISAR4 {
  
  enum class eUNPRIV_INSTRS : uint32_t {
    eUNPRIV_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eUNPRIV_INSTRS_1 = 1, // Adds support for the LDRBT, LDRT, STRBT, and STRT instructions.
    eUNPRIV_INSTRS_2 = 2, // As for 1, and adds support for the LDRHT, LDRSBT, LDRSHT, and STRHT instructions.
  };
  
  enum class eWITHSHIFTS_INSTRS : uint32_t {
    eWITHSHIFTS_INSTRS_0 = 0, // Nonzero shifts supported only in MOV and shift instructions.
    eWITHSHIFTS_INSTRS_1 = 1, // Adds support for shifts of loads and stores over the range LSL 0-3.
    eWITHSHIFTS_INSTRS_3 = 3, // As for 1, and adds support for other constant shift options, on loads, stores, and other instructions.
    eWITHSHIFTS_INSTRS_4 = 4, // ARMv7-M unused.
  };
  
  enum class eWRITEBACK_INSTRS : uint32_t {
    eWRITEBACK_INSTRS_0 = 0, // Basic support. Only the LDM, STM, PUSH, and POP instructions support writeback addressing modes. ARMv7-M unused.
    eWRITEBACK_INSTRS_1 = 1, // Adds support for all of the writeback addressing modes defined in the ARMv7-M architecture.
  };
  
  enum class eBARRIER_INSTRS : uint32_t {
    eBARRIER_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    eBARRIER_INSTRS_1 = 1, // Adds support for the DMB, DSB, and ISB barrier instructions.
  };
  
  enum class ePSR_M_INSTRS : uint32_t {
    ePSR_M_INSTRS_0 = 0, // None supported, ARMv7-M unused.
    ePSR_M_INSTRS_1 = 1, // Adds support for the M-profile forms of the CPS, MRS, and MSR instructions, to access the PSRs.
  };
  
  // Bit field definition.
  struct {
    eUNPRIV_INSTRS UNPRIV_INSTRS : 4;
    eWITHSHIFTS_INSTRS WITHSHIFTS_INSTRS : 4;
    eWRITEBACK_INSTRS WRITEBACK_INSTRS : 4;
    uint32_t _reserved_0 : 4;
    eBARRIER_INSTRS BARRIER_INSTRS : 4;
    uint32_t SYNCHPRIM_INSTRS_FRAC : 4;
    ePSR_M_INSTRS PSR_M_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ID_ISAR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR4 &Instance() { return *reinterpret_cast<volatile SCB_ID_ISAR4*>(0xE000ED70); }
};

// Cache Level ID register
//
union SCB_CLIDR {
  
  enum class eCL1 : uint32_t {
    eCL1_0 = 0, // No cache
    eCL1_1 = 1, // Instruction cache only
    eCL1_2 = 2, // Data cache only
    eCL1_3 = 3, // Separate instruction and data caches
    eCL1_4 = 4, // Unified cache
  };
  
  enum class eCL2 : uint32_t {
    eCL2_0 = 0, // No cache
    eCL2_1 = 1, // Instruction cache only
    eCL2_2 = 2, // Data cache only
    eCL2_3 = 3, // Separate instruction and data caches
    eCL2_4 = 4, // Unified cache
  };
  
  enum class eCL3 : uint32_t {
    eCL3_0 = 0, // No cache
    eCL3_1 = 1, // Instruction cache only
    eCL3_2 = 2, // Data cache only
    eCL3_3 = 3, // Separate instruction and data caches
    eCL3_4 = 4, // Unified cache
  };
  
  enum class eCL4 : uint32_t {
    eCL4_0 = 0, // No cache
    eCL4_1 = 1, // Instruction cache only
    eCL4_2 = 2, // Data cache only
    eCL4_3 = 3, // Separate instruction and data caches
    eCL4_4 = 4, // Unified cache
  };
  
  enum class eCL5 : uint32_t {
    eCL5_0 = 0, // No cache
    eCL5_1 = 1, // Instruction cache only
    eCL5_2 = 2, // Data cache only
    eCL5_3 = 3, // Separate instruction and data caches
    eCL5_4 = 4, // Unified cache
  };
  
  enum class eCL6 : uint32_t {
    eCL6_0 = 0, // No cache
    eCL6_1 = 1, // Instruction cache only
    eCL6_2 = 2, // Data cache only
    eCL6_3 = 3, // Separate instruction and data caches
    eCL6_4 = 4, // Unified cache
  };
  
  enum class eCL7 : uint32_t {
    eCL7_0 = 0, // No cache
    eCL7_1 = 1, // Instruction cache only
    eCL7_2 = 2, // Data cache only
    eCL7_3 = 3, // Separate instruction and data caches
    eCL7_4 = 4, // Unified cache
  };
  
  enum class eLOUIS : uint32_t {
    eLOUIS_0 = 0, // 0
    eLOUIS_1 = 1, // 1
    eLOUIS_2 = 2, // 2
    eLOUIS_3 = 3, // 3
    eLOUIS_4 = 4, // 4
    eLOUIS_5 = 5, // 5
    eLOUIS_6 = 6, // 6
    eLOUIS_7 = 7, // 7
  };
  
  enum class eLOC : uint32_t {
    eLOC_0 = 0, // 0
    eLOC_1 = 1, // 1
    eLOC_2 = 2, // 2
    eLOC_3 = 3, // 3
    eLOC_4 = 4, // 4
    eLOC_5 = 5, // 5
    eLOC_6 = 6, // 6
    eLOC_7 = 7, // 7
  };
  
  enum class eLOU : uint32_t {
    eLOU_0 = 0, // 0
    eLOU_1 = 1, // 1
    eLOU_2 = 2, // 2
    eLOU_3 = 3, // 3
    eLOU_4 = 4, // 4
    eLOU_5 = 5, // 5
    eLOU_6 = 6, // 6
    eLOU_7 = 7, // 7
  };
  
  // Bit field definition.
  struct {
    eCL1 CL1 : 3;
    eCL2 CL2 : 3;
    eCL3 CL3 : 3;
    eCL4 CL4 : 3;
    eCL5 CL5 : 3;
    eCL6 CL6 : 3;
    eCL7 CL7 : 3;
    eLOUIS LOUIS : 3;
    eLOC LOC : 3;
    eLOU LOU : 3;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CLIDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CLIDR &Instance() { return *reinterpret_cast<volatile SCB_CLIDR*>(0xE000ED78); }
};

// Cache Type register
//
union SCB_CTR {
  
  enum class eFORMAT : uint32_t {
    eFORMAT_4 = 4, // ARMv7 format.
  };
  
  // Bit field definition.
  struct {
    uint32_t IMINLINE : 4;
    uint32_t _reserved_0 : 12;
    uint32_t DMINLINE : 4;
    uint32_t ERG : 4;
    uint32_t CWG : 4;
    uint32_t _reserved_1 : 1;
    eFORMAT FORMAT : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CTR() = delete;
  inline void Reset() volatile { this->value = 0x8000C000; }
  static inline volatile SCB_CTR &Instance() { return *reinterpret_cast<volatile SCB_CTR*>(0xE000ED7C); }
};

// Cache Size ID Register
//
union SCB_CCSIDR {
  
  enum class eLINESIZE : uint32_t {
    eLINESIZE_0 = 0, // The line length of 4 words.
    eLINESIZE_1 = 1, // The line length of 8 words.
    eLINESIZE_2 = 2, // The line length of 16 words.
    eLINESIZE_3 = 3, // The line length of 32 words.
    eLINESIZE_4 = 4, // The line length of 64 words.
    eLINESIZE_5 = 5, // The line length of 128 words.
    eLINESIZE_6 = 6, // The line length of 256 words.
    eLINESIZE_7 = 7, // The line length of 512 words.
  };
  
  enum class eWA : uint32_t {
    eWA_0 = 0, // Feature not supported
    eWA_1 = 1, // Feature supported
  };
  
  enum class eRA : uint32_t {
    eRA_0 = 0, // Feature not supported
    eRA_1 = 1, // Feature supported
  };
  
  enum class eWB : uint32_t {
    eWB_0 = 0, // Feature not supported
    eWB_1 = 1, // Feature supported
  };
  
  enum class eWT : uint32_t {
    eWT_0 = 0, // Feature not supported
    eWT_1 = 1, // Feature supported
  };
  
  // Bit field definition.
  struct {
    eLINESIZE LINESIZE : 3;
    uint32_t ASSOCIATIVITY : 10;
    uint32_t NUMSETS : 15;
    eWA WA : 1;
    eRA RA : 1;
    eWB WB : 1;
    eWT WT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CCSIDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CCSIDR &Instance() { return *reinterpret_cast<volatile SCB_CCSIDR*>(0xE000ED80); }
};

// Cache Size Selection Register
//
union SCB_CSSELR {
  
  enum class eIND : uint32_t {
    eIND_0 = 0, // Data or unified cache.
    eIND_1 = 1, // Instruction cache.
  };
  
  enum class eLEVEL : uint32_t {
    eLEVEL_0 = 0, // Level 1 cache.
    eLEVEL_1 = 1, // Level 2 cache.
    eLEVEL_2 = 2, // Level 3 cache.
    eLEVEL_3 = 3, // Level 4 cache.
    eLEVEL_4 = 4, // Level 5 cache.
    eLEVEL_5 = 5, // Level 6 cache.
    eLEVEL_6 = 6, // Level 7 cache.
  };
  
  // Bit field definition.
  struct {
    eIND IND : 1;
    eLEVEL LEVEL : 3;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CSSELR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CSSELR &Instance() { return *reinterpret_cast<volatile SCB_CSSELR*>(0xE000ED84); }
};

// Coprocessor Access Control Register
//
union SCB_CPACR {
  
  enum class eCP0 : uint32_t {
    eCP0_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP0_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP0_3 = 3, // Full access.
  };
  
  enum class eCP1 : uint32_t {
    eCP1_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP1_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP1_3 = 3, // Full access.
  };
  
  enum class eCP2 : uint32_t {
    eCP2_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP2_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP2_3 = 3, // Full access.
  };
  
  enum class eCP3 : uint32_t {
    eCP3_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP3_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP3_3 = 3, // Full access.
  };
  
  enum class eCP4 : uint32_t {
    eCP4_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP4_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP4_3 = 3, // Full access.
  };
  
  enum class eCP5 : uint32_t {
    eCP5_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP5_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP5_3 = 3, // Full access.
  };
  
  enum class eCP6 : uint32_t {
    eCP6_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP6_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP6_3 = 3, // Full access.
  };
  
  enum class eCP7 : uint32_t {
    eCP7_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP7_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP7_3 = 3, // Full access.
  };
  
  enum class eCP10 : uint32_t {
    eCP10_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP10_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP10_3 = 3, // Full access.
  };
  
  enum class eCP11 : uint32_t {
    eCP11_0 = 0, // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP11_1 = 1, // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP11_3 = 3, // Full access.
  };
  
  // Bit field definition.
  struct {
    eCP0 CP0 : 2;
    eCP1 CP1 : 2;
    eCP2 CP2 : 2;
    eCP3 CP3 : 2;
    eCP4 CP4 : 2;
    eCP5 CP5 : 2;
    eCP6 CP6 : 2;
    eCP7 CP7 : 2;
    uint32_t _reserved_0 : 4;
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

// Instruction cache invalidate all to Point of Unification (PoU)
//
union SCB_STIR {
  
  // Bit field definition.
  struct {
    uint32_t INTID : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_STIR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_STIR &Instance() { return *reinterpret_cast<volatile SCB_STIR*>(0xE000EF00); }
};

// Instruction cache invalidate all to Point of Unification (PoU)
//
union SCB_ICIALLU {
  
  // Bit field definition.
  struct {
    uint32_t ICIALLU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ICIALLU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICIALLU &Instance() { return *reinterpret_cast<volatile SCB_ICIALLU*>(0xE000EF50); }
};

// Instruction cache invalidate by address to PoU
//
union SCB_ICIMVAU {
  
  // Bit field definition.
  struct {
    uint32_t ICIMVAU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ICIMVAU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICIMVAU &Instance() { return *reinterpret_cast<volatile SCB_ICIMVAU*>(0xE000EF58); }
};

// Data cache invalidate by address to Point of Coherency (PoC)
//
union SCB_DCIMVAC {
  
  // Bit field definition.
  struct {
    uint32_t DCIMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCIMVAC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCIMVAC &Instance() { return *reinterpret_cast<volatile SCB_DCIMVAC*>(0xE000EF5C); }
};

// Data cache invalidate by set/way
//
union SCB_DCISW {
  
  // Bit field definition.
  struct {
    uint32_t DCISW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCISW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCISW &Instance() { return *reinterpret_cast<volatile SCB_DCISW*>(0xE000EF60); }
};

// Data cache by address to PoU
//
union SCB_DCCMVAU {
  
  // Bit field definition.
  struct {
    uint32_t DCCMVAU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCCMVAU() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCMVAU &Instance() { return *reinterpret_cast<volatile SCB_DCCMVAU*>(0xE000EF64); }
};

// Data cache clean by address to PoC
//
union SCB_DCCMVAC {
  
  // Bit field definition.
  struct {
    uint32_t DCCMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCCMVAC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCMVAC &Instance() { return *reinterpret_cast<volatile SCB_DCCMVAC*>(0xE000EF68); }
};

// Data cache clean by set/way
//
union SCB_DCCSW {
  
  // Bit field definition.
  struct {
    uint32_t DCCSW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCCSW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCSW &Instance() { return *reinterpret_cast<volatile SCB_DCCSW*>(0xE000EF6C); }
};

// Data cache clean and invalidate by address to PoC
//
union SCB_DCCIMVAC {
  
  // Bit field definition.
  struct {
    uint32_t DCCIMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCCIMVAC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCIMVAC &Instance() { return *reinterpret_cast<volatile SCB_DCCIMVAC*>(0xE000EF70); }
};

// Data cache clean and invalidate by set/way
//
union SCB_DCCISW {
  
  // Bit field definition.
  struct {
    uint32_t DCCISW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_DCCISW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCISW &Instance() { return *reinterpret_cast<volatile SCB_DCCISW*>(0xE000EF74); }
};

// Instruction Tightly-Coupled Memory Control Register
//
union SCB_CM7_ITCMCR {
  
  enum class eEN : uint32_t {
    eEN_0 = 0, // TCM disabled.
    eEN_1 = 1, // TCM enabled.
  };
  
  enum class eRMW : uint32_t {
    eRMW_0 = 0, // RMW disabled.
    eRMW_1 = 1, // RMW enabled.
  };
  
  enum class eRETEN : uint32_t {
    eRETEN_0 = 0, // Retry phase disabled.
    eRETEN_1 = 1, // Retry phase enabled.
  };
  
  enum class eSZ : uint32_t {
    eSZ_0 = 0, // No TCM implemented.
    eSZ_3 = 3, // 4KB.
    eSZ_4 = 4, // 8KB.
    eSZ_5 = 5, // 16KB.
    eSZ_6 = 6, // 32KB.
    eSZ_7 = 7, // 64KB.
    eSZ_8 = 8, // 128KB.
    eSZ_9 = 9, // 256KB.
    eSZ_10 = 10, // 512KB.
    eSZ_11 = 11, // 1MB.
    eSZ_12 = 12, // 2MB.
    eSZ_13 = 13, // 4MB.
    eSZ_14 = 14, // 8MB.
    eSZ_15 = 15, // 16MB.
  };
  
  // Bit field definition.
  struct {
    eEN EN : 1;
    eRMW RMW : 1;
    eRETEN RETEN : 1;
    eSZ SZ : 4;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_ITCMCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_ITCMCR &Instance() { return *reinterpret_cast<volatile SCB_CM7_ITCMCR*>(0xE000EF90); }
};

// Data Tightly-Coupled Memory Control Register
//
union SCB_CM7_DTCMCR {
  
  enum class eEN : uint32_t {
    eEN_0 = 0, // TCM disabled.
    eEN_1 = 1, // TCM enabled.
  };
  
  enum class eRMW : uint32_t {
    eRMW_0 = 0, // RMW disabled.
    eRMW_1 = 1, // RMW enabled.
  };
  
  enum class eRETEN : uint32_t {
    eRETEN_0 = 0, // Retry phase disabled.
    eRETEN_1 = 1, // Retry phase enabled.
  };
  
  enum class eSZ : uint32_t {
    eSZ_0 = 0, // No TCM implemented.
    eSZ_3 = 3, // 4KB.
    eSZ_4 = 4, // 8KB.
    eSZ_5 = 5, // 16KB.
    eSZ_6 = 6, // 32KB.
    eSZ_7 = 7, // 64KB.
    eSZ_8 = 8, // 128KB.
    eSZ_9 = 9, // 256KB.
    eSZ_10 = 10, // 512KB.
    eSZ_11 = 11, // 1MB.
    eSZ_12 = 12, // 2MB.
    eSZ_13 = 13, // 4MB.
    eSZ_14 = 14, // 8MB.
    eSZ_15 = 15, // 16MB.
  };
  
  // Bit field definition.
  struct {
    eEN EN : 1;
    eRMW RMW : 1;
    eRETEN RETEN : 1;
    eSZ SZ : 4;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_DTCMCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_DTCMCR &Instance() { return *reinterpret_cast<volatile SCB_CM7_DTCMCR*>(0xE000EF94); }
};

// AHBP Control Register
//
union SCB_CM7_AHBPCR {
  
  enum class eEN : uint32_t {
    eEN_0 = 0, // AHBP disabled. When disabled all accesses are made to the AXIM interface.
    eEN_1 = 1, // AHBP enabled.
  };
  
  enum class eSZ : uint32_t {
    eSZ_0 = 0, // 0MB. AHBP disabled.
    eSZ_1 = 1, // 64MB.
    eSZ_2 = 2, // 128MB.
    eSZ_3 = 3, // 256MB.
    eSZ_4 = 4, // 512MB.
  };
  
  // Bit field definition.
  struct {
    eEN EN : 1;
    eSZ SZ : 3;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_AHBPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_AHBPCR &Instance() { return *reinterpret_cast<volatile SCB_CM7_AHBPCR*>(0xE000EF98); }
};

// L1 Cache Control Register
//
union SCB_CM7_CACR {
  
  enum class eSIWT : uint32_t {
    eSIWT_0 = 0, // Normal Cacheable Shared locations are treated as being Non-cacheable. Default mode of operation for Shared memory.
    eSIWT_1 = 1, // Normal Cacheable shared locations are treated as Write-Through.
  };
  
  enum class eECCDIS : uint32_t {
    eECCDIS_0 = 0, // Enables ECC in the instruction and data cache.
    eECCDIS_1 = 1, // Disables ECC in the instruction and data cache.
  };
  
  enum class eFORCEWT : uint32_t {
    eFORCEWT_0 = 0, // Disables Force Write-Through.
    eFORCEWT_1 = 1, // Enables Force Write-Through. All Cacheable memory regions are treated as Write-Through.
  };
  
  // Bit field definition.
  struct {
    eSIWT SIWT : 1;
    eECCDIS ECCDIS : 1;
    eFORCEWT FORCEWT : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_CACR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_CACR &Instance() { return *reinterpret_cast<volatile SCB_CM7_CACR*>(0xE000EF9C); }
};

// AHB Slave Control Register
//
union SCB_CM7_AHBSCR {
  
  enum class eCTL : uint32_t {
    eCTL_0 = 0, // AHBS access priority demoted. This is the reset value.
    eCTL_1 = 1, // Software access priority demoted.
    eCTL_2 = 2, // AHBS access priority demoted by initializing the fairness counter to the CM7_AHBSCR[INITCOUNT] value when the software execution priority is higher than or equal to the threshold level programed in CM7_AHBSCR[TPRI].
    eCTL_3 = 3, // AHBSPRI signal has control of access priority.
  };
  
  // Bit field definition.
  struct {
    eCTL CTL : 2;
    uint32_t TPRI : 9;
    uint32_t INITCOUNT : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_AHBSCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_AHBSCR &Instance() { return *reinterpret_cast<volatile SCB_CM7_AHBSCR*>(0xE000EFA0); }
};

// Auxiliary Bus Fault Status Register
//
union SCB_CM7_ABFSR {
  
  enum class eAXIMTYPE : uint32_t {
    eAXIMTYPE_0 = 0, // OKAY.
    eAXIMTYPE_1 = 1, // EXOKAY.
    eAXIMTYPE_2 = 2, // SLVERR.
    eAXIMTYPE_3 = 3, // DECERR.
  };
  
  // Bit field definition.
  struct {
    uint32_t ITCM : 1;
    uint32_t DTCM : 1;
    uint32_t AHBP : 1;
    uint32_t AXIM : 1;
    uint32_t EPPB : 1;
    uint32_t _reserved_0 : 3;
    eAXIMTYPE AXIMTYPE : 2;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CM7_ABFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_ABFSR &Instance() { return *reinterpret_cast<volatile SCB_CM7_ABFSR*>(0xE000EFA8); }
};


} // namespace nSystemControl