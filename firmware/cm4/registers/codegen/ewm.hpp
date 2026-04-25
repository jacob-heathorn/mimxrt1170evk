#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// EWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::ewm {


// Control Register
struct CTRL_fields_ {

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
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0x4002C000u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CTRL_fields_::EWMEN,
    CTRL_fields_::ASSIN,
    CTRL_fields_::INEN,
    CTRL_fields_::INTEN,
    ftl::mmio::Reserved<4, 4>> {
  using eEWMEN = CTRL_fields_::eEWMEN;
  using eASSIN = CTRL_fields_::eASSIN;
  using eINEN = CTRL_fields_::eINEN;
  using eINTEN = CTRL_fields_::eINTEN;
  using EWMEN = CTRL_fields_::EWMEN;
  using ASSIN = CTRL_fields_::ASSIN;
  using INEN = CTRL_fields_::INEN;
  using INTEN = CTRL_fields_::INTEN;
};


// Service Register
struct SERV_fields_ {
  // SERVICE
  using SERVICE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SERV_fields_

struct SERV : ftl::mmio::Register<
    0x4002C001u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    SERV_fields_::SERVICE> {
  using SERVICE = SERV_fields_::SERVICE;
};


// Compare Low Register
struct CMPL_fields_ {
  // COMPAREL
  using COMPAREL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CMPL_fields_

struct CMPL : ftl::mmio::Register<
    0x4002C002u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CMPL_fields_::COMPAREL> {
  using COMPAREL = CMPL_fields_::COMPAREL;
};


// Compare High Register
struct CMPH_fields_ {
  // COMPAREH
  using COMPAREH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CMPH_fields_

struct CMPH : ftl::mmio::Register<
    0x4002C003u,
    std::uint8_t,
    0xFFu,
    ftl::mmio::RW,
    CMPH_fields_::COMPAREH> {
  using COMPAREH = CMPH_fields_::COMPAREH;
};


// Clock Control Register
struct CLKCTRL_fields_ {
  // CLKSEL
  using CLKSEL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CLKCTRL_fields_

struct CLKCTRL : ftl::mmio::Register<
    0x4002C004u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CLKCTRL_fields_::CLKSEL,
    ftl::mmio::Reserved<6, 2>> {
  using CLKSEL = CLKCTRL_fields_::CLKSEL;
};


// Clock Prescaler Register
struct CLKPRESCALER_fields_ {
  // CLK_DIV
  using CLK_DIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CLKPRESCALER_fields_

struct CLKPRESCALER : ftl::mmio::Register<
    0x4002C005u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    CLKPRESCALER_fields_::CLK_DIV> {
  using CLK_DIV = CLKPRESCALER_fields_::CLK_DIV;
};

}  // namespace regs::ewm