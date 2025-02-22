#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSNVS {


// SNVS_HP Lock Register
//
union HPLR {
  
  enum class eZMK_WSL : uint32_t {
    eWRITE_ALLOWED = 0, // Write access is allowed
    eWRITE_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eZMK_RSL : uint32_t {
    eREAD_ALLOWED = 0, // Read access is allowed (only in software Programming mode)
    eREAD_NOT_ALLOWED = 1, // Read access is not allowed
  };
  
  enum class eSRTC_SL : uint32_t {
    eWRITE_ALLOWED = 0, // Write access is allowed
    eWRITE_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eLPCALB_SL : uint32_t {
    eWRITE_ALLOWED = 0, // Write access is allowed
    eWRITE_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eMC_SL : uint32_t {
    eWRITE_ALLOWED = 0, // Write access (increment) is allowed
    eWRITE_NOT_ALLOWED = 1, // Write access (increment) is not allowed
  };
  
  enum class eGPR_SL : uint32_t {
    eWRITE_ALLOWED = 0, // Write access is allowed
    eWRITE_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eLPSVCR_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eLPTGFCR_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eLPSECR_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eMKS_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eHPSVCR_L : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eHPSICR_L : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eHAC_L : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed
  };
  
  enum class eAT1_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT2_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT3_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT4_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT5_SL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  // Bit field definition.
  struct {
    eZMK_WSL ZMK_WSL : 1;
    eZMK_RSL ZMK_RSL : 1;
    eSRTC_SL SRTC_SL : 1;
    eLPCALB_SL LPCALB_SL : 1;
    eMC_SL MC_SL : 1;
    eGPR_SL GPR_SL : 1;
    eLPSVCR_SL LPSVCR_SL : 1;
    eLPTGFCR_SL LPTGFCR_SL : 1;
    eLPSECR_SL LPSECR_SL : 1;
    eMKS_SL MKS_SL : 1;
    uint32_t _reserved_10 : 6;
    eHPSVCR_L HPSVCR_L : 1;
    eHPSICR_L HPSICR_L : 1;
    eHAC_L HAC_L : 1;
    uint32_t _reserved_13 : 5;
    eAT1_SL AT1_SL : 1;
    eAT2_SL AT2_SL : 1;
    eAT3_SL AT3_SL : 1;
    eAT4_SL AT4_SL : 1;
    eAT5_SL AT5_SL : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPLR &Instance() { return *reinterpret_cast<volatile HPLR*>(0x40C90000); }
};

// SNVS_HP Command Register
//
union HPCOMR {
  
  enum class eSSM_ST_DIS : uint32_t {
    eENABLED = 0, // Secure to Trusted State transition is enabled
    eDISABLED = 1, // Secure to Trusted State transition is disabled
  };
  
  enum class eSSM_SFNS_DIS : uint32_t {
    eENABLED = 0, // Soft Fail to Non-Secure State transition is enabled
    eDISABLED = 1, // Soft Fail to Non-Secure State transition is disabled
  };
  
  enum class eLP_SWR : uint32_t {
    eNO_ACTION = 0, // No Action
    eRESET = 1, // Reset LP section
  };
  
  enum class eLP_SWR_DIS : uint32_t {
    eENABLED = 0, // LP software reset is enabled
    eDISABLED = 1, // LP software reset is disabled
  };
  
  enum class ePROG_ZMK : uint32_t {
    eNO_ACTION = 0, // No Action
    ePROGRAM_KEY = 1, // Activate hardware key programming mechanism
  };
  
  enum class eMKS_EN : uint32_t {
    eSELECT_OTP = 0, // OTP master key is selected as an SNVS master key
    eSELECT_PER_LPMKCR = 1, // SNVS master key is selected according to the setting of the MASTER_KEY_SEL field of LPMKCR
  };
  
  enum class eHAC_EN : uint32_t {
    eDISABLED = 0, // High Assurance Counter is disabled
    eENABLED = 1, // High Assurance Counter is enabled
  };
  
  enum class eHAC_LOAD : uint32_t {
    eNO_ACTION = 0, // No Action
    eLOAD_HAC = 1, // Load the HAC
  };
  
  enum class eHAC_CLEAR : uint32_t {
    eNO_ACTION = 0, // No Action
    eCLEAR_HAC = 1, // Clear the HAC
  };
  
  // Bit field definition.
  struct {
    uint32_t SSM_ST : 1;
    eSSM_ST_DIS SSM_ST_DIS : 1;
    eSSM_SFNS_DIS SSM_SFNS_DIS : 1;
    uint32_t _reserved_3 : 1;
    eLP_SWR LP_SWR : 1;
    eLP_SWR_DIS LP_SWR_DIS : 1;
    uint32_t _reserved_5 : 2;
    uint32_t SW_SV : 1;
    uint32_t SW_FSV : 1;
    uint32_t SW_LPSV : 1;
    uint32_t _reserved_8 : 1;
    ePROG_ZMK PROG_ZMK : 1;
    eMKS_EN MKS_EN : 1;
    uint32_t _reserved_10 : 2;
    eHAC_EN HAC_EN : 1;
    eHAC_LOAD HAC_LOAD : 1;
    eHAC_CLEAR HAC_CLEAR : 1;
    uint32_t HAC_STOP : 1;
    uint32_t _reserved_14 : 11;
    uint32_t NPSWA_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPCOMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPCOMR &Instance() { return *reinterpret_cast<volatile HPCOMR*>(0x40C90004); }
};

// SNVS_HP Control Register
//
union HPCR {
  
  enum class eRTC_EN : uint32_t {
    eDISABLED = 0, // RTC is disabled
    eENABLED = 1, // RTC is enabled
  };
  
  enum class eHPTA_EN : uint32_t {
    eDISABLED = 0, // HP Time Alarm Interrupt is disabled
    eENABLED = 1, // HP Time Alarm Interrupt is enabled
  };
  
  enum class eDIS_PI : uint32_t {
    eENABLED = 0, // Periodic interrupt will trigger a functional interrupt
    eDISABLED = 1, // Disable periodic interrupt in the function interrupt
  };
  
  enum class ePI_EN : uint32_t {
    eDISABLED = 0, // HP Periodic Interrupt is disabled
    eENABLED = 1, // HP Periodic Interrupt is enabled
  };
  
  enum class ePI_FREQ : uint32_t {
    eUSE_BIT_0 = 0, // - bit 0 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_1 = 1, // - bit 1 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_2 = 2, // - bit 2 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_3 = 3, // - bit 3 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_4 = 4, // - bit 4 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_5 = 5, // - bit 5 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_6 = 6, // - bit 6 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_7 = 7, // - bit 7 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_8 = 8, // - bit 8 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_9 = 9, // - bit 9 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_10 = 10, // - bit 10 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_11 = 11, // - bit 11 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_12 = 12, // - bit 12 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_13 = 13, // - bit 13 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_14 = 14, // - bit 14 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_1r5 = 15, // - bit 15 of the HPRTCLR is selected as a source of the periodic interrupt
  };
  
  enum class eHPCALB_EN : uint32_t {
    eDISABLED = 0, // HP Timer calibration disabled
    eENABLED = 1, // HP Timer calibration enabled
  };
  
  enum class eHPCALB_VAL : uint32_t {
    eADD_0_PER_32768_TICKS = 0, // +0 counts per each 32768 ticks of the counter
    eADD_1_PER_32768_TICKS = 1, // +1 counts per each 32768 ticks of the counter
    eADD_2_PER_32768_TICKS = 2, // +2 counts per each 32768 ticks of the counter
    eADD_15_PER_32768_TICKS = 15, // +15 counts per each 32768 ticks of the counter
    eSUB_16_PER_32768_TICKS = 16, // -16 counts per each 32768 ticks of the counter
    eSUB_15_PER_32768_TICKS = 17, // -15 counts per each 32768 ticks of the counter
    eSUB_2_PER_32768_TICKS = 30, // -2 counts per each 32768 ticks of the counter
    eSUB_1_PER_32768_TICKS = 31, // -1 counts per each 32768 ticks of the counter
  };
  
  enum class eHP_TS : uint32_t {
    eNO_ACTION = 0, // No Action
    eSYNC_TIME = 1, // Synchronize the HP Time Counter to the LP Time Counter
  };
  
  // Bit field definition.
  struct {
    eRTC_EN RTC_EN : 1;
    eHPTA_EN HPTA_EN : 1;
    eDIS_PI DIS_PI : 1;
    ePI_EN PI_EN : 1;
    ePI_FREQ PI_FREQ : 4;
    eHPCALB_EN HPCALB_EN : 1;
    uint32_t _reserved_6 : 1;
    eHPCALB_VAL HPCALB_VAL : 5;
    uint32_t _reserved_7 : 1;
    eHP_TS HP_TS : 1;
    uint32_t _reserved_8 : 7;
    uint32_t BTN_CONFIG : 3;
    uint32_t BTN_MASK : 1;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPCR &Instance() { return *reinterpret_cast<volatile HPCR*>(0x40C90008); }
};

// SNVS_HP Security Interrupt Control Register
//
union HPSICR {
  
  enum class eCAAM_EN : uint32_t {
    eDISABLED = 0, // CAAM Security Violation Interrupt is Disabled
    eENABLED = 1, // CAAM Security Violation Interrupt is Enabled
  };
  
  enum class eJTAGC_EN : uint32_t {
    eDISABLED = 0, // JTAG Active Interrupt is Disabled
    eENABLED = 1, // JTAG Active Interrupt is Enabled
  };
  
  enum class eWDOG2_EN : uint32_t {
    eDISABLED = 0, // Watchdog 2 Reset Interrupt is Disabled
    eENABLED = 1, // Watchdog 2 Reset Interrupt is Enabled
  };
  
  enum class eSRC_EN : uint32_t {
    eDISABLED = 0, // Internal Boot Interrupt is Disabled
    eENABLED = 1, // Internal Boot Interrupt is Enabled
  };
  
  enum class eOCOTP_EN : uint32_t {
    eDISABLED = 0, // OCOTP attack error Interrupt is Disabled
    eENABLED = 1, // OCOTP attack error Interrupt is Enabled
  };
  
  enum class eLPSVI_EN : uint32_t {
    eDISABLED = 0, // LP Security Violation Interrupt is Disabled
    eENABLED = 1, // LP Security Violation Interrupt is Enabled
  };
  
  // Bit field definition.
  struct {
    eCAAM_EN CAAM_EN : 1;
    eJTAGC_EN JTAGC_EN : 1;
    eWDOG2_EN WDOG2_EN : 1;
    uint32_t _reserved_3 : 1;
    eSRC_EN SRC_EN : 1;
    eOCOTP_EN OCOTP_EN : 1;
    uint32_t _reserved_5 : 25;
    eLPSVI_EN LPSVI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSICR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPSICR &Instance() { return *reinterpret_cast<volatile HPSICR*>(0x40C9000C); }
};

// SNVS_HP Security Violation Control Register
//
union HPSVCR {
  
  enum class eCAAM_CFG : uint32_t {
    eNON_FATAL = 0, // CAAM Security Violation is a non-fatal violation
    eFATAL = 1, // CAAM Security Violation is a fatal violation
  };
  
  enum class eJTAGC_CFG : uint32_t {
    eNON_FATAL = 0, // JTAG Active is a non-fatal violation
    eFATAL = 1, // JTAG Active is a fatal violation
  };
  
  enum class eWDOG2_CFG : uint32_t {
    eNON_FATAL = 0, // Watchdog 2 Reset is a non-fatal violation
    eFATAL = 1, // Watchdog 2 Reset is a fatal violation
  };
  
  enum class eSRC_CFG : uint32_t {
    eNON_FATAL = 0, // Internal Boot is a non-fatal violation
    eFATAL = 1, // Internal Boot is a fatal violation
  };
  
  enum class eOCOTP_CFG : uint32_t {
    eDISABLED = 0, // OCOTP attack error is disabled
    eNON_FATAL = 1, // OCOTP attack error is a non-fatal violation
    eFATAL = 2, // OCOTP attack error is a fatal violation
  };
  
  enum class eLPSV_CFG : uint32_t {
    eDISABLED = 0, // LP security violation is disabled
    eNON_FATAL = 1, // LP security violation is a non-fatal violation
    eFATAL = 2, // LP security violation is a fatal violation
  };
  
  // Bit field definition.
  struct {
    eCAAM_CFG CAAM_CFG : 1;
    eJTAGC_CFG JTAGC_CFG : 1;
    eWDOG2_CFG WDOG2_CFG : 1;
    uint32_t _reserved_3 : 1;
    eSRC_CFG SRC_CFG : 1;
    eOCOTP_CFG OCOTP_CFG : 2;
    uint32_t _reserved_5 : 23;
    eLPSV_CFG LPSV_CFG : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSVCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPSVCR &Instance() { return *reinterpret_cast<volatile HPSVCR*>(0x40C90010); }
};

// SNVS_HP Status Register
//
union HPSR {
  
  enum class eHPTA : uint32_t {
    eNOREPORT = 0, // No time alarm interrupt occurred.
    eREPORTED = 1, // A time alarm interrupt occurred.
  };
  
  enum class ePI : uint32_t {
    eNOREPORT = 0, // No periodic interrupt occurred.
    eREPORTED = 1, // A periodic interrupt occurred.
  };
  
  enum class eSSM_STATE : uint32_t {
    eINIT = 0, // Init
    eHARD_FAIL = 1, // Hard Fail
    eSOFT_FAIL = 3, // Soft Fail
    eINTERMEDIATE = 8, // Init Intermediate (transition state between Init and Check - SSM stays in this state only one clock cycle)
    eCHECK = 9, // Check
    eNON_SECURE = 11, // Non-Secure
    eTRUSTED = 13, // Trusted
    eSECURE = 15, // Secure
  };
  
  enum class eSYS_SECURITY_CFG : uint32_t {
    eFAB_CONFIG = 0, // Fab Configuration - the default configuration of newly fabricated chips
    eOPEN_CONFIG = 1, // Open Configuration - the configuration after NXP-programmable fuses have been blown
    eCLOSED_CONFIG = 3, // Closed Configuration - the configuration after OEM-programmable fuses have been blown
    eFIELD_RETURN_CONFIG = 7, // Field Return Configuration - the configuration of chips that are returned to NXP for analysis
  };
  
  enum class eOTPMK_ZERO : uint32_t {
    eOTPMK_NOT_ZERO = 0, // The OTPMK is not zero.
    eOTPMK_IS_ZERO = 1, // The OTPMK is zero.
  };
  
  enum class eZMK_ZERO : uint32_t {
    eZMK_NOT_ZERO = 0, // The ZMK is not zero.
    eZMK_IS_ZERO = 1, // The ZMK is zero.
  };
  
  // Bit field definition.
  struct {
    eHPTA HPTA : 1;
    ePI PI : 1;
    uint32_t _reserved_2 : 2;
    uint32_t LPDIS : 1;
    uint32_t _reserved_3 : 1;
    uint32_t BTN : 1;
    uint32_t BI : 1;
    eSSM_STATE SSM_STATE : 4;
    eSYS_SECURITY_CFG SYS_SECURITY_CFG : 3;
    uint32_t SYS_SECURE_BOOT : 1;
    uint32_t _reserved_8 : 11;
    eOTPMK_ZERO OTPMK_ZERO : 1;
    uint32_t _reserved_9 : 3;
    eZMK_ZERO ZMK_ZERO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSR() = delete;
  inline void Reset() volatile { this->value = 0x8000B000; }
  static inline volatile HPSR &Instance() { return *reinterpret_cast<volatile HPSR*>(0x40C90014); }
};

// SNVS_HP Security Violation Status Register
//
union HPSVSR {
  
  enum class eCAAM : uint32_t {
    eNOREPORT = 0, // No CAAM Security Violation security violation was detected.
    eREPORTED = 1, // CAAM Security Violation security violation was detected.
  };
  
  enum class eJTAGC : uint32_t {
    eNOREPORT = 0, // No JTAG Active security violation was detected.
    eREPORTED = 1, // JTAG Active security violation was detected.
  };
  
  enum class eWDOG2 : uint32_t {
    eNOREPORT = 0, // No Watchdog 2 Reset security violation was detected.
    eREPORTED = 1, // Watchdog 2 Reset security violation was detected.
  };
  
  enum class eSRC : uint32_t {
    eNOREPORT = 0, // No Internal Boot security violation was detected.
    eREPORTED = 1, // Internal Boot security violation was detected.
  };
  
  enum class eOCOTP : uint32_t {
    eNOREPORT = 0, // No OCOTP attack error security violation was detected.
    eREPORTED = 1, // OCOTP attack error security violation was detected.
  };
  
  enum class eZMK_ECC_FAIL : uint32_t {
    eNOREPORT = 0, // ZMK ECC Failure was not detected.
    eREPORTED = 1, // ZMK ECC Failure was detected.
  };
  
  // Bit field definition.
  struct {
    eCAAM CAAM : 1;
    eJTAGC JTAGC : 1;
    eWDOG2 WDOG2 : 1;
    uint32_t _reserved_3 : 1;
    eSRC SRC : 1;
    eOCOTP OCOTP : 1;
    uint32_t _reserved_5 : 7;
    uint32_t SW_SV : 1;
    uint32_t SW_FSV : 1;
    uint32_t SW_LPSV : 1;
    uint32_t ZMK_SYNDROME : 9;
    uint32_t _reserved_9 : 2;
    eZMK_ECC_FAIL ZMK_ECC_FAIL : 1;
    uint32_t _reserved_10 : 3;
    uint32_t LP_SEC_VIO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSVSR() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile HPSVSR &Instance() { return *reinterpret_cast<volatile HPSVSR*>(0x40C90018); }
};

// SNVS_HP High Assurance Counter IV Register
//
union HPHACIVR {
  
  // Bit field definition.
  struct {
    uint32_t HAC_COUNTER_IV : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPHACIVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPHACIVR &Instance() { return *reinterpret_cast<volatile HPHACIVR*>(0x40C9001C); }
};

// SNVS_HP High Assurance Counter Register
//
union HPHACR {
  
  // Bit field definition.
  struct {
    uint32_t HAC_COUNTER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPHACR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPHACR &Instance() { return *reinterpret_cast<volatile HPHACR*>(0x40C90020); }
};

// SNVS_HP Real Time Counter MSB Register
//
union HPRTCMR {
  
  // Bit field definition.
  struct {
    uint32_t RTC : 15;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPRTCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPRTCMR &Instance() { return *reinterpret_cast<volatile HPRTCMR*>(0x40C90024); }
};

// SNVS_HP Real Time Counter LSB Register
//
union HPRTCLR {
  
  // Bit field definition.
  struct {
    uint32_t RTC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPRTCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPRTCLR &Instance() { return *reinterpret_cast<volatile HPRTCLR*>(0x40C90028); }
};

// SNVS_HP Time Alarm MSB Register
//
union HPTAMR {
  
  // Bit field definition.
  struct {
    uint32_t HPTA_MS : 15;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPTAMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPTAMR &Instance() { return *reinterpret_cast<volatile HPTAMR*>(0x40C9002C); }
};

// SNVS_HP Time Alarm LSB Register
//
union HPTALR {
  
  // Bit field definition.
  struct {
    uint32_t HPTA_LS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPTALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPTALR &Instance() { return *reinterpret_cast<volatile HPTALR*>(0x40C90030); }
};

// SNVS_LP Lock Register
//
union LPLR {
  
  enum class eZMK_WHL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eZMK_RHL : uint32_t {
    eREAD_ACCESS_ALLOWED = 0, // Read access is allowed (only in software programming mode).
    eREAD_ACCESS_NOT_ALLOWED = 1, // Read access is not allowed.
  };
  
  enum class eSRTC_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eLPCALB_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eMC_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access (increment) is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access (increment) is not allowed.
  };
  
  enum class eGPR_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eLPSVCR_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eLPTGFCR_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eLPSECR_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eMKS_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT1_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT2_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT3_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT4_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  enum class eAT5_HL : uint32_t {
    eWRITE_ACCESS_ALLOWED = 0, // Write access is allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1, // Write access is not allowed.
  };
  
  // Bit field definition.
  struct {
    eZMK_WHL ZMK_WHL : 1;
    eZMK_RHL ZMK_RHL : 1;
    eSRTC_HL SRTC_HL : 1;
    eLPCALB_HL LPCALB_HL : 1;
    eMC_HL MC_HL : 1;
    eGPR_HL GPR_HL : 1;
    eLPSVCR_HL LPSVCR_HL : 1;
    eLPTGFCR_HL LPTGFCR_HL : 1;
    eLPSECR_HL LPSECR_HL : 1;
    eMKS_HL MKS_HL : 1;
    uint32_t _reserved_10 : 14;
    eAT1_HL AT1_HL : 1;
    eAT2_HL AT2_HL : 1;
    eAT3_HL AT3_HL : 1;
    eAT4_HL AT4_HL : 1;
    eAT5_HL AT5_HL : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPLR &Instance() { return *reinterpret_cast<volatile LPLR*>(0x40C90034); }
};

// SNVS_LP Control Register
//
union LPCR {
  
  enum class eSRTC_ENV : uint32_t {
    eDISABLED = 0, // SRTC is disabled or invalid.
    eENABLED = 1, // SRTC is enabled and valid.
  };
  
  enum class eLPTA_EN : uint32_t {
    eDISABLED = 0, // LP time alarm interrupt is disabled.
    eENABLED = 1, // LP time alarm interrupt is enabled.
  };
  
  enum class eMC_ENV : uint32_t {
    eDISABLED = 0, // MC is disabled or invalid.
    eENABLED = 1, // MC is enabled and valid.
  };
  
  enum class eSRTC_INV_EN : uint32_t {
    eKEEP_VALID = 0, // SRTC stays valid in the case of security violation (other than a software violation (HPSVSR[SW_LPSV] = 1 or HPCOMR[SW_LPSV] = 1)).
    eINVALIDATE = 1, // SRTC is invalidated in the case of security violation.
  };
  
  enum class eDP_EN : uint32_t {
    eSMART_PMIC_ENABLED = 0, // Smart PMIC enabled.
    eDUMB_PMIC_ENABLED = 1, // Dumb PMIC enabled.
  };
  
  enum class eTOP : uint32_t {
    eKEEP_ON = 0, // Leave system power on.
    eTURN_OFF = 1, // Turn off system power.
  };
  
  enum class eLPCALB_EN : uint32_t {
    eDISABLED = 0, // SRTC Time calibration is disabled.
    eENABLED = 1, // SRTC Time calibration is enabled.
  };
  
  enum class eLPCALB_VAL : uint32_t {
    eADD_0_PER_32768_TICKS = 0, // +0 counts per each 32768 ticks of the counter clock
    eADD_1_PER_32768_TICKS = 1, // +1 counts per each 32768 ticks of the counter clock
    eADD_2_PER_32768_TICKS = 2, // +2 counts per each 32768 ticks of the counter clock
    eADD_15_PER_32768_TICKS = 15, // +15 counts per each 32768 ticks of the counter clock
    eSUB_16_PER_32768_TICKS = 16, // -16 counts per each 32768 ticks of the counter clock
    eSUB_15_PER_32768_TICKS = 17, // -15 counts per each 32768 ticks of the counter clock
    eSUB_2_PER_32768_TICKS = 30, // -2 counts per each 32768 ticks of the counter clock
    eSUB_1_PER_32768_TICKS = 31, // -1 counts per each 32768 ticks of the counter clock
  };
  
  // Bit field definition.
  struct {
    eSRTC_ENV SRTC_ENV : 1;
    eLPTA_EN LPTA_EN : 1;
    eMC_ENV MC_ENV : 1;
    uint32_t LPWUI_EN : 1;
    eSRTC_INV_EN SRTC_INV_EN : 1;
    eDP_EN DP_EN : 1;
    eTOP TOP : 1;
    uint32_t LVD_EN : 1;
    eLPCALB_EN LPCALB_EN : 1;
    uint32_t _reserved_9 : 1;
    eLPCALB_VAL LPCALB_VAL : 5;
    uint32_t _reserved_10 : 1;
    uint32_t BTN_PRESS_TIME : 2;
    uint32_t DEBOUNCE : 2;
    uint32_t ON_TIME : 2;
    uint32_t PK_EN : 1;
    uint32_t PK_OVERRIDE : 1;
    uint32_t GPR_Z_DIS : 1;
    uint32_t _reserved_end : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile LPCR &Instance() { return *reinterpret_cast<volatile LPCR*>(0x40C90038); }
};

// SNVS_LP Master Key Control Register
//
union LPMKCR {
  
  enum class eMASTER_KEY_SEL : uint32_t {
    eSELECT_OTPMK = 0, // Select one time programmable master key.
    eSELECT_ZMK = 2, // Select zeroizable master key when MKS_EN bit is set .
    eSELECT_COMBO = 3, // Select combined master key when MKS_EN bit is set .
  };
  
  enum class eZMK_HWP : uint32_t {
    eSW_PROG_MODE = 0, // ZMK is in the software programming mode.
    eHW_PROG_MODE = 1, // ZMK is in the hardware programming mode.
  };
  
  enum class eZMK_VAL : uint32_t {
    eINVALID = 0, // ZMK is not valid.
    eVALID = 1, // ZMK is valid.
  };
  
  enum class eZMK_ECC_EN : uint32_t {
    eDISABLED = 0, // ZMK ECC check is disabled.
    eENABLED = 1, // ZMK ECC check is enabled.
  };
  
  // Bit field definition.
  struct {
    eMASTER_KEY_SEL MASTER_KEY_SEL : 2;
    eZMK_HWP ZMK_HWP : 1;
    eZMK_VAL ZMK_VAL : 1;
    eZMK_ECC_EN ZMK_ECC_EN : 1;
    uint32_t _reserved_4 : 2;
    uint32_t ZMK_ECC_VALUE : 9;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPMKCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPMKCR &Instance() { return *reinterpret_cast<volatile LPMKCR*>(0x40C9003C); }
};

// SNVS_LP Security Violation Control Register
//
union LPSVCR {
  
  enum class eCAAM_EN : uint32_t {
    eDISABLED = 0, // CAAM Security Violation is disabled in the LP domain.
    eENABLED = 1, // CAAM Security Violation is enabled in the LP domain.
  };
  
  enum class eJTAGC_EN : uint32_t {
    eDISABLED = 0, // JTAG Active is disabled in the LP domain.
    eENABLED = 1, // JTAG Active is enabled in the LP domain.
  };
  
  enum class eWDOG2_EN : uint32_t {
    eDISABLED = 0, // Watchdog 2 Reset is disabled in the LP domain.
    eENABLED = 1, // Watchdog 2 Reset is enabled in the LP domain.
  };
  
  enum class eSRC_EN : uint32_t {
    eDISABLED = 0, // Internal Boot is disabled in the LP domain.
    eENABLED = 1, // Internal Boot is enabled in the LP domain.
  };
  
  enum class eOCOTP_EN : uint32_t {
    eDISABLED = 0, // OCOTP attack error is disabled in the LP domain.
    eENABLED = 1, // OCOTP attack error is enabled in the LP domain.
  };
  
  // Bit field definition.
  struct {
    eCAAM_EN CAAM_EN : 1;
    eJTAGC_EN JTAGC_EN : 1;
    eWDOG2_EN WDOG2_EN : 1;
    uint32_t _reserved_3 : 1;
    eSRC_EN SRC_EN : 1;
    eOCOTP_EN OCOTP_EN : 1;
    uint32_t _reserved_end : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSVCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSVCR &Instance() { return *reinterpret_cast<volatile LPSVCR*>(0x40C90040); }
};

// SNVS_LP Tamper Glitch Filters Configuration Register
//
union LPTGFCR {
  
  enum class eWMTGF_EN : uint32_t {
    eBYPASSED = 0, // Wire-mesh tamper glitch filter is bypassed.
    eENABLED = 1, // Wire-mesh tamper glitch filter is enabled.
  };
  
  enum class eETGF1_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 1 is bypassed.
    eENABLED = 1, // External tamper glitch filter 1 is enabled.
  };
  
  enum class eETGF2_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 2 is bypassed.
    eENABLED = 1, // External tamper glitch filter 2 is enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t WMTGF : 5;
    uint32_t _reserved_1 : 2;
    eWMTGF_EN WMTGF_EN : 1;
    uint32_t _reserved_2 : 8;
    uint32_t ETGF1 : 7;
    eETGF1_EN ETGF1_EN : 1;
    uint32_t ETGF2 : 7;
    eETGF2_EN ETGF2_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGFCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGFCR &Instance() { return *reinterpret_cast<volatile LPTGFCR*>(0x40C90044); }
};

// SNVS_LP Tamper Detect Configuration Register
//
union LPTDCR {
  
  enum class eSRTCR_EN : uint32_t {
    eDISABLED = 0, // SRTC rollover is disabled.
    eENABLED = 1, // SRTC rollover is enabled.
  };
  
  enum class eMCR_EN : uint32_t {
    eDISABLED = 0, // MC rollover is disabled.
    eENABLED = 1, // MC rollover is enabled.
  };
  
  enum class eCT_EN : uint32_t {
    eDISABLED = 0, // Clock tamper is disabled.
    eENABLED = 1, // Clock tamper is enabled.
  };
  
  enum class eTT_EN : uint32_t {
    eDISABLED = 0, // Temperature tamper is disabled.
    eENABLED = 1, // Temperature tamper is enabled.
  };
  
  enum class eVT_EN : uint32_t {
    eDISABLED = 0, // Voltage tamper is disabled.
    eENABLED = 1, // Voltage tamper is enabled.
  };
  
  enum class eWMT1_EN : uint32_t {
    eDISABLED = 0, // Wire-mesh tamper 1 is disabled.
    eENABLED = 1, // Wire-mesh tamper 1 is enabled.
  };
  
  enum class eWMT2_EN : uint32_t {
    eDISABLED = 0, // Wire-mesh tamper 2 is disabled.
    eENABLED = 1, // Wire-mesh tamper 2 is enabled.
  };
  
  enum class eET1_EN : uint32_t {
    eDISABLED = 0, // External tamper 1 is disabled.
    eENABLED = 1, // External tamper 1 is enabled.
  };
  
  enum class eET2_EN : uint32_t {
    eDISABLED = 0, // External tamper 2 is disabled.
    eENABLED = 1, // External tamper 2 is enabled.
  };
  
  enum class eET1P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 1 is active low.
    eACTIVE_HIGH = 1, // External tamper 1 is active high.
  };
  
  enum class eET2P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 2 is active low.
    eACTIVE_HIGH = 1, // External tamper 2 is active high.
  };
  
  enum class eOSCB : uint32_t {
    eNOT_BYPASSED = 0, // Normal SRTC clock oscillator not bypassed.
    eBYPASSED = 1, // Normal SRTC clock oscillator bypassed. Alternate clock can drive the SRTC clock source.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    eSRTCR_EN SRTCR_EN : 1;
    eMCR_EN MCR_EN : 1;
    uint32_t _reserved_2 : 1;
    eCT_EN CT_EN : 1;
    eTT_EN TT_EN : 1;
    eVT_EN VT_EN : 1;
    eWMT1_EN WMT1_EN : 1;
    eWMT2_EN WMT2_EN : 1;
    eET1_EN ET1_EN : 1;
    eET2_EN ET2_EN : 1;
    eET1P ET1P : 1;
    eET2P ET2P : 1;
    uint32_t _reserved_11 : 1;
    uint32_t PFD_OBSERV : 1;
    uint32_t POR_OBSERV : 1;
    uint32_t LTDC : 3;
    uint32_t _reserved_14 : 1;
    uint32_t HTDC : 3;
    uint32_t _reserved_15 : 1;
    uint32_t VRC : 3;
    uint32_t _reserved_16 : 1;
    eOSCB OSCB : 1;
    uint32_t _reserved_end : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDCR &Instance() { return *reinterpret_cast<volatile LPTDCR*>(0x40C90048); }
};

// SNVS_LP Status Register
//
union LPSR {
  
  enum class eLPTA : uint32_t {
    eNOREPORT = 0, // No time alarm interrupt occurred.
    eREPORTED = 1, // A time alarm interrupt occurred.
  };
  
  enum class eSRTCR : uint32_t {
    eNOREPORT = 0, // SRTC has not reached its maximum value.
    eREPORTED = 1, // SRTC has reached its maximum value.
  };
  
  enum class eMCR : uint32_t {
    eNOREPORT = 0, // MC has not reached its maximum value.
    eREPORTED = 1, // MC has reached its maximum value.
  };
  
  enum class eLVD : uint32_t {
    eNOLOWVOLT = 0, // No low voltage event detected.
    eLOWVOLTDETECTED = 1, // Low voltage event is detected.
  };
  
  enum class eCTD : uint32_t {
    eNOREPORT = 0, // No clock tamper.
    eREPORTED = 1, // Clock tamper is detected.
  };
  
  enum class eTTD : uint32_t {
    eNOREPORT = 0, // No temperature tamper.
    eREPORTED = 1, // Temperature tamper is detected.
  };
  
  enum class eVTD : uint32_t {
    eNOREPORT = 0, // Voltage tampering not detected.
    eREPORTED = 1, // Voltage tampering detected.
  };
  
  enum class eWMT1D : uint32_t {
    eNOREPORT = 0, // Wire-mesh tampering 1 not detected.
    eREPORTED = 1, // Wire-mesh tampering 1 detected.
  };
  
  enum class eWMT2D : uint32_t {
    eNOREPORT = 0, // Wire-mesh tampering 2 not detected.
    eREPORTED = 1, // Wire-mesh tampering 2 detected.
  };
  
  enum class eET1D : uint32_t {
    eNOREPORT = 0, // External tampering 1 not detected.
    eREPORTED = 1, // External tampering 1 detected.
  };
  
  enum class eET2D : uint32_t {
    eNOREPORT = 0, // External tampering 2 not detected.
    eREPORTED = 1, // External tampering 2 detected.
  };
  
  enum class eESVD : uint32_t {
    eNOREPORT = 0, // No external security violation.
    eREPORTED = 1, // External security violation is detected.
  };
  
  enum class eEO : uint32_t {
    eNOREPORT = 0, // Emergency off was not detected.
    eREPORTED = 1, // Emergency off was detected.
  };
  
  enum class eSPOF : uint32_t {
    eNOREPORT = 0, // Set Power Off was not detected.
    eREPORTED = 1, // Set Power Off was detected.
  };
  
  enum class eLPNS : uint32_t {
    eNOT_PRGRMD_IN_NON_SECURE_STATE = 0, // LP section was not programmed in the non-secure state.
    eWAS_PRGRMD_IN_NON_SECURE_STATE = 1, // LP section was programmed in the non-secure state.
  };
  
  enum class eLPS : uint32_t {
    eNOT_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 0, // LP section was not programmed in secure or trusted state.
    eWAS_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 1, // LP section was programmed in secure or trusted state.
  };
  
  // Bit field definition.
  struct {
    eLPTA LPTA : 1;
    eSRTCR SRTCR : 1;
    eMCR MCR : 1;
    eLVD LVD : 1;
    eCTD CTD : 1;
    eTTD TTD : 1;
    eVTD VTD : 1;
    eWMT1D WMT1D : 1;
    eWMT2D WMT2D : 1;
    eET1D ET1D : 1;
    eET2D ET2D : 1;
    uint32_t _reserved_11 : 5;
    eESVD ESVD : 1;
    eEO EO : 1;
    eSPOF SPOF : 1;
    uint32_t _reserved_14 : 11;
    eLPNS LPNS : 1;
    eLPS LPS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSR() = delete;
  inline void Reset() volatile { this->value = 0x00000008; }
  static inline volatile LPSR &Instance() { return *reinterpret_cast<volatile LPSR*>(0x40C9004C); }
};

// SNVS_LP Secure Real Time Counter MSB Register
//
union LPSRTCMR {
  
  // Bit field definition.
  struct {
    uint32_t SRTC : 15;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSRTCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSRTCMR &Instance() { return *reinterpret_cast<volatile LPSRTCMR*>(0x40C90050); }
};

// SNVS_LP Secure Real Time Counter LSB Register
//
union LPSRTCLR {
  
  // Bit field definition.
  struct {
    uint32_t SRTC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSRTCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSRTCLR &Instance() { return *reinterpret_cast<volatile LPSRTCLR*>(0x40C90054); }
};

// SNVS_LP Time Alarm Register
//
union LPTAR {
  
  // Bit field definition.
  struct {
    uint32_t LPTA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTAR &Instance() { return *reinterpret_cast<volatile LPTAR*>(0x40C90058); }
};

// SNVS_LP Secure Monotonic Counter MSB Register
//
union LPSMCMR {
  
  // Bit field definition.
  struct {
    uint32_t MON_COUNTER : 16;
    uint32_t MC_ERA_BITS : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSMCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSMCMR &Instance() { return *reinterpret_cast<volatile LPSMCMR*>(0x40C9005C); }
};

// SNVS_LP Secure Monotonic Counter LSB Register
//
union LPSMCLR {
  
  // Bit field definition.
  struct {
    uint32_t MON_COUNTER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSMCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSMCLR &Instance() { return *reinterpret_cast<volatile LPSMCLR*>(0x40C90060); }
};

// SNVS_LP Digital Low-Voltage Detector Register
//
union LPLVDR {
  
  // Bit field definition.
  struct {
    uint32_t LVD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPLVDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPLVDR &Instance() { return *reinterpret_cast<volatile LPLVDR*>(0x40C90064); }
};

// SNVS_LP General Purpose Register 0 (legacy alias)
//
union LPGPR0_legacy_alias {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR0_legacy_alias() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR0_legacy_alias &Instance() { return *reinterpret_cast<volatile LPGPR0_legacy_alias*>(0x40C90068); }
};

// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[0] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[0] &Instance() { return *reinterpret_cast<volatile LPZMKR[0]*>(0x40C9006C); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[1] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[1] &Instance() { return *reinterpret_cast<volatile LPZMKR[1]*>(0x40C90070); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[2] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[2] &Instance() { return *reinterpret_cast<volatile LPZMKR[2]*>(0x40C90074); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[3] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[3] &Instance() { return *reinterpret_cast<volatile LPZMKR[3]*>(0x40C90078); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[4] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[4] &Instance() { return *reinterpret_cast<volatile LPZMKR[4]*>(0x40C9007C); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[5] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[5] &Instance() { return *reinterpret_cast<volatile LPZMKR[5]*>(0x40C90080); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[6] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[6] &Instance() { return *reinterpret_cast<volatile LPZMKR[6]*>(0x40C90084); }
};
// SNVS_LP Zeroizable Master Key Register
//
union LPZMKR[7] {
  
  // Bit field definition.
  struct {
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR[7] &Instance() { return *reinterpret_cast<volatile LPZMKR[7]*>(0x40C90088); }
};

// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR_alias[0] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias[0] &Instance() { return *reinterpret_cast<volatile LPGPR_alias[0]*>(0x40C90090); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR_alias[1] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias[1] &Instance() { return *reinterpret_cast<volatile LPGPR_alias[1]*>(0x40C90094); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR_alias[2] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias[2] &Instance() { return *reinterpret_cast<volatile LPGPR_alias[2]*>(0x40C90098); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR_alias[3] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias[3] &Instance() { return *reinterpret_cast<volatile LPGPR_alias[3]*>(0x40C9009C); }
};

// SNVS_LP Tamper Detectors Config 2 Register
//
union LPTDC2R {
  
  enum class eET3_EN : uint32_t {
    eDISABLED = 0, // External tamper 3 is disabled.
    eENABLED = 1, // External tamper 3 is enabled.
  };
  
  enum class eET4_EN : uint32_t {
    eDISABLED = 0, // External tamper 4 is disabled.
    eENABLED = 1, // External tamper 4 is enabled.
  };
  
  enum class eET5_EN : uint32_t {
    eDISABLED = 0, // External tamper 5 is disabled.
    eENABLED = 1, // External tamper 5 is enabled.
  };
  
  enum class eET6_EN : uint32_t {
    eDISABLED = 0, // External tamper 6 is disabled.
    eENABLED = 1, // External tamper 6 is enabled.
  };
  
  enum class eET7_EN : uint32_t {
    eDISABLED = 0, // External tamper 7 is disabled.
    eENABLED = 1, // External tamper 7 is enabled.
  };
  
  enum class eET8_EN : uint32_t {
    eDISABLED = 0, // External tamper 8 is disabled.
    eENABLED = 1, // External tamper 8 is enabled.
  };
  
  enum class eET9_EN : uint32_t {
    eDISABLED = 0, // External tamper 9 is disabled.
    eENABLED = 1, // External tamper 9 is enabled.
  };
  
  enum class eET10_EN : uint32_t {
    eDISABLED = 0, // External tamper 10 is disabled.
    eENABLED = 1, // External tamper 10 is enabled.
  };
  
  enum class eET3P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 3 active low.
    eACTIVE_HIGH = 1, // External tamper 3 active high.
  };
  
  enum class eET4P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 4 is active low.
    eACTIVE_HIGH = 1, // External tamper 4 is active high.
  };
  
  enum class eET5P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 5 is active low.
    eACTIVE_HIGH = 1, // External tamper 5 is active high.
  };
  
  enum class eET6P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 6 is active low.
    eACTIVE_HIGH = 1, // External tamper 6 is active high.
  };
  
  enum class eET7P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 7 is active low.
    eACTIVE_HIGH = 1, // External tamper 7 is active high.
  };
  
  enum class eET8P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 8 is active low.
    eACTIVE_HIGH = 1, // External tamper 8 is active high.
  };
  
  enum class eET9P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 9 is active low.
    eACTIVE_HIGH = 1, // External tamper 9 is active high.
  };
  
  enum class eET10P : uint32_t {
    eACTIVE_LOW = 0, // External tamper 10 is active low.
    eACTIVE_HIGH = 1, // External tamper 10 is active high.
  };
  
  // Bit field definition.
  struct {
    eET3_EN ET3_EN : 1;
    eET4_EN ET4_EN : 1;
    eET5_EN ET5_EN : 1;
    eET6_EN ET6_EN : 1;
    eET7_EN ET7_EN : 1;
    eET8_EN ET8_EN : 1;
    eET9_EN ET9_EN : 1;
    eET10_EN ET10_EN : 1;
    uint32_t _reserved_8 : 8;
    eET3P ET3P : 1;
    eET4P ET4P : 1;
    eET5P ET5P : 1;
    eET6P ET6P : 1;
    eET7P ET7P : 1;
    eET8P ET8P : 1;
    eET9P ET9P : 1;
    eET10P ET10P : 1;
    uint32_t _reserved_end : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDC2R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDC2R &Instance() { return *reinterpret_cast<volatile LPTDC2R*>(0x40C900A0); }
};

// SNVS_LP Tamper Detectors Status Register
//
union LPTDSR {
  
  enum class eET3D : uint32_t {
    eNOREPORT = 0, // External tamper 3 is not detected.
    eREPORTED = 1, // External tamper 3 is detected.
  };
  
  enum class eET4D : uint32_t {
    eNOREPORT = 0, // External tamper 4 is not detected.
    eREPORTED = 1, // External tamper 4 is detected.
  };
  
  enum class eET5D : uint32_t {
    eNOREPORT = 0, // External tamper 5 is not detected.
    eREPORTED = 1, // External tamper 5 is detected.
  };
  
  enum class eET6D : uint32_t {
    eNOREPORT = 0, // External tamper 6 is not detected.
    eREPORTED = 1, // External tamper 6 is detected.
  };
  
  enum class eET7D : uint32_t {
    eNOREPORT = 0, // External tamper 7 is not detected.
    eREPORTED = 1, // External tamper 7 is detected.
  };
  
  enum class eET8D : uint32_t {
    eNOREPORT = 0, // External tamper 8 is not detected.
    eREPORTED = 1, // External tamper 8 is detected.
  };
  
  enum class eET9D : uint32_t {
    eNOREPORT = 0, // External tamper 9 is not detected.
    eREPORTED = 1, // External tamper 9 is detected.
  };
  
  enum class eET10D : uint32_t {
    eNOREPORT = 0, // External tamper 10 is not detected.
    eREPORTED = 1, // External tamper 10 is detected.
  };
  
  // Bit field definition.
  struct {
    eET3D ET3D : 1;
    eET4D ET4D : 1;
    eET5D ET5D : 1;
    eET6D ET6D : 1;
    eET7D ET7D : 1;
    eET8D ET8D : 1;
    eET9D ET9D : 1;
    eET10D ET10D : 1;
    uint32_t _reserved_end : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDSR &Instance() { return *reinterpret_cast<volatile LPTDSR*>(0x40C900A4); }
};

// SNVS_LP Tamper Glitch Filter 1 Configuration Register
//
union LPTGF1CR {
  
  enum class eETGF3_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 3 is bypassed.
    eENABLED = 1, // External tamper glitch filter 3 is enabled.
  };
  
  enum class eETGF4_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 4 is bypassed.
    eENABLED = 1, // External tamper glitch filter 4 is enabled.
  };
  
  enum class eETGF5_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 5 is bypassed.
    eENABLED = 1, // External tamper glitch filter 5 is enabled.
  };
  
  enum class eETGF6_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 6 is bypassed.
    eENABLED = 1, // External tamper glitch filter 6 is enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t ETGF3 : 7;
    eETGF3_EN ETGF3_EN : 1;
    uint32_t ETGF4 : 7;
    eETGF4_EN ETGF4_EN : 1;
    uint32_t ETGF5 : 7;
    eETGF5_EN ETGF5_EN : 1;
    uint32_t ETGF6 : 7;
    eETGF6_EN ETGF6_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGF1CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGF1CR &Instance() { return *reinterpret_cast<volatile LPTGF1CR*>(0x40C900A8); }
};

// SNVS_LP Tamper Glitch Filter 2 Configuration Register
//
union LPTGF2CR {
  
  enum class eETGF7_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 7 is bypassed.
    eENABLED = 1, // External tamper glitch filter 7 is enabled.
  };
  
  enum class eETGF8_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 8 is bypassed.
    eENABLED = 1, // External tamper glitch filter 8 is enabled.
  };
  
  enum class eETGF9_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 9 is bypassed.
    eENABLED = 1, // External tamper glitch filter 9 is enabled.
  };
  
  enum class eETGF10_EN : uint32_t {
    eBYPASSED = 0, // External tamper glitch filter 10 is bypassed.
    eENABLED = 1, // External tamper glitch filter 10 is enabled.
  };
  
  // Bit field definition.
  struct {
    uint32_t ETGF7 : 7;
    eETGF7_EN ETGF7_EN : 1;
    uint32_t ETGF8 : 7;
    eETGF8_EN ETGF8_EN : 1;
    uint32_t ETGF9 : 7;
    eETGF9_EN ETGF9_EN : 1;
    uint32_t ETGF10 : 7;
    eETGF10_EN ETGF10_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGF2CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGF2CR &Instance() { return *reinterpret_cast<volatile LPTGF2CR*>(0x40C900AC); }
};

// SNVS_LP Active Tamper 1 Configuration Register
//
union LPAT1CR {
  
  // Bit field definition.
  struct {
    uint32_t Seed : 16;
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT1CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT1CR &Instance() { return *reinterpret_cast<volatile LPAT1CR*>(0x40C900C0); }
};

// SNVS_LP Active Tamper 2 Configuration Register
//
union LPAT2CR {
  
  // Bit field definition.
  struct {
    uint32_t Seed : 16;
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT2CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT2CR &Instance() { return *reinterpret_cast<volatile LPAT2CR*>(0x40C900C4); }
};

// SNVS_LP Active Tamper 3 Configuration Register
//
union LPAT3CR {
  
  // Bit field definition.
  struct {
    uint32_t Seed : 16;
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT3CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT3CR &Instance() { return *reinterpret_cast<volatile LPAT3CR*>(0x40C900C8); }
};

// SNVS_LP Active Tamper 4 Configuration Register
//
union LPAT4CR {
  
  // Bit field definition.
  struct {
    uint32_t Seed : 16;
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT4CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT4CR &Instance() { return *reinterpret_cast<volatile LPAT4CR*>(0x40C900CC); }
};

// SNVS_LP Active Tamper 5 Configuration Register
//
union LPAT5CR {
  
  // Bit field definition.
  struct {
    uint32_t Seed : 16;
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT5CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT5CR &Instance() { return *reinterpret_cast<volatile LPAT5CR*>(0x40C900D0); }
};

// SNVS_LP Active Tamper Control Register
//
union LPATCTLR {
  
  enum class eAT1_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 1 is disabled.
    eENABLED = 1, // Active Tamper 1 is enabled.
  };
  
  enum class eAT2_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 2 is disabled.
    eENABLED = 1, // Active Tamper 2 is enabled.
  };
  
  enum class eAT3_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 3 is disabled.
    eENABLED = 1, // Active Tamper 3 is enabled.
  };
  
  enum class eAT4_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 4 is disabled.
    eENABLED = 1, // Active Tamper 4 is enabled.
  };
  
  enum class eAT5_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 5 is disabled.
    eENABLED = 1, // Active Tamper 5 is enabled.
  };
  
  enum class eAT1_PAD_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 1 is disabled.
    eENABLED = 1, // Active Tamper 1 is enabled.
  };
  
  enum class eAT2_PAD_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 2 is disabled.
    eENABLED = 1, // Active Tamper 2 is enabled.
  };
  
  enum class eAT3_PAD_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 3 is disabled.
    eENABLED = 1, // Active Tamper 3 is enabled
  };
  
  enum class eAT4_PAD_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 4 is disabled.
    eENABLED = 1, // Active Tamper 4 is enabled.
  };
  
  enum class eAT5_PAD_EN : uint32_t {
    eDISABLED = 0, // Active Tamper 5 is disabled.
    eENABLED = 1, // Active Tamper 5 is enabled.
  };
  
  // Bit field definition.
  struct {
    eAT1_EN AT1_EN : 1;
    eAT2_EN AT2_EN : 1;
    eAT3_EN AT3_EN : 1;
    eAT4_EN AT4_EN : 1;
    eAT5_EN AT5_EN : 1;
    uint32_t _reserved_5 : 11;
    eAT1_PAD_EN AT1_PAD_EN : 1;
    eAT2_PAD_EN AT2_PAD_EN : 1;
    eAT3_PAD_EN AT3_PAD_EN : 1;
    eAT4_PAD_EN AT4_PAD_EN : 1;
    eAT5_PAD_EN AT5_PAD_EN : 1;
    uint32_t _reserved_end : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATCTLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATCTLR &Instance() { return *reinterpret_cast<volatile LPATCTLR*>(0x40C900E0); }
};

// SNVS_LP Active Tamper Clock Control Register
//
union LPATCLKR {
  
  // Bit field definition.
  struct {
    uint32_t AT1_CLK_CTL : 2;
    uint32_t _reserved_1 : 2;
    uint32_t AT2_CLK_CTL : 2;
    uint32_t _reserved_2 : 2;
    uint32_t AT3_CLK_CTL : 2;
    uint32_t _reserved_3 : 2;
    uint32_t AT4_CLK_CTL : 2;
    uint32_t _reserved_4 : 2;
    uint32_t AT5_CLK_CTL : 2;
    uint32_t _reserved_end : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATCLKR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATCLKR &Instance() { return *reinterpret_cast<volatile LPATCLKR*>(0x40C900E4); }
};

// SNVS_LP Active Tamper Routing Control 1 Register
//
union LPATRC1R {
  
  // Bit field definition.
  struct {
    uint32_t ET1RCTL : 3;
    uint32_t _reserved_1 : 1;
    uint32_t ET2RCTL : 3;
    uint32_t _reserved_2 : 1;
    uint32_t ET3RCTL : 3;
    uint32_t _reserved_3 : 1;
    uint32_t ET4RCTL : 3;
    uint32_t _reserved_4 : 1;
    uint32_t ET5RCTL : 3;
    uint32_t _reserved_5 : 1;
    uint32_t ET6RCTL : 3;
    uint32_t _reserved_6 : 1;
    uint32_t ET7RCTL : 3;
    uint32_t _reserved_7 : 1;
    uint32_t ET8RCTL : 3;
    uint32_t _reserved_end : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATRC1R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATRC1R &Instance() { return *reinterpret_cast<volatile LPATRC1R*>(0x40C900E8); }
};

// SNVS_LP Active Tamper Routing Control 2 Register
//
union LPATRC2R {
  
  // Bit field definition.
  struct {
    uint32_t ET9RCTL : 3;
    uint32_t _reserved_1 : 1;
    uint32_t ET10RCTL : 3;
    uint32_t _reserved_end : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATRC2R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATRC2R &Instance() { return *reinterpret_cast<volatile LPATRC2R*>(0x40C900EC); }
};

// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR[0] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR[0] &Instance() { return *reinterpret_cast<volatile LPGPR[0]*>(0x40C90100); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR[1] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR[1] &Instance() { return *reinterpret_cast<volatile LPGPR[1]*>(0x40C90104); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR[2] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR[2] &Instance() { return *reinterpret_cast<volatile LPGPR[2]*>(0x40C90108); }
};
// SNVS_LP General Purpose Registers 0 .. 3
//
union LPGPR[3] {
  
  // Bit field definition.
  struct {
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR[3] &Instance() { return *reinterpret_cast<volatile LPGPR[3]*>(0x40C9010C); }
};

// SNVS_HP Version ID Register 1
//
union HPVIDR1 {
  
  // Bit field definition.
  struct {
    uint32_t MINOR_REV : 8;
    uint32_t MAJOR_REV : 8;
    uint32_t IP_ID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPVIDR1() = delete;
  inline void Reset() volatile { this->value = 0x003E0103; }
  static inline volatile HPVIDR1 &Instance() { return *reinterpret_cast<volatile HPVIDR1*>(0x40C90BF8); }
};

// SNVS_HP Version ID Register 2
//
union HPVIDR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    uint32_t ECO_REV : 8;
    uint32_t _reserved_1 : 8;
    uint32_t IP_ERA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPVIDR2() = delete;
  inline void Reset() volatile { this->value = 0x06000500; }
  static inline volatile HPVIDR2 &Instance() { return *reinterpret_cast<volatile HPVIDR2*>(0x40C90BFC); }
};


} // namespace nSNVS