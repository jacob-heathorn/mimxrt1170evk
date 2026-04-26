#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IPS Domain
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IpsDomain {
  // Slot Control Register
  struct SlotCtrlFields {
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
  };  // struct SlotCtrlFields

  template<std::uint32_t ClusterIndex>
  struct SLOT_CTRL : ftl::mmio::Register<
      0x40C87C00u + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x0000000Fu,
      ftl::mmio::RW,
      SlotCtrlFields::LOCKED_DOMAIN_ID,
      ftl::mmio::Reserved<11, 4>,
      SlotCtrlFields::DOMAIN_LOCK,
      SlotCtrlFields::ALLOW_NONSECURE,
      SlotCtrlFields::ALLOW_USER,
      ftl::mmio::Reserved<13, 18>,
      SlotCtrlFields::LOCK_CONTROL> {
    static_assert(ClusterIndex < 38u, "SLOT_CTRL: ClusterIndex out of range");
    using eDOMAIN_LOCK = SlotCtrlFields::eDOMAIN_LOCK;
    using eALLOW_NONSECURE = SlotCtrlFields::eALLOW_NONSECURE;
    using eALLOW_USER = SlotCtrlFields::eALLOW_USER;
    using eLOCK_CONTROL = SlotCtrlFields::eLOCK_CONTROL;
    using LOCKED_DOMAIN_ID = SlotCtrlFields::LOCKED_DOMAIN_ID;
    using DOMAIN_LOCK = SlotCtrlFields::DOMAIN_LOCK;
    using ALLOW_NONSECURE = SlotCtrlFields::ALLOW_NONSECURE;
    using ALLOW_USER = SlotCtrlFields::ALLOW_USER;
    using LOCK_CONTROL = SlotCtrlFields::LOCK_CONTROL;
  };

};

}  // namespace regs