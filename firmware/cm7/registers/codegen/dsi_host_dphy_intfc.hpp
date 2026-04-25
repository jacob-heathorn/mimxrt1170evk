#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST DPHY INTFC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::dsi_host_dphy_intfc {


// PD_TX
struct PD_TX_fields_ {

  enum class ePD_TX : std::uint32_t {
    // Power Up
    ePD_TX_0 = 0,
    // Power Down
    ePD_TX_1 = 1,
  };
  // Power Down input for D-PHY
  using PD_TX = ftl::mmio::Field<1, 0, ePD_TX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PD_TX_fields_

struct PD_TX : ftl::mmio::Register<
    0x4080C300u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RW,
    PD_TX_fields_::PD_TX,
    ftl::mmio::Reserved<31, 1>> {
  using ePD_TX = PD_TX_fields_::ePD_TX;
  using value_ = PD_TX_fields_::PD_TX;
};


// M_PRG_HS_PREPARE
struct M_PRG_HS_PREPARE_fields_ {
  // DPHY m_PRG_HS_PREPARE input
  using M_PRG_HS_PREPARE = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct M_PRG_HS_PREPARE_fields_

struct M_PRG_HS_PREPARE : ftl::mmio::Register<
    0x4080C304u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    M_PRG_HS_PREPARE_fields_::M_PRG_HS_PREPARE,
    ftl::mmio::Reserved<30, 2>> {
  using value_ = M_PRG_HS_PREPARE_fields_::M_PRG_HS_PREPARE;
};


// MC_PRG_HS_PREPARE
struct MC_PRG_HS_PREPARE_fields_ {
  // DPHY mc_PRG_HS_PREPARE input
  using MC_PRG_HS_PREPARE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MC_PRG_HS_PREPARE_fields_

struct MC_PRG_HS_PREPARE : ftl::mmio::Register<
    0x4080C308u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MC_PRG_HS_PREPARE_fields_::MC_PRG_HS_PREPARE,
    ftl::mmio::Reserved<31, 1>> {
  using value_ = MC_PRG_HS_PREPARE_fields_::MC_PRG_HS_PREPARE;
};


// M_PRG_HS_ZERO
struct M_PRG_HS_ZERO_fields_ {
  // DPHY m_PRG_HS_ZERO input
  using M_PRG_HS_ZERO = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct M_PRG_HS_ZERO_fields_

struct M_PRG_HS_ZERO : ftl::mmio::Register<
    0x4080C30Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    M_PRG_HS_ZERO_fields_::M_PRG_HS_ZERO,
    ftl::mmio::Reserved<27, 5>> {
  using value_ = M_PRG_HS_ZERO_fields_::M_PRG_HS_ZERO;
};


// MC_PRG_HS_ZERO
struct MC_PRG_HS_ZERO_fields_ {
  // DPHY mc_PRG_HS_ZERO input
  using MC_PRG_HS_ZERO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MC_PRG_HS_ZERO_fields_

struct MC_PRG_HS_ZERO : ftl::mmio::Register<
    0x4080C310u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MC_PRG_HS_ZERO_fields_::MC_PRG_HS_ZERO,
    ftl::mmio::Reserved<26, 6>> {
  using value_ = MC_PRG_HS_ZERO_fields_::MC_PRG_HS_ZERO;
};


// M_PRG_HS_TRAIL
struct M_PRG_HS_TRAIL_fields_ {
  // DPHY m_PRG_HS_TRAIL input
  using M_PRG_HS_TRAIL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct M_PRG_HS_TRAIL_fields_

struct M_PRG_HS_TRAIL : ftl::mmio::Register<
    0x4080C314u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    M_PRG_HS_TRAIL_fields_::M_PRG_HS_TRAIL,
    ftl::mmio::Reserved<28, 4>> {
  using value_ = M_PRG_HS_TRAIL_fields_::M_PRG_HS_TRAIL;
};


// MC_PRG_HS_TRAIL
struct MC_PRG_HS_TRAIL_fields_ {
  // DPHY mc_PRG_HS_TRAIL input
  using MC_PRG_HS_TRAIL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct MC_PRG_HS_TRAIL_fields_

struct MC_PRG_HS_TRAIL : ftl::mmio::Register<
    0x4080C318u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    MC_PRG_HS_TRAIL_fields_::MC_PRG_HS_TRAIL,
    ftl::mmio::Reserved<28, 4>> {
  using value_ = MC_PRG_HS_TRAIL_fields_::MC_PRG_HS_TRAIL;
};


// PD_PLL
struct PD_PLL_fields_ {

  enum class ePD_PLL : std::uint32_t {
    // Power up PLL
    ePD_PLL_0 = 0,
    // Power down PLL
    ePD_PLL_1 = 1,
  };
  // Power-down signal
  using PD_PLL = ftl::mmio::Field<1, 0, ePD_PLL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PD_PLL_fields_

struct PD_PLL : ftl::mmio::Register<
    0x4080C31Cu,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RW,
    PD_PLL_fields_::PD_PLL,
    ftl::mmio::Reserved<31, 1>> {
  using ePD_PLL = PD_PLL_fields_::ePD_PLL;
  using value_ = PD_PLL_fields_::PD_PLL;
};


// TST
struct TST_fields_ {
  // Test
  using TST = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TST_fields_

struct TST : ftl::mmio::Register<
    0x4080C320u,
    std::uint32_t,
    0x00000025u,
    ftl::mmio::RW,
    TST_fields_::TST,
    ftl::mmio::Reserved<26, 6>> {
  using value_ = TST_fields_::TST;
};


// CN
struct CN_fields_ {
  // Control N divider
  using CN = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CN_fields_

struct CN : ftl::mmio::Register<
    0x4080C324u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CN_fields_::CN,
    ftl::mmio::Reserved<27, 5>> {
  using value_ = CN_fields_::CN;
};


// CM
struct CM_fields_ {
  // Control M divider
  using CM = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CM_fields_

struct CM : ftl::mmio::Register<
    0x4080C328u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CM_fields_::CM,
    ftl::mmio::Reserved<24, 8>> {
  using value_ = CM_fields_::CM;
};


// CO
struct CO_fields_ {

  enum class eCO : std::uint32_t {
    // Divide by 1
    eCO_0 = 0,
    // Divide by 2
    eCO_1 = 1,
    // Divide by 4
    eCO_2 = 2,
    // Divide by 8
    eCO_3 = 3,
  };
  // Control O divider
  using CO = ftl::mmio::Field<2, 0, eCO, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CO_fields_

struct CO : ftl::mmio::Register<
    0x4080C32Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CO_fields_::CO,
    ftl::mmio::Reserved<30, 2>> {
  using eCO = CO_fields_::eCO;
  using value_ = CO_fields_::CO;
};


// LOCK
struct LOCK_fields_ {

  enum class eLOCK : std::uint32_t {
    // PLL not locked
    eLOCK_0 = 0,
    // PLL has achieved frequency lock
    eLOCK_1 = 1,
  };
  // Lock Detect output
  using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LOCK_fields_

struct LOCK : ftl::mmio::Register<
    0x4080C330u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    LOCK_fields_::LOCK,
    ftl::mmio::Reserved<31, 1>> {
  using eLOCK = LOCK_fields_::eLOCK;
  using value_ = LOCK_fields_::LOCK;
};


// LOCK_BYP
struct LOCK_BYP_fields_ {

  enum class eLOCK_BYP : std::uint32_t {
    // PLL LOCK signal will gate TxByteClkHS clock
    eGATE = 0,
    // PLL LOCK signal will not gate TxByteClkHS clock, CIL based counter will be used to gate the TxByteClkHS
    eNOGATE = 1,
  };
  // DPHY LOCK_BYP input
  using LOCK_BYP = ftl::mmio::Field<1, 0, eLOCK_BYP, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LOCK_BYP_fields_

struct LOCK_BYP : ftl::mmio::Register<
    0x4080C334u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LOCK_BYP_fields_::LOCK_BYP,
    ftl::mmio::Reserved<31, 1>> {
  using eLOCK_BYP = LOCK_BYP_fields_::eLOCK_BYP;
  using value_ = LOCK_BYP_fields_::LOCK_BYP;
};


// TX_RCAL
struct TX_RCAL_fields_ {

  enum class eTX_RCAL : std::uint32_t {
    // 20% higher than mid-range. Highest impedance setting
    eTX_RCAL_0 = 0,
    // Mid-range impedance setting (default)
    eTX_RCAL_1 = 1,
    // 15% lower than mid-range
    eTX_RCAL_2 = 2,
    // 25% lower than mid-range. Lowest impedance setting
    eTX_RCAL_3 = 3,
  };
  // On-chip termination control bits for manual calibration of HS-TX
  using TX_RCAL = ftl::mmio::Field<2, 0, eTX_RCAL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TX_RCAL_fields_

struct TX_RCAL : ftl::mmio::Register<
    0x4080C338u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    TX_RCAL_fields_::TX_RCAL,
    ftl::mmio::Reserved<30, 2>> {
  using eTX_RCAL = TX_RCAL_fields_::eTX_RCAL;
  using value_ = TX_RCAL_fields_::TX_RCAL;
};


// AUTO_PD_EN
struct AUTO_PD_EN_fields_ {

  enum class eAUTO_PD_EN : std::uint32_t {
    // Inactive lanes are powered up and driving LP11
    ePWR_UP = 0,
    // inactive lanes are powered down
    ePWR_DWN = 1,
  };
  // DPHY AUTO_PD_EN input
  using AUTO_PD_EN = ftl::mmio::Field<1, 0, eAUTO_PD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct AUTO_PD_EN_fields_

struct AUTO_PD_EN : ftl::mmio::Register<
    0x4080C33Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    AUTO_PD_EN_fields_::AUTO_PD_EN,
    ftl::mmio::Reserved<31, 1>> {
  using eAUTO_PD_EN = AUTO_PD_EN_fields_::eAUTO_PD_EN;
  using value_ = AUTO_PD_EN_fields_::AUTO_PD_EN;
};


// RXLPRP
struct RXLPRP_fields_ {
  // DPHY RXLPRP input
  using RXLPRP = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RXLPRP_fields_

struct RXLPRP : ftl::mmio::Register<
    0x4080C340u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RXLPRP_fields_::RXLPRP,
    ftl::mmio::Reserved<30, 2>> {
  using value_ = RXLPRP_fields_::RXLPRP;
};


// RXCDRP
struct RXCDRP_fields_ {

  enum class eRXCDRP : std::uint32_t {
    // 344mV
    eRXCDRP_0 = 0,
    // 325mV (Default)
    eRXCDRP_1 = 1,
    // 307mV
    eRXCDRP_2 = 2,
    // Invalid
    eRXCDRP_3 = 3,
  };
  // DPHY RXCDRP input
  using RXCDRP = ftl::mmio::Field<2, 0, eRXCDRP, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RXCDRP_fields_

struct RXCDRP : ftl::mmio::Register<
    0x4080C344u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RXCDRP_fields_::RXCDRP,
    ftl::mmio::Reserved<30, 2>> {
  using eRXCDRP = RXCDRP_fields_::eRXCDRP;
  using value_ = RXCDRP_fields_::RXCDRP;
};

}  // namespace regs::dsi_host_dphy_intfc