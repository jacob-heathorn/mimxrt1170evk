#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// FLEXRAM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nFLEXRAM {


// TCM CRTL Register
union TCM_CTRL {
  
  // TCM Write Wait Mode Enable
  enum class eTCM_WWAIT_EN : uint32_t {
    // TCM write fast mode: Write RAM accesses are expected to be finished in 1-cycle.
    eTCM_WWAIT_EN_0 = 0,
    // TCM write wait mode: Write RAM accesses are expected to be finished in 2-cycles.
    eTCM_WWAIT_EN_1 = 1,
  };
  
  // TCM Read Wait Mode Enable
  enum class eTCM_RWAIT_EN : uint32_t {
    // TCM read fast mode: Read RAM accesses are expected to be finished in 1-cycle.
    eTCM_RWAIT_EN_0 = 0,
    // TCM read wait mode: Read RAM accesses are expected to be finished in 2-cycles.
    eTCM_RWAIT_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TCM Write Wait Mode Enable
    eTCM_WWAIT_EN TCM_WWAIT_EN : 1;
    // read-write - TCM Read Wait Mode Enable
    eTCM_RWAIT_EN TCM_RWAIT_EN : 1;
    // read-write - Force RAM Clock Always On
    uint32_t FORCE_CLK_ON : 1;
    // read-only - Reserved
    uint32_t Reserved : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TCM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TCM_CTRL &Instance() { return *reinterpret_cast<volatile TCM_CTRL*>(0x40028000); }
};

// OCRAM Magic Address Register
union OCRAM_MAGIC_ADDR {
  
  // OCRAM Write Read Select
  enum class eOCRAM_WR_RD_SEL : uint32_t {
    // When OCRAM read access hits magic address, it will generate interrupt.
    eOCRAM_WR_RD_SEL_0 = 0,
    // When OCRAM write access hits magic address, it will generate interrupt.
    eOCRAM_WR_RD_SEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - OCRAM Write Read Select
    eOCRAM_WR_RD_SEL OCRAM_WR_RD_SEL : 1;
    // read-write - OCRAM Magic Address
    uint32_t OCRAM_MAGIC_ADDR : 17;
    // read-only - Reserved
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_MAGIC_ADDR*>(0x40028004); }
};

// DTCM Magic Address Register
union DTCM_MAGIC_ADDR {
  
  // DTCM Write Read Select
  enum class eDTCM_WR_RD_SEL : uint32_t {
    // When DTCM read access hits magic address, it will generate interrupt.
    eDTCM_WR_RD_SEL_0 = 0,
    // When DTCM write access hits magic address, it will generate interrupt.
    eDTCM_WR_RD_SEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DTCM Write Read Select
    eDTCM_WR_RD_SEL DTCM_WR_RD_SEL : 1;
    // read-write - DTCM Magic Address
    uint32_t DTCM_MAGIC_ADDR : 16;
    // read-only - Reserved
    uint32_t Reserved : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DTCM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DTCM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile DTCM_MAGIC_ADDR*>(0x40028008); }
};

// ITCM Magic Address Register
union ITCM_MAGIC_ADDR {
  
  // ITCM Write Read Select
  enum class eITCM_WR_RD_SEL : uint32_t {
    // When ITCM read access hits magic address, it will generate interrupt.
    eITCM_WR_RD_SEL_0 = 0,
    // When ITCM write access hits magic address, it will generate interrupt.
    eITCM_WR_RD_SEL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ITCM Write Read Select
    eITCM_WR_RD_SEL ITCM_WR_RD_SEL : 1;
    // read-write - ITCM Magic Address
    uint32_t ITCM_MAGIC_ADDR : 16;
    // read-only - Reserved
    uint32_t Reserved : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_MAGIC_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_MAGIC_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_MAGIC_ADDR*>(0x4002800C); }
};

// Interrupt Status Register
union INT_STATUS {
  
  // ITCM Magic Address Match Status
  enum class eITCM_MAM_STATUS : uint32_t {
    // ITCM did not access magic address.
    eITCM_MAM_STATUS_0 = 0,
    // ITCM accessed magic address.
    eITCM_MAM_STATUS_1 = 1,
  };
  
  // DTCM Magic Address Match Status
  enum class eDTCM_MAM_STATUS : uint32_t {
    // DTCM did not access magic address.
    eDTCM_MAM_STATUS_0 = 0,
    // DTCM accessed magic address.
    eDTCM_MAM_STATUS_1 = 1,
  };
  
  // OCRAM Magic Address Match Status
  enum class eOCRAM_MAM_STATUS : uint32_t {
    // OCRAM did not access magic address.
    eOCRAM_MAM_STATUS_0 = 0,
    // OCRAM accessed magic address.
    eOCRAM_MAM_STATUS_1 = 1,
  };
  
  // ITCM Access Error Status
  enum class eITCM_ERR_STATUS : uint32_t {
    // ITCM access error does not happen
    eITCM_ERR_STATUS_0 = 0,
    // ITCM access error happens.
    eITCM_ERR_STATUS_1 = 1,
  };
  
  // DTCM Access Error Status
  enum class eDTCM_ERR_STATUS : uint32_t {
    // DTCM access error does not happen
    eDTCM_ERR_STATUS_0 = 0,
    // DTCM access error happens.
    eDTCM_ERR_STATUS_1 = 1,
  };
  
  // OCRAM Access Error Status
  enum class eOCRAM_ERR_STATUS : uint32_t {
    // OCRAM access error does not happen
    eOCRAM_ERR_STATUS_0 = 0,
    // OCRAM access error happens.
    eOCRAM_ERR_STATUS_1 = 1,
  };
  
  // OCRAM access multi-bit ECC Error Interrupt Status
  enum class eOCRAM_ECC_ERRM_INT : uint32_t {
    // OCRAM multi-bit ECC error does not happen
    eOCRAM_ECC_ERRM_INT_0 = 0,
    // OCRAM multi-bit ECC error happens.
    eOCRAM_ECC_ERRM_INT_1 = 1,
  };
  
  // OCRAM access single-bit ECC Error Interrupt Status
  enum class eOCRAM_ECC_ERRS_INT : uint32_t {
    // OCRAM single-bit ECC error does not happen
    eOCRAM_ECC_ERRS_INT_0 = 0,
    // OCRAM single-bit ECC error happens.
    eOCRAM_ECC_ERRS_INT_1 = 1,
  };
  
  // ITCM Access multi-bit ECC Error Interrupt Status
  enum class eITCM_ECC_ERRM_INT : uint32_t {
    // ITCM multi-bit ECC error does not happen
    eITCM_ECC_ERRM_INT_0 = 0,
    // ITCM multi-bit ECC error happens.
    eITCM_ECC_ERRM_INT_1 = 1,
  };
  
  // ITCM access single-bit ECC Error Interrupt Status
  enum class eITCM_ECC_ERRS_INT : uint32_t {
    // ITCM single-bit ECC error does not happen
    eITCM_ECC_ERRS_INT_0 = 0,
    // ITCM single-bit ECC error happens.
    eITCM_ECC_ERRS_INT_1 = 1,
  };
  
  // D0TCM access multi-bit ECC Error Interrupt Status
  enum class eD0TCM_ECC_ERRM_INT : uint32_t {
    // D0TCM multi-bit ECC error does not happen
    eD0TCM_ECC_ERRM_INT_0 = 0,
    // D0TCM multi-bit ECC error happens.
    eD0TCM_ECC_ERRM_INT_1 = 1,
  };
  
  // D0TCM access single-bit ECC Error Interrupt Status
  enum class eD0TCM_ECC_ERRS_INT : uint32_t {
    // D0TCM single-bit ECC error does not happen
    eD0TCM_ECC_ERRS_INT_0 = 0,
    // D0TCM single-bit ECC error happens.
    eD0TCM_ECC_ERRS_INT_1 = 1,
  };
  
  // D1TCM access multi-bit ECC Error Interrupt Status
  enum class eD1TCM_ECC_ERRM_INT : uint32_t {
    // D1TCM multi-bit ECC error does not happen
    eD1TCM_ECC_ERRM_INT_0 = 0,
    // D1TCM multi-bit ECC error happens.
    eD1TCM_ECC_ERRM_INT_1 = 1,
  };
  
  // D1TCM access single-bit ECC Error Interrupt Status
  enum class eD1TCM_ECC_ERRS_INT : uint32_t {
    // D1TCM single-bit ECC error does not happen
    eD1TCM_ECC_ERRS_INT_0 = 0,
    // D1TCM single-bit ECC error happens.
    eD1TCM_ECC_ERRS_INT_1 = 1,
  };
  
  // ITCM Partial Write Interrupt Status
  enum class eITCM_PARTIAL_WR_INT_S : uint32_t {
    // ITCM Partial Write does not happen
    eITCM_PARTIAL_WR_INT_S_0 = 0,
    // ITCM Partial Write happens.
    eITCM_PARTIAL_WR_INT_S_1 = 1,
  };
  
  // D0TCM Partial Write Interrupt Status
  enum class eD0TCM_PARTIAL_WR_INT_S : uint32_t {
    // D0TCM Partial Write does not happen
    eD0TCM_PARTIAL_WR_INT_S_0 = 0,
    // D0TCM Partial Write happens.
    eD0TCM_PARTIAL_WR_INT_S_1 = 1,
  };
  
  // D1TCM Partial Write Interrupt Status
  enum class eD1TCM_PARTIAL_WR_INT_S : uint32_t {
    // D1TCM Partial Write does not happen
    eD1TCM_PARTIAL_WR_INT_S_0 = 0,
    // D1TCM Partial Write happens.
    eD1TCM_PARTIAL_WR_INT_S_1 = 1,
  };
  
  // OCRAM Partial Write Interrupt Status
  enum class eOCRAM_PARTIAL_WR_INT_S : uint32_t {
    // OCRAM Partial Write does not happen
    eOCRAM_PARTIAL_WR_INT_S_0 = 0,
    // OCRAM Partial Write happens.
    eOCRAM_PARTIAL_WR_INT_S_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ITCM Magic Address Match Status
    eITCM_MAM_STATUS ITCM_MAM_STATUS : 1;
    // read-write - DTCM Magic Address Match Status
    eDTCM_MAM_STATUS DTCM_MAM_STATUS : 1;
    // read-write - OCRAM Magic Address Match Status
    eOCRAM_MAM_STATUS OCRAM_MAM_STATUS : 1;
    // read-write - ITCM Access Error Status
    eITCM_ERR_STATUS ITCM_ERR_STATUS : 1;
    // read-write - DTCM Access Error Status
    eDTCM_ERR_STATUS DTCM_ERR_STATUS : 1;
    // read-write - OCRAM Access Error Status
    eOCRAM_ERR_STATUS OCRAM_ERR_STATUS : 1;
    // read-write - OCRAM access multi-bit ECC Error Interrupt Status
    eOCRAM_ECC_ERRM_INT OCRAM_ECC_ERRM_INT : 1;
    // read-write - OCRAM access single-bit ECC Error Interrupt Status
    eOCRAM_ECC_ERRS_INT OCRAM_ECC_ERRS_INT : 1;
    // read-write - ITCM Access multi-bit ECC Error Interrupt Status
    eITCM_ECC_ERRM_INT ITCM_ECC_ERRM_INT : 1;
    // read-write - ITCM access single-bit ECC Error Interrupt Status
    eITCM_ECC_ERRS_INT ITCM_ECC_ERRS_INT : 1;
    // read-write - D0TCM access multi-bit ECC Error Interrupt Status
    eD0TCM_ECC_ERRM_INT D0TCM_ECC_ERRM_INT : 1;
    // read-write - D0TCM access single-bit ECC Error Interrupt Status
    eD0TCM_ECC_ERRS_INT D0TCM_ECC_ERRS_INT : 1;
    // read-write - D1TCM access multi-bit ECC Error Interrupt Status
    eD1TCM_ECC_ERRM_INT D1TCM_ECC_ERRM_INT : 1;
    // read-write - D1TCM access single-bit ECC Error Interrupt Status
    eD1TCM_ECC_ERRS_INT D1TCM_ECC_ERRS_INT : 1;
    // read-write - ITCM Partial Write Interrupt Status
    eITCM_PARTIAL_WR_INT_S ITCM_PARTIAL_WR_INT_S : 1;
    // read-write - D0TCM Partial Write Interrupt Status
    eD0TCM_PARTIAL_WR_INT_S D0TCM_PARTIAL_WR_INT_S : 1;
    // read-write - D1TCM Partial Write Interrupt Status
    eD1TCM_PARTIAL_WR_INT_S D1TCM_PARTIAL_WR_INT_S : 1;
    // read-write - OCRAM Partial Write Interrupt Status
    eOCRAM_PARTIAL_WR_INT_S OCRAM_PARTIAL_WR_INT_S : 1;
    // read-only - Reserved
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS &Instance() { return *reinterpret_cast<volatile INT_STATUS*>(0x40028010); }
};

// Interrupt Status Enable Register
union INT_STAT_EN {
  
  // ITCM Magic Address Match Status Enable
  enum class eITCM_MAM_STAT_EN : uint32_t {
    // Masked
    eITCM_MAM_STAT_EN_0 = 0,
    // Enabled
    eITCM_MAM_STAT_EN_1 = 1,
  };
  
  // DTCM Magic Address Match Status Enable
  enum class eDTCM_MAM_STAT_EN : uint32_t {
    // Masked
    eDTCM_MAM_STAT_EN_0 = 0,
    // Enabled
    eDTCM_MAM_STAT_EN_1 = 1,
  };
  
  // OCRAM Magic Address Match Status Enable
  enum class eOCRAM_MAM_STAT_EN : uint32_t {
    // Masked
    eOCRAM_MAM_STAT_EN_0 = 0,
    // Enabled
    eOCRAM_MAM_STAT_EN_1 = 1,
  };
  
  // ITCM Access Error Status Enable
  enum class eITCM_ERR_STAT_EN : uint32_t {
    // Masked
    eITCM_ERR_STAT_EN_0 = 0,
    // Enabled
    eITCM_ERR_STAT_EN_1 = 1,
  };
  
  // DTCM Access Error Status Enable
  enum class eDTCM_ERR_STAT_EN : uint32_t {
    // Masked
    eDTCM_ERR_STAT_EN_0 = 0,
    // Enabled
    eDTCM_ERR_STAT_EN_1 = 1,
  };
  
  // OCRAM Access Error Status Enable
  enum class eOCRAM_ERR_STAT_EN : uint32_t {
    // Masked
    eOCRAM_ERR_STAT_EN_0 = 0,
    // Enabled
    eOCRAM_ERR_STAT_EN_1 = 1,
  };
  
  // OCRAM Access multi-bit ECC Error Interrupt Status Enable
  enum class eOCRAM_ERRM_INT_EN : uint32_t {
    // Masked
    eOCRAM_ERRM_INT_EN_0 = 0,
    // Enabled
    eOCRAM_ERRM_INT_EN_1 = 1,
  };
  
  // OCRAM Access single-bit ECC Error Interrupt Status Enable
  enum class eOCRAM_ERRS_INT_EN : uint32_t {
    // Masked
    eOCRAM_ERRS_INT_EN_0 = 0,
    // Enabled
    eOCRAM_ERRS_INT_EN_1 = 1,
  };
  
  // ITCM Access multi-bit ECC Error Interrupt Status Enable
  enum class eITCM_ERRM_INT_EN : uint32_t {
    // Masked
    eITCM_ERRM_INT_EN_0 = 0,
    // Enabled
    eITCM_ERRM_INT_EN_1 = 1,
  };
  
  // ITCM Access single-bit ECC Error Interrupt Status Enable
  enum class eITCM_ERRS_INT_EN : uint32_t {
    // Masked
    eITCM_ERRS_INT_EN_0 = 0,
    // Enabled
    eITCM_ERRS_INT_EN_1 = 1,
  };
  
  // D0TCM Access multi-bit ECC Error Interrupt Status Enable
  enum class eD0TCM_ERRM_INT_EN : uint32_t {
    // Masked
    eD0TCM_ERRM_INT_EN_0 = 0,
    // Enabled
    eD0TCM_ERRM_INT_EN_1 = 1,
  };
  
  // D0TCM Access single-bit ECC Error Interrupt Status Enable
  enum class eD0TCM_ERRS_INT_EN : uint32_t {
    // Masked
    eD0TCM_ERRS_INT_EN_0 = 0,
    // Enabled
    eD0TCM_ERRS_INT_EN_1 = 1,
  };
  
  // D1TCM Access multi-bit ECC Error Interrupt Status Enable
  enum class eD1TCM_ERRM_INT_EN : uint32_t {
    // Masked
    eD1TCM_ERRM_INT_EN_0 = 0,
    // Enabled
    eD1TCM_ERRM_INT_EN_1 = 1,
  };
  
  // D1TCM Access single-bit ECC Error Interrupt Status Enable
  enum class eD1TCM_ERRS_INT_EN : uint32_t {
    // Masked
    eD1TCM_ERRS_INT_EN_0 = 0,
    // Enabled
    eD1TCM_ERRS_INT_EN_1 = 1,
  };
  
  // ITCM Partial Write Interrupt Status Enable
  enum class eITCM_PARTIAL_WR_INT_S_EN : uint32_t {
    // Masked
    eITCM_PARTIAL_WR_INT_S_EN_0 = 0,
    // Enabled
    eITCM_PARTIAL_WR_INT_S_EN_1 = 1,
  };
  
  // D0TCM Partial Write Interrupt Status Enable
  enum class eD0TCM_PARTIAL_WR_INT_S_EN : uint32_t {
    // Masked
    eD0TCM_PARTIAL_WR_INT_S_EN_0 = 0,
    // Enabled
    eD0TCM_PARTIAL_WR_INT_S_EN_1 = 1,
  };
  
  // D1TCM Partial Write Interrupt Status EN
  enum class eD1TCM_PARTIAL_WR_INT_S_EN : uint32_t {
    // Masked
    eD1TCM_PARTIAL_WR_INT_S_EN_0 = 0,
    // Enbaled
    eD1TCM_PARTIAL_WR_INT_S_EN_1 = 1,
  };
  
  // OCRAM Partial Write Interrupt Status
  enum class eOCRAM_PARTIAL_WR_INT_S_EN : uint32_t {
    // Masked
    eOCRAM_PARTIAL_WR_INT_S_EN_0 = 0,
    // Enabled
    eOCRAM_PARTIAL_WR_INT_S_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ITCM Magic Address Match Status Enable
    eITCM_MAM_STAT_EN ITCM_MAM_STAT_EN : 1;
    // read-write - DTCM Magic Address Match Status Enable
    eDTCM_MAM_STAT_EN DTCM_MAM_STAT_EN : 1;
    // read-write - OCRAM Magic Address Match Status Enable
    eOCRAM_MAM_STAT_EN OCRAM_MAM_STAT_EN : 1;
    // read-write - ITCM Access Error Status Enable
    eITCM_ERR_STAT_EN ITCM_ERR_STAT_EN : 1;
    // read-write - DTCM Access Error Status Enable
    eDTCM_ERR_STAT_EN DTCM_ERR_STAT_EN : 1;
    // read-write - OCRAM Access Error Status Enable
    eOCRAM_ERR_STAT_EN OCRAM_ERR_STAT_EN : 1;
    // read-write - OCRAM Access multi-bit ECC Error Interrupt Status Enable
    eOCRAM_ERRM_INT_EN OCRAM_ERRM_INT_EN : 1;
    // read-write - OCRAM Access single-bit ECC Error Interrupt Status Enable
    eOCRAM_ERRS_INT_EN OCRAM_ERRS_INT_EN : 1;
    // read-write - ITCM Access multi-bit ECC Error Interrupt Status Enable
    eITCM_ERRM_INT_EN ITCM_ERRM_INT_EN : 1;
    // read-write - ITCM Access single-bit ECC Error Interrupt Status Enable
    eITCM_ERRS_INT_EN ITCM_ERRS_INT_EN : 1;
    // read-write - D0TCM Access multi-bit ECC Error Interrupt Status Enable
    eD0TCM_ERRM_INT_EN D0TCM_ERRM_INT_EN : 1;
    // read-write - D0TCM Access single-bit ECC Error Interrupt Status Enable
    eD0TCM_ERRS_INT_EN D0TCM_ERRS_INT_EN : 1;
    // read-write - D1TCM Access multi-bit ECC Error Interrupt Status Enable
    eD1TCM_ERRM_INT_EN D1TCM_ERRM_INT_EN : 1;
    // read-write - D1TCM Access single-bit ECC Error Interrupt Status Enable
    eD1TCM_ERRS_INT_EN D1TCM_ERRS_INT_EN : 1;
    // read-write - ITCM Partial Write Interrupt Status Enable
    eITCM_PARTIAL_WR_INT_S_EN ITCM_PARTIAL_WR_INT_S_EN : 1;
    // read-write - D0TCM Partial Write Interrupt Status Enable
    eD0TCM_PARTIAL_WR_INT_S_EN D0TCM_PARTIAL_WR_INT_S_EN : 1;
    // read-write - D1TCM Partial Write Interrupt Status EN
    eD1TCM_PARTIAL_WR_INT_S_EN D1TCM_PARTIAL_WR_INT_S_EN : 1;
    // read-write - OCRAM Partial Write Interrupt Status
    eOCRAM_PARTIAL_WR_INT_S_EN OCRAM_PARTIAL_WR_INT_S_EN : 1;
    // read-only - Reserved
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STAT_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STAT_EN &Instance() { return *reinterpret_cast<volatile INT_STAT_EN*>(0x40028014); }
};

// Interrupt Enable Register
union INT_SIG_EN {
  
  // ITCM Magic Address Match Interrupt Enable
  enum class eITCM_MAM_SIG_EN : uint32_t {
    // Masked
    eITCM_MAM_SIG_EN_0 = 0,
    // Enabled
    eITCM_MAM_SIG_EN_1 = 1,
  };
  
  // DTCM Magic Address Match Interrupt Enable
  enum class eDTCM_MAM_SIG_EN : uint32_t {
    // Masked
    eDTCM_MAM_SIG_EN_0 = 0,
    // Enabled
    eDTCM_MAM_SIG_EN_1 = 1,
  };
  
  // OCRAM Magic Address Match Interrupt Enable
  enum class eOCRAM_MAM_SIG_EN : uint32_t {
    // Masked
    eOCRAM_MAM_SIG_EN_0 = 0,
    // Enabled
    eOCRAM_MAM_SIG_EN_1 = 1,
  };
  
  // ITCM Access Error Interrupt Enable
  enum class eITCM_ERR_SIG_EN : uint32_t {
    // Masked
    eITCM_ERR_SIG_EN_0 = 0,
    // Enabled
    eITCM_ERR_SIG_EN_1 = 1,
  };
  
  // DTCM Access Error Interrupt Enable
  enum class eDTCM_ERR_SIG_EN : uint32_t {
    // Masked
    eDTCM_ERR_SIG_EN_0 = 0,
    // Enabled
    eDTCM_ERR_SIG_EN_1 = 1,
  };
  
  // OCRAM Access Error Interrupt Enable
  enum class eOCRAM_ERR_SIG_EN : uint32_t {
    // Masked
    eOCRAM_ERR_SIG_EN_0 = 0,
    // Enabled
    eOCRAM_ERR_SIG_EN_1 = 1,
  };
  
  // OCRAM Access multi-bit ECC Error Interrupt Signal Enable
  enum class eOCRAM_ERRM_INT_SIG_EN : uint32_t {
    // Masked
    eOCRAM_ERRM_INT_SIG_EN_0 = 0,
    // Enabled
    eOCRAM_ERRM_INT_SIG_EN_1 = 1,
  };
  
  // OCRAM Access single-bit ECC Error Interrupt Signal Enable
  enum class eOCRAM_ERRS_INT_SIG_EN : uint32_t {
    // Masked
    eOCRAM_ERRS_INT_SIG_EN_0 = 0,
    // Enabled
    eOCRAM_ERRS_INT_SIG_EN_1 = 1,
  };
  
  // ITCM Access multi-bit ECC Error Interrupt Signal Enable
  enum class eITCM_ERRM_INT_SIG_EN : uint32_t {
    // Masked
    eITCM_ERRM_INT_SIG_EN_0 = 0,
    // Enabled
    eITCM_ERRM_INT_SIG_EN_1 = 1,
  };
  
  // ITCM Access single-bit ECC Error Interrupt Signal Enable
  enum class eITCM_ERRS_INT_SIG_EN : uint32_t {
    // Masked
    eITCM_ERRS_INT_SIG_EN_0 = 0,
    // Enabled
    eITCM_ERRS_INT_SIG_EN_1 = 1,
  };
  
  // D0TCM Access multi-bit ECC Error Interrupt Signal Enable
  enum class eD0TCM_ERRM_INT_SIG_EN : uint32_t {
    // Masked
    eD0TCM_ERRM_INT_SIG_EN_0 = 0,
    // Enabled
    eD0TCM_ERRM_INT_SIG_EN_1 = 1,
  };
  
  // D0TCM Access single-bit ECC Error Interrupt Signal Enable
  enum class eD0TCM_ERRS_INT_SIG_EN : uint32_t {
    // Masked
    eD0TCM_ERRS_INT_SIG_EN_0 = 0,
    // Enabled
    eD0TCM_ERRS_INT_SIG_EN_1 = 1,
  };
  
  // D1TCM Access multi-bit ECC Error Interrupt Signal Enable
  enum class eD1TCM_ERRM_INT_SIG_EN : uint32_t {
    // Masked
    eD1TCM_ERRM_INT_SIG_EN_0 = 0,
    // Enabled
    eD1TCM_ERRM_INT_SIG_EN_1 = 1,
  };
  
  // D1TCM Access single-bit ECC Error Interrupt Signal Enable
  enum class eD1TCM_ERRS_INT_SIG_EN : uint32_t {
    // Masked
    eD1TCM_ERRS_INT_SIG_EN_0 = 0,
    // Enabled
    eD1TCM_ERRS_INT_SIG_EN_1 = 1,
  };
  
  // ITCM Partial Write Interrupt Signal Enable Enable
  enum class eITCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    // Masked
    eITCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
    // Enabled
    eITCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
  };
  
  // D0TCM Partial Write Interrupt Signal Enable Enable
  enum class eD0TCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    // Masked
    eD0TCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
    // Enabled
    eD0TCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
  };
  
  // D1TCM Partial Write Interrupt Signal Enable EN
  enum class eD1TCM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    // Masked
    eD1TCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
    // Enbaled
    eD1TCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
  };
  
  // OCRAM Partial Write Interrupt Signal Enable
  enum class eOCRAM_PARTIAL_WR_INT_SIG_EN : uint32_t {
    // Masked
    eOCRAM_PARTIAL_WR_INT_SIG_EN_0 = 0,
    // Enabled
    eOCRAM_PARTIAL_WR_INT_SIG_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ITCM Magic Address Match Interrupt Enable
    eITCM_MAM_SIG_EN ITCM_MAM_SIG_EN : 1;
    // read-write - DTCM Magic Address Match Interrupt Enable
    eDTCM_MAM_SIG_EN DTCM_MAM_SIG_EN : 1;
    // read-write - OCRAM Magic Address Match Interrupt Enable
    eOCRAM_MAM_SIG_EN OCRAM_MAM_SIG_EN : 1;
    // read-write - ITCM Access Error Interrupt Enable
    eITCM_ERR_SIG_EN ITCM_ERR_SIG_EN : 1;
    // read-write - DTCM Access Error Interrupt Enable
    eDTCM_ERR_SIG_EN DTCM_ERR_SIG_EN : 1;
    // read-write - OCRAM Access Error Interrupt Enable
    eOCRAM_ERR_SIG_EN OCRAM_ERR_SIG_EN : 1;
    // read-write - OCRAM Access multi-bit ECC Error Interrupt Signal Enable
    eOCRAM_ERRM_INT_SIG_EN OCRAM_ERRM_INT_SIG_EN : 1;
    // read-write - OCRAM Access single-bit ECC Error Interrupt Signal Enable
    eOCRAM_ERRS_INT_SIG_EN OCRAM_ERRS_INT_SIG_EN : 1;
    // read-write - ITCM Access multi-bit ECC Error Interrupt Signal Enable
    eITCM_ERRM_INT_SIG_EN ITCM_ERRM_INT_SIG_EN : 1;
    // read-write - ITCM Access single-bit ECC Error Interrupt Signal Enable
    eITCM_ERRS_INT_SIG_EN ITCM_ERRS_INT_SIG_EN : 1;
    // read-write - D0TCM Access multi-bit ECC Error Interrupt Signal Enable
    eD0TCM_ERRM_INT_SIG_EN D0TCM_ERRM_INT_SIG_EN : 1;
    // read-write - D0TCM Access single-bit ECC Error Interrupt Signal Enable
    eD0TCM_ERRS_INT_SIG_EN D0TCM_ERRS_INT_SIG_EN : 1;
    // read-write - D1TCM Access multi-bit ECC Error Interrupt Signal Enable
    eD1TCM_ERRM_INT_SIG_EN D1TCM_ERRM_INT_SIG_EN : 1;
    // read-write - D1TCM Access single-bit ECC Error Interrupt Signal Enable
    eD1TCM_ERRS_INT_SIG_EN D1TCM_ERRS_INT_SIG_EN : 1;
    // read-write - ITCM Partial Write Interrupt Signal Enable Enable
    eITCM_PARTIAL_WR_INT_SIG_EN ITCM_PARTIAL_WR_INT_SIG_EN : 1;
    // read-write - D0TCM Partial Write Interrupt Signal Enable Enable
    eD0TCM_PARTIAL_WR_INT_SIG_EN D0TCM_PARTIAL_WR_INT_SIG_EN : 1;
    // read-write - D1TCM Partial Write Interrupt Signal Enable EN
    eD1TCM_PARTIAL_WR_INT_SIG_EN D1TCM_PARTIAL_WR_INT_SIG_EN : 1;
    // read-write - OCRAM Partial Write Interrupt Signal Enable
    eOCRAM_PARTIAL_WR_INT_SIG_EN OCRAM_PARTIAL_WR_INT_SIG_EN : 1;
    // read-only - Reserved
    uint32_t Reserved : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_SIG_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_SIG_EN &Instance() { return *reinterpret_cast<volatile INT_SIG_EN*>(0x40028018); }
};

// OCRAM single-bit ECC Error Information Register
union OCRAM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - corresponding ECC cipher of OCRAM single-bit ECC error
    uint32_t OCRAM_ECCS_ERRED_ECC : 8;
    // read-only - corresponding ECC syndrome of OCRAM single-bit ECC error
    uint32_t OCRAM_ECCS_ERRED_SYN : 8;
    // read-only - Reserved
    uint32_t Reserved : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_INFO*>(0x4002801C); }
};

// OCRAM single-bit ECC Error Address Register
union OCRAM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM single-bit ECC error address
    uint32_t OCRAM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_ADDR*>(0x40028020); }
};

// OCRAM single-bit ECC Error Data Register
union OCRAM_ECC_SINGLE_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM single-bit ECC error data [31:0]
    uint32_t OCRAM_ECCS_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_DATA_LSB*>(0x40028024); }
};

// OCRAM single-bit ECC Error Data Register
union OCRAM_ECC_SINGLE_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM single-bit ECC error data [63:32]
    uint32_t OCRAM_ECCS_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_SINGLE_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_SINGLE_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_SINGLE_ERROR_DATA_MSB*>(0x40028028); }
};

// OCRAM multi-bit ECC Error Information Register
union OCRAM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM multi-bit ECC error corresponding ECC value
    uint32_t OCRAM_ECCM_ERRED_ECC : 8;
    // read-only - Reserved
    uint32_t Reserved : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_INFO*>(0x4002802C); }
};

// OCRAM multi-bit ECC Error Address Register
union OCRAM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM multi-bit ECC error address
    uint32_t OCRAM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_ADDR*>(0x40028030); }
};

// OCRAM multi-bit ECC Error Data Register
union OCRAM_ECC_MULTI_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM multi-bit ECC error data [31:0]
    uint32_t OCRAM_ECCM_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_DATA_LSB*>(0x40028034); }
};

// OCRAM multi-bit ECC Error Data Register
union OCRAM_ECC_MULTI_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    // read-only - OCRAM multi-bit ECC error data [63:32]
    uint32_t OCRAM_ECCM_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_ECC_MULTI_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_ECC_MULTI_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile OCRAM_ECC_MULTI_ERROR_DATA_MSB*>(0x40028038); }
};

// ITCM single-bit ECC Error Information Register
union ITCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - ITCM single-bit ECC error corresponding TCM_WR value.
    uint32_t ITCM_ECCS_EFW : 1;
    // read-only - ITCM single-bit ECC error corresponding TCM size
    uint32_t ITCM_ECCS_EFSIZ : 3;
    // read-only - ITCM single-bit ECC error corresponding TCM_MASTER.
    uint32_t ITCM_ECCS_EFMST : 4;
    // read-only - ITCM single-bit ECC error corresponding TCM_PRIV.
    uint32_t ITCM_ECCS_EFPRT : 4;
    // read-only - ITCM single-bit ECC error corresponding syndrome
    uint32_t ITCM_ECCS_EFSYN : 8;
    // read-only - Reserved
    uint32_t Reserved : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_INFO*>(0x4002803C); }
};

// ITCM single-bit ECC Error Address Register
union ITCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - ITCM single-bit ECC error address
    uint32_t ITCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_ADDR*>(0x40028040); }
};

// ITCM single-bit ECC Error Data Register
union ITCM_ECC_SINGLE_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    // read-only - ITCM single-bit ECC error data [31:0]
    uint32_t ITCM_ECCS_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_DATA_LSB*>(0x40028044); }
};

// ITCM single-bit ECC Error Data Register
union ITCM_ECC_SINGLE_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    // read-only - ITCM single-bit ECC error data [63:32]
    uint32_t ITCM_ECCS_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_SINGLE_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_SINGLE_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_SINGLE_ERROR_DATA_MSB*>(0x40028048); }
};

// ITCM multi-bit ECC Error Information Register
union ITCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - ITCM multi-bit ECC error corresponding TCM_WR value
    uint32_t ITCM_ECCM_EFW : 1;
    // read-only - ITCM multi-bit ECC error corresponding tcm access size
    uint32_t ITCM_ECCM_EFSIZ : 3;
    // read-only - ITCM multi-bit ECC error corresponding TCM_MASTER
    uint32_t ITCM_ECCM_EFMST : 4;
    // read-only - ITCM multi-bit ECC error corresponding TCM_PRIV
    uint32_t ITCM_ECCM_EFPRT : 4;
    // read-only - ITCM multi-bit ECC error corresponding syndrome
    uint32_t ITCM_ECCM_EFSYN : 8;
    // read-only - Reserved
    uint32_t Reserved : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_INFO*>(0x4002804C); }
};

// ITCM multi-bit ECC Error Address Register
union ITCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - ITCM multi-bit ECC error address
    uint32_t ITCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_ADDR*>(0x40028050); }
};

// ITCM multi-bit ECC Error Data Register
union ITCM_ECC_MULTI_ERROR_DATA_LSB {
  
  // Bit field definition.
  struct {
    // read-only - ITCM multi-bit ECC error data [31:0]
    uint32_t ITCM_ECCM_ERRED_DATA_LSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_DATA_LSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_DATA_LSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_DATA_LSB*>(0x40028054); }
};

// ITCM multi-bit ECC Error Data Register
union ITCM_ECC_MULTI_ERROR_DATA_MSB {
  
  // Bit field definition.
  struct {
    // read-only - ITCM multi-bit ECC error data [63:32]
    uint32_t ITCM_ECCM_ERRED_DATA_MSB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ITCM_ECC_MULTI_ERROR_DATA_MSB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ITCM_ECC_MULTI_ERROR_DATA_MSB &Instance() { return *reinterpret_cast<volatile ITCM_ECC_MULTI_ERROR_DATA_MSB*>(0x40028058); }
};

// D0TCM single-bit ECC Error Information Register
union D0TCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM single-bit ECC error corresponding TCM_WR value
    uint32_t D0TCM_ECCS_EFW : 1;
    // read-only - D0TCM single-bit ECC error corresponding tcm access size
    uint32_t D0TCM_ECCS_EFSIZ : 3;
    // read-only - D0TCM single-bit ECC error corresponding TCM_MASTER
    uint32_t D0TCM_ECCS_EFMST : 4;
    // read-only - D0TCM single-bit ECC error corresponding TCM_PRIV
    uint32_t D0TCM_ECCS_EFPRT : 4;
    // read-only - D0TCM single-bit ECC error corresponding syndrome
    uint32_t D0TCM_ECCS_EFSYN : 7;
    // read-only - Reserved
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_INFO*>(0x4002805C); }
};

// D0TCM single-bit ECC Error Address Register
union D0TCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM single-bit ECC error address
    uint32_t D0TCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_ADDR*>(0x40028060); }
};

// D0TCM single-bit ECC Error Data Register
union D0TCM_ECC_SINGLE_ERROR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM single-bit ECC error data
    uint32_t D0TCM_ECCS_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_SINGLE_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_SINGLE_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_SINGLE_ERROR_DATA*>(0x40028064); }
};

// D0TCM multi-bit ECC Error Information Register
union D0TCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM multi-bit ECC error corresponding TCM_WR value
    uint32_t D0TCM_ECCM_EFW : 1;
    // read-only - D0TCM multi-bit ECC error corresponding tcm access size
    uint32_t D0TCM_ECCM_EFSIZ : 3;
    // read-only - D0TCM multi-bit ECC error corresponding TCM_MASTER
    uint32_t D0TCM_ECCM_EFMST : 4;
    // read-only - D0TCM multi-bit ECC error corresponding TCM_PRIV
    uint32_t D0TCM_ECCM_EFPRT : 4;
    // read-only - D0TCM multi-bit ECC error corresponding syndrome
    uint32_t D0TCM_ECCM_EFSYN : 7;
    // read-only - Reserved
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_INFO*>(0x40028068); }
};

// D0TCM multi-bit ECC Error Address Register
union D0TCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM multi-bit ECC error address
    uint32_t D0TCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_ADDR*>(0x4002806C); }
};

// D0TCM multi-bit ECC Error Data Register
union D0TCM_ECC_MULTI_ERROR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - D0TCM multi-bit ECC error data
    uint32_t D0TCM_ECCM_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D0TCM_ECC_MULTI_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D0TCM_ECC_MULTI_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D0TCM_ECC_MULTI_ERROR_DATA*>(0x40028070); }
};

// D1TCM single-bit ECC Error Information Register
union D1TCM_ECC_SINGLE_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM single-bit ECC error corresponding TCM_WR value
    uint32_t D1TCM_ECCS_EFW : 1;
    // read-only - D1TCM single-bit ECC error corresponding tcm access size
    uint32_t D1TCM_ECCS_EFSIZ : 3;
    // read-only - D1TCM single-bit ECC error corresponding TCM_MASTER
    uint32_t D1TCM_ECCS_EFMST : 4;
    // read-only - D1TCM single-bit ECC error corresponding TCM_PRIV
    uint32_t D1TCM_ECCS_EFPRT : 4;
    // read-only - D1TCM single-bit ECC error corresponding syndrome
    uint32_t D1TCM_ECCS_EFSYN : 7;
    // read-only - Reserved
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_INFO*>(0x40028074); }
};

// D1TCM single-bit ECC Error Address Register
union D1TCM_ECC_SINGLE_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM single-bit ECC error address
    uint32_t D1TCM_ECCS_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_ADDR*>(0x40028078); }
};

// D1TCM single-bit ECC Error Data Register
union D1TCM_ECC_SINGLE_ERROR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM single-bit ECC error data
    uint32_t D1TCM_ECCS_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_SINGLE_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_SINGLE_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_SINGLE_ERROR_DATA*>(0x4002807C); }
};

// D1TCM multi-bit ECC Error Information Register
union D1TCM_ECC_MULTI_ERROR_INFO {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM multi-bit ECC error corresponding TCM_WR value
    uint32_t D1TCM_ECCM_EFW : 1;
    // read-only - D1TCM multi-bit ECC error corresponding tcm access size
    uint32_t D1TCM_ECCM_EFSIZ : 3;
    // read-only - D1TCM multi-bit ECC error corresponding TCM_MASTER
    uint32_t D1TCM_ECCM_EFMST : 4;
    // read-only - D1TCM multi-bit ECC error corresponding TCM_PRIV
    uint32_t D1TCM_ECCM_EFPRT : 4;
    // read-only - D1TCM multi-bit ECC error corresponding syndrome
    uint32_t D1TCM_ECCM_EFSYN : 7;
    // read-only - Reserved
    uint32_t Reserved : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_INFO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_INFO &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_INFO*>(0x40028080); }
};

// D1TCM multi-bit ECC Error Address Register
union D1TCM_ECC_MULTI_ERROR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM multi-bit ECC error address
    uint32_t D1TCM_ECCM_ERRED_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_ADDR &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_ADDR*>(0x40028084); }
};

// D1TCM multi-bit ECC Error Data Register
union D1TCM_ECC_MULTI_ERROR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - D1TCM multi-bit ECC error data
    uint32_t D1TCM_ECCM_ERRED_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  D1TCM_ECC_MULTI_ERROR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile D1TCM_ECC_MULTI_ERROR_DATA &Instance() { return *reinterpret_cast<volatile D1TCM_ECC_MULTI_ERROR_DATA*>(0x40028088); }
};

// FlexRAM feature Control register
union FLEXRAM_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Read Data Wait Enable
    uint32_t OCRAM_RDATA_WAIT_EN : 1;
    // read-write - Read Address Pipeline Enable
    uint32_t OCRAM_RADDR_PIPELINE_EN : 1;
    // read-write - Write Data Pipeline Enable
    uint32_t OCRAM_WRDATA_PIPELINE_EN : 1;
    // read-write - Write Address Pipeline Enable
    uint32_t OCRAM_WRADDR_PIPELINE_EN : 1;
    // read-write - OCRAM ECC enable
    uint32_t OCRAM_ECC_EN : 1;
    // read-write - TCM ECC enable
    uint32_t TCM_ECC_EN : 1;
    // read-only - Reserved
    uint32_t Reserved : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FLEXRAM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FLEXRAM_CTRL &Instance() { return *reinterpret_cast<volatile FLEXRAM_CTRL*>(0x40028108); }
};

// OCRAM Pipeline Status register
union OCRAM_PIPELINE_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - Read Data Wait Enable Pending
    uint32_t OCRAM_RDATA_WAIT_EN_UPDATA_PENDING : 1;
    // read-only - Read Address Pipeline Enable Pending
    uint32_t OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING : 1;
    // read-only - Write Data Pipeline Enable Pending
    uint32_t OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING : 1;
    // read-only - Write Address Pipeline Enable Pending
    uint32_t OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING : 1;
    // read-only - Reserved
    uint32_t Reserved : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCRAM_PIPELINE_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OCRAM_PIPELINE_STATUS &Instance() { return *reinterpret_cast<volatile OCRAM_PIPELINE_STATUS*>(0x4002810C); }
};


} // namespace nFLEXRAM