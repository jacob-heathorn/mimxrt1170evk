#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LCDIF Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Lcdif {
  // LCDIF General Control Register
  struct LcdifCtrlFields {
    enum class eDATA_FORMAT_24_BIT : std::uint32_t {
      // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
      eALL_24_BITS_VALID = 0,
      // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
      eDROP_UPPER_2_BITS_PER_BYTE = 1,
    };

    enum class eDATA_FORMAT_18_BIT : std::uint32_t {
      // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
      eLOWER_18_BITS_VALID = 0,
      // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
      eUPPER_18_BITS_VALID = 1,
    };

    enum class eWORD_LENGTH : std::uint32_t {
      // Input data is 16 bits per pixel.
      e16_BIT = 0,
      // Input data is 8 bits wide.
      e8_BIT = 1,
      // Input data is 18 bits per pixel.
      e18_BIT = 2,
      // Input data is 24 bits per pixel.
      e24_BIT = 3,
    };

    enum class eLCD_DATABUS_WIDTH : std::uint32_t {
      // 16-bit data bus mode.
      e16_BIT = 0,
      // 8-bit data bus mode.
      e8_BIT = 1,
      // 18-bit data bus mode.
      e18_BIT = 2,
      // 24-bit data bus mode.
      e24_BIT = 3,
    };

    enum class eCSC_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eINPUT_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eDATA_SHIFT_DIR : std::uint32_t {
      // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_LEFT = 0,
      // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_RIGHT = 1,
    };

    // When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    using RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 3, i
    using DATA_FORMAT_24_BIT = ftl::mmio::Field<1, 1, eDATA_FORMAT_24_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 2, i.e. 18-bit.
    using DATA_FORMAT_18_BIT = ftl::mmio::Field<1, 2, eDATA_FORMAT_18_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    using DATA_FORMAT_16_BIT = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to make the LCDIF act as a bus master
    using MASTER = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    using ENABLE_PXP_HANDSHAKE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input data format.
    using WORD_LENGTH = ftl::mmio::Field<2, 8, eWORD_LENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    using LCD_DATABUS_WIDTH = ftl::mmio::Field<2, 10, eLCD_DATABUS_WIDTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    using CSC_DATA_SWIZZLE = ftl::mmio::Field<2, 12, eCSC_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes fetched by the bus master interface
    using INPUT_DATA_SWIZZLE = ftl::mmio::Field<2, 14, eINPUT_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    using DOTCLK_MODE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    using BYPASS_COUNT = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The data to be transmitted is shifted left or right by this number of bits.
    using SHIFT_NUM_BITS = ftl::mmio::Field<5, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use this bit to determine the direction of shift of transmit data.
    using DATA_SHIFT_DIR = ftl::mmio::Field<1, 26, eDATA_SHIFT_DIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero for normal operation
    using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero to enable normal operation of the LCDIF
    using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrlFields

  struct LCDIF_CTRL : ftl::mmio::Register<
      0x40804000u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LcdifCtrlFields::RUN,
      LcdifCtrlFields::DATA_FORMAT_24_BIT,
      LcdifCtrlFields::DATA_FORMAT_18_BIT,
      LcdifCtrlFields::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LcdifCtrlFields::MASTER,
      LcdifCtrlFields::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LcdifCtrlFields::WORD_LENGTH,
      LcdifCtrlFields::LCD_DATABUS_WIDTH,
      LcdifCtrlFields::CSC_DATA_SWIZZLE,
      LcdifCtrlFields::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LcdifCtrlFields::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LcdifCtrlFields::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LcdifCtrlFields::SHIFT_NUM_BITS,
      LcdifCtrlFields::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrlFields::CLKGATE,
      LcdifCtrlFields::SFTRST> {
    using eDATA_FORMAT_24_BIT = LcdifCtrlFields::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LcdifCtrlFields::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LcdifCtrlFields::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LcdifCtrlFields::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LcdifCtrlFields::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LcdifCtrlFields::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LcdifCtrlFields::eDATA_SHIFT_DIR;
    using RUN = LcdifCtrlFields::RUN;
    using DATA_FORMAT_24_BIT = LcdifCtrlFields::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LcdifCtrlFields::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LcdifCtrlFields::DATA_FORMAT_16_BIT;
    using MASTER = LcdifCtrlFields::MASTER;
    using ENABLE_PXP_HANDSHAKE = LcdifCtrlFields::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LcdifCtrlFields::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LcdifCtrlFields::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LcdifCtrlFields::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LcdifCtrlFields::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LcdifCtrlFields::DOTCLK_MODE;
    using BYPASS_COUNT = LcdifCtrlFields::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LcdifCtrlFields::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LcdifCtrlFields::DATA_SHIFT_DIR;
    using CLKGATE = LcdifCtrlFields::CLKGATE;
    using SFTRST = LcdifCtrlFields::SFTRST;
  };

  // LCDIF General Control Register
  struct LcdifCtrlSetFields {
    enum class eDATA_FORMAT_24_BIT : std::uint32_t {
      // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
      eALL_24_BITS_VALID = 0,
      // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
      eDROP_UPPER_2_BITS_PER_BYTE = 1,
    };

    enum class eDATA_FORMAT_18_BIT : std::uint32_t {
      // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
      eLOWER_18_BITS_VALID = 0,
      // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
      eUPPER_18_BITS_VALID = 1,
    };

    enum class eWORD_LENGTH : std::uint32_t {
      // Input data is 16 bits per pixel.
      e16_BIT = 0,
      // Input data is 8 bits wide.
      e8_BIT = 1,
      // Input data is 18 bits per pixel.
      e18_BIT = 2,
      // Input data is 24 bits per pixel.
      e24_BIT = 3,
    };

    enum class eLCD_DATABUS_WIDTH : std::uint32_t {
      // 16-bit data bus mode.
      e16_BIT = 0,
      // 8-bit data bus mode.
      e8_BIT = 1,
      // 18-bit data bus mode.
      e18_BIT = 2,
      // 24-bit data bus mode.
      e24_BIT = 3,
    };

    enum class eCSC_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eINPUT_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eDATA_SHIFT_DIR : std::uint32_t {
      // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_LEFT = 0,
      // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_RIGHT = 1,
    };

    // When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    using RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 3, i
    using DATA_FORMAT_24_BIT = ftl::mmio::Field<1, 1, eDATA_FORMAT_24_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 2, i.e. 18-bit.
    using DATA_FORMAT_18_BIT = ftl::mmio::Field<1, 2, eDATA_FORMAT_18_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    using DATA_FORMAT_16_BIT = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to make the LCDIF act as a bus master
    using MASTER = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    using ENABLE_PXP_HANDSHAKE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input data format.
    using WORD_LENGTH = ftl::mmio::Field<2, 8, eWORD_LENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    using LCD_DATABUS_WIDTH = ftl::mmio::Field<2, 10, eLCD_DATABUS_WIDTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    using CSC_DATA_SWIZZLE = ftl::mmio::Field<2, 12, eCSC_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes fetched by the bus master interface
    using INPUT_DATA_SWIZZLE = ftl::mmio::Field<2, 14, eINPUT_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    using DOTCLK_MODE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    using BYPASS_COUNT = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The data to be transmitted is shifted left or right by this number of bits.
    using SHIFT_NUM_BITS = ftl::mmio::Field<5, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use this bit to determine the direction of shift of transmit data.
    using DATA_SHIFT_DIR = ftl::mmio::Field<1, 26, eDATA_SHIFT_DIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero for normal operation
    using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero to enable normal operation of the LCDIF
    using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrlSetFields

  struct LCDIF_CTRL_SET : ftl::mmio::Register<
      0x40804004u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LcdifCtrlSetFields::RUN,
      LcdifCtrlSetFields::DATA_FORMAT_24_BIT,
      LcdifCtrlSetFields::DATA_FORMAT_18_BIT,
      LcdifCtrlSetFields::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LcdifCtrlSetFields::MASTER,
      LcdifCtrlSetFields::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LcdifCtrlSetFields::WORD_LENGTH,
      LcdifCtrlSetFields::LCD_DATABUS_WIDTH,
      LcdifCtrlSetFields::CSC_DATA_SWIZZLE,
      LcdifCtrlSetFields::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LcdifCtrlSetFields::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LcdifCtrlSetFields::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LcdifCtrlSetFields::SHIFT_NUM_BITS,
      LcdifCtrlSetFields::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrlSetFields::CLKGATE,
      LcdifCtrlSetFields::SFTRST> {
    using eDATA_FORMAT_24_BIT = LcdifCtrlSetFields::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LcdifCtrlSetFields::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LcdifCtrlSetFields::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LcdifCtrlSetFields::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LcdifCtrlSetFields::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LcdifCtrlSetFields::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LcdifCtrlSetFields::eDATA_SHIFT_DIR;
    using RUN = LcdifCtrlSetFields::RUN;
    using DATA_FORMAT_24_BIT = LcdifCtrlSetFields::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LcdifCtrlSetFields::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LcdifCtrlSetFields::DATA_FORMAT_16_BIT;
    using MASTER = LcdifCtrlSetFields::MASTER;
    using ENABLE_PXP_HANDSHAKE = LcdifCtrlSetFields::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LcdifCtrlSetFields::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LcdifCtrlSetFields::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LcdifCtrlSetFields::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LcdifCtrlSetFields::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LcdifCtrlSetFields::DOTCLK_MODE;
    using BYPASS_COUNT = LcdifCtrlSetFields::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LcdifCtrlSetFields::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LcdifCtrlSetFields::DATA_SHIFT_DIR;
    using CLKGATE = LcdifCtrlSetFields::CLKGATE;
    using SFTRST = LcdifCtrlSetFields::SFTRST;
  };

  // LCDIF General Control Register
  struct LcdifCtrlClrFields {
    enum class eDATA_FORMAT_24_BIT : std::uint32_t {
      // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
      eALL_24_BITS_VALID = 0,
      // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
      eDROP_UPPER_2_BITS_PER_BYTE = 1,
    };

    enum class eDATA_FORMAT_18_BIT : std::uint32_t {
      // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
      eLOWER_18_BITS_VALID = 0,
      // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
      eUPPER_18_BITS_VALID = 1,
    };

    enum class eWORD_LENGTH : std::uint32_t {
      // Input data is 16 bits per pixel.
      e16_BIT = 0,
      // Input data is 8 bits wide.
      e8_BIT = 1,
      // Input data is 18 bits per pixel.
      e18_BIT = 2,
      // Input data is 24 bits per pixel.
      e24_BIT = 3,
    };

    enum class eLCD_DATABUS_WIDTH : std::uint32_t {
      // 16-bit data bus mode.
      e16_BIT = 0,
      // 8-bit data bus mode.
      e8_BIT = 1,
      // 18-bit data bus mode.
      e18_BIT = 2,
      // 24-bit data bus mode.
      e24_BIT = 3,
    };

    enum class eCSC_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eINPUT_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eDATA_SHIFT_DIR : std::uint32_t {
      // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_LEFT = 0,
      // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_RIGHT = 1,
    };

    // When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    using RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 3, i
    using DATA_FORMAT_24_BIT = ftl::mmio::Field<1, 1, eDATA_FORMAT_24_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 2, i.e. 18-bit.
    using DATA_FORMAT_18_BIT = ftl::mmio::Field<1, 2, eDATA_FORMAT_18_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    using DATA_FORMAT_16_BIT = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to make the LCDIF act as a bus master
    using MASTER = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    using ENABLE_PXP_HANDSHAKE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input data format.
    using WORD_LENGTH = ftl::mmio::Field<2, 8, eWORD_LENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    using LCD_DATABUS_WIDTH = ftl::mmio::Field<2, 10, eLCD_DATABUS_WIDTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    using CSC_DATA_SWIZZLE = ftl::mmio::Field<2, 12, eCSC_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes fetched by the bus master interface
    using INPUT_DATA_SWIZZLE = ftl::mmio::Field<2, 14, eINPUT_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    using DOTCLK_MODE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    using BYPASS_COUNT = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The data to be transmitted is shifted left or right by this number of bits.
    using SHIFT_NUM_BITS = ftl::mmio::Field<5, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use this bit to determine the direction of shift of transmit data.
    using DATA_SHIFT_DIR = ftl::mmio::Field<1, 26, eDATA_SHIFT_DIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero for normal operation
    using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero to enable normal operation of the LCDIF
    using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrlClrFields

  struct LCDIF_CTRL_CLR : ftl::mmio::Register<
      0x40804008u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LcdifCtrlClrFields::RUN,
      LcdifCtrlClrFields::DATA_FORMAT_24_BIT,
      LcdifCtrlClrFields::DATA_FORMAT_18_BIT,
      LcdifCtrlClrFields::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LcdifCtrlClrFields::MASTER,
      LcdifCtrlClrFields::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LcdifCtrlClrFields::WORD_LENGTH,
      LcdifCtrlClrFields::LCD_DATABUS_WIDTH,
      LcdifCtrlClrFields::CSC_DATA_SWIZZLE,
      LcdifCtrlClrFields::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LcdifCtrlClrFields::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LcdifCtrlClrFields::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LcdifCtrlClrFields::SHIFT_NUM_BITS,
      LcdifCtrlClrFields::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrlClrFields::CLKGATE,
      LcdifCtrlClrFields::SFTRST> {
    using eDATA_FORMAT_24_BIT = LcdifCtrlClrFields::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LcdifCtrlClrFields::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LcdifCtrlClrFields::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LcdifCtrlClrFields::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LcdifCtrlClrFields::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LcdifCtrlClrFields::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LcdifCtrlClrFields::eDATA_SHIFT_DIR;
    using RUN = LcdifCtrlClrFields::RUN;
    using DATA_FORMAT_24_BIT = LcdifCtrlClrFields::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LcdifCtrlClrFields::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LcdifCtrlClrFields::DATA_FORMAT_16_BIT;
    using MASTER = LcdifCtrlClrFields::MASTER;
    using ENABLE_PXP_HANDSHAKE = LcdifCtrlClrFields::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LcdifCtrlClrFields::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LcdifCtrlClrFields::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LcdifCtrlClrFields::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LcdifCtrlClrFields::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LcdifCtrlClrFields::DOTCLK_MODE;
    using BYPASS_COUNT = LcdifCtrlClrFields::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LcdifCtrlClrFields::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LcdifCtrlClrFields::DATA_SHIFT_DIR;
    using CLKGATE = LcdifCtrlClrFields::CLKGATE;
    using SFTRST = LcdifCtrlClrFields::SFTRST;
  };

  // LCDIF General Control Register
  struct LcdifCtrlTogFields {
    enum class eDATA_FORMAT_24_BIT : std::uint32_t {
      // Data input to the block is in 24 bpp format, such that all RGB 888 data is contained in 24 bits.
      eALL_24_BITS_VALID = 0,
      // Data input to the block is actually RGB 18 bpp, but there is 1 color per byte, hence the upper 2 bits in each byte do not contain any useful data, and should be dropped.
      eDROP_UPPER_2_BITS_PER_BYTE = 1,
    };

    enum class eDATA_FORMAT_18_BIT : std::uint32_t {
      // Data input to the block is in 18 bpp format, such that lower 18 bits contain RGB 666 and upper 14 bits do not contain any useful data.
      eLOWER_18_BITS_VALID = 0,
      // Data input to the block is in 18 bpp format, such that upper 18 bits contain RGB 666 and lower 14 bits do not contain any useful data.
      eUPPER_18_BITS_VALID = 1,
    };

    enum class eWORD_LENGTH : std::uint32_t {
      // Input data is 16 bits per pixel.
      e16_BIT = 0,
      // Input data is 8 bits wide.
      e8_BIT = 1,
      // Input data is 18 bits per pixel.
      e18_BIT = 2,
      // Input data is 24 bits per pixel.
      e24_BIT = 3,
    };

    enum class eLCD_DATABUS_WIDTH : std::uint32_t {
      // 16-bit data bus mode.
      e16_BIT = 0,
      // 8-bit data bus mode.
      e8_BIT = 1,
      // 18-bit data bus mode.
      e18_BIT = 2,
      // 24-bit data bus mode.
      e24_BIT = 3,
    };

    enum class eCSC_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eINPUT_DATA_SWIZZLE : std::uint32_t {
      // No byte swapping.(Little endian)
      eNO_SWAP = 0,
      // Big Endian swap (swap bytes 0,3 and 1,2).
      eBIG_ENDIAN_SWAP = 1,
      // Swap half-words.
      eHWD_SWAP = 2,
      // Swap bytes within each half-word.
      eHWD_BYTE_SWAP = 3,
    };

    enum class eDATA_SHIFT_DIR : std::uint32_t {
      // Data to be transmitted is shifted LEFT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_LEFT = 0,
      // Data to be transmitted is shifted RIGHT by SHIFT_NUM_BITS bits.
      eTXDATA_SHIFT_RIGHT = 1,
    };

    // When this bit is set by software, the LCDIF will begin transferring data between the SoC and the display
    using RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 3, i
    using DATA_FORMAT_24_BIT = ftl::mmio::Field<1, 1, eDATA_FORMAT_24_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Used only when WORD_LENGTH = 2, i.e. 18-bit.
    using DATA_FORMAT_18_BIT = ftl::mmio::Field<1, 2, eDATA_FORMAT_18_BIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 1 and WORD_LENGTH = 0, it implies that the 16-bit data is in ARGB555 format
    using DATA_FORMAT_16_BIT = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to make the LCDIF act as a bus master
    using MASTER = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set and LCDIF_MASTER bit is set, the LCDIF will act as bus master and the handshake mechanism between LCDIF and PXP will be turned on
    using ENABLE_PXP_HANDSHAKE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input data format.
    using WORD_LENGTH = ftl::mmio::Field<2, 8, eWORD_LENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // LCD Data bus transfer width. When LUT enabled, this field should be set to 0x01.
    using LCD_DATABUS_WIDTH = ftl::mmio::Field<2, 10, eLCD_DATABUS_WIDTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes after the data has been converted into an internal representation of 24 bits per pixel and before it is transmitted over the LCD interface bus
    using CSC_DATA_SWIZZLE = ftl::mmio::Field<2, 12, eCSC_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field specifies how to swap the bytes fetched by the bus master interface
    using INPUT_DATA_SWIZZLE = ftl::mmio::Field<2, 14, eINPUT_DATA_SWIZZLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to 1 to make the hardware go into the DOTCLK mode, i
    using DOTCLK_MODE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, it means that LCDIF will stop the block operation and turn off the RUN bit after the amount of data indicated by the LCDIF_TRANSFER_COUNT register has been transferred out
    using BYPASS_COUNT = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The data to be transmitted is shifted left or right by this number of bits.
    using SHIFT_NUM_BITS = ftl::mmio::Field<5, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use this bit to determine the direction of shift of transmit data.
    using DATA_SHIFT_DIR = ftl::mmio::Field<1, 26, eDATA_SHIFT_DIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero for normal operation
    using CLKGATE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to zero to enable normal operation of the LCDIF
    using SFTRST = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrlTogFields

  struct LCDIF_CTRL_TOG : ftl::mmio::Register<
      0x4080400Cu,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LcdifCtrlTogFields::RUN,
      LcdifCtrlTogFields::DATA_FORMAT_24_BIT,
      LcdifCtrlTogFields::DATA_FORMAT_18_BIT,
      LcdifCtrlTogFields::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LcdifCtrlTogFields::MASTER,
      LcdifCtrlTogFields::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LcdifCtrlTogFields::WORD_LENGTH,
      LcdifCtrlTogFields::LCD_DATABUS_WIDTH,
      LcdifCtrlTogFields::CSC_DATA_SWIZZLE,
      LcdifCtrlTogFields::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LcdifCtrlTogFields::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LcdifCtrlTogFields::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LcdifCtrlTogFields::SHIFT_NUM_BITS,
      LcdifCtrlTogFields::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrlTogFields::CLKGATE,
      LcdifCtrlTogFields::SFTRST> {
    using eDATA_FORMAT_24_BIT = LcdifCtrlTogFields::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LcdifCtrlTogFields::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LcdifCtrlTogFields::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LcdifCtrlTogFields::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LcdifCtrlTogFields::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LcdifCtrlTogFields::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LcdifCtrlTogFields::eDATA_SHIFT_DIR;
    using RUN = LcdifCtrlTogFields::RUN;
    using DATA_FORMAT_24_BIT = LcdifCtrlTogFields::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LcdifCtrlTogFields::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LcdifCtrlTogFields::DATA_FORMAT_16_BIT;
    using MASTER = LcdifCtrlTogFields::MASTER;
    using ENABLE_PXP_HANDSHAKE = LcdifCtrlTogFields::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LcdifCtrlTogFields::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LcdifCtrlTogFields::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LcdifCtrlTogFields::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LcdifCtrlTogFields::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LcdifCtrlTogFields::DOTCLK_MODE;
    using BYPASS_COUNT = LcdifCtrlTogFields::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LcdifCtrlTogFields::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LcdifCtrlTogFields::DATA_SHIFT_DIR;
    using CLKGATE = LcdifCtrlTogFields::CLKGATE;
    using SFTRST = LcdifCtrlTogFields::SFTRST;
  };

  // LCDIF General Control1 Register
  struct LcdifCtrl1Fields {
    enum class eVSYNC_EDGE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eCUR_FRAME_DONE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eUNDERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eOVERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eBM_ERROR_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using VSYNC_EDGE_IRQ = ftl::mmio::Field<1, 8, eVSYNC_EDGE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using CUR_FRAME_DONE_IRQ = ftl::mmio::Field<1, 9, eCUR_FRAME_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using UNDERFLOW_IRQ = ftl::mmio::Field<1, 10, eUNDERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using OVERFLOW_IRQ = ftl::mmio::Field<1, 11, eOVERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    using VSYNC_EDGE_IRQ_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    using CUR_FRAME_DONE_IRQ_EN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    using UNDERFLOW_IRQ_EN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    using OVERFLOW_IRQ_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield is used to show which data bytes in a 32-bit word are valid
    using BYTE_PACKING_FORMAT = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    using IRQ_ON_ALTERNATE_FIELDS = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    using FIFO_CLEAR = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The default is to grab the odd lines first and then the even lines
    using START_INTERLACE_FROM_SECOND_FIELD = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    using INTERLACE_FIELDS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    using RECOVER_ON_UNDERFLOW = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using BM_ERROR_IRQ = ftl::mmio::Field<1, 25, eBM_ERROR_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable bus master error interrupt in the LCDIF master mode.
    using BM_ERROR_IRQ_EN = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is CS0/CS1 valid select signals
    using CS_OUT_SELECT = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Mode MIPI image data select bit
    using IMAGE_DATA_SELECT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl1Fields

  struct LCDIF_CTRL1 : ftl::mmio::Register<
      0x40804010u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LcdifCtrl1Fields::VSYNC_EDGE_IRQ,
      LcdifCtrl1Fields::CUR_FRAME_DONE_IRQ,
      LcdifCtrl1Fields::UNDERFLOW_IRQ,
      LcdifCtrl1Fields::OVERFLOW_IRQ,
      LcdifCtrl1Fields::VSYNC_EDGE_IRQ_EN,
      LcdifCtrl1Fields::CUR_FRAME_DONE_IRQ_EN,
      LcdifCtrl1Fields::UNDERFLOW_IRQ_EN,
      LcdifCtrl1Fields::OVERFLOW_IRQ_EN,
      LcdifCtrl1Fields::BYTE_PACKING_FORMAT,
      LcdifCtrl1Fields::IRQ_ON_ALTERNATE_FIELDS,
      LcdifCtrl1Fields::FIFO_CLEAR,
      LcdifCtrl1Fields::START_INTERLACE_FROM_SECOND_FIELD,
      LcdifCtrl1Fields::INTERLACE_FIELDS,
      LcdifCtrl1Fields::RECOVER_ON_UNDERFLOW,
      LcdifCtrl1Fields::BM_ERROR_IRQ,
      LcdifCtrl1Fields::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrl1Fields::CS_OUT_SELECT,
      LcdifCtrl1Fields::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LcdifCtrl1Fields::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LcdifCtrl1Fields::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LcdifCtrl1Fields::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LcdifCtrl1Fields::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LcdifCtrl1Fields::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LcdifCtrl1Fields::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LcdifCtrl1Fields::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LcdifCtrl1Fields::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LcdifCtrl1Fields::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LcdifCtrl1Fields::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LcdifCtrl1Fields::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LcdifCtrl1Fields::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LcdifCtrl1Fields::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LcdifCtrl1Fields::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LcdifCtrl1Fields::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LcdifCtrl1Fields::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LcdifCtrl1Fields::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LcdifCtrl1Fields::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LcdifCtrl1Fields::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LcdifCtrl1Fields::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LcdifCtrl1Fields::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LcdifCtrl1Fields::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LcdifCtrl1Fields::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LcdifCtrl1SetFields {
    enum class eVSYNC_EDGE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eCUR_FRAME_DONE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eUNDERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eOVERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eBM_ERROR_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using VSYNC_EDGE_IRQ = ftl::mmio::Field<1, 8, eVSYNC_EDGE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using CUR_FRAME_DONE_IRQ = ftl::mmio::Field<1, 9, eCUR_FRAME_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using UNDERFLOW_IRQ = ftl::mmio::Field<1, 10, eUNDERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using OVERFLOW_IRQ = ftl::mmio::Field<1, 11, eOVERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    using VSYNC_EDGE_IRQ_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    using CUR_FRAME_DONE_IRQ_EN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    using UNDERFLOW_IRQ_EN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    using OVERFLOW_IRQ_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield is used to show which data bytes in a 32-bit word are valid
    using BYTE_PACKING_FORMAT = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    using IRQ_ON_ALTERNATE_FIELDS = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    using FIFO_CLEAR = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The default is to grab the odd lines first and then the even lines
    using START_INTERLACE_FROM_SECOND_FIELD = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    using INTERLACE_FIELDS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    using RECOVER_ON_UNDERFLOW = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using BM_ERROR_IRQ = ftl::mmio::Field<1, 25, eBM_ERROR_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable bus master error interrupt in the LCDIF master mode.
    using BM_ERROR_IRQ_EN = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is CS0/CS1 valid select signals
    using CS_OUT_SELECT = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Mode MIPI image data select bit
    using IMAGE_DATA_SELECT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl1SetFields

  struct LCDIF_CTRL1_SET : ftl::mmio::Register<
      0x40804014u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LcdifCtrl1SetFields::VSYNC_EDGE_IRQ,
      LcdifCtrl1SetFields::CUR_FRAME_DONE_IRQ,
      LcdifCtrl1SetFields::UNDERFLOW_IRQ,
      LcdifCtrl1SetFields::OVERFLOW_IRQ,
      LcdifCtrl1SetFields::VSYNC_EDGE_IRQ_EN,
      LcdifCtrl1SetFields::CUR_FRAME_DONE_IRQ_EN,
      LcdifCtrl1SetFields::UNDERFLOW_IRQ_EN,
      LcdifCtrl1SetFields::OVERFLOW_IRQ_EN,
      LcdifCtrl1SetFields::BYTE_PACKING_FORMAT,
      LcdifCtrl1SetFields::IRQ_ON_ALTERNATE_FIELDS,
      LcdifCtrl1SetFields::FIFO_CLEAR,
      LcdifCtrl1SetFields::START_INTERLACE_FROM_SECOND_FIELD,
      LcdifCtrl1SetFields::INTERLACE_FIELDS,
      LcdifCtrl1SetFields::RECOVER_ON_UNDERFLOW,
      LcdifCtrl1SetFields::BM_ERROR_IRQ,
      LcdifCtrl1SetFields::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrl1SetFields::CS_OUT_SELECT,
      LcdifCtrl1SetFields::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LcdifCtrl1SetFields::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LcdifCtrl1SetFields::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LcdifCtrl1SetFields::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LcdifCtrl1SetFields::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LcdifCtrl1SetFields::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LcdifCtrl1SetFields::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LcdifCtrl1SetFields::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LcdifCtrl1SetFields::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LcdifCtrl1SetFields::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LcdifCtrl1SetFields::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LcdifCtrl1SetFields::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LcdifCtrl1SetFields::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LcdifCtrl1SetFields::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LcdifCtrl1SetFields::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LcdifCtrl1SetFields::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LcdifCtrl1SetFields::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LcdifCtrl1SetFields::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LcdifCtrl1SetFields::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LcdifCtrl1SetFields::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LcdifCtrl1SetFields::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LcdifCtrl1SetFields::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LcdifCtrl1SetFields::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LcdifCtrl1SetFields::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LcdifCtrl1ClrFields {
    enum class eVSYNC_EDGE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eCUR_FRAME_DONE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eUNDERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eOVERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eBM_ERROR_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using VSYNC_EDGE_IRQ = ftl::mmio::Field<1, 8, eVSYNC_EDGE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using CUR_FRAME_DONE_IRQ = ftl::mmio::Field<1, 9, eCUR_FRAME_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using UNDERFLOW_IRQ = ftl::mmio::Field<1, 10, eUNDERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using OVERFLOW_IRQ = ftl::mmio::Field<1, 11, eOVERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    using VSYNC_EDGE_IRQ_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    using CUR_FRAME_DONE_IRQ_EN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    using UNDERFLOW_IRQ_EN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    using OVERFLOW_IRQ_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield is used to show which data bytes in a 32-bit word are valid
    using BYTE_PACKING_FORMAT = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    using IRQ_ON_ALTERNATE_FIELDS = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    using FIFO_CLEAR = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The default is to grab the odd lines first and then the even lines
    using START_INTERLACE_FROM_SECOND_FIELD = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    using INTERLACE_FIELDS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    using RECOVER_ON_UNDERFLOW = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using BM_ERROR_IRQ = ftl::mmio::Field<1, 25, eBM_ERROR_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable bus master error interrupt in the LCDIF master mode.
    using BM_ERROR_IRQ_EN = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is CS0/CS1 valid select signals
    using CS_OUT_SELECT = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Mode MIPI image data select bit
    using IMAGE_DATA_SELECT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl1ClrFields

  struct LCDIF_CTRL1_CLR : ftl::mmio::Register<
      0x40804018u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LcdifCtrl1ClrFields::VSYNC_EDGE_IRQ,
      LcdifCtrl1ClrFields::CUR_FRAME_DONE_IRQ,
      LcdifCtrl1ClrFields::UNDERFLOW_IRQ,
      LcdifCtrl1ClrFields::OVERFLOW_IRQ,
      LcdifCtrl1ClrFields::VSYNC_EDGE_IRQ_EN,
      LcdifCtrl1ClrFields::CUR_FRAME_DONE_IRQ_EN,
      LcdifCtrl1ClrFields::UNDERFLOW_IRQ_EN,
      LcdifCtrl1ClrFields::OVERFLOW_IRQ_EN,
      LcdifCtrl1ClrFields::BYTE_PACKING_FORMAT,
      LcdifCtrl1ClrFields::IRQ_ON_ALTERNATE_FIELDS,
      LcdifCtrl1ClrFields::FIFO_CLEAR,
      LcdifCtrl1ClrFields::START_INTERLACE_FROM_SECOND_FIELD,
      LcdifCtrl1ClrFields::INTERLACE_FIELDS,
      LcdifCtrl1ClrFields::RECOVER_ON_UNDERFLOW,
      LcdifCtrl1ClrFields::BM_ERROR_IRQ,
      LcdifCtrl1ClrFields::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrl1ClrFields::CS_OUT_SELECT,
      LcdifCtrl1ClrFields::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LcdifCtrl1ClrFields::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LcdifCtrl1ClrFields::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LcdifCtrl1ClrFields::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LcdifCtrl1ClrFields::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LcdifCtrl1ClrFields::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LcdifCtrl1ClrFields::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LcdifCtrl1ClrFields::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LcdifCtrl1ClrFields::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LcdifCtrl1ClrFields::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LcdifCtrl1ClrFields::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LcdifCtrl1ClrFields::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LcdifCtrl1ClrFields::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LcdifCtrl1ClrFields::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LcdifCtrl1ClrFields::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LcdifCtrl1ClrFields::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LcdifCtrl1ClrFields::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LcdifCtrl1ClrFields::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LcdifCtrl1ClrFields::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LcdifCtrl1ClrFields::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LcdifCtrl1ClrFields::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LcdifCtrl1ClrFields::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LcdifCtrl1ClrFields::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LcdifCtrl1ClrFields::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LcdifCtrl1TogFields {
    enum class eVSYNC_EDGE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eCUR_FRAME_DONE_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eUNDERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eOVERFLOW_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    enum class eBM_ERROR_IRQ : std::uint32_t {
      // No Interrupt Request Pending.
      eNO_REQUEST = 0,
      // Interrupt Request Pending.
      eREQUEST = 1,
    };

    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using VSYNC_EDGE_IRQ = ftl::mmio::Field<1, 8, eVSYNC_EDGE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using CUR_FRAME_DONE_IRQ = ftl::mmio::Field<1, 9, eCUR_FRAME_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using UNDERFLOW_IRQ = ftl::mmio::Field<1, 10, eUNDERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using OVERFLOW_IRQ = ftl::mmio::Field<1, 11, eOVERFLOW_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an interrupt every time the hardware encounters the leading VSYNC edge in the VSYNC and DOTCLK modes, or the beginning of every field in DVI mode
    using VSYNC_EDGE_IRQ_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to 1 enable an interrupt every time the hardware enters in the vertical blanking state
    using CUR_FRAME_DONE_IRQ_EN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an underflow interrupt in the TXFIFO in the write mode.
    using UNDERFLOW_IRQ_EN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable an overflow interrupt in the TXFIFO in the write mode.
    using OVERFLOW_IRQ_EN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield is used to show which data bytes in a 32-bit word are valid
    using BYTE_PACKING_FORMAT = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // If this bit is set, the LCDIF block will assert the cur_frame_done interrupt only on alternate fields, otherwise it will issue the interrupt on both odd and even field
    using IRQ_ON_ALTERNATE_FIELDS = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to clear all the data in the latency FIFO (LFIFO), TXFIFO and the RXFIFO.
    using FIFO_CLEAR = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The default is to grab the odd lines first and then the even lines
    using START_INTERLACE_FROM_SECOND_FIELD = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit if it is required that the LCDIF block fetches odd lines in one field and even lines in the other field
    using INTERLACE_FIELDS = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this bit to enable the LCDIF block to recover in the next field/frame if there was an underflow in the current field/frame
    using RECOVER_ON_UNDERFLOW = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to indicate that an interrupt is requested by the LCDIF block
    using BM_ERROR_IRQ = ftl::mmio::Field<1, 25, eBM_ERROR_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is set to enable bus master error interrupt in the LCDIF master mode.
    using BM_ERROR_IRQ_EN = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit is CS0/CS1 valid select signals
    using CS_OUT_SELECT = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command Mode MIPI image data select bit
    using IMAGE_DATA_SELECT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl1TogFields

  struct LCDIF_CTRL1_TOG : ftl::mmio::Register<
      0x4080401Cu,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LcdifCtrl1TogFields::VSYNC_EDGE_IRQ,
      LcdifCtrl1TogFields::CUR_FRAME_DONE_IRQ,
      LcdifCtrl1TogFields::UNDERFLOW_IRQ,
      LcdifCtrl1TogFields::OVERFLOW_IRQ,
      LcdifCtrl1TogFields::VSYNC_EDGE_IRQ_EN,
      LcdifCtrl1TogFields::CUR_FRAME_DONE_IRQ_EN,
      LcdifCtrl1TogFields::UNDERFLOW_IRQ_EN,
      LcdifCtrl1TogFields::OVERFLOW_IRQ_EN,
      LcdifCtrl1TogFields::BYTE_PACKING_FORMAT,
      LcdifCtrl1TogFields::IRQ_ON_ALTERNATE_FIELDS,
      LcdifCtrl1TogFields::FIFO_CLEAR,
      LcdifCtrl1TogFields::START_INTERLACE_FROM_SECOND_FIELD,
      LcdifCtrl1TogFields::INTERLACE_FIELDS,
      LcdifCtrl1TogFields::RECOVER_ON_UNDERFLOW,
      LcdifCtrl1TogFields::BM_ERROR_IRQ,
      LcdifCtrl1TogFields::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LcdifCtrl1TogFields::CS_OUT_SELECT,
      LcdifCtrl1TogFields::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LcdifCtrl1TogFields::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LcdifCtrl1TogFields::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LcdifCtrl1TogFields::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LcdifCtrl1TogFields::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LcdifCtrl1TogFields::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LcdifCtrl1TogFields::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LcdifCtrl1TogFields::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LcdifCtrl1TogFields::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LcdifCtrl1TogFields::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LcdifCtrl1TogFields::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LcdifCtrl1TogFields::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LcdifCtrl1TogFields::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LcdifCtrl1TogFields::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LcdifCtrl1TogFields::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LcdifCtrl1TogFields::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LcdifCtrl1TogFields::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LcdifCtrl1TogFields::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LcdifCtrl1TogFields::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LcdifCtrl1TogFields::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LcdifCtrl1TogFields::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LcdifCtrl1TogFields::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LcdifCtrl1TogFields::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LcdifCtrl1TogFields::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control2 Register
  struct LcdifCtrl2Fields {
    enum class eEVEN_LINE_PATTERN : std::uint32_t {
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

    enum class eODD_LINE_PATTERN : std::uint32_t {
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

    enum class eOUTSTANDING_REQS : std::uint32_t {
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

    // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    using EVEN_LINE_PATTERN = ftl::mmio::Field<3, 12, eEVEN_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    using ODD_LINE_PATTERN = ftl::mmio::Field<3, 16, eODD_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    using BURST_LEN_8 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
    using OUTSTANDING_REQS = ftl::mmio::Field<3, 21, eOUTSTANDING_REQS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl2Fields

  struct LCDIF_CTRL2 : ftl::mmio::Register<
      0x40804020u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LcdifCtrl2Fields::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LcdifCtrl2Fields::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LcdifCtrl2Fields::BURST_LEN_8,
      LcdifCtrl2Fields::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LcdifCtrl2Fields::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LcdifCtrl2Fields::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LcdifCtrl2Fields::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LcdifCtrl2Fields::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LcdifCtrl2Fields::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LcdifCtrl2Fields::BURST_LEN_8;
    using OUTSTANDING_REQS = LcdifCtrl2Fields::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LcdifCtrl2SetFields {
    enum class eEVEN_LINE_PATTERN : std::uint32_t {
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

    enum class eODD_LINE_PATTERN : std::uint32_t {
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

    enum class eOUTSTANDING_REQS : std::uint32_t {
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

    // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    using EVEN_LINE_PATTERN = ftl::mmio::Field<3, 12, eEVEN_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    using ODD_LINE_PATTERN = ftl::mmio::Field<3, 16, eODD_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    using BURST_LEN_8 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
    using OUTSTANDING_REQS = ftl::mmio::Field<3, 21, eOUTSTANDING_REQS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl2SetFields

  struct LCDIF_CTRL2_SET : ftl::mmio::Register<
      0x40804024u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LcdifCtrl2SetFields::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LcdifCtrl2SetFields::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LcdifCtrl2SetFields::BURST_LEN_8,
      LcdifCtrl2SetFields::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LcdifCtrl2SetFields::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LcdifCtrl2SetFields::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LcdifCtrl2SetFields::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LcdifCtrl2SetFields::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LcdifCtrl2SetFields::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LcdifCtrl2SetFields::BURST_LEN_8;
    using OUTSTANDING_REQS = LcdifCtrl2SetFields::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LcdifCtrl2ClrFields {
    enum class eEVEN_LINE_PATTERN : std::uint32_t {
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

    enum class eODD_LINE_PATTERN : std::uint32_t {
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

    enum class eOUTSTANDING_REQS : std::uint32_t {
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

    // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    using EVEN_LINE_PATTERN = ftl::mmio::Field<3, 12, eEVEN_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    using ODD_LINE_PATTERN = ftl::mmio::Field<3, 16, eODD_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    using BURST_LEN_8 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
    using OUTSTANDING_REQS = ftl::mmio::Field<3, 21, eOUTSTANDING_REQS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl2ClrFields

  struct LCDIF_CTRL2_CLR : ftl::mmio::Register<
      0x40804028u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LcdifCtrl2ClrFields::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LcdifCtrl2ClrFields::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LcdifCtrl2ClrFields::BURST_LEN_8,
      LcdifCtrl2ClrFields::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LcdifCtrl2ClrFields::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LcdifCtrl2ClrFields::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LcdifCtrl2ClrFields::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LcdifCtrl2ClrFields::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LcdifCtrl2ClrFields::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LcdifCtrl2ClrFields::BURST_LEN_8;
    using OUTSTANDING_REQS = LcdifCtrl2ClrFields::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LcdifCtrl2TogFields {
    enum class eEVEN_LINE_PATTERN : std::uint32_t {
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

    enum class eODD_LINE_PATTERN : std::uint32_t {
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

    enum class eOUTSTANDING_REQS : std::uint32_t {
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

    // This field determines the order of the RGB components of each pixel in EVEN lines (line numbers 2,4,6,
    using EVEN_LINE_PATTERN = ftl::mmio::Field<3, 12, eEVEN_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field determines the order of the RGB components of each pixel in ODD lines (line numbers 1,3,5,
    using ODD_LINE_PATTERN = ftl::mmio::Field<3, 16, eODD_LINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
    // By default, when the LCDIF is in the bus master mode, it will issue AXI bursts of length 16 (except when in packed 24 bpp mode, it will issue bursts of length 15)
    using BURST_LEN_8 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield indicates the maximum number of outstanding transactions that LCDIF should request when it is acting as a bus master
    using OUTSTANDING_REQS = ftl::mmio::Field<3, 21, eOUTSTANDING_REQS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCtrl2TogFields

  struct LCDIF_CTRL2_TOG : ftl::mmio::Register<
      0x4080402Cu,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LcdifCtrl2TogFields::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LcdifCtrl2TogFields::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LcdifCtrl2TogFields::BURST_LEN_8,
      LcdifCtrl2TogFields::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LcdifCtrl2TogFields::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LcdifCtrl2TogFields::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LcdifCtrl2TogFields::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LcdifCtrl2TogFields::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LcdifCtrl2TogFields::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LcdifCtrl2TogFields::BURST_LEN_8;
    using OUTSTANDING_REQS = LcdifCtrl2TogFields::OUTSTANDING_REQS;
  };

  // LCDIF Horizontal and Vertical Valid Data Count Register
  struct LcdifTransferCountFields {
    // Total valid data (pixels) in each horizontal line
    using H_COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of horizontal lines per frame which contain valid data
    using V_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifTransferCountFields

  struct LCDIF_TRANSFER_COUNT : ftl::mmio::Register<
      0x40804030u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      LcdifTransferCountFields::H_COUNT,
      LcdifTransferCountFields::V_COUNT> {
    using H_COUNT = LcdifTransferCountFields::H_COUNT;
    using V_COUNT = LcdifTransferCountFields::V_COUNT;
  };

  // LCD Interface Current Buffer Address Register
  struct LcdifCurBufFields {
    // Address of the current frame being transmitted by LCDIF.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCurBufFields

  struct LCDIF_CUR_BUF : ftl::mmio::Register<
      0x40804040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifCurBufFields::ADDR> {
    using ADDR = LcdifCurBufFields::ADDR;
  };

  // LCD Interface Next Buffer Address Register
  struct LcdifNextBufFields {
    // Address of the next frame that will be transmitted by LCDIF.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifNextBufFields

  struct LCDIF_NEXT_BUF : ftl::mmio::Register<
      0x40804050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifNextBufFields::ADDR> {
    using ADDR = LcdifNextBufFields::ADDR;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LcdifVdctrl0Fields {
    enum class eVSYNC_OEB : std::uint32_t {
      // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
      eVSYNC_OUTPUT = 0,
      // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
      eVSYNC_INPUT = 1,
    };

    // Number of units for which VSYNC signal is active
    using VSYNC_PULSE_WIDTH = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    using HALF_LINE_MODE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    using HALF_LINE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PULSE_WIDTH_UNIT = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PERIOD_UNIT = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during valid data transfer on each horizontal line.
    using ENABLE_POL = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default is data launched at negative edge of DOTCLK and captured at positive edge
    using DOTCLK_POL = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    using HSYNC_POL = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    using VSYNC_POL = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    using ENABLE_PRESENT = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0 means the VSYNC signal is an output, 1 means it is an input
    using VSYNC_OEB = ftl::mmio::Field<1, 29, eVSYNC_OEB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl0Fields

  struct LCDIF_VDCTRL0 : ftl::mmio::Register<
      0x40804070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl0Fields::VSYNC_PULSE_WIDTH,
      LcdifVdctrl0Fields::HALF_LINE_MODE,
      LcdifVdctrl0Fields::HALF_LINE,
      LcdifVdctrl0Fields::VSYNC_PULSE_WIDTH_UNIT,
      LcdifVdctrl0Fields::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LcdifVdctrl0Fields::ENABLE_POL,
      LcdifVdctrl0Fields::DOTCLK_POL,
      LcdifVdctrl0Fields::HSYNC_POL,
      LcdifVdctrl0Fields::VSYNC_POL,
      LcdifVdctrl0Fields::ENABLE_PRESENT,
      LcdifVdctrl0Fields::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LcdifVdctrl0Fields::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LcdifVdctrl0Fields::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LcdifVdctrl0Fields::HALF_LINE_MODE;
    using HALF_LINE = LcdifVdctrl0Fields::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LcdifVdctrl0Fields::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LcdifVdctrl0Fields::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LcdifVdctrl0Fields::ENABLE_POL;
    using DOTCLK_POL = LcdifVdctrl0Fields::DOTCLK_POL;
    using HSYNC_POL = LcdifVdctrl0Fields::HSYNC_POL;
    using VSYNC_POL = LcdifVdctrl0Fields::VSYNC_POL;
    using ENABLE_PRESENT = LcdifVdctrl0Fields::ENABLE_PRESENT;
    using VSYNC_OEB = LcdifVdctrl0Fields::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LcdifVdctrl0SetFields {
    enum class eVSYNC_OEB : std::uint32_t {
      // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
      eVSYNC_OUTPUT = 0,
      // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
      eVSYNC_INPUT = 1,
    };

    // Number of units for which VSYNC signal is active
    using VSYNC_PULSE_WIDTH = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    using HALF_LINE_MODE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    using HALF_LINE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PULSE_WIDTH_UNIT = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PERIOD_UNIT = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during valid data transfer on each horizontal line.
    using ENABLE_POL = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default is data launched at negative edge of DOTCLK and captured at positive edge
    using DOTCLK_POL = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    using HSYNC_POL = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    using VSYNC_POL = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    using ENABLE_PRESENT = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0 means the VSYNC signal is an output, 1 means it is an input
    using VSYNC_OEB = ftl::mmio::Field<1, 29, eVSYNC_OEB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl0SetFields

  struct LCDIF_VDCTRL0_SET : ftl::mmio::Register<
      0x40804074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl0SetFields::VSYNC_PULSE_WIDTH,
      LcdifVdctrl0SetFields::HALF_LINE_MODE,
      LcdifVdctrl0SetFields::HALF_LINE,
      LcdifVdctrl0SetFields::VSYNC_PULSE_WIDTH_UNIT,
      LcdifVdctrl0SetFields::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LcdifVdctrl0SetFields::ENABLE_POL,
      LcdifVdctrl0SetFields::DOTCLK_POL,
      LcdifVdctrl0SetFields::HSYNC_POL,
      LcdifVdctrl0SetFields::VSYNC_POL,
      LcdifVdctrl0SetFields::ENABLE_PRESENT,
      LcdifVdctrl0SetFields::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LcdifVdctrl0SetFields::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LcdifVdctrl0SetFields::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LcdifVdctrl0SetFields::HALF_LINE_MODE;
    using HALF_LINE = LcdifVdctrl0SetFields::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LcdifVdctrl0SetFields::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LcdifVdctrl0SetFields::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LcdifVdctrl0SetFields::ENABLE_POL;
    using DOTCLK_POL = LcdifVdctrl0SetFields::DOTCLK_POL;
    using HSYNC_POL = LcdifVdctrl0SetFields::HSYNC_POL;
    using VSYNC_POL = LcdifVdctrl0SetFields::VSYNC_POL;
    using ENABLE_PRESENT = LcdifVdctrl0SetFields::ENABLE_PRESENT;
    using VSYNC_OEB = LcdifVdctrl0SetFields::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LcdifVdctrl0ClrFields {
    enum class eVSYNC_OEB : std::uint32_t {
      // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
      eVSYNC_OUTPUT = 0,
      // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
      eVSYNC_INPUT = 1,
    };

    // Number of units for which VSYNC signal is active
    using VSYNC_PULSE_WIDTH = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    using HALF_LINE_MODE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    using HALF_LINE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PULSE_WIDTH_UNIT = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PERIOD_UNIT = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during valid data transfer on each horizontal line.
    using ENABLE_POL = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default is data launched at negative edge of DOTCLK and captured at positive edge
    using DOTCLK_POL = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    using HSYNC_POL = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    using VSYNC_POL = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    using ENABLE_PRESENT = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0 means the VSYNC signal is an output, 1 means it is an input
    using VSYNC_OEB = ftl::mmio::Field<1, 29, eVSYNC_OEB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl0ClrFields

  struct LCDIF_VDCTRL0_CLR : ftl::mmio::Register<
      0x40804078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl0ClrFields::VSYNC_PULSE_WIDTH,
      LcdifVdctrl0ClrFields::HALF_LINE_MODE,
      LcdifVdctrl0ClrFields::HALF_LINE,
      LcdifVdctrl0ClrFields::VSYNC_PULSE_WIDTH_UNIT,
      LcdifVdctrl0ClrFields::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LcdifVdctrl0ClrFields::ENABLE_POL,
      LcdifVdctrl0ClrFields::DOTCLK_POL,
      LcdifVdctrl0ClrFields::HSYNC_POL,
      LcdifVdctrl0ClrFields::VSYNC_POL,
      LcdifVdctrl0ClrFields::ENABLE_PRESENT,
      LcdifVdctrl0ClrFields::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LcdifVdctrl0ClrFields::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LcdifVdctrl0ClrFields::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LcdifVdctrl0ClrFields::HALF_LINE_MODE;
    using HALF_LINE = LcdifVdctrl0ClrFields::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LcdifVdctrl0ClrFields::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LcdifVdctrl0ClrFields::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LcdifVdctrl0ClrFields::ENABLE_POL;
    using DOTCLK_POL = LcdifVdctrl0ClrFields::DOTCLK_POL;
    using HSYNC_POL = LcdifVdctrl0ClrFields::HSYNC_POL;
    using VSYNC_POL = LcdifVdctrl0ClrFields::VSYNC_POL;
    using ENABLE_PRESENT = LcdifVdctrl0ClrFields::ENABLE_PRESENT;
    using VSYNC_OEB = LcdifVdctrl0ClrFields::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LcdifVdctrl0TogFields {
    enum class eVSYNC_OEB : std::uint32_t {
      // The VSYNC pin is in the output mode and the VSYNC signal has to be generated by the LCDIF block.
      eVSYNC_OUTPUT = 0,
      // The VSYNC pin is in the input mode and the LCD controller sends the VSYNC signal to the block.
      eVSYNC_INPUT = 1,
    };

    // Number of units for which VSYNC signal is active
    using VSYNC_PULSE_WIDTH = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is 0, the first field (VSYNC period) will end in half a horizontal line and the second field will begin with half a horizontal line
    using HALF_LINE_MODE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the total VSYNC period equal to the VSYNC_PERIOD field plus half the HORIZONTAL_PERIOD field (i
    using HALF_LINE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PULSE_WIDTH in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PULSE_WIDTH_UNIT = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 for counting VSYNC_PERIOD in terms of DISPLAY CLOCK (pix_clk) cycles
    using VSYNC_PERIOD_UNIT = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during valid data transfer on each horizontal line.
    using ENABLE_POL = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default is data launched at negative edge of DOTCLK and captured at positive edge
    using DOTCLK_POL = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during HSYNC_PULSE_WIDTH time and will be high during the rest of the HSYNC period
    using HSYNC_POL = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Default 0 active low during VSYNC_PULSE_WIDTH time and will be high during the rest of the VSYNC period
    using VSYNC_POL = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Setting this bit to 1 will make the hardware generate the ENABLE signal in the DOTCLK mode, thereby making it the true RGB interface along with the remaining three signals VSYNC, HSYNC and DOTCLK
    using ENABLE_PRESENT = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0 means the VSYNC signal is an output, 1 means it is an input
    using VSYNC_OEB = ftl::mmio::Field<1, 29, eVSYNC_OEB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl0TogFields

  struct LCDIF_VDCTRL0_TOG : ftl::mmio::Register<
      0x4080407Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl0TogFields::VSYNC_PULSE_WIDTH,
      LcdifVdctrl0TogFields::HALF_LINE_MODE,
      LcdifVdctrl0TogFields::HALF_LINE,
      LcdifVdctrl0TogFields::VSYNC_PULSE_WIDTH_UNIT,
      LcdifVdctrl0TogFields::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LcdifVdctrl0TogFields::ENABLE_POL,
      LcdifVdctrl0TogFields::DOTCLK_POL,
      LcdifVdctrl0TogFields::HSYNC_POL,
      LcdifVdctrl0TogFields::VSYNC_POL,
      LcdifVdctrl0TogFields::ENABLE_PRESENT,
      LcdifVdctrl0TogFields::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LcdifVdctrl0TogFields::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LcdifVdctrl0TogFields::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LcdifVdctrl0TogFields::HALF_LINE_MODE;
    using HALF_LINE = LcdifVdctrl0TogFields::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LcdifVdctrl0TogFields::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LcdifVdctrl0TogFields::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LcdifVdctrl0TogFields::ENABLE_POL;
    using DOTCLK_POL = LcdifVdctrl0TogFields::DOTCLK_POL;
    using HSYNC_POL = LcdifVdctrl0TogFields::HSYNC_POL;
    using VSYNC_POL = LcdifVdctrl0TogFields::VSYNC_POL;
    using ENABLE_PRESENT = LcdifVdctrl0TogFields::ENABLE_PRESENT;
    using VSYNC_OEB = LcdifVdctrl0TogFields::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register1
  struct LcdifVdctrl1Fields {
    // Total number of units between two positive or two negative edges of the VSYNC signal
    using VSYNC_PERIOD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl1Fields

  struct LCDIF_VDCTRL1 : ftl::mmio::Register<
      0x40804080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl1Fields::VSYNC_PERIOD> {
    using VSYNC_PERIOD = LcdifVdctrl1Fields::VSYNC_PERIOD;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register2
  struct LcdifVdctrl2Fields {
    // Total number of DISPLAY CLOCK (pix_clk) cycles between two positive or two negative edges of the HSYNC signal
    using HSYNC_PERIOD = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of DISPLAY CLOCK (pix_clk) cycles for which HSYNC signal is active.
    using HSYNC_PULSE_WIDTH = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl2Fields

  struct LCDIF_VDCTRL2 : ftl::mmio::Register<
      0x40804090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl2Fields::HSYNC_PERIOD,
      LcdifVdctrl2Fields::HSYNC_PULSE_WIDTH> {
    using HSYNC_PERIOD = LcdifVdctrl2Fields::HSYNC_PERIOD;
    using HSYNC_PULSE_WIDTH = LcdifVdctrl2Fields::HSYNC_PULSE_WIDTH;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register3
  struct LcdifVdctrl3Fields {
    // In the VSYNC interface mode, wait for this number of DISPLAY CLOCK (pix_clk) cycles from the falling VSYNC edge (or rising if VSYNC_POL is 1) before starting LCD transactions and is applicable only if WAIT_FOR_VSYNC_EDGE is set
    using VERTICAL_WAIT_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // In the DOTCLK mode, wait for this number of clocks from falling edge (or rising if HSYNC_POL is 1) of HSYNC signal to account for horizontal back porch plus the number of DOTCLKs before the moving picture information begins
    using HORIZONTAL_WAIT_CNT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to 1 in the VSYNC mode of operation, and 0 in the DOTCLK mode of operation.
    using VSYNC_ONLY = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is set, the LCDIF block will internally mux HSYNC with LCD_D14, DOTCLK with LCD_D13 and ENABLE with LCD_D12, otherwise these signals will go out on separate pins
    using MUX_SYNC_SIGNALS = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl3Fields

  struct LCDIF_VDCTRL3 : ftl::mmio::Register<
      0x408040A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl3Fields::VERTICAL_WAIT_CNT,
      LcdifVdctrl3Fields::HORIZONTAL_WAIT_CNT,
      LcdifVdctrl3Fields::VSYNC_ONLY,
      LcdifVdctrl3Fields::MUX_SYNC_SIGNALS,
      ftl::mmio::Reserved<2, 30>> {
    using VERTICAL_WAIT_CNT = LcdifVdctrl3Fields::VERTICAL_WAIT_CNT;
    using HORIZONTAL_WAIT_CNT = LcdifVdctrl3Fields::HORIZONTAL_WAIT_CNT;
    using VSYNC_ONLY = LcdifVdctrl3Fields::VSYNC_ONLY;
    using MUX_SYNC_SIGNALS = LcdifVdctrl3Fields::MUX_SYNC_SIGNALS;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register4
  struct LcdifVdctrl4Fields {
    // Total number of DISPLAY CLOCK (pix_clk) cycles on each horizontal line that carry valid data in DOTCLK mode
    using DOTCLK_H_VALID_DATA_CNT = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this field to 1 if the LCD controller requires that the VSYNC or VSYNC/HSYNC/DOTCLK control signals should be active at least one frame before the data transfers actually start and remain active at least one frame after the data transfers end
    using SYNC_SIGNALS_ON = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield selects the amount of time by which the DOTCLK signal should be delayed before coming out of the LCD_DOTCK pin
    using DOTCLK_DLY_SEL = ftl::mmio::Field<3, 29, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifVdctrl4Fields

  struct LCDIF_VDCTRL4 : ftl::mmio::Register<
      0x408040B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifVdctrl4Fields::DOTCLK_H_VALID_DATA_CNT,
      LcdifVdctrl4Fields::SYNC_SIGNALS_ON,
      ftl::mmio::Reserved<10, 19>,
      LcdifVdctrl4Fields::DOTCLK_DLY_SEL> {
    using DOTCLK_H_VALID_DATA_CNT = LcdifVdctrl4Fields::DOTCLK_H_VALID_DATA_CNT;
    using SYNC_SIGNALS_ON = LcdifVdctrl4Fields::SYNC_SIGNALS_ON;
    using DOTCLK_DLY_SEL = LcdifVdctrl4Fields::DOTCLK_DLY_SEL;
  };

  // Bus Master Error Status Register
  struct LcdifBmErrorStatFields {
    // Virtual address at which bus master error occurred.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifBmErrorStatFields

  struct LCDIF_BM_ERROR_STAT : ftl::mmio::Register<
      0x40804190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifBmErrorStatFields::ADDR> {
    using ADDR = LcdifBmErrorStatFields::ADDR;
  };

  // CRC Status Register
  struct LcdifCrcStatFields {
    // Calculated CRC value.
    using CRC_VALUE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifCrcStatFields

  struct LCDIF_CRC_STAT : ftl::mmio::Register<
      0x408041A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifCrcStatFields::CRC_VALUE> {
    using CRC_VALUE = LcdifCrcStatFields::CRC_VALUE;
  };

  // LCD Interface Status Register
  struct LcdifStatFields {
    // Read only view of the current count in Latency buffer (LFIFO).
    using LFIFO_COUNT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read only view of the signals that indicates LCD TXFIFO is empty.
    using TXFIFO_EMPTY = ftl::mmio::Field<1, 26, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read only view of the signals that indicates LCD TXFIFO is full.
    using TXFIFO_FULL = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read only view of the signals that indicates LCD LFIFO is empty.
    using LFIFO_EMPTY = ftl::mmio::Field<1, 28, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read only view of the signals that indicates LCD LFIFO is full.
    using LFIFO_FULL = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reflects the current state of the DMA Request line for the LCDIF
    using DMA_REQ = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // 0: LCDIF not present on this product 1: LCDIF is present.
    using PRESENT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LcdifStatFields

  struct LCDIF_STAT : ftl::mmio::Register<
      0x408041B0u,
      std::uint32_t,
      0x95000000u,
      ftl::mmio::RO,
      LcdifStatFields::LFIFO_COUNT,
      ftl::mmio::Reserved<17, 9>,
      LcdifStatFields::TXFIFO_EMPTY,
      LcdifStatFields::TXFIFO_FULL,
      LcdifStatFields::LFIFO_EMPTY,
      LcdifStatFields::LFIFO_FULL,
      LcdifStatFields::DMA_REQ,
      LcdifStatFields::PRESENT> {
    using LFIFO_COUNT = LcdifStatFields::LFIFO_COUNT;
    using TXFIFO_EMPTY = LcdifStatFields::TXFIFO_EMPTY;
    using TXFIFO_FULL = LcdifStatFields::TXFIFO_FULL;
    using LFIFO_EMPTY = LcdifStatFields::LFIFO_EMPTY;
    using LFIFO_FULL = LcdifStatFields::LFIFO_FULL;
    using DMA_REQ = LcdifStatFields::DMA_REQ;
    using PRESENT = LcdifStatFields::PRESENT;
  };

  // LCDIF Threshold Register
  struct LcdifThresFields {
    // This value should be set to a value of pixels, from 0 to 511
    using FASTCLOCK = ftl::mmio::Field<9, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifThresFields

  struct LCDIF_THRES : ftl::mmio::Register<
      0x40804200u,
      std::uint32_t,
      0x0100000Fu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<16, 0>,
      LcdifThresFields::FASTCLOCK,
      ftl::mmio::Reserved<7, 25>> {
    using FASTCLOCK = LcdifThresFields::FASTCLOCK;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LcdifPigeonctrl0Fields {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl0Fields

  struct LCDIF_PIGEONCTRL0 : ftl::mmio::Register<
      0x40804380u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl0Fields::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl0Fields::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LcdifPigeonctrl0Fields::FD_PERIOD;
    using LD_PERIOD = LcdifPigeonctrl0Fields::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LcdifPigeonctrl0SetFields {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl0SetFields

  struct LCDIF_PIGEONCTRL0_SET : ftl::mmio::Register<
      0x40804384u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl0SetFields::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl0SetFields::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LcdifPigeonctrl0SetFields::FD_PERIOD;
    using LD_PERIOD = LcdifPigeonctrl0SetFields::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LcdifPigeonctrl0ClrFields {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl0ClrFields

  struct LCDIF_PIGEONCTRL0_CLR : ftl::mmio::Register<
      0x40804388u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl0ClrFields::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl0ClrFields::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LcdifPigeonctrl0ClrFields::FD_PERIOD;
    using LD_PERIOD = LcdifPigeonctrl0ClrFields::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LcdifPigeonctrl0TogFields {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl0TogFields

  struct LCDIF_PIGEONCTRL0_TOG : ftl::mmio::Register<
      0x4080438Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl0TogFields::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl0TogFields::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LcdifPigeonctrl0TogFields::FD_PERIOD;
    using LD_PERIOD = LcdifPigeonctrl0TogFields::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LcdifPigeonctrl1Fields {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl1Fields

  struct LCDIF_PIGEONCTRL1 : ftl::mmio::Register<
      0x40804390u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl1Fields::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl1Fields::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LcdifPigeonctrl1Fields::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LcdifPigeonctrl1Fields::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LcdifPigeonctrl1SetFields {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl1SetFields

  struct LCDIF_PIGEONCTRL1_SET : ftl::mmio::Register<
      0x40804394u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl1SetFields::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl1SetFields::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LcdifPigeonctrl1SetFields::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LcdifPigeonctrl1SetFields::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LcdifPigeonctrl1ClrFields {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl1ClrFields

  struct LCDIF_PIGEONCTRL1_CLR : ftl::mmio::Register<
      0x40804398u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl1ClrFields::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl1ClrFields::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LcdifPigeonctrl1ClrFields::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LcdifPigeonctrl1ClrFields::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LcdifPigeonctrl1TogFields {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl1TogFields

  struct LCDIF_PIGEONCTRL1_TOG : ftl::mmio::Register<
      0x4080439Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl1TogFields::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LcdifPigeonctrl1TogFields::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LcdifPigeonctrl1TogFields::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LcdifPigeonctrl1TogFields::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LcdifPigeonctrl2Fields {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl2Fields

  struct LCDIF_PIGEONCTRL2 : ftl::mmio::Register<
      0x408043A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl2Fields::PIGEON_DATA_EN,
      LcdifPigeonctrl2Fields::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LcdifPigeonctrl2Fields::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LcdifPigeonctrl2Fields::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LcdifPigeonctrl2SetFields {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl2SetFields

  struct LCDIF_PIGEONCTRL2_SET : ftl::mmio::Register<
      0x408043A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl2SetFields::PIGEON_DATA_EN,
      LcdifPigeonctrl2SetFields::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LcdifPigeonctrl2SetFields::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LcdifPigeonctrl2SetFields::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LcdifPigeonctrl2ClrFields {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl2ClrFields

  struct LCDIF_PIGEONCTRL2_CLR : ftl::mmio::Register<
      0x408043A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl2ClrFields::PIGEON_DATA_EN,
      LcdifPigeonctrl2ClrFields::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LcdifPigeonctrl2ClrFields::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LcdifPigeonctrl2ClrFields::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LcdifPigeonctrl2TogFields {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeonctrl2TogFields

  struct LCDIF_PIGEONCTRL2_TOG : ftl::mmio::Register<
      0x408043ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeonctrl2TogFields::PIGEON_DATA_EN,
      LcdifPigeonctrl2TogFields::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LcdifPigeonctrl2TogFields::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LcdifPigeonctrl2TogFields::PIGEON_CLK_GATE;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon00Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon00Fields

  struct LCDIF_PIGEON_0_0 : ftl::mmio::Register<
      0x40804800u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon00Fields::EN,
      LcdifPigeon00Fields::POL,
      LcdifPigeon00Fields::INC_SEL,
      LcdifPigeon00Fields::OFFSET,
      LcdifPigeon00Fields::MASK_CNT_SEL,
      LcdifPigeon00Fields::MASK_CNT,
      LcdifPigeon00Fields::STATE_MASK> {
    using ePOL = LcdifPigeon00Fields::ePOL;
    using eINC_SEL = LcdifPigeon00Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon00Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon00Fields::eSTATE_MASK;
    using EN = LcdifPigeon00Fields::EN;
    using POL = LcdifPigeon00Fields::POL;
    using INC_SEL = LcdifPigeon00Fields::INC_SEL;
    using OFFSET = LcdifPigeon00Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon00Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon00Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon00Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon01Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon01Fields

  struct LCDIF_PIGEON_0_1 : ftl::mmio::Register<
      0x40804810u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon01Fields::SET_CNT,
      LcdifPigeon01Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon01Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon01Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon01Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon01Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon02Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon02Fields

  struct LCDIF_PIGEON_0_2 : ftl::mmio::Register<
      0x40804820u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon02Fields::SIG_LOGIC,
      LcdifPigeon02Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon02Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon02Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon02Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon02Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon10Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon10Fields

  struct LCDIF_PIGEON_1_0 : ftl::mmio::Register<
      0x40804840u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon10Fields::EN,
      LcdifPigeon10Fields::POL,
      LcdifPigeon10Fields::INC_SEL,
      LcdifPigeon10Fields::OFFSET,
      LcdifPigeon10Fields::MASK_CNT_SEL,
      LcdifPigeon10Fields::MASK_CNT,
      LcdifPigeon10Fields::STATE_MASK> {
    using ePOL = LcdifPigeon10Fields::ePOL;
    using eINC_SEL = LcdifPigeon10Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon10Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon10Fields::eSTATE_MASK;
    using EN = LcdifPigeon10Fields::EN;
    using POL = LcdifPigeon10Fields::POL;
    using INC_SEL = LcdifPigeon10Fields::INC_SEL;
    using OFFSET = LcdifPigeon10Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon10Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon10Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon10Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon11Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon11Fields

  struct LCDIF_PIGEON_1_1 : ftl::mmio::Register<
      0x40804850u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon11Fields::SET_CNT,
      LcdifPigeon11Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon11Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon11Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon11Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon11Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon12Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon12Fields

  struct LCDIF_PIGEON_1_2 : ftl::mmio::Register<
      0x40804860u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon12Fields::SIG_LOGIC,
      LcdifPigeon12Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon12Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon12Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon12Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon12Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon20Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon20Fields

  struct LCDIF_PIGEON_2_0 : ftl::mmio::Register<
      0x40804880u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon20Fields::EN,
      LcdifPigeon20Fields::POL,
      LcdifPigeon20Fields::INC_SEL,
      LcdifPigeon20Fields::OFFSET,
      LcdifPigeon20Fields::MASK_CNT_SEL,
      LcdifPigeon20Fields::MASK_CNT,
      LcdifPigeon20Fields::STATE_MASK> {
    using ePOL = LcdifPigeon20Fields::ePOL;
    using eINC_SEL = LcdifPigeon20Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon20Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon20Fields::eSTATE_MASK;
    using EN = LcdifPigeon20Fields::EN;
    using POL = LcdifPigeon20Fields::POL;
    using INC_SEL = LcdifPigeon20Fields::INC_SEL;
    using OFFSET = LcdifPigeon20Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon20Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon20Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon20Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon21Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon21Fields

  struct LCDIF_PIGEON_2_1 : ftl::mmio::Register<
      0x40804890u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon21Fields::SET_CNT,
      LcdifPigeon21Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon21Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon21Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon21Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon21Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon22Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon22Fields

  struct LCDIF_PIGEON_2_2 : ftl::mmio::Register<
      0x408048A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon22Fields::SIG_LOGIC,
      LcdifPigeon22Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon22Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon22Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon22Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon22Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon30Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon30Fields

  struct LCDIF_PIGEON_3_0 : ftl::mmio::Register<
      0x408048C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon30Fields::EN,
      LcdifPigeon30Fields::POL,
      LcdifPigeon30Fields::INC_SEL,
      LcdifPigeon30Fields::OFFSET,
      LcdifPigeon30Fields::MASK_CNT_SEL,
      LcdifPigeon30Fields::MASK_CNT,
      LcdifPigeon30Fields::STATE_MASK> {
    using ePOL = LcdifPigeon30Fields::ePOL;
    using eINC_SEL = LcdifPigeon30Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon30Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon30Fields::eSTATE_MASK;
    using EN = LcdifPigeon30Fields::EN;
    using POL = LcdifPigeon30Fields::POL;
    using INC_SEL = LcdifPigeon30Fields::INC_SEL;
    using OFFSET = LcdifPigeon30Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon30Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon30Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon30Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon31Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon31Fields

  struct LCDIF_PIGEON_3_1 : ftl::mmio::Register<
      0x408048D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon31Fields::SET_CNT,
      LcdifPigeon31Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon31Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon31Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon31Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon31Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon32Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon32Fields

  struct LCDIF_PIGEON_3_2 : ftl::mmio::Register<
      0x408048E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon32Fields::SIG_LOGIC,
      LcdifPigeon32Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon32Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon32Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon32Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon32Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon40Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon40Fields

  struct LCDIF_PIGEON_4_0 : ftl::mmio::Register<
      0x40804900u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon40Fields::EN,
      LcdifPigeon40Fields::POL,
      LcdifPigeon40Fields::INC_SEL,
      LcdifPigeon40Fields::OFFSET,
      LcdifPigeon40Fields::MASK_CNT_SEL,
      LcdifPigeon40Fields::MASK_CNT,
      LcdifPigeon40Fields::STATE_MASK> {
    using ePOL = LcdifPigeon40Fields::ePOL;
    using eINC_SEL = LcdifPigeon40Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon40Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon40Fields::eSTATE_MASK;
    using EN = LcdifPigeon40Fields::EN;
    using POL = LcdifPigeon40Fields::POL;
    using INC_SEL = LcdifPigeon40Fields::INC_SEL;
    using OFFSET = LcdifPigeon40Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon40Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon40Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon40Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon41Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon41Fields

  struct LCDIF_PIGEON_4_1 : ftl::mmio::Register<
      0x40804910u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon41Fields::SET_CNT,
      LcdifPigeon41Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon41Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon41Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon41Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon41Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon42Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon42Fields

  struct LCDIF_PIGEON_4_2 : ftl::mmio::Register<
      0x40804920u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon42Fields::SIG_LOGIC,
      LcdifPigeon42Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon42Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon42Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon42Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon42Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon50Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon50Fields

  struct LCDIF_PIGEON_5_0 : ftl::mmio::Register<
      0x40804940u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon50Fields::EN,
      LcdifPigeon50Fields::POL,
      LcdifPigeon50Fields::INC_SEL,
      LcdifPigeon50Fields::OFFSET,
      LcdifPigeon50Fields::MASK_CNT_SEL,
      LcdifPigeon50Fields::MASK_CNT,
      LcdifPigeon50Fields::STATE_MASK> {
    using ePOL = LcdifPigeon50Fields::ePOL;
    using eINC_SEL = LcdifPigeon50Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon50Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon50Fields::eSTATE_MASK;
    using EN = LcdifPigeon50Fields::EN;
    using POL = LcdifPigeon50Fields::POL;
    using INC_SEL = LcdifPigeon50Fields::INC_SEL;
    using OFFSET = LcdifPigeon50Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon50Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon50Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon50Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon51Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon51Fields

  struct LCDIF_PIGEON_5_1 : ftl::mmio::Register<
      0x40804950u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon51Fields::SET_CNT,
      LcdifPigeon51Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon51Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon51Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon51Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon51Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon52Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon52Fields

  struct LCDIF_PIGEON_5_2 : ftl::mmio::Register<
      0x40804960u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon52Fields::SIG_LOGIC,
      LcdifPigeon52Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon52Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon52Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon52Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon52Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon60Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon60Fields

  struct LCDIF_PIGEON_6_0 : ftl::mmio::Register<
      0x40804980u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon60Fields::EN,
      LcdifPigeon60Fields::POL,
      LcdifPigeon60Fields::INC_SEL,
      LcdifPigeon60Fields::OFFSET,
      LcdifPigeon60Fields::MASK_CNT_SEL,
      LcdifPigeon60Fields::MASK_CNT,
      LcdifPigeon60Fields::STATE_MASK> {
    using ePOL = LcdifPigeon60Fields::ePOL;
    using eINC_SEL = LcdifPigeon60Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon60Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon60Fields::eSTATE_MASK;
    using EN = LcdifPigeon60Fields::EN;
    using POL = LcdifPigeon60Fields::POL;
    using INC_SEL = LcdifPigeon60Fields::INC_SEL;
    using OFFSET = LcdifPigeon60Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon60Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon60Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon60Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon61Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon61Fields

  struct LCDIF_PIGEON_6_1 : ftl::mmio::Register<
      0x40804990u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon61Fields::SET_CNT,
      LcdifPigeon61Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon61Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon61Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon61Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon61Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon62Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon62Fields

  struct LCDIF_PIGEON_6_2 : ftl::mmio::Register<
      0x408049A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon62Fields::SIG_LOGIC,
      LcdifPigeon62Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon62Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon62Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon62Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon62Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon70Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon70Fields

  struct LCDIF_PIGEON_7_0 : ftl::mmio::Register<
      0x408049C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon70Fields::EN,
      LcdifPigeon70Fields::POL,
      LcdifPigeon70Fields::INC_SEL,
      LcdifPigeon70Fields::OFFSET,
      LcdifPigeon70Fields::MASK_CNT_SEL,
      LcdifPigeon70Fields::MASK_CNT,
      LcdifPigeon70Fields::STATE_MASK> {
    using ePOL = LcdifPigeon70Fields::ePOL;
    using eINC_SEL = LcdifPigeon70Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon70Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon70Fields::eSTATE_MASK;
    using EN = LcdifPigeon70Fields::EN;
    using POL = LcdifPigeon70Fields::POL;
    using INC_SEL = LcdifPigeon70Fields::INC_SEL;
    using OFFSET = LcdifPigeon70Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon70Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon70Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon70Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon71Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon71Fields

  struct LCDIF_PIGEON_7_1 : ftl::mmio::Register<
      0x408049D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon71Fields::SET_CNT,
      LcdifPigeon71Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon71Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon71Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon71Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon71Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon72Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon72Fields

  struct LCDIF_PIGEON_7_2 : ftl::mmio::Register<
      0x408049E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon72Fields::SIG_LOGIC,
      LcdifPigeon72Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon72Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon72Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon72Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon72Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon80Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon80Fields

  struct LCDIF_PIGEON_8_0 : ftl::mmio::Register<
      0x40804A00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon80Fields::EN,
      LcdifPigeon80Fields::POL,
      LcdifPigeon80Fields::INC_SEL,
      LcdifPigeon80Fields::OFFSET,
      LcdifPigeon80Fields::MASK_CNT_SEL,
      LcdifPigeon80Fields::MASK_CNT,
      LcdifPigeon80Fields::STATE_MASK> {
    using ePOL = LcdifPigeon80Fields::ePOL;
    using eINC_SEL = LcdifPigeon80Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon80Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon80Fields::eSTATE_MASK;
    using EN = LcdifPigeon80Fields::EN;
    using POL = LcdifPigeon80Fields::POL;
    using INC_SEL = LcdifPigeon80Fields::INC_SEL;
    using OFFSET = LcdifPigeon80Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon80Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon80Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon80Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon81Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon81Fields

  struct LCDIF_PIGEON_8_1 : ftl::mmio::Register<
      0x40804A10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon81Fields::SET_CNT,
      LcdifPigeon81Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon81Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon81Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon81Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon81Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon82Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon82Fields

  struct LCDIF_PIGEON_8_2 : ftl::mmio::Register<
      0x40804A20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon82Fields::SIG_LOGIC,
      LcdifPigeon82Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon82Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon82Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon82Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon82Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon90Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon90Fields

  struct LCDIF_PIGEON_9_0 : ftl::mmio::Register<
      0x40804A40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon90Fields::EN,
      LcdifPigeon90Fields::POL,
      LcdifPigeon90Fields::INC_SEL,
      LcdifPigeon90Fields::OFFSET,
      LcdifPigeon90Fields::MASK_CNT_SEL,
      LcdifPigeon90Fields::MASK_CNT,
      LcdifPigeon90Fields::STATE_MASK> {
    using ePOL = LcdifPigeon90Fields::ePOL;
    using eINC_SEL = LcdifPigeon90Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon90Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon90Fields::eSTATE_MASK;
    using EN = LcdifPigeon90Fields::EN;
    using POL = LcdifPigeon90Fields::POL;
    using INC_SEL = LcdifPigeon90Fields::INC_SEL;
    using OFFSET = LcdifPigeon90Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon90Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon90Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon90Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon91Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon91Fields

  struct LCDIF_PIGEON_9_1 : ftl::mmio::Register<
      0x40804A50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon91Fields::SET_CNT,
      LcdifPigeon91Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon91Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon91Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon91Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon91Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon92Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon92Fields

  struct LCDIF_PIGEON_9_2 : ftl::mmio::Register<
      0x40804A60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon92Fields::SIG_LOGIC,
      LcdifPigeon92Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon92Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon92Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon92Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon92Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon100Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon100Fields

  struct LCDIF_PIGEON_10_0 : ftl::mmio::Register<
      0x40804A80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon100Fields::EN,
      LcdifPigeon100Fields::POL,
      LcdifPigeon100Fields::INC_SEL,
      LcdifPigeon100Fields::OFFSET,
      LcdifPigeon100Fields::MASK_CNT_SEL,
      LcdifPigeon100Fields::MASK_CNT,
      LcdifPigeon100Fields::STATE_MASK> {
    using ePOL = LcdifPigeon100Fields::ePOL;
    using eINC_SEL = LcdifPigeon100Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon100Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon100Fields::eSTATE_MASK;
    using EN = LcdifPigeon100Fields::EN;
    using POL = LcdifPigeon100Fields::POL;
    using INC_SEL = LcdifPigeon100Fields::INC_SEL;
    using OFFSET = LcdifPigeon100Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon100Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon100Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon100Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon101Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon101Fields

  struct LCDIF_PIGEON_10_1 : ftl::mmio::Register<
      0x40804A90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon101Fields::SET_CNT,
      LcdifPigeon101Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon101Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon101Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon101Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon101Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon102Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon102Fields

  struct LCDIF_PIGEON_10_2 : ftl::mmio::Register<
      0x40804AA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon102Fields::SIG_LOGIC,
      LcdifPigeon102Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon102Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon102Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon102Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon102Fields::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon110Fields {
    enum class ePOL : std::uint32_t {
      // Normal Signal (Active high)
      eACTIVE_HIGH = 0,
      // Inverted signal (Active low)
      eACTIVE_LOW = 1,
    };

    enum class eINC_SEL : std::uint32_t {
      // pclk
      ePCLK = 0,
      // Line start pulse
      eLINE = 1,
      // Frame start pulse
      eFRAME = 2,
      // Use another signal as tick event
      eSIG_ANOTHER = 3,
    };

    enum class eMASK_CNT_SEL : std::uint32_t {
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

    enum class eSTATE_MASK : std::uint32_t {
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

    // Enable pigeon Mode on this signal
    using EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of signal output
    using POL = ftl::mmio::Field<1, 1, ePOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Event to incrment local counter
    using INC_SEL = ftl::mmio::Field<2, 2, eINC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // offset on pclk unit
    using OFFSET = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // select global counters as mask condition, use together with MASK_CNT
    using MASK_CNT_SEL = ftl::mmio::Field<4, 8, eMASK_CNT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // When the global counter selected through MASK_CNT_SEL matches value in this reg, pigeon local counter start ticking
    using MASK_CNT = ftl::mmio::Field<12, 12, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // state_mask = (FS|FB|FD|FE) and (LS|LB|LD|LE) , select any combination of scan states as reference point for local counter to start ticking
    using STATE_MASK = ftl::mmio::Field<8, 24, eSTATE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon110Fields

  struct LCDIF_PIGEON_11_0 : ftl::mmio::Register<
      0x40804AC0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon110Fields::EN,
      LcdifPigeon110Fields::POL,
      LcdifPigeon110Fields::INC_SEL,
      LcdifPigeon110Fields::OFFSET,
      LcdifPigeon110Fields::MASK_CNT_SEL,
      LcdifPigeon110Fields::MASK_CNT,
      LcdifPigeon110Fields::STATE_MASK> {
    using ePOL = LcdifPigeon110Fields::ePOL;
    using eINC_SEL = LcdifPigeon110Fields::eINC_SEL;
    using eMASK_CNT_SEL = LcdifPigeon110Fields::eMASK_CNT_SEL;
    using eSTATE_MASK = LcdifPigeon110Fields::eSTATE_MASK;
    using EN = LcdifPigeon110Fields::EN;
    using POL = LcdifPigeon110Fields::POL;
    using INC_SEL = LcdifPigeon110Fields::INC_SEL;
    using OFFSET = LcdifPigeon110Fields::OFFSET;
    using MASK_CNT_SEL = LcdifPigeon110Fields::MASK_CNT_SEL;
    using MASK_CNT = LcdifPigeon110Fields::MASK_CNT;
    using STATE_MASK = LcdifPigeon110Fields::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon111Fields {
    enum class eSET_CNT : std::uint32_t {
      // Start as active
      eSTART_ACTIVE = 0,
    };

    enum class eCLR_CNT : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Assert signal output when counter match this value
    using SET_CNT = ftl::mmio::Field<16, 0, eSET_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deassert signal output when counter match this value
    using CLR_CNT = ftl::mmio::Field<16, 16, eCLR_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon111Fields

  struct LCDIF_PIGEON_11_1 : ftl::mmio::Register<
      0x40804AD0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon111Fields::SET_CNT,
      LcdifPigeon111Fields::CLR_CNT> {
    using eSET_CNT = LcdifPigeon111Fields::eSET_CNT;
    using eCLR_CNT = LcdifPigeon111Fields::eCLR_CNT;
    using SET_CNT = LcdifPigeon111Fields::SET_CNT;
    using CLR_CNT = LcdifPigeon111Fields::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LcdifPigeon112Fields {
    enum class eSIG_LOGIC : std::uint32_t {
      // No logic operation
      eDIS = 0,
      // sigout = sig_another AND this_sig
      eAND = 1,
      // sigout = sig_another OR this_sig
      eOR = 2,
      // mask = sig_another AND other_masks
      eMASK = 3,
    };

    enum class eSIG_ANOTHER : std::uint32_t {
      // Keep active until mask off
      eCLEAR_USING_MASK = 0,
    };

    // Logic operation with another signal: DIS/AND/OR/COND
    using SIG_LOGIC = ftl::mmio::Field<4, 0, eSIG_LOGIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select another signal for logic operation or as mask or counter tick event
    using SIG_ANOTHER = ftl::mmio::Field<5, 4, eSIG_ANOTHER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifPigeon112Fields

  struct LCDIF_PIGEON_11_2 : ftl::mmio::Register<
      0x40804AE0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifPigeon112Fields::SIG_LOGIC,
      LcdifPigeon112Fields::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LcdifPigeon112Fields::eSIG_LOGIC;
    using eSIG_ANOTHER = LcdifPigeon112Fields::eSIG_ANOTHER;
    using SIG_LOGIC = LcdifPigeon112Fields::SIG_LOGIC;
    using SIG_ANOTHER = LcdifPigeon112Fields::SIG_ANOTHER;
  };

  // Look Up Table Control Register
  struct LcdifLutCtrlFields {
    // Setting this bit will bypass the LUT memory resource completely
    using LUT_BYPASS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifLutCtrlFields

  struct LCDIF_LUT_CTRL : ftl::mmio::Register<
      0x40804B00u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      LcdifLutCtrlFields::LUT_BYPASS,
      ftl::mmio::Reserved<31, 1>> {
    using LUT_BYPASS = LcdifLutCtrlFields::LUT_BYPASS;
  };

  // Lookup Table 0 Index Register
  struct LcdifLut0AddrFields {
    // LUT indexed address pointer
    using ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifLut0AddrFields

  struct LCDIF_LUT0_ADDR : ftl::mmio::Register<
      0x40804B10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifLut0AddrFields::ADDR,
      ftl::mmio::Reserved<24, 8>> {
    using ADDR = LcdifLut0AddrFields::ADDR;
  };

  // Lookup Table 0 Data Register
  struct LcdifLut0DataFields {
    // Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifLut0DataFields

  struct LCDIF_LUT0_DATA : ftl::mmio::Register<
      0x40804B20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifLut0DataFields::DATA> {
    using DATA = LcdifLut0DataFields::DATA;
  };

  // Lookup Table 1 Index Register
  struct LcdifLut1AddrFields {
    // LUT indexed address pointer
    using ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifLut1AddrFields

  struct LCDIF_LUT1_ADDR : ftl::mmio::Register<
      0x40804B30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifLut1AddrFields::ADDR,
      ftl::mmio::Reserved<24, 8>> {
    using ADDR = LcdifLut1AddrFields::ADDR;
  };

  // Lookup Table 1 Data Register
  struct LcdifLut1DataFields {
    // Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcdifLut1DataFields

  struct LCDIF_LUT1_DATA : ftl::mmio::Register<
      0x40804B40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LcdifLut1DataFields::DATA> {
    using DATA = LcdifLut1DataFields::DATA;
  };

};

}  // namespace regs