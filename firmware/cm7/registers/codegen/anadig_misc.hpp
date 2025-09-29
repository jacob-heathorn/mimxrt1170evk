#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nANADIG_MISC {


// Chip Silicon Version Register
union MISC_DIFPROG {
  
  // Bit field definition.
  struct {
    // read-only - Chip ID
    uint32_t CHIPID : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x001170B0; }
  static inline volatile MISC_DIFPROG &ref() { return *reinterpret_cast<volatile MISC_DIFPROG*>(0x40C84800); }
};

// VDDSOC_AI_CTRL_REGISTER
union VDDSOC_AI_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC_AI_ADDR
    uint32_t VDDSOC_AI_ADDR : 8;
    uint32_t _reserved_0 : 8;
    // read-write - VDDSOC_AIRWB
    uint32_t VDDSOC_AIRWB : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_CTRL &ref() { return *reinterpret_cast<volatile VDDSOC_AI_CTRL*>(0x40C84820); }
};

// VDDSOC_AI_WDATA_REGISTER
union VDDSOC_AI_WDATA {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC_AI_WDATA
    uint32_t VDDSOC_AI_WDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_WDATA &ref() { return *reinterpret_cast<volatile VDDSOC_AI_WDATA*>(0x40C84830); }
};

// VDDSOC_AI_RDATA_REGISTER
union VDDSOC_AI_RDATA {
  
  // Bit field definition.
  struct {
    // read-only - VDDSOC_AI_RDATA
    uint32_t VDDSOC_AI_RDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC_AI_RDATA &ref() { return *reinterpret_cast<volatile VDDSOC_AI_RDATA*>(0x40C84840); }
};

// VDDSOC2PLL_AI_CTRL_1G_REGISTER
union VDDSOC2PLL_AI_CTRL_1G {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AIADDR_1G
    uint32_t VDDSOC2PLL_AIADDR_1G : 8;
    // read-write - VDDSOC2PLL_AITOGGLE_1G
    uint32_t VDDSOC2PLL_AITOGGLE_1G : 1;
    // read-only - VDDSOC2PLL_AITOGGLE_DONE_1G
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_1G : 1;
    uint32_t _reserved_0 : 6;
    // read-write - VDDSOC2PLL_AIRWB_1G
    uint32_t VDDSOC2PLL_AIRWB_1G : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_1G &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_1G*>(0x40C84850); }
};

// VDDSOC2PLL_AI_WDATA_1G_REGISTER
union VDDSOC2PLL_AI_WDATA_1G {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AI_WDATA_1G
    uint32_t VDDSOC2PLL_AI_WDATA_1G : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_1G &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_1G*>(0x40C84860); }
};

// VDDSOC2PLL_AI_RDATA_1G_REGISTER
union VDDSOC2PLL_AI_RDATA_1G {
  
  // Bit field definition.
  struct {
    // read-only - VDDSOC2PLL_AI_RDATA_1G
    uint32_t VDDSOC2PLL_AI_RDATA_1G : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_1G &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_1G*>(0x40C84870); }
};

// VDDSOC_AI_CTRL_AUDIO_REGISTER
union VDDSOC2PLL_AI_CTRL_AUDIO {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AI_ADDR_AUDIO
    uint32_t VDDSOC2PLL_AI_ADDR_AUDIO : 8;
    // read-write - VDDSOC2PLL_AITOGGLE_AUDIO
    uint32_t VDDSOC2PLL_AITOGGLE_AUDIO : 1;
    // read-only - VDDSOC2PLL_AITOGGLE_DONE_AUDIO
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_AUDIO : 1;
    uint32_t _reserved_0 : 6;
    // read-write - VDDSOC_AIRWB
    uint32_t VDDSOC2PLL_AIRWB_AUDIO : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_AUDIO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_AUDIO*>(0x40C84880); }
};

// VDDSOC_AI_WDATA_AUDIO_REGISTER
union VDDSOC2PLL_AI_WDATA_AUDIO {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AI_WDATA_AUDIO
    uint32_t VDDSOC2PLL_AI_WDATA_AUDIO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_AUDIO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_AUDIO*>(0x40C84890); }
};

// VDDSOC2PLL_AI_RDATA_REGISTER
union VDDSOC2PLL_AI_RDATA_AUDIO {
  
  // Bit field definition.
  struct {
    // read-only - VDDSOC2PLL_AI_RDATA_AUDIO
    uint32_t VDDSOC2PLL_AI_RDATA_AUDIO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_AUDIO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_AUDIO*>(0x40C848A0); }
};

// VDDSOC2PLL_AI_CTRL_VIDEO_REGISTER
union VDDSOC2PLL_AI_CTRL_VIDEO {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AIADDR_VIDEO
    uint32_t VDDSOC2PLL_AIADDR_VIDEO : 8;
    // read-write - VDDSOC2PLL_AITOGGLE_VIDEO
    uint32_t VDDSOC2PLL_AITOGGLE_VIDEO : 1;
    // read-only - VDDSOC2PLL_AITOGGLE_DONE_VIDEO
    uint32_t VDDSOC2PLL_AITOGGLE_DONE_VIDEO : 1;
    uint32_t _reserved_0 : 6;
    // read-write - VDDSOC2PLL_AIRWB_VIDEO
    uint32_t VDDSOC2PLL_AIRWB_VIDEO : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_CTRL_VIDEO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_CTRL_VIDEO*>(0x40C848B0); }
};

// VDDSOC2PLL_AI_WDATA_VIDEO_REGISTER
union VDDSOC2PLL_AI_WDATA_VIDEO {
  
  // Bit field definition.
  struct {
    // read-write - VDDSOC2PLL_AI_WDATA_VIDEO
    uint32_t VDDSOC2PLL_AI_WDATA_VIDEO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_WDATA_VIDEO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_WDATA_VIDEO*>(0x40C848C0); }
};

// VDDSOC2PLL_AI_RDATA_VIDEO_REGISTER
union VDDSOC2PLL_AI_RDATA_VIDEO {
  
  // Bit field definition.
  struct {
    // read-only - VDDSOC2PLL_AI_RDATA_VIDEO
    uint32_t VDDSOC2PLL_AI_RDATA_VIDEO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDSOC2PLL_AI_RDATA_VIDEO &ref() { return *reinterpret_cast<volatile VDDSOC2PLL_AI_RDATA_VIDEO*>(0x40C848D0); }
};

// VDDSOC_AI_CTRL_REGISTER
union VDDLPSR_AI_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - VDDLPSR_AI_ADDR
    uint32_t VDDLPSR_AI_ADDR : 8;
    uint32_t _reserved_0 : 8;
    // read-write - VDDLPSR_AIRWB
    uint32_t VDDLPSR_AIRWB : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_CTRL &ref() { return *reinterpret_cast<volatile VDDLPSR_AI_CTRL*>(0x40C848E0); }
};

// VDDLPSR_AI_WDATA_REGISTER
union VDDLPSR_AI_WDATA {
  
  // Bit field definition.
  struct {
    // read-write - VDD_LPSR_AI_WDATA
    uint32_t VDDLPSR_AI_WDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_WDATA &ref() { return *reinterpret_cast<volatile VDDLPSR_AI_WDATA*>(0x40C848F0); }
};

// VDDLPSR_AI_RDATA_REFTOP_REGISTER
union VDDLPSR_AI_RDATA_REFTOP {
  
  // Bit field definition.
  struct {
    // read-only - VDDLPSR_AI_RDATA_REFTOP
    uint32_t VDDLPSR_AI_RDATA_REFTOP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_RDATA_REFTOP &ref() { return *reinterpret_cast<volatile VDDLPSR_AI_RDATA_REFTOP*>(0x40C84900); }
};

// VDDLPSR_AI_RDATA_TMPSNS_REGISTER
union VDDLPSR_AI_RDATA_TMPSNS {
  
  // Bit field definition.
  struct {
    // read-only - VDDLPSR_AI_RDATA_TMPSNS
    uint32_t VDDLPSR_AI_RDATA_TMPSNS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI_RDATA_TMPSNS &ref() { return *reinterpret_cast<volatile VDDLPSR_AI_RDATA_TMPSNS*>(0x40C84910); }
};

// VDDLPSR_AI400M_CTRL_REGISTER
union VDDLPSR_AI400M_CTRL {
  
  // Bit field definition.
  struct {
    // read-write - VDDLPSR_AI400M_ADDR
    uint32_t VDDLPSR_AI400M_ADDR : 8;
    // read-write - VDDLPSR_AITOGGLE_400M
    uint32_t VDDLPSR_AITOGGLE_400M : 1;
    // read-only - VDDLPSR_AITOGGLE_DONE_400M
    uint32_t VDDLPSR_AITOGGLE_DONE_400M : 1;
    uint32_t _reserved_0 : 6;
    // read-write - VDDLPSR_AI400M_RWB
    uint32_t VDDLPSR_AI400M_RWB : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_CTRL &ref() { return *reinterpret_cast<volatile VDDLPSR_AI400M_CTRL*>(0x40C84920); }
};

// VDDLPSR_AI400M_WDATA_REGISTER
union VDDLPSR_AI400M_WDATA {
  
  // Bit field definition.
  struct {
    // read-write - VDDLPSR_AI400M_WDATA
    uint32_t VDDLPSR_AI400M_WDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_WDATA &ref() { return *reinterpret_cast<volatile VDDLPSR_AI400M_WDATA*>(0x40C84930); }
};

// VDDLPSR_AI400M_RDATA_REGISTER
union VDDLPSR_AI400M_RDATA {
  
  // Bit field definition.
  struct {
    // read-only - VDDLPSR_AI400M_RDATA
    uint32_t VDDLPSR_AI400M_RDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile VDDLPSR_AI400M_RDATA &ref() { return *reinterpret_cast<volatile VDDLPSR_AI400M_RDATA*>(0x40C84940); }
};


} // namespace nANADIG_MISC