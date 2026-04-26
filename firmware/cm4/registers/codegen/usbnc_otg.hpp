#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USBNC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct UsbncOtg {
  static_assert(
        Instance == 1u || Instance == 2u,
        "UsbncOtg: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40430200u :
      Instance == 2u ? 0x4042C200u :
      0u;

  // USB OTG Control 1 Register
  struct Ctrl1Fields {
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
  };  // struct Ctrl1Fields

  struct CTRL1 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x30001000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<7, 0>,
      typename Ctrl1Fields::OVER_CUR_DIS,
      typename Ctrl1Fields::OVER_CUR_POL,
      typename Ctrl1Fields::PWR_POL,
      typename Ctrl1Fields::WIE,
      ftl::mmio::Reserved<3, 11>,
      typename Ctrl1Fields::WKUP_SW_EN,
      typename Ctrl1Fields::WKUP_SW,
      typename Ctrl1Fields::WKUP_ID_EN,
      typename Ctrl1Fields::WKUP_VBUS_EN,
      ftl::mmio::Reserved<11, 18>,
      typename Ctrl1Fields::WKUP_DPDM_EN,
      ftl::mmio::Reserved<1, 30>,
      typename Ctrl1Fields::WIR> {
    using eOVER_CUR_DIS = typename Ctrl1Fields::eOVER_CUR_DIS;
    using eOVER_CUR_POL = typename Ctrl1Fields::eOVER_CUR_POL;
    using ePWR_POL = typename Ctrl1Fields::ePWR_POL;
    using eWIE = typename Ctrl1Fields::eWIE;
    using eWKUP_SW_EN = typename Ctrl1Fields::eWKUP_SW_EN;
    using eWKUP_SW = typename Ctrl1Fields::eWKUP_SW;
    using eWKUP_ID_EN = typename Ctrl1Fields::eWKUP_ID_EN;
    using eWKUP_VBUS_EN = typename Ctrl1Fields::eWKUP_VBUS_EN;
    using eWKUP_DPDM_EN = typename Ctrl1Fields::eWKUP_DPDM_EN;
    using eWIR = typename Ctrl1Fields::eWIR;
    using OVER_CUR_DIS = typename Ctrl1Fields::OVER_CUR_DIS;
    using OVER_CUR_POL = typename Ctrl1Fields::OVER_CUR_POL;
    using PWR_POL = typename Ctrl1Fields::PWR_POL;
    using WIE = typename Ctrl1Fields::WIE;
    using WKUP_SW_EN = typename Ctrl1Fields::WKUP_SW_EN;
    using WKUP_SW = typename Ctrl1Fields::WKUP_SW;
    using WKUP_ID_EN = typename Ctrl1Fields::WKUP_ID_EN;
    using WKUP_VBUS_EN = typename Ctrl1Fields::WKUP_VBUS_EN;
    using WKUP_DPDM_EN = typename Ctrl1Fields::WKUP_DPDM_EN;
    using WIR = typename Ctrl1Fields::WIR;
  };

  // USB OTG Control 2 Register
  struct Ctrl2Fields {
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
  };  // struct Ctrl2Fields

  struct CTRL2 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x5F000000u,
      ftl::mmio::RW,
      typename Ctrl2Fields::VBUS_SOURCE_SEL,
      typename Ctrl2Fields::AUTURESUME_EN,
      typename Ctrl2Fields::LOWSPEED_EN,
      ftl::mmio::Reserved<27, 4>,
      typename Ctrl2Fields::UTMI_CLK_VLD> {
    using eVBUS_SOURCE_SEL = typename Ctrl2Fields::eVBUS_SOURCE_SEL;
    using eAUTURESUME_EN = typename Ctrl2Fields::eAUTURESUME_EN;
    using eLOWSPEED_EN = typename Ctrl2Fields::eLOWSPEED_EN;
    using eUTMI_CLK_VLD = typename Ctrl2Fields::eUTMI_CLK_VLD;
    using VBUS_SOURCE_SEL = typename Ctrl2Fields::VBUS_SOURCE_SEL;
    using AUTURESUME_EN = typename Ctrl2Fields::AUTURESUME_EN;
    using LOWSPEED_EN = typename Ctrl2Fields::LOWSPEED_EN;
    using UTMI_CLK_VLD = typename Ctrl2Fields::UTMI_CLK_VLD;
  };

  // USB Host HSIC Control Register
  struct HsicCtrlFields {
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
  };  // struct HsicCtrlFields

  struct HSIC_CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x10004084u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename HsicCtrlFields::HSIC_CLK_ON,
      typename HsicCtrlFields::HSIC_EN,
      ftl::mmio::Reserved<18, 13>,
      typename HsicCtrlFields::CLK_VLD> {
    using eHSIC_CLK_ON = typename HsicCtrlFields::eHSIC_CLK_ON;
    using eHSIC_EN = typename HsicCtrlFields::eHSIC_EN;
    using eCLK_VLD = typename HsicCtrlFields::eCLK_VLD;
    using HSIC_CLK_ON = typename HsicCtrlFields::HSIC_CLK_ON;
    using HSIC_EN = typename HsicCtrlFields::HSIC_EN;
    using CLK_VLD = typename HsicCtrlFields::CLK_VLD;
  };

};

}  // namespace regs