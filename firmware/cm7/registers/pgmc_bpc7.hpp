#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PGMC_BPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPGMC_BPC7 {


// BPC Authentication Control
//
union BPC_AUTHEN_CTRL {
  
  enum class eUSER : uint32_t {
    eUSER_0 = 0, // Allow only privilege mode to access basic power control registers
    eUSER_1 = 1, // Allow both privilege and user mode to access basic power control registers
  };
  
  enum class eNONSECURE : uint32_t {
    eNONSECURE_0 = 0, // Allow only secure mode to access basic power control registers
    eNONSECURE_1 = 1, // Allow both secure and non-secure mode to access basic power control registers
  };
  
  // Bit field definition.
  struct {
    eUSER USER : 1;
    eNONSECURE NONSECURE : 1;
    uint32_t _reserved_0 : 2;
    uint32_t LOCK_SETTING : 1;
    uint32_t _reserved_1 : 3;
    uint32_t WHITE_LIST : 4;
    uint32_t LOCK_LIST : 1;
    uint32_t _reserved_2 : 7;
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
//
union BPC_MODE {
  
  enum class eCTRL_MODE : uint32_t {
    eCTRL_MODE_0 = 0, // Not affected by any low power mode
    eCTRL_MODE_1 = 1, // Controlled by CPU power mode of the domain
    eCTRL_MODE_2 = 2, // Controlled by Setpoint
  };
  
  enum class eDOMAIN_ASSIGN : uint32_t {
    ed0 = 0, // Domain 0
    ed1 = 1, // Domain 1
    ed2 = 2, // Domain 2
    ed3 = 3, // Domain 3
  };
  
  // Bit field definition.
  struct {
    eCTRL_MODE CTRL_MODE : 2;
    uint32_t _reserved_0 : 2;
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
//
union BPC_POWER_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    uint32_t PWR_OFF_AT_WAIT : 1;
    uint32_t PWR_OFF_AT_STOP : 1;
    uint32_t PWR_OFF_AT_SUSPEND : 1;
    uint32_t _reserved_1 : 4;
    uint32_t ISO_ON_SOFT : 1;
    uint32_t PSW_OFF_SOFT : 1;
    uint32_t PSW_ON_SOFT : 1;
    uint32_t ISO_OFF_SOFT : 1;
    uint32_t _reserved_2 : 4;
    uint32_t PWR_OFF_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_POWER_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_POWER_CTRL &Instance() { return *reinterpret_cast<volatile BPC_POWER_CTRL*>(0x40C88E14); }
};

// BPC flag
//
union BPC_FLAG {
  
  // Bit field definition.
  struct {
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
//
union BPC_SSAR_SAVE_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t SAVE_AT_RUN : 1;
    uint32_t SAVE_AT_WAIT : 1;
    uint32_t SAVE_AT_STOP : 1;
    uint32_t SAVE_AT_SUSPEND : 1;
    uint32_t _reserved_0 : 12;
    uint32_t SAVE_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_SSAR_SAVE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_SSAR_SAVE_CTRL &Instance() { return *reinterpret_cast<volatile BPC_SSAR_SAVE_CTRL*>(0x40C88E40); }
};

// BPC SSAR restore control
//
union BPC_SSAR_RESTORE_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t RESTORE_AT_RUN : 1;
    uint32_t _reserved_0 : 15;
    uint32_t RESTORE_AT_SP : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BPC_SSAR_RESTORE_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BPC_SSAR_RESTORE_CTRL &Instance() { return *reinterpret_cast<volatile BPC_SSAR_RESTORE_CTRL*>(0x40C88E44); }
};


} // namespace nPGMC_BPC7