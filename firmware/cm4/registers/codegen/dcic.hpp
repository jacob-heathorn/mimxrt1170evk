#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// DCIC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Dcic {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Dcic: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40819000u :
      Instance == 2u ? 0x4081A000u :
      0u;

  // DCIC Control Register
  struct DCIC1_DCICC_fields_ {
    enum class eIC_EN : std::uint32_t {
      // Disabled
      eIC_EN_0 = 0,
      // Enabled
      eIC_EN_1 = 1,
    };

    enum class eDE_POL : std::uint32_t {
      // Active High.
      eDE_POL_0 = 0,
      // Active Low.
      eDE_POL_1 = 1,
    };

    enum class eHSYNC_POL : std::uint32_t {
      // Active High.
      eHSYNC_POL_0 = 0,
      // Active Low.
      eHSYNC_POL_1 = 1,
    };

    enum class eVSYNC_POL : std::uint32_t {
      // Active High.
      eVSYNC_POL_0 = 0,
      // Active Low.
      eVSYNC_POL_1 = 1,
    };

    enum class eCLK_POL : std::uint32_t {
      // Not inverted (default).
      eCLK_POL_0 = 0,
      // Inverted.
      eCLK_POL_1 = 1,
    };

    // Integrity Check enable. Main enable switch.
    using IC_EN = ftl::mmio::Field<1, 0, eIC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DATA_EN_IN signal polarity.
    using DE_POL = ftl::mmio::Field<1, 4, eDE_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // HSYNC_IN signal polarity.
    using HSYNC_POL = ftl::mmio::Field<1, 5, eHSYNC_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // VSYNC_IN signal polarity.
    using VSYNC_POL = ftl::mmio::Field<1, 6, eVSYNC_POL, ftl::mmio::RW, ftl::mmio::Normal>;
    // DISP_CLK signal polarity.
    using CLK_POL = ftl::mmio::Field<1, 7, eCLK_POL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DCIC1_DCICC_fields_

  struct DCIC1_DCICC : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000070u,
      ftl::mmio::RW,
      typename DCIC1_DCICC_fields_::IC_EN,
      ftl::mmio::Reserved<3, 1>,
      typename DCIC1_DCICC_fields_::DE_POL,
      typename DCIC1_DCICC_fields_::HSYNC_POL,
      typename DCIC1_DCICC_fields_::VSYNC_POL,
      typename DCIC1_DCICC_fields_::CLK_POL,
      ftl::mmio::Reserved<24, 8>> {
    using eIC_EN = typename DCIC1_DCICC_fields_::eIC_EN;
    using eDE_POL = typename DCIC1_DCICC_fields_::eDE_POL;
    using eHSYNC_POL = typename DCIC1_DCICC_fields_::eHSYNC_POL;
    using eVSYNC_POL = typename DCIC1_DCICC_fields_::eVSYNC_POL;
    using eCLK_POL = typename DCIC1_DCICC_fields_::eCLK_POL;
    using IC_EN = typename DCIC1_DCICC_fields_::IC_EN;
    using DE_POL = typename DCIC1_DCICC_fields_::DE_POL;
    using HSYNC_POL = typename DCIC1_DCICC_fields_::HSYNC_POL;
    using VSYNC_POL = typename DCIC1_DCICC_fields_::VSYNC_POL;
    using CLK_POL = typename DCIC1_DCICC_fields_::CLK_POL;
  };

  // DCIC Interrupt Control Register
  struct DCIC1_DCICIC_fields_ {
    enum class eEI_MASK : std::uint32_t {
      // Mask disabled - Interrupt assertion enabled
      eEI_MASK_0 = 0,
      // Mask enabled - Interrupt assertion disabled
      eEI_MASK_1 = 1,
    };

    enum class eFI_MASK : std::uint32_t {
      // Mask disabled - Interrupt assertion enabled
      eFI_MASK_0 = 0,
      // Mask enabled - Interrupt assertion disabled
      eFI_MASK_1 = 1,
    };

    enum class eFREEZE_MASK : std::uint32_t {
      // Masks change allowed
      eFREEZE_MASK_0 = 0,
      // Masks are frozen
      eFREEZE_MASK_1 = 1,
    };

    enum class eEXT_SIG_EN : std::uint32_t {
      // Disabled
      eEXT_SIG_EN_0 = 0,
      // Enabled
      eEXT_SIG_EN_1 = 1,
    };

    // Error Interrupt mask. Can be changed only while FREEZE_MASK = 0.
    using EI_MASK = ftl::mmio::Field<1, 0, eEI_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Functional Interrupt mask. Can be changed only while FREEZE_MASK = 0.
    using FI_MASK = ftl::mmio::Field<1, 1, eFI_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable change of interrupt masks. "Sticky" bit which can be set once and cleared by reset only.
    using FREEZE_MASK = ftl::mmio::Field<1, 3, eFREEZE_MASK, ftl::mmio::RW, ftl::mmio::Normal>;
    // External controller mismatch indication signal.
    using EXT_SIG_EN = ftl::mmio::Field<1, 16, eEXT_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DCIC1_DCICIC_fields_

  struct DCIC1_DCICIC : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000003u,
      ftl::mmio::RW,
      typename DCIC1_DCICIC_fields_::EI_MASK,
      typename DCIC1_DCICIC_fields_::FI_MASK,
      ftl::mmio::Reserved<1, 2>,
      typename DCIC1_DCICIC_fields_::FREEZE_MASK,
      ftl::mmio::Reserved<12, 4>,
      typename DCIC1_DCICIC_fields_::EXT_SIG_EN,
      ftl::mmio::Reserved<15, 17>> {
    using eEI_MASK = typename DCIC1_DCICIC_fields_::eEI_MASK;
    using eFI_MASK = typename DCIC1_DCICIC_fields_::eFI_MASK;
    using eFREEZE_MASK = typename DCIC1_DCICIC_fields_::eFREEZE_MASK;
    using eEXT_SIG_EN = typename DCIC1_DCICIC_fields_::eEXT_SIG_EN;
    using EI_MASK = typename DCIC1_DCICIC_fields_::EI_MASK;
    using FI_MASK = typename DCIC1_DCICIC_fields_::FI_MASK;
    using FREEZE_MASK = typename DCIC1_DCICIC_fields_::FREEZE_MASK;
    using EXT_SIG_EN = typename DCIC1_DCICIC_fields_::EXT_SIG_EN;
  };

  // DCIC Status Register
  struct DCIC1_DCICS_fields_ {
    enum class eROI_MATCH_STAT : std::uint32_t {
      // ROI calculated CRC matches expected signature
      eROI_MATCH_STAT_0 = 0,
      // Mismatch at ROI calculated CRC
      eROI_MATCH_STAT_1 = 1,
    };

    enum class eEI_STAT : std::uint32_t {
      // No pending Interrupt
      eEI_STAT_0 = 0,
      // Pending Interrupt
      eEI_STAT_1 = 1,
    };

    enum class eFI_STAT : std::uint32_t {
      // No pending Interrupt
      eFI_STAT_0 = 0,
      // Pending Interrupt
      eFI_STAT_1 = 1,
    };

    // Each set bit of this field indicates there was a mismatch at the appropriate ROIs signature during the last frame
    using ROI_MATCH_STAT = ftl::mmio::Field<16, 0, eROI_MATCH_STAT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Error Interrupt status
    using EI_STAT = ftl::mmio::Field<1, 16, eEI_STAT, ftl::mmio::RO, ftl::mmio::Normal>;
    // Functional Interrupt status. Write "1" to clear.
    using FI_STAT = ftl::mmio::Field<1, 17, eFI_STAT, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct DCIC1_DCICS_fields_

  struct DCIC1_DCICS : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DCIC1_DCICS_fields_::ROI_MATCH_STAT,
      typename DCIC1_DCICS_fields_::EI_STAT,
      typename DCIC1_DCICS_fields_::FI_STAT,
      ftl::mmio::Reserved<14, 18>> {
    using eROI_MATCH_STAT = typename DCIC1_DCICS_fields_::eROI_MATCH_STAT;
    using eEI_STAT = typename DCIC1_DCICS_fields_::eEI_STAT;
    using eFI_STAT = typename DCIC1_DCICS_fields_::eFI_STAT;
    using ROI_MATCH_STAT = typename DCIC1_DCICS_fields_::ROI_MATCH_STAT;
    using EI_STAT = typename DCIC1_DCICS_fields_::EI_STAT;
    using FI_STAT = typename DCIC1_DCICS_fields_::FI_STAT;
  };

  // DCIC ROI Config Register
  struct DCICRC_fields_ {
    enum class eROI_FREEZE : std::uint32_t {
      // ROI configuration can be changed
      eROI_FREEZE_0 = 0,
      // ROI configuration is frozen
      eROI_FREEZE_1 = 1,
    };

    enum class eROI_EN : std::uint32_t {
      // Disabled
      eROI_EN_0 = 0,
      // Enabled
      eROI_EN_1 = 1,
    };

    // Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    using START_OFFSET_X = ftl::mmio::Field<13, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    using START_OFFSET_Y = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // When set, the only parameter of the ROI that can be changed is the reference signature
    using ROI_FREEZE = ftl::mmio::Field<1, 30, eROI_FREEZE, ftl::mmio::RW, ftl::mmio::Normal>;
    // ROI tracking enable
    using ROI_EN = ftl::mmio::Field<1, 31, eROI_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DCICRC_fields_

  template<std::uint32_t Index>
  struct DCICRC : ftl::mmio::Register<
      kBase + 0x10u + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DCICRC_fields_::START_OFFSET_X,
      ftl::mmio::Reserved<3, 13>,
      typename DCICRC_fields_::START_OFFSET_Y,
      ftl::mmio::Reserved<2, 28>,
      typename DCICRC_fields_::ROI_FREEZE,
      typename DCICRC_fields_::ROI_EN> {
    static_assert(Index < 16u, "DCICRC: Index out of range");
    using eROI_FREEZE = typename DCICRC_fields_::eROI_FREEZE;
    using eROI_EN = typename DCICRC_fields_::eROI_EN;
    using START_OFFSET_X = typename DCICRC_fields_::START_OFFSET_X;
    using START_OFFSET_Y = typename DCICRC_fields_::START_OFFSET_Y;
    using ROI_FREEZE = typename DCICRC_fields_::ROI_FREEZE;
    using ROI_EN = typename DCICRC_fields_::ROI_EN;
  };

  // DCIC ROI Size Register
  struct DCICRS_fields_ {
    // Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    using END_OFFSET_X = ftl::mmio::Field<13, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    using END_OFFSET_Y = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DCICRS_fields_

  template<std::uint32_t Index>
  struct DCICRS : ftl::mmio::Register<
      kBase + 0x14u + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DCICRS_fields_::END_OFFSET_X,
      ftl::mmio::Reserved<3, 13>,
      typename DCICRS_fields_::END_OFFSET_Y,
      ftl::mmio::Reserved<4, 28>> {
    static_assert(Index < 16u, "DCICRS: Index out of range");
    using END_OFFSET_X = typename DCICRS_fields_::END_OFFSET_X;
    using END_OFFSET_Y = typename DCICRS_fields_::END_OFFSET_Y;
  };

  // DCIC ROI Reference Signature Register
  struct DCICRRS_fields_ {
    // 32-bit expected signature (CRC calculation result) for the ROI
    using REFERENCE_SIGNATURE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DCICRRS_fields_

  template<std::uint32_t Index>
  struct DCICRRS : ftl::mmio::Register<
      kBase + 0x18u + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DCICRRS_fields_::REFERENCE_SIGNATURE> {
    static_assert(Index < 16u, "DCICRRS: Index out of range");
    using REFERENCE_SIGNATURE = typename DCICRRS_fields_::REFERENCE_SIGNATURE;
  };

  // DCIC ROI Calculated Signature Register
  struct DCICRCS_fields_ {
    // 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    using CALCULATED_SIGNATURE = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DCICRCS_fields_

  template<std::uint32_t Index>
  struct DCICRCS : ftl::mmio::Register<
      kBase + 0x1Cu + (Index * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename DCICRCS_fields_::CALCULATED_SIGNATURE> {
    static_assert(Index < 16u, "DCICRCS: Index out of range");
    using CALCULATED_SIGNATURE = typename DCICRCS_fields_::CALCULATED_SIGNATURE;
  };

};

}  // namespace regs