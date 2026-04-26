#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct MipiCsi2rx {
  // Lane Configuration Register
  struct CfgNumLanesFields {
    enum class eCFG_NUM_LANES : std::uint32_t {
      // 1 Lane
      eONE_LANE = 0,
      // 2 Lane
      eTWO_LANE = 1,
    };

    // This field is used to set the number of active lanes for receiving data.
    using CFG_NUM_LANES = ftl::mmio::Field<2, 0, eCFG_NUM_LANES, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgNumLanesFields

  struct CFG_NUM_LANES : ftl::mmio::Register<
      0x40810100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgNumLanesFields::CFG_NUM_LANES,
      ftl::mmio::Reserved<30, 2>> {
    using eCFG_NUM_LANES = CfgNumLanesFields::eCFG_NUM_LANES;
    using VALUE = CfgNumLanesFields::CFG_NUM_LANES;
  };

  // Disable Data Lane Register
  struct CfgDisableDataLanesFields {
    // Used to disable data lanes.
    using CFG_DISABLE_DATA_LANES = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CfgDisableDataLanesFields

  struct CFG_DISABLE_DATA_LANES : ftl::mmio::Register<
      0x40810104u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      CfgDisableDataLanesFields::CFG_DISABLE_DATA_LANES,
      ftl::mmio::Reserved<28, 4>> {
    using VALUE = CfgDisableDataLanesFields::CFG_DISABLE_DATA_LANES;
  };

  // ECC and CRC Error Status Register
  struct BitErrFields {
    // This field shows the error status of ECC and CRC
    using BIT_ERR = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct BitErrFields

  struct BIT_ERR : ftl::mmio::Register<
      0x40810108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      BitErrFields::BIT_ERR,
      ftl::mmio::Reserved<22, 10>> {
    using VALUE = BitErrFields::BIT_ERR;
  };

  // IRQ Status Register
  struct IrqStatusFields {
    // This field shows the IRQ status
    using IRQ_STATUS = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IrqStatusFields

  struct IRQ_STATUS : ftl::mmio::Register<
      0x4081010Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      IrqStatusFields::IRQ_STATUS,
      ftl::mmio::Reserved<23, 9>> {
    using VALUE = IrqStatusFields::IRQ_STATUS;
  };

  // IRQ Mask Setting Register
  struct IrqMaskFields {
    // This field shows the IRQ Mask setting
    using IRQ_MASK = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IrqMaskFields

  struct IRQ_MASK : ftl::mmio::Register<
      0x40810110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IrqMaskFields::IRQ_MASK,
      ftl::mmio::Reserved<23, 9>> {
    using VALUE = IrqMaskFields::IRQ_MASK;
  };

  // Ultra Low Power State (ULPS) Status Register
  struct UlpsStatusFields {
    // This field shows the status of Rx D-PHY ULPS state
    using STATUS = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct UlpsStatusFields

  struct ULPS_STATUS : ftl::mmio::Register<
      0x40810114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      UlpsStatusFields::STATUS,
      ftl::mmio::Reserved<22, 10>> {
    using STATUS = UlpsStatusFields::STATUS;
  };

  // ERRSotHS Status Register
  struct PpiErrsotHsFields {
    // This field indicates PPI ErrSotHS captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PpiErrsotHsFields

  struct PPI_ERRSOT_HS : ftl::mmio::Register<
      0x40810118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PpiErrsotHsFields::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PpiErrsotHsFields::STATUS;
  };

  // ErrSotSync HS Status Register
  struct PpiErrsotsyncHsFields {
    // This field indicates PPI ErrSotSync_HS captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PpiErrsotsyncHsFields

  struct PPI_ERRSOTSYNC_HS : ftl::mmio::Register<
      0x4081011Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PpiErrsotsyncHsFields::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PpiErrsotsyncHsFields::STATUS;
  };

  // ErrEsc Status Register
  struct PpiErrescFields {
    // This field indicates PPI ErrEsc captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PpiErrescFields

  struct PPI_ERRESC : ftl::mmio::Register<
      0x40810120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PpiErrescFields::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PpiErrescFields::STATUS;
  };

  // ErrSyncEsc Status Register
  struct PpiErrsyncescFields {
    // This field indicates PPI ErrSyncEsc captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PpiErrsyncescFields

  struct PPI_ERRSYNCESC : ftl::mmio::Register<
      0x40810124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PpiErrsyncescFields::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PpiErrsyncescFields::STATUS;
  };

  // ErrControl Status Register
  struct PpiErrcontrolFields {
    // This field indicates PPI ErrControl captured status from D-PHY
    using STATUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PpiErrcontrolFields

  struct PPI_ERRCONTROL : ftl::mmio::Register<
      0x40810128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      PpiErrcontrolFields::STATUS,
      ftl::mmio::Reserved<28, 4>> {
    using STATUS = PpiErrcontrolFields::STATUS;
  };

  // Disable Payload 0 Register
  struct CfgDisablePayload0Fields {
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
  };  // struct CfgDisablePayload0Fields

  struct CFG_DISABLE_PAYLOAD_0 : ftl::mmio::Register<
      0x4081012Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDisablePayload0Fields::DIS_PAYLOAD_NULL,
      CfgDisablePayload0Fields::DIS_PAYLOAD_BLANK,
      CfgDisablePayload0Fields::DIS_PAYLOAD_EMBEDDED,
      ftl::mmio::Reserved<7, 3>,
      CfgDisablePayload0Fields::DIS_PAYLOAD_YUV420,
      ftl::mmio::Reserved<3, 11>,
      CfgDisablePayload0Fields::DIS_PAYLOAD_YUV422_8BIT,
      ftl::mmio::Reserved<1, 15>,
      CfgDisablePayload0Fields::DIS_PAYLOAD_RGB444,
      CfgDisablePayload0Fields::DIS_PAYLOAD_RGB555,
      CfgDisablePayload0Fields::DIS_PAYLOAD_RGB565,
      CfgDisablePayload0Fields::DIS_PAYLOAD_RGB666,
      CfgDisablePayload0Fields::DIS_PAYLOAD_RGB888,
      ftl::mmio::Reserved<11, 21>> {
    using DIS_PAYLOAD_NULL = CfgDisablePayload0Fields::DIS_PAYLOAD_NULL;
    using DIS_PAYLOAD_BLANK = CfgDisablePayload0Fields::DIS_PAYLOAD_BLANK;
    using DIS_PAYLOAD_EMBEDDED = CfgDisablePayload0Fields::DIS_PAYLOAD_EMBEDDED;
    using DIS_PAYLOAD_YUV420 = CfgDisablePayload0Fields::DIS_PAYLOAD_YUV420;
    using DIS_PAYLOAD_YUV422_8BIT = CfgDisablePayload0Fields::DIS_PAYLOAD_YUV422_8BIT;
    using DIS_PAYLOAD_RGB444 = CfgDisablePayload0Fields::DIS_PAYLOAD_RGB444;
    using DIS_PAYLOAD_RGB555 = CfgDisablePayload0Fields::DIS_PAYLOAD_RGB555;
    using DIS_PAYLOAD_RGB565 = CfgDisablePayload0Fields::DIS_PAYLOAD_RGB565;
    using DIS_PAYLOAD_RGB666 = CfgDisablePayload0Fields::DIS_PAYLOAD_RGB666;
    using DIS_PAYLOAD_RGB888 = CfgDisablePayload0Fields::DIS_PAYLOAD_RGB888;
  };

  // Disable Payload 1 Register
  struct CfgDisablePayload1Fields {
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
  };  // struct CfgDisablePayload1Fields

  struct CFG_DISABLE_PAYLOAD_1 : ftl::mmio::Register<
      0x40810130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_30,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_31,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_32,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_33,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_34,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_35,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_36,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_37,
      ftl::mmio::Reserved<8, 8>,
      CfgDisablePayload1Fields::DIS_PAYLOAD_UNSUPPORTED,
      ftl::mmio::Reserved<15, 17>> {
    using DIS_PAYLOAD_UDEF_30 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_30;
    using DIS_PAYLOAD_UDEF_31 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_31;
    using DIS_PAYLOAD_UDEF_32 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_32;
    using DIS_PAYLOAD_UDEF_33 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_33;
    using DIS_PAYLOAD_UDEF_34 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_34;
    using DIS_PAYLOAD_UDEF_35 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_35;
    using DIS_PAYLOAD_UDEF_36 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_36;
    using DIS_PAYLOAD_UDEF_37 = CfgDisablePayload1Fields::DIS_PAYLOAD_UDEF_37;
    using DIS_PAYLOAD_UNSUPPORTED = CfgDisablePayload1Fields::DIS_PAYLOAD_UNSUPPORTED;
  };

};

}  // namespace regs