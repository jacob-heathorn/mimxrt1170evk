#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // USBNC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nUSBNC_OTG1 {


// USB OTG Control 1 Register
//
union CTRL1 {
  
  enum class eOVER_CUR_DIS : uint32_t {
    eOVRCRNT_DETCT_EN = 0, // Enables overcurrent detection
    eOVRCRNT_DETCT_DIS = 1, // Disables overcurrent detection
  };
  
  enum class eOVER_CUR_POL : uint32_t {
    eACTIVE_HI_OVRCRNT = 0, // High active (high on this signal represents an overcurrent condition)
    eACTIVE_LOW_OVRCRNT = 1, // Low active (low on this signal represents an overcurrent condition)
  };
  
  enum class ePWR_POL : uint32_t {
    eACTIVE_LO_PMIC = 0, // PMIC Power Pin is Low active.
    eACTIVE_HI_PMIC = 1, // PMIC Power Pin is High active.
  };
  
  enum class eWIE : uint32_t {
    eINT_DIS = 0, // Interrupt Disabled
    eINT_EN = 1, // Interrupt Enabled
  };
  
  enum class eWKUP_SW_EN : uint32_t {
    eSW_WKUP_DIS = 0, // Disable
    eSW_WKUP_EN = 1, // Enable
  };
  
  enum class eWKUP_SW : uint32_t {
    eINACTIVE = 0, // Inactive
    eFORCE_WKUP = 1, // Force wake-up
  };
  
  enum class eWKUP_ID_EN : uint32_t {
    eWKUP_ID_DIS = 0, // Disable
    eWKUP_ID_EN = 1, // Enable
  };
  
  enum class eWKUP_VBUS_EN : uint32_t {
    eWKUP_VBUS_DIS = 0, // Disable
    eWKUP_VBUS_EN = 1, // Enable
  };
  
  enum class eWKUP_DPDM_EN : uint32_t {
    eDPDM_WKUP_DIS = 0, // DPDM changes wake-up to be disabled only when VBUS is 0.
    eDPDM_WKUP_EN = 1, // (Default) DPDM changes wake-up to be enabled, it is for device only.
  };
  
  enum class eWIR : uint32_t {
    eNO_WKUP_REQ = 0, // No wake-up interrupt request received
    eWKUP_REQ = 1, // Wake-up Interrupt Request received
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 7;
    eOVER_CUR_DIS OVER_CUR_DIS : 1;
    eOVER_CUR_POL OVER_CUR_POL : 1;
    ePWR_POL PWR_POL : 1;
    eWIE WIE : 1;
    uint32_t _reserved_4 : 3;
    eWKUP_SW_EN WKUP_SW_EN : 1;
    eWKUP_SW WKUP_SW : 1;
    eWKUP_ID_EN WKUP_ID_EN : 1;
    eWKUP_VBUS_EN WKUP_VBUS_EN : 1;
    uint32_t _reserved_8 : 11;
    eWKUP_DPDM_EN WKUP_DPDM_EN : 1;
    uint32_t _reserved_9 : 1;
    eWIR WIR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x30001000; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x40430200); }
};

// USB OTG Control 2 Register
//
union CTRL2 {
  
  enum class eVBUS_SOURCE_SEL : uint32_t {
    eVBUS_VALID = 0, // vbus_valid
    eSESS_VALID_1 = 1, // sess_valid
    eSESS_VALID_2 = 2, // sess_valid
    eSESS_VALID_3 = 3, // sess_valid
  };
  
  enum class eAUTURESUME_EN : uint32_t {
    eDEFAULT = 0, // Default
  };
  
  enum class eLOWSPEED_EN : uint32_t {
    eDEFAULT = 0, // Default
  };
  
  enum class eUTMI_CLK_VLD : uint32_t {
    eDEFAULT = 0, // Default
  };
  
  // Bit field definition.
  struct {
    eVBUS_SOURCE_SEL VBUS_SOURCE_SEL : 2;
    eAUTURESUME_EN AUTURESUME_EN : 1;
    eLOWSPEED_EN LOWSPEED_EN : 1;
    uint32_t _reserved_3 : 27;
    eUTMI_CLK_VLD UTMI_CLK_VLD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x5F000000; }
  static inline volatile CTRL2 &Instance() { return *reinterpret_cast<volatile CTRL2*>(0x40430204); }
};

// USB Host HSIC Control Register
//
union HSIC_CTRL {
  
  enum class eHSIC_CLK_ON : uint32_t {
    eINACTIVE = 0, // Inactive
    eACTIVE = 1, // Active
  };
  
  enum class eHSIC_EN : uint32_t {
    eDISABLE = 0, // Disabled
    eENABLE = 1, // Enabled
  };
  
  enum class eCLK_VLD : uint32_t {
    eINVALID = 0, // Invalid
    eVALID = 1, // Valid
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    eHSIC_CLK_ON HSIC_CLK_ON : 1;
    eHSIC_EN HSIC_EN : 1;
    uint32_t _reserved_2 : 18;
    eCLK_VLD CLK_VLD : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HSIC_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x10004084; }
  static inline volatile HSIC_CTRL &Instance() { return *reinterpret_cast<volatile HSIC_CTRL*>(0x40430210); }
};


} // namespace nUSBNC_OTG1