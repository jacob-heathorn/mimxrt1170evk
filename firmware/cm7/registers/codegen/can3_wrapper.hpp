#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// FlexCAN wrapper
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Can3Wrapper {
  // Glitch Filter Width Register
  struct GFWR_fields_ {
    // Glitch Filter Width
    using GFWR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GFWR_fields_

  struct GFWR : ftl::mmio::Register<
      0x40C3C9E0u,
      std::uint32_t,
      0x0000007Fu,
      ftl::mmio::RW,
      GFWR_fields_::GFWR,
      ftl::mmio::Reserved<24, 8>> {
    using VALUE = GFWR_fields_::GFWR;
  };

};

}  // namespace regs