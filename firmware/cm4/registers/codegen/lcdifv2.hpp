#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LCDIF_V2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::lcdifv2 {


// LCDIFv2 display control Register
struct CTRL_fields_ {

  enum class eINV_HS : std::uint32_t {
    // HSYNC signal not inverted (active HIGH)
    ebf_val0 = 0,
    // Invert HSYNC signal (active LOW)
    ebf_val1 = 1,
  };

  enum class eINV_VS : std::uint32_t {
    // VSYNC signal not inverted (active HIGH)
    ebf_val0 = 0,
    // Invert VSYNC signal (active LOW)
    ebf_val1 = 1,
  };

  enum class eINV_DE : std::uint32_t {
    // Data enable is active high
    ebf_val0 = 0,
    // Data enable is active low
    ebf_val1 = 1,
  };

  enum class eINV_PXCK : std::uint32_t {
    // Display samples data on the falling edge
    ebf_val0 = 0,
    // Display samples data on the rising edge
    ebf_val1 = 1,
  };

  enum class eNEG : std::uint32_t {
    // Output is to remain same
    ebf_val0 = 0,
    // Output to be negated
    ebf_val1 = 1,
  };

  enum class eSW_RESET : std::uint32_t {
    // No action
    ebf_val0 = 0,
    // All LCDIFv2 internal registers are forced into their reset state. User registers are not affected
    ebf_val1 = 1,
  };
  // Invert Horizontal synchronization signal
  using INV_HS = ftl::mmio::Field<1, 0, eINV_HS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Invert Vertical synchronization signal
  using INV_VS = ftl::mmio::Field<1, 1, eINV_VS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Invert Data Enable polarity
  using INV_DE = ftl::mmio::Field<1, 2, eINV_DE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Polarity change of Pixel Clock
  using INV_PXCK = ftl::mmio::Field<1, 3, eINV_PXCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // Indicates if value at the output (pixel data output) needs to be negated
  using NEG = ftl::mmio::Field<1, 4, eNEG, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software Reset
  using SW_RESET = ftl::mmio::Field<1, 31, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0x40808000u,
    std::uint32_t,
    0x80000000u,
    ftl::mmio::RW,
    CTRL_fields_::INV_HS,
    CTRL_fields_::INV_VS,
    CTRL_fields_::INV_DE,
    CTRL_fields_::INV_PXCK,
    CTRL_fields_::NEG,
    ftl::mmio::Reserved<26, 5>,
    CTRL_fields_::SW_RESET> {
  using eINV_HS = CTRL_fields_::eINV_HS;
  using eINV_VS = CTRL_fields_::eINV_VS;
  using eINV_DE = CTRL_fields_::eINV_DE;
  using eINV_PXCK = CTRL_fields_::eINV_PXCK;
  using eNEG = CTRL_fields_::eNEG;
  using eSW_RESET = CTRL_fields_::eSW_RESET;
  using INV_HS = CTRL_fields_::INV_HS;
  using INV_VS = CTRL_fields_::INV_VS;
  using INV_DE = CTRL_fields_::INV_DE;
  using INV_PXCK = CTRL_fields_::INV_PXCK;
  using NEG = CTRL_fields_::NEG;
  using SW_RESET = CTRL_fields_::SW_RESET;
};


// LCDIFv2 display control Register
struct CTRL_SET_fields_ {
  // Invert Horizontal synchronization signal
  using INV_HS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Invert Vertical synchronization signal
  using INV_VS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Invert Data Enable polarity
  using INV_DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Polarity change of Pixel Clock
  using INV_PXCK = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Indicates if value at the output (pixel data output) needs to be negated
  using NEG = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Software Reset
  using SW_RESET = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL_SET_fields_

struct CTRL_SET : ftl::mmio::Register<
    0x40808004u,
    std::uint32_t,
    0x80000000u,
    ftl::mmio::RW,
    CTRL_SET_fields_::INV_HS,
    CTRL_SET_fields_::INV_VS,
    CTRL_SET_fields_::INV_DE,
    CTRL_SET_fields_::INV_PXCK,
    CTRL_SET_fields_::NEG,
    ftl::mmio::Reserved<26, 5>,
    CTRL_SET_fields_::SW_RESET> {
  using INV_HS = CTRL_SET_fields_::INV_HS;
  using INV_VS = CTRL_SET_fields_::INV_VS;
  using INV_DE = CTRL_SET_fields_::INV_DE;
  using INV_PXCK = CTRL_SET_fields_::INV_PXCK;
  using NEG = CTRL_SET_fields_::NEG;
  using SW_RESET = CTRL_SET_fields_::SW_RESET;
};


// LCDIFv2 display control Register
struct CTRL_CLR_fields_ {
  // Invert Horizontal synchronization signal
  using INV_HS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Invert Vertical synchronization signal
  using INV_VS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Invert Data Enable polarity
  using INV_DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Polarity change of Pixel Clock
  using INV_PXCK = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Indicates if value at the output (pixel data output) needs to be negated
  using NEG = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Software Reset
  using SW_RESET = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL_CLR_fields_

struct CTRL_CLR : ftl::mmio::Register<
    0x40808008u,
    std::uint32_t,
    0x80000000u,
    ftl::mmio::RW,
    CTRL_CLR_fields_::INV_HS,
    CTRL_CLR_fields_::INV_VS,
    CTRL_CLR_fields_::INV_DE,
    CTRL_CLR_fields_::INV_PXCK,
    CTRL_CLR_fields_::NEG,
    ftl::mmio::Reserved<26, 5>,
    CTRL_CLR_fields_::SW_RESET> {
  using INV_HS = CTRL_CLR_fields_::INV_HS;
  using INV_VS = CTRL_CLR_fields_::INV_VS;
  using INV_DE = CTRL_CLR_fields_::INV_DE;
  using INV_PXCK = CTRL_CLR_fields_::INV_PXCK;
  using NEG = CTRL_CLR_fields_::NEG;
  using SW_RESET = CTRL_CLR_fields_::SW_RESET;
};


// LCDIFv2 display control Register
struct CTRL_TOG_fields_ {
  // Invert Horizontal synchronization signal
  using INV_HS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Invert Vertical synchronization signal
  using INV_VS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Invert Data Enable polarity
  using INV_DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Polarity change of Pixel Clock
  using INV_PXCK = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Indicates if value at the output (pixel data output) needs to be negated
  using NEG = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Software Reset
  using SW_RESET = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL_TOG_fields_

struct CTRL_TOG : ftl::mmio::Register<
    0x4080800Cu,
    std::uint32_t,
    0x80000000u,
    ftl::mmio::RW,
    CTRL_TOG_fields_::INV_HS,
    CTRL_TOG_fields_::INV_VS,
    CTRL_TOG_fields_::INV_DE,
    CTRL_TOG_fields_::INV_PXCK,
    CTRL_TOG_fields_::NEG,
    ftl::mmio::Reserved<26, 5>,
    CTRL_TOG_fields_::SW_RESET> {
  using INV_HS = CTRL_TOG_fields_::INV_HS;
  using INV_VS = CTRL_TOG_fields_::INV_VS;
  using INV_DE = CTRL_TOG_fields_::INV_DE;
  using INV_PXCK = CTRL_TOG_fields_::INV_PXCK;
  using NEG = CTRL_TOG_fields_::NEG;
  using SW_RESET = CTRL_TOG_fields_::SW_RESET;
};


// Display Parameter Register
struct DISP_PARA_fields_ {

  enum class eDISP_MODE : std::uint32_t {
    // Normal mode. Panel content controlled by layer configuration
    ebf_val0 = 0,
    // Test Mode1(BGND Color Display)
    ebf_val1 = 1,
    // Test Mode2(Column Color Bar)
    ebf_val2 = 2,
    // Test Mode3(Row Color Bar)
    ebf_val3 = 3,
  };

  enum class eLINE_PATTERN : std::uint32_t {
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

  enum class eDISP_ON : std::uint32_t {
    // Display Off
    ebf_val0 = 0,
    // Display On
    ebf_val1 = 1,
  };
  // Blue component of the default color displayed in the sectors where no layer is active
  using BGND_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Green component of the default color displayed in the sectors where no layer is active
  using BGND_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Red component of the default color displayed in the sectors where no layer is active
  using BGND_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // LCDIFv2 operating mode
  using DISP_MODE = ftl::mmio::Field<2, 24, eDISP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LCDIFv2 line output order
  using LINE_PATTERN = ftl::mmio::Field<3, 26, eLINE_PATTERN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Display panel On/Off mode
  using DISP_ON = ftl::mmio::Field<1, 31, eDISP_ON, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DISP_PARA_fields_

struct DISP_PARA : ftl::mmio::Register<
    0x40808010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DISP_PARA_fields_::BGND_B,
    DISP_PARA_fields_::BGND_G,
    DISP_PARA_fields_::BGND_R,
    DISP_PARA_fields_::DISP_MODE,
    DISP_PARA_fields_::LINE_PATTERN,
    ftl::mmio::Reserved<2, 29>,
    DISP_PARA_fields_::DISP_ON> {
  using eDISP_MODE = DISP_PARA_fields_::eDISP_MODE;
  using eLINE_PATTERN = DISP_PARA_fields_::eLINE_PATTERN;
  using eDISP_ON = DISP_PARA_fields_::eDISP_ON;
  using BGND_B = DISP_PARA_fields_::BGND_B;
  using BGND_G = DISP_PARA_fields_::BGND_G;
  using BGND_R = DISP_PARA_fields_::BGND_R;
  using DISP_MODE = DISP_PARA_fields_::DISP_MODE;
  using LINE_PATTERN = DISP_PARA_fields_::LINE_PATTERN;
  using DISP_ON = DISP_PARA_fields_::DISP_ON;
};


// Display Size Register
struct DISP_SIZE_fields_ {
  // Sets the display size horizontal resolution in pixels
  using DELTA_X = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Sets the display size vertical resolution in pixels
  using DELTA_Y = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DISP_SIZE_fields_

struct DISP_SIZE : ftl::mmio::Register<
    0x40808014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DISP_SIZE_fields_::DELTA_X,
    ftl::mmio::Reserved<4, 12>,
    DISP_SIZE_fields_::DELTA_Y,
    ftl::mmio::Reserved<4, 28>> {
  using DELTA_X = DISP_SIZE_fields_::DELTA_X;
  using DELTA_Y = DISP_SIZE_fields_::DELTA_Y;
};


// Horizontal Sync Parameter Register
struct HSYN_PARA_fields_ {
  // HSYNC front-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
  using FP_H = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // HSYNC active pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
  using PW_H = ftl::mmio::Field<9, 11, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // HSYNC back-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
  using BP_H = ftl::mmio::Field<9, 22, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HSYN_PARA_fields_

struct HSYN_PARA : ftl::mmio::Register<
    0x40808018u,
    std::uint32_t,
    0x00C01803u,
    ftl::mmio::RW,
    HSYN_PARA_fields_::FP_H,
    ftl::mmio::Reserved<2, 9>,
    HSYN_PARA_fields_::PW_H,
    ftl::mmio::Reserved<2, 20>,
    HSYN_PARA_fields_::BP_H,
    ftl::mmio::Reserved<1, 31>> {
  using FP_H = HSYN_PARA_fields_::FP_H;
  using PW_H = HSYN_PARA_fields_::PW_H;
  using BP_H = HSYN_PARA_fields_::BP_H;
};


// Vertical Sync Parameter Register
struct VSYN_PARA_fields_ {
  // VSYNC front-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
  using FP_V = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VSYNC active pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
  using PW_V = ftl::mmio::Field<9, 11, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VSYNC back-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
  using BP_V = ftl::mmio::Field<9, 22, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct VSYN_PARA_fields_

struct VSYN_PARA : ftl::mmio::Register<
    0x4080801Cu,
    std::uint32_t,
    0x00C01803u,
    ftl::mmio::RW,
    VSYN_PARA_fields_::FP_V,
    ftl::mmio::Reserved<2, 9>,
    VSYN_PARA_fields_::PW_V,
    ftl::mmio::Reserved<2, 20>,
    VSYN_PARA_fields_::BP_V,
    ftl::mmio::Reserved<1, 31>> {
  using FP_V = VSYN_PARA_fields_::FP_V;
  using PW_V = VSYN_PARA_fields_::PW_V;
  using BP_V = VSYN_PARA_fields_::BP_V;
};


// Interrupt Status Register for domain 0
struct INT_STATUS_D0_fields_ {

  enum class eVSYNC : std::uint32_t {
    // VSYNC has not started
    ebf_val0 = 0,
    // VSYNC has started
    ebf_val1 = 1,
  };

  enum class eUNDERRUN : std::uint32_t {
    // Output buffer not underrun
    ebf_val0 = 0,
    // Output buffer underrun
    ebf_val1 = 1,
  };

  enum class eVS_BLANK : std::uint32_t {
    // Vertical blanking period has not started
    ebf_val0 = 0,
    // Vertical blanking period has started
    ebf_val1 = 1,
  };
  // Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  using VSYNC = ftl::mmio::Field<1, 0, eVSYNC, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate the output buffer underrun condition
  using UNDERRUN = ftl::mmio::Field<1, 1, eUNDERRUN, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate vertical blanking period
  using VS_BLANK = ftl::mmio::Field<1, 2, eVS_BLANK, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
  using DMA_ERR = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
  using DMA_DONE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which FIFO in the pixel blending underflowed
  using FIFO_EMPTY = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct INT_STATUS_D0_fields_

struct INT_STATUS_D0 : ftl::mmio::Register<
    0x40808020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_STATUS_D0_fields_::VSYNC,
    INT_STATUS_D0_fields_::UNDERRUN,
    INT_STATUS_D0_fields_::VS_BLANK,
    ftl::mmio::Reserved<5, 3>,
    INT_STATUS_D0_fields_::DMA_ERR,
    INT_STATUS_D0_fields_::DMA_DONE,
    INT_STATUS_D0_fields_::FIFO_EMPTY> {
  using eVSYNC = INT_STATUS_D0_fields_::eVSYNC;
  using eUNDERRUN = INT_STATUS_D0_fields_::eUNDERRUN;
  using eVS_BLANK = INT_STATUS_D0_fields_::eVS_BLANK;
  using VSYNC = INT_STATUS_D0_fields_::VSYNC;
  using UNDERRUN = INT_STATUS_D0_fields_::UNDERRUN;
  using VS_BLANK = INT_STATUS_D0_fields_::VS_BLANK;
  using DMA_ERR = INT_STATUS_D0_fields_::DMA_ERR;
  using DMA_DONE = INT_STATUS_D0_fields_::DMA_DONE;
  using FIFO_EMPTY = INT_STATUS_D0_fields_::FIFO_EMPTY;
};


// Interrupt Enable Register for domain 0
struct INT_ENABLE_D0_fields_ {

  enum class eVSYNC_EN : std::uint32_t {
    // VSYNC interrupt disable
    ebf_val0 = 0,
    // VSYNC interrupt enable
    ebf_val1 = 1,
  };

  enum class eUNDERRUN_EN : std::uint32_t {
    // Output buffer underrun disable
    ebf_val0 = 0,
    // Output buffer underrun enable
    ebf_val1 = 1,
  };

  enum class eVS_BLANK_EN : std::uint32_t {
    // Vertical blanking start interrupt disable
    ebf_val0 = 0,
    // Vertical blanking start interrupt enable
    ebf_val1 = 1,
  };
  // Enable Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  using VSYNC_EN = ftl::mmio::Field<1, 0, eVSYNC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate the output buffer underrun condition
  using UNDERRUN_EN = ftl::mmio::Field<1, 1, eUNDERRUN_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate vertical blanking period
  using VS_BLANK_EN = ftl::mmio::Field<1, 2, eVS_BLANK_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
  using DMA_ERR_EN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
  using DMA_DONE_EN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which FIFO in the pixel blending underflowed
  using FIFO_EMPTY_EN = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct INT_ENABLE_D0_fields_

struct INT_ENABLE_D0 : ftl::mmio::Register<
    0x40808024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_ENABLE_D0_fields_::VSYNC_EN,
    INT_ENABLE_D0_fields_::UNDERRUN_EN,
    INT_ENABLE_D0_fields_::VS_BLANK_EN,
    ftl::mmio::Reserved<5, 3>,
    INT_ENABLE_D0_fields_::DMA_ERR_EN,
    INT_ENABLE_D0_fields_::DMA_DONE_EN,
    INT_ENABLE_D0_fields_::FIFO_EMPTY_EN> {
  using eVSYNC_EN = INT_ENABLE_D0_fields_::eVSYNC_EN;
  using eUNDERRUN_EN = INT_ENABLE_D0_fields_::eUNDERRUN_EN;
  using eVS_BLANK_EN = INT_ENABLE_D0_fields_::eVS_BLANK_EN;
  using VSYNC_EN = INT_ENABLE_D0_fields_::VSYNC_EN;
  using UNDERRUN_EN = INT_ENABLE_D0_fields_::UNDERRUN_EN;
  using VS_BLANK_EN = INT_ENABLE_D0_fields_::VS_BLANK_EN;
  using DMA_ERR_EN = INT_ENABLE_D0_fields_::DMA_ERR_EN;
  using DMA_DONE_EN = INT_ENABLE_D0_fields_::DMA_DONE_EN;
  using FIFO_EMPTY_EN = INT_ENABLE_D0_fields_::FIFO_EMPTY_EN;
};


// Interrupt Status Register for domain 1
struct INT_STATUS_D1_fields_ {
  // Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  using VSYNC = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate the output buffer underrun condition
  using UNDERRUN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate vertical blanking period
  using VS_BLANK = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
  using DMA_ERR = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
  using DMA_DONE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Interrupt flag to indicate that which FIFO in the pixel blending underflowed
  using FIFO_EMPTY = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct INT_STATUS_D1_fields_

struct INT_STATUS_D1 : ftl::mmio::Register<
    0x40808030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_STATUS_D1_fields_::VSYNC,
    INT_STATUS_D1_fields_::UNDERRUN,
    INT_STATUS_D1_fields_::VS_BLANK,
    ftl::mmio::Reserved<5, 3>,
    INT_STATUS_D1_fields_::DMA_ERR,
    INT_STATUS_D1_fields_::DMA_DONE,
    INT_STATUS_D1_fields_::FIFO_EMPTY> {
  using VSYNC = INT_STATUS_D1_fields_::VSYNC;
  using UNDERRUN = INT_STATUS_D1_fields_::UNDERRUN;
  using VS_BLANK = INT_STATUS_D1_fields_::VS_BLANK;
  using DMA_ERR = INT_STATUS_D1_fields_::DMA_ERR;
  using DMA_DONE = INT_STATUS_D1_fields_::DMA_DONE;
  using FIFO_EMPTY = INT_STATUS_D1_fields_::FIFO_EMPTY;
};


// Interrupt Enable Register for domain 1
struct INT_ENABLE_D1_fields_ {
  // Enable Interrupt flag to indicate that the vertical synchronization phase(The beginning of a frame)
  using VSYNC_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate the output buffer underrun condition
  using UNDERRUN_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate vertical blanking period
  using VS_BLANK_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which PLANE has Read Error on the AXI interface
  using DMA_ERR_EN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which PLANE has fetched the last pixel from memory
  using DMA_DONE_EN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Interrupt flag to indicate that which FIFO in the pixel blending underflowed
  using FIFO_EMPTY_EN = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct INT_ENABLE_D1_fields_

struct INT_ENABLE_D1 : ftl::mmio::Register<
    0x40808034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_ENABLE_D1_fields_::VSYNC_EN,
    INT_ENABLE_D1_fields_::UNDERRUN_EN,
    INT_ENABLE_D1_fields_::VS_BLANK_EN,
    ftl::mmio::Reserved<5, 3>,
    INT_ENABLE_D1_fields_::DMA_ERR_EN,
    INT_ENABLE_D1_fields_::DMA_DONE_EN,
    INT_ENABLE_D1_fields_::FIFO_EMPTY_EN> {
  using VSYNC_EN = INT_ENABLE_D1_fields_::VSYNC_EN;
  using UNDERRUN_EN = INT_ENABLE_D1_fields_::UNDERRUN_EN;
  using VS_BLANK_EN = INT_ENABLE_D1_fields_::VS_BLANK_EN;
  using DMA_ERR_EN = INT_ENABLE_D1_fields_::DMA_ERR_EN;
  using DMA_DONE_EN = INT_ENABLE_D1_fields_::DMA_DONE_EN;
  using FIFO_EMPTY_EN = INT_ENABLE_D1_fields_::FIFO_EMPTY_EN;
};


// Reserved
struct PDI_PARA_fields_ {
};  // struct PDI_PARA_fields_

struct PDI_PARA : ftl::mmio::Register<
    0x40808040u,
    std::uint32_t,
    0x00001000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<32, 0>> {
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL0_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_1_fields_

struct CTRLDESCL0_1 : ftl::mmio::Register<
    0x40808200u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL0_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL0_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL0_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL0_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_2_fields_

struct CTRLDESCL0_2 : ftl::mmio::Register<
    0x40808204u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL0_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL0_2_fields_::POSX;
  using POSY = CTRLDESCL0_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL0_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_3_fields_

struct CTRLDESCL0_3 : ftl::mmio::Register<
    0x40808208u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL0_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL0_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_4_fields_

struct CTRLDESCL0_4 : ftl::mmio::Register<
    0x4080820Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_4_fields_::ADDR> {
  using ADDR = CTRLDESCL0_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL0_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_5_fields_

struct CTRLDESCL0_5 : ftl::mmio::Register<
    0x40808210u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL0_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL0_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL0_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL0_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL0_5_fields_::YUV_FORMAT,
    CTRLDESCL0_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL0_5_fields_::BPP,
    CTRLDESCL0_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL0_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL0_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL0_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL0_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL0_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL0_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL0_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL0_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL0_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL0_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL0_5_fields_::eEN;
  using AB_MODE = CTRLDESCL0_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL0_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL0_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL0_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL0_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL0_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL0_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL0_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL0_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL0_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL0_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL0_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL0_6_fields_

struct CTRLDESCL0_6 : ftl::mmio::Register<
    0x40808214u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL0_6_fields_::BCLR_B,
    CTRLDESCL0_6_fields_::BCLR_G,
    CTRLDESCL0_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL0_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL0_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL0_6_fields_::BCLR_R;
};


// Color Space Conversion Coefficient Register 0
struct CSC0_COEF0_fields_ {

  enum class eENABLE : std::uint32_t {
    // The CSC is bypassed and the input pixels are RGB data already
    ebf_val0 = 0,
    // The CSC is enabled and the pixels will be converted to RGB data
    ebf_val1 = 1,
  };

  enum class eYCBCR_MODE : std::uint32_t {
    // Converting YUV to RGB data
    ebf_val0 = 0,
    // Converting YCbCr to RGB data
    ebf_val1 = 1,
  };
  // Y OFFSET
  using Y_OFFSET = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // UV OFFSET
  using UV_OFFSET = ftl::mmio::Field<9, 9, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
  using C0 = ftl::mmio::Field<11, 18, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the CSC unit in the LCDIFv2 plane data path
  using ENABLE = ftl::mmio::Field<1, 30, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit changes the behavior when performing U/V converting
  using YCBCR_MODE = ftl::mmio::Field<1, 31, eYCBCR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC0_COEF0_fields_

struct CSC0_COEF0 : ftl::mmio::Register<
    0x40808218u,
    std::uint32_t,
    0x04000000u,
    ftl::mmio::RW,
    CSC0_COEF0_fields_::Y_OFFSET,
    CSC0_COEF0_fields_::UV_OFFSET,
    CSC0_COEF0_fields_::C0,
    ftl::mmio::Reserved<1, 29>,
    CSC0_COEF0_fields_::ENABLE,
    CSC0_COEF0_fields_::YCBCR_MODE> {
  using eENABLE = CSC0_COEF0_fields_::eENABLE;
  using eYCBCR_MODE = CSC0_COEF0_fields_::eYCBCR_MODE;
  using Y_OFFSET = CSC0_COEF0_fields_::Y_OFFSET;
  using UV_OFFSET = CSC0_COEF0_fields_::UV_OFFSET;
  using C0 = CSC0_COEF0_fields_::C0;
  using ENABLE = CSC0_COEF0_fields_::ENABLE;
  using YCBCR_MODE = CSC0_COEF0_fields_::YCBCR_MODE;
};


// Color Space Conversion Coefficient Register 1
struct CSC0_COEF1_fields_ {
  // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
  using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
  using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC0_COEF1_fields_

struct CSC0_COEF1 : ftl::mmio::Register<
    0x4080821Cu,
    std::uint32_t,
    0x01230208u,
    ftl::mmio::RW,
    CSC0_COEF1_fields_::C4,
    ftl::mmio::Reserved<5, 11>,
    CSC0_COEF1_fields_::C1,
    ftl::mmio::Reserved<5, 27>> {
  using C4 = CSC0_COEF1_fields_::C4;
  using C1 = CSC0_COEF1_fields_::C1;
};


// Color Space Conversion Coefficient Register 2
struct CSC0_COEF2_fields_ {
  // Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
  using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
  using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC0_COEF2_fields_

struct CSC0_COEF2 : ftl::mmio::Register<
    0x40808220u,
    std::uint32_t,
    0x076B079Cu,
    ftl::mmio::RW,
    CSC0_COEF2_fields_::C3,
    ftl::mmio::Reserved<5, 11>,
    CSC0_COEF2_fields_::C2,
    ftl::mmio::Reserved<5, 27>> {
  using C3 = CSC0_COEF2_fields_::C3;
  using C2 = CSC0_COEF2_fields_::C2;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL1_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_1_fields_

struct CTRLDESCL1_1 : ftl::mmio::Register<
    0x40808240u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL1_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL1_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL1_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL1_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_2_fields_

struct CTRLDESCL1_2 : ftl::mmio::Register<
    0x40808244u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL1_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL1_2_fields_::POSX;
  using POSY = CTRLDESCL1_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL1_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_3_fields_

struct CTRLDESCL1_3 : ftl::mmio::Register<
    0x40808248u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL1_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL1_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_4_fields_

struct CTRLDESCL1_4 : ftl::mmio::Register<
    0x4080824Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_4_fields_::ADDR> {
  using ADDR = CTRLDESCL1_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL1_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_5_fields_

struct CTRLDESCL1_5 : ftl::mmio::Register<
    0x40808250u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL1_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL1_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL1_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL1_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL1_5_fields_::YUV_FORMAT,
    CTRLDESCL1_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL1_5_fields_::BPP,
    CTRLDESCL1_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL1_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL1_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL1_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL1_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL1_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL1_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL1_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL1_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL1_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL1_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL1_5_fields_::eEN;
  using AB_MODE = CTRLDESCL1_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL1_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL1_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL1_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL1_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL1_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL1_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL1_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL1_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL1_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL1_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL1_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL1_6_fields_

struct CTRLDESCL1_6 : ftl::mmio::Register<
    0x40808254u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL1_6_fields_::BCLR_B,
    CTRLDESCL1_6_fields_::BCLR_G,
    CTRLDESCL1_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL1_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL1_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL1_6_fields_::BCLR_R;
};


// Color Space Conversion Coefficient Register 0
struct CSC1_COEF0_fields_ {

  enum class eENABLE : std::uint32_t {
    // The CSC is bypassed and the input pixels are RGB data already
    ebf_val0 = 0,
    // The CSC is enabled and the pixels will be converted to RGB data
    ebf_val1 = 1,
  };

  enum class eYCBCR_MODE : std::uint32_t {
    // Converting YUV to RGB data
    ebf_val0 = 0,
    // Converting YCbCr to RGB data
    ebf_val1 = 1,
  };
  // Y OFFSET
  using Y_OFFSET = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // UV OFFSET
  using UV_OFFSET = ftl::mmio::Field<9, 9, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Y multiplier coefficient. YUV=0x100 (1.000) YCbCr=0x12A (1.164)
  using C0 = ftl::mmio::Field<11, 18, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the CSC unit in the LCDIFv2 plane data path
  using ENABLE = ftl::mmio::Field<1, 30, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // This bit changes the behavior when performing U/V converting
  using YCBCR_MODE = ftl::mmio::Field<1, 31, eYCBCR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC1_COEF0_fields_

struct CSC1_COEF0 : ftl::mmio::Register<
    0x40808258u,
    std::uint32_t,
    0x04000000u,
    ftl::mmio::RW,
    CSC1_COEF0_fields_::Y_OFFSET,
    CSC1_COEF0_fields_::UV_OFFSET,
    CSC1_COEF0_fields_::C0,
    ftl::mmio::Reserved<1, 29>,
    CSC1_COEF0_fields_::ENABLE,
    CSC1_COEF0_fields_::YCBCR_MODE> {
  using eENABLE = CSC1_COEF0_fields_::eENABLE;
  using eYCBCR_MODE = CSC1_COEF0_fields_::eYCBCR_MODE;
  using Y_OFFSET = CSC1_COEF0_fields_::Y_OFFSET;
  using UV_OFFSET = CSC1_COEF0_fields_::UV_OFFSET;
  using C0 = CSC1_COEF0_fields_::C0;
  using ENABLE = CSC1_COEF0_fields_::ENABLE;
  using YCBCR_MODE = CSC1_COEF0_fields_::YCBCR_MODE;
};


// Color Space Conversion Coefficient Register 1
struct CSC1_COEF1_fields_ {
  // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
  using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
  using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC1_COEF1_fields_

struct CSC1_COEF1 : ftl::mmio::Register<
    0x4080825Cu,
    std::uint32_t,
    0x01230208u,
    ftl::mmio::RW,
    CSC1_COEF1_fields_::C4,
    ftl::mmio::Reserved<5, 11>,
    CSC1_COEF1_fields_::C1,
    ftl::mmio::Reserved<5, 27>> {
  using C4 = CSC1_COEF1_fields_::C4;
  using C1 = CSC1_COEF1_fields_::C1;
};


// Color Space Conversion Coefficient Register 2
struct CSC1_COEF2_fields_ {
  // Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
  using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
  using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CSC1_COEF2_fields_

struct CSC1_COEF2 : ftl::mmio::Register<
    0x40808260u,
    std::uint32_t,
    0x076B079Cu,
    ftl::mmio::RW,
    CSC1_COEF2_fields_::C3,
    ftl::mmio::Reserved<5, 11>,
    CSC1_COEF2_fields_::C2,
    ftl::mmio::Reserved<5, 27>> {
  using C3 = CSC1_COEF2_fields_::C3;
  using C2 = CSC1_COEF2_fields_::C2;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL2_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_1_fields_

struct CTRLDESCL2_1 : ftl::mmio::Register<
    0x40808280u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL2_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL2_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL2_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL2_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_2_fields_

struct CTRLDESCL2_2 : ftl::mmio::Register<
    0x40808284u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL2_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL2_2_fields_::POSX;
  using POSY = CTRLDESCL2_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL2_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_3_fields_

struct CTRLDESCL2_3 : ftl::mmio::Register<
    0x40808288u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL2_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL2_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_4_fields_

struct CTRLDESCL2_4 : ftl::mmio::Register<
    0x4080828Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_4_fields_::ADDR> {
  using ADDR = CTRLDESCL2_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL2_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_5_fields_

struct CTRLDESCL2_5 : ftl::mmio::Register<
    0x40808290u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL2_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL2_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL2_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL2_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL2_5_fields_::YUV_FORMAT,
    CTRLDESCL2_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL2_5_fields_::BPP,
    CTRLDESCL2_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL2_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL2_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL2_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL2_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL2_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL2_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL2_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL2_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL2_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL2_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL2_5_fields_::eEN;
  using AB_MODE = CTRLDESCL2_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL2_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL2_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL2_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL2_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL2_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL2_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL2_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL2_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL2_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL2_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL2_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL2_6_fields_

struct CTRLDESCL2_6 : ftl::mmio::Register<
    0x40808294u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL2_6_fields_::BCLR_B,
    CTRLDESCL2_6_fields_::BCLR_G,
    CTRLDESCL2_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL2_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL2_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL2_6_fields_::BCLR_R;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL3_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_1_fields_

struct CTRLDESCL3_1 : ftl::mmio::Register<
    0x408082C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL3_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL3_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL3_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL3_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_2_fields_

struct CTRLDESCL3_2 : ftl::mmio::Register<
    0x408082C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL3_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL3_2_fields_::POSX;
  using POSY = CTRLDESCL3_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL3_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_3_fields_

struct CTRLDESCL3_3 : ftl::mmio::Register<
    0x408082C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL3_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL3_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_4_fields_

struct CTRLDESCL3_4 : ftl::mmio::Register<
    0x408082CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_4_fields_::ADDR> {
  using ADDR = CTRLDESCL3_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL3_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_5_fields_

struct CTRLDESCL3_5 : ftl::mmio::Register<
    0x408082D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL3_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL3_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL3_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL3_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL3_5_fields_::YUV_FORMAT,
    CTRLDESCL3_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL3_5_fields_::BPP,
    CTRLDESCL3_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL3_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL3_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL3_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL3_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL3_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL3_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL3_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL3_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL3_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL3_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL3_5_fields_::eEN;
  using AB_MODE = CTRLDESCL3_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL3_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL3_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL3_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL3_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL3_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL3_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL3_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL3_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL3_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL3_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL3_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL3_6_fields_

struct CTRLDESCL3_6 : ftl::mmio::Register<
    0x408082D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL3_6_fields_::BCLR_B,
    CTRLDESCL3_6_fields_::BCLR_G,
    CTRLDESCL3_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL3_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL3_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL3_6_fields_::BCLR_R;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL4_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_1_fields_

struct CTRLDESCL4_1 : ftl::mmio::Register<
    0x40808300u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL4_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL4_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL4_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL4_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_2_fields_

struct CTRLDESCL4_2 : ftl::mmio::Register<
    0x40808304u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL4_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL4_2_fields_::POSX;
  using POSY = CTRLDESCL4_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL4_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_3_fields_

struct CTRLDESCL4_3 : ftl::mmio::Register<
    0x40808308u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL4_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL4_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_4_fields_

struct CTRLDESCL4_4 : ftl::mmio::Register<
    0x4080830Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_4_fields_::ADDR> {
  using ADDR = CTRLDESCL4_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL4_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_5_fields_

struct CTRLDESCL4_5 : ftl::mmio::Register<
    0x40808310u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL4_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL4_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL4_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL4_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL4_5_fields_::YUV_FORMAT,
    CTRLDESCL4_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL4_5_fields_::BPP,
    CTRLDESCL4_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL4_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL4_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL4_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL4_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL4_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL4_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL4_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL4_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL4_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL4_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL4_5_fields_::eEN;
  using AB_MODE = CTRLDESCL4_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL4_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL4_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL4_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL4_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL4_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL4_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL4_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL4_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL4_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL4_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL4_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL4_6_fields_

struct CTRLDESCL4_6 : ftl::mmio::Register<
    0x40808314u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL4_6_fields_::BCLR_B,
    CTRLDESCL4_6_fields_::BCLR_G,
    CTRLDESCL4_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL4_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL4_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL4_6_fields_::BCLR_R;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL5_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_1_fields_

struct CTRLDESCL5_1 : ftl::mmio::Register<
    0x40808340u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL5_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL5_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL5_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL5_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_2_fields_

struct CTRLDESCL5_2 : ftl::mmio::Register<
    0x40808344u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL5_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL5_2_fields_::POSX;
  using POSY = CTRLDESCL5_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL5_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_3_fields_

struct CTRLDESCL5_3 : ftl::mmio::Register<
    0x40808348u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL5_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL5_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_4_fields_

struct CTRLDESCL5_4 : ftl::mmio::Register<
    0x4080834Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_4_fields_::ADDR> {
  using ADDR = CTRLDESCL5_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL5_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_5_fields_

struct CTRLDESCL5_5 : ftl::mmio::Register<
    0x40808350u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL5_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL5_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL5_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL5_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL5_5_fields_::YUV_FORMAT,
    CTRLDESCL5_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL5_5_fields_::BPP,
    CTRLDESCL5_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL5_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL5_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL5_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL5_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL5_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL5_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL5_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL5_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL5_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL5_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL5_5_fields_::eEN;
  using AB_MODE = CTRLDESCL5_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL5_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL5_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL5_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL5_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL5_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL5_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL5_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL5_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL5_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL5_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL5_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL5_6_fields_

struct CTRLDESCL5_6 : ftl::mmio::Register<
    0x40808354u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL5_6_fields_::BCLR_B,
    CTRLDESCL5_6_fields_::BCLR_G,
    CTRLDESCL5_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL5_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL5_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL5_6_fields_::BCLR_R;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL6_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_1_fields_

struct CTRLDESCL6_1 : ftl::mmio::Register<
    0x40808380u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL6_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL6_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL6_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL6_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_2_fields_

struct CTRLDESCL6_2 : ftl::mmio::Register<
    0x40808384u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL6_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL6_2_fields_::POSX;
  using POSY = CTRLDESCL6_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL6_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_3_fields_

struct CTRLDESCL6_3 : ftl::mmio::Register<
    0x40808388u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL6_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL6_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_4_fields_

struct CTRLDESCL6_4 : ftl::mmio::Register<
    0x4080838Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_4_fields_::ADDR> {
  using ADDR = CTRLDESCL6_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL6_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_5_fields_

struct CTRLDESCL6_5 : ftl::mmio::Register<
    0x40808390u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL6_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL6_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL6_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL6_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL6_5_fields_::YUV_FORMAT,
    CTRLDESCL6_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL6_5_fields_::BPP,
    CTRLDESCL6_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL6_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL6_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL6_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL6_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL6_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL6_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL6_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL6_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL6_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL6_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL6_5_fields_::eEN;
  using AB_MODE = CTRLDESCL6_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL6_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL6_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL6_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL6_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL6_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL6_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL6_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL6_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL6_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL6_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL6_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL6_6_fields_

struct CTRLDESCL6_6 : ftl::mmio::Register<
    0x40808394u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL6_6_fields_::BCLR_B,
    CTRLDESCL6_6_fields_::BCLR_G,
    CTRLDESCL6_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL6_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL6_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL6_6_fields_::BCLR_R;
};


// Control Descriptor Layer 1 Register
struct CTRLDESCL7_1_fields_ {
  // Width of the layer in pixels
  using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Height of the layer in pixels
  using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_1_fields_

struct CTRLDESCL7_1 : ftl::mmio::Register<
    0x408083C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_1_fields_::WIDTH,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL7_1_fields_::HEIGHT,
    ftl::mmio::Reserved<4, 28>> {
  using WIDTH = CTRLDESCL7_1_fields_::WIDTH;
  using HEIGHT = CTRLDESCL7_1_fields_::HEIGHT;
};


// Control Descriptor Layer 2 Register
struct CTRLDESCL7_2_fields_ {
  // POS X
  using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
  using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_2_fields_

struct CTRLDESCL7_2 : ftl::mmio::Register<
    0x408083C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_2_fields_::POSX,
    ftl::mmio::Reserved<4, 12>,
    CTRLDESCL7_2_fields_::POSY,
    ftl::mmio::Reserved<4, 28>> {
  using POSX = CTRLDESCL7_2_fields_::POSX;
  using POSY = CTRLDESCL7_2_fields_::POSY;
};


// Control Descriptor Layer 3 Register
struct CTRLDESCL7_3_fields_ {
  // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
  using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_3_fields_

struct CTRLDESCL7_3 : ftl::mmio::Register<
    0x408083C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_3_fields_::PITCH,
    ftl::mmio::Reserved<16, 16>> {
  using PITCH = CTRLDESCL7_3_fields_::PITCH;
};


// Control Descriptor Layer 4 Register
struct CTRLDESCL7_4_fields_ {
  // Address of layer data in the memory. The address programmed should be 64-bit aligned
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_4_fields_

struct CTRLDESCL7_4 : ftl::mmio::Register<
    0x408083CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_4_fields_::ADDR> {
  using ADDR = CTRLDESCL7_4_fields_::ADDR;
};


// Control Descriptor Layer 5 Register
struct CTRLDESCL7_5_fields_ {

  enum class eAB_MODE : std::uint32_t {
    // No alpha Blending (The SAFETY_EN bit need set to 1)
    ebf_val0 = 0,
    // Blend with global ALPHA
    ebf_val1 = 1,
    // Blend with embedded ALPHA
    ebf_val2 = 2,
    // Blend with Porter Duff enable
    ebf_val3 = 3,
  };

  enum class ePD_FACTOR_MODE : std::uint32_t {
    // Using 1
    ebf_val0 = 0,
    // Using 0
    ebf_val1 = 1,
    // Using straight alpha
    ebf_val2 = 2,
    // Using inverse alpha
    ebf_val3 = 3,
  };

  enum class ePD_GLOBAL_ALPHA_MODE : std::uint32_t {
    // Using global alpha
    ebf_val0 = 0,
    // Using local alpha
    ebf_val1 = 1,
    // Using scaled alpha
    ebf_val2 = 2,
    // Using scaled alpha
    ebf_val3 = 3,
  };

  enum class ePD_ALPHA_MODE : std::uint32_t {
    // Straight mode for Porter Duff alpha
    ebf_val0 = 0,
    // Inversed mode for Porter Duff alpha
    ebf_val1 = 1,
  };

  enum class ePD_COLOR_MODE : std::uint32_t {
    // Straight mode for Porter Duff color
    ebf_val0 = 0,
    // Inversed mode for Porter Duff color
    ebf_val1 = 1,
  };

  enum class eYUV_FORMAT : std::uint32_t {
    // The YVYU422 8bit sequence is U1,Y1,V1,Y2
    ebf_val0 = 0,
    // The YVYU422 8bit sequence is V1,Y1,U1,Y2
    ebf_val1 = 1,
    // The YVYU422 8bit sequence is Y1,U1,Y2,V1
    ebf_val2 = 2,
    // The YVYU422 8bit sequence is Y1,V1,Y2,U1
    ebf_val3 = 3,
  };

  enum class eBPP : std::uint32_t {
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

  enum class eSAFETY_EN : std::uint32_t {
    // Safety Mode is disabled
    ebf_val0 = 0,
    // Safety Mode is enabled for this layer
    ebf_val1 = 1,
  };

  enum class eEN : std::uint32_t {
    // OFF
    ebf_val0 = 0,
    // ON
    ebf_val1 = 1,
  };
  // Alpha Blending Mode
  using AB_MODE = ftl::mmio::Field<2, 0, eAB_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff factor mode
  using PD_FACTOR_MODE = ftl::mmio::Field<2, 4, ePD_FACTOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff global alpha mode
  using PD_GLOBAL_ALPHA_MODE = ftl::mmio::Field<2, 6, ePD_GLOBAL_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_ALPHA_MODE = ftl::mmio::Field<1, 8, ePD_ALPHA_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Porter Duff alpha mode
  using PD_COLOR_MODE = ftl::mmio::Field<1, 9, ePD_COLOR_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // The YUV422 input format selection
  using YUV_FORMAT = ftl::mmio::Field<2, 14, eYUV_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  // Global Alpha
  using GLOBAL_ALPHA = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Layer encoding format (bit per pixel)
  using BPP = ftl::mmio::Field<4, 24, eBPP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Safety Mode Enable Bit
  using SAFETY_EN = ftl::mmio::Field<1, 28, eSAFETY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Shadow Load Enable
  using SHADOW_LOAD_EN = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable the layer for DMA
  using EN = ftl::mmio::Field<1, 31, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_5_fields_

struct CTRLDESCL7_5 : ftl::mmio::Register<
    0x408083D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_5_fields_::AB_MODE,
    ftl::mmio::Reserved<2, 2>,
    CTRLDESCL7_5_fields_::PD_FACTOR_MODE,
    CTRLDESCL7_5_fields_::PD_GLOBAL_ALPHA_MODE,
    CTRLDESCL7_5_fields_::PD_ALPHA_MODE,
    CTRLDESCL7_5_fields_::PD_COLOR_MODE,
    ftl::mmio::Reserved<4, 10>,
    CTRLDESCL7_5_fields_::YUV_FORMAT,
    CTRLDESCL7_5_fields_::GLOBAL_ALPHA,
    CTRLDESCL7_5_fields_::BPP,
    CTRLDESCL7_5_fields_::SAFETY_EN,
    ftl::mmio::Reserved<1, 29>,
    CTRLDESCL7_5_fields_::SHADOW_LOAD_EN,
    CTRLDESCL7_5_fields_::EN> {
  using eAB_MODE = CTRLDESCL7_5_fields_::eAB_MODE;
  using ePD_FACTOR_MODE = CTRLDESCL7_5_fields_::ePD_FACTOR_MODE;
  using ePD_GLOBAL_ALPHA_MODE = CTRLDESCL7_5_fields_::ePD_GLOBAL_ALPHA_MODE;
  using ePD_ALPHA_MODE = CTRLDESCL7_5_fields_::ePD_ALPHA_MODE;
  using ePD_COLOR_MODE = CTRLDESCL7_5_fields_::ePD_COLOR_MODE;
  using eYUV_FORMAT = CTRLDESCL7_5_fields_::eYUV_FORMAT;
  using eBPP = CTRLDESCL7_5_fields_::eBPP;
  using eSAFETY_EN = CTRLDESCL7_5_fields_::eSAFETY_EN;
  using eEN = CTRLDESCL7_5_fields_::eEN;
  using AB_MODE = CTRLDESCL7_5_fields_::AB_MODE;
  using PD_FACTOR_MODE = CTRLDESCL7_5_fields_::PD_FACTOR_MODE;
  using PD_GLOBAL_ALPHA_MODE = CTRLDESCL7_5_fields_::PD_GLOBAL_ALPHA_MODE;
  using PD_ALPHA_MODE = CTRLDESCL7_5_fields_::PD_ALPHA_MODE;
  using PD_COLOR_MODE = CTRLDESCL7_5_fields_::PD_COLOR_MODE;
  using YUV_FORMAT = CTRLDESCL7_5_fields_::YUV_FORMAT;
  using GLOBAL_ALPHA = CTRLDESCL7_5_fields_::GLOBAL_ALPHA;
  using BPP = CTRLDESCL7_5_fields_::BPP;
  using SAFETY_EN = CTRLDESCL7_5_fields_::SAFETY_EN;
  using SHADOW_LOAD_EN = CTRLDESCL7_5_fields_::SHADOW_LOAD_EN;
  using EN = CTRLDESCL7_5_fields_::EN;
};


// Control Descriptor Layer 6 Register
struct CTRLDESCL7_6_fields_ {
  // Background B component value
  using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background G component value
  using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Background R component value
  using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRLDESCL7_6_fields_

struct CTRLDESCL7_6 : ftl::mmio::Register<
    0x408083D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRLDESCL7_6_fields_::BCLR_B,
    CTRLDESCL7_6_fields_::BCLR_G,
    CTRLDESCL7_6_fields_::BCLR_R,
    ftl::mmio::Reserved<8, 24>> {
  using BCLR_B = CTRLDESCL7_6_fields_::BCLR_B;
  using BCLR_G = CTRLDESCL7_6_fields_::BCLR_G;
  using BCLR_R = CTRLDESCL7_6_fields_::BCLR_R;
};


// LCDIFv2 CLUT load Register
struct CLUT_LOAD_fields_ {
  // CLUT Update Enable
  using CLUT_UPDATE_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Selected CLUT Number
  using SEL_CLUT_NUM = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CLUT_LOAD_fields_

struct CLUT_LOAD : ftl::mmio::Register<
    0x40808400u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CLUT_LOAD_fields_::CLUT_UPDATE_EN,
    ftl::mmio::Reserved<3, 1>,
    CLUT_LOAD_fields_::SEL_CLUT_NUM,
    ftl::mmio::Reserved<25, 7>> {
  using CLUT_UPDATE_EN = CLUT_LOAD_fields_::CLUT_UPDATE_EN;
  using SEL_CLUT_NUM = CLUT_LOAD_fields_::SEL_CLUT_NUM;
};

}  // namespace regs::lcdifv2