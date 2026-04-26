#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI Host DPI Interface
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dsi_host_dpi_intfc {

// PIXEL_PAYLOAD_SIZE
struct PIXEL_PAYLOAD_SIZE_fields_ {
  // Maximum number of pixels that should be sent as one DSI packet. Recommended to be evenly divisible by the line size (in pixels).
  using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PIXEL_PAYLOAD_SIZE_fields_

struct PIXEL_PAYLOAD_SIZE : ftl::mmio::Register<
    0x4080C200u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PIXEL_PAYLOAD_SIZE_fields_::PAYLOAD_SIZE,
    ftl::mmio::Reserved<16, 16>> {
  using PAYLOAD_SIZE = PIXEL_PAYLOAD_SIZE_fields_::PAYLOAD_SIZE;
};

// PIXEL_FIFO_SEND_LEVEL
struct PIXEL_FIFO_SEND_LEVEL_fields_ {
  // In order to optimize DSI utility, the DPI bridge buffers a certain number of DPI pixels before initiating a DSI packet. This configuration port controls the level at which the DPI Host bridge begins sending pixels.
  using FIFO_SEND_LEVEL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PIXEL_FIFO_SEND_LEVEL_fields_

struct PIXEL_FIFO_SEND_LEVEL : ftl::mmio::Register<
    0x4080C204u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PIXEL_FIFO_SEND_LEVEL_fields_::FIFO_SEND_LEVEL,
    ftl::mmio::Reserved<16, 16>> {
  using FIFO_SEND_LEVEL = PIXEL_FIFO_SEND_LEVEL_fields_::FIFO_SEND_LEVEL;
};

// INTERFACE_COLOR_CODING
struct INTERFACE_COLOR_CODING_fields_ {
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
};  // struct INTERFACE_COLOR_CODING_fields_

struct INTERFACE_COLOR_CODING : ftl::mmio::Register<
    0x4080C208u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INTERFACE_COLOR_CODING_fields_::RGB_CONFIG,
    ftl::mmio::Reserved<29, 3>> {
  using eRGB_CONFIG = INTERFACE_COLOR_CODING_fields_::eRGB_CONFIG;
  using RGB_CONFIG = INTERFACE_COLOR_CODING_fields_::RGB_CONFIG;
};

// PIXEL_FORMAT
struct PIXEL_FORMAT_fields_ {
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
};  // struct PIXEL_FORMAT_fields_

struct PIXEL_FORMAT : ftl::mmio::Register<
    0x4080C20Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PIXEL_FORMAT_fields_::PIXEL_FORMAT,
    ftl::mmio::Reserved<30, 2>> {
  using ePIXEL_FORMAT = PIXEL_FORMAT_fields_::ePIXEL_FORMAT;
  using VALUE = PIXEL_FORMAT_fields_::PIXEL_FORMAT;
};

// VSYNC_POLARITY
struct VSYNC_POLARITY_fields_ {
  enum class eVSYNC_POLARITY : std::uint32_t {
    // active low
    eVSYNC_POLARITY_0 = 0,
    // active high
    eVSYNC_POLARITY_1 = 1,
  };

  // Sets polarity of dpi_vsync_input
  using VSYNC_POLARITY = ftl::mmio::Field<1, 0, eVSYNC_POLARITY, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct VSYNC_POLARITY_fields_

struct VSYNC_POLARITY : ftl::mmio::Register<
    0x4080C210u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    VSYNC_POLARITY_fields_::VSYNC_POLARITY,
    ftl::mmio::Reserved<31, 1>> {
  using eVSYNC_POLARITY = VSYNC_POLARITY_fields_::eVSYNC_POLARITY;
  using VALUE = VSYNC_POLARITY_fields_::VSYNC_POLARITY;
};

// HSYNC_POLARITY
struct HSYNC_POLARITY_fields_ {
  enum class eHSYNC_POLARITY : std::uint32_t {
    // active low
    eHSYNC_POLARITY_0 = 0,
    // active high
    eHSYNC_POLARITY_1 = 1,
  };

  // Sets polarity of dpi_hsync_input
  using HSYNC_POLARITY = ftl::mmio::Field<1, 0, eHSYNC_POLARITY, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HSYNC_POLARITY_fields_

struct HSYNC_POLARITY : ftl::mmio::Register<
    0x4080C214u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HSYNC_POLARITY_fields_::HSYNC_POLARITY,
    ftl::mmio::Reserved<31, 1>> {
  using eHSYNC_POLARITY = HSYNC_POLARITY_fields_::eHSYNC_POLARITY;
  using VALUE = HSYNC_POLARITY_fields_::HSYNC_POLARITY;
};

// VIDEO_MODE
struct VIDEO_MODE_fields_ {
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
};  // struct VIDEO_MODE_fields_

struct VIDEO_MODE : ftl::mmio::Register<
    0x4080C218u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    VIDEO_MODE_fields_::VIDEO_MODE,
    ftl::mmio::Reserved<30, 2>> {
  using eVIDEO_MODE = VIDEO_MODE_fields_::eVIDEO_MODE;
  using VALUE = VIDEO_MODE_fields_::VIDEO_MODE;
};

// HFP
struct HFP_fields_ {
  // Sets the DSI packet payload size, in bytes, of the horizontal front porch blanking packet.
  using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HFP_fields_

struct HFP : ftl::mmio::Register<
    0x4080C21Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HFP_fields_::PAYLOAD_SIZE,
    ftl::mmio::Reserved<16, 16>> {
  using PAYLOAD_SIZE = HFP_fields_::PAYLOAD_SIZE;
};

// HBP
struct HBP_fields_ {
  // Sets the DSI packet payload size, in bytes, of the horizontal back porch blanking packet.
  using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HBP_fields_

struct HBP : ftl::mmio::Register<
    0x4080C220u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HBP_fields_::PAYLOAD_SIZE,
    ftl::mmio::Reserved<16, 16>> {
  using PAYLOAD_SIZE = HBP_fields_::PAYLOAD_SIZE;
};

// HSA
struct HSA_fields_ {
  // Sets the DSI packet payload size, in bytes, of the horizontal sync width filler blanking packet.
  using PAYLOAD_SIZE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HSA_fields_

struct HSA : ftl::mmio::Register<
    0x4080C224u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HSA_fields_::PAYLOAD_SIZE,
    ftl::mmio::Reserved<16, 16>> {
  using PAYLOAD_SIZE = HSA_fields_::PAYLOAD_SIZE;
};

// ENABLE_MULT_PKTS
struct ENABLE_MULT_PKTS_fields_ {
  enum class eENABLE_MULT_PKTS : std::uint32_t {
    // Video Line is sent in a single packet
    eENABLE_MULT_PKTS_0 = 0,
    // Video Line is sent in two packets
    eENABLE_MULT_PKTS_1 = 1,
  };

  // Enable Multiple packets per video line. When enabled, PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of the video line
  using ENABLE_MULT_PKTS = ftl::mmio::Field<1, 0, eENABLE_MULT_PKTS, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENABLE_MULT_PKTS_fields_

struct ENABLE_MULT_PKTS : ftl::mmio::Register<
    0x4080C228u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENABLE_MULT_PKTS_fields_::ENABLE_MULT_PKTS,
    ftl::mmio::Reserved<31, 1>> {
  using eENABLE_MULT_PKTS = ENABLE_MULT_PKTS_fields_::eENABLE_MULT_PKTS;
  using VALUE = ENABLE_MULT_PKTS_fields_::ENABLE_MULT_PKTS;
};

// VBP
struct VBP_fields_ {
  // Sets the number of lines in the vertical back porch.
  using NUM_LINES = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct VBP_fields_

struct VBP : ftl::mmio::Register<
    0x4080C22Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    VBP_fields_::NUM_LINES,
    ftl::mmio::Reserved<24, 8>> {
  using NUM_LINES = VBP_fields_::NUM_LINES;
};

// VFP
struct VFP_fields_ {
  // Sets the number of lines in the vertical front porch.
  using NUM_LINES = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct VFP_fields_

struct VFP : ftl::mmio::Register<
    0x4080C230u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    VFP_fields_::NUM_LINES,
    ftl::mmio::Reserved<24, 8>> {
  using NUM_LINES = VFP_fields_::NUM_LINES;
};

// BLLP_MODE
struct BLLP_MODE_fields_ {
  enum class eLP : std::uint32_t {
    // Blanking packets are sent during BLLP periods
    eLP_0 = 0,
    // LP mode is used for BLLP periods
    eLP_1 = 1,
  };

  // Optimize bllp periods to Low Power mode when possible
  using LP = ftl::mmio::Field<1, 0, eLP, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BLLP_MODE_fields_

struct BLLP_MODE : ftl::mmio::Register<
    0x4080C234u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BLLP_MODE_fields_::LP,
    ftl::mmio::Reserved<31, 1>> {
  using eLP = BLLP_MODE_fields_::eLP;
  using LP = BLLP_MODE_fields_::LP;
};

// USE_NULL_PKT_BLLP
struct USE_NULL_PKT_BLLP_fields_ {
  enum class eNULL : std::uint32_t {
    // Blanking packet used in bllp region 1
    eNULL_0 = 0,
    // Null packet used in bllp region
    eNULL_1 = 1,
  };

  // Selects type of blanking packet to be sent during bllp
  using NULL = ftl::mmio::Field<1, 0, eNULL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USE_NULL_PKT_BLLP_fields_

struct USE_NULL_PKT_BLLP : ftl::mmio::Register<
    0x4080C238u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USE_NULL_PKT_BLLP_fields_::NULL,
    ftl::mmio::Reserved<31, 1>> {
  using eNULL = USE_NULL_PKT_BLLP_fields_::eNULL;
  using NULL = USE_NULL_PKT_BLLP_fields_::NULL;
};

// VACTIVE
struct VACTIVE_fields_ {
  // Sets the number of lines in the vertical active aread.
  using NUM_LINES = ftl::mmio::Field<14, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct VACTIVE_fields_

struct VACTIVE : ftl::mmio::Register<
    0x4080C23Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    VACTIVE_fields_::NUM_LINES,
    ftl::mmio::Reserved<18, 14>> {
  using NUM_LINES = VACTIVE_fields_::NUM_LINES;
};

}  // namespace regs::dsi_host_dpi_intfc