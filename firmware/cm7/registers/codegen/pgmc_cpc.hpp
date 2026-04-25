#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PGMC_CPC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Pgmc_cpc {
  static_assert( Instance == 0u || Instance == 1u,
      "Pgmc_cpc: Instance must be one of 0, 1");

  static constexpr std::uintptr_t kBase =
      Instance == 0u ? 0x40C89000u :
      Instance == 1u ? 0x40C89400u :
      0u;

  
// CPC Authentication Control
struct CPC_AUTHEN_CTRL_fields_ {
  // Allow user mode access
  using USER = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Allow non-secure mode access
  using NONSECURE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock NONSECURE and USER
  using LOCK_SETTING = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Domain ID white list
  using WHITE_LIST = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // White list lock
  using LOCK_LIST = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Configuration lock
  using LOCK_CFG = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_AUTHEN_CTRL_fields_

struct CPC_AUTHEN_CTRL : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x00000F00u,
    ftl::mmio::RW,
    typename CPC_AUTHEN_CTRL_fields_::USER,
    typename CPC_AUTHEN_CTRL_fields_::NONSECURE,
    ftl::mmio::Reserved<2, 2>,
    typename CPC_AUTHEN_CTRL_fields_::LOCK_SETTING,
    ftl::mmio::Reserved<3, 5>,
    typename CPC_AUTHEN_CTRL_fields_::WHITE_LIST,
    typename CPC_AUTHEN_CTRL_fields_::LOCK_LIST,
    ftl::mmio::Reserved<7, 13>,
    typename CPC_AUTHEN_CTRL_fields_::LOCK_CFG,
    ftl::mmio::Reserved<11, 21>> {
  using USER = typename CPC_AUTHEN_CTRL_fields_::USER;
  using NONSECURE = typename CPC_AUTHEN_CTRL_fields_::NONSECURE;
  using LOCK_SETTING = typename CPC_AUTHEN_CTRL_fields_::LOCK_SETTING;
  using WHITE_LIST = typename CPC_AUTHEN_CTRL_fields_::WHITE_LIST;
  using LOCK_LIST = typename CPC_AUTHEN_CTRL_fields_::LOCK_LIST;
  using LOCK_CFG = typename CPC_AUTHEN_CTRL_fields_::LOCK_CFG;
};

  
// CPC Core Mode
struct CPC_CORE_MODE_fields_ {

  enum class eCTRL_MODE : std::uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
  };
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using CTRL_MODE = ftl::mmio::Field<2, 0, eCTRL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CORE_MODE_fields_

struct CPC_CORE_MODE : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_CORE_MODE_fields_::CTRL_MODE,
    ftl::mmio::Reserved<30, 2>> {
  using eCTRL_MODE = typename CPC_CORE_MODE_fields_::eCTRL_MODE;
  using CTRL_MODE = typename CPC_CORE_MODE_fields_::CTRL_MODE;
};

  
// CPC core power control
struct CPC_CORE_POWER_CTRL_fields_ {
  // Power off when domain enters WAIT mode
  using PWR_OFF_AT_WAIT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power off when domain enters STOP mode
  using PWR_OFF_AT_STOP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power off when domain enters SUSPEND mode
  using PWR_OFF_AT_SUSPEND = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software isolation on trigger
  using ISO_ON_SOFT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software power off trigger
  using PSW_OFF_SOFT = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software power on trigger
  using PSW_ON_SOFT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software isolation off trigger
  using ISO_OFF_SOFT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CORE_POWER_CTRL_fields_

struct CPC_CORE_POWER_CTRL : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_WAIT,
    typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_STOP,
    typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_SUSPEND,
    ftl::mmio::Reserved<4, 4>,
    typename CPC_CORE_POWER_CTRL_fields_::ISO_ON_SOFT,
    typename CPC_CORE_POWER_CTRL_fields_::PSW_OFF_SOFT,
    typename CPC_CORE_POWER_CTRL_fields_::PSW_ON_SOFT,
    typename CPC_CORE_POWER_CTRL_fields_::ISO_OFF_SOFT,
    ftl::mmio::Reserved<20, 12>> {
  using PWR_OFF_AT_WAIT = typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_WAIT;
  using PWR_OFF_AT_STOP = typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_STOP;
  using PWR_OFF_AT_SUSPEND = typename CPC_CORE_POWER_CTRL_fields_::PWR_OFF_AT_SUSPEND;
  using ISO_ON_SOFT = typename CPC_CORE_POWER_CTRL_fields_::ISO_ON_SOFT;
  using PSW_OFF_SOFT = typename CPC_CORE_POWER_CTRL_fields_::PSW_OFF_SOFT;
  using PSW_ON_SOFT = typename CPC_CORE_POWER_CTRL_fields_::PSW_ON_SOFT;
  using ISO_OFF_SOFT = typename CPC_CORE_POWER_CTRL_fields_::ISO_OFF_SOFT;
};

  
// CPC flag
struct CPC_FLAG_fields_ {
  // set to 1 after core power switch off, cleared by writing 1
  using CORE_PDN_FLAG = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CPC_FLAG_fields_

struct CPC_FLAG : ftl::mmio::Register<
    kBase + 0x2Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_FLAG_fields_::CORE_PDN_FLAG,
    ftl::mmio::Reserved<31, 1>> {
  using CORE_PDN_FLAG = typename CPC_FLAG_fields_::CORE_PDN_FLAG;
};

  
// CPC Cache Mode
struct CPC_CACHE_MODE_fields_ {

  enum class eCTRL_MODE : std::uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
    // Controlled by Setpoint
    eCTRL_MODE_2 = 2,
  };
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using CTRL_MODE = ftl::mmio::Field<2, 0, eCTRL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CACHE_MODE_fields_

struct CPC_CACHE_MODE : ftl::mmio::Register<
    kBase + 0x40u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_CACHE_MODE_fields_::CTRL_MODE,
    ftl::mmio::Reserved<30, 2>> {
  using eCTRL_MODE = typename CPC_CACHE_MODE_fields_::eCTRL_MODE;
  using CTRL_MODE = typename CPC_CACHE_MODE_fields_::CTRL_MODE;
};

  
// CPC cache CPU mode control
struct CPC_CACHE_CM_CTRL_fields_ {
  // Memory Low Power Level (MLPL) at RUN mode
  using MLPL_AT_RUN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at WAIT mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_WAIT = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at STOP mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_STOP = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at SUSPEND mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SUSPEND = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) software change request, keep 1 until MLPL transition complete
  using MLPL_SOFT = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CACHE_CM_CTRL_fields_

struct CPC_CACHE_CM_CTRL : ftl::mmio::Register<
    kBase + 0x44u,
    std::uint32_t,
    0x00003330u,
    ftl::mmio::RW,
    typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_RUN,
    typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_WAIT,
    typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_STOP,
    typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_SUSPEND,
    typename CPC_CACHE_CM_CTRL_fields_::MLPL_SOFT,
    ftl::mmio::Reserved<15, 17>> {
  using MLPL_AT_RUN = typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_RUN;
  using MLPL_AT_WAIT = typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_WAIT;
  using MLPL_AT_STOP = typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_STOP;
  using MLPL_AT_SUSPEND = typename CPC_CACHE_CM_CTRL_fields_::MLPL_AT_SUSPEND;
  using MLPL_SOFT = typename CPC_CACHE_CM_CTRL_fields_::MLPL_SOFT;
};

  
// CPC cache Setpoint control 0
struct CPC_CACHE_SP_CTRL_0_fields_ {
  // Memory Low Power Level (MLPL) at Setpoint 0. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 1. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 2. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 3. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 4. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP4 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 5. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP5 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 6. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP6 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 7. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP7 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CACHE_SP_CTRL_0_fields_

struct CPC_CACHE_SP_CTRL_0 : ftl::mmio::Register<
    kBase + 0x48u,
    std::uint32_t,
    0x33333333u,
    ftl::mmio::RW,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP0,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP1,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP2,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP3,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP4,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP5,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP6,
    typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP7> {
  using MLPL_AT_SP0 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP0;
  using MLPL_AT_SP1 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP1;
  using MLPL_AT_SP2 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP2;
  using MLPL_AT_SP3 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP3;
  using MLPL_AT_SP4 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP4;
  using MLPL_AT_SP5 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP5;
  using MLPL_AT_SP6 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP6;
  using MLPL_AT_SP7 = typename CPC_CACHE_SP_CTRL_0_fields_::MLPL_AT_SP7;
};

  
// CPC cache Setpoint control 1
struct CPC_CACHE_SP_CTRL_1_fields_ {
  // Memory Low Power Level (MLPL) at Setpoint 8. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP8 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 9. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP9 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 10. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP10 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 11. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP11 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 12. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP12 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 13. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP13 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 14. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP14 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 15. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP15 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_CACHE_SP_CTRL_1_fields_

struct CPC_CACHE_SP_CTRL_1 : ftl::mmio::Register<
    kBase + 0x4Cu,
    std::uint32_t,
    0x33333333u,
    ftl::mmio::RW,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP8,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP9,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP10,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP11,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP12,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP13,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP14,
    typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP15> {
  using MLPL_AT_SP8 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP8;
  using MLPL_AT_SP9 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP9;
  using MLPL_AT_SP10 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP10;
  using MLPL_AT_SP11 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP11;
  using MLPL_AT_SP12 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP12;
  using MLPL_AT_SP13 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP13;
  using MLPL_AT_SP14 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP14;
  using MLPL_AT_SP15 = typename CPC_CACHE_SP_CTRL_1_fields_::MLPL_AT_SP15;
};

  
// CPC local memory Mode
struct CPC_LMEM_MODE_fields_ {

  enum class eCTRL_MODE : std::uint32_t {
    // Not affected by any low power mode
    eCTRL_MODE_0 = 0,
    // Controlled by CPU power mode of the domain
    eCTRL_MODE_1 = 1,
    // Controlled by Setpoint
    eCTRL_MODE_2 = 2,
  };
  // Control mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using CTRL_MODE = ftl::mmio::Field<2, 0, eCTRL_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_LMEM_MODE_fields_

struct CPC_LMEM_MODE : ftl::mmio::Register<
    kBase + 0xC0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_LMEM_MODE_fields_::CTRL_MODE,
    ftl::mmio::Reserved<30, 2>> {
  using eCTRL_MODE = typename CPC_LMEM_MODE_fields_::eCTRL_MODE;
  using CTRL_MODE = typename CPC_LMEM_MODE_fields_::CTRL_MODE;
};

  
// CPC local memory CPU mode control
struct CPC_LMEM_CM_CTRL_fields_ {
  // Memory Low Power Level (MLPL) at RUN mode
  using MLPL_AT_RUN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at WAIT mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_WAIT = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at STOP mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_STOP = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at SUSPEND mode. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SUSPEND = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) software change request, keep 1 until MLPL transition complete
  using MLPL_SOFT = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_LMEM_CM_CTRL_fields_

struct CPC_LMEM_CM_CTRL : ftl::mmio::Register<
    kBase + 0xC4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_RUN,
    typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_WAIT,
    typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_STOP,
    typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_SUSPEND,
    typename CPC_LMEM_CM_CTRL_fields_::MLPL_SOFT,
    ftl::mmio::Reserved<15, 17>> {
  using MLPL_AT_RUN = typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_RUN;
  using MLPL_AT_WAIT = typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_WAIT;
  using MLPL_AT_STOP = typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_STOP;
  using MLPL_AT_SUSPEND = typename CPC_LMEM_CM_CTRL_fields_::MLPL_AT_SUSPEND;
  using MLPL_SOFT = typename CPC_LMEM_CM_CTRL_fields_::MLPL_SOFT;
};

  
// CPC local memory Setpoint control 0
struct CPC_LMEM_SP_CTRL_0_fields_ {
  // Memory Low Power Level (MLPL) at Setpoint 0. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP0 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 1. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP1 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 2. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP2 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 3. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP3 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 4. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP4 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 5. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP5 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 6. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP6 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 7. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP7 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_LMEM_SP_CTRL_0_fields_

struct CPC_LMEM_SP_CTRL_0 : ftl::mmio::Register<
    kBase + 0xC8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP0,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP1,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP2,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP3,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP4,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP5,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP6,
    typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP7> {
  using MLPL_AT_SP0 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP0;
  using MLPL_AT_SP1 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP1;
  using MLPL_AT_SP2 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP2;
  using MLPL_AT_SP3 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP3;
  using MLPL_AT_SP4 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP4;
  using MLPL_AT_SP5 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP5;
  using MLPL_AT_SP6 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP6;
  using MLPL_AT_SP7 = typename CPC_LMEM_SP_CTRL_0_fields_::MLPL_AT_SP7;
};

  
// CPC local memory Setpoint control 1
struct CPC_LMEM_SP_CTRL_1_fields_ {
  // Memory Low Power Level (MLPL) at Setpoint 8. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP8 = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 9. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP9 = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 10. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP10 = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 11. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP11 = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 12. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP12 = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 13. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP13 = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 14. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP14 = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Memory Low Power Level (MLPL) at Setpoint 15. This field is locked by AUTHEN_CTRL[LOCK_CFG] field.
  using MLPL_AT_SP15 = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CPC_LMEM_SP_CTRL_1_fields_

struct CPC_LMEM_SP_CTRL_1 : ftl::mmio::Register<
    kBase + 0xCCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP8,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP9,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP10,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP11,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP12,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP13,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP14,
    typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP15> {
  using MLPL_AT_SP8 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP8;
  using MLPL_AT_SP9 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP9;
  using MLPL_AT_SP10 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP10;
  using MLPL_AT_SP11 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP11;
  using MLPL_AT_SP12 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP12;
  using MLPL_AT_SP13 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP13;
  using MLPL_AT_SP14 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP14;
  using MLPL_AT_SP15 = typename CPC_LMEM_SP_CTRL_1_fields_::MLPL_AT_SP15;
};
};

}  // namespace regs