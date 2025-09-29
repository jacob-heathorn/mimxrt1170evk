#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// USBNC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nUSBNC_OTG1 {


// USB OTG Control 1 Register
union CTRL1 {
  
  // OVER_CUR_DIS
  enum class eOVER_CUR_DIS : uint32_t {
    // Enables overcurrent detection
    eOVRCRNT_DETCT_EN = 0,
    // Disables overcurrent detection
    eOVRCRNT_DETCT_DIS = 1,
  };
  
  // OVER_CUR_POL
  enum class eOVER_CUR_POL : uint32_t {
    // High active (high on this signal represents an overcurrent condition)
    eACTIVE_HI_OVRCRNT = 0,
    // Low active (low on this signal represents an overcurrent condition)
    eACTIVE_LOW_OVRCRNT = 1,
  };
  
  // PWR_POL
  enum class ePWR_POL : uint32_t {
    // PMIC Power Pin is Low active.
    eACTIVE_LO_PMIC = 0,
    // PMIC Power Pin is High active.
    eACTIVE_HI_PMIC = 1,
  };
  
  // WIE
  enum class eWIE : uint32_t {
    // Interrupt Disabled
    eINT_DIS = 0,
    // Interrupt Enabled
    eINT_EN = 1,
  };
  
  // WKUP_SW_EN
  enum class eWKUP_SW_EN : uint32_t {
    // Disable
    eSW_WKUP_DIS = 0,
    // Enable
    eSW_WKUP_EN = 1,
  };
  
  // WKUP_SW
  enum class eWKUP_SW : uint32_t {
    // Inactive
    eINACTIVE = 0,
    // Force wake-up
    eFORCE_WKUP = 1,
  };
  
  // WKUP_ID_EN
  enum class eWKUP_ID_EN : uint32_t {
    // Disable
    eWKUP_ID_DIS = 0,
    // Enable
    eWKUP_ID_EN = 1,
  };
  
  // WKUP_VBUS_EN
  enum class eWKUP_VBUS_EN : uint32_t {
    // Disable
    eWKUP_VBUS_DIS = 0,
    // Enable
    eWKUP_VBUS_EN = 1,
  };
  
  // Wake-up on DPDM change enable
  enum class eWKUP_DPDM_EN : uint32_t {
    // DPDM changes wake-up to be disabled only when VBUS is 0.
    eDPDM_WKUP_DIS = 0,
    // (Default) DPDM changes wake-up to be enabled, it is for device only.
    eDPDM_WKUP_EN = 1,
  };
  
  // WIR
  enum class eWIR : uint32_t {
    // No wake-up interrupt request received
    eNO_WKUP_REQ = 0,
    // Wake-up Interrupt Request received
    eWKUP_REQ = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    // read-write - OVER_CUR_DIS
    eOVER_CUR_DIS OVER_CUR_DIS : 1;
    // read-write - OVER_CUR_POL
    eOVER_CUR_POL OVER_CUR_POL : 1;
    // read-write - PWR_POL
    ePWR_POL PWR_POL : 1;
    // read-write - WIE
    eWIE WIE : 1;
    uint32_t _reserved_1 : 3;
    // read-write - WKUP_SW_EN
    eWKUP_SW_EN WKUP_SW_EN : 1;
    // read-write - WKUP_SW
    eWKUP_SW WKUP_SW : 1;
    // read-write - WKUP_ID_EN
    eWKUP_ID_EN WKUP_ID_EN : 1;
    // read-write - WKUP_VBUS_EN
    eWKUP_VBUS_EN WKUP_VBUS_EN : 1;
    uint32_t _reserved_2 : 11;
    // read-write - Wake-up on DPDM change enable
    eWKUP_DPDM_EN WKUP_DPDM_EN : 1;
    uint32_t _reserved_3 : 1;
    // read-only - WIR
    eWIR WIR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x30001000; }
  static inline volatile CTRL1 &ref() { return *reinterpret_cast<volatile CTRL1*>(0x40430200); }
};

// USB OTG Control 2 Register
union CTRL2 {
  
  // VBUS_SOURCE_SEL
  enum class eVBUS_SOURCE_SEL : uint32_t {
    // vbus_valid
    eVBUS_VALID = 0,
    // sess_valid
    eSESS_VALID_1 = 1,
    // sess_valid
    eSESS_VALID_2 = 2,
    // sess_valid
    eSESS_VALID_3 = 3,
  };
  
  // Auto Resume Enable
  enum class eAUTURESUME_EN : uint32_t {
    // Default
    eDEFAULT = 0,
  };
  
  // LOWSPEED_EN
  enum class eLOWSPEED_EN : uint32_t {
    // Default
    eDEFAULT = 0,
  };
  
  // UTMI_CLK_VLD
  enum class eUTMI_CLK_VLD : uint32_t {
    // Default
    eDEFAULT = 0,
  };
  
  // Bit field definition.
  struct {
    // read-write - VBUS_SOURCE_SEL
    eVBUS_SOURCE_SEL VBUS_SOURCE_SEL : 2;
    // read-write - Auto Resume Enable
    eAUTURESUME_EN AUTURESUME_EN : 1;
    // read-write - LOWSPEED_EN
    eLOWSPEED_EN LOWSPEED_EN : 1;
    uint32_t _reserved_0 : 27;
    // read-write - UTMI_CLK_VLD
    eUTMI_CLK_VLD UTMI_CLK_VLD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x5F000000; }
  static inline volatile CTRL2 &ref() { return *reinterpret_cast<volatile CTRL2*>(0x40430204); }
};

// USB Host HSIC Control Register
union HSIC_CTRL {
  
  // HSIC_CLK_ON
  enum class eHSIC_CLK_ON : uint32_t {
    // Inactive
    eINACTIVE = 0,
    // Active
    eACTIVE = 1,
  };
  
  // HSIC_EN
  enum class eHSIC_EN : uint32_t {
    // Disabled
    eDISABLE = 0,
    // Enabled
    eENABLE = 1,
  };
  
  // CLK_VLD
  enum class eCLK_VLD : uint32_t {
    // Invalid
    eINVALID = 0,
    // Valid
    eVALID = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - HSIC_CLK_ON
    eHSIC_CLK_ON HSIC_CLK_ON : 1;
    // read-write - HSIC_EN
    eHSIC_EN HSIC_EN : 1;
    uint32_t _reserved_1 : 18;
    // read-only - CLK_VLD
    eCLK_VLD CLK_VLD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x10004084; }
  static inline volatile HSIC_CTRL &ref() { return *reinterpret_cast<volatile HSIC_CTRL*>(0x40430210); }
};


} // namespace nUSBNC_OTG1