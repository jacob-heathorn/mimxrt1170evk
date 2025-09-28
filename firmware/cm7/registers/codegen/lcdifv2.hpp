#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LCDIF_V2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nLCDIFV2 {


// LCDIFv2 display control Register
union CTRL {
  
  // Invert Horizontal synchronization signal
  enum class eINV_HS : uint32_t {
    // HSYNC signal not inverted (active HIGH)
    ebf_val0 = 0,
    // Invert HSYNC signal (active LOW)
    ebf_val1 = 1,
  };
  
  // Invert Vertical synchronization signal
  enum class eINV_VS : uint32_t {
    // VSYNC signal not inverted (active HIGH)
    ebf_val0 = 0,
    // Invert VSYNC signal (active LOW)
    ebf_val1 = 1,
  };
  
  // Invert Data Enable polarity
  enum class eINV_DE : uint32_t {
    // Data enable is active high
    ebf_val0 = 0,
    // Data enable is active low
    ebf_val1 = 1,
  };
  
  // Polarity change of Pixel Clock
  enum class eINV_PXCK : uint32_t {
    // Display samples data on the falling edge
    ebf_val0 = 0,
    // Display samples data on the rising edge
    ebf_val1 = 1,
  };
  
  // Indicates if value at the output (pixel data output) needs to be negated
  enum class eNEG : uint32_t {
    // Output is to remain same
    ebf_val0 = 0,
    // Output to be negated
    ebf_val1 = 1,
  };
  
  // Software Reset
  enum class eSW_RESET : uint32_t {
    // No action
    ebf_val0 = 0,
    // All LCDIFv2 internal registers are forced into their reset state. User registers are not affected
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Invert Horizontal synchronization signal
    eINV_HS INV_HS : 1;
    // read-write - Invert Vertical synchronization signal
    eINV_VS INV_VS : 1;
    // read-write - Invert Data Enable polarity
    eINV_DE INV_DE : 1;
    // read-write - Polarity change of Pixel Clock
    eINV_PXCK INV_PXCK : 1;
    // read-write - Indicates if value at the output (pixel data output) needs to be negated
    eNEG NEG : 1;
    uint32_t _reserved_0 : 26;
    // read-write - Software Reset
    eSW_RESET SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL &ref() { return *reinterpret_cast<volatile CTRL*>(0x40808000); }
};

// LCDIFv2 display control Register
union CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - Invert Horizontal synchronization signal
    uint32_t INV_HS : 1;
    // read-write - Invert Vertical synchronization signal
    uint32_t INV_VS : 1;
    // read-write - Invert Data Enable polarity
    uint32_t INV_DE : 1;
    // read-write - Polarity change of Pixel Clock
    uint32_t INV_PXCK : 1;
    // read-write - Indicates if value at the output (pixel data output) needs to be negated
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    // read-write - Software Reset
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_SET &ref() { return *reinterpret_cast<volatile CTRL_SET*>(0x40808004); }
};

// LCDIFv2 display control Register
union CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Invert Horizontal synchronization signal
    uint32_t INV_HS : 1;
    // read-write - Invert Vertical synchronization signal
    uint32_t INV_VS : 1;
    // read-write - Invert Data Enable polarity
    uint32_t INV_DE : 1;
    // read-write - Polarity change of Pixel Clock
    uint32_t INV_PXCK : 1;
    // read-write - Indicates if value at the output (pixel data output) needs to be negated
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    // read-write - Software Reset
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_CLR &ref() { return *reinterpret_cast<volatile CTRL_CLR*>(0x40808008); }
};

// LCDIFv2 display control Register
union CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Invert Horizontal synchronization signal
    uint32_t INV_HS : 1;
    // read-write - Invert Vertical synchronization signal
    uint32_t INV_VS : 1;
    // read-write - Invert Data Enable polarity
    uint32_t INV_DE : 1;
    // read-write - Polarity change of Pixel Clock
    uint32_t INV_PXCK : 1;
    // read-write - Indicates if value at the output (pixel data output) needs to be negated
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    // read-write - Software Reset
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_TOG &ref() { return *reinterpret_cast<volatile CTRL_TOG*>(0x4080800C); }
};

// Display Parameter Register
union DISP_PARA {
  
  // LCDIFv2 operating mode
  enum class eDISP_MODE : uint32_t {
    // Normal mode. Panel content controlled by layer configuration
    ebf_val0 = 0,
    // Test Mode1(BGND Color Display)
    ebf_val1 = 1,
    // Test Mode2(Column Color Bar)
    ebf_val2 = 2,
    // Test Mode3(Row Color Bar)
    ebf_val3 = 3,
  };
  
  // LCDIFv2 line output order
  enum class eLINE_PATTERN : uint32_t {
    // RGB
    ebf_val0 = 0,
    // RBG
    ebf_val1 = 1,
    // GBR
    ebf_val2 = 2,
    // GRB
    ebf_val3 = 3,
    // BRG
    ebf_val4 = 4,
    // BGR
    ebf_val5 = 5,
  };
  
  // Display panel On/Off mode
  enum class eDISP_ON : uint32_t {
    // Display Off
    ebf_val0 = 0,
    // Display On
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Blue component of the default color displayed in the sectors where no layer is active
    uint32_t BGND_B : 8;
    // read-write - Green component of the default color displayed in the sectors where no layer is active
    uint32_t BGND_G : 8;
    // read-write - Red component of the default color displayed in the sectors where no layer is active
    uint32_t BGND_R : 8;
    // read-write - LCDIFv2 operating mode
    eDISP_MODE DISP_MODE : 2;
    // read-write - LCDIFv2 line output order
    eLINE_PATTERN LINE_PATTERN : 3;
    uint32_t _reserved_0 : 2;
    // read-write - Display panel On/Off mode
    eDISP_ON DISP_ON : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DISP_PARA &ref() { return *reinterpret_cast<volatile DISP_PARA*>(0x40808010); }
};

// Display Size Register
union DISP_SIZE {
  
  // Bit field definition.
  struct {
    // read-write - Sets the display size horizontal resolution in pixels
    uint32_t DELTA_X : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Sets the display size vertical resolution in pixels
    uint32_t DELTA_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DISP_SIZE &ref() { return *reinterpret_cast<volatile DISP_SIZE*>(0x40808014); }
};

// Horizontal Sync Parameter Register
union HSYN_PARA {
  
  // Bit field definition.
  struct {
    // read-write - HSYNC front-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    uint32_t FP_H : 9;
    uint32_t _reserved_0 : 2;
    // read-write - HSYNC active pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    uint32_t PW_H : 9;
    uint32_t _reserved_1 : 2;
    // read-write - HSYNC back-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    uint32_t BP_H : 9;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00C01803; }
  static inline volatile HSYN_PARA &ref() { return *reinterpret_cast<volatile HSYN_PARA*>(0x40808018); }
};

// Vertical Sync Parameter Register
union VSYN_PARA {
  
  // Bit field definition.
  struct {
    // read-write - VSYNC front-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    uint32_t FP_V : 9;
    uint32_t _reserved_0 : 2;
    // read-write - VSYNC active pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    uint32_t PW_V : 9;
    uint32_t _reserved_1 : 2;
    // read-write - VSYNC back-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    uint32_t BP_V : 9;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00C01803; }
  static inline volatile VSYN_PARA &ref() { return *reinterpret_cast<volatile VSYN_PARA*>(0x4080801C); }
};

// Interrupt Status Register for domain 0
union INT_STATUS_D0 {
  
  // Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  enum class eVSYNC : uint32_t {
    // VSYNC has not started
    ebf_val0 = 0,
    // VSYNC has started
    ebf_val1 = 1,
  };
  
  // Interrupt flag to indicate the output buffer underrun condition
  enum class eUNDERRUN : uint32_t {
    // Output buffer not underrun
    ebf_val0 = 0,
    // Output buffer underrun
    ebf_val1 = 1,
  };
  
  // Interrupt flag to indicate vertical blanking period
  enum class eVS_BLANK : uint32_t {
    // Vertical blanking period has not started
    ebf_val0 = 0,
    // Vertical blanking period has started
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
    eVSYNC VSYNC : 1;
    // read-write - Interrupt flag to indicate the output buffer underrun condition
    eUNDERRUN UNDERRUN : 1;
    // read-write - Interrupt flag to indicate vertical blanking period
    eVS_BLANK VS_BLANK : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
    uint32_t DMA_ERR : 8;
    // read-write - Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
    uint32_t DMA_DONE : 8;
    // read-write - Interrupt flag to indicate that which FIFO in the pixel blending underflowed
    uint32_t FIFO_EMPTY : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_D0 &ref() { return *reinterpret_cast<volatile INT_STATUS_D0*>(0x40808020); }
};

// Interrupt Enable Register for domain 0
union INT_ENABLE_D0 {
  
  // Enable Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  enum class eVSYNC_EN : uint32_t {
    // VSYNC interrupt disable
    ebf_val0 = 0,
    // VSYNC interrupt enable
    ebf_val1 = 1,
  };
  
  // Enable Interrupt flag to indicate the output buffer underrun condition
  enum class eUNDERRUN_EN : uint32_t {
    // Output buffer underrun disable
    ebf_val0 = 0,
    // Output buffer underrun enable
    ebf_val1 = 1,
  };
  
  // Enable Interrupt flag to indicate vertical blanking period
  enum class eVS_BLANK_EN : uint32_t {
    // Vertical blanking start interrupt disable
    ebf_val0 = 0,
    // Vertical blanking start interrupt enable
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
    eVSYNC_EN VSYNC_EN : 1;
    // read-write - Enable Interrupt flag to indicate the output buffer underrun condition
    eUNDERRUN_EN UNDERRUN_EN : 1;
    // read-write - Enable Interrupt flag to indicate vertical blanking period
    eVS_BLANK_EN VS_BLANK_EN : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Enable Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
    uint32_t DMA_ERR_EN : 8;
    // read-write - Enable Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
    uint32_t DMA_DONE_EN : 8;
    // read-write - Enable Interrupt flag to indicate that which FIFO in the pixel blending underflowed
    uint32_t FIFO_EMPTY_EN : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_ENABLE_D0 &ref() { return *reinterpret_cast<volatile INT_ENABLE_D0*>(0x40808024); }
};

// Interrupt Status Register for domain 1
union INT_STATUS_D1 {
  
  // Bit field definition.
  struct {
    // read-write - Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
    uint32_t VSYNC : 1;
    // read-write - Interrupt flag to indicate the output buffer underrun condition
    uint32_t UNDERRUN : 1;
    // read-write - Interrupt flag to indicate vertical blanking period
    uint32_t VS_BLANK : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
    uint32_t DMA_ERR : 8;
    // read-write - Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
    uint32_t DMA_DONE : 8;
    // read-write - Interrupt flag to indicate that which FIFO in the pixel blending underflowed
    uint32_t FIFO_EMPTY : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_D1 &ref() { return *reinterpret_cast<volatile INT_STATUS_D1*>(0x40808030); }
};

// Interrupt Enable Register for domain 1
union INT_ENABLE_D1 {
  
  // Bit field definition.
  struct {
    // read-write - Enable Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
    uint32_t VSYNC_EN : 1;
    // read-write - Enable Interrupt flag to indicate the output buffer underrun condition
    uint32_t UNDERRUN_EN : 1;
    // read-write - Enable Interrupt flag to indicate vertical blanking period
    uint32_t VS_BLANK_EN : 1;
    uint32_t _reserved_0 : 5;
    // read-write - Enable Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
    uint32_t DMA_ERR_EN : 8;
    // read-write - Enable Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
    uint32_t DMA_DONE_EN : 8;
    // read-write - Enable Interrupt flag to indicate that which FIFO in the pixel blending underflowed
    uint32_t FIFO_EMPTY_EN : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_ENABLE_D1 &ref() { return *reinterpret_cast<volatile INT_ENABLE_D1*>(0x40808034); }
};

// Reserved
union PDI_PARA {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile PDI_PARA &ref() { return *reinterpret_cast<volatile PDI_PARA*>(0x40808040); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL0_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_1*>(0x40808200); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL0_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_2*>(0x40808204); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL0_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_3*>(0x40808208); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL0_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_4*>(0x4080820C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL0_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_5*>(0x40808210); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL0_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL0_6*>(0x40808214); }
};

// Color Space Conversion Coefficient Register 0
union CSC0_COEF0 {
  
  // Enable the CSC unit in the LCDIFv2 plane data path
  enum class eENABLE : uint32_t {
    // The CSC is bypassed and the input pixels are RGB data already
    ebf_val0 = 0,
    // The CSC is enabled and the pixels will be converted to RGB data
    ebf_val1 = 1,
  };
  
  // This bit changes the behavior when performing U/V converting
  enum class eYCBCR_MODE : uint32_t {
    // Converting YUV to RGB data
    ebf_val0 = 0,
    // Converting YCbCr to RGB data
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Y OFFSET
    uint32_t Y_OFFSET : 9;
    // read-write - UV OFFSET
    uint32_t UV_OFFSET : 9;
    // read-write - Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
    uint32_t C0 : 11;
    uint32_t _reserved_0 : 1;
    // read-write - Enable the CSC unit in the LCDIFv2 plane data path
    eENABLE ENABLE : 1;
    // read-write - This bit changes the behavior when performing U/V converting
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile CSC0_COEF0 &ref() { return *reinterpret_cast<volatile CSC0_COEF0*>(0x40808218); }
};

// Color Space Conversion Coefficient Register 1
union CSC0_COEF1 {
  
  // Bit field definition.
  struct {
    // read-write - Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
    uint32_t C4 : 11;
    uint32_t _reserved_0 : 5;
    // read-write - Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
    uint32_t C1 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x01230208; }
  static inline volatile CSC0_COEF1 &ref() { return *reinterpret_cast<volatile CSC0_COEF1*>(0x4080821C); }
};

// Color Space Conversion Coefficient Register 2
union CSC0_COEF2 {
  
  // Bit field definition.
  struct {
    // read-write - Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    uint32_t C3 : 11;
    uint32_t _reserved_0 : 5;
    // read-write - Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    uint32_t C2 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x076B079C; }
  static inline volatile CSC0_COEF2 &ref() { return *reinterpret_cast<volatile CSC0_COEF2*>(0x40808220); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL1_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_1*>(0x40808240); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL1_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_2*>(0x40808244); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL1_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_3*>(0x40808248); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL1_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_4*>(0x4080824C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL1_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_5*>(0x40808250); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL1_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL1_6*>(0x40808254); }
};

// Color Space Conversion Coefficient Register 0
union CSC1_COEF0 {
  
  // Enable the CSC unit in the LCDIFv2 plane data path
  enum class eENABLE : uint32_t {
    // The CSC is bypassed and the input pixels are RGB data already
    ebf_val0 = 0,
    // The CSC is enabled and the pixels will be converted to RGB data
    ebf_val1 = 1,
  };
  
  // This bit changes the behavior when performing U/V converting
  enum class eYCBCR_MODE : uint32_t {
    // Converting YUV to RGB data
    ebf_val0 = 0,
    // Converting YCbCr to RGB data
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Y OFFSET
    uint32_t Y_OFFSET : 9;
    // read-write - UV OFFSET
    uint32_t UV_OFFSET : 9;
    // read-write - Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
    uint32_t C0 : 11;
    uint32_t _reserved_0 : 1;
    // read-write - Enable the CSC unit in the LCDIFv2 plane data path
    eENABLE ENABLE : 1;
    // read-write - This bit changes the behavior when performing U/V converting
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile CSC1_COEF0 &ref() { return *reinterpret_cast<volatile CSC1_COEF0*>(0x40808258); }
};

// Color Space Conversion Coefficient Register 1
union CSC1_COEF1 {
  
  // Bit field definition.
  struct {
    // read-write - Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
    uint32_t C4 : 11;
    uint32_t _reserved_0 : 5;
    // read-write - Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
    uint32_t C1 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x01230208; }
  static inline volatile CSC1_COEF1 &ref() { return *reinterpret_cast<volatile CSC1_COEF1*>(0x4080825C); }
};

// Color Space Conversion Coefficient Register 2
union CSC1_COEF2 {
  
  // Bit field definition.
  struct {
    // read-write - Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    uint32_t C3 : 11;
    uint32_t _reserved_0 : 5;
    // read-write - Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    uint32_t C2 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x076B079C; }
  static inline volatile CSC1_COEF2 &ref() { return *reinterpret_cast<volatile CSC1_COEF2*>(0x40808260); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL2_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_1*>(0x40808280); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL2_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_2*>(0x40808284); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL2_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_3*>(0x40808288); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL2_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_4*>(0x4080828C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL2_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_5*>(0x40808290); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL2_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL2_6*>(0x40808294); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL3_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_1*>(0x408082C0); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL3_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_2*>(0x408082C4); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL3_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_3*>(0x408082C8); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL3_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_4*>(0x408082CC); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL3_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_5*>(0x408082D0); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL3_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL3_6*>(0x408082D4); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL4_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_1*>(0x40808300); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL4_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_2*>(0x40808304); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL4_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_3*>(0x40808308); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL4_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_4*>(0x4080830C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL4_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_5*>(0x40808310); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL4_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL4_6*>(0x40808314); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL5_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_1*>(0x40808340); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL5_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_2*>(0x40808344); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL5_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_3*>(0x40808348); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL5_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_4*>(0x4080834C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL5_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_5*>(0x40808350); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL5_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL5_6*>(0x40808354); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL6_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_1*>(0x40808380); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL6_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_2*>(0x40808384); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL6_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_3*>(0x40808388); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL6_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_4*>(0x4080838C); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL6_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_5*>(0x40808390); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL6_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL6_6*>(0x40808394); }
};

// Control Descriptor Layer 1 Register
union CTRLDESCL7_1 {
  
  // Bit field definition.
  struct {
    // read-write - Width of the layer in pixels
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Height of the layer in pixels
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_1 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_1*>(0x408083C0); }
};

// Control Descriptor Layer 2 Register
union CTRLDESCL7_2 {
  
  // Bit field definition.
  struct {
    // read-write - POS X
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    // read-write - The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_2 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_2*>(0x408083C4); }
};

// Control Descriptor Layer 3 Register
union CTRLDESCL7_3 {
  
  // Bit field definition.
  struct {
    // read-write - Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_3 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_3*>(0x408083C8); }
};

// Control Descriptor Layer 4 Register
union CTRLDESCL7_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address of layer data in the memory. The address programmed should be 64-bit aligned
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_4 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_4*>(0x408083CC); }
};

// Control Descriptor Layer 5 Register
union CTRLDESCL7_5 {
  
  // Alpha Blending Mode
  enum class eAB_MODE : uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };
  
  // Porter Duff factor mode
  enum class ePD_FACTOR_MODE : uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff global alpha mode
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };
  
  // Porter Duff alpha mode
  enum class ePD_ALPHA_MODE : uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };
  
  // Porter Duff alpha mode
  enum class ePD_COLOR_MODE : uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };
  
  // The YUV422 input format selection
  enum class eYUV_FORMAT : uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };
  
  // Layer encoding format (bit per pixel)
  enum class eBPP : uint32_t {
    // 1 bpp
    ebf_val0 = 0,
    // 2 bpp
    ebf_val1 = 1,
    // 4 bpp
    ebf_val2 = 2,
    // 8 bpp
    ebf_val3 = 3,
    // 16 bpp (RGB565)
    ebf_val4 = 4,
    // 16 bpp (ARGB1555)
    ebf_val5 = 5,
    // 16 bpp (ARGB4444)
    ebf_val6 = 6,
    // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val7 = 7,
    // 24 bpp (RGB888)
    ebf_val8 = 8,
    // 32 bpp (ARGB8888)
    ebf_val9 = 9,
    // 32 bpp (ABGR8888)
    ebf_val10 = 10,
  };
  
  // Safety Mode Enable Bit
  enum class eSAFETY_EN : uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };
  
  // Enable the layer for DMA
  enum class eEN : uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Alpha Blending Mode
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Porter Duff factor mode
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    // read-write - Porter Duff global alpha mode
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    // read-write - Porter Duff alpha mode
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    // read-write - Porter Duff alpha mode
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    // read-write - The YUV422 input format selection
    eYUV_FORMAT YUV_FORMAT : 2;
    // read-write - Global Alpha
    uint32_t GLOBAL_ALPHA : 8;
    // read-write - Layer encoding format (bit per pixel)
    eBPP BPP : 4;
    // read-write - Safety Mode Enable Bit
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Shadow Load Enable
    uint32_t SHADOW_LOAD_EN : 1;
    // read-write - Enable the layer for DMA
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_5 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_5*>(0x408083D0); }
};

// Control Descriptor Layer 6 Register
union CTRLDESCL7_6 {
  
  // Bit field definition.
  struct {
    // read-write - Background B component value
    uint32_t BCLR_B : 8;
    // read-write - Background G component value
    uint32_t BCLR_G : 8;
    // read-write - Background R component value
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_6 &ref() { return *reinterpret_cast<volatile CTRLDESCL7_6*>(0x408083D4); }
};

// LCDIFv2 CLUT load Register
union CLUT_LOAD {
  
  // Bit field definition.
  struct {
    // read-write - CLUT Update Enable
    uint32_t CLUT_UPDATE_EN : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Selected CLUT Number
    uint32_t SEL_CLUT_NUM : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLUT_LOAD &ref() { return *reinterpret_cast<volatile CLUT_LOAD*>(0x40808400); }
};


} // namespace nLCDIFV2