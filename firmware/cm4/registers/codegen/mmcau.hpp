#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CAU
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Mmcau {
  // Status Register
  struct CasrFields {
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
  };  // struct CasrFields

  struct CASR : ftl::mmio::Register<
      0xE0081000u,
      std::uint32_t,
      0x20000000u,
      ftl::mmio::RW,
      CasrFields::IC,
      CasrFields::DPE,
      ftl::mmio::Reserved<26, 2>,
      CasrFields::VER> {
    using eIC = CasrFields::eIC;
    using eDPE = CasrFields::eDPE;
    using eVER = CasrFields::eVER;
    using IC = CasrFields::IC;
    using DPE = CasrFields::DPE;
    using VER = CasrFields::VER;
  };

  // Accumulator
  struct CaaFields {
    // Accumulator
    using ACC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CaaFields

  struct CAA : ftl::mmio::Register<
      0xE0081004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CaaFields::ACC> {
    using ACC = CaaFields::ACC;
  };

  // General Purpose Register
  struct CaFields {
    // General Purpose Registers
    using CAn = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CaFields

  template<std::uint32_t Index>
  struct CA : ftl::mmio::Register<
      0xE0081008u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CaFields::CAn> {
    static_assert(Index < 9u, "CA: Index out of range");
    using CAn = CaFields::CAn;
  };

};

}  // namespace regs