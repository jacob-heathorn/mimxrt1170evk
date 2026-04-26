#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USBNC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usbnc_otg {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Usbnc_otg: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40430200u :
      Instance == 2u ? 0x4042C200u :
      0u;

  // USB OTG Control 1 Register
  struct CTRL1_fields_ {
    enum class eOVER_CUR_DIS : std::uint32_t {
      // Enables overcurrent detection
      eOVRCRNT_DETCT_EN = 0,
      // Disables overcurrent detection
      eOVRCRNT_DETCT_DIS = 1,
    };

    enum class eOVER_CUR_POL : std::uint32_t {
      // High active (high on this signal represents an overcurrent condition)
      eACTIVE_HI_OVRCRNT = 0,
      // Low active (low on this signal represents an overcurrent condition)
      eACTIVE_LOW_OVRCRNT = 1,
    };

    enum class ePWR_POL : std::uint32_t {
      // PMIC Power Pin is Low active.
      eACTIVE_LO_PMIC = 0,
      // PMIC Power Pin is High active.
      eACTIVE_HI_PMIC = 1,
    };

    enum class eWIE : std::uint32_t {
      // Interrupt Disabled
      eINT_DIS = 0,
      // Interrupt Enabled
      eINT_EN = 1,
    };

    enum class eWKUP_SW_EN : std::uint32_t {
      // Disable
      eSW_WKUP_DIS = 0,
      // Enable
      eSW_WKUP_EN = 1,
    };

    enum class eWKUP_SW : std::uint32_t {
      // Inactive
      eINACTIVE = 0,
      // Force wake-up
      eFORCE_WKUP = 1,
    };

    enum class eWKUP_ID_EN : std::uint32_t {
      // Disable
      eWKUP_ID_DIS = 0,
      // Enable
      eWKUP_ID_EN = 1,
    };

    enum class eWKUP_VBUS_EN : std::uint32_t {
      // Disable
      eWKUP_VBUS_DIS = 0,
      // Enable
      eWKUP_VBUS_EN = 1,
    };

    enum class eWKUP_DPDM_EN : std::uint32_t {
      // DPDM changes wake-up to be disabled only when VBUS is 0.
      eDPDM_WKUP_DIS = 0,
      // (Default) DPDM changes wake-up to be enabled, it is for device only.
      eDPDM_WKUP_EN = 1,
    };

    enum class eWIR : std::uint32_t {
      // No wake-up interrupt request received
      eNO_WKUP_REQ = 0,
      // Wake-up Interrupt Request received
      eWKUP_REQ = 1,
    };

    // OVER_CUR_DIS
    using OVER_CUR_DIS = ftl::mmio::Field<1, 7, eOVER_CUR_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // OVER_CUR_POL
    using OVER_CUR_POL = ftl::mmio::Field<1, 8, eOVER_CUR_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWR_POL
    using PWR_POL = ftl::mmio::Field<1, 9, ePWR_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // WIE
    using WIE = ftl::mmio::Field<1, 10, eWIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // WKUP_SW_EN
    using WKUP_SW_EN = ftl::mmio::Field<1, 14, eWKUP_SW_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // WKUP_SW
    using WKUP_SW = ftl::mmio::Field<1, 15, eWKUP_SW, ftl::mmio::RW, ftl::mmio::Normal>;
    // WKUP_ID_EN
    using WKUP_ID_EN = ftl::mmio::Field<1, 16, eWKUP_ID_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // WKUP_VBUS_EN
    using WKUP_VBUS_EN = ftl::mmio::Field<1, 17, eWKUP_VBUS_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wake-up on DPDM change enable
    using WKUP_DPDM_EN = ftl::mmio::Field<1, 29, eWKUP_DPDM_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // WIR
    using WIR = ftl::mmio::Field<1, 31, eWIR, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CTRL1_fields_

  struct CTRL1 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x30001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename CTRL1_fields_::OVER_CUR_DIS,
      typename CTRL1_fields_::OVER_CUR_POL,
      typename CTRL1_fields_::PWR_POL,
      typename CTRL1_fields_::WIE,
      ftl::mmio::Reserved<3, 11>,
      typename CTRL1_fields_::WKUP_SW_EN,
      typename CTRL1_fields_::WKUP_SW,
      typename CTRL1_fields_::WKUP_ID_EN,
      typename CTRL1_fields_::WKUP_VBUS_EN,
      ftl::mmio::Reserved<11, 18>,
      typename CTRL1_fields_::WKUP_DPDM_EN,
      ftl::mmio::Reserved<1, 30>,
      typename CTRL1_fields_::WIR> {
    using eOVER_CUR_DIS = typename CTRL1_fields_::eOVER_CUR_DIS;
    using eOVER_CUR_POL = typename CTRL1_fields_::eOVER_CUR_POL;
    using ePWR_POL = typename CTRL1_fields_::ePWR_POL;
    using eWIE = typename CTRL1_fields_::eWIE;
    using eWKUP_SW_EN = typename CTRL1_fields_::eWKUP_SW_EN;
    using eWKUP_SW = typename CTRL1_fields_::eWKUP_SW;
    using eWKUP_ID_EN = typename CTRL1_fields_::eWKUP_ID_EN;
    using eWKUP_VBUS_EN = typename CTRL1_fields_::eWKUP_VBUS_EN;
    using eWKUP_DPDM_EN = typename CTRL1_fields_::eWKUP_DPDM_EN;
    using eWIR = typename CTRL1_fields_::eWIR;
    using OVER_CUR_DIS = typename CTRL1_fields_::OVER_CUR_DIS;
    using OVER_CUR_POL = typename CTRL1_fields_::OVER_CUR_POL;
    using PWR_POL = typename CTRL1_fields_::PWR_POL;
    using WIE = typename CTRL1_fields_::WIE;
    using WKUP_SW_EN = typename CTRL1_fields_::WKUP_SW_EN;
    using WKUP_SW = typename CTRL1_fields_::WKUP_SW;
    using WKUP_ID_EN = typename CTRL1_fields_::WKUP_ID_EN;
    using WKUP_VBUS_EN = typename CTRL1_fields_::WKUP_VBUS_EN;
    using WKUP_DPDM_EN = typename CTRL1_fields_::WKUP_DPDM_EN;
    using WIR = typename CTRL1_fields_::WIR;
  };

  // USB OTG Control 2 Register
  struct CTRL2_fields_ {
    enum class eVBUS_SOURCE_SEL : std::uint32_t {
      // vbus_valid
      eVBUS_VALID = 0,
      // sess_valid
      eSESS_VALID_1 = 1,
      // sess_valid
      eSESS_VALID_2 = 2,
      // sess_valid
      eSESS_VALID_3 = 3,
    };

    enum class eAUTURESUME_EN : std::uint32_t {
      // Default
      eDEFAULT = 0,
    };

    enum class eLOWSPEED_EN : std::uint32_t {
      // Default
      eDEFAULT = 0,
    };

    enum class eUTMI_CLK_VLD : std::uint32_t {
      // Default
      eDEFAULT = 0,
    };

    // VBUS_SOURCE_SEL
    using VBUS_SOURCE_SEL = ftl::mmio::Field<2, 0, eVBUS_SOURCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto Resume Enable
    using AUTURESUME_EN = ftl::mmio::Field<1, 2, eAUTURESUME_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // LOWSPEED_EN
    using LOWSPEED_EN = ftl::mmio::Field<1, 3, eLOWSPEED_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // UTMI_CLK_VLD
    using UTMI_CLK_VLD = ftl::mmio::Field<1, 31, eUTMI_CLK_VLD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CTRL2_fields_

  struct CTRL2 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x5F000000u,
      ftl::mmio::RW,
      typename CTRL2_fields_::VBUS_SOURCE_SEL,
      typename CTRL2_fields_::AUTURESUME_EN,
      typename CTRL2_fields_::LOWSPEED_EN,
      ftl::mmio::Reserved<27, 4>,
      typename CTRL2_fields_::UTMI_CLK_VLD> {
    using eVBUS_SOURCE_SEL = typename CTRL2_fields_::eVBUS_SOURCE_SEL;
    using eAUTURESUME_EN = typename CTRL2_fields_::eAUTURESUME_EN;
    using eLOWSPEED_EN = typename CTRL2_fields_::eLOWSPEED_EN;
    using eUTMI_CLK_VLD = typename CTRL2_fields_::eUTMI_CLK_VLD;
    using VBUS_SOURCE_SEL = typename CTRL2_fields_::VBUS_SOURCE_SEL;
    using AUTURESUME_EN = typename CTRL2_fields_::AUTURESUME_EN;
    using LOWSPEED_EN = typename CTRL2_fields_::LOWSPEED_EN;
    using UTMI_CLK_VLD = typename CTRL2_fields_::UTMI_CLK_VLD;
  };

  // USB Host HSIC Control Register
  struct HSIC_CTRL_fields_ {
    enum class eHSIC_CLK_ON : std::uint32_t {
      // Inactive
      eINACTIVE = 0,
      // Active
      eACTIVE = 1,
    };

    enum class eHSIC_EN : std::uint32_t {
      // Disabled
      eDISABLE = 0,
      // Enabled
      eENABLE = 1,
    };

    enum class eCLK_VLD : std::uint32_t {
      // Invalid
      eINVALID = 0,
      // Valid
      eVALID = 1,
    };

    // HSIC_CLK_ON
    using HSIC_CLK_ON = ftl::mmio::Field<1, 11, eHSIC_CLK_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSIC_EN
    using HSIC_EN = ftl::mmio::Field<1, 12, eHSIC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CLK_VLD
    using CLK_VLD = ftl::mmio::Field<1, 31, eCLK_VLD, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HSIC_CTRL_fields_

  struct HSIC_CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x10004084u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename HSIC_CTRL_fields_::HSIC_CLK_ON,
      typename HSIC_CTRL_fields_::HSIC_EN,
      ftl::mmio::Reserved<18, 13>,
      typename HSIC_CTRL_fields_::CLK_VLD> {
    using eHSIC_CLK_ON = typename HSIC_CTRL_fields_::eHSIC_CLK_ON;
    using eHSIC_EN = typename HSIC_CTRL_fields_::eHSIC_EN;
    using eCLK_VLD = typename HSIC_CTRL_fields_::eCLK_VLD;
    using HSIC_CLK_ON = typename HSIC_CTRL_fields_::HSIC_CLK_ON;
    using HSIC_EN = typename HSIC_CTRL_fields_::HSIC_EN;
    using CLK_VLD = typename HSIC_CTRL_fields_::CLK_VLD;
  };

};

}  // namespace regs