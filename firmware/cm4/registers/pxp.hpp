#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // PXP v2.0 Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPXP {


// Control Register 0
//
union PXP_CTRL {
  
  // Enum definitions.
  enum class eENABLE : uint32_t {
    eDisabled = 0, // PXP is disabled
    eEnabled = 1, // PXP is enabled
  };
  enum class eIRQ_ENABLE : uint32_t {
    eDisabled = 0, // PXP interrupt is disabled
    eEnabled = 1, // PXP interrupt is enabled
  };
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eROTATE : uint32_t {
    eROT_0 = 0, // ROT_0
    eROT_90 = 1, // ROT_90
    eROT_180 = 2, // ROT_180
    eROT_270 = 3, // ROT_270
  };
  enum class eHFLIP : uint32_t {
    eDisabled = 0, // Horizontal Flip is disabled
    eEnabled = 1, // Horizontal Flip is enabled
  };
  enum class eVFLIP : uint32_t {
    eDisabled = 0, // Vertical Flip is disabled
    eEnabled = 1, // Vertical Flip is enabled
  };
  enum class eBLOCK_SIZE : uint32_t {
    e8X8 = 0, // Process 8x8 pixel blocks.
    e16X16 = 1, // Process 16x16 pixel blocks.
  };
  enum class eEN_REPEAT : uint32_t {
    eComplete = 0, // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eRepeat = 1, // PXP will repeat based on the current configuration register settings
  };
  enum class eCLKGATE : uint32_t {
    eNormal = 0, // Normal operation
    eGated = 1, // All clocks to PXP is gated-off
  };
  enum class eSFTRST : uint32_t {
    eEnabled = 0, // Normal PXP operation is enabled
    eDisabled = 1, // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eIRQ_ENABLE IRQ_ENABLE : 1;
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_4 : 3;
    eROTATE ROTATE : 2;
    eHFLIP HFLIP : 1;
    eVFLIP VFLIP : 1;
    uint32_t _reserved_7 : 10;
    uint32_t ROT_POS : 1;
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_9 : 4;
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_10 : 1;
    eCLKGATE CLKGATE : 1;
    eSFTRST SFTRST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL &Instance() { return *reinterpret_cast<volatile PXP_CTRL*>(0x40814000); }
};

// Control Register 0
//
union PXP_CTRL_SET {
  
  // Enum definitions.
  enum class eENABLE : uint32_t {
    eDisabled = 0, // PXP is disabled
    eEnabled = 1, // PXP is enabled
  };
  enum class eIRQ_ENABLE : uint32_t {
    eDisabled = 0, // PXP interrupt is disabled
    eEnabled = 1, // PXP interrupt is enabled
  };
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eROTATE : uint32_t {
    eROT_0 = 0, // ROT_0
    eROT_90 = 1, // ROT_90
    eROT_180 = 2, // ROT_180
    eROT_270 = 3, // ROT_270
  };
  enum class eHFLIP : uint32_t {
    eDisabled = 0, // Horizontal Flip is disabled
    eEnabled = 1, // Horizontal Flip is enabled
  };
  enum class eVFLIP : uint32_t {
    eDisabled = 0, // Vertical Flip is disabled
    eEnabled = 1, // Vertical Flip is enabled
  };
  enum class eBLOCK_SIZE : uint32_t {
    e8X8 = 0, // Process 8x8 pixel blocks.
    e16X16 = 1, // Process 16x16 pixel blocks.
  };
  enum class eEN_REPEAT : uint32_t {
    eComplete = 0, // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eRepeat = 1, // PXP will repeat based on the current configuration register settings
  };
  enum class eCLKGATE : uint32_t {
    eNormal = 0, // Normal operation
    eGated = 1, // All clocks to PXP is gated-off
  };
  enum class eSFTRST : uint32_t {
    eEnabled = 0, // Normal PXP operation is enabled
    eDisabled = 1, // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eIRQ_ENABLE IRQ_ENABLE : 1;
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_4 : 3;
    eROTATE ROTATE : 2;
    eHFLIP HFLIP : 1;
    eVFLIP VFLIP : 1;
    uint32_t _reserved_7 : 10;
    uint32_t ROT_POS : 1;
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_9 : 4;
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_10 : 1;
    eCLKGATE CLKGATE : 1;
    eSFTRST SFTRST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_SET &Instance() { return *reinterpret_cast<volatile PXP_CTRL_SET*>(0x40814004); }
};

// Control Register 0
//
union PXP_CTRL_CLR {
  
  // Enum definitions.
  enum class eENABLE : uint32_t {
    eDisabled = 0, // PXP is disabled
    eEnabled = 1, // PXP is enabled
  };
  enum class eIRQ_ENABLE : uint32_t {
    eDisabled = 0, // PXP interrupt is disabled
    eEnabled = 1, // PXP interrupt is enabled
  };
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eROTATE : uint32_t {
    eROT_0 = 0, // ROT_0
    eROT_90 = 1, // ROT_90
    eROT_180 = 2, // ROT_180
    eROT_270 = 3, // ROT_270
  };
  enum class eHFLIP : uint32_t {
    eDisabled = 0, // Horizontal Flip is disabled
    eEnabled = 1, // Horizontal Flip is enabled
  };
  enum class eVFLIP : uint32_t {
    eDisabled = 0, // Vertical Flip is disabled
    eEnabled = 1, // Vertical Flip is enabled
  };
  enum class eBLOCK_SIZE : uint32_t {
    e8X8 = 0, // Process 8x8 pixel blocks.
    e16X16 = 1, // Process 16x16 pixel blocks.
  };
  enum class eEN_REPEAT : uint32_t {
    eComplete = 0, // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eRepeat = 1, // PXP will repeat based on the current configuration register settings
  };
  enum class eCLKGATE : uint32_t {
    eNormal = 0, // Normal operation
    eGated = 1, // All clocks to PXP is gated-off
  };
  enum class eSFTRST : uint32_t {
    eEnabled = 0, // Normal PXP operation is enabled
    eDisabled = 1, // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eIRQ_ENABLE IRQ_ENABLE : 1;
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_4 : 3;
    eROTATE ROTATE : 2;
    eHFLIP HFLIP : 1;
    eVFLIP VFLIP : 1;
    uint32_t _reserved_7 : 10;
    uint32_t ROT_POS : 1;
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_9 : 4;
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_10 : 1;
    eCLKGATE CLKGATE : 1;
    eSFTRST SFTRST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_CLR &Instance() { return *reinterpret_cast<volatile PXP_CTRL_CLR*>(0x40814008); }
};

// Control Register 0
//
union PXP_CTRL_TOG {
  
  // Enum definitions.
  enum class eENABLE : uint32_t {
    eDisabled = 0, // PXP is disabled
    eEnabled = 1, // PXP is enabled
  };
  enum class eIRQ_ENABLE : uint32_t {
    eDisabled = 0, // PXP interrupt is disabled
    eEnabled = 1, // PXP interrupt is enabled
  };
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eROTATE : uint32_t {
    eROT_0 = 0, // ROT_0
    eROT_90 = 1, // ROT_90
    eROT_180 = 2, // ROT_180
    eROT_270 = 3, // ROT_270
  };
  enum class eHFLIP : uint32_t {
    eDisabled = 0, // Horizontal Flip is disabled
    eEnabled = 1, // Horizontal Flip is enabled
  };
  enum class eVFLIP : uint32_t {
    eDisabled = 0, // Vertical Flip is disabled
    eEnabled = 1, // Vertical Flip is enabled
  };
  enum class eBLOCK_SIZE : uint32_t {
    e8X8 = 0, // Process 8x8 pixel blocks.
    e16X16 = 1, // Process 16x16 pixel blocks.
  };
  enum class eEN_REPEAT : uint32_t {
    eComplete = 0, // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eRepeat = 1, // PXP will repeat based on the current configuration register settings
  };
  enum class eCLKGATE : uint32_t {
    eNormal = 0, // Normal operation
    eGated = 1, // All clocks to PXP is gated-off
  };
  enum class eSFTRST : uint32_t {
    eEnabled = 0, // Normal PXP operation is enabled
    eDisabled = 1, // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eIRQ_ENABLE IRQ_ENABLE : 1;
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_4 : 3;
    eROTATE ROTATE : 2;
    eHFLIP HFLIP : 1;
    eVFLIP VFLIP : 1;
    uint32_t _reserved_7 : 10;
    uint32_t ROT_POS : 1;
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_9 : 4;
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_10 : 1;
    eCLKGATE CLKGATE : 1;
    eSFTRST SFTRST : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_TOG &Instance() { return *reinterpret_cast<volatile PXP_CTRL_TOG*>(0x4081400C); }
};

// Status Register
//
union PXP_STAT {
  
  // Enum definitions.
  enum class eIRQ : uint32_t {
    eIRQ_0 = 0, // No interrupt
    eIRQ_1 = 1, // Interrupt generated
  };
  enum class eAXI_WRITE_ERROR : uint32_t {
    eNormal = 0, // AXI write is normal
    eError = 1, // AXI write error has occurred
  };
  enum class eAXI_READ_ERROR : uint32_t {
    eNormal = 0, // AXI read is normal
    eError = 1, // AXI read error has occurred
  };
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    eActive = 0, // LUT DMA LOAD transfer is active
    eComplete = 1, // LUT DMA LOAD transfer is complete
  };
  
  // Bit field definition.
  struct {
    eIRQ IRQ : 1;
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    uint32_t NEXT_IRQ : 1;
    uint32_t AXI_ERROR_ID : 4;
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_6 : 7;
    uint32_t BLOCKY : 8;
    uint32_t BLOCKX : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT &Instance() { return *reinterpret_cast<volatile PXP_STAT*>(0x40814010); }
};

// Status Register
//
union PXP_STAT_SET {
  
  // Enum definitions.
  enum class eIRQ : uint32_t {
    eIRQ_0 = 0, // No interrupt
    eIRQ_1 = 1, // Interrupt generated
  };
  enum class eAXI_WRITE_ERROR : uint32_t {
    eNormal = 0, // AXI write is normal
    eError = 1, // AXI write error has occurred
  };
  enum class eAXI_READ_ERROR : uint32_t {
    eNormal = 0, // AXI read is normal
    eError = 1, // AXI read error has occurred
  };
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    eActive = 0, // LUT DMA LOAD transfer is active
    eComplete = 1, // LUT DMA LOAD transfer is complete
  };
  
  // Bit field definition.
  struct {
    eIRQ IRQ : 1;
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    uint32_t NEXT_IRQ : 1;
    uint32_t AXI_ERROR_ID : 4;
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_6 : 7;
    uint32_t BLOCKY : 8;
    uint32_t BLOCKX : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_STAT_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_SET &Instance() { return *reinterpret_cast<volatile PXP_STAT_SET*>(0x40814014); }
};

// Status Register
//
union PXP_STAT_CLR {
  
  // Enum definitions.
  enum class eIRQ : uint32_t {
    eIRQ_0 = 0, // No interrupt
    eIRQ_1 = 1, // Interrupt generated
  };
  enum class eAXI_WRITE_ERROR : uint32_t {
    eNormal = 0, // AXI write is normal
    eError = 1, // AXI write error has occurred
  };
  enum class eAXI_READ_ERROR : uint32_t {
    eNormal = 0, // AXI read is normal
    eError = 1, // AXI read error has occurred
  };
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    eActive = 0, // LUT DMA LOAD transfer is active
    eComplete = 1, // LUT DMA LOAD transfer is complete
  };
  
  // Bit field definition.
  struct {
    eIRQ IRQ : 1;
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    uint32_t NEXT_IRQ : 1;
    uint32_t AXI_ERROR_ID : 4;
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_6 : 7;
    uint32_t BLOCKY : 8;
    uint32_t BLOCKX : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_STAT_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_CLR &Instance() { return *reinterpret_cast<volatile PXP_STAT_CLR*>(0x40814018); }
};

// Status Register
//
union PXP_STAT_TOG {
  
  // Enum definitions.
  enum class eIRQ : uint32_t {
    eIRQ_0 = 0, // No interrupt
    eIRQ_1 = 1, // Interrupt generated
  };
  enum class eAXI_WRITE_ERROR : uint32_t {
    eNormal = 0, // AXI write is normal
    eError = 1, // AXI write error has occurred
  };
  enum class eAXI_READ_ERROR : uint32_t {
    eNormal = 0, // AXI read is normal
    eError = 1, // AXI read error has occurred
  };
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    eActive = 0, // LUT DMA LOAD transfer is active
    eComplete = 1, // LUT DMA LOAD transfer is complete
  };
  
  // Bit field definition.
  struct {
    eIRQ IRQ : 1;
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    uint32_t NEXT_IRQ : 1;
    uint32_t AXI_ERROR_ID : 4;
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_6 : 7;
    uint32_t BLOCKY : 8;
    uint32_t BLOCKX : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_STAT_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_TOG &Instance() { return *reinterpret_cast<volatile PXP_STAT_TOG*>(0x4081401C); }
};

// Output Buffer Control Register
//
union PXP_OUT_CTRL {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eARGB8888 = 0, // 32-bit pixels
    eRGB888 = 4, // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888P = 5, // 24-bit pixels (packed 24-bit format)
    eARGB1555 = 8, // 16-bit pixels
    eARGB4444 = 9, // 16-bit pixels
    eRGB555 = 12, // 16-bit pixels
    eRGB444 = 13, // 16-bit pixels
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
  };
  enum class eINTERLACED_OUTPUT : uint32_t {
    ePROGRESSIVE = 0, // All data written in progressive format to the OUTBUF Pointer.
    eFIELD0 = 1, // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD1 = 2, // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eINTERLACED = 3, // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
  };
  enum class eALPHA_OUTPUT : uint32_t {
    eRetain = 0, // Retain
    eOverwritten = 1, // Overwritten
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 5;
    uint32_t _reserved_1 : 3;
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_2 : 13;
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    uint32_t ALPHA : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL &Instance() { return *reinterpret_cast<volatile PXP_OUT_CTRL*>(0x40814020); }
};

// Output Buffer Control Register
//
union PXP_OUT_CTRL_SET {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eARGB8888 = 0, // 32-bit pixels
    eRGB888 = 4, // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888P = 5, // 24-bit pixels (packed 24-bit format)
    eARGB1555 = 8, // 16-bit pixels
    eARGB4444 = 9, // 16-bit pixels
    eRGB555 = 12, // 16-bit pixels
    eRGB444 = 13, // 16-bit pixels
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
  };
  enum class eINTERLACED_OUTPUT : uint32_t {
    ePROGRESSIVE = 0, // All data written in progressive format to the OUTBUF Pointer.
    eFIELD0 = 1, // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD1 = 2, // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eINTERLACED = 3, // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
  };
  enum class eALPHA_OUTPUT : uint32_t {
    eRetain = 0, // Retain
    eOverwritten = 1, // Overwritten
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 5;
    uint32_t _reserved_1 : 3;
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_2 : 13;
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    uint32_t ALPHA : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_SET &Instance() { return *reinterpret_cast<volatile PXP_OUT_CTRL_SET*>(0x40814024); }
};

// Output Buffer Control Register
//
union PXP_OUT_CTRL_CLR {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eARGB8888 = 0, // 32-bit pixels
    eRGB888 = 4, // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888P = 5, // 24-bit pixels (packed 24-bit format)
    eARGB1555 = 8, // 16-bit pixels
    eARGB4444 = 9, // 16-bit pixels
    eRGB555 = 12, // 16-bit pixels
    eRGB444 = 13, // 16-bit pixels
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
  };
  enum class eINTERLACED_OUTPUT : uint32_t {
    ePROGRESSIVE = 0, // All data written in progressive format to the OUTBUF Pointer.
    eFIELD0 = 1, // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD1 = 2, // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eINTERLACED = 3, // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
  };
  enum class eALPHA_OUTPUT : uint32_t {
    eRetain = 0, // Retain
    eOverwritten = 1, // Overwritten
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 5;
    uint32_t _reserved_1 : 3;
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_2 : 13;
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    uint32_t ALPHA : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_CLR &Instance() { return *reinterpret_cast<volatile PXP_OUT_CTRL_CLR*>(0x40814028); }
};

// Output Buffer Control Register
//
union PXP_OUT_CTRL_TOG {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eARGB8888 = 0, // 32-bit pixels
    eRGB888 = 4, // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888P = 5, // 24-bit pixels (packed 24-bit format)
    eARGB1555 = 8, // 16-bit pixels
    eARGB4444 = 9, // 16-bit pixels
    eRGB555 = 12, // 16-bit pixels
    eRGB444 = 13, // 16-bit pixels
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
  };
  enum class eINTERLACED_OUTPUT : uint32_t {
    ePROGRESSIVE = 0, // All data written in progressive format to the OUTBUF Pointer.
    eFIELD0 = 1, // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD1 = 2, // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eINTERLACED = 3, // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
  };
  enum class eALPHA_OUTPUT : uint32_t {
    eRetain = 0, // Retain
    eOverwritten = 1, // Overwritten
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 5;
    uint32_t _reserved_1 : 3;
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_2 : 13;
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    uint32_t ALPHA : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_TOG &Instance() { return *reinterpret_cast<volatile PXP_OUT_CTRL_TOG*>(0x4081402C); }
};

// Output Frame Buffer Pointer
//
union PXP_OUT_BUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_BUF &Instance() { return *reinterpret_cast<volatile PXP_OUT_BUF*>(0x40814030); }
};

// Output Frame Buffer Pointer #2
//
union PXP_OUT_BUF2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_BUF2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_BUF2 &Instance() { return *reinterpret_cast<volatile PXP_OUT_BUF2*>(0x40814040); }
};

// Output Buffer Pitch
//
union PXP_OUT_PITCH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_PITCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PITCH &Instance() { return *reinterpret_cast<volatile PXP_OUT_PITCH*>(0x40814050); }
};

// Output Surface Lower Right Coordinate
//
union PXP_OUT_LRC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t Y : 14;
    uint32_t _reserved_1 : 2;
    uint32_t X : 14;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_LRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_LRC &Instance() { return *reinterpret_cast<volatile PXP_OUT_LRC*>(0x40814060); }
};

// Processed Surface Upper Left Coordinate
//
union PXP_OUT_PS_ULC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t Y : 14;
    uint32_t _reserved_1 : 2;
    uint32_t X : 14;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_PS_ULC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PS_ULC &Instance() { return *reinterpret_cast<volatile PXP_OUT_PS_ULC*>(0x40814070); }
};

// Processed Surface Lower Right Coordinate
//
union PXP_OUT_PS_LRC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t Y : 14;
    uint32_t _reserved_1 : 2;
    uint32_t X : 14;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_PS_LRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PS_LRC &Instance() { return *reinterpret_cast<volatile PXP_OUT_PS_LRC*>(0x40814080); }
};

// Alpha Surface Upper Left Coordinate
//
union PXP_OUT_AS_ULC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t Y : 14;
    uint32_t _reserved_1 : 2;
    uint32_t X : 14;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_AS_ULC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_AS_ULC &Instance() { return *reinterpret_cast<volatile PXP_OUT_AS_ULC*>(0x40814090); }
};

// Alpha Surface Lower Right Coordinate
//
union PXP_OUT_AS_LRC {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t Y : 14;
    uint32_t _reserved_1 : 2;
    uint32_t X : 14;
    uint32_t _reserved_end : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_OUT_AS_LRC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_AS_LRC &Instance() { return *reinterpret_cast<volatile PXP_OUT_AS_LRC*>(0x408140A0); }
};

// Processed Surface (PS) Control Register
//
union PXP_PS_CTRL {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eRGB888_ARGB8888 = 4, // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB555_ARGB1555 = 12, // 16-bit pixels with/without alpha at high 1bit
    eRGB444_ARGB4444 = 13, // 16-bit pixels with/without alpha at high 4 bits
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
    eYUV422 = 30, // 16-bit pixels (3-plane format)
    eYUV420 = 31, // 16-bit pixels (3-plane format)
    eRGBA8888 = 36, // 2-bit pixels with alpha at the low 8 bits
    eRGBA5551 = 44, // 16-bit pixels with alpha at the low 1bits
    eRGBA4444 = 45, // 16-bit pixels with alpha at the low 4 bits
  };
  enum class eWB_SWAP : uint32_t {
    eDisabled = 0, // Byte swap is disabled
    eEnabled = 1, // Byte swap is enabled
  };
  enum class eDECY : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECY2 = 1, // Decimate PS by 2.
    eDECY4 = 2, // Decimate PS by 4.
    eDECY8 = 3, // Decimate PS by 8.
  };
  enum class eDECX : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECX2 = 1, // Decimate PS by 2.
    eDECX4 = 2, // Decimate PS by 4.
    eDECX8 = 3, // Decimate PS by 8.
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 6;
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_2 : 1;
    eDECY DECY : 2;
    eDECX DECX : 2;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL &Instance() { return *reinterpret_cast<volatile PXP_PS_CTRL*>(0x408140B0); }
};

// Processed Surface (PS) Control Register
//
union PXP_PS_CTRL_SET {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eRGB888_ARGB8888 = 4, // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB555_ARGB1555 = 12, // 16-bit pixels with/without alpha at high 1bit
    eRGB444_ARGB4444 = 13, // 16-bit pixels with/without alpha at high 4 bits
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
    eYUV422 = 30, // 16-bit pixels (3-plane format)
    eYUV420 = 31, // 16-bit pixels (3-plane format)
    eRGBA8888 = 36, // 2-bit pixels with alpha at the low 8 bits
    eRGBA5551 = 44, // 16-bit pixels with alpha at the low 1bits
    eRGBA4444 = 45, // 16-bit pixels with alpha at the low 4 bits
  };
  enum class eWB_SWAP : uint32_t {
    eDisabled = 0, // Byte swap is disabled
    eEnabled = 1, // Byte swap is enabled
  };
  enum class eDECY : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECY2 = 1, // Decimate PS by 2.
    eDECY4 = 2, // Decimate PS by 4.
    eDECY8 = 3, // Decimate PS by 8.
  };
  enum class eDECX : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECX2 = 1, // Decimate PS by 2.
    eDECX4 = 2, // Decimate PS by 4.
    eDECX8 = 3, // Decimate PS by 8.
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 6;
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_2 : 1;
    eDECY DECY : 2;
    eDECX DECX : 2;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_SET &Instance() { return *reinterpret_cast<volatile PXP_PS_CTRL_SET*>(0x408140B4); }
};

// Processed Surface (PS) Control Register
//
union PXP_PS_CTRL_CLR {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eRGB888_ARGB8888 = 4, // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB555_ARGB1555 = 12, // 16-bit pixels with/without alpha at high 1bit
    eRGB444_ARGB4444 = 13, // 16-bit pixels with/without alpha at high 4 bits
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
    eYUV422 = 30, // 16-bit pixels (3-plane format)
    eYUV420 = 31, // 16-bit pixels (3-plane format)
    eRGBA8888 = 36, // 2-bit pixels with alpha at the low 8 bits
    eRGBA5551 = 44, // 16-bit pixels with alpha at the low 1bits
    eRGBA4444 = 45, // 16-bit pixels with alpha at the low 4 bits
  };
  enum class eWB_SWAP : uint32_t {
    eDisabled = 0, // Byte swap is disabled
    eEnabled = 1, // Byte swap is enabled
  };
  enum class eDECY : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECY2 = 1, // Decimate PS by 2.
    eDECY4 = 2, // Decimate PS by 4.
    eDECY8 = 3, // Decimate PS by 8.
  };
  enum class eDECX : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECX2 = 1, // Decimate PS by 2.
    eDECX4 = 2, // Decimate PS by 4.
    eDECX8 = 3, // Decimate PS by 8.
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 6;
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_2 : 1;
    eDECY DECY : 2;
    eDECX DECX : 2;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_CLR &Instance() { return *reinterpret_cast<volatile PXP_PS_CTRL_CLR*>(0x408140B8); }
};

// Processed Surface (PS) Control Register
//
union PXP_PS_CTRL_TOG {
  
  // Enum definitions.
  enum class eFORMAT : uint32_t {
    eRGB888_ARGB8888 = 4, // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB555_ARGB1555 = 12, // 16-bit pixels with/without alpha at high 1bit
    eRGB444_ARGB4444 = 13, // 16-bit pixels with/without alpha at high 4 bits
    eRGB565 = 14, // 16-bit pixels
    eYUV1P444 = 16, // 32-bit pixels (1-plane XYUV unpacked)
    eUYVY1P422 = 18, // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eVYUY1P422 = 19, // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eY8 = 20, // 8-bit monochrome pixels (1-plane Y luma output)
    eY4 = 21, // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eYUV2P422 = 24, // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P420 = 25, // 16-bit pixels (2-plane UV)
    eYVU2P422 = 26, // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P420 = 27, // 16-bit pixels (2-plane VU)
    eYUV422 = 30, // 16-bit pixels (3-plane format)
    eYUV420 = 31, // 16-bit pixels (3-plane format)
    eRGBA8888 = 36, // 2-bit pixels with alpha at the low 8 bits
    eRGBA5551 = 44, // 16-bit pixels with alpha at the low 1bits
    eRGBA4444 = 45, // 16-bit pixels with alpha at the low 4 bits
  };
  enum class eWB_SWAP : uint32_t {
    eDisabled = 0, // Byte swap is disabled
    eEnabled = 1, // Byte swap is enabled
  };
  enum class eDECY : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECY2 = 1, // Decimate PS by 2.
    eDECY4 = 2, // Decimate PS by 4.
    eDECY8 = 3, // Decimate PS by 8.
  };
  enum class eDECX : uint32_t {
    eDISABLE = 0, // Disable pre-decimation filter.
    eDECX2 = 1, // Decimate PS by 2.
    eDECX4 = 2, // Decimate PS by 4.
    eDECX8 = 3, // Decimate PS by 8.
  };
  
  // Bit field definition.
  struct {
    eFORMAT FORMAT : 6;
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_2 : 1;
    eDECY DECY : 2;
    eDECX DECX : 2;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_TOG &Instance() { return *reinterpret_cast<volatile PXP_PS_CTRL_TOG*>(0x408140BC); }
};

// PS Input Buffer Address
//
union PXP_PS_BUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_BUF &Instance() { return *reinterpret_cast<volatile PXP_PS_BUF*>(0x408140C0); }
};

// PS U/Cb or 2 Plane UV Input Buffer Address
//
union PXP_PS_UBUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_UBUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_UBUF &Instance() { return *reinterpret_cast<volatile PXP_PS_UBUF*>(0x408140D0); }
};

// PS V/Cr Input Buffer Address
//
union PXP_PS_VBUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_VBUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_VBUF &Instance() { return *reinterpret_cast<volatile PXP_PS_VBUF*>(0x408140E0); }
};

// Processed Surface Pitch
//
union PXP_PS_PITCH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_PITCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_PITCH &Instance() { return *reinterpret_cast<volatile PXP_PS_PITCH*>(0x408140F0); }
};

// PS Background Color
//
union PXP_PS_BACKGROUND {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t COLOR : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_BACKGROUND() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_BACKGROUND &Instance() { return *reinterpret_cast<volatile PXP_PS_BACKGROUND*>(0x40814100); }
};

// PS Scale Factor Register
//
union PXP_PS_SCALE {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t XSCALE : 15;
    uint32_t _reserved_1 : 1;
    uint32_t YSCALE : 15;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_SCALE() = delete;
  inline void Reset() volatile { this->value = 0x10001000; }
  static inline volatile PXP_PS_SCALE &Instance() { return *reinterpret_cast<volatile PXP_PS_SCALE*>(0x40814110); }
};

// PS Scale Offset Register
//
union PXP_PS_OFFSET {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t XOFFSET : 12;
    uint32_t _reserved_1 : 4;
    uint32_t YOFFSET : 12;
    uint32_t _reserved_end : 4;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_OFFSET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_OFFSET &Instance() { return *reinterpret_cast<volatile PXP_PS_OFFSET*>(0x40814120); }
};

// PS Color Key Low
//
union PXP_PS_CLRKEYLOW {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PIXEL : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CLRKEYLOW() = delete;
  inline void Reset() volatile { this->value = 0x00FFFFFF; }
  static inline volatile PXP_PS_CLRKEYLOW &Instance() { return *reinterpret_cast<volatile PXP_PS_CLRKEYLOW*>(0x40814130); }
};

// PS Color Key High
//
union PXP_PS_CLRKEYHIGH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PIXEL : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PS_CLRKEYHIGH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CLRKEYHIGH &Instance() { return *reinterpret_cast<volatile PXP_PS_CLRKEYHIGH*>(0x40814140); }
};

// Alpha Surface Control
//
union PXP_AS_CTRL {
  
  // Enum definitions.
  enum class eALPHA_CTRL : uint32_t {
    eEmbedded = 0, // Indicates that the AS pixel alpha value will be used to blend the AS with PS. The ALPHA field is ignored.
    eOverride = 1, // Indicates that the value in the ALPHA field should be used instead of the alpha values present in the input pixels.
    eMultiply = 2, // Indicates that the value in the ALPHA field should be used to scale all pixel alpha values. Each pixel alpha is multiplied by the value in the ALPHA field.
    eROPs = 3, // Enable ROPs. The ROP field indicates an operation to be performed on the alpha surface and PS pixels.
  };
  enum class eENABLE_COLORKEY : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eFORMAT : uint32_t {
    eARGB8888 = 0, // 32-bit pixels with alpha
    eRGBA888 = 1, // 2-bit pixel with alpha at low 8 bits
    eRGB888 = 4, // 32-bit pixels without alpha (unpacked 24-bit format)
    eARGB1555 = 8, // 16-bit pixels with alpha
    eARGB4444 = 9, // 16-bit pixels with alpha
    eRGBA5551 = 10, // 16-bit pixel with alpha at low 1 bit
    eRGBA4444 = 11, // 16-bit pixel with alpha at low 4 bits
    eRGB555 = 12, // 16-bit pixels without alpha
    eRGB444 = 13, // 16-bit pixels without alpha
    eRGB565 = 14, // 16-bit pixels without alpha
  };
  enum class eROP : uint32_t {
    eMASKAS = 0, // AS AND PS
    eMASKNOTAS = 1, // nAS AND PS
    eMASKASNOT = 2, // AS AND nPS
    eMERGEAS = 3, // AS OR PS
    eMERGENOTAS = 4, // nAS OR PS
    eMERGEASNOT = 5, // AS OR nPS
    eNOTCOPYAS = 6, // nAS
    eNOT = 7, // nPS
    eNOTMASKAS = 8, // AS NAND PS
    eNOTMERGEAS = 9, // AS NOR PS
    eXORAS = 10, // AS XOR PS
    eNOTXORAS = 11, // AS XNOR PS
  };
  enum class eALPHA_INVERT : uint32_t {
    eALPHA_INVERT_0 = 0, // Not inverted
    eInverted = 1, // Inverted
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eALPHA_CTRL ALPHA_CTRL : 2;
    eENABLE_COLORKEY ENABLE_COLORKEY : 1;
    eFORMAT FORMAT : 4;
    uint32_t ALPHA : 8;
    eROP ROP : 4;
    eALPHA_INVERT ALPHA_INVERT : 1;
    uint32_t _reserved_end : 11;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_AS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_CTRL &Instance() { return *reinterpret_cast<volatile PXP_AS_CTRL*>(0x40814150); }
};

// Alpha Surface Buffer Pointer
//
union PXP_AS_BUF {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_AS_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_BUF &Instance() { return *reinterpret_cast<volatile PXP_AS_BUF*>(0x40814160); }
};

// Alpha Surface Pitch
//
union PXP_AS_PITCH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PITCH : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_AS_PITCH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_PITCH &Instance() { return *reinterpret_cast<volatile PXP_AS_PITCH*>(0x40814170); }
};

// Overlay Color Key Low
//
union PXP_AS_CLRKEYLOW {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PIXEL : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_AS_CLRKEYLOW() = delete;
  inline void Reset() volatile { this->value = 0x00FFFFFF; }
  static inline volatile PXP_AS_CLRKEYLOW &Instance() { return *reinterpret_cast<volatile PXP_AS_CLRKEYLOW*>(0x40814180); }
};

// Overlay Color Key High
//
union PXP_AS_CLRKEYHIGH {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PIXEL : 24;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_AS_CLRKEYHIGH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_CLRKEYHIGH &Instance() { return *reinterpret_cast<volatile PXP_AS_CLRKEYHIGH*>(0x40814190); }
};

// Color Space Conversion Coefficient Register 0
//
union PXP_CSC1_COEF0 {
  
  // Enum definitions.
  enum class eYCBCR_MODE : uint32_t {
    eYCBCR_MODE_0 = 0, // YUV to RGB
    eYCBCR_MODE_1 = 1, // YCbCr to RGB
  };
  
  // Bit field definition.
  struct {
    uint32_t Y_OFFSET : 9;
    uint32_t UV_OFFSET : 9;
    uint32_t C0 : 11;
    uint32_t _reserved_3 : 1;
    uint32_t BYPASS : 1;
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CSC1_COEF0() = delete;
  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile PXP_CSC1_COEF0 &Instance() { return *reinterpret_cast<volatile PXP_CSC1_COEF0*>(0x408141A0); }
};

// Color Space Conversion Coefficient Register 1
//
union PXP_CSC1_COEF1 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t C4 : 11;
    uint32_t _reserved_1 : 5;
    uint32_t C1 : 11;
    uint32_t _reserved_end : 5;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CSC1_COEF1() = delete;
  inline void Reset() volatile { this->value = 0x01230208; }
  static inline volatile PXP_CSC1_COEF1 &Instance() { return *reinterpret_cast<volatile PXP_CSC1_COEF1*>(0x408141B0); }
};

// Color Space Conversion Coefficient Register 2
//
union PXP_CSC1_COEF2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t C3 : 11;
    uint32_t _reserved_1 : 5;
    uint32_t C2 : 11;
    uint32_t _reserved_end : 5;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_CSC1_COEF2() = delete;
  inline void Reset() volatile { this->value = 0x079B076C; }
  static inline volatile PXP_CSC1_COEF2 &Instance() { return *reinterpret_cast<volatile PXP_CSC1_COEF2*>(0x408141C0); }
};

// PXP Power Control Register
//
union PXP_POWER {
  
  // Enum definitions.
  enum class eROT_MEM_LP_STATE : uint32_t {
    eNONE = 0, // Memory is not in low power state.
    eLS = 1, // Light Sleep Mode. Low leakage mode, maintain memory contents.
    eDS = 2, // Deep Sleep Mode. Low leakage mode, maintain memory contents.
    eSD = 4, // Shut Down Mode. Shut Down periphery and core, no memory retention.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    eROT_MEM_LP_STATE ROT_MEM_LP_STATE : 3;
    uint32_t _reserved_end : 20;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_POWER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_POWER &Instance() { return *reinterpret_cast<volatile PXP_POWER*>(0x40814320); }
};

// Next Frame Pointer
//
union PXP_NEXT {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ENABLED : 1;
    uint32_t _reserved_1 : 1;
    uint32_t POINTER : 30;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_NEXT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_NEXT &Instance() { return *reinterpret_cast<volatile PXP_NEXT*>(0x40814400); }
};

// PXP Alpha Engine A Control Register.
//
union PXP_PORTER_DUFF_CTRL {
  
  // Enum definitions.
  enum class ePORTER_DUFF_ENABLE : uint32_t {
    eDisabled = 0, // Disabled
    eEnabled = 1, // Enabled
  };
  enum class eS0_S1_FACTOR_MODE : uint32_t {
    eS0_S1_FACTOR_MODE_0 = 0, // 1
    eS0_S1_FACTOR_MODE_1 = 1, // 0
    eS0_S1_FACTOR_MODE_2 = 2, // Straight alpha
    eS0_S1_FACTOR_MODE_3 = 3, // Inverse alpha
  };
  enum class eS0_GLOBAL_ALPHA_MODE : uint32_t {
    eS0_GLOBAL_ALPHA_MODE_0 = 0, // Global alpha
    eS0_GLOBAL_ALPHA_MODE_1 = 1, // Local alpha
    eS0_GLOBAL_ALPHA_MODE_2 = 2, // Scaled alpha
    eS0_GLOBAL_ALPHA_MODE_3 = 3, // Scaled alpha
  };
  enum class eS0_ALPHA_MODE : uint32_t {
    eS0_ALPHA_MODE_0 = 0, // Straight mode
    eS0_ALPHA_MODE_1 = 1, // Inverted mode
  };
  enum class eS0_COLOR_MODE : uint32_t {
    eS0_COLOR_MODE_0 = 0, // Original pixel
    eS0_COLOR_MODE_1 = 1, // Scaled pixel
  };
  enum class eS1_S0_FACTOR_MODE : uint32_t {
    eS1_S0_FACTOR_MODE_0 = 0, // 1
    eS1_S0_FACTOR_MODE_1 = 1, // 0
    eS1_S0_FACTOR_MODE_2 = 2, // Straight alpha
    eS1_S0_FACTOR_MODE_3 = 3, // Inverse alpha
  };
  enum class eS1_GLOBAL_ALPHA_MODE : uint32_t {
    eS1_GLOBAL_ALPHA_MODE_0 = 0, // Global alpha
    eS1_GLOBAL_ALPHA_MODE_1 = 1, // Local alpha
    eS1_GLOBAL_ALPHA_MODE_2 = 2, // Scaled alpha
    eS1_GLOBAL_ALPHA_MODE_3 = 3, // Scaled alpha
  };
  enum class eS1_ALPHA_MODE : uint32_t {
    eS1_ALPHA_MODE_0 = 0, // Straight mode
    eS1_ALPHA_MODE_1 = 1, // Inverted mode
  };
  enum class eS1_COLOR_MODE : uint32_t {
    eS1_COLOR_MODE_0 = 0, // Original pixel
    eS1_COLOR_MODE_1 = 1, // Scaled pixel
  };
  
  // Bit field definition.
  struct {
    ePORTER_DUFF_ENABLE PORTER_DUFF_ENABLE : 1;
    eS0_S1_FACTOR_MODE S0_S1_FACTOR_MODE : 2;
    eS0_GLOBAL_ALPHA_MODE S0_GLOBAL_ALPHA_MODE : 2;
    eS0_ALPHA_MODE S0_ALPHA_MODE : 1;
    eS0_COLOR_MODE S0_COLOR_MODE : 1;
    uint32_t _reserved_5 : 1;
    eS1_S0_FACTOR_MODE S1_S0_FACTOR_MODE : 2;
    eS1_GLOBAL_ALPHA_MODE S1_GLOBAL_ALPHA_MODE : 2;
    eS1_ALPHA_MODE S1_ALPHA_MODE : 1;
    eS1_COLOR_MODE S1_COLOR_MODE : 1;
    uint32_t _reserved_9 : 2;
    uint32_t S0_GLOBAL_ALPHA : 8;
    uint32_t S1_GLOBAL_ALPHA : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PXP_PORTER_DUFF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PORTER_DUFF_CTRL &Instance() { return *reinterpret_cast<volatile PXP_PORTER_DUFF_CTRL*>(0x40814440); }
};


} // namespace nPXP