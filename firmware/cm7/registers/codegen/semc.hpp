#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SEMC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Semc {
  // Module Control Register
  struct McrFields {
    enum class eSWRST : std::uint32_t {
      // No reset
      eno_reset = 0,
      // Reset
      ereset = 1,
    };

    enum class eMDIS : std::uint32_t {
      // Module enabled
      eenable = 0,
      // Module disabled
      edisable = 1,
    };

    enum class eDQSMD : std::uint32_t {
      // Dummy read strobe loopbacked internally
      einternal = 0,
      // Dummy read strobe loopbacked from DQS pad
      edqs_pad = 1,
    };

    enum class eWPOL0 : std::uint32_t {
      // WAIT/RDY polarity is not changed.
      eunchanged = 0,
      // WAIT/RDY polarity is inverted.
      einverted = 1,
    };

    enum class eWPOL1 : std::uint32_t {
      // R/B# polarity is not changed.
      eunchanged = 0,
      // R/B# polarity is inverted.
      einverted = 1,
    };

    enum class eBTO : std::uint32_t {
      // 255*1
      ebto_0 = 0,
      // 255*2
      ebto_1 = 1,
      // 255*2^31
      ebto_1f = 31,
    };

    // Software Reset
    using SWRST = ftl::mmio::Field<1, 0, eSWRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Module Disable
    using MDIS = ftl::mmio::Field<1, 1, eMDIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // DQS (read strobe) mode
    using DQSMD = ftl::mmio::Field<1, 2, eDQSMD, ftl::mmio::RW, ftl::mmio::Normal>;
    // WAIT/RDY polarity for SRAM/NOR
    using WPOL0 = ftl::mmio::Field<1, 6, eWPOL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // R/B# polarity for NAND device
    using WPOL1 = ftl::mmio::Field<1, 7, eWPOL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Execution timeout cycles
    using CTO = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bus timeout cycles
    using BTO = ftl::mmio::Field<5, 24, eBTO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McrFields

  struct MCR : ftl::mmio::Register<
      0x400D4000u,
      std::uint32_t,
      0x10000002u,
      ftl::mmio::RW,
      McrFields::SWRST,
      McrFields::MDIS,
      McrFields::DQSMD,
      ftl::mmio::Reserved<3, 3>,
      McrFields::WPOL0,
      McrFields::WPOL1,
      ftl::mmio::Reserved<8, 8>,
      McrFields::CTO,
      McrFields::BTO,
      ftl::mmio::Reserved<3, 29>> {
    using eSWRST = McrFields::eSWRST;
    using eMDIS = McrFields::eMDIS;
    using eDQSMD = McrFields::eDQSMD;
    using eWPOL0 = McrFields::eWPOL0;
    using eWPOL1 = McrFields::eWPOL1;
    using eBTO = McrFields::eBTO;
    using SWRST = McrFields::SWRST;
    using MDIS = McrFields::MDIS;
    using DQSMD = McrFields::DQSMD;
    using WPOL0 = McrFields::WPOL0;
    using WPOL1 = McrFields::WPOL1;
    using CTO = McrFields::CTO;
    using BTO = McrFields::BTO;
  };

  // IO MUX Control Register
  struct IocrFields {
    enum class eMUX_A8 : std::uint32_t {
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_03_0 = 0,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_03_1 = 1,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_03_2 = 2,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_03_3 = 3,
      // NAND CE#
      enand_ceb = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_bf_11 = 11,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_bf_12 = 12,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_bf_13 = 13,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_bf_14 = 14,
      // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
      esdram8_norsram24_bf_15 = 15,
    };

    enum class eMUX_CSX0 : std::uint32_t {
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_03 = 0,
      // SDRAM CS1
      esdram_cs1 = 1,
      // SDRAM CS2
      esdram_cs2 = 2,
      // SDRAM CS3
      esdram_cs3 = 3,
      // NAND CE#
      enand_ceb = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_bf_11 = 11,
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_bf_12 = 12,
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_bf_13 = 13,
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_bf_14 = 14,
      // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
      enorsram24_bf_15 = 15,
    };

    enum class eMUX_CSX1 : std::uint32_t {
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_0 = 0,
      // SDRAM CS1
      esdram_cs1 = 1,
      // SDRAM CS2
      esdram_cs2 = 2,
      // SDRAM CS3
      esdram_cs3 = 3,
      // NAND CE#
      enand_ceb = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_bf_11 = 11,
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_bf_12 = 12,
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_bf_13 = 13,
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_bf_14 = 14,
      // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
      enorsram25_bf_15 = 15,
    };

    enum class eMUX_CSX2 : std::uint32_t {
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_0 = 0,
      // SDRAM CS1
      esdram_cs1 = 1,
      // SDRAM CS2
      esdram_cs2 = 2,
      // SDRAM CS3
      esdram_cs3 = 3,
      // NAND CE#
      enand_ceb = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_bf_11 = 11,
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_bf_12 = 12,
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_bf_13 = 13,
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_bf_14 = 14,
      // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
      enorsram26_bf_15 = 15,
    };

    enum class eMUX_CSX3 : std::uint32_t {
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_0 = 0,
      // SDRAM CS1
      esdram_cs1 = 1,
      // SDRAM CS2
      esdram_cs2 = 2,
      // SDRAM CS3
      esdram_cs3 = 3,
      // NAND CE#
      enand_ceb = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_bf_11 = 11,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_bf_12 = 12,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_bf_13 = 13,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_bf_14 = 14,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_bf_15 = 15,
    };

    enum class eMUX_RDY : std::uint32_t {
      // NAND R/B# input
      enand_rbb = 0,
      // SDRAM CS1
      esdram_cs1 = 1,
      // SDRAM CS2
      esdram_cs2 = 2,
      // SDRAM CS3
      esdram_cs3 = 3,
      // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
      enorsram27_4 = 4,
      // NOR CE#
      enor_ceb = 5,
      // SRAM CE# 0
      esram_ceb0 = 6,
      // DBI CSX
      edbi_csx = 7,
      // SRAM CE# 1
      esram_ceb1 = 8,
      // SRAM CE# 2
      esram_ceb2 = 9,
      // SRAM CE# 3
      esram_ceb3 = 10,
      // NOR/SRAM Address bit 27 in Non-ADMUX mode
      enorsram27_bf_11 = 11,
      // NOR/SRAM Address bit 27 in Non-ADMUX mode
      enorsram27_bf_12 = 12,
      // NOR/SRAM Address bit 27 in Non-ADMUX mode
      enorsram27_bf_13 = 13,
      // NOR/SRAM Address bit 27 in Non-ADMUX mode
      enorsram27_bf_14 = 14,
      // NOR/SRAM Address bit 27 in Non-ADMUX mode
      enorsram27_bf_15 = 15,
    };

    enum class eMUX_CLKX0 : std::uint32_t {
      // Keep low
      ekeeplow = 0,
      // NOR clock
      enor_clk = 1,
      // SRAM clock
      esram_clk = 2,
      // NOR and SRAM clock, suitable for Multi-Chip Product package
      enorsram_clk = 3,
    };

    enum class eMUX_CLKX1 : std::uint32_t {
      // Keep low
      ekeeplow = 0,
      // NOR clock
      enor_clk = 1,
      // SRAM clock
      esram_clk = 2,
      // NOR and SRAM clock, suitable for Multi-Chip Product package
      enor_sram_clk = 3,
    };

    enum class eCLKX0_AO : std::uint32_t {
      // SEMC_CLKX0 is controlled by MUX_CLKX0
      emux_clkx0_ctl = 0,
      // SEMC_CLKX0 is always on
      ealways_on = 1,
    };

    enum class eCLKX1_AO : std::uint32_t {
      // SEMC_CLKX1 is controlled by MUX_CLKX1
      emux_clkx1_ctl = 0,
      // SEMC_CLKX1 is always on
      ealways_on = 1,
    };

    // SEMC_ADDR08 output selection
    using MUX_A8 = ftl::mmio::Field<4, 0, eMUX_A8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CSX0 output selection
    using MUX_CSX0 = ftl::mmio::Field<4, 4, eMUX_CSX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CSX1 output selection
    using MUX_CSX1 = ftl::mmio::Field<4, 8, eMUX_CSX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CSX2 output selection
    using MUX_CSX2 = ftl::mmio::Field<4, 12, eMUX_CSX2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CSX3 output selection
    using MUX_CSX3 = ftl::mmio::Field<4, 16, eMUX_CSX3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_RDY function selection
    using MUX_RDY = ftl::mmio::Field<4, 20, eMUX_RDY, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CLKX0 function selection
    using MUX_CLKX0 = ftl::mmio::Field<2, 24, eMUX_CLKX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CLKX1 function selection
    using MUX_CLKX1 = ftl::mmio::Field<2, 26, eMUX_CLKX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CLKX0 Always On
    using CLKX0_AO = ftl::mmio::Field<1, 28, eCLKX0_AO, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC_CLKX1 Always On
    using CLKX1_AO = ftl::mmio::Field<1, 29, eCLKX1_AO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IocrFields

  struct IOCR : ftl::mmio::Register<
      0x400D4004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IocrFields::MUX_A8,
      IocrFields::MUX_CSX0,
      IocrFields::MUX_CSX1,
      IocrFields::MUX_CSX2,
      IocrFields::MUX_CSX3,
      IocrFields::MUX_RDY,
      IocrFields::MUX_CLKX0,
      IocrFields::MUX_CLKX1,
      IocrFields::CLKX0_AO,
      IocrFields::CLKX1_AO,
      ftl::mmio::Reserved<2, 30>> {
    using eMUX_A8 = IocrFields::eMUX_A8;
    using eMUX_CSX0 = IocrFields::eMUX_CSX0;
    using eMUX_CSX1 = IocrFields::eMUX_CSX1;
    using eMUX_CSX2 = IocrFields::eMUX_CSX2;
    using eMUX_CSX3 = IocrFields::eMUX_CSX3;
    using eMUX_RDY = IocrFields::eMUX_RDY;
    using eMUX_CLKX0 = IocrFields::eMUX_CLKX0;
    using eMUX_CLKX1 = IocrFields::eMUX_CLKX1;
    using eCLKX0_AO = IocrFields::eCLKX0_AO;
    using eCLKX1_AO = IocrFields::eCLKX1_AO;
    using MUX_A8 = IocrFields::MUX_A8;
    using MUX_CSX0 = IocrFields::MUX_CSX0;
    using MUX_CSX1 = IocrFields::MUX_CSX1;
    using MUX_CSX2 = IocrFields::MUX_CSX2;
    using MUX_CSX3 = IocrFields::MUX_CSX3;
    using MUX_RDY = IocrFields::MUX_RDY;
    using MUX_CLKX0 = IocrFields::MUX_CLKX0;
    using MUX_CLKX1 = IocrFields::MUX_CLKX1;
    using CLKX0_AO = IocrFields::CLKX0_AO;
    using CLKX1_AO = IocrFields::CLKX1_AO;
  };

  // Bus (AXI) Master Control Register 0
  struct Bmcr0Fields {
    // Weight of QOS
    using WQOS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of AGE
    using WAGE = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of Slave Hit without read/write switch
    using WSH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of slave hit with Read/Write Switch
    using WRWS = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Bmcr0Fields

  struct BMCR0 : ftl::mmio::Register<
      0x400D4008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Bmcr0Fields::WQOS,
      Bmcr0Fields::WAGE,
      Bmcr0Fields::WSH,
      Bmcr0Fields::WRWS,
      ftl::mmio::Reserved<8, 24>> {
    using WQOS = Bmcr0Fields::WQOS;
    using WAGE = Bmcr0Fields::WAGE;
    using WSH = Bmcr0Fields::WSH;
    using WRWS = Bmcr0Fields::WRWS;
  };

  // Bus (AXI) Master Control Register 1
  struct Bmcr1Fields {
    // Weight of QOS
    using WQOS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of AGE
    using WAGE = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of Page Hit
    using WPH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of slave hit without Read/Write Switch
    using WRWS = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Weight of Bank Rotation
    using WBR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Bmcr1Fields

  struct BMCR1 : ftl::mmio::Register<
      0x400D400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Bmcr1Fields::WQOS,
      Bmcr1Fields::WAGE,
      Bmcr1Fields::WPH,
      Bmcr1Fields::WRWS,
      Bmcr1Fields::WBR> {
    using WQOS = Bmcr1Fields::WQOS;
    using WAGE = Bmcr1Fields::WAGE;
    using WPH = Bmcr1Fields::WPH;
    using WRWS = Bmcr1Fields::WRWS;
    using WBR = Bmcr1Fields::WBR;
  };

  // Base Register n
  struct BrFields {
    enum class eVLD : std::uint32_t {
      // The memory is invalid, can not be accessed.
      einvalid = 0,
      // The memory is valid, can be accessed.
      evalid = 1,
    };

    enum class eMS : std::uint32_t {
      // 4KB
      esize_4kb = 0,
      // 8KB
      esize_8kb = 1,
      // 16KB
      esize_16kb = 2,
      // 32KB
      esize_32kb = 3,
      // 64KB
      esize_64kb = 4,
      // 128KB
      esize_128kb = 5,
      // 256KB
      esize_256kb = 6,
      // 512KB
      esize_512kb = 7,
      // 1MB
      esize_1mb = 8,
      // 2MB
      esize_2mb = 9,
      // 4MB
      esize_4mb = 10,
      // 8MB
      esize_8mb = 11,
      // 16MB
      esize_16mb = 12,
      // 32MB
      esize_32mb = 13,
      // 64MB
      esize_64mb = 14,
      // 128MB
      esize_128mb = 15,
      // 256MB
      esize_256mb = 16,
      // 512MB
      esize_512mb = 17,
      // 1GB
      esize_1gb = 18,
      // 2GB
      esize_2gb = 19,
      // 4GB
      esize_4gb_20 = 20,
      // 4GB
      esize_4gb_21 = 21,
      // 4GB
      esize_4gb_22 = 22,
      // 4GB
      esize_4gb_23 = 23,
      // 4GB
      esize_4gb_24 = 24,
      // 4GB
      esize_4gb_25 = 25,
      // 4GB
      esize_4gb_26 = 26,
      // 4GB
      esize_4gb_27 = 27,
      // 4GB
      esize_4gb_28 = 28,
      // 4GB
      esize_4gb_29 = 29,
      // 4GB
      esize_4gb_30 = 30,
      // 4GB
      esize_4gb_31 = 31,
    };

    // Valid
    using VLD = ftl::mmio::Field<1, 0, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory size
    using MS = ftl::mmio::Field<5, 1, eMS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base Address
    using BA = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BrFields

  template<std::uint32_t Index>
  struct BR : ftl::mmio::Register<
      0x400D4010u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      BrFields::VLD,
      BrFields::MS,
      ftl::mmio::Reserved<6, 6>,
      BrFields::BA> {
    static_assert(Index < 9u, "BR: Index out of range");
    using eVLD = BrFields::eVLD;
    using eMS = BrFields::eMS;
    using VLD = BrFields::VLD;
    using MS = BrFields::MS;
    using BA = BrFields::BA;
  };

  // DLL Control Register
  struct DllcrFields {
    enum class eDLLEN : std::uint32_t {
      // DLL calibration is disabled.
      ecal_disable = 0,
      // DLL calibration is enabled.
      ecal_enable = 1,
    };

    enum class eDLLRESET : std::uint32_t {
      // DLL is not reset.
      eno_reset = 0,
      // DLL is reset.
      ereset = 1,
    };

    enum class eOVRDEN : std::uint32_t {
      // The delay cell number is not overridden.
      eno_override = 0,
      // The delay cell number is overridden.
      eoverride = 1,
    };

    // DLL calibration enable
    using DLLEN = ftl::mmio::Field<1, 0, eDLLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL Reset
    using DLLRESET = ftl::mmio::Field<1, 1, eDLLRESET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay Target for Slave
    using SLVDLYTARGET = ftl::mmio::Field<4, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Override Enable
    using OVRDEN = ftl::mmio::Field<1, 8, eOVRDEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Override Value
    using OVRDVAL = ftl::mmio::Field<6, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DllcrFields

  struct DLLCR : ftl::mmio::Register<
      0x400D4034u,
      std::uint32_t,
      0x00000100u,
      ftl::mmio::RW,
      DllcrFields::DLLEN,
      DllcrFields::DLLRESET,
      ftl::mmio::Reserved<1, 2>,
      DllcrFields::SLVDLYTARGET,
      ftl::mmio::Reserved<1, 7>,
      DllcrFields::OVRDEN,
      DllcrFields::OVRDVAL,
      ftl::mmio::Reserved<17, 15>> {
    using eDLLEN = DllcrFields::eDLLEN;
    using eDLLRESET = DllcrFields::eDLLRESET;
    using eOVRDEN = DllcrFields::eOVRDEN;
    using DLLEN = DllcrFields::DLLEN;
    using DLLRESET = DllcrFields::DLLRESET;
    using SLVDLYTARGET = DllcrFields::SLVDLYTARGET;
    using OVRDEN = DllcrFields::OVRDEN;
    using OVRDVAL = DllcrFields::OVRDVAL;
  };

  // Interrupt Enable Register
  struct IntenFields {
    enum class eIPCMDDONEEN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    enum class eIPCMDERREN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    enum class eAXICMDERREN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    enum class eAXIBUSERREN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    enum class eNDPAGEENDEN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    enum class eNDNOPENDEN : std::uint32_t {
      // Interrupt is disabled
      einterrupt_disable = 0,
      // Interrupt is enabled
      einterrupt_enable = 1,
    };

    // IP command done interrupt enable
    using IPCMDDONEEN = ftl::mmio::Field<1, 0, eIPCMDDONEEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // IP command error interrupt enable
    using IPCMDERREN = ftl::mmio::Field<1, 1, eIPCMDERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI command error interrupt enable
    using AXICMDERREN = ftl::mmio::Field<1, 2, eAXICMDERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI bus error interrupt enable
    using AXIBUSERREN = ftl::mmio::Field<1, 3, eAXIBUSERREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND page end interrupt enable
    using NDPAGEENDEN = ftl::mmio::Field<1, 4, eNDPAGEENDEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND no pending AXI access interrupt enable
    using NDNOPENDEN = ftl::mmio::Field<1, 5, eNDNOPENDEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IntenFields

  struct INTEN : ftl::mmio::Register<
      0x400D4038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntenFields::IPCMDDONEEN,
      IntenFields::IPCMDERREN,
      IntenFields::AXICMDERREN,
      IntenFields::AXIBUSERREN,
      IntenFields::NDPAGEENDEN,
      IntenFields::NDNOPENDEN,
      ftl::mmio::Reserved<26, 6>> {
    using eIPCMDDONEEN = IntenFields::eIPCMDDONEEN;
    using eIPCMDERREN = IntenFields::eIPCMDERREN;
    using eAXICMDERREN = IntenFields::eAXICMDERREN;
    using eAXIBUSERREN = IntenFields::eAXIBUSERREN;
    using eNDPAGEENDEN = IntenFields::eNDPAGEENDEN;
    using eNDNOPENDEN = IntenFields::eNDNOPENDEN;
    using IPCMDDONEEN = IntenFields::IPCMDDONEEN;
    using IPCMDERREN = IntenFields::IPCMDERREN;
    using AXICMDERREN = IntenFields::AXICMDERREN;
    using AXIBUSERREN = IntenFields::AXIBUSERREN;
    using NDPAGEENDEN = IntenFields::NDPAGEENDEN;
    using NDNOPENDEN = IntenFields::NDNOPENDEN;
  };

  // Interrupt Register
  struct IntrFields {
    enum class eIPCMDDONE : std::uint32_t {
      // IP command is not done.
      enot_done = 0,
      // IP command is done.
      edone = 1,
    };

    enum class eIPCMDERR : std::uint32_t {
      // No IP command error.
      eno_error = 0,
      // IP command error occurs.
      eerror = 1,
    };

    enum class eAXICMDERR : std::uint32_t {
      // No AXI command error.
      eno_error = 0,
      // AXI command error occurs.
      eerror = 1,
    };

    enum class eAXIBUSERR : std::uint32_t {
      // No AXI bus error.
      eno_error = 0,
      // AXI bus error occurs.
      eerror = 1,
    };

    enum class eNDPAGEEND : std::uint32_t {
      // The last address of main space in the NAND is not written by AXI command.
      eno_write = 0,
      // The last address of main space in the NAND is written by AXI command.
      ewrite = 1,
    };

    enum class eNDNOPEND : std::uint32_t {
      // At least one NAND AXI write transaction is pending or no NAND write transaction is sent to the queue.
      eno_write = 0,
      // All NAND AXI write pending transactions are finished.
      ewrite = 1,
    };

    // IP command normal done interrupt
    using IPCMDDONE = ftl::mmio::Field<1, 0, eIPCMDDONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IP command error done interrupt
    using IPCMDERR = ftl::mmio::Field<1, 1, eIPCMDERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI command error interrupt
    using AXICMDERR = ftl::mmio::Field<1, 2, eAXICMDERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI bus error interrupt
    using AXIBUSERR = ftl::mmio::Field<1, 3, eAXIBUSERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // NAND page end interrupt
    using NDPAGEEND = ftl::mmio::Field<1, 4, eNDPAGEEND, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // NAND no pending AXI write transaction interrupt
    using NDNOPEND = ftl::mmio::Field<1, 5, eNDNOPEND, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IntrFields

  struct INTR : ftl::mmio::Register<
      0x400D403Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntrFields::IPCMDDONE,
      IntrFields::IPCMDERR,
      IntrFields::AXICMDERR,
      IntrFields::AXIBUSERR,
      IntrFields::NDPAGEEND,
      IntrFields::NDNOPEND,
      ftl::mmio::Reserved<26, 6>> {
    using eIPCMDDONE = IntrFields::eIPCMDDONE;
    using eIPCMDERR = IntrFields::eIPCMDERR;
    using eAXICMDERR = IntrFields::eAXICMDERR;
    using eAXIBUSERR = IntrFields::eAXIBUSERR;
    using eNDPAGEEND = IntrFields::eNDPAGEEND;
    using eNDNOPEND = IntrFields::eNDNOPEND;
    using IPCMDDONE = IntrFields::IPCMDDONE;
    using IPCMDERR = IntrFields::IPCMDERR;
    using AXICMDERR = IntrFields::AXICMDERR;
    using AXIBUSERR = IntrFields::AXIBUSERR;
    using NDPAGEEND = IntrFields::NDPAGEEND;
    using NDNOPEND = IntrFields::NDNOPEND;
  };

  // SDRAM Control Register 0
  struct Sdramcr0Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
      // 32bit
      eps_32bit = 2,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8_3 = 3,
      // 8
      eburst8_4 = 4,
      // 8
      eburst8_5 = 5,
      // 8
      eburst8_6 = 6,
      // 8
      eburst8_7 = 7,
    };

    enum class eCOL8 : std::uint32_t {
      // Column address bit number is decided by COL field.
      ecolfield = 0,
      // Column address bit number is 8. COL field is ignored.
      ebit8 = 1,
    };

    enum class eCOL : std::uint32_t {
      // 12
      ebit12 = 0,
      // 11
      ebit11 = 1,
      // 10
      ebit10 = 2,
      // 9
      ebit9 = 3,
    };

    enum class eCL : std::uint32_t {
      // 1
      ecl1_0 = 0,
      // 1
      ecl1_1 = 1,
      // 2
      ecl2 = 2,
      // 3
      ecl3 = 3,
    };

    enum class eBANK2 : std::uint32_t {
      // SDRAM device has 4 banks.
      ebank4 = 0,
      // SDRAM device has 2 banks.
      ebank2 = 1,
    };

    // Port Size
    using PS = ftl::mmio::Field<2, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column 8 selection
    using COL8 = ftl::mmio::Field<1, 7, eCOL8, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column address bit number
    using COL = ftl::mmio::Field<2, 8, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAS Latency
    using CL = ftl::mmio::Field<2, 10, eCL, ftl::mmio::RW, ftl::mmio::Normal>;
    // 2 Bank selection bit
    using BANK2 = ftl::mmio::Field<1, 14, eBANK2, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sdramcr0Fields

  struct SDRAMCR0 : ftl::mmio::Register<
      0x400D4040u,
      std::uint32_t,
      0x00000C26u,
      ftl::mmio::RW,
      Sdramcr0Fields::PS,
      ftl::mmio::Reserved<2, 2>,
      Sdramcr0Fields::BL,
      Sdramcr0Fields::COL8,
      Sdramcr0Fields::COL,
      Sdramcr0Fields::CL,
      ftl::mmio::Reserved<2, 12>,
      Sdramcr0Fields::BANK2,
      ftl::mmio::Reserved<17, 15>> {
    using ePS = Sdramcr0Fields::ePS;
    using eBL = Sdramcr0Fields::eBL;
    using eCOL8 = Sdramcr0Fields::eCOL8;
    using eCOL = Sdramcr0Fields::eCOL;
    using eCL = Sdramcr0Fields::eCL;
    using eBANK2 = Sdramcr0Fields::eBANK2;
    using PS = Sdramcr0Fields::PS;
    using BL = Sdramcr0Fields::BL;
    using COL8 = Sdramcr0Fields::COL8;
    using COL = Sdramcr0Fields::COL;
    using CL = Sdramcr0Fields::CL;
    using BANK2 = Sdramcr0Fields::BANK2;
  };

  // SDRAM Control Register 1
  struct Sdramcr1Fields {
    // PRECHARGE to ACTIVE/REFRESH command wait time
    using PRE2ACT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ACTIVE to READ/WRITE delay
    using ACT2RW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // REFRESH recovery time
    using RFRC = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WRITE recovery time
    using WRC = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CKE off minimum time
    using CKEOFF = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ACTIVE to PRECHARGE minimum time
    using ACT2PRE = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sdramcr1Fields

  struct SDRAMCR1 : ftl::mmio::Register<
      0x400D4044u,
      std::uint32_t,
      0x00994934u,
      ftl::mmio::RW,
      Sdramcr1Fields::PRE2ACT,
      Sdramcr1Fields::ACT2RW,
      Sdramcr1Fields::RFRC,
      Sdramcr1Fields::WRC,
      Sdramcr1Fields::CKEOFF,
      Sdramcr1Fields::ACT2PRE,
      ftl::mmio::Reserved<8, 24>> {
    using PRE2ACT = Sdramcr1Fields::PRE2ACT;
    using ACT2RW = Sdramcr1Fields::ACT2RW;
    using RFRC = Sdramcr1Fields::RFRC;
    using WRC = Sdramcr1Fields::WRC;
    using CKEOFF = Sdramcr1Fields::CKEOFF;
    using ACT2PRE = Sdramcr1Fields::ACT2PRE;
  };

  // SDRAM Control Register 2
  struct Sdramcr2Fields {
    enum class eITO : std::uint32_t {
      // IDLE timeout period is 256*Prescale period.
      eprescalex256 = 0,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_1 = 1,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_2 = 2,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_3 = 3,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_4 = 4,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_5 = 5,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_6 = 6,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_7 = 7,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_8 = 8,
      // IDLE timeout period is ITO*Prescale period.
      eprescalexito_9 = 9,
    };

    // SELF REFRESH recovery time
    using SRRC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // REFRESH to REFRESH delay
    using REF2REF = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ACTIVE to ACTIVE delay
    using ACT2ACT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SDRAM idle timeout
    using ITO = ftl::mmio::Field<8, 24, eITO, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sdramcr2Fields

  struct SDRAMCR2 : ftl::mmio::Register<
      0x400D4048u,
      std::uint32_t,
      0x80000EEEu,
      ftl::mmio::RW,
      Sdramcr2Fields::SRRC,
      Sdramcr2Fields::REF2REF,
      Sdramcr2Fields::ACT2ACT,
      Sdramcr2Fields::ITO> {
    using eITO = Sdramcr2Fields::eITO;
    using SRRC = Sdramcr2Fields::SRRC;
    using REF2REF = Sdramcr2Fields::REF2REF;
    using ACT2ACT = Sdramcr2Fields::ACT2ACT;
    using ITO = Sdramcr2Fields::ITO;
  };

  // SDRAM Control Register 3
  struct Sdramcr3Fields {
    enum class eREN : std::uint32_t {
      // The SEMC does not send AUTO REFRESH command automatically
      eno_auto_refresh = 0,
      // The SEMC sends AUTO REFRESH command automatically
      eauto_refresh = 1,
    };

    enum class eREBL : std::uint32_t {
      // 1
      erefresh_burst1 = 0,
      // 2
      erefresh_burst2 = 1,
      // 3
      erefresh_burst3 = 2,
      // 4
      erefresh_burst4 = 3,
      // 5
      erefresh_burst5 = 4,
      // 6
      erefresh_burst6 = 5,
      // 7
      erefresh_burst7 = 6,
      // 8
      erefresh_burst8 = 7,
    };

    enum class ePRESCALE : std::uint32_t {
      // (256*16+1) clock cycles
      eprescale_256x16plus1 = 0,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_1 = 1,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_2 = 2,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_3 = 3,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_4 = 4,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_5 = 5,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_6 = 6,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_7 = 7,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_8 = 8,
      // (PRESCALE*16+1) clock cycles
      eprescale_16plus1_9 = 9,
    };

    enum class eRT : std::uint32_t {
      // (256+1)*(Prescaler period)
      ert_256plus1xprescale = 0,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_1 = 1,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_2 = 2,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_3 = 3,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_4 = 4,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_5 = 5,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_6 = 6,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_7 = 7,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_8 = 8,
      // (RT+1)*(Prescaler period)
      ert_rtplus1xprescale_9 = 9,
    };

    enum class eUT : std::uint32_t {
      // 256*(Prescaler period)
      eprescalex256 = 0,
      // UT*(Prescaler period)
      eprescalexut_1 = 1,
      // UT*(Prescaler period)
      eprescalexut_2 = 2,
      // UT*(Prescaler period)
      eprescalexut_3 = 3,
      // UT*(Prescaler period)
      eprescalexut_4 = 4,
      // UT*(Prescaler period)
      eprescalexut_5 = 5,
      // UT*(Prescaler period)
      eprescalexut_6 = 6,
      // UT*(Prescaler period)
      eprescalexut_7 = 7,
      // UT*(Prescaler period)
      eprescalexut_8 = 8,
      // UT*(Prescaler period)
      eprescalexut_9 = 9,
    };

    // Refresh enable
    using REN = ftl::mmio::Field<1, 0, eREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Refresh burst length
    using REBL = ftl::mmio::Field<3, 1, eREBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler period
    using PRESCALE = ftl::mmio::Field<8, 8, ePRESCALE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Refresh timer period
    using RT = ftl::mmio::Field<8, 16, eRT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Urgent refresh threshold
    using UT = ftl::mmio::Field<8, 24, eUT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sdramcr3Fields

  struct SDRAMCR3 : ftl::mmio::Register<
      0x400D404Cu,
      std::uint32_t,
      0x40808000u,
      ftl::mmio::RW,
      Sdramcr3Fields::REN,
      Sdramcr3Fields::REBL,
      ftl::mmio::Reserved<4, 4>,
      Sdramcr3Fields::PRESCALE,
      Sdramcr3Fields::RT,
      Sdramcr3Fields::UT> {
    using eREN = Sdramcr3Fields::eREN;
    using eREBL = Sdramcr3Fields::eREBL;
    using ePRESCALE = Sdramcr3Fields::ePRESCALE;
    using eRT = Sdramcr3Fields::eRT;
    using eUT = Sdramcr3Fields::eUT;
    using REN = Sdramcr3Fields::REN;
    using REBL = Sdramcr3Fields::REBL;
    using PRESCALE = Sdramcr3Fields::PRESCALE;
    using RT = Sdramcr3Fields::RT;
    using UT = Sdramcr3Fields::UT;
  };

  // NAND Control Register 0
  struct Nandcr0Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
    };

    enum class eSYNCEN : std::uint32_t {
      // Asynchronous mode is enabled.
      easync = 0,
      // Synchronous mode is enabled.
      esync = 1,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8 = 3,
      // 16
      eburst16 = 4,
      // 32
      eburst32 = 5,
      // 64
      eburst64_6 = 6,
      // 64
      eburst64_7 = 7,
    };

    enum class eEDO : std::uint32_t {
      // EDO mode disabled
      eedo_disable = 0,
      // EDO mode enabled
      eedo_enable = 1,
    };

    enum class eCOL : std::uint32_t {
      // 16
      ebit16 = 0,
      // 15
      ebit15 = 1,
      // 14
      ebit14 = 2,
      // 13
      ebit13 = 3,
      // 12
      ebit12 = 4,
      // 11
      ebit11 = 5,
      // 10
      ebit10 = 6,
      // 9
      ebit9 = 7,
    };

    // Port Size
    using PS = ftl::mmio::Field<1, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Synchronous Mode Enable
    using SYNCEN = ftl::mmio::Field<1, 1, eSYNCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // EDO mode enabled
    using EDO = ftl::mmio::Field<1, 7, eEDO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column address bit number
    using COL = ftl::mmio::Field<3, 8, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nandcr0Fields

  struct NANDCR0 : ftl::mmio::Register<
      0x400D4050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nandcr0Fields::PS,
      Nandcr0Fields::SYNCEN,
      ftl::mmio::Reserved<2, 2>,
      Nandcr0Fields::BL,
      Nandcr0Fields::EDO,
      Nandcr0Fields::COL,
      ftl::mmio::Reserved<21, 11>> {
    using ePS = Nandcr0Fields::ePS;
    using eSYNCEN = Nandcr0Fields::eSYNCEN;
    using eBL = Nandcr0Fields::eBL;
    using eEDO = Nandcr0Fields::eEDO;
    using eCOL = Nandcr0Fields::eCOL;
    using PS = Nandcr0Fields::PS;
    using SYNCEN = Nandcr0Fields::SYNCEN;
    using BL = Nandcr0Fields::BL;
    using EDO = Nandcr0Fields::EDO;
    using COL = Nandcr0Fields::COL;
  };

  // NAND Control Register 1
  struct Nandcr1Fields {
    // CE# setup time
    using CES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE# hold time
    using CEH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE# low time
    using WEL = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE# high time
    using WEH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE# low time
    using REL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE# high time
    using REH = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Turnaround time
    using TA = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE# interval time
    using CEITV = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nandcr1Fields

  struct NANDCR1 : ftl::mmio::Register<
      0x400D4054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nandcr1Fields::CES,
      Nandcr1Fields::CEH,
      Nandcr1Fields::WEL,
      Nandcr1Fields::WEH,
      Nandcr1Fields::REL,
      Nandcr1Fields::REH,
      Nandcr1Fields::TA,
      Nandcr1Fields::CEITV> {
    using CES = Nandcr1Fields::CES;
    using CEH = Nandcr1Fields::CEH;
    using WEL = Nandcr1Fields::WEL;
    using WEH = Nandcr1Fields::WEH;
    using REL = Nandcr1Fields::REL;
    using REH = Nandcr1Fields::REH;
    using TA = Nandcr1Fields::TA;
    using CEITV = Nandcr1Fields::CEITV;
  };

  // NAND Control Register 2
  struct Nandcr2Fields {
    // WE# high to RE# low time
    using TWHR = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE# high to WE# low time
    using TRHW = ftl::mmio::Field<6, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address cycle to data loading time
    using TADL = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Ready to RE# low time
    using TRR = ftl::mmio::Field<6, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE# high to busy time
    using TWB = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nandcr2Fields

  struct NANDCR2 : ftl::mmio::Register<
      0x400D4058u,
      std::uint32_t,
      0x00010410u,
      ftl::mmio::RW,
      Nandcr2Fields::TWHR,
      Nandcr2Fields::TRHW,
      Nandcr2Fields::TADL,
      Nandcr2Fields::TRR,
      Nandcr2Fields::TWB,
      ftl::mmio::Reserved<2, 30>> {
    using TWHR = Nandcr2Fields::TWHR;
    using TRHW = Nandcr2Fields::TRHW;
    using TADL = Nandcr2Fields::TADL;
    using TRR = Nandcr2Fields::TRR;
    using TWB = Nandcr2Fields::TWB;
  };

  // NAND Control Register 3
  struct Nandcr3Fields {
    // NAND option bit 1
    using NDOPT1 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND option bit 2
    using NDOPT2 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND option bit 3
    using NDOPT3 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND CLE Option
    using CLE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Data Setup time
    using RDS = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Data Hold time
    using RDH = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data Setup time
    using WDS = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data Hold time
    using WDH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nandcr3Fields

  struct NANDCR3 : ftl::mmio::Register<
      0x400D405Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nandcr3Fields::NDOPT1,
      Nandcr3Fields::NDOPT2,
      Nandcr3Fields::NDOPT3,
      Nandcr3Fields::CLE,
      ftl::mmio::Reserved<12, 4>,
      Nandcr3Fields::RDS,
      Nandcr3Fields::RDH,
      Nandcr3Fields::WDS,
      Nandcr3Fields::WDH> {
    using NDOPT1 = Nandcr3Fields::NDOPT1;
    using NDOPT2 = Nandcr3Fields::NDOPT2;
    using NDOPT3 = Nandcr3Fields::NDOPT3;
    using CLE = Nandcr3Fields::CLE;
    using RDS = Nandcr3Fields::RDS;
    using RDH = Nandcr3Fields::RDH;
    using WDS = Nandcr3Fields::WDS;
    using WDH = Nandcr3Fields::WDH;
  };

  // NOR Control Register 0
  struct Norcr0Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
    };

    enum class eSYNCEN : std::uint32_t {
      // Asynchronous mode is enabled.
      easync = 0,
      // Synchronous mode is enabled. Only fixed latency mode is supported.
      esync = 1,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8 = 3,
      // 16
      eburst16 = 4,
      // 32
      eburst32 = 5,
      // 64
      eburst64_6 = 6,
      // 64
      eburst64_7 = 7,
    };

    enum class eAM : std::uint32_t {
      // Address/Data MUX mode (ADMUX)
      eadmux = 0,
      // Advanced Address/Data MUX mode (AADM)
      eaadm = 1,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_2 = 2,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_3 = 3,
    };

    enum class eADVP : std::uint32_t {
      // ADV# is active low.
      eactive_low = 0,
      // ADV# is active high.
      eactive_high = 1,
    };

    enum class eADVH : std::uint32_t {
      // ADV# is high during address hold state.
      ehigh = 0,
      // ADV# is low during address hold state.
      elow = 1,
    };

    enum class eCOL : std::uint32_t {
      // 12 Bits
      ebitwidth12_0 = 0,
      // 11 Bits
      ebitwidth11 = 1,
      // 10 Bits
      ebitwidth10 = 2,
      // 9 Bits
      ebitwidth9 = 3,
      // 8 Bits
      ebitwidth8 = 4,
      // 7 Bits
      ebitwidth7 = 5,
      // 6 Bits
      ebitwidth6 = 6,
      // 5 Bits
      ebitwidth5 = 7,
      // 4 Bits
      ebitwidth4 = 8,
      // 3 Bits
      ebitwidth3 = 9,
      // 2 Bits
      ebitwidth2 = 10,
      // 12 Bits
      ebitwidth12_b = 11,
      // 12 Bits
      ebitwidth12_c = 12,
      // 12 Bits
      ebitwidth12_d = 13,
      // 12 Bits
      ebitwidth12_e = 14,
      // 12 Bits
      ebitwidth12_f = 15,
    };

    // Port Size
    using PS = ftl::mmio::Field<1, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Synchronous Mode Enable
    using SYNCEN = ftl::mmio::Field<1, 1, eSYNCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Mode
    using AM = ftl::mmio::Field<2, 8, eAM, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# Polarity
    using ADVP = ftl::mmio::Field<1, 10, eADVP, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# level control during address hold state
    using ADVH = ftl::mmio::Field<1, 11, eADVH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column Address bit width
    using COL = ftl::mmio::Field<4, 12, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Norcr0Fields

  struct NORCR0 : ftl::mmio::Register<
      0x400D4060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Norcr0Fields::PS,
      Norcr0Fields::SYNCEN,
      ftl::mmio::Reserved<2, 2>,
      Norcr0Fields::BL,
      ftl::mmio::Reserved<1, 7>,
      Norcr0Fields::AM,
      Norcr0Fields::ADVP,
      Norcr0Fields::ADVH,
      Norcr0Fields::COL,
      ftl::mmio::Reserved<16, 16>> {
    using ePS = Norcr0Fields::ePS;
    using eSYNCEN = Norcr0Fields::eSYNCEN;
    using eBL = Norcr0Fields::eBL;
    using eAM = Norcr0Fields::eAM;
    using eADVP = Norcr0Fields::eADVP;
    using eADVH = Norcr0Fields::eADVH;
    using eCOL = Norcr0Fields::eCOL;
    using PS = Norcr0Fields::PS;
    using SYNCEN = Norcr0Fields::SYNCEN;
    using BL = Norcr0Fields::BL;
    using AM = Norcr0Fields::AM;
    using ADVP = Norcr0Fields::ADVP;
    using ADVH = Norcr0Fields::ADVH;
    using COL = Norcr0Fields::COL;
  };

  // NOR Control Register 1
  struct Norcr1Fields {
    // CE setup time
    using CES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE hold time
    using CEH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address setup time
    using AS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address hold time
    using AH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE low time
    using WEL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE high time
    using WEH = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE low time
    using REL = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE high time
    using REH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Norcr1Fields

  struct NORCR1 : ftl::mmio::Register<
      0x400D4064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Norcr1Fields::CES,
      Norcr1Fields::CEH,
      Norcr1Fields::AS,
      Norcr1Fields::AH,
      Norcr1Fields::WEL,
      Norcr1Fields::WEH,
      Norcr1Fields::REL,
      Norcr1Fields::REH> {
    using CES = Norcr1Fields::CES;
    using CEH = Norcr1Fields::CEH;
    using AS = Norcr1Fields::AS;
    using AH = Norcr1Fields::AH;
    using WEL = Norcr1Fields::WEL;
    using WEH = Norcr1Fields::WEH;
    using REL = Norcr1Fields::REL;
    using REH = Norcr1Fields::REH;
  };

  // NOR Control Register 2
  struct Norcr2Fields {
    // Turnaround time
    using TA = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address to write data hold time
    using AWDH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Latency count
    using LC = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read time
    using RD = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE# interval time
    using CEITV = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read hold time
    using RDH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Norcr2Fields

  struct NORCR2 : ftl::mmio::Register<
      0x400D4068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      Norcr2Fields::TA,
      Norcr2Fields::AWDH,
      Norcr2Fields::LC,
      Norcr2Fields::RD,
      Norcr2Fields::CEITV,
      Norcr2Fields::RDH> {
    using TA = Norcr2Fields::TA;
    using AWDH = Norcr2Fields::AWDH;
    using LC = Norcr2Fields::LC;
    using RD = Norcr2Fields::RD;
    using CEITV = Norcr2Fields::CEITV;
    using RDH = Norcr2Fields::RDH;
  };

  // NOR Control Register 3
  struct Norcr3Fields {
    // Address setup time for SYNC read
    using ASSR = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address hold time for SYNC read
    using AHSR = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Norcr3Fields

  struct NORCR3 : ftl::mmio::Register<
      0x400D406Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Norcr3Fields::ASSR,
      Norcr3Fields::AHSR,
      ftl::mmio::Reserved<24, 8>> {
    using ASSR = Norcr3Fields::ASSR;
    using AHSR = Norcr3Fields::AHSR;
  };

  // SRAM Control Register 0
  struct Sramcr0Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
    };

    enum class eSYNCEN : std::uint32_t {
      // Asynchronous mode is enabled.
      easync = 0,
      // Synchronous mode is enabled. Only fixed latency mode is supported.
      esync = 1,
    };

    enum class eWAITEN : std::uint32_t {
      // The SEMC does not monitor wait pin.
      eno_monitor_wait = 0,
      // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
      emonitor_wait = 1,
    };

    enum class eWAITSP : std::uint32_t {
      // Wait pin is directly used by the SEMC.
      ewait_direct = 0,
      // Wait pin is sampled by internal clock before it is used.
      ewait_sampled = 1,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8 = 3,
      // 16
      eburst16 = 4,
      // 32
      eburst32 = 5,
      // 64
      eburst64_6 = 6,
      // 64
      eburst64_7 = 7,
    };

    enum class eAM : std::uint32_t {
      // Address/Data MUX mode (ADMUX)
      eadmux = 0,
      // Advanced Address/Data MUX mode (AADM)
      eaadm = 1,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_2 = 2,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_3 = 3,
    };

    enum class eADVP : std::uint32_t {
      // ADV# is active low.
      eactive_low = 0,
      // ADV# is active high.
      eactive_high = 1,
    };

    enum class eADVH : std::uint32_t {
      // ADV# is high during address hold state.
      ehigh_hold = 0,
      // ADV# is low during address hold state.
      elow_hold = 1,
    };

    enum class eCOL : std::uint32_t {
      // 12 Bits
      ebitwidth12_0 = 0,
      // 11 Bits
      ebitwidth11 = 1,
      // 10 Bits
      ebitwidth10 = 2,
      // 9 Bits
      ebitwidth9 = 3,
      // 8 Bits
      ebitwidth8 = 4,
      // 7 Bits
      ebitwidth7 = 5,
      // 6 Bits
      ebitwidth6 = 6,
      // 5 Bits
      ebitwidth5 = 7,
      // 4 Bits
      ebitwidth4 = 8,
      // 3 Bits
      ebitwidth3 = 9,
      // 2 Bits
      ebitwidth2 = 10,
      // 12 Bits
      ebitwidth12_b = 11,
      // 12 Bits
      ebitwidth12_c = 12,
      // 12 Bits
      ebitwidth12_d = 13,
      // 12 Bits
      ebitwidth12_e = 14,
      // 12 Bits
      ebitwidth12_f = 15,
    };

    // Port Size
    using PS = ftl::mmio::Field<1, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Synchronous Mode Enable
    using SYNCEN = ftl::mmio::Field<1, 1, eSYNCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 2, eWAITEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Sample
    using WAITSP = ftl::mmio::Field<1, 3, eWAITSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Mode
    using AM = ftl::mmio::Field<2, 8, eAM, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# polarity
    using ADVP = ftl::mmio::Field<1, 10, eADVP, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# level control during address hold state
    using ADVH = ftl::mmio::Field<1, 11, eADVH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column Address bit width
    using COL = ftl::mmio::Field<4, 12, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr0Fields

  struct SRAMCR0 : ftl::mmio::Register<
      0x400D4070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr0Fields::PS,
      Sramcr0Fields::SYNCEN,
      Sramcr0Fields::WAITEN,
      Sramcr0Fields::WAITSP,
      Sramcr0Fields::BL,
      ftl::mmio::Reserved<1, 7>,
      Sramcr0Fields::AM,
      Sramcr0Fields::ADVP,
      Sramcr0Fields::ADVH,
      Sramcr0Fields::COL,
      ftl::mmio::Reserved<16, 16>> {
    using ePS = Sramcr0Fields::ePS;
    using eSYNCEN = Sramcr0Fields::eSYNCEN;
    using eWAITEN = Sramcr0Fields::eWAITEN;
    using eWAITSP = Sramcr0Fields::eWAITSP;
    using eBL = Sramcr0Fields::eBL;
    using eAM = Sramcr0Fields::eAM;
    using eADVP = Sramcr0Fields::eADVP;
    using eADVH = Sramcr0Fields::eADVH;
    using eCOL = Sramcr0Fields::eCOL;
    using PS = Sramcr0Fields::PS;
    using SYNCEN = Sramcr0Fields::SYNCEN;
    using WAITEN = Sramcr0Fields::WAITEN;
    using WAITSP = Sramcr0Fields::WAITSP;
    using BL = Sramcr0Fields::BL;
    using AM = Sramcr0Fields::AM;
    using ADVP = Sramcr0Fields::ADVP;
    using ADVH = Sramcr0Fields::ADVH;
    using COL = Sramcr0Fields::COL;
  };

  // SRAM Control Register 1
  struct Sramcr1Fields {
    // CE setup time
    using CES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE hold time
    using CEH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address setup time
    using AS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address hold time
    using AH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE low time
    using WEL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE high time
    using WEH = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE low time
    using REL = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE high time
    using REH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr1Fields

  struct SRAMCR1 : ftl::mmio::Register<
      0x400D4074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr1Fields::CES,
      Sramcr1Fields::CEH,
      Sramcr1Fields::AS,
      Sramcr1Fields::AH,
      Sramcr1Fields::WEL,
      Sramcr1Fields::WEH,
      Sramcr1Fields::REL,
      Sramcr1Fields::REH> {
    using CES = Sramcr1Fields::CES;
    using CEH = Sramcr1Fields::CEH;
    using AS = Sramcr1Fields::AS;
    using AH = Sramcr1Fields::AH;
    using WEL = Sramcr1Fields::WEL;
    using WEH = Sramcr1Fields::WEH;
    using REL = Sramcr1Fields::REL;
    using REH = Sramcr1Fields::REH;
  };

  // SRAM Control Register 2
  struct Sramcr2Fields {
    // Write Data setup time
    using WDS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data hold time
    using WDH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Turnaround time
    using TA = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address to write data hold time
    using AWDH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Latency count
    using LC = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read time
    using RD = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE# interval time
    using CEITV = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read hold time
    using RDH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr2Fields

  struct SRAMCR2 : ftl::mmio::Register<
      0x400D4078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr2Fields::WDS,
      Sramcr2Fields::WDH,
      Sramcr2Fields::TA,
      Sramcr2Fields::AWDH,
      Sramcr2Fields::LC,
      Sramcr2Fields::RD,
      Sramcr2Fields::CEITV,
      Sramcr2Fields::RDH> {
    using WDS = Sramcr2Fields::WDS;
    using WDH = Sramcr2Fields::WDH;
    using TA = Sramcr2Fields::TA;
    using AWDH = Sramcr2Fields::AWDH;
    using LC = Sramcr2Fields::LC;
    using RD = Sramcr2Fields::RD;
    using CEITV = Sramcr2Fields::CEITV;
    using RDH = Sramcr2Fields::RDH;
  };

  // SRAM Control Register 3
  struct Sramcr3Fields {
  };  // struct Sramcr3Fields

  struct SRAMCR3 : ftl::mmio::Register<
      0x400D407Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<32, 0>> {
  };

  // DBI-B Control Register 0
  struct Dbicr0Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8 = 3,
      // 16
      eburst16 = 4,
      // 32
      eburst32 = 5,
      // 64
      eburst64_6 = 6,
      // 64
      eburst64_7 = 7,
    };

    enum class eCOL : std::uint32_t {
      // 12 Bits
      ebitwidth12_0 = 0,
      // 11 Bits
      ebitwidth11 = 1,
      // 10 Bits
      ebitwidth10 = 2,
      // 9 Bits
      ebitwidth9 = 3,
      // 8 Bits
      ebitwidth8 = 4,
      // 7 Bits
      ebitwidth7 = 5,
      // 6 Bits
      ebitwidth6 = 6,
      // 5 Bits
      ebitwidth5 = 7,
      // 4 Bits
      ebitwidth4 = 8,
      // 3 Bits
      ebitwidth3 = 9,
      // 2 Bits
      ebitwidth2 = 10,
      // 12 Bits
      ebitwidth12_b = 11,
      // 12 Bits
      ebitwidth12_c = 12,
      // 12 Bits
      ebitwidth12_d = 13,
      // 12 Bits
      ebitwidth12_e = 14,
      // 12 Bits
      ebitwidth12_f = 15,
    };

    // Port Size
    using PS = ftl::mmio::Field<1, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column Address bit width
    using COL = ftl::mmio::Field<4, 12, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dbicr0Fields

  struct DBICR0 : ftl::mmio::Register<
      0x400D4080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Dbicr0Fields::PS,
      ftl::mmio::Reserved<3, 1>,
      Dbicr0Fields::BL,
      ftl::mmio::Reserved<5, 7>,
      Dbicr0Fields::COL,
      ftl::mmio::Reserved<16, 16>> {
    using ePS = Dbicr0Fields::ePS;
    using eBL = Dbicr0Fields::eBL;
    using eCOL = Dbicr0Fields::eCOL;
    using PS = Dbicr0Fields::PS;
    using BL = Dbicr0Fields::BL;
    using COL = Dbicr0Fields::COL;
  };

  // DBI-B Control Register 1
  struct Dbicr1Fields {
    // CSX Setup Time
    using CES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CSX Hold Time
    using CEH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WRX Low Time
    using WEL = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WRX High Time
    using WEH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RDX Low Time
    using REL = ftl::mmio::Field<7, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RDX High Time
    using REH = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dbicr1Fields

  struct DBICR1 : ftl::mmio::Register<
      0x400D4084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Dbicr1Fields::CES,
      Dbicr1Fields::CEH,
      Dbicr1Fields::WEL,
      Dbicr1Fields::WEH,
      Dbicr1Fields::REL,
      ftl::mmio::Reserved<1, 23>,
      Dbicr1Fields::REH,
      ftl::mmio::Reserved<1, 31>> {
    using CES = Dbicr1Fields::CES;
    using CEH = Dbicr1Fields::CEH;
    using WEL = Dbicr1Fields::WEL;
    using WEH = Dbicr1Fields::WEH;
    using REL = Dbicr1Fields::REL;
    using REH = Dbicr1Fields::REH;
  };

  // DBI-B Control Register 2
  struct Dbicr2Fields {
    // CSX interval time
    using CEITV = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dbicr2Fields

  struct DBICR2 : ftl::mmio::Register<
      0x400D4088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Dbicr2Fields::CEITV,
      ftl::mmio::Reserved<28, 4>> {
    using CEITV = Dbicr2Fields::CEITV;
  };

  // IP Command Control Register 0
  struct Ipcr0Fields {
    // Slave address
    using SA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ipcr0Fields

  struct IPCR0 : ftl::mmio::Register<
      0x400D4090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ipcr0Fields::SA> {
    using SA = Ipcr0Fields::SA;
  };

  // IP Command Control Register 1
  struct Ipcr1Fields {
    enum class eDATSZ : std::uint32_t {
      // 4
      edatasz_4byte = 0,
      // 1
      edatasz_1byte = 1,
      // 2
      edatasz_2byte = 2,
      // 3
      edatasz_3byte = 3,
      // 4
      edatasz_4byte_4 = 4,
      // 4
      edatasz_4byte_5 = 5,
      // 4
      edatasz_4byte_6 = 6,
      // 4
      edatasz_4byte_7 = 7,
    };

    // Data Size in Byte
    using DATSZ = ftl::mmio::Field<3, 0, eDATSZ, ftl::mmio::RW, ftl::mmio::Normal>;
    // NAND Extended Address
    using NAND_EXT_ADDR = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ipcr1Fields

  struct IPCR1 : ftl::mmio::Register<
      0x400D4094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ipcr1Fields::DATSZ,
      ftl::mmio::Reserved<5, 3>,
      Ipcr1Fields::NAND_EXT_ADDR,
      ftl::mmio::Reserved<16, 16>> {
    using eDATSZ = Ipcr1Fields::eDATSZ;
    using DATSZ = Ipcr1Fields::DATSZ;
    using NAND_EXT_ADDR = Ipcr1Fields::NAND_EXT_ADDR;
  };

  // IP Command Control Register 2
  struct Ipcr2Fields {
    enum class eBM0 : std::uint32_t {
      // Byte is unmasked
      eunmasked = 0,
      // Byte is masked
      emasked = 1,
    };

    enum class eBM1 : std::uint32_t {
      // Byte is unmasked
      eunmasked = 0,
      // Byte is masked
      emasked = 1,
    };

    enum class eBM2 : std::uint32_t {
      // Byte is unmasked
      eunmasked = 0,
      // Byte is masked
      emasked = 1,
    };

    enum class eBM3 : std::uint32_t {
      // Byte is unmasked
      eunmasked = 0,
      // Byte is masked
      emasked = 1,
    };

    // Byte Mask for Byte 0 (IPTXDAT bit 7:0)
    using BM0 = ftl::mmio::Field<1, 0, eBM0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Byte Mask for Byte 1 (IPTXDAT bit 15:8)
    using BM1 = ftl::mmio::Field<1, 1, eBM1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Byte Mask for Byte 2 (IPTXDAT bit 23:16)
    using BM2 = ftl::mmio::Field<1, 2, eBM2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Byte Mask for Byte 3 (IPTXDAT bit 31:24)
    using BM3 = ftl::mmio::Field<1, 3, eBM3, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ipcr2Fields

  struct IPCR2 : ftl::mmio::Register<
      0x400D4098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ipcr2Fields::BM0,
      Ipcr2Fields::BM1,
      Ipcr2Fields::BM2,
      Ipcr2Fields::BM3,
      ftl::mmio::Reserved<28, 4>> {
    using eBM0 = Ipcr2Fields::eBM0;
    using eBM1 = Ipcr2Fields::eBM1;
    using eBM2 = Ipcr2Fields::eBM2;
    using eBM3 = Ipcr2Fields::eBM3;
    using BM0 = Ipcr2Fields::BM0;
    using BM1 = Ipcr2Fields::BM1;
    using BM2 = Ipcr2Fields::BM2;
    using BM3 = Ipcr2Fields::BM3;
  };

  // IP Command Register
  struct IpcmdFields {
    // SDRAM Commands: 0x8: Read 0x9: Write 0xA: Mode Register Set 0xB: Active 0xC: Auto Refresh 0xD: Self Refresh 0xE: Precharge 0xF: Precharge All Others: Reserved Self Refresh is sent to all SDRAM devices because they share the same SEMC_CLK pin
    using CMD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field should be written with 0xA55A when trigging an IP command for all device types
    using KEY = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct IpcmdFields

  struct IPCMD : ftl::mmio::Register<
      0x400D409Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IpcmdFields::CMD,
      IpcmdFields::KEY> {
    using CMD = IpcmdFields::CMD;
    using KEY = IpcmdFields::KEY;
  };

  // TX DATA Register
  struct IptxdatFields {
    // Data value to use for an IP write command
    using DAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IptxdatFields

  struct IPTXDAT : ftl::mmio::Register<
      0x400D40A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IptxdatFields::DAT> {
    using DAT = IptxdatFields::DAT;
  };

  // RX DATA Register
  struct IprxdatFields {
    // Data returned by device for an IP read command.
    using DAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IprxdatFields

  struct IPRXDAT : ftl::mmio::Register<
      0x400D40B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IprxdatFields::DAT> {
    using DAT = IprxdatFields::DAT;
  };

  // Status Register 0
  struct Sts0Fields {
    enum class eNARDY : std::uint32_t {
      // NAND device is not ready
      enotready = 0,
      // NAND device is ready
      eready = 1,
    };

    // Indicating whether the SEMC is in idle state.
    using IDLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicating NAND device Ready/WAIT# pin level.
    using NARDY = ftl::mmio::Field<1, 1, eNARDY, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sts0Fields

  struct STS0 : ftl::mmio::Register<
      0x400D40C0u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      Sts0Fields::IDLE,
      Sts0Fields::NARDY,
      ftl::mmio::Reserved<30, 2>> {
    using eNARDY = Sts0Fields::eNARDY;
    using IDLE = Sts0Fields::IDLE;
    using NARDY = Sts0Fields::NARDY;
  };

  // Status Register 1
  struct Sts1Fields {
  };  // struct Sts1Fields

  struct STS1 : ftl::mmio::Register<
      0x400D40C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 2
  struct Sts2Fields {
    enum class eNDWRPEND : std::uint32_t {
      // No pending
      eno_pending = 0,
      // Pending
      epending = 1,
    };

    // This field indicating whether there is pending AXI command (write) to NAND device.
    using NDWRPEND = ftl::mmio::Field<1, 3, eNDWRPEND, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sts2Fields

  struct STS2 : ftl::mmio::Register<
      0x400D40C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<3, 0>,
      Sts2Fields::NDWRPEND,
      ftl::mmio::Reserved<28, 4>> {
    using eNDWRPEND = Sts2Fields::eNDWRPEND;
    using NDWRPEND = Sts2Fields::NDWRPEND;
  };

  // Status Register 3
  struct Sts3Fields {
  };  // struct Sts3Fields

  struct STS3 : ftl::mmio::Register<
      0x400D40CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 4
  struct Sts4Fields {
  };  // struct Sts4Fields

  struct STS4 : ftl::mmio::Register<
      0x400D40D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 5
  struct Sts5Fields {
  };  // struct Sts5Fields

  struct STS5 : ftl::mmio::Register<
      0x400D40D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 6
  struct Sts6Fields {
  };  // struct Sts6Fields

  struct STS6 : ftl::mmio::Register<
      0x400D40D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 7
  struct Sts7Fields {
  };  // struct Sts7Fields

  struct STS7 : ftl::mmio::Register<
      0x400D40DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 8
  struct Sts8Fields {
  };  // struct Sts8Fields

  struct STS8 : ftl::mmio::Register<
      0x400D40E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 9
  struct Sts9Fields {
  };  // struct Sts9Fields

  struct STS9 : ftl::mmio::Register<
      0x400D40E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 10
  struct Sts10Fields {
  };  // struct Sts10Fields

  struct STS10 : ftl::mmio::Register<
      0x400D40E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 11
  struct Sts11Fields {
  };  // struct Sts11Fields

  struct STS11 : ftl::mmio::Register<
      0x400D40ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 12
  struct Sts12Fields {
    // This field indicating the last write address (AXI command) to NAND device (without base address in SEMC_BR4).
    using NDADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sts12Fields

  struct STS12 : ftl::mmio::Register<
      0x400D40F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Sts12Fields::NDADDR> {
    using NDADDR = Sts12Fields::NDADDR;
  };

  // Status Register 13
  struct Sts13Fields {
    enum class eSLVLOCK : std::uint32_t {
      // Slave delay line is not locked.
      enot_locked = 0,
      // Slave delay line is locked.
      elocked = 1,
    };

    enum class eREFLOCK : std::uint32_t {
      // Reference delay line is not locked.
      enot_locked = 0,
      // Reference delay line is locked.
      elocked = 1,
    };

    // Sample clock slave delay line locked.
    using SLVLOCK = ftl::mmio::Field<1, 0, eSLVLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Sample clock reference delay line locked.
    using REFLOCK = ftl::mmio::Field<1, 1, eREFLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
    // Sample clock slave delay line delay cell number selection.
    using SLVSEL = ftl::mmio::Field<6, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Sample clock reference delay line delay cell number selection.
    using REFSEL = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sts13Fields

  struct STS13 : ftl::mmio::Register<
      0x400D40F4u,
      std::uint32_t,
      0x00000100u,
      ftl::mmio::RO,
      Sts13Fields::SLVLOCK,
      Sts13Fields::REFLOCK,
      Sts13Fields::SLVSEL,
      Sts13Fields::REFSEL,
      ftl::mmio::Reserved<18, 14>> {
    using eSLVLOCK = Sts13Fields::eSLVLOCK;
    using eREFLOCK = Sts13Fields::eREFLOCK;
    using SLVLOCK = Sts13Fields::SLVLOCK;
    using REFLOCK = Sts13Fields::REFLOCK;
    using SLVSEL = Sts13Fields::SLVSEL;
    using REFSEL = Sts13Fields::REFSEL;
  };

  // Status Register 14
  struct Sts14Fields {
  };  // struct Sts14Fields

  struct STS14 : ftl::mmio::Register<
      0x400D40F8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Status Register 15
  struct Sts15Fields {
  };  // struct Sts15Fields

  struct STS15 : ftl::mmio::Register<
      0x400D40FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Base Register 9
  struct Br9Fields {
    enum class eVLD : std::uint32_t {
      // The memory is invalid, can not be accessed.
      einvalid = 0,
      // The memory is valid, can be accessed.
      evalid = 1,
    };

    enum class eMS : std::uint32_t {
      // 4KB
      esize_4kb = 0,
      // 8KB
      esize_8kb = 1,
      // 16KB
      esize_16kb = 2,
      // 32KB
      esize_32kb = 3,
      // 64KB
      esize_64kb = 4,
      // 128KB
      esize_128kb = 5,
      // 256KB
      esize_256kb = 6,
      // 512KB
      esize_512kb = 7,
      // 1MB
      esize_1mb = 8,
      // 2MB
      esize_2mb = 9,
      // 4MB
      esize_4mb = 10,
      // 8MB
      esize_8mb = 11,
      // 16MB
      esize_16mb = 12,
      // 32MB
      esize_32mb = 13,
      // 64MB
      esize_64mb = 14,
      // 128MB
      esize_128mb = 15,
      // 256MB
      esize_256mb = 16,
      // 512MB
      esize_512mb = 17,
      // 1GB
      esize_1gb = 18,
      // 2GB
      esize_2gb = 19,
      // 4GB
      esize_4gb_20 = 20,
      // 4GB
      esize_4gb_21 = 21,
      // 4GB
      esize_4gb_22 = 22,
      // 4GB
      esize_4gb_23 = 23,
      // 4GB
      esize_4gb_24 = 24,
      // 4GB
      esize_4gb_25 = 25,
      // 4GB
      esize_4gb_26 = 26,
      // 4GB
      esize_4gb_27 = 27,
      // 4GB
      esize_4gb_28 = 28,
      // 4GB
      esize_4gb_29 = 29,
      // 4GB
      esize_4gb_30 = 30,
      // 4GB
      esize_4gb_31 = 31,
    };

    // Valid
    using VLD = ftl::mmio::Field<1, 0, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory size
    using MS = ftl::mmio::Field<5, 1, eMS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base Address
    using BA = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Br9Fields

  struct BR9 : ftl::mmio::Register<
      0x400D4100u,
      std::uint32_t,
      0xA0000018u,
      ftl::mmio::RW,
      Br9Fields::VLD,
      Br9Fields::MS,
      ftl::mmio::Reserved<6, 6>,
      Br9Fields::BA> {
    using eVLD = Br9Fields::eVLD;
    using eMS = Br9Fields::eMS;
    using VLD = Br9Fields::VLD;
    using MS = Br9Fields::MS;
    using BA = Br9Fields::BA;
  };

  // Base Register 10
  struct Br10Fields {
    enum class eVLD : std::uint32_t {
      // The memory is invalid, can not be accessed.
      einvalid = 0,
      // The memory is valid, can be accessed.
      evalid = 1,
    };

    enum class eMS : std::uint32_t {
      // 4KB
      esize_4kb = 0,
      // 8KB
      esize_8kb = 1,
      // 16KB
      esize_16kb = 2,
      // 32KB
      esize_32kb = 3,
      // 64KB
      esize_64kb = 4,
      // 128KB
      esize_128kb = 5,
      // 256KB
      esize_256kb = 6,
      // 512KB
      esize_512kb = 7,
      // 1MB
      esize_1mb = 8,
      // 2MB
      esize_2mb = 9,
      // 4MB
      esize_4mb = 10,
      // 8MB
      esize_8mb = 11,
      // 16MB
      esize_16mb = 12,
      // 32MB
      esize_32mb = 13,
      // 64MB
      esize_64mb = 14,
      // 128MB
      esize_128mb = 15,
      // 256MB
      esize_256mb = 16,
      // 512MB
      esize_512mb = 17,
      // 1GB
      esize_1gb = 18,
      // 2GB
      esize_2gb = 19,
      // 4GB
      esize_4gb_20 = 20,
      // 4GB
      esize_4gb_21 = 21,
      // 4GB
      esize_4gb_22 = 22,
      // 4GB
      esize_4gb_23 = 23,
      // 4GB
      esize_4gb_24 = 24,
      // 4GB
      esize_4gb_25 = 25,
      // 4GB
      esize_4gb_26 = 26,
      // 4GB
      esize_4gb_27 = 27,
      // 4GB
      esize_4gb_28 = 28,
      // 4GB
      esize_4gb_29 = 29,
      // 4GB
      esize_4gb_30 = 30,
      // 4GB
      esize_4gb_31 = 31,
    };

    // Valid
    using VLD = ftl::mmio::Field<1, 0, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory size
    using MS = ftl::mmio::Field<5, 1, eMS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base Address
    using BA = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Br10Fields

  struct BR10 : ftl::mmio::Register<
      0x400D4104u,
      std::uint32_t,
      0xA4000018u,
      ftl::mmio::RW,
      Br10Fields::VLD,
      Br10Fields::MS,
      ftl::mmio::Reserved<6, 6>,
      Br10Fields::BA> {
    using eVLD = Br10Fields::eVLD;
    using eMS = Br10Fields::eMS;
    using VLD = Br10Fields::VLD;
    using MS = Br10Fields::MS;
    using BA = Br10Fields::BA;
  };

  // Base Register 11
  struct Br11Fields {
    enum class eVLD : std::uint32_t {
      // The memory is invalid, can not be accessed.
      einvalid = 0,
      // The memory is valid, can be accessed.
      evalid = 1,
    };

    enum class eMS : std::uint32_t {
      // 4KB
      esize_4kb = 0,
      // 8KB
      esize_8kb = 1,
      // 16KB
      esize_16kb = 2,
      // 32KB
      esize_32kb = 3,
      // 64KB
      esize_64kb = 4,
      // 128KB
      esize_128kb = 5,
      // 256KB
      esize_256kb = 6,
      // 512KB
      esize_512kb = 7,
      // 1MB
      esize_1mb = 8,
      // 2MB
      esize_2mb = 9,
      // 4MB
      esize_4mb = 10,
      // 8MB
      esize_8mb = 11,
      // 16MB
      esize_16mb = 12,
      // 32MB
      esize_32mb = 13,
      // 64MB
      esize_64mb = 14,
      // 128MB
      esize_128mb = 15,
      // 256MB
      esize_256mb = 16,
      // 512MB
      esize_512mb = 17,
      // 1GB
      esize_1gb = 18,
      // 2GB
      esize_2gb = 19,
      // 4GB
      esize_4gb_20 = 20,
      // 4GB
      esize_4gb_21 = 21,
      // 4GB
      esize_4gb_22 = 22,
      // 4GB
      esize_4gb_23 = 23,
      // 4GB
      esize_4gb_24 = 24,
      // 4GB
      esize_4gb_25 = 25,
      // 4GB
      esize_4gb_26 = 26,
      // 4GB
      esize_4gb_27 = 27,
      // 4GB
      esize_4gb_28 = 28,
      // 4GB
      esize_4gb_29 = 29,
      // 4GB
      esize_4gb_30 = 30,
      // 4GB
      esize_4gb_31 = 31,
    };

    // Valid
    using VLD = ftl::mmio::Field<1, 0, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory size
    using MS = ftl::mmio::Field<5, 1, eMS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base Address
    using BA = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Br11Fields

  struct BR11 : ftl::mmio::Register<
      0x400D4108u,
      std::uint32_t,
      0xA8000018u,
      ftl::mmio::RW,
      Br11Fields::VLD,
      Br11Fields::MS,
      ftl::mmio::Reserved<6, 6>,
      Br11Fields::BA> {
    using eVLD = Br11Fields::eVLD;
    using eMS = Br11Fields::eMS;
    using VLD = Br11Fields::VLD;
    using MS = Br11Fields::MS;
    using BA = Br11Fields::BA;
  };

  // SRAM Control Register 4
  struct Sramcr4Fields {
    enum class ePS : std::uint32_t {
      // 8bit
      eps_8bit = 0,
      // 16bit
      eps_16bit = 1,
    };

    enum class eSYNCEN : std::uint32_t {
      // Asynchronous mode is enabled.
      easync = 0,
      // Synchronous mode is enabled. Only fixed latency mode is supported.
      esync = 1,
    };

    enum class eWAITEN : std::uint32_t {
      // The SEMC does not monitor wait pin.
      eno_monitor_wait = 0,
      // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
      emonitor_wait = 1,
    };

    enum class eWAITSP : std::uint32_t {
      // Wait pin is directly used by the SEMC.
      ewait_direct = 0,
      // Wait pin is sampled by internal clock before it is used.
      ewait_sampled = 1,
    };

    enum class eBL : std::uint32_t {
      // 1
      eburst1 = 0,
      // 2
      eburst2 = 1,
      // 4
      eburst4 = 2,
      // 8
      eburst8 = 3,
      // 16
      eburst16 = 4,
      // 32
      eburst32 = 5,
      // 64
      eburst64_6 = 6,
      // 64
      eburst64_7 = 7,
    };

    enum class eAM : std::uint32_t {
      // Address/Data MUX mode (ADMUX)
      eadmux = 0,
      // Advanced Address/Data MUX mode (AADM)
      eaadm = 1,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_2 = 2,
      // Address/Data non-MUX mode (Non-ADMUX)
      enon_admux_3 = 3,
    };

    enum class eADVP : std::uint32_t {
      // ADV# is active low.
      eactive_low = 0,
      // ADV# is active high.
      eactive_high = 1,
    };

    enum class eADVH : std::uint32_t {
      // ADV# is high during address hold state.
      ehigh_hold = 0,
      // ADV# is low during address hold state.
      elow_hold = 1,
    };

    enum class eCOL : std::uint32_t {
      // 12 Bits
      ebitwidth12_0 = 0,
      // 11 Bits
      ebitwidth11 = 1,
      // 10 Bits
      ebitwidth10 = 2,
      // 9 Bits
      ebitwidth9 = 3,
      // 8 Bits
      ebitwidth8 = 4,
      // 7 Bits
      ebitwidth7 = 5,
      // 6 Bits
      ebitwidth6 = 6,
      // 5 Bits
      ebitwidth5 = 7,
      // 4 Bits
      ebitwidth4 = 8,
      // 3 Bits
      ebitwidth3 = 9,
      // 2 Bits
      ebitwidth2 = 10,
      // 12 Bits
      ebitwidth12_b = 11,
      // 12 Bits
      ebitwidth12_c = 12,
      // 12 Bits
      ebitwidth12_d = 13,
      // 12 Bits
      ebitwidth12_e = 14,
      // 12 Bits
      ebitwidth12_f = 15,
    };

    // Port Size
    using PS = ftl::mmio::Field<1, 0, ePS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Synchronous Mode Enable
    using SYNCEN = ftl::mmio::Field<1, 1, eSYNCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 2, eWAITEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Sample
    using WAITSP = ftl::mmio::Field<1, 3, eWAITSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Burst Length
    using BL = ftl::mmio::Field<3, 4, eBL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address Mode
    using AM = ftl::mmio::Field<2, 8, eAM, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# polarity
    using ADVP = ftl::mmio::Field<1, 10, eADVP, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADV# level control during address hold state
    using ADVH = ftl::mmio::Field<1, 11, eADVH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Column Address bit width
    using COL = ftl::mmio::Field<4, 12, eCOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr4Fields

  struct SRAMCR4 : ftl::mmio::Register<
      0x400D4120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr4Fields::PS,
      Sramcr4Fields::SYNCEN,
      Sramcr4Fields::WAITEN,
      Sramcr4Fields::WAITSP,
      Sramcr4Fields::BL,
      ftl::mmio::Reserved<1, 7>,
      Sramcr4Fields::AM,
      Sramcr4Fields::ADVP,
      Sramcr4Fields::ADVH,
      Sramcr4Fields::COL,
      ftl::mmio::Reserved<16, 16>> {
    using ePS = Sramcr4Fields::ePS;
    using eSYNCEN = Sramcr4Fields::eSYNCEN;
    using eWAITEN = Sramcr4Fields::eWAITEN;
    using eWAITSP = Sramcr4Fields::eWAITSP;
    using eBL = Sramcr4Fields::eBL;
    using eAM = Sramcr4Fields::eAM;
    using eADVP = Sramcr4Fields::eADVP;
    using eADVH = Sramcr4Fields::eADVH;
    using eCOL = Sramcr4Fields::eCOL;
    using PS = Sramcr4Fields::PS;
    using SYNCEN = Sramcr4Fields::SYNCEN;
    using WAITEN = Sramcr4Fields::WAITEN;
    using WAITSP = Sramcr4Fields::WAITSP;
    using BL = Sramcr4Fields::BL;
    using AM = Sramcr4Fields::AM;
    using ADVP = Sramcr4Fields::ADVP;
    using ADVH = Sramcr4Fields::ADVH;
    using COL = Sramcr4Fields::COL;
  };

  // SRAM Control Register 5
  struct Sramcr5Fields {
    // CE setup time
    using CES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE hold time
    using CEH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address setup time
    using AS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address hold time
    using AH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE low time
    using WEL = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // WE high time
    using WEH = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE low time
    using REL = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // RE high time
    using REH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr5Fields

  struct SRAMCR5 : ftl::mmio::Register<
      0x400D4124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr5Fields::CES,
      Sramcr5Fields::CEH,
      Sramcr5Fields::AS,
      Sramcr5Fields::AH,
      Sramcr5Fields::WEL,
      Sramcr5Fields::WEH,
      Sramcr5Fields::REL,
      Sramcr5Fields::REH> {
    using CES = Sramcr5Fields::CES;
    using CEH = Sramcr5Fields::CEH;
    using AS = Sramcr5Fields::AS;
    using AH = Sramcr5Fields::AH;
    using WEL = Sramcr5Fields::WEL;
    using WEH = Sramcr5Fields::WEH;
    using REL = Sramcr5Fields::REL;
    using REH = Sramcr5Fields::REH;
  };

  // SRAM Control Register 6
  struct Sramcr6Fields {
    // Write Data setup time
    using WDS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data hold time
    using WDH = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Turnaround time
    using TA = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Address to write data hold time
    using AWDH = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Latency count
    using LC = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read time
    using RD = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CE# interval time
    using CEITV = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read hold time
    using RDH = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sramcr6Fields

  struct SRAMCR6 : ftl::mmio::Register<
      0x400D4128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sramcr6Fields::WDS,
      Sramcr6Fields::WDH,
      Sramcr6Fields::TA,
      Sramcr6Fields::AWDH,
      Sramcr6Fields::LC,
      Sramcr6Fields::RD,
      Sramcr6Fields::CEITV,
      Sramcr6Fields::RDH> {
    using WDS = Sramcr6Fields::WDS;
    using WDH = Sramcr6Fields::WDH;
    using TA = Sramcr6Fields::TA;
    using AWDH = Sramcr6Fields::AWDH;
    using LC = Sramcr6Fields::LC;
    using RD = Sramcr6Fields::RD;
    using CEITV = Sramcr6Fields::CEITV;
    using RDH = Sramcr6Fields::RDH;
  };

  // Delay Chain Control Register
  struct DccrFields {
    enum class eSDRAMEN : std::uint32_t {
      // Delay chain is not inserted.
      eno_dly_chain = 0,
      // Delay chain is inserted.
      edly_chain = 1,
    };

    enum class eNOREN : std::uint32_t {
      // Delay chain is not inserted.
      eno_dly_chain = 0,
      // Delay chain is inserted.
      edly_chain = 1,
    };

    enum class eSRAM0EN : std::uint32_t {
      // Delay chain is not inserted.
      eno_dly_chain = 0,
      // Delay chain is inserted.
      edly_chain = 1,
    };

    enum class eSRAMXEN : std::uint32_t {
      // Delay chain is not inserted.
      eno_dly_chain = 0,
      // Delay chain is inserted.
      edly_chain = 1,
    };

    // Delay chain insertion enable for SRAM device.
    using SDRAMEN = ftl::mmio::Field<1, 0, eSDRAMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock delay line delay cell number selection value for SDRAM device.
    using SDRAMVAL = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay chain insertion enable for NOR device.
    using NOREN = ftl::mmio::Field<1, 8, eNOREN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock delay line delay cell number selection value for NOR device.
    using NORVAL = ftl::mmio::Field<5, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay chain insertion enable for SRAM device 0.
    using SRAM0EN = ftl::mmio::Field<1, 16, eSRAM0EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock delay line delay cell number selection value for SRAM device 0.
    using SRAM0VAL = ftl::mmio::Field<5, 17, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay chain insertion enable for SRAM device 1-3.
    using SRAMXEN = ftl::mmio::Field<1, 24, eSRAMXEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock delay line delay cell number selection value for SRAM device 1-3.
    using SRAMXVAL = ftl::mmio::Field<5, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DccrFields

  struct DCCR : ftl::mmio::Register<
      0x400D4150u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DccrFields::SDRAMEN,
      DccrFields::SDRAMVAL,
      ftl::mmio::Reserved<2, 6>,
      DccrFields::NOREN,
      DccrFields::NORVAL,
      ftl::mmio::Reserved<2, 14>,
      DccrFields::SRAM0EN,
      DccrFields::SRAM0VAL,
      ftl::mmio::Reserved<2, 22>,
      DccrFields::SRAMXEN,
      DccrFields::SRAMXVAL,
      ftl::mmio::Reserved<2, 30>> {
    using eSDRAMEN = DccrFields::eSDRAMEN;
    using eNOREN = DccrFields::eNOREN;
    using eSRAM0EN = DccrFields::eSRAM0EN;
    using eSRAMXEN = DccrFields::eSRAMXEN;
    using SDRAMEN = DccrFields::SDRAMEN;
    using SDRAMVAL = DccrFields::SDRAMVAL;
    using NOREN = DccrFields::NOREN;
    using NORVAL = DccrFields::NORVAL;
    using SRAM0EN = DccrFields::SRAM0EN;
    using SRAM0VAL = DccrFields::SRAM0VAL;
    using SRAMXEN = DccrFields::SRAMXEN;
    using SRAMXVAL = DccrFields::SRAMXVAL;
  };

};

}  // namespace regs