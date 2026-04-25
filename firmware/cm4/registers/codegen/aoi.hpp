#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// AOI
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Aoi {
  static_assert( Instance == 1u || Instance == 2u,
      "Aoi: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400B8000u :
      Instance == 2u ? 0x400BC000u :
      0u;

  
// Boolean Function Term 0 and 1 Configuration Register for EVENTn
struct BFCRT010_fields_ {

  enum class ePT1_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT1_DC_0 = 0,
    // Pass the D input in this product term
    ePT1_DC_1 = 1,
    // Complement the D input in this product term
    ePT1_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT1_DC_3 = 3,
  };

  enum class ePT1_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT1_CC_0 = 0,
    // Pass the C input in this product term
    ePT1_CC_1 = 1,
    // Complement the C input in this product term
    ePT1_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT1_CC_3 = 3,
  };

  enum class ePT1_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT1_BC_0 = 0,
    // Pass the B input in this product term
    ePT1_BC_1 = 1,
    // Complement the B input in this product term
    ePT1_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT1_BC_3 = 3,
  };

  enum class ePT1_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT1_AC_0 = 0,
    // Pass the A input in this product term
    ePT1_AC_1 = 1,
    // Complement the A input in this product term
    ePT1_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT1_AC_3 = 3,
  };

  enum class ePT0_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT0_DC_0 = 0,
    // Pass the D input in this product term
    ePT0_DC_1 = 1,
    // Complement the D input in this product term
    ePT0_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT0_DC_3 = 3,
  };

  enum class ePT0_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT0_CC_0 = 0,
    // Pass the C input in this product term
    ePT0_CC_1 = 1,
    // Complement the C input in this product term
    ePT0_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT0_CC_3 = 3,
  };

  enum class ePT0_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT0_BC_0 = 0,
    // Pass the B input in this product term
    ePT0_BC_1 = 1,
    // Complement the B input in this product term
    ePT0_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT0_BC_3 = 3,
  };

  enum class ePT0_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT0_AC_0 = 0,
    // Pass the A input in this product term
    ePT0_AC_1 = 1,
    // Complement the A input in this product term
    ePT0_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT0_AC_3 = 3,
  };
  // Product term 1, D input configuration
  using PT1_DC = ftl::mmio::Field<2, 0, ePT1_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, C input configuration
  using PT1_CC = ftl::mmio::Field<2, 2, ePT1_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, B input configuration
  using PT1_BC = ftl::mmio::Field<2, 4, ePT1_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, A input configuration
  using PT1_AC = ftl::mmio::Field<2, 6, ePT1_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, D input configuration
  using PT0_DC = ftl::mmio::Field<2, 8, ePT0_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, C input configuration
  using PT0_CC = ftl::mmio::Field<2, 10, ePT0_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, B input configuration
  using PT0_BC = ftl::mmio::Field<2, 12, ePT0_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, A input configuration
  using PT0_AC = ftl::mmio::Field<2, 14, ePT0_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT010_fields_

struct BFCRT010 : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT010_fields_::PT1_DC,
    typename BFCRT010_fields_::PT1_CC,
    typename BFCRT010_fields_::PT1_BC,
    typename BFCRT010_fields_::PT1_AC,
    typename BFCRT010_fields_::PT0_DC,
    typename BFCRT010_fields_::PT0_CC,
    typename BFCRT010_fields_::PT0_BC,
    typename BFCRT010_fields_::PT0_AC> {
  using ePT1_DC = typename BFCRT010_fields_::ePT1_DC;
  using ePT1_CC = typename BFCRT010_fields_::ePT1_CC;
  using ePT1_BC = typename BFCRT010_fields_::ePT1_BC;
  using ePT1_AC = typename BFCRT010_fields_::ePT1_AC;
  using ePT0_DC = typename BFCRT010_fields_::ePT0_DC;
  using ePT0_CC = typename BFCRT010_fields_::ePT0_CC;
  using ePT0_BC = typename BFCRT010_fields_::ePT0_BC;
  using ePT0_AC = typename BFCRT010_fields_::ePT0_AC;
  using PT1_DC = typename BFCRT010_fields_::PT1_DC;
  using PT1_CC = typename BFCRT010_fields_::PT1_CC;
  using PT1_BC = typename BFCRT010_fields_::PT1_BC;
  using PT1_AC = typename BFCRT010_fields_::PT1_AC;
  using PT0_DC = typename BFCRT010_fields_::PT0_DC;
  using PT0_CC = typename BFCRT010_fields_::PT0_CC;
  using PT0_BC = typename BFCRT010_fields_::PT0_BC;
  using PT0_AC = typename BFCRT010_fields_::PT0_AC;
};

  
// Boolean Function Term 2 and 3 Configuration Register for EVENTn
struct BFCRT230_fields_ {

  enum class ePT3_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT3_DC_0 = 0,
    // Pass the D input in this product term
    ePT3_DC_1 = 1,
    // Complement the D input in this product term
    ePT3_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT3_DC_3 = 3,
  };

  enum class ePT3_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT3_CC_0 = 0,
    // Pass the C input in this product term
    ePT3_CC_1 = 1,
    // Complement the C input in this product term
    ePT3_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT3_CC_3 = 3,
  };

  enum class ePT3_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT3_BC_0 = 0,
    // Pass the B input in this product term
    ePT3_BC_1 = 1,
    // Complement the B input in this product term
    ePT3_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT3_BC_3 = 3,
  };

  enum class ePT3_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT3_AC_0 = 0,
    // Pass the A input in this product term
    ePT3_AC_1 = 1,
    // Complement the A input in this product term
    ePT3_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT3_AC_3 = 3,
  };

  enum class ePT2_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT2_DC_0 = 0,
    // Pass the D input in this product term
    ePT2_DC_1 = 1,
    // Complement the D input in this product term
    ePT2_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT2_DC_3 = 3,
  };

  enum class ePT2_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT2_CC_0 = 0,
    // Pass the C input in this product term
    ePT2_CC_1 = 1,
    // Complement the C input in this product term
    ePT2_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT2_CC_3 = 3,
  };

  enum class ePT2_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT2_BC_0 = 0,
    // Pass the B input in this product term
    ePT2_BC_1 = 1,
    // Complement the B input in this product term
    ePT2_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT2_BC_3 = 3,
  };

  enum class ePT2_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT2_AC_0 = 0,
    // Pass the A input in this product term
    ePT2_AC_1 = 1,
    // Complement the A input in this product term
    ePT2_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT2_AC_3 = 3,
  };
  // Product term 3, D input configuration
  using PT3_DC = ftl::mmio::Field<2, 0, ePT3_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, C input configuration
  using PT3_CC = ftl::mmio::Field<2, 2, ePT3_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, B input configuration
  using PT3_BC = ftl::mmio::Field<2, 4, ePT3_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, A input configuration
  using PT3_AC = ftl::mmio::Field<2, 6, ePT3_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, D input configuration
  using PT2_DC = ftl::mmio::Field<2, 8, ePT2_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, C input configuration
  using PT2_CC = ftl::mmio::Field<2, 10, ePT2_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, B input configuration
  using PT2_BC = ftl::mmio::Field<2, 12, ePT2_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, A input configuration
  using PT2_AC = ftl::mmio::Field<2, 14, ePT2_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT230_fields_

struct BFCRT230 : ftl::mmio::Register<
    kBase + 0x2u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT230_fields_::PT3_DC,
    typename BFCRT230_fields_::PT3_CC,
    typename BFCRT230_fields_::PT3_BC,
    typename BFCRT230_fields_::PT3_AC,
    typename BFCRT230_fields_::PT2_DC,
    typename BFCRT230_fields_::PT2_CC,
    typename BFCRT230_fields_::PT2_BC,
    typename BFCRT230_fields_::PT2_AC> {
  using ePT3_DC = typename BFCRT230_fields_::ePT3_DC;
  using ePT3_CC = typename BFCRT230_fields_::ePT3_CC;
  using ePT3_BC = typename BFCRT230_fields_::ePT3_BC;
  using ePT3_AC = typename BFCRT230_fields_::ePT3_AC;
  using ePT2_DC = typename BFCRT230_fields_::ePT2_DC;
  using ePT2_CC = typename BFCRT230_fields_::ePT2_CC;
  using ePT2_BC = typename BFCRT230_fields_::ePT2_BC;
  using ePT2_AC = typename BFCRT230_fields_::ePT2_AC;
  using PT3_DC = typename BFCRT230_fields_::PT3_DC;
  using PT3_CC = typename BFCRT230_fields_::PT3_CC;
  using PT3_BC = typename BFCRT230_fields_::PT3_BC;
  using PT3_AC = typename BFCRT230_fields_::PT3_AC;
  using PT2_DC = typename BFCRT230_fields_::PT2_DC;
  using PT2_CC = typename BFCRT230_fields_::PT2_CC;
  using PT2_BC = typename BFCRT230_fields_::PT2_BC;
  using PT2_AC = typename BFCRT230_fields_::PT2_AC;
};

  
// Boolean Function Term 0 and 1 Configuration Register for EVENTn
struct BFCRT011_fields_ {

  enum class ePT1_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT1_DC_0 = 0,
    // Pass the D input in this product term
    ePT1_DC_1 = 1,
    // Complement the D input in this product term
    ePT1_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT1_DC_3 = 3,
  };

  enum class ePT1_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT1_CC_0 = 0,
    // Pass the C input in this product term
    ePT1_CC_1 = 1,
    // Complement the C input in this product term
    ePT1_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT1_CC_3 = 3,
  };

  enum class ePT1_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT1_BC_0 = 0,
    // Pass the B input in this product term
    ePT1_BC_1 = 1,
    // Complement the B input in this product term
    ePT1_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT1_BC_3 = 3,
  };

  enum class ePT1_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT1_AC_0 = 0,
    // Pass the A input in this product term
    ePT1_AC_1 = 1,
    // Complement the A input in this product term
    ePT1_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT1_AC_3 = 3,
  };

  enum class ePT0_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT0_DC_0 = 0,
    // Pass the D input in this product term
    ePT0_DC_1 = 1,
    // Complement the D input in this product term
    ePT0_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT0_DC_3 = 3,
  };

  enum class ePT0_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT0_CC_0 = 0,
    // Pass the C input in this product term
    ePT0_CC_1 = 1,
    // Complement the C input in this product term
    ePT0_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT0_CC_3 = 3,
  };

  enum class ePT0_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT0_BC_0 = 0,
    // Pass the B input in this product term
    ePT0_BC_1 = 1,
    // Complement the B input in this product term
    ePT0_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT0_BC_3 = 3,
  };

  enum class ePT0_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT0_AC_0 = 0,
    // Pass the A input in this product term
    ePT0_AC_1 = 1,
    // Complement the A input in this product term
    ePT0_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT0_AC_3 = 3,
  };
  // Product term 1, D input configuration
  using PT1_DC = ftl::mmio::Field<2, 0, ePT1_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, C input configuration
  using PT1_CC = ftl::mmio::Field<2, 2, ePT1_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, B input configuration
  using PT1_BC = ftl::mmio::Field<2, 4, ePT1_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, A input configuration
  using PT1_AC = ftl::mmio::Field<2, 6, ePT1_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, D input configuration
  using PT0_DC = ftl::mmio::Field<2, 8, ePT0_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, C input configuration
  using PT0_CC = ftl::mmio::Field<2, 10, ePT0_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, B input configuration
  using PT0_BC = ftl::mmio::Field<2, 12, ePT0_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, A input configuration
  using PT0_AC = ftl::mmio::Field<2, 14, ePT0_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT011_fields_

struct BFCRT011 : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT011_fields_::PT1_DC,
    typename BFCRT011_fields_::PT1_CC,
    typename BFCRT011_fields_::PT1_BC,
    typename BFCRT011_fields_::PT1_AC,
    typename BFCRT011_fields_::PT0_DC,
    typename BFCRT011_fields_::PT0_CC,
    typename BFCRT011_fields_::PT0_BC,
    typename BFCRT011_fields_::PT0_AC> {
  using ePT1_DC = typename BFCRT011_fields_::ePT1_DC;
  using ePT1_CC = typename BFCRT011_fields_::ePT1_CC;
  using ePT1_BC = typename BFCRT011_fields_::ePT1_BC;
  using ePT1_AC = typename BFCRT011_fields_::ePT1_AC;
  using ePT0_DC = typename BFCRT011_fields_::ePT0_DC;
  using ePT0_CC = typename BFCRT011_fields_::ePT0_CC;
  using ePT0_BC = typename BFCRT011_fields_::ePT0_BC;
  using ePT0_AC = typename BFCRT011_fields_::ePT0_AC;
  using PT1_DC = typename BFCRT011_fields_::PT1_DC;
  using PT1_CC = typename BFCRT011_fields_::PT1_CC;
  using PT1_BC = typename BFCRT011_fields_::PT1_BC;
  using PT1_AC = typename BFCRT011_fields_::PT1_AC;
  using PT0_DC = typename BFCRT011_fields_::PT0_DC;
  using PT0_CC = typename BFCRT011_fields_::PT0_CC;
  using PT0_BC = typename BFCRT011_fields_::PT0_BC;
  using PT0_AC = typename BFCRT011_fields_::PT0_AC;
};

  
// Boolean Function Term 2 and 3 Configuration Register for EVENTn
struct BFCRT231_fields_ {

  enum class ePT3_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT3_DC_0 = 0,
    // Pass the D input in this product term
    ePT3_DC_1 = 1,
    // Complement the D input in this product term
    ePT3_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT3_DC_3 = 3,
  };

  enum class ePT3_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT3_CC_0 = 0,
    // Pass the C input in this product term
    ePT3_CC_1 = 1,
    // Complement the C input in this product term
    ePT3_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT3_CC_3 = 3,
  };

  enum class ePT3_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT3_BC_0 = 0,
    // Pass the B input in this product term
    ePT3_BC_1 = 1,
    // Complement the B input in this product term
    ePT3_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT3_BC_3 = 3,
  };

  enum class ePT3_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT3_AC_0 = 0,
    // Pass the A input in this product term
    ePT3_AC_1 = 1,
    // Complement the A input in this product term
    ePT3_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT3_AC_3 = 3,
  };

  enum class ePT2_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT2_DC_0 = 0,
    // Pass the D input in this product term
    ePT2_DC_1 = 1,
    // Complement the D input in this product term
    ePT2_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT2_DC_3 = 3,
  };

  enum class ePT2_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT2_CC_0 = 0,
    // Pass the C input in this product term
    ePT2_CC_1 = 1,
    // Complement the C input in this product term
    ePT2_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT2_CC_3 = 3,
  };

  enum class ePT2_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT2_BC_0 = 0,
    // Pass the B input in this product term
    ePT2_BC_1 = 1,
    // Complement the B input in this product term
    ePT2_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT2_BC_3 = 3,
  };

  enum class ePT2_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT2_AC_0 = 0,
    // Pass the A input in this product term
    ePT2_AC_1 = 1,
    // Complement the A input in this product term
    ePT2_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT2_AC_3 = 3,
  };
  // Product term 3, D input configuration
  using PT3_DC = ftl::mmio::Field<2, 0, ePT3_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, C input configuration
  using PT3_CC = ftl::mmio::Field<2, 2, ePT3_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, B input configuration
  using PT3_BC = ftl::mmio::Field<2, 4, ePT3_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, A input configuration
  using PT3_AC = ftl::mmio::Field<2, 6, ePT3_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, D input configuration
  using PT2_DC = ftl::mmio::Field<2, 8, ePT2_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, C input configuration
  using PT2_CC = ftl::mmio::Field<2, 10, ePT2_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, B input configuration
  using PT2_BC = ftl::mmio::Field<2, 12, ePT2_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, A input configuration
  using PT2_AC = ftl::mmio::Field<2, 14, ePT2_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT231_fields_

struct BFCRT231 : ftl::mmio::Register<
    kBase + 0x6u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT231_fields_::PT3_DC,
    typename BFCRT231_fields_::PT3_CC,
    typename BFCRT231_fields_::PT3_BC,
    typename BFCRT231_fields_::PT3_AC,
    typename BFCRT231_fields_::PT2_DC,
    typename BFCRT231_fields_::PT2_CC,
    typename BFCRT231_fields_::PT2_BC,
    typename BFCRT231_fields_::PT2_AC> {
  using ePT3_DC = typename BFCRT231_fields_::ePT3_DC;
  using ePT3_CC = typename BFCRT231_fields_::ePT3_CC;
  using ePT3_BC = typename BFCRT231_fields_::ePT3_BC;
  using ePT3_AC = typename BFCRT231_fields_::ePT3_AC;
  using ePT2_DC = typename BFCRT231_fields_::ePT2_DC;
  using ePT2_CC = typename BFCRT231_fields_::ePT2_CC;
  using ePT2_BC = typename BFCRT231_fields_::ePT2_BC;
  using ePT2_AC = typename BFCRT231_fields_::ePT2_AC;
  using PT3_DC = typename BFCRT231_fields_::PT3_DC;
  using PT3_CC = typename BFCRT231_fields_::PT3_CC;
  using PT3_BC = typename BFCRT231_fields_::PT3_BC;
  using PT3_AC = typename BFCRT231_fields_::PT3_AC;
  using PT2_DC = typename BFCRT231_fields_::PT2_DC;
  using PT2_CC = typename BFCRT231_fields_::PT2_CC;
  using PT2_BC = typename BFCRT231_fields_::PT2_BC;
  using PT2_AC = typename BFCRT231_fields_::PT2_AC;
};

  
// Boolean Function Term 0 and 1 Configuration Register for EVENTn
struct BFCRT012_fields_ {

  enum class ePT1_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT1_DC_0 = 0,
    // Pass the D input in this product term
    ePT1_DC_1 = 1,
    // Complement the D input in this product term
    ePT1_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT1_DC_3 = 3,
  };

  enum class ePT1_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT1_CC_0 = 0,
    // Pass the C input in this product term
    ePT1_CC_1 = 1,
    // Complement the C input in this product term
    ePT1_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT1_CC_3 = 3,
  };

  enum class ePT1_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT1_BC_0 = 0,
    // Pass the B input in this product term
    ePT1_BC_1 = 1,
    // Complement the B input in this product term
    ePT1_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT1_BC_3 = 3,
  };

  enum class ePT1_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT1_AC_0 = 0,
    // Pass the A input in this product term
    ePT1_AC_1 = 1,
    // Complement the A input in this product term
    ePT1_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT1_AC_3 = 3,
  };

  enum class ePT0_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT0_DC_0 = 0,
    // Pass the D input in this product term
    ePT0_DC_1 = 1,
    // Complement the D input in this product term
    ePT0_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT0_DC_3 = 3,
  };

  enum class ePT0_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT0_CC_0 = 0,
    // Pass the C input in this product term
    ePT0_CC_1 = 1,
    // Complement the C input in this product term
    ePT0_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT0_CC_3 = 3,
  };

  enum class ePT0_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT0_BC_0 = 0,
    // Pass the B input in this product term
    ePT0_BC_1 = 1,
    // Complement the B input in this product term
    ePT0_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT0_BC_3 = 3,
  };

  enum class ePT0_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT0_AC_0 = 0,
    // Pass the A input in this product term
    ePT0_AC_1 = 1,
    // Complement the A input in this product term
    ePT0_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT0_AC_3 = 3,
  };
  // Product term 1, D input configuration
  using PT1_DC = ftl::mmio::Field<2, 0, ePT1_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, C input configuration
  using PT1_CC = ftl::mmio::Field<2, 2, ePT1_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, B input configuration
  using PT1_BC = ftl::mmio::Field<2, 4, ePT1_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, A input configuration
  using PT1_AC = ftl::mmio::Field<2, 6, ePT1_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, D input configuration
  using PT0_DC = ftl::mmio::Field<2, 8, ePT0_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, C input configuration
  using PT0_CC = ftl::mmio::Field<2, 10, ePT0_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, B input configuration
  using PT0_BC = ftl::mmio::Field<2, 12, ePT0_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, A input configuration
  using PT0_AC = ftl::mmio::Field<2, 14, ePT0_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT012_fields_

struct BFCRT012 : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT012_fields_::PT1_DC,
    typename BFCRT012_fields_::PT1_CC,
    typename BFCRT012_fields_::PT1_BC,
    typename BFCRT012_fields_::PT1_AC,
    typename BFCRT012_fields_::PT0_DC,
    typename BFCRT012_fields_::PT0_CC,
    typename BFCRT012_fields_::PT0_BC,
    typename BFCRT012_fields_::PT0_AC> {
  using ePT1_DC = typename BFCRT012_fields_::ePT1_DC;
  using ePT1_CC = typename BFCRT012_fields_::ePT1_CC;
  using ePT1_BC = typename BFCRT012_fields_::ePT1_BC;
  using ePT1_AC = typename BFCRT012_fields_::ePT1_AC;
  using ePT0_DC = typename BFCRT012_fields_::ePT0_DC;
  using ePT0_CC = typename BFCRT012_fields_::ePT0_CC;
  using ePT0_BC = typename BFCRT012_fields_::ePT0_BC;
  using ePT0_AC = typename BFCRT012_fields_::ePT0_AC;
  using PT1_DC = typename BFCRT012_fields_::PT1_DC;
  using PT1_CC = typename BFCRT012_fields_::PT1_CC;
  using PT1_BC = typename BFCRT012_fields_::PT1_BC;
  using PT1_AC = typename BFCRT012_fields_::PT1_AC;
  using PT0_DC = typename BFCRT012_fields_::PT0_DC;
  using PT0_CC = typename BFCRT012_fields_::PT0_CC;
  using PT0_BC = typename BFCRT012_fields_::PT0_BC;
  using PT0_AC = typename BFCRT012_fields_::PT0_AC;
};

  
// Boolean Function Term 2 and 3 Configuration Register for EVENTn
struct BFCRT232_fields_ {

  enum class ePT3_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT3_DC_0 = 0,
    // Pass the D input in this product term
    ePT3_DC_1 = 1,
    // Complement the D input in this product term
    ePT3_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT3_DC_3 = 3,
  };

  enum class ePT3_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT3_CC_0 = 0,
    // Pass the C input in this product term
    ePT3_CC_1 = 1,
    // Complement the C input in this product term
    ePT3_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT3_CC_3 = 3,
  };

  enum class ePT3_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT3_BC_0 = 0,
    // Pass the B input in this product term
    ePT3_BC_1 = 1,
    // Complement the B input in this product term
    ePT3_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT3_BC_3 = 3,
  };

  enum class ePT3_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT3_AC_0 = 0,
    // Pass the A input in this product term
    ePT3_AC_1 = 1,
    // Complement the A input in this product term
    ePT3_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT3_AC_3 = 3,
  };

  enum class ePT2_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT2_DC_0 = 0,
    // Pass the D input in this product term
    ePT2_DC_1 = 1,
    // Complement the D input in this product term
    ePT2_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT2_DC_3 = 3,
  };

  enum class ePT2_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT2_CC_0 = 0,
    // Pass the C input in this product term
    ePT2_CC_1 = 1,
    // Complement the C input in this product term
    ePT2_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT2_CC_3 = 3,
  };

  enum class ePT2_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT2_BC_0 = 0,
    // Pass the B input in this product term
    ePT2_BC_1 = 1,
    // Complement the B input in this product term
    ePT2_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT2_BC_3 = 3,
  };

  enum class ePT2_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT2_AC_0 = 0,
    // Pass the A input in this product term
    ePT2_AC_1 = 1,
    // Complement the A input in this product term
    ePT2_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT2_AC_3 = 3,
  };
  // Product term 3, D input configuration
  using PT3_DC = ftl::mmio::Field<2, 0, ePT3_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, C input configuration
  using PT3_CC = ftl::mmio::Field<2, 2, ePT3_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, B input configuration
  using PT3_BC = ftl::mmio::Field<2, 4, ePT3_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, A input configuration
  using PT3_AC = ftl::mmio::Field<2, 6, ePT3_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, D input configuration
  using PT2_DC = ftl::mmio::Field<2, 8, ePT2_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, C input configuration
  using PT2_CC = ftl::mmio::Field<2, 10, ePT2_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, B input configuration
  using PT2_BC = ftl::mmio::Field<2, 12, ePT2_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, A input configuration
  using PT2_AC = ftl::mmio::Field<2, 14, ePT2_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT232_fields_

struct BFCRT232 : ftl::mmio::Register<
    kBase + 0xAu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT232_fields_::PT3_DC,
    typename BFCRT232_fields_::PT3_CC,
    typename BFCRT232_fields_::PT3_BC,
    typename BFCRT232_fields_::PT3_AC,
    typename BFCRT232_fields_::PT2_DC,
    typename BFCRT232_fields_::PT2_CC,
    typename BFCRT232_fields_::PT2_BC,
    typename BFCRT232_fields_::PT2_AC> {
  using ePT3_DC = typename BFCRT232_fields_::ePT3_DC;
  using ePT3_CC = typename BFCRT232_fields_::ePT3_CC;
  using ePT3_BC = typename BFCRT232_fields_::ePT3_BC;
  using ePT3_AC = typename BFCRT232_fields_::ePT3_AC;
  using ePT2_DC = typename BFCRT232_fields_::ePT2_DC;
  using ePT2_CC = typename BFCRT232_fields_::ePT2_CC;
  using ePT2_BC = typename BFCRT232_fields_::ePT2_BC;
  using ePT2_AC = typename BFCRT232_fields_::ePT2_AC;
  using PT3_DC = typename BFCRT232_fields_::PT3_DC;
  using PT3_CC = typename BFCRT232_fields_::PT3_CC;
  using PT3_BC = typename BFCRT232_fields_::PT3_BC;
  using PT3_AC = typename BFCRT232_fields_::PT3_AC;
  using PT2_DC = typename BFCRT232_fields_::PT2_DC;
  using PT2_CC = typename BFCRT232_fields_::PT2_CC;
  using PT2_BC = typename BFCRT232_fields_::PT2_BC;
  using PT2_AC = typename BFCRT232_fields_::PT2_AC;
};

  
// Boolean Function Term 0 and 1 Configuration Register for EVENTn
struct BFCRT013_fields_ {

  enum class ePT1_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT1_DC_0 = 0,
    // Pass the D input in this product term
    ePT1_DC_1 = 1,
    // Complement the D input in this product term
    ePT1_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT1_DC_3 = 3,
  };

  enum class ePT1_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT1_CC_0 = 0,
    // Pass the C input in this product term
    ePT1_CC_1 = 1,
    // Complement the C input in this product term
    ePT1_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT1_CC_3 = 3,
  };

  enum class ePT1_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT1_BC_0 = 0,
    // Pass the B input in this product term
    ePT1_BC_1 = 1,
    // Complement the B input in this product term
    ePT1_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT1_BC_3 = 3,
  };

  enum class ePT1_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT1_AC_0 = 0,
    // Pass the A input in this product term
    ePT1_AC_1 = 1,
    // Complement the A input in this product term
    ePT1_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT1_AC_3 = 3,
  };

  enum class ePT0_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT0_DC_0 = 0,
    // Pass the D input in this product term
    ePT0_DC_1 = 1,
    // Complement the D input in this product term
    ePT0_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT0_DC_3 = 3,
  };

  enum class ePT0_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT0_CC_0 = 0,
    // Pass the C input in this product term
    ePT0_CC_1 = 1,
    // Complement the C input in this product term
    ePT0_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT0_CC_3 = 3,
  };

  enum class ePT0_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT0_BC_0 = 0,
    // Pass the B input in this product term
    ePT0_BC_1 = 1,
    // Complement the B input in this product term
    ePT0_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT0_BC_3 = 3,
  };

  enum class ePT0_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT0_AC_0 = 0,
    // Pass the A input in this product term
    ePT0_AC_1 = 1,
    // Complement the A input in this product term
    ePT0_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT0_AC_3 = 3,
  };
  // Product term 1, D input configuration
  using PT1_DC = ftl::mmio::Field<2, 0, ePT1_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, C input configuration
  using PT1_CC = ftl::mmio::Field<2, 2, ePT1_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, B input configuration
  using PT1_BC = ftl::mmio::Field<2, 4, ePT1_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 1, A input configuration
  using PT1_AC = ftl::mmio::Field<2, 6, ePT1_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, D input configuration
  using PT0_DC = ftl::mmio::Field<2, 8, ePT0_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, C input configuration
  using PT0_CC = ftl::mmio::Field<2, 10, ePT0_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, B input configuration
  using PT0_BC = ftl::mmio::Field<2, 12, ePT0_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 0, A input configuration
  using PT0_AC = ftl::mmio::Field<2, 14, ePT0_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT013_fields_

struct BFCRT013 : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT013_fields_::PT1_DC,
    typename BFCRT013_fields_::PT1_CC,
    typename BFCRT013_fields_::PT1_BC,
    typename BFCRT013_fields_::PT1_AC,
    typename BFCRT013_fields_::PT0_DC,
    typename BFCRT013_fields_::PT0_CC,
    typename BFCRT013_fields_::PT0_BC,
    typename BFCRT013_fields_::PT0_AC> {
  using ePT1_DC = typename BFCRT013_fields_::ePT1_DC;
  using ePT1_CC = typename BFCRT013_fields_::ePT1_CC;
  using ePT1_BC = typename BFCRT013_fields_::ePT1_BC;
  using ePT1_AC = typename BFCRT013_fields_::ePT1_AC;
  using ePT0_DC = typename BFCRT013_fields_::ePT0_DC;
  using ePT0_CC = typename BFCRT013_fields_::ePT0_CC;
  using ePT0_BC = typename BFCRT013_fields_::ePT0_BC;
  using ePT0_AC = typename BFCRT013_fields_::ePT0_AC;
  using PT1_DC = typename BFCRT013_fields_::PT1_DC;
  using PT1_CC = typename BFCRT013_fields_::PT1_CC;
  using PT1_BC = typename BFCRT013_fields_::PT1_BC;
  using PT1_AC = typename BFCRT013_fields_::PT1_AC;
  using PT0_DC = typename BFCRT013_fields_::PT0_DC;
  using PT0_CC = typename BFCRT013_fields_::PT0_CC;
  using PT0_BC = typename BFCRT013_fields_::PT0_BC;
  using PT0_AC = typename BFCRT013_fields_::PT0_AC;
};

  
// Boolean Function Term 2 and 3 Configuration Register for EVENTn
struct BFCRT233_fields_ {

  enum class ePT3_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT3_DC_0 = 0,
    // Pass the D input in this product term
    ePT3_DC_1 = 1,
    // Complement the D input in this product term
    ePT3_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT3_DC_3 = 3,
  };

  enum class ePT3_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT3_CC_0 = 0,
    // Pass the C input in this product term
    ePT3_CC_1 = 1,
    // Complement the C input in this product term
    ePT3_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT3_CC_3 = 3,
  };

  enum class ePT3_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT3_BC_0 = 0,
    // Pass the B input in this product term
    ePT3_BC_1 = 1,
    // Complement the B input in this product term
    ePT3_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT3_BC_3 = 3,
  };

  enum class ePT3_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT3_AC_0 = 0,
    // Pass the A input in this product term
    ePT3_AC_1 = 1,
    // Complement the A input in this product term
    ePT3_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT3_AC_3 = 3,
  };

  enum class ePT2_DC : std::uint32_t {
    // Force the D input in this product term to a logical zero
    ePT2_DC_0 = 0,
    // Pass the D input in this product term
    ePT2_DC_1 = 1,
    // Complement the D input in this product term
    ePT2_DC_2 = 2,
    // Force the D input in this product term to a logical one
    ePT2_DC_3 = 3,
  };

  enum class ePT2_CC : std::uint32_t {
    // Force the C input in this product term to a logical zero
    ePT2_CC_0 = 0,
    // Pass the C input in this product term
    ePT2_CC_1 = 1,
    // Complement the C input in this product term
    ePT2_CC_2 = 2,
    // Force the C input in this product term to a logical one
    ePT2_CC_3 = 3,
  };

  enum class ePT2_BC : std::uint32_t {
    // Force the B input in this product term to a logical zero
    ePT2_BC_0 = 0,
    // Pass the B input in this product term
    ePT2_BC_1 = 1,
    // Complement the B input in this product term
    ePT2_BC_2 = 2,
    // Force the B input in this product term to a logical one
    ePT2_BC_3 = 3,
  };

  enum class ePT2_AC : std::uint32_t {
    // Force the A input in this product term to a logical zero
    ePT2_AC_0 = 0,
    // Pass the A input in this product term
    ePT2_AC_1 = 1,
    // Complement the A input in this product term
    ePT2_AC_2 = 2,
    // Force the A input in this product term to a logical one
    ePT2_AC_3 = 3,
  };
  // Product term 3, D input configuration
  using PT3_DC = ftl::mmio::Field<2, 0, ePT3_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, C input configuration
  using PT3_CC = ftl::mmio::Field<2, 2, ePT3_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, B input configuration
  using PT3_BC = ftl::mmio::Field<2, 4, ePT3_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 3, A input configuration
  using PT3_AC = ftl::mmio::Field<2, 6, ePT3_AC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, D input configuration
  using PT2_DC = ftl::mmio::Field<2, 8, ePT2_DC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, C input configuration
  using PT2_CC = ftl::mmio::Field<2, 10, ePT2_CC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, B input configuration
  using PT2_BC = ftl::mmio::Field<2, 12, ePT2_BC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Product term 2, A input configuration
  using PT2_AC = ftl::mmio::Field<2, 14, ePT2_AC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BFCRT233_fields_

struct BFCRT233 : ftl::mmio::Register<
    kBase + 0xEu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename BFCRT233_fields_::PT3_DC,
    typename BFCRT233_fields_::PT3_CC,
    typename BFCRT233_fields_::PT3_BC,
    typename BFCRT233_fields_::PT3_AC,
    typename BFCRT233_fields_::PT2_DC,
    typename BFCRT233_fields_::PT2_CC,
    typename BFCRT233_fields_::PT2_BC,
    typename BFCRT233_fields_::PT2_AC> {
  using ePT3_DC = typename BFCRT233_fields_::ePT3_DC;
  using ePT3_CC = typename BFCRT233_fields_::ePT3_CC;
  using ePT3_BC = typename BFCRT233_fields_::ePT3_BC;
  using ePT3_AC = typename BFCRT233_fields_::ePT3_AC;
  using ePT2_DC = typename BFCRT233_fields_::ePT2_DC;
  using ePT2_CC = typename BFCRT233_fields_::ePT2_CC;
  using ePT2_BC = typename BFCRT233_fields_::ePT2_BC;
  using ePT2_AC = typename BFCRT233_fields_::ePT2_AC;
  using PT3_DC = typename BFCRT233_fields_::PT3_DC;
  using PT3_CC = typename BFCRT233_fields_::PT3_CC;
  using PT3_BC = typename BFCRT233_fields_::PT3_BC;
  using PT3_AC = typename BFCRT233_fields_::PT3_AC;
  using PT2_DC = typename BFCRT233_fields_::PT2_DC;
  using PT2_CC = typename BFCRT233_fields_::PT2_CC;
  using PT2_BC = typename BFCRT233_fields_::PT2_BC;
  using PT2_AC = typename BFCRT233_fields_::PT2_AC;
};
};

}  // namespace regs