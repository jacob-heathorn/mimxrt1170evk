#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// VIDEO_MUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct VideoMux {
  // Video mux Control Register
  struct VID_MUX_CTRL_fields_ {
    enum class eCSI_SEL : std::uint32_t {
      // CSI sensor data is from Parallel CSI
      ePARALLEL_CSI = 0,
      // CSI sensor data is from MIPI CSI
      eMIPI_CSI = 1,
    };

    enum class eLCDIF2_SEL : std::uint32_t {
      // LCDIFv2 sensor data is from Parallel CSI
      ePARALLEL_CSI = 0,
      // LCDIFv2 sensor data is from MIPI CSI
      eMIPI_CSI = 1,
    };

    enum class eMIPI_DSI_SEL : std::uint32_t {
      // MIPI DSI video data is from eLCDIF
      ePARALLEL_CSI = 0,
      // MIPI DSI video data is from LCDIFv2
      eMIPI_CSI = 1,
    };

    enum class ePARA_LCD_SEL : std::uint32_t {
      // Parallel LCDIF video data is from eLCDIF
      ePARALLEL_CSI = 0,
      // Parallel LCDIF video data is from LCDIFv2
      eMIPI_CSI = 1,
    };

    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, eCSI_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, eLCDIF2_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, eMIPI_DSI_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, ePARA_LCD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VID_MUX_CTRL_fields_

  struct VID_MUX_CTRL : ftl::mmio::Register<
      0x40818000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VID_MUX_CTRL_fields_::CSI_SEL,
      VID_MUX_CTRL_fields_::LCDIF2_SEL,
      VID_MUX_CTRL_fields_::MIPI_DSI_SEL,
      VID_MUX_CTRL_fields_::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using eCSI_SEL = VID_MUX_CTRL_fields_::eCSI_SEL;
    using eLCDIF2_SEL = VID_MUX_CTRL_fields_::eLCDIF2_SEL;
    using eMIPI_DSI_SEL = VID_MUX_CTRL_fields_::eMIPI_DSI_SEL;
    using ePARA_LCD_SEL = VID_MUX_CTRL_fields_::ePARA_LCD_SEL;
    using CSI_SEL = VID_MUX_CTRL_fields_::CSI_SEL;
    using LCDIF2_SEL = VID_MUX_CTRL_fields_::LCDIF2_SEL;
    using MIPI_DSI_SEL = VID_MUX_CTRL_fields_::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VID_MUX_CTRL_fields_::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VID_MUX_CTRL_SET_fields_ {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct VID_MUX_CTRL_SET_fields_

  struct VID_MUX_CTRL_SET : ftl::mmio::Register<
      0x40818004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VID_MUX_CTRL_SET_fields_::CSI_SEL,
      VID_MUX_CTRL_SET_fields_::LCDIF2_SEL,
      VID_MUX_CTRL_SET_fields_::MIPI_DSI_SEL,
      VID_MUX_CTRL_SET_fields_::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VID_MUX_CTRL_SET_fields_::CSI_SEL;
    using LCDIF2_SEL = VID_MUX_CTRL_SET_fields_::LCDIF2_SEL;
    using MIPI_DSI_SEL = VID_MUX_CTRL_SET_fields_::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VID_MUX_CTRL_SET_fields_::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VID_MUX_CTRL_CLR_fields_ {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct VID_MUX_CTRL_CLR_fields_

  struct VID_MUX_CTRL_CLR : ftl::mmio::Register<
      0x40818008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VID_MUX_CTRL_CLR_fields_::CSI_SEL,
      VID_MUX_CTRL_CLR_fields_::LCDIF2_SEL,
      VID_MUX_CTRL_CLR_fields_::MIPI_DSI_SEL,
      VID_MUX_CTRL_CLR_fields_::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VID_MUX_CTRL_CLR_fields_::CSI_SEL;
    using LCDIF2_SEL = VID_MUX_CTRL_CLR_fields_::LCDIF2_SEL;
    using MIPI_DSI_SEL = VID_MUX_CTRL_CLR_fields_::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VID_MUX_CTRL_CLR_fields_::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VID_MUX_CTRL_TOG_fields_ {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct VID_MUX_CTRL_TOG_fields_

  struct VID_MUX_CTRL_TOG : ftl::mmio::Register<
      0x4081800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VID_MUX_CTRL_TOG_fields_::CSI_SEL,
      VID_MUX_CTRL_TOG_fields_::LCDIF2_SEL,
      VID_MUX_CTRL_TOG_fields_::MIPI_DSI_SEL,
      VID_MUX_CTRL_TOG_fields_::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VID_MUX_CTRL_TOG_fields_::CSI_SEL;
    using LCDIF2_SEL = VID_MUX_CTRL_TOG_fields_::LCDIF2_SEL;
    using MIPI_DSI_SEL = VID_MUX_CTRL_TOG_fields_::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VID_MUX_CTRL_TOG_fields_::PARA_LCD_SEL;
  };

  // Pixel Link Master(PLM) Control Register
  struct PLM_CTRL_fields_ {
    enum class eENABLE : std::uint32_t {
      // No active HSYNC and VSYNC output
      eNO_ACTIVE = 0,
      // Active HSYNC and VSYNC output
      eACTIVE = 1,
    };

    enum class eVSYNC_OVERRIDE : std::uint32_t {
      // VSYNC is not asserted
      eDEASSERT = 0,
      // VSYNC is asserted
      eASSERT = 1,
    };

    enum class eHSYNC_OVERRIDE : std::uint32_t {
      // HSYNC is not asserted
      eDEASSERT = 0,
      // HSYNC is asserted
      eASSERT = 1,
    };

    enum class eVALID_OVERRIDE : std::uint32_t {
      // HSYNC and VSYNC is asserted
      eASSERT = 0,
      // HSYNC and VSYNC is not asserted
      eDEASSERT = 1,
    };

    enum class ePOLARITY : std::uint32_t {
      // Keep the current polarity of HSYNC and VSYNC
      eKEEP = 0,
      // Invert the polarity of HSYNC and VSYNC
      eINVERT = 1,
    };

    // Enable the output of HYSNC and VSYNC
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // VSYNC override
    using VSYNC_OVERRIDE = ftl::mmio::Field<1, 1, eVSYNC_OVERRIDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSYNC override
    using HSYNC_OVERRIDE = ftl::mmio::Field<1, 2, eHSYNC_OVERRIDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Valid override
    using VALID_OVERRIDE = ftl::mmio::Field<1, 3, eVALID_OVERRIDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Polarity of HYSNC/VSYNC
    using POLARITY = ftl::mmio::Field<1, 4, ePOLARITY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PLM_CTRL_fields_

  struct PLM_CTRL : ftl::mmio::Register<
      0x40818020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PLM_CTRL_fields_::ENABLE,
      PLM_CTRL_fields_::VSYNC_OVERRIDE,
      PLM_CTRL_fields_::HSYNC_OVERRIDE,
      PLM_CTRL_fields_::VALID_OVERRIDE,
      PLM_CTRL_fields_::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using eENABLE = PLM_CTRL_fields_::eENABLE;
    using eVSYNC_OVERRIDE = PLM_CTRL_fields_::eVSYNC_OVERRIDE;
    using eHSYNC_OVERRIDE = PLM_CTRL_fields_::eHSYNC_OVERRIDE;
    using eVALID_OVERRIDE = PLM_CTRL_fields_::eVALID_OVERRIDE;
    using ePOLARITY = PLM_CTRL_fields_::ePOLARITY;
    using ENABLE = PLM_CTRL_fields_::ENABLE;
    using VSYNC_OVERRIDE = PLM_CTRL_fields_::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PLM_CTRL_fields_::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PLM_CTRL_fields_::VALID_OVERRIDE;
    using POLARITY = PLM_CTRL_fields_::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PLM_CTRL_SET_fields_ {
    // Enable the output of HYSNC and VSYNC
    using ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // VSYNC override
    using VSYNC_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // HSYNC override
    using HSYNC_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Valid override
    using VALID_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Polarity of HYSNC/VSYNC
    using POLARITY = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct PLM_CTRL_SET_fields_

  struct PLM_CTRL_SET : ftl::mmio::Register<
      0x40818024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PLM_CTRL_SET_fields_::ENABLE,
      PLM_CTRL_SET_fields_::VSYNC_OVERRIDE,
      PLM_CTRL_SET_fields_::HSYNC_OVERRIDE,
      PLM_CTRL_SET_fields_::VALID_OVERRIDE,
      PLM_CTRL_SET_fields_::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PLM_CTRL_SET_fields_::ENABLE;
    using VSYNC_OVERRIDE = PLM_CTRL_SET_fields_::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PLM_CTRL_SET_fields_::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PLM_CTRL_SET_fields_::VALID_OVERRIDE;
    using POLARITY = PLM_CTRL_SET_fields_::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PLM_CTRL_CLR_fields_ {
    // Enable the output of HYSNC and VSYNC
    using ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // VSYNC override
    using VSYNC_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // HSYNC override
    using HSYNC_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Valid override
    using VALID_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Polarity of HYSNC/VSYNC
    using POLARITY = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct PLM_CTRL_CLR_fields_

  struct PLM_CTRL_CLR : ftl::mmio::Register<
      0x40818028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PLM_CTRL_CLR_fields_::ENABLE,
      PLM_CTRL_CLR_fields_::VSYNC_OVERRIDE,
      PLM_CTRL_CLR_fields_::HSYNC_OVERRIDE,
      PLM_CTRL_CLR_fields_::VALID_OVERRIDE,
      PLM_CTRL_CLR_fields_::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PLM_CTRL_CLR_fields_::ENABLE;
    using VSYNC_OVERRIDE = PLM_CTRL_CLR_fields_::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PLM_CTRL_CLR_fields_::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PLM_CTRL_CLR_fields_::VALID_OVERRIDE;
    using POLARITY = PLM_CTRL_CLR_fields_::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PLM_CTRL_TOG_fields_ {
    // Enable the output of HYSNC and VSYNC
    using ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // VSYNC override
    using VSYNC_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // HSYNC override
    using HSYNC_OVERRIDE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Valid override
    using VALID_OVERRIDE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Polarity of HYSNC/VSYNC
    using POLARITY = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct PLM_CTRL_TOG_fields_

  struct PLM_CTRL_TOG : ftl::mmio::Register<
      0x4081802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PLM_CTRL_TOG_fields_::ENABLE,
      PLM_CTRL_TOG_fields_::VSYNC_OVERRIDE,
      PLM_CTRL_TOG_fields_::HSYNC_OVERRIDE,
      PLM_CTRL_TOG_fields_::VALID_OVERRIDE,
      PLM_CTRL_TOG_fields_::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PLM_CTRL_TOG_fields_::ENABLE;
    using VSYNC_OVERRIDE = PLM_CTRL_TOG_fields_::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PLM_CTRL_TOG_fields_::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PLM_CTRL_TOG_fields_::VALID_OVERRIDE;
    using POLARITY = PLM_CTRL_TOG_fields_::POLARITY;
  };

  // YUV420 Control Register
  struct YUV420_CTRL_fields_ {
    enum class eFST_LN_DATA_TYPE : std::uint32_t {
      // Odd (default)
      eODD = 0,
      // Even
      eEVEN = 1,
    };

    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, eFST_LN_DATA_TYPE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct YUV420_CTRL_fields_

  struct YUV420_CTRL : ftl::mmio::Register<
      0x40818030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      YUV420_CTRL_fields_::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using eFST_LN_DATA_TYPE = YUV420_CTRL_fields_::eFST_LN_DATA_TYPE;
    using FST_LN_DATA_TYPE = YUV420_CTRL_fields_::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct YUV420_CTRL_SET_fields_ {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct YUV420_CTRL_SET_fields_

  struct YUV420_CTRL_SET : ftl::mmio::Register<
      0x40818034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      YUV420_CTRL_SET_fields_::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = YUV420_CTRL_SET_fields_::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct YUV420_CTRL_CLR_fields_ {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct YUV420_CTRL_CLR_fields_

  struct YUV420_CTRL_CLR : ftl::mmio::Register<
      0x40818038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      YUV420_CTRL_CLR_fields_::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = YUV420_CTRL_CLR_fields_::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct YUV420_CTRL_TOG_fields_ {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct YUV420_CTRL_TOG_fields_

  struct YUV420_CTRL_TOG : ftl::mmio::Register<
      0x4081803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      YUV420_CTRL_TOG_fields_::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = YUV420_CTRL_TOG_fields_::FST_LN_DATA_TYPE;
  };

  // Data Disable Register
  struct CFG_DT_DISABLE_fields_ {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_DT_DISABLE_fields_

  struct CFG_DT_DISABLE : ftl::mmio::Register<
      0x40818050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DT_DISABLE_fields_::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using VALUE = CFG_DT_DISABLE_fields_::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CFG_DT_DISABLE_SET_fields_ {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct CFG_DT_DISABLE_SET_fields_

  struct CFG_DT_DISABLE_SET : ftl::mmio::Register<
      0x40818054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DT_DISABLE_SET_fields_::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CFG_DT_DISABLE_SET_fields_::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CFG_DT_DISABLE_CLR_fields_ {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CFG_DT_DISABLE_CLR_fields_

  struct CFG_DT_DISABLE_CLR : ftl::mmio::Register<
      0x40818058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DT_DISABLE_CLR_fields_::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CFG_DT_DISABLE_CLR_fields_::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CFG_DT_DISABLE_TOG_fields_ {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct CFG_DT_DISABLE_TOG_fields_

  struct CFG_DT_DISABLE_TOG : ftl::mmio::Register<
      0x4081805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DT_DISABLE_TOG_fields_::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CFG_DT_DISABLE_TOG_fields_::CFG_DT_DISABLE;
  };

  // MIPI DSI Control Register
  struct MIPI_DSI_CTRL_fields_ {
    enum class eDPI_SD : std::uint32_t {
      // No effect
      eNO = 0,
      // Send shutdown command
      eSENDCMD = 1,
    };

    enum class eDPI_CM : std::uint32_t {
      // Normal Mode
      eNORMAL = 0,
      // Low-color mode
      eLOWCLR = 1,
    };

    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, eDPI_SD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, eDPI_CM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIPI_DSI_CTRL_fields_

  struct MIPI_DSI_CTRL : ftl::mmio::Register<
      0x40818070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIPI_DSI_CTRL_fields_::DPI_SD,
      MIPI_DSI_CTRL_fields_::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using eDPI_SD = MIPI_DSI_CTRL_fields_::eDPI_SD;
    using eDPI_CM = MIPI_DSI_CTRL_fields_::eDPI_CM;
    using DPI_SD = MIPI_DSI_CTRL_fields_::DPI_SD;
    using DPI_CM = MIPI_DSI_CTRL_fields_::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MIPI_DSI_CTRL_SET_fields_ {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct MIPI_DSI_CTRL_SET_fields_

  struct MIPI_DSI_CTRL_SET : ftl::mmio::Register<
      0x40818074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIPI_DSI_CTRL_SET_fields_::DPI_SD,
      MIPI_DSI_CTRL_SET_fields_::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MIPI_DSI_CTRL_SET_fields_::DPI_SD;
    using DPI_CM = MIPI_DSI_CTRL_SET_fields_::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MIPI_DSI_CTRL_CLR_fields_ {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct MIPI_DSI_CTRL_CLR_fields_

  struct MIPI_DSI_CTRL_CLR : ftl::mmio::Register<
      0x40818078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIPI_DSI_CTRL_CLR_fields_::DPI_SD,
      MIPI_DSI_CTRL_CLR_fields_::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MIPI_DSI_CTRL_CLR_fields_::DPI_SD;
    using DPI_CM = MIPI_DSI_CTRL_CLR_fields_::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MIPI_DSI_CTRL_TOG_fields_ {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct MIPI_DSI_CTRL_TOG_fields_

  struct MIPI_DSI_CTRL_TOG : ftl::mmio::Register<
      0x4081807Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIPI_DSI_CTRL_TOG_fields_::DPI_SD,
      MIPI_DSI_CTRL_TOG_fields_::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MIPI_DSI_CTRL_TOG_fields_::DPI_SD;
    using DPI_CM = MIPI_DSI_CTRL_TOG_fields_::DPI_CM;
  };

};

}  // namespace regs