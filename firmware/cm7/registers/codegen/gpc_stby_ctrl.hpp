#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_STBY
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct GpcStbyCtrl {
  // Standby Authentication Control
  struct StbyAuthenCtrlFields {
    // Configuration lock
    using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyAuthenCtrlFields

  struct STBY_AUTHEN_CTRL : ftl::mmio::Register<
      0x40C02804u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<20, 0>,
      StbyAuthenCtrlFields::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using LOCK_CFG = StbyAuthenCtrlFields::LOCK_CFG;
  };

  // STBY Misc
  struct StbyMiscFields {
    // Force CPU0 requesting standby mode
    using FORCE_CPU0_STBY = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force CPU0 requesting standby mode
    using FORCE_CPU1_STBY = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force CPU2 requesting standby mode
    using FORCE_CPU2_STBY = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force CPU3 requesting standby mode
    using FORCE_CPU3_STBY = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyMiscFields

  struct STBY_MISC : ftl::mmio::Register<
      0x40C0280Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      StbyMiscFields::FORCE_CPU0_STBY,
      StbyMiscFields::FORCE_CPU1_STBY,
      StbyMiscFields::FORCE_CPU2_STBY,
      StbyMiscFields::FORCE_CPU3_STBY,
      ftl::mmio::Reserved<28, 4>> {
    using FORCE_CPU0_STBY = StbyMiscFields::FORCE_CPU0_STBY;
    using FORCE_CPU1_STBY = StbyMiscFields::FORCE_CPU1_STBY;
    using FORCE_CPU2_STBY = StbyMiscFields::FORCE_CPU2_STBY;
    using FORCE_CPU3_STBY = StbyMiscFields::FORCE_CPU3_STBY;
  };

  // STBY lpcg_in control
  struct StbyLpcgInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyLpcgInCtrlFields

  struct STBY_LPCG_IN_CTRL : ftl::mmio::Register<
      0x40C028F0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyLpcgInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyLpcgInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyLpcgInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyLpcgInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyLpcgInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyLpcgInCtrlFields::CNT_MODE;
    using DISABLE = StbyLpcgInCtrlFields::DISABLE;
  };

  // STBY pll_in control
  struct StbyPllInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPllInCtrlFields

  struct STBY_PLL_IN_CTRL : ftl::mmio::Register<
      0x40C02900u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPllInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPllInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPllInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPllInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPllInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPllInCtrlFields::CNT_MODE;
    using DISABLE = StbyPllInCtrlFields::DISABLE;
  };

  // STBY bias_in control
  struct StbyBiasInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyBiasInCtrlFields

  struct STBY_BIAS_IN_CTRL : ftl::mmio::Register<
      0x40C02910u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyBiasInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyBiasInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyBiasInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyBiasInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyBiasInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyBiasInCtrlFields::CNT_MODE;
    using DISABLE = StbyBiasInCtrlFields::DISABLE;
  };

  // STBY pldo_in control
  struct StbyPldoInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPldoInCtrlFields

  struct STBY_PLDO_IN_CTRL : ftl::mmio::Register<
      0x40C02920u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPldoInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPldoInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPldoInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPldoInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPldoInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPldoInCtrlFields::CNT_MODE;
    using DISABLE = StbyPldoInCtrlFields::DISABLE;
  };

  // STBY bandgap_in control
  struct StbyBandgapInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyBandgapInCtrlFields

  struct STBY_BANDGAP_IN_CTRL : ftl::mmio::Register<
      0x40C02928u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyBandgapInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyBandgapInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyBandgapInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyBandgapInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyBandgapInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyBandgapInCtrlFields::CNT_MODE;
    using DISABLE = StbyBandgapInCtrlFields::DISABLE;
  };

  // STBY ldo_in control
  struct StbyLdoInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyLdoInCtrlFields

  struct STBY_LDO_IN_CTRL : ftl::mmio::Register<
      0x40C02930u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyLdoInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyLdoInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyLdoInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyLdoInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyLdoInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyLdoInCtrlFields::CNT_MODE;
    using DISABLE = StbyLdoInCtrlFields::DISABLE;
  };

  // STBY dcdc_in control
  struct StbyDcdcInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyDcdcInCtrlFields

  struct STBY_DCDC_IN_CTRL : ftl::mmio::Register<
      0x40C02940u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyDcdcInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyDcdcInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyDcdcInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyDcdcInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyDcdcInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyDcdcInCtrlFields::CNT_MODE;
    using DISABLE = StbyDcdcInCtrlFields::DISABLE;
  };

  // STBY PMIC in control
  struct StbyPmicInCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPmicInCtrlFields

  struct STBY_PMIC_IN_CTRL : ftl::mmio::Register<
      0x40C02950u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPmicInCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPmicInCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPmicInCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPmicInCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPmicInCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPmicInCtrlFields::CNT_MODE;
    using DISABLE = StbyPmicInCtrlFields::DISABLE;
  };

  // STBY PMIC out control
  struct StbyPmicOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPmicOutCtrlFields

  struct STBY_PMIC_OUT_CTRL : ftl::mmio::Register<
      0x40C02A00u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPmicOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPmicOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPmicOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPmicOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPmicOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPmicOutCtrlFields::CNT_MODE;
    using DISABLE = StbyPmicOutCtrlFields::DISABLE;
  };

  // STBY DCDC out control
  struct StbyDcdcOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyDcdcOutCtrlFields

  struct STBY_DCDC_OUT_CTRL : ftl::mmio::Register<
      0x40C02A10u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyDcdcOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyDcdcOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyDcdcOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyDcdcOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyDcdcOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyDcdcOutCtrlFields::CNT_MODE;
    using DISABLE = StbyDcdcOutCtrlFields::DISABLE;
  };

  // STBY LDO out control
  struct StbyLdoOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyLdoOutCtrlFields

  struct STBY_LDO_OUT_CTRL : ftl::mmio::Register<
      0x40C02A20u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyLdoOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyLdoOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyLdoOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyLdoOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyLdoOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyLdoOutCtrlFields::CNT_MODE;
    using DISABLE = StbyLdoOutCtrlFields::DISABLE;
  };

  // STBY bandgap out control
  struct StbyBandgapOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyBandgapOutCtrlFields

  struct STBY_BANDGAP_OUT_CTRL : ftl::mmio::Register<
      0x40C02A30u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyBandgapOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyBandgapOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyBandgapOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyBandgapOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyBandgapOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyBandgapOutCtrlFields::CNT_MODE;
    using DISABLE = StbyBandgapOutCtrlFields::DISABLE;
  };

  // STBY pldo out control
  struct StbyPldoOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPldoOutCtrlFields

  struct STBY_PLDO_OUT_CTRL : ftl::mmio::Register<
      0x40C02A38u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPldoOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPldoOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPldoOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPldoOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPldoOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPldoOutCtrlFields::CNT_MODE;
    using DISABLE = StbyPldoOutCtrlFields::DISABLE;
  };

  // STBY bias out control
  struct StbyBiasOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyBiasOutCtrlFields

  struct STBY_BIAS_OUT_CTRL : ftl::mmio::Register<
      0x40C02A40u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyBiasOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyBiasOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyBiasOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyBiasOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyBiasOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyBiasOutCtrlFields::CNT_MODE;
    using DISABLE = StbyBiasOutCtrlFields::DISABLE;
  };

  // STBY PLL out control
  struct StbyPllOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyPllOutCtrlFields

  struct STBY_PLL_OUT_CTRL : ftl::mmio::Register<
      0x40C02A50u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyPllOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyPllOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyPllOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyPllOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyPllOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyPllOutCtrlFields::CNT_MODE;
    using DISABLE = StbyPllOutCtrlFields::DISABLE;
  };

  // STBY LPCG out control
  struct StbyLpcgOutCtrlFields {
    enum class eCNT_MODE : std::uint32_t {
      // Counter disable mode: not use step counter, step completes once receiving step_done
      eb0 = 0,
      // Counter delay mode: delay after receiving step_done, delay cycle number is STEP_CNT
      eb1 = 1,
      // Ignore step_done response, the counter starts to count once step begins, when counter reaches STEP_CNT value, the step completes
      eb2 = 2,
      // Time out mode, the counter starts to count once step begins, the step completes when either step_done received or counting to STEP_CNT value
      eb3 = 3,
    };

    // Step count, useage is depending on CNT_MODE
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StbyLpcgOutCtrlFields

  struct STBY_LPCG_OUT_CTRL : ftl::mmio::Register<
      0x40C02A60u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      StbyLpcgOutCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      StbyLpcgOutCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      StbyLpcgOutCtrlFields::DISABLE> {
    using eCNT_MODE = StbyLpcgOutCtrlFields::eCNT_MODE;
    using STEP_CNT = StbyLpcgOutCtrlFields::STEP_CNT;
    using CNT_MODE = StbyLpcgOutCtrlFields::CNT_MODE;
    using DISABLE = StbyLpcgOutCtrlFields::DISABLE;
  };

};

}  // namespace regs