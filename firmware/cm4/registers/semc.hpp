#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // SEMC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSEMC {


// Module Control Register
//
union MCR {
  
  enum class eSWRST : uint32_t {
    eSWRST_0 = 0, // No reset
    eSWRST_1 = 1, // Reset
  };
  
  enum class eMDIS : uint32_t {
    eMDIS_0 = 0, // Module enabled
    eMDIS_1 = 1, // Module disabled
  };
  
  enum class eDQSMD : uint32_t {
    eDQSMD_0 = 0, // Dummy read strobe loopbacked internally
    eDQSMD_1 = 1, // Dummy read strobe loopbacked from DQS pad
  };
  
  enum class eWPOL0 : uint32_t {
    eWPOL0_0 = 0, // WAIT/RDY polarity is not changed.
    eWPOL0_1 = 1, // WAIT/RDY polarity is inverted.
  };
  
  enum class eWPOL1 : uint32_t {
    eWPOL1_0 = 0, // R/B# polarity is not changed.
    eWPOL1_1 = 1, // R/B# polarity is inverted.
  };
  
  enum class eBTO : uint32_t {
    eBTO_0 = 0, // 255*1
    eBTO_1 = 1, // 255*2
    eBTO_31 = 31, // 255*231
  };
  
  // Bit field definition.
  struct {
    eSWRST SWRST : 1;
    eMDIS MDIS : 1;
    eDQSMD DQSMD : 1;
    uint32_t _reserved_3 : 3;
    eWPOL0 WPOL0 : 1;
    eWPOL1 WPOL1 : 1;
    uint32_t _reserved_5 : 8;
    uint32_t CTO : 8;
    eBTO BTO : 5;
    uint32_t _reserved_end : 3;
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
    eMUX_A8_0 = 0, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_1 = 1, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_2 = 2, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_3 = 3, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_4 = 4, // NAND CE#
    eMUX_A8_5 = 5, // NOR CE#
    eMUX_A8_6 = 6, // SRAM CE# 0
    eMUX_A8_7 = 7, // DBI CSX
    eMUX_A8_8 = 8, // SRAM CE# 1
    eMUX_A8_9 = 9, // SRAM CE# 2
    eMUX_A8_10 = 10, // SRAM CE# 3
    eMUX_A8_11 = 11, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_12 = 12, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_13 = 13, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_14 = 14, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
    eMUX_A8_15 = 15, // SDRAM Address bit 8 (A8) or NOR/SRAM Address bit 24 (A24) in ADMUX 16bit mode
  };
  
  enum class eMUX_CSX0 : uint32_t {
    eMUX_CSX0_0 = 0, // NOR/SRAM Address bit 24 (A24) in Non-ADMUX mode
    eMUX_CSX0_1 = 1, // SDRAM CS1
    eMUX_CSX0_2 = 2, // SDRAM CS2
    eMUX_CSX0_3 = 3, // SDRAM CS3
    eMUX_CSX0_4 = 4, // NAND CE#
    eMUX_CSX0_5 = 5, // NOR CE#
    eMUX_CSX0_6 = 6, // SRAM CE# 0
    eMUX_CSX0_7 = 7, // DBI CSX
    eMUX_CSX0_8 = 8, // SRAM CE# 1
    eMUX_CSX0_9 = 9, // SRAM CE# 2
    eMUX_CSX0_10 = 10, // SRAM CE# 3
    eMUX_CSX0_11 = 11, // NOR/SRAM Address bit 24 (A24)
    eMUX_CSX0_12 = 12, // NOR/SRAM Address bit 24 (A24)
    eMUX_CSX0_13 = 13, // NOR/SRAM Address bit 24 (A24)
    eMUX_CSX0_14 = 14, // NOR/SRAM Address bit 24 (A24)
    eMUX_CSX0_15 = 15, // NOR/SRAM Address bit 24 (A24)
  };
  
  enum class eMUX_CSX1 : uint32_t {
    eMUX_CSX1_0 = 0, // NOR/SRAM Address bit 25 (A25) in Non-ADMUX mode
    eMUX_CSX1_1 = 1, // SDRAM CS1
    eMUX_CSX1_2 = 2, // SDRAM CS2
    eMUX_CSX1_3 = 3, // SDRAM CS3
    eMUX_CSX1_4 = 4, // NAND CE#
    eMUX_CSX1_5 = 5, // NOR CE#
    eMUX_CSX1_6 = 6, // SRAM CE# 0
    eMUX_CSX1_7 = 7, // DBI CSX
    eMUX_CSX1_8 = 8, // SRAM CE# 1
    eMUX_CSX1_9 = 9, // SRAM CE# 2
    eMUX_CSX1_10 = 10, // SRAM CE# 3
    eMUX_CSX1_11 = 11, // NOR/SRAM Address bit 25 (A25)
    eMUX_CSX1_12 = 12, // NOR/SRAM Address bit 25 (A25)
    eMUX_CSX1_13 = 13, // NOR/SRAM Address bit 25 (A25)
    eMUX_CSX1_14 = 14, // NOR/SRAM Address bit 25 (A25)
    eMUX_CSX1_15 = 15, // NOR/SRAM Address bit 25 (A25)
  };
  
  enum class eMUX_CSX2 : uint32_t {
    eMUX_CSX2_0 = 0, // NOR/SRAM Address bit 26 (A26) in Non-ADMUX mode
    eMUX_CSX2_1 = 1, // SDRAM CS1
    eMUX_CSX2_2 = 2, // SDRAM CS2
    eMUX_CSX2_3 = 3, // SDRAM CS3
    eMUX_CSX2_4 = 4, // NAND CE#
    eMUX_CSX2_5 = 5, // NOR CE#
    eMUX_CSX2_6 = 6, // SRAM CE# 0
    eMUX_CSX2_7 = 7, // DBI CSX
    eMUX_CSX2_8 = 8, // SRAM CE# 1
    eMUX_CSX2_9 = 9, // SRAM CE# 2
    eMUX_CSX2_10 = 10, // SRAM CE# 3
    eMUX_CSX2_11 = 11, // NOR/SRAM Address bit 26 (A26)
    eMUX_CSX2_12 = 12, // NOR/SRAM Address bit 26 (A26)
    eMUX_CSX2_13 = 13, // NOR/SRAM Address bit 26 (A26)
    eMUX_CSX2_14 = 14, // NOR/SRAM Address bit 26 (A26)
    eMUX_CSX2_15 = 15, // NOR/SRAM Address bit 26 (A26)
  };
  
  enum class eMUX_CSX3 : uint32_t {
    eMUX_CSX3_0 = 0, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    eMUX_CSX3_1 = 1, // SDRAM CS1
    eMUX_CSX3_2 = 2, // SDRAM CS2
    eMUX_CSX3_3 = 3, // SDRAM CS3
    eMUX_CSX3_4 = 4, // NAND CE#
    eMUX_CSX3_5 = 5, // NOR CE#
    eMUX_CSX3_6 = 6, // SRAM CE# 0
    eMUX_CSX3_7 = 7, // DBI CSX
    eMUX_CSX3_8 = 8, // SRAM CE# 1
    eMUX_CSX3_9 = 9, // SRAM CE# 2
    eMUX_CSX3_10 = 10, // SRAM CE# 3
    eMUX_CSX3_11 = 11, // NOR/SRAM Address bit 27 (A27)
    eMUX_CSX3_12 = 12, // NOR/SRAM Address bit 27 (A27)
    eMUX_CSX3_13 = 13, // NOR/SRAM Address bit 27 (A27)
    eMUX_CSX3_14 = 14, // NOR/SRAM Address bit 27 (A27)
    eMUX_CSX3_15 = 15, // NOR/SRAM Address bit 27 (A27)
  };
  
  enum class eMUX_RDY : uint32_t {
    eMUX_RDY_0 = 0, // NAND R/B# input
    eMUX_RDY_1 = 1, // SDRAM CS1
    eMUX_RDY_2 = 2, // SDRAM CS2
    eMUX_RDY_3 = 3, // SDRAM CS3
    eMUX_RDY_4 = 4, // NOR/SRAM Address bit 27 (A27) in Non-ADMUX mode
    eMUX_RDY_5 = 5, // NOR CE#
    eMUX_RDY_6 = 6, // SRAM CE# 0
    eMUX_RDY_7 = 7, // DBI CSX
    eMUX_RDY_8 = 8, // SRAM CE# 1
    eMUX_RDY_9 = 9, // SRAM CE# 2
    eMUX_RDY_10 = 10, // SRAM CE# 3
    eMUX_RDY_11 = 11, // NOR/SRAM Address bit 27
    eMUX_RDY_12 = 12, // NOR/SRAM Address bit 27
    eMUX_RDY_13 = 13, // NOR/SRAM Address bit 27
    eMUX_RDY_14 = 14, // NOR/SRAM Address bit 27
    eMUX_RDY_15 = 15, // NOR/SRAM Address bit 27
  };
  
  enum class eMUX_CLKX0 : uint32_t {
    eMUX_CLKX0_0 = 0, // Keep low
    eMUX_CLKX0_1 = 1, // NOR clock
    eMUX_CLKX0_2 = 2, // SRAM clock
    eMUX_CLKX0_3 = 3, // NOR and SRAM clock, suitable for Multi-Chip Product package
  };
  
  enum class eMUX_CLKX1 : uint32_t {
    eMUX_CLKX1_0 = 0, // Keep low
    eMUX_CLKX1_1 = 1, // NOR clock
    eMUX_CLKX1_2 = 2, // SRAM clock
    eMUX_CLKX1_3 = 3, // NOR and SRAM clock, suitable for Multi-Chip Product package
  };
  
  enum class eCLKX0_AO : uint32_t {
    eCLKX0_AO_0 = 0, // SEMC_CLKX0 is controlled by MUX_CLKX0
    eCLKX0_AO_1 = 1, // SEMC_CLKX0 is always on
  };
  
  enum class eCLKX1_AO : uint32_t {
    eCLKX1_AO_0 = 0, // SEMC_CLKX1 is controlled by MUX_CLKX1
    eCLKX1_AO_1 = 1, // SEMC_CLKX1 is always on
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
    uint32_t _reserved_end : 2;
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
    uint32_t _reserved_end : 8;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eDLLEN_0 = 0, // DLL calibration is disabled.
    eDLLEN_1 = 1, // DLL calibration is enabled.
  };
  
  enum class eDLLRESET : uint32_t {
    eDLLRESET_0 = 0, // DLL is not reset.
    eDLLRESET_1 = 1, // DLL is reset.
  };
  
  enum class eOVRDEN : uint32_t {
    eOVRDEN_0 = 0, // The delay cell number is not overridden.
    eOVRDEN_1 = 1, // The delay cell number is overridden.
  };
  
  // Bit field definition.
  struct {
    eDLLEN DLLEN : 1;
    eDLLRESET DLLRESET : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SLVDLYTARGET : 4;
    uint32_t _reserved_3 : 1;
    eOVRDEN OVRDEN : 1;
    uint32_t OVRDVAL : 6;
    uint32_t _reserved_end : 17;
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
    eIPCMDDONEEN_0 = 0, // Interrupt is disabled
    eIPCMDDONEEN_1 = 1, // Interrupt is enabled
  };
  
  enum class eIPCMDERREN : uint32_t {
    eIPCMDERREN_0 = 0, // Interrupt is disabled
    eIPCMDERREN_1 = 1, // Interrupt is enabled
  };
  
  enum class eAXICMDERREN : uint32_t {
    eAXICMDERREN_0 = 0, // Interrupt is disabled
    eAXICMDERREN_1 = 1, // Interrupt is enabled
  };
  
  enum class eAXIBUSERREN : uint32_t {
    eAXIBUSERREN_0 = 0, // Interrupt is disabled
    eAXIBUSERREN_1 = 1, // Interrupt is enabled
  };
  
  enum class eNDPAGEENDEN : uint32_t {
    eNDPAGEENDEN_0 = 0, // Interrupt is disabled
    eNDPAGEENDEN_1 = 1, // Interrupt is enabled
  };
  
  enum class eNDNOPENDEN : uint32_t {
    eNDNOPENDEN_0 = 0, // Interrupt is disabled
    eNDNOPENDEN_1 = 1, // Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    eIPCMDDONEEN IPCMDDONEEN : 1;
    eIPCMDERREN IPCMDERREN : 1;
    eAXICMDERREN AXICMDERREN : 1;
    eAXIBUSERREN AXIBUSERREN : 1;
    eNDPAGEENDEN NDPAGEENDEN : 1;
    eNDNOPENDEN NDNOPENDEN : 1;
    uint32_t _reserved_end : 26;
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
    eIPCMDDONE_0 = 0, // IP command is not done.
    eIPCMDDONE_1 = 1, // IP command is done.
  };
  
  enum class eIPCMDERR : uint32_t {
    eIPCMDERR_0 = 0, // No IP command error.
    eIPCMDERR_1 = 1, // IP command error occurs.
  };
  
  enum class eAXICMDERR : uint32_t {
    eAXICMDERR_0 = 0, // No AXI command error.
    eAXICMDERR_1 = 1, // AXI command error occurs.
  };
  
  enum class eAXIBUSERR : uint32_t {
    eAXIBUSERR_0 = 0, // No AXI bus error.
    eAXIBUSERR_1 = 1, // AXI bus error occurs.
  };
  
  enum class eNDPAGEEND : uint32_t {
    eNDPAGEEND_0 = 0, // The last address of main space in the NAND is not written by AXI command.
    eNDPAGEEND_1 = 1, // The last address of main space in the NAND is written by AXI command.
  };
  
  enum class eNDNOPEND : uint32_t {
    eNDNOPEND_0 = 0, // At least one NAND AXI write transaction is pending or no NAND write transaction is sent to the queue.
    eNDNOPEND_1 = 1, // All NAND AXI write pending transactions are finished.
  };
  
  // Bit field definition.
  struct {
    eIPCMDDONE IPCMDDONE : 1;
    eIPCMDERR IPCMDERR : 1;
    eAXICMDERR AXICMDERR : 1;
    eAXIBUSERR AXIBUSERR : 1;
    eNDPAGEEND NDPAGEEND : 1;
    eNDNOPEND NDNOPEND : 1;
    uint32_t _reserved_end : 26;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
    ePS_2 = 2, // 32bit
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 8
    eBL_5 = 5, // 8
    eBL_6 = 6, // 8
    eBL_7 = 7, // 8
  };
  
  enum class eCOL8 : uint32_t {
    eCOL8_0 = 0, // Column address bit number is decided by COL field.
    eCOL8_1 = 1, // Column address bit number is 8. COL field is ignored.
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 12
    eCOL_1 = 1, // 11
    eCOL_2 = 2, // 10
    eCOL_3 = 3, // 9
  };
  
  enum class eCL : uint32_t {
    eCL_0 = 0, // 1
    eCL_1 = 1, // 1
    eCL_2 = 2, // 2
    eCL_3 = 3, // 3
  };
  
  enum class eBANK2 : uint32_t {
    eBANK2_0 = 0, // SDRAM device has 4 banks.
    eBANK2_1 = 1, // SDRAM device has 2 banks.
  };
  
  // Bit field definition.
  struct {
    ePS PS : 2;
    uint32_t _reserved_1 : 2;
    eBL BL : 3;
    eCOL8 COL8 : 1;
    eCOL COL : 2;
    eCL CL : 2;
    uint32_t _reserved_5 : 2;
    eBANK2 BANK2 : 1;
    uint32_t _reserved_end : 17;
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
    uint32_t _reserved_end : 8;
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
    eITO_0 = 0, // IDLE timeout period is 256*Prescale period.
    eITO_1 = 1, // IDLE timeout period is ITO*Prescale period.
    eITO_2 = 2, // IDLE timeout period is ITO*Prescale period.
    eITO_3 = 3, // IDLE timeout period is ITO*Prescale period.
    eITO_4 = 4, // IDLE timeout period is ITO*Prescale period.
    eITO_5 = 5, // IDLE timeout period is ITO*Prescale period.
    eITO_6 = 6, // IDLE timeout period is ITO*Prescale period.
    eITO_7 = 7, // IDLE timeout period is ITO*Prescale period.
    eITO_8 = 8, // IDLE timeout period is ITO*Prescale period.
    eITO_9 = 9, // IDLE timeout period is ITO*Prescale period.
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
    eREN_0 = 0, // The SEMC does not send AUTO REFRESH command automatically
    eREN_1 = 1, // The SEMC sends AUTO REFRESH command automatically
  };
  
  enum class eREBL : uint32_t {
    eREBL_0 = 0, // 1
    eREBL_1 = 1, // 2
    eREBL_2 = 2, // 3
    eREBL_3 = 3, // 4
    eREBL_4 = 4, // 5
    eREBL_5 = 5, // 6
    eREBL_6 = 6, // 7
    eREBL_7 = 7, // 8
  };
  
  enum class ePRESCALE : uint32_t {
    ePRESCALE_0 = 0, // (256*16+1) clock cycles
    ePRESCALE_1 = 1, // (PRESCALE*16+1) clock cycles
    ePRESCALE_2 = 2, // (PRESCALE*16+1) clock cycles
    ePRESCALE_3 = 3, // (PRESCALE*16+1) clock cycles
    ePRESCALE_4 = 4, // (PRESCALE*16+1) clock cycles
    ePRESCALE_5 = 5, // (PRESCALE*16+1) clock cycles
    ePRESCALE_6 = 6, // (PRESCALE*16+1) clock cycles
    ePRESCALE_7 = 7, // (PRESCALE*16+1) clock cycles
    ePRESCALE_8 = 8, // (PRESCALE*16+1) clock cycles
    ePRESCALE_9 = 9, // (PRESCALE*16+1) clock cycles
  };
  
  enum class eRT : uint32_t {
    eRT_0 = 0, // (256+1)*(Prescaler period)
    eRT_1 = 1, // (RT+1)*(Prescaler period)
    eRT_2 = 2, // (RT+1)*(Prescaler period)
    eRT_3 = 3, // (RT+1)*(Prescaler period)
    eRT_4 = 4, // (RT+1)*(Prescaler period)
    eRT_5 = 5, // (RT+1)*(Prescaler period)
    eRT_6 = 6, // (RT+1)*(Prescaler period)
    eRT_7 = 7, // (RT+1)*(Prescaler period)
    eRT_8 = 8, // (RT+1)*(Prescaler period)
    eRT_9 = 9, // (RT+1)*(Prescaler period)
  };
  
  enum class eUT : uint32_t {
    eUT_0 = 0, // 256*(Prescaler period)
    eUT_1 = 1, // UT*(Prescaler period)
    eUT_2 = 2, // UT*(Prescaler period)
    eUT_3 = 3, // UT*(Prescaler period)
    eUT_4 = 4, // UT*(Prescaler period)
    eUT_5 = 5, // UT*(Prescaler period)
    eUT_6 = 6, // UT*(Prescaler period)
    eUT_7 = 7, // UT*(Prescaler period)
    eUT_8 = 8, // UT*(Prescaler period)
    eUT_9 = 9, // UT*(Prescaler period)
  };
  
  // Bit field definition.
  struct {
    eREN REN : 1;
    eREBL REBL : 3;
    uint32_t _reserved_2 : 4;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    eSYNCEN_0 = 0, // Asynchronous mode is enabled.
    eSYNCEN_1 = 1, // Synchronous mode is enabled.
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 16
    eBL_5 = 5, // 32
    eBL_6 = 6, // 64
    eBL_7 = 7, // 64
  };
  
  enum class eEDO : uint32_t {
    eEDO_0 = 0, // EDO mode disabled
    eEDO_1 = 1, // EDO mode enabled
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 16
    eCOL_1 = 1, // 15
    eCOL_2 = 2, // 14
    eCOL_3 = 3, // 13
    eCOL_4 = 4, // 12
    eCOL_5 = 5, // 11
    eCOL_6 = 6, // 10
    eCOL_7 = 7, // 9
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_2 : 2;
    eBL BL : 3;
    eEDO EDO : 1;
    eCOL COL : 3;
    uint32_t _reserved_end : 21;
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
    uint32_t _reserved_end : 2;
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
    uint32_t _reserved_4 : 12;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    eSYNCEN_0 = 0, // Asynchronous mode is enabled.
    eSYNCEN_1 = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 16
    eBL_5 = 5, // 32
    eBL_6 = 6, // 64
    eBL_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eAM_0 = 0, // Address/Data MUX mode (ADMUX)
    eAM_1 = 1, // Advanced Address/Data MUX mode (AADM)
    eAM_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    eAM_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eADVP_0 = 0, // ADV# is active low.
    eADVP_1 = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    eADVH_0 = 0, // ADV# is high during address hold state.
    eADVH_1 = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 12 Bits
    eCOL_1 = 1, // 11 Bits
    eCOL_2 = 2, // 10 Bits
    eCOL_3 = 3, // 9 Bits
    eCOL_4 = 4, // 8 Bits
    eCOL_5 = 5, // 7 Bits
    eCOL_6 = 6, // 6 Bits
    eCOL_7 = 7, // 5 Bits
    eCOL_8 = 8, // 4 Bits
    eCOL_9 = 9, // 3 Bits
    eCOL_10 = 10, // 2 Bits
    eCOL_11 = 11, // 12 Bits
    eCOL_12 = 12, // 12 Bits
    eCOL_13 = 13, // 12 Bits
    eCOL_14 = 14, // 12 Bits
    eCOL_15 = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    uint32_t _reserved_2 : 2;
    eBL BL : 3;
    uint32_t _reserved_3 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_end : 16;
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
    uint32_t _reserved_end : 24;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    eSYNCEN_0 = 0, // Asynchronous mode is enabled.
    eSYNCEN_1 = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eWAITEN : uint32_t {
    eWAITEN_0 = 0, // The SEMC does not monitor wait pin.
    eWAITEN_1 = 1, // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
  };
  
  enum class eWAITSP : uint32_t {
    eWAITSP_0 = 0, // Wait pin is directly used by the SEMC.
    eWAITSP_1 = 1, // Wait pin is sampled by internal clock before it is used.
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 16
    eBL_5 = 5, // 32
    eBL_6 = 6, // 64
    eBL_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eAM_0 = 0, // Address/Data MUX mode (ADMUX)
    eAM_1 = 1, // Advanced Address/Data MUX mode (AADM)
    eAM_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    eAM_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eADVP_0 = 0, // ADV# is active low.
    eADVP_1 = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    eADVH_0 = 0, // ADV# is high during address hold state.
    eADVH_1 = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 12 Bits
    eCOL_1 = 1, // 11 Bits
    eCOL_2 = 2, // 10 Bits
    eCOL_3 = 3, // 9 Bits
    eCOL_4 = 4, // 8 Bits
    eCOL_5 = 5, // 7 Bits
    eCOL_6 = 6, // 6 Bits
    eCOL_7 = 7, // 5 Bits
    eCOL_8 = 8, // 4 Bits
    eCOL_9 = 9, // 3 Bits
    eCOL_10 = 10, // 2 Bits
    eCOL_11 = 11, // 12 Bits
    eCOL_12 = 12, // 12 Bits
    eCOL_13 = 13, // 12 Bits
    eCOL_14 = 14, // 12 Bits
    eCOL_15 = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    eWAITEN WAITEN : 1;
    eWAITSP WAITSP : 1;
    eBL BL : 3;
    uint32_t _reserved_5 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_end : 16;
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
    uint32_t _reserved_end : 32;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 16
    eBL_5 = 5, // 32
    eBL_6 = 6, // 64
    eBL_7 = 7, // 64
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 12 Bits
    eCOL_1 = 1, // 11 Bits
    eCOL_2 = 2, // 10 Bits
    eCOL_3 = 3, // 9 Bits
    eCOL_4 = 4, // 8 Bits
    eCOL_5 = 5, // 7 Bits
    eCOL_6 = 6, // 6 Bits
    eCOL_7 = 7, // 5 Bits
    eCOL_8 = 8, // 4 Bits
    eCOL_9 = 9, // 3 Bits
    eCOL_10 = 10, // 2 Bits
    eCOL_11 = 11, // 12 Bits
    eCOL_12 = 12, // 12 Bits
    eCOL_13 = 13, // 12 Bits
    eCOL_14 = 14, // 12 Bits
    eCOL_15 = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    uint32_t _reserved_1 : 3;
    eBL BL : 3;
    uint32_t _reserved_2 : 5;
    eCOL COL : 4;
    uint32_t _reserved_end : 16;
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
    uint32_t _reserved_5 : 1;
    uint32_t REH : 7;
    uint32_t _reserved_end : 1;
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
    uint32_t _reserved_end : 28;
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
    eDATSZ_0 = 0, // 4
    eDATSZ_1 = 1, // 1
    eDATSZ_2 = 2, // 2
    eDATSZ_3 = 3, // 3
    eDATSZ_4 = 4, // 4
    eDATSZ_5 = 5, // 4
    eDATSZ_6 = 6, // 4
    eDATSZ_7 = 7, // 4
  };
  
  // Bit field definition.
  struct {
    eDATSZ DATSZ : 3;
    uint32_t _reserved_1 : 5;
    uint32_t NAND_EXT_ADDR : 8;
    uint32_t _reserved_end : 16;
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
    eBM0_0 = 0, // Byte is unmasked
    eBM0_1 = 1, // Byte is masked
  };
  
  enum class eBM1 : uint32_t {
    eBM1_0 = 0, // Byte is unmasked
    eBM1_1 = 1, // Byte is masked
  };
  
  enum class eBM2 : uint32_t {
    eBM2_0 = 0, // Byte is unmasked
    eBM2_1 = 1, // Byte is masked
  };
  
  enum class eBM3 : uint32_t {
    eBM3_0 = 0, // Byte is unmasked
    eBM3_1 = 1, // Byte is masked
  };
  
  // Bit field definition.
  struct {
    eBM0 BM0 : 1;
    eBM1 BM1 : 1;
    eBM2 BM2 : 1;
    eBM3 BM3 : 1;
    uint32_t _reserved_end : 28;
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
    eNARDY_0 = 0, // NAND device is not ready
    eNARDY_1 = 1, // NAND device is ready
  };
  
  // Bit field definition.
  struct {
    uint32_t IDLE : 1;
    eNARDY NARDY : 1;
    uint32_t _reserved_end : 30;
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
    uint32_t _reserved_end : 32;
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
    eNDWRPEND_0 = 0, // No pending
    eNDWRPEND_1 = 1, // Pending
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    eNDWRPEND NDWRPEND : 1;
    uint32_t _reserved_end : 28;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    eSLVLOCK_0 = 0, // Slave delay line is not locked.
    eSLVLOCK_1 = 1, // Slave delay line is locked.
  };
  
  enum class eREFLOCK : uint32_t {
    eREFLOCK_0 = 0, // Reference delay line is not locked.
    eREFLOCK_1 = 1, // Reference delay line is locked.
  };
  
  // Bit field definition.
  struct {
    eSLVLOCK SLVLOCK : 1;
    eREFLOCK REFLOCK : 1;
    uint32_t SLVSEL : 6;
    uint32_t REFSEL : 6;
    uint32_t _reserved_end : 18;
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
    uint32_t _reserved_end : 32;
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
    uint32_t _reserved_end : 32;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    eVLD_0 = 0, // The memory is invalid, can not be accessed.
    eVLD_1 = 1, // The memory is valid, can be accessed.
  };
  
  enum class eMS : uint32_t {
    eMS_0 = 0, // 4KB
    eMS_1 = 1, // 8KB
    eMS_2 = 2, // 16KB
    eMS_3 = 3, // 32KB
    eMS_4 = 4, // 64KB
    eMS_5 = 5, // 128KB
    eMS_6 = 6, // 256KB
    eMS_7 = 7, // 512KB
    eMS_8 = 8, // 1MB
    eMS_9 = 9, // 2MB
    eMS_10 = 10, // 4MB
    eMS_11 = 11, // 8MB
    eMS_12 = 12, // 16MB
    eMS_13 = 13, // 32MB
    eMS_14 = 14, // 64MB
    eMS_15 = 15, // 128MB
    eMS_16 = 16, // 256MB
    eMS_17 = 17, // 512MB
    eMS_18 = 18, // 1GB
    eMS_19 = 19, // 2GB
    eMS_20 = 20, // 4GB
    eMS_21 = 21, // 4GB
    eMS_22 = 22, // 4GB
    eMS_23 = 23, // 4GB
    eMS_24 = 24, // 4GB
    eMS_25 = 25, // 4GB
    eMS_26 = 26, // 4GB
    eMS_27 = 27, // 4GB
    eMS_28 = 28, // 4GB
    eMS_29 = 29, // 4GB
    eMS_30 = 30, // 4GB
    eMS_31 = 31, // 4GB
  };
  
  // Bit field definition.
  struct {
    eVLD VLD : 1;
    eMS MS : 5;
    uint32_t _reserved_2 : 6;
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
    ePS_0 = 0, // 8bit
    ePS_1 = 1, // 16bit
  };
  
  enum class eSYNCEN : uint32_t {
    eSYNCEN_0 = 0, // Asynchronous mode is enabled.
    eSYNCEN_1 = 1, // Synchronous mode is enabled. Only fixed latency mode is supported.
  };
  
  enum class eWAITEN : uint32_t {
    eWAITEN_0 = 0, // The SEMC does not monitor wait pin.
    eWAITEN_1 = 1, // The SEMC monitors wait pin. The SEMC does not transfer/receive data when wait pin is asserted.
  };
  
  enum class eWAITSP : uint32_t {
    eWAITSP_0 = 0, // Wait pin is directly used by the SEMC.
    eWAITSP_1 = 1, // Wait pin is sampled by internal clock before it is used.
  };
  
  enum class eBL : uint32_t {
    eBL_0 = 0, // 1
    eBL_1 = 1, // 2
    eBL_2 = 2, // 4
    eBL_3 = 3, // 8
    eBL_4 = 4, // 16
    eBL_5 = 5, // 32
    eBL_6 = 6, // 64
    eBL_7 = 7, // 64
  };
  
  enum class eAM : uint32_t {
    eAM_0 = 0, // Address/Data MUX mode (ADMUX)
    eAM_1 = 1, // Advanced Address/Data MUX mode (AADM)
    eAM_2 = 2, // Address/Data non-MUX mode (Non-ADMUX)
    eAM_3 = 3, // Address/Data non-MUX mode (Non-ADMUX)
  };
  
  enum class eADVP : uint32_t {
    eADVP_0 = 0, // ADV# is active low.
    eADVP_1 = 1, // ADV# is active high.
  };
  
  enum class eADVH : uint32_t {
    eADVH_0 = 0, // ADV# is high during address hold state.
    eADVH_1 = 1, // ADV# is low during address hold state.
  };
  
  enum class eCOL : uint32_t {
    eCOL_0 = 0, // 12 Bits
    eCOL_1 = 1, // 11 Bits
    eCOL_2 = 2, // 10 Bits
    eCOL_3 = 3, // 9 Bits
    eCOL_4 = 4, // 8 Bits
    eCOL_5 = 5, // 7 Bits
    eCOL_6 = 6, // 6 Bits
    eCOL_7 = 7, // 5 Bits
    eCOL_8 = 8, // 4 Bits
    eCOL_9 = 9, // 3 Bits
    eCOL_10 = 10, // 2 Bits
    eCOL_11 = 11, // 12 Bits
    eCOL_12 = 12, // 12 Bits
    eCOL_13 = 13, // 12 Bits
    eCOL_14 = 14, // 12 Bits
    eCOL_15 = 15, // 12 Bits
  };
  
  // Bit field definition.
  struct {
    ePS PS : 1;
    eSYNCEN SYNCEN : 1;
    eWAITEN WAITEN : 1;
    eWAITSP WAITSP : 1;
    eBL BL : 3;
    uint32_t _reserved_5 : 1;
    eAM AM : 2;
    eADVP ADVP : 1;
    eADVH ADVH : 1;
    eCOL COL : 4;
    uint32_t _reserved_end : 16;
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
    eSDRAMEN_0 = 0, // Delay chain is not inserted.
    eSDRAMEN_1 = 1, // Delay chain is inserted.
  };
  
  enum class eNOREN : uint32_t {
    eNOREN_0 = 0, // Delay chain is not inserted.
    eNOREN_1 = 1, // Delay chain is inserted.
  };
  
  enum class eSRAM0EN : uint32_t {
    eSRAM0EN_0 = 0, // Delay chain is not inserted.
    eSRAM0EN_1 = 1, // Delay chain is inserted.
  };
  
  enum class eSRAMXEN : uint32_t {
    eSRAMXEN_0 = 0, // Delay chain is not inserted.
    eSRAMXEN_1 = 1, // Delay chain is inserted.
  };
  
  // Bit field definition.
  struct {
    eSDRAMEN SDRAMEN : 1;
    uint32_t SDRAMVAL : 5;
    uint32_t _reserved_2 : 2;
    eNOREN NOREN : 1;
    uint32_t NORVAL : 5;
    uint32_t _reserved_4 : 2;
    eSRAM0EN SRAM0EN : 1;
    uint32_t SRAM0VAL : 5;
    uint32_t _reserved_6 : 2;
    eSRAMXEN SRAMXEN : 1;
    uint32_t SRAMXVAL : 5;
    uint32_t _reserved_end : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCCR &Instance() { return *reinterpret_cast<volatile DCCR*>(0x400D4150); }
};


} // namespace nSEMC