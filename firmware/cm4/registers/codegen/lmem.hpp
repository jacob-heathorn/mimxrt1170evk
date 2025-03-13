#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// LMEM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nLMEM {


// PC bus Cache control register
union PCCCR {
  
  // Cache enable
  enum class eENCACHE : uint32_t {
    // Cache disabled
    edisabled = 0,
    // Cache enabled
    eenabled = 1,
  };
  
  // Enable Write Buffer
  enum class eENWRBUF : uint32_t {
    // Write buffer disabled
    edisabled = 0,
    // Write buffer enabled
    eenabled = 1,
  };
  
  // Forces all cacheable spaces to write through
  enum class ePCCR2 : uint32_t {
    // Does NOT force all cacheable spaces to write through
    ePCCR2_0 = 0,
    // Forces all cacheable spaces to write through
    ePCCR2_1 = 1,
  };
  
  // Forces no allocation on cache misses
  enum class ePCCR3 : uint32_t {
    // Allocation on cache misses
    ePCCR3_0 = 0,
    // Forces no allocation on cache misses (must also have PCCR2 asserted)
    ePCCR3_1 = 1,
  };
  
  // Invalidate Way 0
  enum class eINVW0 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, invalidate all lines in way 0.
    einvw0 = 1,
  };
  
  // Push Way 0
  enum class ePUSHW0 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, push all modified lines in way 0
    epushw0 = 1,
  };
  
  // Invalidate Way 1
  enum class eINVW1 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, invalidate all lines in way 1
    einvw1 = 1,
  };
  
  // Push Way 1
  enum class ePUSHW1 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, push all modified lines in way 1
    epushw1 = 1,
  };
  
  // Initiate Cache Command
  enum class eGO : uint32_t {
    // Write: no effect. Read: no cache command active.
    eno_effect = 0,
    // Write: initiate command indicated by bits 27-24. Read: cache command active.
    einit_cmd = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Cache enable
    eENCACHE ENCACHE : 1;
    // read-write - Enable Write Buffer
    eENWRBUF ENWRBUF : 1;
    // read-write - Forces all cacheable spaces to write through
    ePCCR2 PCCR2 : 1;
    // read-write - Forces no allocation on cache misses
    ePCCR3 PCCR3 : 1;
    uint32_t _reserved_0 : 20;
    // read-write - Invalidate Way 0
    eINVW0 INVW0 : 1;
    // read-write - Push Way 0
    ePUSHW0 PUSHW0 : 1;
    // read-write - Invalidate Way 1
    eINVW1 INVW1 : 1;
    // read-write - Push Way 1
    ePUSHW1 PUSHW1 : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Initiate Cache Command
    eGO GO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCCR &ref() { return *reinterpret_cast<volatile PCCCR*>(0xE0082000); }
};

// PC bus Cache line control register
union PCCLCR {
  
  // Initiate Cache Line Command
  enum class eLGO : uint32_t {
    // Write: no effect. Read: no line command active.
    eno_effect = 0,
    // Write: initiate line command indicated by bits 27-24. Read: line command active.
    einit_cmd = 1,
  };
  
  // Way select
  enum class eWSEL : uint32_t {
    // Way 0
    eway0 = 0,
    // Way 1
    eway1 = 1,
  };
  
  // Tag/Data Select
  enum class eTDSEL : uint32_t {
    // Data
    edata = 0,
    // Tag
    etag = 1,
  };
  
  // Line Command
  enum class eLCMD : uint32_t {
    // Search and read or write
    esearch_rw = 0,
    // Invalidate
    einvalidate = 1,
    // Push
    epush = 2,
    // Clear
    eclear = 3,
  };
  
  // Line Address Select
  enum class eLADSEL : uint32_t {
    // Cache address
    ecache_addr = 0,
    // Physical address
    ephys_addr = 1,
  };
  
  // Line access type
  enum class eLACC : uint32_t {
    // Read
    eread = 0,
    // Write
    ewrite = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Initiate Cache Line Command
    eLGO LGO : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Cache address
    uint32_t CACHEADDR : 12;
    // read-write - Way select
    eWSEL WSEL : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Tag/Data Select
    eTDSEL TDSEL : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Line Command Initial Valid Bit
    uint32_t LCIVB : 1;
    // read-write - Line Command Initial Modified Bit
    uint32_t LCIMB : 1;
    // read-write - Line Command Way
    uint32_t LCWAY : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Line Command
    eLCMD LCMD : 2;
    // read-write - Line Address Select
    eLADSEL LADSEL : 1;
    // read-write - Line access type
    eLACC LACC : 1;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCLCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCLCR &ref() { return *reinterpret_cast<volatile PCCLCR*>(0xE0082004); }
};

// PC bus Cache search address register
union PCCSAR {
  
  // Initiate Cache Line Command
  enum class eLGO : uint32_t {
    // Write: no effect. Read: no line command active.
    eno_effect = 0,
    // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
    einit_cmd = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Initiate Cache Line Command
    eLGO LGO : 1;
    // read-write - Physical Address
    uint32_t PHYADDR : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCSAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCSAR &ref() { return *reinterpret_cast<volatile PCCSAR*>(0xE0082008); }
};

// PC bus Cache read/write value register
union PCCCVR {
  
  // Bit field definition.
  struct {
    // read-write - Cache read/write Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PCCCVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PCCCVR &ref() { return *reinterpret_cast<volatile PCCCVR*>(0xE008200C); }
};

// PS bus Cache control register
union PSCCR {
  
  // Cache enable
  enum class eENCACHE : uint32_t {
    // Cache disabled
    edisabled = 0,
    // Cache enabled
    eenabled = 1,
  };
  
  // Enable Write Buffer
  enum class eENWRBUF : uint32_t {
    // Write buffer disabled
    edisabled = 0,
    // Write buffer enabled
    eenabled = 1,
  };
  
  // Forces all cacheable spaces to write through
  enum class ePSCR2 : uint32_t {
    // Does NOT force all cacheable spaces to write through
    ePSCR2_0 = 0,
    // Forces all cacheable spaces to write through
    ePSCR2_1 = 1,
  };
  
  // Forces no allocation on cache misses
  enum class ePSCR3 : uint32_t {
    // Allocation on cache misses
    ePSCR3_0 = 0,
    // Forces no allocation on cache misses (must also have PSCR2 asserted)
    ePSCR3_1 = 1,
  };
  
  // Invalidate Way 0
  enum class eINVW0 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, invalidate all lines in way 0.
    einvw0 = 1,
  };
  
  // Push Way 0
  enum class ePUSHW0 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, push all modified lines in way 0
    epushw0 = 1,
  };
  
  // Invalidate Way 1
  enum class eINVW1 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, invalidate all lines in way 1
    einvw1 = 1,
  };
  
  // Push Way 1
  enum class ePUSHW1 : uint32_t {
    // No operation
    eno_operation = 0,
    // When setting the GO bit, push all modified lines in way 1
    epushw1 = 1,
  };
  
  // Initiate Cache Command
  enum class eGO : uint32_t {
    // Write: no effect. Read: no cache command active.
    eno_effect = 0,
    // Write: initiate command indicated by bits 27-24. Read: cache command active.
    einit_cmd = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Cache enable
    eENCACHE ENCACHE : 1;
    // read-write - Enable Write Buffer
    eENWRBUF ENWRBUF : 1;
    // read-write - Forces all cacheable spaces to write through
    ePSCR2 PSCR2 : 1;
    // read-write - Forces no allocation on cache misses
    ePSCR3 PSCR3 : 1;
    uint32_t _reserved_0 : 20;
    // read-write - Invalidate Way 0
    eINVW0 INVW0 : 1;
    // read-write - Push Way 0
    ePUSHW0 PUSHW0 : 1;
    // read-write - Invalidate Way 1
    eINVW1 INVW1 : 1;
    // read-write - Push Way 1
    ePUSHW1 PUSHW1 : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Initiate Cache Command
    eGO GO : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCCR &ref() { return *reinterpret_cast<volatile PSCCR*>(0xE0082800); }
};

// PS bus Cache line control register
union PSCLCR {
  
  // Initiate Cache Line Command
  enum class eLGO : uint32_t {
    // Write: no effect. Read: no line command active.
    eno_effect = 0,
    // Write: initiate line command indicated by bits 27-24. Read: line command active.
    einit_cmd = 1,
  };
  
  // Way select
  enum class eWSEL : uint32_t {
    // Way 0
    eway0 = 0,
    // Way 1
    eway1 = 1,
  };
  
  // Tag/Data Select
  enum class eTDSEL : uint32_t {
    // Data
    edata = 0,
    // Tag
    etag = 1,
  };
  
  // Line Command
  enum class eLCMD : uint32_t {
    // Search and read or write
    esearch_rw = 0,
    // Invalidate
    einvalidate = 1,
    // Push
    epush = 2,
    // Clear
    eclear = 3,
  };
  
  // Line Address Select
  enum class eLADSEL : uint32_t {
    // Cache address
    ecache_addr = 0,
    // Physical address
    ephys_addr = 1,
  };
  
  // Line access type
  enum class eLACC : uint32_t {
    // Read
    eread = 0,
    // Write
    ewrite = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Initiate Cache Line Command
    eLGO LGO : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Cache address
    uint32_t CACHEADDR : 12;
    // read-write - Way select
    eWSEL WSEL : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Tag/Data Select
    eTDSEL TDSEL : 1;
    uint32_t _reserved_2 : 3;
    // read-write - Line Command Initial Valid Bit
    uint32_t LCIVB : 1;
    // read-write - Line Command Initial Modified Bit
    uint32_t LCIMB : 1;
    // read-write - Line Command Way
    uint32_t LCWAY : 1;
    uint32_t _reserved_3 : 1;
    // read-write - Line Command
    eLCMD LCMD : 2;
    // read-write - Line Address Select
    eLADSEL LADSEL : 1;
    // read-write - Line access type
    eLACC LACC : 1;
    uint32_t _reserved_4 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCLCR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCLCR &ref() { return *reinterpret_cast<volatile PSCLCR*>(0xE0082804); }
};

// PS bus Cache search address register
union PSCSAR {
  
  // Initiate Cache Line Command
  enum class eLGO : uint32_t {
    // Write: no effect. Read: no line command active.
    eno_effect = 0,
    // Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
    einit_cmd = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Initiate Cache Line Command
    eLGO LGO : 1;
    // read-write - Physical Address
    uint32_t PHYADDR : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCSAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCSAR &ref() { return *reinterpret_cast<volatile PSCSAR*>(0xE0082808); }
};

// PS bus Cache read/write value register
union PSCCVR {
  
  // Bit field definition.
  struct {
    // read-write - Cache read/write Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PSCCVR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PSCCVR &ref() { return *reinterpret_cast<volatile PSCCVR*>(0xE008280C); }
};


} // namespace nLMEM