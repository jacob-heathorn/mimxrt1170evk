#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // Secure RAM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nSRAM {


// Control Register
//
union CTRL {
  
  // Enum definitions.
  enum class eRAM_RD_EN : uint32_t {
    eDISABLE = 0, // Disable read access
    eENABLE = 1, // Enable read access
  };
  enum class eRAM_WR_EN : uint32_t {
    eDISABLE = 0, // Disable write access
    eENABLE = 1, // Enable write access
  };
  enum class eTAMPER_BLOCK_EN : uint32_t {
    eACCESS = 0, // Allow R/W access to secure RAM when tamper is detected
    eBLOCK = 1, // Block R/W access to secure RAM when tamper is detected
  };
  enum class eTAMPER_PWR_OFF_EN : uint32_t {
    eOFF = 0, // Disable the turn off function when tamper is detected
    eON = 1, // Turn off power for all secure RAM banks when tamper is detected
  };
  
  // Bit field definition.
  struct {
    eRAM_RD_EN RAM_RD_EN : 1;
    eRAM_WR_EN RAM_WR_EN : 1;
    uint32_t PWR_EN : 4;
    eTAMPER_BLOCK_EN TAMPER_BLOCK_EN : 1;
    eTAMPER_PWR_OFF_EN TAMPER_PWR_OFF_EN : 1;
    uint32_t _reserved_5 : 8;
    uint32_t LOCK_BIT : 8;
    uint32_t _reserved_end : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40C9F000); }
};


} // namespace nSRAM