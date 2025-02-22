#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// XECC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nXECC_SEMC {


// ECC Control Register
//
union ECC_CTRL {
  
  enum class eECC_EN : uint32_t {
    eECC_EN_0 = 0, // Disable
    eECC_EN_1 = 1, // Enable
  };
  
  enum class eWECC_EN : uint32_t {
    eWECC_EN_0 = 0, // Disable
    eWECC_EN_1 = 1, // Enable
  };
  
  enum class eRECC_EN : uint32_t {
    eRECC_EN_0 = 0, // Disable
    eRECC_EN_1 = 1, // Enable
  };
  
  enum class eSWAP_EN : uint32_t {
    eSWAP_EN_0 = 0, // Disable
    eSWAP_EN_1 = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    /// read-write - ECC Function Enable
    eECC_EN ECC_EN : 1;
    /// read-write - Write ECC Encode Function Enable
    eWECC_EN WECC_EN : 1;
    /// read-write - Read ECC Function Enable
    eRECC_EN RECC_EN : 1;
    /// read-write - Swap Data Enable
    eSWAP_EN SWAP_EN : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_CTRL &Instance() { return *reinterpret_cast<volatile ECC_CTRL*>(0x40024000); }
};

// Error Interrupt Status Register
//
union ERR_STATUS {
  
  enum class eSINGLE_ERR : uint32_t {
    eSINGLE_ERR_0 = 0, // Single bit error does not happen.
    eSINGLE_ERR_1 = 1, // Single bit error happens.
  };
  
  enum class eMULTI_ERR : uint32_t {
    eMULTI_ERR_0 = 0, // Multiple bits error does not happen.
    eMULTI_ERR_1 = 1, // Multiple bits error happens.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error
    eSINGLE_ERR SINGLE_ERR : 1;
    /// read-write - Multiple Bits Error
    eMULTI_ERR MULTI_ERR : 1;
    /// read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STATUS &Instance() { return *reinterpret_cast<volatile ERR_STATUS*>(0x40024004); }
};

// Error Interrupt Status Enable Register
//
union ERR_STAT_EN {
  
  enum class eSINGLE_ERR_STAT_EN : uint32_t {
    eSINGLE_ERR_STAT_EN_0 = 0, // Masked
    eSINGLE_ERR_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eMULIT_ERR_STAT_EN : uint32_t {
    eMULIT_ERR_STAT_EN_0 = 0, // Masked
    eMULIT_ERR_STAT_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error Status Enable
    eSINGLE_ERR_STAT_EN SINGLE_ERR_STAT_EN : 1;
    /// read-write - Multiple Bits Error Status Enable
    eMULIT_ERR_STAT_EN MULIT_ERR_STAT_EN : 1;
    /// read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STAT_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STAT_EN &Instance() { return *reinterpret_cast<volatile ERR_STAT_EN*>(0x40024008); }
};

// Error Interrupt Enable Register
//
union ERR_SIG_EN {
  
  enum class eSINGLE_ERR_SIG_EN : uint32_t {
    eSINGLE_ERR_SIG_EN_0 = 0, // Masked
    eSINGLE_ERR_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR_SIG_EN : uint32_t {
    eMULTI_ERR_SIG_EN_0 = 0, // Masked
    eMULTI_ERR_SIG_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error Interrupt Enable
    eSINGLE_ERR_SIG_EN SINGLE_ERR_SIG_EN : 1;
    /// read-write - Multiple Bits Error Interrupt Enable
    eMULTI_ERR_SIG_EN MULTI_ERR_SIG_EN : 1;
    /// read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_SIG_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_SIG_EN &Instance() { return *reinterpret_cast<volatile ERR_SIG_EN*>(0x4002400C); }
};

// Error Injection On Write Data
//
union ERR_DATA_INJ {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ*>(0x40024010); }
};

// Error Injection On ECC Code of Write Data
//
union ERR_ECC_INJ {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On ECC Code of Write Data
    uint32_t ERR_ECC_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ*>(0x40024014); }
};

// Single Error Address
//
union SINGLE_ERR_ADDR {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error Address
    uint32_t SINGLE_ERR_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR*>(0x40024018); }
};

// Single Error Read Data
//
union SINGLE_ERR_DATA {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error Read Data
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA*>(0x4002401C); }
};

// Single Error ECC Code
//
union SINGLE_ERR_ECC {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error ECC code
    uint32_t SINGLE_ERR_ECC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ECC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ECC &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ECC*>(0x40024020); }
};

// Single Error Bit Position
//
union SINGLE_ERR_POS {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error bit Position
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS*>(0x40024024); }
};

// Single Error Bit Field
//
union SINGLE_ERR_BIT_FIELD {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error Bit Field
    uint32_t SINGLE_ERR_BIT_FIELD : 8;
    /// read-only - Reserved
    uint32_t Reserved1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_BIT_FIELD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_BIT_FIELD &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_BIT_FIELD*>(0x40024028); }
};

// Multiple Error Address
//
union MULTI_ERR_ADDR {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error Address
    uint32_t MULTI_ERR_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR*>(0x4002402C); }
};

// Multiple Error Read Data
//
union MULTI_ERR_DATA {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error Read Data
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA*>(0x40024030); }
};

// Multiple Error ECC code
//
union MULTI_ERR_ECC {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error ECC code
    uint32_t MULTI_ERR_ECC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ECC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ECC &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ECC*>(0x40024034); }
};

// Multiple Error Bit Field
//
union MULTI_ERR_BIT_FIELD {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error Bit Field
    uint32_t MULTI_ERR_BIT_FIELD : 8;
    /// read-only - Reserved
    uint32_t Reserved1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_BIT_FIELD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_BIT_FIELD &Instance() { return *reinterpret_cast<volatile MULTI_ERR_BIT_FIELD*>(0x40024038); }
};

// ECC Region 0 Base Address
//
union ECC_BASE_ADDR0 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 0 Base Address
    uint32_t ECC_BASE_ADDR0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR0 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR0*>(0x4002403C); }
};

// ECC Region 0 End Address
//
union ECC_END_ADDR0 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 0 End Address
    uint32_t ECC_END_ADDR0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR0 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR0*>(0x40024040); }
};

// ECC Region 1 Base Address
//
union ECC_BASE_ADDR1 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 1 Base Address
    uint32_t ECC_BASE_ADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR1 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR1*>(0x40024044); }
};

// ECC Region 1 End Address
//
union ECC_END_ADDR1 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 1 End Address
    uint32_t ECC_END_ADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR1 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR1*>(0x40024048); }
};

// ECC Region 2 Base Address
//
union ECC_BASE_ADDR2 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 2 Base Address
    uint32_t ECC_BASE_ADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR2 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR2*>(0x4002404C); }
};

// ECC Region 2 End Address
//
union ECC_END_ADDR2 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 2 End Address
    uint32_t ECC_END_ADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR2 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR2*>(0x40024050); }
};

// ECC Region 3 Base Address
//
union ECC_BASE_ADDR3 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 3 Base Address
    uint32_t ECC_BASE_ADDR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR3 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR3*>(0x40024054); }
};

// ECC Region 3 End Address
//
union ECC_END_ADDR3 {
  
  // Bit field definition.
  struct {
    /// read-write - ECC Region 3 End Address
    uint32_t ECC_END_ADDR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR3 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR3*>(0x40024058); }
};


} // namespace nXECC_SEMC