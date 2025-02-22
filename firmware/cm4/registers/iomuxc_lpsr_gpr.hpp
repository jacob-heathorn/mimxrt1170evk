#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // IOMUXC LPSR GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nIOMUXC_LPSR_GPR {


// GPR0 General Purpose Register
//
union GPR0 {
  
  // Enum definitions.
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    uint32_t CM4_INIT_VTOR_LOW : 13;
    uint32_t _reserved_1 : 12;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR0() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile GPR0 &Instance() { return *reinterpret_cast<volatile GPR0*>(0x40C0C000); }
};

// GPR1 General Purpose Register
//
union GPR1 {
  
  // Enum definitions.
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t CM4_INIT_VTOR_HIGH : 16;
    uint32_t _reserved_1 : 12;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR1() = delete;
  inline void Reset() volatile { this->value = 0x00000020; }
  static inline volatile GPR1 &Instance() { return *reinterpret_cast<volatile GPR1*>(0x40C0C004); }
};

// GPR2 General Purpose Register
//
union GPR2 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R0_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR2 &Instance() { return *reinterpret_cast<volatile GPR2*>(0x40C0C008); }
};

// GPR3 General Purpose Register
//
union GPR3 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R0_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR3 &Instance() { return *reinterpret_cast<volatile GPR3*>(0x40C0C00C); }
};

// GPR4 General Purpose Register
//
union GPR4 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R1_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR4 &Instance() { return *reinterpret_cast<volatile GPR4*>(0x40C0C010); }
};

// GPR5 General Purpose Register
//
union GPR5 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R1_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR5 &Instance() { return *reinterpret_cast<volatile GPR5*>(0x40C0C014); }
};

// GPR6 General Purpose Register
//
union GPR6 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R2_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR6 &Instance() { return *reinterpret_cast<volatile GPR6*>(0x40C0C018); }
};

// GPR7 General Purpose Register
//
union GPR7 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R2_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR7 &Instance() { return *reinterpret_cast<volatile GPR7*>(0x40C0C01C); }
};

// GPR8 General Purpose Register
//
union GPR8 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R3_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR8 &Instance() { return *reinterpret_cast<volatile GPR8*>(0x40C0C020); }
};

// GPR9 General Purpose Register
//
union GPR9 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R3_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR9 &Instance() { return *reinterpret_cast<volatile GPR9*>(0x40C0C024); }
};

// GPR10 General Purpose Register
//
union GPR10 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R4_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR10 &Instance() { return *reinterpret_cast<volatile GPR10*>(0x40C0C028); }
};

// GPR11 General Purpose Register
//
union GPR11 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R4_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR11 &Instance() { return *reinterpret_cast<volatile GPR11*>(0x40C0C02C); }
};

// GPR12 General Purpose Register
//
union GPR12 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R5_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR12 &Instance() { return *reinterpret_cast<volatile GPR12*>(0x40C0C030); }
};

// GPR13 General Purpose Register
//
union GPR13 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R5_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR13 &Instance() { return *reinterpret_cast<volatile GPR13*>(0x40C0C034); }
};

// GPR14 General Purpose Register
//
union GPR14 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R6_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR14 &Instance() { return *reinterpret_cast<volatile GPR14*>(0x40C0C038); }
};

// GPR15 General Purpose Register
//
union GPR15 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R6_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR15 &Instance() { return *reinterpret_cast<volatile GPR15*>(0x40C0C03C); }
};

// GPR16 General Purpose Register
//
union GPR16 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R7_BOT : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR16 &Instance() { return *reinterpret_cast<volatile GPR16*>(0x40C0C040); }
};

// GPR17 General Purpose Register
//
union GPR17 {
  
  // Enum definitions.
  enum class eLOCK : uint32_t {
    eNO = 0, // Write access to bit 31:1 is not blocked
    eBLOCK = 1, // Write access to bit 31:1 is blocked
  };
  
  // Bit field definition.
  struct {
    eLOCK LOCK : 1;
    uint32_t _reserved_1 : 2;
    uint32_t APC_AC_R7_TOP : 29;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR17() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR17 &Instance() { return *reinterpret_cast<volatile GPR17*>(0x40C0C044); }
};

// GPR18 General Purpose Register
//
union GPR18 {
  
  // Enum definitions.
  enum class eAPC_R0_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R0_ENCRYPT_ENABLE APC_R0_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR18() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR18 &Instance() { return *reinterpret_cast<volatile GPR18*>(0x40C0C048); }
};

// GPR19 General Purpose Register
//
union GPR19 {
  
  // Enum definitions.
  enum class eAPC_R1_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R1_ENCRYPT_ENABLE APC_R1_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR19() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR19 &Instance() { return *reinterpret_cast<volatile GPR19*>(0x40C0C04C); }
};

// GPR20 General Purpose Register
//
union GPR20 {
  
  // Enum definitions.
  enum class eAPC_R2_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R2_ENCRYPT_ENABLE APC_R2_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR20 &Instance() { return *reinterpret_cast<volatile GPR20*>(0x40C0C050); }
};

// GPR21 General Purpose Register
//
union GPR21 {
  
  // Enum definitions.
  enum class eAPC_R3_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R3_ENCRYPT_ENABLE APC_R3_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR21() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR21 &Instance() { return *reinterpret_cast<volatile GPR21*>(0x40C0C054); }
};

// GPR22 General Purpose Register
//
union GPR22 {
  
  // Enum definitions.
  enum class eAPC_R4_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R4_ENCRYPT_ENABLE APC_R4_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR22() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR22 &Instance() { return *reinterpret_cast<volatile GPR22*>(0x40C0C058); }
};

// GPR23 General Purpose Register
//
union GPR23 {
  
  // Enum definitions.
  enum class eAPC_R5_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R5_ENCRYPT_ENABLE APC_R5_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR23() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR23 &Instance() { return *reinterpret_cast<volatile GPR23*>(0x40C0C05C); }
};

// GPR24 General Purpose Register
//
union GPR24 {
  
  // Enum definitions.
  enum class eAPC_R6_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R6_ENCRYPT_ENABLE APC_R6_ENCRYPT_ENABLE : 1;
    uint32_t _reserved_1 : 11;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR24() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR24 &Instance() { return *reinterpret_cast<volatile GPR24*>(0x40C0C060); }
};

// GPR25 General Purpose Register
//
union GPR25 {
  
  // Enum definitions.
  enum class eAPC_R7_ENCRYPT_ENABLE : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Encryption enabled
  };
  enum class eAPC_VALID : uint32_t {
    eDIS = 0, // No effect
    eENABLE = 1, // Enable encryption for GPRx[APC_x_ENCRYPT_ENABLE] (valid for GPR2-GPR25)
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eAPC_R7_ENCRYPT_ENABLE APC_R7_ENCRYPT_ENABLE : 1;
    eAPC_VALID APC_VALID : 1;
    uint32_t _reserved_2 : 10;
    uint32_t LOCK : 16;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR25() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR25 &Instance() { return *reinterpret_cast<volatile GPR25*>(0x40C0C064); }
};

// GPR26 General Purpose Register
//
union GPR26 {
  
  // Enum definitions.
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t CM7_INIT_VTOR : 25;
    uint32_t FIELD_0 : 3;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR26() = delete;
  inline void Reset() volatile { this->value = 0x00004000; }
  static inline volatile GPR26 &Instance() { return *reinterpret_cast<volatile GPR26*>(0x40C0C068); }
};

// GPR33 General Purpose Register
//
union GPR33 {
  
  // Enum definitions.
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t M4_NMI_CLEAR : 1;
    uint32_t _reserved_1 : 7;
    uint32_t USBPHY1_WAKEUP_IRQ_CLEAR : 1;
    uint32_t USBPHY2_WAKEUP_IRQ_CLEAR : 1;
    uint32_t _reserved_3 : 18;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR33 &Instance() { return *reinterpret_cast<volatile GPR33*>(0x40C0C084); }
};

// GPR34 General Purpose Register
//
union GPR34 {
  
  // Enum definitions.
  enum class eM7_NMI_MASK : uint32_t {
    eDISABLE = 0, // NMI input from IO to CM7 is not blocked
    eENABLE = 1, // NMI input from IO to CM7 is blocked
  };
  enum class eM4_NMI_MASK : uint32_t {
    eDISABLE = 0, // NMI input from IO to CM4 is not blocked
    eENABLE = 1, // NMI input from IO to CM4 is blocked
  };
  enum class eM4_GPC_SLEEP_SEL : uint32_t {
    eDISABLE = 0, // CM4 SLEEPDEEP is sent to GPC
    eNABLE = 1, // CM4 SLEEPING is sent to GPC
  };
  enum class eSEC_ERR_RESP : uint32_t {
    eDISABLE = 0, // OKEY response
    eENABLE = 1, // SLVError (default)
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    uint32_t GPIO_LPSR_HIGH_RANGE : 1;
    uint32_t GPIO_LPSR_LOW_RANGE : 1;
    eM7_NMI_MASK M7_NMI_MASK : 1;
    eM4_NMI_MASK M4_NMI_MASK : 1;
    eM4_GPC_SLEEP_SEL M4_GPC_SLEEP_SEL : 1;
    uint32_t _reserved_5 : 5;
    eSEC_ERR_RESP SEC_ERR_RESP : 1;
    uint32_t _reserved_6 : 16;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR34() = delete;
  inline void Reset() volatile { this->value = 0x00000E00; }
  static inline volatile GPR34 &Instance() { return *reinterpret_cast<volatile GPR34*>(0x40C0C088); }
};

// GPR35 General Purpose Register
//
union GPR35 {
  
  // Enum definitions.
  enum class eADC1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eADC1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eADC1_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eADC2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eADC2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eADC2_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eCAAM_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eCAAM_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eCAN1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eCAN1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eCAN2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eCAN2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eCAN3_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eCAN3_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eEDMA_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eEDMA_LPSR_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eENET_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eENET_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eENET1G_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eENET1G_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXIO1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eFLEXIO2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eFLEXSPI1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eFLEXSPI1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXSPI2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eFLEXSPI2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    eADC1_IPG_DOZE ADC1_IPG_DOZE : 1;
    eADC1_STOP_REQ ADC1_STOP_REQ : 1;
    eADC1_IPG_STOP_MODE ADC1_IPG_STOP_MODE : 1;
    eADC2_IPG_DOZE ADC2_IPG_DOZE : 1;
    eADC2_STOP_REQ ADC2_STOP_REQ : 1;
    eADC2_IPG_STOP_MODE ADC2_IPG_STOP_MODE : 1;
    eCAAM_IPG_DOZE CAAM_IPG_DOZE : 1;
    eCAAM_STOP_REQ CAAM_STOP_REQ : 1;
    eCAN1_IPG_DOZE CAN1_IPG_DOZE : 1;
    eCAN1_STOP_REQ CAN1_STOP_REQ : 1;
    eCAN2_IPG_DOZE CAN2_IPG_DOZE : 1;
    eCAN2_STOP_REQ CAN2_STOP_REQ : 1;
    eCAN3_IPG_DOZE CAN3_IPG_DOZE : 1;
    eCAN3_STOP_REQ CAN3_STOP_REQ : 1;
    uint32_t _reserved_14 : 1;
    eEDMA_STOP_REQ EDMA_STOP_REQ : 1;
    eEDMA_LPSR_STOP_REQ EDMA_LPSR_STOP_REQ : 1;
    eENET_IPG_DOZE ENET_IPG_DOZE : 1;
    eENET_STOP_REQ ENET_STOP_REQ : 1;
    eENET1G_IPG_DOZE ENET1G_IPG_DOZE : 1;
    eENET1G_STOP_REQ ENET1G_STOP_REQ : 1;
    eFLEXIO1_IPG_DOZE FLEXIO1_IPG_DOZE : 1;
    eFLEXIO2_IPG_DOZE FLEXIO2_IPG_DOZE : 1;
    eFLEXSPI1_IPG_DOZE FLEXSPI1_IPG_DOZE : 1;
    eFLEXSPI1_STOP_REQ FLEXSPI1_STOP_REQ : 1;
    eFLEXSPI2_IPG_DOZE FLEXSPI2_IPG_DOZE : 1;
    eFLEXSPI2_STOP_REQ FLEXSPI2_STOP_REQ : 1;
    uint32_t _reserved_26 : 1;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR35 &Instance() { return *reinterpret_cast<volatile GPR35*>(0x40C0C08C); }
};

// GPR36 General Purpose Register
//
union GPR36 {
  
  // Enum definitions.
  enum class eGPT1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eGPT2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eGPT3_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eGPT4_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eGPT5_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eGPT6_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C1_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPI2C2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C2_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPI2C3_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C3_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C3_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPI2C4_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C4_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C4_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPI2C5_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C5_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C5_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPI2C6_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPI2C6_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPI2C6_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPSPI1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI1_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    eGPT1_IPG_DOZE GPT1_IPG_DOZE : 1;
    eGPT2_IPG_DOZE GPT2_IPG_DOZE : 1;
    eGPT3_IPG_DOZE GPT3_IPG_DOZE : 1;
    eGPT4_IPG_DOZE GPT4_IPG_DOZE : 1;
    eGPT5_IPG_DOZE GPT5_IPG_DOZE : 1;
    eGPT6_IPG_DOZE GPT6_IPG_DOZE : 1;
    eLPI2C1_IPG_DOZE LPI2C1_IPG_DOZE : 1;
    eLPI2C1_STOP_REQ LPI2C1_STOP_REQ : 1;
    eLPI2C1_IPG_STOP_MODE LPI2C1_IPG_STOP_MODE : 1;
    eLPI2C2_IPG_DOZE LPI2C2_IPG_DOZE : 1;
    eLPI2C2_STOP_REQ LPI2C2_STOP_REQ : 1;
    eLPI2C2_IPG_STOP_MODE LPI2C2_IPG_STOP_MODE : 1;
    eLPI2C3_IPG_DOZE LPI2C3_IPG_DOZE : 1;
    eLPI2C3_STOP_REQ LPI2C3_STOP_REQ : 1;
    eLPI2C3_IPG_STOP_MODE LPI2C3_IPG_STOP_MODE : 1;
    eLPI2C4_IPG_DOZE LPI2C4_IPG_DOZE : 1;
    eLPI2C4_STOP_REQ LPI2C4_STOP_REQ : 1;
    eLPI2C4_IPG_STOP_MODE LPI2C4_IPG_STOP_MODE : 1;
    eLPI2C5_IPG_DOZE LPI2C5_IPG_DOZE : 1;
    eLPI2C5_STOP_REQ LPI2C5_STOP_REQ : 1;
    eLPI2C5_IPG_STOP_MODE LPI2C5_IPG_STOP_MODE : 1;
    eLPI2C6_IPG_DOZE LPI2C6_IPG_DOZE : 1;
    eLPI2C6_STOP_REQ LPI2C6_STOP_REQ : 1;
    eLPI2C6_IPG_STOP_MODE LPI2C6_IPG_STOP_MODE : 1;
    eLPSPI1_IPG_DOZE LPSPI1_IPG_DOZE : 1;
    eLPSPI1_STOP_REQ LPSPI1_STOP_REQ : 1;
    eLPSPI1_IPG_STOP_MODE LPSPI1_IPG_STOP_MODE : 1;
    uint32_t _reserved_27 : 1;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR36() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR36 &Instance() { return *reinterpret_cast<volatile GPR36*>(0x40C0C090); }
};

// GPR37 General Purpose Register
//
union GPR37 {
  
  // Enum definitions.
  enum class eLPSPI2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI2_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPSPI3_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI3_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI3_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPSPI4_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI4_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI4_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPSPI5_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI5_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI5_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPSPI6_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPSPI6_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPSPI6_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART1_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART2_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART3_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART3_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART3_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART4_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART4_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART4_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    eLPSPI2_IPG_DOZE LPSPI2_IPG_DOZE : 1;
    eLPSPI2_STOP_REQ LPSPI2_STOP_REQ : 1;
    eLPSPI2_IPG_STOP_MODE LPSPI2_IPG_STOP_MODE : 1;
    eLPSPI3_IPG_DOZE LPSPI3_IPG_DOZE : 1;
    eLPSPI3_STOP_REQ LPSPI3_STOP_REQ : 1;
    eLPSPI3_IPG_STOP_MODE LPSPI3_IPG_STOP_MODE : 1;
    eLPSPI4_IPG_DOZE LPSPI4_IPG_DOZE : 1;
    eLPSPI4_STOP_REQ LPSPI4_STOP_REQ : 1;
    eLPSPI4_IPG_STOP_MODE LPSPI4_IPG_STOP_MODE : 1;
    eLPSPI5_IPG_DOZE LPSPI5_IPG_DOZE : 1;
    eLPSPI5_STOP_REQ LPSPI5_STOP_REQ : 1;
    eLPSPI5_IPG_STOP_MODE LPSPI5_IPG_STOP_MODE : 1;
    eLPSPI6_IPG_DOZE LPSPI6_IPG_DOZE : 1;
    eLPSPI6_STOP_REQ LPSPI6_STOP_REQ : 1;
    eLPSPI6_IPG_STOP_MODE LPSPI6_IPG_STOP_MODE : 1;
    eLPUART1_IPG_DOZE LPUART1_IPG_DOZE : 1;
    eLPUART1_STOP_REQ LPUART1_STOP_REQ : 1;
    eLPUART1_IPG_STOP_MODE LPUART1_IPG_STOP_MODE : 1;
    eLPUART2_IPG_DOZE LPUART2_IPG_DOZE : 1;
    eLPUART2_STOP_REQ LPUART2_STOP_REQ : 1;
    eLPUART2_IPG_STOP_MODE LPUART2_IPG_STOP_MODE : 1;
    eLPUART3_IPG_DOZE LPUART3_IPG_DOZE : 1;
    eLPUART3_STOP_REQ LPUART3_STOP_REQ : 1;
    eLPUART3_IPG_STOP_MODE LPUART3_IPG_STOP_MODE : 1;
    eLPUART4_IPG_DOZE LPUART4_IPG_DOZE : 1;
    eLPUART4_STOP_REQ LPUART4_STOP_REQ : 1;
    eLPUART4_IPG_STOP_MODE LPUART4_IPG_STOP_MODE : 1;
    uint32_t _reserved_27 : 1;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR37 &Instance() { return *reinterpret_cast<volatile GPR37*>(0x40C0C094); }
};

// GPR38 General Purpose Register
//
union GPR38 {
  
  // Enum definitions.
  enum class eLPUART5_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART5_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART5_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART6_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART6_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART6_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART7_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART7_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART7_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART8_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART8_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART8_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART9_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART9_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART9_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART10_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART10_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART10_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART11_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART11_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART11_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eLPUART12_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eLPUART12_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eLPUART12_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eMIC_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eMIC_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eMIC_IPG_STOP_MODE : uint32_t {
    eFUNC = 0, // This module is functional in Stop Mode
    eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    eLPUART5_IPG_DOZE LPUART5_IPG_DOZE : 1;
    eLPUART5_STOP_REQ LPUART5_STOP_REQ : 1;
    eLPUART5_IPG_STOP_MODE LPUART5_IPG_STOP_MODE : 1;
    eLPUART6_IPG_DOZE LPUART6_IPG_DOZE : 1;
    eLPUART6_STOP_REQ LPUART6_STOP_REQ : 1;
    eLPUART6_IPG_STOP_MODE LPUART6_IPG_STOP_MODE : 1;
    eLPUART7_IPG_DOZE LPUART7_IPG_DOZE : 1;
    eLPUART7_STOP_REQ LPUART7_STOP_REQ : 1;
    eLPUART7_IPG_STOP_MODE LPUART7_IPG_STOP_MODE : 1;
    eLPUART8_IPG_DOZE LPUART8_IPG_DOZE : 1;
    eLPUART8_STOP_REQ LPUART8_STOP_REQ : 1;
    eLPUART8_IPG_STOP_MODE LPUART8_IPG_STOP_MODE : 1;
    eLPUART9_IPG_DOZE LPUART9_IPG_DOZE : 1;
    eLPUART9_STOP_REQ LPUART9_STOP_REQ : 1;
    eLPUART9_IPG_STOP_MODE LPUART9_IPG_STOP_MODE : 1;
    eLPUART10_IPG_DOZE LPUART10_IPG_DOZE : 1;
    eLPUART10_STOP_REQ LPUART10_STOP_REQ : 1;
    eLPUART10_IPG_STOP_MODE LPUART10_IPG_STOP_MODE : 1;
    eLPUART11_IPG_DOZE LPUART11_IPG_DOZE : 1;
    eLPUART11_STOP_REQ LPUART11_STOP_REQ : 1;
    eLPUART11_IPG_STOP_MODE LPUART11_IPG_STOP_MODE : 1;
    eLPUART12_IPG_DOZE LPUART12_IPG_DOZE : 1;
    eLPUART12_STOP_REQ LPUART12_STOP_REQ : 1;
    eLPUART12_IPG_STOP_MODE LPUART12_IPG_STOP_MODE : 1;
    eMIC_IPG_DOZE MIC_IPG_DOZE : 1;
    eMIC_STOP_REQ MIC_STOP_REQ : 1;
    eMIC_IPG_STOP_MODE MIC_IPG_STOP_MODE : 1;
    uint32_t _reserved_27 : 1;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR38() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR38 &Instance() { return *reinterpret_cast<volatile GPR38*>(0x40C0C098); }
};

// GPR39 General Purpose Register
//
union GPR39 {
  
  // Enum definitions.
  enum class ePIT1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class ePIT2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eSEMC_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eSIM1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eSIM2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eSNVS_HP_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eSNVS_HP_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eWDOG1_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eWDOG2_IPG_DOZE : uint32_t {
    eDISABLE = 0, // Not in doze mode
    eENABLE = 1, // In doze mode
  };
  enum class eSAI1_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eSAI2_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eSAI3_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eSAI4_STOP_REQ : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXIO1_STOP_REQ_BUS : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXIO1_STOP_REQ_PER : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXIO2_STOP_REQ_BUS : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eFLEXIO2_STOP_REQ_PER : uint32_t {
    eDISABLE = 0, // Stop request off
    eENABLE = 1, // Stop request on
  };
  enum class eDWP : uint32_t {
    eforbid_none = 0, // Both cores are allowed
    eforbid_CM7 = 1, // CM7 is forbidden
    eforbid_CM4 = 2, // CM4 is forbidden
    eforbid_both = 3, // Both cores are forbidden
  };
  enum class eDWP_LOCK : uint32_t {
    elock_none = 0, // Neither of DWP bits is locked
    elock_low = 1, // The lower DWP bit is locked
    elock_high = 2, // The higher DWP bit is locked
    elock_both = 3, // Both DWP bits are locked
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    ePIT1_STOP_REQ PIT1_STOP_REQ : 1;
    ePIT2_STOP_REQ PIT2_STOP_REQ : 1;
    eSEMC_STOP_REQ SEMC_STOP_REQ : 1;
    eSIM1_IPG_DOZE SIM1_IPG_DOZE : 1;
    eSIM2_IPG_DOZE SIM2_IPG_DOZE : 1;
    eSNVS_HP_IPG_DOZE SNVS_HP_IPG_DOZE : 1;
    eSNVS_HP_STOP_REQ SNVS_HP_STOP_REQ : 1;
    eWDOG1_IPG_DOZE WDOG1_IPG_DOZE : 1;
    eWDOG2_IPG_DOZE WDOG2_IPG_DOZE : 1;
    eSAI1_STOP_REQ SAI1_STOP_REQ : 1;
    eSAI2_STOP_REQ SAI2_STOP_REQ : 1;
    eSAI3_STOP_REQ SAI3_STOP_REQ : 1;
    eSAI4_STOP_REQ SAI4_STOP_REQ : 1;
    eFLEXIO1_STOP_REQ_BUS FLEXIO1_STOP_REQ_BUS : 1;
    eFLEXIO1_STOP_REQ_PER FLEXIO1_STOP_REQ_PER : 1;
    eFLEXIO2_STOP_REQ_BUS FLEXIO2_STOP_REQ_BUS : 1;
    eFLEXIO2_STOP_REQ_PER FLEXIO2_STOP_REQ_PER : 1;
    uint32_t _reserved_17 : 10;
    eDWP DWP : 2;
    eDWP_LOCK DWP_LOCK : 2;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR39() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR39 &Instance() { return *reinterpret_cast<volatile GPR39*>(0x40C0C09C); }
};

// GPR40 General Purpose Register
//
union GPR40 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t ADC1_STOP_ACK : 1;
    uint32_t ADC2_STOP_ACK : 1;
    uint32_t CAAM_STOP_ACK : 1;
    uint32_t CAN1_STOP_ACK : 1;
    uint32_t CAN2_STOP_ACK : 1;
    uint32_t CAN3_STOP_ACK : 1;
    uint32_t EDMA_STOP_ACK : 1;
    uint32_t EDMA_LPSR_STOP_ACK : 1;
    uint32_t ENET_STOP_ACK : 1;
    uint32_t ENET1G_STOP_ACK : 1;
    uint32_t FLEXSPI1_STOP_ACK : 1;
    uint32_t FLEXSPI2_STOP_ACK : 1;
    uint32_t LPI2C1_STOP_ACK : 1;
    uint32_t LPI2C2_STOP_ACK : 1;
    uint32_t LPI2C3_STOP_ACK : 1;
    uint32_t LPI2C4_STOP_ACK : 1;
    uint32_t LPI2C5_STOP_ACK : 1;
    uint32_t LPI2C6_STOP_ACK : 1;
    uint32_t LPSPI1_STOP_ACK : 1;
    uint32_t LPSPI2_STOP_ACK : 1;
    uint32_t LPSPI3_STOP_ACK : 1;
    uint32_t LPSPI4_STOP_ACK : 1;
    uint32_t LPSPI5_STOP_ACK : 1;
    uint32_t LPSPI6_STOP_ACK : 1;
    uint32_t LPUART1_STOP_ACK : 1;
    uint32_t LPUART2_STOP_ACK : 1;
    uint32_t LPUART3_STOP_ACK : 1;
    uint32_t LPUART4_STOP_ACK : 1;
    uint32_t LPUART5_STOP_ACK : 1;
    uint32_t LPUART6_STOP_ACK : 1;
    uint32_t LPUART7_STOP_ACK : 1;
    uint32_t LPUART8_STOP_ACK : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR40() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR40 &Instance() { return *reinterpret_cast<volatile GPR40*>(0x40C0C0A0); }
};

// GPR41 General Purpose Register
//
union GPR41 {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t LPUART9_STOP_ACK : 1;
    uint32_t LPUART10_STOP_ACK : 1;
    uint32_t LPUART11_STOP_ACK : 1;
    uint32_t LPUART12_STOP_ACK : 1;
    uint32_t MIC_STOP_ACK : 1;
    uint32_t PIT1_STOP_ACK : 1;
    uint32_t PIT2_STOP_ACK : 1;
    uint32_t SEMC_STOP_ACK : 1;
    uint32_t SNVS_HP_STOP_ACK : 1;
    uint32_t SAI1_STOP_ACK : 1;
    uint32_t SAI2_STOP_ACK : 1;
    uint32_t SAI3_STOP_ACK : 1;
    uint32_t SAI4_STOP_ACK : 1;
    uint32_t FLEXIO1_STOP_ACK_BUS : 1;
    uint32_t FLEXIO1_STOP_ACK_PER : 1;
    uint32_t FLEXIO2_STOP_ACK_BUS : 1;
    uint32_t FLEXIO2_STOP_ACK_PER : 1;
    uint32_t _reserved_17 : 7;
    uint32_t ROM_READ_LOCKED : 1;
    uint32_t _reserved_end : 7;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  GPR41() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR41 &Instance() { return *reinterpret_cast<volatile GPR41*>(0x40C0C0A4); }
};


} // namespace nIOMUXC_LPSR_GPR