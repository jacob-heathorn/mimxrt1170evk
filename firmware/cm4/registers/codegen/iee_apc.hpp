#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IEE_APC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IeeApc {
  // End address of IEE region (n)
  struct Region0TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region0TopAddrFields

  struct REGION0_TOP_ADDR : ftl::mmio::Register<
      0x40068000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region0TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region0TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region0BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region0BotAddrFields

  struct REGION0_BOT_ADDR : ftl::mmio::Register<
      0x40068004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region0BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region0BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region0RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region0RdcD0Fields

  struct REGION0_RDC_D0 : ftl::mmio::Register<
      0x40068008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region0RdcD0Fields::RDC_D0_WRITE_DIS,
      Region0RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region0RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region0RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region0RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region0RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region0RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region0RdcD1Fields

  struct REGION0_RDC_D1 : ftl::mmio::Register<
      0x4006800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region0RdcD1Fields::RDC_D1_WRITE_DIS,
      Region0RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region0RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region0RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region0RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region0RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region1TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region1TopAddrFields

  struct REGION1_TOP_ADDR : ftl::mmio::Register<
      0x40068010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region1TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region1TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region1BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region1BotAddrFields

  struct REGION1_BOT_ADDR : ftl::mmio::Register<
      0x40068014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region1BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region1BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region1RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region1RdcD0Fields

  struct REGION1_RDC_D0 : ftl::mmio::Register<
      0x40068018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region1RdcD0Fields::RDC_D0_WRITE_DIS,
      Region1RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region1RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region1RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region1RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region1RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region1RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region1RdcD1Fields

  struct REGION1_RDC_D1 : ftl::mmio::Register<
      0x4006801Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region1RdcD1Fields::RDC_D1_WRITE_DIS,
      Region1RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region1RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region1RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region1RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region1RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region2TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region2TopAddrFields

  struct REGION2_TOP_ADDR : ftl::mmio::Register<
      0x40068020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region2TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region2TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region2BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region2BotAddrFields

  struct REGION2_BOT_ADDR : ftl::mmio::Register<
      0x40068024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region2BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region2BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region2RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region2RdcD0Fields

  struct REGION2_RDC_D0 : ftl::mmio::Register<
      0x40068028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region2RdcD0Fields::RDC_D0_WRITE_DIS,
      Region2RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region2RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region2RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region2RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region2RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region2RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region2RdcD1Fields

  struct REGION2_RDC_D1 : ftl::mmio::Register<
      0x4006802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region2RdcD1Fields::RDC_D1_WRITE_DIS,
      Region2RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region2RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region2RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region2RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region2RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region3TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region3TopAddrFields

  struct REGION3_TOP_ADDR : ftl::mmio::Register<
      0x40068030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region3TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region3TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region3BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region3BotAddrFields

  struct REGION3_BOT_ADDR : ftl::mmio::Register<
      0x40068034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region3BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region3BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region3RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region3RdcD0Fields

  struct REGION3_RDC_D0 : ftl::mmio::Register<
      0x40068038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region3RdcD0Fields::RDC_D0_WRITE_DIS,
      Region3RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region3RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region3RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region3RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region3RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region3RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region3RdcD1Fields

  struct REGION3_RDC_D1 : ftl::mmio::Register<
      0x4006803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region3RdcD1Fields::RDC_D1_WRITE_DIS,
      Region3RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region3RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region3RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region3RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region3RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region4TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region4TopAddrFields

  struct REGION4_TOP_ADDR : ftl::mmio::Register<
      0x40068040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region4TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region4TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region4BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region4BotAddrFields

  struct REGION4_BOT_ADDR : ftl::mmio::Register<
      0x40068044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region4BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region4BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region4RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region4RdcD0Fields

  struct REGION4_RDC_D0 : ftl::mmio::Register<
      0x40068048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region4RdcD0Fields::RDC_D0_WRITE_DIS,
      Region4RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region4RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region4RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region4RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region4RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region4RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region4RdcD1Fields

  struct REGION4_RDC_D1 : ftl::mmio::Register<
      0x4006804Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region4RdcD1Fields::RDC_D1_WRITE_DIS,
      Region4RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region4RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region4RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region4RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region4RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region5TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region5TopAddrFields

  struct REGION5_TOP_ADDR : ftl::mmio::Register<
      0x40068050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region5TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region5TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region5BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region5BotAddrFields

  struct REGION5_BOT_ADDR : ftl::mmio::Register<
      0x40068054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region5BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region5BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region5RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region5RdcD0Fields

  struct REGION5_RDC_D0 : ftl::mmio::Register<
      0x40068058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region5RdcD0Fields::RDC_D0_WRITE_DIS,
      Region5RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region5RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region5RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region5RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region5RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region5RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region5RdcD1Fields

  struct REGION5_RDC_D1 : ftl::mmio::Register<
      0x4006805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region5RdcD1Fields::RDC_D1_WRITE_DIS,
      Region5RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region5RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region5RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region5RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region5RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region6TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region6TopAddrFields

  struct REGION6_TOP_ADDR : ftl::mmio::Register<
      0x40068060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region6TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region6TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region6BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region6BotAddrFields

  struct REGION6_BOT_ADDR : ftl::mmio::Register<
      0x40068064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region6BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region6BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region6RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region6RdcD0Fields

  struct REGION6_RDC_D0 : ftl::mmio::Register<
      0x40068068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region6RdcD0Fields::RDC_D0_WRITE_DIS,
      Region6RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region6RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region6RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region6RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region6RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region6RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region6RdcD1Fields

  struct REGION6_RDC_D1 : ftl::mmio::Register<
      0x4006806Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region6RdcD1Fields::RDC_D1_WRITE_DIS,
      Region6RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region6RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region6RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region6RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region6RdcD1Fields::RDC_D1_LOCK;
  };

  // End address of IEE region (n)
  struct Region7TopAddrFields {
    // End address of IEE region
    using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region7TopAddrFields

  struct REGION7_TOP_ADDR : ftl::mmio::Register<
      0x40068070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region7TopAddrFields::TOP_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using TOP_ADDR = Region7TopAddrFields::TOP_ADDR;
  };

  // Start address of IEE region (n)
  struct Region7BotAddrFields {
    // Start address of IEE region
    using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region7BotAddrFields

  struct REGION7_BOT_ADDR : ftl::mmio::Register<
      0x40068074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region7BotAddrFields::BOT_ADDR,
      ftl::mmio::Reserved<3, 29>> {
    using BOT_ADDR = Region7BotAddrFields::BOT_ADDR;
  };

  // Region control of core domain 0 for region (n)
  struct Region7RdcD0Fields {
    enum class eRDC_D0_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D0_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D0_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D0_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D0_LOCK = ftl::mmio::Field<1, 1, eRDC_D0_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region7RdcD0Fields

  struct REGION7_RDC_D0 : ftl::mmio::Register<
      0x40068078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region7RdcD0Fields::RDC_D0_WRITE_DIS,
      Region7RdcD0Fields::RDC_D0_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D0_WRITE_DIS = Region7RdcD0Fields::eRDC_D0_WRITE_DIS;
    using eRDC_D0_LOCK = Region7RdcD0Fields::eRDC_D0_LOCK;
    using RDC_D0_WRITE_DIS = Region7RdcD0Fields::RDC_D0_WRITE_DIS;
    using RDC_D0_LOCK = Region7RdcD0Fields::RDC_D0_LOCK;
  };

  // Region control of core domain 1 for region (n)
  struct Region7RdcD1Fields {
    enum class eRDC_D1_WRITE_DIS : std::uint32_t {
      // Write to TOP_ADDR and BOT_ADDR of this region enabled
      eENABLE = 0,
      // Write to TOP_ADDR and BOT_ADDR of this region disabled
      eDISABLE = 1,
    };

    enum class eRDC_D1_LOCK : std::uint32_t {
      // Bit 0 is unlocked
      eUNLOCK = 0,
      // Bit 0 is locked
      eLOCK = 1,
    };

    // Write disable of core domain 1
    using RDC_D1_WRITE_DIS = ftl::mmio::Field<1, 0, eRDC_D1_WRITE_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock bit for bit 0
    using RDC_D1_LOCK = ftl::mmio::Field<1, 1, eRDC_D1_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Region7RdcD1Fields

  struct REGION7_RDC_D1 : ftl::mmio::Register<
      0x4006807Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Region7RdcD1Fields::RDC_D1_WRITE_DIS,
      Region7RdcD1Fields::RDC_D1_LOCK,
      ftl::mmio::Reserved<30, 2>> {
    using eRDC_D1_WRITE_DIS = Region7RdcD1Fields::eRDC_D1_WRITE_DIS;
    using eRDC_D1_LOCK = Region7RdcD1Fields::eRDC_D1_LOCK;
    using RDC_D1_WRITE_DIS = Region7RdcD1Fields::RDC_D1_WRITE_DIS;
    using RDC_D1_LOCK = Region7RdcD1Fields::RDC_D1_LOCK;
  };

};

}  // namespace regs