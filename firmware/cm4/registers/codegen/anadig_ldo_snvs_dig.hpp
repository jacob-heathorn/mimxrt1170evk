#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigLdoSnvsDig {
  // PMU_LDO_SNVS_DIG_REGISTER
  struct PmuLdoSnvsDigFields {
    // REG_LP_EN
    using REG_LP_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // test_override
    using TEST_OVERRIDE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // REG_EN
    using REG_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PmuLdoSnvsDigFields

  struct PMU_LDO_SNVS_DIG : ftl::mmio::Register<
      0x40C84540u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PmuLdoSnvsDigFields::REG_LP_EN,
      PmuLdoSnvsDigFields::TEST_OVERRIDE,
      PmuLdoSnvsDigFields::REG_EN,
      ftl::mmio::Reserved<29, 3>> {
    using REG_LP_EN = PmuLdoSnvsDigFields::REG_LP_EN;
    using TEST_OVERRIDE = PmuLdoSnvsDigFields::TEST_OVERRIDE;
    using REG_EN = PmuLdoSnvsDigFields::REG_EN;
  };

};

}  // namespace regs