#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Nested Vectored Interrupt Controller
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Cm4Nvic {
  // Interrupt Set Enable Register n
  struct Nviciser0Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser0Fields

  struct NVICISER0 : ftl::mmio::Register<
      0xE000E100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser0Fields::SETENA> {
    using SETENA = Nviciser0Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser1Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser1Fields

  struct NVICISER1 : ftl::mmio::Register<
      0xE000E104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser1Fields::SETENA> {
    using SETENA = Nviciser1Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser2Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser2Fields

  struct NVICISER2 : ftl::mmio::Register<
      0xE000E108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser2Fields::SETENA> {
    using SETENA = Nviciser2Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser3Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser3Fields

  struct NVICISER3 : ftl::mmio::Register<
      0xE000E10Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser3Fields::SETENA> {
    using SETENA = Nviciser3Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser4Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser4Fields

  struct NVICISER4 : ftl::mmio::Register<
      0xE000E110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser4Fields::SETENA> {
    using SETENA = Nviciser4Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser5Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser5Fields

  struct NVICISER5 : ftl::mmio::Register<
      0xE000E114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser5Fields::SETENA> {
    using SETENA = Nviciser5Fields::SETENA;
  };

  // Interrupt Set Enable Register n
  struct Nviciser6Fields {
    // Interrupt set enable bits
    using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nviciser6Fields

  struct NVICISER6 : ftl::mmio::Register<
      0xE000E118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciser6Fields::SETENA> {
    using SETENA = Nviciser6Fields::SETENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer0Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer0Fields

  struct NVICICER0 : ftl::mmio::Register<
      0xE000E180u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer0Fields::CLRENA> {
    using CLRENA = Nvicicer0Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer1Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer1Fields

  struct NVICICER1 : ftl::mmio::Register<
      0xE000E184u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer1Fields::CLRENA> {
    using CLRENA = Nvicicer1Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer2Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer2Fields

  struct NVICICER2 : ftl::mmio::Register<
      0xE000E188u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer2Fields::CLRENA> {
    using CLRENA = Nvicicer2Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer3Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer3Fields

  struct NVICICER3 : ftl::mmio::Register<
      0xE000E18Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer3Fields::CLRENA> {
    using CLRENA = Nvicicer3Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer4Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer4Fields

  struct NVICICER4 : ftl::mmio::Register<
      0xE000E190u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer4Fields::CLRENA> {
    using CLRENA = Nvicicer4Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer5Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer5Fields

  struct NVICICER5 : ftl::mmio::Register<
      0xE000E194u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer5Fields::CLRENA> {
    using CLRENA = Nvicicer5Fields::CLRENA;
  };

  // Interrupt Clear Enable Register n
  struct Nvicicer6Fields {
    // Interrupt clear-enable bits
    using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicer6Fields

  struct NVICICER6 : ftl::mmio::Register<
      0xE000E198u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicer6Fields::CLRENA> {
    using CLRENA = Nvicicer6Fields::CLRENA;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr0Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr0Fields

  struct NVICISPR0 : ftl::mmio::Register<
      0xE000E200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr0Fields::SETPEND> {
    using SETPEND = Nvicispr0Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr1Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr1Fields

  struct NVICISPR1 : ftl::mmio::Register<
      0xE000E204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr1Fields::SETPEND> {
    using SETPEND = Nvicispr1Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr2Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr2Fields

  struct NVICISPR2 : ftl::mmio::Register<
      0xE000E208u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr2Fields::SETPEND> {
    using SETPEND = Nvicispr2Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr3Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr3Fields

  struct NVICISPR3 : ftl::mmio::Register<
      0xE000E20Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr3Fields::SETPEND> {
    using SETPEND = Nvicispr3Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr4Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr4Fields

  struct NVICISPR4 : ftl::mmio::Register<
      0xE000E210u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr4Fields::SETPEND> {
    using SETPEND = Nvicispr4Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr5Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr5Fields

  struct NVICISPR5 : ftl::mmio::Register<
      0xE000E214u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr5Fields::SETPEND> {
    using SETPEND = Nvicispr5Fields::SETPEND;
  };

  // Interrupt Set Pending Register n
  struct Nvicispr6Fields {
    // Interrupt set-pending bits
    using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicispr6Fields

  struct NVICISPR6 : ftl::mmio::Register<
      0xE000E218u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicispr6Fields::SETPEND> {
    using SETPEND = Nvicispr6Fields::SETPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr0Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr0Fields

  struct NVICICPR0 : ftl::mmio::Register<
      0xE000E280u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr0Fields::CLRPEND> {
    using CLRPEND = Nvicicpr0Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr1Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr1Fields

  struct NVICICPR1 : ftl::mmio::Register<
      0xE000E284u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr1Fields::CLRPEND> {
    using CLRPEND = Nvicicpr1Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr2Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr2Fields

  struct NVICICPR2 : ftl::mmio::Register<
      0xE000E288u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr2Fields::CLRPEND> {
    using CLRPEND = Nvicicpr2Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr3Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr3Fields

  struct NVICICPR3 : ftl::mmio::Register<
      0xE000E28Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr3Fields::CLRPEND> {
    using CLRPEND = Nvicicpr3Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr4Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr4Fields

  struct NVICICPR4 : ftl::mmio::Register<
      0xE000E290u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr4Fields::CLRPEND> {
    using CLRPEND = Nvicicpr4Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr5Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr5Fields

  struct NVICICPR5 : ftl::mmio::Register<
      0xE000E294u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr5Fields::CLRPEND> {
    using CLRPEND = Nvicicpr5Fields::CLRPEND;
  };

  // Interrupt Clear Pending Register n
  struct Nvicicpr6Fields {
    // Interrupt clear-pending bits
    using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Nvicicpr6Fields

  struct NVICICPR6 : ftl::mmio::Register<
      0xE000E298u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nvicicpr6Fields::CLRPEND> {
    using CLRPEND = Nvicicpr6Fields::CLRPEND;
  };

  // Interrupt Active bit Register n
  struct Nviciabr0Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr0Fields

  struct NVICIABR0 : ftl::mmio::Register<
      0xE000E300u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr0Fields::ACTIVE> {
    using ACTIVE = Nviciabr0Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr1Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr1Fields

  struct NVICIABR1 : ftl::mmio::Register<
      0xE000E304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr1Fields::ACTIVE> {
    using ACTIVE = Nviciabr1Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr2Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr2Fields

  struct NVICIABR2 : ftl::mmio::Register<
      0xE000E308u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr2Fields::ACTIVE> {
    using ACTIVE = Nviciabr2Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr3Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr3Fields

  struct NVICIABR3 : ftl::mmio::Register<
      0xE000E30Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr3Fields::ACTIVE> {
    using ACTIVE = Nviciabr3Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr4Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr4Fields

  struct NVICIABR4 : ftl::mmio::Register<
      0xE000E310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr4Fields::ACTIVE> {
    using ACTIVE = Nviciabr4Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr5Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr5Fields

  struct NVICIABR5 : ftl::mmio::Register<
      0xE000E314u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr5Fields::ACTIVE> {
    using ACTIVE = Nviciabr5Fields::ACTIVE;
  };

  // Interrupt Active bit Register n
  struct Nviciabr6Fields {
    // Interrupt active flags
    using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nviciabr6Fields

  struct NVICIABR6 : ftl::mmio::Register<
      0xE000E318u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Nviciabr6Fields::ACTIVE> {
    using ACTIVE = Nviciabr6Fields::ACTIVE;
  };

  // Interrupt Priority Register 0
  struct Nvicip0Fields {
    // Priority of interrupt 0
    using PRI0 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip0Fields

  struct NVICIP0 : ftl::mmio::Register<
      0xE000E400u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip0Fields::PRI0> {
    using PRI0 = Nvicip0Fields::PRI0;
  };

  // Interrupt Priority Register 1
  struct Nvicip1Fields {
    // Priority of interrupt 1
    using PRI1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip1Fields

  struct NVICIP1 : ftl::mmio::Register<
      0xE000E401u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip1Fields::PRI1> {
    using PRI1 = Nvicip1Fields::PRI1;
  };

  // Interrupt Priority Register 2
  struct Nvicip2Fields {
    // Priority of interrupt 2
    using PRI2 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip2Fields

  struct NVICIP2 : ftl::mmio::Register<
      0xE000E402u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip2Fields::PRI2> {
    using PRI2 = Nvicip2Fields::PRI2;
  };

  // Interrupt Priority Register 3
  struct Nvicip3Fields {
    // Priority of interrupt 3
    using PRI3 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip3Fields

  struct NVICIP3 : ftl::mmio::Register<
      0xE000E403u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip3Fields::PRI3> {
    using PRI3 = Nvicip3Fields::PRI3;
  };

  // Interrupt Priority Register 4
  struct Nvicip4Fields {
    // Priority of interrupt 4
    using PRI4 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip4Fields

  struct NVICIP4 : ftl::mmio::Register<
      0xE000E404u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip4Fields::PRI4> {
    using PRI4 = Nvicip4Fields::PRI4;
  };

  // Interrupt Priority Register 5
  struct Nvicip5Fields {
    // Priority of interrupt 5
    using PRI5 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip5Fields

  struct NVICIP5 : ftl::mmio::Register<
      0xE000E405u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip5Fields::PRI5> {
    using PRI5 = Nvicip5Fields::PRI5;
  };

  // Interrupt Priority Register 6
  struct Nvicip6Fields {
    // Priority of interrupt 6
    using PRI6 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip6Fields

  struct NVICIP6 : ftl::mmio::Register<
      0xE000E406u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip6Fields::PRI6> {
    using PRI6 = Nvicip6Fields::PRI6;
  };

  // Interrupt Priority Register 7
  struct Nvicip7Fields {
    // Priority of interrupt 7
    using PRI7 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip7Fields

  struct NVICIP7 : ftl::mmio::Register<
      0xE000E407u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip7Fields::PRI7> {
    using PRI7 = Nvicip7Fields::PRI7;
  };

  // Interrupt Priority Register 8
  struct Nvicip8Fields {
    // Priority of interrupt 8
    using PRI8 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip8Fields

  struct NVICIP8 : ftl::mmio::Register<
      0xE000E408u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip8Fields::PRI8> {
    using PRI8 = Nvicip8Fields::PRI8;
  };

  // Interrupt Priority Register 9
  struct Nvicip9Fields {
    // Priority of interrupt 9
    using PRI9 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip9Fields

  struct NVICIP9 : ftl::mmio::Register<
      0xE000E409u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip9Fields::PRI9> {
    using PRI9 = Nvicip9Fields::PRI9;
  };

  // Interrupt Priority Register 10
  struct Nvicip10Fields {
    // Priority of interrupt 10
    using PRI10 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip10Fields

  struct NVICIP10 : ftl::mmio::Register<
      0xE000E40Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip10Fields::PRI10> {
    using PRI10 = Nvicip10Fields::PRI10;
  };

  // Interrupt Priority Register 11
  struct Nvicip11Fields {
    // Priority of interrupt 11
    using PRI11 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip11Fields

  struct NVICIP11 : ftl::mmio::Register<
      0xE000E40Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip11Fields::PRI11> {
    using PRI11 = Nvicip11Fields::PRI11;
  };

  // Interrupt Priority Register 12
  struct Nvicip12Fields {
    // Priority of interrupt 12
    using PRI12 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip12Fields

  struct NVICIP12 : ftl::mmio::Register<
      0xE000E40Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip12Fields::PRI12> {
    using PRI12 = Nvicip12Fields::PRI12;
  };

  // Interrupt Priority Register 13
  struct Nvicip13Fields {
    // Priority of interrupt 13
    using PRI13 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip13Fields

  struct NVICIP13 : ftl::mmio::Register<
      0xE000E40Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip13Fields::PRI13> {
    using PRI13 = Nvicip13Fields::PRI13;
  };

  // Interrupt Priority Register 14
  struct Nvicip14Fields {
    // Priority of interrupt 14
    using PRI14 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip14Fields

  struct NVICIP14 : ftl::mmio::Register<
      0xE000E40Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip14Fields::PRI14> {
    using PRI14 = Nvicip14Fields::PRI14;
  };

  // Interrupt Priority Register 15
  struct Nvicip15Fields {
    // Priority of interrupt 15
    using PRI15 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip15Fields

  struct NVICIP15 : ftl::mmio::Register<
      0xE000E40Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip15Fields::PRI15> {
    using PRI15 = Nvicip15Fields::PRI15;
  };

  // Interrupt Priority Register 16
  struct Nvicip16Fields {
    // Priority of interrupt 16
    using PRI16 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip16Fields

  struct NVICIP16 : ftl::mmio::Register<
      0xE000E410u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip16Fields::PRI16> {
    using PRI16 = Nvicip16Fields::PRI16;
  };

  // Interrupt Priority Register 17
  struct Nvicip17Fields {
    // Priority of interrupt 17
    using PRI17 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip17Fields

  struct NVICIP17 : ftl::mmio::Register<
      0xE000E411u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip17Fields::PRI17> {
    using PRI17 = Nvicip17Fields::PRI17;
  };

  // Interrupt Priority Register 18
  struct Nvicip18Fields {
    // Priority of interrupt 18
    using PRI18 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip18Fields

  struct NVICIP18 : ftl::mmio::Register<
      0xE000E412u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip18Fields::PRI18> {
    using PRI18 = Nvicip18Fields::PRI18;
  };

  // Interrupt Priority Register 19
  struct Nvicip19Fields {
    // Priority of interrupt 19
    using PRI19 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip19Fields

  struct NVICIP19 : ftl::mmio::Register<
      0xE000E413u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip19Fields::PRI19> {
    using PRI19 = Nvicip19Fields::PRI19;
  };

  // Interrupt Priority Register 20
  struct Nvicip20Fields {
    // Priority of interrupt 20
    using PRI20 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip20Fields

  struct NVICIP20 : ftl::mmio::Register<
      0xE000E414u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip20Fields::PRI20> {
    using PRI20 = Nvicip20Fields::PRI20;
  };

  // Interrupt Priority Register 21
  struct Nvicip21Fields {
    // Priority of interrupt 21
    using PRI21 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip21Fields

  struct NVICIP21 : ftl::mmio::Register<
      0xE000E415u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip21Fields::PRI21> {
    using PRI21 = Nvicip21Fields::PRI21;
  };

  // Interrupt Priority Register 22
  struct Nvicip22Fields {
    // Priority of interrupt 22
    using PRI22 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip22Fields

  struct NVICIP22 : ftl::mmio::Register<
      0xE000E416u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip22Fields::PRI22> {
    using PRI22 = Nvicip22Fields::PRI22;
  };

  // Interrupt Priority Register 23
  struct Nvicip23Fields {
    // Priority of interrupt 23
    using PRI23 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip23Fields

  struct NVICIP23 : ftl::mmio::Register<
      0xE000E417u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip23Fields::PRI23> {
    using PRI23 = Nvicip23Fields::PRI23;
  };

  // Interrupt Priority Register 24
  struct Nvicip24Fields {
    // Priority of interrupt 24
    using PRI24 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip24Fields

  struct NVICIP24 : ftl::mmio::Register<
      0xE000E418u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip24Fields::PRI24> {
    using PRI24 = Nvicip24Fields::PRI24;
  };

  // Interrupt Priority Register 25
  struct Nvicip25Fields {
    // Priority of interrupt 25
    using PRI25 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip25Fields

  struct NVICIP25 : ftl::mmio::Register<
      0xE000E419u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip25Fields::PRI25> {
    using PRI25 = Nvicip25Fields::PRI25;
  };

  // Interrupt Priority Register 26
  struct Nvicip26Fields {
    // Priority of interrupt 26
    using PRI26 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip26Fields

  struct NVICIP26 : ftl::mmio::Register<
      0xE000E41Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip26Fields::PRI26> {
    using PRI26 = Nvicip26Fields::PRI26;
  };

  // Interrupt Priority Register 27
  struct Nvicip27Fields {
    // Priority of interrupt 27
    using PRI27 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip27Fields

  struct NVICIP27 : ftl::mmio::Register<
      0xE000E41Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip27Fields::PRI27> {
    using PRI27 = Nvicip27Fields::PRI27;
  };

  // Interrupt Priority Register 28
  struct Nvicip28Fields {
    // Priority of interrupt 28
    using PRI28 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip28Fields

  struct NVICIP28 : ftl::mmio::Register<
      0xE000E41Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip28Fields::PRI28> {
    using PRI28 = Nvicip28Fields::PRI28;
  };

  // Interrupt Priority Register 29
  struct Nvicip29Fields {
    // Priority of interrupt 29
    using PRI29 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip29Fields

  struct NVICIP29 : ftl::mmio::Register<
      0xE000E41Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip29Fields::PRI29> {
    using PRI29 = Nvicip29Fields::PRI29;
  };

  // Interrupt Priority Register 30
  struct Nvicip30Fields {
    // Priority of interrupt 30
    using PRI30 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip30Fields

  struct NVICIP30 : ftl::mmio::Register<
      0xE000E41Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip30Fields::PRI30> {
    using PRI30 = Nvicip30Fields::PRI30;
  };

  // Interrupt Priority Register 31
  struct Nvicip31Fields {
    // Priority of interrupt 31
    using PRI31 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip31Fields

  struct NVICIP31 : ftl::mmio::Register<
      0xE000E41Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip31Fields::PRI31> {
    using PRI31 = Nvicip31Fields::PRI31;
  };

  // Interrupt Priority Register 32
  struct Nvicip32Fields {
    // Priority of interrupt 32
    using PRI32 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip32Fields

  struct NVICIP32 : ftl::mmio::Register<
      0xE000E420u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip32Fields::PRI32> {
    using PRI32 = Nvicip32Fields::PRI32;
  };

  // Interrupt Priority Register 33
  struct Nvicip33Fields {
    // Priority of interrupt 33
    using PRI33 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip33Fields

  struct NVICIP33 : ftl::mmio::Register<
      0xE000E421u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip33Fields::PRI33> {
    using PRI33 = Nvicip33Fields::PRI33;
  };

  // Interrupt Priority Register 34
  struct Nvicip34Fields {
    // Priority of interrupt 34
    using PRI34 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip34Fields

  struct NVICIP34 : ftl::mmio::Register<
      0xE000E422u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip34Fields::PRI34> {
    using PRI34 = Nvicip34Fields::PRI34;
  };

  // Interrupt Priority Register 35
  struct Nvicip35Fields {
    // Priority of interrupt 35
    using PRI35 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip35Fields

  struct NVICIP35 : ftl::mmio::Register<
      0xE000E423u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip35Fields::PRI35> {
    using PRI35 = Nvicip35Fields::PRI35;
  };

  // Interrupt Priority Register 36
  struct Nvicip36Fields {
    // Priority of interrupt 36
    using PRI36 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip36Fields

  struct NVICIP36 : ftl::mmio::Register<
      0xE000E424u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip36Fields::PRI36> {
    using PRI36 = Nvicip36Fields::PRI36;
  };

  // Interrupt Priority Register 37
  struct Nvicip37Fields {
    // Priority of interrupt 37
    using PRI37 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip37Fields

  struct NVICIP37 : ftl::mmio::Register<
      0xE000E425u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip37Fields::PRI37> {
    using PRI37 = Nvicip37Fields::PRI37;
  };

  // Interrupt Priority Register 38
  struct Nvicip38Fields {
    // Priority of interrupt 38
    using PRI38 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip38Fields

  struct NVICIP38 : ftl::mmio::Register<
      0xE000E426u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip38Fields::PRI38> {
    using PRI38 = Nvicip38Fields::PRI38;
  };

  // Interrupt Priority Register 39
  struct Nvicip39Fields {
    // Priority of interrupt 39
    using PRI39 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip39Fields

  struct NVICIP39 : ftl::mmio::Register<
      0xE000E427u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip39Fields::PRI39> {
    using PRI39 = Nvicip39Fields::PRI39;
  };

  // Interrupt Priority Register 40
  struct Nvicip40Fields {
    // Priority of interrupt 40
    using PRI40 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip40Fields

  struct NVICIP40 : ftl::mmio::Register<
      0xE000E428u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip40Fields::PRI40> {
    using PRI40 = Nvicip40Fields::PRI40;
  };

  // Interrupt Priority Register 41
  struct Nvicip41Fields {
    // Priority of interrupt 41
    using PRI41 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip41Fields

  struct NVICIP41 : ftl::mmio::Register<
      0xE000E429u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip41Fields::PRI41> {
    using PRI41 = Nvicip41Fields::PRI41;
  };

  // Interrupt Priority Register 42
  struct Nvicip42Fields {
    // Priority of interrupt 42
    using PRI42 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip42Fields

  struct NVICIP42 : ftl::mmio::Register<
      0xE000E42Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip42Fields::PRI42> {
    using PRI42 = Nvicip42Fields::PRI42;
  };

  // Interrupt Priority Register 43
  struct Nvicip43Fields {
    // Priority of interrupt 43
    using PRI43 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip43Fields

  struct NVICIP43 : ftl::mmio::Register<
      0xE000E42Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip43Fields::PRI43> {
    using PRI43 = Nvicip43Fields::PRI43;
  };

  // Interrupt Priority Register 44
  struct Nvicip44Fields {
    // Priority of interrupt 44
    using PRI44 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip44Fields

  struct NVICIP44 : ftl::mmio::Register<
      0xE000E42Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip44Fields::PRI44> {
    using PRI44 = Nvicip44Fields::PRI44;
  };

  // Interrupt Priority Register 45
  struct Nvicip45Fields {
    // Priority of interrupt 45
    using PRI45 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip45Fields

  struct NVICIP45 : ftl::mmio::Register<
      0xE000E42Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip45Fields::PRI45> {
    using PRI45 = Nvicip45Fields::PRI45;
  };

  // Interrupt Priority Register 46
  struct Nvicip46Fields {
    // Priority of interrupt 46
    using PRI46 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip46Fields

  struct NVICIP46 : ftl::mmio::Register<
      0xE000E42Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip46Fields::PRI46> {
    using PRI46 = Nvicip46Fields::PRI46;
  };

  // Interrupt Priority Register 47
  struct Nvicip47Fields {
    // Priority of interrupt 47
    using PRI47 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip47Fields

  struct NVICIP47 : ftl::mmio::Register<
      0xE000E42Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip47Fields::PRI47> {
    using PRI47 = Nvicip47Fields::PRI47;
  };

  // Interrupt Priority Register 48
  struct Nvicip48Fields {
    // Priority of interrupt 48
    using PRI48 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip48Fields

  struct NVICIP48 : ftl::mmio::Register<
      0xE000E430u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip48Fields::PRI48> {
    using PRI48 = Nvicip48Fields::PRI48;
  };

  // Interrupt Priority Register 49
  struct Nvicip49Fields {
    // Priority of interrupt 49
    using PRI49 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip49Fields

  struct NVICIP49 : ftl::mmio::Register<
      0xE000E431u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip49Fields::PRI49> {
    using PRI49 = Nvicip49Fields::PRI49;
  };

  // Interrupt Priority Register 50
  struct Nvicip50Fields {
    // Priority of interrupt 50
    using PRI50 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip50Fields

  struct NVICIP50 : ftl::mmio::Register<
      0xE000E432u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip50Fields::PRI50> {
    using PRI50 = Nvicip50Fields::PRI50;
  };

  // Interrupt Priority Register 51
  struct Nvicip51Fields {
    // Priority of interrupt 51
    using PRI51 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip51Fields

  struct NVICIP51 : ftl::mmio::Register<
      0xE000E433u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip51Fields::PRI51> {
    using PRI51 = Nvicip51Fields::PRI51;
  };

  // Interrupt Priority Register 52
  struct Nvicip52Fields {
    // Priority of interrupt 52
    using PRI52 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip52Fields

  struct NVICIP52 : ftl::mmio::Register<
      0xE000E434u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip52Fields::PRI52> {
    using PRI52 = Nvicip52Fields::PRI52;
  };

  // Interrupt Priority Register 53
  struct Nvicip53Fields {
    // Priority of interrupt 53
    using PRI53 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip53Fields

  struct NVICIP53 : ftl::mmio::Register<
      0xE000E435u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip53Fields::PRI53> {
    using PRI53 = Nvicip53Fields::PRI53;
  };

  // Interrupt Priority Register 54
  struct Nvicip54Fields {
    // Priority of interrupt 54
    using PRI54 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip54Fields

  struct NVICIP54 : ftl::mmio::Register<
      0xE000E436u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip54Fields::PRI54> {
    using PRI54 = Nvicip54Fields::PRI54;
  };

  // Interrupt Priority Register 55
  struct Nvicip55Fields {
    // Priority of interrupt 55
    using PRI55 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip55Fields

  struct NVICIP55 : ftl::mmio::Register<
      0xE000E437u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip55Fields::PRI55> {
    using PRI55 = Nvicip55Fields::PRI55;
  };

  // Interrupt Priority Register 56
  struct Nvicip56Fields {
    // Priority of interrupt 56
    using PRI56 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip56Fields

  struct NVICIP56 : ftl::mmio::Register<
      0xE000E438u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip56Fields::PRI56> {
    using PRI56 = Nvicip56Fields::PRI56;
  };

  // Interrupt Priority Register 57
  struct Nvicip57Fields {
    // Priority of interrupt 57
    using PRI57 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip57Fields

  struct NVICIP57 : ftl::mmio::Register<
      0xE000E439u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip57Fields::PRI57> {
    using PRI57 = Nvicip57Fields::PRI57;
  };

  // Interrupt Priority Register 58
  struct Nvicip58Fields {
    // Priority of interrupt 58
    using PRI58 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip58Fields

  struct NVICIP58 : ftl::mmio::Register<
      0xE000E43Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip58Fields::PRI58> {
    using PRI58 = Nvicip58Fields::PRI58;
  };

  // Interrupt Priority Register 59
  struct Nvicip59Fields {
    // Priority of interrupt 59
    using PRI59 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip59Fields

  struct NVICIP59 : ftl::mmio::Register<
      0xE000E43Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip59Fields::PRI59> {
    using PRI59 = Nvicip59Fields::PRI59;
  };

  // Interrupt Priority Register 60
  struct Nvicip60Fields {
    // Priority of interrupt 60
    using PRI60 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip60Fields

  struct NVICIP60 : ftl::mmio::Register<
      0xE000E43Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip60Fields::PRI60> {
    using PRI60 = Nvicip60Fields::PRI60;
  };

  // Interrupt Priority Register 61
  struct Nvicip61Fields {
    // Priority of interrupt 61
    using PRI61 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip61Fields

  struct NVICIP61 : ftl::mmio::Register<
      0xE000E43Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip61Fields::PRI61> {
    using PRI61 = Nvicip61Fields::PRI61;
  };

  // Interrupt Priority Register 62
  struct Nvicip62Fields {
    // Priority of interrupt 62
    using PRI62 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip62Fields

  struct NVICIP62 : ftl::mmio::Register<
      0xE000E43Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip62Fields::PRI62> {
    using PRI62 = Nvicip62Fields::PRI62;
  };

  // Interrupt Priority Register 63
  struct Nvicip63Fields {
    // Priority of interrupt 63
    using PRI63 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip63Fields

  struct NVICIP63 : ftl::mmio::Register<
      0xE000E43Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip63Fields::PRI63> {
    using PRI63 = Nvicip63Fields::PRI63;
  };

  // Interrupt Priority Register 64
  struct Nvicip64Fields {
    // Priority of interrupt 64
    using PRI64 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip64Fields

  struct NVICIP64 : ftl::mmio::Register<
      0xE000E440u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip64Fields::PRI64> {
    using PRI64 = Nvicip64Fields::PRI64;
  };

  // Interrupt Priority Register 65
  struct Nvicip65Fields {
    // Priority of interrupt 65
    using PRI65 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip65Fields

  struct NVICIP65 : ftl::mmio::Register<
      0xE000E441u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip65Fields::PRI65> {
    using PRI65 = Nvicip65Fields::PRI65;
  };

  // Interrupt Priority Register 66
  struct Nvicip66Fields {
    // Priority of interrupt 66
    using PRI66 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip66Fields

  struct NVICIP66 : ftl::mmio::Register<
      0xE000E442u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip66Fields::PRI66> {
    using PRI66 = Nvicip66Fields::PRI66;
  };

  // Interrupt Priority Register 67
  struct Nvicip67Fields {
    // Priority of interrupt 67
    using PRI67 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip67Fields

  struct NVICIP67 : ftl::mmio::Register<
      0xE000E443u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip67Fields::PRI67> {
    using PRI67 = Nvicip67Fields::PRI67;
  };

  // Interrupt Priority Register 68
  struct Nvicip68Fields {
    // Priority of interrupt 68
    using PRI68 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip68Fields

  struct NVICIP68 : ftl::mmio::Register<
      0xE000E444u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip68Fields::PRI68> {
    using PRI68 = Nvicip68Fields::PRI68;
  };

  // Interrupt Priority Register 69
  struct Nvicip69Fields {
    // Priority of interrupt 69
    using PRI69 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip69Fields

  struct NVICIP69 : ftl::mmio::Register<
      0xE000E445u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip69Fields::PRI69> {
    using PRI69 = Nvicip69Fields::PRI69;
  };

  // Interrupt Priority Register 70
  struct Nvicip70Fields {
    // Priority of interrupt 70
    using PRI70 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip70Fields

  struct NVICIP70 : ftl::mmio::Register<
      0xE000E446u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip70Fields::PRI70> {
    using PRI70 = Nvicip70Fields::PRI70;
  };

  // Interrupt Priority Register 71
  struct Nvicip71Fields {
    // Priority of interrupt 71
    using PRI71 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip71Fields

  struct NVICIP71 : ftl::mmio::Register<
      0xE000E447u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip71Fields::PRI71> {
    using PRI71 = Nvicip71Fields::PRI71;
  };

  // Interrupt Priority Register 72
  struct Nvicip72Fields {
    // Priority of interrupt 72
    using PRI72 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip72Fields

  struct NVICIP72 : ftl::mmio::Register<
      0xE000E448u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip72Fields::PRI72> {
    using PRI72 = Nvicip72Fields::PRI72;
  };

  // Interrupt Priority Register 73
  struct Nvicip73Fields {
    // Priority of interrupt 73
    using PRI73 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip73Fields

  struct NVICIP73 : ftl::mmio::Register<
      0xE000E449u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip73Fields::PRI73> {
    using PRI73 = Nvicip73Fields::PRI73;
  };

  // Interrupt Priority Register 74
  struct Nvicip74Fields {
    // Priority of interrupt 74
    using PRI74 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip74Fields

  struct NVICIP74 : ftl::mmio::Register<
      0xE000E44Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip74Fields::PRI74> {
    using PRI74 = Nvicip74Fields::PRI74;
  };

  // Interrupt Priority Register 75
  struct Nvicip75Fields {
    // Priority of interrupt 75
    using PRI75 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip75Fields

  struct NVICIP75 : ftl::mmio::Register<
      0xE000E44Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip75Fields::PRI75> {
    using PRI75 = Nvicip75Fields::PRI75;
  };

  // Interrupt Priority Register 76
  struct Nvicip76Fields {
    // Priority of interrupt 76
    using PRI76 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip76Fields

  struct NVICIP76 : ftl::mmio::Register<
      0xE000E44Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip76Fields::PRI76> {
    using PRI76 = Nvicip76Fields::PRI76;
  };

  // Interrupt Priority Register 77
  struct Nvicip77Fields {
    // Priority of interrupt 77
    using PRI77 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip77Fields

  struct NVICIP77 : ftl::mmio::Register<
      0xE000E44Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip77Fields::PRI77> {
    using PRI77 = Nvicip77Fields::PRI77;
  };

  // Interrupt Priority Register 78
  struct Nvicip78Fields {
    // Priority of interrupt 78
    using PRI78 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip78Fields

  struct NVICIP78 : ftl::mmio::Register<
      0xE000E44Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip78Fields::PRI78> {
    using PRI78 = Nvicip78Fields::PRI78;
  };

  // Interrupt Priority Register 79
  struct Nvicip79Fields {
    // Priority of interrupt 79
    using PRI79 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip79Fields

  struct NVICIP79 : ftl::mmio::Register<
      0xE000E44Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip79Fields::PRI79> {
    using PRI79 = Nvicip79Fields::PRI79;
  };

  // Interrupt Priority Register 80
  struct Nvicip80Fields {
    // Priority of interrupt 80
    using PRI80 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip80Fields

  struct NVICIP80 : ftl::mmio::Register<
      0xE000E450u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip80Fields::PRI80> {
    using PRI80 = Nvicip80Fields::PRI80;
  };

  // Interrupt Priority Register 81
  struct Nvicip81Fields {
    // Priority of interrupt 81
    using PRI81 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip81Fields

  struct NVICIP81 : ftl::mmio::Register<
      0xE000E451u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip81Fields::PRI81> {
    using PRI81 = Nvicip81Fields::PRI81;
  };

  // Interrupt Priority Register 82
  struct Nvicip82Fields {
    // Priority of interrupt 82
    using PRI82 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip82Fields

  struct NVICIP82 : ftl::mmio::Register<
      0xE000E452u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip82Fields::PRI82> {
    using PRI82 = Nvicip82Fields::PRI82;
  };

  // Interrupt Priority Register 83
  struct Nvicip83Fields {
    // Priority of interrupt 83
    using PRI83 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip83Fields

  struct NVICIP83 : ftl::mmio::Register<
      0xE000E453u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip83Fields::PRI83> {
    using PRI83 = Nvicip83Fields::PRI83;
  };

  // Interrupt Priority Register 84
  struct Nvicip84Fields {
    // Priority of interrupt 84
    using PRI84 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip84Fields

  struct NVICIP84 : ftl::mmio::Register<
      0xE000E454u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip84Fields::PRI84> {
    using PRI84 = Nvicip84Fields::PRI84;
  };

  // Interrupt Priority Register 85
  struct Nvicip85Fields {
    // Priority of interrupt 85
    using PRI85 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip85Fields

  struct NVICIP85 : ftl::mmio::Register<
      0xE000E455u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip85Fields::PRI85> {
    using PRI85 = Nvicip85Fields::PRI85;
  };

  // Interrupt Priority Register 86
  struct Nvicip86Fields {
    // Priority of interrupt 86
    using PRI86 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip86Fields

  struct NVICIP86 : ftl::mmio::Register<
      0xE000E456u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip86Fields::PRI86> {
    using PRI86 = Nvicip86Fields::PRI86;
  };

  // Interrupt Priority Register 87
  struct Nvicip87Fields {
    // Priority of interrupt 87
    using PRI87 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip87Fields

  struct NVICIP87 : ftl::mmio::Register<
      0xE000E457u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip87Fields::PRI87> {
    using PRI87 = Nvicip87Fields::PRI87;
  };

  // Interrupt Priority Register 88
  struct Nvicip88Fields {
    // Priority of interrupt 88
    using PRI88 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip88Fields

  struct NVICIP88 : ftl::mmio::Register<
      0xE000E458u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip88Fields::PRI88> {
    using PRI88 = Nvicip88Fields::PRI88;
  };

  // Interrupt Priority Register 89
  struct Nvicip89Fields {
    // Priority of interrupt 89
    using PRI89 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip89Fields

  struct NVICIP89 : ftl::mmio::Register<
      0xE000E459u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip89Fields::PRI89> {
    using PRI89 = Nvicip89Fields::PRI89;
  };

  // Interrupt Priority Register 90
  struct Nvicip90Fields {
    // Priority of interrupt 90
    using PRI90 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip90Fields

  struct NVICIP90 : ftl::mmio::Register<
      0xE000E45Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip90Fields::PRI90> {
    using PRI90 = Nvicip90Fields::PRI90;
  };

  // Interrupt Priority Register 91
  struct Nvicip91Fields {
    // Priority of interrupt 91
    using PRI91 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip91Fields

  struct NVICIP91 : ftl::mmio::Register<
      0xE000E45Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip91Fields::PRI91> {
    using PRI91 = Nvicip91Fields::PRI91;
  };

  // Interrupt Priority Register 92
  struct Nvicip92Fields {
    // Priority of interrupt 92
    using PRI92 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip92Fields

  struct NVICIP92 : ftl::mmio::Register<
      0xE000E45Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip92Fields::PRI92> {
    using PRI92 = Nvicip92Fields::PRI92;
  };

  // Interrupt Priority Register 93
  struct Nvicip93Fields {
    // Priority of interrupt 93
    using PRI93 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip93Fields

  struct NVICIP93 : ftl::mmio::Register<
      0xE000E45Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip93Fields::PRI93> {
    using PRI93 = Nvicip93Fields::PRI93;
  };

  // Interrupt Priority Register 94
  struct Nvicip94Fields {
    // Priority of interrupt 94
    using PRI94 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip94Fields

  struct NVICIP94 : ftl::mmio::Register<
      0xE000E45Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip94Fields::PRI94> {
    using PRI94 = Nvicip94Fields::PRI94;
  };

  // Interrupt Priority Register 95
  struct Nvicip95Fields {
    // Priority of interrupt 95
    using PRI95 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip95Fields

  struct NVICIP95 : ftl::mmio::Register<
      0xE000E45Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip95Fields::PRI95> {
    using PRI95 = Nvicip95Fields::PRI95;
  };

  // Interrupt Priority Register 96
  struct Nvicip96Fields {
    // Priority of interrupt 96
    using PRI96 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip96Fields

  struct NVICIP96 : ftl::mmio::Register<
      0xE000E460u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip96Fields::PRI96> {
    using PRI96 = Nvicip96Fields::PRI96;
  };

  // Interrupt Priority Register 97
  struct Nvicip97Fields {
    // Priority of interrupt 97
    using PRI97 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip97Fields

  struct NVICIP97 : ftl::mmio::Register<
      0xE000E461u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip97Fields::PRI97> {
    using PRI97 = Nvicip97Fields::PRI97;
  };

  // Interrupt Priority Register 98
  struct Nvicip98Fields {
    // Priority of interrupt 98
    using PRI98 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip98Fields

  struct NVICIP98 : ftl::mmio::Register<
      0xE000E462u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip98Fields::PRI98> {
    using PRI98 = Nvicip98Fields::PRI98;
  };

  // Interrupt Priority Register 99
  struct Nvicip99Fields {
    // Priority of interrupt 99
    using PRI99 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip99Fields

  struct NVICIP99 : ftl::mmio::Register<
      0xE000E463u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip99Fields::PRI99> {
    using PRI99 = Nvicip99Fields::PRI99;
  };

  // Interrupt Priority Register 100
  struct Nvicip100Fields {
    // Priority of interrupt 100
    using PRI100 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip100Fields

  struct NVICIP100 : ftl::mmio::Register<
      0xE000E464u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip100Fields::PRI100> {
    using PRI100 = Nvicip100Fields::PRI100;
  };

  // Interrupt Priority Register 101
  struct Nvicip101Fields {
    // Priority of interrupt 101
    using PRI101 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip101Fields

  struct NVICIP101 : ftl::mmio::Register<
      0xE000E465u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip101Fields::PRI101> {
    using PRI101 = Nvicip101Fields::PRI101;
  };

  // Interrupt Priority Register 102
  struct Nvicip102Fields {
    // Priority of interrupt 102
    using PRI102 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip102Fields

  struct NVICIP102 : ftl::mmio::Register<
      0xE000E466u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip102Fields::PRI102> {
    using PRI102 = Nvicip102Fields::PRI102;
  };

  // Interrupt Priority Register 103
  struct Nvicip103Fields {
    // Priority of interrupt 103
    using PRI103 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip103Fields

  struct NVICIP103 : ftl::mmio::Register<
      0xE000E467u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip103Fields::PRI103> {
    using PRI103 = Nvicip103Fields::PRI103;
  };

  // Interrupt Priority Register 104
  struct Nvicip104Fields {
    // Priority of interrupt 104
    using PRI104 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip104Fields

  struct NVICIP104 : ftl::mmio::Register<
      0xE000E468u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip104Fields::PRI104> {
    using PRI104 = Nvicip104Fields::PRI104;
  };

  // Interrupt Priority Register 105
  struct Nvicip105Fields {
    // Priority of interrupt 105
    using PRI105 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip105Fields

  struct NVICIP105 : ftl::mmio::Register<
      0xE000E469u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip105Fields::PRI105> {
    using PRI105 = Nvicip105Fields::PRI105;
  };

  // Interrupt Priority Register 106
  struct Nvicip106Fields {
    // Priority of interrupt 106
    using PRI106 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip106Fields

  struct NVICIP106 : ftl::mmio::Register<
      0xE000E46Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip106Fields::PRI106> {
    using PRI106 = Nvicip106Fields::PRI106;
  };

  // Interrupt Priority Register 107
  struct Nvicip107Fields {
    // Priority of interrupt 107
    using PRI107 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip107Fields

  struct NVICIP107 : ftl::mmio::Register<
      0xE000E46Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip107Fields::PRI107> {
    using PRI107 = Nvicip107Fields::PRI107;
  };

  // Interrupt Priority Register 108
  struct Nvicip108Fields {
    // Priority of interrupt 108
    using PRI108 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip108Fields

  struct NVICIP108 : ftl::mmio::Register<
      0xE000E46Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip108Fields::PRI108> {
    using PRI108 = Nvicip108Fields::PRI108;
  };

  // Interrupt Priority Register 109
  struct Nvicip109Fields {
    // Priority of interrupt 109
    using PRI109 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip109Fields

  struct NVICIP109 : ftl::mmio::Register<
      0xE000E46Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip109Fields::PRI109> {
    using PRI109 = Nvicip109Fields::PRI109;
  };

  // Interrupt Priority Register 110
  struct Nvicip110Fields {
    // Priority of interrupt 110
    using PRI110 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip110Fields

  struct NVICIP110 : ftl::mmio::Register<
      0xE000E46Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip110Fields::PRI110> {
    using PRI110 = Nvicip110Fields::PRI110;
  };

  // Interrupt Priority Register 111
  struct Nvicip111Fields {
    // Priority of interrupt 111
    using PRI111 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip111Fields

  struct NVICIP111 : ftl::mmio::Register<
      0xE000E46Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip111Fields::PRI111> {
    using PRI111 = Nvicip111Fields::PRI111;
  };

  // Interrupt Priority Register 112
  struct Nvicip112Fields {
    // Priority of interrupt 112
    using PRI112 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip112Fields

  struct NVICIP112 : ftl::mmio::Register<
      0xE000E470u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip112Fields::PRI112> {
    using PRI112 = Nvicip112Fields::PRI112;
  };

  // Interrupt Priority Register 113
  struct Nvicip113Fields {
    // Priority of interrupt 113
    using PRI113 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip113Fields

  struct NVICIP113 : ftl::mmio::Register<
      0xE000E471u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip113Fields::PRI113> {
    using PRI113 = Nvicip113Fields::PRI113;
  };

  // Interrupt Priority Register 114
  struct Nvicip114Fields {
    // Priority of interrupt 114
    using PRI114 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip114Fields

  struct NVICIP114 : ftl::mmio::Register<
      0xE000E472u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip114Fields::PRI114> {
    using PRI114 = Nvicip114Fields::PRI114;
  };

  // Interrupt Priority Register 115
  struct Nvicip115Fields {
    // Priority of interrupt 115
    using PRI115 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip115Fields

  struct NVICIP115 : ftl::mmio::Register<
      0xE000E473u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip115Fields::PRI115> {
    using PRI115 = Nvicip115Fields::PRI115;
  };

  // Interrupt Priority Register 116
  struct Nvicip116Fields {
    // Priority of interrupt 116
    using PRI116 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip116Fields

  struct NVICIP116 : ftl::mmio::Register<
      0xE000E474u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip116Fields::PRI116> {
    using PRI116 = Nvicip116Fields::PRI116;
  };

  // Interrupt Priority Register 117
  struct Nvicip117Fields {
    // Priority of interrupt 117
    using PRI117 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip117Fields

  struct NVICIP117 : ftl::mmio::Register<
      0xE000E475u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip117Fields::PRI117> {
    using PRI117 = Nvicip117Fields::PRI117;
  };

  // Interrupt Priority Register 118
  struct Nvicip118Fields {
    // Priority of interrupt 118
    using PRI118 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip118Fields

  struct NVICIP118 : ftl::mmio::Register<
      0xE000E476u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip118Fields::PRI118> {
    using PRI118 = Nvicip118Fields::PRI118;
  };

  // Interrupt Priority Register 119
  struct Nvicip119Fields {
    // Priority of interrupt 119
    using PRI119 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip119Fields

  struct NVICIP119 : ftl::mmio::Register<
      0xE000E477u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip119Fields::PRI119> {
    using PRI119 = Nvicip119Fields::PRI119;
  };

  // Interrupt Priority Register 120
  struct Nvicip120Fields {
    // Priority of interrupt 120
    using PRI120 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip120Fields

  struct NVICIP120 : ftl::mmio::Register<
      0xE000E478u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip120Fields::PRI120> {
    using PRI120 = Nvicip120Fields::PRI120;
  };

  // Interrupt Priority Register 121
  struct Nvicip121Fields {
    // Priority of interrupt 121
    using PRI121 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip121Fields

  struct NVICIP121 : ftl::mmio::Register<
      0xE000E479u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip121Fields::PRI121> {
    using PRI121 = Nvicip121Fields::PRI121;
  };

  // Interrupt Priority Register 122
  struct Nvicip122Fields {
    // Priority of interrupt 122
    using PRI122 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip122Fields

  struct NVICIP122 : ftl::mmio::Register<
      0xE000E47Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip122Fields::PRI122> {
    using PRI122 = Nvicip122Fields::PRI122;
  };

  // Interrupt Priority Register 123
  struct Nvicip123Fields {
    // Priority of interrupt 123
    using PRI123 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip123Fields

  struct NVICIP123 : ftl::mmio::Register<
      0xE000E47Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip123Fields::PRI123> {
    using PRI123 = Nvicip123Fields::PRI123;
  };

  // Interrupt Priority Register 124
  struct Nvicip124Fields {
    // Priority of interrupt 124
    using PRI124 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip124Fields

  struct NVICIP124 : ftl::mmio::Register<
      0xE000E47Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip124Fields::PRI124> {
    using PRI124 = Nvicip124Fields::PRI124;
  };

  // Interrupt Priority Register 125
  struct Nvicip125Fields {
    // Priority of interrupt 125
    using PRI125 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip125Fields

  struct NVICIP125 : ftl::mmio::Register<
      0xE000E47Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip125Fields::PRI125> {
    using PRI125 = Nvicip125Fields::PRI125;
  };

  // Interrupt Priority Register 126
  struct Nvicip126Fields {
    // Priority of interrupt 126
    using PRI126 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip126Fields

  struct NVICIP126 : ftl::mmio::Register<
      0xE000E47Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip126Fields::PRI126> {
    using PRI126 = Nvicip126Fields::PRI126;
  };

  // Interrupt Priority Register 127
  struct Nvicip127Fields {
    // Priority of interrupt 127
    using PRI127 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip127Fields

  struct NVICIP127 : ftl::mmio::Register<
      0xE000E47Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip127Fields::PRI127> {
    using PRI127 = Nvicip127Fields::PRI127;
  };

  // Interrupt Priority Register 128
  struct Nvicip128Fields {
    // Priority of interrupt 128
    using PRI128 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip128Fields

  struct NVICIP128 : ftl::mmio::Register<
      0xE000E480u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip128Fields::PRI128> {
    using PRI128 = Nvicip128Fields::PRI128;
  };

  // Interrupt Priority Register 129
  struct Nvicip129Fields {
    // Priority of interrupt 129
    using PRI129 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip129Fields

  struct NVICIP129 : ftl::mmio::Register<
      0xE000E481u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip129Fields::PRI129> {
    using PRI129 = Nvicip129Fields::PRI129;
  };

  // Interrupt Priority Register 130
  struct Nvicip130Fields {
    // Priority of interrupt 130
    using PRI130 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip130Fields

  struct NVICIP130 : ftl::mmio::Register<
      0xE000E482u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip130Fields::PRI130> {
    using PRI130 = Nvicip130Fields::PRI130;
  };

  // Interrupt Priority Register 131
  struct Nvicip131Fields {
    // Priority of interrupt 131
    using PRI131 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip131Fields

  struct NVICIP131 : ftl::mmio::Register<
      0xE000E483u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip131Fields::PRI131> {
    using PRI131 = Nvicip131Fields::PRI131;
  };

  // Interrupt Priority Register 132
  struct Nvicip132Fields {
    // Priority of interrupt 132
    using PRI132 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip132Fields

  struct NVICIP132 : ftl::mmio::Register<
      0xE000E484u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip132Fields::PRI132> {
    using PRI132 = Nvicip132Fields::PRI132;
  };

  // Interrupt Priority Register 133
  struct Nvicip133Fields {
    // Priority of interrupt 133
    using PRI133 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip133Fields

  struct NVICIP133 : ftl::mmio::Register<
      0xE000E485u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip133Fields::PRI133> {
    using PRI133 = Nvicip133Fields::PRI133;
  };

  // Interrupt Priority Register 134
  struct Nvicip134Fields {
    // Priority of interrupt 134
    using PRI134 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip134Fields

  struct NVICIP134 : ftl::mmio::Register<
      0xE000E486u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip134Fields::PRI134> {
    using PRI134 = Nvicip134Fields::PRI134;
  };

  // Interrupt Priority Register 135
  struct Nvicip135Fields {
    // Priority of interrupt 135
    using PRI135 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip135Fields

  struct NVICIP135 : ftl::mmio::Register<
      0xE000E487u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip135Fields::PRI135> {
    using PRI135 = Nvicip135Fields::PRI135;
  };

  // Interrupt Priority Register 136
  struct Nvicip136Fields {
    // Priority of interrupt 136
    using PRI136 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip136Fields

  struct NVICIP136 : ftl::mmio::Register<
      0xE000E488u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip136Fields::PRI136> {
    using PRI136 = Nvicip136Fields::PRI136;
  };

  // Interrupt Priority Register 137
  struct Nvicip137Fields {
    // Priority of interrupt 137
    using PRI137 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip137Fields

  struct NVICIP137 : ftl::mmio::Register<
      0xE000E489u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip137Fields::PRI137> {
    using PRI137 = Nvicip137Fields::PRI137;
  };

  // Interrupt Priority Register 138
  struct Nvicip138Fields {
    // Priority of interrupt 138
    using PRI138 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip138Fields

  struct NVICIP138 : ftl::mmio::Register<
      0xE000E48Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip138Fields::PRI138> {
    using PRI138 = Nvicip138Fields::PRI138;
  };

  // Interrupt Priority Register 139
  struct Nvicip139Fields {
    // Priority of interrupt 139
    using PRI139 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip139Fields

  struct NVICIP139 : ftl::mmio::Register<
      0xE000E48Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip139Fields::PRI139> {
    using PRI139 = Nvicip139Fields::PRI139;
  };

  // Interrupt Priority Register 140
  struct Nvicip140Fields {
    // Priority of interrupt 140
    using PRI140 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip140Fields

  struct NVICIP140 : ftl::mmio::Register<
      0xE000E48Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip140Fields::PRI140> {
    using PRI140 = Nvicip140Fields::PRI140;
  };

  // Interrupt Priority Register 141
  struct Nvicip141Fields {
    // Priority of interrupt 141
    using PRI141 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip141Fields

  struct NVICIP141 : ftl::mmio::Register<
      0xE000E48Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip141Fields::PRI141> {
    using PRI141 = Nvicip141Fields::PRI141;
  };

  // Interrupt Priority Register 142
  struct Nvicip142Fields {
    // Priority of interrupt 142
    using PRI142 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip142Fields

  struct NVICIP142 : ftl::mmio::Register<
      0xE000E48Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip142Fields::PRI142> {
    using PRI142 = Nvicip142Fields::PRI142;
  };

  // Interrupt Priority Register 143
  struct Nvicip143Fields {
    // Priority of interrupt 143
    using PRI143 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip143Fields

  struct NVICIP143 : ftl::mmio::Register<
      0xE000E48Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip143Fields::PRI143> {
    using PRI143 = Nvicip143Fields::PRI143;
  };

  // Interrupt Priority Register 144
  struct Nvicip144Fields {
    // Priority of interrupt 144
    using PRI144 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip144Fields

  struct NVICIP144 : ftl::mmio::Register<
      0xE000E490u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip144Fields::PRI144> {
    using PRI144 = Nvicip144Fields::PRI144;
  };

  // Interrupt Priority Register 145
  struct Nvicip145Fields {
    // Priority of interrupt 145
    using PRI145 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip145Fields

  struct NVICIP145 : ftl::mmio::Register<
      0xE000E491u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip145Fields::PRI145> {
    using PRI145 = Nvicip145Fields::PRI145;
  };

  // Interrupt Priority Register 146
  struct Nvicip146Fields {
    // Priority of interrupt 146
    using PRI146 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip146Fields

  struct NVICIP146 : ftl::mmio::Register<
      0xE000E492u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip146Fields::PRI146> {
    using PRI146 = Nvicip146Fields::PRI146;
  };

  // Interrupt Priority Register 147
  struct Nvicip147Fields {
    // Priority of interrupt 147
    using PRI147 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip147Fields

  struct NVICIP147 : ftl::mmio::Register<
      0xE000E493u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip147Fields::PRI147> {
    using PRI147 = Nvicip147Fields::PRI147;
  };

  // Interrupt Priority Register 148
  struct Nvicip148Fields {
    // Priority of interrupt 148
    using PRI148 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip148Fields

  struct NVICIP148 : ftl::mmio::Register<
      0xE000E494u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip148Fields::PRI148> {
    using PRI148 = Nvicip148Fields::PRI148;
  };

  // Interrupt Priority Register 149
  struct Nvicip149Fields {
    // Priority of interrupt 149
    using PRI149 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip149Fields

  struct NVICIP149 : ftl::mmio::Register<
      0xE000E495u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip149Fields::PRI149> {
    using PRI149 = Nvicip149Fields::PRI149;
  };

  // Interrupt Priority Register 150
  struct Nvicip150Fields {
    // Priority of interrupt 150
    using PRI150 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip150Fields

  struct NVICIP150 : ftl::mmio::Register<
      0xE000E496u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip150Fields::PRI150> {
    using PRI150 = Nvicip150Fields::PRI150;
  };

  // Interrupt Priority Register 151
  struct Nvicip151Fields {
    // Priority of interrupt 151
    using PRI151 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip151Fields

  struct NVICIP151 : ftl::mmio::Register<
      0xE000E497u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip151Fields::PRI151> {
    using PRI151 = Nvicip151Fields::PRI151;
  };

  // Interrupt Priority Register 152
  struct Nvicip152Fields {
    // Priority of interrupt 152
    using PRI152 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip152Fields

  struct NVICIP152 : ftl::mmio::Register<
      0xE000E498u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip152Fields::PRI152> {
    using PRI152 = Nvicip152Fields::PRI152;
  };

  // Interrupt Priority Register 153
  struct Nvicip153Fields {
    // Priority of interrupt 153
    using PRI153 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip153Fields

  struct NVICIP153 : ftl::mmio::Register<
      0xE000E499u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip153Fields::PRI153> {
    using PRI153 = Nvicip153Fields::PRI153;
  };

  // Interrupt Priority Register 154
  struct Nvicip154Fields {
    // Priority of interrupt 154
    using PRI154 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip154Fields

  struct NVICIP154 : ftl::mmio::Register<
      0xE000E49Au,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip154Fields::PRI154> {
    using PRI154 = Nvicip154Fields::PRI154;
  };

  // Interrupt Priority Register 155
  struct Nvicip155Fields {
    // Priority of interrupt 155
    using PRI155 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip155Fields

  struct NVICIP155 : ftl::mmio::Register<
      0xE000E49Bu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip155Fields::PRI155> {
    using PRI155 = Nvicip155Fields::PRI155;
  };

  // Interrupt Priority Register 156
  struct Nvicip156Fields {
    // Priority of interrupt 156
    using PRI156 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip156Fields

  struct NVICIP156 : ftl::mmio::Register<
      0xE000E49Cu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip156Fields::PRI156> {
    using PRI156 = Nvicip156Fields::PRI156;
  };

  // Interrupt Priority Register 157
  struct Nvicip157Fields {
    // Priority of interrupt 157
    using PRI157 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip157Fields

  struct NVICIP157 : ftl::mmio::Register<
      0xE000E49Du,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip157Fields::PRI157> {
    using PRI157 = Nvicip157Fields::PRI157;
  };

  // Interrupt Priority Register 158
  struct Nvicip158Fields {
    // Priority of interrupt 158
    using PRI158 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip158Fields

  struct NVICIP158 : ftl::mmio::Register<
      0xE000E49Eu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip158Fields::PRI158> {
    using PRI158 = Nvicip158Fields::PRI158;
  };

  // Interrupt Priority Register 159
  struct Nvicip159Fields {
    // Priority of interrupt 159
    using PRI159 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip159Fields

  struct NVICIP159 : ftl::mmio::Register<
      0xE000E49Fu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip159Fields::PRI159> {
    using PRI159 = Nvicip159Fields::PRI159;
  };

  // Interrupt Priority Register 160
  struct Nvicip160Fields {
    // Priority of interrupt 160
    using PRI160 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip160Fields

  struct NVICIP160 : ftl::mmio::Register<
      0xE000E4A0u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip160Fields::PRI160> {
    using PRI160 = Nvicip160Fields::PRI160;
  };

  // Interrupt Priority Register 161
  struct Nvicip161Fields {
    // Priority of interrupt 161
    using PRI161 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip161Fields

  struct NVICIP161 : ftl::mmio::Register<
      0xE000E4A1u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip161Fields::PRI161> {
    using PRI161 = Nvicip161Fields::PRI161;
  };

  // Interrupt Priority Register 162
  struct Nvicip162Fields {
    // Priority of interrupt 162
    using PRI162 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip162Fields

  struct NVICIP162 : ftl::mmio::Register<
      0xE000E4A2u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip162Fields::PRI162> {
    using PRI162 = Nvicip162Fields::PRI162;
  };

  // Interrupt Priority Register 163
  struct Nvicip163Fields {
    // Priority of interrupt 163
    using PRI163 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip163Fields

  struct NVICIP163 : ftl::mmio::Register<
      0xE000E4A3u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip163Fields::PRI163> {
    using PRI163 = Nvicip163Fields::PRI163;
  };

  // Interrupt Priority Register 164
  struct Nvicip164Fields {
    // Priority of interrupt 164
    using PRI164 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip164Fields

  struct NVICIP164 : ftl::mmio::Register<
      0xE000E4A4u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip164Fields::PRI164> {
    using PRI164 = Nvicip164Fields::PRI164;
  };

  // Interrupt Priority Register 165
  struct Nvicip165Fields {
    // Priority of interrupt 165
    using PRI165 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip165Fields

  struct NVICIP165 : ftl::mmio::Register<
      0xE000E4A5u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip165Fields::PRI165> {
    using PRI165 = Nvicip165Fields::PRI165;
  };

  // Interrupt Priority Register 166
  struct Nvicip166Fields {
    // Priority of interrupt 166
    using PRI166 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip166Fields

  struct NVICIP166 : ftl::mmio::Register<
      0xE000E4A6u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip166Fields::PRI166> {
    using PRI166 = Nvicip166Fields::PRI166;
  };

  // Interrupt Priority Register 167
  struct Nvicip167Fields {
    // Priority of interrupt 167
    using PRI167 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip167Fields

  struct NVICIP167 : ftl::mmio::Register<
      0xE000E4A7u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip167Fields::PRI167> {
    using PRI167 = Nvicip167Fields::PRI167;
  };

  // Interrupt Priority Register 168
  struct Nvicip168Fields {
    // Priority of interrupt 168
    using PRI168 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip168Fields

  struct NVICIP168 : ftl::mmio::Register<
      0xE000E4A8u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip168Fields::PRI168> {
    using PRI168 = Nvicip168Fields::PRI168;
  };

  // Interrupt Priority Register 169
  struct Nvicip169Fields {
    // Priority of interrupt 169
    using PRI169 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip169Fields

  struct NVICIP169 : ftl::mmio::Register<
      0xE000E4A9u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip169Fields::PRI169> {
    using PRI169 = Nvicip169Fields::PRI169;
  };

  // Interrupt Priority Register 170
  struct Nvicip170Fields {
    // Priority of interrupt 170
    using PRI170 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip170Fields

  struct NVICIP170 : ftl::mmio::Register<
      0xE000E4AAu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip170Fields::PRI170> {
    using PRI170 = Nvicip170Fields::PRI170;
  };

  // Interrupt Priority Register 171
  struct Nvicip171Fields {
    // Priority of interrupt 171
    using PRI171 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip171Fields

  struct NVICIP171 : ftl::mmio::Register<
      0xE000E4ABu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip171Fields::PRI171> {
    using PRI171 = Nvicip171Fields::PRI171;
  };

  // Interrupt Priority Register 172
  struct Nvicip172Fields {
    // Priority of interrupt 172
    using PRI172 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip172Fields

  struct NVICIP172 : ftl::mmio::Register<
      0xE000E4ACu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip172Fields::PRI172> {
    using PRI172 = Nvicip172Fields::PRI172;
  };

  // Interrupt Priority Register 173
  struct Nvicip173Fields {
    // Priority of interrupt 173
    using PRI173 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip173Fields

  struct NVICIP173 : ftl::mmio::Register<
      0xE000E4ADu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip173Fields::PRI173> {
    using PRI173 = Nvicip173Fields::PRI173;
  };

  // Interrupt Priority Register 174
  struct Nvicip174Fields {
    // Priority of interrupt 174
    using PRI174 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip174Fields

  struct NVICIP174 : ftl::mmio::Register<
      0xE000E4AEu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip174Fields::PRI174> {
    using PRI174 = Nvicip174Fields::PRI174;
  };

  // Interrupt Priority Register 175
  struct Nvicip175Fields {
    // Priority of interrupt 175
    using PRI175 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip175Fields

  struct NVICIP175 : ftl::mmio::Register<
      0xE000E4AFu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip175Fields::PRI175> {
    using PRI175 = Nvicip175Fields::PRI175;
  };

  // Interrupt Priority Register 176
  struct Nvicip176Fields {
    // Priority of interrupt 176
    using PRI176 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip176Fields

  struct NVICIP176 : ftl::mmio::Register<
      0xE000E4B0u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip176Fields::PRI176> {
    using PRI176 = Nvicip176Fields::PRI176;
  };

  // Interrupt Priority Register 177
  struct Nvicip177Fields {
    // Priority of interrupt 177
    using PRI177 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip177Fields

  struct NVICIP177 : ftl::mmio::Register<
      0xE000E4B1u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip177Fields::PRI177> {
    using PRI177 = Nvicip177Fields::PRI177;
  };

  // Interrupt Priority Register 178
  struct Nvicip178Fields {
    // Priority of interrupt 178
    using PRI178 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip178Fields

  struct NVICIP178 : ftl::mmio::Register<
      0xE000E4B2u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip178Fields::PRI178> {
    using PRI178 = Nvicip178Fields::PRI178;
  };

  // Interrupt Priority Register 179
  struct Nvicip179Fields {
    // Priority of interrupt 179
    using PRI179 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip179Fields

  struct NVICIP179 : ftl::mmio::Register<
      0xE000E4B3u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip179Fields::PRI179> {
    using PRI179 = Nvicip179Fields::PRI179;
  };

  // Interrupt Priority Register 180
  struct Nvicip180Fields {
    // Priority of interrupt 180
    using PRI180 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip180Fields

  struct NVICIP180 : ftl::mmio::Register<
      0xE000E4B4u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip180Fields::PRI180> {
    using PRI180 = Nvicip180Fields::PRI180;
  };

  // Interrupt Priority Register 181
  struct Nvicip181Fields {
    // Priority of interrupt 181
    using PRI181 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip181Fields

  struct NVICIP181 : ftl::mmio::Register<
      0xE000E4B5u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip181Fields::PRI181> {
    using PRI181 = Nvicip181Fields::PRI181;
  };

  // Interrupt Priority Register 182
  struct Nvicip182Fields {
    // Priority of interrupt 182
    using PRI182 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip182Fields

  struct NVICIP182 : ftl::mmio::Register<
      0xE000E4B6u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip182Fields::PRI182> {
    using PRI182 = Nvicip182Fields::PRI182;
  };

  // Interrupt Priority Register 183
  struct Nvicip183Fields {
    // Priority of interrupt 183
    using PRI183 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip183Fields

  struct NVICIP183 : ftl::mmio::Register<
      0xE000E4B7u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip183Fields::PRI183> {
    using PRI183 = Nvicip183Fields::PRI183;
  };

  // Interrupt Priority Register 184
  struct Nvicip184Fields {
    // Priority of interrupt 184
    using PRI184 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip184Fields

  struct NVICIP184 : ftl::mmio::Register<
      0xE000E4B8u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip184Fields::PRI184> {
    using PRI184 = Nvicip184Fields::PRI184;
  };

  // Interrupt Priority Register 185
  struct Nvicip185Fields {
    // Priority of interrupt 185
    using PRI185 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip185Fields

  struct NVICIP185 : ftl::mmio::Register<
      0xE000E4B9u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip185Fields::PRI185> {
    using PRI185 = Nvicip185Fields::PRI185;
  };

  // Interrupt Priority Register 186
  struct Nvicip186Fields {
    // Priority of interrupt 186
    using PRI186 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip186Fields

  struct NVICIP186 : ftl::mmio::Register<
      0xE000E4BAu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip186Fields::PRI186> {
    using PRI186 = Nvicip186Fields::PRI186;
  };

  // Interrupt Priority Register 187
  struct Nvicip187Fields {
    // Priority of interrupt 187
    using PRI187 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip187Fields

  struct NVICIP187 : ftl::mmio::Register<
      0xE000E4BBu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip187Fields::PRI187> {
    using PRI187 = Nvicip187Fields::PRI187;
  };

  // Interrupt Priority Register 188
  struct Nvicip188Fields {
    // Priority of interrupt 188
    using PRI188 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip188Fields

  struct NVICIP188 : ftl::mmio::Register<
      0xE000E4BCu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip188Fields::PRI188> {
    using PRI188 = Nvicip188Fields::PRI188;
  };

  // Interrupt Priority Register 189
  struct Nvicip189Fields {
    // Priority of interrupt 189
    using PRI189 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip189Fields

  struct NVICIP189 : ftl::mmio::Register<
      0xE000E4BDu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip189Fields::PRI189> {
    using PRI189 = Nvicip189Fields::PRI189;
  };

  // Interrupt Priority Register 190
  struct Nvicip190Fields {
    // Priority of interrupt 190
    using PRI190 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip190Fields

  struct NVICIP190 : ftl::mmio::Register<
      0xE000E4BEu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip190Fields::PRI190> {
    using PRI190 = Nvicip190Fields::PRI190;
  };

  // Interrupt Priority Register 191
  struct Nvicip191Fields {
    // Priority of interrupt 191
    using PRI191 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip191Fields

  struct NVICIP191 : ftl::mmio::Register<
      0xE000E4BFu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip191Fields::PRI191> {
    using PRI191 = Nvicip191Fields::PRI191;
  };

  // Interrupt Priority Register 192
  struct Nvicip192Fields {
    // Priority of interrupt 192
    using PRI192 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip192Fields

  struct NVICIP192 : ftl::mmio::Register<
      0xE000E4C0u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip192Fields::PRI192> {
    using PRI192 = Nvicip192Fields::PRI192;
  };

  // Interrupt Priority Register 193
  struct Nvicip193Fields {
    // Priority of interrupt 193
    using PRI193 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip193Fields

  struct NVICIP193 : ftl::mmio::Register<
      0xE000E4C1u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip193Fields::PRI193> {
    using PRI193 = Nvicip193Fields::PRI193;
  };

  // Interrupt Priority Register 194
  struct Nvicip194Fields {
    // Priority of interrupt 194
    using PRI194 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip194Fields

  struct NVICIP194 : ftl::mmio::Register<
      0xE000E4C2u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip194Fields::PRI194> {
    using PRI194 = Nvicip194Fields::PRI194;
  };

  // Interrupt Priority Register 195
  struct Nvicip195Fields {
    // Priority of interrupt 195
    using PRI195 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip195Fields

  struct NVICIP195 : ftl::mmio::Register<
      0xE000E4C3u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip195Fields::PRI195> {
    using PRI195 = Nvicip195Fields::PRI195;
  };

  // Interrupt Priority Register 196
  struct Nvicip196Fields {
    // Priority of interrupt 196
    using PRI196 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip196Fields

  struct NVICIP196 : ftl::mmio::Register<
      0xE000E4C4u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip196Fields::PRI196> {
    using PRI196 = Nvicip196Fields::PRI196;
  };

  // Interrupt Priority Register 197
  struct Nvicip197Fields {
    // Priority of interrupt 197
    using PRI197 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip197Fields

  struct NVICIP197 : ftl::mmio::Register<
      0xE000E4C5u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip197Fields::PRI197> {
    using PRI197 = Nvicip197Fields::PRI197;
  };

  // Interrupt Priority Register 198
  struct Nvicip198Fields {
    // Priority of interrupt 198
    using PRI198 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip198Fields

  struct NVICIP198 : ftl::mmio::Register<
      0xE000E4C6u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip198Fields::PRI198> {
    using PRI198 = Nvicip198Fields::PRI198;
  };

  // Interrupt Priority Register 199
  struct Nvicip199Fields {
    // Priority of interrupt 199
    using PRI199 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip199Fields

  struct NVICIP199 : ftl::mmio::Register<
      0xE000E4C7u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip199Fields::PRI199> {
    using PRI199 = Nvicip199Fields::PRI199;
  };

  // Interrupt Priority Register 200
  struct Nvicip200Fields {
    // Priority of interrupt 200
    using PRI200 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip200Fields

  struct NVICIP200 : ftl::mmio::Register<
      0xE000E4C8u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip200Fields::PRI200> {
    using PRI200 = Nvicip200Fields::PRI200;
  };

  // Interrupt Priority Register 201
  struct Nvicip201Fields {
    // Priority of interrupt 201
    using PRI201 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip201Fields

  struct NVICIP201 : ftl::mmio::Register<
      0xE000E4C9u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip201Fields::PRI201> {
    using PRI201 = Nvicip201Fields::PRI201;
  };

  // Interrupt Priority Register 202
  struct Nvicip202Fields {
    // Priority of interrupt 202
    using PRI202 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip202Fields

  struct NVICIP202 : ftl::mmio::Register<
      0xE000E4CAu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip202Fields::PRI202> {
    using PRI202 = Nvicip202Fields::PRI202;
  };

  // Interrupt Priority Register 203
  struct Nvicip203Fields {
    // Priority of interrupt 203
    using PRI203 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip203Fields

  struct NVICIP203 : ftl::mmio::Register<
      0xE000E4CBu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip203Fields::PRI203> {
    using PRI203 = Nvicip203Fields::PRI203;
  };

  // Interrupt Priority Register 204
  struct Nvicip204Fields {
    // Priority of interrupt 204
    using PRI204 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip204Fields

  struct NVICIP204 : ftl::mmio::Register<
      0xE000E4CCu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip204Fields::PRI204> {
    using PRI204 = Nvicip204Fields::PRI204;
  };

  // Interrupt Priority Register 205
  struct Nvicip205Fields {
    // Priority of interrupt 205
    using PRI205 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip205Fields

  struct NVICIP205 : ftl::mmio::Register<
      0xE000E4CDu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip205Fields::PRI205> {
    using PRI205 = Nvicip205Fields::PRI205;
  };

  // Interrupt Priority Register 206
  struct Nvicip206Fields {
    // Priority of interrupt 206
    using PRI206 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip206Fields

  struct NVICIP206 : ftl::mmio::Register<
      0xE000E4CEu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip206Fields::PRI206> {
    using PRI206 = Nvicip206Fields::PRI206;
  };

  // Interrupt Priority Register 207
  struct Nvicip207Fields {
    // Priority of interrupt 207
    using PRI207 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip207Fields

  struct NVICIP207 : ftl::mmio::Register<
      0xE000E4CFu,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip207Fields::PRI207> {
    using PRI207 = Nvicip207Fields::PRI207;
  };

  // Interrupt Priority Register 208
  struct Nvicip208Fields {
    // Priority of interrupt 208
    using PRI208 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip208Fields

  struct NVICIP208 : ftl::mmio::Register<
      0xE000E4D0u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip208Fields::PRI208> {
    using PRI208 = Nvicip208Fields::PRI208;
  };

  // Interrupt Priority Register 209
  struct Nvicip209Fields {
    // Priority of interrupt 209
    using PRI209 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip209Fields

  struct NVICIP209 : ftl::mmio::Register<
      0xE000E4D1u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip209Fields::PRI209> {
    using PRI209 = Nvicip209Fields::PRI209;
  };

  // Interrupt Priority Register 210
  struct Nvicip210Fields {
    // Priority of interrupt 210
    using PRI210 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip210Fields

  struct NVICIP210 : ftl::mmio::Register<
      0xE000E4D2u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip210Fields::PRI210> {
    using PRI210 = Nvicip210Fields::PRI210;
  };

  // Interrupt Priority Register 211
  struct Nvicip211Fields {
    // Priority of interrupt 211
    using PRI211 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip211Fields

  struct NVICIP211 : ftl::mmio::Register<
      0xE000E4D3u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip211Fields::PRI211> {
    using PRI211 = Nvicip211Fields::PRI211;
  };

  // Interrupt Priority Register 212
  struct Nvicip212Fields {
    // Priority of interrupt 212
    using PRI212 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip212Fields

  struct NVICIP212 : ftl::mmio::Register<
      0xE000E4D4u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip212Fields::PRI212> {
    using PRI212 = Nvicip212Fields::PRI212;
  };

  // Interrupt Priority Register 213
  struct Nvicip213Fields {
    // Priority of interrupt 213
    using PRI213 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip213Fields

  struct NVICIP213 : ftl::mmio::Register<
      0xE000E4D5u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip213Fields::PRI213> {
    using PRI213 = Nvicip213Fields::PRI213;
  };

  // Interrupt Priority Register 214
  struct Nvicip214Fields {
    // Priority of interrupt 214
    using PRI214 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip214Fields

  struct NVICIP214 : ftl::mmio::Register<
      0xE000E4D6u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip214Fields::PRI214> {
    using PRI214 = Nvicip214Fields::PRI214;
  };

  // Interrupt Priority Register 215
  struct Nvicip215Fields {
    // Priority of interrupt 215
    using PRI215 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip215Fields

  struct NVICIP215 : ftl::mmio::Register<
      0xE000E4D7u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip215Fields::PRI215> {
    using PRI215 = Nvicip215Fields::PRI215;
  };

  // Interrupt Priority Register 216
  struct Nvicip216Fields {
    // Priority of interrupt 216
    using PRI216 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip216Fields

  struct NVICIP216 : ftl::mmio::Register<
      0xE000E4D8u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip216Fields::PRI216> {
    using PRI216 = Nvicip216Fields::PRI216;
  };

  // Interrupt Priority Register 217
  struct Nvicip217Fields {
    // Priority of interrupt 217
    using PRI217 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Nvicip217Fields

  struct NVICIP217 : ftl::mmio::Register<
      0xE000E4D9u,
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Nvicip217Fields::PRI217> {
    using PRI217 = Nvicip217Fields::PRI217;
  };

  // Software Trigger Interrupt Register
  struct NvicstirFields {
    // Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
    using INTID = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct NvicstirFields

  struct NVICSTIR : ftl::mmio::Register<
      0xE000EF00u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NvicstirFields::INTID,
      ftl::mmio::Reserved<23, 9>> {
    using INTID = NvicstirFields::INTID;
  };

};

}  // namespace regs