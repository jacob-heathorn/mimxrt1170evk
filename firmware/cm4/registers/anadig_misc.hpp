#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nANADIG_MISC {


// Chip Silicon Version Register
//
union MISC_DIFPROG {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t CHIPID : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  MISC_DIFPROG() = delete;
  inline void Reset() volatile { this->value = 0x001170B0; }
  static inline volatile MISC_DIFPROG &Instance() { return *reinterpret_cast<volatile MISC_DIFPROG*>(0x40C84800); }
};

// VDDSOC_AI_CTRL_REGISTER
//
union VDDSOC_AI_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC_AI_ADDR : 8;
    uint32_t _reserved_1 : 8;
    uint32_t VDDSOC_AIRWB : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC_AI_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_CTRL &Instance() { return *reinterpret_cast<volatile VDDSOC_AI_CTRL*>(0x40C84820); }
};

// VDDSOC_AI_WDATA_REGISTER
//
union VDDSOC_AI_WDATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC_AI_WDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC_AI_WDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_WDATA &Instance() { return *reinterpret_cast<volatile VDDSOC_AI_WDATA*>(0x40C84830); }
};

// VDDSOC_AI_RDATA_REGISTER
//
union VDDSOC_AI_RDATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC_AI_RDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC_AI_RDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_RDATA &Instance() { return *reinterpret_cast<volatile VDDSOC_AI_RDATA*>(0x40C84840); }
};

// VDDSOC2PLL_AI_CTRL_1G_REGISTER
//
union VDDSOC2PLL_AI_CTRL_1G {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AIADDR_1G : 8;
    uint32_t VDDSOC2PLL_AITOGGLE_1G : 1;
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_1G : 1;
    uint32_t _reserved_3 : 6;
    uint32_t VDDSOC2PLL_AIRWB_1G : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_CTRL_1G() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_1G &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_1G*>(0x40C84850); }
};

// VDDSOC2PLL_AI_WDATA_1G_REGISTER
//
union VDDSOC2PLL_AI_WDATA_1G {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_WDATA_1G : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_WDATA_1G() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_1G &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_1G*>(0x40C84860); }
};

// VDDSOC2PLL_AI_RDATA_1G_REGISTER
//
union VDDSOC2PLL_AI_RDATA_1G {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_RDATA_1G : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_RDATA_1G() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_1G &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_1G*>(0x40C84870); }
};

// VDDSOC_AI_CTRL_AUDIO_REGISTER
//
union VDDSOC2PLL_AI_CTRL_AUDIO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_ADDR_AUDIO : 8;
    uint32_t VDDSOC2PLL_AITOGGLE_AUDIO : 1;
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_AUDIO : 1;
    uint32_t _reserved_3 : 6;
    uint32_t VDDSOC2PLL_AIRWB_AUDIO : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_CTRL_AUDIO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_AUDIO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_AUDIO*>(0x40C84880); }
};

// VDDSOC_AI_WDATA_AUDIO_REGISTER
//
union VDDSOC2PLL_AI_WDATA_AUDIO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_WDATA_AUDIO : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_WDATA_AUDIO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_AUDIO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_AUDIO*>(0x40C84890); }
};

// VDDSOC2PLL_AI_RDATA_REGISTER
//
union VDDSOC2PLL_AI_RDATA_AUDIO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_RDATA_AUDIO : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_RDATA_AUDIO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_AUDIO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_AUDIO*>(0x40C848A0); }
};

// VDDSOC2PLL_AI_CTRL_VIDEO_REGISTER
//
union VDDSOC2PLL_AI_CTRL_VIDEO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AIADDR_VIDEO : 8;
    uint32_t VDDSOC2PLL_AITOGGLE_VIDEO : 1;
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_VIDEO : 1;
    uint32_t _reserved_3 : 6;
    uint32_t VDDSOC2PLL_AIRWB_VIDEO : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_CTRL_VIDEO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_VIDEO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_VIDEO*>(0x40C848B0); }
};

// VDDSOC2PLL_AI_WDATA_VIDEO_REGISTER
//
union VDDSOC2PLL_AI_WDATA_VIDEO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_WDATA_VIDEO : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_WDATA_VIDEO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_VIDEO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_VIDEO*>(0x40C848C0); }
};

// VDDSOC2PLL_AI_RDATA_VIDEO_REGISTER
//
union VDDSOC2PLL_AI_RDATA_VIDEO {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDSOC2PLL_AI_RDATA_VIDEO : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDSOC2PLL_AI_RDATA_VIDEO() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_VIDEO &Instance() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_VIDEO*>(0x40C848D0); }
};

// VDDSOC_AI_CTRL_REGISTER
//
union VDDLPSR_AI_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI_ADDR : 8;
    uint32_t _reserved_1 : 8;
    uint32_t VDDLPSR_AIRWB : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_CTRL &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI_CTRL*>(0x40C848E0); }
};

// VDDLPSR_AI_WDATA_REGISTER
//
union VDDLPSR_AI_WDATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI_WDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI_WDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_WDATA &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI_WDATA*>(0x40C848F0); }
};

// VDDLPSR_AI_RDATA_REFTOP_REGISTER
//
union VDDLPSR_AI_RDATA_REFTOP {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI_RDATA_REFTOP : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI_RDATA_REFTOP() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_RDATA_REFTOP &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI_RDATA_REFTOP*>(0x40C84900); }
};

// VDDLPSR_AI_RDATA_TMPSNS_REGISTER
//
union VDDLPSR_AI_RDATA_TMPSNS {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI_RDATA_TMPSNS : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI_RDATA_TMPSNS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_RDATA_TMPSNS &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI_RDATA_TMPSNS*>(0x40C84910); }
};

// VDDLPSR_AI400M_CTRL_REGISTER
//
union VDDLPSR_AI400M_CTRL {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI400M_ADDR : 8;
    uint32_t VDDLPSR_AITOGGLE_400M : 1;
    uint32_t VDDLPSR_AITOGGLE_DONE_400M : 1;
    uint32_t _reserved_3 : 6;
    uint32_t VDDLPSR_AI400M_RWB : 1;
    uint32_t _reserved_end : 15;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI400M_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_CTRL &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI400M_CTRL*>(0x40C84920); }
};

// VDDLPSR_AI400M_WDATA_REGISTER
//
union VDDLPSR_AI400M_WDATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI400M_WDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI400M_WDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_WDATA &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI400M_WDATA*>(0x40C84930); }
};

// VDDLPSR_AI400M_RDATA_REGISTER
//
union VDDLPSR_AI400M_RDATA {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t VDDLPSR_AI400M_RDATA : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VDDLPSR_AI400M_RDATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_RDATA &Instance() { return *reinterpret_cast<volatile VDDLPSR_AI400M_RDATA*>(0x40C84940); }
};


} // namespace nANADIG_MISC