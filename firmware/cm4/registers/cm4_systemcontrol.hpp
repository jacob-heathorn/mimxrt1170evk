#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// System Control Block
namespace nCM4_SystemControl {


// Auxiliary Control Register,
union SCB_ACTLR {
  
  // Bit field definition.
  struct {
    // read-write - Disables interruption of multi-cycle instructions.
    uint32_t DISMCYCINT : 1;
    // read-write - Disables write buffer use during default memory map accesses.
    uint32_t DISDEFWBUF : 1;
    // read-write - Disables folding of IT instructions.
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
union SCB_CPUID {
  
  // Bit field definition.
  struct {
    // read-only - Indicates patch release: 0x0 = Patch 0
    uint32_t REVISION : 4;
    // read-only - Indicates part number
    uint32_t PARTNO : 12;
    uint32_t _reserved_0 : 4;
    // read-only - Indicates processor revision: 0x2 = Revision 2
    uint32_t VARIANT : 4;
    // read-only - Implementer code
    uint32_t IMPLEMENTER : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_CPUID() = delete;
  inline void Reset() volatile { this->value = 0x410FC240; }
  static inline volatile SCB_CPUID &Instance() { return *reinterpret_cast<volatile SCB_CPUID*>(0xE000ED00); }
};

// Interrupt Control and State Register
union SCB_ICSR {
  
  // no description available
  enum class eRETTOBASE : uint32_t {
    // there are preempted active exceptions to execute
    eRETTOBASE_0 = 0,
    // there are no active exceptions, or the currently-executing exception is the only active exception
    eRETTOBASE_1 = 1,
  };
  
  // no description available
  enum class eISRPREEMPT : uint32_t {
    // Will not service
    eISRPREEMPT_0 = 0,
    // Will service a pending exception
    eISRPREEMPT_1 = 1,
  };
  
  // no description available
  enum class ePENDSTCLR : uint32_t {
    // no effect
    ePENDSTCLR_0 = 0,
    // removes the pending state from the SysTick exception
    ePENDSTCLR_1 = 1,
  };
  
  // no description available
  enum class ePENDSTSET : uint32_t {
    // write: no effect; read: SysTick exception is not pending
    ePENDSTSET_0 = 0,
    // write: changes SysTick exception state to pending; read: SysTick exception is pending
    ePENDSTSET_1 = 1,
  };
  
  // no description available
  enum class ePENDSVCLR : uint32_t {
    // no effect
    ePENDSVCLR_0 = 0,
    // removes the pending state from the PendSV exception
    ePENDSVCLR_1 = 1,
  };
  
  // no description available
  enum class ePENDSVSET : uint32_t {
    // write: no effect; read: PendSV exception is not pending
    ePENDSVSET_0 = 0,
    // write: changes PendSV exception state to pending; read: PendSV exception is pending
    ePENDSVSET_1 = 1,
  };
  
  // no description available
  enum class eNMIPENDSET : uint32_t {
    // write: no effect; read: NMI exception is not pending
    eNMIPENDSET_0 = 0,
    // write: changes NMI exception state to pending; read: NMI exception is pending
    eNMIPENDSET_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Active exception number
    uint32_t VECTACTIVE : 9;
    uint32_t _reserved_0 : 2;
    // read-only - no description available
    eRETTOBASE RETTOBASE : 1;
    // read-only - Exception number of the highest priority pending enabled exception
    uint32_t VECTPENDING : 6;
    uint32_t _reserved_1 : 4;
    // read-only - no description available
    uint32_t ISRPENDING : 1;
    // read-only - no description available
    eISRPREEMPT ISRPREEMPT : 1;
    uint32_t _reserved_2 : 1;
    // write-only - no description available
    ePENDSTCLR PENDSTCLR : 1;
    // read-write - no description available
    ePENDSTSET PENDSTSET : 1;
    // write-only - no description available
    ePENDSVCLR PENDSVCLR : 1;
    // read-write - no description available
    ePENDSVSET PENDSVSET : 1;
    uint32_t _reserved_3 : 2;
    // read-write - no description available
    eNMIPENDSET NMIPENDSET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_ICSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICSR &Instance() { return *reinterpret_cast<volatile SCB_ICSR*>(0xE000ED04); }
};

// Vector Table Offset Register
union SCB_VTOR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - Vector table base offset
    uint32_t TBLOFF : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_VTOR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_VTOR &Instance() { return *reinterpret_cast<volatile SCB_VTOR*>(0xE000ED08); }
};

// Application Interrupt and Reset Control Register
union SCB_AIRCR {
  
  // no description available
  enum class eSYSRESETREQ : uint32_t {
    // no system reset request
    eSYSRESETREQ_0 = 0,
    // asserts a signal to the outer system that requests a reset
    eSYSRESETREQ_1 = 1,
  };
  
  // no description available
  enum class eENDIANNESS : uint32_t {
    // Little-endian
    eENDIANNESS_0 = 0,
    // Big-endian
    eENDIANNESS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // write-only - no description available
    uint32_t VECTRESET : 1;
    // write-only - no description available
    uint32_t VECTCLRACTIVE : 1;
    // write-only - no description available
    eSYSRESETREQ SYSRESETREQ : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Interrupt priority grouping field. This field determines the split of group priority from subpriority.
    uint32_t PRIGROUP : 3;
    uint32_t _reserved_1 : 4;
    // read-only - no description available
    eENDIANNESS ENDIANNESS : 1;
    // read-write - Register key
    uint32_t VECTKEY : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_AIRCR() = delete;
  inline void Reset() volatile { this->value = 0xFA050000; }
  static inline volatile SCB_AIRCR &Instance() { return *reinterpret_cast<volatile SCB_AIRCR*>(0xE000ED0C); }
};

// System Control Register
union SCB_SCR {
  
  // no description available
  enum class eSLEEPONEXIT : uint32_t {
    // o not sleep when returning to Thread mode
    eSLEEPONEXIT_0 = 0,
    // enter sleep, or deep sleep, on return from an ISR
    eSLEEPONEXIT_1 = 1,
  };
  
  // no description available
  enum class eSLEEPDEEP : uint32_t {
    // sleep
    eSLEEPDEEP_0 = 0,
    // deep sleep
    eSLEEPDEEP_1 = 1,
  };
  
  // no description available
  enum class eSEVONPEND : uint32_t {
    // only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
    eSEVONPEND_0 = 0,
    // enabled events and all interrupts, including disabled interrupts, can wakeup the processor
    eSEVONPEND_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - no description available
    eSLEEPONEXIT SLEEPONEXIT : 1;
    // read-write - no description available
    eSLEEPDEEP SLEEPDEEP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - no description available
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
union SCB_CCR {
  
  // no description available
  enum class eNONBASETHRDENA : uint32_t {
    // processor can enter Thread mode only when no exception is active
    eNONBASETHRDENA_0 = 0,
    // processor can enter Thread mode from any level under the control of an EXC_RETURN value
    eNONBASETHRDENA_1 = 1,
  };
  
  // Enables unprivileged software access to the STIR
  enum class eUSERSETMPEND : uint32_t {
    // disable
    eUSERSETMPEND_0 = 0,
    // enable
    eUSERSETMPEND_1 = 1,
  };
  
  // Enables unaligned access traps
  enum class eUNALIGN_TRP : uint32_t {
    // do not trap unaligned halfword and word accesses
    eUNALIGN_TRP_0 = 0,
    // trap unaligned halfword and word accesses
    eUNALIGN_TRP_1 = 1,
  };
  
  // Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
  enum class eDIV_0_TRP : uint32_t {
    // do not trap divide by 0
    eDIV_0_TRP_0 = 0,
    // trap divide by 0
    eDIV_0_TRP_1 = 1,
  };
  
  // Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
  enum class eBFHFNMIGN : uint32_t {
    // data bus faults caused by load and store instructions cause a lock-up
    eBFHFNMIGN_0 = 0,
    // handlers running at priority -1 and -2 ignore data bus faults caused by load and store instructions
    eBFHFNMIGN_1 = 1,
  };
  
  // Indicates stack alignment on exception entry
  enum class eSTKALIGN : uint32_t {
    // 4-byte aligned
    eSTKALIGN_0 = 0,
    // 8-byte aligned
    eSTKALIGN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - no description available
    eNONBASETHRDENA NONBASETHRDENA : 1;
    // read-write - Enables unprivileged software access to the STIR
    eUSERSETMPEND USERSETMPEND : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enables unaligned access traps
    eUNALIGN_TRP UNALIGN_TRP : 1;
    // read-write - Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
    eDIV_0_TRP DIV_0_TRP : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
    eBFHFNMIGN BFHFNMIGN : 1;
    // read-write - Indicates stack alignment on exception entry
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
union SCB_SHPR1 {
  
  // Bit field definition.
  struct {
    // read-write - Priority of system handler 4, MemManage
    uint32_t PRI_4 : 8;
    // read-write - Priority of system handler 5, BusFault
    uint32_t PRI_5 : 8;
    // read-write - Priority of system handler 6, UsageFault
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
union SCB_SHPR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-write - Priority of system handler 11, SVCall
    uint32_t PRI_11 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR2 &Instance() { return *reinterpret_cast<volatile SCB_SHPR2*>(0xE000ED1C); }
};

// System Handler Priority Register 3
union SCB_SHPR3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-write - Priority of system handler 14, PendSV
    uint32_t PRI_14 : 8;
    // read-write - Priority of system handler 15, SysTick exception
    uint32_t PRI_15 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_SHPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR3 &Instance() { return *reinterpret_cast<volatile SCB_SHPR3*>(0xE000ED20); }
};

// System Handler Control and State Register
union SCB_SHCSR {
  
  // no description available
  enum class eMEMFAULTACT : uint32_t {
    // exception is not active
    eMEMFAULTACT_0 = 0,
    // exception is active
    eMEMFAULTACT_1 = 1,
  };
  
  // no description available
  enum class eBUSFAULTACT : uint32_t {
    // exception is not active
    eBUSFAULTACT_0 = 0,
    // exception is active
    eBUSFAULTACT_1 = 1,
  };
  
  // no description available
  enum class eUSGFAULTACT : uint32_t {
    // exception is not active
    eUSGFAULTACT_0 = 0,
    // exception is active
    eUSGFAULTACT_1 = 1,
  };
  
  // no description available
  enum class eSVCALLACT : uint32_t {
    // exception is not active
    eSVCALLACT_0 = 0,
    // exception is active
    eSVCALLACT_1 = 1,
  };
  
  // no description available
  enum class eMONITORACT : uint32_t {
    // exception is not active
    eMONITORACT_0 = 0,
    // exception is active
    eMONITORACT_1 = 1,
  };
  
  // no description available
  enum class ePENDSVACT : uint32_t {
    // exception is not active
    ePENDSVACT_0 = 0,
    // exception is active
    ePENDSVACT_1 = 1,
  };
  
  // no description available
  enum class eSYSTICKACT : uint32_t {
    // exception is not active
    eSYSTICKACT_0 = 0,
    // exception is active
    eSYSTICKACT_1 = 1,
  };
  
  // no description available
  enum class eUSGFAULTPENDED : uint32_t {
    // exception is not pending
    eUSGFAULTPENDED_0 = 0,
    // exception is pending
    eUSGFAULTPENDED_1 = 1,
  };
  
  // no description available
  enum class eMEMFAULTPENDED : uint32_t {
    // exception is not pending
    eMEMFAULTPENDED_0 = 0,
    // exception is pending
    eMEMFAULTPENDED_1 = 1,
  };
  
  // no description available
  enum class eBUSFAULTPENDED : uint32_t {
    // exception is not pending
    eBUSFAULTPENDED_0 = 0,
    // exception is pending
    eBUSFAULTPENDED_1 = 1,
  };
  
  // no description available
  enum class eSVCALLPENDED : uint32_t {
    // exception is not pending
    eSVCALLPENDED_0 = 0,
    // exception is pending
    eSVCALLPENDED_1 = 1,
  };
  
  // no description available
  enum class eMEMFAULTENA : uint32_t {
    // disable the exception
    eMEMFAULTENA_0 = 0,
    // enable the exception
    eMEMFAULTENA_1 = 1,
  };
  
  // no description available
  enum class eBUSFAULTENA : uint32_t {
    // disable the exception
    eBUSFAULTENA_0 = 0,
    // enable the exception
    eBUSFAULTENA_1 = 1,
  };
  
  // no description available
  enum class eUSGFAULTENA : uint32_t {
    // disable the exception
    eUSGFAULTENA_0 = 0,
    // enable the exception
    eUSGFAULTENA_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - no description available
    eMEMFAULTACT MEMFAULTACT : 1;
    // read-write - no description available
    eBUSFAULTACT BUSFAULTACT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - no description available
    eUSGFAULTACT USGFAULTACT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - no description available
    eSVCALLACT SVCALLACT : 1;
    // read-write - no description available
    eMONITORACT MONITORACT : 1;
    uint32_t _reserved_2 : 1;
    // read-write - no description available
    ePENDSVACT PENDSVACT : 1;
    // read-write - no description available
    eSYSTICKACT SYSTICKACT : 1;
    // read-write - no description available
    eUSGFAULTPENDED USGFAULTPENDED : 1;
    // read-write - no description available
    eMEMFAULTPENDED MEMFAULTPENDED : 1;
    // read-write - no description available
    eBUSFAULTPENDED BUSFAULTPENDED : 1;
    // read-write - no description available
    eSVCALLPENDED SVCALLPENDED : 1;
    // read-write - no description available
    eMEMFAULTENA MEMFAULTENA : 1;
    // read-write - no description available
    eBUSFAULTENA BUSFAULTENA : 1;
    // read-write - no description available
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
union SCB_CFSR {
  
  // no description available
  enum class eIACCVIOL : uint32_t {
    // no instruction access violation fault
    eIACCVIOL_0 = 0,
    // the processor attempted an instruction fetch from a location that does not permit execution
    eIACCVIOL_1 = 1,
  };
  
  // no description available
  enum class eDACCVIOL : uint32_t {
    // no data access violation fault
    eDACCVIOL_0 = 0,
    // the processor attempted a load or store at a location that does not permit the operation
    eDACCVIOL_1 = 1,
  };
  
  // no description available
  enum class eMUNSTKERR : uint32_t {
    // no unstacking fault
    eMUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more access violations
    eMUNSTKERR_1 = 1,
  };
  
  // no description available
  enum class eMSTKERR : uint32_t {
    // no stacking fault
    eMSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more access violations
    eMSTKERR_1 = 1,
  };
  
  // no description available
  enum class eMLSPERR : uint32_t {
    // No MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_0 = 0,
    // A MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_1 = 1,
  };
  
  // no description available
  enum class eMMARVALID : uint32_t {
    // value in MMAR is not a valid fault address
    eMMARVALID_0 = 0,
    // MMAR holds a valid fault address
    eMMARVALID_1 = 1,
  };
  
  // no description available
  enum class eIBUSERR : uint32_t {
    // no instruction bus error
    eIBUSERR_0 = 0,
    // instruction bus error
    eIBUSERR_1 = 1,
  };
  
  // no description available
  enum class ePRECISERR : uint32_t {
    // no precise data bus error
    ePRECISERR_0 = 0,
    // a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
    ePRECISERR_1 = 1,
  };
  
  // no description available
  enum class eIMPRECISERR : uint32_t {
    // no imprecise data bus error
    eIMPRECISERR_0 = 0,
    // a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
    eIMPRECISERR_1 = 1,
  };
  
  // no description available
  enum class eUNSTKERR : uint32_t {
    // no unstacking fault
    eUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more BusFaults
    eUNSTKERR_1 = 1,
  };
  
  // no description available
  enum class eSTKERR : uint32_t {
    // no stacking fault
    eSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more BusFaults
    eSTKERR_1 = 1,
  };
  
  // no description available
  enum class eLSPERR : uint32_t {
    // No bus fault occurred during floating-point lazy state preservation
    eLSPERR_0 = 0,
    // A bus fault occurred during floating-point lazy state preservation
    eLSPERR_1 = 1,
  };
  
  // no description available
  enum class eBFARVALID : uint32_t {
    // value in BFAR is not a valid fault address
    eBFARVALID_0 = 0,
    // BFAR holds a valid fault address
    eBFARVALID_1 = 1,
  };
  
  // no description available
  enum class eUNDEFINSTR : uint32_t {
    // no undefined instruction UsageFault
    eUNDEFINSTR_0 = 0,
    // the processor has attempted to execute an undefined instruction
    eUNDEFINSTR_1 = 1,
  };
  
  // no description available
  enum class eINVSTATE : uint32_t {
    // no invalid state UsageFault
    eINVSTATE_0 = 0,
    // the processor has attempted to execute an instruction that makes illegal use of the EPSR
    eINVSTATE_1 = 1,
  };
  
  // no description available
  enum class eINVPC : uint32_t {
    // no invalid PC load UsageFault
    eINVPC_0 = 0,
    // the processor has attempted an illegal load of EXC_RETURN to the PC
    eINVPC_1 = 1,
  };
  
  // no description available
  enum class eNOCP : uint32_t {
    // no UsageFault caused by attempting to access a coprocessor
    eNOCP_0 = 0,
    // the processor has attempted to access a coprocessor
    eNOCP_1 = 1,
  };
  
  // no description available
  enum class eUNALIGNED : uint32_t {
    // no unaligned access fault, or unaligned access trapping not enabled
    eUNALIGNED_0 = 0,
    // the processor has made an unaligned memory access
    eUNALIGNED_1 = 1,
  };
  
  // no description available
  enum class eDIVBYZERO : uint32_t {
    // no divide by zero fault, or divide by zero trapping not enabled
    eDIVBYZERO_0 = 0,
    // the processor has executed an SDIV or UDIV instruction with a divisor of 0
    eDIVBYZERO_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - no description available
    eIACCVIOL IACCVIOL : 1;
    // read-write - no description available
    eDACCVIOL DACCVIOL : 1;
    uint32_t _reserved_0 : 1;
    // read-write - no description available
    eMUNSTKERR MUNSTKERR : 1;
    // read-write - no description available
    eMSTKERR MSTKERR : 1;
    // read-write - no description available
    eMLSPERR MLSPERR : 1;
    uint32_t _reserved_1 : 1;
    // read-write - no description available
    eMMARVALID MMARVALID : 1;
    // read-write - no description available
    eIBUSERR IBUSERR : 1;
    // read-write - no description available
    ePRECISERR PRECISERR : 1;
    // read-write - no description available
    eIMPRECISERR IMPRECISERR : 1;
    // read-write - no description available
    eUNSTKERR UNSTKERR : 1;
    // read-write - no description available
    eSTKERR STKERR : 1;
    // read-write - no description available
    eLSPERR LSPERR : 1;
    uint32_t _reserved_2 : 1;
    // read-write - no description available
    eBFARVALID BFARVALID : 1;
    // read-write - no description available
    eUNDEFINSTR UNDEFINSTR : 1;
    // read-write - no description available
    eINVSTATE INVSTATE : 1;
    // read-write - no description available
    eINVPC INVPC : 1;
    // read-write - no description available
    eNOCP NOCP : 1;
    uint32_t _reserved_3 : 4;
    // read-write - no description available
    eUNALIGNED UNALIGNED : 1;
    // read-write - no description available
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
union SCB_HFSR {
  
  // no description available
  enum class eVECTTBL : uint32_t {
    // no BusFault on vector table read
    eVECTTBL_0 = 0,
    // BusFault on vector table read
    eVECTTBL_1 = 1,
  };
  
  // no description available
  enum class eFORCED : uint32_t {
    // no forced HardFault
    eFORCED_0 = 0,
    // forced HardFault
    eFORCED_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - no description available
    eVECTTBL VECTTBL : 1;
    uint32_t _reserved_1 : 28;
    // read-write - no description available
    eFORCED FORCED : 1;
    // read-write - no description available
    uint32_t DEBUGEVT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_HFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_HFSR &Instance() { return *reinterpret_cast<volatile SCB_HFSR*>(0xE000ED2C); }
};

// Debug Fault Status Register
union SCB_DFSR {
  
  // no description available
  enum class eHALTED : uint32_t {
    // No active halt request debug event
    eHALTED_0 = 0,
    // Halt request debug event active
    eHALTED_1 = 1,
  };
  
  // no description available
  enum class eBKPT : uint32_t {
    // No current breakpoint debug event
    eBKPT_0 = 0,
    // At least one current breakpoint debug event
    eBKPT_1 = 1,
  };
  
  // no description available
  enum class eDWTTRAP : uint32_t {
    // No current debug events generated by the DWT
    eDWTTRAP_0 = 0,
    // At least one current debug event generated by the DWT
    eDWTTRAP_1 = 1,
  };
  
  // no description available
  enum class eVCATCH : uint32_t {
    // No Vector catch triggered
    eVCATCH_0 = 0,
    // Vector catch triggered
    eVCATCH_1 = 1,
  };
  
  // no description available
  enum class eEXTERNAL : uint32_t {
    // No EDBGRQ debug event
    eEXTERNAL_0 = 0,
    // EDBGRQ debug event
    eEXTERNAL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - no description available
    eHALTED HALTED : 1;
    // read-write - no description available
    eBKPT BKPT : 1;
    // read-write - no description available
    eDWTTRAP DWTTRAP : 1;
    // read-write - no description available
    eVCATCH VCATCH : 1;
    // read-write - no description available
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
union SCB_MMFAR {
  
  // Bit field definition.
  struct {
    // read-write - Address of MemManage fault location
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_MMFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_MMFAR &Instance() { return *reinterpret_cast<volatile SCB_MMFAR*>(0xE000ED34); }
};

// BusFault Address Register
union SCB_BFAR {
  
  // Bit field definition.
  struct {
    // read-write - Address of the BusFault location
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_BFAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_BFAR &Instance() { return *reinterpret_cast<volatile SCB_BFAR*>(0xE000ED38); }
};

// Auxiliary Fault Status Register
union SCB_AFSR {
  
  // Bit field definition.
  struct {
    // read-write - Latched version of the AUXFAULT inputs
    uint32_t AUXFAULT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_AFSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_AFSR &Instance() { return *reinterpret_cast<volatile SCB_AFSR*>(0xE000ED3C); }
};

// Coprocessor Access Control Register
union SCB_CPACR {
  
  // Access privileges for coprocessor 10.
  enum class eCP10 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault
    eCP10_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP10_1 = 1,
    // Full access.
    eCP10_3 = 3,
  };
  
  // Access privileges for coprocessor 11.
  enum class eCP11 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault
    eCP11_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP11_1 = 1,
    // Full access.
    eCP11_3 = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    // read-write - Access privileges for coprocessor 10.
    eCP10 CP10 : 2;
    // read-write - Access privileges for coprocessor 11.
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
union SCB_FPCCR {
  
  // Lazy state preservation.
  enum class eLSPACT : uint32_t {
    // Lazy state preservation is not active.
    eLSPACT_0 = 0,
    // Lazy state preservation is active. floating-point stack frame has been allocated but saving state to it has been deferred.
    eLSPACT_1 = 1,
  };
  
  // Privilege level when the floating-point stack frame was allocated.
  enum class eUSER : uint32_t {
    // Privilege level was not user when the floating-point stack frame was allocated.
    eUSER_0 = 0,
    // Privilege level was user when the floating-point stack frame was allocated.
    eUSER_1 = 1,
  };
  
  // Mode when the floating-point stack frame was allocated.
  enum class eTHREAD : uint32_t {
    // Mode was not Thread Mode when the floating-point stack frame was allocated.
    eTHREAD_0 = 0,
    // Mode was Thread Mode when the floating-point stack frame was allocated.
    eTHREAD_1 = 1,
  };
  
  // Permission to set the HardFault handler to the pending state when the floating-point stack frame was allocated.
  enum class eHFRDY : uint32_t {
    // Priority did not permit setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY_0 = 0,
    // Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY_1 = 1,
  };
  
  // Permission to set the MemManage handler to the pending state when the floating-point stack frame was allocated.
  enum class eMMRDY : uint32_t {
    // MemManage is disabled or priority did not permit setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY_0 = 0,
    // MemManage is enabled and priority permitted setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY_1 = 1,
  };
  
  // Permission to set the BusFault handler to the pending state when the floating-point stack frame was allocated.
  enum class eBFRDY : uint32_t {
    // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY_0 = 0,
    // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY_1 = 1,
  };
  
  // Permission to set the MON_PEND when the floating-point stack frame was allocated.
  enum class eMONRDY : uint32_t {
    // DebugMonitor is disabled or priority did not permit setting MON_PEND when the floating-point stack frame was allocated.
    eMONRDY_0 = 0,
    // DebugMonitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated.
    eMONRDY_1 = 1,
  };
  
  // Lazy state preservation for floating-point context.
  enum class eLSPEN : uint32_t {
    // Disable automatic lazy state preservation for floating-point context.
    eLSPEN_0 = 0,
    // Enable automatic lazy state preservation for floating-point context.
    eLSPEN_1 = 1,
  };
  
  // Enables CONTROL2 setting on execution of a floating-point instruction. This results in automatic hardware state preservation and restoration, for floating-point context, on exception entry and exit.
  enum class eASPEN : uint32_t {
    // Disable CONTROL2 setting on execution of a floating-point instruction.
    eASPEN_0 = 0,
    // Enable CONTROL2 setting on execution of a floating-point instruction.
    eASPEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Lazy state preservation.
    eLSPACT LSPACT : 1;
    // read-write - Privilege level when the floating-point stack frame was allocated.
    eUSER USER : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Mode when the floating-point stack frame was allocated.
    eTHREAD THREAD : 1;
    // read-write - Permission to set the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY HFRDY : 1;
    // read-write - Permission to set the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY MMRDY : 1;
    // read-write - Permission to set the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY BFRDY : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Permission to set the MON_PEND when the floating-point stack frame was allocated.
    eMONRDY MONRDY : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Lazy state preservation for floating-point context.
    eLSPEN LSPEN : 1;
    // read-write - Enables CONTROL2 setting on execution of a floating-point instruction. This results in automatic hardware state preservation and restoration, for floating-point context, on exception entry and exit.
    eASPEN ASPEN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_FPCCR() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile SCB_FPCCR &Instance() { return *reinterpret_cast<volatile SCB_FPCCR*>(0xE000EF34); }
};

// Floating-point Context Address Register
union SCB_FPCAR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - The location of the unpopulated floating-point register space allocated on an exception stack frame.
    uint32_t ADDRESS : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SCB_FPCAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_FPCAR &Instance() { return *reinterpret_cast<volatile SCB_FPCAR*>(0xE000EF38); }
};

// Floating-point Default Status Control Register
union SCB_FPDSCR {
  
  // Default value for FPSCR.RMode (Rounding Mode control field).
  enum class eRMode : uint32_t {
    // Round to Nearest (RN) mode
    eRMode_0 = 0,
    // Round towards Plus Infinity (RP) mode.
    eRMode_1 = 1,
    // Round towards Minus Infinity (RM) mode.
    eRMode_2 = 2,
    // Round towards Zero (RZ) mode.
    eRMode_3 = 3,
  };
  
  // Default value for FPSCR.FZ (Flush-to-zero mode control bit).
  enum class eFZ : uint32_t {
    // Flush-to-zero mode disabled. Behavior of the floating-point system is fully compliant with the IEEE 754 standard.
    eFZ_0 = 0,
    // Flush-to-zero mode enabled.
    eFZ_1 = 1,
  };
  
  // Default value for FPSCR.DN (Default NaN mode control bit).
  enum class eDN : uint32_t {
    // NaN operands propagate through to the output of a floating-point operation.
    eDN_0 = 0,
    // Any operation involving one or more NaNs returns the Default NaN.
    eDN_1 = 1,
  };
  
  // Default value for FPSCR.AHP (Alternative half-precision control bit).
  enum class eAHP : uint32_t {
    // IEEE half-precision format selected.
    eAHP_0 = 0,
    // Alternative half-precision format selected.
    eAHP_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 22;
    // read-write - Default value for FPSCR.RMode (Rounding Mode control field).
    eRMode RMode : 2;
    // read-write - Default value for FPSCR.FZ (Flush-to-zero mode control bit).
    eFZ FZ : 1;
    // read-write - Default value for FPSCR.DN (Default NaN mode control bit).
    eDN DN : 1;
    // read-write - Default value for FPSCR.AHP (Alternative half-precision control bit).
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