#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// FLEXRAM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Flexram {
  // TCM CRTL Register
  struct TcmCtrlFields {
    enum class eTCM_WWAIT_EN : std::uint32_t {
      // TCM write fast mode: Write RAM accesses are expected to be finished in 1-cycle.
      eTCM_WWAIT_EN_0 = 0,
      // TCM write wait mode: Write RAM accesses are expected to be finished in 2-cycles.
      eTCM_WWAIT_EN_1 = 1,
    };

    enum class eTCM_RWAIT_EN : std::uint32_t {
      // TCM read fast mode: Read RAM accesses are expected to be finished in 1-cycle.
      eTCM_RWAIT_EN_0 = 0,
      // TCM read wait mode: Read RAM accesses are expected to be finished in 2-cycles.
      eTCM_RWAIT_EN_1 = 1,
    };

    // TCM Write Wait Mode Enable
    using TCM_WWAIT_EN = ftl::mmio::Field<1, 0, eTCM_WWAIT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // TCM Read Wait Mode Enable
    using TCM_RWAIT_EN = ftl::mmio::Field<1, 1, eTCM_RWAIT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force RAM Clock Always On
    using FORCE_CLK_ON = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<29, 3, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct TcmCtrlFields

  struct TCM_CTRL : ftl::mmio::Register<
      0x40028000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      TcmCtrlFields::TCM_WWAIT_EN,
      TcmCtrlFields::TCM_RWAIT_EN,
      TcmCtrlFields::FORCE_CLK_ON,
      TcmCtrlFields::Reserved> {
    using eTCM_WWAIT_EN = TcmCtrlFields::eTCM_WWAIT_EN;
    using eTCM_RWAIT_EN = TcmCtrlFields::eTCM_RWAIT_EN;
    using TCM_WWAIT_EN = TcmCtrlFields::TCM_WWAIT_EN;
    using TCM_RWAIT_EN = TcmCtrlFields::TCM_RWAIT_EN;
    using FORCE_CLK_ON = TcmCtrlFields::FORCE_CLK_ON;
    using Reserved = TcmCtrlFields::Reserved;
  };

  // OCRAM Magic Address Register
  struct OcramMagicAddrFields {
    enum class eOCRAM_WR_RD_SEL : std::uint32_t {
      // When OCRAM read access hits magic address, it will generate interrupt.
      eOCRAM_WR_RD_SEL_0 = 0,
      // When OCRAM write access hits magic address, it will generate interrupt.
      eOCRAM_WR_RD_SEL_1 = 1,
    };

    // OCRAM Write Read Select
    using OCRAM_WR_RD_SEL = ftl::mmio::Field<1, 0, eOCRAM_WR_RD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Magic Address
    using OCRAM_MAGIC_ADDR = ftl::mmio::Field<17, 1, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramMagicAddrFields

  struct OCRAM_MAGIC_ADDR : ftl::mmio::Register<
      0x40028004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      OcramMagicAddrFields::OCRAM_WR_RD_SEL,
      OcramMagicAddrFields::OCRAM_MAGIC_ADDR,
      OcramMagicAddrFields::Reserved> {
    using eOCRAM_WR_RD_SEL = OcramMagicAddrFields::eOCRAM_WR_RD_SEL;
    using OCRAM_WR_RD_SEL = OcramMagicAddrFields::OCRAM_WR_RD_SEL;
    using VALUE = OcramMagicAddrFields::OCRAM_MAGIC_ADDR;
    using Reserved = OcramMagicAddrFields::Reserved;
  };

  // DTCM Magic Address Register
  struct DtcmMagicAddrFields {
    enum class eDTCM_WR_RD_SEL : std::uint32_t {
      // When DTCM read access hits magic address, it will generate interrupt.
      eDTCM_WR_RD_SEL_0 = 0,
      // When DTCM write access hits magic address, it will generate interrupt.
      eDTCM_WR_RD_SEL_1 = 1,
    };

    // DTCM Write Read Select
    using DTCM_WR_RD_SEL = ftl::mmio::Field<1, 0, eDTCM_WR_RD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // DTCM Magic Address
    using DTCM_MAGIC_ADDR = ftl::mmio::Field<16, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<15, 17, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DtcmMagicAddrFields

  struct DTCM_MAGIC_ADDR : ftl::mmio::Register<
      0x40028008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DtcmMagicAddrFields::DTCM_WR_RD_SEL,
      DtcmMagicAddrFields::DTCM_MAGIC_ADDR,
      DtcmMagicAddrFields::Reserved> {
    using eDTCM_WR_RD_SEL = DtcmMagicAddrFields::eDTCM_WR_RD_SEL;
    using DTCM_WR_RD_SEL = DtcmMagicAddrFields::DTCM_WR_RD_SEL;
    using VALUE = DtcmMagicAddrFields::DTCM_MAGIC_ADDR;
    using Reserved = DtcmMagicAddrFields::Reserved;
  };

  // ITCM Magic Address Register
  struct ItcmMagicAddrFields {
    enum class eITCM_WR_RD_SEL : std::uint32_t {
      // When ITCM read access hits magic address, it will generate interrupt.
      eITCM_WR_RD_SEL_0 = 0,
      // When ITCM write access hits magic address, it will generate interrupt.
      eITCM_WR_RD_SEL_1 = 1,
    };

    // ITCM Write Read Select
    using ITCM_WR_RD_SEL = ftl::mmio::Field<1, 0, eITCM_WR_RD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Magic Address
    using ITCM_MAGIC_ADDR = ftl::mmio::Field<16, 1, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<15, 17, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmMagicAddrFields

  struct ITCM_MAGIC_ADDR : ftl::mmio::Register<
      0x4002800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ItcmMagicAddrFields::ITCM_WR_RD_SEL,
      ItcmMagicAddrFields::ITCM_MAGIC_ADDR,
      ItcmMagicAddrFields::Reserved> {
    using eITCM_WR_RD_SEL = ItcmMagicAddrFields::eITCM_WR_RD_SEL;
    using ITCM_WR_RD_SEL = ItcmMagicAddrFields::ITCM_WR_RD_SEL;
    using VALUE = ItcmMagicAddrFields::ITCM_MAGIC_ADDR;
    using Reserved = ItcmMagicAddrFields::Reserved;
  };

  // Interrupt Status Register
  struct IntStatusFields {
    enum class eITCM_MAM_STATUS : std::uint32_t {
      // ITCM did not access magic address.
      eITCM_MAM_STATUS_0 = 0,
      // ITCM accessed magic address.
      eITCM_MAM_STATUS_1 = 1,
    };

    enum class eDTCM_MAM_STATUS : std::uint32_t {
      // DTCM did not access magic address.
      eDTCM_MAM_STATUS_0 = 0,
      // DTCM accessed magic address.
      eDTCM_MAM_STATUS_1 = 1,
    };

    enum class eOCRAM_MAM_STATUS : std::uint32_t {
      // OCRAM did not access magic address.
      eOCRAM_MAM_STATUS_0 = 0,
      // OCRAM accessed magic address.
      eOCRAM_MAM_STATUS_1 = 1,
    };

    enum class eITCM_ERR_STATUS : std::uint32_t {
      // ITCM access error does not happen
      eITCM_ERR_STATUS_0 = 0,
      // ITCM access error happens.
      eITCM_ERR_STATUS_1 = 1,
    };

    enum class eDTCM_ERR_STATUS : std::uint32_t {
      // DTCM access error does not happen
      eDTCM_ERR_STATUS_0 = 0,
      // DTCM access error happens.
      eDTCM_ERR_STATUS_1 = 1,
    };

    enum class eOCRAM_ERR_STATUS : std::uint32_t {
      // OCRAM access error does not happen
      eOCRAM_ERR_STATUS_0 = 0,
      // OCRAM access error happens.
      eOCRAM_ERR_STATUS_1 = 1,
    };

    enum class eOCRAM_ECC_ERRM_INT : std::uint32_t {
      // OCRAM multi-bit ECC error does not happen
      eOCRAM_ECC_ERRM_INT_0 = 0,
      // OCRAM multi-bit ECC error happens.
      eOCRAM_ECC_ERRM_INT_1 = 1,
    };

    enum class eOCRAM_ECC_ERRS_INT : std::uint32_t {
      // OCRAM single-bit ECC error does not happen
      eOCRAM_ECC_ERRS_INT_0 = 0,
      // OCRAM single-bit ECC error happens.
      eOCRAM_ECC_ERRS_INT_1 = 1,
    };

    enum class eITCM_ECC_ERRM_INT : std::uint32_t {
      // ITCM multi-bit ECC error does not happen
      eITCM_ECC_ERRM_INT_0 = 0,
      // ITCM multi-bit ECC error happens.
      eITCM_ECC_ERRM_INT_1 = 1,
    };

    enum class eITCM_ECC_ERRS_INT : std::uint32_t {
      // ITCM single-bit ECC error does not happen
      eITCM_ECC_ERRS_INT_0 = 0,
      // ITCM single-bit ECC error happens.
      eITCM_ECC_ERRS_INT_1 = 1,
    };

    enum class eD0TCM_ECC_ERRM_INT : std::uint32_t {
      // D0TCM multi-bit ECC error does not happen
      eD0TCM_ECC_ERRM_INT_0 = 0,
      // D0TCM multi-bit ECC error happens.
      eD0TCM_ECC_ERRM_INT_1 = 1,
    };

    enum class eD0TCM_ECC_ERRS_INT : std::uint32_t {
      // D0TCM single-bit ECC error does not happen
      eD0TCM_ECC_ERRS_INT_0 = 0,
      // D0TCM single-bit ECC error happens.
      eD0TCM_ECC_ERRS_INT_1 = 1,
    };

    enum class eD1TCM_ECC_ERRM_INT : std::uint32_t {
      // D1TCM multi-bit ECC error does not happen
      eD1TCM_ECC_ERRM_INT_0 = 0,
      // D1TCM multi-bit ECC error happens.
      eD1TCM_ECC_ERRM_INT_1 = 1,
    };

    enum class eD1TCM_ECC_ERRS_INT : std::uint32_t {
      // D1TCM single-bit ECC error does not happen
      eD1TCM_ECC_ERRS_INT_0 = 0,
      // D1TCM single-bit ECC error happens.
      eD1TCM_ECC_ERRS_INT_1 = 1,
    };

    enum class eITCM_PARTIAL_WR_INT_S : std::uint32_t {
      // ITCM Partial Write does not happen
      eITCM_PARTIAL_WR_INT_S_0 = 0,
      // ITCM Partial Write happens.
      eITCM_PARTIAL_WR_INT_S_1 = 1,
    };

    enum class eD0TCM_PARTIAL_WR_INT_S : std::uint32_t {
      // D0TCM Partial Write does not happen
      eD0TCM_PARTIAL_WR_INT_S_0 = 0,
      // D0TCM Partial Write happens.
      eD0TCM_PARTIAL_WR_INT_S_1 = 1,
    };

    enum class eD1TCM_PARTIAL_WR_INT_S : std::uint32_t {
      // D1TCM Partial Write does not happen
      eD1TCM_PARTIAL_WR_INT_S_0 = 0,
      // D1TCM Partial Write happens.
      eD1TCM_PARTIAL_WR_INT_S_1 = 1,
    };

    enum class eOCRAM_PARTIAL_WR_INT_S : std::uint32_t {
      // OCRAM Partial Write does not happen
      eOCRAM_PARTIAL_WR_INT_S_0 = 0,
      // OCRAM Partial Write happens.
      eOCRAM_PARTIAL_WR_INT_S_1 = 1,
    };

    // ITCM Magic Address Match Status
    using ITCM_MAM_STATUS = ftl::mmio::Field<1, 0, eITCM_MAM_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DTCM Magic Address Match Status
    using DTCM_MAM_STATUS = ftl::mmio::Field<1, 1, eDTCM_MAM_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Magic Address Match Status
    using OCRAM_MAM_STATUS = ftl::mmio::Field<1, 2, eOCRAM_MAM_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ITCM Access Error Status
    using ITCM_ERR_STATUS = ftl::mmio::Field<1, 3, eITCM_ERR_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DTCM Access Error Status
    using DTCM_ERR_STATUS = ftl::mmio::Field<1, 4, eDTCM_ERR_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Access Error Status
    using OCRAM_ERR_STATUS = ftl::mmio::Field<1, 5, eOCRAM_ERR_STATUS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM access multi-bit ECC Error Interrupt Status
    using OCRAM_ECC_ERRM_INT = ftl::mmio::Field<1, 6, eOCRAM_ECC_ERRM_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM access single-bit ECC Error Interrupt Status
    using OCRAM_ECC_ERRS_INT = ftl::mmio::Field<1, 7, eOCRAM_ECC_ERRS_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ITCM Access multi-bit ECC Error Interrupt Status
    using ITCM_ECC_ERRM_INT = ftl::mmio::Field<1, 8, eITCM_ECC_ERRM_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ITCM access single-bit ECC Error Interrupt Status
    using ITCM_ECC_ERRS_INT = ftl::mmio::Field<1, 9, eITCM_ECC_ERRS_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D0TCM access multi-bit ECC Error Interrupt Status
    using D0TCM_ECC_ERRM_INT = ftl::mmio::Field<1, 10, eD0TCM_ECC_ERRM_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D0TCM access single-bit ECC Error Interrupt Status
    using D0TCM_ECC_ERRS_INT = ftl::mmio::Field<1, 11, eD0TCM_ECC_ERRS_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D1TCM access multi-bit ECC Error Interrupt Status
    using D1TCM_ECC_ERRM_INT = ftl::mmio::Field<1, 12, eD1TCM_ECC_ERRM_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D1TCM access single-bit ECC Error Interrupt Status
    using D1TCM_ECC_ERRS_INT = ftl::mmio::Field<1, 13, eD1TCM_ECC_ERRS_INT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // ITCM Partial Write Interrupt Status
    using ITCM_PARTIAL_WR_INT_S = ftl::mmio::Field<1, 14, eITCM_PARTIAL_WR_INT_S, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D0TCM Partial Write Interrupt Status
    using D0TCM_PARTIAL_WR_INT_S = ftl::mmio::Field<1, 15, eD0TCM_PARTIAL_WR_INT_S, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // D1TCM Partial Write Interrupt Status
    using D1TCM_PARTIAL_WR_INT_S = ftl::mmio::Field<1, 16, eD1TCM_PARTIAL_WR_INT_S, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Partial Write Interrupt Status
    using OCRAM_PARTIAL_WR_INT_S = ftl::mmio::Field<1, 17, eOCRAM_PARTIAL_WR_INT_S, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reserved
    using Reserved = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IntStatusFields

  struct INT_STATUS : ftl::mmio::Register<
      0x40028010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntStatusFields::ITCM_MAM_STATUS,
      IntStatusFields::DTCM_MAM_STATUS,
      IntStatusFields::OCRAM_MAM_STATUS,
      IntStatusFields::ITCM_ERR_STATUS,
      IntStatusFields::DTCM_ERR_STATUS,
      IntStatusFields::OCRAM_ERR_STATUS,
      IntStatusFields::OCRAM_ECC_ERRM_INT,
      IntStatusFields::OCRAM_ECC_ERRS_INT,
      IntStatusFields::ITCM_ECC_ERRM_INT,
      IntStatusFields::ITCM_ECC_ERRS_INT,
      IntStatusFields::D0TCM_ECC_ERRM_INT,
      IntStatusFields::D0TCM_ECC_ERRS_INT,
      IntStatusFields::D1TCM_ECC_ERRM_INT,
      IntStatusFields::D1TCM_ECC_ERRS_INT,
      IntStatusFields::ITCM_PARTIAL_WR_INT_S,
      IntStatusFields::D0TCM_PARTIAL_WR_INT_S,
      IntStatusFields::D1TCM_PARTIAL_WR_INT_S,
      IntStatusFields::OCRAM_PARTIAL_WR_INT_S,
      IntStatusFields::Reserved> {
    using eITCM_MAM_STATUS = IntStatusFields::eITCM_MAM_STATUS;
    using eDTCM_MAM_STATUS = IntStatusFields::eDTCM_MAM_STATUS;
    using eOCRAM_MAM_STATUS = IntStatusFields::eOCRAM_MAM_STATUS;
    using eITCM_ERR_STATUS = IntStatusFields::eITCM_ERR_STATUS;
    using eDTCM_ERR_STATUS = IntStatusFields::eDTCM_ERR_STATUS;
    using eOCRAM_ERR_STATUS = IntStatusFields::eOCRAM_ERR_STATUS;
    using eOCRAM_ECC_ERRM_INT = IntStatusFields::eOCRAM_ECC_ERRM_INT;
    using eOCRAM_ECC_ERRS_INT = IntStatusFields::eOCRAM_ECC_ERRS_INT;
    using eITCM_ECC_ERRM_INT = IntStatusFields::eITCM_ECC_ERRM_INT;
    using eITCM_ECC_ERRS_INT = IntStatusFields::eITCM_ECC_ERRS_INT;
    using eD0TCM_ECC_ERRM_INT = IntStatusFields::eD0TCM_ECC_ERRM_INT;
    using eD0TCM_ECC_ERRS_INT = IntStatusFields::eD0TCM_ECC_ERRS_INT;
    using eD1TCM_ECC_ERRM_INT = IntStatusFields::eD1TCM_ECC_ERRM_INT;
    using eD1TCM_ECC_ERRS_INT = IntStatusFields::eD1TCM_ECC_ERRS_INT;
    using eITCM_PARTIAL_WR_INT_S = IntStatusFields::eITCM_PARTIAL_WR_INT_S;
    using eD0TCM_PARTIAL_WR_INT_S = IntStatusFields::eD0TCM_PARTIAL_WR_INT_S;
    using eD1TCM_PARTIAL_WR_INT_S = IntStatusFields::eD1TCM_PARTIAL_WR_INT_S;
    using eOCRAM_PARTIAL_WR_INT_S = IntStatusFields::eOCRAM_PARTIAL_WR_INT_S;
    using ITCM_MAM_STATUS = IntStatusFields::ITCM_MAM_STATUS;
    using DTCM_MAM_STATUS = IntStatusFields::DTCM_MAM_STATUS;
    using OCRAM_MAM_STATUS = IntStatusFields::OCRAM_MAM_STATUS;
    using ITCM_ERR_STATUS = IntStatusFields::ITCM_ERR_STATUS;
    using DTCM_ERR_STATUS = IntStatusFields::DTCM_ERR_STATUS;
    using OCRAM_ERR_STATUS = IntStatusFields::OCRAM_ERR_STATUS;
    using OCRAM_ECC_ERRM_INT = IntStatusFields::OCRAM_ECC_ERRM_INT;
    using OCRAM_ECC_ERRS_INT = IntStatusFields::OCRAM_ECC_ERRS_INT;
    using ITCM_ECC_ERRM_INT = IntStatusFields::ITCM_ECC_ERRM_INT;
    using ITCM_ECC_ERRS_INT = IntStatusFields::ITCM_ECC_ERRS_INT;
    using D0TCM_ECC_ERRM_INT = IntStatusFields::D0TCM_ECC_ERRM_INT;
    using D0TCM_ECC_ERRS_INT = IntStatusFields::D0TCM_ECC_ERRS_INT;
    using D1TCM_ECC_ERRM_INT = IntStatusFields::D1TCM_ECC_ERRM_INT;
    using D1TCM_ECC_ERRS_INT = IntStatusFields::D1TCM_ECC_ERRS_INT;
    using ITCM_PARTIAL_WR_INT_S = IntStatusFields::ITCM_PARTIAL_WR_INT_S;
    using D0TCM_PARTIAL_WR_INT_S = IntStatusFields::D0TCM_PARTIAL_WR_INT_S;
    using D1TCM_PARTIAL_WR_INT_S = IntStatusFields::D1TCM_PARTIAL_WR_INT_S;
    using OCRAM_PARTIAL_WR_INT_S = IntStatusFields::OCRAM_PARTIAL_WR_INT_S;
    using Reserved = IntStatusFields::Reserved;
  };

  // Interrupt Status Enable Register
  struct IntStatEnFields {
    enum class eITCM_MAM_STAT_EN : std::uint32_t {
      // Masked
      eITCM_MAM_STAT_EN_0 = 0,
      // Enabled
      eITCM_MAM_STAT_EN_1 = 1,
    };

    enum class eDTCM_MAM_STAT_EN : std::uint32_t {
      // Masked
      eDTCM_MAM_STAT_EN_0 = 0,
      // Enabled
      eDTCM_MAM_STAT_EN_1 = 1,
    };

    enum class eOCRAM_MAM_STAT_EN : std::uint32_t {
      // Masked
      eOCRAM_MAM_STAT_EN_0 = 0,
      // Enabled
      eOCRAM_MAM_STAT_EN_1 = 1,
    };

    enum class eITCM_ERR_STAT_EN : std::uint32_t {
      // Masked
      eITCM_ERR_STAT_EN_0 = 0,
      // Enabled
      eITCM_ERR_STAT_EN_1 = 1,
    };

    enum class eDTCM_ERR_STAT_EN : std::uint32_t {
      // Masked
      eDTCM_ERR_STAT_EN_0 = 0,
      // Enabled
      eDTCM_ERR_STAT_EN_1 = 1,
    };

    enum class eOCRAM_ERR_STAT_EN : std::uint32_t {
      // Masked
      eOCRAM_ERR_STAT_EN_0 = 0,
      // Enabled
      eOCRAM_ERR_STAT_EN_1 = 1,
    };

    enum class eOCRAM_ERRM_INT_EN : std::uint32_t {
      // Masked
      eOCRAM_ERRM_INT_EN_0 = 0,
      // Enabled
      eOCRAM_ERRM_INT_EN_1 = 1,
    };

    enum class eOCRAM_ERRS_INT_EN : std::uint32_t {
      // Masked
      eOCRAM_ERRS_INT_EN_0 = 0,
      // Enabled
      eOCRAM_ERRS_INT_EN_1 = 1,
    };

    enum class eITCM_ERRM_INT_EN : std::uint32_t {
      // Masked
      eITCM_ERRM_INT_EN_0 = 0,
      // Enabled
      eITCM_ERRM_INT_EN_1 = 1,
    };

    enum class eITCM_ERRS_INT_EN : std::uint32_t {
      // Masked
      eITCM_ERRS_INT_EN_0 = 0,
      // Enabled
      eITCM_ERRS_INT_EN_1 = 1,
    };

    enum class eD0TCM_ERRM_INT_EN : std::uint32_t {
      // Masked
      eD0TCM_ERRM_INT_EN_0 = 0,
      // Enabled
      eD0TCM_ERRM_INT_EN_1 = 1,
    };

    enum class eD0TCM_ERRS_INT_EN : std::uint32_t {
      // Masked
      eD0TCM_ERRS_INT_EN_0 = 0,
      // Enabled
      eD0TCM_ERRS_INT_EN_1 = 1,
    };

    enum class eD1TCM_ERRM_INT_EN : std::uint32_t {
      // Masked
      eD1TCM_ERRM_INT_EN_0 = 0,
      // Enabled
      eD1TCM_ERRM_INT_EN_1 = 1,
    };

    enum class eD1TCM_ERRS_INT_EN : std::uint32_t {
      // Masked
      eD1TCM_ERRS_INT_EN_0 = 0,
      // Enabled
      eD1TCM_ERRS_INT_EN_1 = 1,
    };

    enum class eITCM_PARTIAL_WR_INT_S_EN : std::uint32_t {
      // Masked
      eITCM_PARTIAL_WR_INT_S_EN_0 = 0,
      // Enabled
      eITCM_PARTIAL_WR_INT_S_EN_1 = 1,
    };

    enum class eD0TCM_PARTIAL_WR_INT_S_EN : std::uint32_t {
      // Masked
      eD0TCM_PARTIAL_WR_INT_S_EN_0 = 0,
      // Enabled
      eD0TCM_PARTIAL_WR_INT_S_EN_1 = 1,
    };

    enum class eD1TCM_PARTIAL_WR_INT_S_EN : std::uint32_t {
      // Masked
      eD1TCM_PARTIAL_WR_INT_S_EN_0 = 0,
      // Enbaled
      eD1TCM_PARTIAL_WR_INT_S_EN_1 = 1,
    };

    enum class eOCRAM_PARTIAL_WR_INT_S_EN : std::uint32_t {
      // Masked
      eOCRAM_PARTIAL_WR_INT_S_EN_0 = 0,
      // Enabled
      eOCRAM_PARTIAL_WR_INT_S_EN_1 = 1,
    };

    // ITCM Magic Address Match Status Enable
    using ITCM_MAM_STAT_EN = ftl::mmio::Field<1, 0, eITCM_MAM_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DTCM Magic Address Match Status Enable
    using DTCM_MAM_STAT_EN = ftl::mmio::Field<1, 1, eDTCM_MAM_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Magic Address Match Status Enable
    using OCRAM_MAM_STAT_EN = ftl::mmio::Field<1, 2, eOCRAM_MAM_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access Error Status Enable
    using ITCM_ERR_STAT_EN = ftl::mmio::Field<1, 3, eITCM_ERR_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DTCM Access Error Status Enable
    using DTCM_ERR_STAT_EN = ftl::mmio::Field<1, 4, eDTCM_ERR_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Status Enable
    using OCRAM_ERR_STAT_EN = ftl::mmio::Field<1, 5, eOCRAM_ERR_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access multi-bit ECC Error Interrupt Status Enable
    using OCRAM_ERRM_INT_EN = ftl::mmio::Field<1, 6, eOCRAM_ERRM_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access single-bit ECC Error Interrupt Status Enable
    using OCRAM_ERRS_INT_EN = ftl::mmio::Field<1, 7, eOCRAM_ERRS_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access multi-bit ECC Error Interrupt Status Enable
    using ITCM_ERRM_INT_EN = ftl::mmio::Field<1, 8, eITCM_ERRM_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access single-bit ECC Error Interrupt Status Enable
    using ITCM_ERRS_INT_EN = ftl::mmio::Field<1, 9, eITCM_ERRS_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Access multi-bit ECC Error Interrupt Status Enable
    using D0TCM_ERRM_INT_EN = ftl::mmio::Field<1, 10, eD0TCM_ERRM_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Access single-bit ECC Error Interrupt Status Enable
    using D0TCM_ERRS_INT_EN = ftl::mmio::Field<1, 11, eD0TCM_ERRS_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Access multi-bit ECC Error Interrupt Status Enable
    using D1TCM_ERRM_INT_EN = ftl::mmio::Field<1, 12, eD1TCM_ERRM_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Access single-bit ECC Error Interrupt Status Enable
    using D1TCM_ERRS_INT_EN = ftl::mmio::Field<1, 13, eD1TCM_ERRS_INT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Partial Write Interrupt Status Enable
    using ITCM_PARTIAL_WR_INT_S_EN = ftl::mmio::Field<1, 14, eITCM_PARTIAL_WR_INT_S_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Partial Write Interrupt Status Enable
    using D0TCM_PARTIAL_WR_INT_S_EN = ftl::mmio::Field<1, 15, eD0TCM_PARTIAL_WR_INT_S_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Partial Write Interrupt Status EN
    using D1TCM_PARTIAL_WR_INT_S_EN = ftl::mmio::Field<1, 16, eD1TCM_PARTIAL_WR_INT_S_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Partial Write Interrupt Status
    using OCRAM_PARTIAL_WR_INT_S_EN = ftl::mmio::Field<1, 17, eOCRAM_PARTIAL_WR_INT_S_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IntStatEnFields

  struct INT_STAT_EN : ftl::mmio::Register<
      0x40028014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntStatEnFields::ITCM_MAM_STAT_EN,
      IntStatEnFields::DTCM_MAM_STAT_EN,
      IntStatEnFields::OCRAM_MAM_STAT_EN,
      IntStatEnFields::ITCM_ERR_STAT_EN,
      IntStatEnFields::DTCM_ERR_STAT_EN,
      IntStatEnFields::OCRAM_ERR_STAT_EN,
      IntStatEnFields::OCRAM_ERRM_INT_EN,
      IntStatEnFields::OCRAM_ERRS_INT_EN,
      IntStatEnFields::ITCM_ERRM_INT_EN,
      IntStatEnFields::ITCM_ERRS_INT_EN,
      IntStatEnFields::D0TCM_ERRM_INT_EN,
      IntStatEnFields::D0TCM_ERRS_INT_EN,
      IntStatEnFields::D1TCM_ERRM_INT_EN,
      IntStatEnFields::D1TCM_ERRS_INT_EN,
      IntStatEnFields::ITCM_PARTIAL_WR_INT_S_EN,
      IntStatEnFields::D0TCM_PARTIAL_WR_INT_S_EN,
      IntStatEnFields::D1TCM_PARTIAL_WR_INT_S_EN,
      IntStatEnFields::OCRAM_PARTIAL_WR_INT_S_EN,
      IntStatEnFields::Reserved> {
    using eITCM_MAM_STAT_EN = IntStatEnFields::eITCM_MAM_STAT_EN;
    using eDTCM_MAM_STAT_EN = IntStatEnFields::eDTCM_MAM_STAT_EN;
    using eOCRAM_MAM_STAT_EN = IntStatEnFields::eOCRAM_MAM_STAT_EN;
    using eITCM_ERR_STAT_EN = IntStatEnFields::eITCM_ERR_STAT_EN;
    using eDTCM_ERR_STAT_EN = IntStatEnFields::eDTCM_ERR_STAT_EN;
    using eOCRAM_ERR_STAT_EN = IntStatEnFields::eOCRAM_ERR_STAT_EN;
    using eOCRAM_ERRM_INT_EN = IntStatEnFields::eOCRAM_ERRM_INT_EN;
    using eOCRAM_ERRS_INT_EN = IntStatEnFields::eOCRAM_ERRS_INT_EN;
    using eITCM_ERRM_INT_EN = IntStatEnFields::eITCM_ERRM_INT_EN;
    using eITCM_ERRS_INT_EN = IntStatEnFields::eITCM_ERRS_INT_EN;
    using eD0TCM_ERRM_INT_EN = IntStatEnFields::eD0TCM_ERRM_INT_EN;
    using eD0TCM_ERRS_INT_EN = IntStatEnFields::eD0TCM_ERRS_INT_EN;
    using eD1TCM_ERRM_INT_EN = IntStatEnFields::eD1TCM_ERRM_INT_EN;
    using eD1TCM_ERRS_INT_EN = IntStatEnFields::eD1TCM_ERRS_INT_EN;
    using eITCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::eITCM_PARTIAL_WR_INT_S_EN;
    using eD0TCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::eD0TCM_PARTIAL_WR_INT_S_EN;
    using eD1TCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::eD1TCM_PARTIAL_WR_INT_S_EN;
    using eOCRAM_PARTIAL_WR_INT_S_EN = IntStatEnFields::eOCRAM_PARTIAL_WR_INT_S_EN;
    using ITCM_MAM_STAT_EN = IntStatEnFields::ITCM_MAM_STAT_EN;
    using DTCM_MAM_STAT_EN = IntStatEnFields::DTCM_MAM_STAT_EN;
    using OCRAM_MAM_STAT_EN = IntStatEnFields::OCRAM_MAM_STAT_EN;
    using ITCM_ERR_STAT_EN = IntStatEnFields::ITCM_ERR_STAT_EN;
    using DTCM_ERR_STAT_EN = IntStatEnFields::DTCM_ERR_STAT_EN;
    using OCRAM_ERR_STAT_EN = IntStatEnFields::OCRAM_ERR_STAT_EN;
    using OCRAM_ERRM_INT_EN = IntStatEnFields::OCRAM_ERRM_INT_EN;
    using OCRAM_ERRS_INT_EN = IntStatEnFields::OCRAM_ERRS_INT_EN;
    using ITCM_ERRM_INT_EN = IntStatEnFields::ITCM_ERRM_INT_EN;
    using ITCM_ERRS_INT_EN = IntStatEnFields::ITCM_ERRS_INT_EN;
    using D0TCM_ERRM_INT_EN = IntStatEnFields::D0TCM_ERRM_INT_EN;
    using D0TCM_ERRS_INT_EN = IntStatEnFields::D0TCM_ERRS_INT_EN;
    using D1TCM_ERRM_INT_EN = IntStatEnFields::D1TCM_ERRM_INT_EN;
    using D1TCM_ERRS_INT_EN = IntStatEnFields::D1TCM_ERRS_INT_EN;
    using ITCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::ITCM_PARTIAL_WR_INT_S_EN;
    using D0TCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::D0TCM_PARTIAL_WR_INT_S_EN;
    using D1TCM_PARTIAL_WR_INT_S_EN = IntStatEnFields::D1TCM_PARTIAL_WR_INT_S_EN;
    using OCRAM_PARTIAL_WR_INT_S_EN = IntStatEnFields::OCRAM_PARTIAL_WR_INT_S_EN;
    using Reserved = IntStatEnFields::Reserved;
  };

  // Interrupt Enable Register
  struct IntSigEnFields {
    enum class eITCM_MAM_SIG_EN : std::uint32_t {
      // Masked
      eITCM_MAM_SIG_EN_0 = 0,
      // Enabled
      eITCM_MAM_SIG_EN_1 = 1,
    };

    enum class eDTCM_MAM_SIG_EN : std::uint32_t {
      // Masked
      eDTCM_MAM_SIG_EN_0 = 0,
      // Enabled
      eDTCM_MAM_SIG_EN_1 = 1,
    };

    enum class eOCRAM_MAM_SIG_EN : std::uint32_t {
      // Masked
      eOCRAM_MAM_SIG_EN_0 = 0,
      // Enabled
      eOCRAM_MAM_SIG_EN_1 = 1,
    };

    enum class eITCM_ERR_SIG_EN : std::uint32_t {
      // Masked
      eITCM_ERR_SIG_EN_0 = 0,
      // Enabled
      eITCM_ERR_SIG_EN_1 = 1,
    };

    enum class eDTCM_ERR_SIG_EN : std::uint32_t {
      // Masked
      eDTCM_ERR_SIG_EN_0 = 0,
      // Enabled
      eDTCM_ERR_SIG_EN_1 = 1,
    };

    enum class eOCRAM_ERR_SIG_EN : std::uint32_t {
      // Masked
      eOCRAM_ERR_SIG_EN_0 = 0,
      // Enabled
      eOCRAM_ERR_SIG_EN_1 = 1,
    };

    enum class eOCRAM_ERRM_INT_SIG_EN : std::uint32_t {
      // Masked
      eOCRAM_ERRM_INT_SIG_EN_0 = 0,
      // Enabled
      eOCRAM_ERRM_INT_SIG_EN_1 = 1,
    };

    enum class eOCRAM_ERRS_INT_SIG_EN : std::uint32_t {
      // Masked
      eOCRAM_ERRS_INT_SIG_EN_0 = 0,
      // Enabled
      eOCRAM_ERRS_INT_SIG_EN_1 = 1,
    };

    enum class eITCM_ERRM_INT_SIG_EN : std::uint32_t {
      // Masked
      eITCM_ERRM_INT_SIG_EN_0 = 0,
      // Enabled
      eITCM_ERRM_INT_SIG_EN_1 = 1,
    };

    enum class eITCM_ERRS_INT_SIG_EN : std::uint32_t {
      // Masked
      eITCM_ERRS_INT_SIG_EN_0 = 0,
      // Enabled
      eITCM_ERRS_INT_SIG_EN_1 = 1,
    };

    enum class eD0TCM_ERRM_INT_SIG_EN : std::uint32_t {
      // Masked
      eD0TCM_ERRM_INT_SIG_EN_0 = 0,
      // Enabled
      eD0TCM_ERRM_INT_SIG_EN_1 = 1,
    };

    enum class eD0TCM_ERRS_INT_SIG_EN : std::uint32_t {
      // Masked
      eD0TCM_ERRS_INT_SIG_EN_0 = 0,
      // Enabled
      eD0TCM_ERRS_INT_SIG_EN_1 = 1,
    };

    enum class eD1TCM_ERRM_INT_SIG_EN : std::uint32_t {
      // Masked
      eD1TCM_ERRM_INT_SIG_EN_0 = 0,
      // Enabled
      eD1TCM_ERRM_INT_SIG_EN_1 = 1,
    };

    enum class eD1TCM_ERRS_INT_SIG_EN : std::uint32_t {
      // Masked
      eD1TCM_ERRS_INT_SIG_EN_0 = 0,
      // Enabled
      eD1TCM_ERRS_INT_SIG_EN_1 = 1,
    };

    enum class eITCM_PARTIAL_WR_INT_SIG_EN : std::uint32_t {
      // Masked
      eITCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
      // Enabled
      eITCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
    };

    enum class eD0TCM_PARTIAL_WR_INT_SIG_EN : std::uint32_t {
      // Masked
      eD0TCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
      // Enabled
      eD0TCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
    };

    enum class eD1TCM_PARTIAL_WR_INT_SIG_EN : std::uint32_t {
      // Masked
      eD1TCM_PARTIAL_WR_INT_SIG_EN_0 = 0,
      // Enbaled
      eD1TCM_PARTIAL_WR_INT_SIG_EN_1 = 1,
    };

    enum class eOCRAM_PARTIAL_WR_INT_SIG_EN : std::uint32_t {
      // Masked
      eOCRAM_PARTIAL_WR_INT_SIG_EN_0 = 0,
      // Enabled
      eOCRAM_PARTIAL_WR_INT_SIG_EN_1 = 1,
    };

    // ITCM Magic Address Match Interrupt Enable
    using ITCM_MAM_SIG_EN = ftl::mmio::Field<1, 0, eITCM_MAM_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DTCM Magic Address Match Interrupt Enable
    using DTCM_MAM_SIG_EN = ftl::mmio::Field<1, 1, eDTCM_MAM_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Magic Address Match Interrupt Enable
    using OCRAM_MAM_SIG_EN = ftl::mmio::Field<1, 2, eOCRAM_MAM_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access Error Interrupt Enable
    using ITCM_ERR_SIG_EN = ftl::mmio::Field<1, 3, eITCM_ERR_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DTCM Access Error Interrupt Enable
    using DTCM_ERR_SIG_EN = ftl::mmio::Field<1, 4, eDTCM_ERR_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Interrupt Enable
    using OCRAM_ERR_SIG_EN = ftl::mmio::Field<1, 5, eOCRAM_ERR_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access multi-bit ECC Error Interrupt Signal Enable
    using OCRAM_ERRM_INT_SIG_EN = ftl::mmio::Field<1, 6, eOCRAM_ERRM_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access single-bit ECC Error Interrupt Signal Enable
    using OCRAM_ERRS_INT_SIG_EN = ftl::mmio::Field<1, 7, eOCRAM_ERRS_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access multi-bit ECC Error Interrupt Signal Enable
    using ITCM_ERRM_INT_SIG_EN = ftl::mmio::Field<1, 8, eITCM_ERRM_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Access single-bit ECC Error Interrupt Signal Enable
    using ITCM_ERRS_INT_SIG_EN = ftl::mmio::Field<1, 9, eITCM_ERRS_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Access multi-bit ECC Error Interrupt Signal Enable
    using D0TCM_ERRM_INT_SIG_EN = ftl::mmio::Field<1, 10, eD0TCM_ERRM_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Access single-bit ECC Error Interrupt Signal Enable
    using D0TCM_ERRS_INT_SIG_EN = ftl::mmio::Field<1, 11, eD0TCM_ERRS_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Access multi-bit ECC Error Interrupt Signal Enable
    using D1TCM_ERRM_INT_SIG_EN = ftl::mmio::Field<1, 12, eD1TCM_ERRM_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Access single-bit ECC Error Interrupt Signal Enable
    using D1TCM_ERRS_INT_SIG_EN = ftl::mmio::Field<1, 13, eD1TCM_ERRS_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ITCM Partial Write Interrupt Signal Enable Enable
    using ITCM_PARTIAL_WR_INT_SIG_EN = ftl::mmio::Field<1, 14, eITCM_PARTIAL_WR_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D0TCM Partial Write Interrupt Signal Enable Enable
    using D0TCM_PARTIAL_WR_INT_SIG_EN = ftl::mmio::Field<1, 15, eD0TCM_PARTIAL_WR_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // D1TCM Partial Write Interrupt Signal Enable EN
    using D1TCM_PARTIAL_WR_INT_SIG_EN = ftl::mmio::Field<1, 16, eD1TCM_PARTIAL_WR_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Partial Write Interrupt Signal Enable
    using OCRAM_PARTIAL_WR_INT_SIG_EN = ftl::mmio::Field<1, 17, eOCRAM_PARTIAL_WR_INT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<14, 18, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IntSigEnFields

  struct INT_SIG_EN : ftl::mmio::Register<
      0x40028018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      IntSigEnFields::ITCM_MAM_SIG_EN,
      IntSigEnFields::DTCM_MAM_SIG_EN,
      IntSigEnFields::OCRAM_MAM_SIG_EN,
      IntSigEnFields::ITCM_ERR_SIG_EN,
      IntSigEnFields::DTCM_ERR_SIG_EN,
      IntSigEnFields::OCRAM_ERR_SIG_EN,
      IntSigEnFields::OCRAM_ERRM_INT_SIG_EN,
      IntSigEnFields::OCRAM_ERRS_INT_SIG_EN,
      IntSigEnFields::ITCM_ERRM_INT_SIG_EN,
      IntSigEnFields::ITCM_ERRS_INT_SIG_EN,
      IntSigEnFields::D0TCM_ERRM_INT_SIG_EN,
      IntSigEnFields::D0TCM_ERRS_INT_SIG_EN,
      IntSigEnFields::D1TCM_ERRM_INT_SIG_EN,
      IntSigEnFields::D1TCM_ERRS_INT_SIG_EN,
      IntSigEnFields::ITCM_PARTIAL_WR_INT_SIG_EN,
      IntSigEnFields::D0TCM_PARTIAL_WR_INT_SIG_EN,
      IntSigEnFields::D1TCM_PARTIAL_WR_INT_SIG_EN,
      IntSigEnFields::OCRAM_PARTIAL_WR_INT_SIG_EN,
      IntSigEnFields::Reserved> {
    using eITCM_MAM_SIG_EN = IntSigEnFields::eITCM_MAM_SIG_EN;
    using eDTCM_MAM_SIG_EN = IntSigEnFields::eDTCM_MAM_SIG_EN;
    using eOCRAM_MAM_SIG_EN = IntSigEnFields::eOCRAM_MAM_SIG_EN;
    using eITCM_ERR_SIG_EN = IntSigEnFields::eITCM_ERR_SIG_EN;
    using eDTCM_ERR_SIG_EN = IntSigEnFields::eDTCM_ERR_SIG_EN;
    using eOCRAM_ERR_SIG_EN = IntSigEnFields::eOCRAM_ERR_SIG_EN;
    using eOCRAM_ERRM_INT_SIG_EN = IntSigEnFields::eOCRAM_ERRM_INT_SIG_EN;
    using eOCRAM_ERRS_INT_SIG_EN = IntSigEnFields::eOCRAM_ERRS_INT_SIG_EN;
    using eITCM_ERRM_INT_SIG_EN = IntSigEnFields::eITCM_ERRM_INT_SIG_EN;
    using eITCM_ERRS_INT_SIG_EN = IntSigEnFields::eITCM_ERRS_INT_SIG_EN;
    using eD0TCM_ERRM_INT_SIG_EN = IntSigEnFields::eD0TCM_ERRM_INT_SIG_EN;
    using eD0TCM_ERRS_INT_SIG_EN = IntSigEnFields::eD0TCM_ERRS_INT_SIG_EN;
    using eD1TCM_ERRM_INT_SIG_EN = IntSigEnFields::eD1TCM_ERRM_INT_SIG_EN;
    using eD1TCM_ERRS_INT_SIG_EN = IntSigEnFields::eD1TCM_ERRS_INT_SIG_EN;
    using eITCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::eITCM_PARTIAL_WR_INT_SIG_EN;
    using eD0TCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::eD0TCM_PARTIAL_WR_INT_SIG_EN;
    using eD1TCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::eD1TCM_PARTIAL_WR_INT_SIG_EN;
    using eOCRAM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::eOCRAM_PARTIAL_WR_INT_SIG_EN;
    using ITCM_MAM_SIG_EN = IntSigEnFields::ITCM_MAM_SIG_EN;
    using DTCM_MAM_SIG_EN = IntSigEnFields::DTCM_MAM_SIG_EN;
    using OCRAM_MAM_SIG_EN = IntSigEnFields::OCRAM_MAM_SIG_EN;
    using ITCM_ERR_SIG_EN = IntSigEnFields::ITCM_ERR_SIG_EN;
    using DTCM_ERR_SIG_EN = IntSigEnFields::DTCM_ERR_SIG_EN;
    using OCRAM_ERR_SIG_EN = IntSigEnFields::OCRAM_ERR_SIG_EN;
    using OCRAM_ERRM_INT_SIG_EN = IntSigEnFields::OCRAM_ERRM_INT_SIG_EN;
    using OCRAM_ERRS_INT_SIG_EN = IntSigEnFields::OCRAM_ERRS_INT_SIG_EN;
    using ITCM_ERRM_INT_SIG_EN = IntSigEnFields::ITCM_ERRM_INT_SIG_EN;
    using ITCM_ERRS_INT_SIG_EN = IntSigEnFields::ITCM_ERRS_INT_SIG_EN;
    using D0TCM_ERRM_INT_SIG_EN = IntSigEnFields::D0TCM_ERRM_INT_SIG_EN;
    using D0TCM_ERRS_INT_SIG_EN = IntSigEnFields::D0TCM_ERRS_INT_SIG_EN;
    using D1TCM_ERRM_INT_SIG_EN = IntSigEnFields::D1TCM_ERRM_INT_SIG_EN;
    using D1TCM_ERRS_INT_SIG_EN = IntSigEnFields::D1TCM_ERRS_INT_SIG_EN;
    using ITCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::ITCM_PARTIAL_WR_INT_SIG_EN;
    using D0TCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::D0TCM_PARTIAL_WR_INT_SIG_EN;
    using D1TCM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::D1TCM_PARTIAL_WR_INT_SIG_EN;
    using OCRAM_PARTIAL_WR_INT_SIG_EN = IntSigEnFields::OCRAM_PARTIAL_WR_INT_SIG_EN;
    using Reserved = IntSigEnFields::Reserved;
  };

  // OCRAM single-bit ECC Error Information Register
  struct OcramEccSingleErrorInfoFields {
    // corresponding ECC cipher of OCRAM single-bit ECC error
    using OCRAM_ECCS_ERRED_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // corresponding ECC syndrome of OCRAM single-bit ECC error
    using OCRAM_ECCS_ERRED_SYN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccSingleErrorInfoFields

  struct OCRAM_ECC_SINGLE_ERROR_INFO : ftl::mmio::Register<
      0x4002801Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccSingleErrorInfoFields::OCRAM_ECCS_ERRED_ECC,
      OcramEccSingleErrorInfoFields::OCRAM_ECCS_ERRED_SYN,
      OcramEccSingleErrorInfoFields::Reserved> {
    using OCRAM_ECCS_ERRED_ECC = OcramEccSingleErrorInfoFields::OCRAM_ECCS_ERRED_ECC;
    using OCRAM_ECCS_ERRED_SYN = OcramEccSingleErrorInfoFields::OCRAM_ECCS_ERRED_SYN;
    using Reserved = OcramEccSingleErrorInfoFields::Reserved;
  };

  // OCRAM single-bit ECC Error Address Register
  struct OcramEccSingleErrorAddrFields {
    // OCRAM single-bit ECC error address
    using OCRAM_ECCS_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccSingleErrorAddrFields

  struct OCRAM_ECC_SINGLE_ERROR_ADDR : ftl::mmio::Register<
      0x40028020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccSingleErrorAddrFields::OCRAM_ECCS_ERRED_ADDR> {
    using OCRAM_ECCS_ERRED_ADDR = OcramEccSingleErrorAddrFields::OCRAM_ECCS_ERRED_ADDR;
  };

  // OCRAM single-bit ECC Error Data Register
  struct OcramEccSingleErrorDataLsbFields {
    // OCRAM single-bit ECC error data [31:0]
    using OCRAM_ECCS_ERRED_DATA_LSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccSingleErrorDataLsbFields

  struct OCRAM_ECC_SINGLE_ERROR_DATA_LSB : ftl::mmio::Register<
      0x40028024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccSingleErrorDataLsbFields::OCRAM_ECCS_ERRED_DATA_LSB> {
    using OCRAM_ECCS_ERRED_DATA_LSB = OcramEccSingleErrorDataLsbFields::OCRAM_ECCS_ERRED_DATA_LSB;
  };

  // OCRAM single-bit ECC Error Data Register
  struct OcramEccSingleErrorDataMsbFields {
    // OCRAM single-bit ECC error data [63:32]
    using OCRAM_ECCS_ERRED_DATA_MSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccSingleErrorDataMsbFields

  struct OCRAM_ECC_SINGLE_ERROR_DATA_MSB : ftl::mmio::Register<
      0x40028028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccSingleErrorDataMsbFields::OCRAM_ECCS_ERRED_DATA_MSB> {
    using OCRAM_ECCS_ERRED_DATA_MSB = OcramEccSingleErrorDataMsbFields::OCRAM_ECCS_ERRED_DATA_MSB;
  };

  // OCRAM multi-bit ECC Error Information Register
  struct OcramEccMultiErrorInfoFields {
    // OCRAM multi-bit ECC error corresponding ECC value
    using OCRAM_ECCM_ERRED_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<24, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccMultiErrorInfoFields

  struct OCRAM_ECC_MULTI_ERROR_INFO : ftl::mmio::Register<
      0x4002802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccMultiErrorInfoFields::OCRAM_ECCM_ERRED_ECC,
      OcramEccMultiErrorInfoFields::Reserved> {
    using OCRAM_ECCM_ERRED_ECC = OcramEccMultiErrorInfoFields::OCRAM_ECCM_ERRED_ECC;
    using Reserved = OcramEccMultiErrorInfoFields::Reserved;
  };

  // OCRAM multi-bit ECC Error Address Register
  struct OcramEccMultiErrorAddrFields {
    // OCRAM multi-bit ECC error address
    using OCRAM_ECCM_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccMultiErrorAddrFields

  struct OCRAM_ECC_MULTI_ERROR_ADDR : ftl::mmio::Register<
      0x40028030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccMultiErrorAddrFields::OCRAM_ECCM_ERRED_ADDR> {
    using OCRAM_ECCM_ERRED_ADDR = OcramEccMultiErrorAddrFields::OCRAM_ECCM_ERRED_ADDR;
  };

  // OCRAM multi-bit ECC Error Data Register
  struct OcramEccMultiErrorDataLsbFields {
    // OCRAM multi-bit ECC error data [31:0]
    using OCRAM_ECCM_ERRED_DATA_LSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccMultiErrorDataLsbFields

  struct OCRAM_ECC_MULTI_ERROR_DATA_LSB : ftl::mmio::Register<
      0x40028034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccMultiErrorDataLsbFields::OCRAM_ECCM_ERRED_DATA_LSB> {
    using OCRAM_ECCM_ERRED_DATA_LSB = OcramEccMultiErrorDataLsbFields::OCRAM_ECCM_ERRED_DATA_LSB;
  };

  // OCRAM multi-bit ECC Error Data Register
  struct OcramEccMultiErrorDataMsbFields {
    // OCRAM multi-bit ECC error data [63:32]
    using OCRAM_ECCM_ERRED_DATA_MSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramEccMultiErrorDataMsbFields

  struct OCRAM_ECC_MULTI_ERROR_DATA_MSB : ftl::mmio::Register<
      0x40028038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramEccMultiErrorDataMsbFields::OCRAM_ECCM_ERRED_DATA_MSB> {
    using OCRAM_ECCM_ERRED_DATA_MSB = OcramEccMultiErrorDataMsbFields::OCRAM_ECCM_ERRED_DATA_MSB;
  };

  // ITCM single-bit ECC Error Information Register
  struct ItcmEccSingleErrorInfoFields {
    // ITCM single-bit ECC error corresponding TCM_WR value.
    using ITCM_ECCS_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM single-bit ECC error corresponding TCM size
    using ITCM_ECCS_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM single-bit ECC error corresponding TCM_MASTER.
    using ITCM_ECCS_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM single-bit ECC error corresponding TCM_PRIV.
    using ITCM_ECCS_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM single-bit ECC error corresponding syndrome
    using ITCM_ECCS_EFSYN = ftl::mmio::Field<8, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<12, 20, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccSingleErrorInfoFields

  struct ITCM_ECC_SINGLE_ERROR_INFO : ftl::mmio::Register<
      0x4002803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFW,
      ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFSIZ,
      ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFMST,
      ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFPRT,
      ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFSYN,
      ItcmEccSingleErrorInfoFields::Reserved> {
    using ITCM_ECCS_EFW = ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFW;
    using ITCM_ECCS_EFSIZ = ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFSIZ;
    using ITCM_ECCS_EFMST = ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFMST;
    using ITCM_ECCS_EFPRT = ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFPRT;
    using ITCM_ECCS_EFSYN = ItcmEccSingleErrorInfoFields::ITCM_ECCS_EFSYN;
    using Reserved = ItcmEccSingleErrorInfoFields::Reserved;
  };

  // ITCM single-bit ECC Error Address Register
  struct ItcmEccSingleErrorAddrFields {
    // ITCM single-bit ECC error address
    using ITCM_ECCS_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccSingleErrorAddrFields

  struct ITCM_ECC_SINGLE_ERROR_ADDR : ftl::mmio::Register<
      0x40028040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccSingleErrorAddrFields::ITCM_ECCS_ERRED_ADDR> {
    using ITCM_ECCS_ERRED_ADDR = ItcmEccSingleErrorAddrFields::ITCM_ECCS_ERRED_ADDR;
  };

  // ITCM single-bit ECC Error Data Register
  struct ItcmEccSingleErrorDataLsbFields {
    // ITCM single-bit ECC error data [31:0]
    using ITCM_ECCS_ERRED_DATA_LSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccSingleErrorDataLsbFields

  struct ITCM_ECC_SINGLE_ERROR_DATA_LSB : ftl::mmio::Register<
      0x40028044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccSingleErrorDataLsbFields::ITCM_ECCS_ERRED_DATA_LSB> {
    using ITCM_ECCS_ERRED_DATA_LSB = ItcmEccSingleErrorDataLsbFields::ITCM_ECCS_ERRED_DATA_LSB;
  };

  // ITCM single-bit ECC Error Data Register
  struct ItcmEccSingleErrorDataMsbFields {
    // ITCM single-bit ECC error data [63:32]
    using ITCM_ECCS_ERRED_DATA_MSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccSingleErrorDataMsbFields

  struct ITCM_ECC_SINGLE_ERROR_DATA_MSB : ftl::mmio::Register<
      0x40028048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccSingleErrorDataMsbFields::ITCM_ECCS_ERRED_DATA_MSB> {
    using ITCM_ECCS_ERRED_DATA_MSB = ItcmEccSingleErrorDataMsbFields::ITCM_ECCS_ERRED_DATA_MSB;
  };

  // ITCM multi-bit ECC Error Information Register
  struct ItcmEccMultiErrorInfoFields {
    // ITCM multi-bit ECC error corresponding TCM_WR value
    using ITCM_ECCM_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM multi-bit ECC error corresponding tcm access size
    using ITCM_ECCM_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM multi-bit ECC error corresponding TCM_MASTER
    using ITCM_ECCM_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM multi-bit ECC error corresponding TCM_PRIV
    using ITCM_ECCM_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ITCM multi-bit ECC error corresponding syndrome
    using ITCM_ECCM_EFSYN = ftl::mmio::Field<8, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<12, 20, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccMultiErrorInfoFields

  struct ITCM_ECC_MULTI_ERROR_INFO : ftl::mmio::Register<
      0x4002804Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFW,
      ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFSIZ,
      ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFMST,
      ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFPRT,
      ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFSYN,
      ItcmEccMultiErrorInfoFields::Reserved> {
    using ITCM_ECCM_EFW = ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFW;
    using ITCM_ECCM_EFSIZ = ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFSIZ;
    using ITCM_ECCM_EFMST = ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFMST;
    using ITCM_ECCM_EFPRT = ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFPRT;
    using ITCM_ECCM_EFSYN = ItcmEccMultiErrorInfoFields::ITCM_ECCM_EFSYN;
    using Reserved = ItcmEccMultiErrorInfoFields::Reserved;
  };

  // ITCM multi-bit ECC Error Address Register
  struct ItcmEccMultiErrorAddrFields {
    // ITCM multi-bit ECC error address
    using ITCM_ECCM_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccMultiErrorAddrFields

  struct ITCM_ECC_MULTI_ERROR_ADDR : ftl::mmio::Register<
      0x40028050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccMultiErrorAddrFields::ITCM_ECCM_ERRED_ADDR> {
    using ITCM_ECCM_ERRED_ADDR = ItcmEccMultiErrorAddrFields::ITCM_ECCM_ERRED_ADDR;
  };

  // ITCM multi-bit ECC Error Data Register
  struct ItcmEccMultiErrorDataLsbFields {
    // ITCM multi-bit ECC error data [31:0]
    using ITCM_ECCM_ERRED_DATA_LSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccMultiErrorDataLsbFields

  struct ITCM_ECC_MULTI_ERROR_DATA_LSB : ftl::mmio::Register<
      0x40028054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccMultiErrorDataLsbFields::ITCM_ECCM_ERRED_DATA_LSB> {
    using ITCM_ECCM_ERRED_DATA_LSB = ItcmEccMultiErrorDataLsbFields::ITCM_ECCM_ERRED_DATA_LSB;
  };

  // ITCM multi-bit ECC Error Data Register
  struct ItcmEccMultiErrorDataMsbFields {
    // ITCM multi-bit ECC error data [63:32]
    using ITCM_ECCM_ERRED_DATA_MSB = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ItcmEccMultiErrorDataMsbFields

  struct ITCM_ECC_MULTI_ERROR_DATA_MSB : ftl::mmio::Register<
      0x40028058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ItcmEccMultiErrorDataMsbFields::ITCM_ECCM_ERRED_DATA_MSB> {
    using ITCM_ECCM_ERRED_DATA_MSB = ItcmEccMultiErrorDataMsbFields::ITCM_ECCM_ERRED_DATA_MSB;
  };

  // D0TCM single-bit ECC Error Information Register
  struct D0tcmEccSingleErrorInfoFields {
    // D0TCM single-bit ECC error corresponding TCM_WR value
    using D0TCM_ECCS_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM single-bit ECC error corresponding tcm access size
    using D0TCM_ECCS_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM single-bit ECC error corresponding TCM_MASTER
    using D0TCM_ECCS_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM single-bit ECC error corresponding TCM_PRIV
    using D0TCM_ECCS_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM single-bit ECC error corresponding syndrome
    using D0TCM_ECCS_EFSYN = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<13, 19, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccSingleErrorInfoFields

  struct D0TCM_ECC_SINGLE_ERROR_INFO : ftl::mmio::Register<
      0x4002805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFW,
      D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFSIZ,
      D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFMST,
      D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFPRT,
      D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFSYN,
      D0tcmEccSingleErrorInfoFields::Reserved> {
    using D0TCM_ECCS_EFW = D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFW;
    using D0TCM_ECCS_EFSIZ = D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFSIZ;
    using D0TCM_ECCS_EFMST = D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFMST;
    using D0TCM_ECCS_EFPRT = D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFPRT;
    using D0TCM_ECCS_EFSYN = D0tcmEccSingleErrorInfoFields::D0TCM_ECCS_EFSYN;
    using Reserved = D0tcmEccSingleErrorInfoFields::Reserved;
  };

  // D0TCM single-bit ECC Error Address Register
  struct D0tcmEccSingleErrorAddrFields {
    // D0TCM single-bit ECC error address
    using D0TCM_ECCS_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccSingleErrorAddrFields

  struct D0TCM_ECC_SINGLE_ERROR_ADDR : ftl::mmio::Register<
      0x40028060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccSingleErrorAddrFields::D0TCM_ECCS_ERRED_ADDR> {
    using D0TCM_ECCS_ERRED_ADDR = D0tcmEccSingleErrorAddrFields::D0TCM_ECCS_ERRED_ADDR;
  };

  // D0TCM single-bit ECC Error Data Register
  struct D0tcmEccSingleErrorDataFields {
    // D0TCM single-bit ECC error data
    using D0TCM_ECCS_ERRED_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccSingleErrorDataFields

  struct D0TCM_ECC_SINGLE_ERROR_DATA : ftl::mmio::Register<
      0x40028064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccSingleErrorDataFields::D0TCM_ECCS_ERRED_DATA> {
    using D0TCM_ECCS_ERRED_DATA = D0tcmEccSingleErrorDataFields::D0TCM_ECCS_ERRED_DATA;
  };

  // D0TCM multi-bit ECC Error Information Register
  struct D0tcmEccMultiErrorInfoFields {
    // D0TCM multi-bit ECC error corresponding TCM_WR value
    using D0TCM_ECCM_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM multi-bit ECC error corresponding tcm access size
    using D0TCM_ECCM_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM multi-bit ECC error corresponding TCM_MASTER
    using D0TCM_ECCM_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM multi-bit ECC error corresponding TCM_PRIV
    using D0TCM_ECCM_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D0TCM multi-bit ECC error corresponding syndrome
    using D0TCM_ECCM_EFSYN = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<13, 19, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccMultiErrorInfoFields

  struct D0TCM_ECC_MULTI_ERROR_INFO : ftl::mmio::Register<
      0x40028068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFW,
      D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFSIZ,
      D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFMST,
      D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFPRT,
      D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFSYN,
      D0tcmEccMultiErrorInfoFields::Reserved> {
    using D0TCM_ECCM_EFW = D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFW;
    using D0TCM_ECCM_EFSIZ = D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFSIZ;
    using D0TCM_ECCM_EFMST = D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFMST;
    using D0TCM_ECCM_EFPRT = D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFPRT;
    using D0TCM_ECCM_EFSYN = D0tcmEccMultiErrorInfoFields::D0TCM_ECCM_EFSYN;
    using Reserved = D0tcmEccMultiErrorInfoFields::Reserved;
  };

  // D0TCM multi-bit ECC Error Address Register
  struct D0tcmEccMultiErrorAddrFields {
    // D0TCM multi-bit ECC error address
    using D0TCM_ECCM_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccMultiErrorAddrFields

  struct D0TCM_ECC_MULTI_ERROR_ADDR : ftl::mmio::Register<
      0x4002806Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccMultiErrorAddrFields::D0TCM_ECCM_ERRED_ADDR> {
    using D0TCM_ECCM_ERRED_ADDR = D0tcmEccMultiErrorAddrFields::D0TCM_ECCM_ERRED_ADDR;
  };

  // D0TCM multi-bit ECC Error Data Register
  struct D0tcmEccMultiErrorDataFields {
    // D0TCM multi-bit ECC error data
    using D0TCM_ECCM_ERRED_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D0tcmEccMultiErrorDataFields

  struct D0TCM_ECC_MULTI_ERROR_DATA : ftl::mmio::Register<
      0x40028070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D0tcmEccMultiErrorDataFields::D0TCM_ECCM_ERRED_DATA> {
    using D0TCM_ECCM_ERRED_DATA = D0tcmEccMultiErrorDataFields::D0TCM_ECCM_ERRED_DATA;
  };

  // D1TCM single-bit ECC Error Information Register
  struct D1tcmEccSingleErrorInfoFields {
    // D1TCM single-bit ECC error corresponding TCM_WR value
    using D1TCM_ECCS_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM single-bit ECC error corresponding tcm access size
    using D1TCM_ECCS_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM single-bit ECC error corresponding TCM_MASTER
    using D1TCM_ECCS_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM single-bit ECC error corresponding TCM_PRIV
    using D1TCM_ECCS_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM single-bit ECC error corresponding syndrome
    using D1TCM_ECCS_EFSYN = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<13, 19, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccSingleErrorInfoFields

  struct D1TCM_ECC_SINGLE_ERROR_INFO : ftl::mmio::Register<
      0x40028074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFW,
      D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFSIZ,
      D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFMST,
      D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFPRT,
      D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFSYN,
      D1tcmEccSingleErrorInfoFields::Reserved> {
    using D1TCM_ECCS_EFW = D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFW;
    using D1TCM_ECCS_EFSIZ = D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFSIZ;
    using D1TCM_ECCS_EFMST = D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFMST;
    using D1TCM_ECCS_EFPRT = D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFPRT;
    using D1TCM_ECCS_EFSYN = D1tcmEccSingleErrorInfoFields::D1TCM_ECCS_EFSYN;
    using Reserved = D1tcmEccSingleErrorInfoFields::Reserved;
  };

  // D1TCM single-bit ECC Error Address Register
  struct D1tcmEccSingleErrorAddrFields {
    // D1TCM single-bit ECC error address
    using D1TCM_ECCS_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccSingleErrorAddrFields

  struct D1TCM_ECC_SINGLE_ERROR_ADDR : ftl::mmio::Register<
      0x40028078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccSingleErrorAddrFields::D1TCM_ECCS_ERRED_ADDR> {
    using D1TCM_ECCS_ERRED_ADDR = D1tcmEccSingleErrorAddrFields::D1TCM_ECCS_ERRED_ADDR;
  };

  // D1TCM single-bit ECC Error Data Register
  struct D1tcmEccSingleErrorDataFields {
    // D1TCM single-bit ECC error data
    using D1TCM_ECCS_ERRED_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccSingleErrorDataFields

  struct D1TCM_ECC_SINGLE_ERROR_DATA : ftl::mmio::Register<
      0x4002807Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccSingleErrorDataFields::D1TCM_ECCS_ERRED_DATA> {
    using D1TCM_ECCS_ERRED_DATA = D1tcmEccSingleErrorDataFields::D1TCM_ECCS_ERRED_DATA;
  };

  // D1TCM multi-bit ECC Error Information Register
  struct D1tcmEccMultiErrorInfoFields {
    // D1TCM multi-bit ECC error corresponding TCM_WR value
    using D1TCM_ECCM_EFW = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM multi-bit ECC error corresponding tcm access size
    using D1TCM_ECCM_EFSIZ = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM multi-bit ECC error corresponding TCM_MASTER
    using D1TCM_ECCM_EFMST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM multi-bit ECC error corresponding TCM_PRIV
    using D1TCM_ECCM_EFPRT = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // D1TCM multi-bit ECC error corresponding syndrome
    using D1TCM_ECCM_EFSYN = ftl::mmio::Field<7, 12, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<13, 19, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccMultiErrorInfoFields

  struct D1TCM_ECC_MULTI_ERROR_INFO : ftl::mmio::Register<
      0x40028080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFW,
      D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFSIZ,
      D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFMST,
      D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFPRT,
      D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFSYN,
      D1tcmEccMultiErrorInfoFields::Reserved> {
    using D1TCM_ECCM_EFW = D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFW;
    using D1TCM_ECCM_EFSIZ = D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFSIZ;
    using D1TCM_ECCM_EFMST = D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFMST;
    using D1TCM_ECCM_EFPRT = D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFPRT;
    using D1TCM_ECCM_EFSYN = D1tcmEccMultiErrorInfoFields::D1TCM_ECCM_EFSYN;
    using Reserved = D1tcmEccMultiErrorInfoFields::Reserved;
  };

  // D1TCM multi-bit ECC Error Address Register
  struct D1tcmEccMultiErrorAddrFields {
    // D1TCM multi-bit ECC error address
    using D1TCM_ECCM_ERRED_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccMultiErrorAddrFields

  struct D1TCM_ECC_MULTI_ERROR_ADDR : ftl::mmio::Register<
      0x40028084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccMultiErrorAddrFields::D1TCM_ECCM_ERRED_ADDR> {
    using D1TCM_ECCM_ERRED_ADDR = D1tcmEccMultiErrorAddrFields::D1TCM_ECCM_ERRED_ADDR;
  };

  // D1TCM multi-bit ECC Error Data Register
  struct D1tcmEccMultiErrorDataFields {
    // D1TCM multi-bit ECC error data
    using D1TCM_ECCM_ERRED_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct D1tcmEccMultiErrorDataFields

  struct D1TCM_ECC_MULTI_ERROR_DATA : ftl::mmio::Register<
      0x40028088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      D1tcmEccMultiErrorDataFields::D1TCM_ECCM_ERRED_DATA> {
    using D1TCM_ECCM_ERRED_DATA = D1tcmEccMultiErrorDataFields::D1TCM_ECCM_ERRED_DATA;
  };

  // FlexRAM feature Control register
  struct FlexramCtrlFields {
    // Read Data Wait Enable
    using OCRAM_RDATA_WAIT_EN = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Address Pipeline Enable
    using OCRAM_RADDR_PIPELINE_EN = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data Pipeline Enable
    using OCRAM_WRDATA_PIPELINE_EN = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Address Pipeline Enable
    using OCRAM_WRADDR_PIPELINE_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM ECC enable
    using OCRAM_ECC_EN = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // TCM ECC enable
    using TCM_ECC_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<26, 6, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct FlexramCtrlFields

  struct FLEXRAM_CTRL : ftl::mmio::Register<
      0x40028108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      FlexramCtrlFields::OCRAM_RDATA_WAIT_EN,
      FlexramCtrlFields::OCRAM_RADDR_PIPELINE_EN,
      FlexramCtrlFields::OCRAM_WRDATA_PIPELINE_EN,
      FlexramCtrlFields::OCRAM_WRADDR_PIPELINE_EN,
      FlexramCtrlFields::OCRAM_ECC_EN,
      FlexramCtrlFields::TCM_ECC_EN,
      FlexramCtrlFields::Reserved> {
    using OCRAM_RDATA_WAIT_EN = FlexramCtrlFields::OCRAM_RDATA_WAIT_EN;
    using OCRAM_RADDR_PIPELINE_EN = FlexramCtrlFields::OCRAM_RADDR_PIPELINE_EN;
    using OCRAM_WRDATA_PIPELINE_EN = FlexramCtrlFields::OCRAM_WRDATA_PIPELINE_EN;
    using OCRAM_WRADDR_PIPELINE_EN = FlexramCtrlFields::OCRAM_WRADDR_PIPELINE_EN;
    using OCRAM_ECC_EN = FlexramCtrlFields::OCRAM_ECC_EN;
    using TCM_ECC_EN = FlexramCtrlFields::TCM_ECC_EN;
    using Reserved = FlexramCtrlFields::Reserved;
  };

  // OCRAM Pipeline Status register
  struct OcramPipelineStatusFields {
    // Read Data Wait Enable Pending
    using OCRAM_RDATA_WAIT_EN_UPDATA_PENDING = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read Address Pipeline Enable Pending
    using OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Data Pipeline Enable Pending
    using OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Address Pipeline Enable Pending
    using OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved = ftl::mmio::Field<28, 4, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct OcramPipelineStatusFields

  struct OCRAM_PIPELINE_STATUS : ftl::mmio::Register<
      0x4002810Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      OcramPipelineStatusFields::OCRAM_RDATA_WAIT_EN_UPDATA_PENDING,
      OcramPipelineStatusFields::OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING,
      OcramPipelineStatusFields::OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING,
      OcramPipelineStatusFields::OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING,
      OcramPipelineStatusFields::Reserved> {
    using OCRAM_RDATA_WAIT_EN_UPDATA_PENDING = OcramPipelineStatusFields::OCRAM_RDATA_WAIT_EN_UPDATA_PENDING;
    using OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING = OcramPipelineStatusFields::OCRAM_RADDR_PIPELINE_EN_UPDATA_PENDING;
    using OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING = OcramPipelineStatusFields::OCRAM_WRDATA_PIPELINE_EN_UPDATA_PENDING;
    using OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING = OcramPipelineStatusFields::OCRAM_WRADDR_PIPELINE_EN_UPDATA_PENDING;
    using Reserved = OcramPipelineStatusFields::Reserved;
  };

};

}  // namespace regs