#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSEMC {


// Module Control Register
//
union MCR {
  
  enum class eSWRST : uint32_t {
    eno_reset = 0, // No reset
    ereset = 1, // Reset
  };
  
  enum class eMDIS : uint32_t {
    eenable = 0, // Module enabled
    edisable = 1, // Module disabled
  };
  
  enum class eDQSMD : uint32_t {
    einternal = 0, // Dummy read strobe loopbacked internally
    edqs_pad = 1, // Dummy read strobe loopbacked from DQS pad
  };
  
  enum class eWPOL0 : uint32_t {
    eunchanged = 0, // WAIT/RDY polarity is not changed.
    einverted = 1, // WAIT/RDY polarity is inverted.
  };
  
  enum class eWPOL1 : uint32_t {
    eunchanged = 0, // R/B# polarity is not changed.
    einverted = 1, // R/B# polarity is inverted.
  };
  
  enum class eBTO : uint32_t {
    ebto_0 = 0, // 255*1
    ebto_1 = 1, // 255*2
    ebto_1f = 31, // 255*2^31
  };
  
  // Bit field definition.
  struct {
    eSWRST SWRST : 1;
    eMDIS MDIS : 1;
    eDQSMD DQSMD : 1;
    uint32_t _reserved_0 : 3;
    eWPOL0 WPOL0 : 1;
    eWPOL1 WPOL1 : 1;
    uint32_t _reserved_1 : 8;
    uint32_t CTO : 8;
    eBTO BTO : 5;
    uint32_t _reserved_2 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCR() = delete;
  inline void Reset() volatile { this->value = 0x10000002; }
  static inline volatile MCR &Instance() { return *reinterpret_cast<volatile MCR*>(0x400D4000); }
};

// IO MUX Control Register
//
union IOCR {
  
  enum class eMUX_A8 : uint32_t {
    esdram8_norsram24_03_0 = 0, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_03_1 = 1, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_03_2 = 2, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_03_3 = 3, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    enand_ceb = 4, // NAND CE#
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    esdram8_norsram24_bf_11 = 11, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_bf_12 = 12, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_bf_13 = 13, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_bf_14 = 14, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    esdram8_norsram24_bf_15 = 15, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
  };
  
  enum class eMUX_CSX0 : uint32_t {
    enorsram24_03 = 0, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    esdram_cs1 = 1, // SDRAM CS1
    esdram_cs2 = 2, // SDRAM CS2
    esdram_cs3 = 3, // SDRAM CS3
    enand_ceb = 4, // NAND CE#
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    enorsram24_bf_11 = 11, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    enorsram24_bf_12 = 12, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    enorsram24_bf_13 = 13, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    enorsram24_bf_14 = 14, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    enorsram24_bf_15 = 15, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
  };
  
  enum class eMUX_CSX1 : uint32_t {
    enorsram25_0 = 0, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    esdram_cs1 = 1, // SDRAM CS1
    esdram_cs2 = 2, // SDRAM CS2
    esdram_cs3 = 3, // SDRAM CS3
    enand_ceb = 4, // NAND CE#
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    enorsram25_bf_11 = 11, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    enorsram25_bf_12 = 12, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    enorsram25_bf_13 = 13, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    enorsram25_bf_14 = 14, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    enorsram25_bf_15 = 15, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
  };
  
  enum class eMUX_CSX2 : uint32_t {
    enorsram26_0 = 0, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    esdram_cs1 = 1, // SDRAM CS1
    esdram_cs2 = 2, // SDRAM CS2
    esdram_cs3 = 3, // SDRAM CS3
    enand_ceb = 4, // NAND CE#
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    enorsram26_bf_11 = 11, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    enorsram26_bf_12 = 12, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    enorsram26_bf_13 = 13, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    enorsram26_bf_14 = 14, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    enorsram26_bf_15 = 15, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
  };
  
  enum class eMUX_CSX3 : uint32_t {
    enorsram27_0 = 0, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    esdram_cs1 = 1, // SDRAM CS1
    esdram_cs2 = 2, // SDRAM CS2
    esdram_cs3 = 3, // SDRAM CS3
    enand_ceb = 4, // NAND CE#
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    enorsram27_bf_11 = 11, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    enorsram27_bf_12 = 12, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    enorsram27_bf_13 = 13, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    enorsram27_bf_14 = 14, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    enorsram27_bf_15 = 15, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
  };
  
  enum class eMUX_RDY : uint32_t {
    enand_rbb = 0, // NAND R/B# input
    esdram_cs1 = 1, // SDRAM CS1
    esdram_cs2 = 2, // SDRAM CS2
    esdram_cs3 = 3, // SDRAM CS3
    enorsram27_4 = 4, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    enor_ceb = 5, // NOR CE#
    esram_ceb0 = 6, // SRAM CE# 0
    edbi_csx = 7, // DBI CSX
    esram_ceb1 = 8, // SRAM CE# 1
    esram_ceb2 = 9, // SRAM CE# 2
    esram_ceb3 = 10, // SRAM CE# 3
    enorsram27_bf_11 = 11, // NOR/SRAM Address bit 27 in Non-ADMUX mode
    enorsram27_bf_12 = 12, // NOR/SRAM Address bit 27 in Non-ADMUX mode
    enorsram27_bf_13 = 13, // NOR/SRAM Address bit 27 in Non-ADMUX mode
    enorsram27_bf_14 = 14, // NOR/SRAM Address bit 27 in Non-ADMUX mode
    enorsram27_bf_15 = 15, // NOR/SRAM Address bit 27 in Non-ADMUX mode
  };
  
  enum class eMUX_CLKX0 : uint32_t {
    ekeeplow = 0, // Keep low
    enor_clk = 1, // NOR clock
    esram_clk = 2, // SRAM clock
    enorsram_clk = 3, // NOR and SRAM clock, suitable for Multi-Chip Product package
  };
  
  enum class eMUX_CLKX1 : uint32_t {
    ekeeplow = 0, // Keep low
    enor_clk = 1, // NOR clock
    esram_clk = 2, // SRAM clock
    enor_sram_clk = 3, // NOR and SRAM clock, suitable for Multi-Chip Product package
  };
  
  enum class eCLKX0_AO : uint32_t {
    emux_clkx0_ctl = 0, // SEMC_CLKX0 is controlled by MUX_CLKX0
    ealways_on = 1, // SEMC_CLKX0 is always on
  };
  
  enum class eCLKX1_AO : uint32_t {
    emux_clkx1_ctl = 0, // SEMC_CLKX1 is controlled by MUX_CLKX1
    ealways_on = 1, // SEMC_CLKX1 is always on
  };
  
  // Bit field definition.
  struct {
    eMUX_A8 MUX_A8 : 4;
    eMUX_CSX0 MUX_CSX0 : 4;
    eMUX_CSX1 MUX_CSX1 : 4;
    eMUX_CSX2 MUX_CSX2 : 4;
    eMUX_CSX3 MUX_CSX3 : 4;
    eMUX_RDY MUX_RDY : 4;
    eMUX_CLKX0 MUX_CLKX0 : 2;
    eMUX_CLKX1 MUX_CLKX1 : 2;
    eCLKX0_AO CLKX0_AO : 1;
    eCLKX1_AO CLKX1_AO : 1;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IOCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IOCR &Instance() { return *reinterpret_cast<volatile IOCR*>(0x400D4004); }
};

// Bus (AXI) Master Control Register 0
//
union BMCR0 {
  
  // Bit field definition.
  struct {
    uint32_t WQOS : 4;
    uint32_t WAGE : 4;
    uint32_t WSH : 8;
    uint32_t WRWS : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BMCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BMCR0 &Instance() { return *reinterpret_cast<volatile BMCR0*>(0x400D4008); }
};

// Bus (AXI) Master Control Register 1
//
union BMCR1 {
  
  // Bit field definition.
  struct {
    uint32_t WQOS : 4;
    uint32_t WAGE : 4;
    uint32_t WPH : 8;
    uint32_t WRWS : 8;
    uint32_t WBR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BMCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BMCR1 &Instance() { return *reinterpret_cast<volatile BMCR1*>(0x400D400C); }
};

// Base Register n
//
union BR[0] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[0] &Instance() { return *reinterpret_cast<volatile BR[0]*>(0x400D4010); }
};
// Base Register n
//
union BR[1] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[1] &Instance() { return *reinterpret_cast<volatile BR[1]*>(0x400D4014); }
};
// Base Register n
//
union BR[2] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[2] &Instance() { return *reinterpret_cast<volatile BR[2]*>(0x400D4018); }
};
// Base Register n
//
union BR[3] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[3] &Instance() { return *reinterpret_cast<volatile BR[3]*>(0x400D401C); }
};
// Base Register n
//
union BR[4] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[4] &Instance() { return *reinterpret_cast<volatile BR[4]*>(0x400D4020); }
};
// Base Register n
//
union BR[5] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[5] &Instance() { return *reinterpret_cast<volatile BR[5]*>(0x400D4024); }
};
// Base Register n
//
union BR[6] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[6] &Instance() { return *reinterpret_cast<volatile BR[6]*>(0x400D4028); }
};
// Base Register n
//
union BR[7] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[7] &Instance() { return *reinterpret_cast<volatile BR[7]*>(0x400D402C); }
};
// Base Register n
//
union BR[8] {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[8] &Instance() { return *reinterpret_cast<volatile BR[8]*>(0x400D4030); }
};

// DLL Control Register
//
union DLLCR {
  
  enum class eDLLEN : uint32_t {
    ecal_disable = 0, // DLL calibration is disabled.
    ecal_enable = 1, // DLL calibration is enabled.
  };
  
  enum class eDLLRESET : uint32_t {
    eno_reset = 0, // DLL is not reset.
    ereset = 1, // DLL is reset.
  };
  
  enum class eOVRDEN : uint32_t {
    eno_override = 0, // The delay cell number is not overridden.
    eoverride = 1, // The delay cell number is overridden.
  };
  
  // Bit field definition.
  struct {
    eDLLEN DLLEN : 1;
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    eOVRDEN OVRDEN : 1;
    uint32_t OVRDVAL : 6;
    uint32_t _reserved_2 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DLLCR() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile DLLCR &Instance() { return *reinterpret_cast<volatile DLLCR*>(0x400D4034); }
};

// Interrupt Enable Register
//
union INTEN {
  
  enum class eIPCMDDONEEN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  enum class eIPCMDERREN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  enum class eAXICMDERREN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  enum class eAXIBUSERREN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  enum class eNDPAGEENDEN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  enum class eNDNOPENDEN : uint32_t {
    einterrupt_disable = 0, // Interrupt is disabled
    einterrupt_enable = 1, // Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    eIPCMDDONEEN IPCMDDONEEN : 1;
    eIPCMDERREN IPCMDERREN : 1;
    eAXICMDERREN AXICMDERREN : 1;
    eAXIBUSERREN AXIBUSERREN : 1;
    eNDPAGEENDEN NDPAGEENDEN : 1;
    eNDNOPENDEN NDNOPENDEN : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTEN &Instance() { return *reinterpret_cast<volatile INTEN*>(0x400D4038); }
};

// Interrupt Register
//
union INTR {
  
  enum class eIPCMDDONE : uint32_t {
    enot_done = 0, // IP command is not done.
    edone = 1, // IP command is done.
  };
  
  enum class eIPCMDERR : uint32_t {
    eno_error = 0, // No IP command error.
    eerror = 1, // IP command error occurs.
  };
  
  enum class eAXICMDERR : uint32_t {
    eno_error = 0, // No AXI command error.
    eerror = 1, // AXI command error occurs.
  };
  
  enum class eAXIBUSERR : uint32_t {
    eno_error = 0, // No AXI bus error.
    eerror = 1, // AXI bus error occurs.
  };
  
  enum class eNDPAGEEND : uint32_t {
    eno_write = 0, // The last address of main space in the NAND is not written by AXI command.
    ewrite = 1, // The last address of main space in the NAND is written by AXI command.
  };
  
  enum class eNDNOPEND : uint32_t {
    eno_write = 0, // At least one NAND AXI write transaction is pending or no NAND write transaction is sent to the queue.
    ewrite = 1, // All NAND AXI write pending transactions are finished.
  };
  
  // Bit field definition.
  struct {
    eIPCMDDONE IPCMDDONE : 1;
    eIPCMDERR IPCMDERR : 1;
    eAXICMDERR AXICMDERR : 1;
    eAXIBUSERR AXIBUSERR : 1;
    eNDPAGEEND NDPAGEEND : 1;
    eNDNOPEND NDNOPEND : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTR &Instance() { return *reinterpret_cast<volatile INTR*>(0x400D403C); }
};

// SDRAM Control Register 0
//
union SDRAMCR0 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
    eps_32bit = 2, // 32bit
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8_3 = 3, // 8
    eburst8_4 = 4, // 8
    eburst8_5 = 5, // 8
    eburst8_6 = 6, // 8
    eburst8_7 = 7, // 8
  };
  
  enum class eCOL8 : uint32_t {
    ecolfield = 0, // Column address bit number is decided by COL field.
    ebit8 = 1, // Column address bit number is 8. COL field is ignored.
  };
  
  enum class eCOL : uint32_t {
    ebit12 = 0, // 12
    ebit11 = 1, // 11
    ebit10 = 2, // 10
    ebit9 = 3, // 9
  };
  
  enum class eCL : uint32_t {
    ecl1_0 = 0, // 1
    ecl1_1 = 1, // 1
    ecl2 = 2, // 2
    ecl3 = 3, // 3
  };
  
  enum class eBANK2 : uint32_t {
    ebank4 = 0, // SDRAM device has 4 banks.
    ebank2 = 1, // SDRAM device has 2 banks.
  };
  
  // Bit field definition.
  struct {
    ePS PS : 2;
    uint32_t _reserved_0 : 2;
    eBL BL : 3;
    eCOL8 COL8 : 1;
    eCOL COL : 2;
    eCL CL : 2;
    uint32_t _reserved_1 : 2;
    eBANK2 BANK2 : 1;
    uint32_t _reserved_2 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000C26; }
  static inline volatile SDRAMCR0 &Instance() { return *reinterpret_cast<volatile SDRAMCR0*>(0x400D4040); }
};

// SDRAM Control Register 1
//
union SDRAMCR1 {
  
  // Bit field definition.
  struct {
    uint32_t PRE2ACT : 4;
    uint32_t ACT2RW : 4;
    uint32_t RFRC : 5;
    uint32_t WRC : 3;
    uint32_t CKEOFF : 4;
    uint32_t ACT2PRE : 4;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR1() = delete;
  inline void Reset() volatile { this->value = 0x00994934; }
  static inline volatile SDRAMCR1 &Instance() { return *reinterpret_cast<volatile SDRAMCR1*>(0x400D4044); }
};

// SDRAM Control Register 2
//
union SDRAMCR2 {
  
  enum class eITO : uint32_t {
    eprescalex256 = 0, // IDLE timeout period is 256*Prescale period.
    eprescalexito_1 = 1, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_2 = 2, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_3 = 3, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_4 = 4, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_5 = 5, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_6 = 6, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_7 = 7, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_8 = 8, // IDLE timeout period is ITO*Prescale period.
    eprescalexito_9 = 9, // IDLE timeout period is ITO*Prescale period.
  };
  
  // Bit field definition.
  struct {
    uint32_t SRRC : 8;
    uint32_t REF2REF : 8;
    uint32_t ACT2ACT : 8;
    eITO ITO : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR2() = delete;
  inline void Reset() volatile { this->value = 0x80000EEE; }
  static inline volatile SDRAMCR2 &Instance() { return *reinterpret_cast<volatile SDRAMCR2*>(0x400D4048); }
};

// SDRAM Control Register 3
//
union SDRAMCR3 {
  
  enum class eREN : uint32_t {
    eno_auto_refresh = 0, // The SEMC does not send AUTO REFRESH command automatically
    eauto_refresh = 1, // The SEMC sends AUTO REFRESH command automatically
  };
  
  enum class eREBL : uint32_t {
    erefresh_burst1 = 0, // 1
    erefresh_burst2 = 1, // 2
    erefresh_burst3 = 2, // 3
    erefresh_burst4 = 3, // 4
    erefresh_burst5 = 4, // 5
    erefresh_burst6 = 5, // 6
    erefresh_burst7 = 6, // 7
    erefresh_burst8 = 7, // 8
  };
  
  enum class ePRESCALE : uint32_t {
    eprescale_256x16plus1 = 0, // (256*16+1) clock cycles
    eprescale_16plus1_1 = 1, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_2 = 2, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_3 = 3, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_4 = 4, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_5 = 5, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_6 = 6, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_7 = 7, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_8 = 8, // (PRESCALE*16+1) clock cycles
    eprescale_16plus1_9 = 9, // (PRESCALE*16+1) clock cycles
  };
  
  enum class eRT : uint32_t {
    ert_256plus1xprescale = 0, // (256+1)*(Prescaler period)
    ert_rtplus1xprescale_1 = 1, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_2 = 2, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_3 = 3, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_4 = 4, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_5 = 5, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_6 = 6, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_7 = 7, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_8 = 8, // (RT+1)*(Prescaler period)
    ert_rtplus1xprescale_9 = 9, // (RT+1)*(Prescaler period)
  };
  
  enum class eUT : uint32_t {
    eprescalex256 = 0, // 256*(Prescaler period)
    eprescalexut_1 = 1, // UT*(Prescaler period)
    eprescalexut_2 = 2, // UT*(Prescaler period)
    eprescalexut_3 = 3, // UT*(Prescaler period)
    eprescalexut_4 = 4, // UT*(Prescaler period)
    eprescalexut_5 = 5, // UT*(Prescaler period)
    eprescalexut_6 = 6, // UT*(Prescaler period)
    eprescalexut_7 = 7, // UT*(Prescaler period)
    eprescalexut_8 = 8, // UT*(Prescaler period)
    eprescalexut_9 = 9, // UT*(Prescaler period)
  };
  
  // Bit field definition.
  struct {
    eREN REN : 1;
    eREBL REBL : 3;
    uint32_t _reserved_0 : 4;
    ePRESCALE PRESCALE : 8;
    eRT RT : 8;
    eUT UT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR3() = delete;
  inline void Reset() volatile { this->value = 0x40808000; }
  static inline volatile SDRAMCR3 &Instance() { return *reinterpret_cast<volatile SDRAMCR3*>(0x400D404C); }
};

// NAND Control Register 0
//
union NANDCR0 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    easync = 0, // Asynchronous mode is enabled.
    esync = 1, // Synchronous mode is enabled.
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8 = 3, // 8
    eburst16 = 4, // 16
    eburst32 = 5, // 32
    eburst64_6 = 6, // 64
    eburst64_7 = 7, // 64
  };
  
  enum class eEDO : uint32_t {
    eedo_disable = 0, // EDO mode disabled
    eedo_enable = 1, // EDO mode enabled
  };
  
  enum class eCOL : uint32_t {
    ebit16 = 0, // 16
    ebit15 = 1, // 15
    ebit14 = 2, // 14
    ebit13 = 3, // 13
    ebit12 = 4, // 12
    ebit11 = 5, // 11
    ebit10 = 6, // 10
    ebit9 = 7, // 9
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_0 : 2;
    eBL BL : 3;
    eEDO EDO : 1;
    eCOL COL : 3;
    uint32_t _reserved_1 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NANDCR0 &Instance() { return *reinterpret_cast<volatile NANDCR0*>(0x400D4050); }
};

// NAND Control Register 1
//
union NANDCR1 {
  
  // Bit field definition.
  struct {
    uint32_t CES : 4;
    uint32_t CEH : 4;
    uint32_t WEL : 4;
    uint32_t WEH : 4;
    uint32_t REL : 4;
    uint32_t REH : 4;
    uint32_t TA : 4;
    uint32_t CEITV : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NANDCR1 &Instance() { return *reinterpret_cast<volatile NANDCR1*>(0x400D4054); }
};

// NAND Control Register 2
//
union NANDCR2 {
  
  // Bit field definition.
  struct {
    uint32_t TWHR : 6;
    uint32_t TRHW : 6;
    uint32_t TADL : 6;
    uint32_t TRR : 6;
    uint32_t TWB : 6;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR2() = delete;
  inline void Reset() volatile { this->value = 0x00010410; }
  static inline volatile NANDCR2 &Instance() { return *reinterpret_cast<volatile NANDCR2*>(0x400D4058); }
};

// NAND Control Register 3
//
union NANDCR3 {
  
  // Bit field definition.
  struct {
    uint32_t NDOPT1 : 1;
    uint32_t NDOPT2 : 1;
    uint32_t NDOPT3 : 1;
    uint32_t CLE : 1;
    uint32_t _reserved_0 : 12;
    uint32_t RDS : 4;
    uint32_t RDH : 4;
    uint32_t WDS : 4;
    uint32_t WDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NANDCR3 &Instance() { return *reinterpret_cast<volatile NANDCR3*>(0x400D405C); }
};

// NOR Control Register 0
//
union NORCR0 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    easync = 0, // Asynchronous mode is enabled.
    esync = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8 = 3, // 8
    eburst16 = 4, // 16
    eburst32 = 5, // 32
    eburst64_6 = 6, // 64
    eburst64_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eadmux = 0, // Address/Data MUX mode (ADMUX)
    eaadm = 1, // Advanced Address/Data MUX mode (AADM)
    enon_admux_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eactive_low = 0, // ADV# is active low.
    eactive_high = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    ehigh = 0, // ADV# is high during address hold state.
    elow = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    ebitwidth12_0 = 0, // 12 Bits
    ebitwidth11 = 1, // 11 Bits
    ebitwidth10 = 2, // 10 Bits
    ebitwidth9 = 3, // 9 Bits
    ebitwidth8 = 4, // 8 Bits
    ebitwidth7 = 5, // 7 Bits
    ebitwidth6 = 6, // 6 Bits
    ebitwidth5 = 7, // 5 Bits
    ebitwidth4 = 8, // 4 Bits
    ebitwidth3 = 9, // 3 Bits
    ebitwidth2 = 10, // 2 Bits
    ebitwidth12_b = 11, // 12 Bits
    ebitwidth12_c = 12, // 12 Bits
    ebitwidth12_d = 13, // 12 Bits
    ebitwidth12_e = 14, // 12 Bits
    ebitwidth12_f = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_0 : 2;
    eBL BL : 3;
    uint32_t _reserved_1 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR0 &Instance() { return *reinterpret_cast<volatile NORCR0*>(0x400D4060); }
};

// NOR Control Register 1
//
union NORCR1 {
  
  // Bit field definition.
  struct {
    uint32_t CES : 4;
    uint32_t CEH : 4;
    uint32_t AS : 4;
    uint32_t AH : 4;
    uint32_t WEL : 4;
    uint32_t WEH : 4;
    uint32_t REL : 4;
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR1 &Instance() { return *reinterpret_cast<volatile NORCR1*>(0x400D4064); }
};

// NOR Control Register 2
//
union NORCR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    uint32_t TA : 4;
    uint32_t AWDH : 4;
    uint32_t LC : 4;
    uint32_t RD : 4;
    uint32_t CEITV : 4;
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR2 &Instance() { return *reinterpret_cast<volatile NORCR2*>(0x400D4068); }
};

// NOR Control Register 3
//
union NORCR3 {
  
  // Bit field definition.
  struct {
    uint32_t ASSR : 4;
    uint32_t AHSR : 4;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR3 &Instance() { return *reinterpret_cast<volatile NORCR3*>(0x400D406C); }
};

// SRAM Control Register 0
//
union SRAMCR0 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    easync = 0, // Asynchronous mode is enabled.
    esync = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eWAITEN : uint32_t {
    eno_monitor_wait = 0, // The SEMC does not monitor wait pin.
    emonitor_wait = 1, // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
  };
  
  enum class eWAITSP : uint32_t {
    ewait_direct = 0, // Wait pin is directly used by the SEMC.
    ewait_sampled = 1, // Wait pin is sampled by internal clock before it is used.
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8 = 3, // 8
    eburst16 = 4, // 16
    eburst32 = 5, // 32
    eburst64_6 = 6, // 64
    eburst64_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eadmux = 0, // Address/Data MUX mode (ADMUX)
    eaadm = 1, // Advanced Address/Data MUX mode (AADM)
    enon_admux_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eactive_low = 0, // ADV# is active low.
    eactive_high = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    ehigh_hold = 0, // ADV# is high during address hold state.
    elow_hold = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    ebitwidth12_0 = 0, // 12 Bits
    ebitwidth11 = 1, // 11 Bits
    ebitwidth10 = 2, // 10 Bits
    ebitwidth9 = 3, // 9 Bits
    ebitwidth8 = 4, // 8 Bits
    ebitwidth7 = 5, // 7 Bits
    ebitwidth6 = 6, // 6 Bits
    ebitwidth5 = 7, // 5 Bits
    ebitwidth4 = 8, // 4 Bits
    ebitwidth3 = 9, // 3 Bits
    ebitwidth2 = 10, // 2 Bits
    ebitwidth12_b = 11, // 12 Bits
    ebitwidth12_c = 12, // 12 Bits
    ebitwidth12_d = 13, // 12 Bits
    ebitwidth12_e = 14, // 12 Bits
    ebitwidth12_f = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    eWAITEN WAITEN : 1;
    eWAITSP WAITSP : 1;
    eBL BL : 3;
    uint32_t _reserved_0 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR0 &Instance() { return *reinterpret_cast<volatile SRAMCR0*>(0x400D4070); }
};

// SRAM Control Register 1
//
union SRAMCR1 {
  
  // Bit field definition.
  struct {
    uint32_t CES : 4;
    uint32_t CEH : 4;
    uint32_t AS : 4;
    uint32_t AH : 4;
    uint32_t WEL : 4;
    uint32_t WEH : 4;
    uint32_t REL : 4;
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR1 &Instance() { return *reinterpret_cast<volatile SRAMCR1*>(0x400D4074); }
};

// SRAM Control Register 2
//
union SRAMCR2 {
  
  // Bit field definition.
  struct {
    uint32_t WDS : 4;
    uint32_t WDH : 4;
    uint32_t TA : 4;
    uint32_t AWDH : 4;
    uint32_t LC : 4;
    uint32_t RD : 4;
    uint32_t CEITV : 4;
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR2 &Instance() { return *reinterpret_cast<volatile SRAMCR2*>(0x400D4078); }
};

// SRAM Control Register 3
//
union SRAMCR3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR3 &Instance() { return *reinterpret_cast<volatile SRAMCR3*>(0x400D407C); }
};

// DBI-B Control Register 0
//
union DBICR0 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8 = 3, // 8
    eburst16 = 4, // 16
    eburst32 = 5, // 32
    eburst64_6 = 6, // 64
    eburst64_7 = 7, // 64
  };
  
  enum class eCOL : uint32_t {
    ebitwidth12_0 = 0, // 12 Bits
    ebitwidth11 = 1, // 11 Bits
    ebitwidth10 = 2, // 10 Bits
    ebitwidth9 = 3, // 9 Bits
    ebitwidth8 = 4, // 8 Bits
    ebitwidth7 = 5, // 7 Bits
    ebitwidth6 = 6, // 6 Bits
    ebitwidth5 = 7, // 5 Bits
    ebitwidth4 = 8, // 4 Bits
    ebitwidth3 = 9, // 3 Bits
    ebitwidth2 = 10, // 2 Bits
    ebitwidth12_b = 11, // 12 Bits
    ebitwidth12_c = 12, // 12 Bits
    ebitwidth12_d = 13, // 12 Bits
    ebitwidth12_e = 14, // 12 Bits
    ebitwidth12_f = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    uint32_t _reserved_0 : 3;
    eBL BL : 3;
    uint32_t _reserved_1 : 5;
    eCOL COL : 4;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DBICR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DBICR0 &Instance() { return *reinterpret_cast<volatile DBICR0*>(0x400D4080); }
};

// DBI-B Control Register 1
//
union DBICR1 {
  
  // Bit field definition.
  struct {
    uint32_t CES : 4;
    uint32_t CEH : 4;
    uint32_t WEL : 4;
    uint32_t WEH : 4;
    uint32_t REL : 7;
    uint32_t _reserved_0 : 1;
    uint32_t REH : 7;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DBICR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DBICR1 &Instance() { return *reinterpret_cast<volatile DBICR1*>(0x400D4084); }
};

// DBI-B Control Register 2
//
union DBICR2 {
  
  // Bit field definition.
  struct {
    uint32_t CEITV : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DBICR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DBICR2 &Instance() { return *reinterpret_cast<volatile DBICR2*>(0x400D4088); }
};

// IP Command Control Register 0
//
union IPCR0 {
  
  // Bit field definition.
  struct {
    uint32_t SA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR0 &Instance() { return *reinterpret_cast<volatile IPCR0*>(0x400D4090); }
};

// IP Command Control Register 1
//
union IPCR1 {
  
  enum class eDATSZ : uint32_t {
    edatasz_4byte = 0, // 4
    edatasz_1byte = 1, // 1
    edatasz_2byte = 2, // 2
    edatasz_3byte = 3, // 3
    edatasz_4byte_4 = 4, // 4
    edatasz_4byte_5 = 5, // 4
    edatasz_4byte_6 = 6, // 4
    edatasz_4byte_7 = 7, // 4
  };
  
  // Bit field definition.
  struct {
    eDATSZ DATSZ : 3;
    uint32_t _reserved_0 : 5;
    uint32_t NAND_EXT_ADDR : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR1 &Instance() { return *reinterpret_cast<volatile IPCR1*>(0x400D4094); }
};

// IP Command Control Register 2
//
union IPCR2 {
  
  enum class eBM0 : uint32_t {
    eunmasked = 0, // Byte is unmasked
    emasked = 1, // Byte is masked
  };
  
  enum class eBM1 : uint32_t {
    eunmasked = 0, // Byte is unmasked
    emasked = 1, // Byte is masked
  };
  
  enum class eBM2 : uint32_t {
    eunmasked = 0, // Byte is unmasked
    emasked = 1, // Byte is masked
  };
  
  enum class eBM3 : uint32_t {
    eunmasked = 0, // Byte is unmasked
    emasked = 1, // Byte is masked
  };
  
  // Bit field definition.
  struct {
    eBM0 BM0 : 1;
    eBM1 BM1 : 1;
    eBM2 BM2 : 1;
    eBM3 BM3 : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR2 &Instance() { return *reinterpret_cast<volatile IPCR2*>(0x400D4098); }
};

// IP Command Register
//
union IPCMD {
  
  // Bit field definition.
  struct {
    uint32_t CMD : 16;
    uint32_t KEY : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCMD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCMD &Instance() { return *reinterpret_cast<volatile IPCMD*>(0x400D409C); }
};

// TX DATA Register
//
union IPTXDAT {
  
  // Bit field definition.
  struct {
    uint32_t DAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPTXDAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXDAT &Instance() { return *reinterpret_cast<volatile IPTXDAT*>(0x400D40A0); }
};

// RX DATA Register
//
union IPRXDAT {
  
  // Bit field definition.
  struct {
    uint32_t DAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPRXDAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXDAT &Instance() { return *reinterpret_cast<volatile IPRXDAT*>(0x400D40B0); }
};

// Status Register 0
//
union STS0 {
  
  enum class eNARDY : uint32_t {
    enotready = 0, // NAND device is not ready
    eready = 1, // NAND device is ready
  };
  
  // Bit field definition.
  struct {
    uint32_t IDLE : 1;
    eNARDY NARDY : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS0() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile STS0 &Instance() { return *reinterpret_cast<volatile STS0*>(0x400D40C0); }
};

// Status Register 1
//
union STS1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS1 &Instance() { return *reinterpret_cast<volatile STS1*>(0x400D40C4); }
};

// Status Register 2
//
union STS2 {
  
  enum class eNDWRPEND : uint32_t {
    eno_pending = 0, // No pending
    epending = 1, // Pending
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    eNDWRPEND NDWRPEND : 1;
    uint32_t _reserved_1 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS2 &Instance() { return *reinterpret_cast<volatile STS2*>(0x400D40C8); }
};

// Status Register 3
//
union STS3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS3 &Instance() { return *reinterpret_cast<volatile STS3*>(0x400D40CC); }
};

// Status Register 4
//
union STS4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS4 &Instance() { return *reinterpret_cast<volatile STS4*>(0x400D40D0); }
};

// Status Register 5
//
union STS5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS5 &Instance() { return *reinterpret_cast<volatile STS5*>(0x400D40D4); }
};

// Status Register 6
//
union STS6 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS6 &Instance() { return *reinterpret_cast<volatile STS6*>(0x400D40D8); }
};

// Status Register 7
//
union STS7 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS7 &Instance() { return *reinterpret_cast<volatile STS7*>(0x400D40DC); }
};

// Status Register 8
//
union STS8 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS8 &Instance() { return *reinterpret_cast<volatile STS8*>(0x400D40E0); }
};

// Status Register 9
//
union STS9 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS9 &Instance() { return *reinterpret_cast<volatile STS9*>(0x400D40E4); }
};

// Status Register 10
//
union STS10 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS10 &Instance() { return *reinterpret_cast<volatile STS10*>(0x400D40E8); }
};

// Status Register 11
//
union STS11 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS11 &Instance() { return *reinterpret_cast<volatile STS11*>(0x400D40EC); }
};

// Status Register 12
//
union STS12 {
  
  // Bit field definition.
  struct {
    uint32_t NDADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS12 &Instance() { return *reinterpret_cast<volatile STS12*>(0x400D40F0); }
};

// Status Register 13
//
union STS13 {
  
  enum class eSLVLOCK : uint32_t {
    enot_locked = 0, // Slave delay line is not locked.
    elocked = 1, // Slave delay line is locked.
  };
  
  enum class eREFLOCK : uint32_t {
    enot_locked = 0, // Reference delay line is not locked.
    elocked = 1, // Reference delay line is locked.
  };
  
  // Bit field definition.
  struct {
    eSLVLOCK SLVLOCK : 1;
    eREFLOCK REFLOCK : 1;
    uint32_t SLVSEL : 6;
    uint32_t REFSEL : 6;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS13() = delete;
  inline void Reset() volatile { this->value = 0x00000100; }
  static inline volatile STS13 &Instance() { return *reinterpret_cast<volatile STS13*>(0x400D40F4); }
};

// Status Register 14
//
union STS14 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS14 &Instance() { return *reinterpret_cast<volatile STS14*>(0x400D40F8); }
};

// Status Register 15
//
union STS15 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS15 &Instance() { return *reinterpret_cast<volatile STS15*>(0x400D40FC); }
};

// Base Register 9
//
union BR9 {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR9() = delete;
  inline void Reset() volatile { this->value = 0xA0000018; }
  static inline volatile BR9 &Instance() { return *reinterpret_cast<volatile BR9*>(0x400D4100); }
};

// Base Register 10
//
union BR10 {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR10() = delete;
  inline void Reset() volatile { this->value = 0xA4000018; }
  static inline volatile BR10 &Instance() { return *reinterpret_cast<volatile BR10*>(0x400D4104); }
};

// Base Register 11
//
union BR11 {
  
  enum class eVLD : uint32_t {
    einvalid = 0, // The memory is invalid, can not be accessed.
    evalid = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    esize_4kb = 0, // 4KB
    esize_8kb = 1, // 8KB
    esize_16kb = 2, // 16KB
    esize_32kb = 3, // 32KB
    esize_64kb = 4, // 64KB
    esize_128kb = 5, // 128KB
    esize_256kb = 6, // 256KB
    esize_512kb = 7, // 512KB
    esize_1mb = 8, // 1MB
    esize_2mb = 9, // 2MB
    esize_4mb = 10, // 4MB
    esize_8mb = 11, // 8MB
    esize_16mb = 12, // 16MB
    esize_32mb = 13, // 32MB
    esize_64mb = 14, // 64MB
    esize_128mb = 15, // 128MB
    esize_256mb = 16, // 256MB
    esize_512mb = 17, // 512MB
    esize_1gb = 18, // 1GB
    esize_2gb = 19, // 2GB
    esize_4gb_20 = 20, // 4GB
    esize_4gb_21 = 21, // 4GB
    esize_4gb_22 = 22, // 4GB
    esize_4gb_23 = 23, // 4GB
    esize_4gb_24 = 24, // 4GB
    esize_4gb_25 = 25, // 4GB
    esize_4gb_26 = 26, // 4GB
    esize_4gb_27 = 27, // 4GB
    esize_4gb_28 = 28, // 4GB
    esize_4gb_29 = 29, // 4GB
    esize_4gb_30 = 30, // 4GB
    esize_4gb_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR11() = delete;
  inline void Reset() volatile { this->value = 0xA8000018; }
  static inline volatile BR11 &Instance() { return *reinterpret_cast<volatile BR11*>(0x400D4108); }
};

// SRAM Control Register 4
//
union SRAMCR4 {
  
  enum class ePS : uint32_t {
    eps_8bit = 0, // 8bit
    eps_16bit = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    easync = 0, // Asynchronous mode is enabled.
    esync = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eWAITEN : uint32_t {
    eno_monitor_wait = 0, // The SEMC does not monitor wait pin.
    emonitor_wait = 1, // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
  };
  
  enum class eWAITSP : uint32_t {
    ewait_direct = 0, // Wait pin is directly used by the SEMC.
    ewait_sampled = 1, // Wait pin is sampled by internal clock before it is used.
  };
  
  enum class eBL : uint32_t {
    eburst1 = 0, // 1
    eburst2 = 1, // 2
    eburst4 = 2, // 4
    eburst8 = 3, // 8
    eburst16 = 4, // 16
    eburst32 = 5, // 32
    eburst64_6 = 6, // 64
    eburst64_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eadmux = 0, // Address/Data MUX mode (ADMUX)
    eaadm = 1, // Advanced Address/Data MUX mode (AADM)
    enon_admux_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eactive_low = 0, // ADV# is active low.
    eactive_high = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    ehigh_hold = 0, // ADV# is high during address hold state.
    elow_hold = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    ebitwidth12_0 = 0, // 12 Bits
    ebitwidth11 = 1, // 11 Bits
    ebitwidth10 = 2, // 10 Bits
    ebitwidth9 = 3, // 9 Bits
    ebitwidth8 = 4, // 8 Bits
    ebitwidth7 = 5, // 7 Bits
    ebitwidth6 = 6, // 6 Bits
    ebitwidth5 = 7, // 5 Bits
    ebitwidth4 = 8, // 4 Bits
    ebitwidth3 = 9, // 3 Bits
    ebitwidth2 = 10, // 2 Bits
    ebitwidth12_b = 11, // 12 Bits
    ebitwidth12_c = 12, // 12 Bits
    ebitwidth12_d = 13, // 12 Bits
    ebitwidth12_e = 14, // 12 Bits
    ebitwidth12_f = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    eWAITEN WAITEN : 1;
    eWAITSP WAITSP : 1;
    eBL BL : 3;
    uint32_t _reserved_0 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR4 &Instance() { return *reinterpret_cast<volatile SRAMCR4*>(0x400D4120); }
};

// SRAM Control Register 5
//
union SRAMCR5 {
  
  // Bit field definition.
  struct {
    uint32_t CES : 4;
    uint32_t CEH : 4;
    uint32_t AS : 4;
    uint32_t AH : 4;
    uint32_t WEL : 4;
    uint32_t WEH : 4;
    uint32_t REL : 4;
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR5 &Instance() { return *reinterpret_cast<volatile SRAMCR5*>(0x400D4124); }
};

// SRAM Control Register 6
//
union SRAMCR6 {
  
  // Bit field definition.
  struct {
    uint32_t WDS : 4;
    uint32_t WDH : 4;
    uint32_t TA : 4;
    uint32_t AWDH : 4;
    uint32_t LC : 4;
    uint32_t RD : 4;
    uint32_t CEITV : 4;
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR6 &Instance() { return *reinterpret_cast<volatile SRAMCR6*>(0x400D4128); }
};

// Delay Chain Control Register
//
union DCCR {
  
  enum class eSDRAMEN : uint32_t {
    eno_dly_chain = 0, // Delay chain is not inserted.
    edly_chain = 1, // Delay chain is inserted.
  };
  
  enum class eNOREN : uint32_t {
    eno_dly_chain = 0, // Delay chain is not inserted.
    edly_chain = 1, // Delay chain is inserted.
  };
  
  enum class eSRAM0EN : uint32_t {
    eno_dly_chain = 0, // Delay chain is not inserted.
    edly_chain = 1, // Delay chain is inserted.
  };
  
  enum class eSRAMXEN : uint32_t {
    eno_dly_chain = 0, // Delay chain is not inserted.
    edly_chain = 1, // Delay chain is inserted.
  };
  
  // Bit field definition.
  struct {
    eSDRAMEN SDRAMEN : 1;
    uint32_t SDRAMVAL : 5;
    uint32_t _reserved_0 : 2;
    eNOREN NOREN : 1;
    uint32_t NORVAL : 5;
    uint32_t _reserved_1 : 2;
    eSRAM0EN SRAM0EN : 1;
    uint32_t SRAM0VAL : 5;
    uint32_t _reserved_2 : 2;
    eSRAMXEN SRAMXEN : 1;
    uint32_t SRAMXVAL : 5;
    uint32_t _reserved_3 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCCR &Instance() { return *reinterpret_cast<volatile DCCR*>(0x400D4150); }
};


} // namespace nSEMC