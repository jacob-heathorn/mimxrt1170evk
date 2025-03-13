#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DSI Host DPI Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDSI_HOST_DPI_INTFC {


// PIXEL_PAYLOAD_SIZE
union PIXEL_PAYLOAD_SIZE {
  
  // Bit field definition.
  struct {
    // read-write - Maximum number of pixels that should be sent as one DSI packet. Recommended to be evenly divisible by the line size (in pixels).
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_PAYLOAD_SIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_PAYLOAD_SIZE &ref() { return *reinterpret_cast<volatile PIXEL_PAYLOAD_SIZE*>(0x4080C200); }
};

// PIXEL_FIFO_SEND_LEVEL
union PIXEL_FIFO_SEND_LEVEL {
  
  // Bit field definition.
  struct {
    // read-write - In order to optimize DSI utility, the DPI bridge buffers a certain number of DPI pixels before initiating a DSI packet. This configuration port controls the level at which the DPI Host bridge begins sending pixels.
    uint32_t FIFO_SEND_LEVEL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_FIFO_SEND_LEVEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_FIFO_SEND_LEVEL &ref() { return *reinterpret_cast<volatile PIXEL_FIFO_SEND_LEVEL*>(0x4080C204); }
};

// INTERFACE_COLOR_CODING
union INTERFACE_COLOR_CODING {
  
  // Sets the distribution of RGB bits within the 24-bit d bus, as specified by the DPI specification.
  enum class eRGB_CONFIG : uint32_t {
    // 16-bit Configuration 1
    eRGB_CONFIG_0 = 0,
    // 16-bit Configuration 2
    eRGB_CONFIG_1 = 1,
    // 16-bit Configuration 3
    eRGB_CONFIG_2 = 2,
    // 18-bit Configuration 1
    eRGB_CONFIG_3 = 3,
    // 18-bit Configuration 2
    eRGB_CONFIG_4 = 4,
    // 24-bit
    eRGB_CONFIG_5 = 5,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets the distribution of RGB bits within the 24-bit d bus, as specified by the DPI specification.
    eRGB_CONFIG RGB_CONFIG : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INTERFACE_COLOR_CODING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INTERFACE_COLOR_CODING &ref() { return *reinterpret_cast<volatile INTERFACE_COLOR_CODING*>(0x4080C208); }
};

// PIXEL_FORMAT
union PIXEL_FORMAT {
  
  // Sets the DSI packet type of the pixels
  enum class ePIXEL_FORMAT : uint32_t {
    // 16 bit
    ePIXEL_FORMAT_0 = 0,
    // 18 bit
    ePIXEL_FORMAT_1 = 1,
    // 18 bit loosely packed
    ePIXEL_FORMAT_2 = 2,
    // 24 bit
    ePIXEL_FORMAT_3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets the DSI packet type of the pixels
    ePIXEL_FORMAT PIXEL_FORMAT : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PIXEL_FORMAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PIXEL_FORMAT &ref() { return *reinterpret_cast<volatile PIXEL_FORMAT*>(0x4080C20C); }
};

// VSYNC_POLARITY
union VSYNC_POLARITY {
  
  // Sets polarity of dpi_vsync_input
  enum class eVSYNC_POLARITY : uint32_t {
    // active low
    eVSYNC_POLARITY_0 = 0,
    // active high
    eVSYNC_POLARITY_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets polarity of dpi_vsync_input
    eVSYNC_POLARITY VSYNC_POLARITY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VSYNC_POLARITY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VSYNC_POLARITY &ref() { return *reinterpret_cast<volatile VSYNC_POLARITY*>(0x4080C210); }
};

// HSYNC_POLARITY
union HSYNC_POLARITY {
  
  // Sets polarity of dpi_hsync_input
  enum class eHSYNC_POLARITY : uint32_t {
    // active low
    eHSYNC_POLARITY_0 = 0,
    // active high
    eHSYNC_POLARITY_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Sets polarity of dpi_hsync_input
    eHSYNC_POLARITY HSYNC_POLARITY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSYNC_POLARITY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HSYNC_POLARITY &ref() { return *reinterpret_cast<volatile HSYNC_POLARITY*>(0x4080C214); }
};

// VIDEO_MODE
union VIDEO_MODE {
  
  // Select DSI video mode that the host DPI module should generate packets for.
  enum class eVIDEO_MODE : uint32_t {
    // Non-Burst mode with Sync Pulses
    eVIDEO_MODE_0 = 0,
    // Non-Burst mode with Sync Events
    eVIDEO_MODE_1 = 1,
    // Burst mode
    eVIDEO_MODE_2 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Select DSI video mode that the host DPI module should generate packets for.
    eVIDEO_MODE VIDEO_MODE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VIDEO_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VIDEO_MODE &ref() { return *reinterpret_cast<volatile VIDEO_MODE*>(0x4080C218); }
};

// HFP
union HFP {
  
  // Bit field definition.
  struct {
    // read-write - Sets the DSI packet payload size, in bytes, of the horizontal front porch blanking packet.
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HFP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HFP &ref() { return *reinterpret_cast<volatile HFP*>(0x4080C21C); }
};

// HBP
union HBP {
  
  // Bit field definition.
  struct {
    // read-write - Sets the DSI packet payload size, in bytes, of the horizontal back porch blanking packet.
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HBP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HBP &ref() { return *reinterpret_cast<volatile HBP*>(0x4080C220); }
};

// HSA
union HSA {
  
  // Bit field definition.
  struct {
    // read-write - Sets the DSI packet payload size, in bytes, of the horizontal sync width filler blanking packet.
    uint32_t PAYLOAD_SIZE : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HSA &ref() { return *reinterpret_cast<volatile HSA*>(0x4080C224); }
};

// ENABLE_MULT_PKTS
union ENABLE_MULT_PKTS {
  
  // Enable Multiple packets per video line. When enabled, PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of the video line
  enum class eENABLE_MULT_PKTS : uint32_t {
    // Video Line is sent in a single packet
    eENABLE_MULT_PKTS_0 = 0,
    // Video Line is sent in two packets
    eENABLE_MULT_PKTS_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable Multiple packets per video line. When enabled, PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of the video line
    eENABLE_MULT_PKTS ENABLE_MULT_PKTS : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ENABLE_MULT_PKTS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ENABLE_MULT_PKTS &ref() { return *reinterpret_cast<volatile ENABLE_MULT_PKTS*>(0x4080C228); }
};

// VBP
union VBP {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of lines in the vertical back porch.
    uint32_t NUM_LINES : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VBP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VBP &ref() { return *reinterpret_cast<volatile VBP*>(0x4080C22C); }
};

// VFP
union VFP {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of lines in the vertical front porch.
    uint32_t NUM_LINES : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VFP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VFP &ref() { return *reinterpret_cast<volatile VFP*>(0x4080C230); }
};

// BLLP_MODE
union BLLP_MODE {
  
  // Optimize bllp periods to Low Power mode when possible
  enum class eLP : uint32_t {
    // Blanking packets are sent during BLLP periods
    eLP_0 = 0,
    // LP mode is used for BLLP periods
    eLP_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Optimize bllp periods to Low Power mode when possible
    eLP LP : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BLLP_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BLLP_MODE &ref() { return *reinterpret_cast<volatile BLLP_MODE*>(0x4080C234); }
};

// USE_NULL_PKT_BLLP
union USE_NULL_PKT_BLLP {
  
  // Selects type of blanking packet to be sent during bllp
  enum class eNULL : uint32_t {
    // Blanking packet used in bllp region 1
    eNULL_0 = 0,
    // Null packet used in bllp region
    eNULL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selects type of blanking packet to be sent during bllp
    eNULL NULL : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  USE_NULL_PKT_BLLP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile USE_NULL_PKT_BLLP &ref() { return *reinterpret_cast<volatile USE_NULL_PKT_BLLP*>(0x4080C238); }
};

// VACTIVE
union VACTIVE {
  
  // Bit field definition.
  struct {
    // read-write - Sets the number of lines in the vertical active aread.
    uint32_t NUM_LINES : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VACTIVE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VACTIVE &ref() { return *reinterpret_cast<volatile VACTIVE*>(0x4080C23C); }
};


} // namespace nDSI_HOST_DPI_INTFC