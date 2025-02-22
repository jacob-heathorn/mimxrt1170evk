#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LCDIF Register Reference Index
namespace nLCDIF {


// LCDIF General Control Register
union LCDIF_CTRL {
  
  // Used only when WORD_LENGTH = 3, i
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eALL_24_BITS_VALID = 0,
    // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
    eDROP_UPPER_2_BITS_PER_BYTE = 1,
  };
  
  // Used only when WORD_LENGTH = 2, i.e. 18-bit.
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eLOWER_18_BITS_VALID = 0,
    // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1,
  };
  
  // Input data format.
  enum class eWORD_LENGTH : uint32_t {
    // Input data is 16 bits per pixel.
    e16_BIT = 0,
    // Input data is 8 bits wide.
    e8_BIT = 1,
    // Input data is 18 bits per pixel.
    e18_BIT = 2,
    // Input data is 24 bits per pixel.
    e24_BIT = 3,
  };
  
  // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    // 16-bit data bus mode.
    e16_BIT = 0,
    // 8-bit data bus mode.
    e8_BIT = 1,
    // 18-bit data bus mode.
    e18_BIT = 2,
    // 24-bit data bus mode.
    e24_BIT = 3,
  };
  
  // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // This field specifies how to swap the bytes fetched by the bus master interface
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // Use this bit to determine the direction of shift of transmit data.
  enum class eDATA_SHIFT_DIR : uint32_t {
    // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_LEFT = 0,
    // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    uint32_t RUN : 1;
    // read-write - Used only when WORD_LENGTH = 3, i
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    // read-write - Used only when WORD_LENGTH = 2, i.e. 18-bit.
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    // read-write - When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Set this bit to make the LCDIF act as a bus master
    uint32_t MASTER : 1;
    // read-write - If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Input data format.
    eWORD_LENGTH WORD_LENGTH : 2;
    // read-write - LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    // read-write - This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    // read-write - This field specifies how to swap the bytes fetched by the bus master interface
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    // read-write - Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - The data to be transmitted is shifted left or right by this number of bits.
    uint32_t SHIFT_NUM_BITS : 5;
    // read-write - Use this bit to determine the direction of shift of transmit data.
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    // read-write - This bit must be set to zero for normal operation
    uint32_t CLKGATE : 1;
    // read-write - This bit must be set to zero to enable normal operation of the LCDIF
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL*>(0x40804000); }
};

// LCDIF General Control Register
union LCDIF_CTRL_SET {
  
  // Used only when WORD_LENGTH = 3, i
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eALL_24_BITS_VALID = 0,
    // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
    eDROP_UPPER_2_BITS_PER_BYTE = 1,
  };
  
  // Used only when WORD_LENGTH = 2, i.e. 18-bit.
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eLOWER_18_BITS_VALID = 0,
    // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1,
  };
  
  // Input data format.
  enum class eWORD_LENGTH : uint32_t {
    // Input data is 16 bits per pixel.
    e16_BIT = 0,
    // Input data is 8 bits wide.
    e8_BIT = 1,
    // Input data is 18 bits per pixel.
    e18_BIT = 2,
    // Input data is 24 bits per pixel.
    e24_BIT = 3,
  };
  
  // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    // 16-bit data bus mode.
    e16_BIT = 0,
    // 8-bit data bus mode.
    e8_BIT = 1,
    // 18-bit data bus mode.
    e18_BIT = 2,
    // 24-bit data bus mode.
    e24_BIT = 3,
  };
  
  // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // This field specifies how to swap the bytes fetched by the bus master interface
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // Use this bit to determine the direction of shift of transmit data.
  enum class eDATA_SHIFT_DIR : uint32_t {
    // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_LEFT = 0,
    // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    uint32_t RUN : 1;
    // read-write - Used only when WORD_LENGTH = 3, i
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    // read-write - Used only when WORD_LENGTH = 2, i.e. 18-bit.
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    // read-write - When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Set this bit to make the LCDIF act as a bus master
    uint32_t MASTER : 1;
    // read-write - If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Input data format.
    eWORD_LENGTH WORD_LENGTH : 2;
    // read-write - LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    // read-write - This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    // read-write - This field specifies how to swap the bytes fetched by the bus master interface
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    // read-write - Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - The data to be transmitted is shifted left or right by this number of bits.
    uint32_t SHIFT_NUM_BITS : 5;
    // read-write - Use this bit to determine the direction of shift of transmit data.
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    // read-write - This bit must be set to zero for normal operation
    uint32_t CLKGATE : 1;
    // read-write - This bit must be set to zero to enable normal operation of the LCDIF
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_SET &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_SET*>(0x40804004); }
};

// LCDIF General Control Register
union LCDIF_CTRL_CLR {
  
  // Used only when WORD_LENGTH = 3, i
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eALL_24_BITS_VALID = 0,
    // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
    eDROP_UPPER_2_BITS_PER_BYTE = 1,
  };
  
  // Used only when WORD_LENGTH = 2, i.e. 18-bit.
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eLOWER_18_BITS_VALID = 0,
    // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1,
  };
  
  // Input data format.
  enum class eWORD_LENGTH : uint32_t {
    // Input data is 16 bits per pixel.
    e16_BIT = 0,
    // Input data is 8 bits wide.
    e8_BIT = 1,
    // Input data is 18 bits per pixel.
    e18_BIT = 2,
    // Input data is 24 bits per pixel.
    e24_BIT = 3,
  };
  
  // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    // 16-bit data bus mode.
    e16_BIT = 0,
    // 8-bit data bus mode.
    e8_BIT = 1,
    // 18-bit data bus mode.
    e18_BIT = 2,
    // 24-bit data bus mode.
    e24_BIT = 3,
  };
  
  // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // This field specifies how to swap the bytes fetched by the bus master interface
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // Use this bit to determine the direction of shift of transmit data.
  enum class eDATA_SHIFT_DIR : uint32_t {
    // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_LEFT = 0,
    // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    uint32_t RUN : 1;
    // read-write - Used only when WORD_LENGTH = 3, i
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    // read-write - Used only when WORD_LENGTH = 2, i.e. 18-bit.
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    // read-write - When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Set this bit to make the LCDIF act as a bus master
    uint32_t MASTER : 1;
    // read-write - If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Input data format.
    eWORD_LENGTH WORD_LENGTH : 2;
    // read-write - LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    // read-write - This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    // read-write - This field specifies how to swap the bytes fetched by the bus master interface
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    // read-write - Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - The data to be transmitted is shifted left or right by this number of bits.
    uint32_t SHIFT_NUM_BITS : 5;
    // read-write - Use this bit to determine the direction of shift of transmit data.
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    // read-write - This bit must be set to zero for normal operation
    uint32_t CLKGATE : 1;
    // read-write - This bit must be set to zero to enable normal operation of the LCDIF
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_CLR*>(0x40804008); }
};

// LCDIF General Control Register
union LCDIF_CTRL_TOG {
  
  // Used only when WORD_LENGTH = 3, i
  enum class eDATA_FORMAT_24_BIT : uint32_t {
    // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
    eALL_24_BITS_VALID = 0,
    // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
    eDROP_UPPER_2_BITS_PER_BYTE = 1,
  };
  
  // Used only when WORD_LENGTH = 2, i.e. 18-bit.
  enum class eDATA_FORMAT_18_BIT : uint32_t {
    // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
    eLOWER_18_BITS_VALID = 0,
    // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
    eUPPER_18_BITS_VALID = 1,
  };
  
  // Input data format.
  enum class eWORD_LENGTH : uint32_t {
    // Input data is 16 bits per pixel.
    e16_BIT = 0,
    // Input data is 8 bits wide.
    e8_BIT = 1,
    // Input data is 18 bits per pixel.
    e18_BIT = 2,
    // Input data is 24 bits per pixel.
    e24_BIT = 3,
  };
  
  // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
  enum class eLCD_DATABUS_WIDTH : uint32_t {
    // 16-bit data bus mode.
    e16_BIT = 0,
    // 8-bit data bus mode.
    e8_BIT = 1,
    // 18-bit data bus mode.
    e18_BIT = 2,
    // 24-bit data bus mode.
    e24_BIT = 3,
  };
  
  // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
  enum class eCSC_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // This field specifies how to swap the bytes fetched by the bus master interface
  enum class eINPUT_DATA_SWIZZLE : uint32_t {
    // No byte swapping.(Little endian)
    eNO_SWAP = 0,
    // Big Endian swap (swap bytes 0,3 and 1,2).
    eBIG_ENDIAN_SWAP = 1,
    // Swap half-words.
    eHWD_SWAP = 2,
    // Swap bytes within each half-word.
    eHWD_BYTE_SWAP = 3,
  };
  
  // Use this bit to determine the direction of shift of transmit data.
  enum class eDATA_SHIFT_DIR : uint32_t {
    // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_LEFT = 0,
    // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
    eTXDATA_SHIFT_RIGHT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    uint32_t RUN : 1;
    // read-write - Used only when WORD_LENGTH = 3, i
    eDATA_FORMAT_24_BIT DATA_FORMAT_24_BIT : 1;
    // read-write - Used only when WORD_LENGTH = 2, i.e. 18-bit.
    eDATA_FORMAT_18_BIT DATA_FORMAT_18_BIT : 1;
    // read-write - When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    uint32_t DATA_FORMAT_16_BIT : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Set this bit to make the LCDIF act as a bus master
    uint32_t MASTER : 1;
    // read-write - If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    uint32_t ENABLE_PXP_HANDSHAKE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Input data format.
    eWORD_LENGTH WORD_LENGTH : 2;
    // read-write - LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    eLCD_DATABUS_WIDTH LCD_DATABUS_WIDTH : 2;
    // read-write - This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    eCSC_DATA_SWIZZLE CSC_DATA_SWIZZLE : 2;
    // read-write - This field specifies how to swap the bytes fetched by the bus master interface
    eINPUT_DATA_SWIZZLE INPUT_DATA_SWIZZLE : 2;
    uint32_t _reserved_2 : 1;
    // read-write - Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    uint32_t DOTCLK_MODE : 1;
    uint32_t _reserved_3 : 1;
    // read-write - When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    uint32_t BYPASS_COUNT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - The data to be transmitted is shifted left or right by this number of bits.
    uint32_t SHIFT_NUM_BITS : 5;
    // read-write - Use this bit to determine the direction of shift of transmit data.
    eDATA_SHIFT_DIR DATA_SHIFT_DIR : 1;
    uint32_t _reserved_5 : 3;
    // read-write - This bit must be set to zero for normal operation
    uint32_t CLKGATE : 1;
    // read-write - This bit must be set to zero to enable normal operation of the LCDIF
    uint32_t SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile LCDIF_CTRL_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL_TOG*>(0x4080400C); }
};

// LCDIF General Control1 Register
union LCDIF_CTRL1 {
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eUNDERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eOVERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eBM_ERROR_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    // read-write - This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    // read-write - This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    // read-write - This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    uint32_t UNDERFLOW_IRQ_EN : 1;
    // read-write - This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    uint32_t OVERFLOW_IRQ_EN : 1;
    // read-write - This bitfield is used to show which data bytes in a 32-bit word are valid
    uint32_t BYTE_PACKING_FORMAT : 4;
    // read-write - If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    // read-write - Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    uint32_t FIFO_CLEAR : 1;
    // read-write - The default is to grab the odd lines first and then the even lines
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    // read-write - Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    uint32_t INTERLACE_FIELDS : 1;
    // read-write - Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    // read-write - This bit is set to enable bus master error interrupt in the LCDIF master mode.
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    // read-write - This bit is CS0/CS1 valid select signals
    uint32_t CS_OUT_SELECT : 1;
    // read-write - Command Mode MIPI image data select bit
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1 &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1*>(0x40804010); }
};

// LCDIF General Control1 Register
union LCDIF_CTRL1_SET {
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eUNDERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eOVERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eBM_ERROR_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    // read-write - This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    // read-write - This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    // read-write - This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    uint32_t UNDERFLOW_IRQ_EN : 1;
    // read-write - This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    uint32_t OVERFLOW_IRQ_EN : 1;
    // read-write - This bitfield is used to show which data bytes in a 32-bit word are valid
    uint32_t BYTE_PACKING_FORMAT : 4;
    // read-write - If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    // read-write - Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    uint32_t FIFO_CLEAR : 1;
    // read-write - The default is to grab the odd lines first and then the even lines
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    // read-write - Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    uint32_t INTERLACE_FIELDS : 1;
    // read-write - Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    // read-write - This bit is set to enable bus master error interrupt in the LCDIF master mode.
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    // read-write - This bit is CS0/CS1 valid select signals
    uint32_t CS_OUT_SELECT : 1;
    // read-write - Command Mode MIPI image data select bit
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_SET() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_SET &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_SET*>(0x40804014); }
};

// LCDIF General Control1 Register
union LCDIF_CTRL1_CLR {
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eUNDERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eOVERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eBM_ERROR_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    // read-write - This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    // read-write - This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    // read-write - This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    uint32_t UNDERFLOW_IRQ_EN : 1;
    // read-write - This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    uint32_t OVERFLOW_IRQ_EN : 1;
    // read-write - This bitfield is used to show which data bytes in a 32-bit word are valid
    uint32_t BYTE_PACKING_FORMAT : 4;
    // read-write - If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    // read-write - Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    uint32_t FIFO_CLEAR : 1;
    // read-write - The default is to grab the odd lines first and then the even lines
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    // read-write - Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    uint32_t INTERLACE_FIELDS : 1;
    // read-write - Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    // read-write - This bit is set to enable bus master error interrupt in the LCDIF master mode.
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    // read-write - This bit is CS0/CS1 valid select signals
    uint32_t CS_OUT_SELECT : 1;
    // read-write - Command Mode MIPI image data select bit
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_CLR &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_CLR*>(0x40804018); }
};

// LCDIF General Control1 Register
union LCDIF_CTRL1_TOG {
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eVSYNC_EDGE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eCUR_FRAME_DONE_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eUNDERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eOVERFLOW_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // This bit is set to indicate that an interrupt is requested by the LCDIF block
  enum class eBM_ERROR_IRQ : uint32_t {
    // No Interrupt Request Pending.
    eNO_REQUEST = 0,
    // Interrupt Request Pending.
    eREQUEST = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eVSYNC_EDGE_IRQ VSYNC_EDGE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eCUR_FRAME_DONE_IRQ CUR_FRAME_DONE_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eUNDERFLOW_IRQ UNDERFLOW_IRQ : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eOVERFLOW_IRQ OVERFLOW_IRQ : 1;
    // read-write - This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    uint32_t VSYNC_EDGE_IRQ_EN : 1;
    // read-write - This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    uint32_t CUR_FRAME_DONE_IRQ_EN : 1;
    // read-write - This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    uint32_t UNDERFLOW_IRQ_EN : 1;
    // read-write - This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    uint32_t OVERFLOW_IRQ_EN : 1;
    // read-write - This bitfield is used to show which data bytes in a 32-bit word are valid
    uint32_t BYTE_PACKING_FORMAT : 4;
    // read-write - If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    uint32_t IRQ_ON_ALTERNATE_FIELDS : 1;
    // read-write - Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    uint32_t FIFO_CLEAR : 1;
    // read-write - The default is to grab the odd lines first and then the even lines
    uint32_t START_INTERLACE_FROM_SECOND_FIELD : 1;
    // read-write - Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    uint32_t INTERLACE_FIELDS : 1;
    // read-write - Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    uint32_t RECOVER_ON_UNDERFLOW : 1;
    // read-write - This bit is set to indicate that an interrupt is requested by the LCDIF block
    eBM_ERROR_IRQ BM_ERROR_IRQ : 1;
    // read-write - This bit is set to enable bus master error interrupt in the LCDIF master mode.
    uint32_t BM_ERROR_IRQ_EN : 1;
    uint32_t _reserved_1 : 3;
    // read-write - This bit is CS0/CS1 valid select signals
    uint32_t CS_OUT_SELECT : 1;
    // read-write - Command Mode MIPI image data select bit
    uint32_t IMAGE_DATA_SELECT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CTRL1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x000F0000; }
  static inline volatile LCDIF_CTRL1_TOG &Instance() { return *reinterpret_cast<volatile LCDIF_CTRL1_TOG*>(0x4080401C); }
};

// LCDIF General Control2 Register
union LCDIF_CTRL2 {
  
  // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
  enum class eEVEN_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
  enum class eODD_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
  enum class eOUTSTANDING_REQS : uint32_t {
    // REQ_1
    eREQ_1 = 0,
    // REQ_2
    eREQ_2 = 1,
    // REQ_4
    eREQ_4 = 2,
    // REQ_8
    eREQ_8 = 3,
    // REQ_16
    eREQ_16 = 4,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    // read-write - This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    uint32_t BURST_LEN_8 : 1;
    // read-write - This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
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
union LCDIF_CTRL2_SET {
  
  // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
  enum class eEVEN_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
  enum class eODD_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
  enum class eOUTSTANDING_REQS : uint32_t {
    // REQ_1
    eREQ_1 = 0,
    // REQ_2
    eREQ_2 = 1,
    // REQ_4
    eREQ_4 = 2,
    // REQ_8
    eREQ_8 = 3,
    // REQ_16
    eREQ_16 = 4,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    // read-write - This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    uint32_t BURST_LEN_8 : 1;
    // read-write - This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
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
union LCDIF_CTRL2_CLR {
  
  // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
  enum class eEVEN_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
  enum class eODD_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
  enum class eOUTSTANDING_REQS : uint32_t {
    // REQ_1
    eREQ_1 = 0,
    // REQ_2
    eREQ_2 = 1,
    // REQ_4
    eREQ_4 = 2,
    // REQ_8
    eREQ_8 = 3,
    // REQ_16
    eREQ_16 = 4,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    // read-write - This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    uint32_t BURST_LEN_8 : 1;
    // read-write - This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
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
union LCDIF_CTRL2_TOG {
  
  // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
  enum class eEVEN_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
  enum class eODD_LINE_PATTERN : uint32_t {
    // RGB
    eRGB = 0,
    // RBG
    eRBG = 1,
    // GBR
    eGBR = 2,
    // GRB
    eGRB = 3,
    // BRG
    eBRG = 4,
    // BGR
    eBGR = 5,
  };
  
  // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
  enum class eOUTSTANDING_REQS : uint32_t {
    // REQ_1
    eREQ_1 = 0,
    // REQ_2
    eREQ_2 = 1,
    // REQ_4
    eREQ_4 = 2,
    // REQ_8
    eREQ_8 = 3,
    // REQ_16
    eREQ_16 = 4,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 12;
    // read-write - This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    eEVEN_LINE_PATTERN EVEN_LINE_PATTERN : 3;
    uint32_t _reserved_1 : 1;
    // read-write - This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    eODD_LINE_PATTERN ODD_LINE_PATTERN : 3;
    uint32_t _reserved_2 : 1;
    // read-write - By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    uint32_t BURST_LEN_8 : 1;
    // read-write - This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
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
union LCDIF_TRANSFER_COUNT {
  
  // Bit field definition.
  struct {
    // read-write - Total valid data (pixels) in each horizontal line
    uint32_t H_COUNT : 16;
    // read-write - Number of horizontal lines per frame which contain valid data
    uint32_t V_COUNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_TRANSFER_COUNT() = delete;
  inline void Reset() volatile { this->value = 0x00010000; }
  static inline volatile LCDIF_TRANSFER_COUNT &Instance() { return *reinterpret_cast<volatile LCDIF_TRANSFER_COUNT*>(0x40804030); }
};

// LCD Interface Current Buffer Address Register
union LCDIF_CUR_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Address of the current frame being transmitted by LCDIF.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CUR_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_CUR_BUF &Instance() { return *reinterpret_cast<volatile LCDIF_CUR_BUF*>(0x40804040); }
};

// LCD Interface Next Buffer Address Register
union LCDIF_NEXT_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Address of the next frame that will be transmitted by LCDIF.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_NEXT_BUF() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_NEXT_BUF &Instance() { return *reinterpret_cast<volatile LCDIF_NEXT_BUF*>(0x40804050); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register0
union LCDIF_VDCTRL0 {
  
  // 0 means the VSYNC signal is an output, 1 means it is an input
  enum class eVSYNC_OEB : uint32_t {
    // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_OUTPUT = 0,
    // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
    eVSYNC_INPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Number of units for which VSYNC signal is active
    uint32_t VSYNC_PULSE_WIDTH : 18;
    // read-write - When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    uint32_t HALF_LINE_MODE : 1;
    // read-write - Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    uint32_t HALF_LINE : 1;
    // read-write - Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    // read-write - Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Default 0 active low during valid data transfer on each horizontal line.
    uint32_t ENABLE_POL : 1;
    // read-write - Default is data launched at negative edge of DOTCLK and captured at positive edge
    uint32_t DOTCLK_POL : 1;
    // read-write - Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    uint32_t HSYNC_POL : 1;
    // read-write - Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    uint32_t VSYNC_POL : 1;
    // read-write - Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    uint32_t ENABLE_PRESENT : 1;
    // read-write - 0 means the VSYNC signal is an output, 1 means it is an input
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
union LCDIF_VDCTRL0_SET {
  
  // 0 means the VSYNC signal is an output, 1 means it is an input
  enum class eVSYNC_OEB : uint32_t {
    // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_OUTPUT = 0,
    // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
    eVSYNC_INPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Number of units for which VSYNC signal is active
    uint32_t VSYNC_PULSE_WIDTH : 18;
    // read-write - When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    uint32_t HALF_LINE_MODE : 1;
    // read-write - Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    uint32_t HALF_LINE : 1;
    // read-write - Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    // read-write - Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Default 0 active low during valid data transfer on each horizontal line.
    uint32_t ENABLE_POL : 1;
    // read-write - Default is data launched at negative edge of DOTCLK and captured at positive edge
    uint32_t DOTCLK_POL : 1;
    // read-write - Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    uint32_t HSYNC_POL : 1;
    // read-write - Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    uint32_t VSYNC_POL : 1;
    // read-write - Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    uint32_t ENABLE_PRESENT : 1;
    // read-write - 0 means the VSYNC signal is an output, 1 means it is an input
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
union LCDIF_VDCTRL0_CLR {
  
  // 0 means the VSYNC signal is an output, 1 means it is an input
  enum class eVSYNC_OEB : uint32_t {
    // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_OUTPUT = 0,
    // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
    eVSYNC_INPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Number of units for which VSYNC signal is active
    uint32_t VSYNC_PULSE_WIDTH : 18;
    // read-write - When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    uint32_t HALF_LINE_MODE : 1;
    // read-write - Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    uint32_t HALF_LINE : 1;
    // read-write - Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    // read-write - Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Default 0 active low during valid data transfer on each horizontal line.
    uint32_t ENABLE_POL : 1;
    // read-write - Default is data launched at negative edge of DOTCLK and captured at positive edge
    uint32_t DOTCLK_POL : 1;
    // read-write - Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    uint32_t HSYNC_POL : 1;
    // read-write - Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    uint32_t VSYNC_POL : 1;
    // read-write - Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    uint32_t ENABLE_PRESENT : 1;
    // read-write - 0 means the VSYNC signal is an output, 1 means it is an input
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
union LCDIF_VDCTRL0_TOG {
  
  // 0 means the VSYNC signal is an output, 1 means it is an input
  enum class eVSYNC_OEB : uint32_t {
    // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
    eVSYNC_OUTPUT = 0,
    // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
    eVSYNC_INPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Number of units for which VSYNC signal is active
    uint32_t VSYNC_PULSE_WIDTH : 18;
    // read-write - When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    uint32_t HALF_LINE_MODE : 1;
    // read-write - Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    uint32_t HALF_LINE : 1;
    // read-write - Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PULSE_WIDTH_UNIT : 1;
    // read-write - Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    uint32_t VSYNC_PERIOD_UNIT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Default 0 active low during valid data transfer on each horizontal line.
    uint32_t ENABLE_POL : 1;
    // read-write - Default is data launched at negative edge of DOTCLK and captured at positive edge
    uint32_t DOTCLK_POL : 1;
    // read-write - Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    uint32_t HSYNC_POL : 1;
    // read-write - Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    uint32_t VSYNC_POL : 1;
    // read-write - Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    uint32_t ENABLE_PRESENT : 1;
    // read-write - 0 means the VSYNC signal is an output, 1 means it is an input
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
union LCDIF_VDCTRL1 {
  
  // Bit field definition.
  struct {
    // read-write - Total number of units between two positive or two negative edges of the VSYNC signal
    uint32_t VSYNC_PERIOD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL1 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL1*>(0x40804080); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register2
union LCDIF_VDCTRL2 {
  
  // Bit field definition.
  struct {
    // read-write - Total number of DISPLAY CLOCK (pix_clk) cycles between two positive or two negative edges of the HSYNC signal
    uint32_t HSYNC_PERIOD : 18;
    // read-write - Number of DISPLAY CLOCK (pix_clk) cycles for which HSYNC signal is active.
    uint32_t HSYNC_PULSE_WIDTH : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL2 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL2*>(0x40804090); }
};

// LCDIF VSYNC Mode and Dotclk Mode Control Register3
union LCDIF_VDCTRL3 {
  
  // Bit field definition.
  struct {
    // read-write - In the VSYNC interface mode, wait for this number of DISPLAY CLOCK (pix_clk) cycles from the falling VSYNC edge (or rising if VSYNC_POL is 1) before starting LCD transactions and is applicable only if WAIT_FOR_VSYNC_EDGE is set
    uint32_t VERTICAL_WAIT_CNT : 16;
    // read-write - In the DOTCLK mode, wait for this number of clocks from falling edge (or rising if HSYNC_POL is 1) of HSYNC signal to account for horizontal back porch plus the number of DOTCLKs before the moving picture information begins
    uint32_t HORIZONTAL_WAIT_CNT : 12;
    // read-write - This bit must be set to 1 in the VSYNC mode of operation, and 0 in the DOTCLK mode of operation.
    uint32_t VSYNC_ONLY : 1;
    // read-write - When this bit is set, the LCDIF block will internally mux HSYNC with LCD_D14, DOTCLK with LCD_D13 and ENABLE with LCD_D12, otherwise these signals will go out on separate pins
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
union LCDIF_VDCTRL4 {
  
  // Bit field definition.
  struct {
    // read-write - Total number of DISPLAY CLOCK (pix_clk) cycles on each horizontal line that carry valid data in DOTCLK mode
    uint32_t DOTCLK_H_VALID_DATA_CNT : 18;
    // read-write - Set this field to 1 if the LCD controller requires that the VSYNC or VSYNC/HSYNC/DOTCLK control signals should be active at least one frame before the data transfers actually start and remain active at least one frame after the data transfers end
    uint32_t SYNC_SIGNALS_ON : 1;
    uint32_t _reserved_0 : 10;
    // read-write - This bitfield selects the amount of time by which the DOTCLK signal should be delayed before coming out of the LCD_DOTCK pin
    uint32_t DOTCLK_DLY_SEL : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_VDCTRL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_VDCTRL4 &Instance() { return *reinterpret_cast<volatile LCDIF_VDCTRL4*>(0x408040B0); }
};

// Bus Master Error Status Register
union LCDIF_BM_ERROR_STAT {
  
  // Bit field definition.
  struct {
    // read-write - Virtual address at which bus master error occurred.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_BM_ERROR_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_BM_ERROR_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_BM_ERROR_STAT*>(0x40804190); }
};

// CRC Status Register
union LCDIF_CRC_STAT {
  
  // Bit field definition.
  struct {
    // read-write - Calculated CRC value.
    uint32_t CRC_VALUE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_CRC_STAT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_CRC_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_CRC_STAT*>(0x408041A0); }
};

// LCD Interface Status Register
union LCDIF_STAT {
  
  // Bit field definition.
  struct {
    // read-only - Read only view of the current count in Latency buffer (LFIFO).
    uint32_t LFIFO_COUNT : 9;
    uint32_t _reserved_0 : 17;
    // read-only - Read only view of the signals that indicates LCD TXFIFO is empty.
    uint32_t TXFIFO_EMPTY : 1;
    // read-only - Read only view of the signals that indicates LCD TXFIFO is full.
    uint32_t TXFIFO_FULL : 1;
    // read-only - Read only view of the signals that indicates LCD LFIFO is empty.
    uint32_t LFIFO_EMPTY : 1;
    // read-only - Read only view of the signals that indicates LCD LFIFO is full.
    uint32_t LFIFO_FULL : 1;
    // read-only - Reflects the current state of the DMA Request line for the LCDIF
    uint32_t DMA_REQ : 1;
    // read-only - 0: LCDIF not present on this product 1: LCDIF is present.
    uint32_t PRESENT : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_STAT() = delete;
  inline void Reset() volatile { this->value = 0x95000000; }
  static inline volatile LCDIF_STAT &Instance() { return *reinterpret_cast<volatile LCDIF_STAT*>(0x408041B0); }
};

// LCDIF Threshold Register
union LCDIF_THRES {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    // read-write - This value should be set to a value of pixels, from 0 to 511
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
union LCDIF_PIGEONCTRL0 {
  
  // Bit field definition.
  struct {
    // read-write - Period of line counter during FD phase
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Period of pclk counter during LD phase
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
union LCDIF_PIGEONCTRL0_SET {
  
  // Bit field definition.
  struct {
    // read-write - Period of line counter during FD phase
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Period of pclk counter during LD phase
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
union LCDIF_PIGEONCTRL0_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Period of line counter during FD phase
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Period of pclk counter during LD phase
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
union LCDIF_PIGEONCTRL0_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Period of line counter during FD phase
    uint32_t FD_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Period of pclk counter during LD phase
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
union LCDIF_PIGEONCTRL1 {
  
  // Bit field definition.
  struct {
    // read-write - Period of frame counter
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Max cycles of frame counter
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
union LCDIF_PIGEONCTRL1_SET {
  
  // Bit field definition.
  struct {
    // read-write - Period of frame counter
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Max cycles of frame counter
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
union LCDIF_PIGEONCTRL1_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Period of frame counter
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Max cycles of frame counter
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
union LCDIF_PIGEONCTRL1_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Period of frame counter
    uint32_t FRAME_CNT_PERIOD : 12;
    uint32_t _reserved_0 : 4;
    // read-write - Max cycles of frame counter
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
union LCDIF_PIGEONCTRL2 {
  
  // Bit field definition.
  struct {
    // read-write - Pigeon mode data enable
    uint32_t PIGEON_DATA_EN : 1;
    // read-write - Pigeon mode dot clock gate enable
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
union LCDIF_PIGEONCTRL2_SET {
  
  // Bit field definition.
  struct {
    // read-write - Pigeon mode data enable
    uint32_t PIGEON_DATA_EN : 1;
    // read-write - Pigeon mode dot clock gate enable
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
union LCDIF_PIGEONCTRL2_CLR {
  
  // Bit field definition.
  struct {
    // read-write - Pigeon mode data enable
    uint32_t PIGEON_DATA_EN : 1;
    // read-write - Pigeon mode dot clock gate enable
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
union LCDIF_PIGEONCTRL2_TOG {
  
  // Bit field definition.
  struct {
    // read-write - Pigeon mode data enable
    uint32_t PIGEON_DATA_EN : 1;
    // read-write - Pigeon mode dot clock gate enable
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
union LCDIF_PIGEON_0_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_0_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_0_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_0_0*>(0x40804800); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_0_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_0_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_0_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_0_1*>(0x40804810); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_0_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_1_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_1_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_1_0*>(0x40804840); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_1_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_1_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_1_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_1_1*>(0x40804850); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_1_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_2_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_2_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_2_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_2_0*>(0x40804880); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_2_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_2_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_2_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_2_1*>(0x40804890); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_2_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_3_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_3_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_3_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_3_0*>(0x408048C0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_3_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_3_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_3_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_3_1*>(0x408048D0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_3_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_4_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_4_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_4_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_4_0*>(0x40804900); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_4_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_4_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_4_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_4_1*>(0x40804910); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_4_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_5_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_5_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_5_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_5_0*>(0x40804940); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_5_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_5_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_5_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_5_1*>(0x40804950); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_5_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_6_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_6_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_6_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_6_0*>(0x40804980); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_6_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_6_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_6_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_6_1*>(0x40804990); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_6_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_7_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_7_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_7_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_7_0*>(0x408049C0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_7_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_7_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_7_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_7_1*>(0x408049D0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_7_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_8_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_8_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_8_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_8_0*>(0x40804A00); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_8_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_8_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_8_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_8_1*>(0x40804A10); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_8_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_9_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_9_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_9_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_9_0*>(0x40804A40); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_9_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_9_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_9_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_9_1*>(0x40804A50); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_9_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_10_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_10_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_10_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_10_0*>(0x40804A80); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_10_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_10_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_10_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_10_1*>(0x40804A90); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_10_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_PIGEON_11_0 {
  
  // Polarity of signal output
  enum class ePOL : uint32_t {
    // Normal Signal (Active high)
    eACTIVE_HIGH = 0,
    // Inverted signal (Active low)
    eACTIVE_LOW = 1,
  };
  
  // Event to incrment local counter
  enum class eINC_SEL : uint32_t {
    // pclk
    ePCLK = 0,
    // Line start pulse
    eLINE = 1,
    // Frame start pulse
    eFRAME = 2,
    // Use another signal as tick event
    eSIG_ANOTHER = 3,
  };
  
  // select global counters as mask condition, use together with MASK_CNT
  enum class eMASK_CNT_SEL : uint32_t {
    // pclk counter within one hscan state
    eHSTATE_CNT = 0,
    // pclk cycle within one hscan state
    eHSTATE_CYCLE = 1,
    // line counter within one vscan state
    eVSTATE_CNT = 2,
    // line cycle within one vscan state
    eVSTATE_CYCLE = 3,
    // frame counter
    eFRAME_CNT = 4,
    // frame cycle
    eFRAME_CYCLE = 5,
    // horizontal counter (pclk counter within one line )
    eHCNT = 6,
    // vertical counter (line counter within one frame)
    eVCNT = 7,
  };
  
  // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
  enum class eSTATE_MASK : uint32_t {
    // FRAME SYNC
    eFS = 1,
    // FRAME BEGIN
    eFB = 2,
    // FRAME DATA
    eFD = 4,
    // FRAME END
    eFE = 8,
    // LINE SYNC
    eLS = 16,
    // LINE BEGIN
    eLB = 32,
    // LINE DATA
    eLD = 64,
    // LINE END
    eLE = 128,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enable pigeon Mode on this signal
    uint32_t EN : 1;
    // read-write - Polarity of signal output
    ePOL POL : 1;
    // read-write - Event to incrment local counter
    eINC_SEL INC_SEL : 2;
    // read-write - offset on pclk unit
    uint32_t OFFSET : 4;
    // read-write - select global counters as mask condition, use together with MASK_CNT
    eMASK_CNT_SEL MASK_CNT_SEL : 4;
    // read-write - When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    uint32_t MASK_CNT : 12;
    // read-write - state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    eSTATE_MASK STATE_MASK : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_11_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_11_0 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_11_0*>(0x40804AC0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_11_1 {
  
  // Assert signal output when counter match this value
  enum class eSET_CNT : uint32_t {
    // Start as active
    eSTART_ACTIVE = 0,
  };
  
  // Deassert signal output when counter match this value
  enum class eCLR_CNT : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Assert signal output when counter match this value
    eSET_CNT SET_CNT : 16;
    // read-write - Deassert signal output when counter match this value
    eCLR_CNT CLR_CNT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_PIGEON_11_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_PIGEON_11_1 &Instance() { return *reinterpret_cast<volatile LCDIF_PIGEON_11_1*>(0x40804AD0); }
};

// Panel Interface Signal Generator Register
union LCDIF_PIGEON_11_2 {
  
  // Logic operation with another signal: DIS/AND/OR/COND
  enum class eSIG_LOGIC : uint32_t {
    // No logic operation
    eDIS = 0,
    // sigout = sig_another AND this_sig
    eAND = 1,
    // sigout = sig_another OR this_sig
    eOR = 2,
    // mask = sig_another AND other_masks
    eMASK = 3,
  };
  
  // Select another signal for logic operation or as mask or counter tick event
  enum class eSIG_ANOTHER : uint32_t {
    // Keep active until mask off
    eCLEAR_USING_MASK = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - Logic operation with another signal: DIS/AND/OR/COND
    eSIG_LOGIC SIG_LOGIC : 4;
    // read-write - Select another signal for logic operation or as mask or counter tick event
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
union LCDIF_LUT_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Setting this bit will bypass the LUT memory resource completely
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
union LCDIF_LUT0_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - LUT indexed address pointer
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
union LCDIF_LUT0_DATA {
  
  // Bit field definition.
  struct {
    // read-write - Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT0_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT0_DATA &Instance() { return *reinterpret_cast<volatile LCDIF_LUT0_DATA*>(0x40804B20); }
};

// Lookup Table 1 Index Register
union LCDIF_LUT1_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - LUT indexed address pointer
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
union LCDIF_LUT1_DATA {
  
  // Bit field definition.
  struct {
    // read-write - Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LCDIF_LUT1_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LCDIF_LUT1_DATA &Instance() { return *reinterpret_cast<volatile LCDIF_LUT1_DATA*>(0x40804B40); }
};


} // namespace nLCDIF