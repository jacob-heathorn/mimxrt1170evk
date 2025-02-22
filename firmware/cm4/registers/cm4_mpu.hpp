#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// Memory Protection Unit
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCM4_MPU {


// The MPU Type Register indicates how many regions the MPU support. Software can use it to
// determine if the processor implements an MPU.
//
union TYPE {
  
  // Bit field definition.
  struct {
    uint32_t SEPARATE : 1;
    uint32_t _reserved_0 : 7;
    uint32_t DREGION : 8;
    uint32_t IREGION : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  TYPE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile TYPE &Instance() { return *reinterpret_cast<volatile TYPE*>(0xE000ED90); }
};

// MPU Control Register.
//
union CTRL {
  
  enum class eENABLE : uint32_t {
    eMPU_DISABLE = 0, // The MPU is disabled.
    eMPU_ENABLED = 1, // The MPU is enabled.
  };
  
  enum class eHFNMIENA : uint32_t {
    eDISABLE = 0, // Disables the MPU for these handlers.
    eENABLE = 1, // Use the MPU for memory accesses by these handlers.
  };
  
  enum class ePRIVDEFENA : uint32_t {
    eENABLE = 0, // Disables the default memory map. Any instruction or data access that does not access a defined region faults.
    eDISABLE = 1, // Enables the default memory map as a background region for privileged access. The background region acts as region number -1. All memory regions configured in the MPU take priority over the default memory map.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    eHFNMIENA HFNMIENA : 1;
    ePRIVDEFENA PRIVDEFENA : 1;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0xE000ED94); }
};

// MPU Region Number Register.
//
union RNR {
  
  // Bit field definition.
  struct {
    uint32_t REGION : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RNR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RNR &Instance() { return *reinterpret_cast<volatile RNR*>(0xE000ED98); }
};

// MPU Region Base Address Register.
//
union RBAR {
  
  enum class eVALID : uint32_t {
    eIGNORE_RBAR_REGION = 0, // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
    eUSE_RBAR_REGION = 1, // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
  };
  
  // Bit field definition.
  struct {
    uint32_t REGION : 4;
    eVALID VALID : 1;
    uint32_t ADDR : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBAR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBAR &Instance() { return *reinterpret_cast<volatile RBAR*>(0xE000ED9C); }
};

// MPU Region Attribute and Size Register.
//
union RASR {
  
  enum class eENABLE : uint32_t {
    eDISABLED = 0, // When the MPU is enabled, this region is disabled.
    eENABLED = 1, // When the MPU is enabled, this region is enabled.
  };
  
  enum class eS : uint32_t {
    eNON_SHAREABLE = 0, // Non-shareable memory.
    eSHAREABLE = 1, // Shareable memory.
  };
  
  enum class eAP : uint32_t {
    eNO_ACCESS = 0, // Any access generates a permission fault.
    ePRIVILEGED_ACCESS = 1, // Privileged access only.
    eUNPRIVILEGED_READ_ACCESS = 2, // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
    eFULL_ACCESS = 3, // Full access
    ePRIVILEGED_READ_ONLY = 5, // Privileged read-only access.
    eREAD_ONLY = 6, // Privileged and unprivileged read-only access.
    eREAD_ONLY_2 = 7, // Privileged and unprivileged read-only access.
  };
  
  enum class eXN : uint32_t {
    eEXECUTE = 0, // Execution of an instruction fetched from this region permitted.
    eEXECUTE_NEVER = 1, // Execution of an instruction fetched from this region not permitted.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    uint32_t SIZE : 5;
    uint32_t _reserved_0 : 2;
    uint32_t SRD : 8;
    uint32_t B : 1;
    uint32_t C : 1;
    eS S : 1;
    uint32_t TEX : 3;
    uint32_t _reserved_1 : 2;
    eAP AP : 3;
    uint32_t _reserved_2 : 1;
    eXN XN : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RASR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RASR &Instance() { return *reinterpret_cast<volatile RASR*>(0xE000EDA0); }
};

// MPU Region Base Address Register.
//
union RBAR_A1 {
  
  enum class eVALID : uint32_t {
    eIGNORE_RBAR_REGION = 0, // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
    eUSE_RBAR_REGION = 1, // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
  };
  
  // Bit field definition.
  struct {
    uint32_t REGION : 4;
    eVALID VALID : 1;
    uint32_t ADDR : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBAR_A1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBAR_A1 &Instance() { return *reinterpret_cast<volatile RBAR_A1*>(0xE000EDA4); }
};

// MPU Region Attribute and Size Register.
//
union RASR_A1 {
  
  enum class eENABLE : uint32_t {
    eDISABLED = 0, // When the MPU is enabled, this region is disabled.
    eENABLED = 1, // When the MPU is enabled, this region is enabled.
  };
  
  enum class eS : uint32_t {
    eNON_SHAREABLE = 0, // Non-shareable memory.
    eSHAREABLE = 1, // Shareable memory.
  };
  
  enum class eAP : uint32_t {
    eNO_ACCESS = 0, // Any access generates a permission fault.
    ePRIVILEGED_ACCESS = 1, // Privileged access only.
    eUNPRIVILEGED_READ_ACCESS = 2, // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
    eFULL_ACCESS = 3, // Full access
    ePRIVILEGED_READ_ONLY = 5, // Privileged read-only access.
    eREAD_ONLY = 6, // Privileged and unprivileged read-only access.
    eREAD_ONLY_2 = 7, // Privileged and unprivileged read-only access.
  };
  
  enum class eXN : uint32_t {
    eEXECUTE = 0, // Execution of an instruction fetched from this region permitted.
    eEXECUTE_NEVER = 1, // Execution of an instruction fetched from this region not permitted.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    uint32_t SIZE : 5;
    uint32_t _reserved_0 : 2;
    uint32_t SRD : 8;
    uint32_t B : 1;
    uint32_t C : 1;
    eS S : 1;
    uint32_t TEX : 3;
    uint32_t _reserved_1 : 2;
    eAP AP : 3;
    uint32_t _reserved_2 : 1;
    eXN XN : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RASR_A1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RASR_A1 &Instance() { return *reinterpret_cast<volatile RASR_A1*>(0xE000EDA8); }
};

// MPU Region Base Address Register.
//
union RBAR_A2 {
  
  enum class eVALID : uint32_t {
    eIGNORE_RBAR_REGION = 0, // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
    eUSE_RBAR_REGION = 1, // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
  };
  
  // Bit field definition.
  struct {
    uint32_t REGION : 4;
    eVALID VALID : 1;
    uint32_t ADDR : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBAR_A2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBAR_A2 &Instance() { return *reinterpret_cast<volatile RBAR_A2*>(0xE000EDAC); }
};

// MPU Region Attribute and Size Register.
//
union RASR_A2 {
  
  enum class eENABLE : uint32_t {
    eDISABLED = 0, // When the MPU is enabled, this region is disabled.
    eENABLED = 1, // When the MPU is enabled, this region is enabled.
  };
  
  enum class eS : uint32_t {
    eNON_SHAREABLE = 0, // Non-shareable memory.
    eSHAREABLE = 1, // Shareable memory.
  };
  
  enum class eAP : uint32_t {
    eNO_ACCESS = 0, // Any access generates a permission fault.
    ePRIVILEGED_ACCESS = 1, // Privileged access only.
    eUNPRIVILEGED_READ_ACCESS = 2, // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
    eFULL_ACCESS = 3, // Full access
    ePRIVILEGED_READ_ONLY = 5, // Privileged read-only access.
    eREAD_ONLY = 6, // Privileged and unprivileged read-only access.
    eREAD_ONLY_2 = 7, // Privileged and unprivileged read-only access.
  };
  
  enum class eXN : uint32_t {
    eEXECUTE = 0, // Execution of an instruction fetched from this region permitted.
    eEXECUTE_NEVER = 1, // Execution of an instruction fetched from this region not permitted.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    uint32_t SIZE : 5;
    uint32_t _reserved_0 : 2;
    uint32_t SRD : 8;
    uint32_t B : 1;
    uint32_t C : 1;
    eS S : 1;
    uint32_t TEX : 3;
    uint32_t _reserved_1 : 2;
    eAP AP : 3;
    uint32_t _reserved_2 : 1;
    eXN XN : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RASR_A2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RASR_A2 &Instance() { return *reinterpret_cast<volatile RASR_A2*>(0xE000EDB0); }
};

// MPU Region Base Address Register.
//
union RBAR_A3 {
  
  enum class eVALID : uint32_t {
    eIGNORE_RBAR_REGION = 0, // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
    eUSE_RBAR_REGION = 1, // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
  };
  
  // Bit field definition.
  struct {
    uint32_t REGION : 4;
    eVALID VALID : 1;
    uint32_t ADDR : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RBAR_A3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RBAR_A3 &Instance() { return *reinterpret_cast<volatile RBAR_A3*>(0xE000EDB4); }
};

// MPU Region Attribute and Size Register.
//
union RASR_A3 {
  
  enum class eENABLE : uint32_t {
    eDISABLED = 0, // When the MPU is enabled, this region is disabled.
    eENABLED = 1, // When the MPU is enabled, this region is enabled.
  };
  
  enum class eS : uint32_t {
    eNON_SHAREABLE = 0, // Non-shareable memory.
    eSHAREABLE = 1, // Shareable memory.
  };
  
  enum class eAP : uint32_t {
    eNO_ACCESS = 0, // Any access generates a permission fault.
    ePRIVILEGED_ACCESS = 1, // Privileged access only.
    eUNPRIVILEGED_READ_ACCESS = 2, // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
    eFULL_ACCESS = 3, // Full access
    ePRIVILEGED_READ_ONLY = 5, // Privileged read-only access.
    eREAD_ONLY = 6, // Privileged and unprivileged read-only access.
    eREAD_ONLY_2 = 7, // Privileged and unprivileged read-only access.
  };
  
  enum class eXN : uint32_t {
    eEXECUTE = 0, // Execution of an instruction fetched from this region permitted.
    eEXECUTE_NEVER = 1, // Execution of an instruction fetched from this region not permitted.
  };
  
  // Bit field definition.
  struct {
    eENABLE ENABLE : 1;
    uint32_t SIZE : 5;
    uint32_t _reserved_0 : 2;
    uint32_t SRD : 8;
    uint32_t B : 1;
    uint32_t C : 1;
    eS S : 1;
    uint32_t TEX : 3;
    uint32_t _reserved_1 : 2;
    eAP AP : 3;
    uint32_t _reserved_2 : 1;
    eXN XN : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RASR_A3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RASR_A3 &Instance() { return *reinterpret_cast<volatile RASR_A3*>(0xE000EDB8); }
};


} // namespace nCM4_MPU