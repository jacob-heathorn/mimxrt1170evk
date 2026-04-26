#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_PPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct PgmcPpc0 {
  // PPC Authentication Control
  struct PpcAuthenCtrlFields {
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
  };  // struct PpcAuthenCtrlFields

  struct PPC_AUTHEN_CTRL : ftl::mmio::Register<
      0x40C8B004u,
      std::uint32_t,
      0x00000F00u,
      ftl::mmio::RW,
      PpcAuthenCtrlFields::USER,
      PpcAuthenCtrlFields::NONSECURE,
      ftl::mmio::Reserved<2, 2>,
      PpcAuthenCtrlFields::LOCK_SETTING,
      ftl::mmio::Reserved<3, 5>,
      PpcAuthenCtrlFields::WHITE_LIST,
      PpcAuthenCtrlFields::LOCK_LIST,
      ftl::mmio::Reserved<7, 13>,
      PpcAuthenCtrlFields::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using USER = PpcAuthenCtrlFields::USER;
    using NONSECURE = PpcAuthenCtrlFields::NONSECURE;
    using LOCK_SETTING = PpcAuthenCtrlFields::LOCK_SETTING;
    using WHITE_LIST = PpcAuthenCtrlFields::WHITE_LIST;
    using LOCK_LIST = PpcAuthenCtrlFields::LOCK_LIST;
    using LOCK_CFG = PpcAuthenCtrlFields::LOCK_CFG;
  };

  // PPC Mode
  struct PpcModeFields {
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
  };  // struct PpcModeFields

  struct PPC_MODE : ftl::mmio::Register<
      0x40C8B010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PpcModeFields::CTRL_MODE,
      ftl::mmio::Reserved<2, 2>,
      PpcModeFields::DOMAIN_ASSIGN,
      ftl::mmio::Reserved<26, 6>> {
    using eCTRL_MODE = PpcModeFields::eCTRL_MODE;
    using eDOMAIN_ASSIGN = PpcModeFields::eDOMAIN_ASSIGN;
    using CTRL_MODE = PpcModeFields::CTRL_MODE;
    using DOMAIN_ASSIGN = PpcModeFields::DOMAIN_ASSIGN;
  };

  // PPC standby CPU mode control
  struct PpcStbyCmCtrlFields {
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
  };  // struct PpcStbyCmCtrlFields

  struct PPC_STBY_CM_CTRL : ftl::mmio::Register<
      0x40C8B014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      PpcStbyCmCtrlFields::STBY_ON_AT_WAIT,
      PpcStbyCmCtrlFields::STBY_ON_AT_STOP,
      PpcStbyCmCtrlFields::STBY_ON_AT_SUSPEND,
      ftl::mmio::Reserved<4, 4>,
      PpcStbyCmCtrlFields::STBY_ON_SOFT,
      PpcStbyCmCtrlFields::STBY_OFF_SOFT,
      ftl::mmio::Reserved<22, 10>> {
    using STBY_ON_AT_WAIT = PpcStbyCmCtrlFields::STBY_ON_AT_WAIT;
    using STBY_ON_AT_STOP = PpcStbyCmCtrlFields::STBY_ON_AT_STOP;
    using STBY_ON_AT_SUSPEND = PpcStbyCmCtrlFields::STBY_ON_AT_SUSPEND;
    using STBY_ON_SOFT = PpcStbyCmCtrlFields::STBY_ON_SOFT;
    using STBY_OFF_SOFT = PpcStbyCmCtrlFields::STBY_OFF_SOFT;
  };

  // PPC standby Setpoint control
  struct PpcStbySpCtrlFields {
    // PMIC standby on when system enters Setpoint number. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_SP_ACTIVE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PMIC standby on when system enters Setpoint number and system is in standby mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using STBY_ON_AT_SP_SLEEP = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PpcStbySpCtrlFields

  struct PPC_STBY_SP_CTRL : ftl::mmio::Register<
      0x40C8B018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PpcStbySpCtrlFields::STBY_ON_AT_SP_ACTIVE,
      PpcStbySpCtrlFields::STBY_ON_AT_SP_SLEEP> {
    using STBY_ON_AT_SP_ACTIVE = PpcStbySpCtrlFields::STBY_ON_AT_SP_ACTIVE;
    using STBY_ON_AT_SP_SLEEP = PpcStbySpCtrlFields::STBY_ON_AT_SP_SLEEP;
  };

};

}  // namespace regs