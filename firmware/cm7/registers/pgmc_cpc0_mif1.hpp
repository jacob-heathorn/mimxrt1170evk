#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PGMC_MIF
namespace nPGMC_CPC0_MIF1 {


// MIF Authentication Control
union MIF_AUTHEN_CTRL {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 20;
    // read-write - Configuration lock
    uint32_t LOCK_CFG : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_AUTHEN_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIF_AUTHEN_CTRL &Instance() { return *reinterpret_cast<volatile MIF_AUTHEN_CTRL*>(0x40C89204); }
};

// MIF MLPL control of SLEEP
union MIF_MLPL_SLEEP {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_SLEEP() = delete;
  inline void Reset() volatile { this->value = 0x0000FF00; }
  static inline volatile MIF_MLPL_SLEEP &Instance() { return *reinterpret_cast<volatile MIF_MLPL_SLEEP*>(0x40C89210); }
};

// MIF MLPL control of IG
union MIF_MLPL_IG {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_IG() = delete;
  inline void Reset() volatile { this->value = 0x00000060; }
  static inline volatile MIF_MLPL_IG &Instance() { return *reinterpret_cast<volatile MIF_MLPL_IG*>(0x40C89220); }
};

// MIF MLPL control of LS
union MIF_MLPL_LS {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_LS() = delete;
  inline void Reset() volatile { this->value = 0x00000010; }
  static inline volatile MIF_MLPL_LS &Instance() { return *reinterpret_cast<volatile MIF_MLPL_LS*>(0x40C89230); }
};

// MIF MLPL control of HS
union MIF_MLPL_HS {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_HS() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile MIF_MLPL_HS &Instance() { return *reinterpret_cast<volatile MIF_MLPL_HS*>(0x40C89240); }
};

// MIF MLPL control of STDBY
union MIF_MLPL_STDBY {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_STDBY() = delete;
  inline void Reset() volatile { this->value = 0x00000040; }
  static inline volatile MIF_MLPL_STDBY &Instance() { return *reinterpret_cast<volatile MIF_MLPL_STDBY*>(0x40C89250); }
};

// MIF MLPL control of array power down
union MIF_MLPL_ARR_PDN {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_ARR_PDN() = delete;
  inline void Reset() volatile { this->value = 0x00000C00; }
  static inline volatile MIF_MLPL_ARR_PDN &Instance() { return *reinterpret_cast<volatile MIF_MLPL_ARR_PDN*>(0x40C89260); }
};

// MIF MLPL control of peripheral power down
union MIF_MLPL_PER_PDN {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_PER_PDN() = delete;
  inline void Reset() volatile { this->value = 0x00004A00; }
  static inline volatile MIF_MLPL_PER_PDN &Instance() { return *reinterpret_cast<volatile MIF_MLPL_PER_PDN*>(0x40C89270); }
};

// MIF MLPL control of INITN
union MIF_MLPL_INITN {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 15;
    // read-write - Bypass vdd_ok. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    uint32_t BYPASS_VDD_OK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_INITN() = delete;
  inline void Reset() volatile { this->value = 0x000035FF; }
  static inline volatile MIF_MLPL_INITN &Instance() { return *reinterpret_cast<volatile MIF_MLPL_INITN*>(0x40C89280); }
};

// MIF MLPL control of isolation enable
union MIF_MLPL_ISO {
  
  // Bit field definition.
  struct {
    // read-write - Signal behavior at each MLPL
    uint32_t MLPL_CTRL : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MIF_MLPL_ISO() = delete;
  inline void Reset() volatile { this->value = 0x0000CA00; }
  static inline volatile MIF_MLPL_ISO &Instance() { return *reinterpret_cast<volatile MIF_MLPL_ISO*>(0x40C892B0); }
};


} // namespace nPGMC_CPC0_MIF1