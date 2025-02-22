#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DSI HOST DPHY INTFC
namespace nDSI_HOST_DPHY_INTFC {


// PD_TX
union PD_TX {
  
  // Power Down input for D-PHY
  enum class ePD_TX : uint32_t {
    // Power Up
    ePD_TX_0 = 0,
    // Power Down
    ePD_TX_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Power Down input for D-PHY
    ePD_TX PD_TX : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PD_TX() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PD_TX &Instance() { return *reinterpret_cast<volatile PD_TX*>(0x4080C300); }
};

// M_PRG_HS_PREPARE
union M_PRG_HS_PREPARE {
  
  // Bit field definition.
  struct {
    // read-write - DPHY m_PRG_HS_PREPARE input
    uint32_t M_PRG_HS_PREPARE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  M_PRG_HS_PREPARE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile M_PRG_HS_PREPARE &Instance() { return *reinterpret_cast<volatile M_PRG_HS_PREPARE*>(0x4080C304); }
};

// MC_PRG_HS_PREPARE
union MC_PRG_HS_PREPARE {
  
  // Bit field definition.
  struct {
    // read-write - DPHY mc_PRG_HS_PREPARE input
    uint32_t MC_PRG_HS_PREPARE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MC_PRG_HS_PREPARE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MC_PRG_HS_PREPARE &Instance() { return *reinterpret_cast<volatile MC_PRG_HS_PREPARE*>(0x4080C308); }
};

// M_PRG_HS_ZERO
union M_PRG_HS_ZERO {
  
  // Bit field definition.
  struct {
    // read-write - DPHY m_PRG_HS_ZERO input
    uint32_t M_PRG_HS_ZERO : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  M_PRG_HS_ZERO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile M_PRG_HS_ZERO &Instance() { return *reinterpret_cast<volatile M_PRG_HS_ZERO*>(0x4080C30C); }
};

// MC_PRG_HS_ZERO
union MC_PRG_HS_ZERO {
  
  // Bit field definition.
  struct {
    // read-write - DPHY mc_PRG_HS_ZERO input
    uint32_t MC_PRG_HS_ZERO : 6;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MC_PRG_HS_ZERO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MC_PRG_HS_ZERO &Instance() { return *reinterpret_cast<volatile MC_PRG_HS_ZERO*>(0x4080C310); }
};

// M_PRG_HS_TRAIL
union M_PRG_HS_TRAIL {
  
  // Bit field definition.
  struct {
    // read-write - DPHY m_PRG_HS_TRAIL input
    uint32_t M_PRG_HS_TRAIL : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  M_PRG_HS_TRAIL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile M_PRG_HS_TRAIL &Instance() { return *reinterpret_cast<volatile M_PRG_HS_TRAIL*>(0x4080C314); }
};

// MC_PRG_HS_TRAIL
union MC_PRG_HS_TRAIL {
  
  // Bit field definition.
  struct {
    // read-write - DPHY mc_PRG_HS_TRAIL input
    uint32_t MC_PRG_HS_TRAIL : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MC_PRG_HS_TRAIL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MC_PRG_HS_TRAIL &Instance() { return *reinterpret_cast<volatile MC_PRG_HS_TRAIL*>(0x4080C318); }
};

// PD_PLL
union PD_PLL {
  
  // Power-down signal
  enum class ePD_PLL : uint32_t {
    // Power up PLL
    ePD_PLL_0 = 0,
    // Power down PLL
    ePD_PLL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Power-down signal
    ePD_PLL PD_PLL : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PD_PLL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PD_PLL &Instance() { return *reinterpret_cast<volatile PD_PLL*>(0x4080C31C); }
};

// TST
union TST {
  
  // Bit field definition.
  struct {
    // read-write - Test
    uint32_t TST : 6;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TST() = delete;
  inline void Reset() volatile { this->value = 0x00000025; }
  static inline volatile TST &Instance() { return *reinterpret_cast<volatile TST*>(0x4080C320); }
};

// CN
union CN {
  
  // Bit field definition.
  struct {
    // read-write - Control N divider
    uint32_t CN : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CN &Instance() { return *reinterpret_cast<volatile CN*>(0x4080C324); }
};

// CM
union CM {
  
  // Bit field definition.
  struct {
    // read-write - Control M divider
    uint32_t CM : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CM &Instance() { return *reinterpret_cast<volatile CM*>(0x4080C328); }
};

// CO
union CO {
  
  // Control O divider
  enum class eCO : uint32_t {
    // Divide by 1
    eCO_0 = 0,
    // Divide by 2
    eCO_1 = 1,
    // Divide by 4
    eCO_2 = 2,
    // Divide by 8
    eCO_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control O divider
    eCO CO : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CO &Instance() { return *reinterpret_cast<volatile CO*>(0x4080C32C); }
};

// LOCK
union LOCK {
  
  // Lock Detect output
  enum class eLOCK : uint32_t {
    // PLL not locked
    eLOCK_0 = 0,
    // PLL has achieved frequency lock
    eLOCK_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Lock Detect output
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCK &Instance() { return *reinterpret_cast<volatile LOCK*>(0x4080C330); }
};

// LOCK_BYP
union LOCK_BYP {
  
  // DPHY LOCK_BYP input
  enum class eLOCK_BYP : uint32_t {
    // PLL LOCK signal will gate TxByteClkHS clock
    eGATE = 0,
    // PLL LOCK signal will not gate TxByteClkHS clock, CIL based counter will be used to gate the TxByteClkHS
    eNOGATE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DPHY LOCK_BYP input
    eLOCK_BYP LOCK_BYP : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCK_BYP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCK_BYP &Instance() { return *reinterpret_cast<volatile LOCK_BYP*>(0x4080C334); }
};

// TX_RCAL
union TX_RCAL {
  
  // On-chip termination control bits for manual calibration of HS-TX
  enum class eTX_RCAL : uint32_t {
    // 20% higher than mid-range. Highest impedance setting
    eTX_RCAL_0 = 0,
    // Mid-range impedance setting (default)
    eTX_RCAL_1 = 1,
    // 15% lower than mid-range
    eTX_RCAL_2 = 2,
    // 25% lower than mid-range. Lowest impedance setting
    eTX_RCAL_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - On-chip termination control bits for manual calibration of HS-TX
    eTX_RCAL TX_RCAL : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_RCAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_RCAL &Instance() { return *reinterpret_cast<volatile TX_RCAL*>(0x4080C338); }
};

// AUTO_PD_EN
union AUTO_PD_EN {
  
  // DPHY AUTO_PD_EN input
  enum class eAUTO_PD_EN : uint32_t {
    // Inactive lanes are powered up and driving LP11
    ePWR_UP = 0,
    // inactive lanes are powered down
    ePWR_DWN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DPHY AUTO_PD_EN input
    eAUTO_PD_EN AUTO_PD_EN : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  AUTO_PD_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile AUTO_PD_EN &Instance() { return *reinterpret_cast<volatile AUTO_PD_EN*>(0x4080C33C); }
};

// RXLPRP
union RXLPRP {
  
  // Bit field definition.
  struct {
    // read-write - DPHY RXLPRP input
    uint32_t RXLPRP : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXLPRP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXLPRP &Instance() { return *reinterpret_cast<volatile RXLPRP*>(0x4080C340); }
};

// RXCDRP
union RXCDRP {
  
  // DPHY RXCDRP input
  enum class eRXCDRP : uint32_t {
    // 344mV
    eRXCDRP_0 = 0,
    // 325mV (Default)
    eRXCDRP_1 = 1,
    // 307mV
    eRXCDRP_2 = 2,
    // Invalid
    eRXCDRP_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - DPHY RXCDRP input
    eRXCDRP RXCDRP : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RXCDRP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RXCDRP &Instance() { return *reinterpret_cast<volatile RXCDRP*>(0x4080C344); }
};


} // namespace nDSI_HOST_DPHY_INTFC