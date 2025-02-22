#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nMIPI_CSI2RX {


// Lane Configuration Register
//
union CFG_NUM_LANES {
  
  enum class eCFG_NUM_LANES : uint32_t {
    eONE_LANE = 0, // 1 Lane
    eTWO_LANE = 1, // 2 Lane
  };
  
  // Bit field definition.
  struct {
    eCFG_NUM_LANES CFG_NUM_LANES : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_NUM_LANES() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_NUM_LANES &Instance() { return *reinterpret_cast<volatile CFG_NUM_LANES*>(0x40810100); }
};

// Disable Data Lane Register
//
union CFG_DISABLE_DATA_LANES {
  
  // Bit field definition.
  struct {
    uint32_t CFG_DISABLE_DATA_LANES : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DISABLE_DATA_LANES() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile CFG_DISABLE_DATA_LANES &Instance() { return *reinterpret_cast<volatile CFG_DISABLE_DATA_LANES*>(0x40810104); }
};

// ECC and CRC Error Status Register
//
union BIT_ERR {
  
  // Bit field definition.
  struct {
    uint32_t BIT_ERR : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BIT_ERR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BIT_ERR &Instance() { return *reinterpret_cast<volatile BIT_ERR*>(0x40810108); }
};

// IRQ Status Register
//
union IRQ_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_STATUS : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_STATUS &Instance() { return *reinterpret_cast<volatile IRQ_STATUS*>(0x4081010C); }
};

// IRQ Mask Setting Register
//
union IRQ_MASK {
  
  // Bit field definition.
  struct {
    uint32_t IRQ_MASK : 9;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_MASK &Instance() { return *reinterpret_cast<volatile IRQ_MASK*>(0x40810110); }
};

// Ultra Low Power State (ULPS) Status Register
//
union ULPS_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ULPS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ULPS_STATUS &Instance() { return *reinterpret_cast<volatile ULPS_STATUS*>(0x40810114); }
};

// ERRSotHS Status Register
//
union PPI_ERRSOT_HS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPI_ERRSOT_HS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPI_ERRSOT_HS &Instance() { return *reinterpret_cast<volatile PPI_ERRSOT_HS*>(0x40810118); }
};

// ErrSotSync HS Status Register
//
union PPI_ERRSOTSYNC_HS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPI_ERRSOTSYNC_HS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPI_ERRSOTSYNC_HS &Instance() { return *reinterpret_cast<volatile PPI_ERRSOTSYNC_HS*>(0x4081011C); }
};

// ErrEsc Status Register
//
union PPI_ERRESC {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPI_ERRESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPI_ERRESC &Instance() { return *reinterpret_cast<volatile PPI_ERRESC*>(0x40810120); }
};

// ErrSyncEsc Status Register
//
union PPI_ERRSYNCESC {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPI_ERRSYNCESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPI_ERRSYNCESC &Instance() { return *reinterpret_cast<volatile PPI_ERRSYNCESC*>(0x40810124); }
};

// ErrControl Status Register
//
union PPI_ERRCONTROL {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPI_ERRCONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPI_ERRCONTROL &Instance() { return *reinterpret_cast<volatile PPI_ERRCONTROL*>(0x40810128); }
};

// Disable Payload 0 Register
//
union CFG_DISABLE_PAYLOAD_0 {
  
  // Bit field definition.
  struct {
    uint32_t DIS_PAYLOAD_NULL : 1;
    uint32_t DIS_PAYLOAD_BLANK : 1;
    uint32_t DIS_PAYLOAD_EMBEDDED : 1;
    uint32_t _reserved_0 : 7;
    uint32_t DIS_PAYLOAD_YUV420 : 1;
    uint32_t _reserved_1 : 3;
    uint32_t DIS_PAYLOAD_YUV422_8BIT : 1;
    uint32_t _reserved_2 : 1;
    uint32_t DIS_PAYLOAD_RGB444 : 1;
    uint32_t DIS_PAYLOAD_RGB555 : 1;
    uint32_t DIS_PAYLOAD_RGB565 : 1;
    uint32_t DIS_PAYLOAD_RGB666 : 1;
    uint32_t DIS_PAYLOAD_RGB888 : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DISABLE_PAYLOAD_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DISABLE_PAYLOAD_0 &Instance() { return *reinterpret_cast<volatile CFG_DISABLE_PAYLOAD_0*>(0x4081012C); }
};

// Disable Payload 1 Register
//
union CFG_DISABLE_PAYLOAD_1 {
  
  // Bit field definition.
  struct {
    uint32_t DIS_PAYLOAD_UDEF_30 : 1;
    uint32_t DIS_PAYLOAD_UDEF_31 : 1;
    uint32_t DIS_PAYLOAD_UDEF_32 : 1;
    uint32_t DIS_PAYLOAD_UDEF_33 : 1;
    uint32_t DIS_PAYLOAD_UDEF_34 : 1;
    uint32_t DIS_PAYLOAD_UDEF_35 : 1;
    uint32_t DIS_PAYLOAD_UDEF_36 : 1;
    uint32_t DIS_PAYLOAD_UDEF_37 : 1;
    uint32_t _reserved_0 : 8;
    uint32_t DIS_PAYLOAD_UNSUPPORTED : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CFG_DISABLE_PAYLOAD_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CFG_DISABLE_PAYLOAD_1 &Instance() { return *reinterpret_cast<volatile CFG_DISABLE_PAYLOAD_1*>(0x40810130); }
};


} // namespace nMIPI_CSI2RX