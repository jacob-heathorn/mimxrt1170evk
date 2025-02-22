#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nANADIG_PMU {


// PMU_LDO_PLL_REGISTER
//
union PMU_LDO_PLL {
  
  enum class eLDO_PLL_CONTROL_MODE : uint32_t {
    esw = 0, // SW Control
    ehw = 1, // HW Control
  };
  
  // Bit field definition.
  struct {
    uint32_t LDO_PLL_ENABLE : 1;
    eLDO_PLL_CONTROL_MODE LDO_PLL_CONTROL_MODE : 1;
    uint32_t _reserved_2 : 14;
    uint32_t LDO_PLL_AI_TOGGLE : 1;
    uint32_t _reserved_3 : 13;
    uint32_t LDO_PLL_AI_BUSY : 1;
    uint32_t _reserved_end : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_LDO_PLL() = delete;
  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PMU_LDO_PLL &Instance() { return *reinterpret_cast<volatile PMU_LDO_PLL*>(0x40C84500); }
};

// PMU_BIAS_CTRL_REGISTER
//
union PMU_BIAS_CTRL {
  
  enum class eWB_VDD_SEL_1P8 : uint32_t {
    elv1 = 0, // VDD_LV1
    elv2 = 1, // VDD_LV2
  };
  
  // Bit field definition.
  struct {
    uint32_t WB_CFG_1P8 : 13;
    uint32_t _reserved_1 : 1;
    eWB_VDD_SEL_1P8 WB_VDD_SEL_1P8 : 1;
    uint32_t _reserved_end : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_BIAS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_BIAS_CTRL &Instance() { return *reinterpret_cast<volatile PMU_BIAS_CTRL*>(0x40C84550); }
};

// PMU_BIAS_CTRL2_REGISTER
//
union PMU_BIAS_CTRL2 {
  
  enum class eWB_PWR_SW_EN_1P8 : uint32_t {
    ebb0 = 1, // No BB
    ebb1 = 2, // BB
    ebb2 = 4, // BB
  };
  
  enum class eWB_ADJ_1P8 : uint32_t {
    ewb00000000 = 0, // Cref= 0fF Cspl= 0fF DeltaC= 0fF
    ewb00000001 = 1, // Cref= 0fF Cspl= 30fF DeltaC= -30fF
    ewb00000010 = 2, // Cref= 0fF Cspl= 43fF DeltaC= -43fF
    ewb00000011 = 3, // Cref= 0fF Cspl= 62fF DeltaC=-62fF
    ewb00000100 = 4, // Cref= 0fF Cspl=105fF DeltaC=-105fF
    ewb00000101 = 5, // Cref= 30fF Cspl= 0fF DeltaC= 30fF
    ewb00000110 = 6, // Cref= 30fF Cspl= 43fF DeltaC= -12fF
    ewb00000111 = 7, // Cref= 30fF Cspl=105fF DeltaC= -75fF
    ewb00001000 = 8, // Cref= 43fF Cspl= 0fF DeltaC= 43fF
    ewb00001001 = 9, // Cref= 43fF Cspl= 30fF DeltaC= 13fF
    ewb00001010 = 10, // Cref= 43fF Cspl= 62fF DeltaC= -19fF
    ewb00001011 = 11, // Cref= 62fF Cspl= 0fF DeltaC= 62fF
    ewb00001100 = 12, // Cref= 62fF Cspl= 43fF DeltaC= 19fF
    ewb00001101 = 13, // Cref=105fF Cspl= 0fF DeltaC= 105fF
    ewb00001110 = 14, // Cref=105fF Cspl=30fF DeltaC= 75fF
    ewb00001111 = 15, // Cref=0fF Cspl=0fF DeltaC= 0fF
  };
  
  enum class eFBB_M7_CONTROL_MODE : uint32_t {
    esw = 0, // SW Control
    ehw = 1, // HW Control
  };
  
  enum class eRBB_SOC_CONTROL_MODE : uint32_t {
    esw = 0, // SW Control
    ehw = 1, // HW Control
  };
  
  enum class eRBB_LPSR_CONTROL_MODE : uint32_t {
    esw = 0, // SW Control
    ehw = 1, // HW Control
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    uint32_t WB_TST_MD : 9;
    eWB_PWR_SW_EN_1P8 WB_PWR_SW_EN_1P8 : 3;
    eWB_ADJ_1P8 WB_ADJ_1P8 : 8;
    eFBB_M7_CONTROL_MODE FBB_M7_CONTROL_MODE : 1;
    eRBB_SOC_CONTROL_MODE RBB_SOC_CONTROL_MODE : 1;
    eRBB_LPSR_CONTROL_MODE RBB_LPSR_CONTROL_MODE : 1;
    uint32_t WB_EN : 1;
    uint32_t WB_TST_DIG_OUT : 1;
    uint32_t WB_OK : 1;
    uint32_t _reserved_end : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_BIAS_CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_BIAS_CTRL2 &Instance() { return *reinterpret_cast<volatile PMU_BIAS_CTRL2*>(0x40C84560); }
};

// PMU_REF_CTRL_REGISTER
//
union PMU_REF_CTRL {
  
  enum class eREF_CONTROL_MODE : uint32_t {
    esw = 0, // SW Control
    ehw = 1, // HW Control
  };
  
  // Bit field definition.
  struct {
    uint32_t REF_AI_TOGGLE : 1;
    uint32_t REF_AI_BUSY : 1;
    uint32_t REF_ENABLE : 1;
    eREF_CONTROL_MODE REF_CONTROL_MODE : 1;
    uint32_t EN_PLL_VOL_REF_BUFFER : 1;
    uint32_t _reserved_end : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_REF_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_REF_CTRL &Instance() { return *reinterpret_cast<volatile PMU_REF_CTRL*>(0x40C84570); }
};

// PMU_POWER_DETECT_CTRL_REGISTER
//
union PMU_POWER_DETECT_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    uint32_t CKGB_LPSR1P0 : 1;
    uint32_t _reserved_end : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PMU_POWER_DETECT_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_POWER_DETECT_CTRL &Instance() { return *reinterpret_cast<volatile PMU_POWER_DETECT_CTRL*>(0x40C84580); }
};

// LDO_PLL_ENABLE_SP_REGISTER
//
union LDO_PLL_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_PLL_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_PLL_ENABLE_SP &Instance() { return *reinterpret_cast<volatile LDO_PLL_ENABLE_SP*>(0x40C84600); }
};

// LDO_LPSR_ANA_ENABLE_SP_REGISTER
//
union LDO_LPSR_ANA_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_ANA_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_ENABLE_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_ANA_ENABLE_SP*>(0x40C84610); }
};

// LDO_LPSR_ANA_LP_MODE_SP_REGISTER
//
union LDO_LPSR_ANA_LP_MODE_SP {
  
  enum class eLP_MODE_SETPOINT0 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT1 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT2 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT3 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT4 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT5 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT6 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT7 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT8 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT9 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT10 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT11 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT12 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT13 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT14 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPONIT15 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  // Bit field definition.
  struct {
    eLP_MODE_SETPOINT0 LP_MODE_SETPOINT0 : 1;
    eLP_MODE_SETPOINT1 LP_MODE_SETPOINT1 : 1;
    eLP_MODE_SETPONIT2 LP_MODE_SETPONIT2 : 1;
    eLP_MODE_SETPONIT3 LP_MODE_SETPONIT3 : 1;
    eLP_MODE_SETPONIT4 LP_MODE_SETPONIT4 : 1;
    eLP_MODE_SETPONIT5 LP_MODE_SETPONIT5 : 1;
    eLP_MODE_SETPONIT6 LP_MODE_SETPONIT6 : 1;
    eLP_MODE_SETPONIT7 LP_MODE_SETPONIT7 : 1;
    eLP_MODE_SETPONIT8 LP_MODE_SETPONIT8 : 1;
    eLP_MODE_SETPONIT9 LP_MODE_SETPONIT9 : 1;
    eLP_MODE_SETPONIT10 LP_MODE_SETPONIT10 : 1;
    eLP_MODE_SETPONIT11 LP_MODE_SETPONIT11 : 1;
    eLP_MODE_SETPONIT12 LP_MODE_SETPONIT12 : 1;
    eLP_MODE_SETPONIT13 LP_MODE_SETPONIT13 : 1;
    eLP_MODE_SETPONIT14 LP_MODE_SETPONIT14 : 1;
    eLP_MODE_SETPONIT15 LP_MODE_SETPONIT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_ANA_LP_MODE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_LP_MODE_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_ANA_LP_MODE_SP*>(0x40C84620); }
};

// LDO_LPSR_ANA_TRACKING_EN_SP_REGISTER
//
union LDO_LPSR_ANA_TRACKING_EN_SP {
  
  enum class eTRACKING_EN_SETPOINT0 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT1 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT2 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT3 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT4 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT5 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT6 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT7 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT8 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT9 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT10 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT11 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT12 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT13 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT14 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT15 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eTRACKING_EN_SETPOINT0 TRACKING_EN_SETPOINT0 : 1;
    eTRACKING_EN_SETPOINT1 TRACKING_EN_SETPOINT1 : 1;
    eTRACKING_EN_SETPOINT2 TRACKING_EN_SETPOINT2 : 1;
    eTRACKING_EN_SETPOINT3 TRACKING_EN_SETPOINT3 : 1;
    eTRACKING_EN_SETPOINT4 TRACKING_EN_SETPOINT4 : 1;
    eTRACKING_EN_SETPOINT5 TRACKING_EN_SETPOINT5 : 1;
    eTRACKING_EN_SETPOINT6 TRACKING_EN_SETPOINT6 : 1;
    eTRACKING_EN_SETPOINT7 TRACKING_EN_SETPOINT7 : 1;
    eTRACKING_EN_SETPOINT8 TRACKING_EN_SETPOINT8 : 1;
    eTRACKING_EN_SETPOINT9 TRACKING_EN_SETPOINT9 : 1;
    eTRACKING_EN_SETPOINT10 TRACKING_EN_SETPOINT10 : 1;
    eTRACKING_EN_SETPOINT11 TRACKING_EN_SETPOINT11 : 1;
    eTRACKING_EN_SETPOINT12 TRACKING_EN_SETPOINT12 : 1;
    eTRACKING_EN_SETPOINT13 TRACKING_EN_SETPOINT13 : 1;
    eTRACKING_EN_SETPOINT14 TRACKING_EN_SETPOINT14 : 1;
    eTRACKING_EN_SETPOINT15 TRACKING_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_ANA_TRACKING_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_TRACKING_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_ANA_TRACKING_EN_SP*>(0x40C84630); }
};

// LDO_LPSR_ANA_BYPASS_EN_SP_REGISTER
//
union LDO_LPSR_ANA_BYPASS_EN_SP {
  
  enum class eBYPASS_EN_SETPOINT0 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT1 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT2 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT3 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT4 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT5 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT6 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT7 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT8 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT9 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT10 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT11 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT12 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT13 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT14 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT15 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eBYPASS_EN_SETPOINT0 BYPASS_EN_SETPOINT0 : 1;
    eBYPASS_EN_SETPOINT1 BYPASS_EN_SETPOINT1 : 1;
    eBYPASS_EN_SETPOINT2 BYPASS_EN_SETPOINT2 : 1;
    eBYPASS_EN_SETPOINT3 BYPASS_EN_SETPOINT3 : 1;
    eBYPASS_EN_SETPOINT4 BYPASS_EN_SETPOINT4 : 1;
    eBYPASS_EN_SETPOINT5 BYPASS_EN_SETPOINT5 : 1;
    eBYPASS_EN_SETPOINT6 BYPASS_EN_SETPOINT6 : 1;
    eBYPASS_EN_SETPOINT7 BYPASS_EN_SETPOINT7 : 1;
    eBYPASS_EN_SETPOINT8 BYPASS_EN_SETPOINT8 : 1;
    eBYPASS_EN_SETPOINT9 BYPASS_EN_SETPOINT9 : 1;
    eBYPASS_EN_SETPOINT10 BYPASS_EN_SETPOINT10 : 1;
    eBYPASS_EN_SETPOINT11 BYPASS_EN_SETPOINT11 : 1;
    eBYPASS_EN_SETPOINT12 BYPASS_EN_SETPOINT12 : 1;
    eBYPASS_EN_SETPOINT13 BYPASS_EN_SETPOINT13 : 1;
    eBYPASS_EN_SETPOINT14 BYPASS_EN_SETPOINT14 : 1;
    eBYPASS_EN_SETPOINT15 BYPASS_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_ANA_BYPASS_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_BYPASS_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_ANA_BYPASS_EN_SP*>(0x40C84640); }
};

// LDO_LPSR_ANA_STBY_EN_SP_REGISTER
//
union LDO_LPSR_ANA_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_ANA_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_ANA_STBY_EN_SP*>(0x40C84650); }
};

// LDO_LPSR_DIG_ENABLE_SP_REGISTER
//
union LDO_LPSR_DIG_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_ENABLE_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_ENABLE_SP*>(0x40C84660); }
};

// LDO_LPSR_DIG_TRG_SP0_REGISTER
//
union LDO_LPSR_DIG_TRG_SP0 {
  
  // Bit field definition.
  struct {
    uint32_t VOLTAGE_SETPOINT0 : 8;
    uint32_t VOLTAGE_SETPOINT1 : 8;
    uint32_t VOLTAGE_SETPOINT2 : 8;
    uint32_t VOLTAGE_SETPOINT3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_TRG_SP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP0 &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP0*>(0x40C84670); }
};

// LDO_LPSR_DIG_TRG_SP1_REGISTER
//
union LDO_LPSR_DIG_TRG_SP1 {
  
  // Bit field definition.
  struct {
    uint32_t VOLTAGE_SETPOINT4 : 8;
    uint32_t VOLTAGE_SETPOINT5 : 8;
    uint32_t VOLTAGE_SETPOINT6 : 8;
    uint32_t VOLTAGE_SETPOINT7 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_TRG_SP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP1 &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP1*>(0x40C84680); }
};

// LDO_LPSR_DIG_TRG_SP2_REGISTER
//
union LDO_LPSR_DIG_TRG_SP2 {
  
  // Bit field definition.
  struct {
    uint32_t VOLTAGE_SETPOINT8 : 8;
    uint32_t VOLTAGE_SETPOINT9 : 8;
    uint32_t VOLTAGE_SETPOINT10 : 8;
    uint32_t VOLTAGE_SETPOINT11 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_TRG_SP2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP2 &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP2*>(0x40C84690); }
};

// LDO_LPSR_DIG_TRG_SP3_REGISTER
//
union LDO_LPSR_DIG_TRG_SP3 {
  
  // Bit field definition.
  struct {
    uint32_t VOLTAGE_SETPOINT12 : 8;
    uint32_t VOLTAGE_SETPOINT13 : 8;
    uint32_t VOLTAGE_SETPOINT14 : 8;
    uint32_t VOLTAGE_SETPOINT15 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_TRG_SP3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP3 &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP3*>(0x40C846A0); }
};

// LDO_LPSR_DIG_LP_MODE_SP_REGISTER
//
union LDO_LPSR_DIG_LP_MODE_SP {
  
  enum class eLP_MODE_SETPOINT0 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT1 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT2 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT3 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT4 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT5 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT6 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT7 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT8 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT9 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT10 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT11 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT12 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT13 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT14 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  enum class eLP_MODE_SETPOINT15 : uint32_t {
    elp0 = 0, // LP
    ehp1 = 1, // HP
  };
  
  // Bit field definition.
  struct {
    eLP_MODE_SETPOINT0 LP_MODE_SETPOINT0 : 1;
    eLP_MODE_SETPOINT1 LP_MODE_SETPOINT1 : 1;
    eLP_MODE_SETPOINT2 LP_MODE_SETPOINT2 : 1;
    eLP_MODE_SETPOINT3 LP_MODE_SETPOINT3 : 1;
    eLP_MODE_SETPOINT4 LP_MODE_SETPOINT4 : 1;
    eLP_MODE_SETPOINT5 LP_MODE_SETPOINT5 : 1;
    eLP_MODE_SETPOINT6 LP_MODE_SETPOINT6 : 1;
    eLP_MODE_SETPOINT7 LP_MODE_SETPOINT7 : 1;
    eLP_MODE_SETPOINT8 LP_MODE_SETPOINT8 : 1;
    eLP_MODE_SETPOINT9 LP_MODE_SETPOINT9 : 1;
    eLP_MODE_SETPOINT10 LP_MODE_SETPOINT10 : 1;
    eLP_MODE_SETPOINT11 LP_MODE_SETPOINT11 : 1;
    eLP_MODE_SETPOINT12 LP_MODE_SETPOINT12 : 1;
    eLP_MODE_SETPOINT13 LP_MODE_SETPOINT13 : 1;
    eLP_MODE_SETPOINT14 LP_MODE_SETPOINT14 : 1;
    eLP_MODE_SETPOINT15 LP_MODE_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_LP_MODE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_LP_MODE_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_LP_MODE_SP*>(0x40C846B0); }
};

// LDO_LPSR_DIG_TRACKING_EN_SP_REGISTER
//
union LDO_LPSR_DIG_TRACKING_EN_SP {
  
  enum class eTRACKING_EN_SETPOINT0 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT1 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT2 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT3 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT4 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT5 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT6 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT7 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT8 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT9 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT10 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT11 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT12 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT13 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT14 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  enum class eTRACKING_EN_SETPOINT15 : uint32_t {
    etrack0 = 0, // Disabled
    etrack1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eTRACKING_EN_SETPOINT0 TRACKING_EN_SETPOINT0 : 1;
    eTRACKING_EN_SETPOINT1 TRACKING_EN_SETPOINT1 : 1;
    eTRACKING_EN_SETPOINT2 TRACKING_EN_SETPOINT2 : 1;
    eTRACKING_EN_SETPOINT3 TRACKING_EN_SETPOINT3 : 1;
    eTRACKING_EN_SETPOINT4 TRACKING_EN_SETPOINT4 : 1;
    eTRACKING_EN_SETPOINT5 TRACKING_EN_SETPOINT5 : 1;
    eTRACKING_EN_SETPOINT6 TRACKING_EN_SETPOINT6 : 1;
    eTRACKING_EN_SETPOINT7 TRACKING_EN_SETPOINT7 : 1;
    eTRACKING_EN_SETPOINT8 TRACKING_EN_SETPOINT8 : 1;
    eTRACKING_EN_SETPOINT9 TRACKING_EN_SETPOINT9 : 1;
    eTRACKING_EN_SETPOINT10 TRACKING_EN_SETPOINT10 : 1;
    eTRACKING_EN_SETPOINT11 TRACKING_EN_SETPOINT11 : 1;
    eTRACKING_EN_SETPOINT12 TRACKING_EN_SETPOINT12 : 1;
    eTRACKING_EN_SETPOINT13 TRACKING_EN_SETPOINT13 : 1;
    eTRACKING_EN_SETPOINT14 TRACKING_EN_SETPOINT14 : 1;
    eTRACKING_EN_SETPOINT15 TRACKING_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_TRACKING_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRACKING_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRACKING_EN_SP*>(0x40C846C0); }
};

// LDO_LPSR_DIG_BYPASS_EN_SP_REGISTER
//
union LDO_LPSR_DIG_BYPASS_EN_SP {
  
  enum class eBYPASS_EN_SETPOINT0 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT1 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT2 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT3 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT4 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT5 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT6 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT7 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT8 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT9 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT10 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT11 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT12 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT13 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT14 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  enum class eBYPASS_EN_SETPOINT15 : uint32_t {
    ebyp0 = 0, // Disabled
    ebyp1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eBYPASS_EN_SETPOINT0 BYPASS_EN_SETPOINT0 : 1;
    eBYPASS_EN_SETPOINT1 BYPASS_EN_SETPOINT1 : 1;
    eBYPASS_EN_SETPOINT2 BYPASS_EN_SETPOINT2 : 1;
    eBYPASS_EN_SETPOINT3 BYPASS_EN_SETPOINT3 : 1;
    eBYPASS_EN_SETPOINT4 BYPASS_EN_SETPOINT4 : 1;
    eBYPASS_EN_SETPOINT5 BYPASS_EN_SETPOINT5 : 1;
    eBYPASS_EN_SETPOINT6 BYPASS_EN_SETPOINT6 : 1;
    eBYPASS_EN_SETPOINT7 BYPASS_EN_SETPOINT7 : 1;
    eBYPASS_EN_SETPOINT8 BYPASS_EN_SETPOINT8 : 1;
    eBYPASS_EN_SETPOINT9 BYPASS_EN_SETPOINT9 : 1;
    eBYPASS_EN_SETPOINT10 BYPASS_EN_SETPOINT10 : 1;
    eBYPASS_EN_SETPOINT11 BYPASS_EN_SETPOINT11 : 1;
    eBYPASS_EN_SETPOINT12 BYPASS_EN_SETPOINT12 : 1;
    eBYPASS_EN_SETPOINT13 BYPASS_EN_SETPOINT13 : 1;
    eBYPASS_EN_SETPOINT14 BYPASS_EN_SETPOINT14 : 1;
    eBYPASS_EN_SETPOINT15 BYPASS_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_BYPASS_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_BYPASS_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_BYPASS_EN_SP*>(0x40C846D0); }
};

// LDO_LPSR_DIG_STBY_EN_SP_REGISTER
//
union LDO_LPSR_DIG_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LDO_LPSR_DIG_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile LDO_LPSR_DIG_STBY_EN_SP*>(0x40C846E0); }
};

// BANDGAP_ENABLE_SP_REGISTER
//
union BANDGAP_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BANDGAP_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BANDGAP_ENABLE_SP &Instance() { return *reinterpret_cast<volatile BANDGAP_ENABLE_SP*>(0x40C846F0); }
};

// FBB_M7_ENABLE_SP_REGISTER
//
union FBB_M7_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FBB_M7_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FBB_M7_ENABLE_SP &Instance() { return *reinterpret_cast<volatile FBB_M7_ENABLE_SP*>(0x40C84700); }
};

// RBB_SOC_ENABLE_SP_REGISTER
//
union RBB_SOC_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_SOC_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_SOC_ENABLE_SP &Instance() { return *reinterpret_cast<volatile RBB_SOC_ENABLE_SP*>(0x40C84710); }
};

// RBB_LPSR_ENABLE_SP_REGISTER
//
union RBB_LPSR_ENABLE_SP {
  
  enum class eON_OFF_SETPOINT0 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT1 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT2 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT3 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT4 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT5 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT6 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT7 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT8 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT9 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT10 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT11 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT12 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT13 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT14 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  enum class eON_OFF_SETPOINT15 : uint32_t {
    es0 = 0, // ON
    es1 = 1, // OFF
  };
  
  // Bit field definition.
  struct {
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_LPSR_ENABLE_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_LPSR_ENABLE_SP &Instance() { return *reinterpret_cast<volatile RBB_LPSR_ENABLE_SP*>(0x40C84720); }
};

// BANDGAP_STBY_EN_SP_REGISTER
//
union BANDGAP_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BANDGAP_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BANDGAP_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile BANDGAP_STBY_EN_SP*>(0x40C84730); }
};

// PLL_LDO_STBY_EN_SP_REGISTER
//
union PLL_LDO_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PLL_LDO_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLL_LDO_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile PLL_LDO_STBY_EN_SP*>(0x40C84740); }
};

// FBB_M7_STBY_EN_SP_REGISTER
//
union FBB_M7_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FBB_M7_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FBB_M7_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile FBB_M7_STBY_EN_SP*>(0x40C84750); }
};

// RBB_SOC_STBY_EN_SP_REGISTER
//
union RBB_SOC_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_SOC_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_SOC_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile RBB_SOC_STBY_EN_SP*>(0x40C84760); }
};

// RBB_LPSR_STBY_EN_SP_REGISTER
//
union RBB_LPSR_STBY_EN_SP {
  
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    eb0 = 0, // Disabled
    eb1 = 1, // Enabled
  };
  
  // Bit field definition.
  struct {
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_LPSR_STBY_EN_SP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_LPSR_STBY_EN_SP &Instance() { return *reinterpret_cast<volatile RBB_LPSR_STBY_EN_SP*>(0x40C84770); }
};

// FBB_M7_CONFIGURE_REGISTER
//
union FBB_M7_CONFIGURE {
  
  // Bit field definition.
  struct {
    uint32_t WB_CFG_PW : 4;
    uint32_t WB_CFG_NW : 4;
    uint32_t OSCILLATOR_BITS : 3;
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_end : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FBB_M7_CONFIGURE() = delete;
  inline void Reset() volatile { this->value = 0x00002F11; }
  static inline volatile FBB_M7_CONFIGURE &Instance() { return *reinterpret_cast<volatile FBB_M7_CONFIGURE*>(0x40C84780); }
};

// RBB_LPSR_CONFIGURE_REGISTER
//
union RBB_LPSR_CONFIGURE {
  
  // Bit field definition.
  struct {
    uint32_t WB_CFG_PW : 4;
    uint32_t WB_CFG_NW : 4;
    uint32_t OSCILLATOR_BITS : 3;
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_end : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_LPSR_CONFIGURE() = delete;
  inline void Reset() volatile { this->value = 0x00003022; }
  static inline volatile RBB_LPSR_CONFIGURE &Instance() { return *reinterpret_cast<volatile RBB_LPSR_CONFIGURE*>(0x40C84790); }
};

// RBB_SOC_CONFIGURE_REGISTER
//
union RBB_SOC_CONFIGURE {
  
  // Bit field definition.
  struct {
    uint32_t WB_CFG_PW : 4;
    uint32_t WB_CFG_NW : 4;
    uint32_t OSCILLATOR_BITS : 3;
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_end : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBB_SOC_CONFIGURE() = delete;
  inline void Reset() volatile { this->value = 0x00000044; }
  static inline volatile RBB_SOC_CONFIGURE &Instance() { return *reinterpret_cast<volatile RBB_SOC_CONFIGURE*>(0x40C847A0); }
};

// REFTOP_OTP_TRIM_VALUE_REGISTER
//
union REFTOP_OTP_TRIM_VALUE {
  
  // Bit field definition.
  struct {
    uint32_t REFTOP_IBZTCADJ : 3;
    uint32_t REFTOP_VBGADJ : 3;
    uint32_t REFTOP_TRIM_EN : 1;
    uint32_t _reserved_end : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REFTOP_OTP_TRIM_VALUE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REFTOP_OTP_TRIM_VALUE &Instance() { return *reinterpret_cast<volatile REFTOP_OTP_TRIM_VALUE*>(0x40C847B0); }
};

// LPSR_1P8_LDO_OTP_TRIM_VALUE_REGISTER
//
union LPSR_1P8_LDO_OTP_TRIM_VALUE {
  
  // Bit field definition.
  struct {
    uint32_t LPSR_LDO_1P8_TRIM : 2;
    uint32_t LPSR_LDO_1P8_TRIM_EN : 1;
    uint32_t _reserved_end : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LPSR_1P8_LDO_OTP_TRIM_VALUE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSR_1P8_LDO_OTP_TRIM_VALUE &Instance() { return *reinterpret_cast<volatile LPSR_1P8_LDO_OTP_TRIM_VALUE*>(0x40C847D0); }
};


} // namespace nANADIG_PMU