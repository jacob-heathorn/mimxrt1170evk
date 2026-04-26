#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// LCDIF_V2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Lcdifv2 {
  // LCDIFv2 display control Register
  struct CtrlFields {
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
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x40808000u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      CtrlFields::INV_HS,
      CtrlFields::INV_VS,
      CtrlFields::INV_DE,
      CtrlFields::INV_PXCK,
      CtrlFields::NEG,
      ftl::mmio::Reserved<26, 5>,
      CtrlFields::SW_RESET> {
    using eINV_HS = CtrlFields::eINV_HS;
    using eINV_VS = CtrlFields::eINV_VS;
    using eINV_DE = CtrlFields::eINV_DE;
    using eINV_PXCK = CtrlFields::eINV_PXCK;
    using eNEG = CtrlFields::eNEG;
    using eSW_RESET = CtrlFields::eSW_RESET;
    using INV_HS = CtrlFields::INV_HS;
    using INV_VS = CtrlFields::INV_VS;
    using INV_DE = CtrlFields::INV_DE;
    using INV_PXCK = CtrlFields::INV_PXCK;
    using NEG = CtrlFields::NEG;
    using SW_RESET = CtrlFields::SW_RESET;
  };

  // LCDIFv2 display control Register
  struct CtrlSetFields {
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
  };  // struct CtrlSetFields

  struct CTRL_SET : ftl::mmio::Register<
      0x40808004u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      CtrlSetFields::INV_HS,
      CtrlSetFields::INV_VS,
      CtrlSetFields::INV_DE,
      CtrlSetFields::INV_PXCK,
      CtrlSetFields::NEG,
      ftl::mmio::Reserved<26, 5>,
      CtrlSetFields::SW_RESET> {
    using INV_HS = CtrlSetFields::INV_HS;
    using INV_VS = CtrlSetFields::INV_VS;
    using INV_DE = CtrlSetFields::INV_DE;
    using INV_PXCK = CtrlSetFields::INV_PXCK;
    using NEG = CtrlSetFields::NEG;
    using SW_RESET = CtrlSetFields::SW_RESET;
  };

  // LCDIFv2 display control Register
  struct CtrlClrFields {
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
  };  // struct CtrlClrFields

  struct CTRL_CLR : ftl::mmio::Register<
      0x40808008u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      CtrlClrFields::INV_HS,
      CtrlClrFields::INV_VS,
      CtrlClrFields::INV_DE,
      CtrlClrFields::INV_PXCK,
      CtrlClrFields::NEG,
      ftl::mmio::Reserved<26, 5>,
      CtrlClrFields::SW_RESET> {
    using INV_HS = CtrlClrFields::INV_HS;
    using INV_VS = CtrlClrFields::INV_VS;
    using INV_DE = CtrlClrFields::INV_DE;
    using INV_PXCK = CtrlClrFields::INV_PXCK;
    using NEG = CtrlClrFields::NEG;
    using SW_RESET = CtrlClrFields::SW_RESET;
  };

  // LCDIFv2 display control Register
  struct CtrlTogFields {
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
  };  // struct CtrlTogFields

  struct CTRL_TOG : ftl::mmio::Register<
      0x4080800Cu,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      CtrlTogFields::INV_HS,
      CtrlTogFields::INV_VS,
      CtrlTogFields::INV_DE,
      CtrlTogFields::INV_PXCK,
      CtrlTogFields::NEG,
      ftl::mmio::Reserved<26, 5>,
      CtrlTogFields::SW_RESET> {
    using INV_HS = CtrlTogFields::INV_HS;
    using INV_VS = CtrlTogFields::INV_VS;
    using INV_DE = CtrlTogFields::INV_DE;
    using INV_PXCK = CtrlTogFields::INV_PXCK;
    using NEG = CtrlTogFields::NEG;
    using SW_RESET = CtrlTogFields::SW_RESET;
  };

  // Display Parameter Register
  struct DispParaFields {
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
  };  // struct DispParaFields

  struct DISP_PARA : ftl::mmio::Register<
      0x40808010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DispParaFields::BGND_B,
      DispParaFields::BGND_G,
      DispParaFields::BGND_R,
      DispParaFields::DISP_MODE,
      DispParaFields::LINE_PATTERN,
      ftl::mmio::Reserved<2, 29>,
      DispParaFields::DISP_ON> {
    using eDISP_MODE = DispParaFields::eDISP_MODE;
    using eLINE_PATTERN = DispParaFields::eLINE_PATTERN;
    using eDISP_ON = DispParaFields::eDISP_ON;
    using BGND_B = DispParaFields::BGND_B;
    using BGND_G = DispParaFields::BGND_G;
    using BGND_R = DispParaFields::BGND_R;
    using DISP_MODE = DispParaFields::DISP_MODE;
    using LINE_PATTERN = DispParaFields::LINE_PATTERN;
    using DISP_ON = DispParaFields::DISP_ON;
  };

  // Display Size Register
  struct DispSizeFields {
    // Sets the display size horizontal resolution in pixels
    using DELTA_X = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sets the display size vertical resolution in pixels
    using DELTA_Y = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DispSizeFields

  struct DISP_SIZE : ftl::mmio::Register<
      0x40808014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DispSizeFields::DELTA_X,
      ftl::mmio::Reserved<4, 12>,
      DispSizeFields::DELTA_Y,
      ftl::mmio::Reserved<4, 28>> {
    using DELTA_X = DispSizeFields::DELTA_X;
    using DELTA_Y = DispSizeFields::DELTA_Y;
  };

  // Horizontal Sync Parameter Register
  struct HsynParaFields {
    // HSYNC front-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    using FP_H = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSYNC active pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    using PW_H = ftl::mmio::Field<9, 11, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSYNC back-porch pulse width (in pixel clock cycles). Pulse width has a minimum value of 1
    using BP_H = ftl::mmio::Field<9, 22, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HsynParaFields

  struct HSYN_PARA : ftl::mmio::Register<
      0x40808018u,
      std::uint32_t,
      0x00C01803u,
      ftl::mmio::RW,
      HsynParaFields::FP_H,
      ftl::mmio::Reserved<2, 9>,
      HsynParaFields::PW_H,
      ftl::mmio::Reserved<2, 20>,
      HsynParaFields::BP_H,
      ftl::mmio::Reserved<1, 31>> {
    using FP_H = HsynParaFields::FP_H;
    using PW_H = HsynParaFields::PW_H;
    using BP_H = HsynParaFields::BP_H;
  };

  // Vertical Sync Parameter Register
  struct VsynParaFields {
    // VSYNC front-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    using FP_V = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VSYNC active pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    using PW_V = ftl::mmio::Field<9, 11, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VSYNC back-porch pulse width (in horizontal line cycles). Pulse width has a minimum value of 1
    using BP_V = ftl::mmio::Field<9, 22, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VsynParaFields

  struct VSYN_PARA : ftl::mmio::Register<
      0x4080801Cu,
      std::uint32_t,
      0x00C01803u,
      ftl::mmio::RW,
      VsynParaFields::FP_V,
      ftl::mmio::Reserved<2, 9>,
      VsynParaFields::PW_V,
      ftl::mmio::Reserved<2, 20>,
      VsynParaFields::BP_V,
      ftl::mmio::Reserved<1, 31>> {
    using FP_V = VsynParaFields::FP_V;
    using PW_V = VsynParaFields::PW_V;
    using BP_V = VsynParaFields::BP_V;
  };

  // Interrupt Status Register for domain 0
  struct IntStatusD0Fields {
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
  };  // struct IntStatusD0Fields

  struct INT_STATUS_D0 : ftl::mmio::Register<
      0x40808020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntStatusD0Fields::VSYNC,
      IntStatusD0Fields::UNDERRUN,
      IntStatusD0Fields::VS_BLANK,
      ftl::mmio::Reserved<5, 3>,
      IntStatusD0Fields::DMA_ERR,
      IntStatusD0Fields::DMA_DONE,
      IntStatusD0Fields::FIFO_EMPTY> {
    using eVSYNC = IntStatusD0Fields::eVSYNC;
    using eUNDERRUN = IntStatusD0Fields::eUNDERRUN;
    using eVS_BLANK = IntStatusD0Fields::eVS_BLANK;
    using VSYNC = IntStatusD0Fields::VSYNC;
    using UNDERRUN = IntStatusD0Fields::UNDERRUN;
    using VS_BLANK = IntStatusD0Fields::VS_BLANK;
    using DMA_ERR = IntStatusD0Fields::DMA_ERR;
    using DMA_DONE = IntStatusD0Fields::DMA_DONE;
    using FIFO_EMPTY = IntStatusD0Fields::FIFO_EMPTY;
  };

  // Interrupt Enable Register for domain 0
  struct IntEnableD0Fields {
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
  };  // struct IntEnableD0Fields

  struct INT_ENABLE_D0 : ftl::mmio::Register<
      0x40808024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntEnableD0Fields::VSYNC_EN,
      IntEnableD0Fields::UNDERRUN_EN,
      IntEnableD0Fields::VS_BLANK_EN,
      ftl::mmio::Reserved<5, 3>,
      IntEnableD0Fields::DMA_ERR_EN,
      IntEnableD0Fields::DMA_DONE_EN,
      IntEnableD0Fields::FIFO_EMPTY_EN> {
    using eVSYNC_EN = IntEnableD0Fields::eVSYNC_EN;
    using eUNDERRUN_EN = IntEnableD0Fields::eUNDERRUN_EN;
    using eVS_BLANK_EN = IntEnableD0Fields::eVS_BLANK_EN;
    using VSYNC_EN = IntEnableD0Fields::VSYNC_EN;
    using UNDERRUN_EN = IntEnableD0Fields::UNDERRUN_EN;
    using VS_BLANK_EN = IntEnableD0Fields::VS_BLANK_EN;
    using DMA_ERR_EN = IntEnableD0Fields::DMA_ERR_EN;
    using DMA_DONE_EN = IntEnableD0Fields::DMA_DONE_EN;
    using FIFO_EMPTY_EN = IntEnableD0Fields::FIFO_EMPTY_EN;
  };

  // Interrupt Status Register for domain 1
  struct IntStatusD1Fields {
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
  };  // struct IntStatusD1Fields

  struct INT_STATUS_D1 : ftl::mmio::Register<
      0x40808030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntStatusD1Fields::VSYNC,
      IntStatusD1Fields::UNDERRUN,
      IntStatusD1Fields::VS_BLANK,
      ftl::mmio::Reserved<5, 3>,
      IntStatusD1Fields::DMA_ERR,
      IntStatusD1Fields::DMA_DONE,
      IntStatusD1Fields::FIFO_EMPTY> {
    using VSYNC = IntStatusD1Fields::VSYNC;
    using UNDERRUN = IntStatusD1Fields::UNDERRUN;
    using VS_BLANK = IntStatusD1Fields::VS_BLANK;
    using DMA_ERR = IntStatusD1Fields::DMA_ERR;
    using DMA_DONE = IntStatusD1Fields::DMA_DONE;
    using FIFO_EMPTY = IntStatusD1Fields::FIFO_EMPTY;
  };

  // Interrupt Enable Register for domain 1
  struct IntEnableD1Fields {
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
  };  // struct IntEnableD1Fields

  struct INT_ENABLE_D1 : ftl::mmio::Register<
      0x40808034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntEnableD1Fields::VSYNC_EN,
      IntEnableD1Fields::UNDERRUN_EN,
      IntEnableD1Fields::VS_BLANK_EN,
      ftl::mmio::Reserved<5, 3>,
      IntEnableD1Fields::DMA_ERR_EN,
      IntEnableD1Fields::DMA_DONE_EN,
      IntEnableD1Fields::FIFO_EMPTY_EN> {
    using VSYNC_EN = IntEnableD1Fields::VSYNC_EN;
    using UNDERRUN_EN = IntEnableD1Fields::UNDERRUN_EN;
    using VS_BLANK_EN = IntEnableD1Fields::VS_BLANK_EN;
    using DMA_ERR_EN = IntEnableD1Fields::DMA_ERR_EN;
    using DMA_DONE_EN = IntEnableD1Fields::DMA_DONE_EN;
    using FIFO_EMPTY_EN = IntEnableD1Fields::FIFO_EMPTY_EN;
  };

  // Reserved
  struct PdiParaFields {
  };  // struct PdiParaFields

  struct PDI_PARA : ftl::mmio::Register<
      0x40808040u,
      std::uint32_t,
      0x00001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<32, 0>> {
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl01Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl01Fields

  struct CTRLDESCL0_1 : ftl::mmio::Register<
      0x40808200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl01Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl01Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl01Fields::WIDTH;
    using HEIGHT = Ctrldescl01Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl02Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl02Fields

  struct CTRLDESCL0_2 : ftl::mmio::Register<
      0x40808204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl02Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl02Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl02Fields::POSX;
    using POSY = Ctrldescl02Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl03Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl03Fields

  struct CTRLDESCL0_3 : ftl::mmio::Register<
      0x40808208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl03Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl03Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl04Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl04Fields

  struct CTRLDESCL0_4 : ftl::mmio::Register<
      0x4080820Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl04Fields::ADDR> {
    using ADDR = Ctrldescl04Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl05Fields {
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
  };  // struct Ctrldescl05Fields

  struct CTRLDESCL0_5 : ftl::mmio::Register<
      0x40808210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl05Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl05Fields::PD_FACTOR_MODE,
      Ctrldescl05Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl05Fields::PD_ALPHA_MODE,
      Ctrldescl05Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl05Fields::YUV_FORMAT,
      Ctrldescl05Fields::GLOBAL_ALPHA,
      Ctrldescl05Fields::BPP,
      Ctrldescl05Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl05Fields::SHADOW_LOAD_EN,
      Ctrldescl05Fields::EN> {
    using eAB_MODE = Ctrldescl05Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl05Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl05Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl05Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl05Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl05Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl05Fields::eBPP;
    using eSAFETY_EN = Ctrldescl05Fields::eSAFETY_EN;
    using eEN = Ctrldescl05Fields::eEN;
    using AB_MODE = Ctrldescl05Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl05Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl05Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl05Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl05Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl05Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl05Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl05Fields::BPP;
    using SAFETY_EN = Ctrldescl05Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl05Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl05Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl06Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl06Fields

  struct CTRLDESCL0_6 : ftl::mmio::Register<
      0x40808214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl06Fields::BCLR_B,
      Ctrldescl06Fields::BCLR_G,
      Ctrldescl06Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl06Fields::BCLR_B;
    using BCLR_G = Ctrldescl06Fields::BCLR_G;
    using BCLR_R = Ctrldescl06Fields::BCLR_R;
  };

  // Color Space Conversion Coefficient Register 0
  struct Csc0Coef0Fields {
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
  };  // struct Csc0Coef0Fields

  struct CSC0_COEF0 : ftl::mmio::Register<
      0x40808218u,
      std::uint32_t,
      0x04000000u,
      ftl::mmio::RW,
      Csc0Coef0Fields::Y_OFFSET,
      Csc0Coef0Fields::UV_OFFSET,
      Csc0Coef0Fields::C0,
      ftl::mmio::Reserved<1, 29>,
      Csc0Coef0Fields::ENABLE,
      Csc0Coef0Fields::YCBCR_MODE> {
    using eENABLE = Csc0Coef0Fields::eENABLE;
    using eYCBCR_MODE = Csc0Coef0Fields::eYCBCR_MODE;
    using Y_OFFSET = Csc0Coef0Fields::Y_OFFSET;
    using UV_OFFSET = Csc0Coef0Fields::UV_OFFSET;
    using C0 = Csc0Coef0Fields::C0;
    using ENABLE = Csc0Coef0Fields::ENABLE;
    using YCBCR_MODE = Csc0Coef0Fields::YCBCR_MODE;
  };

  // Color Space Conversion Coefficient Register 1
  struct Csc0Coef1Fields {
    // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
    using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
    using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csc0Coef1Fields

  struct CSC0_COEF1 : ftl::mmio::Register<
      0x4080821Cu,
      std::uint32_t,
      0x01230208u,
      ftl::mmio::RW,
      Csc0Coef1Fields::C4,
      ftl::mmio::Reserved<5, 11>,
      Csc0Coef1Fields::C1,
      ftl::mmio::Reserved<5, 27>> {
    using C4 = Csc0Coef1Fields::C4;
    using C1 = Csc0Coef1Fields::C1;
  };

  // Color Space Conversion Coefficient Register 2
  struct Csc0Coef2Fields {
    // Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csc0Coef2Fields

  struct CSC0_COEF2 : ftl::mmio::Register<
      0x40808220u,
      std::uint32_t,
      0x076B079Cu,
      ftl::mmio::RW,
      Csc0Coef2Fields::C3,
      ftl::mmio::Reserved<5, 11>,
      Csc0Coef2Fields::C2,
      ftl::mmio::Reserved<5, 27>> {
    using C3 = Csc0Coef2Fields::C3;
    using C2 = Csc0Coef2Fields::C2;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl11Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl11Fields

  struct CTRLDESCL1_1 : ftl::mmio::Register<
      0x40808240u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl11Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl11Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl11Fields::WIDTH;
    using HEIGHT = Ctrldescl11Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl12Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl12Fields

  struct CTRLDESCL1_2 : ftl::mmio::Register<
      0x40808244u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl12Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl12Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl12Fields::POSX;
    using POSY = Ctrldescl12Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl13Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl13Fields

  struct CTRLDESCL1_3 : ftl::mmio::Register<
      0x40808248u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl13Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl13Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl14Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl14Fields

  struct CTRLDESCL1_4 : ftl::mmio::Register<
      0x4080824Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl14Fields::ADDR> {
    using ADDR = Ctrldescl14Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl15Fields {
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
  };  // struct Ctrldescl15Fields

  struct CTRLDESCL1_5 : ftl::mmio::Register<
      0x40808250u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl15Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl15Fields::PD_FACTOR_MODE,
      Ctrldescl15Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl15Fields::PD_ALPHA_MODE,
      Ctrldescl15Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl15Fields::YUV_FORMAT,
      Ctrldescl15Fields::GLOBAL_ALPHA,
      Ctrldescl15Fields::BPP,
      Ctrldescl15Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl15Fields::SHADOW_LOAD_EN,
      Ctrldescl15Fields::EN> {
    using eAB_MODE = Ctrldescl15Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl15Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl15Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl15Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl15Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl15Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl15Fields::eBPP;
    using eSAFETY_EN = Ctrldescl15Fields::eSAFETY_EN;
    using eEN = Ctrldescl15Fields::eEN;
    using AB_MODE = Ctrldescl15Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl15Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl15Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl15Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl15Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl15Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl15Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl15Fields::BPP;
    using SAFETY_EN = Ctrldescl15Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl15Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl15Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl16Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl16Fields

  struct CTRLDESCL1_6 : ftl::mmio::Register<
      0x40808254u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl16Fields::BCLR_B,
      Ctrldescl16Fields::BCLR_G,
      Ctrldescl16Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl16Fields::BCLR_B;
    using BCLR_G = Ctrldescl16Fields::BCLR_G;
    using BCLR_R = Ctrldescl16Fields::BCLR_R;
  };

  // Color Space Conversion Coefficient Register 0
  struct Csc1Coef0Fields {
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
  };  // struct Csc1Coef0Fields

  struct CSC1_COEF0 : ftl::mmio::Register<
      0x40808258u,
      std::uint32_t,
      0x04000000u,
      ftl::mmio::RW,
      Csc1Coef0Fields::Y_OFFSET,
      Csc1Coef0Fields::UV_OFFSET,
      Csc1Coef0Fields::C0,
      ftl::mmio::Reserved<1, 29>,
      Csc1Coef0Fields::ENABLE,
      Csc1Coef0Fields::YCBCR_MODE> {
    using eENABLE = Csc1Coef0Fields::eENABLE;
    using eYCBCR_MODE = Csc1Coef0Fields::eYCBCR_MODE;
    using Y_OFFSET = Csc1Coef0Fields::Y_OFFSET;
    using UV_OFFSET = Csc1Coef0Fields::UV_OFFSET;
    using C0 = Csc1Coef0Fields::C0;
    using ENABLE = Csc1Coef0Fields::ENABLE;
    using YCBCR_MODE = Csc1Coef0Fields::YCBCR_MODE;
  };

  // Color Space Conversion Coefficient Register 1
  struct Csc1Coef1Fields {
    // Two's compliment Blue U/Cb multiplier coefficient. YUV=0x208 (2.032) YCbCr=0x204 (2.017)
    using C4 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's compliment Red V/Cr multiplier coefficient. YUV=0x123 (1.140) YCbCr=0x198 (1.596)
    using C1 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csc1Coef1Fields

  struct CSC1_COEF1 : ftl::mmio::Register<
      0x4080825Cu,
      std::uint32_t,
      0x01230208u,
      ftl::mmio::RW,
      Csc1Coef1Fields::C4,
      ftl::mmio::Reserved<5, 11>,
      Csc1Coef1Fields::C1,
      ftl::mmio::Reserved<5, 27>> {
    using C4 = Csc1Coef1Fields::C4;
    using C1 = Csc1Coef1Fields::C1;
  };

  // Color Space Conversion Coefficient Register 2
  struct Csc1Coef2Fields {
    // Two's compliment Green U/Cb multiplier coefficient. YUV=0x79C (-0.394) YCbCr=0x79C (-0.392)
    using C3 = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's compliment Green V/Cr multiplier coefficient. YUV=0x76B (-0.581) YCbCr=0x730 (-0.813)
    using C2 = ftl::mmio::Field<11, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csc1Coef2Fields

  struct CSC1_COEF2 : ftl::mmio::Register<
      0x40808260u,
      std::uint32_t,
      0x076B079Cu,
      ftl::mmio::RW,
      Csc1Coef2Fields::C3,
      ftl::mmio::Reserved<5, 11>,
      Csc1Coef2Fields::C2,
      ftl::mmio::Reserved<5, 27>> {
    using C3 = Csc1Coef2Fields::C3;
    using C2 = Csc1Coef2Fields::C2;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl21Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl21Fields

  struct CTRLDESCL2_1 : ftl::mmio::Register<
      0x40808280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl21Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl21Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl21Fields::WIDTH;
    using HEIGHT = Ctrldescl21Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl22Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl22Fields

  struct CTRLDESCL2_2 : ftl::mmio::Register<
      0x40808284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl22Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl22Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl22Fields::POSX;
    using POSY = Ctrldescl22Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl23Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl23Fields

  struct CTRLDESCL2_3 : ftl::mmio::Register<
      0x40808288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl23Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl23Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl24Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl24Fields

  struct CTRLDESCL2_4 : ftl::mmio::Register<
      0x4080828Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl24Fields::ADDR> {
    using ADDR = Ctrldescl24Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl25Fields {
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
  };  // struct Ctrldescl25Fields

  struct CTRLDESCL2_5 : ftl::mmio::Register<
      0x40808290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl25Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl25Fields::PD_FACTOR_MODE,
      Ctrldescl25Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl25Fields::PD_ALPHA_MODE,
      Ctrldescl25Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl25Fields::YUV_FORMAT,
      Ctrldescl25Fields::GLOBAL_ALPHA,
      Ctrldescl25Fields::BPP,
      Ctrldescl25Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl25Fields::SHADOW_LOAD_EN,
      Ctrldescl25Fields::EN> {
    using eAB_MODE = Ctrldescl25Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl25Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl25Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl25Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl25Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl25Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl25Fields::eBPP;
    using eSAFETY_EN = Ctrldescl25Fields::eSAFETY_EN;
    using eEN = Ctrldescl25Fields::eEN;
    using AB_MODE = Ctrldescl25Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl25Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl25Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl25Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl25Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl25Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl25Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl25Fields::BPP;
    using SAFETY_EN = Ctrldescl25Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl25Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl25Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl26Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl26Fields

  struct CTRLDESCL2_6 : ftl::mmio::Register<
      0x40808294u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl26Fields::BCLR_B,
      Ctrldescl26Fields::BCLR_G,
      Ctrldescl26Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl26Fields::BCLR_B;
    using BCLR_G = Ctrldescl26Fields::BCLR_G;
    using BCLR_R = Ctrldescl26Fields::BCLR_R;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl31Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl31Fields

  struct CTRLDESCL3_1 : ftl::mmio::Register<
      0x408082C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl31Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl31Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl31Fields::WIDTH;
    using HEIGHT = Ctrldescl31Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl32Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl32Fields

  struct CTRLDESCL3_2 : ftl::mmio::Register<
      0x408082C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl32Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl32Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl32Fields::POSX;
    using POSY = Ctrldescl32Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl33Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl33Fields

  struct CTRLDESCL3_3 : ftl::mmio::Register<
      0x408082C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl33Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl33Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl34Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl34Fields

  struct CTRLDESCL3_4 : ftl::mmio::Register<
      0x408082CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl34Fields::ADDR> {
    using ADDR = Ctrldescl34Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl35Fields {
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
  };  // struct Ctrldescl35Fields

  struct CTRLDESCL3_5 : ftl::mmio::Register<
      0x408082D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl35Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl35Fields::PD_FACTOR_MODE,
      Ctrldescl35Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl35Fields::PD_ALPHA_MODE,
      Ctrldescl35Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl35Fields::YUV_FORMAT,
      Ctrldescl35Fields::GLOBAL_ALPHA,
      Ctrldescl35Fields::BPP,
      Ctrldescl35Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl35Fields::SHADOW_LOAD_EN,
      Ctrldescl35Fields::EN> {
    using eAB_MODE = Ctrldescl35Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl35Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl35Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl35Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl35Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl35Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl35Fields::eBPP;
    using eSAFETY_EN = Ctrldescl35Fields::eSAFETY_EN;
    using eEN = Ctrldescl35Fields::eEN;
    using AB_MODE = Ctrldescl35Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl35Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl35Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl35Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl35Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl35Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl35Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl35Fields::BPP;
    using SAFETY_EN = Ctrldescl35Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl35Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl35Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl36Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl36Fields

  struct CTRLDESCL3_6 : ftl::mmio::Register<
      0x408082D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl36Fields::BCLR_B,
      Ctrldescl36Fields::BCLR_G,
      Ctrldescl36Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl36Fields::BCLR_B;
    using BCLR_G = Ctrldescl36Fields::BCLR_G;
    using BCLR_R = Ctrldescl36Fields::BCLR_R;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl41Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl41Fields

  struct CTRLDESCL4_1 : ftl::mmio::Register<
      0x40808300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl41Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl41Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl41Fields::WIDTH;
    using HEIGHT = Ctrldescl41Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl42Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl42Fields

  struct CTRLDESCL4_2 : ftl::mmio::Register<
      0x40808304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl42Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl42Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl42Fields::POSX;
    using POSY = Ctrldescl42Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl43Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl43Fields

  struct CTRLDESCL4_3 : ftl::mmio::Register<
      0x40808308u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl43Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl43Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl44Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl44Fields

  struct CTRLDESCL4_4 : ftl::mmio::Register<
      0x4080830Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl44Fields::ADDR> {
    using ADDR = Ctrldescl44Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl45Fields {
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
  };  // struct Ctrldescl45Fields

  struct CTRLDESCL4_5 : ftl::mmio::Register<
      0x40808310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl45Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl45Fields::PD_FACTOR_MODE,
      Ctrldescl45Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl45Fields::PD_ALPHA_MODE,
      Ctrldescl45Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl45Fields::YUV_FORMAT,
      Ctrldescl45Fields::GLOBAL_ALPHA,
      Ctrldescl45Fields::BPP,
      Ctrldescl45Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl45Fields::SHADOW_LOAD_EN,
      Ctrldescl45Fields::EN> {
    using eAB_MODE = Ctrldescl45Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl45Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl45Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl45Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl45Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl45Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl45Fields::eBPP;
    using eSAFETY_EN = Ctrldescl45Fields::eSAFETY_EN;
    using eEN = Ctrldescl45Fields::eEN;
    using AB_MODE = Ctrldescl45Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl45Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl45Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl45Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl45Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl45Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl45Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl45Fields::BPP;
    using SAFETY_EN = Ctrldescl45Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl45Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl45Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl46Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl46Fields

  struct CTRLDESCL4_6 : ftl::mmio::Register<
      0x40808314u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl46Fields::BCLR_B,
      Ctrldescl46Fields::BCLR_G,
      Ctrldescl46Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl46Fields::BCLR_B;
    using BCLR_G = Ctrldescl46Fields::BCLR_G;
    using BCLR_R = Ctrldescl46Fields::BCLR_R;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl51Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl51Fields

  struct CTRLDESCL5_1 : ftl::mmio::Register<
      0x40808340u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl51Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl51Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl51Fields::WIDTH;
    using HEIGHT = Ctrldescl51Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl52Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl52Fields

  struct CTRLDESCL5_2 : ftl::mmio::Register<
      0x40808344u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl52Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl52Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl52Fields::POSX;
    using POSY = Ctrldescl52Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl53Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl53Fields

  struct CTRLDESCL5_3 : ftl::mmio::Register<
      0x40808348u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl53Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl53Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl54Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl54Fields

  struct CTRLDESCL5_4 : ftl::mmio::Register<
      0x4080834Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl54Fields::ADDR> {
    using ADDR = Ctrldescl54Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl55Fields {
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
  };  // struct Ctrldescl55Fields

  struct CTRLDESCL5_5 : ftl::mmio::Register<
      0x40808350u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl55Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl55Fields::PD_FACTOR_MODE,
      Ctrldescl55Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl55Fields::PD_ALPHA_MODE,
      Ctrldescl55Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl55Fields::YUV_FORMAT,
      Ctrldescl55Fields::GLOBAL_ALPHA,
      Ctrldescl55Fields::BPP,
      Ctrldescl55Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl55Fields::SHADOW_LOAD_EN,
      Ctrldescl55Fields::EN> {
    using eAB_MODE = Ctrldescl55Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl55Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl55Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl55Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl55Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl55Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl55Fields::eBPP;
    using eSAFETY_EN = Ctrldescl55Fields::eSAFETY_EN;
    using eEN = Ctrldescl55Fields::eEN;
    using AB_MODE = Ctrldescl55Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl55Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl55Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl55Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl55Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl55Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl55Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl55Fields::BPP;
    using SAFETY_EN = Ctrldescl55Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl55Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl55Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl56Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl56Fields

  struct CTRLDESCL5_6 : ftl::mmio::Register<
      0x40808354u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl56Fields::BCLR_B,
      Ctrldescl56Fields::BCLR_G,
      Ctrldescl56Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl56Fields::BCLR_B;
    using BCLR_G = Ctrldescl56Fields::BCLR_G;
    using BCLR_R = Ctrldescl56Fields::BCLR_R;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl61Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl61Fields

  struct CTRLDESCL6_1 : ftl::mmio::Register<
      0x40808380u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl61Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl61Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl61Fields::WIDTH;
    using HEIGHT = Ctrldescl61Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl62Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl62Fields

  struct CTRLDESCL6_2 : ftl::mmio::Register<
      0x40808384u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl62Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl62Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl62Fields::POSX;
    using POSY = Ctrldescl62Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl63Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl63Fields

  struct CTRLDESCL6_3 : ftl::mmio::Register<
      0x40808388u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl63Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl63Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl64Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl64Fields

  struct CTRLDESCL6_4 : ftl::mmio::Register<
      0x4080838Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl64Fields::ADDR> {
    using ADDR = Ctrldescl64Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl65Fields {
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
  };  // struct Ctrldescl65Fields

  struct CTRLDESCL6_5 : ftl::mmio::Register<
      0x40808390u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl65Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl65Fields::PD_FACTOR_MODE,
      Ctrldescl65Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl65Fields::PD_ALPHA_MODE,
      Ctrldescl65Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl65Fields::YUV_FORMAT,
      Ctrldescl65Fields::GLOBAL_ALPHA,
      Ctrldescl65Fields::BPP,
      Ctrldescl65Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl65Fields::SHADOW_LOAD_EN,
      Ctrldescl65Fields::EN> {
    using eAB_MODE = Ctrldescl65Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl65Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl65Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl65Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl65Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl65Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl65Fields::eBPP;
    using eSAFETY_EN = Ctrldescl65Fields::eSAFETY_EN;
    using eEN = Ctrldescl65Fields::eEN;
    using AB_MODE = Ctrldescl65Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl65Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl65Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl65Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl65Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl65Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl65Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl65Fields::BPP;
    using SAFETY_EN = Ctrldescl65Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl65Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl65Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl66Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl66Fields

  struct CTRLDESCL6_6 : ftl::mmio::Register<
      0x40808394u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl66Fields::BCLR_B,
      Ctrldescl66Fields::BCLR_G,
      Ctrldescl66Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl66Fields::BCLR_B;
    using BCLR_G = Ctrldescl66Fields::BCLR_G;
    using BCLR_R = Ctrldescl66Fields::BCLR_R;
  };

  // Control Descriptor Layer 1 Register
  struct Ctrldescl71Fields {
    // Width of the layer in pixels
    using WIDTH = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Height of the layer in pixels
    using HEIGHT = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl71Fields

  struct CTRLDESCL7_1 : ftl::mmio::Register<
      0x408083C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl71Fields::WIDTH,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl71Fields::HEIGHT,
      ftl::mmio::Reserved<4, 28>> {
    using WIDTH = Ctrldescl71Fields::WIDTH;
    using HEIGHT = Ctrldescl71Fields::HEIGHT;
  };

  // Control Descriptor Layer 2 Register
  struct Ctrldescl72Fields {
    // POS X
    using POSX = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The vertical position of top row of the layer, where 0 is the top row of the panel, only positive values are below the top row of the panel
    using POSY = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl72Fields

  struct CTRLDESCL7_2 : ftl::mmio::Register<
      0x408083C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl72Fields::POSX,
      ftl::mmio::Reserved<4, 12>,
      Ctrldescl72Fields::POSY,
      ftl::mmio::Reserved<4, 28>> {
    using POSX = Ctrldescl72Fields::POSX;
    using POSY = Ctrldescl72Fields::POSY;
  };

  // Control Descriptor Layer 3 Register
  struct Ctrldescl73Fields {
    // Number of bytes between 2 vertically adjacent pixels in system memory. Byte granularity is supported, but SW should align to 64B boundry
    using PITCH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl73Fields

  struct CTRLDESCL7_3 : ftl::mmio::Register<
      0x408083C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl73Fields::PITCH,
      ftl::mmio::Reserved<16, 16>> {
    using PITCH = Ctrldescl73Fields::PITCH;
  };

  // Control Descriptor Layer 4 Register
  struct Ctrldescl74Fields {
    // Address of layer data in the memory. The address programmed should be 64-bit aligned
    using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl74Fields

  struct CTRLDESCL7_4 : ftl::mmio::Register<
      0x408083CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl74Fields::ADDR> {
    using ADDR = Ctrldescl74Fields::ADDR;
  };

  // Control Descriptor Layer 5 Register
  struct Ctrldescl75Fields {
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
  };  // struct Ctrldescl75Fields

  struct CTRLDESCL7_5 : ftl::mmio::Register<
      0x408083D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl75Fields::AB_MODE,
      ftl::mmio::Reserved<2, 2>,
      Ctrldescl75Fields::PD_FACTOR_MODE,
      Ctrldescl75Fields::PD_GLOBAL_ALPHA_MODE,
      Ctrldescl75Fields::PD_ALPHA_MODE,
      Ctrldescl75Fields::PD_COLOR_MODE,
      ftl::mmio::Reserved<4, 10>,
      Ctrldescl75Fields::YUV_FORMAT,
      Ctrldescl75Fields::GLOBAL_ALPHA,
      Ctrldescl75Fields::BPP,
      Ctrldescl75Fields::SAFETY_EN,
      ftl::mmio::Reserved<1, 29>,
      Ctrldescl75Fields::SHADOW_LOAD_EN,
      Ctrldescl75Fields::EN> {
    using eAB_MODE = Ctrldescl75Fields::eAB_MODE;
    using ePD_FACTOR_MODE = Ctrldescl75Fields::ePD_FACTOR_MODE;
    using ePD_GLOBAL_ALPHA_MODE = Ctrldescl75Fields::ePD_GLOBAL_ALPHA_MODE;
    using ePD_ALPHA_MODE = Ctrldescl75Fields::ePD_ALPHA_MODE;
    using ePD_COLOR_MODE = Ctrldescl75Fields::ePD_COLOR_MODE;
    using eYUV_FORMAT = Ctrldescl75Fields::eYUV_FORMAT;
    using eBPP = Ctrldescl75Fields::eBPP;
    using eSAFETY_EN = Ctrldescl75Fields::eSAFETY_EN;
    using eEN = Ctrldescl75Fields::eEN;
    using AB_MODE = Ctrldescl75Fields::AB_MODE;
    using PD_FACTOR_MODE = Ctrldescl75Fields::PD_FACTOR_MODE;
    using PD_GLOBAL_ALPHA_MODE = Ctrldescl75Fields::PD_GLOBAL_ALPHA_MODE;
    using PD_ALPHA_MODE = Ctrldescl75Fields::PD_ALPHA_MODE;
    using PD_COLOR_MODE = Ctrldescl75Fields::PD_COLOR_MODE;
    using YUV_FORMAT = Ctrldescl75Fields::YUV_FORMAT;
    using GLOBAL_ALPHA = Ctrldescl75Fields::GLOBAL_ALPHA;
    using BPP = Ctrldescl75Fields::BPP;
    using SAFETY_EN = Ctrldescl75Fields::SAFETY_EN;
    using SHADOW_LOAD_EN = Ctrldescl75Fields::SHADOW_LOAD_EN;
    using EN = Ctrldescl75Fields::EN;
  };

  // Control Descriptor Layer 6 Register
  struct Ctrldescl76Fields {
    // Background B component value
    using BCLR_B = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background G component value
    using BCLR_G = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Background R component value
    using BCLR_R = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrldescl76Fields

  struct CTRLDESCL7_6 : ftl::mmio::Register<
      0x408083D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrldescl76Fields::BCLR_B,
      Ctrldescl76Fields::BCLR_G,
      Ctrldescl76Fields::BCLR_R,
      ftl::mmio::Reserved<8, 24>> {
    using BCLR_B = Ctrldescl76Fields::BCLR_B;
    using BCLR_G = Ctrldescl76Fields::BCLR_G;
    using BCLR_R = Ctrldescl76Fields::BCLR_R;
  };

  // LCDIFv2 CLUT load Register
  struct ClutLoadFields {
    // CLUT Update Enable
    using CLUT_UPDATE_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Selected CLUT Number
    using SEL_CLUT_NUM = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ClutLoadFields

  struct CLUT_LOAD : ftl::mmio::Register<
      0x40808400u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ClutLoadFields::CLUT_UPDATE_EN,
      ftl::mmio::Reserved<3, 1>,
      ClutLoadFields::SEL_CLUT_NUM,
      ftl::mmio::Reserved<25, 7>> {
    using CLUT_UPDATE_EN = ClutLoadFields::CLUT_UPDATE_EN;
    using SEL_CLUT_NUM = ClutLoadFields::SEL_CLUT_NUM;
  };

};

}  // namespace regs