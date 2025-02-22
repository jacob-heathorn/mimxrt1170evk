#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LMEM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nLMEM {


// PC bus Cache control register
//
union PCCCR {
  
  enum class eENCACHE : uint32_t {
    edisabled = 0, // Cache disabled
    eenabled = 1, // Cache enabled
  };
  
  enum class eENWRBUF : uint32_t {
    edisabled = 0, // Write buffer disabled
    eenabled = 1, // Write buffer enabled
  };
  
  enum class ePCCR2 : uint32_t {
    ePCCR2_0 = 0, // Does NOT force all cacheable spaces to write through
    ePCCR2_1 = 1, // Forces all cacheable spaces to write through
  };
  
  enum class ePCCR3 : uint32_t {
    ePCCR3_0 = 0, // Allocation on cache misses
    ePCCR3_1 = 1, // Forces no allocation on cache misses (must also have PCCR2 asserted)
  };
  
  enum class eINVW0 : uint32_t {
    eno_operation = 0, // No operation
    einvw0 = 1, // When setting the GO bit, invalidate all lines in way 0.
  };
  
  enum class ePUSHW0 : uint32_t {
    eno_operation = 0, // No operation
    epushw0 = 1, // When setting the GO bit, push all modified lines in way 0
  };
  
  enum class eINVW1 : uint32_t {
    eno_operation = 0, // No operation
    einvw1 = 1, // When setting the GO bit, invalidate all lines in way 1
  };
  
  enum class ePUSHW1 : uint32_t {
    eno_operation = 0, // No operation
    epushw1 = 1, // When setting the GO bit, push all modified lines in way 1
  };
  
  enum class eGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no cache command active.
    einit_cmd = 1, // Write: initiate command indicated by bits 27-24. Read: cache command active.
  };
  
  // Bit field definition.
  struct {
    eENCACHE ENCACHE : 1;
    eENWRBUF ENWRBUF : 1;
    ePCCR2 PCCR2 : 1;
    ePCCR3 PCCR3 : 1;
    uint32_t _reserved_0 : 20;
    eINVW0 INVW0 : 1;
    ePUSHW0 PUSHW0 : 1;
    eINVW1 INVW1 : 1;
    ePUSHW1 PUSHW1 : 1;
    uint32_t _reserved_1 : 3;
    eGO GO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCCR &Instance() { return *reinterpret_cast<volatile PCCCR*>(0xE0082000); }
};

// PC bus Cache line control register
//
union PCCLCR {
  
  enum class eLGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no line command active.
    einit_cmd = 1, // Write: initiate line command indicated by bits 27-24. Read: line command active.
  };
  
  enum class eWSEL : uint32_t {
    eway0 = 0, // Way 0
    eway1 = 1, // Way 1
  };
  
  enum class eTDSEL : uint32_t {
    edata = 0, // Data
    etag = 1, // Tag
  };
  
  enum class eLCMD : uint32_t {
    esearch_rw = 0, // Search and read or write
    einvalidate = 1, // Invalidate
    epush = 2, // Push
    eclear = 3, // Clear
  };
  
  enum class eLADSEL : uint32_t {
    ecache_addr = 0, // Cache address
    ephys_addr = 1, // Physical address
  };
  
  enum class eLACC : uint32_t {
    eread = 0, // Read
    ewrite = 1, // Write
  };
  
  // Bit field definition.
  struct {
    eLGO LGO : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CACHEADDR : 12;
    eWSEL WSEL : 1;
    uint32_t _reserved_1 : 1;
    eTDSEL TDSEL : 1;
    uint32_t _reserved_2 : 3;
    uint32_t LCIVB : 1;
    uint32_t LCIMB : 1;
    uint32_t LCWAY : 1;
    uint32_t _reserved_3 : 1;
    eLCMD LCMD : 2;
    eLADSEL LADSEL : 1;
    eLACC LACC : 1;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCLCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCLCR &Instance() { return *reinterpret_cast<volatile PCCLCR*>(0xE0082004); }
};

// PC bus Cache search address register
//
union PCCSAR {
  
  enum class eLGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no line command active.
    einit_cmd = 1, // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
  };
  
  // Bit field definition.
  struct {
    eLGO LGO : 1;
    uint32_t PHYADDR : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCSAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCSAR &Instance() { return *reinterpret_cast<volatile PCCSAR*>(0xE0082008); }
};

// PC bus Cache read/write value register
//
union PCCCVR {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCCVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCCVR &Instance() { return *reinterpret_cast<volatile PCCCVR*>(0xE008200C); }
};

// PS bus Cache control register
//
union PSCCR {
  
  enum class eENCACHE : uint32_t {
    edisabled = 0, // Cache disabled
    eenabled = 1, // Cache enabled
  };
  
  enum class eENWRBUF : uint32_t {
    edisabled = 0, // Write buffer disabled
    eenabled = 1, // Write buffer enabled
  };
  
  enum class ePSCR2 : uint32_t {
    ePSCR2_0 = 0, // Does NOT force all cacheable spaces to write through
    ePSCR2_1 = 1, // Forces all cacheable spaces to write through
  };
  
  enum class ePSCR3 : uint32_t {
    ePSCR3_0 = 0, // Allocation on cache misses
    ePSCR3_1 = 1, // Forces no allocation on cache misses (must also have PSCR2 asserted)
  };
  
  enum class eINVW0 : uint32_t {
    eno_operation = 0, // No operation
    einvw0 = 1, // When setting the GO bit, invalidate all lines in way 0.
  };
  
  enum class ePUSHW0 : uint32_t {
    eno_operation = 0, // No operation
    epushw0 = 1, // When setting the GO bit, push all modified lines in way 0
  };
  
  enum class eINVW1 : uint32_t {
    eno_operation = 0, // No operation
    einvw1 = 1, // When setting the GO bit, invalidate all lines in way 1
  };
  
  enum class ePUSHW1 : uint32_t {
    eno_operation = 0, // No operation
    epushw1 = 1, // When setting the GO bit, push all modified lines in way 1
  };
  
  enum class eGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no cache command active.
    einit_cmd = 1, // Write: initiate command indicated by bits 27-24. Read: cache command active.
  };
  
  // Bit field definition.
  struct {
    eENCACHE ENCACHE : 1;
    eENWRBUF ENWRBUF : 1;
    ePSCR2 PSCR2 : 1;
    ePSCR3 PSCR3 : 1;
    uint32_t _reserved_0 : 20;
    eINVW0 INVW0 : 1;
    ePUSHW0 PUSHW0 : 1;
    eINVW1 INVW1 : 1;
    ePUSHW1 PUSHW1 : 1;
    uint32_t _reserved_1 : 3;
    eGO GO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCCR &Instance() { return *reinterpret_cast<volatile PSCCR*>(0xE0082800); }
};

// PS bus Cache line control register
//
union PSCLCR {
  
  enum class eLGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no line command active.
    einit_cmd = 1, // Write: initiate line command indicated by bits 27-24. Read: line command active.
  };
  
  enum class eWSEL : uint32_t {
    eway0 = 0, // Way 0
    eway1 = 1, // Way 1
  };
  
  enum class eTDSEL : uint32_t {
    edata = 0, // Data
    etag = 1, // Tag
  };
  
  enum class eLCMD : uint32_t {
    esearch_rw = 0, // Search and read or write
    einvalidate = 1, // Invalidate
    epush = 2, // Push
    eclear = 3, // Clear
  };
  
  enum class eLADSEL : uint32_t {
    ecache_addr = 0, // Cache address
    ephys_addr = 1, // Physical address
  };
  
  enum class eLACC : uint32_t {
    eread = 0, // Read
    ewrite = 1, // Write
  };
  
  // Bit field definition.
  struct {
    eLGO LGO : 1;
    uint32_t _reserved_0 : 1;
    uint32_t CACHEADDR : 12;
    eWSEL WSEL : 1;
    uint32_t _reserved_1 : 1;
    eTDSEL TDSEL : 1;
    uint32_t _reserved_2 : 3;
    uint32_t LCIVB : 1;
    uint32_t LCIMB : 1;
    uint32_t LCWAY : 1;
    uint32_t _reserved_3 : 1;
    eLCMD LCMD : 2;
    eLADSEL LADSEL : 1;
    eLACC LACC : 1;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCLCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCLCR &Instance() { return *reinterpret_cast<volatile PSCLCR*>(0xE0082804); }
};

// PS bus Cache search address register
//
union PSCSAR {
  
  enum class eLGO : uint32_t {
    eno_effect = 0, // Write: no effect. Read: no line command active.
    einit_cmd = 1, // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
  };
  
  // Bit field definition.
  struct {
    eLGO LGO : 1;
    uint32_t PHYADDR : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCSAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCSAR &Instance() { return *reinterpret_cast<volatile PSCSAR*>(0xE0082808); }
};

// PS bus Cache read/write value register
//
union PSCCVR {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCCVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCCVR &Instance() { return *reinterpret_cast<volatile PSCCVR*>(0xE008280C); }
};


} // namespace nLMEM