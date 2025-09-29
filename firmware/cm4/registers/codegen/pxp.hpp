#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PXP v2.0 Register Reference Index
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nPXP {


// Control Register 0
union PXP_CTRL {
  
  // Enables PXP operation with specified parameters
  enum class eENABLE : uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };
  
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  enum class eIRQ_ENABLE : uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };
  
  // Next command interrupt enable
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // Indicates the clockwise rotation to be applied at the output buffer
  enum class eROTATE : uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };
  
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  enum class eHFLIP : uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };
  
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  enum class eVFLIP : uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };
  
  // Select the block size to process.
  enum class eBLOCK_SIZE : uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };
  
  // Enable the PXP to run continuously
  enum class eEN_REPEAT : uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };
  
  // This bit must be set to zero for normal operation
  enum class eCLKGATE : uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };
  
  // This bit can be turned on and then off to reset the PXP block to its default state.
  enum class eSFTRST : uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enables PXP operation with specified parameters
    eENABLE ENABLE : 1;
    // read-write - Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
    eIRQ_ENABLE IRQ_ENABLE : 1;
    // read-write - Next command interrupt enable
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enable handshake with LCD controller
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Indicates the clockwise rotation to be applied at the output buffer
    eROTATE ROTATE : 2;
    // read-write - Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
    eHFLIP HFLIP : 1;
    // read-write - Indicates that the output buffer should be flipped vertically (effect applied before rotation).
    eVFLIP VFLIP : 1;
    uint32_t _reserved_2 : 10;
    // read-write - This bit controls where rotation will occur in the PXP datapath
    uint32_t ROT_POS : 1;
    // read-write - Select the block size to process.
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enable the PXP to run continuously
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - This bit must be set to zero for normal operation
    eCLKGATE CLKGATE : 1;
    // read-write - This bit can be turned on and then off to reset the PXP block to its default state.
    eSFTRST SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL &ref() { return *reinterpret_cast<volatile PXP_CTRL*>(0x40814000); }
};

// Control Register 0
union PXP_CTRL_SET {
  
  // Enables PXP operation with specified parameters
  enum class eENABLE : uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };
  
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  enum class eIRQ_ENABLE : uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };
  
  // Next command interrupt enable
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // Indicates the clockwise rotation to be applied at the output buffer
  enum class eROTATE : uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };
  
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  enum class eHFLIP : uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };
  
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  enum class eVFLIP : uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };
  
  // Select the block size to process.
  enum class eBLOCK_SIZE : uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };
  
  // Enable the PXP to run continuously
  enum class eEN_REPEAT : uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };
  
  // This bit must be set to zero for normal operation
  enum class eCLKGATE : uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };
  
  // This bit can be turned on and then off to reset the PXP block to its default state.
  enum class eSFTRST : uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enables PXP operation with specified parameters
    eENABLE ENABLE : 1;
    // read-write - Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
    eIRQ_ENABLE IRQ_ENABLE : 1;
    // read-write - Next command interrupt enable
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enable handshake with LCD controller
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Indicates the clockwise rotation to be applied at the output buffer
    eROTATE ROTATE : 2;
    // read-write - Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
    eHFLIP HFLIP : 1;
    // read-write - Indicates that the output buffer should be flipped vertically (effect applied before rotation).
    eVFLIP VFLIP : 1;
    uint32_t _reserved_2 : 10;
    // read-write - This bit controls where rotation will occur in the PXP datapath
    uint32_t ROT_POS : 1;
    // read-write - Select the block size to process.
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enable the PXP to run continuously
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - This bit must be set to zero for normal operation
    eCLKGATE CLKGATE : 1;
    // read-write - This bit can be turned on and then off to reset the PXP block to its default state.
    eSFTRST SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_SET &ref() { return *reinterpret_cast<volatile PXP_CTRL_SET*>(0x40814004); }
};

// Control Register 0
union PXP_CTRL_CLR {
  
  // Enables PXP operation with specified parameters
  enum class eENABLE : uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };
  
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  enum class eIRQ_ENABLE : uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };
  
  // Next command interrupt enable
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // Indicates the clockwise rotation to be applied at the output buffer
  enum class eROTATE : uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };
  
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  enum class eHFLIP : uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };
  
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  enum class eVFLIP : uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };
  
  // Select the block size to process.
  enum class eBLOCK_SIZE : uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };
  
  // Enable the PXP to run continuously
  enum class eEN_REPEAT : uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };
  
  // This bit must be set to zero for normal operation
  enum class eCLKGATE : uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };
  
  // This bit can be turned on and then off to reset the PXP block to its default state.
  enum class eSFTRST : uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enables PXP operation with specified parameters
    eENABLE ENABLE : 1;
    // read-write - Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
    eIRQ_ENABLE IRQ_ENABLE : 1;
    // read-write - Next command interrupt enable
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enable handshake with LCD controller
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Indicates the clockwise rotation to be applied at the output buffer
    eROTATE ROTATE : 2;
    // read-write - Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
    eHFLIP HFLIP : 1;
    // read-write - Indicates that the output buffer should be flipped vertically (effect applied before rotation).
    eVFLIP VFLIP : 1;
    uint32_t _reserved_2 : 10;
    // read-write - This bit controls where rotation will occur in the PXP datapath
    uint32_t ROT_POS : 1;
    // read-write - Select the block size to process.
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enable the PXP to run continuously
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - This bit must be set to zero for normal operation
    eCLKGATE CLKGATE : 1;
    // read-write - This bit can be turned on and then off to reset the PXP block to its default state.
    eSFTRST SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_CLR &ref() { return *reinterpret_cast<volatile PXP_CTRL_CLR*>(0x40814008); }
};

// Control Register 0
union PXP_CTRL_TOG {
  
  // Enables PXP operation with specified parameters
  enum class eENABLE : uint32_t {
    // PXP is disabled
    eDisabled = 0,
    // PXP is enabled
    eEnabled = 1,
  };
  
  // Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
  enum class eIRQ_ENABLE : uint32_t {
    // PXP interrupt is disabled
    eDisabled = 0,
    // PXP interrupt is enabled
    eEnabled = 1,
  };
  
  // Next command interrupt enable
  enum class eNEXT_IRQ_ENABLE : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // Indicates the clockwise rotation to be applied at the output buffer
  enum class eROTATE : uint32_t {
    // ROT_0
    eROT_0 = 0,
    // ROT_90
    eROT_90 = 1,
    // ROT_180
    eROT_180 = 2,
    // ROT_270
    eROT_270 = 3,
  };
  
  // Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
  enum class eHFLIP : uint32_t {
    // Horizontal Flip is disabled
    eDisabled = 0,
    // Horizontal Flip is enabled
    eEnabled = 1,
  };
  
  // Indicates that the output buffer should be flipped vertically (effect applied before rotation).
  enum class eVFLIP : uint32_t {
    // Vertical Flip is disabled
    eDisabled = 0,
    // Vertical Flip is enabled
    eEnabled = 1,
  };
  
  // Select the block size to process.
  enum class eBLOCK_SIZE : uint32_t {
    // Process 8x8 pixel blocks.
    e8X8 = 0,
    // Process 16x16 pixel blocks.
    e16X16 = 1,
  };
  
  // Enable the PXP to run continuously
  enum class eEN_REPEAT : uint32_t {
    // PXP will complete the process and enter the idle state ready to accept the next frame to be processed
    eComplete = 0,
    // PXP will repeat based on the current configuration register settings
    eRepeat = 1,
  };
  
  // This bit must be set to zero for normal operation
  enum class eCLKGATE : uint32_t {
    // Normal operation
    eNormal = 0,
    // All clocks to PXP is gated-off
    eGated = 1,
  };
  
  // This bit can be turned on and then off to reset the PXP block to its default state.
  enum class eSFTRST : uint32_t {
    // Normal PXP operation is enabled
    eEnabled = 0,
    // Clocking with PXP is disabled and held in its reset (lowest power) state. This is the default value.
    eDisabled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Enables PXP operation with specified parameters
    eENABLE ENABLE : 1;
    // read-write - Interrupt enable When using the PXP_NEXT functionality to reprogram the PXP, the new value of this bit will be used and may therefore enable or disable an interrupt unintentionally
    eIRQ_ENABLE IRQ_ENABLE : 1;
    // read-write - Next command interrupt enable
    eNEXT_IRQ_ENABLE NEXT_IRQ_ENABLE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Enable handshake with LCD controller
    uint32_t ENABLE_LCD_HANDSHAKE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Indicates the clockwise rotation to be applied at the output buffer
    eROTATE ROTATE : 2;
    // read-write - Indicates that the output buffer should be flipped horizontally (effect applied before rotation).
    eHFLIP HFLIP : 1;
    // read-write - Indicates that the output buffer should be flipped vertically (effect applied before rotation).
    eVFLIP VFLIP : 1;
    uint32_t _reserved_2 : 10;
    // read-write - This bit controls where rotation will occur in the PXP datapath
    uint32_t ROT_POS : 1;
    // read-write - Select the block size to process.
    eBLOCK_SIZE BLOCK_SIZE : 1;
    uint32_t _reserved_3 : 4;
    // read-write - Enable the PXP to run continuously
    eEN_REPEAT EN_REPEAT : 1;
    uint32_t _reserved_4 : 1;
    // read-write - This bit must be set to zero for normal operation
    eCLKGATE CLKGATE : 1;
    // read-write - This bit can be turned on and then off to reset the PXP block to its default state.
    eSFTRST SFTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0xC0000000; }
  static inline volatile PXP_CTRL_TOG &ref() { return *reinterpret_cast<volatile PXP_CTRL_TOG*>(0x4081400C); }
};

// Status Register
union PXP_STAT {
  
  // Indicates current PXP interrupt status
  enum class eIRQ : uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };
  
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  enum class eAXI_WRITE_ERROR : uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };
  
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  enum class eAXI_READ_ERROR : uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };
  
  // Indicates that the LUT DMA transfer has completed.
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates current PXP interrupt status
    eIRQ IRQ : 1;
    // read-write - Indicates PXP encountered an AXI write error and processing has been terminated.
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    // read-write - Indicates PXP encountered an AXI read error and processing has been terminated.
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    // read-write - Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
    uint32_t NEXT_IRQ : 1;
    // read-only - Indicates the AXI ID of the failing bus operation.
    uint32_t AXI_ERROR_ID : 4;
    // read-write - Indicates that the LUT DMA transfer has completed.
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_0 : 7;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKY : 8;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKX : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT &ref() { return *reinterpret_cast<volatile PXP_STAT*>(0x40814010); }
};

// Status Register
union PXP_STAT_SET {
  
  // Indicates current PXP interrupt status
  enum class eIRQ : uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };
  
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  enum class eAXI_WRITE_ERROR : uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };
  
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  enum class eAXI_READ_ERROR : uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };
  
  // Indicates that the LUT DMA transfer has completed.
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates current PXP interrupt status
    eIRQ IRQ : 1;
    // read-write - Indicates PXP encountered an AXI write error and processing has been terminated.
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    // read-write - Indicates PXP encountered an AXI read error and processing has been terminated.
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    // read-write - Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
    uint32_t NEXT_IRQ : 1;
    // read-only - Indicates the AXI ID of the failing bus operation.
    uint32_t AXI_ERROR_ID : 4;
    // read-write - Indicates that the LUT DMA transfer has completed.
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_0 : 7;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKY : 8;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKX : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_SET &ref() { return *reinterpret_cast<volatile PXP_STAT_SET*>(0x40814014); }
};

// Status Register
union PXP_STAT_CLR {
  
  // Indicates current PXP interrupt status
  enum class eIRQ : uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };
  
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  enum class eAXI_WRITE_ERROR : uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };
  
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  enum class eAXI_READ_ERROR : uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };
  
  // Indicates that the LUT DMA transfer has completed.
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates current PXP interrupt status
    eIRQ IRQ : 1;
    // read-write - Indicates PXP encountered an AXI write error and processing has been terminated.
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    // read-write - Indicates PXP encountered an AXI read error and processing has been terminated.
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    // read-write - Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
    uint32_t NEXT_IRQ : 1;
    // read-only - Indicates the AXI ID of the failing bus operation.
    uint32_t AXI_ERROR_ID : 4;
    // read-write - Indicates that the LUT DMA transfer has completed.
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_0 : 7;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKY : 8;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKX : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_CLR &ref() { return *reinterpret_cast<volatile PXP_STAT_CLR*>(0x40814018); }
};

// Status Register
union PXP_STAT_TOG {
  
  // Indicates current PXP interrupt status
  enum class eIRQ : uint32_t {
    // No interrupt
    eIRQ_0 = 0,
    // Interrupt generated
    eIRQ_1 = 1,
  };
  
  // Indicates PXP encountered an AXI write error and processing has been terminated.
  enum class eAXI_WRITE_ERROR : uint32_t {
    // AXI write is normal
    eNormal = 0,
    // AXI write error has occurred
    eError = 1,
  };
  
  // Indicates PXP encountered an AXI read error and processing has been terminated.
  enum class eAXI_READ_ERROR : uint32_t {
    // AXI read is normal
    eNormal = 0,
    // AXI read error has occurred
    eError = 1,
  };
  
  // Indicates that the LUT DMA transfer has completed.
  enum class eLUT_DMA_LOAD_DONE_IRQ : uint32_t {
    // LUT DMA LOAD transfer is active
    eActive = 0,
    // LUT DMA LOAD transfer is complete
    eComplete = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Indicates current PXP interrupt status
    eIRQ IRQ : 1;
    // read-write - Indicates PXP encountered an AXI write error and processing has been terminated.
    eAXI_WRITE_ERROR AXI_WRITE_ERROR : 1;
    // read-write - Indicates PXP encountered an AXI read error and processing has been terminated.
    eAXI_READ_ERROR AXI_READ_ERROR : 1;
    // read-write - Indicates that a command issued with the "Next Command" functionality has been issued and that a new command may be initiated with a write to the PXP_NEXT register
    uint32_t NEXT_IRQ : 1;
    // read-only - Indicates the AXI ID of the failing bus operation.
    uint32_t AXI_ERROR_ID : 4;
    // read-write - Indicates that the LUT DMA transfer has completed.
    eLUT_DMA_LOAD_DONE_IRQ LUT_DMA_LOAD_DONE_IRQ : 1;
    uint32_t _reserved_0 : 7;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKY : 8;
    // read-only - Indicates the X coordinate of the block currently being rendered.
    uint32_t BLOCKX : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_STAT_TOG &ref() { return *reinterpret_cast<volatile PXP_STAT_TOG*>(0x4081401C); }
};

// Output Buffer Control Register
union PXP_OUT_CTRL {
  
  // Output framebuffer format
  enum class eFORMAT : uint32_t {
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
  
  // Determines how the PXP writes it's output data
  enum class eINTERLACED_OUTPUT : uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };
  
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  enum class eALPHA_OUTPUT : uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output framebuffer format
    eFORMAT FORMAT : 5;
    uint32_t _reserved_0 : 3;
    // read-write - Determines how the PXP writes it's output data
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_1 : 13;
    // read-write - Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    // read-write - When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
    uint32_t ALPHA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL &ref() { return *reinterpret_cast<volatile PXP_OUT_CTRL*>(0x40814020); }
};

// Output Buffer Control Register
union PXP_OUT_CTRL_SET {
  
  // Output framebuffer format
  enum class eFORMAT : uint32_t {
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
  
  // Determines how the PXP writes it's output data
  enum class eINTERLACED_OUTPUT : uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };
  
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  enum class eALPHA_OUTPUT : uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output framebuffer format
    eFORMAT FORMAT : 5;
    uint32_t _reserved_0 : 3;
    // read-write - Determines how the PXP writes it's output data
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_1 : 13;
    // read-write - Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    // read-write - When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
    uint32_t ALPHA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_SET &ref() { return *reinterpret_cast<volatile PXP_OUT_CTRL_SET*>(0x40814024); }
};

// Output Buffer Control Register
union PXP_OUT_CTRL_CLR {
  
  // Output framebuffer format
  enum class eFORMAT : uint32_t {
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
  
  // Determines how the PXP writes it's output data
  enum class eINTERLACED_OUTPUT : uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };
  
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  enum class eALPHA_OUTPUT : uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output framebuffer format
    eFORMAT FORMAT : 5;
    uint32_t _reserved_0 : 3;
    // read-write - Determines how the PXP writes it's output data
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_1 : 13;
    // read-write - Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    // read-write - When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
    uint32_t ALPHA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_CLR &ref() { return *reinterpret_cast<volatile PXP_OUT_CTRL_CLR*>(0x40814028); }
};

// Output Buffer Control Register
union PXP_OUT_CTRL_TOG {
  
  // Output framebuffer format
  enum class eFORMAT : uint32_t {
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
  
  // Determines how the PXP writes it's output data
  enum class eINTERLACED_OUTPUT : uint32_t {
    // All data written in progressive format to the OUTBUF Pointer.
    ePROGRESSIVE = 0,
    // Interlaced output: only data for field 0 is written to the OUTBUF Pointer.
    eFIELD0 = 1,
    // Interlaced output: only data for field 1 is written to the OUTBUF2 Pointer.
    eFIELD1 = 2,
    // Interlaced output: data for field 0 is written to OUTBUF and data for field 1 is written to OUTBUF2.
    eINTERLACED = 3,
  };
  
  // Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
  enum class eALPHA_OUTPUT : uint32_t {
    // Retain
    eRetain = 0,
    // Overwritten
    eOverwritten = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output framebuffer format
    eFORMAT FORMAT : 5;
    uint32_t _reserved_0 : 3;
    // read-write - Determines how the PXP writes it's output data
    eINTERLACED_OUTPUT INTERLACED_OUTPUT : 2;
    uint32_t _reserved_1 : 13;
    // read-write - Indicates that alpha component in output buffer pixels should be overwritten by PXP_OUT_CTRL[ALPHA]
    eALPHA_OUTPUT ALPHA_OUTPUT : 1;
    // read-write - When generating an output buffer with an alpha component, the value in this field will be used when enabled to override the alpha passed through the pixel data pipeline
    uint32_t ALPHA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_CTRL_TOG &ref() { return *reinterpret_cast<volatile PXP_OUT_CTRL_TOG*>(0x4081402C); }
};

// Output Frame Buffer Pointer
union PXP_OUT_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Current address pointer for the output frame buffer
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_BUF &ref() { return *reinterpret_cast<volatile PXP_OUT_BUF*>(0x40814030); }
};

// Output Frame Buffer Pointer #2
union PXP_OUT_BUF2 {
  
  // Bit field definition.
  struct {
    // read-write - Current address pointer for the output frame buffer
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_BUF2 &ref() { return *reinterpret_cast<volatile PXP_OUT_BUF2*>(0x40814040); }
};

// Output Buffer Pitch
union PXP_OUT_PITCH {
  
  // Bit field definition.
  struct {
    // read-write - Indicates the number of bytes in memory between two vertically adjacent pixels.
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PITCH &ref() { return *reinterpret_cast<volatile PXP_OUT_PITCH*>(0x40814050); }
};

// Output Surface Lower Right Coordinate
union PXP_OUT_LRC {
  
  // Bit field definition.
  struct {
    // read-write - Indicates the number of vertical PIXELS in the output surface (non-rotated)
    uint32_t Y : 14;
    uint32_t _reserved_0 : 2;
    // read-write - Indicates number of horizontal PIXELS in the output surface (non-rotated)
    uint32_t X : 14;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_LRC &ref() { return *reinterpret_cast<volatile PXP_OUT_LRC*>(0x40814060); }
};

// Processed Surface Upper Left Coordinate
union PXP_OUT_PS_ULC {
  
  // Bit field definition.
  struct {
    // read-write - This field indicates the upper left Y-coordinate (in pixels) of the processed surface in the output buffer
    uint32_t Y : 14;
    uint32_t _reserved_0 : 2;
    // read-write - This field indicates the upper left X-coordinate (in pixels) of the processed surface (PS) in the output buffer
    uint32_t X : 14;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PS_ULC &ref() { return *reinterpret_cast<volatile PXP_OUT_PS_ULC*>(0x40814070); }
};

// Processed Surface Lower Right Coordinate
union PXP_OUT_PS_LRC {
  
  // Bit field definition.
  struct {
    // read-write - This field indicates the lower right Y-coordinate (in pixels) of the processed surface in the output frame buffer
    uint32_t Y : 14;
    uint32_t _reserved_0 : 2;
    // read-write - This field indicates the lower right X-coordinate (in pixels) of the processed surface (PS) in the output frame buffer
    uint32_t X : 14;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_PS_LRC &ref() { return *reinterpret_cast<volatile PXP_OUT_PS_LRC*>(0x40814080); }
};

// Alpha Surface Upper Left Coordinate
union PXP_OUT_AS_ULC {
  
  // Bit field definition.
  struct {
    // read-write - This field indicates the upper left Y-coordinate (in pixels) of the alpha surface in the output frame buffer
    uint32_t Y : 14;
    uint32_t _reserved_0 : 2;
    // read-write - This field indicates the upper left X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
    uint32_t X : 14;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_AS_ULC &ref() { return *reinterpret_cast<volatile PXP_OUT_AS_ULC*>(0x40814090); }
};

// Alpha Surface Lower Right Coordinate
union PXP_OUT_AS_LRC {
  
  // Bit field definition.
  struct {
    // read-write - This field indicates the lower right Y-coordinate (in pixels) of the alpha surface in the output frame buffer
    uint32_t Y : 14;
    uint32_t _reserved_0 : 2;
    // read-write - This field indicates the lower right X-coordinate (in pixels) of the alpha surface (AS) in the output frame buffer
    uint32_t X : 14;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_OUT_AS_LRC &ref() { return *reinterpret_cast<volatile PXP_OUT_AS_LRC*>(0x408140A0); }
};

// Processed Surface (PS) Control Register
union PXP_PS_CTRL {
  
  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  enum class eFORMAT : uint32_t {
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
  
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  enum class eWB_SWAP : uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };
  
  // Verticle pre decimation filter control.
  enum class eDECY : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };
  
  // Horizontal pre decimation filter control.
  enum class eDECX : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
    eFORMAT FORMAT : 6;
    // read-write - Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Verticle pre decimation filter control.
    eDECY DECY : 2;
    // read-write - Horizontal pre decimation filter control.
    eDECX DECX : 2;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL &ref() { return *reinterpret_cast<volatile PXP_PS_CTRL*>(0x408140B0); }
};

// Processed Surface (PS) Control Register
union PXP_PS_CTRL_SET {
  
  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  enum class eFORMAT : uint32_t {
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
  
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  enum class eWB_SWAP : uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };
  
  // Verticle pre decimation filter control.
  enum class eDECY : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };
  
  // Horizontal pre decimation filter control.
  enum class eDECX : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
    eFORMAT FORMAT : 6;
    // read-write - Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Verticle pre decimation filter control.
    eDECY DECY : 2;
    // read-write - Horizontal pre decimation filter control.
    eDECX DECX : 2;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_SET &ref() { return *reinterpret_cast<volatile PXP_PS_CTRL_SET*>(0x408140B4); }
};

// Processed Surface (PS) Control Register
union PXP_PS_CTRL_CLR {
  
  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  enum class eFORMAT : uint32_t {
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
  
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  enum class eWB_SWAP : uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };
  
  // Verticle pre decimation filter control.
  enum class eDECY : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };
  
  // Horizontal pre decimation filter control.
  enum class eDECX : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
    eFORMAT FORMAT : 6;
    // read-write - Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Verticle pre decimation filter control.
    eDECY DECY : 2;
    // read-write - Horizontal pre decimation filter control.
    eDECX DECX : 2;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_CLR &ref() { return *reinterpret_cast<volatile PXP_PS_CTRL_CLR*>(0x408140B8); }
};

// Processed Surface (PS) Control Register
union PXP_PS_CTRL_TOG {
  
  // PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
  enum class eFORMAT : uint32_t {
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
  
  // Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
  enum class eWB_SWAP : uint32_t {
    // Byte swap is disabled
    eDisabled = 0,
    // Byte swap is enabled
    eEnabled = 1,
  };
  
  // Verticle pre decimation filter control.
  enum class eDECY : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECY2 = 1,
    // Decimate PS by 4.
    eDECY4 = 2,
    // Decimate PS by 8.
    eDECY8 = 3,
  };
  
  // Horizontal pre decimation filter control.
  enum class eDECX : uint32_t {
    // Disable pre-decimation filter.
    eDISABLE = 0,
    // Decimate PS by 2.
    eDECX2 = 1,
    // Decimate PS by 4.
    eDECX4 = 2,
    // Decimate PS by 8.
    eDECX8 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - PS buffer format. To select between YUV and YCbCr formats, see bit 31 of the CSC1_COEF0 register.
    eFORMAT FORMAT : 6;
    // read-write - Swap bytes in words. For each 16 bit word, the two bytes will be swapped.
    eWB_SWAP WB_SWAP : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Verticle pre decimation filter control.
    eDECY DECY : 2;
    // read-write - Horizontal pre decimation filter control.
    eDECX DECX : 2;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CTRL_TOG &ref() { return *reinterpret_cast<volatile PXP_PS_CTRL_TOG*>(0x408140BC); }
};

// PS Input Buffer Address
union PXP_PS_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Address pointer for the PS RGB or Y (luma) input buffer.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_BUF &ref() { return *reinterpret_cast<volatile PXP_PS_BUF*>(0x408140C0); }
};

// PS U/Cb or 2 Plane UV Input Buffer Address
union PXP_PS_UBUF {
  
  // Bit field definition.
  struct {
    // read-write - Address pointer for the PS U/Cb or 2 plane UV Chroma input buffer.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_UBUF &ref() { return *reinterpret_cast<volatile PXP_PS_UBUF*>(0x408140D0); }
};

// PS V/Cr Input Buffer Address
union PXP_PS_VBUF {
  
  // Bit field definition.
  struct {
    // read-write - Address pointer for the PS V/Cr Chroma input buffer.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_VBUF &ref() { return *reinterpret_cast<volatile PXP_PS_VBUF*>(0x408140E0); }
};

// Processed Surface Pitch
union PXP_PS_PITCH {
  
  // Bit field definition.
  struct {
    // read-write - Indicates the number of bytes in memory between two vertically adjacent pixels.
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_PITCH &ref() { return *reinterpret_cast<volatile PXP_PS_PITCH*>(0x408140F0); }
};

// PS Background Color
union PXP_PS_BACKGROUND {
  
  // Bit field definition.
  struct {
    // read-write - Background color (in 24bpp format) for any pixels not within the buffer range specified by the PS ULC/LRC
    uint32_t COLOR : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_BACKGROUND &ref() { return *reinterpret_cast<volatile PXP_PS_BACKGROUND*>(0x40814100); }
};

// PS Scale Factor Register
union PXP_PS_SCALE {
  
  // Bit field definition.
  struct {
    // read-write - This is a two bit integer and 12 bit fractional representation (##
    uint32_t XSCALE : 15;
    uint32_t _reserved_0 : 1;
    // read-write - This is a two bit integer and 12 bit fractional representation (##
    uint32_t YSCALE : 15;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x10001000; }
  static inline volatile PXP_PS_SCALE &ref() { return *reinterpret_cast<volatile PXP_PS_SCALE*>(0x40814110); }
};

// PS Scale Offset Register
union PXP_PS_OFFSET {
  
  // Bit field definition.
  struct {
    // read-write - This is a 12 bit fractional representation (0
    uint32_t XOFFSET : 12;
    uint32_t _reserved_0 : 4;
    // read-write - This is a 12 bit fractional representation (0
    uint32_t YOFFSET : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_OFFSET &ref() { return *reinterpret_cast<volatile PXP_PS_OFFSET*>(0x40814120); }
};

// PS Color Key Low
union PXP_PS_CLRKEYLOW {
  
  // Bit field definition.
  struct {
    // read-write - Low range of color key applied to PS buffer
    uint32_t PIXEL : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00FFFFFF; }
  static inline volatile PXP_PS_CLRKEYLOW &ref() { return *reinterpret_cast<volatile PXP_PS_CLRKEYLOW*>(0x40814130); }
};

// PS Color Key High
union PXP_PS_CLRKEYHIGH {
  
  // Bit field definition.
  struct {
    // read-write - High range of color key applied to PS buffer
    uint32_t PIXEL : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PS_CLRKEYHIGH &ref() { return *reinterpret_cast<volatile PXP_PS_CLRKEYHIGH*>(0x40814140); }
};

// Alpha Surface Control
union PXP_AS_CTRL {
  
  // Determines how the alpha value is constructed for this alpha surface
  enum class eALPHA_CTRL : uint32_t {
    // Indicates that the AS pixel alpha value will be used to blend the AS with PS. The ALPHA field is ignored.
    eEmbedded = 0,
    // Indicates that the value in the ALPHA field should be used instead of the alpha values present in the input pixels.
    eOverride = 1,
    // Indicates that the value in the ALPHA field should be used to scale all pixel alpha values. Each pixel alpha is multiplied by the value in the ALPHA field.
    eMultiply = 2,
    // Enable ROPs. The ROP field indicates an operation to be performed on the alpha surface and PS pixels.
    eROPs = 3,
  };
  
  // Indicates that colorkey functionality is enabled for this alpha surface
  enum class eENABLE_COLORKEY : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // Indicates the input buffer format for AS.
  enum class eFORMAT : uint32_t {
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
  
  // Indicates a raster operation to perform when enabled
  enum class eROP : uint32_t {
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
  
  // Setting this bit to logic 0 will not alter the alpha value
  enum class eALPHA_INVERT : uint32_t {
    // Not inverted
    eALPHA_INVERT_0 = 0,
    // Inverted
    eInverted = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Determines how the alpha value is constructed for this alpha surface
    eALPHA_CTRL ALPHA_CTRL : 2;
    // read-write - Indicates that colorkey functionality is enabled for this alpha surface
    eENABLE_COLORKEY ENABLE_COLORKEY : 1;
    // read-write - Indicates the input buffer format for AS.
    eFORMAT FORMAT : 4;
    // read-write - Alpha modifier used when the ALPHA_MULTIPLY or ALPHA_OVERRIDE values are programmed in PXP_AS_CTRL[ALPHA_CTRL]
    uint32_t ALPHA : 8;
    // read-write - Indicates a raster operation to perform when enabled
    eROP ROP : 4;
    // read-write - Setting this bit to logic 0 will not alter the alpha value
    eALPHA_INVERT ALPHA_INVERT : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_CTRL &ref() { return *reinterpret_cast<volatile PXP_AS_CTRL*>(0x40814150); }
};

// Alpha Surface Buffer Pointer
union PXP_AS_BUF {
  
  // Bit field definition.
  struct {
    // read-write - Address pointer for the alpha surface 0 buffer.
    uint32_t ADDR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_BUF &ref() { return *reinterpret_cast<volatile PXP_AS_BUF*>(0x40814160); }
};

// Alpha Surface Pitch
union PXP_AS_PITCH {
  
  // Bit field definition.
  struct {
    // read-write - Indicates the number of bytes in memory between two vertically adjacent pixels.
    uint32_t PITCH : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_PITCH &ref() { return *reinterpret_cast<volatile PXP_AS_PITCH*>(0x40814170); }
};

// Overlay Color Key Low
union PXP_AS_CLRKEYLOW {
  
  // Bit field definition.
  struct {
    // read-write - Low range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
    uint32_t PIXEL : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00FFFFFF; }
  static inline volatile PXP_AS_CLRKEYLOW &ref() { return *reinterpret_cast<volatile PXP_AS_CLRKEYLOW*>(0x40814180); }
};

// Overlay Color Key High
union PXP_AS_CLRKEYHIGH {
  
  // Bit field definition.
  struct {
    // read-write - High range of RGB color key applied to AS buffer. Each overlay has an independent colorkey enable.
    uint32_t PIXEL : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_AS_CLRKEYHIGH &ref() { return *reinterpret_cast<volatile PXP_AS_CLRKEYHIGH*>(0x40814190); }
};

// Color Space Conversion Coefficient Register 0
union PXP_CSC1_COEF0 {
  
  // Set to 1 when performing YCbCr conversion to RGB
  enum class eYCBCR_MODE : uint32_t {
    // YUV to RGB
    eYCBCR_MODE_0 = 0,
    // YCbCr to RGB
    eYCBCR_MODE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Two's compliment amplitude offset implicit in the Y data
    uint32_t Y_OFFSET : 9;
    // read-write - Two's compliment phase offset implicit for CbCr data
    uint32_t UV_OFFSET : 9;
    // read-write - Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
    uint32_t C0 : 11;
    uint32_t _reserved_0 : 1;
    // read-write - Bypass the CSC unit in the scaling engine
    uint32_t BYPASS : 1;
    // read-write - Set to 1 when performing YCbCr conversion to RGB
    eYCBCR_MODE YCBCR_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x04000000; }
  static inline volatile PXP_CSC1_COEF0 &ref() { return *reinterpret_cast<volatile PXP_CSC1_COEF0*>(0x408141A0); }
};

// Color Space Conversion Coefficient Register 1
union PXP_CSC1_COEF1 {
  
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
  static inline volatile PXP_CSC1_COEF1 &ref() { return *reinterpret_cast<volatile PXP_CSC1_COEF1*>(0x408141B0); }
};

// Color Space Conversion Coefficient Register 2
union PXP_CSC1_COEF2 {
  
  // Bit field definition.
  struct {
    // read-write - Two's complement Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    uint32_t C3 : 11;
    uint32_t _reserved_0 : 5;
    // read-write - Two's complement Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    uint32_t C2 : 11;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x079B076C; }
  static inline volatile PXP_CSC1_COEF2 &ref() { return *reinterpret_cast<volatile PXP_CSC1_COEF2*>(0x408141C0); }
};

// PXP Power Control Register
union PXP_POWER {
  
  // Select the low power state of the Rotation (ROT) memory.
  enum class eROT_MEM_LP_STATE : uint32_t {
    // Memory is not in low power state.
    eNONE = 0,
    // Light Sleep Mode. Low leakage mode, maintain memory contents.
    eLS = 1,
    // Deep Sleep Mode. Low leakage mode, maintain memory contents.
    eDS = 2,
    // Shut Down Mode. Shut Down periphery and core, no memory retention.
    eSD = 4,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    // read-write - Select the low power state of the Rotation (ROT) memory.
    eROT_MEM_LP_STATE ROT_MEM_LP_STATE : 3;
    uint32_t _reserved_1 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_POWER &ref() { return *reinterpret_cast<volatile PXP_POWER*>(0x40814320); }
};

// Next Frame Pointer
union PXP_NEXT {
  
  // Bit field definition.
  struct {
    // read-only - Indicates that the "next frame" functionality has been enabled
    uint32_t ENABLED : 1;
    uint32_t _reserved_0 : 1;
    // read-write - A pointer to a data structure containing register values to be used when processing the next frame
    uint32_t POINTER : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_NEXT &ref() { return *reinterpret_cast<volatile PXP_NEXT*>(0x40814400); }
};

// PXP Alpha Engine A Control Register.
union PXP_PORTER_DUFF_CTRL {
  
  // Porter-Duff Enable
  enum class ePORTER_DUFF_ENABLE : uint32_t {
    // Disabled
    eDisabled = 0,
    // Enabled
    eEnabled = 1,
  };
  
  // s0 to s1 factor mode
  enum class eS0_S1_FACTOR_MODE : uint32_t {
    // 1
    eS0_S1_FACTOR_MODE_0 = 0,
    // 0
    eS0_S1_FACTOR_MODE_1 = 1,
    // Straight alpha
    eS0_S1_FACTOR_MODE_2 = 2,
    // Inverse alpha
    eS0_S1_FACTOR_MODE_3 = 3,
  };
  
  // s0 global alpha mode
  enum class eS0_GLOBAL_ALPHA_MODE : uint32_t {
    // Global alpha
    eS0_GLOBAL_ALPHA_MODE_0 = 0,
    // Local alpha
    eS0_GLOBAL_ALPHA_MODE_1 = 1,
    // Scaled alpha
    eS0_GLOBAL_ALPHA_MODE_2 = 2,
    // Scaled alpha
    eS0_GLOBAL_ALPHA_MODE_3 = 3,
  };
  
  // s0 alpha mode (Porter-Duff alpha mode)
  enum class eS0_ALPHA_MODE : uint32_t {
    // Straight mode
    eS0_ALPHA_MODE_0 = 0,
    // Inverted mode
    eS0_ALPHA_MODE_1 = 1,
  };
  
  // s0 color mode (Porter-Duff color mode)
  enum class eS0_COLOR_MODE : uint32_t {
    // Original pixel
    eS0_COLOR_MODE_0 = 0,
    // Scaled pixel
    eS0_COLOR_MODE_1 = 1,
  };
  
  // s1 to s0 factor mode (Porter-Duff factor mode)
  enum class eS1_S0_FACTOR_MODE : uint32_t {
    // 1
    eS1_S0_FACTOR_MODE_0 = 0,
    // 0
    eS1_S0_FACTOR_MODE_1 = 1,
    // Straight alpha
    eS1_S0_FACTOR_MODE_2 = 2,
    // Inverse alpha
    eS1_S0_FACTOR_MODE_3 = 3,
  };
  
  // s1 global alpha mode (Porter-Duff Global Alpha mode)
  enum class eS1_GLOBAL_ALPHA_MODE : uint32_t {
    // Global alpha
    eS1_GLOBAL_ALPHA_MODE_0 = 0,
    // Local alpha
    eS1_GLOBAL_ALPHA_MODE_1 = 1,
    // Scaled alpha
    eS1_GLOBAL_ALPHA_MODE_2 = 2,
    // Scaled alpha
    eS1_GLOBAL_ALPHA_MODE_3 = 3,
  };
  
  // s1 alpha mode (Porter-Duff Alpha mode)
  enum class eS1_ALPHA_MODE : uint32_t {
    // Straight mode
    eS1_ALPHA_MODE_0 = 0,
    // Inverted mode
    eS1_ALPHA_MODE_1 = 1,
  };
  
  // s1 color mode
  enum class eS1_COLOR_MODE : uint32_t {
    // Original pixel
    eS1_COLOR_MODE_0 = 0,
    // Scaled pixel
    eS1_COLOR_MODE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Porter-Duff Enable
    ePORTER_DUFF_ENABLE PORTER_DUFF_ENABLE : 1;
    // read-write - s0 to s1 factor mode
    eS0_S1_FACTOR_MODE S0_S1_FACTOR_MODE : 2;
    // read-write - s0 global alpha mode
    eS0_GLOBAL_ALPHA_MODE S0_GLOBAL_ALPHA_MODE : 2;
    // read-write - s0 alpha mode (Porter-Duff alpha mode)
    eS0_ALPHA_MODE S0_ALPHA_MODE : 1;
    // read-write - s0 color mode (Porter-Duff color mode)
    eS0_COLOR_MODE S0_COLOR_MODE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - s1 to s0 factor mode (Porter-Duff factor mode)
    eS1_S0_FACTOR_MODE S1_S0_FACTOR_MODE : 2;
    // read-write - s1 global alpha mode (Porter-Duff Global Alpha mode)
    eS1_GLOBAL_ALPHA_MODE S1_GLOBAL_ALPHA_MODE : 2;
    // read-write - s1 alpha mode (Porter-Duff Alpha mode)
    eS1_ALPHA_MODE S1_ALPHA_MODE : 1;
    // read-write - s1 color mode
    eS1_COLOR_MODE S1_COLOR_MODE : 1;
    uint32_t _reserved_1 : 2;
    // read-write - s0 global alpha
    uint32_t S0_GLOBAL_ALPHA : 8;
    // read-write - s1 global alpha
    uint32_t S1_GLOBAL_ALPHA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PXP_PORTER_DUFF_CTRL &ref() { return *reinterpret_cast<volatile PXP_PORTER_DUFF_CTRL*>(0x40814440); }
};


} // namespace nPXP