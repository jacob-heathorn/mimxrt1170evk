#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IEE_APC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nIEE_APC {


// End address of IEE region (n)
union REGION0_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION0_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION0_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION0_TOP_ADDR*>(0x40068000); }
};

// Start address of IEE region (n)
union REGION0_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION0_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION0_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION0_BOT_ADDR*>(0x40068004); }
};

// Region control of core domain 0 for region (n)
union REGION0_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION0_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION0_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION0_RDC_D0*>(0x40068008); }
};

// Region control of core domain 1 for region (n)
union REGION0_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION0_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION0_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION0_RDC_D1*>(0x4006800C); }
};

// End address of IEE region (n)
union REGION1_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION1_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION1_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION1_TOP_ADDR*>(0x40068010); }
};

// Start address of IEE region (n)
union REGION1_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION1_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION1_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION1_BOT_ADDR*>(0x40068014); }
};

// Region control of core domain 0 for region (n)
union REGION1_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION1_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION1_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION1_RDC_D0*>(0x40068018); }
};

// Region control of core domain 1 for region (n)
union REGION1_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION1_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION1_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION1_RDC_D1*>(0x4006801C); }
};

// End address of IEE region (n)
union REGION2_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION2_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION2_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION2_TOP_ADDR*>(0x40068020); }
};

// Start address of IEE region (n)
union REGION2_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION2_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION2_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION2_BOT_ADDR*>(0x40068024); }
};

// Region control of core domain 0 for region (n)
union REGION2_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION2_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION2_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION2_RDC_D0*>(0x40068028); }
};

// Region control of core domain 1 for region (n)
union REGION2_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION2_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION2_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION2_RDC_D1*>(0x4006802C); }
};

// End address of IEE region (n)
union REGION3_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION3_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION3_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION3_TOP_ADDR*>(0x40068030); }
};

// Start address of IEE region (n)
union REGION3_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION3_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION3_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION3_BOT_ADDR*>(0x40068034); }
};

// Region control of core domain 0 for region (n)
union REGION3_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION3_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION3_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION3_RDC_D0*>(0x40068038); }
};

// Region control of core domain 1 for region (n)
union REGION3_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION3_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION3_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION3_RDC_D1*>(0x4006803C); }
};

// End address of IEE region (n)
union REGION4_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION4_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION4_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION4_TOP_ADDR*>(0x40068040); }
};

// Start address of IEE region (n)
union REGION4_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION4_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION4_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION4_BOT_ADDR*>(0x40068044); }
};

// Region control of core domain 0 for region (n)
union REGION4_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION4_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION4_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION4_RDC_D0*>(0x40068048); }
};

// Region control of core domain 1 for region (n)
union REGION4_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION4_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION4_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION4_RDC_D1*>(0x4006804C); }
};

// End address of IEE region (n)
union REGION5_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION5_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION5_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION5_TOP_ADDR*>(0x40068050); }
};

// Start address of IEE region (n)
union REGION5_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION5_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION5_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION5_BOT_ADDR*>(0x40068054); }
};

// Region control of core domain 0 for region (n)
union REGION5_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION5_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION5_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION5_RDC_D0*>(0x40068058); }
};

// Region control of core domain 1 for region (n)
union REGION5_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION5_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION5_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION5_RDC_D1*>(0x4006805C); }
};

// End address of IEE region (n)
union REGION6_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION6_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION6_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION6_TOP_ADDR*>(0x40068060); }
};

// Start address of IEE region (n)
union REGION6_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION6_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION6_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION6_BOT_ADDR*>(0x40068064); }
};

// Region control of core domain 0 for region (n)
union REGION6_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION6_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION6_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION6_RDC_D0*>(0x40068068); }
};

// Region control of core domain 1 for region (n)
union REGION6_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION6_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION6_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION6_RDC_D1*>(0x4006806C); }
};

// End address of IEE region (n)
union REGION7_TOP_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - End address of IEE region
    uint32_t TOP_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION7_TOP_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION7_TOP_ADDR &Instance() { return *reinterpret_cast<volatile REGION7_TOP_ADDR*>(0x40068070); }
};

// Start address of IEE region (n)
union REGION7_BOT_ADDR {
  
  // Bit field definition.
  struct {
    // read-write - Start address of IEE region
    uint32_t BOT_ADDR : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION7_BOT_ADDR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION7_BOT_ADDR &Instance() { return *reinterpret_cast<volatile REGION7_BOT_ADDR*>(0x40068074); }
};

// Region control of core domain 0 for region (n)
union REGION7_RDC_D0 {
  
  // Write disable of core domain 1
  enum class eRDC_D0_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D0_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D0_WRITE_DIS RDC_D0_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D0_LOCK RDC_D0_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION7_RDC_D0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION7_RDC_D0 &Instance() { return *reinterpret_cast<volatile REGION7_RDC_D0*>(0x40068078); }
};

// Region control of core domain 1 for region (n)
union REGION7_RDC_D1 {
  
  // Write disable of core domain 1
  enum class eRDC_D1_WRITE_DIS : uint32_t {
    // Write to TOP_ADDR and BOT_ADDR of this region enabled
    eENABLE = 0,
    // Write to TOP_ADDR and BOT_ADDR of this region disabled
    eDISABLE = 1,
  };
  
  // Lock bit for bit 0
  enum class eRDC_D1_LOCK : uint32_t {
    // Bit 0 is unlocked
    eUNLOCK = 0,
    // Bit 0 is locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Write disable of core domain 1
    eRDC_D1_WRITE_DIS RDC_D1_WRITE_DIS : 1;
    // read-writeOnce - Lock bit for bit 0
    eRDC_D1_LOCK RDC_D1_LOCK : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  REGION7_RDC_D1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile REGION7_RDC_D1 &Instance() { return *reinterpret_cast<volatile REGION7_RDC_D1*>(0x4006807C); }
};


} // namespace nIEE_APC