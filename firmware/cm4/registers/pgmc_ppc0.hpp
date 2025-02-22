#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // PGMC_PPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPGMC_PPC0 {


// PPC Authentication Control
//
union PPC_AUTHEN_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
    uint32_t _reserved_2 : 2;
    uint32_t LOCK_SETTING : 1;
    uint32_t _reserved_3 : 3;
    uint32_t WHITE_LIST : 4;
    uint32_t LOCK_LIST : 1;
    uint32_t _reserved_5 : 7;
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_end : 11;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile PPC_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile PPC_AUTHEN_CTRL*>(0x40C8B004); }
};

// PPC Mode
//
union PPC_MODE {
  
  // Enum definitions.
  enum class eCTRL_MODE : uint32_t {
    eCTRL_MODE_0 = 0, // Not affected by any low power mode
    eCTRL_MODE_1 = 1, // Controlled by CPU power mode of the domain
    eCTRL_MODE_2 = 2, // Controlled by Setpoint and system standby
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
    uint32_t _reserved_1 : 2;
    eDOMAIN_ASSIGN DOMAIN_ASSIGN : 2;
    uint32_t _reserved_end : 26;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_MODE &Instance() { return *reinterpret_cast<volatile PPC_MODE*>(0x40C8B010); }
};

// PPC standby CPU mode control
//
union PPC_STBY_CM_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    uint32_t STBY_ON_AT_WAIT : 1;
    uint32_t STBY_ON_AT_STOP : 1;
    uint32_t STBY_ON_AT_SUSPEND : 1;
    uint32_t _reserved_3 : 4;
    uint32_t STBY_ON_SOFT : 1;
    uint32_t STBY_OFF_SOFT : 1;
    uint32_t _reserved_end : 22;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_STBY_CM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_STBY_CM_CTRL &Instance() { return *reinterpret_cast<volatile PPC_STBY_CM_CTRL*>(0x40C8B014); }
};

// PPC standby Setpoint control
//
union PPC_STBY_SP_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t STBY_ON_AT_SP_ACTIVE : 16;
    uint32_t STBY_ON_AT_SP_SLEEP : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PPC_STBY_SP_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PPC_STBY_SP_CTRL &Instance() { return *reinterpret_cast<volatile PPC_STBY_SP_CTRL*>(0x40C8B018); }
};


} // namespace nPGMC_PPC0