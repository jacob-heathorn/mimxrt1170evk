#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct MipiCsi2rx {
  // Lane Configuration Register
  struct CFG_NUM_LANES_fields_ {
    enum class eCFG_NUM_LANES : std::uint32_t {
      // 1 Lane
      eONE_LANE = 0,
      // 2 Lane
      eTWO_LANE = 1,
    };

    // This field is used to set the number of active lanes for receiving data.
    using CFG_NUM_LANES = ftl::mmio::Field<2, 0, eCFG_NUM_LANES, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_NUM_LANES_fields_

  struct CFG_NUM_LANES : ftl::mmio::Register<
      0x40810100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_NUM_LANES_fields_::CFG_NUM_LANES,
      ftl::mmio::Reserved<30, 2>> {
    using eCFG_NUM_LANES = CFG_NUM_LANES_fields_::eCFG_NUM_LANES;
    using VALUE = CFG_NUM_LANES_fields_::CFG_NUM_LANES;
  };

  // Disable Data Lane Register
  struct CFG_DISABLE_DATA_LANES_fields_ {
    // Used to disable data lanes.
    using CFG_DISABLE_DATA_LANES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_DISABLE_DATA_LANES_fields_

  struct CFG_DISABLE_DATA_LANES : ftl::mmio::Register<
      0x40810104u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      CFG_DISABLE_DATA_LANES_fields_::CFG_DISABLE_DATA_LANES,
      ftl::mmio::Reserved<28, 4>> {
    using VALUE = CFG_DISABLE_DATA_LANES_fields_::CFG_DISABLE_DATA_LANES;
  };

  // ECC and CRC Error Status Register
  struct BIT_ERR_fields_ {
    // This field shows the error status of ECC and CRC
    using BIT_ERR = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct BIT_ERR_fields_

  struct BIT_ERR : ftl::mmio::Register<
      0x40810108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      BIT_ERR_fields_::BIT_ERR,
      ftl::mmio::Reserved<22, 10>> {
    using VALUE = BIT_ERR_fields_::BIT_ERR;
  };

  // IRQ Status Register
  struct IRQ_STATUS_fields_ {
    // This field shows the IRQ status
    using IRQ_STATUS = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IRQ_STATUS_fields_

  struct IRQ_STATUS : ftl::mmio::Register<
      0x4081010Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IRQ_STATUS_fields_::IRQ_STATUS,
      ftl::mmio::Reserved<23, 9>> {
    using VALUE = IRQ_STATUS_fields_::IRQ_STATUS;
  };

  // IRQ Mask Setting Register
  struct IRQ_MASK_fields_ {
    // This field shows the IRQ Mask setting
    using IRQ_MASK = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IRQ_MASK_fields_

  struct IRQ_MASK : ftl::mmio::Register<
      0x40810110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IRQ_MASK_fields_::IRQ_MASK,
      ftl::mmio::Reserved<23, 9>> {
    using VALUE = IRQ_MASK_fields_::IRQ_MASK;
  };

  // Ultra Low Power State (ULPS) Status Register
  struct ULPS_STATUS_fields_ {
    // This field shows the status of Rx D-PHY ULPS state
    using STATUS = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ULPS_STATUS_fields_

  struct ULPS_STATUS : ftl::mmio::Register<
      0x40810114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ULPS_STATUS_fields_::STATUS,
      ftl::mmio::Reserved<22, 10>> {
    using STATUS = ULPS_STATUS_fields_::STATUS;
  };

  // ERRSotHS Status Register
  struct PPI_ERRSOT_HS_fields_ {
    // This field indicates PPI ErrSotHS captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PPI_ERRSOT_HS_fields_

  struct PPI_ERRSOT_HS : ftl::mmio::Register<
      0x40810118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PPI_ERRSOT_HS_fields_::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PPI_ERRSOT_HS_fields_::STATUS;
  };

  // ErrSotSync HS Status Register
  struct PPI_ERRSOTSYNC_HS_fields_ {
    // This field indicates PPI ErrSotSync_HS captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PPI_ERRSOTSYNC_HS_fields_

  struct PPI_ERRSOTSYNC_HS : ftl::mmio::Register<
      0x4081011Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PPI_ERRSOTSYNC_HS_fields_::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PPI_ERRSOTSYNC_HS_fields_::STATUS;
  };

  // ErrEsc Status Register
  struct PPI_ERRESC_fields_ {
    // This field indicates PPI ErrEsc captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PPI_ERRESC_fields_

  struct PPI_ERRESC : ftl::mmio::Register<
      0x40810120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PPI_ERRESC_fields_::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PPI_ERRESC_fields_::STATUS;
  };

  // ErrSyncEsc Status Register
  struct PPI_ERRSYNCESC_fields_ {
    // This field indicates PPI ErrSyncEsc captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PPI_ERRSYNCESC_fields_

  struct PPI_ERRSYNCESC : ftl::mmio::Register<
      0x40810124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PPI_ERRSYNCESC_fields_::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PPI_ERRSYNCESC_fields_::STATUS;
  };

  // ErrControl Status Register
  struct PPI_ERRCONTROL_fields_ {
    // This field indicates PPI ErrControl captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PPI_ERRCONTROL_fields_

  struct PPI_ERRCONTROL : ftl::mmio::Register<
      0x40810128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PPI_ERRCONTROL_fields_::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PPI_ERRCONTROL_fields_::STATUS;
  };

  // Disable Payload 0 Register
  struct CFG_DISABLE_PAYLOAD_0_fields_ {
    // Null
    using DIS_PAYLOAD_NULL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Blank
    using DIS_PAYLOAD_BLANK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Embedded
    using DIS_PAYLOAD_EMBEDDED = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Legacy YUV 420 8 bit
    using DIS_PAYLOAD_YUV420 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // YUV422 8 bit
    using DIS_PAYLOAD_YUV422_8BIT = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RGB444
    using DIS_PAYLOAD_RGB444 = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RGB555
    using DIS_PAYLOAD_RGB555 = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RGB565
    using DIS_PAYLOAD_RGB565 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RGB666
    using DIS_PAYLOAD_RGB666 = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // RGB888
    using DIS_PAYLOAD_RGB888 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_DISABLE_PAYLOAD_0_fields_

  struct CFG_DISABLE_PAYLOAD_0 : ftl::mmio::Register<
      0x4081012Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_NULL,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_BLANK,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_EMBEDDED,
      ftl::mmio::Reserved<7, 3>,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_YUV420,
      ftl::mmio::Reserved<3, 11>,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_YUV422_8BIT,
      ftl::mmio::Reserved<1, 15>,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB444,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB555,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB565,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB666,
      CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB888,
      ftl::mmio::Reserved<11, 21>> {
    using DIS_PAYLOAD_NULL = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_NULL;
    using DIS_PAYLOAD_BLANK = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_BLANK;
    using DIS_PAYLOAD_EMBEDDED = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_EMBEDDED;
    using DIS_PAYLOAD_YUV420 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_YUV420;
    using DIS_PAYLOAD_YUV422_8BIT = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_YUV422_8BIT;
    using DIS_PAYLOAD_RGB444 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB444;
    using DIS_PAYLOAD_RGB555 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB555;
    using DIS_PAYLOAD_RGB565 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB565;
    using DIS_PAYLOAD_RGB666 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB666;
    using DIS_PAYLOAD_RGB888 = CFG_DISABLE_PAYLOAD_0_fields_::DIS_PAYLOAD_RGB888;
  };

  // Disable Payload 1 Register
  struct CFG_DISABLE_PAYLOAD_1_fields_ {
    // User defined type 0x31
    using DIS_PAYLOAD_UDEF_30 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x32
    using DIS_PAYLOAD_UDEF_31 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x33
    using DIS_PAYLOAD_UDEF_32 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x34
    using DIS_PAYLOAD_UDEF_33 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x35
    using DIS_PAYLOAD_UDEF_34 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x35
    using DIS_PAYLOAD_UDEF_35 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x36
    using DIS_PAYLOAD_UDEF_36 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // User defined type 0x37
    using DIS_PAYLOAD_UDEF_37 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Unsupported Data Types
    using DIS_PAYLOAD_UNSUPPORTED = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CFG_DISABLE_PAYLOAD_1_fields_

  struct CFG_DISABLE_PAYLOAD_1 : ftl::mmio::Register<
      0x40810130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_30,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_31,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_32,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_33,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_34,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_35,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_36,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_37,
      ftl::mmio::Reserved<8, 8>,
      CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UNSUPPORTED,
      ftl::mmio::Reserved<15, 17>> {
    using DIS_PAYLOAD_UDEF_30 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_30;
    using DIS_PAYLOAD_UDEF_31 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_31;
    using DIS_PAYLOAD_UDEF_32 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_32;
    using DIS_PAYLOAD_UDEF_33 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_33;
    using DIS_PAYLOAD_UDEF_34 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_34;
    using DIS_PAYLOAD_UDEF_35 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_35;
    using DIS_PAYLOAD_UDEF_36 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_36;
    using DIS_PAYLOAD_UDEF_37 = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UDEF_37;
    using DIS_PAYLOAD_UNSUPPORTED = CFG_DISABLE_PAYLOAD_1_fields_::DIS_PAYLOAD_UNSUPPORTED;
  };

};

}  // namespace regs