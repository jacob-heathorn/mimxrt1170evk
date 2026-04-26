#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PXP v2.0 Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::pxp {

// Control Register 0
struct PXP_CTRL_fields_ {
  enum class eENABLE : std::uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };

  enum class eIRQ_ENABLE : std::uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };

  enum class eNEXT_IRQ_ENABLE : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eROTATE : std::uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };

  enum class eHFLIP : std::uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };

  enum class eVFLIP : std::uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };

  enum class eBLOCK_SIZE : std::uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };

  enum class eEN_REPEAT : std::uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };

  enum class eCLKGATE : std::uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };

  enum class eSFTRST : std::uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };

  // Enables PXP operation with specified parameters
  using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  using IRQ_ENABLE = ftl::mmio::Field<1, 1, eIRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Next command interrupt enable
  using NEXT_IRQ_ENABLE = ftl::mmio::Field<1, 2, eNEXT_IRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable handshake with LCD controller
  using ENABLE_LCD_HANDSHAKE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the clockwise rotation to be applied at the output buffer
  using ROTATE = ftl::mmio::Field<2, 8, eROTATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  using HFLIP = ftl::mmio::Field<1, 10, eHFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  using VFLIP = ftl::mmio::Field<1, 11, eVFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit controls where rotation will occur in the PXP datapath
  using ROT_POS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Select the block size to process.
  using BLOCK_SIZE = ftl::mmio::Field<1, 23, eBLOCK_SIZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the PXP to run continuously
  using EN_REPEAT = ftl::mmio::Field<1, 28, eEN_REPEAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit must be set to zero for normal operation
  using CLKGATE = ftl::mmio::Field<1, 30, eCLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit can be turned on and then off to reset the PXP block to its default state.
  using SFTRST = ftl::mmio::Field<1, 31, eSFTRST, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CTRL_fields_

struct PXP_CTRL : ftl::mmio::Register<
    0x40814000u,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    PXP_CTRL_fields_::ENABLE,
    PXP_CTRL_fields_::IRQ_ENABLE,
    PXP_CTRL_fields_::NEXT_IRQ_ENABLE,
    ftl::mmio::Reserved<1, 3>,
    PXP_CTRL_fields_::ENABLE_LCD_HANDSHAKE,
    ftl::mmio::Reserved<3, 5>,
    PXP_CTRL_fields_::ROTATE,
    PXP_CTRL_fields_::HFLIP,
    PXP_CTRL_fields_::VFLIP,
    ftl::mmio::Reserved<10, 12>,
    PXP_CTRL_fields_::ROT_POS,
    PXP_CTRL_fields_::BLOCK_SIZE,
    ftl::mmio::Reserved<4, 24>,
    PXP_CTRL_fields_::EN_REPEAT,
    ftl::mmio::Reserved<1, 29>,
    PXP_CTRL_fields_::CLKGATE,
    PXP_CTRL_fields_::SFTRST> {
  using eENABLE = PXP_CTRL_fields_::eENABLE;
  using eIRQ_ENABLE = PXP_CTRL_fields_::eIRQ_ENABLE;
  using eNEXT_IRQ_ENABLE = PXP_CTRL_fields_::eNEXT_IRQ_ENABLE;
  using eROTATE = PXP_CTRL_fields_::eROTATE;
  using eHFLIP = PXP_CTRL_fields_::eHFLIP;
  using eVFLIP = PXP_CTRL_fields_::eVFLIP;
  using eBLOCK_SIZE = PXP_CTRL_fields_::eBLOCK_SIZE;
  using eEN_REPEAT = PXP_CTRL_fields_::eEN_REPEAT;
  using eCLKGATE = PXP_CTRL_fields_::eCLKGATE;
  using eSFTRST = PXP_CTRL_fields_::eSFTRST;
  using ENABLE = PXP_CTRL_fields_::ENABLE;
  using IRQ_ENABLE = PXP_CTRL_fields_::IRQ_ENABLE;
  using NEXT_IRQ_ENABLE = PXP_CTRL_fields_::NEXT_IRQ_ENABLE;
  using ENABLE_LCD_HANDSHAKE = PXP_CTRL_fields_::ENABLE_LCD_HANDSHAKE;
  using ROTATE = PXP_CTRL_fields_::ROTATE;
  using HFLIP = PXP_CTRL_fields_::HFLIP;
  using VFLIP = PXP_CTRL_fields_::VFLIP;
  using ROT_POS = PXP_CTRL_fields_::ROT_POS;
  using BLOCK_SIZE = PXP_CTRL_fields_::BLOCK_SIZE;
  using EN_REPEAT = PXP_CTRL_fields_::EN_REPEAT;
  using CLKGATE = PXP_CTRL_fields_::CLKGATE;
  using SFTRST = PXP_CTRL_fields_::SFTRST;
};

// Control Register 0
struct PXP_CTRL_SET_fields_ {
  enum class eENABLE : std::uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };

  enum class eIRQ_ENABLE : std::uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };

  enum class eNEXT_IRQ_ENABLE : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eROTATE : std::uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };

  enum class eHFLIP : std::uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };

  enum class eVFLIP : std::uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };

  enum class eBLOCK_SIZE : std::uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };

  enum class eEN_REPEAT : std::uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };

  enum class eCLKGATE : std::uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };

  enum class eSFTRST : std::uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };

  // Enables PXP operation with specified parameters
  using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  using IRQ_ENABLE = ftl::mmio::Field<1, 1, eIRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Next command interrupt enable
  using NEXT_IRQ_ENABLE = ftl::mmio::Field<1, 2, eNEXT_IRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable handshake with LCD controller
  using ENABLE_LCD_HANDSHAKE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the clockwise rotation to be applied at the output buffer
  using ROTATE = ftl::mmio::Field<2, 8, eROTATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  using HFLIP = ftl::mmio::Field<1, 10, eHFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  using VFLIP = ftl::mmio::Field<1, 11, eVFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit controls where rotation will occur in the PXP datapath
  using ROT_POS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Select the block size to process.
  using BLOCK_SIZE = ftl::mmio::Field<1, 23, eBLOCK_SIZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the PXP to run continuously
  using EN_REPEAT = ftl::mmio::Field<1, 28, eEN_REPEAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit must be set to zero for normal operation
  using CLKGATE = ftl::mmio::Field<1, 30, eCLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit can be turned on and then off to reset the PXP block to its default state.
  using SFTRST = ftl::mmio::Field<1, 31, eSFTRST, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CTRL_SET_fields_

struct PXP_CTRL_SET : ftl::mmio::Register<
    0x40814004u,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    PXP_CTRL_SET_fields_::ENABLE,
    PXP_CTRL_SET_fields_::IRQ_ENABLE,
    PXP_CTRL_SET_fields_::NEXT_IRQ_ENABLE,
    ftl::mmio::Reserved<1, 3>,
    PXP_CTRL_SET_fields_::ENABLE_LCD_HANDSHAKE,
    ftl::mmio::Reserved<3, 5>,
    PXP_CTRL_SET_fields_::ROTATE,
    PXP_CTRL_SET_fields_::HFLIP,
    PXP_CTRL_SET_fields_::VFLIP,
    ftl::mmio::Reserved<10, 12>,
    PXP_CTRL_SET_fields_::ROT_POS,
    PXP_CTRL_SET_fields_::BLOCK_SIZE,
    ftl::mmio::Reserved<4, 24>,
    PXP_CTRL_SET_fields_::EN_REPEAT,
    ftl::mmio::Reserved<1, 29>,
    PXP_CTRL_SET_fields_::CLKGATE,
    PXP_CTRL_SET_fields_::SFTRST> {
  using eENABLE = PXP_CTRL_SET_fields_::eENABLE;
  using eIRQ_ENABLE = PXP_CTRL_SET_fields_::eIRQ_ENABLE;
  using eNEXT_IRQ_ENABLE = PXP_CTRL_SET_fields_::eNEXT_IRQ_ENABLE;
  using eROTATE = PXP_CTRL_SET_fields_::eROTATE;
  using eHFLIP = PXP_CTRL_SET_fields_::eHFLIP;
  using eVFLIP = PXP_CTRL_SET_fields_::eVFLIP;
  using eBLOCK_SIZE = PXP_CTRL_SET_fields_::eBLOCK_SIZE;
  using eEN_REPEAT = PXP_CTRL_SET_fields_::eEN_REPEAT;
  using eCLKGATE = PXP_CTRL_SET_fields_::eCLKGATE;
  using eSFTRST = PXP_CTRL_SET_fields_::eSFTRST;
  using ENABLE = PXP_CTRL_SET_fields_::ENABLE;
  using IRQ_ENABLE = PXP_CTRL_SET_fields_::IRQ_ENABLE;
  using NEXT_IRQ_ENABLE = PXP_CTRL_SET_fields_::NEXT_IRQ_ENABLE;
  using ENABLE_LCD_HANDSHAKE = PXP_CTRL_SET_fields_::ENABLE_LCD_HANDSHAKE;
  using ROTATE = PXP_CTRL_SET_fields_::ROTATE;
  using HFLIP = PXP_CTRL_SET_fields_::HFLIP;
  using VFLIP = PXP_CTRL_SET_fields_::VFLIP;
  using ROT_POS = PXP_CTRL_SET_fields_::ROT_POS;
  using BLOCK_SIZE = PXP_CTRL_SET_fields_::BLOCK_SIZE;
  using EN_REPEAT = PXP_CTRL_SET_fields_::EN_REPEAT;
  using CLKGATE = PXP_CTRL_SET_fields_::CLKGATE;
  using SFTRST = PXP_CTRL_SET_fields_::SFTRST;
};

// Control Register 0
struct PXP_CTRL_CLR_fields_ {
  enum class eENABLE : std::uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };

  enum class eIRQ_ENABLE : std::uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };

  enum class eNEXT_IRQ_ENABLE : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eROTATE : std::uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };

  enum class eHFLIP : std::uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };

  enum class eVFLIP : std::uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };

  enum class eBLOCK_SIZE : std::uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };

  enum class eEN_REPEAT : std::uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };

  enum class eCLKGATE : std::uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };

  enum class eSFTRST : std::uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };

  // Enables PXP operation with specified parameters
  using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  using IRQ_ENABLE = ftl::mmio::Field<1, 1, eIRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Next command interrupt enable
  using NEXT_IRQ_ENABLE = ftl::mmio::Field<1, 2, eNEXT_IRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable handshake with LCD controller
  using ENABLE_LCD_HANDSHAKE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the clockwise rotation to be applied at the output buffer
  using ROTATE = ftl::mmio::Field<2, 8, eROTATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  using HFLIP = ftl::mmio::Field<1, 10, eHFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  using VFLIP = ftl::mmio::Field<1, 11, eVFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit controls where rotation will occur in the PXP datapath
  using ROT_POS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Select the block size to process.
  using BLOCK_SIZE = ftl::mmio::Field<1, 23, eBLOCK_SIZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the PXP to run continuously
  using EN_REPEAT = ftl::mmio::Field<1, 28, eEN_REPEAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit must be set to zero for normal operation
  using CLKGATE = ftl::mmio::Field<1, 30, eCLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit can be turned on and then off to reset the PXP block to its default state.
  using SFTRST = ftl::mmio::Field<1, 31, eSFTRST, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CTRL_CLR_fields_

struct PXP_CTRL_CLR : ftl::mmio::Register<
    0x40814008u,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    PXP_CTRL_CLR_fields_::ENABLE,
    PXP_CTRL_CLR_fields_::IRQ_ENABLE,
    PXP_CTRL_CLR_fields_::NEXT_IRQ_ENABLE,
    ftl::mmio::Reserved<1, 3>,
    PXP_CTRL_CLR_fields_::ENABLE_LCD_HANDSHAKE,
    ftl::mmio::Reserved<3, 5>,
    PXP_CTRL_CLR_fields_::ROTATE,
    PXP_CTRL_CLR_fields_::HFLIP,
    PXP_CTRL_CLR_fields_::VFLIP,
    ftl::mmio::Reserved<10, 12>,
    PXP_CTRL_CLR_fields_::ROT_POS,
    PXP_CTRL_CLR_fields_::BLOCK_SIZE,
    ftl::mmio::Reserved<4, 24>,
    PXP_CTRL_CLR_fields_::EN_REPEAT,
    ftl::mmio::Reserved<1, 29>,
    PXP_CTRL_CLR_fields_::CLKGATE,
    PXP_CTRL_CLR_fields_::SFTRST> {
  using eENABLE = PXP_CTRL_CLR_fields_::eENABLE;
  using eIRQ_ENABLE = PXP_CTRL_CLR_fields_::eIRQ_ENABLE;
  using eNEXT_IRQ_ENABLE = PXP_CTRL_CLR_fields_::eNEXT_IRQ_ENABLE;
  using eROTATE = PXP_CTRL_CLR_fields_::eROTATE;
  using eHFLIP = PXP_CTRL_CLR_fields_::eHFLIP;
  using eVFLIP = PXP_CTRL_CLR_fields_::eVFLIP;
  using eBLOCK_SIZE = PXP_CTRL_CLR_fields_::eBLOCK_SIZE;
  using eEN_REPEAT = PXP_CTRL_CLR_fields_::eEN_REPEAT;
  using eCLKGATE = PXP_CTRL_CLR_fields_::eCLKGATE;
  using eSFTRST = PXP_CTRL_CLR_fields_::eSFTRST;
  using ENABLE = PXP_CTRL_CLR_fields_::ENABLE;
  using IRQ_ENABLE = PXP_CTRL_CLR_fields_::IRQ_ENABLE;
  using NEXT_IRQ_ENABLE = PXP_CTRL_CLR_fields_::NEXT_IRQ_ENABLE;
  using ENABLE_LCD_HANDSHAKE = PXP_CTRL_CLR_fields_::ENABLE_LCD_HANDSHAKE;
  using ROTATE = PXP_CTRL_CLR_fields_::ROTATE;
  using HFLIP = PXP_CTRL_CLR_fields_::HFLIP;
  using VFLIP = PXP_CTRL_CLR_fields_::VFLIP;
  using ROT_POS = PXP_CTRL_CLR_fields_::ROT_POS;
  using BLOCK_SIZE = PXP_CTRL_CLR_fields_::BLOCK_SIZE;
  using EN_REPEAT = PXP_CTRL_CLR_fields_::EN_REPEAT;
  using CLKGATE = PXP_CTRL_CLR_fields_::CLKGATE;
  using SFTRST = PXP_CTRL_CLR_fields_::SFTRST;
};

// Control Register 0
struct PXP_CTRL_TOG_fields_ {
  enum class eENABLE : std::uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };

  enum class eIRQ_ENABLE : std::uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };

  enum class eNEXT_IRQ_ENABLE : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eROTATE : std::uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };

  enum class eHFLIP : std::uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };

  enum class eVFLIP : std::uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };

  enum class eBLOCK_SIZE : std::uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };

  enum class eEN_REPEAT : std::uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };

  enum class eCLKGATE : std::uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };

  enum class eSFTRST : std::uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };

  // Enables PXP operation with specified parameters
  using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  using IRQ_ENABLE = ftl::mmio::Field<1, 1, eIRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Next command interrupt enable
  using NEXT_IRQ_ENABLE = ftl::mmio::Field<1, 2, eNEXT_IRQ_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable handshake with LCD controller
  using ENABLE_LCD_HANDSHAKE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the clockwise rotation to be applied at the output buffer
  using ROTATE = ftl::mmio::Field<2, 8, eROTATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  using HFLIP = ftl::mmio::Field<1, 10, eHFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  using VFLIP = ftl::mmio::Field<1, 11, eVFLIP, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit controls where rotation will occur in the PXP datapath
  using ROT_POS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Select the block size to process.
  using BLOCK_SIZE = ftl::mmio::Field<1, 23, eBLOCK_SIZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the PXP to run continuously
  using EN_REPEAT = ftl::mmio::Field<1, 28, eEN_REPEAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit must be set to zero for normal operation
  using CLKGATE = ftl::mmio::Field<1, 30, eCLKGATE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit can be turned on and then off to reset the PXP block to its default state.
  using SFTRST = ftl::mmio::Field<1, 31, eSFTRST, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CTRL_TOG_fields_

struct PXP_CTRL_TOG : ftl::mmio::Register<
    0x4081400Cu,
    std::uint32_t,
    0xC0000000u,
    ftl::mmio::RW,
    PXP_CTRL_TOG_fields_::ENABLE,
    PXP_CTRL_TOG_fields_::IRQ_ENABLE,
    PXP_CTRL_TOG_fields_::NEXT_IRQ_ENABLE,
    ftl::mmio::Reserved<1, 3>,
    PXP_CTRL_TOG_fields_::ENABLE_LCD_HANDSHAKE,
    ftl::mmio::Reserved<3, 5>,
    PXP_CTRL_TOG_fields_::ROTATE,
    PXP_CTRL_TOG_fields_::HFLIP,
    PXP_CTRL_TOG_fields_::VFLIP,
    ftl::mmio::Reserved<10, 12>,
    PXP_CTRL_TOG_fields_::ROT_POS,
    PXP_CTRL_TOG_fields_::BLOCK_SIZE,
    ftl::mmio::Reserved<4, 24>,
    PXP_CTRL_TOG_fields_::EN_REPEAT,
    ftl::mmio::Reserved<1, 29>,
    PXP_CTRL_TOG_fields_::CLKGATE,
    PXP_CTRL_TOG_fields_::SFTRST> {
  using eENABLE = PXP_CTRL_TOG_fields_::eENABLE;
  using eIRQ_ENABLE = PXP_CTRL_TOG_fields_::eIRQ_ENABLE;
  using eNEXT_IRQ_ENABLE = PXP_CTRL_TOG_fields_::eNEXT_IRQ_ENABLE;
  using eROTATE = PXP_CTRL_TOG_fields_::eROTATE;
  using eHFLIP = PXP_CTRL_TOG_fields_::eHFLIP;
  using eVFLIP = PXP_CTRL_TOG_fields_::eVFLIP;
  using eBLOCK_SIZE = PXP_CTRL_TOG_fields_::eBLOCK_SIZE;
  using eEN_REPEAT = PXP_CTRL_TOG_fields_::eEN_REPEAT;
  using eCLKGATE = PXP_CTRL_TOG_fields_::eCLKGATE;
  using eSFTRST = PXP_CTRL_TOG_fields_::eSFTRST;
  using ENABLE = PXP_CTRL_TOG_fields_::ENABLE;
  using IRQ_ENABLE = PXP_CTRL_TOG_fields_::IRQ_ENABLE;
  using NEXT_IRQ_ENABLE = PXP_CTRL_TOG_fields_::NEXT_IRQ_ENABLE;
  using ENABLE_LCD_HANDSHAKE = PXP_CTRL_TOG_fields_::ENABLE_LCD_HANDSHAKE;
  using ROTATE = PXP_CTRL_TOG_fields_::ROTATE;
  using HFLIP = PXP_CTRL_TOG_fields_::HFLIP;
  using VFLIP = PXP_CTRL_TOG_fields_::VFLIP;
  using ROT_POS = PXP_CTRL_TOG_fields_::ROT_POS;
  using BLOCK_SIZE = PXP_CTRL_TOG_fields_::BLOCK_SIZE;
  using EN_REPEAT = PXP_CTRL_TOG_fields_::EN_REPEAT;
  using CLKGATE = PXP_CTRL_TOG_fields_::CLKGATE;
  using SFTRST = PXP_CTRL_TOG_fields_::SFTRST;
};

// Status Register
struct PXP_STAT_fields_ {
  enum class eIRQ : std::uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };

  enum class eAXI_WRITE_ERROR : std::uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };

  enum class eAXI_READ_ERROR : std::uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };

  enum class eLUT_DMA_LOAD_DONE_IRQ : std::uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };

  // Indicates current PXP interrupt status
  using IRQ = ftl::mmio::Field<1, 0, eIRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  using AXI_WRITE_ERROR = ftl::mmio::Field<1, 1, eAXI_WRITE_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  using AXI_READ_ERROR = ftl::mmio::Field<1, 2, eAXI_READ_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
  using NEXT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the AXI ID of the failing bus operation.
  using AXI_ERROR_ID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates that the LUT DMA transfer has completed.
  using LUT_DMA_LOAD_DONE_IRQ = ftl::mmio::Field<1, 8, eLUT_DMA_LOAD_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKY = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKX = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PXP_STAT_fields_

struct PXP_STAT : ftl::mmio::Register<
    0x40814010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_STAT_fields_::IRQ,
    PXP_STAT_fields_::AXI_WRITE_ERROR,
    PXP_STAT_fields_::AXI_READ_ERROR,
    PXP_STAT_fields_::NEXT_IRQ,
    PXP_STAT_fields_::AXI_ERROR_ID,
    PXP_STAT_fields_::LUT_DMA_LOAD_DONE_IRQ,
    ftl::mmio::Reserved<7, 9>,
    PXP_STAT_fields_::BLOCKY,
    PXP_STAT_fields_::BLOCKX> {
  using eIRQ = PXP_STAT_fields_::eIRQ;
  using eAXI_WRITE_ERROR = PXP_STAT_fields_::eAXI_WRITE_ERROR;
  using eAXI_READ_ERROR = PXP_STAT_fields_::eAXI_READ_ERROR;
  using eLUT_DMA_LOAD_DONE_IRQ = PXP_STAT_fields_::eLUT_DMA_LOAD_DONE_IRQ;
  using IRQ = PXP_STAT_fields_::IRQ;
  using AXI_WRITE_ERROR = PXP_STAT_fields_::AXI_WRITE_ERROR;
  using AXI_READ_ERROR = PXP_STAT_fields_::AXI_READ_ERROR;
  using NEXT_IRQ = PXP_STAT_fields_::NEXT_IRQ;
  using AXI_ERROR_ID = PXP_STAT_fields_::AXI_ERROR_ID;
  using LUT_DMA_LOAD_DONE_IRQ = PXP_STAT_fields_::LUT_DMA_LOAD_DONE_IRQ;
  using BLOCKY = PXP_STAT_fields_::BLOCKY;
  using BLOCKX = PXP_STAT_fields_::BLOCKX;
};

// Status Register
struct PXP_STAT_SET_fields_ {
  enum class eIRQ : std::uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };

  enum class eAXI_WRITE_ERROR : std::uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };

  enum class eAXI_READ_ERROR : std::uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };

  enum class eLUT_DMA_LOAD_DONE_IRQ : std::uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };

  // Indicates current PXP interrupt status
  using IRQ = ftl::mmio::Field<1, 0, eIRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  using AXI_WRITE_ERROR = ftl::mmio::Field<1, 1, eAXI_WRITE_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  using AXI_READ_ERROR = ftl::mmio::Field<1, 2, eAXI_READ_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
  using NEXT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the AXI ID of the failing bus operation.
  using AXI_ERROR_ID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates that the LUT DMA transfer has completed.
  using LUT_DMA_LOAD_DONE_IRQ = ftl::mmio::Field<1, 8, eLUT_DMA_LOAD_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKY = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKX = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PXP_STAT_SET_fields_

struct PXP_STAT_SET : ftl::mmio::Register<
    0x40814014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_STAT_SET_fields_::IRQ,
    PXP_STAT_SET_fields_::AXI_WRITE_ERROR,
    PXP_STAT_SET_fields_::AXI_READ_ERROR,
    PXP_STAT_SET_fields_::NEXT_IRQ,
    PXP_STAT_SET_fields_::AXI_ERROR_ID,
    PXP_STAT_SET_fields_::LUT_DMA_LOAD_DONE_IRQ,
    ftl::mmio::Reserved<7, 9>,
    PXP_STAT_SET_fields_::BLOCKY,
    PXP_STAT_SET_fields_::BLOCKX> {
  using eIRQ = PXP_STAT_SET_fields_::eIRQ;
  using eAXI_WRITE_ERROR = PXP_STAT_SET_fields_::eAXI_WRITE_ERROR;
  using eAXI_READ_ERROR = PXP_STAT_SET_fields_::eAXI_READ_ERROR;
  using eLUT_DMA_LOAD_DONE_IRQ = PXP_STAT_SET_fields_::eLUT_DMA_LOAD_DONE_IRQ;
  using IRQ = PXP_STAT_SET_fields_::IRQ;
  using AXI_WRITE_ERROR = PXP_STAT_SET_fields_::AXI_WRITE_ERROR;
  using AXI_READ_ERROR = PXP_STAT_SET_fields_::AXI_READ_ERROR;
  using NEXT_IRQ = PXP_STAT_SET_fields_::NEXT_IRQ;
  using AXI_ERROR_ID = PXP_STAT_SET_fields_::AXI_ERROR_ID;
  using LUT_DMA_LOAD_DONE_IRQ = PXP_STAT_SET_fields_::LUT_DMA_LOAD_DONE_IRQ;
  using BLOCKY = PXP_STAT_SET_fields_::BLOCKY;
  using BLOCKX = PXP_STAT_SET_fields_::BLOCKX;
};

// Status Register
struct PXP_STAT_CLR_fields_ {
  enum class eIRQ : std::uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };

  enum class eAXI_WRITE_ERROR : std::uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };

  enum class eAXI_READ_ERROR : std::uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };

  enum class eLUT_DMA_LOAD_DONE_IRQ : std::uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };

  // Indicates current PXP interrupt status
  using IRQ = ftl::mmio::Field<1, 0, eIRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  using AXI_WRITE_ERROR = ftl::mmio::Field<1, 1, eAXI_WRITE_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  using AXI_READ_ERROR = ftl::mmio::Field<1, 2, eAXI_READ_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
  using NEXT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the AXI ID of the failing bus operation.
  using AXI_ERROR_ID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates that the LUT DMA transfer has completed.
  using LUT_DMA_LOAD_DONE_IRQ = ftl::mmio::Field<1, 8, eLUT_DMA_LOAD_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKY = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKX = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PXP_STAT_CLR_fields_

struct PXP_STAT_CLR : ftl::mmio::Register<
    0x40814018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_STAT_CLR_fields_::IRQ,
    PXP_STAT_CLR_fields_::AXI_WRITE_ERROR,
    PXP_STAT_CLR_fields_::AXI_READ_ERROR,
    PXP_STAT_CLR_fields_::NEXT_IRQ,
    PXP_STAT_CLR_fields_::AXI_ERROR_ID,
    PXP_STAT_CLR_fields_::LUT_DMA_LOAD_DONE_IRQ,
    ftl::mmio::Reserved<7, 9>,
    PXP_STAT_CLR_fields_::BLOCKY,
    PXP_STAT_CLR_fields_::BLOCKX> {
  using eIRQ = PXP_STAT_CLR_fields_::eIRQ;
  using eAXI_WRITE_ERROR = PXP_STAT_CLR_fields_::eAXI_WRITE_ERROR;
  using eAXI_READ_ERROR = PXP_STAT_CLR_fields_::eAXI_READ_ERROR;
  using eLUT_DMA_LOAD_DONE_IRQ = PXP_STAT_CLR_fields_::eLUT_DMA_LOAD_DONE_IRQ;
  using IRQ = PXP_STAT_CLR_fields_::IRQ;
  using AXI_WRITE_ERROR = PXP_STAT_CLR_fields_::AXI_WRITE_ERROR;
  using AXI_READ_ERROR = PXP_STAT_CLR_fields_::AXI_READ_ERROR;
  using NEXT_IRQ = PXP_STAT_CLR_fields_::NEXT_IRQ;
  using AXI_ERROR_ID = PXP_STAT_CLR_fields_::AXI_ERROR_ID;
  using LUT_DMA_LOAD_DONE_IRQ = PXP_STAT_CLR_fields_::LUT_DMA_LOAD_DONE_IRQ;
  using BLOCKY = PXP_STAT_CLR_fields_::BLOCKY;
  using BLOCKX = PXP_STAT_CLR_fields_::BLOCKX;
};

// Status Register
struct PXP_STAT_TOG_fields_ {
  enum class eIRQ : std::uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };

  enum class eAXI_WRITE_ERROR : std::uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };

  enum class eAXI_READ_ERROR : std::uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };

  enum class eLUT_DMA_LOAD_DONE_IRQ : std::uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };

  // Indicates current PXP interrupt status
  using IRQ = ftl::mmio::Field<1, 0, eIRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  using AXI_WRITE_ERROR = ftl::mmio::Field<1, 1, eAXI_WRITE_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  using AXI_READ_ERROR = ftl::mmio::Field<1, 2, eAXI_READ_ERROR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
  using NEXT_IRQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the AXI ID of the failing bus operation.
  using AXI_ERROR_ID = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates that the LUT DMA transfer has completed.
  using LUT_DMA_LOAD_DONE_IRQ = ftl::mmio::Field<1, 8, eLUT_DMA_LOAD_DONE_IRQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKY = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Indicates the X coordinate of the block currently being rendered.
  using BLOCKX = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PXP_STAT_TOG_fields_

struct PXP_STAT_TOG : ftl::mmio::Register<
    0x4081401Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_STAT_TOG_fields_::IRQ,
    PXP_STAT_TOG_fields_::AXI_WRITE_ERROR,
    PXP_STAT_TOG_fields_::AXI_READ_ERROR,
    PXP_STAT_TOG_fields_::NEXT_IRQ,
    PXP_STAT_TOG_fields_::AXI_ERROR_ID,
    PXP_STAT_TOG_fields_::LUT_DMA_LOAD_DONE_IRQ,
    ftl::mmio::Reserved<7, 9>,
    PXP_STAT_TOG_fields_::BLOCKY,
    PXP_STAT_TOG_fields_::BLOCKX> {
  using eIRQ = PXP_STAT_TOG_fields_::eIRQ;
  using eAXI_WRITE_ERROR = PXP_STAT_TOG_fields_::eAXI_WRITE_ERROR;
  using eAXI_READ_ERROR = PXP_STAT_TOG_fields_::eAXI_READ_ERROR;
  using eLUT_DMA_LOAD_DONE_IRQ = PXP_STAT_TOG_fields_::eLUT_DMA_LOAD_DONE_IRQ;
  using IRQ = PXP_STAT_TOG_fields_::IRQ;
  using AXI_WRITE_ERROR = PXP_STAT_TOG_fields_::AXI_WRITE_ERROR;
  using AXI_READ_ERROR = PXP_STAT_TOG_fields_::AXI_READ_ERROR;
  using NEXT_IRQ = PXP_STAT_TOG_fields_::NEXT_IRQ;
  using AXI_ERROR_ID = PXP_STAT_TOG_fields_::AXI_ERROR_ID;
  using LUT_DMA_LOAD_DONE_IRQ = PXP_STAT_TOG_fields_::LUT_DMA_LOAD_DONE_IRQ;
  using BLOCKY = PXP_STAT_TOG_fields_::BLOCKY;
  using BLOCKX = PXP_STAT_TOG_fields_::BLOCKX;
};

// Output Buffer Control Register
struct PXP_OUT_CTRL_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels
    eARGB8888 = 0,
    // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888 = 4,
    // 24-bit pixels (packed 24-bit format)
    eRGB888P = 5,
    // 16-bit pixels
    eARGB1555 = 8,
    // 16-bit pixels
    eARGB4444 = 9,
    // 16-bit pixels
    eRGB555 = 12,
    // 16-bit pixels
    eRGB444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
  };

  enum class eINTERLACED_OUTPUT : std::uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };

  enum class eALPHA_OUTPUT : std::uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };

  // Output framebuffer format
  using FORMAT = ftl::mmio::Field<5, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Determines how the PXP writes it's output data
  using INTERLACED_OUTPUT = ftl::mmio::Field<2, 8, eINTERLACED_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  using ALPHA_OUTPUT = ftl::mmio::Field<1, 23, eALPHA_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
  using ALPHA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_CTRL_fields_

struct PXP_OUT_CTRL : ftl::mmio::Register<
    0x40814020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_CTRL_fields_::FORMAT,
    ftl::mmio::Reserved<3, 5>,
    PXP_OUT_CTRL_fields_::INTERLACED_OUTPUT,
    ftl::mmio::Reserved<13, 10>,
    PXP_OUT_CTRL_fields_::ALPHA_OUTPUT,
    PXP_OUT_CTRL_fields_::ALPHA> {
  using eFORMAT = PXP_OUT_CTRL_fields_::eFORMAT;
  using eINTERLACED_OUTPUT = PXP_OUT_CTRL_fields_::eINTERLACED_OUTPUT;
  using eALPHA_OUTPUT = PXP_OUT_CTRL_fields_::eALPHA_OUTPUT;
  using FORMAT = PXP_OUT_CTRL_fields_::FORMAT;
  using INTERLACED_OUTPUT = PXP_OUT_CTRL_fields_::INTERLACED_OUTPUT;
  using ALPHA_OUTPUT = PXP_OUT_CTRL_fields_::ALPHA_OUTPUT;
  using ALPHA = PXP_OUT_CTRL_fields_::ALPHA;
};

// Output Buffer Control Register
struct PXP_OUT_CTRL_SET_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels
    eARGB8888 = 0,
    // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888 = 4,
    // 24-bit pixels (packed 24-bit format)
    eRGB888P = 5,
    // 16-bit pixels
    eARGB1555 = 8,
    // 16-bit pixels
    eARGB4444 = 9,
    // 16-bit pixels
    eRGB555 = 12,
    // 16-bit pixels
    eRGB444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
  };

  enum class eINTERLACED_OUTPUT : std::uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };

  enum class eALPHA_OUTPUT : std::uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };

  // Output framebuffer format
  using FORMAT = ftl::mmio::Field<5, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Determines how the PXP writes it's output data
  using INTERLACED_OUTPUT = ftl::mmio::Field<2, 8, eINTERLACED_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  using ALPHA_OUTPUT = ftl::mmio::Field<1, 23, eALPHA_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
  using ALPHA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_CTRL_SET_fields_

struct PXP_OUT_CTRL_SET : ftl::mmio::Register<
    0x40814024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_CTRL_SET_fields_::FORMAT,
    ftl::mmio::Reserved<3, 5>,
    PXP_OUT_CTRL_SET_fields_::INTERLACED_OUTPUT,
    ftl::mmio::Reserved<13, 10>,
    PXP_OUT_CTRL_SET_fields_::ALPHA_OUTPUT,
    PXP_OUT_CTRL_SET_fields_::ALPHA> {
  using eFORMAT = PXP_OUT_CTRL_SET_fields_::eFORMAT;
  using eINTERLACED_OUTPUT = PXP_OUT_CTRL_SET_fields_::eINTERLACED_OUTPUT;
  using eALPHA_OUTPUT = PXP_OUT_CTRL_SET_fields_::eALPHA_OUTPUT;
  using FORMAT = PXP_OUT_CTRL_SET_fields_::FORMAT;
  using INTERLACED_OUTPUT = PXP_OUT_CTRL_SET_fields_::INTERLACED_OUTPUT;
  using ALPHA_OUTPUT = PXP_OUT_CTRL_SET_fields_::ALPHA_OUTPUT;
  using ALPHA = PXP_OUT_CTRL_SET_fields_::ALPHA;
};

// Output Buffer Control Register
struct PXP_OUT_CTRL_CLR_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels
    eARGB8888 = 0,
    // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888 = 4,
    // 24-bit pixels (packed 24-bit format)
    eRGB888P = 5,
    // 16-bit pixels
    eARGB1555 = 8,
    // 16-bit pixels
    eARGB4444 = 9,
    // 16-bit pixels
    eRGB555 = 12,
    // 16-bit pixels
    eRGB444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
  };

  enum class eINTERLACED_OUTPUT : std::uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };

  enum class eALPHA_OUTPUT : std::uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };

  // Output framebuffer format
  using FORMAT = ftl::mmio::Field<5, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Determines how the PXP writes it's output data
  using INTERLACED_OUTPUT = ftl::mmio::Field<2, 8, eINTERLACED_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  using ALPHA_OUTPUT = ftl::mmio::Field<1, 23, eALPHA_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
  using ALPHA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_CTRL_CLR_fields_

struct PXP_OUT_CTRL_CLR : ftl::mmio::Register<
    0x40814028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_CTRL_CLR_fields_::FORMAT,
    ftl::mmio::Reserved<3, 5>,
    PXP_OUT_CTRL_CLR_fields_::INTERLACED_OUTPUT,
    ftl::mmio::Reserved<13, 10>,
    PXP_OUT_CTRL_CLR_fields_::ALPHA_OUTPUT,
    PXP_OUT_CTRL_CLR_fields_::ALPHA> {
  using eFORMAT = PXP_OUT_CTRL_CLR_fields_::eFORMAT;
  using eINTERLACED_OUTPUT = PXP_OUT_CTRL_CLR_fields_::eINTERLACED_OUTPUT;
  using eALPHA_OUTPUT = PXP_OUT_CTRL_CLR_fields_::eALPHA_OUTPUT;
  using FORMAT = PXP_OUT_CTRL_CLR_fields_::FORMAT;
  using INTERLACED_OUTPUT = PXP_OUT_CTRL_CLR_fields_::INTERLACED_OUTPUT;
  using ALPHA_OUTPUT = PXP_OUT_CTRL_CLR_fields_::ALPHA_OUTPUT;
  using ALPHA = PXP_OUT_CTRL_CLR_fields_::ALPHA;
};

// Output Buffer Control Register
struct PXP_OUT_CTRL_TOG_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels
    eARGB8888 = 0,
    // 32-bit pixels (unpacked 24-bit pixel in 32 bit DWORD.)
    eRGB888 = 4,
    // 24-bit pixels (packed 24-bit format)
    eRGB888P = 5,
    // 16-bit pixels
    eARGB1555 = 8,
    // 16-bit pixels
    eARGB4444 = 9,
    // 16-bit pixels
    eRGB555 = 12,
    // 16-bit pixels
    eRGB444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
  };

  enum class eINTERLACED_OUTPUT : std::uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };

  enum class eALPHA_OUTPUT : std::uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };

  // Output framebuffer format
  using FORMAT = ftl::mmio::Field<5, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Determines how the PXP writes it's output data
  using INTERLACED_OUTPUT = ftl::mmio::Field<2, 8, eINTERLACED_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  using ALPHA_OUTPUT = ftl::mmio::Field<1, 23, eALPHA_OUTPUT, ftl::mmio::RW, ftl::mmio::Normal>;
  // When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
  using ALPHA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_CTRL_TOG_fields_

struct PXP_OUT_CTRL_TOG : ftl::mmio::Register<
    0x4081402Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_CTRL_TOG_fields_::FORMAT,
    ftl::mmio::Reserved<3, 5>,
    PXP_OUT_CTRL_TOG_fields_::INTERLACED_OUTPUT,
    ftl::mmio::Reserved<13, 10>,
    PXP_OUT_CTRL_TOG_fields_::ALPHA_OUTPUT,
    PXP_OUT_CTRL_TOG_fields_::ALPHA> {
  using eFORMAT = PXP_OUT_CTRL_TOG_fields_::eFORMAT;
  using eINTERLACED_OUTPUT = PXP_OUT_CTRL_TOG_fields_::eINTERLACED_OUTPUT;
  using eALPHA_OUTPUT = PXP_OUT_CTRL_TOG_fields_::eALPHA_OUTPUT;
  using FORMAT = PXP_OUT_CTRL_TOG_fields_::FORMAT;
  using INTERLACED_OUTPUT = PXP_OUT_CTRL_TOG_fields_::INTERLACED_OUTPUT;
  using ALPHA_OUTPUT = PXP_OUT_CTRL_TOG_fields_::ALPHA_OUTPUT;
  using ALPHA = PXP_OUT_CTRL_TOG_fields_::ALPHA;
};

// Output Frame Buffer Pointer
struct PXP_OUT_BUF_fields_ {
  // Current address pointer for the output frame buffer
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_BUF_fields_

struct PXP_OUT_BUF : ftl::mmio::Register<
    0x40814030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_BUF_fields_::ADDR> {
  using ADDR = PXP_OUT_BUF_fields_::ADDR;
};

// Output Frame Buffer Pointer #2
struct PXP_OUT_BUF2_fields_ {
  // Current address pointer for the output frame buffer
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_BUF2_fields_

struct PXP_OUT_BUF2 : ftl::mmio::Register<
    0x40814040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_BUF2_fields_::ADDR> {
  using ADDR = PXP_OUT_BUF2_fields_::ADDR;
};

// Output Buffer Pitch
struct PXP_OUT_PITCH_fields_ {
  // Indicates the number of bytes in memory between two vertically adjacent pixels.
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_PITCH_fields_

struct PXP_OUT_PITCH : ftl::mmio::Register<
    0x40814050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_PITCH_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = PXP_OUT_PITCH_fields_::PITCH;
};

// Output Surface Lower Right Coordinate
struct PXP_OUT_LRC_fields_ {
  // Indicates the number of vertical PIXELS in the output surface (non-rotated)
  using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates number of horizontal PIXELS in the output surface (non-rotated)
  using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_LRC_fields_

struct PXP_OUT_LRC : ftl::mmio::Register<
    0x40814060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_LRC_fields_::Y,
    ftl::mmio::Reserved<2, 14>,
    PXP_OUT_LRC_fields_::X,
    ftl::mmio::Reserved<2, 30>> {
  using Y = PXP_OUT_LRC_fields_::Y;
  using X = PXP_OUT_LRC_fields_::X;
};

// Processed Surface Upper Left Coordinate
struct PXP_OUT_PS_ULC_fields_ {
  // This field indicates the upper left Y-coordinate (in pixels) of the processed surface in the output buffer
  using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field indicates the upper left X-coordinate (in pixels) of the processed surface (PS) in the output buffer
  using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_PS_ULC_fields_

struct PXP_OUT_PS_ULC : ftl::mmio::Register<
    0x40814070u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_PS_ULC_fields_::Y,
    ftl::mmio::Reserved<2, 14>,
    PXP_OUT_PS_ULC_fields_::X,
    ftl::mmio::Reserved<2, 30>> {
  using Y = PXP_OUT_PS_ULC_fields_::Y;
  using X = PXP_OUT_PS_ULC_fields_::X;
};

// Processed Surface Lower Right Coordinate
struct PXP_OUT_PS_LRC_fields_ {
  // This field indicates the lower right Y-coordinate (in pixels) of the processed surface in the output frame buffer
  using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field indicates the lower right X-coordinate (in pixels) of the processed surface (PS) in the output frame buffer
  using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_PS_LRC_fields_

struct PXP_OUT_PS_LRC : ftl::mmio::Register<
    0x40814080u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_PS_LRC_fields_::Y,
    ftl::mmio::Reserved<2, 14>,
    PXP_OUT_PS_LRC_fields_::X,
    ftl::mmio::Reserved<2, 30>> {
  using Y = PXP_OUT_PS_LRC_fields_::Y;
  using X = PXP_OUT_PS_LRC_fields_::X;
};

// Alpha Surface Upper Left Coordinate
struct PXP_OUT_AS_ULC_fields_ {
  // This field indicates the upper left Y-coordinate (in pixels) of the alpha surface in the output frame buffer
  using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field indicates the upper left X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
  using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_AS_ULC_fields_

struct PXP_OUT_AS_ULC : ftl::mmio::Register<
    0x40814090u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_AS_ULC_fields_::Y,
    ftl::mmio::Reserved<2, 14>,
    PXP_OUT_AS_ULC_fields_::X,
    ftl::mmio::Reserved<2, 30>> {
  using Y = PXP_OUT_AS_ULC_fields_::Y;
  using X = PXP_OUT_AS_ULC_fields_::X;
};

// Alpha Surface Lower Right Coordinate
struct PXP_OUT_AS_LRC_fields_ {
  // This field indicates the lower right Y-coordinate (in pixels) of the alpha surface in the output frame buffer
  using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field indicates the lower right X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
  using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_OUT_AS_LRC_fields_

struct PXP_OUT_AS_LRC : ftl::mmio::Register<
    0x408140A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_OUT_AS_LRC_fields_::Y,
    ftl::mmio::Reserved<2, 14>,
    PXP_OUT_AS_LRC_fields_::X,
    ftl::mmio::Reserved<2, 30>> {
  using Y = PXP_OUT_AS_LRC_fields_::Y;
  using X = PXP_OUT_AS_LRC_fields_::X;
};

// Processed Surface (PS) Control Register
struct PXP_PS_CTRL_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB888_ARGB8888 = 4,
    // 16-bit pixels with/without alpha at high 1bit
    eRGB555_ARGB1555 = 12,
    // 16-bit pixels with/without alpha at high 4 bits
    eRGB444_ARGB4444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
    // 16-bit pixels (3-plane format)
    eYUV422 = 30,
    // 16-bit pixels (3-plane format)
    eYUV420 = 31,
    // 2-bit pixels with alpha at the low 8 bits
    eRGBA8888 = 36,
    // 16-bit pixels with alpha at the low 1bits
    eRGBA5551 = 44,
    // 16-bit pixels with alpha at the low 4 bits
    eRGBA4444 = 45,
  };

  enum class eWB_SWAP : std::uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };

  enum class eDECY : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };

  enum class eDECX : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };

  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  using FORMAT = ftl::mmio::Field<6, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  using WB_SWAP = ftl::mmio::Field<1, 6, eWB_SWAP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Verticle pre decimation filter control.
  using DECY = ftl::mmio::Field<2, 8, eDECY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Horizontal pre decimation filter control.
  using DECX = ftl::mmio::Field<2, 10, eDECX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CTRL_fields_

struct PXP_PS_CTRL : ftl::mmio::Register<
    0x408140B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_CTRL_fields_::FORMAT,
    PXP_PS_CTRL_fields_::WB_SWAP,
    ftl::mmio::Reserved<1, 7>,
    PXP_PS_CTRL_fields_::DECY,
    PXP_PS_CTRL_fields_::DECX,
    ftl::mmio::Reserved<20, 12>> {
  using eFORMAT = PXP_PS_CTRL_fields_::eFORMAT;
  using eWB_SWAP = PXP_PS_CTRL_fields_::eWB_SWAP;
  using eDECY = PXP_PS_CTRL_fields_::eDECY;
  using eDECX = PXP_PS_CTRL_fields_::eDECX;
  using FORMAT = PXP_PS_CTRL_fields_::FORMAT;
  using WB_SWAP = PXP_PS_CTRL_fields_::WB_SWAP;
  using DECY = PXP_PS_CTRL_fields_::DECY;
  using DECX = PXP_PS_CTRL_fields_::DECX;
};

// Processed Surface (PS) Control Register
struct PXP_PS_CTRL_SET_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB888_ARGB8888 = 4,
    // 16-bit pixels with/without alpha at high 1bit
    eRGB555_ARGB1555 = 12,
    // 16-bit pixels with/without alpha at high 4 bits
    eRGB444_ARGB4444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
    // 16-bit pixels (3-plane format)
    eYUV422 = 30,
    // 16-bit pixels (3-plane format)
    eYUV420 = 31,
    // 2-bit pixels with alpha at the low 8 bits
    eRGBA8888 = 36,
    // 16-bit pixels with alpha at the low 1bits
    eRGBA5551 = 44,
    // 16-bit pixels with alpha at the low 4 bits
    eRGBA4444 = 45,
  };

  enum class eWB_SWAP : std::uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };

  enum class eDECY : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };

  enum class eDECX : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };

  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  using FORMAT = ftl::mmio::Field<6, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  using WB_SWAP = ftl::mmio::Field<1, 6, eWB_SWAP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Verticle pre decimation filter control.
  using DECY = ftl::mmio::Field<2, 8, eDECY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Horizontal pre decimation filter control.
  using DECX = ftl::mmio::Field<2, 10, eDECX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CTRL_SET_fields_

struct PXP_PS_CTRL_SET : ftl::mmio::Register<
    0x408140B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_CTRL_SET_fields_::FORMAT,
    PXP_PS_CTRL_SET_fields_::WB_SWAP,
    ftl::mmio::Reserved<1, 7>,
    PXP_PS_CTRL_SET_fields_::DECY,
    PXP_PS_CTRL_SET_fields_::DECX,
    ftl::mmio::Reserved<20, 12>> {
  using eFORMAT = PXP_PS_CTRL_SET_fields_::eFORMAT;
  using eWB_SWAP = PXP_PS_CTRL_SET_fields_::eWB_SWAP;
  using eDECY = PXP_PS_CTRL_SET_fields_::eDECY;
  using eDECX = PXP_PS_CTRL_SET_fields_::eDECX;
  using FORMAT = PXP_PS_CTRL_SET_fields_::FORMAT;
  using WB_SWAP = PXP_PS_CTRL_SET_fields_::WB_SWAP;
  using DECY = PXP_PS_CTRL_SET_fields_::DECY;
  using DECX = PXP_PS_CTRL_SET_fields_::DECX;
};

// Processed Surface (PS) Control Register
struct PXP_PS_CTRL_CLR_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB888_ARGB8888 = 4,
    // 16-bit pixels with/without alpha at high 1bit
    eRGB555_ARGB1555 = 12,
    // 16-bit pixels with/without alpha at high 4 bits
    eRGB444_ARGB4444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
    // 16-bit pixels (3-plane format)
    eYUV422 = 30,
    // 16-bit pixels (3-plane format)
    eYUV420 = 31,
    // 2-bit pixels with alpha at the low 8 bits
    eRGBA8888 = 36,
    // 16-bit pixels with alpha at the low 1bits
    eRGBA5551 = 44,
    // 16-bit pixels with alpha at the low 4 bits
    eRGBA4444 = 45,
  };

  enum class eWB_SWAP : std::uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };

  enum class eDECY : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };

  enum class eDECX : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };

  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  using FORMAT = ftl::mmio::Field<6, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  using WB_SWAP = ftl::mmio::Field<1, 6, eWB_SWAP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Verticle pre decimation filter control.
  using DECY = ftl::mmio::Field<2, 8, eDECY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Horizontal pre decimation filter control.
  using DECX = ftl::mmio::Field<2, 10, eDECX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CTRL_CLR_fields_

struct PXP_PS_CTRL_CLR : ftl::mmio::Register<
    0x408140B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_CTRL_CLR_fields_::FORMAT,
    PXP_PS_CTRL_CLR_fields_::WB_SWAP,
    ftl::mmio::Reserved<1, 7>,
    PXP_PS_CTRL_CLR_fields_::DECY,
    PXP_PS_CTRL_CLR_fields_::DECX,
    ftl::mmio::Reserved<20, 12>> {
  using eFORMAT = PXP_PS_CTRL_CLR_fields_::eFORMAT;
  using eWB_SWAP = PXP_PS_CTRL_CLR_fields_::eWB_SWAP;
  using eDECY = PXP_PS_CTRL_CLR_fields_::eDECY;
  using eDECX = PXP_PS_CTRL_CLR_fields_::eDECX;
  using FORMAT = PXP_PS_CTRL_CLR_fields_::FORMAT;
  using WB_SWAP = PXP_PS_CTRL_CLR_fields_::WB_SWAP;
  using DECY = PXP_PS_CTRL_CLR_fields_::DECY;
  using DECX = PXP_PS_CTRL_CLR_fields_::DECX;
};

// Processed Surface (PS) Control Register
struct PXP_PS_CTRL_TOG_fields_ {
  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels (unpacked 24-bit format with/without alpha at high 8bits)
    eRGB888_ARGB8888 = 4,
    // 16-bit pixels with/without alpha at high 1bit
    eRGB555_ARGB1555 = 12,
    // 16-bit pixels with/without alpha at high 4 bits
    eRGB444_ARGB4444 = 13,
    // 16-bit pixels
    eRGB565 = 14,
    // 32-bit pixels (1-plane XYUV unpacked)
    eYUV1P444 = 16,
    // 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes)
    eUYVY1P422 = 18,
    // 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes)
    eVYUY1P422 = 19,
    // 8-bit monochrome pixels (1-plane Y luma output)
    eY8 = 20,
    // 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation)
    eY4 = 21,
    // 16-bit pixels (2-plane UV interleaved bytes)
    eYUV2P422 = 24,
    // 16-bit pixels (2-plane UV)
    eYUV2P420 = 25,
    // 16-bit pixels (2-plane VU interleaved bytes)
    eYVU2P422 = 26,
    // 16-bit pixels (2-plane VU)
    eYVU2P420 = 27,
    // 16-bit pixels (3-plane format)
    eYUV422 = 30,
    // 16-bit pixels (3-plane format)
    eYUV420 = 31,
    // 2-bit pixels with alpha at the low 8 bits
    eRGBA8888 = 36,
    // 16-bit pixels with alpha at the low 1bits
    eRGBA5551 = 44,
    // 16-bit pixels with alpha at the low 4 bits
    eRGBA4444 = 45,
  };

  enum class eWB_SWAP : std::uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };

  enum class eDECY : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };

  enum class eDECX : std::uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };

  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  using FORMAT = ftl::mmio::Field<6, 0, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  using WB_SWAP = ftl::mmio::Field<1, 6, eWB_SWAP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Verticle pre decimation filter control.
  using DECY = ftl::mmio::Field<2, 8, eDECY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Horizontal pre decimation filter control.
  using DECX = ftl::mmio::Field<2, 10, eDECX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CTRL_TOG_fields_

struct PXP_PS_CTRL_TOG : ftl::mmio::Register<
    0x408140BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_CTRL_TOG_fields_::FORMAT,
    PXP_PS_CTRL_TOG_fields_::WB_SWAP,
    ftl::mmio::Reserved<1, 7>,
    PXP_PS_CTRL_TOG_fields_::DECY,
    PXP_PS_CTRL_TOG_fields_::DECX,
    ftl::mmio::Reserved<20, 12>> {
  using eFORMAT = PXP_PS_CTRL_TOG_fields_::eFORMAT;
  using eWB_SWAP = PXP_PS_CTRL_TOG_fields_::eWB_SWAP;
  using eDECY = PXP_PS_CTRL_TOG_fields_::eDECY;
  using eDECX = PXP_PS_CTRL_TOG_fields_::eDECX;
  using FORMAT = PXP_PS_CTRL_TOG_fields_::FORMAT;
  using WB_SWAP = PXP_PS_CTRL_TOG_fields_::WB_SWAP;
  using DECY = PXP_PS_CTRL_TOG_fields_::DECY;
  using DECX = PXP_PS_CTRL_TOG_fields_::DECX;
};

// PS Input Buffer Address
struct PXP_PS_BUF_fields_ {
  // Address pointer for the PS RGB or Y (luma) input buffer.
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_BUF_fields_

struct PXP_PS_BUF : ftl::mmio::Register<
    0x408140C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_BUF_fields_::ADDR> {
  using ADDR = PXP_PS_BUF_fields_::ADDR;
};

// PS U/Cb or 2 Plane UV Input Buffer Address
struct PXP_PS_UBUF_fields_ {
  // Address pointer for the PS U/Cb or 2 plane UV Chroma input buffer.
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_UBUF_fields_

struct PXP_PS_UBUF : ftl::mmio::Register<
    0x408140D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_UBUF_fields_::ADDR> {
  using ADDR = PXP_PS_UBUF_fields_::ADDR;
};

// PS V/Cr Input Buffer Address
struct PXP_PS_VBUF_fields_ {
  // Address pointer for the PS V/Cr Chroma input buffer.
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_VBUF_fields_

struct PXP_PS_VBUF : ftl::mmio::Register<
    0x408140E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_VBUF_fields_::ADDR> {
  using ADDR = PXP_PS_VBUF_fields_::ADDR;
};

// Processed Surface Pitch
struct PXP_PS_PITCH_fields_ {
  // Indicates the number of bytes in memory between two vertically adjacent pixels.
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_PITCH_fields_

struct PXP_PS_PITCH : ftl::mmio::Register<
    0x408140F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_PITCH_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = PXP_PS_PITCH_fields_::PITCH;
};

// PS Background Color
struct PXP_PS_BACKGROUND_fields_ {
  // Background color (in 24bpp format) for any pixels not within the buffer range specified by the PS ULC/LRC
  using COLOR = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_BACKGROUND_fields_

struct PXP_PS_BACKGROUND : ftl::mmio::Register<
    0x40814100u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_BACKGROUND_fields_::COLOR,
    ftl::mmio::Reserved<8, 24>> {
  using COLOR = PXP_PS_BACKGROUND_fields_::COLOR;
};

// PS Scale Factor Register
struct PXP_PS_SCALE_fields_ {
  // This is a two bit integer and 12 bit fractional representation (##
  using XSCALE = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This is a two bit integer and 12 bit fractional representation (##
  using YSCALE = ftl::mmio::Field<15, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_SCALE_fields_

struct PXP_PS_SCALE : ftl::mmio::Register<
    0x40814110u,
    std::uint32_t,
    0x10001000u,
    ftl::mmio::RW,
    PXP_PS_SCALE_fields_::XSCALE,
    ftl::mmio::Reserved<1, 15>,
    PXP_PS_SCALE_fields_::YSCALE,
    ftl::mmio::Reserved<1, 31>> {
  using XSCALE = PXP_PS_SCALE_fields_::XSCALE;
  using YSCALE = PXP_PS_SCALE_fields_::YSCALE;
};

// PS Scale Offset Register
struct PXP_PS_OFFSET_fields_ {
  // This is a 12 bit fractional representation (0
  using XOFFSET = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This is a 12 bit fractional representation (0
  using YOFFSET = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_OFFSET_fields_

struct PXP_PS_OFFSET : ftl::mmio::Register<
    0x40814120u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_OFFSET_fields_::XOFFSET,
    ftl::mmio::Reserved<4, 12>,
    PXP_PS_OFFSET_fields_::YOFFSET,
    ftl::mmio::Reserved<4, 28>> {
  using XOFFSET = PXP_PS_OFFSET_fields_::XOFFSET;
  using YOFFSET = PXP_PS_OFFSET_fields_::YOFFSET;
};

// PS Color Key Low
struct PXP_PS_CLRKEYLOW_fields_ {
  // Low range of color key applied to PS buffer
  using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CLRKEYLOW_fields_

struct PXP_PS_CLRKEYLOW : ftl::mmio::Register<
    0x40814130u,
    std::uint32_t,
    0x00FFFFFFu,
    ftl::mmio::RW,
    PXP_PS_CLRKEYLOW_fields_::PIXEL,
    ftl::mmio::Reserved<8, 24>> {
  using PIXEL = PXP_PS_CLRKEYLOW_fields_::PIXEL;
};

// PS Color Key High
struct PXP_PS_CLRKEYHIGH_fields_ {
  // High range of color key applied to PS buffer
  using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PS_CLRKEYHIGH_fields_

struct PXP_PS_CLRKEYHIGH : ftl::mmio::Register<
    0x40814140u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PS_CLRKEYHIGH_fields_::PIXEL,
    ftl::mmio::Reserved<8, 24>> {
  using PIXEL = PXP_PS_CLRKEYHIGH_fields_::PIXEL;
};

// Alpha Surface Control
struct PXP_AS_CTRL_fields_ {
  enum class eALPHA_CTRL : std::uint32_t {
    // Indicates that the AS pixel alpha value will be used to blend the AS with PS. The ALPHA field is ignored.
    eEmbedded = 0,
    // Indicates that the value in the ALPHA field should be used instead of the alpha values present in the input pixels.
    eOverride = 1,
    // Indicates that the value in the ALPHA field should be used to scale all pixel alpha values. Each pixel alpha is multiplied by the value in the ALPHA field.
    eMultiply = 2,
    // Enable ROPs. The ROP field indicates an operation to be performed on the alpha surface and PS pixels.
    eROPs = 3,
  };

  enum class eENABLE_COLORKEY : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eFORMAT : std::uint32_t {
    // 32-bit pixels with alpha
    eARGB8888 = 0,
    // 2-bit pixel with alpha at low 8 bits
    eRGBA888 = 1,
    // 32-bit pixels without alpha (unpacked 24-bit format)
    eRGB888 = 4,
    // 16-bit pixels with alpha
    eARGB1555 = 8,
    // 16-bit pixels with alpha
    eARGB4444 = 9,
    // 16-bit pixel with alpha at low 1 bit
    eRGBA5551 = 10,
    // 16-bit pixel with alpha at low 4 bits
    eRGBA4444 = 11,
    // 16-bit pixels without alpha
    eRGB555 = 12,
    // 16-bit pixels without alpha
    eRGB444 = 13,
    // 16-bit pixels without alpha
    eRGB565 = 14,
  };

  enum class eROP : std::uint32_t {
    // AS AND PS
    eMASKAS = 0,
    // nAS AND PS
    eMASKNOTAS = 1,
    // AS AND nPS
    eMASKASNOT = 2,
    // AS OR PS
    eMERGEAS = 3,
    // nAS OR PS
    eMERGENOTAS = 4,
    // AS OR nPS
    eMERGEASNOT = 5,
    // nAS
    eNOTCOPYAS = 6,
    // nPS
    eNOT = 7,
    // AS NAND PS
    eNOTMASKAS = 8,
    // AS NOR PS
    eNOTMERGEAS = 9,
    // AS XOR PS
    eXORAS = 10,
    // AS XNOR PS
    eNOTXORAS = 11,
  };

  enum class eALPHA_INVERT : std::uint32_t {
    // Not inverted
    eALPHA_INVERT_0 = 0,
    // Inverted
    eInverted = 1,
  };

  // Determines how the alpha value is constructed for this alpha surface
  using ALPHA_CTRL = ftl::mmio::Field<2, 1, eALPHA_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates that colorkey functionality is enabled for this alpha surface
  using ENABLE_COLORKEY = ftl::mmio::Field<1, 3, eENABLE_COLORKEY, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates the input buffer format for AS.
  using FORMAT = ftl::mmio::Field<4, 4, eFORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Alpha modifier used when the ALPHA_MULTIPLY or ALPHA_OVERRIDE values are programmed in PXP_AS_CTRL[ALPHA_CTRL]
  using ALPHA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates a raster operation to perform when enabled
  using ROP = ftl::mmio::Field<4, 16, eROP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Setting this bit to logic 0 will not alter the alpha value
  using ALPHA_INVERT = ftl::mmio::Field<1, 20, eALPHA_INVERT, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_AS_CTRL_fields_

struct PXP_AS_CTRL : ftl::mmio::Register<
    0x40814150u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    PXP_AS_CTRL_fields_::ALPHA_CTRL,
    PXP_AS_CTRL_fields_::ENABLE_COLORKEY,
    PXP_AS_CTRL_fields_::FORMAT,
    PXP_AS_CTRL_fields_::ALPHA,
    PXP_AS_CTRL_fields_::ROP,
    PXP_AS_CTRL_fields_::ALPHA_INVERT,
    ftl::mmio::Reserved<11, 21>> {
  using eALPHA_CTRL = PXP_AS_CTRL_fields_::eALPHA_CTRL;
  using eENABLE_COLORKEY = PXP_AS_CTRL_fields_::eENABLE_COLORKEY;
  using eFORMAT = PXP_AS_CTRL_fields_::eFORMAT;
  using eROP = PXP_AS_CTRL_fields_::eROP;
  using eALPHA_INVERT = PXP_AS_CTRL_fields_::eALPHA_INVERT;
  using ALPHA_CTRL = PXP_AS_CTRL_fields_::ALPHA_CTRL;
  using ENABLE_COLORKEY = PXP_AS_CTRL_fields_::ENABLE_COLORKEY;
  using FORMAT = PXP_AS_CTRL_fields_::FORMAT;
  using ALPHA = PXP_AS_CTRL_fields_::ALPHA;
  using ROP = PXP_AS_CTRL_fields_::ROP;
  using ALPHA_INVERT = PXP_AS_CTRL_fields_::ALPHA_INVERT;
};

// Alpha Surface Buffer Pointer
struct PXP_AS_BUF_fields_ {
  // Address pointer for the alpha surface 0 buffer.
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_AS_BUF_fields_

struct PXP_AS_BUF : ftl::mmio::Register<
    0x40814160u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_AS_BUF_fields_::ADDR> {
  using ADDR = PXP_AS_BUF_fields_::ADDR;
};

// Alpha Surface Pitch
struct PXP_AS_PITCH_fields_ {
  // Indicates the number of bytes in memory between two vertically adjacent pixels.
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_AS_PITCH_fields_

struct PXP_AS_PITCH : ftl::mmio::Register<
    0x40814170u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_AS_PITCH_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = PXP_AS_PITCH_fields_::PITCH;
};

// Overlay Color Key Low
struct PXP_AS_CLRKEYLOW_fields_ {
  // Low range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
  using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_AS_CLRKEYLOW_fields_

struct PXP_AS_CLRKEYLOW : ftl::mmio::Register<
    0x40814180u,
    std::uint32_t,
    0x00FFFFFFu,
    ftl::mmio::RW,
    PXP_AS_CLRKEYLOW_fields_::PIXEL,
    ftl::mmio::Reserved<8, 24>> {
  using PIXEL = PXP_AS_CLRKEYLOW_fields_::PIXEL;
};

// Overlay Color Key High
struct PXP_AS_CLRKEYHIGH_fields_ {
  // High range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
  using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_AS_CLRKEYHIGH_fields_

struct PXP_AS_CLRKEYHIGH : ftl::mmio::Register<
    0x40814190u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_AS_CLRKEYHIGH_fields_::PIXEL,
    ftl::mmio::Reserved<8, 24>> {
  using PIXEL = PXP_AS_CLRKEYHIGH_fields_::PIXEL;
};

// Color Space Conversion Coefficient Register 0
struct PXP_CSC1_COEF0_fields_ {
  enum class eYCBCR_MODE : std::uint32_t {
    // YUV to RGB
    eYCBCR_MODE_0 = 0,
    // YCbCr to RGB
    eYCBCR_MODE_1 = 1,
  };

  // Two's compliment amplitude offset implicit in the Y data
  using Y_OFFSET = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment phase offset implicit for CbCr data
  using UV_OFFSET = ftl::mmio::Field<9, 9, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
  using C0 = ftl::mmio::Field<11, 18, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Bypass the CSC unit in the scaling engine
  using BYPASS = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Set to 1 when performing YCbCr conversion to RGB
  using YCBCR_MODE = ftl::mmio::Field<1, 31, eYCBCR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CSC1_COEF0_fields_

struct PXP_CSC1_COEF0 : ftl::mmio::Register<
    0x408141A0u,
    std::uint32_t,
    0x04000000u,
    ftl::mmio::RW,
    PXP_CSC1_COEF0_fields_::Y_OFFSET,
    PXP_CSC1_COEF0_fields_::UV_OFFSET,
    PXP_CSC1_COEF0_fields_::C0,
    ftl::mmio::Reserved<1, 29>,
    PXP_CSC1_COEF0_fields_::BYPASS,
    PXP_CSC1_COEF0_fields_::YCBCR_MODE> {
  using eYCBCR_MODE = PXP_CSC1_COEF0_fields_::eYCBCR_MODE;
  using Y_OFFSET = PXP_CSC1_COEF0_fields_::Y_OFFSET;
  using UV_OFFSET = PXP_CSC1_COEF0_fields_::UV_OFFSET;
  using C0 = PXP_CSC1_COEF0_fields_::C0;
  using BYPASS = PXP_CSC1_COEF0_fields_::BYPASS;
  using YCBCR_MODE = PXP_CSC1_COEF0_fields_::YCBCR_MODE;
};

// Color Space Conversion Coefficient Register 1
struct PXP_CSC1_COEF1_fields_ {
  // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
  using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
  using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CSC1_COEF1_fields_

struct PXP_CSC1_COEF1 : ftl::mmio::Register<
    0x408141B0u,
    std::uint32_t,
    0x01230208u,
    ftl::mmio::RW,
    PXP_CSC1_COEF1_fields_::C4,
    ftl::mmio::Reserved<5, 11>,
    PXP_CSC1_COEF1_fields_::C1,
    ftl::mmio::Reserved<5, 27>> {
  using C4 = PXP_CSC1_COEF1_fields_::C4;
  using C1 = PXP_CSC1_COEF1_fields_::C1;
};

// Color Space Conversion Coefficient Register 2
struct PXP_CSC1_COEF2_fields_ {
  // Two's complement Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
  using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's complement Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
  using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_CSC1_COEF2_fields_

struct PXP_CSC1_COEF2 : ftl::mmio::Register<
    0x408141C0u,
    std::uint32_t,
    0x079B076Cu,
    ftl::mmio::RW,
    PXP_CSC1_COEF2_fields_::C3,
    ftl::mmio::Reserved<5, 11>,
    PXP_CSC1_COEF2_fields_::C2,
    ftl::mmio::Reserved<5, 27>> {
  using C3 = PXP_CSC1_COEF2_fields_::C3;
  using C2 = PXP_CSC1_COEF2_fields_::C2;
};

// PXP Power Control Register
struct PXP_POWER_fields_ {
  enum class eROT_MEM_LP_STATE : std::uint32_t {
    // Memory is not in low power state.
    eNONE = 0,
    // Light Sleep Mode. Low leakage mode, maintain memory contents.
    eLS = 1,
    // Deep Sleep Mode. Low leakage mode, maintain memory contents.
    eDS = 2,
    // Shut Down Mode. Shut Down periphery and core, no memory retention.
    eSD = 4,
  };

  // Select the low power state of the Rotation (ROT) memory.
  using ROT_MEM_LP_STATE = ftl::mmio::Field<3, 9, eROT_MEM_LP_STATE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_POWER_fields_

struct PXP_POWER : ftl::mmio::Register<
    0x40814320u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<9, 0>,
    PXP_POWER_fields_::ROT_MEM_LP_STATE,
    ftl::mmio::Reserved<20, 12>> {
  using eROT_MEM_LP_STATE = PXP_POWER_fields_::eROT_MEM_LP_STATE;
  using ROT_MEM_LP_STATE = PXP_POWER_fields_::ROT_MEM_LP_STATE;
};

// Next Frame Pointer
struct PXP_NEXT_fields_ {
  // Indicates that the "next frame" functionality has been enabled
  using ENABLED = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // A pointer to a data structure containing register values to be used when processing the next frame
  using POINTER = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_NEXT_fields_

struct PXP_NEXT : ftl::mmio::Register<
    0x40814400u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_NEXT_fields_::ENABLED,
    ftl::mmio::Reserved<1, 1>,
    PXP_NEXT_fields_::POINTER> {
  using ENABLED = PXP_NEXT_fields_::ENABLED;
  using POINTER = PXP_NEXT_fields_::POINTER;
};

// PXP Alpha Engine A Control Register.
struct PXP_PORTER_DUFF_CTRL_fields_ {
  enum class ePORTER_DUFF_ENABLE : std::uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };

  enum class eS0_S1_FACTOR_MODE : std::uint32_t {
    // 1
    eS0_S1_FACTOR_MODE_0 = 0,
    // 0
    eS0_S1_FACTOR_MODE_1 = 1,
    // Straight alpha
    eS0_S1_FACTOR_MODE_2 = 2,
    // Inverse alpha
    eS0_S1_FACTOR_MODE_3 = 3,
  };

  enum class eS0_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Global alpha
    eS0_GLOBAL_ALPHA_MODE_0 = 0,
    // Local alpha
    eS0_GLOBAL_ALPHA_MODE_1 = 1,
    // Scaled alpha
    eS0_GLOBAL_ALPHA_MODE_2 = 2,
    // Scaled alpha
    eS0_GLOBAL_ALPHA_MODE_3 = 3,
  };

  enum class eS0_ALPHA_MODE : std::uint32_t {
    // Straight mode
    eS0_ALPHA_MODE_0 = 0,
    // Inverted mode
    eS0_ALPHA_MODE_1 = 1,
  };

  enum class eS0_COLOR_MODE : std::uint32_t {
    // Original pixel
    eS0_COLOR_MODE_0 = 0,
    // Scaled pixel
    eS0_COLOR_MODE_1 = 1,
  };

  enum class eS1_S0_FACTOR_MODE : std::uint32_t {
    // 1
    eS1_S0_FACTOR_MODE_0 = 0,
    // 0
    eS1_S0_FACTOR_MODE_1 = 1,
    // Straight alpha
    eS1_S0_FACTOR_MODE_2 = 2,
    // Inverse alpha
    eS1_S0_FACTOR_MODE_3 = 3,
  };

  enum class eS1_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Global alpha
    eS1_GLOBAL_ALPHA_MODE_0 = 0,
    // Local alpha
    eS1_GLOBAL_ALPHA_MODE_1 = 1,
    // Scaled alpha
    eS1_GLOBAL_ALPHA_MODE_2 = 2,
    // Scaled alpha
    eS1_GLOBAL_ALPHA_MODE_3 = 3,
  };

  enum class eS1_ALPHA_MODE : std::uint32_t {
    // Straight mode
    eS1_ALPHA_MODE_0 = 0,
    // Inverted mode
    eS1_ALPHA_MODE_1 = 1,
  };

  enum class eS1_COLOR_MODE : std::uint32_t {
    // Original pixel
    eS1_COLOR_MODE_0 = 0,
    // Scaled pixel
    eS1_COLOR_MODE_1 = 1,
  };

  // Porter-Duff Enable
  using PORTER_DUFF_ENABLE = ftl::mmio::Field<1, 0, ePORTER_DUFF_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s0 to s1 factor mode
  using S0_S1_FACTOR_MODE = ftl::mmio::Field<2, 1, eS0_S1_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s0 global alpha mode
  using S0_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 3, eS0_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s0 alpha mode (Porter-Duff alpha mode)
  using S0_ALPHA_MODE = ftl::mmio::Field<1, 5, eS0_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s0 color mode (Porter-Duff color mode)
  using S0_COLOR_MODE = ftl::mmio::Field<1, 6, eS0_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s1 to s0 factor mode (Porter-Duff factor mode)
  using S1_S0_FACTOR_MODE = ftl::mmio::Field<2, 8, eS1_S0_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s1 global alpha mode (Porter-Duff Global Alpha mode)
  using S1_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 10, eS1_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s1 alpha mode (Porter-Duff Alpha mode)
  using S1_ALPHA_MODE = ftl::mmio::Field<1, 12, eS1_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s1 color mode
  using S1_COLOR_MODE = ftl::mmio::Field<1, 13, eS1_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // s0 global alpha
  using S0_GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // s1 global alpha
  using S1_GLOBAL_ALPHA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PXP_PORTER_DUFF_CTRL_fields_

struct PXP_PORTER_DUFF_CTRL : ftl::mmio::Register<
    0x40814440u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PXP_PORTER_DUFF_CTRL_fields_::PORTER_DUFF_ENABLE,
    PXP_PORTER_DUFF_CTRL_fields_::S0_S1_FACTOR_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S0_GLOBAL_ALPHA_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S0_ALPHA_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S0_COLOR_MODE,
    ftl::mmio::Reserved<1, 7>,
    PXP_PORTER_DUFF_CTRL_fields_::S1_S0_FACTOR_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S1_GLOBAL_ALPHA_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S1_ALPHA_MODE,
    PXP_PORTER_DUFF_CTRL_fields_::S1_COLOR_MODE,
    ftl::mmio::Reserved<2, 14>,
    PXP_PORTER_DUFF_CTRL_fields_::S0_GLOBAL_ALPHA,
    PXP_PORTER_DUFF_CTRL_fields_::S1_GLOBAL_ALPHA> {
  using ePORTER_DUFF_ENABLE = PXP_PORTER_DUFF_CTRL_fields_::ePORTER_DUFF_ENABLE;
  using eS0_S1_FACTOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS0_S1_FACTOR_MODE;
  using eS0_GLOBAL_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS0_GLOBAL_ALPHA_MODE;
  using eS0_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS0_ALPHA_MODE;
  using eS0_COLOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS0_COLOR_MODE;
  using eS1_S0_FACTOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS1_S0_FACTOR_MODE;
  using eS1_GLOBAL_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS1_GLOBAL_ALPHA_MODE;
  using eS1_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS1_ALPHA_MODE;
  using eS1_COLOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::eS1_COLOR_MODE;
  using PORTER_DUFF_ENABLE = PXP_PORTER_DUFF_CTRL_fields_::PORTER_DUFF_ENABLE;
  using S0_S1_FACTOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::S0_S1_FACTOR_MODE;
  using S0_GLOBAL_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::S0_GLOBAL_ALPHA_MODE;
  using S0_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::S0_ALPHA_MODE;
  using S0_COLOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::S0_COLOR_MODE;
  using S1_S0_FACTOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::S1_S0_FACTOR_MODE;
  using S1_GLOBAL_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::S1_GLOBAL_ALPHA_MODE;
  using S1_ALPHA_MODE = PXP_PORTER_DUFF_CTRL_fields_::S1_ALPHA_MODE;
  using S1_COLOR_MODE = PXP_PORTER_DUFF_CTRL_fields_::S1_COLOR_MODE;
  using S0_GLOBAL_ALPHA = PXP_PORTER_DUFF_CTRL_fields_::S0_GLOBAL_ALPHA;
  using S1_GLOBAL_ALPHA = PXP_PORTER_DUFF_CTRL_fields_::S1_GLOBAL_ALPHA;
};

}  // namespace regs::pxp