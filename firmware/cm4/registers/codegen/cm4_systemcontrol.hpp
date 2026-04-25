#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::cm4_systemcontrol {


// Auxiliary Control Register,
struct SCB_ACTLR_fields_ {
  // Disables interruption of multi-cycle instructions.
  using DISMCYCINT = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Disables write buffer use during default memory map accesses.
  using DISDEFWBUF = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Disables folding of IT instructions.
  using DISFOLD = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_ACTLR_fields_

struct SCB_ACTLR : ftl::mmio::Register<
    0xE000E008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_ACTLR_fields_::DISMCYCINT,
    SCB_ACTLR_fields_::DISDEFWBUF,
    SCB_ACTLR_fields_::DISFOLD,
    ftl::mmio::Reserved<29, 3>> {
  using DISMCYCINT = SCB_ACTLR_fields_::DISMCYCINT;
  using DISDEFWBUF = SCB_ACTLR_fields_::DISDEFWBUF;
  using DISFOLD = SCB_ACTLR_fields_::DISFOLD;
};


// CPUID Base Register
struct SCB_CPUID_fields_ {
  // Indicates patch release: 0x0 = Patch 0
  using REVISION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates part number
  using PARTNO = ftl::mmio::Field<12, 4, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates processor revision: 0x2 = Revision 2
  using VARIANT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Implementer code
  using IMPLEMENTER = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct SCB_CPUID_fields_

struct SCB_CPUID : ftl::mmio::Register<
    0xE000ED00u,
    std::uint32_t,
    0x410FC240u,
    ftl::mmio::RO,
    SCB_CPUID_fields_::REVISION,
    SCB_CPUID_fields_::PARTNO,
    ftl::mmio::Reserved<4, 16>,
    SCB_CPUID_fields_::VARIANT,
    SCB_CPUID_fields_::IMPLEMENTER> {
  using REVISION = SCB_CPUID_fields_::REVISION;
  using PARTNO = SCB_CPUID_fields_::PARTNO;
  using VARIANT = SCB_CPUID_fields_::VARIANT;
  using IMPLEMENTER = SCB_CPUID_fields_::IMPLEMENTER;
};


// Interrupt Control and State Register
struct SCB_ICSR_fields_ {

  enum class eRETTOBASE : std::uint32_t {
    // there are preempted active exceptions to execute
    eRETTOBASE_0 = 0,
    // there are no active exceptions, or the currently-executing exception is the only active exception
    eRETTOBASE_1 = 1,
  };

  enum class eISRPREEMPT : std::uint32_t {
    // Will not service
    eISRPREEMPT_0 = 0,
    // Will service a pending exception
    eISRPREEMPT_1 = 1,
  };

  enum class ePENDSTCLR : std::uint32_t {
    // no effect
    ePENDSTCLR_0 = 0,
    // removes the pending state from the SysTick exception
    ePENDSTCLR_1 = 1,
  };

  enum class ePENDSTSET : std::uint32_t {
    // write: no effect; read: SysTick exception is not pending
    ePENDSTSET_0 = 0,
    // write: changes SysTick exception state to pending; read: SysTick exception is pending
    ePENDSTSET_1 = 1,
  };

  enum class ePENDSVCLR : std::uint32_t {
    // no effect
    ePENDSVCLR_0 = 0,
    // removes the pending state from the PendSV exception
    ePENDSVCLR_1 = 1,
  };

  enum class ePENDSVSET : std::uint32_t {
    // write: no effect; read: PendSV exception is not pending
    ePENDSVSET_0 = 0,
    // write: changes PendSV exception state to pending; read: PendSV exception is pending
    ePENDSVSET_1 = 1,
  };

  enum class eNMIPENDSET : std::uint32_t {
    // write: no effect; read: NMI exception is not pending
    eNMIPENDSET_0 = 0,
    // write: changes NMI exception state to pending; read: NMI exception is pending
    eNMIPENDSET_1 = 1,
  };
  // Active exception number
  using VECTACTIVE = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // no description available
  using RETTOBASE = ftl::mmio::Field<1, 11, eRETTOBASE, ftl::mmio::RO, ftl::mmio::Normal>;
  // Exception number of the highest priority pending enabled exception
  using VECTPENDING = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // no description available
  using ISRPENDING = ftl::mmio::Field<1, 22, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // no description available
  using ISRPREEMPT = ftl::mmio::Field<1, 23, eISRPREEMPT, ftl::mmio::RO, ftl::mmio::Normal>;
  // no description available
  using PENDSTCLR = ftl::mmio::Field<1, 25, ePENDSTCLR, ftl::mmio::WO, ftl::mmio::Normal>;
  // no description available
  using PENDSTSET = ftl::mmio::Field<1, 26, ePENDSTSET, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using PENDSVCLR = ftl::mmio::Field<1, 27, ePENDSVCLR, ftl::mmio::WO, ftl::mmio::Normal>;
  // no description available
  using PENDSVSET = ftl::mmio::Field<1, 28, ePENDSVSET, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using NMIPENDSET = ftl::mmio::Field<1, 31, eNMIPENDSET, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_ICSR_fields_

struct SCB_ICSR : ftl::mmio::Register<
    0xE000ED04u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_ICSR_fields_::VECTACTIVE,
    ftl::mmio::Reserved<2, 9>,
    SCB_ICSR_fields_::RETTOBASE,
    SCB_ICSR_fields_::VECTPENDING,
    ftl::mmio::Reserved<4, 18>,
    SCB_ICSR_fields_::ISRPENDING,
    SCB_ICSR_fields_::ISRPREEMPT,
    ftl::mmio::Reserved<1, 24>,
    SCB_ICSR_fields_::PENDSTCLR,
    SCB_ICSR_fields_::PENDSTSET,
    SCB_ICSR_fields_::PENDSVCLR,
    SCB_ICSR_fields_::PENDSVSET,
    ftl::mmio::Reserved<2, 29>,
    SCB_ICSR_fields_::NMIPENDSET> {
  using eRETTOBASE = SCB_ICSR_fields_::eRETTOBASE;
  using eISRPREEMPT = SCB_ICSR_fields_::eISRPREEMPT;
  using ePENDSTCLR = SCB_ICSR_fields_::ePENDSTCLR;
  using ePENDSTSET = SCB_ICSR_fields_::ePENDSTSET;
  using ePENDSVCLR = SCB_ICSR_fields_::ePENDSVCLR;
  using ePENDSVSET = SCB_ICSR_fields_::ePENDSVSET;
  using eNMIPENDSET = SCB_ICSR_fields_::eNMIPENDSET;
  using VECTACTIVE = SCB_ICSR_fields_::VECTACTIVE;
  using RETTOBASE = SCB_ICSR_fields_::RETTOBASE;
  using VECTPENDING = SCB_ICSR_fields_::VECTPENDING;
  using ISRPENDING = SCB_ICSR_fields_::ISRPENDING;
  using ISRPREEMPT = SCB_ICSR_fields_::ISRPREEMPT;
  using PENDSTCLR = SCB_ICSR_fields_::PENDSTCLR;
  using PENDSTSET = SCB_ICSR_fields_::PENDSTSET;
  using PENDSVCLR = SCB_ICSR_fields_::PENDSVCLR;
  using PENDSVSET = SCB_ICSR_fields_::PENDSVSET;
  using NMIPENDSET = SCB_ICSR_fields_::NMIPENDSET;
};


// Vector Table Offset Register
struct SCB_VTOR_fields_ {
  // Vector table base offset
  using TBLOFF = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_VTOR_fields_

struct SCB_VTOR : ftl::mmio::Register<
    0xE000ED08u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<7, 0>,
    SCB_VTOR_fields_::TBLOFF> {
  using TBLOFF = SCB_VTOR_fields_::TBLOFF;
};


// Application Interrupt and Reset Control Register
struct SCB_AIRCR_fields_ {

  enum class eSYSRESETREQ : std::uint32_t {
    // no system reset request
    eSYSRESETREQ_0 = 0,
    // asserts a signal to the outer system that requests a reset
    eSYSRESETREQ_1 = 1,
  };

  enum class eENDIANNESS : std::uint32_t {
    // Little-endian
    eENDIANNESS_0 = 0,
    // Big-endian
    eENDIANNESS_1 = 1,
  };
  // no description available
  using VECTRESET = ftl::mmio::Field<1, 0, bool, ftl::mmio::WO, ftl::mmio::Normal>;
  // no description available
  using VECTCLRACTIVE = ftl::mmio::Field<1, 1, bool, ftl::mmio::WO, ftl::mmio::Normal>;
  // no description available
  using SYSRESETREQ = ftl::mmio::Field<1, 2, eSYSRESETREQ, ftl::mmio::WO, ftl::mmio::Normal>;
  // Interrupt priority grouping field. This field determines the split of group priority from subpriority.
  using PRIGROUP = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using ENDIANNESS = ftl::mmio::Field<1, 15, eENDIANNESS, ftl::mmio::RO, ftl::mmio::Normal>;
  // Register key
  using VECTKEY = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_AIRCR_fields_

struct SCB_AIRCR : ftl::mmio::Register<
    0xE000ED0Cu,
    std::uint32_t,
    0xFA050000u,
    ftl::mmio::RW,
    SCB_AIRCR_fields_::VECTRESET,
    SCB_AIRCR_fields_::VECTCLRACTIVE,
    SCB_AIRCR_fields_::SYSRESETREQ,
    ftl::mmio::Reserved<5, 3>,
    SCB_AIRCR_fields_::PRIGROUP,
    ftl::mmio::Reserved<4, 11>,
    SCB_AIRCR_fields_::ENDIANNESS,
    SCB_AIRCR_fields_::VECTKEY> {
  using eSYSRESETREQ = SCB_AIRCR_fields_::eSYSRESETREQ;
  using eENDIANNESS = SCB_AIRCR_fields_::eENDIANNESS;
  using VECTRESET = SCB_AIRCR_fields_::VECTRESET;
  using VECTCLRACTIVE = SCB_AIRCR_fields_::VECTCLRACTIVE;
  using SYSRESETREQ = SCB_AIRCR_fields_::SYSRESETREQ;
  using PRIGROUP = SCB_AIRCR_fields_::PRIGROUP;
  using ENDIANNESS = SCB_AIRCR_fields_::ENDIANNESS;
  using VECTKEY = SCB_AIRCR_fields_::VECTKEY;
};


// System Control Register
struct SCB_SCR_fields_ {

  enum class eSLEEPONEXIT : std::uint32_t {
    // o not sleep when returning to Thread mode
    eSLEEPONEXIT_0 = 0,
    // enter sleep, or deep sleep, on return from an ISR
    eSLEEPONEXIT_1 = 1,
  };

  enum class eSLEEPDEEP : std::uint32_t {
    // sleep
    eSLEEPDEEP_0 = 0,
    // deep sleep
    eSLEEPDEEP_1 = 1,
  };

  enum class eSEVONPEND : std::uint32_t {
    // only enabled interrupts or events can wakeup the processor, disabled interrupts are excluded
    eSEVONPEND_0 = 0,
    // enabled events and all interrupts, including disabled interrupts, can wakeup the processor
    eSEVONPEND_1 = 1,
  };
  // no description available
  using SLEEPONEXIT = ftl::mmio::Field<1, 1, eSLEEPONEXIT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using SLEEPDEEP = ftl::mmio::Field<1, 2, eSLEEPDEEP, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using SEVONPEND = ftl::mmio::Field<1, 4, eSEVONPEND, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_SCR_fields_

struct SCB_SCR : ftl::mmio::Register<
    0xE000ED10u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SCB_SCR_fields_::SLEEPONEXIT,
    SCB_SCR_fields_::SLEEPDEEP,
    ftl::mmio::Reserved<1, 3>,
    SCB_SCR_fields_::SEVONPEND,
    ftl::mmio::Reserved<27, 5>> {
  using eSLEEPONEXIT = SCB_SCR_fields_::eSLEEPONEXIT;
  using eSLEEPDEEP = SCB_SCR_fields_::eSLEEPDEEP;
  using eSEVONPEND = SCB_SCR_fields_::eSEVONPEND;
  using SLEEPONEXIT = SCB_SCR_fields_::SLEEPONEXIT;
  using SLEEPDEEP = SCB_SCR_fields_::SLEEPDEEP;
  using SEVONPEND = SCB_SCR_fields_::SEVONPEND;
};


// Configuration and Control Register
struct SCB_CCR_fields_ {

  enum class eNONBASETHRDENA : std::uint32_t {
    // processor can enter Thread mode only when no exception is active
    eNONBASETHRDENA_0 = 0,
    // processor can enter Thread mode from any level under the control of an EXC_RETURN value
    eNONBASETHRDENA_1 = 1,
  };

  enum class eUSERSETMPEND : std::uint32_t {
    // disable
    eUSERSETMPEND_0 = 0,
    // enable
    eUSERSETMPEND_1 = 1,
  };

  enum class eUNALIGN_TRP : std::uint32_t {
    // do not trap unaligned halfword and word accesses
    eUNALIGN_TRP_0 = 0,
    // trap unaligned halfword and word accesses
    eUNALIGN_TRP_1 = 1,
  };

  enum class eDIV_0_TRP : std::uint32_t {
    // do not trap divide by 0
    eDIV_0_TRP_0 = 0,
    // trap divide by 0
    eDIV_0_TRP_1 = 1,
  };

  enum class eBFHFNMIGN : std::uint32_t {
    // data bus faults caused by load and store instructions cause a lock-up
    eBFHFNMIGN_0 = 0,
    // handlers running at priority -1 and -2 ignore data bus faults caused by load and store instructions
    eBFHFNMIGN_1 = 1,
  };

  enum class eSTKALIGN : std::uint32_t {
    // 4-byte aligned
    eSTKALIGN_0 = 0,
    // 8-byte aligned
    eSTKALIGN_1 = 1,
  };
  // no description available
  using NONBASETHRDENA = ftl::mmio::Field<1, 0, eNONBASETHRDENA, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables unprivileged software access to the STIR
  using USERSETMPEND = ftl::mmio::Field<1, 1, eUSERSETMPEND, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables unaligned access traps
  using UNALIGN_TRP = ftl::mmio::Field<1, 3, eUNALIGN_TRP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0
  using DIV_0_TRP = ftl::mmio::Field<1, 4, eDIV_0_TRP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.
  using BFHFNMIGN = ftl::mmio::Field<1, 8, eBFHFNMIGN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates stack alignment on exception entry
  using STKALIGN = ftl::mmio::Field<1, 9, eSTKALIGN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_CCR_fields_

struct SCB_CCR : ftl::mmio::Register<
    0xE000ED14u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_CCR_fields_::NONBASETHRDENA,
    SCB_CCR_fields_::USERSETMPEND,
    ftl::mmio::Reserved<1, 2>,
    SCB_CCR_fields_::UNALIGN_TRP,
    SCB_CCR_fields_::DIV_0_TRP,
    ftl::mmio::Reserved<3, 5>,
    SCB_CCR_fields_::BFHFNMIGN,
    SCB_CCR_fields_::STKALIGN,
    ftl::mmio::Reserved<22, 10>> {
  using eNONBASETHRDENA = SCB_CCR_fields_::eNONBASETHRDENA;
  using eUSERSETMPEND = SCB_CCR_fields_::eUSERSETMPEND;
  using eUNALIGN_TRP = SCB_CCR_fields_::eUNALIGN_TRP;
  using eDIV_0_TRP = SCB_CCR_fields_::eDIV_0_TRP;
  using eBFHFNMIGN = SCB_CCR_fields_::eBFHFNMIGN;
  using eSTKALIGN = SCB_CCR_fields_::eSTKALIGN;
  using NONBASETHRDENA = SCB_CCR_fields_::NONBASETHRDENA;
  using USERSETMPEND = SCB_CCR_fields_::USERSETMPEND;
  using UNALIGN_TRP = SCB_CCR_fields_::UNALIGN_TRP;
  using DIV_0_TRP = SCB_CCR_fields_::DIV_0_TRP;
  using BFHFNMIGN = SCB_CCR_fields_::BFHFNMIGN;
  using STKALIGN = SCB_CCR_fields_::STKALIGN;
};


// System Handler Priority Register 1
struct SCB_SHPR1_fields_ {
  // Priority of system handler 4, MemManage
  using PRI_4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Priority of system handler 5, BusFault
  using PRI_5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Priority of system handler 6, UsageFault
  using PRI_6 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_SHPR1_fields_

struct SCB_SHPR1 : ftl::mmio::Register<
    0xE000ED18u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_SHPR1_fields_::PRI_4,
    SCB_SHPR1_fields_::PRI_5,
    SCB_SHPR1_fields_::PRI_6,
    ftl::mmio::Reserved<8, 24>> {
  using PRI_4 = SCB_SHPR1_fields_::PRI_4;
  using PRI_5 = SCB_SHPR1_fields_::PRI_5;
  using PRI_6 = SCB_SHPR1_fields_::PRI_6;
};


// System Handler Priority Register 2
struct SCB_SHPR2_fields_ {
  // Priority of system handler 11, SVCall
  using PRI_11 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_SHPR2_fields_

struct SCB_SHPR2 : ftl::mmio::Register<
    0xE000ED1Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    SCB_SHPR2_fields_::PRI_11> {
  using PRI_11 = SCB_SHPR2_fields_::PRI_11;
};


// System Handler Priority Register 3
struct SCB_SHPR3_fields_ {
  // Priority of system handler 14, PendSV
  using PRI_14 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Priority of system handler 15, SysTick exception
  using PRI_15 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_SHPR3_fields_

struct SCB_SHPR3 : ftl::mmio::Register<
    0xE000ED20u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<16, 0>,
    SCB_SHPR3_fields_::PRI_14,
    SCB_SHPR3_fields_::PRI_15> {
  using PRI_14 = SCB_SHPR3_fields_::PRI_14;
  using PRI_15 = SCB_SHPR3_fields_::PRI_15;
};


// System Handler Control and State Register
struct SCB_SHCSR_fields_ {

  enum class eMEMFAULTACT : std::uint32_t {
    // exception is not active
    eMEMFAULTACT_0 = 0,
    // exception is active
    eMEMFAULTACT_1 = 1,
  };

  enum class eBUSFAULTACT : std::uint32_t {
    // exception is not active
    eBUSFAULTACT_0 = 0,
    // exception is active
    eBUSFAULTACT_1 = 1,
  };

  enum class eUSGFAULTACT : std::uint32_t {
    // exception is not active
    eUSGFAULTACT_0 = 0,
    // exception is active
    eUSGFAULTACT_1 = 1,
  };

  enum class eSVCALLACT : std::uint32_t {
    // exception is not active
    eSVCALLACT_0 = 0,
    // exception is active
    eSVCALLACT_1 = 1,
  };

  enum class eMONITORACT : std::uint32_t {
    // exception is not active
    eMONITORACT_0 = 0,
    // exception is active
    eMONITORACT_1 = 1,
  };

  enum class ePENDSVACT : std::uint32_t {
    // exception is not active
    ePENDSVACT_0 = 0,
    // exception is active
    ePENDSVACT_1 = 1,
  };

  enum class eSYSTICKACT : std::uint32_t {
    // exception is not active
    eSYSTICKACT_0 = 0,
    // exception is active
    eSYSTICKACT_1 = 1,
  };

  enum class eUSGFAULTPENDED : std::uint32_t {
    // exception is not pending
    eUSGFAULTPENDED_0 = 0,
    // exception is pending
    eUSGFAULTPENDED_1 = 1,
  };

  enum class eMEMFAULTPENDED : std::uint32_t {
    // exception is not pending
    eMEMFAULTPENDED_0 = 0,
    // exception is pending
    eMEMFAULTPENDED_1 = 1,
  };

  enum class eBUSFAULTPENDED : std::uint32_t {
    // exception is not pending
    eBUSFAULTPENDED_0 = 0,
    // exception is pending
    eBUSFAULTPENDED_1 = 1,
  };

  enum class eSVCALLPENDED : std::uint32_t {
    // exception is not pending
    eSVCALLPENDED_0 = 0,
    // exception is pending
    eSVCALLPENDED_1 = 1,
  };

  enum class eMEMFAULTENA : std::uint32_t {
    // disable the exception
    eMEMFAULTENA_0 = 0,
    // enable the exception
    eMEMFAULTENA_1 = 1,
  };

  enum class eBUSFAULTENA : std::uint32_t {
    // disable the exception
    eBUSFAULTENA_0 = 0,
    // enable the exception
    eBUSFAULTENA_1 = 1,
  };

  enum class eUSGFAULTENA : std::uint32_t {
    // disable the exception
    eUSGFAULTENA_0 = 0,
    // enable the exception
    eUSGFAULTENA_1 = 1,
  };
  // no description available
  using MEMFAULTACT = ftl::mmio::Field<1, 0, eMEMFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using BUSFAULTACT = ftl::mmio::Field<1, 1, eBUSFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using USGFAULTACT = ftl::mmio::Field<1, 3, eUSGFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using SVCALLACT = ftl::mmio::Field<1, 7, eSVCALLACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MONITORACT = ftl::mmio::Field<1, 8, eMONITORACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using PENDSVACT = ftl::mmio::Field<1, 10, ePENDSVACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using SYSTICKACT = ftl::mmio::Field<1, 11, eSYSTICKACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using USGFAULTPENDED = ftl::mmio::Field<1, 12, eUSGFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MEMFAULTPENDED = ftl::mmio::Field<1, 13, eMEMFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using BUSFAULTPENDED = ftl::mmio::Field<1, 14, eBUSFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using SVCALLPENDED = ftl::mmio::Field<1, 15, eSVCALLPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MEMFAULTENA = ftl::mmio::Field<1, 16, eMEMFAULTENA, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using BUSFAULTENA = ftl::mmio::Field<1, 17, eBUSFAULTENA, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using USGFAULTENA = ftl::mmio::Field<1, 18, eUSGFAULTENA, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_SHCSR_fields_

struct SCB_SHCSR : ftl::mmio::Register<
    0xE000ED24u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_SHCSR_fields_::MEMFAULTACT,
    SCB_SHCSR_fields_::BUSFAULTACT,
    ftl::mmio::Reserved<1, 2>,
    SCB_SHCSR_fields_::USGFAULTACT,
    ftl::mmio::Reserved<3, 4>,
    SCB_SHCSR_fields_::SVCALLACT,
    SCB_SHCSR_fields_::MONITORACT,
    ftl::mmio::Reserved<1, 9>,
    SCB_SHCSR_fields_::PENDSVACT,
    SCB_SHCSR_fields_::SYSTICKACT,
    SCB_SHCSR_fields_::USGFAULTPENDED,
    SCB_SHCSR_fields_::MEMFAULTPENDED,
    SCB_SHCSR_fields_::BUSFAULTPENDED,
    SCB_SHCSR_fields_::SVCALLPENDED,
    SCB_SHCSR_fields_::MEMFAULTENA,
    SCB_SHCSR_fields_::BUSFAULTENA,
    SCB_SHCSR_fields_::USGFAULTENA,
    ftl::mmio::Reserved<13, 19>> {
  using eMEMFAULTACT = SCB_SHCSR_fields_::eMEMFAULTACT;
  using eBUSFAULTACT = SCB_SHCSR_fields_::eBUSFAULTACT;
  using eUSGFAULTACT = SCB_SHCSR_fields_::eUSGFAULTACT;
  using eSVCALLACT = SCB_SHCSR_fields_::eSVCALLACT;
  using eMONITORACT = SCB_SHCSR_fields_::eMONITORACT;
  using ePENDSVACT = SCB_SHCSR_fields_::ePENDSVACT;
  using eSYSTICKACT = SCB_SHCSR_fields_::eSYSTICKACT;
  using eUSGFAULTPENDED = SCB_SHCSR_fields_::eUSGFAULTPENDED;
  using eMEMFAULTPENDED = SCB_SHCSR_fields_::eMEMFAULTPENDED;
  using eBUSFAULTPENDED = SCB_SHCSR_fields_::eBUSFAULTPENDED;
  using eSVCALLPENDED = SCB_SHCSR_fields_::eSVCALLPENDED;
  using eMEMFAULTENA = SCB_SHCSR_fields_::eMEMFAULTENA;
  using eBUSFAULTENA = SCB_SHCSR_fields_::eBUSFAULTENA;
  using eUSGFAULTENA = SCB_SHCSR_fields_::eUSGFAULTENA;
  using MEMFAULTACT = SCB_SHCSR_fields_::MEMFAULTACT;
  using BUSFAULTACT = SCB_SHCSR_fields_::BUSFAULTACT;
  using USGFAULTACT = SCB_SHCSR_fields_::USGFAULTACT;
  using SVCALLACT = SCB_SHCSR_fields_::SVCALLACT;
  using MONITORACT = SCB_SHCSR_fields_::MONITORACT;
  using PENDSVACT = SCB_SHCSR_fields_::PENDSVACT;
  using SYSTICKACT = SCB_SHCSR_fields_::SYSTICKACT;
  using USGFAULTPENDED = SCB_SHCSR_fields_::USGFAULTPENDED;
  using MEMFAULTPENDED = SCB_SHCSR_fields_::MEMFAULTPENDED;
  using BUSFAULTPENDED = SCB_SHCSR_fields_::BUSFAULTPENDED;
  using SVCALLPENDED = SCB_SHCSR_fields_::SVCALLPENDED;
  using MEMFAULTENA = SCB_SHCSR_fields_::MEMFAULTENA;
  using BUSFAULTENA = SCB_SHCSR_fields_::BUSFAULTENA;
  using USGFAULTENA = SCB_SHCSR_fields_::USGFAULTENA;
};


// Configurable Fault Status Registers
struct SCB_CFSR_fields_ {

  enum class eIACCVIOL : std::uint32_t {
    // no instruction access violation fault
    eIACCVIOL_0 = 0,
    // the processor attempted an instruction fetch from a location that does not permit execution
    eIACCVIOL_1 = 1,
  };

  enum class eDACCVIOL : std::uint32_t {
    // no data access violation fault
    eDACCVIOL_0 = 0,
    // the processor attempted a load or store at a location that does not permit the operation
    eDACCVIOL_1 = 1,
  };

  enum class eMUNSTKERR : std::uint32_t {
    // no unstacking fault
    eMUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more access violations
    eMUNSTKERR_1 = 1,
  };

  enum class eMSTKERR : std::uint32_t {
    // no stacking fault
    eMSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more access violations
    eMSTKERR_1 = 1,
  };

  enum class eMLSPERR : std::uint32_t {
    // No MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_0 = 0,
    // A MemManage fault occurred during floating-point lazy state preservation
    eMLSPERR_1 = 1,
  };

  enum class eMMARVALID : std::uint32_t {
    // value in MMAR is not a valid fault address
    eMMARVALID_0 = 0,
    // MMAR holds a valid fault address
    eMMARVALID_1 = 1,
  };

  enum class eIBUSERR : std::uint32_t {
    // no instruction bus error
    eIBUSERR_0 = 0,
    // instruction bus error
    eIBUSERR_1 = 1,
  };

  enum class ePRECISERR : std::uint32_t {
    // no precise data bus error
    ePRECISERR_0 = 0,
    // a data bus error has occurred, and the PC value stacked for the exception return points to the instruction that caused the fault
    ePRECISERR_1 = 1,
  };

  enum class eIMPRECISERR : std::uint32_t {
    // no imprecise data bus error
    eIMPRECISERR_0 = 0,
    // a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error
    eIMPRECISERR_1 = 1,
  };

  enum class eUNSTKERR : std::uint32_t {
    // no unstacking fault
    eUNSTKERR_0 = 0,
    // unstack for an exception return has caused one or more BusFaults
    eUNSTKERR_1 = 1,
  };

  enum class eSTKERR : std::uint32_t {
    // no stacking fault
    eSTKERR_0 = 0,
    // stacking for an exception entry has caused one or more BusFaults
    eSTKERR_1 = 1,
  };

  enum class eLSPERR : std::uint32_t {
    // No bus fault occurred during floating-point lazy state preservation
    eLSPERR_0 = 0,
    // A bus fault occurred during floating-point lazy state preservation
    eLSPERR_1 = 1,
  };

  enum class eBFARVALID : std::uint32_t {
    // value in BFAR is not a valid fault address
    eBFARVALID_0 = 0,
    // BFAR holds a valid fault address
    eBFARVALID_1 = 1,
  };

  enum class eUNDEFINSTR : std::uint32_t {
    // no undefined instruction UsageFault
    eUNDEFINSTR_0 = 0,
    // the processor has attempted to execute an undefined instruction
    eUNDEFINSTR_1 = 1,
  };

  enum class eINVSTATE : std::uint32_t {
    // no invalid state UsageFault
    eINVSTATE_0 = 0,
    // the processor has attempted to execute an instruction that makes illegal use of the EPSR
    eINVSTATE_1 = 1,
  };

  enum class eINVPC : std::uint32_t {
    // no invalid PC load UsageFault
    eINVPC_0 = 0,
    // the processor has attempted an illegal load of EXC_RETURN to the PC
    eINVPC_1 = 1,
  };

  enum class eNOCP : std::uint32_t {
    // no UsageFault caused by attempting to access a coprocessor
    eNOCP_0 = 0,
    // the processor has attempted to access a coprocessor
    eNOCP_1 = 1,
  };

  enum class eUNALIGNED : std::uint32_t {
    // no unaligned access fault, or unaligned access trapping not enabled
    eUNALIGNED_0 = 0,
    // the processor has made an unaligned memory access
    eUNALIGNED_1 = 1,
  };

  enum class eDIVBYZERO : std::uint32_t {
    // no divide by zero fault, or divide by zero trapping not enabled
    eDIVBYZERO_0 = 0,
    // the processor has executed an SDIV or UDIV instruction with a divisor of 0
    eDIVBYZERO_1 = 1,
  };
  // no description available
  using IACCVIOL = ftl::mmio::Field<1, 0, eIACCVIOL, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using DACCVIOL = ftl::mmio::Field<1, 1, eDACCVIOL, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MUNSTKERR = ftl::mmio::Field<1, 3, eMUNSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MSTKERR = ftl::mmio::Field<1, 4, eMSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MLSPERR = ftl::mmio::Field<1, 5, eMLSPERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using MMARVALID = ftl::mmio::Field<1, 7, eMMARVALID, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using IBUSERR = ftl::mmio::Field<1, 8, eIBUSERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using PRECISERR = ftl::mmio::Field<1, 9, ePRECISERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using IMPRECISERR = ftl::mmio::Field<1, 10, eIMPRECISERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using UNSTKERR = ftl::mmio::Field<1, 11, eUNSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using STKERR = ftl::mmio::Field<1, 12, eSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using LSPERR = ftl::mmio::Field<1, 13, eLSPERR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using BFARVALID = ftl::mmio::Field<1, 15, eBFARVALID, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using UNDEFINSTR = ftl::mmio::Field<1, 16, eUNDEFINSTR, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using INVSTATE = ftl::mmio::Field<1, 17, eINVSTATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using INVPC = ftl::mmio::Field<1, 18, eINVPC, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using NOCP = ftl::mmio::Field<1, 19, eNOCP, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using UNALIGNED = ftl::mmio::Field<1, 24, eUNALIGNED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using DIVBYZERO = ftl::mmio::Field<1, 25, eDIVBYZERO, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_CFSR_fields_

struct SCB_CFSR : ftl::mmio::Register<
    0xE000ED28u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_CFSR_fields_::IACCVIOL,
    SCB_CFSR_fields_::DACCVIOL,
    ftl::mmio::Reserved<1, 2>,
    SCB_CFSR_fields_::MUNSTKERR,
    SCB_CFSR_fields_::MSTKERR,
    SCB_CFSR_fields_::MLSPERR,
    ftl::mmio::Reserved<1, 6>,
    SCB_CFSR_fields_::MMARVALID,
    SCB_CFSR_fields_::IBUSERR,
    SCB_CFSR_fields_::PRECISERR,
    SCB_CFSR_fields_::IMPRECISERR,
    SCB_CFSR_fields_::UNSTKERR,
    SCB_CFSR_fields_::STKERR,
    SCB_CFSR_fields_::LSPERR,
    ftl::mmio::Reserved<1, 14>,
    SCB_CFSR_fields_::BFARVALID,
    SCB_CFSR_fields_::UNDEFINSTR,
    SCB_CFSR_fields_::INVSTATE,
    SCB_CFSR_fields_::INVPC,
    SCB_CFSR_fields_::NOCP,
    ftl::mmio::Reserved<4, 20>,
    SCB_CFSR_fields_::UNALIGNED,
    SCB_CFSR_fields_::DIVBYZERO,
    ftl::mmio::Reserved<6, 26>> {
  using eIACCVIOL = SCB_CFSR_fields_::eIACCVIOL;
  using eDACCVIOL = SCB_CFSR_fields_::eDACCVIOL;
  using eMUNSTKERR = SCB_CFSR_fields_::eMUNSTKERR;
  using eMSTKERR = SCB_CFSR_fields_::eMSTKERR;
  using eMLSPERR = SCB_CFSR_fields_::eMLSPERR;
  using eMMARVALID = SCB_CFSR_fields_::eMMARVALID;
  using eIBUSERR = SCB_CFSR_fields_::eIBUSERR;
  using ePRECISERR = SCB_CFSR_fields_::ePRECISERR;
  using eIMPRECISERR = SCB_CFSR_fields_::eIMPRECISERR;
  using eUNSTKERR = SCB_CFSR_fields_::eUNSTKERR;
  using eSTKERR = SCB_CFSR_fields_::eSTKERR;
  using eLSPERR = SCB_CFSR_fields_::eLSPERR;
  using eBFARVALID = SCB_CFSR_fields_::eBFARVALID;
  using eUNDEFINSTR = SCB_CFSR_fields_::eUNDEFINSTR;
  using eINVSTATE = SCB_CFSR_fields_::eINVSTATE;
  using eINVPC = SCB_CFSR_fields_::eINVPC;
  using eNOCP = SCB_CFSR_fields_::eNOCP;
  using eUNALIGNED = SCB_CFSR_fields_::eUNALIGNED;
  using eDIVBYZERO = SCB_CFSR_fields_::eDIVBYZERO;
  using IACCVIOL = SCB_CFSR_fields_::IACCVIOL;
  using DACCVIOL = SCB_CFSR_fields_::DACCVIOL;
  using MUNSTKERR = SCB_CFSR_fields_::MUNSTKERR;
  using MSTKERR = SCB_CFSR_fields_::MSTKERR;
  using MLSPERR = SCB_CFSR_fields_::MLSPERR;
  using MMARVALID = SCB_CFSR_fields_::MMARVALID;
  using IBUSERR = SCB_CFSR_fields_::IBUSERR;
  using PRECISERR = SCB_CFSR_fields_::PRECISERR;
  using IMPRECISERR = SCB_CFSR_fields_::IMPRECISERR;
  using UNSTKERR = SCB_CFSR_fields_::UNSTKERR;
  using STKERR = SCB_CFSR_fields_::STKERR;
  using LSPERR = SCB_CFSR_fields_::LSPERR;
  using BFARVALID = SCB_CFSR_fields_::BFARVALID;
  using UNDEFINSTR = SCB_CFSR_fields_::UNDEFINSTR;
  using INVSTATE = SCB_CFSR_fields_::INVSTATE;
  using INVPC = SCB_CFSR_fields_::INVPC;
  using NOCP = SCB_CFSR_fields_::NOCP;
  using UNALIGNED = SCB_CFSR_fields_::UNALIGNED;
  using DIVBYZERO = SCB_CFSR_fields_::DIVBYZERO;
};


// HardFault Status register
struct SCB_HFSR_fields_ {

  enum class eVECTTBL : std::uint32_t {
    // no BusFault on vector table read
    eVECTTBL_0 = 0,
    // BusFault on vector table read
    eVECTTBL_1 = 1,
  };

  enum class eFORCED : std::uint32_t {
    // no forced HardFault
    eFORCED_0 = 0,
    // forced HardFault
    eFORCED_1 = 1,
  };
  // no description available
  using VECTTBL = ftl::mmio::Field<1, 1, eVECTTBL, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using FORCED = ftl::mmio::Field<1, 30, eFORCED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using DEBUGEVT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_HFSR_fields_

struct SCB_HFSR : ftl::mmio::Register<
    0xE000ED2Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SCB_HFSR_fields_::VECTTBL,
    ftl::mmio::Reserved<28, 2>,
    SCB_HFSR_fields_::FORCED,
    SCB_HFSR_fields_::DEBUGEVT> {
  using eVECTTBL = SCB_HFSR_fields_::eVECTTBL;
  using eFORCED = SCB_HFSR_fields_::eFORCED;
  using VECTTBL = SCB_HFSR_fields_::VECTTBL;
  using FORCED = SCB_HFSR_fields_::FORCED;
  using DEBUGEVT = SCB_HFSR_fields_::DEBUGEVT;
};


// Debug Fault Status Register
struct SCB_DFSR_fields_ {

  enum class eHALTED : std::uint32_t {
    // No active halt request debug event
    eHALTED_0 = 0,
    // Halt request debug event active
    eHALTED_1 = 1,
  };

  enum class eBKPT : std::uint32_t {
    // No current breakpoint debug event
    eBKPT_0 = 0,
    // At least one current breakpoint debug event
    eBKPT_1 = 1,
  };

  enum class eDWTTRAP : std::uint32_t {
    // No current debug events generated by the DWT
    eDWTTRAP_0 = 0,
    // At least one current debug event generated by the DWT
    eDWTTRAP_1 = 1,
  };

  enum class eVCATCH : std::uint32_t {
    // No Vector catch triggered
    eVCATCH_0 = 0,
    // Vector catch triggered
    eVCATCH_1 = 1,
  };

  enum class eEXTERNAL : std::uint32_t {
    // No EDBGRQ debug event
    eEXTERNAL_0 = 0,
    // EDBGRQ debug event
    eEXTERNAL_1 = 1,
  };
  // no description available
  using HALTED = ftl::mmio::Field<1, 0, eHALTED, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using BKPT = ftl::mmio::Field<1, 1, eBKPT, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using DWTTRAP = ftl::mmio::Field<1, 2, eDWTTRAP, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using VCATCH = ftl::mmio::Field<1, 3, eVCATCH, ftl::mmio::RW, ftl::mmio::Normal>;
  // no description available
  using EXTERNAL = ftl::mmio::Field<1, 4, eEXTERNAL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_DFSR_fields_

struct SCB_DFSR : ftl::mmio::Register<
    0xE000ED30u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_DFSR_fields_::HALTED,
    SCB_DFSR_fields_::BKPT,
    SCB_DFSR_fields_::DWTTRAP,
    SCB_DFSR_fields_::VCATCH,
    SCB_DFSR_fields_::EXTERNAL,
    ftl::mmio::Reserved<27, 5>> {
  using eHALTED = SCB_DFSR_fields_::eHALTED;
  using eBKPT = SCB_DFSR_fields_::eBKPT;
  using eDWTTRAP = SCB_DFSR_fields_::eDWTTRAP;
  using eVCATCH = SCB_DFSR_fields_::eVCATCH;
  using eEXTERNAL = SCB_DFSR_fields_::eEXTERNAL;
  using HALTED = SCB_DFSR_fields_::HALTED;
  using BKPT = SCB_DFSR_fields_::BKPT;
  using DWTTRAP = SCB_DFSR_fields_::DWTTRAP;
  using VCATCH = SCB_DFSR_fields_::VCATCH;
  using EXTERNAL = SCB_DFSR_fields_::EXTERNAL;
};


// MemManage Address Register
struct SCB_MMFAR_fields_ {
  // Address of MemManage fault location
  using ADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_MMFAR_fields_

struct SCB_MMFAR : ftl::mmio::Register<
    0xE000ED34u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_MMFAR_fields_::ADDRESS> {
  using ADDRESS = SCB_MMFAR_fields_::ADDRESS;
};


// BusFault Address Register
struct SCB_BFAR_fields_ {
  // Address of the BusFault location
  using ADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_BFAR_fields_

struct SCB_BFAR : ftl::mmio::Register<
    0xE000ED38u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_BFAR_fields_::ADDRESS> {
  using ADDRESS = SCB_BFAR_fields_::ADDRESS;
};


// Auxiliary Fault Status Register
struct SCB_AFSR_fields_ {
  // Latched version of the AUXFAULT inputs
  using AUXFAULT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_AFSR_fields_

struct SCB_AFSR : ftl::mmio::Register<
    0xE000ED3Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SCB_AFSR_fields_::AUXFAULT> {
  using AUXFAULT = SCB_AFSR_fields_::AUXFAULT;
};


// Coprocessor Access Control Register
struct SCB_CPACR_fields_ {

  enum class eCP10 : std::uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault
    eCP10_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP10_1 = 1,
    // Full access.
    eCP10_3 = 3,
  };

  enum class eCP11 : std::uint32_t {
    // Access denied. Any attempted access generates a NOCP UsageFault
    eCP11_0 = 0,
    // Privileged access only. An unprivileged access generates a NOCP fault.
    eCP11_1 = 1,
    // Full access.
    eCP11_3 = 3,
  };
  // Access privileges for coprocessor 10.
  using CP10 = ftl::mmio::Field<2, 20, eCP10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Access privileges for coprocessor 11.
  using CP11 = ftl::mmio::Field<2, 22, eCP11, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_CPACR_fields_

struct SCB_CPACR : ftl::mmio::Register<
    0xE000ED88u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<20, 0>,
    SCB_CPACR_fields_::CP10,
    SCB_CPACR_fields_::CP11,
    ftl::mmio::Reserved<8, 24>> {
  using eCP10 = SCB_CPACR_fields_::eCP10;
  using eCP11 = SCB_CPACR_fields_::eCP11;
  using CP10 = SCB_CPACR_fields_::CP10;
  using CP11 = SCB_CPACR_fields_::CP11;
};


// Floating-point Context Control Register
struct SCB_FPCCR_fields_ {

  enum class eLSPACT : std::uint32_t {
    // Lazy state preservation is not active.
    eLSPACT_0 = 0,
    // Lazy state preservation is active. floating-point stack frame has been allocated but saving state to it has been deferred.
    eLSPACT_1 = 1,
  };

  enum class eUSER : std::uint32_t {
    // Privilege level was not user when the floating-point stack frame was allocated.
    eUSER_0 = 0,
    // Privilege level was user when the floating-point stack frame was allocated.
    eUSER_1 = 1,
  };

  enum class eTHREAD : std::uint32_t {
    // Mode was not Thread Mode when the floating-point stack frame was allocated.
    eTHREAD_0 = 0,
    // Mode was Thread Mode when the floating-point stack frame was allocated.
    eTHREAD_1 = 1,
  };

  enum class eHFRDY : std::uint32_t {
    // Priority did not permit setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY_0 = 0,
    // Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated.
    eHFRDY_1 = 1,
  };

  enum class eMMRDY : std::uint32_t {
    // MemManage is disabled or priority did not permit setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY_0 = 0,
    // MemManage is enabled and priority permitted setting the MemManage handler to the pending state when the floating-point stack frame was allocated.
    eMMRDY_1 = 1,
  };

  enum class eBFRDY : std::uint32_t {
    // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY_0 = 0,
    // BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated.
    eBFRDY_1 = 1,
  };

  enum class eMONRDY : std::uint32_t {
    // DebugMonitor is disabled or priority did not permit setting MON_PEND when the floating-point stack frame was allocated.
    eMONRDY_0 = 0,
    // DebugMonitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated.
    eMONRDY_1 = 1,
  };

  enum class eLSPEN : std::uint32_t {
    // Disable automatic lazy state preservation for floating-point context.
    eLSPEN_0 = 0,
    // Enable automatic lazy state preservation for floating-point context.
    eLSPEN_1 = 1,
  };

  enum class eASPEN : std::uint32_t {
    // Disable CONTROL2 setting on execution of a floating-point instruction.
    eASPEN_0 = 0,
    // Enable CONTROL2 setting on execution of a floating-point instruction.
    eASPEN_1 = 1,
  };
  // Lazy state preservation.
  using LSPACT = ftl::mmio::Field<1, 0, eLSPACT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Privilege level when the floating-point stack frame was allocated.
  using USER = ftl::mmio::Field<1, 1, eUSER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Mode when the floating-point stack frame was allocated.
  using THREAD = ftl::mmio::Field<1, 3, eTHREAD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Permission to set the HardFault handler to the pending state when the floating-point stack frame was allocated.
  using HFRDY = ftl::mmio::Field<1, 4, eHFRDY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Permission to set the MemManage handler to the pending state when the floating-point stack frame was allocated.
  using MMRDY = ftl::mmio::Field<1, 5, eMMRDY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Permission to set the BusFault handler to the pending state when the floating-point stack frame was allocated.
  using BFRDY = ftl::mmio::Field<1, 6, eBFRDY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Permission to set the MON_PEND when the floating-point stack frame was allocated.
  using MONRDY = ftl::mmio::Field<1, 8, eMONRDY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lazy state preservation for floating-point context.
  using LSPEN = ftl::mmio::Field<1, 30, eLSPEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enables CONTROL2 setting on execution of a floating-point instruction. This results in automatic hardware state preservation and restoration, for floating-point context, on exception entry and exit.
  using ASPEN = ftl::mmio::Field<1, 31, eASPEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_FPCCR_fields_

struct SCB_FPCCR : ftl::mmio::Register<
    0xE000EF34u,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    SCB_FPCCR_fields_::LSPACT,
    SCB_FPCCR_fields_::USER,
    ftl::mmio::Reserved<1, 2>,
    SCB_FPCCR_fields_::THREAD,
    SCB_FPCCR_fields_::HFRDY,
    SCB_FPCCR_fields_::MMRDY,
    SCB_FPCCR_fields_::BFRDY,
    ftl::mmio::Reserved<1, 7>,
    SCB_FPCCR_fields_::MONRDY,
    ftl::mmio::Reserved<21, 9>,
    SCB_FPCCR_fields_::LSPEN,
    SCB_FPCCR_fields_::ASPEN> {
  using eLSPACT = SCB_FPCCR_fields_::eLSPACT;
  using eUSER = SCB_FPCCR_fields_::eUSER;
  using eTHREAD = SCB_FPCCR_fields_::eTHREAD;
  using eHFRDY = SCB_FPCCR_fields_::eHFRDY;
  using eMMRDY = SCB_FPCCR_fields_::eMMRDY;
  using eBFRDY = SCB_FPCCR_fields_::eBFRDY;
  using eMONRDY = SCB_FPCCR_fields_::eMONRDY;
  using eLSPEN = SCB_FPCCR_fields_::eLSPEN;
  using eASPEN = SCB_FPCCR_fields_::eASPEN;
  using LSPACT = SCB_FPCCR_fields_::LSPACT;
  using USER = SCB_FPCCR_fields_::USER;
  using THREAD = SCB_FPCCR_fields_::THREAD;
  using HFRDY = SCB_FPCCR_fields_::HFRDY;
  using MMRDY = SCB_FPCCR_fields_::MMRDY;
  using BFRDY = SCB_FPCCR_fields_::BFRDY;
  using MONRDY = SCB_FPCCR_fields_::MONRDY;
  using LSPEN = SCB_FPCCR_fields_::LSPEN;
  using ASPEN = SCB_FPCCR_fields_::ASPEN;
};


// Floating-point Context Address Register
struct SCB_FPCAR_fields_ {
  // The location of the unpopulated floating-point register space allocated on an exception stack frame.
  using ADDRESS = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_FPCAR_fields_

struct SCB_FPCAR : ftl::mmio::Register<
    0xE000EF38u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    SCB_FPCAR_fields_::ADDRESS> {
  using ADDRESS = SCB_FPCAR_fields_::ADDRESS;
};


// Floating-point Default Status Control Register
struct SCB_FPDSCR_fields_ {

  enum class eRMode : std::uint32_t {
    // Round to Nearest (RN) mode
    eRMode_0 = 0,
    // Round towards Plus Infinity (RP) mode.
    eRMode_1 = 1,
    // Round towards Minus Infinity (RM) mode.
    eRMode_2 = 2,
    // Round towards Zero (RZ) mode.
    eRMode_3 = 3,
  };

  enum class eFZ : std::uint32_t {
    // Flush-to-zero mode disabled. Behavior of the floating-point system is fully compliant with the IEEE 754 standard.
    eFZ_0 = 0,
    // Flush-to-zero mode enabled.
    eFZ_1 = 1,
  };

  enum class eDN : std::uint32_t {
    // NaN operands propagate through to the output of a floating-point operation.
    eDN_0 = 0,
    // Any operation involving one or more NaNs returns the Default NaN.
    eDN_1 = 1,
  };

  enum class eAHP : std::uint32_t {
    // IEEE half-precision format selected.
    eAHP_0 = 0,
    // Alternative half-precision format selected.
    eAHP_1 = 1,
  };
  // Default value for FPSCR.RMode (Rounding Mode control field).
  using RMode = ftl::mmio::Field<2, 22, eRMode, ftl::mmio::RW, ftl::mmio::Normal>;
  // Default value for FPSCR.FZ (Flush-to-zero mode control bit).
  using FZ = ftl::mmio::Field<1, 24, eFZ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Default value for FPSCR.DN (Default NaN mode control bit).
  using DN = ftl::mmio::Field<1, 25, eDN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Default value for FPSCR.AHP (Alternative half-precision control bit).
  using AHP = ftl::mmio::Field<1, 26, eAHP, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SCB_FPDSCR_fields_

struct SCB_FPDSCR : ftl::mmio::Register<
    0xE000EF3Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<22, 0>,
    SCB_FPDSCR_fields_::RMode,
    SCB_FPDSCR_fields_::FZ,
    SCB_FPDSCR_fields_::DN,
    SCB_FPDSCR_fields_::AHP,
    ftl::mmio::Reserved<5, 27>> {
  using eRMode = SCB_FPDSCR_fields_::eRMode;
  using eFZ = SCB_FPDSCR_fields_::eFZ;
  using eDN = SCB_FPDSCR_fields_::eDN;
  using eAHP = SCB_FPDSCR_fields_::eAHP;
  using RMode = SCB_FPDSCR_fields_::RMode;
  using FZ = SCB_FPDSCR_fields_::FZ;
  using DN = SCB_FPDSCR_fields_::DN;
  using AHP = SCB_FPDSCR_fields_::AHP;
};

}  // namespace regs::cm4_systemcontrol