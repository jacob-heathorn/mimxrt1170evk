#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::anadig_pmu {


// PMU_LDO_PLL_REGISTER
struct PMU_LDO_PLL_fields_ {

  enum class eLDO_PLL_CONTROL_MODE : std::uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  // LDO_PLL_ENABLE
  using LDO_PLL_ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // LDO_PLL_CONTROL_MODE
  using LDO_PLL_CONTROL_MODE = ftl::mmio::Field<1, 1, eLDO_PLL_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ldo_pll_ai_toggle
  using LDO_PLL_AI_TOGGLE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ldo_pll_busy
  using LDO_PLL_AI_BUSY = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PMU_LDO_PLL_fields_

struct PMU_LDO_PLL : ftl::mmio::Register<
    0x40C84500u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RW,
    PMU_LDO_PLL_fields_::LDO_PLL_ENABLE,
    PMU_LDO_PLL_fields_::LDO_PLL_CONTROL_MODE,
    ftl::mmio::Reserved<14, 2>,
    PMU_LDO_PLL_fields_::LDO_PLL_AI_TOGGLE,
    ftl::mmio::Reserved<13, 17>,
    PMU_LDO_PLL_fields_::LDO_PLL_AI_BUSY,
    ftl::mmio::Reserved<1, 31>> {
  using eLDO_PLL_CONTROL_MODE = PMU_LDO_PLL_fields_::eLDO_PLL_CONTROL_MODE;
  using LDO_PLL_ENABLE = PMU_LDO_PLL_fields_::LDO_PLL_ENABLE;
  using LDO_PLL_CONTROL_MODE = PMU_LDO_PLL_fields_::LDO_PLL_CONTROL_MODE;
  using LDO_PLL_AI_TOGGLE = PMU_LDO_PLL_fields_::LDO_PLL_AI_TOGGLE;
  using LDO_PLL_AI_BUSY = PMU_LDO_PLL_fields_::LDO_PLL_AI_BUSY;
};


// PMU_BIAS_CTRL_REGISTER
struct PMU_BIAS_CTRL_fields_ {

  enum class eWB_VDD_SEL_1P8 : std::uint32_t {
    // VDD_LV1
    elv1 = 0,
    // VDD_LV2
    elv2 = 1,
  };
  // wb_cfg_1p8
  using WB_CFG_1P8 = ftl::mmio::Field<13, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_vdd_sel_1p8
  using WB_VDD_SEL_1P8 = ftl::mmio::Field<1, 14, eWB_VDD_SEL_1P8, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PMU_BIAS_CTRL_fields_

struct PMU_BIAS_CTRL : ftl::mmio::Register<
    0x40C84550u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PMU_BIAS_CTRL_fields_::WB_CFG_1P8,
    ftl::mmio::Reserved<1, 13>,
    PMU_BIAS_CTRL_fields_::WB_VDD_SEL_1P8,
    ftl::mmio::Reserved<17, 15>> {
  using eWB_VDD_SEL_1P8 = PMU_BIAS_CTRL_fields_::eWB_VDD_SEL_1P8;
  using WB_CFG_1P8 = PMU_BIAS_CTRL_fields_::WB_CFG_1P8;
  using WB_VDD_SEL_1P8 = PMU_BIAS_CTRL_fields_::WB_VDD_SEL_1P8;
};


// PMU_BIAS_CTRL2_REGISTER
struct PMU_BIAS_CTRL2_fields_ {

  enum class eWB_PWR_SW_EN_1P8 : std::uint32_t {
    // No BB
    ebb0 = 1,
    // BB
    ebb1 = 2,
    // BB
    ebb2 = 4,
  };

  enum class eWB_ADJ_1P8 : std::uint32_t {
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

  enum class eFBB_M7_CONTROL_MODE : std::uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };

  enum class eRBB_SOC_CONTROL_MODE : std::uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };

  enum class eRBB_LPSR_CONTROL_MODE : std::uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  // TMOD_wb_tst_md_1p8
  using WB_TST_MD = ftl::mmio::Field<9, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // MODSEL_wb_tst_md_1p8
  using WB_PWR_SW_EN_1P8 = ftl::mmio::Field<3, 10, eWB_PWR_SW_EN_1P8, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_adj_1p8
  using WB_ADJ_1P8 = ftl::mmio::Field<8, 13, eWB_ADJ_1P8, ftl::mmio::RW, ftl::mmio::Normal>;
  // FBB_M7_CONTROL_MODE
  using FBB_M7_CONTROL_MODE = ftl::mmio::Field<1, 21, eFBB_M7_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // RBB_SOC_CONTROL_MODE
  using RBB_SOC_CONTROL_MODE = ftl::mmio::Field<1, 22, eRBB_SOC_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // RBB_LPSR_CONTROL_MODE
  using RBB_LPSR_CONTROL_MODE = ftl::mmio::Field<1, 23, eRBB_LPSR_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_en
  using WB_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Digital output
  using WB_TST_DIG_OUT = ftl::mmio::Field<1, 25, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Digital Output pin.
  using WB_OK = ftl::mmio::Field<1, 26, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct PMU_BIAS_CTRL2_fields_

struct PMU_BIAS_CTRL2 : ftl::mmio::Register<
    0x40C84560u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    PMU_BIAS_CTRL2_fields_::WB_TST_MD,
    PMU_BIAS_CTRL2_fields_::WB_PWR_SW_EN_1P8,
    PMU_BIAS_CTRL2_fields_::WB_ADJ_1P8,
    PMU_BIAS_CTRL2_fields_::FBB_M7_CONTROL_MODE,
    PMU_BIAS_CTRL2_fields_::RBB_SOC_CONTROL_MODE,
    PMU_BIAS_CTRL2_fields_::RBB_LPSR_CONTROL_MODE,
    PMU_BIAS_CTRL2_fields_::WB_EN,
    PMU_BIAS_CTRL2_fields_::WB_TST_DIG_OUT,
    PMU_BIAS_CTRL2_fields_::WB_OK,
    ftl::mmio::Reserved<5, 27>> {
  using eWB_PWR_SW_EN_1P8 = PMU_BIAS_CTRL2_fields_::eWB_PWR_SW_EN_1P8;
  using eWB_ADJ_1P8 = PMU_BIAS_CTRL2_fields_::eWB_ADJ_1P8;
  using eFBB_M7_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::eFBB_M7_CONTROL_MODE;
  using eRBB_SOC_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::eRBB_SOC_CONTROL_MODE;
  using eRBB_LPSR_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::eRBB_LPSR_CONTROL_MODE;
  using WB_TST_MD = PMU_BIAS_CTRL2_fields_::WB_TST_MD;
  using WB_PWR_SW_EN_1P8 = PMU_BIAS_CTRL2_fields_::WB_PWR_SW_EN_1P8;
  using WB_ADJ_1P8 = PMU_BIAS_CTRL2_fields_::WB_ADJ_1P8;
  using FBB_M7_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::FBB_M7_CONTROL_MODE;
  using RBB_SOC_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::RBB_SOC_CONTROL_MODE;
  using RBB_LPSR_CONTROL_MODE = PMU_BIAS_CTRL2_fields_::RBB_LPSR_CONTROL_MODE;
  using WB_EN = PMU_BIAS_CTRL2_fields_::WB_EN;
  using WB_TST_DIG_OUT = PMU_BIAS_CTRL2_fields_::WB_TST_DIG_OUT;
  using WB_OK = PMU_BIAS_CTRL2_fields_::WB_OK;
};


// PMU_REF_CTRL_REGISTER
struct PMU_REF_CTRL_fields_ {

  enum class eREF_CONTROL_MODE : std::uint32_t {
    // SW Control
    esw = 0,
    // HW Control
    ehw = 1,
  };
  // ref_ai_toggle
  using REF_AI_TOGGLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ref_ai_busy
  using REF_AI_BUSY = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // REF_ENABLE
  using REF_ENABLE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // REF_CONTROL_MODE
  using REF_CONTROL_MODE = ftl::mmio::Field<1, 3, eREF_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // en_pll_vol_ref_buffer
  using EN_PLL_VOL_REF_BUFFER = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PMU_REF_CTRL_fields_

struct PMU_REF_CTRL : ftl::mmio::Register<
    0x40C84570u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PMU_REF_CTRL_fields_::REF_AI_TOGGLE,
    PMU_REF_CTRL_fields_::REF_AI_BUSY,
    PMU_REF_CTRL_fields_::REF_ENABLE,
    PMU_REF_CTRL_fields_::REF_CONTROL_MODE,
    PMU_REF_CTRL_fields_::EN_PLL_VOL_REF_BUFFER,
    ftl::mmio::Reserved<27, 5>> {
  using eREF_CONTROL_MODE = PMU_REF_CTRL_fields_::eREF_CONTROL_MODE;
  using REF_AI_TOGGLE = PMU_REF_CTRL_fields_::REF_AI_TOGGLE;
  using REF_AI_BUSY = PMU_REF_CTRL_fields_::REF_AI_BUSY;
  using REF_ENABLE = PMU_REF_CTRL_fields_::REF_ENABLE;
  using REF_CONTROL_MODE = PMU_REF_CTRL_fields_::REF_CONTROL_MODE;
  using EN_PLL_VOL_REF_BUFFER = PMU_REF_CTRL_fields_::EN_PLL_VOL_REF_BUFFER;
};


// PMU_POWER_DETECT_CTRL_REGISTER
struct PMU_POWER_DETECT_CTRL_fields_ {
  // ckgb_lpsr1p0
  using CKGB_LPSR1P0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PMU_POWER_DETECT_CTRL_fields_

struct PMU_POWER_DETECT_CTRL : ftl::mmio::Register<
    0x40C84580u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<8, 0>,
    PMU_POWER_DETECT_CTRL_fields_::CKGB_LPSR1P0,
    ftl::mmio::Reserved<23, 9>> {
  using CKGB_LPSR1P0 = PMU_POWER_DETECT_CTRL_fields_::CKGB_LPSR1P0;
};


// LDO_PLL_ENABLE_SP_REGISTER
struct LDO_PLL_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_PLL_ENABLE_SP_fields_

struct LDO_PLL_ENABLE_SP : ftl::mmio::Register<
    0x40C84600u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = LDO_PLL_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = LDO_PLL_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// LDO_LPSR_ANA_ENABLE_SP_REGISTER
struct LDO_LPSR_ANA_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_ANA_ENABLE_SP_fields_

struct LDO_LPSR_ANA_ENABLE_SP : ftl::mmio::Register<
    0x40C84610u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = LDO_LPSR_ANA_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = LDO_LPSR_ANA_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// LDO_LPSR_ANA_LP_MODE_SP_REGISTER
struct LDO_LPSR_ANA_LP_MODE_SP_fields_ {

  enum class eLP_MODE_SETPOINT0 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT1 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT2 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT3 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT4 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT5 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT6 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT7 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT8 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT9 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT10 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT11 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT12 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT13 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT14 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPONIT15 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  // LP_MODE_SETPOINT0
  using LP_MODE_SETPOINT0 = ftl::mmio::Field<1, 0, eLP_MODE_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT1
  using LP_MODE_SETPOINT1 = ftl::mmio::Field<1, 1, eLP_MODE_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT2
  using LP_MODE_SETPONIT2 = ftl::mmio::Field<1, 2, eLP_MODE_SETPONIT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT3
  using LP_MODE_SETPONIT3 = ftl::mmio::Field<1, 3, eLP_MODE_SETPONIT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT4
  using LP_MODE_SETPONIT4 = ftl::mmio::Field<1, 4, eLP_MODE_SETPONIT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT5
  using LP_MODE_SETPONIT5 = ftl::mmio::Field<1, 5, eLP_MODE_SETPONIT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT6
  using LP_MODE_SETPONIT6 = ftl::mmio::Field<1, 6, eLP_MODE_SETPONIT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT7
  using LP_MODE_SETPONIT7 = ftl::mmio::Field<1, 7, eLP_MODE_SETPONIT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT8
  using LP_MODE_SETPONIT8 = ftl::mmio::Field<1, 8, eLP_MODE_SETPONIT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT9
  using LP_MODE_SETPONIT9 = ftl::mmio::Field<1, 9, eLP_MODE_SETPONIT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT10
  using LP_MODE_SETPONIT10 = ftl::mmio::Field<1, 10, eLP_MODE_SETPONIT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT11
  using LP_MODE_SETPONIT11 = ftl::mmio::Field<1, 11, eLP_MODE_SETPONIT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT12
  using LP_MODE_SETPONIT12 = ftl::mmio::Field<1, 12, eLP_MODE_SETPONIT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT13
  using LP_MODE_SETPONIT13 = ftl::mmio::Field<1, 13, eLP_MODE_SETPONIT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT14
  using LP_MODE_SETPONIT14 = ftl::mmio::Field<1, 14, eLP_MODE_SETPONIT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT15
  using LP_MODE_SETPONIT15 = ftl::mmio::Field<1, 15, eLP_MODE_SETPONIT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_ANA_LP_MODE_SP_fields_

struct LDO_LPSR_ANA_LP_MODE_SP : ftl::mmio::Register<
    0x40C84620u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPOINT0,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPOINT1,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT2,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT3,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT4,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT5,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT6,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT7,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT8,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT9,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT10,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT11,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT12,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT13,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT14,
    LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT15,
    ftl::mmio::Reserved<16, 16>> {
  using eLP_MODE_SETPOINT0 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPOINT0;
  using eLP_MODE_SETPOINT1 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPOINT1;
  using eLP_MODE_SETPONIT2 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT2;
  using eLP_MODE_SETPONIT3 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT3;
  using eLP_MODE_SETPONIT4 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT4;
  using eLP_MODE_SETPONIT5 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT5;
  using eLP_MODE_SETPONIT6 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT6;
  using eLP_MODE_SETPONIT7 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT7;
  using eLP_MODE_SETPONIT8 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT8;
  using eLP_MODE_SETPONIT9 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT9;
  using eLP_MODE_SETPONIT10 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT10;
  using eLP_MODE_SETPONIT11 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT11;
  using eLP_MODE_SETPONIT12 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT12;
  using eLP_MODE_SETPONIT13 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT13;
  using eLP_MODE_SETPONIT14 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT14;
  using eLP_MODE_SETPONIT15 = LDO_LPSR_ANA_LP_MODE_SP_fields_::eLP_MODE_SETPONIT15;
  using LP_MODE_SETPOINT0 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPOINT0;
  using LP_MODE_SETPOINT1 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPOINT1;
  using LP_MODE_SETPONIT2 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT2;
  using LP_MODE_SETPONIT3 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT3;
  using LP_MODE_SETPONIT4 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT4;
  using LP_MODE_SETPONIT5 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT5;
  using LP_MODE_SETPONIT6 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT6;
  using LP_MODE_SETPONIT7 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT7;
  using LP_MODE_SETPONIT8 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT8;
  using LP_MODE_SETPONIT9 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT9;
  using LP_MODE_SETPONIT10 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT10;
  using LP_MODE_SETPONIT11 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT11;
  using LP_MODE_SETPONIT12 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT12;
  using LP_MODE_SETPONIT13 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT13;
  using LP_MODE_SETPONIT14 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT14;
  using LP_MODE_SETPONIT15 = LDO_LPSR_ANA_LP_MODE_SP_fields_::LP_MODE_SETPONIT15;
};


// LDO_LPSR_ANA_TRACKING_EN_SP_REGISTER
struct LDO_LPSR_ANA_TRACKING_EN_SP_fields_ {

  enum class eTRACKING_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  // TRACKING_EN_SETPOINT0
  using TRACKING_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eTRACKING_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT1
  using TRACKING_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eTRACKING_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT2
  using TRACKING_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eTRACKING_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT3
  using TRACKING_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eTRACKING_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT4
  using TRACKING_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eTRACKING_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT5
  using TRACKING_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eTRACKING_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT6
  using TRACKING_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eTRACKING_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT7
  using TRACKING_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eTRACKING_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT8
  using TRACKING_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eTRACKING_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT9
  using TRACKING_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eTRACKING_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT10
  using TRACKING_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eTRACKING_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT11
  using TRACKING_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eTRACKING_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT12
  using TRACKING_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eTRACKING_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT13
  using TRACKING_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eTRACKING_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT14
  using TRACKING_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eTRACKING_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT15
  using TRACKING_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eTRACKING_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_ANA_TRACKING_EN_SP_fields_

struct LDO_LPSR_ANA_TRACKING_EN_SP : ftl::mmio::Register<
    0x40C84630u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT0,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT1,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT2,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT3,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT4,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT5,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT6,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT7,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT8,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT9,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT10,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT11,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT12,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT13,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT14,
    LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eTRACKING_EN_SETPOINT0 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT0;
  using eTRACKING_EN_SETPOINT1 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT1;
  using eTRACKING_EN_SETPOINT2 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT2;
  using eTRACKING_EN_SETPOINT3 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT3;
  using eTRACKING_EN_SETPOINT4 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT4;
  using eTRACKING_EN_SETPOINT5 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT5;
  using eTRACKING_EN_SETPOINT6 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT6;
  using eTRACKING_EN_SETPOINT7 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT7;
  using eTRACKING_EN_SETPOINT8 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT8;
  using eTRACKING_EN_SETPOINT9 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT9;
  using eTRACKING_EN_SETPOINT10 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT10;
  using eTRACKING_EN_SETPOINT11 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT11;
  using eTRACKING_EN_SETPOINT12 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT12;
  using eTRACKING_EN_SETPOINT13 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT13;
  using eTRACKING_EN_SETPOINT14 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT14;
  using eTRACKING_EN_SETPOINT15 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT15;
  using TRACKING_EN_SETPOINT0 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT0;
  using TRACKING_EN_SETPOINT1 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT1;
  using TRACKING_EN_SETPOINT2 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT2;
  using TRACKING_EN_SETPOINT3 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT3;
  using TRACKING_EN_SETPOINT4 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT4;
  using TRACKING_EN_SETPOINT5 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT5;
  using TRACKING_EN_SETPOINT6 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT6;
  using TRACKING_EN_SETPOINT7 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT7;
  using TRACKING_EN_SETPOINT8 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT8;
  using TRACKING_EN_SETPOINT9 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT9;
  using TRACKING_EN_SETPOINT10 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT10;
  using TRACKING_EN_SETPOINT11 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT11;
  using TRACKING_EN_SETPOINT12 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT12;
  using TRACKING_EN_SETPOINT13 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT13;
  using TRACKING_EN_SETPOINT14 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT14;
  using TRACKING_EN_SETPOINT15 = LDO_LPSR_ANA_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT15;
};


// LDO_LPSR_ANA_BYPASS_EN_SP_REGISTER
struct LDO_LPSR_ANA_BYPASS_EN_SP_fields_ {

  enum class eBYPASS_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  // BYPASS_EN_SETPOINT0
  using BYPASS_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eBYPASS_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT1
  using BYPASS_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eBYPASS_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT2
  using BYPASS_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eBYPASS_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT3
  using BYPASS_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eBYPASS_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT4
  using BYPASS_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eBYPASS_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT5
  using BYPASS_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eBYPASS_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT6
  using BYPASS_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eBYPASS_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT7
  using BYPASS_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eBYPASS_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT
  using BYPASS_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eBYPASS_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT9
  using BYPASS_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eBYPASS_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT10
  using BYPASS_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eBYPASS_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT11
  using BYPASS_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eBYPASS_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT12
  using BYPASS_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eBYPASS_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT13
  using BYPASS_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eBYPASS_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT14
  using BYPASS_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eBYPASS_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT15
  using BYPASS_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eBYPASS_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_ANA_BYPASS_EN_SP_fields_

struct LDO_LPSR_ANA_BYPASS_EN_SP : ftl::mmio::Register<
    0x40C84640u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT0,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT1,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT2,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT3,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT4,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT5,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT6,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT7,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT8,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT9,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT10,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT11,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT12,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT13,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT14,
    LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eBYPASS_EN_SETPOINT0 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT0;
  using eBYPASS_EN_SETPOINT1 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT1;
  using eBYPASS_EN_SETPOINT2 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT2;
  using eBYPASS_EN_SETPOINT3 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT3;
  using eBYPASS_EN_SETPOINT4 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT4;
  using eBYPASS_EN_SETPOINT5 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT5;
  using eBYPASS_EN_SETPOINT6 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT6;
  using eBYPASS_EN_SETPOINT7 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT7;
  using eBYPASS_EN_SETPOINT8 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT8;
  using eBYPASS_EN_SETPOINT9 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT9;
  using eBYPASS_EN_SETPOINT10 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT10;
  using eBYPASS_EN_SETPOINT11 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT11;
  using eBYPASS_EN_SETPOINT12 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT12;
  using eBYPASS_EN_SETPOINT13 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT13;
  using eBYPASS_EN_SETPOINT14 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT14;
  using eBYPASS_EN_SETPOINT15 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT15;
  using BYPASS_EN_SETPOINT0 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT0;
  using BYPASS_EN_SETPOINT1 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT1;
  using BYPASS_EN_SETPOINT2 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT2;
  using BYPASS_EN_SETPOINT3 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT3;
  using BYPASS_EN_SETPOINT4 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT4;
  using BYPASS_EN_SETPOINT5 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT5;
  using BYPASS_EN_SETPOINT6 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT6;
  using BYPASS_EN_SETPOINT7 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT7;
  using BYPASS_EN_SETPOINT8 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT8;
  using BYPASS_EN_SETPOINT9 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT9;
  using BYPASS_EN_SETPOINT10 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT10;
  using BYPASS_EN_SETPOINT11 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT11;
  using BYPASS_EN_SETPOINT12 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT12;
  using BYPASS_EN_SETPOINT13 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT13;
  using BYPASS_EN_SETPOINT14 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT14;
  using BYPASS_EN_SETPOINT15 = LDO_LPSR_ANA_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT15;
};


// LDO_LPSR_ANA_STBY_EN_SP_REGISTER
struct LDO_LPSR_ANA_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // STBY_EN_SETPOINT0
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT1
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT2
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT3
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT4
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT5
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT6
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT7
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT8
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT9
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT10
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT11
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT12
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT13
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT14
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT15
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_ANA_STBY_EN_SP_fields_

struct LDO_LPSR_ANA_STBY_EN_SP : ftl::mmio::Register<
    0x40C84650u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = LDO_LPSR_ANA_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = LDO_LPSR_ANA_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// LDO_LPSR_DIG_ENABLE_SP_REGISTER
struct LDO_LPSR_DIG_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_ENABLE_SP_fields_

struct LDO_LPSR_DIG_ENABLE_SP : ftl::mmio::Register<
    0x40C84660u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = LDO_LPSR_DIG_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = LDO_LPSR_DIG_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// LDO_LPSR_DIG_TRG_SP0_REGISTER
struct LDO_LPSR_DIG_TRG_SP0_fields_ {
  // VOLTAGE_SETPOINT0
  using VOLTAGE_SETPOINT0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT1
  using VOLTAGE_SETPOINT1 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT2
  using VOLTAGE_SETPOINT2 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT3
  using VOLTAGE_SETPOINT3 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_TRG_SP0_fields_

struct LDO_LPSR_DIG_TRG_SP0 : ftl::mmio::Register<
    0x40C84670u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT0,
    LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT1,
    LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT2,
    LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT3> {
  using VOLTAGE_SETPOINT0 = LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT0;
  using VOLTAGE_SETPOINT1 = LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT1;
  using VOLTAGE_SETPOINT2 = LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT2;
  using VOLTAGE_SETPOINT3 = LDO_LPSR_DIG_TRG_SP0_fields_::VOLTAGE_SETPOINT3;
};


// LDO_LPSR_DIG_TRG_SP1_REGISTER
struct LDO_LPSR_DIG_TRG_SP1_fields_ {
  // VOLTAGE_SETPOINT4
  using VOLTAGE_SETPOINT4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT5
  using VOLTAGE_SETPOINT5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT6
  using VOLTAGE_SETPOINT6 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT7
  using VOLTAGE_SETPOINT7 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_TRG_SP1_fields_

struct LDO_LPSR_DIG_TRG_SP1 : ftl::mmio::Register<
    0x40C84680u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT4,
    LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT5,
    LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT6,
    LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT7> {
  using VOLTAGE_SETPOINT4 = LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT4;
  using VOLTAGE_SETPOINT5 = LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT5;
  using VOLTAGE_SETPOINT6 = LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT6;
  using VOLTAGE_SETPOINT7 = LDO_LPSR_DIG_TRG_SP1_fields_::VOLTAGE_SETPOINT7;
};


// LDO_LPSR_DIG_TRG_SP2_REGISTER
struct LDO_LPSR_DIG_TRG_SP2_fields_ {
  // VOLTAGE_SETPOINT8
  using VOLTAGE_SETPOINT8 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT9
  using VOLTAGE_SETPOINT9 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT10
  using VOLTAGE_SETPOINT10 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT11
  using VOLTAGE_SETPOINT11 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_TRG_SP2_fields_

struct LDO_LPSR_DIG_TRG_SP2 : ftl::mmio::Register<
    0x40C84690u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT8,
    LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT9,
    LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT10,
    LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT11> {
  using VOLTAGE_SETPOINT8 = LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT8;
  using VOLTAGE_SETPOINT9 = LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT9;
  using VOLTAGE_SETPOINT10 = LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT10;
  using VOLTAGE_SETPOINT11 = LDO_LPSR_DIG_TRG_SP2_fields_::VOLTAGE_SETPOINT11;
};


// LDO_LPSR_DIG_TRG_SP3_REGISTER
struct LDO_LPSR_DIG_TRG_SP3_fields_ {
  // VOLTAGE_SETPOINT12
  using VOLTAGE_SETPOINT12 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT13
  using VOLTAGE_SETPOINT13 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT14
  using VOLTAGE_SETPOINT14 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // VOLTAGE_SETPOINT15
  using VOLTAGE_SETPOINT15 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_TRG_SP3_fields_

struct LDO_LPSR_DIG_TRG_SP3 : ftl::mmio::Register<
    0x40C846A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT12,
    LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT13,
    LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT14,
    LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT15> {
  using VOLTAGE_SETPOINT12 = LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT12;
  using VOLTAGE_SETPOINT13 = LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT13;
  using VOLTAGE_SETPOINT14 = LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT14;
  using VOLTAGE_SETPOINT15 = LDO_LPSR_DIG_TRG_SP3_fields_::VOLTAGE_SETPOINT15;
};


// LDO_LPSR_DIG_LP_MODE_SP_REGISTER
struct LDO_LPSR_DIG_LP_MODE_SP_fields_ {

  enum class eLP_MODE_SETPOINT0 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT1 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT2 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT3 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT4 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT5 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT6 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT7 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT8 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT9 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT10 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT11 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT12 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT13 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT14 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };

  enum class eLP_MODE_SETPOINT15 : std::uint32_t {
    // LP
    elp0 = 0,
    // HP
    ehp1 = 1,
  };
  // LP_MODE_SETPOINT0
  using LP_MODE_SETPOINT0 = ftl::mmio::Field<1, 0, eLP_MODE_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT1
  using LP_MODE_SETPOINT1 = ftl::mmio::Field<1, 1, eLP_MODE_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT2
  using LP_MODE_SETPOINT2 = ftl::mmio::Field<1, 2, eLP_MODE_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT3
  using LP_MODE_SETPOINT3 = ftl::mmio::Field<1, 3, eLP_MODE_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT4
  using LP_MODE_SETPOINT4 = ftl::mmio::Field<1, 4, eLP_MODE_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT5
  using LP_MODE_SETPOINT5 = ftl::mmio::Field<1, 5, eLP_MODE_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT6
  using LP_MODE_SETPOINT6 = ftl::mmio::Field<1, 6, eLP_MODE_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT7
  using LP_MODE_SETPOINT7 = ftl::mmio::Field<1, 7, eLP_MODE_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT8
  using LP_MODE_SETPOINT8 = ftl::mmio::Field<1, 8, eLP_MODE_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT9
  using LP_MODE_SETPOINT9 = ftl::mmio::Field<1, 9, eLP_MODE_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT10
  using LP_MODE_SETPOINT10 = ftl::mmio::Field<1, 10, eLP_MODE_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT11
  using LP_MODE_SETPOINT11 = ftl::mmio::Field<1, 11, eLP_MODE_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT12
  using LP_MODE_SETPOINT12 = ftl::mmio::Field<1, 12, eLP_MODE_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT13
  using LP_MODE_SETPOINT13 = ftl::mmio::Field<1, 13, eLP_MODE_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT14
  using LP_MODE_SETPOINT14 = ftl::mmio::Field<1, 14, eLP_MODE_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // LP_MODE_SETPOINT15
  using LP_MODE_SETPOINT15 = ftl::mmio::Field<1, 15, eLP_MODE_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_LP_MODE_SP_fields_

struct LDO_LPSR_DIG_LP_MODE_SP : ftl::mmio::Register<
    0x40C846B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT0,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT1,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT2,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT3,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT4,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT5,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT6,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT7,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT8,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT9,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT10,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT11,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT12,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT13,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT14,
    LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eLP_MODE_SETPOINT0 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT0;
  using eLP_MODE_SETPOINT1 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT1;
  using eLP_MODE_SETPOINT2 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT2;
  using eLP_MODE_SETPOINT3 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT3;
  using eLP_MODE_SETPOINT4 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT4;
  using eLP_MODE_SETPOINT5 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT5;
  using eLP_MODE_SETPOINT6 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT6;
  using eLP_MODE_SETPOINT7 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT7;
  using eLP_MODE_SETPOINT8 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT8;
  using eLP_MODE_SETPOINT9 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT9;
  using eLP_MODE_SETPOINT10 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT10;
  using eLP_MODE_SETPOINT11 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT11;
  using eLP_MODE_SETPOINT12 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT12;
  using eLP_MODE_SETPOINT13 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT13;
  using eLP_MODE_SETPOINT14 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT14;
  using eLP_MODE_SETPOINT15 = LDO_LPSR_DIG_LP_MODE_SP_fields_::eLP_MODE_SETPOINT15;
  using LP_MODE_SETPOINT0 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT0;
  using LP_MODE_SETPOINT1 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT1;
  using LP_MODE_SETPOINT2 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT2;
  using LP_MODE_SETPOINT3 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT3;
  using LP_MODE_SETPOINT4 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT4;
  using LP_MODE_SETPOINT5 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT5;
  using LP_MODE_SETPOINT6 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT6;
  using LP_MODE_SETPOINT7 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT7;
  using LP_MODE_SETPOINT8 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT8;
  using LP_MODE_SETPOINT9 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT9;
  using LP_MODE_SETPOINT10 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT10;
  using LP_MODE_SETPOINT11 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT11;
  using LP_MODE_SETPOINT12 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT12;
  using LP_MODE_SETPOINT13 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT13;
  using LP_MODE_SETPOINT14 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT14;
  using LP_MODE_SETPOINT15 = LDO_LPSR_DIG_LP_MODE_SP_fields_::LP_MODE_SETPOINT15;
};


// LDO_LPSR_DIG_TRACKING_EN_SP_REGISTER
struct LDO_LPSR_DIG_TRACKING_EN_SP_fields_ {

  enum class eTRACKING_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };

  enum class eTRACKING_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    etrack0 = 0,
    // Enabled
    etrack1 = 1,
  };
  // TRACKING_EN_SETPOINT0
  using TRACKING_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eTRACKING_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT1
  using TRACKING_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eTRACKING_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT2
  using TRACKING_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eTRACKING_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT3
  using TRACKING_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eTRACKING_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT4
  using TRACKING_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eTRACKING_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT5
  using TRACKING_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eTRACKING_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT6
  using TRACKING_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eTRACKING_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT7
  using TRACKING_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eTRACKING_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT8
  using TRACKING_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eTRACKING_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT9
  using TRACKING_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eTRACKING_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT10
  using TRACKING_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eTRACKING_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT11
  using TRACKING_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eTRACKING_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT12
  using TRACKING_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eTRACKING_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT13
  using TRACKING_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eTRACKING_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT14
  using TRACKING_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eTRACKING_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // TRACKING_EN_SETPOINT15
  using TRACKING_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eTRACKING_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_TRACKING_EN_SP_fields_

struct LDO_LPSR_DIG_TRACKING_EN_SP : ftl::mmio::Register<
    0x40C846C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT0,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT1,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT2,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT3,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT4,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT5,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT6,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT7,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT8,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT9,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT10,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT11,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT12,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT13,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT14,
    LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eTRACKING_EN_SETPOINT0 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT0;
  using eTRACKING_EN_SETPOINT1 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT1;
  using eTRACKING_EN_SETPOINT2 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT2;
  using eTRACKING_EN_SETPOINT3 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT3;
  using eTRACKING_EN_SETPOINT4 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT4;
  using eTRACKING_EN_SETPOINT5 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT5;
  using eTRACKING_EN_SETPOINT6 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT6;
  using eTRACKING_EN_SETPOINT7 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT7;
  using eTRACKING_EN_SETPOINT8 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT8;
  using eTRACKING_EN_SETPOINT9 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT9;
  using eTRACKING_EN_SETPOINT10 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT10;
  using eTRACKING_EN_SETPOINT11 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT11;
  using eTRACKING_EN_SETPOINT12 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT12;
  using eTRACKING_EN_SETPOINT13 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT13;
  using eTRACKING_EN_SETPOINT14 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT14;
  using eTRACKING_EN_SETPOINT15 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::eTRACKING_EN_SETPOINT15;
  using TRACKING_EN_SETPOINT0 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT0;
  using TRACKING_EN_SETPOINT1 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT1;
  using TRACKING_EN_SETPOINT2 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT2;
  using TRACKING_EN_SETPOINT3 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT3;
  using TRACKING_EN_SETPOINT4 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT4;
  using TRACKING_EN_SETPOINT5 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT5;
  using TRACKING_EN_SETPOINT6 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT6;
  using TRACKING_EN_SETPOINT7 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT7;
  using TRACKING_EN_SETPOINT8 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT8;
  using TRACKING_EN_SETPOINT9 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT9;
  using TRACKING_EN_SETPOINT10 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT10;
  using TRACKING_EN_SETPOINT11 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT11;
  using TRACKING_EN_SETPOINT12 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT12;
  using TRACKING_EN_SETPOINT13 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT13;
  using TRACKING_EN_SETPOINT14 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT14;
  using TRACKING_EN_SETPOINT15 = LDO_LPSR_DIG_TRACKING_EN_SP_fields_::TRACKING_EN_SETPOINT15;
};


// LDO_LPSR_DIG_BYPASS_EN_SP_REGISTER
struct LDO_LPSR_DIG_BYPASS_EN_SP_fields_ {

  enum class eBYPASS_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };

  enum class eBYPASS_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    ebyp0 = 0,
    // Enabled
    ebyp1 = 1,
  };
  // BYPASS_EN_SETPOINT0
  using BYPASS_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eBYPASS_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT1
  using BYPASS_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eBYPASS_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT2
  using BYPASS_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eBYPASS_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT3
  using BYPASS_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eBYPASS_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT4
  using BYPASS_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eBYPASS_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT5
  using BYPASS_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eBYPASS_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT6
  using BYPASS_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eBYPASS_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT7
  using BYPASS_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eBYPASS_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT8
  using BYPASS_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eBYPASS_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT9
  using BYPASS_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eBYPASS_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT10
  using BYPASS_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eBYPASS_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT11
  using BYPASS_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eBYPASS_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT12
  using BYPASS_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eBYPASS_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT13
  using BYPASS_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eBYPASS_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT14
  using BYPASS_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eBYPASS_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // BYPASS_EN_SETPOINT15
  using BYPASS_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eBYPASS_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_BYPASS_EN_SP_fields_

struct LDO_LPSR_DIG_BYPASS_EN_SP : ftl::mmio::Register<
    0x40C846D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT0,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT1,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT2,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT3,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT4,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT5,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT6,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT7,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT8,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT9,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT10,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT11,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT12,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT13,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT14,
    LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eBYPASS_EN_SETPOINT0 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT0;
  using eBYPASS_EN_SETPOINT1 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT1;
  using eBYPASS_EN_SETPOINT2 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT2;
  using eBYPASS_EN_SETPOINT3 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT3;
  using eBYPASS_EN_SETPOINT4 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT4;
  using eBYPASS_EN_SETPOINT5 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT5;
  using eBYPASS_EN_SETPOINT6 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT6;
  using eBYPASS_EN_SETPOINT7 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT7;
  using eBYPASS_EN_SETPOINT8 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT8;
  using eBYPASS_EN_SETPOINT9 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT9;
  using eBYPASS_EN_SETPOINT10 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT10;
  using eBYPASS_EN_SETPOINT11 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT11;
  using eBYPASS_EN_SETPOINT12 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT12;
  using eBYPASS_EN_SETPOINT13 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT13;
  using eBYPASS_EN_SETPOINT14 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT14;
  using eBYPASS_EN_SETPOINT15 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::eBYPASS_EN_SETPOINT15;
  using BYPASS_EN_SETPOINT0 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT0;
  using BYPASS_EN_SETPOINT1 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT1;
  using BYPASS_EN_SETPOINT2 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT2;
  using BYPASS_EN_SETPOINT3 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT3;
  using BYPASS_EN_SETPOINT4 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT4;
  using BYPASS_EN_SETPOINT5 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT5;
  using BYPASS_EN_SETPOINT6 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT6;
  using BYPASS_EN_SETPOINT7 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT7;
  using BYPASS_EN_SETPOINT8 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT8;
  using BYPASS_EN_SETPOINT9 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT9;
  using BYPASS_EN_SETPOINT10 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT10;
  using BYPASS_EN_SETPOINT11 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT11;
  using BYPASS_EN_SETPOINT12 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT12;
  using BYPASS_EN_SETPOINT13 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT13;
  using BYPASS_EN_SETPOINT14 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT14;
  using BYPASS_EN_SETPOINT15 = LDO_LPSR_DIG_BYPASS_EN_SP_fields_::BYPASS_EN_SETPOINT15;
};


// LDO_LPSR_DIG_STBY_EN_SP_REGISTER
struct LDO_LPSR_DIG_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // STBY_EN_SETPOINT0
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT1
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT2
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT3
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT4
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT5
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT6
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT7
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT8
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT9
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT10
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT11
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT12
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT13
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT14
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT15
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LDO_LPSR_DIG_STBY_EN_SP_fields_

struct LDO_LPSR_DIG_STBY_EN_SP : ftl::mmio::Register<
    0x40C846E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = LDO_LPSR_DIG_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = LDO_LPSR_DIG_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// BANDGAP_ENABLE_SP_REGISTER
struct BANDGAP_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BANDGAP_ENABLE_SP_fields_

struct BANDGAP_ENABLE_SP : ftl::mmio::Register<
    0x40C846F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = BANDGAP_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = BANDGAP_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// FBB_M7_ENABLE_SP_REGISTER
struct FBB_M7_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FBB_M7_ENABLE_SP_fields_

struct FBB_M7_ENABLE_SP : ftl::mmio::Register<
    0x40C84700u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = FBB_M7_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = FBB_M7_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// RBB_SOC_ENABLE_SP_REGISTER
struct RBB_SOC_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_SOC_ENABLE_SP_fields_

struct RBB_SOC_ENABLE_SP : ftl::mmio::Register<
    0x40C84710u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = RBB_SOC_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = RBB_SOC_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// RBB_LPSR_ENABLE_SP_REGISTER
struct RBB_LPSR_ENABLE_SP_fields_ {

  enum class eON_OFF_SETPOINT0 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT1 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT2 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT3 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT4 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT5 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT6 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT7 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT8 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT9 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT10 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT11 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT12 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT13 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT14 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };

  enum class eON_OFF_SETPOINT15 : std::uint32_t {
    // ON
    es0 = 0,
    // OFF
    es1 = 1,
  };
  // ON_OFF_SETPOINT0
  using ON_OFF_SETPOINT0 = ftl::mmio::Field<1, 0, eON_OFF_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT1
  using ON_OFF_SETPOINT1 = ftl::mmio::Field<1, 1, eON_OFF_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT2
  using ON_OFF_SETPOINT2 = ftl::mmio::Field<1, 2, eON_OFF_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT3
  using ON_OFF_SETPOINT3 = ftl::mmio::Field<1, 3, eON_OFF_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT4
  using ON_OFF_SETPOINT4 = ftl::mmio::Field<1, 4, eON_OFF_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT5
  using ON_OFF_SETPOINT5 = ftl::mmio::Field<1, 5, eON_OFF_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT6
  using ON_OFF_SETPOINT6 = ftl::mmio::Field<1, 6, eON_OFF_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT7
  using ON_OFF_SETPOINT7 = ftl::mmio::Field<1, 7, eON_OFF_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT8
  using ON_OFF_SETPOINT8 = ftl::mmio::Field<1, 8, eON_OFF_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT9
  using ON_OFF_SETPOINT9 = ftl::mmio::Field<1, 9, eON_OFF_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT10
  using ON_OFF_SETPOINT10 = ftl::mmio::Field<1, 10, eON_OFF_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT11
  using ON_OFF_SETPOINT11 = ftl::mmio::Field<1, 11, eON_OFF_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT12
  using ON_OFF_SETPOINT12 = ftl::mmio::Field<1, 12, eON_OFF_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT13
  using ON_OFF_SETPOINT13 = ftl::mmio::Field<1, 13, eON_OFF_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT14
  using ON_OFF_SETPOINT14 = ftl::mmio::Field<1, 14, eON_OFF_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // ON_OFF_SETPOINT15
  using ON_OFF_SETPOINT15 = ftl::mmio::Field<1, 15, eON_OFF_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_LPSR_ENABLE_SP_fields_

struct RBB_LPSR_ENABLE_SP : ftl::mmio::Register<
    0x40C84720u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT0,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT1,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT2,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT3,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT4,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT5,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT6,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT7,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT8,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT9,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT10,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT11,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT12,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT13,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT14,
    RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eON_OFF_SETPOINT0 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT0;
  using eON_OFF_SETPOINT1 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT1;
  using eON_OFF_SETPOINT2 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT2;
  using eON_OFF_SETPOINT3 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT3;
  using eON_OFF_SETPOINT4 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT4;
  using eON_OFF_SETPOINT5 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT5;
  using eON_OFF_SETPOINT6 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT6;
  using eON_OFF_SETPOINT7 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT7;
  using eON_OFF_SETPOINT8 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT8;
  using eON_OFF_SETPOINT9 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT9;
  using eON_OFF_SETPOINT10 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT10;
  using eON_OFF_SETPOINT11 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT11;
  using eON_OFF_SETPOINT12 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT12;
  using eON_OFF_SETPOINT13 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT13;
  using eON_OFF_SETPOINT14 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT14;
  using eON_OFF_SETPOINT15 = RBB_LPSR_ENABLE_SP_fields_::eON_OFF_SETPOINT15;
  using ON_OFF_SETPOINT0 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT0;
  using ON_OFF_SETPOINT1 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT1;
  using ON_OFF_SETPOINT2 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT2;
  using ON_OFF_SETPOINT3 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT3;
  using ON_OFF_SETPOINT4 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT4;
  using ON_OFF_SETPOINT5 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT5;
  using ON_OFF_SETPOINT6 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT6;
  using ON_OFF_SETPOINT7 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT7;
  using ON_OFF_SETPOINT8 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT8;
  using ON_OFF_SETPOINT9 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT9;
  using ON_OFF_SETPOINT10 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT10;
  using ON_OFF_SETPOINT11 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT11;
  using ON_OFF_SETPOINT12 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT12;
  using ON_OFF_SETPOINT13 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT13;
  using ON_OFF_SETPOINT14 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT14;
  using ON_OFF_SETPOINT15 = RBB_LPSR_ENABLE_SP_fields_::ON_OFF_SETPOINT15;
};


// BANDGAP_STBY_EN_SP_REGISTER
struct BANDGAP_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // STBY_EN_SETPOINT
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BANDGAP_STBY_EN_SP_fields_

struct BANDGAP_STBY_EN_SP : ftl::mmio::Register<
    0x40C84730u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = BANDGAP_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = BANDGAP_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// PLL_LDO_STBY_EN_SP_REGISTER
struct PLL_LDO_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // Standby mode
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PLL_LDO_STBY_EN_SP_fields_

struct PLL_LDO_STBY_EN_SP : ftl::mmio::Register<
    0x40C84740u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = PLL_LDO_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = PLL_LDO_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// FBB_M7_STBY_EN_SP_REGISTER
struct FBB_M7_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // Standby mode
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FBB_M7_STBY_EN_SP_fields_

struct FBB_M7_STBY_EN_SP : ftl::mmio::Register<
    0x40C84750u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = FBB_M7_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = FBB_M7_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// RBB_SOC_STBY_EN_SP_REGISTER
struct RBB_SOC_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // Standby mode
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_SOC_STBY_EN_SP_fields_

struct RBB_SOC_STBY_EN_SP : ftl::mmio::Register<
    0x40C84760u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = RBB_SOC_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = RBB_SOC_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// RBB_LPSR_STBY_EN_SP_REGISTER
struct RBB_LPSR_STBY_EN_SP_fields_ {

  enum class eSTBY_EN_SETPOINT0 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT1 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT2 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT3 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT4 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT5 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT6 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT7 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT8 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT9 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT10 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT11 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT12 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT13 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT14 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };

  enum class eSTBY_EN_SETPOINT15 : std::uint32_t {
    // Disabled
    eb0 = 0,
    // Enabled
    eb1 = 1,
  };
  // Standby mode
  using STBY_EN_SETPOINT0 = ftl::mmio::Field<1, 0, eSTBY_EN_SETPOINT0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT1 = ftl::mmio::Field<1, 1, eSTBY_EN_SETPOINT1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT2 = ftl::mmio::Field<1, 2, eSTBY_EN_SETPOINT2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT3 = ftl::mmio::Field<1, 3, eSTBY_EN_SETPOINT3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT4 = ftl::mmio::Field<1, 4, eSTBY_EN_SETPOINT4, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT5 = ftl::mmio::Field<1, 5, eSTBY_EN_SETPOINT5, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT6 = ftl::mmio::Field<1, 6, eSTBY_EN_SETPOINT6, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT7 = ftl::mmio::Field<1, 7, eSTBY_EN_SETPOINT7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT8 = ftl::mmio::Field<1, 8, eSTBY_EN_SETPOINT8, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT9 = ftl::mmio::Field<1, 9, eSTBY_EN_SETPOINT9, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT10 = ftl::mmio::Field<1, 10, eSTBY_EN_SETPOINT10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT11 = ftl::mmio::Field<1, 11, eSTBY_EN_SETPOINT11, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT12 = ftl::mmio::Field<1, 12, eSTBY_EN_SETPOINT12, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT13 = ftl::mmio::Field<1, 13, eSTBY_EN_SETPOINT13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT14 = ftl::mmio::Field<1, 14, eSTBY_EN_SETPOINT14, ftl::mmio::RW, ftl::mmio::Normal>;
  // Standby mode
  using STBY_EN_SETPOINT15 = ftl::mmio::Field<1, 15, eSTBY_EN_SETPOINT15, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_LPSR_STBY_EN_SP_fields_

struct RBB_LPSR_STBY_EN_SP : ftl::mmio::Register<
    0x40C84770u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT0,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT1,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT2,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT3,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT4,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT5,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT6,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT7,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT8,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT9,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT10,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT11,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT12,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT13,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT14,
    RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT15,
    ftl::mmio::Reserved<16, 16>> {
  using eSTBY_EN_SETPOINT0 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT0;
  using eSTBY_EN_SETPOINT1 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT1;
  using eSTBY_EN_SETPOINT2 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT2;
  using eSTBY_EN_SETPOINT3 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT3;
  using eSTBY_EN_SETPOINT4 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT4;
  using eSTBY_EN_SETPOINT5 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT5;
  using eSTBY_EN_SETPOINT6 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT6;
  using eSTBY_EN_SETPOINT7 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT7;
  using eSTBY_EN_SETPOINT8 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT8;
  using eSTBY_EN_SETPOINT9 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT9;
  using eSTBY_EN_SETPOINT10 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT10;
  using eSTBY_EN_SETPOINT11 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT11;
  using eSTBY_EN_SETPOINT12 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT12;
  using eSTBY_EN_SETPOINT13 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT13;
  using eSTBY_EN_SETPOINT14 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT14;
  using eSTBY_EN_SETPOINT15 = RBB_LPSR_STBY_EN_SP_fields_::eSTBY_EN_SETPOINT15;
  using STBY_EN_SETPOINT0 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT0;
  using STBY_EN_SETPOINT1 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT1;
  using STBY_EN_SETPOINT2 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT2;
  using STBY_EN_SETPOINT3 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT3;
  using STBY_EN_SETPOINT4 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT4;
  using STBY_EN_SETPOINT5 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT5;
  using STBY_EN_SETPOINT6 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT6;
  using STBY_EN_SETPOINT7 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT7;
  using STBY_EN_SETPOINT8 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT8;
  using STBY_EN_SETPOINT9 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT9;
  using STBY_EN_SETPOINT10 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT10;
  using STBY_EN_SETPOINT11 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT11;
  using STBY_EN_SETPOINT12 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT12;
  using STBY_EN_SETPOINT13 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT13;
  using STBY_EN_SETPOINT14 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT14;
  using STBY_EN_SETPOINT15 = RBB_LPSR_STBY_EN_SP_fields_::STBY_EN_SETPOINT15;
};


// FBB_M7_CONFIGURE_REGISTER
struct FBB_M7_CONFIGURE_fields_ {
  // wb_cfg_pw
  using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_cfg_nw
  using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // oscillator_bits
  using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // regulator_strength
  using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FBB_M7_CONFIGURE_fields_

struct FBB_M7_CONFIGURE : ftl::mmio::Register<
    0x40C84780u,
    std::uint32_t,
    0x00002F11u,
    ftl::mmio::RW,
    FBB_M7_CONFIGURE_fields_::WB_CFG_PW,
    FBB_M7_CONFIGURE_fields_::WB_CFG_NW,
    FBB_M7_CONFIGURE_fields_::OSCILLATOR_BITS,
    FBB_M7_CONFIGURE_fields_::REGULATOR_STRENGTH,
    ftl::mmio::Reserved<18, 14>> {
  using WB_CFG_PW = FBB_M7_CONFIGURE_fields_::WB_CFG_PW;
  using WB_CFG_NW = FBB_M7_CONFIGURE_fields_::WB_CFG_NW;
  using OSCILLATOR_BITS = FBB_M7_CONFIGURE_fields_::OSCILLATOR_BITS;
  using REGULATOR_STRENGTH = FBB_M7_CONFIGURE_fields_::REGULATOR_STRENGTH;
};


// RBB_LPSR_CONFIGURE_REGISTER
struct RBB_LPSR_CONFIGURE_fields_ {
  // wb_cfg_pw
  using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_cfg_nw
  using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // oscillator_bits
  using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // regulator_strength
  using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_LPSR_CONFIGURE_fields_

struct RBB_LPSR_CONFIGURE : ftl::mmio::Register<
    0x40C84790u,
    std::uint32_t,
    0x00003022u,
    ftl::mmio::RW,
    RBB_LPSR_CONFIGURE_fields_::WB_CFG_PW,
    RBB_LPSR_CONFIGURE_fields_::WB_CFG_NW,
    RBB_LPSR_CONFIGURE_fields_::OSCILLATOR_BITS,
    RBB_LPSR_CONFIGURE_fields_::REGULATOR_STRENGTH,
    ftl::mmio::Reserved<18, 14>> {
  using WB_CFG_PW = RBB_LPSR_CONFIGURE_fields_::WB_CFG_PW;
  using WB_CFG_NW = RBB_LPSR_CONFIGURE_fields_::WB_CFG_NW;
  using OSCILLATOR_BITS = RBB_LPSR_CONFIGURE_fields_::OSCILLATOR_BITS;
  using REGULATOR_STRENGTH = RBB_LPSR_CONFIGURE_fields_::REGULATOR_STRENGTH;
};


// RBB_SOC_CONFIGURE_REGISTER
struct RBB_SOC_CONFIGURE_fields_ {
  // wb_cfg_pw
  using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // wb_cfg_nw
  using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // oscillator_bits
  using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // regulator_strength
  using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RBB_SOC_CONFIGURE_fields_

struct RBB_SOC_CONFIGURE : ftl::mmio::Register<
    0x40C847A0u,
    std::uint32_t,
    0x00000044u,
    ftl::mmio::RW,
    RBB_SOC_CONFIGURE_fields_::WB_CFG_PW,
    RBB_SOC_CONFIGURE_fields_::WB_CFG_NW,
    RBB_SOC_CONFIGURE_fields_::OSCILLATOR_BITS,
    RBB_SOC_CONFIGURE_fields_::REGULATOR_STRENGTH,
    ftl::mmio::Reserved<18, 14>> {
  using WB_CFG_PW = RBB_SOC_CONFIGURE_fields_::WB_CFG_PW;
  using WB_CFG_NW = RBB_SOC_CONFIGURE_fields_::WB_CFG_NW;
  using OSCILLATOR_BITS = RBB_SOC_CONFIGURE_fields_::OSCILLATOR_BITS;
  using REGULATOR_STRENGTH = RBB_SOC_CONFIGURE_fields_::REGULATOR_STRENGTH;
};


// REFTOP_OTP_TRIM_VALUE_REGISTER
struct REFTOP_OTP_TRIM_VALUE_fields_ {
  // REFTOP_IBZTCADJ
  using REFTOP_IBZTCADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // REFTOP_VBGADJ
  using REFTOP_VBGADJ = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // REFTOP_TRIM_EN
  using REFTOP_TRIM_EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct REFTOP_OTP_TRIM_VALUE_fields_

struct REFTOP_OTP_TRIM_VALUE : ftl::mmio::Register<
    0x40C847B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_IBZTCADJ,
    REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_VBGADJ,
    REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_TRIM_EN,
    ftl::mmio::Reserved<25, 7>> {
  using REFTOP_IBZTCADJ = REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_IBZTCADJ;
  using REFTOP_VBGADJ = REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_VBGADJ;
  using REFTOP_TRIM_EN = REFTOP_OTP_TRIM_VALUE_fields_::REFTOP_TRIM_EN;
};


// LPSR_1P8_LDO_OTP_TRIM_VALUE_REGISTER
struct LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_ {
  // LPSR_LDO_1P8_TRIM
  using LPSR_LDO_1P8_TRIM = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSR_LDO_1P8_TRIM_EN
  using LPSR_LDO_1P8_TRIM_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_

struct LPSR_1P8_LDO_OTP_TRIM_VALUE : ftl::mmio::Register<
    0x40C847D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_::LPSR_LDO_1P8_TRIM,
    LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_::LPSR_LDO_1P8_TRIM_EN,
    ftl::mmio::Reserved<29, 3>> {
  using LPSR_LDO_1P8_TRIM = LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_::LPSR_LDO_1P8_TRIM;
  using LPSR_LDO_1P8_TRIM_EN = LPSR_1P8_LDO_OTP_TRIM_VALUE_fields_::LPSR_LDO_1P8_TRIM_EN;
};

}  // namespace regs::anadig_pmu