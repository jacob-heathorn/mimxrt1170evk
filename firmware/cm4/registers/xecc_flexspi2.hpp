#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // XECC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nXECC_FLEXSPI2 {


// ECC Control Register
//
union ECC_CTRL {
  
  // Enum definitions.
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
    eECC_EN ECC_EN : 1;
    eWECC_EN WECC_EN : 1;
    eRECC_EN RECC_EN : 1;
    eSWAP_EN SWAP_EN : 1;
    uint32_t _reserved_end : 28;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_CTRL &Instance() { return *reinterpret_cast<volatile ECC_CTRL*>(0x40020000); }
};

// Error Interrupt Status Register
//
union ERR_STATUS {
  
  // Enum definitions.
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
    eSINGLE_ERR SINGLE_ERR : 1;
    eMULTI_ERR MULTI_ERR : 1;
    uint32_t Reserved1 : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STATUS &Instance() { return *reinterpret_cast<volatile ERR_STATUS*>(0x40020004); }
};

// Error Interrupt Status Enable Register
//
union ERR_STAT_EN {
  
  // Enum definitions.
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
    eSINGLE_ERR_STAT_EN SINGLE_ERR_STAT_EN : 1;
    eMULIT_ERR_STAT_EN MULIT_ERR_STAT_EN : 1;
    uint32_t Reserved1 : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STAT_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STAT_EN &Instance() { return *reinterpret_cast<volatile ERR_STAT_EN*>(0x40020008); }
};

// Error Interrupt Enable Register
//
union ERR_SIG_EN {
  
  // Enum definitions.
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
    eSINGLE_ERR_SIG_EN SINGLE_ERR_SIG_EN : 1;
    eMULTI_ERR_SIG_EN MULTI_ERR_SIG_EN : 1;
    uint32_t Reserved1 : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_SIG_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_SIG_EN &Instance() { return *reinterpret_cast<volatile ERR_SIG_EN*>(0x4002000C); }
};

// Error Injection On Write Data
//
union ERR_DATA_INJ {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ERR_DATA_INJ : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ*>(0x40020010); }
};

// Error Injection On ECC Code of Write Data
//
union ERR_ECC_INJ {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ERR_ECC_INJ : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ*>(0x40020014); }
};

// Single Error Address
//
union SINGLE_ERR_ADDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SINGLE_ERR_ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR*>(0x40020018); }
};

// Single Error Read Data
//
union SINGLE_ERR_DATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA*>(0x4002001C); }
};

// Single Error ECC Code
//
union SINGLE_ERR_ECC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SINGLE_ERR_ECC : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ECC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ECC &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ECC*>(0x40020020); }
};

// Single Error Bit Position
//
union SINGLE_ERR_POS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SINGLE_ERR_POS : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS*>(0x40020024); }
};

// Single Error Bit Field
//
union SINGLE_ERR_BIT_FIELD {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t SINGLE_ERR_BIT_FIELD : 8;
    uint32_t Reserved1 : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_BIT_FIELD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_BIT_FIELD &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_BIT_FIELD*>(0x40020028); }
};

// Multiple Error Address
//
union MULTI_ERR_ADDR {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MULTI_ERR_ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR*>(0x4002002C); }
};

// Multiple Error Read Data
//
union MULTI_ERR_DATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MULTI_ERR_DATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA*>(0x40020030); }
};

// Multiple Error ECC code
//
union MULTI_ERR_ECC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MULTI_ERR_ECC : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ECC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ECC &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ECC*>(0x40020034); }
};

// Multiple Error Bit Field
//
union MULTI_ERR_BIT_FIELD {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t MULTI_ERR_BIT_FIELD : 8;
    uint32_t Reserved1 : 24;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_BIT_FIELD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_BIT_FIELD &Instance() { return *reinterpret_cast<volatile MULTI_ERR_BIT_FIELD*>(0x40020038); }
};

// ECC Region 0 Base Address
//
union ECC_BASE_ADDR0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_BASE_ADDR0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR0 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR0*>(0x4002003C); }
};

// ECC Region 0 End Address
//
union ECC_END_ADDR0 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_END_ADDR0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR0 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR0*>(0x40020040); }
};

// ECC Region 1 Base Address
//
union ECC_BASE_ADDR1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_BASE_ADDR1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR1 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR1*>(0x40020044); }
};

// ECC Region 1 End Address
//
union ECC_END_ADDR1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_END_ADDR1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR1 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR1*>(0x40020048); }
};

// ECC Region 2 Base Address
//
union ECC_BASE_ADDR2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_BASE_ADDR2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR2 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR2*>(0x4002004C); }
};

// ECC Region 2 End Address
//
union ECC_END_ADDR2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_END_ADDR2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR2 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR2*>(0x40020050); }
};

// ECC Region 3 Base Address
//
union ECC_BASE_ADDR3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_BASE_ADDR3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_BASE_ADDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR3 &Instance() { return *reinterpret_cast<volatile ECC_BASE_ADDR3*>(0x40020054); }
};

// ECC Region 3 End Address
//
union ECC_END_ADDR3 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ECC_END_ADDR3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  ECC_END_ADDR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR3 &Instance() { return *reinterpret_cast<volatile ECC_END_ADDR3*>(0x40020058); }
};


} // namespace nXECC_FLEXSPI2