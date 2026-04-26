#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::snvs {

// SNVS_HP Lock Register
struct HPLR_fields_ {
  enum class eZMK_WSL : std::uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };

  enum class eZMK_RSL : std::uint32_t {
    // Read access is allowed (only in software Programming mode)
    eREAD_ALLOWED = 0,
    // Read access is not allowed
    eREAD_NOT_ALLOWED = 1,
  };

  enum class eSRTC_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };

  enum class eLPCALB_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };

  enum class eMC_SL : std::uint32_t {
    // Write access (increment) is allowed
    eWRITE_ALLOWED = 0,
    // Write access (increment) is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };

  enum class eGPR_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_NOT_ALLOWED = 1,
  };

  enum class eLPSVCR_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPTGFCR_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPSECR_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eMKS_SL : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eHPSVCR_L : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eHPSICR_L : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eHAC_L : std::uint32_t {
    // Write access is allowed
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT1_SL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT2_SL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT3_SL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT4_SL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT5_SL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  // Zeroizable Master Key Write Soft Lock When set, prevents any writes (software and hardware) to the ZMK registers and the ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
  using ZMK_WSL = ftl::mmio::Field<1, 0, eZMK_WSL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key Read Soft Lock When set, prevents any software reads to the ZMK Registers and ZMK_ECC_VALUE field of the LPMKCR
  using ZMK_RSL = ftl::mmio::Field<1, 1, eZMK_RSL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Secure Real Time Counter Soft Lock When set, prevents any writes to the SRTC Registers, SRTC_ENV, and SRTC_INV_EN bits
  using SRTC_SL = ftl::mmio::Field<1, 2, eSRTC_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Calibration Soft Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
  using LPCALB_SL = ftl::mmio::Field<1, 3, eLPCALB_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Monotonic Counter Soft Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
  using MC_SL = ftl::mmio::Field<1, 4, eMC_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // General Purpose Register Soft Lock When set, prevents any writes to the GPR
  using GPR_SL = ftl::mmio::Field<1, 5, eGPR_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Violation Control Register Soft Lock When set, prevents any writes to the LPSVCR
  using LPSVCR_SL = ftl::mmio::Field<1, 6, eLPSVCR_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Tamper Glitch Filter Configuration Register Soft Lock When set, prevents any writes to the LPTGFCR
  using LPTGFCR_SL = ftl::mmio::Field<1, 7, eLPTGFCR_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Events Configuration Register Soft Lock When set, prevents any writes to the LPSECR
  using LPSECR_SL = ftl::mmio::Field<1, 8, eLPSECR_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Master Key Select Soft Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LPMKCR
  using MKS_SL = ftl::mmio::Field<1, 9, eMKS_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Security Violation Control Register Lock When set, prevents any writes to the HPSVCR
  using HPSVCR_L = ftl::mmio::Field<1, 16, eHPSVCR_L, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Security Interrupt Control Register Lock When set, prevents any writes to the HPSICR
  using HPSICR_L = ftl::mmio::Field<1, 17, eHPSICR_L, ftl::mmio::RW, ftl::mmio::Normal>;
  // High Assurance Counter Lock When set, prevents any writes to HPHACIVR, HPHACR, and HAC_EN bit of HPCOMR
  using HAC_L = ftl::mmio::Field<1, 18, eHAC_L, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 1 Soft Lock When set, prevents any writes to the Active Tamper 1 registers
  using AT1_SL = ftl::mmio::Field<1, 24, eAT1_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 2 Soft Lock When set, prevents any writes to the Active Tamper 2 registers
  using AT2_SL = ftl::mmio::Field<1, 25, eAT2_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 3 Soft Lock When set, prevents any writes to the Active Tamper 3 registers
  using AT3_SL = ftl::mmio::Field<1, 26, eAT3_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 4 Soft Lock When set, prevents any writes to the Active Tamper 4 registers
  using AT4_SL = ftl::mmio::Field<1, 27, eAT4_SL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 5 Soft Lock When set, prevents any writes to the Active Tamper 5 registers
  using AT5_SL = ftl::mmio::Field<1, 28, eAT5_SL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPLR_fields_

struct HPLR : ftl::mmio::Register<
    0x40C90000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPLR_fields_::ZMK_WSL,
    HPLR_fields_::ZMK_RSL,
    HPLR_fields_::SRTC_SL,
    HPLR_fields_::LPCALB_SL,
    HPLR_fields_::MC_SL,
    HPLR_fields_::GPR_SL,
    HPLR_fields_::LPSVCR_SL,
    HPLR_fields_::LPTGFCR_SL,
    HPLR_fields_::LPSECR_SL,
    HPLR_fields_::MKS_SL,
    ftl::mmio::Reserved<6, 10>,
    HPLR_fields_::HPSVCR_L,
    HPLR_fields_::HPSICR_L,
    HPLR_fields_::HAC_L,
    ftl::mmio::Reserved<5, 19>,
    HPLR_fields_::AT1_SL,
    HPLR_fields_::AT2_SL,
    HPLR_fields_::AT3_SL,
    HPLR_fields_::AT4_SL,
    HPLR_fields_::AT5_SL,
    ftl::mmio::Reserved<3, 29>> {
  using eZMK_WSL = HPLR_fields_::eZMK_WSL;
  using eZMK_RSL = HPLR_fields_::eZMK_RSL;
  using eSRTC_SL = HPLR_fields_::eSRTC_SL;
  using eLPCALB_SL = HPLR_fields_::eLPCALB_SL;
  using eMC_SL = HPLR_fields_::eMC_SL;
  using eGPR_SL = HPLR_fields_::eGPR_SL;
  using eLPSVCR_SL = HPLR_fields_::eLPSVCR_SL;
  using eLPTGFCR_SL = HPLR_fields_::eLPTGFCR_SL;
  using eLPSECR_SL = HPLR_fields_::eLPSECR_SL;
  using eMKS_SL = HPLR_fields_::eMKS_SL;
  using eHPSVCR_L = HPLR_fields_::eHPSVCR_L;
  using eHPSICR_L = HPLR_fields_::eHPSICR_L;
  using eHAC_L = HPLR_fields_::eHAC_L;
  using eAT1_SL = HPLR_fields_::eAT1_SL;
  using eAT2_SL = HPLR_fields_::eAT2_SL;
  using eAT3_SL = HPLR_fields_::eAT3_SL;
  using eAT4_SL = HPLR_fields_::eAT4_SL;
  using eAT5_SL = HPLR_fields_::eAT5_SL;
  using ZMK_WSL = HPLR_fields_::ZMK_WSL;
  using ZMK_RSL = HPLR_fields_::ZMK_RSL;
  using SRTC_SL = HPLR_fields_::SRTC_SL;
  using LPCALB_SL = HPLR_fields_::LPCALB_SL;
  using MC_SL = HPLR_fields_::MC_SL;
  using GPR_SL = HPLR_fields_::GPR_SL;
  using LPSVCR_SL = HPLR_fields_::LPSVCR_SL;
  using LPTGFCR_SL = HPLR_fields_::LPTGFCR_SL;
  using LPSECR_SL = HPLR_fields_::LPSECR_SL;
  using MKS_SL = HPLR_fields_::MKS_SL;
  using HPSVCR_L = HPLR_fields_::HPSVCR_L;
  using HPSICR_L = HPLR_fields_::HPSICR_L;
  using HAC_L = HPLR_fields_::HAC_L;
  using AT1_SL = HPLR_fields_::AT1_SL;
  using AT2_SL = HPLR_fields_::AT2_SL;
  using AT3_SL = HPLR_fields_::AT3_SL;
  using AT4_SL = HPLR_fields_::AT4_SL;
  using AT5_SL = HPLR_fields_::AT5_SL;
};

// SNVS_HP Command Register
struct HPCOMR_fields_ {
  enum class eSSM_ST_DIS : std::uint32_t {
    // Secure to Trusted State transition is enabled
    eENABLED = 0,
    // Secure to Trusted State transition is disabled
    eDISABLED = 1,
  };

  enum class eSSM_SFNS_DIS : std::uint32_t {
    // Soft Fail to Non-Secure State transition is enabled
    eENABLED = 0,
    // Soft Fail to Non-Secure State transition is disabled
    eDISABLED = 1,
  };

  enum class eLP_SWR : std::uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Reset LP section
    eRESET = 1,
  };

  enum class eLP_SWR_DIS : std::uint32_t {
    // LP software reset is enabled
    eENABLED = 0,
    // LP software reset is disabled
    eDISABLED = 1,
  };

  enum class ePROG_ZMK : std::uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Activate hardware key programming mechanism
    ePROGRAM_KEY = 1,
  };

  enum class eMKS_EN : std::uint32_t {
    // OTP master key is selected as an SNVS master key
    eSELECT_OTP = 0,
    // SNVS master key is selected according to the setting of the MASTER_KEY_SEL field of LPMKCR
    eSELECT_PER_LPMKCR = 1,
  };

  enum class eHAC_EN : std::uint32_t {
    // High Assurance Counter is disabled
    eDISABLED = 0,
    // High Assurance Counter is enabled
    eENABLED = 1,
  };

  enum class eHAC_LOAD : std::uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Load the HAC
    eLOAD_HAC = 1,
  };

  enum class eHAC_CLEAR : std::uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Clear the HAC
    eCLEAR_HAC = 1,
  };

  // SSM State Transition Transition state of the system security monitor
  using SSM_ST = ftl::mmio::Field<1, 0, bool, ftl::mmio::WO, ftl::mmio::Normal>;
  // SSM Secure to Trusted State Transition Disable When set, disables the SSM transition from secure to trusted state
  using SSM_ST_DIS = ftl::mmio::Field<1, 1, eSSM_ST_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // SSM Soft Fail to Non-Secure State Transition Disable When set, it disables the SSM transition from soft fail to non-secure state
  using SSM_SFNS_DIS = ftl::mmio::Field<1, 2, eSSM_SFNS_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Software Reset When set to 1, most registers in the SNVS_LP section are reset, but the following registers are not reset by an LP software reset: Monotonic Counter Secure Real Time Counter Time Alarm Register This bit cannot be set when the LP_SWR_DIS bit is set
  using LP_SWR = ftl::mmio::Field<1, 4, eLP_SWR, ftl::mmio::WO, ftl::mmio::Normal>;
  // LP Software Reset Disable When set, disables the LP software reset
  using LP_SWR_DIS = ftl::mmio::Field<1, 5, eLP_SWR_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software Security Violation When set, the system security monitor treats this bit as a non-fatal security violation
  using SW_SV = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software Fatal Security Violation When set, the system security monitor treats this bit as a fatal security violation
  using SW_FSV = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Software Security Violation When set, SNVS_LP treats this bit as a security violation
  using SW_LPSV = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Program Zeroizable Master Key This bit activates ZMK hardware programming mechanism
  using PROG_ZMK = ftl::mmio::Field<1, 12, ePROG_ZMK, ftl::mmio::WO, ftl::mmio::Normal>;
  // Master Key Select Enable When not set, the one time programmable (OTP) master key is selected by default
  using MKS_EN = ftl::mmio::Field<1, 13, eMKS_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // High Assurance Counter Enable This bit controls the SSM transition from the soft fail to the hard fail state
  using HAC_EN = ftl::mmio::Field<1, 16, eHAC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // High Assurance Counter Load When set, it loads the High Assurance Counter Register with the value of the High Assurance Counter Load Register
  using HAC_LOAD = ftl::mmio::Field<1, 17, eHAC_LOAD, ftl::mmio::WO, ftl::mmio::Normal>;
  // High Assurance Counter Clear When set, it clears the High Assurance Counter Register
  using HAC_CLEAR = ftl::mmio::Field<1, 18, eHAC_CLEAR, ftl::mmio::WO, ftl::mmio::Normal>;
  // High Assurance Counter Stop This bit can be set only when SSM is in soft fail state
  using HAC_STOP = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Non-Privileged Software Access Enable When set, allows non-privileged software to access all SNVS registers, including those that are privileged software read/write access only
  using NPSWA_EN = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPCOMR_fields_

struct HPCOMR : ftl::mmio::Register<
    0x40C90004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPCOMR_fields_::SSM_ST,
    HPCOMR_fields_::SSM_ST_DIS,
    HPCOMR_fields_::SSM_SFNS_DIS,
    ftl::mmio::Reserved<1, 3>,
    HPCOMR_fields_::LP_SWR,
    HPCOMR_fields_::LP_SWR_DIS,
    ftl::mmio::Reserved<2, 6>,
    HPCOMR_fields_::SW_SV,
    HPCOMR_fields_::SW_FSV,
    HPCOMR_fields_::SW_LPSV,
    ftl::mmio::Reserved<1, 11>,
    HPCOMR_fields_::PROG_ZMK,
    HPCOMR_fields_::MKS_EN,
    ftl::mmio::Reserved<2, 14>,
    HPCOMR_fields_::HAC_EN,
    HPCOMR_fields_::HAC_LOAD,
    HPCOMR_fields_::HAC_CLEAR,
    HPCOMR_fields_::HAC_STOP,
    ftl::mmio::Reserved<11, 20>,
    HPCOMR_fields_::NPSWA_EN> {
  using eSSM_ST_DIS = HPCOMR_fields_::eSSM_ST_DIS;
  using eSSM_SFNS_DIS = HPCOMR_fields_::eSSM_SFNS_DIS;
  using eLP_SWR = HPCOMR_fields_::eLP_SWR;
  using eLP_SWR_DIS = HPCOMR_fields_::eLP_SWR_DIS;
  using ePROG_ZMK = HPCOMR_fields_::ePROG_ZMK;
  using eMKS_EN = HPCOMR_fields_::eMKS_EN;
  using eHAC_EN = HPCOMR_fields_::eHAC_EN;
  using eHAC_LOAD = HPCOMR_fields_::eHAC_LOAD;
  using eHAC_CLEAR = HPCOMR_fields_::eHAC_CLEAR;
  using SSM_ST = HPCOMR_fields_::SSM_ST;
  using SSM_ST_DIS = HPCOMR_fields_::SSM_ST_DIS;
  using SSM_SFNS_DIS = HPCOMR_fields_::SSM_SFNS_DIS;
  using LP_SWR = HPCOMR_fields_::LP_SWR;
  using LP_SWR_DIS = HPCOMR_fields_::LP_SWR_DIS;
  using SW_SV = HPCOMR_fields_::SW_SV;
  using SW_FSV = HPCOMR_fields_::SW_FSV;
  using SW_LPSV = HPCOMR_fields_::SW_LPSV;
  using PROG_ZMK = HPCOMR_fields_::PROG_ZMK;
  using MKS_EN = HPCOMR_fields_::MKS_EN;
  using HAC_EN = HPCOMR_fields_::HAC_EN;
  using HAC_LOAD = HPCOMR_fields_::HAC_LOAD;
  using HAC_CLEAR = HPCOMR_fields_::HAC_CLEAR;
  using HAC_STOP = HPCOMR_fields_::HAC_STOP;
  using NPSWA_EN = HPCOMR_fields_::NPSWA_EN;
};

// SNVS_HP Control Register
struct HPCR_fields_ {
  enum class eRTC_EN : std::uint32_t {
    // RTC is disabled
    eDISABLED = 0,
    // RTC is enabled
    eENABLED = 1,
  };

  enum class eHPTA_EN : std::uint32_t {
    // HP Time Alarm Interrupt is disabled
    eDISABLED = 0,
    // HP Time Alarm Interrupt is enabled
    eENABLED = 1,
  };

  enum class eDIS_PI : std::uint32_t {
    // Periodic interrupt will trigger a functional interrupt
    eENABLED = 0,
    // Disable periodic interrupt in the function interrupt
    eDISABLED = 1,
  };

  enum class ePI_EN : std::uint32_t {
    // HP Periodic Interrupt is disabled
    eDISABLED = 0,
    // HP Periodic Interrupt is enabled
    eENABLED = 1,
  };

  enum class ePI_FREQ : std::uint32_t {
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

  enum class eHPCALB_EN : std::uint32_t {
    // HP Timer calibration disabled
    eDISABLED = 0,
    // HP Timer calibration enabled
    eENABLED = 1,
  };

  enum class eHPCALB_VAL : std::uint32_t {
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

  enum class eHP_TS : std::uint32_t {
    // No Action
    eNO_ACTION = 0,
    // Synchronize the HP Time Counter to the LP Time Counter
    eSYNC_TIME = 1,
  };

  // HP Real Time Counter Enable
  using RTC_EN = ftl::mmio::Field<1, 0, eRTC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Time Alarm Enable When set, the time alarm interrupt is generated if the value in the HP Time Alarm Registers is equal to the value of the HP Real Time Counter
  using HPTA_EN = ftl::mmio::Field<1, 1, eHPTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Disable periodic interrupt in the functional interrupt
  using DIS_PI = ftl::mmio::Field<1, 2, eDIS_PI, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Periodic Interrupt Enable The periodic interrupt can be generated only if the HP Real Time Counter is enabled
  using PI_EN = ftl::mmio::Field<1, 3, ePI_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Periodic Interrupt Frequency Defines frequency of the periodic interrupt
  using PI_FREQ = ftl::mmio::Field<4, 4, ePI_FREQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Real Time Counter Calibration Enabled Indicates that the time calibration mechanism is enabled.
  using HPCALB_EN = ftl::mmio::Field<1, 8, eHPCALB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Calibration Value Defines signed calibration value for the HP Real Time Counter
  using HPCALB_VAL = ftl::mmio::Field<5, 10, eHPCALB_VAL, ftl::mmio::RW, ftl::mmio::Normal>;
  // HP Time Synchronize
  using HP_TS = ftl::mmio::Field<1, 16, eHP_TS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Button Configuration
  using BTN_CONFIG = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Button interrupt mask
  using BTN_MASK = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPCR_fields_

struct HPCR : ftl::mmio::Register<
    0x40C90008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPCR_fields_::RTC_EN,
    HPCR_fields_::HPTA_EN,
    HPCR_fields_::DIS_PI,
    HPCR_fields_::PI_EN,
    HPCR_fields_::PI_FREQ,
    HPCR_fields_::HPCALB_EN,
    ftl::mmio::Reserved<1, 9>,
    HPCR_fields_::HPCALB_VAL,
    ftl::mmio::Reserved<1, 15>,
    HPCR_fields_::HP_TS,
    ftl::mmio::Reserved<7, 17>,
    HPCR_fields_::BTN_CONFIG,
    HPCR_fields_::BTN_MASK,
    ftl::mmio::Reserved<4, 28>> {
  using eRTC_EN = HPCR_fields_::eRTC_EN;
  using eHPTA_EN = HPCR_fields_::eHPTA_EN;
  using eDIS_PI = HPCR_fields_::eDIS_PI;
  using ePI_EN = HPCR_fields_::ePI_EN;
  using ePI_FREQ = HPCR_fields_::ePI_FREQ;
  using eHPCALB_EN = HPCR_fields_::eHPCALB_EN;
  using eHPCALB_VAL = HPCR_fields_::eHPCALB_VAL;
  using eHP_TS = HPCR_fields_::eHP_TS;
  using RTC_EN = HPCR_fields_::RTC_EN;
  using HPTA_EN = HPCR_fields_::HPTA_EN;
  using DIS_PI = HPCR_fields_::DIS_PI;
  using PI_EN = HPCR_fields_::PI_EN;
  using PI_FREQ = HPCR_fields_::PI_FREQ;
  using HPCALB_EN = HPCR_fields_::HPCALB_EN;
  using HPCALB_VAL = HPCR_fields_::HPCALB_VAL;
  using HP_TS = HPCR_fields_::HP_TS;
  using BTN_CONFIG = HPCR_fields_::BTN_CONFIG;
  using BTN_MASK = HPCR_fields_::BTN_MASK;
};

// SNVS_HP Security Interrupt Control Register
struct HPSICR_fields_ {
  enum class eCAAM_EN : std::uint32_t {
    // CAAM Security Violation Interrupt is Disabled
    eDISABLED = 0,
    // CAAM Security Violation Interrupt is Enabled
    eENABLED = 1,
  };

  enum class eJTAGC_EN : std::uint32_t {
    // JTAG Active Interrupt is Disabled
    eDISABLED = 0,
    // JTAG Active Interrupt is Enabled
    eENABLED = 1,
  };

  enum class eWDOG2_EN : std::uint32_t {
    // Watchdog 2 Reset Interrupt is Disabled
    eDISABLED = 0,
    // Watchdog 2 Reset Interrupt is Enabled
    eENABLED = 1,
  };

  enum class eSRC_EN : std::uint32_t {
    // Internal Boot Interrupt is Disabled
    eDISABLED = 0,
    // Internal Boot Interrupt is Enabled
    eENABLED = 1,
  };

  enum class eOCOTP_EN : std::uint32_t {
    // OCOTP attack error Interrupt is Disabled
    eDISABLED = 0,
    // OCOTP attack error Interrupt is Enabled
    eENABLED = 1,
  };

  enum class eLPSVI_EN : std::uint32_t {
    // LP Security Violation Interrupt is Disabled
    eDISABLED = 0,
    // LP Security Violation Interrupt is Enabled
    eENABLED = 1,
  };

  // CAAM Security Violation Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the CAAM Security Violation security violation
  using CAAM_EN = ftl::mmio::Field<1, 0, eCAAM_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // JTAG Active Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the JTAG Active security violation
  using JTAGC_EN = ftl::mmio::Field<1, 1, eJTAGC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Watchdog 2 Reset Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Watchdog 2 Reset security violation
  using WDOG2_EN = ftl::mmio::Field<1, 2, eWDOG2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Internal Boot Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the Internal Boot security violation
  using SRC_EN = ftl::mmio::Field<1, 4, eSRC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // OCOTP attack error Interrupt Enable Setting this bit to 1 enables generation of the security interrupt to the host processor upon detection of the OCOTP attack error security violation
  using OCOTP_EN = ftl::mmio::Field<1, 5, eOCOTP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Violation Interrupt Enable This bit enables generating of the security interrupt to the host processor upon security violation signal from the LP section
  using LPSVI_EN = ftl::mmio::Field<1, 31, eLPSVI_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPSICR_fields_

struct HPSICR : ftl::mmio::Register<
    0x40C9000Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPSICR_fields_::CAAM_EN,
    HPSICR_fields_::JTAGC_EN,
    HPSICR_fields_::WDOG2_EN,
    ftl::mmio::Reserved<1, 3>,
    HPSICR_fields_::SRC_EN,
    HPSICR_fields_::OCOTP_EN,
    ftl::mmio::Reserved<25, 6>,
    HPSICR_fields_::LPSVI_EN> {
  using eCAAM_EN = HPSICR_fields_::eCAAM_EN;
  using eJTAGC_EN = HPSICR_fields_::eJTAGC_EN;
  using eWDOG2_EN = HPSICR_fields_::eWDOG2_EN;
  using eSRC_EN = HPSICR_fields_::eSRC_EN;
  using eOCOTP_EN = HPSICR_fields_::eOCOTP_EN;
  using eLPSVI_EN = HPSICR_fields_::eLPSVI_EN;
  using CAAM_EN = HPSICR_fields_::CAAM_EN;
  using JTAGC_EN = HPSICR_fields_::JTAGC_EN;
  using WDOG2_EN = HPSICR_fields_::WDOG2_EN;
  using SRC_EN = HPSICR_fields_::SRC_EN;
  using OCOTP_EN = HPSICR_fields_::OCOTP_EN;
  using LPSVI_EN = HPSICR_fields_::LPSVI_EN;
};

// SNVS_HP Security Violation Control Register
struct HPSVCR_fields_ {
  enum class eCAAM_CFG : std::uint32_t {
    // CAAM Security Violation is a non-fatal violation
    eNON_FATAL = 0,
    // CAAM Security Violation is a fatal violation
    eFATAL = 1,
  };

  enum class eJTAGC_CFG : std::uint32_t {
    // JTAG Active is a non-fatal violation
    eNON_FATAL = 0,
    // JTAG Active is a fatal violation
    eFATAL = 1,
  };

  enum class eWDOG2_CFG : std::uint32_t {
    // Watchdog 2 Reset is a non-fatal violation
    eNON_FATAL = 0,
    // Watchdog 2 Reset is a fatal violation
    eFATAL = 1,
  };

  enum class eSRC_CFG : std::uint32_t {
    // Internal Boot is a non-fatal violation
    eNON_FATAL = 0,
    // Internal Boot is a fatal violation
    eFATAL = 1,
  };

  enum class eOCOTP_CFG : std::uint32_t {
    // OCOTP attack error is disabled
    eDISABLED = 0,
    // OCOTP attack error is a non-fatal violation
    eNON_FATAL = 1,
    // OCOTP attack error is a fatal violation
    eFATAL = 2,
  };

  enum class eLPSV_CFG : std::uint32_t {
    // LP security violation is disabled
    eDISABLED = 0,
    // LP security violation is a non-fatal violation
    eNON_FATAL = 1,
    // LP security violation is a fatal violation
    eFATAL = 2,
  };

  // CAAM Security Violation Security Violation Configuration This field configures the CAAM Security Violation Security Violation Input
  using CAAM_CFG = ftl::mmio::Field<1, 0, eCAAM_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // JTAG Active Security Violation Configuration This field configures the JTAG Active Security Violation Input
  using JTAGC_CFG = ftl::mmio::Field<1, 1, eJTAGC_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // Watchdog 2 Reset Security Violation Configuration This field configures the Watchdog 2 Reset Security Violation Input
  using WDOG2_CFG = ftl::mmio::Field<1, 2, eWDOG2_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // Internal Boot Security Violation Configuration This field configures the Internal Boot Security Violation Input
  using SRC_CFG = ftl::mmio::Field<1, 4, eSRC_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // OCOTP attack error Security Violation Configuration This field configures the OCOTP attack error Security Violation Input
  using OCOTP_CFG = ftl::mmio::Field<2, 5, eOCOTP_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Violation Configuration This field configures the LP security violation source.
  using LPSV_CFG = ftl::mmio::Field<2, 30, eLPSV_CFG, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPSVCR_fields_

struct HPSVCR : ftl::mmio::Register<
    0x40C90010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPSVCR_fields_::CAAM_CFG,
    HPSVCR_fields_::JTAGC_CFG,
    HPSVCR_fields_::WDOG2_CFG,
    ftl::mmio::Reserved<1, 3>,
    HPSVCR_fields_::SRC_CFG,
    HPSVCR_fields_::OCOTP_CFG,
    ftl::mmio::Reserved<23, 7>,
    HPSVCR_fields_::LPSV_CFG> {
  using eCAAM_CFG = HPSVCR_fields_::eCAAM_CFG;
  using eJTAGC_CFG = HPSVCR_fields_::eJTAGC_CFG;
  using eWDOG2_CFG = HPSVCR_fields_::eWDOG2_CFG;
  using eSRC_CFG = HPSVCR_fields_::eSRC_CFG;
  using eOCOTP_CFG = HPSVCR_fields_::eOCOTP_CFG;
  using eLPSV_CFG = HPSVCR_fields_::eLPSV_CFG;
  using CAAM_CFG = HPSVCR_fields_::CAAM_CFG;
  using JTAGC_CFG = HPSVCR_fields_::JTAGC_CFG;
  using WDOG2_CFG = HPSVCR_fields_::WDOG2_CFG;
  using SRC_CFG = HPSVCR_fields_::SRC_CFG;
  using OCOTP_CFG = HPSVCR_fields_::OCOTP_CFG;
  using LPSV_CFG = HPSVCR_fields_::LPSV_CFG;
};

// SNVS_HP Status Register
struct HPSR_fields_ {
  enum class eHPTA : std::uint32_t {
    // No time alarm interrupt occurred.
    eNOREPORT = 0,
    // A time alarm interrupt occurred.
    eREPORTED = 1,
  };

  enum class ePI : std::uint32_t {
    // No periodic interrupt occurred.
    eNOREPORT = 0,
    // A periodic interrupt occurred.
    eREPORTED = 1,
  };

  enum class eSSM_STATE : std::uint32_t {
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

  enum class eSYS_SECURITY_CFG : std::uint32_t {
    // Fab Configuration - the default configuration of newly fabricated chips
    eFAB_CONFIG = 0,
    // Open Configuration - the configuration after NXP-programmable fuses have been blown
    eOPEN_CONFIG = 1,
    // Closed Configuration - the configuration after OEM-programmable fuses have been blown
    eCLOSED_CONFIG = 3,
    // Field Return Configuration - the configuration of chips that are returned to NXP for analysis
    eFIELD_RETURN_CONFIG = 7,
  };

  enum class eOTPMK_ZERO : std::uint32_t {
    // The OTPMK is not zero.
    eOTPMK_NOT_ZERO = 0,
    // The OTPMK is zero.
    eOTPMK_IS_ZERO = 1,
  };

  enum class eZMK_ZERO : std::uint32_t {
    // The ZMK is not zero.
    eZMK_NOT_ZERO = 0,
    // The ZMK is zero.
    eZMK_IS_ZERO = 1,
  };

  // HP Time Alarm Indicates that the HP Time Alarm has occurred since this bit was last cleared.
  using HPTA = ftl::mmio::Field<1, 0, eHPTA, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Periodic Interrupt Indicates that periodic interrupt has occurred since this bit was last cleared.
  using PI = ftl::mmio::Field<1, 1, ePI, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Low Power Disable If 1, the low power section has been disabled by means of an input signal to SNVS
  using LPDIS = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Button Value of the BTN input
  using BTN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Button Interrupt Signal ipi_snvs_btn_int_b was asserted.
  using BI = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // System Security Monitor State This field contains the encoded state of the SSM's state machine
  using SSM_STATE = ftl::mmio::Field<4, 8, eSSM_STATE, ftl::mmio::RO, ftl::mmio::Normal>;
  // System Security Configuration This field reflects the three security configuration inputs to SNVS
  using SYS_SECURITY_CFG = ftl::mmio::Field<3, 12, eSYS_SECURITY_CFG, ftl::mmio::RO, ftl::mmio::Normal>;
  // System Secure Boot If SYS_SECURE_BOOT is 1, the chip boots from internal ROM
  using SYS_SECURE_BOOT = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // One Time Programmable Master Key is Equal to Zero
  using OTPMK_ZERO = ftl::mmio::Field<1, 27, eOTPMK_ZERO, ftl::mmio::RO, ftl::mmio::Normal>;
  // Zeroizable Master Key is Equal to Zero
  using ZMK_ZERO = ftl::mmio::Field<1, 31, eZMK_ZERO, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HPSR_fields_

struct HPSR : ftl::mmio::Register<
    0x40C90014u,
    std::uint32_t,
    0x8000B000u,
    ftl::mmio::RW,
    HPSR_fields_::HPTA,
    HPSR_fields_::PI,
    ftl::mmio::Reserved<2, 2>,
    HPSR_fields_::LPDIS,
    ftl::mmio::Reserved<1, 5>,
    HPSR_fields_::BTN,
    HPSR_fields_::BI,
    HPSR_fields_::SSM_STATE,
    HPSR_fields_::SYS_SECURITY_CFG,
    HPSR_fields_::SYS_SECURE_BOOT,
    ftl::mmio::Reserved<11, 16>,
    HPSR_fields_::OTPMK_ZERO,
    ftl::mmio::Reserved<3, 28>,
    HPSR_fields_::ZMK_ZERO> {
  using eHPTA = HPSR_fields_::eHPTA;
  using ePI = HPSR_fields_::ePI;
  using eSSM_STATE = HPSR_fields_::eSSM_STATE;
  using eSYS_SECURITY_CFG = HPSR_fields_::eSYS_SECURITY_CFG;
  using eOTPMK_ZERO = HPSR_fields_::eOTPMK_ZERO;
  using eZMK_ZERO = HPSR_fields_::eZMK_ZERO;
  using HPTA = HPSR_fields_::HPTA;
  using PI = HPSR_fields_::PI;
  using LPDIS = HPSR_fields_::LPDIS;
  using BTN = HPSR_fields_::BTN;
  using BI = HPSR_fields_::BI;
  using SSM_STATE = HPSR_fields_::SSM_STATE;
  using SYS_SECURITY_CFG = HPSR_fields_::SYS_SECURITY_CFG;
  using SYS_SECURE_BOOT = HPSR_fields_::SYS_SECURE_BOOT;
  using OTPMK_ZERO = HPSR_fields_::OTPMK_ZERO;
  using ZMK_ZERO = HPSR_fields_::ZMK_ZERO;
};

// SNVS_HP Security Violation Status Register
struct HPSVSR_fields_ {
  enum class eCAAM : std::uint32_t {
    // No CAAM Security Violation security violation was detected.
    eNOREPORT = 0,
    // CAAM Security Violation security violation was detected.
    eREPORTED = 1,
  };

  enum class eJTAGC : std::uint32_t {
    // No JTAG Active security violation was detected.
    eNOREPORT = 0,
    // JTAG Active security violation was detected.
    eREPORTED = 1,
  };

  enum class eWDOG2 : std::uint32_t {
    // No Watchdog 2 Reset security violation was detected.
    eNOREPORT = 0,
    // Watchdog 2 Reset security violation was detected.
    eREPORTED = 1,
  };

  enum class eSRC : std::uint32_t {
    // No Internal Boot security violation was detected.
    eNOREPORT = 0,
    // Internal Boot security violation was detected.
    eREPORTED = 1,
  };

  enum class eOCOTP : std::uint32_t {
    // No OCOTP attack error security violation was detected.
    eNOREPORT = 0,
    // OCOTP attack error security violation was detected.
    eREPORTED = 1,
  };

  enum class eZMK_ECC_FAIL : std::uint32_t {
    // ZMK ECC Failure was not detected.
    eNOREPORT = 0,
    // ZMK ECC Failure was detected.
    eREPORTED = 1,
  };

  // CAAM Security Violation security violation was detected.
  using CAAM = ftl::mmio::Field<1, 0, eCAAM, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // JTAG Active security violation was detected.
  using JTAGC = ftl::mmio::Field<1, 1, eJTAGC, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Watchdog 2 Reset security violation was detected.
  using WDOG2 = ftl::mmio::Field<1, 2, eWDOG2, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Internal Boot security violation was detected.
  using SRC = ftl::mmio::Field<1, 4, eSRC, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // OCOTP attack error security violation was detected.
  using OCOTP = ftl::mmio::Field<1, 5, eOCOTP, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Software Security Violation This bit is a read-only copy of the SW_SV bit in the HP Command Register
  using SW_SV = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Software Fatal Security Violation This bit is a read-only copy of the SW_FSV bit in the HP Command Register
  using SW_FSV = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LP Software Security Violation This bit is a read-only copy of the SW_LPSV bit in the HP Command Register
  using SW_LPSV = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Zeroizable Master Key Syndrome The ZMK syndrome indicates the single-bit error location and parity for the ZMK register
  using ZMK_SYNDROME = ftl::mmio::Field<9, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Zeroizable Master Key Error Correcting Code Check Failure When set, this bit triggers a bad key violation to the SSM and a security violation to the SNVS_LP section, which clears security sensitive data
  using ZMK_ECC_FAIL = ftl::mmio::Field<1, 27, eZMK_ECC_FAIL, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LP Security Violation A security volation was detected in the SNVS low power section
  using LP_SEC_VIO = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HPSVSR_fields_

struct HPSVSR : ftl::mmio::Register<
    0x40C90018u,
    std::uint32_t,
    0x80000000u,
    ftl::mmio::RW,
    HPSVSR_fields_::CAAM,
    HPSVSR_fields_::JTAGC,
    HPSVSR_fields_::WDOG2,
    ftl::mmio::Reserved<1, 3>,
    HPSVSR_fields_::SRC,
    HPSVSR_fields_::OCOTP,
    ftl::mmio::Reserved<7, 6>,
    HPSVSR_fields_::SW_SV,
    HPSVSR_fields_::SW_FSV,
    HPSVSR_fields_::SW_LPSV,
    HPSVSR_fields_::ZMK_SYNDROME,
    ftl::mmio::Reserved<2, 25>,
    HPSVSR_fields_::ZMK_ECC_FAIL,
    ftl::mmio::Reserved<3, 28>,
    HPSVSR_fields_::LP_SEC_VIO> {
  using eCAAM = HPSVSR_fields_::eCAAM;
  using eJTAGC = HPSVSR_fields_::eJTAGC;
  using eWDOG2 = HPSVSR_fields_::eWDOG2;
  using eSRC = HPSVSR_fields_::eSRC;
  using eOCOTP = HPSVSR_fields_::eOCOTP;
  using eZMK_ECC_FAIL = HPSVSR_fields_::eZMK_ECC_FAIL;
  using CAAM = HPSVSR_fields_::CAAM;
  using JTAGC = HPSVSR_fields_::JTAGC;
  using WDOG2 = HPSVSR_fields_::WDOG2;
  using SRC = HPSVSR_fields_::SRC;
  using OCOTP = HPSVSR_fields_::OCOTP;
  using SW_SV = HPSVSR_fields_::SW_SV;
  using SW_FSV = HPSVSR_fields_::SW_FSV;
  using SW_LPSV = HPSVSR_fields_::SW_LPSV;
  using ZMK_SYNDROME = HPSVSR_fields_::ZMK_SYNDROME;
  using ZMK_ECC_FAIL = HPSVSR_fields_::ZMK_ECC_FAIL;
  using LP_SEC_VIO = HPSVSR_fields_::LP_SEC_VIO;
};

// SNVS_HP High Assurance Counter IV Register
struct HPHACIVR_fields_ {
  // High Assurance Counter Initial Value This register is used to set the starting count value to the high assurance counter
  using HAC_COUNTER_IV = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPHACIVR_fields_

struct HPHACIVR : ftl::mmio::Register<
    0x40C9001Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPHACIVR_fields_::HAC_COUNTER_IV> {
  using HAC_COUNTER_IV = HPHACIVR_fields_::HAC_COUNTER_IV;
};

// SNVS_HP High Assurance Counter Register
struct HPHACR_fields_ {
  // High Assurance Counter When the HAC_EN bit is set and the SSM is in the soft fail state, this counter starts to count down with the system clock
  using HAC_COUNTER = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HPHACR_fields_

struct HPHACR : ftl::mmio::Register<
    0x40C90020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    HPHACR_fields_::HAC_COUNTER> {
  using HAC_COUNTER = HPHACR_fields_::HAC_COUNTER;
};

// SNVS_HP Real Time Counter MSB Register
struct HPRTCMR_fields_ {
  // HP Real Time Counter The most-significant 15 bits of the RTC
  using RTC = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPRTCMR_fields_

struct HPRTCMR : ftl::mmio::Register<
    0x40C90024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPRTCMR_fields_::RTC,
    ftl::mmio::Reserved<17, 15>> {
  using RTC = HPRTCMR_fields_::RTC;
};

// SNVS_HP Real Time Counter LSB Register
struct HPRTCLR_fields_ {
  // HP Real Time Counter least-significant 32 bits
  using RTC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPRTCLR_fields_

struct HPRTCLR : ftl::mmio::Register<
    0x40C90028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPRTCLR_fields_::RTC> {
  using RTC = HPRTCLR_fields_::RTC;
};

// SNVS_HP Time Alarm MSB Register
struct HPTAMR_fields_ {
  // HP Time Alarm, most-significant 15 bits
  using HPTA_MS = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPTAMR_fields_

struct HPTAMR : ftl::mmio::Register<
    0x40C9002Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPTAMR_fields_::HPTA_MS,
    ftl::mmio::Reserved<17, 15>> {
  using HPTA_MS = HPTAMR_fields_::HPTA_MS;
};

// SNVS_HP Time Alarm LSB Register
struct HPTALR_fields_ {
  // HP Time Alarm, 32 least-significant bits
  using HPTA_LS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HPTALR_fields_

struct HPTALR : ftl::mmio::Register<
    0x40C90030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HPTALR_fields_::HPTA_LS> {
  using HPTA_LS = HPTALR_fields_::HPTA_LS;
};

// SNVS_LP Lock Register
struct LPLR_fields_ {
  enum class eZMK_WHL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eZMK_RHL : std::uint32_t {
    // Read access is allowed (only in software programming mode).
    eREAD_ACCESS_ALLOWED = 0,
    // Read access is not allowed.
    eREAD_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eSRTC_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPCALB_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eMC_HL : std::uint32_t {
    // Write access (increment) is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access (increment) is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eGPR_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPSVCR_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPTGFCR_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eLPSECR_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eMKS_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT1_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT2_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT3_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT4_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  enum class eAT5_HL : std::uint32_t {
    // Write access is allowed.
    eWRITE_ACCESS_ALLOWED = 0,
    // Write access is not allowed.
    eWRITE_ACCESS_NOT_ALLOWED = 1,
  };

  // Zeroizable Master Key Write Hard Lock When set, prevents any writes (software and hardware) to the ZMK registers and ZMK_HWP, ZMK_VAL, and ZMK_ECC_EN fields of the LPMKCR
  using ZMK_WHL = ftl::mmio::Field<1, 0, eZMK_WHL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key Read Hard Lock When set, prevents any software reads to the ZMK registers and ZMK_ECC_VALUE field of the LPMKCR
  using ZMK_RHL = ftl::mmio::Field<1, 1, eZMK_RHL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Secure Real Time Counter Hard Lock When set, prevents any writes to the SRTC registers, SRTC_ENV, and SRTC_INV_EN bits
  using SRTC_HL = ftl::mmio::Field<1, 2, eSRTC_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Calibration Hard Lock When set, prevents any writes to the LP Calibration Value (LPCALB_VAL) and LP Calibration Enable (LPCALB_EN)
  using LPCALB_HL = ftl::mmio::Field<1, 3, eLPCALB_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Monotonic Counter Hard Lock When set, prevents any writes (increments) to the MC Registers and MC_ENV bit
  using MC_HL = ftl::mmio::Field<1, 4, eMC_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // General Purpose Register Hard Lock When set, prevents any writes to the GPR
  using GPR_HL = ftl::mmio::Field<1, 5, eGPR_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Violation Control Register Hard Lock When set, prevents any writes to the LPSVCR
  using LPSVCR_HL = ftl::mmio::Field<1, 6, eLPSVCR_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Tamper Glitch Filter Configuration Register Hard Lock When set, prevents any writes to the LPTGFCR
  using LPTGFCR_HL = ftl::mmio::Field<1, 7, eLPTGFCR_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Security Events Configuration Register Hard Lock When set, prevents any writes to the LPSECR
  using LPSECR_HL = ftl::mmio::Field<1, 8, eLPSECR_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Master Key Select Hard Lock When set, prevents any writes to the MASTER_KEY_SEL field of the LP Master Key Control Register
  using MKS_HL = ftl::mmio::Field<1, 9, eMKS_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 1 Hard Lock When set, prevents any writes to the Active Tamper 1 registers
  using AT1_HL = ftl::mmio::Field<1, 24, eAT1_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 2 Hard Lock When set, prevents any writes to the Active Tamper 2 registers
  using AT2_HL = ftl::mmio::Field<1, 25, eAT2_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 3 Hard Lock When set, prevents any writes to the Active Tamper 3 registers
  using AT3_HL = ftl::mmio::Field<1, 26, eAT3_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 4 Hard Lock When set, prevents any writes to the Active Tamper 4 registers
  using AT4_HL = ftl::mmio::Field<1, 27, eAT4_HL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 5 Hard Lock When set, prevents any writes to the Active Tamper 5 registers
  using AT5_HL = ftl::mmio::Field<1, 28, eAT5_HL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPLR_fields_

struct LPLR : ftl::mmio::Register<
    0x40C90034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPLR_fields_::ZMK_WHL,
    LPLR_fields_::ZMK_RHL,
    LPLR_fields_::SRTC_HL,
    LPLR_fields_::LPCALB_HL,
    LPLR_fields_::MC_HL,
    LPLR_fields_::GPR_HL,
    LPLR_fields_::LPSVCR_HL,
    LPLR_fields_::LPTGFCR_HL,
    LPLR_fields_::LPSECR_HL,
    LPLR_fields_::MKS_HL,
    ftl::mmio::Reserved<14, 10>,
    LPLR_fields_::AT1_HL,
    LPLR_fields_::AT2_HL,
    LPLR_fields_::AT3_HL,
    LPLR_fields_::AT4_HL,
    LPLR_fields_::AT5_HL,
    ftl::mmio::Reserved<3, 29>> {
  using eZMK_WHL = LPLR_fields_::eZMK_WHL;
  using eZMK_RHL = LPLR_fields_::eZMK_RHL;
  using eSRTC_HL = LPLR_fields_::eSRTC_HL;
  using eLPCALB_HL = LPLR_fields_::eLPCALB_HL;
  using eMC_HL = LPLR_fields_::eMC_HL;
  using eGPR_HL = LPLR_fields_::eGPR_HL;
  using eLPSVCR_HL = LPLR_fields_::eLPSVCR_HL;
  using eLPTGFCR_HL = LPLR_fields_::eLPTGFCR_HL;
  using eLPSECR_HL = LPLR_fields_::eLPSECR_HL;
  using eMKS_HL = LPLR_fields_::eMKS_HL;
  using eAT1_HL = LPLR_fields_::eAT1_HL;
  using eAT2_HL = LPLR_fields_::eAT2_HL;
  using eAT3_HL = LPLR_fields_::eAT3_HL;
  using eAT4_HL = LPLR_fields_::eAT4_HL;
  using eAT5_HL = LPLR_fields_::eAT5_HL;
  using ZMK_WHL = LPLR_fields_::ZMK_WHL;
  using ZMK_RHL = LPLR_fields_::ZMK_RHL;
  using SRTC_HL = LPLR_fields_::SRTC_HL;
  using LPCALB_HL = LPLR_fields_::LPCALB_HL;
  using MC_HL = LPLR_fields_::MC_HL;
  using GPR_HL = LPLR_fields_::GPR_HL;
  using LPSVCR_HL = LPLR_fields_::LPSVCR_HL;
  using LPTGFCR_HL = LPLR_fields_::LPTGFCR_HL;
  using LPSECR_HL = LPLR_fields_::LPSECR_HL;
  using MKS_HL = LPLR_fields_::MKS_HL;
  using AT1_HL = LPLR_fields_::AT1_HL;
  using AT2_HL = LPLR_fields_::AT2_HL;
  using AT3_HL = LPLR_fields_::AT3_HL;
  using AT4_HL = LPLR_fields_::AT4_HL;
  using AT5_HL = LPLR_fields_::AT5_HL;
};

// SNVS_LP Control Register
struct LPCR_fields_ {
  enum class eSRTC_ENV : std::uint32_t {
    // SRTC is disabled or invalid.
    eDISABLED = 0,
    // SRTC is enabled and valid.
    eENABLED = 1,
  };

  enum class eLPTA_EN : std::uint32_t {
    // LP time alarm interrupt is disabled.
    eDISABLED = 0,
    // LP time alarm interrupt is enabled.
    eENABLED = 1,
  };

  enum class eMC_ENV : std::uint32_t {
    // MC is disabled or invalid.
    eDISABLED = 0,
    // MC is enabled and valid.
    eENABLED = 1,
  };

  enum class eSRTC_INV_EN : std::uint32_t {
    // SRTC stays valid in the case of security violation (other than a software violation (HPSVSR[SW_LPSV] = 1 or HPCOMR[SW_LPSV] = 1)).
    eKEEP_VALID = 0,
    // SRTC is invalidated in the case of security violation.
    eINVALIDATE = 1,
  };

  enum class eDP_EN : std::uint32_t {
    // Smart PMIC enabled.
    eSMART_PMIC_ENABLED = 0,
    // Dumb PMIC enabled.
    eDUMB_PMIC_ENABLED = 1,
  };

  enum class eTOP : std::uint32_t {
    // Leave system power on.
    eKEEP_ON = 0,
    // Turn off system power.
    eTURN_OFF = 1,
  };

  enum class eLPCALB_EN : std::uint32_t {
    // SRTC Time calibration is disabled.
    eDISABLED = 0,
    // SRTC Time calibration is enabled.
    eENABLED = 1,
  };

  enum class eLPCALB_VAL : std::uint32_t {
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

  // Secure Real Time Counter Enabled and Valid When set, the SRTC becomes operational
  using SRTC_ENV = ftl::mmio::Field<1, 0, eSRTC_ENV, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Time Alarm Enable When set, the SNVS functional interrupt is asserted if the LP Time Alarm Register is equal to the 32 MSBs of the secure real time counter
  using LPTA_EN = ftl::mmio::Field<1, 1, eLPTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Monotonic Counter Enabled and Valid When set, the MC can be incremented (by write transaction to the LPSMCMR or LPSMCLR)
  using MC_ENV = ftl::mmio::Field<1, 2, eMC_ENV, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Wake-Up Interrupt Enable This interrupt line should be connected to the external pin and is intended to inform the external chip about an SNVS_LP event (tamper event, MC rollover, SRTC rollover, or time alarm )
  using LPWUI_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // If this bit is 1, in the case of a security violation the SRTC stops counting and the SRTC is invalidated (SRTC_ENV bit is cleared)
  using SRTC_INV_EN = ftl::mmio::Field<1, 4, eSRTC_INV_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Dumb PMIC Enabled When set, software can control the system power
  using DP_EN = ftl::mmio::Field<1, 5, eDP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Turn off System Power Asserting this bit causes a signal to be sent to the Power Management IC to turn off the system power
  using TOP = ftl::mmio::Field<1, 6, eTOP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Digital Low-Voltage Event Enable By default the detection of a low-voltage event does not cause the pmic_en_b signal to be asserted
  using LVD_EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Calibration Enable When set, enables the SRTC calibration mechanism
  using LPCALB_EN = ftl::mmio::Field<1, 8, eLPCALB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP Calibration Value Defines signed calibration value for SRTC
  using LPCALB_VAL = ftl::mmio::Field<5, 10, eLPCALB_VAL, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field configures the button press time out values for the PMIC Logic
  using BTN_PRESS_TIME = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // This field configures the amount of debounce time for the BTN input signal
  using DEBOUNCE = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // The ON_TIME field is used to configure the period of time after BTN is asserted before pmic_en_b is asserted to turn on the SoC power
  using ON_TIME = ftl::mmio::Field<2, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // PMIC On Request Enable The value written to PK_EN will be asserted on output signal snvs_lp_pk_en
  using PK_EN = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PMIC On Request Override The value written to PK_OVERRIDE will be asserted on output signal snvs_lp_pk_override
  using PK_OVERRIDE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // General Purpose Registers Zeroization Disable
  using GPR_Z_DIS = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPCR_fields_

struct LPCR : ftl::mmio::Register<
    0x40C90038u,
    std::uint32_t,
    0x00000020u,
    ftl::mmio::RW,
    LPCR_fields_::SRTC_ENV,
    LPCR_fields_::LPTA_EN,
    LPCR_fields_::MC_ENV,
    LPCR_fields_::LPWUI_EN,
    LPCR_fields_::SRTC_INV_EN,
    LPCR_fields_::DP_EN,
    LPCR_fields_::TOP,
    LPCR_fields_::LVD_EN,
    LPCR_fields_::LPCALB_EN,
    ftl::mmio::Reserved<1, 9>,
    LPCR_fields_::LPCALB_VAL,
    ftl::mmio::Reserved<1, 15>,
    LPCR_fields_::BTN_PRESS_TIME,
    LPCR_fields_::DEBOUNCE,
    LPCR_fields_::ON_TIME,
    LPCR_fields_::PK_EN,
    LPCR_fields_::PK_OVERRIDE,
    LPCR_fields_::GPR_Z_DIS,
    ftl::mmio::Reserved<7, 25>> {
  using eSRTC_ENV = LPCR_fields_::eSRTC_ENV;
  using eLPTA_EN = LPCR_fields_::eLPTA_EN;
  using eMC_ENV = LPCR_fields_::eMC_ENV;
  using eSRTC_INV_EN = LPCR_fields_::eSRTC_INV_EN;
  using eDP_EN = LPCR_fields_::eDP_EN;
  using eTOP = LPCR_fields_::eTOP;
  using eLPCALB_EN = LPCR_fields_::eLPCALB_EN;
  using eLPCALB_VAL = LPCR_fields_::eLPCALB_VAL;
  using SRTC_ENV = LPCR_fields_::SRTC_ENV;
  using LPTA_EN = LPCR_fields_::LPTA_EN;
  using MC_ENV = LPCR_fields_::MC_ENV;
  using LPWUI_EN = LPCR_fields_::LPWUI_EN;
  using SRTC_INV_EN = LPCR_fields_::SRTC_INV_EN;
  using DP_EN = LPCR_fields_::DP_EN;
  using TOP = LPCR_fields_::TOP;
  using LVD_EN = LPCR_fields_::LVD_EN;
  using LPCALB_EN = LPCR_fields_::LPCALB_EN;
  using LPCALB_VAL = LPCR_fields_::LPCALB_VAL;
  using BTN_PRESS_TIME = LPCR_fields_::BTN_PRESS_TIME;
  using DEBOUNCE = LPCR_fields_::DEBOUNCE;
  using ON_TIME = LPCR_fields_::ON_TIME;
  using PK_EN = LPCR_fields_::PK_EN;
  using PK_OVERRIDE = LPCR_fields_::PK_OVERRIDE;
  using GPR_Z_DIS = LPCR_fields_::GPR_Z_DIS;
};

// SNVS_LP Master Key Control Register
struct LPMKCR_fields_ {
  enum class eMASTER_KEY_SEL : std::uint32_t {
    // Select one time programmable master key.
    eSELECT_OTPMK = 0,
    // Select zeroizable master key when MKS_EN bit is set .
    eSELECT_ZMK = 2,
    // Select combined master key when MKS_EN bit is set .
    eSELECT_COMBO = 3,
  };

  enum class eZMK_HWP : std::uint32_t {
    // ZMK is in the software programming mode.
    eSW_PROG_MODE = 0,
    // ZMK is in the hardware programming mode.
    eHW_PROG_MODE = 1,
  };

  enum class eZMK_VAL : std::uint32_t {
    // ZMK is not valid.
    eINVALID = 0,
    // ZMK is valid.
    eVALID = 1,
  };

  enum class eZMK_ECC_EN : std::uint32_t {
    // ZMK ECC check is disabled.
    eDISABLED = 0,
    // ZMK ECC check is enabled.
    eENABLED = 1,
  };

  // Master Key Select These bits select the SNVS Master Key output when Master Key Select bits are enabled by MKS_EN bit in the HPCOMR
  using MASTER_KEY_SEL = ftl::mmio::Field<2, 0, eMASTER_KEY_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key hardware Programming mode When set, only the hardware key programming mechanism can set the ZMK and software cannot read it
  using ZMK_HWP = ftl::mmio::Field<1, 2, eZMK_HWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key Valid When set, the ZMK value can be selected by the master key control block for use by cryptographic modules
  using ZMK_VAL = ftl::mmio::Field<1, 3, eZMK_VAL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key Error Correcting Code Check Enable Writing one to this field automatically calculates and sets the ZMK ECC value in the ZMK_ECC_VALUE field of this register
  using ZMK_ECC_EN = ftl::mmio::Field<1, 4, eZMK_ECC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Zeroizable Master Key Error Correcting Code Value This field is automatically calculated and set when one is written into ZMK_ECC_EN bit of this register
  using ZMK_ECC_VALUE = ftl::mmio::Field<9, 7, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LPMKCR_fields_

struct LPMKCR : ftl::mmio::Register<
    0x40C9003Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPMKCR_fields_::MASTER_KEY_SEL,
    LPMKCR_fields_::ZMK_HWP,
    LPMKCR_fields_::ZMK_VAL,
    LPMKCR_fields_::ZMK_ECC_EN,
    ftl::mmio::Reserved<2, 5>,
    LPMKCR_fields_::ZMK_ECC_VALUE,
    ftl::mmio::Reserved<16, 16>> {
  using eMASTER_KEY_SEL = LPMKCR_fields_::eMASTER_KEY_SEL;
  using eZMK_HWP = LPMKCR_fields_::eZMK_HWP;
  using eZMK_VAL = LPMKCR_fields_::eZMK_VAL;
  using eZMK_ECC_EN = LPMKCR_fields_::eZMK_ECC_EN;
  using MASTER_KEY_SEL = LPMKCR_fields_::MASTER_KEY_SEL;
  using ZMK_HWP = LPMKCR_fields_::ZMK_HWP;
  using ZMK_VAL = LPMKCR_fields_::ZMK_VAL;
  using ZMK_ECC_EN = LPMKCR_fields_::ZMK_ECC_EN;
  using ZMK_ECC_VALUE = LPMKCR_fields_::ZMK_ECC_VALUE;
};

// SNVS_LP Security Violation Control Register
struct LPSVCR_fields_ {
  enum class eCAAM_EN : std::uint32_t {
    // CAAM Security Violation is disabled in the LP domain.
    eDISABLED = 0,
    // CAAM Security Violation is enabled in the LP domain.
    eENABLED = 1,
  };

  enum class eJTAGC_EN : std::uint32_t {
    // JTAG Active is disabled in the LP domain.
    eDISABLED = 0,
    // JTAG Active is enabled in the LP domain.
    eENABLED = 1,
  };

  enum class eWDOG2_EN : std::uint32_t {
    // Watchdog 2 Reset is disabled in the LP domain.
    eDISABLED = 0,
    // Watchdog 2 Reset is enabled in the LP domain.
    eENABLED = 1,
  };

  enum class eSRC_EN : std::uint32_t {
    // Internal Boot is disabled in the LP domain.
    eDISABLED = 0,
    // Internal Boot is enabled in the LP domain.
    eENABLED = 1,
  };

  enum class eOCOTP_EN : std::uint32_t {
    // OCOTP attack error is disabled in the LP domain.
    eDISABLED = 0,
    // OCOTP attack error is enabled in the LP domain.
    eENABLED = 1,
  };

  // CAAM Security Violation Enable This bit enables CAAM Security Violation Input
  using CAAM_EN = ftl::mmio::Field<1, 0, eCAAM_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // JTAG Active Enable This bit enables JTAG Active Input
  using JTAGC_EN = ftl::mmio::Field<1, 1, eJTAGC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Watchdog 2 Reset Enable This bit enables Watchdog 2 Reset Input
  using WDOG2_EN = ftl::mmio::Field<1, 2, eWDOG2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Internal Boot Enable This bit enables Internal Boot Input
  using SRC_EN = ftl::mmio::Field<1, 4, eSRC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // OCOTP attack error Enable This bit enables OCOTP attack error Input
  using OCOTP_EN = ftl::mmio::Field<1, 5, eOCOTP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPSVCR_fields_

struct LPSVCR : ftl::mmio::Register<
    0x40C90040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSVCR_fields_::CAAM_EN,
    LPSVCR_fields_::JTAGC_EN,
    LPSVCR_fields_::WDOG2_EN,
    ftl::mmio::Reserved<1, 3>,
    LPSVCR_fields_::SRC_EN,
    LPSVCR_fields_::OCOTP_EN,
    ftl::mmio::Reserved<26, 6>> {
  using eCAAM_EN = LPSVCR_fields_::eCAAM_EN;
  using eJTAGC_EN = LPSVCR_fields_::eJTAGC_EN;
  using eWDOG2_EN = LPSVCR_fields_::eWDOG2_EN;
  using eSRC_EN = LPSVCR_fields_::eSRC_EN;
  using eOCOTP_EN = LPSVCR_fields_::eOCOTP_EN;
  using CAAM_EN = LPSVCR_fields_::CAAM_EN;
  using JTAGC_EN = LPSVCR_fields_::JTAGC_EN;
  using WDOG2_EN = LPSVCR_fields_::WDOG2_EN;
  using SRC_EN = LPSVCR_fields_::SRC_EN;
  using OCOTP_EN = LPSVCR_fields_::OCOTP_EN;
};

// SNVS_LP Tamper Glitch Filters Configuration Register
struct LPTGFCR_fields_ {
  enum class eWMTGF_EN : std::uint32_t {
    // Wire-mesh tamper glitch filter is bypassed.
    eBYPASSED = 0,
    // Wire-mesh tamper glitch filter is enabled.
    eENABLED = 1,
  };

  enum class eETGF1_EN : std::uint32_t {
    // External tamper glitch filter 1 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 1 is enabled.
    eENABLED = 1,
  };

  enum class eETGF2_EN : std::uint32_t {
    // External tamper glitch filter 2 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 2 is enabled.
    eENABLED = 1,
  };

  // Wire-Mesh Tamper Glitch Filter Configures the length of the digital glitch filter for the wire-mesh tamper 1 and 2 pins between 1 and 63 SRTC clock cycles
  using WMTGF = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Wire-Mesh Tamper Glitch Filter Enable When set, enables the wire-mesh tamper glitch filter
  using WMTGF_EN = ftl::mmio::Field<1, 7, eWMTGF_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 1 Configures the length of the digital glitch filter for the external tamper 1 pin between 128 and 32640 SRTC clock cycles
  using ETGF1 = ftl::mmio::Field<7, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 1 Enable When set, enables the external tamper glitch filter 1.
  using ETGF1_EN = ftl::mmio::Field<1, 23, eETGF1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 2 Configures the length of the digital glitch filter for the external tamper 2 pin between 128 and 32640 SRTC clock cycles
  using ETGF2 = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 2 Enable When set, enables the external tamper glitch filter 2.
  using ETGF2_EN = ftl::mmio::Field<1, 31, eETGF2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTGFCR_fields_

struct LPTGFCR : ftl::mmio::Register<
    0x40C90044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTGFCR_fields_::WMTGF,
    ftl::mmio::Reserved<2, 5>,
    LPTGFCR_fields_::WMTGF_EN,
    ftl::mmio::Reserved<8, 8>,
    LPTGFCR_fields_::ETGF1,
    LPTGFCR_fields_::ETGF1_EN,
    LPTGFCR_fields_::ETGF2,
    LPTGFCR_fields_::ETGF2_EN> {
  using eWMTGF_EN = LPTGFCR_fields_::eWMTGF_EN;
  using eETGF1_EN = LPTGFCR_fields_::eETGF1_EN;
  using eETGF2_EN = LPTGFCR_fields_::eETGF2_EN;
  using WMTGF = LPTGFCR_fields_::WMTGF;
  using WMTGF_EN = LPTGFCR_fields_::WMTGF_EN;
  using ETGF1 = LPTGFCR_fields_::ETGF1;
  using ETGF1_EN = LPTGFCR_fields_::ETGF1_EN;
  using ETGF2 = LPTGFCR_fields_::ETGF2;
  using ETGF2_EN = LPTGFCR_fields_::ETGF2_EN;
};

// SNVS_LP Tamper Detect Configuration Register
struct LPTDCR_fields_ {
  enum class eSRTCR_EN : std::uint32_t {
    // SRTC rollover is disabled.
    eDISABLED = 0,
    // SRTC rollover is enabled.
    eENABLED = 1,
  };

  enum class eMCR_EN : std::uint32_t {
    // MC rollover is disabled.
    eDISABLED = 0,
    // MC rollover is enabled.
    eENABLED = 1,
  };

  enum class eCT_EN : std::uint32_t {
    // Clock tamper is disabled.
    eDISABLED = 0,
    // Clock tamper is enabled.
    eENABLED = 1,
  };

  enum class eTT_EN : std::uint32_t {
    // Temperature tamper is disabled.
    eDISABLED = 0,
    // Temperature tamper is enabled.
    eENABLED = 1,
  };

  enum class eVT_EN : std::uint32_t {
    // Voltage tamper is disabled.
    eDISABLED = 0,
    // Voltage tamper is enabled.
    eENABLED = 1,
  };

  enum class eWMT1_EN : std::uint32_t {
    // Wire-mesh tamper 1 is disabled.
    eDISABLED = 0,
    // Wire-mesh tamper 1 is enabled.
    eENABLED = 1,
  };

  enum class eWMT2_EN : std::uint32_t {
    // Wire-mesh tamper 2 is disabled.
    eDISABLED = 0,
    // Wire-mesh tamper 2 is enabled.
    eENABLED = 1,
  };

  enum class eET1_EN : std::uint32_t {
    // External tamper 1 is disabled.
    eDISABLED = 0,
    // External tamper 1 is enabled.
    eENABLED = 1,
  };

  enum class eET2_EN : std::uint32_t {
    // External tamper 2 is disabled.
    eDISABLED = 0,
    // External tamper 2 is enabled.
    eENABLED = 1,
  };

  enum class eET1P : std::uint32_t {
    // External tamper 1 is active low.
    eACTIVE_LOW = 0,
    // External tamper 1 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET2P : std::uint32_t {
    // External tamper 2 is active low.
    eACTIVE_LOW = 0,
    // External tamper 2 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eOSCB : std::uint32_t {
    // Normal SRTC clock oscillator not bypassed.
    eNOT_BYPASSED = 0,
    // Normal SRTC clock oscillator bypassed. Alternate clock can drive the SRTC clock source.
    eBYPASSED = 1,
  };

  // SRTC Rollover Enable When set, an SRTC rollover event generates an LP security violation.
  using SRTCR_EN = ftl::mmio::Field<1, 1, eSRTCR_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // MC Rollover Enable When set, an MC Rollover event generates an LP security violation.
  using MCR_EN = ftl::mmio::Field<1, 2, eMCR_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock Tamper Enable When set, a clock monitor tamper generates an LP security violation.
  using CT_EN = ftl::mmio::Field<1, 4, eCT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Temperature Tamper Enable When set, a temperature monitor tamper generates an LP security violation
  using TT_EN = ftl::mmio::Field<1, 5, eTT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Voltage Tamper Enable Voltage Tamper Enable should be enabled 500 us after setting SCSC_SOSC_CTR [VOLT_TEMP_TAMPER_EN]
  using VT_EN = ftl::mmio::Field<1, 6, eVT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Wire-Mesh Tampering 1 Enable When set, wire-mesh tampering 1 detection generates an LP security violation
  using WMT1_EN = ftl::mmio::Field<1, 7, eWMT1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Wire-Mesh Tampering 2 Enable When set, wire-mesh tampering 2 detection generates an LP security violation
  using WMT2_EN = ftl::mmio::Field<1, 8, eWMT2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 1 Enable When set, external tampering 1 detection generates an LP security violation
  using ET1_EN = ftl::mmio::Field<1, 9, eET1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 2 Enable When set, external tampering 2 detection generates an LP security violation
  using ET2_EN = ftl::mmio::Field<1, 10, eET2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 1 Polarity This bit is used to determine the polarity of external tamper 1.
  using ET1P = ftl::mmio::Field<1, 11, eET1P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 2 Polarity This bit is used to determine the polarity of external tamper 2.
  using ET2P = ftl::mmio::Field<1, 12, eET2P, ftl::mmio::RW, ftl::mmio::Normal>;
  // System Power Fail Detector (PFD) Observability Flop The asynchronous reset input of this flop is connected directly to the inverted output of the PFD analog circuitry (external to the SNVS block)
  using PFD_OBSERV = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power On Reset (POR) Observability Flop The asynchronous reset input of this flop is connected directly to the output of the POR analog circuitry (external to the SNVS
  using POR_OBSERV = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Low Temp Detect Configuration These configuration bits are wired as an output of the module.
  using LTDC = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // High Temperature Detect Configuration These configuration bits are wired as an output of the module
  using HTDC = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Voltage Reference Configuration These configuration bits are wired as an output of the module.
  using VRC = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Oscillator Bypass When OSCB=1 the osc_bypass signal is asserted
  using OSCB = ftl::mmio::Field<1, 28, eOSCB, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTDCR_fields_

struct LPTDCR : ftl::mmio::Register<
    0x40C90048u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    LPTDCR_fields_::SRTCR_EN,
    LPTDCR_fields_::MCR_EN,
    ftl::mmio::Reserved<1, 3>,
    LPTDCR_fields_::CT_EN,
    LPTDCR_fields_::TT_EN,
    LPTDCR_fields_::VT_EN,
    LPTDCR_fields_::WMT1_EN,
    LPTDCR_fields_::WMT2_EN,
    LPTDCR_fields_::ET1_EN,
    LPTDCR_fields_::ET2_EN,
    LPTDCR_fields_::ET1P,
    LPTDCR_fields_::ET2P,
    ftl::mmio::Reserved<1, 13>,
    LPTDCR_fields_::PFD_OBSERV,
    LPTDCR_fields_::POR_OBSERV,
    LPTDCR_fields_::LTDC,
    ftl::mmio::Reserved<1, 19>,
    LPTDCR_fields_::HTDC,
    ftl::mmio::Reserved<1, 23>,
    LPTDCR_fields_::VRC,
    ftl::mmio::Reserved<1, 27>,
    LPTDCR_fields_::OSCB,
    ftl::mmio::Reserved<3, 29>> {
  using eSRTCR_EN = LPTDCR_fields_::eSRTCR_EN;
  using eMCR_EN = LPTDCR_fields_::eMCR_EN;
  using eCT_EN = LPTDCR_fields_::eCT_EN;
  using eTT_EN = LPTDCR_fields_::eTT_EN;
  using eVT_EN = LPTDCR_fields_::eVT_EN;
  using eWMT1_EN = LPTDCR_fields_::eWMT1_EN;
  using eWMT2_EN = LPTDCR_fields_::eWMT2_EN;
  using eET1_EN = LPTDCR_fields_::eET1_EN;
  using eET2_EN = LPTDCR_fields_::eET2_EN;
  using eET1P = LPTDCR_fields_::eET1P;
  using eET2P = LPTDCR_fields_::eET2P;
  using eOSCB = LPTDCR_fields_::eOSCB;
  using SRTCR_EN = LPTDCR_fields_::SRTCR_EN;
  using MCR_EN = LPTDCR_fields_::MCR_EN;
  using CT_EN = LPTDCR_fields_::CT_EN;
  using TT_EN = LPTDCR_fields_::TT_EN;
  using VT_EN = LPTDCR_fields_::VT_EN;
  using WMT1_EN = LPTDCR_fields_::WMT1_EN;
  using WMT2_EN = LPTDCR_fields_::WMT2_EN;
  using ET1_EN = LPTDCR_fields_::ET1_EN;
  using ET2_EN = LPTDCR_fields_::ET2_EN;
  using ET1P = LPTDCR_fields_::ET1P;
  using ET2P = LPTDCR_fields_::ET2P;
  using PFD_OBSERV = LPTDCR_fields_::PFD_OBSERV;
  using POR_OBSERV = LPTDCR_fields_::POR_OBSERV;
  using LTDC = LPTDCR_fields_::LTDC;
  using HTDC = LPTDCR_fields_::HTDC;
  using VRC = LPTDCR_fields_::VRC;
  using OSCB = LPTDCR_fields_::OSCB;
};

// SNVS_LP Status Register
struct LPSR_fields_ {
  enum class eLPTA : std::uint32_t {
    // No time alarm interrupt occurred.
    eNOREPORT = 0,
    // A time alarm interrupt occurred.
    eREPORTED = 1,
  };

  enum class eSRTCR : std::uint32_t {
    // SRTC has not reached its maximum value.
    eNOREPORT = 0,
    // SRTC has reached its maximum value.
    eREPORTED = 1,
  };

  enum class eMCR : std::uint32_t {
    // MC has not reached its maximum value.
    eNOREPORT = 0,
    // MC has reached its maximum value.
    eREPORTED = 1,
  };

  enum class eLVD : std::uint32_t {
    // No low voltage event detected.
    eNOLOWVOLT = 0,
    // Low voltage event is detected.
    eLOWVOLTDETECTED = 1,
  };

  enum class eCTD : std::uint32_t {
    // No clock tamper.
    eNOREPORT = 0,
    // Clock tamper is detected.
    eREPORTED = 1,
  };

  enum class eTTD : std::uint32_t {
    // No temperature tamper.
    eNOREPORT = 0,
    // Temperature tamper is detected.
    eREPORTED = 1,
  };

  enum class eVTD : std::uint32_t {
    // Voltage tampering not detected.
    eNOREPORT = 0,
    // Voltage tampering detected.
    eREPORTED = 1,
  };

  enum class eWMT1D : std::uint32_t {
    // Wire-mesh tampering 1 not detected.
    eNOREPORT = 0,
    // Wire-mesh tampering 1 detected.
    eREPORTED = 1,
  };

  enum class eWMT2D : std::uint32_t {
    // Wire-mesh tampering 2 not detected.
    eNOREPORT = 0,
    // Wire-mesh tampering 2 detected.
    eREPORTED = 1,
  };

  enum class eET1D : std::uint32_t {
    // External tampering 1 not detected.
    eNOREPORT = 0,
    // External tampering 1 detected.
    eREPORTED = 1,
  };

  enum class eET2D : std::uint32_t {
    // External tampering 2 not detected.
    eNOREPORT = 0,
    // External tampering 2 detected.
    eREPORTED = 1,
  };

  enum class eESVD : std::uint32_t {
    // No external security violation.
    eNOREPORT = 0,
    // External security violation is detected.
    eREPORTED = 1,
  };

  enum class eEO : std::uint32_t {
    // Emergency off was not detected.
    eNOREPORT = 0,
    // Emergency off was detected.
    eREPORTED = 1,
  };

  enum class eSPOF : std::uint32_t {
    // Set Power Off was not detected.
    eNOREPORT = 0,
    // Set Power Off was detected.
    eREPORTED = 1,
  };

  enum class eLPNS : std::uint32_t {
    // LP section was not programmed in the non-secure state.
    eNOT_PRGRMD_IN_NON_SECURE_STATE = 0,
    // LP section was programmed in the non-secure state.
    eWAS_PRGRMD_IN_NON_SECURE_STATE = 1,
  };

  enum class eLPS : std::uint32_t {
    // LP section was not programmed in secure or trusted state.
    eNOT_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 0,
    // LP section was programmed in secure or trusted state.
    eWAS_PRGRMD_IN_SECURE_OR_TRUSTED_STATE = 1,
  };

  // LP Time Alarm
  using LPTA = ftl::mmio::Field<1, 0, eLPTA, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Secure Real Time Counter Rollover
  using SRTCR = ftl::mmio::Field<1, 1, eSRTCR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Monotonic Counter Rollover
  using MCR = ftl::mmio::Field<1, 2, eMCR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Digital Low Voltage Event Detected
  using LVD = ftl::mmio::Field<1, 3, eLVD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Clock Tampering Detected
  using CTD = ftl::mmio::Field<1, 4, eCTD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Temperature Tamper Detected
  using TTD = ftl::mmio::Field<1, 5, eTTD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Voltage Tampering Detected
  using VTD = ftl::mmio::Field<1, 6, eVTD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Wire-Mesh Tampering 1 Detected
  using WMT1D = ftl::mmio::Field<1, 7, eWMT1D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Wire-Mesh Tampering 2 Detected
  using WMT2D = ftl::mmio::Field<1, 8, eWMT2D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 1 Detected
  using ET1D = ftl::mmio::Field<1, 9, eET1D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 2 Detected
  using ET2D = ftl::mmio::Field<1, 10, eET2D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Security Violation Detected Indicates that a security violation is detected on one of the HP security violation ports
  using ESVD = ftl::mmio::Field<1, 16, eESVD, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Emergency Off This bit is set when a power off is requested.
  using EO = ftl::mmio::Field<1, 17, eEO, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Set Power Off The SPO bit is set when the power button is pressed longer than the configured debounce time
  using SPOF = ftl::mmio::Field<1, 18, eSPOF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // LP Section is Non-Secured Indicates that LP section was provisioned/programmed in the non-secure state
  using LPNS = ftl::mmio::Field<1, 30, eLPNS, ftl::mmio::RO, ftl::mmio::Normal>;
  // LP Section is Secured Indicates that the LP section is provisioned/programmed in the secure or trusted state
  using LPS = ftl::mmio::Field<1, 31, eLPS, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LPSR_fields_

struct LPSR : ftl::mmio::Register<
    0x40C9004Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    LPSR_fields_::LPTA,
    LPSR_fields_::SRTCR,
    LPSR_fields_::MCR,
    LPSR_fields_::LVD,
    LPSR_fields_::CTD,
    LPSR_fields_::TTD,
    LPSR_fields_::VTD,
    LPSR_fields_::WMT1D,
    LPSR_fields_::WMT2D,
    LPSR_fields_::ET1D,
    LPSR_fields_::ET2D,
    ftl::mmio::Reserved<5, 11>,
    LPSR_fields_::ESVD,
    LPSR_fields_::EO,
    LPSR_fields_::SPOF,
    ftl::mmio::Reserved<11, 19>,
    LPSR_fields_::LPNS,
    LPSR_fields_::LPS> {
  using eLPTA = LPSR_fields_::eLPTA;
  using eSRTCR = LPSR_fields_::eSRTCR;
  using eMCR = LPSR_fields_::eMCR;
  using eLVD = LPSR_fields_::eLVD;
  using eCTD = LPSR_fields_::eCTD;
  using eTTD = LPSR_fields_::eTTD;
  using eVTD = LPSR_fields_::eVTD;
  using eWMT1D = LPSR_fields_::eWMT1D;
  using eWMT2D = LPSR_fields_::eWMT2D;
  using eET1D = LPSR_fields_::eET1D;
  using eET2D = LPSR_fields_::eET2D;
  using eESVD = LPSR_fields_::eESVD;
  using eEO = LPSR_fields_::eEO;
  using eSPOF = LPSR_fields_::eSPOF;
  using eLPNS = LPSR_fields_::eLPNS;
  using eLPS = LPSR_fields_::eLPS;
  using LPTA = LPSR_fields_::LPTA;
  using SRTCR = LPSR_fields_::SRTCR;
  using MCR = LPSR_fields_::MCR;
  using LVD = LPSR_fields_::LVD;
  using CTD = LPSR_fields_::CTD;
  using TTD = LPSR_fields_::TTD;
  using VTD = LPSR_fields_::VTD;
  using WMT1D = LPSR_fields_::WMT1D;
  using WMT2D = LPSR_fields_::WMT2D;
  using ET1D = LPSR_fields_::ET1D;
  using ET2D = LPSR_fields_::ET2D;
  using ESVD = LPSR_fields_::ESVD;
  using EO = LPSR_fields_::EO;
  using SPOF = LPSR_fields_::SPOF;
  using LPNS = LPSR_fields_::LPNS;
  using LPS = LPSR_fields_::LPS;
};

// SNVS_LP Secure Real Time Counter MSB Register
struct LPSRTCMR_fields_ {
  // LP Secure Real Time Counter The most-significant 15 bits of the SRTC
  using SRTC = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPSRTCMR_fields_

struct LPSRTCMR : ftl::mmio::Register<
    0x40C90050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSRTCMR_fields_::SRTC,
    ftl::mmio::Reserved<17, 15>> {
  using SRTC = LPSRTCMR_fields_::SRTC;
};

// SNVS_LP Secure Real Time Counter LSB Register
struct LPSRTCLR_fields_ {
  // LP Secure Real Time Counter least-significant 32 bits This register can be programmed only when SRTC is not active and not locked, meaning the SRTC_ENV, SRTC_SL, and SRTC_HL bits are not set
  using SRTC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPSRTCLR_fields_

struct LPSRTCLR : ftl::mmio::Register<
    0x40C90054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSRTCLR_fields_::SRTC> {
  using SRTC = LPSRTCLR_fields_::SRTC;
};

// SNVS_LP Time Alarm Register
struct LPTAR_fields_ {
  // LP Time Alarm This register can be programmed only when the LP time alarm is disabled (LPTA_EN bit is not set)
  using LPTA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTAR_fields_

struct LPTAR : ftl::mmio::Register<
    0x40C90058u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTAR_fields_::LPTA> {
  using LPTA = LPTAR_fields_::LPTA;
};

// SNVS_LP Secure Monotonic Counter MSB Register
struct LPSMCMR_fields_ {
  // Monotonic Counter most-significant 16 Bits Note that writing to this register does not change the value of this field to the value that was written
  using MON_COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Monotonic Counter Era Bits These bits are inputs to the module and typically connect to fuses
  using MC_ERA_BITS = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LPSMCMR_fields_

struct LPSMCMR : ftl::mmio::Register<
    0x40C9005Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSMCMR_fields_::MON_COUNTER,
    LPSMCMR_fields_::MC_ERA_BITS> {
  using MON_COUNTER = LPSMCMR_fields_::MON_COUNTER;
  using MC_ERA_BITS = LPSMCMR_fields_::MC_ERA_BITS;
};

// SNVS_LP Secure Monotonic Counter LSB Register
struct LPSMCLR_fields_ {
  // Monotonic Counter bits Note that writing to this register does not change the value of this field to the value that was written
  using MON_COUNTER = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPSMCLR_fields_

struct LPSMCLR : ftl::mmio::Register<
    0x40C90060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSMCLR_fields_::MON_COUNTER> {
  using MON_COUNTER = LPSMCLR_fields_::MON_COUNTER;
};

// SNVS_LP Digital Low-Voltage Detector Register
struct LPLVDR_fields_ {
  // Low-Voltage Detector Value
  using LVD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPLVDR_fields_

struct LPLVDR : ftl::mmio::Register<
    0x40C90064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPLVDR_fields_::LVD> {
  using LVD = LPLVDR_fields_::LVD;
};

// SNVS_LP General Purpose Register 0 (legacy alias)
struct LPGPR0_legacy_alias_fields_ {
  // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
  using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPGPR0_legacy_alias_fields_

struct LPGPR0_legacy_alias : ftl::mmio::Register<
    0x40C90068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPGPR0_legacy_alias_fields_::GPR> {
  using GPR = LPGPR0_legacy_alias_fields_::GPR;
};

// SNVS_LP Zeroizable Master Key Register
struct LPZMKR_fields_ {
  // Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
  using ZMK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPZMKR_fields_

template<std::uint32_t Index>
struct LPZMKR : ftl::mmio::Register<
    0x40C9006Cu + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPZMKR_fields_::ZMK> {
  static_assert(Index < 8u, "LPZMKR: Index out of range");
  using ZMK = LPZMKR_fields_::ZMK;
};

// SNVS_LP General Purpose Registers 0 .. 3
struct LPGPR_alias_fields_ {
  // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
  using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPGPR_alias_fields_

template<std::uint32_t Index>
struct LPGPR_alias : ftl::mmio::Register<
    0x40C90090u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPGPR_alias_fields_::GPR> {
  static_assert(Index < 4u, "LPGPR_alias: Index out of range");
  using GPR = LPGPR_alias_fields_::GPR;
};

// SNVS_LP Tamper Detectors Config 2 Register
struct LPTDC2R_fields_ {
  enum class eET3_EN : std::uint32_t {
    // External tamper 3 is disabled.
    eDISABLED = 0,
    // External tamper 3 is enabled.
    eENABLED = 1,
  };

  enum class eET4_EN : std::uint32_t {
    // External tamper 4 is disabled.
    eDISABLED = 0,
    // External tamper 4 is enabled.
    eENABLED = 1,
  };

  enum class eET5_EN : std::uint32_t {
    // External tamper 5 is disabled.
    eDISABLED = 0,
    // External tamper 5 is enabled.
    eENABLED = 1,
  };

  enum class eET6_EN : std::uint32_t {
    // External tamper 6 is disabled.
    eDISABLED = 0,
    // External tamper 6 is enabled.
    eENABLED = 1,
  };

  enum class eET7_EN : std::uint32_t {
    // External tamper 7 is disabled.
    eDISABLED = 0,
    // External tamper 7 is enabled.
    eENABLED = 1,
  };

  enum class eET8_EN : std::uint32_t {
    // External tamper 8 is disabled.
    eDISABLED = 0,
    // External tamper 8 is enabled.
    eENABLED = 1,
  };

  enum class eET9_EN : std::uint32_t {
    // External tamper 9 is disabled.
    eDISABLED = 0,
    // External tamper 9 is enabled.
    eENABLED = 1,
  };

  enum class eET10_EN : std::uint32_t {
    // External tamper 10 is disabled.
    eDISABLED = 0,
    // External tamper 10 is enabled.
    eENABLED = 1,
  };

  enum class eET3P : std::uint32_t {
    // External tamper 3 active low.
    eACTIVE_LOW = 0,
    // External tamper 3 active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET4P : std::uint32_t {
    // External tamper 4 is active low.
    eACTIVE_LOW = 0,
    // External tamper 4 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET5P : std::uint32_t {
    // External tamper 5 is active low.
    eACTIVE_LOW = 0,
    // External tamper 5 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET6P : std::uint32_t {
    // External tamper 6 is active low.
    eACTIVE_LOW = 0,
    // External tamper 6 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET7P : std::uint32_t {
    // External tamper 7 is active low.
    eACTIVE_LOW = 0,
    // External tamper 7 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET8P : std::uint32_t {
    // External tamper 8 is active low.
    eACTIVE_LOW = 0,
    // External tamper 8 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET9P : std::uint32_t {
    // External tamper 9 is active low.
    eACTIVE_LOW = 0,
    // External tamper 9 is active high.
    eACTIVE_HIGH = 1,
  };

  enum class eET10P : std::uint32_t {
    // External tamper 10 is active low.
    eACTIVE_LOW = 0,
    // External tamper 10 is active high.
    eACTIVE_HIGH = 1,
  };

  // External Tampering 3 Enable When set, external tampering 3 detection generates an LP security violation
  using ET3_EN = ftl::mmio::Field<1, 0, eET3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 4 Enable When set, external tampering 4 detection generates an LP security violation
  using ET4_EN = ftl::mmio::Field<1, 1, eET4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 5 Enable When set, external tampering 5 detection generates an LP security violation
  using ET5_EN = ftl::mmio::Field<1, 2, eET5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 6 Enable When set, external tampering 6 detection generates an LP security violation
  using ET6_EN = ftl::mmio::Field<1, 3, eET6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 7 Enable When set, external tampering 7 detection generates an LP security violation
  using ET7_EN = ftl::mmio::Field<1, 4, eET7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 8 Enable When set, external tampering 8 detection generates an LP security violation
  using ET8_EN = ftl::mmio::Field<1, 5, eET8_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
  using ET9_EN = ftl::mmio::Field<1, 6, eET9_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 10 Enable When set, external tampering 10 detection generates an LP security violation
  using ET10_EN = ftl::mmio::Field<1, 7, eET10_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 3 Polarity This bit is used to determine the polarity of external tamper 3.
  using ET3P = ftl::mmio::Field<1, 16, eET3P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 4 Polarity This bit is used to determine the polarity of external tamper 4.
  using ET4P = ftl::mmio::Field<1, 17, eET4P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 5 Polarity This bit is used to determine the polarity of external tamper 5.
  using ET5P = ftl::mmio::Field<1, 18, eET5P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 6 Polarity This bit is used to determine the polarity of external tamper 6.
  using ET6P = ftl::mmio::Field<1, 19, eET6P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 7 Polarity This bit is used to determine the polarity of external tamper 7.
  using ET7P = ftl::mmio::Field<1, 20, eET7P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 8 Polarity This bit is used to determine the polarity of external tamper 8.
  using ET8P = ftl::mmio::Field<1, 21, eET8P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 9 Polarity This bit is used to determine the polarity of external tamper 9.
  using ET9P = ftl::mmio::Field<1, 22, eET9P, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tampering 10 Polarity This bit is used to determine the polarity of external tamper 10.
  using ET10P = ftl::mmio::Field<1, 23, eET10P, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTDC2R_fields_

struct LPTDC2R : ftl::mmio::Register<
    0x40C900A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTDC2R_fields_::ET3_EN,
    LPTDC2R_fields_::ET4_EN,
    LPTDC2R_fields_::ET5_EN,
    LPTDC2R_fields_::ET6_EN,
    LPTDC2R_fields_::ET7_EN,
    LPTDC2R_fields_::ET8_EN,
    LPTDC2R_fields_::ET9_EN,
    LPTDC2R_fields_::ET10_EN,
    ftl::mmio::Reserved<8, 8>,
    LPTDC2R_fields_::ET3P,
    LPTDC2R_fields_::ET4P,
    LPTDC2R_fields_::ET5P,
    LPTDC2R_fields_::ET6P,
    LPTDC2R_fields_::ET7P,
    LPTDC2R_fields_::ET8P,
    LPTDC2R_fields_::ET9P,
    LPTDC2R_fields_::ET10P,
    ftl::mmio::Reserved<8, 24>> {
  using eET3_EN = LPTDC2R_fields_::eET3_EN;
  using eET4_EN = LPTDC2R_fields_::eET4_EN;
  using eET5_EN = LPTDC2R_fields_::eET5_EN;
  using eET6_EN = LPTDC2R_fields_::eET6_EN;
  using eET7_EN = LPTDC2R_fields_::eET7_EN;
  using eET8_EN = LPTDC2R_fields_::eET8_EN;
  using eET9_EN = LPTDC2R_fields_::eET9_EN;
  using eET10_EN = LPTDC2R_fields_::eET10_EN;
  using eET3P = LPTDC2R_fields_::eET3P;
  using eET4P = LPTDC2R_fields_::eET4P;
  using eET5P = LPTDC2R_fields_::eET5P;
  using eET6P = LPTDC2R_fields_::eET6P;
  using eET7P = LPTDC2R_fields_::eET7P;
  using eET8P = LPTDC2R_fields_::eET8P;
  using eET9P = LPTDC2R_fields_::eET9P;
  using eET10P = LPTDC2R_fields_::eET10P;
  using ET3_EN = LPTDC2R_fields_::ET3_EN;
  using ET4_EN = LPTDC2R_fields_::ET4_EN;
  using ET5_EN = LPTDC2R_fields_::ET5_EN;
  using ET6_EN = LPTDC2R_fields_::ET6_EN;
  using ET7_EN = LPTDC2R_fields_::ET7_EN;
  using ET8_EN = LPTDC2R_fields_::ET8_EN;
  using ET9_EN = LPTDC2R_fields_::ET9_EN;
  using ET10_EN = LPTDC2R_fields_::ET10_EN;
  using ET3P = LPTDC2R_fields_::ET3P;
  using ET4P = LPTDC2R_fields_::ET4P;
  using ET5P = LPTDC2R_fields_::ET5P;
  using ET6P = LPTDC2R_fields_::ET6P;
  using ET7P = LPTDC2R_fields_::ET7P;
  using ET8P = LPTDC2R_fields_::ET8P;
  using ET9P = LPTDC2R_fields_::ET9P;
  using ET10P = LPTDC2R_fields_::ET10P;
};

// SNVS_LP Tamper Detectors Status Register
struct LPTDSR_fields_ {
  enum class eET3D : std::uint32_t {
    // External tamper 3 is not detected.
    eNOREPORT = 0,
    // External tamper 3 is detected.
    eREPORTED = 1,
  };

  enum class eET4D : std::uint32_t {
    // External tamper 4 is not detected.
    eNOREPORT = 0,
    // External tamper 4 is detected.
    eREPORTED = 1,
  };

  enum class eET5D : std::uint32_t {
    // External tamper 5 is not detected.
    eNOREPORT = 0,
    // External tamper 5 is detected.
    eREPORTED = 1,
  };

  enum class eET6D : std::uint32_t {
    // External tamper 6 is not detected.
    eNOREPORT = 0,
    // External tamper 6 is detected.
    eREPORTED = 1,
  };

  enum class eET7D : std::uint32_t {
    // External tamper 7 is not detected.
    eNOREPORT = 0,
    // External tamper 7 is detected.
    eREPORTED = 1,
  };

  enum class eET8D : std::uint32_t {
    // External tamper 8 is not detected.
    eNOREPORT = 0,
    // External tamper 8 is detected.
    eREPORTED = 1,
  };

  enum class eET9D : std::uint32_t {
    // External tamper 9 is not detected.
    eNOREPORT = 0,
    // External tamper 9 is detected.
    eREPORTED = 1,
  };

  enum class eET10D : std::uint32_t {
    // External tamper 10 is not detected.
    eNOREPORT = 0,
    // External tamper 10 is detected.
    eREPORTED = 1,
  };

  // External Tampering 3 Detected
  using ET3D = ftl::mmio::Field<1, 0, eET3D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 4 Detected
  using ET4D = ftl::mmio::Field<1, 1, eET4D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 5 Detected
  using ET5D = ftl::mmio::Field<1, 2, eET5D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 6 Detected
  using ET6D = ftl::mmio::Field<1, 3, eET6D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 7 Detected
  using ET7D = ftl::mmio::Field<1, 4, eET7D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 8 Detected
  using ET8D = ftl::mmio::Field<1, 5, eET8D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 9 Enable When set, external tampering 9 detection generates an LP security violation
  using ET9D = ftl::mmio::Field<1, 6, eET9D, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // External Tampering 10 Detected
  using ET10D = ftl::mmio::Field<1, 7, eET10D, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct LPTDSR_fields_

struct LPTDSR : ftl::mmio::Register<
    0x40C900A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTDSR_fields_::ET3D,
    LPTDSR_fields_::ET4D,
    LPTDSR_fields_::ET5D,
    LPTDSR_fields_::ET6D,
    LPTDSR_fields_::ET7D,
    LPTDSR_fields_::ET8D,
    LPTDSR_fields_::ET9D,
    LPTDSR_fields_::ET10D,
    ftl::mmio::Reserved<24, 8>> {
  using eET3D = LPTDSR_fields_::eET3D;
  using eET4D = LPTDSR_fields_::eET4D;
  using eET5D = LPTDSR_fields_::eET5D;
  using eET6D = LPTDSR_fields_::eET6D;
  using eET7D = LPTDSR_fields_::eET7D;
  using eET8D = LPTDSR_fields_::eET8D;
  using eET9D = LPTDSR_fields_::eET9D;
  using eET10D = LPTDSR_fields_::eET10D;
  using ET3D = LPTDSR_fields_::ET3D;
  using ET4D = LPTDSR_fields_::ET4D;
  using ET5D = LPTDSR_fields_::ET5D;
  using ET6D = LPTDSR_fields_::ET6D;
  using ET7D = LPTDSR_fields_::ET7D;
  using ET8D = LPTDSR_fields_::ET8D;
  using ET9D = LPTDSR_fields_::ET9D;
  using ET10D = LPTDSR_fields_::ET10D;
};

// SNVS_LP Tamper Glitch Filter 1 Configuration Register
struct LPTGF1CR_fields_ {
  enum class eETGF3_EN : std::uint32_t {
    // External tamper glitch filter 3 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 3 is enabled.
    eENABLED = 1,
  };

  enum class eETGF4_EN : std::uint32_t {
    // External tamper glitch filter 4 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 4 is enabled.
    eENABLED = 1,
  };

  enum class eETGF5_EN : std::uint32_t {
    // External tamper glitch filter 5 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 5 is enabled.
    eENABLED = 1,
  };

  enum class eETGF6_EN : std::uint32_t {
    // External tamper glitch filter 6 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 6 is enabled.
    eENABLED = 1,
  };

  // External Tamper Glitch Filter 3 Configures the length of the digital glitch filter for the external tamper 3 pin between 128 and 32640 SRTC clock cycles
  using ETGF3 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 3 Enable When set, enables the external tamper glitch filter 3.
  using ETGF3_EN = ftl::mmio::Field<1, 7, eETGF3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 4 Configures the length of the digital glitch filter for the external tamper 4 pin between 128 and 32640 SRTC clock cycles
  using ETGF4 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 4 Enable When set, enables the external tamper glitch filter 4.
  using ETGF4_EN = ftl::mmio::Field<1, 15, eETGF4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 5 Configures the length of the digital glitch filter for the external tamper 5 pin between 128 and 32640 SRTC clock cycles
  using ETGF5 = ftl::mmio::Field<7, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 5 Enable When set, enables the external tamper glitch filter 5.
  using ETGF5_EN = ftl::mmio::Field<1, 23, eETGF5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 6 Configures the length of the digital glitch filter for the external tamper 6 pin between 128 and 32640 SRTC clock cycles
  using ETGF6 = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 6 Enable When set, enables the external tamper glitch filter 6.
  using ETGF6_EN = ftl::mmio::Field<1, 31, eETGF6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTGF1CR_fields_

struct LPTGF1CR : ftl::mmio::Register<
    0x40C900A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTGF1CR_fields_::ETGF3,
    LPTGF1CR_fields_::ETGF3_EN,
    LPTGF1CR_fields_::ETGF4,
    LPTGF1CR_fields_::ETGF4_EN,
    LPTGF1CR_fields_::ETGF5,
    LPTGF1CR_fields_::ETGF5_EN,
    LPTGF1CR_fields_::ETGF6,
    LPTGF1CR_fields_::ETGF6_EN> {
  using eETGF3_EN = LPTGF1CR_fields_::eETGF3_EN;
  using eETGF4_EN = LPTGF1CR_fields_::eETGF4_EN;
  using eETGF5_EN = LPTGF1CR_fields_::eETGF5_EN;
  using eETGF6_EN = LPTGF1CR_fields_::eETGF6_EN;
  using ETGF3 = LPTGF1CR_fields_::ETGF3;
  using ETGF3_EN = LPTGF1CR_fields_::ETGF3_EN;
  using ETGF4 = LPTGF1CR_fields_::ETGF4;
  using ETGF4_EN = LPTGF1CR_fields_::ETGF4_EN;
  using ETGF5 = LPTGF1CR_fields_::ETGF5;
  using ETGF5_EN = LPTGF1CR_fields_::ETGF5_EN;
  using ETGF6 = LPTGF1CR_fields_::ETGF6;
  using ETGF6_EN = LPTGF1CR_fields_::ETGF6_EN;
};

// SNVS_LP Tamper Glitch Filter 2 Configuration Register
struct LPTGF2CR_fields_ {
  enum class eETGF7_EN : std::uint32_t {
    // External tamper glitch filter 7 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 7 is enabled.
    eENABLED = 1,
  };

  enum class eETGF8_EN : std::uint32_t {
    // External tamper glitch filter 8 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 8 is enabled.
    eENABLED = 1,
  };

  enum class eETGF9_EN : std::uint32_t {
    // External tamper glitch filter 9 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 9 is enabled.
    eENABLED = 1,
  };

  enum class eETGF10_EN : std::uint32_t {
    // External tamper glitch filter 10 is bypassed.
    eBYPASSED = 0,
    // External tamper glitch filter 10 is enabled.
    eENABLED = 1,
  };

  // External Tamper Glitch Filter 7 Configures the length of the digital glitch filter for the external tamper 7 pin between 128 and 32640 SRTC clock cycles
  using ETGF7 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 7 Enable When set, enables the external tamper glitch filter 7.
  using ETGF7_EN = ftl::mmio::Field<1, 7, eETGF7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 8 Configures the length of the digital glitch filter for the external tamper 8 pin between 128 and 32640 SRTC clock cycles
  using ETGF8 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 8 Enable When set, enables the external tamper glitch filter 8.
  using ETGF8_EN = ftl::mmio::Field<1, 15, eETGF8_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 9 Configures the length of the digital glitch filter for the external tamper 9 pin between 128 and 32640 SRTC clock cycles
  using ETGF9 = ftl::mmio::Field<7, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 9 Enable When set, enables the external tamper glitch filter 9.
  using ETGF9_EN = ftl::mmio::Field<1, 23, eETGF9_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 10 Configures the length of the digital glitch filter for the external tamper 10 pin between 128 and 32640 SRTC clock cycles
  using ETGF10 = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper Glitch Filter 10 Enable When set, enables the external tamper glitch filter 10.
  using ETGF10_EN = ftl::mmio::Field<1, 31, eETGF10_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPTGF2CR_fields_

struct LPTGF2CR : ftl::mmio::Register<
    0x40C900ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPTGF2CR_fields_::ETGF7,
    LPTGF2CR_fields_::ETGF7_EN,
    LPTGF2CR_fields_::ETGF8,
    LPTGF2CR_fields_::ETGF8_EN,
    LPTGF2CR_fields_::ETGF9,
    LPTGF2CR_fields_::ETGF9_EN,
    LPTGF2CR_fields_::ETGF10,
    LPTGF2CR_fields_::ETGF10_EN> {
  using eETGF7_EN = LPTGF2CR_fields_::eETGF7_EN;
  using eETGF8_EN = LPTGF2CR_fields_::eETGF8_EN;
  using eETGF9_EN = LPTGF2CR_fields_::eETGF9_EN;
  using eETGF10_EN = LPTGF2CR_fields_::eETGF10_EN;
  using ETGF7 = LPTGF2CR_fields_::ETGF7;
  using ETGF7_EN = LPTGF2CR_fields_::ETGF7_EN;
  using ETGF8 = LPTGF2CR_fields_::ETGF8;
  using ETGF8_EN = LPTGF2CR_fields_::ETGF8_EN;
  using ETGF9 = LPTGF2CR_fields_::ETGF9;
  using ETGF9_EN = LPTGF2CR_fields_::ETGF9_EN;
  using ETGF10 = LPTGF2CR_fields_::ETGF10;
  using ETGF10_EN = LPTGF2CR_fields_::ETGF10_EN;
};

// SNVS_LP Active Tamper 1 Configuration Register
struct LPAT1CR_fields_ {
  // Active Tamper 1 Initial Seed Default Seed is 1111h.
  using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  // Active Tamper 1 Polynomial Default Polynomial is 8400h.
  using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct LPAT1CR_fields_

struct LPAT1CR : ftl::mmio::Register<
    0x40C900C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    LPAT1CR_fields_::Seed,
    LPAT1CR_fields_::Polynomial> {
  using Seed = LPAT1CR_fields_::Seed;
  using Polynomial = LPAT1CR_fields_::Polynomial;
};

// SNVS_LP Active Tamper 2 Configuration Register
struct LPAT2CR_fields_ {
  // Active Tamper 2 Initial Seed Default Seed is 2222h.
  using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  // Active Tamper 2 Polynomial Default Polynomial is 9C00h.
  using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct LPAT2CR_fields_

struct LPAT2CR : ftl::mmio::Register<
    0x40C900C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    LPAT2CR_fields_::Seed,
    LPAT2CR_fields_::Polynomial> {
  using Seed = LPAT2CR_fields_::Seed;
  using Polynomial = LPAT2CR_fields_::Polynomial;
};

// SNVS_LP Active Tamper 3 Configuration Register
struct LPAT3CR_fields_ {
  // Active Tamper 3 Initial Seed Default Seed is 3333h.
  using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  // Active Tamper 3 Polynomial Default Polynomial is CA00h.
  using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct LPAT3CR_fields_

struct LPAT3CR : ftl::mmio::Register<
    0x40C900C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    LPAT3CR_fields_::Seed,
    LPAT3CR_fields_::Polynomial> {
  using Seed = LPAT3CR_fields_::Seed;
  using Polynomial = LPAT3CR_fields_::Polynomial;
};

// SNVS_LP Active Tamper 4 Configuration Register
struct LPAT4CR_fields_ {
  // Active Tamper 4 Initial Seed Default Seed is 4444h.
  using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  // Active Tamper 4 Polynomial Default Polynomial is 8580h.
  using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct LPAT4CR_fields_

struct LPAT4CR : ftl::mmio::Register<
    0x40C900CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    LPAT4CR_fields_::Seed,
    LPAT4CR_fields_::Polynomial> {
  using Seed = LPAT4CR_fields_::Seed;
  using Polynomial = LPAT4CR_fields_::Polynomial;
};

// SNVS_LP Active Tamper 5 Configuration Register
struct LPAT5CR_fields_ {
  // Active Tamper 5 Initial Seed Default Seed is 5555h.
  using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  // Active Tamper 5 Polynomial Default Polynomial is A840h.
  using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
};  // struct LPAT5CR_fields_

struct LPAT5CR : ftl::mmio::Register<
    0x40C900D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::WO,
    LPAT5CR_fields_::Seed,
    LPAT5CR_fields_::Polynomial> {
  using Seed = LPAT5CR_fields_::Seed;
  using Polynomial = LPAT5CR_fields_::Polynomial;
};

// SNVS_LP Active Tamper Control Register
struct LPATCTLR_fields_ {
  enum class eAT1_EN : std::uint32_t {
    // Active Tamper 1 is disabled.
    eDISABLED = 0,
    // Active Tamper 1 is enabled.
    eENABLED = 1,
  };

  enum class eAT2_EN : std::uint32_t {
    // Active Tamper 2 is disabled.
    eDISABLED = 0,
    // Active Tamper 2 is enabled.
    eENABLED = 1,
  };

  enum class eAT3_EN : std::uint32_t {
    // Active Tamper 3 is disabled.
    eDISABLED = 0,
    // Active Tamper 3 is enabled.
    eENABLED = 1,
  };

  enum class eAT4_EN : std::uint32_t {
    // Active Tamper 4 is disabled.
    eDISABLED = 0,
    // Active Tamper 4 is enabled.
    eENABLED = 1,
  };

  enum class eAT5_EN : std::uint32_t {
    // Active Tamper 5 is disabled.
    eDISABLED = 0,
    // Active Tamper 5 is enabled.
    eENABLED = 1,
  };

  enum class eAT1_PAD_EN : std::uint32_t {
    // Active Tamper 1 is disabled.
    eDISABLED = 0,
    // Active Tamper 1 is enabled.
    eENABLED = 1,
  };

  enum class eAT2_PAD_EN : std::uint32_t {
    // Active Tamper 2 is disabled.
    eDISABLED = 0,
    // Active Tamper 2 is enabled.
    eENABLED = 1,
  };

  enum class eAT3_PAD_EN : std::uint32_t {
    // Active Tamper 3 is disabled.
    eDISABLED = 0,
    // Active Tamper 3 is enabled
    eENABLED = 1,
  };

  enum class eAT4_PAD_EN : std::uint32_t {
    // Active Tamper 4 is disabled.
    eDISABLED = 0,
    // Active Tamper 4 is enabled.
    eENABLED = 1,
  };

  enum class eAT5_PAD_EN : std::uint32_t {
    // Active Tamper 5 is disabled.
    eDISABLED = 0,
    // Active Tamper 5 is enabled.
    eENABLED = 1,
  };

  // Active Tamper 1 Enable When set, enables the Active Tamper 1 LFSR.
  using AT1_EN = ftl::mmio::Field<1, 0, eAT1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 2 Enable When set, enables the Active Tamper 2 LFSR.
  using AT2_EN = ftl::mmio::Field<1, 1, eAT2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 3 Enable When set, enables the Active Tamper 3 LFSR.
  using AT3_EN = ftl::mmio::Field<1, 2, eAT3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 4 Enable When set, enables the Active Tamper 4 LFSR.
  using AT4_EN = ftl::mmio::Field<1, 3, eAT4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 5 Enable When set, enables the Active Tamper 5 LFSR.
  using AT5_EN = ftl::mmio::Field<1, 4, eAT5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 1 Pad Out Enable When set, enables the Active Tamper 1 external pad.
  using AT1_PAD_EN = ftl::mmio::Field<1, 16, eAT1_PAD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 2 Pad Out Enable When set, enables the Active Tamper 2 external pad.
  using AT2_PAD_EN = ftl::mmio::Field<1, 17, eAT2_PAD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 3 Pad Out Enable When set, enables the Active Tamper 3 external pad.
  using AT3_PAD_EN = ftl::mmio::Field<1, 18, eAT3_PAD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 4 Pad Out Enable When set, enables the Active Tamper 4 external pad.
  using AT4_PAD_EN = ftl::mmio::Field<1, 19, eAT4_PAD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 5 Pad Out Enable When set, enables the Active Tamper 5 external pad.
  using AT5_PAD_EN = ftl::mmio::Field<1, 20, eAT5_PAD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPATCTLR_fields_

struct LPATCTLR : ftl::mmio::Register<
    0x40C900E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPATCTLR_fields_::AT1_EN,
    LPATCTLR_fields_::AT2_EN,
    LPATCTLR_fields_::AT3_EN,
    LPATCTLR_fields_::AT4_EN,
    LPATCTLR_fields_::AT5_EN,
    ftl::mmio::Reserved<11, 5>,
    LPATCTLR_fields_::AT1_PAD_EN,
    LPATCTLR_fields_::AT2_PAD_EN,
    LPATCTLR_fields_::AT3_PAD_EN,
    LPATCTLR_fields_::AT4_PAD_EN,
    LPATCTLR_fields_::AT5_PAD_EN,
    ftl::mmio::Reserved<11, 21>> {
  using eAT1_EN = LPATCTLR_fields_::eAT1_EN;
  using eAT2_EN = LPATCTLR_fields_::eAT2_EN;
  using eAT3_EN = LPATCTLR_fields_::eAT3_EN;
  using eAT4_EN = LPATCTLR_fields_::eAT4_EN;
  using eAT5_EN = LPATCTLR_fields_::eAT5_EN;
  using eAT1_PAD_EN = LPATCTLR_fields_::eAT1_PAD_EN;
  using eAT2_PAD_EN = LPATCTLR_fields_::eAT2_PAD_EN;
  using eAT3_PAD_EN = LPATCTLR_fields_::eAT3_PAD_EN;
  using eAT4_PAD_EN = LPATCTLR_fields_::eAT4_PAD_EN;
  using eAT5_PAD_EN = LPATCTLR_fields_::eAT5_PAD_EN;
  using AT1_EN = LPATCTLR_fields_::AT1_EN;
  using AT2_EN = LPATCTLR_fields_::AT2_EN;
  using AT3_EN = LPATCTLR_fields_::AT3_EN;
  using AT4_EN = LPATCTLR_fields_::AT4_EN;
  using AT5_EN = LPATCTLR_fields_::AT5_EN;
  using AT1_PAD_EN = LPATCTLR_fields_::AT1_PAD_EN;
  using AT2_PAD_EN = LPATCTLR_fields_::AT2_PAD_EN;
  using AT3_PAD_EN = LPATCTLR_fields_::AT3_PAD_EN;
  using AT4_PAD_EN = LPATCTLR_fields_::AT4_PAD_EN;
  using AT5_PAD_EN = LPATCTLR_fields_::AT5_PAD_EN;
};

// SNVS_LP Active Tamper Clock Control Register
struct LPATCLKR_fields_ {
  // Active Tamper 1 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
  using AT1_CLK_CTL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 2 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
  using AT2_CLK_CTL = ftl::mmio::Field<2, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 3 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
  using AT3_CLK_CTL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 4 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
  using AT4_CLK_CTL = ftl::mmio::Field<2, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active Tamper 5 Clock Control 00: 16hz 01: 8hz 10: 4hz 11: 2hz
  using AT5_CLK_CTL = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPATCLKR_fields_

struct LPATCLKR : ftl::mmio::Register<
    0x40C900E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPATCLKR_fields_::AT1_CLK_CTL,
    ftl::mmio::Reserved<2, 2>,
    LPATCLKR_fields_::AT2_CLK_CTL,
    ftl::mmio::Reserved<2, 6>,
    LPATCLKR_fields_::AT3_CLK_CTL,
    ftl::mmio::Reserved<2, 10>,
    LPATCLKR_fields_::AT4_CLK_CTL,
    ftl::mmio::Reserved<2, 14>,
    LPATCLKR_fields_::AT5_CLK_CTL,
    ftl::mmio::Reserved<14, 18>> {
  using AT1_CLK_CTL = LPATCLKR_fields_::AT1_CLK_CTL;
  using AT2_CLK_CTL = LPATCLKR_fields_::AT2_CLK_CTL;
  using AT3_CLK_CTL = LPATCLKR_fields_::AT3_CLK_CTL;
  using AT4_CLK_CTL = LPATCLKR_fields_::AT4_CLK_CTL;
  using AT5_CLK_CTL = LPATCLKR_fields_::AT5_CLK_CTL;
};

// SNVS_LP Active Tamper Routing Control 1 Register
struct LPATRC1R_fields_ {
  // External Tamper 1 Routing Control Any undefined selection will be routed to passive
  using ET1RCTL = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 2 Routing Control Any undefined selection will be routed to passive
  using ET2RCTL = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 3 Routing Control Any undefined selection will be routed to passive
  using ET3RCTL = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 4 Routing Control Any undefined selection will be routed to passive
  using ET4RCTL = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 5 Routing Control Any undefined selection will be routed to passive
  using ET5RCTL = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 6 Routing Control Any undefined selection will be routed to passive
  using ET6RCTL = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 7 Routing Control Any undefined selection will be routed to passive
  using ET7RCTL = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 8 Routing Control Any undefined selection will be routed to passive
  using ET8RCTL = ftl::mmio::Field<3, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPATRC1R_fields_

struct LPATRC1R : ftl::mmio::Register<
    0x40C900E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPATRC1R_fields_::ET1RCTL,
    ftl::mmio::Reserved<1, 3>,
    LPATRC1R_fields_::ET2RCTL,
    ftl::mmio::Reserved<1, 7>,
    LPATRC1R_fields_::ET3RCTL,
    ftl::mmio::Reserved<1, 11>,
    LPATRC1R_fields_::ET4RCTL,
    ftl::mmio::Reserved<1, 15>,
    LPATRC1R_fields_::ET5RCTL,
    ftl::mmio::Reserved<1, 19>,
    LPATRC1R_fields_::ET6RCTL,
    ftl::mmio::Reserved<1, 23>,
    LPATRC1R_fields_::ET7RCTL,
    ftl::mmio::Reserved<1, 27>,
    LPATRC1R_fields_::ET8RCTL,
    ftl::mmio::Reserved<1, 31>> {
  using ET1RCTL = LPATRC1R_fields_::ET1RCTL;
  using ET2RCTL = LPATRC1R_fields_::ET2RCTL;
  using ET3RCTL = LPATRC1R_fields_::ET3RCTL;
  using ET4RCTL = LPATRC1R_fields_::ET4RCTL;
  using ET5RCTL = LPATRC1R_fields_::ET5RCTL;
  using ET6RCTL = LPATRC1R_fields_::ET6RCTL;
  using ET7RCTL = LPATRC1R_fields_::ET7RCTL;
  using ET8RCTL = LPATRC1R_fields_::ET8RCTL;
};

// SNVS_LP Active Tamper Routing Control 2 Register
struct LPATRC2R_fields_ {
  // External Tamper 9 Routing Control Any undefined selection will be routed to passive
  using ET9RCTL = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // External Tamper 10 Routing Control Any undefined selection will be routed to passive
  using ET10RCTL = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPATRC2R_fields_

struct LPATRC2R : ftl::mmio::Register<
    0x40C900ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPATRC2R_fields_::ET9RCTL,
    ftl::mmio::Reserved<1, 3>,
    LPATRC2R_fields_::ET10RCTL,
    ftl::mmio::Reserved<25, 7>> {
  using ET9RCTL = LPATRC2R_fields_::ET9RCTL;
  using ET10RCTL = LPATRC2R_fields_::ET10RCTL;
};

// SNVS_LP General Purpose Registers 0 .. 3
struct LPGPR_fields_ {
  // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
  using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPGPR_fields_

template<std::uint32_t Index>
struct LPGPR : ftl::mmio::Register<
    0x40C90100u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPGPR_fields_::GPR> {
  static_assert(Index < 4u, "LPGPR: Index out of range");
  using GPR = LPGPR_fields_::GPR;
};

// SNVS_HP Version ID Register 1
struct HPVIDR1_fields_ {
  // SNVS block minor version number
  using MINOR_REV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // SNVS block major version number
  using MAJOR_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // SNVS block ID
  using IP_ID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HPVIDR1_fields_

struct HPVIDR1 : ftl::mmio::Register<
    0x40C90BF8u,
    std::uint32_t,
    0x003E0103u,
    ftl::mmio::RO,
    HPVIDR1_fields_::MINOR_REV,
    HPVIDR1_fields_::MAJOR_REV,
    HPVIDR1_fields_::IP_ID> {
  using MINOR_REV = HPVIDR1_fields_::MINOR_REV;
  using MAJOR_REV = HPVIDR1_fields_::MAJOR_REV;
  using IP_ID = HPVIDR1_fields_::IP_ID;
};

// SNVS_HP Version ID Register 2
struct HPVIDR2_fields_ {
  // SNVS ECO Revision The engineering change order revision number for this release of SNVS.
  using ECO_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // IP Era 00h - Era 1 or 2 03h - Era 3 04h - Era 4 05h - Era 5 06h - Era 6
  using IP_ERA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HPVIDR2_fields_

struct HPVIDR2 : ftl::mmio::Register<
    0x40C90BFCu,
    std::uint32_t,
    0x06000500u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<8, 0>,
    HPVIDR2_fields_::ECO_REV,
    ftl::mmio::Reserved<8, 16>,
    HPVIDR2_fields_::IP_ERA> {
  using ECO_REV = HPVIDR2_fields_::ECO_REV;
  using IP_ERA = HPVIDR2_fields_::IP_ERA;
};

}  // namespace regs::snvs