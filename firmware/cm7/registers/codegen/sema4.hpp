#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IPS_Semaphores
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::sema4 {


// Semaphores Gate n Register
struct Gate_fields_ {

  enum class eGTFSM : std::uint32_t {
    // The gate is unlocked (free).
    eGTFSM_0 = 0,
    // The gate has been locked by processor 0.
    eGTFSM_1 = 1,
    // The gate has been locked by processor 1.
    eGTFSM_2 = 2,
    // This state encoding is never used and therefore reserved. Attempted writes of 0x03 are treated as "no operation" and do not affect the gate state machine.
    eGTFSM_3 = 3,
  };
  // Gate Finite State Machine.
  using GTFSM = ftl::mmio::Field<2, 0, eGTFSM, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct Gate_fields_

template<std::uint32_t Index>
struct Gate : ftl::mmio::Register<
    0x40CC8000u + (Index * 0x1u),
    std::uint8_t,
    0x00u,
    ftl::mmio::RW,
    Gate_fields_::GTFSM,
    ftl::mmio::Reserved<6, 2>> {
  static_assert(Index < 16u, "Gate: Index out of range");
  using eGTFSM = Gate_fields_::eGTFSM;
  using GTFSM = Gate_fields_::GTFSM;
};


// Semaphores Processor n IRQ Notification Enable
struct CPINE_fields_ {

  enum class eINE7 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE7_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE7_1 = 1,
  };

  enum class eINE6 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE6_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE6_1 = 1,
  };

  enum class eINE5 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE5_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE5_1 = 1,
  };

  enum class eINE4 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE4_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE4_1 = 1,
  };

  enum class eINE3 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE3_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE3_1 = 1,
  };

  enum class eINE2 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE2_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE2_1 = 1,
  };

  enum class eINE1 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE1_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE1_1 = 1,
  };

  enum class eINE0 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE0_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE0_1 = 1,
  };

  enum class eINE15 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE15_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE15_1 = 1,
  };

  enum class eINE14 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE14_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE14_1 = 1,
  };

  enum class eINE13 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE13_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE13_1 = 1,
  };

  enum class eINE12 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE12_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE12_1 = 1,
  };

  enum class eINE11 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE11_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE11_1 = 1,
  };

  enum class eINE10 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE10_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE10_1 = 1,
  };

  enum class eINE9 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE9_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE9_1 = 1,
  };

  enum class eINE8 : std::uint32_t {
    // The generation of the notification interrupt is disabled.
    eINE8_0 = 0,
    // The generation of the notification interrupt is enabled.
    eINE8_1 = 1,
  };
  // Interrupt Request Notification Enable 7. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 7.
  using INE7 = ftl::mmio::Field<1, 0, eINE7, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 6. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 6.
  using INE6 = ftl::mmio::Field<1, 1, eINE6, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 5. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 5.
  using INE5 = ftl::mmio::Field<1, 2, eINE5, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 4. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 4.
  using INE4 = ftl::mmio::Field<1, 3, eINE4, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 3
  using INE3 = ftl::mmio::Field<1, 4, eINE3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 2
  using INE2 = ftl::mmio::Field<1, 5, eINE2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 1
  using INE1 = ftl::mmio::Field<1, 6, eINE1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 0
  using INE0 = ftl::mmio::Field<1, 7, eINE0, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 15. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 15.
  using INE15 = ftl::mmio::Field<1, 8, eINE15, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 14. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 14.
  using INE14 = ftl::mmio::Field<1, 9, eINE14, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 13. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 13.
  using INE13 = ftl::mmio::Field<1, 10, eINE13, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 12. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 12.
  using INE12 = ftl::mmio::Field<1, 11, eINE12, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 11. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 11.
  using INE11 = ftl::mmio::Field<1, 12, eINE11, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 10. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 10.
  using INE10 = ftl::mmio::Field<1, 13, eINE10, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 9. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 9.
  using INE9 = ftl::mmio::Field<1, 14, eINE9, ftl::mmio::RW, ftl::mmio::Normal>;
  // Interrupt Request Notification Enable 8. This field is a bitmap to enable the generation of an interrupt notification from a failed attempt to lock gate 8.
  using INE8 = ftl::mmio::Field<1, 15, eINE8, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPINE_fields_

template<std::uint32_t Index>
struct CPINE : ftl::mmio::Register<
    0x40CC8040u + (Index * 0x8u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    CPINE_fields_::INE7,
    CPINE_fields_::INE6,
    CPINE_fields_::INE5,
    CPINE_fields_::INE4,
    CPINE_fields_::INE3,
    CPINE_fields_::INE2,
    CPINE_fields_::INE1,
    CPINE_fields_::INE0,
    CPINE_fields_::INE15,
    CPINE_fields_::INE14,
    CPINE_fields_::INE13,
    CPINE_fields_::INE12,
    CPINE_fields_::INE11,
    CPINE_fields_::INE10,
    CPINE_fields_::INE9,
    CPINE_fields_::INE8> {
  static_assert(Index < 2u, "CPINE: Index out of range");
  using eINE7 = CPINE_fields_::eINE7;
  using eINE6 = CPINE_fields_::eINE6;
  using eINE5 = CPINE_fields_::eINE5;
  using eINE4 = CPINE_fields_::eINE4;
  using eINE3 = CPINE_fields_::eINE3;
  using eINE2 = CPINE_fields_::eINE2;
  using eINE1 = CPINE_fields_::eINE1;
  using eINE0 = CPINE_fields_::eINE0;
  using eINE15 = CPINE_fields_::eINE15;
  using eINE14 = CPINE_fields_::eINE14;
  using eINE13 = CPINE_fields_::eINE13;
  using eINE12 = CPINE_fields_::eINE12;
  using eINE11 = CPINE_fields_::eINE11;
  using eINE10 = CPINE_fields_::eINE10;
  using eINE9 = CPINE_fields_::eINE9;
  using eINE8 = CPINE_fields_::eINE8;
  using INE7 = CPINE_fields_::INE7;
  using INE6 = CPINE_fields_::INE6;
  using INE5 = CPINE_fields_::INE5;
  using INE4 = CPINE_fields_::INE4;
  using INE3 = CPINE_fields_::INE3;
  using INE2 = CPINE_fields_::INE2;
  using INE1 = CPINE_fields_::INE1;
  using INE0 = CPINE_fields_::INE0;
  using INE15 = CPINE_fields_::INE15;
  using INE14 = CPINE_fields_::INE14;
  using INE13 = CPINE_fields_::INE13;
  using INE12 = CPINE_fields_::INE12;
  using INE11 = CPINE_fields_::INE11;
  using INE10 = CPINE_fields_::INE10;
  using INE9 = CPINE_fields_::INE9;
  using INE8 = CPINE_fields_::INE8;
};


// Semaphores Processor n IRQ Notification
struct CPNTF_fields_ {
  // Gate 7 Notification
  using GN7 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 6 Notification
  using GN6 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 5 Notification
  using GN5 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 4 Notification
  using GN4 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 3 Notification
  using GN3 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 2 Notification
  using GN2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 1 Notification
  using GN1 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 0 Notification
  using GN0 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 15 Notification
  using GN15 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 14 Notification
  using GN14 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 13 Notification
  using GN13 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 12 Notification
  using GN12 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 11 Notification
  using GN11 = ftl::mmio::Field<1, 12, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 10 Notification
  using GN10 = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 9 Notification
  using GN9 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // Gate 8 Notification
  using GN8 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct CPNTF_fields_

template<std::uint32_t Index>
struct CPNTF : ftl::mmio::Register<
    0x40CC8080u + (Index * 0x8u),
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    CPNTF_fields_::GN7,
    CPNTF_fields_::GN6,
    CPNTF_fields_::GN5,
    CPNTF_fields_::GN4,
    CPNTF_fields_::GN3,
    CPNTF_fields_::GN2,
    CPNTF_fields_::GN1,
    CPNTF_fields_::GN0,
    CPNTF_fields_::GN15,
    CPNTF_fields_::GN14,
    CPNTF_fields_::GN13,
    CPNTF_fields_::GN12,
    CPNTF_fields_::GN11,
    CPNTF_fields_::GN10,
    CPNTF_fields_::GN9,
    CPNTF_fields_::GN8> {
  static_assert(Index < 2u, "CPNTF: Index out of range");
  using GN7 = CPNTF_fields_::GN7;
  using GN6 = CPNTF_fields_::GN6;
  using GN5 = CPNTF_fields_::GN5;
  using GN4 = CPNTF_fields_::GN4;
  using GN3 = CPNTF_fields_::GN3;
  using GN2 = CPNTF_fields_::GN2;
  using GN1 = CPNTF_fields_::GN1;
  using GN0 = CPNTF_fields_::GN0;
  using GN15 = CPNTF_fields_::GN15;
  using GN14 = CPNTF_fields_::GN14;
  using GN13 = CPNTF_fields_::GN13;
  using GN12 = CPNTF_fields_::GN12;
  using GN11 = CPNTF_fields_::GN11;
  using GN10 = CPNTF_fields_::GN10;
  using GN9 = CPNTF_fields_::GN9;
  using GN8 = CPNTF_fields_::GN8;
};


// Semaphores (Secure) Reset Gate n
struct SEMA4_RSTGT_fields_ {
  // This field contains sub-fields that vary depending on whether it is being read or written
  using RSTGSM_RSTGMS_RSTGDP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Reset Gate Number
  using RSTGTN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SEMA4_RSTGT_fields_

struct SEMA4_RSTGT : ftl::mmio::Register<
    0x40CC8100u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    SEMA4_RSTGT_fields_::RSTGSM_RSTGMS_RSTGDP,
    SEMA4_RSTGT_fields_::RSTGTN> {
  using RSTGSM_RSTGMS_RSTGDP = SEMA4_RSTGT_fields_::RSTGSM_RSTGMS_RSTGDP;
  using RSTGTN = SEMA4_RSTGT_fields_::RSTGTN;
};


// Semaphores (Secure) Reset IRQ Notification
struct SEMA4_RSTNTF_fields_ {
  // This field contains sub-fields that vary depending on whether it is being read or written
  using RSTNSM_RSTNMS_RSTNDP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Reset Notification Number
  using RSTNTN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SEMA4_RSTNTF_fields_

struct SEMA4_RSTNTF : ftl::mmio::Register<
    0x40CC8104u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    SEMA4_RSTNTF_fields_::RSTNSM_RSTNMS_RSTNDP,
    SEMA4_RSTNTF_fields_::RSTNTN> {
  using RSTNSM_RSTNMS_RSTNDP = SEMA4_RSTNTF_fields_::RSTNSM_RSTNMS_RSTNDP;
  using RSTNTN = SEMA4_RSTNTF_fields_::RSTNTN;
};

}  // namespace regs::sema4