#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_SP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::gpc_set_point_ctrl {

// SP Authentication Control
struct SP_AUTHEN_CTRL_fields_ {
  enum class eUSER : std::uint32_t {
    // Allow only privilege mode to access setpoint control registers
    eb0 = 0,
    // Allow both privilege and user mode to access setpoint control registers
    eb1 = 1,
  };

  enum class eNONSECURE : std::uint32_t {
    // Allow only secure mode to access setpoint control registers
    eb0 = 0,
    // Allow both secure and non-secure mode to access setpoint control registers
    eb1 = 1,
  };

  // Allow user mode access
  using USER = ftl::mmio::Field<1, 0, eUSER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Allow non-secure mode access
  using NONSECURE = ftl::mmio::Field<1, 1, eNONSECURE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock NONSECURE and USER
  using LOCK_SETTING = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain ID white list
  using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // White list lock
  using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Configuration lock
  using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SP_AUTHEN_CTRL_fields_

struct SP_AUTHEN_CTRL : ftl::mmio::Register<
    0x40C02004u,
    std::uint32_t,
    0x00000F00u,
    ftl::mmio::RW,
    SP_AUTHEN_CTRL_fields_::USER,
    SP_AUTHEN_CTRL_fields_::NONSECURE,
    ftl::mmio::Reserved<2, 2>,
    SP_AUTHEN_CTRL_fields_::LOCK_SETTING,
    ftl::mmio::Reserved<3, 5>,
    SP_AUTHEN_CTRL_fields_::WHITE_LIST,
    SP_AUTHEN_CTRL_fields_::LOCK_LIST,
    ftl::mmio::Reserved<7, 13>,
    SP_AUTHEN_CTRL_fields_::LOCK_CFG,
    ftl::mmio::Reserved<11, 21>> {
  using eUSER = SP_AUTHEN_CTRL_fields_::eUSER;
  using eNONSECURE = SP_AUTHEN_CTRL_fields_::eNONSECURE;
  using USER = SP_AUTHEN_CTRL_fields_::USER;
  using NONSECURE = SP_AUTHEN_CTRL_fields_::NONSECURE;
  using LOCK_SETTING = SP_AUTHEN_CTRL_fields_::LOCK_SETTING;
  using WHITE_LIST = SP_AUTHEN_CTRL_fields_::WHITE_LIST;
  using LOCK_LIST = SP_AUTHEN_CTRL_fields_::LOCK_LIST;
  using LOCK_CFG = SP_AUTHEN_CTRL_fields_::LOCK_CFG;
};

// SP Interrupt Control
struct SP_INT_CTRL_fields_ {
  // no_allowed_set_point interrupt enable
  using NO_ALLOWED_SP_INT_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // no_allowed_set_point interrupt
  using NO_ALLOWED_SP_INT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct SP_INT_CTRL_fields_

struct SP_INT_CTRL : ftl::mmio::Register<
    0x40C02008u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RW,
    SP_INT_CTRL_fields_::NO_ALLOWED_SP_INT_EN,
    SP_INT_CTRL_fields_::NO_ALLOWED_SP_INT,
    ftl::mmio::Reserved<30, 2>> {
  using NO_ALLOWED_SP_INT_EN = SP_INT_CTRL_fields_::NO_ALLOWED_SP_INT_EN;
  using NO_ALLOWED_SP_INT = SP_INT_CTRL_fields_::NO_ALLOWED_SP_INT;
};

// CPU SP Request
struct SP_CPU_REQ_fields_ {
  // Setpoint requested by CPU0
  using SP_REQ_CPU0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Setpoint requested by CPU1
  using SP_REQ_CPU1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Setpoint requested by CPU2
  using SP_REQ_CPU2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Setpoint requested by CPU3
  using SP_REQ_CPU3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // CPU0 Setpoint accepted by SP controller
  using SP_ACCEPTED_CPU0 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // CPU1 Setpoint accepted by SP controller
  using SP_ACCEPTED_CPU1 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // CPU2 Setpoint accepted by SP controller
  using SP_ACCEPTED_CPU2 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // CPU3 Setpoint accepted by SP controller
  using SP_ACCEPTED_CPU3 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct SP_CPU_REQ_fields_

struct SP_CPU_REQ : ftl::mmio::Register<
    0x40C02010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    SP_CPU_REQ_fields_::SP_REQ_CPU0,
    SP_CPU_REQ_fields_::SP_REQ_CPU1,
    SP_CPU_REQ_fields_::SP_REQ_CPU2,
    SP_CPU_REQ_fields_::SP_REQ_CPU3,
    SP_CPU_REQ_fields_::SP_ACCEPTED_CPU0,
    SP_CPU_REQ_fields_::SP_ACCEPTED_CPU1,
    SP_CPU_REQ_fields_::SP_ACCEPTED_CPU2,
    SP_CPU_REQ_fields_::SP_ACCEPTED_CPU3> {
  using SP_REQ_CPU0 = SP_CPU_REQ_fields_::SP_REQ_CPU0;
  using SP_REQ_CPU1 = SP_CPU_REQ_fields_::SP_REQ_CPU1;
  using SP_REQ_CPU2 = SP_CPU_REQ_fields_::SP_REQ_CPU2;
  using SP_REQ_CPU3 = SP_CPU_REQ_fields_::SP_REQ_CPU3;
  using SP_ACCEPTED_CPU0 = SP_CPU_REQ_fields_::SP_ACCEPTED_CPU0;
  using SP_ACCEPTED_CPU1 = SP_CPU_REQ_fields_::SP_ACCEPTED_CPU1;
  using SP_ACCEPTED_CPU2 = SP_CPU_REQ_fields_::SP_ACCEPTED_CPU2;
  using SP_ACCEPTED_CPU3 = SP_CPU_REQ_fields_::SP_ACCEPTED_CPU3;
};

// SP System Status
struct SP_SYS_STAT_fields_ {
  // Allowed Setpoints by all current CPU Setpoint requests
  using SYS_SP_ALLOWED = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // The Setpoint chosen as the target setpoint
  using SYS_SP_TARGET = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Current Setpoint, only valid when not SP trans busy
  using SYS_SP_CURRENT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Previous Setpoint, only valid when not SP trans busy
  using SYS_SP_PREVIOUS = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct SP_SYS_STAT_fields_

struct SP_SYS_STAT : ftl::mmio::Register<
    0x40C02014u,
    std::uint32_t,
    0x0000FFFFu,
    ftl::mmio::RO,
    SP_SYS_STAT_fields_::SYS_SP_ALLOWED,
    SP_SYS_STAT_fields_::SYS_SP_TARGET,
    SP_SYS_STAT_fields_::SYS_SP_CURRENT,
    SP_SYS_STAT_fields_::SYS_SP_PREVIOUS,
    ftl::mmio::Reserved<4, 28>> {
  using SYS_SP_ALLOWED = SP_SYS_STAT_fields_::SYS_SP_ALLOWED;
  using SYS_SP_TARGET = SP_SYS_STAT_fields_::SYS_SP_TARGET;
  using SYS_SP_CURRENT = SP_SYS_STAT_fields_::SYS_SP_CURRENT;
  using SYS_SP_PREVIOUS = SP_SYS_STAT_fields_::SYS_SP_PREVIOUS;
};

// SP ROSC Control
struct SP_ROSC_CTRL_fields_ {
  // Allow shutting off the ROSC
  using SP_ALLOW_ROSC_OFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SP_ROSC_CTRL_fields_

struct SP_ROSC_CTRL : ftl::mmio::Register<
    0x40C0201Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SP_ROSC_CTRL_fields_::SP_ALLOW_ROSC_OFF,
    ftl::mmio::Reserved<16, 16>> {
  using SP_ALLOW_ROSC_OFF = SP_ROSC_CTRL_fields_::SP_ALLOW_ROSC_OFF;
};

// SP0~7 Priority
struct SP_PRIORITY_0_7_fields_ {
  // priority of Setpoint 0
  using SYS_SP0_PRIORITY = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 1
  using SYS_SP1_PRIORITY = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 2
  using SYS_SP2_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 3
  using SYS_SP3_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 4
  using SYS_SP4_PRIORITY = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 5
  using SYS_SP5_PRIORITY = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 6
  using SYS_SP6_PRIORITY = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 7
  using SYS_SP7_PRIORITY = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SP_PRIORITY_0_7_fields_

struct SP_PRIORITY_0_7 : ftl::mmio::Register<
    0x40C02040u,
    std::uint32_t,
    0x76543210u,
    ftl::mmio::RW,
    SP_PRIORITY_0_7_fields_::SYS_SP0_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP1_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP2_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP3_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP4_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP5_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP6_PRIORITY,
    SP_PRIORITY_0_7_fields_::SYS_SP7_PRIORITY> {
  using SYS_SP0_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP0_PRIORITY;
  using SYS_SP1_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP1_PRIORITY;
  using SYS_SP2_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP2_PRIORITY;
  using SYS_SP3_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP3_PRIORITY;
  using SYS_SP4_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP4_PRIORITY;
  using SYS_SP5_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP5_PRIORITY;
  using SYS_SP6_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP6_PRIORITY;
  using SYS_SP7_PRIORITY = SP_PRIORITY_0_7_fields_::SYS_SP7_PRIORITY;
};

// SP8~15 Priority
struct SP_PRIORITY_8_15_fields_ {
  // priority of Setpoint 8
  using SYS_SP8_PRIORITY = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 9
  using SYS_SP9_PRIORITY = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 10
  using SYS_SP10_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 11
  using SYS_SP11_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 12
  using SYS_SP12_PRIORITY = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 13
  using SYS_SP13_PRIORITY = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 14
  using SYS_SP14_PRIORITY = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // priority of Setpoint 15
  using SYS_SP15_PRIORITY = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SP_PRIORITY_8_15_fields_

struct SP_PRIORITY_8_15 : ftl::mmio::Register<
    0x40C02044u,
    std::uint32_t,
    0xFEDCBA98u,
    ftl::mmio::RW,
    SP_PRIORITY_8_15_fields_::SYS_SP8_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP9_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP10_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP11_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP12_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP13_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP14_PRIORITY,
    SP_PRIORITY_8_15_fields_::SYS_SP15_PRIORITY> {
  using SYS_SP8_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP8_PRIORITY;
  using SYS_SP9_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP9_PRIORITY;
  using SYS_SP10_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP10_PRIORITY;
  using SYS_SP11_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP11_PRIORITY;
  using SYS_SP12_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP12_PRIORITY;
  using SYS_SP13_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP13_PRIORITY;
  using SYS_SP14_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP14_PRIORITY;
  using SYS_SP15_PRIORITY = SP_PRIORITY_8_15_fields_::SYS_SP15_PRIORITY;
};

// SP SSAR save control
struct SP_SSAR_SAVE_CTRL_fields_ {
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
};  // struct SP_SSAR_SAVE_CTRL_fields_

struct SP_SSAR_SAVE_CTRL : ftl::mmio::Register<
    0x40C02100u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_SSAR_SAVE_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_SSAR_SAVE_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_SSAR_SAVE_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_SSAR_SAVE_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_SSAR_SAVE_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_SSAR_SAVE_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_SSAR_SAVE_CTRL_fields_::DISABLE;
};

// SP LPCG off control
struct SP_LPCG_OFF_CTRL_fields_ {
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
};  // struct SP_LPCG_OFF_CTRL_fields_

struct SP_LPCG_OFF_CTRL : ftl::mmio::Register<
    0x40C02110u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_LPCG_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_LPCG_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_LPCG_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_LPCG_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_LPCG_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_LPCG_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_LPCG_OFF_CTRL_fields_::DISABLE;
};

// SP group down control
struct SP_GROUP_DOWN_CTRL_fields_ {
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
};  // struct SP_GROUP_DOWN_CTRL_fields_

struct SP_GROUP_DOWN_CTRL : ftl::mmio::Register<
    0x40C02120u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_GROUP_DOWN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_GROUP_DOWN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_GROUP_DOWN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_GROUP_DOWN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_GROUP_DOWN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_GROUP_DOWN_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_GROUP_DOWN_CTRL_fields_::DISABLE;
};

// SP root down control
struct SP_ROOT_DOWN_CTRL_fields_ {
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
};  // struct SP_ROOT_DOWN_CTRL_fields_

struct SP_ROOT_DOWN_CTRL : ftl::mmio::Register<
    0x40C02130u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_ROOT_DOWN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_ROOT_DOWN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_ROOT_DOWN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_ROOT_DOWN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_ROOT_DOWN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_ROOT_DOWN_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_ROOT_DOWN_CTRL_fields_::DISABLE;
};

// SP PLL off control
struct SP_PLL_OFF_CTRL_fields_ {
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
};  // struct SP_PLL_OFF_CTRL_fields_

struct SP_PLL_OFF_CTRL : ftl::mmio::Register<
    0x40C02140u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_PLL_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_PLL_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_PLL_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_PLL_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_PLL_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_PLL_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_PLL_OFF_CTRL_fields_::DISABLE;
};

// SP ISO on control
struct SP_ISO_ON_CTRL_fields_ {
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
};  // struct SP_ISO_ON_CTRL_fields_

struct SP_ISO_ON_CTRL : ftl::mmio::Register<
    0x40C02150u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_ISO_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_ISO_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_ISO_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_ISO_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_ISO_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_ISO_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_ISO_ON_CTRL_fields_::DISABLE;
};

// SP reset early control
struct SP_RESET_EARLY_CTRL_fields_ {
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
};  // struct SP_RESET_EARLY_CTRL_fields_

struct SP_RESET_EARLY_CTRL : ftl::mmio::Register<
    0x40C02160u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_RESET_EARLY_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_RESET_EARLY_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_RESET_EARLY_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_RESET_EARLY_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_RESET_EARLY_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_RESET_EARLY_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_RESET_EARLY_CTRL_fields_::DISABLE;
};

// SP power off control
struct SP_POWER_OFF_CTRL_fields_ {
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
};  // struct SP_POWER_OFF_CTRL_fields_

struct SP_POWER_OFF_CTRL : ftl::mmio::Register<
    0x40C02170u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_POWER_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_POWER_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_POWER_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_POWER_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_POWER_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_POWER_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_POWER_OFF_CTRL_fields_::DISABLE;
};

// SP bias off control
struct SP_BIAS_OFF_CTRL_fields_ {
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
};  // struct SP_BIAS_OFF_CTRL_fields_

struct SP_BIAS_OFF_CTRL : ftl::mmio::Register<
    0x40C02180u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_BIAS_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_BIAS_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_BIAS_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_BIAS_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_BIAS_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_BIAS_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_BIAS_OFF_CTRL_fields_::DISABLE;
};

// SP bandgap and PLL_LDO off control
struct SP_BG_PLDO_OFF_CTRL_fields_ {
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
};  // struct SP_BG_PLDO_OFF_CTRL_fields_

struct SP_BG_PLDO_OFF_CTRL : ftl::mmio::Register<
    0x40C02190u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_BG_PLDO_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_BG_PLDO_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_BG_PLDO_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_BG_PLDO_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_BG_PLDO_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_BG_PLDO_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_BG_PLDO_OFF_CTRL_fields_::DISABLE;
};

// SP LDO pre control
struct SP_LDO_PRE_CTRL_fields_ {
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
};  // struct SP_LDO_PRE_CTRL_fields_

struct SP_LDO_PRE_CTRL : ftl::mmio::Register<
    0x40C021A0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_LDO_PRE_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_LDO_PRE_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_LDO_PRE_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_LDO_PRE_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_LDO_PRE_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_LDO_PRE_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_LDO_PRE_CTRL_fields_::DISABLE;
};

// SP DCDC down control
struct SP_DCDC_DOWN_CTRL_fields_ {
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
};  // struct SP_DCDC_DOWN_CTRL_fields_

struct SP_DCDC_DOWN_CTRL : ftl::mmio::Register<
    0x40C021B0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_DCDC_DOWN_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_DCDC_DOWN_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_DCDC_DOWN_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_DCDC_DOWN_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_DCDC_DOWN_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_DCDC_DOWN_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_DCDC_DOWN_CTRL_fields_::DISABLE;
};

// SP DCDC up control
struct SP_DCDC_UP_CTRL_fields_ {
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
};  // struct SP_DCDC_UP_CTRL_fields_

struct SP_DCDC_UP_CTRL : ftl::mmio::Register<
    0x40C02200u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_DCDC_UP_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_DCDC_UP_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_DCDC_UP_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_DCDC_UP_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_DCDC_UP_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_DCDC_UP_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_DCDC_UP_CTRL_fields_::DISABLE;
};

// SP LDO post control
struct SP_LDO_POST_CTRL_fields_ {
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
};  // struct SP_LDO_POST_CTRL_fields_

struct SP_LDO_POST_CTRL : ftl::mmio::Register<
    0x40C02210u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_LDO_POST_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_LDO_POST_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_LDO_POST_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_LDO_POST_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_LDO_POST_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_LDO_POST_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_LDO_POST_CTRL_fields_::DISABLE;
};

// SP bandgap and PLL_LDO on control
struct SP_BG_PLDO_ON_CTRL_fields_ {
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
};  // struct SP_BG_PLDO_ON_CTRL_fields_

struct SP_BG_PLDO_ON_CTRL : ftl::mmio::Register<
    0x40C02220u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_BG_PLDO_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_BG_PLDO_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_BG_PLDO_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_BG_PLDO_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_BG_PLDO_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_BG_PLDO_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_BG_PLDO_ON_CTRL_fields_::DISABLE;
};

// SP bias on control
struct SP_BIAS_ON_CTRL_fields_ {
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
};  // struct SP_BIAS_ON_CTRL_fields_

struct SP_BIAS_ON_CTRL : ftl::mmio::Register<
    0x40C02230u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_BIAS_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_BIAS_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_BIAS_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_BIAS_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_BIAS_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_BIAS_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_BIAS_ON_CTRL_fields_::DISABLE;
};

// SP power on control
struct SP_POWER_ON_CTRL_fields_ {
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
};  // struct SP_POWER_ON_CTRL_fields_

struct SP_POWER_ON_CTRL : ftl::mmio::Register<
    0x40C02240u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_POWER_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_POWER_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_POWER_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_POWER_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_POWER_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_POWER_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_POWER_ON_CTRL_fields_::DISABLE;
};

// SP reset late control
struct SP_RESET_LATE_CTRL_fields_ {
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
};  // struct SP_RESET_LATE_CTRL_fields_

struct SP_RESET_LATE_CTRL : ftl::mmio::Register<
    0x40C02250u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_RESET_LATE_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_RESET_LATE_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_RESET_LATE_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_RESET_LATE_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_RESET_LATE_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_RESET_LATE_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_RESET_LATE_CTRL_fields_::DISABLE;
};

// SP ISO off control
struct SP_ISO_OFF_CTRL_fields_ {
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
};  // struct SP_ISO_OFF_CTRL_fields_

struct SP_ISO_OFF_CTRL : ftl::mmio::Register<
    0x40C02260u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_ISO_OFF_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_ISO_OFF_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_ISO_OFF_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_ISO_OFF_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_ISO_OFF_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_ISO_OFF_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_ISO_OFF_CTRL_fields_::DISABLE;
};

// SP PLL on control
struct SP_PLL_ON_CTRL_fields_ {
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
};  // struct SP_PLL_ON_CTRL_fields_

struct SP_PLL_ON_CTRL : ftl::mmio::Register<
    0x40C02270u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_PLL_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_PLL_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_PLL_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_PLL_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_PLL_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_PLL_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_PLL_ON_CTRL_fields_::DISABLE;
};

// SP root up control
struct SP_ROOT_UP_CTRL_fields_ {
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
};  // struct SP_ROOT_UP_CTRL_fields_

struct SP_ROOT_UP_CTRL : ftl::mmio::Register<
    0x40C02280u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_ROOT_UP_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_ROOT_UP_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_ROOT_UP_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_ROOT_UP_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_ROOT_UP_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_ROOT_UP_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_ROOT_UP_CTRL_fields_::DISABLE;
};

// SP group up control
struct SP_GROUP_UP_CTRL_fields_ {
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
};  // struct SP_GROUP_UP_CTRL_fields_

struct SP_GROUP_UP_CTRL : ftl::mmio::Register<
    0x40C02290u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_GROUP_UP_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_GROUP_UP_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_GROUP_UP_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_GROUP_UP_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_GROUP_UP_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_GROUP_UP_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_GROUP_UP_CTRL_fields_::DISABLE;
};

// SP LPCG on control
struct SP_LPCG_ON_CTRL_fields_ {
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
};  // struct SP_LPCG_ON_CTRL_fields_

struct SP_LPCG_ON_CTRL : ftl::mmio::Register<
    0x40C022A0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_LPCG_ON_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_LPCG_ON_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_LPCG_ON_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_LPCG_ON_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_LPCG_ON_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_LPCG_ON_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_LPCG_ON_CTRL_fields_::DISABLE;
};

// SP SSAR restore control
struct SP_SSAR_RESTORE_CTRL_fields_ {
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
};  // struct SP_SSAR_RESTORE_CTRL_fields_

struct SP_SSAR_RESTORE_CTRL : ftl::mmio::Register<
    0x40C022B0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    SP_SSAR_RESTORE_CTRL_fields_::STEP_CNT,
    ftl::mmio::Reserved<12, 16>,
    SP_SSAR_RESTORE_CTRL_fields_::CNT_MODE,
    ftl::mmio::Reserved<1, 30>,
    SP_SSAR_RESTORE_CTRL_fields_::DISABLE> {
  using eCNT_MODE = SP_SSAR_RESTORE_CTRL_fields_::eCNT_MODE;
  using STEP_CNT = SP_SSAR_RESTORE_CTRL_fields_::STEP_CNT;
  using CNT_MODE = SP_SSAR_RESTORE_CTRL_fields_::CNT_MODE;
  using DISABLE = SP_SSAR_RESTORE_CTRL_fields_::DISABLE;
};

}  // namespace regs::gpc_set_point_ctrl