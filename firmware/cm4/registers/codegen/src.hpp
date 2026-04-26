#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SRC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Src {
  // SRC Control Register
  struct SCR_fields_ {
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
  };  // struct SCR_fields_

  struct SCR : ftl::mmio::Register<
      0x40C04000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SCR_fields_::BT_RELEASE_M4,
      SCR_fields_::BT_RELEASE_M7,
      ftl::mmio::Reserved<30, 2>> {
    using eBT_RELEASE_M4 = SCR_fields_::eBT_RELEASE_M4;
    using eBT_RELEASE_M7 = SCR_fields_::eBT_RELEASE_M7;
    using BT_RELEASE_M4 = SCR_fields_::BT_RELEASE_M4;
    using BT_RELEASE_M7 = SCR_fields_::BT_RELEASE_M7;
  };

  // SRC Reset Mode Register
  struct SRMR_fields_ {
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
  };  // struct SRMR_fields_

  struct SRMR : ftl::mmio::Register<
      0x40C04004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SRMR_fields_::WDOG_RESET_MODE,
      SRMR_fields_::WDOG3_RESET_MODE,
      SRMR_fields_::WDOG4_RESET_MODE,
      SRMR_fields_::M4LOCKUP_RESET_MODE,
      SRMR_fields_::M7LOCKUP_RESET_MODE,
      SRMR_fields_::M4REQ_RESET_MODE,
      SRMR_fields_::M7REQ_RESET_MODE,
      SRMR_fields_::TEMPSENSE_RESET_MODE,
      SRMR_fields_::CSU_RESET_MODE,
      SRMR_fields_::JTAGSW_RESET_MODE,
      SRMR_fields_::OVERVOLT_RESET_MODE,
      ftl::mmio::Reserved<10, 22>> {
    using eWDOG_RESET_MODE = SRMR_fields_::eWDOG_RESET_MODE;
    using eWDOG3_RESET_MODE = SRMR_fields_::eWDOG3_RESET_MODE;
    using eWDOG4_RESET_MODE = SRMR_fields_::eWDOG4_RESET_MODE;
    using eM4LOCKUP_RESET_MODE = SRMR_fields_::eM4LOCKUP_RESET_MODE;
    using eM7LOCKUP_RESET_MODE = SRMR_fields_::eM7LOCKUP_RESET_MODE;
    using eM4REQ_RESET_MODE = SRMR_fields_::eM4REQ_RESET_MODE;
    using eM7REQ_RESET_MODE = SRMR_fields_::eM7REQ_RESET_MODE;
    using eTEMPSENSE_RESET_MODE = SRMR_fields_::eTEMPSENSE_RESET_MODE;
    using eCSU_RESET_MODE = SRMR_fields_::eCSU_RESET_MODE;
    using eJTAGSW_RESET_MODE = SRMR_fields_::eJTAGSW_RESET_MODE;
    using eOVERVOLT_RESET_MODE = SRMR_fields_::eOVERVOLT_RESET_MODE;
    using WDOG_RESET_MODE = SRMR_fields_::WDOG_RESET_MODE;
    using WDOG3_RESET_MODE = SRMR_fields_::WDOG3_RESET_MODE;
    using WDOG4_RESET_MODE = SRMR_fields_::WDOG4_RESET_MODE;
    using M4LOCKUP_RESET_MODE = SRMR_fields_::M4LOCKUP_RESET_MODE;
    using M7LOCKUP_RESET_MODE = SRMR_fields_::M7LOCKUP_RESET_MODE;
    using M4REQ_RESET_MODE = SRMR_fields_::M4REQ_RESET_MODE;
    using M7REQ_RESET_MODE = SRMR_fields_::M7REQ_RESET_MODE;
    using TEMPSENSE_RESET_MODE = SRMR_fields_::TEMPSENSE_RESET_MODE;
    using CSU_RESET_MODE = SRMR_fields_::CSU_RESET_MODE;
    using JTAGSW_RESET_MODE = SRMR_fields_::JTAGSW_RESET_MODE;
    using OVERVOLT_RESET_MODE = SRMR_fields_::OVERVOLT_RESET_MODE;
  };

  // SRC Boot Mode Register 1
  struct SBMR1_fields_ {
    // Please see fusemap.
    using BOOT_CFG1 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG2 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG3 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Please see fusemap.
    using BOOT_CFG4 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SBMR1_fields_

  struct SBMR1 : ftl::mmio::Register<
      0x40C04008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SBMR1_fields_::BOOT_CFG1,
      SBMR1_fields_::BOOT_CFG2,
      SBMR1_fields_::BOOT_CFG3,
      SBMR1_fields_::BOOT_CFG4> {
    using BOOT_CFG1 = SBMR1_fields_::BOOT_CFG1;
    using BOOT_CFG2 = SBMR1_fields_::BOOT_CFG2;
    using BOOT_CFG3 = SBMR1_fields_::BOOT_CFG3;
    using BOOT_CFG4 = SBMR1_fields_::BOOT_CFG4;
  };

  // SRC Boot Mode Register 2
  struct SBMR2_fields_ {
    // SECONFIG[1] shows the state of the SECONFIG[1] fuse
    using SEC_CONFIG = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // BT_FUSE_SEL shows the state of the BT_FUSE_SEL fuse
    using BT_FUSE_SEL = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // BMOD[1:0] shows the latched state of the BOOT_MODE1 and BOOT_MODE0 signals on the rising edge of POR_B
    using BMOD = ftl::mmio::Field<2, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SBMR2_fields_

  struct SBMR2 : ftl::mmio::Register<
      0x40C0400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SBMR2_fields_::SEC_CONFIG,
      ftl::mmio::Reserved<2, 2>,
      SBMR2_fields_::BT_FUSE_SEL,
      ftl::mmio::Reserved<19, 5>,
      SBMR2_fields_::BMOD,
      ftl::mmio::Reserved<6, 26>> {
    using SEC_CONFIG = SBMR2_fields_::SEC_CONFIG;
    using BT_FUSE_SEL = SBMR2_fields_::BT_FUSE_SEL;
    using BMOD = SBMR2_fields_::BMOD;
  };

  // SRC Reset Status Register
  struct SRSR_fields_ {
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
  };  // struct SRSR_fields_

  struct SRSR : ftl::mmio::Register<
      0x40C04010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SRSR_fields_::IPP_RESET_B_M7,
      SRSR_fields_::M7_REQUEST_M7,
      SRSR_fields_::M7_LOCKUP_M7,
      SRSR_fields_::CSU_RESET_B_M7,
      SRSR_fields_::IPP_USER_RESET_B_M7,
      SRSR_fields_::WDOG_RST_B_M7,
      SRSR_fields_::JTAG_RST_B_M7,
      SRSR_fields_::JTAG_SW_RST_M7,
      SRSR_fields_::WDOG3_RST_B_M7,
      SRSR_fields_::WDOG4_RST_B_M7,
      SRSR_fields_::TEMPSENSE_RST_B_M7,
      SRSR_fields_::M4_REQUEST_M7,
      SRSR_fields_::M4_LOCKUP_M7,
      SRSR_fields_::OVERVOLT_RST_M7,
      SRSR_fields_::CDOG_RST_M7,
      ftl::mmio::Reserved<1, 15>,
      SRSR_fields_::IPP_RESET_B_M4,
      SRSR_fields_::M4_REQUEST_M4,
      SRSR_fields_::M4_LOCKUP_M4,
      SRSR_fields_::CSU_RESET_B_M4,
      SRSR_fields_::IPP_USER_RESET_B_M4,
      SRSR_fields_::WDOG_RST_B_M4,
      SRSR_fields_::JTAG_RST_B_M4,
      SRSR_fields_::JTAG_SW_RST_M4,
      SRSR_fields_::WDOG3_RST_B_M4,
      SRSR_fields_::WDOG4_RST_B_M4,
      SRSR_fields_::TEMPSENSE_RST_B_M4,
      SRSR_fields_::M7_REQUEST_M4,
      SRSR_fields_::M7_LOCKUP_M4,
      SRSR_fields_::OVERVOLT_RST_M4,
      SRSR_fields_::CDOG_RST_M4,
      ftl::mmio::Reserved<1, 31>> {
    using eIPP_RESET_B_M7 = SRSR_fields_::eIPP_RESET_B_M7;
    using eM7_REQUEST_M7 = SRSR_fields_::eM7_REQUEST_M7;
    using eM7_LOCKUP_M7 = SRSR_fields_::eM7_LOCKUP_M7;
    using eCSU_RESET_B_M7 = SRSR_fields_::eCSU_RESET_B_M7;
    using eIPP_USER_RESET_B_M7 = SRSR_fields_::eIPP_USER_RESET_B_M7;
    using eWDOG_RST_B_M7 = SRSR_fields_::eWDOG_RST_B_M7;
    using eJTAG_RST_B_M7 = SRSR_fields_::eJTAG_RST_B_M7;
    using eJTAG_SW_RST_M7 = SRSR_fields_::eJTAG_SW_RST_M7;
    using eWDOG3_RST_B_M7 = SRSR_fields_::eWDOG3_RST_B_M7;
    using eWDOG4_RST_B_M7 = SRSR_fields_::eWDOG4_RST_B_M7;
    using eTEMPSENSE_RST_B_M7 = SRSR_fields_::eTEMPSENSE_RST_B_M7;
    using eM4_REQUEST_M7 = SRSR_fields_::eM4_REQUEST_M7;
    using eM4_LOCKUP_M7 = SRSR_fields_::eM4_LOCKUP_M7;
    using eOVERVOLT_RST_M7 = SRSR_fields_::eOVERVOLT_RST_M7;
    using eCDOG_RST_M7 = SRSR_fields_::eCDOG_RST_M7;
    using eIPP_RESET_B_M4 = SRSR_fields_::eIPP_RESET_B_M4;
    using eM4_REQUEST_M4 = SRSR_fields_::eM4_REQUEST_M4;
    using eM4_LOCKUP_M4 = SRSR_fields_::eM4_LOCKUP_M4;
    using eCSU_RESET_B_M4 = SRSR_fields_::eCSU_RESET_B_M4;
    using eIPP_USER_RESET_B_M4 = SRSR_fields_::eIPP_USER_RESET_B_M4;
    using eWDOG_RST_B_M4 = SRSR_fields_::eWDOG_RST_B_M4;
    using eJTAG_RST_B_M4 = SRSR_fields_::eJTAG_RST_B_M4;
    using eJTAG_SW_RST_M4 = SRSR_fields_::eJTAG_SW_RST_M4;
    using eWDOG3_RST_B_M4 = SRSR_fields_::eWDOG3_RST_B_M4;
    using eWDOG4_RST_B_M4 = SRSR_fields_::eWDOG4_RST_B_M4;
    using eTEMPSENSE_RST_B_M4 = SRSR_fields_::eTEMPSENSE_RST_B_M4;
    using eM7_REQUEST_M4 = SRSR_fields_::eM7_REQUEST_M4;
    using eM7_LOCKUP_M4 = SRSR_fields_::eM7_LOCKUP_M4;
    using eOVERVOLT_RST_M4 = SRSR_fields_::eOVERVOLT_RST_M4;
    using eCDOG_RST_M4 = SRSR_fields_::eCDOG_RST_M4;
    using IPP_RESET_B_M7 = SRSR_fields_::IPP_RESET_B_M7;
    using M7_REQUEST_M7 = SRSR_fields_::M7_REQUEST_M7;
    using M7_LOCKUP_M7 = SRSR_fields_::M7_LOCKUP_M7;
    using CSU_RESET_B_M7 = SRSR_fields_::CSU_RESET_B_M7;
    using IPP_USER_RESET_B_M7 = SRSR_fields_::IPP_USER_RESET_B_M7;
    using WDOG_RST_B_M7 = SRSR_fields_::WDOG_RST_B_M7;
    using JTAG_RST_B_M7 = SRSR_fields_::JTAG_RST_B_M7;
    using JTAG_SW_RST_M7 = SRSR_fields_::JTAG_SW_RST_M7;
    using WDOG3_RST_B_M7 = SRSR_fields_::WDOG3_RST_B_M7;
    using WDOG4_RST_B_M7 = SRSR_fields_::WDOG4_RST_B_M7;
    using TEMPSENSE_RST_B_M7 = SRSR_fields_::TEMPSENSE_RST_B_M7;
    using M4_REQUEST_M7 = SRSR_fields_::M4_REQUEST_M7;
    using M4_LOCKUP_M7 = SRSR_fields_::M4_LOCKUP_M7;
    using OVERVOLT_RST_M7 = SRSR_fields_::OVERVOLT_RST_M7;
    using CDOG_RST_M7 = SRSR_fields_::CDOG_RST_M7;
    using IPP_RESET_B_M4 = SRSR_fields_::IPP_RESET_B_M4;
    using M4_REQUEST_M4 = SRSR_fields_::M4_REQUEST_M4;
    using M4_LOCKUP_M4 = SRSR_fields_::M4_LOCKUP_M4;
    using CSU_RESET_B_M4 = SRSR_fields_::CSU_RESET_B_M4;
    using IPP_USER_RESET_B_M4 = SRSR_fields_::IPP_USER_RESET_B_M4;
    using WDOG_RST_B_M4 = SRSR_fields_::WDOG_RST_B_M4;
    using JTAG_RST_B_M4 = SRSR_fields_::JTAG_RST_B_M4;
    using JTAG_SW_RST_M4 = SRSR_fields_::JTAG_SW_RST_M4;
    using WDOG3_RST_B_M4 = SRSR_fields_::WDOG3_RST_B_M4;
    using WDOG4_RST_B_M4 = SRSR_fields_::WDOG4_RST_B_M4;
    using TEMPSENSE_RST_B_M4 = SRSR_fields_::TEMPSENSE_RST_B_M4;
    using M7_REQUEST_M4 = SRSR_fields_::M7_REQUEST_M4;
    using M7_LOCKUP_M4 = SRSR_fields_::M7_LOCKUP_M4;
    using OVERVOLT_RST_M4 = SRSR_fields_::OVERVOLT_RST_M4;
    using CDOG_RST_M4 = SRSR_fields_::CDOG_RST_M4;
  };

  // SRC General Purpose Register
  struct GPR_fields_ {
    // General Purpose Register.
    using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR_fields_

  template<std::uint32_t Index>
  struct GPR : ftl::mmio::Register<
      0x40C04014u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR_fields_::GPR> {
    static_assert(Index < 20u, "GPR: Index out of range");
    using VALUE = GPR_fields_::GPR;
  };

  // Slice Authentication Register
  struct AUTHEN_MEGA_fields_ {
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
  };  // struct AUTHEN_MEGA_fields_

  struct AUTHEN_MEGA : ftl::mmio::Register<
      0x40C04200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_MEGA_fields_::DOMAIN_MODE,
      AUTHEN_MEGA_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_MEGA_fields_::LOCK_MODE,
      AUTHEN_MEGA_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_MEGA_fields_::LOCK_ASSIGN,
      AUTHEN_MEGA_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_MEGA_fields_::LOCK_LIST,
      AUTHEN_MEGA_fields_::USER,
      AUTHEN_MEGA_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_MEGA_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_MEGA_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_MEGA_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_MEGA_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_MEGA_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_MEGA_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_MEGA_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_MEGA_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_MEGA_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_MEGA_fields_::LOCK_LIST;
    using USER = AUTHEN_MEGA_fields_::USER;
    using NONSECURE = AUTHEN_MEGA_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_MEGA_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_MEGA_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_MEGA_fields_

  struct CTRL_MEGA : ftl::mmio::Register<
      0x40C04204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_MEGA_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_MEGA_fields_::eSW_RESET;
    using SW_RESET = CTRL_MEGA_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_MEGA_fields_ {
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
  };  // struct SETPOINT_MEGA_fields_

  struct SETPOINT_MEGA : ftl::mmio::Register<
      0x40C04208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_MEGA_fields_::SETPOINT0,
      SETPOINT_MEGA_fields_::SETPOINT1,
      SETPOINT_MEGA_fields_::SETPOINT2,
      SETPOINT_MEGA_fields_::SETPOINT3,
      SETPOINT_MEGA_fields_::SETPOINT4,
      SETPOINT_MEGA_fields_::SETPOINT5,
      SETPOINT_MEGA_fields_::SETPOINT6,
      SETPOINT_MEGA_fields_::SETPOINT7,
      SETPOINT_MEGA_fields_::SETPOINT8,
      SETPOINT_MEGA_fields_::SETPOINT9,
      SETPOINT_MEGA_fields_::SETPOINT10,
      SETPOINT_MEGA_fields_::SETPOINT11,
      SETPOINT_MEGA_fields_::SETPOINT12,
      SETPOINT_MEGA_fields_::SETPOINT13,
      SETPOINT_MEGA_fields_::SETPOINT14,
      SETPOINT_MEGA_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_MEGA_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_MEGA_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_MEGA_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_MEGA_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_MEGA_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_MEGA_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_MEGA_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_MEGA_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_MEGA_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_MEGA_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_MEGA_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_MEGA_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_MEGA_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_MEGA_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_MEGA_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_MEGA_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_MEGA_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_MEGA_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_MEGA_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_MEGA_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_MEGA_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_MEGA_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_MEGA_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_MEGA_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_MEGA_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_MEGA_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_MEGA_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_MEGA_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_MEGA_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_MEGA_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_MEGA_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_MEGA_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_MEGA_fields_ {
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
  };  // struct DOMAIN_MEGA_fields_

  struct DOMAIN_MEGA : ftl::mmio::Register<
      0x40C0420Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_MEGA_fields_::CPU0_RUN,
      DOMAIN_MEGA_fields_::CPU0_WAIT,
      DOMAIN_MEGA_fields_::CPU0_STOP,
      DOMAIN_MEGA_fields_::CPU0_SUSP,
      DOMAIN_MEGA_fields_::CPU1_RUN,
      DOMAIN_MEGA_fields_::CPU1_WAIT,
      DOMAIN_MEGA_fields_::CPU1_STOP,
      DOMAIN_MEGA_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_MEGA_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_MEGA_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_MEGA_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_MEGA_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_MEGA_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_MEGA_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_MEGA_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_MEGA_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_MEGA_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_MEGA_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_MEGA_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_MEGA_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_MEGA_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_MEGA_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_MEGA_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_MEGA_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_MEGA_fields_ {
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
  };  // struct STAT_MEGA_fields_

  struct STAT_MEGA : ftl::mmio::Register<
      0x40C04210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_MEGA_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_MEGA_fields_::RST_BY_HW,
      STAT_MEGA_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_MEGA_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_MEGA_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_MEGA_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_MEGA_fields_::UNDER_RST;
    using RST_BY_HW = STAT_MEGA_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_MEGA_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_DISPLAY_fields_ {
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
  };  // struct AUTHEN_DISPLAY_fields_

  struct AUTHEN_DISPLAY : ftl::mmio::Register<
      0x40C04220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_DISPLAY_fields_::DOMAIN_MODE,
      AUTHEN_DISPLAY_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_DISPLAY_fields_::LOCK_MODE,
      AUTHEN_DISPLAY_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_DISPLAY_fields_::LOCK_ASSIGN,
      AUTHEN_DISPLAY_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_DISPLAY_fields_::LOCK_LIST,
      AUTHEN_DISPLAY_fields_::USER,
      AUTHEN_DISPLAY_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_DISPLAY_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_DISPLAY_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_DISPLAY_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_DISPLAY_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_DISPLAY_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_DISPLAY_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_DISPLAY_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_DISPLAY_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_DISPLAY_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_DISPLAY_fields_::LOCK_LIST;
    using USER = AUTHEN_DISPLAY_fields_::USER;
    using NONSECURE = AUTHEN_DISPLAY_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_DISPLAY_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_DISPLAY_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_DISPLAY_fields_

  struct CTRL_DISPLAY : ftl::mmio::Register<
      0x40C04224u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_DISPLAY_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_DISPLAY_fields_::eSW_RESET;
    using SW_RESET = CTRL_DISPLAY_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_DISPLAY_fields_ {
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
  };  // struct SETPOINT_DISPLAY_fields_

  struct SETPOINT_DISPLAY : ftl::mmio::Register<
      0x40C04228u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_DISPLAY_fields_::SETPOINT0,
      SETPOINT_DISPLAY_fields_::SETPOINT1,
      SETPOINT_DISPLAY_fields_::SETPOINT2,
      SETPOINT_DISPLAY_fields_::SETPOINT3,
      SETPOINT_DISPLAY_fields_::SETPOINT4,
      SETPOINT_DISPLAY_fields_::SETPOINT5,
      SETPOINT_DISPLAY_fields_::SETPOINT6,
      SETPOINT_DISPLAY_fields_::SETPOINT7,
      SETPOINT_DISPLAY_fields_::SETPOINT8,
      SETPOINT_DISPLAY_fields_::SETPOINT9,
      SETPOINT_DISPLAY_fields_::SETPOINT10,
      SETPOINT_DISPLAY_fields_::SETPOINT11,
      SETPOINT_DISPLAY_fields_::SETPOINT12,
      SETPOINT_DISPLAY_fields_::SETPOINT13,
      SETPOINT_DISPLAY_fields_::SETPOINT14,
      SETPOINT_DISPLAY_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_DISPLAY_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_DISPLAY_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_DISPLAY_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_DISPLAY_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_DISPLAY_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_DISPLAY_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_DISPLAY_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_DISPLAY_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_DISPLAY_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_DISPLAY_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_DISPLAY_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_DISPLAY_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_DISPLAY_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_DISPLAY_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_DISPLAY_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_DISPLAY_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_DISPLAY_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_DISPLAY_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_DISPLAY_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_DISPLAY_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_DISPLAY_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_DISPLAY_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_DISPLAY_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_DISPLAY_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_DISPLAY_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_DISPLAY_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_DISPLAY_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_DISPLAY_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_DISPLAY_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_DISPLAY_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_DISPLAY_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_DISPLAY_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_DISPLAY_fields_ {
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
  };  // struct DOMAIN_DISPLAY_fields_

  struct DOMAIN_DISPLAY : ftl::mmio::Register<
      0x40C0422Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_DISPLAY_fields_::CPU0_RUN,
      DOMAIN_DISPLAY_fields_::CPU0_WAIT,
      DOMAIN_DISPLAY_fields_::CPU0_STOP,
      DOMAIN_DISPLAY_fields_::CPU0_SUSP,
      DOMAIN_DISPLAY_fields_::CPU1_RUN,
      DOMAIN_DISPLAY_fields_::CPU1_WAIT,
      DOMAIN_DISPLAY_fields_::CPU1_STOP,
      DOMAIN_DISPLAY_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_DISPLAY_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_DISPLAY_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_DISPLAY_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_DISPLAY_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_DISPLAY_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_DISPLAY_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_DISPLAY_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_DISPLAY_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_DISPLAY_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_DISPLAY_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_DISPLAY_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_DISPLAY_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_DISPLAY_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_DISPLAY_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_DISPLAY_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_DISPLAY_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_DISPLAY_fields_ {
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
  };  // struct STAT_DISPLAY_fields_

  struct STAT_DISPLAY : ftl::mmio::Register<
      0x40C04230u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_DISPLAY_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_DISPLAY_fields_::RST_BY_HW,
      STAT_DISPLAY_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_DISPLAY_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_DISPLAY_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_DISPLAY_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_DISPLAY_fields_::UNDER_RST;
    using RST_BY_HW = STAT_DISPLAY_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_DISPLAY_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_WAKEUP_fields_ {
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
  };  // struct AUTHEN_WAKEUP_fields_

  struct AUTHEN_WAKEUP : ftl::mmio::Register<
      0x40C04240u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_WAKEUP_fields_::DOMAIN_MODE,
      AUTHEN_WAKEUP_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_WAKEUP_fields_::LOCK_MODE,
      AUTHEN_WAKEUP_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_WAKEUP_fields_::LOCK_ASSIGN,
      AUTHEN_WAKEUP_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_WAKEUP_fields_::LOCK_LIST,
      AUTHEN_WAKEUP_fields_::USER,
      AUTHEN_WAKEUP_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_WAKEUP_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_WAKEUP_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_WAKEUP_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_WAKEUP_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_WAKEUP_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_WAKEUP_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_WAKEUP_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_WAKEUP_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_WAKEUP_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_WAKEUP_fields_::LOCK_LIST;
    using USER = AUTHEN_WAKEUP_fields_::USER;
    using NONSECURE = AUTHEN_WAKEUP_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_WAKEUP_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_WAKEUP_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_WAKEUP_fields_

  struct CTRL_WAKEUP : ftl::mmio::Register<
      0x40C04244u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_WAKEUP_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_WAKEUP_fields_::eSW_RESET;
    using SW_RESET = CTRL_WAKEUP_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_WAKEUP_fields_ {
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
  };  // struct SETPOINT_WAKEUP_fields_

  struct SETPOINT_WAKEUP : ftl::mmio::Register<
      0x40C04248u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_WAKEUP_fields_::SETPOINT0,
      SETPOINT_WAKEUP_fields_::SETPOINT1,
      SETPOINT_WAKEUP_fields_::SETPOINT2,
      SETPOINT_WAKEUP_fields_::SETPOINT3,
      SETPOINT_WAKEUP_fields_::SETPOINT4,
      SETPOINT_WAKEUP_fields_::SETPOINT5,
      SETPOINT_WAKEUP_fields_::SETPOINT6,
      SETPOINT_WAKEUP_fields_::SETPOINT7,
      SETPOINT_WAKEUP_fields_::SETPOINT8,
      SETPOINT_WAKEUP_fields_::SETPOINT9,
      SETPOINT_WAKEUP_fields_::SETPOINT10,
      SETPOINT_WAKEUP_fields_::SETPOINT11,
      SETPOINT_WAKEUP_fields_::SETPOINT12,
      SETPOINT_WAKEUP_fields_::SETPOINT13,
      SETPOINT_WAKEUP_fields_::SETPOINT14,
      SETPOINT_WAKEUP_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_WAKEUP_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_WAKEUP_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_WAKEUP_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_WAKEUP_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_WAKEUP_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_WAKEUP_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_WAKEUP_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_WAKEUP_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_WAKEUP_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_WAKEUP_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_WAKEUP_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_WAKEUP_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_WAKEUP_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_WAKEUP_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_WAKEUP_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_WAKEUP_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_WAKEUP_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_WAKEUP_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_WAKEUP_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_WAKEUP_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_WAKEUP_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_WAKEUP_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_WAKEUP_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_WAKEUP_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_WAKEUP_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_WAKEUP_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_WAKEUP_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_WAKEUP_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_WAKEUP_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_WAKEUP_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_WAKEUP_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_WAKEUP_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_WAKEUP_fields_ {
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
  };  // struct DOMAIN_WAKEUP_fields_

  struct DOMAIN_WAKEUP : ftl::mmio::Register<
      0x40C0424Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_WAKEUP_fields_::CPU0_RUN,
      DOMAIN_WAKEUP_fields_::CPU0_WAIT,
      DOMAIN_WAKEUP_fields_::CPU0_STOP,
      DOMAIN_WAKEUP_fields_::CPU0_SUSP,
      DOMAIN_WAKEUP_fields_::CPU1_RUN,
      DOMAIN_WAKEUP_fields_::CPU1_WAIT,
      DOMAIN_WAKEUP_fields_::CPU1_STOP,
      DOMAIN_WAKEUP_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_WAKEUP_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_WAKEUP_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_WAKEUP_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_WAKEUP_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_WAKEUP_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_WAKEUP_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_WAKEUP_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_WAKEUP_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_WAKEUP_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_WAKEUP_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_WAKEUP_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_WAKEUP_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_WAKEUP_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_WAKEUP_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_WAKEUP_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_WAKEUP_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_WAKEUP_fields_ {
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
  };  // struct STAT_WAKEUP_fields_

  struct STAT_WAKEUP : ftl::mmio::Register<
      0x40C04250u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_WAKEUP_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_WAKEUP_fields_::RST_BY_HW,
      STAT_WAKEUP_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_WAKEUP_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_WAKEUP_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_WAKEUP_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_WAKEUP_fields_::UNDER_RST;
    using RST_BY_HW = STAT_WAKEUP_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_WAKEUP_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_M4CORE_fields_ {
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
  };  // struct AUTHEN_M4CORE_fields_

  struct AUTHEN_M4CORE : ftl::mmio::Register<
      0x40C04280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_M4CORE_fields_::DOMAIN_MODE,
      AUTHEN_M4CORE_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_M4CORE_fields_::LOCK_MODE,
      AUTHEN_M4CORE_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_M4CORE_fields_::LOCK_ASSIGN,
      AUTHEN_M4CORE_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_M4CORE_fields_::LOCK_LIST,
      AUTHEN_M4CORE_fields_::USER,
      AUTHEN_M4CORE_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_M4CORE_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_M4CORE_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_M4CORE_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_M4CORE_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_M4CORE_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_M4CORE_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_M4CORE_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_M4CORE_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_M4CORE_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_M4CORE_fields_::LOCK_LIST;
    using USER = AUTHEN_M4CORE_fields_::USER;
    using NONSECURE = AUTHEN_M4CORE_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_M4CORE_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_M4CORE_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_M4CORE_fields_

  struct CTRL_M4CORE : ftl::mmio::Register<
      0x40C04284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_M4CORE_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_M4CORE_fields_::eSW_RESET;
    using SW_RESET = CTRL_M4CORE_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_M4CORE_fields_ {
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
  };  // struct SETPOINT_M4CORE_fields_

  struct SETPOINT_M4CORE : ftl::mmio::Register<
      0x40C04288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_M4CORE_fields_::SETPOINT0,
      SETPOINT_M4CORE_fields_::SETPOINT1,
      SETPOINT_M4CORE_fields_::SETPOINT2,
      SETPOINT_M4CORE_fields_::SETPOINT3,
      SETPOINT_M4CORE_fields_::SETPOINT4,
      SETPOINT_M4CORE_fields_::SETPOINT5,
      SETPOINT_M4CORE_fields_::SETPOINT6,
      SETPOINT_M4CORE_fields_::SETPOINT7,
      SETPOINT_M4CORE_fields_::SETPOINT8,
      SETPOINT_M4CORE_fields_::SETPOINT9,
      SETPOINT_M4CORE_fields_::SETPOINT10,
      SETPOINT_M4CORE_fields_::SETPOINT11,
      SETPOINT_M4CORE_fields_::SETPOINT12,
      SETPOINT_M4CORE_fields_::SETPOINT13,
      SETPOINT_M4CORE_fields_::SETPOINT14,
      SETPOINT_M4CORE_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_M4CORE_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_M4CORE_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_M4CORE_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_M4CORE_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_M4CORE_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_M4CORE_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_M4CORE_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_M4CORE_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_M4CORE_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_M4CORE_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_M4CORE_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_M4CORE_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_M4CORE_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_M4CORE_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_M4CORE_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_M4CORE_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_M4CORE_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_M4CORE_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_M4CORE_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_M4CORE_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_M4CORE_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_M4CORE_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_M4CORE_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_M4CORE_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_M4CORE_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_M4CORE_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_M4CORE_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_M4CORE_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_M4CORE_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_M4CORE_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_M4CORE_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_M4CORE_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_M4CORE_fields_ {
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
  };  // struct DOMAIN_M4CORE_fields_

  struct DOMAIN_M4CORE : ftl::mmio::Register<
      0x40C0428Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_M4CORE_fields_::CPU0_RUN,
      DOMAIN_M4CORE_fields_::CPU0_WAIT,
      DOMAIN_M4CORE_fields_::CPU0_STOP,
      DOMAIN_M4CORE_fields_::CPU0_SUSP,
      DOMAIN_M4CORE_fields_::CPU1_RUN,
      DOMAIN_M4CORE_fields_::CPU1_WAIT,
      DOMAIN_M4CORE_fields_::CPU1_STOP,
      DOMAIN_M4CORE_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_M4CORE_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_M4CORE_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_M4CORE_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_M4CORE_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_M4CORE_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_M4CORE_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_M4CORE_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_M4CORE_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_M4CORE_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_M4CORE_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_M4CORE_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_M4CORE_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_M4CORE_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_M4CORE_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_M4CORE_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_M4CORE_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_M4CORE_fields_ {
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
  };  // struct STAT_M4CORE_fields_

  struct STAT_M4CORE : ftl::mmio::Register<
      0x40C04290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_M4CORE_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_M4CORE_fields_::RST_BY_HW,
      STAT_M4CORE_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_M4CORE_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_M4CORE_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_M4CORE_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_M4CORE_fields_::UNDER_RST;
    using RST_BY_HW = STAT_M4CORE_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_M4CORE_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_M7CORE_fields_ {
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
  };  // struct AUTHEN_M7CORE_fields_

  struct AUTHEN_M7CORE : ftl::mmio::Register<
      0x40C042A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_M7CORE_fields_::DOMAIN_MODE,
      AUTHEN_M7CORE_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_M7CORE_fields_::LOCK_MODE,
      AUTHEN_M7CORE_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_M7CORE_fields_::LOCK_ASSIGN,
      AUTHEN_M7CORE_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_M7CORE_fields_::LOCK_LIST,
      AUTHEN_M7CORE_fields_::USER,
      AUTHEN_M7CORE_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_M7CORE_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_M7CORE_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_M7CORE_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_M7CORE_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_M7CORE_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_M7CORE_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_M7CORE_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_M7CORE_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_M7CORE_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_M7CORE_fields_::LOCK_LIST;
    using USER = AUTHEN_M7CORE_fields_::USER;
    using NONSECURE = AUTHEN_M7CORE_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_M7CORE_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_M7CORE_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_M7CORE_fields_

  struct CTRL_M7CORE : ftl::mmio::Register<
      0x40C042A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_M7CORE_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_M7CORE_fields_::eSW_RESET;
    using SW_RESET = CTRL_M7CORE_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_M7CORE_fields_ {
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
  };  // struct SETPOINT_M7CORE_fields_

  struct SETPOINT_M7CORE : ftl::mmio::Register<
      0x40C042A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_M7CORE_fields_::SETPOINT0,
      SETPOINT_M7CORE_fields_::SETPOINT1,
      SETPOINT_M7CORE_fields_::SETPOINT2,
      SETPOINT_M7CORE_fields_::SETPOINT3,
      SETPOINT_M7CORE_fields_::SETPOINT4,
      SETPOINT_M7CORE_fields_::SETPOINT5,
      SETPOINT_M7CORE_fields_::SETPOINT6,
      SETPOINT_M7CORE_fields_::SETPOINT7,
      SETPOINT_M7CORE_fields_::SETPOINT8,
      SETPOINT_M7CORE_fields_::SETPOINT9,
      SETPOINT_M7CORE_fields_::SETPOINT10,
      SETPOINT_M7CORE_fields_::SETPOINT11,
      SETPOINT_M7CORE_fields_::SETPOINT12,
      SETPOINT_M7CORE_fields_::SETPOINT13,
      SETPOINT_M7CORE_fields_::SETPOINT14,
      SETPOINT_M7CORE_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_M7CORE_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_M7CORE_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_M7CORE_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_M7CORE_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_M7CORE_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_M7CORE_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_M7CORE_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_M7CORE_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_M7CORE_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_M7CORE_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_M7CORE_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_M7CORE_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_M7CORE_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_M7CORE_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_M7CORE_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_M7CORE_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_M7CORE_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_M7CORE_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_M7CORE_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_M7CORE_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_M7CORE_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_M7CORE_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_M7CORE_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_M7CORE_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_M7CORE_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_M7CORE_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_M7CORE_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_M7CORE_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_M7CORE_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_M7CORE_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_M7CORE_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_M7CORE_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_M7CORE_fields_ {
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
  };  // struct DOMAIN_M7CORE_fields_

  struct DOMAIN_M7CORE : ftl::mmio::Register<
      0x40C042ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_M7CORE_fields_::CPU0_RUN,
      DOMAIN_M7CORE_fields_::CPU0_WAIT,
      DOMAIN_M7CORE_fields_::CPU0_STOP,
      DOMAIN_M7CORE_fields_::CPU0_SUSP,
      DOMAIN_M7CORE_fields_::CPU1_RUN,
      DOMAIN_M7CORE_fields_::CPU1_WAIT,
      DOMAIN_M7CORE_fields_::CPU1_STOP,
      DOMAIN_M7CORE_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_M7CORE_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_M7CORE_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_M7CORE_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_M7CORE_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_M7CORE_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_M7CORE_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_M7CORE_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_M7CORE_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_M7CORE_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_M7CORE_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_M7CORE_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_M7CORE_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_M7CORE_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_M7CORE_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_M7CORE_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_M7CORE_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_M7CORE_fields_ {
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
  };  // struct STAT_M7CORE_fields_

  struct STAT_M7CORE : ftl::mmio::Register<
      0x40C042B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_M7CORE_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_M7CORE_fields_::RST_BY_HW,
      STAT_M7CORE_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_M7CORE_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_M7CORE_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_M7CORE_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_M7CORE_fields_::UNDER_RST;
    using RST_BY_HW = STAT_M7CORE_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_M7CORE_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_M4DEBUG_fields_ {
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
  };  // struct AUTHEN_M4DEBUG_fields_

  struct AUTHEN_M4DEBUG : ftl::mmio::Register<
      0x40C042C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_M4DEBUG_fields_::DOMAIN_MODE,
      AUTHEN_M4DEBUG_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_M4DEBUG_fields_::LOCK_MODE,
      AUTHEN_M4DEBUG_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_M4DEBUG_fields_::LOCK_ASSIGN,
      AUTHEN_M4DEBUG_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_M4DEBUG_fields_::LOCK_LIST,
      AUTHEN_M4DEBUG_fields_::USER,
      AUTHEN_M4DEBUG_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_M4DEBUG_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_M4DEBUG_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_M4DEBUG_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_M4DEBUG_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_M4DEBUG_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_M4DEBUG_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_M4DEBUG_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_M4DEBUG_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_M4DEBUG_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_M4DEBUG_fields_::LOCK_LIST;
    using USER = AUTHEN_M4DEBUG_fields_::USER;
    using NONSECURE = AUTHEN_M4DEBUG_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_M4DEBUG_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_M4DEBUG_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_M4DEBUG_fields_

  struct CTRL_M4DEBUG : ftl::mmio::Register<
      0x40C042C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_M4DEBUG_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_M4DEBUG_fields_::eSW_RESET;
    using SW_RESET = CTRL_M4DEBUG_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_M4DEBUG_fields_ {
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
  };  // struct SETPOINT_M4DEBUG_fields_

  struct SETPOINT_M4DEBUG : ftl::mmio::Register<
      0x40C042C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_M4DEBUG_fields_::SETPOINT0,
      SETPOINT_M4DEBUG_fields_::SETPOINT1,
      SETPOINT_M4DEBUG_fields_::SETPOINT2,
      SETPOINT_M4DEBUG_fields_::SETPOINT3,
      SETPOINT_M4DEBUG_fields_::SETPOINT4,
      SETPOINT_M4DEBUG_fields_::SETPOINT5,
      SETPOINT_M4DEBUG_fields_::SETPOINT6,
      SETPOINT_M4DEBUG_fields_::SETPOINT7,
      SETPOINT_M4DEBUG_fields_::SETPOINT8,
      SETPOINT_M4DEBUG_fields_::SETPOINT9,
      SETPOINT_M4DEBUG_fields_::SETPOINT10,
      SETPOINT_M4DEBUG_fields_::SETPOINT11,
      SETPOINT_M4DEBUG_fields_::SETPOINT12,
      SETPOINT_M4DEBUG_fields_::SETPOINT13,
      SETPOINT_M4DEBUG_fields_::SETPOINT14,
      SETPOINT_M4DEBUG_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_M4DEBUG_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_M4DEBUG_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_M4DEBUG_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_M4DEBUG_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_M4DEBUG_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_M4DEBUG_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_M4DEBUG_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_M4DEBUG_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_M4DEBUG_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_M4DEBUG_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_M4DEBUG_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_M4DEBUG_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_M4DEBUG_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_M4DEBUG_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_M4DEBUG_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_M4DEBUG_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_M4DEBUG_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_M4DEBUG_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_M4DEBUG_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_M4DEBUG_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_M4DEBUG_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_M4DEBUG_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_M4DEBUG_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_M4DEBUG_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_M4DEBUG_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_M4DEBUG_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_M4DEBUG_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_M4DEBUG_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_M4DEBUG_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_M4DEBUG_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_M4DEBUG_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_M4DEBUG_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_M4DEBUG_fields_ {
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
  };  // struct DOMAIN_M4DEBUG_fields_

  struct DOMAIN_M4DEBUG : ftl::mmio::Register<
      0x40C042CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_M4DEBUG_fields_::CPU0_RUN,
      DOMAIN_M4DEBUG_fields_::CPU0_WAIT,
      DOMAIN_M4DEBUG_fields_::CPU0_STOP,
      DOMAIN_M4DEBUG_fields_::CPU0_SUSP,
      DOMAIN_M4DEBUG_fields_::CPU1_RUN,
      DOMAIN_M4DEBUG_fields_::CPU1_WAIT,
      DOMAIN_M4DEBUG_fields_::CPU1_STOP,
      DOMAIN_M4DEBUG_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_M4DEBUG_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_M4DEBUG_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_M4DEBUG_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_M4DEBUG_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_M4DEBUG_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_M4DEBUG_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_M4DEBUG_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_M4DEBUG_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_M4DEBUG_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_M4DEBUG_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_M4DEBUG_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_M4DEBUG_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_M4DEBUG_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_M4DEBUG_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_M4DEBUG_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_M4DEBUG_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_M4DEBUG_fields_ {
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
  };  // struct STAT_M4DEBUG_fields_

  struct STAT_M4DEBUG : ftl::mmio::Register<
      0x40C042D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_M4DEBUG_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_M4DEBUG_fields_::RST_BY_HW,
      STAT_M4DEBUG_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_M4DEBUG_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_M4DEBUG_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_M4DEBUG_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_M4DEBUG_fields_::UNDER_RST;
    using RST_BY_HW = STAT_M4DEBUG_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_M4DEBUG_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_M7DEBUG_fields_ {
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
  };  // struct AUTHEN_M7DEBUG_fields_

  struct AUTHEN_M7DEBUG : ftl::mmio::Register<
      0x40C042E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_M7DEBUG_fields_::DOMAIN_MODE,
      AUTHEN_M7DEBUG_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_M7DEBUG_fields_::LOCK_MODE,
      AUTHEN_M7DEBUG_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_M7DEBUG_fields_::LOCK_ASSIGN,
      AUTHEN_M7DEBUG_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_M7DEBUG_fields_::LOCK_LIST,
      AUTHEN_M7DEBUG_fields_::USER,
      AUTHEN_M7DEBUG_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_M7DEBUG_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_M7DEBUG_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_M7DEBUG_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_M7DEBUG_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_M7DEBUG_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_M7DEBUG_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_M7DEBUG_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_M7DEBUG_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_M7DEBUG_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_M7DEBUG_fields_::LOCK_LIST;
    using USER = AUTHEN_M7DEBUG_fields_::USER;
    using NONSECURE = AUTHEN_M7DEBUG_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_M7DEBUG_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_M7DEBUG_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_M7DEBUG_fields_

  struct CTRL_M7DEBUG : ftl::mmio::Register<
      0x40C042E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_M7DEBUG_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_M7DEBUG_fields_::eSW_RESET;
    using SW_RESET = CTRL_M7DEBUG_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_M7DEBUG_fields_ {
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
  };  // struct SETPOINT_M7DEBUG_fields_

  struct SETPOINT_M7DEBUG : ftl::mmio::Register<
      0x40C042E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_M7DEBUG_fields_::SETPOINT0,
      SETPOINT_M7DEBUG_fields_::SETPOINT1,
      SETPOINT_M7DEBUG_fields_::SETPOINT2,
      SETPOINT_M7DEBUG_fields_::SETPOINT3,
      SETPOINT_M7DEBUG_fields_::SETPOINT4,
      SETPOINT_M7DEBUG_fields_::SETPOINT5,
      SETPOINT_M7DEBUG_fields_::SETPOINT6,
      SETPOINT_M7DEBUG_fields_::SETPOINT7,
      SETPOINT_M7DEBUG_fields_::SETPOINT8,
      SETPOINT_M7DEBUG_fields_::SETPOINT9,
      SETPOINT_M7DEBUG_fields_::SETPOINT10,
      SETPOINT_M7DEBUG_fields_::SETPOINT11,
      SETPOINT_M7DEBUG_fields_::SETPOINT12,
      SETPOINT_M7DEBUG_fields_::SETPOINT13,
      SETPOINT_M7DEBUG_fields_::SETPOINT14,
      SETPOINT_M7DEBUG_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_M7DEBUG_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_M7DEBUG_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_M7DEBUG_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_M7DEBUG_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_M7DEBUG_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_M7DEBUG_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_M7DEBUG_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_M7DEBUG_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_M7DEBUG_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_M7DEBUG_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_M7DEBUG_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_M7DEBUG_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_M7DEBUG_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_M7DEBUG_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_M7DEBUG_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_M7DEBUG_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_M7DEBUG_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_M7DEBUG_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_M7DEBUG_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_M7DEBUG_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_M7DEBUG_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_M7DEBUG_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_M7DEBUG_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_M7DEBUG_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_M7DEBUG_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_M7DEBUG_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_M7DEBUG_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_M7DEBUG_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_M7DEBUG_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_M7DEBUG_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_M7DEBUG_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_M7DEBUG_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_M7DEBUG_fields_ {
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
  };  // struct DOMAIN_M7DEBUG_fields_

  struct DOMAIN_M7DEBUG : ftl::mmio::Register<
      0x40C042ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_M7DEBUG_fields_::CPU0_RUN,
      DOMAIN_M7DEBUG_fields_::CPU0_WAIT,
      DOMAIN_M7DEBUG_fields_::CPU0_STOP,
      DOMAIN_M7DEBUG_fields_::CPU0_SUSP,
      DOMAIN_M7DEBUG_fields_::CPU1_RUN,
      DOMAIN_M7DEBUG_fields_::CPU1_WAIT,
      DOMAIN_M7DEBUG_fields_::CPU1_STOP,
      DOMAIN_M7DEBUG_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_M7DEBUG_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_M7DEBUG_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_M7DEBUG_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_M7DEBUG_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_M7DEBUG_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_M7DEBUG_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_M7DEBUG_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_M7DEBUG_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_M7DEBUG_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_M7DEBUG_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_M7DEBUG_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_M7DEBUG_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_M7DEBUG_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_M7DEBUG_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_M7DEBUG_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_M7DEBUG_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_M7DEBUG_fields_ {
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
  };  // struct STAT_M7DEBUG_fields_

  struct STAT_M7DEBUG : ftl::mmio::Register<
      0x40C042F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_M7DEBUG_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_M7DEBUG_fields_::RST_BY_HW,
      STAT_M7DEBUG_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_M7DEBUG_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_M7DEBUG_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_M7DEBUG_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_M7DEBUG_fields_::UNDER_RST;
    using RST_BY_HW = STAT_M7DEBUG_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_M7DEBUG_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_USBPHY1_fields_ {
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
  };  // struct AUTHEN_USBPHY1_fields_

  struct AUTHEN_USBPHY1 : ftl::mmio::Register<
      0x40C04300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_USBPHY1_fields_::DOMAIN_MODE,
      AUTHEN_USBPHY1_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_USBPHY1_fields_::LOCK_MODE,
      AUTHEN_USBPHY1_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_USBPHY1_fields_::LOCK_ASSIGN,
      AUTHEN_USBPHY1_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_USBPHY1_fields_::LOCK_LIST,
      AUTHEN_USBPHY1_fields_::USER,
      AUTHEN_USBPHY1_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_USBPHY1_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_USBPHY1_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_USBPHY1_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_USBPHY1_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_USBPHY1_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_USBPHY1_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_USBPHY1_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_USBPHY1_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_USBPHY1_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_USBPHY1_fields_::LOCK_LIST;
    using USER = AUTHEN_USBPHY1_fields_::USER;
    using NONSECURE = AUTHEN_USBPHY1_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_USBPHY1_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_USBPHY1_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_USBPHY1_fields_

  struct CTRL_USBPHY1 : ftl::mmio::Register<
      0x40C04304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_USBPHY1_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_USBPHY1_fields_::eSW_RESET;
    using SW_RESET = CTRL_USBPHY1_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_USBPHY1_fields_ {
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
  };  // struct SETPOINT_USBPHY1_fields_

  struct SETPOINT_USBPHY1 : ftl::mmio::Register<
      0x40C04308u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_USBPHY1_fields_::SETPOINT0,
      SETPOINT_USBPHY1_fields_::SETPOINT1,
      SETPOINT_USBPHY1_fields_::SETPOINT2,
      SETPOINT_USBPHY1_fields_::SETPOINT3,
      SETPOINT_USBPHY1_fields_::SETPOINT4,
      SETPOINT_USBPHY1_fields_::SETPOINT5,
      SETPOINT_USBPHY1_fields_::SETPOINT6,
      SETPOINT_USBPHY1_fields_::SETPOINT7,
      SETPOINT_USBPHY1_fields_::SETPOINT8,
      SETPOINT_USBPHY1_fields_::SETPOINT9,
      SETPOINT_USBPHY1_fields_::SETPOINT10,
      SETPOINT_USBPHY1_fields_::SETPOINT11,
      SETPOINT_USBPHY1_fields_::SETPOINT12,
      SETPOINT_USBPHY1_fields_::SETPOINT13,
      SETPOINT_USBPHY1_fields_::SETPOINT14,
      SETPOINT_USBPHY1_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_USBPHY1_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_USBPHY1_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_USBPHY1_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_USBPHY1_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_USBPHY1_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_USBPHY1_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_USBPHY1_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_USBPHY1_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_USBPHY1_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_USBPHY1_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_USBPHY1_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_USBPHY1_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_USBPHY1_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_USBPHY1_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_USBPHY1_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_USBPHY1_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_USBPHY1_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_USBPHY1_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_USBPHY1_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_USBPHY1_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_USBPHY1_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_USBPHY1_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_USBPHY1_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_USBPHY1_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_USBPHY1_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_USBPHY1_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_USBPHY1_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_USBPHY1_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_USBPHY1_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_USBPHY1_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_USBPHY1_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_USBPHY1_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_USBPHY1_fields_ {
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
  };  // struct DOMAIN_USBPHY1_fields_

  struct DOMAIN_USBPHY1 : ftl::mmio::Register<
      0x40C0430Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_USBPHY1_fields_::CPU0_RUN,
      DOMAIN_USBPHY1_fields_::CPU0_WAIT,
      DOMAIN_USBPHY1_fields_::CPU0_STOP,
      DOMAIN_USBPHY1_fields_::CPU0_SUSP,
      DOMAIN_USBPHY1_fields_::CPU1_RUN,
      DOMAIN_USBPHY1_fields_::CPU1_WAIT,
      DOMAIN_USBPHY1_fields_::CPU1_STOP,
      DOMAIN_USBPHY1_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_USBPHY1_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_USBPHY1_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_USBPHY1_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_USBPHY1_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_USBPHY1_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_USBPHY1_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_USBPHY1_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_USBPHY1_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_USBPHY1_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_USBPHY1_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_USBPHY1_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_USBPHY1_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_USBPHY1_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_USBPHY1_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_USBPHY1_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_USBPHY1_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_USBPHY1_fields_ {
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
  };  // struct STAT_USBPHY1_fields_

  struct STAT_USBPHY1 : ftl::mmio::Register<
      0x40C04310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_USBPHY1_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_USBPHY1_fields_::RST_BY_HW,
      STAT_USBPHY1_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_USBPHY1_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_USBPHY1_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_USBPHY1_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_USBPHY1_fields_::UNDER_RST;
    using RST_BY_HW = STAT_USBPHY1_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_USBPHY1_fields_::RST_BY_SW;
  };

  // Slice Authentication Register
  struct AUTHEN_USBPHY2_fields_ {
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
  };  // struct AUTHEN_USBPHY2_fields_

  struct AUTHEN_USBPHY2 : ftl::mmio::Register<
      0x40C04320u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AUTHEN_USBPHY2_fields_::DOMAIN_MODE,
      AUTHEN_USBPHY2_fields_::SETPOINT_MODE,
      ftl::mmio::Reserved<5, 2>,
      AUTHEN_USBPHY2_fields_::LOCK_MODE,
      AUTHEN_USBPHY2_fields_::ASSIGN_LIST,
      ftl::mmio::Reserved<3, 12>,
      AUTHEN_USBPHY2_fields_::LOCK_ASSIGN,
      AUTHEN_USBPHY2_fields_::WHITE_LIST,
      ftl::mmio::Reserved<3, 20>,
      AUTHEN_USBPHY2_fields_::LOCK_LIST,
      AUTHEN_USBPHY2_fields_::USER,
      AUTHEN_USBPHY2_fields_::NONSECURE,
      ftl::mmio::Reserved<5, 26>,
      AUTHEN_USBPHY2_fields_::LOCK_SETTING> {
    using eDOMAIN_MODE = AUTHEN_USBPHY2_fields_::eDOMAIN_MODE;
    using eSETPOINT_MODE = AUTHEN_USBPHY2_fields_::eSETPOINT_MODE;
    using DOMAIN_MODE = AUTHEN_USBPHY2_fields_::DOMAIN_MODE;
    using SETPOINT_MODE = AUTHEN_USBPHY2_fields_::SETPOINT_MODE;
    using LOCK_MODE = AUTHEN_USBPHY2_fields_::LOCK_MODE;
    using ASSIGN_LIST = AUTHEN_USBPHY2_fields_::ASSIGN_LIST;
    using LOCK_ASSIGN = AUTHEN_USBPHY2_fields_::LOCK_ASSIGN;
    using WHITE_LIST = AUTHEN_USBPHY2_fields_::WHITE_LIST;
    using LOCK_LIST = AUTHEN_USBPHY2_fields_::LOCK_LIST;
    using USER = AUTHEN_USBPHY2_fields_::USER;
    using NONSECURE = AUTHEN_USBPHY2_fields_::NONSECURE;
    using LOCK_SETTING = AUTHEN_USBPHY2_fields_::LOCK_SETTING;
  };

  // Slice Control Register
  struct CTRL_USBPHY2_fields_ {
    enum class eSW_RESET : std::uint32_t {
      // do not assert slice software reset
      eSW_RESET_0 = 0,
      // assert slice software reset
      eSW_RESET_1 = 1,
    };

    // This is a self clearing bit
    using SW_RESET = ftl::mmio::Field<1, 0, eSW_RESET, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CTRL_USBPHY2_fields_

  struct CTRL_USBPHY2 : ftl::mmio::Register<
      0x40C04324u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CTRL_USBPHY2_fields_::SW_RESET,
      ftl::mmio::Reserved<31, 1>> {
    using eSW_RESET = CTRL_USBPHY2_fields_::eSW_RESET;
    using SW_RESET = CTRL_USBPHY2_fields_::SW_RESET;
  };

  // Slice Setpoint Config Register
  struct SETPOINT_USBPHY2_fields_ {
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
  };  // struct SETPOINT_USBPHY2_fields_

  struct SETPOINT_USBPHY2 : ftl::mmio::Register<
      0x40C04328u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SETPOINT_USBPHY2_fields_::SETPOINT0,
      SETPOINT_USBPHY2_fields_::SETPOINT1,
      SETPOINT_USBPHY2_fields_::SETPOINT2,
      SETPOINT_USBPHY2_fields_::SETPOINT3,
      SETPOINT_USBPHY2_fields_::SETPOINT4,
      SETPOINT_USBPHY2_fields_::SETPOINT5,
      SETPOINT_USBPHY2_fields_::SETPOINT6,
      SETPOINT_USBPHY2_fields_::SETPOINT7,
      SETPOINT_USBPHY2_fields_::SETPOINT8,
      SETPOINT_USBPHY2_fields_::SETPOINT9,
      SETPOINT_USBPHY2_fields_::SETPOINT10,
      SETPOINT_USBPHY2_fields_::SETPOINT11,
      SETPOINT_USBPHY2_fields_::SETPOINT12,
      SETPOINT_USBPHY2_fields_::SETPOINT13,
      SETPOINT_USBPHY2_fields_::SETPOINT14,
      SETPOINT_USBPHY2_fields_::SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSETPOINT0 = SETPOINT_USBPHY2_fields_::eSETPOINT0;
    using eSETPOINT1 = SETPOINT_USBPHY2_fields_::eSETPOINT1;
    using eSETPOINT2 = SETPOINT_USBPHY2_fields_::eSETPOINT2;
    using eSETPOINT3 = SETPOINT_USBPHY2_fields_::eSETPOINT3;
    using eSETPOINT4 = SETPOINT_USBPHY2_fields_::eSETPOINT4;
    using eSETPOINT5 = SETPOINT_USBPHY2_fields_::eSETPOINT5;
    using eSETPOINT6 = SETPOINT_USBPHY2_fields_::eSETPOINT6;
    using eSETPOINT7 = SETPOINT_USBPHY2_fields_::eSETPOINT7;
    using eSETPOINT8 = SETPOINT_USBPHY2_fields_::eSETPOINT8;
    using eSETPOINT9 = SETPOINT_USBPHY2_fields_::eSETPOINT9;
    using eSETPOINT10 = SETPOINT_USBPHY2_fields_::eSETPOINT10;
    using eSETPOINT11 = SETPOINT_USBPHY2_fields_::eSETPOINT11;
    using eSETPOINT12 = SETPOINT_USBPHY2_fields_::eSETPOINT12;
    using eSETPOINT13 = SETPOINT_USBPHY2_fields_::eSETPOINT13;
    using eSETPOINT14 = SETPOINT_USBPHY2_fields_::eSETPOINT14;
    using eSETPOINT15 = SETPOINT_USBPHY2_fields_::eSETPOINT15;
    using SETPOINT0 = SETPOINT_USBPHY2_fields_::SETPOINT0;
    using SETPOINT1 = SETPOINT_USBPHY2_fields_::SETPOINT1;
    using SETPOINT2 = SETPOINT_USBPHY2_fields_::SETPOINT2;
    using SETPOINT3 = SETPOINT_USBPHY2_fields_::SETPOINT3;
    using SETPOINT4 = SETPOINT_USBPHY2_fields_::SETPOINT4;
    using SETPOINT5 = SETPOINT_USBPHY2_fields_::SETPOINT5;
    using SETPOINT6 = SETPOINT_USBPHY2_fields_::SETPOINT6;
    using SETPOINT7 = SETPOINT_USBPHY2_fields_::SETPOINT7;
    using SETPOINT8 = SETPOINT_USBPHY2_fields_::SETPOINT8;
    using SETPOINT9 = SETPOINT_USBPHY2_fields_::SETPOINT9;
    using SETPOINT10 = SETPOINT_USBPHY2_fields_::SETPOINT10;
    using SETPOINT11 = SETPOINT_USBPHY2_fields_::SETPOINT11;
    using SETPOINT12 = SETPOINT_USBPHY2_fields_::SETPOINT12;
    using SETPOINT13 = SETPOINT_USBPHY2_fields_::SETPOINT13;
    using SETPOINT14 = SETPOINT_USBPHY2_fields_::SETPOINT14;
    using SETPOINT15 = SETPOINT_USBPHY2_fields_::SETPOINT15;
  };

  // Slice Domain Config Register
  struct DOMAIN_USBPHY2_fields_ {
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
  };  // struct DOMAIN_USBPHY2_fields_

  struct DOMAIN_USBPHY2 : ftl::mmio::Register<
      0x40C0432Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DOMAIN_USBPHY2_fields_::CPU0_RUN,
      DOMAIN_USBPHY2_fields_::CPU0_WAIT,
      DOMAIN_USBPHY2_fields_::CPU0_STOP,
      DOMAIN_USBPHY2_fields_::CPU0_SUSP,
      DOMAIN_USBPHY2_fields_::CPU1_RUN,
      DOMAIN_USBPHY2_fields_::CPU1_WAIT,
      DOMAIN_USBPHY2_fields_::CPU1_STOP,
      DOMAIN_USBPHY2_fields_::CPU1_SUSP,
      ftl::mmio::Reserved<24, 8>> {
    using eCPU0_RUN = DOMAIN_USBPHY2_fields_::eCPU0_RUN;
    using eCPU0_WAIT = DOMAIN_USBPHY2_fields_::eCPU0_WAIT;
    using eCPU0_STOP = DOMAIN_USBPHY2_fields_::eCPU0_STOP;
    using eCPU0_SUSP = DOMAIN_USBPHY2_fields_::eCPU0_SUSP;
    using eCPU1_RUN = DOMAIN_USBPHY2_fields_::eCPU1_RUN;
    using eCPU1_WAIT = DOMAIN_USBPHY2_fields_::eCPU1_WAIT;
    using eCPU1_STOP = DOMAIN_USBPHY2_fields_::eCPU1_STOP;
    using eCPU1_SUSP = DOMAIN_USBPHY2_fields_::eCPU1_SUSP;
    using CPU0_RUN = DOMAIN_USBPHY2_fields_::CPU0_RUN;
    using CPU0_WAIT = DOMAIN_USBPHY2_fields_::CPU0_WAIT;
    using CPU0_STOP = DOMAIN_USBPHY2_fields_::CPU0_STOP;
    using CPU0_SUSP = DOMAIN_USBPHY2_fields_::CPU0_SUSP;
    using CPU1_RUN = DOMAIN_USBPHY2_fields_::CPU1_RUN;
    using CPU1_WAIT = DOMAIN_USBPHY2_fields_::CPU1_WAIT;
    using CPU1_STOP = DOMAIN_USBPHY2_fields_::CPU1_STOP;
    using CPU1_SUSP = DOMAIN_USBPHY2_fields_::CPU1_SUSP;
  };

  // Slice Status Register
  struct STAT_USBPHY2_fields_ {
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
  };  // struct STAT_USBPHY2_fields_

  struct STAT_USBPHY2 : ftl::mmio::Register<
      0x40C04330u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      STAT_USBPHY2_fields_::UNDER_RST,
      ftl::mmio::Reserved<1, 1>,
      STAT_USBPHY2_fields_::RST_BY_HW,
      STAT_USBPHY2_fields_::RST_BY_SW,
      ftl::mmio::Reserved<28, 4>> {
    using eUNDER_RST = STAT_USBPHY2_fields_::eUNDER_RST;
    using eRST_BY_HW = STAT_USBPHY2_fields_::eRST_BY_HW;
    using eRST_BY_SW = STAT_USBPHY2_fields_::eRST_BY_SW;
    using UNDER_RST = STAT_USBPHY2_fields_::UNDER_RST;
    using RST_BY_HW = STAT_USBPHY2_fields_::RST_BY_HW;
    using RST_BY_SW = STAT_USBPHY2_fields_::RST_BY_SW;
  };

};

}  // namespace regs