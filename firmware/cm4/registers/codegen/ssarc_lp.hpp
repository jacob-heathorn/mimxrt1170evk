#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SSARC Registers
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct SsarcLp {
  // Descriptor Control0 0 Register
  struct DescCtrl00Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl00Fields

  struct DESC_CTRL0_0 : ftl::mmio::Register<
      0x40CB8000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl00Fields::START,
      DescCtrl00Fields::END,
      DescCtrl00Fields::SV_ORDER,
      DescCtrl00Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl00Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl00Fields::eRT_ORDER;
    using START = DescCtrl00Fields::START;
    using END = DescCtrl00Fields::END;
    using SV_ORDER = DescCtrl00Fields::SV_ORDER;
    using RT_ORDER = DescCtrl00Fields::RT_ORDER;
  };

  // Descriptor Control1 0 Register
  struct DescCtrl10Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl10Fields

  struct DESC_CTRL1_0 : ftl::mmio::Register<
      0x40CB8004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl10Fields::SW_TRIG_SV,
      DescCtrl10Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl10Fields::POWER_DOMAIN,
      DescCtrl10Fields::GP_EN,
      DescCtrl10Fields::SV_PRIORITY,
      DescCtrl10Fields::RT_PRIORITY,
      DescCtrl10Fields::CPUD,
      DescCtrl10Fields::RL,
      DescCtrl10Fields::WL,
      DescCtrl10Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl10Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl10Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl10Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl10Fields::eGP_EN;
    using eRL = DescCtrl10Fields::eRL;
    using eWL = DescCtrl10Fields::eWL;
    using eDL = DescCtrl10Fields::eDL;
    using SW_TRIG_SV = DescCtrl10Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl10Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl10Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl10Fields::GP_EN;
    using SV_PRIORITY = DescCtrl10Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl10Fields::RT_PRIORITY;
    using CPUD = DescCtrl10Fields::CPUD;
    using RL = DescCtrl10Fields::RL;
    using WL = DescCtrl10Fields::WL;
    using DL = DescCtrl10Fields::DL;
  };

  // Descriptor Address Up 0 Register
  struct DescAddrUp0Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp0Fields

  struct DESC_ADDR_UP_0 : ftl::mmio::Register<
      0x40CB8008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp0Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp0Fields::ADDR_UP;
  };

  // Descriptor Address Down 0 Register
  struct DescAddrDown0Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown0Fields

  struct DESC_ADDR_DOWN_0 : ftl::mmio::Register<
      0x40CB800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown0Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown0Fields::ADDR_DOWN;
  };

  // Descriptor Control0 1 Register
  struct DescCtrl01Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl01Fields

  struct DESC_CTRL0_1 : ftl::mmio::Register<
      0x40CB8020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl01Fields::START,
      DescCtrl01Fields::END,
      DescCtrl01Fields::SV_ORDER,
      DescCtrl01Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl01Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl01Fields::eRT_ORDER;
    using START = DescCtrl01Fields::START;
    using END = DescCtrl01Fields::END;
    using SV_ORDER = DescCtrl01Fields::SV_ORDER;
    using RT_ORDER = DescCtrl01Fields::RT_ORDER;
  };

  // Descriptor Control1 1 Register
  struct DescCtrl11Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl11Fields

  struct DESC_CTRL1_1 : ftl::mmio::Register<
      0x40CB8024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl11Fields::SW_TRIG_SV,
      DescCtrl11Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl11Fields::POWER_DOMAIN,
      DescCtrl11Fields::GP_EN,
      DescCtrl11Fields::SV_PRIORITY,
      DescCtrl11Fields::RT_PRIORITY,
      DescCtrl11Fields::CPUD,
      DescCtrl11Fields::RL,
      DescCtrl11Fields::WL,
      DescCtrl11Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl11Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl11Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl11Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl11Fields::eGP_EN;
    using eRL = DescCtrl11Fields::eRL;
    using eWL = DescCtrl11Fields::eWL;
    using eDL = DescCtrl11Fields::eDL;
    using SW_TRIG_SV = DescCtrl11Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl11Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl11Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl11Fields::GP_EN;
    using SV_PRIORITY = DescCtrl11Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl11Fields::RT_PRIORITY;
    using CPUD = DescCtrl11Fields::CPUD;
    using RL = DescCtrl11Fields::RL;
    using WL = DescCtrl11Fields::WL;
    using DL = DescCtrl11Fields::DL;
  };

  // Descriptor Address Up 1 Register
  struct DescAddrUp1Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp1Fields

  struct DESC_ADDR_UP_1 : ftl::mmio::Register<
      0x40CB8028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp1Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp1Fields::ADDR_UP;
  };

  // Descriptor Address Down 1 Register
  struct DescAddrDown1Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown1Fields

  struct DESC_ADDR_DOWN_1 : ftl::mmio::Register<
      0x40CB802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown1Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown1Fields::ADDR_DOWN;
  };

  // Descriptor Control0 2 Register
  struct DescCtrl02Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl02Fields

  struct DESC_CTRL0_2 : ftl::mmio::Register<
      0x40CB8040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl02Fields::START,
      DescCtrl02Fields::END,
      DescCtrl02Fields::SV_ORDER,
      DescCtrl02Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl02Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl02Fields::eRT_ORDER;
    using START = DescCtrl02Fields::START;
    using END = DescCtrl02Fields::END;
    using SV_ORDER = DescCtrl02Fields::SV_ORDER;
    using RT_ORDER = DescCtrl02Fields::RT_ORDER;
  };

  // Descriptor Control1 2 Register
  struct DescCtrl12Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl12Fields

  struct DESC_CTRL1_2 : ftl::mmio::Register<
      0x40CB8044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl12Fields::SW_TRIG_SV,
      DescCtrl12Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl12Fields::POWER_DOMAIN,
      DescCtrl12Fields::GP_EN,
      DescCtrl12Fields::SV_PRIORITY,
      DescCtrl12Fields::RT_PRIORITY,
      DescCtrl12Fields::CPUD,
      DescCtrl12Fields::RL,
      DescCtrl12Fields::WL,
      DescCtrl12Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl12Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl12Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl12Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl12Fields::eGP_EN;
    using eRL = DescCtrl12Fields::eRL;
    using eWL = DescCtrl12Fields::eWL;
    using eDL = DescCtrl12Fields::eDL;
    using SW_TRIG_SV = DescCtrl12Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl12Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl12Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl12Fields::GP_EN;
    using SV_PRIORITY = DescCtrl12Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl12Fields::RT_PRIORITY;
    using CPUD = DescCtrl12Fields::CPUD;
    using RL = DescCtrl12Fields::RL;
    using WL = DescCtrl12Fields::WL;
    using DL = DescCtrl12Fields::DL;
  };

  // Descriptor Address Up 2 Register
  struct DescAddrUp2Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp2Fields

  struct DESC_ADDR_UP_2 : ftl::mmio::Register<
      0x40CB8048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp2Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp2Fields::ADDR_UP;
  };

  // Descriptor Address Down 2 Register
  struct DescAddrDown2Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown2Fields

  struct DESC_ADDR_DOWN_2 : ftl::mmio::Register<
      0x40CB804Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown2Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown2Fields::ADDR_DOWN;
  };

  // Descriptor Control0 3 Register
  struct DescCtrl03Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl03Fields

  struct DESC_CTRL0_3 : ftl::mmio::Register<
      0x40CB8060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl03Fields::START,
      DescCtrl03Fields::END,
      DescCtrl03Fields::SV_ORDER,
      DescCtrl03Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl03Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl03Fields::eRT_ORDER;
    using START = DescCtrl03Fields::START;
    using END = DescCtrl03Fields::END;
    using SV_ORDER = DescCtrl03Fields::SV_ORDER;
    using RT_ORDER = DescCtrl03Fields::RT_ORDER;
  };

  // Descriptor Control1 3 Register
  struct DescCtrl13Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl13Fields

  struct DESC_CTRL1_3 : ftl::mmio::Register<
      0x40CB8064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl13Fields::SW_TRIG_SV,
      DescCtrl13Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl13Fields::POWER_DOMAIN,
      DescCtrl13Fields::GP_EN,
      DescCtrl13Fields::SV_PRIORITY,
      DescCtrl13Fields::RT_PRIORITY,
      DescCtrl13Fields::CPUD,
      DescCtrl13Fields::RL,
      DescCtrl13Fields::WL,
      DescCtrl13Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl13Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl13Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl13Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl13Fields::eGP_EN;
    using eRL = DescCtrl13Fields::eRL;
    using eWL = DescCtrl13Fields::eWL;
    using eDL = DescCtrl13Fields::eDL;
    using SW_TRIG_SV = DescCtrl13Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl13Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl13Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl13Fields::GP_EN;
    using SV_PRIORITY = DescCtrl13Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl13Fields::RT_PRIORITY;
    using CPUD = DescCtrl13Fields::CPUD;
    using RL = DescCtrl13Fields::RL;
    using WL = DescCtrl13Fields::WL;
    using DL = DescCtrl13Fields::DL;
  };

  // Descriptor Address Up 3 Register
  struct DescAddrUp3Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp3Fields

  struct DESC_ADDR_UP_3 : ftl::mmio::Register<
      0x40CB8068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp3Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp3Fields::ADDR_UP;
  };

  // Descriptor Address Down 3 Register
  struct DescAddrDown3Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown3Fields

  struct DESC_ADDR_DOWN_3 : ftl::mmio::Register<
      0x40CB806Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown3Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown3Fields::ADDR_DOWN;
  };

  // Descriptor Control0 4 Register
  struct DescCtrl04Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl04Fields

  struct DESC_CTRL0_4 : ftl::mmio::Register<
      0x40CB8080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl04Fields::START,
      DescCtrl04Fields::END,
      DescCtrl04Fields::SV_ORDER,
      DescCtrl04Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl04Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl04Fields::eRT_ORDER;
    using START = DescCtrl04Fields::START;
    using END = DescCtrl04Fields::END;
    using SV_ORDER = DescCtrl04Fields::SV_ORDER;
    using RT_ORDER = DescCtrl04Fields::RT_ORDER;
  };

  // Descriptor Control1 4 Register
  struct DescCtrl14Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl14Fields

  struct DESC_CTRL1_4 : ftl::mmio::Register<
      0x40CB8084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl14Fields::SW_TRIG_SV,
      DescCtrl14Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl14Fields::POWER_DOMAIN,
      DescCtrl14Fields::GP_EN,
      DescCtrl14Fields::SV_PRIORITY,
      DescCtrl14Fields::RT_PRIORITY,
      DescCtrl14Fields::CPUD,
      DescCtrl14Fields::RL,
      DescCtrl14Fields::WL,
      DescCtrl14Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl14Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl14Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl14Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl14Fields::eGP_EN;
    using eRL = DescCtrl14Fields::eRL;
    using eWL = DescCtrl14Fields::eWL;
    using eDL = DescCtrl14Fields::eDL;
    using SW_TRIG_SV = DescCtrl14Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl14Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl14Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl14Fields::GP_EN;
    using SV_PRIORITY = DescCtrl14Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl14Fields::RT_PRIORITY;
    using CPUD = DescCtrl14Fields::CPUD;
    using RL = DescCtrl14Fields::RL;
    using WL = DescCtrl14Fields::WL;
    using DL = DescCtrl14Fields::DL;
  };

  // Descriptor Address Up 4 Register
  struct DescAddrUp4Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp4Fields

  struct DESC_ADDR_UP_4 : ftl::mmio::Register<
      0x40CB8088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp4Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp4Fields::ADDR_UP;
  };

  // Descriptor Address Down 4 Register
  struct DescAddrDown4Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown4Fields

  struct DESC_ADDR_DOWN_4 : ftl::mmio::Register<
      0x40CB808Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown4Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown4Fields::ADDR_DOWN;
  };

  // Descriptor Control0 5 Register
  struct DescCtrl05Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl05Fields

  struct DESC_CTRL0_5 : ftl::mmio::Register<
      0x40CB80A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl05Fields::START,
      DescCtrl05Fields::END,
      DescCtrl05Fields::SV_ORDER,
      DescCtrl05Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl05Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl05Fields::eRT_ORDER;
    using START = DescCtrl05Fields::START;
    using END = DescCtrl05Fields::END;
    using SV_ORDER = DescCtrl05Fields::SV_ORDER;
    using RT_ORDER = DescCtrl05Fields::RT_ORDER;
  };

  // Descriptor Control1 5 Register
  struct DescCtrl15Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl15Fields

  struct DESC_CTRL1_5 : ftl::mmio::Register<
      0x40CB80A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl15Fields::SW_TRIG_SV,
      DescCtrl15Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl15Fields::POWER_DOMAIN,
      DescCtrl15Fields::GP_EN,
      DescCtrl15Fields::SV_PRIORITY,
      DescCtrl15Fields::RT_PRIORITY,
      DescCtrl15Fields::CPUD,
      DescCtrl15Fields::RL,
      DescCtrl15Fields::WL,
      DescCtrl15Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl15Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl15Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl15Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl15Fields::eGP_EN;
    using eRL = DescCtrl15Fields::eRL;
    using eWL = DescCtrl15Fields::eWL;
    using eDL = DescCtrl15Fields::eDL;
    using SW_TRIG_SV = DescCtrl15Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl15Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl15Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl15Fields::GP_EN;
    using SV_PRIORITY = DescCtrl15Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl15Fields::RT_PRIORITY;
    using CPUD = DescCtrl15Fields::CPUD;
    using RL = DescCtrl15Fields::RL;
    using WL = DescCtrl15Fields::WL;
    using DL = DescCtrl15Fields::DL;
  };

  // Descriptor Address Up 5 Register
  struct DescAddrUp5Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp5Fields

  struct DESC_ADDR_UP_5 : ftl::mmio::Register<
      0x40CB80A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp5Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp5Fields::ADDR_UP;
  };

  // Descriptor Address Down 5 Register
  struct DescAddrDown5Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown5Fields

  struct DESC_ADDR_DOWN_5 : ftl::mmio::Register<
      0x40CB80ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown5Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown5Fields::ADDR_DOWN;
  };

  // Descriptor Control0 6 Register
  struct DescCtrl06Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl06Fields

  struct DESC_CTRL0_6 : ftl::mmio::Register<
      0x40CB80C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl06Fields::START,
      DescCtrl06Fields::END,
      DescCtrl06Fields::SV_ORDER,
      DescCtrl06Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl06Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl06Fields::eRT_ORDER;
    using START = DescCtrl06Fields::START;
    using END = DescCtrl06Fields::END;
    using SV_ORDER = DescCtrl06Fields::SV_ORDER;
    using RT_ORDER = DescCtrl06Fields::RT_ORDER;
  };

  // Descriptor Control1 6 Register
  struct DescCtrl16Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl16Fields

  struct DESC_CTRL1_6 : ftl::mmio::Register<
      0x40CB80C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl16Fields::SW_TRIG_SV,
      DescCtrl16Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl16Fields::POWER_DOMAIN,
      DescCtrl16Fields::GP_EN,
      DescCtrl16Fields::SV_PRIORITY,
      DescCtrl16Fields::RT_PRIORITY,
      DescCtrl16Fields::CPUD,
      DescCtrl16Fields::RL,
      DescCtrl16Fields::WL,
      DescCtrl16Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl16Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl16Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl16Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl16Fields::eGP_EN;
    using eRL = DescCtrl16Fields::eRL;
    using eWL = DescCtrl16Fields::eWL;
    using eDL = DescCtrl16Fields::eDL;
    using SW_TRIG_SV = DescCtrl16Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl16Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl16Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl16Fields::GP_EN;
    using SV_PRIORITY = DescCtrl16Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl16Fields::RT_PRIORITY;
    using CPUD = DescCtrl16Fields::CPUD;
    using RL = DescCtrl16Fields::RL;
    using WL = DescCtrl16Fields::WL;
    using DL = DescCtrl16Fields::DL;
  };

  // Descriptor Address Up 6 Register
  struct DescAddrUp6Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp6Fields

  struct DESC_ADDR_UP_6 : ftl::mmio::Register<
      0x40CB80C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp6Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp6Fields::ADDR_UP;
  };

  // Descriptor Address Down 6 Register
  struct DescAddrDown6Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown6Fields

  struct DESC_ADDR_DOWN_6 : ftl::mmio::Register<
      0x40CB80CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown6Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown6Fields::ADDR_DOWN;
  };

  // Descriptor Control0 7 Register
  struct DescCtrl07Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl07Fields

  struct DESC_CTRL0_7 : ftl::mmio::Register<
      0x40CB80E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl07Fields::START,
      DescCtrl07Fields::END,
      DescCtrl07Fields::SV_ORDER,
      DescCtrl07Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl07Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl07Fields::eRT_ORDER;
    using START = DescCtrl07Fields::START;
    using END = DescCtrl07Fields::END;
    using SV_ORDER = DescCtrl07Fields::SV_ORDER;
    using RT_ORDER = DescCtrl07Fields::RT_ORDER;
  };

  // Descriptor Control1 7 Register
  struct DescCtrl17Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl17Fields

  struct DESC_CTRL1_7 : ftl::mmio::Register<
      0x40CB80E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl17Fields::SW_TRIG_SV,
      DescCtrl17Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl17Fields::POWER_DOMAIN,
      DescCtrl17Fields::GP_EN,
      DescCtrl17Fields::SV_PRIORITY,
      DescCtrl17Fields::RT_PRIORITY,
      DescCtrl17Fields::CPUD,
      DescCtrl17Fields::RL,
      DescCtrl17Fields::WL,
      DescCtrl17Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl17Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl17Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl17Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl17Fields::eGP_EN;
    using eRL = DescCtrl17Fields::eRL;
    using eWL = DescCtrl17Fields::eWL;
    using eDL = DescCtrl17Fields::eDL;
    using SW_TRIG_SV = DescCtrl17Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl17Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl17Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl17Fields::GP_EN;
    using SV_PRIORITY = DescCtrl17Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl17Fields::RT_PRIORITY;
    using CPUD = DescCtrl17Fields::CPUD;
    using RL = DescCtrl17Fields::RL;
    using WL = DescCtrl17Fields::WL;
    using DL = DescCtrl17Fields::DL;
  };

  // Descriptor Address Up 7 Register
  struct DescAddrUp7Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp7Fields

  struct DESC_ADDR_UP_7 : ftl::mmio::Register<
      0x40CB80E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp7Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp7Fields::ADDR_UP;
  };

  // Descriptor Address Down 7 Register
  struct DescAddrDown7Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown7Fields

  struct DESC_ADDR_DOWN_7 : ftl::mmio::Register<
      0x40CB80ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown7Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown7Fields::ADDR_DOWN;
  };

  // Descriptor Control0 8 Register
  struct DescCtrl08Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl08Fields

  struct DESC_CTRL0_8 : ftl::mmio::Register<
      0x40CB8100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl08Fields::START,
      DescCtrl08Fields::END,
      DescCtrl08Fields::SV_ORDER,
      DescCtrl08Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl08Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl08Fields::eRT_ORDER;
    using START = DescCtrl08Fields::START;
    using END = DescCtrl08Fields::END;
    using SV_ORDER = DescCtrl08Fields::SV_ORDER;
    using RT_ORDER = DescCtrl08Fields::RT_ORDER;
  };

  // Descriptor Control1 8 Register
  struct DescCtrl18Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl18Fields

  struct DESC_CTRL1_8 : ftl::mmio::Register<
      0x40CB8104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl18Fields::SW_TRIG_SV,
      DescCtrl18Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl18Fields::POWER_DOMAIN,
      DescCtrl18Fields::GP_EN,
      DescCtrl18Fields::SV_PRIORITY,
      DescCtrl18Fields::RT_PRIORITY,
      DescCtrl18Fields::CPUD,
      DescCtrl18Fields::RL,
      DescCtrl18Fields::WL,
      DescCtrl18Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl18Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl18Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl18Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl18Fields::eGP_EN;
    using eRL = DescCtrl18Fields::eRL;
    using eWL = DescCtrl18Fields::eWL;
    using eDL = DescCtrl18Fields::eDL;
    using SW_TRIG_SV = DescCtrl18Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl18Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl18Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl18Fields::GP_EN;
    using SV_PRIORITY = DescCtrl18Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl18Fields::RT_PRIORITY;
    using CPUD = DescCtrl18Fields::CPUD;
    using RL = DescCtrl18Fields::RL;
    using WL = DescCtrl18Fields::WL;
    using DL = DescCtrl18Fields::DL;
  };

  // Descriptor Address Up 8 Register
  struct DescAddrUp8Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp8Fields

  struct DESC_ADDR_UP_8 : ftl::mmio::Register<
      0x40CB8108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp8Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp8Fields::ADDR_UP;
  };

  // Descriptor Address Down 8 Register
  struct DescAddrDown8Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown8Fields

  struct DESC_ADDR_DOWN_8 : ftl::mmio::Register<
      0x40CB810Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown8Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown8Fields::ADDR_DOWN;
  };

  // Descriptor Control0 9 Register
  struct DescCtrl09Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl09Fields

  struct DESC_CTRL0_9 : ftl::mmio::Register<
      0x40CB8120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl09Fields::START,
      DescCtrl09Fields::END,
      DescCtrl09Fields::SV_ORDER,
      DescCtrl09Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl09Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl09Fields::eRT_ORDER;
    using START = DescCtrl09Fields::START;
    using END = DescCtrl09Fields::END;
    using SV_ORDER = DescCtrl09Fields::SV_ORDER;
    using RT_ORDER = DescCtrl09Fields::RT_ORDER;
  };

  // Descriptor Control1 9 Register
  struct DescCtrl19Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl19Fields

  struct DESC_CTRL1_9 : ftl::mmio::Register<
      0x40CB8124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl19Fields::SW_TRIG_SV,
      DescCtrl19Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl19Fields::POWER_DOMAIN,
      DescCtrl19Fields::GP_EN,
      DescCtrl19Fields::SV_PRIORITY,
      DescCtrl19Fields::RT_PRIORITY,
      DescCtrl19Fields::CPUD,
      DescCtrl19Fields::RL,
      DescCtrl19Fields::WL,
      DescCtrl19Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl19Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl19Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl19Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl19Fields::eGP_EN;
    using eRL = DescCtrl19Fields::eRL;
    using eWL = DescCtrl19Fields::eWL;
    using eDL = DescCtrl19Fields::eDL;
    using SW_TRIG_SV = DescCtrl19Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl19Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl19Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl19Fields::GP_EN;
    using SV_PRIORITY = DescCtrl19Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl19Fields::RT_PRIORITY;
    using CPUD = DescCtrl19Fields::CPUD;
    using RL = DescCtrl19Fields::RL;
    using WL = DescCtrl19Fields::WL;
    using DL = DescCtrl19Fields::DL;
  };

  // Descriptor Address Up 9 Register
  struct DescAddrUp9Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp9Fields

  struct DESC_ADDR_UP_9 : ftl::mmio::Register<
      0x40CB8128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp9Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp9Fields::ADDR_UP;
  };

  // Descriptor Address Down 9 Register
  struct DescAddrDown9Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown9Fields

  struct DESC_ADDR_DOWN_9 : ftl::mmio::Register<
      0x40CB812Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown9Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown9Fields::ADDR_DOWN;
  };

  // Descriptor Control0 10 Register
  struct DescCtrl010Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl010Fields

  struct DESC_CTRL0_10 : ftl::mmio::Register<
      0x40CB8140u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl010Fields::START,
      DescCtrl010Fields::END,
      DescCtrl010Fields::SV_ORDER,
      DescCtrl010Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl010Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl010Fields::eRT_ORDER;
    using START = DescCtrl010Fields::START;
    using END = DescCtrl010Fields::END;
    using SV_ORDER = DescCtrl010Fields::SV_ORDER;
    using RT_ORDER = DescCtrl010Fields::RT_ORDER;
  };

  // Descriptor Control1 10 Register
  struct DescCtrl110Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl110Fields

  struct DESC_CTRL1_10 : ftl::mmio::Register<
      0x40CB8144u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl110Fields::SW_TRIG_SV,
      DescCtrl110Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl110Fields::POWER_DOMAIN,
      DescCtrl110Fields::GP_EN,
      DescCtrl110Fields::SV_PRIORITY,
      DescCtrl110Fields::RT_PRIORITY,
      DescCtrl110Fields::CPUD,
      DescCtrl110Fields::RL,
      DescCtrl110Fields::WL,
      DescCtrl110Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl110Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl110Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl110Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl110Fields::eGP_EN;
    using eRL = DescCtrl110Fields::eRL;
    using eWL = DescCtrl110Fields::eWL;
    using eDL = DescCtrl110Fields::eDL;
    using SW_TRIG_SV = DescCtrl110Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl110Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl110Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl110Fields::GP_EN;
    using SV_PRIORITY = DescCtrl110Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl110Fields::RT_PRIORITY;
    using CPUD = DescCtrl110Fields::CPUD;
    using RL = DescCtrl110Fields::RL;
    using WL = DescCtrl110Fields::WL;
    using DL = DescCtrl110Fields::DL;
  };

  // Descriptor Address Up 10 Register
  struct DescAddrUp10Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp10Fields

  struct DESC_ADDR_UP_10 : ftl::mmio::Register<
      0x40CB8148u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp10Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp10Fields::ADDR_UP;
  };

  // Descriptor Address Down 10 Register
  struct DescAddrDown10Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown10Fields

  struct DESC_ADDR_DOWN_10 : ftl::mmio::Register<
      0x40CB814Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown10Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown10Fields::ADDR_DOWN;
  };

  // Descriptor Control0 11 Register
  struct DescCtrl011Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl011Fields

  struct DESC_CTRL0_11 : ftl::mmio::Register<
      0x40CB8160u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl011Fields::START,
      DescCtrl011Fields::END,
      DescCtrl011Fields::SV_ORDER,
      DescCtrl011Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl011Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl011Fields::eRT_ORDER;
    using START = DescCtrl011Fields::START;
    using END = DescCtrl011Fields::END;
    using SV_ORDER = DescCtrl011Fields::SV_ORDER;
    using RT_ORDER = DescCtrl011Fields::RT_ORDER;
  };

  // Descriptor Control1 11 Register
  struct DescCtrl111Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl111Fields

  struct DESC_CTRL1_11 : ftl::mmio::Register<
      0x40CB8164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl111Fields::SW_TRIG_SV,
      DescCtrl111Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl111Fields::POWER_DOMAIN,
      DescCtrl111Fields::GP_EN,
      DescCtrl111Fields::SV_PRIORITY,
      DescCtrl111Fields::RT_PRIORITY,
      DescCtrl111Fields::CPUD,
      DescCtrl111Fields::RL,
      DescCtrl111Fields::WL,
      DescCtrl111Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl111Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl111Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl111Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl111Fields::eGP_EN;
    using eRL = DescCtrl111Fields::eRL;
    using eWL = DescCtrl111Fields::eWL;
    using eDL = DescCtrl111Fields::eDL;
    using SW_TRIG_SV = DescCtrl111Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl111Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl111Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl111Fields::GP_EN;
    using SV_PRIORITY = DescCtrl111Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl111Fields::RT_PRIORITY;
    using CPUD = DescCtrl111Fields::CPUD;
    using RL = DescCtrl111Fields::RL;
    using WL = DescCtrl111Fields::WL;
    using DL = DescCtrl111Fields::DL;
  };

  // Descriptor Address Up 11 Register
  struct DescAddrUp11Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp11Fields

  struct DESC_ADDR_UP_11 : ftl::mmio::Register<
      0x40CB8168u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp11Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp11Fields::ADDR_UP;
  };

  // Descriptor Address Down 11 Register
  struct DescAddrDown11Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown11Fields

  struct DESC_ADDR_DOWN_11 : ftl::mmio::Register<
      0x40CB816Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown11Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown11Fields::ADDR_DOWN;
  };

  // Descriptor Control0 12 Register
  struct DescCtrl012Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl012Fields

  struct DESC_CTRL0_12 : ftl::mmio::Register<
      0x40CB8180u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl012Fields::START,
      DescCtrl012Fields::END,
      DescCtrl012Fields::SV_ORDER,
      DescCtrl012Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl012Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl012Fields::eRT_ORDER;
    using START = DescCtrl012Fields::START;
    using END = DescCtrl012Fields::END;
    using SV_ORDER = DescCtrl012Fields::SV_ORDER;
    using RT_ORDER = DescCtrl012Fields::RT_ORDER;
  };

  // Descriptor Control1 12 Register
  struct DescCtrl112Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl112Fields

  struct DESC_CTRL1_12 : ftl::mmio::Register<
      0x40CB8184u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl112Fields::SW_TRIG_SV,
      DescCtrl112Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl112Fields::POWER_DOMAIN,
      DescCtrl112Fields::GP_EN,
      DescCtrl112Fields::SV_PRIORITY,
      DescCtrl112Fields::RT_PRIORITY,
      DescCtrl112Fields::CPUD,
      DescCtrl112Fields::RL,
      DescCtrl112Fields::WL,
      DescCtrl112Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl112Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl112Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl112Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl112Fields::eGP_EN;
    using eRL = DescCtrl112Fields::eRL;
    using eWL = DescCtrl112Fields::eWL;
    using eDL = DescCtrl112Fields::eDL;
    using SW_TRIG_SV = DescCtrl112Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl112Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl112Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl112Fields::GP_EN;
    using SV_PRIORITY = DescCtrl112Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl112Fields::RT_PRIORITY;
    using CPUD = DescCtrl112Fields::CPUD;
    using RL = DescCtrl112Fields::RL;
    using WL = DescCtrl112Fields::WL;
    using DL = DescCtrl112Fields::DL;
  };

  // Descriptor Address Up 12 Register
  struct DescAddrUp12Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp12Fields

  struct DESC_ADDR_UP_12 : ftl::mmio::Register<
      0x40CB8188u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp12Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp12Fields::ADDR_UP;
  };

  // Descriptor Address Down 12 Register
  struct DescAddrDown12Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown12Fields

  struct DESC_ADDR_DOWN_12 : ftl::mmio::Register<
      0x40CB818Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown12Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown12Fields::ADDR_DOWN;
  };

  // Descriptor Control0 13 Register
  struct DescCtrl013Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl013Fields

  struct DESC_CTRL0_13 : ftl::mmio::Register<
      0x40CB81A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl013Fields::START,
      DescCtrl013Fields::END,
      DescCtrl013Fields::SV_ORDER,
      DescCtrl013Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl013Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl013Fields::eRT_ORDER;
    using START = DescCtrl013Fields::START;
    using END = DescCtrl013Fields::END;
    using SV_ORDER = DescCtrl013Fields::SV_ORDER;
    using RT_ORDER = DescCtrl013Fields::RT_ORDER;
  };

  // Descriptor Control1 13 Register
  struct DescCtrl113Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl113Fields

  struct DESC_CTRL1_13 : ftl::mmio::Register<
      0x40CB81A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl113Fields::SW_TRIG_SV,
      DescCtrl113Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl113Fields::POWER_DOMAIN,
      DescCtrl113Fields::GP_EN,
      DescCtrl113Fields::SV_PRIORITY,
      DescCtrl113Fields::RT_PRIORITY,
      DescCtrl113Fields::CPUD,
      DescCtrl113Fields::RL,
      DescCtrl113Fields::WL,
      DescCtrl113Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl113Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl113Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl113Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl113Fields::eGP_EN;
    using eRL = DescCtrl113Fields::eRL;
    using eWL = DescCtrl113Fields::eWL;
    using eDL = DescCtrl113Fields::eDL;
    using SW_TRIG_SV = DescCtrl113Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl113Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl113Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl113Fields::GP_EN;
    using SV_PRIORITY = DescCtrl113Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl113Fields::RT_PRIORITY;
    using CPUD = DescCtrl113Fields::CPUD;
    using RL = DescCtrl113Fields::RL;
    using WL = DescCtrl113Fields::WL;
    using DL = DescCtrl113Fields::DL;
  };

  // Descriptor Address Up 13 Register
  struct DescAddrUp13Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp13Fields

  struct DESC_ADDR_UP_13 : ftl::mmio::Register<
      0x40CB81A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp13Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp13Fields::ADDR_UP;
  };

  // Descriptor Address Down 13 Register
  struct DescAddrDown13Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown13Fields

  struct DESC_ADDR_DOWN_13 : ftl::mmio::Register<
      0x40CB81ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown13Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown13Fields::ADDR_DOWN;
  };

  // Descriptor Control0 14 Register
  struct DescCtrl014Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl014Fields

  struct DESC_CTRL0_14 : ftl::mmio::Register<
      0x40CB81C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl014Fields::START,
      DescCtrl014Fields::END,
      DescCtrl014Fields::SV_ORDER,
      DescCtrl014Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl014Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl014Fields::eRT_ORDER;
    using START = DescCtrl014Fields::START;
    using END = DescCtrl014Fields::END;
    using SV_ORDER = DescCtrl014Fields::SV_ORDER;
    using RT_ORDER = DescCtrl014Fields::RT_ORDER;
  };

  // Descriptor Control1 14 Register
  struct DescCtrl114Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl114Fields

  struct DESC_CTRL1_14 : ftl::mmio::Register<
      0x40CB81C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl114Fields::SW_TRIG_SV,
      DescCtrl114Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl114Fields::POWER_DOMAIN,
      DescCtrl114Fields::GP_EN,
      DescCtrl114Fields::SV_PRIORITY,
      DescCtrl114Fields::RT_PRIORITY,
      DescCtrl114Fields::CPUD,
      DescCtrl114Fields::RL,
      DescCtrl114Fields::WL,
      DescCtrl114Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl114Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl114Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl114Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl114Fields::eGP_EN;
    using eRL = DescCtrl114Fields::eRL;
    using eWL = DescCtrl114Fields::eWL;
    using eDL = DescCtrl114Fields::eDL;
    using SW_TRIG_SV = DescCtrl114Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl114Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl114Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl114Fields::GP_EN;
    using SV_PRIORITY = DescCtrl114Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl114Fields::RT_PRIORITY;
    using CPUD = DescCtrl114Fields::CPUD;
    using RL = DescCtrl114Fields::RL;
    using WL = DescCtrl114Fields::WL;
    using DL = DescCtrl114Fields::DL;
  };

  // Descriptor Address Up 14 Register
  struct DescAddrUp14Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp14Fields

  struct DESC_ADDR_UP_14 : ftl::mmio::Register<
      0x40CB81C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp14Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp14Fields::ADDR_UP;
  };

  // Descriptor Address Down 14 Register
  struct DescAddrDown14Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown14Fields

  struct DESC_ADDR_DOWN_14 : ftl::mmio::Register<
      0x40CB81CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown14Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown14Fields::ADDR_DOWN;
  };

  // Descriptor Control0 15 Register
  struct DescCtrl015Fields {
    enum class eSV_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eSV_START_END = 0,
      // Descriptors within the group are processed from end to start
      eSV_END_START = 1,
    };

    enum class eRT_ORDER : std::uint32_t {
      // Descriptors within the group are processed from start to end
      eRT_START_END = 0,
      // Descriptors within the group are processed from end to start
      eRT_END_START = 1,
    };

    // Start index
    using START = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // End index
    using END = ftl::mmio::Field<10, 10, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Order
    using SV_ORDER = ftl::mmio::Field<1, 20, eSV_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore order
    using RT_ORDER = ftl::mmio::Field<1, 21, eRT_ORDER, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl015Fields

  struct DESC_CTRL0_15 : ftl::mmio::Register<
      0x40CB81E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl015Fields::START,
      DescCtrl015Fields::END,
      DescCtrl015Fields::SV_ORDER,
      DescCtrl015Fields::RT_ORDER,
      ftl::mmio::Reserved<10, 22>> {
    using eSV_ORDER = DescCtrl015Fields::eSV_ORDER;
    using eRT_ORDER = DescCtrl015Fields::eRT_ORDER;
    using START = DescCtrl015Fields::START;
    using END = DescCtrl015Fields::END;
    using SV_ORDER = DescCtrl015Fields::SV_ORDER;
    using RT_ORDER = DescCtrl015Fields::RT_ORDER;
  };

  // Descriptor Control1 15 Register
  struct DescCtrl115Fields {
    enum class eSW_TRIG_SV : std::uint32_t {
      // No software save request/software restore request complete
      eREQ_NO = 0,
      // Request a software save operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class eSW_TRIG_RT : std::uint32_t {
      // No software restore request/software restore request complete
      eREQ_NO = 0,
      // Request a software restore operation/software restore operation in progress
      eREQ_YES = 1,
    };

    enum class ePOWER_DOMAIN : std::uint32_t {
      // PGMC_BPC0
      eDOMAIN0 = 0,
      // PGMC_BPC1
      eDOMAIN1 = 1,
      // PGMC_BPC2
      eDOMAIN2 = 2,
      // PGMC_BPC3
      eDOMAIN3 = 3,
      // PGMC_BPC4
      eDOMAIN4 = 4,
      // PGMC_BPC5
      eDOMAIN5 = 5,
      // PGMC_BPC6
      eDOMAIN6 = 6,
      // PGMC_BPC7
      eDOMAIN7 = 7,
    };

    enum class eGP_EN : std::uint32_t {
      // Group disabled
      eGP_DIS = 0,
      // Group enabled
      eGP_EN = 1,
    };

    enum class eRL : std::uint32_t {
      // Group is unlocked (read access allowed)
      eR_UNLOCK = 0,
      // Group is locked (read access not allowed)
      eR_LOCK = 1,
    };

    enum class eWL : std::uint32_t {
      // Group is unlocked (write access allowed)
      eW_UNLOCK = 0,
      // Group is locked (write access not allowed)
      eW_LOCK = 1,
    };

    enum class eDL : std::uint32_t {
      // Unlock
      eD_UNLOCK = 0,
      // Lock
      eD_LOCK = 1,
    };

    // Software trigger save
    using SW_TRIG_SV = ftl::mmio::Field<1, 0, eSW_TRIG_SV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software trigger restore
    using SW_TRIG_RT = ftl::mmio::Field<1, 1, eSW_TRIG_RT, ftl::mmio::RW, ftl::mmio::Normal>;
    // This field describes the mapping (0-7) to external request signals from different domains
    using POWER_DOMAIN = ftl::mmio::Field<3, 4, ePOWER_DOMAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Group Enable
    using GP_EN = ftl::mmio::Field<1, 7, eGP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Save Priority
    using SV_PRIORITY = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Restore Priority
    using RT_PRIORITY = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // CPU Domain
    using CPUD = ftl::mmio::Field<2, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Lock
    using RL = ftl::mmio::Field<1, 18, eRL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Lock
    using WL = ftl::mmio::Field<1, 19, eWL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain lock
    using DL = ftl::mmio::Field<1, 20, eDL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescCtrl115Fields

  struct DESC_CTRL1_15 : ftl::mmio::Register<
      0x40CB81E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescCtrl115Fields::SW_TRIG_SV,
      DescCtrl115Fields::SW_TRIG_RT,
      ftl::mmio::Reserved<2, 2>,
      DescCtrl115Fields::POWER_DOMAIN,
      DescCtrl115Fields::GP_EN,
      DescCtrl115Fields::SV_PRIORITY,
      DescCtrl115Fields::RT_PRIORITY,
      DescCtrl115Fields::CPUD,
      DescCtrl115Fields::RL,
      DescCtrl115Fields::WL,
      DescCtrl115Fields::DL,
      ftl::mmio::Reserved<11, 21>> {
    using eSW_TRIG_SV = DescCtrl115Fields::eSW_TRIG_SV;
    using eSW_TRIG_RT = DescCtrl115Fields::eSW_TRIG_RT;
    using ePOWER_DOMAIN = DescCtrl115Fields::ePOWER_DOMAIN;
    using eGP_EN = DescCtrl115Fields::eGP_EN;
    using eRL = DescCtrl115Fields::eRL;
    using eWL = DescCtrl115Fields::eWL;
    using eDL = DescCtrl115Fields::eDL;
    using SW_TRIG_SV = DescCtrl115Fields::SW_TRIG_SV;
    using SW_TRIG_RT = DescCtrl115Fields::SW_TRIG_RT;
    using POWER_DOMAIN = DescCtrl115Fields::POWER_DOMAIN;
    using GP_EN = DescCtrl115Fields::GP_EN;
    using SV_PRIORITY = DescCtrl115Fields::SV_PRIORITY;
    using RT_PRIORITY = DescCtrl115Fields::RT_PRIORITY;
    using CPUD = DescCtrl115Fields::CPUD;
    using RL = DescCtrl115Fields::RL;
    using WL = DescCtrl115Fields::WL;
    using DL = DescCtrl115Fields::DL;
  };

  // Descriptor Address Up 15 Register
  struct DescAddrUp15Fields {
    // Address field (High)
    using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrUp15Fields

  struct DESC_ADDR_UP_15 : ftl::mmio::Register<
      0x40CB81E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrUp15Fields::ADDR_UP> {
    using ADDR_UP = DescAddrUp15Fields::ADDR_UP;
  };

  // Descriptor Address Down 15 Register
  struct DescAddrDown15Fields {
    // Address field (Low)
    using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DescAddrDown15Fields

  struct DESC_ADDR_DOWN_15 : ftl::mmio::Register<
      0x40CB81ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DescAddrDown15Fields::ADDR_DOWN> {
    using ADDR_DOWN = DescAddrDown15Fields::ADDR_DOWN;
  };

  // Control Register
  struct CtrlFields {
    enum class eDIS_HW_REQ : std::uint32_t {
      // PGMC save/restore requests enabled
      eENABLE_PGMC = 0,
      // PGMC save/restore requests disabled
      eDIS_PGMC = 1,
    };

    // Save/Restore request disable
    using DIS_HW_REQ = ftl::mmio::Field<1, 27, eDIS_HW_REQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software reset
    using SW_RESET = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x40CB8200u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<27, 0>,
      CtrlFields::DIS_HW_REQ,
      ftl::mmio::Reserved<3, 28>,
      CtrlFields::SW_RESET> {
    using eDIS_HW_REQ = CtrlFields::eDIS_HW_REQ;
    using DIS_HW_REQ = CtrlFields::DIS_HW_REQ;
    using SW_RESET = CtrlFields::SW_RESET;
  };

  // Interrupt Status Register
  struct IntStatusFields {
    enum class eGROUP_CONFLICT : std::uint32_t {
      // No group conflict error
      eGRP_CONFLICT_ERR_NO = 0,
      // A group conflict error has occurred
      eGRP_CONFLICT_ERR = 1,
    };

    enum class eTIMEOUT : std::uint32_t {
      // No timeout event
      eERR_INDEX_ERR_NO = 0,
      // A timeout event has occurred
      eERR_INDEX_ERR = 1,
    };

    enum class eSW_REQ_DONE : std::uint32_t {
      // No software triggered requests or software triggered request still in progress
      eSW_REQ_ERR_A = 0,
      // Atleast one software triggered has been complete
      eSW_REQ_ERR = 1,
    };

    enum class eAHB_ERR : std::uint32_t {
      // No AHB error
      eAHB_ERRNO = 0,
      // An AHB error has occurred
      eAHB_ERR = 1,
    };

    enum class eADDR_ERR : std::uint32_t {
      // No address error
      eADDERR_ERRNO = 0,
      // An address error has occurred
      eADDERR_ERR = 1,
    };

    // Error Index
    using ERR_INDEX = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // AHB Bus response field
    using AHB_RESP = ftl::mmio::Field<2, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Group Conflict field
    using GROUP_CONFLICT = ftl::mmio::Field<1, 27, eGROUP_CONFLICT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Timeout field
    using TIMEOUT = ftl::mmio::Field<1, 28, eTIMEOUT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Software Request Done
    using SW_REQ_DONE = ftl::mmio::Field<1, 29, eSW_REQ_DONE, ftl::mmio::RO, ftl::mmio::Normal>;
    // AHB Error field
    using AHB_ERR = ftl::mmio::Field<1, 30, eAHB_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Address Error field
    using ADDR_ERR = ftl::mmio::Field<1, 31, eADDR_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IntStatusFields

  struct INT_STATUS : ftl::mmio::Register<
      0x40CB8204u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntStatusFields::ERR_INDEX,
      IntStatusFields::AHB_RESP,
      ftl::mmio::Reserved<15, 12>,
      IntStatusFields::GROUP_CONFLICT,
      IntStatusFields::TIMEOUT,
      IntStatusFields::SW_REQ_DONE,
      IntStatusFields::AHB_ERR,
      IntStatusFields::ADDR_ERR> {
    using eGROUP_CONFLICT = IntStatusFields::eGROUP_CONFLICT;
    using eTIMEOUT = IntStatusFields::eTIMEOUT;
    using eSW_REQ_DONE = IntStatusFields::eSW_REQ_DONE;
    using eAHB_ERR = IntStatusFields::eAHB_ERR;
    using eADDR_ERR = IntStatusFields::eADDR_ERR;
    using ERR_INDEX = IntStatusFields::ERR_INDEX;
    using AHB_RESP = IntStatusFields::AHB_RESP;
    using GROUP_CONFLICT = IntStatusFields::GROUP_CONFLICT;
    using TIMEOUT = IntStatusFields::TIMEOUT;
    using SW_REQ_DONE = IntStatusFields::SW_REQ_DONE;
    using AHB_ERR = IntStatusFields::AHB_ERR;
    using ADDR_ERR = IntStatusFields::ADDR_ERR;
  };

  // HP Timeout Register
  struct HpTimeoutFields {
    // Time out value
    using TIMEOUT_VALUE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HpTimeoutFields

  struct HP_TIMEOUT : ftl::mmio::Register<
      0x40CB820Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      HpTimeoutFields::TIMEOUT_VALUE> {
    using TIMEOUT_VALUE = HpTimeoutFields::TIMEOUT_VALUE;
  };

  // Hardware Request Pending Register
  struct HwGroupPendingFields {
    // This field indicates which groups are pending for save from hardware request
    using HW_SAVE_PENDING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // This field indicates which groups are pending for restore from hardware request
    using HW_RESTORE_PENDING = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HwGroupPendingFields

  struct HW_GROUP_PENDING : ftl::mmio::Register<
      0x40CB821Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      HwGroupPendingFields::HW_SAVE_PENDING,
      HwGroupPendingFields::HW_RESTORE_PENDING> {
    using HW_SAVE_PENDING = HwGroupPendingFields::HW_SAVE_PENDING;
    using HW_RESTORE_PENDING = HwGroupPendingFields::HW_RESTORE_PENDING;
  };

  // Software Request Pending Register
  struct SwGroupPendingFields {
    // This field indicates which groups are pending for save from software request
    using SW_SAVE_PENDING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // This field indicates which groups are pending for restore from software request
    using SW_RESTORE_PENDING = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SwGroupPendingFields

  struct SW_GROUP_PENDING : ftl::mmio::Register<
      0x40CB8220u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SwGroupPendingFields::SW_SAVE_PENDING,
      SwGroupPendingFields::SW_RESTORE_PENDING> {
    using SW_SAVE_PENDING = SwGroupPendingFields::SW_SAVE_PENDING;
    using SW_RESTORE_PENDING = SwGroupPendingFields::SW_RESTORE_PENDING;
  };

};

}  // namespace regs