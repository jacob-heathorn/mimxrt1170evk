#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct OscRc400m {
  // Control Register 0
  struct Ctrl0Fields {
    // Divide value for ref_clk to generate slow_clk (used inside this IP)
    using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Ctrl0Fields::REF_CLK_DIV,
      ftl::mmio::Reserved<2, 30>> {
    using REF_CLK_DIV = Ctrl0Fields::REF_CLK_DIV;
  };

  // Control Register 0
  struct Ctrl0SetFields {
    // Divide value for ref_clk to generate slow_clk (used inside this IP)
    using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl0SetFields

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Ctrl0SetFields::REF_CLK_DIV,
      ftl::mmio::Reserved<2, 30>> {
    using REF_CLK_DIV = Ctrl0SetFields::REF_CLK_DIV;
  };

  // Control Register 0
  struct Ctrl0ClrFields {
    // Divide value for ref_clk to generate slow_clk (used inside this IP)
    using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl0ClrFields

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Ctrl0ClrFields::REF_CLK_DIV,
      ftl::mmio::Reserved<2, 30>> {
    using REF_CLK_DIV = Ctrl0ClrFields::REF_CLK_DIV;
  };

  // Control Register 0
  struct Ctrl0TogFields {
    // Divide value for ref_clk to generate slow_clk (used inside this IP)
    using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl0TogFields

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      Ctrl0TogFields::REF_CLK_DIV,
      ftl::mmio::Reserved<2, 30>> {
    using REF_CLK_DIV = Ctrl0TogFields::REF_CLK_DIV;
  };

  // Control Register 1
  struct Ctrl1Fields {
    // Negative hysteresis value for the tuned clock
    using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Positive hysteresis value for the tuned clock
    using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Target count for the fast clock
    using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl1Fields

  struct CTRL1 : ftl::mmio::Register<
      0x00000010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl1Fields::HYST_MINUS,
      ftl::mmio::Reserved<4, 4>,
      Ctrl1Fields::HYST_PLUS,
      ftl::mmio::Reserved<4, 12>,
      Ctrl1Fields::TARGET_COUNT> {
    using HYST_MINUS = Ctrl1Fields::HYST_MINUS;
    using HYST_PLUS = Ctrl1Fields::HYST_PLUS;
    using TARGET_COUNT = Ctrl1Fields::TARGET_COUNT;
  };

  // Control Register 1
  struct Ctrl1SetFields {
    // Negative hysteresis value for the tuned clock
    using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Positive hysteresis value for the tuned clock
    using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Target count for the fast clock
    using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl1SetFields

  struct CTRL1_SET : ftl::mmio::Register<
      0x00000014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl1SetFields::HYST_MINUS,
      ftl::mmio::Reserved<4, 4>,
      Ctrl1SetFields::HYST_PLUS,
      ftl::mmio::Reserved<4, 12>,
      Ctrl1SetFields::TARGET_COUNT> {
    using HYST_MINUS = Ctrl1SetFields::HYST_MINUS;
    using HYST_PLUS = Ctrl1SetFields::HYST_PLUS;
    using TARGET_COUNT = Ctrl1SetFields::TARGET_COUNT;
  };

  // Control Register 1
  struct Ctrl1ClrFields {
    // Negative hysteresis value for the tuned clock
    using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Positive hysteresis value for the tuned clock
    using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Target count for the fast clock
    using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl1ClrFields

  struct CTRL1_CLR : ftl::mmio::Register<
      0x00000018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl1ClrFields::HYST_MINUS,
      ftl::mmio::Reserved<4, 4>,
      Ctrl1ClrFields::HYST_PLUS,
      ftl::mmio::Reserved<4, 12>,
      Ctrl1ClrFields::TARGET_COUNT> {
    using HYST_MINUS = Ctrl1ClrFields::HYST_MINUS;
    using HYST_PLUS = Ctrl1ClrFields::HYST_PLUS;
    using TARGET_COUNT = Ctrl1ClrFields::TARGET_COUNT;
  };

  // Control Register 1
  struct Ctrl1TogFields {
    // Negative hysteresis value for the tuned clock
    using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Positive hysteresis value for the tuned clock
    using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Target count for the fast clock
    using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl1TogFields

  struct CTRL1_TOG : ftl::mmio::Register<
      0x0000001Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl1TogFields::HYST_MINUS,
      ftl::mmio::Reserved<4, 4>,
      Ctrl1TogFields::HYST_PLUS,
      ftl::mmio::Reserved<4, 12>,
      Ctrl1TogFields::TARGET_COUNT> {
    using HYST_MINUS = Ctrl1TogFields::HYST_MINUS;
    using HYST_PLUS = Ctrl1TogFields::HYST_PLUS;
    using TARGET_COUNT = Ctrl1TogFields::TARGET_COUNT;
  };

  // Control Register 2
  struct Ctrl2Fields {
    enum class eTUNE_BYP : std::uint32_t {
      // Use the output of tuning logic to run the oscillator
      eTUNE_BYP_0 = 0,
      // Bypass the tuning logic and use the programmed OSC_TUNE_VAL to run the oscillator
      eTUNE_BYP_1 = 1,
    };

    enum class eTUNE_EN : std::uint32_t {
      // Freezes the tuning at the current tuned value. Oscillator runs at the frozen tuning value
      eTUNE_EN_0 = 0,
      // Unfreezes and continues the tuning operation
      eTUNE_EN_1 = 1,
    };

    enum class eTUNE_START : std::uint32_t {
      // Stop tuning and reset the tuning logic. Oscillator runs using programmed OSC_TUNE_VAL
      eTUNE_START_0 = 0,
      // Start tuning
      eTUNE_START_1 = 1,
    };

    // Bypass the tuning logic
    using TUNE_BYP = ftl::mmio::Field<1, 10, eTUNE_BYP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Freeze/Unfreeze the tuning value
    using TUNE_EN = ftl::mmio::Field<1, 12, eTUNE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Start/Stop tuning
    using TUNE_START = ftl::mmio::Field<1, 14, eTUNE_START, ftl::mmio::RW, ftl::mmio::Normal>;
    // Program the oscillator frequency
    using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl2Fields

  struct CTRL2 : ftl::mmio::Register<
      0x00000020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      Ctrl2Fields::TUNE_BYP,
      ftl::mmio::Reserved<1, 11>,
      Ctrl2Fields::TUNE_EN,
      ftl::mmio::Reserved<1, 13>,
      Ctrl2Fields::TUNE_START,
      ftl::mmio::Reserved<9, 15>,
      Ctrl2Fields::OSC_TUNE_VAL> {
    using eTUNE_BYP = Ctrl2Fields::eTUNE_BYP;
    using eTUNE_EN = Ctrl2Fields::eTUNE_EN;
    using eTUNE_START = Ctrl2Fields::eTUNE_START;
    using TUNE_BYP = Ctrl2Fields::TUNE_BYP;
    using TUNE_EN = Ctrl2Fields::TUNE_EN;
    using TUNE_START = Ctrl2Fields::TUNE_START;
    using OSC_TUNE_VAL = Ctrl2Fields::OSC_TUNE_VAL;
  };

  // Control Register 2
  struct Ctrl2SetFields {
    // Bypass the tuning logic
    using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Freeze/Unfreeze the tuning value
    using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Start/Stop tuning
    using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Program the oscillator frequency
    using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl2SetFields

  struct CTRL2_SET : ftl::mmio::Register<
      0x00000024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      Ctrl2SetFields::TUNE_BYP,
      ftl::mmio::Reserved<1, 11>,
      Ctrl2SetFields::TUNE_EN,
      ftl::mmio::Reserved<1, 13>,
      Ctrl2SetFields::TUNE_START,
      ftl::mmio::Reserved<9, 15>,
      Ctrl2SetFields::OSC_TUNE_VAL> {
    using TUNE_BYP = Ctrl2SetFields::TUNE_BYP;
    using TUNE_EN = Ctrl2SetFields::TUNE_EN;
    using TUNE_START = Ctrl2SetFields::TUNE_START;
    using OSC_TUNE_VAL = Ctrl2SetFields::OSC_TUNE_VAL;
  };

  // Control Register 2
  struct Ctrl2ClrFields {
    // Bypass the tuning logic
    using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Freeze/Unfreeze the tuning value
    using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Start/Stop tuning
    using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Program the oscillator frequency
    using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl2ClrFields

  struct CTRL2_CLR : ftl::mmio::Register<
      0x00000028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      Ctrl2ClrFields::TUNE_BYP,
      ftl::mmio::Reserved<1, 11>,
      Ctrl2ClrFields::TUNE_EN,
      ftl::mmio::Reserved<1, 13>,
      Ctrl2ClrFields::TUNE_START,
      ftl::mmio::Reserved<9, 15>,
      Ctrl2ClrFields::OSC_TUNE_VAL> {
    using TUNE_BYP = Ctrl2ClrFields::TUNE_BYP;
    using TUNE_EN = Ctrl2ClrFields::TUNE_EN;
    using TUNE_START = Ctrl2ClrFields::TUNE_START;
    using OSC_TUNE_VAL = Ctrl2ClrFields::OSC_TUNE_VAL;
  };

  // Control Register 2
  struct Ctrl2TogFields {
    // Bypass the tuning logic
    using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Freeze/Unfreeze the tuning value
    using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Start/Stop tuning
    using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Program the oscillator frequency
    using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl2TogFields

  struct CTRL2_TOG : ftl::mmio::Register<
      0x0000002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<10, 0>,
      Ctrl2TogFields::TUNE_BYP,
      ftl::mmio::Reserved<1, 11>,
      Ctrl2TogFields::TUNE_EN,
      ftl::mmio::Reserved<1, 13>,
      Ctrl2TogFields::TUNE_START,
      ftl::mmio::Reserved<9, 15>,
      Ctrl2TogFields::OSC_TUNE_VAL> {
    using TUNE_BYP = Ctrl2TogFields::TUNE_BYP;
    using TUNE_EN = Ctrl2TogFields::TUNE_EN;
    using TUNE_START = Ctrl2TogFields::TUNE_START;
    using OSC_TUNE_VAL = Ctrl2TogFields::OSC_TUNE_VAL;
  };

  // Control Register 3
  struct Ctrl3Fields {
    enum class eCLR_ERR : std::uint32_t {
      // No effect
      eCLR_ERR_0 = 0,
      // Clears the error flag CLK1M_ERR in status register STAT0
      eCLR_ERR_1 = 1,
    };

    enum class eEN_1M_CLK : std::uint32_t {
      // Enable the output (clk_1m_out)
      eEN_1M_CLK_0 = 0,
      // Disable the output (clk_1m_out)
      eEN_1M_CLK_1 = 1,
    };

    enum class eMUX_1M_CLK : std::uint32_t {
      // Select free-running 1MHz to be put out on clk_1m_out
      eMUX_1M_CLK_0 = 0,
      // Select locked 1MHz to be put out on clk_1m_out
      eMUX_1M_CLK_1 = 1,
    };

    // Clear the error flag CLK1M_ERR
    using CLR_ERR = ftl::mmio::Field<1, 0, eCLR_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable 1MHz output Clock
    using EN_1M_CLK = ftl::mmio::Field<1, 8, eEN_1M_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select free/locked 1MHz output
    using MUX_1M_CLK = ftl::mmio::Field<1, 10, eMUX_1M_CLK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count for the locked clk_1m_out
    using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl3Fields

  struct CTRL3 : ftl::mmio::Register<
      0x00000030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl3Fields::CLR_ERR,
      ftl::mmio::Reserved<7, 1>,
      Ctrl3Fields::EN_1M_CLK,
      ftl::mmio::Reserved<1, 9>,
      Ctrl3Fields::MUX_1M_CLK,
      ftl::mmio::Reserved<5, 11>,
      Ctrl3Fields::COUNT_1M_CLK> {
    using eCLR_ERR = Ctrl3Fields::eCLR_ERR;
    using eEN_1M_CLK = Ctrl3Fields::eEN_1M_CLK;
    using eMUX_1M_CLK = Ctrl3Fields::eMUX_1M_CLK;
    using CLR_ERR = Ctrl3Fields::CLR_ERR;
    using EN_1M_CLK = Ctrl3Fields::EN_1M_CLK;
    using MUX_1M_CLK = Ctrl3Fields::MUX_1M_CLK;
    using COUNT_1M_CLK = Ctrl3Fields::COUNT_1M_CLK;
  };

  // Control Register 3
  struct Ctrl3SetFields {
    // Clear the error flag CLK1M_ERR
    using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Enable 1MHz output Clock
    using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Select free/locked 1MHz output
    using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Count for the locked clk_1m_out
    using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl3SetFields

  struct CTRL3_SET : ftl::mmio::Register<
      0x00000034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl3SetFields::CLR_ERR,
      ftl::mmio::Reserved<7, 1>,
      Ctrl3SetFields::EN_1M_CLK,
      ftl::mmio::Reserved<1, 9>,
      Ctrl3SetFields::MUX_1M_CLK,
      ftl::mmio::Reserved<5, 11>,
      Ctrl3SetFields::COUNT_1M_CLK> {
    using CLR_ERR = Ctrl3SetFields::CLR_ERR;
    using EN_1M_CLK = Ctrl3SetFields::EN_1M_CLK;
    using MUX_1M_CLK = Ctrl3SetFields::MUX_1M_CLK;
    using COUNT_1M_CLK = Ctrl3SetFields::COUNT_1M_CLK;
  };

  // Control Register 3
  struct Ctrl3ClrFields {
    // Clear the error flag CLK1M_ERR
    using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Enable 1MHz output Clock
    using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Select free/locked 1MHz output
    using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Count for the locked clk_1m_out
    using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl3ClrFields

  struct CTRL3_CLR : ftl::mmio::Register<
      0x00000038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl3ClrFields::CLR_ERR,
      ftl::mmio::Reserved<7, 1>,
      Ctrl3ClrFields::EN_1M_CLK,
      ftl::mmio::Reserved<1, 9>,
      Ctrl3ClrFields::MUX_1M_CLK,
      ftl::mmio::Reserved<5, 11>,
      Ctrl3ClrFields::COUNT_1M_CLK> {
    using CLR_ERR = Ctrl3ClrFields::CLR_ERR;
    using EN_1M_CLK = Ctrl3ClrFields::EN_1M_CLK;
    using MUX_1M_CLK = Ctrl3ClrFields::MUX_1M_CLK;
    using COUNT_1M_CLK = Ctrl3ClrFields::COUNT_1M_CLK;
  };

  // Control Register 3
  struct Ctrl3TogFields {
    // Clear the error flag CLK1M_ERR
    using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Enable 1MHz output Clock
    using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Select free/locked 1MHz output
    using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Count for the locked clk_1m_out
    using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl3TogFields

  struct CTRL3_TOG : ftl::mmio::Register<
      0x0000003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Ctrl3TogFields::CLR_ERR,
      ftl::mmio::Reserved<7, 1>,
      Ctrl3TogFields::EN_1M_CLK,
      ftl::mmio::Reserved<1, 9>,
      Ctrl3TogFields::MUX_1M_CLK,
      ftl::mmio::Reserved<5, 11>,
      Ctrl3TogFields::COUNT_1M_CLK> {
    using CLR_ERR = Ctrl3TogFields::CLR_ERR;
    using EN_1M_CLK = Ctrl3TogFields::EN_1M_CLK;
    using MUX_1M_CLK = Ctrl3TogFields::MUX_1M_CLK;
    using COUNT_1M_CLK = Ctrl3TogFields::COUNT_1M_CLK;
  };

  // Status Register 0
  struct Stat0Fields {
    enum class eCLK1M_ERR : std::uint32_t {
      // No effect
      eCLK1M_ERR_0 = 0,
      // The count value has been reached within one divided ref_clk period
      eCLK1M_ERR_1 = 1,
    };

    // Error flag for clk_1m_locked
    using CLK1M_ERR = ftl::mmio::Field<1, 0, eCLK1M_ERR, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Stat0Fields

  struct STAT0 : ftl::mmio::Register<
      0x00000050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0Fields::CLK1M_ERR,
      ftl::mmio::Reserved<31, 1>> {
    using eCLK1M_ERR = Stat0Fields::eCLK1M_ERR;
    using CLK1M_ERR = Stat0Fields::CLK1M_ERR;
  };

  // Status Register 0
  struct Stat0SetFields {
    // Error flag for clk_1m_locked
    using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
  };  // struct Stat0SetFields

  struct STAT0_SET : ftl::mmio::Register<
      0x00000054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0SetFields::CLK1M_ERR,
      ftl::mmio::Reserved<31, 1>> {
    using CLK1M_ERR = Stat0SetFields::CLK1M_ERR;
  };

  // Status Register 0
  struct Stat0ClrFields {
    // Error flag for clk_1m_locked
    using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
  };  // struct Stat0ClrFields

  struct STAT0_CLR : ftl::mmio::Register<
      0x00000058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0ClrFields::CLK1M_ERR,
      ftl::mmio::Reserved<31, 1>> {
    using CLK1M_ERR = Stat0ClrFields::CLK1M_ERR;
  };

  // Status Register 0
  struct Stat0TogFields {
    // Error flag for clk_1m_locked
    using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  };  // struct Stat0TogFields

  struct STAT0_TOG : ftl::mmio::Register<
      0x0000005Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Stat0TogFields::CLK1M_ERR,
      ftl::mmio::Reserved<31, 1>> {
    using CLK1M_ERR = Stat0TogFields::CLK1M_ERR;
  };

  // Status Register 1
  struct Stat1Fields {
    // Current count for the fast clock
    using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Stat1Fields

  struct STAT1 : ftl::mmio::Register<
      0x00000060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<16, 0>,
      Stat1Fields::CURR_COUNT_VAL> {
    using CURR_COUNT_VAL = Stat1Fields::CURR_COUNT_VAL;
  };

  // Status Register 1
  struct Stat1SetFields {
    // Current count for the fast clock
    using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  };  // struct Stat1SetFields

  struct STAT1_SET : ftl::mmio::Register<
      0x00000064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<16, 0>,
      Stat1SetFields::CURR_COUNT_VAL> {
    using CURR_COUNT_VAL = Stat1SetFields::CURR_COUNT_VAL;
  };

  // Status Register 1
  struct Stat1ClrFields {
    // Current count for the fast clock
    using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  };  // struct Stat1ClrFields

  struct STAT1_CLR : ftl::mmio::Register<
      0x00000068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<16, 0>,
      Stat1ClrFields::CURR_COUNT_VAL> {
    using CURR_COUNT_VAL = Stat1ClrFields::CURR_COUNT_VAL;
  };

  // Status Register 1
  struct Stat1TogFields {
    // Current count for the fast clock
    using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  };  // struct Stat1TogFields

  struct STAT1_TOG : ftl::mmio::Register<
      0x0000006Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<16, 0>,
      Stat1TogFields::CURR_COUNT_VAL> {
    using CURR_COUNT_VAL = Stat1TogFields::CURR_COUNT_VAL;
  };

  // Status Register 2
  struct Stat2Fields {
    // Current tuning value used by oscillator
    using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Stat2Fields

  struct STAT2 : ftl::mmio::Register<
      0x00000070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      Stat2Fields::CURR_OSC_TUNE_VAL> {
    using CURR_OSC_TUNE_VAL = Stat2Fields::CURR_OSC_TUNE_VAL;
  };

  // Status Register 2
  struct Stat2SetFields {
    // Current tuning value used by oscillator
    using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
  };  // struct Stat2SetFields

  struct STAT2_SET : ftl::mmio::Register<
      0x00000074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      Stat2SetFields::CURR_OSC_TUNE_VAL> {
    using CURR_OSC_TUNE_VAL = Stat2SetFields::CURR_OSC_TUNE_VAL;
  };

  // Status Register 2
  struct Stat2ClrFields {
    // Current tuning value used by oscillator
    using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
  };  // struct Stat2ClrFields

  struct STAT2_CLR : ftl::mmio::Register<
      0x00000078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      Stat2ClrFields::CURR_OSC_TUNE_VAL> {
    using CURR_OSC_TUNE_VAL = Stat2ClrFields::CURR_OSC_TUNE_VAL;
  };

  // Status Register 2
  struct Stat2TogFields {
    // Current tuning value used by oscillator
    using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
  };  // struct Stat2TogFields

  struct STAT2_TOG : ftl::mmio::Register<
      0x0000007Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<24, 0>,
      Stat2TogFields::CURR_OSC_TUNE_VAL> {
    using CURR_OSC_TUNE_VAL = Stat2TogFields::CURR_OSC_TUNE_VAL;
  };

};

}  // namespace regs