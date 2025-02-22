#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PGMC_BPC
namespace nPGMC_BPC7 {


// BPC Authentication Control
union BPC_AUTHEN_CTRL {
  
  // Allow user mode access
  enum class eUSER : uint32_t {
    // Allow only privilege mode to access basic power control registers
    eUSER_0 = 0,
    // Allow both privilege and user mode to access basic power control registers
    eUSER_1 = 1,
  };
  
  // Allow non-secure mode access
  enum class eNONSECURE : uint32_t {
    // Allow only secure mode to access basic power control registers
    eNONSECURE_0 = 0,
    // Allow both secure and non-secure mode to access basic power control registers
    eNONSECURE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Allow user mode access
    eUSER USER : 1;
    // read-write - Allow non-secure mode access
    eNONSECURE NONSECURE : 1;
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

  BPC_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile BPC_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile BPC_AUTHEN_CTRL*>(0x40C88E04); }
};

// BPC Mode
union BPC_MODE {
  
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  enum class eCTRL_MODE : uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
    // Controlled by Setpoint
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

  BPC_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_MODE &Instance() { return *reinterpret_cast<volatile BPC_MODE*>(0x40C88E10); }
};

// BPC power control
union BPC_POWER_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - 0x1: Power off when domain enters WAIT mode
    uint32_t PWR_OFF_AT_WAIT : 1;
    // read-write - 0x1: Power off when domain enters STOP mode
    uint32_t PWR_OFF_AT_STOP : 1;
    // read-write - 0x1: Power off when domain enters SUSPEND mode
    uint32_t PWR_OFF_AT_SUSPEND : 1;
    uint32_t _reserved_1 : 4;
    // read-write - Software isolation on trigger
    uint32_t ISO_ON_SOFT : 1;
    // read-write - Software power off trigger
    uint32_t PSW_OFF_SOFT : 1;
    // read-write - Software power on trigger
    uint32_t PSW_ON_SOFT : 1;
    // read-write - Software isolation off trigger
    uint32_t ISO_OFF_SOFT : 1;
    uint32_t _reserved_2 : 4;
    // read-write - Power off when system enters Setpoint number
    uint32_t PWR_OFF_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_POWER_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_POWER_CTRL &Instance() { return *reinterpret_cast<volatile BPC_POWER_CTRL*>(0x40C88E14); }
};

// BPC flag
union BPC_FLAG {
  
  // Bit field definition.
  struct {
    // read-write - set to 1 after power switch off, cleared by writing 1
    uint32_t PDN_FLAG : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_FLAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_FLAG &Instance() { return *reinterpret_cast<volatile BPC_FLAG*>(0x40C88E2C); }
};

// BPC SSAR save control
union BPC_SSAR_SAVE_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Save data at RUN mode, software writting 0x1 to trigger SSARC to execute save process
    uint32_t SAVE_AT_RUN : 1;
    // read-write - Save data when domain enters WAIT mode
    uint32_t SAVE_AT_WAIT : 1;
    // read-write - Save data when domain enters STOP mode
    uint32_t SAVE_AT_STOP : 1;
    // read-write - Save data when domain enters SUSPEND mode
    uint32_t SAVE_AT_SUSPEND : 1;
    uint32_t _reserved_0 : 12;
    // read-write - Save data when system enters a Setpoint.
    uint32_t SAVE_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_SSAR_SAVE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_SSAR_SAVE_CTRL &Instance() { return *reinterpret_cast<volatile BPC_SSAR_SAVE_CTRL*>(0x40C88E40); }
};

// BPC SSAR restore control
union BPC_SSAR_RESTORE_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - Restore data at RUN mode
    uint32_t RESTORE_AT_RUN : 1;
    uint32_t _reserved_0 : 15;
    // read-write - Restore data when system enters a Setpoint.
    uint32_t RESTORE_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_SSAR_RESTORE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_SSAR_RESTORE_CTRL &Instance() { return *reinterpret_cast<volatile BPC_SSAR_RESTORE_CTRL*>(0x40C88E44); }
};


} // namespace nPGMC_BPC7