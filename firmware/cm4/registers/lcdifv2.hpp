#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LCDIF_V2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLCDIFV2 {


// LCDIFv2 display control Register
//
union CTRL {
  
  enum class eINV_HS : uint32_t {
    ebf_val0 = 0, // HSYNC signal not inverted (active HIGH)
    ebf_val1 = 1, // Invert HSYNC signal (active LOW)
  };
  
  enum class eINV_VS : uint32_t {
    ebf_val0 = 0, // VSYNC signal not inverted (active HIGH)
    ebf_val1 = 1, // Invert VSYNC signal (active LOW)
  };
  
  enum class eINV_DE : uint32_t {
    ebf_val0 = 0, // Data enable is active high
    ebf_val1 = 1, // Data enable is active low
  };
  
  enum class eINV_PXCK : uint32_t {
    ebf_val0 = 0, // Display samples data on the falling edge
    ebf_val1 = 1, // Display samples data on the rising edge
  };
  
  enum class eNEG : uint32_t {
    ebf_val0 = 0, // Output is to remain same
    ebf_val1 = 1, // Output to be negated
  };
  
  enum class eSW_RESET : uint32_t {
    ebf_val0 = 0, // No action
    ebf_val1 = 1, // All LCDIFv2 internal registers are forced into their reset state. User registers are not affected
  };
  
  // Bit field definition.
  struct {
    eINV_HS INV_HS : 1;
    eINV_VS INV_VS : 1;
    eINV_DE INV_DE : 1;
    eINV_PXCK INV_PXCK : 1;
    eNEG NEG : 1;
    uint32_t _reserved_0 : 26;
    eSW_RESET SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40808000); }
};

// LCDIFv2 display control Register
//
union CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t INV_HS : 1;
    uint32_t INV_VS : 1;
    uint32_t INV_DE : 1;
    uint32_t INV_PXCK : 1;
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_SET &Instance() { return *reinterpret_cast<volatile CTRL_SET*>(0x40808004); }
};

// LCDIFv2 display control Register
//
union CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t INV_HS : 1;
    uint32_t INV_VS : 1;
    uint32_t INV_DE : 1;
    uint32_t INV_PXCK : 1;
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_CLR &Instance() { return *reinterpret_cast<volatile CTRL_CLR*>(0x40808008); }
};

// LCDIFv2 display control Register
//
union CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t INV_HS : 1;
    uint32_t INV_VS : 1;
    uint32_t INV_DE : 1;
    uint32_t INV_PXCK : 1;
    uint32_t NEG : 1;
    uint32_t _reserved_0 : 26;
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile CTRL_TOG &Instance() { return *reinterpret_cast<volatile CTRL_TOG*>(0x4080800C); }
};

// Display Parameter Register
//
union DISP_PARA {
  
  enum class eDISP_MODE : uint32_t {
    ebf_val0 = 0, // Normal mode. Panel content controlled by layer configuration
    ebf_val1 = 1, // Test Mode1(BGND Color Display)
    ebf_val2 = 2, // Test Mode2(Column Color Bar)
    ebf_val3 = 3, // Test Mode3(Row Color Bar)
  };
  
  enum class eLINE_PATTERN : uint32_t {
    ebf_val0 = 0, // RGB
    ebf_val1 = 1, // RBG
    ebf_val2 = 2, // GBR
    ebf_val3 = 3, // GRB
    ebf_val4 = 4, // BRG
    ebf_val5 = 5, // BGR
  };
  
  enum class eDISP_ON : uint32_t {
    ebf_val0 = 0, // Display Off
    ebf_val1 = 1, // Display On
  };
  
  // Bit field definition.
  struct {
    uint32_t BGND_B : 8;
    uint32_t BGND_G : 8;
    uint32_t BGND_R : 8;
    eDISP_MODE DISP_MODE : 2;
    eLINE_PATTERN LINE_PATTERN : 3;
    uint32_t _reserved_0 : 2;
    eDISP_ON DISP_ON : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DISP_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DISP_PARA &Instance() { return *reinterpret_cast<volatile DISP_PARA*>(0x40808010); }
};

// Display Size Register
//
union DISP_SIZE {
  
  // Bit field definition.
  struct {
    uint32_t DELTA_X : 12;
    uint32_t _reserved_0 : 4;
    uint32_t DELTA_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DISP_SIZE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DISP_SIZE &Instance() { return *reinterpret_cast<volatile DISP_SIZE*>(0x40808014); }
};

// Horizontal Sync Parameter Register
//
union HSYN_PARA {
  
  // Bit field definition.
  struct {
    uint32_t FP_H : 9;
    uint32_t _reserved_0 : 2;
    uint32_t PW_H : 9;
    uint32_t _reserved_1 : 2;
    uint32_t BP_H : 9;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSYN_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00C01803; }
  static inline volatile HSYN_PARA &Instance() { return *reinterpret_cast<volatile HSYN_PARA*>(0x40808018); }
};

// Vertical Sync Parameter Register
//
union VSYN_PARA {
  
  // Bit field definition.
  struct {
    uint32_t FP_V : 9;
    uint32_t _reserved_0 : 2;
    uint32_t PW_V : 9;
    uint32_t _reserved_1 : 2;
    uint32_t BP_V : 9;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VSYN_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00C01803; }
  static inline volatile VSYN_PARA &Instance() { return *reinterpret_cast<volatile VSYN_PARA*>(0x4080801C); }
};

// Interrupt Status Register for domain 0
//
union INT_STATUS_D0 {
  
  enum class eVSYNC : uint32_t {
    ebf_val0 = 0, // VSYNC has not started
    ebf_val1 = 1, // VSYNC has started
  };
  
  enum class eUNDERRUN : uint32_t {
    ebf_val0 = 0, // Output buffer not underrun
    ebf_val1 = 1, // Output buffer underrun
  };
  
  enum class eVS_BLANK : uint32_t {
    ebf_val0 = 0, // Vertical blanking period has not started
    ebf_val1 = 1, // Vertical blanking period has started
  };
  
  // Bit field definition.
  struct {
    eVSYNC VSYNC : 1;
    eUNDERRUN UNDERRUN : 1;
    eVS_BLANK VS_BLANK : 1;
    uint32_t _reserved_0 : 5;
    uint32_t DMA_ERR : 8;
    uint32_t DMA_DONE : 8;
    uint32_t FIFO_EMPTY : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_D0 &Instance() { return *reinterpret_cast<volatile INT_STATUS_D0*>(0x40808020); }
};

// Interrupt Enable Register for domain 0
//
union INT_ENABLE_D0 {
  
  enum class eVSYNC_EN : uint32_t {
    ebf_val0 = 0, // VSYNC interrupt disable
    ebf_val1 = 1, // VSYNC interrupt enable
  };
  
  enum class eUNDERRUN_EN : uint32_t {
    ebf_val0 = 0, // Output buffer underrun disable
    ebf_val1 = 1, // Output buffer underrun enable
  };
  
  enum class eVS_BLANK_EN : uint32_t {
    ebf_val0 = 0, // Vertical blanking start interrupt disable
    ebf_val1 = 1, // Vertical blanking start interrupt enable
  };
  
  // Bit field definition.
  struct {
    eVSYNC_EN VSYNC_EN : 1;
    eUNDERRUN_EN UNDERRUN_EN : 1;
    eVS_BLANK_EN VS_BLANK_EN : 1;
    uint32_t _reserved_0 : 5;
    uint32_t DMA_ERR_EN : 8;
    uint32_t DMA_DONE_EN : 8;
    uint32_t FIFO_EMPTY_EN : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_ENABLE_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_ENABLE_D0 &Instance() { return *reinterpret_cast<volatile INT_ENABLE_D0*>(0x40808024); }
};

// Interrupt Status Register for domain 1
//
union INT_STATUS_D1 {
  
  // Bit field definition.
  struct {
    uint32_t VSYNC : 1;
    uint32_t UNDERRUN : 1;
    uint32_t VS_BLANK : 1;
    uint32_t _reserved_0 : 5;
    uint32_t DMA_ERR : 8;
    uint32_t DMA_DONE : 8;
    uint32_t FIFO_EMPTY : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS_D1 &Instance() { return *reinterpret_cast<volatile INT_STATUS_D1*>(0x40808030); }
};

// Interrupt Enable Register for domain 1
//
union INT_ENABLE_D1 {
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_EN : 1;
    uint32_t UNDERRUN_EN : 1;
    uint32_t VS_BLANK_EN : 1;
    uint32_t _reserved_0 : 5;
    uint32_t DMA_ERR_EN : 8;
    uint32_t DMA_DONE_EN : 8;
    uint32_t FIFO_EMPTY_EN : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_ENABLE_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_ENABLE_D1 &Instance() { return *reinterpret_cast<volatile INT_ENABLE_D1*>(0x40808034); }
};

// Reserved
//
union PDI_PARA {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PDI_PARA() = delete;
  inline void Reset() volatile { this->value = 0x00001000; }
  static inline volatile PDI_PARA &Instance() { return *reinterpret_cast<volatile PDI_PARA*>(0x40808040); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL0_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_1*>(0x40808200); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL0_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_2*>(0x40808204); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL0_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_3*>(0x40808208); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL0_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_4*>(0x4080820C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL0_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_5*>(0x40808210); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL0_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL0_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL0_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL0_6*>(0x40808214); }
};

// Color Space Conversion Coefficient Register 0
//
union CSC0_COEF0 {
  
  enum class eENABLE : uint32_t {
    ebf_val0 = 0, // The CSC is bypassed and the input pixels are RGB data already
    ebf_val1 = 1, // The CSC is enabled and the pixels will be converted to RGB data
  };
  
  enum class eYCBCR_MODE : uint32_t {
    ebf_val0 = 0, // Converting YUV to RGB data
    ebf_val1 = 1, // Converting YCbCr to RGB data
  };
  
  // Bit field definition.
  struct {
    uint32_t Y_OFFSET : 9;
    uint32_t UV_OFFSET : 9;
    uint32_t C0 : 11;
    uint32_t _reserved_0 : 1;
    eENABLE ENABLE : 1;
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC0_COEF0() = delete;
  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile CSC0_COEF0 &Instance() { return *reinterpret_cast<volatile CSC0_COEF0*>(0x40808218); }
};

// Color Space Conversion Coefficient Register 1
//
union CSC0_COEF1 {
  
  // Bit field definition.
  struct {
    uint32_t C4 : 11;
    uint32_t _reserved_0 : 5;
    uint32_t C1 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC0_COEF1() = delete;
  inline void Reset() volatile { this->value = 0x01230208; }
  static inline volatile CSC0_COEF1 &Instance() { return *reinterpret_cast<volatile CSC0_COEF1*>(0x4080821C); }
};

// Color Space Conversion Coefficient Register 2
//
union CSC0_COEF2 {
  
  // Bit field definition.
  struct {
    uint32_t C3 : 11;
    uint32_t _reserved_0 : 5;
    uint32_t C2 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC0_COEF2() = delete;
  inline void Reset() volatile { this->value = 0x076B079C; }
  static inline volatile CSC0_COEF2 &Instance() { return *reinterpret_cast<volatile CSC0_COEF2*>(0x40808220); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL1_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_1*>(0x40808240); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL1_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_2*>(0x40808244); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL1_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_3*>(0x40808248); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL1_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_4*>(0x4080824C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL1_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_5*>(0x40808250); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL1_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL1_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL1_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL1_6*>(0x40808254); }
};

// Color Space Conversion Coefficient Register 0
//
union CSC1_COEF0 {
  
  enum class eENABLE : uint32_t {
    ebf_val0 = 0, // The CSC is bypassed and the input pixels are RGB data already
    ebf_val1 = 1, // The CSC is enabled and the pixels will be converted to RGB data
  };
  
  enum class eYCBCR_MODE : uint32_t {
    ebf_val0 = 0, // Converting YUV to RGB data
    ebf_val1 = 1, // Converting YCbCr to RGB data
  };
  
  // Bit field definition.
  struct {
    uint32_t Y_OFFSET : 9;
    uint32_t UV_OFFSET : 9;
    uint32_t C0 : 11;
    uint32_t _reserved_0 : 1;
    eENABLE ENABLE : 1;
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC1_COEF0() = delete;
  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile CSC1_COEF0 &Instance() { return *reinterpret_cast<volatile CSC1_COEF0*>(0x40808258); }
};

// Color Space Conversion Coefficient Register 1
//
union CSC1_COEF1 {
  
  // Bit field definition.
  struct {
    uint32_t C4 : 11;
    uint32_t _reserved_0 : 5;
    uint32_t C1 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC1_COEF1() = delete;
  inline void Reset() volatile { this->value = 0x01230208; }
  static inline volatile CSC1_COEF1 &Instance() { return *reinterpret_cast<volatile CSC1_COEF1*>(0x4080825C); }
};

// Color Space Conversion Coefficient Register 2
//
union CSC1_COEF2 {
  
  // Bit field definition.
  struct {
    uint32_t C3 : 11;
    uint32_t _reserved_0 : 5;
    uint32_t C2 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CSC1_COEF2() = delete;
  inline void Reset() volatile { this->value = 0x076B079C; }
  static inline volatile CSC1_COEF2 &Instance() { return *reinterpret_cast<volatile CSC1_COEF2*>(0x40808260); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL2_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_1*>(0x40808280); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL2_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_2*>(0x40808284); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL2_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_3*>(0x40808288); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL2_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_4*>(0x4080828C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL2_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_5*>(0x40808290); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL2_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL2_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL2_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL2_6*>(0x40808294); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL3_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_1*>(0x408082C0); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL3_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_2*>(0x408082C4); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL3_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_3*>(0x408082C8); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL3_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_4*>(0x408082CC); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL3_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_5*>(0x408082D0); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL3_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL3_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL3_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL3_6*>(0x408082D4); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL4_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_1*>(0x40808300); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL4_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_2*>(0x40808304); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL4_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_3*>(0x40808308); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL4_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_4*>(0x4080830C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL4_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_5*>(0x40808310); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL4_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL4_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL4_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL4_6*>(0x40808314); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL5_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_1*>(0x40808340); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL5_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_2*>(0x40808344); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL5_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_3*>(0x40808348); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL5_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_4*>(0x4080834C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL5_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_5*>(0x40808350); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL5_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL5_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL5_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL5_6*>(0x40808354); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL6_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_1*>(0x40808380); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL6_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_2*>(0x40808384); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL6_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_3*>(0x40808388); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL6_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_4*>(0x4080838C); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL6_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_5*>(0x40808390); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL6_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL6_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL6_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL6_6*>(0x40808394); }
};

// Control Descriptor Layer 1 Register
//
union CTRLDESCL7_1 {
  
  // Bit field definition.
  struct {
    uint32_t WIDTH : 12;
    uint32_t _reserved_0 : 4;
    uint32_t HEIGHT : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_1 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_1*>(0x408083C0); }
};

// Control Descriptor Layer 2 Register
//
union CTRLDESCL7_2 {
  
  // Bit field definition.
  struct {
    uint32_t POSX : 12;
    uint32_t _reserved_0 : 4;
    uint32_t POSY : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_2 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_2*>(0x408083C4); }
};

// Control Descriptor Layer 3 Register
//
union CTRLDESCL7_3 {
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_3 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_3*>(0x408083C8); }
};

// Control Descriptor Layer 4 Register
//
union CTRLDESCL7_4 {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_4 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_4*>(0x408083CC); }
};

// Control Descriptor Layer 5 Register
//
union CTRLDESCL7_5 {
  
  enum class eAB_MODE : uint32_t {
    ebf_val0 = 0, // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val1 = 1, // Blend with global ALPHA
    ebf_val2 = 2, // Blend with embedded ALPHA
    ebf_val3 = 3, // Blend with Porter Duff enable
  };
  
  enum class ePD_FACTOR_MODE : uint32_t {
    ebf_val0 = 0, // Using 1
    ebf_val1 = 1, // Using 0
    ebf_val2 = 2, // Using straight alpha
    ebf_val3 = 3, // Using inverse alpha
  };
  
  enum class ePD_GLOBAL_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Using global alpha
    ebf_val1 = 1, // Using local alpha
    ebf_val2 = 2, // Using scaled alpha
    ebf_val3 = 3, // Using scaled alpha
  };
  
  enum class ePD_ALPHA_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff alpha
    ebf_val1 = 1, // Inversed mode for Porter Duff alpha
  };
  
  enum class ePD_COLOR_MODE : uint32_t {
    ebf_val0 = 0, // Straight mode for Porter Duff color
    ebf_val1 = 1, // Inversed mode for Porter Duff color
  };
  
  enum class eYUV_FORMAT : uint32_t {
    ebf_val0 = 0, // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val1 = 1, // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val2 = 2, // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val3 = 3, // The YVYU422 8bit sequence is Y1,V1,Y2,U1
  };
  
  enum class eBPP : uint32_t {
    ebf_val0 = 0, // 1 bpp
    ebf_val1 = 1, // 2 bpp
    ebf_val2 = 2, // 4 bpp
    ebf_val3 = 3, // 8 bpp
    ebf_val4 = 4, // 16 bpp (RGB565)
    ebf_val5 = 5, // 16 bpp (ARGB1555)
    ebf_val6 = 6, // 16 bpp (ARGB4444)
    ebf_val7 = 7, // YCbCr422 (Only layer 0/1 can support this format)
    ebf_val8 = 8, // 24 bpp (RGB888)
    ebf_val9 = 9, // 32 bpp (ARGB8888)
    ebf_val10 = 10, // 32 bpp (ABGR8888)
  };
  
  enum class eSAFETY_EN : uint32_t {
    ebf_val0 = 0, // Safety Mode is disabled
    ebf_val1 = 1, // Safety Mode is enabled for this layer
  };
  
  enum class eEN : uint32_t {
    ebf_val0 = 0, // OFF
    ebf_val1 = 1, // ON
  };
  
  // Bit field definition.
  struct {
    eAB_MODE AB_MODE : 2;
    uint32_t _reserved_0 : 2;
    ePD_FACTOR_MODE PD_FACTOR_MODE : 2;
    ePD_GLOBAL_ALPHA_MODE PD_GLOBAL_ALPHA_MODE : 2;
    ePD_ALPHA_MODE PD_ALPHA_MODE : 1;
    ePD_COLOR_MODE PD_COLOR_MODE : 1;
    uint32_t _reserved_1 : 4;
    eYUV_FORMAT YUV_FORMAT : 2;
    uint32_t GLOBAL_ALPHA : 8;
    eBPP BPP : 4;
    eSAFETY_EN SAFETY_EN : 1;
    uint32_t _reserved_2 : 1;
    uint32_t SHADOW_LOAD_EN : 1;
    eEN EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_5 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_5*>(0x408083D0); }
};

// Control Descriptor Layer 6 Register
//
union CTRLDESCL7_6 {
  
  // Bit field definition.
  struct {
    uint32_t BCLR_B : 8;
    uint32_t BCLR_G : 8;
    uint32_t BCLR_R : 8;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRLDESCL7_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRLDESCL7_6 &Instance() { return *reinterpret_cast<volatile CTRLDESCL7_6*>(0x408083D4); }
};

// LCDIFv2 CLUT load Register
//
union CLUT_LOAD {
  
  // Bit field definition.
  struct {
    uint32_t CLUT_UPDATE_EN : 1;
    uint32_t _reserved_0 : 3;
    uint32_t SEL_CLUT_NUM : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CLUT_LOAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CLUT_LOAD &Instance() { return *reinterpret_cast<volatile CLUT_LOAD*>(0x40808400); }
};


} // namespace nLCDIFV2