#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigLdoSnvs {
  // PMU_LDO_LPSR_ANA_REGISTER
  struct PmuLdoLpsrAnaFields {
    enum class eLPSR_ANA_CONTROL_MODE : std::uint32_t {
      // SW Control
      esw = 0,
      // HW Control
      ehw = 1,
    };

    enum class eTRACK_MODE_EN : std::uint32_t {
      // Normal use
      eNORMAL = 0,
      // Switch preparation
      eSWITCH = 1,
    };

    // reg_lp_en
    using REG_LP_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // reg_disable
    using REG_DISABLE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // pull_down_2ma_en
    using PULL_DOWN_2MA_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSR_ANA_CONTROL_MODE
    using LPSR_ANA_CONTROL_MODE = ftl::mmio::Field<1, 4, eLPSR_ANA_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // bypass_mode_en
    using BYPASS_MODE_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // standby_en
    using STANDBY_EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // always_4ma_pulldown_en
    using ALWAYS_4MA_PULLDOWN_EN = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Track Mode Enable
    using TRACK_MODE_EN = ftl::mmio::Field<1, 19, eTRACK_MODE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // pull_down_20ua_en
    using PULL_DOWN_20UA_EN = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PmuLdoLpsrAnaFields

  struct PMU_LDO_LPSR_ANA : ftl::mmio::Register<
      0x40C84510u,
      std::uint32_t,
      0x00000108u,
      ftl::mmio::RW,
      PmuLdoLpsrAnaFields::REG_LP_EN,
      ftl::mmio::Reserved<1, 1>,
      PmuLdoLpsrAnaFields::REG_DISABLE,
      PmuLdoLpsrAnaFields::PULL_DOWN_2MA_EN,
      PmuLdoLpsrAnaFields::LPSR_ANA_CONTROL_MODE,
      PmuLdoLpsrAnaFields::BYPASS_MODE_EN,
      PmuLdoLpsrAnaFields::STANDBY_EN,
      ftl::mmio::Reserved<1, 7>,
      PmuLdoLpsrAnaFields::ALWAYS_4MA_PULLDOWN_EN,
      ftl::mmio::Reserved<10, 9>,
      PmuLdoLpsrAnaFields::TRACK_MODE_EN,
      PmuLdoLpsrAnaFields::PULL_DOWN_20UA_EN,
      ftl::mmio::Reserved<11, 21>> {
    using eLPSR_ANA_CONTROL_MODE = PmuLdoLpsrAnaFields::eLPSR_ANA_CONTROL_MODE;
    using eTRACK_MODE_EN = PmuLdoLpsrAnaFields::eTRACK_MODE_EN;
    using REG_LP_EN = PmuLdoLpsrAnaFields::REG_LP_EN;
    using REG_DISABLE = PmuLdoLpsrAnaFields::REG_DISABLE;
    using PULL_DOWN_2MA_EN = PmuLdoLpsrAnaFields::PULL_DOWN_2MA_EN;
    using LPSR_ANA_CONTROL_MODE = PmuLdoLpsrAnaFields::LPSR_ANA_CONTROL_MODE;
    using BYPASS_MODE_EN = PmuLdoLpsrAnaFields::BYPASS_MODE_EN;
    using STANDBY_EN = PmuLdoLpsrAnaFields::STANDBY_EN;
    using ALWAYS_4MA_PULLDOWN_EN = PmuLdoLpsrAnaFields::ALWAYS_4MA_PULLDOWN_EN;
    using TRACK_MODE_EN = PmuLdoLpsrAnaFields::TRACK_MODE_EN;
    using PULL_DOWN_20UA_EN = PmuLdoLpsrAnaFields::PULL_DOWN_20UA_EN;
  };

  // PMU_LDO_LPSR_DIG_2_REGISTER
  struct PmuLdoLpsrDig2Fields {
    // voltage_step_inc
    using VOLTAGE_STEP_INC = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PmuLdoLpsrDig2Fields

  struct PMU_LDO_LPSR_DIG_2 : ftl::mmio::Register<
      0x40C84520u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      PmuLdoLpsrDig2Fields::VOLTAGE_STEP_INC,
      ftl::mmio::Reserved<30, 2>> {
    using VOLTAGE_STEP_INC = PmuLdoLpsrDig2Fields::VOLTAGE_STEP_INC;
  };

  // PMU_LDO_LPSR_DIG_REGISTER
  struct PmuLdoLpsrDigFields {
    enum class eLPSR_DIG_CONTROL_MODE : std::uint32_t {
      // SW Control
      esw = 0,
      // HW Control
      ehw = 1,
    };

    enum class eVOLTAGE_SELECT : std::uint32_t {
      // Stable Voltage (range)
      ebitval0 = 0,
      // Stable Voltage (range)
      ebitval1 = 1,
      // Stable Voltage (range)
      ebitval2 = 2,
      // Stable Voltage (range)
      ebitval3 = 3,
      // Stable Voltage (range)
      ebitval4 = 4,
      // Stable Voltage (range)
      ebitval5 = 5,
      // Stable Voltage (range)
      ebitval6 = 6,
      // Stable Voltage (range)
      ebitval7 = 7,
      // Stable Voltage (range)
      ebitval8 = 8,
      // Stable Voltage (range)
      ebitval9 = 9,
      // Stable Voltage (range)
      ebitval10 = 10,
      // Stable Voltage (range)
      ebitval11 = 11,
      // Stable Voltage (range)
      ebitval12 = 12,
      // Stable Voltage (range)
      ebitval13 = 13,
      // Stable Voltage (range)
      ebitval14 = 14,
      // Stable Voltage (range)
      ebitval15 = 15,
      // Stable Voltage (range)
      ebitval16 = 16,
      // Stable Voltage (range)
      ebitval17 = 17,
      // Stable Voltage (range)
      ebitval18 = 18,
      // Stable Voltage (range)
      ebitval19 = 19,
      // Stable Voltage (range)
      ebitval20 = 20,
      // Stable Voltage (range)
      ebitval21 = 21,
      // Stable Voltage (range)
      ebitval22 = 22,
      // Stable Voltage (range)
      ebitval23 = 23,
      // Stable Voltage (range)
      ebitval24 = 24,
      // Stable Voltage (range)
      ebitval25 = 25,
      // Stable Voltage (range)
      ebitval26 = 26,
      // Stable Voltage (range)
      ebitval27 = 27,
      // Stable Voltage (range)
      ebitval28 = 28,
      // Stable Voltage (range)
      ebitval29 = 29,
      // Stable Voltage (range)
      ebitval30 = 30,
      // Stable Voltage (range)
      ebitval31 = 31,
    };

    // ENABLE_ILIMIT
    using REG_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSR_DIG_CONTROL_MODE
    using LPSR_DIG_CONTROL_MODE = ftl::mmio::Field<1, 5, eLPSR_DIG_CONTROL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // standby_en
    using STANDBY_EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // tracking_mode
    using TRACKING_MODE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // bypass_mode
    using BYPASS_MODE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // VOLTAGE_SELECT
    using VOLTAGE_SELECT = ftl::mmio::Field<5, 20, eVOLTAGE_SELECT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PmuLdoLpsrDigFields

  struct PMU_LDO_LPSR_DIG : ftl::mmio::Register<
      0x40C84530u,
      std::uint32_t,
      0x01301C05u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      PmuLdoLpsrDigFields::REG_EN,
      ftl::mmio::Reserved<2, 3>,
      PmuLdoLpsrDigFields::LPSR_DIG_CONTROL_MODE,
      PmuLdoLpsrDigFields::STANDBY_EN,
      ftl::mmio::Reserved<10, 7>,
      PmuLdoLpsrDigFields::TRACKING_MODE,
      PmuLdoLpsrDigFields::BYPASS_MODE,
      ftl::mmio::Reserved<1, 19>,
      PmuLdoLpsrDigFields::VOLTAGE_SELECT,
      ftl::mmio::Reserved<7, 25>> {
    using eLPSR_DIG_CONTROL_MODE = PmuLdoLpsrDigFields::eLPSR_DIG_CONTROL_MODE;
    using eVOLTAGE_SELECT = PmuLdoLpsrDigFields::eVOLTAGE_SELECT;
    using REG_EN = PmuLdoLpsrDigFields::REG_EN;
    using LPSR_DIG_CONTROL_MODE = PmuLdoLpsrDigFields::LPSR_DIG_CONTROL_MODE;
    using STANDBY_EN = PmuLdoLpsrDigFields::STANDBY_EN;
    using TRACKING_MODE = PmuLdoLpsrDigFields::TRACKING_MODE;
    using BYPASS_MODE = PmuLdoLpsrDigFields::BYPASS_MODE;
    using VOLTAGE_SELECT = PmuLdoLpsrDigFields::VOLTAGE_SELECT;
  };

};

}  // namespace regs