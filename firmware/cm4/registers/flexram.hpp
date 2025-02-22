#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // FLEXRAM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nFLEXRAM {


// TCM CRTL Register
//
union TCM_CTRL {
  
  enum class eTCM_WWAIT_EN : uint32_t {
    eTCM_WWAIT_EN_0 = 0, // TCM write fast mode: Write RAM accesses are expected to be finished in 1-cycle.
    eTCM_WWAIT_EN_1 = 1, // TCM write wait mode: Write RAM accesses are expected to be finished in 2-cycles.
  };
  
  enum class eTCM_RWAIT_EN : uint32_t {
    eTCM_RWAIT_EN_0 = 0, // TCM read fast mode: Read RAM accesses are expected to be finished in 1-cycle.
    eTCM_RWAIT_EN_1 = 1, // TCM read wait mode: Read RAM accesses are expected to be finished in 2-cycles.
  };
  
  // Bit field definition.
  struct {
    eTCM_WWAIT_EN TCM_WWAIT_EN : 1;
    eTCM_RWAIT_EN TCM_RWAIT_EN : 1;
    uint32_t FORCE_CLK_ON : 1;
    uint32_t Reserved : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCM_CTRL &Instance() { return *reinterpret_cast<volatile TCM_CTRL*>(0x40028000); }
};

// OCRAM Magic Address Register
//
union OCRAM_MAGIC_ADDR {
  
  enum class eOCRAM_WR_RD_SEL : uint32_t {
    eOCRAM_WR_RD_SEL_0 = 0, // When OCRAM read access hits magic address, it will generate interrupt.
    eOCRAM_WR_RD_SEL_1 = 1, // When OCRAM write access hits magic address, it will generate interrupt.
  };
  
  // Bit field definition.
  struct {
    eOCRAM_WR_RD_SEL OCRAM_WR_RD_SEL : 1;
    uint32_t OCRAM_MAGIC_ADDR : 17;
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_MAGIC_ADDR*>(0x40028004); }
};

// DTCM Magic Address Register
//
union DTCM_MAGIC_ADDR {
  
  enum class eDTCM_WR_RD_SEL : uint32_t {
    eDTCM_WR_RD_SEL_0 = 0, // When DTCM read access hits magic address, it will generate interrupt.
    eDTCM_WR_RD_SEL_1 = 1, // When DTCM write access hits magic address, it will generate interrupt.
  };
  
  // Bit field definition.
  struct {
    eDTCM_WR_RD_SEL DTCM_WR_RD_SEL : 1;
    uint32_t DTCM_MAGIC_ADDR : 16;
    uint32_t Reserved : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DTCM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DTCM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile DTCM_MAGIC_ADDR*>(0x40028008); }
};

// ITCM Magic Address Register
//
union ITCM_MAGIC_ADDR {
  
  enum class eITCM_WR_RD_SEL : uint32_t {
    eITCM_WR_RD_SEL_0 = 0, // When ITCM read access hits magic address, it will generate interrupt.
    eITCM_WR_RD_SEL_1 = 1, // When ITCM write access hits magic address, it will generate interrupt.
  };
  
  // Bit field definition.
  struct {
    eITCM_WR_RD_SEL ITCM_WR_RD_SEL : 1;
    uint32_t ITCM_MAGIC_ADDR : 16;
    uint32_t Reserved : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_MAGIC_ADDR*>(0x4002800C); }
};

// Interrupt Status Register
//
union INT_STATUS {
  
  enum class eITCM_MAM_STATUS : uint32_t {
    eITCM_MAM_STATUS_0 = 0, // ITCM did not access magic address.
    eITCM_MAM_STATUS_1 = 1, // ITCM accessed magic address.
  };
  
  enum class eDTCM_MAM_STATUS : uint32_t {
    eDTCM_MAM_STATUS_0 = 0, // DTCM did not access magic address.
    eDTCM_MAM_STATUS_1 = 1, // DTCM accessed magic address.
  };
  
  enum class eOCRAM_MAM_STATUS : uint32_t {
    eOCRAM_MAM_STATUS_0 = 0, // OCRAM did not access magic address.
    eOCRAM_MAM_STATUS_1 = 1, // OCRAM accessed magic address.
  };
  
  enum class eITCM_ERR_STATUS : uint32_t {
    eITCM_ERR_STATUS_0 = 0, // ITCM access error does not happen
    eITCM_ERR_STATUS_1 = 1, // ITCM access error happens.
  };
  
  enum class eDTCM_ERR_STATUS : uint32_t {
    eDTCM_ERR_STATUS_0 = 0, // DTCM access error does not happen
    eDTCM_ERR_STATUS_1 = 1, // DTCM access error happens.
  };
  
  enum class eOCRAM_ERR_STATUS : uint32_t {
    eOCRAM_ERR_STATUS_0 = 0, // OCRAM access error does not happen
    eOCRAM_ERR_STATUS_1 = 1, // OCRAM access error happens.
  };
  
  enum class eOCRAM_ECC_ERRM_INT : uint32_t {
    eOCRAM_ECC_ERRM_INT_0 = 0, // OCRAM multi-bit ECC error does not happen
    eOCRAM_ECC_ERRM_INT_1 = 1, // OCRAM multi-bit ECC error happens.
  };
  
  enum class eOCRAM_ECC_ERRS_INT : uint32_t {
    eOCRAM_ECC_ERRS_INT_0 = 0, // OCRAM single-bit ECC error does not happen
    eOCRAM_ECC_ERRS_INT_1 = 1, // OCRAM single-bit ECC error happens.
  };
  
  enum class eITCM_ECC_ERRM_INT : uint32_t {
    eITCM_ECC_ERRM_INT_0 = 0, // ITCM multi-bit ECC error does not happen
    eITCM_ECC_ERRM_INT_1 = 1, // ITCM multi-bit ECC error happens.
  };
  
  enum class eITCM_ECC_ERRS_INT : uint32_t {
    eITCM_ECC_ERRS_INT_0 = 0, // ITCM single-bit ECC error does not happen
    eITCM_ECC_ERRS_INT_1 = 1, // ITCM single-bit ECC error happens.
  };
  
  enum class eD0TCM_ECC_ERRM_INT : uint32_t {
    eD0TCM_ECC_ERRM_INT_0 = 0, // D0TCM multi-bit ECC error does not happen
    eD0TCM_ECC_ERRM_INT_1 = 1, // D0TCM multi-bit ECC error happens.
  };
  
  enum class eD0TCM_ECC_ERRS_INT : uint32_t {
    eD0TCM_ECC_ERRS_INT_0 = 0, // D0TCM single-bit ECC error does not happen
    eD0TCM_ECC_ERRS_INT_1 = 1, // D0TCM single-bit ECC error happens.
  };
  
  enum class eD1TCM_ECC_ERRM_INT : uint32_t {
    eD1TCM_ECC_ERRM_INT_0 = 0, // D1TCM multi-bit ECC error does not happen
    eD1TCM_ECC_ERRM_INT_1 = 1, // D1TCM multi-bit ECC error happens.
  };
  
  enum class eD1TCM_ECC_ERRS_INT : uint32_t {
    eD1TCM_ECC_ERRS_INT_0 = 0, // D1TCM single-bit ECC error does not happen
    eD1TCM_ECC_ERRS_INT_1 = 1, // D1TCM single-bit ECC error happens.
  };
  
  enum class eITCM_PARTIAL_WR_INT_S : uint32_t {
    eITCM_PARTIAL_WR_INT_S_0 = 0, // ITCM Partial Write does not happen
    eITCM_PARTIAL_WR_INT_S_1 = 1, // ITCM Partial Write happens.
  };
  
  enum class eD0TCM_PARTIAL_WR_INT_S : uint32_t {
    eD0TCM_PARTIAL_WR_INT_S_0 = 0, // D0TCM Partial Write does not happen
    eD0TCM_PARTIAL_WR_INT_S_1 = 1, // D0TCM Partial Write happens.
  };
  
  enum class eD1TCM_PARTIAL_WR_INT_S : uint32_t {
    eD1TCM_PARTIAL_WR_INT_S_0 = 0, // D1TCM Partial Write does not happen
    eD1TCM_PARTIAL_WR_INT_S_1 = 1, // D1TCM Partial Write happens.
  };
  
  enum class eOCRAM_PARTIAL_WR_INT_S : uint32_t {
    eOCRAM_PARTIAL_WR_INT_S_0 = 0, // OCRAM Partial Write does not happen
    eOCRAM_PARTIAL_WR_INT_S_1 = 1, // OCRAM Partial Write happens.
  };
  
  // Bit field definition.
  struct {
    eITCM_MAM_STATUS ITCM_MAM_STATUS : 1;
    eDTCM_MAM_STATUS DTCM_MAM_STATUS : 1;
    eOCRAM_MAM_STATUS OCRAM_MAM_STATUS : 1;
    eITCM_ERR_STATUS ITCM_ERR_STATUS : 1;
    eDTCM_ERR_STATUS DTCM_ERR_STATUS : 1;
    eOCRAM_ERR_STATUS OCRAM_ERR_STATUS : 1;
    eOCRAM_ECC_ERRM_INT OCRAM_ECC_ERRM_INT : 1;
    eOCRAM_ECC_ERRS_INT OCRAM_ECC_ERRS_INT : 1;
    eITCM_ECC_ERRM_INT ITCM_ECC_ERRM_INT : 1;
    eITCM_ECC_ERRS_INT ITCM_ECC_ERRS_INT : 1;
    eD0TCM_ECC_ERRM_INT D0TCM_ECC_ERRM_INT : 1;
    eD0TCM_ECC_ERRS_INT D0TCM_ECC_ERRS_INT : 1;
    eD1TCM_ECC_ERRM_INT D1TCM_ECC_ERRM_INT : 1;
    eD1TCM_ECC_ERRS_INT D1TCM_ECC_ERRS_INT : 1;
    eITCM_PARTIAL_WR_INT_S ITCM_PARTIAL_WR_INT_S : 1;
    eD0TCM_PARTIAL_WR_INT_S D0TCM_PARTIAL_WR_INT_S : 1;
    eD1TCM_PARTIAL_WR_INT_S D1TCM_PARTIAL_WR_INT_S : 1;
    eOCRAM_PARTIAL_WR_INT_S OCRAM_PARTIAL_WR_INT_S : 1;
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS &Instance() { return *reinterpret_cast<volatile INT_STATUS*>(0x40028010); }
};

// Interrupt Status Enable Register
//
union INT_STAT_EN {
  
  enum class eITCM_MAM_STAT_EN : uint32_t {
    eITCM_MAM_STAT_EN_0 = 0, // Masked
    eITCM_MAM_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eDTCM_MAM_STAT_EN : uint32_t {
    eDTCM_MAM_STAT_EN_0 = 0, // Masked
    eDTCM_MAM_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_MAM_STAT_EN : uint32_t {
    eOCRAM_MAM_STAT_EN_0 = 0, // Masked
    eOCRAM_MAM_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERR_STAT_EN : uint32_t {
    eITCM_ERR_STAT_EN_0 = 0, // Masked
    eITCM_ERR_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eDTCM_ERR_STAT_EN : uint32_t {
    eDTCM_ERR_STAT_EN_0 = 0, // Masked
    eDTCM_ERR_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERR_STAT_EN : uint32_t {
    eOCRAM_ERR_STAT_EN_0 = 0, // Masked
    eOCRAM_ERR_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERRM_INT_EN : uint32_t {
    eOCRAM_ERRM_INT_EN_0 = 0, // Masked
    eOCRAM_ERRM_INT_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERRS_INT_EN : uint32_t {
    eOCRAM_ERRS_INT_EN_0 = 0, // Masked
    eOCRAM_ERRS_INT_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERRM_INT_EN : uint32_t {
    eITCM_ERRM_INT_EN_0 = 0, // Masked
    eITCM_ERRM_INT_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERRS_INT_EN : uint32_t {
    eITCM_ERRS_INT_EN_0 = 0, // Masked
    eITCM_ERRS_INT_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_ERRM_INT_EN : uint32_t {
    eD0TCM_ERRM_INT_EN_0 = 0, // Masked
    eD0TCM_ERRM_INT_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_ERRS_INT_EN : uint32_t {
    eD0TCM_ERRS_INT_EN_0 = 0, // Masked
    eD0TCM_ERRS_INT_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_ERRM_INT_EN : uint32_t {
    eD1TCM_ERRM_INT_EN_0 = 0, // Masked
    eD1TCM_ERRM_INT_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_ERRS_INT_EN : uint32_t {
    eD1TCM_ERRS_INT_EN_0 = 0, // Masked
    eD1TCM_ERRS_INT_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_PARTIAL_WR_INT_S_EN : uint32_t {
    eITCM_PARTIAL_WR_INT_S_EN_0 = 0, // Masked
    eITCM_PARTIAL_WR_INT_S_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_PARTIAL_WR_INT_S_EN : uint32_t {
    eD0TCM_PARTIAL_WR_INT_S_EN_0 = 0, // Masked
    eD0TCM_PARTIAL_WR_INT_S_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_PARTIAL_WR_INT_S_EN : uint32_t {
    eD1TCM_PARTIAL_WR_INT_S_EN_0 = 0, // Masked
    eD1TCM_PARTIAL_WR_INT_S_EN_1 = 1, // Enbaled
  };
  
  enum class eOCRAM_PARTIAL_WR_INT_S_EN : uint32_t {
    eOCRAM_PARTIAL_WR_INT_S_EN_0 = 0, // Masked
    eOCRAM_PARTIAL_WR_INT_S_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eITCM_MAM_STAT_EN ITCM_MAM_STAT_EN : 1;
    eDTCM_MAM_STAT_EN DTCM_MAM_STAT_EN : 1;
    eOCRAM_MAM_STAT_EN OCRAM_MAM_STAT_EN : 1;
    eITCM_ERR_STAT_EN ITCM_ERR_STAT_EN : 1;
    eDTCM_ERR_STAT_EN DTCM_ERR_STAT_EN : 1;
    eOCRAM_ERR_STAT_EN OCRAM_ERR_STAT_EN : 1;
    eOCRAM_ERRM_INT_EN OCRAM_ERRM_INT_EN : 1;
    eOCRAM_ERRS_INT_EN OCRAM_ERRS_INT_EN : 1;
    eITCM_ERRM_INT_EN ITCM_ERRM_INT_EN : 1;
    eITCM_ERRS_INT_EN ITCM_ERRS_INT_EN : 1;
    eD0TCM_ERRM_INT_EN D0TCM_ERRM_INT_EN : 1;
    eD0TCM_ERRS_INT_EN D0TCM_ERRS_INT_EN : 1;
    eD1TCM_ERRM_INT_EN D1TCM_ERRM_INT_EN : 1;
    eD1TCM_ERRS_INT_EN D1TCM_ERRS_INT_EN : 1;
    eITCM_PARTIAL_WR_INT_S_EN ITCM_PARTIAL_WR_INT_S_EN : 1;
    eD0TCM_PARTIAL_WR_INT_S_EN D0TCM_PARTIAL_WR_INT_S_EN : 1;
    eD1TCM_PARTIAL_WR_INT_S_EN D1TCM_PARTIAL_WR_INT_S_EN : 1;
    eOCRAM_PARTIAL_WR_INT_S_EN OCRAM_PARTIAL_WR_INT_S_EN : 1;
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STAT_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STAT_EN &Instance() { return *reinterpret_cast<volatile INT_STAT_EN*>(0x40028014); }
};

// Interrupt Enable Register
//
union INT_SIG_EN {
  
  enum class eITCM_MAM_SIG_EN : uint32_t {
    eITCM_MAM_SIG_EN_0 = 0, // Masked
    eITCM_MAM_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eDTCM_MAM_SIG_EN : uint32_t {
    eDTCM_MAM_SIG_EN_0 = 0, // Masked
    eDTCM_MAM_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_MAM_SIG_EN : uint32_t {
    eOCRAM_MAM_SIG_EN_0 = 0, // Masked
    eOCRAM_MAM_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERR_SIG_EN : uint32_t {
    eITCM_ERR_SIG_EN_0 = 0, // Masked
    eITCM_ERR_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eDTCM_ERR_SIG_EN : uint32_t {
    eDTCM_ERR_SIG_EN_0 = 0, // Masked
    eDTCM_ERR_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERR_SIG_EN : uint32_t {
    eOCRAM_ERR_SIG_EN_0 = 0, // Masked
    eOCRAM_ERR_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERRM_INT_SIG_EN : uint32_t {
    eOCRAM_ERRM_INT_SIG_EN_0 = 0, // Masked
    eOCRAM_ERRM_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eOCRAM_ERRS_INT_SIG_EN : uint32_t {
    eOCRAM_ERRS_INT_SIG_EN_0 = 0, // Masked
    eOCRAM_ERRS_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERRM_INT_SIG_EN : uint32_t {
    eITCM_ERRM_INT_SIG_EN_0 = 0, // Masked
    eITCM_ERRM_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_ERRS_INT_SIG_EN : uint32_t {
    eITCM_ERRS_INT_SIG_EN_0 = 0, // Masked
    eITCM_ERRS_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_ERRM_INT_SIG_EN : uint32_t {
    eD0TCM_ERRM_INT_SIG_EN_0 = 0, // Masked
    eD0TCM_ERRM_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_ERRS_INT_SIG_EN : uint32_t {
    eD0TCM_ERRS_INT_SIG_EN_0 = 0, // Masked
    eD0TCM_ERRS_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_ERRM_INT_SIG_EN : uint32_t {
    eD1TCM_ERRM_INT_SIG_EN_0 = 0, // Masked
    eD1TCM_ERRM_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_ERRS_INT_SIG_EN : uint32_t {
    eD1TCM_ERRS_INT_SIG_EN_0 = 0, // Masked
    eD1TCM_ERRS_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eITCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    eITCM_PARTIAL_WR_INT_SIG_EN_0 = 0, // Masked
    eITCM_PARTIAL_WR_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD0TCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    eD0TCM_PARTIAL_WR_INT_SIG_EN_0 = 0, // Masked
    eD0TCM_PARTIAL_WR_INT_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eD1TCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    eD1TCM_PARTIAL_WR_INT_SIG_EN_0 = 0, // Masked
    eD1TCM_PARTIAL_WR_INT_SIG_EN_1 = 1, // Enbaled
  };
  
  enum class eOCRAM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    eOCRAM_PARTIAL_WR_INT_SIG_EN_0 = 0, // Masked
    eOCRAM_PARTIAL_WR_INT_SIG_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eITCM_MAM_SIG_EN ITCM_MAM_SIG_EN : 1;
    eDTCM_MAM_SIG_EN DTCM_MAM_SIG_EN : 1;
    eOCRAM_MAM_SIG_EN OCRAM_MAM_SIG_EN : 1;
    eITCM_ERR_SIG_EN ITCM_ERR_SIG_EN : 1;
    eDTCM_ERR_SIG_EN DTCM_ERR_SIG_EN : 1;
    eOCRAM_ERR_SIG_EN OCRAM_ERR_SIG_EN : 1;
    eOCRAM_ERRM_INT_SIG_EN OCRAM_ERRM_INT_SIG_EN : 1;
    eOCRAM_ERRS_INT_SIG_EN OCRAM_ERRS_INT_SIG_EN : 1;
    eITCM_ERRM_INT_SIG_EN ITCM_ERRM_INT_SIG_EN : 1;
    eITCM_ERRS_INT_SIG_EN ITCM_ERRS_INT_SIG_EN : 1;
    eD0TCM_ERRM_INT_SIG_EN D0TCM_ERRM_INT_SIG_EN : 1;
    eD0TCM_ERRS_INT_SIG_EN D0TCM_ERRS_INT_SIG_EN : 1;
    eD1TCM_ERRM_INT_SIG_EN D1TCM_ERRM_INT_SIG_EN : 1;
    eD1TCM_ERRS_INT_SIG_EN D1TCM_ERRS_INT_SIG_EN : 1;
    eITCM_PARTIAL_WR_INT_SIG_EN ITCM_PARTIAL_WR_INT_SIG_EN : 1;
    eD0TCM_PARTIAL_WR_INT_SIG_EN D0TCM_PARTIAL_WR_INT_SIG_EN : 1;
    eD1TCM_PARTIAL_WR_INT_SIG_EN D1TCM_PARTIAL_WR_INT_SIG_EN : 1;
    eOCRAM_PARTIAL_WR_INT_SIG_EN OCRAM_PARTIAL_WR_INT_SIG_EN : 1;
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_SIG_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_SIG_EN &Instance() { return *reinterpret_cast<volatile INT_SIG_EN*>(0x40028018); }
};

// OCRAM single-bit ECC Error Information Register
//
union OCRAM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCS_ERRED_ECC : 8;
    uint32_t OCRAM_ECCS_ERRED_SYN : 8;
    uint32_t Reserved : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_INFO*>(0x4002801C); }
};

// OCRAM single-bit ECC Error Address Register
//
union OCRAM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_ADDR*>(0x40028020); }
};

// OCRAM single-bit ECC Error Data Register
//
union OCRAM_ECC_SINGLE_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCS_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_DATA_LSB*>(0x40028024); }
};

// OCRAM single-bit ECC Error Data Register
//
union OCRAM_ECC_SINGLE_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCS_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_DATA_MSB*>(0x40028028); }
};

// OCRAM multi-bit ECC Error Information Register
//
union OCRAM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCM_ERRED_ECC : 8;
    uint32_t Reserved : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_INFO*>(0x4002802C); }
};

// OCRAM multi-bit ECC Error Address Register
//
union OCRAM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_ADDR*>(0x40028030); }
};

// OCRAM multi-bit ECC Error Data Register
//
union OCRAM_ECC_MULTI_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCM_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_DATA_LSB*>(0x40028034); }
};

// OCRAM multi-bit ECC Error Data Register
//
union OCRAM_ECC_MULTI_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_ECCM_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_DATA_MSB*>(0x40028038); }
};

// ITCM single-bit ECC Error Information Register
//
union ITCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCS_EFW : 1;
    uint32_t ITCM_ECCS_EFSIZ : 3;
    uint32_t ITCM_ECCS_EFMST : 4;
    uint32_t ITCM_ECCS_EFPRT : 4;
    uint32_t ITCM_ECCS_EFSYN : 8;
    uint32_t Reserved : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_INFO*>(0x4002803C); }
};

// ITCM single-bit ECC Error Address Register
//
union ITCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_ADDR*>(0x40028040); }
};

// ITCM single-bit ECC Error Data Register
//
union ITCM_ECC_SINGLE_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCS_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_DATA_LSB*>(0x40028044); }
};

// ITCM single-bit ECC Error Data Register
//
union ITCM_ECC_SINGLE_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCS_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_DATA_MSB*>(0x40028048); }
};

// ITCM multi-bit ECC Error Information Register
//
union ITCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCM_EFW : 1;
    uint32_t ITCM_ECCM_EFSIZ : 3;
    uint32_t ITCM_ECCM_EFMST : 4;
    uint32_t ITCM_ECCM_EFPRT : 4;
    uint32_t ITCM_ECCM_EFSYN : 8;
    uint32_t Reserved : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_INFO*>(0x4002804C); }
};

// ITCM multi-bit ECC Error Address Register
//
union ITCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_ADDR*>(0x40028050); }
};

// ITCM multi-bit ECC Error Data Register
//
union ITCM_ECC_MULTI_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCM_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_DATA_LSB*>(0x40028054); }
};

// ITCM multi-bit ECC Error Data Register
//
union ITCM_ECC_MULTI_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    uint32_t ITCM_ECCM_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_DATA_MSB*>(0x40028058); }
};

// D0TCM single-bit ECC Error Information Register
//
union D0TCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCS_EFW : 1;
    uint32_t D0TCM_ECCS_EFSIZ : 3;
    uint32_t D0TCM_ECCS_EFMST : 4;
    uint32_t D0TCM_ECCS_EFPRT : 4;
    uint32_t D0TCM_ECCS_EFSYN : 7;
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_INFO*>(0x4002805C); }
};

// D0TCM single-bit ECC Error Address Register
//
union D0TCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_ADDR*>(0x40028060); }
};

// D0TCM single-bit ECC Error Data Register
//
union D0TCM_ECC_SINGLE_ERROR_DATA {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCS_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_DATA*>(0x40028064); }
};

// D0TCM multi-bit ECC Error Information Register
//
union D0TCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCM_EFW : 1;
    uint32_t D0TCM_ECCM_EFSIZ : 3;
    uint32_t D0TCM_ECCM_EFMST : 4;
    uint32_t D0TCM_ECCM_EFPRT : 4;
    uint32_t D0TCM_ECCM_EFSYN : 7;
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_INFO*>(0x40028068); }
};

// D0TCM multi-bit ECC Error Address Register
//
union D0TCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_ADDR*>(0x4002806C); }
};

// D0TCM multi-bit ECC Error Data Register
//
union D0TCM_ECC_MULTI_ERROR_DATA {
  
  // Bit field definition.
  struct {
    uint32_t D0TCM_ECCM_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_DATA*>(0x40028070); }
};

// D1TCM single-bit ECC Error Information Register
//
union D1TCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCS_EFW : 1;
    uint32_t D1TCM_ECCS_EFSIZ : 3;
    uint32_t D1TCM_ECCS_EFMST : 4;
    uint32_t D1TCM_ECCS_EFPRT : 4;
    uint32_t D1TCM_ECCS_EFSYN : 7;
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_INFO*>(0x40028074); }
};

// D1TCM single-bit ECC Error Address Register
//
union D1TCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_ADDR*>(0x40028078); }
};

// D1TCM single-bit ECC Error Data Register
//
union D1TCM_ECC_SINGLE_ERROR_DATA {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCS_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_DATA*>(0x4002807C); }
};

// D1TCM multi-bit ECC Error Information Register
//
union D1TCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCM_EFW : 1;
    uint32_t D1TCM_ECCM_EFSIZ : 3;
    uint32_t D1TCM_ECCM_EFMST : 4;
    uint32_t D1TCM_ECCM_EFPRT : 4;
    uint32_t D1TCM_ECCM_EFSYN : 7;
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_INFO*>(0x40028080); }
};

// D1TCM multi-bit ECC Error Address Register
//
union D1TCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_ADDR*>(0x40028084); }
};

// D1TCM multi-bit ECC Error Data Register
//
union D1TCM_ECC_MULTI_ERROR_DATA {
  
  // Bit field definition.
  struct {
    uint32_t D1TCM_ECCM_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_DATA*>(0x40028088); }
};

// FlexRAM feature Control register
//
union FLEXRAM_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_RDATA_WAIT_EN : 1;
    uint32_t OCRAM_RADDR_PIPELINE_EN : 1;
    uint32_t OCRAM_WRDATA_PIPELINE_EN : 1;
    uint32_t OCRAM_WRADDR_PIPELINE_EN : 1;
    uint32_t OCRAM_ECC_EN : 1;
    uint32_t TCM_ECC_EN : 1;
    uint32_t Reserved : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLEXRAM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLEXRAM_CTRL &Instance() { return *reinterpret_cast<volatile FLEXRAM_CTRL*>(0x40028108); }
};

// OCRAM Pipeline Status register
//
union OCRAM_PIPELINE_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t OCRAM_RDATA_WAIT_EN_UPDATA_PENDING : 1;
    uint32_t OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING : 1;
    uint32_t OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING : 1;
    uint32_t OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING : 1;
    uint32_t Reserved : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_PIPELINE_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_PIPELINE_STATUS &Instance() { return *reinterpret_cast<volatile OCRAM_PIPELINE_STATUS*>(0x4002810C); }
};


} // namespace nFLEXRAM