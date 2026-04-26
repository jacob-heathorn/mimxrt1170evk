#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_MIF
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Pgmc_cpc0_mif {
  static_assert(
        Instance == 0u || Instance == 0u || Instance == 1u || Instance == 1u,
        "Pgmc_cpc0_mif: Instance must be one of 0, 0, 1, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C89100u :
      Instance == 0u ? 0x40C89500u :
      Instance == 1u ? 0x40C89200u :
      Instance == 1u ? 0x40C89600u :
      0u;

  // MIF Authentication Control
  struct MIF_AUTHEN_CTRL_fields_ {
    // Configuration lock
    using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_AUTHEN_CTRL_fields_

  struct MIF_AUTHEN_CTRL : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<20, 0>,
      typename MIF_AUTHEN_CTRL_fields_::LOCK_CFG,
      ftl::mmio::Reserved<11, 21>> {
    using LOCK_CFG = typename MIF_AUTHEN_CTRL_fields_::LOCK_CFG;
  };

  // MIF MLPL control of SLEEP
  struct MIF_MLPL_SLEEP_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_SLEEP_fields_

  struct MIF_MLPL_SLEEP : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x0000FF00u,
      ftl::mmio::RW,
      typename MIF_MLPL_SLEEP_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_SLEEP_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of IG
  struct MIF_MLPL_IG_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_IG_fields_

  struct MIF_MLPL_IG : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000060u,
      ftl::mmio::RW,
      typename MIF_MLPL_IG_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_IG_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of LS
  struct MIF_MLPL_LS_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_LS_fields_

  struct MIF_MLPL_LS : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000010u,
      ftl::mmio::RW,
      typename MIF_MLPL_LS_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_LS_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of HS
  struct MIF_MLPL_HS_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_HS_fields_

  struct MIF_MLPL_HS : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename MIF_MLPL_HS_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_HS_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of STDBY
  struct MIF_MLPL_STDBY_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_STDBY_fields_

  struct MIF_MLPL_STDBY : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000040u,
      ftl::mmio::RW,
      typename MIF_MLPL_STDBY_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_STDBY_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of array power down
  struct MIF_MLPL_ARR_PDN_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_ARR_PDN_fields_

  struct MIF_MLPL_ARR_PDN : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000C00u,
      ftl::mmio::RW,
      typename MIF_MLPL_ARR_PDN_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_ARR_PDN_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of peripheral power down
  struct MIF_MLPL_PER_PDN_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_PER_PDN_fields_

  struct MIF_MLPL_PER_PDN : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00004A00u,
      ftl::mmio::RW,
      typename MIF_MLPL_PER_PDN_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_PER_PDN_fields_::MLPL_CTRL;
  };

  // MIF MLPL control of INITN
  struct MIF_MLPL_INITN_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bypass vdd_ok. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
    using BYPASS_VDD_OK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_INITN_fields_

  struct MIF_MLPL_INITN : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint32_t,
      0x000035FFu,
      ftl::mmio::RW,
      typename MIF_MLPL_INITN_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<15, 16>,
      typename MIF_MLPL_INITN_fields_::BYPASS_VDD_OK> {
    using MLPL_CTRL = typename MIF_MLPL_INITN_fields_::MLPL_CTRL;
    using BYPASS_VDD_OK = typename MIF_MLPL_INITN_fields_::BYPASS_VDD_OK;
  };

  // MIF MLPL control of isolation enable
  struct MIF_MLPL_ISO_fields_ {
    // Signal behavior at each MLPL
    using MLPL_CTRL = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIF_MLPL_ISO_fields_

  struct MIF_MLPL_ISO : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint32_t,
      0x0000CA00u,
      ftl::mmio::RW,
      typename MIF_MLPL_ISO_fields_::MLPL_CTRL,
      ftl::mmio::Reserved<16, 16>> {
    using MLPL_CTRL = typename MIF_MLPL_ISO_fields_::MLPL_CTRL;
  };

};

}  // namespace regs