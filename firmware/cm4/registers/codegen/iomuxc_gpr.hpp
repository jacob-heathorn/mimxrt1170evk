#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcGpr {
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
  };  // struct Gpr0Fields

  struct GPR0 : ftl::mmio::Register<
      0x400E4000u,
      std::uint32_t,
      0x00000018u,
      ftl::mmio::RW,
      Gpr0Fields::SAI1_MCLK1_SEL,
      Gpr0Fields::SAI1_MCLK2_SEL,
      Gpr0Fields::SAI1_MCLK3_SEL,
      Gpr0Fields::SAI1_MCLK_DIR,
      ftl::mmio::Reserved<19, 9>,
      Gpr0Fields::DWP,
      Gpr0Fields::DWP_LOCK> {
    using eDWP = Gpr0Fields::eDWP;
    using eDWP_LOCK = Gpr0Fields::eDWP_LOCK;
    using SAI1_MCLK1_SEL = Gpr0Fields::SAI1_MCLK1_SEL;
    using SAI1_MCLK2_SEL = Gpr0Fields::SAI1_MCLK2_SEL;
    using SAI1_MCLK3_SEL = Gpr0Fields::SAI1_MCLK3_SEL;
    using SAI1_MCLK_DIR = Gpr0Fields::SAI1_MCLK_DIR;
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

    // SAI2 MCLK3 source select
    using SAI2_MCLK3_SEL = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // SAI2_MCLK signal direction control
    using SAI2_MCLK_DIR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpr1Fields

  struct GPR1 : ftl::mmio::Register<
      0x400E4004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr1Fields::SAI2_MCLK3_SEL,
      ftl::mmio::Reserved<6, 2>,
      Gpr1Fields::SAI2_MCLK_DIR,
      ftl::mmio::Reserved<19, 9>,
      Gpr1Fields::DWP,
      Gpr1Fields::DWP_LOCK> {
    using eDWP = Gpr1Fields::eDWP;
    using eDWP_LOCK = Gpr1Fields::eDWP_LOCK;
    using SAI2_MCLK3_SEL = Gpr1Fields::SAI2_MCLK3_SEL;
    using SAI2_MCLK_DIR = Gpr1Fields::SAI2_MCLK_DIR;
    using DWP = Gpr1Fields::DWP;
    using DWP_LOCK = Gpr1Fields::DWP_LOCK;
  };

  // GPR2 General Purpose Register
  struct Gpr2Fields {
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
  };  // struct Gpr2Fields

  struct GPR2 : ftl::mmio::Register<
      0x400E4008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr2Fields::SAI3_MCLK3_SEL,
      ftl::mmio::Reserved<6, 2>,
      Gpr2Fields::SAI3_MCLK_DIR,
      Gpr2Fields::SAI4_MCLK_DIR,
      ftl::mmio::Reserved<18, 10>,
      Gpr2Fields::DWP,
      Gpr2Fields::DWP_LOCK> {
    using eDWP = Gpr2Fields::eDWP;
    using eDWP_LOCK = Gpr2Fields::eDWP_LOCK;
    using SAI3_MCLK3_SEL = Gpr2Fields::SAI3_MCLK3_SEL;
    using SAI3_MCLK_DIR = Gpr2Fields::SAI3_MCLK_DIR;
    using SAI4_MCLK_DIR = Gpr2Fields::SAI4_MCLK_DIR;
    using DWP = Gpr2Fields::DWP;
    using DWP_LOCK = Gpr2Fields::DWP_LOCK;
  };

  // GPR3 General Purpose Register
  struct Gpr3Fields {
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
  };  // struct Gpr3Fields

  struct GPR3 : ftl::mmio::Register<
      0x400E400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr3Fields::MQS_CLK_DIV,
      Gpr3Fields::MQS_SW_RST,
      Gpr3Fields::MQS_EN,
      Gpr3Fields::MQS_OVERSAMPLE,
      ftl::mmio::Reserved<17, 11>,
      Gpr3Fields::DWP,
      Gpr3Fields::DWP_LOCK> {
    using eDWP = Gpr3Fields::eDWP;
    using eDWP_LOCK = Gpr3Fields::eDWP_LOCK;
    using MQS_CLK_DIV = Gpr3Fields::MQS_CLK_DIV;
    using MQS_SW_RST = Gpr3Fields::MQS_SW_RST;
    using MQS_EN = Gpr3Fields::MQS_EN;
    using MQS_OVERSAMPLE = Gpr3Fields::MQS_OVERSAMPLE;
    using DWP = Gpr3Fields::DWP;
    using DWP_LOCK = Gpr3Fields::DWP_LOCK;
  };

  // GPR4 General Purpose Register
  struct Gpr4Fields {
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
  };  // struct Gpr4Fields

  struct GPR4 : ftl::mmio::Register<
      0x400E4010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr4Fields::ENET_TX_CLK_SEL,
      Gpr4Fields::ENET_REF_CLK_DIR,
      Gpr4Fields::ENET_TIME_SEL,
      Gpr4Fields::ENET_EVENT0IN_SEL,
      ftl::mmio::Reserved<24, 4>,
      Gpr4Fields::DWP,
      Gpr4Fields::DWP_LOCK> {
    using eDWP = Gpr4Fields::eDWP;
    using eDWP_LOCK = Gpr4Fields::eDWP_LOCK;
    using ENET_TX_CLK_SEL = Gpr4Fields::ENET_TX_CLK_SEL;
    using ENET_REF_CLK_DIR = Gpr4Fields::ENET_REF_CLK_DIR;
    using ENET_TIME_SEL = Gpr4Fields::ENET_TIME_SEL;
    using ENET_EVENT0IN_SEL = Gpr4Fields::ENET_EVENT0IN_SEL;
    using DWP = Gpr4Fields::DWP;
    using DWP_LOCK = Gpr4Fields::DWP_LOCK;
  };

  // GPR5 General Purpose Register
  struct Gpr5Fields {
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
  };  // struct Gpr5Fields

  struct GPR5 : ftl::mmio::Register<
      0x400E4014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr5Fields::ENET1G_TX_CLK_SEL,
      Gpr5Fields::ENET1G_REF_CLK_DIR,
      Gpr5Fields::ENET1G_RGMII_EN,
      Gpr5Fields::ENET1G_TIME_SEL,
      Gpr5Fields::ENET1G_EVENT0IN_SEL,
      ftl::mmio::Reserved<23, 5>,
      Gpr5Fields::DWP,
      Gpr5Fields::DWP_LOCK> {
    using eDWP = Gpr5Fields::eDWP;
    using eDWP_LOCK = Gpr5Fields::eDWP_LOCK;
    using ENET1G_TX_CLK_SEL = Gpr5Fields::ENET1G_TX_CLK_SEL;
    using ENET1G_REF_CLK_DIR = Gpr5Fields::ENET1G_REF_CLK_DIR;
    using ENET1G_RGMII_EN = Gpr5Fields::ENET1G_RGMII_EN;
    using ENET1G_TIME_SEL = Gpr5Fields::ENET1G_TIME_SEL;
    using ENET1G_EVENT0IN_SEL = Gpr5Fields::ENET1G_EVENT0IN_SEL;
    using DWP = Gpr5Fields::DWP;
    using DWP_LOCK = Gpr5Fields::DWP_LOCK;
  };

  // GPR6 General Purpose Register
  struct Gpr6Fields {
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
  };  // struct Gpr6Fields

  struct GPR6 : ftl::mmio::Register<
      0x400E4018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr6Fields::ENET_QOS_REF_CLK_DIR,
      Gpr6Fields::ENET_QOS_RGMII_EN,
      Gpr6Fields::ENET_QOS_TIME_SEL,
      Gpr6Fields::ENET_QOS_INTF_SEL,
      Gpr6Fields::ENET_QOS_CLKGEN_EN,
      Gpr6Fields::ENET_QOS_EVENT0IN_SEL,
      ftl::mmio::Reserved<20, 8>,
      Gpr6Fields::DWP,
      Gpr6Fields::DWP_LOCK> {
    using eDWP = Gpr6Fields::eDWP;
    using eDWP_LOCK = Gpr6Fields::eDWP_LOCK;
    using ENET_QOS_REF_CLK_DIR = Gpr6Fields::ENET_QOS_REF_CLK_DIR;
    using ENET_QOS_RGMII_EN = Gpr6Fields::ENET_QOS_RGMII_EN;
    using ENET_QOS_TIME_SEL = Gpr6Fields::ENET_QOS_TIME_SEL;
    using ENET_QOS_INTF_SEL = Gpr6Fields::ENET_QOS_INTF_SEL;
    using ENET_QOS_CLKGEN_EN = Gpr6Fields::ENET_QOS_CLKGEN_EN;
    using ENET_QOS_EVENT0IN_SEL = Gpr6Fields::ENET_QOS_EVENT0IN_SEL;
    using DWP = Gpr6Fields::DWP;
    using DWP_LOCK = Gpr6Fields::DWP_LOCK;
  };

  // GPR7 General Purpose Register
  struct Gpr7Fields {
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
  };  // struct Gpr7Fields

  struct GPR7 : ftl::mmio::Register<
      0x400E401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr7Fields::GINT,
      ftl::mmio::Reserved<27, 1>,
      Gpr7Fields::DWP,
      Gpr7Fields::DWP_LOCK> {
    using eDWP = Gpr7Fields::eDWP;
    using eDWP_LOCK = Gpr7Fields::eDWP_LOCK;
    using GINT = Gpr7Fields::GINT;
    using DWP = Gpr7Fields::DWP;
    using DWP_LOCK = Gpr7Fields::DWP_LOCK;
  };

  // GPR8 General Purpose Register
  struct Gpr8Fields {
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
  };  // struct Gpr8Fields

  struct GPR8 : ftl::mmio::Register<
      0x400E4020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr8Fields::WDOG1_MASK,
      ftl::mmio::Reserved<27, 1>,
      Gpr8Fields::DWP,
      Gpr8Fields::DWP_LOCK> {
    using eDWP = Gpr8Fields::eDWP;
    using eDWP_LOCK = Gpr8Fields::eDWP_LOCK;
    using WDOG1_MASK = Gpr8Fields::WDOG1_MASK;
    using DWP = Gpr8Fields::DWP;
    using DWP_LOCK = Gpr8Fields::DWP_LOCK;
  };

  // GPR9 General Purpose Register
  struct Gpr9Fields {
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
  };  // struct Gpr9Fields

  struct GPR9 : ftl::mmio::Register<
      0x400E4024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr9Fields::WDOG2_MASK,
      ftl::mmio::Reserved<27, 1>,
      Gpr9Fields::DWP,
      Gpr9Fields::DWP_LOCK> {
    using eDWP = Gpr9Fields::eDWP;
    using eDWP_LOCK = Gpr9Fields::eDWP_LOCK;
    using WDOG2_MASK = Gpr9Fields::WDOG2_MASK;
    using DWP = Gpr9Fields::DWP;
    using DWP_LOCK = Gpr9Fields::DWP_LOCK;
  };

  // GPR10 General Purpose Register
  struct Gpr10Fields {
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
  };  // struct Gpr10Fields

  struct GPR10 : ftl::mmio::Register<
      0x400E4028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr10Fields::DWP,
      Gpr10Fields::DWP_LOCK> {
    using eDWP = Gpr10Fields::eDWP;
    using eDWP_LOCK = Gpr10Fields::eDWP_LOCK;
    using DWP = Gpr10Fields::DWP;
    using DWP_LOCK = Gpr10Fields::DWP_LOCK;
  };

  // GPR11 General Purpose Register
  struct Gpr11Fields {
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
  };  // struct Gpr11Fields

  struct GPR11 : ftl::mmio::Register<
      0x400E402Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr11Fields::DWP,
      Gpr11Fields::DWP_LOCK> {
    using eDWP = Gpr11Fields::eDWP;
    using eDWP_LOCK = Gpr11Fields::eDWP_LOCK;
    using DWP = Gpr11Fields::DWP;
    using DWP_LOCK = Gpr11Fields::DWP_LOCK;
  };

  // GPR12 General Purpose Register
  struct Gpr12Fields {
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
  };  // struct Gpr12Fields

  struct GPR12 : ftl::mmio::Register<
      0x400E4030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr12Fields::QTIMER1_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      Gpr12Fields::QTIMER1_TRM0_INPUT_SEL,
      Gpr12Fields::QTIMER1_TRM1_INPUT_SEL,
      Gpr12Fields::QTIMER1_TRM2_INPUT_SEL,
      Gpr12Fields::QTIMER1_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      Gpr12Fields::DWP,
      Gpr12Fields::DWP_LOCK> {
    using eDWP = Gpr12Fields::eDWP;
    using eDWP_LOCK = Gpr12Fields::eDWP_LOCK;
    using QTIMER1_TMR_CNTS_FREEZE = Gpr12Fields::QTIMER1_TMR_CNTS_FREEZE;
    using QTIMER1_TRM0_INPUT_SEL = Gpr12Fields::QTIMER1_TRM0_INPUT_SEL;
    using QTIMER1_TRM1_INPUT_SEL = Gpr12Fields::QTIMER1_TRM1_INPUT_SEL;
    using QTIMER1_TRM2_INPUT_SEL = Gpr12Fields::QTIMER1_TRM2_INPUT_SEL;
    using QTIMER1_TRM3_INPUT_SEL = Gpr12Fields::QTIMER1_TRM3_INPUT_SEL;
    using DWP = Gpr12Fields::DWP;
    using DWP_LOCK = Gpr12Fields::DWP_LOCK;
  };

  // GPR13 General Purpose Register
  struct Gpr13Fields {
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
  };  // struct Gpr13Fields

  struct GPR13 : ftl::mmio::Register<
      0x400E4034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr13Fields::QTIMER2_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      Gpr13Fields::QTIMER2_TRM0_INPUT_SEL,
      Gpr13Fields::QTIMER2_TRM1_INPUT_SEL,
      Gpr13Fields::QTIMER2_TRM2_INPUT_SEL,
      Gpr13Fields::QTIMER2_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      Gpr13Fields::DWP,
      Gpr13Fields::DWP_LOCK> {
    using eDWP = Gpr13Fields::eDWP;
    using eDWP_LOCK = Gpr13Fields::eDWP_LOCK;
    using QTIMER2_TMR_CNTS_FREEZE = Gpr13Fields::QTIMER2_TMR_CNTS_FREEZE;
    using QTIMER2_TRM0_INPUT_SEL = Gpr13Fields::QTIMER2_TRM0_INPUT_SEL;
    using QTIMER2_TRM1_INPUT_SEL = Gpr13Fields::QTIMER2_TRM1_INPUT_SEL;
    using QTIMER2_TRM2_INPUT_SEL = Gpr13Fields::QTIMER2_TRM2_INPUT_SEL;
    using QTIMER2_TRM3_INPUT_SEL = Gpr13Fields::QTIMER2_TRM3_INPUT_SEL;
    using DWP = Gpr13Fields::DWP;
    using DWP_LOCK = Gpr13Fields::DWP_LOCK;
  };

  // GPR14 General Purpose Register
  struct Gpr14Fields {
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
  };  // struct Gpr14Fields

  struct GPR14 : ftl::mmio::Register<
      0x400E4038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr14Fields::QTIMER3_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      Gpr14Fields::QTIMER3_TRM0_INPUT_SEL,
      Gpr14Fields::QTIMER3_TRM1_INPUT_SEL,
      Gpr14Fields::QTIMER3_TRM2_INPUT_SEL,
      Gpr14Fields::QTIMER3_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      Gpr14Fields::DWP,
      Gpr14Fields::DWP_LOCK> {
    using eDWP = Gpr14Fields::eDWP;
    using eDWP_LOCK = Gpr14Fields::eDWP_LOCK;
    using QTIMER3_TMR_CNTS_FREEZE = Gpr14Fields::QTIMER3_TMR_CNTS_FREEZE;
    using QTIMER3_TRM0_INPUT_SEL = Gpr14Fields::QTIMER3_TRM0_INPUT_SEL;
    using QTIMER3_TRM1_INPUT_SEL = Gpr14Fields::QTIMER3_TRM1_INPUT_SEL;
    using QTIMER3_TRM2_INPUT_SEL = Gpr14Fields::QTIMER3_TRM2_INPUT_SEL;
    using QTIMER3_TRM3_INPUT_SEL = Gpr14Fields::QTIMER3_TRM3_INPUT_SEL;
    using DWP = Gpr14Fields::DWP;
    using DWP_LOCK = Gpr14Fields::DWP_LOCK;
  };

  // GPR15 General Purpose Register
  struct Gpr15Fields {
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
  };  // struct Gpr15Fields

  struct GPR15 : ftl::mmio::Register<
      0x400E403Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr15Fields::QTIMER4_TMR_CNTS_FREEZE,
      ftl::mmio::Reserved<7, 1>,
      Gpr15Fields::QTIMER4_TRM0_INPUT_SEL,
      Gpr15Fields::QTIMER4_TRM1_INPUT_SEL,
      Gpr15Fields::QTIMER4_TRM2_INPUT_SEL,
      Gpr15Fields::QTIMER4_TRM3_INPUT_SEL,
      ftl::mmio::Reserved<16, 12>,
      Gpr15Fields::DWP,
      Gpr15Fields::DWP_LOCK> {
    using eDWP = Gpr15Fields::eDWP;
    using eDWP_LOCK = Gpr15Fields::eDWP_LOCK;
    using QTIMER4_TMR_CNTS_FREEZE = Gpr15Fields::QTIMER4_TMR_CNTS_FREEZE;
    using QTIMER4_TRM0_INPUT_SEL = Gpr15Fields::QTIMER4_TRM0_INPUT_SEL;
    using QTIMER4_TRM1_INPUT_SEL = Gpr15Fields::QTIMER4_TRM1_INPUT_SEL;
    using QTIMER4_TRM2_INPUT_SEL = Gpr15Fields::QTIMER4_TRM2_INPUT_SEL;
    using QTIMER4_TRM3_INPUT_SEL = Gpr15Fields::QTIMER4_TRM3_INPUT_SEL;
    using DWP = Gpr15Fields::DWP;
    using DWP_LOCK = Gpr15Fields::DWP_LOCK;
  };

  // GPR16 General Purpose Register
  struct Gpr16Fields {
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
  };  // struct Gpr16Fields

  struct GPR16 : ftl::mmio::Register<
      0x400E4040u,
      std::uint32_t,
      0x0000AA03u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      Gpr16Fields::FLEXRAM_BANK_CFG_SEL,
      Gpr16Fields::CM7_FORCE_HCLK_EN,
      ftl::mmio::Reserved<1, 4>,
      Gpr16Fields::M7_GPC_SLEEP_SEL,
      ftl::mmio::Reserved<22, 6>,
      Gpr16Fields::DWP,
      Gpr16Fields::DWP_LOCK> {
    using eDWP = Gpr16Fields::eDWP;
    using eDWP_LOCK = Gpr16Fields::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_SEL = Gpr16Fields::FLEXRAM_BANK_CFG_SEL;
    using CM7_FORCE_HCLK_EN = Gpr16Fields::CM7_FORCE_HCLK_EN;
    using M7_GPC_SLEEP_SEL = Gpr16Fields::M7_GPC_SLEEP_SEL;
    using DWP = Gpr16Fields::DWP;
    using DWP_LOCK = Gpr16Fields::DWP_LOCK;
  };

  // GPR17 General Purpose Register
  struct Gpr17Fields {
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
  };  // struct Gpr17Fields

  struct GPR17 : ftl::mmio::Register<
      0x400E4044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr17Fields::FLEXRAM_BANK_CFG_LOW,
      ftl::mmio::Reserved<12, 16>,
      Gpr17Fields::DWP,
      Gpr17Fields::DWP_LOCK> {
    using eDWP = Gpr17Fields::eDWP;
    using eDWP_LOCK = Gpr17Fields::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_LOW = Gpr17Fields::FLEXRAM_BANK_CFG_LOW;
    using DWP = Gpr17Fields::DWP;
    using DWP_LOCK = Gpr17Fields::DWP_LOCK;
  };

  // GPR18 General Purpose Register
  struct Gpr18Fields {
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
  };  // struct Gpr18Fields

  struct GPR18 : ftl::mmio::Register<
      0x400E4048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr18Fields::FLEXRAM_BANK_CFG_HIGH,
      ftl::mmio::Reserved<12, 16>,
      Gpr18Fields::DWP,
      Gpr18Fields::DWP_LOCK> {
    using eDWP = Gpr18Fields::eDWP;
    using eDWP_LOCK = Gpr18Fields::eDWP_LOCK;
    using FLEXRAM_BANK_CFG_HIGH = Gpr18Fields::FLEXRAM_BANK_CFG_HIGH;
    using DWP = Gpr18Fields::DWP;
    using DWP_LOCK = Gpr18Fields::DWP_LOCK;
  };

  // GPR20 General Purpose Register
  struct Gpr20Fields {
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
  };  // struct Gpr20Fields

  struct GPR20 : ftl::mmio::Register<
      0x400E4050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_4,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_5,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_6,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_7,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_8,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_9,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_10,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_11,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_12,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_13,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_14,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_15,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_16,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_17,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_18,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_19,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_20,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_21,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_22,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_23,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_24,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_25,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_26,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_27,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_28,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_29,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_30,
      Gpr20Fields::IOMUXC_XBAR_DIR_SEL_31,
      Gpr20Fields::DWP,
      Gpr20Fields::DWP_LOCK> {
    using eDWP = Gpr20Fields::eDWP;
    using eDWP_LOCK = Gpr20Fields::eDWP_LOCK;
    using IOMUXC_XBAR_DIR_SEL_4 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_4;
    using IOMUXC_XBAR_DIR_SEL_5 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_5;
    using IOMUXC_XBAR_DIR_SEL_6 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_6;
    using IOMUXC_XBAR_DIR_SEL_7 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_7;
    using IOMUXC_XBAR_DIR_SEL_8 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_8;
    using IOMUXC_XBAR_DIR_SEL_9 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_9;
    using IOMUXC_XBAR_DIR_SEL_10 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_10;
    using IOMUXC_XBAR_DIR_SEL_11 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_11;
    using IOMUXC_XBAR_DIR_SEL_12 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_12;
    using IOMUXC_XBAR_DIR_SEL_13 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_13;
    using IOMUXC_XBAR_DIR_SEL_14 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_14;
    using IOMUXC_XBAR_DIR_SEL_15 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_15;
    using IOMUXC_XBAR_DIR_SEL_16 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_16;
    using IOMUXC_XBAR_DIR_SEL_17 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_17;
    using IOMUXC_XBAR_DIR_SEL_18 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_18;
    using IOMUXC_XBAR_DIR_SEL_19 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_19;
    using IOMUXC_XBAR_DIR_SEL_20 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_20;
    using IOMUXC_XBAR_DIR_SEL_21 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_21;
    using IOMUXC_XBAR_DIR_SEL_22 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_22;
    using IOMUXC_XBAR_DIR_SEL_23 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_23;
    using IOMUXC_XBAR_DIR_SEL_24 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_24;
    using IOMUXC_XBAR_DIR_SEL_25 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_25;
    using IOMUXC_XBAR_DIR_SEL_26 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_26;
    using IOMUXC_XBAR_DIR_SEL_27 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_27;
    using IOMUXC_XBAR_DIR_SEL_28 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_28;
    using IOMUXC_XBAR_DIR_SEL_29 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_29;
    using IOMUXC_XBAR_DIR_SEL_30 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_30;
    using IOMUXC_XBAR_DIR_SEL_31 = Gpr20Fields::IOMUXC_XBAR_DIR_SEL_31;
    using DWP = Gpr20Fields::DWP;
    using DWP_LOCK = Gpr20Fields::DWP_LOCK;
  };

  // GPR21 General Purpose Register
  struct Gpr21Fields {
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
  };  // struct Gpr21Fields

  struct GPR21 : ftl::mmio::Register<
      0x400E4054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_32,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_33,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_34,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_35,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_36,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_37,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_38,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_39,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_40,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_41,
      Gpr21Fields::IOMUXC_XBAR_DIR_SEL_42,
      ftl::mmio::Reserved<17, 11>,
      Gpr21Fields::DWP,
      Gpr21Fields::DWP_LOCK> {
    using eDWP = Gpr21Fields::eDWP;
    using eDWP_LOCK = Gpr21Fields::eDWP_LOCK;
    using IOMUXC_XBAR_DIR_SEL_32 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_32;
    using IOMUXC_XBAR_DIR_SEL_33 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_33;
    using IOMUXC_XBAR_DIR_SEL_34 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_34;
    using IOMUXC_XBAR_DIR_SEL_35 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_35;
    using IOMUXC_XBAR_DIR_SEL_36 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_36;
    using IOMUXC_XBAR_DIR_SEL_37 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_37;
    using IOMUXC_XBAR_DIR_SEL_38 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_38;
    using IOMUXC_XBAR_DIR_SEL_39 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_39;
    using IOMUXC_XBAR_DIR_SEL_40 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_40;
    using IOMUXC_XBAR_DIR_SEL_41 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_41;
    using IOMUXC_XBAR_DIR_SEL_42 = Gpr21Fields::IOMUXC_XBAR_DIR_SEL_42;
    using DWP = Gpr21Fields::DWP;
    using DWP_LOCK = Gpr21Fields::DWP_LOCK;
  };

  // GPR22 General Purpose Register
  struct Gpr22Fields {
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
  };  // struct Gpr22Fields

  struct GPR22 : ftl::mmio::Register<
      0x400E4058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr22Fields::REF_1M_CLK_GPT1,
      ftl::mmio::Reserved<27, 1>,
      Gpr22Fields::DWP,
      Gpr22Fields::DWP_LOCK> {
    using eDWP = Gpr22Fields::eDWP;
    using eDWP_LOCK = Gpr22Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT1 = Gpr22Fields::REF_1M_CLK_GPT1;
    using DWP = Gpr22Fields::DWP;
    using DWP_LOCK = Gpr22Fields::DWP_LOCK;
  };

  // GPR23 General Purpose Register
  struct Gpr23Fields {
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
  };  // struct Gpr23Fields

  struct GPR23 : ftl::mmio::Register<
      0x400E405Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr23Fields::REF_1M_CLK_GPT2,
      Gpr23Fields::GPT2_CAPIN1_SEL,
      Gpr23Fields::GPT2_CAPIN2_SEL,
      ftl::mmio::Reserved<25, 3>,
      Gpr23Fields::DWP,
      Gpr23Fields::DWP_LOCK> {
    using eDWP = Gpr23Fields::eDWP;
    using eDWP_LOCK = Gpr23Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT2 = Gpr23Fields::REF_1M_CLK_GPT2;
    using GPT2_CAPIN1_SEL = Gpr23Fields::GPT2_CAPIN1_SEL;
    using GPT2_CAPIN2_SEL = Gpr23Fields::GPT2_CAPIN2_SEL;
    using DWP = Gpr23Fields::DWP;
    using DWP_LOCK = Gpr23Fields::DWP_LOCK;
  };

  // GPR24 General Purpose Register
  struct Gpr24Fields {
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
  };  // struct Gpr24Fields

  struct GPR24 : ftl::mmio::Register<
      0x400E4060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr24Fields::REF_1M_CLK_GPT3,
      Gpr24Fields::GPT3_CAPIN1_SEL,
      ftl::mmio::Reserved<26, 2>,
      Gpr24Fields::DWP,
      Gpr24Fields::DWP_LOCK> {
    using eDWP = Gpr24Fields::eDWP;
    using eDWP_LOCK = Gpr24Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT3 = Gpr24Fields::REF_1M_CLK_GPT3;
    using GPT3_CAPIN1_SEL = Gpr24Fields::GPT3_CAPIN1_SEL;
    using DWP = Gpr24Fields::DWP;
    using DWP_LOCK = Gpr24Fields::DWP_LOCK;
  };

  // GPR25 General Purpose Register
  struct Gpr25Fields {
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
  };  // struct Gpr25Fields

  struct GPR25 : ftl::mmio::Register<
      0x400E4064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr25Fields::REF_1M_CLK_GPT4,
      ftl::mmio::Reserved<27, 1>,
      Gpr25Fields::DWP,
      Gpr25Fields::DWP_LOCK> {
    using eDWP = Gpr25Fields::eDWP;
    using eDWP_LOCK = Gpr25Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT4 = Gpr25Fields::REF_1M_CLK_GPT4;
    using DWP = Gpr25Fields::DWP;
    using DWP_LOCK = Gpr25Fields::DWP_LOCK;
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

    // GPT5 1 MHz clock source select
    using REF_1M_CLK_GPT5 = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpr26Fields

  struct GPR26 : ftl::mmio::Register<
      0x400E4068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr26Fields::REF_1M_CLK_GPT5,
      ftl::mmio::Reserved<27, 1>,
      Gpr26Fields::DWP,
      Gpr26Fields::DWP_LOCK> {
    using eDWP = Gpr26Fields::eDWP;
    using eDWP_LOCK = Gpr26Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT5 = Gpr26Fields::REF_1M_CLK_GPT5;
    using DWP = Gpr26Fields::DWP;
    using DWP_LOCK = Gpr26Fields::DWP_LOCK;
  };

  // GPR27 General Purpose Register
  struct Gpr27Fields {
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
  };  // struct Gpr27Fields

  struct GPR27 : ftl::mmio::Register<
      0x400E406Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr27Fields::REF_1M_CLK_GPT6,
      ftl::mmio::Reserved<27, 1>,
      Gpr27Fields::DWP,
      Gpr27Fields::DWP_LOCK> {
    using eDWP = Gpr27Fields::eDWP;
    using eDWP_LOCK = Gpr27Fields::eDWP_LOCK;
    using REF_1M_CLK_GPT6 = Gpr27Fields::REF_1M_CLK_GPT6;
    using DWP = Gpr27Fields::DWP;
    using DWP_LOCK = Gpr27Fields::DWP_LOCK;
  };

  // GPR28 General Purpose Register
  struct Gpr28Fields {
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
  };  // struct Gpr28Fields

  struct GPR28 : ftl::mmio::Register<
      0x400E4070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr28Fields::ARCACHE_USDHC,
      Gpr28Fields::AWCACHE_USDHC,
      ftl::mmio::Reserved<3, 2>,
      Gpr28Fields::CACHE_ENET1G,
      ftl::mmio::Reserved<1, 6>,
      Gpr28Fields::CACHE_ENET,
      ftl::mmio::Reserved<5, 8>,
      Gpr28Fields::CACHE_USB,
      ftl::mmio::Reserved<14, 14>,
      Gpr28Fields::DWP,
      Gpr28Fields::DWP_LOCK> {
    using eDWP = Gpr28Fields::eDWP;
    using eDWP_LOCK = Gpr28Fields::eDWP_LOCK;
    using ARCACHE_USDHC = Gpr28Fields::ARCACHE_USDHC;
    using AWCACHE_USDHC = Gpr28Fields::AWCACHE_USDHC;
    using CACHE_ENET1G = Gpr28Fields::CACHE_ENET1G;
    using CACHE_ENET = Gpr28Fields::CACHE_ENET;
    using CACHE_USB = Gpr28Fields::CACHE_USB;
    using DWP = Gpr28Fields::DWP;
    using DWP_LOCK = Gpr28Fields::DWP_LOCK;
  };

  // GPR29 General Purpose Register
  struct Gpr29Fields {
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
  };  // struct Gpr29Fields

  struct GPR29 : ftl::mmio::Register<
      0x400E4074u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      Gpr29Fields::USBPHY1_IPG_CLK_ACTIVE,
      ftl::mmio::Reserved<27, 1>,
      Gpr29Fields::DWP,
      Gpr29Fields::DWP_LOCK> {
    using eDWP = Gpr29Fields::eDWP;
    using eDWP_LOCK = Gpr29Fields::eDWP_LOCK;
    using USBPHY1_IPG_CLK_ACTIVE = Gpr29Fields::USBPHY1_IPG_CLK_ACTIVE;
    using DWP = Gpr29Fields::DWP;
    using DWP_LOCK = Gpr29Fields::DWP_LOCK;
  };

  // GPR30 General Purpose Register
  struct Gpr30Fields {
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
  };  // struct Gpr30Fields

  struct GPR30 : ftl::mmio::Register<
      0x400E4078u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      Gpr30Fields::USBPHY2_IPG_CLK_ACTIVE,
      ftl::mmio::Reserved<27, 1>,
      Gpr30Fields::DWP,
      Gpr30Fields::DWP_LOCK> {
    using eDWP = Gpr30Fields::eDWP;
    using eDWP_LOCK = Gpr30Fields::eDWP_LOCK;
    using USBPHY2_IPG_CLK_ACTIVE = Gpr30Fields::USBPHY2_IPG_CLK_ACTIVE;
    using DWP = Gpr30Fields::DWP;
    using DWP_LOCK = Gpr30Fields::DWP_LOCK;
  };

  // GPR31 General Purpose Register
  struct Gpr31Fields {
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
  };  // struct Gpr31Fields

  struct GPR31 : ftl::mmio::Register<
      0x400E407Cu,
      std::uint32_t,
      0x00000012u,
      ftl::mmio::RW,
      Gpr31Fields::RMW2_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<1, 1>,
      Gpr31Fields::OCRAM_M7_CLK_GATING,
      ftl::mmio::Reserved<25, 3>,
      Gpr31Fields::DWP,
      Gpr31Fields::DWP_LOCK> {
    using eDWP = Gpr31Fields::eDWP;
    using eDWP_LOCK = Gpr31Fields::eDWP_LOCK;
    using RMW2_WAIT_BVALID_CPL = Gpr31Fields::RMW2_WAIT_BVALID_CPL;
    using OCRAM_M7_CLK_GATING = Gpr31Fields::OCRAM_M7_CLK_GATING;
    using DWP = Gpr31Fields::DWP;
    using DWP_LOCK = Gpr31Fields::DWP_LOCK;
  };

  // GPR32 General Purpose Register
  struct Gpr32Fields {
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
  };  // struct Gpr32Fields

  struct GPR32 : ftl::mmio::Register<
      0x400E4080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr32Fields::RMW1_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      Gpr32Fields::DWP,
      Gpr32Fields::DWP_LOCK> {
    using eDWP = Gpr32Fields::eDWP;
    using eDWP_LOCK = Gpr32Fields::eDWP_LOCK;
    using RMW1_WAIT_BVALID_CPL = Gpr32Fields::RMW1_WAIT_BVALID_CPL;
    using DWP = Gpr32Fields::DWP;
    using DWP_LOCK = Gpr32Fields::DWP_LOCK;
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

    // OCRAM2 RMW wait enable
    using RMW2_WAIT_BVALID_CPL = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpr33Fields

  struct GPR33 : ftl::mmio::Register<
      0x400E4084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr33Fields::RMW2_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      Gpr33Fields::DWP,
      Gpr33Fields::DWP_LOCK> {
    using eDWP = Gpr33Fields::eDWP;
    using eDWP_LOCK = Gpr33Fields::eDWP_LOCK;
    using RMW2_WAIT_BVALID_CPL = Gpr33Fields::RMW2_WAIT_BVALID_CPL;
    using DWP = Gpr33Fields::DWP;
    using DWP_LOCK = Gpr33Fields::DWP_LOCK;
  };

  // GPR34 General Purpose Register
  struct Gpr34Fields {
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
  };  // struct Gpr34Fields

  struct GPR34 : ftl::mmio::Register<
      0x400E4088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr34Fields::XECC_FLEXSPI1_WAIT_BVALID_CPL,
      Gpr34Fields::FLEXSPI1_OTFAD_EN,
      ftl::mmio::Reserved<26, 2>,
      Gpr34Fields::DWP,
      Gpr34Fields::DWP_LOCK> {
    using eDWP = Gpr34Fields::eDWP;
    using eDWP_LOCK = Gpr34Fields::eDWP_LOCK;
    using XECC_FLEXSPI1_WAIT_BVALID_CPL = Gpr34Fields::XECC_FLEXSPI1_WAIT_BVALID_CPL;
    using FLEXSPI1_OTFAD_EN = Gpr34Fields::FLEXSPI1_OTFAD_EN;
    using DWP = Gpr34Fields::DWP;
    using DWP_LOCK = Gpr34Fields::DWP_LOCK;
  };

  // GPR35 General Purpose Register
  struct Gpr35Fields {
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
  };  // struct Gpr35Fields

  struct GPR35 : ftl::mmio::Register<
      0x400E408Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr35Fields::XECC_FLEXSPI2_WAIT_BVALID_CPL,
      Gpr35Fields::FLEXSPI2_OTFAD_EN,
      ftl::mmio::Reserved<26, 2>,
      Gpr35Fields::DWP,
      Gpr35Fields::DWP_LOCK> {
    using eDWP = Gpr35Fields::eDWP;
    using eDWP_LOCK = Gpr35Fields::eDWP_LOCK;
    using XECC_FLEXSPI2_WAIT_BVALID_CPL = Gpr35Fields::XECC_FLEXSPI2_WAIT_BVALID_CPL;
    using FLEXSPI2_OTFAD_EN = Gpr35Fields::FLEXSPI2_OTFAD_EN;
    using DWP = Gpr35Fields::DWP;
    using DWP_LOCK = Gpr35Fields::DWP_LOCK;
  };

  // GPR36 General Purpose Register
  struct Gpr36Fields {
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
  };  // struct Gpr36Fields

  struct GPR36 : ftl::mmio::Register<
      0x400E4090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr36Fields::XECC_SEMC_WAIT_BVALID_CPL,
      ftl::mmio::Reserved<27, 1>,
      Gpr36Fields::DWP,
      Gpr36Fields::DWP_LOCK> {
    using eDWP = Gpr36Fields::eDWP;
    using eDWP_LOCK = Gpr36Fields::eDWP_LOCK;
    using XECC_SEMC_WAIT_BVALID_CPL = Gpr36Fields::XECC_SEMC_WAIT_BVALID_CPL;
    using DWP = Gpr36Fields::DWP;
    using DWP_LOCK = Gpr36Fields::DWP_LOCK;
  };

  // GPR37 General Purpose Register
  struct Gpr37Fields {
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
  };  // struct Gpr37Fields

  struct GPR37 : ftl::mmio::Register<
      0x400E4094u,
      std::uint32_t,
      0x00000017u,
      ftl::mmio::RW,
      Gpr37Fields::NIDEN,
      Gpr37Fields::DBG_EN,
      ftl::mmio::Reserved<1, 2>,
      Gpr37Fields::EXC_MON,
      ftl::mmio::Reserved<1, 4>,
      Gpr37Fields::M7_DBG_ACK_MASK,
      Gpr37Fields::M4_DBG_ACK_MASK,
      ftl::mmio::Reserved<21, 7>,
      Gpr37Fields::DWP,
      Gpr37Fields::DWP_LOCK> {
    using eDWP = Gpr37Fields::eDWP;
    using eDWP_LOCK = Gpr37Fields::eDWP_LOCK;
    using NIDEN = Gpr37Fields::NIDEN;
    using DBG_EN = Gpr37Fields::DBG_EN;
    using EXC_MON = Gpr37Fields::EXC_MON;
    using M7_DBG_ACK_MASK = Gpr37Fields::M7_DBG_ACK_MASK;
    using M4_DBG_ACK_MASK = Gpr37Fields::M4_DBG_ACK_MASK;
    using DWP = Gpr37Fields::DWP;
    using DWP_LOCK = Gpr37Fields::DWP_LOCK;
  };

  // GPR38 General Purpose Register
  struct Gpr38Fields {
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
  };  // struct Gpr38Fields

  struct GPR38 : ftl::mmio::Register<
      0x400E4098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr38Fields::DWP,
      Gpr38Fields::DWP_LOCK> {
    using eDWP = Gpr38Fields::eDWP;
    using eDWP_LOCK = Gpr38Fields::eDWP_LOCK;
    using DWP = Gpr38Fields::DWP;
    using DWP_LOCK = Gpr38Fields::DWP_LOCK;
  };

  // GPR39 General Purpose Register
  struct Gpr39Fields {
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
  };  // struct Gpr39Fields

  struct GPR39 : ftl::mmio::Register<
      0x400E409Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr39Fields::DWP,
      Gpr39Fields::DWP_LOCK> {
    using eDWP = Gpr39Fields::eDWP;
    using eDWP_LOCK = Gpr39Fields::eDWP_LOCK;
    using DWP = Gpr39Fields::DWP;
    using DWP_LOCK = Gpr39Fields::DWP_LOCK;
  };

  // GPR40 General Purpose Register
  struct Gpr40Fields {
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
  };  // struct Gpr40Fields

  struct GPR40 : ftl::mmio::Register<
      0x400E40A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr40Fields::GPIO_MUX2_GPIO_SEL_LOW,
      ftl::mmio::Reserved<12, 16>,
      Gpr40Fields::DWP,
      Gpr40Fields::DWP_LOCK> {
    using eDWP = Gpr40Fields::eDWP;
    using eDWP_LOCK = Gpr40Fields::eDWP_LOCK;
    using GPIO_MUX2_GPIO_SEL_LOW = Gpr40Fields::GPIO_MUX2_GPIO_SEL_LOW;
    using DWP = Gpr40Fields::DWP;
    using DWP_LOCK = Gpr40Fields::DWP_LOCK;
  };

  // GPR41 General Purpose Register
  struct Gpr41Fields {
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
  };  // struct Gpr41Fields

  struct GPR41 : ftl::mmio::Register<
      0x400E40A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr41Fields::GPIO_MUX2_GPIO_SEL_HIGH,
      ftl::mmio::Reserved<12, 16>,
      Gpr41Fields::DWP,
      Gpr41Fields::DWP_LOCK> {
    using eDWP = Gpr41Fields::eDWP;
    using eDWP_LOCK = Gpr41Fields::eDWP_LOCK;
    using GPIO_MUX2_GPIO_SEL_HIGH = Gpr41Fields::GPIO_MUX2_GPIO_SEL_HIGH;
    using DWP = Gpr41Fields::DWP;
    using DWP_LOCK = Gpr41Fields::DWP_LOCK;
  };

  // GPR42 General Purpose Register
  struct Gpr42Fields {
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
  };  // struct Gpr42Fields

  struct GPR42 : ftl::mmio::Register<
      0x400E40A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr42Fields::GPIO_MUX3_GPIO_SEL_LOW,
      ftl::mmio::Reserved<12, 16>,
      Gpr42Fields::DWP,
      Gpr42Fields::DWP_LOCK> {
    using eDWP = Gpr42Fields::eDWP;
    using eDWP_LOCK = Gpr42Fields::eDWP_LOCK;
    using GPIO_MUX3_GPIO_SEL_LOW = Gpr42Fields::GPIO_MUX3_GPIO_SEL_LOW;
    using DWP = Gpr42Fields::DWP;
    using DWP_LOCK = Gpr42Fields::DWP_LOCK;
  };

  // GPR43 General Purpose Register
  struct Gpr43Fields {
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
  };  // struct Gpr43Fields

  struct GPR43 : ftl::mmio::Register<
      0x400E40ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr43Fields::GPIO_MUX3_GPIO_SEL_HIGH,
      ftl::mmio::Reserved<12, 16>,
      Gpr43Fields::DWP,
      Gpr43Fields::DWP_LOCK> {
    using eDWP = Gpr43Fields::eDWP;
    using eDWP_LOCK = Gpr43Fields::eDWP_LOCK;
    using GPIO_MUX3_GPIO_SEL_HIGH = Gpr43Fields::GPIO_MUX3_GPIO_SEL_HIGH;
    using DWP = Gpr43Fields::DWP;
    using DWP_LOCK = Gpr43Fields::DWP_LOCK;
  };

  // GPR44 General Purpose Register
  struct Gpr44Fields {
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
  };  // struct Gpr44Fields

  struct GPR44 : ftl::mmio::Register<
      0x400E40B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr44Fields::DWP,
      Gpr44Fields::DWP_LOCK> {
    using eDWP = Gpr44Fields::eDWP;
    using eDWP_LOCK = Gpr44Fields::eDWP_LOCK;
    using DWP = Gpr44Fields::DWP;
    using DWP_LOCK = Gpr44Fields::DWP_LOCK;
  };

  // GPR45 General Purpose Register
  struct Gpr45Fields {
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
  };  // struct Gpr45Fields

  struct GPR45 : ftl::mmio::Register<
      0x400E40B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr45Fields::DWP,
      Gpr45Fields::DWP_LOCK> {
    using eDWP = Gpr45Fields::eDWP;
    using eDWP_LOCK = Gpr45Fields::eDWP_LOCK;
    using DWP = Gpr45Fields::DWP;
    using DWP_LOCK = Gpr45Fields::DWP_LOCK;
  };

  // GPR46 General Purpose Register
  struct Gpr46Fields {
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
  };  // struct Gpr46Fields

  struct GPR46 : ftl::mmio::Register<
      0x400E40B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr46Fields::DWP,
      Gpr46Fields::DWP_LOCK> {
    using eDWP = Gpr46Fields::eDWP;
    using eDWP_LOCK = Gpr46Fields::eDWP_LOCK;
    using DWP = Gpr46Fields::DWP;
    using DWP_LOCK = Gpr46Fields::DWP_LOCK;
  };

  // GPR47 General Purpose Register
  struct Gpr47Fields {
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
  };  // struct Gpr47Fields

  struct GPR47 : ftl::mmio::Register<
      0x400E40BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr47Fields::DWP,
      Gpr47Fields::DWP_LOCK> {
    using eDWP = Gpr47Fields::eDWP;
    using eDWP_LOCK = Gpr47Fields::eDWP_LOCK;
    using DWP = Gpr47Fields::DWP;
    using DWP_LOCK = Gpr47Fields::DWP_LOCK;
  };

  // GPR48 General Purpose Register
  struct Gpr48Fields {
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
  };  // struct Gpr48Fields

  struct GPR48 : ftl::mmio::Register<
      0x400E40C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr48Fields::DWP,
      Gpr48Fields::DWP_LOCK> {
    using eDWP = Gpr48Fields::eDWP;
    using eDWP_LOCK = Gpr48Fields::eDWP_LOCK;
    using DWP = Gpr48Fields::DWP;
    using DWP_LOCK = Gpr48Fields::DWP_LOCK;
  };

  // GPR49 General Purpose Register
  struct Gpr49Fields {
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
  };  // struct Gpr49Fields

  struct GPR49 : ftl::mmio::Register<
      0x400E40C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr49Fields::DWP,
      Gpr49Fields::DWP_LOCK> {
    using eDWP = Gpr49Fields::eDWP;
    using eDWP_LOCK = Gpr49Fields::eDWP_LOCK;
    using DWP = Gpr49Fields::DWP;
    using DWP_LOCK = Gpr49Fields::DWP_LOCK;
  };

  // GPR50 General Purpose Register
  struct Gpr50Fields {
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
  };  // struct Gpr50Fields

  struct GPR50 : ftl::mmio::Register<
      0x400E40C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr50Fields::CAAM_IPS_MGR,
      ftl::mmio::Reserved<23, 5>,
      Gpr50Fields::DWP,
      Gpr50Fields::DWP_LOCK> {
    using eDWP = Gpr50Fields::eDWP;
    using eDWP_LOCK = Gpr50Fields::eDWP_LOCK;
    using CAAM_IPS_MGR = Gpr50Fields::CAAM_IPS_MGR;
    using DWP = Gpr50Fields::DWP;
    using DWP_LOCK = Gpr50Fields::DWP_LOCK;
  };

  // GPR51 General Purpose Register
  struct Gpr51Fields {
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
  };  // struct Gpr51Fields

  struct GPR51 : ftl::mmio::Register<
      0x400E40CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr51Fields::M7_NMI_CLEAR,
      ftl::mmio::Reserved<27, 1>,
      Gpr51Fields::DWP,
      Gpr51Fields::DWP_LOCK> {
    using eDWP = Gpr51Fields::eDWP;
    using eDWP_LOCK = Gpr51Fields::eDWP_LOCK;
    using M7_NMI_CLEAR = Gpr51Fields::M7_NMI_CLEAR;
    using DWP = Gpr51Fields::DWP;
    using DWP_LOCK = Gpr51Fields::DWP_LOCK;
  };

  // GPR52 General Purpose Register
  struct Gpr52Fields {
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
  };  // struct Gpr52Fields

  struct GPR52 : ftl::mmio::Register<
      0x400E40D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr52Fields::DWP,
      Gpr52Fields::DWP_LOCK> {
    using eDWP = Gpr52Fields::eDWP;
    using eDWP_LOCK = Gpr52Fields::eDWP_LOCK;
    using DWP = Gpr52Fields::DWP;
    using DWP_LOCK = Gpr52Fields::DWP_LOCK;
  };

  // GPR53 General Purpose Register
  struct Gpr53Fields {
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
  };  // struct Gpr53Fields

  struct GPR53 : ftl::mmio::Register<
      0x400E40D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr53Fields::DWP,
      Gpr53Fields::DWP_LOCK> {
    using eDWP = Gpr53Fields::eDWP;
    using eDWP_LOCK = Gpr53Fields::eDWP_LOCK;
    using DWP = Gpr53Fields::DWP;
    using DWP_LOCK = Gpr53Fields::DWP_LOCK;
  };

  // GPR54 General Purpose Register
  struct Gpr54Fields {
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
  };  // struct Gpr54Fields

  struct GPR54 : ftl::mmio::Register<
      0x400E40D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr54Fields::DWP,
      Gpr54Fields::DWP_LOCK> {
    using eDWP = Gpr54Fields::eDWP;
    using eDWP_LOCK = Gpr54Fields::eDWP_LOCK;
    using DWP = Gpr54Fields::DWP;
    using DWP_LOCK = Gpr54Fields::DWP_LOCK;
  };

  // GPR55 General Purpose Register
  struct Gpr55Fields {
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
  };  // struct Gpr55Fields

  struct GPR55 : ftl::mmio::Register<
      0x400E40DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<28, 0>,
      Gpr55Fields::DWP,
      Gpr55Fields::DWP_LOCK> {
    using eDWP = Gpr55Fields::eDWP;
    using eDWP_LOCK = Gpr55Fields::eDWP_LOCK;
    using DWP = Gpr55Fields::DWP;
    using DWP_LOCK = Gpr55Fields::DWP_LOCK;
  };

  // GPR59 General Purpose Register
  struct Gpr59Fields {
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
  };  // struct Gpr59Fields

  struct GPR59 : ftl::mmio::Register<
      0x400E40ECu,
      std::uint32_t,
      0x00000550u,
      ftl::mmio::RW,
      Gpr59Fields::MIPI_CSI_AUTO_PD_EN,
      Gpr59Fields::MIPI_CSI_SOFT_RST_N,
      Gpr59Fields::MIPI_CSI_CONT_CLK_MODE,
      Gpr59Fields::MIPI_CSI_DDRCLK_EN,
      Gpr59Fields::MIPI_CSI_PD_RX,
      Gpr59Fields::MIPI_CSI_RX_ENABLE,
      Gpr59Fields::MIPI_CSI_RX_RCAL,
      Gpr59Fields::MIPI_CSI_RXCDRP,
      Gpr59Fields::MIPI_CSI_RXLPRP,
      Gpr59Fields::MIPI_CSI_S_PRG_RXHS_SETTLE,
      ftl::mmio::Reserved<10, 18>,
      Gpr59Fields::DWP,
      Gpr59Fields::DWP_LOCK> {
    using eMIPI_CSI_SOFT_RST_N = Gpr59Fields::eMIPI_CSI_SOFT_RST_N;
    using eMIPI_CSI_RXCDRP = Gpr59Fields::eMIPI_CSI_RXCDRP;
    using eDWP = Gpr59Fields::eDWP;
    using eDWP_LOCK = Gpr59Fields::eDWP_LOCK;
    using MIPI_CSI_AUTO_PD_EN = Gpr59Fields::MIPI_CSI_AUTO_PD_EN;
    using MIPI_CSI_SOFT_RST_N = Gpr59Fields::MIPI_CSI_SOFT_RST_N;
    using MIPI_CSI_CONT_CLK_MODE = Gpr59Fields::MIPI_CSI_CONT_CLK_MODE;
    using MIPI_CSI_DDRCLK_EN = Gpr59Fields::MIPI_CSI_DDRCLK_EN;
    using MIPI_CSI_PD_RX = Gpr59Fields::MIPI_CSI_PD_RX;
    using MIPI_CSI_RX_ENABLE = Gpr59Fields::MIPI_CSI_RX_ENABLE;
    using MIPI_CSI_RX_RCAL = Gpr59Fields::MIPI_CSI_RX_RCAL;
    using MIPI_CSI_RXCDRP = Gpr59Fields::MIPI_CSI_RXCDRP;
    using MIPI_CSI_RXLPRP = Gpr59Fields::MIPI_CSI_RXLPRP;
    using MIPI_CSI_S_PRG_RXHS_SETTLE = Gpr59Fields::MIPI_CSI_S_PRG_RXHS_SETTLE;
    using DWP = Gpr59Fields::DWP;
    using DWP_LOCK = Gpr59Fields::DWP_LOCK;
  };

  // GPR62 General Purpose Register
  struct Gpr62Fields {
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
  };  // struct Gpr62Fields

  struct GPR62 : ftl::mmio::Register<
      0x400E40F8u,
      std::uint32_t,
      0x000002DBu,
      ftl::mmio::RW,
      Gpr62Fields::MIPI_DSI_CLK_TM,
      Gpr62Fields::MIPI_DSI_D0_TM,
      Gpr62Fields::MIPI_DSI_D1_TM,
      Gpr62Fields::MIPI_DSI_TX_RCAL,
      Gpr62Fields::MIPI_DSI_TX_ULPS_ENABLE,
      ftl::mmio::Reserved<2, 14>,
      Gpr62Fields::MIPI_DSI_PCLK_SOFT_RESET_N,
      Gpr62Fields::MIPI_DSI_BYTE_SOFT_RESET_N,
      Gpr62Fields::MIPI_DSI_DPI_SOFT_RESET_N,
      Gpr62Fields::MIPI_DSI_ESC_SOFT_RESET_N,
      ftl::mmio::Reserved<8, 20>,
      Gpr62Fields::DWP,
      Gpr62Fields::DWP_LOCK> {
    using eMIPI_DSI_PCLK_SOFT_RESET_N = Gpr62Fields::eMIPI_DSI_PCLK_SOFT_RESET_N;
    using eMIPI_DSI_BYTE_SOFT_RESET_N = Gpr62Fields::eMIPI_DSI_BYTE_SOFT_RESET_N;
    using eMIPI_DSI_DPI_SOFT_RESET_N = Gpr62Fields::eMIPI_DSI_DPI_SOFT_RESET_N;
    using eMIPI_DSI_ESC_SOFT_RESET_N = Gpr62Fields::eMIPI_DSI_ESC_SOFT_RESET_N;
    using eDWP = Gpr62Fields::eDWP;
    using eDWP_LOCK = Gpr62Fields::eDWP_LOCK;
    using MIPI_DSI_CLK_TM = Gpr62Fields::MIPI_DSI_CLK_TM;
    using MIPI_DSI_D0_TM = Gpr62Fields::MIPI_DSI_D0_TM;
    using MIPI_DSI_D1_TM = Gpr62Fields::MIPI_DSI_D1_TM;
    using MIPI_DSI_TX_RCAL = Gpr62Fields::MIPI_DSI_TX_RCAL;
    using MIPI_DSI_TX_ULPS_ENABLE = Gpr62Fields::MIPI_DSI_TX_ULPS_ENABLE;
    using MIPI_DSI_PCLK_SOFT_RESET_N = Gpr62Fields::MIPI_DSI_PCLK_SOFT_RESET_N;
    using MIPI_DSI_BYTE_SOFT_RESET_N = Gpr62Fields::MIPI_DSI_BYTE_SOFT_RESET_N;
    using MIPI_DSI_DPI_SOFT_RESET_N = Gpr62Fields::MIPI_DSI_DPI_SOFT_RESET_N;
    using MIPI_DSI_ESC_SOFT_RESET_N = Gpr62Fields::MIPI_DSI_ESC_SOFT_RESET_N;
    using DWP = Gpr62Fields::DWP;
    using DWP_LOCK = Gpr62Fields::DWP_LOCK;
  };

  // GPR63 General Purpose Register
  struct Gpr63Fields {
    // DSI transmit ULPS mode active flag
    using MIPI_DSI_TX_ULPS_ACTIVE = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Gpr63Fields

  struct GPR63 : ftl::mmio::Register<
      0x400E40FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Gpr63Fields::MIPI_DSI_TX_ULPS_ACTIVE,
      ftl::mmio::Reserved<29, 3>> {
    using MIPI_DSI_TX_ULPS_ACTIVE = Gpr63Fields::MIPI_DSI_TX_ULPS_ACTIVE;
  };

  // GPR64 General Purpose Register
  struct Gpr64Fields {
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
  };  // struct Gpr64Fields

  struct GPR64 : ftl::mmio::Register<
      0x400E4100u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr64Fields::GPIO_DISP1_FREEZE,
      Gpr64Fields::GPIO_DISP1_COMPTQ,
      Gpr64Fields::GPIO_DISP1_COMPEN,
      Gpr64Fields::GPIO_DISP1_FASTFRZ_EN,
      Gpr64Fields::GPIO_DISP1_RASRCP,
      Gpr64Fields::GPIO_DISP1_RASRCN,
      Gpr64Fields::GPIO_DISP1_SELECT_NASRC,
      Gpr64Fields::GPIO_DISP1_REFGEN_SLEEP,
      Gpr64Fields::GPIO_DISP1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      Gpr64Fields::GPIO_DISP1_COMPOK,
      Gpr64Fields::GPIO_DISP1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      Gpr64Fields::DWP,
      Gpr64Fields::DWP_LOCK> {
    using eDWP = Gpr64Fields::eDWP;
    using eDWP_LOCK = Gpr64Fields::eDWP_LOCK;
    using GPIO_DISP1_FREEZE = Gpr64Fields::GPIO_DISP1_FREEZE;
    using GPIO_DISP1_COMPTQ = Gpr64Fields::GPIO_DISP1_COMPTQ;
    using GPIO_DISP1_COMPEN = Gpr64Fields::GPIO_DISP1_COMPEN;
    using GPIO_DISP1_FASTFRZ_EN = Gpr64Fields::GPIO_DISP1_FASTFRZ_EN;
    using GPIO_DISP1_RASRCP = Gpr64Fields::GPIO_DISP1_RASRCP;
    using GPIO_DISP1_RASRCN = Gpr64Fields::GPIO_DISP1_RASRCN;
    using GPIO_DISP1_SELECT_NASRC = Gpr64Fields::GPIO_DISP1_SELECT_NASRC;
    using GPIO_DISP1_REFGEN_SLEEP = Gpr64Fields::GPIO_DISP1_REFGEN_SLEEP;
    using GPIO_DISP1_SUPLYDET_LATCH = Gpr64Fields::GPIO_DISP1_SUPLYDET_LATCH;
    using GPIO_DISP1_COMPOK = Gpr64Fields::GPIO_DISP1_COMPOK;
    using GPIO_DISP1_NASRC = Gpr64Fields::GPIO_DISP1_NASRC;
    using DWP = Gpr64Fields::DWP;
    using DWP_LOCK = Gpr64Fields::DWP_LOCK;
  };

  // GPR65 General Purpose Register
  struct Gpr65Fields {
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
  };  // struct Gpr65Fields

  struct GPR65 : ftl::mmio::Register<
      0x400E4104u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr65Fields::GPIO_EMC1_FREEZE,
      Gpr65Fields::GPIO_EMC1_COMPTQ,
      Gpr65Fields::GPIO_EMC1_COMPEN,
      Gpr65Fields::GPIO_EMC1_FASTFRZ_EN,
      Gpr65Fields::GPIO_EMC1_RASRCP,
      Gpr65Fields::GPIO_EMC1_RASRCN,
      Gpr65Fields::GPIO_EMC1_SELECT_NASRC,
      Gpr65Fields::GPIO_EMC1_REFGEN_SLEEP,
      Gpr65Fields::GPIO_EMC1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      Gpr65Fields::GPIO_EMC1_COMPOK,
      Gpr65Fields::GPIO_EMC1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      Gpr65Fields::DWP,
      Gpr65Fields::DWP_LOCK> {
    using eDWP = Gpr65Fields::eDWP;
    using eDWP_LOCK = Gpr65Fields::eDWP_LOCK;
    using GPIO_EMC1_FREEZE = Gpr65Fields::GPIO_EMC1_FREEZE;
    using GPIO_EMC1_COMPTQ = Gpr65Fields::GPIO_EMC1_COMPTQ;
    using GPIO_EMC1_COMPEN = Gpr65Fields::GPIO_EMC1_COMPEN;
    using GPIO_EMC1_FASTFRZ_EN = Gpr65Fields::GPIO_EMC1_FASTFRZ_EN;
    using GPIO_EMC1_RASRCP = Gpr65Fields::GPIO_EMC1_RASRCP;
    using GPIO_EMC1_RASRCN = Gpr65Fields::GPIO_EMC1_RASRCN;
    using GPIO_EMC1_SELECT_NASRC = Gpr65Fields::GPIO_EMC1_SELECT_NASRC;
    using GPIO_EMC1_REFGEN_SLEEP = Gpr65Fields::GPIO_EMC1_REFGEN_SLEEP;
    using GPIO_EMC1_SUPLYDET_LATCH = Gpr65Fields::GPIO_EMC1_SUPLYDET_LATCH;
    using GPIO_EMC1_COMPOK = Gpr65Fields::GPIO_EMC1_COMPOK;
    using GPIO_EMC1_NASRC = Gpr65Fields::GPIO_EMC1_NASRC;
    using DWP = Gpr65Fields::DWP;
    using DWP_LOCK = Gpr65Fields::DWP_LOCK;
  };

  // GPR66 General Purpose Register
  struct Gpr66Fields {
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
  };  // struct Gpr66Fields

  struct GPR66 : ftl::mmio::Register<
      0x400E4108u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr66Fields::GPIO_EMC2_FREEZE,
      Gpr66Fields::GPIO_EMC2_COMPTQ,
      Gpr66Fields::GPIO_EMC2_COMPEN,
      Gpr66Fields::GPIO_EMC2_FASTFRZ_EN,
      Gpr66Fields::GPIO_EMC2_RASRCP,
      Gpr66Fields::GPIO_EMC2_RASRCN,
      Gpr66Fields::GPIO_EMC2_SELECT_NASRC,
      Gpr66Fields::GPIO_EMC2_REFGEN_SLEEP,
      Gpr66Fields::GPIO_EMC2_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      Gpr66Fields::GPIO_EMC2_COMPOK,
      Gpr66Fields::GPIO_EMC2_NASRC,
      ftl::mmio::Reserved<3, 25>,
      Gpr66Fields::DWP,
      Gpr66Fields::DWP_LOCK> {
    using eDWP = Gpr66Fields::eDWP;
    using eDWP_LOCK = Gpr66Fields::eDWP_LOCK;
    using GPIO_EMC2_FREEZE = Gpr66Fields::GPIO_EMC2_FREEZE;
    using GPIO_EMC2_COMPTQ = Gpr66Fields::GPIO_EMC2_COMPTQ;
    using GPIO_EMC2_COMPEN = Gpr66Fields::GPIO_EMC2_COMPEN;
    using GPIO_EMC2_FASTFRZ_EN = Gpr66Fields::GPIO_EMC2_FASTFRZ_EN;
    using GPIO_EMC2_RASRCP = Gpr66Fields::GPIO_EMC2_RASRCP;
    using GPIO_EMC2_RASRCN = Gpr66Fields::GPIO_EMC2_RASRCN;
    using GPIO_EMC2_SELECT_NASRC = Gpr66Fields::GPIO_EMC2_SELECT_NASRC;
    using GPIO_EMC2_REFGEN_SLEEP = Gpr66Fields::GPIO_EMC2_REFGEN_SLEEP;
    using GPIO_EMC2_SUPLYDET_LATCH = Gpr66Fields::GPIO_EMC2_SUPLYDET_LATCH;
    using GPIO_EMC2_COMPOK = Gpr66Fields::GPIO_EMC2_COMPOK;
    using GPIO_EMC2_NASRC = Gpr66Fields::GPIO_EMC2_NASRC;
    using DWP = Gpr66Fields::DWP;
    using DWP_LOCK = Gpr66Fields::DWP_LOCK;
  };

  // GPR67 General Purpose Register
  struct Gpr67Fields {
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
  };  // struct Gpr67Fields

  struct GPR67 : ftl::mmio::Register<
      0x400E410Cu,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr67Fields::GPIO_SD1_FREEZE,
      Gpr67Fields::GPIO_SD1_COMPTQ,
      Gpr67Fields::GPIO_SD1_COMPEN,
      Gpr67Fields::GPIO_SD1_FASTFRZ_EN,
      Gpr67Fields::GPIO_SD1_RASRCP,
      Gpr67Fields::GPIO_SD1_RASRCN,
      Gpr67Fields::GPIO_SD1_SELECT_NASRC,
      Gpr67Fields::GPIO_SD1_REFGEN_SLEEP,
      Gpr67Fields::GPIO_SD1_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      Gpr67Fields::GPIO_SD1_COMPOK,
      Gpr67Fields::GPIO_SD1_NASRC,
      ftl::mmio::Reserved<3, 25>,
      Gpr67Fields::DWP,
      Gpr67Fields::DWP_LOCK> {
    using eDWP = Gpr67Fields::eDWP;
    using eDWP_LOCK = Gpr67Fields::eDWP_LOCK;
    using GPIO_SD1_FREEZE = Gpr67Fields::GPIO_SD1_FREEZE;
    using GPIO_SD1_COMPTQ = Gpr67Fields::GPIO_SD1_COMPTQ;
    using GPIO_SD1_COMPEN = Gpr67Fields::GPIO_SD1_COMPEN;
    using GPIO_SD1_FASTFRZ_EN = Gpr67Fields::GPIO_SD1_FASTFRZ_EN;
    using GPIO_SD1_RASRCP = Gpr67Fields::GPIO_SD1_RASRCP;
    using GPIO_SD1_RASRCN = Gpr67Fields::GPIO_SD1_RASRCN;
    using GPIO_SD1_SELECT_NASRC = Gpr67Fields::GPIO_SD1_SELECT_NASRC;
    using GPIO_SD1_REFGEN_SLEEP = Gpr67Fields::GPIO_SD1_REFGEN_SLEEP;
    using GPIO_SD1_SUPLYDET_LATCH = Gpr67Fields::GPIO_SD1_SUPLYDET_LATCH;
    using GPIO_SD1_COMPOK = Gpr67Fields::GPIO_SD1_COMPOK;
    using GPIO_SD1_NASRC = Gpr67Fields::GPIO_SD1_NASRC;
    using DWP = Gpr67Fields::DWP;
    using DWP_LOCK = Gpr67Fields::DWP_LOCK;
  };

  // GPR68 General Purpose Register
  struct Gpr68Fields {
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
  };  // struct Gpr68Fields

  struct GPR68 : ftl::mmio::Register<
      0x400E4110u,
      std::uint32_t,
      0x00004000u,
      ftl::mmio::RW,
      Gpr68Fields::GPIO_SD2_FREEZE,
      Gpr68Fields::GPIO_SD2_COMPTQ,
      Gpr68Fields::GPIO_SD2_COMPEN,
      Gpr68Fields::GPIO_SD2_FASTFRZ_EN,
      Gpr68Fields::GPIO_SD2_RASRCP,
      Gpr68Fields::GPIO_SD2_RASRCN,
      Gpr68Fields::GPIO_SD2_SELECT_NASRC,
      Gpr68Fields::GPIO_SD2_REFGEN_SLEEP,
      Gpr68Fields::GPIO_SD2_SUPLYDET_LATCH,
      ftl::mmio::Reserved<5, 15>,
      Gpr68Fields::GPIO_SD2_COMPOK,
      Gpr68Fields::GPIO_SD2_NASRC,
      ftl::mmio::Reserved<3, 25>,
      Gpr68Fields::DWP,
      Gpr68Fields::DWP_LOCK> {
    using eDWP = Gpr68Fields::eDWP;
    using eDWP_LOCK = Gpr68Fields::eDWP_LOCK;
    using GPIO_SD2_FREEZE = Gpr68Fields::GPIO_SD2_FREEZE;
    using GPIO_SD2_COMPTQ = Gpr68Fields::GPIO_SD2_COMPTQ;
    using GPIO_SD2_COMPEN = Gpr68Fields::GPIO_SD2_COMPEN;
    using GPIO_SD2_FASTFRZ_EN = Gpr68Fields::GPIO_SD2_FASTFRZ_EN;
    using GPIO_SD2_RASRCP = Gpr68Fields::GPIO_SD2_RASRCP;
    using GPIO_SD2_RASRCN = Gpr68Fields::GPIO_SD2_RASRCN;
    using GPIO_SD2_SELECT_NASRC = Gpr68Fields::GPIO_SD2_SELECT_NASRC;
    using GPIO_SD2_REFGEN_SLEEP = Gpr68Fields::GPIO_SD2_REFGEN_SLEEP;
    using GPIO_SD2_SUPLYDET_LATCH = Gpr68Fields::GPIO_SD2_SUPLYDET_LATCH;
    using GPIO_SD2_COMPOK = Gpr68Fields::GPIO_SD2_COMPOK;
    using GPIO_SD2_NASRC = Gpr68Fields::GPIO_SD2_NASRC;
    using DWP = Gpr68Fields::DWP;
    using DWP_LOCK = Gpr68Fields::DWP_LOCK;
  };

  // GPR69 General Purpose Register
  struct Gpr69Fields {
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
  };  // struct Gpr69Fields

  struct GPR69 : ftl::mmio::Register<
      0x400E4114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Gpr69Fields::GPIO_DISP2_HIGH_RANGE,
      Gpr69Fields::GPIO_DISP2_LOW_RANGE,
      ftl::mmio::Reserved<1, 3>,
      Gpr69Fields::GPIO_AD0_HIGH_RANGE,
      Gpr69Fields::GPIO_AD0_LOW_RANGE,
      ftl::mmio::Reserved<1, 6>,
      Gpr69Fields::GPIO_AD1_HIGH_RANGE,
      Gpr69Fields::GPIO_AD1_LOW_RANGE,
      Gpr69Fields::SUPLYDET_DISP1_SLEEP,
      Gpr69Fields::SUPLYDET_EMC1_SLEEP,
      Gpr69Fields::SUPLYDET_EMC2_SLEEP,
      Gpr69Fields::SUPLYDET_SD1_SLEEP,
      Gpr69Fields::SUPLYDET_SD2_SLEEP,
      ftl::mmio::Reserved<14, 14>,
      Gpr69Fields::DWP,
      Gpr69Fields::DWP_LOCK> {
    using eDWP = Gpr69Fields::eDWP;
    using eDWP_LOCK = Gpr69Fields::eDWP_LOCK;
    using GPIO_DISP2_HIGH_RANGE = Gpr69Fields::GPIO_DISP2_HIGH_RANGE;
    using GPIO_DISP2_LOW_RANGE = Gpr69Fields::GPIO_DISP2_LOW_RANGE;
    using GPIO_AD0_HIGH_RANGE = Gpr69Fields::GPIO_AD0_HIGH_RANGE;
    using GPIO_AD0_LOW_RANGE = Gpr69Fields::GPIO_AD0_LOW_RANGE;
    using GPIO_AD1_HIGH_RANGE = Gpr69Fields::GPIO_AD1_HIGH_RANGE;
    using GPIO_AD1_LOW_RANGE = Gpr69Fields::GPIO_AD1_LOW_RANGE;
    using SUPLYDET_DISP1_SLEEP = Gpr69Fields::SUPLYDET_DISP1_SLEEP;
    using SUPLYDET_EMC1_SLEEP = Gpr69Fields::SUPLYDET_EMC1_SLEEP;
    using SUPLYDET_EMC2_SLEEP = Gpr69Fields::SUPLYDET_EMC2_SLEEP;
    using SUPLYDET_SD1_SLEEP = Gpr69Fields::SUPLYDET_SD1_SLEEP;
    using SUPLYDET_SD2_SLEEP = Gpr69Fields::SUPLYDET_SD2_SLEEP;
    using DWP = Gpr69Fields::DWP;
    using DWP_LOCK = Gpr69Fields::DWP_LOCK;
  };

  // GPR70 General Purpose Register
  struct Gpr70Fields {
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
  };  // struct Gpr70Fields

  struct GPR70 : ftl::mmio::Register<
      0x400E4118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr70Fields::ADC1_IPG_DOZE,
      Gpr70Fields::ADC1_STOP_REQ,
      Gpr70Fields::ADC1_IPG_STOP_MODE,
      Gpr70Fields::ADC2_IPG_DOZE,
      Gpr70Fields::ADC2_STOP_REQ,
      Gpr70Fields::ADC2_IPG_STOP_MODE,
      Gpr70Fields::CAAM_IPG_DOZE,
      Gpr70Fields::CAAM_STOP_REQ,
      Gpr70Fields::CAN1_IPG_DOZE,
      Gpr70Fields::CAN1_STOP_REQ,
      Gpr70Fields::CAN2_IPG_DOZE,
      Gpr70Fields::CAN2_STOP_REQ,
      Gpr70Fields::CAN3_IPG_DOZE,
      Gpr70Fields::CAN3_STOP_REQ,
      ftl::mmio::Reserved<1, 14>,
      Gpr70Fields::EDMA_STOP_REQ,
      Gpr70Fields::EDMA_LPSR_STOP_REQ,
      Gpr70Fields::ENET_IPG_DOZE,
      Gpr70Fields::ENET_STOP_REQ,
      Gpr70Fields::ENET1G_IPG_DOZE,
      Gpr70Fields::ENET1G_STOP_REQ,
      Gpr70Fields::FLEXIO1_IPG_DOZE,
      Gpr70Fields::FLEXIO2_IPG_DOZE,
      Gpr70Fields::FLEXSPI1_IPG_DOZE,
      Gpr70Fields::FLEXSPI1_STOP_REQ,
      Gpr70Fields::FLEXSPI2_IPG_DOZE,
      Gpr70Fields::FLEXSPI2_STOP_REQ,
      ftl::mmio::Reserved<1, 27>,
      Gpr70Fields::DWP,
      Gpr70Fields::DWP_LOCK> {
    using eADC1_IPG_STOP_MODE = Gpr70Fields::eADC1_IPG_STOP_MODE;
    using eADC2_IPG_STOP_MODE = Gpr70Fields::eADC2_IPG_STOP_MODE;
    using eDWP = Gpr70Fields::eDWP;
    using eDWP_LOCK = Gpr70Fields::eDWP_LOCK;
    using ADC1_IPG_DOZE = Gpr70Fields::ADC1_IPG_DOZE;
    using ADC1_STOP_REQ = Gpr70Fields::ADC1_STOP_REQ;
    using ADC1_IPG_STOP_MODE = Gpr70Fields::ADC1_IPG_STOP_MODE;
    using ADC2_IPG_DOZE = Gpr70Fields::ADC2_IPG_DOZE;
    using ADC2_STOP_REQ = Gpr70Fields::ADC2_STOP_REQ;
    using ADC2_IPG_STOP_MODE = Gpr70Fields::ADC2_IPG_STOP_MODE;
    using CAAM_IPG_DOZE = Gpr70Fields::CAAM_IPG_DOZE;
    using CAAM_STOP_REQ = Gpr70Fields::CAAM_STOP_REQ;
    using CAN1_IPG_DOZE = Gpr70Fields::CAN1_IPG_DOZE;
    using CAN1_STOP_REQ = Gpr70Fields::CAN1_STOP_REQ;
    using CAN2_IPG_DOZE = Gpr70Fields::CAN2_IPG_DOZE;
    using CAN2_STOP_REQ = Gpr70Fields::CAN2_STOP_REQ;
    using CAN3_IPG_DOZE = Gpr70Fields::CAN3_IPG_DOZE;
    using CAN3_STOP_REQ = Gpr70Fields::CAN3_STOP_REQ;
    using EDMA_STOP_REQ = Gpr70Fields::EDMA_STOP_REQ;
    using EDMA_LPSR_STOP_REQ = Gpr70Fields::EDMA_LPSR_STOP_REQ;
    using ENET_IPG_DOZE = Gpr70Fields::ENET_IPG_DOZE;
    using ENET_STOP_REQ = Gpr70Fields::ENET_STOP_REQ;
    using ENET1G_IPG_DOZE = Gpr70Fields::ENET1G_IPG_DOZE;
    using ENET1G_STOP_REQ = Gpr70Fields::ENET1G_STOP_REQ;
    using FLEXIO1_IPG_DOZE = Gpr70Fields::FLEXIO1_IPG_DOZE;
    using FLEXIO2_IPG_DOZE = Gpr70Fields::FLEXIO2_IPG_DOZE;
    using FLEXSPI1_IPG_DOZE = Gpr70Fields::FLEXSPI1_IPG_DOZE;
    using FLEXSPI1_STOP_REQ = Gpr70Fields::FLEXSPI1_STOP_REQ;
    using FLEXSPI2_IPG_DOZE = Gpr70Fields::FLEXSPI2_IPG_DOZE;
    using FLEXSPI2_STOP_REQ = Gpr70Fields::FLEXSPI2_STOP_REQ;
    using DWP = Gpr70Fields::DWP;
    using DWP_LOCK = Gpr70Fields::DWP_LOCK;
  };

  // GPR71 General Purpose Register
  struct Gpr71Fields {
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
  };  // struct Gpr71Fields

  struct GPR71 : ftl::mmio::Register<
      0x400E411Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr71Fields::GPT1_IPG_DOZE,
      Gpr71Fields::GPT2_IPG_DOZE,
      Gpr71Fields::GPT3_IPG_DOZE,
      Gpr71Fields::GPT4_IPG_DOZE,
      Gpr71Fields::GPT5_IPG_DOZE,
      Gpr71Fields::GPT6_IPG_DOZE,
      Gpr71Fields::LPI2C1_IPG_DOZE,
      Gpr71Fields::LPI2C1_STOP_REQ,
      Gpr71Fields::LPI2C1_IPG_STOP_MODE,
      Gpr71Fields::LPI2C2_IPG_DOZE,
      Gpr71Fields::LPI2C2_STOP_REQ,
      Gpr71Fields::LPI2C2_IPG_STOP_MODE,
      Gpr71Fields::LPI2C3_IPG_DOZE,
      Gpr71Fields::LPI2C3_STOP_REQ,
      Gpr71Fields::LPI2C3_IPG_STOP_MODE,
      Gpr71Fields::LPI2C4_IPG_DOZE,
      Gpr71Fields::LPI2C4_STOP_REQ,
      Gpr71Fields::LPI2C4_IPG_STOP_MODE,
      Gpr71Fields::LPI2C5_IPG_DOZE,
      Gpr71Fields::LPI2C5_STOP_REQ,
      Gpr71Fields::LPI2C5_IPG_STOP_MODE,
      Gpr71Fields::LPI2C6_IPG_DOZE,
      Gpr71Fields::LPI2C6_STOP_REQ,
      Gpr71Fields::LPI2C6_IPG_STOP_MODE,
      Gpr71Fields::LPSPI1_IPG_DOZE,
      Gpr71Fields::LPSPI1_STOP_REQ,
      Gpr71Fields::LPSPI1_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr71Fields::DWP,
      Gpr71Fields::DWP_LOCK> {
    using eLPI2C1_IPG_STOP_MODE = Gpr71Fields::eLPI2C1_IPG_STOP_MODE;
    using eLPI2C2_IPG_STOP_MODE = Gpr71Fields::eLPI2C2_IPG_STOP_MODE;
    using eLPI2C3_IPG_STOP_MODE = Gpr71Fields::eLPI2C3_IPG_STOP_MODE;
    using eLPI2C4_IPG_STOP_MODE = Gpr71Fields::eLPI2C4_IPG_STOP_MODE;
    using eLPI2C5_IPG_STOP_MODE = Gpr71Fields::eLPI2C5_IPG_STOP_MODE;
    using eLPI2C6_IPG_STOP_MODE = Gpr71Fields::eLPI2C6_IPG_STOP_MODE;
    using eLPSPI1_IPG_STOP_MODE = Gpr71Fields::eLPSPI1_IPG_STOP_MODE;
    using eDWP = Gpr71Fields::eDWP;
    using eDWP_LOCK = Gpr71Fields::eDWP_LOCK;
    using GPT1_IPG_DOZE = Gpr71Fields::GPT1_IPG_DOZE;
    using GPT2_IPG_DOZE = Gpr71Fields::GPT2_IPG_DOZE;
    using GPT3_IPG_DOZE = Gpr71Fields::GPT3_IPG_DOZE;
    using GPT4_IPG_DOZE = Gpr71Fields::GPT4_IPG_DOZE;
    using GPT5_IPG_DOZE = Gpr71Fields::GPT5_IPG_DOZE;
    using GPT6_IPG_DOZE = Gpr71Fields::GPT6_IPG_DOZE;
    using LPI2C1_IPG_DOZE = Gpr71Fields::LPI2C1_IPG_DOZE;
    using LPI2C1_STOP_REQ = Gpr71Fields::LPI2C1_STOP_REQ;
    using LPI2C1_IPG_STOP_MODE = Gpr71Fields::LPI2C1_IPG_STOP_MODE;
    using LPI2C2_IPG_DOZE = Gpr71Fields::LPI2C2_IPG_DOZE;
    using LPI2C2_STOP_REQ = Gpr71Fields::LPI2C2_STOP_REQ;
    using LPI2C2_IPG_STOP_MODE = Gpr71Fields::LPI2C2_IPG_STOP_MODE;
    using LPI2C3_IPG_DOZE = Gpr71Fields::LPI2C3_IPG_DOZE;
    using LPI2C3_STOP_REQ = Gpr71Fields::LPI2C3_STOP_REQ;
    using LPI2C3_IPG_STOP_MODE = Gpr71Fields::LPI2C3_IPG_STOP_MODE;
    using LPI2C4_IPG_DOZE = Gpr71Fields::LPI2C4_IPG_DOZE;
    using LPI2C4_STOP_REQ = Gpr71Fields::LPI2C4_STOP_REQ;
    using LPI2C4_IPG_STOP_MODE = Gpr71Fields::LPI2C4_IPG_STOP_MODE;
    using LPI2C5_IPG_DOZE = Gpr71Fields::LPI2C5_IPG_DOZE;
    using LPI2C5_STOP_REQ = Gpr71Fields::LPI2C5_STOP_REQ;
    using LPI2C5_IPG_STOP_MODE = Gpr71Fields::LPI2C5_IPG_STOP_MODE;
    using LPI2C6_IPG_DOZE = Gpr71Fields::LPI2C6_IPG_DOZE;
    using LPI2C6_STOP_REQ = Gpr71Fields::LPI2C6_STOP_REQ;
    using LPI2C6_IPG_STOP_MODE = Gpr71Fields::LPI2C6_IPG_STOP_MODE;
    using LPSPI1_IPG_DOZE = Gpr71Fields::LPSPI1_IPG_DOZE;
    using LPSPI1_STOP_REQ = Gpr71Fields::LPSPI1_STOP_REQ;
    using LPSPI1_IPG_STOP_MODE = Gpr71Fields::LPSPI1_IPG_STOP_MODE;
    using DWP = Gpr71Fields::DWP;
    using DWP_LOCK = Gpr71Fields::DWP_LOCK;
  };

  // GPR72 General Purpose Register
  struct Gpr72Fields {
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
  };  // struct Gpr72Fields

  struct GPR72 : ftl::mmio::Register<
      0x400E4120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr72Fields::LPSPI2_IPG_DOZE,
      Gpr72Fields::LPSPI2_STOP_REQ,
      Gpr72Fields::LPSPI2_IPG_STOP_MODE,
      Gpr72Fields::LPSPI3_IPG_DOZE,
      Gpr72Fields::LPSPI3_STOP_REQ,
      Gpr72Fields::LPSPI3_IPG_STOP_MODE,
      Gpr72Fields::LPSPI4_IPG_DOZE,
      Gpr72Fields::LPSPI4_STOP_REQ,
      Gpr72Fields::LPSPI4_IPG_STOP_MODE,
      Gpr72Fields::LPSPI5_IPG_DOZE,
      Gpr72Fields::LPSPI5_STOP_REQ,
      Gpr72Fields::LPSPI5_IPG_STOP_MODE,
      Gpr72Fields::LPSPI6_IPG_DOZE,
      Gpr72Fields::LPSPI6_STOP_REQ,
      Gpr72Fields::LPSPI6_IPG_STOP_MODE,
      Gpr72Fields::LPUART1_IPG_DOZE,
      Gpr72Fields::LPUART1_STOP_REQ,
      Gpr72Fields::LPUART1_IPG_STOP_MODE,
      Gpr72Fields::LPUART2_IPG_DOZE,
      Gpr72Fields::LPUART2_STOP_REQ,
      Gpr72Fields::LPUART2_IPG_STOP_MODE,
      Gpr72Fields::LPUART3_IPG_DOZE,
      Gpr72Fields::LPUART3_STOP_REQ,
      Gpr72Fields::LPUART3_IPG_STOP_MODE,
      Gpr72Fields::LPUART4_IPG_DOZE,
      Gpr72Fields::LPUART4_STOP_REQ,
      Gpr72Fields::LPUART4_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr72Fields::DWP,
      Gpr72Fields::DWP_LOCK> {
    using eLPSPI2_IPG_STOP_MODE = Gpr72Fields::eLPSPI2_IPG_STOP_MODE;
    using eLPSPI3_IPG_STOP_MODE = Gpr72Fields::eLPSPI3_IPG_STOP_MODE;
    using eLPSPI4_IPG_STOP_MODE = Gpr72Fields::eLPSPI4_IPG_STOP_MODE;
    using eLPSPI5_IPG_STOP_MODE = Gpr72Fields::eLPSPI5_IPG_STOP_MODE;
    using eLPSPI6_IPG_STOP_MODE = Gpr72Fields::eLPSPI6_IPG_STOP_MODE;
    using eLPUART1_IPG_STOP_MODE = Gpr72Fields::eLPUART1_IPG_STOP_MODE;
    using eLPUART2_IPG_STOP_MODE = Gpr72Fields::eLPUART2_IPG_STOP_MODE;
    using eLPUART3_IPG_STOP_MODE = Gpr72Fields::eLPUART3_IPG_STOP_MODE;
    using eLPUART4_IPG_STOP_MODE = Gpr72Fields::eLPUART4_IPG_STOP_MODE;
    using eDWP = Gpr72Fields::eDWP;
    using eDWP_LOCK = Gpr72Fields::eDWP_LOCK;
    using LPSPI2_IPG_DOZE = Gpr72Fields::LPSPI2_IPG_DOZE;
    using LPSPI2_STOP_REQ = Gpr72Fields::LPSPI2_STOP_REQ;
    using LPSPI2_IPG_STOP_MODE = Gpr72Fields::LPSPI2_IPG_STOP_MODE;
    using LPSPI3_IPG_DOZE = Gpr72Fields::LPSPI3_IPG_DOZE;
    using LPSPI3_STOP_REQ = Gpr72Fields::LPSPI3_STOP_REQ;
    using LPSPI3_IPG_STOP_MODE = Gpr72Fields::LPSPI3_IPG_STOP_MODE;
    using LPSPI4_IPG_DOZE = Gpr72Fields::LPSPI4_IPG_DOZE;
    using LPSPI4_STOP_REQ = Gpr72Fields::LPSPI4_STOP_REQ;
    using LPSPI4_IPG_STOP_MODE = Gpr72Fields::LPSPI4_IPG_STOP_MODE;
    using LPSPI5_IPG_DOZE = Gpr72Fields::LPSPI5_IPG_DOZE;
    using LPSPI5_STOP_REQ = Gpr72Fields::LPSPI5_STOP_REQ;
    using LPSPI5_IPG_STOP_MODE = Gpr72Fields::LPSPI5_IPG_STOP_MODE;
    using LPSPI6_IPG_DOZE = Gpr72Fields::LPSPI6_IPG_DOZE;
    using LPSPI6_STOP_REQ = Gpr72Fields::LPSPI6_STOP_REQ;
    using LPSPI6_IPG_STOP_MODE = Gpr72Fields::LPSPI6_IPG_STOP_MODE;
    using LPUART1_IPG_DOZE = Gpr72Fields::LPUART1_IPG_DOZE;
    using LPUART1_STOP_REQ = Gpr72Fields::LPUART1_STOP_REQ;
    using LPUART1_IPG_STOP_MODE = Gpr72Fields::LPUART1_IPG_STOP_MODE;
    using LPUART2_IPG_DOZE = Gpr72Fields::LPUART2_IPG_DOZE;
    using LPUART2_STOP_REQ = Gpr72Fields::LPUART2_STOP_REQ;
    using LPUART2_IPG_STOP_MODE = Gpr72Fields::LPUART2_IPG_STOP_MODE;
    using LPUART3_IPG_DOZE = Gpr72Fields::LPUART3_IPG_DOZE;
    using LPUART3_STOP_REQ = Gpr72Fields::LPUART3_STOP_REQ;
    using LPUART3_IPG_STOP_MODE = Gpr72Fields::LPUART3_IPG_STOP_MODE;
    using LPUART4_IPG_DOZE = Gpr72Fields::LPUART4_IPG_DOZE;
    using LPUART4_STOP_REQ = Gpr72Fields::LPUART4_STOP_REQ;
    using LPUART4_IPG_STOP_MODE = Gpr72Fields::LPUART4_IPG_STOP_MODE;
    using DWP = Gpr72Fields::DWP;
    using DWP_LOCK = Gpr72Fields::DWP_LOCK;
  };

  // GPR73 General Purpose Register
  struct Gpr73Fields {
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
  };  // struct Gpr73Fields

  struct GPR73 : ftl::mmio::Register<
      0x400E4124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpr73Fields::LPUART5_IPG_DOZE,
      Gpr73Fields::LPUART5_STOP_REQ,
      Gpr73Fields::LPUART5_IPG_STOP_MODE,
      Gpr73Fields::LPUART6_IPG_DOZE,
      Gpr73Fields::LPUART6_STOP_REQ,
      Gpr73Fields::LPUART6_IPG_STOP_MODE,
      Gpr73Fields::LPUART7_IPG_DOZE,
      Gpr73Fields::LPUART7_STOP_REQ,
      Gpr73Fields::LPUART7_IPG_STOP_MODE,
      Gpr73Fields::LPUART8_IPG_DOZE,
      Gpr73Fields::LPUART8_STOP_REQ,
      Gpr73Fields::LPUART8_IPG_STOP_MODE,
      Gpr73Fields::LPUART9_IPG_DOZE,
      Gpr73Fields::LPUART9_STOP_REQ,
      Gpr73Fields::LPUART9_IPG_STOP_MODE,
      Gpr73Fields::LPUART10_IPG_DOZE,
      Gpr73Fields::LPUART10_STOP_REQ,
      Gpr73Fields::LPUART10_IPG_STOP_MODE,
      Gpr73Fields::LPUART11_IPG_DOZE,
      Gpr73Fields::LPUART11_STOP_REQ,
      Gpr73Fields::LPUART11_IPG_STOP_MODE,
      Gpr73Fields::LPUART12_IPG_DOZE,
      Gpr73Fields::LPUART12_STOP_REQ,
      Gpr73Fields::LPUART12_IPG_STOP_MODE,
      Gpr73Fields::MIC_IPG_DOZE,
      Gpr73Fields::MIC_STOP_REQ,
      Gpr73Fields::MIC_IPG_STOP_MODE,
      ftl::mmio::Reserved<1, 27>,
      Gpr73Fields::DWP,
      Gpr73Fields::DWP_LOCK> {
    using eLPUART5_IPG_STOP_MODE = Gpr73Fields::eLPUART5_IPG_STOP_MODE;
    using eLPUART6_IPG_STOP_MODE = Gpr73Fields::eLPUART6_IPG_STOP_MODE;
    using eLPUART7_IPG_STOP_MODE = Gpr73Fields::eLPUART7_IPG_STOP_MODE;
    using eLPUART8_IPG_STOP_MODE = Gpr73Fields::eLPUART8_IPG_STOP_MODE;
    using eLPUART9_IPG_STOP_MODE = Gpr73Fields::eLPUART9_IPG_STOP_MODE;
    using eLPUART10_IPG_STOP_MODE = Gpr73Fields::eLPUART10_IPG_STOP_MODE;
    using eLPUART11_IPG_STOP_MODE = Gpr73Fields::eLPUART11_IPG_STOP_MODE;
    using eLPUART12_IPG_STOP_MODE = Gpr73Fields::eLPUART12_IPG_STOP_MODE;
    using eMIC_IPG_STOP_MODE = Gpr73Fields::eMIC_IPG_STOP_MODE;
    using eDWP = Gpr73Fields::eDWP;
    using eDWP_LOCK = Gpr73Fields::eDWP_LOCK;
    using LPUART5_IPG_DOZE = Gpr73Fields::LPUART5_IPG_DOZE;
    using LPUART5_STOP_REQ = Gpr73Fields::LPUART5_STOP_REQ;
    using LPUART5_IPG_STOP_MODE = Gpr73Fields::LPUART5_IPG_STOP_MODE;
    using LPUART6_IPG_DOZE = Gpr73Fields::LPUART6_IPG_DOZE;
    using LPUART6_STOP_REQ = Gpr73Fields::LPUART6_STOP_REQ;
    using LPUART6_IPG_STOP_MODE = Gpr73Fields::LPUART6_IPG_STOP_MODE;
    using LPUART7_IPG_DOZE = Gpr73Fields::LPUART7_IPG_DOZE;
    using LPUART7_STOP_REQ = Gpr73Fields::LPUART7_STOP_REQ;
    using LPUART7_IPG_STOP_MODE = Gpr73Fields::LPUART7_IPG_STOP_MODE;
    using LPUART8_IPG_DOZE = Gpr73Fields::LPUART8_IPG_DOZE;
    using LPUART8_STOP_REQ = Gpr73Fields::LPUART8_STOP_REQ;
    using LPUART8_IPG_STOP_MODE = Gpr73Fields::LPUART8_IPG_STOP_MODE;
    using LPUART9_IPG_DOZE = Gpr73Fields::LPUART9_IPG_DOZE;
    using LPUART9_STOP_REQ = Gpr73Fields::LPUART9_STOP_REQ;
    using LPUART9_IPG_STOP_MODE = Gpr73Fields::LPUART9_IPG_STOP_MODE;
    using LPUART10_IPG_DOZE = Gpr73Fields::LPUART10_IPG_DOZE;
    using LPUART10_STOP_REQ = Gpr73Fields::LPUART10_STOP_REQ;
    using LPUART10_IPG_STOP_MODE = Gpr73Fields::LPUART10_IPG_STOP_MODE;
    using LPUART11_IPG_DOZE = Gpr73Fields::LPUART11_IPG_DOZE;
    using LPUART11_STOP_REQ = Gpr73Fields::LPUART11_STOP_REQ;
    using LPUART11_IPG_STOP_MODE = Gpr73Fields::LPUART11_IPG_STOP_MODE;
    using LPUART12_IPG_DOZE = Gpr73Fields::LPUART12_IPG_DOZE;
    using LPUART12_STOP_REQ = Gpr73Fields::LPUART12_STOP_REQ;
    using LPUART12_IPG_STOP_MODE = Gpr73Fields::LPUART12_IPG_STOP_MODE;
    using MIC_IPG_DOZE = Gpr73Fields::MIC_IPG_DOZE;
    using MIC_STOP_REQ = Gpr73Fields::MIC_STOP_REQ;
    using MIC_IPG_STOP_MODE = Gpr73Fields::MIC_IPG_STOP_MODE;
    using DWP = Gpr73Fields::DWP;
    using DWP_LOCK = Gpr73Fields::DWP_LOCK;
  };

  // GPR74 General Purpose Register
  struct Gpr74Fields {
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
  };  // struct Gpr74Fields

  struct GPR74 : ftl::mmio::Register<
      0x400E4128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      Gpr74Fields::PIT1_STOP_REQ,
      Gpr74Fields::PIT2_STOP_REQ,
      Gpr74Fields::SEMC_STOP_REQ,
      Gpr74Fields::SIM1_IPG_DOZE,
      Gpr74Fields::SIM2_IPG_DOZE,
      Gpr74Fields::SNVS_HP_IPG_DOZE,
      Gpr74Fields::SNVS_HP_STOP_REQ,
      Gpr74Fields::WDOG1_IPG_DOZE,
      Gpr74Fields::WDOG2_IPG_DOZE,
      Gpr74Fields::SAI1_STOP_REQ,
      Gpr74Fields::SAI2_STOP_REQ,
      Gpr74Fields::SAI3_STOP_REQ,
      Gpr74Fields::SAI4_STOP_REQ,
      Gpr74Fields::FLEXIO1_STOP_REQ_BUS,
      Gpr74Fields::FLEXIO1_STOP_REQ_PER,
      Gpr74Fields::FLEXIO2_STOP_REQ_BUS,
      Gpr74Fields::FLEXIO2_STOP_REQ_PER,
      ftl::mmio::Reserved<10, 18>,
      Gpr74Fields::DWP,
      Gpr74Fields::DWP_LOCK> {
    using eDWP = Gpr74Fields::eDWP;
    using eDWP_LOCK = Gpr74Fields::eDWP_LOCK;
    using PIT1_STOP_REQ = Gpr74Fields::PIT1_STOP_REQ;
    using PIT2_STOP_REQ = Gpr74Fields::PIT2_STOP_REQ;
    using SEMC_STOP_REQ = Gpr74Fields::SEMC_STOP_REQ;
    using SIM1_IPG_DOZE = Gpr74Fields::SIM1_IPG_DOZE;
    using SIM2_IPG_DOZE = Gpr74Fields::SIM2_IPG_DOZE;
    using SNVS_HP_IPG_DOZE = Gpr74Fields::SNVS_HP_IPG_DOZE;
    using SNVS_HP_STOP_REQ = Gpr74Fields::SNVS_HP_STOP_REQ;
    using WDOG1_IPG_DOZE = Gpr74Fields::WDOG1_IPG_DOZE;
    using WDOG2_IPG_DOZE = Gpr74Fields::WDOG2_IPG_DOZE;
    using SAI1_STOP_REQ = Gpr74Fields::SAI1_STOP_REQ;
    using SAI2_STOP_REQ = Gpr74Fields::SAI2_STOP_REQ;
    using SAI3_STOP_REQ = Gpr74Fields::SAI3_STOP_REQ;
    using SAI4_STOP_REQ = Gpr74Fields::SAI4_STOP_REQ;
    using FLEXIO1_STOP_REQ_BUS = Gpr74Fields::FLEXIO1_STOP_REQ_BUS;
    using FLEXIO1_STOP_REQ_PER = Gpr74Fields::FLEXIO1_STOP_REQ_PER;
    using FLEXIO2_STOP_REQ_BUS = Gpr74Fields::FLEXIO2_STOP_REQ_BUS;
    using FLEXIO2_STOP_REQ_PER = Gpr74Fields::FLEXIO2_STOP_REQ_PER;
    using DWP = Gpr74Fields::DWP;
    using DWP_LOCK = Gpr74Fields::DWP_LOCK;
  };

  // GPR75 General Purpose Register
  struct Gpr75Fields {
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
  };  // struct Gpr75Fields

  struct GPR75 : ftl::mmio::Register<
      0x400E412Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Gpr75Fields::ADC1_STOP_ACK,
      Gpr75Fields::ADC2_STOP_ACK,
      Gpr75Fields::CAAM_STOP_ACK,
      Gpr75Fields::CAN1_STOP_ACK,
      Gpr75Fields::CAN2_STOP_ACK,
      Gpr75Fields::CAN3_STOP_ACK,
      Gpr75Fields::EDMA_STOP_ACK,
      Gpr75Fields::EDMA_LPSR_STOP_ACK,
      Gpr75Fields::ENET_STOP_ACK,
      Gpr75Fields::ENET1G_STOP_ACK,
      Gpr75Fields::FLEXSPI1_STOP_ACK,
      Gpr75Fields::FLEXSPI2_STOP_ACK,
      Gpr75Fields::LPI2C1_STOP_ACK,
      Gpr75Fields::LPI2C2_STOP_ACK,
      Gpr75Fields::LPI2C3_STOP_ACK,
      Gpr75Fields::LPI2C4_STOP_ACK,
      Gpr75Fields::LPI2C5_STOP_ACK,
      Gpr75Fields::LPI2C6_STOP_ACK,
      Gpr75Fields::LPSPI1_STOP_ACK,
      Gpr75Fields::LPSPI2_STOP_ACK,
      Gpr75Fields::LPSPI3_STOP_ACK,
      Gpr75Fields::LPSPI4_STOP_ACK,
      Gpr75Fields::LPSPI5_STOP_ACK,
      Gpr75Fields::LPSPI6_STOP_ACK,
      Gpr75Fields::LPUART1_STOP_ACK,
      Gpr75Fields::LPUART2_STOP_ACK,
      Gpr75Fields::LPUART3_STOP_ACK,
      Gpr75Fields::LPUART4_STOP_ACK,
      Gpr75Fields::LPUART5_STOP_ACK,
      Gpr75Fields::LPUART6_STOP_ACK,
      Gpr75Fields::LPUART7_STOP_ACK,
      Gpr75Fields::LPUART8_STOP_ACK> {
    using ADC1_STOP_ACK = Gpr75Fields::ADC1_STOP_ACK;
    using ADC2_STOP_ACK = Gpr75Fields::ADC2_STOP_ACK;
    using CAAM_STOP_ACK = Gpr75Fields::CAAM_STOP_ACK;
    using CAN1_STOP_ACK = Gpr75Fields::CAN1_STOP_ACK;
    using CAN2_STOP_ACK = Gpr75Fields::CAN2_STOP_ACK;
    using CAN3_STOP_ACK = Gpr75Fields::CAN3_STOP_ACK;
    using EDMA_STOP_ACK = Gpr75Fields::EDMA_STOP_ACK;
    using EDMA_LPSR_STOP_ACK = Gpr75Fields::EDMA_LPSR_STOP_ACK;
    using ENET_STOP_ACK = Gpr75Fields::ENET_STOP_ACK;
    using ENET1G_STOP_ACK = Gpr75Fields::ENET1G_STOP_ACK;
    using FLEXSPI1_STOP_ACK = Gpr75Fields::FLEXSPI1_STOP_ACK;
    using FLEXSPI2_STOP_ACK = Gpr75Fields::FLEXSPI2_STOP_ACK;
    using LPI2C1_STOP_ACK = Gpr75Fields::LPI2C1_STOP_ACK;
    using LPI2C2_STOP_ACK = Gpr75Fields::LPI2C2_STOP_ACK;
    using LPI2C3_STOP_ACK = Gpr75Fields::LPI2C3_STOP_ACK;
    using LPI2C4_STOP_ACK = Gpr75Fields::LPI2C4_STOP_ACK;
    using LPI2C5_STOP_ACK = Gpr75Fields::LPI2C5_STOP_ACK;
    using LPI2C6_STOP_ACK = Gpr75Fields::LPI2C6_STOP_ACK;
    using LPSPI1_STOP_ACK = Gpr75Fields::LPSPI1_STOP_ACK;
    using LPSPI2_STOP_ACK = Gpr75Fields::LPSPI2_STOP_ACK;
    using LPSPI3_STOP_ACK = Gpr75Fields::LPSPI3_STOP_ACK;
    using LPSPI4_STOP_ACK = Gpr75Fields::LPSPI4_STOP_ACK;
    using LPSPI5_STOP_ACK = Gpr75Fields::LPSPI5_STOP_ACK;
    using LPSPI6_STOP_ACK = Gpr75Fields::LPSPI6_STOP_ACK;
    using LPUART1_STOP_ACK = Gpr75Fields::LPUART1_STOP_ACK;
    using LPUART2_STOP_ACK = Gpr75Fields::LPUART2_STOP_ACK;
    using LPUART3_STOP_ACK = Gpr75Fields::LPUART3_STOP_ACK;
    using LPUART4_STOP_ACK = Gpr75Fields::LPUART4_STOP_ACK;
    using LPUART5_STOP_ACK = Gpr75Fields::LPUART5_STOP_ACK;
    using LPUART6_STOP_ACK = Gpr75Fields::LPUART6_STOP_ACK;
    using LPUART7_STOP_ACK = Gpr75Fields::LPUART7_STOP_ACK;
    using LPUART8_STOP_ACK = Gpr75Fields::LPUART8_STOP_ACK;
  };

  // GPR76 General Purpose Register
  struct Gpr76Fields {
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
  };  // struct Gpr76Fields

  struct GPR76 : ftl::mmio::Register<
      0x400E4130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Gpr76Fields::LPUART9_STOP_ACK,
      Gpr76Fields::LPUART10_STOP_ACK,
      Gpr76Fields::LPUART11_STOP_ACK,
      Gpr76Fields::LPUART12_STOP_ACK,
      Gpr76Fields::MIC_STOP_ACK,
      Gpr76Fields::PIT1_STOP_ACK,
      Gpr76Fields::PIT2_STOP_ACK,
      Gpr76Fields::SEMC_STOP_ACK,
      Gpr76Fields::SNVS_HP_STOP_ACK,
      Gpr76Fields::SAI1_STOP_ACK,
      Gpr76Fields::SAI2_STOP_ACK,
      Gpr76Fields::SAI3_STOP_ACK,
      Gpr76Fields::SAI4_STOP_ACK,
      Gpr76Fields::FLEXIO1_STOP_ACK_BUS,
      Gpr76Fields::FLEXIO1_STOP_ACK_PER,
      Gpr76Fields::FLEXIO2_STOP_ACK_BUS,
      Gpr76Fields::FLEXIO2_STOP_ACK_PER,
      ftl::mmio::Reserved<15, 17>> {
    using LPUART9_STOP_ACK = Gpr76Fields::LPUART9_STOP_ACK;
    using LPUART10_STOP_ACK = Gpr76Fields::LPUART10_STOP_ACK;
    using LPUART11_STOP_ACK = Gpr76Fields::LPUART11_STOP_ACK;
    using LPUART12_STOP_ACK = Gpr76Fields::LPUART12_STOP_ACK;
    using MIC_STOP_ACK = Gpr76Fields::MIC_STOP_ACK;
    using PIT1_STOP_ACK = Gpr76Fields::PIT1_STOP_ACK;
    using PIT2_STOP_ACK = Gpr76Fields::PIT2_STOP_ACK;
    using SEMC_STOP_ACK = Gpr76Fields::SEMC_STOP_ACK;
    using SNVS_HP_STOP_ACK = Gpr76Fields::SNVS_HP_STOP_ACK;
    using SAI1_STOP_ACK = Gpr76Fields::SAI1_STOP_ACK;
    using SAI2_STOP_ACK = Gpr76Fields::SAI2_STOP_ACK;
    using SAI3_STOP_ACK = Gpr76Fields::SAI3_STOP_ACK;
    using SAI4_STOP_ACK = Gpr76Fields::SAI4_STOP_ACK;
    using FLEXIO1_STOP_ACK_BUS = Gpr76Fields::FLEXIO1_STOP_ACK_BUS;
    using FLEXIO1_STOP_ACK_PER = Gpr76Fields::FLEXIO1_STOP_ACK_PER;
    using FLEXIO2_STOP_ACK_BUS = Gpr76Fields::FLEXIO2_STOP_ACK_BUS;
    using FLEXIO2_STOP_ACK_PER = Gpr76Fields::FLEXIO2_STOP_ACK_PER;
  };

};

}  // namespace regs