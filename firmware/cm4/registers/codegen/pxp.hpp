#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PXP v2.0 Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Pxp {
  // Control Register 0
  struct PxpCtrlFields {
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
  };  // struct PxpCtrlFields

  struct PXP_CTRL : ftl::mmio::Register<
      0x40814000u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      PxpCtrlFields::ENABLE,
      PxpCtrlFields::IRQ_ENABLE,
      PxpCtrlFields::NEXT_IRQ_ENABLE,
      ftl::mmio::Reserved<1, 3>,
      PxpCtrlFields::ENABLE_LCD_HANDSHAKE,
      ftl::mmio::Reserved<3, 5>,
      PxpCtrlFields::ROTATE,
      PxpCtrlFields::HFLIP,
      PxpCtrlFields::VFLIP,
      ftl::mmio::Reserved<10, 12>,
      PxpCtrlFields::ROT_POS,
      PxpCtrlFields::BLOCK_SIZE,
      ftl::mmio::Reserved<4, 24>,
      PxpCtrlFields::EN_REPEAT,
      ftl::mmio::Reserved<1, 29>,
      PxpCtrlFields::CLKGATE,
      PxpCtrlFields::SFTRST> {
    using eENABLE = PxpCtrlFields::eENABLE;
    using eIRQ_ENABLE = PxpCtrlFields::eIRQ_ENABLE;
    using eNEXT_IRQ_ENABLE = PxpCtrlFields::eNEXT_IRQ_ENABLE;
    using eROTATE = PxpCtrlFields::eROTATE;
    using eHFLIP = PxpCtrlFields::eHFLIP;
    using eVFLIP = PxpCtrlFields::eVFLIP;
    using eBLOCK_SIZE = PxpCtrlFields::eBLOCK_SIZE;
    using eEN_REPEAT = PxpCtrlFields::eEN_REPEAT;
    using eCLKGATE = PxpCtrlFields::eCLKGATE;
    using eSFTRST = PxpCtrlFields::eSFTRST;
    using ENABLE = PxpCtrlFields::ENABLE;
    using IRQ_ENABLE = PxpCtrlFields::IRQ_ENABLE;
    using NEXT_IRQ_ENABLE = PxpCtrlFields::NEXT_IRQ_ENABLE;
    using ENABLE_LCD_HANDSHAKE = PxpCtrlFields::ENABLE_LCD_HANDSHAKE;
    using ROTATE = PxpCtrlFields::ROTATE;
    using HFLIP = PxpCtrlFields::HFLIP;
    using VFLIP = PxpCtrlFields::VFLIP;
    using ROT_POS = PxpCtrlFields::ROT_POS;
    using BLOCK_SIZE = PxpCtrlFields::BLOCK_SIZE;
    using EN_REPEAT = PxpCtrlFields::EN_REPEAT;
    using CLKGATE = PxpCtrlFields::CLKGATE;
    using SFTRST = PxpCtrlFields::SFTRST;
  };

  // Control Register 0
  struct PxpCtrlSetFields {
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
  };  // struct PxpCtrlSetFields

  struct PXP_CTRL_SET : ftl::mmio::Register<
      0x40814004u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      PxpCtrlSetFields::ENABLE,
      PxpCtrlSetFields::IRQ_ENABLE,
      PxpCtrlSetFields::NEXT_IRQ_ENABLE,
      ftl::mmio::Reserved<1, 3>,
      PxpCtrlSetFields::ENABLE_LCD_HANDSHAKE,
      ftl::mmio::Reserved<3, 5>,
      PxpCtrlSetFields::ROTATE,
      PxpCtrlSetFields::HFLIP,
      PxpCtrlSetFields::VFLIP,
      ftl::mmio::Reserved<10, 12>,
      PxpCtrlSetFields::ROT_POS,
      PxpCtrlSetFields::BLOCK_SIZE,
      ftl::mmio::Reserved<4, 24>,
      PxpCtrlSetFields::EN_REPEAT,
      ftl::mmio::Reserved<1, 29>,
      PxpCtrlSetFields::CLKGATE,
      PxpCtrlSetFields::SFTRST> {
    using eENABLE = PxpCtrlSetFields::eENABLE;
    using eIRQ_ENABLE = PxpCtrlSetFields::eIRQ_ENABLE;
    using eNEXT_IRQ_ENABLE = PxpCtrlSetFields::eNEXT_IRQ_ENABLE;
    using eROTATE = PxpCtrlSetFields::eROTATE;
    using eHFLIP = PxpCtrlSetFields::eHFLIP;
    using eVFLIP = PxpCtrlSetFields::eVFLIP;
    using eBLOCK_SIZE = PxpCtrlSetFields::eBLOCK_SIZE;
    using eEN_REPEAT = PxpCtrlSetFields::eEN_REPEAT;
    using eCLKGATE = PxpCtrlSetFields::eCLKGATE;
    using eSFTRST = PxpCtrlSetFields::eSFTRST;
    using ENABLE = PxpCtrlSetFields::ENABLE;
    using IRQ_ENABLE = PxpCtrlSetFields::IRQ_ENABLE;
    using NEXT_IRQ_ENABLE = PxpCtrlSetFields::NEXT_IRQ_ENABLE;
    using ENABLE_LCD_HANDSHAKE = PxpCtrlSetFields::ENABLE_LCD_HANDSHAKE;
    using ROTATE = PxpCtrlSetFields::ROTATE;
    using HFLIP = PxpCtrlSetFields::HFLIP;
    using VFLIP = PxpCtrlSetFields::VFLIP;
    using ROT_POS = PxpCtrlSetFields::ROT_POS;
    using BLOCK_SIZE = PxpCtrlSetFields::BLOCK_SIZE;
    using EN_REPEAT = PxpCtrlSetFields::EN_REPEAT;
    using CLKGATE = PxpCtrlSetFields::CLKGATE;
    using SFTRST = PxpCtrlSetFields::SFTRST;
  };

  // Control Register 0
  struct PxpCtrlClrFields {
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
  };  // struct PxpCtrlClrFields

  struct PXP_CTRL_CLR : ftl::mmio::Register<
      0x40814008u,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      PxpCtrlClrFields::ENABLE,
      PxpCtrlClrFields::IRQ_ENABLE,
      PxpCtrlClrFields::NEXT_IRQ_ENABLE,
      ftl::mmio::Reserved<1, 3>,
      PxpCtrlClrFields::ENABLE_LCD_HANDSHAKE,
      ftl::mmio::Reserved<3, 5>,
      PxpCtrlClrFields::ROTATE,
      PxpCtrlClrFields::HFLIP,
      PxpCtrlClrFields::VFLIP,
      ftl::mmio::Reserved<10, 12>,
      PxpCtrlClrFields::ROT_POS,
      PxpCtrlClrFields::BLOCK_SIZE,
      ftl::mmio::Reserved<4, 24>,
      PxpCtrlClrFields::EN_REPEAT,
      ftl::mmio::Reserved<1, 29>,
      PxpCtrlClrFields::CLKGATE,
      PxpCtrlClrFields::SFTRST> {
    using eENABLE = PxpCtrlClrFields::eENABLE;
    using eIRQ_ENABLE = PxpCtrlClrFields::eIRQ_ENABLE;
    using eNEXT_IRQ_ENABLE = PxpCtrlClrFields::eNEXT_IRQ_ENABLE;
    using eROTATE = PxpCtrlClrFields::eROTATE;
    using eHFLIP = PxpCtrlClrFields::eHFLIP;
    using eVFLIP = PxpCtrlClrFields::eVFLIP;
    using eBLOCK_SIZE = PxpCtrlClrFields::eBLOCK_SIZE;
    using eEN_REPEAT = PxpCtrlClrFields::eEN_REPEAT;
    using eCLKGATE = PxpCtrlClrFields::eCLKGATE;
    using eSFTRST = PxpCtrlClrFields::eSFTRST;
    using ENABLE = PxpCtrlClrFields::ENABLE;
    using IRQ_ENABLE = PxpCtrlClrFields::IRQ_ENABLE;
    using NEXT_IRQ_ENABLE = PxpCtrlClrFields::NEXT_IRQ_ENABLE;
    using ENABLE_LCD_HANDSHAKE = PxpCtrlClrFields::ENABLE_LCD_HANDSHAKE;
    using ROTATE = PxpCtrlClrFields::ROTATE;
    using HFLIP = PxpCtrlClrFields::HFLIP;
    using VFLIP = PxpCtrlClrFields::VFLIP;
    using ROT_POS = PxpCtrlClrFields::ROT_POS;
    using BLOCK_SIZE = PxpCtrlClrFields::BLOCK_SIZE;
    using EN_REPEAT = PxpCtrlClrFields::EN_REPEAT;
    using CLKGATE = PxpCtrlClrFields::CLKGATE;
    using SFTRST = PxpCtrlClrFields::SFTRST;
  };

  // Control Register 0
  struct PxpCtrlTogFields {
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
  };  // struct PxpCtrlTogFields

  struct PXP_CTRL_TOG : ftl::mmio::Register<
      0x4081400Cu,
      std::uint32_t,
      0xC0000000u,
      ftl::mmio::RW,
      PxpCtrlTogFields::ENABLE,
      PxpCtrlTogFields::IRQ_ENABLE,
      PxpCtrlTogFields::NEXT_IRQ_ENABLE,
      ftl::mmio::Reserved<1, 3>,
      PxpCtrlTogFields::ENABLE_LCD_HANDSHAKE,
      ftl::mmio::Reserved<3, 5>,
      PxpCtrlTogFields::ROTATE,
      PxpCtrlTogFields::HFLIP,
      PxpCtrlTogFields::VFLIP,
      ftl::mmio::Reserved<10, 12>,
      PxpCtrlTogFields::ROT_POS,
      PxpCtrlTogFields::BLOCK_SIZE,
      ftl::mmio::Reserved<4, 24>,
      PxpCtrlTogFields::EN_REPEAT,
      ftl::mmio::Reserved<1, 29>,
      PxpCtrlTogFields::CLKGATE,
      PxpCtrlTogFields::SFTRST> {
    using eENABLE = PxpCtrlTogFields::eENABLE;
    using eIRQ_ENABLE = PxpCtrlTogFields::eIRQ_ENABLE;
    using eNEXT_IRQ_ENABLE = PxpCtrlTogFields::eNEXT_IRQ_ENABLE;
    using eROTATE = PxpCtrlTogFields::eROTATE;
    using eHFLIP = PxpCtrlTogFields::eHFLIP;
    using eVFLIP = PxpCtrlTogFields::eVFLIP;
    using eBLOCK_SIZE = PxpCtrlTogFields::eBLOCK_SIZE;
    using eEN_REPEAT = PxpCtrlTogFields::eEN_REPEAT;
    using eCLKGATE = PxpCtrlTogFields::eCLKGATE;
    using eSFTRST = PxpCtrlTogFields::eSFTRST;
    using ENABLE = PxpCtrlTogFields::ENABLE;
    using IRQ_ENABLE = PxpCtrlTogFields::IRQ_ENABLE;
    using NEXT_IRQ_ENABLE = PxpCtrlTogFields::NEXT_IRQ_ENABLE;
    using ENABLE_LCD_HANDSHAKE = PxpCtrlTogFields::ENABLE_LCD_HANDSHAKE;
    using ROTATE = PxpCtrlTogFields::ROTATE;
    using HFLIP = PxpCtrlTogFields::HFLIP;
    using VFLIP = PxpCtrlTogFields::VFLIP;
    using ROT_POS = PxpCtrlTogFields::ROT_POS;
    using BLOCK_SIZE = PxpCtrlTogFields::BLOCK_SIZE;
    using EN_REPEAT = PxpCtrlTogFields::EN_REPEAT;
    using CLKGATE = PxpCtrlTogFields::CLKGATE;
    using SFTRST = PxpCtrlTogFields::SFTRST;
  };

  // Status Register
  struct PxpStatFields {
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
  };  // struct PxpStatFields

  struct PXP_STAT : ftl::mmio::Register<
      0x40814010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpStatFields::IRQ,
      PxpStatFields::AXI_WRITE_ERROR,
      PxpStatFields::AXI_READ_ERROR,
      PxpStatFields::NEXT_IRQ,
      PxpStatFields::AXI_ERROR_ID,
      PxpStatFields::LUT_DMA_LOAD_DONE_IRQ,
      ftl::mmio::Reserved<7, 9>,
      PxpStatFields::BLOCKY,
      PxpStatFields::BLOCKX> {
    using eIRQ = PxpStatFields::eIRQ;
    using eAXI_WRITE_ERROR = PxpStatFields::eAXI_WRITE_ERROR;
    using eAXI_READ_ERROR = PxpStatFields::eAXI_READ_ERROR;
    using eLUT_DMA_LOAD_DONE_IRQ = PxpStatFields::eLUT_DMA_LOAD_DONE_IRQ;
    using IRQ = PxpStatFields::IRQ;
    using AXI_WRITE_ERROR = PxpStatFields::AXI_WRITE_ERROR;
    using AXI_READ_ERROR = PxpStatFields::AXI_READ_ERROR;
    using NEXT_IRQ = PxpStatFields::NEXT_IRQ;
    using AXI_ERROR_ID = PxpStatFields::AXI_ERROR_ID;
    using LUT_DMA_LOAD_DONE_IRQ = PxpStatFields::LUT_DMA_LOAD_DONE_IRQ;
    using BLOCKY = PxpStatFields::BLOCKY;
    using BLOCKX = PxpStatFields::BLOCKX;
  };

  // Status Register
  struct PxpStatSetFields {
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
  };  // struct PxpStatSetFields

  struct PXP_STAT_SET : ftl::mmio::Register<
      0x40814014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpStatSetFields::IRQ,
      PxpStatSetFields::AXI_WRITE_ERROR,
      PxpStatSetFields::AXI_READ_ERROR,
      PxpStatSetFields::NEXT_IRQ,
      PxpStatSetFields::AXI_ERROR_ID,
      PxpStatSetFields::LUT_DMA_LOAD_DONE_IRQ,
      ftl::mmio::Reserved<7, 9>,
      PxpStatSetFields::BLOCKY,
      PxpStatSetFields::BLOCKX> {
    using eIRQ = PxpStatSetFields::eIRQ;
    using eAXI_WRITE_ERROR = PxpStatSetFields::eAXI_WRITE_ERROR;
    using eAXI_READ_ERROR = PxpStatSetFields::eAXI_READ_ERROR;
    using eLUT_DMA_LOAD_DONE_IRQ = PxpStatSetFields::eLUT_DMA_LOAD_DONE_IRQ;
    using IRQ = PxpStatSetFields::IRQ;
    using AXI_WRITE_ERROR = PxpStatSetFields::AXI_WRITE_ERROR;
    using AXI_READ_ERROR = PxpStatSetFields::AXI_READ_ERROR;
    using NEXT_IRQ = PxpStatSetFields::NEXT_IRQ;
    using AXI_ERROR_ID = PxpStatSetFields::AXI_ERROR_ID;
    using LUT_DMA_LOAD_DONE_IRQ = PxpStatSetFields::LUT_DMA_LOAD_DONE_IRQ;
    using BLOCKY = PxpStatSetFields::BLOCKY;
    using BLOCKX = PxpStatSetFields::BLOCKX;
  };

  // Status Register
  struct PxpStatClrFields {
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
  };  // struct PxpStatClrFields

  struct PXP_STAT_CLR : ftl::mmio::Register<
      0x40814018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpStatClrFields::IRQ,
      PxpStatClrFields::AXI_WRITE_ERROR,
      PxpStatClrFields::AXI_READ_ERROR,
      PxpStatClrFields::NEXT_IRQ,
      PxpStatClrFields::AXI_ERROR_ID,
      PxpStatClrFields::LUT_DMA_LOAD_DONE_IRQ,
      ftl::mmio::Reserved<7, 9>,
      PxpStatClrFields::BLOCKY,
      PxpStatClrFields::BLOCKX> {
    using eIRQ = PxpStatClrFields::eIRQ;
    using eAXI_WRITE_ERROR = PxpStatClrFields::eAXI_WRITE_ERROR;
    using eAXI_READ_ERROR = PxpStatClrFields::eAXI_READ_ERROR;
    using eLUT_DMA_LOAD_DONE_IRQ = PxpStatClrFields::eLUT_DMA_LOAD_DONE_IRQ;
    using IRQ = PxpStatClrFields::IRQ;
    using AXI_WRITE_ERROR = PxpStatClrFields::AXI_WRITE_ERROR;
    using AXI_READ_ERROR = PxpStatClrFields::AXI_READ_ERROR;
    using NEXT_IRQ = PxpStatClrFields::NEXT_IRQ;
    using AXI_ERROR_ID = PxpStatClrFields::AXI_ERROR_ID;
    using LUT_DMA_LOAD_DONE_IRQ = PxpStatClrFields::LUT_DMA_LOAD_DONE_IRQ;
    using BLOCKY = PxpStatClrFields::BLOCKY;
    using BLOCKX = PxpStatClrFields::BLOCKX;
  };

  // Status Register
  struct PxpStatTogFields {
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
  };  // struct PxpStatTogFields

  struct PXP_STAT_TOG : ftl::mmio::Register<
      0x4081401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpStatTogFields::IRQ,
      PxpStatTogFields::AXI_WRITE_ERROR,
      PxpStatTogFields::AXI_READ_ERROR,
      PxpStatTogFields::NEXT_IRQ,
      PxpStatTogFields::AXI_ERROR_ID,
      PxpStatTogFields::LUT_DMA_LOAD_DONE_IRQ,
      ftl::mmio::Reserved<7, 9>,
      PxpStatTogFields::BLOCKY,
      PxpStatTogFields::BLOCKX> {
    using eIRQ = PxpStatTogFields::eIRQ;
    using eAXI_WRITE_ERROR = PxpStatTogFields::eAXI_WRITE_ERROR;
    using eAXI_READ_ERROR = PxpStatTogFields::eAXI_READ_ERROR;
    using eLUT_DMA_LOAD_DONE_IRQ = PxpStatTogFields::eLUT_DMA_LOAD_DONE_IRQ;
    using IRQ = PxpStatTogFields::IRQ;
    using AXI_WRITE_ERROR = PxpStatTogFields::AXI_WRITE_ERROR;
    using AXI_READ_ERROR = PxpStatTogFields::AXI_READ_ERROR;
    using NEXT_IRQ = PxpStatTogFields::NEXT_IRQ;
    using AXI_ERROR_ID = PxpStatTogFields::AXI_ERROR_ID;
    using LUT_DMA_LOAD_DONE_IRQ = PxpStatTogFields::LUT_DMA_LOAD_DONE_IRQ;
    using BLOCKY = PxpStatTogFields::BLOCKY;
    using BLOCKX = PxpStatTogFields::BLOCKX;
  };

  // Output Buffer Control Register
  struct PxpOutCtrlFields {
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
  };  // struct PxpOutCtrlFields

  struct PXP_OUT_CTRL : ftl::mmio::Register<
      0x40814020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutCtrlFields::FORMAT,
      ftl::mmio::Reserved<3, 5>,
      PxpOutCtrlFields::INTERLACED_OUTPUT,
      ftl::mmio::Reserved<13, 10>,
      PxpOutCtrlFields::ALPHA_OUTPUT,
      PxpOutCtrlFields::ALPHA> {
    using eFORMAT = PxpOutCtrlFields::eFORMAT;
    using eINTERLACED_OUTPUT = PxpOutCtrlFields::eINTERLACED_OUTPUT;
    using eALPHA_OUTPUT = PxpOutCtrlFields::eALPHA_OUTPUT;
    using FORMAT = PxpOutCtrlFields::FORMAT;
    using INTERLACED_OUTPUT = PxpOutCtrlFields::INTERLACED_OUTPUT;
    using ALPHA_OUTPUT = PxpOutCtrlFields::ALPHA_OUTPUT;
    using ALPHA = PxpOutCtrlFields::ALPHA;
  };

  // Output Buffer Control Register
  struct PxpOutCtrlSetFields {
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
  };  // struct PxpOutCtrlSetFields

  struct PXP_OUT_CTRL_SET : ftl::mmio::Register<
      0x40814024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutCtrlSetFields::FORMAT,
      ftl::mmio::Reserved<3, 5>,
      PxpOutCtrlSetFields::INTERLACED_OUTPUT,
      ftl::mmio::Reserved<13, 10>,
      PxpOutCtrlSetFields::ALPHA_OUTPUT,
      PxpOutCtrlSetFields::ALPHA> {
    using eFORMAT = PxpOutCtrlSetFields::eFORMAT;
    using eINTERLACED_OUTPUT = PxpOutCtrlSetFields::eINTERLACED_OUTPUT;
    using eALPHA_OUTPUT = PxpOutCtrlSetFields::eALPHA_OUTPUT;
    using FORMAT = PxpOutCtrlSetFields::FORMAT;
    using INTERLACED_OUTPUT = PxpOutCtrlSetFields::INTERLACED_OUTPUT;
    using ALPHA_OUTPUT = PxpOutCtrlSetFields::ALPHA_OUTPUT;
    using ALPHA = PxpOutCtrlSetFields::ALPHA;
  };

  // Output Buffer Control Register
  struct PxpOutCtrlClrFields {
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
  };  // struct PxpOutCtrlClrFields

  struct PXP_OUT_CTRL_CLR : ftl::mmio::Register<
      0x40814028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutCtrlClrFields::FORMAT,
      ftl::mmio::Reserved<3, 5>,
      PxpOutCtrlClrFields::INTERLACED_OUTPUT,
      ftl::mmio::Reserved<13, 10>,
      PxpOutCtrlClrFields::ALPHA_OUTPUT,
      PxpOutCtrlClrFields::ALPHA> {
    using eFORMAT = PxpOutCtrlClrFields::eFORMAT;
    using eINTERLACED_OUTPUT = PxpOutCtrlClrFields::eINTERLACED_OUTPUT;
    using eALPHA_OUTPUT = PxpOutCtrlClrFields::eALPHA_OUTPUT;
    using FORMAT = PxpOutCtrlClrFields::FORMAT;
    using INTERLACED_OUTPUT = PxpOutCtrlClrFields::INTERLACED_OUTPUT;
    using ALPHA_OUTPUT = PxpOutCtrlClrFields::ALPHA_OUTPUT;
    using ALPHA = PxpOutCtrlClrFields::ALPHA;
  };

  // Output Buffer Control Register
  struct PxpOutCtrlTogFields {
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
  };  // struct PxpOutCtrlTogFields

  struct PXP_OUT_CTRL_TOG : ftl::mmio::Register<
      0x4081402Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutCtrlTogFields::FORMAT,
      ftl::mmio::Reserved<3, 5>,
      PxpOutCtrlTogFields::INTERLACED_OUTPUT,
      ftl::mmio::Reserved<13, 10>,
      PxpOutCtrlTogFields::ALPHA_OUTPUT,
      PxpOutCtrlTogFields::ALPHA> {
    using eFORMAT = PxpOutCtrlTogFields::eFORMAT;
    using eINTERLACED_OUTPUT = PxpOutCtrlTogFields::eINTERLACED_OUTPUT;
    using eALPHA_OUTPUT = PxpOutCtrlTogFields::eALPHA_OUTPUT;
    using FORMAT = PxpOutCtrlTogFields::FORMAT;
    using INTERLACED_OUTPUT = PxpOutCtrlTogFields::INTERLACED_OUTPUT;
    using ALPHA_OUTPUT = PxpOutCtrlTogFields::ALPHA_OUTPUT;
    using ALPHA = PxpOutCtrlTogFields::ALPHA;
  };

  // Output Frame Buffer Pointer
  struct PxpOutBufFields {
    // Current address pointer for the output frame buffer
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutBufFields

  struct PXP_OUT_BUF : ftl::mmio::Register<
      0x40814030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutBufFields::ADDR> {
    using ADDR = PxpOutBufFields::ADDR;
  };

  // Output Frame Buffer Pointer #2
  struct PxpOutBuf2Fields {
    // Current address pointer for the output frame buffer
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutBuf2Fields

  struct PXP_OUT_BUF2 : ftl::mmio::Register<
      0x40814040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutBuf2Fields::ADDR> {
    using ADDR = PxpOutBuf2Fields::ADDR;
  };

  // Output Buffer Pitch
  struct PxpOutPitchFields {
    // Indicates the number of bytes in memory between two vertically adjacent pixels.
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutPitchFields

  struct PXP_OUT_PITCH : ftl::mmio::Register<
      0x40814050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutPitchFields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = PxpOutPitchFields::PITCH;
  };

  // Output Surface Lower Right Coordinate
  struct PxpOutLrcFields {
    // Indicates the number of vertical PIXELS in the output surface (non-rotated)
    using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates number of horizontal PIXELS in the output surface (non-rotated)
    using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutLrcFields

  struct PXP_OUT_LRC : ftl::mmio::Register<
      0x40814060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutLrcFields::Y,
      ftl::mmio::Reserved<2, 14>,
      PxpOutLrcFields::X,
      ftl::mmio::Reserved<2, 30>> {
    using Y = PxpOutLrcFields::Y;
    using X = PxpOutLrcFields::X;
  };

  // Processed Surface Upper Left Coordinate
  struct PxpOutPsUlcFields {
    // This field indicates the upper left Y-coordinate (in pixels) of the processed surface in the output buffer
    using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field indicates the upper left X-coordinate (in pixels) of the processed surface (PS) in the output buffer
    using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutPsUlcFields

  struct PXP_OUT_PS_ULC : ftl::mmio::Register<
      0x40814070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutPsUlcFields::Y,
      ftl::mmio::Reserved<2, 14>,
      PxpOutPsUlcFields::X,
      ftl::mmio::Reserved<2, 30>> {
    using Y = PxpOutPsUlcFields::Y;
    using X = PxpOutPsUlcFields::X;
  };

  // Processed Surface Lower Right Coordinate
  struct PxpOutPsLrcFields {
    // This field indicates the lower right Y-coordinate (in pixels) of the processed surface in the output frame buffer
    using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field indicates the lower right X-coordinate (in pixels) of the processed surface (PS) in the output frame buffer
    using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutPsLrcFields

  struct PXP_OUT_PS_LRC : ftl::mmio::Register<
      0x40814080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutPsLrcFields::Y,
      ftl::mmio::Reserved<2, 14>,
      PxpOutPsLrcFields::X,
      ftl::mmio::Reserved<2, 30>> {
    using Y = PxpOutPsLrcFields::Y;
    using X = PxpOutPsLrcFields::X;
  };

  // Alpha Surface Upper Left Coordinate
  struct PxpOutAsUlcFields {
    // This field indicates the upper left Y-coordinate (in pixels) of the alpha surface in the output frame buffer
    using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field indicates the upper left X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
    using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutAsUlcFields

  struct PXP_OUT_AS_ULC : ftl::mmio::Register<
      0x40814090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutAsUlcFields::Y,
      ftl::mmio::Reserved<2, 14>,
      PxpOutAsUlcFields::X,
      ftl::mmio::Reserved<2, 30>> {
    using Y = PxpOutAsUlcFields::Y;
    using X = PxpOutAsUlcFields::X;
  };

  // Alpha Surface Lower Right Coordinate
  struct PxpOutAsLrcFields {
    // This field indicates the lower right Y-coordinate (in pixels) of the alpha surface in the output frame buffer
    using Y = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field indicates the lower right X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
    using X = ftl::mmio::Field<14, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpOutAsLrcFields

  struct PXP_OUT_AS_LRC : ftl::mmio::Register<
      0x408140A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpOutAsLrcFields::Y,
      ftl::mmio::Reserved<2, 14>,
      PxpOutAsLrcFields::X,
      ftl::mmio::Reserved<2, 30>> {
    using Y = PxpOutAsLrcFields::Y;
    using X = PxpOutAsLrcFields::X;
  };

  // Processed Surface (PS) Control Register
  struct PxpPsCtrlFields {
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
  };  // struct PxpPsCtrlFields

  struct PXP_PS_CTRL : ftl::mmio::Register<
      0x408140B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsCtrlFields::FORMAT,
      PxpPsCtrlFields::WB_SWAP,
      ftl::mmio::Reserved<1, 7>,
      PxpPsCtrlFields::DECY,
      PxpPsCtrlFields::DECX,
      ftl::mmio::Reserved<20, 12>> {
    using eFORMAT = PxpPsCtrlFields::eFORMAT;
    using eWB_SWAP = PxpPsCtrlFields::eWB_SWAP;
    using eDECY = PxpPsCtrlFields::eDECY;
    using eDECX = PxpPsCtrlFields::eDECX;
    using FORMAT = PxpPsCtrlFields::FORMAT;
    using WB_SWAP = PxpPsCtrlFields::WB_SWAP;
    using DECY = PxpPsCtrlFields::DECY;
    using DECX = PxpPsCtrlFields::DECX;
  };

  // Processed Surface (PS) Control Register
  struct PxpPsCtrlSetFields {
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
  };  // struct PxpPsCtrlSetFields

  struct PXP_PS_CTRL_SET : ftl::mmio::Register<
      0x408140B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsCtrlSetFields::FORMAT,
      PxpPsCtrlSetFields::WB_SWAP,
      ftl::mmio::Reserved<1, 7>,
      PxpPsCtrlSetFields::DECY,
      PxpPsCtrlSetFields::DECX,
      ftl::mmio::Reserved<20, 12>> {
    using eFORMAT = PxpPsCtrlSetFields::eFORMAT;
    using eWB_SWAP = PxpPsCtrlSetFields::eWB_SWAP;
    using eDECY = PxpPsCtrlSetFields::eDECY;
    using eDECX = PxpPsCtrlSetFields::eDECX;
    using FORMAT = PxpPsCtrlSetFields::FORMAT;
    using WB_SWAP = PxpPsCtrlSetFields::WB_SWAP;
    using DECY = PxpPsCtrlSetFields::DECY;
    using DECX = PxpPsCtrlSetFields::DECX;
  };

  // Processed Surface (PS) Control Register
  struct PxpPsCtrlClrFields {
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
  };  // struct PxpPsCtrlClrFields

  struct PXP_PS_CTRL_CLR : ftl::mmio::Register<
      0x408140B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsCtrlClrFields::FORMAT,
      PxpPsCtrlClrFields::WB_SWAP,
      ftl::mmio::Reserved<1, 7>,
      PxpPsCtrlClrFields::DECY,
      PxpPsCtrlClrFields::DECX,
      ftl::mmio::Reserved<20, 12>> {
    using eFORMAT = PxpPsCtrlClrFields::eFORMAT;
    using eWB_SWAP = PxpPsCtrlClrFields::eWB_SWAP;
    using eDECY = PxpPsCtrlClrFields::eDECY;
    using eDECX = PxpPsCtrlClrFields::eDECX;
    using FORMAT = PxpPsCtrlClrFields::FORMAT;
    using WB_SWAP = PxpPsCtrlClrFields::WB_SWAP;
    using DECY = PxpPsCtrlClrFields::DECY;
    using DECX = PxpPsCtrlClrFields::DECX;
  };

  // Processed Surface (PS) Control Register
  struct PxpPsCtrlTogFields {
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
  };  // struct PxpPsCtrlTogFields

  struct PXP_PS_CTRL_TOG : ftl::mmio::Register<
      0x408140BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsCtrlTogFields::FORMAT,
      PxpPsCtrlTogFields::WB_SWAP,
      ftl::mmio::Reserved<1, 7>,
      PxpPsCtrlTogFields::DECY,
      PxpPsCtrlTogFields::DECX,
      ftl::mmio::Reserved<20, 12>> {
    using eFORMAT = PxpPsCtrlTogFields::eFORMAT;
    using eWB_SWAP = PxpPsCtrlTogFields::eWB_SWAP;
    using eDECY = PxpPsCtrlTogFields::eDECY;
    using eDECX = PxpPsCtrlTogFields::eDECX;
    using FORMAT = PxpPsCtrlTogFields::FORMAT;
    using WB_SWAP = PxpPsCtrlTogFields::WB_SWAP;
    using DECY = PxpPsCtrlTogFields::DECY;
    using DECX = PxpPsCtrlTogFields::DECX;
  };

  // PS Input Buffer Address
  struct PxpPsBufFields {
    // Address pointer for the PS RGB or Y (luma) input buffer.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsBufFields

  struct PXP_PS_BUF : ftl::mmio::Register<
      0x408140C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsBufFields::ADDR> {
    using ADDR = PxpPsBufFields::ADDR;
  };

  // PS U/Cb or 2 Plane UV Input Buffer Address
  struct PxpPsUbufFields {
    // Address pointer for the PS U/Cb or 2 plane UV Chroma input buffer.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsUbufFields

  struct PXP_PS_UBUF : ftl::mmio::Register<
      0x408140D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsUbufFields::ADDR> {
    using ADDR = PxpPsUbufFields::ADDR;
  };

  // PS V/Cr Input Buffer Address
  struct PxpPsVbufFields {
    // Address pointer for the PS V/Cr Chroma input buffer.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsVbufFields

  struct PXP_PS_VBUF : ftl::mmio::Register<
      0x408140E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsVbufFields::ADDR> {
    using ADDR = PxpPsVbufFields::ADDR;
  };

  // Processed Surface Pitch
  struct PxpPsPitchFields {
    // Indicates the number of bytes in memory between two vertically adjacent pixels.
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsPitchFields

  struct PXP_PS_PITCH : ftl::mmio::Register<
      0x408140F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsPitchFields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = PxpPsPitchFields::PITCH;
  };

  // PS Background Color
  struct PxpPsBackgroundFields {
    // Background color (in 24bpp format) for any pixels not within the buffer range specified by the PS ULC/LRC
    using COLOR = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsBackgroundFields

  struct PXP_PS_BACKGROUND : ftl::mmio::Register<
      0x40814100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsBackgroundFields::COLOR,
      ftl::mmio::Reserved<8, 24>> {
    using COLOR = PxpPsBackgroundFields::COLOR;
  };

  // PS Scale Factor Register
  struct PxpPsScaleFields {
    // This is a two bit integer and 12 bit fractional representation (##
    using XSCALE = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This is a two bit integer and 12 bit fractional representation (##
    using YSCALE = ftl::mmio::Field<15, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsScaleFields

  struct PXP_PS_SCALE : ftl::mmio::Register<
      0x40814110u,
      std::uint32_t,
      0x10001000u,
      ftl::mmio::RW,
      PxpPsScaleFields::XSCALE,
      ftl::mmio::Reserved<1, 15>,
      PxpPsScaleFields::YSCALE,
      ftl::mmio::Reserved<1, 31>> {
    using XSCALE = PxpPsScaleFields::XSCALE;
    using YSCALE = PxpPsScaleFields::YSCALE;
  };

  // PS Scale Offset Register
  struct PxpPsOffsetFields {
    // This is a 12 bit fractional representation (0
    using XOFFSET = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // This is a 12 bit fractional representation (0
    using YOFFSET = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsOffsetFields

  struct PXP_PS_OFFSET : ftl::mmio::Register<
      0x40814120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsOffsetFields::XOFFSET,
      ftl::mmio::Reserved<4, 12>,
      PxpPsOffsetFields::YOFFSET,
      ftl::mmio::Reserved<4, 28>> {
    using XOFFSET = PxpPsOffsetFields::XOFFSET;
    using YOFFSET = PxpPsOffsetFields::YOFFSET;
  };

  // PS Color Key Low
  struct PxpPsClrkeylowFields {
    // Low range of color key applied to PS buffer
    using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsClrkeylowFields

  struct PXP_PS_CLRKEYLOW : ftl::mmio::Register<
      0x40814130u,
      std::uint32_t,
      0x00FFFFFFu,
      ftl::mmio::RW,
      PxpPsClrkeylowFields::PIXEL,
      ftl::mmio::Reserved<8, 24>> {
    using PIXEL = PxpPsClrkeylowFields::PIXEL;
  };

  // PS Color Key High
  struct PxpPsClrkeyhighFields {
    // High range of color key applied to PS buffer
    using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpPsClrkeyhighFields

  struct PXP_PS_CLRKEYHIGH : ftl::mmio::Register<
      0x40814140u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPsClrkeyhighFields::PIXEL,
      ftl::mmio::Reserved<8, 24>> {
    using PIXEL = PxpPsClrkeyhighFields::PIXEL;
  };

  // Alpha Surface Control
  struct PxpAsCtrlFields {
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
  };  // struct PxpAsCtrlFields

  struct PXP_AS_CTRL : ftl::mmio::Register<
      0x40814150u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      PxpAsCtrlFields::ALPHA_CTRL,
      PxpAsCtrlFields::ENABLE_COLORKEY,
      PxpAsCtrlFields::FORMAT,
      PxpAsCtrlFields::ALPHA,
      PxpAsCtrlFields::ROP,
      PxpAsCtrlFields::ALPHA_INVERT,
      ftl::mmio::Reserved<11, 21>> {
    using eALPHA_CTRL = PxpAsCtrlFields::eALPHA_CTRL;
    using eENABLE_COLORKEY = PxpAsCtrlFields::eENABLE_COLORKEY;
    using eFORMAT = PxpAsCtrlFields::eFORMAT;
    using eROP = PxpAsCtrlFields::eROP;
    using eALPHA_INVERT = PxpAsCtrlFields::eALPHA_INVERT;
    using ALPHA_CTRL = PxpAsCtrlFields::ALPHA_CTRL;
    using ENABLE_COLORKEY = PxpAsCtrlFields::ENABLE_COLORKEY;
    using FORMAT = PxpAsCtrlFields::FORMAT;
    using ALPHA = PxpAsCtrlFields::ALPHA;
    using ROP = PxpAsCtrlFields::ROP;
    using ALPHA_INVERT = PxpAsCtrlFields::ALPHA_INVERT;
  };

  // Alpha Surface Buffer Pointer
  struct PxpAsBufFields {
    // Address pointer for the alpha surface 0 buffer.
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpAsBufFields

  struct PXP_AS_BUF : ftl::mmio::Register<
      0x40814160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpAsBufFields::ADDR> {
    using ADDR = PxpAsBufFields::ADDR;
  };

  // Alpha Surface Pitch
  struct PxpAsPitchFields {
    // Indicates the number of bytes in memory between two vertically adjacent pixels.
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpAsPitchFields

  struct PXP_AS_PITCH : ftl::mmio::Register<
      0x40814170u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpAsPitchFields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = PxpAsPitchFields::PITCH;
  };

  // Overlay Color Key Low
  struct PxpAsClrkeylowFields {
    // Low range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
    using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpAsClrkeylowFields

  struct PXP_AS_CLRKEYLOW : ftl::mmio::Register<
      0x40814180u,
      std::uint32_t,
      0x00FFFFFFu,
      ftl::mmio::RW,
      PxpAsClrkeylowFields::PIXEL,
      ftl::mmio::Reserved<8, 24>> {
    using PIXEL = PxpAsClrkeylowFields::PIXEL;
  };

  // Overlay Color Key High
  struct PxpAsClrkeyhighFields {
    // High range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
    using PIXEL = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpAsClrkeyhighFields

  struct PXP_AS_CLRKEYHIGH : ftl::mmio::Register<
      0x40814190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpAsClrkeyhighFields::PIXEL,
      ftl::mmio::Reserved<8, 24>> {
    using PIXEL = PxpAsClrkeyhighFields::PIXEL;
  };

  // Color Space Conversion Coefficient Register 0
  struct PxpCsc1Coef0Fields {
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
  };  // struct PxpCsc1Coef0Fields

  struct PXP_CSC1_COEF0 : ftl::mmio::Register<
      0x408141A0u,
      std::uint32_t,
      0x04000000u,
      ftl::mmio::RW,
      PxpCsc1Coef0Fields::Y_OFFSET,
      PxpCsc1Coef0Fields::UV_OFFSET,
      PxpCsc1Coef0Fields::C0,
      ftl::mmio::Reserved<1, 29>,
      PxpCsc1Coef0Fields::BYPASS,
      PxpCsc1Coef0Fields::YCBCR_MODE> {
    using eYCBCR_MODE = PxpCsc1Coef0Fields::eYCBCR_MODE;
    using Y_OFFSET = PxpCsc1Coef0Fields::Y_OFFSET;
    using UV_OFFSET = PxpCsc1Coef0Fields::UV_OFFSET;
    using C0 = PxpCsc1Coef0Fields::C0;
    using BYPASS = PxpCsc1Coef0Fields::BYPASS;
    using YCBCR_MODE = PxpCsc1Coef0Fields::YCBCR_MODE;
  };

  // Color Space Conversion Coefficient Register 1
  struct PxpCsc1Coef1Fields {
    // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
    using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
    using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpCsc1Coef1Fields

  struct PXP_CSC1_COEF1 : ftl::mmio::Register<
      0x408141B0u,
      std::uint32_t,
      0x01230208u,
      ftl::mmio::RW,
      PxpCsc1Coef1Fields::C4,
      ftl::mmio::Reserved<5, 11>,
      PxpCsc1Coef1Fields::C1,
      ftl::mmio::Reserved<5, 27>> {
    using C4 = PxpCsc1Coef1Fields::C4;
    using C1 = PxpCsc1Coef1Fields::C1;
  };

  // Color Space Conversion Coefficient Register 2
  struct PxpCsc1Coef2Fields {
    // Two's complement Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's complement Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpCsc1Coef2Fields

  struct PXP_CSC1_COEF2 : ftl::mmio::Register<
      0x408141C0u,
      std::uint32_t,
      0x079B076Cu,
      ftl::mmio::RW,
      PxpCsc1Coef2Fields::C3,
      ftl::mmio::Reserved<5, 11>,
      PxpCsc1Coef2Fields::C2,
      ftl::mmio::Reserved<5, 27>> {
    using C3 = PxpCsc1Coef2Fields::C3;
    using C2 = PxpCsc1Coef2Fields::C2;
  };

  // PXP Power Control Register
  struct PxpPowerFields {
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
  };  // struct PxpPowerFields

  struct PXP_POWER : ftl::mmio::Register<
      0x40814320u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<9, 0>,
      PxpPowerFields::ROT_MEM_LP_STATE,
      ftl::mmio::Reserved<20, 12>> {
    using eROT_MEM_LP_STATE = PxpPowerFields::eROT_MEM_LP_STATE;
    using ROT_MEM_LP_STATE = PxpPowerFields::ROT_MEM_LP_STATE;
  };

  // Next Frame Pointer
  struct PxpNextFields {
    // Indicates that the "next frame" functionality has been enabled
    using ENABLED = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // A pointer to a data structure containing register values to be used when processing the next frame
    using POINTER = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PxpNextFields

  struct PXP_NEXT : ftl::mmio::Register<
      0x40814400u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpNextFields::ENABLED,
      ftl::mmio::Reserved<1, 1>,
      PxpNextFields::POINTER> {
    using ENABLED = PxpNextFields::ENABLED;
    using POINTER = PxpNextFields::POINTER;
  };

  // PXP Alpha Engine A Control Register.
  struct PxpPorterDuffCtrlFields {
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
  };  // struct PxpPorterDuffCtrlFields

  struct PXP_PORTER_DUFF_CTRL : ftl::mmio::Register<
      0x40814440u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PxpPorterDuffCtrlFields::PORTER_DUFF_ENABLE,
      PxpPorterDuffCtrlFields::S0_S1_FACTOR_MODE,
      PxpPorterDuffCtrlFields::S0_GLOBAL_ALPHA_MODE,
      PxpPorterDuffCtrlFields::S0_ALPHA_MODE,
      PxpPorterDuffCtrlFields::S0_COLOR_MODE,
      ftl::mmio::Reserved<1, 7>,
      PxpPorterDuffCtrlFields::S1_S0_FACTOR_MODE,
      PxpPorterDuffCtrlFields::S1_GLOBAL_ALPHA_MODE,
      PxpPorterDuffCtrlFields::S1_ALPHA_MODE,
      PxpPorterDuffCtrlFields::S1_COLOR_MODE,
      ftl::mmio::Reserved<2, 14>,
      PxpPorterDuffCtrlFields::S0_GLOBAL_ALPHA,
      PxpPorterDuffCtrlFields::S1_GLOBAL_ALPHA> {
    using ePORTER_DUFF_ENABLE = PxpPorterDuffCtrlFields::ePORTER_DUFF_ENABLE;
    using eS0_S1_FACTOR_MODE = PxpPorterDuffCtrlFields::eS0_S1_FACTOR_MODE;
    using eS0_GLOBAL_ALPHA_MODE = PxpPorterDuffCtrlFields::eS0_GLOBAL_ALPHA_MODE;
    using eS0_ALPHA_MODE = PxpPorterDuffCtrlFields::eS0_ALPHA_MODE;
    using eS0_COLOR_MODE = PxpPorterDuffCtrlFields::eS0_COLOR_MODE;
    using eS1_S0_FACTOR_MODE = PxpPorterDuffCtrlFields::eS1_S0_FACTOR_MODE;
    using eS1_GLOBAL_ALPHA_MODE = PxpPorterDuffCtrlFields::eS1_GLOBAL_ALPHA_MODE;
    using eS1_ALPHA_MODE = PxpPorterDuffCtrlFields::eS1_ALPHA_MODE;
    using eS1_COLOR_MODE = PxpPorterDuffCtrlFields::eS1_COLOR_MODE;
    using PORTER_DUFF_ENABLE = PxpPorterDuffCtrlFields::PORTER_DUFF_ENABLE;
    using S0_S1_FACTOR_MODE = PxpPorterDuffCtrlFields::S0_S1_FACTOR_MODE;
    using S0_GLOBAL_ALPHA_MODE = PxpPorterDuffCtrlFields::S0_GLOBAL_ALPHA_MODE;
    using S0_ALPHA_MODE = PxpPorterDuffCtrlFields::S0_ALPHA_MODE;
    using S0_COLOR_MODE = PxpPorterDuffCtrlFields::S0_COLOR_MODE;
    using S1_S0_FACTOR_MODE = PxpPorterDuffCtrlFields::S1_S0_FACTOR_MODE;
    using S1_GLOBAL_ALPHA_MODE = PxpPorterDuffCtrlFields::S1_GLOBAL_ALPHA_MODE;
    using S1_ALPHA_MODE = PxpPorterDuffCtrlFields::S1_ALPHA_MODE;
    using S1_COLOR_MODE = PxpPorterDuffCtrlFields::S1_COLOR_MODE;
    using S0_GLOBAL_ALPHA = PxpPorterDuffCtrlFields::S0_GLOBAL_ALPHA;
    using S1_GLOBAL_ALPHA = PxpPorterDuffCtrlFields::S1_GLOBAL_ALPHA;
  };

};

}  // namespace regs