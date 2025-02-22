#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SEMC
namespace nSEMC {


// Module Control Register
union MCR {
  
  // Software Reset
  enum class eSWRST : uint32_t {
    // No reset
    eno_reset = 0,
    // Reset
    ereset = 1,
  };
  
  // Module Disable
  enum class eMDIS : uint32_t {
    // Module enabled
    eenable = 0,
    // Module disabled
    edisable = 1,
  };
  
  // DQS (read strobe) mode
  enum class eDQSMD : uint32_t {
    // Dummy read strobe loopbacked internally
    einternal = 0,
    // Dummy read strobe loopbacked from DQS pad
    edqs_pad = 1,
  };
  
  // WAIT/RDY polarity for SRAM/NOR
  enum class eWPOL0 : uint32_t {
    // WAIT/RDY polarity is not changed.
    eunchanged = 0,
    // WAIT/RDY polarity is inverted.
    einverted = 1,
  };
  
  // R/B# polarity for NAND device
  enum class eWPOL1 : uint32_t {
    // R/B# polarity is not changed.
    eunchanged = 0,
    // R/B# polarity is inverted.
    einverted = 1,
  };
  
  // Bus timeout cycles
  enum class eBTO : uint32_t {
    // 255*1
    ebto_0 = 0,
    // 255*2
    ebto_1 = 1,
    // 255*2^31
    ebto_1f = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software Reset
    eSWRST SWRST : 1;
    // read-write - Module Disable
    eMDIS MDIS : 1;
    // read-write - DQS (read strobe) mode
    eDQSMD DQSMD : 1;
    uint32_t _reserved_0 : 3;
    // read-write - WAIT/RDY polarity for SRAM/NOR
    eWPOL0 WPOL0 : 1;
    // read-write - R/B# polarity for NAND device
    eWPOL1 WPOL1 : 1;
    uint32_t _reserved_1 : 8;
    // read-write - Command Execution timeout cycles
    uint32_t CTO : 8;
    // read-write - Bus timeout cycles
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
union IOCR {
  
  // SEMC_ADDR08 output selection
  enum class eMUX_A8 : uint32_t {
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
  
  // SEMC_CSX0 output selection
  enum class eMUX_CSX0 : uint32_t {
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
  
  // SEMC_CSX1 output selection
  enum class eMUX_CSX1 : uint32_t {
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
  
  // SEMC_CSX2 output selection
  enum class eMUX_CSX2 : uint32_t {
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
  
  // SEMC_CSX3 output selection
  enum class eMUX_CSX3 : uint32_t {
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
  
  // SEMC_RDY function selection
  enum class eMUX_RDY : uint32_t {
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
  
  // SEMC_CLKX0 function selection
  enum class eMUX_CLKX0 : uint32_t {
    // Keep low
    ekeeplow = 0,
    // NOR clock
    enor_clk = 1,
    // SRAM clock
    esram_clk = 2,
    // NOR and SRAM clock, suitable for Multi-Chip Product package
    enorsram_clk = 3,
  };
  
  // SEMC_CLKX1 function selection
  enum class eMUX_CLKX1 : uint32_t {
    // Keep low
    ekeeplow = 0,
    // NOR clock
    enor_clk = 1,
    // SRAM clock
    esram_clk = 2,
    // NOR and SRAM clock, suitable for Multi-Chip Product package
    enor_sram_clk = 3,
  };
  
  // SEMC_CLKX0 Always On
  enum class eCLKX0_AO : uint32_t {
    // SEMC_CLKX0 is controlled by MUX_CLKX0
    emux_clkx0_ctl = 0,
    // SEMC_CLKX0 is always on
    ealways_on = 1,
  };
  
  // SEMC_CLKX1 Always On
  enum class eCLKX1_AO : uint32_t {
    // SEMC_CLKX1 is controlled by MUX_CLKX1
    emux_clkx1_ctl = 0,
    // SEMC_CLKX1 is always on
    ealways_on = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - SEMC_ADDR08 output selection
    eMUX_A8 MUX_A8 : 4;
    // read-write - SEMC_CSX0 output selection
    eMUX_CSX0 MUX_CSX0 : 4;
    // read-write - SEMC_CSX1 output selection
    eMUX_CSX1 MUX_CSX1 : 4;
    // read-write - SEMC_CSX2 output selection
    eMUX_CSX2 MUX_CSX2 : 4;
    // read-write - SEMC_CSX3 output selection
    eMUX_CSX3 MUX_CSX3 : 4;
    // read-write - SEMC_RDY function selection
    eMUX_RDY MUX_RDY : 4;
    // read-write - SEMC_CLKX0 function selection
    eMUX_CLKX0 MUX_CLKX0 : 2;
    // read-write - SEMC_CLKX1 function selection
    eMUX_CLKX1 MUX_CLKX1 : 2;
    // read-write - SEMC_CLKX0 Always On
    eCLKX0_AO CLKX0_AO : 1;
    // read-write - SEMC_CLKX1 Always On
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
union BMCR0 {
  
  // Bit field definition.
  struct {
    // read-write - Weight of QOS
    uint32_t WQOS : 4;
    // read-write - Weight of AGE
    uint32_t WAGE : 4;
    // read-write - Weight of Slave Hit without read/write switch
    uint32_t WSH : 8;
    // read-write - Weight of slave hit with Read/Write Switch
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
union BMCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Weight of QOS
    uint32_t WQOS : 4;
    // read-write - Weight of AGE
    uint32_t WAGE : 4;
    // read-write - Weight of Page Hit
    uint32_t WPH : 8;
    // read-write - Weight of slave hit without Read/Write Switch
    uint32_t WRWS : 8;
    // read-write - Weight of Bank Rotation
    uint32_t WBR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BMCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BMCR1 &Instance() { return *reinterpret_cast<volatile BMCR1*>(0x400D400C); }
};

// Base Register n
union BR[0] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[0] &Instance() { return *reinterpret_cast<volatile BR[0]*>(0x400D4010); }
};
// Base Register n
union BR[1] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[1] &Instance() { return *reinterpret_cast<volatile BR[1]*>(0x400D4014); }
};
// Base Register n
union BR[2] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[2] &Instance() { return *reinterpret_cast<volatile BR[2]*>(0x400D4018); }
};
// Base Register n
union BR[3] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[3] &Instance() { return *reinterpret_cast<volatile BR[3]*>(0x400D401C); }
};
// Base Register n
union BR[4] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[4] &Instance() { return *reinterpret_cast<volatile BR[4]*>(0x400D4020); }
};
// Base Register n
union BR[5] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[5] &Instance() { return *reinterpret_cast<volatile BR[5]*>(0x400D4024); }
};
// Base Register n
union BR[6] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[6] &Instance() { return *reinterpret_cast<volatile BR[6]*>(0x400D4028); }
};
// Base Register n
union BR[7] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[7] &Instance() { return *reinterpret_cast<volatile BR[7]*>(0x400D402C); }
};
// Base Register n
union BR[8] {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BR[8] &Instance() { return *reinterpret_cast<volatile BR[8]*>(0x400D4030); }
};

// DLL Control Register
union DLLCR {
  
  // DLL calibration enable
  enum class eDLLEN : uint32_t {
    // DLL calibration is disabled.
    ecal_disable = 0,
    // DLL calibration is enabled.
    ecal_enable = 1,
  };
  
  // DLL Reset
  enum class eDLLRESET : uint32_t {
    // DLL is not reset.
    eno_reset = 0,
    // DLL is reset.
    ereset = 1,
  };
  
  // Override Enable
  enum class eOVRDEN : uint32_t {
    // The delay cell number is not overridden.
    eno_override = 0,
    // The delay cell number is overridden.
    eoverride = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DLL calibration enable
    eDLLEN DLLEN : 1;
    // read-write - DLL Reset
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Delay Target for Slave
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_1 : 1;
    // read-write - Override Enable
    eOVRDEN OVRDEN : 1;
    // read-write - Override Value
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
union INTEN {
  
  // IP command done interrupt enable
  enum class eIPCMDDONEEN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // IP command error interrupt enable
  enum class eIPCMDERREN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // AXI command error interrupt enable
  enum class eAXICMDERREN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // AXI bus error interrupt enable
  enum class eAXIBUSERREN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // NAND page end interrupt enable
  enum class eNDPAGEENDEN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // NAND no pending AXI access interrupt enable
  enum class eNDNOPENDEN : uint32_t {
    // Interrupt is disabled
    einterrupt_disable = 0,
    // Interrupt is enabled
    einterrupt_enable = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - IP command done interrupt enable
    eIPCMDDONEEN IPCMDDONEEN : 1;
    // read-write - IP command error interrupt enable
    eIPCMDERREN IPCMDERREN : 1;
    // read-write - AXI command error interrupt enable
    eAXICMDERREN AXICMDERREN : 1;
    // read-write - AXI bus error interrupt enable
    eAXIBUSERREN AXIBUSERREN : 1;
    // read-write - NAND page end interrupt enable
    eNDPAGEENDEN NDPAGEENDEN : 1;
    // read-write - NAND no pending AXI access interrupt enable
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
union INTR {
  
  // IP command normal done interrupt
  enum class eIPCMDDONE : uint32_t {
    // IP command is not done.
    enot_done = 0,
    // IP command is done.
    edone = 1,
  };
  
  // IP command error done interrupt
  enum class eIPCMDERR : uint32_t {
    // No IP command error.
    eno_error = 0,
    // IP command error occurs.
    eerror = 1,
  };
  
  // AXI command error interrupt
  enum class eAXICMDERR : uint32_t {
    // No AXI command error.
    eno_error = 0,
    // AXI command error occurs.
    eerror = 1,
  };
  
  // AXI bus error interrupt
  enum class eAXIBUSERR : uint32_t {
    // No AXI bus error.
    eno_error = 0,
    // AXI bus error occurs.
    eerror = 1,
  };
  
  // NAND page end interrupt
  enum class eNDPAGEEND : uint32_t {
    // The last address of main space in the NAND is not written by AXI command.
    eno_write = 0,
    // The last address of main space in the NAND is written by AXI command.
    ewrite = 1,
  };
  
  // NAND no pending AXI write transaction interrupt
  enum class eNDNOPEND : uint32_t {
    // At least one NAND AXI write transaction is pending or no NAND write transaction is sent to the queue.
    eno_write = 0,
    // All NAND AXI write pending transactions are finished.
    ewrite = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - IP command normal done interrupt
    eIPCMDDONE IPCMDDONE : 1;
    // read-write - IP command error done interrupt
    eIPCMDERR IPCMDERR : 1;
    // read-write - AXI command error interrupt
    eAXICMDERR AXICMDERR : 1;
    // read-write - AXI bus error interrupt
    eAXIBUSERR AXIBUSERR : 1;
    // read-write - NAND page end interrupt
    eNDPAGEEND NDPAGEEND : 1;
    // read-write - NAND no pending AXI write transaction interrupt
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
union SDRAMCR0 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
    // 32bit
    eps_32bit = 2,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // Column 8 selection
  enum class eCOL8 : uint32_t {
    // Column address bit number is decided by COL field.
    ecolfield = 0,
    // Column address bit number is 8. COL field is ignored.
    ebit8 = 1,
  };
  
  // Column address bit number
  enum class eCOL : uint32_t {
    // 12
    ebit12 = 0,
    // 11
    ebit11 = 1,
    // 10
    ebit10 = 2,
    // 9
    ebit9 = 3,
  };
  
  // CAS Latency
  enum class eCL : uint32_t {
    // 1
    ecl1_0 = 0,
    // 1
    ecl1_1 = 1,
    // 2
    ecl2 = 2,
    // 3
    ecl3 = 3,
  };
  
  // 2 Bank selection bit
  enum class eBANK2 : uint32_t {
    // SDRAM device has 4 banks.
    ebank4 = 0,
    // SDRAM device has 2 banks.
    ebank2 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Burst Length
    eBL BL : 3;
    // read-write - Column 8 selection
    eCOL8 COL8 : 1;
    // read-write - Column address bit number
    eCOL COL : 2;
    // read-write - CAS Latency
    eCL CL : 2;
    uint32_t _reserved_1 : 2;
    // read-write - 2 Bank selection bit
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
union SDRAMCR1 {
  
  // Bit field definition.
  struct {
    // read-write - PRECHARGE to ACTIVE/REFRESH command wait time
    uint32_t PRE2ACT : 4;
    // read-write - ACTIVE to READ/WRITE delay
    uint32_t ACT2RW : 4;
    // read-write - REFRESH recovery time
    uint32_t RFRC : 5;
    // read-write - WRITE recovery time
    uint32_t WRC : 3;
    // read-write - CKE off minimum time
    uint32_t CKEOFF : 4;
    // read-write - ACTIVE to PRECHARGE minimum time
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
union SDRAMCR2 {
  
  // SDRAM idle timeout
  enum class eITO : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - SELF REFRESH recovery time
    uint32_t SRRC : 8;
    // read-write - REFRESH to REFRESH delay
    uint32_t REF2REF : 8;
    // read-write - ACTIVE to ACTIVE delay
    uint32_t ACT2ACT : 8;
    // read-write - SDRAM idle timeout
    eITO ITO : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR2() = delete;
  inline void Reset() volatile { this->value = 0x80000EEE; }
  static inline volatile SDRAMCR2 &Instance() { return *reinterpret_cast<volatile SDRAMCR2*>(0x400D4048); }
};

// SDRAM Control Register 3
union SDRAMCR3 {
  
  // Refresh enable
  enum class eREN : uint32_t {
    // The SEMC does not send AUTO REFRESH command automatically
    eno_auto_refresh = 0,
    // The SEMC sends AUTO REFRESH command automatically
    eauto_refresh = 1,
  };
  
  // Refresh burst length
  enum class eREBL : uint32_t {
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
  
  // Prescaler period
  enum class ePRESCALE : uint32_t {
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
  
  // Refresh timer period
  enum class eRT : uint32_t {
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
  
  // Urgent refresh threshold
  enum class eUT : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Refresh enable
    eREN REN : 1;
    // read-write - Refresh burst length
    eREBL REBL : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Prescaler period
    ePRESCALE PRESCALE : 8;
    // read-write - Refresh timer period
    eRT RT : 8;
    // read-write - Urgent refresh threshold
    eUT UT : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SDRAMCR3() = delete;
  inline void Reset() volatile { this->value = 0x40808000; }
  static inline volatile SDRAMCR3 &Instance() { return *reinterpret_cast<volatile SDRAMCR3*>(0x400D404C); }
};

// NAND Control Register 0
union NANDCR0 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
  };
  
  // Synchronous Mode Enable
  enum class eSYNCEN : uint32_t {
    // Asynchronous mode is enabled.
    easync = 0,
    // Synchronous mode is enabled.
    esync = 1,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // EDO mode enabled
  enum class eEDO : uint32_t {
    // EDO mode disabled
    eedo_disable = 0,
    // EDO mode enabled
    eedo_enable = 1,
  };
  
  // Column address bit number
  enum class eCOL : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 1;
    // read-write - Synchronous Mode Enable
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Burst Length
    eBL BL : 3;
    // read-write - EDO mode enabled
    eEDO EDO : 1;
    // read-write - Column address bit number
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
union NANDCR1 {
  
  // Bit field definition.
  struct {
    // read-write - CE# setup time
    uint32_t CES : 4;
    // read-write - CE# hold time
    uint32_t CEH : 4;
    // read-write - WE# low time
    uint32_t WEL : 4;
    // read-write - WE# high time
    uint32_t WEH : 4;
    // read-write - RE# low time
    uint32_t REL : 4;
    // read-write - RE# high time
    uint32_t REH : 4;
    // read-write - Turnaround time
    uint32_t TA : 4;
    // read-write - CE# interval time
    uint32_t CEITV : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NANDCR1 &Instance() { return *reinterpret_cast<volatile NANDCR1*>(0x400D4054); }
};

// NAND Control Register 2
union NANDCR2 {
  
  // Bit field definition.
  struct {
    // read-write - WE# high to RE# low time
    uint32_t TWHR : 6;
    // read-write - RE# high to WE# low time
    uint32_t TRHW : 6;
    // read-write - Address cycle to data loading time
    uint32_t TADL : 6;
    // read-write - Ready to RE# low time
    uint32_t TRR : 6;
    // read-write - WE# high to busy time
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
union NANDCR3 {
  
  // Bit field definition.
  struct {
    // read-write - NAND option bit 1
    uint32_t NDOPT1 : 1;
    // read-write - NAND option bit 2
    uint32_t NDOPT2 : 1;
    // read-write - NAND option bit 3
    uint32_t NDOPT3 : 1;
    // read-write - NAND CLE Option
    uint32_t CLE : 1;
    uint32_t _reserved_0 : 12;
    // read-write - Read Data Setup time
    uint32_t RDS : 4;
    // read-write - Read Data Hold time
    uint32_t RDH : 4;
    // read-write - Write Data Setup time
    uint32_t WDS : 4;
    // read-write - Write Data Hold time
    uint32_t WDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NANDCR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NANDCR3 &Instance() { return *reinterpret_cast<volatile NANDCR3*>(0x400D405C); }
};

// NOR Control Register 0
union NORCR0 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
  };
  
  // Synchronous Mode Enable
  enum class eSYNCEN : uint32_t {
    // Asynchronous mode is enabled.
    easync = 0,
    // Synchronous mode is enabled. Only fixed latency mode is supported.
    esync = 1,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // Address Mode
  enum class eAM : uint32_t {
    // Address/Data MUX mode (ADMUX)
    eadmux = 0,
    // Advanced Address/Data MUX mode (AADM)
    eaadm = 1,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_2 = 2,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3,
  };
  
  // ADV# Polarity
  enum class eADVP : uint32_t {
    // ADV# is active low.
    eactive_low = 0,
    // ADV# is active high.
    eactive_high = 1,
  };
  
  // ADV# level control during address hold state
  enum class eADVH : uint32_t {
    // ADV# is high during address hold state.
    ehigh = 0,
    // ADV# is low during address hold state.
    elow = 1,
  };
  
  // Column Address bit width
  enum class eCOL : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 1;
    // read-write - Synchronous Mode Enable
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Burst Length
    eBL BL : 3;
    uint32_t _reserved_1 : 1;
    // read-write - Address Mode
    eAM AM : 2;
    // read-write - ADV# Polarity
    eADVP ADVP : 1;
    // read-write - ADV# level control during address hold state
    eADVH ADVH : 1;
    // read-write - Column Address bit width
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
union NORCR1 {
  
  // Bit field definition.
  struct {
    // read-write - CE setup time
    uint32_t CES : 4;
    // read-write - CE hold time
    uint32_t CEH : 4;
    // read-write - Address setup time
    uint32_t AS : 4;
    // read-write - Address hold time
    uint32_t AH : 4;
    // read-write - WE low time
    uint32_t WEL : 4;
    // read-write - WE high time
    uint32_t WEH : 4;
    // read-write - RE low time
    uint32_t REL : 4;
    // read-write - RE high time
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR1 &Instance() { return *reinterpret_cast<volatile NORCR1*>(0x400D4064); }
};

// NOR Control Register 2
union NORCR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - Turnaround time
    uint32_t TA : 4;
    // read-write - Address to write data hold time
    uint32_t AWDH : 4;
    // read-write - Latency count
    uint32_t LC : 4;
    // read-write - Read time
    uint32_t RD : 4;
    // read-write - CE# interval time
    uint32_t CEITV : 4;
    // read-write - Read hold time
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  NORCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NORCR2 &Instance() { return *reinterpret_cast<volatile NORCR2*>(0x400D4068); }
};

// NOR Control Register 3
union NORCR3 {
  
  // Bit field definition.
  struct {
    // read-write - Address setup time for SYNC read
    uint32_t ASSR : 4;
    // read-write - Address hold time for SYNC read
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
union SRAMCR0 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
  };
  
  // Synchronous Mode Enable
  enum class eSYNCEN : uint32_t {
    // Asynchronous mode is enabled.
    easync = 0,
    // Synchronous mode is enabled. Only fixed latency mode is supported.
    esync = 1,
  };
  
  // Wait Enable
  enum class eWAITEN : uint32_t {
    // The SEMC does not monitor wait pin.
    eno_monitor_wait = 0,
    // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
    emonitor_wait = 1,
  };
  
  // Wait Sample
  enum class eWAITSP : uint32_t {
    // Wait pin is directly used by the SEMC.
    ewait_direct = 0,
    // Wait pin is sampled by internal clock before it is used.
    ewait_sampled = 1,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // Address Mode
  enum class eAM : uint32_t {
    // Address/Data MUX mode (ADMUX)
    eadmux = 0,
    // Advanced Address/Data MUX mode (AADM)
    eaadm = 1,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_2 = 2,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3,
  };
  
  // ADV# polarity
  enum class eADVP : uint32_t {
    // ADV# is active low.
    eactive_low = 0,
    // ADV# is active high.
    eactive_high = 1,
  };
  
  // ADV# level control during address hold state
  enum class eADVH : uint32_t {
    // ADV# is high during address hold state.
    ehigh_hold = 0,
    // ADV# is low during address hold state.
    elow_hold = 1,
  };
  
  // Column Address bit width
  enum class eCOL : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 1;
    // read-write - Synchronous Mode Enable
    eSYNCEN SYNCEN : 1;
    // read-write - Wait Enable
    eWAITEN WAITEN : 1;
    // read-write - Wait Sample
    eWAITSP WAITSP : 1;
    // read-write - Burst Length
    eBL BL : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Address Mode
    eAM AM : 2;
    // read-write - ADV# polarity
    eADVP ADVP : 1;
    // read-write - ADV# level control during address hold state
    eADVH ADVH : 1;
    // read-write - Column Address bit width
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
union SRAMCR1 {
  
  // Bit field definition.
  struct {
    // read-write - CE setup time
    uint32_t CES : 4;
    // read-write - CE hold time
    uint32_t CEH : 4;
    // read-write - Address setup time
    uint32_t AS : 4;
    // read-write - Address hold time
    uint32_t AH : 4;
    // read-write - WE low time
    uint32_t WEL : 4;
    // read-write - WE high time
    uint32_t WEH : 4;
    // read-write - RE low time
    uint32_t REL : 4;
    // read-write - RE high time
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR1 &Instance() { return *reinterpret_cast<volatile SRAMCR1*>(0x400D4074); }
};

// SRAM Control Register 2
union SRAMCR2 {
  
  // Bit field definition.
  struct {
    // read-write - Write Data setup time
    uint32_t WDS : 4;
    // read-write - Write Data hold time
    uint32_t WDH : 4;
    // read-write - Turnaround time
    uint32_t TA : 4;
    // read-write - Address to write data hold time
    uint32_t AWDH : 4;
    // read-write - Latency count
    uint32_t LC : 4;
    // read-write - Read time
    uint32_t RD : 4;
    // read-write - CE# interval time
    uint32_t CEITV : 4;
    // read-write - Read hold time
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR2 &Instance() { return *reinterpret_cast<volatile SRAMCR2*>(0x400D4078); }
};

// SRAM Control Register 3
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
union DBICR0 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // Column Address bit width
  enum class eCOL : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Burst Length
    eBL BL : 3;
    uint32_t _reserved_1 : 5;
    // read-write - Column Address bit width
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
union DBICR1 {
  
  // Bit field definition.
  struct {
    // read-write - CSX Setup Time
    uint32_t CES : 4;
    // read-write - CSX Hold Time
    uint32_t CEH : 4;
    // read-write - WRX Low Time
    uint32_t WEL : 4;
    // read-write - WRX High Time
    uint32_t WEH : 4;
    // read-write - RDX Low Time
    uint32_t REL : 7;
    uint32_t _reserved_0 : 1;
    // read-write - RDX High Time
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
union DBICR2 {
  
  // Bit field definition.
  struct {
    // read-write - CSX interval time
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
union IPCR0 {
  
  // Bit field definition.
  struct {
    // read-write - Slave address
    uint32_t SA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCR0 &Instance() { return *reinterpret_cast<volatile IPCR0*>(0x400D4090); }
};

// IP Command Control Register 1
union IPCR1 {
  
  // Data Size in Byte
  enum class eDATSZ : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Data Size in Byte
    eDATSZ DATSZ : 3;
    uint32_t _reserved_0 : 5;
    // read-write - NAND Extended Address
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
union IPCR2 {
  
  // Byte Mask for Byte 0 (IPTXDAT bit 7:0)
  enum class eBM0 : uint32_t {
    // Byte is unmasked
    eunmasked = 0,
    // Byte is masked
    emasked = 1,
  };
  
  // Byte Mask for Byte 1 (IPTXDAT bit 15:8)
  enum class eBM1 : uint32_t {
    // Byte is unmasked
    eunmasked = 0,
    // Byte is masked
    emasked = 1,
  };
  
  // Byte Mask for Byte 2 (IPTXDAT bit 23:16)
  enum class eBM2 : uint32_t {
    // Byte is unmasked
    eunmasked = 0,
    // Byte is masked
    emasked = 1,
  };
  
  // Byte Mask for Byte 3 (IPTXDAT bit 31:24)
  enum class eBM3 : uint32_t {
    // Byte is unmasked
    eunmasked = 0,
    // Byte is masked
    emasked = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Byte Mask for Byte 0 (IPTXDAT bit 7:0)
    eBM0 BM0 : 1;
    // read-write - Byte Mask for Byte 1 (IPTXDAT bit 15:8)
    eBM1 BM1 : 1;
    // read-write - Byte Mask for Byte 2 (IPTXDAT bit 23:16)
    eBM2 BM2 : 1;
    // read-write - Byte Mask for Byte 3 (IPTXDAT bit 31:24)
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
union IPCMD {
  
  // Bit field definition.
  struct {
    // read-write - SDRAM Commands: 0x8: Read 0x9: Write 0xA: Mode Register Set 0xB: Active 0xC: Auto Refresh 0xD: Self Refresh 0xE: Precharge 0xF: Precharge All Others: Reserved Self Refresh is sent to all SDRAM devices because they share the same SEMC_CLK pin
    uint32_t CMD : 16;
    // write-only - This field should be written with 0xA55A when trigging an IP command for all device types
    uint32_t KEY : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPCMD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPCMD &Instance() { return *reinterpret_cast<volatile IPCMD*>(0x400D409C); }
};

// TX DATA Register
union IPTXDAT {
  
  // Bit field definition.
  struct {
    // read-write - Data value to use for an IP write command
    uint32_t DAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPTXDAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPTXDAT &Instance() { return *reinterpret_cast<volatile IPTXDAT*>(0x400D40A0); }
};

// RX DATA Register
union IPRXDAT {
  
  // Bit field definition.
  struct {
    // read-only - Data returned by device for an IP read command.
    uint32_t DAT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IPRXDAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IPRXDAT &Instance() { return *reinterpret_cast<volatile IPRXDAT*>(0x400D40B0); }
};

// Status Register 0
union STS0 {
  
  // Indicating NAND device Ready/WAIT# pin level.
  enum class eNARDY : uint32_t {
    // NAND device is not ready
    enotready = 0,
    // NAND device is ready
    eready = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Indicating whether the SEMC is in idle state.
    uint32_t IDLE : 1;
    // read-only - Indicating NAND device Ready/WAIT# pin level.
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
union STS2 {
  
  // This field indicating whether there is pending AXI command (write) to NAND device.
  enum class eNDWRPEND : uint32_t {
    // No pending
    eno_pending = 0,
    // Pending
    epending = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-only - This field indicating whether there is pending AXI command (write) to NAND device.
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
union STS12 {
  
  // Bit field definition.
  struct {
    // read-only - This field indicating the last write address (AXI command) to NAND device (without base address in SEMC_BR4).
    uint32_t NDADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STS12 &Instance() { return *reinterpret_cast<volatile STS12*>(0x400D40F0); }
};

// Status Register 13
union STS13 {
  
  // Sample clock slave delay line locked.
  enum class eSLVLOCK : uint32_t {
    // Slave delay line is not locked.
    enot_locked = 0,
    // Slave delay line is locked.
    elocked = 1,
  };
  
  // Sample clock reference delay line locked.
  enum class eREFLOCK : uint32_t {
    // Reference delay line is not locked.
    enot_locked = 0,
    // Reference delay line is locked.
    elocked = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Sample clock slave delay line locked.
    eSLVLOCK SLVLOCK : 1;
    // read-only - Sample clock reference delay line locked.
    eREFLOCK REFLOCK : 1;
    // read-only - Sample clock slave delay line delay cell number selection.
    uint32_t SLVSEL : 6;
    // read-only - Sample clock reference delay line delay cell number selection.
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
union BR9 {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR9() = delete;
  inline void Reset() volatile { this->value = 0xA0000018; }
  static inline volatile BR9 &Instance() { return *reinterpret_cast<volatile BR9*>(0x400D4100); }
};

// Base Register 10
union BR10 {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR10() = delete;
  inline void Reset() volatile { this->value = 0xA4000018; }
  static inline volatile BR10 &Instance() { return *reinterpret_cast<volatile BR10*>(0x400D4104); }
};

// Base Register 11
union BR11 {
  
  // Valid
  enum class eVLD : uint32_t {
    // The memory is invalid, can not be accessed.
    einvalid = 0,
    // The memory is valid, can be accessed.
    evalid = 1,
  };
  
  // Memory size
  enum class eMS : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Valid
    eVLD VLD : 1;
    // read-write - Memory size
    eMS MS : 5;
    uint32_t _reserved_0 : 6;
    // read-write - Base Address
    uint32_t BA : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BR11() = delete;
  inline void Reset() volatile { this->value = 0xA8000018; }
  static inline volatile BR11 &Instance() { return *reinterpret_cast<volatile BR11*>(0x400D4108); }
};

// SRAM Control Register 4
union SRAMCR4 {
  
  // Port Size
  enum class ePS : uint32_t {
    // 8bit
    eps_8bit = 0,
    // 16bit
    eps_16bit = 1,
  };
  
  // Synchronous Mode Enable
  enum class eSYNCEN : uint32_t {
    // Asynchronous mode is enabled.
    easync = 0,
    // Synchronous mode is enabled. Only fixed latency mode is supported.
    esync = 1,
  };
  
  // Wait Enable
  enum class eWAITEN : uint32_t {
    // The SEMC does not monitor wait pin.
    eno_monitor_wait = 0,
    // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
    emonitor_wait = 1,
  };
  
  // Wait Sample
  enum class eWAITSP : uint32_t {
    // Wait pin is directly used by the SEMC.
    ewait_direct = 0,
    // Wait pin is sampled by internal clock before it is used.
    ewait_sampled = 1,
  };
  
  // Burst Length
  enum class eBL : uint32_t {
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
  
  // Address Mode
  enum class eAM : uint32_t {
    // Address/Data MUX mode (ADMUX)
    eadmux = 0,
    // Advanced Address/Data MUX mode (AADM)
    eaadm = 1,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_2 = 2,
    // Address/Data non-MUX mode (Non-ADMUX)
    enon_admux_3 = 3,
  };
  
  // ADV# polarity
  enum class eADVP : uint32_t {
    // ADV# is active low.
    eactive_low = 0,
    // ADV# is active high.
    eactive_high = 1,
  };
  
  // ADV# level control during address hold state
  enum class eADVH : uint32_t {
    // ADV# is high during address hold state.
    ehigh_hold = 0,
    // ADV# is low during address hold state.
    elow_hold = 1,
  };
  
  // Column Address bit width
  enum class eCOL : uint32_t {
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
  
  // Bit field definition.
  struct {
    // read-write - Port Size
    ePS PS : 1;
    // read-write - Synchronous Mode Enable
    eSYNCEN SYNCEN : 1;
    // read-write - Wait Enable
    eWAITEN WAITEN : 1;
    // read-write - Wait Sample
    eWAITSP WAITSP : 1;
    // read-write - Burst Length
    eBL BL : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Address Mode
    eAM AM : 2;
    // read-write - ADV# polarity
    eADVP ADVP : 1;
    // read-write - ADV# level control during address hold state
    eADVH ADVH : 1;
    // read-write - Column Address bit width
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
union SRAMCR5 {
  
  // Bit field definition.
  struct {
    // read-write - CE setup time
    uint32_t CES : 4;
    // read-write - CE hold time
    uint32_t CEH : 4;
    // read-write - Address setup time
    uint32_t AS : 4;
    // read-write - Address hold time
    uint32_t AH : 4;
    // read-write - WE low time
    uint32_t WEL : 4;
    // read-write - WE high time
    uint32_t WEH : 4;
    // read-write - RE low time
    uint32_t REL : 4;
    // read-write - RE high time
    uint32_t REH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR5 &Instance() { return *reinterpret_cast<volatile SRAMCR5*>(0x400D4124); }
};

// SRAM Control Register 6
union SRAMCR6 {
  
  // Bit field definition.
  struct {
    // read-write - Write Data setup time
    uint32_t WDS : 4;
    // read-write - Write Data hold time
    uint32_t WDH : 4;
    // read-write - Turnaround time
    uint32_t TA : 4;
    // read-write - Address to write data hold time
    uint32_t AWDH : 4;
    // read-write - Latency count
    uint32_t LC : 4;
    // read-write - Read time
    uint32_t RD : 4;
    // read-write - CE# interval time
    uint32_t CEITV : 4;
    // read-write - Read hold time
    uint32_t RDH : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SRAMCR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SRAMCR6 &Instance() { return *reinterpret_cast<volatile SRAMCR6*>(0x400D4128); }
};

// Delay Chain Control Register
union DCCR {
  
  // Delay chain insertion enable for SRAM device.
  enum class eSDRAMEN : uint32_t {
    // Delay chain is not inserted.
    eno_dly_chain = 0,
    // Delay chain is inserted.
    edly_chain = 1,
  };
  
  // Delay chain insertion enable for NOR device.
  enum class eNOREN : uint32_t {
    // Delay chain is not inserted.
    eno_dly_chain = 0,
    // Delay chain is inserted.
    edly_chain = 1,
  };
  
  // Delay chain insertion enable for SRAM device 0.
  enum class eSRAM0EN : uint32_t {
    // Delay chain is not inserted.
    eno_dly_chain = 0,
    // Delay chain is inserted.
    edly_chain = 1,
  };
  
  // Delay chain insertion enable for SRAM device 1-3.
  enum class eSRAMXEN : uint32_t {
    // Delay chain is not inserted.
    eno_dly_chain = 0,
    // Delay chain is inserted.
    edly_chain = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Delay chain insertion enable for SRAM device.
    eSDRAMEN SDRAMEN : 1;
    // read-write - Clock delay line delay cell number selection value for SDRAM device.
    uint32_t SDRAMVAL : 5;
    uint32_t _reserved_0 : 2;
    // read-write - Delay chain insertion enable for NOR device.
    eNOREN NOREN : 1;
    // read-write - Clock delay line delay cell number selection value for NOR device.
    uint32_t NORVAL : 5;
    uint32_t _reserved_1 : 2;
    // read-write - Delay chain insertion enable for SRAM device 0.
    eSRAM0EN SRAM0EN : 1;
    // read-write - Clock delay line delay cell number selection value for SRAM device 0.
    uint32_t SRAM0VAL : 5;
    uint32_t _reserved_2 : 2;
    // read-write - Delay chain insertion enable for SRAM device 1-3.
    eSRAMXEN SRAMXEN : 1;
    // read-write - Clock delay line delay cell number selection value for SRAM device 1-3.
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