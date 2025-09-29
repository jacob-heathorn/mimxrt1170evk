#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// XECC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nXECC_FLEXSPI2 {


// ECC Control Register
union ECC_CTRL {
  
  // ECC Function Enable
  enum class eECC_EN : uint32_t {
    // Disable
    eECC_EN_0 = 0,
    // Enable
    eECC_EN_1 = 1,
  };
  
  // Write ECC Encode Function Enable
  enum class eWECC_EN : uint32_t {
    // Disable
    eWECC_EN_0 = 0,
    // Enable
    eWECC_EN_1 = 1,
  };
  
  // Read ECC Function Enable
  enum class eRECC_EN : uint32_t {
    // Disable
    eRECC_EN_0 = 0,
    // Enable
    eRECC_EN_1 = 1,
  };
  
  // Swap Data Enable
  enum class eSWAP_EN : uint32_t {
    // Disable
    eSWAP_EN_0 = 0,
    // Enable
    eSWAP_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ECC Function Enable
    eECC_EN ECC_EN : 1;
    // read-write - Write ECC Encode Function Enable
    eWECC_EN WECC_EN : 1;
    // read-write - Read ECC Function Enable
    eRECC_EN RECC_EN : 1;
    // read-write - Swap Data Enable
    eSWAP_EN SWAP_EN : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_CTRL &ref() { return *reinterpret_cast<volatile ECC_CTRL*>(0x40020000); }
};

// Error Interrupt Status Register
union ERR_STATUS {
  
  // Single Bit Error
  enum class eSINGLE_ERR : uint32_t {
    // Single bit error does not happen.
    eSINGLE_ERR_0 = 0,
    // Single bit error happens.
    eSINGLE_ERR_1 = 1,
  };
  
  // Multiple Bits Error
  enum class eMULTI_ERR : uint32_t {
    // Multiple bits error does not happen.
    eMULTI_ERR_0 = 0,
    // Multiple bits error happens.
    eMULTI_ERR_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Single Bit Error
    eSINGLE_ERR SINGLE_ERR : 1;
    // read-write - Multiple Bits Error
    eMULTI_ERR MULTI_ERR : 1;
    // read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STATUS &ref() { return *reinterpret_cast<volatile ERR_STATUS*>(0x40020004); }
};

// Error Interrupt Status Enable Register
union ERR_STAT_EN {
  
  // Single Bit Error Status Enable
  enum class eSINGLE_ERR_STAT_EN : uint32_t {
    // Masked
    eSINGLE_ERR_STAT_EN_0 = 0,
    // Enabled
    eSINGLE_ERR_STAT_EN_1 = 1,
  };
  
  // Multiple Bits Error Status Enable
  enum class eMULIT_ERR_STAT_EN : uint32_t {
    // Masked
    eMULIT_ERR_STAT_EN_0 = 0,
    // Enabled
    eMULIT_ERR_STAT_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Single Bit Error Status Enable
    eSINGLE_ERR_STAT_EN SINGLE_ERR_STAT_EN : 1;
    // read-write - Multiple Bits Error Status Enable
    eMULIT_ERR_STAT_EN MULIT_ERR_STAT_EN : 1;
    // read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STAT_EN &ref() { return *reinterpret_cast<volatile ERR_STAT_EN*>(0x40020008); }
};

// Error Interrupt Enable Register
union ERR_SIG_EN {
  
  // Single Bit Error Interrupt Enable
  enum class eSINGLE_ERR_SIG_EN : uint32_t {
    // Masked
    eSINGLE_ERR_SIG_EN_0 = 0,
    // Enabled
    eSINGLE_ERR_SIG_EN_1 = 1,
  };
  
  // Multiple Bits Error Interrupt Enable
  enum class eMULTI_ERR_SIG_EN : uint32_t {
    // Masked
    eMULTI_ERR_SIG_EN_0 = 0,
    // Enabled
    eMULTI_ERR_SIG_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Single Bit Error Interrupt Enable
    eSINGLE_ERR_SIG_EN SINGLE_ERR_SIG_EN : 1;
    // read-write - Multiple Bits Error Interrupt Enable
    eMULTI_ERR_SIG_EN MULTI_ERR_SIG_EN : 1;
    // read-only - Reserved
    uint32_t Reserved1 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_SIG_EN &ref() { return *reinterpret_cast<volatile ERR_SIG_EN*>(0x4002000C); }
};

// Error Injection On Write Data
union ERR_DATA_INJ {
  
  // Bit field definition.
  struct {
    // read-write - Error Injection On Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ &ref() { return *reinterpret_cast<volatile ERR_DATA_INJ*>(0x40020010); }
};

// Error Injection On ECC Code of Write Data
union ERR_ECC_INJ {
  
  // Bit field definition.
  struct {
    // read-write - Error Injection On ECC Code of Write Data
    uint32_t ERR_ECC_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ &ref() { return *reinterpret_cast<volatile ERR_ECC_INJ*>(0x40020014); }
};

// Single Error Address
union SINGLE_ERR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - Single Error Address
    uint32_t SINGLE_ERR_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR &ref() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR*>(0x40020018); }
};

// Single Error Read Data
union SINGLE_ERR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - Single Error Read Data
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA &ref() { return *reinterpret_cast<volatile SINGLE_ERR_DATA*>(0x4002001C); }
};

// Single Error ECC Code
union SINGLE_ERR_ECC {
  
  // Bit field definition.
  struct {
    // read-only - Single Error ECC code
    uint32_t SINGLE_ERR_ECC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ECC &ref() { return *reinterpret_cast<volatile SINGLE_ERR_ECC*>(0x40020020); }
};

// Single Error Bit Position
union SINGLE_ERR_POS {
  
  // Bit field definition.
  struct {
    // read-only - Single Error bit Position
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS &ref() { return *reinterpret_cast<volatile SINGLE_ERR_POS*>(0x40020024); }
};

// Single Error Bit Field
union SINGLE_ERR_BIT_FIELD {
  
  // Bit field definition.
  struct {
    // read-only - Single Error Bit Field
    uint32_t SINGLE_ERR_BIT_FIELD : 8;
    // read-only - Reserved
    uint32_t Reserved1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_BIT_FIELD &ref() { return *reinterpret_cast<volatile SINGLE_ERR_BIT_FIELD*>(0x40020028); }
};

// Multiple Error Address
union MULTI_ERR_ADDR {
  
  // Bit field definition.
  struct {
    // read-only - Multiple Error Address
    uint32_t MULTI_ERR_ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR &ref() { return *reinterpret_cast<volatile MULTI_ERR_ADDR*>(0x4002002C); }
};

// Multiple Error Read Data
union MULTI_ERR_DATA {
  
  // Bit field definition.
  struct {
    // read-only - Multiple Error Read Data
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA &ref() { return *reinterpret_cast<volatile MULTI_ERR_DATA*>(0x40020030); }
};

// Multiple Error ECC code
union MULTI_ERR_ECC {
  
  // Bit field definition.
  struct {
    // read-only - Multiple Error ECC code
    uint32_t MULTI_ERR_ECC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ECC &ref() { return *reinterpret_cast<volatile MULTI_ERR_ECC*>(0x40020034); }
};

// Multiple Error Bit Field
union MULTI_ERR_BIT_FIELD {
  
  // Bit field definition.
  struct {
    // read-only - Multiple Error Bit Field
    uint32_t MULTI_ERR_BIT_FIELD : 8;
    // read-only - Reserved
    uint32_t Reserved1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_BIT_FIELD &ref() { return *reinterpret_cast<volatile MULTI_ERR_BIT_FIELD*>(0x40020038); }
};

// ECC Region 0 Base Address
union ECC_BASE_ADDR0 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 0 Base Address
    uint32_t ECC_BASE_ADDR0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR0 &ref() { return *reinterpret_cast<volatile ECC_BASE_ADDR0*>(0x4002003C); }
};

// ECC Region 0 End Address
union ECC_END_ADDR0 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 0 End Address
    uint32_t ECC_END_ADDR0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR0 &ref() { return *reinterpret_cast<volatile ECC_END_ADDR0*>(0x40020040); }
};

// ECC Region 1 Base Address
union ECC_BASE_ADDR1 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 1 Base Address
    uint32_t ECC_BASE_ADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR1 &ref() { return *reinterpret_cast<volatile ECC_BASE_ADDR1*>(0x40020044); }
};

// ECC Region 1 End Address
union ECC_END_ADDR1 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 1 End Address
    uint32_t ECC_END_ADDR1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR1 &ref() { return *reinterpret_cast<volatile ECC_END_ADDR1*>(0x40020048); }
};

// ECC Region 2 Base Address
union ECC_BASE_ADDR2 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 2 Base Address
    uint32_t ECC_BASE_ADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR2 &ref() { return *reinterpret_cast<volatile ECC_BASE_ADDR2*>(0x4002004C); }
};

// ECC Region 2 End Address
union ECC_END_ADDR2 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 2 End Address
    uint32_t ECC_END_ADDR2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR2 &ref() { return *reinterpret_cast<volatile ECC_END_ADDR2*>(0x40020050); }
};

// ECC Region 3 Base Address
union ECC_BASE_ADDR3 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 3 Base Address
    uint32_t ECC_BASE_ADDR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_BASE_ADDR3 &ref() { return *reinterpret_cast<volatile ECC_BASE_ADDR3*>(0x40020054); }
};

// ECC Region 3 End Address
union ECC_END_ADDR3 {
  
  // Bit field definition.
  struct {
    // read-write - ECC Region 3 End Address
    uint32_t ECC_END_ADDR3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ECC_END_ADDR3 &ref() { return *reinterpret_cast<volatile ECC_END_ADDR3*>(0x40020058); }
};


} // namespace nXECC_FLEXSPI2