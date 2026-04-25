#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DMAMUX
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dmamux0 {

// Channel index Configuration Register
namespace CHCFG_fields_ {

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
}  // namespace CHCFG_fields_

template<std::uint32_t Index>
struct CHCFG : ftl::mmio::Register<
    0x40074000u + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CHCFG_fields_::SOURCE,
    ftl::mmio::Reserved<21, 8>,
    CHCFG_fields_::A_ON,
    CHCFG_fields_::TRIG,
    CHCFG_fields_::ENBL> {
  static_assert(Index < 32u, "CHCFG: Index out of range");
  using eA_ON = CHCFG_fields_::eA_ON;
  using eTRIG = CHCFG_fields_::eTRIG;
  using eENBL = CHCFG_fields_::eENBL;
  using SOURCE = CHCFG_fields_::SOURCE;
  using A_ON = CHCFG_fields_::A_ON;
  using TRIG = CHCFG_fields_::TRIG;
  using ENBL = CHCFG_fields_::ENBL;
};

}  // namespace regs::dmamux0