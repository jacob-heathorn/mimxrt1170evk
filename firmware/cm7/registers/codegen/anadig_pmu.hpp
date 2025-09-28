#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_PMU {


// PMU_LDO_PLL_REGISTER
union PMU_LDO_PLL {
  
  // LDO_PLL_CONTROL_MODE
  enum class eLDO_PLL_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LDO_PLL_ENABLE
    uint32_t LDO_PLL_ENABLE : 1;
    // read-write - LDO_PLL_CONTROL_MODE
    eLDO_PLL_CONTROL_MODE LDO_PLL_CONTROL_MODE : 1;
    uint32_t _reserved_0 : 14;
    // read-write - ldo_pll_ai_toggle
    uint32_t LDO_PLL_AI_TOGGLE : 1;
    uint32_t _reserved_1 : 13;
    // read-only - ldo_pll_busy
    uint32_t LDO_PLL_AI_BUSY : 1;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000001; }
  static inline volatile PMU_LDO_PLL &ref() { return *reinterpret_cast<volatile PMU_LDO_PLL*>(0x40C84500); }
};

// PMU_BIAS_CTRL_REGISTER
union PMU_BIAS_CTRL {
  
  // wb_vdd_sel_1p8
  enum class eWB_VDD_SEL_1P8 : uint32_t {
    // VDD_LV1
    elv1 = 0,
    // VDD_LV2
    elv2 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - wb_cfg_1p8
    uint32_t WB_CFG_1P8 : 13;
    uint32_t _reserved_0 : 1;
    // read-write - wb_vdd_sel_1p8
    eWB_VDD_SEL_1P8 WB_VDD_SEL_1P8 : 1;
    uint32_t _reserved_1 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_BIAS_CTRL &ref() { return *reinterpret_cast<volatile PMU_BIAS_CTRL*>(0x40C84550); }
};

// PMU_BIAS_CTRL2_REGISTER
union PMU_BIAS_CTRL2 {
  
  // MODSEL_wb_tst_md_1p8
  enum class eWB_PWR_SW_EN_1P8 : uint32_t {
    // No BB
    ebb0 = 1,
    // BB
    ebb1 = 2,
    // BB
    ebb2 = 4,
  };
  
  // wb_adj_1p8
  enum class eWB_ADJ_1P8 : uint32_t {
    // Cref= 0fF Cspl= 0fF DeltaC= 0fF
    ewb00000000 = 0,
    // Cref= 0fF Cspl= 30fF DeltaC= -30fF
    ewb00000001 = 1,
    // Cref= 0fF Cspl= 43fF DeltaC= -43fF
    ewb00000010 = 2,
    // Cref= 0fF Cspl= 62fF DeltaC=-62fF
    ewb00000011 = 3,
    // Cref= 0fF Cspl=105fF DeltaC=-105fF
    ewb00000100 = 4,
    // Cref= 30fF Cspl= 0fF DeltaC= 30fF
    ewb00000101 = 5,
    // Cref= 30fF Cspl= 43fF DeltaC= -12fF
    ewb00000110 = 6,
    // Cref= 30fF Cspl=105fF DeltaC= -75fF
    ewb00000111 = 7,
    // Cref= 43fF Cspl= 0fF DeltaC= 43fF
    ewb00001000 = 8,
    // Cref= 43fF Cspl= 30fF DeltaC= 13fF
    ewb00001001 = 9,
    // Cref= 43fF Cspl= 62fF DeltaC= -19fF
    ewb00001010 = 10,
    // Cref= 62fF Cspl= 0fF DeltaC= 62fF
    ewb00001011 = 11,
    // Cref= 62fF Cspl= 43fF DeltaC= 19fF
    ewb00001100 = 12,
    // Cref=105fF Cspl= 0fF DeltaC= 105fF
    ewb00001101 = 13,
    // Cref=105fF Cspl=30fF DeltaC= 75fF
    ewb00001110 = 14,
    // Cref=0fF Cspl=0fF DeltaC= 0fF
    ewb00001111 = 15,
  };
  
  // FBB_M7_CONTROL_MODE
  enum class eFBB_M7_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // RBB_SOC_CONTROL_MODE
  enum class eRBB_SOC_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // RBB_LPSR_CONTROL_MODE
  enum class eRBB_LPSR_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - TMOD_wb_tst_md_1p8
    uint32_t WB_TST_MD : 9;
    // read-write - MODSEL_wb_tst_md_1p8
    eWB_PWR_SW_EN_1P8 WB_PWR_SW_EN_1P8 : 3;
    // read-write - wb_adj_1p8
    eWB_ADJ_1P8 WB_ADJ_1P8 : 8;
    // read-write - FBB_M7_CONTROL_MODE
    eFBB_M7_CONTROL_MODE FBB_M7_CONTROL_MODE : 1;
    // read-write - RBB_SOC_CONTROL_MODE
    eRBB_SOC_CONTROL_MODE RBB_SOC_CONTROL_MODE : 1;
    // read-write - RBB_LPSR_CONTROL_MODE
    eRBB_LPSR_CONTROL_MODE RBB_LPSR_CONTROL_MODE : 1;
    // read-write - wb_en
    uint32_t WB_EN : 1;
    // read-only - Digital output
    uint32_t WB_TST_DIG_OUT : 1;
    // read-only - Digital Output pin.
    uint32_t WB_OK : 1;
    uint32_t _reserved_1 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_BIAS_CTRL2 &ref() { return *reinterpret_cast<volatile PMU_BIAS_CTRL2*>(0x40C84560); }
};

// PMU_REF_CTRL_REGISTER
union PMU_REF_CTRL {
  
  // REF_CONTROL_MODE
  enum class eREF_CONTROL_MODE : uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ref_ai_toggle
    uint32_t REF_AI_TOGGLE : 1;
    // read-only - ref_ai_busy
    uint32_t REF_AI_BUSY : 1;
    // read-write - REF_ENABLE
    uint32_t REF_ENABLE : 1;
    // read-write - REF_CONTROL_MODE
    eREF_CONTROL_MODE REF_CONTROL_MODE : 1;
    // read-write - en_pll_vol_ref_buffer
    uint32_t EN_PLL_VOL_REF_BUFFER : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_REF_CTRL &ref() { return *reinterpret_cast<volatile PMU_REF_CTRL*>(0x40C84570); }
};

// PMU_POWER_DETECT_CTRL_REGISTER
union PMU_POWER_DETECT_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    // read-write - ckgb_lpsr1p0
    uint32_t CKGB_LPSR1P0 : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PMU_POWER_DETECT_CTRL &ref() { return *reinterpret_cast<volatile PMU_POWER_DETECT_CTRL*>(0x40C84580); }
};

// LDO_PLL_ENABLE_SP_REGISTER
union LDO_PLL_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_PLL_ENABLE_SP &ref() { return *reinterpret_cast<volatile LDO_PLL_ENABLE_SP*>(0x40C84600); }
};

// LDO_LPSR_ANA_ENABLE_SP_REGISTER
union LDO_LPSR_ANA_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_ENABLE_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_ANA_ENABLE_SP*>(0x40C84610); }
};

// LDO_LPSR_ANA_LP_MODE_SP_REGISTER
union LDO_LPSR_ANA_LP_MODE_SP {
  
  // LP_MODE_SETPOINT0
  enum class eLP_MODE_SETPOINT0 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT1
  enum class eLP_MODE_SETPOINT1 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT2
  enum class eLP_MODE_SETPONIT2 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT3
  enum class eLP_MODE_SETPONIT3 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT4
  enum class eLP_MODE_SETPONIT4 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT5
  enum class eLP_MODE_SETPONIT5 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT6
  enum class eLP_MODE_SETPONIT6 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT7
  enum class eLP_MODE_SETPONIT7 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT8
  enum class eLP_MODE_SETPONIT8 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT9
  enum class eLP_MODE_SETPONIT9 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT10
  enum class eLP_MODE_SETPONIT10 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT11
  enum class eLP_MODE_SETPONIT11 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT12
  enum class eLP_MODE_SETPONIT12 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT13
  enum class eLP_MODE_SETPONIT13 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT14
  enum class eLP_MODE_SETPONIT14 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT15
  enum class eLP_MODE_SETPONIT15 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LP_MODE_SETPOINT0
    eLP_MODE_SETPOINT0 LP_MODE_SETPOINT0 : 1;
    // read-write - LP_MODE_SETPOINT1
    eLP_MODE_SETPOINT1 LP_MODE_SETPOINT1 : 1;
    // read-write - LP_MODE_SETPOINT2
    eLP_MODE_SETPONIT2 LP_MODE_SETPONIT2 : 1;
    // read-write - LP_MODE_SETPOINT3
    eLP_MODE_SETPONIT3 LP_MODE_SETPONIT3 : 1;
    // read-write - LP_MODE_SETPOINT4
    eLP_MODE_SETPONIT4 LP_MODE_SETPONIT4 : 1;
    // read-write - LP_MODE_SETPOINT5
    eLP_MODE_SETPONIT5 LP_MODE_SETPONIT5 : 1;
    // read-write - LP_MODE_SETPOINT6
    eLP_MODE_SETPONIT6 LP_MODE_SETPONIT6 : 1;
    // read-write - LP_MODE_SETPOINT7
    eLP_MODE_SETPONIT7 LP_MODE_SETPONIT7 : 1;
    // read-write - LP_MODE_SETPOINT8
    eLP_MODE_SETPONIT8 LP_MODE_SETPONIT8 : 1;
    // read-write - LP_MODE_SETPOINT9
    eLP_MODE_SETPONIT9 LP_MODE_SETPONIT9 : 1;
    // read-write - LP_MODE_SETPOINT10
    eLP_MODE_SETPONIT10 LP_MODE_SETPONIT10 : 1;
    // read-write - LP_MODE_SETPOINT11
    eLP_MODE_SETPONIT11 LP_MODE_SETPONIT11 : 1;
    // read-write - LP_MODE_SETPOINT12
    eLP_MODE_SETPONIT12 LP_MODE_SETPONIT12 : 1;
    // read-write - LP_MODE_SETPOINT13
    eLP_MODE_SETPONIT13 LP_MODE_SETPONIT13 : 1;
    // read-write - LP_MODE_SETPOINT14
    eLP_MODE_SETPONIT14 LP_MODE_SETPONIT14 : 1;
    // read-write - LP_MODE_SETPOINT15
    eLP_MODE_SETPONIT15 LP_MODE_SETPONIT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_LP_MODE_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_ANA_LP_MODE_SP*>(0x40C84620); }
};

// LDO_LPSR_ANA_TRACKING_EN_SP_REGISTER
union LDO_LPSR_ANA_TRACKING_EN_SP {
  
  // TRACKING_EN_SETPOINT0
  enum class eTRACKING_EN_SETPOINT0 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT1
  enum class eTRACKING_EN_SETPOINT1 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT2
  enum class eTRACKING_EN_SETPOINT2 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT3
  enum class eTRACKING_EN_SETPOINT3 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT4
  enum class eTRACKING_EN_SETPOINT4 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT5
  enum class eTRACKING_EN_SETPOINT5 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT6
  enum class eTRACKING_EN_SETPOINT6 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT7
  enum class eTRACKING_EN_SETPOINT7 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT8
  enum class eTRACKING_EN_SETPOINT8 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT9
  enum class eTRACKING_EN_SETPOINT9 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT10
  enum class eTRACKING_EN_SETPOINT10 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT11
  enum class eTRACKING_EN_SETPOINT11 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT12
  enum class eTRACKING_EN_SETPOINT12 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT13
  enum class eTRACKING_EN_SETPOINT13 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT14
  enum class eTRACKING_EN_SETPOINT14 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT15
  enum class eTRACKING_EN_SETPOINT15 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TRACKING_EN_SETPOINT0
    eTRACKING_EN_SETPOINT0 TRACKING_EN_SETPOINT0 : 1;
    // read-write - TRACKING_EN_SETPOINT1
    eTRACKING_EN_SETPOINT1 TRACKING_EN_SETPOINT1 : 1;
    // read-write - TRACKING_EN_SETPOINT2
    eTRACKING_EN_SETPOINT2 TRACKING_EN_SETPOINT2 : 1;
    // read-write - TRACKING_EN_SETPOINT3
    eTRACKING_EN_SETPOINT3 TRACKING_EN_SETPOINT3 : 1;
    // read-write - TRACKING_EN_SETPOINT4
    eTRACKING_EN_SETPOINT4 TRACKING_EN_SETPOINT4 : 1;
    // read-write - TRACKING_EN_SETPOINT5
    eTRACKING_EN_SETPOINT5 TRACKING_EN_SETPOINT5 : 1;
    // read-write - TRACKING_EN_SETPOINT6
    eTRACKING_EN_SETPOINT6 TRACKING_EN_SETPOINT6 : 1;
    // read-write - TRACKING_EN_SETPOINT7
    eTRACKING_EN_SETPOINT7 TRACKING_EN_SETPOINT7 : 1;
    // read-write - TRACKING_EN_SETPOINT8
    eTRACKING_EN_SETPOINT8 TRACKING_EN_SETPOINT8 : 1;
    // read-write - TRACKING_EN_SETPOINT9
    eTRACKING_EN_SETPOINT9 TRACKING_EN_SETPOINT9 : 1;
    // read-write - TRACKING_EN_SETPOINT10
    eTRACKING_EN_SETPOINT10 TRACKING_EN_SETPOINT10 : 1;
    // read-write - TRACKING_EN_SETPOINT11
    eTRACKING_EN_SETPOINT11 TRACKING_EN_SETPOINT11 : 1;
    // read-write - TRACKING_EN_SETPOINT12
    eTRACKING_EN_SETPOINT12 TRACKING_EN_SETPOINT12 : 1;
    // read-write - TRACKING_EN_SETPOINT13
    eTRACKING_EN_SETPOINT13 TRACKING_EN_SETPOINT13 : 1;
    // read-write - TRACKING_EN_SETPOINT14
    eTRACKING_EN_SETPOINT14 TRACKING_EN_SETPOINT14 : 1;
    // read-write - TRACKING_EN_SETPOINT15
    eTRACKING_EN_SETPOINT15 TRACKING_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_TRACKING_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_ANA_TRACKING_EN_SP*>(0x40C84630); }
};

// LDO_LPSR_ANA_BYPASS_EN_SP_REGISTER
union LDO_LPSR_ANA_BYPASS_EN_SP {
  
  // BYPASS_EN_SETPOINT0
  enum class eBYPASS_EN_SETPOINT0 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT1
  enum class eBYPASS_EN_SETPOINT1 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT2
  enum class eBYPASS_EN_SETPOINT2 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT3
  enum class eBYPASS_EN_SETPOINT3 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT4
  enum class eBYPASS_EN_SETPOINT4 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT5
  enum class eBYPASS_EN_SETPOINT5 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT6
  enum class eBYPASS_EN_SETPOINT6 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT7
  enum class eBYPASS_EN_SETPOINT7 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT
  enum class eBYPASS_EN_SETPOINT8 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT9
  enum class eBYPASS_EN_SETPOINT9 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT10
  enum class eBYPASS_EN_SETPOINT10 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT11
  enum class eBYPASS_EN_SETPOINT11 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT12
  enum class eBYPASS_EN_SETPOINT12 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT13
  enum class eBYPASS_EN_SETPOINT13 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT14
  enum class eBYPASS_EN_SETPOINT14 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT15
  enum class eBYPASS_EN_SETPOINT15 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - BYPASS_EN_SETPOINT0
    eBYPASS_EN_SETPOINT0 BYPASS_EN_SETPOINT0 : 1;
    // read-write - BYPASS_EN_SETPOINT1
    eBYPASS_EN_SETPOINT1 BYPASS_EN_SETPOINT1 : 1;
    // read-write - BYPASS_EN_SETPOINT2
    eBYPASS_EN_SETPOINT2 BYPASS_EN_SETPOINT2 : 1;
    // read-write - BYPASS_EN_SETPOINT3
    eBYPASS_EN_SETPOINT3 BYPASS_EN_SETPOINT3 : 1;
    // read-write - BYPASS_EN_SETPOINT4
    eBYPASS_EN_SETPOINT4 BYPASS_EN_SETPOINT4 : 1;
    // read-write - BYPASS_EN_SETPOINT5
    eBYPASS_EN_SETPOINT5 BYPASS_EN_SETPOINT5 : 1;
    // read-write - BYPASS_EN_SETPOINT6
    eBYPASS_EN_SETPOINT6 BYPASS_EN_SETPOINT6 : 1;
    // read-write - BYPASS_EN_SETPOINT7
    eBYPASS_EN_SETPOINT7 BYPASS_EN_SETPOINT7 : 1;
    // read-write - BYPASS_EN_SETPOINT
    eBYPASS_EN_SETPOINT8 BYPASS_EN_SETPOINT8 : 1;
    // read-write - BYPASS_EN_SETPOINT9
    eBYPASS_EN_SETPOINT9 BYPASS_EN_SETPOINT9 : 1;
    // read-write - BYPASS_EN_SETPOINT10
    eBYPASS_EN_SETPOINT10 BYPASS_EN_SETPOINT10 : 1;
    // read-write - BYPASS_EN_SETPOINT11
    eBYPASS_EN_SETPOINT11 BYPASS_EN_SETPOINT11 : 1;
    // read-write - BYPASS_EN_SETPOINT12
    eBYPASS_EN_SETPOINT12 BYPASS_EN_SETPOINT12 : 1;
    // read-write - BYPASS_EN_SETPOINT13
    eBYPASS_EN_SETPOINT13 BYPASS_EN_SETPOINT13 : 1;
    // read-write - BYPASS_EN_SETPOINT14
    eBYPASS_EN_SETPOINT14 BYPASS_EN_SETPOINT14 : 1;
    // read-write - BYPASS_EN_SETPOINT15
    eBYPASS_EN_SETPOINT15 BYPASS_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_BYPASS_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_ANA_BYPASS_EN_SP*>(0x40C84640); }
};

// LDO_LPSR_ANA_STBY_EN_SP_REGISTER
union LDO_LPSR_ANA_STBY_EN_SP {
  
  // STBY_EN_SETPOINT0
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT1
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT2
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT3
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT4
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT5
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT6
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT7
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT8
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT9
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT10
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT11
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT12
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT13
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT14
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT15
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STBY_EN_SETPOINT0
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - STBY_EN_SETPOINT1
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - STBY_EN_SETPOINT2
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - STBY_EN_SETPOINT3
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - STBY_EN_SETPOINT4
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - STBY_EN_SETPOINT5
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - STBY_EN_SETPOINT6
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - STBY_EN_SETPOINT7
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - STBY_EN_SETPOINT8
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - STBY_EN_SETPOINT9
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - STBY_EN_SETPOINT10
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - STBY_EN_SETPOINT11
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - STBY_EN_SETPOINT12
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - STBY_EN_SETPOINT13
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - STBY_EN_SETPOINT14
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - STBY_EN_SETPOINT15
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_ANA_STBY_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_ANA_STBY_EN_SP*>(0x40C84650); }
};

// LDO_LPSR_DIG_ENABLE_SP_REGISTER
union LDO_LPSR_DIG_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_ENABLE_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_ENABLE_SP*>(0x40C84660); }
};

// LDO_LPSR_DIG_TRG_SP0_REGISTER
union LDO_LPSR_DIG_TRG_SP0 {
  
  // Bit field definition.
  struct {
    // read-write - VOLTAGE_SETPOINT0
    uint32_t VOLTAGE_SETPOINT0 : 8;
    // read-write - VOLTAGE_SETPOINT1
    uint32_t VOLTAGE_SETPOINT1 : 8;
    // read-write - VOLTAGE_SETPOINT2
    uint32_t VOLTAGE_SETPOINT2 : 8;
    // read-write - VOLTAGE_SETPOINT3
    uint32_t VOLTAGE_SETPOINT3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP0 &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP0*>(0x40C84670); }
};

// LDO_LPSR_DIG_TRG_SP1_REGISTER
union LDO_LPSR_DIG_TRG_SP1 {
  
  // Bit field definition.
  struct {
    // read-write - VOLTAGE_SETPOINT4
    uint32_t VOLTAGE_SETPOINT4 : 8;
    // read-write - VOLTAGE_SETPOINT5
    uint32_t VOLTAGE_SETPOINT5 : 8;
    // read-write - VOLTAGE_SETPOINT6
    uint32_t VOLTAGE_SETPOINT6 : 8;
    // read-write - VOLTAGE_SETPOINT7
    uint32_t VOLTAGE_SETPOINT7 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP1 &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP1*>(0x40C84680); }
};

// LDO_LPSR_DIG_TRG_SP2_REGISTER
union LDO_LPSR_DIG_TRG_SP2 {
  
  // Bit field definition.
  struct {
    // read-write - VOLTAGE_SETPOINT8
    uint32_t VOLTAGE_SETPOINT8 : 8;
    // read-write - VOLTAGE_SETPOINT9
    uint32_t VOLTAGE_SETPOINT9 : 8;
    // read-write - VOLTAGE_SETPOINT10
    uint32_t VOLTAGE_SETPOINT10 : 8;
    // read-write - VOLTAGE_SETPOINT11
    uint32_t VOLTAGE_SETPOINT11 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP2 &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP2*>(0x40C84690); }
};

// LDO_LPSR_DIG_TRG_SP3_REGISTER
union LDO_LPSR_DIG_TRG_SP3 {
  
  // Bit field definition.
  struct {
    // read-write - VOLTAGE_SETPOINT12
    uint32_t VOLTAGE_SETPOINT12 : 8;
    // read-write - VOLTAGE_SETPOINT13
    uint32_t VOLTAGE_SETPOINT13 : 8;
    // read-write - VOLTAGE_SETPOINT14
    uint32_t VOLTAGE_SETPOINT14 : 8;
    // read-write - VOLTAGE_SETPOINT15
    uint32_t VOLTAGE_SETPOINT15 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRG_SP3 &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRG_SP3*>(0x40C846A0); }
};

// LDO_LPSR_DIG_LP_MODE_SP_REGISTER
union LDO_LPSR_DIG_LP_MODE_SP {
  
  // LP_MODE_SETPOINT0
  enum class eLP_MODE_SETPOINT0 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT1
  enum class eLP_MODE_SETPOINT1 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT2
  enum class eLP_MODE_SETPOINT2 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT3
  enum class eLP_MODE_SETPOINT3 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT4
  enum class eLP_MODE_SETPOINT4 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT5
  enum class eLP_MODE_SETPOINT5 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT6
  enum class eLP_MODE_SETPOINT6 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT7
  enum class eLP_MODE_SETPOINT7 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT8
  enum class eLP_MODE_SETPOINT8 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT9
  enum class eLP_MODE_SETPOINT9 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT10
  enum class eLP_MODE_SETPOINT10 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT11
  enum class eLP_MODE_SETPOINT11 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT12
  enum class eLP_MODE_SETPOINT12 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT13
  enum class eLP_MODE_SETPOINT13 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT14
  enum class eLP_MODE_SETPOINT14 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // LP_MODE_SETPOINT15
  enum class eLP_MODE_SETPOINT15 : uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - LP_MODE_SETPOINT0
    eLP_MODE_SETPOINT0 LP_MODE_SETPOINT0 : 1;
    // read-write - LP_MODE_SETPOINT1
    eLP_MODE_SETPOINT1 LP_MODE_SETPOINT1 : 1;
    // read-write - LP_MODE_SETPOINT2
    eLP_MODE_SETPOINT2 LP_MODE_SETPOINT2 : 1;
    // read-write - LP_MODE_SETPOINT3
    eLP_MODE_SETPOINT3 LP_MODE_SETPOINT3 : 1;
    // read-write - LP_MODE_SETPOINT4
    eLP_MODE_SETPOINT4 LP_MODE_SETPOINT4 : 1;
    // read-write - LP_MODE_SETPOINT5
    eLP_MODE_SETPOINT5 LP_MODE_SETPOINT5 : 1;
    // read-write - LP_MODE_SETPOINT6
    eLP_MODE_SETPOINT6 LP_MODE_SETPOINT6 : 1;
    // read-write - LP_MODE_SETPOINT7
    eLP_MODE_SETPOINT7 LP_MODE_SETPOINT7 : 1;
    // read-write - LP_MODE_SETPOINT8
    eLP_MODE_SETPOINT8 LP_MODE_SETPOINT8 : 1;
    // read-write - LP_MODE_SETPOINT9
    eLP_MODE_SETPOINT9 LP_MODE_SETPOINT9 : 1;
    // read-write - LP_MODE_SETPOINT10
    eLP_MODE_SETPOINT10 LP_MODE_SETPOINT10 : 1;
    // read-write - LP_MODE_SETPOINT11
    eLP_MODE_SETPOINT11 LP_MODE_SETPOINT11 : 1;
    // read-write - LP_MODE_SETPOINT12
    eLP_MODE_SETPOINT12 LP_MODE_SETPOINT12 : 1;
    // read-write - LP_MODE_SETPOINT13
    eLP_MODE_SETPOINT13 LP_MODE_SETPOINT13 : 1;
    // read-write - LP_MODE_SETPOINT14
    eLP_MODE_SETPOINT14 LP_MODE_SETPOINT14 : 1;
    // read-write - LP_MODE_SETPOINT15
    eLP_MODE_SETPOINT15 LP_MODE_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_LP_MODE_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_LP_MODE_SP*>(0x40C846B0); }
};

// LDO_LPSR_DIG_TRACKING_EN_SP_REGISTER
union LDO_LPSR_DIG_TRACKING_EN_SP {
  
  // TRACKING_EN_SETPOINT0
  enum class eTRACKING_EN_SETPOINT0 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT1
  enum class eTRACKING_EN_SETPOINT1 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT2
  enum class eTRACKING_EN_SETPOINT2 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT3
  enum class eTRACKING_EN_SETPOINT3 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT4
  enum class eTRACKING_EN_SETPOINT4 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT5
  enum class eTRACKING_EN_SETPOINT5 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT6
  enum class eTRACKING_EN_SETPOINT6 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT7
  enum class eTRACKING_EN_SETPOINT7 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT8
  enum class eTRACKING_EN_SETPOINT8 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT9
  enum class eTRACKING_EN_SETPOINT9 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT10
  enum class eTRACKING_EN_SETPOINT10 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT11
  enum class eTRACKING_EN_SETPOINT11 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT12
  enum class eTRACKING_EN_SETPOINT12 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT13
  enum class eTRACKING_EN_SETPOINT13 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT14
  enum class eTRACKING_EN_SETPOINT14 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // TRACKING_EN_SETPOINT15
  enum class eTRACKING_EN_SETPOINT15 : uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - TRACKING_EN_SETPOINT0
    eTRACKING_EN_SETPOINT0 TRACKING_EN_SETPOINT0 : 1;
    // read-write - TRACKING_EN_SETPOINT1
    eTRACKING_EN_SETPOINT1 TRACKING_EN_SETPOINT1 : 1;
    // read-write - TRACKING_EN_SETPOINT2
    eTRACKING_EN_SETPOINT2 TRACKING_EN_SETPOINT2 : 1;
    // read-write - TRACKING_EN_SETPOINT3
    eTRACKING_EN_SETPOINT3 TRACKING_EN_SETPOINT3 : 1;
    // read-write - TRACKING_EN_SETPOINT4
    eTRACKING_EN_SETPOINT4 TRACKING_EN_SETPOINT4 : 1;
    // read-write - TRACKING_EN_SETPOINT5
    eTRACKING_EN_SETPOINT5 TRACKING_EN_SETPOINT5 : 1;
    // read-write - TRACKING_EN_SETPOINT6
    eTRACKING_EN_SETPOINT6 TRACKING_EN_SETPOINT6 : 1;
    // read-write - TRACKING_EN_SETPOINT7
    eTRACKING_EN_SETPOINT7 TRACKING_EN_SETPOINT7 : 1;
    // read-write - TRACKING_EN_SETPOINT8
    eTRACKING_EN_SETPOINT8 TRACKING_EN_SETPOINT8 : 1;
    // read-write - TRACKING_EN_SETPOINT9
    eTRACKING_EN_SETPOINT9 TRACKING_EN_SETPOINT9 : 1;
    // read-write - TRACKING_EN_SETPOINT10
    eTRACKING_EN_SETPOINT10 TRACKING_EN_SETPOINT10 : 1;
    // read-write - TRACKING_EN_SETPOINT11
    eTRACKING_EN_SETPOINT11 TRACKING_EN_SETPOINT11 : 1;
    // read-write - TRACKING_EN_SETPOINT12
    eTRACKING_EN_SETPOINT12 TRACKING_EN_SETPOINT12 : 1;
    // read-write - TRACKING_EN_SETPOINT13
    eTRACKING_EN_SETPOINT13 TRACKING_EN_SETPOINT13 : 1;
    // read-write - TRACKING_EN_SETPOINT14
    eTRACKING_EN_SETPOINT14 TRACKING_EN_SETPOINT14 : 1;
    // read-write - TRACKING_EN_SETPOINT15
    eTRACKING_EN_SETPOINT15 TRACKING_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_TRACKING_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_TRACKING_EN_SP*>(0x40C846C0); }
};

// LDO_LPSR_DIG_BYPASS_EN_SP_REGISTER
union LDO_LPSR_DIG_BYPASS_EN_SP {
  
  // BYPASS_EN_SETPOINT0
  enum class eBYPASS_EN_SETPOINT0 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT1
  enum class eBYPASS_EN_SETPOINT1 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT2
  enum class eBYPASS_EN_SETPOINT2 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT3
  enum class eBYPASS_EN_SETPOINT3 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT4
  enum class eBYPASS_EN_SETPOINT4 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT5
  enum class eBYPASS_EN_SETPOINT5 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT6
  enum class eBYPASS_EN_SETPOINT6 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT7
  enum class eBYPASS_EN_SETPOINT7 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT8
  enum class eBYPASS_EN_SETPOINT8 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT9
  enum class eBYPASS_EN_SETPOINT9 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT10
  enum class eBYPASS_EN_SETPOINT10 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT11
  enum class eBYPASS_EN_SETPOINT11 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT12
  enum class eBYPASS_EN_SETPOINT12 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT13
  enum class eBYPASS_EN_SETPOINT13 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT14
  enum class eBYPASS_EN_SETPOINT14 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // BYPASS_EN_SETPOINT15
  enum class eBYPASS_EN_SETPOINT15 : uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - BYPASS_EN_SETPOINT0
    eBYPASS_EN_SETPOINT0 BYPASS_EN_SETPOINT0 : 1;
    // read-write - BYPASS_EN_SETPOINT1
    eBYPASS_EN_SETPOINT1 BYPASS_EN_SETPOINT1 : 1;
    // read-write - BYPASS_EN_SETPOINT2
    eBYPASS_EN_SETPOINT2 BYPASS_EN_SETPOINT2 : 1;
    // read-write - BYPASS_EN_SETPOINT3
    eBYPASS_EN_SETPOINT3 BYPASS_EN_SETPOINT3 : 1;
    // read-write - BYPASS_EN_SETPOINT4
    eBYPASS_EN_SETPOINT4 BYPASS_EN_SETPOINT4 : 1;
    // read-write - BYPASS_EN_SETPOINT5
    eBYPASS_EN_SETPOINT5 BYPASS_EN_SETPOINT5 : 1;
    // read-write - BYPASS_EN_SETPOINT6
    eBYPASS_EN_SETPOINT6 BYPASS_EN_SETPOINT6 : 1;
    // read-write - BYPASS_EN_SETPOINT7
    eBYPASS_EN_SETPOINT7 BYPASS_EN_SETPOINT7 : 1;
    // read-write - BYPASS_EN_SETPOINT8
    eBYPASS_EN_SETPOINT8 BYPASS_EN_SETPOINT8 : 1;
    // read-write - BYPASS_EN_SETPOINT9
    eBYPASS_EN_SETPOINT9 BYPASS_EN_SETPOINT9 : 1;
    // read-write - BYPASS_EN_SETPOINT10
    eBYPASS_EN_SETPOINT10 BYPASS_EN_SETPOINT10 : 1;
    // read-write - BYPASS_EN_SETPOINT11
    eBYPASS_EN_SETPOINT11 BYPASS_EN_SETPOINT11 : 1;
    // read-write - BYPASS_EN_SETPOINT12
    eBYPASS_EN_SETPOINT12 BYPASS_EN_SETPOINT12 : 1;
    // read-write - BYPASS_EN_SETPOINT13
    eBYPASS_EN_SETPOINT13 BYPASS_EN_SETPOINT13 : 1;
    // read-write - BYPASS_EN_SETPOINT14
    eBYPASS_EN_SETPOINT14 BYPASS_EN_SETPOINT14 : 1;
    // read-write - BYPASS_EN_SETPOINT15
    eBYPASS_EN_SETPOINT15 BYPASS_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_BYPASS_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_BYPASS_EN_SP*>(0x40C846D0); }
};

// LDO_LPSR_DIG_STBY_EN_SP_REGISTER
union LDO_LPSR_DIG_STBY_EN_SP {
  
  // STBY_EN_SETPOINT0
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT1
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT2
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT3
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT4
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT5
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT6
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT7
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT8
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT9
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT10
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT11
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT12
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT13
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT14
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT15
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STBY_EN_SETPOINT0
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - STBY_EN_SETPOINT1
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - STBY_EN_SETPOINT2
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - STBY_EN_SETPOINT3
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - STBY_EN_SETPOINT4
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - STBY_EN_SETPOINT5
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - STBY_EN_SETPOINT6
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - STBY_EN_SETPOINT7
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - STBY_EN_SETPOINT8
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - STBY_EN_SETPOINT9
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - STBY_EN_SETPOINT10
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - STBY_EN_SETPOINT11
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - STBY_EN_SETPOINT12
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - STBY_EN_SETPOINT13
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - STBY_EN_SETPOINT14
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - STBY_EN_SETPOINT15
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LDO_LPSR_DIG_STBY_EN_SP &ref() { return *reinterpret_cast<volatile LDO_LPSR_DIG_STBY_EN_SP*>(0x40C846E0); }
};

// BANDGAP_ENABLE_SP_REGISTER
union BANDGAP_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BANDGAP_ENABLE_SP &ref() { return *reinterpret_cast<volatile BANDGAP_ENABLE_SP*>(0x40C846F0); }
};

// FBB_M7_ENABLE_SP_REGISTER
union FBB_M7_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FBB_M7_ENABLE_SP &ref() { return *reinterpret_cast<volatile FBB_M7_ENABLE_SP*>(0x40C84700); }
};

// RBB_SOC_ENABLE_SP_REGISTER
union RBB_SOC_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_SOC_ENABLE_SP &ref() { return *reinterpret_cast<volatile RBB_SOC_ENABLE_SP*>(0x40C84710); }
};

// RBB_LPSR_ENABLE_SP_REGISTER
union RBB_LPSR_ENABLE_SP {
  
  // ON_OFF_SETPOINT0
  enum class eON_OFF_SETPOINT0 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT1
  enum class eON_OFF_SETPOINT1 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT2
  enum class eON_OFF_SETPOINT2 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT3
  enum class eON_OFF_SETPOINT3 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT4
  enum class eON_OFF_SETPOINT4 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT5
  enum class eON_OFF_SETPOINT5 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT6
  enum class eON_OFF_SETPOINT6 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT7
  enum class eON_OFF_SETPOINT7 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT8
  enum class eON_OFF_SETPOINT8 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT9
  enum class eON_OFF_SETPOINT9 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT10
  enum class eON_OFF_SETPOINT10 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT11
  enum class eON_OFF_SETPOINT11 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT12
  enum class eON_OFF_SETPOINT12 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT13
  enum class eON_OFF_SETPOINT13 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT14
  enum class eON_OFF_SETPOINT14 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // ON_OFF_SETPOINT15
  enum class eON_OFF_SETPOINT15 : uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - ON_OFF_SETPOINT0
    eON_OFF_SETPOINT0 ON_OFF_SETPOINT0 : 1;
    // read-write - ON_OFF_SETPOINT1
    eON_OFF_SETPOINT1 ON_OFF_SETPOINT1 : 1;
    // read-write - ON_OFF_SETPOINT2
    eON_OFF_SETPOINT2 ON_OFF_SETPOINT2 : 1;
    // read-write - ON_OFF_SETPOINT3
    eON_OFF_SETPOINT3 ON_OFF_SETPOINT3 : 1;
    // read-write - ON_OFF_SETPOINT4
    eON_OFF_SETPOINT4 ON_OFF_SETPOINT4 : 1;
    // read-write - ON_OFF_SETPOINT5
    eON_OFF_SETPOINT5 ON_OFF_SETPOINT5 : 1;
    // read-write - ON_OFF_SETPOINT6
    eON_OFF_SETPOINT6 ON_OFF_SETPOINT6 : 1;
    // read-write - ON_OFF_SETPOINT7
    eON_OFF_SETPOINT7 ON_OFF_SETPOINT7 : 1;
    // read-write - ON_OFF_SETPOINT8
    eON_OFF_SETPOINT8 ON_OFF_SETPOINT8 : 1;
    // read-write - ON_OFF_SETPOINT9
    eON_OFF_SETPOINT9 ON_OFF_SETPOINT9 : 1;
    // read-write - ON_OFF_SETPOINT10
    eON_OFF_SETPOINT10 ON_OFF_SETPOINT10 : 1;
    // read-write - ON_OFF_SETPOINT11
    eON_OFF_SETPOINT11 ON_OFF_SETPOINT11 : 1;
    // read-write - ON_OFF_SETPOINT12
    eON_OFF_SETPOINT12 ON_OFF_SETPOINT12 : 1;
    // read-write - ON_OFF_SETPOINT13
    eON_OFF_SETPOINT13 ON_OFF_SETPOINT13 : 1;
    // read-write - ON_OFF_SETPOINT14
    eON_OFF_SETPOINT14 ON_OFF_SETPOINT14 : 1;
    // read-write - ON_OFF_SETPOINT15
    eON_OFF_SETPOINT15 ON_OFF_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_LPSR_ENABLE_SP &ref() { return *reinterpret_cast<volatile RBB_LPSR_ENABLE_SP*>(0x40C84720); }
};

// BANDGAP_STBY_EN_SP_REGISTER
union BANDGAP_STBY_EN_SP {
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // STBY_EN_SETPOINT
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - STBY_EN_SETPOINT
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BANDGAP_STBY_EN_SP &ref() { return *reinterpret_cast<volatile BANDGAP_STBY_EN_SP*>(0x40C84730); }
};

// PLL_LDO_STBY_EN_SP_REGISTER
union PLL_LDO_STBY_EN_SP {
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Standby mode
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PLL_LDO_STBY_EN_SP &ref() { return *reinterpret_cast<volatile PLL_LDO_STBY_EN_SP*>(0x40C84740); }
};

// FBB_M7_STBY_EN_SP_REGISTER
union FBB_M7_STBY_EN_SP {
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Standby mode
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FBB_M7_STBY_EN_SP &ref() { return *reinterpret_cast<volatile FBB_M7_STBY_EN_SP*>(0x40C84750); }
};

// RBB_SOC_STBY_EN_SP_REGISTER
union RBB_SOC_STBY_EN_SP {
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Standby mode
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_SOC_STBY_EN_SP &ref() { return *reinterpret_cast<volatile RBB_SOC_STBY_EN_SP*>(0x40C84760); }
};

// RBB_LPSR_STBY_EN_SP_REGISTER
union RBB_LPSR_STBY_EN_SP {
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT0 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT1 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT2 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT3 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT4 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT5 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT6 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT7 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT8 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT9 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT10 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT11 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT12 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT13 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT14 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Standby mode
  enum class eSTBY_EN_SETPOINT15 : uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Standby mode
    eSTBY_EN_SETPOINT0 STBY_EN_SETPOINT0 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT1 STBY_EN_SETPOINT1 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT2 STBY_EN_SETPOINT2 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT3 STBY_EN_SETPOINT3 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT4 STBY_EN_SETPOINT4 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT5 STBY_EN_SETPOINT5 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT6 STBY_EN_SETPOINT6 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT7 STBY_EN_SETPOINT7 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT8 STBY_EN_SETPOINT8 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT9 STBY_EN_SETPOINT9 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT10 STBY_EN_SETPOINT10 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT11 STBY_EN_SETPOINT11 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT12 STBY_EN_SETPOINT12 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT13 STBY_EN_SETPOINT13 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT14 STBY_EN_SETPOINT14 : 1;
    // read-write - Standby mode
    eSTBY_EN_SETPOINT15 STBY_EN_SETPOINT15 : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBB_LPSR_STBY_EN_SP &ref() { return *reinterpret_cast<volatile RBB_LPSR_STBY_EN_SP*>(0x40C84770); }
};

// FBB_M7_CONFIGURE_REGISTER
union FBB_M7_CONFIGURE {
  
  // Bit field definition.
  struct {
    // read-write - wb_cfg_pw
    uint32_t WB_CFG_PW : 4;
    // read-write - wb_cfg_nw
    uint32_t WB_CFG_NW : 4;
    // read-write - oscillator_bits
    uint32_t OSCILLATOR_BITS : 3;
    // read-write - regulator_strength
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00002F11; }
  static inline volatile FBB_M7_CONFIGURE &ref() { return *reinterpret_cast<volatile FBB_M7_CONFIGURE*>(0x40C84780); }
};

// RBB_LPSR_CONFIGURE_REGISTER
union RBB_LPSR_CONFIGURE {
  
  // Bit field definition.
  struct {
    // read-write - wb_cfg_pw
    uint32_t WB_CFG_PW : 4;
    // read-write - wb_cfg_nw
    uint32_t WB_CFG_NW : 4;
    // read-write - oscillator_bits
    uint32_t OSCILLATOR_BITS : 3;
    // read-write - regulator_strength
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00003022; }
  static inline volatile RBB_LPSR_CONFIGURE &ref() { return *reinterpret_cast<volatile RBB_LPSR_CONFIGURE*>(0x40C84790); }
};

// RBB_SOC_CONFIGURE_REGISTER
union RBB_SOC_CONFIGURE {
  
  // Bit field definition.
  struct {
    // read-write - wb_cfg_pw
    uint32_t WB_CFG_PW : 4;
    // read-write - wb_cfg_nw
    uint32_t WB_CFG_NW : 4;
    // read-write - oscillator_bits
    uint32_t OSCILLATOR_BITS : 3;
    // read-write - regulator_strength
    uint32_t REGULATOR_STRENGTH : 3;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000044; }
  static inline volatile RBB_SOC_CONFIGURE &ref() { return *reinterpret_cast<volatile RBB_SOC_CONFIGURE*>(0x40C847A0); }
};

// REFTOP_OTP_TRIM_VALUE_REGISTER
union REFTOP_OTP_TRIM_VALUE {
  
  // Bit field definition.
  struct {
    // read-only - REFTOP_IBZTCADJ
    uint32_t REFTOP_IBZTCADJ : 3;
    // read-only - REFTOP_VBGADJ
    uint32_t REFTOP_VBGADJ : 3;
    // read-only - REFTOP_TRIM_EN
    uint32_t REFTOP_TRIM_EN : 1;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REFTOP_OTP_TRIM_VALUE &ref() { return *reinterpret_cast<volatile REFTOP_OTP_TRIM_VALUE*>(0x40C847B0); }
};

// LPSR_1P8_LDO_OTP_TRIM_VALUE_REGISTER
union LPSR_1P8_LDO_OTP_TRIM_VALUE {
  
  // Bit field definition.
  struct {
    // read-only - LPSR_LDO_1P8_TRIM
    uint32_t LPSR_LDO_1P8_TRIM : 2;
    // read-only - LPSR_LDO_1P8_TRIM_EN
    uint32_t LPSR_LDO_1P8_TRIM_EN : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSR_1P8_LDO_OTP_TRIM_VALUE &ref() { return *reinterpret_cast<volatile LPSR_1P8_LDO_OTP_TRIM_VALUE*>(0x40C847D0); }
};


} // namespace nANADIG_PMU