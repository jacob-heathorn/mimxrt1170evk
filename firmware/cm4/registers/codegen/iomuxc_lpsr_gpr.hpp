#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC LPSR GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::iomuxc_lpsr_gpr {

// GPR0 General Purpose Register
struct GPR0_fields_ {
  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // CM4 Vector table offset value lower bits out of reset
  using CM4_INIT_VTOR_LOW = ftl::mmio::Field<13, 3, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR0_fields_

struct GPR0 : ftl::mmio::Register<
    0x40C0C000u,
    std::uint32_t,
    0x00000400u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<3, 0>,
    GPR0_fields_::CM4_INIT_VTOR_LOW,
    ftl::mmio::Reserved<12, 16>,
    GPR0_fields_::DWP,
    GPR0_fields_::DWP_LOCK> {
  using eDWP = GPR0_fields_::eDWP;
  using eDWP_LOCK = GPR0_fields_::eDWP_LOCK;
  using CM4_INIT_VTOR_LOW = GPR0_fields_::CM4_INIT_VTOR_LOW;
  using DWP = GPR0_fields_::DWP;
  using DWP_LOCK = GPR0_fields_::DWP_LOCK;
};

// GPR1 General Purpose Register
struct GPR1_fields_ {
  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // CM4 Vector table offset value higher bits out of reset
  using CM4_INIT_VTOR_HIGH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR1_fields_

struct GPR1 : ftl::mmio::Register<
    0x40C0C004u,
    std::uint32_t,
    0x00000020u,
    ftl::mmio::RW,
    GPR1_fields_::CM4_INIT_VTOR_HIGH,
    ftl::mmio::Reserved<12, 16>,
    GPR1_fields_::DWP,
    GPR1_fields_::DWP_LOCK> {
  using eDWP = GPR1_fields_::eDWP;
  using eDWP_LOCK = GPR1_fields_::eDWP_LOCK;
  using CM4_INIT_VTOR_HIGH = GPR1_fields_::CM4_INIT_VTOR_HIGH;
  using DWP = GPR1_fields_::DWP;
  using DWP_LOCK = GPR1_fields_::DWP_LOCK;
};

// GPR2 General Purpose Register
struct GPR2_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-0
  using APC_AC_R0_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR2_fields_

struct GPR2 : ftl::mmio::Register<
    0x40C0C008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR2_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR2_fields_::APC_AC_R0_BOT> {
  using eLOCK = GPR2_fields_::eLOCK;
  using LOCK = GPR2_fields_::LOCK;
  using APC_AC_R0_BOT = GPR2_fields_::APC_AC_R0_BOT;
};

// GPR3 General Purpose Register
struct GPR3_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-0
  using APC_AC_R0_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR3_fields_

struct GPR3 : ftl::mmio::Register<
    0x40C0C00Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR3_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR3_fields_::APC_AC_R0_TOP> {
  using eLOCK = GPR3_fields_::eLOCK;
  using LOCK = GPR3_fields_::LOCK;
  using APC_AC_R0_TOP = GPR3_fields_::APC_AC_R0_TOP;
};

// GPR4 General Purpose Register
struct GPR4_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-1
  using APC_AC_R1_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR4_fields_

struct GPR4 : ftl::mmio::Register<
    0x40C0C010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR4_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR4_fields_::APC_AC_R1_BOT> {
  using eLOCK = GPR4_fields_::eLOCK;
  using LOCK = GPR4_fields_::LOCK;
  using APC_AC_R1_BOT = GPR4_fields_::APC_AC_R1_BOT;
};

// GPR5 General Purpose Register
struct GPR5_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-1
  using APC_AC_R1_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR5_fields_

struct GPR5 : ftl::mmio::Register<
    0x40C0C014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR5_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR5_fields_::APC_AC_R1_TOP> {
  using eLOCK = GPR5_fields_::eLOCK;
  using LOCK = GPR5_fields_::LOCK;
  using APC_AC_R1_TOP = GPR5_fields_::APC_AC_R1_TOP;
};

// GPR6 General Purpose Register
struct GPR6_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-2
  using APC_AC_R2_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR6_fields_

struct GPR6 : ftl::mmio::Register<
    0x40C0C018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR6_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR6_fields_::APC_AC_R2_BOT> {
  using eLOCK = GPR6_fields_::eLOCK;
  using LOCK = GPR6_fields_::LOCK;
  using APC_AC_R2_BOT = GPR6_fields_::APC_AC_R2_BOT;
};

// GPR7 General Purpose Register
struct GPR7_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-2
  using APC_AC_R2_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR7_fields_

struct GPR7 : ftl::mmio::Register<
    0x40C0C01Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR7_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR7_fields_::APC_AC_R2_TOP> {
  using eLOCK = GPR7_fields_::eLOCK;
  using LOCK = GPR7_fields_::LOCK;
  using APC_AC_R2_TOP = GPR7_fields_::APC_AC_R2_TOP;
};

// GPR8 General Purpose Register
struct GPR8_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-3
  using APC_AC_R3_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR8_fields_

struct GPR8 : ftl::mmio::Register<
    0x40C0C020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR8_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR8_fields_::APC_AC_R3_BOT> {
  using eLOCK = GPR8_fields_::eLOCK;
  using LOCK = GPR8_fields_::LOCK;
  using APC_AC_R3_BOT = GPR8_fields_::APC_AC_R3_BOT;
};

// GPR9 General Purpose Register
struct GPR9_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-3
  using APC_AC_R3_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR9_fields_

struct GPR9 : ftl::mmio::Register<
    0x40C0C024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR9_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR9_fields_::APC_AC_R3_TOP> {
  using eLOCK = GPR9_fields_::eLOCK;
  using LOCK = GPR9_fields_::LOCK;
  using APC_AC_R3_TOP = GPR9_fields_::APC_AC_R3_TOP;
};

// GPR10 General Purpose Register
struct GPR10_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-4
  using APC_AC_R4_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR10_fields_

struct GPR10 : ftl::mmio::Register<
    0x40C0C028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR10_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR10_fields_::APC_AC_R4_BOT> {
  using eLOCK = GPR10_fields_::eLOCK;
  using LOCK = GPR10_fields_::LOCK;
  using APC_AC_R4_BOT = GPR10_fields_::APC_AC_R4_BOT;
};

// GPR11 General Purpose Register
struct GPR11_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-4
  using APC_AC_R4_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR11_fields_

struct GPR11 : ftl::mmio::Register<
    0x40C0C02Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR11_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR11_fields_::APC_AC_R4_TOP> {
  using eLOCK = GPR11_fields_::eLOCK;
  using LOCK = GPR11_fields_::LOCK;
  using APC_AC_R4_TOP = GPR11_fields_::APC_AC_R4_TOP;
};

// GPR12 General Purpose Register
struct GPR12_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-5
  using APC_AC_R5_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR12_fields_

struct GPR12 : ftl::mmio::Register<
    0x40C0C030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR12_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR12_fields_::APC_AC_R5_BOT> {
  using eLOCK = GPR12_fields_::eLOCK;
  using LOCK = GPR12_fields_::LOCK;
  using APC_AC_R5_BOT = GPR12_fields_::APC_AC_R5_BOT;
};

// GPR13 General Purpose Register
struct GPR13_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-5
  using APC_AC_R5_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR13_fields_

struct GPR13 : ftl::mmio::Register<
    0x40C0C034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR13_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR13_fields_::APC_AC_R5_TOP> {
  using eLOCK = GPR13_fields_::eLOCK;
  using LOCK = GPR13_fields_::LOCK;
  using APC_AC_R5_TOP = GPR13_fields_::APC_AC_R5_TOP;
};

// GPR14 General Purpose Register
struct GPR14_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-6
  using APC_AC_R6_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR14_fields_

struct GPR14 : ftl::mmio::Register<
    0x40C0C038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR14_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR14_fields_::APC_AC_R6_BOT> {
  using eLOCK = GPR14_fields_::eLOCK;
  using LOCK = GPR14_fields_::LOCK;
  using APC_AC_R6_BOT = GPR14_fields_::APC_AC_R6_BOT;
};

// GPR15 General Purpose Register
struct GPR15_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-6
  using APC_AC_R6_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR15_fields_

struct GPR15 : ftl::mmio::Register<
    0x40C0C03Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR15_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR15_fields_::APC_AC_R6_TOP> {
  using eLOCK = GPR15_fields_::eLOCK;
  using LOCK = GPR15_fields_::LOCK;
  using APC_AC_R6_TOP = GPR15_fields_::APC_AC_R6_TOP;
};

// GPR16 General Purpose Register
struct GPR16_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC start address of memory region-7
  using APC_AC_R7_BOT = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR16_fields_

struct GPR16 : ftl::mmio::Register<
    0x40C0C040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR16_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR16_fields_::APC_AC_R7_BOT> {
  using eLOCK = GPR16_fields_::eLOCK;
  using LOCK = GPR16_fields_::LOCK;
  using APC_AC_R7_BOT = GPR16_fields_::APC_AC_R7_BOT;
};

// GPR17 General Purpose Register
struct GPR17_fields_ {
  enum class eLOCK : std::uint32_t {
    // Write access to bit 31:1 is not blocked
    eNO = 0,
    // Write access to bit 31:1 is blocked
    eBLOCK = 1,
  };

  // Lock the write to bit 31:1
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC end address of memory region-7
  using APC_AC_R7_TOP = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR17_fields_

struct GPR17 : ftl::mmio::Register<
    0x40C0C044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR17_fields_::LOCK,
    ftl::mmio::Reserved<2, 1>,
    GPR17_fields_::APC_AC_R7_TOP> {
  using eLOCK = GPR17_fields_::eLOCK;
  using LOCK = GPR17_fields_::LOCK;
  using APC_AC_R7_TOP = GPR17_fields_::APC_AC_R7_TOP;
};

// GPR18 General Purpose Register
struct GPR18_fields_ {
  enum class eAPC_R0_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-0 encryption enable
  using APC_R0_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R0_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR18_fields_

struct GPR18 : ftl::mmio::Register<
    0x40C0C048u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR18_fields_::APC_R0_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR18_fields_::LOCK> {
  using eAPC_R0_ENCRYPT_ENABLE = GPR18_fields_::eAPC_R0_ENCRYPT_ENABLE;
  using APC_R0_ENCRYPT_ENABLE = GPR18_fields_::APC_R0_ENCRYPT_ENABLE;
  using LOCK = GPR18_fields_::LOCK;
};

// GPR19 General Purpose Register
struct GPR19_fields_ {
  enum class eAPC_R1_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-1 encryption enable
  using APC_R1_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R1_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR19_fields_

struct GPR19 : ftl::mmio::Register<
    0x40C0C04Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR19_fields_::APC_R1_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR19_fields_::LOCK> {
  using eAPC_R1_ENCRYPT_ENABLE = GPR19_fields_::eAPC_R1_ENCRYPT_ENABLE;
  using APC_R1_ENCRYPT_ENABLE = GPR19_fields_::APC_R1_ENCRYPT_ENABLE;
  using LOCK = GPR19_fields_::LOCK;
};

// GPR20 General Purpose Register
struct GPR20_fields_ {
  enum class eAPC_R2_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-2 encryption enable
  using APC_R2_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R2_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR20_fields_

struct GPR20 : ftl::mmio::Register<
    0x40C0C050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR20_fields_::APC_R2_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR20_fields_::LOCK> {
  using eAPC_R2_ENCRYPT_ENABLE = GPR20_fields_::eAPC_R2_ENCRYPT_ENABLE;
  using APC_R2_ENCRYPT_ENABLE = GPR20_fields_::APC_R2_ENCRYPT_ENABLE;
  using LOCK = GPR20_fields_::LOCK;
};

// GPR21 General Purpose Register
struct GPR21_fields_ {
  enum class eAPC_R3_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-3 encryption enable
  using APC_R3_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R3_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR21_fields_

struct GPR21 : ftl::mmio::Register<
    0x40C0C054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR21_fields_::APC_R3_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR21_fields_::LOCK> {
  using eAPC_R3_ENCRYPT_ENABLE = GPR21_fields_::eAPC_R3_ENCRYPT_ENABLE;
  using APC_R3_ENCRYPT_ENABLE = GPR21_fields_::APC_R3_ENCRYPT_ENABLE;
  using LOCK = GPR21_fields_::LOCK;
};

// GPR22 General Purpose Register
struct GPR22_fields_ {
  enum class eAPC_R4_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-4 encryption enable
  using APC_R4_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R4_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR22_fields_

struct GPR22 : ftl::mmio::Register<
    0x40C0C058u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR22_fields_::APC_R4_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR22_fields_::LOCK> {
  using eAPC_R4_ENCRYPT_ENABLE = GPR22_fields_::eAPC_R4_ENCRYPT_ENABLE;
  using APC_R4_ENCRYPT_ENABLE = GPR22_fields_::APC_R4_ENCRYPT_ENABLE;
  using LOCK = GPR22_fields_::LOCK;
};

// GPR23 General Purpose Register
struct GPR23_fields_ {
  enum class eAPC_R5_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-5 encryption enable
  using APC_R5_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R5_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR23_fields_

struct GPR23 : ftl::mmio::Register<
    0x40C0C05Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR23_fields_::APC_R5_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR23_fields_::LOCK> {
  using eAPC_R5_ENCRYPT_ENABLE = GPR23_fields_::eAPC_R5_ENCRYPT_ENABLE;
  using APC_R5_ENCRYPT_ENABLE = GPR23_fields_::APC_R5_ENCRYPT_ENABLE;
  using LOCK = GPR23_fields_::LOCK;
};

// GPR24 General Purpose Register
struct GPR24_fields_ {
  enum class eAPC_R6_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  // APC memory region-6 encryption enable
  using APC_R6_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R6_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR24_fields_

struct GPR24 : ftl::mmio::Register<
    0x40C0C060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR24_fields_::APC_R6_ENCRYPT_ENABLE,
    ftl::mmio::Reserved<11, 5>,
    GPR24_fields_::LOCK> {
  using eAPC_R6_ENCRYPT_ENABLE = GPR24_fields_::eAPC_R6_ENCRYPT_ENABLE;
  using APC_R6_ENCRYPT_ENABLE = GPR24_fields_::APC_R6_ENCRYPT_ENABLE;
  using LOCK = GPR24_fields_::LOCK;
};

// GPR25 General Purpose Register
struct GPR25_fields_ {
  enum class eAPC_R7_ENCRYPT_ENABLE : std::uint32_t {
    // No effect
    eDIS = 0,
    // Encryption enabled
    eENABLE = 1,
  };

  enum class eAPC_VALID : std::uint32_t {
    // No effect
    eDIS = 0,
    // Enable encryption for GPRx[APC_x_ENCRYPT_ENABLE] (valid for GPR2-GPR25)
    eENABLE = 1,
  };

  // APC memory region-7 encryption enable
  using APC_R7_ENCRYPT_ENABLE = ftl::mmio::Field<1, 4, eAPC_R7_ENCRYPT_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
  // APC global enable bit
  using APC_VALID = ftl::mmio::Field<1, 5, eAPC_VALID, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock the write to bit 15:0
  using LOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR25_fields_

struct GPR25 : ftl::mmio::Register<
    0x40C0C064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<4, 0>,
    GPR25_fields_::APC_R7_ENCRYPT_ENABLE,
    GPR25_fields_::APC_VALID,
    ftl::mmio::Reserved<10, 6>,
    GPR25_fields_::LOCK> {
  using eAPC_R7_ENCRYPT_ENABLE = GPR25_fields_::eAPC_R7_ENCRYPT_ENABLE;
  using eAPC_VALID = GPR25_fields_::eAPC_VALID;
  using APC_R7_ENCRYPT_ENABLE = GPR25_fields_::APC_R7_ENCRYPT_ENABLE;
  using APC_VALID = GPR25_fields_::APC_VALID;
  using LOCK = GPR25_fields_::LOCK;
};

// GPR26 General Purpose Register
struct GPR26_fields_ {
  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // Vector table offset register out of reset. See the ARM v7-M Architecture Reference Manual for more information about the vector table offset register (VTOR).
  using CM7_INIT_VTOR = ftl::mmio::Field<25, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // General purpose bits
  using FIELD_0 = ftl::mmio::Field<3, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR26_fields_

struct GPR26 : ftl::mmio::Register<
    0x40C0C068u,
    std::uint32_t,
    0x00004000u,
    ftl::mmio::RW,
    GPR26_fields_::CM7_INIT_VTOR,
    GPR26_fields_::FIELD_0,
    GPR26_fields_::DWP,
    GPR26_fields_::DWP_LOCK> {
  using eDWP = GPR26_fields_::eDWP;
  using eDWP_LOCK = GPR26_fields_::eDWP_LOCK;
  using CM7_INIT_VTOR = GPR26_fields_::CM7_INIT_VTOR;
  using FIELD_0 = GPR26_fields_::FIELD_0;
  using DWP = GPR26_fields_::DWP;
  using DWP_LOCK = GPR26_fields_::DWP_LOCK;
};

// GPR33 General Purpose Register
struct GPR33_fields_ {
  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // Clear CM4 NMI holding register
  using M4_NMI_CLEAR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clear USBPHY1 wakeup interrupt holding register
  using USBPHY1_WAKEUP_IRQ_CLEAR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clear USBPHY1 wakeup interrupt holding register
  using USBPHY2_WAKEUP_IRQ_CLEAR = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR33_fields_

struct GPR33 : ftl::mmio::Register<
    0x40C0C084u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR33_fields_::M4_NMI_CLEAR,
    ftl::mmio::Reserved<7, 1>,
    GPR33_fields_::USBPHY1_WAKEUP_IRQ_CLEAR,
    GPR33_fields_::USBPHY2_WAKEUP_IRQ_CLEAR,
    ftl::mmio::Reserved<18, 10>,
    GPR33_fields_::DWP,
    GPR33_fields_::DWP_LOCK> {
  using eDWP = GPR33_fields_::eDWP;
  using eDWP_LOCK = GPR33_fields_::eDWP_LOCK;
  using M4_NMI_CLEAR = GPR33_fields_::M4_NMI_CLEAR;
  using USBPHY1_WAKEUP_IRQ_CLEAR = GPR33_fields_::USBPHY1_WAKEUP_IRQ_CLEAR;
  using USBPHY2_WAKEUP_IRQ_CLEAR = GPR33_fields_::USBPHY2_WAKEUP_IRQ_CLEAR;
  using DWP = GPR33_fields_::DWP;
  using DWP_LOCK = GPR33_fields_::DWP_LOCK;
};

// GPR34 General Purpose Register
struct GPR34_fields_ {
  enum class eM7_NMI_MASK : std::uint32_t {
    // NMI input from IO to CM7 is not blocked
    eDISABLE = 0,
    // NMI input from IO to CM7 is blocked
    eENABLE = 1,
  };

  enum class eM4_NMI_MASK : std::uint32_t {
    // NMI input from IO to CM4 is not blocked
    eDISABLE = 0,
    // NMI input from IO to CM4 is blocked
    eENABLE = 1,
  };

  enum class eM4_GPC_SLEEP_SEL : std::uint32_t {
    // CM4 SLEEPDEEP is sent to GPC
    eDISABLE = 0,
    // CM4 SLEEPING is sent to GPC
    eNABLE = 1,
  };

  enum class eSEC_ERR_RESP : std::uint32_t {
    // OKEY response
    eDISABLE = 0,
    // SLVError (default)
    eENABLE = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // GPIO_LPSR IO bank supply voltage range selection
  using GPIO_LPSR_HIGH_RANGE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPIO_LPSR IO bank supply voltage range selection
  using GPIO_LPSR_LOW_RANGE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Mask CM7 NMI pin input
  using M7_NMI_MASK = ftl::mmio::Field<1, 3, eM7_NMI_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  // Mask CM4 NMI pin input
  using M4_NMI_MASK = ftl::mmio::Field<1, 4, eM4_NMI_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
  // CM4 sleep request selection
  using M4_GPC_SLEEP_SEL = ftl::mmio::Field<1, 5, eM4_GPC_SLEEP_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Security error response enable
  using SEC_ERR_RESP = ftl::mmio::Field<1, 11, eSEC_ERR_RESP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR34_fields_

struct GPR34 : ftl::mmio::Register<
    0x40C0C088u,
    std::uint32_t,
    0x00000E00u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    GPR34_fields_::GPIO_LPSR_HIGH_RANGE,
    GPR34_fields_::GPIO_LPSR_LOW_RANGE,
    GPR34_fields_::M7_NMI_MASK,
    GPR34_fields_::M4_NMI_MASK,
    GPR34_fields_::M4_GPC_SLEEP_SEL,
    ftl::mmio::Reserved<5, 6>,
    GPR34_fields_::SEC_ERR_RESP,
    ftl::mmio::Reserved<16, 12>,
    GPR34_fields_::DWP,
    GPR34_fields_::DWP_LOCK> {
  using eM7_NMI_MASK = GPR34_fields_::eM7_NMI_MASK;
  using eM4_NMI_MASK = GPR34_fields_::eM4_NMI_MASK;
  using eM4_GPC_SLEEP_SEL = GPR34_fields_::eM4_GPC_SLEEP_SEL;
  using eSEC_ERR_RESP = GPR34_fields_::eSEC_ERR_RESP;
  using eDWP = GPR34_fields_::eDWP;
  using eDWP_LOCK = GPR34_fields_::eDWP_LOCK;
  using GPIO_LPSR_HIGH_RANGE = GPR34_fields_::GPIO_LPSR_HIGH_RANGE;
  using GPIO_LPSR_LOW_RANGE = GPR34_fields_::GPIO_LPSR_LOW_RANGE;
  using M7_NMI_MASK = GPR34_fields_::M7_NMI_MASK;
  using M4_NMI_MASK = GPR34_fields_::M4_NMI_MASK;
  using M4_GPC_SLEEP_SEL = GPR34_fields_::M4_GPC_SLEEP_SEL;
  using SEC_ERR_RESP = GPR34_fields_::SEC_ERR_RESP;
  using DWP = GPR34_fields_::DWP;
  using DWP_LOCK = GPR34_fields_::DWP_LOCK;
};

// GPR35 General Purpose Register
struct GPR35_fields_ {
  enum class eADC1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eADC1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eADC1_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eADC2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eADC2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eADC2_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eCAAM_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eCAAM_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eCAN1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eCAN1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eCAN2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eCAN2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eCAN3_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eCAN3_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eEDMA_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eEDMA_LPSR_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eENET_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eENET_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eENET1G_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eENET1G_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXIO1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eFLEXIO2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eFLEXSPI1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eFLEXSPI1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXSPI2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eFLEXSPI2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // ADC1 doze mode
  using ADC1_IPG_DOZE = ftl::mmio::Field<1, 0, eADC1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADC1 stop request
  using ADC1_STOP_REQ = ftl::mmio::Field<1, 1, eADC1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADC1 stop mode selection. This bitfield cannot change when ADC1_STOP_REQ is asserted.
  using ADC1_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eADC1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADC2 doze mode
  using ADC2_IPG_DOZE = ftl::mmio::Field<1, 3, eADC2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADC2 stop request
  using ADC2_STOP_REQ = ftl::mmio::Field<1, 4, eADC2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // ADC2 stop mode selection. This bitfield cannot change when ADC2_STOP_REQ is asserted.
  using ADC2_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eADC2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN3 doze mode
  using CAAM_IPG_DOZE = ftl::mmio::Field<1, 6, eCAAM_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAAM stop request
  using CAAM_STOP_REQ = ftl::mmio::Field<1, 7, eCAAM_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN1 doze mode
  using CAN1_IPG_DOZE = ftl::mmio::Field<1, 8, eCAN1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN1 stop request
  using CAN1_STOP_REQ = ftl::mmio::Field<1, 9, eCAN1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN2 doze mode
  using CAN2_IPG_DOZE = ftl::mmio::Field<1, 10, eCAN2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN2 stop request
  using CAN2_STOP_REQ = ftl::mmio::Field<1, 11, eCAN2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN3 doze mode
  using CAN3_IPG_DOZE = ftl::mmio::Field<1, 12, eCAN3_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // CAN3 stop request
  using CAN3_STOP_REQ = ftl::mmio::Field<1, 13, eCAN3_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // EDMA stop request
  using EDMA_STOP_REQ = ftl::mmio::Field<1, 15, eEDMA_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // EDMA_LPSR stop request
  using EDMA_LPSR_STOP_REQ = ftl::mmio::Field<1, 16, eEDMA_LPSR_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENET doze mode
  using ENET_IPG_DOZE = ftl::mmio::Field<1, 17, eENET_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENET stop request
  using ENET_STOP_REQ = ftl::mmio::Field<1, 18, eENET_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENET1G doze mode
  using ENET1G_IPG_DOZE = ftl::mmio::Field<1, 19, eENET1G_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ENET1G stop request
  using ENET1G_STOP_REQ = ftl::mmio::Field<1, 20, eENET1G_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO2 doze mode
  using FLEXIO1_IPG_DOZE = ftl::mmio::Field<1, 21, eFLEXIO1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO2 doze mode
  using FLEXIO2_IPG_DOZE = ftl::mmio::Field<1, 22, eFLEXIO2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXSPI1 doze mode
  using FLEXSPI1_IPG_DOZE = ftl::mmio::Field<1, 23, eFLEXSPI1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXSPI1 stop request
  using FLEXSPI1_STOP_REQ = ftl::mmio::Field<1, 24, eFLEXSPI1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXSPI2 doze mode
  using FLEXSPI2_IPG_DOZE = ftl::mmio::Field<1, 25, eFLEXSPI2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXSPI2 stop request
  using FLEXSPI2_STOP_REQ = ftl::mmio::Field<1, 26, eFLEXSPI2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR35_fields_

struct GPR35 : ftl::mmio::Register<
    0x40C0C08Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR35_fields_::ADC1_IPG_DOZE,
    GPR35_fields_::ADC1_STOP_REQ,
    GPR35_fields_::ADC1_IPG_STOP_MODE,
    GPR35_fields_::ADC2_IPG_DOZE,
    GPR35_fields_::ADC2_STOP_REQ,
    GPR35_fields_::ADC2_IPG_STOP_MODE,
    GPR35_fields_::CAAM_IPG_DOZE,
    GPR35_fields_::CAAM_STOP_REQ,
    GPR35_fields_::CAN1_IPG_DOZE,
    GPR35_fields_::CAN1_STOP_REQ,
    GPR35_fields_::CAN2_IPG_DOZE,
    GPR35_fields_::CAN2_STOP_REQ,
    GPR35_fields_::CAN3_IPG_DOZE,
    GPR35_fields_::CAN3_STOP_REQ,
    ftl::mmio::Reserved<1, 14>,
    GPR35_fields_::EDMA_STOP_REQ,
    GPR35_fields_::EDMA_LPSR_STOP_REQ,
    GPR35_fields_::ENET_IPG_DOZE,
    GPR35_fields_::ENET_STOP_REQ,
    GPR35_fields_::ENET1G_IPG_DOZE,
    GPR35_fields_::ENET1G_STOP_REQ,
    GPR35_fields_::FLEXIO1_IPG_DOZE,
    GPR35_fields_::FLEXIO2_IPG_DOZE,
    GPR35_fields_::FLEXSPI1_IPG_DOZE,
    GPR35_fields_::FLEXSPI1_STOP_REQ,
    GPR35_fields_::FLEXSPI2_IPG_DOZE,
    GPR35_fields_::FLEXSPI2_STOP_REQ,
    ftl::mmio::Reserved<1, 27>,
    GPR35_fields_::DWP,
    GPR35_fields_::DWP_LOCK> {
  using eADC1_IPG_DOZE = GPR35_fields_::eADC1_IPG_DOZE;
  using eADC1_STOP_REQ = GPR35_fields_::eADC1_STOP_REQ;
  using eADC1_IPG_STOP_MODE = GPR35_fields_::eADC1_IPG_STOP_MODE;
  using eADC2_IPG_DOZE = GPR35_fields_::eADC2_IPG_DOZE;
  using eADC2_STOP_REQ = GPR35_fields_::eADC2_STOP_REQ;
  using eADC2_IPG_STOP_MODE = GPR35_fields_::eADC2_IPG_STOP_MODE;
  using eCAAM_IPG_DOZE = GPR35_fields_::eCAAM_IPG_DOZE;
  using eCAAM_STOP_REQ = GPR35_fields_::eCAAM_STOP_REQ;
  using eCAN1_IPG_DOZE = GPR35_fields_::eCAN1_IPG_DOZE;
  using eCAN1_STOP_REQ = GPR35_fields_::eCAN1_STOP_REQ;
  using eCAN2_IPG_DOZE = GPR35_fields_::eCAN2_IPG_DOZE;
  using eCAN2_STOP_REQ = GPR35_fields_::eCAN2_STOP_REQ;
  using eCAN3_IPG_DOZE = GPR35_fields_::eCAN3_IPG_DOZE;
  using eCAN3_STOP_REQ = GPR35_fields_::eCAN3_STOP_REQ;
  using eEDMA_STOP_REQ = GPR35_fields_::eEDMA_STOP_REQ;
  using eEDMA_LPSR_STOP_REQ = GPR35_fields_::eEDMA_LPSR_STOP_REQ;
  using eENET_IPG_DOZE = GPR35_fields_::eENET_IPG_DOZE;
  using eENET_STOP_REQ = GPR35_fields_::eENET_STOP_REQ;
  using eENET1G_IPG_DOZE = GPR35_fields_::eENET1G_IPG_DOZE;
  using eENET1G_STOP_REQ = GPR35_fields_::eENET1G_STOP_REQ;
  using eFLEXIO1_IPG_DOZE = GPR35_fields_::eFLEXIO1_IPG_DOZE;
  using eFLEXIO2_IPG_DOZE = GPR35_fields_::eFLEXIO2_IPG_DOZE;
  using eFLEXSPI1_IPG_DOZE = GPR35_fields_::eFLEXSPI1_IPG_DOZE;
  using eFLEXSPI1_STOP_REQ = GPR35_fields_::eFLEXSPI1_STOP_REQ;
  using eFLEXSPI2_IPG_DOZE = GPR35_fields_::eFLEXSPI2_IPG_DOZE;
  using eFLEXSPI2_STOP_REQ = GPR35_fields_::eFLEXSPI2_STOP_REQ;
  using eDWP = GPR35_fields_::eDWP;
  using eDWP_LOCK = GPR35_fields_::eDWP_LOCK;
  using ADC1_IPG_DOZE = GPR35_fields_::ADC1_IPG_DOZE;
  using ADC1_STOP_REQ = GPR35_fields_::ADC1_STOP_REQ;
  using ADC1_IPG_STOP_MODE = GPR35_fields_::ADC1_IPG_STOP_MODE;
  using ADC2_IPG_DOZE = GPR35_fields_::ADC2_IPG_DOZE;
  using ADC2_STOP_REQ = GPR35_fields_::ADC2_STOP_REQ;
  using ADC2_IPG_STOP_MODE = GPR35_fields_::ADC2_IPG_STOP_MODE;
  using CAAM_IPG_DOZE = GPR35_fields_::CAAM_IPG_DOZE;
  using CAAM_STOP_REQ = GPR35_fields_::CAAM_STOP_REQ;
  using CAN1_IPG_DOZE = GPR35_fields_::CAN1_IPG_DOZE;
  using CAN1_STOP_REQ = GPR35_fields_::CAN1_STOP_REQ;
  using CAN2_IPG_DOZE = GPR35_fields_::CAN2_IPG_DOZE;
  using CAN2_STOP_REQ = GPR35_fields_::CAN2_STOP_REQ;
  using CAN3_IPG_DOZE = GPR35_fields_::CAN3_IPG_DOZE;
  using CAN3_STOP_REQ = GPR35_fields_::CAN3_STOP_REQ;
  using EDMA_STOP_REQ = GPR35_fields_::EDMA_STOP_REQ;
  using EDMA_LPSR_STOP_REQ = GPR35_fields_::EDMA_LPSR_STOP_REQ;
  using ENET_IPG_DOZE = GPR35_fields_::ENET_IPG_DOZE;
  using ENET_STOP_REQ = GPR35_fields_::ENET_STOP_REQ;
  using ENET1G_IPG_DOZE = GPR35_fields_::ENET1G_IPG_DOZE;
  using ENET1G_STOP_REQ = GPR35_fields_::ENET1G_STOP_REQ;
  using FLEXIO1_IPG_DOZE = GPR35_fields_::FLEXIO1_IPG_DOZE;
  using FLEXIO2_IPG_DOZE = GPR35_fields_::FLEXIO2_IPG_DOZE;
  using FLEXSPI1_IPG_DOZE = GPR35_fields_::FLEXSPI1_IPG_DOZE;
  using FLEXSPI1_STOP_REQ = GPR35_fields_::FLEXSPI1_STOP_REQ;
  using FLEXSPI2_IPG_DOZE = GPR35_fields_::FLEXSPI2_IPG_DOZE;
  using FLEXSPI2_STOP_REQ = GPR35_fields_::FLEXSPI2_STOP_REQ;
  using DWP = GPR35_fields_::DWP;
  using DWP_LOCK = GPR35_fields_::DWP_LOCK;
};

// GPR36 General Purpose Register
struct GPR36_fields_ {
  enum class eGPT1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eGPT2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eGPT3_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eGPT4_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eGPT5_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eGPT6_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C1_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPI2C2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C2_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPI2C3_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C3_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C3_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPI2C4_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C4_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C4_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPI2C5_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C5_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C5_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPI2C6_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPI2C6_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPI2C6_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPSPI1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI1_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // GPT1 doze mode
  using GPT1_IPG_DOZE = ftl::mmio::Field<1, 0, eGPT1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT2 doze mode
  using GPT2_IPG_DOZE = ftl::mmio::Field<1, 1, eGPT2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT3 doze mode
  using GPT3_IPG_DOZE = ftl::mmio::Field<1, 2, eGPT3_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT4 doze mode
  using GPT4_IPG_DOZE = ftl::mmio::Field<1, 3, eGPT4_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT5 doze mode
  using GPT5_IPG_DOZE = ftl::mmio::Field<1, 4, eGPT5_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT6 doze mode
  using GPT6_IPG_DOZE = ftl::mmio::Field<1, 5, eGPT6_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C1 doze mode
  using LPI2C1_IPG_DOZE = ftl::mmio::Field<1, 6, eLPI2C1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C1 stop request
  using LPI2C1_STOP_REQ = ftl::mmio::Field<1, 7, eLPI2C1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C1 stop mode selection. This bitfield cannot change when LPI2C1_STOP_REQ is asserted.
  using LPI2C1_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPI2C1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C2 doze mode
  using LPI2C2_IPG_DOZE = ftl::mmio::Field<1, 9, eLPI2C2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C2 stop request
  using LPI2C2_STOP_REQ = ftl::mmio::Field<1, 10, eLPI2C2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C2 stop mode selection. This bitfield cannot change when LPI2C2_STOP_REQ is asserted.
  using LPI2C2_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPI2C2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C3 doze mode
  using LPI2C3_IPG_DOZE = ftl::mmio::Field<1, 12, eLPI2C3_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C3 stop request
  using LPI2C3_STOP_REQ = ftl::mmio::Field<1, 13, eLPI2C3_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C3 stop mode selection. This bitfield cannot change when LPI2C3_STOP_REQ is asserted.
  using LPI2C3_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPI2C3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C4 doze mode
  using LPI2C4_IPG_DOZE = ftl::mmio::Field<1, 15, eLPI2C4_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C4 stop request
  using LPI2C4_STOP_REQ = ftl::mmio::Field<1, 16, eLPI2C4_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C4 stop mode selection. This bitfield cannot change when LPI2C4_STOP_REQ is asserted.
  using LPI2C4_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPI2C4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C5 doze mode
  using LPI2C5_IPG_DOZE = ftl::mmio::Field<1, 18, eLPI2C5_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C5 stop request
  using LPI2C5_STOP_REQ = ftl::mmio::Field<1, 19, eLPI2C5_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C5 stop mode selection. This bitfield cannot change when LPI2C5_STOP_REQ is asserted.
  using LPI2C5_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPI2C5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C6 doze mode
  using LPI2C6_IPG_DOZE = ftl::mmio::Field<1, 21, eLPI2C6_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C6 stop request
  using LPI2C6_STOP_REQ = ftl::mmio::Field<1, 22, eLPI2C6_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPI2C6 stop mode selection. This bitfield cannot change when LPI2C6_STOP_REQ is asserted.
  using LPI2C6_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPI2C6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI1 doze mode
  using LPSPI1_IPG_DOZE = ftl::mmio::Field<1, 24, eLPSPI1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI1 stop request
  using LPSPI1_STOP_REQ = ftl::mmio::Field<1, 25, eLPSPI1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI1 stop mode selection. This bitfield cannot change when LPSPI1_STOP_REQ is asserted.
  using LPSPI1_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eLPSPI1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR36_fields_

struct GPR36 : ftl::mmio::Register<
    0x40C0C090u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR36_fields_::GPT1_IPG_DOZE,
    GPR36_fields_::GPT2_IPG_DOZE,
    GPR36_fields_::GPT3_IPG_DOZE,
    GPR36_fields_::GPT4_IPG_DOZE,
    GPR36_fields_::GPT5_IPG_DOZE,
    GPR36_fields_::GPT6_IPG_DOZE,
    GPR36_fields_::LPI2C1_IPG_DOZE,
    GPR36_fields_::LPI2C1_STOP_REQ,
    GPR36_fields_::LPI2C1_IPG_STOP_MODE,
    GPR36_fields_::LPI2C2_IPG_DOZE,
    GPR36_fields_::LPI2C2_STOP_REQ,
    GPR36_fields_::LPI2C2_IPG_STOP_MODE,
    GPR36_fields_::LPI2C3_IPG_DOZE,
    GPR36_fields_::LPI2C3_STOP_REQ,
    GPR36_fields_::LPI2C3_IPG_STOP_MODE,
    GPR36_fields_::LPI2C4_IPG_DOZE,
    GPR36_fields_::LPI2C4_STOP_REQ,
    GPR36_fields_::LPI2C4_IPG_STOP_MODE,
    GPR36_fields_::LPI2C5_IPG_DOZE,
    GPR36_fields_::LPI2C5_STOP_REQ,
    GPR36_fields_::LPI2C5_IPG_STOP_MODE,
    GPR36_fields_::LPI2C6_IPG_DOZE,
    GPR36_fields_::LPI2C6_STOP_REQ,
    GPR36_fields_::LPI2C6_IPG_STOP_MODE,
    GPR36_fields_::LPSPI1_IPG_DOZE,
    GPR36_fields_::LPSPI1_STOP_REQ,
    GPR36_fields_::LPSPI1_IPG_STOP_MODE,
    ftl::mmio::Reserved<1, 27>,
    GPR36_fields_::DWP,
    GPR36_fields_::DWP_LOCK> {
  using eGPT1_IPG_DOZE = GPR36_fields_::eGPT1_IPG_DOZE;
  using eGPT2_IPG_DOZE = GPR36_fields_::eGPT2_IPG_DOZE;
  using eGPT3_IPG_DOZE = GPR36_fields_::eGPT3_IPG_DOZE;
  using eGPT4_IPG_DOZE = GPR36_fields_::eGPT4_IPG_DOZE;
  using eGPT5_IPG_DOZE = GPR36_fields_::eGPT5_IPG_DOZE;
  using eGPT6_IPG_DOZE = GPR36_fields_::eGPT6_IPG_DOZE;
  using eLPI2C1_IPG_DOZE = GPR36_fields_::eLPI2C1_IPG_DOZE;
  using eLPI2C1_STOP_REQ = GPR36_fields_::eLPI2C1_STOP_REQ;
  using eLPI2C1_IPG_STOP_MODE = GPR36_fields_::eLPI2C1_IPG_STOP_MODE;
  using eLPI2C2_IPG_DOZE = GPR36_fields_::eLPI2C2_IPG_DOZE;
  using eLPI2C2_STOP_REQ = GPR36_fields_::eLPI2C2_STOP_REQ;
  using eLPI2C2_IPG_STOP_MODE = GPR36_fields_::eLPI2C2_IPG_STOP_MODE;
  using eLPI2C3_IPG_DOZE = GPR36_fields_::eLPI2C3_IPG_DOZE;
  using eLPI2C3_STOP_REQ = GPR36_fields_::eLPI2C3_STOP_REQ;
  using eLPI2C3_IPG_STOP_MODE = GPR36_fields_::eLPI2C3_IPG_STOP_MODE;
  using eLPI2C4_IPG_DOZE = GPR36_fields_::eLPI2C4_IPG_DOZE;
  using eLPI2C4_STOP_REQ = GPR36_fields_::eLPI2C4_STOP_REQ;
  using eLPI2C4_IPG_STOP_MODE = GPR36_fields_::eLPI2C4_IPG_STOP_MODE;
  using eLPI2C5_IPG_DOZE = GPR36_fields_::eLPI2C5_IPG_DOZE;
  using eLPI2C5_STOP_REQ = GPR36_fields_::eLPI2C5_STOP_REQ;
  using eLPI2C5_IPG_STOP_MODE = GPR36_fields_::eLPI2C5_IPG_STOP_MODE;
  using eLPI2C6_IPG_DOZE = GPR36_fields_::eLPI2C6_IPG_DOZE;
  using eLPI2C6_STOP_REQ = GPR36_fields_::eLPI2C6_STOP_REQ;
  using eLPI2C6_IPG_STOP_MODE = GPR36_fields_::eLPI2C6_IPG_STOP_MODE;
  using eLPSPI1_IPG_DOZE = GPR36_fields_::eLPSPI1_IPG_DOZE;
  using eLPSPI1_STOP_REQ = GPR36_fields_::eLPSPI1_STOP_REQ;
  using eLPSPI1_IPG_STOP_MODE = GPR36_fields_::eLPSPI1_IPG_STOP_MODE;
  using eDWP = GPR36_fields_::eDWP;
  using eDWP_LOCK = GPR36_fields_::eDWP_LOCK;
  using GPT1_IPG_DOZE = GPR36_fields_::GPT1_IPG_DOZE;
  using GPT2_IPG_DOZE = GPR36_fields_::GPT2_IPG_DOZE;
  using GPT3_IPG_DOZE = GPR36_fields_::GPT3_IPG_DOZE;
  using GPT4_IPG_DOZE = GPR36_fields_::GPT4_IPG_DOZE;
  using GPT5_IPG_DOZE = GPR36_fields_::GPT5_IPG_DOZE;
  using GPT6_IPG_DOZE = GPR36_fields_::GPT6_IPG_DOZE;
  using LPI2C1_IPG_DOZE = GPR36_fields_::LPI2C1_IPG_DOZE;
  using LPI2C1_STOP_REQ = GPR36_fields_::LPI2C1_STOP_REQ;
  using LPI2C1_IPG_STOP_MODE = GPR36_fields_::LPI2C1_IPG_STOP_MODE;
  using LPI2C2_IPG_DOZE = GPR36_fields_::LPI2C2_IPG_DOZE;
  using LPI2C2_STOP_REQ = GPR36_fields_::LPI2C2_STOP_REQ;
  using LPI2C2_IPG_STOP_MODE = GPR36_fields_::LPI2C2_IPG_STOP_MODE;
  using LPI2C3_IPG_DOZE = GPR36_fields_::LPI2C3_IPG_DOZE;
  using LPI2C3_STOP_REQ = GPR36_fields_::LPI2C3_STOP_REQ;
  using LPI2C3_IPG_STOP_MODE = GPR36_fields_::LPI2C3_IPG_STOP_MODE;
  using LPI2C4_IPG_DOZE = GPR36_fields_::LPI2C4_IPG_DOZE;
  using LPI2C4_STOP_REQ = GPR36_fields_::LPI2C4_STOP_REQ;
  using LPI2C4_IPG_STOP_MODE = GPR36_fields_::LPI2C4_IPG_STOP_MODE;
  using LPI2C5_IPG_DOZE = GPR36_fields_::LPI2C5_IPG_DOZE;
  using LPI2C5_STOP_REQ = GPR36_fields_::LPI2C5_STOP_REQ;
  using LPI2C5_IPG_STOP_MODE = GPR36_fields_::LPI2C5_IPG_STOP_MODE;
  using LPI2C6_IPG_DOZE = GPR36_fields_::LPI2C6_IPG_DOZE;
  using LPI2C6_STOP_REQ = GPR36_fields_::LPI2C6_STOP_REQ;
  using LPI2C6_IPG_STOP_MODE = GPR36_fields_::LPI2C6_IPG_STOP_MODE;
  using LPSPI1_IPG_DOZE = GPR36_fields_::LPSPI1_IPG_DOZE;
  using LPSPI1_STOP_REQ = GPR36_fields_::LPSPI1_STOP_REQ;
  using LPSPI1_IPG_STOP_MODE = GPR36_fields_::LPSPI1_IPG_STOP_MODE;
  using DWP = GPR36_fields_::DWP;
  using DWP_LOCK = GPR36_fields_::DWP_LOCK;
};

// GPR37 General Purpose Register
struct GPR37_fields_ {
  enum class eLPSPI2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI2_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPSPI3_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI3_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI3_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPSPI4_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI4_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI4_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPSPI5_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI5_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI5_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPSPI6_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPSPI6_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPSPI6_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART1_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART2_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART3_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART3_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART3_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART4_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART4_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART4_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // LPSPI2 doze mode
  using LPSPI2_IPG_DOZE = ftl::mmio::Field<1, 0, eLPSPI2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI2 stop request
  using LPSPI2_STOP_REQ = ftl::mmio::Field<1, 1, eLPSPI2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI2 stop mode selection. This bitfield cannot change when LPSPI2_STOP_REQ is asserted.
  using LPSPI2_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eLPSPI2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI3 doze mode
  using LPSPI3_IPG_DOZE = ftl::mmio::Field<1, 3, eLPSPI3_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI3 stop request
  using LPSPI3_STOP_REQ = ftl::mmio::Field<1, 4, eLPSPI3_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI3 stop mode selection. This bitfield cannot change when LPSPI3_STOP_REQ is asserted.
  using LPSPI3_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eLPSPI3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI4 doze mode
  using LPSPI4_IPG_DOZE = ftl::mmio::Field<1, 6, eLPSPI4_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI4 stop request
  using LPSPI4_STOP_REQ = ftl::mmio::Field<1, 7, eLPSPI4_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI4 stop mode selection. This bitfield cannot change when LPSPI4_STOP_REQ is asserted.
  using LPSPI4_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPSPI4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI5 doze mode
  using LPSPI5_IPG_DOZE = ftl::mmio::Field<1, 9, eLPSPI5_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI5 stop request
  using LPSPI5_STOP_REQ = ftl::mmio::Field<1, 10, eLPSPI5_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI5 stop mode selection. This bitfield cannot change when LPSPI5_STOP_REQ is asserted.
  using LPSPI5_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPSPI5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI6 doze mode
  using LPSPI6_IPG_DOZE = ftl::mmio::Field<1, 12, eLPSPI6_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI6 stop request
  using LPSPI6_STOP_REQ = ftl::mmio::Field<1, 13, eLPSPI6_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPSPI6 stop mode selection. This bitfield cannot change when LPSPI6_STOP_REQ is asserted.
  using LPSPI6_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPSPI6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART1 doze mode
  using LPUART1_IPG_DOZE = ftl::mmio::Field<1, 15, eLPUART1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART1 stop request
  using LPUART1_STOP_REQ = ftl::mmio::Field<1, 16, eLPUART1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART1 stop mode selection. This bitfield cannot change when LPUART1_STOP_REQ is asserted.
  using LPUART1_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPUART1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART2 doze mode
  using LPUART2_IPG_DOZE = ftl::mmio::Field<1, 18, eLPUART2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART2 stop request
  using LPUART2_STOP_REQ = ftl::mmio::Field<1, 19, eLPUART2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART2 stop mode selection. This bitfield cannot change when LPUART2_STOP_REQ is asserted.
  using LPUART2_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPUART2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART3 doze mode
  using LPUART3_IPG_DOZE = ftl::mmio::Field<1, 21, eLPUART3_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART3 stop request
  using LPUART3_STOP_REQ = ftl::mmio::Field<1, 22, eLPUART3_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART3 stop mode selection. This bitfield cannot change when LPUART3_STOP_REQ is asserted.
  using LPUART3_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPUART3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART4 doze mode
  using LPUART4_IPG_DOZE = ftl::mmio::Field<1, 24, eLPUART4_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART4 stop request
  using LPUART4_STOP_REQ = ftl::mmio::Field<1, 25, eLPUART4_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART4 stop mode selection. This bitfield cannot change when LPUART4_STOP_REQ is asserted.
  using LPUART4_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eLPUART4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR37_fields_

struct GPR37 : ftl::mmio::Register<
    0x40C0C094u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR37_fields_::LPSPI2_IPG_DOZE,
    GPR37_fields_::LPSPI2_STOP_REQ,
    GPR37_fields_::LPSPI2_IPG_STOP_MODE,
    GPR37_fields_::LPSPI3_IPG_DOZE,
    GPR37_fields_::LPSPI3_STOP_REQ,
    GPR37_fields_::LPSPI3_IPG_STOP_MODE,
    GPR37_fields_::LPSPI4_IPG_DOZE,
    GPR37_fields_::LPSPI4_STOP_REQ,
    GPR37_fields_::LPSPI4_IPG_STOP_MODE,
    GPR37_fields_::LPSPI5_IPG_DOZE,
    GPR37_fields_::LPSPI5_STOP_REQ,
    GPR37_fields_::LPSPI5_IPG_STOP_MODE,
    GPR37_fields_::LPSPI6_IPG_DOZE,
    GPR37_fields_::LPSPI6_STOP_REQ,
    GPR37_fields_::LPSPI6_IPG_STOP_MODE,
    GPR37_fields_::LPUART1_IPG_DOZE,
    GPR37_fields_::LPUART1_STOP_REQ,
    GPR37_fields_::LPUART1_IPG_STOP_MODE,
    GPR37_fields_::LPUART2_IPG_DOZE,
    GPR37_fields_::LPUART2_STOP_REQ,
    GPR37_fields_::LPUART2_IPG_STOP_MODE,
    GPR37_fields_::LPUART3_IPG_DOZE,
    GPR37_fields_::LPUART3_STOP_REQ,
    GPR37_fields_::LPUART3_IPG_STOP_MODE,
    GPR37_fields_::LPUART4_IPG_DOZE,
    GPR37_fields_::LPUART4_STOP_REQ,
    GPR37_fields_::LPUART4_IPG_STOP_MODE,
    ftl::mmio::Reserved<1, 27>,
    GPR37_fields_::DWP,
    GPR37_fields_::DWP_LOCK> {
  using eLPSPI2_IPG_DOZE = GPR37_fields_::eLPSPI2_IPG_DOZE;
  using eLPSPI2_STOP_REQ = GPR37_fields_::eLPSPI2_STOP_REQ;
  using eLPSPI2_IPG_STOP_MODE = GPR37_fields_::eLPSPI2_IPG_STOP_MODE;
  using eLPSPI3_IPG_DOZE = GPR37_fields_::eLPSPI3_IPG_DOZE;
  using eLPSPI3_STOP_REQ = GPR37_fields_::eLPSPI3_STOP_REQ;
  using eLPSPI3_IPG_STOP_MODE = GPR37_fields_::eLPSPI3_IPG_STOP_MODE;
  using eLPSPI4_IPG_DOZE = GPR37_fields_::eLPSPI4_IPG_DOZE;
  using eLPSPI4_STOP_REQ = GPR37_fields_::eLPSPI4_STOP_REQ;
  using eLPSPI4_IPG_STOP_MODE = GPR37_fields_::eLPSPI4_IPG_STOP_MODE;
  using eLPSPI5_IPG_DOZE = GPR37_fields_::eLPSPI5_IPG_DOZE;
  using eLPSPI5_STOP_REQ = GPR37_fields_::eLPSPI5_STOP_REQ;
  using eLPSPI5_IPG_STOP_MODE = GPR37_fields_::eLPSPI5_IPG_STOP_MODE;
  using eLPSPI6_IPG_DOZE = GPR37_fields_::eLPSPI6_IPG_DOZE;
  using eLPSPI6_STOP_REQ = GPR37_fields_::eLPSPI6_STOP_REQ;
  using eLPSPI6_IPG_STOP_MODE = GPR37_fields_::eLPSPI6_IPG_STOP_MODE;
  using eLPUART1_IPG_DOZE = GPR37_fields_::eLPUART1_IPG_DOZE;
  using eLPUART1_STOP_REQ = GPR37_fields_::eLPUART1_STOP_REQ;
  using eLPUART1_IPG_STOP_MODE = GPR37_fields_::eLPUART1_IPG_STOP_MODE;
  using eLPUART2_IPG_DOZE = GPR37_fields_::eLPUART2_IPG_DOZE;
  using eLPUART2_STOP_REQ = GPR37_fields_::eLPUART2_STOP_REQ;
  using eLPUART2_IPG_STOP_MODE = GPR37_fields_::eLPUART2_IPG_STOP_MODE;
  using eLPUART3_IPG_DOZE = GPR37_fields_::eLPUART3_IPG_DOZE;
  using eLPUART3_STOP_REQ = GPR37_fields_::eLPUART3_STOP_REQ;
  using eLPUART3_IPG_STOP_MODE = GPR37_fields_::eLPUART3_IPG_STOP_MODE;
  using eLPUART4_IPG_DOZE = GPR37_fields_::eLPUART4_IPG_DOZE;
  using eLPUART4_STOP_REQ = GPR37_fields_::eLPUART4_STOP_REQ;
  using eLPUART4_IPG_STOP_MODE = GPR37_fields_::eLPUART4_IPG_STOP_MODE;
  using eDWP = GPR37_fields_::eDWP;
  using eDWP_LOCK = GPR37_fields_::eDWP_LOCK;
  using LPSPI2_IPG_DOZE = GPR37_fields_::LPSPI2_IPG_DOZE;
  using LPSPI2_STOP_REQ = GPR37_fields_::LPSPI2_STOP_REQ;
  using LPSPI2_IPG_STOP_MODE = GPR37_fields_::LPSPI2_IPG_STOP_MODE;
  using LPSPI3_IPG_DOZE = GPR37_fields_::LPSPI3_IPG_DOZE;
  using LPSPI3_STOP_REQ = GPR37_fields_::LPSPI3_STOP_REQ;
  using LPSPI3_IPG_STOP_MODE = GPR37_fields_::LPSPI3_IPG_STOP_MODE;
  using LPSPI4_IPG_DOZE = GPR37_fields_::LPSPI4_IPG_DOZE;
  using LPSPI4_STOP_REQ = GPR37_fields_::LPSPI4_STOP_REQ;
  using LPSPI4_IPG_STOP_MODE = GPR37_fields_::LPSPI4_IPG_STOP_MODE;
  using LPSPI5_IPG_DOZE = GPR37_fields_::LPSPI5_IPG_DOZE;
  using LPSPI5_STOP_REQ = GPR37_fields_::LPSPI5_STOP_REQ;
  using LPSPI5_IPG_STOP_MODE = GPR37_fields_::LPSPI5_IPG_STOP_MODE;
  using LPSPI6_IPG_DOZE = GPR37_fields_::LPSPI6_IPG_DOZE;
  using LPSPI6_STOP_REQ = GPR37_fields_::LPSPI6_STOP_REQ;
  using LPSPI6_IPG_STOP_MODE = GPR37_fields_::LPSPI6_IPG_STOP_MODE;
  using LPUART1_IPG_DOZE = GPR37_fields_::LPUART1_IPG_DOZE;
  using LPUART1_STOP_REQ = GPR37_fields_::LPUART1_STOP_REQ;
  using LPUART1_IPG_STOP_MODE = GPR37_fields_::LPUART1_IPG_STOP_MODE;
  using LPUART2_IPG_DOZE = GPR37_fields_::LPUART2_IPG_DOZE;
  using LPUART2_STOP_REQ = GPR37_fields_::LPUART2_STOP_REQ;
  using LPUART2_IPG_STOP_MODE = GPR37_fields_::LPUART2_IPG_STOP_MODE;
  using LPUART3_IPG_DOZE = GPR37_fields_::LPUART3_IPG_DOZE;
  using LPUART3_STOP_REQ = GPR37_fields_::LPUART3_STOP_REQ;
  using LPUART3_IPG_STOP_MODE = GPR37_fields_::LPUART3_IPG_STOP_MODE;
  using LPUART4_IPG_DOZE = GPR37_fields_::LPUART4_IPG_DOZE;
  using LPUART4_STOP_REQ = GPR37_fields_::LPUART4_STOP_REQ;
  using LPUART4_IPG_STOP_MODE = GPR37_fields_::LPUART4_IPG_STOP_MODE;
  using DWP = GPR37_fields_::DWP;
  using DWP_LOCK = GPR37_fields_::DWP_LOCK;
};

// GPR38 General Purpose Register
struct GPR38_fields_ {
  enum class eLPUART5_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART5_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART5_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART6_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART6_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART6_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART7_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART7_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART7_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART8_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART8_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART8_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART9_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART9_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART9_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART10_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART10_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART10_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART11_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART11_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART11_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eLPUART12_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eLPUART12_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eLPUART12_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eMIC_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eMIC_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eMIC_IPG_STOP_MODE : std::uint32_t {
    // This module is functional in Stop Mode
    eFUNC = 0,
    // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    eNONFUNC = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // LPUART5 doze mode
  using LPUART5_IPG_DOZE = ftl::mmio::Field<1, 0, eLPUART5_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART5 stop request
  using LPUART5_STOP_REQ = ftl::mmio::Field<1, 1, eLPUART5_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART5 stop mode selection. This bitfield cannot change when LPUART5_STOP_REQ is asserted.
  using LPUART5_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eLPUART5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART6 doze mode
  using LPUART6_IPG_DOZE = ftl::mmio::Field<1, 3, eLPUART6_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART6 stop request
  using LPUART6_STOP_REQ = ftl::mmio::Field<1, 4, eLPUART6_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART6 stop mode selection. This bitfield cannot change when LPUART6_STOP_REQ is asserted.
  using LPUART6_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eLPUART6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART7 doze mode
  using LPUART7_IPG_DOZE = ftl::mmio::Field<1, 6, eLPUART7_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART7 stop request
  using LPUART7_STOP_REQ = ftl::mmio::Field<1, 7, eLPUART7_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART7 stop mode selection. This bitfield cannot change when LPUART7_STOP_REQ is asserted.
  using LPUART7_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPUART7_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART8 doze mode
  using LPUART8_IPG_DOZE = ftl::mmio::Field<1, 9, eLPUART8_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART8 stop request
  using LPUART8_STOP_REQ = ftl::mmio::Field<1, 10, eLPUART8_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART8 stop mode selection. This bitfield cannot change when LPUART8_STOP_REQ is asserted.
  using LPUART8_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPUART8_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART9 doze mode
  using LPUART9_IPG_DOZE = ftl::mmio::Field<1, 12, eLPUART9_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART9 stop request
  using LPUART9_STOP_REQ = ftl::mmio::Field<1, 13, eLPUART9_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART9 stop mode selection. This bitfield cannot change when LPUART9_STOP_REQ is asserted.
  using LPUART9_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPUART9_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART10 doze mode
  using LPUART10_IPG_DOZE = ftl::mmio::Field<1, 15, eLPUART10_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART10 stop request
  using LPUART10_STOP_REQ = ftl::mmio::Field<1, 16, eLPUART10_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART10 stop mode selection. This bitfield cannot change when LPUART10_STOP_REQ is asserted.
  using LPUART10_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPUART10_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART11 doze mode
  using LPUART11_IPG_DOZE = ftl::mmio::Field<1, 18, eLPUART11_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART11 stop request
  using LPUART11_STOP_REQ = ftl::mmio::Field<1, 19, eLPUART11_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART11 stop mode selection. This bitfield cannot change when LPUART11_STOP_REQ is asserted.
  using LPUART11_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPUART11_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART12 doze mode
  using LPUART12_IPG_DOZE = ftl::mmio::Field<1, 21, eLPUART12_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART12 stop request
  using LPUART12_STOP_REQ = ftl::mmio::Field<1, 22, eLPUART12_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // LPUART12 stop mode selection. This bitfield cannot change when LPUART12_STOP_REQ is asserted.
  using LPUART12_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPUART12_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // MIC doze mode
  using MIC_IPG_DOZE = ftl::mmio::Field<1, 24, eMIC_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // MIC stop request
  using MIC_STOP_REQ = ftl::mmio::Field<1, 25, eMIC_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // MIC stop mode selection. This bitfield cannot change when MIC_STOP_REQ is asserted.
  using MIC_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eMIC_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR38_fields_

struct GPR38 : ftl::mmio::Register<
    0x40C0C098u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPR38_fields_::LPUART5_IPG_DOZE,
    GPR38_fields_::LPUART5_STOP_REQ,
    GPR38_fields_::LPUART5_IPG_STOP_MODE,
    GPR38_fields_::LPUART6_IPG_DOZE,
    GPR38_fields_::LPUART6_STOP_REQ,
    GPR38_fields_::LPUART6_IPG_STOP_MODE,
    GPR38_fields_::LPUART7_IPG_DOZE,
    GPR38_fields_::LPUART7_STOP_REQ,
    GPR38_fields_::LPUART7_IPG_STOP_MODE,
    GPR38_fields_::LPUART8_IPG_DOZE,
    GPR38_fields_::LPUART8_STOP_REQ,
    GPR38_fields_::LPUART8_IPG_STOP_MODE,
    GPR38_fields_::LPUART9_IPG_DOZE,
    GPR38_fields_::LPUART9_STOP_REQ,
    GPR38_fields_::LPUART9_IPG_STOP_MODE,
    GPR38_fields_::LPUART10_IPG_DOZE,
    GPR38_fields_::LPUART10_STOP_REQ,
    GPR38_fields_::LPUART10_IPG_STOP_MODE,
    GPR38_fields_::LPUART11_IPG_DOZE,
    GPR38_fields_::LPUART11_STOP_REQ,
    GPR38_fields_::LPUART11_IPG_STOP_MODE,
    GPR38_fields_::LPUART12_IPG_DOZE,
    GPR38_fields_::LPUART12_STOP_REQ,
    GPR38_fields_::LPUART12_IPG_STOP_MODE,
    GPR38_fields_::MIC_IPG_DOZE,
    GPR38_fields_::MIC_STOP_REQ,
    GPR38_fields_::MIC_IPG_STOP_MODE,
    ftl::mmio::Reserved<1, 27>,
    GPR38_fields_::DWP,
    GPR38_fields_::DWP_LOCK> {
  using eLPUART5_IPG_DOZE = GPR38_fields_::eLPUART5_IPG_DOZE;
  using eLPUART5_STOP_REQ = GPR38_fields_::eLPUART5_STOP_REQ;
  using eLPUART5_IPG_STOP_MODE = GPR38_fields_::eLPUART5_IPG_STOP_MODE;
  using eLPUART6_IPG_DOZE = GPR38_fields_::eLPUART6_IPG_DOZE;
  using eLPUART6_STOP_REQ = GPR38_fields_::eLPUART6_STOP_REQ;
  using eLPUART6_IPG_STOP_MODE = GPR38_fields_::eLPUART6_IPG_STOP_MODE;
  using eLPUART7_IPG_DOZE = GPR38_fields_::eLPUART7_IPG_DOZE;
  using eLPUART7_STOP_REQ = GPR38_fields_::eLPUART7_STOP_REQ;
  using eLPUART7_IPG_STOP_MODE = GPR38_fields_::eLPUART7_IPG_STOP_MODE;
  using eLPUART8_IPG_DOZE = GPR38_fields_::eLPUART8_IPG_DOZE;
  using eLPUART8_STOP_REQ = GPR38_fields_::eLPUART8_STOP_REQ;
  using eLPUART8_IPG_STOP_MODE = GPR38_fields_::eLPUART8_IPG_STOP_MODE;
  using eLPUART9_IPG_DOZE = GPR38_fields_::eLPUART9_IPG_DOZE;
  using eLPUART9_STOP_REQ = GPR38_fields_::eLPUART9_STOP_REQ;
  using eLPUART9_IPG_STOP_MODE = GPR38_fields_::eLPUART9_IPG_STOP_MODE;
  using eLPUART10_IPG_DOZE = GPR38_fields_::eLPUART10_IPG_DOZE;
  using eLPUART10_STOP_REQ = GPR38_fields_::eLPUART10_STOP_REQ;
  using eLPUART10_IPG_STOP_MODE = GPR38_fields_::eLPUART10_IPG_STOP_MODE;
  using eLPUART11_IPG_DOZE = GPR38_fields_::eLPUART11_IPG_DOZE;
  using eLPUART11_STOP_REQ = GPR38_fields_::eLPUART11_STOP_REQ;
  using eLPUART11_IPG_STOP_MODE = GPR38_fields_::eLPUART11_IPG_STOP_MODE;
  using eLPUART12_IPG_DOZE = GPR38_fields_::eLPUART12_IPG_DOZE;
  using eLPUART12_STOP_REQ = GPR38_fields_::eLPUART12_STOP_REQ;
  using eLPUART12_IPG_STOP_MODE = GPR38_fields_::eLPUART12_IPG_STOP_MODE;
  using eMIC_IPG_DOZE = GPR38_fields_::eMIC_IPG_DOZE;
  using eMIC_STOP_REQ = GPR38_fields_::eMIC_STOP_REQ;
  using eMIC_IPG_STOP_MODE = GPR38_fields_::eMIC_IPG_STOP_MODE;
  using eDWP = GPR38_fields_::eDWP;
  using eDWP_LOCK = GPR38_fields_::eDWP_LOCK;
  using LPUART5_IPG_DOZE = GPR38_fields_::LPUART5_IPG_DOZE;
  using LPUART5_STOP_REQ = GPR38_fields_::LPUART5_STOP_REQ;
  using LPUART5_IPG_STOP_MODE = GPR38_fields_::LPUART5_IPG_STOP_MODE;
  using LPUART6_IPG_DOZE = GPR38_fields_::LPUART6_IPG_DOZE;
  using LPUART6_STOP_REQ = GPR38_fields_::LPUART6_STOP_REQ;
  using LPUART6_IPG_STOP_MODE = GPR38_fields_::LPUART6_IPG_STOP_MODE;
  using LPUART7_IPG_DOZE = GPR38_fields_::LPUART7_IPG_DOZE;
  using LPUART7_STOP_REQ = GPR38_fields_::LPUART7_STOP_REQ;
  using LPUART7_IPG_STOP_MODE = GPR38_fields_::LPUART7_IPG_STOP_MODE;
  using LPUART8_IPG_DOZE = GPR38_fields_::LPUART8_IPG_DOZE;
  using LPUART8_STOP_REQ = GPR38_fields_::LPUART8_STOP_REQ;
  using LPUART8_IPG_STOP_MODE = GPR38_fields_::LPUART8_IPG_STOP_MODE;
  using LPUART9_IPG_DOZE = GPR38_fields_::LPUART9_IPG_DOZE;
  using LPUART9_STOP_REQ = GPR38_fields_::LPUART9_STOP_REQ;
  using LPUART9_IPG_STOP_MODE = GPR38_fields_::LPUART9_IPG_STOP_MODE;
  using LPUART10_IPG_DOZE = GPR38_fields_::LPUART10_IPG_DOZE;
  using LPUART10_STOP_REQ = GPR38_fields_::LPUART10_STOP_REQ;
  using LPUART10_IPG_STOP_MODE = GPR38_fields_::LPUART10_IPG_STOP_MODE;
  using LPUART11_IPG_DOZE = GPR38_fields_::LPUART11_IPG_DOZE;
  using LPUART11_STOP_REQ = GPR38_fields_::LPUART11_STOP_REQ;
  using LPUART11_IPG_STOP_MODE = GPR38_fields_::LPUART11_IPG_STOP_MODE;
  using LPUART12_IPG_DOZE = GPR38_fields_::LPUART12_IPG_DOZE;
  using LPUART12_STOP_REQ = GPR38_fields_::LPUART12_STOP_REQ;
  using LPUART12_IPG_STOP_MODE = GPR38_fields_::LPUART12_IPG_STOP_MODE;
  using MIC_IPG_DOZE = GPR38_fields_::MIC_IPG_DOZE;
  using MIC_STOP_REQ = GPR38_fields_::MIC_STOP_REQ;
  using MIC_IPG_STOP_MODE = GPR38_fields_::MIC_IPG_STOP_MODE;
  using DWP = GPR38_fields_::DWP;
  using DWP_LOCK = GPR38_fields_::DWP_LOCK;
};

// GPR39 General Purpose Register
struct GPR39_fields_ {
  enum class ePIT1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class ePIT2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eSEMC_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eSIM1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eSIM2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eSNVS_HP_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eSNVS_HP_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eWDOG1_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eWDOG2_IPG_DOZE : std::uint32_t {
    // Not in doze mode
    eDISABLE = 0,
    // In doze mode
    eENABLE = 1,
  };

  enum class eSAI1_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eSAI2_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eSAI3_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eSAI4_STOP_REQ : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXIO1_STOP_REQ_BUS : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXIO1_STOP_REQ_PER : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXIO2_STOP_REQ_BUS : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eFLEXIO2_STOP_REQ_PER : std::uint32_t {
    // Stop request off
    eDISABLE = 0,
    // Stop request on
    eENABLE = 1,
  };

  enum class eDWP : std::uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };

  enum class eDWP_LOCK : std::uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };

  // PIT1 stop request
  using PIT1_STOP_REQ = ftl::mmio::Field<1, 1, ePIT1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // PIT2 stop request
  using PIT2_STOP_REQ = ftl::mmio::Field<1, 2, ePIT2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // SEMC stop request
  using SEMC_STOP_REQ = ftl::mmio::Field<1, 3, eSEMC_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // SIM1 doze mode
  using SIM1_IPG_DOZE = ftl::mmio::Field<1, 4, eSIM1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SIM2 doze mode
  using SIM2_IPG_DOZE = ftl::mmio::Field<1, 5, eSIM2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS_HP doze mode
  using SNVS_HP_IPG_DOZE = ftl::mmio::Field<1, 6, eSNVS_HP_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SNVS_HP stop request
  using SNVS_HP_STOP_REQ = ftl::mmio::Field<1, 7, eSNVS_HP_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // WDOG1 doze mode
  using WDOG1_IPG_DOZE = ftl::mmio::Field<1, 8, eWDOG1_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // WDOG2 doze mode
  using WDOG2_IPG_DOZE = ftl::mmio::Field<1, 9, eWDOG2_IPG_DOZE, ftl::mmio::RW, ftl::mmio::Normal>;
  // SAI1 stop request
  using SAI1_STOP_REQ = ftl::mmio::Field<1, 10, eSAI1_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // SAI2 stop request
  using SAI2_STOP_REQ = ftl::mmio::Field<1, 11, eSAI2_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // SAI3 stop request
  using SAI3_STOP_REQ = ftl::mmio::Field<1, 12, eSAI3_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // SAI4 stop request
  using SAI4_STOP_REQ = ftl::mmio::Field<1, 13, eSAI4_STOP_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO1 bus clock domain stop request
  using FLEXIO1_STOP_REQ_BUS = ftl::mmio::Field<1, 14, eFLEXIO1_STOP_REQ_BUS, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO1 peripheral clock domain stop request
  using FLEXIO1_STOP_REQ_PER = ftl::mmio::Field<1, 15, eFLEXIO1_STOP_REQ_PER, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO2 bus clock domain stop request
  using FLEXIO2_STOP_REQ_BUS = ftl::mmio::Field<1, 16, eFLEXIO2_STOP_REQ_BUS, ftl::mmio::RW, ftl::mmio::Normal>;
  // FLEXIO2 peripheral clock domain stop request
  using FLEXIO2_STOP_REQ_PER = ftl::mmio::Field<1, 17, eFLEXIO2_STOP_REQ_PER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection
  using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain write protection lock
  using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPR39_fields_

struct GPR39 : ftl::mmio::Register<
    0x40C0C09Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    GPR39_fields_::PIT1_STOP_REQ,
    GPR39_fields_::PIT2_STOP_REQ,
    GPR39_fields_::SEMC_STOP_REQ,
    GPR39_fields_::SIM1_IPG_DOZE,
    GPR39_fields_::SIM2_IPG_DOZE,
    GPR39_fields_::SNVS_HP_IPG_DOZE,
    GPR39_fields_::SNVS_HP_STOP_REQ,
    GPR39_fields_::WDOG1_IPG_DOZE,
    GPR39_fields_::WDOG2_IPG_DOZE,
    GPR39_fields_::SAI1_STOP_REQ,
    GPR39_fields_::SAI2_STOP_REQ,
    GPR39_fields_::SAI3_STOP_REQ,
    GPR39_fields_::SAI4_STOP_REQ,
    GPR39_fields_::FLEXIO1_STOP_REQ_BUS,
    GPR39_fields_::FLEXIO1_STOP_REQ_PER,
    GPR39_fields_::FLEXIO2_STOP_REQ_BUS,
    GPR39_fields_::FLEXIO2_STOP_REQ_PER,
    ftl::mmio::Reserved<10, 18>,
    GPR39_fields_::DWP,
    GPR39_fields_::DWP_LOCK> {
  using ePIT1_STOP_REQ = GPR39_fields_::ePIT1_STOP_REQ;
  using ePIT2_STOP_REQ = GPR39_fields_::ePIT2_STOP_REQ;
  using eSEMC_STOP_REQ = GPR39_fields_::eSEMC_STOP_REQ;
  using eSIM1_IPG_DOZE = GPR39_fields_::eSIM1_IPG_DOZE;
  using eSIM2_IPG_DOZE = GPR39_fields_::eSIM2_IPG_DOZE;
  using eSNVS_HP_IPG_DOZE = GPR39_fields_::eSNVS_HP_IPG_DOZE;
  using eSNVS_HP_STOP_REQ = GPR39_fields_::eSNVS_HP_STOP_REQ;
  using eWDOG1_IPG_DOZE = GPR39_fields_::eWDOG1_IPG_DOZE;
  using eWDOG2_IPG_DOZE = GPR39_fields_::eWDOG2_IPG_DOZE;
  using eSAI1_STOP_REQ = GPR39_fields_::eSAI1_STOP_REQ;
  using eSAI2_STOP_REQ = GPR39_fields_::eSAI2_STOP_REQ;
  using eSAI3_STOP_REQ = GPR39_fields_::eSAI3_STOP_REQ;
  using eSAI4_STOP_REQ = GPR39_fields_::eSAI4_STOP_REQ;
  using eFLEXIO1_STOP_REQ_BUS = GPR39_fields_::eFLEXIO1_STOP_REQ_BUS;
  using eFLEXIO1_STOP_REQ_PER = GPR39_fields_::eFLEXIO1_STOP_REQ_PER;
  using eFLEXIO2_STOP_REQ_BUS = GPR39_fields_::eFLEXIO2_STOP_REQ_BUS;
  using eFLEXIO2_STOP_REQ_PER = GPR39_fields_::eFLEXIO2_STOP_REQ_PER;
  using eDWP = GPR39_fields_::eDWP;
  using eDWP_LOCK = GPR39_fields_::eDWP_LOCK;
  using PIT1_STOP_REQ = GPR39_fields_::PIT1_STOP_REQ;
  using PIT2_STOP_REQ = GPR39_fields_::PIT2_STOP_REQ;
  using SEMC_STOP_REQ = GPR39_fields_::SEMC_STOP_REQ;
  using SIM1_IPG_DOZE = GPR39_fields_::SIM1_IPG_DOZE;
  using SIM2_IPG_DOZE = GPR39_fields_::SIM2_IPG_DOZE;
  using SNVS_HP_IPG_DOZE = GPR39_fields_::SNVS_HP_IPG_DOZE;
  using SNVS_HP_STOP_REQ = GPR39_fields_::SNVS_HP_STOP_REQ;
  using WDOG1_IPG_DOZE = GPR39_fields_::WDOG1_IPG_DOZE;
  using WDOG2_IPG_DOZE = GPR39_fields_::WDOG2_IPG_DOZE;
  using SAI1_STOP_REQ = GPR39_fields_::SAI1_STOP_REQ;
  using SAI2_STOP_REQ = GPR39_fields_::SAI2_STOP_REQ;
  using SAI3_STOP_REQ = GPR39_fields_::SAI3_STOP_REQ;
  using SAI4_STOP_REQ = GPR39_fields_::SAI4_STOP_REQ;
  using FLEXIO1_STOP_REQ_BUS = GPR39_fields_::FLEXIO1_STOP_REQ_BUS;
  using FLEXIO1_STOP_REQ_PER = GPR39_fields_::FLEXIO1_STOP_REQ_PER;
  using FLEXIO2_STOP_REQ_BUS = GPR39_fields_::FLEXIO2_STOP_REQ_BUS;
  using FLEXIO2_STOP_REQ_PER = GPR39_fields_::FLEXIO2_STOP_REQ_PER;
  using DWP = GPR39_fields_::DWP;
  using DWP_LOCK = GPR39_fields_::DWP_LOCK;
};

// GPR40 General Purpose Register
struct GPR40_fields_ {
  // ADC1 stop acknowledge
  using ADC1_STOP_ACK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ADC2 stop acknowledge
  using ADC2_STOP_ACK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CAAM stop acknowledge
  using CAAM_STOP_ACK = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CAN1 stop acknowledge
  using CAN1_STOP_ACK = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CAN2 stop acknowledge
  using CAN2_STOP_ACK = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CAN3 stop acknowledge
  using CAN3_STOP_ACK = ftl::mmio::Field<1, 5, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // EDMA stop acknowledge
  using EDMA_STOP_ACK = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // EDMA_LPSR stop acknowledge
  using EDMA_LPSR_STOP_ACK = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ENET stop acknowledge
  using ENET_STOP_ACK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ENET1G stop acknowledge
  using ENET1G_STOP_ACK = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXSPI1 stop acknowledge
  using FLEXSPI1_STOP_ACK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXSPI2 stop acknowledge
  using FLEXSPI2_STOP_ACK = ftl::mmio::Field<1, 11, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C1 stop acknowledge
  using LPI2C1_STOP_ACK = ftl::mmio::Field<1, 12, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C2 stop acknowledge
  using LPI2C2_STOP_ACK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C3 stop acknowledge
  using LPI2C3_STOP_ACK = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C4 stop acknowledge
  using LPI2C4_STOP_ACK = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C5 stop acknowledge
  using LPI2C5_STOP_ACK = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPI2C6 stop acknowledge
  using LPI2C6_STOP_ACK = ftl::mmio::Field<1, 17, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI1 stop acknowledge
  using LPSPI1_STOP_ACK = ftl::mmio::Field<1, 18, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI2 stop acknowledge
  using LPSPI2_STOP_ACK = ftl::mmio::Field<1, 19, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI3 stop acknowledge
  using LPSPI3_STOP_ACK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI4 stop acknowledge
  using LPSPI4_STOP_ACK = ftl::mmio::Field<1, 21, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI5 stop acknowledge
  using LPSPI5_STOP_ACK = ftl::mmio::Field<1, 22, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPSPI6 stop acknowledge
  using LPSPI6_STOP_ACK = ftl::mmio::Field<1, 23, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART1 stop acknowledge
  using LPUART1_STOP_ACK = ftl::mmio::Field<1, 24, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART2 stop acknowledge
  using LPUART2_STOP_ACK = ftl::mmio::Field<1, 25, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART3 stop acknowledge
  using LPUART3_STOP_ACK = ftl::mmio::Field<1, 26, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART4 stop acknowledge
  using LPUART4_STOP_ACK = ftl::mmio::Field<1, 27, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART5 stop acknowledge
  using LPUART5_STOP_ACK = ftl::mmio::Field<1, 28, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART6 stop acknowledge
  using LPUART6_STOP_ACK = ftl::mmio::Field<1, 29, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART7 stop acknowledge
  using LPUART7_STOP_ACK = ftl::mmio::Field<1, 30, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART8 stop acknowledge
  using LPUART8_STOP_ACK = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct GPR40_fields_

struct GPR40 : ftl::mmio::Register<
    0x40C0C0A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    GPR40_fields_::ADC1_STOP_ACK,
    GPR40_fields_::ADC2_STOP_ACK,
    GPR40_fields_::CAAM_STOP_ACK,
    GPR40_fields_::CAN1_STOP_ACK,
    GPR40_fields_::CAN2_STOP_ACK,
    GPR40_fields_::CAN3_STOP_ACK,
    GPR40_fields_::EDMA_STOP_ACK,
    GPR40_fields_::EDMA_LPSR_STOP_ACK,
    GPR40_fields_::ENET_STOP_ACK,
    GPR40_fields_::ENET1G_STOP_ACK,
    GPR40_fields_::FLEXSPI1_STOP_ACK,
    GPR40_fields_::FLEXSPI2_STOP_ACK,
    GPR40_fields_::LPI2C1_STOP_ACK,
    GPR40_fields_::LPI2C2_STOP_ACK,
    GPR40_fields_::LPI2C3_STOP_ACK,
    GPR40_fields_::LPI2C4_STOP_ACK,
    GPR40_fields_::LPI2C5_STOP_ACK,
    GPR40_fields_::LPI2C6_STOP_ACK,
    GPR40_fields_::LPSPI1_STOP_ACK,
    GPR40_fields_::LPSPI2_STOP_ACK,
    GPR40_fields_::LPSPI3_STOP_ACK,
    GPR40_fields_::LPSPI4_STOP_ACK,
    GPR40_fields_::LPSPI5_STOP_ACK,
    GPR40_fields_::LPSPI6_STOP_ACK,
    GPR40_fields_::LPUART1_STOP_ACK,
    GPR40_fields_::LPUART2_STOP_ACK,
    GPR40_fields_::LPUART3_STOP_ACK,
    GPR40_fields_::LPUART4_STOP_ACK,
    GPR40_fields_::LPUART5_STOP_ACK,
    GPR40_fields_::LPUART6_STOP_ACK,
    GPR40_fields_::LPUART7_STOP_ACK,
    GPR40_fields_::LPUART8_STOP_ACK> {
  using ADC1_STOP_ACK = GPR40_fields_::ADC1_STOP_ACK;
  using ADC2_STOP_ACK = GPR40_fields_::ADC2_STOP_ACK;
  using CAAM_STOP_ACK = GPR40_fields_::CAAM_STOP_ACK;
  using CAN1_STOP_ACK = GPR40_fields_::CAN1_STOP_ACK;
  using CAN2_STOP_ACK = GPR40_fields_::CAN2_STOP_ACK;
  using CAN3_STOP_ACK = GPR40_fields_::CAN3_STOP_ACK;
  using EDMA_STOP_ACK = GPR40_fields_::EDMA_STOP_ACK;
  using EDMA_LPSR_STOP_ACK = GPR40_fields_::EDMA_LPSR_STOP_ACK;
  using ENET_STOP_ACK = GPR40_fields_::ENET_STOP_ACK;
  using ENET1G_STOP_ACK = GPR40_fields_::ENET1G_STOP_ACK;
  using FLEXSPI1_STOP_ACK = GPR40_fields_::FLEXSPI1_STOP_ACK;
  using FLEXSPI2_STOP_ACK = GPR40_fields_::FLEXSPI2_STOP_ACK;
  using LPI2C1_STOP_ACK = GPR40_fields_::LPI2C1_STOP_ACK;
  using LPI2C2_STOP_ACK = GPR40_fields_::LPI2C2_STOP_ACK;
  using LPI2C3_STOP_ACK = GPR40_fields_::LPI2C3_STOP_ACK;
  using LPI2C4_STOP_ACK = GPR40_fields_::LPI2C4_STOP_ACK;
  using LPI2C5_STOP_ACK = GPR40_fields_::LPI2C5_STOP_ACK;
  using LPI2C6_STOP_ACK = GPR40_fields_::LPI2C6_STOP_ACK;
  using LPSPI1_STOP_ACK = GPR40_fields_::LPSPI1_STOP_ACK;
  using LPSPI2_STOP_ACK = GPR40_fields_::LPSPI2_STOP_ACK;
  using LPSPI3_STOP_ACK = GPR40_fields_::LPSPI3_STOP_ACK;
  using LPSPI4_STOP_ACK = GPR40_fields_::LPSPI4_STOP_ACK;
  using LPSPI5_STOP_ACK = GPR40_fields_::LPSPI5_STOP_ACK;
  using LPSPI6_STOP_ACK = GPR40_fields_::LPSPI6_STOP_ACK;
  using LPUART1_STOP_ACK = GPR40_fields_::LPUART1_STOP_ACK;
  using LPUART2_STOP_ACK = GPR40_fields_::LPUART2_STOP_ACK;
  using LPUART3_STOP_ACK = GPR40_fields_::LPUART3_STOP_ACK;
  using LPUART4_STOP_ACK = GPR40_fields_::LPUART4_STOP_ACK;
  using LPUART5_STOP_ACK = GPR40_fields_::LPUART5_STOP_ACK;
  using LPUART6_STOP_ACK = GPR40_fields_::LPUART6_STOP_ACK;
  using LPUART7_STOP_ACK = GPR40_fields_::LPUART7_STOP_ACK;
  using LPUART8_STOP_ACK = GPR40_fields_::LPUART8_STOP_ACK;
};

// GPR41 General Purpose Register
struct GPR41_fields_ {
  // LPUART9 stop acknowledge
  using LPUART9_STOP_ACK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART10 stop acknowledge
  using LPUART10_STOP_ACK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART11 stop acknowledge
  using LPUART11_STOP_ACK = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LPUART12 stop acknowledge
  using LPUART12_STOP_ACK = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // MIC stop acknowledge
  using MIC_STOP_ACK = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // PIT1 stop acknowledge
  using PIT1_STOP_ACK = ftl::mmio::Field<1, 5, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // PIT2 stop acknowledge
  using PIT2_STOP_ACK = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SEMC stop acknowledge
  using SEMC_STOP_ACK = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SNVS_HP stop acknowledge
  using SNVS_HP_STOP_ACK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SAI1 stop acknowledge
  using SAI1_STOP_ACK = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SAI2 stop acknowledge
  using SAI2_STOP_ACK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SAI3 stop acknowledge
  using SAI3_STOP_ACK = ftl::mmio::Field<1, 11, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // SAI4 stop acknowledge
  using SAI4_STOP_ACK = ftl::mmio::Field<1, 12, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXIO1 stop acknowledge of bus clock domain
  using FLEXIO1_STOP_ACK_BUS = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXIO1 stop acknowledge of peripheral clock domain
  using FLEXIO1_STOP_ACK_PER = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXIO2 stop acknowledge of bus clock domain
  using FLEXIO2_STOP_ACK_BUS = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // FLEXIO2 stop acknowledge of peripheral clock domain
  using FLEXIO2_STOP_ACK_PER = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ROM read lock status bit
  using ROM_READ_LOCKED = ftl::mmio::Field<1, 24, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct GPR41_fields_

struct GPR41 : ftl::mmio::Register<
    0x40C0C0A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    GPR41_fields_::LPUART9_STOP_ACK,
    GPR41_fields_::LPUART10_STOP_ACK,
    GPR41_fields_::LPUART11_STOP_ACK,
    GPR41_fields_::LPUART12_STOP_ACK,
    GPR41_fields_::MIC_STOP_ACK,
    GPR41_fields_::PIT1_STOP_ACK,
    GPR41_fields_::PIT2_STOP_ACK,
    GPR41_fields_::SEMC_STOP_ACK,
    GPR41_fields_::SNVS_HP_STOP_ACK,
    GPR41_fields_::SAI1_STOP_ACK,
    GPR41_fields_::SAI2_STOP_ACK,
    GPR41_fields_::SAI3_STOP_ACK,
    GPR41_fields_::SAI4_STOP_ACK,
    GPR41_fields_::FLEXIO1_STOP_ACK_BUS,
    GPR41_fields_::FLEXIO1_STOP_ACK_PER,
    GPR41_fields_::FLEXIO2_STOP_ACK_BUS,
    GPR41_fields_::FLEXIO2_STOP_ACK_PER,
    ftl::mmio::Reserved<7, 17>,
    GPR41_fields_::ROM_READ_LOCKED,
    ftl::mmio::Reserved<7, 25>> {
  using LPUART9_STOP_ACK = GPR41_fields_::LPUART9_STOP_ACK;
  using LPUART10_STOP_ACK = GPR41_fields_::LPUART10_STOP_ACK;
  using LPUART11_STOP_ACK = GPR41_fields_::LPUART11_STOP_ACK;
  using LPUART12_STOP_ACK = GPR41_fields_::LPUART12_STOP_ACK;
  using MIC_STOP_ACK = GPR41_fields_::MIC_STOP_ACK;
  using PIT1_STOP_ACK = GPR41_fields_::PIT1_STOP_ACK;
  using PIT2_STOP_ACK = GPR41_fields_::PIT2_STOP_ACK;
  using SEMC_STOP_ACK = GPR41_fields_::SEMC_STOP_ACK;
  using SNVS_HP_STOP_ACK = GPR41_fields_::SNVS_HP_STOP_ACK;
  using SAI1_STOP_ACK = GPR41_fields_::SAI1_STOP_ACK;
  using SAI2_STOP_ACK = GPR41_fields_::SAI2_STOP_ACK;
  using SAI3_STOP_ACK = GPR41_fields_::SAI3_STOP_ACK;
  using SAI4_STOP_ACK = GPR41_fields_::SAI4_STOP_ACK;
  using FLEXIO1_STOP_ACK_BUS = GPR41_fields_::FLEXIO1_STOP_ACK_BUS;
  using FLEXIO1_STOP_ACK_PER = GPR41_fields_::FLEXIO1_STOP_ACK_PER;
  using FLEXIO2_STOP_ACK_BUS = GPR41_fields_::FLEXIO2_STOP_ACK_BUS;
  using FLEXIO2_STOP_ACK_PER = GPR41_fields_::FLEXIO2_STOP_ACK_PER;
  using ROM_READ_LOCKED = GPR41_fields_::ROM_READ_LOCKED;
};

}  // namespace regs::iomuxc_lpsr_gpr