#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DSI Host DPI Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDSI_HOST_DPI_INTFC {


// PEXEL_PAYLOAD_SIZE
//
union PIXEL_PAYLOAD_SIZE {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_PAYLOAD_SIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_PAYLOAD_SIZE &Instance() { return *reinterpret_cast<volatile PIXEL_PAYLOAD_SIZE*>(0x4080C200); }
};

// PIXEL_FIFO_SEND_LEVEL
//
union PIXEL_FIFO_SEND_LEVEL {
  
  // Bit field definition.
  struct {
    uint32_t FIFO_SEND_LEVEL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_FIFO_SEND_LEVEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_FIFO_SEND_LEVEL &Instance() { return *reinterpret_cast<volatile PIXEL_FIFO_SEND_LEVEL*>(0x4080C204); }
};

// INTERFACE_COLOR_CODING
//
union INTERFACE_COLOR_CODING {
  
  enum class eRGB_CONFIG : uint32_t {
    eRGB_CONFIG_0 = 0, // 16-bit Configuration 1
    eRGB_CONFIG_1 = 1, // 16-bit Configuration 2
    eRGB_CONFIG_2 = 2, // 16-bit Configuration 3
    eRGB_CONFIG_3 = 3, // 18-bit Configuration 1
    eRGB_CONFIG_4 = 4, // 18-bit Configuration 2
    eRGB_CONFIG_5 = 5, // 24-bit
  };
  
  // Bit field definition.
  struct {
    eRGB_CONFIG RGB_CONFIG : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTERFACE_COLOR_CODING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTERFACE_COLOR_CODING &Instance() { return *reinterpret_cast<volatile INTERFACE_COLOR_CODING*>(0x4080C208); }
};

// PIXEL_FORMAT
//
union PIXEL_FORMAT {
  
  enum class ePIXEL_FORMAT : uint32_t {
    ePIXEL_FORMAT_0 = 0, // 16 bit
    ePIXEL_FORMAT_1 = 1, // 18 bit
    ePIXEL_FORMAT_2 = 2, // 18 bit loosely packed
    ePIXEL_FORMAT_3 = 3, // 24 bit
  };
  
  // Bit field definition.
  struct {
    ePIXEL_FORMAT PIXEL_FORMAT : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_FORMAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_FORMAT &Instance() { return *reinterpret_cast<volatile PIXEL_FORMAT*>(0x4080C20C); }
};

// VSYNC_POLARITY
//
union VSYNC_POLARITY {
  
  enum class eVSYNC_POLARITY : uint32_t {
    eVSYNC_POLARITY_0 = 0, // active low
    eVSYNC_POLARITY_1 = 1, // active high
  };
  
  // Bit field definition.
  struct {
    eVSYNC_POLARITY VSYNC_POLARITY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VSYNC_POLARITY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VSYNC_POLARITY &Instance() { return *reinterpret_cast<volatile VSYNC_POLARITY*>(0x4080C210); }
};

// HSYNC_POLARITY
//
union HSYNC_POLARITY {
  
  enum class eHSYNC_POLARITY : uint32_t {
    eHSYNC_POLARITY_0 = 0, // active low
    eHSYNC_POLARITY_1 = 1, // active high
  };
  
  // Bit field definition.
  struct {
    eHSYNC_POLARITY HSYNC_POLARITY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSYNC_POLARITY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HSYNC_POLARITY &Instance() { return *reinterpret_cast<volatile HSYNC_POLARITY*>(0x4080C214); }
};

// VIDEO_MODE
//
union VIDEO_MODE {
  
  enum class eVIDEO_MODE : uint32_t {
    eVIDEO_MODE_0 = 0, // Non-Burst mode with Sync Pulses
    eVIDEO_MODE_1 = 1, // Non-Burst mode with Sync Events
    eVIDEO_MODE_2 = 2, // Burst mode
  };
  
  // Bit field definition.
  struct {
    eVIDEO_MODE VIDEO_MODE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VIDEO_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VIDEO_MODE &Instance() { return *reinterpret_cast<volatile VIDEO_MODE*>(0x4080C218); }
};

// HFP
//
union HFP {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HFP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HFP &Instance() { return *reinterpret_cast<volatile HFP*>(0x4080C21C); }
};

// HBP
//
union HBP {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HBP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HBP &Instance() { return *reinterpret_cast<volatile HBP*>(0x4080C220); }
};

// HSA
//
union HSA {
  
  // Bit field definition.
  struct {
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HSA &Instance() { return *reinterpret_cast<volatile HSA*>(0x4080C224); }
};

// ENABLE_MULT_PKTS
//
union ENABLE_MULT_PKTS {
  
  enum class eENABLE_MULT_PKTS : uint32_t {
    eENABLE_MULT_PKTS_0 = 0, // Video Line is sent in a single packet
    eENABLE_MULT_PKTS_1 = 1, // Video Line is sent in two packets
  };
  
  // Bit field definition.
  struct {
    eENABLE_MULT_PKTS ENABLE_MULT_PKTS : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENABLE_MULT_PKTS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENABLE_MULT_PKTS &Instance() { return *reinterpret_cast<volatile ENABLE_MULT_PKTS*>(0x4080C228); }
};

// VBP
//
union VBP {
  
  // Bit field definition.
  struct {
    uint32_t NUM_LINES : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VBP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VBP &Instance() { return *reinterpret_cast<volatile VBP*>(0x4080C22C); }
};

// VFP
//
union VFP {
  
  // Bit field definition.
  struct {
    uint32_t NUM_LINES : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VFP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VFP &Instance() { return *reinterpret_cast<volatile VFP*>(0x4080C230); }
};

// BLLP_MODE
//
union BLLP_MODE {
  
  enum class eLP : uint32_t {
    eLP_0 = 0, // Blanking packets are sent during BLLP periods
    eLP_1 = 1, // LP mode is used for BLLP periods
  };
  
  // Bit field definition.
  struct {
    eLP LP : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BLLP_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BLLP_MODE &Instance() { return *reinterpret_cast<volatile BLLP_MODE*>(0x4080C234); }
};

// USE_NULL_PKT_BLLP
//
union USE_NULL_PKT_BLLP {
  
  enum class eNULL : uint32_t {
    eNULL_0 = 0, // Blanking packet used in bllp region 1
    eNULL_1 = 1, // Null packet used in bllp region
  };
  
  // Bit field definition.
  struct {
    eNULL NULL : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USE_NULL_PKT_BLLP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USE_NULL_PKT_BLLP &Instance() { return *reinterpret_cast<volatile USE_NULL_PKT_BLLP*>(0x4080C238); }
};

// VACTIVE
//
union VACTIVE {
  
  // Bit field definition.
  struct {
    uint32_t NUM_LINES : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VACTIVE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VACTIVE &Instance() { return *reinterpret_cast<volatile VACTIVE*>(0x4080C23C); }
};


} // namespace nDSI_HOST_DPI_INTFC