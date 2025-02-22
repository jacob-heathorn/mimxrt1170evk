#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // DCDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nDCDC {


// DCDC Control Register 0
//
union CTRL0 {
  
  // Enum definitions.
  enum class eENABLE : uint32_t {
    edisable = 0, // Disable (Bypass)
    eenable = 1, // Enable
  };
  enum class eDIG_EN : uint32_t {
    eenable = 1, // Enable
  };
  enum class eSTBY_EN : uint32_t {
    eenable = 1, // Enter into standby mode
  };
  enum class eLP_MODE_EN : uint32_t {
    eenable = 1, // Enter into low-power mode
  };
  enum class eSTBY_LP_MODE_EN : uint32_t {
    edisable = 0, // Disable DCDC entry into low-power mode from a GPC standby request
    eenable = 1, // Enable DCDC to enter into low-power mode from a GPC standby request
  };
  enum class eENABLE_DCDC_CNT : uint32_t {
    ewait = 0, // Wait DCDC_OK for ACK
    eenable_count = 1, // Enable internal count for DCDC_OK timeout
  };
  enum class eTRIM_HOLD : uint32_t {
    esample = 0, // Sample trim input
    ehold = 1, // Hold trim input
  };
  enum class eCONTROL_MODE : uint32_t {
    eswctrl = 0, // Software control mode
    egpc = 1, // Hardware control mode (controlled by GPC Setpoints)
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eDIG_EN DIG_EN : 1;
    eSTBY_EN STBY_EN : 1;
    eLP_MODE_EN LP_MODE_EN : 1;
    eSTBY_LP_MODE_EN STBY_LP_MODE_EN : 1;
    eENABLE_DCDC_CNT ENABLE_DCDC_CNT : 1;
    eTRIM_HOLD TRIM_HOLD : 1;
    uint32_t _reserved_7 : 12;
    uint32_t DEBUG_BITS : 12;
    eCONTROL_MODE CONTROL_MODE : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000003; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x40CA8000); }
};

// DCDC Control Register 1
//
union CTRL1 {
  
  // Enum definitions.
  enum class eVDD1P8CTRL_TRG : uint32_t {
    ev1p5 = 0, // 1.5V
    ev1p8 = 12, // 1.8V
    ev2p275 = 31, // 2.275V
  };
  enum class eVDD1P0CTRL_TRG : uint32_t {
    ev0p6 = 0, // 0.6V
    ev1p0 = 16, // 1.0V
    ev1p375 = 31, // 1.375V
  };
  enum class eVDD1P8CTRL_STBY_TRG : uint32_t {
    ev1p525 = 0, // 1.525V
    ev1p8 = 11, // 1.8V
    ev2p4 = 31, // 2.3V
  };
  enum class eVDD1P0CTRL_STBY_TRG : uint32_t {
    ev0p625 = 0, // 0.625V
    ev1p0 = 15, // 1.0V
    ev1p4 = 31, // 1.4V
  };
  
  // Bit field definition.
  struct {
    eVDD1P8CTRL_TRG VDD1P8CTRL_TRG : 5;
    uint32_t _reserved_1 : 3;
    eVDD1P0CTRL_TRG VDD1P0CTRL_TRG : 5;
    uint32_t _reserved_2 : 3;
    eVDD1P8CTRL_STBY_TRG VDD1P8CTRL_STBY_TRG : 5;
    uint32_t _reserved_3 : 3;
    eVDD1P0CTRL_STBY_TRG VDD1P0CTRL_STBY_TRG : 5;
    uint32_t _reserved_end : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x0F0B100C; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x40CA8004); }
};

// DCDC Register 0
//
union REG0 {
  
  // Enum definitions.
  enum class ePWD_ZCD : uint32_t {
    epowered_up = 0, // Zero cross detetion function powered up
    epowered_down = 1, // Zero cross detetion function powered down
  };
  enum class eDISABLE_AUTO_CLK_SWITCH : uint32_t {
    extal_clk = 0, // If DISABLE_AUTO_CLK_SWITCH is set to 0 and 24M xtal is OK, the clock source will switch from internal ring oscillator to 24M xtal automatically
    esel_clk = 1, // If DISABLE_AUTO_CLK_SWITCH is set to 1, SEL_CLK will determine which clock source the DCDC uses
  };
  enum class eSEL_CLK : uint32_t {
    eint_rng_osc = 0, // DCDC uses internal ring oscillator
    extal_24M = 1, // DCDC uses 24M xtal
  };
  enum class ePWD_OSC_INT : uint32_t {
    epowered_up = 0, // Internal ring oscillator powered up
    epowered_down = 1, // Internal ring oscillator powered down
  };
  enum class ePWD_CUR_SNS_CMP : uint32_t {
    epowered_up = 0, // Current Detector powered up
    epowered_down = 1, // Current Detector powered down
  };
  enum class ePWD_OVERCUR_DET : uint32_t {
    eenabled = 0, // Overcurrent detection comparator is enabled
    edisabled = 1, // Overcurrent detection comparator is disabled
  };
  enum class ePWD_CMP_DCDC_IN_DET : uint32_t {
    eenabled = 0, // Low voltage detection comparator is enabled
    edisabled = 1, // Low voltage detection comparator is disabled
  };
  enum class ePWD_HIGH_VDD1P8_DET : uint32_t {
    eenabled = 0, // Overvoltage detection comparator for the VDD1P8 output is enabled
    edisabled = 1, // Overvoltage detection comparator for the VDD1P8 output is disabled
  };
  enum class ePWD_HIGH_VDD1P0_DET : uint32_t {
    eenabled = 0, // Overvoltage detection comparator for the VDD1P0 output is enabled
    edisabled = 1, // Overvoltage detection comparator for the VDD1P0 output is disabled
  };
  enum class eLP_HIGH_HYS : uint32_t {
    elp_12p5mV = 0, // Adjust hysteretic value in low power to 12.5mV
    elp_25mV = 1, // Adjust hysteretic value in low power to 25mV
  };
  enum class ePWD_CMP_OFFSET : uint32_t {
    epowered_up = 0, // Out-of-range comparator powered up
    epowered_down = 1, // Out-of-range comparator powered down
  };
  enum class eXTALOK_DISABLE : uint32_t {
    eenabled = 0, // Enable xtalok detection circuit
    edisabled = 1, // Disable xtalok detection circuit and always outputs OK signal "1"
  };
  enum class eXTAL_24M_OK : uint32_t {
    eint_rng_osc = 0, // DCDC uses internal ring oscillator
    extal_24M = 1, // DCDC uses xtal 24M
  };
  enum class eSTS_DC_OK : uint32_t {
    enot_settled = 0, // DCDC is settling
    esettled = 1, // DCDC already settled
  };
  
  // Bit field definition.
  struct {
    ePWD_ZCD PWD_ZCD : 1;
    eDISABLE_AUTO_CLK_SWITCH DISABLE_AUTO_CLK_SWITCH : 1;
    eSEL_CLK SEL_CLK : 1;
    ePWD_OSC_INT PWD_OSC_INT : 1;
    ePWD_CUR_SNS_CMP PWD_CUR_SNS_CMP : 1;
    uint32_t CUR_SNS_THRSH : 3;
    ePWD_OVERCUR_DET PWD_OVERCUR_DET : 1;
    uint32_t _reserved_7 : 2;
    ePWD_CMP_DCDC_IN_DET PWD_CMP_DCDC_IN_DET : 1;
    uint32_t _reserved_8 : 4;
    ePWD_HIGH_VDD1P8_DET PWD_HIGH_VDD1P8_DET : 1;
    ePWD_HIGH_VDD1P0_DET PWD_HIGH_VDD1P0_DET : 1;
    uint32_t _reserved_10 : 3;
    eLP_HIGH_HYS LP_HIGH_HYS : 1;
    uint32_t _reserved_11 : 4;
    ePWD_CMP_OFFSET PWD_CMP_OFFSET : 1;
    eXTALOK_DISABLE XTALOK_DISABLE : 1;
    uint32_t _reserved_13 : 1;
    eXTAL_24M_OK XTAL_24M_OK : 1;
    uint32_t _reserved_14 : 1;
    eSTS_DC_OK STS_DC_OK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG0() = delete;
  inline void Reset() volatile { this->value = 0x04030511; }
  static inline volatile REG0 &Instance() { return *reinterpret_cast<volatile REG0*>(0x40CA8008); }
};

// DCDC Register 1
//
union REG1 {
  
  // Enum definitions.
  enum class eDM_CTRL : uint32_t {
    eDM_CTRL_0 = 0, // No change to ripple when the discontinuous current is present in DCM.
    eDM_CTRL_1 = 1, // Improves ripple when the inductor current goes to zero in DCM.
  };
  enum class eRLOAD_REG_EN_LPSR : uint32_t {
    eloadR_disconnect = 0, // Disconnect load resistor
    eloadR_connect = 1, // Connect load resistor
  };
  enum class eVBG_TRIM : uint32_t {
    eminvolt = 0, // 0.452V
    edefault = 16, // 0.5V
    emaxvolt = 31, // 0.545V
  };
  enum class eLP_CMP_ISRC_SEL : uint32_t {
    esel0 = 0, // 50nA
    esel1 = 1, // 100nA
    esel2 = 2, // 200nA
    esel3 = 3, // 400nA
  };
  enum class eLOOPCTRL_EN_CM_HYST : uint32_t {
    edisable = 0, // Disable hysteresis in switching converter common mode analog comparators
    eenable = 1, // Enable hysteresis in switching converter common mode analog comparators
  };
  enum class eLOOPCTRL_EN_DF_HYST : uint32_t {
    edisable = 0, // Disable hysteresis in switching converter differential mode analog comparators
    eenable = 1, // Enable hysteresis in switching converter differential mode analog comparators
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    eDM_CTRL DM_CTRL : 1;
    eRLOAD_REG_EN_LPSR RLOAD_REG_EN_LPSR : 1;
    uint32_t _reserved_2 : 1;
    eVBG_TRIM VBG_TRIM : 5;
    eLP_CMP_ISRC_SEL LP_CMP_ISRC_SEL : 2;
    uint32_t _reserved_4 : 14;
    uint32_t LOOPCTRL_CM_HST_THRESH : 1;
    uint32_t LOOPCTRL_DF_HST_THRESH : 1;
    eLOOPCTRL_EN_CM_HYST LOOPCTRL_EN_CM_HYST : 1;
    eLOOPCTRL_EN_DF_HYST LOOPCTRL_EN_DF_HYST : 1;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG1() = delete;
  inline void Reset() volatile { this->value = 0x01CD5430; }
  static inline volatile REG1 &Instance() { return *reinterpret_cast<volatile REG1*>(0x40CA800C); }
};

// DCDC Register 2
//
union REG2 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t LOOPCTRL_DC_C : 2;
    uint32_t LOOPCTRL_DC_R : 4;
    uint32_t LOOPCTRL_DC_FF : 3;
    uint32_t LOOPCTRL_EN_RCSCALE : 3;
    uint32_t LOOPCTRL_RCSCALE_THRSH : 1;
    uint32_t LOOPCTRL_HYST_SIGN : 1;
    uint32_t _reserved_6 : 1;
    uint32_t BATTMONITOR_EN_BATADJ : 1;
    uint32_t BATTMONITOR_BATT_VAL : 10;
    uint32_t _reserved_8 : 2;
    uint32_t DCM_SET_CTRL : 1;
    uint32_t _reserved_9 : 1;
    uint32_t LOOPCTRL_TOGGLE_DIF : 1;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG2() = delete;
  inline void Reset() volatile { this->value = 0x02108089; }
  static inline volatile REG2 &Instance() { return *reinterpret_cast<volatile REG2*>(0x40CA8010); }
};

// DCDC Register 3
//
union REG3 {
  
  // Enum definitions.
  enum class eIN_BROWNOUT : uint32_t {
    ebrownout = 1, // DCDC_IN is lower than 2.6V
  };
  enum class eOVERVOLT_VDD1P8_DET_OUT : uint32_t {
    eovervoltage_1p8 = 1, // VDD1P8 Overvoltage
  };
  enum class eOVERVOLT_VDD1P0_DET_OUT : uint32_t {
    eovervoltage_1p0 = 1, // VDD1P0 Overvoltage
  };
  enum class eOVERCUR_DETECT_OUT : uint32_t {
    eovercurrent_signal = 1, // Overcurrent
  };
  enum class eENABLE_FF : uint32_t {
    eenable_ff = 1, // Enable feed-forward (FF) function that can speed up transient settling.
  };
  enum class eDISABLE_PULSE_SKIP : uint32_t {
    estopcharge = 0, // Stop charging if the duty cycle is lower than what is set by NEGLIMIT_IN
  };
  enum class eDISABLE_IDLE_SKIP : uint32_t {
    eenable = 0, // Enable the idle skip function. The DCDC will be idle when out-of-range comparator detects the output voltage is higher than the target by 25mV. This function requires the out-of-range comparator to be enabled (PWD_CMP_OFFSET=0).
  };
  enum class eDOUBLE_IBIAS_CMP_LP_LPSR : uint32_t {
    edoublebias = 1, // Double the bias current of the comparator for low-voltage detector in LP (low-power) mode
  };
  enum class eMINPWR_DC_HALFCLK : uint32_t {
    efullfreq = 0, // DCDC clock remains at full frequency for continuous mode
    ehalffreq = 1, // DCDC clock set to half frequency for continuous mode
  };
  enum class eVDD1P0CTRL_DISABLE_STEP : uint32_t {
    eenable = 0, // Enable stepping for VDD1P0
    edisable = 1, // Disable stepping for VDD1P0
  };
  enum class eVDD1P8CTRL_DISABLE_STEP : uint32_t {
    eenable = 0, // Enable stepping for VDD1P8
    edisable = 1, // Disable stepping for VDD1P8
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 14;
    eIN_BROWNOUT IN_BROWNOUT : 1;
    eOVERVOLT_VDD1P8_DET_OUT OVERVOLT_VDD1P8_DET_OUT : 1;
    eOVERVOLT_VDD1P0_DET_OUT OVERVOLT_VDD1P0_DET_OUT : 1;
    eOVERCUR_DETECT_OUT OVERCUR_DETECT_OUT : 1;
    eENABLE_FF ENABLE_FF : 1;
    eDISABLE_PULSE_SKIP DISABLE_PULSE_SKIP : 1;
    eDISABLE_IDLE_SKIP DISABLE_IDLE_SKIP : 1;
    eDOUBLE_IBIAS_CMP_LP_LPSR DOUBLE_IBIAS_CMP_LP_LPSR : 1;
    uint32_t REG_FBK_SEL : 2;
    eMINPWR_DC_HALFCLK MINPWR_DC_HALFCLK : 1;
    uint32_t _reserved_10 : 1;
    uint32_t MINPWR_HALF_FETS : 1;
    uint32_t MISC_DELAY_TIMING : 1;
    uint32_t _reserved_12 : 1;
    eVDD1P0CTRL_DISABLE_STEP VDD1P0CTRL_DISABLE_STEP : 1;
    eVDD1P8CTRL_DISABLE_STEP VDD1P8CTRL_DISABLE_STEP : 1;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG3() = delete;
  inline void Reset() volatile { this->value = 0x00980000; }
  static inline volatile REG3 &Instance() { return *reinterpret_cast<volatile REG3*>(0x40CA8014); }
};

// DCDC Register 4
//
union REG4 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ENABLE_SP : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG4 &Instance() { return *reinterpret_cast<volatile REG4*>(0x40CA8018); }
};

// DCDC Register 5
//
union REG5 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_EN_SP : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG5 &Instance() { return *reinterpret_cast<volatile REG5*>(0x40CA801C); }
};

// DCDC Register 6
//
union REG6 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t LP_MODE_SP : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG6 &Instance() { return *reinterpret_cast<volatile REG6*>(0x40CA8020); }
};

// DCDC Register 7
//
union REG7 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t STBY_EN_SP : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG7 &Instance() { return *reinterpret_cast<volatile REG7*>(0x40CA8024); }
};

// DCDC Register 7 plus
//
union REG7P {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t STBY_LP_MODE_SP : 16;
    uint32_t _reserved_end : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG7P() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG7P &Instance() { return *reinterpret_cast<volatile REG7P*>(0x40CA8028); }
};

// DCDC Register 8
//
union REG8 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_TRG_SP0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG8 &Instance() { return *reinterpret_cast<volatile REG8*>(0x40CA802C); }
};

// DCDC Register 9
//
union REG9 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_TRG_SP1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG9 &Instance() { return *reinterpret_cast<volatile REG9*>(0x40CA8030); }
};

// DCDC Register 10
//
union REG10 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_TRG_SP2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG10 &Instance() { return *reinterpret_cast<volatile REG10*>(0x40CA8034); }
};

// DCDC Register 11
//
union REG11 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_TRG_SP3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG11 &Instance() { return *reinterpret_cast<volatile REG11*>(0x40CA8038); }
};

// DCDC Register 12
//
union REG12 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_TRG_SP0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG12 &Instance() { return *reinterpret_cast<volatile REG12*>(0x40CA803C); }
};

// DCDC Register 13
//
union REG13 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_TRG_SP1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG13 &Instance() { return *reinterpret_cast<volatile REG13*>(0x40CA8040); }
};

// DCDC Register 14
//
union REG14 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_TRG_SP2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG14 &Instance() { return *reinterpret_cast<volatile REG14*>(0x40CA8044); }
};

// DCDC Register 15
//
union REG15 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_TRG_SP3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG15 &Instance() { return *reinterpret_cast<volatile REG15*>(0x40CA8048); }
};

// DCDC Register 16
//
union REG16 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_STBY_TRG_SP0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG16 &Instance() { return *reinterpret_cast<volatile REG16*>(0x40CA804C); }
};

// DCDC Register 17
//
union REG17 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_STBY_TRG_SP1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG17 &Instance() { return *reinterpret_cast<volatile REG17*>(0x40CA8050); }
};

// DCDC Register 18
//
union REG18 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_STBY_TRG_SP2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG18 &Instance() { return *reinterpret_cast<volatile REG18*>(0x40CA8054); }
};

// DCDC Register 19
//
union REG19 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ANA_STBY_TRG_SP3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG19 &Instance() { return *reinterpret_cast<volatile REG19*>(0x40CA8058); }
};

// DCDC Register 20
//
union REG20 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_STBY_TRG_SP0 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG20 &Instance() { return *reinterpret_cast<volatile REG20*>(0x40CA805C); }
};

// DCDC Register 21
//
union REG21 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_STBY_TRG_SP1 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG21 &Instance() { return *reinterpret_cast<volatile REG21*>(0x40CA8060); }
};

// DCDC Register 22
//
union REG22 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_STBY_TRG_SP2 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG22 &Instance() { return *reinterpret_cast<volatile REG22*>(0x40CA8064); }
};

// DCDC Register 23
//
union REG23 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t DIG_STBY_TRG_SP3 : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REG23 &Instance() { return *reinterpret_cast<volatile REG23*>(0x40CA8068); }
};

// DCDC Register 24
//
union REG24 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t OK_COUNT : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  REG24() = delete;
  inline void Reset() volatile { this->value = 0x00100000; }
  static inline volatile REG24 &Instance() { return *reinterpret_cast<volatile REG24*>(0x40CA806C); }
};


} // namespace nDCDC