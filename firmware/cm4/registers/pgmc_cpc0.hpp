#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PGMC_CPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPGMC_CPC0 {


// CPC Authentication Control
//
union CPC_AUTHEN_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t USER : 1;
    uint32_t NONSECURE : 1;
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

  CPC_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000F00; }
  static inline volatile CPC_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile CPC_AUTHEN_CTRL*>(0x40C89004); }
};

// CPC Core Mode
//
union CPC_CORE_MODE {
  
  enum class eCTRL_MODE : uint32_t {
    eCTRL_MODE_0 = 0, // Not affected by any low power mode
    eCTRL_MODE_1 = 1, // Controlled by CPU power mode of the domain
  };
  
  // Bit field definition.
  struct {
    eCTRL_MODE CTRL_MODE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CORE_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_CORE_MODE &Instance() { return *reinterpret_cast<volatile CPC_CORE_MODE*>(0x40C89010); }
};

// CPC core power control
//
union CPC_CORE_POWER_CTRL {
  
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
    uint32_t _reserved_2 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CORE_POWER_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_CORE_POWER_CTRL &Instance() { return *reinterpret_cast<volatile CPC_CORE_POWER_CTRL*>(0x40C89014); }
};

// CPC flag
//
union CPC_FLAG {
  
  // Bit field definition.
  struct {
    uint32_t CORE_PDN_FLAG : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_FLAG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_FLAG &Instance() { return *reinterpret_cast<volatile CPC_FLAG*>(0x40C8902C); }
};

// CPC Cache Mode
//
union CPC_CACHE_MODE {
  
  enum class eCTRL_MODE : uint32_t {
    eCTRL_MODE_0 = 0, // Not affected by any low power mode
    eCTRL_MODE_1 = 1, // Controlled by CPU power mode of the domain
    eCTRL_MODE_2 = 2, // Controlled by Setpoint
  };
  
  // Bit field definition.
  struct {
    eCTRL_MODE CTRL_MODE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CACHE_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_CACHE_MODE &Instance() { return *reinterpret_cast<volatile CPC_CACHE_MODE*>(0x40C89040); }
};

// CPC cache CPU mode control
//
union CPC_CACHE_CM_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_RUN : 4;
    uint32_t MLPL_AT_WAIT : 4;
    uint32_t MLPL_AT_STOP : 4;
    uint32_t MLPL_AT_SUSPEND : 4;
    uint32_t MLPL_SOFT : 1;
    uint32_t _reserved_0 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CACHE_CM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00003330; }
  static inline volatile CPC_CACHE_CM_CTRL &Instance() { return *reinterpret_cast<volatile CPC_CACHE_CM_CTRL*>(0x40C89044); }
};

// CPC cache Setpoint control 0
//
union CPC_CACHE_SP_CTRL_0 {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_SP0 : 4;
    uint32_t MLPL_AT_SP1 : 4;
    uint32_t MLPL_AT_SP2 : 4;
    uint32_t MLPL_AT_SP3 : 4;
    uint32_t MLPL_AT_SP4 : 4;
    uint32_t MLPL_AT_SP5 : 4;
    uint32_t MLPL_AT_SP6 : 4;
    uint32_t MLPL_AT_SP7 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CACHE_SP_CTRL_0() = delete;
  inline void Reset() volatile { this->value = 0x33333333; }
  static inline volatile CPC_CACHE_SP_CTRL_0 &Instance() { return *reinterpret_cast<volatile CPC_CACHE_SP_CTRL_0*>(0x40C89048); }
};

// CPC cache Setpoint control 1
//
union CPC_CACHE_SP_CTRL_1 {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_SP8 : 4;
    uint32_t MLPL_AT_SP9 : 4;
    uint32_t MLPL_AT_SP10 : 4;
    uint32_t MLPL_AT_SP11 : 4;
    uint32_t MLPL_AT_SP12 : 4;
    uint32_t MLPL_AT_SP13 : 4;
    uint32_t MLPL_AT_SP14 : 4;
    uint32_t MLPL_AT_SP15 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_CACHE_SP_CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x33333333; }
  static inline volatile CPC_CACHE_SP_CTRL_1 &Instance() { return *reinterpret_cast<volatile CPC_CACHE_SP_CTRL_1*>(0x40C8904C); }
};

// CPC local memory Mode
//
union CPC_LMEM_MODE {
  
  enum class eCTRL_MODE : uint32_t {
    eCTRL_MODE_0 = 0, // Not affected by any low power mode
    eCTRL_MODE_1 = 1, // Controlled by CPU power mode of the domain
    eCTRL_MODE_2 = 2, // Controlled by Setpoint
  };
  
  // Bit field definition.
  struct {
    eCTRL_MODE CTRL_MODE : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_LMEM_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_LMEM_MODE &Instance() { return *reinterpret_cast<volatile CPC_LMEM_MODE*>(0x40C890C0); }
};

// CPC local memory CPU mode control
//
union CPC_LMEM_CM_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_RUN : 4;
    uint32_t MLPL_AT_WAIT : 4;
    uint32_t MLPL_AT_STOP : 4;
    uint32_t MLPL_AT_SUSPEND : 4;
    uint32_t MLPL_SOFT : 1;
    uint32_t _reserved_0 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_LMEM_CM_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_LMEM_CM_CTRL &Instance() { return *reinterpret_cast<volatile CPC_LMEM_CM_CTRL*>(0x40C890C4); }
};

// CPC local memory Setpoint control 0
//
union CPC_LMEM_SP_CTRL_0 {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_SP0 : 4;
    uint32_t MLPL_AT_SP1 : 4;
    uint32_t MLPL_AT_SP2 : 4;
    uint32_t MLPL_AT_SP3 : 4;
    uint32_t MLPL_AT_SP4 : 4;
    uint32_t MLPL_AT_SP5 : 4;
    uint32_t MLPL_AT_SP6 : 4;
    uint32_t MLPL_AT_SP7 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_LMEM_SP_CTRL_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_LMEM_SP_CTRL_0 &Instance() { return *reinterpret_cast<volatile CPC_LMEM_SP_CTRL_0*>(0x40C890C8); }
};

// CPC local memory Setpoint control 1
//
union CPC_LMEM_SP_CTRL_1 {
  
  // Bit field definition.
  struct {
    uint32_t MLPL_AT_SP8 : 4;
    uint32_t MLPL_AT_SP9 : 4;
    uint32_t MLPL_AT_SP10 : 4;
    uint32_t MLPL_AT_SP11 : 4;
    uint32_t MLPL_AT_SP12 : 4;
    uint32_t MLPL_AT_SP13 : 4;
    uint32_t MLPL_AT_SP14 : 4;
    uint32_t MLPL_AT_SP15 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CPC_LMEM_SP_CTRL_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CPC_LMEM_SP_CTRL_1 &Instance() { return *reinterpret_cast<volatile CPC_LMEM_SP_CTRL_1*>(0x40C890CC); }
};


} // namespace nPGMC_CPC0