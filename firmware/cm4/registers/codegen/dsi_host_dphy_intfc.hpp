#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DSI HOST DPHY INTFC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct DsiHostDphyIntfc {
  // PD_TX
  struct PdTxFields {
    enum class ePD_TX : std::uint32_t {
      // Power Up
      ePD_TX_0 = 0,
      // Power Down
      ePD_TX_1 = 1,
    };

    // Power Down input for D-PHY
    using PD_TX = ftl::mmio::Field<1, 0, ePD_TX, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PdTxFields

  struct PD_TX : ftl::mmio::Register<
      0x4080C300u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PdTxFields::PD_TX,
      ftl::mmio::Reserved<31, 1>> {
    using ePD_TX = PdTxFields::ePD_TX;
    using VALUE = PdTxFields::PD_TX;
  };

  // M_PRG_HS_PREPARE
  struct MPrgHsPrepareFields {
    // DPHY m_PRG_HS_PREPARE input
    using M_PRG_HS_PREPARE = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MPrgHsPrepareFields

  struct M_PRG_HS_PREPARE : ftl::mmio::Register<
      0x4080C304u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MPrgHsPrepareFields::M_PRG_HS_PREPARE,
      ftl::mmio::Reserved<30, 2>> {
    using VALUE = MPrgHsPrepareFields::M_PRG_HS_PREPARE;
  };

  // MC_PRG_HS_PREPARE
  struct McPrgHsPrepareFields {
    // DPHY mc_PRG_HS_PREPARE input
    using MC_PRG_HS_PREPARE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McPrgHsPrepareFields

  struct MC_PRG_HS_PREPARE : ftl::mmio::Register<
      0x4080C308u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      McPrgHsPrepareFields::MC_PRG_HS_PREPARE,
      ftl::mmio::Reserved<31, 1>> {
    using VALUE = McPrgHsPrepareFields::MC_PRG_HS_PREPARE;
  };

  // M_PRG_HS_ZERO
  struct MPrgHsZeroFields {
    // DPHY m_PRG_HS_ZERO input
    using M_PRG_HS_ZERO = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MPrgHsZeroFields

  struct M_PRG_HS_ZERO : ftl::mmio::Register<
      0x4080C30Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MPrgHsZeroFields::M_PRG_HS_ZERO,
      ftl::mmio::Reserved<27, 5>> {
    using VALUE = MPrgHsZeroFields::M_PRG_HS_ZERO;
  };

  // MC_PRG_HS_ZERO
  struct McPrgHsZeroFields {
    // DPHY mc_PRG_HS_ZERO input
    using MC_PRG_HS_ZERO = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McPrgHsZeroFields

  struct MC_PRG_HS_ZERO : ftl::mmio::Register<
      0x4080C310u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      McPrgHsZeroFields::MC_PRG_HS_ZERO,
      ftl::mmio::Reserved<26, 6>> {
    using VALUE = McPrgHsZeroFields::MC_PRG_HS_ZERO;
  };

  // M_PRG_HS_TRAIL
  struct MPrgHsTrailFields {
    // DPHY m_PRG_HS_TRAIL input
    using M_PRG_HS_TRAIL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MPrgHsTrailFields

  struct M_PRG_HS_TRAIL : ftl::mmio::Register<
      0x4080C314u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MPrgHsTrailFields::M_PRG_HS_TRAIL,
      ftl::mmio::Reserved<28, 4>> {
    using VALUE = MPrgHsTrailFields::M_PRG_HS_TRAIL;
  };

  // MC_PRG_HS_TRAIL
  struct McPrgHsTrailFields {
    // DPHY mc_PRG_HS_TRAIL input
    using MC_PRG_HS_TRAIL = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct McPrgHsTrailFields

  struct MC_PRG_HS_TRAIL : ftl::mmio::Register<
      0x4080C318u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      McPrgHsTrailFields::MC_PRG_HS_TRAIL,
      ftl::mmio::Reserved<28, 4>> {
    using VALUE = McPrgHsTrailFields::MC_PRG_HS_TRAIL;
  };

  // PD_PLL
  struct PdPllFields {
    enum class ePD_PLL : std::uint32_t {
      // Power up PLL
      ePD_PLL_0 = 0,
      // Power down PLL
      ePD_PLL_1 = 1,
    };

    // Power-down signal
    using PD_PLL = ftl::mmio::Field<1, 0, ePD_PLL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PdPllFields

  struct PD_PLL : ftl::mmio::Register<
      0x4080C31Cu,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RW,
      PdPllFields::PD_PLL,
      ftl::mmio::Reserved<31, 1>> {
    using ePD_PLL = PdPllFields::ePD_PLL;
    using VALUE = PdPllFields::PD_PLL;
  };

  // TST
  struct TstFields {
    // Test
    using TST = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TstFields

  struct TST : ftl::mmio::Register<
      0x4080C320u,
      std::uint32_t,
      0x00000025u,
      ftl::mmio::RW,
      TstFields::TST,
      ftl::mmio::Reserved<26, 6>> {
    using VALUE = TstFields::TST;
  };

  // CN
  struct CnFields {
    // Control N divider
    using CN = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CnFields

  struct CN : ftl::mmio::Register<
      0x4080C324u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CnFields::CN,
      ftl::mmio::Reserved<27, 5>> {
    using VALUE = CnFields::CN;
  };

  // CM
  struct CmFields {
    // Control M divider
    using CM = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmFields

  struct CM : ftl::mmio::Register<
      0x4080C328u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CmFields::CM,
      ftl::mmio::Reserved<24, 8>> {
    using VALUE = CmFields::CM;
  };

  // CO
  struct CoFields {
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
  };  // struct CoFields

  struct CO : ftl::mmio::Register<
      0x4080C32Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CoFields::CO,
      ftl::mmio::Reserved<30, 2>> {
    using eCO = CoFields::eCO;
    using VALUE = CoFields::CO;
  };

  // LOCK
  struct LockFields {
    enum class eLOCK : std::uint32_t {
      // PLL not locked
      eLOCK_0 = 0,
      // PLL has achieved frequency lock
      eLOCK_1 = 1,
    };

    // Lock Detect output
    using LOCK = ftl::mmio::Field<1, 0, eLOCK, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LockFields

  struct LOCK : ftl::mmio::Register<
      0x4080C330u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      LockFields::LOCK,
      ftl::mmio::Reserved<31, 1>> {
    using eLOCK = LockFields::eLOCK;
    using VALUE = LockFields::LOCK;
  };

  // LOCK_BYP
  struct LockBypFields {
    enum class eLOCK_BYP : std::uint32_t {
      // PLL LOCK signal will gate TxByteClkHS clock
      eGATE = 0,
      // PLL LOCK signal will not gate TxByteClkHS clock, CIL based counter will be used to gate the TxByteClkHS
      eNOGATE = 1,
    };

    // DPHY LOCK_BYP input
    using LOCK_BYP = ftl::mmio::Field<1, 0, eLOCK_BYP, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LockBypFields

  struct LOCK_BYP : ftl::mmio::Register<
      0x4080C334u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LockBypFields::LOCK_BYP,
      ftl::mmio::Reserved<31, 1>> {
    using eLOCK_BYP = LockBypFields::eLOCK_BYP;
    using VALUE = LockBypFields::LOCK_BYP;
  };

  // TX_RCAL
  struct TxRcalFields {
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
  };  // struct TxRcalFields

  struct TX_RCAL : ftl::mmio::Register<
      0x4080C338u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TxRcalFields::TX_RCAL,
      ftl::mmio::Reserved<30, 2>> {
    using eTX_RCAL = TxRcalFields::eTX_RCAL;
    using VALUE = TxRcalFields::TX_RCAL;
  };

  // AUTO_PD_EN
  struct AutoPdEnFields {
    enum class eAUTO_PD_EN : std::uint32_t {
      // Inactive lanes are powered up and driving LP11
      ePWR_UP = 0,
      // inactive lanes are powered down
      ePWR_DWN = 1,
    };

    // DPHY AUTO_PD_EN input
    using AUTO_PD_EN = ftl::mmio::Field<1, 0, eAUTO_PD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AutoPdEnFields

  struct AUTO_PD_EN : ftl::mmio::Register<
      0x4080C33Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      AutoPdEnFields::AUTO_PD_EN,
      ftl::mmio::Reserved<31, 1>> {
    using eAUTO_PD_EN = AutoPdEnFields::eAUTO_PD_EN;
    using VALUE = AutoPdEnFields::AUTO_PD_EN;
  };

  // RXLPRP
  struct RxlprpFields {
    // DPHY RXLPRP input
    using RXLPRP = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RxlprpFields

  struct RXLPRP : ftl::mmio::Register<
      0x4080C340u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RxlprpFields::RXLPRP,
      ftl::mmio::Reserved<30, 2>> {
    using VALUE = RxlprpFields::RXLPRP;
  };

  // RXCDRP
  struct RxcdrpFields {
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
  };  // struct RxcdrpFields

  struct RXCDRP : ftl::mmio::Register<
      0x4080C344u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      RxcdrpFields::RXCDRP,
      ftl::mmio::Reserved<30, 2>> {
    using eRXCDRP = RxcdrpFields::eRXCDRP;
    using VALUE = RxcdrpFields::RXCDRP;
  };

};

}  // namespace regs