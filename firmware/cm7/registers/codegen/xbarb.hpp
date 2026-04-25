#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Xbarb {
  static_assert( Instance == 2u || Instance == 3u,
      "Xbarb: Instance must be one of 2, 3");

  static constexpr std::uintptr_t kBase =
      Instance == 2u ? 0x40040000u :
      Instance == 3u ? 0x40044000u :
      0u;

  
// Crossbar B Select Register 0
struct XBARB2_SEL0_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT0 (refer to Functional Description section for input/output assignment)
  using SEL0 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT1 (refer to Functional Description section for input/output assignment)
  using SEL1 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL0_fields_

struct XBARB2_SEL0 : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL0_fields_::SEL0,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL0_fields_::SEL1,
    ftl::mmio::Reserved<1, 15>> {
  using SEL0 = typename XBARB2_SEL0_fields_::SEL0;
  using SEL1 = typename XBARB2_SEL0_fields_::SEL1;
};

  
// Crossbar B Select Register 1
struct XBARB2_SEL1_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT2 (refer to Functional Description section for input/output assignment)
  using SEL2 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT3 (refer to Functional Description section for input/output assignment)
  using SEL3 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL1_fields_

struct XBARB2_SEL1 : ftl::mmio::Register<
    kBase + 0x2u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL1_fields_::SEL2,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL1_fields_::SEL3,
    ftl::mmio::Reserved<1, 15>> {
  using SEL2 = typename XBARB2_SEL1_fields_::SEL2;
  using SEL3 = typename XBARB2_SEL1_fields_::SEL3;
};

  
// Crossbar B Select Register 2
struct XBARB2_SEL2_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT4 (refer to Functional Description section for input/output assignment)
  using SEL4 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT5 (refer to Functional Description section for input/output assignment)
  using SEL5 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL2_fields_

struct XBARB2_SEL2 : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL2_fields_::SEL4,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL2_fields_::SEL5,
    ftl::mmio::Reserved<1, 15>> {
  using SEL4 = typename XBARB2_SEL2_fields_::SEL4;
  using SEL5 = typename XBARB2_SEL2_fields_::SEL5;
};

  
// Crossbar B Select Register 3
struct XBARB2_SEL3_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT6 (refer to Functional Description section for input/output assignment)
  using SEL6 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT7 (refer to Functional Description section for input/output assignment)
  using SEL7 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL3_fields_

struct XBARB2_SEL3 : ftl::mmio::Register<
    kBase + 0x6u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL3_fields_::SEL6,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL3_fields_::SEL7,
    ftl::mmio::Reserved<1, 15>> {
  using SEL6 = typename XBARB2_SEL3_fields_::SEL6;
  using SEL7 = typename XBARB2_SEL3_fields_::SEL7;
};

  
// Crossbar B Select Register 4
struct XBARB2_SEL4_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT8 (refer to Functional Description section for input/output assignment)
  using SEL8 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT9 (refer to Functional Description section for input/output assignment)
  using SEL9 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL4_fields_

struct XBARB2_SEL4 : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL4_fields_::SEL8,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL4_fields_::SEL9,
    ftl::mmio::Reserved<1, 15>> {
  using SEL8 = typename XBARB2_SEL4_fields_::SEL8;
  using SEL9 = typename XBARB2_SEL4_fields_::SEL9;
};

  
// Crossbar B Select Register 5
struct XBARB2_SEL5_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT10 (refer to Functional Description section for input/output assignment)
  using SEL10 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT11 (refer to Functional Description section for input/output assignment)
  using SEL11 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL5_fields_

struct XBARB2_SEL5 : ftl::mmio::Register<
    kBase + 0xAu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL5_fields_::SEL10,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL5_fields_::SEL11,
    ftl::mmio::Reserved<1, 15>> {
  using SEL10 = typename XBARB2_SEL5_fields_::SEL10;
  using SEL11 = typename XBARB2_SEL5_fields_::SEL11;
};

  
// Crossbar B Select Register 6
struct XBARB2_SEL6_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT12 (refer to Functional Description section for input/output assignment)
  using SEL12 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT13 (refer to Functional Description section for input/output assignment)
  using SEL13 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL6_fields_

struct XBARB2_SEL6 : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL6_fields_::SEL12,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL6_fields_::SEL13,
    ftl::mmio::Reserved<1, 15>> {
  using SEL12 = typename XBARB2_SEL6_fields_::SEL12;
  using SEL13 = typename XBARB2_SEL6_fields_::SEL13;
};

  
// Crossbar B Select Register 7
struct XBARB2_SEL7_fields_ {
  // Input (XBARB_INn) to be muxed to XBARB_OUT14 (refer to Functional Description section for input/output assignment)
  using SEL14 = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARB_INn) to be muxed to XBARB_OUT15 (refer to Functional Description section for input/output assignment)
  using SEL15 = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARB2_SEL7_fields_

struct XBARB2_SEL7 : ftl::mmio::Register<
    kBase + 0xEu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename XBARB2_SEL7_fields_::SEL14,
    ftl::mmio::Reserved<1, 7>,
    typename XBARB2_SEL7_fields_::SEL15,
    ftl::mmio::Reserved<1, 15>> {
  using SEL14 = typename XBARB2_SEL7_fields_::SEL14;
  using SEL15 = typename XBARB2_SEL7_fields_::SEL15;
};
};

}  // namespace regs