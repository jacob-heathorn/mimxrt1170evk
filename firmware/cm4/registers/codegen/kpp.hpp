#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// KPP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nKPP {


// Keypad Control Register
union KPCR {
  
  // KRE
  enum class eKRE : uint32_t {
    // Row is not included in the keypad key press detect.
    eKRE_0 = 0,
    // Row is included in the keypad key press detect.
    eKRE_1 = 1,
  };
  
  // KCO
  enum class eKCO : uint32_t {
    // Column strobe output is totem pole drive.
    eTOTEM_POLE = 0,
    // Column strobe output is open drain.
    eOPEN_DRAIN = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - KRE
    eKRE KRE : 8;
    // read-write - KCO
    eKCO KCO : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KPCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KPCR &ref() { return *reinterpret_cast<volatile KPCR*>(0x400E0000); }
};

// Keypad Status Register
union KPSR {
  
  // KPKD
  enum class eKPKD : uint32_t {
    // No key presses detected
    eKPKD_0 = 0,
    // A key has been depressed
    eKPKD_1 = 1,
  };
  
  // KPKR
  enum class eKPKR : uint32_t {
    // No key release detected
    eKPKR_0 = 0,
    // All keys have been released
    eKPKR_1 = 1,
  };
  
  // KDSC
  enum class eKDSC : uint32_t {
    // No effect
    eKDSC_0 = 0,
    // Set bits that clear the keypad depress synchronizer chain
    eKDSC_1 = 1,
  };
  
  // KRSS
  enum class eKRSS : uint32_t {
    // No effect
    eKRSS_0 = 0,
    // Set bits which sets keypad release synchronizer chain
    eKRSS_1 = 1,
  };
  
  // KDIE
  enum class eKDIE : uint32_t {
    // No interrupt request is generated when KPKD is set.
    eKDIE_0 = 0,
    // An interrupt request is generated when KPKD is set.
    eKDIE_1 = 1,
  };
  
  // KRIE
  enum class eKRIE : uint32_t {
    // No interrupt request is generated when KPKR is set.
    eKRIE_0 = 0,
    // An interrupt request is generated when KPKR is set.
    eKRIE_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - KPKD
    eKPKD KPKD : 1;
    // read-write - KPKR
    eKPKR KPKR : 1;
    // read-write - KDSC
    eKDSC KDSC : 1;
    // read-write - KRSS
    eKRSS KRSS : 1;
    uint32_t _reserved_0 : 4;
    // read-write - KDIE
    eKDIE KDIE : 1;
    // read-write - KRIE
    eKRIE KRIE : 1;
    uint32_t _reserved_1 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KPSR() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile KPSR &ref() { return *reinterpret_cast<volatile KPSR*>(0x400E0002); }
};

// Keypad Data Direction Register
union KDDR {
  
  // KRDD
  enum class eKRDD : uint32_t {
    // ROWn pin configured as an input.
    eINPUT = 0,
    // ROWn pin configured as an output.
    eOUTPUT = 1,
  };
  
  // KCDD
  enum class eKCDD : uint32_t {
    // COLn pin is configured as an input.
    eINPUT = 0,
    // COLn pin is configured as an output.
    eOUTPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - KRDD
    eKRDD KRDD : 8;
    // read-write - KCDD
    eKCDD KCDD : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KDDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KDDR &ref() { return *reinterpret_cast<volatile KDDR*>(0x400E0004); }
};

// Keypad Data Register
union KPDR {
  
  // Bit field definition.
  struct {
    // read-write - KRD
    uint32_t KRD : 8;
    // read-write - KCD
    uint32_t KCD : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  KPDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile KPDR &ref() { return *reinterpret_cast<volatile KPDR*>(0x400E0006); }
};


} // namespace nKPP