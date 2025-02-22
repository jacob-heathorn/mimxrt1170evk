#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LCDIF Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLCDIF {


// LCDIF General Control Register
//
union LCDIF_CTRL {
  
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    eALL_24_BITS_VALID = 0, // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eDROP_UPPER_2_BITS_PER_BYTE = 1, // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
  };
  
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    eLOWER_18_BITS_VALID = 0, // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1, // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
  };
  
  enum class eWORD_LENGTH : uint32_t {
    e16_BIT = 0, // Input data is 16 bits per pixel.
    e8_BIT = 1, // Input data is 8 bits wide.
    e18_BIT = 2, // Input data is 18 bits per pixel.
    e24_BIT = 3, // Input data is 24 bits per pixel.
  };
  
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    e16_BIT = 0, // 16-bit data bus mode.
    e8_BIT = 1, // 8-bit data bus mode.
    e18_BIT = 2, // 18-bit data bus mode.
    e24_BIT = 3, // 24-bit data bus mode.
  };
  
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eDATA_SHIFT_DIR : uint32_t {
    eTXDATA_SHIFT_LEFT = 0, // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1, // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
  };
  
  // Bit field definition.
  struct {
    uint32_t RUN : 1;
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    uint32_t MASTER : 1;
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    eWORD_LENGTH WORD_LENGTH : 2;
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    uint32_t SHIFT_NUM_BITS : 5;
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    uint32_t CLKGATE : 1;
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL*>(0x40804000); }
};

// LCDIF General Control Register
//
union LCDIF_CTRL_SET {
  
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    eALL_24_BITS_VALID = 0, // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eDROP_UPPER_2_BITS_PER_BYTE = 1, // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
  };
  
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    eLOWER_18_BITS_VALID = 0, // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1, // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
  };
  
  enum class eWORD_LENGTH : uint32_t {
    e16_BIT = 0, // Input data is 16 bits per pixel.
    e8_BIT = 1, // Input data is 8 bits wide.
    e18_BIT = 2, // Input data is 18 bits per pixel.
    e24_BIT = 3, // Input data is 24 bits per pixel.
  };
  
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    e16_BIT = 0, // 16-bit data bus mode.
    e8_BIT = 1, // 8-bit data bus mode.
    e18_BIT = 2, // 18-bit data bus mode.
    e24_BIT = 3, // 24-bit data bus mode.
  };
  
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eDATA_SHIFT_DIR : uint32_t {
    eTXDATA_SHIFT_LEFT = 0, // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1, // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
  };
  
  // Bit field definition.
  struct {
    uint32_t RUN : 1;
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    uint32_t MASTER : 1;
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    eWORD_LENGTH WORD_LENGTH : 2;
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    uint32_t SHIFT_NUM_BITS : 5;
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    uint32_t CLKGATE : 1;
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_SET &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_SET*>(0x40804004); }
};

// LCDIF General Control Register
//
union LCDIF_CTRL_CLR {
  
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    eALL_24_BITS_VALID = 0, // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eDROP_UPPER_2_BITS_PER_BYTE = 1, // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
  };
  
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    eLOWER_18_BITS_VALID = 0, // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1, // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
  };
  
  enum class eWORD_LENGTH : uint32_t {
    e16_BIT = 0, // Input data is 16 bits per pixel.
    e8_BIT = 1, // Input data is 8 bits wide.
    e18_BIT = 2, // Input data is 18 bits per pixel.
    e24_BIT = 3, // Input data is 24 bits per pixel.
  };
  
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    e16_BIT = 0, // 16-bit data bus mode.
    e8_BIT = 1, // 8-bit data bus mode.
    e18_BIT = 2, // 18-bit data bus mode.
    e24_BIT = 3, // 24-bit data bus mode.
  };
  
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eDATA_SHIFT_DIR : uint32_t {
    eTXDATA_SHIFT_LEFT = 0, // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1, // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
  };
  
  // Bit field definition.
  struct {
    uint32_t RUN : 1;
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    uint32_t MASTER : 1;
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    eWORD_LENGTH WORD_LENGTH : 2;
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    uint32_t SHIFT_NUM_BITS : 5;
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    uint32_t CLKGATE : 1;
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_CLR*>(0x40804008); }
};

// LCDIF General Control Register
//
union LCDIF_CTRL_TOG {
  
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    eALL_24_BITS_VALID = 0, // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eDROP_UPPER_2_BITS_PER_BYTE = 1, // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
  };
  
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    eLOWER_18_BITS_VALID = 0, // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1, // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
  };
  
  enum class eWORD_LENGTH : uint32_t {
    e16_BIT = 0, // Input data is 16 bits per pixel.
    e8_BIT = 1, // Input data is 8 bits wide.
    e18_BIT = 2, // Input data is 18 bits per pixel.
    e24_BIT = 3, // Input data is 24 bits per pixel.
  };
  
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    e16_BIT = 0, // 16-bit data bus mode.
    e8_BIT = 1, // 8-bit data bus mode.
    e18_BIT = 2, // 18-bit data bus mode.
    e24_BIT = 3, // 24-bit data bus mode.
  };
  
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    eNO_SWAP = 0, // No byte swapping.(Little endian)
    eBIG_ENDIAN_SWAP = 1, // Big Endian swap (swap bytes 0,3 and 1,2).
    eHWD_SWAP = 2, // Swap half-words.
    eHWD_BYTE_SWAP = 3, // Swap bytes within each half-word.
  };
  
  enum class eDATA_SHIFT_DIR : uint32_t {
    eTXDATA_SHIFT_LEFT = 0, // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1, // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
  };
  
  // Bit field definition.
  struct {
    uint32_t RUN : 1;
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    uint32_t MASTER : 1;
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    eWORD_LENGTH WORD_LENGTH : 2;
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    uint32_t SHIFT_NUM_BITS : 5;
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    uint32_t CLKGATE : 1;
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_TOG*>(0x4080400C); }
};

// LCDIF General Control1 Register
//
union LCDIF_CTRL1 {
  
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eUNDERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eOVERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eBM_ERROR_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    uint32_t UNDERFLOW_IRQ_EN : 1;
    uint32_t OVERFLOW_IRQ_EN : 1;
    uint32_t BYTE_PACKING_FORMAT : 4;
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    uint32_t FIFO_CLEAR : 1;
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    uint32_t INTERLACE_FIELDS : 1;
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    uint32_t CS_OUT_SELECT : 1;
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1 &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1*>(0x40804010); }
};

// LCDIF General Control1 Register
//
union LCDIF_CTRL1_SET {
  
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eUNDERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eOVERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eBM_ERROR_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    uint32_t UNDERFLOW_IRQ_EN : 1;
    uint32_t OVERFLOW_IRQ_EN : 1;
    uint32_t BYTE_PACKING_FORMAT : 4;
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    uint32_t FIFO_CLEAR : 1;
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    uint32_t INTERLACE_FIELDS : 1;
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    uint32_t CS_OUT_SELECT : 1;
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_SET() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_SET &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_SET*>(0x40804014); }
};

// LCDIF General Control1 Register
//
union LCDIF_CTRL1_CLR {
  
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eUNDERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eOVERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eBM_ERROR_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    uint32_t UNDERFLOW_IRQ_EN : 1;
    uint32_t OVERFLOW_IRQ_EN : 1;
    uint32_t BYTE_PACKING_FORMAT : 4;
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    uint32_t FIFO_CLEAR : 1;
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    uint32_t INTERLACE_FIELDS : 1;
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    uint32_t CS_OUT_SELECT : 1;
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_CLR*>(0x40804018); }
};

// LCDIF General Control1 Register
//
union LCDIF_CTRL1_TOG {
  
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eUNDERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eOVERFLOW_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  enum class eBM_ERROR_IRQ : uint32_t {
    eNO_REQUEST = 0, // No Interrupt Request Pending.
    eREQUEST = 1, // Interrupt Request Pending.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    uint32_t UNDERFLOW_IRQ_EN : 1;
    uint32_t OVERFLOW_IRQ_EN : 1;
    uint32_t BYTE_PACKING_FORMAT : 4;
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    uint32_t FIFO_CLEAR : 1;
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    uint32_t INTERLACE_FIELDS : 1;
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    uint32_t CS_OUT_SELECT : 1;
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_TOG*>(0x4080401C); }
};

// LCDIF General Control2 Register
//
union LCDIF_CTRL2 {
  
  enum class eEVEN_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eODD_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eOUTSTANDING_REQS : uint32_t {
    eREQ_1 = 0, // REQ_1
    eREQ_2 = 1, // REQ_2
    eREQ_4 = 2, // REQ_4
    eREQ_8 = 3, // REQ_8
    eREQ_16 = 4, // REQ_16
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    uint32_t BURST_LEN_8 : 1;
    eOUTSTANDING_REQS OUTSTANDING_REQS : 3;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00200000; }
  static inline volatile LCDIF_CTRL2 &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL2*>(0x40804020); }
};

// LCDIF General Control2 Register
//
union LCDIF_CTRL2_SET {
  
  enum class eEVEN_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eODD_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eOUTSTANDING_REQS : uint32_t {
    eREQ_1 = 0, // REQ_1
    eREQ_2 = 1, // REQ_2
    eREQ_4 = 2, // REQ_4
    eREQ_8 = 3, // REQ_8
    eREQ_16 = 4, // REQ_16
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    uint32_t BURST_LEN_8 : 1;
    eOUTSTANDING_REQS OUTSTANDING_REQS : 3;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL2_SET() = delete;
  inline void Reset() volatile { this->value = 0x00200000; }
  static inline volatile LCDIF_CTRL2_SET &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL2_SET*>(0x40804024); }
};

// LCDIF General Control2 Register
//
union LCDIF_CTRL2_CLR {
  
  enum class eEVEN_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eODD_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eOUTSTANDING_REQS : uint32_t {
    eREQ_1 = 0, // REQ_1
    eREQ_2 = 1, // REQ_2
    eREQ_4 = 2, // REQ_4
    eREQ_8 = 3, // REQ_8
    eREQ_16 = 4, // REQ_16
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    uint32_t BURST_LEN_8 : 1;
    eOUTSTANDING_REQS OUTSTANDING_REQS : 3;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL2_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00200000; }
  static inline volatile LCDIF_CTRL2_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL2_CLR*>(0x40804028); }
};

// LCDIF General Control2 Register
//
union LCDIF_CTRL2_TOG {
  
  enum class eEVEN_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eODD_LINE_PATTERN : uint32_t {
    eRGB = 0, // RGB
    eRBG = 1, // RBG
    eGBR = 2, // GBR
    eGRB = 3, // GRB
    eBRG = 4, // BRG
    eBGR = 5, // BGR
  };
  
  enum class eOUTSTANDING_REQS : uint32_t {
    eREQ_1 = 0, // REQ_1
    eREQ_2 = 1, // REQ_2
    eREQ_4 = 2, // REQ_4
    eREQ_8 = 3, // REQ_8
    eREQ_16 = 4, // REQ_16
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    uint32_t BURST_LEN_8 : 1;
    eOUTSTANDING_REQS OUTSTANDING_REQS : 3;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL2_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00200000; }
  static inline volatile LCDIF_CTRL2_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL2_TOG*>(0x4080402C); }
};

// LCDIF Horizontal and Vertical Valid Data Count Register
//
union LCDIF_TRANSFER_COUNT {
  
  // Bit field definition.
  struct {
    uint32_t H_COUNT : 16;
    uint32_t V_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_TRANSFER_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile LCDIF_TRANSFER_COUNT &Instance() { return *reinterpret_cast<volatile LCDIF_TRANSFER_COUNT*>(0x40804030); }
};

// LCD Interface Current Buffer Address Register
//
union LCDIF_CUR_BUF {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CUR_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_CUR_BUF &Instance() { return *reinterpret_cast<volatile LCDIF_CUR_BUF*>(0x40804040); }
};

// LCD Interface Next Buffer Address Register
//
union LCDIF_NEXT_BUF {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_NEXT_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_NEXT_BUF &Instance() { return *reinterpret_cast<volatile LCDIF_NEXT_BUF*>(0x40804050); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register0
//
union LCDIF_VDCTRL0 {
  
  enum class eVSYNC_OEB : uint32_t {
    eVSYNC_OUTPUT = 0, // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_INPUT = 1, // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
  };
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_PULSE_WIDTH : 18;
    uint32_t HALF_LINE_MODE : 1;
    uint32_t HALF_LINE : 1;
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    uint32_t ENABLE_POL : 1;
    uint32_t DOTCLK_POL : 1;
    uint32_t HSYNC_POL : 1;
    uint32_t VSYNC_POL : 1;
    uint32_t ENABLE_PRESENT : 1;
    eVSYNC_OEB VSYNC_OEB : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL0 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL0*>(0x40804070); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register0
//
union LCDIF_VDCTRL0_SET {
  
  enum class eVSYNC_OEB : uint32_t {
    eVSYNC_OUTPUT = 0, // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_INPUT = 1, // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
  };
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_PULSE_WIDTH : 18;
    uint32_t HALF_LINE_MODE : 1;
    uint32_t HALF_LINE : 1;
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    uint32_t ENABLE_POL : 1;
    uint32_t DOTCLK_POL : 1;
    uint32_t HSYNC_POL : 1;
    uint32_t VSYNC_POL : 1;
    uint32_t ENABLE_PRESENT : 1;
    eVSYNC_OEB VSYNC_OEB : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL0_SET &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL0_SET*>(0x40804074); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register0
//
union LCDIF_VDCTRL0_CLR {
  
  enum class eVSYNC_OEB : uint32_t {
    eVSYNC_OUTPUT = 0, // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_INPUT = 1, // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
  };
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_PULSE_WIDTH : 18;
    uint32_t HALF_LINE_MODE : 1;
    uint32_t HALF_LINE : 1;
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    uint32_t ENABLE_POL : 1;
    uint32_t DOTCLK_POL : 1;
    uint32_t HSYNC_POL : 1;
    uint32_t VSYNC_POL : 1;
    uint32_t ENABLE_PRESENT : 1;
    eVSYNC_OEB VSYNC_OEB : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL0_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL0_CLR*>(0x40804078); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register0
//
union LCDIF_VDCTRL0_TOG {
  
  enum class eVSYNC_OEB : uint32_t {
    eVSYNC_OUTPUT = 0, // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_INPUT = 1, // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
  };
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_PULSE_WIDTH : 18;
    uint32_t HALF_LINE_MODE : 1;
    uint32_t HALF_LINE : 1;
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    uint32_t ENABLE_POL : 1;
    uint32_t DOTCLK_POL : 1;
    uint32_t HSYNC_POL : 1;
    uint32_t VSYNC_POL : 1;
    uint32_t ENABLE_PRESENT : 1;
    eVSYNC_OEB VSYNC_OEB : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL0_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL0_TOG*>(0x4080407C); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register1
//
union LCDIF_VDCTRL1 {
  
  // Bit field definition.
  struct {
    uint32_t VSYNC_PERIOD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL1 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL1*>(0x40804080); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register2
//
union LCDIF_VDCTRL2 {
  
  // Bit field definition.
  struct {
    uint32_t HSYNC_PERIOD : 18;
    uint32_t HSYNC_PULSE_WIDTH : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL2 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL2*>(0x40804090); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register3
//
union LCDIF_VDCTRL3 {
  
  // Bit field definition.
  struct {
    uint32_t VERTICAL_WAIT_CNT : 16;
    uint32_t HORIZONTAL_WAIT_CNT : 12;
    uint32_t VSYNC_ONLY : 1;
    uint32_t MUX_SYNC_SIGNALS : 1;
    uint32_t _reserved_0 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL3 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL3*>(0x408040A0); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register4
//
union LCDIF_VDCTRL4 {
  
  // Bit field definition.
  struct {
    uint32_t DOTCLK_H_VALID_DATA_CNT : 18;
    uint32_t SYNC_SIGNALS_ON : 1;
    uint32_t _reserved_0 : 10;
    uint32_t DOTCLK_DLY_SEL : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL4 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL4*>(0x408040B0); }
};

// Bus Master Error Status Register
//
union LCDIF_BM_ERROR_STAT {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_BM_ERROR_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_BM_ERROR_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_BM_ERROR_STAT*>(0x40804190); }
};

// CRC Status Register
//
union LCDIF_CRC_STAT {
  
  // Bit field definition.
  struct {
    uint32_t CRC_VALUE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CRC_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_CRC_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_CRC_STAT*>(0x408041A0); }
};

// LCD Interface Status Register
//
union LCDIF_STAT {
  
  // Bit field definition.
  struct {
    uint32_t LFIFO_COUNT : 9;
    uint32_t _reserved_0 : 17;
    uint32_t TXFIFO_EMPTY : 1;
    uint32_t TXFIFO_FULL : 1;
    uint32_t LFIFO_EMPTY : 1;
    uint32_t LFIFO_FULL : 1;
    uint32_t DMA_REQ : 1;
    uint32_t PRESENT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_STAT() = delete;
  inline void Reset() volatile { this->value = 0x95000000; }
  static inline volatile LCDIF_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_STAT*>(0x408041B0); }
};

// LCDIF Threshold Register
//
union LCDIF_THRES {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    uint32_t FASTCLOCK : 9;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_THRES() = delete;
  inline void Reset() volatile { this->value = 0x0100000F; }
  static inline volatile LCDIF_THRES &Instance() { return *reinterpret_cast<volatile LCDIF_THRES*>(0x40804200); }
};

// LCDIF Pigeon Mode Control0 Register
//
union LCDIF_PIGEONCTRL0 {
  
  // Bit field definition.
  struct {
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t LD_PERIOD : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL0*>(0x40804380); }
};

// LCDIF Pigeon Mode Control0 Register
//
union LCDIF_PIGEONCTRL0_SET {
  
  // Bit field definition.
  struct {
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t LD_PERIOD : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL0_SET &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL0_SET*>(0x40804384); }
};

// LCDIF Pigeon Mode Control0 Register
//
union LCDIF_PIGEONCTRL0_CLR {
  
  // Bit field definition.
  struct {
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t LD_PERIOD : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL0_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL0_CLR*>(0x40804388); }
};

// LCDIF Pigeon Mode Control0 Register
//
union LCDIF_PIGEONCTRL0_TOG {
  
  // Bit field definition.
  struct {
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t LD_PERIOD : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL0_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL0_TOG*>(0x4080438C); }
};

// LCDIF Pigeon Mode Control1 Register
//
union LCDIF_PIGEONCTRL1 {
  
  // Bit field definition.
  struct {
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t FRAME_CNT_CYCLES : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL1*>(0x40804390); }
};

// LCDIF Pigeon Mode Control1 Register
//
union LCDIF_PIGEONCTRL1_SET {
  
  // Bit field definition.
  struct {
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t FRAME_CNT_CYCLES : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL1_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL1_SET &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL1_SET*>(0x40804394); }
};

// LCDIF Pigeon Mode Control1 Register
//
union LCDIF_PIGEONCTRL1_CLR {
  
  // Bit field definition.
  struct {
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t FRAME_CNT_CYCLES : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL1_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL1_CLR*>(0x40804398); }
};

// LCDIF Pigeon Mode Control1 Register
//
union LCDIF_PIGEONCTRL1_TOG {
  
  // Bit field definition.
  struct {
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    uint32_t FRAME_CNT_CYCLES : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL1_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL1_TOG*>(0x4080439C); }
};

// LCDIF Pigeon Mode Control2 Register
//
union LCDIF_PIGEONCTRL2 {
  
  // Bit field definition.
  struct {
    uint32_t PIGEON_DATA_EN : 1;
    uint32_t PIGEON_CLK_GATE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL2*>(0x408043A0); }
};

// LCDIF Pigeon Mode Control2 Register
//
union LCDIF_PIGEONCTRL2_SET {
  
  // Bit field definition.
  struct {
    uint32_t PIGEON_DATA_EN : 1;
    uint32_t PIGEON_CLK_GATE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL2_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL2_SET &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL2_SET*>(0x408043A4); }
};

// LCDIF Pigeon Mode Control2 Register
//
union LCDIF_PIGEONCTRL2_CLR {
  
  // Bit field definition.
  struct {
    uint32_t PIGEON_DATA_EN : 1;
    uint32_t PIGEON_CLK_GATE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL2_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL2_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL2_CLR*>(0x408043A8); }
};

// LCDIF Pigeon Mode Control2 Register
//
union LCDIF_PIGEONCTRL2_TOG {
  
  // Bit field definition.
  struct {
    uint32_t PIGEON_DATA_EN : 1;
    uint32_t PIGEON_CLK_GATE : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEONCTRL2_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEONCTRL2_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEONCTRL2_TOG*>(0x408043AC); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_0_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_0_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_0_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_0_0*>(0x40804800); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_0_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_0_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_0_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_0_1*>(0x40804810); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_0_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_0_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_0_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_0_2*>(0x40804820); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_1_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_1_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_1_0*>(0x40804840); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_1_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_1_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_1_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_1_1*>(0x40804850); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_1_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_1_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_1_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_1_2*>(0x40804860); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_2_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_2_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_2_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_2_0*>(0x40804880); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_2_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_2_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_2_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_2_1*>(0x40804890); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_2_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_2_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_2_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_2_2*>(0x408048A0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_3_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_3_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_3_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_3_0*>(0x408048C0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_3_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_3_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_3_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_3_1*>(0x408048D0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_3_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_3_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_3_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_3_2*>(0x408048E0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_4_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_4_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_4_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_4_0*>(0x40804900); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_4_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_4_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_4_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_4_1*>(0x40804910); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_4_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_4_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_4_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_4_2*>(0x40804920); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_5_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_5_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_5_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_5_0*>(0x40804940); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_5_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_5_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_5_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_5_1*>(0x40804950); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_5_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_5_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_5_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_5_2*>(0x40804960); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_6_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_6_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_6_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_6_0*>(0x40804980); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_6_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_6_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_6_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_6_1*>(0x40804990); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_6_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_6_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_6_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_6_2*>(0x408049A0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_7_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_7_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_7_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_7_0*>(0x408049C0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_7_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_7_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_7_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_7_1*>(0x408049D0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_7_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_7_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_7_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_7_2*>(0x408049E0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_8_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_8_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_8_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_8_0*>(0x40804A00); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_8_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_8_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_8_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_8_1*>(0x40804A10); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_8_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_8_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_8_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_8_2*>(0x40804A20); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_9_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_9_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_9_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_9_0*>(0x40804A40); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_9_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_9_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_9_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_9_1*>(0x40804A50); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_9_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_9_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_9_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_9_2*>(0x40804A60); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_10_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_10_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_10_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_10_0*>(0x40804A80); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_10_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_10_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_10_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_10_1*>(0x40804A90); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_10_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_10_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_10_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_10_2*>(0x40804AA0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_11_0 {
  
  enum class ePOL : uint32_t {
    eACTIVE_HIGH = 0, // Normal Signal (Active high)
    eACTIVE_LOW = 1, // Inverted signal (Active low)
  };
  
  enum class eINC_SEL : uint32_t {
    ePCLK = 0, // pclk
    eLINE = 1, // Line start pulse
    eFRAME = 2, // Frame start pulse
    eSIG_ANOTHER = 3, // Use another signal as tick event
  };
  
  enum class eMASK_CNT_SEL : uint32_t {
    eHSTATE_CNT = 0, // pclk counter within one hscan state
    eHSTATE_CYCLE = 1, // pclk cycle within one hscan state
    eVSTATE_CNT = 2, // line counter within one vscan state
    eVSTATE_CYCLE = 3, // line cycle within one vscan state
    eFRAME_CNT = 4, // frame counter
    eFRAME_CYCLE = 5, // frame cycle
    eHCNT = 6, // horizontal counter (pclk counter within one line )
    eVCNT = 7, // vertical counter (line counter within one frame)
  };
  
  enum class eSTATE_MASK : uint32_t {
    eFS = 1, // FRAME SYNC
    eFB = 2, // FRAME BEGIN
    eFD = 4, // FRAME DATA
    eFE = 8, // FRAME END
    eLS = 16, // LINE SYNC
    eLB = 32, // LINE BEGIN
    eLD = 64, // LINE DATA
    eLE = 128, // LINE END
  };
  
  // Bit field definition.
  struct {
    uint32_t EN : 1;
    ePOL POL : 1;
    eINC_SEL INC_SEL : 2;
    uint32_t OFFSET : 4;
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    uint32_t MASK_CNT : 12;
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_11_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_11_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_11_0*>(0x40804AC0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_11_1 {
  
  enum class eSET_CNT : uint32_t {
    eSTART_ACTIVE = 0, // Start as active
  };
  
  enum class eCLR_CNT : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSET_CNT SET_CNT : 16;
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_11_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_11_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_11_1*>(0x40804AD0); }
};

// Panel Interface Signal Generator Register
//
union LCDIF_PIGEON_11_2 {
  
  enum class eSIG_LOGIC : uint32_t {
    eDIS = 0, // No logic operation
    eAND = 1, // sigout = sig_another AND this_sig
    eOR = 2, // sigout = sig_another OR this_sig
    eMASK = 3, // mask = sig_another AND other_masks
  };
  
  enum class eSIG_ANOTHER : uint32_t {
    eCLEAR_USING_MASK = 0, // Keep active until mask off
  };
  
  // Bit field definition.
  struct {
    eSIG_LOGIC SIG_LOGIC : 4;
    eSIG_ANOTHER SIG_ANOTHER : 5;
    uint32_t _reserved_0 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_11_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_11_2 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_11_2*>(0x40804AE0); }
};

// Look Up Table Control Register
//
union LCDIF_LUT_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t LUT_BYPASS : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile LCDIF_LUT_CTRL &Instance() { return *reinterpret_cast<volatile LCDIF_LUT_CTRL*>(0x40804B00); }
};

// Lookup Table 0 Index Register
//
union LCDIF_LUT0_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT0_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT0_ADDR &Instance() { return *reinterpret_cast<volatile LCDIF_LUT0_ADDR*>(0x40804B10); }
};

// Lookup Table 0 Data Register
//
union LCDIF_LUT0_DATA {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT0_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT0_DATA &Instance() { return *reinterpret_cast<volatile LCDIF_LUT0_DATA*>(0x40804B20); }
};

// Lookup Table 1 Index Register
//
union LCDIF_LUT1_ADDR {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT1_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT1_ADDR &Instance() { return *reinterpret_cast<volatile LCDIF_LUT1_ADDR*>(0x40804B30); }
};

// Lookup Table 1 Data Register
//
union LCDIF_LUT1_DATA {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT1_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT1_DATA &Instance() { return *reinterpret_cast<volatile LCDIF_LUT1_DATA*>(0x40804B40); }
};


} // namespace nLCDIF