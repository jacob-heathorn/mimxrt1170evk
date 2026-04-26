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
  struct McrFields {
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
  };  // struct McrFields

  struct MCR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename McrFields::GVLDM,
      typename McrFields::GVLDC,
      ftl::mmio::Reserved<2, 2>,
      typename McrFields::GCL,
      ftl::mmio::Reserved<26, 6>> {
    using eGVLDM = typename McrFields::eGVLDM;
    using eGVLDC = typename McrFields::eGVLDC;
    using eGCL = typename McrFields::eGCL;
    using GVLDM = typename McrFields::GVLDM;
    using GVLDC = typename McrFields::GVLDC;
    using GCL = typename McrFields::GCL;
  };

  // Status Register
  struct SrFields {
    // Domain Identifier Number
    using DIN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Hardware Revision Level
    using HRL = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Global Configuration Lock Owner
    using GCLO = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SrFields

  struct SR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000010u,
      ftl::mmio::RO,
      typename SrFields::DIN,
      typename SrFields::HRL,
      typename SrFields::GCLO,
      ftl::mmio::Reserved<20, 12>> {
    using DIN = typename SrFields::DIN;
    using HRL = typename SrFields::HRL;
    using GCLO = typename SrFields::GCLO;
  };

  // Memory Slot Access Control
  struct MscMsacW0Fields {
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
  };  // struct MscMsacW0Fields

  template<std::uint32_t ClusterIndex>
  struct MSC_MSAC_W0 : ftl::mmio::Register<
      kBase + 0x1000u + (ClusterIndex * 0x8u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MscMsacW0Fields::D0ACP,
      typename MscMsacW0Fields::D1ACP,
      typename MscMsacW0Fields::D2ACP,
      typename MscMsacW0Fields::D3ACP,
      typename MscMsacW0Fields::D4ACP,
      typename MscMsacW0Fields::D5ACP,
      typename MscMsacW0Fields::D6ACP,
      typename MscMsacW0Fields::D7ACP,
      typename MscMsacW0Fields::EALO,
      ftl::mmio::Reserved<4, 28>> {
    static_assert(ClusterIndex < 128u, "MSC_MSAC_W0: ClusterIndex out of range");
    using D0ACP = typename MscMsacW0Fields::D0ACP;
    using D1ACP = typename MscMsacW0Fields::D1ACP;
    using D2ACP = typename MscMsacW0Fields::D2ACP;
    using D3ACP = typename MscMsacW0Fields::D3ACP;
    using D4ACP = typename MscMsacW0Fields::D4ACP;
    using D5ACP = typename MscMsacW0Fields::D5ACP;
    using D6ACP = typename MscMsacW0Fields::D6ACP;
    using D7ACP = typename MscMsacW0Fields::D7ACP;
    using EALO = typename MscMsacW0Fields::EALO;
  };

  // Memory Slot Access Control
  struct MscMsacW1Fields {
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
  };  // struct MscMsacW1Fields

  template<std::uint32_t ClusterIndex>
  struct MSC_MSAC_W1 : ftl::mmio::Register<
      kBase + 0x1004u + (ClusterIndex * 0x8u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MscMsacW1Fields::D8ACP,
      typename MscMsacW1Fields::D9ACP,
      typename MscMsacW1Fields::D10ACP,
      typename MscMsacW1Fields::D11ACP,
      typename MscMsacW1Fields::D12ACP,
      typename MscMsacW1Fields::D13ACP,
      typename MscMsacW1Fields::D14ACP,
      typename MscMsacW1Fields::D15ACP,
      typename MscMsacW1Fields::EAL,
      ftl::mmio::Reserved<3, 26>,
      typename MscMsacW1Fields::DL2,
      typename MscMsacW1Fields::VLD> {
    static_assert(ClusterIndex < 128u, "MSC_MSAC_W1: ClusterIndex out of range");
    using eEAL = typename MscMsacW1Fields::eEAL;
    using eDL2 = typename MscMsacW1Fields::eDL2;
    using eVLD = typename MscMsacW1Fields::eVLD;
    using D8ACP = typename MscMsacW1Fields::D8ACP;
    using D9ACP = typename MscMsacW1Fields::D9ACP;
    using D10ACP = typename MscMsacW1Fields::D10ACP;
    using D11ACP = typename MscMsacW1Fields::D11ACP;
    using D12ACP = typename MscMsacW1Fields::D12ACP;
    using D13ACP = typename MscMsacW1Fields::D13ACP;
    using D14ACP = typename MscMsacW1Fields::D14ACP;
    using D15ACP = typename MscMsacW1Fields::D15ACP;
    using EAL = typename MscMsacW1Fields::EAL;
    using DL2 = typename MscMsacW1Fields::DL2;
    using VLD = typename MscMsacW1Fields::VLD;
  };

};

}  // namespace regs