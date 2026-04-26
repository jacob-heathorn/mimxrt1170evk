#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPC_CPU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct GpcCpuModeCtrl {
  static_assert(
        Instance == 0u || Instance == 1u,
        "GpcCpuModeCtrl: Instance must be one of 0, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C00000u :
      Instance == 1u ? 0x40C00800u :
      0u;

  // CM Authentication Control
  struct CmAuthenCtrlFields {
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
  };  // struct CmAuthenCtrlFields

  struct CM_AUTHEN_CTRL : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000F00u,
      ftl::mmio::RW,
      typename CmAuthenCtrlFields::USER,
      typename CmAuthenCtrlFields::NONSECURE,
      ftl::mmio::Reserved<2, 2>,
      typename CmAuthenCtrlFields::LOCK_SETTING,
      ftl::mmio::Reserved<3, 5>,
      typename CmAuthenCtrlFields::WHITE_LIST,
      typename CmAuthenCtrlFields::LOCK_LIST,
      ftl::mmio::Reserved<7, 13>,
      typename CmAuthenCtrlFields::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using eUSER = typename CmAuthenCtrlFields::eUSER;
    using eNONSECURE = typename CmAuthenCtrlFields::eNONSECURE;
    using USER = typename CmAuthenCtrlFields::USER;
    using NONSECURE = typename CmAuthenCtrlFields::NONSECURE;
    using LOCK_SETTING = typename CmAuthenCtrlFields::LOCK_SETTING;
    using WHITE_LIST = typename CmAuthenCtrlFields::WHITE_LIST;
    using LOCK_LIST = typename CmAuthenCtrlFields::LOCK_LIST;
    using LOCK_CFG = typename CmAuthenCtrlFields::LOCK_CFG;
  };

  // CM Interrupt Control
  struct CmIntCtrlFields {
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
  };  // struct CmIntCtrlFields

  struct CM_INT_CTRL : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000007u,
      ftl::mmio::RW,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SLEEP_INT_EN,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SOFT_INT_EN,
      ftl::mmio::Reserved<13, 3>,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SLEEP_INT,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_WAKEUP_INT,
      typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SOFT_INT,
      ftl::mmio::Reserved<13, 19>> {
    using eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN = typename CmIntCtrlFields::eSP_REQ_NOT_ALLOWED_SLEEP_INT_EN;
    using eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN = typename CmIntCtrlFields::eSP_REQ_NOT_ALLOWED_WAKEUP_INT_EN;
    using eSP_REQ_NOT_ALLOWED_SOFT_INT_EN = typename CmIntCtrlFields::eSP_REQ_NOT_ALLOWED_SOFT_INT_EN;
    using SP_REQ_NOT_ALLOWED_SLEEP_INT_EN = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SLEEP_INT_EN;
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_WAKEUP_INT_EN;
    using SP_REQ_NOT_ALLOWED_SOFT_INT_EN = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SOFT_INT_EN;
    using SP_REQ_NOT_ALLOWED_SLEEP_INT = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SLEEP_INT;
    using SP_REQ_NOT_ALLOWED_WAKEUP_INT = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_WAKEUP_INT;
    using SP_REQ_NOT_ALLOWED_SOFT_INT = typename CmIntCtrlFields::SP_REQ_NOT_ALLOWED_SOFT_INT;
  };

  // Miscellaneous
  struct CmMiscFields {
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
  };  // struct CmMiscFields

  struct CM_MISC : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      typename CmMiscFields::NMI_STAT,
      typename CmMiscFields::SLEEP_HOLD_EN,
      typename CmMiscFields::SLEEP_HOLD_STAT,
      ftl::mmio::Reserved<1, 3>,
      typename CmMiscFields::MASTER_CPU,
      ftl::mmio::Reserved<27, 5>> {
    using eNMI_STAT = typename CmMiscFields::eNMI_STAT;
    using eSLEEP_HOLD_EN = typename CmMiscFields::eSLEEP_HOLD_EN;
    using NMI_STAT = typename CmMiscFields::NMI_STAT;
    using SLEEP_HOLD_EN = typename CmMiscFields::SLEEP_HOLD_EN;
    using SLEEP_HOLD_STAT = typename CmMiscFields::SLEEP_HOLD_STAT;
    using MASTER_CPU = typename CmMiscFields::MASTER_CPU;
  };

  // CPU mode control
  struct CmModeCtrlFields {
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
  };  // struct CmModeCtrlFields

  struct CM_MODE_CTRL : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmModeCtrlFields::CPU_MODE_TARGET,
      ftl::mmio::Reserved<2, 2>,
      typename CmModeCtrlFields::WFE_EN,
      ftl::mmio::Reserved<27, 5>> {
    using eCPU_MODE_TARGET = typename CmModeCtrlFields::eCPU_MODE_TARGET;
    using eWFE_EN = typename CmModeCtrlFields::eWFE_EN;
    using CPU_MODE_TARGET = typename CmModeCtrlFields::CPU_MODE_TARGET;
    using WFE_EN = typename CmModeCtrlFields::WFE_EN;
  };

  // CM CPU mode Status
  struct CmModeStatFields {
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
  };  // struct CmModeStatFields

  struct CM_MODE_STAT : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmModeStatFields::CPU_MODE_CURRENT,
      typename CmModeStatFields::CPU_MODE_PREVIOUS,
      ftl::mmio::Reserved<28, 4>> {
    using eCPU_MODE_CURRENT = typename CmModeStatFields::eCPU_MODE_CURRENT;
    using eCPU_MODE_PREVIOUS = typename CmModeStatFields::eCPU_MODE_PREVIOUS;
    using CPU_MODE_CURRENT = typename CmModeStatFields::CPU_MODE_CURRENT;
    using CPU_MODE_PREVIOUS = typename CmModeStatFields::CPU_MODE_PREVIOUS;
  };

  // CM IRQ0~31 wakeup mask
  struct CmIrqWakeupMask0Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_0_31 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask0Fields

  struct CM_IRQ_WAKEUP_MASK_0 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask0Fields::IRQ_WAKEUP_MASK_0_31> {
    using IRQ_WAKEUP_MASK_0_31 = typename CmIrqWakeupMask0Fields::IRQ_WAKEUP_MASK_0_31;
  };

  // CM IRQ32~63 wakeup mask
  struct CmIrqWakeupMask1Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_32_63 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask1Fields

  struct CM_IRQ_WAKEUP_MASK_1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask1Fields::IRQ_WAKEUP_MASK_32_63> {
    using IRQ_WAKEUP_MASK_32_63 = typename CmIrqWakeupMask1Fields::IRQ_WAKEUP_MASK_32_63;
  };

  // CM IRQ64~95 wakeup mask
  struct CmIrqWakeupMask2Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_64_95 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask2Fields

  struct CM_IRQ_WAKEUP_MASK_2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask2Fields::IRQ_WAKEUP_MASK_64_95> {
    using IRQ_WAKEUP_MASK_64_95 = typename CmIrqWakeupMask2Fields::IRQ_WAKEUP_MASK_64_95;
  };

  // CM IRQ96~127 wakeup mask
  struct CmIrqWakeupMask3Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_96_127 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask3Fields

  struct CM_IRQ_WAKEUP_MASK_3 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask3Fields::IRQ_WAKEUP_MASK_96_127> {
    using IRQ_WAKEUP_MASK_96_127 = typename CmIrqWakeupMask3Fields::IRQ_WAKEUP_MASK_96_127;
  };

  // CM IRQ128~159 wakeup mask
  struct CmIrqWakeupMask4Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_128_159 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask4Fields

  struct CM_IRQ_WAKEUP_MASK_4 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask4Fields::IRQ_WAKEUP_MASK_128_159> {
    using IRQ_WAKEUP_MASK_128_159 = typename CmIrqWakeupMask4Fields::IRQ_WAKEUP_MASK_128_159;
  };

  // CM IRQ160~191 wakeup mask
  struct CmIrqWakeupMask5Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_160_191 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask5Fields

  struct CM_IRQ_WAKEUP_MASK_5 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask5Fields::IRQ_WAKEUP_MASK_160_191> {
    using IRQ_WAKEUP_MASK_160_191 = typename CmIrqWakeupMask5Fields::IRQ_WAKEUP_MASK_160_191;
  };

  // CM IRQ192~223 wakeup mask
  struct CmIrqWakeupMask6Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_192_223 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask6Fields

  struct CM_IRQ_WAKEUP_MASK_6 : ftl::mmio::Register<
      kBase + 0x118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask6Fields::IRQ_WAKEUP_MASK_192_223> {
    using IRQ_WAKEUP_MASK_192_223 = typename CmIrqWakeupMask6Fields::IRQ_WAKEUP_MASK_192_223;
  };

  // CM IRQ224~255 wakeup mask
  struct CmIrqWakeupMask7Fields {
    // "1" means the IRQ cannot wakeup CPU platform
    using IRQ_WAKEUP_MASK_224_255 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupMask7Fields

  struct CM_IRQ_WAKEUP_MASK_7 : ftl::mmio::Register<
      kBase + 0x11Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmIrqWakeupMask7Fields::IRQ_WAKEUP_MASK_224_255> {
    using IRQ_WAKEUP_MASK_224_255 = typename CmIrqWakeupMask7Fields::IRQ_WAKEUP_MASK_224_255;
  };

  // CM non-irq wakeup mask
  struct CmNonIrqWakeupMaskFields {
    enum class eEVENT_WAKEUP_MASK : std::uint32_t {
      // The event cannot wakeup CPU platform
      eb1 = 1,
    };

    // There are 256 interrupts and 1 event as a wakeup source for GPC. This field masks the 1 event wakeup source.
    using EVENT_WAKEUP_MASK = ftl::mmio::Field<1, 0, eEVENT_WAKEUP_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // "1" means the debug_wakeup_request cannot wakeup CPU platform
    using DEBUG_WAKEUP_MASK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmNonIrqWakeupMaskFields

  struct CM_NON_IRQ_WAKEUP_MASK : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      typename CmNonIrqWakeupMaskFields::EVENT_WAKEUP_MASK,
      typename CmNonIrqWakeupMaskFields::DEBUG_WAKEUP_MASK,
      ftl::mmio::Reserved<30, 2>> {
    using eEVENT_WAKEUP_MASK = typename CmNonIrqWakeupMaskFields::eEVENT_WAKEUP_MASK;
    using EVENT_WAKEUP_MASK = typename CmNonIrqWakeupMaskFields::EVENT_WAKEUP_MASK;
    using DEBUG_WAKEUP_MASK = typename CmNonIrqWakeupMaskFields::DEBUG_WAKEUP_MASK;
  };

  // CM IRQ0~31 wakeup status
  struct CmIrqWakeupStat0Fields {
    enum class eIRQ_WAKEUP_STAT_0_31 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_0_31 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_0_31, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat0Fields

  struct CM_IRQ_WAKEUP_STAT_0 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat0Fields::IRQ_WAKEUP_STAT_0_31> {
    using eIRQ_WAKEUP_STAT_0_31 = typename CmIrqWakeupStat0Fields::eIRQ_WAKEUP_STAT_0_31;
    using IRQ_WAKEUP_STAT_0_31 = typename CmIrqWakeupStat0Fields::IRQ_WAKEUP_STAT_0_31;
  };

  // CM IRQ32~63 wakeup status
  struct CmIrqWakeupStat1Fields {
    enum class eIRQ_WAKEUP_STAT_32_63 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_32_63 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_32_63, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat1Fields

  struct CM_IRQ_WAKEUP_STAT_1 : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat1Fields::IRQ_WAKEUP_STAT_32_63> {
    using eIRQ_WAKEUP_STAT_32_63 = typename CmIrqWakeupStat1Fields::eIRQ_WAKEUP_STAT_32_63;
    using IRQ_WAKEUP_STAT_32_63 = typename CmIrqWakeupStat1Fields::IRQ_WAKEUP_STAT_32_63;
  };

  // CM IRQ64~95 wakeup status
  struct CmIrqWakeupStat2Fields {
    enum class eIRQ_WAKEUP_STAT_64_95 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_64_95 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_64_95, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat2Fields

  struct CM_IRQ_WAKEUP_STAT_2 : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat2Fields::IRQ_WAKEUP_STAT_64_95> {
    using eIRQ_WAKEUP_STAT_64_95 = typename CmIrqWakeupStat2Fields::eIRQ_WAKEUP_STAT_64_95;
    using IRQ_WAKEUP_STAT_64_95 = typename CmIrqWakeupStat2Fields::IRQ_WAKEUP_STAT_64_95;
  };

  // CM IRQ96~127 wakeup status
  struct CmIrqWakeupStat3Fields {
    enum class eIRQ_WAKEUP_STAT_96_127 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_96_127 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_96_127, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat3Fields

  struct CM_IRQ_WAKEUP_STAT_3 : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat3Fields::IRQ_WAKEUP_STAT_96_127> {
    using eIRQ_WAKEUP_STAT_96_127 = typename CmIrqWakeupStat3Fields::eIRQ_WAKEUP_STAT_96_127;
    using IRQ_WAKEUP_STAT_96_127 = typename CmIrqWakeupStat3Fields::IRQ_WAKEUP_STAT_96_127;
  };

  // CM IRQ128~159 wakeup status
  struct CmIrqWakeupStat4Fields {
    enum class eIRQ_WAKEUP_STAT_128_159 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_128_159 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_128_159, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat4Fields

  struct CM_IRQ_WAKEUP_STAT_4 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat4Fields::IRQ_WAKEUP_STAT_128_159> {
    using eIRQ_WAKEUP_STAT_128_159 = typename CmIrqWakeupStat4Fields::eIRQ_WAKEUP_STAT_128_159;
    using IRQ_WAKEUP_STAT_128_159 = typename CmIrqWakeupStat4Fields::IRQ_WAKEUP_STAT_128_159;
  };

  // CM IRQ160~191 wakeup status
  struct CmIrqWakeupStat5Fields {
    enum class eIRQ_WAKEUP_STAT_160_191 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_160_191 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_160_191, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat5Fields

  struct CM_IRQ_WAKEUP_STAT_5 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat5Fields::IRQ_WAKEUP_STAT_160_191> {
    using eIRQ_WAKEUP_STAT_160_191 = typename CmIrqWakeupStat5Fields::eIRQ_WAKEUP_STAT_160_191;
    using IRQ_WAKEUP_STAT_160_191 = typename CmIrqWakeupStat5Fields::IRQ_WAKEUP_STAT_160_191;
  };

  // CM IRQ192~223 wakeup status
  struct CmIrqWakeupStat6Fields {
    enum class eIRQ_WAKEUP_STAT_192_223 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_STAT_192_223 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_STAT_192_223, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat6Fields

  struct CM_IRQ_WAKEUP_STAT_6 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat6Fields::IRQ_WAKEUP_STAT_192_223> {
    using eIRQ_WAKEUP_STAT_192_223 = typename CmIrqWakeupStat6Fields::eIRQ_WAKEUP_STAT_192_223;
    using IRQ_WAKEUP_STAT_192_223 = typename CmIrqWakeupStat6Fields::IRQ_WAKEUP_STAT_192_223;
  };

  // CM IRQ224~255 wakeup status
  struct CmIrqWakeupStat7Fields {
    enum class eIRQ_WAKEUP_MASK_224_255 : std::uint32_t {
      // None
      eb0 = 0,
      // Valid
      eb1 = 1,
    };

    // IRQ status
    using IRQ_WAKEUP_MASK_224_255 = ftl::mmio::Field<32, 0, eIRQ_WAKEUP_MASK_224_255, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmIrqWakeupStat7Fields

  struct CM_IRQ_WAKEUP_STAT_7 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmIrqWakeupStat7Fields::IRQ_WAKEUP_MASK_224_255> {
    using eIRQ_WAKEUP_MASK_224_255 = typename CmIrqWakeupStat7Fields::eIRQ_WAKEUP_MASK_224_255;
    using IRQ_WAKEUP_MASK_224_255 = typename CmIrqWakeupStat7Fields::IRQ_WAKEUP_MASK_224_255;
  };

  // CM non-irq wakeup status
  struct CmNonIrqWakeupStatFields {
    enum class eEVENT_WAKEUP_STAT : std::uint32_t {
      // Interrupt is asserting (pending)
      eb1 = 1,
    };

    // Event wakeup status
    using EVENT_WAKEUP_STAT = ftl::mmio::Field<1, 0, eEVENT_WAKEUP_STAT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Debug wakeup status
    using DEBUG_WAKEUP_STAT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmNonIrqWakeupStatFields

  struct CM_NON_IRQ_WAKEUP_STAT : ftl::mmio::Register<
      kBase + 0x190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmNonIrqWakeupStatFields::EVENT_WAKEUP_STAT,
      typename CmNonIrqWakeupStatFields::DEBUG_WAKEUP_STAT,
      ftl::mmio::Reserved<30, 2>> {
    using eEVENT_WAKEUP_STAT = typename CmNonIrqWakeupStatFields::eEVENT_WAKEUP_STAT;
    using EVENT_WAKEUP_STAT = typename CmNonIrqWakeupStatFields::EVENT_WAKEUP_STAT;
    using DEBUG_WAKEUP_STAT = typename CmNonIrqWakeupStatFields::DEBUG_WAKEUP_STAT;
  };

  // CM sleep SSAR control
  struct CmSleepSsarCtrlFields {
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
  };  // struct CmSleepSsarCtrlFields

  struct CM_SLEEP_SSAR_CTRL : ftl::mmio::Register<
      kBase + 0x200u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepSsarCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepSsarCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepSsarCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepSsarCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepSsarCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepSsarCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepSsarCtrlFields::DISABLE;
  };

  // CM sleep LPCG control
  struct CmSleepLpcgCtrlFields {
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
  };  // struct CmSleepLpcgCtrlFields

  struct CM_SLEEP_LPCG_CTRL : ftl::mmio::Register<
      kBase + 0x208u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepLpcgCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepLpcgCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepLpcgCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepLpcgCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepLpcgCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepLpcgCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepLpcgCtrlFields::DISABLE;
  };

  // CM sleep PLL control
  struct CmSleepPllCtrlFields {
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
  };  // struct CmSleepPllCtrlFields

  struct CM_SLEEP_PLL_CTRL : ftl::mmio::Register<
      kBase + 0x210u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepPllCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepPllCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepPllCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepPllCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepPllCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepPllCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepPllCtrlFields::DISABLE;
  };

  // CM sleep isolation control
  struct CmSleepIsoCtrlFields {
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
  };  // struct CmSleepIsoCtrlFields

  struct CM_SLEEP_ISO_CTRL : ftl::mmio::Register<
      kBase + 0x218u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepIsoCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepIsoCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepIsoCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepIsoCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepIsoCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepIsoCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepIsoCtrlFields::DISABLE;
  };

  // CM sleep reset control
  struct CmSleepResetCtrlFields {
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
  };  // struct CmSleepResetCtrlFields

  struct CM_SLEEP_RESET_CTRL : ftl::mmio::Register<
      kBase + 0x220u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepResetCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepResetCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepResetCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepResetCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepResetCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepResetCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepResetCtrlFields::DISABLE;
  };

  // CM sleep power control
  struct CmSleepPowerCtrlFields {
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
  };  // struct CmSleepPowerCtrlFields

  struct CM_SLEEP_POWER_CTRL : ftl::mmio::Register<
      kBase + 0x228u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmSleepPowerCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmSleepPowerCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmSleepPowerCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmSleepPowerCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmSleepPowerCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmSleepPowerCtrlFields::CNT_MODE;
    using DISABLE = typename CmSleepPowerCtrlFields::DISABLE;
  };

  // CM wakeup power control
  struct CmWakeupPowerCtrlFields {
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
  };  // struct CmWakeupPowerCtrlFields

  struct CM_WAKEUP_POWER_CTRL : ftl::mmio::Register<
      kBase + 0x290u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupPowerCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupPowerCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupPowerCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupPowerCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupPowerCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupPowerCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupPowerCtrlFields::DISABLE;
  };

  // CM wakeup reset control
  struct CmWakeupResetCtrlFields {
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
  };  // struct CmWakeupResetCtrlFields

  struct CM_WAKEUP_RESET_CTRL : ftl::mmio::Register<
      kBase + 0x298u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupResetCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupResetCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupResetCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupResetCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupResetCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupResetCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupResetCtrlFields::DISABLE;
  };

  // CM wakeup isolation control
  struct CmWakeupIsoCtrlFields {
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
  };  // struct CmWakeupIsoCtrlFields

  struct CM_WAKEUP_ISO_CTRL : ftl::mmio::Register<
      kBase + 0x2A0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupIsoCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupIsoCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupIsoCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupIsoCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupIsoCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupIsoCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupIsoCtrlFields::DISABLE;
  };

  // CM wakeup PLL control
  struct CmWakeupPllCtrlFields {
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
  };  // struct CmWakeupPllCtrlFields

  struct CM_WAKEUP_PLL_CTRL : ftl::mmio::Register<
      kBase + 0x2A8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupPllCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupPllCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupPllCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupPllCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupPllCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupPllCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupPllCtrlFields::DISABLE;
  };

  // CM wakeup LPCG control
  struct CmWakeupLpcgCtrlFields {
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
  };  // struct CmWakeupLpcgCtrlFields

  struct CM_WAKEUP_LPCG_CTRL : ftl::mmio::Register<
      kBase + 0x2B0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupLpcgCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupLpcgCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupLpcgCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupLpcgCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupLpcgCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupLpcgCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupLpcgCtrlFields::DISABLE;
  };

  // CM wakeup SSAR control
  struct CmWakeupSsarCtrlFields {
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
  };  // struct CmWakeupSsarCtrlFields

  struct CM_WAKEUP_SSAR_CTRL : ftl::mmio::Register<
      kBase + 0x2B8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      typename CmWakeupSsarCtrlFields::STEP_CNT,
      ftl::mmio::Reserved<12, 16>,
      typename CmWakeupSsarCtrlFields::CNT_MODE,
      ftl::mmio::Reserved<1, 30>,
      typename CmWakeupSsarCtrlFields::DISABLE> {
    using eCNT_MODE = typename CmWakeupSsarCtrlFields::eCNT_MODE;
    using STEP_CNT = typename CmWakeupSsarCtrlFields::STEP_CNT;
    using CNT_MODE = typename CmWakeupSsarCtrlFields::CNT_MODE;
    using DISABLE = typename CmWakeupSsarCtrlFields::DISABLE;
  };

  // CM Setpoint Control
  struct CmSpCtrlFields {
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
  };  // struct CmSpCtrlFields

  struct CM_SP_CTRL : ftl::mmio::Register<
      kBase + 0x300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmSpCtrlFields::CPU_SP_RUN_EN,
      typename CmSpCtrlFields::CPU_SP_RUN,
      typename CmSpCtrlFields::CPU_SP_SLEEP_EN,
      typename CmSpCtrlFields::CPU_SP_SLEEP,
      typename CmSpCtrlFields::CPU_SP_WAKEUP_EN,
      typename CmSpCtrlFields::CPU_SP_WAKEUP,
      typename CmSpCtrlFields::CPU_SP_WAKEUP_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using eCPU_SP_WAKEUP_SEL = typename CmSpCtrlFields::eCPU_SP_WAKEUP_SEL;
    using CPU_SP_RUN_EN = typename CmSpCtrlFields::CPU_SP_RUN_EN;
    using CPU_SP_RUN = typename CmSpCtrlFields::CPU_SP_RUN;
    using CPU_SP_SLEEP_EN = typename CmSpCtrlFields::CPU_SP_SLEEP_EN;
    using CPU_SP_SLEEP = typename CmSpCtrlFields::CPU_SP_SLEEP;
    using CPU_SP_WAKEUP_EN = typename CmSpCtrlFields::CPU_SP_WAKEUP_EN;
    using CPU_SP_WAKEUP = typename CmSpCtrlFields::CPU_SP_WAKEUP;
    using CPU_SP_WAKEUP_SEL = typename CmSpCtrlFields::CPU_SP_WAKEUP_SEL;
  };

  // CM Setpoint Status
  struct CmSpStatFields {
    // The current Setpoint of the system
    using CPU_SP_CURRENT = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // The previous Setpoint of the system
    using CPU_SP_PREVIOUS = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // The requested Setpoint from the CPU platform
    using CPU_SP_TARGET = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmSpStatFields

  struct CM_SP_STAT : ftl::mmio::Register<
      kBase + 0x304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmSpStatFields::CPU_SP_CURRENT,
      typename CmSpStatFields::CPU_SP_PREVIOUS,
      typename CmSpStatFields::CPU_SP_TARGET,
      ftl::mmio::Reserved<20, 12>> {
    using CPU_SP_CURRENT = typename CmSpStatFields::CPU_SP_CURRENT;
    using CPU_SP_PREVIOUS = typename CmSpStatFields::CPU_SP_PREVIOUS;
    using CPU_SP_TARGET = typename CmSpStatFields::CPU_SP_TARGET;
  };

  // CM Run Mode Setpoint Allowed
  struct CmRunModeMappingFields {
    // Defines which Setpoint is allowed when CPU enters RUN mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG field
    using CPU_RUN_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmRunModeMappingFields

  struct CM_RUN_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x310u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmRunModeMappingFields::CPU_RUN_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_RUN_MODE_MAPPING = typename CmRunModeMappingFields::CPU_RUN_MODE_MAPPING;
  };

  // CM Wait Mode Setpoint Allowed
  struct CmWaitModeMappingFields {
    // Defines which Setpoint is allowed when CPU enters WAIT mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_WAIT_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmWaitModeMappingFields

  struct CM_WAIT_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x314u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmWaitModeMappingFields::CPU_WAIT_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_WAIT_MODE_MAPPING = typename CmWaitModeMappingFields::CPU_WAIT_MODE_MAPPING;
  };

  // CM Stop Mode Setpoint Allowed
  struct CmStopModeMappingFields {
    // Defines which Setpoint is allowed when CPU enters STOP mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_STOP_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmStopModeMappingFields

  struct CM_STOP_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x318u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmStopModeMappingFields::CPU_STOP_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_STOP_MODE_MAPPING = typename CmStopModeMappingFields::CPU_STOP_MODE_MAPPING;
  };

  // CM Suspend Mode Setpoint Allowed
  struct CmSuspendModeMappingFields {
    // Defines which Setpoint is allowed when CPU enters SUSPEND mode. Each bit stands for 1 Setpoint, locked by LOCK_CFG
    using CPU_SUSPEND_MODE_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSuspendModeMappingFields

  struct CM_SUSPEND_MODE_MAPPING : ftl::mmio::Register<
      kBase + 0x31Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSuspendModeMappingFields::CPU_SUSPEND_MODE_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SUSPEND_MODE_MAPPING = typename CmSuspendModeMappingFields::CPU_SUSPEND_MODE_MAPPING;
  };

  // CM Setpoint 0 Mapping
  struct CmSp0MappingFields {
    // Defines when SP0 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP0_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp0MappingFields

  struct CM_SP0_MAPPING : ftl::mmio::Register<
      kBase + 0x320u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp0MappingFields::CPU_SP0_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP0_MAPPING = typename CmSp0MappingFields::CPU_SP0_MAPPING;
  };

  // CM Setpoint 1 Mapping
  struct CmSp1MappingFields {
    // Defines when SP1 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP1_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp1MappingFields

  struct CM_SP1_MAPPING : ftl::mmio::Register<
      kBase + 0x324u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp1MappingFields::CPU_SP1_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP1_MAPPING = typename CmSp1MappingFields::CPU_SP1_MAPPING;
  };

  // CM Setpoint 2 Mapping
  struct CmSp2MappingFields {
    // Defines when SP2 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP2_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp2MappingFields

  struct CM_SP2_MAPPING : ftl::mmio::Register<
      kBase + 0x328u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp2MappingFields::CPU_SP2_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP2_MAPPING = typename CmSp2MappingFields::CPU_SP2_MAPPING;
  };

  // CM Setpoint 3 Mapping
  struct CmSp3MappingFields {
    // Defines when SP3 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP3_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp3MappingFields

  struct CM_SP3_MAPPING : ftl::mmio::Register<
      kBase + 0x32Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp3MappingFields::CPU_SP3_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP3_MAPPING = typename CmSp3MappingFields::CPU_SP3_MAPPING;
  };

  // CM Setpoint 4 Mapping
  struct CmSp4MappingFields {
    // Defines when SP4 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP4_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp4MappingFields

  struct CM_SP4_MAPPING : ftl::mmio::Register<
      kBase + 0x330u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp4MappingFields::CPU_SP4_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP4_MAPPING = typename CmSp4MappingFields::CPU_SP4_MAPPING;
  };

  // CM Setpoint 5 Mapping
  struct CmSp5MappingFields {
    // Defines when SP5 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP5_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp5MappingFields

  struct CM_SP5_MAPPING : ftl::mmio::Register<
      kBase + 0x334u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp5MappingFields::CPU_SP5_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP5_MAPPING = typename CmSp5MappingFields::CPU_SP5_MAPPING;
  };

  // CM Setpoint 6 Mapping
  struct CmSp6MappingFields {
    // Defines when SP6 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP6_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp6MappingFields

  struct CM_SP6_MAPPING : ftl::mmio::Register<
      kBase + 0x338u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp6MappingFields::CPU_SP6_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP6_MAPPING = typename CmSp6MappingFields::CPU_SP6_MAPPING;
  };

  // CM Setpoint 7 Mapping
  struct CmSp7MappingFields {
    // Defines when SP7 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP7_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp7MappingFields

  struct CM_SP7_MAPPING : ftl::mmio::Register<
      kBase + 0x33Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp7MappingFields::CPU_SP7_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP7_MAPPING = typename CmSp7MappingFields::CPU_SP7_MAPPING;
  };

  // CM Setpoint 8 Mapping
  struct CmSp8MappingFields {
    // Defines when SP8 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP8_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp8MappingFields

  struct CM_SP8_MAPPING : ftl::mmio::Register<
      kBase + 0x340u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp8MappingFields::CPU_SP8_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP8_MAPPING = typename CmSp8MappingFields::CPU_SP8_MAPPING;
  };

  // CM Setpoint 9 Mapping
  struct CmSp9MappingFields {
    // Defines when SP9 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP9_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp9MappingFields

  struct CM_SP9_MAPPING : ftl::mmio::Register<
      kBase + 0x344u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp9MappingFields::CPU_SP9_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP9_MAPPING = typename CmSp9MappingFields::CPU_SP9_MAPPING;
  };

  // CM Setpoint 10 Mapping
  struct CmSp10MappingFields {
    // Defines when SP10 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP10_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp10MappingFields

  struct CM_SP10_MAPPING : ftl::mmio::Register<
      kBase + 0x348u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp10MappingFields::CPU_SP10_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP10_MAPPING = typename CmSp10MappingFields::CPU_SP10_MAPPING;
  };

  // CM Setpoint 11 Mapping
  struct CmSp11MappingFields {
    // Defines when SP11 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP11_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp11MappingFields

  struct CM_SP11_MAPPING : ftl::mmio::Register<
      kBase + 0x34Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp11MappingFields::CPU_SP11_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP11_MAPPING = typename CmSp11MappingFields::CPU_SP11_MAPPING;
  };

  // CM Setpoint 12 Mapping
  struct CmSp12MappingFields {
    // Defines when SP12 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP12_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp12MappingFields

  struct CM_SP12_MAPPING : ftl::mmio::Register<
      kBase + 0x350u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp12MappingFields::CPU_SP12_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP12_MAPPING = typename CmSp12MappingFields::CPU_SP12_MAPPING;
  };

  // CM Setpoint 13 Mapping
  struct CmSp13MappingFields {
    // Defines when SP13 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP13_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp13MappingFields

  struct CM_SP13_MAPPING : ftl::mmio::Register<
      kBase + 0x354u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp13MappingFields::CPU_SP13_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP13_MAPPING = typename CmSp13MappingFields::CPU_SP13_MAPPING;
  };

  // CM Setpoint 14 Mapping
  struct CmSp14MappingFields {
    // Defines when SP14 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP14_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp14MappingFields

  struct CM_SP14_MAPPING : ftl::mmio::Register<
      kBase + 0x358u,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp14MappingFields::CPU_SP14_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP14_MAPPING = typename CmSp14MappingFields::CPU_SP14_MAPPING;
  };

  // CM Setpoint 15 Mapping
  struct CmSp15MappingFields {
    // Defines when SP15 is set as the CPU_SP_TARGET, which SP is allowed, locked by LOCK_CFG field
    using CPU_SP15_MAPPING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmSp15MappingFields

  struct CM_SP15_MAPPING : ftl::mmio::Register<
      kBase + 0x35Cu,
      std::uint32_t,
      0x0000FFFFu,
      ftl::mmio::RW,
      typename CmSp15MappingFields::CPU_SP15_MAPPING,
      ftl::mmio::Reserved<16, 16>> {
    using CPU_SP15_MAPPING = typename CmSp15MappingFields::CPU_SP15_MAPPING;
  };

  // CM standby control
  struct CmStbyCtrlFields {
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
  };  // struct CmStbyCtrlFields

  struct CM_STBY_CTRL : ftl::mmio::Register<
      kBase + 0x380u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmStbyCtrlFields::STBY_WAIT,
      typename CmStbyCtrlFields::STBY_STOP,
      typename CmStbyCtrlFields::STBY_SUSPEND,
      ftl::mmio::Reserved<13, 3>,
      typename CmStbyCtrlFields::STBY_SLEEP_BUSY,
      typename CmStbyCtrlFields::STBY_WAKEUP_BUSY,
      ftl::mmio::Reserved<14, 18>> {
    using STBY_WAIT = typename CmStbyCtrlFields::STBY_WAIT;
    using STBY_STOP = typename CmStbyCtrlFields::STBY_STOP;
    using STBY_SUSPEND = typename CmStbyCtrlFields::STBY_SUSPEND;
    using STBY_SLEEP_BUSY = typename CmStbyCtrlFields::STBY_SLEEP_BUSY;
    using STBY_WAKEUP_BUSY = typename CmStbyCtrlFields::STBY_WAKEUP_BUSY;
  };

};

}  // namespace regs