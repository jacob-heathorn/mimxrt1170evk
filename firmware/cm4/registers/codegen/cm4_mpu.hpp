#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Memory Protection Unit
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::cm4_mpu {


// The MPU Type Register indicates how many regions the MPU support. Software can use it to
// determine if the processor implements an MPU.
struct TYPE_fields_ {
  // Indicates support for separate instruction and data address maps. RAZ. Armv7-M only supports a unified MPU
  using SEPARATE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Number of regions supported by the MPU. If this field reads-as-zero the processor does not implement an MPU.
  using DREGION = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Instruction region. RAZ. Armv7-M only supports a unified MPU.
  using IREGION = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct TYPE_fields_

struct TYPE : ftl::mmio::Register<
    0xE000ED90u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    TYPE_fields_::SEPARATE,
    ftl::mmio::Reserved<7, 1>,
    TYPE_fields_::DREGION,
    TYPE_fields_::IREGION,
    ftl::mmio::Reserved<8, 24>> {
  using SEPARATE = TYPE_fields_::SEPARATE;
  using DREGION = TYPE_fields_::DREGION;
  using IREGION = TYPE_fields_::IREGION;
};


// MPU Control Register.
struct CTRL_fields_ {

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
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0xE000ED94u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL_fields_::ENABLE,
    CTRL_fields_::HFNMIENA,
    CTRL_fields_::PRIVDEFENA,
    ftl::mmio::Reserved<29, 3>> {
  using eENABLE = CTRL_fields_::eENABLE;
  using eHFNMIENA = CTRL_fields_::eHFNMIENA;
  using ePRIVDEFENA = CTRL_fields_::ePRIVDEFENA;
  using ENABLE = CTRL_fields_::ENABLE;
  using HFNMIENA = CTRL_fields_::HFNMIENA;
  using PRIVDEFENA = CTRL_fields_::PRIVDEFENA;
};


// MPU Region Number Register.
struct RNR_fields_ {
  // Indicates the memory region accessed by MPU_RBAR and MPU_RASR.
  using REGION = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RNR_fields_

struct RNR : ftl::mmio::Register<
    0xE000ED98u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RNR_fields_::REGION,
    ftl::mmio::Reserved<24, 8>> {
  using REGION = RNR_fields_::REGION;
};


// MPU Region Base Address Register.
struct RBAR_fields_ {

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
};  // struct RBAR_fields_

struct RBAR : ftl::mmio::Register<
    0xE000ED9Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBAR_fields_::REGION,
    RBAR_fields_::VALID,
    RBAR_fields_::ADDR> {
  using eVALID = RBAR_fields_::eVALID;
  using REGION = RBAR_fields_::REGION;
  using VALID = RBAR_fields_::VALID;
  using ADDR = RBAR_fields_::ADDR;
};


// MPU Region Attribute and Size Register.
struct RASR_fields_ {

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
};  // struct RASR_fields_

struct RASR : ftl::mmio::Register<
    0xE000EDA0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RASR_fields_::ENABLE,
    RASR_fields_::SIZE,
    ftl::mmio::Reserved<2, 6>,
    RASR_fields_::SRD,
    RASR_fields_::B,
    RASR_fields_::C,
    RASR_fields_::S,
    RASR_fields_::TEX,
    ftl::mmio::Reserved<2, 22>,
    RASR_fields_::AP,
    ftl::mmio::Reserved<1, 27>,
    RASR_fields_::XN,
    ftl::mmio::Reserved<3, 29>> {
  using eENABLE = RASR_fields_::eENABLE;
  using eS = RASR_fields_::eS;
  using eAP = RASR_fields_::eAP;
  using eXN = RASR_fields_::eXN;
  using ENABLE = RASR_fields_::ENABLE;
  using SIZE = RASR_fields_::SIZE;
  using SRD = RASR_fields_::SRD;
  using B = RASR_fields_::B;
  using C = RASR_fields_::C;
  using S = RASR_fields_::S;
  using TEX = RASR_fields_::TEX;
  using AP = RASR_fields_::AP;
  using XN = RASR_fields_::XN;
};


// MPU Region Base Address Register.
struct RBAR_A1_fields_ {

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
};  // struct RBAR_A1_fields_

struct RBAR_A1 : ftl::mmio::Register<
    0xE000EDA4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBAR_A1_fields_::REGION,
    RBAR_A1_fields_::VALID,
    RBAR_A1_fields_::ADDR> {
  using eVALID = RBAR_A1_fields_::eVALID;
  using REGION = RBAR_A1_fields_::REGION;
  using VALID = RBAR_A1_fields_::VALID;
  using ADDR = RBAR_A1_fields_::ADDR;
};


// MPU Region Attribute and Size Register.
struct RASR_A1_fields_ {

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
};  // struct RASR_A1_fields_

struct RASR_A1 : ftl::mmio::Register<
    0xE000EDA8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RASR_A1_fields_::ENABLE,
    RASR_A1_fields_::SIZE,
    ftl::mmio::Reserved<2, 6>,
    RASR_A1_fields_::SRD,
    RASR_A1_fields_::B,
    RASR_A1_fields_::C,
    RASR_A1_fields_::S,
    RASR_A1_fields_::TEX,
    ftl::mmio::Reserved<2, 22>,
    RASR_A1_fields_::AP,
    ftl::mmio::Reserved<1, 27>,
    RASR_A1_fields_::XN,
    ftl::mmio::Reserved<3, 29>> {
  using eENABLE = RASR_A1_fields_::eENABLE;
  using eS = RASR_A1_fields_::eS;
  using eAP = RASR_A1_fields_::eAP;
  using eXN = RASR_A1_fields_::eXN;
  using ENABLE = RASR_A1_fields_::ENABLE;
  using SIZE = RASR_A1_fields_::SIZE;
  using SRD = RASR_A1_fields_::SRD;
  using B = RASR_A1_fields_::B;
  using C = RASR_A1_fields_::C;
  using S = RASR_A1_fields_::S;
  using TEX = RASR_A1_fields_::TEX;
  using AP = RASR_A1_fields_::AP;
  using XN = RASR_A1_fields_::XN;
};


// MPU Region Base Address Register.
struct RBAR_A2_fields_ {

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
};  // struct RBAR_A2_fields_

struct RBAR_A2 : ftl::mmio::Register<
    0xE000EDACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBAR_A2_fields_::REGION,
    RBAR_A2_fields_::VALID,
    RBAR_A2_fields_::ADDR> {
  using eVALID = RBAR_A2_fields_::eVALID;
  using REGION = RBAR_A2_fields_::REGION;
  using VALID = RBAR_A2_fields_::VALID;
  using ADDR = RBAR_A2_fields_::ADDR;
};


// MPU Region Attribute and Size Register.
struct RASR_A2_fields_ {

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
};  // struct RASR_A2_fields_

struct RASR_A2 : ftl::mmio::Register<
    0xE000EDB0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RASR_A2_fields_::ENABLE,
    RASR_A2_fields_::SIZE,
    ftl::mmio::Reserved<2, 6>,
    RASR_A2_fields_::SRD,
    RASR_A2_fields_::B,
    RASR_A2_fields_::C,
    RASR_A2_fields_::S,
    RASR_A2_fields_::TEX,
    ftl::mmio::Reserved<2, 22>,
    RASR_A2_fields_::AP,
    ftl::mmio::Reserved<1, 27>,
    RASR_A2_fields_::XN,
    ftl::mmio::Reserved<3, 29>> {
  using eENABLE = RASR_A2_fields_::eENABLE;
  using eS = RASR_A2_fields_::eS;
  using eAP = RASR_A2_fields_::eAP;
  using eXN = RASR_A2_fields_::eXN;
  using ENABLE = RASR_A2_fields_::ENABLE;
  using SIZE = RASR_A2_fields_::SIZE;
  using SRD = RASR_A2_fields_::SRD;
  using B = RASR_A2_fields_::B;
  using C = RASR_A2_fields_::C;
  using S = RASR_A2_fields_::S;
  using TEX = RASR_A2_fields_::TEX;
  using AP = RASR_A2_fields_::AP;
  using XN = RASR_A2_fields_::XN;
};


// MPU Region Base Address Register.
struct RBAR_A3_fields_ {

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
};  // struct RBAR_A3_fields_

struct RBAR_A3 : ftl::mmio::Register<
    0xE000EDB4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RBAR_A3_fields_::REGION,
    RBAR_A3_fields_::VALID,
    RBAR_A3_fields_::ADDR> {
  using eVALID = RBAR_A3_fields_::eVALID;
  using REGION = RBAR_A3_fields_::REGION;
  using VALID = RBAR_A3_fields_::VALID;
  using ADDR = RBAR_A3_fields_::ADDR;
};


// MPU Region Attribute and Size Register.
struct RASR_A3_fields_ {

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
};  // struct RASR_A3_fields_

struct RASR_A3 : ftl::mmio::Register<
    0xE000EDB8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RASR_A3_fields_::ENABLE,
    RASR_A3_fields_::SIZE,
    ftl::mmio::Reserved<2, 6>,
    RASR_A3_fields_::SRD,
    RASR_A3_fields_::B,
    RASR_A3_fields_::C,
    RASR_A3_fields_::S,
    RASR_A3_fields_::TEX,
    ftl::mmio::Reserved<2, 22>,
    RASR_A3_fields_::AP,
    ftl::mmio::Reserved<1, 27>,
    RASR_A3_fields_::XN,
    ftl::mmio::Reserved<3, 29>> {
  using eENABLE = RASR_A3_fields_::eENABLE;
  using eS = RASR_A3_fields_::eS;
  using eAP = RASR_A3_fields_::eAP;
  using eXN = RASR_A3_fields_::eXN;
  using ENABLE = RASR_A3_fields_::ENABLE;
  using SIZE = RASR_A3_fields_::SIZE;
  using SRD = RASR_A3_fields_::SRD;
  using B = RASR_A3_fields_::B;
  using C = RASR_A3_fields_::C;
  using S = RASR_A3_fields_::S;
  using TEX = RASR_A3_fields_::TEX;
  using AP = RASR_A3_fields_::AP;
  using XN = RASR_A3_fields_::XN;
};

}  // namespace regs::cm4_mpu