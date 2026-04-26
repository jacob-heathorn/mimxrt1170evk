#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// XECC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct XeccSemc {
  // ECC Control Register
  struct EccCtrlFields {
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
  };  // struct EccCtrlFields

  struct ECC_CTRL : ftl::mmio::Register<
      0x40024000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccCtrlFields::ECC_EN,
      EccCtrlFields::WECC_EN,
      EccCtrlFields::RECC_EN,
      EccCtrlFields::SWAP_EN,
      ftl::mmio::Reserved<28, 4>> {
    using eECC_EN = EccCtrlFields::eECC_EN;
    using eWECC_EN = EccCtrlFields::eWECC_EN;
    using eRECC_EN = EccCtrlFields::eRECC_EN;
    using eSWAP_EN = EccCtrlFields::eSWAP_EN;
    using ECC_EN = EccCtrlFields::ECC_EN;
    using WECC_EN = EccCtrlFields::WECC_EN;
    using RECC_EN = EccCtrlFields::RECC_EN;
    using SWAP_EN = EccCtrlFields::SWAP_EN;
  };

  // Error Interrupt Status Register
  struct ErrStatusFields {
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
  };  // struct ErrStatusFields

  struct ERR_STATUS : ftl::mmio::Register<
      0x40024004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrStatusFields::SINGLE_ERR,
      ErrStatusFields::MULTI_ERR,
      ErrStatusFields::Reserved1> {
    using eSINGLE_ERR = ErrStatusFields::eSINGLE_ERR;
    using eMULTI_ERR = ErrStatusFields::eMULTI_ERR;
    using SINGLE_ERR = ErrStatusFields::SINGLE_ERR;
    using MULTI_ERR = ErrStatusFields::MULTI_ERR;
    using Reserved1 = ErrStatusFields::Reserved1;
  };

  // Error Interrupt Status Enable Register
  struct ErrStatEnFields {
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
  };  // struct ErrStatEnFields

  struct ERR_STAT_EN : ftl::mmio::Register<
      0x40024008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrStatEnFields::SINGLE_ERR_STAT_EN,
      ErrStatEnFields::MULIT_ERR_STAT_EN,
      ErrStatEnFields::Reserved1> {
    using eSINGLE_ERR_STAT_EN = ErrStatEnFields::eSINGLE_ERR_STAT_EN;
    using eMULIT_ERR_STAT_EN = ErrStatEnFields::eMULIT_ERR_STAT_EN;
    using SINGLE_ERR_STAT_EN = ErrStatEnFields::SINGLE_ERR_STAT_EN;
    using MULIT_ERR_STAT_EN = ErrStatEnFields::MULIT_ERR_STAT_EN;
    using Reserved1 = ErrStatEnFields::Reserved1;
  };

  // Error Interrupt Enable Register
  struct ErrSigEnFields {
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
  };  // struct ErrSigEnFields

  struct ERR_SIG_EN : ftl::mmio::Register<
      0x4002400Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrSigEnFields::SINGLE_ERR_SIG_EN,
      ErrSigEnFields::MULTI_ERR_SIG_EN,
      ErrSigEnFields::Reserved1> {
    using eSINGLE_ERR_SIG_EN = ErrSigEnFields::eSINGLE_ERR_SIG_EN;
    using eMULTI_ERR_SIG_EN = ErrSigEnFields::eMULTI_ERR_SIG_EN;
    using SINGLE_ERR_SIG_EN = ErrSigEnFields::SINGLE_ERR_SIG_EN;
    using MULTI_ERR_SIG_EN = ErrSigEnFields::MULTI_ERR_SIG_EN;
    using Reserved1 = ErrSigEnFields::Reserved1;
  };

  // Error Injection On Write Data
  struct ErrDataInjFields {
    // Error Injection On Write Data
    using ERR_DATA_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrDataInjFields

  struct ERR_DATA_INJ : ftl::mmio::Register<
      0x40024010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrDataInjFields::ERR_DATA_INJ> {
    using VALUE = ErrDataInjFields::ERR_DATA_INJ;
  };

  // Error Injection On ECC Code of Write Data
  struct ErrEccInjFields {
    // Error Injection On ECC Code of Write Data
    using ERR_ECC_INJ = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ErrEccInjFields

  struct ERR_ECC_INJ : ftl::mmio::Register<
      0x40024014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ErrEccInjFields::ERR_ECC_INJ> {
    using VALUE = ErrEccInjFields::ERR_ECC_INJ;
  };

  // Single Error Address
  struct SingleErrAddrFields {
    // Single Error Address
    using SINGLE_ERR_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrAddrFields

  struct SINGLE_ERR_ADDR : ftl::mmio::Register<
      0x40024018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SingleErrAddrFields::SINGLE_ERR_ADDR> {
    using VALUE = SingleErrAddrFields::SINGLE_ERR_ADDR;
  };

  // Single Error Read Data
  struct SingleErrDataFields {
    // Single Error Read Data
    using SINGLE_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrDataFields

  struct SINGLE_ERR_DATA : ftl::mmio::Register<
      0x4002401Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SingleErrDataFields::SINGLE_ERR_DATA> {
    using VALUE = SingleErrDataFields::SINGLE_ERR_DATA;
  };

  // Single Error ECC Code
  struct SingleErrEccFields {
    // Single Error ECC code
    using SINGLE_ERR_ECC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrEccFields

  struct SINGLE_ERR_ECC : ftl::mmio::Register<
      0x40024020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SingleErrEccFields::SINGLE_ERR_ECC> {
    using VALUE = SingleErrEccFields::SINGLE_ERR_ECC;
  };

  // Single Error Bit Position
  struct SingleErrPosFields {
    // Single Error bit Position
    using SINGLE_ERR_POS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrPosFields

  struct SINGLE_ERR_POS : ftl::mmio::Register<
      0x40024024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SingleErrPosFields::SINGLE_ERR_POS> {
    using VALUE = SingleErrPosFields::SINGLE_ERR_POS;
  };

  // Single Error Bit Field
  struct SingleErrBitFieldFields {
    // Single Error Bit Field
    using SINGLE_ERR_BIT_FIELD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<24, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SingleErrBitFieldFields

  struct SINGLE_ERR_BIT_FIELD : ftl::mmio::Register<
      0x40024028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      SingleErrBitFieldFields::SINGLE_ERR_BIT_FIELD,
      SingleErrBitFieldFields::Reserved1> {
    using VALUE = SingleErrBitFieldFields::SINGLE_ERR_BIT_FIELD;
    using Reserved1 = SingleErrBitFieldFields::Reserved1;
  };

  // Multiple Error Address
  struct MultiErrAddrFields {
    // Multiple Error Address
    using MULTI_ERR_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrAddrFields

  struct MULTI_ERR_ADDR : ftl::mmio::Register<
      0x4002402Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MultiErrAddrFields::MULTI_ERR_ADDR> {
    using VALUE = MultiErrAddrFields::MULTI_ERR_ADDR;
  };

  // Multiple Error Read Data
  struct MultiErrDataFields {
    // Multiple Error Read Data
    using MULTI_ERR_DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrDataFields

  struct MULTI_ERR_DATA : ftl::mmio::Register<
      0x40024030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MultiErrDataFields::MULTI_ERR_DATA> {
    using VALUE = MultiErrDataFields::MULTI_ERR_DATA;
  };

  // Multiple Error ECC code
  struct MultiErrEccFields {
    // Multiple Error ECC code
    using MULTI_ERR_ECC = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrEccFields

  struct MULTI_ERR_ECC : ftl::mmio::Register<
      0x40024034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MultiErrEccFields::MULTI_ERR_ECC> {
    using VALUE = MultiErrEccFields::MULTI_ERR_ECC;
  };

  // Multiple Error Bit Field
  struct MultiErrBitFieldFields {
    // Multiple Error Bit Field
    using MULTI_ERR_BIT_FIELD = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reserved
    using Reserved1 = ftl::mmio::Field<24, 8, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MultiErrBitFieldFields

  struct MULTI_ERR_BIT_FIELD : ftl::mmio::Register<
      0x40024038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      MultiErrBitFieldFields::MULTI_ERR_BIT_FIELD,
      MultiErrBitFieldFields::Reserved1> {
    using VALUE = MultiErrBitFieldFields::MULTI_ERR_BIT_FIELD;
    using Reserved1 = MultiErrBitFieldFields::Reserved1;
  };

  // ECC Region 0 Base Address
  struct EccBaseAddr0Fields {
    // ECC Region 0 Base Address
    using ECC_BASE_ADDR0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccBaseAddr0Fields

  struct ECC_BASE_ADDR0 : ftl::mmio::Register<
      0x4002403Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccBaseAddr0Fields::ECC_BASE_ADDR0> {
    using VALUE = EccBaseAddr0Fields::ECC_BASE_ADDR0;
  };

  // ECC Region 0 End Address
  struct EccEndAddr0Fields {
    // ECC Region 0 End Address
    using ECC_END_ADDR0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccEndAddr0Fields

  struct ECC_END_ADDR0 : ftl::mmio::Register<
      0x40024040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccEndAddr0Fields::ECC_END_ADDR0> {
    using VALUE = EccEndAddr0Fields::ECC_END_ADDR0;
  };

  // ECC Region 1 Base Address
  struct EccBaseAddr1Fields {
    // ECC Region 1 Base Address
    using ECC_BASE_ADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccBaseAddr1Fields

  struct ECC_BASE_ADDR1 : ftl::mmio::Register<
      0x40024044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccBaseAddr1Fields::ECC_BASE_ADDR1> {
    using VALUE = EccBaseAddr1Fields::ECC_BASE_ADDR1;
  };

  // ECC Region 1 End Address
  struct EccEndAddr1Fields {
    // ECC Region 1 End Address
    using ECC_END_ADDR1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccEndAddr1Fields

  struct ECC_END_ADDR1 : ftl::mmio::Register<
      0x40024048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccEndAddr1Fields::ECC_END_ADDR1> {
    using VALUE = EccEndAddr1Fields::ECC_END_ADDR1;
  };

  // ECC Region 2 Base Address
  struct EccBaseAddr2Fields {
    // ECC Region 2 Base Address
    using ECC_BASE_ADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccBaseAddr2Fields

  struct ECC_BASE_ADDR2 : ftl::mmio::Register<
      0x4002404Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccBaseAddr2Fields::ECC_BASE_ADDR2> {
    using VALUE = EccBaseAddr2Fields::ECC_BASE_ADDR2;
  };

  // ECC Region 2 End Address
  struct EccEndAddr2Fields {
    // ECC Region 2 End Address
    using ECC_END_ADDR2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccEndAddr2Fields

  struct ECC_END_ADDR2 : ftl::mmio::Register<
      0x40024050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccEndAddr2Fields::ECC_END_ADDR2> {
    using VALUE = EccEndAddr2Fields::ECC_END_ADDR2;
  };

  // ECC Region 3 Base Address
  struct EccBaseAddr3Fields {
    // ECC Region 3 Base Address
    using ECC_BASE_ADDR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccBaseAddr3Fields

  struct ECC_BASE_ADDR3 : ftl::mmio::Register<
      0x40024054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccBaseAddr3Fields::ECC_BASE_ADDR3> {
    using VALUE = EccBaseAddr3Fields::ECC_BASE_ADDR3;
  };

  // ECC Region 3 End Address
  struct EccEndAddr3Fields {
    // ECC Region 3 End Address
    using ECC_END_ADDR3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EccEndAddr3Fields

  struct ECC_END_ADDR3 : ftl::mmio::Register<
      0x40024058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EccEndAddr3Fields::ECC_END_ADDR3> {
    using VALUE = EccEndAddr3Fields::ECC_END_ADDR3;
  };

};

}  // namespace regs