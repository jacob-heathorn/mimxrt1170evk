#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// EWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Ewm {
  // Control Register
  struct CtrlFields {
    enum class eEWMEN : std::uint32_t {
      // EWM module is disabled.
      eDISABLE = 0,
      // EWM module is enabled.
      eENABLE = 1,
    };

    enum class eASSIN : std::uint32_t {
      // Default assert state of the EWM_in signal.
      eDISABLE = 0,
      // Inverts the assert state of EWM_in signal.
      eENABLE = 1,
    };

    enum class eINEN : std::uint32_t {
      // EWM_in port is disabled.
      eDISABLE = 0,
      // EWM_in port is enabled.
      eENABLE = 1,
    };

    enum class eINTEN : std::uint32_t {
      // Deasserts the interrupt request.
      eZERO = 0,
      // Generates an interrupt request, when EWM_OUT_b is asserted.
      eINT_REQ = 1,
    };

    // EWM enable.
    using EWMEN = ftl::mmio::Field<1, 0, eEWMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // EWM_in's Assertion State Select.
    using ASSIN = ftl::mmio::Field<1, 1, eASSIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Enable.
    using INEN = ftl::mmio::Field<1, 2, eINEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt Enable.
    using INTEN = ftl::mmio::Field<1, 3, eINTEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x4002C000u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CtrlFields::EWMEN,
      CtrlFields::ASSIN,
      CtrlFields::INEN,
      CtrlFields::INTEN,
      ftl::mmio::Reserved<4, 4>> {
    using eEWMEN = CtrlFields::eEWMEN;
    using eASSIN = CtrlFields::eASSIN;
    using eINEN = CtrlFields::eINEN;
    using eINTEN = CtrlFields::eINTEN;
    using EWMEN = CtrlFields::EWMEN;
    using ASSIN = CtrlFields::ASSIN;
    using INEN = CtrlFields::INEN;
    using INTEN = CtrlFields::INTEN;
  };

  // Service Register
  struct ServFields {
    // SERVICE
    using SERVICE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ServFields

  struct SERV : ftl::mmio::Register<
      0x4002C001u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ServFields::SERVICE> {
    using SERVICE = ServFields::SERVICE;
  };

  // Compare Low Register
  struct CmplFields {
    // COMPAREL
    using COMPAREL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmplFields

  struct CMPL : ftl::mmio::Register<
      0x4002C002u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      CmplFields::COMPAREL> {
    using COMPAREL = CmplFields::COMPAREL;
  };

  // Compare High Register
  struct CmphFields {
    // COMPAREH
    using COMPAREH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmphFields

  struct CMPH : ftl::mmio::Register<
      0x4002C003u,
      std::uint8_t,
      0xFFu,
      ftl::mmio::RW,
      CmphFields::COMPAREH> {
    using COMPAREH = CmphFields::COMPAREH;
  };

  // Clock Control Register
  struct ClkctrlFields {
    // CLKSEL
    using CLKSEL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ClkctrlFields

  struct CLKCTRL : ftl::mmio::Register<
      0x4002C004u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ClkctrlFields::CLKSEL,
      ftl::mmio::Reserved<6, 2>> {
    using CLKSEL = ClkctrlFields::CLKSEL;
  };

  // Clock Prescaler Register
  struct ClkprescalerFields {
    // CLK_DIV
    using CLK_DIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ClkprescalerFields

  struct CLKPRESCALER : ftl::mmio::Register<
      0x4002C005u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ClkprescalerFields::CLK_DIV> {
    using CLK_DIV = ClkprescalerFields::CLK_DIV;
  };

};

}  // namespace regs