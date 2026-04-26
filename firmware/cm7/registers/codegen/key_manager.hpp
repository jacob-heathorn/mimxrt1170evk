#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// KEYMGR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct KeyManager {
  // CSR Master Key Control Register
  struct MASTER_KEY_CTRL_fields_ {
    enum class eSELECT : std::uint32_t {
      // select key from UDF
      eSELECT_FROM_UDF = 0,
      // If LOCK = 1, select key from PUF, otherwise select key from fuse (bypass the fuse OTPMK to SNVS)
      eSELECT_FROM_PUF = 1,
    };

    enum class eLOCK : std::uint32_t {
      // not locked
      eUNLOCK = 0,
      // locked
      eLOCK = 1,
    };

    // Key select for SNVS OTPMK. Default value comes from FUSE_MASTER_KEY_SEL.
    using SELECT = ftl::mmio::Field<1, 0, eSELECT, ftl::mmio::RW, ftl::mmio::Normal>;
    // lock this register, prevent from writing. Default value comes from FUSE_MASTER_KEY_SEL_LOCK.
    using LOCK = ftl::mmio::Field<1, 16, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MASTER_KEY_CTRL_fields_

  struct MASTER_KEY_CTRL : ftl::mmio::Register<
      0x40C80000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MASTER_KEY_CTRL_fields_::SELECT,
      ftl::mmio::Reserved<15, 1>,
      MASTER_KEY_CTRL_fields_::LOCK,
      ftl::mmio::Reserved<15, 17>> {
    using eSELECT = MASTER_KEY_CTRL_fields_::eSELECT;
    using eLOCK = MASTER_KEY_CTRL_fields_::eLOCK;
    using SELECT = MASTER_KEY_CTRL_fields_::SELECT;
    using LOCK = MASTER_KEY_CTRL_fields_::LOCK;
  };

  // CSR OTFAD-1 Key Control
  struct OTFAD1_KEY_CTRL_fields_ {
    enum class eSELECT : std::uint32_t {
      // Select key from OCOTP USER_KEY5
      eSELECT_FROM_USER_KEY5 = 0,
      // If PUF_KEY_CTRL[LOCK] is 1, select key from PUF, otherwise select key from OCOTP USER_KEY5
      eSELECT_FROM_PUF = 1,
    };

    enum class eLOCK : std::uint32_t {
      // not locked
      eUNLOCK = 0,
      // locked
      eLOCK = 1,
    };

    // key select for OTFAD-1. Default value comes from FUSE_OTFAD1_KEY_SEL.
    using SELECT = ftl::mmio::Field<1, 0, eSELECT, ftl::mmio::RW, ftl::mmio::Normal>;
    // lock this register, prevent from writing. Default value comes from FUSE_OTFAD1_KEY_SEL_LOCK.
    using LOCK = ftl::mmio::Field<1, 16, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OTFAD1_KEY_CTRL_fields_

  struct OTFAD1_KEY_CTRL : ftl::mmio::Register<
      0x40C80010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      OTFAD1_KEY_CTRL_fields_::SELECT,
      ftl::mmio::Reserved<15, 1>,
      OTFAD1_KEY_CTRL_fields_::LOCK,
      ftl::mmio::Reserved<15, 17>> {
    using eSELECT = OTFAD1_KEY_CTRL_fields_::eSELECT;
    using eLOCK = OTFAD1_KEY_CTRL_fields_::eLOCK;
    using SELECT = OTFAD1_KEY_CTRL_fields_::SELECT;
    using LOCK = OTFAD1_KEY_CTRL_fields_::LOCK;
  };

  // CSR OTFAD-2 Key Control
  struct OTFAD2_KEY_CTRL_fields_ {
    enum class eSELECT : std::uint32_t {
      // select key from OCOTP USER_KEY5
      eSELECT_FROM_USER_KEY5 = 0,
      // If PUF_KEY_CTRL[LOCK] is 1, select key from PUF, otherwise select key from OCOTP USER_KEY5
      eSELECT_FROM_PUF = 1,
    };

    enum class eLOCK : std::uint32_t {
      // not locked
      eUNLOCK = 0,
      // locked
      eLOCK = 1,
    };

    // key select for OTFAD-2. Default value comes from FUSE_OTFAD1_KEY_SEL.
    using SELECT = ftl::mmio::Field<1, 0, eSELECT, ftl::mmio::RW, ftl::mmio::Normal>;
    // lock this register, prevent from writing. Default value comes from FUSE_OTFAD2_KEY_SEL_LOCK.
    using LOCK = ftl::mmio::Field<1, 16, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OTFAD2_KEY_CTRL_fields_

  struct OTFAD2_KEY_CTRL : ftl::mmio::Register<
      0x40C80018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      OTFAD2_KEY_CTRL_fields_::SELECT,
      ftl::mmio::Reserved<15, 1>,
      OTFAD2_KEY_CTRL_fields_::LOCK,
      ftl::mmio::Reserved<15, 17>> {
    using eSELECT = OTFAD2_KEY_CTRL_fields_::eSELECT;
    using eLOCK = OTFAD2_KEY_CTRL_fields_::eLOCK;
    using SELECT = OTFAD2_KEY_CTRL_fields_::SELECT;
    using LOCK = OTFAD2_KEY_CTRL_fields_::LOCK;
  };

  // CSR IEE Key Control
  struct IEE_KEY_CTRL_fields_ {
    enum class eRELOAD : std::uint32_t {
      // Do nothing
      eIDLE = 0,
      // Restart IEE key load flow
      eRESTART = 1,
    };

    // Restart load key signal for IEE
    using RELOAD = ftl::mmio::Field<1, 0, eRELOAD, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct IEE_KEY_CTRL_fields_

  struct IEE_KEY_CTRL : ftl::mmio::Register<
      0x40C80020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IEE_KEY_CTRL_fields_::RELOAD,
      ftl::mmio::Reserved<31, 1>> {
    using eRELOAD = IEE_KEY_CTRL_fields_::eRELOAD;
    using RELOAD = IEE_KEY_CTRL_fields_::RELOAD;
  };

  // CSR PUF Key Control
  struct PUF_KEY_CTRL_fields_ {
    enum class eLOCK : std::uint32_t {
      // Do not lock the key select
      eUNLOCK = 0,
      // Lock the key select to select key from PUF, otherwise bypass key from OCOPT and do not lock. Once it has been set to 1, it cannot be reset manually. It will be set to 0 when the IEE key reload operation is done.
      eLOCK = 1,
    };

    // Lock signal for key select
    using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PUF_KEY_CTRL_fields_

  struct PUF_KEY_CTRL : ftl::mmio::Register<
      0x40C80030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PUF_KEY_CTRL_fields_::LOCK,
      ftl::mmio::Reserved<31, 1>> {
    using eLOCK = PUF_KEY_CTRL_fields_::eLOCK;
    using LOCK = PUF_KEY_CTRL_fields_::LOCK;
  };

  // Slot 0 Control
  struct SLOT0_CTRL_fields_ {
    enum class eLOCK_LIST : std::uint32_t {
      // Whitelist is not locked
      eUNLOCK = 0,
      // Whitelist is locked
      eLOCK = 1,
    };

    enum class eTZ_NS : std::uint32_t {
      // Do not allow non-secure write access
      ePREVENT = 0,
      // Allow non-secure write access
      eALLOW = 1,
    };

    enum class eTZ_USER : std::uint32_t {
      // Do not allow user write access
      ePREVENT = 0,
      // Allow user write access
      eALLOW = 1,
    };

    enum class eLOCK_CONTROL : std::uint32_t {
      // Do not lock the control register of this slot
      eUNLOCK = 0,
      // Lock the control register of this slot
      eLOCK = 1,
    };

    // Whitelist
    using WHITE_LIST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock whitelist
    using LOCK_LIST = ftl::mmio::Field<1, 15, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Allow non-secure write access to this register and the slot it controls
    using TZ_NS = ftl::mmio::Field<1, 16, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user write access to this register and the slot it controls
    using TZ_USER = ftl::mmio::Field<1, 17, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock control of this slot
    using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SLOT0_CTRL_fields_

  struct SLOT0_CTRL : ftl::mmio::Register<
      0x40C80400u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SLOT0_CTRL_fields_::WHITE_LIST,
      ftl::mmio::Reserved<11, 4>,
      SLOT0_CTRL_fields_::LOCK_LIST,
      SLOT0_CTRL_fields_::TZ_NS,
      SLOT0_CTRL_fields_::TZ_USER,
      ftl::mmio::Reserved<13, 18>,
      SLOT0_CTRL_fields_::LOCK_CONTROL> {
    using eLOCK_LIST = SLOT0_CTRL_fields_::eLOCK_LIST;
    using eTZ_NS = SLOT0_CTRL_fields_::eTZ_NS;
    using eTZ_USER = SLOT0_CTRL_fields_::eTZ_USER;
    using eLOCK_CONTROL = SLOT0_CTRL_fields_::eLOCK_CONTROL;
    using WHITE_LIST = SLOT0_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = SLOT0_CTRL_fields_::LOCK_LIST;
    using TZ_NS = SLOT0_CTRL_fields_::TZ_NS;
    using TZ_USER = SLOT0_CTRL_fields_::TZ_USER;
    using LOCK_CONTROL = SLOT0_CTRL_fields_::LOCK_CONTROL;
  };

  // Slot1 Control
  struct SLOT1_CTRL_fields_ {
    enum class eLOCK_LIST : std::uint32_t {
      // Whitelist is not locked
      eUNLOCK = 0,
      // Whitelist is locked
      eLOCK = 1,
    };

    enum class eTZ_NS : std::uint32_t {
      // Do not allow non-secure write access
      ePREVENT = 0,
      // Allow non-secure write access
      eALLOW = 1,
    };

    enum class eTZ_USER : std::uint32_t {
      // Do not allow user write access
      ePREVENT = 0,
      // Allow user write access
      eALLOW = 1,
    };

    enum class eLOCK_CONTROL : std::uint32_t {
      // Do not lock the control register of this slot
      eUNLOCK = 0,
      // Lock the control register of this slot
      eLOCK = 1,
    };

    // Whitelist
    using WHITE_LIST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock whitelist
    using LOCK_LIST = ftl::mmio::Field<1, 15, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Allow non-secure write access to this register and the slot it controls
    using TZ_NS = ftl::mmio::Field<1, 16, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user write access to this register and the slot it controls
    using TZ_USER = ftl::mmio::Field<1, 17, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock control of this slot
    using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SLOT1_CTRL_fields_

  struct SLOT1_CTRL : ftl::mmio::Register<
      0x40C80404u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SLOT1_CTRL_fields_::WHITE_LIST,
      ftl::mmio::Reserved<11, 4>,
      SLOT1_CTRL_fields_::LOCK_LIST,
      SLOT1_CTRL_fields_::TZ_NS,
      SLOT1_CTRL_fields_::TZ_USER,
      ftl::mmio::Reserved<13, 18>,
      SLOT1_CTRL_fields_::LOCK_CONTROL> {
    using eLOCK_LIST = SLOT1_CTRL_fields_::eLOCK_LIST;
    using eTZ_NS = SLOT1_CTRL_fields_::eTZ_NS;
    using eTZ_USER = SLOT1_CTRL_fields_::eTZ_USER;
    using eLOCK_CONTROL = SLOT1_CTRL_fields_::eLOCK_CONTROL;
    using WHITE_LIST = SLOT1_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = SLOT1_CTRL_fields_::LOCK_LIST;
    using TZ_NS = SLOT1_CTRL_fields_::TZ_NS;
    using TZ_USER = SLOT1_CTRL_fields_::TZ_USER;
    using LOCK_CONTROL = SLOT1_CTRL_fields_::LOCK_CONTROL;
  };

  // Slot2 Control
  struct SLOT2_CTRL_fields_ {
    enum class eLOCK_LIST : std::uint32_t {
      // Whitelist is not locked
      eUNLOCK = 0,
      // Whitelist is locked
      eLOCK = 1,
    };

    enum class eTZ_NS : std::uint32_t {
      // Do not allow non-secure write access
      ePREVENT = 0,
      // Allow non-secure write access
      eALLOW = 1,
    };

    enum class eTZ_USER : std::uint32_t {
      // Do not allow user write access
      ePREVENT = 0,
      // Allow user write access
      eALLOW = 1,
    };

    enum class eLOCK_CONTROL : std::uint32_t {
      // Do not lock the control register of this slot
      eUNLOCK = 0,
      // Lock the control register of this slot
      eLOCK = 1,
    };

    // Whitelist
    using WHITE_LIST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock whitelist
    using LOCK_LIST = ftl::mmio::Field<1, 15, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Allow non-secure write access to this register and the slot it controls
    using TZ_NS = ftl::mmio::Field<1, 16, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user write access to this register and the slot it controls
    using TZ_USER = ftl::mmio::Field<1, 17, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock control of this slot
    using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SLOT2_CTRL_fields_

  struct SLOT2_CTRL : ftl::mmio::Register<
      0x40C80408u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SLOT2_CTRL_fields_::WHITE_LIST,
      ftl::mmio::Reserved<11, 4>,
      SLOT2_CTRL_fields_::LOCK_LIST,
      SLOT2_CTRL_fields_::TZ_NS,
      SLOT2_CTRL_fields_::TZ_USER,
      ftl::mmio::Reserved<13, 18>,
      SLOT2_CTRL_fields_::LOCK_CONTROL> {
    using eLOCK_LIST = SLOT2_CTRL_fields_::eLOCK_LIST;
    using eTZ_NS = SLOT2_CTRL_fields_::eTZ_NS;
    using eTZ_USER = SLOT2_CTRL_fields_::eTZ_USER;
    using eLOCK_CONTROL = SLOT2_CTRL_fields_::eLOCK_CONTROL;
    using WHITE_LIST = SLOT2_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = SLOT2_CTRL_fields_::LOCK_LIST;
    using TZ_NS = SLOT2_CTRL_fields_::TZ_NS;
    using TZ_USER = SLOT2_CTRL_fields_::TZ_USER;
    using LOCK_CONTROL = SLOT2_CTRL_fields_::LOCK_CONTROL;
  };

  // Slot3 Control
  struct SLOT3_CTRL_fields_ {
    enum class eLOCK_LIST : std::uint32_t {
      // Whitelist is not locked
      eUNLOCK = 0,
      // Whitelist is locked
      eLOCK = 1,
    };

    enum class eTZ_NS : std::uint32_t {
      // Do not allow non-secure write access
      ePREVENT = 0,
      // Allow non-secure write access
      eALLOW = 1,
    };

    enum class eTZ_USER : std::uint32_t {
      // Do not allow user write access
      ePREVENT = 0,
      // Allow user write access
      eALLOW = 1,
    };

    enum class eLOCK_CONTROL : std::uint32_t {
      // Do not lock the control register of this slot
      eUNLOCK = 0,
      // Lock the control register of this slot
      eLOCK = 1,
    };

    // Whitelist
    using WHITE_LIST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock whitelist
    using LOCK_LIST = ftl::mmio::Field<1, 15, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Allow non-secure write access to this register and the slot it controls
    using TZ_NS = ftl::mmio::Field<1, 16, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user write access to this register and the slot it controls
    using TZ_USER = ftl::mmio::Field<1, 17, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock control of this slot
    using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SLOT3_CTRL_fields_

  struct SLOT3_CTRL : ftl::mmio::Register<
      0x40C8040Cu,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SLOT3_CTRL_fields_::WHITE_LIST,
      ftl::mmio::Reserved<11, 4>,
      SLOT3_CTRL_fields_::LOCK_LIST,
      SLOT3_CTRL_fields_::TZ_NS,
      SLOT3_CTRL_fields_::TZ_USER,
      ftl::mmio::Reserved<13, 18>,
      SLOT3_CTRL_fields_::LOCK_CONTROL> {
    using eLOCK_LIST = SLOT3_CTRL_fields_::eLOCK_LIST;
    using eTZ_NS = SLOT3_CTRL_fields_::eTZ_NS;
    using eTZ_USER = SLOT3_CTRL_fields_::eTZ_USER;
    using eLOCK_CONTROL = SLOT3_CTRL_fields_::eLOCK_CONTROL;
    using WHITE_LIST = SLOT3_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = SLOT3_CTRL_fields_::LOCK_LIST;
    using TZ_NS = SLOT3_CTRL_fields_::TZ_NS;
    using TZ_USER = SLOT3_CTRL_fields_::TZ_USER;
    using LOCK_CONTROL = SLOT3_CTRL_fields_::LOCK_CONTROL;
  };

  // Slot 4 Control
  struct SLOT4_CTRL_fields_ {
    enum class eLOCK_LIST : std::uint32_t {
      // Whitelist is not locked
      eUNLOCK = 0,
      // Whitelist is locked
      eLOCK = 1,
    };

    enum class eTZ_NS : std::uint32_t {
      // Do not allow non-secure write access
      ePREVENT = 0,
      // Allow non-secure write access
      eALLOW = 1,
    };

    enum class eTZ_USER : std::uint32_t {
      // Do not allow user write access
      ePREVENT = 0,
      // Allow user write access
      eALLOW = 1,
    };

    enum class eLOCK_CONTROL : std::uint32_t {
      // Do not lock the control register of this slot
      eUNLOCK = 0,
      // Lock the control register of this slot
      eLOCK = 1,
    };

    // Whitelist
    using WHITE_LIST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock whitelist
    using LOCK_LIST = ftl::mmio::Field<1, 15, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Allow non-secure write access to this register and the slot it controls
    using TZ_NS = ftl::mmio::Field<1, 16, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Allow user write access to this register and the slot it controls
    using TZ_USER = ftl::mmio::Field<1, 17, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock control of this slot
    using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SLOT4_CTRL_fields_

  struct SLOT4_CTRL : ftl::mmio::Register<
      0x40C80410u,
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SLOT4_CTRL_fields_::WHITE_LIST,
      ftl::mmio::Reserved<11, 4>,
      SLOT4_CTRL_fields_::LOCK_LIST,
      SLOT4_CTRL_fields_::TZ_NS,
      SLOT4_CTRL_fields_::TZ_USER,
      ftl::mmio::Reserved<13, 18>,
      SLOT4_CTRL_fields_::LOCK_CONTROL> {
    using eLOCK_LIST = SLOT4_CTRL_fields_::eLOCK_LIST;
    using eTZ_NS = SLOT4_CTRL_fields_::eTZ_NS;
    using eTZ_USER = SLOT4_CTRL_fields_::eTZ_USER;
    using eLOCK_CONTROL = SLOT4_CTRL_fields_::eLOCK_CONTROL;
    using WHITE_LIST = SLOT4_CTRL_fields_::WHITE_LIST;
    using LOCK_LIST = SLOT4_CTRL_fields_::LOCK_LIST;
    using TZ_NS = SLOT4_CTRL_fields_::TZ_NS;
    using TZ_USER = SLOT4_CTRL_fields_::TZ_USER;
    using LOCK_CONTROL = SLOT4_CTRL_fields_::LOCK_CONTROL;
  };

};

}  // namespace regs