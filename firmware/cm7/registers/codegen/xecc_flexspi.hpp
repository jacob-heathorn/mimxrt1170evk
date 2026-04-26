#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// XECC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct XeccFlexspi {
  static_assert(
        Instance == 1u || Instance == 2u,
        "XeccFlexspi: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x4001C000u :
      Instance == 2u ? 0x40020000u :
      0u;

  // ECC Control Register
  struct ECC_CTRL_fields_ {
    enum class eECC_EN : std::uint32_t {
      // Disable
      eECC_EN_0 = 0,
      // Enable
      eECC_EN_1 = 1,
    };

    enum class eWECC_EN : std::uint32_t {
      // Disable
      eWECC_EN_0 = 0,
      // Enable
      eWECC_EN_1 = 1,
    };

    enum class eRECC_EN : std::uint32_t {
      // Disable
      eRECC_EN_0 = 0,
      // Enable
      eRECC_EN_1 = 1,
    };

    enum class eSWAP_EN : std::uint32_t {
      // Disable
      eSWAP_EN_0 = 0,
      // Enable
      eSWAP_EN_1 = 1,
    };

    // ECC Function Enable
    using ECC_EN = ftl::mmio::Field<1, 0, eECC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write ECC Encode Function Enable
    using WECC_EN = ftl::mmio::Field<1, 1, eWECC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read ECC Function Enable
    using RECC_EN = ftl::mmio::Field<1, 2, eRECC_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Swap Data Enable
    using SWAP_EN = ftl::mmio::Field<1, 3, eSWAP_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_CTRL_fields_

  struct ECC_CTRL : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_CTRL_fields_::ECC_EN,
      typename ECC_CTRL_fields_::WECC_EN,
      typename ECC_CTRL_fields_::RECC_EN,
      typename ECC_CTRL_fields_::SWAP_EN,
      ftl::mmio::Reserved<28, 4>> {
    using eECC_EN = typename ECC_CTRL_fields_::eECC_EN;
    using eWECC_EN = typename ECC_CTRL_fields_::eWECC_EN;
    using eRECC_EN = typename ECC_CTRL_fields_::eRECC_EN;
    using eSWAP_EN = typename ECC_CTRL_fields_::eSWAP_EN;
    using ECC_EN = typename ECC_CTRL_fields_::ECC_EN;
    using WECC_EN = typename ECC_CTRL_fields_::WECC_EN;
    using RECC_EN = typename ECC_CTRL_fields_::RECC_EN;
    using SWAP_EN = typename ECC_CTRL_fields_::SWAP_EN;
  };

  // Error Interrupt Status Register
  struct ERR_STATUS_fields_ {
    enum class eSINGLE_ERR : std::uint32_t {
      // Single bit error does not happen.
      eSINGLE_ERR_0 = 0,
      // Single bit error happens.
      eSINGLE_ERR_1 = 1,
    };

    enum class eMULTI_ERR : std::uint32_t {
      // Multiple bits error does not happen.
      eMULTI_ERR_0 = 0,
      // Multiple bits error happens.
      eMULTI_ERR_1 = 1,
    };

    // Single Bit Error
    using SINGLE_ERR = ftl::mmio::Field<1, 0, eSINGLE_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Multiple Bits Error
    using MULTI_ERR = ftl::mmio::Field<1, 1, eMULTI_ERR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ERR_STATUS_fields_

  struct ERR_STATUS : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ERR_STATUS_fields_::SINGLE_ERR,
      typename ERR_STATUS_fields_::MULTI_ERR,
      typename ERR_STATUS_fields_::Reserved1> {
    using eSINGLE_ERR = typename ERR_STATUS_fields_::eSINGLE_ERR;
    using eMULTI_ERR = typename ERR_STATUS_fields_::eMULTI_ERR;
    using SINGLE_ERR = typename ERR_STATUS_fields_::SINGLE_ERR;
    using MULTI_ERR = typename ERR_STATUS_fields_::MULTI_ERR;
    using Reserved1 = typename ERR_STATUS_fields_::Reserved1;
  };

  // Error Interrupt Status Enable Register
  struct ERR_STAT_EN_fields_ {
    enum class eSINGLE_ERR_STAT_EN : std::uint32_t {
      // Masked
      eSINGLE_ERR_STAT_EN_0 = 0,
      // Enabled
      eSINGLE_ERR_STAT_EN_1 = 1,
    };

    enum class eMULIT_ERR_STAT_EN : std::uint32_t {
      // Masked
      eMULIT_ERR_STAT_EN_0 = 0,
      // Enabled
      eMULIT_ERR_STAT_EN_1 = 1,
    };

    // Single Bit Error Status Enable
    using SINGLE_ERR_STAT_EN = ftl::mmio::Field<1, 0, eSINGLE_ERR_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Status Enable
    using MULIT_ERR_STAT_EN = ftl::mmio::Field<1, 1, eMULIT_ERR_STAT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ERR_STAT_EN_fields_

  struct ERR_STAT_EN : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ERR_STAT_EN_fields_::SINGLE_ERR_STAT_EN,
      typename ERR_STAT_EN_fields_::MULIT_ERR_STAT_EN,
      typename ERR_STAT_EN_fields_::Reserved1> {
    using eSINGLE_ERR_STAT_EN = typename ERR_STAT_EN_fields_::eSINGLE_ERR_STAT_EN;
    using eMULIT_ERR_STAT_EN = typename ERR_STAT_EN_fields_::eMULIT_ERR_STAT_EN;
    using SINGLE_ERR_STAT_EN = typename ERR_STAT_EN_fields_::SINGLE_ERR_STAT_EN;
    using MULIT_ERR_STAT_EN = typename ERR_STAT_EN_fields_::MULIT_ERR_STAT_EN;
    using Reserved1 = typename ERR_STAT_EN_fields_::Reserved1;
  };

  // Error Interrupt Enable Register
  struct ERR_SIG_EN_fields_ {
    enum class eSINGLE_ERR_SIG_EN : std::uint32_t {
      // Masked
      eSINGLE_ERR_SIG_EN_0 = 0,
      // Enabled
      eSINGLE_ERR_SIG_EN_1 = 1,
    };

    enum class eMULTI_ERR_SIG_EN : std::uint32_t {
      // Masked
      eMULTI_ERR_SIG_EN_0 = 0,
      // Enabled
      eMULTI_ERR_SIG_EN_1 = 1,
    };

    // Single Bit Error Interrupt Enable
    using SINGLE_ERR_SIG_EN = ftl::mmio::Field<1, 0, eSINGLE_ERR_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multiple Bits Error Interrupt Enable
    using MULTI_ERR_SIG_EN = ftl::mmio::Field<1, 1, eMULTI_ERR_SIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ERR_SIG_EN_fields_

  struct ERR_SIG_EN : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ERR_SIG_EN_fields_::SINGLE_ERR_SIG_EN,
      typename ERR_SIG_EN_fields_::MULTI_ERR_SIG_EN,
      typename ERR_SIG_EN_fields_::Reserved1> {
    using eSINGLE_ERR_SIG_EN = typename ERR_SIG_EN_fields_::eSINGLE_ERR_SIG_EN;
    using eMULTI_ERR_SIG_EN = typename ERR_SIG_EN_fields_::eMULTI_ERR_SIG_EN;
    using SINGLE_ERR_SIG_EN = typename ERR_SIG_EN_fields_::SINGLE_ERR_SIG_EN;
    using MULTI_ERR_SIG_EN = typename ERR_SIG_EN_fields_::MULTI_ERR_SIG_EN;
    using Reserved1 = typename ERR_SIG_EN_fields_::Reserved1;
  };

  // Error Injection On Write Data
  struct ERR_DATA_INJ_fields_ {
    // Error Injection On Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ERR_DATA_INJ_fields_

  struct ERR_DATA_INJ : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ERR_DATA_INJ_fields_::ERR_DATA_INJ> {
    using VALUE = typename ERR_DATA_INJ_fields_::ERR_DATA_INJ;
  };

  // Error Injection On ECC Code of Write Data
  struct ERR_ECC_INJ_fields_ {
    // Error Injection On ECC Code of Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ERR_ECC_INJ_fields_

  struct ERR_ECC_INJ : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ERR_ECC_INJ_fields_::ERR_ECC_INJ> {
    using VALUE = typename ERR_ECC_INJ_fields_::ERR_ECC_INJ;
  };

  // Single Error Address
  struct SINGLE_ERR_ADDR_fields_ {
    // Single Error Address
    using SINGLE_ERR_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SINGLE_ERR_ADDR_fields_

  struct SINGLE_ERR_ADDR : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SINGLE_ERR_ADDR_fields_::SINGLE_ERR_ADDR> {
    using VALUE = typename SINGLE_ERR_ADDR_fields_::SINGLE_ERR_ADDR;
  };

  // Single Error Read Data
  struct SINGLE_ERR_DATA_fields_ {
    // Single Error Read Data
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SINGLE_ERR_DATA_fields_

  struct SINGLE_ERR_DATA : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SINGLE_ERR_DATA_fields_::SINGLE_ERR_DATA> {
    using VALUE = typename SINGLE_ERR_DATA_fields_::SINGLE_ERR_DATA;
  };

  // Single Error ECC Code
  struct SINGLE_ERR_ECC_fields_ {
    // Single Error ECC code
    using SINGLE_ERR_ECC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SINGLE_ERR_ECC_fields_

  struct SINGLE_ERR_ECC : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SINGLE_ERR_ECC_fields_::SINGLE_ERR_ECC> {
    using VALUE = typename SINGLE_ERR_ECC_fields_::SINGLE_ERR_ECC;
  };

  // Single Error Bit Position
  struct SINGLE_ERR_POS_fields_ {
    // Single Error bit Position
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SINGLE_ERR_POS_fields_

  struct SINGLE_ERR_POS : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SINGLE_ERR_POS_fields_::SINGLE_ERR_POS> {
    using VALUE = typename SINGLE_ERR_POS_fields_::SINGLE_ERR_POS;
  };

  // Single Error Bit Field
  struct SINGLE_ERR_BIT_FIELD_fields_ {
    // Single Error Bit Field
    using SINGLE_ERR_BIT_FIELD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<24, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SINGLE_ERR_BIT_FIELD_fields_

  struct SINGLE_ERR_BIT_FIELD : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename SINGLE_ERR_BIT_FIELD_fields_::SINGLE_ERR_BIT_FIELD,
      typename SINGLE_ERR_BIT_FIELD_fields_::Reserved1> {
    using VALUE = typename SINGLE_ERR_BIT_FIELD_fields_::SINGLE_ERR_BIT_FIELD;
    using Reserved1 = typename SINGLE_ERR_BIT_FIELD_fields_::Reserved1;
  };

  // Multiple Error Address
  struct MULTI_ERR_ADDR_fields_ {
    // Multiple Error Address
    using MULTI_ERR_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MULTI_ERR_ADDR_fields_

  struct MULTI_ERR_ADDR : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MULTI_ERR_ADDR_fields_::MULTI_ERR_ADDR> {
    using VALUE = typename MULTI_ERR_ADDR_fields_::MULTI_ERR_ADDR;
  };

  // Multiple Error Read Data
  struct MULTI_ERR_DATA_fields_ {
    // Multiple Error Read Data
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MULTI_ERR_DATA_fields_

  struct MULTI_ERR_DATA : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MULTI_ERR_DATA_fields_::MULTI_ERR_DATA> {
    using VALUE = typename MULTI_ERR_DATA_fields_::MULTI_ERR_DATA;
  };

  // Multiple Error ECC code
  struct MULTI_ERR_ECC_fields_ {
    // Multiple Error ECC code
    using MULTI_ERR_ECC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MULTI_ERR_ECC_fields_

  struct MULTI_ERR_ECC : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MULTI_ERR_ECC_fields_::MULTI_ERR_ECC> {
    using VALUE = typename MULTI_ERR_ECC_fields_::MULTI_ERR_ECC;
  };

  // Multiple Error Bit Field
  struct MULTI_ERR_BIT_FIELD_fields_ {
    // Multiple Error Bit Field
    using MULTI_ERR_BIT_FIELD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<24, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MULTI_ERR_BIT_FIELD_fields_

  struct MULTI_ERR_BIT_FIELD : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename MULTI_ERR_BIT_FIELD_fields_::MULTI_ERR_BIT_FIELD,
      typename MULTI_ERR_BIT_FIELD_fields_::Reserved1> {
    using VALUE = typename MULTI_ERR_BIT_FIELD_fields_::MULTI_ERR_BIT_FIELD;
    using Reserved1 = typename MULTI_ERR_BIT_FIELD_fields_::Reserved1;
  };

  // ECC Region 0 Base Address
  struct ECC_BASE_ADDR0_fields_ {
    // ECC Region 0 Base Address
    using ECC_BASE_ADDR0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_BASE_ADDR0_fields_

  struct ECC_BASE_ADDR0 : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_BASE_ADDR0_fields_::ECC_BASE_ADDR0> {
    using VALUE = typename ECC_BASE_ADDR0_fields_::ECC_BASE_ADDR0;
  };

  // ECC Region 0 End Address
  struct ECC_END_ADDR0_fields_ {
    // ECC Region 0 End Address
    using ECC_END_ADDR0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_END_ADDR0_fields_

  struct ECC_END_ADDR0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_END_ADDR0_fields_::ECC_END_ADDR0> {
    using VALUE = typename ECC_END_ADDR0_fields_::ECC_END_ADDR0;
  };

  // ECC Region 1 Base Address
  struct ECC_BASE_ADDR1_fields_ {
    // ECC Region 1 Base Address
    using ECC_BASE_ADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_BASE_ADDR1_fields_

  struct ECC_BASE_ADDR1 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_BASE_ADDR1_fields_::ECC_BASE_ADDR1> {
    using VALUE = typename ECC_BASE_ADDR1_fields_::ECC_BASE_ADDR1;
  };

  // ECC Region 1 End Address
  struct ECC_END_ADDR1_fields_ {
    // ECC Region 1 End Address
    using ECC_END_ADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_END_ADDR1_fields_

  struct ECC_END_ADDR1 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_END_ADDR1_fields_::ECC_END_ADDR1> {
    using VALUE = typename ECC_END_ADDR1_fields_::ECC_END_ADDR1;
  };

  // ECC Region 2 Base Address
  struct ECC_BASE_ADDR2_fields_ {
    // ECC Region 2 Base Address
    using ECC_BASE_ADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_BASE_ADDR2_fields_

  struct ECC_BASE_ADDR2 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_BASE_ADDR2_fields_::ECC_BASE_ADDR2> {
    using VALUE = typename ECC_BASE_ADDR2_fields_::ECC_BASE_ADDR2;
  };

  // ECC Region 2 End Address
  struct ECC_END_ADDR2_fields_ {
    // ECC Region 2 End Address
    using ECC_END_ADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_END_ADDR2_fields_

  struct ECC_END_ADDR2 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_END_ADDR2_fields_::ECC_END_ADDR2> {
    using VALUE = typename ECC_END_ADDR2_fields_::ECC_END_ADDR2;
  };

  // ECC Region 3 Base Address
  struct ECC_BASE_ADDR3_fields_ {
    // ECC Region 3 Base Address
    using ECC_BASE_ADDR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_BASE_ADDR3_fields_

  struct ECC_BASE_ADDR3 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_BASE_ADDR3_fields_::ECC_BASE_ADDR3> {
    using VALUE = typename ECC_BASE_ADDR3_fields_::ECC_BASE_ADDR3;
  };

  // ECC Region 3 End Address
  struct ECC_END_ADDR3_fields_ {
    // ECC Region 3 End Address
    using ECC_END_ADDR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ECC_END_ADDR3_fields_

  struct ECC_END_ADDR3 : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ECC_END_ADDR3_fields_::ECC_END_ADDR3> {
    using VALUE = typename ECC_END_ADDR3_fields_::ECC_END_ADDR3;
  };

};

}  // namespace regs