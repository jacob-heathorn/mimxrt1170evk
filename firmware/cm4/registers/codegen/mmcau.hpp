#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CAU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Mmcau {
  // Status Register
  struct CASR_fields_ {
    enum class eIC : std::uint32_t {
      // No illegal commands issued.
      eIC_0 = 0,
      // Illegal command issued.
      eIC_1 = 1,
    };

    enum class eDPE : std::uint32_t {
      // No error detected.
      eDPE_0 = 0,
      // DES key parity error detected.
      eDPE_1 = 1,
    };

    enum class eVER : std::uint32_t {
      // Initial CAU version.
      eVER_1 = 1,
      // Second version, added support for SHA-256 algorithm (This is the value on this device).
      eVER_2 = 2,
    };

    // Illegal Command
    using IC = ftl::mmio::Field<1, 0, eIC, ftl::mmio::RW, ftl::mmio::Normal>;
    // DES Parity Error
    using DPE = ftl::mmio::Field<1, 1, eDPE, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAU Version
    using VER = ftl::mmio::Field<4, 28, eVER, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CASR_fields_

  struct CASR : ftl::mmio::Register<
      0xE0081000u,
      std::uint32_t,
      0x20000000u,
      ftl::mmio::RW,
      CASR_fields_::IC,
      CASR_fields_::DPE,
      ftl::mmio::Reserved<26, 2>,
      CASR_fields_::VER> {
    using eIC = CASR_fields_::eIC;
    using eDPE = CASR_fields_::eDPE;
    using eVER = CASR_fields_::eVER;
    using IC = CASR_fields_::IC;
    using DPE = CASR_fields_::DPE;
    using VER = CASR_fields_::VER;
  };

  // Accumulator
  struct CAA_fields_ {
    // Accumulator
    using ACC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAA_fields_

  struct CAA : ftl::mmio::Register<
      0xE0081004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CAA_fields_::ACC> {
    using ACC = CAA_fields_::ACC;
  };

  // General Purpose Register
  struct CA_fields_ {
    // General Purpose Registers
    using CAn = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CA_fields_

  template<std::uint32_t Index>
  struct CA : ftl::mmio::Register<
      0xE0081008u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CA_fields_::CAn> {
    static_assert(Index < 9u, "CA: Index out of range");
    using CAn = CA_fields_::CAn;
  };

};

}  // namespace regs