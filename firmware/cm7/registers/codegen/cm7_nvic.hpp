#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Nested Vectored Interrupt Controller
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::cm7_nvic {


// Interrupt Set Enable Register n
struct NVICISER0_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER0_fields_

struct NVICISER0 : ftl::mmio::Register<
    0xE000E100u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER0_fields_::SETENA> {
  using SETENA = NVICISER0_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER1_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER1_fields_

struct NVICISER1 : ftl::mmio::Register<
    0xE000E104u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER1_fields_::SETENA> {
  using SETENA = NVICISER1_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER2_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER2_fields_

struct NVICISER2 : ftl::mmio::Register<
    0xE000E108u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER2_fields_::SETENA> {
  using SETENA = NVICISER2_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER3_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER3_fields_

struct NVICISER3 : ftl::mmio::Register<
    0xE000E10Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER3_fields_::SETENA> {
  using SETENA = NVICISER3_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER4_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER4_fields_

struct NVICISER4 : ftl::mmio::Register<
    0xE000E110u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER4_fields_::SETENA> {
  using SETENA = NVICISER4_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER5_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER5_fields_

struct NVICISER5 : ftl::mmio::Register<
    0xE000E114u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER5_fields_::SETENA> {
  using SETENA = NVICISER5_fields_::SETENA;
};


// Interrupt Set Enable Register n
struct NVICISER6_fields_ {
  // Interrupt set enable bits
  using SETENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISER6_fields_

struct NVICISER6 : ftl::mmio::Register<
    0xE000E118u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISER6_fields_::SETENA> {
  using SETENA = NVICISER6_fields_::SETENA;
};


// Interrupt Clear Enable Register n
struct NVICICER0_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER0_fields_

struct NVICICER0 : ftl::mmio::Register<
    0xE000E180u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER0_fields_::CLRENA> {
  using CLRENA = NVICICER0_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER1_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER1_fields_

struct NVICICER1 : ftl::mmio::Register<
    0xE000E184u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER1_fields_::CLRENA> {
  using CLRENA = NVICICER1_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER2_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER2_fields_

struct NVICICER2 : ftl::mmio::Register<
    0xE000E188u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER2_fields_::CLRENA> {
  using CLRENA = NVICICER2_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER3_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER3_fields_

struct NVICICER3 : ftl::mmio::Register<
    0xE000E18Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER3_fields_::CLRENA> {
  using CLRENA = NVICICER3_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER4_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER4_fields_

struct NVICICER4 : ftl::mmio::Register<
    0xE000E190u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER4_fields_::CLRENA> {
  using CLRENA = NVICICER4_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER5_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER5_fields_

struct NVICICER5 : ftl::mmio::Register<
    0xE000E194u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER5_fields_::CLRENA> {
  using CLRENA = NVICICER5_fields_::CLRENA;
};


// Interrupt Clear Enable Register n
struct NVICICER6_fields_ {
  // Interrupt clear-enable bits
  using CLRENA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICER6_fields_

struct NVICICER6 : ftl::mmio::Register<
    0xE000E198u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICER6_fields_::CLRENA> {
  using CLRENA = NVICICER6_fields_::CLRENA;
};


// Interrupt Set Pending Register n
struct NVICISPR0_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR0_fields_

struct NVICISPR0 : ftl::mmio::Register<
    0xE000E200u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR0_fields_::SETPEND> {
  using SETPEND = NVICISPR0_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR1_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR1_fields_

struct NVICISPR1 : ftl::mmio::Register<
    0xE000E204u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR1_fields_::SETPEND> {
  using SETPEND = NVICISPR1_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR2_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR2_fields_

struct NVICISPR2 : ftl::mmio::Register<
    0xE000E208u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR2_fields_::SETPEND> {
  using SETPEND = NVICISPR2_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR3_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR3_fields_

struct NVICISPR3 : ftl::mmio::Register<
    0xE000E20Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR3_fields_::SETPEND> {
  using SETPEND = NVICISPR3_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR4_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR4_fields_

struct NVICISPR4 : ftl::mmio::Register<
    0xE000E210u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR4_fields_::SETPEND> {
  using SETPEND = NVICISPR4_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR5_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR5_fields_

struct NVICISPR5 : ftl::mmio::Register<
    0xE000E214u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR5_fields_::SETPEND> {
  using SETPEND = NVICISPR5_fields_::SETPEND;
};


// Interrupt Set Pending Register n
struct NVICISPR6_fields_ {
  // Interrupt set-pending bits
  using SETPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICISPR6_fields_

struct NVICISPR6 : ftl::mmio::Register<
    0xE000E218u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICISPR6_fields_::SETPEND> {
  using SETPEND = NVICISPR6_fields_::SETPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR0_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR0_fields_

struct NVICICPR0 : ftl::mmio::Register<
    0xE000E280u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR0_fields_::CLRPEND> {
  using CLRPEND = NVICICPR0_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR1_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR1_fields_

struct NVICICPR1 : ftl::mmio::Register<
    0xE000E284u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR1_fields_::CLRPEND> {
  using CLRPEND = NVICICPR1_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR2_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR2_fields_

struct NVICICPR2 : ftl::mmio::Register<
    0xE000E288u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR2_fields_::CLRPEND> {
  using CLRPEND = NVICICPR2_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR3_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR3_fields_

struct NVICICPR3 : ftl::mmio::Register<
    0xE000E28Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR3_fields_::CLRPEND> {
  using CLRPEND = NVICICPR3_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR4_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR4_fields_

struct NVICICPR4 : ftl::mmio::Register<
    0xE000E290u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR4_fields_::CLRPEND> {
  using CLRPEND = NVICICPR4_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR5_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR5_fields_

struct NVICICPR5 : ftl::mmio::Register<
    0xE000E294u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR5_fields_::CLRPEND> {
  using CLRPEND = NVICICPR5_fields_::CLRPEND;
};


// Interrupt Clear Pending Register n
struct NVICICPR6_fields_ {
  // Interrupt clear-pending bits
  using CLRPEND = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct NVICICPR6_fields_

struct NVICICPR6 : ftl::mmio::Register<
    0xE000E298u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICICPR6_fields_::CLRPEND> {
  using CLRPEND = NVICICPR6_fields_::CLRPEND;
};


// Interrupt Active bit Register n
struct NVICIABR0_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR0_fields_

struct NVICIABR0 : ftl::mmio::Register<
    0xE000E300u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR0_fields_::ACTIVE> {
  using ACTIVE = NVICIABR0_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR1_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR1_fields_

struct NVICIABR1 : ftl::mmio::Register<
    0xE000E304u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR1_fields_::ACTIVE> {
  using ACTIVE = NVICIABR1_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR2_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR2_fields_

struct NVICIABR2 : ftl::mmio::Register<
    0xE000E308u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR2_fields_::ACTIVE> {
  using ACTIVE = NVICIABR2_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR3_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR3_fields_

struct NVICIABR3 : ftl::mmio::Register<
    0xE000E30Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR3_fields_::ACTIVE> {
  using ACTIVE = NVICIABR3_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR4_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR4_fields_

struct NVICIABR4 : ftl::mmio::Register<
    0xE000E310u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR4_fields_::ACTIVE> {
  using ACTIVE = NVICIABR4_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR5_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR5_fields_

struct NVICIABR5 : ftl::mmio::Register<
    0xE000E314u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR5_fields_::ACTIVE> {
  using ACTIVE = NVICIABR5_fields_::ACTIVE;
};


// Interrupt Active bit Register n
struct NVICIABR6_fields_ {
  // Interrupt active flags
  using ACTIVE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIABR6_fields_

struct NVICIABR6 : ftl::mmio::Register<
    0xE000E318u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICIABR6_fields_::ACTIVE> {
  using ACTIVE = NVICIABR6_fields_::ACTIVE;
};


// Interrupt Priority Register 0
struct NVICIP0_fields_ {
  // Priority of interrupt 0
  using PRI0 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP0_fields_

struct NVICIP0 : ftl::mmio::Register<
    0xE000E400u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP0_fields_::PRI0> {
  using PRI0 = NVICIP0_fields_::PRI0;
};


// Interrupt Priority Register 1
struct NVICIP1_fields_ {
  // Priority of interrupt 1
  using PRI1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP1_fields_

struct NVICIP1 : ftl::mmio::Register<
    0xE000E401u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP1_fields_::PRI1> {
  using PRI1 = NVICIP1_fields_::PRI1;
};


// Interrupt Priority Register 2
struct NVICIP2_fields_ {
  // Priority of interrupt 2
  using PRI2 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP2_fields_

struct NVICIP2 : ftl::mmio::Register<
    0xE000E402u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP2_fields_::PRI2> {
  using PRI2 = NVICIP2_fields_::PRI2;
};


// Interrupt Priority Register 3
struct NVICIP3_fields_ {
  // Priority of interrupt 3
  using PRI3 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP3_fields_

struct NVICIP3 : ftl::mmio::Register<
    0xE000E403u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP3_fields_::PRI3> {
  using PRI3 = NVICIP3_fields_::PRI3;
};


// Interrupt Priority Register 4
struct NVICIP4_fields_ {
  // Priority of interrupt 4
  using PRI4 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP4_fields_

struct NVICIP4 : ftl::mmio::Register<
    0xE000E404u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP4_fields_::PRI4> {
  using PRI4 = NVICIP4_fields_::PRI4;
};


// Interrupt Priority Register 5
struct NVICIP5_fields_ {
  // Priority of interrupt 5
  using PRI5 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP5_fields_

struct NVICIP5 : ftl::mmio::Register<
    0xE000E405u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP5_fields_::PRI5> {
  using PRI5 = NVICIP5_fields_::PRI5;
};


// Interrupt Priority Register 6
struct NVICIP6_fields_ {
  // Priority of interrupt 6
  using PRI6 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP6_fields_

struct NVICIP6 : ftl::mmio::Register<
    0xE000E406u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP6_fields_::PRI6> {
  using PRI6 = NVICIP6_fields_::PRI6;
};


// Interrupt Priority Register 7
struct NVICIP7_fields_ {
  // Priority of interrupt 7
  using PRI7 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP7_fields_

struct NVICIP7 : ftl::mmio::Register<
    0xE000E407u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP7_fields_::PRI7> {
  using PRI7 = NVICIP7_fields_::PRI7;
};


// Interrupt Priority Register 8
struct NVICIP8_fields_ {
  // Priority of interrupt 8
  using PRI8 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP8_fields_

struct NVICIP8 : ftl::mmio::Register<
    0xE000E408u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP8_fields_::PRI8> {
  using PRI8 = NVICIP8_fields_::PRI8;
};


// Interrupt Priority Register 9
struct NVICIP9_fields_ {
  // Priority of interrupt 9
  using PRI9 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP9_fields_

struct NVICIP9 : ftl::mmio::Register<
    0xE000E409u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP9_fields_::PRI9> {
  using PRI9 = NVICIP9_fields_::PRI9;
};


// Interrupt Priority Register 10
struct NVICIP10_fields_ {
  // Priority of interrupt 10
  using PRI10 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP10_fields_

struct NVICIP10 : ftl::mmio::Register<
    0xE000E40Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP10_fields_::PRI10> {
  using PRI10 = NVICIP10_fields_::PRI10;
};


// Interrupt Priority Register 11
struct NVICIP11_fields_ {
  // Priority of interrupt 11
  using PRI11 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP11_fields_

struct NVICIP11 : ftl::mmio::Register<
    0xE000E40Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP11_fields_::PRI11> {
  using PRI11 = NVICIP11_fields_::PRI11;
};


// Interrupt Priority Register 12
struct NVICIP12_fields_ {
  // Priority of interrupt 12
  using PRI12 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP12_fields_

struct NVICIP12 : ftl::mmio::Register<
    0xE000E40Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP12_fields_::PRI12> {
  using PRI12 = NVICIP12_fields_::PRI12;
};


// Interrupt Priority Register 13
struct NVICIP13_fields_ {
  // Priority of interrupt 13
  using PRI13 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP13_fields_

struct NVICIP13 : ftl::mmio::Register<
    0xE000E40Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP13_fields_::PRI13> {
  using PRI13 = NVICIP13_fields_::PRI13;
};


// Interrupt Priority Register 14
struct NVICIP14_fields_ {
  // Priority of interrupt 14
  using PRI14 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP14_fields_

struct NVICIP14 : ftl::mmio::Register<
    0xE000E40Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP14_fields_::PRI14> {
  using PRI14 = NVICIP14_fields_::PRI14;
};


// Interrupt Priority Register 15
struct NVICIP15_fields_ {
  // Priority of interrupt 15
  using PRI15 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP15_fields_

struct NVICIP15 : ftl::mmio::Register<
    0xE000E40Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP15_fields_::PRI15> {
  using PRI15 = NVICIP15_fields_::PRI15;
};


// Interrupt Priority Register 16
struct NVICIP16_fields_ {
  // Priority of interrupt 16
  using PRI16 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP16_fields_

struct NVICIP16 : ftl::mmio::Register<
    0xE000E410u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP16_fields_::PRI16> {
  using PRI16 = NVICIP16_fields_::PRI16;
};


// Interrupt Priority Register 17
struct NVICIP17_fields_ {
  // Priority of interrupt 17
  using PRI17 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP17_fields_

struct NVICIP17 : ftl::mmio::Register<
    0xE000E411u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP17_fields_::PRI17> {
  using PRI17 = NVICIP17_fields_::PRI17;
};


// Interrupt Priority Register 18
struct NVICIP18_fields_ {
  // Priority of interrupt 18
  using PRI18 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP18_fields_

struct NVICIP18 : ftl::mmio::Register<
    0xE000E412u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP18_fields_::PRI18> {
  using PRI18 = NVICIP18_fields_::PRI18;
};


// Interrupt Priority Register 19
struct NVICIP19_fields_ {
  // Priority of interrupt 19
  using PRI19 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP19_fields_

struct NVICIP19 : ftl::mmio::Register<
    0xE000E413u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP19_fields_::PRI19> {
  using PRI19 = NVICIP19_fields_::PRI19;
};


// Interrupt Priority Register 20
struct NVICIP20_fields_ {
  // Priority of interrupt 20
  using PRI20 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP20_fields_

struct NVICIP20 : ftl::mmio::Register<
    0xE000E414u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP20_fields_::PRI20> {
  using PRI20 = NVICIP20_fields_::PRI20;
};


// Interrupt Priority Register 21
struct NVICIP21_fields_ {
  // Priority of interrupt 21
  using PRI21 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP21_fields_

struct NVICIP21 : ftl::mmio::Register<
    0xE000E415u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP21_fields_::PRI21> {
  using PRI21 = NVICIP21_fields_::PRI21;
};


// Interrupt Priority Register 22
struct NVICIP22_fields_ {
  // Priority of interrupt 22
  using PRI22 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP22_fields_

struct NVICIP22 : ftl::mmio::Register<
    0xE000E416u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP22_fields_::PRI22> {
  using PRI22 = NVICIP22_fields_::PRI22;
};


// Interrupt Priority Register 23
struct NVICIP23_fields_ {
  // Priority of interrupt 23
  using PRI23 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP23_fields_

struct NVICIP23 : ftl::mmio::Register<
    0xE000E417u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP23_fields_::PRI23> {
  using PRI23 = NVICIP23_fields_::PRI23;
};


// Interrupt Priority Register 24
struct NVICIP24_fields_ {
  // Priority of interrupt 24
  using PRI24 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP24_fields_

struct NVICIP24 : ftl::mmio::Register<
    0xE000E418u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP24_fields_::PRI24> {
  using PRI24 = NVICIP24_fields_::PRI24;
};


// Interrupt Priority Register 25
struct NVICIP25_fields_ {
  // Priority of interrupt 25
  using PRI25 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP25_fields_

struct NVICIP25 : ftl::mmio::Register<
    0xE000E419u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP25_fields_::PRI25> {
  using PRI25 = NVICIP25_fields_::PRI25;
};


// Interrupt Priority Register 26
struct NVICIP26_fields_ {
  // Priority of interrupt 26
  using PRI26 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP26_fields_

struct NVICIP26 : ftl::mmio::Register<
    0xE000E41Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP26_fields_::PRI26> {
  using PRI26 = NVICIP26_fields_::PRI26;
};


// Interrupt Priority Register 27
struct NVICIP27_fields_ {
  // Priority of interrupt 27
  using PRI27 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP27_fields_

struct NVICIP27 : ftl::mmio::Register<
    0xE000E41Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP27_fields_::PRI27> {
  using PRI27 = NVICIP27_fields_::PRI27;
};


// Interrupt Priority Register 28
struct NVICIP28_fields_ {
  // Priority of interrupt 28
  using PRI28 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP28_fields_

struct NVICIP28 : ftl::mmio::Register<
    0xE000E41Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP28_fields_::PRI28> {
  using PRI28 = NVICIP28_fields_::PRI28;
};


// Interrupt Priority Register 29
struct NVICIP29_fields_ {
  // Priority of interrupt 29
  using PRI29 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP29_fields_

struct NVICIP29 : ftl::mmio::Register<
    0xE000E41Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP29_fields_::PRI29> {
  using PRI29 = NVICIP29_fields_::PRI29;
};


// Interrupt Priority Register 30
struct NVICIP30_fields_ {
  // Priority of interrupt 30
  using PRI30 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP30_fields_

struct NVICIP30 : ftl::mmio::Register<
    0xE000E41Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP30_fields_::PRI30> {
  using PRI30 = NVICIP30_fields_::PRI30;
};


// Interrupt Priority Register 31
struct NVICIP31_fields_ {
  // Priority of interrupt 31
  using PRI31 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP31_fields_

struct NVICIP31 : ftl::mmio::Register<
    0xE000E41Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP31_fields_::PRI31> {
  using PRI31 = NVICIP31_fields_::PRI31;
};


// Interrupt Priority Register 32
struct NVICIP32_fields_ {
  // Priority of interrupt 32
  using PRI32 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP32_fields_

struct NVICIP32 : ftl::mmio::Register<
    0xE000E420u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP32_fields_::PRI32> {
  using PRI32 = NVICIP32_fields_::PRI32;
};


// Interrupt Priority Register 33
struct NVICIP33_fields_ {
  // Priority of interrupt 33
  using PRI33 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP33_fields_

struct NVICIP33 : ftl::mmio::Register<
    0xE000E421u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP33_fields_::PRI33> {
  using PRI33 = NVICIP33_fields_::PRI33;
};


// Interrupt Priority Register 34
struct NVICIP34_fields_ {
  // Priority of interrupt 34
  using PRI34 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP34_fields_

struct NVICIP34 : ftl::mmio::Register<
    0xE000E422u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP34_fields_::PRI34> {
  using PRI34 = NVICIP34_fields_::PRI34;
};


// Interrupt Priority Register 35
struct NVICIP35_fields_ {
  // Priority of interrupt 35
  using PRI35 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP35_fields_

struct NVICIP35 : ftl::mmio::Register<
    0xE000E423u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP35_fields_::PRI35> {
  using PRI35 = NVICIP35_fields_::PRI35;
};


// Interrupt Priority Register 36
struct NVICIP36_fields_ {
  // Priority of interrupt 36
  using PRI36 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP36_fields_

struct NVICIP36 : ftl::mmio::Register<
    0xE000E424u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP36_fields_::PRI36> {
  using PRI36 = NVICIP36_fields_::PRI36;
};


// Interrupt Priority Register 37
struct NVICIP37_fields_ {
  // Priority of interrupt 37
  using PRI37 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP37_fields_

struct NVICIP37 : ftl::mmio::Register<
    0xE000E425u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP37_fields_::PRI37> {
  using PRI37 = NVICIP37_fields_::PRI37;
};


// Interrupt Priority Register 38
struct NVICIP38_fields_ {
  // Priority of interrupt 38
  using PRI38 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP38_fields_

struct NVICIP38 : ftl::mmio::Register<
    0xE000E426u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP38_fields_::PRI38> {
  using PRI38 = NVICIP38_fields_::PRI38;
};


// Interrupt Priority Register 39
struct NVICIP39_fields_ {
  // Priority of interrupt 39
  using PRI39 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP39_fields_

struct NVICIP39 : ftl::mmio::Register<
    0xE000E427u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP39_fields_::PRI39> {
  using PRI39 = NVICIP39_fields_::PRI39;
};


// Interrupt Priority Register 40
struct NVICIP40_fields_ {
  // Priority of interrupt 40
  using PRI40 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP40_fields_

struct NVICIP40 : ftl::mmio::Register<
    0xE000E428u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP40_fields_::PRI40> {
  using PRI40 = NVICIP40_fields_::PRI40;
};


// Interrupt Priority Register 41
struct NVICIP41_fields_ {
  // Priority of interrupt 41
  using PRI41 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP41_fields_

struct NVICIP41 : ftl::mmio::Register<
    0xE000E429u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP41_fields_::PRI41> {
  using PRI41 = NVICIP41_fields_::PRI41;
};


// Interrupt Priority Register 42
struct NVICIP42_fields_ {
  // Priority of interrupt 42
  using PRI42 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP42_fields_

struct NVICIP42 : ftl::mmio::Register<
    0xE000E42Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP42_fields_::PRI42> {
  using PRI42 = NVICIP42_fields_::PRI42;
};


// Interrupt Priority Register 43
struct NVICIP43_fields_ {
  // Priority of interrupt 43
  using PRI43 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP43_fields_

struct NVICIP43 : ftl::mmio::Register<
    0xE000E42Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP43_fields_::PRI43> {
  using PRI43 = NVICIP43_fields_::PRI43;
};


// Interrupt Priority Register 44
struct NVICIP44_fields_ {
  // Priority of interrupt 44
  using PRI44 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP44_fields_

struct NVICIP44 : ftl::mmio::Register<
    0xE000E42Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP44_fields_::PRI44> {
  using PRI44 = NVICIP44_fields_::PRI44;
};


// Interrupt Priority Register 45
struct NVICIP45_fields_ {
  // Priority of interrupt 45
  using PRI45 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP45_fields_

struct NVICIP45 : ftl::mmio::Register<
    0xE000E42Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP45_fields_::PRI45> {
  using PRI45 = NVICIP45_fields_::PRI45;
};


// Interrupt Priority Register 46
struct NVICIP46_fields_ {
  // Priority of interrupt 46
  using PRI46 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP46_fields_

struct NVICIP46 : ftl::mmio::Register<
    0xE000E42Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP46_fields_::PRI46> {
  using PRI46 = NVICIP46_fields_::PRI46;
};


// Interrupt Priority Register 47
struct NVICIP47_fields_ {
  // Priority of interrupt 47
  using PRI47 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP47_fields_

struct NVICIP47 : ftl::mmio::Register<
    0xE000E42Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP47_fields_::PRI47> {
  using PRI47 = NVICIP47_fields_::PRI47;
};


// Interrupt Priority Register 48
struct NVICIP48_fields_ {
  // Priority of interrupt 48
  using PRI48 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP48_fields_

struct NVICIP48 : ftl::mmio::Register<
    0xE000E430u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP48_fields_::PRI48> {
  using PRI48 = NVICIP48_fields_::PRI48;
};


// Interrupt Priority Register 49
struct NVICIP49_fields_ {
  // Priority of interrupt 49
  using PRI49 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP49_fields_

struct NVICIP49 : ftl::mmio::Register<
    0xE000E431u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP49_fields_::PRI49> {
  using PRI49 = NVICIP49_fields_::PRI49;
};


// Interrupt Priority Register 50
struct NVICIP50_fields_ {
  // Priority of interrupt 50
  using PRI50 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP50_fields_

struct NVICIP50 : ftl::mmio::Register<
    0xE000E432u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP50_fields_::PRI50> {
  using PRI50 = NVICIP50_fields_::PRI50;
};


// Interrupt Priority Register 51
struct NVICIP51_fields_ {
  // Priority of interrupt 51
  using PRI51 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP51_fields_

struct NVICIP51 : ftl::mmio::Register<
    0xE000E433u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP51_fields_::PRI51> {
  using PRI51 = NVICIP51_fields_::PRI51;
};


// Interrupt Priority Register 52
struct NVICIP52_fields_ {
  // Priority of interrupt 52
  using PRI52 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP52_fields_

struct NVICIP52 : ftl::mmio::Register<
    0xE000E434u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP52_fields_::PRI52> {
  using PRI52 = NVICIP52_fields_::PRI52;
};


// Interrupt Priority Register 53
struct NVICIP53_fields_ {
  // Priority of interrupt 53
  using PRI53 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP53_fields_

struct NVICIP53 : ftl::mmio::Register<
    0xE000E435u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP53_fields_::PRI53> {
  using PRI53 = NVICIP53_fields_::PRI53;
};


// Interrupt Priority Register 54
struct NVICIP54_fields_ {
  // Priority of interrupt 54
  using PRI54 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP54_fields_

struct NVICIP54 : ftl::mmio::Register<
    0xE000E436u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP54_fields_::PRI54> {
  using PRI54 = NVICIP54_fields_::PRI54;
};


// Interrupt Priority Register 55
struct NVICIP55_fields_ {
  // Priority of interrupt 55
  using PRI55 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP55_fields_

struct NVICIP55 : ftl::mmio::Register<
    0xE000E437u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP55_fields_::PRI55> {
  using PRI55 = NVICIP55_fields_::PRI55;
};


// Interrupt Priority Register 56
struct NVICIP56_fields_ {
  // Priority of interrupt 56
  using PRI56 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP56_fields_

struct NVICIP56 : ftl::mmio::Register<
    0xE000E438u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP56_fields_::PRI56> {
  using PRI56 = NVICIP56_fields_::PRI56;
};


// Interrupt Priority Register 57
struct NVICIP57_fields_ {
  // Priority of interrupt 57
  using PRI57 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP57_fields_

struct NVICIP57 : ftl::mmio::Register<
    0xE000E439u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP57_fields_::PRI57> {
  using PRI57 = NVICIP57_fields_::PRI57;
};


// Interrupt Priority Register 58
struct NVICIP58_fields_ {
  // Priority of interrupt 58
  using PRI58 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP58_fields_

struct NVICIP58 : ftl::mmio::Register<
    0xE000E43Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP58_fields_::PRI58> {
  using PRI58 = NVICIP58_fields_::PRI58;
};


// Interrupt Priority Register 59
struct NVICIP59_fields_ {
  // Priority of interrupt 59
  using PRI59 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP59_fields_

struct NVICIP59 : ftl::mmio::Register<
    0xE000E43Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP59_fields_::PRI59> {
  using PRI59 = NVICIP59_fields_::PRI59;
};


// Interrupt Priority Register 60
struct NVICIP60_fields_ {
  // Priority of interrupt 60
  using PRI60 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP60_fields_

struct NVICIP60 : ftl::mmio::Register<
    0xE000E43Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP60_fields_::PRI60> {
  using PRI60 = NVICIP60_fields_::PRI60;
};


// Interrupt Priority Register 61
struct NVICIP61_fields_ {
  // Priority of interrupt 61
  using PRI61 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP61_fields_

struct NVICIP61 : ftl::mmio::Register<
    0xE000E43Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP61_fields_::PRI61> {
  using PRI61 = NVICIP61_fields_::PRI61;
};


// Interrupt Priority Register 62
struct NVICIP62_fields_ {
  // Priority of interrupt 62
  using PRI62 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP62_fields_

struct NVICIP62 : ftl::mmio::Register<
    0xE000E43Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP62_fields_::PRI62> {
  using PRI62 = NVICIP62_fields_::PRI62;
};


// Interrupt Priority Register 63
struct NVICIP63_fields_ {
  // Priority of interrupt 63
  using PRI63 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP63_fields_

struct NVICIP63 : ftl::mmio::Register<
    0xE000E43Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP63_fields_::PRI63> {
  using PRI63 = NVICIP63_fields_::PRI63;
};


// Interrupt Priority Register 64
struct NVICIP64_fields_ {
  // Priority of interrupt 64
  using PRI64 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP64_fields_

struct NVICIP64 : ftl::mmio::Register<
    0xE000E440u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP64_fields_::PRI64> {
  using PRI64 = NVICIP64_fields_::PRI64;
};


// Interrupt Priority Register 65
struct NVICIP65_fields_ {
  // Priority of interrupt 65
  using PRI65 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP65_fields_

struct NVICIP65 : ftl::mmio::Register<
    0xE000E441u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP65_fields_::PRI65> {
  using PRI65 = NVICIP65_fields_::PRI65;
};


// Interrupt Priority Register 66
struct NVICIP66_fields_ {
  // Priority of interrupt 66
  using PRI66 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP66_fields_

struct NVICIP66 : ftl::mmio::Register<
    0xE000E442u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP66_fields_::PRI66> {
  using PRI66 = NVICIP66_fields_::PRI66;
};


// Interrupt Priority Register 67
struct NVICIP67_fields_ {
  // Priority of interrupt 67
  using PRI67 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP67_fields_

struct NVICIP67 : ftl::mmio::Register<
    0xE000E443u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP67_fields_::PRI67> {
  using PRI67 = NVICIP67_fields_::PRI67;
};


// Interrupt Priority Register 68
struct NVICIP68_fields_ {
  // Priority of interrupt 68
  using PRI68 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP68_fields_

struct NVICIP68 : ftl::mmio::Register<
    0xE000E444u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP68_fields_::PRI68> {
  using PRI68 = NVICIP68_fields_::PRI68;
};


// Interrupt Priority Register 69
struct NVICIP69_fields_ {
  // Priority of interrupt 69
  using PRI69 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP69_fields_

struct NVICIP69 : ftl::mmio::Register<
    0xE000E445u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP69_fields_::PRI69> {
  using PRI69 = NVICIP69_fields_::PRI69;
};


// Interrupt Priority Register 70
struct NVICIP70_fields_ {
  // Priority of interrupt 70
  using PRI70 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP70_fields_

struct NVICIP70 : ftl::mmio::Register<
    0xE000E446u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP70_fields_::PRI70> {
  using PRI70 = NVICIP70_fields_::PRI70;
};


// Interrupt Priority Register 71
struct NVICIP71_fields_ {
  // Priority of interrupt 71
  using PRI71 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP71_fields_

struct NVICIP71 : ftl::mmio::Register<
    0xE000E447u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP71_fields_::PRI71> {
  using PRI71 = NVICIP71_fields_::PRI71;
};


// Interrupt Priority Register 72
struct NVICIP72_fields_ {
  // Priority of interrupt 72
  using PRI72 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP72_fields_

struct NVICIP72 : ftl::mmio::Register<
    0xE000E448u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP72_fields_::PRI72> {
  using PRI72 = NVICIP72_fields_::PRI72;
};


// Interrupt Priority Register 73
struct NVICIP73_fields_ {
  // Priority of interrupt 73
  using PRI73 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP73_fields_

struct NVICIP73 : ftl::mmio::Register<
    0xE000E449u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP73_fields_::PRI73> {
  using PRI73 = NVICIP73_fields_::PRI73;
};


// Interrupt Priority Register 74
struct NVICIP74_fields_ {
  // Priority of interrupt 74
  using PRI74 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP74_fields_

struct NVICIP74 : ftl::mmio::Register<
    0xE000E44Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP74_fields_::PRI74> {
  using PRI74 = NVICIP74_fields_::PRI74;
};


// Interrupt Priority Register 75
struct NVICIP75_fields_ {
  // Priority of interrupt 75
  using PRI75 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP75_fields_

struct NVICIP75 : ftl::mmio::Register<
    0xE000E44Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP75_fields_::PRI75> {
  using PRI75 = NVICIP75_fields_::PRI75;
};


// Interrupt Priority Register 76
struct NVICIP76_fields_ {
  // Priority of interrupt 76
  using PRI76 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP76_fields_

struct NVICIP76 : ftl::mmio::Register<
    0xE000E44Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP76_fields_::PRI76> {
  using PRI76 = NVICIP76_fields_::PRI76;
};


// Interrupt Priority Register 77
struct NVICIP77_fields_ {
  // Priority of interrupt 77
  using PRI77 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP77_fields_

struct NVICIP77 : ftl::mmio::Register<
    0xE000E44Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP77_fields_::PRI77> {
  using PRI77 = NVICIP77_fields_::PRI77;
};


// Interrupt Priority Register 78
struct NVICIP78_fields_ {
  // Priority of interrupt 78
  using PRI78 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP78_fields_

struct NVICIP78 : ftl::mmio::Register<
    0xE000E44Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP78_fields_::PRI78> {
  using PRI78 = NVICIP78_fields_::PRI78;
};


// Interrupt Priority Register 79
struct NVICIP79_fields_ {
  // Priority of interrupt 79
  using PRI79 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP79_fields_

struct NVICIP79 : ftl::mmio::Register<
    0xE000E44Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP79_fields_::PRI79> {
  using PRI79 = NVICIP79_fields_::PRI79;
};


// Interrupt Priority Register 80
struct NVICIP80_fields_ {
  // Priority of interrupt 80
  using PRI80 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP80_fields_

struct NVICIP80 : ftl::mmio::Register<
    0xE000E450u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP80_fields_::PRI80> {
  using PRI80 = NVICIP80_fields_::PRI80;
};


// Interrupt Priority Register 81
struct NVICIP81_fields_ {
  // Priority of interrupt 81
  using PRI81 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP81_fields_

struct NVICIP81 : ftl::mmio::Register<
    0xE000E451u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP81_fields_::PRI81> {
  using PRI81 = NVICIP81_fields_::PRI81;
};


// Interrupt Priority Register 82
struct NVICIP82_fields_ {
  // Priority of interrupt 82
  using PRI82 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP82_fields_

struct NVICIP82 : ftl::mmio::Register<
    0xE000E452u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP82_fields_::PRI82> {
  using PRI82 = NVICIP82_fields_::PRI82;
};


// Interrupt Priority Register 83
struct NVICIP83_fields_ {
  // Priority of interrupt 83
  using PRI83 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP83_fields_

struct NVICIP83 : ftl::mmio::Register<
    0xE000E453u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP83_fields_::PRI83> {
  using PRI83 = NVICIP83_fields_::PRI83;
};


// Interrupt Priority Register 84
struct NVICIP84_fields_ {
  // Priority of interrupt 84
  using PRI84 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP84_fields_

struct NVICIP84 : ftl::mmio::Register<
    0xE000E454u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP84_fields_::PRI84> {
  using PRI84 = NVICIP84_fields_::PRI84;
};


// Interrupt Priority Register 85
struct NVICIP85_fields_ {
  // Priority of interrupt 85
  using PRI85 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP85_fields_

struct NVICIP85 : ftl::mmio::Register<
    0xE000E455u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP85_fields_::PRI85> {
  using PRI85 = NVICIP85_fields_::PRI85;
};


// Interrupt Priority Register 86
struct NVICIP86_fields_ {
  // Priority of interrupt 86
  using PRI86 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP86_fields_

struct NVICIP86 : ftl::mmio::Register<
    0xE000E456u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP86_fields_::PRI86> {
  using PRI86 = NVICIP86_fields_::PRI86;
};


// Interrupt Priority Register 87
struct NVICIP87_fields_ {
  // Priority of interrupt 87
  using PRI87 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP87_fields_

struct NVICIP87 : ftl::mmio::Register<
    0xE000E457u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP87_fields_::PRI87> {
  using PRI87 = NVICIP87_fields_::PRI87;
};


// Interrupt Priority Register 88
struct NVICIP88_fields_ {
  // Priority of interrupt 88
  using PRI88 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP88_fields_

struct NVICIP88 : ftl::mmio::Register<
    0xE000E458u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP88_fields_::PRI88> {
  using PRI88 = NVICIP88_fields_::PRI88;
};


// Interrupt Priority Register 89
struct NVICIP89_fields_ {
  // Priority of interrupt 89
  using PRI89 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP89_fields_

struct NVICIP89 : ftl::mmio::Register<
    0xE000E459u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP89_fields_::PRI89> {
  using PRI89 = NVICIP89_fields_::PRI89;
};


// Interrupt Priority Register 90
struct NVICIP90_fields_ {
  // Priority of interrupt 90
  using PRI90 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP90_fields_

struct NVICIP90 : ftl::mmio::Register<
    0xE000E45Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP90_fields_::PRI90> {
  using PRI90 = NVICIP90_fields_::PRI90;
};


// Interrupt Priority Register 91
struct NVICIP91_fields_ {
  // Priority of interrupt 91
  using PRI91 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP91_fields_

struct NVICIP91 : ftl::mmio::Register<
    0xE000E45Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP91_fields_::PRI91> {
  using PRI91 = NVICIP91_fields_::PRI91;
};


// Interrupt Priority Register 92
struct NVICIP92_fields_ {
  // Priority of interrupt 92
  using PRI92 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP92_fields_

struct NVICIP92 : ftl::mmio::Register<
    0xE000E45Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP92_fields_::PRI92> {
  using PRI92 = NVICIP92_fields_::PRI92;
};


// Interrupt Priority Register 93
struct NVICIP93_fields_ {
  // Priority of interrupt 93
  using PRI93 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP93_fields_

struct NVICIP93 : ftl::mmio::Register<
    0xE000E45Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP93_fields_::PRI93> {
  using PRI93 = NVICIP93_fields_::PRI93;
};


// Interrupt Priority Register 94
struct NVICIP94_fields_ {
  // Priority of interrupt 94
  using PRI94 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP94_fields_

struct NVICIP94 : ftl::mmio::Register<
    0xE000E45Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP94_fields_::PRI94> {
  using PRI94 = NVICIP94_fields_::PRI94;
};


// Interrupt Priority Register 95
struct NVICIP95_fields_ {
  // Priority of interrupt 95
  using PRI95 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP95_fields_

struct NVICIP95 : ftl::mmio::Register<
    0xE000E45Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP95_fields_::PRI95> {
  using PRI95 = NVICIP95_fields_::PRI95;
};


// Interrupt Priority Register 96
struct NVICIP96_fields_ {
  // Priority of interrupt 96
  using PRI96 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP96_fields_

struct NVICIP96 : ftl::mmio::Register<
    0xE000E460u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP96_fields_::PRI96> {
  using PRI96 = NVICIP96_fields_::PRI96;
};


// Interrupt Priority Register 97
struct NVICIP97_fields_ {
  // Priority of interrupt 97
  using PRI97 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP97_fields_

struct NVICIP97 : ftl::mmio::Register<
    0xE000E461u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP97_fields_::PRI97> {
  using PRI97 = NVICIP97_fields_::PRI97;
};


// Interrupt Priority Register 98
struct NVICIP98_fields_ {
  // Priority of interrupt 98
  using PRI98 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP98_fields_

struct NVICIP98 : ftl::mmio::Register<
    0xE000E462u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP98_fields_::PRI98> {
  using PRI98 = NVICIP98_fields_::PRI98;
};


// Interrupt Priority Register 99
struct NVICIP99_fields_ {
  // Priority of interrupt 99
  using PRI99 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP99_fields_

struct NVICIP99 : ftl::mmio::Register<
    0xE000E463u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP99_fields_::PRI99> {
  using PRI99 = NVICIP99_fields_::PRI99;
};


// Interrupt Priority Register 100
struct NVICIP100_fields_ {
  // Priority of interrupt 100
  using PRI100 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP100_fields_

struct NVICIP100 : ftl::mmio::Register<
    0xE000E464u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP100_fields_::PRI100> {
  using PRI100 = NVICIP100_fields_::PRI100;
};


// Interrupt Priority Register 101
struct NVICIP101_fields_ {
  // Priority of interrupt 101
  using PRI101 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP101_fields_

struct NVICIP101 : ftl::mmio::Register<
    0xE000E465u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP101_fields_::PRI101> {
  using PRI101 = NVICIP101_fields_::PRI101;
};


// Interrupt Priority Register 102
struct NVICIP102_fields_ {
  // Priority of interrupt 102
  using PRI102 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP102_fields_

struct NVICIP102 : ftl::mmio::Register<
    0xE000E466u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP102_fields_::PRI102> {
  using PRI102 = NVICIP102_fields_::PRI102;
};


// Interrupt Priority Register 103
struct NVICIP103_fields_ {
  // Priority of interrupt 103
  using PRI103 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP103_fields_

struct NVICIP103 : ftl::mmio::Register<
    0xE000E467u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP103_fields_::PRI103> {
  using PRI103 = NVICIP103_fields_::PRI103;
};


// Interrupt Priority Register 104
struct NVICIP104_fields_ {
  // Priority of interrupt 104
  using PRI104 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP104_fields_

struct NVICIP104 : ftl::mmio::Register<
    0xE000E468u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP104_fields_::PRI104> {
  using PRI104 = NVICIP104_fields_::PRI104;
};


// Interrupt Priority Register 105
struct NVICIP105_fields_ {
  // Priority of interrupt 105
  using PRI105 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP105_fields_

struct NVICIP105 : ftl::mmio::Register<
    0xE000E469u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP105_fields_::PRI105> {
  using PRI105 = NVICIP105_fields_::PRI105;
};


// Interrupt Priority Register 106
struct NVICIP106_fields_ {
  // Priority of interrupt 106
  using PRI106 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP106_fields_

struct NVICIP106 : ftl::mmio::Register<
    0xE000E46Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP106_fields_::PRI106> {
  using PRI106 = NVICIP106_fields_::PRI106;
};


// Interrupt Priority Register 107
struct NVICIP107_fields_ {
  // Priority of interrupt 107
  using PRI107 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP107_fields_

struct NVICIP107 : ftl::mmio::Register<
    0xE000E46Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP107_fields_::PRI107> {
  using PRI107 = NVICIP107_fields_::PRI107;
};


// Interrupt Priority Register 108
struct NVICIP108_fields_ {
  // Priority of interrupt 108
  using PRI108 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP108_fields_

struct NVICIP108 : ftl::mmio::Register<
    0xE000E46Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP108_fields_::PRI108> {
  using PRI108 = NVICIP108_fields_::PRI108;
};


// Interrupt Priority Register 109
struct NVICIP109_fields_ {
  // Priority of interrupt 109
  using PRI109 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP109_fields_

struct NVICIP109 : ftl::mmio::Register<
    0xE000E46Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP109_fields_::PRI109> {
  using PRI109 = NVICIP109_fields_::PRI109;
};


// Interrupt Priority Register 110
struct NVICIP110_fields_ {
  // Priority of interrupt 110
  using PRI110 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP110_fields_

struct NVICIP110 : ftl::mmio::Register<
    0xE000E46Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP110_fields_::PRI110> {
  using PRI110 = NVICIP110_fields_::PRI110;
};


// Interrupt Priority Register 111
struct NVICIP111_fields_ {
  // Priority of interrupt 111
  using PRI111 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP111_fields_

struct NVICIP111 : ftl::mmio::Register<
    0xE000E46Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP111_fields_::PRI111> {
  using PRI111 = NVICIP111_fields_::PRI111;
};


// Interrupt Priority Register 112
struct NVICIP112_fields_ {
  // Priority of interrupt 112
  using PRI112 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP112_fields_

struct NVICIP112 : ftl::mmio::Register<
    0xE000E470u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP112_fields_::PRI112> {
  using PRI112 = NVICIP112_fields_::PRI112;
};


// Interrupt Priority Register 113
struct NVICIP113_fields_ {
  // Priority of interrupt 113
  using PRI113 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP113_fields_

struct NVICIP113 : ftl::mmio::Register<
    0xE000E471u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP113_fields_::PRI113> {
  using PRI113 = NVICIP113_fields_::PRI113;
};


// Interrupt Priority Register 114
struct NVICIP114_fields_ {
  // Priority of interrupt 114
  using PRI114 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP114_fields_

struct NVICIP114 : ftl::mmio::Register<
    0xE000E472u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP114_fields_::PRI114> {
  using PRI114 = NVICIP114_fields_::PRI114;
};


// Interrupt Priority Register 115
struct NVICIP115_fields_ {
  // Priority of interrupt 115
  using PRI115 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP115_fields_

struct NVICIP115 : ftl::mmio::Register<
    0xE000E473u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP115_fields_::PRI115> {
  using PRI115 = NVICIP115_fields_::PRI115;
};


// Interrupt Priority Register 116
struct NVICIP116_fields_ {
  // Priority of interrupt 116
  using PRI116 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP116_fields_

struct NVICIP116 : ftl::mmio::Register<
    0xE000E474u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP116_fields_::PRI116> {
  using PRI116 = NVICIP116_fields_::PRI116;
};


// Interrupt Priority Register 117
struct NVICIP117_fields_ {
  // Priority of interrupt 117
  using PRI117 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP117_fields_

struct NVICIP117 : ftl::mmio::Register<
    0xE000E475u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP117_fields_::PRI117> {
  using PRI117 = NVICIP117_fields_::PRI117;
};


// Interrupt Priority Register 118
struct NVICIP118_fields_ {
  // Priority of interrupt 118
  using PRI118 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP118_fields_

struct NVICIP118 : ftl::mmio::Register<
    0xE000E476u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP118_fields_::PRI118> {
  using PRI118 = NVICIP118_fields_::PRI118;
};


// Interrupt Priority Register 119
struct NVICIP119_fields_ {
  // Priority of interrupt 119
  using PRI119 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP119_fields_

struct NVICIP119 : ftl::mmio::Register<
    0xE000E477u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP119_fields_::PRI119> {
  using PRI119 = NVICIP119_fields_::PRI119;
};


// Interrupt Priority Register 120
struct NVICIP120_fields_ {
  // Priority of interrupt 120
  using PRI120 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP120_fields_

struct NVICIP120 : ftl::mmio::Register<
    0xE000E478u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP120_fields_::PRI120> {
  using PRI120 = NVICIP120_fields_::PRI120;
};


// Interrupt Priority Register 121
struct NVICIP121_fields_ {
  // Priority of interrupt 121
  using PRI121 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP121_fields_

struct NVICIP121 : ftl::mmio::Register<
    0xE000E479u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP121_fields_::PRI121> {
  using PRI121 = NVICIP121_fields_::PRI121;
};


// Interrupt Priority Register 122
struct NVICIP122_fields_ {
  // Priority of interrupt 122
  using PRI122 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP122_fields_

struct NVICIP122 : ftl::mmio::Register<
    0xE000E47Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP122_fields_::PRI122> {
  using PRI122 = NVICIP122_fields_::PRI122;
};


// Interrupt Priority Register 123
struct NVICIP123_fields_ {
  // Priority of interrupt 123
  using PRI123 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP123_fields_

struct NVICIP123 : ftl::mmio::Register<
    0xE000E47Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP123_fields_::PRI123> {
  using PRI123 = NVICIP123_fields_::PRI123;
};


// Interrupt Priority Register 124
struct NVICIP124_fields_ {
  // Priority of interrupt 124
  using PRI124 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP124_fields_

struct NVICIP124 : ftl::mmio::Register<
    0xE000E47Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP124_fields_::PRI124> {
  using PRI124 = NVICIP124_fields_::PRI124;
};


// Interrupt Priority Register 125
struct NVICIP125_fields_ {
  // Priority of interrupt 125
  using PRI125 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP125_fields_

struct NVICIP125 : ftl::mmio::Register<
    0xE000E47Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP125_fields_::PRI125> {
  using PRI125 = NVICIP125_fields_::PRI125;
};


// Interrupt Priority Register 126
struct NVICIP126_fields_ {
  // Priority of interrupt 126
  using PRI126 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP126_fields_

struct NVICIP126 : ftl::mmio::Register<
    0xE000E47Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP126_fields_::PRI126> {
  using PRI126 = NVICIP126_fields_::PRI126;
};


// Interrupt Priority Register 127
struct NVICIP127_fields_ {
  // Priority of interrupt 127
  using PRI127 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP127_fields_

struct NVICIP127 : ftl::mmio::Register<
    0xE000E47Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP127_fields_::PRI127> {
  using PRI127 = NVICIP127_fields_::PRI127;
};


// Interrupt Priority Register 128
struct NVICIP128_fields_ {
  // Priority of interrupt 128
  using PRI128 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP128_fields_

struct NVICIP128 : ftl::mmio::Register<
    0xE000E480u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP128_fields_::PRI128> {
  using PRI128 = NVICIP128_fields_::PRI128;
};


// Interrupt Priority Register 129
struct NVICIP129_fields_ {
  // Priority of interrupt 129
  using PRI129 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP129_fields_

struct NVICIP129 : ftl::mmio::Register<
    0xE000E481u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP129_fields_::PRI129> {
  using PRI129 = NVICIP129_fields_::PRI129;
};


// Interrupt Priority Register 130
struct NVICIP130_fields_ {
  // Priority of interrupt 130
  using PRI130 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP130_fields_

struct NVICIP130 : ftl::mmio::Register<
    0xE000E482u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP130_fields_::PRI130> {
  using PRI130 = NVICIP130_fields_::PRI130;
};


// Interrupt Priority Register 131
struct NVICIP131_fields_ {
  // Priority of interrupt 131
  using PRI131 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP131_fields_

struct NVICIP131 : ftl::mmio::Register<
    0xE000E483u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP131_fields_::PRI131> {
  using PRI131 = NVICIP131_fields_::PRI131;
};


// Interrupt Priority Register 132
struct NVICIP132_fields_ {
  // Priority of interrupt 132
  using PRI132 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP132_fields_

struct NVICIP132 : ftl::mmio::Register<
    0xE000E484u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP132_fields_::PRI132> {
  using PRI132 = NVICIP132_fields_::PRI132;
};


// Interrupt Priority Register 133
struct NVICIP133_fields_ {
  // Priority of interrupt 133
  using PRI133 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP133_fields_

struct NVICIP133 : ftl::mmio::Register<
    0xE000E485u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP133_fields_::PRI133> {
  using PRI133 = NVICIP133_fields_::PRI133;
};


// Interrupt Priority Register 134
struct NVICIP134_fields_ {
  // Priority of interrupt 134
  using PRI134 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP134_fields_

struct NVICIP134 : ftl::mmio::Register<
    0xE000E486u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP134_fields_::PRI134> {
  using PRI134 = NVICIP134_fields_::PRI134;
};


// Interrupt Priority Register 135
struct NVICIP135_fields_ {
  // Priority of interrupt 135
  using PRI135 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP135_fields_

struct NVICIP135 : ftl::mmio::Register<
    0xE000E487u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP135_fields_::PRI135> {
  using PRI135 = NVICIP135_fields_::PRI135;
};


// Interrupt Priority Register 136
struct NVICIP136_fields_ {
  // Priority of interrupt 136
  using PRI136 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP136_fields_

struct NVICIP136 : ftl::mmio::Register<
    0xE000E488u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP136_fields_::PRI136> {
  using PRI136 = NVICIP136_fields_::PRI136;
};


// Interrupt Priority Register 137
struct NVICIP137_fields_ {
  // Priority of interrupt 137
  using PRI137 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP137_fields_

struct NVICIP137 : ftl::mmio::Register<
    0xE000E489u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP137_fields_::PRI137> {
  using PRI137 = NVICIP137_fields_::PRI137;
};


// Interrupt Priority Register 138
struct NVICIP138_fields_ {
  // Priority of interrupt 138
  using PRI138 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP138_fields_

struct NVICIP138 : ftl::mmio::Register<
    0xE000E48Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP138_fields_::PRI138> {
  using PRI138 = NVICIP138_fields_::PRI138;
};


// Interrupt Priority Register 139
struct NVICIP139_fields_ {
  // Priority of interrupt 139
  using PRI139 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP139_fields_

struct NVICIP139 : ftl::mmio::Register<
    0xE000E48Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP139_fields_::PRI139> {
  using PRI139 = NVICIP139_fields_::PRI139;
};


// Interrupt Priority Register 140
struct NVICIP140_fields_ {
  // Priority of interrupt 140
  using PRI140 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP140_fields_

struct NVICIP140 : ftl::mmio::Register<
    0xE000E48Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP140_fields_::PRI140> {
  using PRI140 = NVICIP140_fields_::PRI140;
};


// Interrupt Priority Register 141
struct NVICIP141_fields_ {
  // Priority of interrupt 141
  using PRI141 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP141_fields_

struct NVICIP141 : ftl::mmio::Register<
    0xE000E48Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP141_fields_::PRI141> {
  using PRI141 = NVICIP141_fields_::PRI141;
};


// Interrupt Priority Register 142
struct NVICIP142_fields_ {
  // Priority of interrupt 142
  using PRI142 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP142_fields_

struct NVICIP142 : ftl::mmio::Register<
    0xE000E48Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP142_fields_::PRI142> {
  using PRI142 = NVICIP142_fields_::PRI142;
};


// Interrupt Priority Register 143
struct NVICIP143_fields_ {
  // Priority of interrupt 143
  using PRI143 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP143_fields_

struct NVICIP143 : ftl::mmio::Register<
    0xE000E48Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP143_fields_::PRI143> {
  using PRI143 = NVICIP143_fields_::PRI143;
};


// Interrupt Priority Register 144
struct NVICIP144_fields_ {
  // Priority of interrupt 144
  using PRI144 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP144_fields_

struct NVICIP144 : ftl::mmio::Register<
    0xE000E490u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP144_fields_::PRI144> {
  using PRI144 = NVICIP144_fields_::PRI144;
};


// Interrupt Priority Register 145
struct NVICIP145_fields_ {
  // Priority of interrupt 145
  using PRI145 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP145_fields_

struct NVICIP145 : ftl::mmio::Register<
    0xE000E491u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP145_fields_::PRI145> {
  using PRI145 = NVICIP145_fields_::PRI145;
};


// Interrupt Priority Register 146
struct NVICIP146_fields_ {
  // Priority of interrupt 146
  using PRI146 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP146_fields_

struct NVICIP146 : ftl::mmio::Register<
    0xE000E492u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP146_fields_::PRI146> {
  using PRI146 = NVICIP146_fields_::PRI146;
};


// Interrupt Priority Register 147
struct NVICIP147_fields_ {
  // Priority of interrupt 147
  using PRI147 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP147_fields_

struct NVICIP147 : ftl::mmio::Register<
    0xE000E493u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP147_fields_::PRI147> {
  using PRI147 = NVICIP147_fields_::PRI147;
};


// Interrupt Priority Register 148
struct NVICIP148_fields_ {
  // Priority of interrupt 148
  using PRI148 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP148_fields_

struct NVICIP148 : ftl::mmio::Register<
    0xE000E494u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP148_fields_::PRI148> {
  using PRI148 = NVICIP148_fields_::PRI148;
};


// Interrupt Priority Register 149
struct NVICIP149_fields_ {
  // Priority of interrupt 149
  using PRI149 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP149_fields_

struct NVICIP149 : ftl::mmio::Register<
    0xE000E495u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP149_fields_::PRI149> {
  using PRI149 = NVICIP149_fields_::PRI149;
};


// Interrupt Priority Register 150
struct NVICIP150_fields_ {
  // Priority of interrupt 150
  using PRI150 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP150_fields_

struct NVICIP150 : ftl::mmio::Register<
    0xE000E496u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP150_fields_::PRI150> {
  using PRI150 = NVICIP150_fields_::PRI150;
};


// Interrupt Priority Register 151
struct NVICIP151_fields_ {
  // Priority of interrupt 151
  using PRI151 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP151_fields_

struct NVICIP151 : ftl::mmio::Register<
    0xE000E497u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP151_fields_::PRI151> {
  using PRI151 = NVICIP151_fields_::PRI151;
};


// Interrupt Priority Register 152
struct NVICIP152_fields_ {
  // Priority of interrupt 152
  using PRI152 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP152_fields_

struct NVICIP152 : ftl::mmio::Register<
    0xE000E498u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP152_fields_::PRI152> {
  using PRI152 = NVICIP152_fields_::PRI152;
};


// Interrupt Priority Register 153
struct NVICIP153_fields_ {
  // Priority of interrupt 153
  using PRI153 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP153_fields_

struct NVICIP153 : ftl::mmio::Register<
    0xE000E499u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP153_fields_::PRI153> {
  using PRI153 = NVICIP153_fields_::PRI153;
};


// Interrupt Priority Register 154
struct NVICIP154_fields_ {
  // Priority of interrupt 154
  using PRI154 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP154_fields_

struct NVICIP154 : ftl::mmio::Register<
    0xE000E49Au,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP154_fields_::PRI154> {
  using PRI154 = NVICIP154_fields_::PRI154;
};


// Interrupt Priority Register 155
struct NVICIP155_fields_ {
  // Priority of interrupt 155
  using PRI155 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP155_fields_

struct NVICIP155 : ftl::mmio::Register<
    0xE000E49Bu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP155_fields_::PRI155> {
  using PRI155 = NVICIP155_fields_::PRI155;
};


// Interrupt Priority Register 156
struct NVICIP156_fields_ {
  // Priority of interrupt 156
  using PRI156 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP156_fields_

struct NVICIP156 : ftl::mmio::Register<
    0xE000E49Cu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP156_fields_::PRI156> {
  using PRI156 = NVICIP156_fields_::PRI156;
};


// Interrupt Priority Register 157
struct NVICIP157_fields_ {
  // Priority of interrupt 157
  using PRI157 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP157_fields_

struct NVICIP157 : ftl::mmio::Register<
    0xE000E49Du,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP157_fields_::PRI157> {
  using PRI157 = NVICIP157_fields_::PRI157;
};


// Interrupt Priority Register 158
struct NVICIP158_fields_ {
  // Priority of interrupt 158
  using PRI158 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP158_fields_

struct NVICIP158 : ftl::mmio::Register<
    0xE000E49Eu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP158_fields_::PRI158> {
  using PRI158 = NVICIP158_fields_::PRI158;
};


// Interrupt Priority Register 159
struct NVICIP159_fields_ {
  // Priority of interrupt 159
  using PRI159 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP159_fields_

struct NVICIP159 : ftl::mmio::Register<
    0xE000E49Fu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP159_fields_::PRI159> {
  using PRI159 = NVICIP159_fields_::PRI159;
};


// Interrupt Priority Register 160
struct NVICIP160_fields_ {
  // Priority of interrupt 160
  using PRI160 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP160_fields_

struct NVICIP160 : ftl::mmio::Register<
    0xE000E4A0u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP160_fields_::PRI160> {
  using PRI160 = NVICIP160_fields_::PRI160;
};


// Interrupt Priority Register 161
struct NVICIP161_fields_ {
  // Priority of interrupt 161
  using PRI161 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP161_fields_

struct NVICIP161 : ftl::mmio::Register<
    0xE000E4A1u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP161_fields_::PRI161> {
  using PRI161 = NVICIP161_fields_::PRI161;
};


// Interrupt Priority Register 162
struct NVICIP162_fields_ {
  // Priority of interrupt 162
  using PRI162 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP162_fields_

struct NVICIP162 : ftl::mmio::Register<
    0xE000E4A2u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP162_fields_::PRI162> {
  using PRI162 = NVICIP162_fields_::PRI162;
};


// Interrupt Priority Register 163
struct NVICIP163_fields_ {
  // Priority of interrupt 163
  using PRI163 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP163_fields_

struct NVICIP163 : ftl::mmio::Register<
    0xE000E4A3u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP163_fields_::PRI163> {
  using PRI163 = NVICIP163_fields_::PRI163;
};


// Interrupt Priority Register 164
struct NVICIP164_fields_ {
  // Priority of interrupt 164
  using PRI164 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP164_fields_

struct NVICIP164 : ftl::mmio::Register<
    0xE000E4A4u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP164_fields_::PRI164> {
  using PRI164 = NVICIP164_fields_::PRI164;
};


// Interrupt Priority Register 165
struct NVICIP165_fields_ {
  // Priority of interrupt 165
  using PRI165 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP165_fields_

struct NVICIP165 : ftl::mmio::Register<
    0xE000E4A5u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP165_fields_::PRI165> {
  using PRI165 = NVICIP165_fields_::PRI165;
};


// Interrupt Priority Register 166
struct NVICIP166_fields_ {
  // Priority of interrupt 166
  using PRI166 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP166_fields_

struct NVICIP166 : ftl::mmio::Register<
    0xE000E4A6u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP166_fields_::PRI166> {
  using PRI166 = NVICIP166_fields_::PRI166;
};


// Interrupt Priority Register 167
struct NVICIP167_fields_ {
  // Priority of interrupt 167
  using PRI167 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP167_fields_

struct NVICIP167 : ftl::mmio::Register<
    0xE000E4A7u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP167_fields_::PRI167> {
  using PRI167 = NVICIP167_fields_::PRI167;
};


// Interrupt Priority Register 168
struct NVICIP168_fields_ {
  // Priority of interrupt 168
  using PRI168 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP168_fields_

struct NVICIP168 : ftl::mmio::Register<
    0xE000E4A8u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP168_fields_::PRI168> {
  using PRI168 = NVICIP168_fields_::PRI168;
};


// Interrupt Priority Register 169
struct NVICIP169_fields_ {
  // Priority of interrupt 169
  using PRI169 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP169_fields_

struct NVICIP169 : ftl::mmio::Register<
    0xE000E4A9u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP169_fields_::PRI169> {
  using PRI169 = NVICIP169_fields_::PRI169;
};


// Interrupt Priority Register 170
struct NVICIP170_fields_ {
  // Priority of interrupt 170
  using PRI170 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP170_fields_

struct NVICIP170 : ftl::mmio::Register<
    0xE000E4AAu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP170_fields_::PRI170> {
  using PRI170 = NVICIP170_fields_::PRI170;
};


// Interrupt Priority Register 171
struct NVICIP171_fields_ {
  // Priority of interrupt 171
  using PRI171 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP171_fields_

struct NVICIP171 : ftl::mmio::Register<
    0xE000E4ABu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP171_fields_::PRI171> {
  using PRI171 = NVICIP171_fields_::PRI171;
};


// Interrupt Priority Register 172
struct NVICIP172_fields_ {
  // Priority of interrupt 172
  using PRI172 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP172_fields_

struct NVICIP172 : ftl::mmio::Register<
    0xE000E4ACu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP172_fields_::PRI172> {
  using PRI172 = NVICIP172_fields_::PRI172;
};


// Interrupt Priority Register 173
struct NVICIP173_fields_ {
  // Priority of interrupt 173
  using PRI173 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP173_fields_

struct NVICIP173 : ftl::mmio::Register<
    0xE000E4ADu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP173_fields_::PRI173> {
  using PRI173 = NVICIP173_fields_::PRI173;
};


// Interrupt Priority Register 174
struct NVICIP174_fields_ {
  // Priority of interrupt 174
  using PRI174 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP174_fields_

struct NVICIP174 : ftl::mmio::Register<
    0xE000E4AEu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP174_fields_::PRI174> {
  using PRI174 = NVICIP174_fields_::PRI174;
};


// Interrupt Priority Register 175
struct NVICIP175_fields_ {
  // Priority of interrupt 175
  using PRI175 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP175_fields_

struct NVICIP175 : ftl::mmio::Register<
    0xE000E4AFu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP175_fields_::PRI175> {
  using PRI175 = NVICIP175_fields_::PRI175;
};


// Interrupt Priority Register 176
struct NVICIP176_fields_ {
  // Priority of interrupt 176
  using PRI176 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP176_fields_

struct NVICIP176 : ftl::mmio::Register<
    0xE000E4B0u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP176_fields_::PRI176> {
  using PRI176 = NVICIP176_fields_::PRI176;
};


// Interrupt Priority Register 177
struct NVICIP177_fields_ {
  // Priority of interrupt 177
  using PRI177 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP177_fields_

struct NVICIP177 : ftl::mmio::Register<
    0xE000E4B1u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP177_fields_::PRI177> {
  using PRI177 = NVICIP177_fields_::PRI177;
};


// Interrupt Priority Register 178
struct NVICIP178_fields_ {
  // Priority of interrupt 178
  using PRI178 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP178_fields_

struct NVICIP178 : ftl::mmio::Register<
    0xE000E4B2u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP178_fields_::PRI178> {
  using PRI178 = NVICIP178_fields_::PRI178;
};


// Interrupt Priority Register 179
struct NVICIP179_fields_ {
  // Priority of interrupt 179
  using PRI179 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP179_fields_

struct NVICIP179 : ftl::mmio::Register<
    0xE000E4B3u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP179_fields_::PRI179> {
  using PRI179 = NVICIP179_fields_::PRI179;
};


// Interrupt Priority Register 180
struct NVICIP180_fields_ {
  // Priority of interrupt 180
  using PRI180 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP180_fields_

struct NVICIP180 : ftl::mmio::Register<
    0xE000E4B4u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP180_fields_::PRI180> {
  using PRI180 = NVICIP180_fields_::PRI180;
};


// Interrupt Priority Register 181
struct NVICIP181_fields_ {
  // Priority of interrupt 181
  using PRI181 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP181_fields_

struct NVICIP181 : ftl::mmio::Register<
    0xE000E4B5u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP181_fields_::PRI181> {
  using PRI181 = NVICIP181_fields_::PRI181;
};


// Interrupt Priority Register 182
struct NVICIP182_fields_ {
  // Priority of interrupt 182
  using PRI182 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP182_fields_

struct NVICIP182 : ftl::mmio::Register<
    0xE000E4B6u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP182_fields_::PRI182> {
  using PRI182 = NVICIP182_fields_::PRI182;
};


// Interrupt Priority Register 183
struct NVICIP183_fields_ {
  // Priority of interrupt 183
  using PRI183 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP183_fields_

struct NVICIP183 : ftl::mmio::Register<
    0xE000E4B7u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP183_fields_::PRI183> {
  using PRI183 = NVICIP183_fields_::PRI183;
};


// Interrupt Priority Register 184
struct NVICIP184_fields_ {
  // Priority of interrupt 184
  using PRI184 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP184_fields_

struct NVICIP184 : ftl::mmio::Register<
    0xE000E4B8u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP184_fields_::PRI184> {
  using PRI184 = NVICIP184_fields_::PRI184;
};


// Interrupt Priority Register 185
struct NVICIP185_fields_ {
  // Priority of interrupt 185
  using PRI185 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP185_fields_

struct NVICIP185 : ftl::mmio::Register<
    0xE000E4B9u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP185_fields_::PRI185> {
  using PRI185 = NVICIP185_fields_::PRI185;
};


// Interrupt Priority Register 186
struct NVICIP186_fields_ {
  // Priority of interrupt 186
  using PRI186 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP186_fields_

struct NVICIP186 : ftl::mmio::Register<
    0xE000E4BAu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP186_fields_::PRI186> {
  using PRI186 = NVICIP186_fields_::PRI186;
};


// Interrupt Priority Register 187
struct NVICIP187_fields_ {
  // Priority of interrupt 187
  using PRI187 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP187_fields_

struct NVICIP187 : ftl::mmio::Register<
    0xE000E4BBu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP187_fields_::PRI187> {
  using PRI187 = NVICIP187_fields_::PRI187;
};


// Interrupt Priority Register 188
struct NVICIP188_fields_ {
  // Priority of interrupt 188
  using PRI188 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP188_fields_

struct NVICIP188 : ftl::mmio::Register<
    0xE000E4BCu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP188_fields_::PRI188> {
  using PRI188 = NVICIP188_fields_::PRI188;
};


// Interrupt Priority Register 189
struct NVICIP189_fields_ {
  // Priority of interrupt 189
  using PRI189 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP189_fields_

struct NVICIP189 : ftl::mmio::Register<
    0xE000E4BDu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP189_fields_::PRI189> {
  using PRI189 = NVICIP189_fields_::PRI189;
};


// Interrupt Priority Register 190
struct NVICIP190_fields_ {
  // Priority of interrupt 190
  using PRI190 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP190_fields_

struct NVICIP190 : ftl::mmio::Register<
    0xE000E4BEu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP190_fields_::PRI190> {
  using PRI190 = NVICIP190_fields_::PRI190;
};


// Interrupt Priority Register 191
struct NVICIP191_fields_ {
  // Priority of interrupt 191
  using PRI191 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP191_fields_

struct NVICIP191 : ftl::mmio::Register<
    0xE000E4BFu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP191_fields_::PRI191> {
  using PRI191 = NVICIP191_fields_::PRI191;
};


// Interrupt Priority Register 192
struct NVICIP192_fields_ {
  // Priority of interrupt 192
  using PRI192 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP192_fields_

struct NVICIP192 : ftl::mmio::Register<
    0xE000E4C0u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP192_fields_::PRI192> {
  using PRI192 = NVICIP192_fields_::PRI192;
};


// Interrupt Priority Register 193
struct NVICIP193_fields_ {
  // Priority of interrupt 193
  using PRI193 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP193_fields_

struct NVICIP193 : ftl::mmio::Register<
    0xE000E4C1u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP193_fields_::PRI193> {
  using PRI193 = NVICIP193_fields_::PRI193;
};


// Interrupt Priority Register 194
struct NVICIP194_fields_ {
  // Priority of interrupt 194
  using PRI194 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP194_fields_

struct NVICIP194 : ftl::mmio::Register<
    0xE000E4C2u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP194_fields_::PRI194> {
  using PRI194 = NVICIP194_fields_::PRI194;
};


// Interrupt Priority Register 195
struct NVICIP195_fields_ {
  // Priority of interrupt 195
  using PRI195 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP195_fields_

struct NVICIP195 : ftl::mmio::Register<
    0xE000E4C3u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP195_fields_::PRI195> {
  using PRI195 = NVICIP195_fields_::PRI195;
};


// Interrupt Priority Register 196
struct NVICIP196_fields_ {
  // Priority of interrupt 196
  using PRI196 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP196_fields_

struct NVICIP196 : ftl::mmio::Register<
    0xE000E4C4u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP196_fields_::PRI196> {
  using PRI196 = NVICIP196_fields_::PRI196;
};


// Interrupt Priority Register 197
struct NVICIP197_fields_ {
  // Priority of interrupt 197
  using PRI197 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP197_fields_

struct NVICIP197 : ftl::mmio::Register<
    0xE000E4C5u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP197_fields_::PRI197> {
  using PRI197 = NVICIP197_fields_::PRI197;
};


// Interrupt Priority Register 198
struct NVICIP198_fields_ {
  // Priority of interrupt 198
  using PRI198 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP198_fields_

struct NVICIP198 : ftl::mmio::Register<
    0xE000E4C6u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP198_fields_::PRI198> {
  using PRI198 = NVICIP198_fields_::PRI198;
};


// Interrupt Priority Register 199
struct NVICIP199_fields_ {
  // Priority of interrupt 199
  using PRI199 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP199_fields_

struct NVICIP199 : ftl::mmio::Register<
    0xE000E4C7u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP199_fields_::PRI199> {
  using PRI199 = NVICIP199_fields_::PRI199;
};


// Interrupt Priority Register 200
struct NVICIP200_fields_ {
  // Priority of interrupt 200
  using PRI200 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP200_fields_

struct NVICIP200 : ftl::mmio::Register<
    0xE000E4C8u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP200_fields_::PRI200> {
  using PRI200 = NVICIP200_fields_::PRI200;
};


// Interrupt Priority Register 201
struct NVICIP201_fields_ {
  // Priority of interrupt 201
  using PRI201 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP201_fields_

struct NVICIP201 : ftl::mmio::Register<
    0xE000E4C9u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP201_fields_::PRI201> {
  using PRI201 = NVICIP201_fields_::PRI201;
};


// Interrupt Priority Register 202
struct NVICIP202_fields_ {
  // Priority of interrupt 202
  using PRI202 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP202_fields_

struct NVICIP202 : ftl::mmio::Register<
    0xE000E4CAu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP202_fields_::PRI202> {
  using PRI202 = NVICIP202_fields_::PRI202;
};


// Interrupt Priority Register 203
struct NVICIP203_fields_ {
  // Priority of interrupt 203
  using PRI203 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP203_fields_

struct NVICIP203 : ftl::mmio::Register<
    0xE000E4CBu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP203_fields_::PRI203> {
  using PRI203 = NVICIP203_fields_::PRI203;
};


// Interrupt Priority Register 204
struct NVICIP204_fields_ {
  // Priority of interrupt 204
  using PRI204 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP204_fields_

struct NVICIP204 : ftl::mmio::Register<
    0xE000E4CCu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP204_fields_::PRI204> {
  using PRI204 = NVICIP204_fields_::PRI204;
};


// Interrupt Priority Register 205
struct NVICIP205_fields_ {
  // Priority of interrupt 205
  using PRI205 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP205_fields_

struct NVICIP205 : ftl::mmio::Register<
    0xE000E4CDu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP205_fields_::PRI205> {
  using PRI205 = NVICIP205_fields_::PRI205;
};


// Interrupt Priority Register 206
struct NVICIP206_fields_ {
  // Priority of interrupt 206
  using PRI206 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP206_fields_

struct NVICIP206 : ftl::mmio::Register<
    0xE000E4CEu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP206_fields_::PRI206> {
  using PRI206 = NVICIP206_fields_::PRI206;
};


// Interrupt Priority Register 207
struct NVICIP207_fields_ {
  // Priority of interrupt 207
  using PRI207 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP207_fields_

struct NVICIP207 : ftl::mmio::Register<
    0xE000E4CFu,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP207_fields_::PRI207> {
  using PRI207 = NVICIP207_fields_::PRI207;
};


// Interrupt Priority Register 208
struct NVICIP208_fields_ {
  // Priority of interrupt 208
  using PRI208 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP208_fields_

struct NVICIP208 : ftl::mmio::Register<
    0xE000E4D0u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP208_fields_::PRI208> {
  using PRI208 = NVICIP208_fields_::PRI208;
};


// Interrupt Priority Register 209
struct NVICIP209_fields_ {
  // Priority of interrupt 209
  using PRI209 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP209_fields_

struct NVICIP209 : ftl::mmio::Register<
    0xE000E4D1u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP209_fields_::PRI209> {
  using PRI209 = NVICIP209_fields_::PRI209;
};


// Interrupt Priority Register 210
struct NVICIP210_fields_ {
  // Priority of interrupt 210
  using PRI210 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP210_fields_

struct NVICIP210 : ftl::mmio::Register<
    0xE000E4D2u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP210_fields_::PRI210> {
  using PRI210 = NVICIP210_fields_::PRI210;
};


// Interrupt Priority Register 211
struct NVICIP211_fields_ {
  // Priority of interrupt 211
  using PRI211 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP211_fields_

struct NVICIP211 : ftl::mmio::Register<
    0xE000E4D3u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP211_fields_::PRI211> {
  using PRI211 = NVICIP211_fields_::PRI211;
};


// Interrupt Priority Register 212
struct NVICIP212_fields_ {
  // Priority of interrupt 212
  using PRI212 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP212_fields_

struct NVICIP212 : ftl::mmio::Register<
    0xE000E4D4u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP212_fields_::PRI212> {
  using PRI212 = NVICIP212_fields_::PRI212;
};


// Interrupt Priority Register 213
struct NVICIP213_fields_ {
  // Priority of interrupt 213
  using PRI213 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP213_fields_

struct NVICIP213 : ftl::mmio::Register<
    0xE000E4D5u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP213_fields_::PRI213> {
  using PRI213 = NVICIP213_fields_::PRI213;
};


// Interrupt Priority Register 214
struct NVICIP214_fields_ {
  // Priority of interrupt 214
  using PRI214 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP214_fields_

struct NVICIP214 : ftl::mmio::Register<
    0xE000E4D6u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP214_fields_::PRI214> {
  using PRI214 = NVICIP214_fields_::PRI214;
};


// Interrupt Priority Register 215
struct NVICIP215_fields_ {
  // Priority of interrupt 215
  using PRI215 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP215_fields_

struct NVICIP215 : ftl::mmio::Register<
    0xE000E4D7u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP215_fields_::PRI215> {
  using PRI215 = NVICIP215_fields_::PRI215;
};


// Interrupt Priority Register 216
struct NVICIP216_fields_ {
  // Priority of interrupt 216
  using PRI216 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP216_fields_

struct NVICIP216 : ftl::mmio::Register<
    0xE000E4D8u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP216_fields_::PRI216> {
  using PRI216 = NVICIP216_fields_::PRI216;
};


// Interrupt Priority Register 217
struct NVICIP217_fields_ {
  // Priority of interrupt 217
  using PRI217 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICIP217_fields_

struct NVICIP217 : ftl::mmio::Register<
    0xE000E4D9u,
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    NVICIP217_fields_::PRI217> {
  using PRI217 = NVICIP217_fields_::PRI217;
};


// Software Trigger Interrupt Register
struct NVICSTIR_fields_ {
  // Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
  using INTID = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct NVICSTIR_fields_

struct NVICSTIR : ftl::mmio::Register<
    0xE000EF00u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    NVICSTIR_fields_::INTID,
    ftl::mmio::Reserved<23, 9>> {
  using INTID = NVICSTIR_fields_::INTID;
};

}  // namespace regs::cm7_nvic