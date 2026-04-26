#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// XRDC2
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Xrdc2D {
  static_assert(
        Instance == 0u || Instance == 1u,
        "Xrdc2D: Instance must be one of 0, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40CE0000u :
      Instance == 1u ? 0x40CD0000u :
      0u;

  // Module Control Register
  struct MCR_fields_ {
    enum class eGVLDM : std::uint32_t {
      // MDACs are disabled.
      edisabled = 0,
      // MDACs are enabled.
      eenabled = 1,
    };

    enum class eGVLDC : std::uint32_t {
      // Access controls are disabled, XRDC2 allows all transactions.
      edisabled = 0,
      // Access controls are enabled.
      eenabled = 1,
    };

    enum class eGCL : std::uint32_t {
      // Lock disabled, registers can be written by any domain.
      edisabled_00 = 0,
      // Lock disabled until the next reset, registers can be written by any domain.
      edisabled_01 = 1,
      // Lock enabled, only the global configuration lock owner (SR[GCLO]) can write to registers.
      eenabled_10 = 2,
      // Lock enabled, all registers are read only until the next reset.
      eenabled_11 = 3,
    };

    // Global Valid MDAC
    using GVLDM = ftl::mmio::Field<1, 0, eGVLDM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Global Valid Access Control
    using GVLDC = ftl::mmio::Field<1, 1, eGVLDC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Global Configuration Lock
    using GCL = ftl::mmio::Field<2, 4, eGCL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCR_fields_

  struct MCR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MCR_fields_::GVLDM,
      typename MCR_fields_::GVLDC,
      ftl::mmio::Reserved<2, 2>,
      typename MCR_fields_::GCL,
      ftl::mmio::Reserved<26, 6>> {
    using eGVLDM = typename MCR_fields_::eGVLDM;
    using eGVLDC = typename MCR_fields_::eGVLDC;
    using eGCL = typename MCR_fields_::eGCL;
    using GVLDM = typename MCR_fields_::GVLDM;
    using GVLDC = typename MCR_fields_::GVLDC;
    using GCL = typename MCR_fields_::GCL;
  };

  // Status Register
  struct SR_fields_ {
    // Domain Identifier Number
    using DIN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Revision Level
    using HRL = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Global Configuration Lock Owner
    using GCLO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SR_fields_

  struct SR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000010u,
      ftl::mmio::RO,
      typename SR_fields_::DIN,
      typename SR_fields_::HRL,
      typename SR_fields_::GCLO,
      ftl::mmio::Reserved<20, 12>> {
    using DIN = typename SR_fields_::DIN;
    using HRL = typename SR_fields_::HRL;
    using GCLO = typename SR_fields_::GCLO;
  };

  // Memory Slot Access Control
  struct MSC_MSAC_W0_fields_ {
    // Domain "x" access control policy
    using D0ACP = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D1ACP = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D2ACP = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D3ACP = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D4ACP = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D5ACP = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D6ACP = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D7ACP = ftl::mmio::Field<3, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Exclusive Access Lock Owner
    using EALO = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MSC_MSAC_W0_fields_

  template<std::uint32_t ClusterIndex>
  struct MSC_MSAC_W0 : ftl::mmio::Register<
      kBase + 0x1000u + (ClusterIndex * 0x8u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MSC_MSAC_W0_fields_::D0ACP,
      typename MSC_MSAC_W0_fields_::D1ACP,
      typename MSC_MSAC_W0_fields_::D2ACP,
      typename MSC_MSAC_W0_fields_::D3ACP,
      typename MSC_MSAC_W0_fields_::D4ACP,
      typename MSC_MSAC_W0_fields_::D5ACP,
      typename MSC_MSAC_W0_fields_::D6ACP,
      typename MSC_MSAC_W0_fields_::D7ACP,
      typename MSC_MSAC_W0_fields_::EALO,
      ftl::mmio::Reserved<4, 28>> {
    static_assert(ClusterIndex < 128u, "MSC_MSAC_W0: ClusterIndex out of range");
    using D0ACP = typename MSC_MSAC_W0_fields_::D0ACP;
    using D1ACP = typename MSC_MSAC_W0_fields_::D1ACP;
    using D2ACP = typename MSC_MSAC_W0_fields_::D2ACP;
    using D3ACP = typename MSC_MSAC_W0_fields_::D3ACP;
    using D4ACP = typename MSC_MSAC_W0_fields_::D4ACP;
    using D5ACP = typename MSC_MSAC_W0_fields_::D5ACP;
    using D6ACP = typename MSC_MSAC_W0_fields_::D6ACP;
    using D7ACP = typename MSC_MSAC_W0_fields_::D7ACP;
    using EALO = typename MSC_MSAC_W0_fields_::EALO;
  };

  // Memory Slot Access Control
  struct MSC_MSAC_W1_fields_ {
    enum class eEAL : std::uint32_t {
      // Lock disabled.
      edisabled_00 = 0,
      // Lock disabled until next reset.
      edisabled_01 = 1,
      // Lock enabled, lock state = available.
      eenabled_10 = 2,
      // Lock enabled, lock state = not available.
      eenabled_11 = 3,
    };

    enum class eDL2 : std::uint32_t {
      // Lock disabled, descriptor registers can be written.
      edisabled_00 = 0,
      // Lock disabled until the next reset, descriptor registers can be written.
      edisabled_01 = 1,
      // Lock enabled, only domain "x" can only update the DxACP field; no other fields can be written.
      eenabled_10 = 2,
      // Lock enabled, descriptor registers are read-only until the next reset.
      eenabled_11 = 3,
    };

    enum class eVLD : std::uint32_t {
      // The MSAC assignment is invalid.
      einvalid = 0,
      // The MSAC assignment is valid.
      evalid = 1,
    };

    // Domain "x" access control policy
    using D8ACP = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D9ACP = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D10ACP = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D11ACP = ftl::mmio::Field<3, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D12ACP = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D13ACP = ftl::mmio::Field<3, 15, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D14ACP = ftl::mmio::Field<3, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain "x" access control policy
    using D15ACP = ftl::mmio::Field<3, 21, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Exclusive Access Lock
    using EAL = ftl::mmio::Field<2, 24, eEAL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Descriptor Lock
    using DL2 = ftl::mmio::Field<2, 29, eDL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Valid
    using VLD = ftl::mmio::Field<1, 31, eVLD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MSC_MSAC_W1_fields_

  template<std::uint32_t ClusterIndex>
  struct MSC_MSAC_W1 : ftl::mmio::Register<
      kBase + 0x1004u + (ClusterIndex * 0x8u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MSC_MSAC_W1_fields_::D8ACP,
      typename MSC_MSAC_W1_fields_::D9ACP,
      typename MSC_MSAC_W1_fields_::D10ACP,
      typename MSC_MSAC_W1_fields_::D11ACP,
      typename MSC_MSAC_W1_fields_::D12ACP,
      typename MSC_MSAC_W1_fields_::D13ACP,
      typename MSC_MSAC_W1_fields_::D14ACP,
      typename MSC_MSAC_W1_fields_::D15ACP,
      typename MSC_MSAC_W1_fields_::EAL,
      ftl::mmio::Reserved<3, 26>,
      typename MSC_MSAC_W1_fields_::DL2,
      typename MSC_MSAC_W1_fields_::VLD> {
    static_assert(ClusterIndex < 128u, "MSC_MSAC_W1: ClusterIndex out of range");
    using eEAL = typename MSC_MSAC_W1_fields_::eEAL;
    using eDL2 = typename MSC_MSAC_W1_fields_::eDL2;
    using eVLD = typename MSC_MSAC_W1_fields_::eVLD;
    using D8ACP = typename MSC_MSAC_W1_fields_::D8ACP;
    using D9ACP = typename MSC_MSAC_W1_fields_::D9ACP;
    using D10ACP = typename MSC_MSAC_W1_fields_::D10ACP;
    using D11ACP = typename MSC_MSAC_W1_fields_::D11ACP;
    using D12ACP = typename MSC_MSAC_W1_fields_::D12ACP;
    using D13ACP = typename MSC_MSAC_W1_fields_::D13ACP;
    using D14ACP = typename MSC_MSAC_W1_fields_::D14ACP;
    using D15ACP = typename MSC_MSAC_W1_fields_::D15ACP;
    using EAL = typename MSC_MSAC_W1_fields_::EAL;
    using DL2 = typename MSC_MSAC_W1_fields_::DL2;
    using VLD = typename MSC_MSAC_W1_fields_::VLD;
  };

};

}  // namespace regs