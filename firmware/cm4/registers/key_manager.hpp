#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// KEYMGR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nKEY_MANAGER {


// CSR Master Key Control Register
union MASTER_KEY_CTRL {
  
  // Key select for SNVS OTPMK. Default value comes from FUSE_MASTER_KEY_SEL.
  enum class eSELECT : uint32_t {
    // select key from UDF
    eSELECT_FROM_UDF = 0,
    // If LOCK = 1, select key from PUF, otherwise select key from fuse (bypass the fuse OTPMK to SNVS)
    eSELECT_FROM_PUF = 1,
  };
  
  // lock this register, prevent from writing. Default value comes from FUSE_MASTER_KEY_SEL_LOCK.
  enum class eLOCK : uint32_t {
    // not locked
    eUNLOCK = 0,
    // locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Key select for SNVS OTPMK. Default value comes from FUSE_MASTER_KEY_SEL.
    eSELECT SELECT : 1;
    uint32_t _reserved_0 : 15;
    // read-write - lock this register, prevent from writing. Default value comes from FUSE_MASTER_KEY_SEL_LOCK.
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MASTER_KEY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MASTER_KEY_CTRL &Instance() { return *reinterpret_cast<volatile MASTER_KEY_CTRL*>(0x40C80000); }
};

// CSR OTFAD-1 Key Control
union OTFAD1_KEY_CTRL {
  
  // key select for OTFAD-1. Default value comes from FUSE_OTFAD1_KEY_SEL.
  enum class eSELECT : uint32_t {
    // Select key from OCOTP USER_KEY5
    eSELECT_FROM_USER_KEY5 = 0,
    // If PUF_KEY_CTRL[LOCK] is 1, select key from PUF, otherwise select key from OCOTP USER_KEY5
    eSELECT_FROM_PUF = 1,
  };
  
  // lock this register, prevent from writing. Default value comes from FUSE_OTFAD1_KEY_SEL_LOCK.
  enum class eLOCK : uint32_t {
    // not locked
    eUNLOCK = 0,
    // locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - key select for OTFAD-1. Default value comes from FUSE_OTFAD1_KEY_SEL.
    eSELECT SELECT : 1;
    uint32_t _reserved_0 : 15;
    // read-write - lock this register, prevent from writing. Default value comes from FUSE_OTFAD1_KEY_SEL_LOCK.
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OTFAD1_KEY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OTFAD1_KEY_CTRL &Instance() { return *reinterpret_cast<volatile OTFAD1_KEY_CTRL*>(0x40C80010); }
};

// CSR OTFAD-2 Key Control
union OTFAD2_KEY_CTRL {
  
  // key select for OTFAD-2. Default value comes from FUSE_OTFAD1_KEY_SEL.
  enum class eSELECT : uint32_t {
    // select key from OCOTP USER_KEY5
    eSELECT_FROM_USER_KEY5 = 0,
    // If PUF_KEY_CTRL[LOCK] is 1, select key from PUF, otherwise select key from OCOTP USER_KEY5
    eSELECT_FROM_PUF = 1,
  };
  
  // lock this register, prevent from writing. Default value comes from FUSE_OTFAD2_KEY_SEL_LOCK.
  enum class eLOCK : uint32_t {
    // not locked
    eUNLOCK = 0,
    // locked
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - key select for OTFAD-2. Default value comes from FUSE_OTFAD1_KEY_SEL.
    eSELECT SELECT : 1;
    uint32_t _reserved_0 : 15;
    // read-write - lock this register, prevent from writing. Default value comes from FUSE_OTFAD2_KEY_SEL_LOCK.
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OTFAD2_KEY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OTFAD2_KEY_CTRL &Instance() { return *reinterpret_cast<volatile OTFAD2_KEY_CTRL*>(0x40C80018); }
};

// CSR IEE Key Control
union IEE_KEY_CTRL {
  
  // Restart load key signal for IEE
  enum class eRELOAD : uint32_t {
    // Do nothing
    eIDLE = 0,
    // Restart IEE key load flow
    eRESTART = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Restart load key signal for IEE
    eRELOAD RELOAD : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IEE_KEY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IEE_KEY_CTRL &Instance() { return *reinterpret_cast<volatile IEE_KEY_CTRL*>(0x40C80020); }
};

// CSR PUF Key Control
union PUF_KEY_CTRL {
  
  // Lock signal for key select
  enum class eLOCK : uint32_t {
    // Do not lock the key select
    eUNLOCK = 0,
    // Lock the key select to select key from PUF, otherwise bypass key from OCOPT and do not lock. Once it has been set to 1, it cannot be reset manually. It will be set to 0 when the IEE key reload operation is done.
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Lock signal for key select
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PUF_KEY_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PUF_KEY_CTRL &Instance() { return *reinterpret_cast<volatile PUF_KEY_CTRL*>(0x40C80030); }
};

// Slot 0 Control
union SLOT0_CTRL {
  
  // Lock whitelist
  enum class eLOCK_LIST : uint32_t {
    // Whitelist is not locked
    eUNLOCK = 0,
    // Whitelist is locked
    eLOCK = 1,
  };
  
  // Allow non-secure write access to this register and the slot it controls
  enum class eTZ_NS : uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };
  
  // Allow user write access to this register and the slot it controls
  enum class eTZ_USER : uint32_t {
    // Do not allow user write access
    ePREVENT = 0,
    // Allow user write access
    eALLOW = 1,
  };
  
  // Lock control of this slot
  enum class eLOCK_CONTROL : uint32_t {
    // Do not lock the control register of this slot
    eUNLOCK = 0,
    // Lock the control register of this slot
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Whitelist
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_0 : 11;
    // read-write - Lock whitelist
    eLOCK_LIST LOCK_LIST : 1;
    // read-write - Allow non-secure write access to this register and the slot it controls
    eTZ_NS TZ_NS : 1;
    // read-write - Allow user write access to this register and the slot it controls
    eTZ_USER TZ_USER : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Lock control of this slot
    eLOCK_CONTROL LOCK_CONTROL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SLOT0_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile SLOT0_CTRL &Instance() { return *reinterpret_cast<volatile SLOT0_CTRL*>(0x40C80400); }
};

// Slot1 Control
union SLOT1_CTRL {
  
  // Lock whitelist
  enum class eLOCK_LIST : uint32_t {
    // Whitelist is not locked
    eUNLOCK = 0,
    // Whitelist is locked
    eLOCK = 1,
  };
  
  // Allow non-secure write access to this register and the slot it controls
  enum class eTZ_NS : uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };
  
  // Allow user write access to this register and the slot it controls
  enum class eTZ_USER : uint32_t {
    // Do not allow user write access
    ePREVENT = 0,
    // Allow user write access
    eALLOW = 1,
  };
  
  // Lock control of this slot
  enum class eLOCK_CONTROL : uint32_t {
    // Do not lock the control register of this slot
    eUNLOCK = 0,
    // Lock the control register of this slot
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Whitelist
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_0 : 11;
    // read-write - Lock whitelist
    eLOCK_LIST LOCK_LIST : 1;
    // read-write - Allow non-secure write access to this register and the slot it controls
    eTZ_NS TZ_NS : 1;
    // read-write - Allow user write access to this register and the slot it controls
    eTZ_USER TZ_USER : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Lock control of this slot
    eLOCK_CONTROL LOCK_CONTROL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SLOT1_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile SLOT1_CTRL &Instance() { return *reinterpret_cast<volatile SLOT1_CTRL*>(0x40C80404); }
};

// Slot2 Control
union SLOT2_CTRL {
  
  // Lock whitelist
  enum class eLOCK_LIST : uint32_t {
    // Whitelist is not locked
    eUNLOCK = 0,
    // Whitelist is locked
    eLOCK = 1,
  };
  
  // Allow non-secure write access to this register and the slot it controls
  enum class eTZ_NS : uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };
  
  // Allow user write access to this register and the slot it controls
  enum class eTZ_USER : uint32_t {
    // Do not allow user write access
    ePREVENT = 0,
    // Allow user write access
    eALLOW = 1,
  };
  
  // Lock control of this slot
  enum class eLOCK_CONTROL : uint32_t {
    // Do not lock the control register of this slot
    eUNLOCK = 0,
    // Lock the control register of this slot
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Whitelist
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_0 : 11;
    // read-write - Lock whitelist
    eLOCK_LIST LOCK_LIST : 1;
    // read-write - Allow non-secure write access to this register and the slot it controls
    eTZ_NS TZ_NS : 1;
    // read-write - Allow user write access to this register and the slot it controls
    eTZ_USER TZ_USER : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Lock control of this slot
    eLOCK_CONTROL LOCK_CONTROL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SLOT2_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile SLOT2_CTRL &Instance() { return *reinterpret_cast<volatile SLOT2_CTRL*>(0x40C80408); }
};

// Slot3 Control
union SLOT3_CTRL {
  
  // Lock whitelist
  enum class eLOCK_LIST : uint32_t {
    // Whitelist is not locked
    eUNLOCK = 0,
    // Whitelist is locked
    eLOCK = 1,
  };
  
  // Allow non-secure write access to this register and the slot it controls
  enum class eTZ_NS : uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };
  
  // Allow user write access to this register and the slot it controls
  enum class eTZ_USER : uint32_t {
    // Do not allow user write access
    ePREVENT = 0,
    // Allow user write access
    eALLOW = 1,
  };
  
  // Lock control of this slot
  enum class eLOCK_CONTROL : uint32_t {
    // Do not lock the control register of this slot
    eUNLOCK = 0,
    // Lock the control register of this slot
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Whitelist
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_0 : 11;
    // read-write - Lock whitelist
    eLOCK_LIST LOCK_LIST : 1;
    // read-write - Allow non-secure write access to this register and the slot it controls
    eTZ_NS TZ_NS : 1;
    // read-write - Allow user write access to this register and the slot it controls
    eTZ_USER TZ_USER : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Lock control of this slot
    eLOCK_CONTROL LOCK_CONTROL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SLOT3_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile SLOT3_CTRL &Instance() { return *reinterpret_cast<volatile SLOT3_CTRL*>(0x40C8040C); }
};

// Slot 4 Control
union SLOT4_CTRL {
  
  // Lock whitelist
  enum class eLOCK_LIST : uint32_t {
    // Whitelist is not locked
    eUNLOCK = 0,
    // Whitelist is locked
    eLOCK = 1,
  };
  
  // Allow non-secure write access to this register and the slot it controls
  enum class eTZ_NS : uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };
  
  // Allow user write access to this register and the slot it controls
  enum class eTZ_USER : uint32_t {
    // Do not allow user write access
    ePREVENT = 0,
    // Allow user write access
    eALLOW = 1,
  };
  
  // Lock control of this slot
  enum class eLOCK_CONTROL : uint32_t {
    // Do not lock the control register of this slot
    eUNLOCK = 0,
    // Lock the control register of this slot
    eLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Whitelist
    uint32_t WHITE_LIST : 4;
    uint32_t _reserved_0 : 11;
    // read-write - Lock whitelist
    eLOCK_LIST LOCK_LIST : 1;
    // read-write - Allow non-secure write access to this register and the slot it controls
    eTZ_NS TZ_NS : 1;
    // read-write - Allow user write access to this register and the slot it controls
    eTZ_USER TZ_USER : 1;
    uint32_t _reserved_1 : 13;
    // read-write - Lock control of this slot
    eLOCK_CONTROL LOCK_CONTROL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SLOT4_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x0000000F; }
  static inline volatile SLOT4_CTRL &Instance() { return *reinterpret_cast<volatile SLOT4_CTRL*>(0x40C80410); }
};


} // namespace nKEY_MANAGER