#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm4Systemcontrol {
  // Auxiliary Control Register,
  struct ScbActlrFields {
    // Disables interruption of multi-cycle instructions.
    using DISMCYCINT = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables write buffer use during default memory map accesses.
    using DISDEFWBUF = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables folding of IT instructions.
    using DISFOLD = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbActlrFields

  struct SCB_ACTLR : ftl::mmio::Register<
      0xE000E008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbActlrFields::DISMCYCINT,
      ScbActlrFields::DISDEFWBUF,
      ScbActlrFields::DISFOLD,
      ftl::mmio::Reserved<29, 3>> {
    using DISMCYCINT = ScbActlrFields::DISMCYCINT;
    using DISDEFWBUF = ScbActlrFields::DISDEFWBUF;
    using DISFOLD = ScbActlrFields::DISFOLD;
  };

  // CPUID Base Register
  struct ScbCpuidFields {
    // Indicates patch release: 0x0 = Patch 0
    using REVISION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates part number
    using PARTNO = ftl::mmio::Field<12, 4, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates processor revision: 0x2 = Revision 2
    using VARIANT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Implementer code
    using IMPLEMENTER = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCpuidFields

  struct SCB_CPUID : ftl::mmio::Register<
      0xE000ED00u,
      std::uint32_t,
      0x410FC240u,
      ftl::mmio::RO,
      ScbCpuidFields::REVISION,
      ScbCpuidFields::PARTNO,
      ftl::mmio::Reserved<4, 16>,
      ScbCpuidFields::VARIANT,
      ScbCpuidFields::IMPLEMENTER> {
    using REVISION = ScbCpuidFields::REVISION;
    using PARTNO = ScbCpuidFields::PARTNO;
    using VARIANT = ScbCpuidFields::VARIANT;
    using IMPLEMENTER = ScbCpuidFields::IMPLEMENTER;
  };

  // Interrupt Control and State Register
  struct ScbIcsrFields {
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
  };  // struct ScbIcsrFields

  struct SCB_ICSR : ftl::mmio::Register<
      0xE000ED04u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbIcsrFields::VECTACTIVE,
      ftl::mmio::Reserved<2, 9>,
      ScbIcsrFields::RETTOBASE,
      ScbIcsrFields::VECTPENDING,
      ftl::mmio::Reserved<4, 18>,
      ScbIcsrFields::ISRPENDING,
      ScbIcsrFields::ISRPREEMPT,
      ftl::mmio::Reserved<1, 24>,
      ScbIcsrFields::PENDSTCLR,
      ScbIcsrFields::PENDSTSET,
      ScbIcsrFields::PENDSVCLR,
      ScbIcsrFields::PENDSVSET,
      ftl::mmio::Reserved<2, 29>,
      ScbIcsrFields::NMIPENDSET> {
    using eRETTOBASE = ScbIcsrFields::eRETTOBASE;
    using eISRPREEMPT = ScbIcsrFields::eISRPREEMPT;
    using ePENDSTCLR = ScbIcsrFields::ePENDSTCLR;
    using ePENDSTSET = ScbIcsrFields::ePENDSTSET;
    using ePENDSVCLR = ScbIcsrFields::ePENDSVCLR;
    using ePENDSVSET = ScbIcsrFields::ePENDSVSET;
    using eNMIPENDSET = ScbIcsrFields::eNMIPENDSET;
    using VECTACTIVE = ScbIcsrFields::VECTACTIVE;
    using RETTOBASE = ScbIcsrFields::RETTOBASE;
    using VECTPENDING = ScbIcsrFields::VECTPENDING;
    using ISRPENDING = ScbIcsrFields::ISRPENDING;
    using ISRPREEMPT = ScbIcsrFields::ISRPREEMPT;
    using PENDSTCLR = ScbIcsrFields::PENDSTCLR;
    using PENDSTSET = ScbIcsrFields::PENDSTSET;
    using PENDSVCLR = ScbIcsrFields::PENDSVCLR;
    using PENDSVSET = ScbIcsrFields::PENDSVSET;
    using NMIPENDSET = ScbIcsrFields::NMIPENDSET;
  };

  // Vector Table Offset Register
  struct ScbVtorFields {
    // Vector table base offset
    using TBLOFF = ftl::mmio::Field<25, 7, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbVtorFields

  struct SCB_VTOR : ftl::mmio::Register<
      0xE000ED08u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      ScbVtorFields::TBLOFF> {
    using TBLOFF = ScbVtorFields::TBLOFF;
  };

  // Application Interrupt and Reset Control Register
  struct ScbAircrFields {
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
  };  // struct ScbAircrFields

  struct SCB_AIRCR : ftl::mmio::Register<
      0xE000ED0Cu,
      std::uint32_t,
      0xFA050000u,
      ftl::mmio::RW,
      ScbAircrFields::VECTRESET,
      ScbAircrFields::VECTCLRACTIVE,
      ScbAircrFields::SYSRESETREQ,
      ftl::mmio::Reserved<5, 3>,
      ScbAircrFields::PRIGROUP,
      ftl::mmio::Reserved<4, 11>,
      ScbAircrFields::ENDIANNESS,
      ScbAircrFields::VECTKEY> {
    using eSYSRESETREQ = ScbAircrFields::eSYSRESETREQ;
    using eENDIANNESS = ScbAircrFields::eENDIANNESS;
    using VECTRESET = ScbAircrFields::VECTRESET;
    using VECTCLRACTIVE = ScbAircrFields::VECTCLRACTIVE;
    using SYSRESETREQ = ScbAircrFields::SYSRESETREQ;
    using PRIGROUP = ScbAircrFields::PRIGROUP;
    using ENDIANNESS = ScbAircrFields::ENDIANNESS;
    using VECTKEY = ScbAircrFields::VECTKEY;
  };

  // System Control Register
  struct ScbScrFields {
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
  };  // struct ScbScrFields

  struct SCB_SCR : ftl::mmio::Register<
      0xE000ED10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      ScbScrFields::SLEEPONEXIT,
      ScbScrFields::SLEEPDEEP,
      ftl::mmio::Reserved<1, 3>,
      ScbScrFields::SEVONPEND,
      ftl::mmio::Reserved<27, 5>> {
    using eSLEEPONEXIT = ScbScrFields::eSLEEPONEXIT;
    using eSLEEPDEEP = ScbScrFields::eSLEEPDEEP;
    using eSEVONPEND = ScbScrFields::eSEVONPEND;
    using SLEEPONEXIT = ScbScrFields::SLEEPONEXIT;
    using SLEEPDEEP = ScbScrFields::SLEEPDEEP;
    using SEVONPEND = ScbScrFields::SEVONPEND;
  };

  // Configuration and Control Register
  struct ScbCcrFields {
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
  };  // struct ScbCcrFields

  struct SCB_CCR : ftl::mmio::Register<
      0xE000ED14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCcrFields::NONBASETHRDENA,
      ScbCcrFields::USERSETMPEND,
      ftl::mmio::Reserved<1, 2>,
      ScbCcrFields::UNALIGN_TRP,
      ScbCcrFields::DIV_0_TRP,
      ftl::mmio::Reserved<3, 5>,
      ScbCcrFields::BFHFNMIGN,
      ScbCcrFields::STKALIGN,
      ftl::mmio::Reserved<22, 10>> {
    using eNONBASETHRDENA = ScbCcrFields::eNONBASETHRDENA;
    using eUSERSETMPEND = ScbCcrFields::eUSERSETMPEND;
    using eUNALIGN_TRP = ScbCcrFields::eUNALIGN_TRP;
    using eDIV_0_TRP = ScbCcrFields::eDIV_0_TRP;
    using eBFHFNMIGN = ScbCcrFields::eBFHFNMIGN;
    using eSTKALIGN = ScbCcrFields::eSTKALIGN;
    using NONBASETHRDENA = ScbCcrFields::NONBASETHRDENA;
    using USERSETMPEND = ScbCcrFields::USERSETMPEND;
    using UNALIGN_TRP = ScbCcrFields::UNALIGN_TRP;
    using DIV_0_TRP = ScbCcrFields::DIV_0_TRP;
    using BFHFNMIGN = ScbCcrFields::BFHFNMIGN;
    using STKALIGN = ScbCcrFields::STKALIGN;
  };

  // System Handler Priority Register 1
  struct ScbShpr1Fields {
    // Priority of system handler 4, MemManage
    using PRI_4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Priority of system handler 5, BusFault
    using PRI_5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Priority of system handler 6, UsageFault
    using PRI_6 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbShpr1Fields

  struct SCB_SHPR1 : ftl::mmio::Register<
      0xE000ED18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbShpr1Fields::PRI_4,
      ScbShpr1Fields::PRI_5,
      ScbShpr1Fields::PRI_6,
      ftl::mmio::Reserved<8, 24>> {
    using PRI_4 = ScbShpr1Fields::PRI_4;
    using PRI_5 = ScbShpr1Fields::PRI_5;
    using PRI_6 = ScbShpr1Fields::PRI_6;
  };

  // System Handler Priority Register 2
  struct ScbShpr2Fields {
    // Priority of system handler 11, SVCall
    using PRI_11 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbShpr2Fields

  struct SCB_SHPR2 : ftl::mmio::Register<
      0xE000ED1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      ScbShpr2Fields::PRI_11> {
    using PRI_11 = ScbShpr2Fields::PRI_11;
  };

  // System Handler Priority Register 3
  struct ScbShpr3Fields {
    // Priority of system handler 14, PendSV
    using PRI_14 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Priority of system handler 15, SysTick exception
    using PRI_15 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbShpr3Fields

  struct SCB_SHPR3 : ftl::mmio::Register<
      0xE000ED20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<16, 0>,
      ScbShpr3Fields::PRI_14,
      ScbShpr3Fields::PRI_15> {
    using PRI_14 = ScbShpr3Fields::PRI_14;
    using PRI_15 = ScbShpr3Fields::PRI_15;
  };

  // System Handler Control and State Register
  struct ScbShcsrFields {
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
  };  // struct ScbShcsrFields

  struct SCB_SHCSR : ftl::mmio::Register<
      0xE000ED24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbShcsrFields::MEMFAULTACT,
      ScbShcsrFields::BUSFAULTACT,
      ftl::mmio::Reserved<1, 2>,
      ScbShcsrFields::USGFAULTACT,
      ftl::mmio::Reserved<3, 4>,
      ScbShcsrFields::SVCALLACT,
      ScbShcsrFields::MONITORACT,
      ftl::mmio::Reserved<1, 9>,
      ScbShcsrFields::PENDSVACT,
      ScbShcsrFields::SYSTICKACT,
      ScbShcsrFields::USGFAULTPENDED,
      ScbShcsrFields::MEMFAULTPENDED,
      ScbShcsrFields::BUSFAULTPENDED,
      ScbShcsrFields::SVCALLPENDED,
      ScbShcsrFields::MEMFAULTENA,
      ScbShcsrFields::BUSFAULTENA,
      ScbShcsrFields::USGFAULTENA,
      ftl::mmio::Reserved<13, 19>> {
    using eMEMFAULTACT = ScbShcsrFields::eMEMFAULTACT;
    using eBUSFAULTACT = ScbShcsrFields::eBUSFAULTACT;
    using eUSGFAULTACT = ScbShcsrFields::eUSGFAULTACT;
    using eSVCALLACT = ScbShcsrFields::eSVCALLACT;
    using eMONITORACT = ScbShcsrFields::eMONITORACT;
    using ePENDSVACT = ScbShcsrFields::ePENDSVACT;
    using eSYSTICKACT = ScbShcsrFields::eSYSTICKACT;
    using eUSGFAULTPENDED = ScbShcsrFields::eUSGFAULTPENDED;
    using eMEMFAULTPENDED = ScbShcsrFields::eMEMFAULTPENDED;
    using eBUSFAULTPENDED = ScbShcsrFields::eBUSFAULTPENDED;
    using eSVCALLPENDED = ScbShcsrFields::eSVCALLPENDED;
    using eMEMFAULTENA = ScbShcsrFields::eMEMFAULTENA;
    using eBUSFAULTENA = ScbShcsrFields::eBUSFAULTENA;
    using eUSGFAULTENA = ScbShcsrFields::eUSGFAULTENA;
    using MEMFAULTACT = ScbShcsrFields::MEMFAULTACT;
    using BUSFAULTACT = ScbShcsrFields::BUSFAULTACT;
    using USGFAULTACT = ScbShcsrFields::USGFAULTACT;
    using SVCALLACT = ScbShcsrFields::SVCALLACT;
    using MONITORACT = ScbShcsrFields::MONITORACT;
    using PENDSVACT = ScbShcsrFields::PENDSVACT;
    using SYSTICKACT = ScbShcsrFields::SYSTICKACT;
    using USGFAULTPENDED = ScbShcsrFields::USGFAULTPENDED;
    using MEMFAULTPENDED = ScbShcsrFields::MEMFAULTPENDED;
    using BUSFAULTPENDED = ScbShcsrFields::BUSFAULTPENDED;
    using SVCALLPENDED = ScbShcsrFields::SVCALLPENDED;
    using MEMFAULTENA = ScbShcsrFields::MEMFAULTENA;
    using BUSFAULTENA = ScbShcsrFields::BUSFAULTENA;
    using USGFAULTENA = ScbShcsrFields::USGFAULTENA;
  };

  // Configurable Fault Status Registers
  struct ScbCfsrFields {
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
  };  // struct ScbCfsrFields

  struct SCB_CFSR : ftl::mmio::Register<
      0xE000ED28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCfsrFields::IACCVIOL,
      ScbCfsrFields::DACCVIOL,
      ftl::mmio::Reserved<1, 2>,
      ScbCfsrFields::MUNSTKERR,
      ScbCfsrFields::MSTKERR,
      ScbCfsrFields::MLSPERR,
      ftl::mmio::Reserved<1, 6>,
      ScbCfsrFields::MMARVALID,
      ScbCfsrFields::IBUSERR,
      ScbCfsrFields::PRECISERR,
      ScbCfsrFields::IMPRECISERR,
      ScbCfsrFields::UNSTKERR,
      ScbCfsrFields::STKERR,
      ScbCfsrFields::LSPERR,
      ftl::mmio::Reserved<1, 14>,
      ScbCfsrFields::BFARVALID,
      ScbCfsrFields::UNDEFINSTR,
      ScbCfsrFields::INVSTATE,
      ScbCfsrFields::INVPC,
      ScbCfsrFields::NOCP,
      ftl::mmio::Reserved<4, 20>,
      ScbCfsrFields::UNALIGNED,
      ScbCfsrFields::DIVBYZERO,
      ftl::mmio::Reserved<6, 26>> {
    using eIACCVIOL = ScbCfsrFields::eIACCVIOL;
    using eDACCVIOL = ScbCfsrFields::eDACCVIOL;
    using eMUNSTKERR = ScbCfsrFields::eMUNSTKERR;
    using eMSTKERR = ScbCfsrFields::eMSTKERR;
    using eMLSPERR = ScbCfsrFields::eMLSPERR;
    using eMMARVALID = ScbCfsrFields::eMMARVALID;
    using eIBUSERR = ScbCfsrFields::eIBUSERR;
    using ePRECISERR = ScbCfsrFields::ePRECISERR;
    using eIMPRECISERR = ScbCfsrFields::eIMPRECISERR;
    using eUNSTKERR = ScbCfsrFields::eUNSTKERR;
    using eSTKERR = ScbCfsrFields::eSTKERR;
    using eLSPERR = ScbCfsrFields::eLSPERR;
    using eBFARVALID = ScbCfsrFields::eBFARVALID;
    using eUNDEFINSTR = ScbCfsrFields::eUNDEFINSTR;
    using eINVSTATE = ScbCfsrFields::eINVSTATE;
    using eINVPC = ScbCfsrFields::eINVPC;
    using eNOCP = ScbCfsrFields::eNOCP;
    using eUNALIGNED = ScbCfsrFields::eUNALIGNED;
    using eDIVBYZERO = ScbCfsrFields::eDIVBYZERO;
    using IACCVIOL = ScbCfsrFields::IACCVIOL;
    using DACCVIOL = ScbCfsrFields::DACCVIOL;
    using MUNSTKERR = ScbCfsrFields::MUNSTKERR;
    using MSTKERR = ScbCfsrFields::MSTKERR;
    using MLSPERR = ScbCfsrFields::MLSPERR;
    using MMARVALID = ScbCfsrFields::MMARVALID;
    using IBUSERR = ScbCfsrFields::IBUSERR;
    using PRECISERR = ScbCfsrFields::PRECISERR;
    using IMPRECISERR = ScbCfsrFields::IMPRECISERR;
    using UNSTKERR = ScbCfsrFields::UNSTKERR;
    using STKERR = ScbCfsrFields::STKERR;
    using LSPERR = ScbCfsrFields::LSPERR;
    using BFARVALID = ScbCfsrFields::BFARVALID;
    using UNDEFINSTR = ScbCfsrFields::UNDEFINSTR;
    using INVSTATE = ScbCfsrFields::INVSTATE;
    using INVPC = ScbCfsrFields::INVPC;
    using NOCP = ScbCfsrFields::NOCP;
    using UNALIGNED = ScbCfsrFields::UNALIGNED;
    using DIVBYZERO = ScbCfsrFields::DIVBYZERO;
  };

  // HardFault Status register
  struct ScbHfsrFields {
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
  };  // struct ScbHfsrFields

  struct SCB_HFSR : ftl::mmio::Register<
      0xE000ED2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      ScbHfsrFields::VECTTBL,
      ftl::mmio::Reserved<28, 2>,
      ScbHfsrFields::FORCED,
      ScbHfsrFields::DEBUGEVT> {
    using eVECTTBL = ScbHfsrFields::eVECTTBL;
    using eFORCED = ScbHfsrFields::eFORCED;
    using VECTTBL = ScbHfsrFields::VECTTBL;
    using FORCED = ScbHfsrFields::FORCED;
    using DEBUGEVT = ScbHfsrFields::DEBUGEVT;
  };

  // Debug Fault Status Register
  struct ScbDfsrFields {
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
  };  // struct ScbDfsrFields

  struct SCB_DFSR : ftl::mmio::Register<
      0xE000ED30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbDfsrFields::HALTED,
      ScbDfsrFields::BKPT,
      ScbDfsrFields::DWTTRAP,
      ScbDfsrFields::VCATCH,
      ScbDfsrFields::EXTERNAL,
      ftl::mmio::Reserved<27, 5>> {
    using eHALTED = ScbDfsrFields::eHALTED;
    using eBKPT = ScbDfsrFields::eBKPT;
    using eDWTTRAP = ScbDfsrFields::eDWTTRAP;
    using eVCATCH = ScbDfsrFields::eVCATCH;
    using eEXTERNAL = ScbDfsrFields::eEXTERNAL;
    using HALTED = ScbDfsrFields::HALTED;
    using BKPT = ScbDfsrFields::BKPT;
    using DWTTRAP = ScbDfsrFields::DWTTRAP;
    using VCATCH = ScbDfsrFields::VCATCH;
    using EXTERNAL = ScbDfsrFields::EXTERNAL;
  };

  // MemManage Address Register
  struct ScbMmfarFields {
    // Address of MemManage fault location
    using ADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbMmfarFields

  struct SCB_MMFAR : ftl::mmio::Register<
      0xE000ED34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbMmfarFields::ADDRESS> {
    using ADDRESS = ScbMmfarFields::ADDRESS;
  };

  // BusFault Address Register
  struct ScbBfarFields {
    // Address of the BusFault location
    using ADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbBfarFields

  struct SCB_BFAR : ftl::mmio::Register<
      0xE000ED38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbBfarFields::ADDRESS> {
    using ADDRESS = ScbBfarFields::ADDRESS;
  };

  // Auxiliary Fault Status Register
  struct ScbAfsrFields {
    // Latched version of the AUXFAULT inputs
    using AUXFAULT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbAfsrFields

  struct SCB_AFSR : ftl::mmio::Register<
      0xE000ED3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbAfsrFields::AUXFAULT> {
    using AUXFAULT = ScbAfsrFields::AUXFAULT;
  };

  // Coprocessor Access Control Register
  struct ScbCpacrFields {
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
  };  // struct ScbCpacrFields

  struct SCB_CPACR : ftl::mmio::Register<
      0xE000ED88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<20, 0>,
      ScbCpacrFields::CP10,
      ScbCpacrFields::CP11,
      ftl::mmio::Reserved<8, 24>> {
    using eCP10 = ScbCpacrFields::eCP10;
    using eCP11 = ScbCpacrFields::eCP11;
    using CP10 = ScbCpacrFields::CP10;
    using CP11 = ScbCpacrFields::CP11;
  };

  // Floating-point Context Control Register
  struct ScbFpccrFields {
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
  };  // struct ScbFpccrFields

  struct SCB_FPCCR : ftl::mmio::Register<
      0xE000EF34u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      ScbFpccrFields::LSPACT,
      ScbFpccrFields::USER,
      ftl::mmio::Reserved<1, 2>,
      ScbFpccrFields::THREAD,
      ScbFpccrFields::HFRDY,
      ScbFpccrFields::MMRDY,
      ScbFpccrFields::BFRDY,
      ftl::mmio::Reserved<1, 7>,
      ScbFpccrFields::MONRDY,
      ftl::mmio::Reserved<21, 9>,
      ScbFpccrFields::LSPEN,
      ScbFpccrFields::ASPEN> {
    using eLSPACT = ScbFpccrFields::eLSPACT;
    using eUSER = ScbFpccrFields::eUSER;
    using eTHREAD = ScbFpccrFields::eTHREAD;
    using eHFRDY = ScbFpccrFields::eHFRDY;
    using eMMRDY = ScbFpccrFields::eMMRDY;
    using eBFRDY = ScbFpccrFields::eBFRDY;
    using eMONRDY = ScbFpccrFields::eMONRDY;
    using eLSPEN = ScbFpccrFields::eLSPEN;
    using eASPEN = ScbFpccrFields::eASPEN;
    using LSPACT = ScbFpccrFields::LSPACT;
    using USER = ScbFpccrFields::USER;
    using THREAD = ScbFpccrFields::THREAD;
    using HFRDY = ScbFpccrFields::HFRDY;
    using MMRDY = ScbFpccrFields::MMRDY;
    using BFRDY = ScbFpccrFields::BFRDY;
    using MONRDY = ScbFpccrFields::MONRDY;
    using LSPEN = ScbFpccrFields::LSPEN;
    using ASPEN = ScbFpccrFields::ASPEN;
  };

  // Floating-point Context Address Register
  struct ScbFpcarFields {
    // The location of the unpopulated floating-point register space allocated on an exception stack frame.
    using ADDRESS = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbFpcarFields

  struct SCB_FPCAR : ftl::mmio::Register<
      0xE000EF38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      ScbFpcarFields::ADDRESS> {
    using ADDRESS = ScbFpcarFields::ADDRESS;
  };

  // Floating-point Default Status Control Register
  struct ScbFpdscrFields {
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
  };  // struct ScbFpdscrFields

  struct SCB_FPDSCR : ftl::mmio::Register<
      0xE000EF3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<22, 0>,
      ScbFpdscrFields::RMode,
      ScbFpdscrFields::FZ,
      ScbFpdscrFields::DN,
      ScbFpdscrFields::AHP,
      ftl::mmio::Reserved<5, 27>> {
    using eRMode = ScbFpdscrFields::eRMode;
    using eFZ = ScbFpdscrFields::eFZ;
    using eDN = ScbFpdscrFields::eDN;
    using eAHP = ScbFpdscrFields::eAHP;
    using RMode = ScbFpdscrFields::RMode;
    using FZ = ScbFpdscrFields::FZ;
    using DN = ScbFpdscrFields::DN;
    using AHP = ScbFpdscrFields::AHP;
  };

};

}  // namespace regs