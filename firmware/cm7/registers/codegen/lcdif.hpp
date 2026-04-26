#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LCDIF Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Lcdif {
  // LCDIF General Control Register
  struct LCDIF_CTRL_fields_ {
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
  };  // struct LCDIF_CTRL_fields_

  struct LCDIF_CTRL : ftl::mmio::Register<
      0x40804000u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LCDIF_CTRL_fields_::RUN,
      LCDIF_CTRL_fields_::DATA_FORMAT_24_BIT,
      LCDIF_CTRL_fields_::DATA_FORMAT_18_BIT,
      LCDIF_CTRL_fields_::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LCDIF_CTRL_fields_::MASTER,
      LCDIF_CTRL_fields_::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LCDIF_CTRL_fields_::WORD_LENGTH,
      LCDIF_CTRL_fields_::LCD_DATABUS_WIDTH,
      LCDIF_CTRL_fields_::CSC_DATA_SWIZZLE,
      LCDIF_CTRL_fields_::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LCDIF_CTRL_fields_::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LCDIF_CTRL_fields_::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LCDIF_CTRL_fields_::SHIFT_NUM_BITS,
      LCDIF_CTRL_fields_::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL_fields_::CLKGATE,
      LCDIF_CTRL_fields_::SFTRST> {
    using eDATA_FORMAT_24_BIT = LCDIF_CTRL_fields_::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LCDIF_CTRL_fields_::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LCDIF_CTRL_fields_::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LCDIF_CTRL_fields_::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LCDIF_CTRL_fields_::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LCDIF_CTRL_fields_::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LCDIF_CTRL_fields_::eDATA_SHIFT_DIR;
    using RUN = LCDIF_CTRL_fields_::RUN;
    using DATA_FORMAT_24_BIT = LCDIF_CTRL_fields_::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LCDIF_CTRL_fields_::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LCDIF_CTRL_fields_::DATA_FORMAT_16_BIT;
    using MASTER = LCDIF_CTRL_fields_::MASTER;
    using ENABLE_PXP_HANDSHAKE = LCDIF_CTRL_fields_::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LCDIF_CTRL_fields_::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LCDIF_CTRL_fields_::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LCDIF_CTRL_fields_::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LCDIF_CTRL_fields_::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LCDIF_CTRL_fields_::DOTCLK_MODE;
    using BYPASS_COUNT = LCDIF_CTRL_fields_::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LCDIF_CTRL_fields_::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LCDIF_CTRL_fields_::DATA_SHIFT_DIR;
    using CLKGATE = LCDIF_CTRL_fields_::CLKGATE;
    using SFTRST = LCDIF_CTRL_fields_::SFTRST;
  };

  // LCDIF General Control Register
  struct LCDIF_CTRL_SET_fields_ {
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
  };  // struct LCDIF_CTRL_SET_fields_

  struct LCDIF_CTRL_SET : ftl::mmio::Register<
      0x40804004u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LCDIF_CTRL_SET_fields_::RUN,
      LCDIF_CTRL_SET_fields_::DATA_FORMAT_24_BIT,
      LCDIF_CTRL_SET_fields_::DATA_FORMAT_18_BIT,
      LCDIF_CTRL_SET_fields_::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LCDIF_CTRL_SET_fields_::MASTER,
      LCDIF_CTRL_SET_fields_::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LCDIF_CTRL_SET_fields_::WORD_LENGTH,
      LCDIF_CTRL_SET_fields_::LCD_DATABUS_WIDTH,
      LCDIF_CTRL_SET_fields_::CSC_DATA_SWIZZLE,
      LCDIF_CTRL_SET_fields_::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LCDIF_CTRL_SET_fields_::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LCDIF_CTRL_SET_fields_::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LCDIF_CTRL_SET_fields_::SHIFT_NUM_BITS,
      LCDIF_CTRL_SET_fields_::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL_SET_fields_::CLKGATE,
      LCDIF_CTRL_SET_fields_::SFTRST> {
    using eDATA_FORMAT_24_BIT = LCDIF_CTRL_SET_fields_::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LCDIF_CTRL_SET_fields_::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LCDIF_CTRL_SET_fields_::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LCDIF_CTRL_SET_fields_::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LCDIF_CTRL_SET_fields_::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LCDIF_CTRL_SET_fields_::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LCDIF_CTRL_SET_fields_::eDATA_SHIFT_DIR;
    using RUN = LCDIF_CTRL_SET_fields_::RUN;
    using DATA_FORMAT_24_BIT = LCDIF_CTRL_SET_fields_::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LCDIF_CTRL_SET_fields_::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LCDIF_CTRL_SET_fields_::DATA_FORMAT_16_BIT;
    using MASTER = LCDIF_CTRL_SET_fields_::MASTER;
    using ENABLE_PXP_HANDSHAKE = LCDIF_CTRL_SET_fields_::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LCDIF_CTRL_SET_fields_::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LCDIF_CTRL_SET_fields_::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LCDIF_CTRL_SET_fields_::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LCDIF_CTRL_SET_fields_::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LCDIF_CTRL_SET_fields_::DOTCLK_MODE;
    using BYPASS_COUNT = LCDIF_CTRL_SET_fields_::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LCDIF_CTRL_SET_fields_::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LCDIF_CTRL_SET_fields_::DATA_SHIFT_DIR;
    using CLKGATE = LCDIF_CTRL_SET_fields_::CLKGATE;
    using SFTRST = LCDIF_CTRL_SET_fields_::SFTRST;
  };

  // LCDIF General Control Register
  struct LCDIF_CTRL_CLR_fields_ {
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
  };  // struct LCDIF_CTRL_CLR_fields_

  struct LCDIF_CTRL_CLR : ftl::mmio::Register<
      0x40804008u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LCDIF_CTRL_CLR_fields_::RUN,
      LCDIF_CTRL_CLR_fields_::DATA_FORMAT_24_BIT,
      LCDIF_CTRL_CLR_fields_::DATA_FORMAT_18_BIT,
      LCDIF_CTRL_CLR_fields_::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LCDIF_CTRL_CLR_fields_::MASTER,
      LCDIF_CTRL_CLR_fields_::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LCDIF_CTRL_CLR_fields_::WORD_LENGTH,
      LCDIF_CTRL_CLR_fields_::LCD_DATABUS_WIDTH,
      LCDIF_CTRL_CLR_fields_::CSC_DATA_SWIZZLE,
      LCDIF_CTRL_CLR_fields_::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LCDIF_CTRL_CLR_fields_::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LCDIF_CTRL_CLR_fields_::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LCDIF_CTRL_CLR_fields_::SHIFT_NUM_BITS,
      LCDIF_CTRL_CLR_fields_::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL_CLR_fields_::CLKGATE,
      LCDIF_CTRL_CLR_fields_::SFTRST> {
    using eDATA_FORMAT_24_BIT = LCDIF_CTRL_CLR_fields_::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LCDIF_CTRL_CLR_fields_::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LCDIF_CTRL_CLR_fields_::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LCDIF_CTRL_CLR_fields_::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LCDIF_CTRL_CLR_fields_::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LCDIF_CTRL_CLR_fields_::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LCDIF_CTRL_CLR_fields_::eDATA_SHIFT_DIR;
    using RUN = LCDIF_CTRL_CLR_fields_::RUN;
    using DATA_FORMAT_24_BIT = LCDIF_CTRL_CLR_fields_::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LCDIF_CTRL_CLR_fields_::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LCDIF_CTRL_CLR_fields_::DATA_FORMAT_16_BIT;
    using MASTER = LCDIF_CTRL_CLR_fields_::MASTER;
    using ENABLE_PXP_HANDSHAKE = LCDIF_CTRL_CLR_fields_::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LCDIF_CTRL_CLR_fields_::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LCDIF_CTRL_CLR_fields_::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LCDIF_CTRL_CLR_fields_::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LCDIF_CTRL_CLR_fields_::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LCDIF_CTRL_CLR_fields_::DOTCLK_MODE;
    using BYPASS_COUNT = LCDIF_CTRL_CLR_fields_::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LCDIF_CTRL_CLR_fields_::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LCDIF_CTRL_CLR_fields_::DATA_SHIFT_DIR;
    using CLKGATE = LCDIF_CTRL_CLR_fields_::CLKGATE;
    using SFTRST = LCDIF_CTRL_CLR_fields_::SFTRST;
  };

  // LCDIF General Control Register
  struct LCDIF_CTRL_TOG_fields_ {
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
  };  // struct LCDIF_CTRL_TOG_fields_

  struct LCDIF_CTRL_TOG : ftl::mmio::Register<
      0x4080400Cu,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      LCDIF_CTRL_TOG_fields_::RUN,
      LCDIF_CTRL_TOG_fields_::DATA_FORMAT_24_BIT,
      LCDIF_CTRL_TOG_fields_::DATA_FORMAT_18_BIT,
      LCDIF_CTRL_TOG_fields_::DATA_FORMAT_16_BIT,
      ftl::mmio::Reserved<1, 4>,
      LCDIF_CTRL_TOG_fields_::MASTER,
      LCDIF_CTRL_TOG_fields_::ENABLE_PXP_HANDSHAKE,
      ftl::mmio::Reserved<1, 7>,
      LCDIF_CTRL_TOG_fields_::WORD_LENGTH,
      LCDIF_CTRL_TOG_fields_::LCD_DATABUS_WIDTH,
      LCDIF_CTRL_TOG_fields_::CSC_DATA_SWIZZLE,
      LCDIF_CTRL_TOG_fields_::INPUT_DATA_SWIZZLE,
      ftl::mmio::Reserved<1, 16>,
      LCDIF_CTRL_TOG_fields_::DOTCLK_MODE,
      ftl::mmio::Reserved<1, 18>,
      LCDIF_CTRL_TOG_fields_::BYPASS_COUNT,
      ftl::mmio::Reserved<1, 20>,
      LCDIF_CTRL_TOG_fields_::SHIFT_NUM_BITS,
      LCDIF_CTRL_TOG_fields_::DATA_SHIFT_DIR,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL_TOG_fields_::CLKGATE,
      LCDIF_CTRL_TOG_fields_::SFTRST> {
    using eDATA_FORMAT_24_BIT = LCDIF_CTRL_TOG_fields_::eDATA_FORMAT_24_BIT;
    using eDATA_FORMAT_18_BIT = LCDIF_CTRL_TOG_fields_::eDATA_FORMAT_18_BIT;
    using eWORD_LENGTH = LCDIF_CTRL_TOG_fields_::eWORD_LENGTH;
    using eLCD_DATABUS_WIDTH = LCDIF_CTRL_TOG_fields_::eLCD_DATABUS_WIDTH;
    using eCSC_DATA_SWIZZLE = LCDIF_CTRL_TOG_fields_::eCSC_DATA_SWIZZLE;
    using eINPUT_DATA_SWIZZLE = LCDIF_CTRL_TOG_fields_::eINPUT_DATA_SWIZZLE;
    using eDATA_SHIFT_DIR = LCDIF_CTRL_TOG_fields_::eDATA_SHIFT_DIR;
    using RUN = LCDIF_CTRL_TOG_fields_::RUN;
    using DATA_FORMAT_24_BIT = LCDIF_CTRL_TOG_fields_::DATA_FORMAT_24_BIT;
    using DATA_FORMAT_18_BIT = LCDIF_CTRL_TOG_fields_::DATA_FORMAT_18_BIT;
    using DATA_FORMAT_16_BIT = LCDIF_CTRL_TOG_fields_::DATA_FORMAT_16_BIT;
    using MASTER = LCDIF_CTRL_TOG_fields_::MASTER;
    using ENABLE_PXP_HANDSHAKE = LCDIF_CTRL_TOG_fields_::ENABLE_PXP_HANDSHAKE;
    using WORD_LENGTH = LCDIF_CTRL_TOG_fields_::WORD_LENGTH;
    using LCD_DATABUS_WIDTH = LCDIF_CTRL_TOG_fields_::LCD_DATABUS_WIDTH;
    using CSC_DATA_SWIZZLE = LCDIF_CTRL_TOG_fields_::CSC_DATA_SWIZZLE;
    using INPUT_DATA_SWIZZLE = LCDIF_CTRL_TOG_fields_::INPUT_DATA_SWIZZLE;
    using DOTCLK_MODE = LCDIF_CTRL_TOG_fields_::DOTCLK_MODE;
    using BYPASS_COUNT = LCDIF_CTRL_TOG_fields_::BYPASS_COUNT;
    using SHIFT_NUM_BITS = LCDIF_CTRL_TOG_fields_::SHIFT_NUM_BITS;
    using DATA_SHIFT_DIR = LCDIF_CTRL_TOG_fields_::DATA_SHIFT_DIR;
    using CLKGATE = LCDIF_CTRL_TOG_fields_::CLKGATE;
    using SFTRST = LCDIF_CTRL_TOG_fields_::SFTRST;
  };

  // LCDIF General Control1 Register
  struct LCDIF_CTRL1_fields_ {
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
  };  // struct LCDIF_CTRL1_fields_

  struct LCDIF_CTRL1 : ftl::mmio::Register<
      0x40804010u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LCDIF_CTRL1_fields_::VSYNC_EDGE_IRQ,
      LCDIF_CTRL1_fields_::CUR_FRAME_DONE_IRQ,
      LCDIF_CTRL1_fields_::UNDERFLOW_IRQ,
      LCDIF_CTRL1_fields_::OVERFLOW_IRQ,
      LCDIF_CTRL1_fields_::VSYNC_EDGE_IRQ_EN,
      LCDIF_CTRL1_fields_::CUR_FRAME_DONE_IRQ_EN,
      LCDIF_CTRL1_fields_::UNDERFLOW_IRQ_EN,
      LCDIF_CTRL1_fields_::OVERFLOW_IRQ_EN,
      LCDIF_CTRL1_fields_::BYTE_PACKING_FORMAT,
      LCDIF_CTRL1_fields_::IRQ_ON_ALTERNATE_FIELDS,
      LCDIF_CTRL1_fields_::FIFO_CLEAR,
      LCDIF_CTRL1_fields_::START_INTERLACE_FROM_SECOND_FIELD,
      LCDIF_CTRL1_fields_::INTERLACE_FIELDS,
      LCDIF_CTRL1_fields_::RECOVER_ON_UNDERFLOW,
      LCDIF_CTRL1_fields_::BM_ERROR_IRQ,
      LCDIF_CTRL1_fields_::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL1_fields_::CS_OUT_SELECT,
      LCDIF_CTRL1_fields_::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LCDIF_CTRL1_fields_::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LCDIF_CTRL1_fields_::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LCDIF_CTRL1_fields_::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LCDIF_CTRL1_fields_::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LCDIF_CTRL1_fields_::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LCDIF_CTRL1_fields_::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LCDIF_CTRL1_fields_::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LCDIF_CTRL1_fields_::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LCDIF_CTRL1_fields_::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LCDIF_CTRL1_fields_::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LCDIF_CTRL1_fields_::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LCDIF_CTRL1_fields_::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LCDIF_CTRL1_fields_::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LCDIF_CTRL1_fields_::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LCDIF_CTRL1_fields_::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LCDIF_CTRL1_fields_::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LCDIF_CTRL1_fields_::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LCDIF_CTRL1_fields_::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LCDIF_CTRL1_fields_::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LCDIF_CTRL1_fields_::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LCDIF_CTRL1_fields_::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LCDIF_CTRL1_fields_::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LCDIF_CTRL1_fields_::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LCDIF_CTRL1_SET_fields_ {
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
  };  // struct LCDIF_CTRL1_SET_fields_

  struct LCDIF_CTRL1_SET : ftl::mmio::Register<
      0x40804014u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LCDIF_CTRL1_SET_fields_::VSYNC_EDGE_IRQ,
      LCDIF_CTRL1_SET_fields_::CUR_FRAME_DONE_IRQ,
      LCDIF_CTRL1_SET_fields_::UNDERFLOW_IRQ,
      LCDIF_CTRL1_SET_fields_::OVERFLOW_IRQ,
      LCDIF_CTRL1_SET_fields_::VSYNC_EDGE_IRQ_EN,
      LCDIF_CTRL1_SET_fields_::CUR_FRAME_DONE_IRQ_EN,
      LCDIF_CTRL1_SET_fields_::UNDERFLOW_IRQ_EN,
      LCDIF_CTRL1_SET_fields_::OVERFLOW_IRQ_EN,
      LCDIF_CTRL1_SET_fields_::BYTE_PACKING_FORMAT,
      LCDIF_CTRL1_SET_fields_::IRQ_ON_ALTERNATE_FIELDS,
      LCDIF_CTRL1_SET_fields_::FIFO_CLEAR,
      LCDIF_CTRL1_SET_fields_::START_INTERLACE_FROM_SECOND_FIELD,
      LCDIF_CTRL1_SET_fields_::INTERLACE_FIELDS,
      LCDIF_CTRL1_SET_fields_::RECOVER_ON_UNDERFLOW,
      LCDIF_CTRL1_SET_fields_::BM_ERROR_IRQ,
      LCDIF_CTRL1_SET_fields_::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL1_SET_fields_::CS_OUT_SELECT,
      LCDIF_CTRL1_SET_fields_::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LCDIF_CTRL1_SET_fields_::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LCDIF_CTRL1_SET_fields_::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LCDIF_CTRL1_SET_fields_::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LCDIF_CTRL1_SET_fields_::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LCDIF_CTRL1_SET_fields_::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LCDIF_CTRL1_SET_fields_::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LCDIF_CTRL1_SET_fields_::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LCDIF_CTRL1_SET_fields_::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LCDIF_CTRL1_SET_fields_::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LCDIF_CTRL1_SET_fields_::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LCDIF_CTRL1_SET_fields_::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LCDIF_CTRL1_SET_fields_::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LCDIF_CTRL1_SET_fields_::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LCDIF_CTRL1_SET_fields_::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LCDIF_CTRL1_SET_fields_::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LCDIF_CTRL1_SET_fields_::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LCDIF_CTRL1_SET_fields_::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LCDIF_CTRL1_SET_fields_::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LCDIF_CTRL1_SET_fields_::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LCDIF_CTRL1_SET_fields_::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LCDIF_CTRL1_SET_fields_::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LCDIF_CTRL1_SET_fields_::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LCDIF_CTRL1_SET_fields_::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LCDIF_CTRL1_CLR_fields_ {
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
  };  // struct LCDIF_CTRL1_CLR_fields_

  struct LCDIF_CTRL1_CLR : ftl::mmio::Register<
      0x40804018u,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LCDIF_CTRL1_CLR_fields_::VSYNC_EDGE_IRQ,
      LCDIF_CTRL1_CLR_fields_::CUR_FRAME_DONE_IRQ,
      LCDIF_CTRL1_CLR_fields_::UNDERFLOW_IRQ,
      LCDIF_CTRL1_CLR_fields_::OVERFLOW_IRQ,
      LCDIF_CTRL1_CLR_fields_::VSYNC_EDGE_IRQ_EN,
      LCDIF_CTRL1_CLR_fields_::CUR_FRAME_DONE_IRQ_EN,
      LCDIF_CTRL1_CLR_fields_::UNDERFLOW_IRQ_EN,
      LCDIF_CTRL1_CLR_fields_::OVERFLOW_IRQ_EN,
      LCDIF_CTRL1_CLR_fields_::BYTE_PACKING_FORMAT,
      LCDIF_CTRL1_CLR_fields_::IRQ_ON_ALTERNATE_FIELDS,
      LCDIF_CTRL1_CLR_fields_::FIFO_CLEAR,
      LCDIF_CTRL1_CLR_fields_::START_INTERLACE_FROM_SECOND_FIELD,
      LCDIF_CTRL1_CLR_fields_::INTERLACE_FIELDS,
      LCDIF_CTRL1_CLR_fields_::RECOVER_ON_UNDERFLOW,
      LCDIF_CTRL1_CLR_fields_::BM_ERROR_IRQ,
      LCDIF_CTRL1_CLR_fields_::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL1_CLR_fields_::CS_OUT_SELECT,
      LCDIF_CTRL1_CLR_fields_::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LCDIF_CTRL1_CLR_fields_::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LCDIF_CTRL1_CLR_fields_::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LCDIF_CTRL1_CLR_fields_::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LCDIF_CTRL1_CLR_fields_::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LCDIF_CTRL1_CLR_fields_::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LCDIF_CTRL1_CLR_fields_::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LCDIF_CTRL1_CLR_fields_::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LCDIF_CTRL1_CLR_fields_::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LCDIF_CTRL1_CLR_fields_::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LCDIF_CTRL1_CLR_fields_::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LCDIF_CTRL1_CLR_fields_::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LCDIF_CTRL1_CLR_fields_::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LCDIF_CTRL1_CLR_fields_::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LCDIF_CTRL1_CLR_fields_::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LCDIF_CTRL1_CLR_fields_::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LCDIF_CTRL1_CLR_fields_::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LCDIF_CTRL1_CLR_fields_::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LCDIF_CTRL1_CLR_fields_::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LCDIF_CTRL1_CLR_fields_::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LCDIF_CTRL1_CLR_fields_::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LCDIF_CTRL1_CLR_fields_::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LCDIF_CTRL1_CLR_fields_::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LCDIF_CTRL1_CLR_fields_::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control1 Register
  struct LCDIF_CTRL1_TOG_fields_ {
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
  };  // struct LCDIF_CTRL1_TOG_fields_

  struct LCDIF_CTRL1_TOG : ftl::mmio::Register<
      0x4080401Cu,
      std::uint32_t,
      0x000F0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      LCDIF_CTRL1_TOG_fields_::VSYNC_EDGE_IRQ,
      LCDIF_CTRL1_TOG_fields_::CUR_FRAME_DONE_IRQ,
      LCDIF_CTRL1_TOG_fields_::UNDERFLOW_IRQ,
      LCDIF_CTRL1_TOG_fields_::OVERFLOW_IRQ,
      LCDIF_CTRL1_TOG_fields_::VSYNC_EDGE_IRQ_EN,
      LCDIF_CTRL1_TOG_fields_::CUR_FRAME_DONE_IRQ_EN,
      LCDIF_CTRL1_TOG_fields_::UNDERFLOW_IRQ_EN,
      LCDIF_CTRL1_TOG_fields_::OVERFLOW_IRQ_EN,
      LCDIF_CTRL1_TOG_fields_::BYTE_PACKING_FORMAT,
      LCDIF_CTRL1_TOG_fields_::IRQ_ON_ALTERNATE_FIELDS,
      LCDIF_CTRL1_TOG_fields_::FIFO_CLEAR,
      LCDIF_CTRL1_TOG_fields_::START_INTERLACE_FROM_SECOND_FIELD,
      LCDIF_CTRL1_TOG_fields_::INTERLACE_FIELDS,
      LCDIF_CTRL1_TOG_fields_::RECOVER_ON_UNDERFLOW,
      LCDIF_CTRL1_TOG_fields_::BM_ERROR_IRQ,
      LCDIF_CTRL1_TOG_fields_::BM_ERROR_IRQ_EN,
      ftl::mmio::Reserved<3, 27>,
      LCDIF_CTRL1_TOG_fields_::CS_OUT_SELECT,
      LCDIF_CTRL1_TOG_fields_::IMAGE_DATA_SELECT> {
    using eVSYNC_EDGE_IRQ = LCDIF_CTRL1_TOG_fields_::eVSYNC_EDGE_IRQ;
    using eCUR_FRAME_DONE_IRQ = LCDIF_CTRL1_TOG_fields_::eCUR_FRAME_DONE_IRQ;
    using eUNDERFLOW_IRQ = LCDIF_CTRL1_TOG_fields_::eUNDERFLOW_IRQ;
    using eOVERFLOW_IRQ = LCDIF_CTRL1_TOG_fields_::eOVERFLOW_IRQ;
    using eBM_ERROR_IRQ = LCDIF_CTRL1_TOG_fields_::eBM_ERROR_IRQ;
    using VSYNC_EDGE_IRQ = LCDIF_CTRL1_TOG_fields_::VSYNC_EDGE_IRQ;
    using CUR_FRAME_DONE_IRQ = LCDIF_CTRL1_TOG_fields_::CUR_FRAME_DONE_IRQ;
    using UNDERFLOW_IRQ = LCDIF_CTRL1_TOG_fields_::UNDERFLOW_IRQ;
    using OVERFLOW_IRQ = LCDIF_CTRL1_TOG_fields_::OVERFLOW_IRQ;
    using VSYNC_EDGE_IRQ_EN = LCDIF_CTRL1_TOG_fields_::VSYNC_EDGE_IRQ_EN;
    using CUR_FRAME_DONE_IRQ_EN = LCDIF_CTRL1_TOG_fields_::CUR_FRAME_DONE_IRQ_EN;
    using UNDERFLOW_IRQ_EN = LCDIF_CTRL1_TOG_fields_::UNDERFLOW_IRQ_EN;
    using OVERFLOW_IRQ_EN = LCDIF_CTRL1_TOG_fields_::OVERFLOW_IRQ_EN;
    using BYTE_PACKING_FORMAT = LCDIF_CTRL1_TOG_fields_::BYTE_PACKING_FORMAT;
    using IRQ_ON_ALTERNATE_FIELDS = LCDIF_CTRL1_TOG_fields_::IRQ_ON_ALTERNATE_FIELDS;
    using FIFO_CLEAR = LCDIF_CTRL1_TOG_fields_::FIFO_CLEAR;
    using START_INTERLACE_FROM_SECOND_FIELD = LCDIF_CTRL1_TOG_fields_::START_INTERLACE_FROM_SECOND_FIELD;
    using INTERLACE_FIELDS = LCDIF_CTRL1_TOG_fields_::INTERLACE_FIELDS;
    using RECOVER_ON_UNDERFLOW = LCDIF_CTRL1_TOG_fields_::RECOVER_ON_UNDERFLOW;
    using BM_ERROR_IRQ = LCDIF_CTRL1_TOG_fields_::BM_ERROR_IRQ;
    using BM_ERROR_IRQ_EN = LCDIF_CTRL1_TOG_fields_::BM_ERROR_IRQ_EN;
    using CS_OUT_SELECT = LCDIF_CTRL1_TOG_fields_::CS_OUT_SELECT;
    using IMAGE_DATA_SELECT = LCDIF_CTRL1_TOG_fields_::IMAGE_DATA_SELECT;
  };

  // LCDIF General Control2 Register
  struct LCDIF_CTRL2_fields_ {
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
  };  // struct LCDIF_CTRL2_fields_

  struct LCDIF_CTRL2 : ftl::mmio::Register<
      0x40804020u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LCDIF_CTRL2_fields_::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LCDIF_CTRL2_fields_::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LCDIF_CTRL2_fields_::BURST_LEN_8,
      LCDIF_CTRL2_fields_::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LCDIF_CTRL2_fields_::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LCDIF_CTRL2_fields_::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LCDIF_CTRL2_fields_::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LCDIF_CTRL2_fields_::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LCDIF_CTRL2_fields_::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LCDIF_CTRL2_fields_::BURST_LEN_8;
    using OUTSTANDING_REQS = LCDIF_CTRL2_fields_::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LCDIF_CTRL2_SET_fields_ {
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
  };  // struct LCDIF_CTRL2_SET_fields_

  struct LCDIF_CTRL2_SET : ftl::mmio::Register<
      0x40804024u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LCDIF_CTRL2_SET_fields_::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LCDIF_CTRL2_SET_fields_::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LCDIF_CTRL2_SET_fields_::BURST_LEN_8,
      LCDIF_CTRL2_SET_fields_::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LCDIF_CTRL2_SET_fields_::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LCDIF_CTRL2_SET_fields_::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LCDIF_CTRL2_SET_fields_::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LCDIF_CTRL2_SET_fields_::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LCDIF_CTRL2_SET_fields_::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LCDIF_CTRL2_SET_fields_::BURST_LEN_8;
    using OUTSTANDING_REQS = LCDIF_CTRL2_SET_fields_::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LCDIF_CTRL2_CLR_fields_ {
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
  };  // struct LCDIF_CTRL2_CLR_fields_

  struct LCDIF_CTRL2_CLR : ftl::mmio::Register<
      0x40804028u,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LCDIF_CTRL2_CLR_fields_::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LCDIF_CTRL2_CLR_fields_::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LCDIF_CTRL2_CLR_fields_::BURST_LEN_8,
      LCDIF_CTRL2_CLR_fields_::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LCDIF_CTRL2_CLR_fields_::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LCDIF_CTRL2_CLR_fields_::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LCDIF_CTRL2_CLR_fields_::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LCDIF_CTRL2_CLR_fields_::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LCDIF_CTRL2_CLR_fields_::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LCDIF_CTRL2_CLR_fields_::BURST_LEN_8;
    using OUTSTANDING_REQS = LCDIF_CTRL2_CLR_fields_::OUTSTANDING_REQS;
  };

  // LCDIF General Control2 Register
  struct LCDIF_CTRL2_TOG_fields_ {
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
  };  // struct LCDIF_CTRL2_TOG_fields_

  struct LCDIF_CTRL2_TOG : ftl::mmio::Register<
      0x4080402Cu,
      std::uint32_t,
      0x00200000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      LCDIF_CTRL2_TOG_fields_::EVEN_LINE_PATTERN,
      ftl::mmio::Reserved<1, 15>,
      LCDIF_CTRL2_TOG_fields_::ODD_LINE_PATTERN,
      ftl::mmio::Reserved<1, 19>,
      LCDIF_CTRL2_TOG_fields_::BURST_LEN_8,
      LCDIF_CTRL2_TOG_fields_::OUTSTANDING_REQS,
      ftl::mmio::Reserved<8, 24>> {
    using eEVEN_LINE_PATTERN = LCDIF_CTRL2_TOG_fields_::eEVEN_LINE_PATTERN;
    using eODD_LINE_PATTERN = LCDIF_CTRL2_TOG_fields_::eODD_LINE_PATTERN;
    using eOUTSTANDING_REQS = LCDIF_CTRL2_TOG_fields_::eOUTSTANDING_REQS;
    using EVEN_LINE_PATTERN = LCDIF_CTRL2_TOG_fields_::EVEN_LINE_PATTERN;
    using ODD_LINE_PATTERN = LCDIF_CTRL2_TOG_fields_::ODD_LINE_PATTERN;
    using BURST_LEN_8 = LCDIF_CTRL2_TOG_fields_::BURST_LEN_8;
    using OUTSTANDING_REQS = LCDIF_CTRL2_TOG_fields_::OUTSTANDING_REQS;
  };

  // LCDIF Horizontal and Vertical Valid Data Count Register
  struct LCDIF_TRANSFER_COUNT_fields_ {
    // Total valid data (pixels) in each horizontal line
    using H_COUNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of horizontal lines per frame which contain valid data
    using V_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_TRANSFER_COUNT_fields_

  struct LCDIF_TRANSFER_COUNT : ftl::mmio::Register<
      0x40804030u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      LCDIF_TRANSFER_COUNT_fields_::H_COUNT,
      LCDIF_TRANSFER_COUNT_fields_::V_COUNT> {
    using H_COUNT = LCDIF_TRANSFER_COUNT_fields_::H_COUNT;
    using V_COUNT = LCDIF_TRANSFER_COUNT_fields_::V_COUNT;
  };

  // LCD Interface Current Buffer Address Register
  struct LCDIF_CUR_BUF_fields_ {
    // Address of the current frame being transmitted by LCDIF.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_CUR_BUF_fields_

  struct LCDIF_CUR_BUF : ftl::mmio::Register<
      0x40804040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_CUR_BUF_fields_::ADDR> {
    using ADDR = LCDIF_CUR_BUF_fields_::ADDR;
  };

  // LCD Interface Next Buffer Address Register
  struct LCDIF_NEXT_BUF_fields_ {
    // Address of the next frame that will be transmitted by LCDIF.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_NEXT_BUF_fields_

  struct LCDIF_NEXT_BUF : ftl::mmio::Register<
      0x40804050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_NEXT_BUF_fields_::ADDR> {
    using ADDR = LCDIF_NEXT_BUF_fields_::ADDR;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LCDIF_VDCTRL0_fields_ {
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
  };  // struct LCDIF_VDCTRL0_fields_

  struct LCDIF_VDCTRL0 : ftl::mmio::Register<
      0x40804070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL0_fields_::VSYNC_PULSE_WIDTH,
      LCDIF_VDCTRL0_fields_::HALF_LINE_MODE,
      LCDIF_VDCTRL0_fields_::HALF_LINE,
      LCDIF_VDCTRL0_fields_::VSYNC_PULSE_WIDTH_UNIT,
      LCDIF_VDCTRL0_fields_::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LCDIF_VDCTRL0_fields_::ENABLE_POL,
      LCDIF_VDCTRL0_fields_::DOTCLK_POL,
      LCDIF_VDCTRL0_fields_::HSYNC_POL,
      LCDIF_VDCTRL0_fields_::VSYNC_POL,
      LCDIF_VDCTRL0_fields_::ENABLE_PRESENT,
      LCDIF_VDCTRL0_fields_::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LCDIF_VDCTRL0_fields_::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LCDIF_VDCTRL0_fields_::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LCDIF_VDCTRL0_fields_::HALF_LINE_MODE;
    using HALF_LINE = LCDIF_VDCTRL0_fields_::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LCDIF_VDCTRL0_fields_::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LCDIF_VDCTRL0_fields_::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LCDIF_VDCTRL0_fields_::ENABLE_POL;
    using DOTCLK_POL = LCDIF_VDCTRL0_fields_::DOTCLK_POL;
    using HSYNC_POL = LCDIF_VDCTRL0_fields_::HSYNC_POL;
    using VSYNC_POL = LCDIF_VDCTRL0_fields_::VSYNC_POL;
    using ENABLE_PRESENT = LCDIF_VDCTRL0_fields_::ENABLE_PRESENT;
    using VSYNC_OEB = LCDIF_VDCTRL0_fields_::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LCDIF_VDCTRL0_SET_fields_ {
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
  };  // struct LCDIF_VDCTRL0_SET_fields_

  struct LCDIF_VDCTRL0_SET : ftl::mmio::Register<
      0x40804074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL0_SET_fields_::VSYNC_PULSE_WIDTH,
      LCDIF_VDCTRL0_SET_fields_::HALF_LINE_MODE,
      LCDIF_VDCTRL0_SET_fields_::HALF_LINE,
      LCDIF_VDCTRL0_SET_fields_::VSYNC_PULSE_WIDTH_UNIT,
      LCDIF_VDCTRL0_SET_fields_::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LCDIF_VDCTRL0_SET_fields_::ENABLE_POL,
      LCDIF_VDCTRL0_SET_fields_::DOTCLK_POL,
      LCDIF_VDCTRL0_SET_fields_::HSYNC_POL,
      LCDIF_VDCTRL0_SET_fields_::VSYNC_POL,
      LCDIF_VDCTRL0_SET_fields_::ENABLE_PRESENT,
      LCDIF_VDCTRL0_SET_fields_::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LCDIF_VDCTRL0_SET_fields_::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LCDIF_VDCTRL0_SET_fields_::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LCDIF_VDCTRL0_SET_fields_::HALF_LINE_MODE;
    using HALF_LINE = LCDIF_VDCTRL0_SET_fields_::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LCDIF_VDCTRL0_SET_fields_::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LCDIF_VDCTRL0_SET_fields_::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LCDIF_VDCTRL0_SET_fields_::ENABLE_POL;
    using DOTCLK_POL = LCDIF_VDCTRL0_SET_fields_::DOTCLK_POL;
    using HSYNC_POL = LCDIF_VDCTRL0_SET_fields_::HSYNC_POL;
    using VSYNC_POL = LCDIF_VDCTRL0_SET_fields_::VSYNC_POL;
    using ENABLE_PRESENT = LCDIF_VDCTRL0_SET_fields_::ENABLE_PRESENT;
    using VSYNC_OEB = LCDIF_VDCTRL0_SET_fields_::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LCDIF_VDCTRL0_CLR_fields_ {
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
  };  // struct LCDIF_VDCTRL0_CLR_fields_

  struct LCDIF_VDCTRL0_CLR : ftl::mmio::Register<
      0x40804078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL0_CLR_fields_::VSYNC_PULSE_WIDTH,
      LCDIF_VDCTRL0_CLR_fields_::HALF_LINE_MODE,
      LCDIF_VDCTRL0_CLR_fields_::HALF_LINE,
      LCDIF_VDCTRL0_CLR_fields_::VSYNC_PULSE_WIDTH_UNIT,
      LCDIF_VDCTRL0_CLR_fields_::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LCDIF_VDCTRL0_CLR_fields_::ENABLE_POL,
      LCDIF_VDCTRL0_CLR_fields_::DOTCLK_POL,
      LCDIF_VDCTRL0_CLR_fields_::HSYNC_POL,
      LCDIF_VDCTRL0_CLR_fields_::VSYNC_POL,
      LCDIF_VDCTRL0_CLR_fields_::ENABLE_PRESENT,
      LCDIF_VDCTRL0_CLR_fields_::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LCDIF_VDCTRL0_CLR_fields_::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LCDIF_VDCTRL0_CLR_fields_::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LCDIF_VDCTRL0_CLR_fields_::HALF_LINE_MODE;
    using HALF_LINE = LCDIF_VDCTRL0_CLR_fields_::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LCDIF_VDCTRL0_CLR_fields_::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LCDIF_VDCTRL0_CLR_fields_::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LCDIF_VDCTRL0_CLR_fields_::ENABLE_POL;
    using DOTCLK_POL = LCDIF_VDCTRL0_CLR_fields_::DOTCLK_POL;
    using HSYNC_POL = LCDIF_VDCTRL0_CLR_fields_::HSYNC_POL;
    using VSYNC_POL = LCDIF_VDCTRL0_CLR_fields_::VSYNC_POL;
    using ENABLE_PRESENT = LCDIF_VDCTRL0_CLR_fields_::ENABLE_PRESENT;
    using VSYNC_OEB = LCDIF_VDCTRL0_CLR_fields_::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register0
  struct LCDIF_VDCTRL0_TOG_fields_ {
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
  };  // struct LCDIF_VDCTRL0_TOG_fields_

  struct LCDIF_VDCTRL0_TOG : ftl::mmio::Register<
      0x4080407Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL0_TOG_fields_::VSYNC_PULSE_WIDTH,
      LCDIF_VDCTRL0_TOG_fields_::HALF_LINE_MODE,
      LCDIF_VDCTRL0_TOG_fields_::HALF_LINE,
      LCDIF_VDCTRL0_TOG_fields_::VSYNC_PULSE_WIDTH_UNIT,
      LCDIF_VDCTRL0_TOG_fields_::VSYNC_PERIOD_UNIT,
      ftl::mmio::Reserved<2, 22>,
      LCDIF_VDCTRL0_TOG_fields_::ENABLE_POL,
      LCDIF_VDCTRL0_TOG_fields_::DOTCLK_POL,
      LCDIF_VDCTRL0_TOG_fields_::HSYNC_POL,
      LCDIF_VDCTRL0_TOG_fields_::VSYNC_POL,
      LCDIF_VDCTRL0_TOG_fields_::ENABLE_PRESENT,
      LCDIF_VDCTRL0_TOG_fields_::VSYNC_OEB,
      ftl::mmio::Reserved<2, 30>> {
    using eVSYNC_OEB = LCDIF_VDCTRL0_TOG_fields_::eVSYNC_OEB;
    using VSYNC_PULSE_WIDTH = LCDIF_VDCTRL0_TOG_fields_::VSYNC_PULSE_WIDTH;
    using HALF_LINE_MODE = LCDIF_VDCTRL0_TOG_fields_::HALF_LINE_MODE;
    using HALF_LINE = LCDIF_VDCTRL0_TOG_fields_::HALF_LINE;
    using VSYNC_PULSE_WIDTH_UNIT = LCDIF_VDCTRL0_TOG_fields_::VSYNC_PULSE_WIDTH_UNIT;
    using VSYNC_PERIOD_UNIT = LCDIF_VDCTRL0_TOG_fields_::VSYNC_PERIOD_UNIT;
    using ENABLE_POL = LCDIF_VDCTRL0_TOG_fields_::ENABLE_POL;
    using DOTCLK_POL = LCDIF_VDCTRL0_TOG_fields_::DOTCLK_POL;
    using HSYNC_POL = LCDIF_VDCTRL0_TOG_fields_::HSYNC_POL;
    using VSYNC_POL = LCDIF_VDCTRL0_TOG_fields_::VSYNC_POL;
    using ENABLE_PRESENT = LCDIF_VDCTRL0_TOG_fields_::ENABLE_PRESENT;
    using VSYNC_OEB = LCDIF_VDCTRL0_TOG_fields_::VSYNC_OEB;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register1
  struct LCDIF_VDCTRL1_fields_ {
    // Total number of units between two positive or two negative edges of the VSYNC signal
    using VSYNC_PERIOD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_VDCTRL1_fields_

  struct LCDIF_VDCTRL1 : ftl::mmio::Register<
      0x40804080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL1_fields_::VSYNC_PERIOD> {
    using VSYNC_PERIOD = LCDIF_VDCTRL1_fields_::VSYNC_PERIOD;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register2
  struct LCDIF_VDCTRL2_fields_ {
    // Total number of DISPLAY CLOCK (pix_clk) cycles between two positive or two negative edges of the HSYNC signal
    using HSYNC_PERIOD = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of DISPLAY CLOCK (pix_clk) cycles for which HSYNC signal is active.
    using HSYNC_PULSE_WIDTH = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_VDCTRL2_fields_

  struct LCDIF_VDCTRL2 : ftl::mmio::Register<
      0x40804090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL2_fields_::HSYNC_PERIOD,
      LCDIF_VDCTRL2_fields_::HSYNC_PULSE_WIDTH> {
    using HSYNC_PERIOD = LCDIF_VDCTRL2_fields_::HSYNC_PERIOD;
    using HSYNC_PULSE_WIDTH = LCDIF_VDCTRL2_fields_::HSYNC_PULSE_WIDTH;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register3
  struct LCDIF_VDCTRL3_fields_ {
    // In the VSYNC interface mode, wait for this number of DISPLAY CLOCK (pix_clk) cycles from the falling VSYNC edge (or rising if VSYNC_POL is 1) before starting LCD transactions and is applicable only if WAIT_FOR_VSYNC_EDGE is set
    using VERTICAL_WAIT_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // In the DOTCLK mode, wait for this number of clocks from falling edge (or rising if HSYNC_POL is 1) of HSYNC signal to account for horizontal back porch plus the number of DOTCLKs before the moving picture information begins
    using HORIZONTAL_WAIT_CNT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit must be set to 1 in the VSYNC mode of operation, and 0 in the DOTCLK mode of operation.
    using VSYNC_ONLY = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When this bit is set, the LCDIF block will internally mux HSYNC with LCD_D14, DOTCLK with LCD_D13 and ENABLE with LCD_D12, otherwise these signals will go out on separate pins
    using MUX_SYNC_SIGNALS = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_VDCTRL3_fields_

  struct LCDIF_VDCTRL3 : ftl::mmio::Register<
      0x408040A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL3_fields_::VERTICAL_WAIT_CNT,
      LCDIF_VDCTRL3_fields_::HORIZONTAL_WAIT_CNT,
      LCDIF_VDCTRL3_fields_::VSYNC_ONLY,
      LCDIF_VDCTRL3_fields_::MUX_SYNC_SIGNALS,
      ftl::mmio::Reserved<2, 30>> {
    using VERTICAL_WAIT_CNT = LCDIF_VDCTRL3_fields_::VERTICAL_WAIT_CNT;
    using HORIZONTAL_WAIT_CNT = LCDIF_VDCTRL3_fields_::HORIZONTAL_WAIT_CNT;
    using VSYNC_ONLY = LCDIF_VDCTRL3_fields_::VSYNC_ONLY;
    using MUX_SYNC_SIGNALS = LCDIF_VDCTRL3_fields_::MUX_SYNC_SIGNALS;
  };

  // LCDIF VSYNC Mode and Dotclk Mode Control Register4
  struct LCDIF_VDCTRL4_fields_ {
    // Total number of DISPLAY CLOCK (pix_clk) cycles on each horizontal line that carry valid data in DOTCLK mode
    using DOTCLK_H_VALID_DATA_CNT = ftl::mmio::Field<18, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set this field to 1 if the LCD controller requires that the VSYNC or VSYNC/HSYNC/DOTCLK control signals should be active at least one frame before the data transfers actually start and remain active at least one frame after the data transfers end
    using SYNC_SIGNALS_ON = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bitfield selects the amount of time by which the DOTCLK signal should be delayed before coming out of the LCD_DOTCK pin
    using DOTCLK_DLY_SEL = ftl::mmio::Field<3, 29, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_VDCTRL4_fields_

  struct LCDIF_VDCTRL4 : ftl::mmio::Register<
      0x408040B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_VDCTRL4_fields_::DOTCLK_H_VALID_DATA_CNT,
      LCDIF_VDCTRL4_fields_::SYNC_SIGNALS_ON,
      ftl::mmio::Reserved<10, 19>,
      LCDIF_VDCTRL4_fields_::DOTCLK_DLY_SEL> {
    using DOTCLK_H_VALID_DATA_CNT = LCDIF_VDCTRL4_fields_::DOTCLK_H_VALID_DATA_CNT;
    using SYNC_SIGNALS_ON = LCDIF_VDCTRL4_fields_::SYNC_SIGNALS_ON;
    using DOTCLK_DLY_SEL = LCDIF_VDCTRL4_fields_::DOTCLK_DLY_SEL;
  };

  // Bus Master Error Status Register
  struct LCDIF_BM_ERROR_STAT_fields_ {
    // Virtual address at which bus master error occurred.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_BM_ERROR_STAT_fields_

  struct LCDIF_BM_ERROR_STAT : ftl::mmio::Register<
      0x40804190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_BM_ERROR_STAT_fields_::ADDR> {
    using ADDR = LCDIF_BM_ERROR_STAT_fields_::ADDR;
  };

  // CRC Status Register
  struct LCDIF_CRC_STAT_fields_ {
    // Calculated CRC value.
    using CRC_VALUE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_CRC_STAT_fields_

  struct LCDIF_CRC_STAT : ftl::mmio::Register<
      0x408041A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_CRC_STAT_fields_::CRC_VALUE> {
    using CRC_VALUE = LCDIF_CRC_STAT_fields_::CRC_VALUE;
  };

  // LCD Interface Status Register
  struct LCDIF_STAT_fields_ {
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
  };  // struct LCDIF_STAT_fields_

  struct LCDIF_STAT : ftl::mmio::Register<
      0x408041B0u,
      std::uint32_t,
      0x95000000u,
      ftl::mmio::RO,
      LCDIF_STAT_fields_::LFIFO_COUNT,
      ftl::mmio::Reserved<17, 9>,
      LCDIF_STAT_fields_::TXFIFO_EMPTY,
      LCDIF_STAT_fields_::TXFIFO_FULL,
      LCDIF_STAT_fields_::LFIFO_EMPTY,
      LCDIF_STAT_fields_::LFIFO_FULL,
      LCDIF_STAT_fields_::DMA_REQ,
      LCDIF_STAT_fields_::PRESENT> {
    using LFIFO_COUNT = LCDIF_STAT_fields_::LFIFO_COUNT;
    using TXFIFO_EMPTY = LCDIF_STAT_fields_::TXFIFO_EMPTY;
    using TXFIFO_FULL = LCDIF_STAT_fields_::TXFIFO_FULL;
    using LFIFO_EMPTY = LCDIF_STAT_fields_::LFIFO_EMPTY;
    using LFIFO_FULL = LCDIF_STAT_fields_::LFIFO_FULL;
    using DMA_REQ = LCDIF_STAT_fields_::DMA_REQ;
    using PRESENT = LCDIF_STAT_fields_::PRESENT;
  };

  // LCDIF Threshold Register
  struct LCDIF_THRES_fields_ {
    // This value should be set to a value of pixels, from 0 to 511
    using FASTCLOCK = ftl::mmio::Field<9, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_THRES_fields_

  struct LCDIF_THRES : ftl::mmio::Register<
      0x40804200u,
      std::uint32_t,
      0x0100000Fu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<16, 0>,
      LCDIF_THRES_fields_::FASTCLOCK,
      ftl::mmio::Reserved<7, 25>> {
    using FASTCLOCK = LCDIF_THRES_fields_::FASTCLOCK;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LCDIF_PIGEONCTRL0_fields_ {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL0_fields_

  struct LCDIF_PIGEONCTRL0 : ftl::mmio::Register<
      0x40804380u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL0_fields_::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL0_fields_::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LCDIF_PIGEONCTRL0_fields_::FD_PERIOD;
    using LD_PERIOD = LCDIF_PIGEONCTRL0_fields_::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LCDIF_PIGEONCTRL0_SET_fields_ {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL0_SET_fields_

  struct LCDIF_PIGEONCTRL0_SET : ftl::mmio::Register<
      0x40804384u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL0_SET_fields_::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL0_SET_fields_::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LCDIF_PIGEONCTRL0_SET_fields_::FD_PERIOD;
    using LD_PERIOD = LCDIF_PIGEONCTRL0_SET_fields_::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LCDIF_PIGEONCTRL0_CLR_fields_ {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL0_CLR_fields_

  struct LCDIF_PIGEONCTRL0_CLR : ftl::mmio::Register<
      0x40804388u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL0_CLR_fields_::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL0_CLR_fields_::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LCDIF_PIGEONCTRL0_CLR_fields_::FD_PERIOD;
    using LD_PERIOD = LCDIF_PIGEONCTRL0_CLR_fields_::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control0 Register
  struct LCDIF_PIGEONCTRL0_TOG_fields_ {
    // Period of line counter during FD phase
    using FD_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Period of pclk counter during LD phase
    using LD_PERIOD = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL0_TOG_fields_

  struct LCDIF_PIGEONCTRL0_TOG : ftl::mmio::Register<
      0x4080438Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL0_TOG_fields_::FD_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL0_TOG_fields_::LD_PERIOD,
      ftl::mmio::Reserved<4, 28>> {
    using FD_PERIOD = LCDIF_PIGEONCTRL0_TOG_fields_::FD_PERIOD;
    using LD_PERIOD = LCDIF_PIGEONCTRL0_TOG_fields_::LD_PERIOD;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LCDIF_PIGEONCTRL1_fields_ {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL1_fields_

  struct LCDIF_PIGEONCTRL1 : ftl::mmio::Register<
      0x40804390u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL1_fields_::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL1_fields_::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LCDIF_PIGEONCTRL1_fields_::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LCDIF_PIGEONCTRL1_fields_::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LCDIF_PIGEONCTRL1_SET_fields_ {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL1_SET_fields_

  struct LCDIF_PIGEONCTRL1_SET : ftl::mmio::Register<
      0x40804394u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL1_SET_fields_::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL1_SET_fields_::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LCDIF_PIGEONCTRL1_SET_fields_::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LCDIF_PIGEONCTRL1_SET_fields_::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LCDIF_PIGEONCTRL1_CLR_fields_ {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL1_CLR_fields_

  struct LCDIF_PIGEONCTRL1_CLR : ftl::mmio::Register<
      0x40804398u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL1_CLR_fields_::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL1_CLR_fields_::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LCDIF_PIGEONCTRL1_CLR_fields_::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LCDIF_PIGEONCTRL1_CLR_fields_::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control1 Register
  struct LCDIF_PIGEONCTRL1_TOG_fields_ {
    // Period of frame counter
    using FRAME_CNT_PERIOD = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max cycles of frame counter
    using FRAME_CNT_CYCLES = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL1_TOG_fields_

  struct LCDIF_PIGEONCTRL1_TOG : ftl::mmio::Register<
      0x4080439Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL1_TOG_fields_::FRAME_CNT_PERIOD,
      ftl::mmio::Reserved<4, 12>,
      LCDIF_PIGEONCTRL1_TOG_fields_::FRAME_CNT_CYCLES,
      ftl::mmio::Reserved<4, 28>> {
    using FRAME_CNT_PERIOD = LCDIF_PIGEONCTRL1_TOG_fields_::FRAME_CNT_PERIOD;
    using FRAME_CNT_CYCLES = LCDIF_PIGEONCTRL1_TOG_fields_::FRAME_CNT_CYCLES;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LCDIF_PIGEONCTRL2_fields_ {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL2_fields_

  struct LCDIF_PIGEONCTRL2 : ftl::mmio::Register<
      0x408043A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL2_fields_::PIGEON_DATA_EN,
      LCDIF_PIGEONCTRL2_fields_::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LCDIF_PIGEONCTRL2_fields_::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LCDIF_PIGEONCTRL2_fields_::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LCDIF_PIGEONCTRL2_SET_fields_ {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL2_SET_fields_

  struct LCDIF_PIGEONCTRL2_SET : ftl::mmio::Register<
      0x408043A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL2_SET_fields_::PIGEON_DATA_EN,
      LCDIF_PIGEONCTRL2_SET_fields_::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LCDIF_PIGEONCTRL2_SET_fields_::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LCDIF_PIGEONCTRL2_SET_fields_::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LCDIF_PIGEONCTRL2_CLR_fields_ {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL2_CLR_fields_

  struct LCDIF_PIGEONCTRL2_CLR : ftl::mmio::Register<
      0x408043A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL2_CLR_fields_::PIGEON_DATA_EN,
      LCDIF_PIGEONCTRL2_CLR_fields_::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LCDIF_PIGEONCTRL2_CLR_fields_::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LCDIF_PIGEONCTRL2_CLR_fields_::PIGEON_CLK_GATE;
  };

  // LCDIF Pigeon Mode Control2 Register
  struct LCDIF_PIGEONCTRL2_TOG_fields_ {
    // Pigeon mode data enable
    using PIGEON_DATA_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pigeon mode dot clock gate enable
    using PIGEON_CLK_GATE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_PIGEONCTRL2_TOG_fields_

  struct LCDIF_PIGEONCTRL2_TOG : ftl::mmio::Register<
      0x408043ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEONCTRL2_TOG_fields_::PIGEON_DATA_EN,
      LCDIF_PIGEONCTRL2_TOG_fields_::PIGEON_CLK_GATE,
      ftl::mmio::Reserved<30, 2>> {
    using PIGEON_DATA_EN = LCDIF_PIGEONCTRL2_TOG_fields_::PIGEON_DATA_EN;
    using PIGEON_CLK_GATE = LCDIF_PIGEONCTRL2_TOG_fields_::PIGEON_CLK_GATE;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_0_0_fields_ {
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
  };  // struct LCDIF_PIGEON_0_0_fields_

  struct LCDIF_PIGEON_0_0 : ftl::mmio::Register<
      0x40804800u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_0_0_fields_::EN,
      LCDIF_PIGEON_0_0_fields_::POL,
      LCDIF_PIGEON_0_0_fields_::INC_SEL,
      LCDIF_PIGEON_0_0_fields_::OFFSET,
      LCDIF_PIGEON_0_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_0_0_fields_::MASK_CNT,
      LCDIF_PIGEON_0_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_0_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_0_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_0_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_0_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_0_0_fields_::EN;
    using POL = LCDIF_PIGEON_0_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_0_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_0_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_0_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_0_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_0_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_0_1_fields_ {
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
  };  // struct LCDIF_PIGEON_0_1_fields_

  struct LCDIF_PIGEON_0_1 : ftl::mmio::Register<
      0x40804810u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_0_1_fields_::SET_CNT,
      LCDIF_PIGEON_0_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_0_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_0_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_0_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_0_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_0_2_fields_ {
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
  };  // struct LCDIF_PIGEON_0_2_fields_

  struct LCDIF_PIGEON_0_2 : ftl::mmio::Register<
      0x40804820u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_0_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_0_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_0_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_0_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_0_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_0_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_1_0_fields_ {
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
  };  // struct LCDIF_PIGEON_1_0_fields_

  struct LCDIF_PIGEON_1_0 : ftl::mmio::Register<
      0x40804840u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_1_0_fields_::EN,
      LCDIF_PIGEON_1_0_fields_::POL,
      LCDIF_PIGEON_1_0_fields_::INC_SEL,
      LCDIF_PIGEON_1_0_fields_::OFFSET,
      LCDIF_PIGEON_1_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_1_0_fields_::MASK_CNT,
      LCDIF_PIGEON_1_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_1_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_1_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_1_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_1_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_1_0_fields_::EN;
    using POL = LCDIF_PIGEON_1_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_1_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_1_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_1_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_1_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_1_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_1_1_fields_ {
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
  };  // struct LCDIF_PIGEON_1_1_fields_

  struct LCDIF_PIGEON_1_1 : ftl::mmio::Register<
      0x40804850u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_1_1_fields_::SET_CNT,
      LCDIF_PIGEON_1_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_1_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_1_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_1_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_1_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_1_2_fields_ {
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
  };  // struct LCDIF_PIGEON_1_2_fields_

  struct LCDIF_PIGEON_1_2 : ftl::mmio::Register<
      0x40804860u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_1_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_1_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_1_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_1_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_1_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_1_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_2_0_fields_ {
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
  };  // struct LCDIF_PIGEON_2_0_fields_

  struct LCDIF_PIGEON_2_0 : ftl::mmio::Register<
      0x40804880u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_2_0_fields_::EN,
      LCDIF_PIGEON_2_0_fields_::POL,
      LCDIF_PIGEON_2_0_fields_::INC_SEL,
      LCDIF_PIGEON_2_0_fields_::OFFSET,
      LCDIF_PIGEON_2_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_2_0_fields_::MASK_CNT,
      LCDIF_PIGEON_2_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_2_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_2_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_2_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_2_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_2_0_fields_::EN;
    using POL = LCDIF_PIGEON_2_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_2_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_2_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_2_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_2_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_2_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_2_1_fields_ {
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
  };  // struct LCDIF_PIGEON_2_1_fields_

  struct LCDIF_PIGEON_2_1 : ftl::mmio::Register<
      0x40804890u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_2_1_fields_::SET_CNT,
      LCDIF_PIGEON_2_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_2_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_2_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_2_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_2_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_2_2_fields_ {
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
  };  // struct LCDIF_PIGEON_2_2_fields_

  struct LCDIF_PIGEON_2_2 : ftl::mmio::Register<
      0x408048A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_2_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_2_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_2_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_2_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_2_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_2_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_3_0_fields_ {
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
  };  // struct LCDIF_PIGEON_3_0_fields_

  struct LCDIF_PIGEON_3_0 : ftl::mmio::Register<
      0x408048C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_3_0_fields_::EN,
      LCDIF_PIGEON_3_0_fields_::POL,
      LCDIF_PIGEON_3_0_fields_::INC_SEL,
      LCDIF_PIGEON_3_0_fields_::OFFSET,
      LCDIF_PIGEON_3_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_3_0_fields_::MASK_CNT,
      LCDIF_PIGEON_3_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_3_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_3_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_3_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_3_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_3_0_fields_::EN;
    using POL = LCDIF_PIGEON_3_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_3_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_3_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_3_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_3_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_3_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_3_1_fields_ {
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
  };  // struct LCDIF_PIGEON_3_1_fields_

  struct LCDIF_PIGEON_3_1 : ftl::mmio::Register<
      0x408048D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_3_1_fields_::SET_CNT,
      LCDIF_PIGEON_3_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_3_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_3_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_3_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_3_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_3_2_fields_ {
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
  };  // struct LCDIF_PIGEON_3_2_fields_

  struct LCDIF_PIGEON_3_2 : ftl::mmio::Register<
      0x408048E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_3_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_3_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_3_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_3_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_3_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_3_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_4_0_fields_ {
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
  };  // struct LCDIF_PIGEON_4_0_fields_

  struct LCDIF_PIGEON_4_0 : ftl::mmio::Register<
      0x40804900u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_4_0_fields_::EN,
      LCDIF_PIGEON_4_0_fields_::POL,
      LCDIF_PIGEON_4_0_fields_::INC_SEL,
      LCDIF_PIGEON_4_0_fields_::OFFSET,
      LCDIF_PIGEON_4_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_4_0_fields_::MASK_CNT,
      LCDIF_PIGEON_4_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_4_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_4_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_4_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_4_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_4_0_fields_::EN;
    using POL = LCDIF_PIGEON_4_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_4_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_4_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_4_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_4_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_4_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_4_1_fields_ {
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
  };  // struct LCDIF_PIGEON_4_1_fields_

  struct LCDIF_PIGEON_4_1 : ftl::mmio::Register<
      0x40804910u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_4_1_fields_::SET_CNT,
      LCDIF_PIGEON_4_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_4_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_4_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_4_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_4_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_4_2_fields_ {
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
  };  // struct LCDIF_PIGEON_4_2_fields_

  struct LCDIF_PIGEON_4_2 : ftl::mmio::Register<
      0x40804920u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_4_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_4_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_4_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_4_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_4_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_4_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_5_0_fields_ {
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
  };  // struct LCDIF_PIGEON_5_0_fields_

  struct LCDIF_PIGEON_5_0 : ftl::mmio::Register<
      0x40804940u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_5_0_fields_::EN,
      LCDIF_PIGEON_5_0_fields_::POL,
      LCDIF_PIGEON_5_0_fields_::INC_SEL,
      LCDIF_PIGEON_5_0_fields_::OFFSET,
      LCDIF_PIGEON_5_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_5_0_fields_::MASK_CNT,
      LCDIF_PIGEON_5_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_5_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_5_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_5_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_5_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_5_0_fields_::EN;
    using POL = LCDIF_PIGEON_5_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_5_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_5_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_5_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_5_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_5_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_5_1_fields_ {
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
  };  // struct LCDIF_PIGEON_5_1_fields_

  struct LCDIF_PIGEON_5_1 : ftl::mmio::Register<
      0x40804950u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_5_1_fields_::SET_CNT,
      LCDIF_PIGEON_5_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_5_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_5_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_5_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_5_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_5_2_fields_ {
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
  };  // struct LCDIF_PIGEON_5_2_fields_

  struct LCDIF_PIGEON_5_2 : ftl::mmio::Register<
      0x40804960u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_5_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_5_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_5_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_5_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_5_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_5_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_6_0_fields_ {
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
  };  // struct LCDIF_PIGEON_6_0_fields_

  struct LCDIF_PIGEON_6_0 : ftl::mmio::Register<
      0x40804980u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_6_0_fields_::EN,
      LCDIF_PIGEON_6_0_fields_::POL,
      LCDIF_PIGEON_6_0_fields_::INC_SEL,
      LCDIF_PIGEON_6_0_fields_::OFFSET,
      LCDIF_PIGEON_6_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_6_0_fields_::MASK_CNT,
      LCDIF_PIGEON_6_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_6_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_6_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_6_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_6_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_6_0_fields_::EN;
    using POL = LCDIF_PIGEON_6_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_6_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_6_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_6_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_6_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_6_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_6_1_fields_ {
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
  };  // struct LCDIF_PIGEON_6_1_fields_

  struct LCDIF_PIGEON_6_1 : ftl::mmio::Register<
      0x40804990u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_6_1_fields_::SET_CNT,
      LCDIF_PIGEON_6_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_6_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_6_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_6_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_6_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_6_2_fields_ {
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
  };  // struct LCDIF_PIGEON_6_2_fields_

  struct LCDIF_PIGEON_6_2 : ftl::mmio::Register<
      0x408049A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_6_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_6_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_6_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_6_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_6_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_6_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_7_0_fields_ {
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
  };  // struct LCDIF_PIGEON_7_0_fields_

  struct LCDIF_PIGEON_7_0 : ftl::mmio::Register<
      0x408049C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_7_0_fields_::EN,
      LCDIF_PIGEON_7_0_fields_::POL,
      LCDIF_PIGEON_7_0_fields_::INC_SEL,
      LCDIF_PIGEON_7_0_fields_::OFFSET,
      LCDIF_PIGEON_7_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_7_0_fields_::MASK_CNT,
      LCDIF_PIGEON_7_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_7_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_7_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_7_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_7_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_7_0_fields_::EN;
    using POL = LCDIF_PIGEON_7_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_7_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_7_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_7_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_7_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_7_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_7_1_fields_ {
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
  };  // struct LCDIF_PIGEON_7_1_fields_

  struct LCDIF_PIGEON_7_1 : ftl::mmio::Register<
      0x408049D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_7_1_fields_::SET_CNT,
      LCDIF_PIGEON_7_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_7_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_7_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_7_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_7_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_7_2_fields_ {
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
  };  // struct LCDIF_PIGEON_7_2_fields_

  struct LCDIF_PIGEON_7_2 : ftl::mmio::Register<
      0x408049E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_7_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_7_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_7_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_7_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_7_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_7_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_8_0_fields_ {
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
  };  // struct LCDIF_PIGEON_8_0_fields_

  struct LCDIF_PIGEON_8_0 : ftl::mmio::Register<
      0x40804A00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_8_0_fields_::EN,
      LCDIF_PIGEON_8_0_fields_::POL,
      LCDIF_PIGEON_8_0_fields_::INC_SEL,
      LCDIF_PIGEON_8_0_fields_::OFFSET,
      LCDIF_PIGEON_8_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_8_0_fields_::MASK_CNT,
      LCDIF_PIGEON_8_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_8_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_8_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_8_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_8_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_8_0_fields_::EN;
    using POL = LCDIF_PIGEON_8_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_8_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_8_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_8_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_8_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_8_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_8_1_fields_ {
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
  };  // struct LCDIF_PIGEON_8_1_fields_

  struct LCDIF_PIGEON_8_1 : ftl::mmio::Register<
      0x40804A10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_8_1_fields_::SET_CNT,
      LCDIF_PIGEON_8_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_8_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_8_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_8_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_8_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_8_2_fields_ {
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
  };  // struct LCDIF_PIGEON_8_2_fields_

  struct LCDIF_PIGEON_8_2 : ftl::mmio::Register<
      0x40804A20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_8_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_8_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_8_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_8_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_8_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_8_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_9_0_fields_ {
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
  };  // struct LCDIF_PIGEON_9_0_fields_

  struct LCDIF_PIGEON_9_0 : ftl::mmio::Register<
      0x40804A40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_9_0_fields_::EN,
      LCDIF_PIGEON_9_0_fields_::POL,
      LCDIF_PIGEON_9_0_fields_::INC_SEL,
      LCDIF_PIGEON_9_0_fields_::OFFSET,
      LCDIF_PIGEON_9_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_9_0_fields_::MASK_CNT,
      LCDIF_PIGEON_9_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_9_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_9_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_9_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_9_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_9_0_fields_::EN;
    using POL = LCDIF_PIGEON_9_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_9_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_9_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_9_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_9_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_9_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_9_1_fields_ {
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
  };  // struct LCDIF_PIGEON_9_1_fields_

  struct LCDIF_PIGEON_9_1 : ftl::mmio::Register<
      0x40804A50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_9_1_fields_::SET_CNT,
      LCDIF_PIGEON_9_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_9_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_9_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_9_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_9_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_9_2_fields_ {
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
  };  // struct LCDIF_PIGEON_9_2_fields_

  struct LCDIF_PIGEON_9_2 : ftl::mmio::Register<
      0x40804A60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_9_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_9_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_9_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_9_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_9_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_9_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_10_0_fields_ {
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
  };  // struct LCDIF_PIGEON_10_0_fields_

  struct LCDIF_PIGEON_10_0 : ftl::mmio::Register<
      0x40804A80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_10_0_fields_::EN,
      LCDIF_PIGEON_10_0_fields_::POL,
      LCDIF_PIGEON_10_0_fields_::INC_SEL,
      LCDIF_PIGEON_10_0_fields_::OFFSET,
      LCDIF_PIGEON_10_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_10_0_fields_::MASK_CNT,
      LCDIF_PIGEON_10_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_10_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_10_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_10_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_10_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_10_0_fields_::EN;
    using POL = LCDIF_PIGEON_10_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_10_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_10_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_10_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_10_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_10_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_10_1_fields_ {
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
  };  // struct LCDIF_PIGEON_10_1_fields_

  struct LCDIF_PIGEON_10_1 : ftl::mmio::Register<
      0x40804A90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_10_1_fields_::SET_CNT,
      LCDIF_PIGEON_10_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_10_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_10_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_10_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_10_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_10_2_fields_ {
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
  };  // struct LCDIF_PIGEON_10_2_fields_

  struct LCDIF_PIGEON_10_2 : ftl::mmio::Register<
      0x40804AA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_10_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_10_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_10_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_10_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_10_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_10_2_fields_::SIG_ANOTHER;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_11_0_fields_ {
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
  };  // struct LCDIF_PIGEON_11_0_fields_

  struct LCDIF_PIGEON_11_0 : ftl::mmio::Register<
      0x40804AC0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_11_0_fields_::EN,
      LCDIF_PIGEON_11_0_fields_::POL,
      LCDIF_PIGEON_11_0_fields_::INC_SEL,
      LCDIF_PIGEON_11_0_fields_::OFFSET,
      LCDIF_PIGEON_11_0_fields_::MASK_CNT_SEL,
      LCDIF_PIGEON_11_0_fields_::MASK_CNT,
      LCDIF_PIGEON_11_0_fields_::STATE_MASK> {
    using ePOL = LCDIF_PIGEON_11_0_fields_::ePOL;
    using eINC_SEL = LCDIF_PIGEON_11_0_fields_::eINC_SEL;
    using eMASK_CNT_SEL = LCDIF_PIGEON_11_0_fields_::eMASK_CNT_SEL;
    using eSTATE_MASK = LCDIF_PIGEON_11_0_fields_::eSTATE_MASK;
    using EN = LCDIF_PIGEON_11_0_fields_::EN;
    using POL = LCDIF_PIGEON_11_0_fields_::POL;
    using INC_SEL = LCDIF_PIGEON_11_0_fields_::INC_SEL;
    using OFFSET = LCDIF_PIGEON_11_0_fields_::OFFSET;
    using MASK_CNT_SEL = LCDIF_PIGEON_11_0_fields_::MASK_CNT_SEL;
    using MASK_CNT = LCDIF_PIGEON_11_0_fields_::MASK_CNT;
    using STATE_MASK = LCDIF_PIGEON_11_0_fields_::STATE_MASK;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_11_1_fields_ {
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
  };  // struct LCDIF_PIGEON_11_1_fields_

  struct LCDIF_PIGEON_11_1 : ftl::mmio::Register<
      0x40804AD0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_11_1_fields_::SET_CNT,
      LCDIF_PIGEON_11_1_fields_::CLR_CNT> {
    using eSET_CNT = LCDIF_PIGEON_11_1_fields_::eSET_CNT;
    using eCLR_CNT = LCDIF_PIGEON_11_1_fields_::eCLR_CNT;
    using SET_CNT = LCDIF_PIGEON_11_1_fields_::SET_CNT;
    using CLR_CNT = LCDIF_PIGEON_11_1_fields_::CLR_CNT;
  };

  // Panel Interface Signal Generator Register
  struct LCDIF_PIGEON_11_2_fields_ {
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
  };  // struct LCDIF_PIGEON_11_2_fields_

  struct LCDIF_PIGEON_11_2 : ftl::mmio::Register<
      0x40804AE0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_PIGEON_11_2_fields_::SIG_LOGIC,
      LCDIF_PIGEON_11_2_fields_::SIG_ANOTHER,
      ftl::mmio::Reserved<23, 9>> {
    using eSIG_LOGIC = LCDIF_PIGEON_11_2_fields_::eSIG_LOGIC;
    using eSIG_ANOTHER = LCDIF_PIGEON_11_2_fields_::eSIG_ANOTHER;
    using SIG_LOGIC = LCDIF_PIGEON_11_2_fields_::SIG_LOGIC;
    using SIG_ANOTHER = LCDIF_PIGEON_11_2_fields_::SIG_ANOTHER;
  };

  // Look Up Table Control Register
  struct LCDIF_LUT_CTRL_fields_ {
    // Setting this bit will bypass the LUT memory resource completely
    using LUT_BYPASS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_LUT_CTRL_fields_

  struct LCDIF_LUT_CTRL : ftl::mmio::Register<
      0x40804B00u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      LCDIF_LUT_CTRL_fields_::LUT_BYPASS,
      ftl::mmio::Reserved<31, 1>> {
    using LUT_BYPASS = LCDIF_LUT_CTRL_fields_::LUT_BYPASS;
  };

  // Lookup Table 0 Index Register
  struct LCDIF_LUT0_ADDR_fields_ {
    // LUT indexed address pointer
    using ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_LUT0_ADDR_fields_

  struct LCDIF_LUT0_ADDR : ftl::mmio::Register<
      0x40804B10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_LUT0_ADDR_fields_::ADDR,
      ftl::mmio::Reserved<24, 8>> {
    using ADDR = LCDIF_LUT0_ADDR_fields_::ADDR;
  };

  // Lookup Table 0 Data Register
  struct LCDIF_LUT0_DATA_fields_ {
    // Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_LUT0_DATA_fields_

  struct LCDIF_LUT0_DATA : ftl::mmio::Register<
      0x40804B20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_LUT0_DATA_fields_::DATA> {
    using DATA = LCDIF_LUT0_DATA_fields_::DATA;
  };

  // Lookup Table 1 Index Register
  struct LCDIF_LUT1_ADDR_fields_ {
    // LUT indexed address pointer
    using ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_LUT1_ADDR_fields_

  struct LCDIF_LUT1_ADDR : ftl::mmio::Register<
      0x40804B30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_LUT1_ADDR_fields_::ADDR,
      ftl::mmio::Reserved<24, 8>> {
    using ADDR = LCDIF_LUT1_ADDR_fields_::ADDR;
  };

  // Lookup Table 1 Data Register
  struct LCDIF_LUT1_DATA_fields_ {
    // Writing this field will load 4 bytes, aligned to four byte boundaries, of data indexed by the ADDR field of the REG_LUT_CTRL register
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LCDIF_LUT1_DATA_fields_

  struct LCDIF_LUT1_DATA : ftl::mmio::Register<
      0x40804B40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LCDIF_LUT1_DATA_fields_::DATA> {
    using DATA = LCDIF_LUT1_DATA_fields_::DATA;
  };

};

}  // namespace regs