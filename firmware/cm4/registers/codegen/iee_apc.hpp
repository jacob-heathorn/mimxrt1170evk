#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IEE_APC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::iee_apc {


// End address of IEE region (n)
struct REGION0_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION0_TOP_ADDR_fields_

struct REGION0_TOP_ADDR : ftl::mmio::Register<
    0x40068000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION0_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION0_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION0_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION0_BOT_ADDR_fields_

struct REGION0_BOT_ADDR : ftl::mmio::Register<
    0x40068004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION0_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION0_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION0_RDC_D0_fields_ {

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
};  // struct REGION0_RDC_D0_fields_

struct REGION0_RDC_D0 : ftl::mmio::Register<
    0x40068008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION0_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION0_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION0_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION0_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION0_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION0_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION0_RDC_D1_fields_ {

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
};  // struct REGION0_RDC_D1_fields_

struct REGION0_RDC_D1 : ftl::mmio::Register<
    0x4006800Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION0_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION0_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION0_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION0_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION0_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION0_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION1_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION1_TOP_ADDR_fields_

struct REGION1_TOP_ADDR : ftl::mmio::Register<
    0x40068010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION1_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION1_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION1_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION1_BOT_ADDR_fields_

struct REGION1_BOT_ADDR : ftl::mmio::Register<
    0x40068014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION1_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION1_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION1_RDC_D0_fields_ {

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
};  // struct REGION1_RDC_D0_fields_

struct REGION1_RDC_D0 : ftl::mmio::Register<
    0x40068018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION1_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION1_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION1_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION1_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION1_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION1_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION1_RDC_D1_fields_ {

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
};  // struct REGION1_RDC_D1_fields_

struct REGION1_RDC_D1 : ftl::mmio::Register<
    0x4006801Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION1_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION1_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION1_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION1_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION1_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION1_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION2_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION2_TOP_ADDR_fields_

struct REGION2_TOP_ADDR : ftl::mmio::Register<
    0x40068020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION2_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION2_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION2_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION2_BOT_ADDR_fields_

struct REGION2_BOT_ADDR : ftl::mmio::Register<
    0x40068024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION2_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION2_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION2_RDC_D0_fields_ {

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
};  // struct REGION2_RDC_D0_fields_

struct REGION2_RDC_D0 : ftl::mmio::Register<
    0x40068028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION2_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION2_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION2_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION2_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION2_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION2_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION2_RDC_D1_fields_ {

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
};  // struct REGION2_RDC_D1_fields_

struct REGION2_RDC_D1 : ftl::mmio::Register<
    0x4006802Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION2_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION2_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION2_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION2_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION2_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION2_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION3_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION3_TOP_ADDR_fields_

struct REGION3_TOP_ADDR : ftl::mmio::Register<
    0x40068030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION3_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION3_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION3_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION3_BOT_ADDR_fields_

struct REGION3_BOT_ADDR : ftl::mmio::Register<
    0x40068034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION3_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION3_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION3_RDC_D0_fields_ {

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
};  // struct REGION3_RDC_D0_fields_

struct REGION3_RDC_D0 : ftl::mmio::Register<
    0x40068038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION3_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION3_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION3_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION3_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION3_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION3_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION3_RDC_D1_fields_ {

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
};  // struct REGION3_RDC_D1_fields_

struct REGION3_RDC_D1 : ftl::mmio::Register<
    0x4006803Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION3_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION3_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION3_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION3_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION3_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION3_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION4_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION4_TOP_ADDR_fields_

struct REGION4_TOP_ADDR : ftl::mmio::Register<
    0x40068040u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION4_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION4_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION4_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION4_BOT_ADDR_fields_

struct REGION4_BOT_ADDR : ftl::mmio::Register<
    0x40068044u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION4_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION4_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION4_RDC_D0_fields_ {

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
};  // struct REGION4_RDC_D0_fields_

struct REGION4_RDC_D0 : ftl::mmio::Register<
    0x40068048u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION4_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION4_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION4_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION4_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION4_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION4_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION4_RDC_D1_fields_ {

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
};  // struct REGION4_RDC_D1_fields_

struct REGION4_RDC_D1 : ftl::mmio::Register<
    0x4006804Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION4_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION4_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION4_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION4_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION4_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION4_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION5_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION5_TOP_ADDR_fields_

struct REGION5_TOP_ADDR : ftl::mmio::Register<
    0x40068050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION5_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION5_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION5_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION5_BOT_ADDR_fields_

struct REGION5_BOT_ADDR : ftl::mmio::Register<
    0x40068054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION5_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION5_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION5_RDC_D0_fields_ {

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
};  // struct REGION5_RDC_D0_fields_

struct REGION5_RDC_D0 : ftl::mmio::Register<
    0x40068058u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION5_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION5_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION5_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION5_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION5_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION5_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION5_RDC_D1_fields_ {

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
};  // struct REGION5_RDC_D1_fields_

struct REGION5_RDC_D1 : ftl::mmio::Register<
    0x4006805Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION5_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION5_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION5_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION5_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION5_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION5_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION6_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION6_TOP_ADDR_fields_

struct REGION6_TOP_ADDR : ftl::mmio::Register<
    0x40068060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION6_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION6_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION6_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION6_BOT_ADDR_fields_

struct REGION6_BOT_ADDR : ftl::mmio::Register<
    0x40068064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION6_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION6_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION6_RDC_D0_fields_ {

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
};  // struct REGION6_RDC_D0_fields_

struct REGION6_RDC_D0 : ftl::mmio::Register<
    0x40068068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION6_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION6_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION6_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION6_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION6_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION6_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION6_RDC_D1_fields_ {

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
};  // struct REGION6_RDC_D1_fields_

struct REGION6_RDC_D1 : ftl::mmio::Register<
    0x4006806Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION6_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION6_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION6_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION6_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION6_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION6_RDC_D1_fields_::RDC_D1_LOCK;
};


// End address of IEE region (n)
struct REGION7_TOP_ADDR_fields_ {
  // End address of IEE region
  using TOP_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION7_TOP_ADDR_fields_

struct REGION7_TOP_ADDR : ftl::mmio::Register<
    0x40068070u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION7_TOP_ADDR_fields_::TOP_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using TOP_ADDR = REGION7_TOP_ADDR_fields_::TOP_ADDR;
};


// Start address of IEE region (n)
struct REGION7_BOT_ADDR_fields_ {
  // Start address of IEE region
  using BOT_ADDR = ftl::mmio::Field<29, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REGION7_BOT_ADDR_fields_

struct REGION7_BOT_ADDR : ftl::mmio::Register<
    0x40068074u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION7_BOT_ADDR_fields_::BOT_ADDR,
    ftl::mmio::Reserved<3, 29>> {
  using BOT_ADDR = REGION7_BOT_ADDR_fields_::BOT_ADDR;
};


// Region control of core domain 0 for region (n)
struct REGION7_RDC_D0_fields_ {

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
};  // struct REGION7_RDC_D0_fields_

struct REGION7_RDC_D0 : ftl::mmio::Register<
    0x40068078u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION7_RDC_D0_fields_::RDC_D0_WRITE_DIS,
    REGION7_RDC_D0_fields_::RDC_D0_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D0_WRITE_DIS = REGION7_RDC_D0_fields_::eRDC_D0_WRITE_DIS;
  using eRDC_D0_LOCK = REGION7_RDC_D0_fields_::eRDC_D0_LOCK;
  using RDC_D0_WRITE_DIS = REGION7_RDC_D0_fields_::RDC_D0_WRITE_DIS;
  using RDC_D0_LOCK = REGION7_RDC_D0_fields_::RDC_D0_LOCK;
};


// Region control of core domain 1 for region (n)
struct REGION7_RDC_D1_fields_ {

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
};  // struct REGION7_RDC_D1_fields_

struct REGION7_RDC_D1 : ftl::mmio::Register<
    0x4006807Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    REGION7_RDC_D1_fields_::RDC_D1_WRITE_DIS,
    REGION7_RDC_D1_fields_::RDC_D1_LOCK,
    ftl::mmio::Reserved<30, 2>> {
  using eRDC_D1_WRITE_DIS = REGION7_RDC_D1_fields_::eRDC_D1_WRITE_DIS;
  using eRDC_D1_LOCK = REGION7_RDC_D1_fields_::eRDC_D1_LOCK;
  using RDC_D1_WRITE_DIS = REGION7_RDC_D1_fields_::RDC_D1_WRITE_DIS;
  using RDC_D1_LOCK = REGION7_RDC_D1_fields_::RDC_D1_LOCK;
};

}  // namespace regs::iee_apc