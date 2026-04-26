#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// System Control Block
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm7Systemcontrol {
  // Auxiliary Control Register,
  struct SCB_ACTLR_fields_ {
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
  };  // struct SCB_ACTLR_fields_

  struct SCB_ACTLR : ftl::mmio::Register<
      0xE000E008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SCB_ACTLR_fields_::DISFOLD,
      ftl::mmio::Reserved<7, 3>,
      SCB_ACTLR_fields_::FPEXCODIS,
      SCB_ACTLR_fields_::DISRAMODE,
      SCB_ACTLR_fields_::DISITMATBFLUSH,
      SCB_ACTLR_fields_::DISBTACREAD,
      SCB_ACTLR_fields_::DISBTACALLOC,
      SCB_ACTLR_fields_::DISCRITAXIRUR,
      SCB_ACTLR_fields_::DISDI,
      SCB_ACTLR_fields_::DISISSCH1,
      SCB_ACTLR_fields_::DISDYNADD,
      SCB_ACTLR_fields_::DISCRITAXIRUW,
      SCB_ACTLR_fields_::DISFPUISSOPT,
      ftl::mmio::Reserved<3, 29>> {
    using eDISFOLD = SCB_ACTLR_fields_::eDISFOLD;
    using eFPEXCODIS = SCB_ACTLR_fields_::eFPEXCODIS;
    using eDISRAMODE = SCB_ACTLR_fields_::eDISRAMODE;
    using eDISITMATBFLUSH = SCB_ACTLR_fields_::eDISITMATBFLUSH;
    using eDISBTACREAD = SCB_ACTLR_fields_::eDISBTACREAD;
    using eDISBTACALLOC = SCB_ACTLR_fields_::eDISBTACALLOC;
    using eDISCRITAXIRUR = SCB_ACTLR_fields_::eDISCRITAXIRUR;
    using eDISDI = SCB_ACTLR_fields_::eDISDI;
    using eDISISSCH1 = SCB_ACTLR_fields_::eDISISSCH1;
    using eDISDYNADD = SCB_ACTLR_fields_::eDISDYNADD;
    using eDISCRITAXIRUW = SCB_ACTLR_fields_::eDISCRITAXIRUW;
    using eDISFPUISSOPT = SCB_ACTLR_fields_::eDISFPUISSOPT;
    using DISFOLD = SCB_ACTLR_fields_::DISFOLD;
    using FPEXCODIS = SCB_ACTLR_fields_::FPEXCODIS;
    using DISRAMODE = SCB_ACTLR_fields_::DISRAMODE;
    using DISITMATBFLUSH = SCB_ACTLR_fields_::DISITMATBFLUSH;
    using DISBTACREAD = SCB_ACTLR_fields_::DISBTACREAD;
    using DISBTACALLOC = SCB_ACTLR_fields_::DISBTACALLOC;
    using DISCRITAXIRUR = SCB_ACTLR_fields_::DISCRITAXIRUR;
    using DISDI = SCB_ACTLR_fields_::DISDI;
    using DISISSCH1 = SCB_ACTLR_fields_::DISISSCH1;
    using DISDYNADD = SCB_ACTLR_fields_::DISDYNADD;
    using DISCRITAXIRUW = SCB_ACTLR_fields_::DISCRITAXIRUW;
    using DISFPUISSOPT = SCB_ACTLR_fields_::DISFPUISSOPT;
  };

  // CPUID Base Register
  struct SCB_CPUID_fields_ {
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
  };  // struct SCB_CPUID_fields_

  struct SCB_CPUID : ftl::mmio::Register<
      0xE000ED00u,
      std::uint32_t,
      0x410FC240u,
      ftl::mmio::RO,
      SCB_CPUID_fields_::REVISION,
      SCB_CPUID_fields_::PARTNO,
      SCB_CPUID_fields_::ARCHITECTURE,
      SCB_CPUID_fields_::VARIANT,
      SCB_CPUID_fields_::IMPLEMENTER> {
    using REVISION = SCB_CPUID_fields_::REVISION;
    using PARTNO = SCB_CPUID_fields_::PARTNO;
    using ARCHITECTURE = SCB_CPUID_fields_::ARCHITECTURE;
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
      ftl::mmio::Reserved<1, 21>,
      SCB_ICSR_fields_::ISRPENDING,
      ftl::mmio::Reserved<2, 23>,
      SCB_ICSR_fields_::PENDSTCLR,
      SCB_ICSR_fields_::PENDSTSET,
      SCB_ICSR_fields_::PENDSVCLR,
      SCB_ICSR_fields_::PENDSVSET,
      ftl::mmio::Reserved<2, 29>,
      SCB_ICSR_fields_::NMIPENDSET> {
    using eRETTOBASE = SCB_ICSR_fields_::eRETTOBASE;
    using eISRPENDING = SCB_ICSR_fields_::eISRPENDING;
    using ePENDSTCLR = SCB_ICSR_fields_::ePENDSTCLR;
    using ePENDSTSET = SCB_ICSR_fields_::ePENDSTSET;
    using ePENDSVCLR = SCB_ICSR_fields_::ePENDSVCLR;
    using ePENDSVSET = SCB_ICSR_fields_::ePENDSVSET;
    using eNMIPENDSET = SCB_ICSR_fields_::eNMIPENDSET;
    using VECTACTIVE = SCB_ICSR_fields_::VECTACTIVE;
    using RETTOBASE = SCB_ICSR_fields_::RETTOBASE;
    using VECTPENDING = SCB_ICSR_fields_::VECTPENDING;
    using ISRPENDING = SCB_ICSR_fields_::ISRPENDING;
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
    using eVECTRESET = SCB_AIRCR_fields_::eVECTRESET;
    using eVECTCLRACTIVE = SCB_AIRCR_fields_::eVECTCLRACTIVE;
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

    // Indicates sleep-on-exit when returning from Handler mode to Thread mode
    using SLEEPONEXIT = ftl::mmio::Field<1, 1, eSLEEPONEXIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controls whether the processor uses sleep or deep sleep as its low power mode
    using SLEEPDEEP = ftl::mmio::Field<1, 2, eSLEEPDEEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Send Event on Pending bit
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
  };  // struct SCB_CCR_fields_

  struct SCB_CCR : ftl::mmio::Register<
      0xE000ED14u,
      std::uint32_t,
      0x00040000u,
      ftl::mmio::RW,
      SCB_CCR_fields_::NONBASETHRDENA,
      SCB_CCR_fields_::USERSETMPEND,
      ftl::mmio::Reserved<1, 2>,
      SCB_CCR_fields_::UNALIGN_TRP,
      SCB_CCR_fields_::DIV_0_TRP,
      ftl::mmio::Reserved<3, 5>,
      SCB_CCR_fields_::BFHFNMIGN,
      SCB_CCR_fields_::STKALIGN,
      ftl::mmio::Reserved<6, 10>,
      SCB_CCR_fields_::DC,
      SCB_CCR_fields_::IC,
      SCB_CCR_fields_::BP,
      ftl::mmio::Reserved<13, 19>> {
    using eNONBASETHRDENA = SCB_CCR_fields_::eNONBASETHRDENA;
    using eUSERSETMPEND = SCB_CCR_fields_::eUSERSETMPEND;
    using eUNALIGN_TRP = SCB_CCR_fields_::eUNALIGN_TRP;
    using eDIV_0_TRP = SCB_CCR_fields_::eDIV_0_TRP;
    using eBFHFNMIGN = SCB_CCR_fields_::eBFHFNMIGN;
    using eSTKALIGN = SCB_CCR_fields_::eSTKALIGN;
    using eDC = SCB_CCR_fields_::eDC;
    using eIC = SCB_CCR_fields_::eIC;
    using NONBASETHRDENA = SCB_CCR_fields_::NONBASETHRDENA;
    using USERSETMPEND = SCB_CCR_fields_::USERSETMPEND;
    using UNALIGN_TRP = SCB_CCR_fields_::UNALIGN_TRP;
    using DIV_0_TRP = SCB_CCR_fields_::DIV_0_TRP;
    using BFHFNMIGN = SCB_CCR_fields_::BFHFNMIGN;
    using STKALIGN = SCB_CCR_fields_::STKALIGN;
    using DC = SCB_CCR_fields_::DC;
    using IC = SCB_CCR_fields_::IC;
    using BP = SCB_CCR_fields_::BP;
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

  // Configurable Fault Status Register
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
    using eDEBUGEVT = SCB_HFSR_fields_::eDEBUGEVT;
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

  // MemManage Fault Address Register
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

  // Processor Feature Register 0
  struct SCB_ID_PFR0_fields_ {
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
  };  // struct SCB_ID_PFR0_fields_

  struct SCB_ID_PFR0 : ftl::mmio::Register<
      0xE000ED40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_PFR0_fields_::STATE0,
      SCB_ID_PFR0_fields_::STATE1,
      SCB_ID_PFR0_fields_::STATE2,
      SCB_ID_PFR0_fields_::STATE3,
      ftl::mmio::Reserved<16, 16>> {
    using eSTATE0 = SCB_ID_PFR0_fields_::eSTATE0;
    using eSTATE1 = SCB_ID_PFR0_fields_::eSTATE1;
    using STATE0 = SCB_ID_PFR0_fields_::STATE0;
    using STATE1 = SCB_ID_PFR0_fields_::STATE1;
    using STATE2 = SCB_ID_PFR0_fields_::STATE2;
    using STATE3 = SCB_ID_PFR0_fields_::STATE3;
  };

  // Processor Feature Register 1
  struct SCB_ID_PFR1_fields_ {
    enum class ePROGMODEL : std::uint32_t {
      // ARMv7-M unused
      ePROGMODEL_0 = 0,
      // Two-stack programmers' model supported
      ePROGMODEL_2 = 2,
    };

    // M profile programmers' model
    using PROGMODEL = ftl::mmio::Field<4, 8, ePROGMODEL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_PFR1_fields_

  struct SCB_ID_PFR1 : ftl::mmio::Register<
      0xE000ED44u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<8, 0>,
      SCB_ID_PFR1_fields_::PROGMODEL,
      ftl::mmio::Reserved<20, 12>> {
    using ePROGMODEL = SCB_ID_PFR1_fields_::ePROGMODEL;
    using PROGMODEL = SCB_ID_PFR1_fields_::PROGMODEL;
  };

  // Debug Feature Register
  struct SCB_ID_DFR0_fields_ {
    enum class eDEBUGMODEL : std::uint32_t {
      // Not supported
      eDEBUGMODEL_0 = 0,
      // Support for M profile Debug architecture, with memory-mapped access.
      eDEBUGMODEL_1 = 1,
    };

    // Support for memory-mapped debug model for M profile processors
    using DEBUGMODEL = ftl::mmio::Field<4, 20, eDEBUGMODEL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_DFR0_fields_

  struct SCB_ID_DFR0 : ftl::mmio::Register<
      0xE000ED48u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<20, 0>,
      SCB_ID_DFR0_fields_::DEBUGMODEL,
      ftl::mmio::Reserved<8, 24>> {
    using eDEBUGMODEL = SCB_ID_DFR0_fields_::eDEBUGMODEL;
    using DEBUGMODEL = SCB_ID_DFR0_fields_::DEBUGMODEL;
  };

  // Auxiliary Feature Register
  struct SCB_ID_AFR0_fields_ {
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.
    using IMPLEMENTATION_DEFINED3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_AFR0_fields_

  struct SCB_ID_AFR0 : ftl::mmio::Register<
      0xE000ED4Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED0,
      SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED1,
      SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED2,
      SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED3,
      ftl::mmio::Reserved<16, 16>> {
    using IMPLEMENTATION_DEFINED0 = SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED0;
    using IMPLEMENTATION_DEFINED1 = SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED1;
    using IMPLEMENTATION_DEFINED2 = SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED2;
    using IMPLEMENTATION_DEFINED3 = SCB_ID_AFR0_fields_::IMPLEMENTATION_DEFINED3;
  };

  // Memory Model Feature Register 0
  struct SCB_ID_MMFR0_fields_ {
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
  };  // struct SCB_ID_MMFR0_fields_

  struct SCB_ID_MMFR0 : ftl::mmio::Register<
      0xE000ED50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<4, 0>,
      SCB_ID_MMFR0_fields_::PMSASUPPORT,
      SCB_ID_MMFR0_fields_::OUTERMOST_SHAREABILITY,
      SCB_ID_MMFR0_fields_::SHAREABILITY_LEVELS,
      SCB_ID_MMFR0_fields_::TCM_SUPPORT,
      SCB_ID_MMFR0_fields_::AUXILIARY_REGISTERS,
      ftl::mmio::Reserved<8, 24>> {
    using ePMSASUPPORT = SCB_ID_MMFR0_fields_::ePMSASUPPORT;
    using eOUTERMOST_SHAREABILITY = SCB_ID_MMFR0_fields_::eOUTERMOST_SHAREABILITY;
    using eSHAREABILITY_LEVELS = SCB_ID_MMFR0_fields_::eSHAREABILITY_LEVELS;
    using eTCM_SUPPORT = SCB_ID_MMFR0_fields_::eTCM_SUPPORT;
    using eAUXILIARY_REGISTERS = SCB_ID_MMFR0_fields_::eAUXILIARY_REGISTERS;
    using PMSASUPPORT = SCB_ID_MMFR0_fields_::PMSASUPPORT;
    using OUTERMOST_SHAREABILITY = SCB_ID_MMFR0_fields_::OUTERMOST_SHAREABILITY;
    using SHAREABILITY_LEVELS = SCB_ID_MMFR0_fields_::SHAREABILITY_LEVELS;
    using TCM_SUPPORT = SCB_ID_MMFR0_fields_::TCM_SUPPORT;
    using AUXILIARY_REGISTERS = SCB_ID_MMFR0_fields_::AUXILIARY_REGISTERS;
  };

  // Memory Model Feature Register 1
  struct SCB_ID_MMFR1_fields_ {
    // Gives information about the implemented memory model and memory management support.
    using ID_MMFR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_MMFR1_fields_

  struct SCB_ID_MMFR1 : ftl::mmio::Register<
      0xE000ED54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_MMFR1_fields_::ID_MMFR1> {
    using ID_MMFR1 = SCB_ID_MMFR1_fields_::ID_MMFR1;
  };

  // Memory Model Feature Register 2
  struct SCB_ID_MMFR2_fields_ {
    enum class eWFI_STALL : std::uint32_t {
      // Not supported
      eWFI_STALL_0 = 0,
      // Support for WFI stalling
      eWFI_STALL_1 = 1,
    };

    // Indicates the support for Wait For Interrupt (WFI) stalling
    using WFI_STALL = ftl::mmio::Field<4, 24, eWFI_STALL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_MMFR2_fields_

  struct SCB_ID_MMFR2 : ftl::mmio::Register<
      0xE000ED58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      SCB_ID_MMFR2_fields_::WFI_STALL,
      ftl::mmio::Reserved<4, 28>> {
    using eWFI_STALL = SCB_ID_MMFR2_fields_::eWFI_STALL;
    using WFI_STALL = SCB_ID_MMFR2_fields_::WFI_STALL;
  };

  // Memory Model Feature Register 3
  struct SCB_ID_MMFR3_fields_ {
    // Gives information about the implemented memory model and memory management support.
    using ID_MMFR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SCB_ID_MMFR3_fields_

  struct SCB_ID_MMFR3 : ftl::mmio::Register<
      0xE000ED5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_MMFR3_fields_::ID_MMFR3> {
    using ID_MMFR3 = SCB_ID_MMFR3_fields_::ID_MMFR3;
  };

  // Instruction Set Attributes Register 0
  struct SCB_ID_ISAR0_fields_ {
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
  };  // struct SCB_ID_ISAR0_fields_

  struct SCB_ID_ISAR0 : ftl::mmio::Register<
      0xE000ED60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<4, 0>,
      SCB_ID_ISAR0_fields_::BITCOUNT_INSTRS,
      SCB_ID_ISAR0_fields_::BITFIELD_INSTRS,
      SCB_ID_ISAR0_fields_::CMPBRANCH_INSTRS,
      SCB_ID_ISAR0_fields_::COPROC_INSTRS,
      SCB_ID_ISAR0_fields_::DEBUG_INSTRS,
      SCB_ID_ISAR0_fields_::DIVIDE_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eBITCOUNT_INSTRS = SCB_ID_ISAR0_fields_::eBITCOUNT_INSTRS;
    using eBITFIELD_INSTRS = SCB_ID_ISAR0_fields_::eBITFIELD_INSTRS;
    using eCMPBRANCH_INSTRS = SCB_ID_ISAR0_fields_::eCMPBRANCH_INSTRS;
    using eCOPROC_INSTRS = SCB_ID_ISAR0_fields_::eCOPROC_INSTRS;
    using eDEBUG_INSTRS = SCB_ID_ISAR0_fields_::eDEBUG_INSTRS;
    using eDIVIDE_INSTRS = SCB_ID_ISAR0_fields_::eDIVIDE_INSTRS;
    using BITCOUNT_INSTRS = SCB_ID_ISAR0_fields_::BITCOUNT_INSTRS;
    using BITFIELD_INSTRS = SCB_ID_ISAR0_fields_::BITFIELD_INSTRS;
    using CMPBRANCH_INSTRS = SCB_ID_ISAR0_fields_::CMPBRANCH_INSTRS;
    using COPROC_INSTRS = SCB_ID_ISAR0_fields_::COPROC_INSTRS;
    using DEBUG_INSTRS = SCB_ID_ISAR0_fields_::DEBUG_INSTRS;
    using DIVIDE_INSTRS = SCB_ID_ISAR0_fields_::DIVIDE_INSTRS;
  };

  // Instruction Set Attributes Register 1
  struct SCB_ID_ISAR1_fields_ {
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
  };  // struct SCB_ID_ISAR1_fields_

  struct SCB_ID_ISAR1 : ftl::mmio::Register<
      0xE000ED64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<12, 0>,
      SCB_ID_ISAR1_fields_::EXTEND_INSTRS,
      SCB_ID_ISAR1_fields_::IFTHEN_INSTRS,
      SCB_ID_ISAR1_fields_::IMMEDIATE_INSTRS,
      SCB_ID_ISAR1_fields_::INTERWORK_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eEXTEND_INSTRS = SCB_ID_ISAR1_fields_::eEXTEND_INSTRS;
    using eIFTHEN_INSTRS = SCB_ID_ISAR1_fields_::eIFTHEN_INSTRS;
    using eIMMEDIATE_INSTRS = SCB_ID_ISAR1_fields_::eIMMEDIATE_INSTRS;
    using eINTERWORK_INSTRS = SCB_ID_ISAR1_fields_::eINTERWORK_INSTRS;
    using EXTEND_INSTRS = SCB_ID_ISAR1_fields_::EXTEND_INSTRS;
    using IFTHEN_INSTRS = SCB_ID_ISAR1_fields_::IFTHEN_INSTRS;
    using IMMEDIATE_INSTRS = SCB_ID_ISAR1_fields_::IMMEDIATE_INSTRS;
    using INTERWORK_INSTRS = SCB_ID_ISAR1_fields_::INTERWORK_INSTRS;
  };

  // Instruction Set Attributes Register 2
  struct SCB_ID_ISAR2_fields_ {
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
  };  // struct SCB_ID_ISAR2_fields_

  struct SCB_ID_ISAR2 : ftl::mmio::Register<
      0xE000ED68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_ISAR2_fields_::LOADSTORE_INSTRS,
      SCB_ID_ISAR2_fields_::MEMHINT_INSTRS,
      SCB_ID_ISAR2_fields_::MULTIACCESSINT_INSTRS,
      SCB_ID_ISAR2_fields_::MULT_INSTRS,
      SCB_ID_ISAR2_fields_::MULTS_INSTRS,
      SCB_ID_ISAR2_fields_::MULTU_INSTRS,
      ftl::mmio::Reserved<4, 24>,
      SCB_ID_ISAR2_fields_::REVERSAL_INSTRS> {
    using eLOADSTORE_INSTRS = SCB_ID_ISAR2_fields_::eLOADSTORE_INSTRS;
    using eMEMHINT_INSTRS = SCB_ID_ISAR2_fields_::eMEMHINT_INSTRS;
    using eMULTIACCESSINT_INSTRS = SCB_ID_ISAR2_fields_::eMULTIACCESSINT_INSTRS;
    using eMULT_INSTRS = SCB_ID_ISAR2_fields_::eMULT_INSTRS;
    using eMULTS_INSTRS = SCB_ID_ISAR2_fields_::eMULTS_INSTRS;
    using eMULTU_INSTRS = SCB_ID_ISAR2_fields_::eMULTU_INSTRS;
    using eREVERSAL_INSTRS = SCB_ID_ISAR2_fields_::eREVERSAL_INSTRS;
    using LOADSTORE_INSTRS = SCB_ID_ISAR2_fields_::LOADSTORE_INSTRS;
    using MEMHINT_INSTRS = SCB_ID_ISAR2_fields_::MEMHINT_INSTRS;
    using MULTIACCESSINT_INSTRS = SCB_ID_ISAR2_fields_::MULTIACCESSINT_INSTRS;
    using MULT_INSTRS = SCB_ID_ISAR2_fields_::MULT_INSTRS;
    using MULTS_INSTRS = SCB_ID_ISAR2_fields_::MULTS_INSTRS;
    using MULTU_INSTRS = SCB_ID_ISAR2_fields_::MULTU_INSTRS;
    using REVERSAL_INSTRS = SCB_ID_ISAR2_fields_::REVERSAL_INSTRS;
  };

  // Instruction Set Attributes Register 3
  struct SCB_ID_ISAR3_fields_ {
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
  };  // struct SCB_ID_ISAR3_fields_

  struct SCB_ID_ISAR3 : ftl::mmio::Register<
      0xE000ED6Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_ISAR3_fields_::SATURATE_INSTRS,
      SCB_ID_ISAR3_fields_::SIMD_INSTRS,
      SCB_ID_ISAR3_fields_::SVC_INSTRS,
      SCB_ID_ISAR3_fields_::SYNCHPRIM_INSTRS,
      SCB_ID_ISAR3_fields_::TABBRANCH_INSTRS,
      SCB_ID_ISAR3_fields_::THUMBCOPY_INSTRS,
      SCB_ID_ISAR3_fields_::TRUENOP_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eSATURATE_INSTRS = SCB_ID_ISAR3_fields_::eSATURATE_INSTRS;
    using eSIMD_INSTRS = SCB_ID_ISAR3_fields_::eSIMD_INSTRS;
    using eSVC_INSTRS = SCB_ID_ISAR3_fields_::eSVC_INSTRS;
    using eTABBRANCH_INSTRS = SCB_ID_ISAR3_fields_::eTABBRANCH_INSTRS;
    using eTHUMBCOPY_INSTRS = SCB_ID_ISAR3_fields_::eTHUMBCOPY_INSTRS;
    using eTRUENOP_INSTRS = SCB_ID_ISAR3_fields_::eTRUENOP_INSTRS;
    using SATURATE_INSTRS = SCB_ID_ISAR3_fields_::SATURATE_INSTRS;
    using SIMD_INSTRS = SCB_ID_ISAR3_fields_::SIMD_INSTRS;
    using SVC_INSTRS = SCB_ID_ISAR3_fields_::SVC_INSTRS;
    using SYNCHPRIM_INSTRS = SCB_ID_ISAR3_fields_::SYNCHPRIM_INSTRS;
    using TABBRANCH_INSTRS = SCB_ID_ISAR3_fields_::TABBRANCH_INSTRS;
    using THUMBCOPY_INSTRS = SCB_ID_ISAR3_fields_::THUMBCOPY_INSTRS;
    using TRUENOP_INSTRS = SCB_ID_ISAR3_fields_::TRUENOP_INSTRS;
  };

  // Instruction Set Attributes Register 4
  struct SCB_ID_ISAR4_fields_ {
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
  };  // struct SCB_ID_ISAR4_fields_

  struct SCB_ID_ISAR4 : ftl::mmio::Register<
      0xE000ED70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_ID_ISAR4_fields_::UNPRIV_INSTRS,
      SCB_ID_ISAR4_fields_::WITHSHIFTS_INSTRS,
      SCB_ID_ISAR4_fields_::WRITEBACK_INSTRS,
      ftl::mmio::Reserved<4, 12>,
      SCB_ID_ISAR4_fields_::BARRIER_INSTRS,
      SCB_ID_ISAR4_fields_::SYNCHPRIM_INSTRS_FRAC,
      SCB_ID_ISAR4_fields_::PSR_M_INSTRS,
      ftl::mmio::Reserved<4, 28>> {
    using eUNPRIV_INSTRS = SCB_ID_ISAR4_fields_::eUNPRIV_INSTRS;
    using eWITHSHIFTS_INSTRS = SCB_ID_ISAR4_fields_::eWITHSHIFTS_INSTRS;
    using eWRITEBACK_INSTRS = SCB_ID_ISAR4_fields_::eWRITEBACK_INSTRS;
    using eBARRIER_INSTRS = SCB_ID_ISAR4_fields_::eBARRIER_INSTRS;
    using ePSR_M_INSTRS = SCB_ID_ISAR4_fields_::ePSR_M_INSTRS;
    using UNPRIV_INSTRS = SCB_ID_ISAR4_fields_::UNPRIV_INSTRS;
    using WITHSHIFTS_INSTRS = SCB_ID_ISAR4_fields_::WITHSHIFTS_INSTRS;
    using WRITEBACK_INSTRS = SCB_ID_ISAR4_fields_::WRITEBACK_INSTRS;
    using BARRIER_INSTRS = SCB_ID_ISAR4_fields_::BARRIER_INSTRS;
    using SYNCHPRIM_INSTRS_FRAC = SCB_ID_ISAR4_fields_::SYNCHPRIM_INSTRS_FRAC;
    using PSR_M_INSTRS = SCB_ID_ISAR4_fields_::PSR_M_INSTRS;
  };

  // Cache Level ID register
  struct SCB_CLIDR_fields_ {
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
  };  // struct SCB_CLIDR_fields_

  struct SCB_CLIDR : ftl::mmio::Register<
      0xE000ED78u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_CLIDR_fields_::CL1,
      SCB_CLIDR_fields_::CL2,
      SCB_CLIDR_fields_::CL3,
      SCB_CLIDR_fields_::CL4,
      SCB_CLIDR_fields_::CL5,
      SCB_CLIDR_fields_::CL6,
      SCB_CLIDR_fields_::CL7,
      SCB_CLIDR_fields_::LOUIS,
      SCB_CLIDR_fields_::LOC,
      SCB_CLIDR_fields_::LOU,
      ftl::mmio::Reserved<2, 30>> {
    using eCL1 = SCB_CLIDR_fields_::eCL1;
    using eCL2 = SCB_CLIDR_fields_::eCL2;
    using eCL3 = SCB_CLIDR_fields_::eCL3;
    using eCL4 = SCB_CLIDR_fields_::eCL4;
    using eCL5 = SCB_CLIDR_fields_::eCL5;
    using eCL6 = SCB_CLIDR_fields_::eCL6;
    using eCL7 = SCB_CLIDR_fields_::eCL7;
    using eLOUIS = SCB_CLIDR_fields_::eLOUIS;
    using eLOC = SCB_CLIDR_fields_::eLOC;
    using eLOU = SCB_CLIDR_fields_::eLOU;
    using CL1 = SCB_CLIDR_fields_::CL1;
    using CL2 = SCB_CLIDR_fields_::CL2;
    using CL3 = SCB_CLIDR_fields_::CL3;
    using CL4 = SCB_CLIDR_fields_::CL4;
    using CL5 = SCB_CLIDR_fields_::CL5;
    using CL6 = SCB_CLIDR_fields_::CL6;
    using CL7 = SCB_CLIDR_fields_::CL7;
    using LOUIS = SCB_CLIDR_fields_::LOUIS;
    using LOC = SCB_CLIDR_fields_::LOC;
    using LOU = SCB_CLIDR_fields_::LOU;
  };

  // Cache Type register
  struct SCB_CTR_fields_ {
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
  };  // struct SCB_CTR_fields_

  struct SCB_CTR : ftl::mmio::Register<
      0xE000ED7Cu,
      std::uint32_t,
      0x8000C000u,
      ftl::mmio::RO,
      SCB_CTR_fields_::IMINLINE,
      ftl::mmio::Reserved<12, 4>,
      SCB_CTR_fields_::DMINLINE,
      SCB_CTR_fields_::ERG,
      SCB_CTR_fields_::CWG,
      ftl::mmio::Reserved<1, 28>,
      SCB_CTR_fields_::FORMAT> {
    using eFORMAT = SCB_CTR_fields_::eFORMAT;
    using IMINLINE = SCB_CTR_fields_::IMINLINE;
    using DMINLINE = SCB_CTR_fields_::DMINLINE;
    using ERG = SCB_CTR_fields_::ERG;
    using CWG = SCB_CTR_fields_::CWG;
    using FORMAT = SCB_CTR_fields_::FORMAT;
  };

  // Cache Size ID Register
  struct SCB_CCSIDR_fields_ {
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
  };  // struct SCB_CCSIDR_fields_

  struct SCB_CCSIDR : ftl::mmio::Register<
      0xE000ED80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SCB_CCSIDR_fields_::LINESIZE,
      SCB_CCSIDR_fields_::ASSOCIATIVITY,
      SCB_CCSIDR_fields_::NUMSETS,
      SCB_CCSIDR_fields_::WA,
      SCB_CCSIDR_fields_::RA,
      SCB_CCSIDR_fields_::WB,
      SCB_CCSIDR_fields_::WT> {
    using eLINESIZE = SCB_CCSIDR_fields_::eLINESIZE;
    using eWA = SCB_CCSIDR_fields_::eWA;
    using eRA = SCB_CCSIDR_fields_::eRA;
    using eWB = SCB_CCSIDR_fields_::eWB;
    using eWT = SCB_CCSIDR_fields_::eWT;
    using LINESIZE = SCB_CCSIDR_fields_::LINESIZE;
    using ASSOCIATIVITY = SCB_CCSIDR_fields_::ASSOCIATIVITY;
    using NUMSETS = SCB_CCSIDR_fields_::NUMSETS;
    using WA = SCB_CCSIDR_fields_::WA;
    using RA = SCB_CCSIDR_fields_::RA;
    using WB = SCB_CCSIDR_fields_::WB;
    using WT = SCB_CCSIDR_fields_::WT;
  };

  // Cache Size Selection Register
  struct SCB_CSSELR_fields_ {
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
  };  // struct SCB_CSSELR_fields_

  struct SCB_CSSELR : ftl::mmio::Register<
      0xE000ED84u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CSSELR_fields_::IND,
      SCB_CSSELR_fields_::LEVEL,
      ftl::mmio::Reserved<28, 4>> {
    using eIND = SCB_CSSELR_fields_::eIND;
    using eLEVEL = SCB_CSSELR_fields_::eLEVEL;
    using IND = SCB_CSSELR_fields_::IND;
    using LEVEL = SCB_CSSELR_fields_::LEVEL;
  };

  // Coprocessor Access Control Register
  struct SCB_CPACR_fields_ {
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
  };  // struct SCB_CPACR_fields_

  struct SCB_CPACR : ftl::mmio::Register<
      0xE000ED88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CPACR_fields_::CP0,
      SCB_CPACR_fields_::CP1,
      SCB_CPACR_fields_::CP2,
      SCB_CPACR_fields_::CP3,
      SCB_CPACR_fields_::CP4,
      SCB_CPACR_fields_::CP5,
      SCB_CPACR_fields_::CP6,
      SCB_CPACR_fields_::CP7,
      ftl::mmio::Reserved<4, 16>,
      SCB_CPACR_fields_::CP10,
      SCB_CPACR_fields_::CP11,
      ftl::mmio::Reserved<8, 24>> {
    using eCP0 = SCB_CPACR_fields_::eCP0;
    using eCP1 = SCB_CPACR_fields_::eCP1;
    using eCP2 = SCB_CPACR_fields_::eCP2;
    using eCP3 = SCB_CPACR_fields_::eCP3;
    using eCP4 = SCB_CPACR_fields_::eCP4;
    using eCP5 = SCB_CPACR_fields_::eCP5;
    using eCP6 = SCB_CPACR_fields_::eCP6;
    using eCP7 = SCB_CPACR_fields_::eCP7;
    using eCP10 = SCB_CPACR_fields_::eCP10;
    using eCP11 = SCB_CPACR_fields_::eCP11;
    using CP0 = SCB_CPACR_fields_::CP0;
    using CP1 = SCB_CPACR_fields_::CP1;
    using CP2 = SCB_CPACR_fields_::CP2;
    using CP3 = SCB_CPACR_fields_::CP3;
    using CP4 = SCB_CPACR_fields_::CP4;
    using CP5 = SCB_CPACR_fields_::CP5;
    using CP6 = SCB_CPACR_fields_::CP6;
    using CP7 = SCB_CPACR_fields_::CP7;
    using CP10 = SCB_CPACR_fields_::CP10;
    using CP11 = SCB_CPACR_fields_::CP11;
  };

  // Instruction cache invalidate all to Point of Unification (PoU)
  struct SCB_STIR_fields_ {
    // Indicates the interrupt to be triggered
    using INTID = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_STIR_fields_

  struct SCB_STIR : ftl::mmio::Register<
      0xE000EF00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_STIR_fields_::INTID,
      ftl::mmio::Reserved<23, 9>> {
    using INTID = SCB_STIR_fields_::INTID;
  };

  // Instruction cache invalidate all to Point of Unification (PoU)
  struct SCB_ICIALLU_fields_ {
    // I-cache invalidate all to PoU
    using ICIALLU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_ICIALLU_fields_

  struct SCB_ICIALLU : ftl::mmio::Register<
      0xE000EF50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_ICIALLU_fields_::ICIALLU> {
    using ICIALLU = SCB_ICIALLU_fields_::ICIALLU;
  };

  // Instruction cache invalidate by address to PoU
  struct SCB_ICIMVAU_fields_ {
    // I-cache invalidate by MVA to PoU
    using ICIMVAU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_ICIMVAU_fields_

  struct SCB_ICIMVAU : ftl::mmio::Register<
      0xE000EF58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_ICIMVAU_fields_::ICIMVAU> {
    using ICIMVAU = SCB_ICIMVAU_fields_::ICIMVAU;
  };

  // Data cache invalidate by address to Point of Coherency (PoC)
  struct SCB_DCIMVAC_fields_ {
    // D-cache invalidate by MVA to PoC
    using DCIMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCIMVAC_fields_

  struct SCB_DCIMVAC : ftl::mmio::Register<
      0xE000EF5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCIMVAC_fields_::DCIMVAC> {
    using DCIMVAC = SCB_DCIMVAC_fields_::DCIMVAC;
  };

  // Data cache invalidate by set/way
  struct SCB_DCISW_fields_ {
    // D-cache invalidate by set-way
    using DCISW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCISW_fields_

  struct SCB_DCISW : ftl::mmio::Register<
      0xE000EF60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCISW_fields_::DCISW> {
    using DCISW = SCB_DCISW_fields_::DCISW;
  };

  // Data cache by address to PoU
  struct SCB_DCCMVAU_fields_ {
    // D-cache clean by MVA to PoU
    using DCCMVAU = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCCMVAU_fields_

  struct SCB_DCCMVAU : ftl::mmio::Register<
      0xE000EF64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCCMVAU_fields_::DCCMVAU> {
    using DCCMVAU = SCB_DCCMVAU_fields_::DCCMVAU;
  };

  // Data cache clean by address to PoC
  struct SCB_DCCMVAC_fields_ {
    // D-cache clean by MVA to PoC
    using DCCMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCCMVAC_fields_

  struct SCB_DCCMVAC : ftl::mmio::Register<
      0xE000EF68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCCMVAC_fields_::DCCMVAC> {
    using DCCMVAC = SCB_DCCMVAC_fields_::DCCMVAC;
  };

  // Data cache clean by set/way
  struct SCB_DCCSW_fields_ {
    // D-cache clean by set-way
    using DCCSW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCCSW_fields_

  struct SCB_DCCSW : ftl::mmio::Register<
      0xE000EF6Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCCSW_fields_::DCCSW> {
    using DCCSW = SCB_DCCSW_fields_::DCCSW;
  };

  // Data cache clean and invalidate by address to PoC
  struct SCB_DCCIMVAC_fields_ {
    // D-cache clean and invalidate by MVA to PoC
    using DCCIMVAC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCCIMVAC_fields_

  struct SCB_DCCIMVAC : ftl::mmio::Register<
      0xE000EF70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCCIMVAC_fields_::DCCIMVAC> {
    using DCCIMVAC = SCB_DCCIMVAC_fields_::DCCIMVAC;
  };

  // Data cache clean and invalidate by set/way
  struct SCB_DCCISW_fields_ {
    // D-cache clean and invalidate by set-way
    using DCCISW = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct SCB_DCCISW_fields_

  struct SCB_DCCISW : ftl::mmio::Register<
      0xE000EF74u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      SCB_DCCISW_fields_::DCCISW> {
    using DCCISW = SCB_DCCISW_fields_::DCCISW;
  };

  // Instruction Tightly-Coupled Memory Control Register
  struct SCB_CM7_ITCMCR_fields_ {
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
  };  // struct SCB_CM7_ITCMCR_fields_

  struct SCB_CM7_ITCMCR : ftl::mmio::Register<
      0xE000EF90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_ITCMCR_fields_::EN,
      SCB_CM7_ITCMCR_fields_::RMW,
      SCB_CM7_ITCMCR_fields_::RETEN,
      SCB_CM7_ITCMCR_fields_::SZ,
      ftl::mmio::Reserved<25, 7>> {
    using eEN = SCB_CM7_ITCMCR_fields_::eEN;
    using eRMW = SCB_CM7_ITCMCR_fields_::eRMW;
    using eRETEN = SCB_CM7_ITCMCR_fields_::eRETEN;
    using eSZ = SCB_CM7_ITCMCR_fields_::eSZ;
    using EN = SCB_CM7_ITCMCR_fields_::EN;
    using RMW = SCB_CM7_ITCMCR_fields_::RMW;
    using RETEN = SCB_CM7_ITCMCR_fields_::RETEN;
    using SZ = SCB_CM7_ITCMCR_fields_::SZ;
  };

  // Data Tightly-Coupled Memory Control Register
  struct SCB_CM7_DTCMCR_fields_ {
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
  };  // struct SCB_CM7_DTCMCR_fields_

  struct SCB_CM7_DTCMCR : ftl::mmio::Register<
      0xE000EF94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_DTCMCR_fields_::EN,
      SCB_CM7_DTCMCR_fields_::RMW,
      SCB_CM7_DTCMCR_fields_::RETEN,
      SCB_CM7_DTCMCR_fields_::SZ,
      ftl::mmio::Reserved<25, 7>> {
    using eEN = SCB_CM7_DTCMCR_fields_::eEN;
    using eRMW = SCB_CM7_DTCMCR_fields_::eRMW;
    using eRETEN = SCB_CM7_DTCMCR_fields_::eRETEN;
    using eSZ = SCB_CM7_DTCMCR_fields_::eSZ;
    using EN = SCB_CM7_DTCMCR_fields_::EN;
    using RMW = SCB_CM7_DTCMCR_fields_::RMW;
    using RETEN = SCB_CM7_DTCMCR_fields_::RETEN;
    using SZ = SCB_CM7_DTCMCR_fields_::SZ;
  };

  // AHBP Control Register
  struct SCB_CM7_AHBPCR_fields_ {
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
  };  // struct SCB_CM7_AHBPCR_fields_

  struct SCB_CM7_AHBPCR : ftl::mmio::Register<
      0xE000EF98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_AHBPCR_fields_::EN,
      SCB_CM7_AHBPCR_fields_::SZ,
      ftl::mmio::Reserved<28, 4>> {
    using eEN = SCB_CM7_AHBPCR_fields_::eEN;
    using eSZ = SCB_CM7_AHBPCR_fields_::eSZ;
    using EN = SCB_CM7_AHBPCR_fields_::EN;
    using SZ = SCB_CM7_AHBPCR_fields_::SZ;
  };

  // L1 Cache Control Register
  struct SCB_CM7_CACR_fields_ {
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
  };  // struct SCB_CM7_CACR_fields_

  struct SCB_CM7_CACR : ftl::mmio::Register<
      0xE000EF9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_CACR_fields_::SIWT,
      SCB_CM7_CACR_fields_::ECCDIS,
      SCB_CM7_CACR_fields_::FORCEWT,
      ftl::mmio::Reserved<29, 3>> {
    using eSIWT = SCB_CM7_CACR_fields_::eSIWT;
    using eECCDIS = SCB_CM7_CACR_fields_::eECCDIS;
    using eFORCEWT = SCB_CM7_CACR_fields_::eFORCEWT;
    using SIWT = SCB_CM7_CACR_fields_::SIWT;
    using ECCDIS = SCB_CM7_CACR_fields_::ECCDIS;
    using FORCEWT = SCB_CM7_CACR_fields_::FORCEWT;
  };

  // AHB Slave Control Register
  struct SCB_CM7_AHBSCR_fields_ {
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
  };  // struct SCB_CM7_AHBSCR_fields_

  struct SCB_CM7_AHBSCR : ftl::mmio::Register<
      0xE000EFA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_AHBSCR_fields_::CTL,
      SCB_CM7_AHBSCR_fields_::TPRI,
      SCB_CM7_AHBSCR_fields_::INITCOUNT,
      ftl::mmio::Reserved<16, 16>> {
    using eCTL = SCB_CM7_AHBSCR_fields_::eCTL;
    using CTL = SCB_CM7_AHBSCR_fields_::CTL;
    using TPRI = SCB_CM7_AHBSCR_fields_::TPRI;
    using INITCOUNT = SCB_CM7_AHBSCR_fields_::INITCOUNT;
  };

  // Auxiliary Bus Fault Status Register
  struct SCB_CM7_ABFSR_fields_ {
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
  };  // struct SCB_CM7_ABFSR_fields_

  struct SCB_CM7_ABFSR : ftl::mmio::Register<
      0xE000EFA8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCB_CM7_ABFSR_fields_::ITCM,
      SCB_CM7_ABFSR_fields_::DTCM,
      SCB_CM7_ABFSR_fields_::AHBP,
      SCB_CM7_ABFSR_fields_::AXIM,
      SCB_CM7_ABFSR_fields_::EPPB,
      ftl::mmio::Reserved<3, 5>,
      SCB_CM7_ABFSR_fields_::AXIMTYPE,
      ftl::mmio::Reserved<22, 10>> {
    using eAXIMTYPE = SCB_CM7_ABFSR_fields_::eAXIMTYPE;
    using ITCM = SCB_CM7_ABFSR_fields_::ITCM;
    using DTCM = SCB_CM7_ABFSR_fields_::DTCM;
    using AHBP = SCB_CM7_ABFSR_fields_::AHBP;
    using AXIM = SCB_CM7_ABFSR_fields_::AXIM;
    using EPPB = SCB_CM7_ABFSR_fields_::EPPB;
    using AXIMTYPE = SCB_CM7_ABFSR_fields_::AXIMTYPE;
  };

};

}  // namespace regs