#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_SP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct GpcSetPointCtrl {
  // SP Authentication Control
  struct SpAuthenCtrlFields {
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
  };  // struct SpAuthenCtrlFields

  struct SP_AUTHEN_CTRL : ftl::mmio::Register<
      0x40C02004u,
      std::uint32_t,
      0x00000F00u,
      ftl::mmio::RW,
      SpAuthenCtrlFields::USER,
      SpAuthenCtrlFields::NONSECURE,
      ftl::mmio::Reserved<2, 2>,
      SpAuthenCtrlFields::LOCK_SETTING,
      ftl::mmio::Reserved<3, 5>,
      SpAuthenCtrlFields::WHITE_LIST,
      SpAuthenCtrlFields::LOCK_LIST,
      ftl::mmio::Reserved<7, 13>,
      SpAuthenCtrlFields::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using eUSER = SpAuthenCtrlFields::eUSER;
    using eNONSECURE = SpAuthenCtrlFields::eNONSECURE;
    using USER = SpAuthenCtrlFields::USER;
    using NONSECURE = SpAuthenCtrlFields::NONSECURE;
    using LOCK_SETTING = SpAuthenCtrlFields::LOCK_SETTING;
    using WHITE_LIST = SpAuthenCtrlFields::WHITE_LIST;
    using LOCK_LIST = SpAuthenCtrlFields::LOCK_LIST;
    using LOCK_CFG = SpAuthenCtrlFields::LOCK_CFG;
  };

  // SP Interrupt Control
  struct SpIntCtrlFields {
    // no_allowed_set_point interrupt enable
    using NO_ALLOWED_SP_INT_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // no_allowed_set_point interrupt
    using NO_ALLOWED_SP_INT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SpIntCtrlFields

  struct SP_INT_CTRL : ftl::mmio::Register<
      0x40C02008u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      SpIntCtrlFields::NO_ALLOWED_SP_INT_EN,
      SpIntCtrlFields::NO_ALLOWED_SP_INT,
      ftl::mmio::Reserved<30, 2>> {
    using NO_ALLOWED_SP_INT_EN = SpIntCtrlFields::NO_ALLOWED_SP_INT_EN;
    using NO_ALLOWED_SP_INT = SpIntCtrlFields::NO_ALLOWED_SP_INT;
  };

  // CPU SP Request
  struct SpCpuReqFields {
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
  };  // struct SpCpuReqFields

  struct SP_CPU_REQ : ftl::mmio::Register<
      0x40C02010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SpCpuReqFields::SP_REQ_CPU0,
      SpCpuReqFields::SP_REQ_CPU1,
      SpCpuReqFields::SP_REQ_CPU2,
      SpCpuReqFields::SP_REQ_CPU3,
      SpCpuReqFields::SP_ACCEPTED_CPU0,
      SpCpuReqFields::SP_ACCEPTED_CPU1,
      SpCpuReqFields::SP_ACCEPTED_CPU2,
      SpCpuReqFields::SP_ACCEPTED_CPU3> {
    using SP_REQ_CPU0 = SpCpuReqFields::SP_REQ_CPU0;
    using SP_REQ_CPU1 = SpCpuReqFields::SP_REQ_CPU1;
    using SP_REQ_CPU2 = SpCpuReqFields::SP_REQ_CPU2;
    using SP_REQ_CPU3 = SpCpuReqFields::SP_REQ_CPU3;
    using SP_ACCEPTED_CPU0 = SpCpuReqFields::SP_ACCEPTED_CPU0;
    using SP_ACCEPTED_CPU1 = SpCpuReqFields::SP_ACCEPTED_CPU1;
    using SP_ACCEPTED_CPU2 = SpCpuReqFields::SP_ACCEPTED_CPU2;
    using SP_ACCEPTED_CPU3 = SpCpuReqFields::SP_ACCEPTED_CPU3;
  };

  // SP System Status
  struct SpSysStatFields {
    // Allowed Setpoints by all current CPU Setpoint requests
    using SYS_SP_ALLOWED = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // The Setpoint chosen as the target setpoint
    using SYS_SP_TARGET = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Current Setpoint, only valid when not SP trans busy
    using SYS_SP_CURRENT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Previous Setpoint, only valid when not SP trans busy
    using SYS_SP_PREVIOUS = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SpSysStatFields

  struct SP_SYS_STAT : ftl::mmio::Register<
      0x40C02014u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RO,
      SpSysStatFields::SYS_SP_ALLOWED,
      SpSysStatFields::SYS_SP_TARGET,
      SpSysStatFields::SYS_SP_CURRENT,
      SpSysStatFields::SYS_SP_PREVIOUS,
      ftl::mmio::Reserved<4, 28>> {
    using SYS_SP_ALLOWED = SpSysStatFields::SYS_SP_ALLOWED;
    using SYS_SP_TARGET = SpSysStatFields::SYS_SP_TARGET;
    using SYS_SP_CURRENT = SpSysStatFields::SYS_SP_CURRENT;
    using SYS_SP_PREVIOUS = SpSysStatFields::SYS_SP_PREVIOUS;
  };

  // SP ROSC Control
  struct SpRoscCtrlFields {
    // Allow shutting off the ROSC
    using SP_ALLOW_ROSC_OFF = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SpRoscCtrlFields

  struct SP_ROSC_CTRL : ftl::mmio::Register<
      0x40C0201Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpRoscCtrlFields::SP_ALLOW_ROSC_OFF,
      ftl::mmio::Reserved<16, 16>> {
    using SP_ALLOW_ROSC_OFF = SpRoscCtrlFields::SP_ALLOW_ROSC_OFF;
  };

  // SP0~7 Priority
  struct SpPriority07Fields {
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
  };  // struct SpPriority07Fields

  struct SP_PRIORITY_0_7 : ftl::mmio::Register<
      0x40C02040u,
      std::uint32_t,
      0x76543210u,
      ftl::mmio::RW,
      SpPriority07Fields::SYS_SP0_PRIORITY,
      SpPriority07Fields::SYS_SP1_PRIORITY,
      SpPriority07Fields::SYS_SP2_PRIORITY,
      SpPriority07Fields::SYS_SP3_PRIORITY,
      SpPriority07Fields::SYS_SP4_PRIORITY,
      SpPriority07Fields::SYS_SP5_PRIORITY,
      SpPriority07Fields::SYS_SP6_PRIORITY,
      SpPriority07Fields::SYS_SP7_PRIORITY> {
    using SYS_SP0_PRIORITY = SpPriority07Fields::SYS_SP0_PRIORITY;
    using SYS_SP1_PRIORITY = SpPriority07Fields::SYS_SP1_PRIORITY;
    using SYS_SP2_PRIORITY = SpPriority07Fields::SYS_SP2_PRIORITY;
    using SYS_SP3_PRIORITY = SpPriority07Fields::SYS_SP3_PRIORITY;
    using SYS_SP4_PRIORITY = SpPriority07Fields::SYS_SP4_PRIORITY;
    using SYS_SP5_PRIORITY = SpPriority07Fields::SYS_SP5_PRIORITY;
    using SYS_SP6_PRIORITY = SpPriority07Fields::SYS_SP6_PRIORITY;
    using SYS_SP7_PRIORITY = SpPriority07Fields::SYS_SP7_PRIORITY;
  };

  // SP8~15 Priority
  struct SpPriority815Fields {
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
  };  // struct SpPriority815Fields

  struct SP_PRIORITY_8_15 : ftl::mmio::Register<
      0x40C02044u,
      std::uint32_t,
      0xFEDCBA98u,
      ftl::mmio::RW,
      SpPriority815Fields::SYS_SP8_PRIORITY,
      SpPriority815Fields::SYS_SP9_PRIORITY,
      SpPriority815Fields::SYS_SP10_PRIORITY,
      SpPriority815Fields::SYS_SP11_PRIORITY,
      SpPriority815Fields::SYS_SP12_PRIORITY,
      SpPriority815Fields::SYS_SP13_PRIORITY,
      SpPriority815Fields::SYS_SP14_PRIORITY,
      SpPriority815Fields::SYS_SP15_PRIORITY> {
    using SYS_SP8_PRIORITY = SpPriority815Fields::SYS_SP8_PRIORITY;
    using SYS_SP9_PRIORITY = SpPriority815Fields::SYS_SP9_PRIORITY;
    using SYS_SP10_PRIORITY = SpPriority815Fields::SYS_SP10_PRIORITY;
    using SYS_SP11_PRIORITY = SpPriority815Fields::SYS_SP11_PRIORITY;
    using SYS_SP12_PRIORITY = SpPriority815Fields::SYS_SP12_PRIORITY;
    using SYS_SP13_PRIORITY = SpPriority815Fields::SYS_SP13_PRIORITY;
    using SYS_SP14_PRIORITY = SpPriority815Fields::SYS_SP14_PRIORITY;
    using SYS_SP15_PRIORITY = SpPriority815Fields::SYS_SP15_PRIORITY;
  };

  // SP SSAR save control
  struct SpSsarSaveCtrlFields {
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
  };  // struct SpSsarSaveCtrlFields

  struct SP_SSAR_SAVE_CTRL : ftl::mmio::Register<
      0x40C02100u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpSsarSaveCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpSsarSaveCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpSsarSaveCtrlFields::DISABLE> {
    using eCNT_MODE = SpSsarSaveCtrlFields::eCNT_MODE;
    using STEP_CNT = SpSsarSaveCtrlFields::STEP_CNT;
    using CNT_MODE = SpSsarSaveCtrlFields::CNT_MODE;
    using DISABLE = SpSsarSaveCtrlFields::DISABLE;
  };

  // SP LPCG off control
  struct SpLpcgOffCtrlFields {
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
  };  // struct SpLpcgOffCtrlFields

  struct SP_LPCG_OFF_CTRL : ftl::mmio::Register<
      0x40C02110u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpLpcgOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpLpcgOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpLpcgOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpLpcgOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpLpcgOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpLpcgOffCtrlFields::CNT_MODE;
    using DISABLE = SpLpcgOffCtrlFields::DISABLE;
  };

  // SP group down control
  struct SpGroupDownCtrlFields {
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
  };  // struct SpGroupDownCtrlFields

  struct SP_GROUP_DOWN_CTRL : ftl::mmio::Register<
      0x40C02120u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpGroupDownCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpGroupDownCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpGroupDownCtrlFields::DISABLE> {
    using eCNT_MODE = SpGroupDownCtrlFields::eCNT_MODE;
    using STEP_CNT = SpGroupDownCtrlFields::STEP_CNT;
    using CNT_MODE = SpGroupDownCtrlFields::CNT_MODE;
    using DISABLE = SpGroupDownCtrlFields::DISABLE;
  };

  // SP root down control
  struct SpRootDownCtrlFields {
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
  };  // struct SpRootDownCtrlFields

  struct SP_ROOT_DOWN_CTRL : ftl::mmio::Register<
      0x40C02130u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpRootDownCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpRootDownCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpRootDownCtrlFields::DISABLE> {
    using eCNT_MODE = SpRootDownCtrlFields::eCNT_MODE;
    using STEP_CNT = SpRootDownCtrlFields::STEP_CNT;
    using CNT_MODE = SpRootDownCtrlFields::CNT_MODE;
    using DISABLE = SpRootDownCtrlFields::DISABLE;
  };

  // SP PLL off control
  struct SpPllOffCtrlFields {
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
  };  // struct SpPllOffCtrlFields

  struct SP_PLL_OFF_CTRL : ftl::mmio::Register<
      0x40C02140u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpPllOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpPllOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpPllOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpPllOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpPllOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpPllOffCtrlFields::CNT_MODE;
    using DISABLE = SpPllOffCtrlFields::DISABLE;
  };

  // SP ISO on control
  struct SpIsoOnCtrlFields {
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
  };  // struct SpIsoOnCtrlFields

  struct SP_ISO_ON_CTRL : ftl::mmio::Register<
      0x40C02150u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpIsoOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpIsoOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpIsoOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpIsoOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpIsoOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpIsoOnCtrlFields::CNT_MODE;
    using DISABLE = SpIsoOnCtrlFields::DISABLE;
  };

  // SP reset early control
  struct SpResetEarlyCtrlFields {
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
  };  // struct SpResetEarlyCtrlFields

  struct SP_RESET_EARLY_CTRL : ftl::mmio::Register<
      0x40C02160u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpResetEarlyCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpResetEarlyCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpResetEarlyCtrlFields::DISABLE> {
    using eCNT_MODE = SpResetEarlyCtrlFields::eCNT_MODE;
    using STEP_CNT = SpResetEarlyCtrlFields::STEP_CNT;
    using CNT_MODE = SpResetEarlyCtrlFields::CNT_MODE;
    using DISABLE = SpResetEarlyCtrlFields::DISABLE;
  };

  // SP power off control
  struct SpPowerOffCtrlFields {
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
  };  // struct SpPowerOffCtrlFields

  struct SP_POWER_OFF_CTRL : ftl::mmio::Register<
      0x40C02170u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpPowerOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpPowerOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpPowerOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpPowerOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpPowerOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpPowerOffCtrlFields::CNT_MODE;
    using DISABLE = SpPowerOffCtrlFields::DISABLE;
  };

  // SP bias off control
  struct SpBiasOffCtrlFields {
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
  };  // struct SpBiasOffCtrlFields

  struct SP_BIAS_OFF_CTRL : ftl::mmio::Register<
      0x40C02180u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpBiasOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpBiasOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpBiasOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpBiasOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpBiasOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpBiasOffCtrlFields::CNT_MODE;
    using DISABLE = SpBiasOffCtrlFields::DISABLE;
  };

  // SP bandgap and PLL_LDO off control
  struct SpBgPldoOffCtrlFields {
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
  };  // struct SpBgPldoOffCtrlFields

  struct SP_BG_PLDO_OFF_CTRL : ftl::mmio::Register<
      0x40C02190u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpBgPldoOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpBgPldoOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpBgPldoOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpBgPldoOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpBgPldoOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpBgPldoOffCtrlFields::CNT_MODE;
    using DISABLE = SpBgPldoOffCtrlFields::DISABLE;
  };

  // SP LDO pre control
  struct SpLdoPreCtrlFields {
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
  };  // struct SpLdoPreCtrlFields

  struct SP_LDO_PRE_CTRL : ftl::mmio::Register<
      0x40C021A0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpLdoPreCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpLdoPreCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpLdoPreCtrlFields::DISABLE> {
    using eCNT_MODE = SpLdoPreCtrlFields::eCNT_MODE;
    using STEP_CNT = SpLdoPreCtrlFields::STEP_CNT;
    using CNT_MODE = SpLdoPreCtrlFields::CNT_MODE;
    using DISABLE = SpLdoPreCtrlFields::DISABLE;
  };

  // SP DCDC down control
  struct SpDcdcDownCtrlFields {
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
  };  // struct SpDcdcDownCtrlFields

  struct SP_DCDC_DOWN_CTRL : ftl::mmio::Register<
      0x40C021B0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpDcdcDownCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpDcdcDownCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpDcdcDownCtrlFields::DISABLE> {
    using eCNT_MODE = SpDcdcDownCtrlFields::eCNT_MODE;
    using STEP_CNT = SpDcdcDownCtrlFields::STEP_CNT;
    using CNT_MODE = SpDcdcDownCtrlFields::CNT_MODE;
    using DISABLE = SpDcdcDownCtrlFields::DISABLE;
  };

  // SP DCDC up control
  struct SpDcdcUpCtrlFields {
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
  };  // struct SpDcdcUpCtrlFields

  struct SP_DCDC_UP_CTRL : ftl::mmio::Register<
      0x40C02200u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpDcdcUpCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpDcdcUpCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpDcdcUpCtrlFields::DISABLE> {
    using eCNT_MODE = SpDcdcUpCtrlFields::eCNT_MODE;
    using STEP_CNT = SpDcdcUpCtrlFields::STEP_CNT;
    using CNT_MODE = SpDcdcUpCtrlFields::CNT_MODE;
    using DISABLE = SpDcdcUpCtrlFields::DISABLE;
  };

  // SP LDO post control
  struct SpLdoPostCtrlFields {
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
  };  // struct SpLdoPostCtrlFields

  struct SP_LDO_POST_CTRL : ftl::mmio::Register<
      0x40C02210u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpLdoPostCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpLdoPostCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpLdoPostCtrlFields::DISABLE> {
    using eCNT_MODE = SpLdoPostCtrlFields::eCNT_MODE;
    using STEP_CNT = SpLdoPostCtrlFields::STEP_CNT;
    using CNT_MODE = SpLdoPostCtrlFields::CNT_MODE;
    using DISABLE = SpLdoPostCtrlFields::DISABLE;
  };

  // SP bandgap and PLL_LDO on control
  struct SpBgPldoOnCtrlFields {
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
  };  // struct SpBgPldoOnCtrlFields

  struct SP_BG_PLDO_ON_CTRL : ftl::mmio::Register<
      0x40C02220u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpBgPldoOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpBgPldoOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpBgPldoOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpBgPldoOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpBgPldoOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpBgPldoOnCtrlFields::CNT_MODE;
    using DISABLE = SpBgPldoOnCtrlFields::DISABLE;
  };

  // SP bias on control
  struct SpBiasOnCtrlFields {
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
  };  // struct SpBiasOnCtrlFields

  struct SP_BIAS_ON_CTRL : ftl::mmio::Register<
      0x40C02230u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpBiasOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpBiasOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpBiasOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpBiasOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpBiasOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpBiasOnCtrlFields::CNT_MODE;
    using DISABLE = SpBiasOnCtrlFields::DISABLE;
  };

  // SP power on control
  struct SpPowerOnCtrlFields {
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
  };  // struct SpPowerOnCtrlFields

  struct SP_POWER_ON_CTRL : ftl::mmio::Register<
      0x40C02240u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpPowerOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpPowerOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpPowerOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpPowerOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpPowerOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpPowerOnCtrlFields::CNT_MODE;
    using DISABLE = SpPowerOnCtrlFields::DISABLE;
  };

  // SP reset late control
  struct SpResetLateCtrlFields {
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
  };  // struct SpResetLateCtrlFields

  struct SP_RESET_LATE_CTRL : ftl::mmio::Register<
      0x40C02250u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpResetLateCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpResetLateCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpResetLateCtrlFields::DISABLE> {
    using eCNT_MODE = SpResetLateCtrlFields::eCNT_MODE;
    using STEP_CNT = SpResetLateCtrlFields::STEP_CNT;
    using CNT_MODE = SpResetLateCtrlFields::CNT_MODE;
    using DISABLE = SpResetLateCtrlFields::DISABLE;
  };

  // SP ISO off control
  struct SpIsoOffCtrlFields {
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
  };  // struct SpIsoOffCtrlFields

  struct SP_ISO_OFF_CTRL : ftl::mmio::Register<
      0x40C02260u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpIsoOffCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpIsoOffCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpIsoOffCtrlFields::DISABLE> {
    using eCNT_MODE = SpIsoOffCtrlFields::eCNT_MODE;
    using STEP_CNT = SpIsoOffCtrlFields::STEP_CNT;
    using CNT_MODE = SpIsoOffCtrlFields::CNT_MODE;
    using DISABLE = SpIsoOffCtrlFields::DISABLE;
  };

  // SP PLL on control
  struct SpPllOnCtrlFields {
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
  };  // struct SpPllOnCtrlFields

  struct SP_PLL_ON_CTRL : ftl::mmio::Register<
      0x40C02270u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpPllOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpPllOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpPllOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpPllOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpPllOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpPllOnCtrlFields::CNT_MODE;
    using DISABLE = SpPllOnCtrlFields::DISABLE;
  };

  // SP root up control
  struct SpRootUpCtrlFields {
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
  };  // struct SpRootUpCtrlFields

  struct SP_ROOT_UP_CTRL : ftl::mmio::Register<
      0x40C02280u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpRootUpCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpRootUpCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpRootUpCtrlFields::DISABLE> {
    using eCNT_MODE = SpRootUpCtrlFields::eCNT_MODE;
    using STEP_CNT = SpRootUpCtrlFields::STEP_CNT;
    using CNT_MODE = SpRootUpCtrlFields::CNT_MODE;
    using DISABLE = SpRootUpCtrlFields::DISABLE;
  };

  // SP group up control
  struct SpGroupUpCtrlFields {
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
  };  // struct SpGroupUpCtrlFields

  struct SP_GROUP_UP_CTRL : ftl::mmio::Register<
      0x40C02290u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpGroupUpCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpGroupUpCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpGroupUpCtrlFields::DISABLE> {
    using eCNT_MODE = SpGroupUpCtrlFields::eCNT_MODE;
    using STEP_CNT = SpGroupUpCtrlFields::STEP_CNT;
    using CNT_MODE = SpGroupUpCtrlFields::CNT_MODE;
    using DISABLE = SpGroupUpCtrlFields::DISABLE;
  };

  // SP LPCG on control
  struct SpLpcgOnCtrlFields {
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
  };  // struct SpLpcgOnCtrlFields

  struct SP_LPCG_ON_CTRL : ftl::mmio::Register<
      0x40C022A0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpLpcgOnCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpLpcgOnCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpLpcgOnCtrlFields::DISABLE> {
    using eCNT_MODE = SpLpcgOnCtrlFields::eCNT_MODE;
    using STEP_CNT = SpLpcgOnCtrlFields::STEP_CNT;
    using CNT_MODE = SpLpcgOnCtrlFields::CNT_MODE;
    using DISABLE = SpLpcgOnCtrlFields::DISABLE;
  };

  // SP SSAR restore control
  struct SpSsarRestoreCtrlFields {
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
  };  // struct SpSsarRestoreCtrlFields

  struct SP_SSAR_RESTORE_CTRL : ftl::mmio::Register<
      0x40C022B0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      SpSsarRestoreCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      SpSsarRestoreCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      SpSsarRestoreCtrlFields::DISABLE> {
    using eCNT_MODE = SpSsarRestoreCtrlFields::eCNT_MODE;
    using STEP_CNT = SpSsarRestoreCtrlFields::STEP_CNT;
    using CNT_MODE = SpSsarRestoreCtrlFields::CNT_MODE;
    using DISABLE = SpSsarRestoreCtrlFields::DISABLE;
  };

};

}  // namespace regs