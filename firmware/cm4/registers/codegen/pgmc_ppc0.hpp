#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_PPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct PgmcPpc0 {
  // PPC Authentication Control
  struct PPC_AUTHEN_CTRL_fields_ {
    // Allow user mode access
    using USER = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow non-secure mode access
    using NONSECURE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock NONSECURE and USER
    using LOCK_SETTING = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain ID white list
    using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // White list lock
    using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Configuration lock
    using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PPC_AUTHEN_CTRL_fields_

  struct PPC_AUTHEN_CTRL : ftl::mmio::Register<
      0x40C8B004u,
      std::uint32_t,
      0x00000F00u,
      ftl::mmio::RW,
      PPC_AUTHEN_CTRL_fields_::USER,
      PPC_AUTHEN_CTRL_fields_::NONSECURE,
      ftl::mmio::Reserved<2, 2>,
      PPC_AUTHEN_CTRL_fields_::LOCK_SETTING,
      ftl::mmio::Reserved<3, 5>,
      PPC_AUTHEN_CTRL_fields_::WHITE_LIST,
      PPC_AUTHEN_CTRL_fields_::LOCK_LIST,
      ftl::mmio::Reserved<7, 13>,
      PPC_AUTHEN_CTRL_fields_::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using USER = PPC_AUTHEN_CTRL_fields_::USER;
    using NONSECURE = PPC_AUTHEN_CTRL_fields_::NONSECURE;
    using LOCK_SETTING = PPC_AUTHEN_CTRL_fields_::LOCK_SETTING;
    using WHITE_LIST = PPC_AUTHEN_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = PPC_AUTHEN_CTRL_fields_::LOCK_LIST;
    using LOCK_CFG = PPC_AUTHEN_CTRL_fields_::LOCK_CFG;
  };

  // PPC Mode
  struct PPC_MODE_fields_ {
    enum class eCTRL_MODE : std::uint32_t {
      // Not affected by any low power mode
      eCTRL_MODE_0 = 0,
      // Controlled by CPU power mode of the domain
      eCTRL_MODE_1 = 1,
      // Controlled by Setpoint and system standby
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
  };  // struct PPC_MODE_fields_

  struct PPC_MODE : ftl::mmio::Register<
      0x40C8B010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PPC_MODE_fields_::CTRL_MODE,
      ftl::mmio::Reserved<2, 2>,
      PPC_MODE_fields_::DOMAIN_ASSIGN,
      ftl::mmio::Reserved<26, 6>> {
    using eCTRL_MODE = PPC_MODE_fields_::eCTRL_MODE;
    using eDOMAIN_ASSIGN = PPC_MODE_fields_::eDOMAIN_ASSIGN;
    using CTRL_MODE = PPC_MODE_fields_::CTRL_MODE;
    using DOMAIN_ASSIGN = PPC_MODE_fields_::DOMAIN_ASSIGN;
  };

  // PPC standby CPU mode control
  struct PPC_STBY_CM_CTRL_fields_ {
    // PMIC Standby on when domain enters WAIT mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_WAIT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PMIC Standby on when domain enters STOP mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_STOP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PMIC Standby on when domain enters SUSPEND mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_SUSPEND = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software PMIC standby on trigger
    using STBY_ON_SOFT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software PMIC standby off trigger
    using STBY_OFF_SOFT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PPC_STBY_CM_CTRL_fields_

  struct PPC_STBY_CM_CTRL : ftl::mmio::Register<
      0x40C8B014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_WAIT,
      PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_STOP,
      PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_SUSPEND,
      ftl::mmio::Reserved<4, 4>,
      PPC_STBY_CM_CTRL_fields_::STBY_ON_SOFT,
      PPC_STBY_CM_CTRL_fields_::STBY_OFF_SOFT,
      ftl::mmio::Reserved<22, 10>> {
    using STBY_ON_AT_WAIT = PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_WAIT;
    using STBY_ON_AT_STOP = PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_STOP;
    using STBY_ON_AT_SUSPEND = PPC_STBY_CM_CTRL_fields_::STBY_ON_AT_SUSPEND;
    using STBY_ON_SOFT = PPC_STBY_CM_CTRL_fields_::STBY_ON_SOFT;
    using STBY_OFF_SOFT = PPC_STBY_CM_CTRL_fields_::STBY_OFF_SOFT;
  };

  // PPC standby Setpoint control
  struct PPC_STBY_SP_CTRL_fields_ {
    // PMIC standby on when system enters Setpoint number. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_SP_ACTIVE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PMIC standby on when system enters Setpoint number and system is in standby mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_SP_SLEEP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PPC_STBY_SP_CTRL_fields_

  struct PPC_STBY_SP_CTRL : ftl::mmio::Register<
      0x40C8B018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PPC_STBY_SP_CTRL_fields_::STBY_ON_AT_SP_ACTIVE,
      PPC_STBY_SP_CTRL_fields_::STBY_ON_AT_SP_SLEEP> {
    using STBY_ON_AT_SP_ACTIVE = PPC_STBY_SP_CTRL_fields_::STBY_ON_AT_SP_ACTIVE;
    using STBY_ON_AT_SP_SLEEP = PPC_STBY_SP_CTRL_fields_::STBY_ON_AT_SP_SLEEP;
  };

};

}  // namespace regs