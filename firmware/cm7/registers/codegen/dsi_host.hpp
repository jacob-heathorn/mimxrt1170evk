#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct DsiHost {
  // CFG_NUM_LANES
  struct CfgNumLanesFields {
    enum class eNUM_LANES : std::uint32_t {
      // 1 lane
      eNUM_LANES_0 = 0,
      // 2 lanes
      eNUM_LANES_1 = 1,
    };

    // Sets the number of active lanes that are to be used for transmitting data.
    using NUM_LANES = ftl::mmio::Field<2, 0, eNUM_LANES, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgNumLanesFields

  struct CFG_NUM_LANES : ftl::mmio::Register<
      0x4080C000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgNumLanesFields::NUM_LANES,
      ftl::mmio::Reserved<30, 2>> {
    using eNUM_LANES = CfgNumLanesFields::eNUM_LANES;
    using NUM_LANES = CfgNumLanesFields::NUM_LANES;
  };

  // CFG_NONCONTINUOUS_CLK
  struct CfgNoncontinuousClkFields {
    enum class eCLK_MODE : std::uint32_t {
      // Continuous high speed clock
      eCLK_MODE_0 = 0,
      // Non-Continuous high speed clock
      eCLK_MODE_1 = 1,
    };

    // Sets the Host Controller into non-continuous MIPI clock mode. When in non-continuous clock mode, the high speed clock will transition into low power mode between transmissions.
    using CLK_MODE = ftl::mmio::Field<1, 0, eCLK_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgNoncontinuousClkFields

  struct CFG_NONCONTINUOUS_CLK : ftl::mmio::Register<
      0x4080C004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgNoncontinuousClkFields::CLK_MODE,
      ftl::mmio::Reserved<31, 1>> {
    using eCLK_MODE = CfgNoncontinuousClkFields::eCLK_MODE;
    using CLK_MODE = CfgNoncontinuousClkFields::CLK_MODE;
  };

  // CFG_T_PRE
  struct CfgTPreFields {
    // Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after enabling the clock lane for HS operation before enabling the data lanes for HS operation. This setting represents the TCLK-PRE DPHY timing parameter. The minimum value for this port is 1.
    using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgTPreFields

  struct CFG_T_PRE : ftl::mmio::Register<
      0x4080C008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgTPreFields::NUM_PERIODS,
      ftl::mmio::Reserved<24, 8>> {
    using NUM_PERIODS = CfgTPreFields::NUM_PERIODS;
  };

  // CFG_T_POST
  struct CfgTPostFields {
    // Sets the number of byte clock periods ('clk_byte' input) to wait before putting the clock lane into LP mode after the data lanes have been detected to be in Stop State. This setting represents the DPHY timing parameters TLPX + TCLK-PREPARE + TCLK-ZERO + TCLK-PRE requirement for the clock lane before the data lane is allowed to change from LP11 to start a high speed transmission. The minimum value for this port is 1.
    using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgTPostFields

  struct CFG_T_POST : ftl::mmio::Register<
      0x4080C00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgTPostFields::NUM_PERIODS,
      ftl::mmio::Reserved<24, 8>> {
    using NUM_PERIODS = CfgTPostFields::NUM_PERIODS;
  };

  // CFG_TX_GAP
  struct CfgTxGapFields {
    // Sets the number of byte clock periods ('clk_byte' input) that the controller will wait after the clock lane has been put into LP mode before enabling the clock lane for HS mode again. This setting represents the THS-EXIT DPHY timing parameter. The minimum value for this port is 1.
    using NUM_PERIODS = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgTxGapFields

  struct CFG_TX_GAP : ftl::mmio::Register<
      0x4080C010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgTxGapFields::NUM_PERIODS,
      ftl::mmio::Reserved<24, 8>> {
    using NUM_PERIODS = CfgTxGapFields::NUM_PERIODS;
  };

  // CFG_AUTOINSERT_EOTP
  struct CfgAutoinsertEotpFields {
    enum class eAUTOINSERT : std::uint32_t {
      // EoTp is not automatically inserted
      eNOT_AUTO = 0,
      // EoTp is automatically inserted
      eAUTO = 1,
    };

    // Enables the Host Controller to automatically insert an EoTp short packet when switching from HS to LP mode.
    using AUTOINSERT = ftl::mmio::Field<1, 0, eAUTOINSERT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgAutoinsertEotpFields

  struct CFG_AUTOINSERT_EOTP : ftl::mmio::Register<
      0x4080C014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgAutoinsertEotpFields::AUTOINSERT,
      ftl::mmio::Reserved<31, 1>> {
    using eAUTOINSERT = CfgAutoinsertEotpFields::eAUTOINSERT;
    using AUTOINSERT = CfgAutoinsertEotpFields::AUTOINSERT;
  };

  // CFG_EXTRA_CMDS_AFTER_EOTP
  struct CfgExtraCmdsAfterEotpFields {
    // Configures the DSI Host Controller to send extra End Of Transmission Packets after the end of a packet. The value is the number of extra EOTP packets sent.
    using EXTRA_EOTP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgExtraCmdsAfterEotpFields

  struct CFG_EXTRA_CMDS_AFTER_EOTP : ftl::mmio::Register<
      0x4080C018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgExtraCmdsAfterEotpFields::EXTRA_EOTP,
      ftl::mmio::Reserved<24, 8>> {
    using EXTRA_EOTP = CfgExtraCmdsAfterEotpFields::EXTRA_EOTP;
  };

  // CFG_HTX_TO_COUNT
  struct CfgHtxToCountFields {
    // Sets the value of the DSI Host High Speed TX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
    using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgHtxToCountFields

  struct CFG_HTX_TO_COUNT : ftl::mmio::Register<
      0x4080C01Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgHtxToCountFields::COUNT,
      ftl::mmio::Reserved<8, 24>> {
    using COUNT = CfgHtxToCountFields::COUNT;
  };

  // CFG_LRX_H_TO_COUNT
  struct CfgLrxHToCountFields {
    // Sets the value of the DSI Host low power RX timeout count in clk_byte clock periods that once reached will initiate a timeout error and follow the recovery procedure documented in the DSI specification.
    using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgLrxHToCountFields

  struct CFG_LRX_H_TO_COUNT : ftl::mmio::Register<
      0x4080C020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgLrxHToCountFields::COUNT,
      ftl::mmio::Reserved<8, 24>> {
    using COUNT = CfgLrxHToCountFields::COUNT;
  };

  // CFG_BTA_H_TO_COUNT
  struct CfgBtaHToCountFields {
    // Sets the value of the DSI Host Bus Turn Around (BTA) timeout in clk_byte clock periods that once reached will initiate a timeout error.
    using COUNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgBtaHToCountFields

  struct CFG_BTA_H_TO_COUNT : ftl::mmio::Register<
      0x4080C024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgBtaHToCountFields::COUNT,
      ftl::mmio::Reserved<8, 24>> {
    using COUNT = CfgBtaHToCountFields::COUNT;
  };

  // CFG_TWAKEUP
  struct CfgTwakeupFields {
    // DPHY Twakeup timing parameter. Sets the number of clk_esc clock periods to keep a clock or data lane in Mark-1 state after exiting ULPS. The MIPI DPHY spec requires a minimum of 1ms in Mark-1 state after leaving ULPS.
    using NUM_PERIODS = ftl::mmio::Field<19, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgTwakeupFields

  struct CFG_TWAKEUP : ftl::mmio::Register<
      0x4080C028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgTwakeupFields::NUM_PERIODS,
      ftl::mmio::Reserved<13, 19>> {
    using NUM_PERIODS = CfgTwakeupFields::NUM_PERIODS;
  };

  // CFG_STATUS_OUT
  struct CfgStatusOutFields {
    // Status Register
    using STATUS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CfgStatusOutFields

  struct CFG_STATUS_OUT : ftl::mmio::Register<
      0x4080C02Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      CfgStatusOutFields::STATUS> {
    using STATUS = CfgStatusOutFields::STATUS;
  };

  // RX_ERROR_STATUS
  struct RxErrorStatusFields {
    // Status Register for Host receive error detection, ECC errors, CRC errors and for timeout indicators
    using STATUS = ftl::mmio::Field<11, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RxErrorStatusFields

  struct RX_ERROR_STATUS : ftl::mmio::Register<
      0x4080C030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      RxErrorStatusFields::STATUS,
      ftl::mmio::Reserved<21, 11>> {
    using STATUS = RxErrorStatusFields::STATUS;
  };

};

}  // namespace regs