#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IOMUXC LPSR GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nIOMUXC_LPSR_GPR {


// GPR0 General Purpose Register
union GPR0 {
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    // read-write - CM4 Vector table offset value lower bits out of reset
    uint32_t CM4_INIT_VTOR_LOW : 13;
    uint32_t _reserved_1 : 12;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile GPR0 &ref() { return *reinterpret_cast<volatile GPR0*>(0x40C0C000); }
};

// GPR1 General Purpose Register
union GPR1 {
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - CM4 Vector table offset value higher bits out of reset
    uint32_t CM4_INIT_VTOR_HIGH : 16;
    uint32_t _reserved_0 : 12;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile GPR1 &ref() { return *reinterpret_cast<volatile GPR1*>(0x40C0C004); }
};

// GPR2 General Purpose Register
union GPR2 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-0
    uint32_t APC_AC_R0_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR2 &ref() { return *reinterpret_cast<volatile GPR2*>(0x40C0C008); }
};

// GPR3 General Purpose Register
union GPR3 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-0
    uint32_t APC_AC_R0_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR3 &ref() { return *reinterpret_cast<volatile GPR3*>(0x40C0C00C); }
};

// GPR4 General Purpose Register
union GPR4 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-1
    uint32_t APC_AC_R1_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR4 &ref() { return *reinterpret_cast<volatile GPR4*>(0x40C0C010); }
};

// GPR5 General Purpose Register
union GPR5 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-1
    uint32_t APC_AC_R1_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR5 &ref() { return *reinterpret_cast<volatile GPR5*>(0x40C0C014); }
};

// GPR6 General Purpose Register
union GPR6 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-2
    uint32_t APC_AC_R2_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR6 &ref() { return *reinterpret_cast<volatile GPR6*>(0x40C0C018); }
};

// GPR7 General Purpose Register
union GPR7 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-2
    uint32_t APC_AC_R2_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR7 &ref() { return *reinterpret_cast<volatile GPR7*>(0x40C0C01C); }
};

// GPR8 General Purpose Register
union GPR8 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-3
    uint32_t APC_AC_R3_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR8 &ref() { return *reinterpret_cast<volatile GPR8*>(0x40C0C020); }
};

// GPR9 General Purpose Register
union GPR9 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-3
    uint32_t APC_AC_R3_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR9 &ref() { return *reinterpret_cast<volatile GPR9*>(0x40C0C024); }
};

// GPR10 General Purpose Register
union GPR10 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-4
    uint32_t APC_AC_R4_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR10 &ref() { return *reinterpret_cast<volatile GPR10*>(0x40C0C028); }
};

// GPR11 General Purpose Register
union GPR11 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-4
    uint32_t APC_AC_R4_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR11 &ref() { return *reinterpret_cast<volatile GPR11*>(0x40C0C02C); }
};

// GPR12 General Purpose Register
union GPR12 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-5
    uint32_t APC_AC_R5_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR12 &ref() { return *reinterpret_cast<volatile GPR12*>(0x40C0C030); }
};

// GPR13 General Purpose Register
union GPR13 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-5
    uint32_t APC_AC_R5_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR13 &ref() { return *reinterpret_cast<volatile GPR13*>(0x40C0C034); }
};

// GPR14 General Purpose Register
union GPR14 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-6
    uint32_t APC_AC_R6_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR14 &ref() { return *reinterpret_cast<volatile GPR14*>(0x40C0C038); }
};

// GPR15 General Purpose Register
union GPR15 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-6
    uint32_t APC_AC_R6_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR15 &ref() { return *reinterpret_cast<volatile GPR15*>(0x40C0C03C); }
};

// GPR16 General Purpose Register
union GPR16 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC start address of memory region-7
    uint32_t APC_AC_R7_BOT : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR16 &ref() { return *reinterpret_cast<volatile GPR16*>(0x40C0C040); }
};

// GPR17 General Purpose Register
union GPR17 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - APC end address of memory region-7
    uint32_t APC_AC_R7_TOP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR17 &ref() { return *reinterpret_cast<volatile GPR17*>(0x40C0C044); }
};

// GPR18 General Purpose Register
union GPR18 {
  
  // APC memory region-0 encryption enable
  enum class eAPC_R0_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-0 encryption enable
    eAPC_R0_ENCRYPT_ENABLE APC_R0_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR18 &ref() { return *reinterpret_cast<volatile GPR18*>(0x40C0C048); }
};

// GPR19 General Purpose Register
union GPR19 {
  
  // APC memory region-1 encryption enable
  enum class eAPC_R1_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-1 encryption enable
    eAPC_R1_ENCRYPT_ENABLE APC_R1_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR19 &ref() { return *reinterpret_cast<volatile GPR19*>(0x40C0C04C); }
};

// GPR20 General Purpose Register
union GPR20 {
  
  // APC memory region-2 encryption enable
  enum class eAPC_R2_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-2 encryption enable
    eAPC_R2_ENCRYPT_ENABLE APC_R2_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR20 &ref() { return *reinterpret_cast<volatile GPR20*>(0x40C0C050); }
};

// GPR21 General Purpose Register
union GPR21 {
  
  // APC memory region-3 encryption enable
  enum class eAPC_R3_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-3 encryption enable
    eAPC_R3_ENCRYPT_ENABLE APC_R3_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR21 &ref() { return *reinterpret_cast<volatile GPR21*>(0x40C0C054); }
};

// GPR22 General Purpose Register
union GPR22 {
  
  // APC memory region-4 encryption enable
  enum class eAPC_R4_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-4 encryption enable
    eAPC_R4_ENCRYPT_ENABLE APC_R4_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR22 &ref() { return *reinterpret_cast<volatile GPR22*>(0x40C0C058); }
};

// GPR23 General Purpose Register
union GPR23 {
  
  // APC memory region-5 encryption enable
  enum class eAPC_R5_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-5 encryption enable
    eAPC_R5_ENCRYPT_ENABLE APC_R5_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR23 &ref() { return *reinterpret_cast<volatile GPR23*>(0x40C0C05C); }
};

// GPR24 General Purpose Register
union GPR24 {
  
  // APC memory region-6 encryption enable
  enum class eAPC_R6_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-6 encryption enable
    eAPC_R6_ENCRYPT_ENABLE APC_R6_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR24 &ref() { return *reinterpret_cast<volatile GPR24*>(0x40C0C060); }
};

// GPR25 General Purpose Register
union GPR25 {
  
  // APC memory region-7 encryption enable
  enum class eAPC_R7_ENCRYPT_ENABLE : uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };
  
  // APC global enable bit
  enum class eAPC_VALID : uint32_t {
    // No effect
    eDIS = 0,
    // Enable encryption for GPRx[APC_x_ENCRYPT_ENABLE] (valid for GPR2-GPR25)
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    // read-write - APC memory region-7 encryption enable
    eAPC_R7_ENCRYPT_ENABLE APC_R7_ENCRYPT_ENABLE : 1;
    // read-write - APC global enable bit
    eAPC_VALID APC_VALID : 1;
    uint32_t _reserved_1 : 10;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR25 &ref() { return *reinterpret_cast<volatile GPR25*>(0x40C0C064); }
};

// GPR26 General Purpose Register
union GPR26 {
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Vector table offset register out of reset. See the ARM v7-M Architecture Reference Manual for more information about the vector table offset register (VTOR).
    uint32_t CM7_INIT_VTOR : 25;
    // read-write - General purpose bits
    uint32_t FIELD_0 : 3;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR26() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile GPR26 &ref() { return *reinterpret_cast<volatile GPR26*>(0x40C0C068); }
};

// GPR33 General Purpose Register
union GPR33 {
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clear CM4 NMI holding register
    uint32_t M4_NMI_CLEAR : 1;
    uint32_t _reserved_0 : 7;
    // read-write - Clear USBPHY1 wakeup interrupt holding register
    uint32_t USBPHY1_WAKEUP_IRQ_CLEAR : 1;
    // read-write - Clear USBPHY1 wakeup interrupt holding register
    uint32_t USBPHY2_WAKEUP_IRQ_CLEAR : 1;
    uint32_t _reserved_1 : 18;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR33 &ref() { return *reinterpret_cast<volatile GPR33*>(0x40C0C084); }
};

// GPR34 General Purpose Register
union GPR34 {
  
  // Mask CM7 NMI pin input
  enum class eM7_NMI_MASK : uint32_t {
    // NMI input from IO to CM7 is not blocked
    eDISABLE = 0,
    // NMI input from IO to CM7 is blocked
    eENABLE = 1,
  };
  
  // Mask CM4 NMI pin input
  enum class eM4_NMI_MASK : uint32_t {
    // NMI input from IO to CM4 is not blocked
    eDISABLE = 0,
    // NMI input from IO to CM4 is blocked
    eENABLE = 1,
  };
  
  // CM4 sleep request selection
  enum class eM4_GPC_SLEEP_SEL : uint32_t {
    // CM4 SLEEPDEEP is sent to GPC
    eDISABLE = 0,
    // CM4 SLEEPING is sent to GPC
    eNABLE = 1,
  };
  
  // Security error response enable
  enum class eSEC_ERR_RESP : uint32_t {
    // OKEY response
    eDISABLE = 0,
    // SLVError (default)
    eENABLE = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - GPIO_LPSR IO bank supply voltage range selection
    uint32_t GPIO_LPSR_HIGH_RANGE : 1;
    // read-write - GPIO_LPSR IO bank supply voltage range selection
    uint32_t GPIO_LPSR_LOW_RANGE : 1;
    // read-write - Mask CM7 NMI pin input
    eM7_NMI_MASK M7_NMI_MASK : 1;
    // read-write - Mask CM4 NMI pin input
    eM4_NMI_MASK M4_NMI_MASK : 1;
    // read-write - CM4 sleep request selection
    eM4_GPC_SLEEP_SEL M4_GPC_SLEEP_SEL : 1;
    uint32_t _reserved_1 : 5;
    // read-write - Security error response enable
    eSEC_ERR_RESP SEC_ERR_RESP : 1;
    uint32_t _reserved_2 : 16;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR34() = delete;
  inline void Reset() volatile { this->value = 0x00000E00; }
  static inline volatile GPR34 &ref() { return *reinterpret_cast<volatile GPR34*>(0x40C0C088); }
};

// GPR35 General Purpose Register
union GPR35 {
  
  // ADC1 doze mode
  enum class eADC1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // ADC1 stop request
  enum class eADC1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // ADC1 stop mode selection. This bitfield cannot change when ADC1_STOP_REQ is asserted.
  enum class eADC1_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // ADC2 doze mode
  enum class eADC2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // ADC2 stop request
  enum class eADC2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // ADC2 stop mode selection. This bitfield cannot change when ADC2_STOP_REQ is asserted.
  enum class eADC2_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // CAN3 doze mode
  enum class eCAAM_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // CAAM stop request
  enum class eCAAM_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // CAN1 doze mode
  enum class eCAN1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // CAN1 stop request
  enum class eCAN1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // CAN2 doze mode
  enum class eCAN2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // CAN2 stop request
  enum class eCAN2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // CAN3 doze mode
  enum class eCAN3_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // CAN3 stop request
  enum class eCAN3_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // EDMA stop request
  enum class eEDMA_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // EDMA_LPSR stop request
  enum class eEDMA_LPSR_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // ENET doze mode
  enum class eENET_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // ENET stop request
  enum class eENET_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // ENET1G doze mode
  enum class eENET1G_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // ENET1G stop request
  enum class eENET1G_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXIO2 doze mode
  enum class eFLEXIO1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // FLEXIO2 doze mode
  enum class eFLEXIO2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // FLEXSPI1 doze mode
  enum class eFLEXSPI1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // FLEXSPI1 stop request
  enum class eFLEXSPI1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXSPI2 doze mode
  enum class eFLEXSPI2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // FLEXSPI2 stop request
  enum class eFLEXSPI2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - ADC1 doze mode
    eADC1_IPG_DOZE ADC1_IPG_DOZE : 1;
    // read-write - ADC1 stop request
    eADC1_STOP_REQ ADC1_STOP_REQ : 1;
    // read-write - ADC1 stop mode selection. This bitfield cannot change when ADC1_STOP_REQ is asserted.
    eADC1_IPG_STOP_MODE ADC1_IPG_STOP_MODE : 1;
    // read-write - ADC2 doze mode
    eADC2_IPG_DOZE ADC2_IPG_DOZE : 1;
    // read-write - ADC2 stop request
    eADC2_STOP_REQ ADC2_STOP_REQ : 1;
    // read-write - ADC2 stop mode selection. This bitfield cannot change when ADC2_STOP_REQ is asserted.
    eADC2_IPG_STOP_MODE ADC2_IPG_STOP_MODE : 1;
    // read-write - CAN3 doze mode
    eCAAM_IPG_DOZE CAAM_IPG_DOZE : 1;
    // read-write - CAAM stop request
    eCAAM_STOP_REQ CAAM_STOP_REQ : 1;
    // read-write - CAN1 doze mode
    eCAN1_IPG_DOZE CAN1_IPG_DOZE : 1;
    // read-write - CAN1 stop request
    eCAN1_STOP_REQ CAN1_STOP_REQ : 1;
    // read-write - CAN2 doze mode
    eCAN2_IPG_DOZE CAN2_IPG_DOZE : 1;
    // read-write - CAN2 stop request
    eCAN2_STOP_REQ CAN2_STOP_REQ : 1;
    // read-write - CAN3 doze mode
    eCAN3_IPG_DOZE CAN3_IPG_DOZE : 1;
    // read-write - CAN3 stop request
    eCAN3_STOP_REQ CAN3_STOP_REQ : 1;
    uint32_t _reserved_0 : 1;
    // read-write - EDMA stop request
    eEDMA_STOP_REQ EDMA_STOP_REQ : 1;
    // read-write - EDMA_LPSR stop request
    eEDMA_LPSR_STOP_REQ EDMA_LPSR_STOP_REQ : 1;
    // read-write - ENET doze mode
    eENET_IPG_DOZE ENET_IPG_DOZE : 1;
    // read-write - ENET stop request
    eENET_STOP_REQ ENET_STOP_REQ : 1;
    // read-write - ENET1G doze mode
    eENET1G_IPG_DOZE ENET1G_IPG_DOZE : 1;
    // read-write - ENET1G stop request
    eENET1G_STOP_REQ ENET1G_STOP_REQ : 1;
    // read-write - FLEXIO2 doze mode
    eFLEXIO1_IPG_DOZE FLEXIO1_IPG_DOZE : 1;
    // read-write - FLEXIO2 doze mode
    eFLEXIO2_IPG_DOZE FLEXIO2_IPG_DOZE : 1;
    // read-write - FLEXSPI1 doze mode
    eFLEXSPI1_IPG_DOZE FLEXSPI1_IPG_DOZE : 1;
    // read-write - FLEXSPI1 stop request
    eFLEXSPI1_STOP_REQ FLEXSPI1_STOP_REQ : 1;
    // read-write - FLEXSPI2 doze mode
    eFLEXSPI2_IPG_DOZE FLEXSPI2_IPG_DOZE : 1;
    // read-write - FLEXSPI2 stop request
    eFLEXSPI2_STOP_REQ FLEXSPI2_STOP_REQ : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR35 &ref() { return *reinterpret_cast<volatile GPR35*>(0x40C0C08C); }
};

// GPR36 General Purpose Register
union GPR36 {
  
  // GPT1 doze mode
  enum class eGPT1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // GPT2 doze mode
  enum class eGPT2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // GPT3 doze mode
  enum class eGPT3_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // GPT4 doze mode
  enum class eGPT4_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // GPT5 doze mode
  enum class eGPT5_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // GPT6 doze mode
  enum class eGPT6_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C1 doze mode
  enum class eLPI2C1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C1 stop request
  enum class eLPI2C1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C1 stop mode selection. This bitfield cannot change when LPI2C1_STOP_REQ is asserted.
  enum class eLPI2C1_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPI2C2 doze mode
  enum class eLPI2C2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C2 stop request
  enum class eLPI2C2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C2 stop mode selection. This bitfield cannot change when LPI2C2_STOP_REQ is asserted.
  enum class eLPI2C2_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPI2C3 doze mode
  enum class eLPI2C3_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C3 stop request
  enum class eLPI2C3_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C3 stop mode selection. This bitfield cannot change when LPI2C3_STOP_REQ is asserted.
  enum class eLPI2C3_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPI2C4 doze mode
  enum class eLPI2C4_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C4 stop request
  enum class eLPI2C4_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C4 stop mode selection. This bitfield cannot change when LPI2C4_STOP_REQ is asserted.
  enum class eLPI2C4_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPI2C5 doze mode
  enum class eLPI2C5_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C5 stop request
  enum class eLPI2C5_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C5 stop mode selection. This bitfield cannot change when LPI2C5_STOP_REQ is asserted.
  enum class eLPI2C5_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPI2C6 doze mode
  enum class eLPI2C6_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPI2C6 stop request
  enum class eLPI2C6_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPI2C6 stop mode selection. This bitfield cannot change when LPI2C6_STOP_REQ is asserted.
  enum class eLPI2C6_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPSPI1 doze mode
  enum class eLPSPI1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI1 stop request
  enum class eLPSPI1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI1 stop mode selection. This bitfield cannot change when LPSPI1_STOP_REQ is asserted.
  enum class eLPSPI1_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - GPT1 doze mode
    eGPT1_IPG_DOZE GPT1_IPG_DOZE : 1;
    // read-write - GPT2 doze mode
    eGPT2_IPG_DOZE GPT2_IPG_DOZE : 1;
    // read-write - GPT3 doze mode
    eGPT3_IPG_DOZE GPT3_IPG_DOZE : 1;
    // read-write - GPT4 doze mode
    eGPT4_IPG_DOZE GPT4_IPG_DOZE : 1;
    // read-write - GPT5 doze mode
    eGPT5_IPG_DOZE GPT5_IPG_DOZE : 1;
    // read-write - GPT6 doze mode
    eGPT6_IPG_DOZE GPT6_IPG_DOZE : 1;
    // read-write - LPI2C1 doze mode
    eLPI2C1_IPG_DOZE LPI2C1_IPG_DOZE : 1;
    // read-write - LPI2C1 stop request
    eLPI2C1_STOP_REQ LPI2C1_STOP_REQ : 1;
    // read-write - LPI2C1 stop mode selection. This bitfield cannot change when LPI2C1_STOP_REQ is asserted.
    eLPI2C1_IPG_STOP_MODE LPI2C1_IPG_STOP_MODE : 1;
    // read-write - LPI2C2 doze mode
    eLPI2C2_IPG_DOZE LPI2C2_IPG_DOZE : 1;
    // read-write - LPI2C2 stop request
    eLPI2C2_STOP_REQ LPI2C2_STOP_REQ : 1;
    // read-write - LPI2C2 stop mode selection. This bitfield cannot change when LPI2C2_STOP_REQ is asserted.
    eLPI2C2_IPG_STOP_MODE LPI2C2_IPG_STOP_MODE : 1;
    // read-write - LPI2C3 doze mode
    eLPI2C3_IPG_DOZE LPI2C3_IPG_DOZE : 1;
    // read-write - LPI2C3 stop request
    eLPI2C3_STOP_REQ LPI2C3_STOP_REQ : 1;
    // read-write - LPI2C3 stop mode selection. This bitfield cannot change when LPI2C3_STOP_REQ is asserted.
    eLPI2C3_IPG_STOP_MODE LPI2C3_IPG_STOP_MODE : 1;
    // read-write - LPI2C4 doze mode
    eLPI2C4_IPG_DOZE LPI2C4_IPG_DOZE : 1;
    // read-write - LPI2C4 stop request
    eLPI2C4_STOP_REQ LPI2C4_STOP_REQ : 1;
    // read-write - LPI2C4 stop mode selection. This bitfield cannot change when LPI2C4_STOP_REQ is asserted.
    eLPI2C4_IPG_STOP_MODE LPI2C4_IPG_STOP_MODE : 1;
    // read-write - LPI2C5 doze mode
    eLPI2C5_IPG_DOZE LPI2C5_IPG_DOZE : 1;
    // read-write - LPI2C5 stop request
    eLPI2C5_STOP_REQ LPI2C5_STOP_REQ : 1;
    // read-write - LPI2C5 stop mode selection. This bitfield cannot change when LPI2C5_STOP_REQ is asserted.
    eLPI2C5_IPG_STOP_MODE LPI2C5_IPG_STOP_MODE : 1;
    // read-write - LPI2C6 doze mode
    eLPI2C6_IPG_DOZE LPI2C6_IPG_DOZE : 1;
    // read-write - LPI2C6 stop request
    eLPI2C6_STOP_REQ LPI2C6_STOP_REQ : 1;
    // read-write - LPI2C6 stop mode selection. This bitfield cannot change when LPI2C6_STOP_REQ is asserted.
    eLPI2C6_IPG_STOP_MODE LPI2C6_IPG_STOP_MODE : 1;
    // read-write - LPSPI1 doze mode
    eLPSPI1_IPG_DOZE LPSPI1_IPG_DOZE : 1;
    // read-write - LPSPI1 stop request
    eLPSPI1_STOP_REQ LPSPI1_STOP_REQ : 1;
    // read-write - LPSPI1 stop mode selection. This bitfield cannot change when LPSPI1_STOP_REQ is asserted.
    eLPSPI1_IPG_STOP_MODE LPSPI1_IPG_STOP_MODE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR36 &ref() { return *reinterpret_cast<volatile GPR36*>(0x40C0C090); }
};

// GPR37 General Purpose Register
union GPR37 {
  
  // LPSPI2 doze mode
  enum class eLPSPI2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI2 stop request
  enum class eLPSPI2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI2 stop mode selection. This bitfield cannot change when LPSPI2_STOP_REQ is asserted.
  enum class eLPSPI2_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPSPI3 doze mode
  enum class eLPSPI3_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI3 stop request
  enum class eLPSPI3_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI3 stop mode selection. This bitfield cannot change when LPSPI3_STOP_REQ is asserted.
  enum class eLPSPI3_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPSPI4 doze mode
  enum class eLPSPI4_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI4 stop request
  enum class eLPSPI4_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI4 stop mode selection. This bitfield cannot change when LPSPI4_STOP_REQ is asserted.
  enum class eLPSPI4_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPSPI5 doze mode
  enum class eLPSPI5_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI5 stop request
  enum class eLPSPI5_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI5 stop mode selection. This bitfield cannot change when LPSPI5_STOP_REQ is asserted.
  enum class eLPSPI5_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPSPI6 doze mode
  enum class eLPSPI6_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPSPI6 stop request
  enum class eLPSPI6_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPSPI6 stop mode selection. This bitfield cannot change when LPSPI6_STOP_REQ is asserted.
  enum class eLPSPI6_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART1 doze mode
  enum class eLPUART1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART1 stop request
  enum class eLPUART1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART1 stop mode selection. This bitfield cannot change when LPUART1_STOP_REQ is asserted.
  enum class eLPUART1_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART2 doze mode
  enum class eLPUART2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART2 stop request
  enum class eLPUART2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART2 stop mode selection. This bitfield cannot change when LPUART2_STOP_REQ is asserted.
  enum class eLPUART2_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART3 doze mode
  enum class eLPUART3_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART3 stop request
  enum class eLPUART3_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART3 stop mode selection. This bitfield cannot change when LPUART3_STOP_REQ is asserted.
  enum class eLPUART3_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART4 doze mode
  enum class eLPUART4_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART4 stop request
  enum class eLPUART4_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART4 stop mode selection. This bitfield cannot change when LPUART4_STOP_REQ is asserted.
  enum class eLPUART4_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - LPSPI2 doze mode
    eLPSPI2_IPG_DOZE LPSPI2_IPG_DOZE : 1;
    // read-write - LPSPI2 stop request
    eLPSPI2_STOP_REQ LPSPI2_STOP_REQ : 1;
    // read-write - LPSPI2 stop mode selection. This bitfield cannot change when LPSPI2_STOP_REQ is asserted.
    eLPSPI2_IPG_STOP_MODE LPSPI2_IPG_STOP_MODE : 1;
    // read-write - LPSPI3 doze mode
    eLPSPI3_IPG_DOZE LPSPI3_IPG_DOZE : 1;
    // read-write - LPSPI3 stop request
    eLPSPI3_STOP_REQ LPSPI3_STOP_REQ : 1;
    // read-write - LPSPI3 stop mode selection. This bitfield cannot change when LPSPI3_STOP_REQ is asserted.
    eLPSPI3_IPG_STOP_MODE LPSPI3_IPG_STOP_MODE : 1;
    // read-write - LPSPI4 doze mode
    eLPSPI4_IPG_DOZE LPSPI4_IPG_DOZE : 1;
    // read-write - LPSPI4 stop request
    eLPSPI4_STOP_REQ LPSPI4_STOP_REQ : 1;
    // read-write - LPSPI4 stop mode selection. This bitfield cannot change when LPSPI4_STOP_REQ is asserted.
    eLPSPI4_IPG_STOP_MODE LPSPI4_IPG_STOP_MODE : 1;
    // read-write - LPSPI5 doze mode
    eLPSPI5_IPG_DOZE LPSPI5_IPG_DOZE : 1;
    // read-write - LPSPI5 stop request
    eLPSPI5_STOP_REQ LPSPI5_STOP_REQ : 1;
    // read-write - LPSPI5 stop mode selection. This bitfield cannot change when LPSPI5_STOP_REQ is asserted.
    eLPSPI5_IPG_STOP_MODE LPSPI5_IPG_STOP_MODE : 1;
    // read-write - LPSPI6 doze mode
    eLPSPI6_IPG_DOZE LPSPI6_IPG_DOZE : 1;
    // read-write - LPSPI6 stop request
    eLPSPI6_STOP_REQ LPSPI6_STOP_REQ : 1;
    // read-write - LPSPI6 stop mode selection. This bitfield cannot change when LPSPI6_STOP_REQ is asserted.
    eLPSPI6_IPG_STOP_MODE LPSPI6_IPG_STOP_MODE : 1;
    // read-write - LPUART1 doze mode
    eLPUART1_IPG_DOZE LPUART1_IPG_DOZE : 1;
    // read-write - LPUART1 stop request
    eLPUART1_STOP_REQ LPUART1_STOP_REQ : 1;
    // read-write - LPUART1 stop mode selection. This bitfield cannot change when LPUART1_STOP_REQ is asserted.
    eLPUART1_IPG_STOP_MODE LPUART1_IPG_STOP_MODE : 1;
    // read-write - LPUART2 doze mode
    eLPUART2_IPG_DOZE LPUART2_IPG_DOZE : 1;
    // read-write - LPUART2 stop request
    eLPUART2_STOP_REQ LPUART2_STOP_REQ : 1;
    // read-write - LPUART2 stop mode selection. This bitfield cannot change when LPUART2_STOP_REQ is asserted.
    eLPUART2_IPG_STOP_MODE LPUART2_IPG_STOP_MODE : 1;
    // read-write - LPUART3 doze mode
    eLPUART3_IPG_DOZE LPUART3_IPG_DOZE : 1;
    // read-write - LPUART3 stop request
    eLPUART3_STOP_REQ LPUART3_STOP_REQ : 1;
    // read-write - LPUART3 stop mode selection. This bitfield cannot change when LPUART3_STOP_REQ is asserted.
    eLPUART3_IPG_STOP_MODE LPUART3_IPG_STOP_MODE : 1;
    // read-write - LPUART4 doze mode
    eLPUART4_IPG_DOZE LPUART4_IPG_DOZE : 1;
    // read-write - LPUART4 stop request
    eLPUART4_STOP_REQ LPUART4_STOP_REQ : 1;
    // read-write - LPUART4 stop mode selection. This bitfield cannot change when LPUART4_STOP_REQ is asserted.
    eLPUART4_IPG_STOP_MODE LPUART4_IPG_STOP_MODE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR37 &ref() { return *reinterpret_cast<volatile GPR37*>(0x40C0C094); }
};

// GPR38 General Purpose Register
union GPR38 {
  
  // LPUART5 doze mode
  enum class eLPUART5_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART5 stop request
  enum class eLPUART5_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART5 stop mode selection. This bitfield cannot change when LPUART5_STOP_REQ is asserted.
  enum class eLPUART5_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART6 doze mode
  enum class eLPUART6_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART6 stop request
  enum class eLPUART6_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART6 stop mode selection. This bitfield cannot change when LPUART6_STOP_REQ is asserted.
  enum class eLPUART6_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART7 doze mode
  enum class eLPUART7_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART7 stop request
  enum class eLPUART7_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART7 stop mode selection. This bitfield cannot change when LPUART7_STOP_REQ is asserted.
  enum class eLPUART7_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART8 doze mode
  enum class eLPUART8_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART8 stop request
  enum class eLPUART8_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART8 stop mode selection. This bitfield cannot change when LPUART8_STOP_REQ is asserted.
  enum class eLPUART8_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART9 doze mode
  enum class eLPUART9_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART9 stop request
  enum class eLPUART9_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART9 stop mode selection. This bitfield cannot change when LPUART9_STOP_REQ is asserted.
  enum class eLPUART9_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART10 doze mode
  enum class eLPUART10_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART10 stop request
  enum class eLPUART10_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART10 stop mode selection. This bitfield cannot change when LPUART10_STOP_REQ is asserted.
  enum class eLPUART10_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART11 doze mode
  enum class eLPUART11_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART11 stop request
  enum class eLPUART11_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART11 stop mode selection. This bitfield cannot change when LPUART11_STOP_REQ is asserted.
  enum class eLPUART11_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // LPUART12 doze mode
  enum class eLPUART12_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // LPUART12 stop request
  enum class eLPUART12_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // LPUART12 stop mode selection. This bitfield cannot change when LPUART12_STOP_REQ is asserted.
  enum class eLPUART12_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // MIC doze mode
  enum class eMIC_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // MIC stop request
  enum class eMIC_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // MIC stop mode selection. This bitfield cannot change when MIC_STOP_REQ is asserted.
  enum class eMIC_IPG_STOP_MODE : uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - LPUART5 doze mode
    eLPUART5_IPG_DOZE LPUART5_IPG_DOZE : 1;
    // read-write - LPUART5 stop request
    eLPUART5_STOP_REQ LPUART5_STOP_REQ : 1;
    // read-write - LPUART5 stop mode selection. This bitfield cannot change when LPUART5_STOP_REQ is asserted.
    eLPUART5_IPG_STOP_MODE LPUART5_IPG_STOP_MODE : 1;
    // read-write - LPUART6 doze mode
    eLPUART6_IPG_DOZE LPUART6_IPG_DOZE : 1;
    // read-write - LPUART6 stop request
    eLPUART6_STOP_REQ LPUART6_STOP_REQ : 1;
    // read-write - LPUART6 stop mode selection. This bitfield cannot change when LPUART6_STOP_REQ is asserted.
    eLPUART6_IPG_STOP_MODE LPUART6_IPG_STOP_MODE : 1;
    // read-write - LPUART7 doze mode
    eLPUART7_IPG_DOZE LPUART7_IPG_DOZE : 1;
    // read-write - LPUART7 stop request
    eLPUART7_STOP_REQ LPUART7_STOP_REQ : 1;
    // read-write - LPUART7 stop mode selection. This bitfield cannot change when LPUART7_STOP_REQ is asserted.
    eLPUART7_IPG_STOP_MODE LPUART7_IPG_STOP_MODE : 1;
    // read-write - LPUART8 doze mode
    eLPUART8_IPG_DOZE LPUART8_IPG_DOZE : 1;
    // read-write - LPUART8 stop request
    eLPUART8_STOP_REQ LPUART8_STOP_REQ : 1;
    // read-write - LPUART8 stop mode selection. This bitfield cannot change when LPUART8_STOP_REQ is asserted.
    eLPUART8_IPG_STOP_MODE LPUART8_IPG_STOP_MODE : 1;
    // read-write - LPUART9 doze mode
    eLPUART9_IPG_DOZE LPUART9_IPG_DOZE : 1;
    // read-write - LPUART9 stop request
    eLPUART9_STOP_REQ LPUART9_STOP_REQ : 1;
    // read-write - LPUART9 stop mode selection. This bitfield cannot change when LPUART9_STOP_REQ is asserted.
    eLPUART9_IPG_STOP_MODE LPUART9_IPG_STOP_MODE : 1;
    // read-write - LPUART10 doze mode
    eLPUART10_IPG_DOZE LPUART10_IPG_DOZE : 1;
    // read-write - LPUART10 stop request
    eLPUART10_STOP_REQ LPUART10_STOP_REQ : 1;
    // read-write - LPUART10 stop mode selection. This bitfield cannot change when LPUART10_STOP_REQ is asserted.
    eLPUART10_IPG_STOP_MODE LPUART10_IPG_STOP_MODE : 1;
    // read-write - LPUART11 doze mode
    eLPUART11_IPG_DOZE LPUART11_IPG_DOZE : 1;
    // read-write - LPUART11 stop request
    eLPUART11_STOP_REQ LPUART11_STOP_REQ : 1;
    // read-write - LPUART11 stop mode selection. This bitfield cannot change when LPUART11_STOP_REQ is asserted.
    eLPUART11_IPG_STOP_MODE LPUART11_IPG_STOP_MODE : 1;
    // read-write - LPUART12 doze mode
    eLPUART12_IPG_DOZE LPUART12_IPG_DOZE : 1;
    // read-write - LPUART12 stop request
    eLPUART12_STOP_REQ LPUART12_STOP_REQ : 1;
    // read-write - LPUART12 stop mode selection. This bitfield cannot change when LPUART12_STOP_REQ is asserted.
    eLPUART12_IPG_STOP_MODE LPUART12_IPG_STOP_MODE : 1;
    // read-write - MIC doze mode
    eMIC_IPG_DOZE MIC_IPG_DOZE : 1;
    // read-write - MIC stop request
    eMIC_STOP_REQ MIC_STOP_REQ : 1;
    // read-write - MIC stop mode selection. This bitfield cannot change when MIC_STOP_REQ is asserted.
    eMIC_IPG_STOP_MODE MIC_IPG_STOP_MODE : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR38 &ref() { return *reinterpret_cast<volatile GPR38*>(0x40C0C098); }
};

// GPR39 General Purpose Register
union GPR39 {
  
  // PIT1 stop request
  enum class ePIT1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // PIT2 stop request
  enum class ePIT2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // SEMC stop request
  enum class eSEMC_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // SIM1 doze mode
  enum class eSIM1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // SIM2 doze mode
  enum class eSIM2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // SNVS_HP doze mode
  enum class eSNVS_HP_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // SNVS_HP stop request
  enum class eSNVS_HP_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // WDOG1 doze mode
  enum class eWDOG1_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // WDOG2 doze mode
  enum class eWDOG2_IPG_DOZE : uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };
  
  // SAI1 stop request
  enum class eSAI1_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // SAI2 stop request
  enum class eSAI2_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // SAI3 stop request
  enum class eSAI3_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // SAI4 stop request
  enum class eSAI4_STOP_REQ : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXIO1 bus clock domain stop request
  enum class eFLEXIO1_STOP_REQ_BUS : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXIO1 peripheral clock domain stop request
  enum class eFLEXIO1_STOP_REQ_PER : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXIO2 bus clock domain stop request
  enum class eFLEXIO2_STOP_REQ_BUS : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // FLEXIO2 peripheral clock domain stop request
  enum class eFLEXIO2_STOP_REQ_PER : uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - PIT1 stop request
    ePIT1_STOP_REQ PIT1_STOP_REQ : 1;
    // read-write - PIT2 stop request
    ePIT2_STOP_REQ PIT2_STOP_REQ : 1;
    // read-write - SEMC stop request
    eSEMC_STOP_REQ SEMC_STOP_REQ : 1;
    // read-write - SIM1 doze mode
    eSIM1_IPG_DOZE SIM1_IPG_DOZE : 1;
    // read-write - SIM2 doze mode
    eSIM2_IPG_DOZE SIM2_IPG_DOZE : 1;
    // read-write - SNVS_HP doze mode
    eSNVS_HP_IPG_DOZE SNVS_HP_IPG_DOZE : 1;
    // read-write - SNVS_HP stop request
    eSNVS_HP_STOP_REQ SNVS_HP_STOP_REQ : 1;
    // read-write - WDOG1 doze mode
    eWDOG1_IPG_DOZE WDOG1_IPG_DOZE : 1;
    // read-write - WDOG2 doze mode
    eWDOG2_IPG_DOZE WDOG2_IPG_DOZE : 1;
    // read-write - SAI1 stop request
    eSAI1_STOP_REQ SAI1_STOP_REQ : 1;
    // read-write - SAI2 stop request
    eSAI2_STOP_REQ SAI2_STOP_REQ : 1;
    // read-write - SAI3 stop request
    eSAI3_STOP_REQ SAI3_STOP_REQ : 1;
    // read-write - SAI4 stop request
    eSAI4_STOP_REQ SAI4_STOP_REQ : 1;
    // read-write - FLEXIO1 bus clock domain stop request
    eFLEXIO1_STOP_REQ_BUS FLEXIO1_STOP_REQ_BUS : 1;
    // read-write - FLEXIO1 peripheral clock domain stop request
    eFLEXIO1_STOP_REQ_PER FLEXIO1_STOP_REQ_PER : 1;
    // read-write - FLEXIO2 bus clock domain stop request
    eFLEXIO2_STOP_REQ_BUS FLEXIO2_STOP_REQ_BUS : 1;
    // read-write - FLEXIO2 peripheral clock domain stop request
    eFLEXIO2_STOP_REQ_PER FLEXIO2_STOP_REQ_PER : 1;
    uint32_t _reserved_1 : 10;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR39 &ref() { return *reinterpret_cast<volatile GPR39*>(0x40C0C09C); }
};

// GPR40 General Purpose Register
union GPR40 {
  
  // Bit field definition.
  struct {
    // read-only - ADC1 stop acknowledge
    uint32_t ADC1_STOP_ACK : 1;
    // read-only - ADC2 stop acknowledge
    uint32_t ADC2_STOP_ACK : 1;
    // read-only - CAAM stop acknowledge
    uint32_t CAAM_STOP_ACK : 1;
    // read-only - CAN1 stop acknowledge
    uint32_t CAN1_STOP_ACK : 1;
    // read-only - CAN2 stop acknowledge
    uint32_t CAN2_STOP_ACK : 1;
    // read-only - CAN3 stop acknowledge
    uint32_t CAN3_STOP_ACK : 1;
    // read-only - EDMA stop acknowledge
    uint32_t EDMA_STOP_ACK : 1;
    // read-only - EDMA_LPSR stop acknowledge
    uint32_t EDMA_LPSR_STOP_ACK : 1;
    // read-only - ENET stop acknowledge
    uint32_t ENET_STOP_ACK : 1;
    // read-only - ENET1G stop acknowledge
    uint32_t ENET1G_STOP_ACK : 1;
    // read-only - FLEXSPI1 stop acknowledge
    uint32_t FLEXSPI1_STOP_ACK : 1;
    // read-only - FLEXSPI2 stop acknowledge
    uint32_t FLEXSPI2_STOP_ACK : 1;
    // read-only - LPI2C1 stop acknowledge
    uint32_t LPI2C1_STOP_ACK : 1;
    // read-only - LPI2C2 stop acknowledge
    uint32_t LPI2C2_STOP_ACK : 1;
    // read-only - LPI2C3 stop acknowledge
    uint32_t LPI2C3_STOP_ACK : 1;
    // read-only - LPI2C4 stop acknowledge
    uint32_t LPI2C4_STOP_ACK : 1;
    // read-only - LPI2C5 stop acknowledge
    uint32_t LPI2C5_STOP_ACK : 1;
    // read-only - LPI2C6 stop acknowledge
    uint32_t LPI2C6_STOP_ACK : 1;
    // read-only - LPSPI1 stop acknowledge
    uint32_t LPSPI1_STOP_ACK : 1;
    // read-only - LPSPI2 stop acknowledge
    uint32_t LPSPI2_STOP_ACK : 1;
    // read-only - LPSPI3 stop acknowledge
    uint32_t LPSPI3_STOP_ACK : 1;
    // read-only - LPSPI4 stop acknowledge
    uint32_t LPSPI4_STOP_ACK : 1;
    // read-only - LPSPI5 stop acknowledge
    uint32_t LPSPI5_STOP_ACK : 1;
    // read-only - LPSPI6 stop acknowledge
    uint32_t LPSPI6_STOP_ACK : 1;
    // read-only - LPUART1 stop acknowledge
    uint32_t LPUART1_STOP_ACK : 1;
    // read-only - LPUART2 stop acknowledge
    uint32_t LPUART2_STOP_ACK : 1;
    // read-only - LPUART3 stop acknowledge
    uint32_t LPUART3_STOP_ACK : 1;
    // read-only - LPUART4 stop acknowledge
    uint32_t LPUART4_STOP_ACK : 1;
    // read-only - LPUART5 stop acknowledge
    uint32_t LPUART5_STOP_ACK : 1;
    // read-only - LPUART6 stop acknowledge
    uint32_t LPUART6_STOP_ACK : 1;
    // read-only - LPUART7 stop acknowledge
    uint32_t LPUART7_STOP_ACK : 1;
    // read-only - LPUART8 stop acknowledge
    uint32_t LPUART8_STOP_ACK : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR40 &ref() { return *reinterpret_cast<volatile GPR40*>(0x40C0C0A0); }
};

// GPR41 General Purpose Register
union GPR41 {
  
  // Bit field definition.
  struct {
    // read-only - LPUART9 stop acknowledge
    uint32_t LPUART9_STOP_ACK : 1;
    // read-only - LPUART10 stop acknowledge
    uint32_t LPUART10_STOP_ACK : 1;
    // read-only - LPUART11 stop acknowledge
    uint32_t LPUART11_STOP_ACK : 1;
    // read-only - LPUART12 stop acknowledge
    uint32_t LPUART12_STOP_ACK : 1;
    // read-only - MIC stop acknowledge
    uint32_t MIC_STOP_ACK : 1;
    // read-only - PIT1 stop acknowledge
    uint32_t PIT1_STOP_ACK : 1;
    // read-only - PIT2 stop acknowledge
    uint32_t PIT2_STOP_ACK : 1;
    // read-only - SEMC stop acknowledge
    uint32_t SEMC_STOP_ACK : 1;
    // read-only - SNVS_HP stop acknowledge
    uint32_t SNVS_HP_STOP_ACK : 1;
    // read-only - SAI1 stop acknowledge
    uint32_t SAI1_STOP_ACK : 1;
    // read-only - SAI2 stop acknowledge
    uint32_t SAI2_STOP_ACK : 1;
    // read-only - SAI3 stop acknowledge
    uint32_t SAI3_STOP_ACK : 1;
    // read-only - SAI4 stop acknowledge
    uint32_t SAI4_STOP_ACK : 1;
    // read-only - FLEXIO1 stop acknowledge of bus clock domain
    uint32_t FLEXIO1_STOP_ACK_BUS : 1;
    // read-only - FLEXIO1 stop acknowledge of peripheral clock domain
    uint32_t FLEXIO1_STOP_ACK_PER : 1;
    // read-only - FLEXIO2 stop acknowledge of bus clock domain
    uint32_t FLEXIO2_STOP_ACK_BUS : 1;
    // read-only - FLEXIO2 stop acknowledge of peripheral clock domain
    uint32_t FLEXIO2_STOP_ACK_PER : 1;
    uint32_t _reserved_0 : 7;
    // read-only - ROM read lock status bit
    uint32_t ROM_READ_LOCKED : 1;
    uint32_t _reserved_1 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR41 &ref() { return *reinterpret_cast<volatile GPR41*>(0x40C0C0A4); }
};


} // namespace nIOMUXC_LPSR_GPR