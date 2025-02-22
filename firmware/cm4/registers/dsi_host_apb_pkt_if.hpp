#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // DSI HOST APB PKT Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDSI_HOST_APB_PKT_IF {


// TX_PAYLOAD
//
union TX_PAYLOAD {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TX_PAYLOAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TX_PAYLOAD &Instance() { return *reinterpret_cast<volatile TX_PAYLOAD*>(0x4080C280); }
};

// PKT_CONTROL
//
union PKT_CONTROL {
  
  // Bit field definition.
  struct {
    uint32_t CTRL : 27;
    uint32_t _reserved_end : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_CONTROL &Instance() { return *reinterpret_cast<volatile PKT_CONTROL*>(0x4080C284); }
};

// SEND_PACKET
//
union SEND_PACKET {
  
  enum class eTX_SEND : uint32_t {
    eTX_SEND_0 = 0, // Packet not sent
    eTX_SEND_1 = 1, // Packet is sent
  };
  
  // Bit field definition.
  struct {
    eTX_SEND TX_SEND : 1;
    uint32_t _reserved_end : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SEND_PACKET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SEND_PACKET &Instance() { return *reinterpret_cast<volatile SEND_PACKET*>(0x4080C288); }
};

// PKT_STATUS
//
union PKT_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 9;
    uint32_t _reserved_end : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_STATUS &Instance() { return *reinterpret_cast<volatile PKT_STATUS*>(0x4080C28C); }
};

// PKT_FIFO_WR_LEVEL
//
union PKT_FIFO_WR_LEVEL {
  
  // Bit field definition.
  struct {
    uint32_t WR : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_FIFO_WR_LEVEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_FIFO_WR_LEVEL &Instance() { return *reinterpret_cast<volatile PKT_FIFO_WR_LEVEL*>(0x4080C290); }
};

// PKT_FIFO_RD_LEVEL
//
union PKT_FIFO_RD_LEVEL {
  
  // Bit field definition.
  struct {
    uint32_t RD : 16;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_FIFO_RD_LEVEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_FIFO_RD_LEVEL &Instance() { return *reinterpret_cast<volatile PKT_FIFO_RD_LEVEL*>(0x4080C294); }
};

// PKT_RX_PAYLOAD
//
union PKT_RX_PAYLOAD {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_RX_PAYLOAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_RX_PAYLOAD &Instance() { return *reinterpret_cast<volatile PKT_RX_PAYLOAD*>(0x4080C298); }
};

// PKT_RX_PKT_HEADER
//
union PKT_RX_PKT_HEADER {
  
  // Bit field definition.
  struct {
    uint32_t HEADER : 24;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PKT_RX_PKT_HEADER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PKT_RX_PKT_HEADER &Instance() { return *reinterpret_cast<volatile PKT_RX_PKT_HEADER*>(0x4080C29C); }
};

// IRQ_STATUS
//
union IRQ_STATUS {
  
  // Bit field definition.
  struct {
    uint32_t STATUS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_STATUS &Instance() { return *reinterpret_cast<volatile IRQ_STATUS*>(0x4080C2A0); }
};

// IRQ_STATUS2
//
union IRQ_STATUS2 {
  
  // Bit field definition.
  struct {
    uint32_t STATUS2 : 3;
    uint32_t _reserved_end : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_STATUS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_STATUS2 &Instance() { return *reinterpret_cast<volatile IRQ_STATUS2*>(0x4080C2A4); }
};

// IRQ_MASK
//
union IRQ_MASK {
  
  // Bit field definition.
  struct {
    uint32_t MASK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_MASK &Instance() { return *reinterpret_cast<volatile IRQ_MASK*>(0x4080C2A8); }
};

// IRQ_MASK2
//
union IRQ_MASK2 {
  
  // Bit field definition.
  struct {
    uint32_t MASK2 : 3;
    uint32_t _reserved_end : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IRQ_MASK2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IRQ_MASK2 &Instance() { return *reinterpret_cast<volatile IRQ_MASK2*>(0x4080C2AC); }
};


} // namespace nDSI_HOST_APB_PKT_IF