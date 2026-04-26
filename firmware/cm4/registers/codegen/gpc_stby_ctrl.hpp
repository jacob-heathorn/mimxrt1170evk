#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_STBY
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::gpc_stby_ctrl {

// Standby Authentication Control
struct STBY_AUTHEN_CTRL_fields_ {
  // Configuration lock
  using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct STBY_AUTHEN_CTRL_fields_

struct STBY_AUTHEN_CTRL : ftl::mmio::Register<
    0x40C02804u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<20, 0>,
    STBY_AUTHEN_CTRL_fields_::LOCK_CFG,
    ftl::mmio::Reserved<11, 21>> {
  using LOCK_CFG = STBY_AUTHEN_CTRL_fields_::LOCK_CFG;
};

// STBY Misc
struct STBY_MISC_fields_ {
  // Force CPU0 requesting standby mode
  using FORCE_CPU0_STBY = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force CPU0 requesting standby mode
  using FORCE_CPU1_STBY = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force CPU2 requesting standby mode
  using FORCE_CPU2_STBY = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force CPU3 requesting standby mode
  using FORCE_CPU3_STBY = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct STBY_MISC_fields_

struct STBY_MISC : ftl::mmio::Register<
    0x40C0280Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    STBY_MISC_fields_::FORCE_CPU0_STBY,
    STBY_MISC_fields_::FORCE_CPU1_STBY,
    STBY_MISC_fields_::FORCE_CPU2_STBY,
    STBY_MISC_fields_::FORCE_CPU3_STBY,
    ftl::mmio::Reserved<28, 4>> {
  using FORCE_CPU0_STBY = STBY_MISC_fields_::FORCE_CPU0_STBY;
  using FORCE_CPU1_STBY = STBY_MISC_fields_::FORCE_CPU1_STBY;
  using FORCE_CPU2_STBY = STBY_MISC_fields_::FORCE_CPU2_STBY;
  using FORCE_CPU3_STBY = STBY_MISC_fields_::FORCE_CPU3_STBY;
};

// STBY lpcg_in control
struct STBY_LPCG_IN_CTRL_fields_ {
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
};  // struct STBY_LPCG_IN_CTRL_fields_

struct STBY_LPCG_IN_CTRL : ftl::mmio::Register<
    0x40C028F0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_LPCG_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_LPCG_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_LPCG_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_LPCG_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_LPCG_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_LPCG_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_LPCG_IN_CTRL_fields_::DISABLE;
};

// STBY pll_in control
struct STBY_PLL_IN_CTRL_fields_ {
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
};  // struct STBY_PLL_IN_CTRL_fields_

struct STBY_PLL_IN_CTRL : ftl::mmio::Register<
    0x40C02900u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PLL_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PLL_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PLL_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PLL_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PLL_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PLL_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PLL_IN_CTRL_fields_::DISABLE;
};

// STBY bias_in control
struct STBY_BIAS_IN_CTRL_fields_ {
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
};  // struct STBY_BIAS_IN_CTRL_fields_

struct STBY_BIAS_IN_CTRL : ftl::mmio::Register<
    0x40C02910u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_BIAS_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_BIAS_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_BIAS_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_BIAS_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_BIAS_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_BIAS_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_BIAS_IN_CTRL_fields_::DISABLE;
};

// STBY pldo_in control
struct STBY_PLDO_IN_CTRL_fields_ {
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
};  // struct STBY_PLDO_IN_CTRL_fields_

struct STBY_PLDO_IN_CTRL : ftl::mmio::Register<
    0x40C02920u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PLDO_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PLDO_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PLDO_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PLDO_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PLDO_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PLDO_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PLDO_IN_CTRL_fields_::DISABLE;
};

// STBY bandgap_in control
struct STBY_BANDGAP_IN_CTRL_fields_ {
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
};  // struct STBY_BANDGAP_IN_CTRL_fields_

struct STBY_BANDGAP_IN_CTRL : ftl::mmio::Register<
    0x40C02928u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_BANDGAP_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_BANDGAP_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_BANDGAP_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_BANDGAP_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_BANDGAP_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_BANDGAP_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_BANDGAP_IN_CTRL_fields_::DISABLE;
};

// STBY ldo_in control
struct STBY_LDO_IN_CTRL_fields_ {
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
};  // struct STBY_LDO_IN_CTRL_fields_

struct STBY_LDO_IN_CTRL : ftl::mmio::Register<
    0x40C02930u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_LDO_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_LDO_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_LDO_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_LDO_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_LDO_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_LDO_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_LDO_IN_CTRL_fields_::DISABLE;
};

// STBY dcdc_in control
struct STBY_DCDC_IN_CTRL_fields_ {
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
};  // struct STBY_DCDC_IN_CTRL_fields_

struct STBY_DCDC_IN_CTRL : ftl::mmio::Register<
    0x40C02940u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_DCDC_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_DCDC_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_DCDC_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_DCDC_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_DCDC_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_DCDC_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_DCDC_IN_CTRL_fields_::DISABLE;
};

// STBY PMIC in control
struct STBY_PMIC_IN_CTRL_fields_ {
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
};  // struct STBY_PMIC_IN_CTRL_fields_

struct STBY_PMIC_IN_CTRL : ftl::mmio::Register<
    0x40C02950u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PMIC_IN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PMIC_IN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PMIC_IN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PMIC_IN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PMIC_IN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PMIC_IN_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PMIC_IN_CTRL_fields_::DISABLE;
};

// STBY PMIC out control
struct STBY_PMIC_OUT_CTRL_fields_ {
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
};  // struct STBY_PMIC_OUT_CTRL_fields_

struct STBY_PMIC_OUT_CTRL : ftl::mmio::Register<
    0x40C02A00u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PMIC_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PMIC_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PMIC_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PMIC_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PMIC_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PMIC_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PMIC_OUT_CTRL_fields_::DISABLE;
};

// STBY DCDC out control
struct STBY_DCDC_OUT_CTRL_fields_ {
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
};  // struct STBY_DCDC_OUT_CTRL_fields_

struct STBY_DCDC_OUT_CTRL : ftl::mmio::Register<
    0x40C02A10u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_DCDC_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_DCDC_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_DCDC_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_DCDC_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_DCDC_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_DCDC_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_DCDC_OUT_CTRL_fields_::DISABLE;
};

// STBY LDO out control
struct STBY_LDO_OUT_CTRL_fields_ {
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
};  // struct STBY_LDO_OUT_CTRL_fields_

struct STBY_LDO_OUT_CTRL : ftl::mmio::Register<
    0x40C02A20u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_LDO_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_LDO_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_LDO_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_LDO_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_LDO_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_LDO_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_LDO_OUT_CTRL_fields_::DISABLE;
};

// STBY bandgap out control
struct STBY_BANDGAP_OUT_CTRL_fields_ {
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
};  // struct STBY_BANDGAP_OUT_CTRL_fields_

struct STBY_BANDGAP_OUT_CTRL : ftl::mmio::Register<
    0x40C02A30u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_BANDGAP_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_BANDGAP_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_BANDGAP_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_BANDGAP_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_BANDGAP_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_BANDGAP_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_BANDGAP_OUT_CTRL_fields_::DISABLE;
};

// STBY pldo out control
struct STBY_PLDO_OUT_CTRL_fields_ {
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
};  // struct STBY_PLDO_OUT_CTRL_fields_

struct STBY_PLDO_OUT_CTRL : ftl::mmio::Register<
    0x40C02A38u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PLDO_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PLDO_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PLDO_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PLDO_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PLDO_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PLDO_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PLDO_OUT_CTRL_fields_::DISABLE;
};

// STBY bias out control
struct STBY_BIAS_OUT_CTRL_fields_ {
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
};  // struct STBY_BIAS_OUT_CTRL_fields_

struct STBY_BIAS_OUT_CTRL : ftl::mmio::Register<
    0x40C02A40u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_BIAS_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_BIAS_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_BIAS_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_BIAS_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_BIAS_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_BIAS_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_BIAS_OUT_CTRL_fields_::DISABLE;
};

// STBY PLL out control
struct STBY_PLL_OUT_CTRL_fields_ {
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
};  // struct STBY_PLL_OUT_CTRL_fields_

struct STBY_PLL_OUT_CTRL : ftl::mmio::Register<
    0x40C02A50u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_PLL_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_PLL_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_PLL_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_PLL_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_PLL_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_PLL_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_PLL_OUT_CTRL_fields_::DISABLE;
};

// STBY LPCG out control
struct STBY_LPCG_OUT_CTRL_fields_ {
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
};  // struct STBY_LPCG_OUT_CTRL_fields_

struct STBY_LPCG_OUT_CTRL : ftl::mmio::Register<
    0x40C02A60u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    STBY_LPCG_OUT_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    STBY_LPCG_OUT_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    STBY_LPCG_OUT_CTRL_fields_::DISABLE> {
  using eCNT_MODE = STBY_LPCG_OUT_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = STBY_LPCG_OUT_CTRL_fields_::STEP_CNT;
  using CNT_MODE = STBY_LPCG_OUT_CTRL_fields_::CNT_MODE;
  using DISABLE = STBY_LPCG_OUT_CTRL_fields_::DISABLE;
};

}  // namespace regs::gpc_stby_ctrl