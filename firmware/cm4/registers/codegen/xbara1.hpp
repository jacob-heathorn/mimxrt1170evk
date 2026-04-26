#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::xbara1 {

// Crossbar A Select Register 0
struct XBARA1_SEL0_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT0 (refer to Functional Description section for input/output assignment)
  using SEL0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT1 (refer to Functional Description section for input/output assignment)
  using SEL1 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL0_fields_

struct XBARA1_SEL0 : ftl::mmio::Register<
    0x4003C000u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL0_fields_::SEL0,
    XBARA1_SEL0_fields_::SEL1> {
  using SEL0 = XBARA1_SEL0_fields_::SEL0;
  using SEL1 = XBARA1_SEL0_fields_::SEL1;
};

// Crossbar A Select Register 1
struct XBARA1_SEL1_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT2 (refer to Functional Description section for input/output assignment)
  using SEL2 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT3 (refer to Functional Description section for input/output assignment)
  using SEL3 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL1_fields_

struct XBARA1_SEL1 : ftl::mmio::Register<
    0x4003C002u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL1_fields_::SEL2,
    XBARA1_SEL1_fields_::SEL3> {
  using SEL2 = XBARA1_SEL1_fields_::SEL2;
  using SEL3 = XBARA1_SEL1_fields_::SEL3;
};

// Crossbar A Select Register 2
struct XBARA1_SEL2_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT4 (refer to Functional Description section for input/output assignment)
  using SEL4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT5 (refer to Functional Description section for input/output assignment)
  using SEL5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL2_fields_

struct XBARA1_SEL2 : ftl::mmio::Register<
    0x4003C004u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL2_fields_::SEL4,
    XBARA1_SEL2_fields_::SEL5> {
  using SEL4 = XBARA1_SEL2_fields_::SEL4;
  using SEL5 = XBARA1_SEL2_fields_::SEL5;
};

// Crossbar A Select Register 3
struct XBARA1_SEL3_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT6 (refer to Functional Description section for input/output assignment)
  using SEL6 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT7 (refer to Functional Description section for input/output assignment)
  using SEL7 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL3_fields_

struct XBARA1_SEL3 : ftl::mmio::Register<
    0x4003C006u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL3_fields_::SEL6,
    XBARA1_SEL3_fields_::SEL7> {
  using SEL6 = XBARA1_SEL3_fields_::SEL6;
  using SEL7 = XBARA1_SEL3_fields_::SEL7;
};

// Crossbar A Select Register 4
struct XBARA1_SEL4_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT8 (refer to Functional Description section for input/output assignment)
  using SEL8 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT9 (refer to Functional Description section for input/output assignment)
  using SEL9 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL4_fields_

struct XBARA1_SEL4 : ftl::mmio::Register<
    0x4003C008u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL4_fields_::SEL8,
    XBARA1_SEL4_fields_::SEL9> {
  using SEL8 = XBARA1_SEL4_fields_::SEL8;
  using SEL9 = XBARA1_SEL4_fields_::SEL9;
};

// Crossbar A Select Register 5
struct XBARA1_SEL5_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT10 (refer to Functional Description section for input/output assignment)
  using SEL10 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT11 (refer to Functional Description section for input/output assignment)
  using SEL11 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL5_fields_

struct XBARA1_SEL5 : ftl::mmio::Register<
    0x4003C00Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL5_fields_::SEL10,
    XBARA1_SEL5_fields_::SEL11> {
  using SEL10 = XBARA1_SEL5_fields_::SEL10;
  using SEL11 = XBARA1_SEL5_fields_::SEL11;
};

// Crossbar A Select Register 6
struct XBARA1_SEL6_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT12 (refer to Functional Description section for input/output assignment)
  using SEL12 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT13 (refer to Functional Description section for input/output assignment)
  using SEL13 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL6_fields_

struct XBARA1_SEL6 : ftl::mmio::Register<
    0x4003C00Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL6_fields_::SEL12,
    XBARA1_SEL6_fields_::SEL13> {
  using SEL12 = XBARA1_SEL6_fields_::SEL12;
  using SEL13 = XBARA1_SEL6_fields_::SEL13;
};

// Crossbar A Select Register 7
struct XBARA1_SEL7_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT14 (refer to Functional Description section for input/output assignment)
  using SEL14 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT15 (refer to Functional Description section for input/output assignment)
  using SEL15 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL7_fields_

struct XBARA1_SEL7 : ftl::mmio::Register<
    0x4003C00Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL7_fields_::SEL14,
    XBARA1_SEL7_fields_::SEL15> {
  using SEL14 = XBARA1_SEL7_fields_::SEL14;
  using SEL15 = XBARA1_SEL7_fields_::SEL15;
};

// Crossbar A Select Register 8
struct XBARA1_SEL8_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT16 (refer to Functional Description section for input/output assignment)
  using SEL16 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT17 (refer to Functional Description section for input/output assignment)
  using SEL17 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL8_fields_

struct XBARA1_SEL8 : ftl::mmio::Register<
    0x4003C010u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL8_fields_::SEL16,
    XBARA1_SEL8_fields_::SEL17> {
  using SEL16 = XBARA1_SEL8_fields_::SEL16;
  using SEL17 = XBARA1_SEL8_fields_::SEL17;
};

// Crossbar A Select Register 9
struct XBARA1_SEL9_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT18 (refer to Functional Description section for input/output assignment)
  using SEL18 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT19 (refer to Functional Description section for input/output assignment)
  using SEL19 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL9_fields_

struct XBARA1_SEL9 : ftl::mmio::Register<
    0x4003C012u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL9_fields_::SEL18,
    XBARA1_SEL9_fields_::SEL19> {
  using SEL18 = XBARA1_SEL9_fields_::SEL18;
  using SEL19 = XBARA1_SEL9_fields_::SEL19;
};

// Crossbar A Select Register 10
struct XBARA1_SEL10_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT20 (refer to Functional Description section for input/output assignment)
  using SEL20 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT21 (refer to Functional Description section for input/output assignment)
  using SEL21 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL10_fields_

struct XBARA1_SEL10 : ftl::mmio::Register<
    0x4003C014u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL10_fields_::SEL20,
    XBARA1_SEL10_fields_::SEL21> {
  using SEL20 = XBARA1_SEL10_fields_::SEL20;
  using SEL21 = XBARA1_SEL10_fields_::SEL21;
};

// Crossbar A Select Register 11
struct XBARA1_SEL11_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT22 (refer to Functional Description section for input/output assignment)
  using SEL22 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT23 (refer to Functional Description section for input/output assignment)
  using SEL23 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL11_fields_

struct XBARA1_SEL11 : ftl::mmio::Register<
    0x4003C016u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL11_fields_::SEL22,
    XBARA1_SEL11_fields_::SEL23> {
  using SEL22 = XBARA1_SEL11_fields_::SEL22;
  using SEL23 = XBARA1_SEL11_fields_::SEL23;
};

// Crossbar A Select Register 12
struct XBARA1_SEL12_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT24 (refer to Functional Description section for input/output assignment)
  using SEL24 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT25 (refer to Functional Description section for input/output assignment)
  using SEL25 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL12_fields_

struct XBARA1_SEL12 : ftl::mmio::Register<
    0x4003C018u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL12_fields_::SEL24,
    XBARA1_SEL12_fields_::SEL25> {
  using SEL24 = XBARA1_SEL12_fields_::SEL24;
  using SEL25 = XBARA1_SEL12_fields_::SEL25;
};

// Crossbar A Select Register 13
struct XBARA1_SEL13_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT26 (refer to Functional Description section for input/output assignment)
  using SEL26 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT27 (refer to Functional Description section for input/output assignment)
  using SEL27 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL13_fields_

struct XBARA1_SEL13 : ftl::mmio::Register<
    0x4003C01Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL13_fields_::SEL26,
    XBARA1_SEL13_fields_::SEL27> {
  using SEL26 = XBARA1_SEL13_fields_::SEL26;
  using SEL27 = XBARA1_SEL13_fields_::SEL27;
};

// Crossbar A Select Register 14
struct XBARA1_SEL14_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT28 (refer to Functional Description section for input/output assignment)
  using SEL28 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT29 (refer to Functional Description section for input/output assignment)
  using SEL29 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL14_fields_

struct XBARA1_SEL14 : ftl::mmio::Register<
    0x4003C01Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL14_fields_::SEL28,
    XBARA1_SEL14_fields_::SEL29> {
  using SEL28 = XBARA1_SEL14_fields_::SEL28;
  using SEL29 = XBARA1_SEL14_fields_::SEL29;
};

// Crossbar A Select Register 15
struct XBARA1_SEL15_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT30 (refer to Functional Description section for input/output assignment)
  using SEL30 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT31 (refer to Functional Description section for input/output assignment)
  using SEL31 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL15_fields_

struct XBARA1_SEL15 : ftl::mmio::Register<
    0x4003C01Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL15_fields_::SEL30,
    XBARA1_SEL15_fields_::SEL31> {
  using SEL30 = XBARA1_SEL15_fields_::SEL30;
  using SEL31 = XBARA1_SEL15_fields_::SEL31;
};

// Crossbar A Select Register 16
struct XBARA1_SEL16_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT32 (refer to Functional Description section for input/output assignment)
  using SEL32 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT33 (refer to Functional Description section for input/output assignment)
  using SEL33 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL16_fields_

struct XBARA1_SEL16 : ftl::mmio::Register<
    0x4003C020u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL16_fields_::SEL32,
    XBARA1_SEL16_fields_::SEL33> {
  using SEL32 = XBARA1_SEL16_fields_::SEL32;
  using SEL33 = XBARA1_SEL16_fields_::SEL33;
};

// Crossbar A Select Register 17
struct XBARA1_SEL17_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT34 (refer to Functional Description section for input/output assignment)
  using SEL34 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT35 (refer to Functional Description section for input/output assignment)
  using SEL35 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL17_fields_

struct XBARA1_SEL17 : ftl::mmio::Register<
    0x4003C022u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL17_fields_::SEL34,
    XBARA1_SEL17_fields_::SEL35> {
  using SEL34 = XBARA1_SEL17_fields_::SEL34;
  using SEL35 = XBARA1_SEL17_fields_::SEL35;
};

// Crossbar A Select Register 18
struct XBARA1_SEL18_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT36 (refer to Functional Description section for input/output assignment)
  using SEL36 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT37 (refer to Functional Description section for input/output assignment)
  using SEL37 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL18_fields_

struct XBARA1_SEL18 : ftl::mmio::Register<
    0x4003C024u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL18_fields_::SEL36,
    XBARA1_SEL18_fields_::SEL37> {
  using SEL36 = XBARA1_SEL18_fields_::SEL36;
  using SEL37 = XBARA1_SEL18_fields_::SEL37;
};

// Crossbar A Select Register 19
struct XBARA1_SEL19_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT38 (refer to Functional Description section for input/output assignment)
  using SEL38 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT39 (refer to Functional Description section for input/output assignment)
  using SEL39 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL19_fields_

struct XBARA1_SEL19 : ftl::mmio::Register<
    0x4003C026u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL19_fields_::SEL38,
    XBARA1_SEL19_fields_::SEL39> {
  using SEL38 = XBARA1_SEL19_fields_::SEL38;
  using SEL39 = XBARA1_SEL19_fields_::SEL39;
};

// Crossbar A Select Register 20
struct XBARA1_SEL20_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT40 (refer to Functional Description section for input/output assignment)
  using SEL40 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT41 (refer to Functional Description section for input/output assignment)
  using SEL41 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL20_fields_

struct XBARA1_SEL20 : ftl::mmio::Register<
    0x4003C028u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL20_fields_::SEL40,
    XBARA1_SEL20_fields_::SEL41> {
  using SEL40 = XBARA1_SEL20_fields_::SEL40;
  using SEL41 = XBARA1_SEL20_fields_::SEL41;
};

// Crossbar A Select Register 21
struct XBARA1_SEL21_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT42 (refer to Functional Description section for input/output assignment)
  using SEL42 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT43 (refer to Functional Description section for input/output assignment)
  using SEL43 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL21_fields_

struct XBARA1_SEL21 : ftl::mmio::Register<
    0x4003C02Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL21_fields_::SEL42,
    XBARA1_SEL21_fields_::SEL43> {
  using SEL42 = XBARA1_SEL21_fields_::SEL42;
  using SEL43 = XBARA1_SEL21_fields_::SEL43;
};

// Crossbar A Select Register 22
struct XBARA1_SEL22_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT44 (refer to Functional Description section for input/output assignment)
  using SEL44 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT45 (refer to Functional Description section for input/output assignment)
  using SEL45 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL22_fields_

struct XBARA1_SEL22 : ftl::mmio::Register<
    0x4003C02Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL22_fields_::SEL44,
    XBARA1_SEL22_fields_::SEL45> {
  using SEL44 = XBARA1_SEL22_fields_::SEL44;
  using SEL45 = XBARA1_SEL22_fields_::SEL45;
};

// Crossbar A Select Register 23
struct XBARA1_SEL23_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT46 (refer to Functional Description section for input/output assignment)
  using SEL46 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT47 (refer to Functional Description section for input/output assignment)
  using SEL47 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL23_fields_

struct XBARA1_SEL23 : ftl::mmio::Register<
    0x4003C02Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL23_fields_::SEL46,
    XBARA1_SEL23_fields_::SEL47> {
  using SEL46 = XBARA1_SEL23_fields_::SEL46;
  using SEL47 = XBARA1_SEL23_fields_::SEL47;
};

// Crossbar A Select Register 24
struct XBARA1_SEL24_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT48 (refer to Functional Description section for input/output assignment)
  using SEL48 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT49 (refer to Functional Description section for input/output assignment)
  using SEL49 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL24_fields_

struct XBARA1_SEL24 : ftl::mmio::Register<
    0x4003C030u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL24_fields_::SEL48,
    XBARA1_SEL24_fields_::SEL49> {
  using SEL48 = XBARA1_SEL24_fields_::SEL48;
  using SEL49 = XBARA1_SEL24_fields_::SEL49;
};

// Crossbar A Select Register 25
struct XBARA1_SEL25_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT50 (refer to Functional Description section for input/output assignment)
  using SEL50 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT51 (refer to Functional Description section for input/output assignment)
  using SEL51 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL25_fields_

struct XBARA1_SEL25 : ftl::mmio::Register<
    0x4003C032u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL25_fields_::SEL50,
    XBARA1_SEL25_fields_::SEL51> {
  using SEL50 = XBARA1_SEL25_fields_::SEL50;
  using SEL51 = XBARA1_SEL25_fields_::SEL51;
};

// Crossbar A Select Register 26
struct XBARA1_SEL26_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT52 (refer to Functional Description section for input/output assignment)
  using SEL52 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT53 (refer to Functional Description section for input/output assignment)
  using SEL53 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL26_fields_

struct XBARA1_SEL26 : ftl::mmio::Register<
    0x4003C034u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL26_fields_::SEL52,
    XBARA1_SEL26_fields_::SEL53> {
  using SEL52 = XBARA1_SEL26_fields_::SEL52;
  using SEL53 = XBARA1_SEL26_fields_::SEL53;
};

// Crossbar A Select Register 27
struct XBARA1_SEL27_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT54 (refer to Functional Description section for input/output assignment)
  using SEL54 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT55 (refer to Functional Description section for input/output assignment)
  using SEL55 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL27_fields_

struct XBARA1_SEL27 : ftl::mmio::Register<
    0x4003C036u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL27_fields_::SEL54,
    XBARA1_SEL27_fields_::SEL55> {
  using SEL54 = XBARA1_SEL27_fields_::SEL54;
  using SEL55 = XBARA1_SEL27_fields_::SEL55;
};

// Crossbar A Select Register 28
struct XBARA1_SEL28_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT56 (refer to Functional Description section for input/output assignment)
  using SEL56 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT57 (refer to Functional Description section for input/output assignment)
  using SEL57 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL28_fields_

struct XBARA1_SEL28 : ftl::mmio::Register<
    0x4003C038u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL28_fields_::SEL56,
    XBARA1_SEL28_fields_::SEL57> {
  using SEL56 = XBARA1_SEL28_fields_::SEL56;
  using SEL57 = XBARA1_SEL28_fields_::SEL57;
};

// Crossbar A Select Register 29
struct XBARA1_SEL29_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT58 (refer to Functional Description section for input/output assignment)
  using SEL58 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT59 (refer to Functional Description section for input/output assignment)
  using SEL59 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL29_fields_

struct XBARA1_SEL29 : ftl::mmio::Register<
    0x4003C03Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL29_fields_::SEL58,
    XBARA1_SEL29_fields_::SEL59> {
  using SEL58 = XBARA1_SEL29_fields_::SEL58;
  using SEL59 = XBARA1_SEL29_fields_::SEL59;
};

// Crossbar A Select Register 30
struct XBARA1_SEL30_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT60 (refer to Functional Description section for input/output assignment)
  using SEL60 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT61 (refer to Functional Description section for input/output assignment)
  using SEL61 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL30_fields_

struct XBARA1_SEL30 : ftl::mmio::Register<
    0x4003C03Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL30_fields_::SEL60,
    XBARA1_SEL30_fields_::SEL61> {
  using SEL60 = XBARA1_SEL30_fields_::SEL60;
  using SEL61 = XBARA1_SEL30_fields_::SEL61;
};

// Crossbar A Select Register 31
struct XBARA1_SEL31_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT62 (refer to Functional Description section for input/output assignment)
  using SEL62 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT63 (refer to Functional Description section for input/output assignment)
  using SEL63 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL31_fields_

struct XBARA1_SEL31 : ftl::mmio::Register<
    0x4003C03Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL31_fields_::SEL62,
    XBARA1_SEL31_fields_::SEL63> {
  using SEL62 = XBARA1_SEL31_fields_::SEL62;
  using SEL63 = XBARA1_SEL31_fields_::SEL63;
};

// Crossbar A Select Register 32
struct XBARA1_SEL32_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT64 (refer to Functional Description section for input/output assignment)
  using SEL64 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT65 (refer to Functional Description section for input/output assignment)
  using SEL65 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL32_fields_

struct XBARA1_SEL32 : ftl::mmio::Register<
    0x4003C040u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL32_fields_::SEL64,
    XBARA1_SEL32_fields_::SEL65> {
  using SEL64 = XBARA1_SEL32_fields_::SEL64;
  using SEL65 = XBARA1_SEL32_fields_::SEL65;
};

// Crossbar A Select Register 33
struct XBARA1_SEL33_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT66 (refer to Functional Description section for input/output assignment)
  using SEL66 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT67 (refer to Functional Description section for input/output assignment)
  using SEL67 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL33_fields_

struct XBARA1_SEL33 : ftl::mmio::Register<
    0x4003C042u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL33_fields_::SEL66,
    XBARA1_SEL33_fields_::SEL67> {
  using SEL66 = XBARA1_SEL33_fields_::SEL66;
  using SEL67 = XBARA1_SEL33_fields_::SEL67;
};

// Crossbar A Select Register 34
struct XBARA1_SEL34_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT68 (refer to Functional Description section for input/output assignment)
  using SEL68 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT69 (refer to Functional Description section for input/output assignment)
  using SEL69 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL34_fields_

struct XBARA1_SEL34 : ftl::mmio::Register<
    0x4003C044u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL34_fields_::SEL68,
    XBARA1_SEL34_fields_::SEL69> {
  using SEL68 = XBARA1_SEL34_fields_::SEL68;
  using SEL69 = XBARA1_SEL34_fields_::SEL69;
};

// Crossbar A Select Register 35
struct XBARA1_SEL35_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT70 (refer to Functional Description section for input/output assignment)
  using SEL70 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT71 (refer to Functional Description section for input/output assignment)
  using SEL71 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL35_fields_

struct XBARA1_SEL35 : ftl::mmio::Register<
    0x4003C046u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL35_fields_::SEL70,
    XBARA1_SEL35_fields_::SEL71> {
  using SEL70 = XBARA1_SEL35_fields_::SEL70;
  using SEL71 = XBARA1_SEL35_fields_::SEL71;
};

// Crossbar A Select Register 36
struct XBARA1_SEL36_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT72 (refer to Functional Description section for input/output assignment)
  using SEL72 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT73 (refer to Functional Description section for input/output assignment)
  using SEL73 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL36_fields_

struct XBARA1_SEL36 : ftl::mmio::Register<
    0x4003C048u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL36_fields_::SEL72,
    XBARA1_SEL36_fields_::SEL73> {
  using SEL72 = XBARA1_SEL36_fields_::SEL72;
  using SEL73 = XBARA1_SEL36_fields_::SEL73;
};

// Crossbar A Select Register 37
struct XBARA1_SEL37_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT74 (refer to Functional Description section for input/output assignment)
  using SEL74 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT75 (refer to Functional Description section for input/output assignment)
  using SEL75 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL37_fields_

struct XBARA1_SEL37 : ftl::mmio::Register<
    0x4003C04Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL37_fields_::SEL74,
    XBARA1_SEL37_fields_::SEL75> {
  using SEL74 = XBARA1_SEL37_fields_::SEL74;
  using SEL75 = XBARA1_SEL37_fields_::SEL75;
};

// Crossbar A Select Register 38
struct XBARA1_SEL38_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT76 (refer to Functional Description section for input/output assignment)
  using SEL76 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT77 (refer to Functional Description section for input/output assignment)
  using SEL77 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL38_fields_

struct XBARA1_SEL38 : ftl::mmio::Register<
    0x4003C04Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL38_fields_::SEL76,
    XBARA1_SEL38_fields_::SEL77> {
  using SEL76 = XBARA1_SEL38_fields_::SEL76;
  using SEL77 = XBARA1_SEL38_fields_::SEL77;
};

// Crossbar A Select Register 39
struct XBARA1_SEL39_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT78 (refer to Functional Description section for input/output assignment)
  using SEL78 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT79 (refer to Functional Description section for input/output assignment)
  using SEL79 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL39_fields_

struct XBARA1_SEL39 : ftl::mmio::Register<
    0x4003C04Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL39_fields_::SEL78,
    XBARA1_SEL39_fields_::SEL79> {
  using SEL78 = XBARA1_SEL39_fields_::SEL78;
  using SEL79 = XBARA1_SEL39_fields_::SEL79;
};

// Crossbar A Select Register 40
struct XBARA1_SEL40_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT80 (refer to Functional Description section for input/output assignment)
  using SEL80 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT81 (refer to Functional Description section for input/output assignment)
  using SEL81 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL40_fields_

struct XBARA1_SEL40 : ftl::mmio::Register<
    0x4003C050u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL40_fields_::SEL80,
    XBARA1_SEL40_fields_::SEL81> {
  using SEL80 = XBARA1_SEL40_fields_::SEL80;
  using SEL81 = XBARA1_SEL40_fields_::SEL81;
};

// Crossbar A Select Register 41
struct XBARA1_SEL41_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT82 (refer to Functional Description section for input/output assignment)
  using SEL82 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT83 (refer to Functional Description section for input/output assignment)
  using SEL83 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL41_fields_

struct XBARA1_SEL41 : ftl::mmio::Register<
    0x4003C052u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL41_fields_::SEL82,
    XBARA1_SEL41_fields_::SEL83> {
  using SEL82 = XBARA1_SEL41_fields_::SEL82;
  using SEL83 = XBARA1_SEL41_fields_::SEL83;
};

// Crossbar A Select Register 42
struct XBARA1_SEL42_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT84 (refer to Functional Description section for input/output assignment)
  using SEL84 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT85 (refer to Functional Description section for input/output assignment)
  using SEL85 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL42_fields_

struct XBARA1_SEL42 : ftl::mmio::Register<
    0x4003C054u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL42_fields_::SEL84,
    XBARA1_SEL42_fields_::SEL85> {
  using SEL84 = XBARA1_SEL42_fields_::SEL84;
  using SEL85 = XBARA1_SEL42_fields_::SEL85;
};

// Crossbar A Select Register 43
struct XBARA1_SEL43_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT86 (refer to Functional Description section for input/output assignment)
  using SEL86 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT87 (refer to Functional Description section for input/output assignment)
  using SEL87 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL43_fields_

struct XBARA1_SEL43 : ftl::mmio::Register<
    0x4003C056u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL43_fields_::SEL86,
    XBARA1_SEL43_fields_::SEL87> {
  using SEL86 = XBARA1_SEL43_fields_::SEL86;
  using SEL87 = XBARA1_SEL43_fields_::SEL87;
};

// Crossbar A Select Register 44
struct XBARA1_SEL44_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT88 (refer to Functional Description section for input/output assignment)
  using SEL88 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT89 (refer to Functional Description section for input/output assignment)
  using SEL89 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL44_fields_

struct XBARA1_SEL44 : ftl::mmio::Register<
    0x4003C058u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL44_fields_::SEL88,
    XBARA1_SEL44_fields_::SEL89> {
  using SEL88 = XBARA1_SEL44_fields_::SEL88;
  using SEL89 = XBARA1_SEL44_fields_::SEL89;
};

// Crossbar A Select Register 45
struct XBARA1_SEL45_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT90 (refer to Functional Description section for input/output assignment)
  using SEL90 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT91 (refer to Functional Description section for input/output assignment)
  using SEL91 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL45_fields_

struct XBARA1_SEL45 : ftl::mmio::Register<
    0x4003C05Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL45_fields_::SEL90,
    XBARA1_SEL45_fields_::SEL91> {
  using SEL90 = XBARA1_SEL45_fields_::SEL90;
  using SEL91 = XBARA1_SEL45_fields_::SEL91;
};

// Crossbar A Select Register 46
struct XBARA1_SEL46_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT92 (refer to Functional Description section for input/output assignment)
  using SEL92 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT93 (refer to Functional Description section for input/output assignment)
  using SEL93 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL46_fields_

struct XBARA1_SEL46 : ftl::mmio::Register<
    0x4003C05Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL46_fields_::SEL92,
    XBARA1_SEL46_fields_::SEL93> {
  using SEL92 = XBARA1_SEL46_fields_::SEL92;
  using SEL93 = XBARA1_SEL46_fields_::SEL93;
};

// Crossbar A Select Register 47
struct XBARA1_SEL47_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT94 (refer to Functional Description section for input/output assignment)
  using SEL94 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT95 (refer to Functional Description section for input/output assignment)
  using SEL95 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL47_fields_

struct XBARA1_SEL47 : ftl::mmio::Register<
    0x4003C05Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL47_fields_::SEL94,
    XBARA1_SEL47_fields_::SEL95> {
  using SEL94 = XBARA1_SEL47_fields_::SEL94;
  using SEL95 = XBARA1_SEL47_fields_::SEL95;
};

// Crossbar A Select Register 48
struct XBARA1_SEL48_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT96 (refer to Functional Description section for input/output assignment)
  using SEL96 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT97 (refer to Functional Description section for input/output assignment)
  using SEL97 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL48_fields_

struct XBARA1_SEL48 : ftl::mmio::Register<
    0x4003C060u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL48_fields_::SEL96,
    XBARA1_SEL48_fields_::SEL97> {
  using SEL96 = XBARA1_SEL48_fields_::SEL96;
  using SEL97 = XBARA1_SEL48_fields_::SEL97;
};

// Crossbar A Select Register 49
struct XBARA1_SEL49_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT98 (refer to Functional Description section for input/output assignment)
  using SEL98 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT99 (refer to Functional Description section for input/output assignment)
  using SEL99 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL49_fields_

struct XBARA1_SEL49 : ftl::mmio::Register<
    0x4003C062u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL49_fields_::SEL98,
    XBARA1_SEL49_fields_::SEL99> {
  using SEL98 = XBARA1_SEL49_fields_::SEL98;
  using SEL99 = XBARA1_SEL49_fields_::SEL99;
};

// Crossbar A Select Register 50
struct XBARA1_SEL50_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT100 (refer to Functional Description section for input/output assignment)
  using SEL100 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT101 (refer to Functional Description section for input/output assignment)
  using SEL101 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL50_fields_

struct XBARA1_SEL50 : ftl::mmio::Register<
    0x4003C064u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL50_fields_::SEL100,
    XBARA1_SEL50_fields_::SEL101> {
  using SEL100 = XBARA1_SEL50_fields_::SEL100;
  using SEL101 = XBARA1_SEL50_fields_::SEL101;
};

// Crossbar A Select Register 51
struct XBARA1_SEL51_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT102 (refer to Functional Description section for input/output assignment)
  using SEL102 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT103 (refer to Functional Description section for input/output assignment)
  using SEL103 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL51_fields_

struct XBARA1_SEL51 : ftl::mmio::Register<
    0x4003C066u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL51_fields_::SEL102,
    XBARA1_SEL51_fields_::SEL103> {
  using SEL102 = XBARA1_SEL51_fields_::SEL102;
  using SEL103 = XBARA1_SEL51_fields_::SEL103;
};

// Crossbar A Select Register 52
struct XBARA1_SEL52_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT104 (refer to Functional Description section for input/output assignment)
  using SEL104 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT105 (refer to Functional Description section for input/output assignment)
  using SEL105 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL52_fields_

struct XBARA1_SEL52 : ftl::mmio::Register<
    0x4003C068u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL52_fields_::SEL104,
    XBARA1_SEL52_fields_::SEL105> {
  using SEL104 = XBARA1_SEL52_fields_::SEL104;
  using SEL105 = XBARA1_SEL52_fields_::SEL105;
};

// Crossbar A Select Register 53
struct XBARA1_SEL53_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT106 (refer to Functional Description section for input/output assignment)
  using SEL106 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT107 (refer to Functional Description section for input/output assignment)
  using SEL107 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL53_fields_

struct XBARA1_SEL53 : ftl::mmio::Register<
    0x4003C06Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL53_fields_::SEL106,
    XBARA1_SEL53_fields_::SEL107> {
  using SEL106 = XBARA1_SEL53_fields_::SEL106;
  using SEL107 = XBARA1_SEL53_fields_::SEL107;
};

// Crossbar A Select Register 54
struct XBARA1_SEL54_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT108 (refer to Functional Description section for input/output assignment)
  using SEL108 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT109 (refer to Functional Description section for input/output assignment)
  using SEL109 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL54_fields_

struct XBARA1_SEL54 : ftl::mmio::Register<
    0x4003C06Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL54_fields_::SEL108,
    XBARA1_SEL54_fields_::SEL109> {
  using SEL108 = XBARA1_SEL54_fields_::SEL108;
  using SEL109 = XBARA1_SEL54_fields_::SEL109;
};

// Crossbar A Select Register 55
struct XBARA1_SEL55_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT110 (refer to Functional Description section for input/output assignment)
  using SEL110 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT111 (refer to Functional Description section for input/output assignment)
  using SEL111 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL55_fields_

struct XBARA1_SEL55 : ftl::mmio::Register<
    0x4003C06Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL55_fields_::SEL110,
    XBARA1_SEL55_fields_::SEL111> {
  using SEL110 = XBARA1_SEL55_fields_::SEL110;
  using SEL111 = XBARA1_SEL55_fields_::SEL111;
};

// Crossbar A Select Register 56
struct XBARA1_SEL56_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT112 (refer to Functional Description section for input/output assignment)
  using SEL112 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT113 (refer to Functional Description section for input/output assignment)
  using SEL113 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL56_fields_

struct XBARA1_SEL56 : ftl::mmio::Register<
    0x4003C070u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL56_fields_::SEL112,
    XBARA1_SEL56_fields_::SEL113> {
  using SEL112 = XBARA1_SEL56_fields_::SEL112;
  using SEL113 = XBARA1_SEL56_fields_::SEL113;
};

// Crossbar A Select Register 57
struct XBARA1_SEL57_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT114 (refer to Functional Description section for input/output assignment)
  using SEL114 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT115 (refer to Functional Description section for input/output assignment)
  using SEL115 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL57_fields_

struct XBARA1_SEL57 : ftl::mmio::Register<
    0x4003C072u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL57_fields_::SEL114,
    XBARA1_SEL57_fields_::SEL115> {
  using SEL114 = XBARA1_SEL57_fields_::SEL114;
  using SEL115 = XBARA1_SEL57_fields_::SEL115;
};

// Crossbar A Select Register 58
struct XBARA1_SEL58_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT116 (refer to Functional Description section for input/output assignment)
  using SEL116 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT117 (refer to Functional Description section for input/output assignment)
  using SEL117 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL58_fields_

struct XBARA1_SEL58 : ftl::mmio::Register<
    0x4003C074u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL58_fields_::SEL116,
    XBARA1_SEL58_fields_::SEL117> {
  using SEL116 = XBARA1_SEL58_fields_::SEL116;
  using SEL117 = XBARA1_SEL58_fields_::SEL117;
};

// Crossbar A Select Register 59
struct XBARA1_SEL59_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT118 (refer to Functional Description section for input/output assignment)
  using SEL118 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT119 (refer to Functional Description section for input/output assignment)
  using SEL119 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL59_fields_

struct XBARA1_SEL59 : ftl::mmio::Register<
    0x4003C076u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL59_fields_::SEL118,
    XBARA1_SEL59_fields_::SEL119> {
  using SEL118 = XBARA1_SEL59_fields_::SEL118;
  using SEL119 = XBARA1_SEL59_fields_::SEL119;
};

// Crossbar A Select Register 60
struct XBARA1_SEL60_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT120 (refer to Functional Description section for input/output assignment)
  using SEL120 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT121 (refer to Functional Description section for input/output assignment)
  using SEL121 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL60_fields_

struct XBARA1_SEL60 : ftl::mmio::Register<
    0x4003C078u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL60_fields_::SEL120,
    XBARA1_SEL60_fields_::SEL121> {
  using SEL120 = XBARA1_SEL60_fields_::SEL120;
  using SEL121 = XBARA1_SEL60_fields_::SEL121;
};

// Crossbar A Select Register 61
struct XBARA1_SEL61_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT122 (refer to Functional Description section for input/output assignment)
  using SEL122 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT123 (refer to Functional Description section for input/output assignment)
  using SEL123 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL61_fields_

struct XBARA1_SEL61 : ftl::mmio::Register<
    0x4003C07Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL61_fields_::SEL122,
    XBARA1_SEL61_fields_::SEL123> {
  using SEL122 = XBARA1_SEL61_fields_::SEL122;
  using SEL123 = XBARA1_SEL61_fields_::SEL123;
};

// Crossbar A Select Register 62
struct XBARA1_SEL62_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT124 (refer to Functional Description section for input/output assignment)
  using SEL124 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT125 (refer to Functional Description section for input/output assignment)
  using SEL125 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL62_fields_

struct XBARA1_SEL62 : ftl::mmio::Register<
    0x4003C07Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL62_fields_::SEL124,
    XBARA1_SEL62_fields_::SEL125> {
  using SEL124 = XBARA1_SEL62_fields_::SEL124;
  using SEL125 = XBARA1_SEL62_fields_::SEL125;
};

// Crossbar A Select Register 63
struct XBARA1_SEL63_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT126 (refer to Functional Description section for input/output assignment)
  using SEL126 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT127 (refer to Functional Description section for input/output assignment)
  using SEL127 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL63_fields_

struct XBARA1_SEL63 : ftl::mmio::Register<
    0x4003C07Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL63_fields_::SEL126,
    XBARA1_SEL63_fields_::SEL127> {
  using SEL126 = XBARA1_SEL63_fields_::SEL126;
  using SEL127 = XBARA1_SEL63_fields_::SEL127;
};

// Crossbar A Select Register 64
struct XBARA1_SEL64_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT128 (refer to Functional Description section for input/output assignment)
  using SEL128 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT129 (refer to Functional Description section for input/output assignment)
  using SEL129 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL64_fields_

struct XBARA1_SEL64 : ftl::mmio::Register<
    0x4003C080u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL64_fields_::SEL128,
    XBARA1_SEL64_fields_::SEL129> {
  using SEL128 = XBARA1_SEL64_fields_::SEL128;
  using SEL129 = XBARA1_SEL64_fields_::SEL129;
};

// Crossbar A Select Register 65
struct XBARA1_SEL65_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT130 (refer to Functional Description section for input/output assignment)
  using SEL130 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT131 (refer to Functional Description section for input/output assignment)
  using SEL131 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL65_fields_

struct XBARA1_SEL65 : ftl::mmio::Register<
    0x4003C082u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL65_fields_::SEL130,
    XBARA1_SEL65_fields_::SEL131> {
  using SEL130 = XBARA1_SEL65_fields_::SEL130;
  using SEL131 = XBARA1_SEL65_fields_::SEL131;
};

// Crossbar A Select Register 66
struct XBARA1_SEL66_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT132 (refer to Functional Description section for input/output assignment)
  using SEL132 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT133 (refer to Functional Description section for input/output assignment)
  using SEL133 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL66_fields_

struct XBARA1_SEL66 : ftl::mmio::Register<
    0x4003C084u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL66_fields_::SEL132,
    XBARA1_SEL66_fields_::SEL133> {
  using SEL132 = XBARA1_SEL66_fields_::SEL132;
  using SEL133 = XBARA1_SEL66_fields_::SEL133;
};

// Crossbar A Select Register 67
struct XBARA1_SEL67_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT134 (refer to Functional Description section for input/output assignment)
  using SEL134 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT135 (refer to Functional Description section for input/output assignment)
  using SEL135 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL67_fields_

struct XBARA1_SEL67 : ftl::mmio::Register<
    0x4003C086u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL67_fields_::SEL134,
    XBARA1_SEL67_fields_::SEL135> {
  using SEL134 = XBARA1_SEL67_fields_::SEL134;
  using SEL135 = XBARA1_SEL67_fields_::SEL135;
};

// Crossbar A Select Register 68
struct XBARA1_SEL68_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT136 (refer to Functional Description section for input/output assignment)
  using SEL136 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT137 (refer to Functional Description section for input/output assignment)
  using SEL137 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL68_fields_

struct XBARA1_SEL68 : ftl::mmio::Register<
    0x4003C088u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL68_fields_::SEL136,
    XBARA1_SEL68_fields_::SEL137> {
  using SEL136 = XBARA1_SEL68_fields_::SEL136;
  using SEL137 = XBARA1_SEL68_fields_::SEL137;
};

// Crossbar A Select Register 69
struct XBARA1_SEL69_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT138 (refer to Functional Description section for input/output assignment)
  using SEL138 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT139 (refer to Functional Description section for input/output assignment)
  using SEL139 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL69_fields_

struct XBARA1_SEL69 : ftl::mmio::Register<
    0x4003C08Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL69_fields_::SEL138,
    XBARA1_SEL69_fields_::SEL139> {
  using SEL138 = XBARA1_SEL69_fields_::SEL138;
  using SEL139 = XBARA1_SEL69_fields_::SEL139;
};

// Crossbar A Select Register 70
struct XBARA1_SEL70_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT140 (refer to Functional Description section for input/output assignment)
  using SEL140 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT141 (refer to Functional Description section for input/output assignment)
  using SEL141 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL70_fields_

struct XBARA1_SEL70 : ftl::mmio::Register<
    0x4003C08Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL70_fields_::SEL140,
    XBARA1_SEL70_fields_::SEL141> {
  using SEL140 = XBARA1_SEL70_fields_::SEL140;
  using SEL141 = XBARA1_SEL70_fields_::SEL141;
};

// Crossbar A Select Register 71
struct XBARA1_SEL71_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT142 (refer to Functional Description section for input/output assignment)
  using SEL142 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT143 (refer to Functional Description section for input/output assignment)
  using SEL143 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL71_fields_

struct XBARA1_SEL71 : ftl::mmio::Register<
    0x4003C08Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL71_fields_::SEL142,
    XBARA1_SEL71_fields_::SEL143> {
  using SEL142 = XBARA1_SEL71_fields_::SEL142;
  using SEL143 = XBARA1_SEL71_fields_::SEL143;
};

// Crossbar A Select Register 72
struct XBARA1_SEL72_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT144 (refer to Functional Description section for input/output assignment)
  using SEL144 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT145 (refer to Functional Description section for input/output assignment)
  using SEL145 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL72_fields_

struct XBARA1_SEL72 : ftl::mmio::Register<
    0x4003C090u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL72_fields_::SEL144,
    XBARA1_SEL72_fields_::SEL145> {
  using SEL144 = XBARA1_SEL72_fields_::SEL144;
  using SEL145 = XBARA1_SEL72_fields_::SEL145;
};

// Crossbar A Select Register 73
struct XBARA1_SEL73_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT146 (refer to Functional Description section for input/output assignment)
  using SEL146 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT147 (refer to Functional Description section for input/output assignment)
  using SEL147 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL73_fields_

struct XBARA1_SEL73 : ftl::mmio::Register<
    0x4003C092u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL73_fields_::SEL146,
    XBARA1_SEL73_fields_::SEL147> {
  using SEL146 = XBARA1_SEL73_fields_::SEL146;
  using SEL147 = XBARA1_SEL73_fields_::SEL147;
};

// Crossbar A Select Register 74
struct XBARA1_SEL74_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT148 (refer to Functional Description section for input/output assignment)
  using SEL148 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT149 (refer to Functional Description section for input/output assignment)
  using SEL149 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL74_fields_

struct XBARA1_SEL74 : ftl::mmio::Register<
    0x4003C094u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL74_fields_::SEL148,
    XBARA1_SEL74_fields_::SEL149> {
  using SEL148 = XBARA1_SEL74_fields_::SEL148;
  using SEL149 = XBARA1_SEL74_fields_::SEL149;
};

// Crossbar A Select Register 75
struct XBARA1_SEL75_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT150 (refer to Functional Description section for input/output assignment)
  using SEL150 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT151 (refer to Functional Description section for input/output assignment)
  using SEL151 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL75_fields_

struct XBARA1_SEL75 : ftl::mmio::Register<
    0x4003C096u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL75_fields_::SEL150,
    XBARA1_SEL75_fields_::SEL151> {
  using SEL150 = XBARA1_SEL75_fields_::SEL150;
  using SEL151 = XBARA1_SEL75_fields_::SEL151;
};

// Crossbar A Select Register 76
struct XBARA1_SEL76_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT152 (refer to Functional Description section for input/output assignment)
  using SEL152 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT153 (refer to Functional Description section for input/output assignment)
  using SEL153 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL76_fields_

struct XBARA1_SEL76 : ftl::mmio::Register<
    0x4003C098u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL76_fields_::SEL152,
    XBARA1_SEL76_fields_::SEL153> {
  using SEL152 = XBARA1_SEL76_fields_::SEL152;
  using SEL153 = XBARA1_SEL76_fields_::SEL153;
};

// Crossbar A Select Register 77
struct XBARA1_SEL77_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT154 (refer to Functional Description section for input/output assignment)
  using SEL154 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT155 (refer to Functional Description section for input/output assignment)
  using SEL155 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL77_fields_

struct XBARA1_SEL77 : ftl::mmio::Register<
    0x4003C09Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL77_fields_::SEL154,
    XBARA1_SEL77_fields_::SEL155> {
  using SEL154 = XBARA1_SEL77_fields_::SEL154;
  using SEL155 = XBARA1_SEL77_fields_::SEL155;
};

// Crossbar A Select Register 78
struct XBARA1_SEL78_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT156 (refer to Functional Description section for input/output assignment)
  using SEL156 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT157 (refer to Functional Description section for input/output assignment)
  using SEL157 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL78_fields_

struct XBARA1_SEL78 : ftl::mmio::Register<
    0x4003C09Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL78_fields_::SEL156,
    XBARA1_SEL78_fields_::SEL157> {
  using SEL156 = XBARA1_SEL78_fields_::SEL156;
  using SEL157 = XBARA1_SEL78_fields_::SEL157;
};

// Crossbar A Select Register 79
struct XBARA1_SEL79_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT158 (refer to Functional Description section for input/output assignment)
  using SEL158 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT159 (refer to Functional Description section for input/output assignment)
  using SEL159 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL79_fields_

struct XBARA1_SEL79 : ftl::mmio::Register<
    0x4003C09Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL79_fields_::SEL158,
    XBARA1_SEL79_fields_::SEL159> {
  using SEL158 = XBARA1_SEL79_fields_::SEL158;
  using SEL159 = XBARA1_SEL79_fields_::SEL159;
};

// Crossbar A Select Register 80
struct XBARA1_SEL80_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT160 (refer to Functional Description section for input/output assignment)
  using SEL160 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT161 (refer to Functional Description section for input/output assignment)
  using SEL161 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL80_fields_

struct XBARA1_SEL80 : ftl::mmio::Register<
    0x4003C0A0u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL80_fields_::SEL160,
    XBARA1_SEL80_fields_::SEL161> {
  using SEL160 = XBARA1_SEL80_fields_::SEL160;
  using SEL161 = XBARA1_SEL80_fields_::SEL161;
};

// Crossbar A Select Register 81
struct XBARA1_SEL81_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT162 (refer to Functional Description section for input/output assignment)
  using SEL162 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT163 (refer to Functional Description section for input/output assignment)
  using SEL163 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL81_fields_

struct XBARA1_SEL81 : ftl::mmio::Register<
    0x4003C0A2u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL81_fields_::SEL162,
    XBARA1_SEL81_fields_::SEL163> {
  using SEL162 = XBARA1_SEL81_fields_::SEL162;
  using SEL163 = XBARA1_SEL81_fields_::SEL163;
};

// Crossbar A Select Register 82
struct XBARA1_SEL82_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT164 (refer to Functional Description section for input/output assignment)
  using SEL164 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT165 (refer to Functional Description section for input/output assignment)
  using SEL165 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL82_fields_

struct XBARA1_SEL82 : ftl::mmio::Register<
    0x4003C0A4u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL82_fields_::SEL164,
    XBARA1_SEL82_fields_::SEL165> {
  using SEL164 = XBARA1_SEL82_fields_::SEL164;
  using SEL165 = XBARA1_SEL82_fields_::SEL165;
};

// Crossbar A Select Register 83
struct XBARA1_SEL83_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT166 (refer to Functional Description section for input/output assignment)
  using SEL166 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT167 (refer to Functional Description section for input/output assignment)
  using SEL167 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL83_fields_

struct XBARA1_SEL83 : ftl::mmio::Register<
    0x4003C0A6u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL83_fields_::SEL166,
    XBARA1_SEL83_fields_::SEL167> {
  using SEL166 = XBARA1_SEL83_fields_::SEL166;
  using SEL167 = XBARA1_SEL83_fields_::SEL167;
};

// Crossbar A Select Register 84
struct XBARA1_SEL84_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT168 (refer to Functional Description section for input/output assignment)
  using SEL168 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT169 (refer to Functional Description section for input/output assignment)
  using SEL169 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL84_fields_

struct XBARA1_SEL84 : ftl::mmio::Register<
    0x4003C0A8u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL84_fields_::SEL168,
    XBARA1_SEL84_fields_::SEL169> {
  using SEL168 = XBARA1_SEL84_fields_::SEL168;
  using SEL169 = XBARA1_SEL84_fields_::SEL169;
};

// Crossbar A Select Register 85
struct XBARA1_SEL85_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT170 (refer to Functional Description section for input/output assignment)
  using SEL170 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT171 (refer to Functional Description section for input/output assignment)
  using SEL171 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL85_fields_

struct XBARA1_SEL85 : ftl::mmio::Register<
    0x4003C0AAu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL85_fields_::SEL170,
    XBARA1_SEL85_fields_::SEL171> {
  using SEL170 = XBARA1_SEL85_fields_::SEL170;
  using SEL171 = XBARA1_SEL85_fields_::SEL171;
};

// Crossbar A Select Register 86
struct XBARA1_SEL86_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT172 (refer to Functional Description section for input/output assignment)
  using SEL172 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT173 (refer to Functional Description section for input/output assignment)
  using SEL173 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL86_fields_

struct XBARA1_SEL86 : ftl::mmio::Register<
    0x4003C0ACu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL86_fields_::SEL172,
    XBARA1_SEL86_fields_::SEL173> {
  using SEL172 = XBARA1_SEL86_fields_::SEL172;
  using SEL173 = XBARA1_SEL86_fields_::SEL173;
};

// Crossbar A Select Register 87
struct XBARA1_SEL87_fields_ {
  // Input (XBARA_INn) to be muxed to XBARA_OUT174 (refer to Functional Description section for input/output assignment)
  using SEL174 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input (XBARA_INn) to be muxed to XBARA_OUT175 (refer to Functional Description section for input/output assignment)
  using SEL175 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct XBARA1_SEL87_fields_

struct XBARA1_SEL87 : ftl::mmio::Register<
    0x4003C0AEu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_SEL87_fields_::SEL174,
    XBARA1_SEL87_fields_::SEL175> {
  using SEL174 = XBARA1_SEL87_fields_::SEL174;
  using SEL175 = XBARA1_SEL87_fields_::SEL175;
};

// Crossbar A Control Register 0
struct XBARA1_CTRL0_fields_ {
  enum class eDEN0 : std::uint32_t {
    // DMA disabled
    eDEN0_0 = 0,
    // DMA enabled
    eDEN0_1 = 1,
  };

  enum class eIEN0 : std::uint32_t {
    // Interrupt disabled
    eIEN0_0 = 0,
    // Interrupt enabled
    eIEN0_1 = 1,
  };

  enum class eEDGE0 : std::uint32_t {
    // STS0 never asserts
    eEDGE0_0 = 0,
    // STS0 asserts on rising edges of XBAR_OUT0
    eEDGE0_1 = 1,
    // STS0 asserts on falling edges of XBAR_OUT0
    eEDGE0_2 = 2,
    // STS0 asserts on rising and falling edges of XBAR_OUT0
    eEDGE0_3 = 3,
  };

  enum class eSTS0 : std::uint32_t {
    // Active edge not yet detected on XBAR_OUT0
    eSTS0_0 = 0,
    // Active edge detected on XBAR_OUT0
    eSTS0_1 = 1,
  };

  enum class eDEN1 : std::uint32_t {
    // DMA disabled
    eDEN1_0 = 0,
    // DMA enabled
    eDEN1_1 = 1,
  };

  enum class eIEN1 : std::uint32_t {
    // Interrupt disabled
    eIEN1_0 = 0,
    // Interrupt enabled
    eIEN1_1 = 1,
  };

  enum class eEDGE1 : std::uint32_t {
    // STS1 never asserts
    eEDGE1_0 = 0,
    // STS1 asserts on rising edges of XBAR_OUT1
    eEDGE1_1 = 1,
    // STS1 asserts on falling edges of XBAR_OUT1
    eEDGE1_2 = 2,
    // STS1 asserts on rising and falling edges of XBAR_OUT1
    eEDGE1_3 = 3,
  };

  enum class eSTS1 : std::uint32_t {
    // Active edge not yet detected on XBAR_OUT1
    eSTS1_0 = 0,
    // Active edge detected on XBAR_OUT1
    eSTS1_1 = 1,
  };

  // DMA Enable for XBAR_OUT0
  using DEN0 = ftl::mmio::Field<1, 0, eDEN0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Enable for XBAR_OUT0
  using IEN0 = ftl::mmio::Field<1, 1, eIEN0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active edge for edge detection on XBAR_OUT0
  using EDGE0 = ftl::mmio::Field<2, 2, eEDGE0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Edge detection status for XBAR_OUT0
  using STS0 = ftl::mmio::Field<1, 4, eSTS0, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DMA Enable for XBAR_OUT1
  using DEN1 = ftl::mmio::Field<1, 8, eDEN1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Enable for XBAR_OUT1
  using IEN1 = ftl::mmio::Field<1, 9, eIEN1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active edge for edge detection on XBAR_OUT1
  using EDGE1 = ftl::mmio::Field<2, 10, eEDGE1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Edge detection status for XBAR_OUT1
  using STS1 = ftl::mmio::Field<1, 12, eSTS1, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct XBARA1_CTRL0_fields_

struct XBARA1_CTRL0 : ftl::mmio::Register<
    0x4003C0B0u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_CTRL0_fields_::DEN0,
    XBARA1_CTRL0_fields_::IEN0,
    XBARA1_CTRL0_fields_::EDGE0,
    XBARA1_CTRL0_fields_::STS0,
    ftl::mmio::Reserved<3, 5>,
    XBARA1_CTRL0_fields_::DEN1,
    XBARA1_CTRL0_fields_::IEN1,
    XBARA1_CTRL0_fields_::EDGE1,
    XBARA1_CTRL0_fields_::STS1,
    ftl::mmio::Reserved<3, 13>> {
  using eDEN0 = XBARA1_CTRL0_fields_::eDEN0;
  using eIEN0 = XBARA1_CTRL0_fields_::eIEN0;
  using eEDGE0 = XBARA1_CTRL0_fields_::eEDGE0;
  using eSTS0 = XBARA1_CTRL0_fields_::eSTS0;
  using eDEN1 = XBARA1_CTRL0_fields_::eDEN1;
  using eIEN1 = XBARA1_CTRL0_fields_::eIEN1;
  using eEDGE1 = XBARA1_CTRL0_fields_::eEDGE1;
  using eSTS1 = XBARA1_CTRL0_fields_::eSTS1;
  using DEN0 = XBARA1_CTRL0_fields_::DEN0;
  using IEN0 = XBARA1_CTRL0_fields_::IEN0;
  using EDGE0 = XBARA1_CTRL0_fields_::EDGE0;
  using STS0 = XBARA1_CTRL0_fields_::STS0;
  using DEN1 = XBARA1_CTRL0_fields_::DEN1;
  using IEN1 = XBARA1_CTRL0_fields_::IEN1;
  using EDGE1 = XBARA1_CTRL0_fields_::EDGE1;
  using STS1 = XBARA1_CTRL0_fields_::STS1;
};

// Crossbar A Control Register 1
struct XBARA1_CTRL1_fields_ {
  enum class eDEN2 : std::uint32_t {
    // DMA disabled
    eDEN2_0 = 0,
    // DMA enabled
    eDEN2_1 = 1,
  };

  enum class eIEN2 : std::uint32_t {
    // Interrupt disabled
    eIEN2_0 = 0,
    // Interrupt enabled
    eIEN2_1 = 1,
  };

  enum class eEDGE2 : std::uint32_t {
    // STS2 never asserts
    eEDGE2_0 = 0,
    // STS2 asserts on rising edges of XBAR_OUT2
    eEDGE2_1 = 1,
    // STS2 asserts on falling edges of XBAR_OUT2
    eEDGE2_2 = 2,
    // STS2 asserts on rising and falling edges of XBAR_OUT2
    eEDGE2_3 = 3,
  };

  enum class eSTS2 : std::uint32_t {
    // Active edge not yet detected on XBAR_OUT2
    eSTS2_0 = 0,
    // Active edge detected on XBAR_OUT2
    eSTS2_1 = 1,
  };

  enum class eDEN3 : std::uint32_t {
    // DMA disabled
    eDEN3_0 = 0,
    // DMA enabled
    eDEN3_1 = 1,
  };

  enum class eIEN3 : std::uint32_t {
    // Interrupt disabled
    eIEN3_0 = 0,
    // Interrupt enabled
    eIEN3_1 = 1,
  };

  enum class eEDGE3 : std::uint32_t {
    // STS3 never asserts
    eEDGE3_0 = 0,
    // STS3 asserts on rising edges of XBAR_OUT3
    eEDGE3_1 = 1,
    // STS3 asserts on falling edges of XBAR_OUT3
    eEDGE3_2 = 2,
    // STS3 asserts on rising and falling edges of XBAR_OUT3
    eEDGE3_3 = 3,
  };

  enum class eSTS3 : std::uint32_t {
    // Active edge not yet detected on XBAR_OUT3
    eSTS3_0 = 0,
    // Active edge detected on XBAR_OUT3
    eSTS3_1 = 1,
  };

  // DMA Enable for XBAR_OUT2
  using DEN2 = ftl::mmio::Field<1, 0, eDEN2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Enable for XBAR_OUT2
  using IEN2 = ftl::mmio::Field<1, 1, eIEN2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active edge for edge detection on XBAR_OUT2
  using EDGE2 = ftl::mmio::Field<2, 2, eEDGE2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Edge detection status for XBAR_OUT2
  using STS2 = ftl::mmio::Field<1, 4, eSTS2, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // DMA Enable for XBAR_OUT3
  using DEN3 = ftl::mmio::Field<1, 8, eDEN3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Enable for XBAR_OUT3
  using IEN3 = ftl::mmio::Field<1, 9, eIEN3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Active edge for edge detection on XBAR_OUT3
  using EDGE3 = ftl::mmio::Field<2, 10, eEDGE3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Edge detection status for XBAR_OUT3
  using STS3 = ftl::mmio::Field<1, 12, eSTS3, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct XBARA1_CTRL1_fields_

struct XBARA1_CTRL1 : ftl::mmio::Register<
    0x4003C0B2u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    XBARA1_CTRL1_fields_::DEN2,
    XBARA1_CTRL1_fields_::IEN2,
    XBARA1_CTRL1_fields_::EDGE2,
    XBARA1_CTRL1_fields_::STS2,
    ftl::mmio::Reserved<3, 5>,
    XBARA1_CTRL1_fields_::DEN3,
    XBARA1_CTRL1_fields_::IEN3,
    XBARA1_CTRL1_fields_::EDGE3,
    XBARA1_CTRL1_fields_::STS3,
    ftl::mmio::Reserved<3, 13>> {
  using eDEN2 = XBARA1_CTRL1_fields_::eDEN2;
  using eIEN2 = XBARA1_CTRL1_fields_::eIEN2;
  using eEDGE2 = XBARA1_CTRL1_fields_::eEDGE2;
  using eSTS2 = XBARA1_CTRL1_fields_::eSTS2;
  using eDEN3 = XBARA1_CTRL1_fields_::eDEN3;
  using eIEN3 = XBARA1_CTRL1_fields_::eIEN3;
  using eEDGE3 = XBARA1_CTRL1_fields_::eEDGE3;
  using eSTS3 = XBARA1_CTRL1_fields_::eSTS3;
  using DEN2 = XBARA1_CTRL1_fields_::DEN2;
  using IEN2 = XBARA1_CTRL1_fields_::IEN2;
  using EDGE2 = XBARA1_CTRL1_fields_::EDGE2;
  using STS2 = XBARA1_CTRL1_fields_::STS2;
  using DEN3 = XBARA1_CTRL1_fields_::DEN3;
  using IEN3 = XBARA1_CTRL1_fields_::IEN3;
  using EDGE3 = XBARA1_CTRL1_fields_::EDGE3;
  using STS3 = XBARA1_CTRL1_fields_::STS3;
};

}  // namespace regs::xbara1