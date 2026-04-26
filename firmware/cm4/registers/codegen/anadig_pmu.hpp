#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigPmu {
  // PMU_LDO_PLL_REGISTER
  struct PmuLdoPllFields {
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
  };  // struct PmuLdoPllFields

  struct PMU_LDO_PLL : ftl::mmio::Register<
      0x40C84500u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PmuLdoPllFields::LDO_PLL_ENABLE,
      PmuLdoPllFields::LDO_PLL_CONTROL_MODE,
      ftl::mmio::Reserved<14, 2>,
      PmuLdoPllFields::LDO_PLL_AI_TOGGLE,
      ftl::mmio::Reserved<13, 17>,
      PmuLdoPllFields::LDO_PLL_AI_BUSY,
      ftl::mmio::Reserved<1, 31>> {
    using eLDO_PLL_CONTROL_MODE = PmuLdoPllFields::eLDO_PLL_CONTROL_MODE;
    using LDO_PLL_ENABLE = PmuLdoPllFields::LDO_PLL_ENABLE;
    using LDO_PLL_CONTROL_MODE = PmuLdoPllFields::LDO_PLL_CONTROL_MODE;
    using LDO_PLL_AI_TOGGLE = PmuLdoPllFields::LDO_PLL_AI_TOGGLE;
    using LDO_PLL_AI_BUSY = PmuLdoPllFields::LDO_PLL_AI_BUSY;
  };

  // PMU_BIAS_CTRL_REGISTER
  struct PmuBiasCtrlFields {
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
  };  // struct PmuBiasCtrlFields

  struct PMU_BIAS_CTRL : ftl::mmio::Register<
      0x40C84550u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PmuBiasCtrlFields::WB_CFG_1P8,
      ftl::mmio::Reserved<1, 13>,
      PmuBiasCtrlFields::WB_VDD_SEL_1P8,
      ftl::mmio::Reserved<17, 15>> {
    using eWB_VDD_SEL_1P8 = PmuBiasCtrlFields::eWB_VDD_SEL_1P8;
    using WB_CFG_1P8 = PmuBiasCtrlFields::WB_CFG_1P8;
    using WB_VDD_SEL_1P8 = PmuBiasCtrlFields::WB_VDD_SEL_1P8;
  };

  // PMU_BIAS_CTRL2_REGISTER
  struct PmuBiasCtrl2Fields {
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
  };  // struct PmuBiasCtrl2Fields

  struct PMU_BIAS_CTRL2 : ftl::mmio::Register<
      0x40C84560u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      PmuBiasCtrl2Fields::WB_TST_MD,
      PmuBiasCtrl2Fields::WB_PWR_SW_EN_1P8,
      PmuBiasCtrl2Fields::WB_ADJ_1P8,
      PmuBiasCtrl2Fields::FBB_M7_CONTROL_MODE,
      PmuBiasCtrl2Fields::RBB_SOC_CONTROL_MODE,
      PmuBiasCtrl2Fields::RBB_LPSR_CONTROL_MODE,
      PmuBiasCtrl2Fields::WB_EN,
      PmuBiasCtrl2Fields::WB_TST_DIG_OUT,
      PmuBiasCtrl2Fields::WB_OK,
      ftl::mmio::Reserved<5, 27>> {
    using eWB_PWR_SW_EN_1P8 = PmuBiasCtrl2Fields::eWB_PWR_SW_EN_1P8;
    using eWB_ADJ_1P8 = PmuBiasCtrl2Fields::eWB_ADJ_1P8;
    using eFBB_M7_CONTROL_MODE = PmuBiasCtrl2Fields::eFBB_M7_CONTROL_MODE;
    using eRBB_SOC_CONTROL_MODE = PmuBiasCtrl2Fields::eRBB_SOC_CONTROL_MODE;
    using eRBB_LPSR_CONTROL_MODE = PmuBiasCtrl2Fields::eRBB_LPSR_CONTROL_MODE;
    using WB_TST_MD = PmuBiasCtrl2Fields::WB_TST_MD;
    using WB_PWR_SW_EN_1P8 = PmuBiasCtrl2Fields::WB_PWR_SW_EN_1P8;
    using WB_ADJ_1P8 = PmuBiasCtrl2Fields::WB_ADJ_1P8;
    using FBB_M7_CONTROL_MODE = PmuBiasCtrl2Fields::FBB_M7_CONTROL_MODE;
    using RBB_SOC_CONTROL_MODE = PmuBiasCtrl2Fields::RBB_SOC_CONTROL_MODE;
    using RBB_LPSR_CONTROL_MODE = PmuBiasCtrl2Fields::RBB_LPSR_CONTROL_MODE;
    using WB_EN = PmuBiasCtrl2Fields::WB_EN;
    using WB_TST_DIG_OUT = PmuBiasCtrl2Fields::WB_TST_DIG_OUT;
    using WB_OK = PmuBiasCtrl2Fields::WB_OK;
  };

  // PMU_REF_CTRL_REGISTER
  struct PmuRefCtrlFields {
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
  };  // struct PmuRefCtrlFields

  struct PMU_REF_CTRL : ftl::mmio::Register<
      0x40C84570u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PmuRefCtrlFields::REF_AI_TOGGLE,
      PmuRefCtrlFields::REF_AI_BUSY,
      PmuRefCtrlFields::REF_ENABLE,
      PmuRefCtrlFields::REF_CONTROL_MODE,
      PmuRefCtrlFields::EN_PLL_VOL_REF_BUFFER,
      ftl::mmio::Reserved<27, 5>> {
    using eREF_CONTROL_MODE = PmuRefCtrlFields::eREF_CONTROL_MODE;
    using REF_AI_TOGGLE = PmuRefCtrlFields::REF_AI_TOGGLE;
    using REF_AI_BUSY = PmuRefCtrlFields::REF_AI_BUSY;
    using REF_ENABLE = PmuRefCtrlFields::REF_ENABLE;
    using REF_CONTROL_MODE = PmuRefCtrlFields::REF_CONTROL_MODE;
    using EN_PLL_VOL_REF_BUFFER = PmuRefCtrlFields::EN_PLL_VOL_REF_BUFFER;
  };

  // PMU_POWER_DETECT_CTRL_REGISTER
  struct PmuPowerDetectCtrlFields {
    // ckgb_lpsr1p0
    using CKGB_LPSR1P0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PmuPowerDetectCtrlFields

  struct PMU_POWER_DETECT_CTRL : ftl::mmio::Register<
      0x40C84580u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<8, 0>,
      PmuPowerDetectCtrlFields::CKGB_LPSR1P0,
      ftl::mmio::Reserved<23, 9>> {
    using CKGB_LPSR1P0 = PmuPowerDetectCtrlFields::CKGB_LPSR1P0;
  };

  // LDO_PLL_ENABLE_SP_REGISTER
  struct LdoPllEnableSpFields {
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
  };  // struct LdoPllEnableSpFields

  struct LDO_PLL_ENABLE_SP : ftl::mmio::Register<
      0x40C84600u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoPllEnableSpFields::ON_OFF_SETPOINT0,
      LdoPllEnableSpFields::ON_OFF_SETPOINT1,
      LdoPllEnableSpFields::ON_OFF_SETPOINT2,
      LdoPllEnableSpFields::ON_OFF_SETPOINT3,
      LdoPllEnableSpFields::ON_OFF_SETPOINT4,
      LdoPllEnableSpFields::ON_OFF_SETPOINT5,
      LdoPllEnableSpFields::ON_OFF_SETPOINT6,
      LdoPllEnableSpFields::ON_OFF_SETPOINT7,
      LdoPllEnableSpFields::ON_OFF_SETPOINT8,
      LdoPllEnableSpFields::ON_OFF_SETPOINT9,
      LdoPllEnableSpFields::ON_OFF_SETPOINT10,
      LdoPllEnableSpFields::ON_OFF_SETPOINT11,
      LdoPllEnableSpFields::ON_OFF_SETPOINT12,
      LdoPllEnableSpFields::ON_OFF_SETPOINT13,
      LdoPllEnableSpFields::ON_OFF_SETPOINT14,
      LdoPllEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = LdoPllEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = LdoPllEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = LdoPllEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = LdoPllEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = LdoPllEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = LdoPllEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = LdoPllEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = LdoPllEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = LdoPllEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = LdoPllEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = LdoPllEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = LdoPllEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = LdoPllEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = LdoPllEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = LdoPllEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = LdoPllEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = LdoPllEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = LdoPllEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = LdoPllEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = LdoPllEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = LdoPllEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = LdoPllEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = LdoPllEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = LdoPllEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = LdoPllEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = LdoPllEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = LdoPllEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = LdoPllEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = LdoPllEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = LdoPllEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = LdoPllEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = LdoPllEnableSpFields::ON_OFF_SETPOINT15;
  };

  // LDO_LPSR_ANA_ENABLE_SP_REGISTER
  struct LdoLpsrAnaEnableSpFields {
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
  };  // struct LdoLpsrAnaEnableSpFields

  struct LDO_LPSR_ANA_ENABLE_SP : ftl::mmio::Register<
      0x40C84610u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT0,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT1,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT2,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT3,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT4,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT5,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT6,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT7,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT8,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT9,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT10,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT11,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT12,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT13,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT14,
      LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = LdoLpsrAnaEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = LdoLpsrAnaEnableSpFields::ON_OFF_SETPOINT15;
  };

  // LDO_LPSR_ANA_LP_MODE_SP_REGISTER
  struct LdoLpsrAnaLpModeSpFields {
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
  };  // struct LdoLpsrAnaLpModeSpFields

  struct LDO_LPSR_ANA_LP_MODE_SP : ftl::mmio::Register<
      0x40C84620u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPOINT0,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPOINT1,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT2,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT3,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT4,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT5,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT6,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT7,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT8,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT9,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT10,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT11,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT12,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT13,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT14,
      LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT15,
      ftl::mmio::Reserved<16, 16>> {
    using eLP_MODE_SETPOINT0 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPOINT0;
    using eLP_MODE_SETPOINT1 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPOINT1;
    using eLP_MODE_SETPONIT2 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT2;
    using eLP_MODE_SETPONIT3 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT3;
    using eLP_MODE_SETPONIT4 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT4;
    using eLP_MODE_SETPONIT5 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT5;
    using eLP_MODE_SETPONIT6 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT6;
    using eLP_MODE_SETPONIT7 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT7;
    using eLP_MODE_SETPONIT8 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT8;
    using eLP_MODE_SETPONIT9 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT9;
    using eLP_MODE_SETPONIT10 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT10;
    using eLP_MODE_SETPONIT11 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT11;
    using eLP_MODE_SETPONIT12 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT12;
    using eLP_MODE_SETPONIT13 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT13;
    using eLP_MODE_SETPONIT14 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT14;
    using eLP_MODE_SETPONIT15 = LdoLpsrAnaLpModeSpFields::eLP_MODE_SETPONIT15;
    using LP_MODE_SETPOINT0 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPOINT0;
    using LP_MODE_SETPOINT1 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPOINT1;
    using LP_MODE_SETPONIT2 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT2;
    using LP_MODE_SETPONIT3 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT3;
    using LP_MODE_SETPONIT4 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT4;
    using LP_MODE_SETPONIT5 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT5;
    using LP_MODE_SETPONIT6 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT6;
    using LP_MODE_SETPONIT7 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT7;
    using LP_MODE_SETPONIT8 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT8;
    using LP_MODE_SETPONIT9 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT9;
    using LP_MODE_SETPONIT10 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT10;
    using LP_MODE_SETPONIT11 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT11;
    using LP_MODE_SETPONIT12 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT12;
    using LP_MODE_SETPONIT13 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT13;
    using LP_MODE_SETPONIT14 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT14;
    using LP_MODE_SETPONIT15 = LdoLpsrAnaLpModeSpFields::LP_MODE_SETPONIT15;
  };

  // LDO_LPSR_ANA_TRACKING_EN_SP_REGISTER
  struct LdoLpsrAnaTrackingEnSpFields {
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
  };  // struct LdoLpsrAnaTrackingEnSpFields

  struct LDO_LPSR_ANA_TRACKING_EN_SP : ftl::mmio::Register<
      0x40C84630u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT0,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT1,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT2,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT3,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT4,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT5,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT6,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT7,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT8,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT9,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT10,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT11,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT12,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT13,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT14,
      LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eTRACKING_EN_SETPOINT0 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT0;
    using eTRACKING_EN_SETPOINT1 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT1;
    using eTRACKING_EN_SETPOINT2 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT2;
    using eTRACKING_EN_SETPOINT3 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT3;
    using eTRACKING_EN_SETPOINT4 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT4;
    using eTRACKING_EN_SETPOINT5 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT5;
    using eTRACKING_EN_SETPOINT6 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT6;
    using eTRACKING_EN_SETPOINT7 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT7;
    using eTRACKING_EN_SETPOINT8 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT8;
    using eTRACKING_EN_SETPOINT9 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT9;
    using eTRACKING_EN_SETPOINT10 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT10;
    using eTRACKING_EN_SETPOINT11 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT11;
    using eTRACKING_EN_SETPOINT12 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT12;
    using eTRACKING_EN_SETPOINT13 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT13;
    using eTRACKING_EN_SETPOINT14 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT14;
    using eTRACKING_EN_SETPOINT15 = LdoLpsrAnaTrackingEnSpFields::eTRACKING_EN_SETPOINT15;
    using TRACKING_EN_SETPOINT0 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT0;
    using TRACKING_EN_SETPOINT1 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT1;
    using TRACKING_EN_SETPOINT2 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT2;
    using TRACKING_EN_SETPOINT3 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT3;
    using TRACKING_EN_SETPOINT4 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT4;
    using TRACKING_EN_SETPOINT5 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT5;
    using TRACKING_EN_SETPOINT6 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT6;
    using TRACKING_EN_SETPOINT7 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT7;
    using TRACKING_EN_SETPOINT8 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT8;
    using TRACKING_EN_SETPOINT9 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT9;
    using TRACKING_EN_SETPOINT10 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT10;
    using TRACKING_EN_SETPOINT11 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT11;
    using TRACKING_EN_SETPOINT12 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT12;
    using TRACKING_EN_SETPOINT13 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT13;
    using TRACKING_EN_SETPOINT14 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT14;
    using TRACKING_EN_SETPOINT15 = LdoLpsrAnaTrackingEnSpFields::TRACKING_EN_SETPOINT15;
  };

  // LDO_LPSR_ANA_BYPASS_EN_SP_REGISTER
  struct LdoLpsrAnaBypassEnSpFields {
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
  };  // struct LdoLpsrAnaBypassEnSpFields

  struct LDO_LPSR_ANA_BYPASS_EN_SP : ftl::mmio::Register<
      0x40C84640u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT0,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT1,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT2,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT3,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT4,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT5,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT6,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT7,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT8,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT9,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT10,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT11,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT12,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT13,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT14,
      LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eBYPASS_EN_SETPOINT0 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT0;
    using eBYPASS_EN_SETPOINT1 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT1;
    using eBYPASS_EN_SETPOINT2 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT2;
    using eBYPASS_EN_SETPOINT3 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT3;
    using eBYPASS_EN_SETPOINT4 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT4;
    using eBYPASS_EN_SETPOINT5 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT5;
    using eBYPASS_EN_SETPOINT6 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT6;
    using eBYPASS_EN_SETPOINT7 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT7;
    using eBYPASS_EN_SETPOINT8 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT8;
    using eBYPASS_EN_SETPOINT9 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT9;
    using eBYPASS_EN_SETPOINT10 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT10;
    using eBYPASS_EN_SETPOINT11 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT11;
    using eBYPASS_EN_SETPOINT12 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT12;
    using eBYPASS_EN_SETPOINT13 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT13;
    using eBYPASS_EN_SETPOINT14 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT14;
    using eBYPASS_EN_SETPOINT15 = LdoLpsrAnaBypassEnSpFields::eBYPASS_EN_SETPOINT15;
    using BYPASS_EN_SETPOINT0 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT0;
    using BYPASS_EN_SETPOINT1 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT1;
    using BYPASS_EN_SETPOINT2 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT2;
    using BYPASS_EN_SETPOINT3 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT3;
    using BYPASS_EN_SETPOINT4 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT4;
    using BYPASS_EN_SETPOINT5 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT5;
    using BYPASS_EN_SETPOINT6 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT6;
    using BYPASS_EN_SETPOINT7 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT7;
    using BYPASS_EN_SETPOINT8 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT8;
    using BYPASS_EN_SETPOINT9 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT9;
    using BYPASS_EN_SETPOINT10 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT10;
    using BYPASS_EN_SETPOINT11 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT11;
    using BYPASS_EN_SETPOINT12 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT12;
    using BYPASS_EN_SETPOINT13 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT13;
    using BYPASS_EN_SETPOINT14 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT14;
    using BYPASS_EN_SETPOINT15 = LdoLpsrAnaBypassEnSpFields::BYPASS_EN_SETPOINT15;
  };

  // LDO_LPSR_ANA_STBY_EN_SP_REGISTER
  struct LdoLpsrAnaStbyEnSpFields {
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
  };  // struct LdoLpsrAnaStbyEnSpFields

  struct LDO_LPSR_ANA_STBY_EN_SP : ftl::mmio::Register<
      0x40C84650u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT0,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT1,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT2,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT3,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT4,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT5,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT6,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT7,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT8,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT9,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT10,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT11,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT12,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT13,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT14,
      LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = LdoLpsrAnaStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = LdoLpsrAnaStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // LDO_LPSR_DIG_ENABLE_SP_REGISTER
  struct LdoLpsrDigEnableSpFields {
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
  };  // struct LdoLpsrDigEnableSpFields

  struct LDO_LPSR_DIG_ENABLE_SP : ftl::mmio::Register<
      0x40C84660u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT0,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT1,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT2,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT3,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT4,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT5,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT6,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT7,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT8,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT9,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT10,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT11,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT12,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT13,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT14,
      LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = LdoLpsrDigEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = LdoLpsrDigEnableSpFields::ON_OFF_SETPOINT15;
  };

  // LDO_LPSR_DIG_TRG_SP0_REGISTER
  struct LdoLpsrDigTrgSp0Fields {
    // VOLTAGE_SETPOINT0
    using VOLTAGE_SETPOINT0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT1
    using VOLTAGE_SETPOINT1 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT2
    using VOLTAGE_SETPOINT2 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT3
    using VOLTAGE_SETPOINT3 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LdoLpsrDigTrgSp0Fields

  struct LDO_LPSR_DIG_TRG_SP0 : ftl::mmio::Register<
      0x40C84670u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT0,
      LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT1,
      LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT2,
      LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT3> {
    using VOLTAGE_SETPOINT0 = LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT0;
    using VOLTAGE_SETPOINT1 = LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT1;
    using VOLTAGE_SETPOINT2 = LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT2;
    using VOLTAGE_SETPOINT3 = LdoLpsrDigTrgSp0Fields::VOLTAGE_SETPOINT3;
  };

  // LDO_LPSR_DIG_TRG_SP1_REGISTER
  struct LdoLpsrDigTrgSp1Fields {
    // VOLTAGE_SETPOINT4
    using VOLTAGE_SETPOINT4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT5
    using VOLTAGE_SETPOINT5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT6
    using VOLTAGE_SETPOINT6 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT7
    using VOLTAGE_SETPOINT7 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LdoLpsrDigTrgSp1Fields

  struct LDO_LPSR_DIG_TRG_SP1 : ftl::mmio::Register<
      0x40C84680u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT4,
      LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT5,
      LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT6,
      LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT7> {
    using VOLTAGE_SETPOINT4 = LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT4;
    using VOLTAGE_SETPOINT5 = LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT5;
    using VOLTAGE_SETPOINT6 = LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT6;
    using VOLTAGE_SETPOINT7 = LdoLpsrDigTrgSp1Fields::VOLTAGE_SETPOINT7;
  };

  // LDO_LPSR_DIG_TRG_SP2_REGISTER
  struct LdoLpsrDigTrgSp2Fields {
    // VOLTAGE_SETPOINT8
    using VOLTAGE_SETPOINT8 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT9
    using VOLTAGE_SETPOINT9 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT10
    using VOLTAGE_SETPOINT10 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT11
    using VOLTAGE_SETPOINT11 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LdoLpsrDigTrgSp2Fields

  struct LDO_LPSR_DIG_TRG_SP2 : ftl::mmio::Register<
      0x40C84690u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT8,
      LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT9,
      LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT10,
      LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT11> {
    using VOLTAGE_SETPOINT8 = LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT8;
    using VOLTAGE_SETPOINT9 = LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT9;
    using VOLTAGE_SETPOINT10 = LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT10;
    using VOLTAGE_SETPOINT11 = LdoLpsrDigTrgSp2Fields::VOLTAGE_SETPOINT11;
  };

  // LDO_LPSR_DIG_TRG_SP3_REGISTER
  struct LdoLpsrDigTrgSp3Fields {
    // VOLTAGE_SETPOINT12
    using VOLTAGE_SETPOINT12 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT13
    using VOLTAGE_SETPOINT13 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT14
    using VOLTAGE_SETPOINT14 = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SETPOINT15
    using VOLTAGE_SETPOINT15 = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LdoLpsrDigTrgSp3Fields

  struct LDO_LPSR_DIG_TRG_SP3 : ftl::mmio::Register<
      0x40C846A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT12,
      LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT13,
      LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT14,
      LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT15> {
    using VOLTAGE_SETPOINT12 = LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT12;
    using VOLTAGE_SETPOINT13 = LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT13;
    using VOLTAGE_SETPOINT14 = LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT14;
    using VOLTAGE_SETPOINT15 = LdoLpsrDigTrgSp3Fields::VOLTAGE_SETPOINT15;
  };

  // LDO_LPSR_DIG_LP_MODE_SP_REGISTER
  struct LdoLpsrDigLpModeSpFields {
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
  };  // struct LdoLpsrDigLpModeSpFields

  struct LDO_LPSR_DIG_LP_MODE_SP : ftl::mmio::Register<
      0x40C846B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT0,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT1,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT2,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT3,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT4,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT5,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT6,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT7,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT8,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT9,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT10,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT11,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT12,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT13,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT14,
      LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eLP_MODE_SETPOINT0 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT0;
    using eLP_MODE_SETPOINT1 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT1;
    using eLP_MODE_SETPOINT2 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT2;
    using eLP_MODE_SETPOINT3 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT3;
    using eLP_MODE_SETPOINT4 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT4;
    using eLP_MODE_SETPOINT5 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT5;
    using eLP_MODE_SETPOINT6 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT6;
    using eLP_MODE_SETPOINT7 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT7;
    using eLP_MODE_SETPOINT8 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT8;
    using eLP_MODE_SETPOINT9 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT9;
    using eLP_MODE_SETPOINT10 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT10;
    using eLP_MODE_SETPOINT11 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT11;
    using eLP_MODE_SETPOINT12 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT12;
    using eLP_MODE_SETPOINT13 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT13;
    using eLP_MODE_SETPOINT14 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT14;
    using eLP_MODE_SETPOINT15 = LdoLpsrDigLpModeSpFields::eLP_MODE_SETPOINT15;
    using LP_MODE_SETPOINT0 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT0;
    using LP_MODE_SETPOINT1 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT1;
    using LP_MODE_SETPOINT2 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT2;
    using LP_MODE_SETPOINT3 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT3;
    using LP_MODE_SETPOINT4 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT4;
    using LP_MODE_SETPOINT5 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT5;
    using LP_MODE_SETPOINT6 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT6;
    using LP_MODE_SETPOINT7 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT7;
    using LP_MODE_SETPOINT8 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT8;
    using LP_MODE_SETPOINT9 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT9;
    using LP_MODE_SETPOINT10 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT10;
    using LP_MODE_SETPOINT11 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT11;
    using LP_MODE_SETPOINT12 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT12;
    using LP_MODE_SETPOINT13 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT13;
    using LP_MODE_SETPOINT14 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT14;
    using LP_MODE_SETPOINT15 = LdoLpsrDigLpModeSpFields::LP_MODE_SETPOINT15;
  };

  // LDO_LPSR_DIG_TRACKING_EN_SP_REGISTER
  struct LdoLpsrDigTrackingEnSpFields {
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
  };  // struct LdoLpsrDigTrackingEnSpFields

  struct LDO_LPSR_DIG_TRACKING_EN_SP : ftl::mmio::Register<
      0x40C846C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT0,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT1,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT2,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT3,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT4,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT5,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT6,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT7,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT8,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT9,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT10,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT11,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT12,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT13,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT14,
      LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eTRACKING_EN_SETPOINT0 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT0;
    using eTRACKING_EN_SETPOINT1 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT1;
    using eTRACKING_EN_SETPOINT2 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT2;
    using eTRACKING_EN_SETPOINT3 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT3;
    using eTRACKING_EN_SETPOINT4 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT4;
    using eTRACKING_EN_SETPOINT5 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT5;
    using eTRACKING_EN_SETPOINT6 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT6;
    using eTRACKING_EN_SETPOINT7 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT7;
    using eTRACKING_EN_SETPOINT8 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT8;
    using eTRACKING_EN_SETPOINT9 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT9;
    using eTRACKING_EN_SETPOINT10 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT10;
    using eTRACKING_EN_SETPOINT11 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT11;
    using eTRACKING_EN_SETPOINT12 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT12;
    using eTRACKING_EN_SETPOINT13 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT13;
    using eTRACKING_EN_SETPOINT14 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT14;
    using eTRACKING_EN_SETPOINT15 = LdoLpsrDigTrackingEnSpFields::eTRACKING_EN_SETPOINT15;
    using TRACKING_EN_SETPOINT0 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT0;
    using TRACKING_EN_SETPOINT1 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT1;
    using TRACKING_EN_SETPOINT2 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT2;
    using TRACKING_EN_SETPOINT3 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT3;
    using TRACKING_EN_SETPOINT4 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT4;
    using TRACKING_EN_SETPOINT5 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT5;
    using TRACKING_EN_SETPOINT6 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT6;
    using TRACKING_EN_SETPOINT7 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT7;
    using TRACKING_EN_SETPOINT8 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT8;
    using TRACKING_EN_SETPOINT9 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT9;
    using TRACKING_EN_SETPOINT10 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT10;
    using TRACKING_EN_SETPOINT11 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT11;
    using TRACKING_EN_SETPOINT12 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT12;
    using TRACKING_EN_SETPOINT13 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT13;
    using TRACKING_EN_SETPOINT14 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT14;
    using TRACKING_EN_SETPOINT15 = LdoLpsrDigTrackingEnSpFields::TRACKING_EN_SETPOINT15;
  };

  // LDO_LPSR_DIG_BYPASS_EN_SP_REGISTER
  struct LdoLpsrDigBypassEnSpFields {
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
  };  // struct LdoLpsrDigBypassEnSpFields

  struct LDO_LPSR_DIG_BYPASS_EN_SP : ftl::mmio::Register<
      0x40C846D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT0,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT1,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT2,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT3,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT4,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT5,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT6,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT7,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT8,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT9,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT10,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT11,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT12,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT13,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT14,
      LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eBYPASS_EN_SETPOINT0 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT0;
    using eBYPASS_EN_SETPOINT1 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT1;
    using eBYPASS_EN_SETPOINT2 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT2;
    using eBYPASS_EN_SETPOINT3 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT3;
    using eBYPASS_EN_SETPOINT4 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT4;
    using eBYPASS_EN_SETPOINT5 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT5;
    using eBYPASS_EN_SETPOINT6 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT6;
    using eBYPASS_EN_SETPOINT7 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT7;
    using eBYPASS_EN_SETPOINT8 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT8;
    using eBYPASS_EN_SETPOINT9 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT9;
    using eBYPASS_EN_SETPOINT10 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT10;
    using eBYPASS_EN_SETPOINT11 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT11;
    using eBYPASS_EN_SETPOINT12 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT12;
    using eBYPASS_EN_SETPOINT13 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT13;
    using eBYPASS_EN_SETPOINT14 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT14;
    using eBYPASS_EN_SETPOINT15 = LdoLpsrDigBypassEnSpFields::eBYPASS_EN_SETPOINT15;
    using BYPASS_EN_SETPOINT0 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT0;
    using BYPASS_EN_SETPOINT1 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT1;
    using BYPASS_EN_SETPOINT2 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT2;
    using BYPASS_EN_SETPOINT3 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT3;
    using BYPASS_EN_SETPOINT4 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT4;
    using BYPASS_EN_SETPOINT5 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT5;
    using BYPASS_EN_SETPOINT6 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT6;
    using BYPASS_EN_SETPOINT7 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT7;
    using BYPASS_EN_SETPOINT8 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT8;
    using BYPASS_EN_SETPOINT9 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT9;
    using BYPASS_EN_SETPOINT10 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT10;
    using BYPASS_EN_SETPOINT11 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT11;
    using BYPASS_EN_SETPOINT12 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT12;
    using BYPASS_EN_SETPOINT13 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT13;
    using BYPASS_EN_SETPOINT14 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT14;
    using BYPASS_EN_SETPOINT15 = LdoLpsrDigBypassEnSpFields::BYPASS_EN_SETPOINT15;
  };

  // LDO_LPSR_DIG_STBY_EN_SP_REGISTER
  struct LdoLpsrDigStbyEnSpFields {
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
  };  // struct LdoLpsrDigStbyEnSpFields

  struct LDO_LPSR_DIG_STBY_EN_SP : ftl::mmio::Register<
      0x40C846E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT0,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT1,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT2,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT3,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT4,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT5,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT6,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT7,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT8,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT9,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT10,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT11,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT12,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT13,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT14,
      LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = LdoLpsrDigStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = LdoLpsrDigStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // BANDGAP_ENABLE_SP_REGISTER
  struct BandgapEnableSpFields {
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
  };  // struct BandgapEnableSpFields

  struct BANDGAP_ENABLE_SP : ftl::mmio::Register<
      0x40C846F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      BandgapEnableSpFields::ON_OFF_SETPOINT0,
      BandgapEnableSpFields::ON_OFF_SETPOINT1,
      BandgapEnableSpFields::ON_OFF_SETPOINT2,
      BandgapEnableSpFields::ON_OFF_SETPOINT3,
      BandgapEnableSpFields::ON_OFF_SETPOINT4,
      BandgapEnableSpFields::ON_OFF_SETPOINT5,
      BandgapEnableSpFields::ON_OFF_SETPOINT6,
      BandgapEnableSpFields::ON_OFF_SETPOINT7,
      BandgapEnableSpFields::ON_OFF_SETPOINT8,
      BandgapEnableSpFields::ON_OFF_SETPOINT9,
      BandgapEnableSpFields::ON_OFF_SETPOINT10,
      BandgapEnableSpFields::ON_OFF_SETPOINT11,
      BandgapEnableSpFields::ON_OFF_SETPOINT12,
      BandgapEnableSpFields::ON_OFF_SETPOINT13,
      BandgapEnableSpFields::ON_OFF_SETPOINT14,
      BandgapEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = BandgapEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = BandgapEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = BandgapEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = BandgapEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = BandgapEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = BandgapEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = BandgapEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = BandgapEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = BandgapEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = BandgapEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = BandgapEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = BandgapEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = BandgapEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = BandgapEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = BandgapEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = BandgapEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = BandgapEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = BandgapEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = BandgapEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = BandgapEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = BandgapEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = BandgapEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = BandgapEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = BandgapEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = BandgapEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = BandgapEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = BandgapEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = BandgapEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = BandgapEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = BandgapEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = BandgapEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = BandgapEnableSpFields::ON_OFF_SETPOINT15;
  };

  // FBB_M7_ENABLE_SP_REGISTER
  struct FbbM7EnableSpFields {
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
  };  // struct FbbM7EnableSpFields

  struct FBB_M7_ENABLE_SP : ftl::mmio::Register<
      0x40C84700u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      FbbM7EnableSpFields::ON_OFF_SETPOINT0,
      FbbM7EnableSpFields::ON_OFF_SETPOINT1,
      FbbM7EnableSpFields::ON_OFF_SETPOINT2,
      FbbM7EnableSpFields::ON_OFF_SETPOINT3,
      FbbM7EnableSpFields::ON_OFF_SETPOINT4,
      FbbM7EnableSpFields::ON_OFF_SETPOINT5,
      FbbM7EnableSpFields::ON_OFF_SETPOINT6,
      FbbM7EnableSpFields::ON_OFF_SETPOINT7,
      FbbM7EnableSpFields::ON_OFF_SETPOINT8,
      FbbM7EnableSpFields::ON_OFF_SETPOINT9,
      FbbM7EnableSpFields::ON_OFF_SETPOINT10,
      FbbM7EnableSpFields::ON_OFF_SETPOINT11,
      FbbM7EnableSpFields::ON_OFF_SETPOINT12,
      FbbM7EnableSpFields::ON_OFF_SETPOINT13,
      FbbM7EnableSpFields::ON_OFF_SETPOINT14,
      FbbM7EnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = FbbM7EnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = FbbM7EnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = FbbM7EnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = FbbM7EnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = FbbM7EnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = FbbM7EnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = FbbM7EnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = FbbM7EnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = FbbM7EnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = FbbM7EnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = FbbM7EnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = FbbM7EnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = FbbM7EnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = FbbM7EnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = FbbM7EnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = FbbM7EnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = FbbM7EnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = FbbM7EnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = FbbM7EnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = FbbM7EnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = FbbM7EnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = FbbM7EnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = FbbM7EnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = FbbM7EnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = FbbM7EnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = FbbM7EnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = FbbM7EnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = FbbM7EnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = FbbM7EnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = FbbM7EnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = FbbM7EnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = FbbM7EnableSpFields::ON_OFF_SETPOINT15;
  };

  // RBB_SOC_ENABLE_SP_REGISTER
  struct RbbSocEnableSpFields {
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
  };  // struct RbbSocEnableSpFields

  struct RBB_SOC_ENABLE_SP : ftl::mmio::Register<
      0x40C84710u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbbSocEnableSpFields::ON_OFF_SETPOINT0,
      RbbSocEnableSpFields::ON_OFF_SETPOINT1,
      RbbSocEnableSpFields::ON_OFF_SETPOINT2,
      RbbSocEnableSpFields::ON_OFF_SETPOINT3,
      RbbSocEnableSpFields::ON_OFF_SETPOINT4,
      RbbSocEnableSpFields::ON_OFF_SETPOINT5,
      RbbSocEnableSpFields::ON_OFF_SETPOINT6,
      RbbSocEnableSpFields::ON_OFF_SETPOINT7,
      RbbSocEnableSpFields::ON_OFF_SETPOINT8,
      RbbSocEnableSpFields::ON_OFF_SETPOINT9,
      RbbSocEnableSpFields::ON_OFF_SETPOINT10,
      RbbSocEnableSpFields::ON_OFF_SETPOINT11,
      RbbSocEnableSpFields::ON_OFF_SETPOINT12,
      RbbSocEnableSpFields::ON_OFF_SETPOINT13,
      RbbSocEnableSpFields::ON_OFF_SETPOINT14,
      RbbSocEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = RbbSocEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = RbbSocEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = RbbSocEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = RbbSocEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = RbbSocEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = RbbSocEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = RbbSocEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = RbbSocEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = RbbSocEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = RbbSocEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = RbbSocEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = RbbSocEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = RbbSocEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = RbbSocEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = RbbSocEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = RbbSocEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = RbbSocEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = RbbSocEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = RbbSocEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = RbbSocEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = RbbSocEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = RbbSocEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = RbbSocEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = RbbSocEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = RbbSocEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = RbbSocEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = RbbSocEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = RbbSocEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = RbbSocEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = RbbSocEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = RbbSocEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = RbbSocEnableSpFields::ON_OFF_SETPOINT15;
  };

  // RBB_LPSR_ENABLE_SP_REGISTER
  struct RbbLpsrEnableSpFields {
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
  };  // struct RbbLpsrEnableSpFields

  struct RBB_LPSR_ENABLE_SP : ftl::mmio::Register<
      0x40C84720u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT0,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT1,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT2,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT3,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT4,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT5,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT6,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT7,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT8,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT9,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT10,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT11,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT12,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT13,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT14,
      RbbLpsrEnableSpFields::ON_OFF_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eON_OFF_SETPOINT0 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT0;
    using eON_OFF_SETPOINT1 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT1;
    using eON_OFF_SETPOINT2 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT2;
    using eON_OFF_SETPOINT3 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT3;
    using eON_OFF_SETPOINT4 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT4;
    using eON_OFF_SETPOINT5 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT5;
    using eON_OFF_SETPOINT6 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT6;
    using eON_OFF_SETPOINT7 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT7;
    using eON_OFF_SETPOINT8 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT8;
    using eON_OFF_SETPOINT9 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT9;
    using eON_OFF_SETPOINT10 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT10;
    using eON_OFF_SETPOINT11 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT11;
    using eON_OFF_SETPOINT12 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT12;
    using eON_OFF_SETPOINT13 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT13;
    using eON_OFF_SETPOINT14 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT14;
    using eON_OFF_SETPOINT15 = RbbLpsrEnableSpFields::eON_OFF_SETPOINT15;
    using ON_OFF_SETPOINT0 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT0;
    using ON_OFF_SETPOINT1 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT1;
    using ON_OFF_SETPOINT2 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT2;
    using ON_OFF_SETPOINT3 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT3;
    using ON_OFF_SETPOINT4 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT4;
    using ON_OFF_SETPOINT5 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT5;
    using ON_OFF_SETPOINT6 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT6;
    using ON_OFF_SETPOINT7 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT7;
    using ON_OFF_SETPOINT8 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT8;
    using ON_OFF_SETPOINT9 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT9;
    using ON_OFF_SETPOINT10 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT10;
    using ON_OFF_SETPOINT11 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT11;
    using ON_OFF_SETPOINT12 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT12;
    using ON_OFF_SETPOINT13 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT13;
    using ON_OFF_SETPOINT14 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT14;
    using ON_OFF_SETPOINT15 = RbbLpsrEnableSpFields::ON_OFF_SETPOINT15;
  };

  // BANDGAP_STBY_EN_SP_REGISTER
  struct BandgapStbyEnSpFields {
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
  };  // struct BandgapStbyEnSpFields

  struct BANDGAP_STBY_EN_SP : ftl::mmio::Register<
      0x40C84730u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT0,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT1,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT2,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT3,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT4,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT5,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT6,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT7,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT8,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT9,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT10,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT11,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT12,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT13,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT14,
      BandgapStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = BandgapStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = BandgapStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = BandgapStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = BandgapStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = BandgapStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = BandgapStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = BandgapStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = BandgapStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = BandgapStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = BandgapStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = BandgapStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = BandgapStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = BandgapStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = BandgapStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = BandgapStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = BandgapStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = BandgapStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // PLL_LDO_STBY_EN_SP_REGISTER
  struct PllLdoStbyEnSpFields {
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
  };  // struct PllLdoStbyEnSpFields

  struct PLL_LDO_STBY_EN_SP : ftl::mmio::Register<
      0x40C84740u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT0,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT1,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT2,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT3,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT4,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT5,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT6,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT7,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT8,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT9,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT10,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT11,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT12,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT13,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT14,
      PllLdoStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = PllLdoStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = PllLdoStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // FBB_M7_STBY_EN_SP_REGISTER
  struct FbbM7StbyEnSpFields {
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
  };  // struct FbbM7StbyEnSpFields

  struct FBB_M7_STBY_EN_SP : ftl::mmio::Register<
      0x40C84750u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT0,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT1,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT2,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT3,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT4,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT5,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT6,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT7,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT8,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT9,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT10,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT11,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT12,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT13,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT14,
      FbbM7StbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = FbbM7StbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = FbbM7StbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // RBB_SOC_STBY_EN_SP_REGISTER
  struct RbbSocStbyEnSpFields {
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
  };  // struct RbbSocStbyEnSpFields

  struct RBB_SOC_STBY_EN_SP : ftl::mmio::Register<
      0x40C84760u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT0,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT1,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT2,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT3,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT4,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT5,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT6,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT7,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT8,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT9,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT10,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT11,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT12,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT13,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT14,
      RbbSocStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = RbbSocStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = RbbSocStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // RBB_LPSR_STBY_EN_SP_REGISTER
  struct RbbLpsrStbyEnSpFields {
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
  };  // struct RbbLpsrStbyEnSpFields

  struct RBB_LPSR_STBY_EN_SP : ftl::mmio::Register<
      0x40C84770u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT0,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT1,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT2,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT3,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT4,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT5,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT6,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT7,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT8,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT9,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT10,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT11,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT12,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT13,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT14,
      RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT15,
      ftl::mmio::Reserved<16, 16>> {
    using eSTBY_EN_SETPOINT0 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT0;
    using eSTBY_EN_SETPOINT1 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT1;
    using eSTBY_EN_SETPOINT2 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT2;
    using eSTBY_EN_SETPOINT3 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT3;
    using eSTBY_EN_SETPOINT4 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT4;
    using eSTBY_EN_SETPOINT5 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT5;
    using eSTBY_EN_SETPOINT6 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT6;
    using eSTBY_EN_SETPOINT7 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT7;
    using eSTBY_EN_SETPOINT8 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT8;
    using eSTBY_EN_SETPOINT9 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT9;
    using eSTBY_EN_SETPOINT10 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT10;
    using eSTBY_EN_SETPOINT11 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT11;
    using eSTBY_EN_SETPOINT12 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT12;
    using eSTBY_EN_SETPOINT13 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT13;
    using eSTBY_EN_SETPOINT14 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT14;
    using eSTBY_EN_SETPOINT15 = RbbLpsrStbyEnSpFields::eSTBY_EN_SETPOINT15;
    using STBY_EN_SETPOINT0 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT0;
    using STBY_EN_SETPOINT1 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT1;
    using STBY_EN_SETPOINT2 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT2;
    using STBY_EN_SETPOINT3 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT3;
    using STBY_EN_SETPOINT4 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT4;
    using STBY_EN_SETPOINT5 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT5;
    using STBY_EN_SETPOINT6 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT6;
    using STBY_EN_SETPOINT7 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT7;
    using STBY_EN_SETPOINT8 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT8;
    using STBY_EN_SETPOINT9 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT9;
    using STBY_EN_SETPOINT10 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT10;
    using STBY_EN_SETPOINT11 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT11;
    using STBY_EN_SETPOINT12 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT12;
    using STBY_EN_SETPOINT13 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT13;
    using STBY_EN_SETPOINT14 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT14;
    using STBY_EN_SETPOINT15 = RbbLpsrStbyEnSpFields::STBY_EN_SETPOINT15;
  };

  // FBB_M7_CONFIGURE_REGISTER
  struct FbbM7ConfigureFields {
    // wb_cfg_pw
    using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // wb_cfg_nw
    using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // oscillator_bits
    using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // regulator_strength
    using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FbbM7ConfigureFields

  struct FBB_M7_CONFIGURE : ftl::mmio::Register<
      0x40C84780u,
      std::uint32_t,
      0x00002F11u,
      ftl::mmio::RW,
      FbbM7ConfigureFields::WB_CFG_PW,
      FbbM7ConfigureFields::WB_CFG_NW,
      FbbM7ConfigureFields::OSCILLATOR_BITS,
      FbbM7ConfigureFields::REGULATOR_STRENGTH,
      ftl::mmio::Reserved<18, 14>> {
    using WB_CFG_PW = FbbM7ConfigureFields::WB_CFG_PW;
    using WB_CFG_NW = FbbM7ConfigureFields::WB_CFG_NW;
    using OSCILLATOR_BITS = FbbM7ConfigureFields::OSCILLATOR_BITS;
    using REGULATOR_STRENGTH = FbbM7ConfigureFields::REGULATOR_STRENGTH;
  };

  // RBB_LPSR_CONFIGURE_REGISTER
  struct RbbLpsrConfigureFields {
    // wb_cfg_pw
    using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // wb_cfg_nw
    using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // oscillator_bits
    using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // regulator_strength
    using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbbLpsrConfigureFields

  struct RBB_LPSR_CONFIGURE : ftl::mmio::Register<
      0x40C84790u,
      std::uint32_t,
      0x00003022u,
      ftl::mmio::RW,
      RbbLpsrConfigureFields::WB_CFG_PW,
      RbbLpsrConfigureFields::WB_CFG_NW,
      RbbLpsrConfigureFields::OSCILLATOR_BITS,
      RbbLpsrConfigureFields::REGULATOR_STRENGTH,
      ftl::mmio::Reserved<18, 14>> {
    using WB_CFG_PW = RbbLpsrConfigureFields::WB_CFG_PW;
    using WB_CFG_NW = RbbLpsrConfigureFields::WB_CFG_NW;
    using OSCILLATOR_BITS = RbbLpsrConfigureFields::OSCILLATOR_BITS;
    using REGULATOR_STRENGTH = RbbLpsrConfigureFields::REGULATOR_STRENGTH;
  };

  // RBB_SOC_CONFIGURE_REGISTER
  struct RbbSocConfigureFields {
    // wb_cfg_pw
    using WB_CFG_PW = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // wb_cfg_nw
    using WB_CFG_NW = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // oscillator_bits
    using OSCILLATOR_BITS = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // regulator_strength
    using REGULATOR_STRENGTH = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbbSocConfigureFields

  struct RBB_SOC_CONFIGURE : ftl::mmio::Register<
      0x40C847A0u,
      std::uint32_t,
      0x00000044u,
      ftl::mmio::RW,
      RbbSocConfigureFields::WB_CFG_PW,
      RbbSocConfigureFields::WB_CFG_NW,
      RbbSocConfigureFields::OSCILLATOR_BITS,
      RbbSocConfigureFields::REGULATOR_STRENGTH,
      ftl::mmio::Reserved<18, 14>> {
    using WB_CFG_PW = RbbSocConfigureFields::WB_CFG_PW;
    using WB_CFG_NW = RbbSocConfigureFields::WB_CFG_NW;
    using OSCILLATOR_BITS = RbbSocConfigureFields::OSCILLATOR_BITS;
    using REGULATOR_STRENGTH = RbbSocConfigureFields::REGULATOR_STRENGTH;
  };

  // REFTOP_OTP_TRIM_VALUE_REGISTER
  struct ReftopOtpTrimValueFields {
    // REFTOP_IBZTCADJ
    using REFTOP_IBZTCADJ = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // REFTOP_VBGADJ
    using REFTOP_VBGADJ = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // REFTOP_TRIM_EN
    using REFTOP_TRIM_EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ReftopOtpTrimValueFields

  struct REFTOP_OTP_TRIM_VALUE : ftl::mmio::Register<
      0x40C847B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ReftopOtpTrimValueFields::REFTOP_IBZTCADJ,
      ReftopOtpTrimValueFields::REFTOP_VBGADJ,
      ReftopOtpTrimValueFields::REFTOP_TRIM_EN,
      ftl::mmio::Reserved<25, 7>> {
    using REFTOP_IBZTCADJ = ReftopOtpTrimValueFields::REFTOP_IBZTCADJ;
    using REFTOP_VBGADJ = ReftopOtpTrimValueFields::REFTOP_VBGADJ;
    using REFTOP_TRIM_EN = ReftopOtpTrimValueFields::REFTOP_TRIM_EN;
  };

  // LPSR_1P8_LDO_OTP_TRIM_VALUE_REGISTER
  struct Lpsr1p8LdoOtpTrimValueFields {
    // LPSR_LDO_1P8_TRIM
    using LPSR_LDO_1P8_TRIM = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // LPSR_LDO_1P8_TRIM_EN
    using LPSR_LDO_1P8_TRIM_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Lpsr1p8LdoOtpTrimValueFields

  struct LPSR_1P8_LDO_OTP_TRIM_VALUE : ftl::mmio::Register<
      0x40C847D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Lpsr1p8LdoOtpTrimValueFields::LPSR_LDO_1P8_TRIM,
      Lpsr1p8LdoOtpTrimValueFields::LPSR_LDO_1P8_TRIM_EN,
      ftl::mmio::Reserved<29, 3>> {
    using LPSR_LDO_1P8_TRIM = Lpsr1p8LdoOtpTrimValueFields::LPSR_LDO_1P8_TRIM;
    using LPSR_LDO_1P8_TRIM_EN = Lpsr1p8LdoOtpTrimValueFields::LPSR_LDO_1P8_TRIM_EN;
  };

};

}  // namespace regs