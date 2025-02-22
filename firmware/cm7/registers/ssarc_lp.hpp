#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// SSARC Registers
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nSSARC_LP {


// Descriptor Control0 0 Register
union DESC_CTRL0_0 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_0 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_0*>(0x40CB8000); }
};

// Descriptor Control1 0 Register
union DESC_CTRL1_0 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_0 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_0*>(0x40CB8004); }
};

// Descriptor Address Up 0 Register
union DESC_ADDR_UP_0 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_0 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_0*>(0x40CB8008); }
};

// Descriptor Address Down 0 Register
union DESC_ADDR_DOWN_0 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_0 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_0*>(0x40CB800C); }
};

// Descriptor Control0 1 Register
union DESC_CTRL0_1 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_1 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_1*>(0x40CB8020); }
};

// Descriptor Control1 1 Register
union DESC_CTRL1_1 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_1 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_1*>(0x40CB8024); }
};

// Descriptor Address Up 1 Register
union DESC_ADDR_UP_1 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_1 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_1*>(0x40CB8028); }
};

// Descriptor Address Down 1 Register
union DESC_ADDR_DOWN_1 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_1 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_1*>(0x40CB802C); }
};

// Descriptor Control0 2 Register
union DESC_CTRL0_2 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_2 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_2*>(0x40CB8040); }
};

// Descriptor Control1 2 Register
union DESC_CTRL1_2 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_2 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_2*>(0x40CB8044); }
};

// Descriptor Address Up 2 Register
union DESC_ADDR_UP_2 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_2 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_2*>(0x40CB8048); }
};

// Descriptor Address Down 2 Register
union DESC_ADDR_DOWN_2 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_2 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_2*>(0x40CB804C); }
};

// Descriptor Control0 3 Register
union DESC_CTRL0_3 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_3 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_3*>(0x40CB8060); }
};

// Descriptor Control1 3 Register
union DESC_CTRL1_3 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_3 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_3*>(0x40CB8064); }
};

// Descriptor Address Up 3 Register
union DESC_ADDR_UP_3 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_3 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_3*>(0x40CB8068); }
};

// Descriptor Address Down 3 Register
union DESC_ADDR_DOWN_3 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_3 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_3*>(0x40CB806C); }
};

// Descriptor Control0 4 Register
union DESC_CTRL0_4 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_4 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_4*>(0x40CB8080); }
};

// Descriptor Control1 4 Register
union DESC_CTRL1_4 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_4 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_4*>(0x40CB8084); }
};

// Descriptor Address Up 4 Register
union DESC_ADDR_UP_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_4 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_4*>(0x40CB8088); }
};

// Descriptor Address Down 4 Register
union DESC_ADDR_DOWN_4 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_4 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_4*>(0x40CB808C); }
};

// Descriptor Control0 5 Register
union DESC_CTRL0_5 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_5 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_5*>(0x40CB80A0); }
};

// Descriptor Control1 5 Register
union DESC_CTRL1_5 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_5 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_5*>(0x40CB80A4); }
};

// Descriptor Address Up 5 Register
union DESC_ADDR_UP_5 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_5 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_5*>(0x40CB80A8); }
};

// Descriptor Address Down 5 Register
union DESC_ADDR_DOWN_5 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_5 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_5*>(0x40CB80AC); }
};

// Descriptor Control0 6 Register
union DESC_CTRL0_6 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_6 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_6*>(0x40CB80C0); }
};

// Descriptor Control1 6 Register
union DESC_CTRL1_6 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_6 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_6*>(0x40CB80C4); }
};

// Descriptor Address Up 6 Register
union DESC_ADDR_UP_6 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_6 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_6*>(0x40CB80C8); }
};

// Descriptor Address Down 6 Register
union DESC_ADDR_DOWN_6 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_6 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_6*>(0x40CB80CC); }
};

// Descriptor Control0 7 Register
union DESC_CTRL0_7 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_7 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_7*>(0x40CB80E0); }
};

// Descriptor Control1 7 Register
union DESC_CTRL1_7 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_7 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_7*>(0x40CB80E4); }
};

// Descriptor Address Up 7 Register
union DESC_ADDR_UP_7 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_7 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_7*>(0x40CB80E8); }
};

// Descriptor Address Down 7 Register
union DESC_ADDR_DOWN_7 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_7 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_7*>(0x40CB80EC); }
};

// Descriptor Control0 8 Register
union DESC_CTRL0_8 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_8 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_8*>(0x40CB8100); }
};

// Descriptor Control1 8 Register
union DESC_CTRL1_8 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_8 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_8*>(0x40CB8104); }
};

// Descriptor Address Up 8 Register
union DESC_ADDR_UP_8 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_8 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_8*>(0x40CB8108); }
};

// Descriptor Address Down 8 Register
union DESC_ADDR_DOWN_8 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_8 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_8*>(0x40CB810C); }
};

// Descriptor Control0 9 Register
union DESC_CTRL0_9 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_9 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_9*>(0x40CB8120); }
};

// Descriptor Control1 9 Register
union DESC_CTRL1_9 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_9 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_9*>(0x40CB8124); }
};

// Descriptor Address Up 9 Register
union DESC_ADDR_UP_9 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_9 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_9*>(0x40CB8128); }
};

// Descriptor Address Down 9 Register
union DESC_ADDR_DOWN_9 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_9 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_9*>(0x40CB812C); }
};

// Descriptor Control0 10 Register
union DESC_CTRL0_10 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_10 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_10*>(0x40CB8140); }
};

// Descriptor Control1 10 Register
union DESC_CTRL1_10 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_10 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_10*>(0x40CB8144); }
};

// Descriptor Address Up 10 Register
union DESC_ADDR_UP_10 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_10 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_10*>(0x40CB8148); }
};

// Descriptor Address Down 10 Register
union DESC_ADDR_DOWN_10 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_10 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_10*>(0x40CB814C); }
};

// Descriptor Control0 11 Register
union DESC_CTRL0_11 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_11 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_11*>(0x40CB8160); }
};

// Descriptor Control1 11 Register
union DESC_CTRL1_11 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_11 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_11*>(0x40CB8164); }
};

// Descriptor Address Up 11 Register
union DESC_ADDR_UP_11 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_11 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_11*>(0x40CB8168); }
};

// Descriptor Address Down 11 Register
union DESC_ADDR_DOWN_11 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_11 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_11*>(0x40CB816C); }
};

// Descriptor Control0 12 Register
union DESC_CTRL0_12 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_12 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_12*>(0x40CB8180); }
};

// Descriptor Control1 12 Register
union DESC_CTRL1_12 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_12 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_12*>(0x40CB8184); }
};

// Descriptor Address Up 12 Register
union DESC_ADDR_UP_12 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_12 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_12*>(0x40CB8188); }
};

// Descriptor Address Down 12 Register
union DESC_ADDR_DOWN_12 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_12 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_12*>(0x40CB818C); }
};

// Descriptor Control0 13 Register
union DESC_CTRL0_13 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_13 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_13*>(0x40CB81A0); }
};

// Descriptor Control1 13 Register
union DESC_CTRL1_13 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_13 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_13*>(0x40CB81A4); }
};

// Descriptor Address Up 13 Register
union DESC_ADDR_UP_13 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_13 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_13*>(0x40CB81A8); }
};

// Descriptor Address Down 13 Register
union DESC_ADDR_DOWN_13 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_13 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_13*>(0x40CB81AC); }
};

// Descriptor Control0 14 Register
union DESC_CTRL0_14 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_14 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_14*>(0x40CB81C0); }
};

// Descriptor Control1 14 Register
union DESC_CTRL1_14 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_14 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_14*>(0x40CB81C4); }
};

// Descriptor Address Up 14 Register
union DESC_ADDR_UP_14 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_14 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_14*>(0x40CB81C8); }
};

// Descriptor Address Down 14 Register
union DESC_ADDR_DOWN_14 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_14 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_14*>(0x40CB81CC); }
};

// Descriptor Control0 15 Register
union DESC_CTRL0_15 {
  
  // Save Order
  enum class eSV_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eSV_START_END = 0,
    // Descriptors within the group are processed from end to start
    eSV_END_START = 1,
  };
  
  // Restore order
  enum class eRT_ORDER : uint32_t {
    // Descriptors within the group are processed from start to end
    eRT_START_END = 0,
    // Descriptors within the group are processed from end to start
    eRT_END_START = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Start index
    uint32_t START : 10;
    // read-write - End index
    uint32_t END : 10;
    // read-write - Save Order
    eSV_ORDER SV_ORDER : 1;
    // read-write - Restore order
    eRT_ORDER RT_ORDER : 1;
    uint32_t _reserved_0 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL0_15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL0_15 &Instance() { return *reinterpret_cast<volatile DESC_CTRL0_15*>(0x40CB81E0); }
};

// Descriptor Control1 15 Register
union DESC_CTRL1_15 {
  
  // Software trigger save
  enum class eSW_TRIG_SV : uint32_t {
    // No software save request/software restore request complete
    eREQ_NO = 0,
    // Request a software save operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // Software trigger restore
  enum class eSW_TRIG_RT : uint32_t {
    // No software restore request/software restore request complete
    eREQ_NO = 0,
    // Request a software restore operation/software restore operation in progress
    eREQ_YES = 1,
  };
  
  // This field describes the mapping (0-7) to external request signals from different domains
  enum class ePOWER_DOMAIN : uint32_t {
    // PGMC_BPC0
    eDOMAIN0 = 0,
    // PGMC_BPC1
    eDOMAIN1 = 1,
    // PGMC_BPC2
    eDOMAIN2 = 2,
    // PGMC_BPC3
    eDOMAIN3 = 3,
    // PGMC_BPC4
    eDOMAIN4 = 4,
    // PGMC_BPC5
    eDOMAIN5 = 5,
    // PGMC_BPC6
    eDOMAIN6 = 6,
    // PGMC_BPC7
    eDOMAIN7 = 7,
  };
  
  // Group Enable
  enum class eGP_EN : uint32_t {
    // Group disabled
    eGP_DIS = 0,
    // Group enabled
    eGP_EN = 1,
  };
  
  // Read Lock
  enum class eRL : uint32_t {
    // Group is unlocked (read access allowed)
    eR_UNLOCK = 0,
    // Group is locked (read access not allowed)
    eR_LOCK = 1,
  };
  
  // Write Lock
  enum class eWL : uint32_t {
    // Group is unlocked (write access allowed)
    eW_UNLOCK = 0,
    // Group is locked (write access not allowed)
    eW_LOCK = 1,
  };
  
  // Domain lock
  enum class eDL : uint32_t {
    // Unlock
    eD_UNLOCK = 0,
    // Lock
    eD_LOCK = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Software trigger save
    eSW_TRIG_SV SW_TRIG_SV : 1;
    // read-write - Software trigger restore
    eSW_TRIG_RT SW_TRIG_RT : 1;
    uint32_t _reserved_0 : 2;
    // read-write - This field describes the mapping (0-7) to external request signals from different domains
    ePOWER_DOMAIN POWER_DOMAIN : 3;
    // read-write - Group Enable
    eGP_EN GP_EN : 1;
    // read-write - Save Priority
    uint32_t SV_PRIORITY : 4;
    // read-write - Restore Priority
    uint32_t RT_PRIORITY : 4;
    // read-write - CPU Domain
    uint32_t CPUD : 2;
    // read-write - Read Lock
    eRL RL : 1;
    // read-write - Write Lock
    eWL WL : 1;
    // read-write - Domain lock
    eDL DL : 1;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_CTRL1_15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_CTRL1_15 &Instance() { return *reinterpret_cast<volatile DESC_CTRL1_15*>(0x40CB81E4); }
};

// Descriptor Address Up 15 Register
union DESC_ADDR_UP_15 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (High)
    uint32_t ADDR_UP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_UP_15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_UP_15 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_UP_15*>(0x40CB81E8); }
};

// Descriptor Address Down 15 Register
union DESC_ADDR_DOWN_15 {
  
  // Bit field definition.
  struct {
    // read-write - Address field (Low)
    uint32_t ADDR_DOWN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DESC_ADDR_DOWN_15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DESC_ADDR_DOWN_15 &Instance() { return *reinterpret_cast<volatile DESC_ADDR_DOWN_15*>(0x40CB81EC); }
};

// Control Register
union CTRL {
  
  // Save/Restore request disable
  enum class eDIS_HW_REQ : uint32_t {
    // PGMC save/restore requests enabled
    eENABLE_PGMC = 0,
    // PGMC save/restore requests disabled
    eDIS_PGMC = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 27;
    // read-write - Save/Restore request disable
    eDIS_HW_REQ DIS_HW_REQ : 1;
    uint32_t _reserved_1 : 3;
    // read-write - Software reset
    uint32_t SW_RESET : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40CB8200); }
};

// Interrupt Status Register
union INT_STATUS {
  
  // Group Conflict field
  enum class eGROUP_CONFLICT : uint32_t {
    // No group conflict error
    eGRP_CONFLICT_ERR_NO = 0,
    // A group conflict error has occurred
    eGRP_CONFLICT_ERR = 1,
  };
  
  // Timeout field
  enum class eTIMEOUT : uint32_t {
    // No timeout event
    eERR_INDEX_ERR_NO = 0,
    // A timeout event has occurred
    eERR_INDEX_ERR = 1,
  };
  
  // Software Request Done
  enum class eSW_REQ_DONE : uint32_t {
    // No software triggered requests or software triggered request still in progress
    eSW_REQ_ERR_A = 0,
    // Atleast one software triggered has been complete
    eSW_REQ_ERR = 1,
  };
  
  // AHB Error field
  enum class eAHB_ERR : uint32_t {
    // No AHB error
    eAHB_ERRNO = 0,
    // An AHB error has occurred
    eAHB_ERR = 1,
  };
  
  // Address Error field
  enum class eADDR_ERR : uint32_t {
    // No address error
    eADDERR_ERRNO = 0,
    // An address error has occurred
    eADDERR_ERR = 1,
  };
  
  // Bit field definition.
  struct {
    // read-only - Error Index
    uint32_t ERR_INDEX : 10;
    // read-only - AHB Bus response field
    uint32_t AHB_RESP : 2;
    uint32_t _reserved_0 : 15;
    // read-write - Group Conflict field
    eGROUP_CONFLICT GROUP_CONFLICT : 1;
    // read-write - Timeout field
    eTIMEOUT TIMEOUT : 1;
    // read-only - Software Request Done
    eSW_REQ_DONE SW_REQ_DONE : 1;
    // read-write - AHB Error field
    eAHB_ERR AHB_ERR : 1;
    // read-write - Address Error field
    eADDR_ERR ADDR_ERR : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  INT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile INT_STATUS &Instance() { return *reinterpret_cast<volatile INT_STATUS*>(0x40CB8204); }
};

// HP Timeout Register
union HP_TIMEOUT {
  
  // Bit field definition.
  struct {
    // read-write - Time out value
    uint32_t TIMEOUT_VALUE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HP_TIMEOUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HP_TIMEOUT &Instance() { return *reinterpret_cast<volatile HP_TIMEOUT*>(0x40CB820C); }
};

// Hardware Request Pending Register
union HW_GROUP_PENDING {
  
  // Bit field definition.
  struct {
    // read-only - This field indicates which groups are pending for save from hardware request
    uint32_t HW_SAVE_PENDING : 16;
    // read-only - This field indicates which groups are pending for restore from hardware request
    uint32_t HW_RESTORE_PENDING : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  HW_GROUP_PENDING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile HW_GROUP_PENDING &Instance() { return *reinterpret_cast<volatile HW_GROUP_PENDING*>(0x40CB821C); }
};

// Software Request Pending Register
union SW_GROUP_PENDING {
  
  // Bit field definition.
  struct {
    // read-only - This field indicates which groups are pending for save from software request
    uint32_t SW_SAVE_PENDING : 16;
    // read-only - This field indicates which groups are pending for restore from software request
    uint32_t SW_RESTORE_PENDING : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_GROUP_PENDING() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_GROUP_PENDING &Instance() { return *reinterpret_cast<volatile SW_GROUP_PENDING*>(0x40CB8220); }
};


} // namespace nSSARC_LP