#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SEMC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::semc {

// Module Control Register
struct MCR_fields_ {
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
};  // struct MCR_fields_

struct MCR : ftl::mmio::Register<
    0x400D4000u,
    std::uint32_t,
    0x10000002u,
    ftl::mmio::RW,
    MCR_fields_::SWRST,
    MCR_fields_::MDIS,
    MCR_fields_::DQSMD,
    ftl::mmio::Reserved<3, 3>,
    MCR_fields_::WPOL0,
    MCR_fields_::WPOL1,
    ftl::mmio::Reserved<8, 8>,
    MCR_fields_::CTO,
    MCR_fields_::BTO,
    ftl::mmio::Reserved<3, 29>> {
  using eSWRST = MCR_fields_::eSWRST;
  using eMDIS = MCR_fields_::eMDIS;
  using eDQSMD = MCR_fields_::eDQSMD;
  using eWPOL0 = MCR_fields_::eWPOL0;
  using eWPOL1 = MCR_fields_::eWPOL1;
  using eBTO = MCR_fields_::eBTO;
  using SWRST = MCR_fields_::SWRST;
  using MDIS = MCR_fields_::MDIS;
  using DQSMD = MCR_fields_::DQSMD;
  using WPOL0 = MCR_fields_::WPOL0;
  using WPOL1 = MCR_fields_::WPOL1;
  using CTO = MCR_fields_::CTO;
  using BTO = MCR_fields_::BTO;
};

// IO MUX Control Register
struct IOCR_fields_ {
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
};  // struct IOCR_fields_

struct IOCR : ftl::mmio::Register<
    0x400D4004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IOCR_fields_::MUX_A8,
    IOCR_fields_::MUX_CSX0,
    IOCR_fields_::MUX_CSX1,
    IOCR_fields_::MUX_CSX2,
    IOCR_fields_::MUX_CSX3,
    IOCR_fields_::MUX_RDY,
    IOCR_fields_::MUX_CLKX0,
    IOCR_fields_::MUX_CLKX1,
    IOCR_fields_::CLKX0_AO,
    IOCR_fields_::CLKX1_AO,
    ftl::mmio::Reserved<2, 30>> {
  using eMUX_A8 = IOCR_fields_::eMUX_A8;
  using eMUX_CSX0 = IOCR_fields_::eMUX_CSX0;
  using eMUX_CSX1 = IOCR_fields_::eMUX_CSX1;
  using eMUX_CSX2 = IOCR_fields_::eMUX_CSX2;
  using eMUX_CSX3 = IOCR_fields_::eMUX_CSX3;
  using eMUX_RDY = IOCR_fields_::eMUX_RDY;
  using eMUX_CLKX0 = IOCR_fields_::eMUX_CLKX0;
  using eMUX_CLKX1 = IOCR_fields_::eMUX_CLKX1;
  using eCLKX0_AO = IOCR_fields_::eCLKX0_AO;
  using eCLKX1_AO = IOCR_fields_::eCLKX1_AO;
  using MUX_A8 = IOCR_fields_::MUX_A8;
  using MUX_CSX0 = IOCR_fields_::MUX_CSX0;
  using MUX_CSX1 = IOCR_fields_::MUX_CSX1;
  using MUX_CSX2 = IOCR_fields_::MUX_CSX2;
  using MUX_CSX3 = IOCR_fields_::MUX_CSX3;
  using MUX_RDY = IOCR_fields_::MUX_RDY;
  using MUX_CLKX0 = IOCR_fields_::MUX_CLKX0;
  using MUX_CLKX1 = IOCR_fields_::MUX_CLKX1;
  using CLKX0_AO = IOCR_fields_::CLKX0_AO;
  using CLKX1_AO = IOCR_fields_::CLKX1_AO;
};

// Bus (AXI) Master Control Register 0
struct BMCR0_fields_ {
  // Weight of QOS
  using WQOS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Weight of AGE
  using WAGE = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Weight of Slave Hit without read/write switch
  using WSH = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Weight of slave hit with Read/Write Switch
  using WRWS = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BMCR0_fields_

struct BMCR0 : ftl::mmio::Register<
    0x400D4008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BMCR0_fields_::WQOS,
    BMCR0_fields_::WAGE,
    BMCR0_fields_::WSH,
    BMCR0_fields_::WRWS,
    ftl::mmio::Reserved<8, 24>> {
  using WQOS = BMCR0_fields_::WQOS;
  using WAGE = BMCR0_fields_::WAGE;
  using WSH = BMCR0_fields_::WSH;
  using WRWS = BMCR0_fields_::WRWS;
};

// Bus (AXI) Master Control Register 1
struct BMCR1_fields_ {
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
};  // struct BMCR1_fields_

struct BMCR1 : ftl::mmio::Register<
    0x400D400Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BMCR1_fields_::WQOS,
    BMCR1_fields_::WAGE,
    BMCR1_fields_::WPH,
    BMCR1_fields_::WRWS,
    BMCR1_fields_::WBR> {
  using WQOS = BMCR1_fields_::WQOS;
  using WAGE = BMCR1_fields_::WAGE;
  using WPH = BMCR1_fields_::WPH;
  using WRWS = BMCR1_fields_::WRWS;
  using WBR = BMCR1_fields_::WBR;
};

// Base Register n
struct BR_fields_ {
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
};  // struct BR_fields_

template<std::uint32_t Index>
struct BR : ftl::mmio::Register<
    0x400D4010u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BR_fields_::VLD,
    BR_fields_::MS,
    ftl::mmio::Reserved<6, 6>,
    BR_fields_::BA> {
  static_assert(Index < 9u, "BR: Index out of range");
  using eVLD = BR_fields_::eVLD;
  using eMS = BR_fields_::eMS;
  using VLD = BR_fields_::VLD;
  using MS = BR_fields_::MS;
  using BA = BR_fields_::BA;
};

// DLL Control Register
struct DLLCR_fields_ {
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
};  // struct DLLCR_fields_

struct DLLCR : ftl::mmio::Register<
    0x400D4034u,
    std::uint32_t,
    0x00000100u,
    ftl::mmio::RW,
    DLLCR_fields_::DLLEN,
    DLLCR_fields_::DLLRESET,
    ftl::mmio::Reserved<1, 2>,
    DLLCR_fields_::SLVDLYTARGET,
    ftl::mmio::Reserved<1, 7>,
    DLLCR_fields_::OVRDEN,
    DLLCR_fields_::OVRDVAL,
    ftl::mmio::Reserved<17, 15>> {
  using eDLLEN = DLLCR_fields_::eDLLEN;
  using eDLLRESET = DLLCR_fields_::eDLLRESET;
  using eOVRDEN = DLLCR_fields_::eOVRDEN;
  using DLLEN = DLLCR_fields_::DLLEN;
  using DLLRESET = DLLCR_fields_::DLLRESET;
  using SLVDLYTARGET = DLLCR_fields_::SLVDLYTARGET;
  using OVRDEN = DLLCR_fields_::OVRDEN;
  using OVRDVAL = DLLCR_fields_::OVRDVAL;
};

// Interrupt Enable Register
struct INTEN_fields_ {
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
};  // struct INTEN_fields_

struct INTEN : ftl::mmio::Register<
    0x400D4038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INTEN_fields_::IPCMDDONEEN,
    INTEN_fields_::IPCMDERREN,
    INTEN_fields_::AXICMDERREN,
    INTEN_fields_::AXIBUSERREN,
    INTEN_fields_::NDPAGEENDEN,
    INTEN_fields_::NDNOPENDEN,
    ftl::mmio::Reserved<26, 6>> {
  using eIPCMDDONEEN = INTEN_fields_::eIPCMDDONEEN;
  using eIPCMDERREN = INTEN_fields_::eIPCMDERREN;
  using eAXICMDERREN = INTEN_fields_::eAXICMDERREN;
  using eAXIBUSERREN = INTEN_fields_::eAXIBUSERREN;
  using eNDPAGEENDEN = INTEN_fields_::eNDPAGEENDEN;
  using eNDNOPENDEN = INTEN_fields_::eNDNOPENDEN;
  using IPCMDDONEEN = INTEN_fields_::IPCMDDONEEN;
  using IPCMDERREN = INTEN_fields_::IPCMDERREN;
  using AXICMDERREN = INTEN_fields_::AXICMDERREN;
  using AXIBUSERREN = INTEN_fields_::AXIBUSERREN;
  using NDPAGEENDEN = INTEN_fields_::NDPAGEENDEN;
  using NDNOPENDEN = INTEN_fields_::NDNOPENDEN;
};

// Interrupt Register
struct INTR_fields_ {
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
};  // struct INTR_fields_

struct INTR : ftl::mmio::Register<
    0x400D403Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INTR_fields_::IPCMDDONE,
    INTR_fields_::IPCMDERR,
    INTR_fields_::AXICMDERR,
    INTR_fields_::AXIBUSERR,
    INTR_fields_::NDPAGEEND,
    INTR_fields_::NDNOPEND,
    ftl::mmio::Reserved<26, 6>> {
  using eIPCMDDONE = INTR_fields_::eIPCMDDONE;
  using eIPCMDERR = INTR_fields_::eIPCMDERR;
  using eAXICMDERR = INTR_fields_::eAXICMDERR;
  using eAXIBUSERR = INTR_fields_::eAXIBUSERR;
  using eNDPAGEEND = INTR_fields_::eNDPAGEEND;
  using eNDNOPEND = INTR_fields_::eNDNOPEND;
  using IPCMDDONE = INTR_fields_::IPCMDDONE;
  using IPCMDERR = INTR_fields_::IPCMDERR;
  using AXICMDERR = INTR_fields_::AXICMDERR;
  using AXIBUSERR = INTR_fields_::AXIBUSERR;
  using NDPAGEEND = INTR_fields_::NDPAGEEND;
  using NDNOPEND = INTR_fields_::NDNOPEND;
};

// SDRAM Control Register 0
struct SDRAMCR0_fields_ {
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
};  // struct SDRAMCR0_fields_

struct SDRAMCR0 : ftl::mmio::Register<
    0x400D4040u,
    std::uint32_t,
    0x00000C26u,
    ftl::mmio::RW,
    SDRAMCR0_fields_::PS,
    ftl::mmio::Reserved<2, 2>,
    SDRAMCR0_fields_::BL,
    SDRAMCR0_fields_::COL8,
    SDRAMCR0_fields_::COL,
    SDRAMCR0_fields_::CL,
    ftl::mmio::Reserved<2, 12>,
    SDRAMCR0_fields_::BANK2,
    ftl::mmio::Reserved<17, 15>> {
  using ePS = SDRAMCR0_fields_::ePS;
  using eBL = SDRAMCR0_fields_::eBL;
  using eCOL8 = SDRAMCR0_fields_::eCOL8;
  using eCOL = SDRAMCR0_fields_::eCOL;
  using eCL = SDRAMCR0_fields_::eCL;
  using eBANK2 = SDRAMCR0_fields_::eBANK2;
  using PS = SDRAMCR0_fields_::PS;
  using BL = SDRAMCR0_fields_::BL;
  using COL8 = SDRAMCR0_fields_::COL8;
  using COL = SDRAMCR0_fields_::COL;
  using CL = SDRAMCR0_fields_::CL;
  using BANK2 = SDRAMCR0_fields_::BANK2;
};

// SDRAM Control Register 1
struct SDRAMCR1_fields_ {
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
};  // struct SDRAMCR1_fields_

struct SDRAMCR1 : ftl::mmio::Register<
    0x400D4044u,
    std::uint32_t,
    0x00994934u,
    ftl::mmio::RW,
    SDRAMCR1_fields_::PRE2ACT,
    SDRAMCR1_fields_::ACT2RW,
    SDRAMCR1_fields_::RFRC,
    SDRAMCR1_fields_::WRC,
    SDRAMCR1_fields_::CKEOFF,
    SDRAMCR1_fields_::ACT2PRE,
    ftl::mmio::Reserved<8, 24>> {
  using PRE2ACT = SDRAMCR1_fields_::PRE2ACT;
  using ACT2RW = SDRAMCR1_fields_::ACT2RW;
  using RFRC = SDRAMCR1_fields_::RFRC;
  using WRC = SDRAMCR1_fields_::WRC;
  using CKEOFF = SDRAMCR1_fields_::CKEOFF;
  using ACT2PRE = SDRAMCR1_fields_::ACT2PRE;
};

// SDRAM Control Register 2
struct SDRAMCR2_fields_ {
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
};  // struct SDRAMCR2_fields_

struct SDRAMCR2 : ftl::mmio::Register<
    0x400D4048u,
    std::uint32_t,
    0x80000EEEu,
    ftl::mmio::RW,
    SDRAMCR2_fields_::SRRC,
    SDRAMCR2_fields_::REF2REF,
    SDRAMCR2_fields_::ACT2ACT,
    SDRAMCR2_fields_::ITO> {
  using eITO = SDRAMCR2_fields_::eITO;
  using SRRC = SDRAMCR2_fields_::SRRC;
  using REF2REF = SDRAMCR2_fields_::REF2REF;
  using ACT2ACT = SDRAMCR2_fields_::ACT2ACT;
  using ITO = SDRAMCR2_fields_::ITO;
};

// SDRAM Control Register 3
struct SDRAMCR3_fields_ {
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
};  // struct SDRAMCR3_fields_

struct SDRAMCR3 : ftl::mmio::Register<
    0x400D404Cu,
    std::uint32_t,
    0x40808000u,
    ftl::mmio::RW,
    SDRAMCR3_fields_::REN,
    SDRAMCR3_fields_::REBL,
    ftl::mmio::Reserved<4, 4>,
    SDRAMCR3_fields_::PRESCALE,
    SDRAMCR3_fields_::RT,
    SDRAMCR3_fields_::UT> {
  using eREN = SDRAMCR3_fields_::eREN;
  using eREBL = SDRAMCR3_fields_::eREBL;
  using ePRESCALE = SDRAMCR3_fields_::ePRESCALE;
  using eRT = SDRAMCR3_fields_::eRT;
  using eUT = SDRAMCR3_fields_::eUT;
  using REN = SDRAMCR3_fields_::REN;
  using REBL = SDRAMCR3_fields_::REBL;
  using PRESCALE = SDRAMCR3_fields_::PRESCALE;
  using RT = SDRAMCR3_fields_::RT;
  using UT = SDRAMCR3_fields_::UT;
};

// NAND Control Register 0
struct NANDCR0_fields_ {
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
};  // struct NANDCR0_fields_

struct NANDCR0 : ftl::mmio::Register<
    0x400D4050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NANDCR0_fields_::PS,
    NANDCR0_fields_::SYNCEN,
    ftl::mmio::Reserved<2, 2>,
    NANDCR0_fields_::BL,
    NANDCR0_fields_::EDO,
    NANDCR0_fields_::COL,
    ftl::mmio::Reserved<21, 11>> {
  using ePS = NANDCR0_fields_::ePS;
  using eSYNCEN = NANDCR0_fields_::eSYNCEN;
  using eBL = NANDCR0_fields_::eBL;
  using eEDO = NANDCR0_fields_::eEDO;
  using eCOL = NANDCR0_fields_::eCOL;
  using PS = NANDCR0_fields_::PS;
  using SYNCEN = NANDCR0_fields_::SYNCEN;
  using BL = NANDCR0_fields_::BL;
  using EDO = NANDCR0_fields_::EDO;
  using COL = NANDCR0_fields_::COL;
};

// NAND Control Register 1
struct NANDCR1_fields_ {
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
};  // struct NANDCR1_fields_

struct NANDCR1 : ftl::mmio::Register<
    0x400D4054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NANDCR1_fields_::CES,
    NANDCR1_fields_::CEH,
    NANDCR1_fields_::WEL,
    NANDCR1_fields_::WEH,
    NANDCR1_fields_::REL,
    NANDCR1_fields_::REH,
    NANDCR1_fields_::TA,
    NANDCR1_fields_::CEITV> {
  using CES = NANDCR1_fields_::CES;
  using CEH = NANDCR1_fields_::CEH;
  using WEL = NANDCR1_fields_::WEL;
  using WEH = NANDCR1_fields_::WEH;
  using REL = NANDCR1_fields_::REL;
  using REH = NANDCR1_fields_::REH;
  using TA = NANDCR1_fields_::TA;
  using CEITV = NANDCR1_fields_::CEITV;
};

// NAND Control Register 2
struct NANDCR2_fields_ {
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
};  // struct NANDCR2_fields_

struct NANDCR2 : ftl::mmio::Register<
    0x400D4058u,
    std::uint32_t,
    0x00010410u,
    ftl::mmio::RW,
    NANDCR2_fields_::TWHR,
    NANDCR2_fields_::TRHW,
    NANDCR2_fields_::TADL,
    NANDCR2_fields_::TRR,
    NANDCR2_fields_::TWB,
    ftl::mmio::Reserved<2, 30>> {
  using TWHR = NANDCR2_fields_::TWHR;
  using TRHW = NANDCR2_fields_::TRHW;
  using TADL = NANDCR2_fields_::TADL;
  using TRR = NANDCR2_fields_::TRR;
  using TWB = NANDCR2_fields_::TWB;
};

// NAND Control Register 3
struct NANDCR3_fields_ {
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
};  // struct NANDCR3_fields_

struct NANDCR3 : ftl::mmio::Register<
    0x400D405Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NANDCR3_fields_::NDOPT1,
    NANDCR3_fields_::NDOPT2,
    NANDCR3_fields_::NDOPT3,
    NANDCR3_fields_::CLE,
    ftl::mmio::Reserved<12, 4>,
    NANDCR3_fields_::RDS,
    NANDCR3_fields_::RDH,
    NANDCR3_fields_::WDS,
    NANDCR3_fields_::WDH> {
  using NDOPT1 = NANDCR3_fields_::NDOPT1;
  using NDOPT2 = NANDCR3_fields_::NDOPT2;
  using NDOPT3 = NANDCR3_fields_::NDOPT3;
  using CLE = NANDCR3_fields_::CLE;
  using RDS = NANDCR3_fields_::RDS;
  using RDH = NANDCR3_fields_::RDH;
  using WDS = NANDCR3_fields_::WDS;
  using WDH = NANDCR3_fields_::WDH;
};

// NOR Control Register 0
struct NORCR0_fields_ {
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
};  // struct NORCR0_fields_

struct NORCR0 : ftl::mmio::Register<
    0x400D4060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NORCR0_fields_::PS,
    NORCR0_fields_::SYNCEN,
    ftl::mmio::Reserved<2, 2>,
    NORCR0_fields_::BL,
    ftl::mmio::Reserved<1, 7>,
    NORCR0_fields_::AM,
    NORCR0_fields_::ADVP,
    NORCR0_fields_::ADVH,
    NORCR0_fields_::COL,
    ftl::mmio::Reserved<16, 16>> {
  using ePS = NORCR0_fields_::ePS;
  using eSYNCEN = NORCR0_fields_::eSYNCEN;
  using eBL = NORCR0_fields_::eBL;
  using eAM = NORCR0_fields_::eAM;
  using eADVP = NORCR0_fields_::eADVP;
  using eADVH = NORCR0_fields_::eADVH;
  using eCOL = NORCR0_fields_::eCOL;
  using PS = NORCR0_fields_::PS;
  using SYNCEN = NORCR0_fields_::SYNCEN;
  using BL = NORCR0_fields_::BL;
  using AM = NORCR0_fields_::AM;
  using ADVP = NORCR0_fields_::ADVP;
  using ADVH = NORCR0_fields_::ADVH;
  using COL = NORCR0_fields_::COL;
};

// NOR Control Register 1
struct NORCR1_fields_ {
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
};  // struct NORCR1_fields_

struct NORCR1 : ftl::mmio::Register<
    0x400D4064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NORCR1_fields_::CES,
    NORCR1_fields_::CEH,
    NORCR1_fields_::AS,
    NORCR1_fields_::AH,
    NORCR1_fields_::WEL,
    NORCR1_fields_::WEH,
    NORCR1_fields_::REL,
    NORCR1_fields_::REH> {
  using CES = NORCR1_fields_::CES;
  using CEH = NORCR1_fields_::CEH;
  using AS = NORCR1_fields_::AS;
  using AH = NORCR1_fields_::AH;
  using WEL = NORCR1_fields_::WEL;
  using WEH = NORCR1_fields_::WEH;
  using REL = NORCR1_fields_::REL;
  using REH = NORCR1_fields_::REH;
};

// NOR Control Register 2
struct NORCR2_fields_ {
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
};  // struct NORCR2_fields_

struct NORCR2 : ftl::mmio::Register<
    0x400D4068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    NORCR2_fields_::TA,
    NORCR2_fields_::AWDH,
    NORCR2_fields_::LC,
    NORCR2_fields_::RD,
    NORCR2_fields_::CEITV,
    NORCR2_fields_::RDH> {
  using TA = NORCR2_fields_::TA;
  using AWDH = NORCR2_fields_::AWDH;
  using LC = NORCR2_fields_::LC;
  using RD = NORCR2_fields_::RD;
  using CEITV = NORCR2_fields_::CEITV;
  using RDH = NORCR2_fields_::RDH;
};

// NOR Control Register 3
struct NORCR3_fields_ {
  // Address setup time for SYNC read
  using ASSR = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Address hold time for SYNC read
  using AHSR = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NORCR3_fields_

struct NORCR3 : ftl::mmio::Register<
    0x400D406Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NORCR3_fields_::ASSR,
    NORCR3_fields_::AHSR,
    ftl::mmio::Reserved<24, 8>> {
  using ASSR = NORCR3_fields_::ASSR;
  using AHSR = NORCR3_fields_::AHSR;
};

// SRAM Control Register 0
struct SRAMCR0_fields_ {
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
};  // struct SRAMCR0_fields_

struct SRAMCR0 : ftl::mmio::Register<
    0x400D4070u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR0_fields_::PS,
    SRAMCR0_fields_::SYNCEN,
    SRAMCR0_fields_::WAITEN,
    SRAMCR0_fields_::WAITSP,
    SRAMCR0_fields_::BL,
    ftl::mmio::Reserved<1, 7>,
    SRAMCR0_fields_::AM,
    SRAMCR0_fields_::ADVP,
    SRAMCR0_fields_::ADVH,
    SRAMCR0_fields_::COL,
    ftl::mmio::Reserved<16, 16>> {
  using ePS = SRAMCR0_fields_::ePS;
  using eSYNCEN = SRAMCR0_fields_::eSYNCEN;
  using eWAITEN = SRAMCR0_fields_::eWAITEN;
  using eWAITSP = SRAMCR0_fields_::eWAITSP;
  using eBL = SRAMCR0_fields_::eBL;
  using eAM = SRAMCR0_fields_::eAM;
  using eADVP = SRAMCR0_fields_::eADVP;
  using eADVH = SRAMCR0_fields_::eADVH;
  using eCOL = SRAMCR0_fields_::eCOL;
  using PS = SRAMCR0_fields_::PS;
  using SYNCEN = SRAMCR0_fields_::SYNCEN;
  using WAITEN = SRAMCR0_fields_::WAITEN;
  using WAITSP = SRAMCR0_fields_::WAITSP;
  using BL = SRAMCR0_fields_::BL;
  using AM = SRAMCR0_fields_::AM;
  using ADVP = SRAMCR0_fields_::ADVP;
  using ADVH = SRAMCR0_fields_::ADVH;
  using COL = SRAMCR0_fields_::COL;
};

// SRAM Control Register 1
struct SRAMCR1_fields_ {
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
};  // struct SRAMCR1_fields_

struct SRAMCR1 : ftl::mmio::Register<
    0x400D4074u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR1_fields_::CES,
    SRAMCR1_fields_::CEH,
    SRAMCR1_fields_::AS,
    SRAMCR1_fields_::AH,
    SRAMCR1_fields_::WEL,
    SRAMCR1_fields_::WEH,
    SRAMCR1_fields_::REL,
    SRAMCR1_fields_::REH> {
  using CES = SRAMCR1_fields_::CES;
  using CEH = SRAMCR1_fields_::CEH;
  using AS = SRAMCR1_fields_::AS;
  using AH = SRAMCR1_fields_::AH;
  using WEL = SRAMCR1_fields_::WEL;
  using WEH = SRAMCR1_fields_::WEH;
  using REL = SRAMCR1_fields_::REL;
  using REH = SRAMCR1_fields_::REH;
};

// SRAM Control Register 2
struct SRAMCR2_fields_ {
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
};  // struct SRAMCR2_fields_

struct SRAMCR2 : ftl::mmio::Register<
    0x400D4078u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR2_fields_::WDS,
    SRAMCR2_fields_::WDH,
    SRAMCR2_fields_::TA,
    SRAMCR2_fields_::AWDH,
    SRAMCR2_fields_::LC,
    SRAMCR2_fields_::RD,
    SRAMCR2_fields_::CEITV,
    SRAMCR2_fields_::RDH> {
  using WDS = SRAMCR2_fields_::WDS;
  using WDH = SRAMCR2_fields_::WDH;
  using TA = SRAMCR2_fields_::TA;
  using AWDH = SRAMCR2_fields_::AWDH;
  using LC = SRAMCR2_fields_::LC;
  using RD = SRAMCR2_fields_::RD;
  using CEITV = SRAMCR2_fields_::CEITV;
  using RDH = SRAMCR2_fields_::RDH;
};

// SRAM Control Register 3
struct SRAMCR3_fields_ {
};  // struct SRAMCR3_fields_

struct SRAMCR3 : ftl::mmio::Register<
    0x400D407Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<32, 0>> {
};

// DBI-B Control Register 0
struct DBICR0_fields_ {
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
};  // struct DBICR0_fields_

struct DBICR0 : ftl::mmio::Register<
    0x400D4080u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DBICR0_fields_::PS,
    ftl::mmio::Reserved<3, 1>,
    DBICR0_fields_::BL,
    ftl::mmio::Reserved<5, 7>,
    DBICR0_fields_::COL,
    ftl::mmio::Reserved<16, 16>> {
  using ePS = DBICR0_fields_::ePS;
  using eBL = DBICR0_fields_::eBL;
  using eCOL = DBICR0_fields_::eCOL;
  using PS = DBICR0_fields_::PS;
  using BL = DBICR0_fields_::BL;
  using COL = DBICR0_fields_::COL;
};

// DBI-B Control Register 1
struct DBICR1_fields_ {
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
};  // struct DBICR1_fields_

struct DBICR1 : ftl::mmio::Register<
    0x400D4084u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DBICR1_fields_::CES,
    DBICR1_fields_::CEH,
    DBICR1_fields_::WEL,
    DBICR1_fields_::WEH,
    DBICR1_fields_::REL,
    ftl::mmio::Reserved<1, 23>,
    DBICR1_fields_::REH,
    ftl::mmio::Reserved<1, 31>> {
  using CES = DBICR1_fields_::CES;
  using CEH = DBICR1_fields_::CEH;
  using WEL = DBICR1_fields_::WEL;
  using WEH = DBICR1_fields_::WEH;
  using REL = DBICR1_fields_::REL;
  using REH = DBICR1_fields_::REH;
};

// DBI-B Control Register 2
struct DBICR2_fields_ {
  // CSX interval time
  using CEITV = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DBICR2_fields_

struct DBICR2 : ftl::mmio::Register<
    0x400D4088u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DBICR2_fields_::CEITV,
    ftl::mmio::Reserved<28, 4>> {
  using CEITV = DBICR2_fields_::CEITV;
};

// IP Command Control Register 0
struct IPCR0_fields_ {
  // Slave address
  using SA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct IPCR0_fields_

struct IPCR0 : ftl::mmio::Register<
    0x400D4090u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IPCR0_fields_::SA> {
  using SA = IPCR0_fields_::SA;
};

// IP Command Control Register 1
struct IPCR1_fields_ {
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
};  // struct IPCR1_fields_

struct IPCR1 : ftl::mmio::Register<
    0x400D4094u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IPCR1_fields_::DATSZ,
    ftl::mmio::Reserved<5, 3>,
    IPCR1_fields_::NAND_EXT_ADDR,
    ftl::mmio::Reserved<16, 16>> {
  using eDATSZ = IPCR1_fields_::eDATSZ;
  using DATSZ = IPCR1_fields_::DATSZ;
  using NAND_EXT_ADDR = IPCR1_fields_::NAND_EXT_ADDR;
};

// IP Command Control Register 2
struct IPCR2_fields_ {
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
};  // struct IPCR2_fields_

struct IPCR2 : ftl::mmio::Register<
    0x400D4098u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IPCR2_fields_::BM0,
    IPCR2_fields_::BM1,
    IPCR2_fields_::BM2,
    IPCR2_fields_::BM3,
    ftl::mmio::Reserved<28, 4>> {
  using eBM0 = IPCR2_fields_::eBM0;
  using eBM1 = IPCR2_fields_::eBM1;
  using eBM2 = IPCR2_fields_::eBM2;
  using eBM3 = IPCR2_fields_::eBM3;
  using BM0 = IPCR2_fields_::BM0;
  using BM1 = IPCR2_fields_::BM1;
  using BM2 = IPCR2_fields_::BM2;
  using BM3 = IPCR2_fields_::BM3;
};

// IP Command Register
struct IPCMD_fields_ {
  // SDRAM Commands: 0x8: Read 0x9: Write 0xA: Mode Register Set 0xB: Active 0xC: Auto Refresh 0xD: Self Refresh 0xE: Precharge 0xF: Precharge All Others: Reserved Self Refresh is sent to all SDRAM devices because they share the same SEMC_CLK pin
  using CMD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field should be written with 0xA55A when trigging an IP command for all device types
  using KEY = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct IPCMD_fields_

struct IPCMD : ftl::mmio::Register<
    0x400D409Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IPCMD_fields_::CMD,
    IPCMD_fields_::KEY> {
  using CMD = IPCMD_fields_::CMD;
  using KEY = IPCMD_fields_::KEY;
};

// TX DATA Register
struct IPTXDAT_fields_ {
  // Data value to use for an IP write command
  using DAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct IPTXDAT_fields_

struct IPTXDAT : ftl::mmio::Register<
    0x400D40A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    IPTXDAT_fields_::DAT> {
  using DAT = IPTXDAT_fields_::DAT;
};

// RX DATA Register
struct IPRXDAT_fields_ {
  // Data returned by device for an IP read command.
  using DAT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct IPRXDAT_fields_

struct IPRXDAT : ftl::mmio::Register<
    0x400D40B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    IPRXDAT_fields_::DAT> {
  using DAT = IPRXDAT_fields_::DAT;
};

// Status Register 0
struct STS0_fields_ {
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
};  // struct STS0_fields_

struct STS0 : ftl::mmio::Register<
    0x400D40C0u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RO,
    STS0_fields_::IDLE,
    STS0_fields_::NARDY,
    ftl::mmio::Reserved<30, 2>> {
  using eNARDY = STS0_fields_::eNARDY;
  using IDLE = STS0_fields_::IDLE;
  using NARDY = STS0_fields_::NARDY;
};

// Status Register 1
struct STS1_fields_ {
};  // struct STS1_fields_

struct STS1 : ftl::mmio::Register<
    0x400D40C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 2
struct STS2_fields_ {
  enum class eNDWRPEND : std::uint32_t {
    // No pending
    eno_pending = 0,
    // Pending
    epending = 1,
  };

  // This field indicating whether there is pending AXI command (write) to NAND device.
  using NDWRPEND = ftl::mmio::Field<1, 3, eNDWRPEND, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STS2_fields_

struct STS2 : ftl::mmio::Register<
    0x400D40C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<3, 0>,
    STS2_fields_::NDWRPEND,
    ftl::mmio::Reserved<28, 4>> {
  using eNDWRPEND = STS2_fields_::eNDWRPEND;
  using NDWRPEND = STS2_fields_::NDWRPEND;
};

// Status Register 3
struct STS3_fields_ {
};  // struct STS3_fields_

struct STS3 : ftl::mmio::Register<
    0x400D40CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 4
struct STS4_fields_ {
};  // struct STS4_fields_

struct STS4 : ftl::mmio::Register<
    0x400D40D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 5
struct STS5_fields_ {
};  // struct STS5_fields_

struct STS5 : ftl::mmio::Register<
    0x400D40D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 6
struct STS6_fields_ {
};  // struct STS6_fields_

struct STS6 : ftl::mmio::Register<
    0x400D40D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 7
struct STS7_fields_ {
};  // struct STS7_fields_

struct STS7 : ftl::mmio::Register<
    0x400D40DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 8
struct STS8_fields_ {
};  // struct STS8_fields_

struct STS8 : ftl::mmio::Register<
    0x400D40E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 9
struct STS9_fields_ {
};  // struct STS9_fields_

struct STS9 : ftl::mmio::Register<
    0x400D40E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 10
struct STS10_fields_ {
};  // struct STS10_fields_

struct STS10 : ftl::mmio::Register<
    0x400D40E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 11
struct STS11_fields_ {
};  // struct STS11_fields_

struct STS11 : ftl::mmio::Register<
    0x400D40ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 12
struct STS12_fields_ {
  // This field indicating the last write address (AXI command) to NAND device (without base address in SEMC_BR4).
  using NDADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STS12_fields_

struct STS12 : ftl::mmio::Register<
    0x400D40F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STS12_fields_::NDADDR> {
  using NDADDR = STS12_fields_::NDADDR;
};

// Status Register 13
struct STS13_fields_ {
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
};  // struct STS13_fields_

struct STS13 : ftl::mmio::Register<
    0x400D40F4u,
    std::uint32_t,
    0x00000100u,
    ftl::mmio::RO,
    STS13_fields_::SLVLOCK,
    STS13_fields_::REFLOCK,
    STS13_fields_::SLVSEL,
    STS13_fields_::REFSEL,
    ftl::mmio::Reserved<18, 14>> {
  using eSLVLOCK = STS13_fields_::eSLVLOCK;
  using eREFLOCK = STS13_fields_::eREFLOCK;
  using SLVLOCK = STS13_fields_::SLVLOCK;
  using REFLOCK = STS13_fields_::REFLOCK;
  using SLVSEL = STS13_fields_::SLVSEL;
  using REFSEL = STS13_fields_::REFSEL;
};

// Status Register 14
struct STS14_fields_ {
};  // struct STS14_fields_

struct STS14 : ftl::mmio::Register<
    0x400D40F8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Status Register 15
struct STS15_fields_ {
};  // struct STS15_fields_

struct STS15 : ftl::mmio::Register<
    0x400D40FCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<32, 0>> {
};

// Base Register 9
struct BR9_fields_ {
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
};  // struct BR9_fields_

struct BR9 : ftl::mmio::Register<
    0x400D4100u,
    std::uint32_t,
    0xA0000018u,
    ftl::mmio::RW,
    BR9_fields_::VLD,
    BR9_fields_::MS,
    ftl::mmio::Reserved<6, 6>,
    BR9_fields_::BA> {
  using eVLD = BR9_fields_::eVLD;
  using eMS = BR9_fields_::eMS;
  using VLD = BR9_fields_::VLD;
  using MS = BR9_fields_::MS;
  using BA = BR9_fields_::BA;
};

// Base Register 10
struct BR10_fields_ {
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
};  // struct BR10_fields_

struct BR10 : ftl::mmio::Register<
    0x400D4104u,
    std::uint32_t,
    0xA4000018u,
    ftl::mmio::RW,
    BR10_fields_::VLD,
    BR10_fields_::MS,
    ftl::mmio::Reserved<6, 6>,
    BR10_fields_::BA> {
  using eVLD = BR10_fields_::eVLD;
  using eMS = BR10_fields_::eMS;
  using VLD = BR10_fields_::VLD;
  using MS = BR10_fields_::MS;
  using BA = BR10_fields_::BA;
};

// Base Register 11
struct BR11_fields_ {
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
};  // struct BR11_fields_

struct BR11 : ftl::mmio::Register<
    0x400D4108u,
    std::uint32_t,
    0xA8000018u,
    ftl::mmio::RW,
    BR11_fields_::VLD,
    BR11_fields_::MS,
    ftl::mmio::Reserved<6, 6>,
    BR11_fields_::BA> {
  using eVLD = BR11_fields_::eVLD;
  using eMS = BR11_fields_::eMS;
  using VLD = BR11_fields_::VLD;
  using MS = BR11_fields_::MS;
  using BA = BR11_fields_::BA;
};

// SRAM Control Register 4
struct SRAMCR4_fields_ {
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
};  // struct SRAMCR4_fields_

struct SRAMCR4 : ftl::mmio::Register<
    0x400D4120u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR4_fields_::PS,
    SRAMCR4_fields_::SYNCEN,
    SRAMCR4_fields_::WAITEN,
    SRAMCR4_fields_::WAITSP,
    SRAMCR4_fields_::BL,
    ftl::mmio::Reserved<1, 7>,
    SRAMCR4_fields_::AM,
    SRAMCR4_fields_::ADVP,
    SRAMCR4_fields_::ADVH,
    SRAMCR4_fields_::COL,
    ftl::mmio::Reserved<16, 16>> {
  using ePS = SRAMCR4_fields_::ePS;
  using eSYNCEN = SRAMCR4_fields_::eSYNCEN;
  using eWAITEN = SRAMCR4_fields_::eWAITEN;
  using eWAITSP = SRAMCR4_fields_::eWAITSP;
  using eBL = SRAMCR4_fields_::eBL;
  using eAM = SRAMCR4_fields_::eAM;
  using eADVP = SRAMCR4_fields_::eADVP;
  using eADVH = SRAMCR4_fields_::eADVH;
  using eCOL = SRAMCR4_fields_::eCOL;
  using PS = SRAMCR4_fields_::PS;
  using SYNCEN = SRAMCR4_fields_::SYNCEN;
  using WAITEN = SRAMCR4_fields_::WAITEN;
  using WAITSP = SRAMCR4_fields_::WAITSP;
  using BL = SRAMCR4_fields_::BL;
  using AM = SRAMCR4_fields_::AM;
  using ADVP = SRAMCR4_fields_::ADVP;
  using ADVH = SRAMCR4_fields_::ADVH;
  using COL = SRAMCR4_fields_::COL;
};

// SRAM Control Register 5
struct SRAMCR5_fields_ {
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
};  // struct SRAMCR5_fields_

struct SRAMCR5 : ftl::mmio::Register<
    0x400D4124u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR5_fields_::CES,
    SRAMCR5_fields_::CEH,
    SRAMCR5_fields_::AS,
    SRAMCR5_fields_::AH,
    SRAMCR5_fields_::WEL,
    SRAMCR5_fields_::WEH,
    SRAMCR5_fields_::REL,
    SRAMCR5_fields_::REH> {
  using CES = SRAMCR5_fields_::CES;
  using CEH = SRAMCR5_fields_::CEH;
  using AS = SRAMCR5_fields_::AS;
  using AH = SRAMCR5_fields_::AH;
  using WEL = SRAMCR5_fields_::WEL;
  using WEH = SRAMCR5_fields_::WEH;
  using REL = SRAMCR5_fields_::REL;
  using REH = SRAMCR5_fields_::REH;
};

// SRAM Control Register 6
struct SRAMCR6_fields_ {
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
};  // struct SRAMCR6_fields_

struct SRAMCR6 : ftl::mmio::Register<
    0x400D4128u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAMCR6_fields_::WDS,
    SRAMCR6_fields_::WDH,
    SRAMCR6_fields_::TA,
    SRAMCR6_fields_::AWDH,
    SRAMCR6_fields_::LC,
    SRAMCR6_fields_::RD,
    SRAMCR6_fields_::CEITV,
    SRAMCR6_fields_::RDH> {
  using WDS = SRAMCR6_fields_::WDS;
  using WDH = SRAMCR6_fields_::WDH;
  using TA = SRAMCR6_fields_::TA;
  using AWDH = SRAMCR6_fields_::AWDH;
  using LC = SRAMCR6_fields_::LC;
  using RD = SRAMCR6_fields_::RD;
  using CEITV = SRAMCR6_fields_::CEITV;
  using RDH = SRAMCR6_fields_::RDH;
};

// Delay Chain Control Register
struct DCCR_fields_ {
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
};  // struct DCCR_fields_

struct DCCR : ftl::mmio::Register<
    0x400D4150u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DCCR_fields_::SDRAMEN,
    DCCR_fields_::SDRAMVAL,
    ftl::mmio::Reserved<2, 6>,
    DCCR_fields_::NOREN,
    DCCR_fields_::NORVAL,
    ftl::mmio::Reserved<2, 14>,
    DCCR_fields_::SRAM0EN,
    DCCR_fields_::SRAM0VAL,
    ftl::mmio::Reserved<2, 22>,
    DCCR_fields_::SRAMXEN,
    DCCR_fields_::SRAMXVAL,
    ftl::mmio::Reserved<2, 30>> {
  using eSDRAMEN = DCCR_fields_::eSDRAMEN;
  using eNOREN = DCCR_fields_::eNOREN;
  using eSRAM0EN = DCCR_fields_::eSRAM0EN;
  using eSRAMXEN = DCCR_fields_::eSRAMXEN;
  using SDRAMEN = DCCR_fields_::SDRAMEN;
  using SDRAMVAL = DCCR_fields_::SDRAMVAL;
  using NOREN = DCCR_fields_::NOREN;
  using NORVAL = DCCR_fields_::NORVAL;
  using SRAM0EN = DCCR_fields_::SRAM0EN;
  using SRAM0VAL = DCCR_fields_::SRAM0VAL;
  using SRAMXEN = DCCR_fields_::SRAMXEN;
  using SRAMXVAL = DCCR_fields_::SRAMXVAL;
};

}  // namespace regs::semc