#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DCDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Dcdc {
  // DCDC Control Register 0
  struct Ctrl0Fields {
    enum class eENABLE : std::uint32_t {
      // Disable (Bypass)
      edisable = 0,
      // Enable
      eenable = 1,
    };

    enum class eDIG_EN : std::uint32_t {
      // Enable
      eenable = 1,
    };

    enum class eSTBY_EN : std::uint32_t {
      // Enter into standby mode
      eenable = 1,
    };

    enum class eLP_MODE_EN : std::uint32_t {
      // Enter into low-power mode
      eenable = 1,
    };

    enum class eSTBY_LP_MODE_EN : std::uint32_t {
      // Disable DCDC entry into low-power mode from a GPC standby request
      edisable = 0,
      // Enable DCDC to enter into low-power mode from a GPC standby request
      eenable = 1,
    };

    enum class eENABLE_DCDC_CNT : std::uint32_t {
      // Wait DCDC_OK for ACK
      ewait = 0,
      // Enable internal count for DCDC_OK timeout
      eenable_count = 1,
    };

    enum class eTRIM_HOLD : std::uint32_t {
      // Sample trim input
      esample = 0,
      // Hold trim input
      ehold = 1,
    };

    enum class eCONTROL_MODE : std::uint32_t {
      // Software control mode
      eswctrl = 0,
      // Hardware control mode (controlled by GPC Setpoints)
      egpc = 1,
    };

    // DCDC Enable
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable the DCDC_DIG switching converter output
    using DIG_EN = ftl::mmio::Field<1, 1, eDIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DCDC standby mode enable
    using STBY_EN = ftl::mmio::Field<1, 2, eSTBY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DCDC low-power (LP) mode enable DCDC can't start up directly into LP mode
    using LP_MODE_EN = ftl::mmio::Field<1, 3, eLP_MODE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DCDC low-power mode enable by GPC standby request
    using STBY_LP_MODE_EN = ftl::mmio::Field<1, 4, eSTBY_LP_MODE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable internal count for DCDC_OK timeout
    using ENABLE_DCDC_CNT = ftl::mmio::Field<1, 5, eENABLE_DCDC_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hold trim input
    using TRIM_HOLD = ftl::mmio::Field<1, 6, eTRIM_HOLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // DEBUG_BITS[11:0]
    using DEBUG_BITS = ftl::mmio::Field<12, 19, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Control mode
    using CONTROL_MODE = ftl::mmio::Field<1, 31, eCONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      0x40CA8000u,
      std::uint32_t,
      0x00000003u,
      ftl::mmio::RW,
      Ctrl0Fields::ENABLE,
      Ctrl0Fields::DIG_EN,
      Ctrl0Fields::STBY_EN,
      Ctrl0Fields::LP_MODE_EN,
      Ctrl0Fields::STBY_LP_MODE_EN,
      Ctrl0Fields::ENABLE_DCDC_CNT,
      Ctrl0Fields::TRIM_HOLD,
      ftl::mmio::Reserved<12, 7>,
      Ctrl0Fields::DEBUG_BITS,
      Ctrl0Fields::CONTROL_MODE> {
    using eENABLE = Ctrl0Fields::eENABLE;
    using eDIG_EN = Ctrl0Fields::eDIG_EN;
    using eSTBY_EN = Ctrl0Fields::eSTBY_EN;
    using eLP_MODE_EN = Ctrl0Fields::eLP_MODE_EN;
    using eSTBY_LP_MODE_EN = Ctrl0Fields::eSTBY_LP_MODE_EN;
    using eENABLE_DCDC_CNT = Ctrl0Fields::eENABLE_DCDC_CNT;
    using eTRIM_HOLD = Ctrl0Fields::eTRIM_HOLD;
    using eCONTROL_MODE = Ctrl0Fields::eCONTROL_MODE;
    using ENABLE = Ctrl0Fields::ENABLE;
    using DIG_EN = Ctrl0Fields::DIG_EN;
    using STBY_EN = Ctrl0Fields::STBY_EN;
    using LP_MODE_EN = Ctrl0Fields::LP_MODE_EN;
    using STBY_LP_MODE_EN = Ctrl0Fields::STBY_LP_MODE_EN;
    using ENABLE_DCDC_CNT = Ctrl0Fields::ENABLE_DCDC_CNT;
    using TRIM_HOLD = Ctrl0Fields::TRIM_HOLD;
    using DEBUG_BITS = Ctrl0Fields::DEBUG_BITS;
    using CONTROL_MODE = Ctrl0Fields::CONTROL_MODE;
  };

  // DCDC Control Register 1
  struct Ctrl1Fields {
    enum class eVDD1P8CTRL_TRG : std::uint32_t {
      // 1.5V
      ev1p5 = 0,
      // 1.8V
      ev1p8 = 12,
      // 2.275V
      ev2p275 = 31,
    };

    enum class eVDD1P0CTRL_TRG : std::uint32_t {
      // 0.6V
      ev0p6 = 0,
      // 1.0V
      ev1p0 = 16,
      // 1.375V
      ev1p375 = 31,
    };

    enum class eVDD1P8CTRL_STBY_TRG : std::uint32_t {
      // 1.525V
      ev1p525 = 0,
      // 1.8V
      ev1p8 = 11,
      // 2.3V
      ev2p4 = 31,
    };

    enum class eVDD1P0CTRL_STBY_TRG : std::uint32_t {
      // 0.625V
      ev0p625 = 0,
      // 1.0V
      ev1p0 = 15,
      // 1.4V
      ev1p4 = 31,
    };

    // Target value of VDD1P8 in buck mode, 25mV each step from 0x00 to 0x1F:
    using VDD1P8CTRL_TRG = ftl::mmio::Field<5, 0, eVDD1P8CTRL_TRG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target value of VDD1P0 in buck mode, 25mV each step from 0x00 to 0x1F:
    using VDD1P0CTRL_TRG = ftl::mmio::Field<5, 8, eVDD1P0CTRL_TRG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target value of VDD1P8 in standby mode, 25mV each step from 0x00 to 0x1F:
    using VDD1P8CTRL_STBY_TRG = ftl::mmio::Field<5, 16, eVDD1P8CTRL_STBY_TRG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target value of VDD1P0 in standby mode, 25mV each step from 0x00 to 0x1F:
    using VDD1P0CTRL_STBY_TRG = ftl::mmio::Field<5, 24, eVDD1P0CTRL_STBY_TRG, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl1Fields

  struct CTRL1 : ftl::mmio::Register<
      0x40CA8004u,
      std::uint32_t,
      0x0F0B100Cu,
      ftl::mmio::RW,
      Ctrl1Fields::VDD1P8CTRL_TRG,
      ftl::mmio::Reserved<3, 5>,
      Ctrl1Fields::VDD1P0CTRL_TRG,
      ftl::mmio::Reserved<3, 13>,
      Ctrl1Fields::VDD1P8CTRL_STBY_TRG,
      ftl::mmio::Reserved<3, 21>,
      Ctrl1Fields::VDD1P0CTRL_STBY_TRG,
      ftl::mmio::Reserved<3, 29>> {
    using eVDD1P8CTRL_TRG = Ctrl1Fields::eVDD1P8CTRL_TRG;
    using eVDD1P0CTRL_TRG = Ctrl1Fields::eVDD1P0CTRL_TRG;
    using eVDD1P8CTRL_STBY_TRG = Ctrl1Fields::eVDD1P8CTRL_STBY_TRG;
    using eVDD1P0CTRL_STBY_TRG = Ctrl1Fields::eVDD1P0CTRL_STBY_TRG;
    using VDD1P8CTRL_TRG = Ctrl1Fields::VDD1P8CTRL_TRG;
    using VDD1P0CTRL_TRG = Ctrl1Fields::VDD1P0CTRL_TRG;
    using VDD1P8CTRL_STBY_TRG = Ctrl1Fields::VDD1P8CTRL_STBY_TRG;
    using VDD1P0CTRL_STBY_TRG = Ctrl1Fields::VDD1P0CTRL_STBY_TRG;
  };

  // DCDC Register 0
  struct Reg0Fields {
    enum class ePWD_ZCD : std::uint32_t {
      // Zero cross detetion function powered up
      epowered_up = 0,
      // Zero cross detetion function powered down
      epowered_down = 1,
    };

    enum class eDISABLE_AUTO_CLK_SWITCH : std::uint32_t {
      // If DISABLE_AUTO_CLK_SWITCH is set to 0 and 24M xtal is OK, the clock source will switch from internal ring oscillator to 24M xtal automatically
      extal_clk = 0,
      // If DISABLE_AUTO_CLK_SWITCH is set to 1, SEL_CLK will determine which clock source the DCDC uses
      esel_clk = 1,
    };

    enum class eSEL_CLK : std::uint32_t {
      // DCDC uses internal ring oscillator
      eint_rng_osc = 0,
      // DCDC uses 24M xtal
      extal_24M = 1,
    };

    enum class ePWD_OSC_INT : std::uint32_t {
      // Internal ring oscillator powered up
      epowered_up = 0,
      // Internal ring oscillator powered down
      epowered_down = 1,
    };

    enum class ePWD_CUR_SNS_CMP : std::uint32_t {
      // Current Detector powered up
      epowered_up = 0,
      // Current Detector powered down
      epowered_down = 1,
    };

    enum class ePWD_OVERCUR_DET : std::uint32_t {
      // Overcurrent detection comparator is enabled
      eenabled = 0,
      // Overcurrent detection comparator is disabled
      edisabled = 1,
    };

    enum class ePWD_CMP_DCDC_IN_DET : std::uint32_t {
      // Low voltage detection comparator is enabled
      eenabled = 0,
      // Low voltage detection comparator is disabled
      edisabled = 1,
    };

    enum class ePWD_HIGH_VDD1P8_DET : std::uint32_t {
      // Overvoltage detection comparator for the VDD1P8 output is enabled
      eenabled = 0,
      // Overvoltage detection comparator for the VDD1P8 output is disabled
      edisabled = 1,
    };

    enum class ePWD_HIGH_VDD1P0_DET : std::uint32_t {
      // Overvoltage detection comparator for the VDD1P0 output is enabled
      eenabled = 0,
      // Overvoltage detection comparator for the VDD1P0 output is disabled
      edisabled = 1,
    };

    enum class eLP_HIGH_HYS : std::uint32_t {
      // Adjust hysteretic value in low power to 12.5mV
      elp_12p5mV = 0,
      // Adjust hysteretic value in low power to 25mV
      elp_25mV = 1,
    };

    enum class ePWD_CMP_OFFSET : std::uint32_t {
      // Out-of-range comparator powered up
      epowered_up = 0,
      // Out-of-range comparator powered down
      epowered_down = 1,
    };

    enum class eXTALOK_DISABLE : std::uint32_t {
      // Enable xtalok detection circuit
      eenabled = 0,
      // Disable xtalok detection circuit and always outputs OK signal "1"
      edisabled = 1,
    };

    enum class eXTAL_24M_OK : std::uint32_t {
      // DCDC uses internal ring oscillator
      eint_rng_osc = 0,
      // DCDC uses xtal 24M
      extal_24M = 1,
    };

    enum class eSTS_DC_OK : std::uint32_t {
      // DCDC is settling
      enot_settled = 0,
      // DCDC already settled
      esettled = 1,
    };

    // Power Down Zero Cross Detection
    using PWD_ZCD = ftl::mmio::Field<1, 0, ePWD_ZCD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable Auto Clock Switch
    using DISABLE_AUTO_CLK_SWITCH = ftl::mmio::Field<1, 1, eDISABLE_AUTO_CLK_SWITCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select Clock
    using SEL_CLK = ftl::mmio::Field<1, 2, eSEL_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power down internal ring oscillator
    using PWD_OSC_INT = ftl::mmio::Field<1, 3, ePWD_OSC_INT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power down signal of the current detector
    using PWD_CUR_SNS_CMP = ftl::mmio::Field<1, 4, ePWD_CUR_SNS_CMP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Current Sense (detector) Threshold
    using CUR_SNS_THRSH = ftl::mmio::Field<3, 5, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power down overcurrent detection comparator
    using PWD_OVERCUR_DET = ftl::mmio::Field<1, 8, ePWD_OVERCUR_DET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set to "1" to power down the low voltage detection comparator
    using PWD_CMP_DCDC_IN_DET = ftl::mmio::Field<1, 11, ePWD_CMP_DCDC_IN_DET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Down High Voltage Detection for VDD1P8
    using PWD_HIGH_VDD1P8_DET = ftl::mmio::Field<1, 16, ePWD_HIGH_VDD1P8_DET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Down High Voltage Detection for VDD1P0
    using PWD_HIGH_VDD1P0_DET = ftl::mmio::Field<1, 17, ePWD_HIGH_VDD1P0_DET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Low Power High Hysteric Value
    using LP_HIGH_HYS = ftl::mmio::Field<1, 21, eLP_HIGH_HYS, ftl::mmio::RW, ftl::mmio::Normal>;
    // power down the out-of-range detection comparator
    using PWD_CMP_OFFSET = ftl::mmio::Field<1, 26, ePWD_CMP_OFFSET, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable xtalok detection circuit
    using XTALOK_DISABLE = ftl::mmio::Field<1, 27, eXTALOK_DISABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // 24M XTAL OK
    using XTAL_24M_OK = ftl::mmio::Field<1, 29, eXTAL_24M_OK, ftl::mmio::RW, ftl::mmio::Normal>;
    // DCDC Output OK
    using STS_DC_OK = ftl::mmio::Field<1, 31, eSTS_DC_OK, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Reg0Fields

  struct REG0 : ftl::mmio::Register<
      0x40CA8008u,
      std::uint32_t,
      0x04030511u,
      ftl::mmio::RW,
      Reg0Fields::PWD_ZCD,
      Reg0Fields::DISABLE_AUTO_CLK_SWITCH,
      Reg0Fields::SEL_CLK,
      Reg0Fields::PWD_OSC_INT,
      Reg0Fields::PWD_CUR_SNS_CMP,
      Reg0Fields::CUR_SNS_THRSH,
      Reg0Fields::PWD_OVERCUR_DET,
      ftl::mmio::Reserved<2, 9>,
      Reg0Fields::PWD_CMP_DCDC_IN_DET,
      ftl::mmio::Reserved<4, 12>,
      Reg0Fields::PWD_HIGH_VDD1P8_DET,
      Reg0Fields::PWD_HIGH_VDD1P0_DET,
      ftl::mmio::Reserved<3, 18>,
      Reg0Fields::LP_HIGH_HYS,
      ftl::mmio::Reserved<4, 22>,
      Reg0Fields::PWD_CMP_OFFSET,
      Reg0Fields::XTALOK_DISABLE,
      ftl::mmio::Reserved<1, 28>,
      Reg0Fields::XTAL_24M_OK,
      ftl::mmio::Reserved<1, 30>,
      Reg0Fields::STS_DC_OK> {
    using ePWD_ZCD = Reg0Fields::ePWD_ZCD;
    using eDISABLE_AUTO_CLK_SWITCH = Reg0Fields::eDISABLE_AUTO_CLK_SWITCH;
    using eSEL_CLK = Reg0Fields::eSEL_CLK;
    using ePWD_OSC_INT = Reg0Fields::ePWD_OSC_INT;
    using ePWD_CUR_SNS_CMP = Reg0Fields::ePWD_CUR_SNS_CMP;
    using ePWD_OVERCUR_DET = Reg0Fields::ePWD_OVERCUR_DET;
    using ePWD_CMP_DCDC_IN_DET = Reg0Fields::ePWD_CMP_DCDC_IN_DET;
    using ePWD_HIGH_VDD1P8_DET = Reg0Fields::ePWD_HIGH_VDD1P8_DET;
    using ePWD_HIGH_VDD1P0_DET = Reg0Fields::ePWD_HIGH_VDD1P0_DET;
    using eLP_HIGH_HYS = Reg0Fields::eLP_HIGH_HYS;
    using ePWD_CMP_OFFSET = Reg0Fields::ePWD_CMP_OFFSET;
    using eXTALOK_DISABLE = Reg0Fields::eXTALOK_DISABLE;
    using eXTAL_24M_OK = Reg0Fields::eXTAL_24M_OK;
    using eSTS_DC_OK = Reg0Fields::eSTS_DC_OK;
    using PWD_ZCD = Reg0Fields::PWD_ZCD;
    using DISABLE_AUTO_CLK_SWITCH = Reg0Fields::DISABLE_AUTO_CLK_SWITCH;
    using SEL_CLK = Reg0Fields::SEL_CLK;
    using PWD_OSC_INT = Reg0Fields::PWD_OSC_INT;
    using PWD_CUR_SNS_CMP = Reg0Fields::PWD_CUR_SNS_CMP;
    using CUR_SNS_THRSH = Reg0Fields::CUR_SNS_THRSH;
    using PWD_OVERCUR_DET = Reg0Fields::PWD_OVERCUR_DET;
    using PWD_CMP_DCDC_IN_DET = Reg0Fields::PWD_CMP_DCDC_IN_DET;
    using PWD_HIGH_VDD1P8_DET = Reg0Fields::PWD_HIGH_VDD1P8_DET;
    using PWD_HIGH_VDD1P0_DET = Reg0Fields::PWD_HIGH_VDD1P0_DET;
    using LP_HIGH_HYS = Reg0Fields::LP_HIGH_HYS;
    using PWD_CMP_OFFSET = Reg0Fields::PWD_CMP_OFFSET;
    using XTALOK_DISABLE = Reg0Fields::XTALOK_DISABLE;
    using XTAL_24M_OK = Reg0Fields::XTAL_24M_OK;
    using STS_DC_OK = Reg0Fields::STS_DC_OK;
  };

  // DCDC Register 1
  struct Reg1Fields {
    enum class eDM_CTRL : std::uint32_t {
      // No change to ripple when the discontinuous current is present in DCM.
      eDM_CTRL_0 = 0,
      // Improves ripple when the inductor current goes to zero in DCM.
      eDM_CTRL_1 = 1,
    };

    enum class eRLOAD_REG_EN_LPSR : std::uint32_t {
      // Disconnect load resistor
      eloadR_disconnect = 0,
      // Connect load resistor
      eloadR_connect = 1,
    };

    enum class eVBG_TRIM : std::uint32_t {
      // 0.452V
      eminvolt = 0,
      // 0.5V
      edefault = 16,
      // 0.545V
      emaxvolt = 31,
    };

    enum class eLP_CMP_ISRC_SEL : std::uint32_t {
      // 50nA
      esel0 = 0,
      // 100nA
      esel1 = 1,
      // 200nA
      esel2 = 2,
      // 400nA
      esel3 = 3,
    };

    enum class eLOOPCTRL_EN_CM_HYST : std::uint32_t {
      // Disable hysteresis in switching converter common mode analog comparators
      edisable = 0,
      // Enable hysteresis in switching converter common mode analog comparators
      eenable = 1,
    };

    enum class eLOOPCTRL_EN_DF_HYST : std::uint32_t {
      // Disable hysteresis in switching converter differential mode analog comparators
      edisable = 0,
      // Enable hysteresis in switching converter differential mode analog comparators
      eenable = 1,
    };

    // DM Control
    using DM_CTRL = ftl::mmio::Field<1, 3, eDM_CTRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Resistor Enable
    using RLOAD_REG_EN_LPSR = ftl::mmio::Field<1, 4, eRLOAD_REG_EN_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trim Bandgap Voltage
    using VBG_TRIM = ftl::mmio::Field<5, 6, eVBG_TRIM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Low Power Comparator Current Bias
    using LP_CMP_ISRC_SEL = ftl::mmio::Field<2, 11, eLP_CMP_ISRC_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Increase Threshold Detection
    using LOOPCTRL_CM_HST_THRESH = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Increase Threshold Detection
    using LOOPCTRL_DF_HST_THRESH = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable hysteresis in switching converter common mode analog comparators
    using LOOPCTRL_EN_CM_HYST = ftl::mmio::Field<1, 29, eLOOPCTRL_EN_CM_HYST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable hysteresis in switching converter differential mode analog comparators
    using LOOPCTRL_EN_DF_HYST = ftl::mmio::Field<1, 30, eLOOPCTRL_EN_DF_HYST, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg1Fields

  struct REG1 : ftl::mmio::Register<
      0x40CA800Cu,
      std::uint32_t,
      0x01CD5430u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Reg1Fields::DM_CTRL,
      Reg1Fields::RLOAD_REG_EN_LPSR,
      ftl::mmio::Reserved<1, 5>,
      Reg1Fields::VBG_TRIM,
      Reg1Fields::LP_CMP_ISRC_SEL,
      ftl::mmio::Reserved<14, 13>,
      Reg1Fields::LOOPCTRL_CM_HST_THRESH,
      Reg1Fields::LOOPCTRL_DF_HST_THRESH,
      Reg1Fields::LOOPCTRL_EN_CM_HYST,
      Reg1Fields::LOOPCTRL_EN_DF_HYST,
      ftl::mmio::Reserved<1, 31>> {
    using eDM_CTRL = Reg1Fields::eDM_CTRL;
    using eRLOAD_REG_EN_LPSR = Reg1Fields::eRLOAD_REG_EN_LPSR;
    using eVBG_TRIM = Reg1Fields::eVBG_TRIM;
    using eLP_CMP_ISRC_SEL = Reg1Fields::eLP_CMP_ISRC_SEL;
    using eLOOPCTRL_EN_CM_HYST = Reg1Fields::eLOOPCTRL_EN_CM_HYST;
    using eLOOPCTRL_EN_DF_HYST = Reg1Fields::eLOOPCTRL_EN_DF_HYST;
    using DM_CTRL = Reg1Fields::DM_CTRL;
    using RLOAD_REG_EN_LPSR = Reg1Fields::RLOAD_REG_EN_LPSR;
    using VBG_TRIM = Reg1Fields::VBG_TRIM;
    using LP_CMP_ISRC_SEL = Reg1Fields::LP_CMP_ISRC_SEL;
    using LOOPCTRL_CM_HST_THRESH = Reg1Fields::LOOPCTRL_CM_HST_THRESH;
    using LOOPCTRL_DF_HST_THRESH = Reg1Fields::LOOPCTRL_DF_HST_THRESH;
    using LOOPCTRL_EN_CM_HYST = Reg1Fields::LOOPCTRL_EN_CM_HYST;
    using LOOPCTRL_EN_DF_HYST = Reg1Fields::LOOPCTRL_EN_DF_HYST;
  };

  // DCDC Register 2
  struct Reg2Fields {
    // Ratio of integral control parameter to proportional control parameter in the switching DCDC converter, and can be used to optimize efficiency and loop response
    using LOOPCTRL_DC_C = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Magnitude of proportional control parameter in the switching DCDC converter control loop.
    using LOOPCTRL_DC_R = ftl::mmio::Field<4, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Two's complement feed forward step in duty cycle in the switching DCDC converter
    using LOOPCTRL_DC_FF = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable RC Scale
    using LOOPCTRL_EN_RCSCALE = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Increase the threshold detection for RC scale circuit.
    using LOOPCTRL_RCSCALE_THRSH = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Invert the sign of the hysteresis in DCDC analog comparators.
    using LOOPCTRL_HYST_SIGN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // This bit enables the DCDC to improve efficiency and minimize ripple using the information from the BATT_VAL field
    using BATTMONITOR_EN_BATADJ = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software should be configured to place the battery voltage in this register measured with an 8-mV LSB resolution through the ADC
    using BATTMONITOR_BATT_VAL = ftl::mmio::Field<10, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DCM Set Control
    using DCM_SET_CTRL = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set high to enable supply stepping to change only after the differential control loop has toggled as well
    using LOOPCTRL_TOGGLE_DIF = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg2Fields

  struct REG2 : ftl::mmio::Register<
      0x40CA8010u,
      std::uint32_t,
      0x02108089u,
      ftl::mmio::RW,
      Reg2Fields::LOOPCTRL_DC_C,
      Reg2Fields::LOOPCTRL_DC_R,
      Reg2Fields::LOOPCTRL_DC_FF,
      Reg2Fields::LOOPCTRL_EN_RCSCALE,
      Reg2Fields::LOOPCTRL_RCSCALE_THRSH,
      Reg2Fields::LOOPCTRL_HYST_SIGN,
      ftl::mmio::Reserved<1, 14>,
      Reg2Fields::BATTMONITOR_EN_BATADJ,
      Reg2Fields::BATTMONITOR_BATT_VAL,
      ftl::mmio::Reserved<2, 26>,
      Reg2Fields::DCM_SET_CTRL,
      ftl::mmio::Reserved<1, 29>,
      Reg2Fields::LOOPCTRL_TOGGLE_DIF,
      ftl::mmio::Reserved<1, 31>> {
    using LOOPCTRL_DC_C = Reg2Fields::LOOPCTRL_DC_C;
    using LOOPCTRL_DC_R = Reg2Fields::LOOPCTRL_DC_R;
    using LOOPCTRL_DC_FF = Reg2Fields::LOOPCTRL_DC_FF;
    using LOOPCTRL_EN_RCSCALE = Reg2Fields::LOOPCTRL_EN_RCSCALE;
    using LOOPCTRL_RCSCALE_THRSH = Reg2Fields::LOOPCTRL_RCSCALE_THRSH;
    using LOOPCTRL_HYST_SIGN = Reg2Fields::LOOPCTRL_HYST_SIGN;
    using BATTMONITOR_EN_BATADJ = Reg2Fields::BATTMONITOR_EN_BATADJ;
    using BATTMONITOR_BATT_VAL = Reg2Fields::BATTMONITOR_BATT_VAL;
    using DCM_SET_CTRL = Reg2Fields::DCM_SET_CTRL;
    using LOOPCTRL_TOGGLE_DIF = Reg2Fields::LOOPCTRL_TOGGLE_DIF;
  };

  // DCDC Register 3
  struct Reg3Fields {
    enum class eIN_BROWNOUT : std::uint32_t {
      // DCDC_IN is lower than 2.6V
      ebrownout = 1,
    };

    enum class eOVERVOLT_VDD1P8_DET_OUT : std::uint32_t {
      // VDD1P8 Overvoltage
      eovervoltage_1p8 = 1,
    };

    enum class eOVERVOLT_VDD1P0_DET_OUT : std::uint32_t {
      // VDD1P0 Overvoltage
      eovervoltage_1p0 = 1,
    };

    enum class eOVERCUR_DETECT_OUT : std::uint32_t {
      // Overcurrent
      eovercurrent_signal = 1,
    };

    enum class eENABLE_FF : std::uint32_t {
      // Enable feed-forward (FF) function that can speed up transient settling.
      eenable_ff = 1,
    };

    enum class eDISABLE_PULSE_SKIP : std::uint32_t {
      // Stop charging if the duty cycle is lower than what is set by NEGLIMIT_IN
      estopcharge = 0,
    };

    enum class eDISABLE_IDLE_SKIP : std::uint32_t {
      // Enable the idle skip function. The DCDC will be idle when out-of-range comparator detects the output voltage is higher than the target by 25mV. This function requires the out-of-range comparator to be enabled (PWD_CMP_OFFSET=0).
      eenable = 0,
    };

    enum class eDOUBLE_IBIAS_CMP_LP_LPSR : std::uint32_t {
      // Double the bias current of the comparator for low-voltage detector in LP (low-power) mode
      edoublebias = 1,
    };

    enum class eMINPWR_DC_HALFCLK : std::uint32_t {
      // DCDC clock remains at full frequency for continuous mode
      efullfreq = 0,
      // DCDC clock set to half frequency for continuous mode
      ehalffreq = 1,
    };

    enum class eVDD1P0CTRL_DISABLE_STEP : std::uint32_t {
      // Enable stepping for VDD1P0
      eenable = 0,
      // Disable stepping for VDD1P0
      edisable = 1,
    };

    enum class eVDD1P8CTRL_DISABLE_STEP : std::uint32_t {
      // Enable stepping for VDD1P8
      eenable = 0,
      // Disable stepping for VDD1P8
      edisable = 1,
    };

    // signal "1" when the voltage on DCDC_IN is lower than 2.6V
    using IN_BROWNOUT = ftl::mmio::Field<1, 14, eIN_BROWNOUT, ftl::mmio::RO, ftl::mmio::Normal>;
    // signal "1" when overvoltage on the VDD1P8 output happens
    using OVERVOLT_VDD1P8_DET_OUT = ftl::mmio::Field<1, 15, eOVERVOLT_VDD1P8_DET_OUT, ftl::mmio::RO, ftl::mmio::Normal>;
    // signal "1" when overvoltage on the VDD1P0 output happens
    using OVERVOLT_VDD1P0_DET_OUT = ftl::mmio::Field<1, 16, eOVERVOLT_VDD1P0_DET_OUT, ftl::mmio::RO, ftl::mmio::Normal>;
    // signal "1" when overcurrent happens.
    using OVERCUR_DETECT_OUT = ftl::mmio::Field<1, 17, eOVERCUR_DETECT_OUT, ftl::mmio::RO, ftl::mmio::Normal>;
    // no description available
    using ENABLE_FF = ftl::mmio::Field<1, 18, eENABLE_FF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable Pulse Skip
    using DISABLE_PULSE_SKIP = ftl::mmio::Field<1, 19, eDISABLE_PULSE_SKIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using DISABLE_IDLE_SKIP = ftl::mmio::Field<1, 20, eDISABLE_IDLE_SKIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using DOUBLE_IBIAS_CMP_LP_LPSR = ftl::mmio::Field<1, 21, eDOUBLE_IBIAS_CMP_LP_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select the feedback point of the internal regulator
    using REG_FBK_SEL = ftl::mmio::Field<2, 22, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Set DCDC clock to half freqeuncy for continuous mode.
    using MINPWR_DC_HALFCLK = ftl::mmio::Field<1, 24, eMINPWR_DC_HALFCLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use half switch FET
    using MINPWR_HALF_FETS = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Miscellaneous Delay Timing
    using MISC_DELAY_TIMING = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable Step for VDD1P0
    using VDD1P0CTRL_DISABLE_STEP = ftl::mmio::Field<1, 29, eVDD1P0CTRL_DISABLE_STEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable Step for VDD1P8
    using VDD1P8CTRL_DISABLE_STEP = ftl::mmio::Field<1, 30, eVDD1P8CTRL_DISABLE_STEP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg3Fields

  struct REG3 : ftl::mmio::Register<
      0x40CA8014u,
      std::uint32_t,
      0x00980000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<14, 0>,
      Reg3Fields::IN_BROWNOUT,
      Reg3Fields::OVERVOLT_VDD1P8_DET_OUT,
      Reg3Fields::OVERVOLT_VDD1P0_DET_OUT,
      Reg3Fields::OVERCUR_DETECT_OUT,
      Reg3Fields::ENABLE_FF,
      Reg3Fields::DISABLE_PULSE_SKIP,
      Reg3Fields::DISABLE_IDLE_SKIP,
      Reg3Fields::DOUBLE_IBIAS_CMP_LP_LPSR,
      Reg3Fields::REG_FBK_SEL,
      Reg3Fields::MINPWR_DC_HALFCLK,
      ftl::mmio::Reserved<1, 25>,
      Reg3Fields::MINPWR_HALF_FETS,
      Reg3Fields::MISC_DELAY_TIMING,
      ftl::mmio::Reserved<1, 28>,
      Reg3Fields::VDD1P0CTRL_DISABLE_STEP,
      Reg3Fields::VDD1P8CTRL_DISABLE_STEP,
      ftl::mmio::Reserved<1, 31>> {
    using eIN_BROWNOUT = Reg3Fields::eIN_BROWNOUT;
    using eOVERVOLT_VDD1P8_DET_OUT = Reg3Fields::eOVERVOLT_VDD1P8_DET_OUT;
    using eOVERVOLT_VDD1P0_DET_OUT = Reg3Fields::eOVERVOLT_VDD1P0_DET_OUT;
    using eOVERCUR_DETECT_OUT = Reg3Fields::eOVERCUR_DETECT_OUT;
    using eENABLE_FF = Reg3Fields::eENABLE_FF;
    using eDISABLE_PULSE_SKIP = Reg3Fields::eDISABLE_PULSE_SKIP;
    using eDISABLE_IDLE_SKIP = Reg3Fields::eDISABLE_IDLE_SKIP;
    using eDOUBLE_IBIAS_CMP_LP_LPSR = Reg3Fields::eDOUBLE_IBIAS_CMP_LP_LPSR;
    using eMINPWR_DC_HALFCLK = Reg3Fields::eMINPWR_DC_HALFCLK;
    using eVDD1P0CTRL_DISABLE_STEP = Reg3Fields::eVDD1P0CTRL_DISABLE_STEP;
    using eVDD1P8CTRL_DISABLE_STEP = Reg3Fields::eVDD1P8CTRL_DISABLE_STEP;
    using IN_BROWNOUT = Reg3Fields::IN_BROWNOUT;
    using OVERVOLT_VDD1P8_DET_OUT = Reg3Fields::OVERVOLT_VDD1P8_DET_OUT;
    using OVERVOLT_VDD1P0_DET_OUT = Reg3Fields::OVERVOLT_VDD1P0_DET_OUT;
    using OVERCUR_DETECT_OUT = Reg3Fields::OVERCUR_DETECT_OUT;
    using ENABLE_FF = Reg3Fields::ENABLE_FF;
    using DISABLE_PULSE_SKIP = Reg3Fields::DISABLE_PULSE_SKIP;
    using DISABLE_IDLE_SKIP = Reg3Fields::DISABLE_IDLE_SKIP;
    using DOUBLE_IBIAS_CMP_LP_LPSR = Reg3Fields::DOUBLE_IBIAS_CMP_LP_LPSR;
    using REG_FBK_SEL = Reg3Fields::REG_FBK_SEL;
    using MINPWR_DC_HALFCLK = Reg3Fields::MINPWR_DC_HALFCLK;
    using MINPWR_HALF_FETS = Reg3Fields::MINPWR_HALF_FETS;
    using MISC_DELAY_TIMING = Reg3Fields::MISC_DELAY_TIMING;
    using VDD1P0CTRL_DISABLE_STEP = Reg3Fields::VDD1P0CTRL_DISABLE_STEP;
    using VDD1P8CTRL_DISABLE_STEP = Reg3Fields::VDD1P8CTRL_DISABLE_STEP;
  };

  // DCDC Register 4
  struct Reg4Fields {
    // Configures CTRL0[ENABLE] (DCDC Enable) for Setpoints 0-15
    using ENABLE_SP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg4Fields

  struct REG4 : ftl::mmio::Register<
      0x40CA8018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg4Fields::ENABLE_SP,
      ftl::mmio::Reserved<16, 16>> {
    using ENABLE_SP = Reg4Fields::ENABLE_SP;
  };

  // DCDC Register 5
  struct Reg5Fields {
    // Configures CTRL0[DIG_EN] (DCDC_DIG Enable) for Setpoints 0-15. Always set these bits to 1.
    using DIG_EN_SP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg5Fields

  struct REG5 : ftl::mmio::Register<
      0x40CA801Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg5Fields::DIG_EN_SP,
      ftl::mmio::Reserved<16, 16>> {
    using DIG_EN_SP = Reg5Fields::DIG_EN_SP;
  };

  // DCDC Register 6
  struct Reg6Fields {
    // Configures CTRL0[LP_MODE_EN] (LP Mode Enable) for Setpoints 0-15
    using LP_MODE_SP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg6Fields

  struct REG6 : ftl::mmio::Register<
      0x40CA8020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg6Fields::LP_MODE_SP,
      ftl::mmio::Reserved<16, 16>> {
    using LP_MODE_SP = Reg6Fields::LP_MODE_SP;
  };

  // DCDC Register 7
  struct Reg7Fields {
    // Configures CTRL0[STBY_EN] (Standby Enable) for Setpoints 0-15
    using STBY_EN_SP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg7Fields

  struct REG7 : ftl::mmio::Register<
      0x40CA8024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg7Fields::STBY_EN_SP,
      ftl::mmio::Reserved<16, 16>> {
    using STBY_EN_SP = Reg7Fields::STBY_EN_SP;
  };

  // DCDC Register 7 plus
  struct Reg7pFields {
    // Configures CTRL0[STBY_LP_MODE_EN] (LP Mode via GPC Enable) for Setpoints 0-15
    using STBY_LP_MODE_SP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg7pFields

  struct REG7P : ftl::mmio::Register<
      0x40CA8028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg7pFields::STBY_LP_MODE_SP,
      ftl::mmio::Reserved<16, 16>> {
    using STBY_LP_MODE_SP = Reg7pFields::STBY_LP_MODE_SP;
  };

  // DCDC Register 8
  struct Reg8Fields {
    // Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 0-3
    using ANA_TRG_SP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg8Fields

  struct REG8 : ftl::mmio::Register<
      0x40CA802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg8Fields::ANA_TRG_SP0> {
    using ANA_TRG_SP0 = Reg8Fields::ANA_TRG_SP0;
  };

  // DCDC Register 9
  struct Reg9Fields {
    // Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 4-7
    using ANA_TRG_SP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg9Fields

  struct REG9 : ftl::mmio::Register<
      0x40CA8030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg9Fields::ANA_TRG_SP1> {
    using ANA_TRG_SP1 = Reg9Fields::ANA_TRG_SP1;
  };

  // DCDC Register 10
  struct Reg10Fields {
    // Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 8-11
    using ANA_TRG_SP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg10Fields

  struct REG10 : ftl::mmio::Register<
      0x40CA8034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg10Fields::ANA_TRG_SP2> {
    using ANA_TRG_SP2 = Reg10Fields::ANA_TRG_SP2;
  };

  // DCDC Register 11
  struct Reg11Fields {
    // Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 12-15
    using ANA_TRG_SP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg11Fields

  struct REG11 : ftl::mmio::Register<
      0x40CA8038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg11Fields::ANA_TRG_SP3> {
    using ANA_TRG_SP3 = Reg11Fields::ANA_TRG_SP3;
  };

  // DCDC Register 12
  struct Reg12Fields {
    // Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 0-3
    using DIG_TRG_SP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg12Fields

  struct REG12 : ftl::mmio::Register<
      0x40CA803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg12Fields::DIG_TRG_SP0> {
    using DIG_TRG_SP0 = Reg12Fields::DIG_TRG_SP0;
  };

  // DCDC Register 13
  struct Reg13Fields {
    // Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 4-7
    using DIG_TRG_SP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg13Fields

  struct REG13 : ftl::mmio::Register<
      0x40CA8040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg13Fields::DIG_TRG_SP1> {
    using DIG_TRG_SP1 = Reg13Fields::DIG_TRG_SP1;
  };

  // DCDC Register 14
  struct Reg14Fields {
    // Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 8-11
    using DIG_TRG_SP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg14Fields

  struct REG14 : ftl::mmio::Register<
      0x40CA8044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg14Fields::DIG_TRG_SP2> {
    using DIG_TRG_SP2 = Reg14Fields::DIG_TRG_SP2;
  };

  // DCDC Register 15
  struct Reg15Fields {
    // Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 12-15
    using DIG_TRG_SP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg15Fields

  struct REG15 : ftl::mmio::Register<
      0x40CA8048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg15Fields::DIG_TRG_SP3> {
    using DIG_TRG_SP3 = Reg15Fields::DIG_TRG_SP3;
  };

  // DCDC Register 16
  struct Reg16Fields {
    // Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 0-3
    using ANA_STBY_TRG_SP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg16Fields

  struct REG16 : ftl::mmio::Register<
      0x40CA804Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg16Fields::ANA_STBY_TRG_SP0> {
    using ANA_STBY_TRG_SP0 = Reg16Fields::ANA_STBY_TRG_SP0;
  };

  // DCDC Register 17
  struct Reg17Fields {
    // Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 4-7
    using ANA_STBY_TRG_SP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg17Fields

  struct REG17 : ftl::mmio::Register<
      0x40CA8050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg17Fields::ANA_STBY_TRG_SP1> {
    using ANA_STBY_TRG_SP1 = Reg17Fields::ANA_STBY_TRG_SP1;
  };

  // DCDC Register 18
  struct Reg18Fields {
    // Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 8-11
    using ANA_STBY_TRG_SP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg18Fields

  struct REG18 : ftl::mmio::Register<
      0x40CA8054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg18Fields::ANA_STBY_TRG_SP2> {
    using ANA_STBY_TRG_SP2 = Reg18Fields::ANA_STBY_TRG_SP2;
  };

  // DCDC Register 19
  struct Reg19Fields {
    // Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 12-15
    using ANA_STBY_TRG_SP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg19Fields

  struct REG19 : ftl::mmio::Register<
      0x40CA8058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg19Fields::ANA_STBY_TRG_SP3> {
    using ANA_STBY_TRG_SP3 = Reg19Fields::ANA_STBY_TRG_SP3;
  };

  // DCDC Register 20
  struct Reg20Fields {
    // Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 0-3
    using DIG_STBY_TRG_SP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg20Fields

  struct REG20 : ftl::mmio::Register<
      0x40CA805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg20Fields::DIG_STBY_TRG_SP0> {
    using DIG_STBY_TRG_SP0 = Reg20Fields::DIG_STBY_TRG_SP0;
  };

  // DCDC Register 21
  struct Reg21Fields {
    // Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 4-7
    using DIG_STBY_TRG_SP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg21Fields

  struct REG21 : ftl::mmio::Register<
      0x40CA8060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg21Fields::DIG_STBY_TRG_SP1> {
    using DIG_STBY_TRG_SP1 = Reg21Fields::DIG_STBY_TRG_SP1;
  };

  // DCDC Register 22
  struct Reg22Fields {
    // Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 8-11
    using DIG_STBY_TRG_SP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg22Fields

  struct REG22 : ftl::mmio::Register<
      0x40CA8064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg22Fields::DIG_STBY_TRG_SP2> {
    using DIG_STBY_TRG_SP2 = Reg22Fields::DIG_STBY_TRG_SP2;
  };

  // DCDC Register 23
  struct Reg23Fields {
    // Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 12-15
    using DIG_STBY_TRG_SP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg23Fields

  struct REG23 : ftl::mmio::Register<
      0x40CA8068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Reg23Fields::DIG_STBY_TRG_SP3> {
    using DIG_STBY_TRG_SP3 = Reg23Fields::DIG_STBY_TRG_SP3;
  };

  // DCDC Register 24
  struct Reg24Fields {
    // Internal count for dcdc_ok timeout
    using OK_COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Reg24Fields

  struct REG24 : ftl::mmio::Register<
      0x40CA806Cu,
      std::uint32_t,
      0x00100000u,
      ftl::mmio::RW,
      Reg24Fields::OK_COUNT> {
    using OK_COUNT = Reg24Fields::OK_COUNT;
  };

};

}  // namespace regs