#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DSI HOST
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDSI_HOST {


// CFG_NUM_LANES
union CFG_NUM_LANES {
  
  // Sets the number of active lanes that are to be used for transmitting data.
  enum class eNUM_LANES : uint32_t {
    // 1 lane
    eNUM_LANES_0 = 0,
    // 2 lanes
    eNUM_LANES_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of active lanes that are to be used for transmitting data.
    eNUM_LANES NUM_LANES : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_NUM_LANES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_NUM_LANES &Instance() { return *reinterpret_cast<volatile CFG_NUM_LANES*>(0x4080C000); }
};

// CFG_NONCONTINUOUS_CLK
union CFG_NONCONTINUOUS_CLK {
  
  // Sets the Host Controller into non-continuous MIPI clock mode. When in non-continuous clock mode, the high speed clock will transition into low power mode between transmissions.
  enum class eCLK_MODE : uint32_t {
    // Continuous high speed clock
    eCLK_MODE_0 = 0,
    // Non-Continuous high speed clock
    eCLK_MODE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets the Host Controller into non-continuous MIPI clock mode. When in non-continuous clock mode, the high speed clock will transition into low power mode between transmissions.
    eCLK_MODE CLK_MODE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_NONCONTINUOUS_CLK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_NONCONTINUOUS_CLK &Instance() { return *reinterpret_cast<volatile CFG_NONCONTINUOUS_CLK*>(0x4080C004); }
};

// CFG_T_PRE
union CFG_T_PRE {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after enabling the clock lane for HS operation before enabling the data lanes for HS operation. This setting represents the TCLK-PRE DPHY timing parameter. The minimum value for this port is 1.
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_T_PRE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_T_PRE &Instance() { return *reinterpret_cast<volatile CFG_T_PRE*>(0x4080C008); }
};

// CFG_T_POST
union CFG_T_POST {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of byte clock periods ('clk_byte' input) to wait before putting the clock lane into LP mode after the data lanes have been detected to be in Stop State. This setting represents the DPHY timing parameters TLPX + TCLK-PREPARE + TCLK-ZERO + TCLK-PRE requirement for the clock lane before the data lane is allowed to change from LP11 to start a high speed transmission. The minimum value for this port is 1.
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_T_POST() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_T_POST &Instance() { return *reinterpret_cast<volatile CFG_T_POST*>(0x4080C00C); }
};

// CFG_TX_GAP
union CFG_TX_GAP {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after the clock lane has been put into LP mode before enabling the clock lane for HS mode again. This setting represents the THS-EXIT DPHY timing parameter. The minimum value for this port is 1.
    uint32_t NUM_PERIODS : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_TX_GAP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_TX_GAP &Instance() { return *reinterpret_cast<volatile CFG_TX_GAP*>(0x4080C010); }
};

// CFG_AUTOINSERT_EOTP
union CFG_AUTOINSERT_EOTP {
  
  // Enables the Host Controller to automatically insert an EoTp short packet when switching from HS to LP mode.
  enum class eAUTOINSERT : uint32_t {
    // EoTp is not automatically inserted
    eNOT_AUTO = 0,
    // EoTp is automatically inserted
    eAUTO = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enables the Host Controller to automatically insert an EoTp short packet when switching from HS to LP mode.
    eAUTOINSERT AUTOINSERT : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_AUTOINSERT_EOTP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_AUTOINSERT_EOTP &Instance() { return *reinterpret_cast<volatile CFG_AUTOINSERT_EOTP*>(0x4080C014); }
};

// CFG_EXTRA_CMDS_AFTER_EOTP
union CFG_EXTRA_CMDS_AFTER_EOTP {
  
  // Bit field definition.
  struct {
    // read-write - Configures the DSI Host Controller to send extra End Of Transmission Packets after the end of a packet. The value is the number of extra EOTP packets sent.
    uint32_t EXTRA_EOTP : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_EXTRA_CMDS_AFTER_EOTP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_EXTRA_CMDS_AFTER_EOTP &Instance() { return *reinterpret_cast<volatile CFG_EXTRA_CMDS_AFTER_EOTP*>(0x4080C018); }
};

// CFG_HTX_TO_COUNT
union CFG_HTX_TO_COUNT {
  
  // Bit field definition.
  struct {
    // read-write - Sets the value of the DSI Host High Speed TX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
    uint32_t COUNT : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_HTX_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_HTX_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_HTX_TO_COUNT*>(0x4080C01C); }
};

// CFG_LRX_H_TO_COUNT
union CFG_LRX_H_TO_COUNT {
  
  // Bit field definition.
  struct {
    // read-write - Sets the value of the DSI Host low power RX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
    uint32_t COUNT : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_LRX_H_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_LRX_H_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_LRX_H_TO_COUNT*>(0x4080C020); }
};

// CFG_BTA_H_TO_COUNT
union CFG_BTA_H_TO_COUNT {
  
  // Bit field definition.
  struct {
    // read-write - Sets the value of the DSI Host Bus Turn Around (BTA) timeout in clk_byte clock periods that once reached will initiate a timeout error.
    uint32_t COUNT : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_BTA_H_TO_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_BTA_H_TO_COUNT &Instance() { return *reinterpret_cast<volatile CFG_BTA_H_TO_COUNT*>(0x4080C024); }
};

// CFG_TWAKEUP
union CFG_TWAKEUP {
  
  // Bit field definition.
  struct {
    // read-write - DPHY Twakeup timing parameter. Sets the number of clk_esc clock periods to keep a clock or data lane in Mark-1 state after exiting ULPS. The MIPI DPHY spec requires a minimum of 1ms in Mark-1 state after leaving ULPS.
    uint32_t NUM_PERIODS : 19;
    uint32_t _reserved_0 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_TWAKEUP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_TWAKEUP &Instance() { return *reinterpret_cast<volatile CFG_TWAKEUP*>(0x4080C028); }
};

// CFG_STATUS_OUT
union CFG_STATUS_OUT {
  
  // Bit field definition.
  struct {
    // read-only - Status Register
    uint32_t STATUS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_STATUS_OUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_STATUS_OUT &Instance() { return *reinterpret_cast<volatile CFG_STATUS_OUT*>(0x4080C02C); }
};

// RX_ERROR_STATUS
union RX_ERROR_STATUS {
  
  // Bit field definition.
  struct {
    // read-only - Status Register for Host receive error detection, ECC errors, CRC errors and for timeout indicators
    uint32_t STATUS : 11;
    uint32_t _reserved_0 : 21;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RX_ERROR_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RX_ERROR_STATUS &Instance() { return *reinterpret_cast<volatile RX_ERROR_STATUS*>(0x4080C030); }
};


} // namespace nDSI_HOST