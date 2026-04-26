#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC LPSR GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcLpsrGpr {
  // GPR0 General Purpose Register
  struct Gpr0Fields {
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
  };  // struct Gpr0Fields

  struct GPR0 : ftl::mmio::Register<
      0x40C0C000u,
      std::uint32_t,
      0x00000400u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      Gpr0Fields::CM4_INIT_VTOR_LOW,
      ftl::mmio::Reserved<12, 16>,
      Gpr0Fields::DWP,
      Gpr0Fields::DWP_LOCK> {
    using eDWP = Gpr0Fields::eDWP;
    using eDWP_LOCK = Gpr0Fields::eDWP_LOCK;
    using CM4_INIT_VTOR_LOW = Gpr0Fields::CM4_INIT_VTOR_LOW;
    using DWP = Gpr0Fields::DWP;
    using DWP_LOCK = Gpr0Fields::DWP_LOCK;
  };

  // GPR1 General Purpose Register
  struct Gpr1Fields {
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
  };  // struct Gpr1Fields

  struct GPR1 : ftl::mmio::Register<
      0x40C0C004u,
      std::uint32_t,
      0x00000020u,
      ftl::mmio::RW,
      Gpr1Fields::CM4_INIT_VTOR_HIGH,
      ftl::mmio::Reserved<12, 16>,
      Gpr1Fields::DWP,
      Gpr1Fields::DWP_LOCK> {
    using eDWP = Gpr1Fields::eDWP;
    using eDWP_LOCK = Gpr1Fields::eDWP_LOCK;
    using CM4_INIT_VTOR_HIGH = Gpr1Fields::CM4_INIT_VTOR_HIGH;
    using DWP = Gpr1Fields::DWP;
    using DWP_LOCK = Gpr1Fields::DWP_LOCK;
  };

  // GPR2 General Purpose Register
  struct Gpr2Fields {
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
  };  // struct Gpr2Fields

  struct GPR2 : ftl::mmio::Register<
      0x40C0C008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr2Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr2Fields::APC_AC_R0_BOT> {
    using eLOCK = Gpr2Fields::eLOCK;
    using LOCK = Gpr2Fields::LOCK;
    using APC_AC_R0_BOT = Gpr2Fields::APC_AC_R0_BOT;
  };

  // GPR3 General Purpose Register
  struct Gpr3Fields {
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
  };  // struct Gpr3Fields

  struct GPR3 : ftl::mmio::Register<
      0x40C0C00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr3Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr3Fields::APC_AC_R0_TOP> {
    using eLOCK = Gpr3Fields::eLOCK;
    using LOCK = Gpr3Fields::LOCK;
    using APC_AC_R0_TOP = Gpr3Fields::APC_AC_R0_TOP;
  };

  // GPR4 General Purpose Register
  struct Gpr4Fields {
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
  };  // struct Gpr4Fields

  struct GPR4 : ftl::mmio::Register<
      0x40C0C010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr4Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr4Fields::APC_AC_R1_BOT> {
    using eLOCK = Gpr4Fields::eLOCK;
    using LOCK = Gpr4Fields::LOCK;
    using APC_AC_R1_BOT = Gpr4Fields::APC_AC_R1_BOT;
  };

  // GPR5 General Purpose Register
  struct Gpr5Fields {
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
  };  // struct Gpr5Fields

  struct GPR5 : ftl::mmio::Register<
      0x40C0C014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr5Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr5Fields::APC_AC_R1_TOP> {
    using eLOCK = Gpr5Fields::eLOCK;
    using LOCK = Gpr5Fields::LOCK;
    using APC_AC_R1_TOP = Gpr5Fields::APC_AC_R1_TOP;
  };

  // GPR6 General Purpose Register
  struct Gpr6Fields {
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
  };  // struct Gpr6Fields

  struct GPR6 : ftl::mmio::Register<
      0x40C0C018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr6Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr6Fields::APC_AC_R2_BOT> {
    using eLOCK = Gpr6Fields::eLOCK;
    using LOCK = Gpr6Fields::LOCK;
    using APC_AC_R2_BOT = Gpr6Fields::APC_AC_R2_BOT;
  };

  // GPR7 General Purpose Register
  struct Gpr7Fields {
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
  };  // struct Gpr7Fields

  struct GPR7 : ftl::mmio::Register<
      0x40C0C01Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr7Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr7Fields::APC_AC_R2_TOP> {
    using eLOCK = Gpr7Fields::eLOCK;
    using LOCK = Gpr7Fields::LOCK;
    using APC_AC_R2_TOP = Gpr7Fields::APC_AC_R2_TOP;
  };

  // GPR8 General Purpose Register
  struct Gpr8Fields {
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
  };  // struct Gpr8Fields

  struct GPR8 : ftl::mmio::Register<
      0x40C0C020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr8Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr8Fields::APC_AC_R3_BOT> {
    using eLOCK = Gpr8Fields::eLOCK;
    using LOCK = Gpr8Fields::LOCK;
    using APC_AC_R3_BOT = Gpr8Fields::APC_AC_R3_BOT;
  };

  // GPR9 General Purpose Register
  struct Gpr9Fields {
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
  };  // struct Gpr9Fields

  struct GPR9 : ftl::mmio::Register<
      0x40C0C024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr9Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr9Fields::APC_AC_R3_TOP> {
    using eLOCK = Gpr9Fields::eLOCK;
    using LOCK = Gpr9Fields::LOCK;
    using APC_AC_R3_TOP = Gpr9Fields::APC_AC_R3_TOP;
  };

  // GPR10 General Purpose Register
  struct Gpr10Fields {
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
  };  // struct Gpr10Fields

  struct GPR10 : ftl::mmio::Register<
      0x40C0C028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr10Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr10Fields::APC_AC_R4_BOT> {
    using eLOCK = Gpr10Fields::eLOCK;
    using LOCK = Gpr10Fields::LOCK;
    using APC_AC_R4_BOT = Gpr10Fields::APC_AC_R4_BOT;
  };

  // GPR11 General Purpose Register
  struct Gpr11Fields {
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
  };  // struct Gpr11Fields

  struct GPR11 : ftl::mmio::Register<
      0x40C0C02Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr11Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr11Fields::APC_AC_R4_TOP> {
    using eLOCK = Gpr11Fields::eLOCK;
    using LOCK = Gpr11Fields::LOCK;
    using APC_AC_R4_TOP = Gpr11Fields::APC_AC_R4_TOP;
  };

  // GPR12 General Purpose Register
  struct Gpr12Fields {
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
  };  // struct Gpr12Fields

  struct GPR12 : ftl::mmio::Register<
      0x40C0C030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr12Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr12Fields::APC_AC_R5_BOT> {
    using eLOCK = Gpr12Fields::eLOCK;
    using LOCK = Gpr12Fields::LOCK;
    using APC_AC_R5_BOT = Gpr12Fields::APC_AC_R5_BOT;
  };

  // GPR13 General Purpose Register
  struct Gpr13Fields {
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
  };  // struct Gpr13Fields

  struct GPR13 : ftl::mmio::Register<
      0x40C0C034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr13Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr13Fields::APC_AC_R5_TOP> {
    using eLOCK = Gpr13Fields::eLOCK;
    using LOCK = Gpr13Fields::LOCK;
    using APC_AC_R5_TOP = Gpr13Fields::APC_AC_R5_TOP;
  };

  // GPR14 General Purpose Register
  struct Gpr14Fields {
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
  };  // struct Gpr14Fields

  struct GPR14 : ftl::mmio::Register<
      0x40C0C038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr14Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr14Fields::APC_AC_R6_BOT> {
    using eLOCK = Gpr14Fields::eLOCK;
    using LOCK = Gpr14Fields::LOCK;
    using APC_AC_R6_BOT = Gpr14Fields::APC_AC_R6_BOT;
  };

  // GPR15 General Purpose Register
  struct Gpr15Fields {
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
  };  // struct Gpr15Fields

  struct GPR15 : ftl::mmio::Register<
      0x40C0C03Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr15Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr15Fields::APC_AC_R6_TOP> {
    using eLOCK = Gpr15Fields::eLOCK;
    using LOCK = Gpr15Fields::LOCK;
    using APC_AC_R6_TOP = Gpr15Fields::APC_AC_R6_TOP;
  };

  // GPR16 General Purpose Register
  struct Gpr16Fields {
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
  };  // struct Gpr16Fields

  struct GPR16 : ftl::mmio::Register<
      0x40C0C040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr16Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr16Fields::APC_AC_R7_BOT> {
    using eLOCK = Gpr16Fields::eLOCK;
    using LOCK = Gpr16Fields::LOCK;
    using APC_AC_R7_BOT = Gpr16Fields::APC_AC_R7_BOT;
  };

  // GPR17 General Purpose Register
  struct Gpr17Fields {
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
  };  // struct Gpr17Fields

  struct GPR17 : ftl::mmio::Register<
      0x40C0C044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr17Fields::LOCK,
      ftl::mmio::Reserved<2, 1>,
      Gpr17Fields::APC_AC_R7_TOP> {
    using eLOCK = Gpr17Fields::eLOCK;
    using LOCK = Gpr17Fields::LOCK;
    using APC_AC_R7_TOP = Gpr17Fields::APC_AC_R7_TOP;
  };

  // GPR18 General Purpose Register
  struct Gpr18Fields {
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
  };  // struct Gpr18Fields

  struct GPR18 : ftl::mmio::Register<
      0x40C0C048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr18Fields::APC_R0_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr18Fields::LOCK> {
    using eAPC_R0_ENCRYPT_ENABLE = Gpr18Fields::eAPC_R0_ENCRYPT_ENABLE;
    using APC_R0_ENCRYPT_ENABLE = Gpr18Fields::APC_R0_ENCRYPT_ENABLE;
    using LOCK = Gpr18Fields::LOCK;
  };

  // GPR19 General Purpose Register
  struct Gpr19Fields {
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
  };  // struct Gpr19Fields

  struct GPR19 : ftl::mmio::Register<
      0x40C0C04Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr19Fields::APC_R1_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr19Fields::LOCK> {
    using eAPC_R1_ENCRYPT_ENABLE = Gpr19Fields::eAPC_R1_ENCRYPT_ENABLE;
    using APC_R1_ENCRYPT_ENABLE = Gpr19Fields::APC_R1_ENCRYPT_ENABLE;
    using LOCK = Gpr19Fields::LOCK;
  };

  // GPR20 General Purpose Register
  struct Gpr20Fields {
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
  };  // struct Gpr20Fields

  struct GPR20 : ftl::mmio::Register<
      0x40C0C050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr20Fields::APC_R2_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr20Fields::LOCK> {
    using eAPC_R2_ENCRYPT_ENABLE = Gpr20Fields::eAPC_R2_ENCRYPT_ENABLE;
    using APC_R2_ENCRYPT_ENABLE = Gpr20Fields::APC_R2_ENCRYPT_ENABLE;
    using LOCK = Gpr20Fields::LOCK;
  };

  // GPR21 General Purpose Register
  struct Gpr21Fields {
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
  };  // struct Gpr21Fields

  struct GPR21 : ftl::mmio::Register<
      0x40C0C054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr21Fields::APC_R3_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr21Fields::LOCK> {
    using eAPC_R3_ENCRYPT_ENABLE = Gpr21Fields::eAPC_R3_ENCRYPT_ENABLE;
    using APC_R3_ENCRYPT_ENABLE = Gpr21Fields::APC_R3_ENCRYPT_ENABLE;
    using LOCK = Gpr21Fields::LOCK;
  };

  // GPR22 General Purpose Register
  struct Gpr22Fields {
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
  };  // struct Gpr22Fields

  struct GPR22 : ftl::mmio::Register<
      0x40C0C058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr22Fields::APC_R4_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr22Fields::LOCK> {
    using eAPC_R4_ENCRYPT_ENABLE = Gpr22Fields::eAPC_R4_ENCRYPT_ENABLE;
    using APC_R4_ENCRYPT_ENABLE = Gpr22Fields::APC_R4_ENCRYPT_ENABLE;
    using LOCK = Gpr22Fields::LOCK;
  };

  // GPR23 General Purpose Register
  struct Gpr23Fields {
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
  };  // struct Gpr23Fields

  struct GPR23 : ftl::mmio::Register<
      0x40C0C05Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr23Fields::APC_R5_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr23Fields::LOCK> {
    using eAPC_R5_ENCRYPT_ENABLE = Gpr23Fields::eAPC_R5_ENCRYPT_ENABLE;
    using APC_R5_ENCRYPT_ENABLE = Gpr23Fields::APC_R5_ENCRYPT_ENABLE;
    using LOCK = Gpr23Fields::LOCK;
  };

  // GPR24 General Purpose Register
  struct Gpr24Fields {
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
  };  // struct Gpr24Fields

  struct GPR24 : ftl::mmio::Register<
      0x40C0C060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr24Fields::APC_R6_ENCRYPT_ENABLE,
      ftl::mmio::Reserved<11, 5>,
      Gpr24Fields::LOCK> {
    using eAPC_R6_ENCRYPT_ENABLE = Gpr24Fields::eAPC_R6_ENCRYPT_ENABLE;
    using APC_R6_ENCRYPT_ENABLE = Gpr24Fields::APC_R6_ENCRYPT_ENABLE;
    using LOCK = Gpr24Fields::LOCK;
  };

  // GPR25 General Purpose Register
  struct Gpr25Fields {
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
  };  // struct Gpr25Fields

  struct GPR25 : ftl::mmio::Register<
      0x40C0C064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      Gpr25Fields::APC_R7_ENCRYPT_ENABLE,
      Gpr25Fields::APC_VALID,
      ftl::mmio::Reserved<10, 6>,
      Gpr25Fields::LOCK> {
    using eAPC_R7_ENCRYPT_ENABLE = Gpr25Fields::eAPC_R7_ENCRYPT_ENABLE;
    using eAPC_VALID = Gpr25Fields::eAPC_VALID;
    using APC_R7_ENCRYPT_ENABLE = Gpr25Fields::APC_R7_ENCRYPT_ENABLE;
    using APC_VALID = Gpr25Fields::APC_VALID;
    using LOCK = Gpr25Fields::LOCK;
  };

  // GPR26 General Purpose Register
  struct Gpr26Fields {
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
  };  // struct Gpr26Fields

  struct GPR26 : ftl::mmio::Register<
      0x40C0C068u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr26Fields::CM7_INIT_VTOR,
      Gpr26Fields::FIELD_0,
      Gpr26Fields::DWP,
      Gpr26Fields::DWP_LOCK> {
    using eDWP = Gpr26Fields::eDWP;
    using eDWP_LOCK = Gpr26Fields::eDWP_LOCK;
    using CM7_INIT_VTOR = Gpr26Fields::CM7_INIT_VTOR;
    using FIELD_0 = Gpr26Fields::FIELD_0;
    using DWP = Gpr26Fields::DWP;
    using DWP_LOCK = Gpr26Fields::DWP_LOCK;
  };

  // GPR33 General Purpose Register
  struct Gpr33Fields {
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
  };  // struct Gpr33Fields

  struct GPR33 : ftl::mmio::Register<
      0x40C0C084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr33Fields::M4_NMI_CLEAR,
      ftl::mmio::Reserved<7, 1>,
      Gpr33Fields::USBPHY1_WAKEUP_IRQ_CLEAR,
      Gpr33Fields::USBPHY2_WAKEUP_IRQ_CLEAR,
      ftl::mmio::Reserved<18, 10>,
      Gpr33Fields::DWP,
      Gpr33Fields::DWP_LOCK> {
    using eDWP = Gpr33Fields::eDWP;
    using eDWP_LOCK = Gpr33Fields::eDWP_LOCK;
    using M4_NMI_CLEAR = Gpr33Fields::M4_NMI_CLEAR;
    using USBPHY1_WAKEUP_IRQ_CLEAR = Gpr33Fields::USBPHY1_WAKEUP_IRQ_CLEAR;
    using USBPHY2_WAKEUP_IRQ_CLEAR = Gpr33Fields::USBPHY2_WAKEUP_IRQ_CLEAR;
    using DWP = Gpr33Fields::DWP;
    using DWP_LOCK = Gpr33Fields::DWP_LOCK;
  };

  // GPR34 General Purpose Register
  struct Gpr34Fields {
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
  };  // struct Gpr34Fields

  struct GPR34 : ftl::mmio::Register<
      0x40C0C088u,
      std::uint32_t,
      0x00000E00u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Gpr34Fields::GPIO_LPSR_HIGH_RANGE,
      Gpr34Fields::GPIO_LPSR_LOW_RANGE,
      Gpr34Fields::M7_NMI_MASK,
      Gpr34Fields::M4_NMI_MASK,
      Gpr34Fields::M4_GPC_SLEEP_SEL,
      ftl::mmio::Reserved<5, 6>,
      Gpr34Fields::SEC_ERR_RESP,
      ftl::mmio::Reserved<16, 12>,
      Gpr34Fields::DWP,
      Gpr34Fields::DWP_LOCK> {
    using eM7_NMI_MASK = Gpr34Fields::eM7_NMI_MASK;
    using eM4_NMI_MASK = Gpr34Fields::eM4_NMI_MASK;
    using eM4_GPC_SLEEP_SEL = Gpr34Fields::eM4_GPC_SLEEP_SEL;
    using eSEC_ERR_RESP = Gpr34Fields::eSEC_ERR_RESP;
    using eDWP = Gpr34Fields::eDWP;
    using eDWP_LOCK = Gpr34Fields::eDWP_LOCK;
    using GPIO_LPSR_HIGH_RANGE = Gpr34Fields::GPIO_LPSR_HIGH_RANGE;
    using GPIO_LPSR_LOW_RANGE = Gpr34Fields::GPIO_LPSR_LOW_RANGE;
    using M7_NMI_MASK = Gpr34Fields::M7_NMI_MASK;
    using M4_NMI_MASK = Gpr34Fields::M4_NMI_MASK;
    using M4_GPC_SLEEP_SEL = Gpr34Fields::M4_GPC_SLEEP_SEL;
    using SEC_ERR_RESP = Gpr34Fields::SEC_ERR_RESP;
    using DWP = Gpr34Fields::DWP;
    using DWP_LOCK = Gpr34Fields::DWP_LOCK;
  };

  // GPR35 General Purpose Register
  struct Gpr35Fields {
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
  };  // struct Gpr35Fields

  struct GPR35 : ftl::mmio::Register<
      0x40C0C08Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr35Fields::ADC1_IPG_DOZE,
      Gpr35Fields::ADC1_STOP_REQ,
      Gpr35Fields::ADC1_IPG_STOP_MODE,
      Gpr35Fields::ADC2_IPG_DOZE,
      Gpr35Fields::ADC2_STOP_REQ,
      Gpr35Fields::ADC2_IPG_STOP_MODE,
      Gpr35Fields::CAAM_IPG_DOZE,
      Gpr35Fields::CAAM_STOP_REQ,
      Gpr35Fields::CAN1_IPG_DOZE,
      Gpr35Fields::CAN1_STOP_REQ,
      Gpr35Fields::CAN2_IPG_DOZE,
      Gpr35Fields::CAN2_STOP_REQ,
      Gpr35Fields::CAN3_IPG_DOZE,
      Gpr35Fields::CAN3_STOP_REQ,
      ftl::mmio::Reserved<1, 14>,
      Gpr35Fields::EDMA_STOP_REQ,
      Gpr35Fields::EDMA_LPSR_STOP_REQ,
      Gpr35Fields::ENET_IPG_DOZE,
      Gpr35Fields::ENET_STOP_REQ,
      Gpr35Fields::ENET1G_IPG_DOZE,
      Gpr35Fields::ENET1G_STOP_REQ,
      Gpr35Fields::FLEXIO1_IPG_DOZE,
      Gpr35Fields::FLEXIO2_IPG_DOZE,
      Gpr35Fields::FLEXSPI1_IPG_DOZE,
      Gpr35Fields::FLEXSPI1_STOP_REQ,
      Gpr35Fields::FLEXSPI2_IPG_DOZE,
      Gpr35Fields::FLEXSPI2_STOP_REQ,
      ftl::mmio::Reserved<1, 27>,
      Gpr35Fields::DWP,
      Gpr35Fields::DWP_LOCK> {
    using eADC1_IPG_DOZE = Gpr35Fields::eADC1_IPG_DOZE;
    using eADC1_STOP_REQ = Gpr35Fields::eADC1_STOP_REQ;
    using eADC1_IPG_STOP_MODE = Gpr35Fields::eADC1_IPG_STOP_MODE;
    using eADC2_IPG_DOZE = Gpr35Fields::eADC2_IPG_DOZE;
    using eADC2_STOP_REQ = Gpr35Fields::eADC2_STOP_REQ;
    using eADC2_IPG_STOP_MODE = Gpr35Fields::eADC2_IPG_STOP_MODE;
    using eCAAM_IPG_DOZE = Gpr35Fields::eCAAM_IPG_DOZE;
    using eCAAM_STOP_REQ = Gpr35Fields::eCAAM_STOP_REQ;
    using eCAN1_IPG_DOZE = Gpr35Fields::eCAN1_IPG_DOZE;
    using eCAN1_STOP_REQ = Gpr35Fields::eCAN1_STOP_REQ;
    using eCAN2_IPG_DOZE = Gpr35Fields::eCAN2_IPG_DOZE;
    using eCAN2_STOP_REQ = Gpr35Fields::eCAN2_STOP_REQ;
    using eCAN3_IPG_DOZE = Gpr35Fields::eCAN3_IPG_DOZE;
    using eCAN3_STOP_REQ = Gpr35Fields::eCAN3_STOP_REQ;
    using eEDMA_STOP_REQ = Gpr35Fields::eEDMA_STOP_REQ;
    using eEDMA_LPSR_STOP_REQ = Gpr35Fields::eEDMA_LPSR_STOP_REQ;
    using eENET_IPG_DOZE = Gpr35Fields::eENET_IPG_DOZE;
    using eENET_STOP_REQ = Gpr35Fields::eENET_STOP_REQ;
    using eENET1G_IPG_DOZE = Gpr35Fields::eENET1G_IPG_DOZE;
    using eENET1G_STOP_REQ = Gpr35Fields::eENET1G_STOP_REQ;
    using eFLEXIO1_IPG_DOZE = Gpr35Fields::eFLEXIO1_IPG_DOZE;
    using eFLEXIO2_IPG_DOZE = Gpr35Fields::eFLEXIO2_IPG_DOZE;
    using eFLEXSPI1_IPG_DOZE = Gpr35Fields::eFLEXSPI1_IPG_DOZE;
    using eFLEXSPI1_STOP_REQ = Gpr35Fields::eFLEXSPI1_STOP_REQ;
    using eFLEXSPI2_IPG_DOZE = Gpr35Fields::eFLEXSPI2_IPG_DOZE;
    using eFLEXSPI2_STOP_REQ = Gpr35Fields::eFLEXSPI2_STOP_REQ;
    using eDWP = Gpr35Fields::eDWP;
    using eDWP_LOCK = Gpr35Fields::eDWP_LOCK;
    using ADC1_IPG_DOZE = Gpr35Fields::ADC1_IPG_DOZE;
    using ADC1_STOP_REQ = Gpr35Fields::ADC1_STOP_REQ;
    using ADC1_IPG_STOP_MODE = Gpr35Fields::ADC1_IPG_STOP_MODE;
    using ADC2_IPG_DOZE = Gpr35Fields::ADC2_IPG_DOZE;
    using ADC2_STOP_REQ = Gpr35Fields::ADC2_STOP_REQ;
    using ADC2_IPG_STOP_MODE = Gpr35Fields::ADC2_IPG_STOP_MODE;
    using CAAM_IPG_DOZE = Gpr35Fields::CAAM_IPG_DOZE;
    using CAAM_STOP_REQ = Gpr35Fields::CAAM_STOP_REQ;
    using CAN1_IPG_DOZE = Gpr35Fields::CAN1_IPG_DOZE;
    using CAN1_STOP_REQ = Gpr35Fields::CAN1_STOP_REQ;
    using CAN2_IPG_DOZE = Gpr35Fields::CAN2_IPG_DOZE;
    using CAN2_STOP_REQ = Gpr35Fields::CAN2_STOP_REQ;
    using CAN3_IPG_DOZE = Gpr35Fields::CAN3_IPG_DOZE;
    using CAN3_STOP_REQ = Gpr35Fields::CAN3_STOP_REQ;
    using EDMA_STOP_REQ = Gpr35Fields::EDMA_STOP_REQ;
    using EDMA_LPSR_STOP_REQ = Gpr35Fields::EDMA_LPSR_STOP_REQ;
    using ENET_IPG_DOZE = Gpr35Fields::ENET_IPG_DOZE;
    using ENET_STOP_REQ = Gpr35Fields::ENET_STOP_REQ;
    using ENET1G_IPG_DOZE = Gpr35Fields::ENET1G_IPG_DOZE;
    using ENET1G_STOP_REQ = Gpr35Fields::ENET1G_STOP_REQ;
    using FLEXIO1_IPG_DOZE = Gpr35Fields::FLEXIO1_IPG_DOZE;
    using FLEXIO2_IPG_DOZE = Gpr35Fields::FLEXIO2_IPG_DOZE;
    using FLEXSPI1_IPG_DOZE = Gpr35Fields::FLEXSPI1_IPG_DOZE;
    using FLEXSPI1_STOP_REQ = Gpr35Fields::FLEXSPI1_STOP_REQ;
    using FLEXSPI2_IPG_DOZE = Gpr35Fields::FLEXSPI2_IPG_DOZE;
    using FLEXSPI2_STOP_REQ = Gpr35Fields::FLEXSPI2_STOP_REQ;
    using DWP = Gpr35Fields::DWP;
    using DWP_LOCK = Gpr35Fields::DWP_LOCK;
  };

  // GPR36 General Purpose Register
  struct Gpr36Fields {
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
  };  // struct Gpr36Fields

  struct GPR36 : ftl::mmio::Register<
      0x40C0C090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr36Fields::GPT1_IPG_DOZE,
      Gpr36Fields::GPT2_IPG_DOZE,
      Gpr36Fields::GPT3_IPG_DOZE,
      Gpr36Fields::GPT4_IPG_DOZE,
      Gpr36Fields::GPT5_IPG_DOZE,
      Gpr36Fields::GPT6_IPG_DOZE,
      Gpr36Fields::LPI2C1_IPG_DOZE,
      Gpr36Fields::LPI2C1_STOP_REQ,
      Gpr36Fields::LPI2C1_IPG_STOP_MODE,
      Gpr36Fields::LPI2C2_IPG_DOZE,
      Gpr36Fields::LPI2C2_STOP_REQ,
      Gpr36Fields::LPI2C2_IPG_STOP_MODE,
      Gpr36Fields::LPI2C3_IPG_DOZE,
      Gpr36Fields::LPI2C3_STOP_REQ,
      Gpr36Fields::LPI2C3_IPG_STOP_MODE,
      Gpr36Fields::LPI2C4_IPG_DOZE,
      Gpr36Fields::LPI2C4_STOP_REQ,
      Gpr36Fields::LPI2C4_IPG_STOP_MODE,
      Gpr36Fields::LPI2C5_IPG_DOZE,
      Gpr36Fields::LPI2C5_STOP_REQ,
      Gpr36Fields::LPI2C5_IPG_STOP_MODE,
      Gpr36Fields::LPI2C6_IPG_DOZE,
      Gpr36Fields::LPI2C6_STOP_REQ,
      Gpr36Fields::LPI2C6_IPG_STOP_MODE,
      Gpr36Fields::LPSPI1_IPG_DOZE,
      Gpr36Fields::LPSPI1_STOP_REQ,
      Gpr36Fields::LPSPI1_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr36Fields::DWP,
      Gpr36Fields::DWP_LOCK> {
    using eGPT1_IPG_DOZE = Gpr36Fields::eGPT1_IPG_DOZE;
    using eGPT2_IPG_DOZE = Gpr36Fields::eGPT2_IPG_DOZE;
    using eGPT3_IPG_DOZE = Gpr36Fields::eGPT3_IPG_DOZE;
    using eGPT4_IPG_DOZE = Gpr36Fields::eGPT4_IPG_DOZE;
    using eGPT5_IPG_DOZE = Gpr36Fields::eGPT5_IPG_DOZE;
    using eGPT6_IPG_DOZE = Gpr36Fields::eGPT6_IPG_DOZE;
    using eLPI2C1_IPG_DOZE = Gpr36Fields::eLPI2C1_IPG_DOZE;
    using eLPI2C1_STOP_REQ = Gpr36Fields::eLPI2C1_STOP_REQ;
    using eLPI2C1_IPG_STOP_MODE = Gpr36Fields::eLPI2C1_IPG_STOP_MODE;
    using eLPI2C2_IPG_DOZE = Gpr36Fields::eLPI2C2_IPG_DOZE;
    using eLPI2C2_STOP_REQ = Gpr36Fields::eLPI2C2_STOP_REQ;
    using eLPI2C2_IPG_STOP_MODE = Gpr36Fields::eLPI2C2_IPG_STOP_MODE;
    using eLPI2C3_IPG_DOZE = Gpr36Fields::eLPI2C3_IPG_DOZE;
    using eLPI2C3_STOP_REQ = Gpr36Fields::eLPI2C3_STOP_REQ;
    using eLPI2C3_IPG_STOP_MODE = Gpr36Fields::eLPI2C3_IPG_STOP_MODE;
    using eLPI2C4_IPG_DOZE = Gpr36Fields::eLPI2C4_IPG_DOZE;
    using eLPI2C4_STOP_REQ = Gpr36Fields::eLPI2C4_STOP_REQ;
    using eLPI2C4_IPG_STOP_MODE = Gpr36Fields::eLPI2C4_IPG_STOP_MODE;
    using eLPI2C5_IPG_DOZE = Gpr36Fields::eLPI2C5_IPG_DOZE;
    using eLPI2C5_STOP_REQ = Gpr36Fields::eLPI2C5_STOP_REQ;
    using eLPI2C5_IPG_STOP_MODE = Gpr36Fields::eLPI2C5_IPG_STOP_MODE;
    using eLPI2C6_IPG_DOZE = Gpr36Fields::eLPI2C6_IPG_DOZE;
    using eLPI2C6_STOP_REQ = Gpr36Fields::eLPI2C6_STOP_REQ;
    using eLPI2C6_IPG_STOP_MODE = Gpr36Fields::eLPI2C6_IPG_STOP_MODE;
    using eLPSPI1_IPG_DOZE = Gpr36Fields::eLPSPI1_IPG_DOZE;
    using eLPSPI1_STOP_REQ = Gpr36Fields::eLPSPI1_STOP_REQ;
    using eLPSPI1_IPG_STOP_MODE = Gpr36Fields::eLPSPI1_IPG_STOP_MODE;
    using eDWP = Gpr36Fields::eDWP;
    using eDWP_LOCK = Gpr36Fields::eDWP_LOCK;
    using GPT1_IPG_DOZE = Gpr36Fields::GPT1_IPG_DOZE;
    using GPT2_IPG_DOZE = Gpr36Fields::GPT2_IPG_DOZE;
    using GPT3_IPG_DOZE = Gpr36Fields::GPT3_IPG_DOZE;
    using GPT4_IPG_DOZE = Gpr36Fields::GPT4_IPG_DOZE;
    using GPT5_IPG_DOZE = Gpr36Fields::GPT5_IPG_DOZE;
    using GPT6_IPG_DOZE = Gpr36Fields::GPT6_IPG_DOZE;
    using LPI2C1_IPG_DOZE = Gpr36Fields::LPI2C1_IPG_DOZE;
    using LPI2C1_STOP_REQ = Gpr36Fields::LPI2C1_STOP_REQ;
    using LPI2C1_IPG_STOP_MODE = Gpr36Fields::LPI2C1_IPG_STOP_MODE;
    using LPI2C2_IPG_DOZE = Gpr36Fields::LPI2C2_IPG_DOZE;
    using LPI2C2_STOP_REQ = Gpr36Fields::LPI2C2_STOP_REQ;
    using LPI2C2_IPG_STOP_MODE = Gpr36Fields::LPI2C2_IPG_STOP_MODE;
    using LPI2C3_IPG_DOZE = Gpr36Fields::LPI2C3_IPG_DOZE;
    using LPI2C3_STOP_REQ = Gpr36Fields::LPI2C3_STOP_REQ;
    using LPI2C3_IPG_STOP_MODE = Gpr36Fields::LPI2C3_IPG_STOP_MODE;
    using LPI2C4_IPG_DOZE = Gpr36Fields::LPI2C4_IPG_DOZE;
    using LPI2C4_STOP_REQ = Gpr36Fields::LPI2C4_STOP_REQ;
    using LPI2C4_IPG_STOP_MODE = Gpr36Fields::LPI2C4_IPG_STOP_MODE;
    using LPI2C5_IPG_DOZE = Gpr36Fields::LPI2C5_IPG_DOZE;
    using LPI2C5_STOP_REQ = Gpr36Fields::LPI2C5_STOP_REQ;
    using LPI2C5_IPG_STOP_MODE = Gpr36Fields::LPI2C5_IPG_STOP_MODE;
    using LPI2C6_IPG_DOZE = Gpr36Fields::LPI2C6_IPG_DOZE;
    using LPI2C6_STOP_REQ = Gpr36Fields::LPI2C6_STOP_REQ;
    using LPI2C6_IPG_STOP_MODE = Gpr36Fields::LPI2C6_IPG_STOP_MODE;
    using LPSPI1_IPG_DOZE = Gpr36Fields::LPSPI1_IPG_DOZE;
    using LPSPI1_STOP_REQ = Gpr36Fields::LPSPI1_STOP_REQ;
    using LPSPI1_IPG_STOP_MODE = Gpr36Fields::LPSPI1_IPG_STOP_MODE;
    using DWP = Gpr36Fields::DWP;
    using DWP_LOCK = Gpr36Fields::DWP_LOCK;
  };

  // GPR37 General Purpose Register
  struct Gpr37Fields {
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
  };  // struct Gpr37Fields

  struct GPR37 : ftl::mmio::Register<
      0x40C0C094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr37Fields::LPSPI2_IPG_DOZE,
      Gpr37Fields::LPSPI2_STOP_REQ,
      Gpr37Fields::LPSPI2_IPG_STOP_MODE,
      Gpr37Fields::LPSPI3_IPG_DOZE,
      Gpr37Fields::LPSPI3_STOP_REQ,
      Gpr37Fields::LPSPI3_IPG_STOP_MODE,
      Gpr37Fields::LPSPI4_IPG_DOZE,
      Gpr37Fields::LPSPI4_STOP_REQ,
      Gpr37Fields::LPSPI4_IPG_STOP_MODE,
      Gpr37Fields::LPSPI5_IPG_DOZE,
      Gpr37Fields::LPSPI5_STOP_REQ,
      Gpr37Fields::LPSPI5_IPG_STOP_MODE,
      Gpr37Fields::LPSPI6_IPG_DOZE,
      Gpr37Fields::LPSPI6_STOP_REQ,
      Gpr37Fields::LPSPI6_IPG_STOP_MODE,
      Gpr37Fields::LPUART1_IPG_DOZE,
      Gpr37Fields::LPUART1_STOP_REQ,
      Gpr37Fields::LPUART1_IPG_STOP_MODE,
      Gpr37Fields::LPUART2_IPG_DOZE,
      Gpr37Fields::LPUART2_STOP_REQ,
      Gpr37Fields::LPUART2_IPG_STOP_MODE,
      Gpr37Fields::LPUART3_IPG_DOZE,
      Gpr37Fields::LPUART3_STOP_REQ,
      Gpr37Fields::LPUART3_IPG_STOP_MODE,
      Gpr37Fields::LPUART4_IPG_DOZE,
      Gpr37Fields::LPUART4_STOP_REQ,
      Gpr37Fields::LPUART4_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr37Fields::DWP,
      Gpr37Fields::DWP_LOCK> {
    using eLPSPI2_IPG_DOZE = Gpr37Fields::eLPSPI2_IPG_DOZE;
    using eLPSPI2_STOP_REQ = Gpr37Fields::eLPSPI2_STOP_REQ;
    using eLPSPI2_IPG_STOP_MODE = Gpr37Fields::eLPSPI2_IPG_STOP_MODE;
    using eLPSPI3_IPG_DOZE = Gpr37Fields::eLPSPI3_IPG_DOZE;
    using eLPSPI3_STOP_REQ = Gpr37Fields::eLPSPI3_STOP_REQ;
    using eLPSPI3_IPG_STOP_MODE = Gpr37Fields::eLPSPI3_IPG_STOP_MODE;
    using eLPSPI4_IPG_DOZE = Gpr37Fields::eLPSPI4_IPG_DOZE;
    using eLPSPI4_STOP_REQ = Gpr37Fields::eLPSPI4_STOP_REQ;
    using eLPSPI4_IPG_STOP_MODE = Gpr37Fields::eLPSPI4_IPG_STOP_MODE;
    using eLPSPI5_IPG_DOZE = Gpr37Fields::eLPSPI5_IPG_DOZE;
    using eLPSPI5_STOP_REQ = Gpr37Fields::eLPSPI5_STOP_REQ;
    using eLPSPI5_IPG_STOP_MODE = Gpr37Fields::eLPSPI5_IPG_STOP_MODE;
    using eLPSPI6_IPG_DOZE = Gpr37Fields::eLPSPI6_IPG_DOZE;
    using eLPSPI6_STOP_REQ = Gpr37Fields::eLPSPI6_STOP_REQ;
    using eLPSPI6_IPG_STOP_MODE = Gpr37Fields::eLPSPI6_IPG_STOP_MODE;
    using eLPUART1_IPG_DOZE = Gpr37Fields::eLPUART1_IPG_DOZE;
    using eLPUART1_STOP_REQ = Gpr37Fields::eLPUART1_STOP_REQ;
    using eLPUART1_IPG_STOP_MODE = Gpr37Fields::eLPUART1_IPG_STOP_MODE;
    using eLPUART2_IPG_DOZE = Gpr37Fields::eLPUART2_IPG_DOZE;
    using eLPUART2_STOP_REQ = Gpr37Fields::eLPUART2_STOP_REQ;
    using eLPUART2_IPG_STOP_MODE = Gpr37Fields::eLPUART2_IPG_STOP_MODE;
    using eLPUART3_IPG_DOZE = Gpr37Fields::eLPUART3_IPG_DOZE;
    using eLPUART3_STOP_REQ = Gpr37Fields::eLPUART3_STOP_REQ;
    using eLPUART3_IPG_STOP_MODE = Gpr37Fields::eLPUART3_IPG_STOP_MODE;
    using eLPUART4_IPG_DOZE = Gpr37Fields::eLPUART4_IPG_DOZE;
    using eLPUART4_STOP_REQ = Gpr37Fields::eLPUART4_STOP_REQ;
    using eLPUART4_IPG_STOP_MODE = Gpr37Fields::eLPUART4_IPG_STOP_MODE;
    using eDWP = Gpr37Fields::eDWP;
    using eDWP_LOCK = Gpr37Fields::eDWP_LOCK;
    using LPSPI2_IPG_DOZE = Gpr37Fields::LPSPI2_IPG_DOZE;
    using LPSPI2_STOP_REQ = Gpr37Fields::LPSPI2_STOP_REQ;
    using LPSPI2_IPG_STOP_MODE = Gpr37Fields::LPSPI2_IPG_STOP_MODE;
    using LPSPI3_IPG_DOZE = Gpr37Fields::LPSPI3_IPG_DOZE;
    using LPSPI3_STOP_REQ = Gpr37Fields::LPSPI3_STOP_REQ;
    using LPSPI3_IPG_STOP_MODE = Gpr37Fields::LPSPI3_IPG_STOP_MODE;
    using LPSPI4_IPG_DOZE = Gpr37Fields::LPSPI4_IPG_DOZE;
    using LPSPI4_STOP_REQ = Gpr37Fields::LPSPI4_STOP_REQ;
    using LPSPI4_IPG_STOP_MODE = Gpr37Fields::LPSPI4_IPG_STOP_MODE;
    using LPSPI5_IPG_DOZE = Gpr37Fields::LPSPI5_IPG_DOZE;
    using LPSPI5_STOP_REQ = Gpr37Fields::LPSPI5_STOP_REQ;
    using LPSPI5_IPG_STOP_MODE = Gpr37Fields::LPSPI5_IPG_STOP_MODE;
    using LPSPI6_IPG_DOZE = Gpr37Fields::LPSPI6_IPG_DOZE;
    using LPSPI6_STOP_REQ = Gpr37Fields::LPSPI6_STOP_REQ;
    using LPSPI6_IPG_STOP_MODE = Gpr37Fields::LPSPI6_IPG_STOP_MODE;
    using LPUART1_IPG_DOZE = Gpr37Fields::LPUART1_IPG_DOZE;
    using LPUART1_STOP_REQ = Gpr37Fields::LPUART1_STOP_REQ;
    using LPUART1_IPG_STOP_MODE = Gpr37Fields::LPUART1_IPG_STOP_MODE;
    using LPUART2_IPG_DOZE = Gpr37Fields::LPUART2_IPG_DOZE;
    using LPUART2_STOP_REQ = Gpr37Fields::LPUART2_STOP_REQ;
    using LPUART2_IPG_STOP_MODE = Gpr37Fields::LPUART2_IPG_STOP_MODE;
    using LPUART3_IPG_DOZE = Gpr37Fields::LPUART3_IPG_DOZE;
    using LPUART3_STOP_REQ = Gpr37Fields::LPUART3_STOP_REQ;
    using LPUART3_IPG_STOP_MODE = Gpr37Fields::LPUART3_IPG_STOP_MODE;
    using LPUART4_IPG_DOZE = Gpr37Fields::LPUART4_IPG_DOZE;
    using LPUART4_STOP_REQ = Gpr37Fields::LPUART4_STOP_REQ;
    using LPUART4_IPG_STOP_MODE = Gpr37Fields::LPUART4_IPG_STOP_MODE;
    using DWP = Gpr37Fields::DWP;
    using DWP_LOCK = Gpr37Fields::DWP_LOCK;
  };

  // GPR38 General Purpose Register
  struct Gpr38Fields {
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
  };  // struct Gpr38Fields

  struct GPR38 : ftl::mmio::Register<
      0x40C0C098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr38Fields::LPUART5_IPG_DOZE,
      Gpr38Fields::LPUART5_STOP_REQ,
      Gpr38Fields::LPUART5_IPG_STOP_MODE,
      Gpr38Fields::LPUART6_IPG_DOZE,
      Gpr38Fields::LPUART6_STOP_REQ,
      Gpr38Fields::LPUART6_IPG_STOP_MODE,
      Gpr38Fields::LPUART7_IPG_DOZE,
      Gpr38Fields::LPUART7_STOP_REQ,
      Gpr38Fields::LPUART7_IPG_STOP_MODE,
      Gpr38Fields::LPUART8_IPG_DOZE,
      Gpr38Fields::LPUART8_STOP_REQ,
      Gpr38Fields::LPUART8_IPG_STOP_MODE,
      Gpr38Fields::LPUART9_IPG_DOZE,
      Gpr38Fields::LPUART9_STOP_REQ,
      Gpr38Fields::LPUART9_IPG_STOP_MODE,
      Gpr38Fields::LPUART10_IPG_DOZE,
      Gpr38Fields::LPUART10_STOP_REQ,
      Gpr38Fields::LPUART10_IPG_STOP_MODE,
      Gpr38Fields::LPUART11_IPG_DOZE,
      Gpr38Fields::LPUART11_STOP_REQ,
      Gpr38Fields::LPUART11_IPG_STOP_MODE,
      Gpr38Fields::LPUART12_IPG_DOZE,
      Gpr38Fields::LPUART12_STOP_REQ,
      Gpr38Fields::LPUART12_IPG_STOP_MODE,
      Gpr38Fields::MIC_IPG_DOZE,
      Gpr38Fields::MIC_STOP_REQ,
      Gpr38Fields::MIC_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr38Fields::DWP,
      Gpr38Fields::DWP_LOCK> {
    using eLPUART5_IPG_DOZE = Gpr38Fields::eLPUART5_IPG_DOZE;
    using eLPUART5_STOP_REQ = Gpr38Fields::eLPUART5_STOP_REQ;
    using eLPUART5_IPG_STOP_MODE = Gpr38Fields::eLPUART5_IPG_STOP_MODE;
    using eLPUART6_IPG_DOZE = Gpr38Fields::eLPUART6_IPG_DOZE;
    using eLPUART6_STOP_REQ = Gpr38Fields::eLPUART6_STOP_REQ;
    using eLPUART6_IPG_STOP_MODE = Gpr38Fields::eLPUART6_IPG_STOP_MODE;
    using eLPUART7_IPG_DOZE = Gpr38Fields::eLPUART7_IPG_DOZE;
    using eLPUART7_STOP_REQ = Gpr38Fields::eLPUART7_STOP_REQ;
    using eLPUART7_IPG_STOP_MODE = Gpr38Fields::eLPUART7_IPG_STOP_MODE;
    using eLPUART8_IPG_DOZE = Gpr38Fields::eLPUART8_IPG_DOZE;
    using eLPUART8_STOP_REQ = Gpr38Fields::eLPUART8_STOP_REQ;
    using eLPUART8_IPG_STOP_MODE = Gpr38Fields::eLPUART8_IPG_STOP_MODE;
    using eLPUART9_IPG_DOZE = Gpr38Fields::eLPUART9_IPG_DOZE;
    using eLPUART9_STOP_REQ = Gpr38Fields::eLPUART9_STOP_REQ;
    using eLPUART9_IPG_STOP_MODE = Gpr38Fields::eLPUART9_IPG_STOP_MODE;
    using eLPUART10_IPG_DOZE = Gpr38Fields::eLPUART10_IPG_DOZE;
    using eLPUART10_STOP_REQ = Gpr38Fields::eLPUART10_STOP_REQ;
    using eLPUART10_IPG_STOP_MODE = Gpr38Fields::eLPUART10_IPG_STOP_MODE;
    using eLPUART11_IPG_DOZE = Gpr38Fields::eLPUART11_IPG_DOZE;
    using eLPUART11_STOP_REQ = Gpr38Fields::eLPUART11_STOP_REQ;
    using eLPUART11_IPG_STOP_MODE = Gpr38Fields::eLPUART11_IPG_STOP_MODE;
    using eLPUART12_IPG_DOZE = Gpr38Fields::eLPUART12_IPG_DOZE;
    using eLPUART12_STOP_REQ = Gpr38Fields::eLPUART12_STOP_REQ;
    using eLPUART12_IPG_STOP_MODE = Gpr38Fields::eLPUART12_IPG_STOP_MODE;
    using eMIC_IPG_DOZE = Gpr38Fields::eMIC_IPG_DOZE;
    using eMIC_STOP_REQ = Gpr38Fields::eMIC_STOP_REQ;
    using eMIC_IPG_STOP_MODE = Gpr38Fields::eMIC_IPG_STOP_MODE;
    using eDWP = Gpr38Fields::eDWP;
    using eDWP_LOCK = Gpr38Fields::eDWP_LOCK;
    using LPUART5_IPG_DOZE = Gpr38Fields::LPUART5_IPG_DOZE;
    using LPUART5_STOP_REQ = Gpr38Fields::LPUART5_STOP_REQ;
    using LPUART5_IPG_STOP_MODE = Gpr38Fields::LPUART5_IPG_STOP_MODE;
    using LPUART6_IPG_DOZE = Gpr38Fields::LPUART6_IPG_DOZE;
    using LPUART6_STOP_REQ = Gpr38Fields::LPUART6_STOP_REQ;
    using LPUART6_IPG_STOP_MODE = Gpr38Fields::LPUART6_IPG_STOP_MODE;
    using LPUART7_IPG_DOZE = Gpr38Fields::LPUART7_IPG_DOZE;
    using LPUART7_STOP_REQ = Gpr38Fields::LPUART7_STOP_REQ;
    using LPUART7_IPG_STOP_MODE = Gpr38Fields::LPUART7_IPG_STOP_MODE;
    using LPUART8_IPG_DOZE = Gpr38Fields::LPUART8_IPG_DOZE;
    using LPUART8_STOP_REQ = Gpr38Fields::LPUART8_STOP_REQ;
    using LPUART8_IPG_STOP_MODE = Gpr38Fields::LPUART8_IPG_STOP_MODE;
    using LPUART9_IPG_DOZE = Gpr38Fields::LPUART9_IPG_DOZE;
    using LPUART9_STOP_REQ = Gpr38Fields::LPUART9_STOP_REQ;
    using LPUART9_IPG_STOP_MODE = Gpr38Fields::LPUART9_IPG_STOP_MODE;
    using LPUART10_IPG_DOZE = Gpr38Fields::LPUART10_IPG_DOZE;
    using LPUART10_STOP_REQ = Gpr38Fields::LPUART10_STOP_REQ;
    using LPUART10_IPG_STOP_MODE = Gpr38Fields::LPUART10_IPG_STOP_MODE;
    using LPUART11_IPG_DOZE = Gpr38Fields::LPUART11_IPG_DOZE;
    using LPUART11_STOP_REQ = Gpr38Fields::LPUART11_STOP_REQ;
    using LPUART11_IPG_STOP_MODE = Gpr38Fields::LPUART11_IPG_STOP_MODE;
    using LPUART12_IPG_DOZE = Gpr38Fields::LPUART12_IPG_DOZE;
    using LPUART12_STOP_REQ = Gpr38Fields::LPUART12_STOP_REQ;
    using LPUART12_IPG_STOP_MODE = Gpr38Fields::LPUART12_IPG_STOP_MODE;
    using MIC_IPG_DOZE = Gpr38Fields::MIC_IPG_DOZE;
    using MIC_STOP_REQ = Gpr38Fields::MIC_STOP_REQ;
    using MIC_IPG_STOP_MODE = Gpr38Fields::MIC_IPG_STOP_MODE;
    using DWP = Gpr38Fields::DWP;
    using DWP_LOCK = Gpr38Fields::DWP_LOCK;
  };

  // GPR39 General Purpose Register
  struct Gpr39Fields {
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
  };  // struct Gpr39Fields

  struct GPR39 : ftl::mmio::Register<
      0x40C0C09Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Gpr39Fields::PIT1_STOP_REQ,
      Gpr39Fields::PIT2_STOP_REQ,
      Gpr39Fields::SEMC_STOP_REQ,
      Gpr39Fields::SIM1_IPG_DOZE,
      Gpr39Fields::SIM2_IPG_DOZE,
      Gpr39Fields::SNVS_HP_IPG_DOZE,
      Gpr39Fields::SNVS_HP_STOP_REQ,
      Gpr39Fields::WDOG1_IPG_DOZE,
      Gpr39Fields::WDOG2_IPG_DOZE,
      Gpr39Fields::SAI1_STOP_REQ,
      Gpr39Fields::SAI2_STOP_REQ,
      Gpr39Fields::SAI3_STOP_REQ,
      Gpr39Fields::SAI4_STOP_REQ,
      Gpr39Fields::FLEXIO1_STOP_REQ_BUS,
      Gpr39Fields::FLEXIO1_STOP_REQ_PER,
      Gpr39Fields::FLEXIO2_STOP_REQ_BUS,
      Gpr39Fields::FLEXIO2_STOP_REQ_PER,
      ftl::mmio::Reserved<10, 18>,
      Gpr39Fields::DWP,
      Gpr39Fields::DWP_LOCK> {
    using ePIT1_STOP_REQ = Gpr39Fields::ePIT1_STOP_REQ;
    using ePIT2_STOP_REQ = Gpr39Fields::ePIT2_STOP_REQ;
    using eSEMC_STOP_REQ = Gpr39Fields::eSEMC_STOP_REQ;
    using eSIM1_IPG_DOZE = Gpr39Fields::eSIM1_IPG_DOZE;
    using eSIM2_IPG_DOZE = Gpr39Fields::eSIM2_IPG_DOZE;
    using eSNVS_HP_IPG_DOZE = Gpr39Fields::eSNVS_HP_IPG_DOZE;
    using eSNVS_HP_STOP_REQ = Gpr39Fields::eSNVS_HP_STOP_REQ;
    using eWDOG1_IPG_DOZE = Gpr39Fields::eWDOG1_IPG_DOZE;
    using eWDOG2_IPG_DOZE = Gpr39Fields::eWDOG2_IPG_DOZE;
    using eSAI1_STOP_REQ = Gpr39Fields::eSAI1_STOP_REQ;
    using eSAI2_STOP_REQ = Gpr39Fields::eSAI2_STOP_REQ;
    using eSAI3_STOP_REQ = Gpr39Fields::eSAI3_STOP_REQ;
    using eSAI4_STOP_REQ = Gpr39Fields::eSAI4_STOP_REQ;
    using eFLEXIO1_STOP_REQ_BUS = Gpr39Fields::eFLEXIO1_STOP_REQ_BUS;
    using eFLEXIO1_STOP_REQ_PER = Gpr39Fields::eFLEXIO1_STOP_REQ_PER;
    using eFLEXIO2_STOP_REQ_BUS = Gpr39Fields::eFLEXIO2_STOP_REQ_BUS;
    using eFLEXIO2_STOP_REQ_PER = Gpr39Fields::eFLEXIO2_STOP_REQ_PER;
    using eDWP = Gpr39Fields::eDWP;
    using eDWP_LOCK = Gpr39Fields::eDWP_LOCK;
    using PIT1_STOP_REQ = Gpr39Fields::PIT1_STOP_REQ;
    using PIT2_STOP_REQ = Gpr39Fields::PIT2_STOP_REQ;
    using SEMC_STOP_REQ = Gpr39Fields::SEMC_STOP_REQ;
    using SIM1_IPG_DOZE = Gpr39Fields::SIM1_IPG_DOZE;
    using SIM2_IPG_DOZE = Gpr39Fields::SIM2_IPG_DOZE;
    using SNVS_HP_IPG_DOZE = Gpr39Fields::SNVS_HP_IPG_DOZE;
    using SNVS_HP_STOP_REQ = Gpr39Fields::SNVS_HP_STOP_REQ;
    using WDOG1_IPG_DOZE = Gpr39Fields::WDOG1_IPG_DOZE;
    using WDOG2_IPG_DOZE = Gpr39Fields::WDOG2_IPG_DOZE;
    using SAI1_STOP_REQ = Gpr39Fields::SAI1_STOP_REQ;
    using SAI2_STOP_REQ = Gpr39Fields::SAI2_STOP_REQ;
    using SAI3_STOP_REQ = Gpr39Fields::SAI3_STOP_REQ;
    using SAI4_STOP_REQ = Gpr39Fields::SAI4_STOP_REQ;
    using FLEXIO1_STOP_REQ_BUS = Gpr39Fields::FLEXIO1_STOP_REQ_BUS;
    using FLEXIO1_STOP_REQ_PER = Gpr39Fields::FLEXIO1_STOP_REQ_PER;
    using FLEXIO2_STOP_REQ_BUS = Gpr39Fields::FLEXIO2_STOP_REQ_BUS;
    using FLEXIO2_STOP_REQ_PER = Gpr39Fields::FLEXIO2_STOP_REQ_PER;
    using DWP = Gpr39Fields::DWP;
    using DWP_LOCK = Gpr39Fields::DWP_LOCK;
  };

  // GPR40 General Purpose Register
  struct Gpr40Fields {
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
  };  // struct Gpr40Fields

  struct GPR40 : ftl::mmio::Register<
      0x40C0C0A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Gpr40Fields::ADC1_STOP_ACK,
      Gpr40Fields::ADC2_STOP_ACK,
      Gpr40Fields::CAAM_STOP_ACK,
      Gpr40Fields::CAN1_STOP_ACK,
      Gpr40Fields::CAN2_STOP_ACK,
      Gpr40Fields::CAN3_STOP_ACK,
      Gpr40Fields::EDMA_STOP_ACK,
      Gpr40Fields::EDMA_LPSR_STOP_ACK,
      Gpr40Fields::ENET_STOP_ACK,
      Gpr40Fields::ENET1G_STOP_ACK,
      Gpr40Fields::FLEXSPI1_STOP_ACK,
      Gpr40Fields::FLEXSPI2_STOP_ACK,
      Gpr40Fields::LPI2C1_STOP_ACK,
      Gpr40Fields::LPI2C2_STOP_ACK,
      Gpr40Fields::LPI2C3_STOP_ACK,
      Gpr40Fields::LPI2C4_STOP_ACK,
      Gpr40Fields::LPI2C5_STOP_ACK,
      Gpr40Fields::LPI2C6_STOP_ACK,
      Gpr40Fields::LPSPI1_STOP_ACK,
      Gpr40Fields::LPSPI2_STOP_ACK,
      Gpr40Fields::LPSPI3_STOP_ACK,
      Gpr40Fields::LPSPI4_STOP_ACK,
      Gpr40Fields::LPSPI5_STOP_ACK,
      Gpr40Fields::LPSPI6_STOP_ACK,
      Gpr40Fields::LPUART1_STOP_ACK,
      Gpr40Fields::LPUART2_STOP_ACK,
      Gpr40Fields::LPUART3_STOP_ACK,
      Gpr40Fields::LPUART4_STOP_ACK,
      Gpr40Fields::LPUART5_STOP_ACK,
      Gpr40Fields::LPUART6_STOP_ACK,
      Gpr40Fields::LPUART7_STOP_ACK,
      Gpr40Fields::LPUART8_STOP_ACK> {
    using ADC1_STOP_ACK = Gpr40Fields::ADC1_STOP_ACK;
    using ADC2_STOP_ACK = Gpr40Fields::ADC2_STOP_ACK;
    using CAAM_STOP_ACK = Gpr40Fields::CAAM_STOP_ACK;
    using CAN1_STOP_ACK = Gpr40Fields::CAN1_STOP_ACK;
    using CAN2_STOP_ACK = Gpr40Fields::CAN2_STOP_ACK;
    using CAN3_STOP_ACK = Gpr40Fields::CAN3_STOP_ACK;
    using EDMA_STOP_ACK = Gpr40Fields::EDMA_STOP_ACK;
    using EDMA_LPSR_STOP_ACK = Gpr40Fields::EDMA_LPSR_STOP_ACK;
    using ENET_STOP_ACK = Gpr40Fields::ENET_STOP_ACK;
    using ENET1G_STOP_ACK = Gpr40Fields::ENET1G_STOP_ACK;
    using FLEXSPI1_STOP_ACK = Gpr40Fields::FLEXSPI1_STOP_ACK;
    using FLEXSPI2_STOP_ACK = Gpr40Fields::FLEXSPI2_STOP_ACK;
    using LPI2C1_STOP_ACK = Gpr40Fields::LPI2C1_STOP_ACK;
    using LPI2C2_STOP_ACK = Gpr40Fields::LPI2C2_STOP_ACK;
    using LPI2C3_STOP_ACK = Gpr40Fields::LPI2C3_STOP_ACK;
    using LPI2C4_STOP_ACK = Gpr40Fields::LPI2C4_STOP_ACK;
    using LPI2C5_STOP_ACK = Gpr40Fields::LPI2C5_STOP_ACK;
    using LPI2C6_STOP_ACK = Gpr40Fields::LPI2C6_STOP_ACK;
    using LPSPI1_STOP_ACK = Gpr40Fields::LPSPI1_STOP_ACK;
    using LPSPI2_STOP_ACK = Gpr40Fields::LPSPI2_STOP_ACK;
    using LPSPI3_STOP_ACK = Gpr40Fields::LPSPI3_STOP_ACK;
    using LPSPI4_STOP_ACK = Gpr40Fields::LPSPI4_STOP_ACK;
    using LPSPI5_STOP_ACK = Gpr40Fields::LPSPI5_STOP_ACK;
    using LPSPI6_STOP_ACK = Gpr40Fields::LPSPI6_STOP_ACK;
    using LPUART1_STOP_ACK = Gpr40Fields::LPUART1_STOP_ACK;
    using LPUART2_STOP_ACK = Gpr40Fields::LPUART2_STOP_ACK;
    using LPUART3_STOP_ACK = Gpr40Fields::LPUART3_STOP_ACK;
    using LPUART4_STOP_ACK = Gpr40Fields::LPUART4_STOP_ACK;
    using LPUART5_STOP_ACK = Gpr40Fields::LPUART5_STOP_ACK;
    using LPUART6_STOP_ACK = Gpr40Fields::LPUART6_STOP_ACK;
    using LPUART7_STOP_ACK = Gpr40Fields::LPUART7_STOP_ACK;
    using LPUART8_STOP_ACK = Gpr40Fields::LPUART8_STOP_ACK;
  };

  // GPR41 General Purpose Register
  struct Gpr41Fields {
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
  };  // struct Gpr41Fields

  struct GPR41 : ftl::mmio::Register<
      0x40C0C0A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Gpr41Fields::LPUART9_STOP_ACK,
      Gpr41Fields::LPUART10_STOP_ACK,
      Gpr41Fields::LPUART11_STOP_ACK,
      Gpr41Fields::LPUART12_STOP_ACK,
      Gpr41Fields::MIC_STOP_ACK,
      Gpr41Fields::PIT1_STOP_ACK,
      Gpr41Fields::PIT2_STOP_ACK,
      Gpr41Fields::SEMC_STOP_ACK,
      Gpr41Fields::SNVS_HP_STOP_ACK,
      Gpr41Fields::SAI1_STOP_ACK,
      Gpr41Fields::SAI2_STOP_ACK,
      Gpr41Fields::SAI3_STOP_ACK,
      Gpr41Fields::SAI4_STOP_ACK,
      Gpr41Fields::FLEXIO1_STOP_ACK_BUS,
      Gpr41Fields::FLEXIO1_STOP_ACK_PER,
      Gpr41Fields::FLEXIO2_STOP_ACK_BUS,
      Gpr41Fields::FLEXIO2_STOP_ACK_PER,
      ftl::mmio::Reserved<7, 17>,
      Gpr41Fields::ROM_READ_LOCKED,
      ftl::mmio::Reserved<7, 25>> {
    using LPUART9_STOP_ACK = Gpr41Fields::LPUART9_STOP_ACK;
    using LPUART10_STOP_ACK = Gpr41Fields::LPUART10_STOP_ACK;
    using LPUART11_STOP_ACK = Gpr41Fields::LPUART11_STOP_ACK;
    using LPUART12_STOP_ACK = Gpr41Fields::LPUART12_STOP_ACK;
    using MIC_STOP_ACK = Gpr41Fields::MIC_STOP_ACK;
    using PIT1_STOP_ACK = Gpr41Fields::PIT1_STOP_ACK;
    using PIT2_STOP_ACK = Gpr41Fields::PIT2_STOP_ACK;
    using SEMC_STOP_ACK = Gpr41Fields::SEMC_STOP_ACK;
    using SNVS_HP_STOP_ACK = Gpr41Fields::SNVS_HP_STOP_ACK;
    using SAI1_STOP_ACK = Gpr41Fields::SAI1_STOP_ACK;
    using SAI2_STOP_ACK = Gpr41Fields::SAI2_STOP_ACK;
    using SAI3_STOP_ACK = Gpr41Fields::SAI3_STOP_ACK;
    using SAI4_STOP_ACK = Gpr41Fields::SAI4_STOP_ACK;
    using FLEXIO1_STOP_ACK_BUS = Gpr41Fields::FLEXIO1_STOP_ACK_BUS;
    using FLEXIO1_STOP_ACK_PER = Gpr41Fields::FLEXIO1_STOP_ACK_PER;
    using FLEXIO2_STOP_ACK_BUS = Gpr41Fields::FLEXIO2_STOP_ACK_BUS;
    using FLEXIO2_STOP_ACK_PER = Gpr41Fields::FLEXIO2_STOP_ACK_PER;
    using ROM_READ_LOCKED = Gpr41Fields::ROM_READ_LOCKED;
  };

};

}  // namespace regs