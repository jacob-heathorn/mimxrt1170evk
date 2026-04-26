#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dsi_host {

// CFG_NUM_LANES
struct CFG_NUM_LANES_fields_ {
  enum class eNUM_LANES : std::uint32_t {
    // 1 lane
    eNUM_LANES_0 = 0,
    // 2 lanes
    eNUM_LANES_1 = 1,
  };

  // Sets the number of active lanes that are to be used for transmitting data.
  using NUM_LANES = ftl::mmio::Field<2, 0, eNUM_LANES, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_NUM_LANES_fields_

struct CFG_NUM_LANES : ftl::mmio::Register<
    0x4080C000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_NUM_LANES_fields_::NUM_LANES,
    ftl::mmio::Reserved<30, 2>> {
  using eNUM_LANES = CFG_NUM_LANES_fields_::eNUM_LANES;
  using NUM_LANES = CFG_NUM_LANES_fields_::NUM_LANES;
};

// CFG_NONCONTINUOUS_CLK
struct CFG_NONCONTINUOUS_CLK_fields_ {
  enum class eCLK_MODE : std::uint32_t {
    // Continuous high speed clock
    eCLK_MODE_0 = 0,
    // Non-Continuous high speed clock
    eCLK_MODE_1 = 1,
  };

  // Sets the Host Controller into non-continuous MIPI clock mode. When in non-continuous clock mode, the high speed clock will transition into low power mode between transmissions.
  using CLK_MODE = ftl::mmio::Field<1, 0, eCLK_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_NONCONTINUOUS_CLK_fields_

struct CFG_NONCONTINUOUS_CLK : ftl::mmio::Register<
    0x4080C004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_NONCONTINUOUS_CLK_fields_::CLK_MODE,
    ftl::mmio::Reserved<31, 1>> {
  using eCLK_MODE = CFG_NONCONTINUOUS_CLK_fields_::eCLK_MODE;
  using CLK_MODE = CFG_NONCONTINUOUS_CLK_fields_::CLK_MODE;
};

// CFG_T_PRE
struct CFG_T_PRE_fields_ {
  // Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after enabling the clock lane for HS operation before enabling the data lanes for HS operation. This setting represents the TCLK-PRE DPHY timing parameter. The minimum value for this port is 1.
  using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_T_PRE_fields_

struct CFG_T_PRE : ftl::mmio::Register<
    0x4080C008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_T_PRE_fields_::NUM_PERIODS,
    ftl::mmio::Reserved<24, 8>> {
  using NUM_PERIODS = CFG_T_PRE_fields_::NUM_PERIODS;
};

// CFG_T_POST
struct CFG_T_POST_fields_ {
  // Sets the number of byte clock periods ('clk_byte' input) to wait before putting the clock lane into LP mode after the data lanes have been detected to be in Stop State. This setting represents the DPHY timing parameters TLPX + TCLK-PREPARE + TCLK-ZERO + TCLK-PRE requirement for the clock lane before the data lane is allowed to change from LP11 to start a high speed transmission. The minimum value for this port is 1.
  using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_T_POST_fields_

struct CFG_T_POST : ftl::mmio::Register<
    0x4080C00Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_T_POST_fields_::NUM_PERIODS,
    ftl::mmio::Reserved<24, 8>> {
  using NUM_PERIODS = CFG_T_POST_fields_::NUM_PERIODS;
};

// CFG_TX_GAP
struct CFG_TX_GAP_fields_ {
  // Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after the clock lane has been put into LP mode before enabling the clock lane for HS mode again. This setting represents the THS-EXIT DPHY timing parameter. The minimum value for this port is 1.
  using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_TX_GAP_fields_

struct CFG_TX_GAP : ftl::mmio::Register<
    0x4080C010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_TX_GAP_fields_::NUM_PERIODS,
    ftl::mmio::Reserved<24, 8>> {
  using NUM_PERIODS = CFG_TX_GAP_fields_::NUM_PERIODS;
};

// CFG_AUTOINSERT_EOTP
struct CFG_AUTOINSERT_EOTP_fields_ {
  enum class eAUTOINSERT : std::uint32_t {
    // EoTp is not automatically inserted
    eNOT_AUTO = 0,
    // EoTp is automatically inserted
    eAUTO = 1,
  };

  // Enables the Host Controller to automatically insert an EoTp short packet when switching from HS to LP mode.
  using AUTOINSERT = ftl::mmio::Field<1, 0, eAUTOINSERT, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_AUTOINSERT_EOTP_fields_

struct CFG_AUTOINSERT_EOTP : ftl::mmio::Register<
    0x4080C014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_AUTOINSERT_EOTP_fields_::AUTOINSERT,
    ftl::mmio::Reserved<31, 1>> {
  using eAUTOINSERT = CFG_AUTOINSERT_EOTP_fields_::eAUTOINSERT;
  using AUTOINSERT = CFG_AUTOINSERT_EOTP_fields_::AUTOINSERT;
};

// CFG_EXTRA_CMDS_AFTER_EOTP
struct CFG_EXTRA_CMDS_AFTER_EOTP_fields_ {
  // Configures the DSI Host Controller to send extra End Of Transmission Packets after the end of a packet. The value is the number of extra EOTP packets sent.
  using EXTRA_EOTP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_EXTRA_CMDS_AFTER_EOTP_fields_

struct CFG_EXTRA_CMDS_AFTER_EOTP : ftl::mmio::Register<
    0x4080C018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_EXTRA_CMDS_AFTER_EOTP_fields_::EXTRA_EOTP,
    ftl::mmio::Reserved<24, 8>> {
  using EXTRA_EOTP = CFG_EXTRA_CMDS_AFTER_EOTP_fields_::EXTRA_EOTP;
};

// CFG_HTX_TO_COUNT
struct CFG_HTX_TO_COUNT_fields_ {
  // Sets the value of the DSI Host High Speed TX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
  using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_HTX_TO_COUNT_fields_

struct CFG_HTX_TO_COUNT : ftl::mmio::Register<
    0x4080C01Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_HTX_TO_COUNT_fields_::COUNT,
    ftl::mmio::Reserved<8, 24>> {
  using COUNT = CFG_HTX_TO_COUNT_fields_::COUNT;
};

// CFG_LRX_H_TO_COUNT
struct CFG_LRX_H_TO_COUNT_fields_ {
  // Sets the value of the DSI Host low power RX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
  using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_LRX_H_TO_COUNT_fields_

struct CFG_LRX_H_TO_COUNT : ftl::mmio::Register<
    0x4080C020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_LRX_H_TO_COUNT_fields_::COUNT,
    ftl::mmio::Reserved<8, 24>> {
  using COUNT = CFG_LRX_H_TO_COUNT_fields_::COUNT;
};

// CFG_BTA_H_TO_COUNT
struct CFG_BTA_H_TO_COUNT_fields_ {
  // Sets the value of the DSI Host Bus Turn Around (BTA) timeout in clk_byte clock periods that once reached will initiate a timeout error.
  using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_BTA_H_TO_COUNT_fields_

struct CFG_BTA_H_TO_COUNT : ftl::mmio::Register<
    0x4080C024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_BTA_H_TO_COUNT_fields_::COUNT,
    ftl::mmio::Reserved<8, 24>> {
  using COUNT = CFG_BTA_H_TO_COUNT_fields_::COUNT;
};

// CFG_TWAKEUP
struct CFG_TWAKEUP_fields_ {
  // DPHY Twakeup timing parameter. Sets the number of clk_esc clock periods to keep a clock or data lane in Mark-1 state after exiting ULPS. The MIPI DPHY spec requires a minimum of 1ms in Mark-1 state after leaving ULPS.
  using NUM_PERIODS = ftl::mmio::Field<19, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CFG_TWAKEUP_fields_

struct CFG_TWAKEUP : ftl::mmio::Register<
    0x4080C028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CFG_TWAKEUP_fields_::NUM_PERIODS,
    ftl::mmio::Reserved<13, 19>> {
  using NUM_PERIODS = CFG_TWAKEUP_fields_::NUM_PERIODS;
};

// CFG_STATUS_OUT
struct CFG_STATUS_OUT_fields_ {
  // Status Register
  using STATUS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct CFG_STATUS_OUT_fields_

struct CFG_STATUS_OUT : ftl::mmio::Register<
    0x4080C02Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    CFG_STATUS_OUT_fields_::STATUS> {
  using STATUS = CFG_STATUS_OUT_fields_::STATUS;
};

// RX_ERROR_STATUS
struct RX_ERROR_STATUS_fields_ {
  // Status Register for Host receive error detection, ECC errors, CRC errors and for timeout indicators
  using STATUS = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct RX_ERROR_STATUS_fields_

struct RX_ERROR_STATUS : ftl::mmio::Register<
    0x4080C030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    RX_ERROR_STATUS_fields_::STATUS,
    ftl::mmio::Reserved<21, 11>> {
  using STATUS = RX_ERROR_STATUS_fields_::STATUS;
};

}  // namespace regs::dsi_host