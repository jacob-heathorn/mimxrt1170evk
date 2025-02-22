#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PGMC_PPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nPGMC_PPC0 {


// PPC Authentication Control
union PPC_AUTHEN_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Allow user mode access
    uint32_t USER : 1;
    // read-write - Allow non-secure mode access
    uint32_t NONSECURE : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock NONSECURE and USER
    uint32_t LOCK_SETTING : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Domain ID white list
    uint32_t WHITE_LIST : 4;
    // read-write - White list lock
    uint32_t LOCK_LIST : 1;
    uint32_t _reserved_2 : 7;
    // read-write - Configuration lock
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile PPC_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile PPC_AUTHEN_CTRL*>(0x40C8B004); }
};

// PPC Mode
union PPC_MODE {
  
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  enum class eCTRL_MODE : uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
    // Controlled by Setpoint and system standby
    eCTRL_MODE_2 = 2,
  };
  
  // Domain assignment of the BPC
  enum class eDOMAIN_ASSIGN : uint32_t {
    // Domain 0
    ed0 = 0,
    // Domain 1
    ed1 = 1,
    // Domain 2
    ed2 = 2,
    // Domain 3
    ed3 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    eCTRL_MODE CTRL_MODE : 2;
    uint32_t _reserved_0 : 2;
    // read-write - Domain assignment of the BPC
    eDOMAIN_ASSIGN DOMAIN_ASSIGN : 2;
    uint32_t _reserved_1 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_MODE &Instance() { return *reinterpret_cast<volatile PPC_MODE*>(0x40C8B010); }
};

// PPC standby CPU mode control
union PPC_STBY_CM_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - PMIC Standby on when domain enters WAIT mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t STBY_ON_AT_WAIT : 1;
    // read-write - PMIC Standby on when domain enters STOP mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t STBY_ON_AT_STOP : 1;
    // read-write - PMIC Standby on when domain enters SUSPEND mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t STBY_ON_AT_SUSPEND : 1;
    uint32_t _reserved_1 : 4;
    // read-write - Software PMIC standby on trigger
    uint32_t STBY_ON_SOFT : 1;
    // read-write - Software PMIC standby off trigger
    uint32_t STBY_OFF_SOFT : 1;
    uint32_t _reserved_2 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_STBY_CM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_STBY_CM_CTRL &Instance() { return *reinterpret_cast<volatile PPC_STBY_CM_CTRL*>(0x40C8B014); }
};

// PPC standby Setpoint control
union PPC_STBY_SP_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - PMIC standby on when system enters Setpoint number. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t STBY_ON_AT_SP_ACTIVE : 16;
    // read-write - PMIC standby on when system enters Setpoint number and system is in standby mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t STBY_ON_AT_SP_SLEEP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_STBY_SP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_STBY_SP_CTRL &Instance() { return *reinterpret_cast<volatile PPC_STBY_SP_CTRL*>(0x40C8B018); }
};


} // namespace nPGMC_PPC0