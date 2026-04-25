#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CCM_OBS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::ccm_obs {


// Observe control
struct OBSERVE_CONTROL_fields_ {

  enum class eRAW : std::uint32_t {
    // Select divided signal.
    eRAW_0 = 0,
    // Select raw signal.
    eRAW_1 = 1,
  };

  enum class eINV : std::uint32_t {
    // Clock phase remain same.
    eINV_0 = 0,
    // Invert clock phase before measurement or send to IO.
    eINV_1 = 1,
  };

  enum class eRESET : std::uint32_t {
    // No reset
    eRESET_0 = 0,
    // Reset observe divider
    eRESET_1 = 1,
  };

  enum class eOFF : std::uint32_t {
    // observe slice is on
    eOFF_0 = 0,
    // observe slice is off
    eOFF_1 = 1,
  };
  // Observe signal selector
  using SELECT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Observe raw signal
  using RAW = ftl::mmio::Field<1, 12, eRAW, ftl::mmio::RW, ftl::mmio::Normal>;
  // Invert
  using INV = ftl::mmio::Field<1, 13, eINV, ftl::mmio::RW, ftl::mmio::Normal>;
  // Reset observe divider
  using RESET = ftl::mmio::Field<1, 15, eRESET, ftl::mmio::RW, ftl::mmio::Normal>;
  // Divider for observe signal
  using DIVIDE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Turn off
  using OFF = ftl::mmio::Field<1, 24, eOFF, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct OBSERVE_CONTROL_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_CONTROL : ftl::mmio::Register<
    0x40150000u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_CONTROL_fields_::SELECT,
    ftl::mmio::Reserved<3, 9>,
    OBSERVE_CONTROL_fields_::RAW,
    OBSERVE_CONTROL_fields_::INV,
    ftl::mmio::Reserved<1, 14>,
    OBSERVE_CONTROL_fields_::RESET,
    OBSERVE_CONTROL_fields_::DIVIDE,
    OBSERVE_CONTROL_fields_::OFF,
    ftl::mmio::Reserved<7, 25>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL: ClusterIndex out of range");
  using eRAW = OBSERVE_CONTROL_fields_::eRAW;
  using eINV = OBSERVE_CONTROL_fields_::eINV;
  using eRESET = OBSERVE_CONTROL_fields_::eRESET;
  using eOFF = OBSERVE_CONTROL_fields_::eOFF;
  using SELECT = OBSERVE_CONTROL_fields_::SELECT;
  using RAW = OBSERVE_CONTROL_fields_::RAW;
  using INV = OBSERVE_CONTROL_fields_::INV;
  using RESET = OBSERVE_CONTROL_fields_::RESET;
  using DIVIDE = OBSERVE_CONTROL_fields_::DIVIDE;
  using OFF = OBSERVE_CONTROL_fields_::OFF;
};


// Observe control
struct OBSERVE_CONTROL_SET_fields_ {
  // Observe signal selector
  using SELECT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Observe raw signal
  using RAW = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Invert
  using INV = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Reset observe divider
  using RESET = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Divider for observe signal
  using DIVIDE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Turn off
  using OFF = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct OBSERVE_CONTROL_SET_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_CONTROL_SET : ftl::mmio::Register<
    0x40150004u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_CONTROL_SET_fields_::SELECT,
    ftl::mmio::Reserved<3, 9>,
    OBSERVE_CONTROL_SET_fields_::RAW,
    OBSERVE_CONTROL_SET_fields_::INV,
    ftl::mmio::Reserved<1, 14>,
    OBSERVE_CONTROL_SET_fields_::RESET,
    OBSERVE_CONTROL_SET_fields_::DIVIDE,
    OBSERVE_CONTROL_SET_fields_::OFF,
    ftl::mmio::Reserved<7, 25>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_SET: ClusterIndex out of range");
  using SELECT = OBSERVE_CONTROL_SET_fields_::SELECT;
  using RAW = OBSERVE_CONTROL_SET_fields_::RAW;
  using INV = OBSERVE_CONTROL_SET_fields_::INV;
  using RESET = OBSERVE_CONTROL_SET_fields_::RESET;
  using DIVIDE = OBSERVE_CONTROL_SET_fields_::DIVIDE;
  using OFF = OBSERVE_CONTROL_SET_fields_::OFF;
};


// Observe control
struct OBSERVE_CONTROL_CLR_fields_ {
  // Observe signal selector
  using SELECT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Observe raw signal
  using RAW = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Invert
  using INV = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Reset observe divider
  using RESET = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Divider for observe signal
  using DIVIDE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Turn off
  using OFF = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct OBSERVE_CONTROL_CLR_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_CONTROL_CLR : ftl::mmio::Register<
    0x40150008u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_CONTROL_CLR_fields_::SELECT,
    ftl::mmio::Reserved<3, 9>,
    OBSERVE_CONTROL_CLR_fields_::RAW,
    OBSERVE_CONTROL_CLR_fields_::INV,
    ftl::mmio::Reserved<1, 14>,
    OBSERVE_CONTROL_CLR_fields_::RESET,
    OBSERVE_CONTROL_CLR_fields_::DIVIDE,
    OBSERVE_CONTROL_CLR_fields_::OFF,
    ftl::mmio::Reserved<7, 25>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_CLR: ClusterIndex out of range");
  using SELECT = OBSERVE_CONTROL_CLR_fields_::SELECT;
  using RAW = OBSERVE_CONTROL_CLR_fields_::RAW;
  using INV = OBSERVE_CONTROL_CLR_fields_::INV;
  using RESET = OBSERVE_CONTROL_CLR_fields_::RESET;
  using DIVIDE = OBSERVE_CONTROL_CLR_fields_::DIVIDE;
  using OFF = OBSERVE_CONTROL_CLR_fields_::OFF;
};


// Observe control
struct OBSERVE_CONTROL_TOG_fields_ {
  // Observe signal selector
  using SELECT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Observe raw signal
  using RAW = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Invert
  using INV = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Reset observe divider
  using RESET = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Divider for observe signal
  using DIVIDE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Turn off
  using OFF = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct OBSERVE_CONTROL_TOG_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_CONTROL_TOG : ftl::mmio::Register<
    0x4015000Cu + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_CONTROL_TOG_fields_::SELECT,
    ftl::mmio::Reserved<3, 9>,
    OBSERVE_CONTROL_TOG_fields_::RAW,
    OBSERVE_CONTROL_TOG_fields_::INV,
    ftl::mmio::Reserved<1, 14>,
    OBSERVE_CONTROL_TOG_fields_::RESET,
    OBSERVE_CONTROL_TOG_fields_::DIVIDE,
    OBSERVE_CONTROL_TOG_fields_::OFF,
    ftl::mmio::Reserved<7, 25>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_TOG: ClusterIndex out of range");
  using SELECT = OBSERVE_CONTROL_TOG_fields_::SELECT;
  using RAW = OBSERVE_CONTROL_TOG_fields_::RAW;
  using INV = OBSERVE_CONTROL_TOG_fields_::INV;
  using RESET = OBSERVE_CONTROL_TOG_fields_::RESET;
  using DIVIDE = OBSERVE_CONTROL_TOG_fields_::DIVIDE;
  using OFF = OBSERVE_CONTROL_TOG_fields_::OFF;
};


// Observe status
struct OBSERVE_STATUS0_fields_ {

  enum class eRAW : std::uint32_t {
    // Divided signal is selected
    eRAW_0 = 0,
    // Raw signal is selected
    eRAW_1 = 1,
  };

  enum class eINV : std::uint32_t {
    // Polarity is not inverted
    eINV_0 = 0,
    // Polarity of the observe target is inverted
    eINV_1 = 1,
  };

  enum class eRESET : std::uint32_t {
    // Observe divider is not in reset state
    eRESET_0 = 0,
    // Observe divider is in reset state
    eRESET_1 = 1,
  };

  enum class eOFF : std::uint32_t {
    // observe slice is on
    eOFF_0 = 0,
    // observe slice is off
    eOFF_1 = 1,
  };
  // Select value
  using SELECT = ftl::mmio::Field<9, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Observe raw signal
  using RAW = ftl::mmio::Field<1, 12, eRAW, ftl::mmio::RO, ftl::mmio::Normal>;
  // Polarity of the observe target
  using INV = ftl::mmio::Field<1, 13, eINV, ftl::mmio::RO, ftl::mmio::Normal>;
  // Reset state
  using RESET = ftl::mmio::Field<1, 15, eRESET, ftl::mmio::RO, ftl::mmio::Normal>;
  // Divide value status. The clock will be divided by DIVIDE + 1.
  using DIVIDE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Turn off slice
  using OFF = ftl::mmio::Field<1, 24, eOFF, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct OBSERVE_STATUS0_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_STATUS0 : ftl::mmio::Register<
    0x40150020u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    OBSERVE_STATUS0_fields_::SELECT,
    ftl::mmio::Reserved<3, 9>,
    OBSERVE_STATUS0_fields_::RAW,
    OBSERVE_STATUS0_fields_::INV,
    ftl::mmio::Reserved<1, 14>,
    OBSERVE_STATUS0_fields_::RESET,
    OBSERVE_STATUS0_fields_::DIVIDE,
    OBSERVE_STATUS0_fields_::OFF,
    ftl::mmio::Reserved<7, 25>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_STATUS0: ClusterIndex out of range");
  using eRAW = OBSERVE_STATUS0_fields_::eRAW;
  using eINV = OBSERVE_STATUS0_fields_::eINV;
  using eRESET = OBSERVE_STATUS0_fields_::eRESET;
  using eOFF = OBSERVE_STATUS0_fields_::eOFF;
  using SELECT = OBSERVE_STATUS0_fields_::SELECT;
  using RAW = OBSERVE_STATUS0_fields_::RAW;
  using INV = OBSERVE_STATUS0_fields_::INV;
  using RESET = OBSERVE_STATUS0_fields_::RESET;
  using DIVIDE = OBSERVE_STATUS0_fields_::DIVIDE;
  using OFF = OBSERVE_STATUS0_fields_::OFF;
};


// Observe access control
struct OBSERVE_AUTHEN_fields_ {

  enum class eTZ_USER : std::uint32_t {
    // Clock cannot be changed in user mode.
    eTZ_USER_0 = 0,
    // Clock can be changed in user mode.
    eTZ_USER_1 = 1,
  };

  enum class eTZ_NS : std::uint32_t {
    // Cannot be changed in Non-secure mode.
    eTZ_NS_0 = 0,
    // Can be changed in Non-secure mode.
    eTZ_NS_1 = 1,
  };

  enum class eLOCK_TZ : std::uint32_t {
    // Trustzone setting is not locked.
    eLOCK_TZ_0 = 0,
    // Trustzone setting is locked.
    eLOCK_TZ_1 = 1,
  };

  enum class eWHITE_LIST : std::uint32_t {
    // No domain can change.
    eWHITE_LIST_0 = 0,
    // Domain 0 can change.
    eWHITE_LIST_1 = 1,
    // Domain 1 can change.
    eWHITE_LIST_2 = 2,
    // Domain 0 and domain 1 can change.
    eWHITE_LIST_3 = 3,
    // Domain 2 can change.
    eWHITE_LIST_4 = 4,
    // All domain can change.
    eWHITE_LIST_15 = 15,
  };

  enum class eLOCK_LIST : std::uint32_t {
    // White list is not locked.
    eLOCK_LIST_0 = 0,
    // White list is locked.
    eLOCK_LIST_1 = 1,
  };

  enum class eDOMAIN_MODE : std::uint32_t {
    // Clock does not work in domain mode.
    eDOMAIN_MODE_0 = 0,
    // Clock works in domain mode.
    eDOMAIN_MODE_1 = 1,
  };

  enum class eLOCK_MODE : std::uint32_t {
    // MODE is not locked.
    eLOCK_MODE_0 = 0,
    // MODE is locked.
    eLOCK_MODE_1 = 1,
  };
  // User access
  using TZ_USER = ftl::mmio::Field<1, 0, eTZ_USER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Non-secure access
  using TZ_NS = ftl::mmio::Field<1, 1, eTZ_NS, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock truszone setting
  using LOCK_TZ = ftl::mmio::Field<1, 4, eLOCK_TZ, ftl::mmio::RW, ftl::mmio::Normal>;
  // White list
  using WHITE_LIST = ftl::mmio::Field<4, 8, eWHITE_LIST, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock white list
  using LOCK_LIST = ftl::mmio::Field<1, 12, eLOCK_LIST, ftl::mmio::RW, ftl::mmio::Normal>;
  // Low power and access control by domain
  using DOMAIN_MODE = ftl::mmio::Field<1, 16, eDOMAIN_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock low power and access mode
  using LOCK_MODE = ftl::mmio::Field<1, 20, eLOCK_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct OBSERVE_AUTHEN_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_AUTHEN : ftl::mmio::Register<
    0x40150030u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_AUTHEN_fields_::TZ_USER,
    OBSERVE_AUTHEN_fields_::TZ_NS,
    ftl::mmio::Reserved<2, 2>,
    OBSERVE_AUTHEN_fields_::LOCK_TZ,
    ftl::mmio::Reserved<3, 5>,
    OBSERVE_AUTHEN_fields_::WHITE_LIST,
    OBSERVE_AUTHEN_fields_::LOCK_LIST,
    ftl::mmio::Reserved<3, 13>,
    OBSERVE_AUTHEN_fields_::DOMAIN_MODE,
    ftl::mmio::Reserved<3, 17>,
    OBSERVE_AUTHEN_fields_::LOCK_MODE,
    ftl::mmio::Reserved<11, 21>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN: ClusterIndex out of range");
  using eTZ_USER = OBSERVE_AUTHEN_fields_::eTZ_USER;
  using eTZ_NS = OBSERVE_AUTHEN_fields_::eTZ_NS;
  using eLOCK_TZ = OBSERVE_AUTHEN_fields_::eLOCK_TZ;
  using eWHITE_LIST = OBSERVE_AUTHEN_fields_::eWHITE_LIST;
  using eLOCK_LIST = OBSERVE_AUTHEN_fields_::eLOCK_LIST;
  using eDOMAIN_MODE = OBSERVE_AUTHEN_fields_::eDOMAIN_MODE;
  using eLOCK_MODE = OBSERVE_AUTHEN_fields_::eLOCK_MODE;
  using TZ_USER = OBSERVE_AUTHEN_fields_::TZ_USER;
  using TZ_NS = OBSERVE_AUTHEN_fields_::TZ_NS;
  using LOCK_TZ = OBSERVE_AUTHEN_fields_::LOCK_TZ;
  using WHITE_LIST = OBSERVE_AUTHEN_fields_::WHITE_LIST;
  using LOCK_LIST = OBSERVE_AUTHEN_fields_::LOCK_LIST;
  using DOMAIN_MODE = OBSERVE_AUTHEN_fields_::DOMAIN_MODE;
  using LOCK_MODE = OBSERVE_AUTHEN_fields_::LOCK_MODE;
};


// Observe access control
struct OBSERVE_AUTHEN_SET_fields_ {
  // User access
  using TZ_USER = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Non-secure access
  using TZ_NS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Lock truszone setting
  using LOCK_TZ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // White list
  using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Lock white list
  using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Low power and access control by domain
  using DOMAIN_MODE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Lock low power and access mode
  using LOCK_MODE = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct OBSERVE_AUTHEN_SET_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_AUTHEN_SET : ftl::mmio::Register<
    0x40150034u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_AUTHEN_SET_fields_::TZ_USER,
    OBSERVE_AUTHEN_SET_fields_::TZ_NS,
    ftl::mmio::Reserved<2, 2>,
    OBSERVE_AUTHEN_SET_fields_::LOCK_TZ,
    ftl::mmio::Reserved<3, 5>,
    OBSERVE_AUTHEN_SET_fields_::WHITE_LIST,
    OBSERVE_AUTHEN_SET_fields_::LOCK_LIST,
    ftl::mmio::Reserved<3, 13>,
    OBSERVE_AUTHEN_SET_fields_::DOMAIN_MODE,
    ftl::mmio::Reserved<3, 17>,
    OBSERVE_AUTHEN_SET_fields_::LOCK_MODE,
    ftl::mmio::Reserved<11, 21>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_SET: ClusterIndex out of range");
  using TZ_USER = OBSERVE_AUTHEN_SET_fields_::TZ_USER;
  using TZ_NS = OBSERVE_AUTHEN_SET_fields_::TZ_NS;
  using LOCK_TZ = OBSERVE_AUTHEN_SET_fields_::LOCK_TZ;
  using WHITE_LIST = OBSERVE_AUTHEN_SET_fields_::WHITE_LIST;
  using LOCK_LIST = OBSERVE_AUTHEN_SET_fields_::LOCK_LIST;
  using DOMAIN_MODE = OBSERVE_AUTHEN_SET_fields_::DOMAIN_MODE;
  using LOCK_MODE = OBSERVE_AUTHEN_SET_fields_::LOCK_MODE;
};


// Observe access control
struct OBSERVE_AUTHEN_CLR_fields_ {
  // User access
  using TZ_USER = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Non-secure access
  using TZ_NS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Lock truszone setting
  using LOCK_TZ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // White list
  using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Lock white list
  using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Low power and access control by domain
  using DOMAIN_MODE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Lock low power and access mode
  using LOCK_MODE = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct OBSERVE_AUTHEN_CLR_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_AUTHEN_CLR : ftl::mmio::Register<
    0x40150038u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_AUTHEN_CLR_fields_::TZ_USER,
    OBSERVE_AUTHEN_CLR_fields_::TZ_NS,
    ftl::mmio::Reserved<2, 2>,
    OBSERVE_AUTHEN_CLR_fields_::LOCK_TZ,
    ftl::mmio::Reserved<3, 5>,
    OBSERVE_AUTHEN_CLR_fields_::WHITE_LIST,
    OBSERVE_AUTHEN_CLR_fields_::LOCK_LIST,
    ftl::mmio::Reserved<3, 13>,
    OBSERVE_AUTHEN_CLR_fields_::DOMAIN_MODE,
    ftl::mmio::Reserved<3, 17>,
    OBSERVE_AUTHEN_CLR_fields_::LOCK_MODE,
    ftl::mmio::Reserved<11, 21>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_CLR: ClusterIndex out of range");
  using TZ_USER = OBSERVE_AUTHEN_CLR_fields_::TZ_USER;
  using TZ_NS = OBSERVE_AUTHEN_CLR_fields_::TZ_NS;
  using LOCK_TZ = OBSERVE_AUTHEN_CLR_fields_::LOCK_TZ;
  using WHITE_LIST = OBSERVE_AUTHEN_CLR_fields_::WHITE_LIST;
  using LOCK_LIST = OBSERVE_AUTHEN_CLR_fields_::LOCK_LIST;
  using DOMAIN_MODE = OBSERVE_AUTHEN_CLR_fields_::DOMAIN_MODE;
  using LOCK_MODE = OBSERVE_AUTHEN_CLR_fields_::LOCK_MODE;
};


// Observe access control
struct OBSERVE_AUTHEN_TOG_fields_ {
  // User access
  using TZ_USER = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Non-secure access
  using TZ_NS = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Lock truszone setting
  using LOCK_TZ = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // White list
  using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Lock white list
  using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Low power and access control by domain
  using DOMAIN_MODE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Lock low power and access mode
  using LOCK_MODE = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct OBSERVE_AUTHEN_TOG_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_AUTHEN_TOG : ftl::mmio::Register<
    0x4015003Cu + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    OBSERVE_AUTHEN_TOG_fields_::TZ_USER,
    OBSERVE_AUTHEN_TOG_fields_::TZ_NS,
    ftl::mmio::Reserved<2, 2>,
    OBSERVE_AUTHEN_TOG_fields_::LOCK_TZ,
    ftl::mmio::Reserved<3, 5>,
    OBSERVE_AUTHEN_TOG_fields_::WHITE_LIST,
    OBSERVE_AUTHEN_TOG_fields_::LOCK_LIST,
    ftl::mmio::Reserved<3, 13>,
    OBSERVE_AUTHEN_TOG_fields_::DOMAIN_MODE,
    ftl::mmio::Reserved<3, 17>,
    OBSERVE_AUTHEN_TOG_fields_::LOCK_MODE,
    ftl::mmio::Reserved<11, 21>> {
  static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_TOG: ClusterIndex out of range");
  using TZ_USER = OBSERVE_AUTHEN_TOG_fields_::TZ_USER;
  using TZ_NS = OBSERVE_AUTHEN_TOG_fields_::TZ_NS;
  using LOCK_TZ = OBSERVE_AUTHEN_TOG_fields_::LOCK_TZ;
  using WHITE_LIST = OBSERVE_AUTHEN_TOG_fields_::WHITE_LIST;
  using LOCK_LIST = OBSERVE_AUTHEN_TOG_fields_::LOCK_LIST;
  using DOMAIN_MODE = OBSERVE_AUTHEN_TOG_fields_::DOMAIN_MODE;
  using LOCK_MODE = OBSERVE_AUTHEN_TOG_fields_::LOCK_MODE;
};


// Current frequency detected
struct OBSERVE_FREQUENCY_CURRENT_fields_ {
  // Frequency
  using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct OBSERVE_FREQUENCY_CURRENT_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_FREQUENCY_CURRENT : ftl::mmio::Register<
    0x40150040u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    OBSERVE_FREQUENCY_CURRENT_fields_::FREQUENCY> {
  static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_CURRENT: ClusterIndex out of range");
  using FREQUENCY = OBSERVE_FREQUENCY_CURRENT_fields_::FREQUENCY;
};


// Minimum frequency detected
struct OBSERVE_FREQUENCY_MIN_fields_ {
  // Frequency
  using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct OBSERVE_FREQUENCY_MIN_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_FREQUENCY_MIN : ftl::mmio::Register<
    0x40150044u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0xFFFFFFC0u,
    ftl::mmio::RO,
    OBSERVE_FREQUENCY_MIN_fields_::FREQUENCY> {
  static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_MIN: ClusterIndex out of range");
  using FREQUENCY = OBSERVE_FREQUENCY_MIN_fields_::FREQUENCY;
};


// Maximum frequency detected
struct OBSERVE_FREQUENCY_MAX_fields_ {
  // Frequency
  using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct OBSERVE_FREQUENCY_MAX_fields_

template<std::uint32_t ClusterIndex>
struct OBSERVE_FREQUENCY_MAX : ftl::mmio::Register<
    0x40150048u + (ClusterIndex * 0x80u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    OBSERVE_FREQUENCY_MAX_fields_::FREQUENCY> {
  static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_MAX: ClusterIndex out of range");
  using FREQUENCY = OBSERVE_FREQUENCY_MAX_fields_::FREQUENCY;
};

}  // namespace regs::ccm_obs