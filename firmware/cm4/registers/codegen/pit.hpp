#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PIT
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Pit {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Pit: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400D8000u :
      Instance == 2u ? 0x40CB0000u :
      0u;

  // PIT Module Control Register
  struct McrFields {
    enum class eFRZ : std::uint32_t {
      // Timers continue to run in Debug mode.
      et000001 = 0,
      // Timers are stopped in Debug mode.
      et0000011 = 1,
    };

    enum class eMDIS : std::uint32_t {
      // Clock for standard PIT timers is enabled.
      et0301 = 0,
      // Clock for standard PIT timers is disabled.
      et00000111 = 1,
    };

    // Freeze
    using FRZ = ftl::mmio::Field<1, 0, eFRZ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Module Disable for PIT
    using MDIS = ftl::mmio::Field<1, 1, eMDIS, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McrFields

  struct MCR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename McrFields::FRZ,
      typename McrFields::MDIS,
      ftl::mmio::Reserved<30, 2>> {
    using eFRZ = typename McrFields::eFRZ;
    using eMDIS = typename McrFields::eMDIS;
    using FRZ = typename McrFields::FRZ;
    using MDIS = typename McrFields::MDIS;
  };

  // PIT Upper Lifetime Timer Register
  struct Ltmr64hFields {
    // Life Timer value
    using LTH = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Ltmr64hFields

  struct LTMR64H : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Ltmr64hFields::LTH> {
    using LTH = typename Ltmr64hFields::LTH;
  };

  // PIT Lower Lifetime Timer Register
  struct Ltmr64lFields {
    // Life Timer value
    using LTL = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Ltmr64lFields

  struct LTMR64L : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename Ltmr64lFields::LTL> {
    using LTL = typename Ltmr64lFields::LTL;
  };

  // Timer Load Value Register
  struct LdvalFields {
    // Timer Start Value
    using TSV = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LdvalFields

  template<std::uint32_t ClusterIndex>
  struct LDVAL : ftl::mmio::Register<
      kBase + 0x100u + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename LdvalFields::TSV> {
    static_assert(ClusterIndex < 4u, "LDVAL: ClusterIndex out of range");
    using TSV = typename LdvalFields::TSV;
  };

  // Current Timer Value Register
  struct CvalFields {
    // Current Timer Value
    using TVL = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CvalFields

  template<std::uint32_t ClusterIndex>
  struct CVAL : ftl::mmio::Register<
      kBase + 0x104u + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CvalFields::TVL> {
    static_assert(ClusterIndex < 4u, "CVAL: ClusterIndex out of range");
    using TVL = typename CvalFields::TVL;
  };

  // Timer Control Register
  struct TctrlFields {
    enum class eTEN : std::uint32_t {
      // Timer n is disabled.
      et02981 = 0,
      // Timer n is enabled.
      et008981 = 1,
    };

    enum class eTIE : std::uint32_t {
      // Interrupt requests from Timer n are disabled.
      et0331 = 0,
      // Interrupt is requested whenever TIF is set.
      et077711 = 1,
    };

    enum class eCHN : std::uint32_t {
      // Timer is not chained.
      etimer0001 = 0,
      // Timer is chained to a previous timer. For example, for channel 2, if this field is set, Timer 2 is chained to Timer 1.
      etimer0081 = 1,
    };

    // Timer Enable
    using TEN = ftl::mmio::Field<1, 0, eTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Interrupt Enable
    using TIE = ftl::mmio::Field<1, 1, eTIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Chain Mode
    using CHN = ftl::mmio::Field<1, 2, eCHN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TctrlFields

  template<std::uint32_t ClusterIndex>
  struct TCTRL : ftl::mmio::Register<
      kBase + 0x108u + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TctrlFields::TEN,
      typename TctrlFields::TIE,
      typename TctrlFields::CHN,
      ftl::mmio::Reserved<29, 3>> {
    static_assert(ClusterIndex < 4u, "TCTRL: ClusterIndex out of range");
    using eTEN = typename TctrlFields::eTEN;
    using eTIE = typename TctrlFields::eTIE;
    using eCHN = typename TctrlFields::eCHN;
    using TEN = typename TctrlFields::TEN;
    using TIE = typename TctrlFields::TIE;
    using CHN = typename TctrlFields::CHN;
  };

  // Timer Flag Register
  struct TflgFields {
    enum class eTIF : std::uint32_t {
      // Timeout has not yet occurred.
      et0022331 = 0,
      // Timeout has occurred.
      et0022332221 = 1,
    };

    // Timer Interrupt Flag
    using TIF = ftl::mmio::Field<1, 0, eTIF, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct TflgFields

  template<std::uint32_t ClusterIndex>
  struct TFLG : ftl::mmio::Register<
      kBase + 0x10Cu + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TflgFields::TIF,
      ftl::mmio::Reserved<31, 1>> {
    static_assert(ClusterIndex < 4u, "TFLG: ClusterIndex out of range");
    using eTIF = typename TflgFields::eTIF;
    using TIF = typename TflgFields::TIF;
  };

};

}  // namespace regs