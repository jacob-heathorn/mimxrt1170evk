#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MECC64
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nMECC1 {


// Error Interrupt Status Register
//
union ERR_STATUS {
  
  enum class eSINGLE_ERR0 : uint32_t {
    eSINGLE_ERR0_0 = 0, // Single bit error does not happen on OCRAM bank0.
    eSINGLE_ERR0_1 = 1, // Single bit error happens on OCRAM bank0.
  };
  
  enum class eSINGLE_ERR1 : uint32_t {
    eSINGLE_ERR1_0 = 0, // Single bit error does not happen on OCRAM bank1.
    eSINGLE_ERR1_1 = 1, // Single bit error happens on OCRAM bank1.
  };
  
  enum class eSINGLE_ERR2 : uint32_t {
    eSINGLE_ERR2_0 = 0, // Single bit error does not happen on OCRAM bank2.
    eSINGLE_ERR2_1 = 1, // Single bit error happens on OCRAM bank2.
  };
  
  enum class eSINGLE_ERR3 : uint32_t {
    eSINGLE_ERR3_0 = 0, // Single bit error does not happen on OCRAM bank3.
    eSINGLE_ERR3_1 = 1, // Single bit error happens on OCRAM bank3.
  };
  
  enum class eMULTI_ERR0 : uint32_t {
    eMULTI_ERR0_0 = 0, // Multiple bits error does not happen on OCRAM bank0.
    eMULTI_ERR0_1 = 1, // Multiple bits error happens on OCRAM bank0.
  };
  
  enum class eMULTI_ERR1 : uint32_t {
    eMULTI_ERR1_0 = 0, // Multiple bits error does not happen on OCRAM bank1.
    eMULTI_ERR1_1 = 1, // Multiple bits error happens on OCRAM bank1.
  };
  
  enum class eMULTI_ERR2 : uint32_t {
    eMULTI_ERR2_0 = 0, // Multiple bits error does not happen on OCRAM bank2.
    eMULTI_ERR2_1 = 1, // Multiple bits error happens on OCRAM bank2.
  };
  
  enum class eMULTI_ERR3 : uint32_t {
    eMULTI_ERR3_0 = 0, // Multiple bits error does not happen on OCRAM bank3.
    eMULTI_ERR3_1 = 1, // Multiple bits error happens on OCRAM bank3.
  };
  
  enum class eSTRB_ERR0 : uint32_t {
    eSTRB_ERR0_0 = 0, // AXI strobe error does not happen on OCRAM bank0.
    eSTRB_ERR0_1 = 1, // AXI strobe error happens on OCRAM bank0.
  };
  
  enum class eSTRB_ERR1 : uint32_t {
    eSTRB_ERR1_0 = 0, // AXI strobe error does not happen on OCRAM bank1.
    eSTRB_ERR1_1 = 1, // AXI strobe error happens on OCRAM bank1.
  };
  
  enum class eSTRB_ERR2 : uint32_t {
    eSTRB_ERR2_0 = 0, // AXI strobe error does not happen on OCRAM bank2.
    eSTRB_ERR2_1 = 1, // AXI strobe error happens on OCRAM bank2.
  };
  
  enum class eSTRB_ERR3 : uint32_t {
    eSTRB_ERR3_0 = 0, // AXI strobe error does not happen on OCRAM bank3.
    eSTRB_ERR3_1 = 1, // AXI strobe error happens on OCRAM bank3.
  };
  
  enum class eADDR_ERR0 : uint32_t {
    eADDR_ERR0_0 = 0, // OCRAM access error does not happen on OCRAM bank0.
    eADDR_ERR0_1 = 1, // OCRAM access error happens on OCRAM bank0.
  };
  
  enum class eADDR_ERR1 : uint32_t {
    eADDR_ERR1_0 = 0, // OCRAM access error does not happen on OCRAM bank1.
    eADDR_ERR1_1 = 1, // OCRAM access error happens on OCRAM bank1.
  };
  
  enum class eADDR_ERR2 : uint32_t {
    eADDR_ERR2_0 = 0, // OCRAM access error does not happen on OCRAM bank2.
    eADDR_ERR2_1 = 1, // OCRAM access error happens on OCRAM bank2.
  };
  
  enum class eADDR_ERR3 : uint32_t {
    eADDR_ERR3_0 = 0, // OCRAM access error does not happen on OCRAM bank3.
    eADDR_ERR3_1 = 1, // OCRAM access error happens on OCRAM bank3.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error On OCRAM Bank0
    eSINGLE_ERR0 SINGLE_ERR0 : 1;
    /// read-write - Single Bit Error On OCRAM Bank1
    eSINGLE_ERR1 SINGLE_ERR1 : 1;
    /// read-write - Single Bit Error On OCRAM Bank2
    eSINGLE_ERR2 SINGLE_ERR2 : 1;
    /// read-write - Single Bit Error On OCRAM Bank3
    eSINGLE_ERR3 SINGLE_ERR3 : 1;
    /// read-write - Multiple Bits Error On OCRAM Bank0
    eMULTI_ERR0 MULTI_ERR0 : 1;
    /// read-write - Multiple Bits Error On OCRAM Bank1
    eMULTI_ERR1 MULTI_ERR1 : 1;
    /// read-write - Multiple Bits Error On OCRAM Bank2
    eMULTI_ERR2 MULTI_ERR2 : 1;
    /// read-write - Multiple Bits Error On OCRAM Bank3
    eMULTI_ERR3 MULTI_ERR3 : 1;
    /// read-write - AXI Strobe Error On OCRAM Bank0
    eSTRB_ERR0 STRB_ERR0 : 1;
    /// read-write - AXI Strobe Error On OCRAM Bank1
    eSTRB_ERR1 STRB_ERR1 : 1;
    /// read-write - AXI Strobe Error On OCRAM Bank2
    eSTRB_ERR2 STRB_ERR2 : 1;
    /// read-write - AXI Strobe Error On OCRAM Bank3
    eSTRB_ERR3 STRB_ERR3 : 1;
    /// read-write - OCRAM Access Error On Bank0
    eADDR_ERR0 ADDR_ERR0 : 1;
    /// read-write - OCRAM Access Error On Bank1
    eADDR_ERR1 ADDR_ERR1 : 1;
    /// read-write - OCRAM Access Error On Bank2
    eADDR_ERR2 ADDR_ERR2 : 1;
    /// read-write - OCRAM Access Error On Bank3
    eADDR_ERR3 ADDR_ERR3 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STATUS &Instance() { return *reinterpret_cast<volatile ERR_STATUS*>(0x40014000); }
};

// Error Interrupt Status Enable Register
//
union ERR_STAT_EN {
  
  enum class eSINGLE_ERR0_STAT_EN : uint32_t {
    eSINGLE_ERR0_STAT_EN_0 = 0, // Disabled
    eSINGLE_ERR0_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR1_STAT_EN : uint32_t {
    eSINGLE_ERR1_STAT_EN_0 = 0, // Disabled
    eSINGLE_ERR1_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR2_STAT_EN : uint32_t {
    eSINGLE_ERR2_STAT_EN_0 = 0, // Disabled
    eSINGLE_ERR2_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR3_STAT_EN : uint32_t {
    eSINGLE_ERR3_STAT_EN_0 = 0, // Disabled
    eSINGLE_ERR3_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR0_STAT_EN : uint32_t {
    eMULTI_ERR0_STAT_EN_0 = 0, // Disabled
    eMULTI_ERR0_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR1_STAT_EN : uint32_t {
    eMULTI_ERR1_STAT_EN_0 = 0, // Disabled
    eMULTI_ERR1_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR2_STAT_EN : uint32_t {
    eMULTI_ERR2_STAT_EN_0 = 0, // Disabled
    eMULTI_ERR2_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR3_STAT_EN : uint32_t {
    eMULTI_ERR3_STAT_EN_0 = 0, // Disabled
    eMULTI_ERR3_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR0_STAT_EN : uint32_t {
    eSTRB_ERR0_STAT_EN_0 = 0, // Disabled
    eSTRB_ERR0_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR1_STAT_EN : uint32_t {
    eSTRB_ERR1_STAT_EN_0 = 0, // Disabled
    eSTRB_ERR1_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR2_STAT_EN : uint32_t {
    eSTRB_ERR2_STAT_EN_0 = 0, // Disabled
    eSTRB_ERR2_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR3_STAT_EN : uint32_t {
    eSTRB_ERR3_STAT_EN_0 = 0, // Disabled
    eSTRB_ERR3_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR0_STAT_EN : uint32_t {
    eADDR_ERR0_STAT_EN_0 = 0, // Disabled
    eADDR_ERR0_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR1_STAT_EN : uint32_t {
    eADDR_ERR1_STAT_EN_0 = 0, // Disabled
    eADDR_ERR1_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR2_STAT_EN : uint32_t {
    eADDR_ERR2_STAT_EN_0 = 0, // Disabled
    eADDR_ERR2_STAT_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR3_STAT_EN : uint32_t {
    eADDR_ERR3_STAT_EN_0 = 0, // Disabled
    eADDR_ERR3_STAT_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error Status Enable On OCRAM Bank0
    eSINGLE_ERR0_STAT_EN SINGLE_ERR0_STAT_EN : 1;
    /// read-write - Single Bit Error Status Enable On OCRAM Bank1
    eSINGLE_ERR1_STAT_EN SINGLE_ERR1_STAT_EN : 1;
    /// read-write - Single Bit Error Status Enable On OCRAM Bank2
    eSINGLE_ERR2_STAT_EN SINGLE_ERR2_STAT_EN : 1;
    /// read-write - Single Bit Error Status Enable On OCRAM Bank3
    eSINGLE_ERR3_STAT_EN SINGLE_ERR3_STAT_EN : 1;
    /// read-write - Multiple Bits Error Status Enable On OCRAM Bank0
    eMULTI_ERR0_STAT_EN MULTI_ERR0_STAT_EN : 1;
    /// read-write - Multiple Bits Error Status Enable On OCRAM Bank1
    eMULTI_ERR1_STAT_EN MULTI_ERR1_STAT_EN : 1;
    /// read-write - Multiple Bits Error Status Enable On OCRAM Bank2
    eMULTI_ERR2_STAT_EN MULTI_ERR2_STAT_EN : 1;
    /// read-write - Multiple Bits Error Status Enable On OCRAM Bank3
    eMULTI_ERR3_STAT_EN MULTI_ERR3_STAT_EN : 1;
    /// read-write - AXI Strobe Error Status Enable On OCRAM Bank0
    eSTRB_ERR0_STAT_EN STRB_ERR0_STAT_EN : 1;
    /// read-write - AXI Strobe Error Status Enable On OCRAM Bank1
    eSTRB_ERR1_STAT_EN STRB_ERR1_STAT_EN : 1;
    /// read-write - AXI Strobe Error Status Enable On OCRAM Bank2
    eSTRB_ERR2_STAT_EN STRB_ERR2_STAT_EN : 1;
    /// read-write - AXI Strobe Error Status Enable On OCRAM Bank3
    eSTRB_ERR3_STAT_EN STRB_ERR3_STAT_EN : 1;
    /// read-write - OCRAM Access Error Status Enable On Bank0
    eADDR_ERR0_STAT_EN ADDR_ERR0_STAT_EN : 1;
    /// read-write - OCRAM Access Error Status Enable On Bank1
    eADDR_ERR1_STAT_EN ADDR_ERR1_STAT_EN : 1;
    /// read-write - OCRAM Access Error Status Enable On Bank2
    eADDR_ERR2_STAT_EN ADDR_ERR2_STAT_EN : 1;
    /// read-write - OCRAM Access Error Status Enable On Bank3
    eADDR_ERR3_STAT_EN ADDR_ERR3_STAT_EN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_STAT_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_STAT_EN &Instance() { return *reinterpret_cast<volatile ERR_STAT_EN*>(0x40014004); }
};

// Error Interrupt Enable Register
//
union ERR_SIG_EN {
  
  enum class eSINGLE_ERR0_SIG_EN : uint32_t {
    eSINGLE_ERR0_SIG_EN_0 = 0, // Disabled
    eSINGLE_ERR0_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR1_SIG_EN : uint32_t {
    eSINGLE_ERR1_SIG_EN_0 = 0, // Disabled
    eSINGLE_ERR1_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR2_SIG_EN : uint32_t {
    eSINGLE_ERR2_SIG_EN_0 = 0, // Disabled
    eSINGLE_ERR2_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSINGLE_ERR3_SIG_EN : uint32_t {
    eSINGLE_ERR3_SIG_EN_0 = 0, // Disabled
    eSINGLE_ERR3_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR0_SIG_EN : uint32_t {
    eMULTI_ERR0_SIG_EN_0 = 0, // Disabled
    eMULTI_ERR0_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR1_SIG_EN : uint32_t {
    eMULTI_ERR1_SIG_EN_0 = 0, // Disabled
    eMULTI_ERR1_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR2_SIG_EN : uint32_t {
    eMULTI_ERR2_SIG_EN_0 = 0, // Disabled
    eMULTI_ERR2_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eMULTI_ERR3_SIG_EN : uint32_t {
    eMULTI_ERR3_SIG_EN_0 = 0, // Disabled
    eMULTI_ERR3_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR0_SIG_EN : uint32_t {
    eSTRB_ERR0_SIG_EN_0 = 0, // Disabled
    eSTRB_ERR0_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR1_SIG_EN : uint32_t {
    eSTRB_ERR1_SIG_EN_0 = 0, // Disabled
    eSTRB_ERR1_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR2_SIG_EN : uint32_t {
    eSTRB_ERR2_SIG_EN_0 = 0, // Disabled
    eSTRB_ERR2_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eSTRB_ERR3_SIG_EN : uint32_t {
    eSTRB_ERR3_SIG_EN_0 = 0, // Disabled
    eSTRB_ERR3_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR0_SIG_EN : uint32_t {
    eADDR_ERR0_SIG_EN_0 = 0, // Disabled
    eADDR_ERR0_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR1_SIG_EN : uint32_t {
    eADDR_ERR1_SIG_EN_0 = 0, // Disabled
    eADDR_ERR1_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR2_SIG_EN : uint32_t {
    eADDR_ERR2_SIG_EN_0 = 0, // Disabled
    eADDR_ERR2_SIG_EN_1 = 1, // Enabled
  };
  
  enum class eADDR_ERR3_SIG_EN : uint32_t {
    eADDR_ERR3_SIG_EN_0 = 0, // Disabled
    eADDR_ERR3_SIG_EN_1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Single Bit Error Interrupt Enable On OCRAM Bank0
    eSINGLE_ERR0_SIG_EN SINGLE_ERR0_SIG_EN : 1;
    /// read-write - Single Bit Error Interrupt Enable On OCRAM Bank1
    eSINGLE_ERR1_SIG_EN SINGLE_ERR1_SIG_EN : 1;
    /// read-write - Single Bit Error Interrupt Enable On OCRAM Bank2
    eSINGLE_ERR2_SIG_EN SINGLE_ERR2_SIG_EN : 1;
    /// read-write - Single Bit Error Interrupt Enable On OCRAM Bank3
    eSINGLE_ERR3_SIG_EN SINGLE_ERR3_SIG_EN : 1;
    /// read-write - Multiple Bits Error Interrupt Enable On OCRAM Bank0
    eMULTI_ERR0_SIG_EN MULTI_ERR0_SIG_EN : 1;
    /// read-write - Multiple Bits Error Interrupt Enable On OCRAM Bank1
    eMULTI_ERR1_SIG_EN MULTI_ERR1_SIG_EN : 1;
    /// read-write - Multiple Bits Error Interrupt Enable On OCRAM Bank2
    eMULTI_ERR2_SIG_EN MULTI_ERR2_SIG_EN : 1;
    /// read-write - Multiple Bits Error Interrupt Enable On OCRAM Bank3
    eMULTI_ERR3_SIG_EN MULTI_ERR3_SIG_EN : 1;
    /// read-write - AXI Strobe Error Interrupt Enable On OCRAM Bank0
    eSTRB_ERR0_SIG_EN STRB_ERR0_SIG_EN : 1;
    /// read-write - AXI Strobe Error Interrupt Enable On OCRAM Bank1
    eSTRB_ERR1_SIG_EN STRB_ERR1_SIG_EN : 1;
    /// read-write - AXI Strobe Error Interrupt Enable On OCRAM Bank2
    eSTRB_ERR2_SIG_EN STRB_ERR2_SIG_EN : 1;
    /// read-write - AXI Strobe Error Interrupt Enable On OCRAM Bank3
    eSTRB_ERR3_SIG_EN STRB_ERR3_SIG_EN : 1;
    /// read-write - OCRAM Access Error Interrupt Enable On Bank0
    eADDR_ERR0_SIG_EN ADDR_ERR0_SIG_EN : 1;
    /// read-write - OCRAM Access Error Interrupt Enable On Bank1
    eADDR_ERR1_SIG_EN ADDR_ERR1_SIG_EN : 1;
    /// read-write - OCRAM Access Error Interrupt Enable On Bank2
    eADDR_ERR2_SIG_EN ADDR_ERR2_SIG_EN : 1;
    /// read-write - OCRAM Access Error Interrupt Enable On Bank3
    eADDR_ERR3_SIG_EN ADDR_ERR3_SIG_EN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_SIG_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_SIG_EN &Instance() { return *reinterpret_cast<volatile ERR_SIG_EN*>(0x40014008); }
};

// Error Injection On LOW 32 bits Of OCRAM Bank0 Write Data
//
union ERR_DATA_INJ_LOW0 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On LOW 32 bits Of OCRAM Bank0 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_LOW0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_LOW0 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_LOW0*>(0x4001400C); }
};

// Error Injection On HIGH 32 bits Of OCRAM Bank0 Write Data
//
union ERR_DATA_INJ_HIGH0 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On HIGH 32 bits Of OCRAM Bank0 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_HIGH0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_HIGH0 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_HIGH0*>(0x40014010); }
};

// Error Injection On 8 bits ECC code Of OCRAM Bank0 Write Data
//
union ERR_ECC_INJ0 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On 8 bits ECC code Of OCRAM Bank0 Write Data
    uint32_t ERR_ECC_INJ : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ0 &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ0*>(0x40014014); }
};

// Error Injection On LOW 32 bits Of OCRAM Bank1 Write Data
//
union ERR_DATA_INJ_LOW1 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On LOW 32 bits Of OCRAM Bank1 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_LOW1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_LOW1 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_LOW1*>(0x40014018); }
};

// Error Injection On HIGH 32 bits Of OCRAM Bank1 Write Data
//
union ERR_DATA_INJ_HIGH1 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On HIGH 32 bits Of OCRAM Bank1 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_HIGH1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_HIGH1 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_HIGH1*>(0x4001401C); }
};

// Error Injection On 8 bits ECC code Of OCRAM Bank1 Write Data
//
union ERR_ECC_INJ1 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On 8 bits ECC code Of OCRAM Bank1 Write Data
    uint32_t ERR_ECC_INJ : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ1 &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ1*>(0x40014020); }
};

// Error Injection On LOW 32 bits Of OCRAM Bank2 Write Data
//
union ERR_DATA_INJ_LOW2 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On LOW 32 bits Of OCRAM Bank2 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_LOW2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_LOW2 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_LOW2*>(0x40014024); }
};

// Error Injection On HIGH 32 bits Of OCRAM Bank2 Write Data
//
union ERR_DATA_INJ_HIGH2 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On HIGH 32 bits Of OCRAM Bank2 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_HIGH2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_HIGH2 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_HIGH2*>(0x40014028); }
};

// Error Injection On 8 bits ECC code Of OCRAM Bank2 Write Data
//
union ERR_ECC_INJ2 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On 8 bits ECC code Of OCRAM Bank2 Write Data
    uint32_t ERR_ECC_INJ : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ2 &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ2*>(0x4001402C); }
};

// Error Injection On LOW 32 bits Of OCRAM Bank3 Write Data
//
union ERR_DATA_INJ_LOW3 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On LOW 32 bits Of OCRAM Bank3 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_LOW3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_LOW3 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_LOW3*>(0x40014030); }
};

// Error Injection On HIGH 32 bits Of OCRAM Bank3 Write Data
//
union ERR_DATA_INJ_HIGH3 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On HIGH 32 bits Of OCRAM Bank3 Write Data
    uint32_t ERR_DATA_INJ : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_DATA_INJ_HIGH3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_DATA_INJ_HIGH3 &Instance() { return *reinterpret_cast<volatile ERR_DATA_INJ_HIGH3*>(0x40014034); }
};

// Error Injection On 8 bits ECC code Of OCRAM Bank3 Write Data
//
union ERR_ECC_INJ3 {
  
  // Bit field definition.
  struct {
    /// read-write - Error Injection On 8 bits ECC code Of OCRAM Bank3 Write Data
    uint32_t ERR_ECC_INJ : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ERR_ECC_INJ3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ERR_ECC_INJ3 &Instance() { return *reinterpret_cast<volatile ERR_ECC_INJ3*>(0x40014038); }
};

// Single Error Address And ECC code On OCRAM Bank0
//
union SINGLE_ERR_ADDR_ECC0 {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error ECC code On OCRAM Bank0
    uint32_t SINGLE_ERR_ECC : 8;
    /// read-only - Single Error Address On OCRAM Bank0
    uint32_t SINGLE_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR_ECC0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR_ECC0 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR_ECC0*>(0x4001403C); }
};

// LOW 32 Bits Single Error Read Data On OCRAM Bank0
//
union SINGLE_ERR_DATA_LOW0 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Single Error Read Data On OCRAM Bank0
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_LOW0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_LOW0 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_LOW0*>(0x40014040); }
};

// HIGH 32 Bits Single Error Read Data On OCRAM Bank0
//
union SINGLE_ERR_DATA_HIGH0 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Single Error Read Data On OCRAM Bank0
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_HIGH0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_HIGH0 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_HIGH0*>(0x40014044); }
};

// LOW Single Error Bit Position On OCRAM Bank0
//
union SINGLE_ERR_POS_LOW0 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW Single Error Bit Position On OCRAM Bank0
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_LOW0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_LOW0 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_LOW0*>(0x40014048); }
};

// HIGH Single Error Bit Position On OCRAM Bank0
//
union SINGLE_ERR_POS_HIGH0 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH Single Error Bit Position On OCRAM Bank0
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_HIGH0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_HIGH0 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_HIGH0*>(0x4001404C); }
};

// Single Error Address And ECC code On OCRAM Bank1
//
union SINGLE_ERR_ADDR_ECC1 {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error ECC code On OCRAM Bank1
    uint32_t SINGLE_ERR_ECC : 8;
    /// read-only - Single Error Address On OCRAM Bank1
    uint32_t SINGLE_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR_ECC1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR_ECC1 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR_ECC1*>(0x40014050); }
};

// LOW 32 Bits Single Error Read Data On OCRAM Bank1
//
union SINGLE_ERR_DATA_LOW1 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Single Error Read Data On OCRAM Bank1
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_LOW1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_LOW1 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_LOW1*>(0x40014054); }
};

// HIGH 32 Bits Single Error Read Data On OCRAM Bank1
//
union SINGLE_ERR_DATA_HIGH1 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Single Error Read Data On OCRAM Bank1
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_HIGH1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_HIGH1 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_HIGH1*>(0x40014058); }
};

// LOW Single Error Bit Position On OCRAM Bank1
//
union SINGLE_ERR_POS_LOW1 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW Single Error Bit Position On OCRAM Bank1
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_LOW1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_LOW1 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_LOW1*>(0x4001405C); }
};

// HIGH Single Error Bit Position On OCRAM Bank1
//
union SINGLE_ERR_POS_HIGH1 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH Single Error Bit Position On OCRAM Bank1
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_HIGH1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_HIGH1 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_HIGH1*>(0x40014060); }
};

// Single Error Address And ECC code On OCRAM Bank2
//
union SINGLE_ERR_ADDR_ECC2 {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error ECC code On OCRAM Bank2
    uint32_t SINGLE_ERR_ECC : 8;
    /// read-only - Single Error Address On OCRAM Bank2
    uint32_t SINGLE_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR_ECC2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR_ECC2 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR_ECC2*>(0x40014064); }
};

// LOW 32 Bits Single Error Read Data On OCRAM Bank2
//
union SINGLE_ERR_DATA_LOW2 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Single Error Read Data On OCRAM Bank2
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_LOW2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_LOW2 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_LOW2*>(0x40014068); }
};

// HIGH 32 Bits Single Error Read Data On OCRAM Bank2
//
union SINGLE_ERR_DATA_HIGH2 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Single Error Read Data On OCRAM Bank2
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_HIGH2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_HIGH2 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_HIGH2*>(0x4001406C); }
};

// LOW Single Error Bit Position On OCRAM Bank2
//
union SINGLE_ERR_POS_LOW2 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW Single Error Bit Position On OCRAM Bank2
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_LOW2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_LOW2 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_LOW2*>(0x40014070); }
};

// HIGH Single Error Bit Position On OCRAM Bank2
//
union SINGLE_ERR_POS_HIGH2 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH Single Error Bit Position On OCRAM Bank2
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_HIGH2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_HIGH2 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_HIGH2*>(0x40014074); }
};

// Single Error Address And ECC code On OCRAM Bank3
//
union SINGLE_ERR_ADDR_ECC3 {
  
  // Bit field definition.
  struct {
    /// read-only - Single Error ECC code On OCRAM Bank3
    uint32_t SINGLE_ERR_ECC : 8;
    /// read-only - Single Error Address On OCRAM Bank3
    uint32_t SINGLE_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_ADDR_ECC3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_ADDR_ECC3 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_ADDR_ECC3*>(0x40014078); }
};

// LOW 32 Bits Single Error Read Data On OCRAM Bank3
//
union SINGLE_ERR_DATA_LOW3 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Single Error Read Data On OCRAM Bank3
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_LOW3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_LOW3 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_LOW3*>(0x4001407C); }
};

// HIGH 32 Bits Single Error Read Data On OCRAM Bank3
//
union SINGLE_ERR_DATA_HIGH3 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Single Error Read Data On OCRAM Bank3
    uint32_t SINGLE_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_DATA_HIGH3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_DATA_HIGH3 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_DATA_HIGH3*>(0x40014080); }
};

// LOW Single Error Bit Position On OCRAM Bank3
//
union SINGLE_ERR_POS_LOW3 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW Single Error Bit Position On OCRAM Bank3
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_LOW3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_LOW3 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_LOW3*>(0x40014084); }
};

// HIGH Single Error Bit Position On OCRAM Bank3
//
union SINGLE_ERR_POS_HIGH3 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH Single Error Bit Position On OCRAM Bank3
    uint32_t SINGLE_ERR_POS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SINGLE_ERR_POS_HIGH3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SINGLE_ERR_POS_HIGH3 &Instance() { return *reinterpret_cast<volatile SINGLE_ERR_POS_HIGH3*>(0x40014088); }
};

// Multiple Error Address And ECC code On OCRAM Bank0
//
union MULTI_ERR_ADDR_ECC0 {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error ECC code On OCRAM Bank0
    uint32_t MULTI_ERR_ECC : 8;
    /// read-only - Multiple Error Address On OCRAM Bank0
    uint32_t MULTI_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR_ECC0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR_ECC0 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR_ECC0*>(0x4001408C); }
};

// LOW 32 Bits Multiple Error Read Data On OCRAM Bank0
//
union MULTI_ERR_DATA_LOW0 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Multiple Error Read Data On OCRAM Bank0
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_LOW0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_LOW0 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_LOW0*>(0x40014090); }
};

// HIGH 32 Bits Multiple Error Read Data On OCRAM Bank0
//
union MULTI_ERR_DATA_HIGH0 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Multiple Error Read Data On OCRAM Bank0
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_HIGH0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_HIGH0 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_HIGH0*>(0x40014094); }
};

// Multiple Error Address And ECC code On OCRAM Bank1
//
union MULTI_ERR_ADDR_ECC1 {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error ECC code On OCRAM Bank1
    uint32_t MULTI_ERR_ECC : 8;
    /// read-only - Multiple Error Address On OCRAM Bank1
    uint32_t MULTI_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR_ECC1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR_ECC1 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR_ECC1*>(0x40014098); }
};

// LOW 32 Bits Multiple Error Read Data On OCRAM Bank1
//
union MULTI_ERR_DATA_LOW1 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Multiple Error Read Data On OCRAM Bank1
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_LOW1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_LOW1 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_LOW1*>(0x4001409C); }
};

// HIGH 32 Bits Multiple Error Read Data On OCRAM Bank1
//
union MULTI_ERR_DATA_HIGH1 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Multiple Error Read Data On OCRAM Bank1
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_HIGH1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_HIGH1 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_HIGH1*>(0x400140A0); }
};

// Multiple Error Address And ECC code On OCRAM Bank2
//
union MULTI_ERR_ADDR_ECC2 {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error ECC code On OCRAM Bank2
    uint32_t MULTI_ERR_ECC : 8;
    /// read-only - Multiple Error Address On OCRAM Bank2
    uint32_t MULTI_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR_ECC2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR_ECC2 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR_ECC2*>(0x400140A4); }
};

// LOW 32 Bits Multiple Error Read Data On OCRAM Bank2
//
union MULTI_ERR_DATA_LOW2 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Multiple Error Read Data On OCRAM Bank2
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_LOW2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_LOW2 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_LOW2*>(0x400140A8); }
};

// HIGH 32 Bits Multiple Error Read Data On OCRAM Bank2
//
union MULTI_ERR_DATA_HIGH2 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Multiple Error Read Data On OCRAM Bank2
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_HIGH2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_HIGH2 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_HIGH2*>(0x400140AC); }
};

// Multiple Error Address And ECC code On OCRAM Bank3
//
union MULTI_ERR_ADDR_ECC3 {
  
  // Bit field definition.
  struct {
    /// read-only - Multiple Error ECC code On OCRAM Bank3
    uint32_t MULTI_ERR_ECC : 8;
    /// read-only - Multiple Error Address On OCRAM Bank3
    uint32_t MULTI_ERR_ADDR : 19;
    uint32_t _reserved_0 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_ADDR_ECC3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_ADDR_ECC3 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_ADDR_ECC3*>(0x400140B0); }
};

// LOW 32 Bits Multiple Error Read Data On OCRAM Bank3
//
union MULTI_ERR_DATA_LOW3 {
  
  // Bit field definition.
  struct {
    /// read-only - LOW 32 Bits Multiple Error Read Data On OCRAM Bank3
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_LOW3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_LOW3 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_LOW3*>(0x400140B4); }
};

// HIGH 32 Bits Multiple Error Read Data On OCRAM Bank3
//
union MULTI_ERR_DATA_HIGH3 {
  
  // Bit field definition.
  struct {
    /// read-only - HIGH 32 Bits Multiple Error Read Data On OCRAM Bank3
    uint32_t MULTI_ERR_DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MULTI_ERR_DATA_HIGH3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MULTI_ERR_DATA_HIGH3 &Instance() { return *reinterpret_cast<volatile MULTI_ERR_DATA_HIGH3*>(0x400140B8); }
};

// OCRAM Pipeline And ECC Enable
//
union PIPE_ECC_EN {
  
  enum class eREAD_DATA_WAIT_EN : uint32_t {
    eREAD_DATA_WAIT_EN_0 = 0, // Disable.
    eREAD_DATA_WAIT_EN_1 = 1, // Enable.
  };
  
  enum class eREAD_ADDR_PIPE_EN : uint32_t {
    eREAD_ADDR_PIPE_EN_0 = 0, // Disable.
    eREAD_ADDR_PIPE_EN_1 = 1, // Enable.
  };
  
  enum class eWRITE_DATA_PIPE_EN : uint32_t {
    eWRITE_DATA_PIPE_EN_0 = 0, // Disable.
    eWRITE_DATA_PIPE_EN_1 = 1, // Enable.
  };
  
  enum class eWRITE_ADDR_PIPE_EN : uint32_t {
    eWRITE_ADDR_PIPE_EN_0 = 0, // Disable.
    eWRITE_ADDR_PIPE_EN_1 = 1, // Enable.
  };
  
  enum class eECC_EN : uint32_t {
    eECC_EN_0 = 0, // Disable.
    eECC_EN_1 = 1, // Enable.
  };
  
  // Bit field definition.
  struct {
    /// read-write - Read Data Wait Enable
    eREAD_DATA_WAIT_EN READ_DATA_WAIT_EN : 1;
    /// read-write - Read Address Pipeline Enable
    eREAD_ADDR_PIPE_EN READ_ADDR_PIPE_EN : 1;
    /// read-write - Write Data Pipeline Enable
    eWRITE_DATA_PIPE_EN WRITE_DATA_PIPE_EN : 1;
    /// read-write - Write Address Pipeline Enable
    eWRITE_ADDR_PIPE_EN WRITE_ADDR_PIPE_EN : 1;
    /// read-write - ECC Function Enable
    eECC_EN ECC_EN : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIPE_ECC_EN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIPE_ECC_EN &Instance() { return *reinterpret_cast<volatile PIPE_ECC_EN*>(0x40014100); }
};

// Pending Status
//
union PENDING_STAT {
  
  enum class eREAD_DATA_WAIT_PENDING : uint32_t {
    eREAD_DATA_WAIT_PENDING_0 = 0, // No update pending status for READ_DATA_WAIT_EN.
    eREAD_DATA_WAIT_PENDING_1 = 1, // When READ_DATA_WAIT_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
  };
  
  enum class eREAD_ADDR_PIPE_PENDING : uint32_t {
    eREAD_ADDR_PIPE_PENDING_0 = 0, // No update pending status for READ_ADDR_PIPE_EN.
    eREAD_ADDR_PIPE_PENDING_1 = 1, // When READ_ADDR_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
  };
  
  enum class eWRITE_DATA_PIPE_PENDING : uint32_t {
    eWRITE_DATA_PIPE_PENDING_0 = 0, // No update pending status for WRITE_DATA_PIPE_EN.
    eWRITE_DATA_PIPE_PENDING_1 = 1, // When WRITE_DATA_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
  };
  
  enum class eWRITE_ADDR_PIPE_PENDING : uint32_t {
    eWRITE_ADDR_PIPE_PENDING_0 = 0, // No update pending status for WRITE_ADDR_PIPE_EN.
    eWRITE_ADDR_PIPE_PENDING_1 = 1, // When WRITE_ADDR_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
  };
  
  // Bit field definition.
  struct {
    /// read-only - Read Data Wait Pending
    eREAD_DATA_WAIT_PENDING READ_DATA_WAIT_PENDING : 1;
    /// read-only - Read Address Pipeline Pending
    eREAD_ADDR_PIPE_PENDING READ_ADDR_PIPE_PENDING : 1;
    /// read-only - Write Data Pipeline Pending
    eWRITE_DATA_PIPE_PENDING WRITE_DATA_PIPE_PENDING : 1;
    /// read-only - Write Address Pipeline Pending
    eWRITE_ADDR_PIPE_PENDING WRITE_ADDR_PIPE_PENDING : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PENDING_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PENDING_STAT &Instance() { return *reinterpret_cast<volatile PENDING_STAT*>(0x40014104); }
};


} // namespace nMECC1