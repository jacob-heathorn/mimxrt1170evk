#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Crossbar Switch
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Xbara1 {
  // Crossbar A Select Register 0
  struct Xbara1Sel0Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT0 (refer to Functional Description section for input/output assignment)
    using SEL0 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT1 (refer to Functional Description section for input/output assignment)
    using SEL1 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel0Fields

  struct XBARA1_SEL0 : ftl::mmio::Register<
      0x4003C000u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel0Fields::SEL0,
      Xbara1Sel0Fields::SEL1> {
    using SEL0 = Xbara1Sel0Fields::SEL0;
    using SEL1 = Xbara1Sel0Fields::SEL1;
  };

  // Crossbar A Select Register 1
  struct Xbara1Sel1Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT2 (refer to Functional Description section for input/output assignment)
    using SEL2 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT3 (refer to Functional Description section for input/output assignment)
    using SEL3 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel1Fields

  struct XBARA1_SEL1 : ftl::mmio::Register<
      0x4003C002u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel1Fields::SEL2,
      Xbara1Sel1Fields::SEL3> {
    using SEL2 = Xbara1Sel1Fields::SEL2;
    using SEL3 = Xbara1Sel1Fields::SEL3;
  };

  // Crossbar A Select Register 2
  struct Xbara1Sel2Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT4 (refer to Functional Description section for input/output assignment)
    using SEL4 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT5 (refer to Functional Description section for input/output assignment)
    using SEL5 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel2Fields

  struct XBARA1_SEL2 : ftl::mmio::Register<
      0x4003C004u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel2Fields::SEL4,
      Xbara1Sel2Fields::SEL5> {
    using SEL4 = Xbara1Sel2Fields::SEL4;
    using SEL5 = Xbara1Sel2Fields::SEL5;
  };

  // Crossbar A Select Register 3
  struct Xbara1Sel3Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT6 (refer to Functional Description section for input/output assignment)
    using SEL6 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT7 (refer to Functional Description section for input/output assignment)
    using SEL7 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel3Fields

  struct XBARA1_SEL3 : ftl::mmio::Register<
      0x4003C006u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel3Fields::SEL6,
      Xbara1Sel3Fields::SEL7> {
    using SEL6 = Xbara1Sel3Fields::SEL6;
    using SEL7 = Xbara1Sel3Fields::SEL7;
  };

  // Crossbar A Select Register 4
  struct Xbara1Sel4Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT8 (refer to Functional Description section for input/output assignment)
    using SEL8 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT9 (refer to Functional Description section for input/output assignment)
    using SEL9 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel4Fields

  struct XBARA1_SEL4 : ftl::mmio::Register<
      0x4003C008u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel4Fields::SEL8,
      Xbara1Sel4Fields::SEL9> {
    using SEL8 = Xbara1Sel4Fields::SEL8;
    using SEL9 = Xbara1Sel4Fields::SEL9;
  };

  // Crossbar A Select Register 5
  struct Xbara1Sel5Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT10 (refer to Functional Description section for input/output assignment)
    using SEL10 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT11 (refer to Functional Description section for input/output assignment)
    using SEL11 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel5Fields

  struct XBARA1_SEL5 : ftl::mmio::Register<
      0x4003C00Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel5Fields::SEL10,
      Xbara1Sel5Fields::SEL11> {
    using SEL10 = Xbara1Sel5Fields::SEL10;
    using SEL11 = Xbara1Sel5Fields::SEL11;
  };

  // Crossbar A Select Register 6
  struct Xbara1Sel6Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT12 (refer to Functional Description section for input/output assignment)
    using SEL12 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT13 (refer to Functional Description section for input/output assignment)
    using SEL13 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel6Fields

  struct XBARA1_SEL6 : ftl::mmio::Register<
      0x4003C00Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel6Fields::SEL12,
      Xbara1Sel6Fields::SEL13> {
    using SEL12 = Xbara1Sel6Fields::SEL12;
    using SEL13 = Xbara1Sel6Fields::SEL13;
  };

  // Crossbar A Select Register 7
  struct Xbara1Sel7Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT14 (refer to Functional Description section for input/output assignment)
    using SEL14 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT15 (refer to Functional Description section for input/output assignment)
    using SEL15 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel7Fields

  struct XBARA1_SEL7 : ftl::mmio::Register<
      0x4003C00Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel7Fields::SEL14,
      Xbara1Sel7Fields::SEL15> {
    using SEL14 = Xbara1Sel7Fields::SEL14;
    using SEL15 = Xbara1Sel7Fields::SEL15;
  };

  // Crossbar A Select Register 8
  struct Xbara1Sel8Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT16 (refer to Functional Description section for input/output assignment)
    using SEL16 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT17 (refer to Functional Description section for input/output assignment)
    using SEL17 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel8Fields

  struct XBARA1_SEL8 : ftl::mmio::Register<
      0x4003C010u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel8Fields::SEL16,
      Xbara1Sel8Fields::SEL17> {
    using SEL16 = Xbara1Sel8Fields::SEL16;
    using SEL17 = Xbara1Sel8Fields::SEL17;
  };

  // Crossbar A Select Register 9
  struct Xbara1Sel9Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT18 (refer to Functional Description section for input/output assignment)
    using SEL18 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT19 (refer to Functional Description section for input/output assignment)
    using SEL19 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel9Fields

  struct XBARA1_SEL9 : ftl::mmio::Register<
      0x4003C012u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel9Fields::SEL18,
      Xbara1Sel9Fields::SEL19> {
    using SEL18 = Xbara1Sel9Fields::SEL18;
    using SEL19 = Xbara1Sel9Fields::SEL19;
  };

  // Crossbar A Select Register 10
  struct Xbara1Sel10Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT20 (refer to Functional Description section for input/output assignment)
    using SEL20 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT21 (refer to Functional Description section for input/output assignment)
    using SEL21 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel10Fields

  struct XBARA1_SEL10 : ftl::mmio::Register<
      0x4003C014u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel10Fields::SEL20,
      Xbara1Sel10Fields::SEL21> {
    using SEL20 = Xbara1Sel10Fields::SEL20;
    using SEL21 = Xbara1Sel10Fields::SEL21;
  };

  // Crossbar A Select Register 11
  struct Xbara1Sel11Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT22 (refer to Functional Description section for input/output assignment)
    using SEL22 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT23 (refer to Functional Description section for input/output assignment)
    using SEL23 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel11Fields

  struct XBARA1_SEL11 : ftl::mmio::Register<
      0x4003C016u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel11Fields::SEL22,
      Xbara1Sel11Fields::SEL23> {
    using SEL22 = Xbara1Sel11Fields::SEL22;
    using SEL23 = Xbara1Sel11Fields::SEL23;
  };

  // Crossbar A Select Register 12
  struct Xbara1Sel12Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT24 (refer to Functional Description section for input/output assignment)
    using SEL24 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT25 (refer to Functional Description section for input/output assignment)
    using SEL25 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel12Fields

  struct XBARA1_SEL12 : ftl::mmio::Register<
      0x4003C018u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel12Fields::SEL24,
      Xbara1Sel12Fields::SEL25> {
    using SEL24 = Xbara1Sel12Fields::SEL24;
    using SEL25 = Xbara1Sel12Fields::SEL25;
  };

  // Crossbar A Select Register 13
  struct Xbara1Sel13Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT26 (refer to Functional Description section for input/output assignment)
    using SEL26 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT27 (refer to Functional Description section for input/output assignment)
    using SEL27 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel13Fields

  struct XBARA1_SEL13 : ftl::mmio::Register<
      0x4003C01Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel13Fields::SEL26,
      Xbara1Sel13Fields::SEL27> {
    using SEL26 = Xbara1Sel13Fields::SEL26;
    using SEL27 = Xbara1Sel13Fields::SEL27;
  };

  // Crossbar A Select Register 14
  struct Xbara1Sel14Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT28 (refer to Functional Description section for input/output assignment)
    using SEL28 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT29 (refer to Functional Description section for input/output assignment)
    using SEL29 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel14Fields

  struct XBARA1_SEL14 : ftl::mmio::Register<
      0x4003C01Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel14Fields::SEL28,
      Xbara1Sel14Fields::SEL29> {
    using SEL28 = Xbara1Sel14Fields::SEL28;
    using SEL29 = Xbara1Sel14Fields::SEL29;
  };

  // Crossbar A Select Register 15
  struct Xbara1Sel15Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT30 (refer to Functional Description section for input/output assignment)
    using SEL30 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT31 (refer to Functional Description section for input/output assignment)
    using SEL31 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel15Fields

  struct XBARA1_SEL15 : ftl::mmio::Register<
      0x4003C01Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel15Fields::SEL30,
      Xbara1Sel15Fields::SEL31> {
    using SEL30 = Xbara1Sel15Fields::SEL30;
    using SEL31 = Xbara1Sel15Fields::SEL31;
  };

  // Crossbar A Select Register 16
  struct Xbara1Sel16Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT32 (refer to Functional Description section for input/output assignment)
    using SEL32 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT33 (refer to Functional Description section for input/output assignment)
    using SEL33 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel16Fields

  struct XBARA1_SEL16 : ftl::mmio::Register<
      0x4003C020u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel16Fields::SEL32,
      Xbara1Sel16Fields::SEL33> {
    using SEL32 = Xbara1Sel16Fields::SEL32;
    using SEL33 = Xbara1Sel16Fields::SEL33;
  };

  // Crossbar A Select Register 17
  struct Xbara1Sel17Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT34 (refer to Functional Description section for input/output assignment)
    using SEL34 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT35 (refer to Functional Description section for input/output assignment)
    using SEL35 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel17Fields

  struct XBARA1_SEL17 : ftl::mmio::Register<
      0x4003C022u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel17Fields::SEL34,
      Xbara1Sel17Fields::SEL35> {
    using SEL34 = Xbara1Sel17Fields::SEL34;
    using SEL35 = Xbara1Sel17Fields::SEL35;
  };

  // Crossbar A Select Register 18
  struct Xbara1Sel18Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT36 (refer to Functional Description section for input/output assignment)
    using SEL36 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT37 (refer to Functional Description section for input/output assignment)
    using SEL37 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel18Fields

  struct XBARA1_SEL18 : ftl::mmio::Register<
      0x4003C024u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel18Fields::SEL36,
      Xbara1Sel18Fields::SEL37> {
    using SEL36 = Xbara1Sel18Fields::SEL36;
    using SEL37 = Xbara1Sel18Fields::SEL37;
  };

  // Crossbar A Select Register 19
  struct Xbara1Sel19Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT38 (refer to Functional Description section for input/output assignment)
    using SEL38 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT39 (refer to Functional Description section for input/output assignment)
    using SEL39 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel19Fields

  struct XBARA1_SEL19 : ftl::mmio::Register<
      0x4003C026u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel19Fields::SEL38,
      Xbara1Sel19Fields::SEL39> {
    using SEL38 = Xbara1Sel19Fields::SEL38;
    using SEL39 = Xbara1Sel19Fields::SEL39;
  };

  // Crossbar A Select Register 20
  struct Xbara1Sel20Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT40 (refer to Functional Description section for input/output assignment)
    using SEL40 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT41 (refer to Functional Description section for input/output assignment)
    using SEL41 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel20Fields

  struct XBARA1_SEL20 : ftl::mmio::Register<
      0x4003C028u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel20Fields::SEL40,
      Xbara1Sel20Fields::SEL41> {
    using SEL40 = Xbara1Sel20Fields::SEL40;
    using SEL41 = Xbara1Sel20Fields::SEL41;
  };

  // Crossbar A Select Register 21
  struct Xbara1Sel21Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT42 (refer to Functional Description section for input/output assignment)
    using SEL42 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT43 (refer to Functional Description section for input/output assignment)
    using SEL43 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel21Fields

  struct XBARA1_SEL21 : ftl::mmio::Register<
      0x4003C02Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel21Fields::SEL42,
      Xbara1Sel21Fields::SEL43> {
    using SEL42 = Xbara1Sel21Fields::SEL42;
    using SEL43 = Xbara1Sel21Fields::SEL43;
  };

  // Crossbar A Select Register 22
  struct Xbara1Sel22Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT44 (refer to Functional Description section for input/output assignment)
    using SEL44 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT45 (refer to Functional Description section for input/output assignment)
    using SEL45 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel22Fields

  struct XBARA1_SEL22 : ftl::mmio::Register<
      0x4003C02Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel22Fields::SEL44,
      Xbara1Sel22Fields::SEL45> {
    using SEL44 = Xbara1Sel22Fields::SEL44;
    using SEL45 = Xbara1Sel22Fields::SEL45;
  };

  // Crossbar A Select Register 23
  struct Xbara1Sel23Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT46 (refer to Functional Description section for input/output assignment)
    using SEL46 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT47 (refer to Functional Description section for input/output assignment)
    using SEL47 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel23Fields

  struct XBARA1_SEL23 : ftl::mmio::Register<
      0x4003C02Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel23Fields::SEL46,
      Xbara1Sel23Fields::SEL47> {
    using SEL46 = Xbara1Sel23Fields::SEL46;
    using SEL47 = Xbara1Sel23Fields::SEL47;
  };

  // Crossbar A Select Register 24
  struct Xbara1Sel24Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT48 (refer to Functional Description section for input/output assignment)
    using SEL48 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT49 (refer to Functional Description section for input/output assignment)
    using SEL49 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel24Fields

  struct XBARA1_SEL24 : ftl::mmio::Register<
      0x4003C030u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel24Fields::SEL48,
      Xbara1Sel24Fields::SEL49> {
    using SEL48 = Xbara1Sel24Fields::SEL48;
    using SEL49 = Xbara1Sel24Fields::SEL49;
  };

  // Crossbar A Select Register 25
  struct Xbara1Sel25Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT50 (refer to Functional Description section for input/output assignment)
    using SEL50 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT51 (refer to Functional Description section for input/output assignment)
    using SEL51 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel25Fields

  struct XBARA1_SEL25 : ftl::mmio::Register<
      0x4003C032u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel25Fields::SEL50,
      Xbara1Sel25Fields::SEL51> {
    using SEL50 = Xbara1Sel25Fields::SEL50;
    using SEL51 = Xbara1Sel25Fields::SEL51;
  };

  // Crossbar A Select Register 26
  struct Xbara1Sel26Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT52 (refer to Functional Description section for input/output assignment)
    using SEL52 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT53 (refer to Functional Description section for input/output assignment)
    using SEL53 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel26Fields

  struct XBARA1_SEL26 : ftl::mmio::Register<
      0x4003C034u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel26Fields::SEL52,
      Xbara1Sel26Fields::SEL53> {
    using SEL52 = Xbara1Sel26Fields::SEL52;
    using SEL53 = Xbara1Sel26Fields::SEL53;
  };

  // Crossbar A Select Register 27
  struct Xbara1Sel27Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT54 (refer to Functional Description section for input/output assignment)
    using SEL54 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT55 (refer to Functional Description section for input/output assignment)
    using SEL55 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel27Fields

  struct XBARA1_SEL27 : ftl::mmio::Register<
      0x4003C036u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel27Fields::SEL54,
      Xbara1Sel27Fields::SEL55> {
    using SEL54 = Xbara1Sel27Fields::SEL54;
    using SEL55 = Xbara1Sel27Fields::SEL55;
  };

  // Crossbar A Select Register 28
  struct Xbara1Sel28Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT56 (refer to Functional Description section for input/output assignment)
    using SEL56 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT57 (refer to Functional Description section for input/output assignment)
    using SEL57 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel28Fields

  struct XBARA1_SEL28 : ftl::mmio::Register<
      0x4003C038u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel28Fields::SEL56,
      Xbara1Sel28Fields::SEL57> {
    using SEL56 = Xbara1Sel28Fields::SEL56;
    using SEL57 = Xbara1Sel28Fields::SEL57;
  };

  // Crossbar A Select Register 29
  struct Xbara1Sel29Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT58 (refer to Functional Description section for input/output assignment)
    using SEL58 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT59 (refer to Functional Description section for input/output assignment)
    using SEL59 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel29Fields

  struct XBARA1_SEL29 : ftl::mmio::Register<
      0x4003C03Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel29Fields::SEL58,
      Xbara1Sel29Fields::SEL59> {
    using SEL58 = Xbara1Sel29Fields::SEL58;
    using SEL59 = Xbara1Sel29Fields::SEL59;
  };

  // Crossbar A Select Register 30
  struct Xbara1Sel30Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT60 (refer to Functional Description section for input/output assignment)
    using SEL60 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT61 (refer to Functional Description section for input/output assignment)
    using SEL61 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel30Fields

  struct XBARA1_SEL30 : ftl::mmio::Register<
      0x4003C03Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel30Fields::SEL60,
      Xbara1Sel30Fields::SEL61> {
    using SEL60 = Xbara1Sel30Fields::SEL60;
    using SEL61 = Xbara1Sel30Fields::SEL61;
  };

  // Crossbar A Select Register 31
  struct Xbara1Sel31Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT62 (refer to Functional Description section for input/output assignment)
    using SEL62 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT63 (refer to Functional Description section for input/output assignment)
    using SEL63 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel31Fields

  struct XBARA1_SEL31 : ftl::mmio::Register<
      0x4003C03Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel31Fields::SEL62,
      Xbara1Sel31Fields::SEL63> {
    using SEL62 = Xbara1Sel31Fields::SEL62;
    using SEL63 = Xbara1Sel31Fields::SEL63;
  };

  // Crossbar A Select Register 32
  struct Xbara1Sel32Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT64 (refer to Functional Description section for input/output assignment)
    using SEL64 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT65 (refer to Functional Description section for input/output assignment)
    using SEL65 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel32Fields

  struct XBARA1_SEL32 : ftl::mmio::Register<
      0x4003C040u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel32Fields::SEL64,
      Xbara1Sel32Fields::SEL65> {
    using SEL64 = Xbara1Sel32Fields::SEL64;
    using SEL65 = Xbara1Sel32Fields::SEL65;
  };

  // Crossbar A Select Register 33
  struct Xbara1Sel33Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT66 (refer to Functional Description section for input/output assignment)
    using SEL66 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT67 (refer to Functional Description section for input/output assignment)
    using SEL67 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel33Fields

  struct XBARA1_SEL33 : ftl::mmio::Register<
      0x4003C042u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel33Fields::SEL66,
      Xbara1Sel33Fields::SEL67> {
    using SEL66 = Xbara1Sel33Fields::SEL66;
    using SEL67 = Xbara1Sel33Fields::SEL67;
  };

  // Crossbar A Select Register 34
  struct Xbara1Sel34Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT68 (refer to Functional Description section for input/output assignment)
    using SEL68 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT69 (refer to Functional Description section for input/output assignment)
    using SEL69 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel34Fields

  struct XBARA1_SEL34 : ftl::mmio::Register<
      0x4003C044u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel34Fields::SEL68,
      Xbara1Sel34Fields::SEL69> {
    using SEL68 = Xbara1Sel34Fields::SEL68;
    using SEL69 = Xbara1Sel34Fields::SEL69;
  };

  // Crossbar A Select Register 35
  struct Xbara1Sel35Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT70 (refer to Functional Description section for input/output assignment)
    using SEL70 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT71 (refer to Functional Description section for input/output assignment)
    using SEL71 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel35Fields

  struct XBARA1_SEL35 : ftl::mmio::Register<
      0x4003C046u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel35Fields::SEL70,
      Xbara1Sel35Fields::SEL71> {
    using SEL70 = Xbara1Sel35Fields::SEL70;
    using SEL71 = Xbara1Sel35Fields::SEL71;
  };

  // Crossbar A Select Register 36
  struct Xbara1Sel36Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT72 (refer to Functional Description section for input/output assignment)
    using SEL72 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT73 (refer to Functional Description section for input/output assignment)
    using SEL73 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel36Fields

  struct XBARA1_SEL36 : ftl::mmio::Register<
      0x4003C048u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel36Fields::SEL72,
      Xbara1Sel36Fields::SEL73> {
    using SEL72 = Xbara1Sel36Fields::SEL72;
    using SEL73 = Xbara1Sel36Fields::SEL73;
  };

  // Crossbar A Select Register 37
  struct Xbara1Sel37Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT74 (refer to Functional Description section for input/output assignment)
    using SEL74 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT75 (refer to Functional Description section for input/output assignment)
    using SEL75 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel37Fields

  struct XBARA1_SEL37 : ftl::mmio::Register<
      0x4003C04Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel37Fields::SEL74,
      Xbara1Sel37Fields::SEL75> {
    using SEL74 = Xbara1Sel37Fields::SEL74;
    using SEL75 = Xbara1Sel37Fields::SEL75;
  };

  // Crossbar A Select Register 38
  struct Xbara1Sel38Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT76 (refer to Functional Description section for input/output assignment)
    using SEL76 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT77 (refer to Functional Description section for input/output assignment)
    using SEL77 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel38Fields

  struct XBARA1_SEL38 : ftl::mmio::Register<
      0x4003C04Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel38Fields::SEL76,
      Xbara1Sel38Fields::SEL77> {
    using SEL76 = Xbara1Sel38Fields::SEL76;
    using SEL77 = Xbara1Sel38Fields::SEL77;
  };

  // Crossbar A Select Register 39
  struct Xbara1Sel39Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT78 (refer to Functional Description section for input/output assignment)
    using SEL78 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT79 (refer to Functional Description section for input/output assignment)
    using SEL79 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel39Fields

  struct XBARA1_SEL39 : ftl::mmio::Register<
      0x4003C04Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel39Fields::SEL78,
      Xbara1Sel39Fields::SEL79> {
    using SEL78 = Xbara1Sel39Fields::SEL78;
    using SEL79 = Xbara1Sel39Fields::SEL79;
  };

  // Crossbar A Select Register 40
  struct Xbara1Sel40Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT80 (refer to Functional Description section for input/output assignment)
    using SEL80 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT81 (refer to Functional Description section for input/output assignment)
    using SEL81 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel40Fields

  struct XBARA1_SEL40 : ftl::mmio::Register<
      0x4003C050u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel40Fields::SEL80,
      Xbara1Sel40Fields::SEL81> {
    using SEL80 = Xbara1Sel40Fields::SEL80;
    using SEL81 = Xbara1Sel40Fields::SEL81;
  };

  // Crossbar A Select Register 41
  struct Xbara1Sel41Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT82 (refer to Functional Description section for input/output assignment)
    using SEL82 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT83 (refer to Functional Description section for input/output assignment)
    using SEL83 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel41Fields

  struct XBARA1_SEL41 : ftl::mmio::Register<
      0x4003C052u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel41Fields::SEL82,
      Xbara1Sel41Fields::SEL83> {
    using SEL82 = Xbara1Sel41Fields::SEL82;
    using SEL83 = Xbara1Sel41Fields::SEL83;
  };

  // Crossbar A Select Register 42
  struct Xbara1Sel42Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT84 (refer to Functional Description section for input/output assignment)
    using SEL84 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT85 (refer to Functional Description section for input/output assignment)
    using SEL85 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel42Fields

  struct XBARA1_SEL42 : ftl::mmio::Register<
      0x4003C054u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel42Fields::SEL84,
      Xbara1Sel42Fields::SEL85> {
    using SEL84 = Xbara1Sel42Fields::SEL84;
    using SEL85 = Xbara1Sel42Fields::SEL85;
  };

  // Crossbar A Select Register 43
  struct Xbara1Sel43Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT86 (refer to Functional Description section for input/output assignment)
    using SEL86 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT87 (refer to Functional Description section for input/output assignment)
    using SEL87 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel43Fields

  struct XBARA1_SEL43 : ftl::mmio::Register<
      0x4003C056u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel43Fields::SEL86,
      Xbara1Sel43Fields::SEL87> {
    using SEL86 = Xbara1Sel43Fields::SEL86;
    using SEL87 = Xbara1Sel43Fields::SEL87;
  };

  // Crossbar A Select Register 44
  struct Xbara1Sel44Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT88 (refer to Functional Description section for input/output assignment)
    using SEL88 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT89 (refer to Functional Description section for input/output assignment)
    using SEL89 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel44Fields

  struct XBARA1_SEL44 : ftl::mmio::Register<
      0x4003C058u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel44Fields::SEL88,
      Xbara1Sel44Fields::SEL89> {
    using SEL88 = Xbara1Sel44Fields::SEL88;
    using SEL89 = Xbara1Sel44Fields::SEL89;
  };

  // Crossbar A Select Register 45
  struct Xbara1Sel45Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT90 (refer to Functional Description section for input/output assignment)
    using SEL90 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT91 (refer to Functional Description section for input/output assignment)
    using SEL91 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel45Fields

  struct XBARA1_SEL45 : ftl::mmio::Register<
      0x4003C05Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel45Fields::SEL90,
      Xbara1Sel45Fields::SEL91> {
    using SEL90 = Xbara1Sel45Fields::SEL90;
    using SEL91 = Xbara1Sel45Fields::SEL91;
  };

  // Crossbar A Select Register 46
  struct Xbara1Sel46Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT92 (refer to Functional Description section for input/output assignment)
    using SEL92 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT93 (refer to Functional Description section for input/output assignment)
    using SEL93 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel46Fields

  struct XBARA1_SEL46 : ftl::mmio::Register<
      0x4003C05Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel46Fields::SEL92,
      Xbara1Sel46Fields::SEL93> {
    using SEL92 = Xbara1Sel46Fields::SEL92;
    using SEL93 = Xbara1Sel46Fields::SEL93;
  };

  // Crossbar A Select Register 47
  struct Xbara1Sel47Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT94 (refer to Functional Description section for input/output assignment)
    using SEL94 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT95 (refer to Functional Description section for input/output assignment)
    using SEL95 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel47Fields

  struct XBARA1_SEL47 : ftl::mmio::Register<
      0x4003C05Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel47Fields::SEL94,
      Xbara1Sel47Fields::SEL95> {
    using SEL94 = Xbara1Sel47Fields::SEL94;
    using SEL95 = Xbara1Sel47Fields::SEL95;
  };

  // Crossbar A Select Register 48
  struct Xbara1Sel48Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT96 (refer to Functional Description section for input/output assignment)
    using SEL96 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT97 (refer to Functional Description section for input/output assignment)
    using SEL97 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel48Fields

  struct XBARA1_SEL48 : ftl::mmio::Register<
      0x4003C060u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel48Fields::SEL96,
      Xbara1Sel48Fields::SEL97> {
    using SEL96 = Xbara1Sel48Fields::SEL96;
    using SEL97 = Xbara1Sel48Fields::SEL97;
  };

  // Crossbar A Select Register 49
  struct Xbara1Sel49Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT98 (refer to Functional Description section for input/output assignment)
    using SEL98 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT99 (refer to Functional Description section for input/output assignment)
    using SEL99 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel49Fields

  struct XBARA1_SEL49 : ftl::mmio::Register<
      0x4003C062u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel49Fields::SEL98,
      Xbara1Sel49Fields::SEL99> {
    using SEL98 = Xbara1Sel49Fields::SEL98;
    using SEL99 = Xbara1Sel49Fields::SEL99;
  };

  // Crossbar A Select Register 50
  struct Xbara1Sel50Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT100 (refer to Functional Description section for input/output assignment)
    using SEL100 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT101 (refer to Functional Description section for input/output assignment)
    using SEL101 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel50Fields

  struct XBARA1_SEL50 : ftl::mmio::Register<
      0x4003C064u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel50Fields::SEL100,
      Xbara1Sel50Fields::SEL101> {
    using SEL100 = Xbara1Sel50Fields::SEL100;
    using SEL101 = Xbara1Sel50Fields::SEL101;
  };

  // Crossbar A Select Register 51
  struct Xbara1Sel51Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT102 (refer to Functional Description section for input/output assignment)
    using SEL102 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT103 (refer to Functional Description section for input/output assignment)
    using SEL103 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel51Fields

  struct XBARA1_SEL51 : ftl::mmio::Register<
      0x4003C066u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel51Fields::SEL102,
      Xbara1Sel51Fields::SEL103> {
    using SEL102 = Xbara1Sel51Fields::SEL102;
    using SEL103 = Xbara1Sel51Fields::SEL103;
  };

  // Crossbar A Select Register 52
  struct Xbara1Sel52Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT104 (refer to Functional Description section for input/output assignment)
    using SEL104 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT105 (refer to Functional Description section for input/output assignment)
    using SEL105 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel52Fields

  struct XBARA1_SEL52 : ftl::mmio::Register<
      0x4003C068u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel52Fields::SEL104,
      Xbara1Sel52Fields::SEL105> {
    using SEL104 = Xbara1Sel52Fields::SEL104;
    using SEL105 = Xbara1Sel52Fields::SEL105;
  };

  // Crossbar A Select Register 53
  struct Xbara1Sel53Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT106 (refer to Functional Description section for input/output assignment)
    using SEL106 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT107 (refer to Functional Description section for input/output assignment)
    using SEL107 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel53Fields

  struct XBARA1_SEL53 : ftl::mmio::Register<
      0x4003C06Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel53Fields::SEL106,
      Xbara1Sel53Fields::SEL107> {
    using SEL106 = Xbara1Sel53Fields::SEL106;
    using SEL107 = Xbara1Sel53Fields::SEL107;
  };

  // Crossbar A Select Register 54
  struct Xbara1Sel54Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT108 (refer to Functional Description section for input/output assignment)
    using SEL108 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT109 (refer to Functional Description section for input/output assignment)
    using SEL109 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel54Fields

  struct XBARA1_SEL54 : ftl::mmio::Register<
      0x4003C06Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel54Fields::SEL108,
      Xbara1Sel54Fields::SEL109> {
    using SEL108 = Xbara1Sel54Fields::SEL108;
    using SEL109 = Xbara1Sel54Fields::SEL109;
  };

  // Crossbar A Select Register 55
  struct Xbara1Sel55Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT110 (refer to Functional Description section for input/output assignment)
    using SEL110 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT111 (refer to Functional Description section for input/output assignment)
    using SEL111 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel55Fields

  struct XBARA1_SEL55 : ftl::mmio::Register<
      0x4003C06Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel55Fields::SEL110,
      Xbara1Sel55Fields::SEL111> {
    using SEL110 = Xbara1Sel55Fields::SEL110;
    using SEL111 = Xbara1Sel55Fields::SEL111;
  };

  // Crossbar A Select Register 56
  struct Xbara1Sel56Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT112 (refer to Functional Description section for input/output assignment)
    using SEL112 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT113 (refer to Functional Description section for input/output assignment)
    using SEL113 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel56Fields

  struct XBARA1_SEL56 : ftl::mmio::Register<
      0x4003C070u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel56Fields::SEL112,
      Xbara1Sel56Fields::SEL113> {
    using SEL112 = Xbara1Sel56Fields::SEL112;
    using SEL113 = Xbara1Sel56Fields::SEL113;
  };

  // Crossbar A Select Register 57
  struct Xbara1Sel57Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT114 (refer to Functional Description section for input/output assignment)
    using SEL114 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT115 (refer to Functional Description section for input/output assignment)
    using SEL115 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel57Fields

  struct XBARA1_SEL57 : ftl::mmio::Register<
      0x4003C072u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel57Fields::SEL114,
      Xbara1Sel57Fields::SEL115> {
    using SEL114 = Xbara1Sel57Fields::SEL114;
    using SEL115 = Xbara1Sel57Fields::SEL115;
  };

  // Crossbar A Select Register 58
  struct Xbara1Sel58Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT116 (refer to Functional Description section for input/output assignment)
    using SEL116 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT117 (refer to Functional Description section for input/output assignment)
    using SEL117 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel58Fields

  struct XBARA1_SEL58 : ftl::mmio::Register<
      0x4003C074u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel58Fields::SEL116,
      Xbara1Sel58Fields::SEL117> {
    using SEL116 = Xbara1Sel58Fields::SEL116;
    using SEL117 = Xbara1Sel58Fields::SEL117;
  };

  // Crossbar A Select Register 59
  struct Xbara1Sel59Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT118 (refer to Functional Description section for input/output assignment)
    using SEL118 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT119 (refer to Functional Description section for input/output assignment)
    using SEL119 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel59Fields

  struct XBARA1_SEL59 : ftl::mmio::Register<
      0x4003C076u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel59Fields::SEL118,
      Xbara1Sel59Fields::SEL119> {
    using SEL118 = Xbara1Sel59Fields::SEL118;
    using SEL119 = Xbara1Sel59Fields::SEL119;
  };

  // Crossbar A Select Register 60
  struct Xbara1Sel60Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT120 (refer to Functional Description section for input/output assignment)
    using SEL120 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT121 (refer to Functional Description section for input/output assignment)
    using SEL121 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel60Fields

  struct XBARA1_SEL60 : ftl::mmio::Register<
      0x4003C078u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel60Fields::SEL120,
      Xbara1Sel60Fields::SEL121> {
    using SEL120 = Xbara1Sel60Fields::SEL120;
    using SEL121 = Xbara1Sel60Fields::SEL121;
  };

  // Crossbar A Select Register 61
  struct Xbara1Sel61Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT122 (refer to Functional Description section for input/output assignment)
    using SEL122 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT123 (refer to Functional Description section for input/output assignment)
    using SEL123 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel61Fields

  struct XBARA1_SEL61 : ftl::mmio::Register<
      0x4003C07Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel61Fields::SEL122,
      Xbara1Sel61Fields::SEL123> {
    using SEL122 = Xbara1Sel61Fields::SEL122;
    using SEL123 = Xbara1Sel61Fields::SEL123;
  };

  // Crossbar A Select Register 62
  struct Xbara1Sel62Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT124 (refer to Functional Description section for input/output assignment)
    using SEL124 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT125 (refer to Functional Description section for input/output assignment)
    using SEL125 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel62Fields

  struct XBARA1_SEL62 : ftl::mmio::Register<
      0x4003C07Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel62Fields::SEL124,
      Xbara1Sel62Fields::SEL125> {
    using SEL124 = Xbara1Sel62Fields::SEL124;
    using SEL125 = Xbara1Sel62Fields::SEL125;
  };

  // Crossbar A Select Register 63
  struct Xbara1Sel63Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT126 (refer to Functional Description section for input/output assignment)
    using SEL126 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT127 (refer to Functional Description section for input/output assignment)
    using SEL127 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel63Fields

  struct XBARA1_SEL63 : ftl::mmio::Register<
      0x4003C07Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel63Fields::SEL126,
      Xbara1Sel63Fields::SEL127> {
    using SEL126 = Xbara1Sel63Fields::SEL126;
    using SEL127 = Xbara1Sel63Fields::SEL127;
  };

  // Crossbar A Select Register 64
  struct Xbara1Sel64Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT128 (refer to Functional Description section for input/output assignment)
    using SEL128 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT129 (refer to Functional Description section for input/output assignment)
    using SEL129 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel64Fields

  struct XBARA1_SEL64 : ftl::mmio::Register<
      0x4003C080u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel64Fields::SEL128,
      Xbara1Sel64Fields::SEL129> {
    using SEL128 = Xbara1Sel64Fields::SEL128;
    using SEL129 = Xbara1Sel64Fields::SEL129;
  };

  // Crossbar A Select Register 65
  struct Xbara1Sel65Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT130 (refer to Functional Description section for input/output assignment)
    using SEL130 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT131 (refer to Functional Description section for input/output assignment)
    using SEL131 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel65Fields

  struct XBARA1_SEL65 : ftl::mmio::Register<
      0x4003C082u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel65Fields::SEL130,
      Xbara1Sel65Fields::SEL131> {
    using SEL130 = Xbara1Sel65Fields::SEL130;
    using SEL131 = Xbara1Sel65Fields::SEL131;
  };

  // Crossbar A Select Register 66
  struct Xbara1Sel66Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT132 (refer to Functional Description section for input/output assignment)
    using SEL132 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT133 (refer to Functional Description section for input/output assignment)
    using SEL133 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel66Fields

  struct XBARA1_SEL66 : ftl::mmio::Register<
      0x4003C084u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel66Fields::SEL132,
      Xbara1Sel66Fields::SEL133> {
    using SEL132 = Xbara1Sel66Fields::SEL132;
    using SEL133 = Xbara1Sel66Fields::SEL133;
  };

  // Crossbar A Select Register 67
  struct Xbara1Sel67Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT134 (refer to Functional Description section for input/output assignment)
    using SEL134 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT135 (refer to Functional Description section for input/output assignment)
    using SEL135 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel67Fields

  struct XBARA1_SEL67 : ftl::mmio::Register<
      0x4003C086u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel67Fields::SEL134,
      Xbara1Sel67Fields::SEL135> {
    using SEL134 = Xbara1Sel67Fields::SEL134;
    using SEL135 = Xbara1Sel67Fields::SEL135;
  };

  // Crossbar A Select Register 68
  struct Xbara1Sel68Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT136 (refer to Functional Description section for input/output assignment)
    using SEL136 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT137 (refer to Functional Description section for input/output assignment)
    using SEL137 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel68Fields

  struct XBARA1_SEL68 : ftl::mmio::Register<
      0x4003C088u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel68Fields::SEL136,
      Xbara1Sel68Fields::SEL137> {
    using SEL136 = Xbara1Sel68Fields::SEL136;
    using SEL137 = Xbara1Sel68Fields::SEL137;
  };

  // Crossbar A Select Register 69
  struct Xbara1Sel69Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT138 (refer to Functional Description section for input/output assignment)
    using SEL138 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT139 (refer to Functional Description section for input/output assignment)
    using SEL139 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel69Fields

  struct XBARA1_SEL69 : ftl::mmio::Register<
      0x4003C08Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel69Fields::SEL138,
      Xbara1Sel69Fields::SEL139> {
    using SEL138 = Xbara1Sel69Fields::SEL138;
    using SEL139 = Xbara1Sel69Fields::SEL139;
  };

  // Crossbar A Select Register 70
  struct Xbara1Sel70Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT140 (refer to Functional Description section for input/output assignment)
    using SEL140 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT141 (refer to Functional Description section for input/output assignment)
    using SEL141 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel70Fields

  struct XBARA1_SEL70 : ftl::mmio::Register<
      0x4003C08Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel70Fields::SEL140,
      Xbara1Sel70Fields::SEL141> {
    using SEL140 = Xbara1Sel70Fields::SEL140;
    using SEL141 = Xbara1Sel70Fields::SEL141;
  };

  // Crossbar A Select Register 71
  struct Xbara1Sel71Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT142 (refer to Functional Description section for input/output assignment)
    using SEL142 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT143 (refer to Functional Description section for input/output assignment)
    using SEL143 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel71Fields

  struct XBARA1_SEL71 : ftl::mmio::Register<
      0x4003C08Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel71Fields::SEL142,
      Xbara1Sel71Fields::SEL143> {
    using SEL142 = Xbara1Sel71Fields::SEL142;
    using SEL143 = Xbara1Sel71Fields::SEL143;
  };

  // Crossbar A Select Register 72
  struct Xbara1Sel72Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT144 (refer to Functional Description section for input/output assignment)
    using SEL144 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT145 (refer to Functional Description section for input/output assignment)
    using SEL145 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel72Fields

  struct XBARA1_SEL72 : ftl::mmio::Register<
      0x4003C090u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel72Fields::SEL144,
      Xbara1Sel72Fields::SEL145> {
    using SEL144 = Xbara1Sel72Fields::SEL144;
    using SEL145 = Xbara1Sel72Fields::SEL145;
  };

  // Crossbar A Select Register 73
  struct Xbara1Sel73Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT146 (refer to Functional Description section for input/output assignment)
    using SEL146 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT147 (refer to Functional Description section for input/output assignment)
    using SEL147 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel73Fields

  struct XBARA1_SEL73 : ftl::mmio::Register<
      0x4003C092u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel73Fields::SEL146,
      Xbara1Sel73Fields::SEL147> {
    using SEL146 = Xbara1Sel73Fields::SEL146;
    using SEL147 = Xbara1Sel73Fields::SEL147;
  };

  // Crossbar A Select Register 74
  struct Xbara1Sel74Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT148 (refer to Functional Description section for input/output assignment)
    using SEL148 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT149 (refer to Functional Description section for input/output assignment)
    using SEL149 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel74Fields

  struct XBARA1_SEL74 : ftl::mmio::Register<
      0x4003C094u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel74Fields::SEL148,
      Xbara1Sel74Fields::SEL149> {
    using SEL148 = Xbara1Sel74Fields::SEL148;
    using SEL149 = Xbara1Sel74Fields::SEL149;
  };

  // Crossbar A Select Register 75
  struct Xbara1Sel75Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT150 (refer to Functional Description section for input/output assignment)
    using SEL150 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT151 (refer to Functional Description section for input/output assignment)
    using SEL151 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel75Fields

  struct XBARA1_SEL75 : ftl::mmio::Register<
      0x4003C096u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel75Fields::SEL150,
      Xbara1Sel75Fields::SEL151> {
    using SEL150 = Xbara1Sel75Fields::SEL150;
    using SEL151 = Xbara1Sel75Fields::SEL151;
  };

  // Crossbar A Select Register 76
  struct Xbara1Sel76Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT152 (refer to Functional Description section for input/output assignment)
    using SEL152 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT153 (refer to Functional Description section for input/output assignment)
    using SEL153 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel76Fields

  struct XBARA1_SEL76 : ftl::mmio::Register<
      0x4003C098u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel76Fields::SEL152,
      Xbara1Sel76Fields::SEL153> {
    using SEL152 = Xbara1Sel76Fields::SEL152;
    using SEL153 = Xbara1Sel76Fields::SEL153;
  };

  // Crossbar A Select Register 77
  struct Xbara1Sel77Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT154 (refer to Functional Description section for input/output assignment)
    using SEL154 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT155 (refer to Functional Description section for input/output assignment)
    using SEL155 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel77Fields

  struct XBARA1_SEL77 : ftl::mmio::Register<
      0x4003C09Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel77Fields::SEL154,
      Xbara1Sel77Fields::SEL155> {
    using SEL154 = Xbara1Sel77Fields::SEL154;
    using SEL155 = Xbara1Sel77Fields::SEL155;
  };

  // Crossbar A Select Register 78
  struct Xbara1Sel78Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT156 (refer to Functional Description section for input/output assignment)
    using SEL156 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT157 (refer to Functional Description section for input/output assignment)
    using SEL157 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel78Fields

  struct XBARA1_SEL78 : ftl::mmio::Register<
      0x4003C09Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel78Fields::SEL156,
      Xbara1Sel78Fields::SEL157> {
    using SEL156 = Xbara1Sel78Fields::SEL156;
    using SEL157 = Xbara1Sel78Fields::SEL157;
  };

  // Crossbar A Select Register 79
  struct Xbara1Sel79Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT158 (refer to Functional Description section for input/output assignment)
    using SEL158 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT159 (refer to Functional Description section for input/output assignment)
    using SEL159 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel79Fields

  struct XBARA1_SEL79 : ftl::mmio::Register<
      0x4003C09Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel79Fields::SEL158,
      Xbara1Sel79Fields::SEL159> {
    using SEL158 = Xbara1Sel79Fields::SEL158;
    using SEL159 = Xbara1Sel79Fields::SEL159;
  };

  // Crossbar A Select Register 80
  struct Xbara1Sel80Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT160 (refer to Functional Description section for input/output assignment)
    using SEL160 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT161 (refer to Functional Description section for input/output assignment)
    using SEL161 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel80Fields

  struct XBARA1_SEL80 : ftl::mmio::Register<
      0x4003C0A0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel80Fields::SEL160,
      Xbara1Sel80Fields::SEL161> {
    using SEL160 = Xbara1Sel80Fields::SEL160;
    using SEL161 = Xbara1Sel80Fields::SEL161;
  };

  // Crossbar A Select Register 81
  struct Xbara1Sel81Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT162 (refer to Functional Description section for input/output assignment)
    using SEL162 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT163 (refer to Functional Description section for input/output assignment)
    using SEL163 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel81Fields

  struct XBARA1_SEL81 : ftl::mmio::Register<
      0x4003C0A2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel81Fields::SEL162,
      Xbara1Sel81Fields::SEL163> {
    using SEL162 = Xbara1Sel81Fields::SEL162;
    using SEL163 = Xbara1Sel81Fields::SEL163;
  };

  // Crossbar A Select Register 82
  struct Xbara1Sel82Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT164 (refer to Functional Description section for input/output assignment)
    using SEL164 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT165 (refer to Functional Description section for input/output assignment)
    using SEL165 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel82Fields

  struct XBARA1_SEL82 : ftl::mmio::Register<
      0x4003C0A4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel82Fields::SEL164,
      Xbara1Sel82Fields::SEL165> {
    using SEL164 = Xbara1Sel82Fields::SEL164;
    using SEL165 = Xbara1Sel82Fields::SEL165;
  };

  // Crossbar A Select Register 83
  struct Xbara1Sel83Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT166 (refer to Functional Description section for input/output assignment)
    using SEL166 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT167 (refer to Functional Description section for input/output assignment)
    using SEL167 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel83Fields

  struct XBARA1_SEL83 : ftl::mmio::Register<
      0x4003C0A6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel83Fields::SEL166,
      Xbara1Sel83Fields::SEL167> {
    using SEL166 = Xbara1Sel83Fields::SEL166;
    using SEL167 = Xbara1Sel83Fields::SEL167;
  };

  // Crossbar A Select Register 84
  struct Xbara1Sel84Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT168 (refer to Functional Description section for input/output assignment)
    using SEL168 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT169 (refer to Functional Description section for input/output assignment)
    using SEL169 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel84Fields

  struct XBARA1_SEL84 : ftl::mmio::Register<
      0x4003C0A8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel84Fields::SEL168,
      Xbara1Sel84Fields::SEL169> {
    using SEL168 = Xbara1Sel84Fields::SEL168;
    using SEL169 = Xbara1Sel84Fields::SEL169;
  };

  // Crossbar A Select Register 85
  struct Xbara1Sel85Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT170 (refer to Functional Description section for input/output assignment)
    using SEL170 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT171 (refer to Functional Description section for input/output assignment)
    using SEL171 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel85Fields

  struct XBARA1_SEL85 : ftl::mmio::Register<
      0x4003C0AAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel85Fields::SEL170,
      Xbara1Sel85Fields::SEL171> {
    using SEL170 = Xbara1Sel85Fields::SEL170;
    using SEL171 = Xbara1Sel85Fields::SEL171;
  };

  // Crossbar A Select Register 86
  struct Xbara1Sel86Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT172 (refer to Functional Description section for input/output assignment)
    using SEL172 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT173 (refer to Functional Description section for input/output assignment)
    using SEL173 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel86Fields

  struct XBARA1_SEL86 : ftl::mmio::Register<
      0x4003C0ACu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel86Fields::SEL172,
      Xbara1Sel86Fields::SEL173> {
    using SEL172 = Xbara1Sel86Fields::SEL172;
    using SEL173 = Xbara1Sel86Fields::SEL173;
  };

  // Crossbar A Select Register 87
  struct Xbara1Sel87Fields {
    // Input (XBARA_INn) to be muxed to XBARA_OUT174 (refer to Functional Description section for input/output assignment)
    using SEL174 = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input (XBARA_INn) to be muxed to XBARA_OUT175 (refer to Functional Description section for input/output assignment)
    using SEL175 = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbara1Sel87Fields

  struct XBARA1_SEL87 : ftl::mmio::Register<
      0x4003C0AEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Sel87Fields::SEL174,
      Xbara1Sel87Fields::SEL175> {
    using SEL174 = Xbara1Sel87Fields::SEL174;
    using SEL175 = Xbara1Sel87Fields::SEL175;
  };

  // Crossbar A Control Register 0
  struct Xbara1Ctrl0Fields {
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
  };  // struct Xbara1Ctrl0Fields

  struct XBARA1_CTRL0 : ftl::mmio::Register<
      0x4003C0B0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Ctrl0Fields::DEN0,
      Xbara1Ctrl0Fields::IEN0,
      Xbara1Ctrl0Fields::EDGE0,
      Xbara1Ctrl0Fields::STS0,
      ftl::mmio::Reserved<3, 5>,
      Xbara1Ctrl0Fields::DEN1,
      Xbara1Ctrl0Fields::IEN1,
      Xbara1Ctrl0Fields::EDGE1,
      Xbara1Ctrl0Fields::STS1,
      ftl::mmio::Reserved<3, 13>> {
    using eDEN0 = Xbara1Ctrl0Fields::eDEN0;
    using eIEN0 = Xbara1Ctrl0Fields::eIEN0;
    using eEDGE0 = Xbara1Ctrl0Fields::eEDGE0;
    using eSTS0 = Xbara1Ctrl0Fields::eSTS0;
    using eDEN1 = Xbara1Ctrl0Fields::eDEN1;
    using eIEN1 = Xbara1Ctrl0Fields::eIEN1;
    using eEDGE1 = Xbara1Ctrl0Fields::eEDGE1;
    using eSTS1 = Xbara1Ctrl0Fields::eSTS1;
    using DEN0 = Xbara1Ctrl0Fields::DEN0;
    using IEN0 = Xbara1Ctrl0Fields::IEN0;
    using EDGE0 = Xbara1Ctrl0Fields::EDGE0;
    using STS0 = Xbara1Ctrl0Fields::STS0;
    using DEN1 = Xbara1Ctrl0Fields::DEN1;
    using IEN1 = Xbara1Ctrl0Fields::IEN1;
    using EDGE1 = Xbara1Ctrl0Fields::EDGE1;
    using STS1 = Xbara1Ctrl0Fields::STS1;
  };

  // Crossbar A Control Register 1
  struct Xbara1Ctrl1Fields {
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
  };  // struct Xbara1Ctrl1Fields

  struct XBARA1_CTRL1 : ftl::mmio::Register<
      0x4003C0B2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      Xbara1Ctrl1Fields::DEN2,
      Xbara1Ctrl1Fields::IEN2,
      Xbara1Ctrl1Fields::EDGE2,
      Xbara1Ctrl1Fields::STS2,
      ftl::mmio::Reserved<3, 5>,
      Xbara1Ctrl1Fields::DEN3,
      Xbara1Ctrl1Fields::IEN3,
      Xbara1Ctrl1Fields::EDGE3,
      Xbara1Ctrl1Fields::STS3,
      ftl::mmio::Reserved<3, 13>> {
    using eDEN2 = Xbara1Ctrl1Fields::eDEN2;
    using eIEN2 = Xbara1Ctrl1Fields::eIEN2;
    using eEDGE2 = Xbara1Ctrl1Fields::eEDGE2;
    using eSTS2 = Xbara1Ctrl1Fields::eSTS2;
    using eDEN3 = Xbara1Ctrl1Fields::eDEN3;
    using eIEN3 = Xbara1Ctrl1Fields::eIEN3;
    using eEDGE3 = Xbara1Ctrl1Fields::eEDGE3;
    using eSTS3 = Xbara1Ctrl1Fields::eSTS3;
    using DEN2 = Xbara1Ctrl1Fields::DEN2;
    using IEN2 = Xbara1Ctrl1Fields::IEN2;
    using EDGE2 = Xbara1Ctrl1Fields::EDGE2;
    using STS2 = Xbara1Ctrl1Fields::STS2;
    using DEN3 = Xbara1Ctrl1Fields::DEN3;
    using IEN3 = Xbara1Ctrl1Fields::IEN3;
    using EDGE3 = Xbara1Ctrl1Fields::EDGE3;
    using STS3 = Xbara1Ctrl1Fields::STS3;
  };

};

}  // namespace regs