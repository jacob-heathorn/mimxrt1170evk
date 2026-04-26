#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Gpio {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u || Instance == 7u || Instance == 8u || Instance == 9u || Instance == 10u || Instance == 11u || Instance == 12u || Instance == 13u,
        "Gpio: Instance must be one of 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x4012C000u :
      Instance == 2u ? 0x40130000u :
      Instance == 3u ? 0x40134000u :
      Instance == 4u ? 0x40138000u :
      Instance == 5u ? 0x4013C000u :
      Instance == 6u ? 0x40140000u :
      Instance == 7u ? 0x40C5C000u :
      Instance == 8u ? 0x40C60000u :
      Instance == 9u ? 0x40C64000u :
      Instance == 10u ? 0x40C68000u :
      Instance == 11u ? 0x40C6C000u :
      Instance == 12u ? 0x40C70000u :
      Instance == 13u ? 0x40CA0000u :
      0u;

  // GPIO data register
  struct DrFields {
    // DR data bits
    using DR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DrFields

  struct DR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DrFields::DR> {
    using VALUE = typename DrFields::DR;
  };

  // GPIO direction register
  struct GdirFields {
    // GPIO direction bits
    using GDIR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GdirFields

  struct GDIR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename GdirFields::GDIR> {
    using VALUE = typename GdirFields::GDIR;
  };

  // GPIO pad status register
  struct PsrFields {
    // GPIO pad status bits
    using PSR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PsrFields

  struct PSR : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename PsrFields::PSR> {
    using VALUE = typename PsrFields::PSR;
  };

  // GPIO interrupt configuration register1
  struct Icr1Fields {
    enum class eICR0 : std::uint32_t {
      // Interrupt 0 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 0 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 0 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 0 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR1 : std::uint32_t {
      // Interrupt 1 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 1 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 1 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 1 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR2 : std::uint32_t {
      // Interrupt 2 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 2 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 2 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 2 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR3 : std::uint32_t {
      // Interrupt 3 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 3 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 3 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 3 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR4 : std::uint32_t {
      // Interrupt 4 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 4 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 4 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 4 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR5 : std::uint32_t {
      // Interrupt 5 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 5 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 5 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 5 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR6 : std::uint32_t {
      // Interrupt 6 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 6 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 6 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 6 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR7 : std::uint32_t {
      // Interrupt 7 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 7 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 7 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 7 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR8 : std::uint32_t {
      // Interrupt 8 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 8 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 8 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 8 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR9 : std::uint32_t {
      // Interrupt 9 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 9 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 9 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 9 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR10 : std::uint32_t {
      // Interrupt 10 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 10 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 10 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 10 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR11 : std::uint32_t {
      // Interrupt 11 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 11 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 11 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 11 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR12 : std::uint32_t {
      // Interrupt 12 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 12 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 12 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 12 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR13 : std::uint32_t {
      // Interrupt 13 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 13 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 13 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 13 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR14 : std::uint32_t {
      // Interrupt 14 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 14 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 14 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 14 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR15 : std::uint32_t {
      // Interrupt 15 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 15 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 15 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 15 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    // Interrupt configuration field for GPIO interrupt 0
    using ICR0 = ftl::mmio::Field<2, 0, eICR0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 1
    using ICR1 = ftl::mmio::Field<2, 2, eICR1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 2
    using ICR2 = ftl::mmio::Field<2, 4, eICR2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 3
    using ICR3 = ftl::mmio::Field<2, 6, eICR3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 4
    using ICR4 = ftl::mmio::Field<2, 8, eICR4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 5
    using ICR5 = ftl::mmio::Field<2, 10, eICR5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 6
    using ICR6 = ftl::mmio::Field<2, 12, eICR6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 7
    using ICR7 = ftl::mmio::Field<2, 14, eICR7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 8
    using ICR8 = ftl::mmio::Field<2, 16, eICR8, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 9
    using ICR9 = ftl::mmio::Field<2, 18, eICR9, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 10
    using ICR10 = ftl::mmio::Field<2, 20, eICR10, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 11
    using ICR11 = ftl::mmio::Field<2, 22, eICR11, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 12
    using ICR12 = ftl::mmio::Field<2, 24, eICR12, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 13
    using ICR13 = ftl::mmio::Field<2, 26, eICR13, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 14
    using ICR14 = ftl::mmio::Field<2, 28, eICR14, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 15
    using ICR15 = ftl::mmio::Field<2, 30, eICR15, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Icr1Fields

  struct ICR1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Icr1Fields::ICR0,
      typename Icr1Fields::ICR1,
      typename Icr1Fields::ICR2,
      typename Icr1Fields::ICR3,
      typename Icr1Fields::ICR4,
      typename Icr1Fields::ICR5,
      typename Icr1Fields::ICR6,
      typename Icr1Fields::ICR7,
      typename Icr1Fields::ICR8,
      typename Icr1Fields::ICR9,
      typename Icr1Fields::ICR10,
      typename Icr1Fields::ICR11,
      typename Icr1Fields::ICR12,
      typename Icr1Fields::ICR13,
      typename Icr1Fields::ICR14,
      typename Icr1Fields::ICR15> {
    using eICR0 = typename Icr1Fields::eICR0;
    using eICR1 = typename Icr1Fields::eICR1;
    using eICR2 = typename Icr1Fields::eICR2;
    using eICR3 = typename Icr1Fields::eICR3;
    using eICR4 = typename Icr1Fields::eICR4;
    using eICR5 = typename Icr1Fields::eICR5;
    using eICR6 = typename Icr1Fields::eICR6;
    using eICR7 = typename Icr1Fields::eICR7;
    using eICR8 = typename Icr1Fields::eICR8;
    using eICR9 = typename Icr1Fields::eICR9;
    using eICR10 = typename Icr1Fields::eICR10;
    using eICR11 = typename Icr1Fields::eICR11;
    using eICR12 = typename Icr1Fields::eICR12;
    using eICR13 = typename Icr1Fields::eICR13;
    using eICR14 = typename Icr1Fields::eICR14;
    using eICR15 = typename Icr1Fields::eICR15;
    using ICR0 = typename Icr1Fields::ICR0;
    using VALUE = typename Icr1Fields::ICR1;
    using ICR2 = typename Icr1Fields::ICR2;
    using ICR3 = typename Icr1Fields::ICR3;
    using ICR4 = typename Icr1Fields::ICR4;
    using ICR5 = typename Icr1Fields::ICR5;
    using ICR6 = typename Icr1Fields::ICR6;
    using ICR7 = typename Icr1Fields::ICR7;
    using ICR8 = typename Icr1Fields::ICR8;
    using ICR9 = typename Icr1Fields::ICR9;
    using ICR10 = typename Icr1Fields::ICR10;
    using ICR11 = typename Icr1Fields::ICR11;
    using ICR12 = typename Icr1Fields::ICR12;
    using ICR13 = typename Icr1Fields::ICR13;
    using ICR14 = typename Icr1Fields::ICR14;
    using ICR15 = typename Icr1Fields::ICR15;
  };

  // GPIO interrupt configuration register2
  struct Icr2Fields {
    enum class eICR16 : std::uint32_t {
      // Interrupt 16 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 16 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 16 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 16 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR17 : std::uint32_t {
      // Interrupt 17 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 17 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 17 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 17 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR18 : std::uint32_t {
      // Interrupt 18 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 18 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 18 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 18 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR19 : std::uint32_t {
      // Interrupt 19 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 19 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 19 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 19 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR20 : std::uint32_t {
      // Interrupt 20 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 20 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 20 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 20 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR21 : std::uint32_t {
      // Interrupt 21 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 21 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 21 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 21 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR22 : std::uint32_t {
      // Interrupt 22 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 22 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 22 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 22 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR23 : std::uint32_t {
      // Interrupt 23 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 23 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 23 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 23 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR24 : std::uint32_t {
      // Interrupt 24 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 24 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 24 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 24 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR25 : std::uint32_t {
      // Interrupt 25 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 25 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 25 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 25 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR26 : std::uint32_t {
      // Interrupt 26 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 26 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 26 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 26 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR27 : std::uint32_t {
      // Interrupt 27 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 27 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 27 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 27 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR28 : std::uint32_t {
      // Interrupt 28 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 28 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 28 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 28 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR29 : std::uint32_t {
      // Interrupt 29 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 29 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 29 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 29 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR30 : std::uint32_t {
      // Interrupt 30 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 30 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 30 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 30 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    enum class eICR31 : std::uint32_t {
      // Interrupt 31 is low-level sensitive.
      eLOW_LEVEL = 0,
      // Interrupt 31 is high-level sensitive.
      eHIGH_LEVEL = 1,
      // Interrupt 31 is rising-edge sensitive.
      eRISING_EDGE = 2,
      // Interrupt 31 is falling-edge sensitive.
      eFALLING_EDGE = 3,
    };

    // Interrupt configuration field for GPIO interrupt 16
    using ICR16 = ftl::mmio::Field<2, 0, eICR16, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 17
    using ICR17 = ftl::mmio::Field<2, 2, eICR17, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 18
    using ICR18 = ftl::mmio::Field<2, 4, eICR18, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 19
    using ICR19 = ftl::mmio::Field<2, 6, eICR19, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 20
    using ICR20 = ftl::mmio::Field<2, 8, eICR20, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 21
    using ICR21 = ftl::mmio::Field<2, 10, eICR21, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 22
    using ICR22 = ftl::mmio::Field<2, 12, eICR22, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 23
    using ICR23 = ftl::mmio::Field<2, 14, eICR23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 24
    using ICR24 = ftl::mmio::Field<2, 16, eICR24, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 25
    using ICR25 = ftl::mmio::Field<2, 18, eICR25, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 26
    using ICR26 = ftl::mmio::Field<2, 20, eICR26, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 27
    using ICR27 = ftl::mmio::Field<2, 22, eICR27, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 28
    using ICR28 = ftl::mmio::Field<2, 24, eICR28, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 29
    using ICR29 = ftl::mmio::Field<2, 26, eICR29, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 30
    using ICR30 = ftl::mmio::Field<2, 28, eICR30, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt configuration field for GPIO interrupt 31
    using ICR31 = ftl::mmio::Field<2, 30, eICR31, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Icr2Fields

  struct ICR2 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Icr2Fields::ICR16,
      typename Icr2Fields::ICR17,
      typename Icr2Fields::ICR18,
      typename Icr2Fields::ICR19,
      typename Icr2Fields::ICR20,
      typename Icr2Fields::ICR21,
      typename Icr2Fields::ICR22,
      typename Icr2Fields::ICR23,
      typename Icr2Fields::ICR24,
      typename Icr2Fields::ICR25,
      typename Icr2Fields::ICR26,
      typename Icr2Fields::ICR27,
      typename Icr2Fields::ICR28,
      typename Icr2Fields::ICR29,
      typename Icr2Fields::ICR30,
      typename Icr2Fields::ICR31> {
    using eICR16 = typename Icr2Fields::eICR16;
    using eICR17 = typename Icr2Fields::eICR17;
    using eICR18 = typename Icr2Fields::eICR18;
    using eICR19 = typename Icr2Fields::eICR19;
    using eICR20 = typename Icr2Fields::eICR20;
    using eICR21 = typename Icr2Fields::eICR21;
    using eICR22 = typename Icr2Fields::eICR22;
    using eICR23 = typename Icr2Fields::eICR23;
    using eICR24 = typename Icr2Fields::eICR24;
    using eICR25 = typename Icr2Fields::eICR25;
    using eICR26 = typename Icr2Fields::eICR26;
    using eICR27 = typename Icr2Fields::eICR27;
    using eICR28 = typename Icr2Fields::eICR28;
    using eICR29 = typename Icr2Fields::eICR29;
    using eICR30 = typename Icr2Fields::eICR30;
    using eICR31 = typename Icr2Fields::eICR31;
    using ICR16 = typename Icr2Fields::ICR16;
    using ICR17 = typename Icr2Fields::ICR17;
    using ICR18 = typename Icr2Fields::ICR18;
    using ICR19 = typename Icr2Fields::ICR19;
    using ICR20 = typename Icr2Fields::ICR20;
    using ICR21 = typename Icr2Fields::ICR21;
    using ICR22 = typename Icr2Fields::ICR22;
    using ICR23 = typename Icr2Fields::ICR23;
    using ICR24 = typename Icr2Fields::ICR24;
    using ICR25 = typename Icr2Fields::ICR25;
    using ICR26 = typename Icr2Fields::ICR26;
    using ICR27 = typename Icr2Fields::ICR27;
    using ICR28 = typename Icr2Fields::ICR28;
    using ICR29 = typename Icr2Fields::ICR29;
    using ICR30 = typename Icr2Fields::ICR30;
    using ICR31 = typename Icr2Fields::ICR31;
  };

  // GPIO interrupt mask register
  struct ImrFields {
    // Interrupt Mask bits
    using IMR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ImrFields

  struct IMR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ImrFields::IMR> {
    using VALUE = typename ImrFields::IMR;
  };

  // GPIO interrupt status register
  struct IsrFields {
    // Interrupt status bits
    using ISR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IsrFields

  struct ISR : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IsrFields::ISR> {
    using VALUE = typename IsrFields::ISR;
  };

  // GPIO edge select register
  struct EdgeSelFields {
    // Edge select
    using GPIO_EDGE_SEL = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EdgeSelFields

  struct EDGE_SEL : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EdgeSelFields::GPIO_EDGE_SEL> {
    using GPIO_EDGE_SEL = typename EdgeSelFields::GPIO_EDGE_SEL;
  };

  // GPIO data register SET
  struct DrSetFields {
    // Set
    using DR_SET = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DrSetFields

  struct DR_SET : ftl::mmio::Register<
      kBase + 0x84u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename DrSetFields::DR_SET> {
    using VALUE = typename DrSetFields::DR_SET;
  };

  // GPIO data register CLEAR
  struct DrClearFields {
    // Clear
    using DR_CLEAR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DrClearFields

  struct DR_CLEAR : ftl::mmio::Register<
      kBase + 0x88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename DrClearFields::DR_CLEAR> {
    using VALUE = typename DrClearFields::DR_CLEAR;
  };

  // GPIO data register TOGGLE
  struct DrToggleFields {
    // Toggle
    using DR_TOGGLE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct DrToggleFields

  struct DR_TOGGLE : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::WO,
      typename DrToggleFields::DR_TOGGLE> {
    using VALUE = typename DrToggleFields::DR_TOGGLE;
  };

};

}  // namespace regs