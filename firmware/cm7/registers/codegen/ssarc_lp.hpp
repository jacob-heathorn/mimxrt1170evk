#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SSARC Registers
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::ssarc_lp {


// Descriptor Control0 0 Register
struct DESC_CTRL0_0_fields_ {

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
};  // struct DESC_CTRL0_0_fields_

struct DESC_CTRL0_0 : ftl::mmio::Register<
    0x40CB8000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_0_fields_::START,
    DESC_CTRL0_0_fields_::END,
    DESC_CTRL0_0_fields_::SV_ORDER,
    DESC_CTRL0_0_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_0_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_0_fields_::eRT_ORDER;
  using START = DESC_CTRL0_0_fields_::START;
  using END = DESC_CTRL0_0_fields_::END;
  using SV_ORDER = DESC_CTRL0_0_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_0_fields_::RT_ORDER;
};


// Descriptor Control1 0 Register
struct DESC_CTRL1_0_fields_ {

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
};  // struct DESC_CTRL1_0_fields_

struct DESC_CTRL1_0 : ftl::mmio::Register<
    0x40CB8004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_0_fields_::SW_TRIG_SV,
    DESC_CTRL1_0_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_0_fields_::POWER_DOMAIN,
    DESC_CTRL1_0_fields_::GP_EN,
    DESC_CTRL1_0_fields_::SV_PRIORITY,
    DESC_CTRL1_0_fields_::RT_PRIORITY,
    DESC_CTRL1_0_fields_::CPUD,
    DESC_CTRL1_0_fields_::RL,
    DESC_CTRL1_0_fields_::WL,
    DESC_CTRL1_0_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_0_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_0_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_0_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_0_fields_::eGP_EN;
  using eRL = DESC_CTRL1_0_fields_::eRL;
  using eWL = DESC_CTRL1_0_fields_::eWL;
  using eDL = DESC_CTRL1_0_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_0_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_0_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_0_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_0_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_0_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_0_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_0_fields_::CPUD;
  using RL = DESC_CTRL1_0_fields_::RL;
  using WL = DESC_CTRL1_0_fields_::WL;
  using DL = DESC_CTRL1_0_fields_::DL;
};


// Descriptor Address Up 0 Register
struct DESC_ADDR_UP_0_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_0_fields_

struct DESC_ADDR_UP_0 : ftl::mmio::Register<
    0x40CB8008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_0_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_0_fields_::ADDR_UP;
};


// Descriptor Address Down 0 Register
struct DESC_ADDR_DOWN_0_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_0_fields_

struct DESC_ADDR_DOWN_0 : ftl::mmio::Register<
    0x40CB800Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_0_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_0_fields_::ADDR_DOWN;
};


// Descriptor Control0 1 Register
struct DESC_CTRL0_1_fields_ {

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
};  // struct DESC_CTRL0_1_fields_

struct DESC_CTRL0_1 : ftl::mmio::Register<
    0x40CB8020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_1_fields_::START,
    DESC_CTRL0_1_fields_::END,
    DESC_CTRL0_1_fields_::SV_ORDER,
    DESC_CTRL0_1_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_1_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_1_fields_::eRT_ORDER;
  using START = DESC_CTRL0_1_fields_::START;
  using END = DESC_CTRL0_1_fields_::END;
  using SV_ORDER = DESC_CTRL0_1_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_1_fields_::RT_ORDER;
};


// Descriptor Control1 1 Register
struct DESC_CTRL1_1_fields_ {

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
};  // struct DESC_CTRL1_1_fields_

struct DESC_CTRL1_1 : ftl::mmio::Register<
    0x40CB8024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_1_fields_::SW_TRIG_SV,
    DESC_CTRL1_1_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_1_fields_::POWER_DOMAIN,
    DESC_CTRL1_1_fields_::GP_EN,
    DESC_CTRL1_1_fields_::SV_PRIORITY,
    DESC_CTRL1_1_fields_::RT_PRIORITY,
    DESC_CTRL1_1_fields_::CPUD,
    DESC_CTRL1_1_fields_::RL,
    DESC_CTRL1_1_fields_::WL,
    DESC_CTRL1_1_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_1_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_1_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_1_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_1_fields_::eGP_EN;
  using eRL = DESC_CTRL1_1_fields_::eRL;
  using eWL = DESC_CTRL1_1_fields_::eWL;
  using eDL = DESC_CTRL1_1_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_1_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_1_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_1_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_1_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_1_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_1_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_1_fields_::CPUD;
  using RL = DESC_CTRL1_1_fields_::RL;
  using WL = DESC_CTRL1_1_fields_::WL;
  using DL = DESC_CTRL1_1_fields_::DL;
};


// Descriptor Address Up 1 Register
struct DESC_ADDR_UP_1_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_1_fields_

struct DESC_ADDR_UP_1 : ftl::mmio::Register<
    0x40CB8028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_1_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_1_fields_::ADDR_UP;
};


// Descriptor Address Down 1 Register
struct DESC_ADDR_DOWN_1_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_1_fields_

struct DESC_ADDR_DOWN_1 : ftl::mmio::Register<
    0x40CB802Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_1_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_1_fields_::ADDR_DOWN;
};


// Descriptor Control0 2 Register
struct DESC_CTRL0_2_fields_ {

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
};  // struct DESC_CTRL0_2_fields_

struct DESC_CTRL0_2 : ftl::mmio::Register<
    0x40CB8040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_2_fields_::START,
    DESC_CTRL0_2_fields_::END,
    DESC_CTRL0_2_fields_::SV_ORDER,
    DESC_CTRL0_2_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_2_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_2_fields_::eRT_ORDER;
  using START = DESC_CTRL0_2_fields_::START;
  using END = DESC_CTRL0_2_fields_::END;
  using SV_ORDER = DESC_CTRL0_2_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_2_fields_::RT_ORDER;
};


// Descriptor Control1 2 Register
struct DESC_CTRL1_2_fields_ {

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
};  // struct DESC_CTRL1_2_fields_

struct DESC_CTRL1_2 : ftl::mmio::Register<
    0x40CB8044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_2_fields_::SW_TRIG_SV,
    DESC_CTRL1_2_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_2_fields_::POWER_DOMAIN,
    DESC_CTRL1_2_fields_::GP_EN,
    DESC_CTRL1_2_fields_::SV_PRIORITY,
    DESC_CTRL1_2_fields_::RT_PRIORITY,
    DESC_CTRL1_2_fields_::CPUD,
    DESC_CTRL1_2_fields_::RL,
    DESC_CTRL1_2_fields_::WL,
    DESC_CTRL1_2_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_2_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_2_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_2_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_2_fields_::eGP_EN;
  using eRL = DESC_CTRL1_2_fields_::eRL;
  using eWL = DESC_CTRL1_2_fields_::eWL;
  using eDL = DESC_CTRL1_2_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_2_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_2_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_2_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_2_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_2_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_2_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_2_fields_::CPUD;
  using RL = DESC_CTRL1_2_fields_::RL;
  using WL = DESC_CTRL1_2_fields_::WL;
  using DL = DESC_CTRL1_2_fields_::DL;
};


// Descriptor Address Up 2 Register
struct DESC_ADDR_UP_2_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_2_fields_

struct DESC_ADDR_UP_2 : ftl::mmio::Register<
    0x40CB8048u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_2_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_2_fields_::ADDR_UP;
};


// Descriptor Address Down 2 Register
struct DESC_ADDR_DOWN_2_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_2_fields_

struct DESC_ADDR_DOWN_2 : ftl::mmio::Register<
    0x40CB804Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_2_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_2_fields_::ADDR_DOWN;
};


// Descriptor Control0 3 Register
struct DESC_CTRL0_3_fields_ {

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
};  // struct DESC_CTRL0_3_fields_

struct DESC_CTRL0_3 : ftl::mmio::Register<
    0x40CB8060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_3_fields_::START,
    DESC_CTRL0_3_fields_::END,
    DESC_CTRL0_3_fields_::SV_ORDER,
    DESC_CTRL0_3_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_3_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_3_fields_::eRT_ORDER;
  using START = DESC_CTRL0_3_fields_::START;
  using END = DESC_CTRL0_3_fields_::END;
  using SV_ORDER = DESC_CTRL0_3_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_3_fields_::RT_ORDER;
};


// Descriptor Control1 3 Register
struct DESC_CTRL1_3_fields_ {

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
};  // struct DESC_CTRL1_3_fields_

struct DESC_CTRL1_3 : ftl::mmio::Register<
    0x40CB8064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_3_fields_::SW_TRIG_SV,
    DESC_CTRL1_3_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_3_fields_::POWER_DOMAIN,
    DESC_CTRL1_3_fields_::GP_EN,
    DESC_CTRL1_3_fields_::SV_PRIORITY,
    DESC_CTRL1_3_fields_::RT_PRIORITY,
    DESC_CTRL1_3_fields_::CPUD,
    DESC_CTRL1_3_fields_::RL,
    DESC_CTRL1_3_fields_::WL,
    DESC_CTRL1_3_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_3_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_3_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_3_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_3_fields_::eGP_EN;
  using eRL = DESC_CTRL1_3_fields_::eRL;
  using eWL = DESC_CTRL1_3_fields_::eWL;
  using eDL = DESC_CTRL1_3_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_3_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_3_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_3_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_3_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_3_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_3_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_3_fields_::CPUD;
  using RL = DESC_CTRL1_3_fields_::RL;
  using WL = DESC_CTRL1_3_fields_::WL;
  using DL = DESC_CTRL1_3_fields_::DL;
};


// Descriptor Address Up 3 Register
struct DESC_ADDR_UP_3_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_3_fields_

struct DESC_ADDR_UP_3 : ftl::mmio::Register<
    0x40CB8068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_3_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_3_fields_::ADDR_UP;
};


// Descriptor Address Down 3 Register
struct DESC_ADDR_DOWN_3_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_3_fields_

struct DESC_ADDR_DOWN_3 : ftl::mmio::Register<
    0x40CB806Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_3_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_3_fields_::ADDR_DOWN;
};


// Descriptor Control0 4 Register
struct DESC_CTRL0_4_fields_ {

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
};  // struct DESC_CTRL0_4_fields_

struct DESC_CTRL0_4 : ftl::mmio::Register<
    0x40CB8080u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_4_fields_::START,
    DESC_CTRL0_4_fields_::END,
    DESC_CTRL0_4_fields_::SV_ORDER,
    DESC_CTRL0_4_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_4_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_4_fields_::eRT_ORDER;
  using START = DESC_CTRL0_4_fields_::START;
  using END = DESC_CTRL0_4_fields_::END;
  using SV_ORDER = DESC_CTRL0_4_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_4_fields_::RT_ORDER;
};


// Descriptor Control1 4 Register
struct DESC_CTRL1_4_fields_ {

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
};  // struct DESC_CTRL1_4_fields_

struct DESC_CTRL1_4 : ftl::mmio::Register<
    0x40CB8084u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_4_fields_::SW_TRIG_SV,
    DESC_CTRL1_4_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_4_fields_::POWER_DOMAIN,
    DESC_CTRL1_4_fields_::GP_EN,
    DESC_CTRL1_4_fields_::SV_PRIORITY,
    DESC_CTRL1_4_fields_::RT_PRIORITY,
    DESC_CTRL1_4_fields_::CPUD,
    DESC_CTRL1_4_fields_::RL,
    DESC_CTRL1_4_fields_::WL,
    DESC_CTRL1_4_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_4_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_4_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_4_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_4_fields_::eGP_EN;
  using eRL = DESC_CTRL1_4_fields_::eRL;
  using eWL = DESC_CTRL1_4_fields_::eWL;
  using eDL = DESC_CTRL1_4_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_4_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_4_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_4_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_4_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_4_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_4_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_4_fields_::CPUD;
  using RL = DESC_CTRL1_4_fields_::RL;
  using WL = DESC_CTRL1_4_fields_::WL;
  using DL = DESC_CTRL1_4_fields_::DL;
};


// Descriptor Address Up 4 Register
struct DESC_ADDR_UP_4_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_4_fields_

struct DESC_ADDR_UP_4 : ftl::mmio::Register<
    0x40CB8088u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_4_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_4_fields_::ADDR_UP;
};


// Descriptor Address Down 4 Register
struct DESC_ADDR_DOWN_4_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_4_fields_

struct DESC_ADDR_DOWN_4 : ftl::mmio::Register<
    0x40CB808Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_4_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_4_fields_::ADDR_DOWN;
};


// Descriptor Control0 5 Register
struct DESC_CTRL0_5_fields_ {

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
};  // struct DESC_CTRL0_5_fields_

struct DESC_CTRL0_5 : ftl::mmio::Register<
    0x40CB80A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_5_fields_::START,
    DESC_CTRL0_5_fields_::END,
    DESC_CTRL0_5_fields_::SV_ORDER,
    DESC_CTRL0_5_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_5_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_5_fields_::eRT_ORDER;
  using START = DESC_CTRL0_5_fields_::START;
  using END = DESC_CTRL0_5_fields_::END;
  using SV_ORDER = DESC_CTRL0_5_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_5_fields_::RT_ORDER;
};


// Descriptor Control1 5 Register
struct DESC_CTRL1_5_fields_ {

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
};  // struct DESC_CTRL1_5_fields_

struct DESC_CTRL1_5 : ftl::mmio::Register<
    0x40CB80A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_5_fields_::SW_TRIG_SV,
    DESC_CTRL1_5_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_5_fields_::POWER_DOMAIN,
    DESC_CTRL1_5_fields_::GP_EN,
    DESC_CTRL1_5_fields_::SV_PRIORITY,
    DESC_CTRL1_5_fields_::RT_PRIORITY,
    DESC_CTRL1_5_fields_::CPUD,
    DESC_CTRL1_5_fields_::RL,
    DESC_CTRL1_5_fields_::WL,
    DESC_CTRL1_5_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_5_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_5_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_5_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_5_fields_::eGP_EN;
  using eRL = DESC_CTRL1_5_fields_::eRL;
  using eWL = DESC_CTRL1_5_fields_::eWL;
  using eDL = DESC_CTRL1_5_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_5_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_5_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_5_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_5_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_5_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_5_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_5_fields_::CPUD;
  using RL = DESC_CTRL1_5_fields_::RL;
  using WL = DESC_CTRL1_5_fields_::WL;
  using DL = DESC_CTRL1_5_fields_::DL;
};


// Descriptor Address Up 5 Register
struct DESC_ADDR_UP_5_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_5_fields_

struct DESC_ADDR_UP_5 : ftl::mmio::Register<
    0x40CB80A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_5_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_5_fields_::ADDR_UP;
};


// Descriptor Address Down 5 Register
struct DESC_ADDR_DOWN_5_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_5_fields_

struct DESC_ADDR_DOWN_5 : ftl::mmio::Register<
    0x40CB80ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_5_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_5_fields_::ADDR_DOWN;
};


// Descriptor Control0 6 Register
struct DESC_CTRL0_6_fields_ {

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
};  // struct DESC_CTRL0_6_fields_

struct DESC_CTRL0_6 : ftl::mmio::Register<
    0x40CB80C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_6_fields_::START,
    DESC_CTRL0_6_fields_::END,
    DESC_CTRL0_6_fields_::SV_ORDER,
    DESC_CTRL0_6_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_6_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_6_fields_::eRT_ORDER;
  using START = DESC_CTRL0_6_fields_::START;
  using END = DESC_CTRL0_6_fields_::END;
  using SV_ORDER = DESC_CTRL0_6_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_6_fields_::RT_ORDER;
};


// Descriptor Control1 6 Register
struct DESC_CTRL1_6_fields_ {

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
};  // struct DESC_CTRL1_6_fields_

struct DESC_CTRL1_6 : ftl::mmio::Register<
    0x40CB80C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_6_fields_::SW_TRIG_SV,
    DESC_CTRL1_6_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_6_fields_::POWER_DOMAIN,
    DESC_CTRL1_6_fields_::GP_EN,
    DESC_CTRL1_6_fields_::SV_PRIORITY,
    DESC_CTRL1_6_fields_::RT_PRIORITY,
    DESC_CTRL1_6_fields_::CPUD,
    DESC_CTRL1_6_fields_::RL,
    DESC_CTRL1_6_fields_::WL,
    DESC_CTRL1_6_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_6_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_6_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_6_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_6_fields_::eGP_EN;
  using eRL = DESC_CTRL1_6_fields_::eRL;
  using eWL = DESC_CTRL1_6_fields_::eWL;
  using eDL = DESC_CTRL1_6_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_6_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_6_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_6_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_6_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_6_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_6_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_6_fields_::CPUD;
  using RL = DESC_CTRL1_6_fields_::RL;
  using WL = DESC_CTRL1_6_fields_::WL;
  using DL = DESC_CTRL1_6_fields_::DL;
};


// Descriptor Address Up 6 Register
struct DESC_ADDR_UP_6_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_6_fields_

struct DESC_ADDR_UP_6 : ftl::mmio::Register<
    0x40CB80C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_6_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_6_fields_::ADDR_UP;
};


// Descriptor Address Down 6 Register
struct DESC_ADDR_DOWN_6_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_6_fields_

struct DESC_ADDR_DOWN_6 : ftl::mmio::Register<
    0x40CB80CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_6_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_6_fields_::ADDR_DOWN;
};


// Descriptor Control0 7 Register
struct DESC_CTRL0_7_fields_ {

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
};  // struct DESC_CTRL0_7_fields_

struct DESC_CTRL0_7 : ftl::mmio::Register<
    0x40CB80E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_7_fields_::START,
    DESC_CTRL0_7_fields_::END,
    DESC_CTRL0_7_fields_::SV_ORDER,
    DESC_CTRL0_7_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_7_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_7_fields_::eRT_ORDER;
  using START = DESC_CTRL0_7_fields_::START;
  using END = DESC_CTRL0_7_fields_::END;
  using SV_ORDER = DESC_CTRL0_7_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_7_fields_::RT_ORDER;
};


// Descriptor Control1 7 Register
struct DESC_CTRL1_7_fields_ {

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
};  // struct DESC_CTRL1_7_fields_

struct DESC_CTRL1_7 : ftl::mmio::Register<
    0x40CB80E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_7_fields_::SW_TRIG_SV,
    DESC_CTRL1_7_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_7_fields_::POWER_DOMAIN,
    DESC_CTRL1_7_fields_::GP_EN,
    DESC_CTRL1_7_fields_::SV_PRIORITY,
    DESC_CTRL1_7_fields_::RT_PRIORITY,
    DESC_CTRL1_7_fields_::CPUD,
    DESC_CTRL1_7_fields_::RL,
    DESC_CTRL1_7_fields_::WL,
    DESC_CTRL1_7_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_7_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_7_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_7_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_7_fields_::eGP_EN;
  using eRL = DESC_CTRL1_7_fields_::eRL;
  using eWL = DESC_CTRL1_7_fields_::eWL;
  using eDL = DESC_CTRL1_7_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_7_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_7_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_7_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_7_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_7_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_7_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_7_fields_::CPUD;
  using RL = DESC_CTRL1_7_fields_::RL;
  using WL = DESC_CTRL1_7_fields_::WL;
  using DL = DESC_CTRL1_7_fields_::DL;
};


// Descriptor Address Up 7 Register
struct DESC_ADDR_UP_7_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_7_fields_

struct DESC_ADDR_UP_7 : ftl::mmio::Register<
    0x40CB80E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_7_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_7_fields_::ADDR_UP;
};


// Descriptor Address Down 7 Register
struct DESC_ADDR_DOWN_7_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_7_fields_

struct DESC_ADDR_DOWN_7 : ftl::mmio::Register<
    0x40CB80ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_7_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_7_fields_::ADDR_DOWN;
};


// Descriptor Control0 8 Register
struct DESC_CTRL0_8_fields_ {

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
};  // struct DESC_CTRL0_8_fields_

struct DESC_CTRL0_8 : ftl::mmio::Register<
    0x40CB8100u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_8_fields_::START,
    DESC_CTRL0_8_fields_::END,
    DESC_CTRL0_8_fields_::SV_ORDER,
    DESC_CTRL0_8_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_8_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_8_fields_::eRT_ORDER;
  using START = DESC_CTRL0_8_fields_::START;
  using END = DESC_CTRL0_8_fields_::END;
  using SV_ORDER = DESC_CTRL0_8_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_8_fields_::RT_ORDER;
};


// Descriptor Control1 8 Register
struct DESC_CTRL1_8_fields_ {

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
};  // struct DESC_CTRL1_8_fields_

struct DESC_CTRL1_8 : ftl::mmio::Register<
    0x40CB8104u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_8_fields_::SW_TRIG_SV,
    DESC_CTRL1_8_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_8_fields_::POWER_DOMAIN,
    DESC_CTRL1_8_fields_::GP_EN,
    DESC_CTRL1_8_fields_::SV_PRIORITY,
    DESC_CTRL1_8_fields_::RT_PRIORITY,
    DESC_CTRL1_8_fields_::CPUD,
    DESC_CTRL1_8_fields_::RL,
    DESC_CTRL1_8_fields_::WL,
    DESC_CTRL1_8_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_8_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_8_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_8_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_8_fields_::eGP_EN;
  using eRL = DESC_CTRL1_8_fields_::eRL;
  using eWL = DESC_CTRL1_8_fields_::eWL;
  using eDL = DESC_CTRL1_8_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_8_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_8_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_8_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_8_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_8_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_8_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_8_fields_::CPUD;
  using RL = DESC_CTRL1_8_fields_::RL;
  using WL = DESC_CTRL1_8_fields_::WL;
  using DL = DESC_CTRL1_8_fields_::DL;
};


// Descriptor Address Up 8 Register
struct DESC_ADDR_UP_8_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_8_fields_

struct DESC_ADDR_UP_8 : ftl::mmio::Register<
    0x40CB8108u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_8_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_8_fields_::ADDR_UP;
};


// Descriptor Address Down 8 Register
struct DESC_ADDR_DOWN_8_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_8_fields_

struct DESC_ADDR_DOWN_8 : ftl::mmio::Register<
    0x40CB810Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_8_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_8_fields_::ADDR_DOWN;
};


// Descriptor Control0 9 Register
struct DESC_CTRL0_9_fields_ {

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
};  // struct DESC_CTRL0_9_fields_

struct DESC_CTRL0_9 : ftl::mmio::Register<
    0x40CB8120u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_9_fields_::START,
    DESC_CTRL0_9_fields_::END,
    DESC_CTRL0_9_fields_::SV_ORDER,
    DESC_CTRL0_9_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_9_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_9_fields_::eRT_ORDER;
  using START = DESC_CTRL0_9_fields_::START;
  using END = DESC_CTRL0_9_fields_::END;
  using SV_ORDER = DESC_CTRL0_9_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_9_fields_::RT_ORDER;
};


// Descriptor Control1 9 Register
struct DESC_CTRL1_9_fields_ {

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
};  // struct DESC_CTRL1_9_fields_

struct DESC_CTRL1_9 : ftl::mmio::Register<
    0x40CB8124u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_9_fields_::SW_TRIG_SV,
    DESC_CTRL1_9_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_9_fields_::POWER_DOMAIN,
    DESC_CTRL1_9_fields_::GP_EN,
    DESC_CTRL1_9_fields_::SV_PRIORITY,
    DESC_CTRL1_9_fields_::RT_PRIORITY,
    DESC_CTRL1_9_fields_::CPUD,
    DESC_CTRL1_9_fields_::RL,
    DESC_CTRL1_9_fields_::WL,
    DESC_CTRL1_9_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_9_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_9_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_9_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_9_fields_::eGP_EN;
  using eRL = DESC_CTRL1_9_fields_::eRL;
  using eWL = DESC_CTRL1_9_fields_::eWL;
  using eDL = DESC_CTRL1_9_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_9_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_9_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_9_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_9_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_9_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_9_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_9_fields_::CPUD;
  using RL = DESC_CTRL1_9_fields_::RL;
  using WL = DESC_CTRL1_9_fields_::WL;
  using DL = DESC_CTRL1_9_fields_::DL;
};


// Descriptor Address Up 9 Register
struct DESC_ADDR_UP_9_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_9_fields_

struct DESC_ADDR_UP_9 : ftl::mmio::Register<
    0x40CB8128u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_9_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_9_fields_::ADDR_UP;
};


// Descriptor Address Down 9 Register
struct DESC_ADDR_DOWN_9_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_9_fields_

struct DESC_ADDR_DOWN_9 : ftl::mmio::Register<
    0x40CB812Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_9_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_9_fields_::ADDR_DOWN;
};


// Descriptor Control0 10 Register
struct DESC_CTRL0_10_fields_ {

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
};  // struct DESC_CTRL0_10_fields_

struct DESC_CTRL0_10 : ftl::mmio::Register<
    0x40CB8140u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_10_fields_::START,
    DESC_CTRL0_10_fields_::END,
    DESC_CTRL0_10_fields_::SV_ORDER,
    DESC_CTRL0_10_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_10_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_10_fields_::eRT_ORDER;
  using START = DESC_CTRL0_10_fields_::START;
  using END = DESC_CTRL0_10_fields_::END;
  using SV_ORDER = DESC_CTRL0_10_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_10_fields_::RT_ORDER;
};


// Descriptor Control1 10 Register
struct DESC_CTRL1_10_fields_ {

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
};  // struct DESC_CTRL1_10_fields_

struct DESC_CTRL1_10 : ftl::mmio::Register<
    0x40CB8144u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_10_fields_::SW_TRIG_SV,
    DESC_CTRL1_10_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_10_fields_::POWER_DOMAIN,
    DESC_CTRL1_10_fields_::GP_EN,
    DESC_CTRL1_10_fields_::SV_PRIORITY,
    DESC_CTRL1_10_fields_::RT_PRIORITY,
    DESC_CTRL1_10_fields_::CPUD,
    DESC_CTRL1_10_fields_::RL,
    DESC_CTRL1_10_fields_::WL,
    DESC_CTRL1_10_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_10_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_10_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_10_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_10_fields_::eGP_EN;
  using eRL = DESC_CTRL1_10_fields_::eRL;
  using eWL = DESC_CTRL1_10_fields_::eWL;
  using eDL = DESC_CTRL1_10_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_10_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_10_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_10_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_10_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_10_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_10_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_10_fields_::CPUD;
  using RL = DESC_CTRL1_10_fields_::RL;
  using WL = DESC_CTRL1_10_fields_::WL;
  using DL = DESC_CTRL1_10_fields_::DL;
};


// Descriptor Address Up 10 Register
struct DESC_ADDR_UP_10_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_10_fields_

struct DESC_ADDR_UP_10 : ftl::mmio::Register<
    0x40CB8148u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_10_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_10_fields_::ADDR_UP;
};


// Descriptor Address Down 10 Register
struct DESC_ADDR_DOWN_10_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_10_fields_

struct DESC_ADDR_DOWN_10 : ftl::mmio::Register<
    0x40CB814Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_10_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_10_fields_::ADDR_DOWN;
};


// Descriptor Control0 11 Register
struct DESC_CTRL0_11_fields_ {

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
};  // struct DESC_CTRL0_11_fields_

struct DESC_CTRL0_11 : ftl::mmio::Register<
    0x40CB8160u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_11_fields_::START,
    DESC_CTRL0_11_fields_::END,
    DESC_CTRL0_11_fields_::SV_ORDER,
    DESC_CTRL0_11_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_11_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_11_fields_::eRT_ORDER;
  using START = DESC_CTRL0_11_fields_::START;
  using END = DESC_CTRL0_11_fields_::END;
  using SV_ORDER = DESC_CTRL0_11_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_11_fields_::RT_ORDER;
};


// Descriptor Control1 11 Register
struct DESC_CTRL1_11_fields_ {

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
};  // struct DESC_CTRL1_11_fields_

struct DESC_CTRL1_11 : ftl::mmio::Register<
    0x40CB8164u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_11_fields_::SW_TRIG_SV,
    DESC_CTRL1_11_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_11_fields_::POWER_DOMAIN,
    DESC_CTRL1_11_fields_::GP_EN,
    DESC_CTRL1_11_fields_::SV_PRIORITY,
    DESC_CTRL1_11_fields_::RT_PRIORITY,
    DESC_CTRL1_11_fields_::CPUD,
    DESC_CTRL1_11_fields_::RL,
    DESC_CTRL1_11_fields_::WL,
    DESC_CTRL1_11_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_11_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_11_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_11_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_11_fields_::eGP_EN;
  using eRL = DESC_CTRL1_11_fields_::eRL;
  using eWL = DESC_CTRL1_11_fields_::eWL;
  using eDL = DESC_CTRL1_11_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_11_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_11_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_11_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_11_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_11_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_11_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_11_fields_::CPUD;
  using RL = DESC_CTRL1_11_fields_::RL;
  using WL = DESC_CTRL1_11_fields_::WL;
  using DL = DESC_CTRL1_11_fields_::DL;
};


// Descriptor Address Up 11 Register
struct DESC_ADDR_UP_11_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_11_fields_

struct DESC_ADDR_UP_11 : ftl::mmio::Register<
    0x40CB8168u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_11_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_11_fields_::ADDR_UP;
};


// Descriptor Address Down 11 Register
struct DESC_ADDR_DOWN_11_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_11_fields_

struct DESC_ADDR_DOWN_11 : ftl::mmio::Register<
    0x40CB816Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_11_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_11_fields_::ADDR_DOWN;
};


// Descriptor Control0 12 Register
struct DESC_CTRL0_12_fields_ {

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
};  // struct DESC_CTRL0_12_fields_

struct DESC_CTRL0_12 : ftl::mmio::Register<
    0x40CB8180u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_12_fields_::START,
    DESC_CTRL0_12_fields_::END,
    DESC_CTRL0_12_fields_::SV_ORDER,
    DESC_CTRL0_12_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_12_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_12_fields_::eRT_ORDER;
  using START = DESC_CTRL0_12_fields_::START;
  using END = DESC_CTRL0_12_fields_::END;
  using SV_ORDER = DESC_CTRL0_12_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_12_fields_::RT_ORDER;
};


// Descriptor Control1 12 Register
struct DESC_CTRL1_12_fields_ {

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
};  // struct DESC_CTRL1_12_fields_

struct DESC_CTRL1_12 : ftl::mmio::Register<
    0x40CB8184u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_12_fields_::SW_TRIG_SV,
    DESC_CTRL1_12_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_12_fields_::POWER_DOMAIN,
    DESC_CTRL1_12_fields_::GP_EN,
    DESC_CTRL1_12_fields_::SV_PRIORITY,
    DESC_CTRL1_12_fields_::RT_PRIORITY,
    DESC_CTRL1_12_fields_::CPUD,
    DESC_CTRL1_12_fields_::RL,
    DESC_CTRL1_12_fields_::WL,
    DESC_CTRL1_12_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_12_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_12_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_12_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_12_fields_::eGP_EN;
  using eRL = DESC_CTRL1_12_fields_::eRL;
  using eWL = DESC_CTRL1_12_fields_::eWL;
  using eDL = DESC_CTRL1_12_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_12_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_12_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_12_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_12_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_12_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_12_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_12_fields_::CPUD;
  using RL = DESC_CTRL1_12_fields_::RL;
  using WL = DESC_CTRL1_12_fields_::WL;
  using DL = DESC_CTRL1_12_fields_::DL;
};


// Descriptor Address Up 12 Register
struct DESC_ADDR_UP_12_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_12_fields_

struct DESC_ADDR_UP_12 : ftl::mmio::Register<
    0x40CB8188u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_12_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_12_fields_::ADDR_UP;
};


// Descriptor Address Down 12 Register
struct DESC_ADDR_DOWN_12_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_12_fields_

struct DESC_ADDR_DOWN_12 : ftl::mmio::Register<
    0x40CB818Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_12_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_12_fields_::ADDR_DOWN;
};


// Descriptor Control0 13 Register
struct DESC_CTRL0_13_fields_ {

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
};  // struct DESC_CTRL0_13_fields_

struct DESC_CTRL0_13 : ftl::mmio::Register<
    0x40CB81A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_13_fields_::START,
    DESC_CTRL0_13_fields_::END,
    DESC_CTRL0_13_fields_::SV_ORDER,
    DESC_CTRL0_13_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_13_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_13_fields_::eRT_ORDER;
  using START = DESC_CTRL0_13_fields_::START;
  using END = DESC_CTRL0_13_fields_::END;
  using SV_ORDER = DESC_CTRL0_13_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_13_fields_::RT_ORDER;
};


// Descriptor Control1 13 Register
struct DESC_CTRL1_13_fields_ {

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
};  // struct DESC_CTRL1_13_fields_

struct DESC_CTRL1_13 : ftl::mmio::Register<
    0x40CB81A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_13_fields_::SW_TRIG_SV,
    DESC_CTRL1_13_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_13_fields_::POWER_DOMAIN,
    DESC_CTRL1_13_fields_::GP_EN,
    DESC_CTRL1_13_fields_::SV_PRIORITY,
    DESC_CTRL1_13_fields_::RT_PRIORITY,
    DESC_CTRL1_13_fields_::CPUD,
    DESC_CTRL1_13_fields_::RL,
    DESC_CTRL1_13_fields_::WL,
    DESC_CTRL1_13_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_13_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_13_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_13_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_13_fields_::eGP_EN;
  using eRL = DESC_CTRL1_13_fields_::eRL;
  using eWL = DESC_CTRL1_13_fields_::eWL;
  using eDL = DESC_CTRL1_13_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_13_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_13_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_13_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_13_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_13_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_13_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_13_fields_::CPUD;
  using RL = DESC_CTRL1_13_fields_::RL;
  using WL = DESC_CTRL1_13_fields_::WL;
  using DL = DESC_CTRL1_13_fields_::DL;
};


// Descriptor Address Up 13 Register
struct DESC_ADDR_UP_13_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_13_fields_

struct DESC_ADDR_UP_13 : ftl::mmio::Register<
    0x40CB81A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_13_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_13_fields_::ADDR_UP;
};


// Descriptor Address Down 13 Register
struct DESC_ADDR_DOWN_13_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_13_fields_

struct DESC_ADDR_DOWN_13 : ftl::mmio::Register<
    0x40CB81ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_13_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_13_fields_::ADDR_DOWN;
};


// Descriptor Control0 14 Register
struct DESC_CTRL0_14_fields_ {

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
};  // struct DESC_CTRL0_14_fields_

struct DESC_CTRL0_14 : ftl::mmio::Register<
    0x40CB81C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_14_fields_::START,
    DESC_CTRL0_14_fields_::END,
    DESC_CTRL0_14_fields_::SV_ORDER,
    DESC_CTRL0_14_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_14_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_14_fields_::eRT_ORDER;
  using START = DESC_CTRL0_14_fields_::START;
  using END = DESC_CTRL0_14_fields_::END;
  using SV_ORDER = DESC_CTRL0_14_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_14_fields_::RT_ORDER;
};


// Descriptor Control1 14 Register
struct DESC_CTRL1_14_fields_ {

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
};  // struct DESC_CTRL1_14_fields_

struct DESC_CTRL1_14 : ftl::mmio::Register<
    0x40CB81C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_14_fields_::SW_TRIG_SV,
    DESC_CTRL1_14_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_14_fields_::POWER_DOMAIN,
    DESC_CTRL1_14_fields_::GP_EN,
    DESC_CTRL1_14_fields_::SV_PRIORITY,
    DESC_CTRL1_14_fields_::RT_PRIORITY,
    DESC_CTRL1_14_fields_::CPUD,
    DESC_CTRL1_14_fields_::RL,
    DESC_CTRL1_14_fields_::WL,
    DESC_CTRL1_14_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_14_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_14_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_14_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_14_fields_::eGP_EN;
  using eRL = DESC_CTRL1_14_fields_::eRL;
  using eWL = DESC_CTRL1_14_fields_::eWL;
  using eDL = DESC_CTRL1_14_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_14_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_14_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_14_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_14_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_14_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_14_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_14_fields_::CPUD;
  using RL = DESC_CTRL1_14_fields_::RL;
  using WL = DESC_CTRL1_14_fields_::WL;
  using DL = DESC_CTRL1_14_fields_::DL;
};


// Descriptor Address Up 14 Register
struct DESC_ADDR_UP_14_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_14_fields_

struct DESC_ADDR_UP_14 : ftl::mmio::Register<
    0x40CB81C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_14_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_14_fields_::ADDR_UP;
};


// Descriptor Address Down 14 Register
struct DESC_ADDR_DOWN_14_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_14_fields_

struct DESC_ADDR_DOWN_14 : ftl::mmio::Register<
    0x40CB81CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_14_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_14_fields_::ADDR_DOWN;
};


// Descriptor Control0 15 Register
struct DESC_CTRL0_15_fields_ {

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
};  // struct DESC_CTRL0_15_fields_

struct DESC_CTRL0_15 : ftl::mmio::Register<
    0x40CB81E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL0_15_fields_::START,
    DESC_CTRL0_15_fields_::END,
    DESC_CTRL0_15_fields_::SV_ORDER,
    DESC_CTRL0_15_fields_::RT_ORDER,
    ftl::mmio::Reserved<10, 22>> {
  using eSV_ORDER = DESC_CTRL0_15_fields_::eSV_ORDER;
  using eRT_ORDER = DESC_CTRL0_15_fields_::eRT_ORDER;
  using START = DESC_CTRL0_15_fields_::START;
  using END = DESC_CTRL0_15_fields_::END;
  using SV_ORDER = DESC_CTRL0_15_fields_::SV_ORDER;
  using RT_ORDER = DESC_CTRL0_15_fields_::RT_ORDER;
};


// Descriptor Control1 15 Register
struct DESC_CTRL1_15_fields_ {

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
};  // struct DESC_CTRL1_15_fields_

struct DESC_CTRL1_15 : ftl::mmio::Register<
    0x40CB81E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_CTRL1_15_fields_::SW_TRIG_SV,
    DESC_CTRL1_15_fields_::SW_TRIG_RT,
    ftl::mmio::Reserved<2, 2>,
    DESC_CTRL1_15_fields_::POWER_DOMAIN,
    DESC_CTRL1_15_fields_::GP_EN,
    DESC_CTRL1_15_fields_::SV_PRIORITY,
    DESC_CTRL1_15_fields_::RT_PRIORITY,
    DESC_CTRL1_15_fields_::CPUD,
    DESC_CTRL1_15_fields_::RL,
    DESC_CTRL1_15_fields_::WL,
    DESC_CTRL1_15_fields_::DL,
    ftl::mmio::Reserved<11, 21>> {
  using eSW_TRIG_SV = DESC_CTRL1_15_fields_::eSW_TRIG_SV;
  using eSW_TRIG_RT = DESC_CTRL1_15_fields_::eSW_TRIG_RT;
  using ePOWER_DOMAIN = DESC_CTRL1_15_fields_::ePOWER_DOMAIN;
  using eGP_EN = DESC_CTRL1_15_fields_::eGP_EN;
  using eRL = DESC_CTRL1_15_fields_::eRL;
  using eWL = DESC_CTRL1_15_fields_::eWL;
  using eDL = DESC_CTRL1_15_fields_::eDL;
  using SW_TRIG_SV = DESC_CTRL1_15_fields_::SW_TRIG_SV;
  using SW_TRIG_RT = DESC_CTRL1_15_fields_::SW_TRIG_RT;
  using POWER_DOMAIN = DESC_CTRL1_15_fields_::POWER_DOMAIN;
  using GP_EN = DESC_CTRL1_15_fields_::GP_EN;
  using SV_PRIORITY = DESC_CTRL1_15_fields_::SV_PRIORITY;
  using RT_PRIORITY = DESC_CTRL1_15_fields_::RT_PRIORITY;
  using CPUD = DESC_CTRL1_15_fields_::CPUD;
  using RL = DESC_CTRL1_15_fields_::RL;
  using WL = DESC_CTRL1_15_fields_::WL;
  using DL = DESC_CTRL1_15_fields_::DL;
};


// Descriptor Address Up 15 Register
struct DESC_ADDR_UP_15_fields_ {
  // Address field (High)
  using ADDR_UP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_UP_15_fields_

struct DESC_ADDR_UP_15 : ftl::mmio::Register<
    0x40CB81E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_UP_15_fields_::ADDR_UP> {
  using ADDR_UP = DESC_ADDR_UP_15_fields_::ADDR_UP;
};


// Descriptor Address Down 15 Register
struct DESC_ADDR_DOWN_15_fields_ {
  // Address field (Low)
  using ADDR_DOWN = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DESC_ADDR_DOWN_15_fields_

struct DESC_ADDR_DOWN_15 : ftl::mmio::Register<
    0x40CB81ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    DESC_ADDR_DOWN_15_fields_::ADDR_DOWN> {
  using ADDR_DOWN = DESC_ADDR_DOWN_15_fields_::ADDR_DOWN;
};


// Control Register
struct CTRL_fields_ {

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
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0x40CB8200u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<27, 0>,
    CTRL_fields_::DIS_HW_REQ,
    ftl::mmio::Reserved<3, 28>,
    CTRL_fields_::SW_RESET> {
  using eDIS_HW_REQ = CTRL_fields_::eDIS_HW_REQ;
  using DIS_HW_REQ = CTRL_fields_::DIS_HW_REQ;
  using SW_RESET = CTRL_fields_::SW_RESET;
};


// Interrupt Status Register
struct INT_STATUS_fields_ {

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
};  // struct INT_STATUS_fields_

struct INT_STATUS : ftl::mmio::Register<
    0x40CB8204u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    INT_STATUS_fields_::ERR_INDEX,
    INT_STATUS_fields_::AHB_RESP,
    ftl::mmio::Reserved<15, 12>,
    INT_STATUS_fields_::GROUP_CONFLICT,
    INT_STATUS_fields_::TIMEOUT,
    INT_STATUS_fields_::SW_REQ_DONE,
    INT_STATUS_fields_::AHB_ERR,
    INT_STATUS_fields_::ADDR_ERR> {
  using eGROUP_CONFLICT = INT_STATUS_fields_::eGROUP_CONFLICT;
  using eTIMEOUT = INT_STATUS_fields_::eTIMEOUT;
  using eSW_REQ_DONE = INT_STATUS_fields_::eSW_REQ_DONE;
  using eAHB_ERR = INT_STATUS_fields_::eAHB_ERR;
  using eADDR_ERR = INT_STATUS_fields_::eADDR_ERR;
  using ERR_INDEX = INT_STATUS_fields_::ERR_INDEX;
  using AHB_RESP = INT_STATUS_fields_::AHB_RESP;
  using GROUP_CONFLICT = INT_STATUS_fields_::GROUP_CONFLICT;
  using TIMEOUT = INT_STATUS_fields_::TIMEOUT;
  using SW_REQ_DONE = INT_STATUS_fields_::SW_REQ_DONE;
  using AHB_ERR = INT_STATUS_fields_::AHB_ERR;
  using ADDR_ERR = INT_STATUS_fields_::ADDR_ERR;
};


// HP Timeout Register
struct HP_TIMEOUT_fields_ {
  // Time out value
  using TIMEOUT_VALUE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct HP_TIMEOUT_fields_

struct HP_TIMEOUT : ftl::mmio::Register<
    0x40CB820Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    HP_TIMEOUT_fields_::TIMEOUT_VALUE> {
  using TIMEOUT_VALUE = HP_TIMEOUT_fields_::TIMEOUT_VALUE;
};


// Hardware Request Pending Register
struct HW_GROUP_PENDING_fields_ {
  // This field indicates which groups are pending for save from hardware request
  using HW_SAVE_PENDING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // This field indicates which groups are pending for restore from hardware request
  using HW_RESTORE_PENDING = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HW_GROUP_PENDING_fields_

struct HW_GROUP_PENDING : ftl::mmio::Register<
    0x40CB821Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    HW_GROUP_PENDING_fields_::HW_SAVE_PENDING,
    HW_GROUP_PENDING_fields_::HW_RESTORE_PENDING> {
  using HW_SAVE_PENDING = HW_GROUP_PENDING_fields_::HW_SAVE_PENDING;
  using HW_RESTORE_PENDING = HW_GROUP_PENDING_fields_::HW_RESTORE_PENDING;
};


// Software Request Pending Register
struct SW_GROUP_PENDING_fields_ {
  // This field indicates which groups are pending for save from software request
  using SW_SAVE_PENDING = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // This field indicates which groups are pending for restore from software request
  using SW_RESTORE_PENDING = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct SW_GROUP_PENDING_fields_

struct SW_GROUP_PENDING : ftl::mmio::Register<
    0x40CB8220u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    SW_GROUP_PENDING_fields_::SW_SAVE_PENDING,
    SW_GROUP_PENDING_fields_::SW_RESTORE_PENDING> {
  using SW_SAVE_PENDING = SW_GROUP_PENDING_fields_::SW_SAVE_PENDING;
  using SW_RESTORE_PENDING = SW_GROUP_PENDING_fields_::SW_RESTORE_PENDING;
};

}  // namespace regs::ssarc_lp