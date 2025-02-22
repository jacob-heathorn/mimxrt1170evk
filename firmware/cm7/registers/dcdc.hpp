#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DCDC
namespace nDCDC {


// DCDC Control Register 0
union CTRL0 {
  
  // DCDC Enable
  enum class eENABLE : uint32_t {
    // Disable (Bypass)
    edisable = 0,
    // Enable
    eenable = 1,
  };
  
  // Enable the DCDC_DIG switching converter output
  enum class eDIG_EN : uint32_t {
    // Enable
    eenable = 1,
  };
  
  // DCDC standby mode enable
  enum class eSTBY_EN : uint32_t {
    // Enter into standby mode
    eenable = 1,
  };
  
  // DCDC low-power (LP) mode enable DCDC can't start up directly into LP mode
  enum class eLP_MODE_EN : uint32_t {
    // Enter into low-power mode
    eenable = 1,
  };
  
  // DCDC low-power mode enable by GPC standby request
  enum class eSTBY_LP_MODE_EN : uint32_t {
    // Disable DCDC entry into low-power mode from a GPC standby request
    edisable = 0,
    // Enable DCDC to enter into low-power mode from a GPC standby request
    eenable = 1,
  };
  
  // Enable internal count for DCDC_OK timeout
  enum class eENABLE_DCDC_CNT : uint32_t {
    // Wait DCDC_OK for ACK
    ewait = 0,
    // Enable internal count for DCDC_OK timeout
    eenable_count = 1,
  };
  
  // Hold trim input
  enum class eTRIM_HOLD : uint32_t {
    // Sample trim input
    esample = 0,
    // Hold trim input
    ehold = 1,
  };
  
  // Control mode
  enum class eCONTROL_MODE : uint32_t {
    // Software control mode
    eswctrl = 0,
    // Hardware control mode (controlled by GPC Setpoints)
    egpc = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - DCDC Enable
    eENABLE ENABLE : 1;
    // read-write - Enable the DCDC_DIG switching converter output
    eDIG_EN DIG_EN : 1;
    // read-write - DCDC standby mode enable
    eSTBY_EN STBY_EN : 1;
    // read-write - DCDC low-power (LP) mode enable DCDC can't start up directly into LP mode
    eLP_MODE_EN LP_MODE_EN : 1;
    // read-write - DCDC low-power mode enable by GPC standby request
    eSTBY_LP_MODE_EN STBY_LP_MODE_EN : 1;
    // read-write - Enable internal count for DCDC_OK timeout
    eENABLE_DCDC_CNT ENABLE_DCDC_CNT : 1;
    // read-write - Hold trim input
    eTRIM_HOLD TRIM_HOLD : 1;
    uint32_t _reserved_0 : 12;
    // read-write - DEBUG_BITS[11:0]
    uint32_t DEBUG_BITS : 12;
    // read-write - Control mode
    eCONTROL_MODE CONTROL_MODE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000003; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x40CA8000); }
};

// DCDC Control Register 1
union CTRL1 {
  
  // Target value of VDD1P8 in buck mode, 25mV each step from 0x00 to 0x1F:
  enum class eVDD1P8CTRL_TRG : uint32_t {
    // 1.5V
    ev1p5 = 0,
    // 1.8V
    ev1p8 = 12,
    // 2.275V
    ev2p275 = 31,
  };
  
  // Target value of VDD1P0 in buck mode, 25mV each step from 0x00 to 0x1F:
  enum class eVDD1P0CTRL_TRG : uint32_t {
    // 0.6V
    ev0p6 = 0,
    // 1.0V
    ev1p0 = 16,
    // 1.375V
    ev1p375 = 31,
  };
  
  // Target value of VDD1P8 in standby mode, 25mV each step from 0x00 to 0x1F:
  enum class eVDD1P8CTRL_STBY_TRG : uint32_t {
    // 1.525V
    ev1p525 = 0,
    // 1.8V
    ev1p8 = 11,
    // 2.3V
    ev2p4 = 31,
  };
  
  // Target value of VDD1P0 in standby mode, 25mV each step from 0x00 to 0x1F:
  enum class eVDD1P0CTRL_STBY_TRG : uint32_t {
    // 0.625V
    ev0p625 = 0,
    // 1.0V
    ev1p0 = 15,
    // 1.4V
    ev1p4 = 31,
  };
  
  // Bit field definition.
  struct {
    // read-write - Target value of VDD1P8 in buck mode, 25mV each step from 0x00 to 0x1F:
    eVDD1P8CTRL_TRG VDD1P8CTRL_TRG : 5;
    uint32_t _reserved_0 : 3;
    // read-write - Target value of VDD1P0 in buck mode, 25mV each step from 0x00 to 0x1F:
    eVDD1P0CTRL_TRG VDD1P0CTRL_TRG : 5;
    uint32_t _reserved_1 : 3;
    // read-write - Target value of VDD1P8 in standby mode, 25mV each step from 0x00 to 0x1F:
    eVDD1P8CTRL_STBY_TRG VDD1P8CTRL_STBY_TRG : 5;
    uint32_t _reserved_2 : 3;
    // read-write - Target value of VDD1P0 in standby mode, 25mV each step from 0x00 to 0x1F:
    eVDD1P0CTRL_STBY_TRG VDD1P0CTRL_STBY_TRG : 5;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x0F0B100C; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x40CA8004); }
};

// DCDC Register 0
union REG0 {
  
  // Power Down Zero Cross Detection
  enum class ePWD_ZCD : uint32_t {
    // Zero cross detetion function powered up
    epowered_up = 0,
    // Zero cross detetion function powered down
    epowered_down = 1,
  };
  
  // Disable Auto Clock Switch
  enum class eDISABLE_AUTO_CLK_SWITCH : uint32_t {
    // If DISABLE_AUTO_CLK_SWITCH is set to 0 and 24M xtal is OK, the clock source will switch from internal ring oscillator to 24M xtal automatically
    extal_clk = 0,
    // If DISABLE_AUTO_CLK_SWITCH is set to 1, SEL_CLK will determine which clock source the DCDC uses
    esel_clk = 1,
  };
  
  // Select Clock
  enum class eSEL_CLK : uint32_t {
    // DCDC uses internal ring oscillator
    eint_rng_osc = 0,
    // DCDC uses 24M xtal
    extal_24M = 1,
  };
  
  // Power down internal ring oscillator
  enum class ePWD_OSC_INT : uint32_t {
    // Internal ring oscillator powered up
    epowered_up = 0,
    // Internal ring oscillator powered down
    epowered_down = 1,
  };
  
  // Power down signal of the current detector
  enum class ePWD_CUR_SNS_CMP : uint32_t {
    // Current Detector powered up
    epowered_up = 0,
    // Current Detector powered down
    epowered_down = 1,
  };
  
  // Power down overcurrent detection comparator
  enum class ePWD_OVERCUR_DET : uint32_t {
    // Overcurrent detection comparator is enabled
    eenabled = 0,
    // Overcurrent detection comparator is disabled
    edisabled = 1,
  };
  
  // Set to "1" to power down the low voltage detection comparator
  enum class ePWD_CMP_DCDC_IN_DET : uint32_t {
    // Low voltage detection comparator is enabled
    eenabled = 0,
    // Low voltage detection comparator is disabled
    edisabled = 1,
  };
  
  // Power Down High Voltage Detection for VDD1P8
  enum class ePWD_HIGH_VDD1P8_DET : uint32_t {
    // Overvoltage detection comparator for the VDD1P8 output is enabled
    eenabled = 0,
    // Overvoltage detection comparator for the VDD1P8 output is disabled
    edisabled = 1,
  };
  
  // Power Down High Voltage Detection for VDD1P0
  enum class ePWD_HIGH_VDD1P0_DET : uint32_t {
    // Overvoltage detection comparator for the VDD1P0 output is enabled
    eenabled = 0,
    // Overvoltage detection comparator for the VDD1P0 output is disabled
    edisabled = 1,
  };
  
  // Low Power High Hysteric Value
  enum class eLP_HIGH_HYS : uint32_t {
    // Adjust hysteretic value in low power to 12.5mV
    elp_12p5mV = 0,
    // Adjust hysteretic value in low power to 25mV
    elp_25mV = 1,
  };
  
  // power down the out-of-range detection comparator
  enum class ePWD_CMP_OFFSET : uint32_t {
    // Out-of-range comparator powered up
    epowered_up = 0,
    // Out-of-range comparator powered down
    epowered_down = 1,
  };
  
  // Disable xtalok detection circuit
  enum class eXTALOK_DISABLE : uint32_t {
    // Enable xtalok detection circuit
    eenabled = 0,
    // Disable xtalok detection circuit and always outputs OK signal "1"
    edisabled = 1,
  };
  
  // 24M XTAL OK
  enum class eXTAL_24M_OK : uint32_t {
    // DCDC uses internal ring oscillator
    eint_rng_osc = 0,
    // DCDC uses xtal 24M
    extal_24M = 1,
  };
  
  // DCDC Output OK
  enum class eSTS_DC_OK : uint32_t {
    // DCDC is settling
    enot_settled = 0,
    // DCDC already settled
    esettled = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Power Down Zero Cross Detection
    ePWD_ZCD PWD_ZCD : 1;
    // read-write - Disable Auto Clock Switch
    eDISABLE_AUTO_CLK_SWITCH DISABLE_AUTO_CLK_SWITCH : 1;
    // read-write - Select Clock
    eSEL_CLK SEL_CLK : 1;
    // read-write - Power down internal ring oscillator
    ePWD_OSC_INT PWD_OSC_INT : 1;
    // read-write - Power down signal of the current detector
    ePWD_CUR_SNS_CMP PWD_CUR_SNS_CMP : 1;
    // read-write - Current Sense (detector) Threshold
    uint32_t CUR_SNS_THRSH : 3;
    // read-write - Power down overcurrent detection comparator
    ePWD_OVERCUR_DET PWD_OVERCUR_DET : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Set to "1" to power down the low voltage detection comparator
    ePWD_CMP_DCDC_IN_DET PWD_CMP_DCDC_IN_DET : 1;
    uint32_t _reserved_1 : 4;
    // read-write - Power Down High Voltage Detection for VDD1P8
    ePWD_HIGH_VDD1P8_DET PWD_HIGH_VDD1P8_DET : 1;
    // read-write - Power Down High Voltage Detection for VDD1P0
    ePWD_HIGH_VDD1P0_DET PWD_HIGH_VDD1P0_DET : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Low Power High Hysteric Value
    eLP_HIGH_HYS LP_HIGH_HYS : 1;
    uint32_t _reserved_3 : 4;
    // read-write - power down the out-of-range detection comparator
    ePWD_CMP_OFFSET PWD_CMP_OFFSET : 1;
    // read-write - Disable xtalok detection circuit
    eXTALOK_DISABLE XTALOK_DISABLE : 1;
    uint32_t _reserved_4 : 1;
    // read-write - 24M XTAL OK
    eXTAL_24M_OK XTAL_24M_OK : 1;
    uint32_t _reserved_5 : 1;
    // read-only - DCDC Output OK
    eSTS_DC_OK STS_DC_OK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG0() = delete;
  inline void Reset() volatile { this->value = 0x04030511; }
  static inline volatile REG0 &Instance() { return *reinterpret_cast<volatile REG0*>(0x40CA8008); }
};

// DCDC Register 1
union REG1 {
  
  // DM Control
  enum class eDM_CTRL : uint32_t {
    // No change to ripple when the discontinuous current is present in DCM.
    eDM_CTRL_0 = 0,
    // Improves ripple when the inductor current goes to zero in DCM.
    eDM_CTRL_1 = 1,
  };
  
  // Load Resistor Enable
  enum class eRLOAD_REG_EN_LPSR : uint32_t {
    // Disconnect load resistor
    eloadR_disconnect = 0,
    // Connect load resistor
    eloadR_connect = 1,
  };
  
  // Trim Bandgap Voltage
  enum class eVBG_TRIM : uint32_t {
    // 0.452V
    eminvolt = 0,
    // 0.5V
    edefault = 16,
    // 0.545V
    emaxvolt = 31,
  };
  
  // Low Power Comparator Current Bias
  enum class eLP_CMP_ISRC_SEL : uint32_t {
    // 50nA
    esel0 = 0,
    // 100nA
    esel1 = 1,
    // 200nA
    esel2 = 2,
    // 400nA
    esel3 = 3,
  };
  
  // Enable hysteresis in switching converter common mode analog comparators
  enum class eLOOPCTRL_EN_CM_HYST : uint32_t {
    // Disable hysteresis in switching converter common mode analog comparators
    edisable = 0,
    // Enable hysteresis in switching converter common mode analog comparators
    eenable = 1,
  };
  
  // Enable hysteresis in switching converter differential mode analog comparators
  enum class eLOOPCTRL_EN_DF_HYST : uint32_t {
    // Disable hysteresis in switching converter differential mode analog comparators
    edisable = 0,
    // Enable hysteresis in switching converter differential mode analog comparators
    eenable = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - DM Control
    eDM_CTRL DM_CTRL : 1;
    // read-write - Load Resistor Enable
    eRLOAD_REG_EN_LPSR RLOAD_REG_EN_LPSR : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Trim Bandgap Voltage
    eVBG_TRIM VBG_TRIM : 5;
    // read-write - Low Power Comparator Current Bias
    eLP_CMP_ISRC_SEL LP_CMP_ISRC_SEL : 2;
    uint32_t _reserved_2 : 14;
    // read-write - Increase Threshold Detection
    uint32_t LOOPCTRL_CM_HST_THRESH : 1;
    // read-write - Increase Threshold Detection
    uint32_t LOOPCTRL_DF_HST_THRESH : 1;
    // read-write - Enable hysteresis in switching converter common mode analog comparators
    eLOOPCTRL_EN_CM_HYST LOOPCTRL_EN_CM_HYST : 1;
    // read-write - Enable hysteresis in switching converter differential mode analog comparators
    eLOOPCTRL_EN_DF_HYST LOOPCTRL_EN_DF_HYST : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG1() = delete;
  inline void Reset() volatile { this->value = 0x01CD5430; }
  static inline volatile REG1 &Instance() { return *reinterpret_cast<volatile REG1*>(0x40CA800C); }
};

// DCDC Register 2
union REG2 {
  
  // Bit field definition.
  struct {
    // read-write - Ratio of integral control parameter to proportional control parameter in the switching DCDC converter, and can be used to optimize efficiency and loop response
    uint32_t LOOPCTRL_DC_C : 2;
    // read-write - Magnitude of proportional control parameter in the switching DCDC converter control loop.
    uint32_t LOOPCTRL_DC_R : 4;
    // read-write - Two's complement feed forward step in duty cycle in the switching DCDC converter
    uint32_t LOOPCTRL_DC_FF : 3;
    // read-write - Enable RC Scale
    uint32_t LOOPCTRL_EN_RCSCALE : 3;
    // read-write - Increase the threshold detection for RC scale circuit.
    uint32_t LOOPCTRL_RCSCALE_THRSH : 1;
    // read-write - Invert the sign of the hysteresis in DCDC analog comparators.
    uint32_t LOOPCTRL_HYST_SIGN : 1;
    uint32_t _reserved_0 : 1;
    // read-write - This bit enables the DCDC to improve efficiency and minimize ripple using the information from the BATT_VAL field
    uint32_t BATTMONITOR_EN_BATADJ : 1;
    // read-write - Software should be configured to place the battery voltage in this register measured with an 8-mV LSB resolution through the ADC
    uint32_t BATTMONITOR_BATT_VAL : 10;
    uint32_t _reserved_1 : 2;
    // read-write - DCM Set Control
    uint32_t DCM_SET_CTRL : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Set high to enable supply stepping to change only after the differential control loop has toggled as well
    uint32_t LOOPCTRL_TOGGLE_DIF : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG2() = delete;
  inline void Reset() volatile { this->value = 0x02108089; }
  static inline volatile REG2 &Instance() { return *reinterpret_cast<volatile REG2*>(0x40CA8010); }
};

// DCDC Register 3
union REG3 {
  
  // signal "1" when the voltage on DCDC_IN is lower than 2.6V
  enum class eIN_BROWNOUT : uint32_t {
    // DCDC_IN is lower than 2.6V
    ebrownout = 1,
  };
  
  // signal "1" when overvoltage on the VDD1P8 output happens
  enum class eOVERVOLT_VDD1P8_DET_OUT : uint32_t {
    // VDD1P8 Overvoltage
    eovervoltage_1p8 = 1,
  };
  
  // signal "1" when overvoltage on the VDD1P0 output happens
  enum class eOVERVOLT_VDD1P0_DET_OUT : uint32_t {
    // VDD1P0 Overvoltage
    eovervoltage_1p0 = 1,
  };
  
  // signal "1" when overcurrent happens.
  enum class eOVERCUR_DETECT_OUT : uint32_t {
    // Overcurrent
    eovercurrent_signal = 1,
  };
  
  // no description available
  enum class eENABLE_FF : uint32_t {
    // Enable feed-forward (FF) function that can speed up transient settling.
    eenable_ff = 1,
  };
  
  // Disable Pulse Skip
  enum class eDISABLE_PULSE_SKIP : uint32_t {
    // Stop charging if the duty cycle is lower than what is set by NEGLIMIT_IN
    estopcharge = 0,
  };
  
  // no description available
  enum class eDISABLE_IDLE_SKIP : uint32_t {
    // Enable the idle skip function. The DCDC will be idle when out-of-range comparator detects the output voltage is higher than the target by 25mV. This function requires the out-of-range comparator to be enabled (PWD_CMP_OFFSET=0).
    eenable = 0,
  };
  
  // no description available
  enum class eDOUBLE_IBIAS_CMP_LP_LPSR : uint32_t {
    // Double the bias current of the comparator for low-voltage detector in LP (low-power) mode
    edoublebias = 1,
  };
  
  // Set DCDC clock to half freqeuncy for continuous mode.
  enum class eMINPWR_DC_HALFCLK : uint32_t {
    // DCDC clock remains at full frequency for continuous mode
    efullfreq = 0,
    // DCDC clock set to half frequency for continuous mode
    ehalffreq = 1,
  };
  
  // Disable Step for VDD1P0
  enum class eVDD1P0CTRL_DISABLE_STEP : uint32_t {
    // Enable stepping for VDD1P0
    eenable = 0,
    // Disable stepping for VDD1P0
    edisable = 1,
  };
  
  // Disable Step for VDD1P8
  enum class eVDD1P8CTRL_DISABLE_STEP : uint32_t {
    // Enable stepping for VDD1P8
    eenable = 0,
    // Disable stepping for VDD1P8
    edisable = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 14;
    // read-only - signal "1" when the voltage on DCDC_IN is lower than 2.6V
    eIN_BROWNOUT IN_BROWNOUT : 1;
    // read-only - signal "1" when overvoltage on the VDD1P8 output happens
    eOVERVOLT_VDD1P8_DET_OUT OVERVOLT_VDD1P8_DET_OUT : 1;
    // read-only - signal "1" when overvoltage on the VDD1P0 output happens
    eOVERVOLT_VDD1P0_DET_OUT OVERVOLT_VDD1P0_DET_OUT : 1;
    // read-only - signal "1" when overcurrent happens.
    eOVERCUR_DETECT_OUT OVERCUR_DETECT_OUT : 1;
    // read-write - no description available
    eENABLE_FF ENABLE_FF : 1;
    // read-write - Disable Pulse Skip
    eDISABLE_PULSE_SKIP DISABLE_PULSE_SKIP : 1;
    // read-write - no description available
    eDISABLE_IDLE_SKIP DISABLE_IDLE_SKIP : 1;
    // read-write - no description available
    eDOUBLE_IBIAS_CMP_LP_LPSR DOUBLE_IBIAS_CMP_LP_LPSR : 1;
    // read-write - Select the feedback point of the internal regulator
    uint32_t REG_FBK_SEL : 2;
    // read-write - Set DCDC clock to half freqeuncy for continuous mode.
    eMINPWR_DC_HALFCLK MINPWR_DC_HALFCLK : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Use half switch FET
    uint32_t MINPWR_HALF_FETS : 1;
    // read-write - Miscellaneous Delay Timing
    uint32_t MISC_DELAY_TIMING : 1;
    uint32_t _reserved_2 : 1;
    // read-write - Disable Step for VDD1P0
    eVDD1P0CTRL_DISABLE_STEP VDD1P0CTRL_DISABLE_STEP : 1;
    // read-write - Disable Step for VDD1P8
    eVDD1P8CTRL_DISABLE_STEP VDD1P8CTRL_DISABLE_STEP : 1;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG3() = delete;
  inline void Reset() volatile { this->value = 0x00980000; }
  static inline volatile REG3 &Instance() { return *reinterpret_cast<volatile REG3*>(0x40CA8014); }
};

// DCDC Register 4
union REG4 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL0[ENABLE] (DCDC Enable) for Setpoints 0-15
    uint32_t ENABLE_SP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG4 &Instance() { return *reinterpret_cast<volatile REG4*>(0x40CA8018); }
};

// DCDC Register 5
union REG5 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL0[DIG_EN] (DCDC_DIG Enable) for Setpoints 0-15. Always set these bits to 1.
    uint32_t DIG_EN_SP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG5 &Instance() { return *reinterpret_cast<volatile REG5*>(0x40CA801C); }
};

// DCDC Register 6
union REG6 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL0[LP_MODE_EN] (LP Mode Enable) for Setpoints 0-15
    uint32_t LP_MODE_SP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG6 &Instance() { return *reinterpret_cast<volatile REG6*>(0x40CA8020); }
};

// DCDC Register 7
union REG7 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL0[STBY_EN] (Standby Enable) for Setpoints 0-15
    uint32_t STBY_EN_SP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG7 &Instance() { return *reinterpret_cast<volatile REG7*>(0x40CA8024); }
};

// DCDC Register 7 plus
union REG7P {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL0[STBY_LP_MODE_EN] (LP Mode via GPC Enable) for Setpoints 0-15
    uint32_t STBY_LP_MODE_SP : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG7P() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG7P &Instance() { return *reinterpret_cast<volatile REG7P*>(0x40CA8028); }
};

// DCDC Register 8
union REG8 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 0-3
    uint32_t ANA_TRG_SP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG8 &Instance() { return *reinterpret_cast<volatile REG8*>(0x40CA802C); }
};

// DCDC Register 9
union REG9 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 4-7
    uint32_t ANA_TRG_SP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG9 &Instance() { return *reinterpret_cast<volatile REG9*>(0x40CA8030); }
};

// DCDC Register 10
union REG10 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 8-11
    uint32_t ANA_TRG_SP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG10 &Instance() { return *reinterpret_cast<volatile REG10*>(0x40CA8034); }
};

// DCDC Register 11
union REG11 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_TRG] FOR Setpoints 12-15
    uint32_t ANA_TRG_SP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG11 &Instance() { return *reinterpret_cast<volatile REG11*>(0x40CA8038); }
};

// DCDC Register 12
union REG12 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 0-3
    uint32_t DIG_TRG_SP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG12 &Instance() { return *reinterpret_cast<volatile REG12*>(0x40CA803C); }
};

// DCDC Register 13
union REG13 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 4-7
    uint32_t DIG_TRG_SP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG13 &Instance() { return *reinterpret_cast<volatile REG13*>(0x40CA8040); }
};

// DCDC Register 14
union REG14 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 8-11
    uint32_t DIG_TRG_SP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG14 &Instance() { return *reinterpret_cast<volatile REG14*>(0x40CA8044); }
};

// DCDC Register 15
union REG15 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_TRG] FOR Setpoints 12-15
    uint32_t DIG_TRG_SP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG15 &Instance() { return *reinterpret_cast<volatile REG15*>(0x40CA8048); }
};

// DCDC Register 16
union REG16 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 0-3
    uint32_t ANA_STBY_TRG_SP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG16 &Instance() { return *reinterpret_cast<volatile REG16*>(0x40CA804C); }
};

// DCDC Register 17
union REG17 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 4-7
    uint32_t ANA_STBY_TRG_SP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG17 &Instance() { return *reinterpret_cast<volatile REG17*>(0x40CA8050); }
};

// DCDC Register 18
union REG18 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 8-11
    uint32_t ANA_STBY_TRG_SP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG18 &Instance() { return *reinterpret_cast<volatile REG18*>(0x40CA8054); }
};

// DCDC Register 19
union REG19 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P8CTRL_STBY_TRG] FOR Setpoints 12-15
    uint32_t ANA_STBY_TRG_SP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG19 &Instance() { return *reinterpret_cast<volatile REG19*>(0x40CA8058); }
};

// DCDC Register 20
union REG20 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 0-3
    uint32_t DIG_STBY_TRG_SP0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG20 &Instance() { return *reinterpret_cast<volatile REG20*>(0x40CA805C); }
};

// DCDC Register 21
union REG21 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 4-7
    uint32_t DIG_STBY_TRG_SP1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG21 &Instance() { return *reinterpret_cast<volatile REG21*>(0x40CA8060); }
};

// DCDC Register 22
union REG22 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 8-11
    uint32_t DIG_STBY_TRG_SP2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG22 &Instance() { return *reinterpret_cast<volatile REG22*>(0x40CA8064); }
};

// DCDC Register 23
union REG23 {
  
  // Bit field definition.
  struct {
    // read-write - Configures CTRL1[VDD1P0CTRL_STBY_TRG] FOR Setpoints 12-15
    uint32_t DIG_STBY_TRG_SP3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG23 &Instance() { return *reinterpret_cast<volatile REG23*>(0x40CA8068); }
};

// DCDC Register 24
union REG24 {
  
  // Bit field definition.
  struct {
    // read-write - Internal count for dcdc_ok timeout
    uint32_t OK_COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REG24() = delete;
  inline void Reset() volatile { this->value = 0x00100000; }
  static inline volatile REG24 &Instance() { return *reinterpret_cast<volatile REG24*>(0x40CA806C); }
};


} // namespace nDCDC