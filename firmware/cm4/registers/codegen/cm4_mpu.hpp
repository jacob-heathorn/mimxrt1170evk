#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Memory Protection Unit
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm4Mpu {
  // The MPU Type Register indicates how many regions the MPU support. Software can use it to
  // determine if the processor implements an MPU.
  struct TypeFields {
    // Indicates support for separate instruction and data address maps. RAZ. Armv7-M only supports a unified MPU
    using SEPARATE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Number of regions supported by the MPU. If this field reads-as-zero the processor does not implement an MPU.
    using DREGION = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Instruction region. RAZ. Armv7-M only supports a unified MPU.
    using IREGION = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct TypeFields

  struct TYPE : ftl::mmio::Register<
      0xE000ED90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      TypeFields::SEPARATE,
      ftl::mmio::Reserved<7, 1>,
      TypeFields::DREGION,
      TypeFields::IREGION,
      ftl::mmio::Reserved<8, 24>> {
    using SEPARATE = TypeFields::SEPARATE;
    using DREGION = TypeFields::DREGION;
    using IREGION = TypeFields::IREGION;
  };

  // MPU Control Register.
  struct CtrlFields {
    enum class eENABLE : std::uint32_t {
      // The MPU is disabled.
      eMPU_DISABLE = 0,
      // The MPU is enabled.
      eMPU_ENABLED = 1,
    };

    enum class eHFNMIENA : std::uint32_t {
      // Disables the MPU for these handlers.
      eDISABLE = 0,
      // Use the MPU for memory accesses by these handlers.
      eENABLE = 1,
    };

    enum class ePRIVDEFENA : std::uint32_t {
      // Disables the default memory map. Any instruction or data access that does not access a defined region faults.
      eENABLE = 0,
      // Enables the default memory map as a background region for privileged access. The background region acts as region number -1. All memory regions configured in the MPU take priority over the default memory map.
      eDISABLE = 1,
    };

    // Enables the MPU.
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Controls whether handlers executing with priority less than 0 access memory with the MPU enabled or with the MPU disabled.
    using HFNMIENA = ftl::mmio::Field<1, 1, eHFNMIENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using PRIVDEFENA = ftl::mmio::Field<1, 2, ePRIVDEFENA, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0xE000ED94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlFields::ENABLE,
      CtrlFields::HFNMIENA,
      CtrlFields::PRIVDEFENA,
      ftl::mmio::Reserved<29, 3>> {
    using eENABLE = CtrlFields::eENABLE;
    using eHFNMIENA = CtrlFields::eHFNMIENA;
    using ePRIVDEFENA = CtrlFields::ePRIVDEFENA;
    using ENABLE = CtrlFields::ENABLE;
    using HFNMIENA = CtrlFields::HFNMIENA;
    using PRIVDEFENA = CtrlFields::PRIVDEFENA;
  };

  // MPU Region Number Register.
  struct RnrFields {
    // Indicates the memory region accessed by MPU_RBAR and MPU_RASR.
    using REGION = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RnrFields

  struct RNR : ftl::mmio::Register<
      0xE000ED98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RnrFields::REGION,
      ftl::mmio::Reserved<24, 8>> {
    using REGION = RnrFields::REGION;
  };

  // MPU Region Base Address Register.
  struct RbarFields {
    enum class eVALID : std::uint32_t {
      // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
      eIGNORE_RBAR_REGION = 0,
      // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
      eUSE_RBAR_REGION = 1,
    };

    // On writes, can specify the number of the region to update. On reads, returns bits[3:0] of MPU_RNR.
    using REGION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // On writes, indicates whether the region to update is specified by MPU_RNR.REGION, or by the REGION value specified in this write. When using the REGION value specified by this write, MPU_RNR.REGION is updated to this value.
    using VALID = ftl::mmio::Field<1, 4, eVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base address of the region.
    using ADDR = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbarFields

  struct RBAR : ftl::mmio::Register<
      0xE000ED9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbarFields::REGION,
      RbarFields::VALID,
      RbarFields::ADDR> {
    using eVALID = RbarFields::eVALID;
    using REGION = RbarFields::REGION;
    using VALID = RbarFields::VALID;
    using ADDR = RbarFields::ADDR;
  };

  // MPU Region Attribute and Size Register.
  struct RasrFields {
    enum class eENABLE : std::uint32_t {
      // When the MPU is enabled, this region is disabled.
      eDISABLED = 0,
      // When the MPU is enabled, this region is enabled.
      eENABLED = 1,
    };

    enum class eS : std::uint32_t {
      // Non-shareable memory.
      eNON_SHAREABLE = 0,
      // Shareable memory.
      eSHAREABLE = 1,
    };

    enum class eAP : std::uint32_t {
      // Any access generates a permission fault.
      eNO_ACCESS = 0,
      // Privileged access only.
      ePRIVILEGED_ACCESS = 1,
      // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
      eUNPRIVILEGED_READ_ACCESS = 2,
      // Full access
      eFULL_ACCESS = 3,
      // Privileged read-only access.
      ePRIVILEGED_READ_ONLY = 5,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY = 6,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY_2 = 7,
    };

    enum class eXN : std::uint32_t {
      // Execution of an instruction fetched from this region permitted.
      eEXECUTE = 0,
      // Execution of an instruction fetched from this region not permitted.
      eEXECUTE_NEVER = 1,
    };

    // Enables this region.
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates the region size. The region size, in bytes, is 2**(SIZE+1). SIZE field values less than 4 are reserved, because the smallest supported region size is 32 bytes.
    using SIZE = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled. SRD[0-7]=0 - subregion enabled. SRD[0-7]=1 - subregion disabled.
    using SRD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute B. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using B = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute C. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using C = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // For Normal memory regions, the S bit indicates whether the region is shareable. For Strongly-ordered and Device memory, the S bit is ignored.
    using S = ftl::mmio::Field<1, 18, eS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute TEX. The TEX[2:0], C, and B bits together indicate the memory type of the region
    using TEX = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The AP[2:0] bits indicate the access and privilege properties of the region.
    using AP = ftl::mmio::Field<3, 24, eAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // The XN bit is an Execute Never bit, that indicates whether the processor can execute instructions from the region.
    using XN = ftl::mmio::Field<1, 28, eXN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RasrFields

  struct RASR : ftl::mmio::Register<
      0xE000EDA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RasrFields::ENABLE,
      RasrFields::SIZE,
      ftl::mmio::Reserved<2, 6>,
      RasrFields::SRD,
      RasrFields::B,
      RasrFields::C,
      RasrFields::S,
      RasrFields::TEX,
      ftl::mmio::Reserved<2, 22>,
      RasrFields::AP,
      ftl::mmio::Reserved<1, 27>,
      RasrFields::XN,
      ftl::mmio::Reserved<3, 29>> {
    using eENABLE = RasrFields::eENABLE;
    using eS = RasrFields::eS;
    using eAP = RasrFields::eAP;
    using eXN = RasrFields::eXN;
    using ENABLE = RasrFields::ENABLE;
    using SIZE = RasrFields::SIZE;
    using SRD = RasrFields::SRD;
    using B = RasrFields::B;
    using C = RasrFields::C;
    using S = RasrFields::S;
    using TEX = RasrFields::TEX;
    using AP = RasrFields::AP;
    using XN = RasrFields::XN;
  };

  // MPU Region Base Address Register.
  struct RbarA1Fields {
    enum class eVALID : std::uint32_t {
      // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
      eIGNORE_RBAR_REGION = 0,
      // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
      eUSE_RBAR_REGION = 1,
    };

    // On writes, can specify the number of the region to update. On reads, returns bits[3:0] of MPU_RNR.
    using REGION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // On writes, indicates whether the region to update is specified by MPU_RNR.REGION, or by the REGION value specified in this write. When using the REGION value specified by this write, MPU_RNR.REGION is updated to this value.
    using VALID = ftl::mmio::Field<1, 4, eVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base address of the region.
    using ADDR = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbarA1Fields

  struct RBAR_A1 : ftl::mmio::Register<
      0xE000EDA4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbarA1Fields::REGION,
      RbarA1Fields::VALID,
      RbarA1Fields::ADDR> {
    using eVALID = RbarA1Fields::eVALID;
    using REGION = RbarA1Fields::REGION;
    using VALID = RbarA1Fields::VALID;
    using ADDR = RbarA1Fields::ADDR;
  };

  // MPU Region Attribute and Size Register.
  struct RasrA1Fields {
    enum class eENABLE : std::uint32_t {
      // When the MPU is enabled, this region is disabled.
      eDISABLED = 0,
      // When the MPU is enabled, this region is enabled.
      eENABLED = 1,
    };

    enum class eS : std::uint32_t {
      // Non-shareable memory.
      eNON_SHAREABLE = 0,
      // Shareable memory.
      eSHAREABLE = 1,
    };

    enum class eAP : std::uint32_t {
      // Any access generates a permission fault.
      eNO_ACCESS = 0,
      // Privileged access only.
      ePRIVILEGED_ACCESS = 1,
      // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
      eUNPRIVILEGED_READ_ACCESS = 2,
      // Full access
      eFULL_ACCESS = 3,
      // Privileged read-only access.
      ePRIVILEGED_READ_ONLY = 5,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY = 6,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY_2 = 7,
    };

    enum class eXN : std::uint32_t {
      // Execution of an instruction fetched from this region permitted.
      eEXECUTE = 0,
      // Execution of an instruction fetched from this region not permitted.
      eEXECUTE_NEVER = 1,
    };

    // Enables this region.
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates the region size. The region size, in bytes, is 2**(SIZE+1). SIZE field values less than 4 are reserved, because the smallest supported region size is 32 bytes.
    using SIZE = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled. SRD[0-7]=0 - subregion enabled. SRD[0-7]=1 - subregion disabled.
    using SRD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute B. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using B = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute C. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using C = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // For Normal memory regions, the S bit indicates whether the region is shareable. For Strongly-ordered and Device memory, the S bit is ignored.
    using S = ftl::mmio::Field<1, 18, eS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute TEX. The TEX[2:0], C, and B bits together indicate the memory type of the region
    using TEX = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The AP[2:0] bits indicate the access and privilege properties of the region.
    using AP = ftl::mmio::Field<3, 24, eAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // The XN bit is an Execute Never bit, that indicates whether the processor can execute instructions from the region.
    using XN = ftl::mmio::Field<1, 28, eXN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RasrA1Fields

  struct RASR_A1 : ftl::mmio::Register<
      0xE000EDA8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RasrA1Fields::ENABLE,
      RasrA1Fields::SIZE,
      ftl::mmio::Reserved<2, 6>,
      RasrA1Fields::SRD,
      RasrA1Fields::B,
      RasrA1Fields::C,
      RasrA1Fields::S,
      RasrA1Fields::TEX,
      ftl::mmio::Reserved<2, 22>,
      RasrA1Fields::AP,
      ftl::mmio::Reserved<1, 27>,
      RasrA1Fields::XN,
      ftl::mmio::Reserved<3, 29>> {
    using eENABLE = RasrA1Fields::eENABLE;
    using eS = RasrA1Fields::eS;
    using eAP = RasrA1Fields::eAP;
    using eXN = RasrA1Fields::eXN;
    using ENABLE = RasrA1Fields::ENABLE;
    using SIZE = RasrA1Fields::SIZE;
    using SRD = RasrA1Fields::SRD;
    using B = RasrA1Fields::B;
    using C = RasrA1Fields::C;
    using S = RasrA1Fields::S;
    using TEX = RasrA1Fields::TEX;
    using AP = RasrA1Fields::AP;
    using XN = RasrA1Fields::XN;
  };

  // MPU Region Base Address Register.
  struct RbarA2Fields {
    enum class eVALID : std::uint32_t {
      // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
      eIGNORE_RBAR_REGION = 0,
      // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
      eUSE_RBAR_REGION = 1,
    };

    // On writes, can specify the number of the region to update. On reads, returns bits[3:0] of MPU_RNR.
    using REGION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // On writes, indicates whether the region to update is specified by MPU_RNR.REGION, or by the REGION value specified in this write. When using the REGION value specified by this write, MPU_RNR.REGION is updated to this value.
    using VALID = ftl::mmio::Field<1, 4, eVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base address of the region.
    using ADDR = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbarA2Fields

  struct RBAR_A2 : ftl::mmio::Register<
      0xE000EDACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbarA2Fields::REGION,
      RbarA2Fields::VALID,
      RbarA2Fields::ADDR> {
    using eVALID = RbarA2Fields::eVALID;
    using REGION = RbarA2Fields::REGION;
    using VALID = RbarA2Fields::VALID;
    using ADDR = RbarA2Fields::ADDR;
  };

  // MPU Region Attribute and Size Register.
  struct RasrA2Fields {
    enum class eENABLE : std::uint32_t {
      // When the MPU is enabled, this region is disabled.
      eDISABLED = 0,
      // When the MPU is enabled, this region is enabled.
      eENABLED = 1,
    };

    enum class eS : std::uint32_t {
      // Non-shareable memory.
      eNON_SHAREABLE = 0,
      // Shareable memory.
      eSHAREABLE = 1,
    };

    enum class eAP : std::uint32_t {
      // Any access generates a permission fault.
      eNO_ACCESS = 0,
      // Privileged access only.
      ePRIVILEGED_ACCESS = 1,
      // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
      eUNPRIVILEGED_READ_ACCESS = 2,
      // Full access
      eFULL_ACCESS = 3,
      // Privileged read-only access.
      ePRIVILEGED_READ_ONLY = 5,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY = 6,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY_2 = 7,
    };

    enum class eXN : std::uint32_t {
      // Execution of an instruction fetched from this region permitted.
      eEXECUTE = 0,
      // Execution of an instruction fetched from this region not permitted.
      eEXECUTE_NEVER = 1,
    };

    // Enables this region.
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates the region size. The region size, in bytes, is 2**(SIZE+1). SIZE field values less than 4 are reserved, because the smallest supported region size is 32 bytes.
    using SIZE = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled. SRD[0-7]=0 - subregion enabled. SRD[0-7]=1 - subregion disabled.
    using SRD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute B. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using B = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute C. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using C = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // For Normal memory regions, the S bit indicates whether the region is shareable. For Strongly-ordered and Device memory, the S bit is ignored.
    using S = ftl::mmio::Field<1, 18, eS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute TEX. The TEX[2:0], C, and B bits together indicate the memory type of the region
    using TEX = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The AP[2:0] bits indicate the access and privilege properties of the region.
    using AP = ftl::mmio::Field<3, 24, eAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // The XN bit is an Execute Never bit, that indicates whether the processor can execute instructions from the region.
    using XN = ftl::mmio::Field<1, 28, eXN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RasrA2Fields

  struct RASR_A2 : ftl::mmio::Register<
      0xE000EDB0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RasrA2Fields::ENABLE,
      RasrA2Fields::SIZE,
      ftl::mmio::Reserved<2, 6>,
      RasrA2Fields::SRD,
      RasrA2Fields::B,
      RasrA2Fields::C,
      RasrA2Fields::S,
      RasrA2Fields::TEX,
      ftl::mmio::Reserved<2, 22>,
      RasrA2Fields::AP,
      ftl::mmio::Reserved<1, 27>,
      RasrA2Fields::XN,
      ftl::mmio::Reserved<3, 29>> {
    using eENABLE = RasrA2Fields::eENABLE;
    using eS = RasrA2Fields::eS;
    using eAP = RasrA2Fields::eAP;
    using eXN = RasrA2Fields::eXN;
    using ENABLE = RasrA2Fields::ENABLE;
    using SIZE = RasrA2Fields::SIZE;
    using SRD = RasrA2Fields::SRD;
    using B = RasrA2Fields::B;
    using C = RasrA2Fields::C;
    using S = RasrA2Fields::S;
    using TEX = RasrA2Fields::TEX;
    using AP = RasrA2Fields::AP;
    using XN = RasrA2Fields::XN;
  };

  // MPU Region Base Address Register.
  struct RbarA3Fields {
    enum class eVALID : std::uint32_t {
      // Apply the base address update to the region specified by MPU_RNR.REGION. The REGION field value is ignored.
      eIGNORE_RBAR_REGION = 0,
      // Update MPU_RNR.REGION to the value obtained by zero extending the REGION value specified in this write, and apply the base address update to this region.
      eUSE_RBAR_REGION = 1,
    };

    // On writes, can specify the number of the region to update. On reads, returns bits[3:0] of MPU_RNR.
    using REGION = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // On writes, indicates whether the region to update is specified by MPU_RNR.REGION, or by the REGION value specified in this write. When using the REGION value specified by this write, MPU_RNR.REGION is updated to this value.
    using VALID = ftl::mmio::Field<1, 4, eVALID, ftl::mmio::RW, ftl::mmio::Normal>;
    // Base address of the region.
    using ADDR = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RbarA3Fields

  struct RBAR_A3 : ftl::mmio::Register<
      0xE000EDB4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RbarA3Fields::REGION,
      RbarA3Fields::VALID,
      RbarA3Fields::ADDR> {
    using eVALID = RbarA3Fields::eVALID;
    using REGION = RbarA3Fields::REGION;
    using VALID = RbarA3Fields::VALID;
    using ADDR = RbarA3Fields::ADDR;
  };

  // MPU Region Attribute and Size Register.
  struct RasrA3Fields {
    enum class eENABLE : std::uint32_t {
      // When the MPU is enabled, this region is disabled.
      eDISABLED = 0,
      // When the MPU is enabled, this region is enabled.
      eENABLED = 1,
    };

    enum class eS : std::uint32_t {
      // Non-shareable memory.
      eNON_SHAREABLE = 0,
      // Shareable memory.
      eSHAREABLE = 1,
    };

    enum class eAP : std::uint32_t {
      // Any access generates a permission fault.
      eNO_ACCESS = 0,
      // Privileged access only.
      ePRIVILEGED_ACCESS = 1,
      // Any unprivileged write generates a permission fault (Priviledge read/write, unprivileged read-only).
      eUNPRIVILEGED_READ_ACCESS = 2,
      // Full access
      eFULL_ACCESS = 3,
      // Privileged read-only access.
      ePRIVILEGED_READ_ONLY = 5,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY = 6,
      // Privileged and unprivileged read-only access.
      eREAD_ONLY_2 = 7,
    };

    enum class eXN : std::uint32_t {
      // Execution of an instruction fetched from this region permitted.
      eEXECUTE = 0,
      // Execution of an instruction fetched from this region not permitted.
      eEXECUTE_NEVER = 1,
    };

    // Enables this region.
    using ENABLE = ftl::mmio::Field<1, 0, eENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates the region size. The region size, in bytes, is 2**(SIZE+1). SIZE field values less than 4 are reserved, because the smallest supported region size is 32 bytes.
    using SIZE = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled. SRD[0-7]=0 - subregion enabled. SRD[0-7]=1 - subregion disabled.
    using SRD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute B. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using B = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute C. The TEX[2:0], C, and B bits together indicate the memory type of the region.
    using C = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // For Normal memory regions, the S bit indicates whether the region is shareable. For Strongly-ordered and Device memory, the S bit is ignored.
    using S = ftl::mmio::Field<1, 18, eS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Memory type attribute TEX. The TEX[2:0], C, and B bits together indicate the memory type of the region
    using TEX = ftl::mmio::Field<3, 19, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // The AP[2:0] bits indicate the access and privilege properties of the region.
    using AP = ftl::mmio::Field<3, 24, eAP, ftl::mmio::RW, ftl::mmio::Normal>;
    // The XN bit is an Execute Never bit, that indicates whether the processor can execute instructions from the region.
    using XN = ftl::mmio::Field<1, 28, eXN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RasrA3Fields

  struct RASR_A3 : ftl::mmio::Register<
      0xE000EDB8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RasrA3Fields::ENABLE,
      RasrA3Fields::SIZE,
      ftl::mmio::Reserved<2, 6>,
      RasrA3Fields::SRD,
      RasrA3Fields::B,
      RasrA3Fields::C,
      RasrA3Fields::S,
      RasrA3Fields::TEX,
      ftl::mmio::Reserved<2, 22>,
      RasrA3Fields::AP,
      ftl::mmio::Reserved<1, 27>,
      RasrA3Fields::XN,
      ftl::mmio::Reserved<3, 29>> {
    using eENABLE = RasrA3Fields::eENABLE;
    using eS = RasrA3Fields::eS;
    using eAP = RasrA3Fields::eAP;
    using eXN = RasrA3Fields::eXN;
    using ENABLE = RasrA3Fields::ENABLE;
    using SIZE = RasrA3Fields::SIZE;
    using SRD = RasrA3Fields::SRD;
    using B = RasrA3Fields::B;
    using C = RasrA3Fields::C;
    using S = RasrA3Fields::S;
    using TEX = RasrA3Fields::TEX;
    using AP = RasrA3Fields::AP;
    using XN = RasrA3Fields::XN;
  };

};

}  // namespace regs