#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Snvs {
  // SNVS_HP Lock Register
  struct HplrFields {
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
  };  // struct HplrFields

  struct HPLR : ftl::mmio::Register<
      0x40C90000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HplrFields::ZMK_WSL,
      HplrFields::ZMK_RSL,
      HplrFields::SRTC_SL,
      HplrFields::LPCALB_SL,
      HplrFields::MC_SL,
      HplrFields::GPR_SL,
      HplrFields::LPSVCR_SL,
      HplrFields::LPTGFCR_SL,
      HplrFields::LPSECR_SL,
      HplrFields::MKS_SL,
      ftl::mmio::Reserved<6, 10>,
      HplrFields::HPSVCR_L,
      HplrFields::HPSICR_L,
      HplrFields::HAC_L,
      ftl::mmio::Reserved<5, 19>,
      HplrFields::AT1_SL,
      HplrFields::AT2_SL,
      HplrFields::AT3_SL,
      HplrFields::AT4_SL,
      HplrFields::AT5_SL,
      ftl::mmio::Reserved<3, 29>> {
    using eZMK_WSL = HplrFields::eZMK_WSL;
    using eZMK_RSL = HplrFields::eZMK_RSL;
    using eSRTC_SL = HplrFields::eSRTC_SL;
    using eLPCALB_SL = HplrFields::eLPCALB_SL;
    using eMC_SL = HplrFields::eMC_SL;
    using eGPR_SL = HplrFields::eGPR_SL;
    using eLPSVCR_SL = HplrFields::eLPSVCR_SL;
    using eLPTGFCR_SL = HplrFields::eLPTGFCR_SL;
    using eLPSECR_SL = HplrFields::eLPSECR_SL;
    using eMKS_SL = HplrFields::eMKS_SL;
    using eHPSVCR_L = HplrFields::eHPSVCR_L;
    using eHPSICR_L = HplrFields::eHPSICR_L;
    using eHAC_L = HplrFields::eHAC_L;
    using eAT1_SL = HplrFields::eAT1_SL;
    using eAT2_SL = HplrFields::eAT2_SL;
    using eAT3_SL = HplrFields::eAT3_SL;
    using eAT4_SL = HplrFields::eAT4_SL;
    using eAT5_SL = HplrFields::eAT5_SL;
    using ZMK_WSL = HplrFields::ZMK_WSL;
    using ZMK_RSL = HplrFields::ZMK_RSL;
    using SRTC_SL = HplrFields::SRTC_SL;
    using LPCALB_SL = HplrFields::LPCALB_SL;
    using MC_SL = HplrFields::MC_SL;
    using GPR_SL = HplrFields::GPR_SL;
    using LPSVCR_SL = HplrFields::LPSVCR_SL;
    using LPTGFCR_SL = HplrFields::LPTGFCR_SL;
    using LPSECR_SL = HplrFields::LPSECR_SL;
    using MKS_SL = HplrFields::MKS_SL;
    using HPSVCR_L = HplrFields::HPSVCR_L;
    using HPSICR_L = HplrFields::HPSICR_L;
    using HAC_L = HplrFields::HAC_L;
    using AT1_SL = HplrFields::AT1_SL;
    using AT2_SL = HplrFields::AT2_SL;
    using AT3_SL = HplrFields::AT3_SL;
    using AT4_SL = HplrFields::AT4_SL;
    using AT5_SL = HplrFields::AT5_SL;
  };

  // SNVS_HP Command Register
  struct HpcomrFields {
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
  };  // struct HpcomrFields

  struct HPCOMR : ftl::mmio::Register<
      0x40C90004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HpcomrFields::SSM_ST,
      HpcomrFields::SSM_ST_DIS,
      HpcomrFields::SSM_SFNS_DIS,
      ftl::mmio::Reserved<1, 3>,
      HpcomrFields::LP_SWR,
      HpcomrFields::LP_SWR_DIS,
      ftl::mmio::Reserved<2, 6>,
      HpcomrFields::SW_SV,
      HpcomrFields::SW_FSV,
      HpcomrFields::SW_LPSV,
      ftl::mmio::Reserved<1, 11>,
      HpcomrFields::PROG_ZMK,
      HpcomrFields::MKS_EN,
      ftl::mmio::Reserved<2, 14>,
      HpcomrFields::HAC_EN,
      HpcomrFields::HAC_LOAD,
      HpcomrFields::HAC_CLEAR,
      HpcomrFields::HAC_STOP,
      ftl::mmio::Reserved<11, 20>,
      HpcomrFields::NPSWA_EN> {
    using eSSM_ST_DIS = HpcomrFields::eSSM_ST_DIS;
    using eSSM_SFNS_DIS = HpcomrFields::eSSM_SFNS_DIS;
    using eLP_SWR = HpcomrFields::eLP_SWR;
    using eLP_SWR_DIS = HpcomrFields::eLP_SWR_DIS;
    using ePROG_ZMK = HpcomrFields::ePROG_ZMK;
    using eMKS_EN = HpcomrFields::eMKS_EN;
    using eHAC_EN = HpcomrFields::eHAC_EN;
    using eHAC_LOAD = HpcomrFields::eHAC_LOAD;
    using eHAC_CLEAR = HpcomrFields::eHAC_CLEAR;
    using SSM_ST = HpcomrFields::SSM_ST;
    using SSM_ST_DIS = HpcomrFields::SSM_ST_DIS;
    using SSM_SFNS_DIS = HpcomrFields::SSM_SFNS_DIS;
    using LP_SWR = HpcomrFields::LP_SWR;
    using LP_SWR_DIS = HpcomrFields::LP_SWR_DIS;
    using SW_SV = HpcomrFields::SW_SV;
    using SW_FSV = HpcomrFields::SW_FSV;
    using SW_LPSV = HpcomrFields::SW_LPSV;
    using PROG_ZMK = HpcomrFields::PROG_ZMK;
    using MKS_EN = HpcomrFields::MKS_EN;
    using HAC_EN = HpcomrFields::HAC_EN;
    using HAC_LOAD = HpcomrFields::HAC_LOAD;
    using HAC_CLEAR = HpcomrFields::HAC_CLEAR;
    using HAC_STOP = HpcomrFields::HAC_STOP;
    using NPSWA_EN = HpcomrFields::NPSWA_EN;
  };

  // SNVS_HP Control Register
  struct HpcrFields {
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
  };  // struct HpcrFields

  struct HPCR : ftl::mmio::Register<
      0x40C90008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HpcrFields::RTC_EN,
      HpcrFields::HPTA_EN,
      HpcrFields::DIS_PI,
      HpcrFields::PI_EN,
      HpcrFields::PI_FREQ,
      HpcrFields::HPCALB_EN,
      ftl::mmio::Reserved<1, 9>,
      HpcrFields::HPCALB_VAL,
      ftl::mmio::Reserved<1, 15>,
      HpcrFields::HP_TS,
      ftl::mmio::Reserved<7, 17>,
      HpcrFields::BTN_CONFIG,
      HpcrFields::BTN_MASK,
      ftl::mmio::Reserved<4, 28>> {
    using eRTC_EN = HpcrFields::eRTC_EN;
    using eHPTA_EN = HpcrFields::eHPTA_EN;
    using eDIS_PI = HpcrFields::eDIS_PI;
    using ePI_EN = HpcrFields::ePI_EN;
    using ePI_FREQ = HpcrFields::ePI_FREQ;
    using eHPCALB_EN = HpcrFields::eHPCALB_EN;
    using eHPCALB_VAL = HpcrFields::eHPCALB_VAL;
    using eHP_TS = HpcrFields::eHP_TS;
    using RTC_EN = HpcrFields::RTC_EN;
    using HPTA_EN = HpcrFields::HPTA_EN;
    using DIS_PI = HpcrFields::DIS_PI;
    using PI_EN = HpcrFields::PI_EN;
    using PI_FREQ = HpcrFields::PI_FREQ;
    using HPCALB_EN = HpcrFields::HPCALB_EN;
    using HPCALB_VAL = HpcrFields::HPCALB_VAL;
    using HP_TS = HpcrFields::HP_TS;
    using BTN_CONFIG = HpcrFields::BTN_CONFIG;
    using BTN_MASK = HpcrFields::BTN_MASK;
  };

  // SNVS_HP Security Interrupt Control Register
  struct HpsicrFields {
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
  };  // struct HpsicrFields

  struct HPSICR : ftl::mmio::Register<
      0x40C9000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HpsicrFields::CAAM_EN,
      HpsicrFields::JTAGC_EN,
      HpsicrFields::WDOG2_EN,
      ftl::mmio::Reserved<1, 3>,
      HpsicrFields::SRC_EN,
      HpsicrFields::OCOTP_EN,
      ftl::mmio::Reserved<25, 6>,
      HpsicrFields::LPSVI_EN> {
    using eCAAM_EN = HpsicrFields::eCAAM_EN;
    using eJTAGC_EN = HpsicrFields::eJTAGC_EN;
    using eWDOG2_EN = HpsicrFields::eWDOG2_EN;
    using eSRC_EN = HpsicrFields::eSRC_EN;
    using eOCOTP_EN = HpsicrFields::eOCOTP_EN;
    using eLPSVI_EN = HpsicrFields::eLPSVI_EN;
    using CAAM_EN = HpsicrFields::CAAM_EN;
    using JTAGC_EN = HpsicrFields::JTAGC_EN;
    using WDOG2_EN = HpsicrFields::WDOG2_EN;
    using SRC_EN = HpsicrFields::SRC_EN;
    using OCOTP_EN = HpsicrFields::OCOTP_EN;
    using LPSVI_EN = HpsicrFields::LPSVI_EN;
  };

  // SNVS_HP Security Violation Control Register
  struct HpsvcrFields {
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
  };  // struct HpsvcrFields

  struct HPSVCR : ftl::mmio::Register<
      0x40C90010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HpsvcrFields::CAAM_CFG,
      HpsvcrFields::JTAGC_CFG,
      HpsvcrFields::WDOG2_CFG,
      ftl::mmio::Reserved<1, 3>,
      HpsvcrFields::SRC_CFG,
      HpsvcrFields::OCOTP_CFG,
      ftl::mmio::Reserved<23, 7>,
      HpsvcrFields::LPSV_CFG> {
    using eCAAM_CFG = HpsvcrFields::eCAAM_CFG;
    using eJTAGC_CFG = HpsvcrFields::eJTAGC_CFG;
    using eWDOG2_CFG = HpsvcrFields::eWDOG2_CFG;
    using eSRC_CFG = HpsvcrFields::eSRC_CFG;
    using eOCOTP_CFG = HpsvcrFields::eOCOTP_CFG;
    using eLPSV_CFG = HpsvcrFields::eLPSV_CFG;
    using CAAM_CFG = HpsvcrFields::CAAM_CFG;
    using JTAGC_CFG = HpsvcrFields::JTAGC_CFG;
    using WDOG2_CFG = HpsvcrFields::WDOG2_CFG;
    using SRC_CFG = HpsvcrFields::SRC_CFG;
    using OCOTP_CFG = HpsvcrFields::OCOTP_CFG;
    using LPSV_CFG = HpsvcrFields::LPSV_CFG;
  };

  // SNVS_HP Status Register
  struct HpsrFields {
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
  };  // struct HpsrFields

  struct HPSR : ftl::mmio::Register<
      0x40C90014u,
      std::uint32_t,
      0x8000B000u,
      ftl::mmio::RW,
      HpsrFields::HPTA,
      HpsrFields::PI,
      ftl::mmio::Reserved<2, 2>,
      HpsrFields::LPDIS,
      ftl::mmio::Reserved<1, 5>,
      HpsrFields::BTN,
      HpsrFields::BI,
      HpsrFields::SSM_STATE,
      HpsrFields::SYS_SECURITY_CFG,
      HpsrFields::SYS_SECURE_BOOT,
      ftl::mmio::Reserved<11, 16>,
      HpsrFields::OTPMK_ZERO,
      ftl::mmio::Reserved<3, 28>,
      HpsrFields::ZMK_ZERO> {
    using eHPTA = HpsrFields::eHPTA;
    using ePI = HpsrFields::ePI;
    using eSSM_STATE = HpsrFields::eSSM_STATE;
    using eSYS_SECURITY_CFG = HpsrFields::eSYS_SECURITY_CFG;
    using eOTPMK_ZERO = HpsrFields::eOTPMK_ZERO;
    using eZMK_ZERO = HpsrFields::eZMK_ZERO;
    using HPTA = HpsrFields::HPTA;
    using PI = HpsrFields::PI;
    using LPDIS = HpsrFields::LPDIS;
    using BTN = HpsrFields::BTN;
    using BI = HpsrFields::BI;
    using SSM_STATE = HpsrFields::SSM_STATE;
    using SYS_SECURITY_CFG = HpsrFields::SYS_SECURITY_CFG;
    using SYS_SECURE_BOOT = HpsrFields::SYS_SECURE_BOOT;
    using OTPMK_ZERO = HpsrFields::OTPMK_ZERO;
    using ZMK_ZERO = HpsrFields::ZMK_ZERO;
  };

  // SNVS_HP Security Violation Status Register
  struct HpsvsrFields {
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
  };  // struct HpsvsrFields

  struct HPSVSR : ftl::mmio::Register<
      0x40C90018u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      HpsvsrFields::CAAM,
      HpsvsrFields::JTAGC,
      HpsvsrFields::WDOG2,
      ftl::mmio::Reserved<1, 3>,
      HpsvsrFields::SRC,
      HpsvsrFields::OCOTP,
      ftl::mmio::Reserved<7, 6>,
      HpsvsrFields::SW_SV,
      HpsvsrFields::SW_FSV,
      HpsvsrFields::SW_LPSV,
      HpsvsrFields::ZMK_SYNDROME,
      ftl::mmio::Reserved<2, 25>,
      HpsvsrFields::ZMK_ECC_FAIL,
      ftl::mmio::Reserved<3, 28>,
      HpsvsrFields::LP_SEC_VIO> {
    using eCAAM = HpsvsrFields::eCAAM;
    using eJTAGC = HpsvsrFields::eJTAGC;
    using eWDOG2 = HpsvsrFields::eWDOG2;
    using eSRC = HpsvsrFields::eSRC;
    using eOCOTP = HpsvsrFields::eOCOTP;
    using eZMK_ECC_FAIL = HpsvsrFields::eZMK_ECC_FAIL;
    using CAAM = HpsvsrFields::CAAM;
    using JTAGC = HpsvsrFields::JTAGC;
    using WDOG2 = HpsvsrFields::WDOG2;
    using SRC = HpsvsrFields::SRC;
    using OCOTP = HpsvsrFields::OCOTP;
    using SW_SV = HpsvsrFields::SW_SV;
    using SW_FSV = HpsvsrFields::SW_FSV;
    using SW_LPSV = HpsvsrFields::SW_LPSV;
    using ZMK_SYNDROME = HpsvsrFields::ZMK_SYNDROME;
    using ZMK_ECC_FAIL = HpsvsrFields::ZMK_ECC_FAIL;
    using LP_SEC_VIO = HpsvsrFields::LP_SEC_VIO;
  };

  // SNVS_HP High Assurance Counter IV Register
  struct HphacivrFields {
    // High Assurance Counter Initial Value This register is used to set the starting count value to the high assurance counter
    using HAC_COUNTER_IV = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HphacivrFields

  struct HPHACIVR : ftl::mmio::Register<
      0x40C9001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HphacivrFields::HAC_COUNTER_IV> {
    using HAC_COUNTER_IV = HphacivrFields::HAC_COUNTER_IV;
  };

  // SNVS_HP High Assurance Counter Register
  struct HphacrFields {
    // High Assurance Counter When the HAC_EN bit is set and the SSM is in the soft fail state, this counter starts to count down with the system clock
    using HAC_COUNTER = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HphacrFields

  struct HPHACR : ftl::mmio::Register<
      0x40C90020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      HphacrFields::HAC_COUNTER> {
    using HAC_COUNTER = HphacrFields::HAC_COUNTER;
  };

  // SNVS_HP Real Time Counter MSB Register
  struct HprtcmrFields {
    // HP Real Time Counter The most-significant 15 bits of the RTC
    using RTC = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HprtcmrFields

  struct HPRTCMR : ftl::mmio::Register<
      0x40C90024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HprtcmrFields::RTC,
      ftl::mmio::Reserved<17, 15>> {
    using RTC = HprtcmrFields::RTC;
  };

  // SNVS_HP Real Time Counter LSB Register
  struct HprtclrFields {
    // HP Real Time Counter least-significant 32 bits
    using RTC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HprtclrFields

  struct HPRTCLR : ftl::mmio::Register<
      0x40C90028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HprtclrFields::RTC> {
    using RTC = HprtclrFields::RTC;
  };

  // SNVS_HP Time Alarm MSB Register
  struct HptamrFields {
    // HP Time Alarm, most-significant 15 bits
    using HPTA_MS = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HptamrFields

  struct HPTAMR : ftl::mmio::Register<
      0x40C9002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HptamrFields::HPTA_MS,
      ftl::mmio::Reserved<17, 15>> {
    using HPTA_MS = HptamrFields::HPTA_MS;
  };

  // SNVS_HP Time Alarm LSB Register
  struct HptalrFields {
    // HP Time Alarm, 32 least-significant bits
    using HPTA_LS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HptalrFields

  struct HPTALR : ftl::mmio::Register<
      0x40C90030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HptalrFields::HPTA_LS> {
    using HPTA_LS = HptalrFields::HPTA_LS;
  };

  // SNVS_LP Lock Register
  struct LplrFields {
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
  };  // struct LplrFields

  struct LPLR : ftl::mmio::Register<
      0x40C90034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LplrFields::ZMK_WHL,
      LplrFields::ZMK_RHL,
      LplrFields::SRTC_HL,
      LplrFields::LPCALB_HL,
      LplrFields::MC_HL,
      LplrFields::GPR_HL,
      LplrFields::LPSVCR_HL,
      LplrFields::LPTGFCR_HL,
      LplrFields::LPSECR_HL,
      LplrFields::MKS_HL,
      ftl::mmio::Reserved<14, 10>,
      LplrFields::AT1_HL,
      LplrFields::AT2_HL,
      LplrFields::AT3_HL,
      LplrFields::AT4_HL,
      LplrFields::AT5_HL,
      ftl::mmio::Reserved<3, 29>> {
    using eZMK_WHL = LplrFields::eZMK_WHL;
    using eZMK_RHL = LplrFields::eZMK_RHL;
    using eSRTC_HL = LplrFields::eSRTC_HL;
    using eLPCALB_HL = LplrFields::eLPCALB_HL;
    using eMC_HL = LplrFields::eMC_HL;
    using eGPR_HL = LplrFields::eGPR_HL;
    using eLPSVCR_HL = LplrFields::eLPSVCR_HL;
    using eLPTGFCR_HL = LplrFields::eLPTGFCR_HL;
    using eLPSECR_HL = LplrFields::eLPSECR_HL;
    using eMKS_HL = LplrFields::eMKS_HL;
    using eAT1_HL = LplrFields::eAT1_HL;
    using eAT2_HL = LplrFields::eAT2_HL;
    using eAT3_HL = LplrFields::eAT3_HL;
    using eAT4_HL = LplrFields::eAT4_HL;
    using eAT5_HL = LplrFields::eAT5_HL;
    using ZMK_WHL = LplrFields::ZMK_WHL;
    using ZMK_RHL = LplrFields::ZMK_RHL;
    using SRTC_HL = LplrFields::SRTC_HL;
    using LPCALB_HL = LplrFields::LPCALB_HL;
    using MC_HL = LplrFields::MC_HL;
    using GPR_HL = LplrFields::GPR_HL;
    using LPSVCR_HL = LplrFields::LPSVCR_HL;
    using LPTGFCR_HL = LplrFields::LPTGFCR_HL;
    using LPSECR_HL = LplrFields::LPSECR_HL;
    using MKS_HL = LplrFields::MKS_HL;
    using AT1_HL = LplrFields::AT1_HL;
    using AT2_HL = LplrFields::AT2_HL;
    using AT3_HL = LplrFields::AT3_HL;
    using AT4_HL = LplrFields::AT4_HL;
    using AT5_HL = LplrFields::AT5_HL;
  };

  // SNVS_LP Control Register
  struct LpcrFields {
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
  };  // struct LpcrFields

  struct LPCR : ftl::mmio::Register<
      0x40C90038u,
      std::uint32_t,
      0x00000020u,
      ftl::mmio::RW,
      LpcrFields::SRTC_ENV,
      LpcrFields::LPTA_EN,
      LpcrFields::MC_ENV,
      LpcrFields::LPWUI_EN,
      LpcrFields::SRTC_INV_EN,
      LpcrFields::DP_EN,
      LpcrFields::TOP,
      LpcrFields::LVD_EN,
      LpcrFields::LPCALB_EN,
      ftl::mmio::Reserved<1, 9>,
      LpcrFields::LPCALB_VAL,
      ftl::mmio::Reserved<1, 15>,
      LpcrFields::BTN_PRESS_TIME,
      LpcrFields::DEBOUNCE,
      LpcrFields::ON_TIME,
      LpcrFields::PK_EN,
      LpcrFields::PK_OVERRIDE,
      LpcrFields::GPR_Z_DIS,
      ftl::mmio::Reserved<7, 25>> {
    using eSRTC_ENV = LpcrFields::eSRTC_ENV;
    using eLPTA_EN = LpcrFields::eLPTA_EN;
    using eMC_ENV = LpcrFields::eMC_ENV;
    using eSRTC_INV_EN = LpcrFields::eSRTC_INV_EN;
    using eDP_EN = LpcrFields::eDP_EN;
    using eTOP = LpcrFields::eTOP;
    using eLPCALB_EN = LpcrFields::eLPCALB_EN;
    using eLPCALB_VAL = LpcrFields::eLPCALB_VAL;
    using SRTC_ENV = LpcrFields::SRTC_ENV;
    using LPTA_EN = LpcrFields::LPTA_EN;
    using MC_ENV = LpcrFields::MC_ENV;
    using LPWUI_EN = LpcrFields::LPWUI_EN;
    using SRTC_INV_EN = LpcrFields::SRTC_INV_EN;
    using DP_EN = LpcrFields::DP_EN;
    using TOP = LpcrFields::TOP;
    using LVD_EN = LpcrFields::LVD_EN;
    using LPCALB_EN = LpcrFields::LPCALB_EN;
    using LPCALB_VAL = LpcrFields::LPCALB_VAL;
    using BTN_PRESS_TIME = LpcrFields::BTN_PRESS_TIME;
    using DEBOUNCE = LpcrFields::DEBOUNCE;
    using ON_TIME = LpcrFields::ON_TIME;
    using PK_EN = LpcrFields::PK_EN;
    using PK_OVERRIDE = LpcrFields::PK_OVERRIDE;
    using GPR_Z_DIS = LpcrFields::GPR_Z_DIS;
  };

  // SNVS_LP Master Key Control Register
  struct LpmkcrFields {
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
  };  // struct LpmkcrFields

  struct LPMKCR : ftl::mmio::Register<
      0x40C9003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpmkcrFields::MASTER_KEY_SEL,
      LpmkcrFields::ZMK_HWP,
      LpmkcrFields::ZMK_VAL,
      LpmkcrFields::ZMK_ECC_EN,
      ftl::mmio::Reserved<2, 5>,
      LpmkcrFields::ZMK_ECC_VALUE,
      ftl::mmio::Reserved<16, 16>> {
    using eMASTER_KEY_SEL = LpmkcrFields::eMASTER_KEY_SEL;
    using eZMK_HWP = LpmkcrFields::eZMK_HWP;
    using eZMK_VAL = LpmkcrFields::eZMK_VAL;
    using eZMK_ECC_EN = LpmkcrFields::eZMK_ECC_EN;
    using MASTER_KEY_SEL = LpmkcrFields::MASTER_KEY_SEL;
    using ZMK_HWP = LpmkcrFields::ZMK_HWP;
    using ZMK_VAL = LpmkcrFields::ZMK_VAL;
    using ZMK_ECC_EN = LpmkcrFields::ZMK_ECC_EN;
    using ZMK_ECC_VALUE = LpmkcrFields::ZMK_ECC_VALUE;
  };

  // SNVS_LP Security Violation Control Register
  struct LpsvcrFields {
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
  };  // struct LpsvcrFields

  struct LPSVCR : ftl::mmio::Register<
      0x40C90040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpsvcrFields::CAAM_EN,
      LpsvcrFields::JTAGC_EN,
      LpsvcrFields::WDOG2_EN,
      ftl::mmio::Reserved<1, 3>,
      LpsvcrFields::SRC_EN,
      LpsvcrFields::OCOTP_EN,
      ftl::mmio::Reserved<26, 6>> {
    using eCAAM_EN = LpsvcrFields::eCAAM_EN;
    using eJTAGC_EN = LpsvcrFields::eJTAGC_EN;
    using eWDOG2_EN = LpsvcrFields::eWDOG2_EN;
    using eSRC_EN = LpsvcrFields::eSRC_EN;
    using eOCOTP_EN = LpsvcrFields::eOCOTP_EN;
    using CAAM_EN = LpsvcrFields::CAAM_EN;
    using JTAGC_EN = LpsvcrFields::JTAGC_EN;
    using WDOG2_EN = LpsvcrFields::WDOG2_EN;
    using SRC_EN = LpsvcrFields::SRC_EN;
    using OCOTP_EN = LpsvcrFields::OCOTP_EN;
  };

  // SNVS_LP Tamper Glitch Filters Configuration Register
  struct LptgfcrFields {
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
  };  // struct LptgfcrFields

  struct LPTGFCR : ftl::mmio::Register<
      0x40C90044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LptgfcrFields::WMTGF,
      ftl::mmio::Reserved<2, 5>,
      LptgfcrFields::WMTGF_EN,
      ftl::mmio::Reserved<8, 8>,
      LptgfcrFields::ETGF1,
      LptgfcrFields::ETGF1_EN,
      LptgfcrFields::ETGF2,
      LptgfcrFields::ETGF2_EN> {
    using eWMTGF_EN = LptgfcrFields::eWMTGF_EN;
    using eETGF1_EN = LptgfcrFields::eETGF1_EN;
    using eETGF2_EN = LptgfcrFields::eETGF2_EN;
    using WMTGF = LptgfcrFields::WMTGF;
    using WMTGF_EN = LptgfcrFields::WMTGF_EN;
    using ETGF1 = LptgfcrFields::ETGF1;
    using ETGF1_EN = LptgfcrFields::ETGF1_EN;
    using ETGF2 = LptgfcrFields::ETGF2;
    using ETGF2_EN = LptgfcrFields::ETGF2_EN;
  };

  // SNVS_LP Tamper Detect Configuration Register
  struct LptdcrFields {
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
  };  // struct LptdcrFields

  struct LPTDCR : ftl::mmio::Register<
      0x40C90048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      LptdcrFields::SRTCR_EN,
      LptdcrFields::MCR_EN,
      ftl::mmio::Reserved<1, 3>,
      LptdcrFields::CT_EN,
      LptdcrFields::TT_EN,
      LptdcrFields::VT_EN,
      LptdcrFields::WMT1_EN,
      LptdcrFields::WMT2_EN,
      LptdcrFields::ET1_EN,
      LptdcrFields::ET2_EN,
      LptdcrFields::ET1P,
      LptdcrFields::ET2P,
      ftl::mmio::Reserved<1, 13>,
      LptdcrFields::PFD_OBSERV,
      LptdcrFields::POR_OBSERV,
      LptdcrFields::LTDC,
      ftl::mmio::Reserved<1, 19>,
      LptdcrFields::HTDC,
      ftl::mmio::Reserved<1, 23>,
      LptdcrFields::VRC,
      ftl::mmio::Reserved<1, 27>,
      LptdcrFields::OSCB,
      ftl::mmio::Reserved<3, 29>> {
    using eSRTCR_EN = LptdcrFields::eSRTCR_EN;
    using eMCR_EN = LptdcrFields::eMCR_EN;
    using eCT_EN = LptdcrFields::eCT_EN;
    using eTT_EN = LptdcrFields::eTT_EN;
    using eVT_EN = LptdcrFields::eVT_EN;
    using eWMT1_EN = LptdcrFields::eWMT1_EN;
    using eWMT2_EN = LptdcrFields::eWMT2_EN;
    using eET1_EN = LptdcrFields::eET1_EN;
    using eET2_EN = LptdcrFields::eET2_EN;
    using eET1P = LptdcrFields::eET1P;
    using eET2P = LptdcrFields::eET2P;
    using eOSCB = LptdcrFields::eOSCB;
    using SRTCR_EN = LptdcrFields::SRTCR_EN;
    using MCR_EN = LptdcrFields::MCR_EN;
    using CT_EN = LptdcrFields::CT_EN;
    using TT_EN = LptdcrFields::TT_EN;
    using VT_EN = LptdcrFields::VT_EN;
    using WMT1_EN = LptdcrFields::WMT1_EN;
    using WMT2_EN = LptdcrFields::WMT2_EN;
    using ET1_EN = LptdcrFields::ET1_EN;
    using ET2_EN = LptdcrFields::ET2_EN;
    using ET1P = LptdcrFields::ET1P;
    using ET2P = LptdcrFields::ET2P;
    using PFD_OBSERV = LptdcrFields::PFD_OBSERV;
    using POR_OBSERV = LptdcrFields::POR_OBSERV;
    using LTDC = LptdcrFields::LTDC;
    using HTDC = LptdcrFields::HTDC;
    using VRC = LptdcrFields::VRC;
    using OSCB = LptdcrFields::OSCB;
  };

  // SNVS_LP Status Register
  struct LpsrFields {
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
  };  // struct LpsrFields

  struct LPSR : ftl::mmio::Register<
      0x40C9004Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      LpsrFields::LPTA,
      LpsrFields::SRTCR,
      LpsrFields::MCR,
      LpsrFields::LVD,
      LpsrFields::CTD,
      LpsrFields::TTD,
      LpsrFields::VTD,
      LpsrFields::WMT1D,
      LpsrFields::WMT2D,
      LpsrFields::ET1D,
      LpsrFields::ET2D,
      ftl::mmio::Reserved<5, 11>,
      LpsrFields::ESVD,
      LpsrFields::EO,
      LpsrFields::SPOF,
      ftl::mmio::Reserved<11, 19>,
      LpsrFields::LPNS,
      LpsrFields::LPS> {
    using eLPTA = LpsrFields::eLPTA;
    using eSRTCR = LpsrFields::eSRTCR;
    using eMCR = LpsrFields::eMCR;
    using eLVD = LpsrFields::eLVD;
    using eCTD = LpsrFields::eCTD;
    using eTTD = LpsrFields::eTTD;
    using eVTD = LpsrFields::eVTD;
    using eWMT1D = LpsrFields::eWMT1D;
    using eWMT2D = LpsrFields::eWMT2D;
    using eET1D = LpsrFields::eET1D;
    using eET2D = LpsrFields::eET2D;
    using eESVD = LpsrFields::eESVD;
    using eEO = LpsrFields::eEO;
    using eSPOF = LpsrFields::eSPOF;
    using eLPNS = LpsrFields::eLPNS;
    using eLPS = LpsrFields::eLPS;
    using LPTA = LpsrFields::LPTA;
    using SRTCR = LpsrFields::SRTCR;
    using MCR = LpsrFields::MCR;
    using LVD = LpsrFields::LVD;
    using CTD = LpsrFields::CTD;
    using TTD = LpsrFields::TTD;
    using VTD = LpsrFields::VTD;
    using WMT1D = LpsrFields::WMT1D;
    using WMT2D = LpsrFields::WMT2D;
    using ET1D = LpsrFields::ET1D;
    using ET2D = LpsrFields::ET2D;
    using ESVD = LpsrFields::ESVD;
    using EO = LpsrFields::EO;
    using SPOF = LpsrFields::SPOF;
    using LPNS = LpsrFields::LPNS;
    using LPS = LpsrFields::LPS;
  };

  // SNVS_LP Secure Real Time Counter MSB Register
  struct LpsrtcmrFields {
    // LP Secure Real Time Counter The most-significant 15 bits of the SRTC
    using SRTC = ftl::mmio::Field<15, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpsrtcmrFields

  struct LPSRTCMR : ftl::mmio::Register<
      0x40C90050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpsrtcmrFields::SRTC,
      ftl::mmio::Reserved<17, 15>> {
    using SRTC = LpsrtcmrFields::SRTC;
  };

  // SNVS_LP Secure Real Time Counter LSB Register
  struct LpsrtclrFields {
    // LP Secure Real Time Counter least-significant 32 bits This register can be programmed only when SRTC is not active and not locked, meaning the SRTC_ENV, SRTC_SL, and SRTC_HL bits are not set
    using SRTC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpsrtclrFields

  struct LPSRTCLR : ftl::mmio::Register<
      0x40C90054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpsrtclrFields::SRTC> {
    using SRTC = LpsrtclrFields::SRTC;
  };

  // SNVS_LP Time Alarm Register
  struct LptarFields {
    // LP Time Alarm This register can be programmed only when the LP time alarm is disabled (LPTA_EN bit is not set)
    using LPTA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LptarFields

  struct LPTAR : ftl::mmio::Register<
      0x40C90058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LptarFields::LPTA> {
    using LPTA = LptarFields::LPTA;
  };

  // SNVS_LP Secure Monotonic Counter MSB Register
  struct LpsmcmrFields {
    // Monotonic Counter most-significant 16 Bits Note that writing to this register does not change the value of this field to the value that was written
    using MON_COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Monotonic Counter Era Bits These bits are inputs to the module and typically connect to fuses
    using MC_ERA_BITS = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LpsmcmrFields

  struct LPSMCMR : ftl::mmio::Register<
      0x40C9005Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpsmcmrFields::MON_COUNTER,
      LpsmcmrFields::MC_ERA_BITS> {
    using MON_COUNTER = LpsmcmrFields::MON_COUNTER;
    using MC_ERA_BITS = LpsmcmrFields::MC_ERA_BITS;
  };

  // SNVS_LP Secure Monotonic Counter LSB Register
  struct LpsmclrFields {
    // Monotonic Counter bits Note that writing to this register does not change the value of this field to the value that was written
    using MON_COUNTER = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpsmclrFields

  struct LPSMCLR : ftl::mmio::Register<
      0x40C90060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpsmclrFields::MON_COUNTER> {
    using MON_COUNTER = LpsmclrFields::MON_COUNTER;
  };

  // SNVS_LP Digital Low-Voltage Detector Register
  struct LplvdrFields {
    // Low-Voltage Detector Value
    using LVD = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LplvdrFields

  struct LPLVDR : ftl::mmio::Register<
      0x40C90064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LplvdrFields::LVD> {
    using LVD = LplvdrFields::LVD;
  };

  // SNVS_LP General Purpose Register 0 (legacy alias)
  struct Lpgpr0LegacyAliasFields {
    // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpgpr0LegacyAliasFields

  struct LPGPR0_legacy_alias : ftl::mmio::Register<
      0x40C90068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpgpr0LegacyAliasFields::GPR> {
    using GPR = Lpgpr0LegacyAliasFields::GPR;
  };

  // SNVS_LP Zeroizable Master Key Register
  struct LpzmkrFields {
    // Zeroizable Master Key Each of these registers contains 32 bits of the 256-bit ZMK value
    using ZMK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpzmkrFields

  template<std::uint32_t Index>
  struct LPZMKR : ftl::mmio::Register<
      0x40C9006Cu + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpzmkrFields::ZMK> {
    static_assert(Index < 8u, "LPZMKR: Index out of range");
    using ZMK = LpzmkrFields::ZMK;
  };

  // SNVS_LP General Purpose Registers 0 .. 3
  struct LpgprAliasFields {
    // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpgprAliasFields

  template<std::uint32_t Index>
  struct LPGPR_alias : ftl::mmio::Register<
      0x40C90090u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpgprAliasFields::GPR> {
    static_assert(Index < 4u, "LPGPR_alias: Index out of range");
    using GPR = LpgprAliasFields::GPR;
  };

  // SNVS_LP Tamper Detectors Config 2 Register
  struct Lptdc2rFields {
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
  };  // struct Lptdc2rFields

  struct LPTDC2R : ftl::mmio::Register<
      0x40C900A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lptdc2rFields::ET3_EN,
      Lptdc2rFields::ET4_EN,
      Lptdc2rFields::ET5_EN,
      Lptdc2rFields::ET6_EN,
      Lptdc2rFields::ET7_EN,
      Lptdc2rFields::ET8_EN,
      Lptdc2rFields::ET9_EN,
      Lptdc2rFields::ET10_EN,
      ftl::mmio::Reserved<8, 8>,
      Lptdc2rFields::ET3P,
      Lptdc2rFields::ET4P,
      Lptdc2rFields::ET5P,
      Lptdc2rFields::ET6P,
      Lptdc2rFields::ET7P,
      Lptdc2rFields::ET8P,
      Lptdc2rFields::ET9P,
      Lptdc2rFields::ET10P,
      ftl::mmio::Reserved<8, 24>> {
    using eET3_EN = Lptdc2rFields::eET3_EN;
    using eET4_EN = Lptdc2rFields::eET4_EN;
    using eET5_EN = Lptdc2rFields::eET5_EN;
    using eET6_EN = Lptdc2rFields::eET6_EN;
    using eET7_EN = Lptdc2rFields::eET7_EN;
    using eET8_EN = Lptdc2rFields::eET8_EN;
    using eET9_EN = Lptdc2rFields::eET9_EN;
    using eET10_EN = Lptdc2rFields::eET10_EN;
    using eET3P = Lptdc2rFields::eET3P;
    using eET4P = Lptdc2rFields::eET4P;
    using eET5P = Lptdc2rFields::eET5P;
    using eET6P = Lptdc2rFields::eET6P;
    using eET7P = Lptdc2rFields::eET7P;
    using eET8P = Lptdc2rFields::eET8P;
    using eET9P = Lptdc2rFields::eET9P;
    using eET10P = Lptdc2rFields::eET10P;
    using ET3_EN = Lptdc2rFields::ET3_EN;
    using ET4_EN = Lptdc2rFields::ET4_EN;
    using ET5_EN = Lptdc2rFields::ET5_EN;
    using ET6_EN = Lptdc2rFields::ET6_EN;
    using ET7_EN = Lptdc2rFields::ET7_EN;
    using ET8_EN = Lptdc2rFields::ET8_EN;
    using ET9_EN = Lptdc2rFields::ET9_EN;
    using ET10_EN = Lptdc2rFields::ET10_EN;
    using ET3P = Lptdc2rFields::ET3P;
    using ET4P = Lptdc2rFields::ET4P;
    using ET5P = Lptdc2rFields::ET5P;
    using ET6P = Lptdc2rFields::ET6P;
    using ET7P = Lptdc2rFields::ET7P;
    using ET8P = Lptdc2rFields::ET8P;
    using ET9P = Lptdc2rFields::ET9P;
    using ET10P = Lptdc2rFields::ET10P;
  };

  // SNVS_LP Tamper Detectors Status Register
  struct LptdsrFields {
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
  };  // struct LptdsrFields

  struct LPTDSR : ftl::mmio::Register<
      0x40C900A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LptdsrFields::ET3D,
      LptdsrFields::ET4D,
      LptdsrFields::ET5D,
      LptdsrFields::ET6D,
      LptdsrFields::ET7D,
      LptdsrFields::ET8D,
      LptdsrFields::ET9D,
      LptdsrFields::ET10D,
      ftl::mmio::Reserved<24, 8>> {
    using eET3D = LptdsrFields::eET3D;
    using eET4D = LptdsrFields::eET4D;
    using eET5D = LptdsrFields::eET5D;
    using eET6D = LptdsrFields::eET6D;
    using eET7D = LptdsrFields::eET7D;
    using eET8D = LptdsrFields::eET8D;
    using eET9D = LptdsrFields::eET9D;
    using eET10D = LptdsrFields::eET10D;
    using ET3D = LptdsrFields::ET3D;
    using ET4D = LptdsrFields::ET4D;
    using ET5D = LptdsrFields::ET5D;
    using ET6D = LptdsrFields::ET6D;
    using ET7D = LptdsrFields::ET7D;
    using ET8D = LptdsrFields::ET8D;
    using ET9D = LptdsrFields::ET9D;
    using ET10D = LptdsrFields::ET10D;
  };

  // SNVS_LP Tamper Glitch Filter 1 Configuration Register
  struct Lptgf1crFields {
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
  };  // struct Lptgf1crFields

  struct LPTGF1CR : ftl::mmio::Register<
      0x40C900A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lptgf1crFields::ETGF3,
      Lptgf1crFields::ETGF3_EN,
      Lptgf1crFields::ETGF4,
      Lptgf1crFields::ETGF4_EN,
      Lptgf1crFields::ETGF5,
      Lptgf1crFields::ETGF5_EN,
      Lptgf1crFields::ETGF6,
      Lptgf1crFields::ETGF6_EN> {
    using eETGF3_EN = Lptgf1crFields::eETGF3_EN;
    using eETGF4_EN = Lptgf1crFields::eETGF4_EN;
    using eETGF5_EN = Lptgf1crFields::eETGF5_EN;
    using eETGF6_EN = Lptgf1crFields::eETGF6_EN;
    using ETGF3 = Lptgf1crFields::ETGF3;
    using ETGF3_EN = Lptgf1crFields::ETGF3_EN;
    using ETGF4 = Lptgf1crFields::ETGF4;
    using ETGF4_EN = Lptgf1crFields::ETGF4_EN;
    using ETGF5 = Lptgf1crFields::ETGF5;
    using ETGF5_EN = Lptgf1crFields::ETGF5_EN;
    using ETGF6 = Lptgf1crFields::ETGF6;
    using ETGF6_EN = Lptgf1crFields::ETGF6_EN;
  };

  // SNVS_LP Tamper Glitch Filter 2 Configuration Register
  struct Lptgf2crFields {
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
  };  // struct Lptgf2crFields

  struct LPTGF2CR : ftl::mmio::Register<
      0x40C900ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lptgf2crFields::ETGF7,
      Lptgf2crFields::ETGF7_EN,
      Lptgf2crFields::ETGF8,
      Lptgf2crFields::ETGF8_EN,
      Lptgf2crFields::ETGF9,
      Lptgf2crFields::ETGF9_EN,
      Lptgf2crFields::ETGF10,
      Lptgf2crFields::ETGF10_EN> {
    using eETGF7_EN = Lptgf2crFields::eETGF7_EN;
    using eETGF8_EN = Lptgf2crFields::eETGF8_EN;
    using eETGF9_EN = Lptgf2crFields::eETGF9_EN;
    using eETGF10_EN = Lptgf2crFields::eETGF10_EN;
    using ETGF7 = Lptgf2crFields::ETGF7;
    using ETGF7_EN = Lptgf2crFields::ETGF7_EN;
    using ETGF8 = Lptgf2crFields::ETGF8;
    using ETGF8_EN = Lptgf2crFields::ETGF8_EN;
    using ETGF9 = Lptgf2crFields::ETGF9;
    using ETGF9_EN = Lptgf2crFields::ETGF9_EN;
    using ETGF10 = Lptgf2crFields::ETGF10;
    using ETGF10_EN = Lptgf2crFields::ETGF10_EN;
  };

  // SNVS_LP Active Tamper 1 Configuration Register
  struct Lpat1crFields {
    // Active Tamper 1 Initial Seed Default Seed is 1111h.
    using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Active Tamper 1 Polynomial Default Polynomial is 8400h.
    using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Lpat1crFields

  struct LPAT1CR : ftl::mmio::Register<
      0x40C900C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Lpat1crFields::Seed,
      Lpat1crFields::Polynomial> {
    using Seed = Lpat1crFields::Seed;
    using Polynomial = Lpat1crFields::Polynomial;
  };

  // SNVS_LP Active Tamper 2 Configuration Register
  struct Lpat2crFields {
    // Active Tamper 2 Initial Seed Default Seed is 2222h.
    using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Active Tamper 2 Polynomial Default Polynomial is 9C00h.
    using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Lpat2crFields

  struct LPAT2CR : ftl::mmio::Register<
      0x40C900C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Lpat2crFields::Seed,
      Lpat2crFields::Polynomial> {
    using Seed = Lpat2crFields::Seed;
    using Polynomial = Lpat2crFields::Polynomial;
  };

  // SNVS_LP Active Tamper 3 Configuration Register
  struct Lpat3crFields {
    // Active Tamper 3 Initial Seed Default Seed is 3333h.
    using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Active Tamper 3 Polynomial Default Polynomial is CA00h.
    using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Lpat3crFields

  struct LPAT3CR : ftl::mmio::Register<
      0x40C900C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Lpat3crFields::Seed,
      Lpat3crFields::Polynomial> {
    using Seed = Lpat3crFields::Seed;
    using Polynomial = Lpat3crFields::Polynomial;
  };

  // SNVS_LP Active Tamper 4 Configuration Register
  struct Lpat4crFields {
    // Active Tamper 4 Initial Seed Default Seed is 4444h.
    using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Active Tamper 4 Polynomial Default Polynomial is 8580h.
    using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Lpat4crFields

  struct LPAT4CR : ftl::mmio::Register<
      0x40C900CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Lpat4crFields::Seed,
      Lpat4crFields::Polynomial> {
    using Seed = Lpat4crFields::Seed;
    using Polynomial = Lpat4crFields::Polynomial;
  };

  // SNVS_LP Active Tamper 5 Configuration Register
  struct Lpat5crFields {
    // Active Tamper 5 Initial Seed Default Seed is 5555h.
    using Seed = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
    // Active Tamper 5 Polynomial Default Polynomial is A840h.
    using Polynomial = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct Lpat5crFields

  struct LPAT5CR : ftl::mmio::Register<
      0x40C900D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      Lpat5crFields::Seed,
      Lpat5crFields::Polynomial> {
    using Seed = Lpat5crFields::Seed;
    using Polynomial = Lpat5crFields::Polynomial;
  };

  // SNVS_LP Active Tamper Control Register
  struct LpatctlrFields {
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
  };  // struct LpatctlrFields

  struct LPATCTLR : ftl::mmio::Register<
      0x40C900E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpatctlrFields::AT1_EN,
      LpatctlrFields::AT2_EN,
      LpatctlrFields::AT3_EN,
      LpatctlrFields::AT4_EN,
      LpatctlrFields::AT5_EN,
      ftl::mmio::Reserved<11, 5>,
      LpatctlrFields::AT1_PAD_EN,
      LpatctlrFields::AT2_PAD_EN,
      LpatctlrFields::AT3_PAD_EN,
      LpatctlrFields::AT4_PAD_EN,
      LpatctlrFields::AT5_PAD_EN,
      ftl::mmio::Reserved<11, 21>> {
    using eAT1_EN = LpatctlrFields::eAT1_EN;
    using eAT2_EN = LpatctlrFields::eAT2_EN;
    using eAT3_EN = LpatctlrFields::eAT3_EN;
    using eAT4_EN = LpatctlrFields::eAT4_EN;
    using eAT5_EN = LpatctlrFields::eAT5_EN;
    using eAT1_PAD_EN = LpatctlrFields::eAT1_PAD_EN;
    using eAT2_PAD_EN = LpatctlrFields::eAT2_PAD_EN;
    using eAT3_PAD_EN = LpatctlrFields::eAT3_PAD_EN;
    using eAT4_PAD_EN = LpatctlrFields::eAT4_PAD_EN;
    using eAT5_PAD_EN = LpatctlrFields::eAT5_PAD_EN;
    using AT1_EN = LpatctlrFields::AT1_EN;
    using AT2_EN = LpatctlrFields::AT2_EN;
    using AT3_EN = LpatctlrFields::AT3_EN;
    using AT4_EN = LpatctlrFields::AT4_EN;
    using AT5_EN = LpatctlrFields::AT5_EN;
    using AT1_PAD_EN = LpatctlrFields::AT1_PAD_EN;
    using AT2_PAD_EN = LpatctlrFields::AT2_PAD_EN;
    using AT3_PAD_EN = LpatctlrFields::AT3_PAD_EN;
    using AT4_PAD_EN = LpatctlrFields::AT4_PAD_EN;
    using AT5_PAD_EN = LpatctlrFields::AT5_PAD_EN;
  };

  // SNVS_LP Active Tamper Clock Control Register
  struct LpatclkrFields {
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
  };  // struct LpatclkrFields

  struct LPATCLKR : ftl::mmio::Register<
      0x40C900E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpatclkrFields::AT1_CLK_CTL,
      ftl::mmio::Reserved<2, 2>,
      LpatclkrFields::AT2_CLK_CTL,
      ftl::mmio::Reserved<2, 6>,
      LpatclkrFields::AT3_CLK_CTL,
      ftl::mmio::Reserved<2, 10>,
      LpatclkrFields::AT4_CLK_CTL,
      ftl::mmio::Reserved<2, 14>,
      LpatclkrFields::AT5_CLK_CTL,
      ftl::mmio::Reserved<14, 18>> {
    using AT1_CLK_CTL = LpatclkrFields::AT1_CLK_CTL;
    using AT2_CLK_CTL = LpatclkrFields::AT2_CLK_CTL;
    using AT3_CLK_CTL = LpatclkrFields::AT3_CLK_CTL;
    using AT4_CLK_CTL = LpatclkrFields::AT4_CLK_CTL;
    using AT5_CLK_CTL = LpatclkrFields::AT5_CLK_CTL;
  };

  // SNVS_LP Active Tamper Routing Control 1 Register
  struct Lpatrc1rFields {
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
  };  // struct Lpatrc1rFields

  struct LPATRC1R : ftl::mmio::Register<
      0x40C900E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpatrc1rFields::ET1RCTL,
      ftl::mmio::Reserved<1, 3>,
      Lpatrc1rFields::ET2RCTL,
      ftl::mmio::Reserved<1, 7>,
      Lpatrc1rFields::ET3RCTL,
      ftl::mmio::Reserved<1, 11>,
      Lpatrc1rFields::ET4RCTL,
      ftl::mmio::Reserved<1, 15>,
      Lpatrc1rFields::ET5RCTL,
      ftl::mmio::Reserved<1, 19>,
      Lpatrc1rFields::ET6RCTL,
      ftl::mmio::Reserved<1, 23>,
      Lpatrc1rFields::ET7RCTL,
      ftl::mmio::Reserved<1, 27>,
      Lpatrc1rFields::ET8RCTL,
      ftl::mmio::Reserved<1, 31>> {
    using ET1RCTL = Lpatrc1rFields::ET1RCTL;
    using ET2RCTL = Lpatrc1rFields::ET2RCTL;
    using ET3RCTL = Lpatrc1rFields::ET3RCTL;
    using ET4RCTL = Lpatrc1rFields::ET4RCTL;
    using ET5RCTL = Lpatrc1rFields::ET5RCTL;
    using ET6RCTL = Lpatrc1rFields::ET6RCTL;
    using ET7RCTL = Lpatrc1rFields::ET7RCTL;
    using ET8RCTL = Lpatrc1rFields::ET8RCTL;
  };

  // SNVS_LP Active Tamper Routing Control 2 Register
  struct Lpatrc2rFields {
    // External Tamper 9 Routing Control Any undefined selection will be routed to passive
    using ET9RCTL = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // External Tamper 10 Routing Control Any undefined selection will be routed to passive
    using ET10RCTL = ftl::mmio::Field<3, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpatrc2rFields

  struct LPATRC2R : ftl::mmio::Register<
      0x40C900ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpatrc2rFields::ET9RCTL,
      ftl::mmio::Reserved<1, 3>,
      Lpatrc2rFields::ET10RCTL,
      ftl::mmio::Reserved<25, 7>> {
    using ET9RCTL = Lpatrc2rFields::ET9RCTL;
    using ET10RCTL = Lpatrc2rFields::ET10RCTL;
  };

  // SNVS_LP General Purpose Registers 0 .. 3
  struct LpgprFields {
    // General Purpose Register When GPR_SL or GPR_HL bit is set, the register cannot be programmed.
    using GPR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LpgprFields

  template<std::uint32_t Index>
  struct LPGPR : ftl::mmio::Register<
      0x40C90100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LpgprFields::GPR> {
    static_assert(Index < 4u, "LPGPR: Index out of range");
    using GPR = LpgprFields::GPR;
  };

  // SNVS_HP Version ID Register 1
  struct Hpvidr1Fields {
    // SNVS block minor version number
    using MINOR_REV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // SNVS block major version number
    using MAJOR_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // SNVS block ID
    using IP_ID = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Hpvidr1Fields

  struct HPVIDR1 : ftl::mmio::Register<
      0x40C90BF8u,
      std::uint32_t,
      0x003E0103u,
      ftl::mmio::RO,
      Hpvidr1Fields::MINOR_REV,
      Hpvidr1Fields::MAJOR_REV,
      Hpvidr1Fields::IP_ID> {
    using MINOR_REV = Hpvidr1Fields::MINOR_REV;
    using MAJOR_REV = Hpvidr1Fields::MAJOR_REV;
    using IP_ID = Hpvidr1Fields::IP_ID;
  };

  // SNVS_HP Version ID Register 2
  struct Hpvidr2Fields {
    // SNVS ECO Revision The engineering change order revision number for this release of SNVS.
    using ECO_REV = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // IP Era 00h - Era 1 or 2 03h - Era 3 04h - Era 4 05h - Era 5 06h - Era 6
    using IP_ERA = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Hpvidr2Fields

  struct HPVIDR2 : ftl::mmio::Register<
      0x40C90BFCu,
      std::uint32_t,
      0x06000500u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<8, 0>,
      Hpvidr2Fields::ECO_REV,
      ftl::mmio::Reserved<8, 16>,
      Hpvidr2Fields::IP_ERA> {
    using ECO_REV = Hpvidr2Fields::ECO_REV;
    using IP_ERA = Hpvidr2Fields::IP_ERA;
  };

};

}  // namespace regs