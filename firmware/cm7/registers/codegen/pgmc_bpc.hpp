#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_BPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Pgmc_bpc {
  static_assert( Instance == 0u || Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u || Instance == 7u,
      "Pgmc_bpc: Instance must be one of 0, 1, 2, 3, 4, 5, 6, 7");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C88000u :
      Instance == 1u ? 0x40C88200u :
      Instance == 2u ? 0x40C88400u :
      Instance == 3u ? 0x40C88600u :
      Instance == 4u ? 0x40C88800u :
      Instance == 5u ? 0x40C88A00u :
      Instance == 6u ? 0x40C88C00u :
      Instance == 7u ? 0x40C88E00u :
      0u;

  
// BPC Authentication Control
struct BPC_AUTHEN_CTRL_fields_ {

  enum class eUSER : std::uint32_t {
    // Allow only privilege mode to access basic power control registers
    eUSER_0 = 0,
    // Allow both privilege and user mode to access basic power control registers
    eUSER_1 = 1,
  };

  enum class eNONSECURE : std::uint32_t {
    // Allow only secure mode to access basic power control registers
    eNONSECURE_0 = 0,
    // Allow both secure and non-secure mode to access basic power control registers
    eNONSECURE_1 = 1,
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
};  // struct BPC_AUTHEN_CTRL_fields_

struct BPC_AUTHEN_CTRL : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x00000F00u,
    ftl::mmio::RW,
    typename BPC_AUTHEN_CTRL_fields_::USER,
    typename BPC_AUTHEN_CTRL_fields_::NONSECURE,
    ftl::mmio::Reserved<2, 2>,
    typename BPC_AUTHEN_CTRL_fields_::LOCK_SETTING,
    ftl::mmio::Reserved<3, 5>,
    typename BPC_AUTHEN_CTRL_fields_::WHITE_LIST,
    typename BPC_AUTHEN_CTRL_fields_::LOCK_LIST,
    ftl::mmio::Reserved<7, 13>,
    typename BPC_AUTHEN_CTRL_fields_::LOCK_CFG,
    ftl::mmio::Reserved<11, 21>> {
  using eUSER = typename BPC_AUTHEN_CTRL_fields_::eUSER;
  using eNONSECURE = typename BPC_AUTHEN_CTRL_fields_::eNONSECURE;
  using USER = typename BPC_AUTHEN_CTRL_fields_::USER;
  using NONSECURE = typename BPC_AUTHEN_CTRL_fields_::NONSECURE;
  using LOCK_SETTING = typename BPC_AUTHEN_CTRL_fields_::LOCK_SETTING;
  using WHITE_LIST = typename BPC_AUTHEN_CTRL_fields_::WHITE_LIST;
  using LOCK_LIST = typename BPC_AUTHEN_CTRL_fields_::LOCK_LIST;
  using LOCK_CFG = typename BPC_AUTHEN_CTRL_fields_::LOCK_CFG;
};

  
// BPC Mode
struct BPC_MODE_fields_ {

  enum class eCTRL_MODE : std::uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
    // Controlled by Setpoint
    eCTRL_MODE_2 = 2,
  };

  enum class eDOMAIN_ASSIGN : std::uint32_t {
    // Domain 0
    ed0 = 0,
    // Domain 1
    ed1 = 1,
    // Domain 2
    ed2 = 2,
    // Domain 3
    ed3 = 3,
  };
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using CTRL_MODE = ftl::mmio::Field<2, 0, eCTRL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain assignment of the BPC
  using DOMAIN_ASSIGN = ftl::mmio::Field<2, 4, eDOMAIN_ASSIGN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BPC_MODE_fields_

struct BPC_MODE : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename BPC_MODE_fields_::CTRL_MODE,
    ftl::mmio::Reserved<2, 2>,
    typename BPC_MODE_fields_::DOMAIN_ASSIGN,
    ftl::mmio::Reserved<26, 6>> {
  using eCTRL_MODE = typename BPC_MODE_fields_::eCTRL_MODE;
  using eDOMAIN_ASSIGN = typename BPC_MODE_fields_::eDOMAIN_ASSIGN;
  using CTRL_MODE = typename BPC_MODE_fields_::CTRL_MODE;
  using DOMAIN_ASSIGN = typename BPC_MODE_fields_::DOMAIN_ASSIGN;
};

  
// BPC power control
struct BPC_POWER_CTRL_fields_ {
  // 0x1: Power off when domain enters WAIT mode
  using PWR_OFF_AT_WAIT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // 0x1: Power off when domain enters STOP mode
  using PWR_OFF_AT_STOP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // 0x1: Power off when domain enters SUSPEND mode
  using PWR_OFF_AT_SUSPEND = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software isolation on trigger
  using ISO_ON_SOFT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software power off trigger
  using PSW_OFF_SOFT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software power on trigger
  using PSW_ON_SOFT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software isolation off trigger
  using ISO_OFF_SOFT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power off when system enters Setpoint number
  using PWR_OFF_AT_SP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BPC_POWER_CTRL_fields_

struct BPC_POWER_CTRL : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_WAIT,
    typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_STOP,
    typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_SUSPEND,
    ftl::mmio::Reserved<4, 4>,
    typename BPC_POWER_CTRL_fields_::ISO_ON_SOFT,
    typename BPC_POWER_CTRL_fields_::PSW_OFF_SOFT,
    typename BPC_POWER_CTRL_fields_::PSW_ON_SOFT,
    typename BPC_POWER_CTRL_fields_::ISO_OFF_SOFT,
    ftl::mmio::Reserved<4, 12>,
    typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_SP> {
  using PWR_OFF_AT_WAIT = typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_WAIT;
  using PWR_OFF_AT_STOP = typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_STOP;
  using PWR_OFF_AT_SUSPEND = typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_SUSPEND;
  using ISO_ON_SOFT = typename BPC_POWER_CTRL_fields_::ISO_ON_SOFT;
  using PSW_OFF_SOFT = typename BPC_POWER_CTRL_fields_::PSW_OFF_SOFT;
  using PSW_ON_SOFT = typename BPC_POWER_CTRL_fields_::PSW_ON_SOFT;
  using ISO_OFF_SOFT = typename BPC_POWER_CTRL_fields_::ISO_OFF_SOFT;
  using PWR_OFF_AT_SP = typename BPC_POWER_CTRL_fields_::PWR_OFF_AT_SP;
};

  
// BPC flag
struct BPC_FLAG_fields_ {
  // set to 1 after power switch off, cleared by writing 1
  using PDN_FLAG = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct BPC_FLAG_fields_

struct BPC_FLAG : ftl::mmio::Register<
    kBase + 0x2Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename BPC_FLAG_fields_::PDN_FLAG,
    ftl::mmio::Reserved<31, 1>> {
  using PDN_FLAG = typename BPC_FLAG_fields_::PDN_FLAG;
};

  
// BPC SSAR save control
struct BPC_SSAR_SAVE_CTRL_fields_ {
  // Save data at RUN mode, software writting 0x1 to trigger SSARC to execute save process
  using SAVE_AT_RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Save data when domain enters WAIT mode
  using SAVE_AT_WAIT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Save data when domain enters STOP mode
  using SAVE_AT_STOP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Save data when domain enters SUSPEND mode
  using SAVE_AT_SUSPEND = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Save data when system enters a Setpoint.
  using SAVE_AT_SP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BPC_SSAR_SAVE_CTRL_fields_

struct BPC_SSAR_SAVE_CTRL : ftl::mmio::Register<
    kBase + 0x40u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_RUN,
    typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_WAIT,
    typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_STOP,
    typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_SUSPEND,
    ftl::mmio::Reserved<12, 4>,
    typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_SP> {
  using SAVE_AT_RUN = typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_RUN;
  using SAVE_AT_WAIT = typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_WAIT;
  using SAVE_AT_STOP = typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_STOP;
  using SAVE_AT_SUSPEND = typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_SUSPEND;
  using SAVE_AT_SP = typename BPC_SSAR_SAVE_CTRL_fields_::SAVE_AT_SP;
};

  
// BPC SSAR restore control
struct BPC_SSAR_RESTORE_CTRL_fields_ {
  // Restore data at RUN mode
  using RESTORE_AT_RUN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Restore data when system enters a Setpoint.
  using RESTORE_AT_SP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BPC_SSAR_RESTORE_CTRL_fields_

struct BPC_SSAR_RESTORE_CTRL : ftl::mmio::Register<
    kBase + 0x44u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename BPC_SSAR_RESTORE_CTRL_fields_::RESTORE_AT_RUN,
    ftl::mmio::Reserved<15, 1>,
    typename BPC_SSAR_RESTORE_CTRL_fields_::RESTORE_AT_SP> {
  using RESTORE_AT_RUN = typename BPC_SSAR_RESTORE_CTRL_fields_::RESTORE_AT_RUN;
  using RESTORE_AT_SP = typename BPC_SSAR_RESTORE_CTRL_fields_::RESTORE_AT_SP;
};
};

}  // namespace regs