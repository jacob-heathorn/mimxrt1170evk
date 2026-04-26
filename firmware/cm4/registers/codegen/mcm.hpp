#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Core Platform Miscellaneous Control Module
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Mcm {
  // SoC-defined platform revision
  struct MCM_PLREV_fields_ {
    // The PLREV[15:0] field is specified by an platform input signal to define a software-visible revision number.
    using PLREV = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_PLREV_fields_

  struct MCM_PLREV : ftl::mmio::Register<
      0xE0080000u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      MCM_PLREV_fields_::PLREV> {
    using PLREV = MCM_PLREV_fields_::PLREV;
  };

  // Processor core type
  struct MCM_PCT_fields_ {
    enum class ePCT : std::uint32_t {
      // ARM Cortex M4
      ePCT_44096 = 44096,
    };

    // This MCM design supports the ARM Cortex M4 core. The following value identifies this core complex.
    using PCT = ftl::mmio::Field<16, 0, ePCT, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_PCT_fields_

  struct MCM_PCT : ftl::mmio::Register<
      0xE0080002u,
      std::uint16_t,
      0xAC40u,
      ftl::mmio::RO,
      MCM_PCT_fields_::PCT> {
    using ePCT = MCM_PCT_fields_::ePCT;
    using PCT = MCM_PCT_fields_::PCT;
  };

  // Memory configuration
  struct MCM_MEMCFG_fields_ {
    // TCRAMU size
    using TCRAMUSZ = ftl::mmio::Field<4, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // TCRAML size
    using TCRAMLSZ = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_MEMCFG_fields_

  struct MCM_MEMCFG : ftl::mmio::Register<
      0xE0080004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<2, 0>,
      MCM_MEMCFG_fields_::TCRAMUSZ,
      ftl::mmio::Reserved<2, 6>,
      MCM_MEMCFG_fields_::TCRAMLSZ,
      ftl::mmio::Reserved<20, 12>> {
    using TCRAMUSZ = MCM_MEMCFG_fields_::TCRAMUSZ;
    using TCRAMLSZ = MCM_MEMCFG_fields_::TCRAMLSZ;
  };

  // Crossbar Switch (AXBS) Slave Configuration
  struct MCM_PLASC_fields_ {
    enum class eASC : std::uint32_t {
      // A bus slave connection to AXBS input port n is absent
      eASC_0 = 0,
      // A bus slave connection to AXBS input port n is present
      eASC_1 = 1,
    };

    // Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
    using ASC = ftl::mmio::Field<8, 0, eASC, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_PLASC_fields_

  struct MCM_PLASC : ftl::mmio::Register<
      0xE0080008u,
      std::uint16_t,
      0x001Fu,
      ftl::mmio::RO,
      MCM_PLASC_fields_::ASC,
      ftl::mmio::Reserved<8, 8>> {
    using eASC = MCM_PLASC_fields_::eASC;
    using ASC = MCM_PLASC_fields_::ASC;
  };

  // Crossbar Switch (AXBS) Master Configuration
  struct MCM_PLAMC_fields_ {
    enum class eAMC : std::uint32_t {
      // A bus master connection to AXBS input port n is absent
      eAMC_0 = 0,
      // A bus master connection to AXBS input port n is present
      eAMC_1 = 1,
    };

    // Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
    using AMC = ftl::mmio::Field<8, 0, eAMC, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_PLAMC_fields_

  struct MCM_PLAMC : ftl::mmio::Register<
      0xE008000Au,
      std::uint16_t,
      0x001Fu,
      ftl::mmio::RO,
      MCM_PLAMC_fields_::AMC,
      ftl::mmio::Reserved<8, 8>> {
    using eAMC = MCM_PLAMC_fields_::eAMC;
    using AMC = MCM_PLAMC_fields_::AMC;
  };

  // Control Register
  struct MCM_CR_fields_ {
    enum class eCBRR : std::uint32_t {
      // Fixed-priority arbitration
      eCBRR_0 = 0,
      // Round-robin arbitration
      eCBRR_1 = 1,
    };

    enum class eSTCMAP : std::uint32_t {
      // Round robin
      eSTCMAP_0 = 0,
      // Special round robin (favors TCM backoor accesses over the processor)
      eSTCMAP_1 = 1,
      // Fixed priority. Processor has highest, backdoor has lowest
      eSTCMAP_2 = 2,
      // Fixed priority. Backdoor has highest, processor has lowest
      eSTCMAP_3 = 3,
    };

    enum class eCTCMAP : std::uint32_t {
      // Round robin
      eCTCMAP_0 = 0,
      // Special round robin (favors TCM backoor accesses over the processor)
      eCTCMAP_1 = 1,
      // Fixed priority. Processor has highest, backdoor has lowest
      eCTCMAP_2 = 2,
      // Fixed priority. Backdoor has highest, processor has lowest
      eCTCMAP_3 = 3,
    };

    // Status bits
    using STATUS = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Crossbar round-robin arbitration enable
    using CBRR = ftl::mmio::Field<1, 9, eCBRR, ftl::mmio::RW, ftl::mmio::Normal>;
    // System TCM arbitration priority
    using STCMAP = ftl::mmio::Field<2, 24, eSTCMAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // System TCM write protect
    using STCMWP = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Code TCM arbitration priority
    using CTCMAP = ftl::mmio::Field<2, 28, eCTCMAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Code TCM Write Protect
    using CTCMWP = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCM_CR_fields_

  struct MCM_CR : ftl::mmio::Register<
      0xE008000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MCM_CR_fields_::STATUS,
      MCM_CR_fields_::CBRR,
      ftl::mmio::Reserved<14, 10>,
      MCM_CR_fields_::STCMAP,
      MCM_CR_fields_::STCMWP,
      ftl::mmio::Reserved<1, 27>,
      MCM_CR_fields_::CTCMAP,
      MCM_CR_fields_::CTCMWP,
      ftl::mmio::Reserved<1, 31>> {
    using eCBRR = MCM_CR_fields_::eCBRR;
    using eSTCMAP = MCM_CR_fields_::eSTCMAP;
    using eCTCMAP = MCM_CR_fields_::eCTCMAP;
    using STATUS = MCM_CR_fields_::STATUS;
    using CBRR = MCM_CR_fields_::CBRR;
    using STCMAP = MCM_CR_fields_::STCMAP;
    using STCMWP = MCM_CR_fields_::STCMWP;
    using CTCMAP = MCM_CR_fields_::CTCMAP;
    using CTCMWP = MCM_CR_fields_::CTCMWP;
  };

  // Interrupt Status and Control Register
  struct MCM_ISCR_fields_ {
    enum class eCWBER : std::uint32_t {
      // No error
      eCWBER_0 = 0,
      // Error occurred
      eCWBER_1 = 1,
    };

    enum class eFIOC : std::uint32_t {
      // No interrupt
      eFIOC_0 = 0,
      // Interrupt occurred
      eFIOC_1 = 1,
    };

    enum class eFDZC : std::uint32_t {
      // No interrupt
      eFDZC_0 = 0,
      // Interrupt occurred
      eFDZC_1 = 1,
    };

    enum class eFOFC : std::uint32_t {
      // No interrupt
      eFOFC_0 = 0,
      // Interrupt occurred
      eFOFC_1 = 1,
    };

    enum class eFUFC : std::uint32_t {
      // No interrupt
      eFUFC_0 = 0,
      // Interrupt occurred
      eFUFC_1 = 1,
    };

    enum class eFIXC : std::uint32_t {
      // No interrupt
      eFIXC_0 = 0,
      // Interrupt occurred
      eFIXC_1 = 1,
    };

    enum class eFIDC : std::uint32_t {
      // No interrupt
      eFIDC_0 = 0,
      // Interrupt occurred
      eFIDC_1 = 1,
    };

    enum class eCWBEE : std::uint32_t {
      // Disable error interrupt
      eCWBEE_0 = 0,
      // Enable error interrupt
      eCWBEE_1 = 1,
    };

    enum class eFIOCE : std::uint32_t {
      // Disable interrupt
      eFIOCE_0 = 0,
      // Enable interrupt
      eFIOCE_1 = 1,
    };

    enum class eFDZCE : std::uint32_t {
      // Disable interrupt
      eFDZCE_0 = 0,
      // Enable interrupt
      eFDZCE_1 = 1,
    };

    enum class eFOFCE : std::uint32_t {
      // Disable interrupt
      eFOFCE_0 = 0,
      // Enable interrupt
      eFOFCE_1 = 1,
    };

    enum class eFUFCE : std::uint32_t {
      // Disable interrupt
      eFUFCE_0 = 0,
      // Enable interrupt
      eFUFCE_1 = 1,
    };

    enum class eFIXCE : std::uint32_t {
      // Disable interrupt
      eFIXCE_0 = 0,
      // Enable interrupt
      eFIXCE_1 = 1,
    };

    enum class eFIDCE : std::uint32_t {
      // Disable interrupt
      eFIDCE_0 = 0,
      // Enable interrupt
      eFIDCE_1 = 1,
    };

    // Cache write buffer error status
    using CWBER = ftl::mmio::Field<1, 4, eCWBER, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // FPU invalid operation interrupt status
    using FIOC = ftl::mmio::Field<1, 8, eFIOC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU divide-by-zero interrupt status
    using FDZC = ftl::mmio::Field<1, 9, eFDZC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU overflow interrupt status
    using FOFC = ftl::mmio::Field<1, 10, eFOFC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU underflow interrupt status
    using FUFC = ftl::mmio::Field<1, 11, eFUFC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU inexact interrupt status
    using FIXC = ftl::mmio::Field<1, 12, eFIXC, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPU input denormal interrupt status
    using FIDC = ftl::mmio::Field<1, 15, eFIDC, ftl::mmio::RO, ftl::mmio::Normal>;
    // Cache write buffer error enable
    using CWBEE = ftl::mmio::Field<1, 20, eCWBEE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU invalid operation interrupt enable
    using FIOCE = ftl::mmio::Field<1, 24, eFIOCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU divide-by-zero interrupt enable
    using FDZCE = ftl::mmio::Field<1, 25, eFDZCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU overflow interrupt enable
    using FOFCE = ftl::mmio::Field<1, 26, eFOFCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU underflow interrupt enable
    using FUFCE = ftl::mmio::Field<1, 27, eFUFCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU inexact interrupt enable
    using FIXCE = ftl::mmio::Field<1, 28, eFIXCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FPU input denormal interrupt enable
    using FIDCE = ftl::mmio::Field<1, 31, eFIDCE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCM_ISCR_fields_

  struct MCM_ISCR : ftl::mmio::Register<
      0xE0080010u,
      std::uint32_t,
      0x00020000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      MCM_ISCR_fields_::CWBER,
      ftl::mmio::Reserved<3, 5>,
      MCM_ISCR_fields_::FIOC,
      MCM_ISCR_fields_::FDZC,
      MCM_ISCR_fields_::FOFC,
      MCM_ISCR_fields_::FUFC,
      MCM_ISCR_fields_::FIXC,
      ftl::mmio::Reserved<2, 13>,
      MCM_ISCR_fields_::FIDC,
      ftl::mmio::Reserved<4, 16>,
      MCM_ISCR_fields_::CWBEE,
      ftl::mmio::Reserved<3, 21>,
      MCM_ISCR_fields_::FIOCE,
      MCM_ISCR_fields_::FDZCE,
      MCM_ISCR_fields_::FOFCE,
      MCM_ISCR_fields_::FUFCE,
      MCM_ISCR_fields_::FIXCE,
      ftl::mmio::Reserved<2, 29>,
      MCM_ISCR_fields_::FIDCE> {
    using eCWBER = MCM_ISCR_fields_::eCWBER;
    using eFIOC = MCM_ISCR_fields_::eFIOC;
    using eFDZC = MCM_ISCR_fields_::eFDZC;
    using eFOFC = MCM_ISCR_fields_::eFOFC;
    using eFUFC = MCM_ISCR_fields_::eFUFC;
    using eFIXC = MCM_ISCR_fields_::eFIXC;
    using eFIDC = MCM_ISCR_fields_::eFIDC;
    using eCWBEE = MCM_ISCR_fields_::eCWBEE;
    using eFIOCE = MCM_ISCR_fields_::eFIOCE;
    using eFDZCE = MCM_ISCR_fields_::eFDZCE;
    using eFOFCE = MCM_ISCR_fields_::eFOFCE;
    using eFUFCE = MCM_ISCR_fields_::eFUFCE;
    using eFIXCE = MCM_ISCR_fields_::eFIXCE;
    using eFIDCE = MCM_ISCR_fields_::eFIDCE;
    using CWBER = MCM_ISCR_fields_::CWBER;
    using FIOC = MCM_ISCR_fields_::FIOC;
    using FDZC = MCM_ISCR_fields_::FDZC;
    using FOFC = MCM_ISCR_fields_::FOFC;
    using FUFC = MCM_ISCR_fields_::FUFC;
    using FIXC = MCM_ISCR_fields_::FIXC;
    using FIDC = MCM_ISCR_fields_::FIDC;
    using CWBEE = MCM_ISCR_fields_::CWBEE;
    using FIOCE = MCM_ISCR_fields_::FIOCE;
    using FDZCE = MCM_ISCR_fields_::FDZCE;
    using FOFCE = MCM_ISCR_fields_::FOFCE;
    using FUFCE = MCM_ISCR_fields_::FUFCE;
    using FIXCE = MCM_ISCR_fields_::FIXCE;
    using FIDCE = MCM_ISCR_fields_::FIDCE;
  };

  // Fault address register
  struct MCM_FADR_fields_ {
    // Fault address
    using ADDRESS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_FADR_fields_

  struct MCM_FADR : ftl::mmio::Register<
      0xE0080020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_FADR_fields_::ADDRESS> {
    using ADDRESS = MCM_FADR_fields_::ADDRESS;
  };

  // Fault attributes register
  struct MCM_FATR_fields_ {
    enum class eBEDA : std::uint32_t {
      // Instruction
      eBEDA_0 = 0,
      // Data
      eBEDA_1 = 1,
    };

    enum class eBEMD : std::uint32_t {
      // User mode
      eBEMD_0 = 0,
      // Supervisor/privileged mode
      eBEMD_1 = 1,
    };

    enum class eBESZ : std::uint32_t {
      // 8-bit access
      eBESZ_0 = 0,
      // 16-bit access
      eBESZ_1 = 1,
      // 32-bit access
      eBESZ_2 = 2,
    };

    enum class eBEWT : std::uint32_t {
      // Read access
      eBEWT_0 = 0,
      // Write access
      eBEWT_1 = 1,
    };

    enum class eBEOVR : std::uint32_t {
      // No bus error overrun
      eBEOVR_0 = 0,
      // Bus error overrun occurred. The FADR and FDR registers and the other FATR bits are not updated to reflect this new bus error.
      eBEOVR_1 = 1,
    };

    // Bus error access type
    using BEDA = ftl::mmio::Field<1, 0, eBEDA, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus error privilege level
    using BEMD = ftl::mmio::Field<1, 1, eBEMD, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus error size
    using BESZ = ftl::mmio::Field<2, 4, eBESZ, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus error write
    using BEWT = ftl::mmio::Field<1, 7, eBEWT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus error master number
    using BEMN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Bus error overrun
    using BEOVR = ftl::mmio::Field<1, 31, eBEOVR, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_FATR_fields_

  struct MCM_FATR : ftl::mmio::Register<
      0xE0080024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_FATR_fields_::BEDA,
      MCM_FATR_fields_::BEMD,
      ftl::mmio::Reserved<2, 2>,
      MCM_FATR_fields_::BESZ,
      ftl::mmio::Reserved<1, 6>,
      MCM_FATR_fields_::BEWT,
      MCM_FATR_fields_::BEMN,
      ftl::mmio::Reserved<19, 12>,
      MCM_FATR_fields_::BEOVR> {
    using eBEDA = MCM_FATR_fields_::eBEDA;
    using eBEMD = MCM_FATR_fields_::eBEMD;
    using eBESZ = MCM_FATR_fields_::eBESZ;
    using eBEWT = MCM_FATR_fields_::eBEWT;
    using eBEOVR = MCM_FATR_fields_::eBEOVR;
    using BEDA = MCM_FATR_fields_::BEDA;
    using BEMD = MCM_FATR_fields_::BEMD;
    using BESZ = MCM_FATR_fields_::BESZ;
    using BEWT = MCM_FATR_fields_::BEWT;
    using BEMN = MCM_FATR_fields_::BEMN;
    using BEOVR = MCM_FATR_fields_::BEOVR;
  };

  // Fault data register
  struct MCM_FDR_fields_ {
    // Fault data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_FDR_fields_

  struct MCM_FDR : ftl::mmio::Register<
      0xE0080028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_FDR_fields_::DATA> {
    using DATA = MCM_FDR_fields_::DATA;
  };

  // Local Memory Descriptor Register
  struct LMDR_fields_ {
    enum class eMT : std::uint32_t {
      // code TCM
      eMT_0 = 0,
      // system TCM
      eMT_1 = 1,
      // PC Cache
      eMT_2 = 2,
      // PS Cache
      eMT_3 = 3,
    };

    enum class eRO : std::uint32_t {
      // Writes to the LMDRn[7:0] are allowed.
      eRO_0 = 0,
      // Writes to the LMDRn[7:0] are ignored.
      eRO_1 = 1,
    };

    enum class eDPW : std::uint32_t {
      // LMEMn 32-bits wide
      eDPW_2 = 2,
      // LMEMn 64-bits wide
      eDPW_3 = 3,
    };

    enum class eWY : std::uint32_t {
      // No Cache
      eWY_0 = 0,
      // 2-Way Set Associative
      eWY_2 = 2,
      // 4-Way Set Associative
      eWY_4 = 4,
    };

    enum class eLMSZ : std::uint32_t {
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

    enum class eLMSZH : std::uint32_t {
      // LMEMn is a power-of-2 capacity.
      eLMSZH_0 = 0,
      // LMEMn is not a power-of-2, with a capacity is 0.75 * LMSZ.
      eLMSZH_1 = 1,
    };

    enum class eV : std::uint32_t {
      // LMEMn is not present.
      eV_0 = 0,
      // LMEMn is present.
      eV_1 = 1,
    };

    // Control Field 0
    using CF0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control Field 1 - for Cache Parity control functions
    using CF1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory Type
    using MT = ftl::mmio::Field<3, 13, eMT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read-Only
    using RO = ftl::mmio::Field<1, 16, eRO, ftl::mmio::RO, ftl::mmio::Normal>;
    // LMEM Data Path Width. This read-only field defines the width of the local memory.
    using DPW = ftl::mmio::Field<3, 17, eDPW, ftl::mmio::RO, ftl::mmio::Normal>;
    // Level 1 Cache Ways
    using WY = ftl::mmio::Field<4, 20, eWY, ftl::mmio::RO, ftl::mmio::Normal>;
    // LMEM Size
    using LMSZ = ftl::mmio::Field<4, 24, eLMSZ, ftl::mmio::RO, ftl::mmio::Normal>;
    // LMEM Size "Hole"
    using LMSZH = ftl::mmio::Field<1, 28, eLMSZH, ftl::mmio::RO, ftl::mmio::Normal>;
    // Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.
    using V = ftl::mmio::Field<1, 31, eV, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LMDR_fields_

  template<std::uint32_t Index>
  struct LMDR : ftl::mmio::Register<
      0xE0080400u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LMDR_fields_::CF0,
      LMDR_fields_::CF1,
      ftl::mmio::Reserved<5, 8>,
      LMDR_fields_::MT,
      LMDR_fields_::RO,
      LMDR_fields_::DPW,
      LMDR_fields_::WY,
      LMDR_fields_::LMSZ,
      LMDR_fields_::LMSZH,
      ftl::mmio::Reserved<2, 29>,
      LMDR_fields_::V> {
    static_assert(Index < 4u, "LMDR: Index out of range");
    using eMT = LMDR_fields_::eMT;
    using eRO = LMDR_fields_::eRO;
    using eDPW = LMDR_fields_::eDPW;
    using eWY = LMDR_fields_::eWY;
    using eLMSZ = LMDR_fields_::eLMSZ;
    using eLMSZH = LMDR_fields_::eLMSZH;
    using eV = LMDR_fields_::eV;
    using CF0 = LMDR_fields_::CF0;
    using CF1 = LMDR_fields_::CF1;
    using MT = LMDR_fields_::MT;
    using RO = LMDR_fields_::RO;
    using DPW = LMDR_fields_::DPW;
    using WY = LMDR_fields_::WY;
    using LMSZ = LMDR_fields_::LMSZ;
    using LMSZH = LMDR_fields_::LMSZH;
    using V = LMDR_fields_::V;
  };

  // LMEM Parity & ECC Control Register
  struct MCM_LMPECR_fields_ {
    enum class eERNCR : std::uint32_t {
      // reporting enabled
      eERNCR_0 = 0,
      // reporting disabled
      eERNCR_1 = 1,
    };

    enum class eERNCI : std::uint32_t {
      // Interrupt is disabled
      eERNCI_0 = 0,
      // Interrupt is enabled
      eERNCI_1 = 1,
    };

    enum class eER1BR : std::uint32_t {
      // reporting enabled
      eER1BR_0 = 0,
      // reporting disabled
      eER1BR_1 = 1,
    };

    enum class eER1BI : std::uint32_t {
      // Interrupt is disabled
      eER1BI_0 = 0,
      // Interrupt is enabled
      eER1BI_1 = 1,
    };

    enum class eECPR : std::uint32_t {
      // reporting enabled
      eECPR_0 = 0,
      // reporting disabled
      eECPR_1 = 1,
    };

    enum class eECPI : std::uint32_t {
      // enabled
      eECPI_0 = 0,
      // disabled
      eECPI_1 = 1,
    };

    // Enable RAM ECC Non-correctable Reporting
    using ERNCR = ftl::mmio::Field<1, 0, eERNCR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable RAM Non-correctable ECC Interrupt
    using ERNCI = ftl::mmio::Field<1, 1, eERNCI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable RAM ECC 1-bit Reporting
    using ER1BR = ftl::mmio::Field<1, 8, eER1BR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable RAM ECC 1-bit Interrupt
    using ER1BI = ftl::mmio::Field<1, 9, eER1BI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Cache Parity Reporting
    using ECPR = ftl::mmio::Field<1, 20, eECPR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Cache Parity IRQ
    using ECPI = ftl::mmio::Field<1, 21, eECPI, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCM_LMPECR_fields_

  struct MCM_LMPECR : ftl::mmio::Register<
      0xE0080480u,
      std::uint32_t,
      0x00300003u,
      ftl::mmio::RW,
      MCM_LMPECR_fields_::ERNCR,
      MCM_LMPECR_fields_::ERNCI,
      ftl::mmio::Reserved<6, 2>,
      MCM_LMPECR_fields_::ER1BR,
      MCM_LMPECR_fields_::ER1BI,
      ftl::mmio::Reserved<10, 10>,
      MCM_LMPECR_fields_::ECPR,
      MCM_LMPECR_fields_::ECPI,
      ftl::mmio::Reserved<10, 22>> {
    using eERNCR = MCM_LMPECR_fields_::eERNCR;
    using eERNCI = MCM_LMPECR_fields_::eERNCI;
    using eER1BR = MCM_LMPECR_fields_::eER1BR;
    using eER1BI = MCM_LMPECR_fields_::eER1BI;
    using eECPR = MCM_LMPECR_fields_::eECPR;
    using eECPI = MCM_LMPECR_fields_::eECPI;
    using ERNCR = MCM_LMPECR_fields_::ERNCR;
    using ERNCI = MCM_LMPECR_fields_::ERNCI;
    using ER1BR = MCM_LMPECR_fields_::ER1BR;
    using ER1BI = MCM_LMPECR_fields_::ER1BI;
    using ECPR = MCM_LMPECR_fields_::ECPR;
    using ECPI = MCM_LMPECR_fields_::ECPI;
  };

  // LMEM Parity & ECC Interrupt Register
  struct MCM_LMPEIR_fields_ {
    // ENCn = ECC Non-correctable Error n
    using ENC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // E1Bn = ECC 1-bit Error n
    using E1B = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Parity Error
    using PE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Parity or ECC Error Location
    using PEELOC = ftl::mmio::Field<5, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Valid bit
    using V = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_LMPEIR_fields_

  struct MCM_LMPEIR : ftl::mmio::Register<
      0xE0080488u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MCM_LMPEIR_fields_::ENC,
      MCM_LMPEIR_fields_::E1B,
      MCM_LMPEIR_fields_::PE,
      MCM_LMPEIR_fields_::PEELOC,
      ftl::mmio::Reserved<2, 29>,
      MCM_LMPEIR_fields_::V> {
    using ENC = MCM_LMPEIR_fields_::ENC;
    using E1B = MCM_LMPEIR_fields_::E1B;
    using PE = MCM_LMPEIR_fields_::PE;
    using PEELOC = MCM_LMPEIR_fields_::PEELOC;
    using V = MCM_LMPEIR_fields_::V;
  };

  // LMEM Fault Address Register
  struct MCM_LMFAR_fields_ {
    // ECC Fault Address
    using EFADD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_LMFAR_fields_

  struct MCM_LMFAR : ftl::mmio::Register<
      0xE0080490u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_LMFAR_fields_::EFADD> {
    using EFADD = MCM_LMFAR_fields_::EFADD;
  };

  // LMEM Fault Attribute Register
  struct MCM_LMFATR_fields_ {
    // Parity/ECC Fault Protection FATR[3] is Cacheable: 0=Non-cacheable, 1=Cacheable FATR[2] is Bufferable: 0=Non-bufferable, 1=Bufferable FATR[1] is Mode: 0=User mode, 1=Supervisor mode FATR[0] is Type: 0=I-Fetch, 1=Data
    using PEFPRT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parity/ECC Fault Master Size 3'b000 = 8-bit access 3'b001 = 16-bit access 3'b010 = 32-bit access 3'b011 = 64-bit access 3'b1xx = Reserved
    using PEFSIZE = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parity/ECC Fault Write
    using PEFW = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Parity/ECC Fault Master Number
    using PEFMST = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ID of the word which has ECC error
    using WORDID = ftl::mmio::Field<1, 24, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Overrun
    using OVR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_LMFATR_fields_

  struct MCM_LMFATR : ftl::mmio::Register<
      0xE0080494u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MCM_LMFATR_fields_::PEFPRT,
      MCM_LMFATR_fields_::PEFSIZE,
      MCM_LMFATR_fields_::PEFW,
      MCM_LMFATR_fields_::PEFMST,
      ftl::mmio::Reserved<8, 16>,
      MCM_LMFATR_fields_::WORDID,
      ftl::mmio::Reserved<6, 25>,
      MCM_LMFATR_fields_::OVR> {
    using PEFPRT = MCM_LMFATR_fields_::PEFPRT;
    using PEFSIZE = MCM_LMFATR_fields_::PEFSIZE;
    using PEFW = MCM_LMFATR_fields_::PEFW;
    using PEFMST = MCM_LMFATR_fields_::PEFMST;
    using WORDID = MCM_LMFATR_fields_::WORDID;
    using OVR = MCM_LMFATR_fields_::OVR;
  };

  // LMEM Fault Data High Register
  struct MCM_LMFDHR_fields_ {
    // Parity or ECC Fault Data High
    using PEFDH = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_LMFDHR_fields_

  struct MCM_LMFDHR : ftl::mmio::Register<
      0xE00804A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_LMFDHR_fields_::PEFDH> {
    using PEFDH = MCM_LMFDHR_fields_::PEFDH;
  };

  // LMEM Fault Data Low Register
  struct MCM_LMFDLR_fields_ {
    // Parity or ECC Fault Data Low
    using PEFDL = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MCM_LMFDLR_fields_

  struct MCM_LMFDLR : ftl::mmio::Register<
      0xE00804A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MCM_LMFDLR_fields_::PEFDL> {
    using PEFDL = MCM_LMFDLR_fields_::PEFDL;
  };

};

}  // namespace regs