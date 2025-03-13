#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nSNVS {


// SNVS_HP Lock Register
union HPLR {
  
  // Zeroizable Master Key Write Soft Lock When set, prevents any writes (software and hardware) to the ZMK registers and the ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
  enum class eZMK_WSL : uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };
  
  // Zeroizable Master Key Read Soft Lock When set, prevents any software reads to the ZMK Registers and ZMK_ECC_VALUE field of the LPMKCR
  enum class eZMK_RSL : uint32_t {
    // Read access is allowed (only in software Programming mode)
    eREAD_ALLOWED = 0,
    // Read access is not allowed
    eREAD_NOT_ALLOWED = 1,
  };
  
  // Secure Real Time Counter Soft Lock When set, prevents any writes to the SRTC Registers, SRTC_ENV, and SRTC_INV_EN bits
  enum class eSRTC_SL : uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };
  
  // LP Calibration Soft Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
  enum class eLPCALB_SL : uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };
  
  // Monotonic Counter Soft Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
  enum class eMC_SL : uint32_t {
    // Write access (increment) is allowed
    eWRITE_ALLOWED = 0,
    // Write access (increment) is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };
  
  // General Purpose Register Soft Lock When set, prevents any writes to the GPR
  enum class eGPR_SL : uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };
  
  // LP Security Violation Control Register Soft Lock When set, prevents any writes to the LPSVCR
  enum class eLPSVCR_SL : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Tamper Glitch Filter Configuration Register Soft Lock When set, prevents any writes to the LPTGFCR
  enum class eLPTGFCR_SL : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Security Events Configuration Register Soft Lock When set, prevents any writes to the LPSECR
  enum class eLPSECR_SL : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Master Key Select Soft Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LPMKCR
  enum class eMKS_SL : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // HP Security Violation Control Register Lock When set, prevents any writes to the HPSVCR
  enum class eHPSVCR_L : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // HP Security Interrupt Control Register Lock When set, prevents any writes to the HPSICR
  enum class eHPSICR_L : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // High Assurance Counter Lock When set, prevents any writes to HPHACIVR, HPHACR, and HAC_EN bit of HPCOMR
  enum class eHAC_L : uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 1 Soft Lock When set, prevents any writes to the Active Tamper 1 registers
  enum class eAT1_SL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 2 Soft Lock When set, prevents any writes to the Active Tamper 2 registers
  enum class eAT2_SL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 3 Soft Lock When set, prevents any writes to the Active Tamper 3 registers
  enum class eAT3_SL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 4 Soft Lock When set, prevents any writes to the Active Tamper 4 registers
  enum class eAT4_SL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 5 Soft Lock When set, prevents any writes to the Active Tamper 5 registers
  enum class eAT5_SL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Write Soft Lock When set, prevents any writes (software and hardware) to the ZMK registers and the ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
    eZMK_WSL ZMK_WSL : 1;
    // read-write - Zeroizable Master Key Read Soft Lock When set, prevents any software reads to the ZMK Registers and ZMK_ECC_VALUE field of the LPMKCR
    eZMK_RSL ZMK_RSL : 1;
    // read-write - Secure Real Time Counter Soft Lock When set, prevents any writes to the SRTC Registers, SRTC_ENV, and SRTC_INV_EN bits
    eSRTC_SL SRTC_SL : 1;
    // read-write - LP Calibration Soft Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
    eLPCALB_SL LPCALB_SL : 1;
    // read-write - Monotonic Counter Soft Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
    eMC_SL MC_SL : 1;
    // read-write - General Purpose Register Soft Lock When set, prevents any writes to the GPR
    eGPR_SL GPR_SL : 1;
    // read-write - LP Security Violation Control Register Soft Lock When set, prevents any writes to the LPSVCR
    eLPSVCR_SL LPSVCR_SL : 1;
    // read-write - LP Tamper Glitch Filter Configuration Register Soft Lock When set, prevents any writes to the LPTGFCR
    eLPTGFCR_SL LPTGFCR_SL : 1;
    // read-write - LP Security Events Configuration Register Soft Lock When set, prevents any writes to the LPSECR
    eLPSECR_SL LPSECR_SL : 1;
    // read-write - Master Key Select Soft Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LPMKCR
    eMKS_SL MKS_SL : 1;
    uint32_t _reserved_0 : 6;
    // read-write - HP Security Violation Control Register Lock When set, prevents any writes to the HPSVCR
    eHPSVCR_L HPSVCR_L : 1;
    // read-write - HP Security Interrupt Control Register Lock When set, prevents any writes to the HPSICR
    eHPSICR_L HPSICR_L : 1;
    // read-write - High Assurance Counter Lock When set, prevents any writes to HPHACIVR, HPHACR, and HAC_EN bit of HPCOMR
    eHAC_L HAC_L : 1;
    uint32_t _reserved_1 : 5;
    // read-write - Active Tamper 1 Soft Lock When set, prevents any writes to the Active Tamper 1 registers
    eAT1_SL AT1_SL : 1;
    // read-write - Active Tamper 2 Soft Lock When set, prevents any writes to the Active Tamper 2 registers
    eAT2_SL AT2_SL : 1;
    // read-write - Active Tamper 3 Soft Lock When set, prevents any writes to the Active Tamper 3 registers
    eAT3_SL AT3_SL : 1;
    // read-write - Active Tamper 4 Soft Lock When set, prevents any writes to the Active Tamper 4 registers
    eAT4_SL AT4_SL : 1;
    // read-write - Active Tamper 5 Soft Lock When set, prevents any writes to the Active Tamper 5 registers
    eAT5_SL AT5_SL : 1;
    uint32_t _reserved_2 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPLR &Instance() { return *reinterpret_cast<volatile HPLR*>(0x40C90000); }
};

// SNVS_HP Command Register
union HPCOMR {
  
  // SSM Secure to Trusted State Transition Disable When set, disables the SSM transition from secure to trusted state
  enum class eSSM_ST_DIS : uint32_t {
    // Secure to Trusted State transition is enabled
    eENABLED = 0,
    // Secure to Trusted State transition is disabled
    eDISABLED = 1,
  };
  
  // SSM Soft Fail to Non-Secure State Transition Disable When set, it disables the SSM transition from soft fail to non-secure state
  enum class eSSM_SFNS_DIS : uint32_t {
    // Soft Fail to Non-Secure State transition is enabled
    eENABLED = 0,
    // Soft Fail to Non-Secure State transition is disabled
    eDISABLED = 1,
  };
  
  // LP Software Reset When set to 1, most registers in the SNVS_LP section are reset, but the following registers are not reset by an LP software reset: Monotonic Counter Secure Real Time Counter Time Alarm Register This bit cannot be set when the LP_SWR_DIS bit is set
  enum class eLP_SWR : uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Reset LP section
    eRESET = 1,
  };
  
  // LP Software Reset Disable When set, disables the LP software reset
  enum class eLP_SWR_DIS : uint32_t {
    // LP software reset is enabled
    eENABLED = 0,
    // LP software reset is disabled
    eDISABLED = 1,
  };
  
  // Program Zeroizable Master Key This bit activates ZMK hardware programming mechanism
  enum class ePROG_ZMK : uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Activate hardware key programming mechanism
    ePROGRAM_KEY = 1,
  };
  
  // Master Key Select Enable When not set, the one time programmable (OTP) master key is selected by default
  enum class eMKS_EN : uint32_t {
    // OTP master key is selected as an SNVS master key
    eSELECT_OTP = 0,
    // SNVS master key is selected according to the setting of the MASTER_KEY_SEL field of LPMKCR
    eSELECT_PER_LPMKCR = 1,
  };
  
  // High Assurance Counter Enable This bit controls the SSM transition from the soft fail to the hard fail state
  enum class eHAC_EN : uint32_t {
    // High Assurance Counter is disabled
    eDISABLED = 0,
    // High Assurance Counter is enabled
    eENABLED = 1,
  };
  
  // High Assurance Counter Load When set, it loads the High Assurance Counter Register with the value of the High Assurance Counter Load Register
  enum class eHAC_LOAD : uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Load the HAC
    eLOAD_HAC = 1,
  };
  
  // High Assurance Counter Clear When set, it clears the High Assurance Counter Register
  enum class eHAC_CLEAR : uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Clear the HAC
    eCLEAR_HAC = 1,
  };
  
  // Bit field definition.
  struct {
    // write-only - SSM State Transition Transition state of the system security monitor
    uint32_t SSM_ST : 1;
    // read-write - SSM Secure to Trusted State Transition Disable When set, disables the SSM transition from secure to trusted state
    eSSM_ST_DIS SSM_ST_DIS : 1;
    // read-write - SSM Soft Fail to Non-Secure State Transition Disable When set, it disables the SSM transition from soft fail to non-secure state
    eSSM_SFNS_DIS SSM_SFNS_DIS : 1;
    uint32_t _reserved_0 : 1;
    // write-only - LP Software Reset When set to 1, most registers in the SNVS_LP section are reset, but the following registers are not reset by an LP software reset: Monotonic Counter Secure Real Time Counter Time Alarm Register This bit cannot be set when the LP_SWR_DIS bit is set
    eLP_SWR LP_SWR : 1;
    // read-write - LP Software Reset Disable When set, disables the LP software reset
    eLP_SWR_DIS LP_SWR_DIS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Software Security Violation When set, the system security monitor treats this bit as a non-fatal security violation
    uint32_t SW_SV : 1;
    // read-write - Software Fatal Security Violation When set, the system security monitor treats this bit as a fatal security violation
    uint32_t SW_FSV : 1;
    // read-write - LP Software Security Violation When set, SNVS_LP treats this bit as a security violation
    uint32_t SW_LPSV : 1;
    uint32_t _reserved_2 : 1;
    // write-only - Program Zeroizable Master Key This bit activates ZMK hardware programming mechanism
    ePROG_ZMK PROG_ZMK : 1;
    // read-write - Master Key Select Enable When not set, the one time programmable (OTP) master key is selected by default
    eMKS_EN MKS_EN : 1;
    uint32_t _reserved_3 : 2;
    // read-write - High Assurance Counter Enable This bit controls the SSM transition from the soft fail to the hard fail state
    eHAC_EN HAC_EN : 1;
    // write-only - High Assurance Counter Load When set, it loads the High Assurance Counter Register with the value of the High Assurance Counter Load Register
    eHAC_LOAD HAC_LOAD : 1;
    // write-only - High Assurance Counter Clear When set, it clears the High Assurance Counter Register
    eHAC_CLEAR HAC_CLEAR : 1;
    // read-write - High Assurance Counter Stop This bit can be set only when SSM is in soft fail state
    uint32_t HAC_STOP : 1;
    uint32_t _reserved_4 : 11;
    // read-write - Non-Privileged Software Access Enable When set, allows non-privileged software to access all SNVS registers, including those that are privileged software read/write access only
    uint32_t NPSWA_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPCOMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPCOMR &Instance() { return *reinterpret_cast<volatile HPCOMR*>(0x40C90004); }
};

// SNVS_HP Control Register
union HPCR {
  
  // HP Real Time Counter Enable
  enum class eRTC_EN : uint32_t {
    // RTC is disabled
    eDISABLED = 0,
    // RTC is enabled
    eENABLED = 1,
  };
  
  // HP Time Alarm Enable When set, the time alarm interrupt is generated if the value in the HP Time Alarm Registers is equal to the value of the HP Real Time Counter
  enum class eHPTA_EN : uint32_t {
    // HP Time Alarm Interrupt is disabled
    eDISABLED = 0,
    // HP Time Alarm Interrupt is enabled
    eENABLED = 1,
  };
  
  // Disable periodic interrupt in the functional interrupt
  enum class eDIS_PI : uint32_t {
    // Periodic interrupt will trigger a functional interrupt
    eENABLED = 0,
    // Disable periodic interrupt in the function interrupt
    eDISABLED = 1,
  };
  
  // HP Periodic Interrupt Enable The periodic interrupt can be generated only if the HP Real Time Counter is enabled
  enum class ePI_EN : uint32_t {
    // HP Periodic Interrupt is disabled
    eDISABLED = 0,
    // HP Periodic Interrupt is enabled
    eENABLED = 1,
  };
  
  // Periodic Interrupt Frequency Defines frequency of the periodic interrupt
  enum class ePI_FREQ : uint32_t {
    // - bit 0 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_0 = 0,
    // - bit 1 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_1 = 1,
    // - bit 2 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_2 = 2,
    // - bit 3 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_3 = 3,
    // - bit 4 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_4 = 4,
    // - bit 5 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_5 = 5,
    // - bit 6 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_6 = 6,
    // - bit 7 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_7 = 7,
    // - bit 8 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_8 = 8,
    // - bit 9 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_9 = 9,
    // - bit 10 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_10 = 10,
    // - bit 11 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_11 = 11,
    // - bit 12 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_12 = 12,
    // - bit 13 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_13 = 13,
    // - bit 14 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_14 = 14,
    // - bit 15 of the HPRTCLR is selected as a source of the periodic interrupt
    eUSE_BIT_1r5 = 15,
  };
  
  // HP Real Time Counter Calibration Enabled Indicates that the time calibration mechanism is enabled.
  enum class eHPCALB_EN : uint32_t {
    // HP Timer calibration disabled
    eDISABLED = 0,
    // HP Timer calibration enabled
    eENABLED = 1,
  };
  
  // HP Calibration Value Defines signed calibration value for the HP Real Time Counter
  enum class eHPCALB_VAL : uint32_t {
    // +0 counts per each 32768 ticks of the counter
    eADD_0_PER_32768_TICKS = 0,
    // +1 counts per each 32768 ticks of the counter
    eADD_1_PER_32768_TICKS = 1,
    // +2 counts per each 32768 ticks of the counter
    eADD_2_PER_32768_TICKS = 2,
    // +15 counts per each 32768 ticks of the counter
    eADD_15_PER_32768_TICKS = 15,
    // -16 counts per each 32768 ticks of the counter
    eSUB_16_PER_32768_TICKS = 16,
    // -15 counts per each 32768 ticks of the counter
    eSUB_15_PER_32768_TICKS = 17,
    // -2 counts per each 32768 ticks of the counter
    eSUB_2_PER_32768_TICKS = 30,
    // -1 counts per each 32768 ticks of the counter
    eSUB_1_PER_32768_TICKS = 31,
  };
  
  // HP Time Synchronize
  enum class eHP_TS : uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Synchronize the HP Time Counter to the LP Time Counter
    eSYNC_TIME = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - HP Real Time Counter Enable
    eRTC_EN RTC_EN : 1;
    // read-write - HP Time Alarm Enable When set, the time alarm interrupt is generated if the value in the HP Time Alarm Registers is equal to the value of the HP Real Time Counter
    eHPTA_EN HPTA_EN : 1;
    // read-write - Disable periodic interrupt in the functional interrupt
    eDIS_PI DIS_PI : 1;
    // read-write - HP Periodic Interrupt Enable The periodic interrupt can be generated only if the HP Real Time Counter is enabled
    ePI_EN PI_EN : 1;
    // read-write - Periodic Interrupt Frequency Defines frequency of the periodic interrupt
    ePI_FREQ PI_FREQ : 4;
    // read-write - HP Real Time Counter Calibration Enabled Indicates that the time calibration mechanism is enabled.
    eHPCALB_EN HPCALB_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - HP Calibration Value Defines signed calibration value for the HP Real Time Counter
    eHPCALB_VAL HPCALB_VAL : 5;
    uint32_t _reserved_1 : 1;
    // read-write - HP Time Synchronize
    eHP_TS HP_TS : 1;
    uint32_t _reserved_2 : 7;
    // read-write - Button Configuration
    uint32_t BTN_CONFIG : 3;
    // read-write - Button interrupt mask
    uint32_t BTN_MASK : 1;
    uint32_t _reserved_3 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPCR &Instance() { return *reinterpret_cast<volatile HPCR*>(0x40C90008); }
};

// SNVS_HP Security Interrupt Control Register
union HPSICR {
  
  // CAAM Security Violation Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the CAAM Security Violation security violation
  enum class eCAAM_EN : uint32_t {
    // CAAM Security Violation Interrupt is Disabled
    eDISABLED = 0,
    // CAAM Security Violation Interrupt is Enabled
    eENABLED = 1,
  };
  
  // JTAG Active Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the JTAG Active security violation
  enum class eJTAGC_EN : uint32_t {
    // JTAG Active Interrupt is Disabled
    eDISABLED = 0,
    // JTAG Active Interrupt is Enabled
    eENABLED = 1,
  };
  
  // Watchdog 2 Reset Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Watchdog 2 Reset security violation
  enum class eWDOG2_EN : uint32_t {
    // Watchdog 2 Reset Interrupt is Disabled
    eDISABLED = 0,
    // Watchdog 2 Reset Interrupt is Enabled
    eENABLED = 1,
  };
  
  // Internal Boot Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Internal Boot security violation
  enum class eSRC_EN : uint32_t {
    // Internal Boot Interrupt is Disabled
    eDISABLED = 0,
    // Internal Boot Interrupt is Enabled
    eENABLED = 1,
  };
  
  // OCOTP attack error Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the OCOTP attack error security violation
  enum class eOCOTP_EN : uint32_t {
    // OCOTP attack error Interrupt is Disabled
    eDISABLED = 0,
    // OCOTP attack error Interrupt is Enabled
    eENABLED = 1,
  };
  
  // LP Security Violation Interrupt Enable This bit enables generating of the security interrupt to the host processor upon security violation signal from the LP section
  enum class eLPSVI_EN : uint32_t {
    // LP Security Violation Interrupt is Disabled
    eDISABLED = 0,
    // LP Security Violation Interrupt is Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - CAAM Security Violation Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the CAAM Security Violation security violation
    eCAAM_EN CAAM_EN : 1;
    // read-write - JTAG Active Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the JTAG Active security violation
    eJTAGC_EN JTAGC_EN : 1;
    // read-write - Watchdog 2 Reset Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Watchdog 2 Reset security violation
    eWDOG2_EN WDOG2_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Internal Boot Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Internal Boot security violation
    eSRC_EN SRC_EN : 1;
    // read-write - OCOTP attack error Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the OCOTP attack error security violation
    eOCOTP_EN OCOTP_EN : 1;
    uint32_t _reserved_1 : 25;
    // read-write - LP Security Violation Interrupt Enable This bit enables generating of the security interrupt to the host processor upon security violation signal from the LP section
    eLPSVI_EN LPSVI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSICR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPSICR &Instance() { return *reinterpret_cast<volatile HPSICR*>(0x40C9000C); }
};

// SNVS_HP Security Violation Control Register
union HPSVCR {
  
  // CAAM Security Violation Security Violation Configuration This field configures the CAAM Security Violation Security Violation Input
  enum class eCAAM_CFG : uint32_t {
    // CAAM Security Violation is a non-fatal violation
    eNON_FATAL = 0,
    // CAAM Security Violation is a fatal violation
    eFATAL = 1,
  };
  
  // JTAG Active Security Violation Configuration This field configures the JTAG Active Security Violation Input
  enum class eJTAGC_CFG : uint32_t {
    // JTAG Active is a non-fatal violation
    eNON_FATAL = 0,
    // JTAG Active is a fatal violation
    eFATAL = 1,
  };
  
  // Watchdog 2 Reset Security Violation Configuration This field configures the Watchdog 2 Reset Security Violation Input
  enum class eWDOG2_CFG : uint32_t {
    // Watchdog 2 Reset is a non-fatal violation
    eNON_FATAL = 0,
    // Watchdog 2 Reset is a fatal violation
    eFATAL = 1,
  };
  
  // Internal Boot Security Violation Configuration This field configures the Internal Boot Security Violation Input
  enum class eSRC_CFG : uint32_t {
    // Internal Boot is a non-fatal violation
    eNON_FATAL = 0,
    // Internal Boot is a fatal violation
    eFATAL = 1,
  };
  
  // OCOTP attack error Security Violation Configuration This field configures the OCOTP attack error Security Violation Input
  enum class eOCOTP_CFG : uint32_t {
    // OCOTP attack error is disabled
    eDISABLED = 0,
    // OCOTP attack error is a non-fatal violation
    eNON_FATAL = 1,
    // OCOTP attack error is a fatal violation
    eFATAL = 2,
  };
  
  // LP Security Violation Configuration This field configures the LP security violation source.
  enum class eLPSV_CFG : uint32_t {
    // LP security violation is disabled
    eDISABLED = 0,
    // LP security violation is a non-fatal violation
    eNON_FATAL = 1,
    // LP security violation is a fatal violation
    eFATAL = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - CAAM Security Violation Security Violation Configuration This field configures the CAAM Security Violation Security Violation Input
    eCAAM_CFG CAAM_CFG : 1;
    // read-write - JTAG Active Security Violation Configuration This field configures the JTAG Active Security Violation Input
    eJTAGC_CFG JTAGC_CFG : 1;
    // read-write - Watchdog 2 Reset Security Violation Configuration This field configures the Watchdog 2 Reset Security Violation Input
    eWDOG2_CFG WDOG2_CFG : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Internal Boot Security Violation Configuration This field configures the Internal Boot Security Violation Input
    eSRC_CFG SRC_CFG : 1;
    // read-write - OCOTP attack error Security Violation Configuration This field configures the OCOTP attack error Security Violation Input
    eOCOTP_CFG OCOTP_CFG : 2;
    uint32_t _reserved_1 : 23;
    // read-write - LP Security Violation Configuration This field configures the LP security violation source.
    eLPSV_CFG LPSV_CFG : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSVCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPSVCR &Instance() { return *reinterpret_cast<volatile HPSVCR*>(0x40C90010); }
};

// SNVS_HP Status Register
union HPSR {
  
  // HP Time Alarm Indicates that the HP Time Alarm has occurred since this bit was last cleared.
  enum class eHPTA : uint32_t {
    // No time alarm interrupt occurred.
    eNOREPORT = 0,
    // A time alarm interrupt occurred.
    eREPORTED = 1,
  };
  
  // Periodic Interrupt Indicates that periodic interrupt has occurred since this bit was last cleared.
  enum class ePI : uint32_t {
    // No periodic interrupt occurred.
    eNOREPORT = 0,
    // A periodic interrupt occurred.
    eREPORTED = 1,
  };
  
  // System Security Monitor State This field contains the encoded state of the SSM's state machine
  enum class eSSM_STATE : uint32_t {
    // Init
    eINIT = 0,
    // Hard Fail
    eHARD_FAIL = 1,
    // Soft Fail
    eSOFT_FAIL = 3,
    // Init Intermediate (transition state between Init and Check - SSM stays in this state only one clock cycle)
    eINTERMEDIATE = 8,
    // Check
    eCHECK = 9,
    // Non-Secure
    eNON_SECURE = 11,
    // Trusted
    eTRUSTED = 13,
    // Secure
    eSECURE = 15,
  };
  
  // System Security Configuration This field reflects the three security configuration inputs to SNVS
  enum class eSYS_SECURITY_CFG : uint32_t {
    // Fab Configuration - the default configuration of newly fabricated chips
    eFAB_CONFIG = 0,
    // Open Configuration - the configuration after NXP-programmable fuses have been blown
    eOPEN_CONFIG = 1,
    // Closed Configuration - the configuration after OEM-programmable fuses have been blown
    eCLOSED_CONFIG = 3,
    // Field Return Configuration - the configuration of chips that are returned to NXP for analysis
    eFIELD_RETURN_CONFIG = 7,
  };
  
  // One Time Programmable Master Key is Equal to Zero
  enum class eOTPMK_ZERO : uint32_t {
    // The OTPMK is not zero.
    eOTPMK_NOT_ZERO = 0,
    // The OTPMK is zero.
    eOTPMK_IS_ZERO = 1,
  };
  
  // Zeroizable Master Key is Equal to Zero
  enum class eZMK_ZERO : uint32_t {
    // The ZMK is not zero.
    eZMK_NOT_ZERO = 0,
    // The ZMK is zero.
    eZMK_IS_ZERO = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - HP Time Alarm Indicates that the HP Time Alarm has occurred since this bit was last cleared.
    eHPTA HPTA : 1;
    // read-write - Periodic Interrupt Indicates that periodic interrupt has occurred since this bit was last cleared.
    ePI PI : 1;
    uint32_t _reserved_0 : 2;
    // read-only - Low Power Disable If 1, the low power section has been disabled by means of an input signal to SNVS
    uint32_t LPDIS : 1;
    uint32_t _reserved_1 : 1;
    // read-only - Button Value of the BTN input
    uint32_t BTN : 1;
    // read-write - Button Interrupt Signal ipi_snvs_btn_int_b was asserted.
    uint32_t BI : 1;
    // read-only - System Security Monitor State This field contains the encoded state of the SSM's state machine
    eSSM_STATE SSM_STATE : 4;
    // read-only - System Security Configuration This field reflects the three security configuration inputs to SNVS
    eSYS_SECURITY_CFG SYS_SECURITY_CFG : 3;
    // read-only - System Secure Boot If SYS_SECURE_BOOT is 1, the chip boots from internal ROM
    uint32_t SYS_SECURE_BOOT : 1;
    uint32_t _reserved_2 : 11;
    // read-only - One Time Programmable Master Key is Equal to Zero
    eOTPMK_ZERO OTPMK_ZERO : 1;
    uint32_t _reserved_3 : 3;
    // read-only - Zeroizable Master Key is Equal to Zero
    eZMK_ZERO ZMK_ZERO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSR() = delete;
  inline void Reset() volatile { this->value = 0x8000B000; }
  static inline volatile HPSR &Instance() { return *reinterpret_cast<volatile HPSR*>(0x40C90014); }
};

// SNVS_HP Security Violation Status Register
union HPSVSR {
  
  // CAAM Security Violation security violation was detected.
  enum class eCAAM : uint32_t {
    // No CAAM Security Violation security violation was detected.
    eNOREPORT = 0,
    // CAAM Security Violation security violation was detected.
    eREPORTED = 1,
  };
  
  // JTAG Active security violation was detected.
  enum class eJTAGC : uint32_t {
    // No JTAG Active security violation was detected.
    eNOREPORT = 0,
    // JTAG Active security violation was detected.
    eREPORTED = 1,
  };
  
  // Watchdog 2 Reset security violation was detected.
  enum class eWDOG2 : uint32_t {
    // No Watchdog 2 Reset security violation was detected.
    eNOREPORT = 0,
    // Watchdog 2 Reset security violation was detected.
    eREPORTED = 1,
  };
  
  // Internal Boot security violation was detected.
  enum class eSRC : uint32_t {
    // No Internal Boot security violation was detected.
    eNOREPORT = 0,
    // Internal Boot security violation was detected.
    eREPORTED = 1,
  };
  
  // OCOTP attack error security violation was detected.
  enum class eOCOTP : uint32_t {
    // No OCOTP attack error security violation was detected.
    eNOREPORT = 0,
    // OCOTP attack error security violation was detected.
    eREPORTED = 1,
  };
  
  // Zeroizable Master Key Error Correcting Code Check Failure When set, this bit triggers a bad key violation to the SSM and a security violation to the SNVS_LP section, which clears security sensitive data
  enum class eZMK_ECC_FAIL : uint32_t {
    // ZMK ECC Failure was not detected.
    eNOREPORT = 0,
    // ZMK ECC Failure was detected.
    eREPORTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - CAAM Security Violation security violation was detected.
    eCAAM CAAM : 1;
    // read-write - JTAG Active security violation was detected.
    eJTAGC JTAGC : 1;
    // read-write - Watchdog 2 Reset security violation was detected.
    eWDOG2 WDOG2 : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Internal Boot security violation was detected.
    eSRC SRC : 1;
    // read-write - OCOTP attack error security violation was detected.
    eOCOTP OCOTP : 1;
    uint32_t _reserved_1 : 7;
    // read-only - Software Security Violation This bit is a read-only copy of the SW_SV bit in the HP Command Register
    uint32_t SW_SV : 1;
    // read-only - Software Fatal Security Violation This bit is a read-only copy of the SW_FSV bit in the HP Command Register
    uint32_t SW_FSV : 1;
    // read-only - LP Software Security Violation This bit is a read-only copy of the SW_LPSV bit in the HP Command Register
    uint32_t SW_LPSV : 1;
    // read-only - Zeroizable Master Key Syndrome The ZMK syndrome indicates the single-bit error location and parity for the ZMK register
    uint32_t ZMK_SYNDROME : 9;
    uint32_t _reserved_2 : 2;
    // read-write - Zeroizable Master Key Error Correcting Code Check Failure When set, this bit triggers a bad key violation to the SSM and a security violation to the SNVS_LP section, which clears security sensitive data
    eZMK_ECC_FAIL ZMK_ECC_FAIL : 1;
    uint32_t _reserved_3 : 3;
    // read-only - LP Security Violation A security volation was detected in the SNVS low power section
    uint32_t LP_SEC_VIO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPSVSR() = delete;
  inline void Reset() volatile { this->value = 0x80000000; }
  static inline volatile HPSVSR &Instance() { return *reinterpret_cast<volatile HPSVSR*>(0x40C90018); }
};

// SNVS_HP High Assurance Counter IV Register
union HPHACIVR {
  
  // Bit field definition.
  struct {
    // read-write - High Assurance Counter Initial Value This register is used to set the starting count value to the high assurance counter
    uint32_t HAC_COUNTER_IV : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPHACIVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPHACIVR &Instance() { return *reinterpret_cast<volatile HPHACIVR*>(0x40C9001C); }
};

// SNVS_HP High Assurance Counter Register
union HPHACR {
  
  // Bit field definition.
  struct {
    // read-only - High Assurance Counter When the HAC_EN bit is set and the SSM is in the soft fail state, this counter starts to count down with the system clock
    uint32_t HAC_COUNTER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPHACR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPHACR &Instance() { return *reinterpret_cast<volatile HPHACR*>(0x40C90020); }
};

// SNVS_HP Real Time Counter MSB Register
union HPRTCMR {
  
  // Bit field definition.
  struct {
    // read-write - HP Real Time Counter The most-significant 15 bits of the RTC
    uint32_t RTC : 15;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPRTCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPRTCMR &Instance() { return *reinterpret_cast<volatile HPRTCMR*>(0x40C90024); }
};

// SNVS_HP Real Time Counter LSB Register
union HPRTCLR {
  
  // Bit field definition.
  struct {
    // read-write - HP Real Time Counter least-significant 32 bits
    uint32_t RTC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPRTCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPRTCLR &Instance() { return *reinterpret_cast<volatile HPRTCLR*>(0x40C90028); }
};

// SNVS_HP Time Alarm MSB Register
union HPTAMR {
  
  // Bit field definition.
  struct {
    // read-write - HP Time Alarm, most-significant 15 bits
    uint32_t HPTA_MS : 15;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPTAMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPTAMR &Instance() { return *reinterpret_cast<volatile HPTAMR*>(0x40C9002C); }
};

// SNVS_HP Time Alarm LSB Register
union HPTALR {
  
  // Bit field definition.
  struct {
    // read-write - HP Time Alarm, 32 least-significant bits
    uint32_t HPTA_LS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPTALR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HPTALR &Instance() { return *reinterpret_cast<volatile HPTALR*>(0x40C90030); }
};

// SNVS_LP Lock Register
union LPLR {
  
  // Zeroizable Master Key Write Hard Lock When set, prevents any writes (software and hardware) to the ZMK registers and ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
  enum class eZMK_WHL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Zeroizable Master Key Read Hard Lock When set, prevents any software reads to the ZMK registers and ZMK_ECC_VALUE field of the LPMKCR
  enum class eZMK_RHL : uint32_t {
    // Read access is allowed (only in software programming mode).
    eREAD_ACCESS_ALLOWED = 0,
    // Read access is not allowed.
    eREAD_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Secure Real Time Counter Hard Lock When set, prevents any writes to the SRTC registers, SRTC_ENV, and SRTC_INV_EN bits
  enum class eSRTC_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Calibration Hard Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
  enum class eLPCALB_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Monotonic Counter Hard Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
  enum class eMC_HL : uint32_t {
    // Write access (increment) is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access (increment) is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // General Purpose Register Hard Lock When set, prevents any writes to the GPR
  enum class eGPR_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Security Violation Control Register Hard Lock When set, prevents any writes to the LPSVCR
  enum class eLPSVCR_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Tamper Glitch Filter Configuration Register Hard Lock When set, prevents any writes to the LPTGFCR
  enum class eLPTGFCR_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // LP Security Events Configuration Register Hard Lock When set, prevents any writes to the LPSECR
  enum class eLPSECR_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Master Key Select Hard Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LP Master Key Control Register
  enum class eMKS_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 1 Hard Lock When set, prevents any writes to the Active Tamper 1 registers
  enum class eAT1_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 2 Hard Lock When set, prevents any writes to the Active Tamper 2 registers
  enum class eAT2_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 3 Hard Lock When set, prevents any writes to the Active Tamper 3 registers
  enum class eAT3_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 4 Hard Lock When set, prevents any writes to the Active Tamper 4 registers
  enum class eAT4_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Active Tamper 5 Hard Lock When set, prevents any writes to the Active Tamper 5 registers
  enum class eAT5_HL : uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Write Hard Lock When set, prevents any writes (software and hardware) to the ZMK registers and ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
    eZMK_WHL ZMK_WHL : 1;
    // read-write - Zeroizable Master Key Read Hard Lock When set, prevents any software reads to the ZMK registers and ZMK_ECC_VALUE field of the LPMKCR
    eZMK_RHL ZMK_RHL : 1;
    // read-write - Secure Real Time Counter Hard Lock When set, prevents any writes to the SRTC registers, SRTC_ENV, and SRTC_INV_EN bits
    eSRTC_HL SRTC_HL : 1;
    // read-write - LP Calibration Hard Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
    eLPCALB_HL LPCALB_HL : 1;
    // read-write - Monotonic Counter Hard Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
    eMC_HL MC_HL : 1;
    // read-write - General Purpose Register Hard Lock When set, prevents any writes to the GPR
    eGPR_HL GPR_HL : 1;
    // read-write - LP Security Violation Control Register Hard Lock When set, prevents any writes to the LPSVCR
    eLPSVCR_HL LPSVCR_HL : 1;
    // read-write - LP Tamper Glitch Filter Configuration Register Hard Lock When set, prevents any writes to the LPTGFCR
    eLPTGFCR_HL LPTGFCR_HL : 1;
    // read-write - LP Security Events Configuration Register Hard Lock When set, prevents any writes to the LPSECR
    eLPSECR_HL LPSECR_HL : 1;
    // read-write - Master Key Select Hard Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LP Master Key Control Register
    eMKS_HL MKS_HL : 1;
    uint32_t _reserved_0 : 14;
    // read-write - Active Tamper 1 Hard Lock When set, prevents any writes to the Active Tamper 1 registers
    eAT1_HL AT1_HL : 1;
    // read-write - Active Tamper 2 Hard Lock When set, prevents any writes to the Active Tamper 2 registers
    eAT2_HL AT2_HL : 1;
    // read-write - Active Tamper 3 Hard Lock When set, prevents any writes to the Active Tamper 3 registers
    eAT3_HL AT3_HL : 1;
    // read-write - Active Tamper 4 Hard Lock When set, prevents any writes to the Active Tamper 4 registers
    eAT4_HL AT4_HL : 1;
    // read-write - Active Tamper 5 Hard Lock When set, prevents any writes to the Active Tamper 5 registers
    eAT5_HL AT5_HL : 1;
    uint32_t _reserved_1 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPLR &Instance() { return *reinterpret_cast<volatile LPLR*>(0x40C90034); }
};

// SNVS_LP Control Register
union LPCR {
  
  // Secure Real Time Counter Enabled and Valid When set, the SRTC becomes operational
  enum class eSRTC_ENV : uint32_t {
    // SRTC is disabled or invalid.
    eDISABLED = 0,
    // SRTC is enabled and valid.
    eENABLED = 1,
  };
  
  // LP Time Alarm Enable When set, the SNVS functional interrupt is asserted if the LP Time Alarm Register is equal to the 32 MSBs of the secure real time counter
  enum class eLPTA_EN : uint32_t {
    // LP time alarm interrupt is disabled.
    eDISABLED = 0,
    // LP time alarm interrupt is enabled.
    eENABLED = 1,
  };
  
  // Monotonic Counter Enabled and Valid When set, the MC can be incremented (by write transaction to the LPSMCMR or LPSMCLR)
  enum class eMC_ENV : uint32_t {
    // MC is disabled or invalid.
    eDISABLED = 0,
    // MC is enabled and valid.
    eENABLED = 1,
  };
  
  // If this bit is 1, in the case of a security violation the SRTC stops counting and the SRTC is invalidated (SRTC_ENV bit is cleared)
  enum class eSRTC_INV_EN : uint32_t {
    // SRTC stays valid in the case of security violation (other than a software violation (HPSVSR[SW_LPSV] = 1 or HPCOMR[SW_LPSV] = 1)).
    eKEEP_VALID = 0,
    // SRTC is invalidated in the case of security violation.
    eINVALIDATE = 1,
  };
  
  // Dumb PMIC Enabled When set, software can control the system power
  enum class eDP_EN : uint32_t {
    // Smart PMIC enabled.
    eSMART_PMIC_ENABLED = 0,
    // Dumb PMIC enabled.
    eDUMB_PMIC_ENABLED = 1,
  };
  
  // Turn off System Power Asserting this bit causes a signal to be sent to the Power Management IC to turn off the system power
  enum class eTOP : uint32_t {
    // Leave system power on.
    eKEEP_ON = 0,
    // Turn off system power.
    eTURN_OFF = 1,
  };
  
  // LP Calibration Enable When set, enables the SRTC calibration mechanism
  enum class eLPCALB_EN : uint32_t {
    // SRTC Time calibration is disabled.
    eDISABLED = 0,
    // SRTC Time calibration is enabled.
    eENABLED = 1,
  };
  
  // LP Calibration Value Defines signed calibration value for SRTC
  enum class eLPCALB_VAL : uint32_t {
    // +0 counts per each 32768 ticks of the counter clock
    eADD_0_PER_32768_TICKS = 0,
    // +1 counts per each 32768 ticks of the counter clock
    eADD_1_PER_32768_TICKS = 1,
    // +2 counts per each 32768 ticks of the counter clock
    eADD_2_PER_32768_TICKS = 2,
    // +15 counts per each 32768 ticks of the counter clock
    eADD_15_PER_32768_TICKS = 15,
    // -16 counts per each 32768 ticks of the counter clock
    eSUB_16_PER_32768_TICKS = 16,
    // -15 counts per each 32768 ticks of the counter clock
    eSUB_15_PER_32768_TICKS = 17,
    // -2 counts per each 32768 ticks of the counter clock
    eSUB_2_PER_32768_TICKS = 30,
    // -1 counts per each 32768 ticks of the counter clock
    eSUB_1_PER_32768_TICKS = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Secure Real Time Counter Enabled and Valid When set, the SRTC becomes operational
    eSRTC_ENV SRTC_ENV : 1;
    // read-write - LP Time Alarm Enable When set, the SNVS functional interrupt is asserted if the LP Time Alarm Register is equal to the 32 MSBs of the secure real time counter
    eLPTA_EN LPTA_EN : 1;
    // read-write - Monotonic Counter Enabled and Valid When set, the MC can be incremented (by write transaction to the LPSMCMR or LPSMCLR)
    eMC_ENV MC_ENV : 1;
    // read-write - LP Wake-Up Interrupt Enable This interrupt line should be connected to the external pin and is intended to inform the external chip about an SNVS_LP event (tamper event, MC rollover, SRTC rollover, or time alarm )
    uint32_t LPWUI_EN : 1;
    // read-write - If this bit is 1, in the case of a security violation the SRTC stops counting and the SRTC is invalidated (SRTC_ENV bit is cleared)
    eSRTC_INV_EN SRTC_INV_EN : 1;
    // read-write - Dumb PMIC Enabled When set, software can control the system power
    eDP_EN DP_EN : 1;
    // read-write - Turn off System Power Asserting this bit causes a signal to be sent to the Power Management IC to turn off the system power
    eTOP TOP : 1;
    // read-write - Digital Low-Voltage Event Enable By default the detection of a low-voltage event does not cause the pmic_en_b signal to be asserted
    uint32_t LVD_EN : 1;
    // read-write - LP Calibration Enable When set, enables the SRTC calibration mechanism
    eLPCALB_EN LPCALB_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - LP Calibration Value Defines signed calibration value for SRTC
    eLPCALB_VAL LPCALB_VAL : 5;
    uint32_t _reserved_1 : 1;
    // read-write - This field configures the button press time out values for the PMIC Logic
    uint32_t BTN_PRESS_TIME : 2;
    // read-write - This field configures the amount of debounce time for the BTN input signal
    uint32_t DEBOUNCE : 2;
    // read-write - The ON_TIME field is used to configure the period of time after BTN is asserted before pmic_en_b is asserted to turn on the SoC power
    uint32_t ON_TIME : 2;
    // read-write - PMIC On Request Enable The value written to PK_EN will be asserted on output signal snvs_lp_pk_en
    uint32_t PK_EN : 1;
    // read-write - PMIC On Request Override The value written to PK_OVERRIDE will be asserted on output signal snvs_lp_pk_override
    uint32_t PK_OVERRIDE : 1;
    // read-write - General Purpose Registers Zeroization Disable
    uint32_t GPR_Z_DIS : 1;
    uint32_t _reserved_2 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile LPCR &Instance() { return *reinterpret_cast<volatile LPCR*>(0x40C90038); }
};

// SNVS_LP Master Key Control Register
union LPMKCR {
  
  // Master Key Select These bits select the SNVS Master Key output when Master Key Select bits are enabled by MKS_EN bit in the HPCOMR
  enum class eMASTER_KEY_SEL : uint32_t {
    // Select one time programmable master key.
    eSELECT_OTPMK = 0,
    // Select zeroizable master key when MKS_EN bit is set .
    eSELECT_ZMK = 2,
    // Select combined master key when MKS_EN bit is set .
    eSELECT_COMBO = 3,
  };
  
  // Zeroizable Master Key hardware Programming mode When set, only the hardware key programming mechanism can set the ZMK and software cannot read it
  enum class eZMK_HWP : uint32_t {
    // ZMK is in the software programming mode.
    eSW_PROG_MODE = 0,
    // ZMK is in the hardware programming mode.
    eHW_PROG_MODE = 1,
  };
  
  // Zeroizable Master Key Valid When set, the ZMK value can be selected by the master key control block for use by cryptographic modules
  enum class eZMK_VAL : uint32_t {
    // ZMK is not valid.
    eINVALID = 0,
    // ZMK is valid.
    eVALID = 1,
  };
  
  // Zeroizable Master Key Error Correcting Code Check Enable Writing one to this field automatically calculates and sets the ZMK ECC value in the ZMK_ECC_VALUE field of this register
  enum class eZMK_ECC_EN : uint32_t {
    // ZMK ECC check is disabled.
    eDISABLED = 0,
    // ZMK ECC check is enabled.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Master Key Select These bits select the SNVS Master Key output when Master Key Select bits are enabled by MKS_EN bit in the HPCOMR
    eMASTER_KEY_SEL MASTER_KEY_SEL : 2;
    // read-write - Zeroizable Master Key hardware Programming mode When set, only the hardware key programming mechanism can set the ZMK and software cannot read it
    eZMK_HWP ZMK_HWP : 1;
    // read-write - Zeroizable Master Key Valid When set, the ZMK value can be selected by the master key control block for use by cryptographic modules
    eZMK_VAL ZMK_VAL : 1;
    // read-write - Zeroizable Master Key Error Correcting Code Check Enable Writing one to this field automatically calculates and sets the ZMK ECC value in the ZMK_ECC_VALUE field of this register
    eZMK_ECC_EN ZMK_ECC_EN : 1;
    uint32_t _reserved_0 : 2;
    // read-only - Zeroizable Master Key Error Correcting Code Value This field is automatically calculated and set when one is written into ZMK_ECC_EN bit of this register
    uint32_t ZMK_ECC_VALUE : 9;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPMKCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPMKCR &Instance() { return *reinterpret_cast<volatile LPMKCR*>(0x40C9003C); }
};

// SNVS_LP Security Violation Control Register
union LPSVCR {
  
  // CAAM Security Violation Enable This bit enables CAAM Security Violation Input
  enum class eCAAM_EN : uint32_t {
    // CAAM Security Violation is disabled in the LP domain.
    eDISABLED = 0,
    // CAAM Security Violation is enabled in the LP domain.
    eENABLED = 1,
  };
  
  // JTAG Active Enable This bit enables JTAG Active Input
  enum class eJTAGC_EN : uint32_t {
    // JTAG Active is disabled in the LP domain.
    eDISABLED = 0,
    // JTAG Active is enabled in the LP domain.
    eENABLED = 1,
  };
  
  // Watchdog 2 Reset Enable This bit enables Watchdog 2 Reset Input
  enum class eWDOG2_EN : uint32_t {
    // Watchdog 2 Reset is disabled in the LP domain.
    eDISABLED = 0,
    // Watchdog 2 Reset is enabled in the LP domain.
    eENABLED = 1,
  };
  
  // Internal Boot Enable This bit enables Internal Boot Input
  enum class eSRC_EN : uint32_t {
    // Internal Boot is disabled in the LP domain.
    eDISABLED = 0,
    // Internal Boot is enabled in the LP domain.
    eENABLED = 1,
  };
  
  // OCOTP attack error Enable This bit enables OCOTP attack error Input
  enum class eOCOTP_EN : uint32_t {
    // OCOTP attack error is disabled in the LP domain.
    eDISABLED = 0,
    // OCOTP attack error is enabled in the LP domain.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - CAAM Security Violation Enable This bit enables CAAM Security Violation Input
    eCAAM_EN CAAM_EN : 1;
    // read-write - JTAG Active Enable This bit enables JTAG Active Input
    eJTAGC_EN JTAGC_EN : 1;
    // read-write - Watchdog 2 Reset Enable This bit enables Watchdog 2 Reset Input
    eWDOG2_EN WDOG2_EN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Internal Boot Enable This bit enables Internal Boot Input
    eSRC_EN SRC_EN : 1;
    // read-write - OCOTP attack error Enable This bit enables OCOTP attack error Input
    eOCOTP_EN OCOTP_EN : 1;
    uint32_t _reserved_1 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSVCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSVCR &Instance() { return *reinterpret_cast<volatile LPSVCR*>(0x40C90040); }
};

// SNVS_LP Tamper Glitch Filters Configuration Register
union LPTGFCR {
  
  // Wire-Mesh Tamper Glitch Filter Enable When set, enables the wire-mesh tamper glitch filter
  enum class eWMTGF_EN : uint32_t {
    // Wire-mesh tamper glitch filter is bypassed.
    eBYPASSED = 0,
    // Wire-mesh tamper glitch filter is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 1 Enable When set, enables the external tamper glitch filter 1.
  enum class eETGF1_EN : uint32_t {
    // External tamper glitch filter 1 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 1 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 2 Enable When set, enables the external tamper glitch filter 2.
  enum class eETGF2_EN : uint32_t {
    // External tamper glitch filter 2 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 2 is enabled.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Wire-Mesh Tamper Glitch Filter Configures the length of the digital glitch filter for the wire-mesh tamper 1 and 2 pins between 1 and 63 SRTC clock cycles
    uint32_t WMTGF : 5;
    uint32_t _reserved_0 : 2;
    // read-write - Wire-Mesh Tamper Glitch Filter Enable When set, enables the wire-mesh tamper glitch filter
    eWMTGF_EN WMTGF_EN : 1;
    uint32_t _reserved_1 : 8;
    // read-write - External Tamper Glitch Filter 1 Configures the length of the digital glitch filter for the external tamper 1 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF1 : 7;
    // read-write - External Tamper Glitch Filter 1 Enable When set, enables the external tamper glitch filter 1.
    eETGF1_EN ETGF1_EN : 1;
    // read-write - External Tamper Glitch Filter 2 Configures the length of the digital glitch filter for the external tamper 2 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF2 : 7;
    // read-write - External Tamper Glitch Filter 2 Enable When set, enables the external tamper glitch filter 2.
    eETGF2_EN ETGF2_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGFCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGFCR &Instance() { return *reinterpret_cast<volatile LPTGFCR*>(0x40C90044); }
};

// SNVS_LP Tamper Detect Configuration Register
union LPTDCR {
  
  // SRTC Rollover Enable When set, an SRTC rollover event generates an LP security violation.
  enum class eSRTCR_EN : uint32_t {
    // SRTC rollover is disabled.
    eDISABLED = 0,
    // SRTC rollover is enabled.
    eENABLED = 1,
  };
  
  // MC Rollover Enable When set, an MC Rollover event generates an LP security violation.
  enum class eMCR_EN : uint32_t {
    // MC rollover is disabled.
    eDISABLED = 0,
    // MC rollover is enabled.
    eENABLED = 1,
  };
  
  // Clock Tamper Enable When set, a clock monitor tamper generates an LP security violation.
  enum class eCT_EN : uint32_t {
    // Clock tamper is disabled.
    eDISABLED = 0,
    // Clock tamper is enabled.
    eENABLED = 1,
  };
  
  // Temperature Tamper Enable When set, a temperature monitor tamper generates an LP security violation
  enum class eTT_EN : uint32_t {
    // Temperature tamper is disabled.
    eDISABLED = 0,
    // Temperature tamper is enabled.
    eENABLED = 1,
  };
  
  // Voltage Tamper Enable Voltage Tamper Enable should be enabled 500 us after setting SCSC_SOSC_CTR [VOLT_TEMP_TAMPER_EN]
  enum class eVT_EN : uint32_t {
    // Voltage tamper is disabled.
    eDISABLED = 0,
    // Voltage tamper is enabled.
    eENABLED = 1,
  };
  
  // Wire-Mesh Tampering 1 Enable When set, wire-mesh tampering 1 detection generates an LP security violation
  enum class eWMT1_EN : uint32_t {
    // Wire-mesh tamper 1 is disabled.
    eDISABLED = 0,
    // Wire-mesh tamper 1 is enabled.
    eENABLED = 1,
  };
  
  // Wire-Mesh Tampering 2 Enable When set, wire-mesh tampering 2 detection generates an LP security violation
  enum class eWMT2_EN : uint32_t {
    // Wire-mesh tamper 2 is disabled.
    eDISABLED = 0,
    // Wire-mesh tamper 2 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 1 Enable When set, external tampering 1 detection generates an LP security violation
  enum class eET1_EN : uint32_t {
    // External tamper 1 is disabled.
    eDISABLED = 0,
    // External tamper 1 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 2 Enable When set, external tampering 2 detection generates an LP security violation
  enum class eET2_EN : uint32_t {
    // External tamper 2 is disabled.
    eDISABLED = 0,
    // External tamper 2 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 1 Polarity This bit is used to determine the polarity of external tamper 1.
  enum class eET1P : uint32_t {
    // External tamper 1 is active low.
    eACTIVE_LOW = 0,
    // External tamper 1 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 2 Polarity This bit is used to determine the polarity of external tamper 2.
  enum class eET2P : uint32_t {
    // External tamper 2 is active low.
    eACTIVE_LOW = 0,
    // External tamper 2 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // Oscillator Bypass When OSCB=1 the osc_bypass signal is asserted
  enum class eOSCB : uint32_t {
    // Normal SRTC clock oscillator not bypassed.
    eNOT_BYPASSED = 0,
    // Normal SRTC clock oscillator bypassed. Alternate clock can drive the SRTC clock source.
    eBYPASSED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - SRTC Rollover Enable When set, an SRTC rollover event generates an LP security violation.
    eSRTCR_EN SRTCR_EN : 1;
    // read-write - MC Rollover Enable When set, an MC Rollover event generates an LP security violation.
    eMCR_EN MCR_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Clock Tamper Enable When set, a clock monitor tamper generates an LP security violation.
    eCT_EN CT_EN : 1;
    // read-write - Temperature Tamper Enable When set, a temperature monitor tamper generates an LP security violation
    eTT_EN TT_EN : 1;
    // read-write - Voltage Tamper Enable Voltage Tamper Enable should be enabled 500 us after setting SCSC_SOSC_CTR [VOLT_TEMP_TAMPER_EN]
    eVT_EN VT_EN : 1;
    // read-write - Wire-Mesh Tampering 1 Enable When set, wire-mesh tampering 1 detection generates an LP security violation
    eWMT1_EN WMT1_EN : 1;
    // read-write - Wire-Mesh Tampering 2 Enable When set, wire-mesh tampering 2 detection generates an LP security violation
    eWMT2_EN WMT2_EN : 1;
    // read-write - External Tampering 1 Enable When set, external tampering 1 detection generates an LP security violation
    eET1_EN ET1_EN : 1;
    // read-write - External Tampering 2 Enable When set, external tampering 2 detection generates an LP security violation
    eET2_EN ET2_EN : 1;
    // read-write - External Tampering 1 Polarity This bit is used to determine the polarity of external tamper 1.
    eET1P ET1P : 1;
    // read-write - External Tampering 2 Polarity This bit is used to determine the polarity of external tamper 2.
    eET2P ET2P : 1;
    uint32_t _reserved_2 : 1;
    // read-write - System Power Fail Detector (PFD) Observability Flop The asynchronous reset input of this flop is connected directly to the inverted output of the PFD analog circuitry (external to the SNVS block)
    uint32_t PFD_OBSERV : 1;
    // read-write - Power On Reset (POR) Observability Flop The asynchronous reset input of this flop is connected directly to the output of the POR analog circuitry (external to the SNVS
    uint32_t POR_OBSERV : 1;
    // read-write - Low Temp Detect Configuration These configuration bits are wired as an output of the module.
    uint32_t LTDC : 3;
    uint32_t _reserved_3 : 1;
    // read-write - High Temperature Detect Configuration These configuration bits are wired as an output of the module
    uint32_t HTDC : 3;
    uint32_t _reserved_4 : 1;
    // read-write - Voltage Reference Configuration These configuration bits are wired as an output of the module.
    uint32_t VRC : 3;
    uint32_t _reserved_5 : 1;
    // read-write - Oscillator Bypass When OSCB=1 the osc_bypass signal is asserted
    eOSCB OSCB : 1;
    uint32_t _reserved_6 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDCR &Instance() { return *reinterpret_cast<volatile LPTDCR*>(0x40C90048); }
};

// SNVS_LP Status Register
union LPSR {
  
  // LP Time Alarm
  enum class eLPTA : uint32_t {
    // No time alarm interrupt occurred.
    eNOREPORT = 0,
    // A time alarm interrupt occurred.
    eREPORTED = 1,
  };
  
  // Secure Real Time Counter Rollover
  enum class eSRTCR : uint32_t {
    // SRTC has not reached its maximum value.
    eNOREPORT = 0,
    // SRTC has reached its maximum value.
    eREPORTED = 1,
  };
  
  // Monotonic Counter Rollover
  enum class eMCR : uint32_t {
    // MC has not reached its maximum value.
    eNOREPORT = 0,
    // MC has reached its maximum value.
    eREPORTED = 1,
  };
  
  // Digital Low Voltage Event Detected
  enum class eLVD : uint32_t {
    // No low voltage event detected.
    eNOLOWVOLT = 0,
    // Low voltage event is detected.
    eLOWVOLTDETECTED = 1,
  };
  
  // Clock Tampering Detected
  enum class eCTD : uint32_t {
    // No clock tamper.
    eNOREPORT = 0,
    // Clock tamper is detected.
    eREPORTED = 1,
  };
  
  // Temperature Tamper Detected
  enum class eTTD : uint32_t {
    // No temperature tamper.
    eNOREPORT = 0,
    // Temperature tamper is detected.
    eREPORTED = 1,
  };
  
  // Voltage Tampering Detected
  enum class eVTD : uint32_t {
    // Voltage tampering not detected.
    eNOREPORT = 0,
    // Voltage tampering detected.
    eREPORTED = 1,
  };
  
  // Wire-Mesh Tampering 1 Detected
  enum class eWMT1D : uint32_t {
    // Wire-mesh tampering 1 not detected.
    eNOREPORT = 0,
    // Wire-mesh tampering 1 detected.
    eREPORTED = 1,
  };
  
  // Wire-Mesh Tampering 2 Detected
  enum class eWMT2D : uint32_t {
    // Wire-mesh tampering 2 not detected.
    eNOREPORT = 0,
    // Wire-mesh tampering 2 detected.
    eREPORTED = 1,
  };
  
  // External Tampering 1 Detected
  enum class eET1D : uint32_t {
    // External tampering 1 not detected.
    eNOREPORT = 0,
    // External tampering 1 detected.
    eREPORTED = 1,
  };
  
  // External Tampering 2 Detected
  enum class eET2D : uint32_t {
    // External tampering 2 not detected.
    eNOREPORT = 0,
    // External tampering 2 detected.
    eREPORTED = 1,
  };
  
  // External Security Violation Detected Indicates that a security violation is detected on one of the HP security violation ports
  enum class eESVD : uint32_t {
    // No external security violation.
    eNOREPORT = 0,
    // External security violation is detected.
    eREPORTED = 1,
  };
  
  // Emergency Off This bit is set when a power off is requested.
  enum class eEO : uint32_t {
    // Emergency off was not detected.
    eNOREPORT = 0,
    // Emergency off was detected.
    eREPORTED = 1,
  };
  
  // Set Power Off The SPO bit is set when the power button is pressed longer than the configured debounce time
  enum class eSPOF : uint32_t {
    // Set Power Off was not detected.
    eNOREPORT = 0,
    // Set Power Off was detected.
    eREPORTED = 1,
  };
  
  // LP Section is Non-Secured Indicates that LP section was provisioned/programmed in the non-secure state
  enum class eLPNS : uint32_t {
    // LP section was not programmed in the non-secure state.
    eNOT_PRGRMD_IN_NON_SECURE_STATE = 0,
    // LP section was programmed in the non-secure state.
    eWAS_PRGRMD_IN_NON_SECURE_STATE = 1,
  };
  
  // LP Section is Secured Indicates that the LP section is provisioned/programmed in the secure or trusted state
  enum class eLPS : uint32_t {
    // LP section was not programmed in secure or trusted state.
    eNOT_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 0,
    // LP section was programmed in secure or trusted state.
    eWAS_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LP Time Alarm
    eLPTA LPTA : 1;
    // read-write - Secure Real Time Counter Rollover
    eSRTCR SRTCR : 1;
    // read-write - Monotonic Counter Rollover
    eMCR MCR : 1;
    // read-write - Digital Low Voltage Event Detected
    eLVD LVD : 1;
    // read-write - Clock Tampering Detected
    eCTD CTD : 1;
    // read-write - Temperature Tamper Detected
    eTTD TTD : 1;
    // read-write - Voltage Tampering Detected
    eVTD VTD : 1;
    // read-write - Wire-Mesh Tampering 1 Detected
    eWMT1D WMT1D : 1;
    // read-write - Wire-Mesh Tampering 2 Detected
    eWMT2D WMT2D : 1;
    // read-write - External Tampering 1 Detected
    eET1D ET1D : 1;
    // read-write - External Tampering 2 Detected
    eET2D ET2D : 1;
    uint32_t _reserved_0 : 5;
    // read-write - External Security Violation Detected Indicates that a security violation is detected on one of the HP security violation ports
    eESVD ESVD : 1;
    // read-write - Emergency Off This bit is set when a power off is requested.
    eEO EO : 1;
    // read-write - Set Power Off The SPO bit is set when the power button is pressed longer than the configured debounce time
    eSPOF SPOF : 1;
    uint32_t _reserved_1 : 11;
    // read-only - LP Section is Non-Secured Indicates that LP section was provisioned/programmed in the non-secure state
    eLPNS LPNS : 1;
    // read-only - LP Section is Secured Indicates that the LP section is provisioned/programmed in the secure or trusted state
    eLPS LPS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSR() = delete;
  inline void Reset() volatile { this->value = 0x00000008; }
  static inline volatile LPSR &Instance() { return *reinterpret_cast<volatile LPSR*>(0x40C9004C); }
};

// SNVS_LP Secure Real Time Counter MSB Register
union LPSRTCMR {
  
  // Bit field definition.
  struct {
    // read-write - LP Secure Real Time Counter The most-significant 15 bits of the SRTC
    uint32_t SRTC : 15;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSRTCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSRTCMR &Instance() { return *reinterpret_cast<volatile LPSRTCMR*>(0x40C90050); }
};

// SNVS_LP Secure Real Time Counter LSB Register
union LPSRTCLR {
  
  // Bit field definition.
  struct {
    // read-write - LP Secure Real Time Counter least-significant 32 bits This register can be programmed only when SRTC is not active and not locked, meaning the SRTC_ENV, SRTC_SL, and SRTC_HL bits are not set
    uint32_t SRTC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSRTCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSRTCLR &Instance() { return *reinterpret_cast<volatile LPSRTCLR*>(0x40C90054); }
};

// SNVS_LP Time Alarm Register
union LPTAR {
  
  // Bit field definition.
  struct {
    // read-write - LP Time Alarm This register can be programmed only when the LP time alarm is disabled (LPTA_EN bit is not set)
    uint32_t LPTA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTAR &Instance() { return *reinterpret_cast<volatile LPTAR*>(0x40C90058); }
};

// SNVS_LP Secure Monotonic Counter MSB Register
union LPSMCMR {
  
  // Bit field definition.
  struct {
    // read-write - Monotonic Counter most-significant 16 Bits Note that writing to this register does not change the value of this field to the value that was written
    uint32_t MON_COUNTER : 16;
    // read-only - Monotonic Counter Era Bits These bits are inputs to the module and typically connect to fuses
    uint32_t MC_ERA_BITS : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSMCMR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSMCMR &Instance() { return *reinterpret_cast<volatile LPSMCMR*>(0x40C9005C); }
};

// SNVS_LP Secure Monotonic Counter LSB Register
union LPSMCLR {
  
  // Bit field definition.
  struct {
    // read-write - Monotonic Counter bits Note that writing to this register does not change the value of this field to the value that was written
    uint32_t MON_COUNTER : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSMCLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSMCLR &Instance() { return *reinterpret_cast<volatile LPSMCLR*>(0x40C90060); }
};

// SNVS_LP Digital Low-Voltage Detector Register
union LPLVDR {
  
  // Bit field definition.
  struct {
    // read-write - Low-Voltage Detector Value
    uint32_t LVD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPLVDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPLVDR &Instance() { return *reinterpret_cast<volatile LPLVDR*>(0x40C90064); }
};

// SNVS_LP General Purpose Register 0 (legacy alias)
union LPGPR0_legacy_alias {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR0_legacy_alias() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR0_legacy_alias &Instance() { return *reinterpret_cast<volatile LPGPR0_legacy_alias*>(0x40C90068); }
};

// SNVS_LP Zeroizable Master Key Register
union LPZMKR_0 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_0 &Instance() { return *reinterpret_cast<volatile LPZMKR_0*>(0x40C9006C); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_1 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_1 &Instance() { return *reinterpret_cast<volatile LPZMKR_1*>(0x40C90070); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_2 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_2 &Instance() { return *reinterpret_cast<volatile LPZMKR_2*>(0x40C90074); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_3 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_3 &Instance() { return *reinterpret_cast<volatile LPZMKR_3*>(0x40C90078); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_4 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_4 &Instance() { return *reinterpret_cast<volatile LPZMKR_4*>(0x40C9007C); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_5 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_5 &Instance() { return *reinterpret_cast<volatile LPZMKR_5*>(0x40C90080); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_6 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_6 &Instance() { return *reinterpret_cast<volatile LPZMKR_6*>(0x40C90084); }
};
// SNVS_LP Zeroizable Master Key Register
union LPZMKR_7 {
  
  // Bit field definition.
  struct {
    // read-write - Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    uint32_t ZMK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPZMKR_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPZMKR_7 &Instance() { return *reinterpret_cast<volatile LPZMKR_7*>(0x40C90088); }
};

// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_alias_0 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias_0 &Instance() { return *reinterpret_cast<volatile LPGPR_alias_0*>(0x40C90090); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_alias_1 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias_1 &Instance() { return *reinterpret_cast<volatile LPGPR_alias_1*>(0x40C90094); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_alias_2 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias_2 &Instance() { return *reinterpret_cast<volatile LPGPR_alias_2*>(0x40C90098); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_alias_3 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_alias_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_alias_3 &Instance() { return *reinterpret_cast<volatile LPGPR_alias_3*>(0x40C9009C); }
};

// SNVS_LP Tamper Detectors Config 2 Register
union LPTDC2R {
  
  // External Tampering 3 Enable When set, external tampering 3 detection generates an LP security violation
  enum class eET3_EN : uint32_t {
    // External tamper 3 is disabled.
    eDISABLED = 0,
    // External tamper 3 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 4 Enable When set, external tampering 4 detection generates an LP security violation
  enum class eET4_EN : uint32_t {
    // External tamper 4 is disabled.
    eDISABLED = 0,
    // External tamper 4 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 5 Enable When set, external tampering 5 detection generates an LP security violation
  enum class eET5_EN : uint32_t {
    // External tamper 5 is disabled.
    eDISABLED = 0,
    // External tamper 5 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 6 Enable When set, external tampering 6 detection generates an LP security violation
  enum class eET6_EN : uint32_t {
    // External tamper 6 is disabled.
    eDISABLED = 0,
    // External tamper 6 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 7 Enable When set, external tampering 7 detection generates an LP security violation
  enum class eET7_EN : uint32_t {
    // External tamper 7 is disabled.
    eDISABLED = 0,
    // External tamper 7 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 8 Enable When set, external tampering 8 detection generates an LP security violation
  enum class eET8_EN : uint32_t {
    // External tamper 8 is disabled.
    eDISABLED = 0,
    // External tamper 8 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
  enum class eET9_EN : uint32_t {
    // External tamper 9 is disabled.
    eDISABLED = 0,
    // External tamper 9 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 10 Enable When set, external tampering 10 detection generates an LP security violation
  enum class eET10_EN : uint32_t {
    // External tamper 10 is disabled.
    eDISABLED = 0,
    // External tamper 10 is enabled.
    eENABLED = 1,
  };
  
  // External Tampering 3 Polarity This bit is used to determine the polarity of external tamper 3.
  enum class eET3P : uint32_t {
    // External tamper 3 active low.
    eACTIVE_LOW = 0,
    // External tamper 3 active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 4 Polarity This bit is used to determine the polarity of external tamper 4.
  enum class eET4P : uint32_t {
    // External tamper 4 is active low.
    eACTIVE_LOW = 0,
    // External tamper 4 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 5 Polarity This bit is used to determine the polarity of external tamper 5.
  enum class eET5P : uint32_t {
    // External tamper 5 is active low.
    eACTIVE_LOW = 0,
    // External tamper 5 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 6 Polarity This bit is used to determine the polarity of external tamper 6.
  enum class eET6P : uint32_t {
    // External tamper 6 is active low.
    eACTIVE_LOW = 0,
    // External tamper 6 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 7 Polarity This bit is used to determine the polarity of external tamper 7.
  enum class eET7P : uint32_t {
    // External tamper 7 is active low.
    eACTIVE_LOW = 0,
    // External tamper 7 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 8 Polarity This bit is used to determine the polarity of external tamper 8.
  enum class eET8P : uint32_t {
    // External tamper 8 is active low.
    eACTIVE_LOW = 0,
    // External tamper 8 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 9 Polarity This bit is used to determine the polarity of external tamper 9.
  enum class eET9P : uint32_t {
    // External tamper 9 is active low.
    eACTIVE_LOW = 0,
    // External tamper 9 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // External Tampering 10 Polarity This bit is used to determine the polarity of external tamper 10.
  enum class eET10P : uint32_t {
    // External tamper 10 is active low.
    eACTIVE_LOW = 0,
    // External tamper 10 is active high.
    eACTIVE_HIGH = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - External Tampering 3 Enable When set, external tampering 3 detection generates an LP security violation
    eET3_EN ET3_EN : 1;
    // read-write - External Tampering 4 Enable When set, external tampering 4 detection generates an LP security violation
    eET4_EN ET4_EN : 1;
    // read-write - External Tampering 5 Enable When set, external tampering 5 detection generates an LP security violation
    eET5_EN ET5_EN : 1;
    // read-write - External Tampering 6 Enable When set, external tampering 6 detection generates an LP security violation
    eET6_EN ET6_EN : 1;
    // read-write - External Tampering 7 Enable When set, external tampering 7 detection generates an LP security violation
    eET7_EN ET7_EN : 1;
    // read-write - External Tampering 8 Enable When set, external tampering 8 detection generates an LP security violation
    eET8_EN ET8_EN : 1;
    // read-write - External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
    eET9_EN ET9_EN : 1;
    // read-write - External Tampering 10 Enable When set, external tampering 10 detection generates an LP security violation
    eET10_EN ET10_EN : 1;
    uint32_t _reserved_0 : 8;
    // read-write - External Tampering 3 Polarity This bit is used to determine the polarity of external tamper 3.
    eET3P ET3P : 1;
    // read-write - External Tampering 4 Polarity This bit is used to determine the polarity of external tamper 4.
    eET4P ET4P : 1;
    // read-write - External Tampering 5 Polarity This bit is used to determine the polarity of external tamper 5.
    eET5P ET5P : 1;
    // read-write - External Tampering 6 Polarity This bit is used to determine the polarity of external tamper 6.
    eET6P ET6P : 1;
    // read-write - External Tampering 7 Polarity This bit is used to determine the polarity of external tamper 7.
    eET7P ET7P : 1;
    // read-write - External Tampering 8 Polarity This bit is used to determine the polarity of external tamper 8.
    eET8P ET8P : 1;
    // read-write - External Tampering 9 Polarity This bit is used to determine the polarity of external tamper 9.
    eET9P ET9P : 1;
    // read-write - External Tampering 10 Polarity This bit is used to determine the polarity of external tamper 10.
    eET10P ET10P : 1;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDC2R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDC2R &Instance() { return *reinterpret_cast<volatile LPTDC2R*>(0x40C900A0); }
};

// SNVS_LP Tamper Detectors Status Register
union LPTDSR {
  
  // External Tampering 3 Detected
  enum class eET3D : uint32_t {
    // External tamper 3 is not detected.
    eNOREPORT = 0,
    // External tamper 3 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 4 Detected
  enum class eET4D : uint32_t {
    // External tamper 4 is not detected.
    eNOREPORT = 0,
    // External tamper 4 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 5 Detected
  enum class eET5D : uint32_t {
    // External tamper 5 is not detected.
    eNOREPORT = 0,
    // External tamper 5 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 6 Detected
  enum class eET6D : uint32_t {
    // External tamper 6 is not detected.
    eNOREPORT = 0,
    // External tamper 6 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 7 Detected
  enum class eET7D : uint32_t {
    // External tamper 7 is not detected.
    eNOREPORT = 0,
    // External tamper 7 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 8 Detected
  enum class eET8D : uint32_t {
    // External tamper 8 is not detected.
    eNOREPORT = 0,
    // External tamper 8 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
  enum class eET9D : uint32_t {
    // External tamper 9 is not detected.
    eNOREPORT = 0,
    // External tamper 9 is detected.
    eREPORTED = 1,
  };
  
  // External Tampering 10 Detected
  enum class eET10D : uint32_t {
    // External tamper 10 is not detected.
    eNOREPORT = 0,
    // External tamper 10 is detected.
    eREPORTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - External Tampering 3 Detected
    eET3D ET3D : 1;
    // read-write - External Tampering 4 Detected
    eET4D ET4D : 1;
    // read-write - External Tampering 5 Detected
    eET5D ET5D : 1;
    // read-write - External Tampering 6 Detected
    eET6D ET6D : 1;
    // read-write - External Tampering 7 Detected
    eET7D ET7D : 1;
    // read-write - External Tampering 8 Detected
    eET8D ET8D : 1;
    // read-write - External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
    eET9D ET9D : 1;
    // read-write - External Tampering 10 Detected
    eET10D ET10D : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTDSR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTDSR &Instance() { return *reinterpret_cast<volatile LPTDSR*>(0x40C900A4); }
};

// SNVS_LP Tamper Glitch Filter 1 Configuration Register
union LPTGF1CR {
  
  // External Tamper Glitch Filter 3 Enable When set, enables the external tamper glitch filter 3.
  enum class eETGF3_EN : uint32_t {
    // External tamper glitch filter 3 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 3 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 4 Enable When set, enables the external tamper glitch filter 4.
  enum class eETGF4_EN : uint32_t {
    // External tamper glitch filter 4 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 4 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 5 Enable When set, enables the external tamper glitch filter 5.
  enum class eETGF5_EN : uint32_t {
    // External tamper glitch filter 5 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 5 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 6 Enable When set, enables the external tamper glitch filter 6.
  enum class eETGF6_EN : uint32_t {
    // External tamper glitch filter 6 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 6 is enabled.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - External Tamper Glitch Filter 3 Configures the length of the digital glitch filter for the external tamper 3 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF3 : 7;
    // read-write - External Tamper Glitch Filter 3 Enable When set, enables the external tamper glitch filter 3.
    eETGF3_EN ETGF3_EN : 1;
    // read-write - External Tamper Glitch Filter 4 Configures the length of the digital glitch filter for the external tamper 4 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF4 : 7;
    // read-write - External Tamper Glitch Filter 4 Enable When set, enables the external tamper glitch filter 4.
    eETGF4_EN ETGF4_EN : 1;
    // read-write - External Tamper Glitch Filter 5 Configures the length of the digital glitch filter for the external tamper 5 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF5 : 7;
    // read-write - External Tamper Glitch Filter 5 Enable When set, enables the external tamper glitch filter 5.
    eETGF5_EN ETGF5_EN : 1;
    // read-write - External Tamper Glitch Filter 6 Configures the length of the digital glitch filter for the external tamper 6 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF6 : 7;
    // read-write - External Tamper Glitch Filter 6 Enable When set, enables the external tamper glitch filter 6.
    eETGF6_EN ETGF6_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGF1CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGF1CR &Instance() { return *reinterpret_cast<volatile LPTGF1CR*>(0x40C900A8); }
};

// SNVS_LP Tamper Glitch Filter 2 Configuration Register
union LPTGF2CR {
  
  // External Tamper Glitch Filter 7 Enable When set, enables the external tamper glitch filter 7.
  enum class eETGF7_EN : uint32_t {
    // External tamper glitch filter 7 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 7 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 8 Enable When set, enables the external tamper glitch filter 8.
  enum class eETGF8_EN : uint32_t {
    // External tamper glitch filter 8 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 8 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 9 Enable When set, enables the external tamper glitch filter 9.
  enum class eETGF9_EN : uint32_t {
    // External tamper glitch filter 9 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 9 is enabled.
    eENABLED = 1,
  };
  
  // External Tamper Glitch Filter 10 Enable When set, enables the external tamper glitch filter 10.
  enum class eETGF10_EN : uint32_t {
    // External tamper glitch filter 10 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 10 is enabled.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - External Tamper Glitch Filter 7 Configures the length of the digital glitch filter for the external tamper 7 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF7 : 7;
    // read-write - External Tamper Glitch Filter 7 Enable When set, enables the external tamper glitch filter 7.
    eETGF7_EN ETGF7_EN : 1;
    // read-write - External Tamper Glitch Filter 8 Configures the length of the digital glitch filter for the external tamper 8 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF8 : 7;
    // read-write - External Tamper Glitch Filter 8 Enable When set, enables the external tamper glitch filter 8.
    eETGF8_EN ETGF8_EN : 1;
    // read-write - External Tamper Glitch Filter 9 Configures the length of the digital glitch filter for the external tamper 9 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF9 : 7;
    // read-write - External Tamper Glitch Filter 9 Enable When set, enables the external tamper glitch filter 9.
    eETGF9_EN ETGF9_EN : 1;
    // read-write - External Tamper Glitch Filter 10 Configures the length of the digital glitch filter for the external tamper 10 pin between 128 and 32640 SRTC clock cycles
    uint32_t ETGF10 : 7;
    // read-write - External Tamper Glitch Filter 10 Enable When set, enables the external tamper glitch filter 10.
    eETGF10_EN ETGF10_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPTGF2CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPTGF2CR &Instance() { return *reinterpret_cast<volatile LPTGF2CR*>(0x40C900AC); }
};

// SNVS_LP Active Tamper 1 Configuration Register
union LPAT1CR {
  
  // Bit field definition.
  struct {
    // write-only - Active Tamper 1 Initial Seed Default Seed is 1111h.
    uint32_t Seed : 16;
    // write-only - Active Tamper 1 Polynomial Default Polynomial is 8400h.
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT1CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT1CR &Instance() { return *reinterpret_cast<volatile LPAT1CR*>(0x40C900C0); }
};

// SNVS_LP Active Tamper 2 Configuration Register
union LPAT2CR {
  
  // Bit field definition.
  struct {
    // write-only - Active Tamper 2 Initial Seed Default Seed is 2222h.
    uint32_t Seed : 16;
    // write-only - Active Tamper 2 Polynomial Default Polynomial is 9C00h.
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT2CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT2CR &Instance() { return *reinterpret_cast<volatile LPAT2CR*>(0x40C900C4); }
};

// SNVS_LP Active Tamper 3 Configuration Register
union LPAT3CR {
  
  // Bit field definition.
  struct {
    // write-only - Active Tamper 3 Initial Seed Default Seed is 3333h.
    uint32_t Seed : 16;
    // write-only - Active Tamper 3 Polynomial Default Polynomial is CA00h.
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT3CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT3CR &Instance() { return *reinterpret_cast<volatile LPAT3CR*>(0x40C900C8); }
};

// SNVS_LP Active Tamper 4 Configuration Register
union LPAT4CR {
  
  // Bit field definition.
  struct {
    // write-only - Active Tamper 4 Initial Seed Default Seed is 4444h.
    uint32_t Seed : 16;
    // write-only - Active Tamper 4 Polynomial Default Polynomial is 8580h.
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT4CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT4CR &Instance() { return *reinterpret_cast<volatile LPAT4CR*>(0x40C900CC); }
};

// SNVS_LP Active Tamper 5 Configuration Register
union LPAT5CR {
  
  // Bit field definition.
  struct {
    // write-only - Active Tamper 5 Initial Seed Default Seed is 5555h.
    uint32_t Seed : 16;
    // write-only - Active Tamper 5 Polynomial Default Polynomial is A840h.
    uint32_t Polynomial : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPAT5CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPAT5CR &Instance() { return *reinterpret_cast<volatile LPAT5CR*>(0x40C900D0); }
};

// SNVS_LP Active Tamper Control Register
union LPATCTLR {
  
  // Active Tamper 1 Enable When set, enables the Active Tamper 1 LFSR.
  enum class eAT1_EN : uint32_t {
    // Active Tamper 1 is disabled.
    eDISABLED = 0,
    // Active Tamper 1 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 2 Enable When set, enables the Active Tamper 2 LFSR.
  enum class eAT2_EN : uint32_t {
    // Active Tamper 2 is disabled.
    eDISABLED = 0,
    // Active Tamper 2 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 3 Enable When set, enables the Active Tamper 3 LFSR.
  enum class eAT3_EN : uint32_t {
    // Active Tamper 3 is disabled.
    eDISABLED = 0,
    // Active Tamper 3 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 4 Enable When set, enables the Active Tamper 4 LFSR.
  enum class eAT4_EN : uint32_t {
    // Active Tamper 4 is disabled.
    eDISABLED = 0,
    // Active Tamper 4 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 5 Enable When set, enables the Active Tamper 5 LFSR.
  enum class eAT5_EN : uint32_t {
    // Active Tamper 5 is disabled.
    eDISABLED = 0,
    // Active Tamper 5 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 1 Pad Out Enable When set, enables the Active Tamper 1 external pad.
  enum class eAT1_PAD_EN : uint32_t {
    // Active Tamper 1 is disabled.
    eDISABLED = 0,
    // Active Tamper 1 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 2 Pad Out Enable When set, enables the Active Tamper 2 external pad.
  enum class eAT2_PAD_EN : uint32_t {
    // Active Tamper 2 is disabled.
    eDISABLED = 0,
    // Active Tamper 2 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 3 Pad Out Enable When set, enables the Active Tamper 3 external pad.
  enum class eAT3_PAD_EN : uint32_t {
    // Active Tamper 3 is disabled.
    eDISABLED = 0,
    // Active Tamper 3 is enabled
    eENABLED = 1,
  };
  
  // Active Tamper 4 Pad Out Enable When set, enables the Active Tamper 4 external pad.
  enum class eAT4_PAD_EN : uint32_t {
    // Active Tamper 4 is disabled.
    eDISABLED = 0,
    // Active Tamper 4 is enabled.
    eENABLED = 1,
  };
  
  // Active Tamper 5 Pad Out Enable When set, enables the Active Tamper 5 external pad.
  enum class eAT5_PAD_EN : uint32_t {
    // Active Tamper 5 is disabled.
    eDISABLED = 0,
    // Active Tamper 5 is enabled.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Active Tamper 1 Enable When set, enables the Active Tamper 1 LFSR.
    eAT1_EN AT1_EN : 1;
    // read-write - Active Tamper 2 Enable When set, enables the Active Tamper 2 LFSR.
    eAT2_EN AT2_EN : 1;
    // read-write - Active Tamper 3 Enable When set, enables the Active Tamper 3 LFSR.
    eAT3_EN AT3_EN : 1;
    // read-write - Active Tamper 4 Enable When set, enables the Active Tamper 4 LFSR.
    eAT4_EN AT4_EN : 1;
    // read-write - Active Tamper 5 Enable When set, enables the Active Tamper 5 LFSR.
    eAT5_EN AT5_EN : 1;
    uint32_t _reserved_0 : 11;
    // read-write - Active Tamper 1 Pad Out Enable When set, enables the Active Tamper 1 external pad.
    eAT1_PAD_EN AT1_PAD_EN : 1;
    // read-write - Active Tamper 2 Pad Out Enable When set, enables the Active Tamper 2 external pad.
    eAT2_PAD_EN AT2_PAD_EN : 1;
    // read-write - Active Tamper 3 Pad Out Enable When set, enables the Active Tamper 3 external pad.
    eAT3_PAD_EN AT3_PAD_EN : 1;
    // read-write - Active Tamper 4 Pad Out Enable When set, enables the Active Tamper 4 external pad.
    eAT4_PAD_EN AT4_PAD_EN : 1;
    // read-write - Active Tamper 5 Pad Out Enable When set, enables the Active Tamper 5 external pad.
    eAT5_PAD_EN AT5_PAD_EN : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATCTLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATCTLR &Instance() { return *reinterpret_cast<volatile LPATCTLR*>(0x40C900E0); }
};

// SNVS_LP Active Tamper Clock Control Register
union LPATCLKR {
  
  // Bit field definition.
  struct {
    // read-write - Active Tamper 1 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
    uint32_t AT1_CLK_CTL : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Active Tamper 2 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
    uint32_t AT2_CLK_CTL : 2;
    uint32_t _reserved_1 : 2;
    // read-write - Active Tamper 3 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
    uint32_t AT3_CLK_CTL : 2;
    uint32_t _reserved_2 : 2;
    // read-write - Active Tamper 4 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
    uint32_t AT4_CLK_CTL : 2;
    uint32_t _reserved_3 : 2;
    // read-write - Active Tamper 5 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
    uint32_t AT5_CLK_CTL : 2;
    uint32_t _reserved_4 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATCLKR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATCLKR &Instance() { return *reinterpret_cast<volatile LPATCLKR*>(0x40C900E4); }
};

// SNVS_LP Active Tamper Routing Control 1 Register
union LPATRC1R {
  
  // Bit field definition.
  struct {
    // read-write - External Tamper 1 Routing Control Any undefined selection will be routed to passive
    uint32_t ET1RCTL : 3;
    uint32_t _reserved_0 : 1;
    // read-write - External Tamper 2 Routing Control Any undefined selection will be routed to passive
    uint32_t ET2RCTL : 3;
    uint32_t _reserved_1 : 1;
    // read-write - External Tamper 3 Routing Control Any undefined selection will be routed to passive
    uint32_t ET3RCTL : 3;
    uint32_t _reserved_2 : 1;
    // read-write - External Tamper 4 Routing Control Any undefined selection will be routed to passive
    uint32_t ET4RCTL : 3;
    uint32_t _reserved_3 : 1;
    // read-write - External Tamper 5 Routing Control Any undefined selection will be routed to passive
    uint32_t ET5RCTL : 3;
    uint32_t _reserved_4 : 1;
    // read-write - External Tamper 6 Routing Control Any undefined selection will be routed to passive
    uint32_t ET6RCTL : 3;
    uint32_t _reserved_5 : 1;
    // read-write - External Tamper 7 Routing Control Any undefined selection will be routed to passive
    uint32_t ET7RCTL : 3;
    uint32_t _reserved_6 : 1;
    // read-write - External Tamper 8 Routing Control Any undefined selection will be routed to passive
    uint32_t ET8RCTL : 3;
    uint32_t _reserved_7 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATRC1R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATRC1R &Instance() { return *reinterpret_cast<volatile LPATRC1R*>(0x40C900E8); }
};

// SNVS_LP Active Tamper Routing Control 2 Register
union LPATRC2R {
  
  // Bit field definition.
  struct {
    // read-write - External Tamper 9 Routing Control Any undefined selection will be routed to passive
    uint32_t ET9RCTL : 3;
    uint32_t _reserved_0 : 1;
    // read-write - External Tamper 10 Routing Control Any undefined selection will be routed to passive
    uint32_t ET10RCTL : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPATRC2R() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPATRC2R &Instance() { return *reinterpret_cast<volatile LPATRC2R*>(0x40C900EC); }
};

// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_0 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_0 &Instance() { return *reinterpret_cast<volatile LPGPR_0*>(0x40C90100); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_1 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_1 &Instance() { return *reinterpret_cast<volatile LPGPR_1*>(0x40C90104); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_2 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_2 &Instance() { return *reinterpret_cast<volatile LPGPR_2*>(0x40C90108); }
};
// SNVS_LP General Purpose Registers 0 .. 3
union LPGPR_3 {
  
  // Bit field definition.
  struct {
    // read-write - General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPGPR_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPGPR_3 &Instance() { return *reinterpret_cast<volatile LPGPR_3*>(0x40C9010C); }
};

// SNVS_HP Version ID Register 1
union HPVIDR1 {
  
  // Bit field definition.
  struct {
    // read-only - SNVS block minor version number
    uint32_t MINOR_REV : 8;
    // read-only - SNVS block major version number
    uint32_t MAJOR_REV : 8;
    // read-only - SNVS block ID
    uint32_t IP_ID : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPVIDR1() = delete;
  inline void Reset() volatile { this->value = 0x003E0103; }
  static inline volatile HPVIDR1 &Instance() { return *reinterpret_cast<volatile HPVIDR1*>(0x40C90BF8); }
};

// SNVS_HP Version ID Register 2
union HPVIDR2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-only - SNVS ECO Revision The engineering change order revision number for this release of SNVS.
    uint32_t ECO_REV : 8;
    uint32_t _reserved_1 : 8;
    // read-only - IP Era 00h - Era 1 or 2 03h - Era 3 04h - Era 4 05h - Era 5 06h - Era 6
    uint32_t IP_ERA : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HPVIDR2() = delete;
  inline void Reset() volatile { this->value = 0x06000500; }
  static inline volatile HPVIDR2 &Instance() { return *reinterpret_cast<volatile HPVIDR2*>(0x40C90BFC); }
};


} // namespace nSNVS