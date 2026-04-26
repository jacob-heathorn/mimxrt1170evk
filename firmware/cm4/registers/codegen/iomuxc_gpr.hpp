#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcGpr {
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

    // SAI1 MCLK1 source select
    using SAI1_MCLK1_SEL = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI1 MCLK2 source select
    using SAI1_MCLK2_SEL = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI1 MCLK3 source select
    using SAI1_MCLK3_SEL = ftl::mmio::Field<2, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI1_MCLK signal direction control
    using SAI1_MCLK_DIR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR0_fields_

  struct GPR0 : ftl::mmio::Register<
      0x400E4000u,
      std::uint32_t,
      0x00000018u,
      ftl::mmio::RW,
      GPR0_fields_::SAI1_MCLK1_SEL,
      GPR0_fields_::SAI1_MCLK2_SEL,
      GPR0_fields_::SAI1_MCLK3_SEL,
      GPR0_fields_::SAI1_MCLK_DIR,
      ftl::mmio::Reserved<19, 9>,
      GPR0_fields_::DWP,
      GPR0_fields_::DWP_LOCK> {
    using eDWP = GPR0_fields_::eDWP;
    using eDWP_LOCK = GPR0_fields_::eDWP_LOCK;
    using SAI1_MCLK1_SEL = GPR0_fields_::SAI1_MCLK1_SEL;
    using SAI1_MCLK2_SEL = GPR0_fields_::SAI1_MCLK2_SEL;
    using SAI1_MCLK3_SEL = GPR0_fields_::SAI1_MCLK3_SEL;
    using SAI1_MCLK_DIR = GPR0_fields_::SAI1_MCLK_DIR;
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

    // SAI2 MCLK3 source select
    using SAI2_MCLK3_SEL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI2_MCLK signal direction control
    using SAI2_MCLK_DIR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR1_fields_

  struct GPR1 : ftl::mmio::Register<
      0x400E4004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR1_fields_::SAI2_MCLK3_SEL,
      ftl::mmio::Reserved<6, 2>,
      GPR1_fields_::SAI2_MCLK_DIR,
      ftl::mmio::Reserved<19, 9>,
      GPR1_fields_::DWP,
      GPR1_fields_::DWP_LOCK> {
    using eDWP = GPR1_fields_::eDWP;
    using eDWP_LOCK = GPR1_fields_::eDWP_LOCK;
    using SAI2_MCLK3_SEL = GPR1_fields_::SAI2_MCLK3_SEL;
    using SAI2_MCLK_DIR = GPR1_fields_::SAI2_MCLK_DIR;
    using DWP = GPR1_fields_::DWP;
    using DWP_LOCK = GPR1_fields_::DWP_LOCK;
  };

  // GPR2 General Purpose Register
  struct GPR2_fields_ {
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

    // SAI3 MCLK3 source select
    using SAI3_MCLK3_SEL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI3_MCLK signal direction control
    using SAI3_MCLK_DIR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI4_MCLK signal direction control
    using SAI4_MCLK_DIR = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR2_fields_

  struct GPR2 : ftl::mmio::Register<
      0x400E4008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR2_fields_::SAI3_MCLK3_SEL,
      ftl::mmio::Reserved<6, 2>,
      GPR2_fields_::SAI3_MCLK_DIR,
      GPR2_fields_::SAI4_MCLK_DIR,
      ftl::mmio::Reserved<18, 10>,
      GPR2_fields_::DWP,
      GPR2_fields_::DWP_LOCK> {
    using eDWP = GPR2_fields_::eDWP;
    using eDWP_LOCK = GPR2_fields_::eDWP_LOCK;
    using SAI3_MCLK3_SEL = GPR2_fields_::SAI3_MCLK3_SEL;
    using SAI3_MCLK_DIR = GPR2_fields_::SAI3_MCLK_DIR;
    using SAI4_MCLK_DIR = GPR2_fields_::SAI4_MCLK_DIR;
    using DWP = GPR2_fields_::DWP;
    using DWP_LOCK = GPR2_fields_::DWP_LOCK;
  };

  // GPR3 General Purpose Register
  struct GPR3_fields_ {
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

    // Divider ratio control for mclk from hmclk.
    using MQS_CLK_DIV = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // MQS software reset
    using MQS_SW_RST = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // MQS enable
    using MQS_EN = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Medium Quality Sound (MQS) Oversample
    using MQS_OVERSAMPLE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR3_fields_

  struct GPR3 : ftl::mmio::Register<
      0x400E400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR3_fields_::MQS_CLK_DIV,
      GPR3_fields_::MQS_SW_RST,
      GPR3_fields_::MQS_EN,
      GPR3_fields_::MQS_OVERSAMPLE,
      ftl::mmio::Reserved<17, 11>,
      GPR3_fields_::DWP,
      GPR3_fields_::DWP_LOCK> {
    using eDWP = GPR3_fields_::eDWP;
    using eDWP_LOCK = GPR3_fields_::eDWP_LOCK;
    using MQS_CLK_DIV = GPR3_fields_::MQS_CLK_DIV;
    using MQS_SW_RST = GPR3_fields_::MQS_SW_RST;
    using MQS_EN = GPR3_fields_::MQS_EN;
    using MQS_OVERSAMPLE = GPR3_fields_::MQS_OVERSAMPLE;
    using DWP = GPR3_fields_::DWP;
    using DWP_LOCK = GPR3_fields_::DWP_LOCK;
  };

  // GPR4 General Purpose Register
  struct GPR4_fields_ {
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

    // ENET TX_CLK select
    using ENET_TX_CLK_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_REF_CLK direction control
    using ENET_REF_CLK_DIR = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET master timer source select
    using ENET_TIME_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET ENET_1588_EVENT0_IN source select
    using ENET_EVENT0IN_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR4_fields_

  struct GPR4 : ftl::mmio::Register<
      0x400E4010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR4_fields_::ENET_TX_CLK_SEL,
      GPR4_fields_::ENET_REF_CLK_DIR,
      GPR4_fields_::ENET_TIME_SEL,
      GPR4_fields_::ENET_EVENT0IN_SEL,
      ftl::mmio::Reserved<24, 4>,
      GPR4_fields_::DWP,
      GPR4_fields_::DWP_LOCK> {
    using eDWP = GPR4_fields_::eDWP;
    using eDWP_LOCK = GPR4_fields_::eDWP_LOCK;
    using ENET_TX_CLK_SEL = GPR4_fields_::ENET_TX_CLK_SEL;
    using ENET_REF_CLK_DIR = GPR4_fields_::ENET_REF_CLK_DIR;
    using ENET_TIME_SEL = GPR4_fields_::ENET_TIME_SEL;
    using ENET_EVENT0IN_SEL = GPR4_fields_::ENET_EVENT0IN_SEL;
    using DWP = GPR4_fields_::DWP;
    using DWP_LOCK = GPR4_fields_::DWP_LOCK;
  };

  // GPR5 General Purpose Register
  struct GPR5_fields_ {
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

    // ENET1G TX_CLK select
    using ENET1G_TX_CLK_SEL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G_REF_CLK direction control
    using ENET1G_REF_CLK_DIR = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G RGMII TX clock output enable
    using ENET1G_RGMII_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G master timer source select
    using ENET1G_TIME_SEL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G ENET_1588_EVENT0_IN source select
    using ENET1G_EVENT0IN_SEL = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR5_fields_

  struct GPR5 : ftl::mmio::Register<
      0x400E4014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR5_fields_::ENET1G_TX_CLK_SEL,
      GPR5_fields_::ENET1G_REF_CLK_DIR,
      GPR5_fields_::ENET1G_RGMII_EN,
      GPR5_fields_::ENET1G_TIME_SEL,
      GPR5_fields_::ENET1G_EVENT0IN_SEL,
      ftl::mmio::Reserved<23, 5>,
      GPR5_fields_::DWP,
      GPR5_fields_::DWP_LOCK> {
    using eDWP = GPR5_fields_::eDWP;
    using eDWP_LOCK = GPR5_fields_::eDWP_LOCK;
    using ENET1G_TX_CLK_SEL = GPR5_fields_::ENET1G_TX_CLK_SEL;
    using ENET1G_REF_CLK_DIR = GPR5_fields_::ENET1G_REF_CLK_DIR;
    using ENET1G_RGMII_EN = GPR5_fields_::ENET1G_RGMII_EN;
    using ENET1G_TIME_SEL = GPR5_fields_::ENET1G_TIME_SEL;
    using ENET1G_EVENT0IN_SEL = GPR5_fields_::ENET1G_EVENT0IN_SEL;
    using DWP = GPR5_fields_::DWP;
    using DWP_LOCK = GPR5_fields_::DWP_LOCK;
  };

  // GPR6 General Purpose Register
  struct GPR6_fields_ {
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

    // ENET_QOS_REF_CLK direction control
    using ENET_QOS_REF_CLK_DIR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_QOS RGMII TX clock output enable
    using ENET_QOS_RGMII_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_QOS master timer source select
    using ENET_QOS_TIME_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_QOS PHY Interface Select
    using ENET_QOS_INTF_SEL = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_QOS clock generator enable
    using ENET_QOS_CLKGEN_EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET_QOS ENET_1588_EVENT0_IN source select
    using ENET_QOS_EVENT0IN_SEL = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR6_fields_

  struct GPR6 : ftl::mmio::Register<
      0x400E4018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR6_fields_::ENET_QOS_REF_CLK_DIR,
      GPR6_fields_::ENET_QOS_RGMII_EN,
      GPR6_fields_::ENET_QOS_TIME_SEL,
      GPR6_fields_::ENET_QOS_INTF_SEL,
      GPR6_fields_::ENET_QOS_CLKGEN_EN,
      GPR6_fields_::ENET_QOS_EVENT0IN_SEL,
      ftl::mmio::Reserved<20, 8>,
      GPR6_fields_::DWP,
      GPR6_fields_::DWP_LOCK> {
    using eDWP = GPR6_fields_::eDWP;
    using eDWP_LOCK = GPR6_fields_::eDWP_LOCK;
    using ENET_QOS_REF_CLK_DIR = GPR6_fields_::ENET_QOS_REF_CLK_DIR;
    using ENET_QOS_RGMII_EN = GPR6_fields_::ENET_QOS_RGMII_EN;
    using ENET_QOS_TIME_SEL = GPR6_fields_::ENET_QOS_TIME_SEL;
    using ENET_QOS_INTF_SEL = GPR6_fields_::ENET_QOS_INTF_SEL;
    using ENET_QOS_CLKGEN_EN = GPR6_fields_::ENET_QOS_CLKGEN_EN;
    using ENET_QOS_EVENT0IN_SEL = GPR6_fields_::ENET_QOS_EVENT0IN_SEL;
    using DWP = GPR6_fields_::DWP;
    using DWP_LOCK = GPR6_fields_::DWP_LOCK;
  };

  // GPR7 General Purpose Register
  struct GPR7_fields_ {
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

    // Global interrupt
    using GINT = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR7_fields_

  struct GPR7 : ftl::mmio::Register<
      0x400E401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR7_fields_::GINT,
      ftl::mmio::Reserved<27, 1>,
      GPR7_fields_::DWP,
      GPR7_fields_::DWP_LOCK> {
    using eDWP = GPR7_fields_::eDWP;
    using eDWP_LOCK = GPR7_fields_::eDWP_LOCK;
    using GINT = GPR7_fields_::GINT;
    using DWP = GPR7_fields_::DWP;
    using DWP_LOCK = GPR7_fields_::DWP_LOCK;
  };

  // GPR8 General Purpose Register
  struct GPR8_fields_ {
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

    // WDOG1 timeout mask for WDOG_ANY
    using WDOG1_MASK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR8_fields_

  struct GPR8 : ftl::mmio::Register<
      0x400E4020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR8_fields_::WDOG1_MASK,
      ftl::mmio::Reserved<27, 1>,
      GPR8_fields_::DWP,
      GPR8_fields_::DWP_LOCK> {
    using eDWP = GPR8_fields_::eDWP;
    using eDWP_LOCK = GPR8_fields_::eDWP_LOCK;
    using WDOG1_MASK = GPR8_fields_::WDOG1_MASK;
    using DWP = GPR8_fields_::DWP;
    using DWP_LOCK = GPR8_fields_::DWP_LOCK;
  };

  // GPR9 General Purpose Register
  struct GPR9_fields_ {
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

    // WDOG2 timeout mask for WDOG_ANY
    using WDOG2_MASK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR9_fields_

  struct GPR9 : ftl::mmio::Register<
      0x400E4024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR9_fields_::WDOG2_MASK,
      ftl::mmio::Reserved<27, 1>,
      GPR9_fields_::DWP,
      GPR9_fields_::DWP_LOCK> {
    using eDWP = GPR9_fields_::eDWP;
    using eDWP_LOCK = GPR9_fields_::eDWP_LOCK;
    using WDOG2_MASK = GPR9_fields_::WDOG2_MASK;
    using DWP = GPR9_fields_::DWP;
    using DWP_LOCK = GPR9_fields_::DWP_LOCK;
  };

  // GPR10 General Purpose Register
  struct GPR10_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR10_fields_

  struct GPR10 : ftl::mmio::Register<
      0x400E4028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR10_fields_::DWP,
      GPR10_fields_::DWP_LOCK> {
    using eDWP = GPR10_fields_::eDWP;
    using eDWP_LOCK = GPR10_fields_::eDWP_LOCK;
    using DWP = GPR10_fields_::DWP;
    using DWP_LOCK = GPR10_fields_::DWP_LOCK;
  };

  // GPR11 General Purpose Register
  struct GPR11_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR11_fields_

  struct GPR11 : ftl::mmio::Register<
      0x400E402Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR11_fields_::DWP,
      GPR11_fields_::DWP_LOCK> {
    using eDWP = GPR11_fields_::eDWP;
    using eDWP_LOCK = GPR11_fields_::eDWP_LOCK;
    using DWP = GPR11_fields_::DWP;
    using DWP_LOCK = GPR11_fields_::DWP_LOCK;
  };

  // GPR12 General Purpose Register
  struct GPR12_fields_ {
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

    // QTIMER1 timer counter freeze
    using QTIMER1_TMR_CNTS_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER1 TMR0 input select
    using QTIMER1_TRM0_INPUT_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER1 TMR1 input select
    using QTIMER1_TRM1_INPUT_SEL = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER1 TMR2 input select
    using QTIMER1_TRM2_INPUT_SEL = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER1 TMR3 input select
    using QTIMER1_TRM3_INPUT_SEL = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR12_fields_

  struct GPR12 : ftl::mmio::Register<
      0x400E4030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR12_fields_::QTIMER1_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      GPR12_fields_::QTIMER1_TRM0_INPUT_SEL,
      GPR12_fields_::QTIMER1_TRM1_INPUT_SEL,
      GPR12_fields_::QTIMER1_TRM2_INPUT_SEL,
      GPR12_fields_::QTIMER1_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      GPR12_fields_::DWP,
      GPR12_fields_::DWP_LOCK> {
    using eDWP = GPR12_fields_::eDWP;
    using eDWP_LOCK = GPR12_fields_::eDWP_LOCK;
    using QTIMER1_TMR_CNTS_FREEZE = GPR12_fields_::QTIMER1_TMR_CNTS_FREEZE;
    using QTIMER1_TRM0_INPUT_SEL = GPR12_fields_::QTIMER1_TRM0_INPUT_SEL;
    using QTIMER1_TRM1_INPUT_SEL = GPR12_fields_::QTIMER1_TRM1_INPUT_SEL;
    using QTIMER1_TRM2_INPUT_SEL = GPR12_fields_::QTIMER1_TRM2_INPUT_SEL;
    using QTIMER1_TRM3_INPUT_SEL = GPR12_fields_::QTIMER1_TRM3_INPUT_SEL;
    using DWP = GPR12_fields_::DWP;
    using DWP_LOCK = GPR12_fields_::DWP_LOCK;
  };

  // GPR13 General Purpose Register
  struct GPR13_fields_ {
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

    // QTIMER2 timer counter freeze
    using QTIMER2_TMR_CNTS_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER2 TMR0 input select
    using QTIMER2_TRM0_INPUT_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER2 TMR1 input select
    using QTIMER2_TRM1_INPUT_SEL = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER2 TMR2 input select
    using QTIMER2_TRM2_INPUT_SEL = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER2 TMR3 input select
    using QTIMER2_TRM3_INPUT_SEL = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR13_fields_

  struct GPR13 : ftl::mmio::Register<
      0x400E4034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR13_fields_::QTIMER2_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      GPR13_fields_::QTIMER2_TRM0_INPUT_SEL,
      GPR13_fields_::QTIMER2_TRM1_INPUT_SEL,
      GPR13_fields_::QTIMER2_TRM2_INPUT_SEL,
      GPR13_fields_::QTIMER2_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      GPR13_fields_::DWP,
      GPR13_fields_::DWP_LOCK> {
    using eDWP = GPR13_fields_::eDWP;
    using eDWP_LOCK = GPR13_fields_::eDWP_LOCK;
    using QTIMER2_TMR_CNTS_FREEZE = GPR13_fields_::QTIMER2_TMR_CNTS_FREEZE;
    using QTIMER2_TRM0_INPUT_SEL = GPR13_fields_::QTIMER2_TRM0_INPUT_SEL;
    using QTIMER2_TRM1_INPUT_SEL = GPR13_fields_::QTIMER2_TRM1_INPUT_SEL;
    using QTIMER2_TRM2_INPUT_SEL = GPR13_fields_::QTIMER2_TRM2_INPUT_SEL;
    using QTIMER2_TRM3_INPUT_SEL = GPR13_fields_::QTIMER2_TRM3_INPUT_SEL;
    using DWP = GPR13_fields_::DWP;
    using DWP_LOCK = GPR13_fields_::DWP_LOCK;
  };

  // GPR14 General Purpose Register
  struct GPR14_fields_ {
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

    // QTIMER3 timer counter freeze
    using QTIMER3_TMR_CNTS_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER3 TMR0 input select
    using QTIMER3_TRM0_INPUT_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER3 TMR1 input select
    using QTIMER3_TRM1_INPUT_SEL = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER3 TMR2 input select
    using QTIMER3_TRM2_INPUT_SEL = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER3 TMR3 input select
    using QTIMER3_TRM3_INPUT_SEL = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR14_fields_

  struct GPR14 : ftl::mmio::Register<
      0x400E4038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR14_fields_::QTIMER3_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      GPR14_fields_::QTIMER3_TRM0_INPUT_SEL,
      GPR14_fields_::QTIMER3_TRM1_INPUT_SEL,
      GPR14_fields_::QTIMER3_TRM2_INPUT_SEL,
      GPR14_fields_::QTIMER3_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      GPR14_fields_::DWP,
      GPR14_fields_::DWP_LOCK> {
    using eDWP = GPR14_fields_::eDWP;
    using eDWP_LOCK = GPR14_fields_::eDWP_LOCK;
    using QTIMER3_TMR_CNTS_FREEZE = GPR14_fields_::QTIMER3_TMR_CNTS_FREEZE;
    using QTIMER3_TRM0_INPUT_SEL = GPR14_fields_::QTIMER3_TRM0_INPUT_SEL;
    using QTIMER3_TRM1_INPUT_SEL = GPR14_fields_::QTIMER3_TRM1_INPUT_SEL;
    using QTIMER3_TRM2_INPUT_SEL = GPR14_fields_::QTIMER3_TRM2_INPUT_SEL;
    using QTIMER3_TRM3_INPUT_SEL = GPR14_fields_::QTIMER3_TRM3_INPUT_SEL;
    using DWP = GPR14_fields_::DWP;
    using DWP_LOCK = GPR14_fields_::DWP_LOCK;
  };

  // GPR15 General Purpose Register
  struct GPR15_fields_ {
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

    // QTIMER4 timer counter freeze
    using QTIMER4_TMR_CNTS_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER4 TMR0 input select
    using QTIMER4_TRM0_INPUT_SEL = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER4 TMR1 input select
    using QTIMER4_TRM1_INPUT_SEL = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER4 TMR2 input select
    using QTIMER4_TRM2_INPUT_SEL = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // QTIMER4 TMR3 input select
    using QTIMER4_TRM3_INPUT_SEL = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR15_fields_

  struct GPR15 : ftl::mmio::Register<
      0x400E403Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR15_fields_::QTIMER4_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      GPR15_fields_::QTIMER4_TRM0_INPUT_SEL,
      GPR15_fields_::QTIMER4_TRM1_INPUT_SEL,
      GPR15_fields_::QTIMER4_TRM2_INPUT_SEL,
      GPR15_fields_::QTIMER4_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      GPR15_fields_::DWP,
      GPR15_fields_::DWP_LOCK> {
    using eDWP = GPR15_fields_::eDWP;
    using eDWP_LOCK = GPR15_fields_::eDWP_LOCK;
    using QTIMER4_TMR_CNTS_FREEZE = GPR15_fields_::QTIMER4_TMR_CNTS_FREEZE;
    using QTIMER4_TRM0_INPUT_SEL = GPR15_fields_::QTIMER4_TRM0_INPUT_SEL;
    using QTIMER4_TRM1_INPUT_SEL = GPR15_fields_::QTIMER4_TRM1_INPUT_SEL;
    using QTIMER4_TRM2_INPUT_SEL = GPR15_fields_::QTIMER4_TRM2_INPUT_SEL;
    using QTIMER4_TRM3_INPUT_SEL = GPR15_fields_::QTIMER4_TRM3_INPUT_SEL;
    using DWP = GPR15_fields_::DWP;
    using DWP_LOCK = GPR15_fields_::DWP_LOCK;
  };

  // GPR16 General Purpose Register
  struct GPR16_fields_ {
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

    // FlexRAM bank config source select
    using FLEXRAM_BANK_CFG_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CM7 platform AHB clock enable
    using CM7_FORCE_HCLK_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CM7 sleep request selection
    using M7_GPC_SLEEP_SEL = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR16_fields_

  struct GPR16 : ftl::mmio::Register<
      0x400E4040u,
      std::uint32_t,
      0x0000AA03u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      GPR16_fields_::FLEXRAM_BANK_CFG_SEL,
      GPR16_fields_::CM7_FORCE_HCLK_EN,
      ftl::mmio::Reserved<1, 4>,
      GPR16_fields_::M7_GPC_SLEEP_SEL,
      ftl::mmio::Reserved<22, 6>,
      GPR16_fields_::DWP,
      GPR16_fields_::DWP_LOCK> {
    using eDWP = GPR16_fields_::eDWP;
    using eDWP_LOCK = GPR16_fields_::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_SEL = GPR16_fields_::FLEXRAM_BANK_CFG_SEL;
    using CM7_FORCE_HCLK_EN = GPR16_fields_::CM7_FORCE_HCLK_EN;
    using M7_GPC_SLEEP_SEL = GPR16_fields_::M7_GPC_SLEEP_SEL;
    using DWP = GPR16_fields_::DWP;
    using DWP_LOCK = GPR16_fields_::DWP_LOCK;
  };

  // GPR17 General Purpose Register
  struct GPR17_fields_ {
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

    // FlexRAM bank config value
    using FLEXRAM_BANK_CFG_LOW = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR17_fields_

  struct GPR17 : ftl::mmio::Register<
      0x400E4044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR17_fields_::FLEXRAM_BANK_CFG_LOW,
      ftl::mmio::Reserved<12, 16>,
      GPR17_fields_::DWP,
      GPR17_fields_::DWP_LOCK> {
    using eDWP = GPR17_fields_::eDWP;
    using eDWP_LOCK = GPR17_fields_::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_LOW = GPR17_fields_::FLEXRAM_BANK_CFG_LOW;
    using DWP = GPR17_fields_::DWP;
    using DWP_LOCK = GPR17_fields_::DWP_LOCK;
  };

  // GPR18 General Purpose Register
  struct GPR18_fields_ {
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

    // FlexRAM bank config value
    using FLEXRAM_BANK_CFG_HIGH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR18_fields_

  struct GPR18 : ftl::mmio::Register<
      0x400E4048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR18_fields_::FLEXRAM_BANK_CFG_HIGH,
      ftl::mmio::Reserved<12, 16>,
      GPR18_fields_::DWP,
      GPR18_fields_::DWP_LOCK> {
    using eDWP = GPR18_fields_::eDWP;
    using eDWP_LOCK = GPR18_fields_::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_HIGH = GPR18_fields_::FLEXRAM_BANK_CFG_HIGH;
    using DWP = GPR18_fields_::DWP;
    using DWP_LOCK = GPR18_fields_::DWP_LOCK;
  };

  // GPR20 General Purpose Register
  struct GPR20_fields_ {
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

    // IOMUXC XBAR_INOUT4 function direction select
    using IOMUXC_XBAR_DIR_SEL_4 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT5 function direction select
    using IOMUXC_XBAR_DIR_SEL_5 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT6 function direction select
    using IOMUXC_XBAR_DIR_SEL_6 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT7 function direction select
    using IOMUXC_XBAR_DIR_SEL_7 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT8 function direction select
    using IOMUXC_XBAR_DIR_SEL_8 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT9 function direction select
    using IOMUXC_XBAR_DIR_SEL_9 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT10 function direction select
    using IOMUXC_XBAR_DIR_SEL_10 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT11 function direction select
    using IOMUXC_XBAR_DIR_SEL_11 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT12 function direction select
    using IOMUXC_XBAR_DIR_SEL_12 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT13 function direction select
    using IOMUXC_XBAR_DIR_SEL_13 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT14 function direction select
    using IOMUXC_XBAR_DIR_SEL_14 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT15 function direction select
    using IOMUXC_XBAR_DIR_SEL_15 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT16 function direction select
    using IOMUXC_XBAR_DIR_SEL_16 = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT17 function direction select
    using IOMUXC_XBAR_DIR_SEL_17 = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT18 function direction select
    using IOMUXC_XBAR_DIR_SEL_18 = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT19 function direction select
    using IOMUXC_XBAR_DIR_SEL_19 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT20 function direction select
    using IOMUXC_XBAR_DIR_SEL_20 = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT21 function direction select
    using IOMUXC_XBAR_DIR_SEL_21 = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT22 function direction select
    using IOMUXC_XBAR_DIR_SEL_22 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT23 function direction select
    using IOMUXC_XBAR_DIR_SEL_23 = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT24 function direction select
    using IOMUXC_XBAR_DIR_SEL_24 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT25 function direction select
    using IOMUXC_XBAR_DIR_SEL_25 = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT26 function direction select
    using IOMUXC_XBAR_DIR_SEL_26 = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT27 function direction select
    using IOMUXC_XBAR_DIR_SEL_27 = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT28 function direction select
    using IOMUXC_XBAR_DIR_SEL_28 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT29 function direction select
    using IOMUXC_XBAR_DIR_SEL_29 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT30 function direction select
    using IOMUXC_XBAR_DIR_SEL_30 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT31 function direction select
    using IOMUXC_XBAR_DIR_SEL_31 = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR20_fields_

  struct GPR20 : ftl::mmio::Register<
      0x400E4050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_4,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_5,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_6,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_7,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_8,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_9,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_10,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_11,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_12,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_13,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_14,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_15,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_16,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_17,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_18,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_19,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_20,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_21,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_22,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_23,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_24,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_25,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_26,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_27,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_28,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_29,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_30,
      GPR20_fields_::IOMUXC_XBAR_DIR_SEL_31,
      GPR20_fields_::DWP,
      GPR20_fields_::DWP_LOCK> {
    using eDWP = GPR20_fields_::eDWP;
    using eDWP_LOCK = GPR20_fields_::eDWP_LOCK;
    using IOMUXC_XBAR_DIR_SEL_4 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_4;
    using IOMUXC_XBAR_DIR_SEL_5 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_5;
    using IOMUXC_XBAR_DIR_SEL_6 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_6;
    using IOMUXC_XBAR_DIR_SEL_7 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_7;
    using IOMUXC_XBAR_DIR_SEL_8 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_8;
    using IOMUXC_XBAR_DIR_SEL_9 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_9;
    using IOMUXC_XBAR_DIR_SEL_10 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_10;
    using IOMUXC_XBAR_DIR_SEL_11 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_11;
    using IOMUXC_XBAR_DIR_SEL_12 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_12;
    using IOMUXC_XBAR_DIR_SEL_13 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_13;
    using IOMUXC_XBAR_DIR_SEL_14 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_14;
    using IOMUXC_XBAR_DIR_SEL_15 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_15;
    using IOMUXC_XBAR_DIR_SEL_16 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_16;
    using IOMUXC_XBAR_DIR_SEL_17 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_17;
    using IOMUXC_XBAR_DIR_SEL_18 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_18;
    using IOMUXC_XBAR_DIR_SEL_19 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_19;
    using IOMUXC_XBAR_DIR_SEL_20 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_20;
    using IOMUXC_XBAR_DIR_SEL_21 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_21;
    using IOMUXC_XBAR_DIR_SEL_22 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_22;
    using IOMUXC_XBAR_DIR_SEL_23 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_23;
    using IOMUXC_XBAR_DIR_SEL_24 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_24;
    using IOMUXC_XBAR_DIR_SEL_25 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_25;
    using IOMUXC_XBAR_DIR_SEL_26 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_26;
    using IOMUXC_XBAR_DIR_SEL_27 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_27;
    using IOMUXC_XBAR_DIR_SEL_28 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_28;
    using IOMUXC_XBAR_DIR_SEL_29 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_29;
    using IOMUXC_XBAR_DIR_SEL_30 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_30;
    using IOMUXC_XBAR_DIR_SEL_31 = GPR20_fields_::IOMUXC_XBAR_DIR_SEL_31;
    using DWP = GPR20_fields_::DWP;
    using DWP_LOCK = GPR20_fields_::DWP_LOCK;
  };

  // GPR21 General Purpose Register
  struct GPR21_fields_ {
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

    // IOMUXC XBAR_INOUT32 function direction select
    using IOMUXC_XBAR_DIR_SEL_32 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT33 function direction select
    using IOMUXC_XBAR_DIR_SEL_33 = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT34 function direction select
    using IOMUXC_XBAR_DIR_SEL_34 = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT35 function direction select
    using IOMUXC_XBAR_DIR_SEL_35 = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT36 function direction select
    using IOMUXC_XBAR_DIR_SEL_36 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT37 function direction select
    using IOMUXC_XBAR_DIR_SEL_37 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT38 function direction select
    using IOMUXC_XBAR_DIR_SEL_38 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT39 function direction select
    using IOMUXC_XBAR_DIR_SEL_39 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT40 function direction select
    using IOMUXC_XBAR_DIR_SEL_40 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT41 function direction select
    using IOMUXC_XBAR_DIR_SEL_41 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // IOMUXC XBAR_INOUT42 function direction select
    using IOMUXC_XBAR_DIR_SEL_42 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR21_fields_

  struct GPR21 : ftl::mmio::Register<
      0x400E4054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_32,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_33,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_34,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_35,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_36,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_37,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_38,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_39,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_40,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_41,
      GPR21_fields_::IOMUXC_XBAR_DIR_SEL_42,
      ftl::mmio::Reserved<17, 11>,
      GPR21_fields_::DWP,
      GPR21_fields_::DWP_LOCK> {
    using eDWP = GPR21_fields_::eDWP;
    using eDWP_LOCK = GPR21_fields_::eDWP_LOCK;
    using IOMUXC_XBAR_DIR_SEL_32 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_32;
    using IOMUXC_XBAR_DIR_SEL_33 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_33;
    using IOMUXC_XBAR_DIR_SEL_34 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_34;
    using IOMUXC_XBAR_DIR_SEL_35 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_35;
    using IOMUXC_XBAR_DIR_SEL_36 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_36;
    using IOMUXC_XBAR_DIR_SEL_37 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_37;
    using IOMUXC_XBAR_DIR_SEL_38 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_38;
    using IOMUXC_XBAR_DIR_SEL_39 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_39;
    using IOMUXC_XBAR_DIR_SEL_40 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_40;
    using IOMUXC_XBAR_DIR_SEL_41 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_41;
    using IOMUXC_XBAR_DIR_SEL_42 = GPR21_fields_::IOMUXC_XBAR_DIR_SEL_42;
    using DWP = GPR21_fields_::DWP;
    using DWP_LOCK = GPR21_fields_::DWP_LOCK;
  };

  // GPR22 General Purpose Register
  struct GPR22_fields_ {
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

    // GPT1 1 MHz clock source select
    using REF_1M_CLK_GPT1 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR22_fields_

  struct GPR22 : ftl::mmio::Register<
      0x400E4058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR22_fields_::REF_1M_CLK_GPT1,
      ftl::mmio::Reserved<27, 1>,
      GPR22_fields_::DWP,
      GPR22_fields_::DWP_LOCK> {
    using eDWP = GPR22_fields_::eDWP;
    using eDWP_LOCK = GPR22_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT1 = GPR22_fields_::REF_1M_CLK_GPT1;
    using DWP = GPR22_fields_::DWP;
    using DWP_LOCK = GPR22_fields_::DWP_LOCK;
  };

  // GPR23 General Purpose Register
  struct GPR23_fields_ {
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

    // GPT2 1 MHz clock source select
    using REF_1M_CLK_GPT2 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT2 input capture channel 1 source select
    using GPT2_CAPIN1_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT2 input capture channel 2 source select
    using GPT2_CAPIN2_SEL = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR23_fields_

  struct GPR23 : ftl::mmio::Register<
      0x400E405Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR23_fields_::REF_1M_CLK_GPT2,
      GPR23_fields_::GPT2_CAPIN1_SEL,
      GPR23_fields_::GPT2_CAPIN2_SEL,
      ftl::mmio::Reserved<25, 3>,
      GPR23_fields_::DWP,
      GPR23_fields_::DWP_LOCK> {
    using eDWP = GPR23_fields_::eDWP;
    using eDWP_LOCK = GPR23_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT2 = GPR23_fields_::REF_1M_CLK_GPT2;
    using GPT2_CAPIN1_SEL = GPR23_fields_::GPT2_CAPIN1_SEL;
    using GPT2_CAPIN2_SEL = GPR23_fields_::GPT2_CAPIN2_SEL;
    using DWP = GPR23_fields_::DWP;
    using DWP_LOCK = GPR23_fields_::DWP_LOCK;
  };

  // GPR24 General Purpose Register
  struct GPR24_fields_ {
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

    // GPT3 1 MHz clock source select
    using REF_1M_CLK_GPT3 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT3 input capture channel 1 source select
    using GPT3_CAPIN1_SEL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR24_fields_

  struct GPR24 : ftl::mmio::Register<
      0x400E4060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR24_fields_::REF_1M_CLK_GPT3,
      GPR24_fields_::GPT3_CAPIN1_SEL,
      ftl::mmio::Reserved<26, 2>,
      GPR24_fields_::DWP,
      GPR24_fields_::DWP_LOCK> {
    using eDWP = GPR24_fields_::eDWP;
    using eDWP_LOCK = GPR24_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT3 = GPR24_fields_::REF_1M_CLK_GPT3;
    using GPT3_CAPIN1_SEL = GPR24_fields_::GPT3_CAPIN1_SEL;
    using DWP = GPR24_fields_::DWP;
    using DWP_LOCK = GPR24_fields_::DWP_LOCK;
  };

  // GPR25 General Purpose Register
  struct GPR25_fields_ {
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

    // GPT4 1 MHz clock source select
    using REF_1M_CLK_GPT4 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR25_fields_

  struct GPR25 : ftl::mmio::Register<
      0x400E4064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR25_fields_::REF_1M_CLK_GPT4,
      ftl::mmio::Reserved<27, 1>,
      GPR25_fields_::DWP,
      GPR25_fields_::DWP_LOCK> {
    using eDWP = GPR25_fields_::eDWP;
    using eDWP_LOCK = GPR25_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT4 = GPR25_fields_::REF_1M_CLK_GPT4;
    using DWP = GPR25_fields_::DWP;
    using DWP_LOCK = GPR25_fields_::DWP_LOCK;
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

    // GPT5 1 MHz clock source select
    using REF_1M_CLK_GPT5 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR26_fields_

  struct GPR26 : ftl::mmio::Register<
      0x400E4068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR26_fields_::REF_1M_CLK_GPT5,
      ftl::mmio::Reserved<27, 1>,
      GPR26_fields_::DWP,
      GPR26_fields_::DWP_LOCK> {
    using eDWP = GPR26_fields_::eDWP;
    using eDWP_LOCK = GPR26_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT5 = GPR26_fields_::REF_1M_CLK_GPT5;
    using DWP = GPR26_fields_::DWP;
    using DWP_LOCK = GPR26_fields_::DWP_LOCK;
  };

  // GPR27 General Purpose Register
  struct GPR27_fields_ {
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

    // GPT6 1 MHz clock source select
    using REF_1M_CLK_GPT6 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR27_fields_

  struct GPR27 : ftl::mmio::Register<
      0x400E406Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR27_fields_::REF_1M_CLK_GPT6,
      ftl::mmio::Reserved<27, 1>,
      GPR27_fields_::DWP,
      GPR27_fields_::DWP_LOCK> {
    using eDWP = GPR27_fields_::eDWP;
    using eDWP_LOCK = GPR27_fields_::eDWP_LOCK;
    using REF_1M_CLK_GPT6 = GPR27_fields_::REF_1M_CLK_GPT6;
    using DWP = GPR27_fields_::DWP;
    using DWP_LOCK = GPR27_fields_::DWP_LOCK;
  };

  // GPR28 General Purpose Register
  struct GPR28_fields_ {
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

    // uSDHC block cacheable attribute value of AXI read transactions
    using ARCACHE_USDHC = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // uSDHC block cacheable attribute value of AXI write transactions
    using AWCACHE_USDHC = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // no description available
    using CACHE_ENET1G = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET block cacheable attribute value of AXI transactions
    using CACHE_ENET = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // USB block cacheable attribute value of AXI transactions
    using CACHE_USB = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR28_fields_

  struct GPR28 : ftl::mmio::Register<
      0x400E4070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR28_fields_::ARCACHE_USDHC,
      GPR28_fields_::AWCACHE_USDHC,
      ftl::mmio::Reserved<3, 2>,
      GPR28_fields_::CACHE_ENET1G,
      ftl::mmio::Reserved<1, 6>,
      GPR28_fields_::CACHE_ENET,
      ftl::mmio::Reserved<5, 8>,
      GPR28_fields_::CACHE_USB,
      ftl::mmio::Reserved<14, 14>,
      GPR28_fields_::DWP,
      GPR28_fields_::DWP_LOCK> {
    using eDWP = GPR28_fields_::eDWP;
    using eDWP_LOCK = GPR28_fields_::eDWP_LOCK;
    using ARCACHE_USDHC = GPR28_fields_::ARCACHE_USDHC;
    using AWCACHE_USDHC = GPR28_fields_::AWCACHE_USDHC;
    using CACHE_ENET1G = GPR28_fields_::CACHE_ENET1G;
    using CACHE_ENET = GPR28_fields_::CACHE_ENET;
    using CACHE_USB = GPR28_fields_::CACHE_USB;
    using DWP = GPR28_fields_::DWP;
    using DWP_LOCK = GPR28_fields_::DWP_LOCK;
  };

  // GPR29 General Purpose Register
  struct GPR29_fields_ {
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

    // USBPHY1 register access clock enable
    using USBPHY1_IPG_CLK_ACTIVE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR29_fields_

  struct GPR29 : ftl::mmio::Register<
      0x400E4074u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      GPR29_fields_::USBPHY1_IPG_CLK_ACTIVE,
      ftl::mmio::Reserved<27, 1>,
      GPR29_fields_::DWP,
      GPR29_fields_::DWP_LOCK> {
    using eDWP = GPR29_fields_::eDWP;
    using eDWP_LOCK = GPR29_fields_::eDWP_LOCK;
    using USBPHY1_IPG_CLK_ACTIVE = GPR29_fields_::USBPHY1_IPG_CLK_ACTIVE;
    using DWP = GPR29_fields_::DWP;
    using DWP_LOCK = GPR29_fields_::DWP_LOCK;
  };

  // GPR30 General Purpose Register
  struct GPR30_fields_ {
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

    // USBPHY2 register access clock enable
    using USBPHY2_IPG_CLK_ACTIVE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR30_fields_

  struct GPR30 : ftl::mmio::Register<
      0x400E4078u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      GPR30_fields_::USBPHY2_IPG_CLK_ACTIVE,
      ftl::mmio::Reserved<27, 1>,
      GPR30_fields_::DWP,
      GPR30_fields_::DWP_LOCK> {
    using eDWP = GPR30_fields_::eDWP;
    using eDWP_LOCK = GPR30_fields_::eDWP_LOCK;
    using USBPHY2_IPG_CLK_ACTIVE = GPR30_fields_::USBPHY2_IPG_CLK_ACTIVE;
    using DWP = GPR30_fields_::DWP;
    using DWP_LOCK = GPR30_fields_::DWP_LOCK;
  };

  // GPR31 General Purpose Register
  struct GPR31_fields_ {
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

    // OCRAM M7 RMW wait enable
    using RMW2_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM M7 clock gating enable
    using OCRAM_M7_CLK_GATING = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR31_fields_

  struct GPR31 : ftl::mmio::Register<
      0x400E407Cu,
      std::uint32_t,
      0x00000012u,
      ftl::mmio::RW,
      GPR31_fields_::RMW2_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<1, 1>,
      GPR31_fields_::OCRAM_M7_CLK_GATING,
      ftl::mmio::Reserved<25, 3>,
      GPR31_fields_::DWP,
      GPR31_fields_::DWP_LOCK> {
    using eDWP = GPR31_fields_::eDWP;
    using eDWP_LOCK = GPR31_fields_::eDWP_LOCK;
    using RMW2_WAIT_BVALID_CPL = GPR31_fields_::RMW2_WAIT_BVALID_CPL;
    using OCRAM_M7_CLK_GATING = GPR31_fields_::OCRAM_M7_CLK_GATING;
    using DWP = GPR31_fields_::DWP;
    using DWP_LOCK = GPR31_fields_::DWP_LOCK;
  };

  // GPR32 General Purpose Register
  struct GPR32_fields_ {
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

    // OCRAM1 RMW wait enable
    using RMW1_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR32_fields_

  struct GPR32 : ftl::mmio::Register<
      0x400E4080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR32_fields_::RMW1_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      GPR32_fields_::DWP,
      GPR32_fields_::DWP_LOCK> {
    using eDWP = GPR32_fields_::eDWP;
    using eDWP_LOCK = GPR32_fields_::eDWP_LOCK;
    using RMW1_WAIT_BVALID_CPL = GPR32_fields_::RMW1_WAIT_BVALID_CPL;
    using DWP = GPR32_fields_::DWP;
    using DWP_LOCK = GPR32_fields_::DWP_LOCK;
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

    // OCRAM2 RMW wait enable
    using RMW2_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR33_fields_

  struct GPR33 : ftl::mmio::Register<
      0x400E4084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR33_fields_::RMW2_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      GPR33_fields_::DWP,
      GPR33_fields_::DWP_LOCK> {
    using eDWP = GPR33_fields_::eDWP;
    using eDWP_LOCK = GPR33_fields_::eDWP_LOCK;
    using RMW2_WAIT_BVALID_CPL = GPR33_fields_::RMW2_WAIT_BVALID_CPL;
    using DWP = GPR33_fields_::DWP;
    using DWP_LOCK = GPR33_fields_::DWP_LOCK;
  };

  // GPR34 General Purpose Register
  struct GPR34_fields_ {
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

    // XECC_FLEXSPI1 RMW wait enable
    using XECC_FLEXSPI1_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FlexSPI1 OTFAD enable
    using FLEXSPI1_OTFAD_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR34_fields_

  struct GPR34 : ftl::mmio::Register<
      0x400E4088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR34_fields_::XECC_FLEXSPI1_WAIT_BVALID_CPL,
      GPR34_fields_::FLEXSPI1_OTFAD_EN,
      ftl::mmio::Reserved<26, 2>,
      GPR34_fields_::DWP,
      GPR34_fields_::DWP_LOCK> {
    using eDWP = GPR34_fields_::eDWP;
    using eDWP_LOCK = GPR34_fields_::eDWP_LOCK;
    using XECC_FLEXSPI1_WAIT_BVALID_CPL = GPR34_fields_::XECC_FLEXSPI1_WAIT_BVALID_CPL;
    using FLEXSPI1_OTFAD_EN = GPR34_fields_::FLEXSPI1_OTFAD_EN;
    using DWP = GPR34_fields_::DWP;
    using DWP_LOCK = GPR34_fields_::DWP_LOCK;
  };

  // GPR35 General Purpose Register
  struct GPR35_fields_ {
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

    // XECC_FLEXSPI2 RMW wait enable
    using XECC_FLEXSPI2_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FlexSPI2 OTFAD enable
    using FLEXSPI2_OTFAD_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR35_fields_

  struct GPR35 : ftl::mmio::Register<
      0x400E408Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR35_fields_::XECC_FLEXSPI2_WAIT_BVALID_CPL,
      GPR35_fields_::FLEXSPI2_OTFAD_EN,
      ftl::mmio::Reserved<26, 2>,
      GPR35_fields_::DWP,
      GPR35_fields_::DWP_LOCK> {
    using eDWP = GPR35_fields_::eDWP;
    using eDWP_LOCK = GPR35_fields_::eDWP_LOCK;
    using XECC_FLEXSPI2_WAIT_BVALID_CPL = GPR35_fields_::XECC_FLEXSPI2_WAIT_BVALID_CPL;
    using FLEXSPI2_OTFAD_EN = GPR35_fields_::FLEXSPI2_OTFAD_EN;
    using DWP = GPR35_fields_::DWP;
    using DWP_LOCK = GPR35_fields_::DWP_LOCK;
  };

  // GPR36 General Purpose Register
  struct GPR36_fields_ {
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

    // XECC_SEMC RMW wait enable
    using XECC_SEMC_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR36_fields_

  struct GPR36 : ftl::mmio::Register<
      0x400E4090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR36_fields_::XECC_SEMC_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      GPR36_fields_::DWP,
      GPR36_fields_::DWP_LOCK> {
    using eDWP = GPR36_fields_::eDWP;
    using eDWP_LOCK = GPR36_fields_::eDWP_LOCK;
    using XECC_SEMC_WAIT_BVALID_CPL = GPR36_fields_::XECC_SEMC_WAIT_BVALID_CPL;
    using DWP = GPR36_fields_::DWP;
    using DWP_LOCK = GPR36_fields_::DWP_LOCK;
  };

  // GPR37 General Purpose Register
  struct GPR37_fields_ {
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

    // ARM non-secure (non-invasive) debug enable
    using NIDEN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ARM invasive debug enable
    using DBG_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Exclusive monitor response select of illegal command
    using EXC_MON = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CM7 debug halt mask
    using M7_DBG_ACK_MASK = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CM4 debug halt mask
    using M4_DBG_ACK_MASK = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR37_fields_

  struct GPR37 : ftl::mmio::Register<
      0x400E4094u,
      std::uint32_t,
      0x00000017u,
      ftl::mmio::RW,
      GPR37_fields_::NIDEN,
      GPR37_fields_::DBG_EN,
      ftl::mmio::Reserved<1, 2>,
      GPR37_fields_::EXC_MON,
      ftl::mmio::Reserved<1, 4>,
      GPR37_fields_::M7_DBG_ACK_MASK,
      GPR37_fields_::M4_DBG_ACK_MASK,
      ftl::mmio::Reserved<21, 7>,
      GPR37_fields_::DWP,
      GPR37_fields_::DWP_LOCK> {
    using eDWP = GPR37_fields_::eDWP;
    using eDWP_LOCK = GPR37_fields_::eDWP_LOCK;
    using NIDEN = GPR37_fields_::NIDEN;
    using DBG_EN = GPR37_fields_::DBG_EN;
    using EXC_MON = GPR37_fields_::EXC_MON;
    using M7_DBG_ACK_MASK = GPR37_fields_::M7_DBG_ACK_MASK;
    using M4_DBG_ACK_MASK = GPR37_fields_::M4_DBG_ACK_MASK;
    using DWP = GPR37_fields_::DWP;
    using DWP_LOCK = GPR37_fields_::DWP_LOCK;
  };

  // GPR38 General Purpose Register
  struct GPR38_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR38_fields_

  struct GPR38 : ftl::mmio::Register<
      0x400E4098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR38_fields_::DWP,
      GPR38_fields_::DWP_LOCK> {
    using eDWP = GPR38_fields_::eDWP;
    using eDWP_LOCK = GPR38_fields_::eDWP_LOCK;
    using DWP = GPR38_fields_::DWP;
    using DWP_LOCK = GPR38_fields_::DWP_LOCK;
  };

  // GPR39 General Purpose Register
  struct GPR39_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR39_fields_

  struct GPR39 : ftl::mmio::Register<
      0x400E409Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR39_fields_::DWP,
      GPR39_fields_::DWP_LOCK> {
    using eDWP = GPR39_fields_::eDWP;
    using eDWP_LOCK = GPR39_fields_::eDWP_LOCK;
    using DWP = GPR39_fields_::DWP;
    using DWP_LOCK = GPR39_fields_::DWP_LOCK;
  };

  // GPR40 General Purpose Register
  struct GPR40_fields_ {
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

    // GPIO2 and CM7_GPIO2 share same IO MUX function, GPIO_MUX2 selects one GPIO function.
    using GPIO_MUX2_GPIO_SEL_LOW = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR40_fields_

  struct GPR40 : ftl::mmio::Register<
      0x400E40A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR40_fields_::GPIO_MUX2_GPIO_SEL_LOW,
      ftl::mmio::Reserved<12, 16>,
      GPR40_fields_::DWP,
      GPR40_fields_::DWP_LOCK> {
    using eDWP = GPR40_fields_::eDWP;
    using eDWP_LOCK = GPR40_fields_::eDWP_LOCK;
    using GPIO_MUX2_GPIO_SEL_LOW = GPR40_fields_::GPIO_MUX2_GPIO_SEL_LOW;
    using DWP = GPR40_fields_::DWP;
    using DWP_LOCK = GPR40_fields_::DWP_LOCK;
  };

  // GPR41 General Purpose Register
  struct GPR41_fields_ {
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

    // GPIO2 and CM7_GPIO2 share same IO MUX function, GPIO_MUX2 selects one GPIO function.
    using GPIO_MUX2_GPIO_SEL_HIGH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR41_fields_

  struct GPR41 : ftl::mmio::Register<
      0x400E40A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR41_fields_::GPIO_MUX2_GPIO_SEL_HIGH,
      ftl::mmio::Reserved<12, 16>,
      GPR41_fields_::DWP,
      GPR41_fields_::DWP_LOCK> {
    using eDWP = GPR41_fields_::eDWP;
    using eDWP_LOCK = GPR41_fields_::eDWP_LOCK;
    using GPIO_MUX2_GPIO_SEL_HIGH = GPR41_fields_::GPIO_MUX2_GPIO_SEL_HIGH;
    using DWP = GPR41_fields_::DWP;
    using DWP_LOCK = GPR41_fields_::DWP_LOCK;
  };

  // GPR42 General Purpose Register
  struct GPR42_fields_ {
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

    // GPIO3 and CM7_GPIO3 share same IO MUX function, GPIO_MUX3 selects one GPIO function.
    using GPIO_MUX3_GPIO_SEL_LOW = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR42_fields_

  struct GPR42 : ftl::mmio::Register<
      0x400E40A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR42_fields_::GPIO_MUX3_GPIO_SEL_LOW,
      ftl::mmio::Reserved<12, 16>,
      GPR42_fields_::DWP,
      GPR42_fields_::DWP_LOCK> {
    using eDWP = GPR42_fields_::eDWP;
    using eDWP_LOCK = GPR42_fields_::eDWP_LOCK;
    using GPIO_MUX3_GPIO_SEL_LOW = GPR42_fields_::GPIO_MUX3_GPIO_SEL_LOW;
    using DWP = GPR42_fields_::DWP;
    using DWP_LOCK = GPR42_fields_::DWP_LOCK;
  };

  // GPR43 General Purpose Register
  struct GPR43_fields_ {
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

    // GPIO3 and CM7_GPIO3 share same IO MUX function, GPIO_MUX3 selects one GPIO function.
    using GPIO_MUX3_GPIO_SEL_HIGH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR43_fields_

  struct GPR43 : ftl::mmio::Register<
      0x400E40ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR43_fields_::GPIO_MUX3_GPIO_SEL_HIGH,
      ftl::mmio::Reserved<12, 16>,
      GPR43_fields_::DWP,
      GPR43_fields_::DWP_LOCK> {
    using eDWP = GPR43_fields_::eDWP;
    using eDWP_LOCK = GPR43_fields_::eDWP_LOCK;
    using GPIO_MUX3_GPIO_SEL_HIGH = GPR43_fields_::GPIO_MUX3_GPIO_SEL_HIGH;
    using DWP = GPR43_fields_::DWP;
    using DWP_LOCK = GPR43_fields_::DWP_LOCK;
  };

  // GPR44 General Purpose Register
  struct GPR44_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR44_fields_

  struct GPR44 : ftl::mmio::Register<
      0x400E40B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR44_fields_::DWP,
      GPR44_fields_::DWP_LOCK> {
    using eDWP = GPR44_fields_::eDWP;
    using eDWP_LOCK = GPR44_fields_::eDWP_LOCK;
    using DWP = GPR44_fields_::DWP;
    using DWP_LOCK = GPR44_fields_::DWP_LOCK;
  };

  // GPR45 General Purpose Register
  struct GPR45_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR45_fields_

  struct GPR45 : ftl::mmio::Register<
      0x400E40B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR45_fields_::DWP,
      GPR45_fields_::DWP_LOCK> {
    using eDWP = GPR45_fields_::eDWP;
    using eDWP_LOCK = GPR45_fields_::eDWP_LOCK;
    using DWP = GPR45_fields_::DWP;
    using DWP_LOCK = GPR45_fields_::DWP_LOCK;
  };

  // GPR46 General Purpose Register
  struct GPR46_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR46_fields_

  struct GPR46 : ftl::mmio::Register<
      0x400E40B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR46_fields_::DWP,
      GPR46_fields_::DWP_LOCK> {
    using eDWP = GPR46_fields_::eDWP;
    using eDWP_LOCK = GPR46_fields_::eDWP_LOCK;
    using DWP = GPR46_fields_::DWP;
    using DWP_LOCK = GPR46_fields_::DWP_LOCK;
  };

  // GPR47 General Purpose Register
  struct GPR47_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR47_fields_

  struct GPR47 : ftl::mmio::Register<
      0x400E40BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR47_fields_::DWP,
      GPR47_fields_::DWP_LOCK> {
    using eDWP = GPR47_fields_::eDWP;
    using eDWP_LOCK = GPR47_fields_::eDWP_LOCK;
    using DWP = GPR47_fields_::DWP;
    using DWP_LOCK = GPR47_fields_::DWP_LOCK;
  };

  // GPR48 General Purpose Register
  struct GPR48_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR48_fields_

  struct GPR48 : ftl::mmio::Register<
      0x400E40C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR48_fields_::DWP,
      GPR48_fields_::DWP_LOCK> {
    using eDWP = GPR48_fields_::eDWP;
    using eDWP_LOCK = GPR48_fields_::eDWP_LOCK;
    using DWP = GPR48_fields_::DWP;
    using DWP_LOCK = GPR48_fields_::DWP_LOCK;
  };

  // GPR49 General Purpose Register
  struct GPR49_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR49_fields_

  struct GPR49 : ftl::mmio::Register<
      0x400E40C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR49_fields_::DWP,
      GPR49_fields_::DWP_LOCK> {
    using eDWP = GPR49_fields_::eDWP;
    using eDWP_LOCK = GPR49_fields_::eDWP_LOCK;
    using DWP = GPR49_fields_::DWP;
    using DWP_LOCK = GPR49_fields_::DWP_LOCK;
  };

  // GPR50 General Purpose Register
  struct GPR50_fields_ {
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

    // CAAM manager processor identifier
    using CAAM_IPS_MGR = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR50_fields_

  struct GPR50 : ftl::mmio::Register<
      0x400E40C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR50_fields_::CAAM_IPS_MGR,
      ftl::mmio::Reserved<23, 5>,
      GPR50_fields_::DWP,
      GPR50_fields_::DWP_LOCK> {
    using eDWP = GPR50_fields_::eDWP;
    using eDWP_LOCK = GPR50_fields_::eDWP_LOCK;
    using CAAM_IPS_MGR = GPR50_fields_::CAAM_IPS_MGR;
    using DWP = GPR50_fields_::DWP;
    using DWP_LOCK = GPR50_fields_::DWP_LOCK;
  };

  // GPR51 General Purpose Register
  struct GPR51_fields_ {
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

    // Clear CM7 NMI holding register
    using M7_NMI_CLEAR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR51_fields_

  struct GPR51 : ftl::mmio::Register<
      0x400E40CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR51_fields_::M7_NMI_CLEAR,
      ftl::mmio::Reserved<27, 1>,
      GPR51_fields_::DWP,
      GPR51_fields_::DWP_LOCK> {
    using eDWP = GPR51_fields_::eDWP;
    using eDWP_LOCK = GPR51_fields_::eDWP_LOCK;
    using M7_NMI_CLEAR = GPR51_fields_::M7_NMI_CLEAR;
    using DWP = GPR51_fields_::DWP;
    using DWP_LOCK = GPR51_fields_::DWP_LOCK;
  };

  // GPR52 General Purpose Register
  struct GPR52_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR52_fields_

  struct GPR52 : ftl::mmio::Register<
      0x400E40D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR52_fields_::DWP,
      GPR52_fields_::DWP_LOCK> {
    using eDWP = GPR52_fields_::eDWP;
    using eDWP_LOCK = GPR52_fields_::eDWP_LOCK;
    using DWP = GPR52_fields_::DWP;
    using DWP_LOCK = GPR52_fields_::DWP_LOCK;
  };

  // GPR53 General Purpose Register
  struct GPR53_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR53_fields_

  struct GPR53 : ftl::mmio::Register<
      0x400E40D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR53_fields_::DWP,
      GPR53_fields_::DWP_LOCK> {
    using eDWP = GPR53_fields_::eDWP;
    using eDWP_LOCK = GPR53_fields_::eDWP_LOCK;
    using DWP = GPR53_fields_::DWP;
    using DWP_LOCK = GPR53_fields_::DWP_LOCK;
  };

  // GPR54 General Purpose Register
  struct GPR54_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR54_fields_

  struct GPR54 : ftl::mmio::Register<
      0x400E40D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR54_fields_::DWP,
      GPR54_fields_::DWP_LOCK> {
    using eDWP = GPR54_fields_::eDWP;
    using eDWP_LOCK = GPR54_fields_::eDWP_LOCK;
    using DWP = GPR54_fields_::DWP;
    using DWP_LOCK = GPR54_fields_::DWP_LOCK;
  };

  // GPR55 General Purpose Register
  struct GPR55_fields_ {
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

    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR55_fields_

  struct GPR55 : ftl::mmio::Register<
      0x400E40DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      GPR55_fields_::DWP,
      GPR55_fields_::DWP_LOCK> {
    using eDWP = GPR55_fields_::eDWP;
    using eDWP_LOCK = GPR55_fields_::eDWP_LOCK;
    using DWP = GPR55_fields_::DWP;
    using DWP_LOCK = GPR55_fields_::DWP_LOCK;
  };

  // GPR59 General Purpose Register
  struct GPR59_fields_ {
    enum class eMIPI_CSI_SOFT_RST_N : std::uint32_t {
      // Assert reset
      eASSERT = 0,
      // De-assert reset
      eDEAST = 1,
    };

    enum class eMIPI_CSI_RXCDRP : std::uint32_t {
      // 344mV
      eVAL0 = 0,
      // 325mV (Default)
      eVAL01 = 1,
      // 307mV
      eVAL10 = 2,
      // Invalid
      eVAL11 = 3,
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

    // Powers down inactive lanes reported by CSI2X_CFG_NUM_LANES.
    using MIPI_CSI_AUTO_PD_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI CSI APB clock domain and User interface clock domain software reset bit
    using MIPI_CSI_SOFT_RST_N = ftl::mmio::Field<1, 1, eMIPI_CSI_SOFT_RST_N, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enables the slave clock lane feature to maintain HS reception state during continuous clock mode operation, despite line glitches.
    using MIPI_CSI_CONT_CLK_MODE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // When high, enables received DDR clock on CLK_DRXHS
    using MIPI_CSI_DDRCLK_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Down input for MIPI CSI PHY.
    using MIPI_CSI_PD_RX = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Assert to enable MIPI CSI Receive Enable
    using MIPI_CSI_RX_ENABLE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI CSI PHY on-chip termination control bits
    using MIPI_CSI_RX_RCAL = ftl::mmio::Field<2, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Programming bits that adjust the threshold voltage of LP-CD, default setting 2'b01
    using MIPI_CSI_RXCDRP = ftl::mmio::Field<2, 8, eMIPI_CSI_RXCDRP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Programming bits that adjust the threshold voltage of LP-RX, default setting 2'b01
    using MIPI_CSI_RXLPRP = ftl::mmio::Field<2, 10, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Bits used to program T_HS_SETTLE.
    using MIPI_CSI_S_PRG_RXHS_SETTLE = ftl::mmio::Field<6, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR59_fields_

  struct GPR59 : ftl::mmio::Register<
      0x400E40ECu,
      std::uint32_t,
      0x00000550u,
      ftl::mmio::RW,
      GPR59_fields_::MIPI_CSI_AUTO_PD_EN,
      GPR59_fields_::MIPI_CSI_SOFT_RST_N,
      GPR59_fields_::MIPI_CSI_CONT_CLK_MODE,
      GPR59_fields_::MIPI_CSI_DDRCLK_EN,
      GPR59_fields_::MIPI_CSI_PD_RX,
      GPR59_fields_::MIPI_CSI_RX_ENABLE,
      GPR59_fields_::MIPI_CSI_RX_RCAL,
      GPR59_fields_::MIPI_CSI_RXCDRP,
      GPR59_fields_::MIPI_CSI_RXLPRP,
      GPR59_fields_::MIPI_CSI_S_PRG_RXHS_SETTLE,
      ftl::mmio::Reserved<10, 18>,
      GPR59_fields_::DWP,
      GPR59_fields_::DWP_LOCK> {
    using eMIPI_CSI_SOFT_RST_N = GPR59_fields_::eMIPI_CSI_SOFT_RST_N;
    using eMIPI_CSI_RXCDRP = GPR59_fields_::eMIPI_CSI_RXCDRP;
    using eDWP = GPR59_fields_::eDWP;
    using eDWP_LOCK = GPR59_fields_::eDWP_LOCK;
    using MIPI_CSI_AUTO_PD_EN = GPR59_fields_::MIPI_CSI_AUTO_PD_EN;
    using MIPI_CSI_SOFT_RST_N = GPR59_fields_::MIPI_CSI_SOFT_RST_N;
    using MIPI_CSI_CONT_CLK_MODE = GPR59_fields_::MIPI_CSI_CONT_CLK_MODE;
    using MIPI_CSI_DDRCLK_EN = GPR59_fields_::MIPI_CSI_DDRCLK_EN;
    using MIPI_CSI_PD_RX = GPR59_fields_::MIPI_CSI_PD_RX;
    using MIPI_CSI_RX_ENABLE = GPR59_fields_::MIPI_CSI_RX_ENABLE;
    using MIPI_CSI_RX_RCAL = GPR59_fields_::MIPI_CSI_RX_RCAL;
    using MIPI_CSI_RXCDRP = GPR59_fields_::MIPI_CSI_RXCDRP;
    using MIPI_CSI_RXLPRP = GPR59_fields_::MIPI_CSI_RXLPRP;
    using MIPI_CSI_S_PRG_RXHS_SETTLE = GPR59_fields_::MIPI_CSI_S_PRG_RXHS_SETTLE;
    using DWP = GPR59_fields_::DWP;
    using DWP_LOCK = GPR59_fields_::DWP_LOCK;
  };

  // GPR62 General Purpose Register
  struct GPR62_fields_ {
    enum class eMIPI_DSI_PCLK_SOFT_RESET_N : std::uint32_t {
      // Assert reset
      eASSERT = 0,
      // De-assert reset
      eDEASSERT = 1,
    };

    enum class eMIPI_DSI_BYTE_SOFT_RESET_N : std::uint32_t {
      // Assert reset
      eASSERT = 0,
      // De-assert reset
      eDEASSERT = 1,
    };

    enum class eMIPI_DSI_DPI_SOFT_RESET_N : std::uint32_t {
      // Assert reset
      eASSERT = 0,
      // De-assert reset
      eDEASSERT = 1,
    };

    enum class eMIPI_DSI_ESC_SOFT_RESET_N : std::uint32_t {
      // Assert reset
      eASSERT = 0,
      // De-assert reset
      eDEASSERT = 1,
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

    // MIPI DSI Clock Lane triming bits
    using MIPI_DSI_CLK_TM = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI Data Lane 0 triming bits
    using MIPI_DSI_D0_TM = ftl::mmio::Field<3, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI Data Lane 1 triming bits
    using MIPI_DSI_D1_TM = ftl::mmio::Field<3, 6, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI PHY on-chip termination control bits
    using MIPI_DSI_TX_RCAL = ftl::mmio::Field<2, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DSI transmit ULPS mode enable
    using MIPI_DSI_TX_ULPS_ENABLE = ftl::mmio::Field<3, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI APB clock domain software reset bit
    using MIPI_DSI_PCLK_SOFT_RESET_N = ftl::mmio::Field<1, 16, eMIPI_DSI_PCLK_SOFT_RESET_N, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI Byte clock domain software reset bit
    using MIPI_DSI_BYTE_SOFT_RESET_N = ftl::mmio::Field<1, 17, eMIPI_DSI_BYTE_SOFT_RESET_N, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI Pixel clock domain software reset bit
    using MIPI_DSI_DPI_SOFT_RESET_N = ftl::mmio::Field<1, 18, eMIPI_DSI_DPI_SOFT_RESET_N, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIPI DSI Escape clock domain software reset bit
    using MIPI_DSI_ESC_SOFT_RESET_N = ftl::mmio::Field<1, 19, eMIPI_DSI_ESC_SOFT_RESET_N, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR62_fields_

  struct GPR62 : ftl::mmio::Register<
      0x400E40F8u,
      std::uint32_t,
      0x000002DBu,
      ftl::mmio::RW,
      GPR62_fields_::MIPI_DSI_CLK_TM,
      GPR62_fields_::MIPI_DSI_D0_TM,
      GPR62_fields_::MIPI_DSI_D1_TM,
      GPR62_fields_::MIPI_DSI_TX_RCAL,
      GPR62_fields_::MIPI_DSI_TX_ULPS_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      GPR62_fields_::MIPI_DSI_PCLK_SOFT_RESET_N,
      GPR62_fields_::MIPI_DSI_BYTE_SOFT_RESET_N,
      GPR62_fields_::MIPI_DSI_DPI_SOFT_RESET_N,
      GPR62_fields_::MIPI_DSI_ESC_SOFT_RESET_N,
      ftl::mmio::Reserved<8, 20>,
      GPR62_fields_::DWP,
      GPR62_fields_::DWP_LOCK> {
    using eMIPI_DSI_PCLK_SOFT_RESET_N = GPR62_fields_::eMIPI_DSI_PCLK_SOFT_RESET_N;
    using eMIPI_DSI_BYTE_SOFT_RESET_N = GPR62_fields_::eMIPI_DSI_BYTE_SOFT_RESET_N;
    using eMIPI_DSI_DPI_SOFT_RESET_N = GPR62_fields_::eMIPI_DSI_DPI_SOFT_RESET_N;
    using eMIPI_DSI_ESC_SOFT_RESET_N = GPR62_fields_::eMIPI_DSI_ESC_SOFT_RESET_N;
    using eDWP = GPR62_fields_::eDWP;
    using eDWP_LOCK = GPR62_fields_::eDWP_LOCK;
    using MIPI_DSI_CLK_TM = GPR62_fields_::MIPI_DSI_CLK_TM;
    using MIPI_DSI_D0_TM = GPR62_fields_::MIPI_DSI_D0_TM;
    using MIPI_DSI_D1_TM = GPR62_fields_::MIPI_DSI_D1_TM;
    using MIPI_DSI_TX_RCAL = GPR62_fields_::MIPI_DSI_TX_RCAL;
    using MIPI_DSI_TX_ULPS_ENABLE = GPR62_fields_::MIPI_DSI_TX_ULPS_ENABLE;
    using MIPI_DSI_PCLK_SOFT_RESET_N = GPR62_fields_::MIPI_DSI_PCLK_SOFT_RESET_N;
    using MIPI_DSI_BYTE_SOFT_RESET_N = GPR62_fields_::MIPI_DSI_BYTE_SOFT_RESET_N;
    using MIPI_DSI_DPI_SOFT_RESET_N = GPR62_fields_::MIPI_DSI_DPI_SOFT_RESET_N;
    using MIPI_DSI_ESC_SOFT_RESET_N = GPR62_fields_::MIPI_DSI_ESC_SOFT_RESET_N;
    using DWP = GPR62_fields_::DWP;
    using DWP_LOCK = GPR62_fields_::DWP_LOCK;
  };

  // GPR63 General Purpose Register
  struct GPR63_fields_ {
    // DSI transmit ULPS mode active flag
    using MIPI_DSI_TX_ULPS_ACTIVE = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct GPR63_fields_

  struct GPR63 : ftl::mmio::Register<
      0x400E40FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      GPR63_fields_::MIPI_DSI_TX_ULPS_ACTIVE,
      ftl::mmio::Reserved<29, 3>> {
    using MIPI_DSI_TX_ULPS_ACTIVE = GPR63_fields_::MIPI_DSI_TX_ULPS_ACTIVE;
  };

  // GPR64 General Purpose Register
  struct GPR64_fields_ {
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

    // Compensation code freeze
    using GPIO_DISP1_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_DISP1_COMPTQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_DISP1_COMPEN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compensation code fast freeze
    using GPIO_DISP1_FASTFRZ_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank's 4-bit PMOS compensation codes from core
    using GPIO_DISP1_RASRCP = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank's 4-bit NMOS compensation codes from core
    using GPIO_DISP1_RASRCN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP1_NASRC selection
    using GPIO_DISP1_SELECT_NASRC = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank reference voltage generator cell sleep enable
    using GPIO_DISP1_REFGEN_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank power supply mode latch enable
    using GPIO_DISP1_SUPLYDET_LATCH = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank compensation OK flag
    using GPIO_DISP1_COMPOK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank compensation codes
    using GPIO_DISP1_NASRC = ftl::mmio::Field<4, 21, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR64_fields_

  struct GPR64 : ftl::mmio::Register<
      0x400E4100u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      GPR64_fields_::GPIO_DISP1_FREEZE,
      GPR64_fields_::GPIO_DISP1_COMPTQ,
      GPR64_fields_::GPIO_DISP1_COMPEN,
      GPR64_fields_::GPIO_DISP1_FASTFRZ_EN,
      GPR64_fields_::GPIO_DISP1_RASRCP,
      GPR64_fields_::GPIO_DISP1_RASRCN,
      GPR64_fields_::GPIO_DISP1_SELECT_NASRC,
      GPR64_fields_::GPIO_DISP1_REFGEN_SLEEP,
      GPR64_fields_::GPIO_DISP1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      GPR64_fields_::GPIO_DISP1_COMPOK,
      GPR64_fields_::GPIO_DISP1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      GPR64_fields_::DWP,
      GPR64_fields_::DWP_LOCK> {
    using eDWP = GPR64_fields_::eDWP;
    using eDWP_LOCK = GPR64_fields_::eDWP_LOCK;
    using GPIO_DISP1_FREEZE = GPR64_fields_::GPIO_DISP1_FREEZE;
    using GPIO_DISP1_COMPTQ = GPR64_fields_::GPIO_DISP1_COMPTQ;
    using GPIO_DISP1_COMPEN = GPR64_fields_::GPIO_DISP1_COMPEN;
    using GPIO_DISP1_FASTFRZ_EN = GPR64_fields_::GPIO_DISP1_FASTFRZ_EN;
    using GPIO_DISP1_RASRCP = GPR64_fields_::GPIO_DISP1_RASRCP;
    using GPIO_DISP1_RASRCN = GPR64_fields_::GPIO_DISP1_RASRCN;
    using GPIO_DISP1_SELECT_NASRC = GPR64_fields_::GPIO_DISP1_SELECT_NASRC;
    using GPIO_DISP1_REFGEN_SLEEP = GPR64_fields_::GPIO_DISP1_REFGEN_SLEEP;
    using GPIO_DISP1_SUPLYDET_LATCH = GPR64_fields_::GPIO_DISP1_SUPLYDET_LATCH;
    using GPIO_DISP1_COMPOK = GPR64_fields_::GPIO_DISP1_COMPOK;
    using GPIO_DISP1_NASRC = GPR64_fields_::GPIO_DISP1_NASRC;
    using DWP = GPR64_fields_::DWP;
    using DWP_LOCK = GPR64_fields_::DWP_LOCK;
  };

  // GPR65 General Purpose Register
  struct GPR65_fields_ {
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

    // Compensation code freeze
    using GPIO_EMC1_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_EMC1_COMPTQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_EMC1_COMPEN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compensation code fast freeze
    using GPIO_EMC1_FASTFRZ_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank's 4-bit PMOS compensation codes from core
    using GPIO_EMC1_RASRCP = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank's 4-bit NMOS compensation codes from core
    using GPIO_EMC1_RASRCN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC1_NASRC selection
    using GPIO_EMC1_SELECT_NASRC = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank reference voltage generator cell sleep enable
    using GPIO_EMC1_REFGEN_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank power supply mode latch enable
    using GPIO_EMC1_SUPLYDET_LATCH = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank compensation OK flag
    using GPIO_EMC1_COMPOK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank compensation codes
    using GPIO_EMC1_NASRC = ftl::mmio::Field<4, 21, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR65_fields_

  struct GPR65 : ftl::mmio::Register<
      0x400E4104u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      GPR65_fields_::GPIO_EMC1_FREEZE,
      GPR65_fields_::GPIO_EMC1_COMPTQ,
      GPR65_fields_::GPIO_EMC1_COMPEN,
      GPR65_fields_::GPIO_EMC1_FASTFRZ_EN,
      GPR65_fields_::GPIO_EMC1_RASRCP,
      GPR65_fields_::GPIO_EMC1_RASRCN,
      GPR65_fields_::GPIO_EMC1_SELECT_NASRC,
      GPR65_fields_::GPIO_EMC1_REFGEN_SLEEP,
      GPR65_fields_::GPIO_EMC1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      GPR65_fields_::GPIO_EMC1_COMPOK,
      GPR65_fields_::GPIO_EMC1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      GPR65_fields_::DWP,
      GPR65_fields_::DWP_LOCK> {
    using eDWP = GPR65_fields_::eDWP;
    using eDWP_LOCK = GPR65_fields_::eDWP_LOCK;
    using GPIO_EMC1_FREEZE = GPR65_fields_::GPIO_EMC1_FREEZE;
    using GPIO_EMC1_COMPTQ = GPR65_fields_::GPIO_EMC1_COMPTQ;
    using GPIO_EMC1_COMPEN = GPR65_fields_::GPIO_EMC1_COMPEN;
    using GPIO_EMC1_FASTFRZ_EN = GPR65_fields_::GPIO_EMC1_FASTFRZ_EN;
    using GPIO_EMC1_RASRCP = GPR65_fields_::GPIO_EMC1_RASRCP;
    using GPIO_EMC1_RASRCN = GPR65_fields_::GPIO_EMC1_RASRCN;
    using GPIO_EMC1_SELECT_NASRC = GPR65_fields_::GPIO_EMC1_SELECT_NASRC;
    using GPIO_EMC1_REFGEN_SLEEP = GPR65_fields_::GPIO_EMC1_REFGEN_SLEEP;
    using GPIO_EMC1_SUPLYDET_LATCH = GPR65_fields_::GPIO_EMC1_SUPLYDET_LATCH;
    using GPIO_EMC1_COMPOK = GPR65_fields_::GPIO_EMC1_COMPOK;
    using GPIO_EMC1_NASRC = GPR65_fields_::GPIO_EMC1_NASRC;
    using DWP = GPR65_fields_::DWP;
    using DWP_LOCK = GPR65_fields_::DWP_LOCK;
  };

  // GPR66 General Purpose Register
  struct GPR66_fields_ {
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

    // Compensation code freeze
    using GPIO_EMC2_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_EMC2_COMPTQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_EMC2_COMPEN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compensation code fast freeze
    using GPIO_EMC2_FASTFRZ_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank's 4-bit PMOS compensation codes from core
    using GPIO_EMC2_RASRCP = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank's 4-bit NMOS compensation codes from core
    using GPIO_EMC2_RASRCN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC2_NASRC selection
    using GPIO_EMC2_SELECT_NASRC = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank reference voltage generator cell sleep enable
    using GPIO_EMC2_REFGEN_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank power supply mode latch enable
    using GPIO_EMC2_SUPLYDET_LATCH = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank compensation OK flag
    using GPIO_EMC2_COMPOK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank compensation codes
    using GPIO_EMC2_NASRC = ftl::mmio::Field<4, 21, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR66_fields_

  struct GPR66 : ftl::mmio::Register<
      0x400E4108u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      GPR66_fields_::GPIO_EMC2_FREEZE,
      GPR66_fields_::GPIO_EMC2_COMPTQ,
      GPR66_fields_::GPIO_EMC2_COMPEN,
      GPR66_fields_::GPIO_EMC2_FASTFRZ_EN,
      GPR66_fields_::GPIO_EMC2_RASRCP,
      GPR66_fields_::GPIO_EMC2_RASRCN,
      GPR66_fields_::GPIO_EMC2_SELECT_NASRC,
      GPR66_fields_::GPIO_EMC2_REFGEN_SLEEP,
      GPR66_fields_::GPIO_EMC2_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      GPR66_fields_::GPIO_EMC2_COMPOK,
      GPR66_fields_::GPIO_EMC2_NASRC,
      ftl::mmio::Reserved<3, 25>,
      GPR66_fields_::DWP,
      GPR66_fields_::DWP_LOCK> {
    using eDWP = GPR66_fields_::eDWP;
    using eDWP_LOCK = GPR66_fields_::eDWP_LOCK;
    using GPIO_EMC2_FREEZE = GPR66_fields_::GPIO_EMC2_FREEZE;
    using GPIO_EMC2_COMPTQ = GPR66_fields_::GPIO_EMC2_COMPTQ;
    using GPIO_EMC2_COMPEN = GPR66_fields_::GPIO_EMC2_COMPEN;
    using GPIO_EMC2_FASTFRZ_EN = GPR66_fields_::GPIO_EMC2_FASTFRZ_EN;
    using GPIO_EMC2_RASRCP = GPR66_fields_::GPIO_EMC2_RASRCP;
    using GPIO_EMC2_RASRCN = GPR66_fields_::GPIO_EMC2_RASRCN;
    using GPIO_EMC2_SELECT_NASRC = GPR66_fields_::GPIO_EMC2_SELECT_NASRC;
    using GPIO_EMC2_REFGEN_SLEEP = GPR66_fields_::GPIO_EMC2_REFGEN_SLEEP;
    using GPIO_EMC2_SUPLYDET_LATCH = GPR66_fields_::GPIO_EMC2_SUPLYDET_LATCH;
    using GPIO_EMC2_COMPOK = GPR66_fields_::GPIO_EMC2_COMPOK;
    using GPIO_EMC2_NASRC = GPR66_fields_::GPIO_EMC2_NASRC;
    using DWP = GPR66_fields_::DWP;
    using DWP_LOCK = GPR66_fields_::DWP_LOCK;
  };

  // GPR67 General Purpose Register
  struct GPR67_fields_ {
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

    // Compensation code freeze
    using GPIO_SD1_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_SD1_COMPTQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_SD1_COMPEN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compensation code fast freeze
    using GPIO_SD1_FASTFRZ_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank's 4-bit PMOS compensation codes from core
    using GPIO_SD1_RASRCP = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank's 4-bit NMOS compensation codes from core
    using GPIO_SD1_RASRCN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD1_NASRC selection
    using GPIO_SD1_SELECT_NASRC = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank reference voltage generator cell sleep enable
    using GPIO_SD1_REFGEN_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank power supply mode latch enable
    using GPIO_SD1_SUPLYDET_LATCH = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank compensation OK flag
    using GPIO_SD1_COMPOK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank compensation codes
    using GPIO_SD1_NASRC = ftl::mmio::Field<4, 21, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR67_fields_

  struct GPR67 : ftl::mmio::Register<
      0x400E410Cu,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      GPR67_fields_::GPIO_SD1_FREEZE,
      GPR67_fields_::GPIO_SD1_COMPTQ,
      GPR67_fields_::GPIO_SD1_COMPEN,
      GPR67_fields_::GPIO_SD1_FASTFRZ_EN,
      GPR67_fields_::GPIO_SD1_RASRCP,
      GPR67_fields_::GPIO_SD1_RASRCN,
      GPR67_fields_::GPIO_SD1_SELECT_NASRC,
      GPR67_fields_::GPIO_SD1_REFGEN_SLEEP,
      GPR67_fields_::GPIO_SD1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      GPR67_fields_::GPIO_SD1_COMPOK,
      GPR67_fields_::GPIO_SD1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      GPR67_fields_::DWP,
      GPR67_fields_::DWP_LOCK> {
    using eDWP = GPR67_fields_::eDWP;
    using eDWP_LOCK = GPR67_fields_::eDWP_LOCK;
    using GPIO_SD1_FREEZE = GPR67_fields_::GPIO_SD1_FREEZE;
    using GPIO_SD1_COMPTQ = GPR67_fields_::GPIO_SD1_COMPTQ;
    using GPIO_SD1_COMPEN = GPR67_fields_::GPIO_SD1_COMPEN;
    using GPIO_SD1_FASTFRZ_EN = GPR67_fields_::GPIO_SD1_FASTFRZ_EN;
    using GPIO_SD1_RASRCP = GPR67_fields_::GPIO_SD1_RASRCP;
    using GPIO_SD1_RASRCN = GPR67_fields_::GPIO_SD1_RASRCN;
    using GPIO_SD1_SELECT_NASRC = GPR67_fields_::GPIO_SD1_SELECT_NASRC;
    using GPIO_SD1_REFGEN_SLEEP = GPR67_fields_::GPIO_SD1_REFGEN_SLEEP;
    using GPIO_SD1_SUPLYDET_LATCH = GPR67_fields_::GPIO_SD1_SUPLYDET_LATCH;
    using GPIO_SD1_COMPOK = GPR67_fields_::GPIO_SD1_COMPOK;
    using GPIO_SD1_NASRC = GPR67_fields_::GPIO_SD1_NASRC;
    using DWP = GPR67_fields_::DWP;
    using DWP_LOCK = GPR67_fields_::DWP_LOCK;
  };

  // GPR68 General Purpose Register
  struct GPR68_fields_ {
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

    // Compensation code freeze
    using GPIO_SD2_FREEZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_SD2_COMPTQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // COMPEN and COMPTQ control the operating modes of the compensation cell
    using GPIO_SD2_COMPEN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compensation code fast freeze
    using GPIO_SD2_FASTFRZ_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank's 4-bit PMOS compensation codes from core
    using GPIO_SD2_RASRCP = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank's 4-bit NMOS compensation codes from core
    using GPIO_SD2_RASRCN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD2_NASRC selection
    using GPIO_SD2_SELECT_NASRC = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank reference voltage generator cell sleep enable
    using GPIO_SD2_REFGEN_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank power supply mode latch enable
    using GPIO_SD2_SUPLYDET_LATCH = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank compensation OK flag
    using GPIO_SD2_COMPOK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank compensation codes
    using GPIO_SD2_NASRC = ftl::mmio::Field<4, 21, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR68_fields_

  struct GPR68 : ftl::mmio::Register<
      0x400E4110u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      GPR68_fields_::GPIO_SD2_FREEZE,
      GPR68_fields_::GPIO_SD2_COMPTQ,
      GPR68_fields_::GPIO_SD2_COMPEN,
      GPR68_fields_::GPIO_SD2_FASTFRZ_EN,
      GPR68_fields_::GPIO_SD2_RASRCP,
      GPR68_fields_::GPIO_SD2_RASRCN,
      GPR68_fields_::GPIO_SD2_SELECT_NASRC,
      GPR68_fields_::GPIO_SD2_REFGEN_SLEEP,
      GPR68_fields_::GPIO_SD2_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      GPR68_fields_::GPIO_SD2_COMPOK,
      GPR68_fields_::GPIO_SD2_NASRC,
      ftl::mmio::Reserved<3, 25>,
      GPR68_fields_::DWP,
      GPR68_fields_::DWP_LOCK> {
    using eDWP = GPR68_fields_::eDWP;
    using eDWP_LOCK = GPR68_fields_::eDWP_LOCK;
    using GPIO_SD2_FREEZE = GPR68_fields_::GPIO_SD2_FREEZE;
    using GPIO_SD2_COMPTQ = GPR68_fields_::GPIO_SD2_COMPTQ;
    using GPIO_SD2_COMPEN = GPR68_fields_::GPIO_SD2_COMPEN;
    using GPIO_SD2_FASTFRZ_EN = GPR68_fields_::GPIO_SD2_FASTFRZ_EN;
    using GPIO_SD2_RASRCP = GPR68_fields_::GPIO_SD2_RASRCP;
    using GPIO_SD2_RASRCN = GPR68_fields_::GPIO_SD2_RASRCN;
    using GPIO_SD2_SELECT_NASRC = GPR68_fields_::GPIO_SD2_SELECT_NASRC;
    using GPIO_SD2_REFGEN_SLEEP = GPR68_fields_::GPIO_SD2_REFGEN_SLEEP;
    using GPIO_SD2_SUPLYDET_LATCH = GPR68_fields_::GPIO_SD2_SUPLYDET_LATCH;
    using GPIO_SD2_COMPOK = GPR68_fields_::GPIO_SD2_COMPOK;
    using GPIO_SD2_NASRC = GPR68_fields_::GPIO_SD2_NASRC;
    using DWP = GPR68_fields_::DWP;
    using DWP_LOCK = GPR68_fields_::DWP_LOCK;
  };

  // GPR69 General Purpose Register
  struct GPR69_fields_ {
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

    // GPIO_DISP_B2 IO bank supply voltage range selection
    using GPIO_DISP2_HIGH_RANGE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B2 IO bank supply voltage range selection
    using GPIO_DISP2_LOW_RANGE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_AD IO bank supply voltage range selection for GPIO_AD_00 to GPIO_AD_17
    using GPIO_AD0_HIGH_RANGE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_AD IO bank supply voltage range selection for GPIO_AD_00 to GPIO_AD_17
    using GPIO_AD0_LOW_RANGE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_LPSR IO bank supply voltage range selection for GPIO_AD_18 to GPIO_AD_35
    using GPIO_AD1_HIGH_RANGE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_LPSR IO bank supply voltage range selection for GPIO_AD_18 to GPIO_AD_35
    using GPIO_AD1_LOW_RANGE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_DISP_B1 IO bank supply voltage detector sleep mode enable
    using SUPLYDET_DISP1_SLEEP = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B1 IO bank supply voltage detector sleep mode enable
    using SUPLYDET_EMC1_SLEEP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_EMC_B2 IO bank supply voltage detector sleep mode enable
    using SUPLYDET_EMC2_SLEEP = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B1 IO bank supply voltage detector sleep mode enable
    using SUPLYDET_SD1_SLEEP = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPIO_SD_B2 IO bank supply voltage detector sleep mode enable
    using SUPLYDET_SD2_SLEEP = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR69_fields_

  struct GPR69 : ftl::mmio::Register<
      0x400E4114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      GPR69_fields_::GPIO_DISP2_HIGH_RANGE,
      GPR69_fields_::GPIO_DISP2_LOW_RANGE,
      ftl::mmio::Reserved<1, 3>,
      GPR69_fields_::GPIO_AD0_HIGH_RANGE,
      GPR69_fields_::GPIO_AD0_LOW_RANGE,
      ftl::mmio::Reserved<1, 6>,
      GPR69_fields_::GPIO_AD1_HIGH_RANGE,
      GPR69_fields_::GPIO_AD1_LOW_RANGE,
      GPR69_fields_::SUPLYDET_DISP1_SLEEP,
      GPR69_fields_::SUPLYDET_EMC1_SLEEP,
      GPR69_fields_::SUPLYDET_EMC2_SLEEP,
      GPR69_fields_::SUPLYDET_SD1_SLEEP,
      GPR69_fields_::SUPLYDET_SD2_SLEEP,
      ftl::mmio::Reserved<14, 14>,
      GPR69_fields_::DWP,
      GPR69_fields_::DWP_LOCK> {
    using eDWP = GPR69_fields_::eDWP;
    using eDWP_LOCK = GPR69_fields_::eDWP_LOCK;
    using GPIO_DISP2_HIGH_RANGE = GPR69_fields_::GPIO_DISP2_HIGH_RANGE;
    using GPIO_DISP2_LOW_RANGE = GPR69_fields_::GPIO_DISP2_LOW_RANGE;
    using GPIO_AD0_HIGH_RANGE = GPR69_fields_::GPIO_AD0_HIGH_RANGE;
    using GPIO_AD0_LOW_RANGE = GPR69_fields_::GPIO_AD0_LOW_RANGE;
    using GPIO_AD1_HIGH_RANGE = GPR69_fields_::GPIO_AD1_HIGH_RANGE;
    using GPIO_AD1_LOW_RANGE = GPR69_fields_::GPIO_AD1_LOW_RANGE;
    using SUPLYDET_DISP1_SLEEP = GPR69_fields_::SUPLYDET_DISP1_SLEEP;
    using SUPLYDET_EMC1_SLEEP = GPR69_fields_::SUPLYDET_EMC1_SLEEP;
    using SUPLYDET_EMC2_SLEEP = GPR69_fields_::SUPLYDET_EMC2_SLEEP;
    using SUPLYDET_SD1_SLEEP = GPR69_fields_::SUPLYDET_SD1_SLEEP;
    using SUPLYDET_SD2_SLEEP = GPR69_fields_::SUPLYDET_SD2_SLEEP;
    using DWP = GPR69_fields_::DWP;
    using DWP_LOCK = GPR69_fields_::DWP_LOCK;
  };

  // GPR70 General Purpose Register
  struct GPR70_fields_ {
    enum class eADC1_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eADC2_IPG_STOP_MODE : std::uint32_t {
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

    // ADC1 doze mode
    using ADC1_IPG_DOZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC1 stop request
    using ADC1_STOP_REQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC1 stop mode selection, cannot change when ADC1_STOP_REQ is asserted.
    using ADC1_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eADC1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC2 doze mode
    using ADC2_IPG_DOZE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC2 stop request
    using ADC2_STOP_REQ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC2 stop mode selection, cannot change when ADC2_STOP_REQ is asserted.
    using ADC2_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eADC2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN3 doze mode
    using CAAM_IPG_DOZE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAAM stop request
    using CAAM_STOP_REQ = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN1 doze mode
    using CAN1_IPG_DOZE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN1 stop request
    using CAN1_STOP_REQ = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN2 doze mode
    using CAN2_IPG_DOZE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN2 stop request
    using CAN2_STOP_REQ = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN3 doze mode
    using CAN3_IPG_DOZE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // CAN3 stop request
    using CAN3_STOP_REQ = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // EDMA stop request
    using EDMA_STOP_REQ = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // EDMA_LPSR stop request
    using EDMA_LPSR_STOP_REQ = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET doze mode
    using ENET_IPG_DOZE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET stop request
    using ENET_STOP_REQ = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G doze mode
    using ENET1G_IPG_DOZE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // ENET1G stop request
    using ENET1G_STOP_REQ = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO2 doze mode
    using FLEXIO1_IPG_DOZE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO2 doze mode
    using FLEXIO2_IPG_DOZE = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXSPI1 doze mode
    using FLEXSPI1_IPG_DOZE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXSPI1 stop request
    using FLEXSPI1_STOP_REQ = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXSPI2 doze mode
    using FLEXSPI2_IPG_DOZE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXSPI2 stop request
    using FLEXSPI2_STOP_REQ = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR70_fields_

  struct GPR70 : ftl::mmio::Register<
      0x400E4118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR70_fields_::ADC1_IPG_DOZE,
      GPR70_fields_::ADC1_STOP_REQ,
      GPR70_fields_::ADC1_IPG_STOP_MODE,
      GPR70_fields_::ADC2_IPG_DOZE,
      GPR70_fields_::ADC2_STOP_REQ,
      GPR70_fields_::ADC2_IPG_STOP_MODE,
      GPR70_fields_::CAAM_IPG_DOZE,
      GPR70_fields_::CAAM_STOP_REQ,
      GPR70_fields_::CAN1_IPG_DOZE,
      GPR70_fields_::CAN1_STOP_REQ,
      GPR70_fields_::CAN2_IPG_DOZE,
      GPR70_fields_::CAN2_STOP_REQ,
      GPR70_fields_::CAN3_IPG_DOZE,
      GPR70_fields_::CAN3_STOP_REQ,
      ftl::mmio::Reserved<1, 14>,
      GPR70_fields_::EDMA_STOP_REQ,
      GPR70_fields_::EDMA_LPSR_STOP_REQ,
      GPR70_fields_::ENET_IPG_DOZE,
      GPR70_fields_::ENET_STOP_REQ,
      GPR70_fields_::ENET1G_IPG_DOZE,
      GPR70_fields_::ENET1G_STOP_REQ,
      GPR70_fields_::FLEXIO1_IPG_DOZE,
      GPR70_fields_::FLEXIO2_IPG_DOZE,
      GPR70_fields_::FLEXSPI1_IPG_DOZE,
      GPR70_fields_::FLEXSPI1_STOP_REQ,
      GPR70_fields_::FLEXSPI2_IPG_DOZE,
      GPR70_fields_::FLEXSPI2_STOP_REQ,
      ftl::mmio::Reserved<1, 27>,
      GPR70_fields_::DWP,
      GPR70_fields_::DWP_LOCK> {
    using eADC1_IPG_STOP_MODE = GPR70_fields_::eADC1_IPG_STOP_MODE;
    using eADC2_IPG_STOP_MODE = GPR70_fields_::eADC2_IPG_STOP_MODE;
    using eDWP = GPR70_fields_::eDWP;
    using eDWP_LOCK = GPR70_fields_::eDWP_LOCK;
    using ADC1_IPG_DOZE = GPR70_fields_::ADC1_IPG_DOZE;
    using ADC1_STOP_REQ = GPR70_fields_::ADC1_STOP_REQ;
    using ADC1_IPG_STOP_MODE = GPR70_fields_::ADC1_IPG_STOP_MODE;
    using ADC2_IPG_DOZE = GPR70_fields_::ADC2_IPG_DOZE;
    using ADC2_STOP_REQ = GPR70_fields_::ADC2_STOP_REQ;
    using ADC2_IPG_STOP_MODE = GPR70_fields_::ADC2_IPG_STOP_MODE;
    using CAAM_IPG_DOZE = GPR70_fields_::CAAM_IPG_DOZE;
    using CAAM_STOP_REQ = GPR70_fields_::CAAM_STOP_REQ;
    using CAN1_IPG_DOZE = GPR70_fields_::CAN1_IPG_DOZE;
    using CAN1_STOP_REQ = GPR70_fields_::CAN1_STOP_REQ;
    using CAN2_IPG_DOZE = GPR70_fields_::CAN2_IPG_DOZE;
    using CAN2_STOP_REQ = GPR70_fields_::CAN2_STOP_REQ;
    using CAN3_IPG_DOZE = GPR70_fields_::CAN3_IPG_DOZE;
    using CAN3_STOP_REQ = GPR70_fields_::CAN3_STOP_REQ;
    using EDMA_STOP_REQ = GPR70_fields_::EDMA_STOP_REQ;
    using EDMA_LPSR_STOP_REQ = GPR70_fields_::EDMA_LPSR_STOP_REQ;
    using ENET_IPG_DOZE = GPR70_fields_::ENET_IPG_DOZE;
    using ENET_STOP_REQ = GPR70_fields_::ENET_STOP_REQ;
    using ENET1G_IPG_DOZE = GPR70_fields_::ENET1G_IPG_DOZE;
    using ENET1G_STOP_REQ = GPR70_fields_::ENET1G_STOP_REQ;
    using FLEXIO1_IPG_DOZE = GPR70_fields_::FLEXIO1_IPG_DOZE;
    using FLEXIO2_IPG_DOZE = GPR70_fields_::FLEXIO2_IPG_DOZE;
    using FLEXSPI1_IPG_DOZE = GPR70_fields_::FLEXSPI1_IPG_DOZE;
    using FLEXSPI1_STOP_REQ = GPR70_fields_::FLEXSPI1_STOP_REQ;
    using FLEXSPI2_IPG_DOZE = GPR70_fields_::FLEXSPI2_IPG_DOZE;
    using FLEXSPI2_STOP_REQ = GPR70_fields_::FLEXSPI2_STOP_REQ;
    using DWP = GPR70_fields_::DWP;
    using DWP_LOCK = GPR70_fields_::DWP_LOCK;
  };

  // GPR71 General Purpose Register
  struct GPR71_fields_ {
    enum class eLPI2C1_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPI2C2_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPI2C3_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPI2C4_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPI2C5_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPI2C6_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
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
    using GPT1_IPG_DOZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT2 doze mode
    using GPT2_IPG_DOZE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT3 doze mode
    using GPT3_IPG_DOZE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT4 doze mode
    using GPT4_IPG_DOZE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT5 doze mode
    using GPT5_IPG_DOZE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // GPT6 doze mode
    using GPT6_IPG_DOZE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C1 doze mode
    using LPI2C1_IPG_DOZE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C1 stop request
    using LPI2C1_STOP_REQ = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C1 stop mode selection, cannot change when LPI2C1_STOP_REQ is asserted.
    using LPI2C1_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPI2C1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C2 doze mode
    using LPI2C2_IPG_DOZE = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C2 stop request
    using LPI2C2_STOP_REQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C2 stop mode selection, cannot change when LPI2C2_STOP_REQ is asserted.
    using LPI2C2_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPI2C2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C3 doze mode
    using LPI2C3_IPG_DOZE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C3 stop request
    using LPI2C3_STOP_REQ = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C3 stop mode selection, cannot change when LPI2C3_STOP_REQ is asserted.
    using LPI2C3_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPI2C3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C4 doze mode
    using LPI2C4_IPG_DOZE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C4 stop request
    using LPI2C4_STOP_REQ = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C4 stop mode selection, cannot change when LPI2C4_STOP_REQ is asserted.
    using LPI2C4_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPI2C4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C5 doze mode
    using LPI2C5_IPG_DOZE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C5 stop request
    using LPI2C5_STOP_REQ = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C5 stop mode selection, cannot change when LPI2C5_STOP_REQ is asserted.
    using LPI2C5_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPI2C5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C6 doze mode
    using LPI2C6_IPG_DOZE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C6 stop request
    using LPI2C6_STOP_REQ = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPI2C6 stop mode selection, cannot change when LPI2C6_STOP_REQ is asserted.
    using LPI2C6_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPI2C6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI1 doze mode
    using LPSPI1_IPG_DOZE = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI1 stop request
    using LPSPI1_STOP_REQ = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI1 stop mode selection, cannot change when LPSPI1_STOP_REQ is asserted.
    using LPSPI1_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eLPSPI1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR71_fields_

  struct GPR71 : ftl::mmio::Register<
      0x400E411Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR71_fields_::GPT1_IPG_DOZE,
      GPR71_fields_::GPT2_IPG_DOZE,
      GPR71_fields_::GPT3_IPG_DOZE,
      GPR71_fields_::GPT4_IPG_DOZE,
      GPR71_fields_::GPT5_IPG_DOZE,
      GPR71_fields_::GPT6_IPG_DOZE,
      GPR71_fields_::LPI2C1_IPG_DOZE,
      GPR71_fields_::LPI2C1_STOP_REQ,
      GPR71_fields_::LPI2C1_IPG_STOP_MODE,
      GPR71_fields_::LPI2C2_IPG_DOZE,
      GPR71_fields_::LPI2C2_STOP_REQ,
      GPR71_fields_::LPI2C2_IPG_STOP_MODE,
      GPR71_fields_::LPI2C3_IPG_DOZE,
      GPR71_fields_::LPI2C3_STOP_REQ,
      GPR71_fields_::LPI2C3_IPG_STOP_MODE,
      GPR71_fields_::LPI2C4_IPG_DOZE,
      GPR71_fields_::LPI2C4_STOP_REQ,
      GPR71_fields_::LPI2C4_IPG_STOP_MODE,
      GPR71_fields_::LPI2C5_IPG_DOZE,
      GPR71_fields_::LPI2C5_STOP_REQ,
      GPR71_fields_::LPI2C5_IPG_STOP_MODE,
      GPR71_fields_::LPI2C6_IPG_DOZE,
      GPR71_fields_::LPI2C6_STOP_REQ,
      GPR71_fields_::LPI2C6_IPG_STOP_MODE,
      GPR71_fields_::LPSPI1_IPG_DOZE,
      GPR71_fields_::LPSPI1_STOP_REQ,
      GPR71_fields_::LPSPI1_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      GPR71_fields_::DWP,
      GPR71_fields_::DWP_LOCK> {
    using eLPI2C1_IPG_STOP_MODE = GPR71_fields_::eLPI2C1_IPG_STOP_MODE;
    using eLPI2C2_IPG_STOP_MODE = GPR71_fields_::eLPI2C2_IPG_STOP_MODE;
    using eLPI2C3_IPG_STOP_MODE = GPR71_fields_::eLPI2C3_IPG_STOP_MODE;
    using eLPI2C4_IPG_STOP_MODE = GPR71_fields_::eLPI2C4_IPG_STOP_MODE;
    using eLPI2C5_IPG_STOP_MODE = GPR71_fields_::eLPI2C5_IPG_STOP_MODE;
    using eLPI2C6_IPG_STOP_MODE = GPR71_fields_::eLPI2C6_IPG_STOP_MODE;
    using eLPSPI1_IPG_STOP_MODE = GPR71_fields_::eLPSPI1_IPG_STOP_MODE;
    using eDWP = GPR71_fields_::eDWP;
    using eDWP_LOCK = GPR71_fields_::eDWP_LOCK;
    using GPT1_IPG_DOZE = GPR71_fields_::GPT1_IPG_DOZE;
    using GPT2_IPG_DOZE = GPR71_fields_::GPT2_IPG_DOZE;
    using GPT3_IPG_DOZE = GPR71_fields_::GPT3_IPG_DOZE;
    using GPT4_IPG_DOZE = GPR71_fields_::GPT4_IPG_DOZE;
    using GPT5_IPG_DOZE = GPR71_fields_::GPT5_IPG_DOZE;
    using GPT6_IPG_DOZE = GPR71_fields_::GPT6_IPG_DOZE;
    using LPI2C1_IPG_DOZE = GPR71_fields_::LPI2C1_IPG_DOZE;
    using LPI2C1_STOP_REQ = GPR71_fields_::LPI2C1_STOP_REQ;
    using LPI2C1_IPG_STOP_MODE = GPR71_fields_::LPI2C1_IPG_STOP_MODE;
    using LPI2C2_IPG_DOZE = GPR71_fields_::LPI2C2_IPG_DOZE;
    using LPI2C2_STOP_REQ = GPR71_fields_::LPI2C2_STOP_REQ;
    using LPI2C2_IPG_STOP_MODE = GPR71_fields_::LPI2C2_IPG_STOP_MODE;
    using LPI2C3_IPG_DOZE = GPR71_fields_::LPI2C3_IPG_DOZE;
    using LPI2C3_STOP_REQ = GPR71_fields_::LPI2C3_STOP_REQ;
    using LPI2C3_IPG_STOP_MODE = GPR71_fields_::LPI2C3_IPG_STOP_MODE;
    using LPI2C4_IPG_DOZE = GPR71_fields_::LPI2C4_IPG_DOZE;
    using LPI2C4_STOP_REQ = GPR71_fields_::LPI2C4_STOP_REQ;
    using LPI2C4_IPG_STOP_MODE = GPR71_fields_::LPI2C4_IPG_STOP_MODE;
    using LPI2C5_IPG_DOZE = GPR71_fields_::LPI2C5_IPG_DOZE;
    using LPI2C5_STOP_REQ = GPR71_fields_::LPI2C5_STOP_REQ;
    using LPI2C5_IPG_STOP_MODE = GPR71_fields_::LPI2C5_IPG_STOP_MODE;
    using LPI2C6_IPG_DOZE = GPR71_fields_::LPI2C6_IPG_DOZE;
    using LPI2C6_STOP_REQ = GPR71_fields_::LPI2C6_STOP_REQ;
    using LPI2C6_IPG_STOP_MODE = GPR71_fields_::LPI2C6_IPG_STOP_MODE;
    using LPSPI1_IPG_DOZE = GPR71_fields_::LPSPI1_IPG_DOZE;
    using LPSPI1_STOP_REQ = GPR71_fields_::LPSPI1_STOP_REQ;
    using LPSPI1_IPG_STOP_MODE = GPR71_fields_::LPSPI1_IPG_STOP_MODE;
    using DWP = GPR71_fields_::DWP;
    using DWP_LOCK = GPR71_fields_::DWP_LOCK;
  };

  // GPR72 General Purpose Register
  struct GPR72_fields_ {
    enum class eLPSPI2_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPSPI3_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPSPI4_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPSPI5_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPSPI6_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART1_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART2_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART3_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
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
    using LPSPI2_IPG_DOZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI2 stop request
    using LPSPI2_STOP_REQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI2 stop mode selection, cannot change when LPSPI2_STOP_REQ is asserted.
    using LPSPI2_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eLPSPI2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI3 doze mode
    using LPSPI3_IPG_DOZE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI3 stop request
    using LPSPI3_STOP_REQ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI3 stop mode selection, cannot change when LPSPI3_STOP_REQ is asserted.
    using LPSPI3_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eLPSPI3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI4 doze mode
    using LPSPI4_IPG_DOZE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI4 stop request
    using LPSPI4_STOP_REQ = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI4 stop mode selection, cannot change when LPSPI4_STOP_REQ is asserted.
    using LPSPI4_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPSPI4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI5 doze mode
    using LPSPI5_IPG_DOZE = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI5 stop request
    using LPSPI5_STOP_REQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI5 stop mode selection, cannot change when LPSPI5_STOP_REQ is asserted.
    using LPSPI5_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPSPI5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI6 doze mode
    using LPSPI6_IPG_DOZE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI6 stop request
    using LPSPI6_STOP_REQ = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPSPI6 stop mode selection, cannot change when LPSPI6_STOP_REQ is asserted.
    using LPSPI6_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPSPI6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART1 doze mode
    using LPUART1_IPG_DOZE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART1 stop request
    using LPUART1_STOP_REQ = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART1 stop mode selection, cannot change when LPUART1_STOP_REQ is asserted.
    using LPUART1_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPUART1_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART2 doze mode
    using LPUART2_IPG_DOZE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART2 stop request
    using LPUART2_STOP_REQ = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART2 stop mode selection, cannot change when LPUART2_STOP_REQ is asserted.
    using LPUART2_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPUART2_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART3 doze mode
    using LPUART3_IPG_DOZE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART3 stop request
    using LPUART3_STOP_REQ = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART3 stop mode selection, cannot change when LPUART3_STOP_REQ is asserted.
    using LPUART3_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPUART3_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART4 doze mode
    using LPUART4_IPG_DOZE = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART4 stop request
    using LPUART4_STOP_REQ = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART4 stop mode selection, cannot change when LPUART4_STOP_REQ is asserted.
    using LPUART4_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eLPUART4_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR72_fields_

  struct GPR72 : ftl::mmio::Register<
      0x400E4120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR72_fields_::LPSPI2_IPG_DOZE,
      GPR72_fields_::LPSPI2_STOP_REQ,
      GPR72_fields_::LPSPI2_IPG_STOP_MODE,
      GPR72_fields_::LPSPI3_IPG_DOZE,
      GPR72_fields_::LPSPI3_STOP_REQ,
      GPR72_fields_::LPSPI3_IPG_STOP_MODE,
      GPR72_fields_::LPSPI4_IPG_DOZE,
      GPR72_fields_::LPSPI4_STOP_REQ,
      GPR72_fields_::LPSPI4_IPG_STOP_MODE,
      GPR72_fields_::LPSPI5_IPG_DOZE,
      GPR72_fields_::LPSPI5_STOP_REQ,
      GPR72_fields_::LPSPI5_IPG_STOP_MODE,
      GPR72_fields_::LPSPI6_IPG_DOZE,
      GPR72_fields_::LPSPI6_STOP_REQ,
      GPR72_fields_::LPSPI6_IPG_STOP_MODE,
      GPR72_fields_::LPUART1_IPG_DOZE,
      GPR72_fields_::LPUART1_STOP_REQ,
      GPR72_fields_::LPUART1_IPG_STOP_MODE,
      GPR72_fields_::LPUART2_IPG_DOZE,
      GPR72_fields_::LPUART2_STOP_REQ,
      GPR72_fields_::LPUART2_IPG_STOP_MODE,
      GPR72_fields_::LPUART3_IPG_DOZE,
      GPR72_fields_::LPUART3_STOP_REQ,
      GPR72_fields_::LPUART3_IPG_STOP_MODE,
      GPR72_fields_::LPUART4_IPG_DOZE,
      GPR72_fields_::LPUART4_STOP_REQ,
      GPR72_fields_::LPUART4_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      GPR72_fields_::DWP,
      GPR72_fields_::DWP_LOCK> {
    using eLPSPI2_IPG_STOP_MODE = GPR72_fields_::eLPSPI2_IPG_STOP_MODE;
    using eLPSPI3_IPG_STOP_MODE = GPR72_fields_::eLPSPI3_IPG_STOP_MODE;
    using eLPSPI4_IPG_STOP_MODE = GPR72_fields_::eLPSPI4_IPG_STOP_MODE;
    using eLPSPI5_IPG_STOP_MODE = GPR72_fields_::eLPSPI5_IPG_STOP_MODE;
    using eLPSPI6_IPG_STOP_MODE = GPR72_fields_::eLPSPI6_IPG_STOP_MODE;
    using eLPUART1_IPG_STOP_MODE = GPR72_fields_::eLPUART1_IPG_STOP_MODE;
    using eLPUART2_IPG_STOP_MODE = GPR72_fields_::eLPUART2_IPG_STOP_MODE;
    using eLPUART3_IPG_STOP_MODE = GPR72_fields_::eLPUART3_IPG_STOP_MODE;
    using eLPUART4_IPG_STOP_MODE = GPR72_fields_::eLPUART4_IPG_STOP_MODE;
    using eDWP = GPR72_fields_::eDWP;
    using eDWP_LOCK = GPR72_fields_::eDWP_LOCK;
    using LPSPI2_IPG_DOZE = GPR72_fields_::LPSPI2_IPG_DOZE;
    using LPSPI2_STOP_REQ = GPR72_fields_::LPSPI2_STOP_REQ;
    using LPSPI2_IPG_STOP_MODE = GPR72_fields_::LPSPI2_IPG_STOP_MODE;
    using LPSPI3_IPG_DOZE = GPR72_fields_::LPSPI3_IPG_DOZE;
    using LPSPI3_STOP_REQ = GPR72_fields_::LPSPI3_STOP_REQ;
    using LPSPI3_IPG_STOP_MODE = GPR72_fields_::LPSPI3_IPG_STOP_MODE;
    using LPSPI4_IPG_DOZE = GPR72_fields_::LPSPI4_IPG_DOZE;
    using LPSPI4_STOP_REQ = GPR72_fields_::LPSPI4_STOP_REQ;
    using LPSPI4_IPG_STOP_MODE = GPR72_fields_::LPSPI4_IPG_STOP_MODE;
    using LPSPI5_IPG_DOZE = GPR72_fields_::LPSPI5_IPG_DOZE;
    using LPSPI5_STOP_REQ = GPR72_fields_::LPSPI5_STOP_REQ;
    using LPSPI5_IPG_STOP_MODE = GPR72_fields_::LPSPI5_IPG_STOP_MODE;
    using LPSPI6_IPG_DOZE = GPR72_fields_::LPSPI6_IPG_DOZE;
    using LPSPI6_STOP_REQ = GPR72_fields_::LPSPI6_STOP_REQ;
    using LPSPI6_IPG_STOP_MODE = GPR72_fields_::LPSPI6_IPG_STOP_MODE;
    using LPUART1_IPG_DOZE = GPR72_fields_::LPUART1_IPG_DOZE;
    using LPUART1_STOP_REQ = GPR72_fields_::LPUART1_STOP_REQ;
    using LPUART1_IPG_STOP_MODE = GPR72_fields_::LPUART1_IPG_STOP_MODE;
    using LPUART2_IPG_DOZE = GPR72_fields_::LPUART2_IPG_DOZE;
    using LPUART2_STOP_REQ = GPR72_fields_::LPUART2_STOP_REQ;
    using LPUART2_IPG_STOP_MODE = GPR72_fields_::LPUART2_IPG_STOP_MODE;
    using LPUART3_IPG_DOZE = GPR72_fields_::LPUART3_IPG_DOZE;
    using LPUART3_STOP_REQ = GPR72_fields_::LPUART3_STOP_REQ;
    using LPUART3_IPG_STOP_MODE = GPR72_fields_::LPUART3_IPG_STOP_MODE;
    using LPUART4_IPG_DOZE = GPR72_fields_::LPUART4_IPG_DOZE;
    using LPUART4_STOP_REQ = GPR72_fields_::LPUART4_STOP_REQ;
    using LPUART4_IPG_STOP_MODE = GPR72_fields_::LPUART4_IPG_STOP_MODE;
    using DWP = GPR72_fields_::DWP;
    using DWP_LOCK = GPR72_fields_::DWP_LOCK;
  };

  // GPR73 General Purpose Register
  struct GPR73_fields_ {
    enum class eLPUART5_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART6_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART7_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART8_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART9_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART10_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART11_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
    };

    enum class eLPUART12_IPG_STOP_MODE : std::uint32_t {
      // This module is functional in Stop Mode
      eFUNC = 0,
      // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
      eNONFUNC = 1,
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
    using LPUART5_IPG_DOZE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART5 stop request
    using LPUART5_STOP_REQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART5 stop mode selection, cannot change when LPUART5_STOP_REQ is asserted.
    using LPUART5_IPG_STOP_MODE = ftl::mmio::Field<1, 2, eLPUART5_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART6 doze mode
    using LPUART6_IPG_DOZE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART6 stop request
    using LPUART6_STOP_REQ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART6 stop mode selection, cannot change when LPUART6_STOP_REQ is asserted.
    using LPUART6_IPG_STOP_MODE = ftl::mmio::Field<1, 5, eLPUART6_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART7 doze mode
    using LPUART7_IPG_DOZE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART7 stop request
    using LPUART7_STOP_REQ = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART7 stop mode selection, cannot change when LPUART7_STOP_REQ is asserted.
    using LPUART7_IPG_STOP_MODE = ftl::mmio::Field<1, 8, eLPUART7_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART8 doze mode
    using LPUART8_IPG_DOZE = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART8 stop request
    using LPUART8_STOP_REQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART8 stop mode selection, cannot change when LPUART8_STOP_REQ is asserted.
    using LPUART8_IPG_STOP_MODE = ftl::mmio::Field<1, 11, eLPUART8_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART9 doze mode
    using LPUART9_IPG_DOZE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART9 stop request
    using LPUART9_STOP_REQ = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART9 stop mode selection, cannot change when LPUART9_STOP_REQ is asserted.
    using LPUART9_IPG_STOP_MODE = ftl::mmio::Field<1, 14, eLPUART9_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART10 doze mode
    using LPUART10_IPG_DOZE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART10 stop request
    using LPUART10_STOP_REQ = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART10 stop mode selection, cannot change when LPUART10_STOP_REQ is asserted.
    using LPUART10_IPG_STOP_MODE = ftl::mmio::Field<1, 17, eLPUART10_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART11 doze mode
    using LPUART11_IPG_DOZE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART11 stop request
    using LPUART11_STOP_REQ = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART11 stop mode selection, cannot change when LPUART11_STOP_REQ is asserted.
    using LPUART11_IPG_STOP_MODE = ftl::mmio::Field<1, 20, eLPUART11_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART12 doze mode
    using LPUART12_IPG_DOZE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART12 stop request
    using LPUART12_STOP_REQ = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // LPUART12 stop mode selection, cannot change when LPUART12_STOP_REQ is asserted.
    using LPUART12_IPG_STOP_MODE = ftl::mmio::Field<1, 23, eLPUART12_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIC doze mode
    using MIC_IPG_DOZE = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIC stop request
    using MIC_STOP_REQ = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // MIC stop mode selection, cannot change when MIC_STOP_REQ is asserted.
    using MIC_IPG_STOP_MODE = ftl::mmio::Field<1, 26, eMIC_IPG_STOP_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR73_fields_

  struct GPR73 : ftl::mmio::Register<
      0x400E4124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      GPR73_fields_::LPUART5_IPG_DOZE,
      GPR73_fields_::LPUART5_STOP_REQ,
      GPR73_fields_::LPUART5_IPG_STOP_MODE,
      GPR73_fields_::LPUART6_IPG_DOZE,
      GPR73_fields_::LPUART6_STOP_REQ,
      GPR73_fields_::LPUART6_IPG_STOP_MODE,
      GPR73_fields_::LPUART7_IPG_DOZE,
      GPR73_fields_::LPUART7_STOP_REQ,
      GPR73_fields_::LPUART7_IPG_STOP_MODE,
      GPR73_fields_::LPUART8_IPG_DOZE,
      GPR73_fields_::LPUART8_STOP_REQ,
      GPR73_fields_::LPUART8_IPG_STOP_MODE,
      GPR73_fields_::LPUART9_IPG_DOZE,
      GPR73_fields_::LPUART9_STOP_REQ,
      GPR73_fields_::LPUART9_IPG_STOP_MODE,
      GPR73_fields_::LPUART10_IPG_DOZE,
      GPR73_fields_::LPUART10_STOP_REQ,
      GPR73_fields_::LPUART10_IPG_STOP_MODE,
      GPR73_fields_::LPUART11_IPG_DOZE,
      GPR73_fields_::LPUART11_STOP_REQ,
      GPR73_fields_::LPUART11_IPG_STOP_MODE,
      GPR73_fields_::LPUART12_IPG_DOZE,
      GPR73_fields_::LPUART12_STOP_REQ,
      GPR73_fields_::LPUART12_IPG_STOP_MODE,
      GPR73_fields_::MIC_IPG_DOZE,
      GPR73_fields_::MIC_STOP_REQ,
      GPR73_fields_::MIC_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      GPR73_fields_::DWP,
      GPR73_fields_::DWP_LOCK> {
    using eLPUART5_IPG_STOP_MODE = GPR73_fields_::eLPUART5_IPG_STOP_MODE;
    using eLPUART6_IPG_STOP_MODE = GPR73_fields_::eLPUART6_IPG_STOP_MODE;
    using eLPUART7_IPG_STOP_MODE = GPR73_fields_::eLPUART7_IPG_STOP_MODE;
    using eLPUART8_IPG_STOP_MODE = GPR73_fields_::eLPUART8_IPG_STOP_MODE;
    using eLPUART9_IPG_STOP_MODE = GPR73_fields_::eLPUART9_IPG_STOP_MODE;
    using eLPUART10_IPG_STOP_MODE = GPR73_fields_::eLPUART10_IPG_STOP_MODE;
    using eLPUART11_IPG_STOP_MODE = GPR73_fields_::eLPUART11_IPG_STOP_MODE;
    using eLPUART12_IPG_STOP_MODE = GPR73_fields_::eLPUART12_IPG_STOP_MODE;
    using eMIC_IPG_STOP_MODE = GPR73_fields_::eMIC_IPG_STOP_MODE;
    using eDWP = GPR73_fields_::eDWP;
    using eDWP_LOCK = GPR73_fields_::eDWP_LOCK;
    using LPUART5_IPG_DOZE = GPR73_fields_::LPUART5_IPG_DOZE;
    using LPUART5_STOP_REQ = GPR73_fields_::LPUART5_STOP_REQ;
    using LPUART5_IPG_STOP_MODE = GPR73_fields_::LPUART5_IPG_STOP_MODE;
    using LPUART6_IPG_DOZE = GPR73_fields_::LPUART6_IPG_DOZE;
    using LPUART6_STOP_REQ = GPR73_fields_::LPUART6_STOP_REQ;
    using LPUART6_IPG_STOP_MODE = GPR73_fields_::LPUART6_IPG_STOP_MODE;
    using LPUART7_IPG_DOZE = GPR73_fields_::LPUART7_IPG_DOZE;
    using LPUART7_STOP_REQ = GPR73_fields_::LPUART7_STOP_REQ;
    using LPUART7_IPG_STOP_MODE = GPR73_fields_::LPUART7_IPG_STOP_MODE;
    using LPUART8_IPG_DOZE = GPR73_fields_::LPUART8_IPG_DOZE;
    using LPUART8_STOP_REQ = GPR73_fields_::LPUART8_STOP_REQ;
    using LPUART8_IPG_STOP_MODE = GPR73_fields_::LPUART8_IPG_STOP_MODE;
    using LPUART9_IPG_DOZE = GPR73_fields_::LPUART9_IPG_DOZE;
    using LPUART9_STOP_REQ = GPR73_fields_::LPUART9_STOP_REQ;
    using LPUART9_IPG_STOP_MODE = GPR73_fields_::LPUART9_IPG_STOP_MODE;
    using LPUART10_IPG_DOZE = GPR73_fields_::LPUART10_IPG_DOZE;
    using LPUART10_STOP_REQ = GPR73_fields_::LPUART10_STOP_REQ;
    using LPUART10_IPG_STOP_MODE = GPR73_fields_::LPUART10_IPG_STOP_MODE;
    using LPUART11_IPG_DOZE = GPR73_fields_::LPUART11_IPG_DOZE;
    using LPUART11_STOP_REQ = GPR73_fields_::LPUART11_STOP_REQ;
    using LPUART11_IPG_STOP_MODE = GPR73_fields_::LPUART11_IPG_STOP_MODE;
    using LPUART12_IPG_DOZE = GPR73_fields_::LPUART12_IPG_DOZE;
    using LPUART12_STOP_REQ = GPR73_fields_::LPUART12_STOP_REQ;
    using LPUART12_IPG_STOP_MODE = GPR73_fields_::LPUART12_IPG_STOP_MODE;
    using MIC_IPG_DOZE = GPR73_fields_::MIC_IPG_DOZE;
    using MIC_STOP_REQ = GPR73_fields_::MIC_STOP_REQ;
    using MIC_IPG_STOP_MODE = GPR73_fields_::MIC_IPG_STOP_MODE;
    using DWP = GPR73_fields_::DWP;
    using DWP_LOCK = GPR73_fields_::DWP_LOCK;
  };

  // GPR74 General Purpose Register
  struct GPR74_fields_ {
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
    using PIT1_STOP_REQ = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PIT2 stop request
    using PIT2_STOP_REQ = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SEMC stop request
    using SEMC_STOP_REQ = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SIM1 doze mode
    using SIM1_IPG_DOZE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SIM2 doze mode
    using SIM2_IPG_DOZE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SNVS_HP doze mode
    using SNVS_HP_IPG_DOZE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SNVS_HP stop request
    using SNVS_HP_STOP_REQ = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDOG1 doze mode
    using WDOG1_IPG_DOZE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // WDOG2 doze mode
    using WDOG2_IPG_DOZE = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI1 stop request
    using SAI1_STOP_REQ = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI2 stop request
    using SAI2_STOP_REQ = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI3 stop request
    using SAI3_STOP_REQ = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI4 stop request
    using SAI4_STOP_REQ = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO1 bus clock domain stop request
    using FLEXIO1_STOP_REQ_BUS = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO1 peripheral clock domain stop request
    using FLEXIO1_STOP_REQ_PER = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO2 bus clock domain stop request
    using FLEXIO2_STOP_REQ_BUS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // FLEXIO2 peripheral clock domain stop request
    using FLEXIO2_STOP_REQ_PER = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct GPR74_fields_

  struct GPR74 : ftl::mmio::Register<
      0x400E4128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      GPR74_fields_::PIT1_STOP_REQ,
      GPR74_fields_::PIT2_STOP_REQ,
      GPR74_fields_::SEMC_STOP_REQ,
      GPR74_fields_::SIM1_IPG_DOZE,
      GPR74_fields_::SIM2_IPG_DOZE,
      GPR74_fields_::SNVS_HP_IPG_DOZE,
      GPR74_fields_::SNVS_HP_STOP_REQ,
      GPR74_fields_::WDOG1_IPG_DOZE,
      GPR74_fields_::WDOG2_IPG_DOZE,
      GPR74_fields_::SAI1_STOP_REQ,
      GPR74_fields_::SAI2_STOP_REQ,
      GPR74_fields_::SAI3_STOP_REQ,
      GPR74_fields_::SAI4_STOP_REQ,
      GPR74_fields_::FLEXIO1_STOP_REQ_BUS,
      GPR74_fields_::FLEXIO1_STOP_REQ_PER,
      GPR74_fields_::FLEXIO2_STOP_REQ_BUS,
      GPR74_fields_::FLEXIO2_STOP_REQ_PER,
      ftl::mmio::Reserved<10, 18>,
      GPR74_fields_::DWP,
      GPR74_fields_::DWP_LOCK> {
    using eDWP = GPR74_fields_::eDWP;
    using eDWP_LOCK = GPR74_fields_::eDWP_LOCK;
    using PIT1_STOP_REQ = GPR74_fields_::PIT1_STOP_REQ;
    using PIT2_STOP_REQ = GPR74_fields_::PIT2_STOP_REQ;
    using SEMC_STOP_REQ = GPR74_fields_::SEMC_STOP_REQ;
    using SIM1_IPG_DOZE = GPR74_fields_::SIM1_IPG_DOZE;
    using SIM2_IPG_DOZE = GPR74_fields_::SIM2_IPG_DOZE;
    using SNVS_HP_IPG_DOZE = GPR74_fields_::SNVS_HP_IPG_DOZE;
    using SNVS_HP_STOP_REQ = GPR74_fields_::SNVS_HP_STOP_REQ;
    using WDOG1_IPG_DOZE = GPR74_fields_::WDOG1_IPG_DOZE;
    using WDOG2_IPG_DOZE = GPR74_fields_::WDOG2_IPG_DOZE;
    using SAI1_STOP_REQ = GPR74_fields_::SAI1_STOP_REQ;
    using SAI2_STOP_REQ = GPR74_fields_::SAI2_STOP_REQ;
    using SAI3_STOP_REQ = GPR74_fields_::SAI3_STOP_REQ;
    using SAI4_STOP_REQ = GPR74_fields_::SAI4_STOP_REQ;
    using FLEXIO1_STOP_REQ_BUS = GPR74_fields_::FLEXIO1_STOP_REQ_BUS;
    using FLEXIO1_STOP_REQ_PER = GPR74_fields_::FLEXIO1_STOP_REQ_PER;
    using FLEXIO2_STOP_REQ_BUS = GPR74_fields_::FLEXIO2_STOP_REQ_BUS;
    using FLEXIO2_STOP_REQ_PER = GPR74_fields_::FLEXIO2_STOP_REQ_PER;
    using DWP = GPR74_fields_::DWP;
    using DWP_LOCK = GPR74_fields_::DWP_LOCK;
  };

  // GPR75 General Purpose Register
  struct GPR75_fields_ {
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
  };  // struct GPR75_fields_

  struct GPR75 : ftl::mmio::Register<
      0x400E412Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      GPR75_fields_::ADC1_STOP_ACK,
      GPR75_fields_::ADC2_STOP_ACK,
      GPR75_fields_::CAAM_STOP_ACK,
      GPR75_fields_::CAN1_STOP_ACK,
      GPR75_fields_::CAN2_STOP_ACK,
      GPR75_fields_::CAN3_STOP_ACK,
      GPR75_fields_::EDMA_STOP_ACK,
      GPR75_fields_::EDMA_LPSR_STOP_ACK,
      GPR75_fields_::ENET_STOP_ACK,
      GPR75_fields_::ENET1G_STOP_ACK,
      GPR75_fields_::FLEXSPI1_STOP_ACK,
      GPR75_fields_::FLEXSPI2_STOP_ACK,
      GPR75_fields_::LPI2C1_STOP_ACK,
      GPR75_fields_::LPI2C2_STOP_ACK,
      GPR75_fields_::LPI2C3_STOP_ACK,
      GPR75_fields_::LPI2C4_STOP_ACK,
      GPR75_fields_::LPI2C5_STOP_ACK,
      GPR75_fields_::LPI2C6_STOP_ACK,
      GPR75_fields_::LPSPI1_STOP_ACK,
      GPR75_fields_::LPSPI2_STOP_ACK,
      GPR75_fields_::LPSPI3_STOP_ACK,
      GPR75_fields_::LPSPI4_STOP_ACK,
      GPR75_fields_::LPSPI5_STOP_ACK,
      GPR75_fields_::LPSPI6_STOP_ACK,
      GPR75_fields_::LPUART1_STOP_ACK,
      GPR75_fields_::LPUART2_STOP_ACK,
      GPR75_fields_::LPUART3_STOP_ACK,
      GPR75_fields_::LPUART4_STOP_ACK,
      GPR75_fields_::LPUART5_STOP_ACK,
      GPR75_fields_::LPUART6_STOP_ACK,
      GPR75_fields_::LPUART7_STOP_ACK,
      GPR75_fields_::LPUART8_STOP_ACK> {
    using ADC1_STOP_ACK = GPR75_fields_::ADC1_STOP_ACK;
    using ADC2_STOP_ACK = GPR75_fields_::ADC2_STOP_ACK;
    using CAAM_STOP_ACK = GPR75_fields_::CAAM_STOP_ACK;
    using CAN1_STOP_ACK = GPR75_fields_::CAN1_STOP_ACK;
    using CAN2_STOP_ACK = GPR75_fields_::CAN2_STOP_ACK;
    using CAN3_STOP_ACK = GPR75_fields_::CAN3_STOP_ACK;
    using EDMA_STOP_ACK = GPR75_fields_::EDMA_STOP_ACK;
    using EDMA_LPSR_STOP_ACK = GPR75_fields_::EDMA_LPSR_STOP_ACK;
    using ENET_STOP_ACK = GPR75_fields_::ENET_STOP_ACK;
    using ENET1G_STOP_ACK = GPR75_fields_::ENET1G_STOP_ACK;
    using FLEXSPI1_STOP_ACK = GPR75_fields_::FLEXSPI1_STOP_ACK;
    using FLEXSPI2_STOP_ACK = GPR75_fields_::FLEXSPI2_STOP_ACK;
    using LPI2C1_STOP_ACK = GPR75_fields_::LPI2C1_STOP_ACK;
    using LPI2C2_STOP_ACK = GPR75_fields_::LPI2C2_STOP_ACK;
    using LPI2C3_STOP_ACK = GPR75_fields_::LPI2C3_STOP_ACK;
    using LPI2C4_STOP_ACK = GPR75_fields_::LPI2C4_STOP_ACK;
    using LPI2C5_STOP_ACK = GPR75_fields_::LPI2C5_STOP_ACK;
    using LPI2C6_STOP_ACK = GPR75_fields_::LPI2C6_STOP_ACK;
    using LPSPI1_STOP_ACK = GPR75_fields_::LPSPI1_STOP_ACK;
    using LPSPI2_STOP_ACK = GPR75_fields_::LPSPI2_STOP_ACK;
    using LPSPI3_STOP_ACK = GPR75_fields_::LPSPI3_STOP_ACK;
    using LPSPI4_STOP_ACK = GPR75_fields_::LPSPI4_STOP_ACK;
    using LPSPI5_STOP_ACK = GPR75_fields_::LPSPI5_STOP_ACK;
    using LPSPI6_STOP_ACK = GPR75_fields_::LPSPI6_STOP_ACK;
    using LPUART1_STOP_ACK = GPR75_fields_::LPUART1_STOP_ACK;
    using LPUART2_STOP_ACK = GPR75_fields_::LPUART2_STOP_ACK;
    using LPUART3_STOP_ACK = GPR75_fields_::LPUART3_STOP_ACK;
    using LPUART4_STOP_ACK = GPR75_fields_::LPUART4_STOP_ACK;
    using LPUART5_STOP_ACK = GPR75_fields_::LPUART5_STOP_ACK;
    using LPUART6_STOP_ACK = GPR75_fields_::LPUART6_STOP_ACK;
    using LPUART7_STOP_ACK = GPR75_fields_::LPUART7_STOP_ACK;
    using LPUART8_STOP_ACK = GPR75_fields_::LPUART8_STOP_ACK;
  };

  // GPR76 General Purpose Register
  struct GPR76_fields_ {
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
  };  // struct GPR76_fields_

  struct GPR76 : ftl::mmio::Register<
      0x400E4130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      GPR76_fields_::LPUART9_STOP_ACK,
      GPR76_fields_::LPUART10_STOP_ACK,
      GPR76_fields_::LPUART11_STOP_ACK,
      GPR76_fields_::LPUART12_STOP_ACK,
      GPR76_fields_::MIC_STOP_ACK,
      GPR76_fields_::PIT1_STOP_ACK,
      GPR76_fields_::PIT2_STOP_ACK,
      GPR76_fields_::SEMC_STOP_ACK,
      GPR76_fields_::SNVS_HP_STOP_ACK,
      GPR76_fields_::SAI1_STOP_ACK,
      GPR76_fields_::SAI2_STOP_ACK,
      GPR76_fields_::SAI3_STOP_ACK,
      GPR76_fields_::SAI4_STOP_ACK,
      GPR76_fields_::FLEXIO1_STOP_ACK_BUS,
      GPR76_fields_::FLEXIO1_STOP_ACK_PER,
      GPR76_fields_::FLEXIO2_STOP_ACK_BUS,
      GPR76_fields_::FLEXIO2_STOP_ACK_PER,
      ftl::mmio::Reserved<15, 17>> {
    using LPUART9_STOP_ACK = GPR76_fields_::LPUART9_STOP_ACK;
    using LPUART10_STOP_ACK = GPR76_fields_::LPUART10_STOP_ACK;
    using LPUART11_STOP_ACK = GPR76_fields_::LPUART11_STOP_ACK;
    using LPUART12_STOP_ACK = GPR76_fields_::LPUART12_STOP_ACK;
    using MIC_STOP_ACK = GPR76_fields_::MIC_STOP_ACK;
    using PIT1_STOP_ACK = GPR76_fields_::PIT1_STOP_ACK;
    using PIT2_STOP_ACK = GPR76_fields_::PIT2_STOP_ACK;
    using SEMC_STOP_ACK = GPR76_fields_::SEMC_STOP_ACK;
    using SNVS_HP_STOP_ACK = GPR76_fields_::SNVS_HP_STOP_ACK;
    using SAI1_STOP_ACK = GPR76_fields_::SAI1_STOP_ACK;
    using SAI2_STOP_ACK = GPR76_fields_::SAI2_STOP_ACK;
    using SAI3_STOP_ACK = GPR76_fields_::SAI3_STOP_ACK;
    using SAI4_STOP_ACK = GPR76_fields_::SAI4_STOP_ACK;
    using FLEXIO1_STOP_ACK_BUS = GPR76_fields_::FLEXIO1_STOP_ACK_BUS;
    using FLEXIO1_STOP_ACK_PER = GPR76_fields_::FLEXIO1_STOP_ACK_PER;
    using FLEXIO2_STOP_ACK_BUS = GPR76_fields_::FLEXIO2_STOP_ACK_BUS;
    using FLEXIO2_STOP_ACK_PER = GPR76_fields_::FLEXIO2_STOP_ACK_PER;
  };

};

}  // namespace regs