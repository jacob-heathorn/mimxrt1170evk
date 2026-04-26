#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CCM_OBS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct CcmObs {
  // Observe control
  struct ObserveControlFields {
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
  };  // struct ObserveControlFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_CONTROL : ftl::mmio::Register<
      0x40150000u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveControlFields::SELECT,
      ftl::mmio::Reserved<3, 9>,
      ObserveControlFields::RAW,
      ObserveControlFields::INV,
      ftl::mmio::Reserved<1, 14>,
      ObserveControlFields::RESET,
      ObserveControlFields::DIVIDE,
      ObserveControlFields::OFF,
      ftl::mmio::Reserved<7, 25>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL: ClusterIndex out of range");
    using eRAW = ObserveControlFields::eRAW;
    using eINV = ObserveControlFields::eINV;
    using eRESET = ObserveControlFields::eRESET;
    using eOFF = ObserveControlFields::eOFF;
    using SELECT = ObserveControlFields::SELECT;
    using RAW = ObserveControlFields::RAW;
    using INV = ObserveControlFields::INV;
    using RESET = ObserveControlFields::RESET;
    using DIVIDE = ObserveControlFields::DIVIDE;
    using OFF = ObserveControlFields::OFF;
  };

  // Observe control
  struct ObserveControlSetFields {
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
  };  // struct ObserveControlSetFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_CONTROL_SET : ftl::mmio::Register<
      0x40150004u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveControlSetFields::SELECT,
      ftl::mmio::Reserved<3, 9>,
      ObserveControlSetFields::RAW,
      ObserveControlSetFields::INV,
      ftl::mmio::Reserved<1, 14>,
      ObserveControlSetFields::RESET,
      ObserveControlSetFields::DIVIDE,
      ObserveControlSetFields::OFF,
      ftl::mmio::Reserved<7, 25>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_SET: ClusterIndex out of range");
    using SELECT = ObserveControlSetFields::SELECT;
    using RAW = ObserveControlSetFields::RAW;
    using INV = ObserveControlSetFields::INV;
    using RESET = ObserveControlSetFields::RESET;
    using DIVIDE = ObserveControlSetFields::DIVIDE;
    using OFF = ObserveControlSetFields::OFF;
  };

  // Observe control
  struct ObserveControlClrFields {
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
  };  // struct ObserveControlClrFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_CONTROL_CLR : ftl::mmio::Register<
      0x40150008u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveControlClrFields::SELECT,
      ftl::mmio::Reserved<3, 9>,
      ObserveControlClrFields::RAW,
      ObserveControlClrFields::INV,
      ftl::mmio::Reserved<1, 14>,
      ObserveControlClrFields::RESET,
      ObserveControlClrFields::DIVIDE,
      ObserveControlClrFields::OFF,
      ftl::mmio::Reserved<7, 25>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_CLR: ClusterIndex out of range");
    using SELECT = ObserveControlClrFields::SELECT;
    using RAW = ObserveControlClrFields::RAW;
    using INV = ObserveControlClrFields::INV;
    using RESET = ObserveControlClrFields::RESET;
    using DIVIDE = ObserveControlClrFields::DIVIDE;
    using OFF = ObserveControlClrFields::OFF;
  };

  // Observe control
  struct ObserveControlTogFields {
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
  };  // struct ObserveControlTogFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_CONTROL_TOG : ftl::mmio::Register<
      0x4015000Cu + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveControlTogFields::SELECT,
      ftl::mmio::Reserved<3, 9>,
      ObserveControlTogFields::RAW,
      ObserveControlTogFields::INV,
      ftl::mmio::Reserved<1, 14>,
      ObserveControlTogFields::RESET,
      ObserveControlTogFields::DIVIDE,
      ObserveControlTogFields::OFF,
      ftl::mmio::Reserved<7, 25>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_CONTROL_TOG: ClusterIndex out of range");
    using SELECT = ObserveControlTogFields::SELECT;
    using RAW = ObserveControlTogFields::RAW;
    using INV = ObserveControlTogFields::INV;
    using RESET = ObserveControlTogFields::RESET;
    using DIVIDE = ObserveControlTogFields::DIVIDE;
    using OFF = ObserveControlTogFields::OFF;
  };

  // Observe status
  struct ObserveStatus0Fields {
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
  };  // struct ObserveStatus0Fields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_STATUS0 : ftl::mmio::Register<
      0x40150020u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ObserveStatus0Fields::SELECT,
      ftl::mmio::Reserved<3, 9>,
      ObserveStatus0Fields::RAW,
      ObserveStatus0Fields::INV,
      ftl::mmio::Reserved<1, 14>,
      ObserveStatus0Fields::RESET,
      ObserveStatus0Fields::DIVIDE,
      ObserveStatus0Fields::OFF,
      ftl::mmio::Reserved<7, 25>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_STATUS0: ClusterIndex out of range");
    using eRAW = ObserveStatus0Fields::eRAW;
    using eINV = ObserveStatus0Fields::eINV;
    using eRESET = ObserveStatus0Fields::eRESET;
    using eOFF = ObserveStatus0Fields::eOFF;
    using SELECT = ObserveStatus0Fields::SELECT;
    using RAW = ObserveStatus0Fields::RAW;
    using INV = ObserveStatus0Fields::INV;
    using RESET = ObserveStatus0Fields::RESET;
    using DIVIDE = ObserveStatus0Fields::DIVIDE;
    using OFF = ObserveStatus0Fields::OFF;
  };

  // Observe access control
  struct ObserveAuthenFields {
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
  };  // struct ObserveAuthenFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_AUTHEN : ftl::mmio::Register<
      0x40150030u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveAuthenFields::TZ_USER,
      ObserveAuthenFields::TZ_NS,
      ftl::mmio::Reserved<2, 2>,
      ObserveAuthenFields::LOCK_TZ,
      ftl::mmio::Reserved<3, 5>,
      ObserveAuthenFields::WHITE_LIST,
      ObserveAuthenFields::LOCK_LIST,
      ftl::mmio::Reserved<3, 13>,
      ObserveAuthenFields::DOMAIN_MODE,
      ftl::mmio::Reserved<3, 17>,
      ObserveAuthenFields::LOCK_MODE,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN: ClusterIndex out of range");
    using eTZ_USER = ObserveAuthenFields::eTZ_USER;
    using eTZ_NS = ObserveAuthenFields::eTZ_NS;
    using eLOCK_TZ = ObserveAuthenFields::eLOCK_TZ;
    using eWHITE_LIST = ObserveAuthenFields::eWHITE_LIST;
    using eLOCK_LIST = ObserveAuthenFields::eLOCK_LIST;
    using eDOMAIN_MODE = ObserveAuthenFields::eDOMAIN_MODE;
    using eLOCK_MODE = ObserveAuthenFields::eLOCK_MODE;
    using TZ_USER = ObserveAuthenFields::TZ_USER;
    using TZ_NS = ObserveAuthenFields::TZ_NS;
    using LOCK_TZ = ObserveAuthenFields::LOCK_TZ;
    using WHITE_LIST = ObserveAuthenFields::WHITE_LIST;
    using LOCK_LIST = ObserveAuthenFields::LOCK_LIST;
    using DOMAIN_MODE = ObserveAuthenFields::DOMAIN_MODE;
    using LOCK_MODE = ObserveAuthenFields::LOCK_MODE;
  };

  // Observe access control
  struct ObserveAuthenSetFields {
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
  };  // struct ObserveAuthenSetFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_AUTHEN_SET : ftl::mmio::Register<
      0x40150034u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveAuthenSetFields::TZ_USER,
      ObserveAuthenSetFields::TZ_NS,
      ftl::mmio::Reserved<2, 2>,
      ObserveAuthenSetFields::LOCK_TZ,
      ftl::mmio::Reserved<3, 5>,
      ObserveAuthenSetFields::WHITE_LIST,
      ObserveAuthenSetFields::LOCK_LIST,
      ftl::mmio::Reserved<3, 13>,
      ObserveAuthenSetFields::DOMAIN_MODE,
      ftl::mmio::Reserved<3, 17>,
      ObserveAuthenSetFields::LOCK_MODE,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_SET: ClusterIndex out of range");
    using TZ_USER = ObserveAuthenSetFields::TZ_USER;
    using TZ_NS = ObserveAuthenSetFields::TZ_NS;
    using LOCK_TZ = ObserveAuthenSetFields::LOCK_TZ;
    using WHITE_LIST = ObserveAuthenSetFields::WHITE_LIST;
    using LOCK_LIST = ObserveAuthenSetFields::LOCK_LIST;
    using DOMAIN_MODE = ObserveAuthenSetFields::DOMAIN_MODE;
    using LOCK_MODE = ObserveAuthenSetFields::LOCK_MODE;
  };

  // Observe access control
  struct ObserveAuthenClrFields {
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
  };  // struct ObserveAuthenClrFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_AUTHEN_CLR : ftl::mmio::Register<
      0x40150038u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveAuthenClrFields::TZ_USER,
      ObserveAuthenClrFields::TZ_NS,
      ftl::mmio::Reserved<2, 2>,
      ObserveAuthenClrFields::LOCK_TZ,
      ftl::mmio::Reserved<3, 5>,
      ObserveAuthenClrFields::WHITE_LIST,
      ObserveAuthenClrFields::LOCK_LIST,
      ftl::mmio::Reserved<3, 13>,
      ObserveAuthenClrFields::DOMAIN_MODE,
      ftl::mmio::Reserved<3, 17>,
      ObserveAuthenClrFields::LOCK_MODE,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_CLR: ClusterIndex out of range");
    using TZ_USER = ObserveAuthenClrFields::TZ_USER;
    using TZ_NS = ObserveAuthenClrFields::TZ_NS;
    using LOCK_TZ = ObserveAuthenClrFields::LOCK_TZ;
    using WHITE_LIST = ObserveAuthenClrFields::WHITE_LIST;
    using LOCK_LIST = ObserveAuthenClrFields::LOCK_LIST;
    using DOMAIN_MODE = ObserveAuthenClrFields::DOMAIN_MODE;
    using LOCK_MODE = ObserveAuthenClrFields::LOCK_MODE;
  };

  // Observe access control
  struct ObserveAuthenTogFields {
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
  };  // struct ObserveAuthenTogFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_AUTHEN_TOG : ftl::mmio::Register<
      0x4015003Cu + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ObserveAuthenTogFields::TZ_USER,
      ObserveAuthenTogFields::TZ_NS,
      ftl::mmio::Reserved<2, 2>,
      ObserveAuthenTogFields::LOCK_TZ,
      ftl::mmio::Reserved<3, 5>,
      ObserveAuthenTogFields::WHITE_LIST,
      ObserveAuthenTogFields::LOCK_LIST,
      ftl::mmio::Reserved<3, 13>,
      ObserveAuthenTogFields::DOMAIN_MODE,
      ftl::mmio::Reserved<3, 17>,
      ObserveAuthenTogFields::LOCK_MODE,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(ClusterIndex < 6u, "OBSERVE_AUTHEN_TOG: ClusterIndex out of range");
    using TZ_USER = ObserveAuthenTogFields::TZ_USER;
    using TZ_NS = ObserveAuthenTogFields::TZ_NS;
    using LOCK_TZ = ObserveAuthenTogFields::LOCK_TZ;
    using WHITE_LIST = ObserveAuthenTogFields::WHITE_LIST;
    using LOCK_LIST = ObserveAuthenTogFields::LOCK_LIST;
    using DOMAIN_MODE = ObserveAuthenTogFields::DOMAIN_MODE;
    using LOCK_MODE = ObserveAuthenTogFields::LOCK_MODE;
  };

  // Current frequency detected
  struct ObserveFrequencyCurrentFields {
    // Frequency
    using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ObserveFrequencyCurrentFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_FREQUENCY_CURRENT : ftl::mmio::Register<
      0x40150040u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ObserveFrequencyCurrentFields::FREQUENCY> {
    static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_CURRENT: ClusterIndex out of range");
    using FREQUENCY = ObserveFrequencyCurrentFields::FREQUENCY;
  };

  // Minimum frequency detected
  struct ObserveFrequencyMinFields {
    // Frequency
    using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ObserveFrequencyMinFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_FREQUENCY_MIN : ftl::mmio::Register<
      0x40150044u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0xFFFFFFC0u,
      ftl::mmio::RO,
      ObserveFrequencyMinFields::FREQUENCY> {
    static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_MIN: ClusterIndex out of range");
    using FREQUENCY = ObserveFrequencyMinFields::FREQUENCY;
  };

  // Maximum frequency detected
  struct ObserveFrequencyMaxFields {
    // Frequency
    using FREQUENCY = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ObserveFrequencyMaxFields

  template<std::uint32_t ClusterIndex>
  struct OBSERVE_FREQUENCY_MAX : ftl::mmio::Register<
      0x40150048u + (ClusterIndex * 0x80u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ObserveFrequencyMaxFields::FREQUENCY> {
    static_assert(ClusterIndex < 6u, "OBSERVE_FREQUENCY_MAX: ClusterIndex out of range");
    using FREQUENCY = ObserveFrequencyMaxFields::FREQUENCY;
  };

};

}  // namespace regs