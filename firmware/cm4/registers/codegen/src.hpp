#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Src {
  // SRC Control Register
  struct ScrFields {
    enum class eBT_RELEASE_M4 : std::uint32_t {
      // cm4 core reset is asserted
      eBT_RELEASE_M4_0 = 0,
      // cm4 core reset is released
      eBT_RELEASE_M4_1 = 1,
    };

    enum class eBT_RELEASE_M7 : std::uint32_t {
      // cm7 core reset is asserted
      eBT_RELEASE_M7_0 = 0,
      // cm7 core reset is released
      eBT_RELEASE_M7_1 = 1,
    };

    // cm4 core reset will be held until boot core write this bit to 1 to release it.
    using BT_RELEASE_M4 = ftl::mmio::Field<1, 0, eBT_RELEASE_M4, ftl::mmio::RW, ftl::mmio::Normal>;
    // cm7 core reset will be held until boot core write this bit to 1 to release it.
    using BT_RELEASE_M7 = ftl::mmio::Field<1, 1, eBT_RELEASE_M7, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ScrFields

  struct SCR : ftl::mmio::Register<
      0x40C04000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ScrFields::BT_RELEASE_M4,
      ScrFields::BT_RELEASE_M7,
      ftl::mmio::Reserved<30, 2>> {
    using eBT_RELEASE_M4 = ScrFields::eBT_RELEASE_M4;
    using eBT_RELEASE_M7 = ScrFields::eBT_RELEASE_M7;
    using BT_RELEASE_M4 = ScrFields::BT_RELEASE_M4;
    using BT_RELEASE_M7 = ScrFields::BT_RELEASE_M7;
  };

  // SRC Reset Mode Register
  struct SrmrFields {
    enum class eWDOG_RESET_MODE : std::uint32_t {
      // reset system
      eWDOG_RESET_MODE_0 = 0,
      // do not reset anything
      eWDOG_RESET_MODE_3 = 3,
    };

    enum class eWDOG3_RESET_MODE : std::uint32_t {
      // reset system
      eWDOG3_RESET_MODE_0 = 0,
      // do not reset anything
      eWDOG3_RESET_MODE_3 = 3,
    };

    enum class eWDOG4_RESET_MODE : std::uint32_t {
      // reset system
      eWDOG4_RESET_MODE_0 = 0,
      // do not reset anything
      eWDOG4_RESET_MODE_3 = 3,
    };

    enum class eM4LOCKUP_RESET_MODE : std::uint32_t {
      // reset system
      eM4LOCKUP_RESET_MODE_0 = 0,
      // do not reset anything
      eM4LOCKUP_RESET_MODE_3 = 3,
    };

    enum class eM7LOCKUP_RESET_MODE : std::uint32_t {
      // reset system
      eM7LOCKUP_RESET_MODE_0 = 0,
      // do not reset anything
      eM7LOCKUP_RESET_MODE_3 = 3,
    };

    enum class eM4REQ_RESET_MODE : std::uint32_t {
      // reset system
      eM4REQ_RESET_MODE_0 = 0,
      // do not reset anything
      eM4REQ_RESET_MODE_3 = 3,
    };

    enum class eM7REQ_RESET_MODE : std::uint32_t {
      // reset system
      eM7REQ_RESET_MODE_0 = 0,
      // do not reset anything
      eM7REQ_RESET_MODE_3 = 3,
    };

    enum class eTEMPSENSE_RESET_MODE : std::uint32_t {
      // reset system
      eTEMPSENSE_RESET_MODE_0 = 0,
      // do not reset anything
      eTEMPSENSE_RESET_MODE_3 = 3,
    };

    enum class eCSU_RESET_MODE : std::uint32_t {
      // reset system
      eCSU_RESET_MODE_0 = 0,
      // do not reset anything
      eCSU_RESET_MODE_3 = 3,
    };

    enum class eJTAGSW_RESET_MODE : std::uint32_t {
      // reset system
      eJTAGSW_RESET_MODE_0 = 0,
      // do not reset anything
      eJTAGSW_RESET_MODE_3 = 3,
    };

    enum class eOVERVOLT_RESET_MODE : std::uint32_t {
      // reset system
      eOVERVOLT_RESET_MODE_0 = 0,
      // do not reset anything
      eOVERVOLT_RESET_MODE_3 = 3,
    };

    // Wdog reset mode configuration
    using WDOG_RESET_MODE = ftl::mmio::Field<2, 0, eWDOG_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wdog3 reset mode configuration
    using WDOG3_RESET_MODE = ftl::mmio::Field<2, 2, eWDOG3_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wdog4 reset mode configuration
    using WDOG4_RESET_MODE = ftl::mmio::Field<2, 4, eWDOG4_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // M4 core lockup reset mode configuration
    using M4LOCKUP_RESET_MODE = ftl::mmio::Field<2, 6, eM4LOCKUP_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // M7 core lockup reset mode configuration
    using M7LOCKUP_RESET_MODE = ftl::mmio::Field<2, 8, eM7LOCKUP_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // M4 request reset configuration
    using M4REQ_RESET_MODE = ftl::mmio::Field<2, 10, eM4REQ_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // M7 request reset configuration
    using M7REQ_RESET_MODE = ftl::mmio::Field<2, 12, eM7REQ_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tempsense reset mode configuration
    using TEMPSENSE_RESET_MODE = ftl::mmio::Field<2, 14, eTEMPSENSE_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // CSU reset mode configuration
    using CSU_RESET_MODE = ftl::mmio::Field<2, 16, eCSU_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Jtag SW reset mode configuration
    using JTAGSW_RESET_MODE = ftl::mmio::Field<2, 18, eJTAGSW_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Jtag SW reset mode configuration
    using OVERVOLT_RESET_MODE = ftl::mmio::Field<2, 20, eOVERVOLT_RESET_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SrmrFields

  struct SRMR : ftl::mmio::Register<
      0x40C04004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SrmrFields::WDOG_RESET_MODE,
      SrmrFields::WDOG3_RESET_MODE,
      SrmrFields::WDOG4_RESET_MODE,
      SrmrFields::M4LOCKUP_RESET_MODE,
      SrmrFields::M7LOCKUP_RESET_MODE,
      SrmrFields::M4REQ_RESET_MODE,
      SrmrFields::M7REQ_RESET_MODE,
      SrmrFields::TEMPSENSE_RESET_MODE,
      SrmrFields::CSU_RESET_MODE,
      SrmrFields::JTAGSW_RESET_MODE,
      SrmrFields::OVERVOLT_RESET_MODE,
      ftl::mmio::Reserved<10, 22>> {
    using eWDOG_RESET_MODE = SrmrFields::eWDOG_RESET_MODE;
    using eWDOG3_RESET_MODE = SrmrFields::eWDOG3_RESET_MODE;
    using eWDOG4_RESET_MODE = SrmrFields::eWDOG4_RESET_MODE;
    using eM4LOCKUP_RESET_MODE = SrmrFields::eM4LOCKUP_RESET_MODE;
    using eM7LOCKUP_RESET_MODE = SrmrFields::eM7LOCKUP_RESET_MODE;
    using eM4REQ_RESET_MODE = SrmrFields::eM4REQ_RESET_MODE;
    using eM7REQ_RESET_MODE = SrmrFields::eM7REQ_RESET_MODE;
    using eTEMPSENSE_RESET_MODE = SrmrFields::eTEMPSENSE_RESET_MODE;
    using eCSU_RESET_MODE = SrmrFields::eCSU_RESET_MODE;
    using eJTAGSW_RESET_MODE = SrmrFields::eJTAGSW_RESET_MODE;
    using eOVERVOLT_RESET_MODE = SrmrFields::eOVERVOLT_RESET_MODE;
    using WDOG_RESET_MODE = SrmrFields::WDOG_RESET_MODE;
    using WDOG3_RESET_MODE = SrmrFields::WDOG3_RESET_MODE;
    using WDOG4_RESET_MODE = SrmrFields::WDOG4_RESET_MODE;
    using M4LOCKUP_RESET_MODE = SrmrFields::M4LOCKUP_RESET_MODE;
    using M7LOCKUP_RESET_MODE = SrmrFields::M7LOCKUP_RESET_MODE;
    using M4REQ_RESET_MODE = SrmrFields::M4REQ_RESET_MODE;
    using M7REQ_RESET_MODE = SrmrFields::M7REQ_RESET_MODE;
    using TEMPSENSE_RESET_MODE = SrmrFields::TEMPSENSE_RESET_MODE;
    using CSU_RESET_MODE = SrmrFields::CSU_RESET_MODE;
    using JTAGSW_RESET_MODE = SrmrFields::JTAGSW_RESET_MODE;
    using OVERVOLT_RESET_MODE = SrmrFields::OVERVOLT_RESET_MODE;
  };

  // SRC Boot Mode Register 1
  struct Sbmr1Fields {
    // Please see fusemap.
    using BOOT_CFG1 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG2 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG3 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG4 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sbmr1Fields

  struct SBMR1 : ftl::mmio::Register<
      0x40C04008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Sbmr1Fields::BOOT_CFG1,
      Sbmr1Fields::BOOT_CFG2,
      Sbmr1Fields::BOOT_CFG3,
      Sbmr1Fields::BOOT_CFG4> {
    using BOOT_CFG1 = Sbmr1Fields::BOOT_CFG1;
    using BOOT_CFG2 = Sbmr1Fields::BOOT_CFG2;
    using BOOT_CFG3 = Sbmr1Fields::BOOT_CFG3;
    using BOOT_CFG4 = Sbmr1Fields::BOOT_CFG4;
  };

  // SRC Boot Mode Register 2
  struct Sbmr2Fields {
    // SECONFIG[1] shows the state of the SECONFIG[1] fuse
    using SEC_CONFIG = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // BT_FUSE_SEL shows the state of the BT_FUSE_SEL fuse
    using BT_FUSE_SEL = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // BMOD[1:0] shows the latched state of the BOOT_MODE1 and BOOT_MODE0 signals on the rising edge of POR_B
    using BMOD = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sbmr2Fields

  struct SBMR2 : ftl::mmio::Register<
      0x40C0400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Sbmr2Fields::SEC_CONFIG,
      ftl::mmio::Reserved<2, 2>,
      Sbmr2Fields::BT_FUSE_SEL,
      ftl::mmio::Reserved<19, 5>,
      Sbmr2Fields::BMOD,
      ftl::mmio::Reserved<6, 26>> {
    using SEC_CONFIG = Sbmr2Fields::SEC_CONFIG;
    using BT_FUSE_SEL = Sbmr2Fields::BT_FUSE_SEL;
    using BMOD = Sbmr2Fields::BMOD;
  };

  // SRC Reset Status Register
  struct SrsrFields {
    enum class eIPP_RESET_B_M7 : std::uint32_t {
      // Reset is not a result of ipp_reset_b pin.
      eIPP_RESET_B_M7_0 = 0,
      // Reset is a result of ipp_reset_b pin.
      eIPP_RESET_B_M7_1 = 1,
    };

    enum class eM7_REQUEST_M7 : std::uint32_t {
      // Reset is not a result of m7 reset request.
      eM7_REQUEST_M7_0 = 0,
      // Reset is a result of m7 reset request.
      eM7_REQUEST_M7_1 = 1,
    };

    enum class eM7_LOCKUP_M7 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eM7_LOCKUP_M7_0 = 0,
      // Reset is a result of the mentioned case.
      eM7_LOCKUP_M7_1 = 1,
    };

    enum class eCSU_RESET_B_M7 : std::uint32_t {
      // Reset is not a result of the csu_reset_b event.
      eCSU_RESET_B_M7_0 = 0,
      // Reset is a result of the csu_reset_b event.
      eCSU_RESET_B_M7_1 = 1,
    };

    enum class eIPP_USER_RESET_B_M7 : std::uint32_t {
      // Reset is not a result of the ipp_user_reset_b qualified as COLD reset event.
      eIPP_USER_RESET_B_M7_0 = 0,
      // Reset is a result of the ipp_user_reset_b qualified as COLD reset event.
      eIPP_USER_RESET_B_M7_1 = 1,
    };

    enum class eWDOG_RST_B_M7 : std::uint32_t {
      // Reset is not a result of the watchdog time-out event.
      eWDOG_RST_B_M7_0 = 0,
      // Reset is a result of the watchdog time-out event.
      eWDOG_RST_B_M7_1 = 1,
    };

    enum class eJTAG_RST_B_M7 : std::uint32_t {
      // Reset is not a result of HIGH-Z reset from JTAG.
      eJTAG_RST_B_M7_0 = 0,
      // Reset is a result of HIGH-Z reset from JTAG.
      eJTAG_RST_B_M7_1 = 1,
    };

    enum class eJTAG_SW_RST_M7 : std::uint32_t {
      // Reset is not a result of software reset from JTAG.
      eJTAG_SW_RST_M7_0 = 0,
      // Reset is a result of software reset from JTAG.
      eJTAG_SW_RST_M7_1 = 1,
    };

    enum class eWDOG3_RST_B_M7 : std::uint32_t {
      // Reset is not a result of the watchdog3 time-out event.
      eWDOG3_RST_B_M7_0 = 0,
      // Reset is a result of the watchdog3 time-out event.
      eWDOG3_RST_B_M7_1 = 1,
    };

    enum class eWDOG4_RST_B_M7 : std::uint32_t {
      // Reset is not a result of the watchdog4 time-out event.
      eWDOG4_RST_B_M7_0 = 0,
      // Reset is a result of the watchdog4 time-out event.
      eWDOG4_RST_B_M7_1 = 1,
    };

    enum class eTEMPSENSE_RST_B_M7 : std::uint32_t {
      // Reset is not a result of software reset from Temperature Sensor.
      eTEMPSENSE_RST_B_M7_0 = 0,
      // Reset is a result of software reset from Temperature Sensor.
      eTEMPSENSE_RST_B_M7_1 = 1,
    };

    enum class eM4_REQUEST_M7 : std::uint32_t {
      // Reset is not a result of m4 reset request.
      eM4_REQUEST_M7_0 = 0,
      // Reset is a result of m4 reset request.
      eM4_REQUEST_M7_1 = 1,
    };

    enum class eM4_LOCKUP_M7 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eM4_LOCKUP_M7_0 = 0,
      // Reset is a result of the mentioned case.
      eM4_LOCKUP_M7_1 = 1,
    };

    enum class eOVERVOLT_RST_M7 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eOVERVOLT_RST_M7_0 = 0,
      // Reset is a result of the mentioned case.
      eOVERVOLT_RST_M7_1 = 1,
    };

    enum class eCDOG_RST_M7 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eCDOG_RST_M7_0 = 0,
      // Reset is a result of the mentioned case.
      eCDOG_RST_M7_1 = 1,
    };

    enum class eIPP_RESET_B_M4 : std::uint32_t {
      // Reset is not a result of ipp_reset_b pin.
      eIPP_RESET_B_M4_0 = 0,
      // Reset is a result of ipp_reset_b pin.
      eIPP_RESET_B_M4_1 = 1,
    };

    enum class eM4_REQUEST_M4 : std::uint32_t {
      // Reset is not a result of m4 reset request.
      eM4_REQUEST_M4_0 = 0,
      // Reset is a result of m4 reset request.
      eM4_REQUEST_M4_1 = 1,
    };

    enum class eM4_LOCKUP_M4 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eM4_LOCKUP_M4_0 = 0,
      // Reset is a result of the mentioned case.
      eM4_LOCKUP_M4_1 = 1,
    };

    enum class eCSU_RESET_B_M4 : std::uint32_t {
      // Reset is not a result of the csu_reset_b event.
      eCSU_RESET_B_M4_0 = 0,
      // Reset is a result of the csu_reset_b event.
      eCSU_RESET_B_M4_1 = 1,
    };

    enum class eIPP_USER_RESET_B_M4 : std::uint32_t {
      // Reset is not a result of the ipp_user_reset_b qualified as COLD reset event.
      eIPP_USER_RESET_B_M4_0 = 0,
      // Reset is a result of the ipp_user_reset_b qualified as COLD reset event.
      eIPP_USER_RESET_B_M4_1 = 1,
    };

    enum class eWDOG_RST_B_M4 : std::uint32_t {
      // Reset is not a result of the watchdog time-out event.
      eWDOG_RST_B_M4_0 = 0,
      // Reset is a result of the watchdog time-out event.
      eWDOG_RST_B_M4_1 = 1,
    };

    enum class eJTAG_RST_B_M4 : std::uint32_t {
      // Reset is not a result of HIGH-Z reset from JTAG.
      eJTAG_RST_B_M4_0 = 0,
      // Reset is a result of HIGH-Z reset from JTAG.
      eJTAG_RST_B_M4_1 = 1,
    };

    enum class eJTAG_SW_RST_M4 : std::uint32_t {
      // Reset is not a result of software reset from JTAG.
      eJTAG_SW_RST_M4_0 = 0,
      // Reset is a result of software reset from JTAG.
      eJTAG_SW_RST_M4_1 = 1,
    };

    enum class eWDOG3_RST_B_M4 : std::uint32_t {
      // Reset is not a result of the watchdog3 time-out event.
      eWDOG3_RST_B_M4_0 = 0,
      // Reset is a result of the watchdog3 time-out event.
      eWDOG3_RST_B_M4_1 = 1,
    };

    enum class eWDOG4_RST_B_M4 : std::uint32_t {
      // Reset is not a result of the watchdog4 time-out event.
      eWDOG4_RST_B_M4_0 = 0,
      // Reset is a result of the watchdog4 time-out event.
      eWDOG4_RST_B_M4_1 = 1,
    };

    enum class eTEMPSENSE_RST_B_M4 : std::uint32_t {
      // Reset is not a result of software reset from Temperature Sensor.
      eTEMPSENSE_RST_B_M4_0 = 0,
      // Reset is a result of software reset from Temperature Sensor.
      eTEMPSENSE_RST_B_M4_1 = 1,
    };

    enum class eM7_REQUEST_M4 : std::uint32_t {
      // Reset is not a result of m7 reset request.
      eM7_REQUEST_M4_0 = 0,
      // Reset is a result of m7 reset request.
      eM7_REQUEST_M4_1 = 1,
    };

    enum class eM7_LOCKUP_M4 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eM7_LOCKUP_M4_0 = 0,
      // Reset is a result of the mentioned case.
      eM7_LOCKUP_M4_1 = 1,
    };

    enum class eOVERVOLT_RST_M4 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eOVERVOLT_RST_M4_0 = 0,
      // Reset is a result of the mentioned case.
      eOVERVOLT_RST_M4_1 = 1,
    };

    enum class eCDOG_RST_M4 : std::uint32_t {
      // Reset is not a result of the mentioned case.
      eCDOG_RST_M4_0 = 0,
      // Reset is a result of the mentioned case.
      eCDOG_RST_M4_1 = 1,
    };

    // Indicates whether reset was the result of ipp_reset_b pin (Power-up sequence)
    using IPP_RESET_B_M7 = ftl::mmio::Field<1, 0, eIPP_RESET_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether reset was the result of m7 reset request
    using M7_REQUEST_M7 = ftl::mmio::Field<1, 1, eM7_REQUEST_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by M7 CPU lockup or software setting of SYSRESETREQ bit in Application Interrupt and Reset Control Register of the ARM core
    using M7_LOCKUP_M7 = ftl::mmio::Field<1, 2, eM7_LOCKUP_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether the reset was the result of the csu_reset_b input.
    using CSU_RESET_B_M7 = ftl::mmio::Field<1, 3, eCSU_RESET_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether the reset was the result of the ipp_user_reset_b qualified reset.
    using IPP_USER_RESET_B_M7 = ftl::mmio::Field<1, 4, eIPP_USER_RESET_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog Time-out reset
    using WDOG_RST_B_M7 = ftl::mmio::Field<1, 5, eWDOG_RST_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // HIGH - Z JTAG reset. Indicates whether the reset was the result of HIGH-Z reset from JTAG.
    using JTAG_RST_B_M7 = ftl::mmio::Field<1, 6, eJTAG_RST_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // JTAG software reset. Indicates whether the reset was the result of software reset from JTAG.
    using JTAG_SW_RST_M7 = ftl::mmio::Field<1, 7, eJTAG_SW_RST_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog3 Time-out reset
    using WDOG3_RST_B_M7 = ftl::mmio::Field<1, 8, eWDOG3_RST_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog4 Time-out reset
    using WDOG4_RST_B_M7 = ftl::mmio::Field<1, 9, eWDOG4_RST_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Temper Sensor software reset
    using TEMPSENSE_RST_B_M7 = ftl::mmio::Field<1, 10, eTEMPSENSE_RST_B_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether reset was the result of m4 reset request.
    using M4_REQUEST_M7 = ftl::mmio::Field<1, 11, eM4_REQUEST_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by M4 CPU lockup or software setting of SYSRESETREQ bit in Application Interrupt and Reset Control Register of the ARM core
    using M4_LOCKUP_M7 = ftl::mmio::Field<1, 12, eM4_LOCKUP_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by power suppy voltage over the highest permitted level.
    using OVERVOLT_RST_M7 = ftl::mmio::Field<1, 13, eOVERVOLT_RST_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by CDOG reset.
    using CDOG_RST_M7 = ftl::mmio::Field<1, 14, eCDOG_RST_M7, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether reset was the result of ipp_reset_b pin (Power-up sequence)
    using IPP_RESET_B_M4 = ftl::mmio::Field<1, 16, eIPP_RESET_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether reset was the result of m4 reset request
    using M4_REQUEST_M4 = ftl::mmio::Field<1, 17, eM4_REQUEST_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by M4 CPU lockup or software setting of SYSRESETREQ bit in Application Interrupt and Reset Control Register of the ARM core
    using M4_LOCKUP_M4 = ftl::mmio::Field<1, 18, eM4_LOCKUP_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether the reset was the result of the csu_reset_b input.
    using CSU_RESET_B_M4 = ftl::mmio::Field<1, 19, eCSU_RESET_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether the reset was the result of the ipp_user_reset_b qualified reset.
    using IPP_USER_RESET_B_M4 = ftl::mmio::Field<1, 20, eIPP_USER_RESET_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog Time-out reset
    using WDOG_RST_B_M4 = ftl::mmio::Field<1, 21, eWDOG_RST_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // HIGH - Z JTAG reset. Indicates whether the reset was the result of HIGH-Z reset from JTAG.
    using JTAG_RST_B_M4 = ftl::mmio::Field<1, 22, eJTAG_RST_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // JTAG software reset. Indicates whether the reset was the result of software reset from JTAG.
    using JTAG_SW_RST_M4 = ftl::mmio::Field<1, 23, eJTAG_SW_RST_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog3 Time-out reset
    using WDOG3_RST_B_M4 = ftl::mmio::Field<1, 24, eWDOG3_RST_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // IC Watchdog4 Time-out reset
    using WDOG4_RST_B_M4 = ftl::mmio::Field<1, 25, eWDOG4_RST_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Temper Sensor software reset
    using TEMPSENSE_RST_B_M4 = ftl::mmio::Field<1, 26, eTEMPSENSE_RST_B_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates whether reset was the result of m7 reset request.
    using M7_REQUEST_M4 = ftl::mmio::Field<1, 27, eM7_REQUEST_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by M7 CPU lockup or software setting of SYSRESETREQ bit in Application Interrupt and Reset Control Register of the ARM core
    using M7_LOCKUP_M4 = ftl::mmio::Field<1, 28, eM7_LOCKUP_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by power suppy voltage over the highest permitted level.
    using OVERVOLT_RST_M4 = ftl::mmio::Field<1, 29, eOVERVOLT_RST_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates a reset has been caused by CDOG reset.
    using CDOG_RST_M4 = ftl::mmio::Field<1, 30, eCDOG_RST_M4, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SrsrFields

  struct SRSR : ftl::mmio::Register<
      0x40C04010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SrsrFields::IPP_RESET_B_M7,
      SrsrFields::M7_REQUEST_M7,
      SrsrFields::M7_LOCKUP_M7,
      SrsrFields::CSU_RESET_B_M7,
      SrsrFields::IPP_USER_RESET_B_M7,
      SrsrFields::WDOG_RST_B_M7,
      SrsrFields::JTAG_RST_B_M7,
      SrsrFields::JTAG_SW_RST_M7,
      SrsrFields::WDOG3_RST_B_M7,
      SrsrFields::WDOG4_RST_B_M7,
      SrsrFields::TEMPSENSE_RST_B_M7,
      SrsrFields::M4_REQUEST_M7,
      SrsrFields::M4_LOCKUP_M7,
      SrsrFields::OVERVOLT_RST_M7,
      SrsrFields::CDOG_RST_M7,
      ftl::mmio::Reserved<1, 15>,
      SrsrFields::IPP_RESET_B_M4,
      SrsrFields::M4_REQUEST_M4,
      SrsrFields::M4_LOCKUP_M4,
      SrsrFields::CSU_RESET_B_M4,
      SrsrFields::IPP_USER_RESET_B_M4,
      SrsrFields::WDOG_RST_B_M4,
      SrsrFields::JTAG_RST_B_M4,
      SrsrFields::JTAG_SW_RST_M4,
      SrsrFields::WDOG3_RST_B_M4,
      SrsrFields::WDOG4_RST_B_M4,
      SrsrFields::TEMPSENSE_RST_B_M4,
      SrsrFields::M7_REQUEST_M4,
      SrsrFields::M7_LOCKUP_M4,
      SrsrFields::OVERVOLT_RST_M4,
      SrsrFields::CDOG_RST_M4,
      ftl::mmio::Reserved<1, 31>> {
    using eIPP_RESET_B_M7 = SrsrFields::eIPP_RESET_B_M7;
    using eM7_REQUEST_M7 = SrsrFields::eM7_REQUEST_M7;
    using eM7_LOCKUP_M7 = SrsrFields::eM7_LOCKUP_M7;
    using eCSU_RESET_B_M7 = SrsrFields::eCSU_RESET_B_M7;
    using eIPP_USER_RESET_B_M7 = SrsrFields::eIPP_USER_RESET_B_M7;
    using eWDOG_RST_B_M7 = SrsrFields::eWDOG_RST_B_M7;
    using eJTAG_RST_B_M7 = SrsrFields::eJTAG_RST_B_M7;
    using eJTAG_SW_RST_M7 = SrsrFields::eJTAG_SW_RST_M7;
    using eWDOG3_RST_B_M7 = SrsrFields::eWDOG3_RST_B_M7;
    using eWDOG4_RST_B_M7 = SrsrFields::eWDOG4_RST_B_M7;
    using eTEMPSENSE_RST_B_M7 = SrsrFields::eTEMPSENSE_RST_B_M7;
    using eM4_REQUEST_M7 = SrsrFields::eM4_REQUEST_M7;
    using eM4_LOCKUP_M7 = SrsrFields::eM4_LOCKUP_M7;
    using eOVERVOLT_RST_M7 = SrsrFields::eOVERVOLT_RST_M7;
    using eCDOG_RST_M7 = SrsrFields::eCDOG_RST_M7;
    using eIPP_RESET_B_M4 = SrsrFields::eIPP_RESET_B_M4;
    using eM4_REQUEST_M4 = SrsrFields::eM4_REQUEST_M4;
    using eM4_LOCKUP_M4 = SrsrFields::eM4_LOCKUP_M4;
    using eCSU_RESET_B_M4 = SrsrFields::eCSU_RESET_B_M4;
    using eIPP_USER_RESET_B_M4 = SrsrFields::eIPP_USER_RESET_B_M4;
    using eWDOG_RST_B_M4 = SrsrFields::eWDOG_RST_B_M4;
    using eJTAG_RST_B_M4 = SrsrFields::eJTAG_RST_B_M4;
    using eJTAG_SW_RST_M4 = SrsrFields::eJTAG_SW_RST_M4;
    using eWDOG3_RST_B_M4 = SrsrFields::eWDOG3_RST_B_M4;
    using eWDOG4_RST_B_M4 = SrsrFields::eWDOG4_RST_B_M4;
    using eTEMPSENSE_RST_B_M4 = SrsrFields::eTEMPSENSE_RST_B_M4;
    using eM7_REQUEST_M4 = SrsrFields::eM7_REQUEST_M4;
    using eM7_LOCKUP_M4 = SrsrFields::eM7_LOCKUP_M4;
    using eOVERVOLT_RST_M4 = SrsrFields::eOVERVOLT_RST_M4;
    using eCDOG_RST_M4 = SrsrFields::eCDOG_RST_M4;
    using IPP_RESET_B_M7 = SrsrFields::IPP_RESET_B_M7;
    using M7_REQUEST_M7 = SrsrFields::M7_REQUEST_M7;
    using M7_LOCKUP_M7 = SrsrFields::M7_LOCKUP_M7;
    using CSU_RESET_B_M7 = SrsrFields::CSU_RESET_B_M7;
    using IPP_USER_RESET_B_M7 = SrsrFields::IPP_USER_RESET_B_M7;
    using WDOG_RST_B_M7 = SrsrFields::WDOG_RST_B_M7;
    using JTAG_RST_B_M7 = SrsrFields::JTAG_RST_B_M7;
    using JTAG_SW_RST_M7 = SrsrFields::JTAG_SW_RST_M7;
    using WDOG3_RST_B_M7 = SrsrFields::WDOG3_RST_B_M7;
    using WDOG4_RST_B_M7 = SrsrFields::WDOG4_RST_B_M7;
    using TEMPSENSE_RST_B_M7 = SrsrFields::TEMPSENSE_RST_B_M7;
    using M4_REQUEST_M7 = SrsrFields::M4_REQUEST_M7;
    using M4_LOCKUP_M7 = SrsrFields::M4_LOCKUP_M7;
    using OVERVOLT_RST_M7 = SrsrFields::OVERVOLT_RST_M7;
    using CDOG_RST_M7 = SrsrFields::CDOG_RST_M7;
    using IPP_RESET_B_M4 = SrsrFields::IPP_RESET_B_M4;
    using M4_REQUEST_M4 = SrsrFields::M4_REQUEST_M4;
    using M4_LOCKUP_M4 = SrsrFields::M4_LOCKUP_M4;
    using CSU_RESET_B_M4 = SrsrFields::CSU_RESET_B_M4;
    using IPP_USER_RESET_B_M4 = SrsrFields::IPP_USER_RESET_B_M4;
    using WDOG_RST_B_M4 = SrsrFields::WDOG_RST_B_M4;
    using JTAG_RST_B_M4 = SrsrFields::JTAG_RST_B_M4;
    using JTAG_SW_RST_M4 = SrsrFields::JTAG_SW_RST_M4;
    using WDOG3_RST_B_M4 = SrsrFields::WDOG3_RST_B_M4;
    using WDOG4_RST_B_M4 = SrsrFields::WDOG4_RST_B_M4;
    using TEMPSENSE_RST_B_M4 = SrsrFields::TEMPSENSE_RST_B_M4;
    using M7_REQUEST_M4 = SrsrFields::M7_REQUEST_M4;
    using M7_LOCKUP_M4 = SrsrFields::M7_LOCKUP_M4;
    using OVERVOLT_RST_M4 = SrsrFields::OVERVOLT_RST_M4;
    using CDOG_RST_M4 = SrsrFields::CDOG_RST_M4;
  };

  // SRC General Purpose Register
  struct GprFields {
    // General Purpose Register.
    using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GprFields

  template<std::uint32_t Index>
  struct GPR : ftl::mmio::Register<
      0x40C04014u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GprFields::GPR> {
    static_assert(Index < 20u, "GPR: Index out of range");
    using VALUE = GprFields::GPR;
  };

  // Slice Authentication Register
  struct AuthenMegaFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenMegaFields

  struct AUTHEN_MEGA : ftl::mmio::Register<
      0x40C04200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenMegaFields::DOMAIN_MODE,
      AuthenMegaFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenMegaFields::LOCK_MODE,
      AuthenMegaFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenMegaFields::LOCK_ASSIGN,
      AuthenMegaFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenMegaFields::LOCK_LIST,
      AuthenMegaFields::USER,
      AuthenMegaFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenMegaFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenMegaFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenMegaFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenMegaFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenMegaFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenMegaFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenMegaFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenMegaFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenMegaFields::WHITE_LIST;
    using LOCK_LIST = AuthenMegaFields::LOCK_LIST;
    using USER = AuthenMegaFields::USER;
    using NONSECURE = AuthenMegaFields::NONSECURE;
    using LOCK_SETTING = AuthenMegaFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlMegaFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlMegaFields

  struct CTRL_MEGA : ftl::mmio::Register<
      0x40C04204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlMegaFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlMegaFields::eSW_RESET;
    using SW_RESET = CtrlMegaFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointMegaFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointMegaFields

  struct SETPOINT_MEGA : ftl::mmio::Register<
      0x40C04208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointMegaFields::SETPOINT0,
      SetpointMegaFields::SETPOINT1,
      SetpointMegaFields::SETPOINT2,
      SetpointMegaFields::SETPOINT3,
      SetpointMegaFields::SETPOINT4,
      SetpointMegaFields::SETPOINT5,
      SetpointMegaFields::SETPOINT6,
      SetpointMegaFields::SETPOINT7,
      SetpointMegaFields::SETPOINT8,
      SetpointMegaFields::SETPOINT9,
      SetpointMegaFields::SETPOINT10,
      SetpointMegaFields::SETPOINT11,
      SetpointMegaFields::SETPOINT12,
      SetpointMegaFields::SETPOINT13,
      SetpointMegaFields::SETPOINT14,
      SetpointMegaFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointMegaFields::eSETPOINT0;
    using eSETPOINT1 = SetpointMegaFields::eSETPOINT1;
    using eSETPOINT2 = SetpointMegaFields::eSETPOINT2;
    using eSETPOINT3 = SetpointMegaFields::eSETPOINT3;
    using eSETPOINT4 = SetpointMegaFields::eSETPOINT4;
    using eSETPOINT5 = SetpointMegaFields::eSETPOINT5;
    using eSETPOINT6 = SetpointMegaFields::eSETPOINT6;
    using eSETPOINT7 = SetpointMegaFields::eSETPOINT7;
    using eSETPOINT8 = SetpointMegaFields::eSETPOINT8;
    using eSETPOINT9 = SetpointMegaFields::eSETPOINT9;
    using eSETPOINT10 = SetpointMegaFields::eSETPOINT10;
    using eSETPOINT11 = SetpointMegaFields::eSETPOINT11;
    using eSETPOINT12 = SetpointMegaFields::eSETPOINT12;
    using eSETPOINT13 = SetpointMegaFields::eSETPOINT13;
    using eSETPOINT14 = SetpointMegaFields::eSETPOINT14;
    using eSETPOINT15 = SetpointMegaFields::eSETPOINT15;
    using SETPOINT0 = SetpointMegaFields::SETPOINT0;
    using SETPOINT1 = SetpointMegaFields::SETPOINT1;
    using SETPOINT2 = SetpointMegaFields::SETPOINT2;
    using SETPOINT3 = SetpointMegaFields::SETPOINT3;
    using SETPOINT4 = SetpointMegaFields::SETPOINT4;
    using SETPOINT5 = SetpointMegaFields::SETPOINT5;
    using SETPOINT6 = SetpointMegaFields::SETPOINT6;
    using SETPOINT7 = SetpointMegaFields::SETPOINT7;
    using SETPOINT8 = SetpointMegaFields::SETPOINT8;
    using SETPOINT9 = SetpointMegaFields::SETPOINT9;
    using SETPOINT10 = SetpointMegaFields::SETPOINT10;
    using SETPOINT11 = SetpointMegaFields::SETPOINT11;
    using SETPOINT12 = SetpointMegaFields::SETPOINT12;
    using SETPOINT13 = SetpointMegaFields::SETPOINT13;
    using SETPOINT14 = SetpointMegaFields::SETPOINT14;
    using SETPOINT15 = SetpointMegaFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainMegaFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainMegaFields

  struct DOMAIN_MEGA : ftl::mmio::Register<
      0x40C0420Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainMegaFields::CPU0_RUN,
      DomainMegaFields::CPU0_WAIT,
      DomainMegaFields::CPU0_STOP,
      DomainMegaFields::CPU0_SUSP,
      DomainMegaFields::CPU1_RUN,
      DomainMegaFields::CPU1_WAIT,
      DomainMegaFields::CPU1_STOP,
      DomainMegaFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainMegaFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainMegaFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainMegaFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainMegaFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainMegaFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainMegaFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainMegaFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainMegaFields::eCPU1_SUSP;
    using CPU0_RUN = DomainMegaFields::CPU0_RUN;
    using CPU0_WAIT = DomainMegaFields::CPU0_WAIT;
    using CPU0_STOP = DomainMegaFields::CPU0_STOP;
    using CPU0_SUSP = DomainMegaFields::CPU0_SUSP;
    using CPU1_RUN = DomainMegaFields::CPU1_RUN;
    using CPU1_WAIT = DomainMegaFields::CPU1_WAIT;
    using CPU1_STOP = DomainMegaFields::CPU1_STOP;
    using CPU1_SUSP = DomainMegaFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatMegaFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatMegaFields

  struct STAT_MEGA : ftl::mmio::Register<
      0x40C04210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatMegaFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatMegaFields::RST_BY_HW,
      StatMegaFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatMegaFields::eUNDER_RST;
    using eRST_BY_HW = StatMegaFields::eRST_BY_HW;
    using eRST_BY_SW = StatMegaFields::eRST_BY_SW;
    using UNDER_RST = StatMegaFields::UNDER_RST;
    using RST_BY_HW = StatMegaFields::RST_BY_HW;
    using RST_BY_SW = StatMegaFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenDisplayFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenDisplayFields

  struct AUTHEN_DISPLAY : ftl::mmio::Register<
      0x40C04220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenDisplayFields::DOMAIN_MODE,
      AuthenDisplayFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenDisplayFields::LOCK_MODE,
      AuthenDisplayFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenDisplayFields::LOCK_ASSIGN,
      AuthenDisplayFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenDisplayFields::LOCK_LIST,
      AuthenDisplayFields::USER,
      AuthenDisplayFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenDisplayFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenDisplayFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenDisplayFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenDisplayFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenDisplayFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenDisplayFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenDisplayFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenDisplayFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenDisplayFields::WHITE_LIST;
    using LOCK_LIST = AuthenDisplayFields::LOCK_LIST;
    using USER = AuthenDisplayFields::USER;
    using NONSECURE = AuthenDisplayFields::NONSECURE;
    using LOCK_SETTING = AuthenDisplayFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlDisplayFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlDisplayFields

  struct CTRL_DISPLAY : ftl::mmio::Register<
      0x40C04224u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlDisplayFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlDisplayFields::eSW_RESET;
    using SW_RESET = CtrlDisplayFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointDisplayFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointDisplayFields

  struct SETPOINT_DISPLAY : ftl::mmio::Register<
      0x40C04228u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointDisplayFields::SETPOINT0,
      SetpointDisplayFields::SETPOINT1,
      SetpointDisplayFields::SETPOINT2,
      SetpointDisplayFields::SETPOINT3,
      SetpointDisplayFields::SETPOINT4,
      SetpointDisplayFields::SETPOINT5,
      SetpointDisplayFields::SETPOINT6,
      SetpointDisplayFields::SETPOINT7,
      SetpointDisplayFields::SETPOINT8,
      SetpointDisplayFields::SETPOINT9,
      SetpointDisplayFields::SETPOINT10,
      SetpointDisplayFields::SETPOINT11,
      SetpointDisplayFields::SETPOINT12,
      SetpointDisplayFields::SETPOINT13,
      SetpointDisplayFields::SETPOINT14,
      SetpointDisplayFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointDisplayFields::eSETPOINT0;
    using eSETPOINT1 = SetpointDisplayFields::eSETPOINT1;
    using eSETPOINT2 = SetpointDisplayFields::eSETPOINT2;
    using eSETPOINT3 = SetpointDisplayFields::eSETPOINT3;
    using eSETPOINT4 = SetpointDisplayFields::eSETPOINT4;
    using eSETPOINT5 = SetpointDisplayFields::eSETPOINT5;
    using eSETPOINT6 = SetpointDisplayFields::eSETPOINT6;
    using eSETPOINT7 = SetpointDisplayFields::eSETPOINT7;
    using eSETPOINT8 = SetpointDisplayFields::eSETPOINT8;
    using eSETPOINT9 = SetpointDisplayFields::eSETPOINT9;
    using eSETPOINT10 = SetpointDisplayFields::eSETPOINT10;
    using eSETPOINT11 = SetpointDisplayFields::eSETPOINT11;
    using eSETPOINT12 = SetpointDisplayFields::eSETPOINT12;
    using eSETPOINT13 = SetpointDisplayFields::eSETPOINT13;
    using eSETPOINT14 = SetpointDisplayFields::eSETPOINT14;
    using eSETPOINT15 = SetpointDisplayFields::eSETPOINT15;
    using SETPOINT0 = SetpointDisplayFields::SETPOINT0;
    using SETPOINT1 = SetpointDisplayFields::SETPOINT1;
    using SETPOINT2 = SetpointDisplayFields::SETPOINT2;
    using SETPOINT3 = SetpointDisplayFields::SETPOINT3;
    using SETPOINT4 = SetpointDisplayFields::SETPOINT4;
    using SETPOINT5 = SetpointDisplayFields::SETPOINT5;
    using SETPOINT6 = SetpointDisplayFields::SETPOINT6;
    using SETPOINT7 = SetpointDisplayFields::SETPOINT7;
    using SETPOINT8 = SetpointDisplayFields::SETPOINT8;
    using SETPOINT9 = SetpointDisplayFields::SETPOINT9;
    using SETPOINT10 = SetpointDisplayFields::SETPOINT10;
    using SETPOINT11 = SetpointDisplayFields::SETPOINT11;
    using SETPOINT12 = SetpointDisplayFields::SETPOINT12;
    using SETPOINT13 = SetpointDisplayFields::SETPOINT13;
    using SETPOINT14 = SetpointDisplayFields::SETPOINT14;
    using SETPOINT15 = SetpointDisplayFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainDisplayFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainDisplayFields

  struct DOMAIN_DISPLAY : ftl::mmio::Register<
      0x40C0422Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainDisplayFields::CPU0_RUN,
      DomainDisplayFields::CPU0_WAIT,
      DomainDisplayFields::CPU0_STOP,
      DomainDisplayFields::CPU0_SUSP,
      DomainDisplayFields::CPU1_RUN,
      DomainDisplayFields::CPU1_WAIT,
      DomainDisplayFields::CPU1_STOP,
      DomainDisplayFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainDisplayFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainDisplayFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainDisplayFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainDisplayFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainDisplayFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainDisplayFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainDisplayFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainDisplayFields::eCPU1_SUSP;
    using CPU0_RUN = DomainDisplayFields::CPU0_RUN;
    using CPU0_WAIT = DomainDisplayFields::CPU0_WAIT;
    using CPU0_STOP = DomainDisplayFields::CPU0_STOP;
    using CPU0_SUSP = DomainDisplayFields::CPU0_SUSP;
    using CPU1_RUN = DomainDisplayFields::CPU1_RUN;
    using CPU1_WAIT = DomainDisplayFields::CPU1_WAIT;
    using CPU1_STOP = DomainDisplayFields::CPU1_STOP;
    using CPU1_SUSP = DomainDisplayFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatDisplayFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatDisplayFields

  struct STAT_DISPLAY : ftl::mmio::Register<
      0x40C04230u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatDisplayFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatDisplayFields::RST_BY_HW,
      StatDisplayFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatDisplayFields::eUNDER_RST;
    using eRST_BY_HW = StatDisplayFields::eRST_BY_HW;
    using eRST_BY_SW = StatDisplayFields::eRST_BY_SW;
    using UNDER_RST = StatDisplayFields::UNDER_RST;
    using RST_BY_HW = StatDisplayFields::RST_BY_HW;
    using RST_BY_SW = StatDisplayFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenWakeupFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenWakeupFields

  struct AUTHEN_WAKEUP : ftl::mmio::Register<
      0x40C04240u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenWakeupFields::DOMAIN_MODE,
      AuthenWakeupFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenWakeupFields::LOCK_MODE,
      AuthenWakeupFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenWakeupFields::LOCK_ASSIGN,
      AuthenWakeupFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenWakeupFields::LOCK_LIST,
      AuthenWakeupFields::USER,
      AuthenWakeupFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenWakeupFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenWakeupFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenWakeupFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenWakeupFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenWakeupFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenWakeupFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenWakeupFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenWakeupFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenWakeupFields::WHITE_LIST;
    using LOCK_LIST = AuthenWakeupFields::LOCK_LIST;
    using USER = AuthenWakeupFields::USER;
    using NONSECURE = AuthenWakeupFields::NONSECURE;
    using LOCK_SETTING = AuthenWakeupFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlWakeupFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlWakeupFields

  struct CTRL_WAKEUP : ftl::mmio::Register<
      0x40C04244u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlWakeupFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlWakeupFields::eSW_RESET;
    using SW_RESET = CtrlWakeupFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointWakeupFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointWakeupFields

  struct SETPOINT_WAKEUP : ftl::mmio::Register<
      0x40C04248u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointWakeupFields::SETPOINT0,
      SetpointWakeupFields::SETPOINT1,
      SetpointWakeupFields::SETPOINT2,
      SetpointWakeupFields::SETPOINT3,
      SetpointWakeupFields::SETPOINT4,
      SetpointWakeupFields::SETPOINT5,
      SetpointWakeupFields::SETPOINT6,
      SetpointWakeupFields::SETPOINT7,
      SetpointWakeupFields::SETPOINT8,
      SetpointWakeupFields::SETPOINT9,
      SetpointWakeupFields::SETPOINT10,
      SetpointWakeupFields::SETPOINT11,
      SetpointWakeupFields::SETPOINT12,
      SetpointWakeupFields::SETPOINT13,
      SetpointWakeupFields::SETPOINT14,
      SetpointWakeupFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointWakeupFields::eSETPOINT0;
    using eSETPOINT1 = SetpointWakeupFields::eSETPOINT1;
    using eSETPOINT2 = SetpointWakeupFields::eSETPOINT2;
    using eSETPOINT3 = SetpointWakeupFields::eSETPOINT3;
    using eSETPOINT4 = SetpointWakeupFields::eSETPOINT4;
    using eSETPOINT5 = SetpointWakeupFields::eSETPOINT5;
    using eSETPOINT6 = SetpointWakeupFields::eSETPOINT6;
    using eSETPOINT7 = SetpointWakeupFields::eSETPOINT7;
    using eSETPOINT8 = SetpointWakeupFields::eSETPOINT8;
    using eSETPOINT9 = SetpointWakeupFields::eSETPOINT9;
    using eSETPOINT10 = SetpointWakeupFields::eSETPOINT10;
    using eSETPOINT11 = SetpointWakeupFields::eSETPOINT11;
    using eSETPOINT12 = SetpointWakeupFields::eSETPOINT12;
    using eSETPOINT13 = SetpointWakeupFields::eSETPOINT13;
    using eSETPOINT14 = SetpointWakeupFields::eSETPOINT14;
    using eSETPOINT15 = SetpointWakeupFields::eSETPOINT15;
    using SETPOINT0 = SetpointWakeupFields::SETPOINT0;
    using SETPOINT1 = SetpointWakeupFields::SETPOINT1;
    using SETPOINT2 = SetpointWakeupFields::SETPOINT2;
    using SETPOINT3 = SetpointWakeupFields::SETPOINT3;
    using SETPOINT4 = SetpointWakeupFields::SETPOINT4;
    using SETPOINT5 = SetpointWakeupFields::SETPOINT5;
    using SETPOINT6 = SetpointWakeupFields::SETPOINT6;
    using SETPOINT7 = SetpointWakeupFields::SETPOINT7;
    using SETPOINT8 = SetpointWakeupFields::SETPOINT8;
    using SETPOINT9 = SetpointWakeupFields::SETPOINT9;
    using SETPOINT10 = SetpointWakeupFields::SETPOINT10;
    using SETPOINT11 = SetpointWakeupFields::SETPOINT11;
    using SETPOINT12 = SetpointWakeupFields::SETPOINT12;
    using SETPOINT13 = SetpointWakeupFields::SETPOINT13;
    using SETPOINT14 = SetpointWakeupFields::SETPOINT14;
    using SETPOINT15 = SetpointWakeupFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainWakeupFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainWakeupFields

  struct DOMAIN_WAKEUP : ftl::mmio::Register<
      0x40C0424Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainWakeupFields::CPU0_RUN,
      DomainWakeupFields::CPU0_WAIT,
      DomainWakeupFields::CPU0_STOP,
      DomainWakeupFields::CPU0_SUSP,
      DomainWakeupFields::CPU1_RUN,
      DomainWakeupFields::CPU1_WAIT,
      DomainWakeupFields::CPU1_STOP,
      DomainWakeupFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainWakeupFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainWakeupFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainWakeupFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainWakeupFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainWakeupFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainWakeupFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainWakeupFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainWakeupFields::eCPU1_SUSP;
    using CPU0_RUN = DomainWakeupFields::CPU0_RUN;
    using CPU0_WAIT = DomainWakeupFields::CPU0_WAIT;
    using CPU0_STOP = DomainWakeupFields::CPU0_STOP;
    using CPU0_SUSP = DomainWakeupFields::CPU0_SUSP;
    using CPU1_RUN = DomainWakeupFields::CPU1_RUN;
    using CPU1_WAIT = DomainWakeupFields::CPU1_WAIT;
    using CPU1_STOP = DomainWakeupFields::CPU1_STOP;
    using CPU1_SUSP = DomainWakeupFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatWakeupFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatWakeupFields

  struct STAT_WAKEUP : ftl::mmio::Register<
      0x40C04250u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatWakeupFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatWakeupFields::RST_BY_HW,
      StatWakeupFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatWakeupFields::eUNDER_RST;
    using eRST_BY_HW = StatWakeupFields::eRST_BY_HW;
    using eRST_BY_SW = StatWakeupFields::eRST_BY_SW;
    using UNDER_RST = StatWakeupFields::UNDER_RST;
    using RST_BY_HW = StatWakeupFields::RST_BY_HW;
    using RST_BY_SW = StatWakeupFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenM4coreFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenM4coreFields

  struct AUTHEN_M4CORE : ftl::mmio::Register<
      0x40C04280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenM4coreFields::DOMAIN_MODE,
      AuthenM4coreFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenM4coreFields::LOCK_MODE,
      AuthenM4coreFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenM4coreFields::LOCK_ASSIGN,
      AuthenM4coreFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenM4coreFields::LOCK_LIST,
      AuthenM4coreFields::USER,
      AuthenM4coreFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenM4coreFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenM4coreFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenM4coreFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenM4coreFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenM4coreFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenM4coreFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenM4coreFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenM4coreFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenM4coreFields::WHITE_LIST;
    using LOCK_LIST = AuthenM4coreFields::LOCK_LIST;
    using USER = AuthenM4coreFields::USER;
    using NONSECURE = AuthenM4coreFields::NONSECURE;
    using LOCK_SETTING = AuthenM4coreFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlM4coreFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlM4coreFields

  struct CTRL_M4CORE : ftl::mmio::Register<
      0x40C04284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlM4coreFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlM4coreFields::eSW_RESET;
    using SW_RESET = CtrlM4coreFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointM4coreFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointM4coreFields

  struct SETPOINT_M4CORE : ftl::mmio::Register<
      0x40C04288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointM4coreFields::SETPOINT0,
      SetpointM4coreFields::SETPOINT1,
      SetpointM4coreFields::SETPOINT2,
      SetpointM4coreFields::SETPOINT3,
      SetpointM4coreFields::SETPOINT4,
      SetpointM4coreFields::SETPOINT5,
      SetpointM4coreFields::SETPOINT6,
      SetpointM4coreFields::SETPOINT7,
      SetpointM4coreFields::SETPOINT8,
      SetpointM4coreFields::SETPOINT9,
      SetpointM4coreFields::SETPOINT10,
      SetpointM4coreFields::SETPOINT11,
      SetpointM4coreFields::SETPOINT12,
      SetpointM4coreFields::SETPOINT13,
      SetpointM4coreFields::SETPOINT14,
      SetpointM4coreFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointM4coreFields::eSETPOINT0;
    using eSETPOINT1 = SetpointM4coreFields::eSETPOINT1;
    using eSETPOINT2 = SetpointM4coreFields::eSETPOINT2;
    using eSETPOINT3 = SetpointM4coreFields::eSETPOINT3;
    using eSETPOINT4 = SetpointM4coreFields::eSETPOINT4;
    using eSETPOINT5 = SetpointM4coreFields::eSETPOINT5;
    using eSETPOINT6 = SetpointM4coreFields::eSETPOINT6;
    using eSETPOINT7 = SetpointM4coreFields::eSETPOINT7;
    using eSETPOINT8 = SetpointM4coreFields::eSETPOINT8;
    using eSETPOINT9 = SetpointM4coreFields::eSETPOINT9;
    using eSETPOINT10 = SetpointM4coreFields::eSETPOINT10;
    using eSETPOINT11 = SetpointM4coreFields::eSETPOINT11;
    using eSETPOINT12 = SetpointM4coreFields::eSETPOINT12;
    using eSETPOINT13 = SetpointM4coreFields::eSETPOINT13;
    using eSETPOINT14 = SetpointM4coreFields::eSETPOINT14;
    using eSETPOINT15 = SetpointM4coreFields::eSETPOINT15;
    using SETPOINT0 = SetpointM4coreFields::SETPOINT0;
    using SETPOINT1 = SetpointM4coreFields::SETPOINT1;
    using SETPOINT2 = SetpointM4coreFields::SETPOINT2;
    using SETPOINT3 = SetpointM4coreFields::SETPOINT3;
    using SETPOINT4 = SetpointM4coreFields::SETPOINT4;
    using SETPOINT5 = SetpointM4coreFields::SETPOINT5;
    using SETPOINT6 = SetpointM4coreFields::SETPOINT6;
    using SETPOINT7 = SetpointM4coreFields::SETPOINT7;
    using SETPOINT8 = SetpointM4coreFields::SETPOINT8;
    using SETPOINT9 = SetpointM4coreFields::SETPOINT9;
    using SETPOINT10 = SetpointM4coreFields::SETPOINT10;
    using SETPOINT11 = SetpointM4coreFields::SETPOINT11;
    using SETPOINT12 = SetpointM4coreFields::SETPOINT12;
    using SETPOINT13 = SetpointM4coreFields::SETPOINT13;
    using SETPOINT14 = SetpointM4coreFields::SETPOINT14;
    using SETPOINT15 = SetpointM4coreFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainM4coreFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainM4coreFields

  struct DOMAIN_M4CORE : ftl::mmio::Register<
      0x40C0428Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainM4coreFields::CPU0_RUN,
      DomainM4coreFields::CPU0_WAIT,
      DomainM4coreFields::CPU0_STOP,
      DomainM4coreFields::CPU0_SUSP,
      DomainM4coreFields::CPU1_RUN,
      DomainM4coreFields::CPU1_WAIT,
      DomainM4coreFields::CPU1_STOP,
      DomainM4coreFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainM4coreFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainM4coreFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainM4coreFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainM4coreFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainM4coreFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainM4coreFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainM4coreFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainM4coreFields::eCPU1_SUSP;
    using CPU0_RUN = DomainM4coreFields::CPU0_RUN;
    using CPU0_WAIT = DomainM4coreFields::CPU0_WAIT;
    using CPU0_STOP = DomainM4coreFields::CPU0_STOP;
    using CPU0_SUSP = DomainM4coreFields::CPU0_SUSP;
    using CPU1_RUN = DomainM4coreFields::CPU1_RUN;
    using CPU1_WAIT = DomainM4coreFields::CPU1_WAIT;
    using CPU1_STOP = DomainM4coreFields::CPU1_STOP;
    using CPU1_SUSP = DomainM4coreFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatM4coreFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatM4coreFields

  struct STAT_M4CORE : ftl::mmio::Register<
      0x40C04290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatM4coreFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatM4coreFields::RST_BY_HW,
      StatM4coreFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatM4coreFields::eUNDER_RST;
    using eRST_BY_HW = StatM4coreFields::eRST_BY_HW;
    using eRST_BY_SW = StatM4coreFields::eRST_BY_SW;
    using UNDER_RST = StatM4coreFields::UNDER_RST;
    using RST_BY_HW = StatM4coreFields::RST_BY_HW;
    using RST_BY_SW = StatM4coreFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenM7coreFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenM7coreFields

  struct AUTHEN_M7CORE : ftl::mmio::Register<
      0x40C042A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenM7coreFields::DOMAIN_MODE,
      AuthenM7coreFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenM7coreFields::LOCK_MODE,
      AuthenM7coreFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenM7coreFields::LOCK_ASSIGN,
      AuthenM7coreFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenM7coreFields::LOCK_LIST,
      AuthenM7coreFields::USER,
      AuthenM7coreFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenM7coreFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenM7coreFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenM7coreFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenM7coreFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenM7coreFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenM7coreFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenM7coreFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenM7coreFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenM7coreFields::WHITE_LIST;
    using LOCK_LIST = AuthenM7coreFields::LOCK_LIST;
    using USER = AuthenM7coreFields::USER;
    using NONSECURE = AuthenM7coreFields::NONSECURE;
    using LOCK_SETTING = AuthenM7coreFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlM7coreFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlM7coreFields

  struct CTRL_M7CORE : ftl::mmio::Register<
      0x40C042A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlM7coreFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlM7coreFields::eSW_RESET;
    using SW_RESET = CtrlM7coreFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointM7coreFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointM7coreFields

  struct SETPOINT_M7CORE : ftl::mmio::Register<
      0x40C042A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointM7coreFields::SETPOINT0,
      SetpointM7coreFields::SETPOINT1,
      SetpointM7coreFields::SETPOINT2,
      SetpointM7coreFields::SETPOINT3,
      SetpointM7coreFields::SETPOINT4,
      SetpointM7coreFields::SETPOINT5,
      SetpointM7coreFields::SETPOINT6,
      SetpointM7coreFields::SETPOINT7,
      SetpointM7coreFields::SETPOINT8,
      SetpointM7coreFields::SETPOINT9,
      SetpointM7coreFields::SETPOINT10,
      SetpointM7coreFields::SETPOINT11,
      SetpointM7coreFields::SETPOINT12,
      SetpointM7coreFields::SETPOINT13,
      SetpointM7coreFields::SETPOINT14,
      SetpointM7coreFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointM7coreFields::eSETPOINT0;
    using eSETPOINT1 = SetpointM7coreFields::eSETPOINT1;
    using eSETPOINT2 = SetpointM7coreFields::eSETPOINT2;
    using eSETPOINT3 = SetpointM7coreFields::eSETPOINT3;
    using eSETPOINT4 = SetpointM7coreFields::eSETPOINT4;
    using eSETPOINT5 = SetpointM7coreFields::eSETPOINT5;
    using eSETPOINT6 = SetpointM7coreFields::eSETPOINT6;
    using eSETPOINT7 = SetpointM7coreFields::eSETPOINT7;
    using eSETPOINT8 = SetpointM7coreFields::eSETPOINT8;
    using eSETPOINT9 = SetpointM7coreFields::eSETPOINT9;
    using eSETPOINT10 = SetpointM7coreFields::eSETPOINT10;
    using eSETPOINT11 = SetpointM7coreFields::eSETPOINT11;
    using eSETPOINT12 = SetpointM7coreFields::eSETPOINT12;
    using eSETPOINT13 = SetpointM7coreFields::eSETPOINT13;
    using eSETPOINT14 = SetpointM7coreFields::eSETPOINT14;
    using eSETPOINT15 = SetpointM7coreFields::eSETPOINT15;
    using SETPOINT0 = SetpointM7coreFields::SETPOINT0;
    using SETPOINT1 = SetpointM7coreFields::SETPOINT1;
    using SETPOINT2 = SetpointM7coreFields::SETPOINT2;
    using SETPOINT3 = SetpointM7coreFields::SETPOINT3;
    using SETPOINT4 = SetpointM7coreFields::SETPOINT4;
    using SETPOINT5 = SetpointM7coreFields::SETPOINT5;
    using SETPOINT6 = SetpointM7coreFields::SETPOINT6;
    using SETPOINT7 = SetpointM7coreFields::SETPOINT7;
    using SETPOINT8 = SetpointM7coreFields::SETPOINT8;
    using SETPOINT9 = SetpointM7coreFields::SETPOINT9;
    using SETPOINT10 = SetpointM7coreFields::SETPOINT10;
    using SETPOINT11 = SetpointM7coreFields::SETPOINT11;
    using SETPOINT12 = SetpointM7coreFields::SETPOINT12;
    using SETPOINT13 = SetpointM7coreFields::SETPOINT13;
    using SETPOINT14 = SetpointM7coreFields::SETPOINT14;
    using SETPOINT15 = SetpointM7coreFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainM7coreFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainM7coreFields

  struct DOMAIN_M7CORE : ftl::mmio::Register<
      0x40C042ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainM7coreFields::CPU0_RUN,
      DomainM7coreFields::CPU0_WAIT,
      DomainM7coreFields::CPU0_STOP,
      DomainM7coreFields::CPU0_SUSP,
      DomainM7coreFields::CPU1_RUN,
      DomainM7coreFields::CPU1_WAIT,
      DomainM7coreFields::CPU1_STOP,
      DomainM7coreFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainM7coreFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainM7coreFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainM7coreFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainM7coreFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainM7coreFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainM7coreFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainM7coreFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainM7coreFields::eCPU1_SUSP;
    using CPU0_RUN = DomainM7coreFields::CPU0_RUN;
    using CPU0_WAIT = DomainM7coreFields::CPU0_WAIT;
    using CPU0_STOP = DomainM7coreFields::CPU0_STOP;
    using CPU0_SUSP = DomainM7coreFields::CPU0_SUSP;
    using CPU1_RUN = DomainM7coreFields::CPU1_RUN;
    using CPU1_WAIT = DomainM7coreFields::CPU1_WAIT;
    using CPU1_STOP = DomainM7coreFields::CPU1_STOP;
    using CPU1_SUSP = DomainM7coreFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatM7coreFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatM7coreFields

  struct STAT_M7CORE : ftl::mmio::Register<
      0x40C042B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatM7coreFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatM7coreFields::RST_BY_HW,
      StatM7coreFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatM7coreFields::eUNDER_RST;
    using eRST_BY_HW = StatM7coreFields::eRST_BY_HW;
    using eRST_BY_SW = StatM7coreFields::eRST_BY_SW;
    using UNDER_RST = StatM7coreFields::UNDER_RST;
    using RST_BY_HW = StatM7coreFields::RST_BY_HW;
    using RST_BY_SW = StatM7coreFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenM4debugFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenM4debugFields

  struct AUTHEN_M4DEBUG : ftl::mmio::Register<
      0x40C042C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenM4debugFields::DOMAIN_MODE,
      AuthenM4debugFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenM4debugFields::LOCK_MODE,
      AuthenM4debugFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenM4debugFields::LOCK_ASSIGN,
      AuthenM4debugFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenM4debugFields::LOCK_LIST,
      AuthenM4debugFields::USER,
      AuthenM4debugFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenM4debugFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenM4debugFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenM4debugFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenM4debugFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenM4debugFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenM4debugFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenM4debugFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenM4debugFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenM4debugFields::WHITE_LIST;
    using LOCK_LIST = AuthenM4debugFields::LOCK_LIST;
    using USER = AuthenM4debugFields::USER;
    using NONSECURE = AuthenM4debugFields::NONSECURE;
    using LOCK_SETTING = AuthenM4debugFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlM4debugFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlM4debugFields

  struct CTRL_M4DEBUG : ftl::mmio::Register<
      0x40C042C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlM4debugFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlM4debugFields::eSW_RESET;
    using SW_RESET = CtrlM4debugFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointM4debugFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointM4debugFields

  struct SETPOINT_M4DEBUG : ftl::mmio::Register<
      0x40C042C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointM4debugFields::SETPOINT0,
      SetpointM4debugFields::SETPOINT1,
      SetpointM4debugFields::SETPOINT2,
      SetpointM4debugFields::SETPOINT3,
      SetpointM4debugFields::SETPOINT4,
      SetpointM4debugFields::SETPOINT5,
      SetpointM4debugFields::SETPOINT6,
      SetpointM4debugFields::SETPOINT7,
      SetpointM4debugFields::SETPOINT8,
      SetpointM4debugFields::SETPOINT9,
      SetpointM4debugFields::SETPOINT10,
      SetpointM4debugFields::SETPOINT11,
      SetpointM4debugFields::SETPOINT12,
      SetpointM4debugFields::SETPOINT13,
      SetpointM4debugFields::SETPOINT14,
      SetpointM4debugFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointM4debugFields::eSETPOINT0;
    using eSETPOINT1 = SetpointM4debugFields::eSETPOINT1;
    using eSETPOINT2 = SetpointM4debugFields::eSETPOINT2;
    using eSETPOINT3 = SetpointM4debugFields::eSETPOINT3;
    using eSETPOINT4 = SetpointM4debugFields::eSETPOINT4;
    using eSETPOINT5 = SetpointM4debugFields::eSETPOINT5;
    using eSETPOINT6 = SetpointM4debugFields::eSETPOINT6;
    using eSETPOINT7 = SetpointM4debugFields::eSETPOINT7;
    using eSETPOINT8 = SetpointM4debugFields::eSETPOINT8;
    using eSETPOINT9 = SetpointM4debugFields::eSETPOINT9;
    using eSETPOINT10 = SetpointM4debugFields::eSETPOINT10;
    using eSETPOINT11 = SetpointM4debugFields::eSETPOINT11;
    using eSETPOINT12 = SetpointM4debugFields::eSETPOINT12;
    using eSETPOINT13 = SetpointM4debugFields::eSETPOINT13;
    using eSETPOINT14 = SetpointM4debugFields::eSETPOINT14;
    using eSETPOINT15 = SetpointM4debugFields::eSETPOINT15;
    using SETPOINT0 = SetpointM4debugFields::SETPOINT0;
    using SETPOINT1 = SetpointM4debugFields::SETPOINT1;
    using SETPOINT2 = SetpointM4debugFields::SETPOINT2;
    using SETPOINT3 = SetpointM4debugFields::SETPOINT3;
    using SETPOINT4 = SetpointM4debugFields::SETPOINT4;
    using SETPOINT5 = SetpointM4debugFields::SETPOINT5;
    using SETPOINT6 = SetpointM4debugFields::SETPOINT6;
    using SETPOINT7 = SetpointM4debugFields::SETPOINT7;
    using SETPOINT8 = SetpointM4debugFields::SETPOINT8;
    using SETPOINT9 = SetpointM4debugFields::SETPOINT9;
    using SETPOINT10 = SetpointM4debugFields::SETPOINT10;
    using SETPOINT11 = SetpointM4debugFields::SETPOINT11;
    using SETPOINT12 = SetpointM4debugFields::SETPOINT12;
    using SETPOINT13 = SetpointM4debugFields::SETPOINT13;
    using SETPOINT14 = SetpointM4debugFields::SETPOINT14;
    using SETPOINT15 = SetpointM4debugFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainM4debugFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainM4debugFields

  struct DOMAIN_M4DEBUG : ftl::mmio::Register<
      0x40C042CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainM4debugFields::CPU0_RUN,
      DomainM4debugFields::CPU0_WAIT,
      DomainM4debugFields::CPU0_STOP,
      DomainM4debugFields::CPU0_SUSP,
      DomainM4debugFields::CPU1_RUN,
      DomainM4debugFields::CPU1_WAIT,
      DomainM4debugFields::CPU1_STOP,
      DomainM4debugFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainM4debugFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainM4debugFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainM4debugFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainM4debugFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainM4debugFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainM4debugFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainM4debugFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainM4debugFields::eCPU1_SUSP;
    using CPU0_RUN = DomainM4debugFields::CPU0_RUN;
    using CPU0_WAIT = DomainM4debugFields::CPU0_WAIT;
    using CPU0_STOP = DomainM4debugFields::CPU0_STOP;
    using CPU0_SUSP = DomainM4debugFields::CPU0_SUSP;
    using CPU1_RUN = DomainM4debugFields::CPU1_RUN;
    using CPU1_WAIT = DomainM4debugFields::CPU1_WAIT;
    using CPU1_STOP = DomainM4debugFields::CPU1_STOP;
    using CPU1_SUSP = DomainM4debugFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatM4debugFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatM4debugFields

  struct STAT_M4DEBUG : ftl::mmio::Register<
      0x40C042D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatM4debugFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatM4debugFields::RST_BY_HW,
      StatM4debugFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatM4debugFields::eUNDER_RST;
    using eRST_BY_HW = StatM4debugFields::eRST_BY_HW;
    using eRST_BY_SW = StatM4debugFields::eRST_BY_SW;
    using UNDER_RST = StatM4debugFields::UNDER_RST;
    using RST_BY_HW = StatM4debugFields::RST_BY_HW;
    using RST_BY_SW = StatM4debugFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenM7debugFields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenM7debugFields

  struct AUTHEN_M7DEBUG : ftl::mmio::Register<
      0x40C042E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenM7debugFields::DOMAIN_MODE,
      AuthenM7debugFields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenM7debugFields::LOCK_MODE,
      AuthenM7debugFields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenM7debugFields::LOCK_ASSIGN,
      AuthenM7debugFields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenM7debugFields::LOCK_LIST,
      AuthenM7debugFields::USER,
      AuthenM7debugFields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenM7debugFields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenM7debugFields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenM7debugFields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenM7debugFields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenM7debugFields::SETPOINT_MODE;
    using LOCK_MODE = AuthenM7debugFields::LOCK_MODE;
    using ASSIGN_LIST = AuthenM7debugFields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenM7debugFields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenM7debugFields::WHITE_LIST;
    using LOCK_LIST = AuthenM7debugFields::LOCK_LIST;
    using USER = AuthenM7debugFields::USER;
    using NONSECURE = AuthenM7debugFields::NONSECURE;
    using LOCK_SETTING = AuthenM7debugFields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlM7debugFields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlM7debugFields

  struct CTRL_M7DEBUG : ftl::mmio::Register<
      0x40C042E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlM7debugFields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlM7debugFields::eSW_RESET;
    using SW_RESET = CtrlM7debugFields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointM7debugFields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointM7debugFields

  struct SETPOINT_M7DEBUG : ftl::mmio::Register<
      0x40C042E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointM7debugFields::SETPOINT0,
      SetpointM7debugFields::SETPOINT1,
      SetpointM7debugFields::SETPOINT2,
      SetpointM7debugFields::SETPOINT3,
      SetpointM7debugFields::SETPOINT4,
      SetpointM7debugFields::SETPOINT5,
      SetpointM7debugFields::SETPOINT6,
      SetpointM7debugFields::SETPOINT7,
      SetpointM7debugFields::SETPOINT8,
      SetpointM7debugFields::SETPOINT9,
      SetpointM7debugFields::SETPOINT10,
      SetpointM7debugFields::SETPOINT11,
      SetpointM7debugFields::SETPOINT12,
      SetpointM7debugFields::SETPOINT13,
      SetpointM7debugFields::SETPOINT14,
      SetpointM7debugFields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointM7debugFields::eSETPOINT0;
    using eSETPOINT1 = SetpointM7debugFields::eSETPOINT1;
    using eSETPOINT2 = SetpointM7debugFields::eSETPOINT2;
    using eSETPOINT3 = SetpointM7debugFields::eSETPOINT3;
    using eSETPOINT4 = SetpointM7debugFields::eSETPOINT4;
    using eSETPOINT5 = SetpointM7debugFields::eSETPOINT5;
    using eSETPOINT6 = SetpointM7debugFields::eSETPOINT6;
    using eSETPOINT7 = SetpointM7debugFields::eSETPOINT7;
    using eSETPOINT8 = SetpointM7debugFields::eSETPOINT8;
    using eSETPOINT9 = SetpointM7debugFields::eSETPOINT9;
    using eSETPOINT10 = SetpointM7debugFields::eSETPOINT10;
    using eSETPOINT11 = SetpointM7debugFields::eSETPOINT11;
    using eSETPOINT12 = SetpointM7debugFields::eSETPOINT12;
    using eSETPOINT13 = SetpointM7debugFields::eSETPOINT13;
    using eSETPOINT14 = SetpointM7debugFields::eSETPOINT14;
    using eSETPOINT15 = SetpointM7debugFields::eSETPOINT15;
    using SETPOINT0 = SetpointM7debugFields::SETPOINT0;
    using SETPOINT1 = SetpointM7debugFields::SETPOINT1;
    using SETPOINT2 = SetpointM7debugFields::SETPOINT2;
    using SETPOINT3 = SetpointM7debugFields::SETPOINT3;
    using SETPOINT4 = SetpointM7debugFields::SETPOINT4;
    using SETPOINT5 = SetpointM7debugFields::SETPOINT5;
    using SETPOINT6 = SetpointM7debugFields::SETPOINT6;
    using SETPOINT7 = SetpointM7debugFields::SETPOINT7;
    using SETPOINT8 = SetpointM7debugFields::SETPOINT8;
    using SETPOINT9 = SetpointM7debugFields::SETPOINT9;
    using SETPOINT10 = SetpointM7debugFields::SETPOINT10;
    using SETPOINT11 = SetpointM7debugFields::SETPOINT11;
    using SETPOINT12 = SetpointM7debugFields::SETPOINT12;
    using SETPOINT13 = SetpointM7debugFields::SETPOINT13;
    using SETPOINT14 = SetpointM7debugFields::SETPOINT14;
    using SETPOINT15 = SetpointM7debugFields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainM7debugFields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainM7debugFields

  struct DOMAIN_M7DEBUG : ftl::mmio::Register<
      0x40C042ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainM7debugFields::CPU0_RUN,
      DomainM7debugFields::CPU0_WAIT,
      DomainM7debugFields::CPU0_STOP,
      DomainM7debugFields::CPU0_SUSP,
      DomainM7debugFields::CPU1_RUN,
      DomainM7debugFields::CPU1_WAIT,
      DomainM7debugFields::CPU1_STOP,
      DomainM7debugFields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainM7debugFields::eCPU0_RUN;
    using eCPU0_WAIT = DomainM7debugFields::eCPU0_WAIT;
    using eCPU0_STOP = DomainM7debugFields::eCPU0_STOP;
    using eCPU0_SUSP = DomainM7debugFields::eCPU0_SUSP;
    using eCPU1_RUN = DomainM7debugFields::eCPU1_RUN;
    using eCPU1_WAIT = DomainM7debugFields::eCPU1_WAIT;
    using eCPU1_STOP = DomainM7debugFields::eCPU1_STOP;
    using eCPU1_SUSP = DomainM7debugFields::eCPU1_SUSP;
    using CPU0_RUN = DomainM7debugFields::CPU0_RUN;
    using CPU0_WAIT = DomainM7debugFields::CPU0_WAIT;
    using CPU0_STOP = DomainM7debugFields::CPU0_STOP;
    using CPU0_SUSP = DomainM7debugFields::CPU0_SUSP;
    using CPU1_RUN = DomainM7debugFields::CPU1_RUN;
    using CPU1_WAIT = DomainM7debugFields::CPU1_WAIT;
    using CPU1_STOP = DomainM7debugFields::CPU1_STOP;
    using CPU1_SUSP = DomainM7debugFields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatM7debugFields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatM7debugFields

  struct STAT_M7DEBUG : ftl::mmio::Register<
      0x40C042F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatM7debugFields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatM7debugFields::RST_BY_HW,
      StatM7debugFields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatM7debugFields::eUNDER_RST;
    using eRST_BY_HW = StatM7debugFields::eRST_BY_HW;
    using eRST_BY_SW = StatM7debugFields::eRST_BY_SW;
    using UNDER_RST = StatM7debugFields::UNDER_RST;
    using RST_BY_HW = StatM7debugFields::RST_BY_HW;
    using RST_BY_SW = StatM7debugFields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenUsbphy1Fields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenUsbphy1Fields

  struct AUTHEN_USBPHY1 : ftl::mmio::Register<
      0x40C04300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenUsbphy1Fields::DOMAIN_MODE,
      AuthenUsbphy1Fields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenUsbphy1Fields::LOCK_MODE,
      AuthenUsbphy1Fields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenUsbphy1Fields::LOCK_ASSIGN,
      AuthenUsbphy1Fields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenUsbphy1Fields::LOCK_LIST,
      AuthenUsbphy1Fields::USER,
      AuthenUsbphy1Fields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenUsbphy1Fields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenUsbphy1Fields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenUsbphy1Fields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenUsbphy1Fields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenUsbphy1Fields::SETPOINT_MODE;
    using LOCK_MODE = AuthenUsbphy1Fields::LOCK_MODE;
    using ASSIGN_LIST = AuthenUsbphy1Fields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenUsbphy1Fields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenUsbphy1Fields::WHITE_LIST;
    using LOCK_LIST = AuthenUsbphy1Fields::LOCK_LIST;
    using USER = AuthenUsbphy1Fields::USER;
    using NONSECURE = AuthenUsbphy1Fields::NONSECURE;
    using LOCK_SETTING = AuthenUsbphy1Fields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlUsbphy1Fields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlUsbphy1Fields

  struct CTRL_USBPHY1 : ftl::mmio::Register<
      0x40C04304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlUsbphy1Fields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlUsbphy1Fields::eSW_RESET;
    using SW_RESET = CtrlUsbphy1Fields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointUsbphy1Fields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointUsbphy1Fields

  struct SETPOINT_USBPHY1 : ftl::mmio::Register<
      0x40C04308u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointUsbphy1Fields::SETPOINT0,
      SetpointUsbphy1Fields::SETPOINT1,
      SetpointUsbphy1Fields::SETPOINT2,
      SetpointUsbphy1Fields::SETPOINT3,
      SetpointUsbphy1Fields::SETPOINT4,
      SetpointUsbphy1Fields::SETPOINT5,
      SetpointUsbphy1Fields::SETPOINT6,
      SetpointUsbphy1Fields::SETPOINT7,
      SetpointUsbphy1Fields::SETPOINT8,
      SetpointUsbphy1Fields::SETPOINT9,
      SetpointUsbphy1Fields::SETPOINT10,
      SetpointUsbphy1Fields::SETPOINT11,
      SetpointUsbphy1Fields::SETPOINT12,
      SetpointUsbphy1Fields::SETPOINT13,
      SetpointUsbphy1Fields::SETPOINT14,
      SetpointUsbphy1Fields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointUsbphy1Fields::eSETPOINT0;
    using eSETPOINT1 = SetpointUsbphy1Fields::eSETPOINT1;
    using eSETPOINT2 = SetpointUsbphy1Fields::eSETPOINT2;
    using eSETPOINT3 = SetpointUsbphy1Fields::eSETPOINT3;
    using eSETPOINT4 = SetpointUsbphy1Fields::eSETPOINT4;
    using eSETPOINT5 = SetpointUsbphy1Fields::eSETPOINT5;
    using eSETPOINT6 = SetpointUsbphy1Fields::eSETPOINT6;
    using eSETPOINT7 = SetpointUsbphy1Fields::eSETPOINT7;
    using eSETPOINT8 = SetpointUsbphy1Fields::eSETPOINT8;
    using eSETPOINT9 = SetpointUsbphy1Fields::eSETPOINT9;
    using eSETPOINT10 = SetpointUsbphy1Fields::eSETPOINT10;
    using eSETPOINT11 = SetpointUsbphy1Fields::eSETPOINT11;
    using eSETPOINT12 = SetpointUsbphy1Fields::eSETPOINT12;
    using eSETPOINT13 = SetpointUsbphy1Fields::eSETPOINT13;
    using eSETPOINT14 = SetpointUsbphy1Fields::eSETPOINT14;
    using eSETPOINT15 = SetpointUsbphy1Fields::eSETPOINT15;
    using SETPOINT0 = SetpointUsbphy1Fields::SETPOINT0;
    using SETPOINT1 = SetpointUsbphy1Fields::SETPOINT1;
    using SETPOINT2 = SetpointUsbphy1Fields::SETPOINT2;
    using SETPOINT3 = SetpointUsbphy1Fields::SETPOINT3;
    using SETPOINT4 = SetpointUsbphy1Fields::SETPOINT4;
    using SETPOINT5 = SetpointUsbphy1Fields::SETPOINT5;
    using SETPOINT6 = SetpointUsbphy1Fields::SETPOINT6;
    using SETPOINT7 = SetpointUsbphy1Fields::SETPOINT7;
    using SETPOINT8 = SetpointUsbphy1Fields::SETPOINT8;
    using SETPOINT9 = SetpointUsbphy1Fields::SETPOINT9;
    using SETPOINT10 = SetpointUsbphy1Fields::SETPOINT10;
    using SETPOINT11 = SetpointUsbphy1Fields::SETPOINT11;
    using SETPOINT12 = SetpointUsbphy1Fields::SETPOINT12;
    using SETPOINT13 = SetpointUsbphy1Fields::SETPOINT13;
    using SETPOINT14 = SetpointUsbphy1Fields::SETPOINT14;
    using SETPOINT15 = SetpointUsbphy1Fields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainUsbphy1Fields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainUsbphy1Fields

  struct DOMAIN_USBPHY1 : ftl::mmio::Register<
      0x40C0430Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainUsbphy1Fields::CPU0_RUN,
      DomainUsbphy1Fields::CPU0_WAIT,
      DomainUsbphy1Fields::CPU0_STOP,
      DomainUsbphy1Fields::CPU0_SUSP,
      DomainUsbphy1Fields::CPU1_RUN,
      DomainUsbphy1Fields::CPU1_WAIT,
      DomainUsbphy1Fields::CPU1_STOP,
      DomainUsbphy1Fields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainUsbphy1Fields::eCPU0_RUN;
    using eCPU0_WAIT = DomainUsbphy1Fields::eCPU0_WAIT;
    using eCPU0_STOP = DomainUsbphy1Fields::eCPU0_STOP;
    using eCPU0_SUSP = DomainUsbphy1Fields::eCPU0_SUSP;
    using eCPU1_RUN = DomainUsbphy1Fields::eCPU1_RUN;
    using eCPU1_WAIT = DomainUsbphy1Fields::eCPU1_WAIT;
    using eCPU1_STOP = DomainUsbphy1Fields::eCPU1_STOP;
    using eCPU1_SUSP = DomainUsbphy1Fields::eCPU1_SUSP;
    using CPU0_RUN = DomainUsbphy1Fields::CPU0_RUN;
    using CPU0_WAIT = DomainUsbphy1Fields::CPU0_WAIT;
    using CPU0_STOP = DomainUsbphy1Fields::CPU0_STOP;
    using CPU0_SUSP = DomainUsbphy1Fields::CPU0_SUSP;
    using CPU1_RUN = DomainUsbphy1Fields::CPU1_RUN;
    using CPU1_WAIT = DomainUsbphy1Fields::CPU1_WAIT;
    using CPU1_STOP = DomainUsbphy1Fields::CPU1_STOP;
    using CPU1_SUSP = DomainUsbphy1Fields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatUsbphy1Fields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatUsbphy1Fields

  struct STAT_USBPHY1 : ftl::mmio::Register<
      0x40C04310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatUsbphy1Fields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatUsbphy1Fields::RST_BY_HW,
      StatUsbphy1Fields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatUsbphy1Fields::eUNDER_RST;
    using eRST_BY_HW = StatUsbphy1Fields::eRST_BY_HW;
    using eRST_BY_SW = StatUsbphy1Fields::eRST_BY_SW;
    using UNDER_RST = StatUsbphy1Fields::UNDER_RST;
    using RST_BY_HW = StatUsbphy1Fields::RST_BY_HW;
    using RST_BY_SW = StatUsbphy1Fields::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AuthenUsbphy2Fields {
    enum class eDOMAIN_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by CPU power mode transition
      eDOMAIN_MODE_0 = 0,
      // slice hardware reset will be triggered by CPU power mode transition. Do not set this bit and SETPOINT_MODE at the same time.
      eDOMAIN_MODE_1 = 1,
    };

    enum class eSETPOINT_MODE : std::uint32_t {
      // slice hardware reset will NOT be triggered by Setpoint transition
      eSETPOINT_MODE_0 = 0,
      // slice hardware reset will be triggered by Setpoint transition. Do not set this bit and DOMAIN_MODE at the same time.
      eSETPOINT_MODE_1 = 1,
    };

    // Control whether reset slice is in domain mode
    using DOMAIN_MODE = ftl::mmio::Field<1, 0, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control whether reset slice is in Setpoint mode
    using SETPOINT_MODE = ftl::mmio::Field<1, 1, eSETPOINT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain/Setpoint mode lock
    using LOCK_MODE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // when this bitfield set to 1, reset of slice would be subject to corresponding core status transition
    using ASSIGN_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assign list lock
    using LOCK_ASSIGN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AuthenUsbphy2Fields

  struct AUTHEN_USBPHY2 : ftl::mmio::Register<
      0x40C04320u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AuthenUsbphy2Fields::DOMAIN_MODE,
      AuthenUsbphy2Fields::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AuthenUsbphy2Fields::LOCK_MODE,
      AuthenUsbphy2Fields::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AuthenUsbphy2Fields::LOCK_ASSIGN,
      AuthenUsbphy2Fields::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AuthenUsbphy2Fields::LOCK_LIST,
      AuthenUsbphy2Fields::USER,
      AuthenUsbphy2Fields::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AuthenUsbphy2Fields::LOCK_SETTING> {
    using eDOMAIN_MODE = AuthenUsbphy2Fields::eDOMAIN_MODE;
    using eSETPOINT_MODE = AuthenUsbphy2Fields::eSETPOINT_MODE;
    using DOMAIN_MODE = AuthenUsbphy2Fields::DOMAIN_MODE;
    using SETPOINT_MODE = AuthenUsbphy2Fields::SETPOINT_MODE;
    using LOCK_MODE = AuthenUsbphy2Fields::LOCK_MODE;
    using ASSIGN_LIST = AuthenUsbphy2Fields::ASSIGN_LIST;
    using LOCK_ASSIGN = AuthenUsbphy2Fields::LOCK_ASSIGN;
    using WHITE_LIST = AuthenUsbphy2Fields::WHITE_LIST;
    using LOCK_LIST = AuthenUsbphy2Fields::LOCK_LIST;
    using USER = AuthenUsbphy2Fields::USER;
    using NONSECURE = AuthenUsbphy2Fields::NONSECURE;
    using LOCK_SETTING = AuthenUsbphy2Fields::LOCK_SETTING;
  };

  // Slice Control Register
  struct CtrlUsbphy2Fields {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlUsbphy2Fields

  struct CTRL_USBPHY2 : ftl::mmio::Register<
      0x40C04324u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlUsbphy2Fields::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CtrlUsbphy2Fields::eSW_RESET;
    using SW_RESET = CtrlUsbphy2Fields::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SetpointUsbphy2Fields {
    enum class eSETPOINT0 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT0_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT0_1 = 1,
    };

    enum class eSETPOINT1 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT1_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT1_1 = 1,
    };

    enum class eSETPOINT2 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT2_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT2_1 = 1,
    };

    enum class eSETPOINT3 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT3_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT3_1 = 1,
    };

    enum class eSETPOINT4 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT4_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT4_1 = 1,
    };

    enum class eSETPOINT5 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT5_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT5_1 = 1,
    };

    enum class eSETPOINT6 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT6_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT6_1 = 1,
    };

    enum class eSETPOINT7 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT7_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT7_1 = 1,
    };

    enum class eSETPOINT8 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT8_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT8_1 = 1,
    };

    enum class eSETPOINT9 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT9_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT9_1 = 1,
    };

    enum class eSETPOINT10 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT10_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT10_1 = 1,
    };

    enum class eSETPOINT11 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT11_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT11_1 = 1,
    };

    enum class eSETPOINT12 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT12_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT12_1 = 1,
    };

    enum class eSETPOINT13 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT13_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT13_1 = 1,
    };

    enum class eSETPOINT14 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT14_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT14_1 = 1,
    };

    enum class eSETPOINT15 : std::uint32_t {
      // Slice reset will be de-asserted when system in Setpoint n
      eSETPOINT15_0 = 0,
      // Slice reset will be asserted when system in Setpoint n
      eSETPOINT15_1 = 1,
    };

    // SETPOINT0
    using SETPOINT0 = ftl::mmio::Field<1, 0, eSETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT1
    using SETPOINT1 = ftl::mmio::Field<1, 1, eSETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT2
    using SETPOINT2 = ftl::mmio::Field<1, 2, eSETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT3
    using SETPOINT3 = ftl::mmio::Field<1, 3, eSETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT4
    using SETPOINT4 = ftl::mmio::Field<1, 4, eSETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT5
    using SETPOINT5 = ftl::mmio::Field<1, 5, eSETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT6
    using SETPOINT6 = ftl::mmio::Field<1, 6, eSETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT7
    using SETPOINT7 = ftl::mmio::Field<1, 7, eSETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT8
    using SETPOINT8 = ftl::mmio::Field<1, 8, eSETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT9
    using SETPOINT9 = ftl::mmio::Field<1, 9, eSETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT10
    using SETPOINT10 = ftl::mmio::Field<1, 10, eSETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT11
    using SETPOINT11 = ftl::mmio::Field<1, 11, eSETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT12
    using SETPOINT12 = ftl::mmio::Field<1, 12, eSETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT13
    using SETPOINT13 = ftl::mmio::Field<1, 13, eSETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT14
    using SETPOINT14 = ftl::mmio::Field<1, 14, eSETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
    // SETPOINT15
    using SETPOINT15 = ftl::mmio::Field<1, 15, eSETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SetpointUsbphy2Fields

  struct SETPOINT_USBPHY2 : ftl::mmio::Register<
      0x40C04328u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SetpointUsbphy2Fields::SETPOINT0,
      SetpointUsbphy2Fields::SETPOINT1,
      SetpointUsbphy2Fields::SETPOINT2,
      SetpointUsbphy2Fields::SETPOINT3,
      SetpointUsbphy2Fields::SETPOINT4,
      SetpointUsbphy2Fields::SETPOINT5,
      SetpointUsbphy2Fields::SETPOINT6,
      SetpointUsbphy2Fields::SETPOINT7,
      SetpointUsbphy2Fields::SETPOINT8,
      SetpointUsbphy2Fields::SETPOINT9,
      SetpointUsbphy2Fields::SETPOINT10,
      SetpointUsbphy2Fields::SETPOINT11,
      SetpointUsbphy2Fields::SETPOINT12,
      SetpointUsbphy2Fields::SETPOINT13,
      SetpointUsbphy2Fields::SETPOINT14,
      SetpointUsbphy2Fields::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SetpointUsbphy2Fields::eSETPOINT0;
    using eSETPOINT1 = SetpointUsbphy2Fields::eSETPOINT1;
    using eSETPOINT2 = SetpointUsbphy2Fields::eSETPOINT2;
    using eSETPOINT3 = SetpointUsbphy2Fields::eSETPOINT3;
    using eSETPOINT4 = SetpointUsbphy2Fields::eSETPOINT4;
    using eSETPOINT5 = SetpointUsbphy2Fields::eSETPOINT5;
    using eSETPOINT6 = SetpointUsbphy2Fields::eSETPOINT6;
    using eSETPOINT7 = SetpointUsbphy2Fields::eSETPOINT7;
    using eSETPOINT8 = SetpointUsbphy2Fields::eSETPOINT8;
    using eSETPOINT9 = SetpointUsbphy2Fields::eSETPOINT9;
    using eSETPOINT10 = SetpointUsbphy2Fields::eSETPOINT10;
    using eSETPOINT11 = SetpointUsbphy2Fields::eSETPOINT11;
    using eSETPOINT12 = SetpointUsbphy2Fields::eSETPOINT12;
    using eSETPOINT13 = SetpointUsbphy2Fields::eSETPOINT13;
    using eSETPOINT14 = SetpointUsbphy2Fields::eSETPOINT14;
    using eSETPOINT15 = SetpointUsbphy2Fields::eSETPOINT15;
    using SETPOINT0 = SetpointUsbphy2Fields::SETPOINT0;
    using SETPOINT1 = SetpointUsbphy2Fields::SETPOINT1;
    using SETPOINT2 = SetpointUsbphy2Fields::SETPOINT2;
    using SETPOINT3 = SetpointUsbphy2Fields::SETPOINT3;
    using SETPOINT4 = SetpointUsbphy2Fields::SETPOINT4;
    using SETPOINT5 = SetpointUsbphy2Fields::SETPOINT5;
    using SETPOINT6 = SetpointUsbphy2Fields::SETPOINT6;
    using SETPOINT7 = SetpointUsbphy2Fields::SETPOINT7;
    using SETPOINT8 = SetpointUsbphy2Fields::SETPOINT8;
    using SETPOINT9 = SetpointUsbphy2Fields::SETPOINT9;
    using SETPOINT10 = SetpointUsbphy2Fields::SETPOINT10;
    using SETPOINT11 = SetpointUsbphy2Fields::SETPOINT11;
    using SETPOINT12 = SetpointUsbphy2Fields::SETPOINT12;
    using SETPOINT13 = SetpointUsbphy2Fields::SETPOINT13;
    using SETPOINT14 = SetpointUsbphy2Fields::SETPOINT14;
    using SETPOINT15 = SetpointUsbphy2Fields::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DomainUsbphy2Fields {
    enum class eCPU0_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in RUN mode
      eCPU0_RUN_0 = 0,
      // Slice reset will be asserted when CPU0 in RUN mode
      eCPU0_RUN_1 = 1,
    };

    enum class eCPU0_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in WAIT mode
      eCPU0_WAIT_0 = 0,
      // Slice reset will be asserted when CPU0 in WAIT mode
      eCPU0_WAIT_1 = 1,
    };

    enum class eCPU0_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in STOP mode
      eCPU0_STOP_0 = 0,
      // Slice reset will be asserted when CPU0 in STOP mode
      eCPU0_STOP_1 = 1,
    };

    enum class eCPU0_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_0 = 0,
      // Slice reset will be asserted when CPU0 in SUSPEND mode
      eCPU0_SUSP_1 = 1,
    };

    enum class eCPU1_RUN : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in RUN mode
      eCPU1_RUN_0 = 0,
      // Slice reset will be asserted when CPU1 in RUN mode
      eCPU1_RUN_1 = 1,
    };

    enum class eCPU1_WAIT : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in WAIT mode
      eCPU1_WAIT_0 = 0,
      // Slice reset will be asserted when CPU1 in WAIT mode
      eCPU1_WAIT_1 = 1,
    };

    enum class eCPU1_STOP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in STOP mode
      eCPU1_STOP_0 = 0,
      // Slice reset will be asserted when CPU1 in STOP mode
      eCPU1_STOP_1 = 1,
    };

    enum class eCPU1_SUSP : std::uint32_t {
      // Slice reset will be de-asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_0 = 0,
      // Slice reset will be asserted when CPU1 in SUSPEND mode
      eCPU1_SUSP_1 = 1,
    };

    // CPU mode setting for RUN
    using CPU0_RUN = ftl::mmio::Field<1, 0, eCPU0_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU0_WAIT = ftl::mmio::Field<1, 1, eCPU0_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU0_STOP = ftl::mmio::Field<1, 2, eCPU0_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU0_SUSP = ftl::mmio::Field<1, 3, eCPU0_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for RUN
    using CPU1_RUN = ftl::mmio::Field<1, 4, eCPU1_RUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for WAIT
    using CPU1_WAIT = ftl::mmio::Field<1, 5, eCPU1_WAIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for STOP
    using CPU1_STOP = ftl::mmio::Field<1, 6, eCPU1_STOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU mode setting for SUSPEND
    using CPU1_SUSP = ftl::mmio::Field<1, 7, eCPU1_SUSP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DomainUsbphy2Fields

  struct DOMAIN_USBPHY2 : ftl::mmio::Register<
      0x40C0432Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DomainUsbphy2Fields::CPU0_RUN,
      DomainUsbphy2Fields::CPU0_WAIT,
      DomainUsbphy2Fields::CPU0_STOP,
      DomainUsbphy2Fields::CPU0_SUSP,
      DomainUsbphy2Fields::CPU1_RUN,
      DomainUsbphy2Fields::CPU1_WAIT,
      DomainUsbphy2Fields::CPU1_STOP,
      DomainUsbphy2Fields::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DomainUsbphy2Fields::eCPU0_RUN;
    using eCPU0_WAIT = DomainUsbphy2Fields::eCPU0_WAIT;
    using eCPU0_STOP = DomainUsbphy2Fields::eCPU0_STOP;
    using eCPU0_SUSP = DomainUsbphy2Fields::eCPU0_SUSP;
    using eCPU1_RUN = DomainUsbphy2Fields::eCPU1_RUN;
    using eCPU1_WAIT = DomainUsbphy2Fields::eCPU1_WAIT;
    using eCPU1_STOP = DomainUsbphy2Fields::eCPU1_STOP;
    using eCPU1_SUSP = DomainUsbphy2Fields::eCPU1_SUSP;
    using CPU0_RUN = DomainUsbphy2Fields::CPU0_RUN;
    using CPU0_WAIT = DomainUsbphy2Fields::CPU0_WAIT;
    using CPU0_STOP = DomainUsbphy2Fields::CPU0_STOP;
    using CPU0_SUSP = DomainUsbphy2Fields::CPU0_SUSP;
    using CPU1_RUN = DomainUsbphy2Fields::CPU1_RUN;
    using CPU1_WAIT = DomainUsbphy2Fields::CPU1_WAIT;
    using CPU1_STOP = DomainUsbphy2Fields::CPU1_STOP;
    using CPU1_SUSP = DomainUsbphy2Fields::CPU1_SUSP;
  };

  // Slice Status Register
  struct StatUsbphy2Fields {
    enum class eUNDER_RST : std::uint32_t {
      // the reset is finished
      eUNDER_RST_0 = 0,
      // the reset is in process
      eUNDER_RST_1 = 1,
    };

    enum class eRST_BY_HW : std::uint32_t {
      // the reset is not caused by the power mode transfer
      eRST_BY_HW_0 = 0,
      // the reset is caused by the power mode transfer
      eRST_BY_HW_1 = 1,
    };

    enum class eRST_BY_SW : std::uint32_t {
      // the reset is not caused by software setting
      eRST_BY_SW_0 = 0,
      // the reset is caused by software setting
      eRST_BY_SW_1 = 1,
    };

    // This is a Read Only bit. It indicate if the reset is in process.
    using UNDER_RST = ftl::mmio::Field<1, 0, eUNDER_RST, ftl::mmio::RO, ftl::mmio::Normal>;
    // This bit indicate if the reset is caused by the power mode transfer.
    using RST_BY_HW = ftl::mmio::Field<1, 2, eRST_BY_HW, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // This bit indicate if the reset is caused by setting SW_RESET bit.
    using RST_BY_SW = ftl::mmio::Field<1, 3, eRST_BY_SW, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct StatUsbphy2Fields

  struct STAT_USBPHY2 : ftl::mmio::Register<
      0x40C04330u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StatUsbphy2Fields::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      StatUsbphy2Fields::RST_BY_HW,
      StatUsbphy2Fields::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = StatUsbphy2Fields::eUNDER_RST;
    using eRST_BY_HW = StatUsbphy2Fields::eRST_BY_HW;
    using eRST_BY_SW = StatUsbphy2Fields::eRST_BY_SW;
    using UNDER_RST = StatUsbphy2Fields::UNDER_RST;
    using RST_BY_HW = StatUsbphy2Fields::RST_BY_HW;
    using RST_BY_SW = StatUsbphy2Fields::RST_BY_SW;
  };

};

}  // namespace regs