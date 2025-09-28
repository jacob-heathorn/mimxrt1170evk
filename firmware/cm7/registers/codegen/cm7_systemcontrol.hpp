#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nCM7_SystemControl {


// Auxiliary Control Register,
union SCB_ACTLR {
  
  // Disables folding of IT instructions.
  enum class eDISFOLD : uint32_t {
    // Normal operation.
    eDISFOLD_0 = 0,
  };
  
  // Disables FPU exception outputs.
  enum class eFPEXCODIS : uint32_t {
    // Normal operation.
    eFPEXCODIS_0 = 0,
    // FPU exception outputs are disabled.
    eFPEXCODIS_1 = 1,
  };
  
  // Disables dynamic read allocate mode for Write-Back Write-Allocate memory regions.
  enum class eDISRAMODE : uint32_t {
    // Normal operation.
    eDISRAMODE_0 = 0,
    // Dynamic disabled.
    eDISRAMODE_1 = 1,
  };
  
  // Disables ITM and DWT ATB flush.
  enum class eDISITMATBFLUSH : uint32_t {
    // ITM and DWT ATB flush disabled, this bit is always 1.
    eDISITMATBFLUSH_1 = 1,
  };
  
  // Disables BTAC read.
  enum class eDISBTACREAD : uint32_t {
    // Normal operation.
    eDISBTACREAD_0 = 0,
    // BTAC is not used and only static branch prediction can occur.
    eDISBTACREAD_1 = 1,
  };
  
  // Disables BTAC allocate.
  enum class eDISBTACALLOC : uint32_t {
    // Normal operation.
    eDISBTACALLOC_0 = 0,
    // No new entries are allocated in Branch Target Address Cache (BTAC), but existing entries can be updated.
    eDISBTACALLOC_1 = 1,
  };
  
  // Disables critical AXI Read-Under-Read.
  enum class eDISCRITAXIRUR : uint32_t {
    // Normal operation.
    eDISCRITAXIRUR_0 = 0,
    // An AXI read to Strongly-Ordered or Device memory, or an LDREX to Shareable memory, is not put on AXI if there are any outstanding reads on AXI. Transactions on AXI cannot be interrupted. This bit might reduce the time that these transactions are in progress and might improve worst case interrupt latency. Performance is decreased when this bit is set.
    eDISCRITAXIRUR_1 = 1,
  };
  
  // Disables dual-issued.
  enum class eDISDI : uint32_t {
    // Normal operation.
    eDISDI_0 = 0,
    // Nothing can be dual-issued when this instruction type is in channel 0.
    eDISDI_1 = 1,
  };
  
  // Disables dual-issued.
  enum class eDISISSCH1 : uint32_t {
    // Normal operation.
    eDISISSCH1_0 = 0,
    // Nothing can be dual-issued when this instruction type is in channel 1.
    eDISISSCH1_1 = 1,
  };
  
  // Disables dynamic allocation of ADD and SUB instructions
  enum class eDISDYNADD : uint32_t {
    // Normal operation. Some ADD and SUB instrctions are resolved in EX1.
    eDISDYNADD_0 = 0,
    // All ADD and SUB instructions are resolved in EX2.
    eDISDYNADD_1 = 1,
  };
  
  // Disables critical AXI read-under-write
  enum class eDISCRITAXIRUW : uint32_t {
    // Normal operation. This is backwards compatible with r0.
    eDISCRITAXIRUW_0 = 0,
    // AXI reads to DEV/SO memory. Exclusive reads to Shareable memory are not initiated on the AXIM AR channel until all outstanding stores on AXI are complete.
    eDISCRITAXIRUW_1 = 1,
  };
  
  // Disables critical AXI read-under-write
  enum class eDISFPUISSOPT : uint32_t {
    // Normal operation.
    eDISFPUISSOPT_0 = 0,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Disables folding of IT instructions.
    eDISFOLD DISFOLD : 1;
    uint32_t _reserved_1 : 7;
    // read-write - Disables FPU exception outputs.
    eFPEXCODIS FPEXCODIS : 1;
    // read-write - Disables dynamic read allocate mode for Write-Back Write-Allocate memory regions.
    eDISRAMODE DISRAMODE : 1;
    // read-write - Disables ITM and DWT ATB flush.
    eDISITMATBFLUSH DISITMATBFLUSH : 1;
    // read-write - Disables BTAC read.
    eDISBTACREAD DISBTACREAD : 1;
    // read-write - Disables BTAC allocate.
    eDISBTACALLOC DISBTACALLOC : 1;
    // read-write - Disables critical AXI Read-Under-Read.
    eDISCRITAXIRUR DISCRITAXIRUR : 1;
    // read-write - Disables dual-issued.
    eDISDI DISDI : 5;
    // read-write - Disables dual-issued.
    eDISISSCH1 DISISSCH1 : 5;
    // read-write - Disables dynamic allocation of ADD and SUB instructions
    eDISDYNADD DISDYNADD : 1;
    // read-write - Disables critical AXI read-under-write
    eDISCRITAXIRUW DISCRITAXIRUW : 1;
    // read-write - Disables critical AXI read-under-write
    eDISFPUISSOPT DISFPUISSOPT : 1;
    uint32_t _reserved_2 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ACTLR &ref() { return *reinterpret_cast<volatile SCB_ACTLR*>(0xE000E008); }
};

// CPUID Base Register
union SCB_CPUID {
  
  // Bit field definition.
  struct {
    // read-only - Indicates patch release: 0x0 = Patch 0
    uint32_t REVISION : 4;
    // read-only - Indicates part number
    uint32_t PARTNO : 12;
    // read-only - ARCHITECTURE
    uint32_t ARCHITECTURE : 4;
    // read-only - Indicates processor revision: 0x2 = Revision 2
    uint32_t VARIANT : 4;
    // read-only - Implementer code
    uint32_t IMPLEMENTER : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x410FC240; }
  static inline volatile SCB_CPUID &ref() { return *reinterpret_cast<volatile SCB_CPUID*>(0xE000ED00); }
};

// Interrupt Control and State Register
union SCB_ICSR {
  
  // Indicates whether there are preempted active exceptions
  enum class eRETTOBASE : uint32_t {
    // there are preempted active exceptions to execute
    eRETTOBASE_0 = 0,
    // there are no active exceptions, or the currently-executing exception is the only active exception
    eRETTOBASE_1 = 1,
  };
  
  // Interrupt pending flag, excluding NMI and Faults
  enum class eISRPENDING : uint32_t {
    // No external interrupt pending.
    eISRPENDING_0 = 0,
    // External interrupt pending.
    eISRPENDING_1 = 1,
  };
  
  // SysTick exception clear-pending bit
  enum class ePENDSTCLR : uint32_t {
    // no effect
    ePENDSTCLR_0 = 0,
    // removes the pending state from the SysTick exception
    ePENDSTCLR_1 = 1,
  };
  
  // SysTick exception set-pending bit
  enum class ePENDSTSET : uint32_t {
    // write: no effect; read: SysTick exception is not pending
    ePENDSTSET_0 = 0,
    // write: changes SysTick exception state to pending; read: SysTick exception is pending
    ePENDSTSET_1 = 1,
  };
  
  // PendSV clear-pending bit
  enum class ePENDSVCLR : uint32_t {
    // no effect
    ePENDSVCLR_0 = 0,
    // removes the pending state from the PendSV exception
    ePENDSVCLR_1 = 1,
  };
  
  // PendSV set-pending bit
  enum class ePENDSVSET : uint32_t {
    // write: no effect; read: PendSV exception is not pending
    ePENDSVSET_0 = 0,
    // write: changes PendSV exception state to pending; read: PendSV exception is pending
    ePENDSVSET_1 = 1,
  };
  
  // NMI set-pending bit
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
    // read-only - Indicates whether there are preempted active exceptions
    eRETTOBASE RETTOBASE : 1;
    // read-only - Exception number of the highest priority pending enabled exception
    uint32_t VECTPENDING : 9;
    uint32_t _reserved_1 : 1;
    // read-only - Interrupt pending flag, excluding NMI and Faults
    eISRPENDING ISRPENDING : 1;
    uint32_t _reserved_2 : 2;
    // write-only - SysTick exception clear-pending bit
    ePENDSTCLR PENDSTCLR : 1;
    // read-write - SysTick exception set-pending bit
    ePENDSTSET PENDSTSET : 1;
    // write-only - PendSV clear-pending bit
    ePENDSVCLR PENDSVCLR : 1;
    // read-write - PendSV set-pending bit
    ePENDSVSET PENDSVSET : 1;
    uint32_t _reserved_3 : 2;
    // read-write - NMI set-pending bit
    eNMIPENDSET NMIPENDSET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICSR &ref() { return *reinterpret_cast<volatile SCB_ICSR*>(0xE000ED04); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_VTOR &ref() { return *reinterpret_cast<volatile SCB_VTOR*>(0xE000ED08); }
};

// Application Interrupt and Reset Control Register
union SCB_AIRCR {
  
  // Writing 1 to this bit causes a local system reset
  enum class eVECTRESET : uint32_t {
    // No change
    eVECTRESET_0 = 0,
    // Causes a local system reset
    eVECTRESET_1 = 1,
  };
  
  // Writing 1 to this bit clears all active state information for fixed and configurable exceptions.
  enum class eVECTCLRACTIVE : uint32_t {
    // No change
    eVECTCLRACTIVE_0 = 0,
    // Clears all active state information for fixed and configurable exceptions
    eVECTCLRACTIVE_1 = 1,
  };
  
  // System reset request
  enum class eSYSRESETREQ : uint32_t {
    // no system reset request
    eSYSRESETREQ_0 = 0,
    // asserts a signal to the outer system that requests a reset
    eSYSRESETREQ_1 = 1,
  };
  
  // Data endianness
  enum class eENDIANNESS : uint32_t {
    // Little-endian
    eENDIANNESS_0 = 0,
    // Big-endian
    eENDIANNESS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // write-only - Writing 1 to this bit causes a local system reset
    eVECTRESET VECTRESET : 1;
    // write-only - Writing 1 to this bit clears all active state information for fixed and configurable exceptions.
    eVECTCLRACTIVE VECTCLRACTIVE : 1;
    // write-only - System reset request
    eSYSRESETREQ SYSRESETREQ : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Interrupt priority grouping field. This field determines the split of group priority from subpriority.
    uint32_t PRIGROUP : 3;
    uint32_t _reserved_1 : 4;
    // read-only - Data endianness
    eENDIANNESS ENDIANNESS : 1;
    // read-write - Register key
    uint32_t VECTKEY : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xFA050000; }
  static inline volatile SCB_AIRCR &ref() { return *reinterpret_cast<volatile SCB_AIRCR*>(0xE000ED0C); }
};

// System Control Register
union SCB_SCR {
  
  // Indicates sleep-on-exit when returning from Handler mode to Thread mode
  enum class eSLEEPONEXIT : uint32_t {
    // o not sleep when returning to Thread mode
    eSLEEPONEXIT_0 = 0,
    // enter sleep, or deep sleep, on return from an ISR
    eSLEEPONEXIT_1 = 1,
  };
  
  // Controls whether the processor uses sleep or deep sleep as its low power mode
  enum class eSLEEPDEEP : uint32_t {
    // sleep
    eSLEEPDEEP_0 = 0,
    // deep sleep
    eSLEEPDEEP_1 = 1,
  };
  
  // Send Event on Pending bit
  enum class eSEVONPEND : uint32_t {
    // only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
    eSEVONPEND_0 = 0,
    // enabled events and all interrupts, including disabled interrupts, can wakeup the processor
    eSEVONPEND_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Indicates sleep-on-exit when returning from Handler mode to Thread mode
    eSLEEPONEXIT SLEEPONEXIT : 1;
    // read-write - Controls whether the processor uses sleep or deep sleep as its low power mode
    eSLEEPDEEP SLEEPDEEP : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Send Event on Pending bit
    eSEVONPEND SEVONPEND : 1;
    uint32_t _reserved_2 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SCR &ref() { return *reinterpret_cast<volatile SCB_SCR*>(0xE000ED10); }
};

// Configuration and Control Register
union SCB_CCR {
  
  // Indicates how the processor enters Thread mode
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
  
  // Enables L1 data cache.
  enum class eDC : uint32_t {
    // L1 data cache disabled
    eDC_0 = 0,
    // L1 data cache enabled
    eDC_1 = 1,
  };
  
  // Enables L1 instruction cache.
  enum class eIC : uint32_t {
    // L1 instruction cache disabled
    eIC_0 = 0,
    // L1 instruction cache enabled
    eIC_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates how the processor enters Thread mode
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
    uint32_t _reserved_2 : 6;
    // read-write - Enables L1 data cache.
    eDC DC : 1;
    // read-write - Enables L1 instruction cache.
    eIC IC : 1;
    // read-only - Always reads-as-one. It indicates branch prediction is enabled.
    uint32_t BP : 1;
    uint32_t _reserved_3 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00040000; }
  static inline volatile SCB_CCR &ref() { return *reinterpret_cast<volatile SCB_CCR*>(0xE000ED14); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR1 &ref() { return *reinterpret_cast<volatile SCB_SHPR1*>(0xE000ED18); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR2 &ref() { return *reinterpret_cast<volatile SCB_SHPR2*>(0xE000ED1C); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHPR3 &ref() { return *reinterpret_cast<volatile SCB_SHPR3*>(0xE000ED20); }
};

// System Handler Control and State Register
union SCB_SHCSR {
  
  // MemManage exception active bit
  enum class eMEMFAULTACT : uint32_t {
    // exception is not active
    eMEMFAULTACT_0 = 0,
    // exception is active
    eMEMFAULTACT_1 = 1,
  };
  
  // BusFault exception active bit
  enum class eBUSFAULTACT : uint32_t {
    // exception is not active
    eBUSFAULTACT_0 = 0,
    // exception is active
    eBUSFAULTACT_1 = 1,
  };
  
  // UsageFault exception active bit
  enum class eUSGFAULTACT : uint32_t {
    // exception is not active
    eUSGFAULTACT_0 = 0,
    // exception is active
    eUSGFAULTACT_1 = 1,
  };
  
  // SVCall active bit
  enum class eSVCALLACT : uint32_t {
    // exception is not active
    eSVCALLACT_0 = 0,
    // exception is active
    eSVCALLACT_1 = 1,
  };
  
  // Debug monitor active bit
  enum class eMONITORACT : uint32_t {
    // exception is not active
    eMONITORACT_0 = 0,
    // exception is active
    eMONITORACT_1 = 1,
  };
  
  // PendSV exception active bit
  enum class ePENDSVACT : uint32_t {
    // exception is not active
    ePENDSVACT_0 = 0,
    // exception is active
    ePENDSVACT_1 = 1,
  };
  
  // SysTick exception active bit
  enum class eSYSTICKACT : uint32_t {
    // exception is not active
    eSYSTICKACT_0 = 0,
    // exception is active
    eSYSTICKACT_1 = 1,
  };
  
  // UsageFault exception pending bit
  enum class eUSGFAULTPENDED : uint32_t {
    // exception is not pending
    eUSGFAULTPENDED_0 = 0,
    // exception is pending
    eUSGFAULTPENDED_1 = 1,
  };
  
  // MemManage exception pending bit
  enum class eMEMFAULTPENDED : uint32_t {
    // exception is not pending
    eMEMFAULTPENDED_0 = 0,
    // exception is pending
    eMEMFAULTPENDED_1 = 1,
  };
  
  // BusFault exception pending bit
  enum class eBUSFAULTPENDED : uint32_t {
    // exception is not pending
    eBUSFAULTPENDED_0 = 0,
    // exception is pending
    eBUSFAULTPENDED_1 = 1,
  };
  
  // SVCall pending bit
  enum class eSVCALLPENDED : uint32_t {
    // exception is not pending
    eSVCALLPENDED_0 = 0,
    // exception is pending
    eSVCALLPENDED_1 = 1,
  };
  
  // MemManage enable bit
  enum class eMEMFAULTENA : uint32_t {
    // disable the exception
    eMEMFAULTENA_0 = 0,
    // enable the exception
    eMEMFAULTENA_1 = 1,
  };
  
  // BusFault enable bit
  enum class eBUSFAULTENA : uint32_t {
    // disable the exception
    eBUSFAULTENA_0 = 0,
    // enable the exception
    eBUSFAULTENA_1 = 1,
  };
  
  // UsageFault enable bit
  enum class eUSGFAULTENA : uint32_t {
    // disable the exception
    eUSGFAULTENA_0 = 0,
    // enable the exception
    eUSGFAULTENA_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MemManage exception active bit
    eMEMFAULTACT MEMFAULTACT : 1;
    // read-write - BusFault exception active bit
    eBUSFAULTACT BUSFAULTACT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - UsageFault exception active bit
    eUSGFAULTACT USGFAULTACT : 1;
    uint32_t _reserved_1 : 3;
    // read-write - SVCall active bit
    eSVCALLACT SVCALLACT : 1;
    // read-write - Debug monitor active bit
    eMONITORACT MONITORACT : 1;
    uint32_t _reserved_2 : 1;
    // read-write - PendSV exception active bit
    ePENDSVACT PENDSVACT : 1;
    // read-write - SysTick exception active bit
    eSYSTICKACT SYSTICKACT : 1;
    // read-write - UsageFault exception pending bit
    eUSGFAULTPENDED USGFAULTPENDED : 1;
    // read-write - MemManage exception pending bit
    eMEMFAULTPENDED MEMFAULTPENDED : 1;
    // read-write - BusFault exception pending bit
    eBUSFAULTPENDED BUSFAULTPENDED : 1;
    // read-write - SVCall pending bit
    eSVCALLPENDED SVCALLPENDED : 1;
    // read-write - MemManage enable bit
    eMEMFAULTENA MEMFAULTENA : 1;
    // read-write - BusFault enable bit
    eBUSFAULTENA BUSFAULTENA : 1;
    // read-write - UsageFault enable bit
    eUSGFAULTENA USGFAULTENA : 1;
    uint32_t _reserved_3 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_SHCSR &ref() { return *reinterpret_cast<volatile SCB_SHCSR*>(0xE000ED24); }
};

// Configurable Fault Status Register
union SCB_CFSR {
  
  // Instruction access violation flag
  enum class eIACCVIOL : uint32_t {
    // no instruction access violation fault
    eIACCVIOL_0 = 0,
    // the processor attempted an instruction fetch from a location that does not permit execution
    eIACCVIOL_1 = 1,
  };
  
  // Data access violation flag
  enum class eDACCVIOL : uint32_t {
    // no data access violation fault
    eDACCVIOL_0 = 0,
    // the processor attempted a load or store at a location that does not permit the operation
    eDACCVIOL_1 = 1,
  };
  
  // MemManage fault on unstacking for a return from exception
  enum class eMUNSTKERR : uint32_t {
    // no unstacking fault
    eMUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more access violations
    eMUNSTKERR_1 = 1,
  };
  
  // MemManage fault on stacking for exception entry
  enum class eMSTKERR : uint32_t {
    // no stacking fault
    eMSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more access violations
    eMSTKERR_1 = 1,
  };
  
  // MemManage fault occurred during floating-point lazy state preservation
  enum class eMLSPERR : uint32_t {
    // No MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_0 = 0,
    // A MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_1 = 1,
  };
  
  // MemManage Fault Address Register (MMFAR) valid flag
  enum class eMMARVALID : uint32_t {
    // value in MMAR is not a valid fault address
    eMMARVALID_0 = 0,
    // MMAR holds a valid fault address
    eMMARVALID_1 = 1,
  };
  
  // Instruction bus error
  enum class eIBUSERR : uint32_t {
    // no instruction bus error
    eIBUSERR_0 = 0,
    // instruction bus error
    eIBUSERR_1 = 1,
  };
  
  // Precise data bus error
  enum class ePRECISERR : uint32_t {
    // no precise data bus error
    ePRECISERR_0 = 0,
    // a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
    ePRECISERR_1 = 1,
  };
  
  // Imprecise data bus error
  enum class eIMPRECISERR : uint32_t {
    // no imprecise data bus error
    eIMPRECISERR_0 = 0,
    // a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
    eIMPRECISERR_1 = 1,
  };
  
  // BusFault on unstacking for a return from exception
  enum class eUNSTKERR : uint32_t {
    // no unstacking fault
    eUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more BusFaults
    eUNSTKERR_1 = 1,
  };
  
  // BusFault on stacking for exception entry
  enum class eSTKERR : uint32_t {
    // no stacking fault
    eSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more BusFaults
    eSTKERR_1 = 1,
  };
  
  // Bus fault occurred during floating-point lazy state preservation
  enum class eLSPERR : uint32_t {
    // No bus fault occurred during floating-point lazy state preservation
    eLSPERR_0 = 0,
    // A bus fault occurred during floating-point lazy state preservation
    eLSPERR_1 = 1,
  };
  
  // BusFault Address Register (BFAR) valid flag
  enum class eBFARVALID : uint32_t {
    // value in BFAR is not a valid fault address
    eBFARVALID_0 = 0,
    // BFAR holds a valid fault address
    eBFARVALID_1 = 1,
  };
  
  // Undefined instruction UsageFault
  enum class eUNDEFINSTR : uint32_t {
    // no undefined instruction UsageFault
    eUNDEFINSTR_0 = 0,
    // the processor has attempted to execute an undefined instruction
    eUNDEFINSTR_1 = 1,
  };
  
  // Invalid state UsageFault
  enum class eINVSTATE : uint32_t {
    // no invalid state UsageFault
    eINVSTATE_0 = 0,
    // the processor has attempted to execute an instruction that makes illegal use of the EPSR
    eINVSTATE_1 = 1,
  };
  
  // Invalid PC load UsageFault, caused by an invalid PC load by EXC_RETURN
  enum class eINVPC : uint32_t {
    // no invalid PC load UsageFault
    eINVPC_0 = 0,
    // the processor has attempted an illegal load of EXC_RETURN to the PC
    eINVPC_1 = 1,
  };
  
  // No coprocessor UsageFault
  enum class eNOCP : uint32_t {
    // no UsageFault caused by attempting to access a coprocessor
    eNOCP_0 = 0,
    // the processor has attempted to access a coprocessor
    eNOCP_1 = 1,
  };
  
  // Unaligned access UsageFault
  enum class eUNALIGNED : uint32_t {
    // no unaligned access fault, or unaligned access trapping not enabled
    eUNALIGNED_0 = 0,
    // the processor has made an unaligned memory access
    eUNALIGNED_1 = 1,
  };
  
  // Divide by zero UsageFault
  enum class eDIVBYZERO : uint32_t {
    // no divide by zero fault, or divide by zero trapping not enabled
    eDIVBYZERO_0 = 0,
    // the processor has executed an SDIV or UDIV instruction with a divisor of 0
    eDIVBYZERO_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Instruction access violation flag
    eIACCVIOL IACCVIOL : 1;
    // read-write - Data access violation flag
    eDACCVIOL DACCVIOL : 1;
    uint32_t _reserved_0 : 1;
    // read-write - MemManage fault on unstacking for a return from exception
    eMUNSTKERR MUNSTKERR : 1;
    // read-write - MemManage fault on stacking for exception entry
    eMSTKERR MSTKERR : 1;
    // read-write - MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR MLSPERR : 1;
    uint32_t _reserved_1 : 1;
    // read-write - MemManage Fault Address Register (MMFAR) valid flag
    eMMARVALID MMARVALID : 1;
    // read-write - Instruction bus error
    eIBUSERR IBUSERR : 1;
    // read-write - Precise data bus error
    ePRECISERR PRECISERR : 1;
    // read-write - Imprecise data bus error
    eIMPRECISERR IMPRECISERR : 1;
    // read-write - BusFault on unstacking for a return from exception
    eUNSTKERR UNSTKERR : 1;
    // read-write - BusFault on stacking for exception entry
    eSTKERR STKERR : 1;
    // read-write - Bus fault occurred during floating-point lazy state preservation
    eLSPERR LSPERR : 1;
    uint32_t _reserved_2 : 1;
    // read-write - BusFault Address Register (BFAR) valid flag
    eBFARVALID BFARVALID : 1;
    // read-write - Undefined instruction UsageFault
    eUNDEFINSTR UNDEFINSTR : 1;
    // read-write - Invalid state UsageFault
    eINVSTATE INVSTATE : 1;
    // read-write - Invalid PC load UsageFault, caused by an invalid PC load by EXC_RETURN
    eINVPC INVPC : 1;
    // read-write - No coprocessor UsageFault
    eNOCP NOCP : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Unaligned access UsageFault
    eUNALIGNED UNALIGNED : 1;
    // read-write - Divide by zero UsageFault
    eDIVBYZERO DIVBYZERO : 1;
    uint32_t _reserved_4 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CFSR &ref() { return *reinterpret_cast<volatile SCB_CFSR*>(0xE000ED28); }
};

// HardFault Status register
union SCB_HFSR {
  
  // Indicates a BusFault on a vector table read during exception processing.
  enum class eVECTTBL : uint32_t {
    // no BusFault on vector table read
    eVECTTBL_0 = 0,
    // BusFault on vector table read
    eVECTTBL_1 = 1,
  };
  
  // Indicates a forced hard fault, generated by escalation of a fault with configurable priority that cannot be handles, either because of priority or because it is disabled.
  enum class eFORCED : uint32_t {
    // no forced HardFault
    eFORCED_0 = 0,
    // forced HardFault
    eFORCED_1 = 1,
  };
  
  // Reserved for Debug use. When writing to the register you must write 0 to this bit, otherwise behavior is Unpredictable.
  enum class eDEBUGEVT : uint32_t {
    // No Debug event has occurred.
    eDEBUGEVT_0 = 0,
    // Debug event has occurred. The Debug Fault Status Register has been updated.
    eDEBUGEVT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Indicates a BusFault on a vector table read during exception processing.
    eVECTTBL VECTTBL : 1;
    uint32_t _reserved_1 : 28;
    // read-write - Indicates a forced hard fault, generated by escalation of a fault with configurable priority that cannot be handles, either because of priority or because it is disabled.
    eFORCED FORCED : 1;
    // read-write - Reserved for Debug use. When writing to the register you must write 0 to this bit, otherwise behavior is Unpredictable.
    eDEBUGEVT DEBUGEVT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_HFSR &ref() { return *reinterpret_cast<volatile SCB_HFSR*>(0xE000ED2C); }
};

// Debug Fault Status Register
union SCB_DFSR {
  
  // Indicates a debug event generated by either a C_HALT or C_STEP request, triggered by a write to the DHCSR or a step request triggered by setting DEMCR.MON_STEP to 1.
  enum class eHALTED : uint32_t {
    // No active halt request debug event
    eHALTED_0 = 0,
    // Halt request debug event active
    eHALTED_1 = 1,
  };
  
  // Debug event generated by BKPT instruction execution or a breakpoint match in FPB
  enum class eBKPT : uint32_t {
    // No current breakpoint debug event
    eBKPT_0 = 0,
    // At least one current breakpoint debug event
    eBKPT_1 = 1,
  };
  
  // Debug event generated by the DWT
  enum class eDWTTRAP : uint32_t {
    // No current debug events generated by the DWT
    eDWTTRAP_0 = 0,
    // At least one current debug event generated by the DWT
    eDWTTRAP_1 = 1,
  };
  
  // Indicates triggering of a Vector catch
  enum class eVCATCH : uint32_t {
    // No Vector catch triggered
    eVCATCH_0 = 0,
    // Vector catch triggered
    eVCATCH_1 = 1,
  };
  
  // Debug event generated because of the assertion of an external debug request
  enum class eEXTERNAL : uint32_t {
    // No external debug request debug event
    eEXTERNAL_0 = 0,
    // External debug request debug event
    eEXTERNAL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates a debug event generated by either a C_HALT or C_STEP request, triggered by a write to the DHCSR or a step request triggered by setting DEMCR.MON_STEP to 1.
    eHALTED HALTED : 1;
    // read-write - Debug event generated by BKPT instruction execution or a breakpoint match in FPB
    eBKPT BKPT : 1;
    // read-write - Debug event generated by the DWT
    eDWTTRAP DWTTRAP : 1;
    // read-write - Indicates triggering of a Vector catch
    eVCATCH VCATCH : 1;
    // read-write - Debug event generated because of the assertion of an external debug request
    eEXTERNAL EXTERNAL : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DFSR &ref() { return *reinterpret_cast<volatile SCB_DFSR*>(0xE000ED30); }
};

// MemManage Fault Address Register
union SCB_MMFAR {
  
  // Bit field definition.
  struct {
    // read-write - Address of MemManage fault location
    uint32_t ADDRESS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_MMFAR &ref() { return *reinterpret_cast<volatile SCB_MMFAR*>(0xE000ED34); }
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

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_BFAR &ref() { return *reinterpret_cast<volatile SCB_BFAR*>(0xE000ED38); }
};

// Processor Feature Register 0
union SCB_ID_PFR0 {
  
  // ARM instruction set support
  enum class eSTATE0 : uint32_t {
    // ARMv7-M unused
    eSTATE0_0 = 0,
    // ARMv7-M unused
    eSTATE0_1 = 1,
    // ARMv7-M unused
    eSTATE0_2 = 2,
    // Support for Thumb encoding including Thumb-2 technology, with all basic 16-bit and 32-bit instructions.
    eSTATE0_3 = 3,
  };
  
  // Thumb instruction set support
  enum class eSTATE1 : uint32_t {
    // The processor does not support the ARM instruction set.
    eSTATE1_0 = 0,
    // ARMv7-M unused
    eSTATE1_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - ARM instruction set support
    eSTATE0 STATE0 : 4;
    // read-only - Thumb instruction set support
    eSTATE1 STATE1 : 4;
    // read-only - ARMv7-M unused
    uint32_t STATE2 : 4;
    // read-only - ARMv7-M unused
    uint32_t STATE3 : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_PFR0 &ref() { return *reinterpret_cast<volatile SCB_ID_PFR0*>(0xE000ED40); }
};

// Processor Feature Register 1
union SCB_ID_PFR1 {
  
  // M profile programmers' model
  enum class ePROGMODEL : uint32_t {
    // ARMv7-M unused
    ePROGMODEL_0 = 0,
    // Two-stack programmers' model supported
    ePROGMODEL_2 = 2,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-only - M profile programmers' model
    ePROGMODEL PROGMODEL : 4;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_PFR1 &ref() { return *reinterpret_cast<volatile SCB_ID_PFR1*>(0xE000ED44); }
};

// Debug Feature Register
union SCB_ID_DFR0 {
  
  // Support for memory-mapped debug model for M profile processors
  enum class eDEBUGMODEL : uint32_t {
    // Not supported
    eDEBUGMODEL_0 = 0,
    // Support for M profile Debug architecture, with memory-mapped access.
    eDEBUGMODEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    // read-only - Support for memory-mapped debug model for M profile processors
    eDEBUGMODEL DEBUGMODEL : 4;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_DFR0 &ref() { return *reinterpret_cast<volatile SCB_ID_DFR0*>(0xE000ED48); }
};

// Auxiliary Feature Register
union SCB_ID_AFR0 {
  
  // Bit field definition.
  struct {
    // read-only - Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    uint32_t IMPLEMENTATION_DEFINED0 : 4;
    // read-only - Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    uint32_t IMPLEMENTATION_DEFINED1 : 4;
    // read-only - Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    uint32_t IMPLEMENTATION_DEFINED2 : 4;
    // read-only - Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    uint32_t IMPLEMENTATION_DEFINED3 : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_AFR0 &ref() { return *reinterpret_cast<volatile SCB_ID_AFR0*>(0xE000ED4C); }
};

// Memory Model Feature Register 0
union SCB_ID_MMFR0 {
  
  // Indicates support for a PMSA
  enum class ePMSASUPPORT : uint32_t {
    // Not supported
    ePMSASUPPORT_0 = 0,
    // ARMv7-M unused
    ePMSASUPPORT_1 = 1,
    // ARMv7-M unused
    ePMSASUPPORT_2 = 2,
    // PMSAv7, providing support for a base region and subregions.
    ePMSASUPPORT_3 = 3,
  };
  
  // Indicates the outermost shareability domain implemented
  enum class eOUTERMOST_SHAREABILITY : uint32_t {
    // Implemented as Non-cacheable
    eOUTERMOST_SHAREABILITY_0 = 0,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_1 = 1,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_2 = 2,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_3 = 3,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_4 = 4,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_5 = 5,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_6 = 6,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_7 = 7,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_8 = 8,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_9 = 9,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_10 = 10,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_11 = 11,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_12 = 12,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_13 = 13,
    // ARMv7-M unused
    eOUTERMOST_SHAREABILITY_14 = 14,
    // Shareability ignored.
    eOUTERMOST_SHAREABILITY_15 = 15,
  };
  
  // Indicates the number of shareability levels implemented
  enum class eSHAREABILITY_LEVELS : uint32_t {
    // One level of shareability implemented
    eSHAREABILITY_LEVELS_0 = 0,
    // ARMv7-M unused
    eSHAREABILITY_LEVELS_1 = 1,
  };
  
  // Indicates the support for Tightly Coupled Memory
  enum class eTCM_SUPPORT : uint32_t {
    // No tightly coupled memories implemented.
    eTCM_SUPPORT_0 = 0,
    // Tightly coupled memories implemented with IMPLEMENTATION DEFINED control.
    eTCM_SUPPORT_1 = 1,
    // ARMv7-M unused
    eTCM_SUPPORT_2 = 2,
  };
  
  // Indicates the support for Auxiliary registers
  enum class eAUXILIARY_REGISTERS : uint32_t {
    // Not supported
    eAUXILIARY_REGISTERS_0 = 0,
    // Support for Auxiliary Control Register only.
    eAUXILIARY_REGISTERS_1 = 1,
    // ARMv7-M unused
    eAUXILIARY_REGISTERS_2 = 2,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-only - Indicates support for a PMSA
    ePMSASUPPORT PMSASUPPORT : 4;
    // read-only - Indicates the outermost shareability domain implemented
    eOUTERMOST_SHAREABILITY OUTERMOST_SHAREABILITY : 4;
    // read-only - Indicates the number of shareability levels implemented
    eSHAREABILITY_LEVELS SHAREABILITY_LEVELS : 4;
    // read-only - Indicates the support for Tightly Coupled Memory
    eTCM_SUPPORT TCM_SUPPORT : 4;
    // read-only - Indicates the support for Auxiliary registers
    eAUXILIARY_REGISTERS AUXILIARY_REGISTERS : 4;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR0 &ref() { return *reinterpret_cast<volatile SCB_ID_MMFR0*>(0xE000ED50); }
};

// Memory Model Feature Register 1
union SCB_ID_MMFR1 {
  
  // Bit field definition.
  struct {
    // read-only - Gives information about the implemented memory model and memory management support.
    uint32_t ID_MMFR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR1 &ref() { return *reinterpret_cast<volatile SCB_ID_MMFR1*>(0xE000ED54); }
};

// Memory Model Feature Register 2
union SCB_ID_MMFR2 {
  
  // Indicates the support for Wait For Interrupt (WFI) stalling
  enum class eWFI_STALL : uint32_t {
    // Not supported
    eWFI_STALL_0 = 0,
    // Support for WFI stalling
    eWFI_STALL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 24;
    // read-only - Indicates the support for Wait For Interrupt (WFI) stalling
    eWFI_STALL WFI_STALL : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR2 &ref() { return *reinterpret_cast<volatile SCB_ID_MMFR2*>(0xE000ED58); }
};

// Memory Model Feature Register 3
union SCB_ID_MMFR3 {
  
  // Bit field definition.
  struct {
    // read-only - Gives information about the implemented memory model and memory management support.
    uint32_t ID_MMFR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_MMFR3 &ref() { return *reinterpret_cast<volatile SCB_ID_MMFR3*>(0xE000ED5C); }
};

// Instruction Set Attributes Register 0
union SCB_ID_ISAR0 {
  
  // Indicates the supported Bit Counting instructions
  enum class eBITCOUNT_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eBITCOUNT_INSTRS_0 = 0,
    // Adds support for the CLZ instruction
    eBITCOUNT_INSTRS_1 = 1,
  };
  
  // Indicates the supported BitField instructions
  enum class eBITFIELD_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eBITFIELD_INSTRS_0 = 0,
    // Adds support for the BFC, BFI, SBFX, and UBFX instructions
    eBITFIELD_INSTRS_1 = 1,
  };
  
  // Indicates the supported combined Compare and Branch instructions
  enum class eCMPBRANCH_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eCMPBRANCH_INSTRS_0 = 0,
    // Adds support for the CBNZ and CBZ instructions
    eCMPBRANCH_INSTRS_1 = 1,
  };
  
  // Indicates the supported Coprocessor instructions
  enum class eCOPROC_INSTRS : uint32_t {
    // None supported, except for separately attributed architectures, for example the Floating-point extension
    eCOPROC_INSTRS_0 = 0,
    // Adds support for generic CDP, LDC, MCR, MRC, and STC instructions
    eCOPROC_INSTRS_1 = 1,
    // As for 1, and adds support for generic CDP2, LDC2, MCR2, MRC2, and STC2 instructions
    eCOPROC_INSTRS_2 = 2,
    // As for 2, and adds support for generic MCRR and MRRC instructions
    eCOPROC_INSTRS_3 = 3,
    // As for 3, and adds support for generic MCRR2 and MRRC2 instructions
    eCOPROC_INSTRS_4 = 4,
  };
  
  // Indicates the supported Debug instructions
  enum class eDEBUG_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eDEBUG_INSTRS_0 = 0,
    // Adds support for the BKPT instruction
    eDEBUG_INSTRS_1 = 1,
  };
  
  // Indicates the supported Divide instructions
  enum class eDIVIDE_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eDIVIDE_INSTRS_0 = 0,
    // Adds support for the SDIV and UDIV instructions
    eDIVIDE_INSTRS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-only - Indicates the supported Bit Counting instructions
    eBITCOUNT_INSTRS BITCOUNT_INSTRS : 4;
    // read-only - Indicates the supported BitField instructions
    eBITFIELD_INSTRS BITFIELD_INSTRS : 4;
    // read-only - Indicates the supported combined Compare and Branch instructions
    eCMPBRANCH_INSTRS CMPBRANCH_INSTRS : 4;
    // read-only - Indicates the supported Coprocessor instructions
    eCOPROC_INSTRS COPROC_INSTRS : 4;
    // read-only - Indicates the supported Debug instructions
    eDEBUG_INSTRS DEBUG_INSTRS : 4;
    // read-only - Indicates the supported Divide instructions
    eDIVIDE_INSTRS DIVIDE_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR0 &ref() { return *reinterpret_cast<volatile SCB_ID_ISAR0*>(0xE000ED60); }
};

// Instruction Set Attributes Register 1
union SCB_ID_ISAR1 {
  
  // Indicates the supported Extend instructions
  enum class eEXTEND_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eEXTEND_INSTRS_0 = 0,
    // Adds support for the SXTB, SXTH, UXTB, and UXTH instructions
    eEXTEND_INSTRS_1 = 1,
    // As for 1, and adds support for the SXTAB, SXTAB16, SXTAH, SXTB16, UXTAB, UXTAB16, UXTAH, and UXTB16 instructions
    eEXTEND_INSTRS_2 = 2,
  };
  
  // Indicates the supported IfThen instructions
  enum class eIFTHEN_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eIFTHEN_INSTRS_0 = 0,
    // Adds support for the IT instructions, and for the IT bits in the PSRs
    eIFTHEN_INSTRS_1 = 1,
  };
  
  // Indicates the support for data-processing instructions with long immediate
  enum class eIMMEDIATE_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eIMMEDIATE_INSTRS_0 = 0,
    // Adds support for the ADDW, MOVW, MOVT, and SUBW instructions
    eIMMEDIATE_INSTRS_1 = 1,
  };
  
  // Indicates the supported Interworking instructions
  enum class eINTERWORK_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eINTERWORK_INSTRS_0 = 0,
    // Adds support for the BX instruction, and the T bit in the PSR
    eINTERWORK_INSTRS_1 = 1,
    // As for 1, and adds support for the BLX instruction, and PC loads have BX-like behavior
    eINTERWORK_INSTRS_2 = 2,
    // ARMv7-M unused
    eINTERWORK_INSTRS_3 = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-only - Indicates the supported Extend instructions
    eEXTEND_INSTRS EXTEND_INSTRS : 4;
    // read-only - Indicates the supported IfThen instructions
    eIFTHEN_INSTRS IFTHEN_INSTRS : 4;
    // read-only - Indicates the support for data-processing instructions with long immediate
    eIMMEDIATE_INSTRS IMMEDIATE_INSTRS : 4;
    // read-only - Indicates the supported Interworking instructions
    eINTERWORK_INSTRS INTERWORK_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR1 &ref() { return *reinterpret_cast<volatile SCB_ID_ISAR1*>(0xE000ED64); }
};

// Instruction Set Attributes Register 2
union SCB_ID_ISAR2 {
  
  // Indicates the supported additional load and store instructions
  enum class eLOADSTORE_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eLOADSTORE_INSTRS_0 = 0,
    // Adds support for the LDRD and STRD instructions
    eLOADSTORE_INSTRS_1 = 1,
  };
  
  // Indicates the supported Memory Hint instructions
  enum class eMEMHINT_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eMEMHINT_INSTRS_0 = 0,
    // Adds support for the PLD instruction, ARMv7-M unused.
    eMEMHINT_INSTRS_1 = 1,
    // As for 1, ARMv7-M unused.
    eMEMHINT_INSTRS_2 = 2,
    // As for 1 or 2, and adds support for the PLI instruction.
    eMEMHINT_INSTRS_3 = 3,
  };
  
  // Indicates the support for multi-access interruptible instructions
  enum class eMULTIACCESSINT_INSTRS : uint32_t {
    // None supported. This means the LDM and STM instructions are not interruptible. ARMv7-M unused.
    eMULTIACCESSINT_INSTRS_0 = 0,
    // LDM and STM instructions are restartable.
    eMULTIACCESSINT_INSTRS_1 = 1,
    // LDM and STM instructions are continuable.
    eMULTIACCESSINT_INSTRS_2 = 2,
  };
  
  // Indicates the supported additional Multiply instructions
  enum class eMULT_INSTRS : uint32_t {
    // None supported. This means only MUL is supported. ARMv7-M unused.
    eMULT_INSTRS_0 = 0,
    // Adds support for the MLA instruction, ARMv7-M unused.
    eMULT_INSTRS_1 = 1,
    // As for 1, and adds support for the MLS instruction.
    eMULT_INSTRS_2 = 2,
  };
  
  // Indicates the supported advanced signed Multiply instructions
  enum class eMULTS_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eMULTS_INSTRS_0 = 0,
    // Adds support for the SMULL and SMLAL instructions
    eMULTS_INSTRS_1 = 1,
    // As for 1, and adds support for the SMLABB, SMLABT, SMLALBB, SMLALBT, SMLALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB, SMULTT, SMULWB, and SMULWT instructions.
    eMULTS_INSTRS_2 = 2,
    // As for 2, and adds support for the SMLAD, SMLADX, SMLALD, SMLALDX, SMLSD, SMLSDX, SMLSLD, SMLSLDX, SMMLA, SMMLAR, SMMLS, SMMLSR, SMMUL, SMMULR, SMUAD, SMUADX, SMUSD, and SMUSDX instructions.
    eMULTS_INSTRS_3 = 3,
  };
  
  // Indicates the supported advanced unsigned Multiply instructions
  enum class eMULTU_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eMULTU_INSTRS_0 = 0,
    // Adds support for the UMULL and UMLAL instructions.
    eMULTU_INSTRS_1 = 1,
    // As for 1, and adds support for the UMAAL instruction.
    eMULTU_INSTRS_2 = 2,
  };
  
  // Indicates the supported Reversal instructions
  enum class eREVERSAL_INSTRS : uint32_t {
    // None supported, ARMv7-M unused
    eREVERSAL_INSTRS_0 = 0,
    // Adds support for the REV, REV16, and REVSH instructions, ARMv7-M unused.
    eREVERSAL_INSTRS_1 = 1,
    // As for 1, and adds support for the RBIT instruction.
    eREVERSAL_INSTRS_2 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-only - Indicates the supported additional load and store instructions
    eLOADSTORE_INSTRS LOADSTORE_INSTRS : 4;
    // read-only - Indicates the supported Memory Hint instructions
    eMEMHINT_INSTRS MEMHINT_INSTRS : 4;
    // read-only - Indicates the support for multi-access interruptible instructions
    eMULTIACCESSINT_INSTRS MULTIACCESSINT_INSTRS : 4;
    // read-only - Indicates the supported additional Multiply instructions
    eMULT_INSTRS MULT_INSTRS : 4;
    // read-only - Indicates the supported advanced signed Multiply instructions
    eMULTS_INSTRS MULTS_INSTRS : 4;
    // read-only - Indicates the supported advanced unsigned Multiply instructions
    eMULTU_INSTRS MULTU_INSTRS : 4;
    uint32_t _reserved_0 : 4;
    // read-only - Indicates the supported Reversal instructions
    eREVERSAL_INSTRS REVERSAL_INSTRS : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR2 &ref() { return *reinterpret_cast<volatile SCB_ID_ISAR2*>(0xE000ED68); }
};

// Instruction Set Attributes Register 3
union SCB_ID_ISAR3 {
  
  // Indicates the supported Saturate instructions
  enum class eSATURATE_INSTRS : uint32_t {
    // None supported
    eSATURATE_INSTRS_0 = 0,
    // Adds support for the QADD, QDADD, QDSUB, and QSUB instructions, and for the Q bit in the PSRs.
    eSATURATE_INSTRS_1 = 1,
  };
  
  // Indicates the supported SIMD instructions
  enum class eSIMD_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eSIMD_INSTRS_0 = 0,
    // Adds support for the SSAT and USAT instructions, and for the Q bit in the PSRs.
    eSIMD_INSTRS_1 = 1,
    // As for 1, and adds support for the PKHBT, PKHTB, QADD16, QADD8, QASX, QSUB16, QSUB8, QSAX, SADD16, SADD8, SASX, SEL, SHADD16, SHADD8, SHASX, SHSUB16, SHSUB8, SHSAX, SSAT16, SSUB16, SSUB8, SSAX, SXTAB16, SXTB16, UADD16, UADD8, UASX, UHADD16, UHADD8, UHASX, UHSUB16, UHSUB8, UHSAX, UQADD16, UQADD8, UQASX, UQSUB16, UQSUB8, UQSAX, USAD8, USADA8, USAT16, USUB16, USUB8, USAX, UXTAB16, and UXTB16 instructions. Also adds support for the GE[3:0] bits in the PSRs.
    eSIMD_INSTRS_3 = 3,
  };
  
  // Indicates the supported SVC instructions
  enum class eSVC_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eSVC_INSTRS_0 = 0,
    // Adds support for the SVC instruction.
    eSVC_INSTRS_1 = 1,
  };
  
  // Indicates the supported Table Branch instructions
  enum class eTABBRANCH_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eTABBRANCH_INSTRS_0 = 0,
    // Adds support for the TBB and TBH instructions.
    eTABBRANCH_INSTRS_1 = 1,
  };
  
  // Indicates the supported non flag-setting MOV instructions
  enum class eTHUMBCOPY_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eTHUMBCOPY_INSTRS_0 = 0,
    // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
    eTHUMBCOPY_INSTRS_1 = 1,
  };
  
  // Indicates the supported non flag-setting MOV instructions
  enum class eTRUENOP_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eTRUENOP_INSTRS_0 = 0,
    // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
    eTRUENOP_INSTRS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Indicates the supported Saturate instructions
    eSATURATE_INSTRS SATURATE_INSTRS : 4;
    // read-only - Indicates the supported SIMD instructions
    eSIMD_INSTRS SIMD_INSTRS : 4;
    // read-only - Indicates the supported SVC instructions
    eSVC_INSTRS SVC_INSTRS : 4;
    // read-only - Together with the ID_ISAR4[SYNCHPRIM_INSTRS_FRAC] indicates the supported Synchronization Primitives
    uint32_t SYNCHPRIM_INSTRS : 4;
    // read-only - Indicates the supported Table Branch instructions
    eTABBRANCH_INSTRS TABBRANCH_INSTRS : 4;
    // read-only - Indicates the supported non flag-setting MOV instructions
    eTHUMBCOPY_INSTRS THUMBCOPY_INSTRS : 4;
    // read-only - Indicates the supported non flag-setting MOV instructions
    eTRUENOP_INSTRS TRUENOP_INSTRS : 4;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR3 &ref() { return *reinterpret_cast<volatile SCB_ID_ISAR3*>(0xE000ED6C); }
};

// Instruction Set Attributes Register 4
union SCB_ID_ISAR4 {
  
  // Indicates the supported unprivileged instructions. These are the instruction variants indicated by a T suffix.
  enum class eUNPRIV_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eUNPRIV_INSTRS_0 = 0,
    // Adds support for the LDRBT, LDRT, STRBT, and STRT instructions.
    eUNPRIV_INSTRS_1 = 1,
    // As for 1, and adds support for the LDRHT, LDRSBT, LDRSHT, and STRHT instructions.
    eUNPRIV_INSTRS_2 = 2,
  };
  
  // Indicates the support for instructions with shifts
  enum class eWITHSHIFTS_INSTRS : uint32_t {
    // Nonzero shifts supported only in MOV and shift instructions.
    eWITHSHIFTS_INSTRS_0 = 0,
    // Adds support for shifts of loads and stores over the range LSL 0-3.
    eWITHSHIFTS_INSTRS_1 = 1,
    // As for 1, and adds support for other constant shift options, on loads, stores, and other instructions.
    eWITHSHIFTS_INSTRS_3 = 3,
    // ARMv7-M unused.
    eWITHSHIFTS_INSTRS_4 = 4,
  };
  
  // Indicates the support for Writeback addressing modes
  enum class eWRITEBACK_INSTRS : uint32_t {
    // Basic support. Only the LDM, STM, PUSH, and POP instructions support writeback addressing modes. ARMv7-M unused.
    eWRITEBACK_INSTRS_0 = 0,
    // Adds support for all of the writeback addressing modes defined in the ARMv7-M architecture.
    eWRITEBACK_INSTRS_1 = 1,
  };
  
  // Indicates the supported Barrier instructions
  enum class eBARRIER_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    eBARRIER_INSTRS_0 = 0,
    // Adds support for the DMB, DSB, and ISB barrier instructions.
    eBARRIER_INSTRS_1 = 1,
  };
  
  // Indicates the supported M profile instructions to modify the PSRs
  enum class ePSR_M_INSTRS : uint32_t {
    // None supported, ARMv7-M unused.
    ePSR_M_INSTRS_0 = 0,
    // Adds support for the M-profile forms of the CPS, MRS, and MSR instructions, to access the PSRs.
    ePSR_M_INSTRS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Indicates the supported unprivileged instructions. These are the instruction variants indicated by a T suffix.
    eUNPRIV_INSTRS UNPRIV_INSTRS : 4;
    // read-only - Indicates the support for instructions with shifts
    eWITHSHIFTS_INSTRS WITHSHIFTS_INSTRS : 4;
    // read-only - Indicates the support for Writeback addressing modes
    eWRITEBACK_INSTRS WRITEBACK_INSTRS : 4;
    uint32_t _reserved_0 : 4;
    // read-only - Indicates the supported Barrier instructions
    eBARRIER_INSTRS BARRIER_INSTRS : 4;
    // read-only - Together with the ID_ISAR3[SYNCHPRIM_INSTRS] indicates the supported Synchronization Primitives
    uint32_t SYNCHPRIM_INSTRS_FRAC : 4;
    // read-only - Indicates the supported M profile instructions to modify the PSRs
    ePSR_M_INSTRS PSR_M_INSTRS : 4;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ID_ISAR4 &ref() { return *reinterpret_cast<volatile SCB_ID_ISAR4*>(0xE000ED70); }
};

// Cache Level ID register
union SCB_CLIDR {
  
  // Indicate the type of cache implemented at level 1.
  enum class eCL1 : uint32_t {
    // No cache
    eCL1_0 = 0,
    // Instruction cache only
    eCL1_1 = 1,
    // Data cache only
    eCL1_2 = 2,
    // Separate instruction and data caches
    eCL1_3 = 3,
    // Unified cache
    eCL1_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 2.
  enum class eCL2 : uint32_t {
    // No cache
    eCL2_0 = 0,
    // Instruction cache only
    eCL2_1 = 1,
    // Data cache only
    eCL2_2 = 2,
    // Separate instruction and data caches
    eCL2_3 = 3,
    // Unified cache
    eCL2_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 3.
  enum class eCL3 : uint32_t {
    // No cache
    eCL3_0 = 0,
    // Instruction cache only
    eCL3_1 = 1,
    // Data cache only
    eCL3_2 = 2,
    // Separate instruction and data caches
    eCL3_3 = 3,
    // Unified cache
    eCL3_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 4.
  enum class eCL4 : uint32_t {
    // No cache
    eCL4_0 = 0,
    // Instruction cache only
    eCL4_1 = 1,
    // Data cache only
    eCL4_2 = 2,
    // Separate instruction and data caches
    eCL4_3 = 3,
    // Unified cache
    eCL4_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 5.
  enum class eCL5 : uint32_t {
    // No cache
    eCL5_0 = 0,
    // Instruction cache only
    eCL5_1 = 1,
    // Data cache only
    eCL5_2 = 2,
    // Separate instruction and data caches
    eCL5_3 = 3,
    // Unified cache
    eCL5_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 6.
  enum class eCL6 : uint32_t {
    // No cache
    eCL6_0 = 0,
    // Instruction cache only
    eCL6_1 = 1,
    // Data cache only
    eCL6_2 = 2,
    // Separate instruction and data caches
    eCL6_3 = 3,
    // Unified cache
    eCL6_4 = 4,
  };
  
  // Indicate the type of cache implemented at level 7.
  enum class eCL7 : uint32_t {
    // No cache
    eCL7_0 = 0,
    // Instruction cache only
    eCL7_1 = 1,
    // Data cache only
    eCL7_2 = 2,
    // Separate instruction and data caches
    eCL7_3 = 3,
    // Unified cache
    eCL7_4 = 4,
  };
  
  // Level of Unification Inner Shareable for the cache hierarchy. This field is RAZ.
  enum class eLOUIS : uint32_t {
    // 0
    eLOUIS_0 = 0,
    // 1
    eLOUIS_1 = 1,
    // 2
    eLOUIS_2 = 2,
    // 3
    eLOUIS_3 = 3,
    // 4
    eLOUIS_4 = 4,
    // 5
    eLOUIS_5 = 5,
    // 6
    eLOUIS_6 = 6,
    // 7
    eLOUIS_7 = 7,
  };
  
  // Level of Coherency for the cache hierarchy
  enum class eLOC : uint32_t {
    // 0
    eLOC_0 = 0,
    // 1
    eLOC_1 = 1,
    // 2
    eLOC_2 = 2,
    // 3
    eLOC_3 = 3,
    // 4
    eLOC_4 = 4,
    // 5
    eLOC_5 = 5,
    // 6
    eLOC_6 = 6,
    // 7
    eLOC_7 = 7,
  };
  
  // Level of Unification for the cache hierarchy
  enum class eLOU : uint32_t {
    // 0
    eLOU_0 = 0,
    // 1
    eLOU_1 = 1,
    // 2
    eLOU_2 = 2,
    // 3
    eLOU_3 = 3,
    // 4
    eLOU_4 = 4,
    // 5
    eLOU_5 = 5,
    // 6
    eLOU_6 = 6,
    // 7
    eLOU_7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-only - Indicate the type of cache implemented at level 1.
    eCL1 CL1 : 3;
    // read-only - Indicate the type of cache implemented at level 2.
    eCL2 CL2 : 3;
    // read-only - Indicate the type of cache implemented at level 3.
    eCL3 CL3 : 3;
    // read-only - Indicate the type of cache implemented at level 4.
    eCL4 CL4 : 3;
    // read-only - Indicate the type of cache implemented at level 5.
    eCL5 CL5 : 3;
    // read-only - Indicate the type of cache implemented at level 6.
    eCL6 CL6 : 3;
    // read-only - Indicate the type of cache implemented at level 7.
    eCL7 CL7 : 3;
    // read-only - Level of Unification Inner Shareable for the cache hierarchy. This field is RAZ.
    eLOUIS LOUIS : 3;
    // read-only - Level of Coherency for the cache hierarchy
    eLOC LOC : 3;
    // read-only - Level of Unification for the cache hierarchy
    eLOU LOU : 3;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CLIDR &ref() { return *reinterpret_cast<volatile SCB_CLIDR*>(0xE000ED78); }
};

// Cache Type register
union SCB_CTR {
  
  // Indicates the implemented CTR format.
  enum class eFORMAT : uint32_t {
    // ARMv7 format.
    eFORMAT_4 = 4,
  };
  
  // Bit field definition.
  struct {
    // read-only - Log2 of the number of words in the smallest cache line of all the instruction caches that are controlled by the processor.
    uint32_t IMINLINE : 4;
    uint32_t _reserved_0 : 12;
    // read-only - Log2 of the number of words in the smallest cache line of all the data caches and unified caches that are controlled by the processor.
    uint32_t DMINLINE : 4;
    // read-only - Exclusives Reservation Granule. The maximum size of the reservation granule that has been implemented for the Load-Exclusive and Store-Exclusive instructions, encoded as Log2 of the number of words.
    uint32_t ERG : 4;
    // read-only - Cache Write-back Granule. The maximum size of memory that can be overwritten as a result of the eviction of a cache entry that has had a memory location in it modified, encoded as Log2 of the number of words.
    uint32_t CWG : 4;
    uint32_t _reserved_1 : 1;
    // read-only - Indicates the implemented CTR format.
    eFORMAT FORMAT : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x8000C000; }
  static inline volatile SCB_CTR &ref() { return *reinterpret_cast<volatile SCB_CTR*>(0xE000ED7C); }
};

// Cache Size ID Register
union SCB_CCSIDR {
  
  // (Log2(Number of words in cache line)) - 2.
  enum class eLINESIZE : uint32_t {
    // The line length of 4 words.
    eLINESIZE_0 = 0,
    // The line length of 8 words.
    eLINESIZE_1 = 1,
    // The line length of 16 words.
    eLINESIZE_2 = 2,
    // The line length of 32 words.
    eLINESIZE_3 = 3,
    // The line length of 64 words.
    eLINESIZE_4 = 4,
    // The line length of 128 words.
    eLINESIZE_5 = 5,
    // The line length of 256 words.
    eLINESIZE_6 = 6,
    // The line length of 512 words.
    eLINESIZE_7 = 7,
  };
  
  // Indicates whether the cache level supports write-allocation
  enum class eWA : uint32_t {
    // Feature not supported
    eWA_0 = 0,
    // Feature supported
    eWA_1 = 1,
  };
  
  // Indicates whether the cache level supports read-allocation
  enum class eRA : uint32_t {
    // Feature not supported
    eRA_0 = 0,
    // Feature supported
    eRA_1 = 1,
  };
  
  // Indicates whether the cache level supports write-back
  enum class eWB : uint32_t {
    // Feature not supported
    eWB_0 = 0,
    // Feature supported
    eWB_1 = 1,
  };
  
  // Indicates whether the cache level supports write-through
  enum class eWT : uint32_t {
    // Feature not supported
    eWT_0 = 0,
    // Feature supported
    eWT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - (Log2(Number of words in cache line)) - 2.
    eLINESIZE LINESIZE : 3;
    // read-only - (Associativity of cache) - 1, therefore a value of 0 indicates an associativity of 1. The associativity does not have to be a power of 2.
    uint32_t ASSOCIATIVITY : 10;
    // read-only - (Number of sets in cache) - 1, therefore a value of 0 indicates 1 set in the cache. The number of sets does not have to be a power of 2.
    uint32_t NUMSETS : 15;
    // read-only - Indicates whether the cache level supports write-allocation
    eWA WA : 1;
    // read-only - Indicates whether the cache level supports read-allocation
    eRA RA : 1;
    // read-only - Indicates whether the cache level supports write-back
    eWB WB : 1;
    // read-only - Indicates whether the cache level supports write-through
    eWT WT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CCSIDR &ref() { return *reinterpret_cast<volatile SCB_CCSIDR*>(0xE000ED80); }
};

// Cache Size Selection Register
union SCB_CSSELR {
  
  // Instruction not data bit
  enum class eIND : uint32_t {
    // Data or unified cache.
    eIND_0 = 0,
    // Instruction cache.
    eIND_1 = 1,
  };
  
  // Cache level of required cache
  enum class eLEVEL : uint32_t {
    // Level 1 cache.
    eLEVEL_0 = 0,
    // Level 2 cache.
    eLEVEL_1 = 1,
    // Level 3 cache.
    eLEVEL_2 = 2,
    // Level 4 cache.
    eLEVEL_3 = 3,
    // Level 5 cache.
    eLEVEL_4 = 4,
    // Level 6 cache.
    eLEVEL_5 = 5,
    // Level 7 cache.
    eLEVEL_6 = 6,
  };
  
  // Bit field definition.
  struct {
    // read-write - Instruction not data bit
    eIND IND : 1;
    // read-write - Cache level of required cache
    eLEVEL LEVEL : 3;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CSSELR &ref() { return *reinterpret_cast<volatile SCB_CSSELR*>(0xE000ED84); }
};

// Coprocessor Access Control Register
union SCB_CPACR {
  
  // Access privileges for coprocessor 0.
  enum class eCP0 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP0_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP0_1 = 1,
    // Full access.
    eCP0_3 = 3,
  };
  
  // Access privileges for coprocessor 1.
  enum class eCP1 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP1_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP1_1 = 1,
    // Full access.
    eCP1_3 = 3,
  };
  
  // Access privileges for coprocessor 2.
  enum class eCP2 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP2_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP2_1 = 1,
    // Full access.
    eCP2_3 = 3,
  };
  
  // Access privileges for coprocessor 3.
  enum class eCP3 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP3_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP3_1 = 1,
    // Full access.
    eCP3_3 = 3,
  };
  
  // Access privileges for coprocessor 4.
  enum class eCP4 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP4_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP4_1 = 1,
    // Full access.
    eCP4_3 = 3,
  };
  
  // Access privileges for coprocessor 5.
  enum class eCP5 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP5_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP5_1 = 1,
    // Full access.
    eCP5_3 = 3,
  };
  
  // Access privileges for coprocessor 6.
  enum class eCP6 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP6_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP6_1 = 1,
    // Full access.
    eCP6_3 = 3,
  };
  
  // Access privileges for coprocessor 7.
  enum class eCP7 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP7_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP7_1 = 1,
    // Full access.
    eCP7_3 = 3,
  };
  
  // Access privileges for coprocessor 10.
  enum class eCP10 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP10_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP10_1 = 1,
    // Full access.
    eCP10_3 = 3,
  };
  
  // Access privileges for coprocessor 11.
  enum class eCP11 : uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault.
    eCP11_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP UsageFault.
    eCP11_1 = 1,
    // Full access.
    eCP11_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Access privileges for coprocessor 0.
    eCP0 CP0 : 2;
    // read-write - Access privileges for coprocessor 1.
    eCP1 CP1 : 2;
    // read-write - Access privileges for coprocessor 2.
    eCP2 CP2 : 2;
    // read-write - Access privileges for coprocessor 3.
    eCP3 CP3 : 2;
    // read-write - Access privileges for coprocessor 4.
    eCP4 CP4 : 2;
    // read-write - Access privileges for coprocessor 5.
    eCP5 CP5 : 2;
    // read-write - Access privileges for coprocessor 6.
    eCP6 CP6 : 2;
    // read-write - Access privileges for coprocessor 7.
    eCP7 CP7 : 2;
    uint32_t _reserved_0 : 4;
    // read-write - Access privileges for coprocessor 10.
    eCP10 CP10 : 2;
    // read-write - Access privileges for coprocessor 11.
    eCP11 CP11 : 2;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CPACR &ref() { return *reinterpret_cast<volatile SCB_CPACR*>(0xE000ED88); }
};

// Instruction cache invalidate all to Point of Unification (PoU)
union SCB_STIR {
  
  // Bit field definition.
  struct {
    // write-only - Indicates the interrupt to be triggered
    uint32_t INTID : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_STIR &ref() { return *reinterpret_cast<volatile SCB_STIR*>(0xE000EF00); }
};

// Instruction cache invalidate all to Point of Unification (PoU)
union SCB_ICIALLU {
  
  // Bit field definition.
  struct {
    // write-only - I-cache invalidate all to PoU
    uint32_t ICIALLU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICIALLU &ref() { return *reinterpret_cast<volatile SCB_ICIALLU*>(0xE000EF50); }
};

// Instruction cache invalidate by address to PoU
union SCB_ICIMVAU {
  
  // Bit field definition.
  struct {
    // write-only - I-cache invalidate by MVA to PoU
    uint32_t ICIMVAU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_ICIMVAU &ref() { return *reinterpret_cast<volatile SCB_ICIMVAU*>(0xE000EF58); }
};

// Data cache invalidate by address to Point of Coherency (PoC)
union SCB_DCIMVAC {
  
  // Bit field definition.
  struct {
    // write-only - D-cache invalidate by MVA to PoC
    uint32_t DCIMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCIMVAC &ref() { return *reinterpret_cast<volatile SCB_DCIMVAC*>(0xE000EF5C); }
};

// Data cache invalidate by set/way
union SCB_DCISW {
  
  // Bit field definition.
  struct {
    // write-only - D-cache invalidate by set-way
    uint32_t DCISW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCISW &ref() { return *reinterpret_cast<volatile SCB_DCISW*>(0xE000EF60); }
};

// Data cache by address to PoU
union SCB_DCCMVAU {
  
  // Bit field definition.
  struct {
    // write-only - D-cache clean by MVA to PoU
    uint32_t DCCMVAU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCMVAU &ref() { return *reinterpret_cast<volatile SCB_DCCMVAU*>(0xE000EF64); }
};

// Data cache clean by address to PoC
union SCB_DCCMVAC {
  
  // Bit field definition.
  struct {
    // write-only - D-cache clean by MVA to PoC
    uint32_t DCCMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCMVAC &ref() { return *reinterpret_cast<volatile SCB_DCCMVAC*>(0xE000EF68); }
};

// Data cache clean by set/way
union SCB_DCCSW {
  
  // Bit field definition.
  struct {
    // write-only - D-cache clean by set-way
    uint32_t DCCSW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCSW &ref() { return *reinterpret_cast<volatile SCB_DCCSW*>(0xE000EF6C); }
};

// Data cache clean and invalidate by address to PoC
union SCB_DCCIMVAC {
  
  // Bit field definition.
  struct {
    // write-only - D-cache clean and invalidate by MVA to PoC
    uint32_t DCCIMVAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCIMVAC &ref() { return *reinterpret_cast<volatile SCB_DCCIMVAC*>(0xE000EF70); }
};

// Data cache clean and invalidate by set/way
union SCB_DCCISW {
  
  // Bit field definition.
  struct {
    // write-only - D-cache clean and invalidate by set-way
    uint32_t DCCISW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_DCCISW &ref() { return *reinterpret_cast<volatile SCB_DCCISW*>(0xE000EF74); }
};

// Instruction Tightly-Coupled Memory Control Register
union SCB_CM7_ITCMCR {
  
  // TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
  enum class eEN : uint32_t {
    // TCM disabled.
    eEN_0 = 0,
    // TCM enabled.
    eEN_1 = 1,
  };
  
  // Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
  enum class eRMW : uint32_t {
    // RMW disabled.
    eRMW_0 = 0,
    // RMW enabled.
    eRMW_1 = 1,
  };
  
  // Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
  enum class eRETEN : uint32_t {
    // Retry phase disabled.
    eRETEN_0 = 0,
    // Retry phase enabled.
    eRETEN_1 = 1,
  };
  
  // TCM size. Indicates the size of the relevant TCM.
  enum class eSZ : uint32_t {
    // No TCM implemented.
    eSZ_0 = 0,
    // 4KB.
    eSZ_3 = 3,
    // 8KB.
    eSZ_4 = 4,
    // 16KB.
    eSZ_5 = 5,
    // 32KB.
    eSZ_6 = 6,
    // 64KB.
    eSZ_7 = 7,
    // 128KB.
    eSZ_8 = 8,
    // 256KB.
    eSZ_9 = 9,
    // 512KB.
    eSZ_10 = 10,
    // 1MB.
    eSZ_11 = 11,
    // 2MB.
    eSZ_12 = 12,
    // 4MB.
    eSZ_13 = 13,
    // 8MB.
    eSZ_14 = 14,
    // 16MB.
    eSZ_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
    eEN EN : 1;
    // read-write - Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
    eRMW RMW : 1;
    // read-write - Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
    eRETEN RETEN : 1;
    // read-only - TCM size. Indicates the size of the relevant TCM.
    eSZ SZ : 4;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_ITCMCR &ref() { return *reinterpret_cast<volatile SCB_CM7_ITCMCR*>(0xE000EF90); }
};

// Data Tightly-Coupled Memory Control Register
union SCB_CM7_DTCMCR {
  
  // TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
  enum class eEN : uint32_t {
    // TCM disabled.
    eEN_0 = 0,
    // TCM enabled.
    eEN_1 = 1,
  };
  
  // Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
  enum class eRMW : uint32_t {
    // RMW disabled.
    eRMW_0 = 0,
    // RMW enabled.
    eRMW_1 = 1,
  };
  
  // Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
  enum class eRETEN : uint32_t {
    // Retry phase disabled.
    eRETEN_0 = 0,
    // Retry phase enabled.
    eRETEN_1 = 1,
  };
  
  // TCM size. Indicates the size of the relevant TCM.
  enum class eSZ : uint32_t {
    // No TCM implemented.
    eSZ_0 = 0,
    // 4KB.
    eSZ_3 = 3,
    // 8KB.
    eSZ_4 = 4,
    // 16KB.
    eSZ_5 = 5,
    // 32KB.
    eSZ_6 = 6,
    // 64KB.
    eSZ_7 = 7,
    // 128KB.
    eSZ_8 = 8,
    // 256KB.
    eSZ_9 = 9,
    // 512KB.
    eSZ_10 = 10,
    // 1MB.
    eSZ_11 = 11,
    // 2MB.
    eSZ_12 = 12,
    // 4MB.
    eSZ_13 = 13,
    // 8MB.
    eSZ_14 = 14,
    // 16MB.
    eSZ_15 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
    eEN EN : 1;
    // read-write - Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
    eRMW RMW : 1;
    // read-write - Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
    eRETEN RETEN : 1;
    // read-only - TCM size. Indicates the size of the relevant TCM.
    eSZ SZ : 4;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_DTCMCR &ref() { return *reinterpret_cast<volatile SCB_CM7_DTCMCR*>(0xE000EF94); }
};

// AHBP Control Register
union SCB_CM7_AHBPCR {
  
  // AHBP enable.
  enum class eEN : uint32_t {
    // AHBP disabled. When disabled all accesses are made to the AXIM interface.
    eEN_0 = 0,
    // AHBP enabled.
    eEN_1 = 1,
  };
  
  // AHBP size.
  enum class eSZ : uint32_t {
    // 0MB. AHBP disabled.
    eSZ_0 = 0,
    // 64MB.
    eSZ_1 = 1,
    // 128MB.
    eSZ_2 = 2,
    // 256MB.
    eSZ_3 = 3,
    // 512MB.
    eSZ_4 = 4,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHBP enable.
    eEN EN : 1;
    // read-only - AHBP size.
    eSZ SZ : 3;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_AHBPCR &ref() { return *reinterpret_cast<volatile SCB_CM7_AHBPCR*>(0xE000EF98); }
};

// L1 Cache Control Register
union SCB_CM7_CACR {
  
  // Shared cacheable-is-WT for data cache. Enables limited cache coherency usage.
  enum class eSIWT : uint32_t {
    // Normal Cacheable Shared locations are treated as being Non-cacheable. Default mode of operation for Shared memory.
    eSIWT_0 = 0,
    // Normal Cacheable shared locations are treated as Write-Through.
    eSIWT_1 = 1,
  };
  
  // Enables ECC in the instruction and data cache.
  enum class eECCDIS : uint32_t {
    // Enables ECC in the instruction and data cache.
    eECCDIS_0 = 0,
    // Disables ECC in the instruction and data cache.
    eECCDIS_1 = 1,
  };
  
  // Enables Force Write-Through in the data cache.
  enum class eFORCEWT : uint32_t {
    // Disables Force Write-Through.
    eFORCEWT_0 = 0,
    // Enables Force Write-Through. All Cacheable memory regions are treated as Write-Through.
    eFORCEWT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Shared cacheable-is-WT for data cache. Enables limited cache coherency usage.
    eSIWT SIWT : 1;
    // read-write - Enables ECC in the instruction and data cache.
    eECCDIS ECCDIS : 1;
    // read-write - Enables Force Write-Through in the data cache.
    eFORCEWT FORCEWT : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_CACR &ref() { return *reinterpret_cast<volatile SCB_CM7_CACR*>(0xE000EF9C); }
};

// AHB Slave Control Register
union SCB_CM7_AHBSCR {
  
  // AHBS prioritization control.
  enum class eCTL : uint32_t {
    // AHBS access priority demoted. This is the reset value.
    eCTL_0 = 0,
    // Software access priority demoted.
    eCTL_1 = 1,
    // AHBS access priority demoted by initializing the fairness counter to the CM7_AHBSCR[INITCOUNT] value when the software execution priority is higher than or equal to the threshold level programed in CM7_AHBSCR[TPRI].
    eCTL_2 = 2,
    // AHBSPRI signal has control of access priority.
    eCTL_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - AHBS prioritization control.
    eCTL CTL : 2;
    // read-write - Threshold execution priority for AHBS traffic demotion.
    uint32_t TPRI : 9;
    // read-write - Fairness counter initialization value.
    uint32_t INITCOUNT : 5;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_AHBSCR &ref() { return *reinterpret_cast<volatile SCB_CM7_AHBSCR*>(0xE000EFA0); }
};

// Auxiliary Bus Fault Status Register
union SCB_CM7_ABFSR {
  
  // Indicates the type of fault on the AXIM interface. Only valid when AXIM is 1.
  enum class eAXIMTYPE : uint32_t {
    // OKAY.
    eAXIMTYPE_0 = 0,
    // EXOKAY.
    eAXIMTYPE_1 = 1,
    // SLVERR.
    eAXIMTYPE_2 = 2,
    // DECERR.
    eAXIMTYPE_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Asynchronous fault on ITCM interface.
    uint32_t ITCM : 1;
    // read-write - Asynchronous fault on DTCM interface.
    uint32_t DTCM : 1;
    // read-write - Asynchronous fault on AHBP interface.
    uint32_t AHBP : 1;
    // read-write - Asynchronous fault on AXIM interface.
    uint32_t AXIM : 1;
    // read-write - Asynchronous fault on EPPB interface.
    uint32_t EPPB : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Indicates the type of fault on the AXIM interface. Only valid when AXIM is 1.
    eAXIMTYPE AXIMTYPE : 2;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SCB_CM7_ABFSR &ref() { return *reinterpret_cast<volatile SCB_CM7_ABFSR*>(0xE000EFA8); }
};


} // namespace nCM7_SystemControl