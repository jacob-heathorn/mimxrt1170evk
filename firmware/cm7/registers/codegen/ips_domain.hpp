#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IPS Domain
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::ips_domain {

// Slot Control Register
struct SLOT_CTRL_fields_ {
  enum class eDOMAIN_LOCK : std::uint32_t {
    // Do not lock the domain ID
    eUNLOCK = 0,
    // Lock the domain ID
    eLOCK = 1,
  };

  enum class eALLOW_NONSECURE : std::uint32_t {
    // Do not allow non-secure write access
    ePREVENT = 0,
    // Allow non-secure write access
    eALLOW = 1,
  };

  enum class eALLOW_USER : std::uint32_t {
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

  // Domain ID of the slot to be locked
  using LOCKED_DOMAIN_ID = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock domain ID of this slot
  using DOMAIN_LOCK = ftl::mmio::Field<1, 15, eDOMAIN_LOCK, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Allow non-secure write access to this domain control register or domain register
  using ALLOW_NONSECURE = ftl::mmio::Field<1, 16, eALLOW_NONSECURE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Allow user write access to this domain control register or domain register
  using ALLOW_USER = ftl::mmio::Field<1, 17, eALLOW_USER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock control of this slot
  using LOCK_CONTROL = ftl::mmio::Field<1, 31, eLOCK_CONTROL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SLOT_CTRL_fields_

template<std::uint32_t ClusterIndex>
struct SLOT_CTRL : ftl::mmio::Register<
    0x40C87C00u + (ClusterIndex * 0x10u),
    std::uint32_t,
    0x0000000Fu,
    ftl::mmio::RW,
    SLOT_CTRL_fields_::LOCKED_DOMAIN_ID,
    ftl::mmio::Reserved<11, 4>,
    SLOT_CTRL_fields_::DOMAIN_LOCK,
    SLOT_CTRL_fields_::ALLOW_NONSECURE,
    SLOT_CTRL_fields_::ALLOW_USER,
    ftl::mmio::Reserved<13, 18>,
    SLOT_CTRL_fields_::LOCK_CONTROL> {
  static_assert(ClusterIndex < 38u, "SLOT_CTRL: ClusterIndex out of range");
  using eDOMAIN_LOCK = SLOT_CTRL_fields_::eDOMAIN_LOCK;
  using eALLOW_NONSECURE = SLOT_CTRL_fields_::eALLOW_NONSECURE;
  using eALLOW_USER = SLOT_CTRL_fields_::eALLOW_USER;
  using eLOCK_CONTROL = SLOT_CTRL_fields_::eLOCK_CONTROL;
  using LOCKED_DOMAIN_ID = SLOT_CTRL_fields_::LOCKED_DOMAIN_ID;
  using DOMAIN_LOCK = SLOT_CTRL_fields_::DOMAIN_LOCK;
  using ALLOW_NONSECURE = SLOT_CTRL_fields_::ALLOW_NONSECURE;
  using ALLOW_USER = SLOT_CTRL_fields_::ALLOW_USER;
  using LOCK_CONTROL = SLOT_CTRL_fields_::LOCK_CONTROL;
};

}  // namespace regs::ips_domain