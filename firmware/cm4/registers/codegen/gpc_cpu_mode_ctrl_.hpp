#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_CPU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Gpc_cpu_mode_ctrl_ {
  static_assert(
        Instance == 0u || Instance == 1u,
        "Gpc_cpu_mode_ctrl_: Instance must be one of 0, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C00000u :
      Instance == 1u ? 0x40C00800u :
      0u;

  // CM Authentication Control
  struct CM_AUTHEN_CTRL_fields_ {
    enum class eUSER : std::uint32_t {
      // Allow only privilege mode to access CPU mode control registers
      eb0 = 0,
      // Allow both privilege and user mode to access CPU mode control registers
      eb1 = 1,
    };

    enum class eNONSECURE : std::uint32_t {
      // Allow only secure mode to access CPU mode control registers
      eb0 = 0,
      // Allow both secure and non-secure mode to access CPU mode control registers
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
  };  // struct CM_AUTHEN_CTRL_fields_

  struct CM_AUTHEN_CTRL : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000F00u,
      ftl::mmio::RW,
      typename CM_AUTHEN_CTRL_fields_::USER,
      typename CM_AUTHEN_CTRL_fields_::NONSECURE,
      ftl::mmio::Reserved<2, 2>,
      typename CM_AUTHEN_CTRL_fields_::LOCK_SETTING,
      ftl::mmio::Reserved<3, 5>,
      typename CM_AUTHEN_CTRL_fields_::WHITE_LIST,
      typename CM_AUTHEN_CTRL_fields_::LOCK_LIST,
      ftl::mmio::Reserved<7, 13>,
      typename CM_AUTHEN_CTRL_fields_::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using eUSER = typename CM_AUTHEN_CTRL_fields_::eUSER;
    using eNONSECURE = typename CM_AUTHEN_CTRL_fields_::eNONSECURE;
    using USER = typename CM_AUTHEN_CTRL_fields_::USER;
    using NONSECURE = typename CM_AUTHEN_CTRL_fields_::NONSECURE;
    using LOCK_SETTING = typename CM_AUTHEN_CTRL_fields_::LOCK_SETTING;
    using WHITE_LIST = typename CM_AUTHEN_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = typename CM_AUTHEN_CTRL_fields_::LOCK_LIST;
    using LOCK_CFG = typename CM_AUTHEN_CTRL_fields_::LOCK_CFG;
  };

  // CM Interrupt Control
  struct CM_INT_CTRL_fields_ {
    enum class eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN : std::uint32_t {
      // Interrupt disable
      eb0 = 0,
      // Interrupt enable
      eb1 = 1,
    };

    enum class eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN : std::uint32_t {
      // Interrupt disable
      eb0 = 0,
      // Interrupt enable
      eb1 = 1,
    };

    enum class eSP_REQ_NOT_ALLOWED_SOFT_INT_EN : std::uint32_t {
      // Interrupt disable
      eb0 = 0,
      // Interrupt enable
      eb1 = 1,
    };

    // sp_req_not_allowed_for_sleep interrupt enable
    using SP_REQ_NOT_ALLOWED_SLEEP_INT_EN = ftl::mmio::Field<1, 0, eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // sp_req_not_allowed_for_wakeup interrupt enable
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN = ftl::mmio::Field<1, 1, eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // sp_req_not_allowed_for_soft interrupt enable
    using SP_REQ_NOT_ALLOWED_SOFT_INT_EN = ftl::mmio::Field<1, 2, eSP_REQ_NOT_ALLOWED_SOFT_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // sp_req_not_allowed_for_sleep interrupt status and clear register
    using SP_REQ_NOT_ALLOWED_SLEEP_INT = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // sp_req_not_allowed_for_wakeup interrupt status and clear register
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // sp_req_not_allowed_for_soft interrupt status and clear register
    using SP_REQ_NOT_ALLOWED_SOFT_INT = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CM_INT_CTRL_fields_

  struct CM_INT_CTRL : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000007u,
      ftl::mmio::RW,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SLEEP_INT_EN,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SOFT_INT_EN,
      ftl::mmio::Reserved<13, 3>,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SLEEP_INT,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_WAKEUP_INT,
      typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SOFT_INT,
      ftl::mmio::Reserved<13, 19>> {
    using eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN = typename CM_INT_CTRL_fields_::eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN;
    using eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN = typename CM_INT_CTRL_fields_::eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN;
    using eSP_REQ_NOT_ALLOWED_SOFT_INT_EN = typename CM_INT_CTRL_fields_::eSP_REQ_NOT_ALLOWED_SOFT_INT_EN;
    using SP_REQ_NOT_ALLOWED_SLEEP_INT_EN = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SLEEP_INT_EN;
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN;
    using SP_REQ_NOT_ALLOWED_SOFT_INT_EN = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SOFT_INT_EN;
    using SP_REQ_NOT_ALLOWED_SLEEP_INT = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SLEEP_INT;
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_WAKEUP_INT;
    using SP_REQ_NOT_ALLOWED_SOFT_INT = typename CM_INT_CTRL_fields_::SP_REQ_NOT_ALLOWED_SOFT_INT;
  };

  // Miscellaneous
  struct CM_MISC_fields_ {
    enum class eNMI_STAT : std::uint32_t {
      // NMI is not asserting
      eb0 = 0,
      // NMI is asserting
      eb1 = 1,
    };

    enum class eSLEEP_HOLD_EN : std::uint32_t {
      // Disable cpu_sleep_hold_req
      eb0 = 0,
      // Allow cpu_sleep_hold_req assert during CPU low power status
      eb1 = 1,
    };

    // Non-masked interrupt status
    using NMI_STAT = ftl::mmio::Field<1, 0, eNMI_STAT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Allow cpu_sleep_hold_req assert during CPU low power status
    using SLEEP_HOLD_EN = ftl::mmio::Field<1, 1, eSLEEP_HOLD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Status of cpu_sleep_hold_ack_b
    using SLEEP_HOLD_STAT = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Master CPU
    using MASTER_CPU = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_MISC_fields_

  struct CM_MISC : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      typename CM_MISC_fields_::NMI_STAT,
      typename CM_MISC_fields_::SLEEP_HOLD_EN,
      typename CM_MISC_fields_::SLEEP_HOLD_STAT,
      ftl::mmio::Reserved<1, 3>,
      typename CM_MISC_fields_::MASTER_CPU,
      ftl::mmio::Reserved<27, 5>> {
    using eNMI_STAT = typename CM_MISC_fields_::eNMI_STAT;
    using eSLEEP_HOLD_EN = typename CM_MISC_fields_::eSLEEP_HOLD_EN;
    using NMI_STAT = typename CM_MISC_fields_::NMI_STAT;
    using SLEEP_HOLD_EN = typename CM_MISC_fields_::SLEEP_HOLD_EN;
    using SLEEP_HOLD_STAT = typename CM_MISC_fields_::SLEEP_HOLD_STAT;
    using MASTER_CPU = typename CM_MISC_fields_::MASTER_CPU;
  };

  // CPU mode control
  struct CM_MODE_CTRL_fields_ {
    enum class eCPU_MODE_TARGET : std::uint32_t {
      // Stay in RUN mode
      eb0 = 0,
      // Transit to WAIT mode
      eb1 = 1,
      // Transit to STOP mode
      eb2 = 2,
      // Transit to SUSPEND mode
      eb3 = 3,
    };

    enum class eWFE_EN : std::uint32_t {
      // WFE assertion can not trigger low power
      eb0 = 0,
      // WFE assertion can trigger low power
      eb1 = 1,
    };

    // The CPU mode the CPU platform should transit to on next sleep event
    using CPU_MODE_TARGET = ftl::mmio::Field<2, 0, eCPU_MODE_TARGET, ftl::mmio::RW, ftl::mmio::Normal>;
    // WFE assertion can be sleep event
    using WFE_EN = ftl::mmio::Field<1, 4, eWFE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_MODE_CTRL_fields_

  struct CM_MODE_CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_MODE_CTRL_fields_::CPU_MODE_TARGET,
      ftl::mmio::Reserved<2, 2>,
      typename CM_MODE_CTRL_fields_::WFE_EN,
      ftl::mmio::Reserved<27, 5>> {
    using eCPU_MODE_TARGET = typename CM_MODE_CTRL_fields_::eCPU_MODE_TARGET;
    using eWFE_EN = typename CM_MODE_CTRL_fields_::eWFE_EN;
    using CPU_MODE_TARGET = typename CM_MODE_CTRL_fields_::CPU_MODE_TARGET;
    using WFE_EN = typename CM_MODE_CTRL_fields_::WFE_EN;
  };

  // CM CPU mode Status
  struct CM_MODE_STAT_fields_ {
    enum class eCPU_MODE_CURRENT : std::uint32_t {
      // CPU is currently in RUN mode
      eRUN = 0,
      // CPU is currently in WAIT mode
      eWAIT = 1,
      // CPU is currently in STOP mode
      eSTOP = 2,
      // CPU is currently in SUSPEND mode
      eSUSPEND = 3,
    };

    enum class eCPU_MODE_PREVIOUS : std::uint32_t {
      // CPU was previously in RUN mode
      eRUN = 0,
      // CPU was previously in WAIT mode
      eWAIT = 1,
      // CPU was previously in STOP mode
      eSTOP = 2,
      // CPU was previously in SUSPEND mode
      eSUSPEND = 3,
    };

    // Current CPU mode
    using CPU_MODE_CURRENT = ftl::mmio::Field<2, 0, eCPU_MODE_CURRENT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Previous CPU mode
    using CPU_MODE_PREVIOUS = ftl::mmio::Field<2, 2, eCPU_MODE_PREVIOUS, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_MODE_STAT_fields_

  struct CM_MODE_STAT : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_MODE_STAT_fields_::CPU_MODE_CURRENT,
      typename CM_MODE_STAT_fields_::CPU_MODE_PREVIOUS,
      ftl::mmio::Reserved<28, 4>> {
    using eCPU_MODE_CURRENT = typename CM_MODE_STAT_fields_::eCPU_MODE_CURRENT;
    using eCPU_MODE_PREVIOUS = typename CM_MODE_STAT_fields_::eCPU_MODE_PREVIOUS;
    using CPU_MODE_CURRENT = typename CM_MODE_STAT_fields_::CPU_MODE_CURRENT;
    using CPU_MODE_PREVIOUS = typename CM_MODE_STAT_fields_::CPU_MODE_PREVIOUS;
  };

  // CM IRQ0~31 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_0_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_0_31 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_0_fields_

  struct CM_IRQ_WAKEUP_MASK_0 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_0_fields_::IRQ_WAKEUP_MASK_0_31> {
    using IRQ_WAKEUP_MASK_0_31 = typename CM_IRQ_WAKEUP_MASK_0_fields_::IRQ_WAKEUP_MASK_0_31;
  };

  // CM IRQ32~63 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_1_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_32_63 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_1_fields_

  struct CM_IRQ_WAKEUP_MASK_1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_1_fields_::IRQ_WAKEUP_MASK_32_63> {
    using IRQ_WAKEUP_MASK_32_63 = typename CM_IRQ_WAKEUP_MASK_1_fields_::IRQ_WAKEUP_MASK_32_63;
  };

  // CM IRQ64~95 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_2_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_64_95 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_2_fields_

  struct CM_IRQ_WAKEUP_MASK_2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_2_fields_::IRQ_WAKEUP_MASK_64_95> {
    using IRQ_WAKEUP_MASK_64_95 = typename CM_IRQ_WAKEUP_MASK_2_fields_::IRQ_WAKEUP_MASK_64_95;
  };

  // CM IRQ96~127 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_3_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_96_127 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_3_fields_

  struct CM_IRQ_WAKEUP_MASK_3 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_3_fields_::IRQ_WAKEUP_MASK_96_127> {
    using IRQ_WAKEUP_MASK_96_127 = typename CM_IRQ_WAKEUP_MASK_3_fields_::IRQ_WAKEUP_MASK_96_127;
  };

  // CM IRQ128~159 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_4_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_128_159 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_4_fields_

  struct CM_IRQ_WAKEUP_MASK_4 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_4_fields_::IRQ_WAKEUP_MASK_128_159> {
    using IRQ_WAKEUP_MASK_128_159 = typename CM_IRQ_WAKEUP_MASK_4_fields_::IRQ_WAKEUP_MASK_128_159;
  };

  // CM IRQ160~191 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_5_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_160_191 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_5_fields_

  struct CM_IRQ_WAKEUP_MASK_5 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_5_fields_::IRQ_WAKEUP_MASK_160_191> {
    using IRQ_WAKEUP_MASK_160_191 = typename CM_IRQ_WAKEUP_MASK_5_fields_::IRQ_WAKEUP_MASK_160_191;
  };

  // CM IRQ192~223 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_6_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_192_223 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_6_fields_

  struct CM_IRQ_WAKEUP_MASK_6 : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_6_fields_::IRQ_WAKEUP_MASK_192_223> {
    using IRQ_WAKEUP_MASK_192_223 = typename CM_IRQ_WAKEUP_MASK_6_fields_::IRQ_WAKEUP_MASK_192_223;
  };

  // CM IRQ224~255 wakeup mask
  struct CM_IRQ_WAKEUP_MASK_7_fields_ {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_224_255 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_MASK_7_fields_

  struct CM_IRQ_WAKEUP_MASK_7 : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_IRQ_WAKEUP_MASK_7_fields_::IRQ_WAKEUP_MASK_224_255> {
    using IRQ_WAKEUP_MASK_224_255 = typename CM_IRQ_WAKEUP_MASK_7_fields_::IRQ_WAKEUP_MASK_224_255;
  };

  // CM non-irq wakeup mask
  struct CM_NON_IRQ_WAKEUP_MASK_fields_ {
    enum class eEVENT_WAKEUP_MASK : std::uint32_t {
      // The event cannot wakeup CPU platform
      eb1 = 1,
    };

    // There are 256 interrupts and 1 event as a wakeup source for GPC. This field masks the 1 event wakeup source.
    using EVENT_WAKEUP_MASK = ftl::mmio::Field<1, 0, eEVENT_WAKEUP_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // "1" means the debug_wakeup_request cannot wakeup CPU platform
    using DEBUG_WAKEUP_MASK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_NON_IRQ_WAKEUP_MASK_fields_

  struct CM_NON_IRQ_WAKEUP_MASK : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename CM_NON_IRQ_WAKEUP_MASK_fields_::EVENT_WAKEUP_MASK,
      typename CM_NON_IRQ_WAKEUP_MASK_fields_::DEBUG_WAKEUP_MASK,
      ftl::mmio::Reserved<30, 2>> {
    using eEVENT_WAKEUP_MASK = typename CM_NON_IRQ_WAKEUP_MASK_fields_::eEVENT_WAKEUP_MASK;
    using EVENT_WAKEUP_MASK = typename CM_NON_IRQ_WAKEUP_MASK_fields_::EVENT_WAKEUP_MASK;
    using DEBUG_WAKEUP_MASK = typename CM_NON_IRQ_WAKEUP_MASK_fields_::DEBUG_WAKEUP_MASK;
  };

  // CM IRQ0~31 wakeup status
  struct CM_IRQ_WAKEUP_STAT_0_fields_ {
    enum class eIRQ_WAKEUP_STAT_0_31 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_0_31 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_0_31, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_0_fields_

  struct CM_IRQ_WAKEUP_STAT_0 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_0_fields_::IRQ_WAKEUP_STAT_0_31> {
    using eIRQ_WAKEUP_STAT_0_31 = typename CM_IRQ_WAKEUP_STAT_0_fields_::eIRQ_WAKEUP_STAT_0_31;
    using IRQ_WAKEUP_STAT_0_31 = typename CM_IRQ_WAKEUP_STAT_0_fields_::IRQ_WAKEUP_STAT_0_31;
  };

  // CM IRQ32~63 wakeup status
  struct CM_IRQ_WAKEUP_STAT_1_fields_ {
    enum class eIRQ_WAKEUP_STAT_32_63 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_32_63 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_32_63, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_1_fields_

  struct CM_IRQ_WAKEUP_STAT_1 : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_1_fields_::IRQ_WAKEUP_STAT_32_63> {
    using eIRQ_WAKEUP_STAT_32_63 = typename CM_IRQ_WAKEUP_STAT_1_fields_::eIRQ_WAKEUP_STAT_32_63;
    using IRQ_WAKEUP_STAT_32_63 = typename CM_IRQ_WAKEUP_STAT_1_fields_::IRQ_WAKEUP_STAT_32_63;
  };

  // CM IRQ64~95 wakeup status
  struct CM_IRQ_WAKEUP_STAT_2_fields_ {
    enum class eIRQ_WAKEUP_STAT_64_95 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_64_95 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_64_95, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_2_fields_

  struct CM_IRQ_WAKEUP_STAT_2 : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_2_fields_::IRQ_WAKEUP_STAT_64_95> {
    using eIRQ_WAKEUP_STAT_64_95 = typename CM_IRQ_WAKEUP_STAT_2_fields_::eIRQ_WAKEUP_STAT_64_95;
    using IRQ_WAKEUP_STAT_64_95 = typename CM_IRQ_WAKEUP_STAT_2_fields_::IRQ_WAKEUP_STAT_64_95;
  };

  // CM IRQ96~127 wakeup status
  struct CM_IRQ_WAKEUP_STAT_3_fields_ {
    enum class eIRQ_WAKEUP_STAT_96_127 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_96_127 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_96_127, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_3_fields_

  struct CM_IRQ_WAKEUP_STAT_3 : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_3_fields_::IRQ_WAKEUP_STAT_96_127> {
    using eIRQ_WAKEUP_STAT_96_127 = typename CM_IRQ_WAKEUP_STAT_3_fields_::eIRQ_WAKEUP_STAT_96_127;
    using IRQ_WAKEUP_STAT_96_127 = typename CM_IRQ_WAKEUP_STAT_3_fields_::IRQ_WAKEUP_STAT_96_127;
  };

  // CM IRQ128~159 wakeup status
  struct CM_IRQ_WAKEUP_STAT_4_fields_ {
    enum class eIRQ_WAKEUP_STAT_128_159 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_128_159 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_128_159, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_4_fields_

  struct CM_IRQ_WAKEUP_STAT_4 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_4_fields_::IRQ_WAKEUP_STAT_128_159> {
    using eIRQ_WAKEUP_STAT_128_159 = typename CM_IRQ_WAKEUP_STAT_4_fields_::eIRQ_WAKEUP_STAT_128_159;
    using IRQ_WAKEUP_STAT_128_159 = typename CM_IRQ_WAKEUP_STAT_4_fields_::IRQ_WAKEUP_STAT_128_159;
  };

  // CM IRQ160~191 wakeup status
  struct CM_IRQ_WAKEUP_STAT_5_fields_ {
    enum class eIRQ_WAKEUP_STAT_160_191 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_160_191 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_160_191, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_5_fields_

  struct CM_IRQ_WAKEUP_STAT_5 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_5_fields_::IRQ_WAKEUP_STAT_160_191> {
    using eIRQ_WAKEUP_STAT_160_191 = typename CM_IRQ_WAKEUP_STAT_5_fields_::eIRQ_WAKEUP_STAT_160_191;
    using IRQ_WAKEUP_STAT_160_191 = typename CM_IRQ_WAKEUP_STAT_5_fields_::IRQ_WAKEUP_STAT_160_191;
  };

  // CM IRQ192~223 wakeup status
  struct CM_IRQ_WAKEUP_STAT_6_fields_ {
    enum class eIRQ_WAKEUP_STAT_192_223 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_192_223 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_192_223, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_6_fields_

  struct CM_IRQ_WAKEUP_STAT_6 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_6_fields_::IRQ_WAKEUP_STAT_192_223> {
    using eIRQ_WAKEUP_STAT_192_223 = typename CM_IRQ_WAKEUP_STAT_6_fields_::eIRQ_WAKEUP_STAT_192_223;
    using IRQ_WAKEUP_STAT_192_223 = typename CM_IRQ_WAKEUP_STAT_6_fields_::IRQ_WAKEUP_STAT_192_223;
  };

  // CM IRQ224~255 wakeup status
  struct CM_IRQ_WAKEUP_STAT_7_fields_ {
    enum class eIRQ_WAKEUP_MASK_224_255 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_MASK_224_255 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_MASK_224_255, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_IRQ_WAKEUP_STAT_7_fields_

  struct CM_IRQ_WAKEUP_STAT_7 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_IRQ_WAKEUP_STAT_7_fields_::IRQ_WAKEUP_MASK_224_255> {
    using eIRQ_WAKEUP_MASK_224_255 = typename CM_IRQ_WAKEUP_STAT_7_fields_::eIRQ_WAKEUP_MASK_224_255;
    using IRQ_WAKEUP_MASK_224_255 = typename CM_IRQ_WAKEUP_STAT_7_fields_::IRQ_WAKEUP_MASK_224_255;
  };

  // CM non-irq wakeup status
  struct CM_NON_IRQ_WAKEUP_STAT_fields_ {
    enum class eEVENT_WAKEUP_STAT : std::uint32_t {
      // Interrupt is asserting (pending)
      eb1 = 1,
    };

    // Event wakeup status
    using EVENT_WAKEUP_STAT = ftl::mmio::Field<1, 0, eEVENT_WAKEUP_STAT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Debug wakeup status
    using DEBUG_WAKEUP_STAT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_NON_IRQ_WAKEUP_STAT_fields_

  struct CM_NON_IRQ_WAKEUP_STAT : ftl::mmio::Register<
      kBase + 0x190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_NON_IRQ_WAKEUP_STAT_fields_::EVENT_WAKEUP_STAT,
      typename CM_NON_IRQ_WAKEUP_STAT_fields_::DEBUG_WAKEUP_STAT,
      ftl::mmio::Reserved<30, 2>> {
    using eEVENT_WAKEUP_STAT = typename CM_NON_IRQ_WAKEUP_STAT_fields_::eEVENT_WAKEUP_STAT;
    using EVENT_WAKEUP_STAT = typename CM_NON_IRQ_WAKEUP_STAT_fields_::EVENT_WAKEUP_STAT;
    using DEBUG_WAKEUP_STAT = typename CM_NON_IRQ_WAKEUP_STAT_fields_::DEBUG_WAKEUP_STAT;
  };

  // CM sleep SSAR control
  struct CM_SLEEP_SSAR_CTRL_fields_ {
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

    // Step count, useage is depending on CNT_MODE.
    using STEP_CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count mode
    using CNT_MODE = ftl::mmio::Field<2, 28, eCNT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable this step
    using DISABLE = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SLEEP_SSAR_CTRL_fields_

  struct CM_SLEEP_SSAR_CTRL : ftl::mmio::Register<
      kBase + 0x200u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_SSAR_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_SSAR_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_SSAR_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_SSAR_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_SSAR_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_SSAR_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_SSAR_CTRL_fields_::DISABLE;
  };

  // CM sleep LPCG control
  struct CM_SLEEP_LPCG_CTRL_fields_ {
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
  };  // struct CM_SLEEP_LPCG_CTRL_fields_

  struct CM_SLEEP_LPCG_CTRL : ftl::mmio::Register<
      kBase + 0x208u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_LPCG_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_LPCG_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_LPCG_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_LPCG_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_LPCG_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_LPCG_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_LPCG_CTRL_fields_::DISABLE;
  };

  // CM sleep PLL control
  struct CM_SLEEP_PLL_CTRL_fields_ {
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
  };  // struct CM_SLEEP_PLL_CTRL_fields_

  struct CM_SLEEP_PLL_CTRL : ftl::mmio::Register<
      kBase + 0x210u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_PLL_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_PLL_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_PLL_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_PLL_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_PLL_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_PLL_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_PLL_CTRL_fields_::DISABLE;
  };

  // CM sleep isolation control
  struct CM_SLEEP_ISO_CTRL_fields_ {
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
  };  // struct CM_SLEEP_ISO_CTRL_fields_

  struct CM_SLEEP_ISO_CTRL : ftl::mmio::Register<
      kBase + 0x218u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_ISO_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_ISO_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_ISO_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_ISO_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_ISO_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_ISO_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_ISO_CTRL_fields_::DISABLE;
  };

  // CM sleep reset control
  struct CM_SLEEP_RESET_CTRL_fields_ {
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
  };  // struct CM_SLEEP_RESET_CTRL_fields_

  struct CM_SLEEP_RESET_CTRL : ftl::mmio::Register<
      kBase + 0x220u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_RESET_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_RESET_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_RESET_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_RESET_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_RESET_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_RESET_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_RESET_CTRL_fields_::DISABLE;
  };

  // CM sleep power control
  struct CM_SLEEP_POWER_CTRL_fields_ {
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
  };  // struct CM_SLEEP_POWER_CTRL_fields_

  struct CM_SLEEP_POWER_CTRL : ftl::mmio::Register<
      kBase + 0x228u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_SLEEP_POWER_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_SLEEP_POWER_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_SLEEP_POWER_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_SLEEP_POWER_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_SLEEP_POWER_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_SLEEP_POWER_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_SLEEP_POWER_CTRL_fields_::DISABLE;
  };

  // CM wakeup power control
  struct CM_WAKEUP_POWER_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_POWER_CTRL_fields_

  struct CM_WAKEUP_POWER_CTRL : ftl::mmio::Register<
      kBase + 0x290u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_POWER_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_POWER_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_POWER_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_POWER_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_POWER_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_POWER_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_POWER_CTRL_fields_::DISABLE;
  };

  // CM wakeup reset control
  struct CM_WAKEUP_RESET_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_RESET_CTRL_fields_

  struct CM_WAKEUP_RESET_CTRL : ftl::mmio::Register<
      kBase + 0x298u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_RESET_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_RESET_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_RESET_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_RESET_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_RESET_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_RESET_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_RESET_CTRL_fields_::DISABLE;
  };

  // CM wakeup isolation control
  struct CM_WAKEUP_ISO_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_ISO_CTRL_fields_

  struct CM_WAKEUP_ISO_CTRL : ftl::mmio::Register<
      kBase + 0x2A0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_ISO_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_ISO_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_ISO_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_ISO_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_ISO_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_ISO_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_ISO_CTRL_fields_::DISABLE;
  };

  // CM wakeup PLL control
  struct CM_WAKEUP_PLL_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_PLL_CTRL_fields_

  struct CM_WAKEUP_PLL_CTRL : ftl::mmio::Register<
      kBase + 0x2A8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_PLL_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_PLL_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_PLL_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_PLL_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_PLL_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_PLL_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_PLL_CTRL_fields_::DISABLE;
  };

  // CM wakeup LPCG control
  struct CM_WAKEUP_LPCG_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_LPCG_CTRL_fields_

  struct CM_WAKEUP_LPCG_CTRL : ftl::mmio::Register<
      kBase + 0x2B0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_LPCG_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_LPCG_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_LPCG_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_LPCG_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_LPCG_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_LPCG_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_LPCG_CTRL_fields_::DISABLE;
  };

  // CM wakeup SSAR control
  struct CM_WAKEUP_SSAR_CTRL_fields_ {
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
  };  // struct CM_WAKEUP_SSAR_CTRL_fields_

  struct CM_WAKEUP_SSAR_CTRL : ftl::mmio::Register<
      kBase + 0x2B8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CM_WAKEUP_SSAR_CTRL_fields_::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CM_WAKEUP_SSAR_CTRL_fields_::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CM_WAKEUP_SSAR_CTRL_fields_::DISABLE> {
    using eCNT_MODE = typename CM_WAKEUP_SSAR_CTRL_fields_::eCNT_MODE;
    using STEP_CNT = typename CM_WAKEUP_SSAR_CTRL_fields_::STEP_CNT;
    using CNT_MODE = typename CM_WAKEUP_SSAR_CTRL_fields_::CNT_MODE;
    using DISABLE = typename CM_WAKEUP_SSAR_CTRL_fields_::DISABLE;
  };

  // CM Setpoint Control
  struct CM_SP_CTRL_fields_ {
    enum class eCPU_SP_WAKEUP_SEL : std::uint32_t {
      // Request SP transition to CPU_SP_WAKEUP
      eb0 = 0,
      // Request SP transition to the Setpoint when the sleep event happens, which is captured in CPU_SP_PREVIOUS
      eb1 = 1,
    };

    // Request a Setpoint transition when this bit is set
    using CPU_SP_RUN_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The Setpoint that CPU want the system to transit to when CPU_SP_RUN_EN is set
    using CPU_SP_RUN = ftl::mmio::Field<4, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // 1 means enable Setpoint transition on next CPU platform sleep sequence
    using CPU_SP_SLEEP_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The Setpoint that CPU want the system to transit to on next CPU platform sleep sequence
    using CPU_SP_SLEEP = ftl::mmio::Field<4, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // 1 means enable Setpoint transition on next CPU platform wakeup sequence
    using CPU_SP_WAKEUP_EN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // The Setpoint that CPU want the system to transit to on next CPU platform wakeup sequence
    using CPU_SP_WAKEUP = ftl::mmio::Field<4, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select the Setpoint transiton on the next CPU platform wakeup sequence
    using CPU_SP_WAKEUP_SEL = ftl::mmio::Field<1, 15, eCPU_SP_WAKEUP_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP_CTRL_fields_

  struct CM_SP_CTRL : ftl::mmio::Register<
      kBase + 0x300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_SP_CTRL_fields_::CPU_SP_RUN_EN,
      typename CM_SP_CTRL_fields_::CPU_SP_RUN,
      typename CM_SP_CTRL_fields_::CPU_SP_SLEEP_EN,
      typename CM_SP_CTRL_fields_::CPU_SP_SLEEP,
      typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP_EN,
      typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP,
      typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using eCPU_SP_WAKEUP_SEL = typename CM_SP_CTRL_fields_::eCPU_SP_WAKEUP_SEL;
    using CPU_SP_RUN_EN = typename CM_SP_CTRL_fields_::CPU_SP_RUN_EN;
    using CPU_SP_RUN = typename CM_SP_CTRL_fields_::CPU_SP_RUN;
    using CPU_SP_SLEEP_EN = typename CM_SP_CTRL_fields_::CPU_SP_SLEEP_EN;
    using CPU_SP_SLEEP = typename CM_SP_CTRL_fields_::CPU_SP_SLEEP;
    using CPU_SP_WAKEUP_EN = typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP_EN;
    using CPU_SP_WAKEUP = typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP;
    using CPU_SP_WAKEUP_SEL = typename CM_SP_CTRL_fields_::CPU_SP_WAKEUP_SEL;
  };

  // CM Setpoint Status
  struct CM_SP_STAT_fields_ {
    // The current Setpoint of the system
    using CPU_SP_CURRENT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // The previous Setpoint of the system
    using CPU_SP_PREVIOUS = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // The requested Setpoint from the CPU platform
    using CPU_SP_TARGET = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_SP_STAT_fields_

  struct CM_SP_STAT : ftl::mmio::Register<
      kBase + 0x304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CM_SP_STAT_fields_::CPU_SP_CURRENT,
      typename CM_SP_STAT_fields_::CPU_SP_PREVIOUS,
      typename CM_SP_STAT_fields_::CPU_SP_TARGET,
      ftl::mmio::Reserved<20, 12>> {
    using CPU_SP_CURRENT = typename CM_SP_STAT_fields_::CPU_SP_CURRENT;
    using CPU_SP_PREVIOUS = typename CM_SP_STAT_fields_::CPU_SP_PREVIOUS;
    using CPU_SP_TARGET = typename CM_SP_STAT_fields_::CPU_SP_TARGET;
  };

  // CM Run Mode Setpoint Allowed
  struct CM_RUN_MODE_MAPPING_fields_ {
    // Defines which Setpoint is allowed when CPU enters RUN mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG field
    using CPU_RUN_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_RUN_MODE_MAPPING_fields_

  struct CM_RUN_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x310u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_RUN_MODE_MAPPING_fields_::CPU_RUN_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_RUN_MODE_MAPPING = typename CM_RUN_MODE_MAPPING_fields_::CPU_RUN_MODE_MAPPING;
  };

  // CM Wait Mode Setpoint Allowed
  struct CM_WAIT_MODE_MAPPING_fields_ {
    // Defines which Setpoint is allowed when CPU enters WAIT mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_WAIT_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_WAIT_MODE_MAPPING_fields_

  struct CM_WAIT_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x314u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_WAIT_MODE_MAPPING_fields_::CPU_WAIT_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_WAIT_MODE_MAPPING = typename CM_WAIT_MODE_MAPPING_fields_::CPU_WAIT_MODE_MAPPING;
  };

  // CM Stop Mode Setpoint Allowed
  struct CM_STOP_MODE_MAPPING_fields_ {
    // Defines which Setpoint is allowed when CPU enters STOP mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_STOP_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_STOP_MODE_MAPPING_fields_

  struct CM_STOP_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x318u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_STOP_MODE_MAPPING_fields_::CPU_STOP_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_STOP_MODE_MAPPING = typename CM_STOP_MODE_MAPPING_fields_::CPU_STOP_MODE_MAPPING;
  };

  // CM Suspend Mode Setpoint Allowed
  struct CM_SUSPEND_MODE_MAPPING_fields_ {
    // Defines which Setpoint is allowed when CPU enters SUSPEND mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_SUSPEND_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SUSPEND_MODE_MAPPING_fields_

  struct CM_SUSPEND_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x31Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SUSPEND_MODE_MAPPING_fields_::CPU_SUSPEND_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SUSPEND_MODE_MAPPING = typename CM_SUSPEND_MODE_MAPPING_fields_::CPU_SUSPEND_MODE_MAPPING;
  };

  // CM Setpoint 0 Mapping
  struct CM_SP0_MAPPING_fields_ {
    // Defines when SP0 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP0_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP0_MAPPING_fields_

  struct CM_SP0_MAPPING : ftl::mmio::Register<
      kBase + 0x320u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP0_MAPPING_fields_::CPU_SP0_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP0_MAPPING = typename CM_SP0_MAPPING_fields_::CPU_SP0_MAPPING;
  };

  // CM Setpoint 1 Mapping
  struct CM_SP1_MAPPING_fields_ {
    // Defines when SP1 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP1_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP1_MAPPING_fields_

  struct CM_SP1_MAPPING : ftl::mmio::Register<
      kBase + 0x324u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP1_MAPPING_fields_::CPU_SP1_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP1_MAPPING = typename CM_SP1_MAPPING_fields_::CPU_SP1_MAPPING;
  };

  // CM Setpoint 2 Mapping
  struct CM_SP2_MAPPING_fields_ {
    // Defines when SP2 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP2_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP2_MAPPING_fields_

  struct CM_SP2_MAPPING : ftl::mmio::Register<
      kBase + 0x328u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP2_MAPPING_fields_::CPU_SP2_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP2_MAPPING = typename CM_SP2_MAPPING_fields_::CPU_SP2_MAPPING;
  };

  // CM Setpoint 3 Mapping
  struct CM_SP3_MAPPING_fields_ {
    // Defines when SP3 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP3_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP3_MAPPING_fields_

  struct CM_SP3_MAPPING : ftl::mmio::Register<
      kBase + 0x32Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP3_MAPPING_fields_::CPU_SP3_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP3_MAPPING = typename CM_SP3_MAPPING_fields_::CPU_SP3_MAPPING;
  };

  // CM Setpoint 4 Mapping
  struct CM_SP4_MAPPING_fields_ {
    // Defines when SP4 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP4_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP4_MAPPING_fields_

  struct CM_SP4_MAPPING : ftl::mmio::Register<
      kBase + 0x330u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP4_MAPPING_fields_::CPU_SP4_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP4_MAPPING = typename CM_SP4_MAPPING_fields_::CPU_SP4_MAPPING;
  };

  // CM Setpoint 5 Mapping
  struct CM_SP5_MAPPING_fields_ {
    // Defines when SP5 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP5_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP5_MAPPING_fields_

  struct CM_SP5_MAPPING : ftl::mmio::Register<
      kBase + 0x334u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP5_MAPPING_fields_::CPU_SP5_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP5_MAPPING = typename CM_SP5_MAPPING_fields_::CPU_SP5_MAPPING;
  };

  // CM Setpoint 6 Mapping
  struct CM_SP6_MAPPING_fields_ {
    // Defines when SP6 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP6_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP6_MAPPING_fields_

  struct CM_SP6_MAPPING : ftl::mmio::Register<
      kBase + 0x338u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP6_MAPPING_fields_::CPU_SP6_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP6_MAPPING = typename CM_SP6_MAPPING_fields_::CPU_SP6_MAPPING;
  };

  // CM Setpoint 7 Mapping
  struct CM_SP7_MAPPING_fields_ {
    // Defines when SP7 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP7_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP7_MAPPING_fields_

  struct CM_SP7_MAPPING : ftl::mmio::Register<
      kBase + 0x33Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP7_MAPPING_fields_::CPU_SP7_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP7_MAPPING = typename CM_SP7_MAPPING_fields_::CPU_SP7_MAPPING;
  };

  // CM Setpoint 8 Mapping
  struct CM_SP8_MAPPING_fields_ {
    // Defines when SP8 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP8_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP8_MAPPING_fields_

  struct CM_SP8_MAPPING : ftl::mmio::Register<
      kBase + 0x340u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP8_MAPPING_fields_::CPU_SP8_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP8_MAPPING = typename CM_SP8_MAPPING_fields_::CPU_SP8_MAPPING;
  };

  // CM Setpoint 9 Mapping
  struct CM_SP9_MAPPING_fields_ {
    // Defines when SP9 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP9_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP9_MAPPING_fields_

  struct CM_SP9_MAPPING : ftl::mmio::Register<
      kBase + 0x344u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP9_MAPPING_fields_::CPU_SP9_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP9_MAPPING = typename CM_SP9_MAPPING_fields_::CPU_SP9_MAPPING;
  };

  // CM Setpoint 10 Mapping
  struct CM_SP10_MAPPING_fields_ {
    // Defines when SP10 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP10_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP10_MAPPING_fields_

  struct CM_SP10_MAPPING : ftl::mmio::Register<
      kBase + 0x348u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP10_MAPPING_fields_::CPU_SP10_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP10_MAPPING = typename CM_SP10_MAPPING_fields_::CPU_SP10_MAPPING;
  };

  // CM Setpoint 11 Mapping
  struct CM_SP11_MAPPING_fields_ {
    // Defines when SP11 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP11_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP11_MAPPING_fields_

  struct CM_SP11_MAPPING : ftl::mmio::Register<
      kBase + 0x34Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP11_MAPPING_fields_::CPU_SP11_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP11_MAPPING = typename CM_SP11_MAPPING_fields_::CPU_SP11_MAPPING;
  };

  // CM Setpoint 12 Mapping
  struct CM_SP12_MAPPING_fields_ {
    // Defines when SP12 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP12_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP12_MAPPING_fields_

  struct CM_SP12_MAPPING : ftl::mmio::Register<
      kBase + 0x350u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP12_MAPPING_fields_::CPU_SP12_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP12_MAPPING = typename CM_SP12_MAPPING_fields_::CPU_SP12_MAPPING;
  };

  // CM Setpoint 13 Mapping
  struct CM_SP13_MAPPING_fields_ {
    // Defines when SP13 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP13_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP13_MAPPING_fields_

  struct CM_SP13_MAPPING : ftl::mmio::Register<
      kBase + 0x354u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP13_MAPPING_fields_::CPU_SP13_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP13_MAPPING = typename CM_SP13_MAPPING_fields_::CPU_SP13_MAPPING;
  };

  // CM Setpoint 14 Mapping
  struct CM_SP14_MAPPING_fields_ {
    // Defines when SP14 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP14_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP14_MAPPING_fields_

  struct CM_SP14_MAPPING : ftl::mmio::Register<
      kBase + 0x358u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP14_MAPPING_fields_::CPU_SP14_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP14_MAPPING = typename CM_SP14_MAPPING_fields_::CPU_SP14_MAPPING;
  };

  // CM Setpoint 15 Mapping
  struct CM_SP15_MAPPING_fields_ {
    // Defines when SP15 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP15_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CM_SP15_MAPPING_fields_

  struct CM_SP15_MAPPING : ftl::mmio::Register<
      kBase + 0x35Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CM_SP15_MAPPING_fields_::CPU_SP15_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP15_MAPPING = typename CM_SP15_MAPPING_fields_::CPU_SP15_MAPPING;
  };

  // CM standby control
  struct CM_STBY_CTRL_fields_ {
    // 0x1: Request the chip into standby mode when CPU entering WAIT mode, locked by LOCK_CFG field.
    using STBY_WAIT = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0x1: Request the chip into standby mode when CPU entering STOP mode, locked by LOCK_CFG field.
    using STBY_STOP = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // 0x1: Request the chip into standby mode when CPU entering SUSPEND mode, locked by LOCK_CFG field.
    using STBY_SUSPEND = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicate the CPU is busy entering standby mode.
    using STBY_SLEEP_BUSY = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicate the CPU is busy exiting standby mode.
    using STBY_WAKEUP_BUSY = ftl::mmio::Field<1, 17, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CM_STBY_CTRL_fields_

  struct CM_STBY_CTRL : ftl::mmio::Register<
      kBase + 0x380u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CM_STBY_CTRL_fields_::STBY_WAIT,
      typename CM_STBY_CTRL_fields_::STBY_STOP,
      typename CM_STBY_CTRL_fields_::STBY_SUSPEND,
      ftl::mmio::Reserved<13, 3>,
      typename CM_STBY_CTRL_fields_::STBY_SLEEP_BUSY,
      typename CM_STBY_CTRL_fields_::STBY_WAKEUP_BUSY,
      ftl::mmio::Reserved<14, 18>> {
    using STBY_WAIT = typename CM_STBY_CTRL_fields_::STBY_WAIT;
    using STBY_STOP = typename CM_STBY_CTRL_fields_::STBY_STOP;
    using STBY_SUSPEND = typename CM_STBY_CTRL_fields_::STBY_SUSPEND;
    using STBY_SLEEP_BUSY = typename CM_STBY_CTRL_fields_::STBY_SLEEP_BUSY;
    using STBY_WAKEUP_BUSY = typename CM_STBY_CTRL_fields_::STBY_WAKEUP_BUSY;
  };

};

}  // namespace regs