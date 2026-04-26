#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MECC64
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Mecc {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Mecc: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40014000u :
      Instance == 2u ? 0x40018000u :
      0u;

  // Error Interrupt Status Register
  struct ErrStatusFields {
    enum class eSINGLE_ERR0 : std::uint32_t {
      // Single bit error does not happen on OCRAM bank0.
      eSINGLE_ERR0_0 = 0,
      // Single bit error happens on OCRAM bank0.
      eSINGLE_ERR0_1 = 1,
    };

    enum class eSINGLE_ERR1 : std::uint32_t {
      // Single bit error does not happen on OCRAM bank1.
      eSINGLE_ERR1_0 = 0,
      // Single bit error happens on OCRAM bank1.
      eSINGLE_ERR1_1 = 1,
    };

    enum class eSINGLE_ERR2 : std::uint32_t {
      // Single bit error does not happen on OCRAM bank2.
      eSINGLE_ERR2_0 = 0,
      // Single bit error happens on OCRAM bank2.
      eSINGLE_ERR2_1 = 1,
    };

    enum class eSINGLE_ERR3 : std::uint32_t {
      // Single bit error does not happen on OCRAM bank3.
      eSINGLE_ERR3_0 = 0,
      // Single bit error happens on OCRAM bank3.
      eSINGLE_ERR3_1 = 1,
    };

    enum class eMULTI_ERR0 : std::uint32_t {
      // Multiple bits error does not happen on OCRAM bank0.
      eMULTI_ERR0_0 = 0,
      // Multiple bits error happens on OCRAM bank0.
      eMULTI_ERR0_1 = 1,
    };

    enum class eMULTI_ERR1 : std::uint32_t {
      // Multiple bits error does not happen on OCRAM bank1.
      eMULTI_ERR1_0 = 0,
      // Multiple bits error happens on OCRAM bank1.
      eMULTI_ERR1_1 = 1,
    };

    enum class eMULTI_ERR2 : std::uint32_t {
      // Multiple bits error does not happen on OCRAM bank2.
      eMULTI_ERR2_0 = 0,
      // Multiple bits error happens on OCRAM bank2.
      eMULTI_ERR2_1 = 1,
    };

    enum class eMULTI_ERR3 : std::uint32_t {
      // Multiple bits error does not happen on OCRAM bank3.
      eMULTI_ERR3_0 = 0,
      // Multiple bits error happens on OCRAM bank3.
      eMULTI_ERR3_1 = 1,
    };

    enum class eSTRB_ERR0 : std::uint32_t {
      // AXI strobe error does not happen on OCRAM bank0.
      eSTRB_ERR0_0 = 0,
      // AXI strobe error happens on OCRAM bank0.
      eSTRB_ERR0_1 = 1,
    };

    enum class eSTRB_ERR1 : std::uint32_t {
      // AXI strobe error does not happen on OCRAM bank1.
      eSTRB_ERR1_0 = 0,
      // AXI strobe error happens on OCRAM bank1.
      eSTRB_ERR1_1 = 1,
    };

    enum class eSTRB_ERR2 : std::uint32_t {
      // AXI strobe error does not happen on OCRAM bank2.
      eSTRB_ERR2_0 = 0,
      // AXI strobe error happens on OCRAM bank2.
      eSTRB_ERR2_1 = 1,
    };

    enum class eSTRB_ERR3 : std::uint32_t {
      // AXI strobe error does not happen on OCRAM bank3.
      eSTRB_ERR3_0 = 0,
      // AXI strobe error happens on OCRAM bank3.
      eSTRB_ERR3_1 = 1,
    };

    enum class eADDR_ERR0 : std::uint32_t {
      // OCRAM access error does not happen on OCRAM bank0.
      eADDR_ERR0_0 = 0,
      // OCRAM access error happens on OCRAM bank0.
      eADDR_ERR0_1 = 1,
    };

    enum class eADDR_ERR1 : std::uint32_t {
      // OCRAM access error does not happen on OCRAM bank1.
      eADDR_ERR1_0 = 0,
      // OCRAM access error happens on OCRAM bank1.
      eADDR_ERR1_1 = 1,
    };

    enum class eADDR_ERR2 : std::uint32_t {
      // OCRAM access error does not happen on OCRAM bank2.
      eADDR_ERR2_0 = 0,
      // OCRAM access error happens on OCRAM bank2.
      eADDR_ERR2_1 = 1,
    };

    enum class eADDR_ERR3 : std::uint32_t {
      // OCRAM access error does not happen on OCRAM bank3.
      eADDR_ERR3_0 = 0,
      // OCRAM access error happens on OCRAM bank3.
      eADDR_ERR3_1 = 1,
    };

    // Single Bit Error On OCRAM Bank0
    using SINGLE_ERR0 = ftl::mmio::Field<1, 0, eSINGLE_ERR0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Single Bit Error On OCRAM Bank1
    using SINGLE_ERR1 = ftl::mmio::Field<1, 1, eSINGLE_ERR1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Single Bit Error On OCRAM Bank2
    using SINGLE_ERR2 = ftl::mmio::Field<1, 2, eSINGLE_ERR2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Single Bit Error On OCRAM Bank3
    using SINGLE_ERR3 = ftl::mmio::Field<1, 3, eSINGLE_ERR3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Multiple Bits Error On OCRAM Bank0
    using MULTI_ERR0 = ftl::mmio::Field<1, 4, eMULTI_ERR0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Multiple Bits Error On OCRAM Bank1
    using MULTI_ERR1 = ftl::mmio::Field<1, 5, eMULTI_ERR1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Multiple Bits Error On OCRAM Bank2
    using MULTI_ERR2 = ftl::mmio::Field<1, 6, eMULTI_ERR2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Multiple Bits Error On OCRAM Bank3
    using MULTI_ERR3 = ftl::mmio::Field<1, 7, eMULTI_ERR3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI Strobe Error On OCRAM Bank0
    using STRB_ERR0 = ftl::mmio::Field<1, 8, eSTRB_ERR0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI Strobe Error On OCRAM Bank1
    using STRB_ERR1 = ftl::mmio::Field<1, 9, eSTRB_ERR1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI Strobe Error On OCRAM Bank2
    using STRB_ERR2 = ftl::mmio::Field<1, 10, eSTRB_ERR2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // AXI Strobe Error On OCRAM Bank3
    using STRB_ERR3 = ftl::mmio::Field<1, 11, eSTRB_ERR3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Access Error On Bank0
    using ADDR_ERR0 = ftl::mmio::Field<1, 12, eADDR_ERR0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Access Error On Bank1
    using ADDR_ERR1 = ftl::mmio::Field<1, 13, eADDR_ERR1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Access Error On Bank2
    using ADDR_ERR2 = ftl::mmio::Field<1, 14, eADDR_ERR2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OCRAM Access Error On Bank3
    using ADDR_ERR3 = ftl::mmio::Field<1, 15, eADDR_ERR3, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct ErrStatusFields

  struct ERR_STATUS : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrStatusFields::SINGLE_ERR0,
      typename ErrStatusFields::SINGLE_ERR1,
      typename ErrStatusFields::SINGLE_ERR2,
      typename ErrStatusFields::SINGLE_ERR3,
      typename ErrStatusFields::MULTI_ERR0,
      typename ErrStatusFields::MULTI_ERR1,
      typename ErrStatusFields::MULTI_ERR2,
      typename ErrStatusFields::MULTI_ERR3,
      typename ErrStatusFields::STRB_ERR0,
      typename ErrStatusFields::STRB_ERR1,
      typename ErrStatusFields::STRB_ERR2,
      typename ErrStatusFields::STRB_ERR3,
      typename ErrStatusFields::ADDR_ERR0,
      typename ErrStatusFields::ADDR_ERR1,
      typename ErrStatusFields::ADDR_ERR2,
      typename ErrStatusFields::ADDR_ERR3,
      ftl::mmio::Reserved<16, 16>> {
    using eSINGLE_ERR0 = typename ErrStatusFields::eSINGLE_ERR0;
    using eSINGLE_ERR1 = typename ErrStatusFields::eSINGLE_ERR1;
    using eSINGLE_ERR2 = typename ErrStatusFields::eSINGLE_ERR2;
    using eSINGLE_ERR3 = typename ErrStatusFields::eSINGLE_ERR3;
    using eMULTI_ERR0 = typename ErrStatusFields::eMULTI_ERR0;
    using eMULTI_ERR1 = typename ErrStatusFields::eMULTI_ERR1;
    using eMULTI_ERR2 = typename ErrStatusFields::eMULTI_ERR2;
    using eMULTI_ERR3 = typename ErrStatusFields::eMULTI_ERR3;
    using eSTRB_ERR0 = typename ErrStatusFields::eSTRB_ERR0;
    using eSTRB_ERR1 = typename ErrStatusFields::eSTRB_ERR1;
    using eSTRB_ERR2 = typename ErrStatusFields::eSTRB_ERR2;
    using eSTRB_ERR3 = typename ErrStatusFields::eSTRB_ERR3;
    using eADDR_ERR0 = typename ErrStatusFields::eADDR_ERR0;
    using eADDR_ERR1 = typename ErrStatusFields::eADDR_ERR1;
    using eADDR_ERR2 = typename ErrStatusFields::eADDR_ERR2;
    using eADDR_ERR3 = typename ErrStatusFields::eADDR_ERR3;
    using SINGLE_ERR0 = typename ErrStatusFields::SINGLE_ERR0;
    using SINGLE_ERR1 = typename ErrStatusFields::SINGLE_ERR1;
    using SINGLE_ERR2 = typename ErrStatusFields::SINGLE_ERR2;
    using SINGLE_ERR3 = typename ErrStatusFields::SINGLE_ERR3;
    using MULTI_ERR0 = typename ErrStatusFields::MULTI_ERR0;
    using MULTI_ERR1 = typename ErrStatusFields::MULTI_ERR1;
    using MULTI_ERR2 = typename ErrStatusFields::MULTI_ERR2;
    using MULTI_ERR3 = typename ErrStatusFields::MULTI_ERR3;
    using STRB_ERR0 = typename ErrStatusFields::STRB_ERR0;
    using STRB_ERR1 = typename ErrStatusFields::STRB_ERR1;
    using STRB_ERR2 = typename ErrStatusFields::STRB_ERR2;
    using STRB_ERR3 = typename ErrStatusFields::STRB_ERR3;
    using ADDR_ERR0 = typename ErrStatusFields::ADDR_ERR0;
    using ADDR_ERR1 = typename ErrStatusFields::ADDR_ERR1;
    using ADDR_ERR2 = typename ErrStatusFields::ADDR_ERR2;
    using ADDR_ERR3 = typename ErrStatusFields::ADDR_ERR3;
  };

  // Error Interrupt Status Enable Register
  struct ErrStatEnFields {
    enum class eSINGLE_ERR0_STAT_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR0_STAT_EN_0 = 0,
      // Enabled
      eSINGLE_ERR0_STAT_EN_1 = 1,
    };

    enum class eSINGLE_ERR1_STAT_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR1_STAT_EN_0 = 0,
      // Enabled
      eSINGLE_ERR1_STAT_EN_1 = 1,
    };

    enum class eSINGLE_ERR2_STAT_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR2_STAT_EN_0 = 0,
      // Enabled
      eSINGLE_ERR2_STAT_EN_1 = 1,
    };

    enum class eSINGLE_ERR3_STAT_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR3_STAT_EN_0 = 0,
      // Enabled
      eSINGLE_ERR3_STAT_EN_1 = 1,
    };

    enum class eMULTI_ERR0_STAT_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR0_STAT_EN_0 = 0,
      // Enabled
      eMULTI_ERR0_STAT_EN_1 = 1,
    };

    enum class eMULTI_ERR1_STAT_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR1_STAT_EN_0 = 0,
      // Enabled
      eMULTI_ERR1_STAT_EN_1 = 1,
    };

    enum class eMULTI_ERR2_STAT_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR2_STAT_EN_0 = 0,
      // Enabled
      eMULTI_ERR2_STAT_EN_1 = 1,
    };

    enum class eMULTI_ERR3_STAT_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR3_STAT_EN_0 = 0,
      // Enabled
      eMULTI_ERR3_STAT_EN_1 = 1,
    };

    enum class eSTRB_ERR0_STAT_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR0_STAT_EN_0 = 0,
      // Enabled
      eSTRB_ERR0_STAT_EN_1 = 1,
    };

    enum class eSTRB_ERR1_STAT_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR1_STAT_EN_0 = 0,
      // Enabled
      eSTRB_ERR1_STAT_EN_1 = 1,
    };

    enum class eSTRB_ERR2_STAT_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR2_STAT_EN_0 = 0,
      // Enabled
      eSTRB_ERR2_STAT_EN_1 = 1,
    };

    enum class eSTRB_ERR3_STAT_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR3_STAT_EN_0 = 0,
      // Enabled
      eSTRB_ERR3_STAT_EN_1 = 1,
    };

    enum class eADDR_ERR0_STAT_EN : std::uint32_t {
      // Disabled
      eADDR_ERR0_STAT_EN_0 = 0,
      // Enabled
      eADDR_ERR0_STAT_EN_1 = 1,
    };

    enum class eADDR_ERR1_STAT_EN : std::uint32_t {
      // Disabled
      eADDR_ERR1_STAT_EN_0 = 0,
      // Enabled
      eADDR_ERR1_STAT_EN_1 = 1,
    };

    enum class eADDR_ERR2_STAT_EN : std::uint32_t {
      // Disabled
      eADDR_ERR2_STAT_EN_0 = 0,
      // Enabled
      eADDR_ERR2_STAT_EN_1 = 1,
    };

    enum class eADDR_ERR3_STAT_EN : std::uint32_t {
      // Disabled
      eADDR_ERR3_STAT_EN_0 = 0,
      // Enabled
      eADDR_ERR3_STAT_EN_1 = 1,
    };

    // Single Bit Error Status Enable On OCRAM Bank0
    using SINGLE_ERR0_STAT_EN = ftl::mmio::Field<1, 0, eSINGLE_ERR0_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Status Enable On OCRAM Bank1
    using SINGLE_ERR1_STAT_EN = ftl::mmio::Field<1, 1, eSINGLE_ERR1_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Status Enable On OCRAM Bank2
    using SINGLE_ERR2_STAT_EN = ftl::mmio::Field<1, 2, eSINGLE_ERR2_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Status Enable On OCRAM Bank3
    using SINGLE_ERR3_STAT_EN = ftl::mmio::Field<1, 3, eSINGLE_ERR3_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Status Enable On OCRAM Bank0
    using MULTI_ERR0_STAT_EN = ftl::mmio::Field<1, 4, eMULTI_ERR0_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Status Enable On OCRAM Bank1
    using MULTI_ERR1_STAT_EN = ftl::mmio::Field<1, 5, eMULTI_ERR1_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Status Enable On OCRAM Bank2
    using MULTI_ERR2_STAT_EN = ftl::mmio::Field<1, 6, eMULTI_ERR2_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Status Enable On OCRAM Bank3
    using MULTI_ERR3_STAT_EN = ftl::mmio::Field<1, 7, eMULTI_ERR3_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Status Enable On OCRAM Bank0
    using STRB_ERR0_STAT_EN = ftl::mmio::Field<1, 8, eSTRB_ERR0_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Status Enable On OCRAM Bank1
    using STRB_ERR1_STAT_EN = ftl::mmio::Field<1, 9, eSTRB_ERR1_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Status Enable On OCRAM Bank2
    using STRB_ERR2_STAT_EN = ftl::mmio::Field<1, 10, eSTRB_ERR2_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Status Enable On OCRAM Bank3
    using STRB_ERR3_STAT_EN = ftl::mmio::Field<1, 11, eSTRB_ERR3_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Status Enable On Bank0
    using ADDR_ERR0_STAT_EN = ftl::mmio::Field<1, 12, eADDR_ERR0_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Status Enable On Bank1
    using ADDR_ERR1_STAT_EN = ftl::mmio::Field<1, 13, eADDR_ERR1_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Status Enable On Bank2
    using ADDR_ERR2_STAT_EN = ftl::mmio::Field<1, 14, eADDR_ERR2_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Status Enable On Bank3
    using ADDR_ERR3_STAT_EN = ftl::mmio::Field<1, 15, eADDR_ERR3_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrStatEnFields

  struct ERR_STAT_EN : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrStatEnFields::SINGLE_ERR0_STAT_EN,
      typename ErrStatEnFields::SINGLE_ERR1_STAT_EN,
      typename ErrStatEnFields::SINGLE_ERR2_STAT_EN,
      typename ErrStatEnFields::SINGLE_ERR3_STAT_EN,
      typename ErrStatEnFields::MULTI_ERR0_STAT_EN,
      typename ErrStatEnFields::MULTI_ERR1_STAT_EN,
      typename ErrStatEnFields::MULTI_ERR2_STAT_EN,
      typename ErrStatEnFields::MULTI_ERR3_STAT_EN,
      typename ErrStatEnFields::STRB_ERR0_STAT_EN,
      typename ErrStatEnFields::STRB_ERR1_STAT_EN,
      typename ErrStatEnFields::STRB_ERR2_STAT_EN,
      typename ErrStatEnFields::STRB_ERR3_STAT_EN,
      typename ErrStatEnFields::ADDR_ERR0_STAT_EN,
      typename ErrStatEnFields::ADDR_ERR1_STAT_EN,
      typename ErrStatEnFields::ADDR_ERR2_STAT_EN,
      typename ErrStatEnFields::ADDR_ERR3_STAT_EN,
      ftl::mmio::Reserved<16, 16>> {
    using eSINGLE_ERR0_STAT_EN = typename ErrStatEnFields::eSINGLE_ERR0_STAT_EN;
    using eSINGLE_ERR1_STAT_EN = typename ErrStatEnFields::eSINGLE_ERR1_STAT_EN;
    using eSINGLE_ERR2_STAT_EN = typename ErrStatEnFields::eSINGLE_ERR2_STAT_EN;
    using eSINGLE_ERR3_STAT_EN = typename ErrStatEnFields::eSINGLE_ERR3_STAT_EN;
    using eMULTI_ERR0_STAT_EN = typename ErrStatEnFields::eMULTI_ERR0_STAT_EN;
    using eMULTI_ERR1_STAT_EN = typename ErrStatEnFields::eMULTI_ERR1_STAT_EN;
    using eMULTI_ERR2_STAT_EN = typename ErrStatEnFields::eMULTI_ERR2_STAT_EN;
    using eMULTI_ERR3_STAT_EN = typename ErrStatEnFields::eMULTI_ERR3_STAT_EN;
    using eSTRB_ERR0_STAT_EN = typename ErrStatEnFields::eSTRB_ERR0_STAT_EN;
    using eSTRB_ERR1_STAT_EN = typename ErrStatEnFields::eSTRB_ERR1_STAT_EN;
    using eSTRB_ERR2_STAT_EN = typename ErrStatEnFields::eSTRB_ERR2_STAT_EN;
    using eSTRB_ERR3_STAT_EN = typename ErrStatEnFields::eSTRB_ERR3_STAT_EN;
    using eADDR_ERR0_STAT_EN = typename ErrStatEnFields::eADDR_ERR0_STAT_EN;
    using eADDR_ERR1_STAT_EN = typename ErrStatEnFields::eADDR_ERR1_STAT_EN;
    using eADDR_ERR2_STAT_EN = typename ErrStatEnFields::eADDR_ERR2_STAT_EN;
    using eADDR_ERR3_STAT_EN = typename ErrStatEnFields::eADDR_ERR3_STAT_EN;
    using SINGLE_ERR0_STAT_EN = typename ErrStatEnFields::SINGLE_ERR0_STAT_EN;
    using SINGLE_ERR1_STAT_EN = typename ErrStatEnFields::SINGLE_ERR1_STAT_EN;
    using SINGLE_ERR2_STAT_EN = typename ErrStatEnFields::SINGLE_ERR2_STAT_EN;
    using SINGLE_ERR3_STAT_EN = typename ErrStatEnFields::SINGLE_ERR3_STAT_EN;
    using MULTI_ERR0_STAT_EN = typename ErrStatEnFields::MULTI_ERR0_STAT_EN;
    using MULTI_ERR1_STAT_EN = typename ErrStatEnFields::MULTI_ERR1_STAT_EN;
    using MULTI_ERR2_STAT_EN = typename ErrStatEnFields::MULTI_ERR2_STAT_EN;
    using MULTI_ERR3_STAT_EN = typename ErrStatEnFields::MULTI_ERR3_STAT_EN;
    using STRB_ERR0_STAT_EN = typename ErrStatEnFields::STRB_ERR0_STAT_EN;
    using STRB_ERR1_STAT_EN = typename ErrStatEnFields::STRB_ERR1_STAT_EN;
    using STRB_ERR2_STAT_EN = typename ErrStatEnFields::STRB_ERR2_STAT_EN;
    using STRB_ERR3_STAT_EN = typename ErrStatEnFields::STRB_ERR3_STAT_EN;
    using ADDR_ERR0_STAT_EN = typename ErrStatEnFields::ADDR_ERR0_STAT_EN;
    using ADDR_ERR1_STAT_EN = typename ErrStatEnFields::ADDR_ERR1_STAT_EN;
    using ADDR_ERR2_STAT_EN = typename ErrStatEnFields::ADDR_ERR2_STAT_EN;
    using ADDR_ERR3_STAT_EN = typename ErrStatEnFields::ADDR_ERR3_STAT_EN;
  };

  // Error Interrupt Enable Register
  struct ErrSigEnFields {
    enum class eSINGLE_ERR0_SIG_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR0_SIG_EN_0 = 0,
      // Enabled
      eSINGLE_ERR0_SIG_EN_1 = 1,
    };

    enum class eSINGLE_ERR1_SIG_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR1_SIG_EN_0 = 0,
      // Enabled
      eSINGLE_ERR1_SIG_EN_1 = 1,
    };

    enum class eSINGLE_ERR2_SIG_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR2_SIG_EN_0 = 0,
      // Enabled
      eSINGLE_ERR2_SIG_EN_1 = 1,
    };

    enum class eSINGLE_ERR3_SIG_EN : std::uint32_t {
      // Disabled
      eSINGLE_ERR3_SIG_EN_0 = 0,
      // Enabled
      eSINGLE_ERR3_SIG_EN_1 = 1,
    };

    enum class eMULTI_ERR0_SIG_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR0_SIG_EN_0 = 0,
      // Enabled
      eMULTI_ERR0_SIG_EN_1 = 1,
    };

    enum class eMULTI_ERR1_SIG_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR1_SIG_EN_0 = 0,
      // Enabled
      eMULTI_ERR1_SIG_EN_1 = 1,
    };

    enum class eMULTI_ERR2_SIG_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR2_SIG_EN_0 = 0,
      // Enabled
      eMULTI_ERR2_SIG_EN_1 = 1,
    };

    enum class eMULTI_ERR3_SIG_EN : std::uint32_t {
      // Disabled
      eMULTI_ERR3_SIG_EN_0 = 0,
      // Enabled
      eMULTI_ERR3_SIG_EN_1 = 1,
    };

    enum class eSTRB_ERR0_SIG_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR0_SIG_EN_0 = 0,
      // Enabled
      eSTRB_ERR0_SIG_EN_1 = 1,
    };

    enum class eSTRB_ERR1_SIG_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR1_SIG_EN_0 = 0,
      // Enabled
      eSTRB_ERR1_SIG_EN_1 = 1,
    };

    enum class eSTRB_ERR2_SIG_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR2_SIG_EN_0 = 0,
      // Enabled
      eSTRB_ERR2_SIG_EN_1 = 1,
    };

    enum class eSTRB_ERR3_SIG_EN : std::uint32_t {
      // Disabled
      eSTRB_ERR3_SIG_EN_0 = 0,
      // Enabled
      eSTRB_ERR3_SIG_EN_1 = 1,
    };

    enum class eADDR_ERR0_SIG_EN : std::uint32_t {
      // Disabled
      eADDR_ERR0_SIG_EN_0 = 0,
      // Enabled
      eADDR_ERR0_SIG_EN_1 = 1,
    };

    enum class eADDR_ERR1_SIG_EN : std::uint32_t {
      // Disabled
      eADDR_ERR1_SIG_EN_0 = 0,
      // Enabled
      eADDR_ERR1_SIG_EN_1 = 1,
    };

    enum class eADDR_ERR2_SIG_EN : std::uint32_t {
      // Disabled
      eADDR_ERR2_SIG_EN_0 = 0,
      // Enabled
      eADDR_ERR2_SIG_EN_1 = 1,
    };

    enum class eADDR_ERR3_SIG_EN : std::uint32_t {
      // Disabled
      eADDR_ERR3_SIG_EN_0 = 0,
      // Enabled
      eADDR_ERR3_SIG_EN_1 = 1,
    };

    // Single Bit Error Interrupt Enable On OCRAM Bank0
    using SINGLE_ERR0_SIG_EN = ftl::mmio::Field<1, 0, eSINGLE_ERR0_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Interrupt Enable On OCRAM Bank1
    using SINGLE_ERR1_SIG_EN = ftl::mmio::Field<1, 1, eSINGLE_ERR1_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Interrupt Enable On OCRAM Bank2
    using SINGLE_ERR2_SIG_EN = ftl::mmio::Field<1, 2, eSINGLE_ERR2_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Single Bit Error Interrupt Enable On OCRAM Bank3
    using SINGLE_ERR3_SIG_EN = ftl::mmio::Field<1, 3, eSINGLE_ERR3_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Interrupt Enable On OCRAM Bank0
    using MULTI_ERR0_SIG_EN = ftl::mmio::Field<1, 4, eMULTI_ERR0_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Interrupt Enable On OCRAM Bank1
    using MULTI_ERR1_SIG_EN = ftl::mmio::Field<1, 5, eMULTI_ERR1_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Interrupt Enable On OCRAM Bank2
    using MULTI_ERR2_SIG_EN = ftl::mmio::Field<1, 6, eMULTI_ERR2_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Interrupt Enable On OCRAM Bank3
    using MULTI_ERR3_SIG_EN = ftl::mmio::Field<1, 7, eMULTI_ERR3_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Interrupt Enable On OCRAM Bank0
    using STRB_ERR0_SIG_EN = ftl::mmio::Field<1, 8, eSTRB_ERR0_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Interrupt Enable On OCRAM Bank1
    using STRB_ERR1_SIG_EN = ftl::mmio::Field<1, 9, eSTRB_ERR1_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Interrupt Enable On OCRAM Bank2
    using STRB_ERR2_SIG_EN = ftl::mmio::Field<1, 10, eSTRB_ERR2_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // AXI Strobe Error Interrupt Enable On OCRAM Bank3
    using STRB_ERR3_SIG_EN = ftl::mmio::Field<1, 11, eSTRB_ERR3_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Interrupt Enable On Bank0
    using ADDR_ERR0_SIG_EN = ftl::mmio::Field<1, 12, eADDR_ERR0_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Interrupt Enable On Bank1
    using ADDR_ERR1_SIG_EN = ftl::mmio::Field<1, 13, eADDR_ERR1_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Interrupt Enable On Bank2
    using ADDR_ERR2_SIG_EN = ftl::mmio::Field<1, 14, eADDR_ERR2_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // OCRAM Access Error Interrupt Enable On Bank3
    using ADDR_ERR3_SIG_EN = ftl::mmio::Field<1, 15, eADDR_ERR3_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrSigEnFields

  struct ERR_SIG_EN : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrSigEnFields::SINGLE_ERR0_SIG_EN,
      typename ErrSigEnFields::SINGLE_ERR1_SIG_EN,
      typename ErrSigEnFields::SINGLE_ERR2_SIG_EN,
      typename ErrSigEnFields::SINGLE_ERR3_SIG_EN,
      typename ErrSigEnFields::MULTI_ERR0_SIG_EN,
      typename ErrSigEnFields::MULTI_ERR1_SIG_EN,
      typename ErrSigEnFields::MULTI_ERR2_SIG_EN,
      typename ErrSigEnFields::MULTI_ERR3_SIG_EN,
      typename ErrSigEnFields::STRB_ERR0_SIG_EN,
      typename ErrSigEnFields::STRB_ERR1_SIG_EN,
      typename ErrSigEnFields::STRB_ERR2_SIG_EN,
      typename ErrSigEnFields::STRB_ERR3_SIG_EN,
      typename ErrSigEnFields::ADDR_ERR0_SIG_EN,
      typename ErrSigEnFields::ADDR_ERR1_SIG_EN,
      typename ErrSigEnFields::ADDR_ERR2_SIG_EN,
      typename ErrSigEnFields::ADDR_ERR3_SIG_EN,
      ftl::mmio::Reserved<16, 16>> {
    using eSINGLE_ERR0_SIG_EN = typename ErrSigEnFields::eSINGLE_ERR0_SIG_EN;
    using eSINGLE_ERR1_SIG_EN = typename ErrSigEnFields::eSINGLE_ERR1_SIG_EN;
    using eSINGLE_ERR2_SIG_EN = typename ErrSigEnFields::eSINGLE_ERR2_SIG_EN;
    using eSINGLE_ERR3_SIG_EN = typename ErrSigEnFields::eSINGLE_ERR3_SIG_EN;
    using eMULTI_ERR0_SIG_EN = typename ErrSigEnFields::eMULTI_ERR0_SIG_EN;
    using eMULTI_ERR1_SIG_EN = typename ErrSigEnFields::eMULTI_ERR1_SIG_EN;
    using eMULTI_ERR2_SIG_EN = typename ErrSigEnFields::eMULTI_ERR2_SIG_EN;
    using eMULTI_ERR3_SIG_EN = typename ErrSigEnFields::eMULTI_ERR3_SIG_EN;
    using eSTRB_ERR0_SIG_EN = typename ErrSigEnFields::eSTRB_ERR0_SIG_EN;
    using eSTRB_ERR1_SIG_EN = typename ErrSigEnFields::eSTRB_ERR1_SIG_EN;
    using eSTRB_ERR2_SIG_EN = typename ErrSigEnFields::eSTRB_ERR2_SIG_EN;
    using eSTRB_ERR3_SIG_EN = typename ErrSigEnFields::eSTRB_ERR3_SIG_EN;
    using eADDR_ERR0_SIG_EN = typename ErrSigEnFields::eADDR_ERR0_SIG_EN;
    using eADDR_ERR1_SIG_EN = typename ErrSigEnFields::eADDR_ERR1_SIG_EN;
    using eADDR_ERR2_SIG_EN = typename ErrSigEnFields::eADDR_ERR2_SIG_EN;
    using eADDR_ERR3_SIG_EN = typename ErrSigEnFields::eADDR_ERR3_SIG_EN;
    using SINGLE_ERR0_SIG_EN = typename ErrSigEnFields::SINGLE_ERR0_SIG_EN;
    using SINGLE_ERR1_SIG_EN = typename ErrSigEnFields::SINGLE_ERR1_SIG_EN;
    using SINGLE_ERR2_SIG_EN = typename ErrSigEnFields::SINGLE_ERR2_SIG_EN;
    using SINGLE_ERR3_SIG_EN = typename ErrSigEnFields::SINGLE_ERR3_SIG_EN;
    using MULTI_ERR0_SIG_EN = typename ErrSigEnFields::MULTI_ERR0_SIG_EN;
    using MULTI_ERR1_SIG_EN = typename ErrSigEnFields::MULTI_ERR1_SIG_EN;
    using MULTI_ERR2_SIG_EN = typename ErrSigEnFields::MULTI_ERR2_SIG_EN;
    using MULTI_ERR3_SIG_EN = typename ErrSigEnFields::MULTI_ERR3_SIG_EN;
    using STRB_ERR0_SIG_EN = typename ErrSigEnFields::STRB_ERR0_SIG_EN;
    using STRB_ERR1_SIG_EN = typename ErrSigEnFields::STRB_ERR1_SIG_EN;
    using STRB_ERR2_SIG_EN = typename ErrSigEnFields::STRB_ERR2_SIG_EN;
    using STRB_ERR3_SIG_EN = typename ErrSigEnFields::STRB_ERR3_SIG_EN;
    using ADDR_ERR0_SIG_EN = typename ErrSigEnFields::ADDR_ERR0_SIG_EN;
    using ADDR_ERR1_SIG_EN = typename ErrSigEnFields::ADDR_ERR1_SIG_EN;
    using ADDR_ERR2_SIG_EN = typename ErrSigEnFields::ADDR_ERR2_SIG_EN;
    using ADDR_ERR3_SIG_EN = typename ErrSigEnFields::ADDR_ERR3_SIG_EN;
  };

  // Error Injection On LOW 32 bits Of OCRAM Bank0 Write Data
  struct ErrDataInjLow0Fields {
    // Error Injection On LOW 32 bits Of OCRAM Bank0 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjLow0Fields

  struct ERR_DATA_INJ_LOW0 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjLow0Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjLow0Fields::ERR_DATA_INJ;
  };

  // Error Injection On HIGH 32 bits Of OCRAM Bank0 Write Data
  struct ErrDataInjHigh0Fields {
    // Error Injection On HIGH 32 bits Of OCRAM Bank0 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjHigh0Fields

  struct ERR_DATA_INJ_HIGH0 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjHigh0Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjHigh0Fields::ERR_DATA_INJ;
  };

  // Error Injection On 8 bits ECC code Of OCRAM Bank0 Write Data
  struct ErrEccInj0Fields {
    // Error Injection On 8 bits ECC code Of OCRAM Bank0 Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrEccInj0Fields

  struct ERR_ECC_INJ0 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrEccInj0Fields::ERR_ECC_INJ,
      ftl::mmio::Reserved<24, 8>> {
    using ERR_ECC_INJ = typename ErrEccInj0Fields::ERR_ECC_INJ;
  };

  // Error Injection On LOW 32 bits Of OCRAM Bank1 Write Data
  struct ErrDataInjLow1Fields {
    // Error Injection On LOW 32 bits Of OCRAM Bank1 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjLow1Fields

  struct ERR_DATA_INJ_LOW1 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjLow1Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjLow1Fields::ERR_DATA_INJ;
  };

  // Error Injection On HIGH 32 bits Of OCRAM Bank1 Write Data
  struct ErrDataInjHigh1Fields {
    // Error Injection On HIGH 32 bits Of OCRAM Bank1 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjHigh1Fields

  struct ERR_DATA_INJ_HIGH1 : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjHigh1Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjHigh1Fields::ERR_DATA_INJ;
  };

  // Error Injection On 8 bits ECC code Of OCRAM Bank1 Write Data
  struct ErrEccInj1Fields {
    // Error Injection On 8 bits ECC code Of OCRAM Bank1 Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrEccInj1Fields

  struct ERR_ECC_INJ1 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrEccInj1Fields::ERR_ECC_INJ,
      ftl::mmio::Reserved<24, 8>> {
    using ERR_ECC_INJ = typename ErrEccInj1Fields::ERR_ECC_INJ;
  };

  // Error Injection On LOW 32 bits Of OCRAM Bank2 Write Data
  struct ErrDataInjLow2Fields {
    // Error Injection On LOW 32 bits Of OCRAM Bank2 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjLow2Fields

  struct ERR_DATA_INJ_LOW2 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjLow2Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjLow2Fields::ERR_DATA_INJ;
  };

  // Error Injection On HIGH 32 bits Of OCRAM Bank2 Write Data
  struct ErrDataInjHigh2Fields {
    // Error Injection On HIGH 32 bits Of OCRAM Bank2 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjHigh2Fields

  struct ERR_DATA_INJ_HIGH2 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjHigh2Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjHigh2Fields::ERR_DATA_INJ;
  };

  // Error Injection On 8 bits ECC code Of OCRAM Bank2 Write Data
  struct ErrEccInj2Fields {
    // Error Injection On 8 bits ECC code Of OCRAM Bank2 Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrEccInj2Fields

  struct ERR_ECC_INJ2 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrEccInj2Fields::ERR_ECC_INJ,
      ftl::mmio::Reserved<24, 8>> {
    using ERR_ECC_INJ = typename ErrEccInj2Fields::ERR_ECC_INJ;
  };

  // Error Injection On LOW 32 bits Of OCRAM Bank3 Write Data
  struct ErrDataInjLow3Fields {
    // Error Injection On LOW 32 bits Of OCRAM Bank3 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjLow3Fields

  struct ERR_DATA_INJ_LOW3 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjLow3Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjLow3Fields::ERR_DATA_INJ;
  };

  // Error Injection On HIGH 32 bits Of OCRAM Bank3 Write Data
  struct ErrDataInjHigh3Fields {
    // Error Injection On HIGH 32 bits Of OCRAM Bank3 Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjHigh3Fields

  struct ERR_DATA_INJ_HIGH3 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrDataInjHigh3Fields::ERR_DATA_INJ> {
    using ERR_DATA_INJ = typename ErrDataInjHigh3Fields::ERR_DATA_INJ;
  };

  // Error Injection On 8 bits ECC code Of OCRAM Bank3 Write Data
  struct ErrEccInj3Fields {
    // Error Injection On 8 bits ECC code Of OCRAM Bank3 Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrEccInj3Fields

  struct ERR_ECC_INJ3 : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ErrEccInj3Fields::ERR_ECC_INJ,
      ftl::mmio::Reserved<24, 8>> {
    using ERR_ECC_INJ = typename ErrEccInj3Fields::ERR_ECC_INJ;
  };

  // Single Error Address And ECC code On OCRAM Bank0
  struct SingleErrAddrEcc0Fields {
    // Single Error ECC code On OCRAM Bank0
    using SINGLE_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Single Error Address On OCRAM Bank0
    using SINGLE_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrAddrEcc0Fields

  struct SINGLE_ERR_ADDR_ECC0 : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrAddrEcc0Fields::SINGLE_ERR_ECC,
      typename SingleErrAddrEcc0Fields::SINGLE_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using SINGLE_ERR_ECC = typename SingleErrAddrEcc0Fields::SINGLE_ERR_ECC;
    using SINGLE_ERR_ADDR = typename SingleErrAddrEcc0Fields::SINGLE_ERR_ADDR;
  };

  // LOW 32 Bits Single Error Read Data On OCRAM Bank0
  struct SingleErrDataLow0Fields {
    // LOW 32 Bits Single Error Read Data On OCRAM Bank0
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataLow0Fields

  struct SINGLE_ERR_DATA_LOW0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataLow0Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataLow0Fields::SINGLE_ERR_DATA;
  };

  // HIGH 32 Bits Single Error Read Data On OCRAM Bank0
  struct SingleErrDataHigh0Fields {
    // HIGH 32 Bits Single Error Read Data On OCRAM Bank0
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataHigh0Fields

  struct SINGLE_ERR_DATA_HIGH0 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataHigh0Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataHigh0Fields::SINGLE_ERR_DATA;
  };

  // LOW Single Error Bit Position On OCRAM Bank0
  struct SingleErrPosLow0Fields {
    // LOW Single Error Bit Position On OCRAM Bank0
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosLow0Fields

  struct SINGLE_ERR_POS_LOW0 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosLow0Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosLow0Fields::SINGLE_ERR_POS;
  };

  // HIGH Single Error Bit Position On OCRAM Bank0
  struct SingleErrPosHigh0Fields {
    // HIGH Single Error Bit Position On OCRAM Bank0
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosHigh0Fields

  struct SINGLE_ERR_POS_HIGH0 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosHigh0Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosHigh0Fields::SINGLE_ERR_POS;
  };

  // Single Error Address And ECC code On OCRAM Bank1
  struct SingleErrAddrEcc1Fields {
    // Single Error ECC code On OCRAM Bank1
    using SINGLE_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Single Error Address On OCRAM Bank1
    using SINGLE_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrAddrEcc1Fields

  struct SINGLE_ERR_ADDR_ECC1 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrAddrEcc1Fields::SINGLE_ERR_ECC,
      typename SingleErrAddrEcc1Fields::SINGLE_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using SINGLE_ERR_ECC = typename SingleErrAddrEcc1Fields::SINGLE_ERR_ECC;
    using SINGLE_ERR_ADDR = typename SingleErrAddrEcc1Fields::SINGLE_ERR_ADDR;
  };

  // LOW 32 Bits Single Error Read Data On OCRAM Bank1
  struct SingleErrDataLow1Fields {
    // LOW 32 Bits Single Error Read Data On OCRAM Bank1
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataLow1Fields

  struct SINGLE_ERR_DATA_LOW1 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataLow1Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataLow1Fields::SINGLE_ERR_DATA;
  };

  // HIGH 32 Bits Single Error Read Data On OCRAM Bank1
  struct SingleErrDataHigh1Fields {
    // HIGH 32 Bits Single Error Read Data On OCRAM Bank1
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataHigh1Fields

  struct SINGLE_ERR_DATA_HIGH1 : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataHigh1Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataHigh1Fields::SINGLE_ERR_DATA;
  };

  // LOW Single Error Bit Position On OCRAM Bank1
  struct SingleErrPosLow1Fields {
    // LOW Single Error Bit Position On OCRAM Bank1
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosLow1Fields

  struct SINGLE_ERR_POS_LOW1 : ftl::mmio::Register<
      kBase + 0x5Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosLow1Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosLow1Fields::SINGLE_ERR_POS;
  };

  // HIGH Single Error Bit Position On OCRAM Bank1
  struct SingleErrPosHigh1Fields {
    // HIGH Single Error Bit Position On OCRAM Bank1
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosHigh1Fields

  struct SINGLE_ERR_POS_HIGH1 : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosHigh1Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosHigh1Fields::SINGLE_ERR_POS;
  };

  // Single Error Address And ECC code On OCRAM Bank2
  struct SingleErrAddrEcc2Fields {
    // Single Error ECC code On OCRAM Bank2
    using SINGLE_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Single Error Address On OCRAM Bank2
    using SINGLE_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrAddrEcc2Fields

  struct SINGLE_ERR_ADDR_ECC2 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrAddrEcc2Fields::SINGLE_ERR_ECC,
      typename SingleErrAddrEcc2Fields::SINGLE_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using SINGLE_ERR_ECC = typename SingleErrAddrEcc2Fields::SINGLE_ERR_ECC;
    using SINGLE_ERR_ADDR = typename SingleErrAddrEcc2Fields::SINGLE_ERR_ADDR;
  };

  // LOW 32 Bits Single Error Read Data On OCRAM Bank2
  struct SingleErrDataLow2Fields {
    // LOW 32 Bits Single Error Read Data On OCRAM Bank2
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataLow2Fields

  struct SINGLE_ERR_DATA_LOW2 : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataLow2Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataLow2Fields::SINGLE_ERR_DATA;
  };

  // HIGH 32 Bits Single Error Read Data On OCRAM Bank2
  struct SingleErrDataHigh2Fields {
    // HIGH 32 Bits Single Error Read Data On OCRAM Bank2
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataHigh2Fields

  struct SINGLE_ERR_DATA_HIGH2 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataHigh2Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataHigh2Fields::SINGLE_ERR_DATA;
  };

  // LOW Single Error Bit Position On OCRAM Bank2
  struct SingleErrPosLow2Fields {
    // LOW Single Error Bit Position On OCRAM Bank2
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosLow2Fields

  struct SINGLE_ERR_POS_LOW2 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosLow2Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosLow2Fields::SINGLE_ERR_POS;
  };

  // HIGH Single Error Bit Position On OCRAM Bank2
  struct SingleErrPosHigh2Fields {
    // HIGH Single Error Bit Position On OCRAM Bank2
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosHigh2Fields

  struct SINGLE_ERR_POS_HIGH2 : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosHigh2Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosHigh2Fields::SINGLE_ERR_POS;
  };

  // Single Error Address And ECC code On OCRAM Bank3
  struct SingleErrAddrEcc3Fields {
    // Single Error ECC code On OCRAM Bank3
    using SINGLE_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Single Error Address On OCRAM Bank3
    using SINGLE_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrAddrEcc3Fields

  struct SINGLE_ERR_ADDR_ECC3 : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrAddrEcc3Fields::SINGLE_ERR_ECC,
      typename SingleErrAddrEcc3Fields::SINGLE_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using SINGLE_ERR_ECC = typename SingleErrAddrEcc3Fields::SINGLE_ERR_ECC;
    using SINGLE_ERR_ADDR = typename SingleErrAddrEcc3Fields::SINGLE_ERR_ADDR;
  };

  // LOW 32 Bits Single Error Read Data On OCRAM Bank3
  struct SingleErrDataLow3Fields {
    // LOW 32 Bits Single Error Read Data On OCRAM Bank3
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataLow3Fields

  struct SINGLE_ERR_DATA_LOW3 : ftl::mmio::Register<
      kBase + 0x7Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataLow3Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataLow3Fields::SINGLE_ERR_DATA;
  };

  // HIGH 32 Bits Single Error Read Data On OCRAM Bank3
  struct SingleErrDataHigh3Fields {
    // HIGH 32 Bits Single Error Read Data On OCRAM Bank3
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataHigh3Fields

  struct SINGLE_ERR_DATA_HIGH3 : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrDataHigh3Fields::SINGLE_ERR_DATA> {
    using SINGLE_ERR_DATA = typename SingleErrDataHigh3Fields::SINGLE_ERR_DATA;
  };

  // LOW Single Error Bit Position On OCRAM Bank3
  struct SingleErrPosLow3Fields {
    // LOW Single Error Bit Position On OCRAM Bank3
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosLow3Fields

  struct SINGLE_ERR_POS_LOW3 : ftl::mmio::Register<
      kBase + 0x84u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosLow3Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosLow3Fields::SINGLE_ERR_POS;
  };

  // HIGH Single Error Bit Position On OCRAM Bank3
  struct SingleErrPosHigh3Fields {
    // HIGH Single Error Bit Position On OCRAM Bank3
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosHigh3Fields

  struct SINGLE_ERR_POS_HIGH3 : ftl::mmio::Register<
      kBase + 0x88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SingleErrPosHigh3Fields::SINGLE_ERR_POS> {
    using SINGLE_ERR_POS = typename SingleErrPosHigh3Fields::SINGLE_ERR_POS;
  };

  // Multiple Error Address And ECC code On OCRAM Bank0
  struct MultiErrAddrEcc0Fields {
    // Multiple Error ECC code On OCRAM Bank0
    using MULTI_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Multiple Error Address On OCRAM Bank0
    using MULTI_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrAddrEcc0Fields

  struct MULTI_ERR_ADDR_ECC0 : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrAddrEcc0Fields::MULTI_ERR_ECC,
      typename MultiErrAddrEcc0Fields::MULTI_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using MULTI_ERR_ECC = typename MultiErrAddrEcc0Fields::MULTI_ERR_ECC;
    using MULTI_ERR_ADDR = typename MultiErrAddrEcc0Fields::MULTI_ERR_ADDR;
  };

  // LOW 32 Bits Multiple Error Read Data On OCRAM Bank0
  struct MultiErrDataLow0Fields {
    // LOW 32 Bits Multiple Error Read Data On OCRAM Bank0
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataLow0Fields

  struct MULTI_ERR_DATA_LOW0 : ftl::mmio::Register<
      kBase + 0x90u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataLow0Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataLow0Fields::MULTI_ERR_DATA;
  };

  // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank0
  struct MultiErrDataHigh0Fields {
    // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank0
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataHigh0Fields

  struct MULTI_ERR_DATA_HIGH0 : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataHigh0Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataHigh0Fields::MULTI_ERR_DATA;
  };

  // Multiple Error Address And ECC code On OCRAM Bank1
  struct MultiErrAddrEcc1Fields {
    // Multiple Error ECC code On OCRAM Bank1
    using MULTI_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Multiple Error Address On OCRAM Bank1
    using MULTI_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrAddrEcc1Fields

  struct MULTI_ERR_ADDR_ECC1 : ftl::mmio::Register<
      kBase + 0x98u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrAddrEcc1Fields::MULTI_ERR_ECC,
      typename MultiErrAddrEcc1Fields::MULTI_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using MULTI_ERR_ECC = typename MultiErrAddrEcc1Fields::MULTI_ERR_ECC;
    using MULTI_ERR_ADDR = typename MultiErrAddrEcc1Fields::MULTI_ERR_ADDR;
  };

  // LOW 32 Bits Multiple Error Read Data On OCRAM Bank1
  struct MultiErrDataLow1Fields {
    // LOW 32 Bits Multiple Error Read Data On OCRAM Bank1
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataLow1Fields

  struct MULTI_ERR_DATA_LOW1 : ftl::mmio::Register<
      kBase + 0x9Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataLow1Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataLow1Fields::MULTI_ERR_DATA;
  };

  // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank1
  struct MultiErrDataHigh1Fields {
    // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank1
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataHigh1Fields

  struct MULTI_ERR_DATA_HIGH1 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataHigh1Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataHigh1Fields::MULTI_ERR_DATA;
  };

  // Multiple Error Address And ECC code On OCRAM Bank2
  struct MultiErrAddrEcc2Fields {
    // Multiple Error ECC code On OCRAM Bank2
    using MULTI_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Multiple Error Address On OCRAM Bank2
    using MULTI_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrAddrEcc2Fields

  struct MULTI_ERR_ADDR_ECC2 : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrAddrEcc2Fields::MULTI_ERR_ECC,
      typename MultiErrAddrEcc2Fields::MULTI_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using MULTI_ERR_ECC = typename MultiErrAddrEcc2Fields::MULTI_ERR_ECC;
    using MULTI_ERR_ADDR = typename MultiErrAddrEcc2Fields::MULTI_ERR_ADDR;
  };

  // LOW 32 Bits Multiple Error Read Data On OCRAM Bank2
  struct MultiErrDataLow2Fields {
    // LOW 32 Bits Multiple Error Read Data On OCRAM Bank2
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataLow2Fields

  struct MULTI_ERR_DATA_LOW2 : ftl::mmio::Register<
      kBase + 0xA8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataLow2Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataLow2Fields::MULTI_ERR_DATA;
  };

  // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank2
  struct MultiErrDataHigh2Fields {
    // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank2
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataHigh2Fields

  struct MULTI_ERR_DATA_HIGH2 : ftl::mmio::Register<
      kBase + 0xACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataHigh2Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataHigh2Fields::MULTI_ERR_DATA;
  };

  // Multiple Error Address And ECC code On OCRAM Bank3
  struct MultiErrAddrEcc3Fields {
    // Multiple Error ECC code On OCRAM Bank3
    using MULTI_ERR_ECC = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Multiple Error Address On OCRAM Bank3
    using MULTI_ERR_ADDR = ftl::mmio::Field<19, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrAddrEcc3Fields

  struct MULTI_ERR_ADDR_ECC3 : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrAddrEcc3Fields::MULTI_ERR_ECC,
      typename MultiErrAddrEcc3Fields::MULTI_ERR_ADDR,
      ftl::mmio::Reserved<5, 27>> {
    using MULTI_ERR_ECC = typename MultiErrAddrEcc3Fields::MULTI_ERR_ECC;
    using MULTI_ERR_ADDR = typename MultiErrAddrEcc3Fields::MULTI_ERR_ADDR;
  };

  // LOW 32 Bits Multiple Error Read Data On OCRAM Bank3
  struct MultiErrDataLow3Fields {
    // LOW 32 Bits Multiple Error Read Data On OCRAM Bank3
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataLow3Fields

  struct MULTI_ERR_DATA_LOW3 : ftl::mmio::Register<
      kBase + 0xB4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataLow3Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataLow3Fields::MULTI_ERR_DATA;
  };

  // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank3
  struct MultiErrDataHigh3Fields {
    // HIGH 32 Bits Multiple Error Read Data On OCRAM Bank3
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataHigh3Fields

  struct MULTI_ERR_DATA_HIGH3 : ftl::mmio::Register<
      kBase + 0xB8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MultiErrDataHigh3Fields::MULTI_ERR_DATA> {
    using MULTI_ERR_DATA = typename MultiErrDataHigh3Fields::MULTI_ERR_DATA;
  };

  // OCRAM Pipeline And ECC Enable
  struct PipeEccEnFields {
    enum class eREAD_DATA_WAIT_EN : std::uint32_t {
      // Disable.
      eREAD_DATA_WAIT_EN_0 = 0,
      // Enable.
      eREAD_DATA_WAIT_EN_1 = 1,
    };

    enum class eREAD_ADDR_PIPE_EN : std::uint32_t {
      // Disable.
      eREAD_ADDR_PIPE_EN_0 = 0,
      // Enable.
      eREAD_ADDR_PIPE_EN_1 = 1,
    };

    enum class eWRITE_DATA_PIPE_EN : std::uint32_t {
      // Disable.
      eWRITE_DATA_PIPE_EN_0 = 0,
      // Enable.
      eWRITE_DATA_PIPE_EN_1 = 1,
    };

    enum class eWRITE_ADDR_PIPE_EN : std::uint32_t {
      // Disable.
      eWRITE_ADDR_PIPE_EN_0 = 0,
      // Enable.
      eWRITE_ADDR_PIPE_EN_1 = 1,
    };

    enum class eECC_EN : std::uint32_t {
      // Disable.
      eECC_EN_0 = 0,
      // Enable.
      eECC_EN_1 = 1,
    };

    // Read Data Wait Enable
    using READ_DATA_WAIT_EN = ftl::mmio::Field<1, 0, eREAD_DATA_WAIT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read Address Pipeline Enable
    using READ_ADDR_PIPE_EN = ftl::mmio::Field<1, 1, eREAD_ADDR_PIPE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Data Pipeline Enable
    using WRITE_DATA_PIPE_EN = ftl::mmio::Field<1, 2, eWRITE_DATA_PIPE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write Address Pipeline Enable
    using WRITE_ADDR_PIPE_EN = ftl::mmio::Field<1, 3, eWRITE_ADDR_PIPE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ECC Function Enable
    using ECC_EN = ftl::mmio::Field<1, 4, eECC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PipeEccEnFields

  struct PIPE_ECC_EN : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename PipeEccEnFields::READ_DATA_WAIT_EN,
      typename PipeEccEnFields::READ_ADDR_PIPE_EN,
      typename PipeEccEnFields::WRITE_DATA_PIPE_EN,
      typename PipeEccEnFields::WRITE_ADDR_PIPE_EN,
      typename PipeEccEnFields::ECC_EN,
      ftl::mmio::Reserved<27, 5>> {
    using eREAD_DATA_WAIT_EN = typename PipeEccEnFields::eREAD_DATA_WAIT_EN;
    using eREAD_ADDR_PIPE_EN = typename PipeEccEnFields::eREAD_ADDR_PIPE_EN;
    using eWRITE_DATA_PIPE_EN = typename PipeEccEnFields::eWRITE_DATA_PIPE_EN;
    using eWRITE_ADDR_PIPE_EN = typename PipeEccEnFields::eWRITE_ADDR_PIPE_EN;
    using eECC_EN = typename PipeEccEnFields::eECC_EN;
    using READ_DATA_WAIT_EN = typename PipeEccEnFields::READ_DATA_WAIT_EN;
    using READ_ADDR_PIPE_EN = typename PipeEccEnFields::READ_ADDR_PIPE_EN;
    using WRITE_DATA_PIPE_EN = typename PipeEccEnFields::WRITE_DATA_PIPE_EN;
    using WRITE_ADDR_PIPE_EN = typename PipeEccEnFields::WRITE_ADDR_PIPE_EN;
    using ECC_EN = typename PipeEccEnFields::ECC_EN;
  };

  // Pending Status
  struct PendingStatFields {
    enum class eREAD_DATA_WAIT_PENDING : std::uint32_t {
      // No update pending status for READ_DATA_WAIT_EN.
      eREAD_DATA_WAIT_PENDING_0 = 0,
      // When READ_DATA_WAIT_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
      eREAD_DATA_WAIT_PENDING_1 = 1,
    };

    enum class eREAD_ADDR_PIPE_PENDING : std::uint32_t {
      // No update pending status for READ_ADDR_PIPE_EN.
      eREAD_ADDR_PIPE_PENDING_0 = 0,
      // When READ_ADDR_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
      eREAD_ADDR_PIPE_PENDING_1 = 1,
    };

    enum class eWRITE_DATA_PIPE_PENDING : std::uint32_t {
      // No update pending status for WRITE_DATA_PIPE_EN.
      eWRITE_DATA_PIPE_PENDING_0 = 0,
      // When WRITE_DATA_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
      eWRITE_DATA_PIPE_PENDING_1 = 1,
    };

    enum class eWRITE_ADDR_PIPE_PENDING : std::uint32_t {
      // No update pending status for WRITE_ADDR_PIPE_EN.
      eWRITE_ADDR_PIPE_PENDING_0 = 0,
      // When WRITE_ADDR_PIPE_EN register bit is changed, this register bit will be set until the new setup becomes valid in the controller.
      eWRITE_ADDR_PIPE_PENDING_1 = 1,
    };

    // Read Data Wait Pending
    using READ_DATA_WAIT_PENDING = ftl::mmio::Field<1, 0, eREAD_DATA_WAIT_PENDING, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read Address Pipeline Pending
    using READ_ADDR_PIPE_PENDING = ftl::mmio::Field<1, 1, eREAD_ADDR_PIPE_PENDING, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Data Pipeline Pending
    using WRITE_DATA_PIPE_PENDING = ftl::mmio::Field<1, 2, eWRITE_DATA_PIPE_PENDING, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write Address Pipeline Pending
    using WRITE_ADDR_PIPE_PENDING = ftl::mmio::Field<1, 3, eWRITE_ADDR_PIPE_PENDING, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PendingStatFields

  struct PENDING_STAT : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename PendingStatFields::READ_DATA_WAIT_PENDING,
      typename PendingStatFields::READ_ADDR_PIPE_PENDING,
      typename PendingStatFields::WRITE_DATA_PIPE_PENDING,
      typename PendingStatFields::WRITE_ADDR_PIPE_PENDING,
      ftl::mmio::Reserved<28, 4>> {
    using eREAD_DATA_WAIT_PENDING = typename PendingStatFields::eREAD_DATA_WAIT_PENDING;
    using eREAD_ADDR_PIPE_PENDING = typename PendingStatFields::eREAD_ADDR_PIPE_PENDING;
    using eWRITE_DATA_PIPE_PENDING = typename PendingStatFields::eWRITE_DATA_PIPE_PENDING;
    using eWRITE_ADDR_PIPE_PENDING = typename PendingStatFields::eWRITE_ADDR_PIPE_PENDING;
    using READ_DATA_WAIT_PENDING = typename PendingStatFields::READ_DATA_WAIT_PENDING;
    using READ_ADDR_PIPE_PENDING = typename PendingStatFields::READ_ADDR_PIPE_PENDING;
    using WRITE_DATA_PIPE_PENDING = typename PendingStatFields::WRITE_DATA_PIPE_PENDING;
    using WRITE_ADDR_PIPE_PENDING = typename PendingStatFields::WRITE_ADDR_PIPE_PENDING;
  };

};

}  // namespace regs