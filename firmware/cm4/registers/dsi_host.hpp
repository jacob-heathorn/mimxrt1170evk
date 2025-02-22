#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // DSI HOST
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDSI_HOST {


// CFG_NUM_LANES
//
union CFG_NUM_LANES {
  
  enum class eNUM_LANES : uint32_t {
    eNUM_LANES_0 = 0, // 1 lane
    eNUM_LANES_1 = 1, // 2 lanes
  };
  
  // Bit field definition.
  struct {
    eNUM_LANES NUM_LANES : 2;
    uint32_t _reserved_end : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_NUM_LANES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_NUM_LANES &Instance() { return *reinterpret_cast<volatile CFG_NUM_LANES*>(0x4080C000); }
};

// CFG_NONCONTINUOUS_CLK
//
union CFG_NONCONTINUOUS_CLK {
  
  enum class eCLK_MODE : uint32_t {
    eCLK_MODE_0 = 0, // Continuous high speed clock
    eCLK_MODE_1 = 1, // Non-Continuous high speed clock
  };
  
  // Bit field definition.
  struct {
    eCLK_MODE CLK_MODE : 1;
    uint32_t _reserved_end : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_NONCONTINUOUS_CLK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_NONCONTINUOUS_CLK &Instance() { return *reinterpret_cast<volatile CFG_NONCONTINUOUS_CLK*>(0x4080C004); }
};

// CFG_T_PRE
//
union CFG_T_PRE {
  
  // Bit field definition.
  struct {
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_T_PRE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_T_PRE &Instance() { return *reinterpret_cast<volatile CFG_T_PRE*>(0x4080C008); }
};

// CFG_T_POST
//
union CFG_T_POST {
  
  // Bit field definition.
  struct {
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_T_POST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_T_POST &Instance() { return *reinterpret_cast<volatile CFG_T_POST*>(0x4080C00C); }
};

// CFG_TX_GAP
//
union CFG_TX_GAP {
  
  // Bit field definition.
  struct {
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_TX_GAP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_TX_GAP &Instance() { return *reinterpret_cast<volatile CFG_TX_GAP*>(0x4080C010); }
};

// CFG_AUTOINSERT_ETOP
//
union CFG_AUTOINSERT_EOTP {
  
  enum class eAUTOINSERT : uint32_t {
    eNOT_AUTO = 0, // EoTp is not automatically inserted
    eAUTO = 1, // EoTp is automatically inserted
  };
  
  // Bit field definition.
  struct {
    eAUTOINSERT AUTOINSERT : 1;
    uint32_t _reserved_end : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_AUTOINSERT_EOTP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_AUTOINSERT_EOTP &Instance() { return *reinterpret_cast<volatile CFG_AUTOINSERT_EOTP*>(0x4080C014); }
};

// CFG_EXTRA_CMDS_AFTER_ETOP
//
union CFG_EXTRA_CMDS_AFTER_EOTP {
  
  // Bit field definition.
  struct {
    uint32_t EXTRA_EOTP : 8;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_EXTRA_CMDS_AFTER_EOTP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_EXTRA_CMDS_AFTER_EOTP &Instance() { return *reinterpret_cast<volatile CFG_EXTRA_CMDS_AFTER_EOTP*>(0x4080C018); }
};

// CFG_HTX_TO_COUNT
//
union CFG_HTX_TO_COUNT {
  
  // Bit field definition.
  struct {
    uint32_t COUNT : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_HTX_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_HTX_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_HTX_TO_COUNT*>(0x4080C01C); }
};

// CFG_LRX_H_TO_COUNT
//
union CFG_LRX_H_TO_COUNT {
  
  // Bit field definition.
  struct {
    uint32_t COUNT : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_LRX_H_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_LRX_H_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_LRX_H_TO_COUNT*>(0x4080C020); }
};

// CFG_BTA_H_TO_COUNT
//
union CFG_BTA_H_TO_COUNT {
  
  // Bit field definition.
  struct {
    uint32_t COUNT : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_BTA_H_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_BTA_H_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_BTA_H_TO_COUNT*>(0x4080C024); }
};

// CFG_TWAKEUP
//
union CFG_TWAKEUP {
  
  // Bit field definition.
  struct {
    uint32_t NUM_PERIODS : 19;
    uint32_t _reserved_end : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_TWAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_TWAKEUP &Instance() { return *reinterpret_cast<volatile CFG_TWAKEUP*>(0x4080C028); }
};

// CFG_STATUS_OUT
//
union CFG_STATUS_OUT {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_STATUS_OUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_STATUS_OUT &Instance() { return *reinterpret_cast<volatile CFG_STATUS_OUT*>(0x4080C02C); }
};

// RX_ERROR_STATUS
//
union RX_ERROR_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 11;
    uint32_t _reserved_end : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_ERROR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_ERROR_STATUS &Instance() { return *reinterpret_cast<volatile RX_ERROR_STATUS*>(0x4080C030); }
};


} // namespace nDSI_HOST