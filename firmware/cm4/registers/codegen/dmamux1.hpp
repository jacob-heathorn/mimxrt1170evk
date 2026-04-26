#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DMAMUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Dmamux1 {
  // Channel index Configuration Register
  struct ChcfgFields {
    enum class eA_ON : std::uint32_t {
      // DMA Channel Always ON function is disabled
      eA_ON_0 = 0,
      // DMA Channel Always ON function is enabled
      eA_ON_1 = 1,
    };

    enum class eTRIG : std::uint32_t {
      // Triggering is disabled. If triggering is disabled and ENBL is set, the DMA Channel will simply route the specified source to the DMA channel. (Normal mode)
      eTRIG_0 = 0,
      // Triggering is enabled. If triggering is enabled and ENBL is set, the DMA_CH_MUX is in Periodic Trigger mode.
      eTRIG_1 = 1,
    };

    enum class eENBL : std::uint32_t {
      // DMA Mux channel is disabled
      eENBL_0 = 0,
      // DMA Mux channel is enabled
      eENBL_1 = 1,
    };

    // DMA Channel Source (Slot Number)
    using SOURCE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Channel Always Enable
    using A_ON = ftl::mmio::Field<1, 29, eA_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Channel Trigger Enable
    using TRIG = ftl::mmio::Field<1, 30, eTRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Mux Channel Enable
    using ENBL = ftl::mmio::Field<1, 31, eENBL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ChcfgFields

  template<std::uint32_t Index>
  struct CHCFG : ftl::mmio::Register<
      0x40C18000u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ChcfgFields::SOURCE,
      ftl::mmio::Reserved<21, 8>,
      ChcfgFields::A_ON,
      ChcfgFields::TRIG,
      ChcfgFields::ENBL> {
    static_assert(Index < 32u, "CHCFG: Index out of range");
    using eA_ON = ChcfgFields::eA_ON;
    using eTRIG = ChcfgFields::eTRIG;
    using eENBL = ChcfgFields::eENBL;
    using SOURCE = ChcfgFields::SOURCE;
    using A_ON = ChcfgFields::A_ON;
    using TRIG = ChcfgFields::TRIG;
    using ENBL = ChcfgFields::ENBL;
  };

};

}  // namespace regs