#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_MIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct PgmcCpc0Mif {
  static_assert(
        Instance == 0u || Instance == 0u || Instance == 1u || Instance == 1u,
        "PgmcCpc0Mif: Instance must be one of 0, 0, 1, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C89100u :
      Instance == 0u ? 0x40C89500u :
      Instance == 1u ? 0x40C89200u :
      Instance == 1u ? 0x40C89600u :
      0u;

  // MIF Authentication Control
  struct MifAuthenCtrlFields {
    // Configuration lock
    using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifAuthenCtrlFields

  struct MIF_AUTHEN_CTRL : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<20, 0>,
      typename MifAuthenCtrlFields::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using LOCK_CFG = typename MifAuthenCtrlFields::LOCK_CFG;
  };

  // MIF MLPL control of SLEEP
  struct MifMlplSleepFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplSleepFields

  struct MIF_MLPL_SLEEP : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x0000FF00u,
      ftl::mmio::RW,
      typename MifMlplSleepFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplSleepFields::MLPL_CTRL;
  };

  // MIF MLPL control of IG
  struct MifMlplIgFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplIgFields

  struct MIF_MLPL_IG : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000060u,
      ftl::mmio::RW,
      typename MifMlplIgFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplIgFields::MLPL_CTRL;
  };

  // MIF MLPL control of LS
  struct MifMlplLsFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplLsFields

  struct MIF_MLPL_LS : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000010u,
      ftl::mmio::RW,
      typename MifMlplLsFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplLsFields::MLPL_CTRL;
  };

  // MIF MLPL control of HS
  struct MifMlplHsFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplHsFields

  struct MIF_MLPL_HS : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename MifMlplHsFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplHsFields::MLPL_CTRL;
  };

  // MIF MLPL control of STDBY
  struct MifMlplStdbyFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplStdbyFields

  struct MIF_MLPL_STDBY : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000040u,
      ftl::mmio::RW,
      typename MifMlplStdbyFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplStdbyFields::MLPL_CTRL;
  };

  // MIF MLPL control of array power down
  struct MifMlplArrPdnFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplArrPdnFields

  struct MIF_MLPL_ARR_PDN : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000C00u,
      ftl::mmio::RW,
      typename MifMlplArrPdnFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplArrPdnFields::MLPL_CTRL;
  };

  // MIF MLPL control of peripheral power down
  struct MifMlplPerPdnFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplPerPdnFields

  struct MIF_MLPL_PER_PDN : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00004A00u,
      ftl::mmio::RW,
      typename MifMlplPerPdnFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplPerPdnFields::MLPL_CTRL;
  };

  // MIF MLPL control of INITN
  struct MifMlplInitnFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bypass vdd_ok. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using BYPASS_VDD_OK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplInitnFields

  struct MIF_MLPL_INITN : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint32_t,
      0x000035FFu,
      ftl::mmio::RW,
      typename MifMlplInitnFields::MLPL_CTRL,
      ftl::mmio::Reserved<15, 16>,
      typename MifMlplInitnFields::BYPASS_VDD_OK> {
    using MLPL_CTRL = typename MifMlplInitnFields::MLPL_CTRL;
    using BYPASS_VDD_OK = typename MifMlplInitnFields::BYPASS_VDD_OK;
  };

  // MIF MLPL control of isolation enable
  struct MifMlplIsoFields {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MifMlplIsoFields

  struct MIF_MLPL_ISO : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint32_t,
      0x0000CA00u,
      ftl::mmio::RW,
      typename MifMlplIsoFields::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MifMlplIsoFields::MLPL_CTRL;
  };

};

}  // namespace regs