#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SRAM Registers
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::ssarc_hp {

// Description Address Register
struct SRAM0__fields_ {
  // Address field
  using ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SRAM0__fields_

template<std::uint32_t ClusterIndex>
struct SRAM0_ : ftl::mmio::Register<
    0x40CB4000u + (ClusterIndex * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAM0__fields_::ADDR> {
  static_assert(ClusterIndex < 1024u, "SRAM0_: ClusterIndex out of range");
  using ADDR = SRAM0__fields_::ADDR;
};

// Description Data Register
struct SRAM1__fields_ {
  // Data field
  using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SRAM1__fields_

template<std::uint32_t ClusterIndex>
struct SRAM1_ : ftl::mmio::Register<
    0x40CB4004u + (ClusterIndex * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAM1__fields_::DATA> {
  static_assert(ClusterIndex < 1024u, "SRAM1_: ClusterIndex out of range");
  using DATA = SRAM1__fields_::DATA;
};

// Description Control Register
struct SRAM2__fields_ {
  enum class eTYPE : std::uint32_t {
    // SR
    eSR = 0,
    // WO
    eWO = 1,
    // RMW_OR
    eRMW_OR = 2,
    // RMW_AND
    eRMW_AND = 3,
    // DELAY
    eDELAY = 4,
    // POLLING_0
    ePOLLING_0 = 5,
    // POLLING_1
    ePOLLING_1 = 6,
  };

  enum class eSV_EN : std::uint32_t {
    // Do not use this descriptor in the save operation
    eSV_EN_0 = 0,
    // Use this descriptor in the save operation
    eSV_EN_1 = 1,
  };

  enum class eRT_EN : std::uint32_t {
    // Do not use this descriptor for the restore operation
    eRT_EN_0 = 0,
    // Use this descriptor for the restore operation
    eRT_EN_1 = 1,
  };

  enum class eSIZE : std::uint32_t {
    // 8-bit
    esize_0 = 0,
    // 16-bit
    esize_1 = 1,
    // 32-bit
    esize_2 = 2,
  };

  // Type field
  using TYPE = ftl::mmio::Field<3, 0, eTYPE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Save Enable
  using SV_EN = ftl::mmio::Field<1, 4, eSV_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Restore Enable
  using RT_EN = ftl::mmio::Field<1, 5, eRT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Size field
  using SIZE = ftl::mmio::Field<2, 6, eSIZE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SRAM2__fields_

template<std::uint32_t ClusterIndex>
struct SRAM2_ : ftl::mmio::Register<
    0x40CB4008u + (ClusterIndex * 0x10u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SRAM2__fields_::TYPE,
    ftl::mmio::Reserved<1, 3>,
    SRAM2__fields_::SV_EN,
    SRAM2__fields_::RT_EN,
    SRAM2__fields_::SIZE,
    ftl::mmio::Reserved<24, 8>> {
  static_assert(ClusterIndex < 1024u, "SRAM2_: ClusterIndex out of range");
  using eTYPE = SRAM2__fields_::eTYPE;
  using eSV_EN = SRAM2__fields_::eSV_EN;
  using eRT_EN = SRAM2__fields_::eRT_EN;
  using eSIZE = SRAM2__fields_::eSIZE;
  using TYPE = SRAM2__fields_::TYPE;
  using SV_EN = SRAM2__fields_::SV_EN;
  using RT_EN = SRAM2__fields_::RT_EN;
  using SIZE = SRAM2__fields_::SIZE;
};

}  // namespace regs::ssarc_hp