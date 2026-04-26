#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// VIDEO_MUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct VideoMux {
  // Video mux Control Register
  struct VidMuxCtrlFields {
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
  };  // struct VidMuxCtrlFields

  struct VID_MUX_CTRL : ftl::mmio::Register<
      0x40818000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VidMuxCtrlFields::CSI_SEL,
      VidMuxCtrlFields::LCDIF2_SEL,
      VidMuxCtrlFields::MIPI_DSI_SEL,
      VidMuxCtrlFields::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using eCSI_SEL = VidMuxCtrlFields::eCSI_SEL;
    using eLCDIF2_SEL = VidMuxCtrlFields::eLCDIF2_SEL;
    using eMIPI_DSI_SEL = VidMuxCtrlFields::eMIPI_DSI_SEL;
    using ePARA_LCD_SEL = VidMuxCtrlFields::ePARA_LCD_SEL;
    using CSI_SEL = VidMuxCtrlFields::CSI_SEL;
    using LCDIF2_SEL = VidMuxCtrlFields::LCDIF2_SEL;
    using MIPI_DSI_SEL = VidMuxCtrlFields::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VidMuxCtrlFields::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VidMuxCtrlSetFields {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct VidMuxCtrlSetFields

  struct VID_MUX_CTRL_SET : ftl::mmio::Register<
      0x40818004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VidMuxCtrlSetFields::CSI_SEL,
      VidMuxCtrlSetFields::LCDIF2_SEL,
      VidMuxCtrlSetFields::MIPI_DSI_SEL,
      VidMuxCtrlSetFields::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VidMuxCtrlSetFields::CSI_SEL;
    using LCDIF2_SEL = VidMuxCtrlSetFields::LCDIF2_SEL;
    using MIPI_DSI_SEL = VidMuxCtrlSetFields::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VidMuxCtrlSetFields::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VidMuxCtrlClrFields {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct VidMuxCtrlClrFields

  struct VID_MUX_CTRL_CLR : ftl::mmio::Register<
      0x40818008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VidMuxCtrlClrFields::CSI_SEL,
      VidMuxCtrlClrFields::LCDIF2_SEL,
      VidMuxCtrlClrFields::MIPI_DSI_SEL,
      VidMuxCtrlClrFields::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VidMuxCtrlClrFields::CSI_SEL;
    using LCDIF2_SEL = VidMuxCtrlClrFields::LCDIF2_SEL;
    using MIPI_DSI_SEL = VidMuxCtrlClrFields::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VidMuxCtrlClrFields::PARA_LCD_SEL;
  };

  // Video mux Control Register
  struct VidMuxCtrlTogFields {
    // CSI sensor data input mux selector
    using CSI_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // LCDIF2 sensor data input mux selector
    using LCDIF2_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // MIPI DSI video data input mux selector
    using MIPI_DSI_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Parallel LCDIF video data input mux selector
    using PARA_LCD_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct VidMuxCtrlTogFields

  struct VID_MUX_CTRL_TOG : ftl::mmio::Register<
      0x4081800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VidMuxCtrlTogFields::CSI_SEL,
      VidMuxCtrlTogFields::LCDIF2_SEL,
      VidMuxCtrlTogFields::MIPI_DSI_SEL,
      VidMuxCtrlTogFields::PARA_LCD_SEL,
      ftl::mmio::Reserved<28, 4>> {
    using CSI_SEL = VidMuxCtrlTogFields::CSI_SEL;
    using LCDIF2_SEL = VidMuxCtrlTogFields::LCDIF2_SEL;
    using MIPI_DSI_SEL = VidMuxCtrlTogFields::MIPI_DSI_SEL;
    using PARA_LCD_SEL = VidMuxCtrlTogFields::PARA_LCD_SEL;
  };

  // Pixel Link Master(PLM) Control Register
  struct PlmCtrlFields {
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
  };  // struct PlmCtrlFields

  struct PLM_CTRL : ftl::mmio::Register<
      0x40818020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PlmCtrlFields::ENABLE,
      PlmCtrlFields::VSYNC_OVERRIDE,
      PlmCtrlFields::HSYNC_OVERRIDE,
      PlmCtrlFields::VALID_OVERRIDE,
      PlmCtrlFields::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using eENABLE = PlmCtrlFields::eENABLE;
    using eVSYNC_OVERRIDE = PlmCtrlFields::eVSYNC_OVERRIDE;
    using eHSYNC_OVERRIDE = PlmCtrlFields::eHSYNC_OVERRIDE;
    using eVALID_OVERRIDE = PlmCtrlFields::eVALID_OVERRIDE;
    using ePOLARITY = PlmCtrlFields::ePOLARITY;
    using ENABLE = PlmCtrlFields::ENABLE;
    using VSYNC_OVERRIDE = PlmCtrlFields::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PlmCtrlFields::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PlmCtrlFields::VALID_OVERRIDE;
    using POLARITY = PlmCtrlFields::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PlmCtrlSetFields {
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
  };  // struct PlmCtrlSetFields

  struct PLM_CTRL_SET : ftl::mmio::Register<
      0x40818024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PlmCtrlSetFields::ENABLE,
      PlmCtrlSetFields::VSYNC_OVERRIDE,
      PlmCtrlSetFields::HSYNC_OVERRIDE,
      PlmCtrlSetFields::VALID_OVERRIDE,
      PlmCtrlSetFields::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PlmCtrlSetFields::ENABLE;
    using VSYNC_OVERRIDE = PlmCtrlSetFields::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PlmCtrlSetFields::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PlmCtrlSetFields::VALID_OVERRIDE;
    using POLARITY = PlmCtrlSetFields::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PlmCtrlClrFields {
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
  };  // struct PlmCtrlClrFields

  struct PLM_CTRL_CLR : ftl::mmio::Register<
      0x40818028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PlmCtrlClrFields::ENABLE,
      PlmCtrlClrFields::VSYNC_OVERRIDE,
      PlmCtrlClrFields::HSYNC_OVERRIDE,
      PlmCtrlClrFields::VALID_OVERRIDE,
      PlmCtrlClrFields::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PlmCtrlClrFields::ENABLE;
    using VSYNC_OVERRIDE = PlmCtrlClrFields::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PlmCtrlClrFields::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PlmCtrlClrFields::VALID_OVERRIDE;
    using POLARITY = PlmCtrlClrFields::POLARITY;
  };

  // Pixel Link Master(PLM) Control Register
  struct PlmCtrlTogFields {
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
  };  // struct PlmCtrlTogFields

  struct PLM_CTRL_TOG : ftl::mmio::Register<
      0x4081802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PlmCtrlTogFields::ENABLE,
      PlmCtrlTogFields::VSYNC_OVERRIDE,
      PlmCtrlTogFields::HSYNC_OVERRIDE,
      PlmCtrlTogFields::VALID_OVERRIDE,
      PlmCtrlTogFields::POLARITY,
      ftl::mmio::Reserved<27, 5>> {
    using ENABLE = PlmCtrlTogFields::ENABLE;
    using VSYNC_OVERRIDE = PlmCtrlTogFields::VSYNC_OVERRIDE;
    using HSYNC_OVERRIDE = PlmCtrlTogFields::HSYNC_OVERRIDE;
    using VALID_OVERRIDE = PlmCtrlTogFields::VALID_OVERRIDE;
    using POLARITY = PlmCtrlTogFields::POLARITY;
  };

  // YUV420 Control Register
  struct Yuv420CtrlFields {
    enum class eFST_LN_DATA_TYPE : std::uint32_t {
      // Odd (default)
      eODD = 0,
      // Even
      eEVEN = 1,
    };

    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, eFST_LN_DATA_TYPE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Yuv420CtrlFields

  struct YUV420_CTRL : ftl::mmio::Register<
      0x40818030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Yuv420CtrlFields::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using eFST_LN_DATA_TYPE = Yuv420CtrlFields::eFST_LN_DATA_TYPE;
    using FST_LN_DATA_TYPE = Yuv420CtrlFields::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct Yuv420CtrlSetFields {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Yuv420CtrlSetFields

  struct YUV420_CTRL_SET : ftl::mmio::Register<
      0x40818034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Yuv420CtrlSetFields::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = Yuv420CtrlSetFields::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct Yuv420CtrlClrFields {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Yuv420CtrlClrFields

  struct YUV420_CTRL_CLR : ftl::mmio::Register<
      0x40818038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Yuv420CtrlClrFields::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = Yuv420CtrlClrFields::FST_LN_DATA_TYPE;
  };

  // YUV420 Control Register
  struct Yuv420CtrlTogFields {
    // Data type of First Line
    using FST_LN_DATA_TYPE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Yuv420CtrlTogFields

  struct YUV420_CTRL_TOG : ftl::mmio::Register<
      0x4081803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Yuv420CtrlTogFields::FST_LN_DATA_TYPE,
      ftl::mmio::Reserved<31, 1>> {
    using FST_LN_DATA_TYPE = Yuv420CtrlTogFields::FST_LN_DATA_TYPE;
  };

  // Data Disable Register
  struct CfgDtDisableFields {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgDtDisableFields

  struct CFG_DT_DISABLE : ftl::mmio::Register<
      0x40818050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDtDisableFields::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using VALUE = CfgDtDisableFields::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CfgDtDisableSetFields {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct CfgDtDisableSetFields

  struct CFG_DT_DISABLE_SET : ftl::mmio::Register<
      0x40818054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDtDisableSetFields::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CfgDtDisableSetFields::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CfgDtDisableClrFields {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CfgDtDisableClrFields

  struct CFG_DT_DISABLE_CLR : ftl::mmio::Register<
      0x40818058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDtDisableClrFields::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CfgDtDisableClrFields::CFG_DT_DISABLE;
  };

  // Data Disable Register
  struct CfgDtDisableTogFields {
    // Data Type Disable
    using CFG_DT_DISABLE = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct CfgDtDisableTogFields

  struct CFG_DT_DISABLE_TOG : ftl::mmio::Register<
      0x4081805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDtDisableTogFields::CFG_DT_DISABLE,
      ftl::mmio::Reserved<8, 24>> {
    using CFG_DT_DISABLE = CfgDtDisableTogFields::CFG_DT_DISABLE;
  };

  // MIPI DSI Control Register
  struct MipiDsiCtrlFields {
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
  };  // struct MipiDsiCtrlFields

  struct MIPI_DSI_CTRL : ftl::mmio::Register<
      0x40818070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MipiDsiCtrlFields::DPI_SD,
      MipiDsiCtrlFields::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using eDPI_SD = MipiDsiCtrlFields::eDPI_SD;
    using eDPI_CM = MipiDsiCtrlFields::eDPI_CM;
    using DPI_SD = MipiDsiCtrlFields::DPI_SD;
    using DPI_CM = MipiDsiCtrlFields::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MipiDsiCtrlSetFields {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct MipiDsiCtrlSetFields

  struct MIPI_DSI_CTRL_SET : ftl::mmio::Register<
      0x40818074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MipiDsiCtrlSetFields::DPI_SD,
      MipiDsiCtrlSetFields::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MipiDsiCtrlSetFields::DPI_SD;
    using DPI_CM = MipiDsiCtrlSetFields::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MipiDsiCtrlClrFields {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct MipiDsiCtrlClrFields

  struct MIPI_DSI_CTRL_CLR : ftl::mmio::Register<
      0x40818078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MipiDsiCtrlClrFields::DPI_SD,
      MipiDsiCtrlClrFields::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MipiDsiCtrlClrFields::DPI_SD;
    using DPI_CM = MipiDsiCtrlClrFields::DPI_CM;
  };

  // MIPI DSI Control Register
  struct MipiDsiCtrlTogFields {
    // Shut Down - Control to shutdown display (type 4 only)
    using DPI_SD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Color Mode control
    using DPI_CM = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct MipiDsiCtrlTogFields

  struct MIPI_DSI_CTRL_TOG : ftl::mmio::Register<
      0x4081807Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MipiDsiCtrlTogFields::DPI_SD,
      MipiDsiCtrlTogFields::DPI_CM,
      ftl::mmio::Reserved<30, 2>> {
    using DPI_SD = MipiDsiCtrlTogFields::DPI_SD;
    using DPI_CM = MipiDsiCtrlTogFields::DPI_CM;
  };

};

}  // namespace regs