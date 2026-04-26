#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm7Systemcontrol {
  // Auxiliary Control Register,
  struct ScbActlrFields {
    enum class eDISFOLD : std::uint32_t {
      // Normal operation.
      eDISFOLD_0 = 0,
    };

    enum class eFPEXCODIS : std::uint32_t {
      // Normal operation.
      eFPEXCODIS_0 = 0,
      // FPU exception outputs are disabled.
      eFPEXCODIS_1 = 1,
    };

    enum class eDISRAMODE : std::uint32_t {
      // Normal operation.
      eDISRAMODE_0 = 0,
      // Dynamic disabled.
      eDISRAMODE_1 = 1,
    };

    enum class eDISITMATBFLUSH : std::uint32_t {
      // ITM and DWT ATB flush disabled, this bit is always 1.
      eDISITMATBFLUSH_1 = 1,
    };

    enum class eDISBTACREAD : std::uint32_t {
      // Normal operation.
      eDISBTACREAD_0 = 0,
      // BTAC is not used and only static branch prediction can occur.
      eDISBTACREAD_1 = 1,
    };

    enum class eDISBTACALLOC : std::uint32_t {
      // Normal operation.
      eDISBTACALLOC_0 = 0,
      // No new entries are allocated in Branch Target Address Cache (BTAC), but existing entries can be updated.
      eDISBTACALLOC_1 = 1,
    };

    enum class eDISCRITAXIRUR : std::uint32_t {
      // Normal operation.
      eDISCRITAXIRUR_0 = 0,
      // An AXI read to Strongly-Ordered or Device memory, or an LDREX to Shareable memory, is not put on AXI if there are any outstanding reads on AXI. Transactions on AXI cannot be interrupted. This bit might reduce the time that these transactions are in progress and might improve worst case interrupt latency. Performance is decreased when this bit is set.
      eDISCRITAXIRUR_1 = 1,
    };

    enum class eDISDI : std::uint32_t {
      // Normal operation.
      eDISDI_0 = 0,
      // Nothing can be dual-issued when this instruction type is in channel 0.
      eDISDI_1 = 1,
    };

    enum class eDISISSCH1 : std::uint32_t {
      // Normal operation.
      eDISISSCH1_0 = 0,
      // Nothing can be dual-issued when this instruction type is in channel 1.
      eDISISSCH1_1 = 1,
    };

    enum class eDISDYNADD : std::uint32_t {
      // Normal operation. Some ADD and SUB instrctions are resolved in EX1.
      eDISDYNADD_0 = 0,
      // All ADD and SUB instructions are resolved in EX2.
      eDISDYNADD_1 = 1,
    };

    enum class eDISCRITAXIRUW : std::uint32_t {
      // Normal operation. This is backwards compatible with r0.
      eDISCRITAXIRUW_0 = 0,
      // AXI reads to DEV/SO memory. Exclusive reads to Shareable memory are not initiated on the AXIM AR channel until all outstanding stores on AXI are complete.
      eDISCRITAXIRUW_1 = 1,
    };

    enum class eDISFPUISSOPT : std::uint32_t {
      // Normal operation.
      eDISFPUISSOPT_0 = 0,
    };

    // Disables folding of IT instructions.
    using DISFOLD = ftl::mmio::Field<1, 2, eDISFOLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables FPU exception outputs.
    using FPEXCODIS = ftl::mmio::Field<1, 10, eFPEXCODIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables dynamic read allocate mode for Write-Back Write-Allocate memory regions.
    using DISRAMODE = ftl::mmio::Field<1, 11, eDISRAMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables ITM and DWT ATB flush.
    using DISITMATBFLUSH = ftl::mmio::Field<1, 12, eDISITMATBFLUSH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables BTAC read.
    using DISBTACREAD = ftl::mmio::Field<1, 13, eDISBTACREAD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables BTAC allocate.
    using DISBTACALLOC = ftl::mmio::Field<1, 14, eDISBTACALLOC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables critical AXI Read-Under-Read.
    using DISCRITAXIRUR = ftl::mmio::Field<1, 15, eDISCRITAXIRUR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables dual-issued.
    using DISDI = ftl::mmio::Field<5, 16, eDISDI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables dual-issued.
    using DISISSCH1 = ftl::mmio::Field<5, 21, eDISISSCH1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables dynamic allocation of ADD and SUB instructions
    using DISDYNADD = ftl::mmio::Field<1, 26, eDISDYNADD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables critical AXI read-under-write
    using DISCRITAXIRUW = ftl::mmio::Field<1, 27, eDISCRITAXIRUW, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disables critical AXI read-under-write
    using DISFPUISSOPT = ftl::mmio::Field<1, 28, eDISFPUISSOPT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbActlrFields

  struct SCB_ACTLR : ftl::mmio::Register<
      0xE000E008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      ScbActlrFields::DISFOLD,
      ftl::mmio::Reserved<7, 3>,
      ScbActlrFields::FPEXCODIS,
      ScbActlrFields::DISRAMODE,
      ScbActlrFields::DISITMATBFLUSH,
      ScbActlrFields::DISBTACREAD,
      ScbActlrFields::DISBTACALLOC,
      ScbActlrFields::DISCRITAXIRUR,
      ScbActlrFields::DISDI,
      ScbActlrFields::DISISSCH1,
      ScbActlrFields::DISDYNADD,
      ScbActlrFields::DISCRITAXIRUW,
      ScbActlrFields::DISFPUISSOPT,
      ftl::mmio::Reserved<3, 29>> {
    using eDISFOLD = ScbActlrFields::eDISFOLD;
    using eFPEXCODIS = ScbActlrFields::eFPEXCODIS;
    using eDISRAMODE = ScbActlrFields::eDISRAMODE;
    using eDISITMATBFLUSH = ScbActlrFields::eDISITMATBFLUSH;
    using eDISBTACREAD = ScbActlrFields::eDISBTACREAD;
    using eDISBTACALLOC = ScbActlrFields::eDISBTACALLOC;
    using eDISCRITAXIRUR = ScbActlrFields::eDISCRITAXIRUR;
    using eDISDI = ScbActlrFields::eDISDI;
    using eDISISSCH1 = ScbActlrFields::eDISISSCH1;
    using eDISDYNADD = ScbActlrFields::eDISDYNADD;
    using eDISCRITAXIRUW = ScbActlrFields::eDISCRITAXIRUW;
    using eDISFPUISSOPT = ScbActlrFields::eDISFPUISSOPT;
    using DISFOLD = ScbActlrFields::DISFOLD;
    using FPEXCODIS = ScbActlrFields::FPEXCODIS;
    using DISRAMODE = ScbActlrFields::DISRAMODE;
    using DISITMATBFLUSH = ScbActlrFields::DISITMATBFLUSH;
    using DISBTACREAD = ScbActlrFields::DISBTACREAD;
    using DISBTACALLOC = ScbActlrFields::DISBTACALLOC;
    using DISCRITAXIRUR = ScbActlrFields::DISCRITAXIRUR;
    using DISDI = ScbActlrFields::DISDI;
    using DISISSCH1 = ScbActlrFields::DISISSCH1;
    using DISDYNADD = ScbActlrFields::DISDYNADD;
    using DISCRITAXIRUW = ScbActlrFields::DISCRITAXIRUW;
    using DISFPUISSOPT = ScbActlrFields::DISFPUISSOPT;
  };

  // CPUID Base Register
  struct ScbCpuidFields {
    // Indicates patch release: 0x0 = Patch 0
    using REVISION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates part number
    using PARTNO = ftl::mmio::Field<12, 4, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARCHITECTURE
    using ARCHITECTURE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
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
      ScbCpuidFields::ARCHITECTURE,
      ScbCpuidFields::VARIANT,
      ScbCpuidFields::IMPLEMENTER> {
    using REVISION = ScbCpuidFields::REVISION;
    using PARTNO = ScbCpuidFields::PARTNO;
    using ARCHITECTURE = ScbCpuidFields::ARCHITECTURE;
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

    enum class eISRPENDING : std::uint32_t {
      // No external interrupt pending.
      eISRPENDING_0 = 0,
      // External interrupt pending.
      eISRPENDING_1 = 1,
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
    // Indicates whether there are preempted active exceptions
    using RETTOBASE = ftl::mmio::Field<1, 11, eRETTOBASE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Exception number of the highest priority pending enabled exception
    using VECTPENDING = ftl::mmio::Field<9, 12, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Interrupt pending flag, excluding NMI and Faults
    using ISRPENDING = ftl::mmio::Field<1, 22, eISRPENDING, ftl::mmio::RO, ftl::mmio::Normal>;
    // SysTick exception clear-pending bit
    using PENDSTCLR = ftl::mmio::Field<1, 25, ePENDSTCLR, ftl::mmio::WO, ftl::mmio::Normal>;
    // SysTick exception set-pending bit
    using PENDSTSET = ftl::mmio::Field<1, 26, ePENDSTSET, ftl::mmio::RW, ftl::mmio::Normal>;
    // PendSV clear-pending bit
    using PENDSVCLR = ftl::mmio::Field<1, 27, ePENDSVCLR, ftl::mmio::WO, ftl::mmio::Normal>;
    // PendSV set-pending bit
    using PENDSVSET = ftl::mmio::Field<1, 28, ePENDSVSET, ftl::mmio::RW, ftl::mmio::Normal>;
    // NMI set-pending bit
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
      ftl::mmio::Reserved<1, 21>,
      ScbIcsrFields::ISRPENDING,
      ftl::mmio::Reserved<2, 23>,
      ScbIcsrFields::PENDSTCLR,
      ScbIcsrFields::PENDSTSET,
      ScbIcsrFields::PENDSVCLR,
      ScbIcsrFields::PENDSVSET,
      ftl::mmio::Reserved<2, 29>,
      ScbIcsrFields::NMIPENDSET> {
    using eRETTOBASE = ScbIcsrFields::eRETTOBASE;
    using eISRPENDING = ScbIcsrFields::eISRPENDING;
    using ePENDSTCLR = ScbIcsrFields::ePENDSTCLR;
    using ePENDSTSET = ScbIcsrFields::ePENDSTSET;
    using ePENDSVCLR = ScbIcsrFields::ePENDSVCLR;
    using ePENDSVSET = ScbIcsrFields::ePENDSVSET;
    using eNMIPENDSET = ScbIcsrFields::eNMIPENDSET;
    using VECTACTIVE = ScbIcsrFields::VECTACTIVE;
    using RETTOBASE = ScbIcsrFields::RETTOBASE;
    using VECTPENDING = ScbIcsrFields::VECTPENDING;
    using ISRPENDING = ScbIcsrFields::ISRPENDING;
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
    enum class eVECTRESET : std::uint32_t {
      // No change
      eVECTRESET_0 = 0,
      // Causes a local system reset
      eVECTRESET_1 = 1,
    };

    enum class eVECTCLRACTIVE : std::uint32_t {
      // No change
      eVECTCLRACTIVE_0 = 0,
      // Clears all active state information for fixed and configurable exceptions
      eVECTCLRACTIVE_1 = 1,
    };

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

    // Writing 1 to this bit causes a local system reset
    using VECTRESET = ftl::mmio::Field<1, 0, eVECTRESET, ftl::mmio::WO, ftl::mmio::Normal>;
    // Writing 1 to this bit clears all active state information for fixed and configurable exceptions.
    using VECTCLRACTIVE = ftl::mmio::Field<1, 1, eVECTCLRACTIVE, ftl::mmio::WO, ftl::mmio::Normal>;
    // System reset request
    using SYSRESETREQ = ftl::mmio::Field<1, 2, eSYSRESETREQ, ftl::mmio::WO, ftl::mmio::Normal>;
    // Interrupt priority grouping field. This field determines the split of group priority from subpriority.
    using PRIGROUP = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data endianness
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
    using eVECTRESET = ScbAircrFields::eVECTRESET;
    using eVECTCLRACTIVE = ScbAircrFields::eVECTCLRACTIVE;
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

    // Indicates sleep-on-exit when returning from Handler mode to Thread mode
    using SLEEPONEXIT = ftl::mmio::Field<1, 1, eSLEEPONEXIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controls whether the processor uses sleep or deep sleep as its low power mode
    using SLEEPDEEP = ftl::mmio::Field<1, 2, eSLEEPDEEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Send Event on Pending bit
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

    enum class eDC : std::uint32_t {
      // L1 data cache disabled
      eDC_0 = 0,
      // L1 data cache enabled
      eDC_1 = 1,
    };

    enum class eIC : std::uint32_t {
      // L1 instruction cache disabled
      eIC_0 = 0,
      // L1 instruction cache enabled
      eIC_1 = 1,
    };

    // Indicates how the processor enters Thread mode
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
    // Enables L1 data cache.
    using DC = ftl::mmio::Field<1, 16, eDC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables L1 instruction cache.
    using IC = ftl::mmio::Field<1, 17, eIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Always reads-as-one. It indicates branch prediction is enabled.
    using BP = ftl::mmio::Field<1, 18, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCcrFields

  struct SCB_CCR : ftl::mmio::Register<
      0xE000ED14u,
      std::uint32_t,
      0x00040000u,
      ftl::mmio::RW,
      ScbCcrFields::NONBASETHRDENA,
      ScbCcrFields::USERSETMPEND,
      ftl::mmio::Reserved<1, 2>,
      ScbCcrFields::UNALIGN_TRP,
      ScbCcrFields::DIV_0_TRP,
      ftl::mmio::Reserved<3, 5>,
      ScbCcrFields::BFHFNMIGN,
      ScbCcrFields::STKALIGN,
      ftl::mmio::Reserved<6, 10>,
      ScbCcrFields::DC,
      ScbCcrFields::IC,
      ScbCcrFields::BP,
      ftl::mmio::Reserved<13, 19>> {
    using eNONBASETHRDENA = ScbCcrFields::eNONBASETHRDENA;
    using eUSERSETMPEND = ScbCcrFields::eUSERSETMPEND;
    using eUNALIGN_TRP = ScbCcrFields::eUNALIGN_TRP;
    using eDIV_0_TRP = ScbCcrFields::eDIV_0_TRP;
    using eBFHFNMIGN = ScbCcrFields::eBFHFNMIGN;
    using eSTKALIGN = ScbCcrFields::eSTKALIGN;
    using eDC = ScbCcrFields::eDC;
    using eIC = ScbCcrFields::eIC;
    using NONBASETHRDENA = ScbCcrFields::NONBASETHRDENA;
    using USERSETMPEND = ScbCcrFields::USERSETMPEND;
    using UNALIGN_TRP = ScbCcrFields::UNALIGN_TRP;
    using DIV_0_TRP = ScbCcrFields::DIV_0_TRP;
    using BFHFNMIGN = ScbCcrFields::BFHFNMIGN;
    using STKALIGN = ScbCcrFields::STKALIGN;
    using DC = ScbCcrFields::DC;
    using IC = ScbCcrFields::IC;
    using BP = ScbCcrFields::BP;
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

    // MemManage exception active bit
    using MEMFAULTACT = ftl::mmio::Field<1, 0, eMEMFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault exception active bit
    using BUSFAULTACT = ftl::mmio::Field<1, 1, eBUSFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // UsageFault exception active bit
    using USGFAULTACT = ftl::mmio::Field<1, 3, eUSGFAULTACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // SVCall active bit
    using SVCALLACT = ftl::mmio::Field<1, 7, eSVCALLACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug monitor active bit
    using MONITORACT = ftl::mmio::Field<1, 8, eMONITORACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // PendSV exception active bit
    using PENDSVACT = ftl::mmio::Field<1, 10, ePENDSVACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // SysTick exception active bit
    using SYSTICKACT = ftl::mmio::Field<1, 11, eSYSTICKACT, ftl::mmio::RW, ftl::mmio::Normal>;
    // UsageFault exception pending bit
    using USGFAULTPENDED = ftl::mmio::Field<1, 12, eUSGFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage exception pending bit
    using MEMFAULTPENDED = ftl::mmio::Field<1, 13, eMEMFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault exception pending bit
    using BUSFAULTPENDED = ftl::mmio::Field<1, 14, eBUSFAULTPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
    // SVCall pending bit
    using SVCALLPENDED = ftl::mmio::Field<1, 15, eSVCALLPENDED, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage enable bit
    using MEMFAULTENA = ftl::mmio::Field<1, 16, eMEMFAULTENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault enable bit
    using BUSFAULTENA = ftl::mmio::Field<1, 17, eBUSFAULTENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // UsageFault enable bit
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

  // Configurable Fault Status Register
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

    // Instruction access violation flag
    using IACCVIOL = ftl::mmio::Field<1, 0, eIACCVIOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data access violation flag
    using DACCVIOL = ftl::mmio::Field<1, 1, eDACCVIOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage fault on unstacking for a return from exception
    using MUNSTKERR = ftl::mmio::Field<1, 3, eMUNSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage fault on stacking for exception entry
    using MSTKERR = ftl::mmio::Field<1, 4, eMSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage fault occurred during floating-point lazy state preservation
    using MLSPERR = ftl::mmio::Field<1, 5, eMLSPERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // MemManage Fault Address Register (MMFAR) valid flag
    using MMARVALID = ftl::mmio::Field<1, 7, eMMARVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Instruction bus error
    using IBUSERR = ftl::mmio::Field<1, 8, eIBUSERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Precise data bus error
    using PRECISERR = ftl::mmio::Field<1, 9, ePRECISERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Imprecise data bus error
    using IMPRECISERR = ftl::mmio::Field<1, 10, eIMPRECISERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault on unstacking for a return from exception
    using UNSTKERR = ftl::mmio::Field<1, 11, eUNSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault on stacking for exception entry
    using STKERR = ftl::mmio::Field<1, 12, eSTKERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bus fault occurred during floating-point lazy state preservation
    using LSPERR = ftl::mmio::Field<1, 13, eLSPERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // BusFault Address Register (BFAR) valid flag
    using BFARVALID = ftl::mmio::Field<1, 15, eBFARVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Undefined instruction UsageFault
    using UNDEFINSTR = ftl::mmio::Field<1, 16, eUNDEFINSTR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalid state UsageFault
    using INVSTATE = ftl::mmio::Field<1, 17, eINVSTATE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invalid PC load UsageFault, caused by an invalid PC load by EXC_RETURN
    using INVPC = ftl::mmio::Field<1, 18, eINVPC, ftl::mmio::RW, ftl::mmio::Normal>;
    // No coprocessor UsageFault
    using NOCP = ftl::mmio::Field<1, 19, eNOCP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Unaligned access UsageFault
    using UNALIGNED = ftl::mmio::Field<1, 24, eUNALIGNED, ftl::mmio::RW, ftl::mmio::Normal>;
    // Divide by zero UsageFault
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

    enum class eDEBUGEVT : std::uint32_t {
      // No Debug event has occurred.
      eDEBUGEVT_0 = 0,
      // Debug event has occurred. The Debug Fault Status Register has been updated.
      eDEBUGEVT_1 = 1,
    };

    // Indicates a BusFault on a vector table read during exception processing.
    using VECTTBL = ftl::mmio::Field<1, 1, eVECTTBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates a forced hard fault, generated by escalation of a fault with configurable priority that cannot be handles, either because of priority or because it is disabled.
    using FORCED = ftl::mmio::Field<1, 30, eFORCED, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved for Debug use. When writing to the register you must write 0 to this bit, otherwise behavior is Unpredictable.
    using DEBUGEVT = ftl::mmio::Field<1, 31, eDEBUGEVT, ftl::mmio::RW, ftl::mmio::Normal>;
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
    using eDEBUGEVT = ScbHfsrFields::eDEBUGEVT;
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
      // No external debug request debug event
      eEXTERNAL_0 = 0,
      // External debug request debug event
      eEXTERNAL_1 = 1,
    };

    // Indicates a debug event generated by either a C_HALT or C_STEP request, triggered by a write to the DHCSR or a step request triggered by setting DEMCR.MON_STEP to 1.
    using HALTED = ftl::mmio::Field<1, 0, eHALTED, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug event generated by BKPT instruction execution or a breakpoint match in FPB
    using BKPT = ftl::mmio::Field<1, 1, eBKPT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug event generated by the DWT
    using DWTTRAP = ftl::mmio::Field<1, 2, eDWTTRAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates triggering of a Vector catch
    using VCATCH = ftl::mmio::Field<1, 3, eVCATCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug event generated because of the assertion of an external debug request
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

  // MemManage Fault Address Register
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

  // Processor Feature Register 0
  struct ScbIdPfr0Fields {
    enum class eSTATE0 : std::uint32_t {
      // ARMv7-M unused
      eSTATE0_0 = 0,
      // ARMv7-M unused
      eSTATE0_1 = 1,
      // ARMv7-M unused
      eSTATE0_2 = 2,
      // Support for Thumb encoding including Thumb-2 technology, with all basic 16-bit and 32-bit instructions.
      eSTATE0_3 = 3,
    };

    enum class eSTATE1 : std::uint32_t {
      // The processor does not support the ARM instruction set.
      eSTATE1_0 = 0,
      // ARMv7-M unused
      eSTATE1_1 = 1,
    };

    // ARM instruction set support
    using STATE0 = ftl::mmio::Field<4, 0, eSTATE0, ftl::mmio::RO, ftl::mmio::Normal>;
    // Thumb instruction set support
    using STATE1 = ftl::mmio::Field<4, 4, eSTATE1, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARMv7-M unused
    using STATE2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ARMv7-M unused
    using STATE3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdPfr0Fields

  struct SCB_ID_PFR0 : ftl::mmio::Register<
      0xE000ED40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdPfr0Fields::STATE0,
      ScbIdPfr0Fields::STATE1,
      ScbIdPfr0Fields::STATE2,
      ScbIdPfr0Fields::STATE3,
      ftl::mmio::Reserved<16, 16>> {
    using eSTATE0 = ScbIdPfr0Fields::eSTATE0;
    using eSTATE1 = ScbIdPfr0Fields::eSTATE1;
    using STATE0 = ScbIdPfr0Fields::STATE0;
    using STATE1 = ScbIdPfr0Fields::STATE1;
    using STATE2 = ScbIdPfr0Fields::STATE2;
    using STATE3 = ScbIdPfr0Fields::STATE3;
  };

  // Processor Feature Register 1
  struct ScbIdPfr1Fields {
    enum class ePROGMODEL : std::uint32_t {
      // ARMv7-M unused
      ePROGMODEL_0 = 0,
      // Two-stack programmers' model supported
      ePROGMODEL_2 = 2,
    };

    // M profile programmers' model
    using PROGMODEL = ftl::mmio::Field<4, 8, ePROGMODEL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdPfr1Fields

  struct SCB_ID_PFR1 : ftl::mmio::Register<
      0xE000ED44u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<8, 0>,
      ScbIdPfr1Fields::PROGMODEL,
      ftl::mmio::Reserved<20, 12>> {
    using ePROGMODEL = ScbIdPfr1Fields::ePROGMODEL;
    using PROGMODEL = ScbIdPfr1Fields::PROGMODEL;
  };

  // Debug Feature Register
  struct ScbIdDfr0Fields {
    enum class eDEBUGMODEL : std::uint32_t {
      // Not supported
      eDEBUGMODEL_0 = 0,
      // Support for M profile Debug architecture, with memory-mapped access.
      eDEBUGMODEL_1 = 1,
    };

    // Support for memory-mapped debug model for M profile processors
    using DEBUGMODEL = ftl::mmio::Field<4, 20, eDEBUGMODEL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdDfr0Fields

  struct SCB_ID_DFR0 : ftl::mmio::Register<
      0xE000ED48u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<20, 0>,
      ScbIdDfr0Fields::DEBUGMODEL,
      ftl::mmio::Reserved<8, 24>> {
    using eDEBUGMODEL = ScbIdDfr0Fields::eDEBUGMODEL;
    using DEBUGMODEL = ScbIdDfr0Fields::DEBUGMODEL;
  };

  // Auxiliary Feature Register
  struct ScbIdAfr0Fields {
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdAfr0Fields

  struct SCB_ID_AFR0 : ftl::mmio::Register<
      0xE000ED4Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdAfr0Fields::IMPLEMENTATION_DEFINED0,
      ScbIdAfr0Fields::IMPLEMENTATION_DEFINED1,
      ScbIdAfr0Fields::IMPLEMENTATION_DEFINED2,
      ScbIdAfr0Fields::IMPLEMENTATION_DEFINED3,
      ftl::mmio::Reserved<16, 16>> {
    using IMPLEMENTATION_DEFINED0 = ScbIdAfr0Fields::IMPLEMENTATION_DEFINED0;
    using IMPLEMENTATION_DEFINED1 = ScbIdAfr0Fields::IMPLEMENTATION_DEFINED1;
    using IMPLEMENTATION_DEFINED2 = ScbIdAfr0Fields::IMPLEMENTATION_DEFINED2;
    using IMPLEMENTATION_DEFINED3 = ScbIdAfr0Fields::IMPLEMENTATION_DEFINED3;
  };

  // Memory Model Feature Register 0
  struct ScbIdMmfr0Fields {
    enum class ePMSASUPPORT : std::uint32_t {
      // Not supported
      ePMSASUPPORT_0 = 0,
      // ARMv7-M unused
      ePMSASUPPORT_1 = 1,
      // ARMv7-M unused
      ePMSASUPPORT_2 = 2,
      // PMSAv7, providing support for a base region and subregions.
      ePMSASUPPORT_3 = 3,
    };

    enum class eOUTERMOST_SHAREABILITY : std::uint32_t {
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

    enum class eSHAREABILITY_LEVELS : std::uint32_t {
      // One level of shareability implemented
      eSHAREABILITY_LEVELS_0 = 0,
      // ARMv7-M unused
      eSHAREABILITY_LEVELS_1 = 1,
    };

    enum class eTCM_SUPPORT : std::uint32_t {
      // No tightly coupled memories implemented.
      eTCM_SUPPORT_0 = 0,
      // Tightly coupled memories implemented with IMPLEMENTATION DEFINED control.
      eTCM_SUPPORT_1 = 1,
      // ARMv7-M unused
      eTCM_SUPPORT_2 = 2,
    };

    enum class eAUXILIARY_REGISTERS : std::uint32_t {
      // Not supported
      eAUXILIARY_REGISTERS_0 = 0,
      // Support for Auxiliary Control Register only.
      eAUXILIARY_REGISTERS_1 = 1,
      // ARMv7-M unused
      eAUXILIARY_REGISTERS_2 = 2,
    };

    // Indicates support for a PMSA
    using PMSASUPPORT = ftl::mmio::Field<4, 4, ePMSASUPPORT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the outermost shareability domain implemented
    using OUTERMOST_SHAREABILITY = ftl::mmio::Field<4, 8, eOUTERMOST_SHAREABILITY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the number of shareability levels implemented
    using SHAREABILITY_LEVELS = ftl::mmio::Field<4, 12, eSHAREABILITY_LEVELS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for Tightly Coupled Memory
    using TCM_SUPPORT = ftl::mmio::Field<4, 16, eTCM_SUPPORT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for Auxiliary registers
    using AUXILIARY_REGISTERS = ftl::mmio::Field<4, 20, eAUXILIARY_REGISTERS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdMmfr0Fields

  struct SCB_ID_MMFR0 : ftl::mmio::Register<
      0xE000ED50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<4, 0>,
      ScbIdMmfr0Fields::PMSASUPPORT,
      ScbIdMmfr0Fields::OUTERMOST_SHAREABILITY,
      ScbIdMmfr0Fields::SHAREABILITY_LEVELS,
      ScbIdMmfr0Fields::TCM_SUPPORT,
      ScbIdMmfr0Fields::AUXILIARY_REGISTERS,
      ftl::mmio::Reserved<8, 24>> {
    using ePMSASUPPORT = ScbIdMmfr0Fields::ePMSASUPPORT;
    using eOUTERMOST_SHAREABILITY = ScbIdMmfr0Fields::eOUTERMOST_SHAREABILITY;
    using eSHAREABILITY_LEVELS = ScbIdMmfr0Fields::eSHAREABILITY_LEVELS;
    using eTCM_SUPPORT = ScbIdMmfr0Fields::eTCM_SUPPORT;
    using eAUXILIARY_REGISTERS = ScbIdMmfr0Fields::eAUXILIARY_REGISTERS;
    using PMSASUPPORT = ScbIdMmfr0Fields::PMSASUPPORT;
    using OUTERMOST_SHAREABILITY = ScbIdMmfr0Fields::OUTERMOST_SHAREABILITY;
    using SHAREABILITY_LEVELS = ScbIdMmfr0Fields::SHAREABILITY_LEVELS;
    using TCM_SUPPORT = ScbIdMmfr0Fields::TCM_SUPPORT;
    using AUXILIARY_REGISTERS = ScbIdMmfr0Fields::AUXILIARY_REGISTERS;
  };

  // Memory Model Feature Register 1
  struct ScbIdMmfr1Fields {
    // Gives information about the implemented memory model and memory management support.
    using ID_MMFR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdMmfr1Fields

  struct SCB_ID_MMFR1 : ftl::mmio::Register<
      0xE000ED54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdMmfr1Fields::ID_MMFR1> {
    using ID_MMFR1 = ScbIdMmfr1Fields::ID_MMFR1;
  };

  // Memory Model Feature Register 2
  struct ScbIdMmfr2Fields {
    enum class eWFI_STALL : std::uint32_t {
      // Not supported
      eWFI_STALL_0 = 0,
      // Support for WFI stalling
      eWFI_STALL_1 = 1,
    };

    // Indicates the support for Wait For Interrupt (WFI) stalling
    using WFI_STALL = ftl::mmio::Field<4, 24, eWFI_STALL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdMmfr2Fields

  struct SCB_ID_MMFR2 : ftl::mmio::Register<
      0xE000ED58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      ScbIdMmfr2Fields::WFI_STALL,
      ftl::mmio::Reserved<4, 28>> {
    using eWFI_STALL = ScbIdMmfr2Fields::eWFI_STALL;
    using WFI_STALL = ScbIdMmfr2Fields::WFI_STALL;
  };

  // Memory Model Feature Register 3
  struct ScbIdMmfr3Fields {
    // Gives information about the implemented memory model and memory management support.
    using ID_MMFR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdMmfr3Fields

  struct SCB_ID_MMFR3 : ftl::mmio::Register<
      0xE000ED5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdMmfr3Fields::ID_MMFR3> {
    using ID_MMFR3 = ScbIdMmfr3Fields::ID_MMFR3;
  };

  // Instruction Set Attributes Register 0
  struct ScbIdIsar0Fields {
    enum class eBITCOUNT_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eBITCOUNT_INSTRS_0 = 0,
      // Adds support for the CLZ instruction
      eBITCOUNT_INSTRS_1 = 1,
    };

    enum class eBITFIELD_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eBITFIELD_INSTRS_0 = 0,
      // Adds support for the BFC, BFI, SBFX, and UBFX instructions
      eBITFIELD_INSTRS_1 = 1,
    };

    enum class eCMPBRANCH_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eCMPBRANCH_INSTRS_0 = 0,
      // Adds support for the CBNZ and CBZ instructions
      eCMPBRANCH_INSTRS_1 = 1,
    };

    enum class eCOPROC_INSTRS : std::uint32_t {
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

    enum class eDEBUG_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eDEBUG_INSTRS_0 = 0,
      // Adds support for the BKPT instruction
      eDEBUG_INSTRS_1 = 1,
    };

    enum class eDIVIDE_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eDIVIDE_INSTRS_0 = 0,
      // Adds support for the SDIV and UDIV instructions
      eDIVIDE_INSTRS_1 = 1,
    };

    // Indicates the supported Bit Counting instructions
    using BITCOUNT_INSTRS = ftl::mmio::Field<4, 4, eBITCOUNT_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported BitField instructions
    using BITFIELD_INSTRS = ftl::mmio::Field<4, 8, eBITFIELD_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported combined Compare and Branch instructions
    using CMPBRANCH_INSTRS = ftl::mmio::Field<4, 12, eCMPBRANCH_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Coprocessor instructions
    using COPROC_INSTRS = ftl::mmio::Field<4, 16, eCOPROC_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Debug instructions
    using DEBUG_INSTRS = ftl::mmio::Field<4, 20, eDEBUG_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Divide instructions
    using DIVIDE_INSTRS = ftl::mmio::Field<4, 24, eDIVIDE_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdIsar0Fields

  struct SCB_ID_ISAR0 : ftl::mmio::Register<
      0xE000ED60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<4, 0>,
      ScbIdIsar0Fields::BITCOUNT_INSTRS,
      ScbIdIsar0Fields::BITFIELD_INSTRS,
      ScbIdIsar0Fields::CMPBRANCH_INSTRS,
      ScbIdIsar0Fields::COPROC_INSTRS,
      ScbIdIsar0Fields::DEBUG_INSTRS,
      ScbIdIsar0Fields::DIVIDE_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eBITCOUNT_INSTRS = ScbIdIsar0Fields::eBITCOUNT_INSTRS;
    using eBITFIELD_INSTRS = ScbIdIsar0Fields::eBITFIELD_INSTRS;
    using eCMPBRANCH_INSTRS = ScbIdIsar0Fields::eCMPBRANCH_INSTRS;
    using eCOPROC_INSTRS = ScbIdIsar0Fields::eCOPROC_INSTRS;
    using eDEBUG_INSTRS = ScbIdIsar0Fields::eDEBUG_INSTRS;
    using eDIVIDE_INSTRS = ScbIdIsar0Fields::eDIVIDE_INSTRS;
    using BITCOUNT_INSTRS = ScbIdIsar0Fields::BITCOUNT_INSTRS;
    using BITFIELD_INSTRS = ScbIdIsar0Fields::BITFIELD_INSTRS;
    using CMPBRANCH_INSTRS = ScbIdIsar0Fields::CMPBRANCH_INSTRS;
    using COPROC_INSTRS = ScbIdIsar0Fields::COPROC_INSTRS;
    using DEBUG_INSTRS = ScbIdIsar0Fields::DEBUG_INSTRS;
    using DIVIDE_INSTRS = ScbIdIsar0Fields::DIVIDE_INSTRS;
  };

  // Instruction Set Attributes Register 1
  struct ScbIdIsar1Fields {
    enum class eEXTEND_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eEXTEND_INSTRS_0 = 0,
      // Adds support for the SXTB, SXTH, UXTB, and UXTH instructions
      eEXTEND_INSTRS_1 = 1,
      // As for 1, and adds support for the SXTAB, SXTAB16, SXTAH, SXTB16, UXTAB, UXTAB16, UXTAH, and UXTB16 instructions
      eEXTEND_INSTRS_2 = 2,
    };

    enum class eIFTHEN_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eIFTHEN_INSTRS_0 = 0,
      // Adds support for the IT instructions, and for the IT bits in the PSRs
      eIFTHEN_INSTRS_1 = 1,
    };

    enum class eIMMEDIATE_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eIMMEDIATE_INSTRS_0 = 0,
      // Adds support for the ADDW, MOVW, MOVT, and SUBW instructions
      eIMMEDIATE_INSTRS_1 = 1,
    };

    enum class eINTERWORK_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eINTERWORK_INSTRS_0 = 0,
      // Adds support for the BX instruction, and the T bit in the PSR
      eINTERWORK_INSTRS_1 = 1,
      // As for 1, and adds support for the BLX instruction, and PC loads have BX-like behavior
      eINTERWORK_INSTRS_2 = 2,
      // ARMv7-M unused
      eINTERWORK_INSTRS_3 = 3,
    };

    // Indicates the supported Extend instructions
    using EXTEND_INSTRS = ftl::mmio::Field<4, 12, eEXTEND_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported IfThen instructions
    using IFTHEN_INSTRS = ftl::mmio::Field<4, 16, eIFTHEN_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for data-processing instructions with long immediate
    using IMMEDIATE_INSTRS = ftl::mmio::Field<4, 20, eIMMEDIATE_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Interworking instructions
    using INTERWORK_INSTRS = ftl::mmio::Field<4, 24, eINTERWORK_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdIsar1Fields

  struct SCB_ID_ISAR1 : ftl::mmio::Register<
      0xE000ED64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<12, 0>,
      ScbIdIsar1Fields::EXTEND_INSTRS,
      ScbIdIsar1Fields::IFTHEN_INSTRS,
      ScbIdIsar1Fields::IMMEDIATE_INSTRS,
      ScbIdIsar1Fields::INTERWORK_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eEXTEND_INSTRS = ScbIdIsar1Fields::eEXTEND_INSTRS;
    using eIFTHEN_INSTRS = ScbIdIsar1Fields::eIFTHEN_INSTRS;
    using eIMMEDIATE_INSTRS = ScbIdIsar1Fields::eIMMEDIATE_INSTRS;
    using eINTERWORK_INSTRS = ScbIdIsar1Fields::eINTERWORK_INSTRS;
    using EXTEND_INSTRS = ScbIdIsar1Fields::EXTEND_INSTRS;
    using IFTHEN_INSTRS = ScbIdIsar1Fields::IFTHEN_INSTRS;
    using IMMEDIATE_INSTRS = ScbIdIsar1Fields::IMMEDIATE_INSTRS;
    using INTERWORK_INSTRS = ScbIdIsar1Fields::INTERWORK_INSTRS;
  };

  // Instruction Set Attributes Register 2
  struct ScbIdIsar2Fields {
    enum class eLOADSTORE_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eLOADSTORE_INSTRS_0 = 0,
      // Adds support for the LDRD and STRD instructions
      eLOADSTORE_INSTRS_1 = 1,
    };

    enum class eMEMHINT_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eMEMHINT_INSTRS_0 = 0,
      // Adds support for the PLD instruction, ARMv7-M unused.
      eMEMHINT_INSTRS_1 = 1,
      // As for 1, ARMv7-M unused.
      eMEMHINT_INSTRS_2 = 2,
      // As for 1 or 2, and adds support for the PLI instruction.
      eMEMHINT_INSTRS_3 = 3,
    };

    enum class eMULTIACCESSINT_INSTRS : std::uint32_t {
      // None supported. This means the LDM and STM instructions are not interruptible. ARMv7-M unused.
      eMULTIACCESSINT_INSTRS_0 = 0,
      // LDM and STM instructions are restartable.
      eMULTIACCESSINT_INSTRS_1 = 1,
      // LDM and STM instructions are continuable.
      eMULTIACCESSINT_INSTRS_2 = 2,
    };

    enum class eMULT_INSTRS : std::uint32_t {
      // None supported. This means only MUL is supported. ARMv7-M unused.
      eMULT_INSTRS_0 = 0,
      // Adds support for the MLA instruction, ARMv7-M unused.
      eMULT_INSTRS_1 = 1,
      // As for 1, and adds support for the MLS instruction.
      eMULT_INSTRS_2 = 2,
    };

    enum class eMULTS_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eMULTS_INSTRS_0 = 0,
      // Adds support for the SMULL and SMLAL instructions
      eMULTS_INSTRS_1 = 1,
      // As for 1, and adds support for the SMLABB, SMLABT, SMLALBB, SMLALBT, SMLALTB, SMLALTT, SMLATB, SMLATT, SMLAWB, SMLAWT, SMULBB, SMULBT, SMULTB, SMULTT, SMULWB, and SMULWT instructions.
      eMULTS_INSTRS_2 = 2,
      // As for 2, and adds support for the SMLAD, SMLADX, SMLALD, SMLALDX, SMLSD, SMLSDX, SMLSLD, SMLSLDX, SMMLA, SMMLAR, SMMLS, SMMLSR, SMMUL, SMMULR, SMUAD, SMUADX, SMUSD, and SMUSDX instructions.
      eMULTS_INSTRS_3 = 3,
    };

    enum class eMULTU_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eMULTU_INSTRS_0 = 0,
      // Adds support for the UMULL and UMLAL instructions.
      eMULTU_INSTRS_1 = 1,
      // As for 1, and adds support for the UMAAL instruction.
      eMULTU_INSTRS_2 = 2,
    };

    enum class eREVERSAL_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused
      eREVERSAL_INSTRS_0 = 0,
      // Adds support for the REV, REV16, and REVSH instructions, ARMv7-M unused.
      eREVERSAL_INSTRS_1 = 1,
      // As for 1, and adds support for the RBIT instruction.
      eREVERSAL_INSTRS_2 = 2,
    };

    // Indicates the supported additional load and store instructions
    using LOADSTORE_INSTRS = ftl::mmio::Field<4, 0, eLOADSTORE_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Memory Hint instructions
    using MEMHINT_INSTRS = ftl::mmio::Field<4, 4, eMEMHINT_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for multi-access interruptible instructions
    using MULTIACCESSINT_INSTRS = ftl::mmio::Field<4, 8, eMULTIACCESSINT_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported additional Multiply instructions
    using MULT_INSTRS = ftl::mmio::Field<4, 12, eMULT_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported advanced signed Multiply instructions
    using MULTS_INSTRS = ftl::mmio::Field<4, 16, eMULTS_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported advanced unsigned Multiply instructions
    using MULTU_INSTRS = ftl::mmio::Field<4, 20, eMULTU_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Reversal instructions
    using REVERSAL_INSTRS = ftl::mmio::Field<4, 28, eREVERSAL_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdIsar2Fields

  struct SCB_ID_ISAR2 : ftl::mmio::Register<
      0xE000ED68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdIsar2Fields::LOADSTORE_INSTRS,
      ScbIdIsar2Fields::MEMHINT_INSTRS,
      ScbIdIsar2Fields::MULTIACCESSINT_INSTRS,
      ScbIdIsar2Fields::MULT_INSTRS,
      ScbIdIsar2Fields::MULTS_INSTRS,
      ScbIdIsar2Fields::MULTU_INSTRS,
      ftl::mmio::Reserved<4, 24>,
      ScbIdIsar2Fields::REVERSAL_INSTRS> {
    using eLOADSTORE_INSTRS = ScbIdIsar2Fields::eLOADSTORE_INSTRS;
    using eMEMHINT_INSTRS = ScbIdIsar2Fields::eMEMHINT_INSTRS;
    using eMULTIACCESSINT_INSTRS = ScbIdIsar2Fields::eMULTIACCESSINT_INSTRS;
    using eMULT_INSTRS = ScbIdIsar2Fields::eMULT_INSTRS;
    using eMULTS_INSTRS = ScbIdIsar2Fields::eMULTS_INSTRS;
    using eMULTU_INSTRS = ScbIdIsar2Fields::eMULTU_INSTRS;
    using eREVERSAL_INSTRS = ScbIdIsar2Fields::eREVERSAL_INSTRS;
    using LOADSTORE_INSTRS = ScbIdIsar2Fields::LOADSTORE_INSTRS;
    using MEMHINT_INSTRS = ScbIdIsar2Fields::MEMHINT_INSTRS;
    using MULTIACCESSINT_INSTRS = ScbIdIsar2Fields::MULTIACCESSINT_INSTRS;
    using MULT_INSTRS = ScbIdIsar2Fields::MULT_INSTRS;
    using MULTS_INSTRS = ScbIdIsar2Fields::MULTS_INSTRS;
    using MULTU_INSTRS = ScbIdIsar2Fields::MULTU_INSTRS;
    using REVERSAL_INSTRS = ScbIdIsar2Fields::REVERSAL_INSTRS;
  };

  // Instruction Set Attributes Register 3
  struct ScbIdIsar3Fields {
    enum class eSATURATE_INSTRS : std::uint32_t {
      // None supported
      eSATURATE_INSTRS_0 = 0,
      // Adds support for the QADD, QDADD, QDSUB, and QSUB instructions, and for the Q bit in the PSRs.
      eSATURATE_INSTRS_1 = 1,
    };

    enum class eSIMD_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eSIMD_INSTRS_0 = 0,
      // Adds support for the SSAT and USAT instructions, and for the Q bit in the PSRs.
      eSIMD_INSTRS_1 = 1,
      // As for 1, and adds support for the PKHBT, PKHTB, QADD16, QADD8, QASX, QSUB16, QSUB8, QSAX, SADD16, SADD8, SASX, SEL, SHADD16, SHADD8, SHASX, SHSUB16, SHSUB8, SHSAX, SSAT16, SSUB16, SSUB8, SSAX, SXTAB16, SXTB16, UADD16, UADD8, UASX, UHADD16, UHADD8, UHASX, UHSUB16, UHSUB8, UHSAX, UQADD16, UQADD8, UQASX, UQSUB16, UQSUB8, UQSAX, USAD8, USADA8, USAT16, USUB16, USUB8, USAX, UXTAB16, and UXTB16 instructions. Also adds support for the GE[3:0] bits in the PSRs.
      eSIMD_INSTRS_3 = 3,
    };

    enum class eSVC_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eSVC_INSTRS_0 = 0,
      // Adds support for the SVC instruction.
      eSVC_INSTRS_1 = 1,
    };

    enum class eTABBRANCH_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eTABBRANCH_INSTRS_0 = 0,
      // Adds support for the TBB and TBH instructions.
      eTABBRANCH_INSTRS_1 = 1,
    };

    enum class eTHUMBCOPY_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eTHUMBCOPY_INSTRS_0 = 0,
      // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
      eTHUMBCOPY_INSTRS_1 = 1,
    };

    enum class eTRUENOP_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eTRUENOP_INSTRS_0 = 0,
      // Adds support for encoding T1 of the MOV (register) instruction copying from a low register to a low register.
      eTRUENOP_INSTRS_1 = 1,
    };

    // Indicates the supported Saturate instructions
    using SATURATE_INSTRS = ftl::mmio::Field<4, 0, eSATURATE_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported SIMD instructions
    using SIMD_INSTRS = ftl::mmio::Field<4, 4, eSIMD_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported SVC instructions
    using SVC_INSTRS = ftl::mmio::Field<4, 8, eSVC_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Together with the ID_ISAR4[SYNCHPRIM_INSTRS_FRAC] indicates the supported Synchronization Primitives
    using SYNCHPRIM_INSTRS = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Table Branch instructions
    using TABBRANCH_INSTRS = ftl::mmio::Field<4, 16, eTABBRANCH_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported non flag-setting MOV instructions
    using THUMBCOPY_INSTRS = ftl::mmio::Field<4, 20, eTHUMBCOPY_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported non flag-setting MOV instructions
    using TRUENOP_INSTRS = ftl::mmio::Field<4, 24, eTRUENOP_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdIsar3Fields

  struct SCB_ID_ISAR3 : ftl::mmio::Register<
      0xE000ED6Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdIsar3Fields::SATURATE_INSTRS,
      ScbIdIsar3Fields::SIMD_INSTRS,
      ScbIdIsar3Fields::SVC_INSTRS,
      ScbIdIsar3Fields::SYNCHPRIM_INSTRS,
      ScbIdIsar3Fields::TABBRANCH_INSTRS,
      ScbIdIsar3Fields::THUMBCOPY_INSTRS,
      ScbIdIsar3Fields::TRUENOP_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eSATURATE_INSTRS = ScbIdIsar3Fields::eSATURATE_INSTRS;
    using eSIMD_INSTRS = ScbIdIsar3Fields::eSIMD_INSTRS;
    using eSVC_INSTRS = ScbIdIsar3Fields::eSVC_INSTRS;
    using eTABBRANCH_INSTRS = ScbIdIsar3Fields::eTABBRANCH_INSTRS;
    using eTHUMBCOPY_INSTRS = ScbIdIsar3Fields::eTHUMBCOPY_INSTRS;
    using eTRUENOP_INSTRS = ScbIdIsar3Fields::eTRUENOP_INSTRS;
    using SATURATE_INSTRS = ScbIdIsar3Fields::SATURATE_INSTRS;
    using SIMD_INSTRS = ScbIdIsar3Fields::SIMD_INSTRS;
    using SVC_INSTRS = ScbIdIsar3Fields::SVC_INSTRS;
    using SYNCHPRIM_INSTRS = ScbIdIsar3Fields::SYNCHPRIM_INSTRS;
    using TABBRANCH_INSTRS = ScbIdIsar3Fields::TABBRANCH_INSTRS;
    using THUMBCOPY_INSTRS = ScbIdIsar3Fields::THUMBCOPY_INSTRS;
    using TRUENOP_INSTRS = ScbIdIsar3Fields::TRUENOP_INSTRS;
  };

  // Instruction Set Attributes Register 4
  struct ScbIdIsar4Fields {
    enum class eUNPRIV_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eUNPRIV_INSTRS_0 = 0,
      // Adds support for the LDRBT, LDRT, STRBT, and STRT instructions.
      eUNPRIV_INSTRS_1 = 1,
      // As for 1, and adds support for the LDRHT, LDRSBT, LDRSHT, and STRHT instructions.
      eUNPRIV_INSTRS_2 = 2,
    };

    enum class eWITHSHIFTS_INSTRS : std::uint32_t {
      // Nonzero shifts supported only in MOV and shift instructions.
      eWITHSHIFTS_INSTRS_0 = 0,
      // Adds support for shifts of loads and stores over the range LSL 0-3.
      eWITHSHIFTS_INSTRS_1 = 1,
      // As for 1, and adds support for other constant shift options, on loads, stores, and other instructions.
      eWITHSHIFTS_INSTRS_3 = 3,
      // ARMv7-M unused.
      eWITHSHIFTS_INSTRS_4 = 4,
    };

    enum class eWRITEBACK_INSTRS : std::uint32_t {
      // Basic support. Only the LDM, STM, PUSH, and POP instructions support writeback addressing modes. ARMv7-M unused.
      eWRITEBACK_INSTRS_0 = 0,
      // Adds support for all of the writeback addressing modes defined in the ARMv7-M architecture.
      eWRITEBACK_INSTRS_1 = 1,
    };

    enum class eBARRIER_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      eBARRIER_INSTRS_0 = 0,
      // Adds support for the DMB, DSB, and ISB barrier instructions.
      eBARRIER_INSTRS_1 = 1,
    };

    enum class ePSR_M_INSTRS : std::uint32_t {
      // None supported, ARMv7-M unused.
      ePSR_M_INSTRS_0 = 0,
      // Adds support for the M-profile forms of the CPS, MRS, and MSR instructions, to access the PSRs.
      ePSR_M_INSTRS_1 = 1,
    };

    // Indicates the supported unprivileged instructions. These are the instruction variants indicated by a T suffix.
    using UNPRIV_INSTRS = ftl::mmio::Field<4, 0, eUNPRIV_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for instructions with shifts
    using WITHSHIFTS_INSTRS = ftl::mmio::Field<4, 4, eWITHSHIFTS_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the support for Writeback addressing modes
    using WRITEBACK_INSTRS = ftl::mmio::Field<4, 8, eWRITEBACK_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported Barrier instructions
    using BARRIER_INSTRS = ftl::mmio::Field<4, 16, eBARRIER_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Together with the ID_ISAR3[SYNCHPRIM_INSTRS] indicates the supported Synchronization Primitives
    using SYNCHPRIM_INSTRS_FRAC = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the supported M profile instructions to modify the PSRs
    using PSR_M_INSTRS = ftl::mmio::Field<4, 24, ePSR_M_INSTRS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbIdIsar4Fields

  struct SCB_ID_ISAR4 : ftl::mmio::Register<
      0xE000ED70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbIdIsar4Fields::UNPRIV_INSTRS,
      ScbIdIsar4Fields::WITHSHIFTS_INSTRS,
      ScbIdIsar4Fields::WRITEBACK_INSTRS,
      ftl::mmio::Reserved<4, 12>,
      ScbIdIsar4Fields::BARRIER_INSTRS,
      ScbIdIsar4Fields::SYNCHPRIM_INSTRS_FRAC,
      ScbIdIsar4Fields::PSR_M_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eUNPRIV_INSTRS = ScbIdIsar4Fields::eUNPRIV_INSTRS;
    using eWITHSHIFTS_INSTRS = ScbIdIsar4Fields::eWITHSHIFTS_INSTRS;
    using eWRITEBACK_INSTRS = ScbIdIsar4Fields::eWRITEBACK_INSTRS;
    using eBARRIER_INSTRS = ScbIdIsar4Fields::eBARRIER_INSTRS;
    using ePSR_M_INSTRS = ScbIdIsar4Fields::ePSR_M_INSTRS;
    using UNPRIV_INSTRS = ScbIdIsar4Fields::UNPRIV_INSTRS;
    using WITHSHIFTS_INSTRS = ScbIdIsar4Fields::WITHSHIFTS_INSTRS;
    using WRITEBACK_INSTRS = ScbIdIsar4Fields::WRITEBACK_INSTRS;
    using BARRIER_INSTRS = ScbIdIsar4Fields::BARRIER_INSTRS;
    using SYNCHPRIM_INSTRS_FRAC = ScbIdIsar4Fields::SYNCHPRIM_INSTRS_FRAC;
    using PSR_M_INSTRS = ScbIdIsar4Fields::PSR_M_INSTRS;
  };

  // Cache Level ID register
  struct ScbClidrFields {
    enum class eCL1 : std::uint32_t {
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

    enum class eCL2 : std::uint32_t {
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

    enum class eCL3 : std::uint32_t {
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

    enum class eCL4 : std::uint32_t {
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

    enum class eCL5 : std::uint32_t {
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

    enum class eCL6 : std::uint32_t {
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

    enum class eCL7 : std::uint32_t {
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

    enum class eLOUIS : std::uint32_t {
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

    enum class eLOC : std::uint32_t {
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

    enum class eLOU : std::uint32_t {
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

    // Indicate the type of cache implemented at level 1.
    using CL1 = ftl::mmio::Field<3, 0, eCL1, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 2.
    using CL2 = ftl::mmio::Field<3, 3, eCL2, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 3.
    using CL3 = ftl::mmio::Field<3, 6, eCL3, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 4.
    using CL4 = ftl::mmio::Field<3, 9, eCL4, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 5.
    using CL5 = ftl::mmio::Field<3, 12, eCL5, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 6.
    using CL6 = ftl::mmio::Field<3, 15, eCL6, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the type of cache implemented at level 7.
    using CL7 = ftl::mmio::Field<3, 18, eCL7, ftl::mmio::RO, ftl::mmio::Normal>;
    // Level of Unification Inner Shareable for the cache hierarchy. This field is RAZ.
    using LOUIS = ftl::mmio::Field<3, 21, eLOUIS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Level of Coherency for the cache hierarchy
    using LOC = ftl::mmio::Field<3, 24, eLOC, ftl::mmio::RO, ftl::mmio::Normal>;
    // Level of Unification for the cache hierarchy
    using LOU = ftl::mmio::Field<3, 27, eLOU, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbClidrFields

  struct SCB_CLIDR : ftl::mmio::Register<
      0xE000ED78u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbClidrFields::CL1,
      ScbClidrFields::CL2,
      ScbClidrFields::CL3,
      ScbClidrFields::CL4,
      ScbClidrFields::CL5,
      ScbClidrFields::CL6,
      ScbClidrFields::CL7,
      ScbClidrFields::LOUIS,
      ScbClidrFields::LOC,
      ScbClidrFields::LOU,
      ftl::mmio::Reserved<2, 30>> {
    using eCL1 = ScbClidrFields::eCL1;
    using eCL2 = ScbClidrFields::eCL2;
    using eCL3 = ScbClidrFields::eCL3;
    using eCL4 = ScbClidrFields::eCL4;
    using eCL5 = ScbClidrFields::eCL5;
    using eCL6 = ScbClidrFields::eCL6;
    using eCL7 = ScbClidrFields::eCL7;
    using eLOUIS = ScbClidrFields::eLOUIS;
    using eLOC = ScbClidrFields::eLOC;
    using eLOU = ScbClidrFields::eLOU;
    using CL1 = ScbClidrFields::CL1;
    using CL2 = ScbClidrFields::CL2;
    using CL3 = ScbClidrFields::CL3;
    using CL4 = ScbClidrFields::CL4;
    using CL5 = ScbClidrFields::CL5;
    using CL6 = ScbClidrFields::CL6;
    using CL7 = ScbClidrFields::CL7;
    using LOUIS = ScbClidrFields::LOUIS;
    using LOC = ScbClidrFields::LOC;
    using LOU = ScbClidrFields::LOU;
  };

  // Cache Type register
  struct ScbCtrFields {
    enum class eFORMAT : std::uint32_t {
      // ARMv7 format.
      eFORMAT_4 = 4,
    };

    // Log2 of the number of words in the smallest cache line of all the instruction caches that are controlled by the processor.
    using IMINLINE = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Log2 of the number of words in the smallest cache line of all the data caches and unified caches that are controlled by the processor.
    using DMINLINE = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Exclusives Reservation Granule. The maximum size of the reservation granule that has been implemented for the Load-Exclusive and Store-Exclusive instructions, encoded as Log2 of the number of words.
    using ERG = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Cache Write-back Granule. The maximum size of memory that can be overwritten as a result of the eviction of a cache entry that has had a memory location in it modified, encoded as Log2 of the number of words.
    using CWG = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates the implemented CTR format.
    using FORMAT = ftl::mmio::Field<3, 29, eFORMAT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCtrFields

  struct SCB_CTR : ftl::mmio::Register<
      0xE000ED7Cu,
      std::uint32_t,
      0x8000C000u,
      ftl::mmio::RO,
      ScbCtrFields::IMINLINE,
      ftl::mmio::Reserved<12, 4>,
      ScbCtrFields::DMINLINE,
      ScbCtrFields::ERG,
      ScbCtrFields::CWG,
      ftl::mmio::Reserved<1, 28>,
      ScbCtrFields::FORMAT> {
    using eFORMAT = ScbCtrFields::eFORMAT;
    using IMINLINE = ScbCtrFields::IMINLINE;
    using DMINLINE = ScbCtrFields::DMINLINE;
    using ERG = ScbCtrFields::ERG;
    using CWG = ScbCtrFields::CWG;
    using FORMAT = ScbCtrFields::FORMAT;
  };

  // Cache Size ID Register
  struct ScbCcsidrFields {
    enum class eLINESIZE : std::uint32_t {
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

    enum class eWA : std::uint32_t {
      // Feature not supported
      eWA_0 = 0,
      // Feature supported
      eWA_1 = 1,
    };

    enum class eRA : std::uint32_t {
      // Feature not supported
      eRA_0 = 0,
      // Feature supported
      eRA_1 = 1,
    };

    enum class eWB : std::uint32_t {
      // Feature not supported
      eWB_0 = 0,
      // Feature supported
      eWB_1 = 1,
    };

    enum class eWT : std::uint32_t {
      // Feature not supported
      eWT_0 = 0,
      // Feature supported
      eWT_1 = 1,
    };

    // (Log2(Number of words in cache line)) - 2.
    using LINESIZE = ftl::mmio::Field<3, 0, eLINESIZE, ftl::mmio::RO, ftl::mmio::Normal>;
    // (Associativity of cache) - 1, therefore a value of 0 indicates an associativity of 1. The associativity does not have to be a power of 2.
    using ASSOCIATIVITY = ftl::mmio::Field<10, 3, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // (Number of sets in cache) - 1, therefore a value of 0 indicates 1 set in the cache. The number of sets does not have to be a power of 2.
    using NUMSETS = ftl::mmio::Field<15, 13, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates whether the cache level supports write-allocation
    using WA = ftl::mmio::Field<1, 28, eWA, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates whether the cache level supports read-allocation
    using RA = ftl::mmio::Field<1, 29, eRA, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates whether the cache level supports write-back
    using WB = ftl::mmio::Field<1, 30, eWB, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates whether the cache level supports write-through
    using WT = ftl::mmio::Field<1, 31, eWT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCcsidrFields

  struct SCB_CCSIDR : ftl::mmio::Register<
      0xE000ED80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ScbCcsidrFields::LINESIZE,
      ScbCcsidrFields::ASSOCIATIVITY,
      ScbCcsidrFields::NUMSETS,
      ScbCcsidrFields::WA,
      ScbCcsidrFields::RA,
      ScbCcsidrFields::WB,
      ScbCcsidrFields::WT> {
    using eLINESIZE = ScbCcsidrFields::eLINESIZE;
    using eWA = ScbCcsidrFields::eWA;
    using eRA = ScbCcsidrFields::eRA;
    using eWB = ScbCcsidrFields::eWB;
    using eWT = ScbCcsidrFields::eWT;
    using LINESIZE = ScbCcsidrFields::LINESIZE;
    using ASSOCIATIVITY = ScbCcsidrFields::ASSOCIATIVITY;
    using NUMSETS = ScbCcsidrFields::NUMSETS;
    using WA = ScbCcsidrFields::WA;
    using RA = ScbCcsidrFields::RA;
    using WB = ScbCcsidrFields::WB;
    using WT = ScbCcsidrFields::WT;
  };

  // Cache Size Selection Register
  struct ScbCsselrFields {
    enum class eIND : std::uint32_t {
      // Data or unified cache.
      eIND_0 = 0,
      // Instruction cache.
      eIND_1 = 1,
    };

    enum class eLEVEL : std::uint32_t {
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

    // Instruction not data bit
    using IND = ftl::mmio::Field<1, 0, eIND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Cache level of required cache
    using LEVEL = ftl::mmio::Field<3, 1, eLEVEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbCsselrFields

  struct SCB_CSSELR : ftl::mmio::Register<
      0xE000ED84u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCsselrFields::IND,
      ScbCsselrFields::LEVEL,
      ftl::mmio::Reserved<28, 4>> {
    using eIND = ScbCsselrFields::eIND;
    using eLEVEL = ScbCsselrFields::eLEVEL;
    using IND = ScbCsselrFields::IND;
    using LEVEL = ScbCsselrFields::LEVEL;
  };

  // Coprocessor Access Control Register
  struct ScbCpacrFields {
    enum class eCP0 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP0_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP0_1 = 1,
      // Full access.
      eCP0_3 = 3,
    };

    enum class eCP1 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP1_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP1_1 = 1,
      // Full access.
      eCP1_3 = 3,
    };

    enum class eCP2 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP2_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP2_1 = 1,
      // Full access.
      eCP2_3 = 3,
    };

    enum class eCP3 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP3_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP3_1 = 1,
      // Full access.
      eCP3_3 = 3,
    };

    enum class eCP4 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP4_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP4_1 = 1,
      // Full access.
      eCP4_3 = 3,
    };

    enum class eCP5 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP5_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP5_1 = 1,
      // Full access.
      eCP5_3 = 3,
    };

    enum class eCP6 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP6_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP6_1 = 1,
      // Full access.
      eCP6_3 = 3,
    };

    enum class eCP7 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP7_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP7_1 = 1,
      // Full access.
      eCP7_3 = 3,
    };

    enum class eCP10 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP10_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP10_1 = 1,
      // Full access.
      eCP10_3 = 3,
    };

    enum class eCP11 : std::uint32_t {
      // Access denied. Any attempted access generates a NOCP UsageFault.
      eCP11_0 = 0,
      // Privileged access only. An unprivileged access generates a NOCP UsageFault.
      eCP11_1 = 1,
      // Full access.
      eCP11_3 = 3,
    };

    // Access privileges for coprocessor 0.
    using CP0 = ftl::mmio::Field<2, 0, eCP0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 1.
    using CP1 = ftl::mmio::Field<2, 2, eCP1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 2.
    using CP2 = ftl::mmio::Field<2, 4, eCP2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 3.
    using CP3 = ftl::mmio::Field<2, 6, eCP3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 4.
    using CP4 = ftl::mmio::Field<2, 8, eCP4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 5.
    using CP5 = ftl::mmio::Field<2, 10, eCP5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 6.
    using CP6 = ftl::mmio::Field<2, 12, eCP6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Access privileges for coprocessor 7.
    using CP7 = ftl::mmio::Field<2, 14, eCP7, ftl::mmio::RW, ftl::mmio::Normal>;
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
      ScbCpacrFields::CP0,
      ScbCpacrFields::CP1,
      ScbCpacrFields::CP2,
      ScbCpacrFields::CP3,
      ScbCpacrFields::CP4,
      ScbCpacrFields::CP5,
      ScbCpacrFields::CP6,
      ScbCpacrFields::CP7,
      ftl::mmio::Reserved<4, 16>,
      ScbCpacrFields::CP10,
      ScbCpacrFields::CP11,
      ftl::mmio::Reserved<8, 24>> {
    using eCP0 = ScbCpacrFields::eCP0;
    using eCP1 = ScbCpacrFields::eCP1;
    using eCP2 = ScbCpacrFields::eCP2;
    using eCP3 = ScbCpacrFields::eCP3;
    using eCP4 = ScbCpacrFields::eCP4;
    using eCP5 = ScbCpacrFields::eCP5;
    using eCP6 = ScbCpacrFields::eCP6;
    using eCP7 = ScbCpacrFields::eCP7;
    using eCP10 = ScbCpacrFields::eCP10;
    using eCP11 = ScbCpacrFields::eCP11;
    using CP0 = ScbCpacrFields::CP0;
    using CP1 = ScbCpacrFields::CP1;
    using CP2 = ScbCpacrFields::CP2;
    using CP3 = ScbCpacrFields::CP3;
    using CP4 = ScbCpacrFields::CP4;
    using CP5 = ScbCpacrFields::CP5;
    using CP6 = ScbCpacrFields::CP6;
    using CP7 = ScbCpacrFields::CP7;
    using CP10 = ScbCpacrFields::CP10;
    using CP11 = ScbCpacrFields::CP11;
  };

  // Instruction cache invalidate all to Point of Unification (PoU)
  struct ScbStirFields {
    // Indicates the interrupt to be triggered
    using INTID = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbStirFields

  struct SCB_STIR : ftl::mmio::Register<
      0xE000EF00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbStirFields::INTID,
      ftl::mmio::Reserved<23, 9>> {
    using INTID = ScbStirFields::INTID;
  };

  // Instruction cache invalidate all to Point of Unification (PoU)
  struct ScbIcialluFields {
    // I-cache invalidate all to PoU
    using ICIALLU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbIcialluFields

  struct SCB_ICIALLU : ftl::mmio::Register<
      0xE000EF50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbIcialluFields::ICIALLU> {
    using ICIALLU = ScbIcialluFields::ICIALLU;
  };

  // Instruction cache invalidate by address to PoU
  struct ScbIcimvauFields {
    // I-cache invalidate by MVA to PoU
    using ICIMVAU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbIcimvauFields

  struct SCB_ICIMVAU : ftl::mmio::Register<
      0xE000EF58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbIcimvauFields::ICIMVAU> {
    using ICIMVAU = ScbIcimvauFields::ICIMVAU;
  };

  // Data cache invalidate by address to Point of Coherency (PoC)
  struct ScbDcimvacFields {
    // D-cache invalidate by MVA to PoC
    using DCIMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDcimvacFields

  struct SCB_DCIMVAC : ftl::mmio::Register<
      0xE000EF5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDcimvacFields::DCIMVAC> {
    using DCIMVAC = ScbDcimvacFields::DCIMVAC;
  };

  // Data cache invalidate by set/way
  struct ScbDciswFields {
    // D-cache invalidate by set-way
    using DCISW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDciswFields

  struct SCB_DCISW : ftl::mmio::Register<
      0xE000EF60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDciswFields::DCISW> {
    using DCISW = ScbDciswFields::DCISW;
  };

  // Data cache by address to PoU
  struct ScbDccmvauFields {
    // D-cache clean by MVA to PoU
    using DCCMVAU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDccmvauFields

  struct SCB_DCCMVAU : ftl::mmio::Register<
      0xE000EF64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDccmvauFields::DCCMVAU> {
    using DCCMVAU = ScbDccmvauFields::DCCMVAU;
  };

  // Data cache clean by address to PoC
  struct ScbDccmvacFields {
    // D-cache clean by MVA to PoC
    using DCCMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDccmvacFields

  struct SCB_DCCMVAC : ftl::mmio::Register<
      0xE000EF68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDccmvacFields::DCCMVAC> {
    using DCCMVAC = ScbDccmvacFields::DCCMVAC;
  };

  // Data cache clean by set/way
  struct ScbDccswFields {
    // D-cache clean by set-way
    using DCCSW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDccswFields

  struct SCB_DCCSW : ftl::mmio::Register<
      0xE000EF6Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDccswFields::DCCSW> {
    using DCCSW = ScbDccswFields::DCCSW;
  };

  // Data cache clean and invalidate by address to PoC
  struct ScbDccimvacFields {
    // D-cache clean and invalidate by MVA to PoC
    using DCCIMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDccimvacFields

  struct SCB_DCCIMVAC : ftl::mmio::Register<
      0xE000EF70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDccimvacFields::DCCIMVAC> {
    using DCCIMVAC = ScbDccimvacFields::DCCIMVAC;
  };

  // Data cache clean and invalidate by set/way
  struct ScbDcciswFields {
    // D-cache clean and invalidate by set-way
    using DCCISW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct ScbDcciswFields

  struct SCB_DCCISW : ftl::mmio::Register<
      0xE000EF74u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      ScbDcciswFields::DCCISW> {
    using DCCISW = ScbDcciswFields::DCCISW;
  };

  // Instruction Tightly-Coupled Memory Control Register
  struct ScbCm7ItcmcrFields {
    enum class eEN : std::uint32_t {
      // TCM disabled.
      eEN_0 = 0,
      // TCM enabled.
      eEN_1 = 1,
    };

    enum class eRMW : std::uint32_t {
      // RMW disabled.
      eRMW_0 = 0,
      // RMW enabled.
      eRMW_1 = 1,
    };

    enum class eRETEN : std::uint32_t {
      // Retry phase disabled.
      eRETEN_0 = 0,
      // Retry phase enabled.
      eRETEN_1 = 1,
    };

    enum class eSZ : std::uint32_t {
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

    // TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
    using EN = ftl::mmio::Field<1, 0, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
    using RMW = ftl::mmio::Field<1, 1, eRMW, ftl::mmio::RW, ftl::mmio::Normal>;
    // Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
    using RETEN = ftl::mmio::Field<1, 2, eRETEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // TCM size. Indicates the size of the relevant TCM.
    using SZ = ftl::mmio::Field<4, 3, eSZ, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCm7ItcmcrFields

  struct SCB_CM7_ITCMCR : ftl::mmio::Register<
      0xE000EF90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7ItcmcrFields::EN,
      ScbCm7ItcmcrFields::RMW,
      ScbCm7ItcmcrFields::RETEN,
      ScbCm7ItcmcrFields::SZ,
      ftl::mmio::Reserved<25, 7>> {
    using eEN = ScbCm7ItcmcrFields::eEN;
    using eRMW = ScbCm7ItcmcrFields::eRMW;
    using eRETEN = ScbCm7ItcmcrFields::eRETEN;
    using eSZ = ScbCm7ItcmcrFields::eSZ;
    using EN = ScbCm7ItcmcrFields::EN;
    using RMW = ScbCm7ItcmcrFields::RMW;
    using RETEN = ScbCm7ItcmcrFields::RETEN;
    using SZ = ScbCm7ItcmcrFields::SZ;
  };

  // Data Tightly-Coupled Memory Control Register
  struct ScbCm7DtcmcrFields {
    enum class eEN : std::uint32_t {
      // TCM disabled.
      eEN_0 = 0,
      // TCM enabled.
      eEN_1 = 1,
    };

    enum class eRMW : std::uint32_t {
      // RMW disabled.
      eRMW_0 = 0,
      // RMW enabled.
      eRMW_1 = 1,
    };

    enum class eRETEN : std::uint32_t {
      // Retry phase disabled.
      eRETEN_0 = 0,
      // Retry phase enabled.
      eRETEN_1 = 1,
    };

    enum class eSZ : std::uint32_t {
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

    // TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.
    using EN = ftl::mmio::Field<1, 0, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.
    using RMW = ftl::mmio::Field<1, 1, eRMW, ftl::mmio::RW, ftl::mmio::Normal>;
    // Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.
    using RETEN = ftl::mmio::Field<1, 2, eRETEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // TCM size. Indicates the size of the relevant TCM.
    using SZ = ftl::mmio::Field<4, 3, eSZ, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCm7DtcmcrFields

  struct SCB_CM7_DTCMCR : ftl::mmio::Register<
      0xE000EF94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7DtcmcrFields::EN,
      ScbCm7DtcmcrFields::RMW,
      ScbCm7DtcmcrFields::RETEN,
      ScbCm7DtcmcrFields::SZ,
      ftl::mmio::Reserved<25, 7>> {
    using eEN = ScbCm7DtcmcrFields::eEN;
    using eRMW = ScbCm7DtcmcrFields::eRMW;
    using eRETEN = ScbCm7DtcmcrFields::eRETEN;
    using eSZ = ScbCm7DtcmcrFields::eSZ;
    using EN = ScbCm7DtcmcrFields::EN;
    using RMW = ScbCm7DtcmcrFields::RMW;
    using RETEN = ScbCm7DtcmcrFields::RETEN;
    using SZ = ScbCm7DtcmcrFields::SZ;
  };

  // AHBP Control Register
  struct ScbCm7AhbpcrFields {
    enum class eEN : std::uint32_t {
      // AHBP disabled. When disabled all accesses are made to the AXIM interface.
      eEN_0 = 0,
      // AHBP enabled.
      eEN_1 = 1,
    };

    enum class eSZ : std::uint32_t {
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

    // AHBP enable.
    using EN = ftl::mmio::Field<1, 0, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AHBP size.
    using SZ = ftl::mmio::Field<3, 1, eSZ, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ScbCm7AhbpcrFields

  struct SCB_CM7_AHBPCR : ftl::mmio::Register<
      0xE000EF98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7AhbpcrFields::EN,
      ScbCm7AhbpcrFields::SZ,
      ftl::mmio::Reserved<28, 4>> {
    using eEN = ScbCm7AhbpcrFields::eEN;
    using eSZ = ScbCm7AhbpcrFields::eSZ;
    using EN = ScbCm7AhbpcrFields::EN;
    using SZ = ScbCm7AhbpcrFields::SZ;
  };

  // L1 Cache Control Register
  struct ScbCm7CacrFields {
    enum class eSIWT : std::uint32_t {
      // Normal Cacheable Shared locations are treated as being Non-cacheable. Default mode of operation for Shared memory.
      eSIWT_0 = 0,
      // Normal Cacheable shared locations are treated as Write-Through.
      eSIWT_1 = 1,
    };

    enum class eECCDIS : std::uint32_t {
      // Enables ECC in the instruction and data cache.
      eECCDIS_0 = 0,
      // Disables ECC in the instruction and data cache.
      eECCDIS_1 = 1,
    };

    enum class eFORCEWT : std::uint32_t {
      // Disables Force Write-Through.
      eFORCEWT_0 = 0,
      // Enables Force Write-Through. All Cacheable memory regions are treated as Write-Through.
      eFORCEWT_1 = 1,
    };

    // Shared cacheable-is-WT for data cache. Enables limited cache coherency usage.
    using SIWT = ftl::mmio::Field<1, 0, eSIWT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables ECC in the instruction and data cache.
    using ECCDIS = ftl::mmio::Field<1, 1, eECCDIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables Force Write-Through in the data cache.
    using FORCEWT = ftl::mmio::Field<1, 2, eFORCEWT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbCm7CacrFields

  struct SCB_CM7_CACR : ftl::mmio::Register<
      0xE000EF9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7CacrFields::SIWT,
      ScbCm7CacrFields::ECCDIS,
      ScbCm7CacrFields::FORCEWT,
      ftl::mmio::Reserved<29, 3>> {
    using eSIWT = ScbCm7CacrFields::eSIWT;
    using eECCDIS = ScbCm7CacrFields::eECCDIS;
    using eFORCEWT = ScbCm7CacrFields::eFORCEWT;
    using SIWT = ScbCm7CacrFields::SIWT;
    using ECCDIS = ScbCm7CacrFields::ECCDIS;
    using FORCEWT = ScbCm7CacrFields::FORCEWT;
  };

  // AHB Slave Control Register
  struct ScbCm7AhbscrFields {
    enum class eCTL : std::uint32_t {
      // AHBS access priority demoted. This is the reset value.
      eCTL_0 = 0,
      // Software access priority demoted.
      eCTL_1 = 1,
      // AHBS access priority demoted by initializing the fairness counter to the CM7_AHBSCR[INITCOUNT] value when the software execution priority is higher than or equal to the threshold level programed in CM7_AHBSCR[TPRI].
      eCTL_2 = 2,
      // AHBSPRI signal has control of access priority.
      eCTL_3 = 3,
    };

    // AHBS prioritization control.
    using CTL = ftl::mmio::Field<2, 0, eCTL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Threshold execution priority for AHBS traffic demotion.
    using TPRI = ftl::mmio::Field<9, 2, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fairness counter initialization value.
    using INITCOUNT = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbCm7AhbscrFields

  struct SCB_CM7_AHBSCR : ftl::mmio::Register<
      0xE000EFA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7AhbscrFields::CTL,
      ScbCm7AhbscrFields::TPRI,
      ScbCm7AhbscrFields::INITCOUNT,
      ftl::mmio::Reserved<16, 16>> {
    using eCTL = ScbCm7AhbscrFields::eCTL;
    using CTL = ScbCm7AhbscrFields::CTL;
    using TPRI = ScbCm7AhbscrFields::TPRI;
    using INITCOUNT = ScbCm7AhbscrFields::INITCOUNT;
  };

  // Auxiliary Bus Fault Status Register
  struct ScbCm7AbfsrFields {
    enum class eAXIMTYPE : std::uint32_t {
      // OKAY.
      eAXIMTYPE_0 = 0,
      // EXOKAY.
      eAXIMTYPE_1 = 1,
      // SLVERR.
      eAXIMTYPE_2 = 2,
      // DECERR.
      eAXIMTYPE_3 = 3,
    };

    // Asynchronous fault on ITCM interface.
    using ITCM = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous fault on DTCM interface.
    using DTCM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous fault on AHBP interface.
    using AHBP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous fault on AXIM interface.
    using AXIM = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Asynchronous fault on EPPB interface.
    using EPPB = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates the type of fault on the AXIM interface. Only valid when AXIM is 1.
    using AXIMTYPE = ftl::mmio::Field<2, 8, eAXIMTYPE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScbCm7AbfsrFields

  struct SCB_CM7_ABFSR : ftl::mmio::Register<
      0xE000EFA8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScbCm7AbfsrFields::ITCM,
      ScbCm7AbfsrFields::DTCM,
      ScbCm7AbfsrFields::AHBP,
      ScbCm7AbfsrFields::AXIM,
      ScbCm7AbfsrFields::EPPB,
      ftl::mmio::Reserved<3, 5>,
      ScbCm7AbfsrFields::AXIMTYPE,
      ftl::mmio::Reserved<22, 10>> {
    using eAXIMTYPE = ScbCm7AbfsrFields::eAXIMTYPE;
    using ITCM = ScbCm7AbfsrFields::ITCM;
    using DTCM = ScbCm7AbfsrFields::DTCM;
    using AHBP = ScbCm7AbfsrFields::AHBP;
    using AXIM = ScbCm7AbfsrFields::AXIM;
    using EPPB = ScbCm7AbfsrFields::EPPB;
    using AXIMTYPE = ScbCm7AbfsrFields::AXIMTYPE;
  };

};

}  // namespace regs