#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI Host DPI Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct DsiHostDpiIntfc {
  // PIXEL_PAYLOAD_SIZE
  struct PixelPayloadSizeFields {
    // Maximum number of pixels that should be sent as one DSI packet. Recommended to be evenly divisible by the line size (in pixels).
    using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PixelPayloadSizeFields

  struct PIXEL_PAYLOAD_SIZE : ftl::mmio::Register<
      0x4080C200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PixelPayloadSizeFields::PAYLOAD_SIZE,
      ftl::mmio::Reserved<16, 16>> {
    using PAYLOAD_SIZE = PixelPayloadSizeFields::PAYLOAD_SIZE;
  };

  // PIXEL_FIFO_SEND_LEVEL
  struct PixelFifoSendLevelFields {
    // In order to optimize DSI utility, the DPI bridge buffers a certain number of DPI pixels before initiating a DSI packet. This configuration port controls the level at which the DPI Host bridge begins sending pixels.
    using FIFO_SEND_LEVEL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PixelFifoSendLevelFields

  struct PIXEL_FIFO_SEND_LEVEL : ftl::mmio::Register<
      0x4080C204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PixelFifoSendLevelFields::FIFO_SEND_LEVEL,
      ftl::mmio::Reserved<16, 16>> {
    using FIFO_SEND_LEVEL = PixelFifoSendLevelFields::FIFO_SEND_LEVEL;
  };

  // INTERFACE_COLOR_CODING
  struct InterfaceColorCodingFields {
    enum class eRGB_CONFIG : std::uint32_t {
      // 16-bit Configuration 1
      eRGB_CONFIG_0 = 0,
      // 16-bit Configuration 2
      eRGB_CONFIG_1 = 1,
      // 16-bit Configuration 3
      eRGB_CONFIG_2 = 2,
      // 18-bit Configuration 1
      eRGB_CONFIG_3 = 3,
      // 18-bit Configuration 2
      eRGB_CONFIG_4 = 4,
      // 24-bit
      eRGB_CONFIG_5 = 5,
    };

    // Sets the distribution of RGB bits within the 24-bit d bus, as specified by the DPI specification.
    using RGB_CONFIG = ftl::mmio::Field<3, 0, eRGB_CONFIG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct InterfaceColorCodingFields

  struct INTERFACE_COLOR_CODING : ftl::mmio::Register<
      0x4080C208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      InterfaceColorCodingFields::RGB_CONFIG,
      ftl::mmio::Reserved<29, 3>> {
    using eRGB_CONFIG = InterfaceColorCodingFields::eRGB_CONFIG;
    using RGB_CONFIG = InterfaceColorCodingFields::RGB_CONFIG;
  };

  // PIXEL_FORMAT
  struct PixelFormatFields {
    enum class ePIXEL_FORMAT : std::uint32_t {
      // 16 bit
      ePIXEL_FORMAT_0 = 0,
      // 18 bit
      ePIXEL_FORMAT_1 = 1,
      // 18 bit loosely packed
      ePIXEL_FORMAT_2 = 2,
      // 24 bit
      ePIXEL_FORMAT_3 = 3,
    };

    // Sets the DSI packet type of the pixels
    using PIXEL_FORMAT = ftl::mmio::Field<2, 0, ePIXEL_FORMAT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PixelFormatFields

  struct PIXEL_FORMAT : ftl::mmio::Register<
      0x4080C20Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PixelFormatFields::PIXEL_FORMAT,
      ftl::mmio::Reserved<30, 2>> {
    using ePIXEL_FORMAT = PixelFormatFields::ePIXEL_FORMAT;
    using VALUE = PixelFormatFields::PIXEL_FORMAT;
  };

  // VSYNC_POLARITY
  struct VsyncPolarityFields {
    enum class eVSYNC_POLARITY : std::uint32_t {
      // active low
      eVSYNC_POLARITY_0 = 0,
      // active high
      eVSYNC_POLARITY_1 = 1,
    };

    // Sets polarity of dpi_vsync_input
    using VSYNC_POLARITY = ftl::mmio::Field<1, 0, eVSYNC_POLARITY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VsyncPolarityFields

  struct VSYNC_POLARITY : ftl::mmio::Register<
      0x4080C210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VsyncPolarityFields::VSYNC_POLARITY,
      ftl::mmio::Reserved<31, 1>> {
    using eVSYNC_POLARITY = VsyncPolarityFields::eVSYNC_POLARITY;
    using VALUE = VsyncPolarityFields::VSYNC_POLARITY;
  };

  // HSYNC_POLARITY
  struct HsyncPolarityFields {
    enum class eHSYNC_POLARITY : std::uint32_t {
      // active low
      eHSYNC_POLARITY_0 = 0,
      // active high
      eHSYNC_POLARITY_1 = 1,
    };

    // Sets polarity of dpi_hsync_input
    using HSYNC_POLARITY = ftl::mmio::Field<1, 0, eHSYNC_POLARITY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HsyncPolarityFields

  struct HSYNC_POLARITY : ftl::mmio::Register<
      0x4080C214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HsyncPolarityFields::HSYNC_POLARITY,
      ftl::mmio::Reserved<31, 1>> {
    using eHSYNC_POLARITY = HsyncPolarityFields::eHSYNC_POLARITY;
    using VALUE = HsyncPolarityFields::HSYNC_POLARITY;
  };

  // VIDEO_MODE
  struct VideoModeFields {
    enum class eVIDEO_MODE : std::uint32_t {
      // Non-Burst mode with Sync Pulses
      eVIDEO_MODE_0 = 0,
      // Non-Burst mode with Sync Events
      eVIDEO_MODE_1 = 1,
      // Burst mode
      eVIDEO_MODE_2 = 2,
    };

    // Select DSI video mode that the host DPI module should generate packets for.
    using VIDEO_MODE = ftl::mmio::Field<2, 0, eVIDEO_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VideoModeFields

  struct VIDEO_MODE : ftl::mmio::Register<
      0x4080C218u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VideoModeFields::VIDEO_MODE,
      ftl::mmio::Reserved<30, 2>> {
    using eVIDEO_MODE = VideoModeFields::eVIDEO_MODE;
    using VALUE = VideoModeFields::VIDEO_MODE;
  };

  // HFP
  struct HfpFields {
    // Sets the DSI packet payload size, in bytes, of the horizontal front porch blanking packet.
    using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HfpFields

  struct HFP : ftl::mmio::Register<
      0x4080C21Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HfpFields::PAYLOAD_SIZE,
      ftl::mmio::Reserved<16, 16>> {
    using PAYLOAD_SIZE = HfpFields::PAYLOAD_SIZE;
  };

  // HBP
  struct HbpFields {
    // Sets the DSI packet payload size, in bytes, of the horizontal back porch blanking packet.
    using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HbpFields

  struct HBP : ftl::mmio::Register<
      0x4080C220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HbpFields::PAYLOAD_SIZE,
      ftl::mmio::Reserved<16, 16>> {
    using PAYLOAD_SIZE = HbpFields::PAYLOAD_SIZE;
  };

  // HSA
  struct HsaFields {
    // Sets the DSI packet payload size, in bytes, of the horizontal sync width filler blanking packet.
    using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HsaFields

  struct HSA : ftl::mmio::Register<
      0x4080C224u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HsaFields::PAYLOAD_SIZE,
      ftl::mmio::Reserved<16, 16>> {
    using PAYLOAD_SIZE = HsaFields::PAYLOAD_SIZE;
  };

  // ENABLE_MULT_PKTS
  struct EnableMultPktsFields {
    enum class eENABLE_MULT_PKTS : std::uint32_t {
      // Video Line is sent in a single packet
      eENABLE_MULT_PKTS_0 = 0,
      // Video Line is sent in two packets
      eENABLE_MULT_PKTS_1 = 1,
    };

    // Enable Multiple packets per video line. When enabled, PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of the video line
    using ENABLE_MULT_PKTS = ftl::mmio::Field<1, 0, eENABLE_MULT_PKTS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnableMultPktsFields

  struct ENABLE_MULT_PKTS : ftl::mmio::Register<
      0x4080C228u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnableMultPktsFields::ENABLE_MULT_PKTS,
      ftl::mmio::Reserved<31, 1>> {
    using eENABLE_MULT_PKTS = EnableMultPktsFields::eENABLE_MULT_PKTS;
    using VALUE = EnableMultPktsFields::ENABLE_MULT_PKTS;
  };

  // VBP
  struct VbpFields {
    // Sets the number of lines in the vertical back porch.
    using NUM_LINES = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VbpFields

  struct VBP : ftl::mmio::Register<
      0x4080C22Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VbpFields::NUM_LINES,
      ftl::mmio::Reserved<24, 8>> {
    using NUM_LINES = VbpFields::NUM_LINES;
  };

  // VFP
  struct VfpFields {
    // Sets the number of lines in the vertical front porch.
    using NUM_LINES = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VfpFields

  struct VFP : ftl::mmio::Register<
      0x4080C230u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VfpFields::NUM_LINES,
      ftl::mmio::Reserved<24, 8>> {
    using NUM_LINES = VfpFields::NUM_LINES;
  };

  // BLLP_MODE
  struct BllpModeFields {
    enum class eLP : std::uint32_t {
      // Blanking packets are sent during BLLP periods
      eLP_0 = 0,
      // LP mode is used for BLLP periods
      eLP_1 = 1,
    };

    // Optimize bllp periods to Low Power mode when possible
    using LP = ftl::mmio::Field<1, 0, eLP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BllpModeFields

  struct BLLP_MODE : ftl::mmio::Register<
      0x4080C234u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      BllpModeFields::LP,
      ftl::mmio::Reserved<31, 1>> {
    using eLP = BllpModeFields::eLP;
    using LP = BllpModeFields::LP;
  };

  // USE_NULL_PKT_BLLP
  struct UseNullPktBllpFields {
    enum class eNULL : std::uint32_t {
      // Blanking packet used in bllp region 1
      eNULL_0 = 0,
      // Null packet used in bllp region
      eNULL_1 = 1,
    };

    // Selects type of blanking packet to be sent during bllp
    using NULL = ftl::mmio::Field<1, 0, eNULL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UseNullPktBllpFields

  struct USE_NULL_PKT_BLLP : ftl::mmio::Register<
      0x4080C238u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      UseNullPktBllpFields::NULL,
      ftl::mmio::Reserved<31, 1>> {
    using eNULL = UseNullPktBllpFields::eNULL;
    using NULL = UseNullPktBllpFields::NULL;
  };

  // VACTIVE
  struct VactiveFields {
    // Sets the number of lines in the vertical active aread.
    using NUM_LINES = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VactiveFields

  struct VACTIVE : ftl::mmio::Register<
      0x4080C23Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VactiveFields::NUM_LINES,
      ftl::mmio::Reserved<18, 14>> {
    using NUM_LINES = VactiveFields::NUM_LINES;
  };

};

}  // namespace regs