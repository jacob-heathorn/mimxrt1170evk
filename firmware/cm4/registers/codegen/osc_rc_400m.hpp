#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::osc_rc_400m {


// Control Register 0
struct CTRL0_fields_ {
  // Divide value for ref_clk to generate slow_clk (used inside this IP)
  using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL0_fields_

struct CTRL0 : ftl::mmio::Register<
    0x00000000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    CTRL0_fields_::REF_CLK_DIV,
    ftl::mmio::Reserved<2, 30>> {
  using REF_CLK_DIV = CTRL0_fields_::REF_CLK_DIV;
};


// Control Register 0
struct CTRL0_SET_fields_ {
  // Divide value for ref_clk to generate slow_clk (used inside this IP)
  using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL0_SET_fields_

struct CTRL0_SET : ftl::mmio::Register<
    0x00000004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    CTRL0_SET_fields_::REF_CLK_DIV,
    ftl::mmio::Reserved<2, 30>> {
  using REF_CLK_DIV = CTRL0_SET_fields_::REF_CLK_DIV;
};


// Control Register 0
struct CTRL0_CLR_fields_ {
  // Divide value for ref_clk to generate slow_clk (used inside this IP)
  using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL0_CLR_fields_

struct CTRL0_CLR : ftl::mmio::Register<
    0x00000008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    CTRL0_CLR_fields_::REF_CLK_DIV,
    ftl::mmio::Reserved<2, 30>> {
  using REF_CLK_DIV = CTRL0_CLR_fields_::REF_CLK_DIV;
};


// Control Register 0
struct CTRL0_TOG_fields_ {
  // Divide value for ref_clk to generate slow_clk (used inside this IP)
  using REF_CLK_DIV = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL0_TOG_fields_

struct CTRL0_TOG : ftl::mmio::Register<
    0x0000000Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    CTRL0_TOG_fields_::REF_CLK_DIV,
    ftl::mmio::Reserved<2, 30>> {
  using REF_CLK_DIV = CTRL0_TOG_fields_::REF_CLK_DIV;
};


// Control Register 1
struct CTRL1_fields_ {
  // Negative hysteresis value for the tuned clock
  using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Positive hysteresis value for the tuned clock
  using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Target count for the fast clock
  using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL1_fields_

struct CTRL1 : ftl::mmio::Register<
    0x00000010u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL1_fields_::HYST_MINUS,
    ftl::mmio::Reserved<4, 4>,
    CTRL1_fields_::HYST_PLUS,
    ftl::mmio::Reserved<4, 12>,
    CTRL1_fields_::TARGET_COUNT> {
  using HYST_MINUS = CTRL1_fields_::HYST_MINUS;
  using HYST_PLUS = CTRL1_fields_::HYST_PLUS;
  using TARGET_COUNT = CTRL1_fields_::TARGET_COUNT;
};


// Control Register 1
struct CTRL1_SET_fields_ {
  // Negative hysteresis value for the tuned clock
  using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Positive hysteresis value for the tuned clock
  using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Target count for the fast clock
  using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL1_SET_fields_

struct CTRL1_SET : ftl::mmio::Register<
    0x00000014u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL1_SET_fields_::HYST_MINUS,
    ftl::mmio::Reserved<4, 4>,
    CTRL1_SET_fields_::HYST_PLUS,
    ftl::mmio::Reserved<4, 12>,
    CTRL1_SET_fields_::TARGET_COUNT> {
  using HYST_MINUS = CTRL1_SET_fields_::HYST_MINUS;
  using HYST_PLUS = CTRL1_SET_fields_::HYST_PLUS;
  using TARGET_COUNT = CTRL1_SET_fields_::TARGET_COUNT;
};


// Control Register 1
struct CTRL1_CLR_fields_ {
  // Negative hysteresis value for the tuned clock
  using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Positive hysteresis value for the tuned clock
  using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Target count for the fast clock
  using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL1_CLR_fields_

struct CTRL1_CLR : ftl::mmio::Register<
    0x00000018u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL1_CLR_fields_::HYST_MINUS,
    ftl::mmio::Reserved<4, 4>,
    CTRL1_CLR_fields_::HYST_PLUS,
    ftl::mmio::Reserved<4, 12>,
    CTRL1_CLR_fields_::TARGET_COUNT> {
  using HYST_MINUS = CTRL1_CLR_fields_::HYST_MINUS;
  using HYST_PLUS = CTRL1_CLR_fields_::HYST_PLUS;
  using TARGET_COUNT = CTRL1_CLR_fields_::TARGET_COUNT;
};


// Control Register 1
struct CTRL1_TOG_fields_ {
  // Negative hysteresis value for the tuned clock
  using HYST_MINUS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Positive hysteresis value for the tuned clock
  using HYST_PLUS = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Target count for the fast clock
  using TARGET_COUNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL1_TOG_fields_

struct CTRL1_TOG : ftl::mmio::Register<
    0x0000001Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL1_TOG_fields_::HYST_MINUS,
    ftl::mmio::Reserved<4, 4>,
    CTRL1_TOG_fields_::HYST_PLUS,
    ftl::mmio::Reserved<4, 12>,
    CTRL1_TOG_fields_::TARGET_COUNT> {
  using HYST_MINUS = CTRL1_TOG_fields_::HYST_MINUS;
  using HYST_PLUS = CTRL1_TOG_fields_::HYST_PLUS;
  using TARGET_COUNT = CTRL1_TOG_fields_::TARGET_COUNT;
};


// Control Register 2
struct CTRL2_fields_ {

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
};  // struct CTRL2_fields_

struct CTRL2 : ftl::mmio::Register<
    0x00000020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    CTRL2_fields_::TUNE_BYP,
    ftl::mmio::Reserved<1, 11>,
    CTRL2_fields_::TUNE_EN,
    ftl::mmio::Reserved<1, 13>,
    CTRL2_fields_::TUNE_START,
    ftl::mmio::Reserved<9, 15>,
    CTRL2_fields_::OSC_TUNE_VAL> {
  using eTUNE_BYP = CTRL2_fields_::eTUNE_BYP;
  using eTUNE_EN = CTRL2_fields_::eTUNE_EN;
  using eTUNE_START = CTRL2_fields_::eTUNE_START;
  using TUNE_BYP = CTRL2_fields_::TUNE_BYP;
  using TUNE_EN = CTRL2_fields_::TUNE_EN;
  using TUNE_START = CTRL2_fields_::TUNE_START;
  using OSC_TUNE_VAL = CTRL2_fields_::OSC_TUNE_VAL;
};


// Control Register 2
struct CTRL2_SET_fields_ {
  // Bypass the tuning logic
  using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Freeze/Unfreeze the tuning value
  using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Start/Stop tuning
  using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Program the oscillator frequency
  using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL2_SET_fields_

struct CTRL2_SET : ftl::mmio::Register<
    0x00000024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    CTRL2_SET_fields_::TUNE_BYP,
    ftl::mmio::Reserved<1, 11>,
    CTRL2_SET_fields_::TUNE_EN,
    ftl::mmio::Reserved<1, 13>,
    CTRL2_SET_fields_::TUNE_START,
    ftl::mmio::Reserved<9, 15>,
    CTRL2_SET_fields_::OSC_TUNE_VAL> {
  using TUNE_BYP = CTRL2_SET_fields_::TUNE_BYP;
  using TUNE_EN = CTRL2_SET_fields_::TUNE_EN;
  using TUNE_START = CTRL2_SET_fields_::TUNE_START;
  using OSC_TUNE_VAL = CTRL2_SET_fields_::OSC_TUNE_VAL;
};


// Control Register 2
struct CTRL2_CLR_fields_ {
  // Bypass the tuning logic
  using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Freeze/Unfreeze the tuning value
  using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Start/Stop tuning
  using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Program the oscillator frequency
  using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL2_CLR_fields_

struct CTRL2_CLR : ftl::mmio::Register<
    0x00000028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    CTRL2_CLR_fields_::TUNE_BYP,
    ftl::mmio::Reserved<1, 11>,
    CTRL2_CLR_fields_::TUNE_EN,
    ftl::mmio::Reserved<1, 13>,
    CTRL2_CLR_fields_::TUNE_START,
    ftl::mmio::Reserved<9, 15>,
    CTRL2_CLR_fields_::OSC_TUNE_VAL> {
  using TUNE_BYP = CTRL2_CLR_fields_::TUNE_BYP;
  using TUNE_EN = CTRL2_CLR_fields_::TUNE_EN;
  using TUNE_START = CTRL2_CLR_fields_::TUNE_START;
  using OSC_TUNE_VAL = CTRL2_CLR_fields_::OSC_TUNE_VAL;
};


// Control Register 2
struct CTRL2_TOG_fields_ {
  // Bypass the tuning logic
  using TUNE_BYP = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Freeze/Unfreeze the tuning value
  using TUNE_EN = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Start/Stop tuning
  using TUNE_START = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Program the oscillator frequency
  using OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL2_TOG_fields_

struct CTRL2_TOG : ftl::mmio::Register<
    0x0000002Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<10, 0>,
    CTRL2_TOG_fields_::TUNE_BYP,
    ftl::mmio::Reserved<1, 11>,
    CTRL2_TOG_fields_::TUNE_EN,
    ftl::mmio::Reserved<1, 13>,
    CTRL2_TOG_fields_::TUNE_START,
    ftl::mmio::Reserved<9, 15>,
    CTRL2_TOG_fields_::OSC_TUNE_VAL> {
  using TUNE_BYP = CTRL2_TOG_fields_::TUNE_BYP;
  using TUNE_EN = CTRL2_TOG_fields_::TUNE_EN;
  using TUNE_START = CTRL2_TOG_fields_::TUNE_START;
  using OSC_TUNE_VAL = CTRL2_TOG_fields_::OSC_TUNE_VAL;
};


// Control Register 3
struct CTRL3_fields_ {

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
};  // struct CTRL3_fields_

struct CTRL3 : ftl::mmio::Register<
    0x00000030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL3_fields_::CLR_ERR,
    ftl::mmio::Reserved<7, 1>,
    CTRL3_fields_::EN_1M_CLK,
    ftl::mmio::Reserved<1, 9>,
    CTRL3_fields_::MUX_1M_CLK,
    ftl::mmio::Reserved<5, 11>,
    CTRL3_fields_::COUNT_1M_CLK> {
  using eCLR_ERR = CTRL3_fields_::eCLR_ERR;
  using eEN_1M_CLK = CTRL3_fields_::eEN_1M_CLK;
  using eMUX_1M_CLK = CTRL3_fields_::eMUX_1M_CLK;
  using CLR_ERR = CTRL3_fields_::CLR_ERR;
  using EN_1M_CLK = CTRL3_fields_::EN_1M_CLK;
  using MUX_1M_CLK = CTRL3_fields_::MUX_1M_CLK;
  using COUNT_1M_CLK = CTRL3_fields_::COUNT_1M_CLK;
};


// Control Register 3
struct CTRL3_SET_fields_ {
  // Clear the error flag CLK1M_ERR
  using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Enable 1MHz output Clock
  using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Select free/locked 1MHz output
  using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Count for the locked clk_1m_out
  using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL3_SET_fields_

struct CTRL3_SET : ftl::mmio::Register<
    0x00000034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL3_SET_fields_::CLR_ERR,
    ftl::mmio::Reserved<7, 1>,
    CTRL3_SET_fields_::EN_1M_CLK,
    ftl::mmio::Reserved<1, 9>,
    CTRL3_SET_fields_::MUX_1M_CLK,
    ftl::mmio::Reserved<5, 11>,
    CTRL3_SET_fields_::COUNT_1M_CLK> {
  using CLR_ERR = CTRL3_SET_fields_::CLR_ERR;
  using EN_1M_CLK = CTRL3_SET_fields_::EN_1M_CLK;
  using MUX_1M_CLK = CTRL3_SET_fields_::MUX_1M_CLK;
  using COUNT_1M_CLK = CTRL3_SET_fields_::COUNT_1M_CLK;
};


// Control Register 3
struct CTRL3_CLR_fields_ {
  // Clear the error flag CLK1M_ERR
  using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Enable 1MHz output Clock
  using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Select free/locked 1MHz output
  using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Count for the locked clk_1m_out
  using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL3_CLR_fields_

struct CTRL3_CLR : ftl::mmio::Register<
    0x00000038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL3_CLR_fields_::CLR_ERR,
    ftl::mmio::Reserved<7, 1>,
    CTRL3_CLR_fields_::EN_1M_CLK,
    ftl::mmio::Reserved<1, 9>,
    CTRL3_CLR_fields_::MUX_1M_CLK,
    ftl::mmio::Reserved<5, 11>,
    CTRL3_CLR_fields_::COUNT_1M_CLK> {
  using CLR_ERR = CTRL3_CLR_fields_::CLR_ERR;
  using EN_1M_CLK = CTRL3_CLR_fields_::EN_1M_CLK;
  using MUX_1M_CLK = CTRL3_CLR_fields_::MUX_1M_CLK;
  using COUNT_1M_CLK = CTRL3_CLR_fields_::COUNT_1M_CLK;
};


// Control Register 3
struct CTRL3_TOG_fields_ {
  // Clear the error flag CLK1M_ERR
  using CLR_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Enable 1MHz output Clock
  using EN_1M_CLK = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Select free/locked 1MHz output
  using MUX_1M_CLK = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Count for the locked clk_1m_out
  using COUNT_1M_CLK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL3_TOG_fields_

struct CTRL3_TOG : ftl::mmio::Register<
    0x0000003Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL3_TOG_fields_::CLR_ERR,
    ftl::mmio::Reserved<7, 1>,
    CTRL3_TOG_fields_::EN_1M_CLK,
    ftl::mmio::Reserved<1, 9>,
    CTRL3_TOG_fields_::MUX_1M_CLK,
    ftl::mmio::Reserved<5, 11>,
    CTRL3_TOG_fields_::COUNT_1M_CLK> {
  using CLR_ERR = CTRL3_TOG_fields_::CLR_ERR;
  using EN_1M_CLK = CTRL3_TOG_fields_::EN_1M_CLK;
  using MUX_1M_CLK = CTRL3_TOG_fields_::MUX_1M_CLK;
  using COUNT_1M_CLK = CTRL3_TOG_fields_::COUNT_1M_CLK;
};


// Status Register 0
struct STAT0_fields_ {

  enum class eCLK1M_ERR : std::uint32_t {
    // No effect
    eCLK1M_ERR_0 = 0,
    // The count value has been reached within one divided ref_clk period
    eCLK1M_ERR_1 = 1,
  };
  // Error flag for clk_1m_locked
  using CLK1M_ERR = ftl::mmio::Field<1, 0, eCLK1M_ERR, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STAT0_fields_

struct STAT0 : ftl::mmio::Register<
    0x00000050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_fields_::CLK1M_ERR,
    ftl::mmio::Reserved<31, 1>> {
  using eCLK1M_ERR = STAT0_fields_::eCLK1M_ERR;
  using CLK1M_ERR = STAT0_fields_::CLK1M_ERR;
};


// Status Register 0
struct STAT0_SET_fields_ {
  // Error flag for clk_1m_locked
  using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct STAT0_SET_fields_

struct STAT0_SET : ftl::mmio::Register<
    0x00000054u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_SET_fields_::CLK1M_ERR,
    ftl::mmio::Reserved<31, 1>> {
  using CLK1M_ERR = STAT0_SET_fields_::CLK1M_ERR;
};


// Status Register 0
struct STAT0_CLR_fields_ {
  // Error flag for clk_1m_locked
  using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct STAT0_CLR_fields_

struct STAT0_CLR : ftl::mmio::Register<
    0x00000058u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_CLR_fields_::CLK1M_ERR,
    ftl::mmio::Reserved<31, 1>> {
  using CLK1M_ERR = STAT0_CLR_fields_::CLK1M_ERR;
};


// Status Register 0
struct STAT0_TOG_fields_ {
  // Error flag for clk_1m_locked
  using CLK1M_ERR = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct STAT0_TOG_fields_

struct STAT0_TOG : ftl::mmio::Register<
    0x0000005Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    STAT0_TOG_fields_::CLK1M_ERR,
    ftl::mmio::Reserved<31, 1>> {
  using CLK1M_ERR = STAT0_TOG_fields_::CLK1M_ERR;
};


// Status Register 1
struct STAT1_fields_ {
  // Current count for the fast clock
  using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STAT1_fields_

struct STAT1 : ftl::mmio::Register<
    0x00000060u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<16, 0>,
    STAT1_fields_::CURR_COUNT_VAL> {
  using CURR_COUNT_VAL = STAT1_fields_::CURR_COUNT_VAL;
};


// Status Register 1
struct STAT1_SET_fields_ {
  // Current count for the fast clock
  using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct STAT1_SET_fields_

struct STAT1_SET : ftl::mmio::Register<
    0x00000064u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<16, 0>,
    STAT1_SET_fields_::CURR_COUNT_VAL> {
  using CURR_COUNT_VAL = STAT1_SET_fields_::CURR_COUNT_VAL;
};


// Status Register 1
struct STAT1_CLR_fields_ {
  // Current count for the fast clock
  using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct STAT1_CLR_fields_

struct STAT1_CLR : ftl::mmio::Register<
    0x00000068u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<16, 0>,
    STAT1_CLR_fields_::CURR_COUNT_VAL> {
  using CURR_COUNT_VAL = STAT1_CLR_fields_::CURR_COUNT_VAL;
};


// Status Register 1
struct STAT1_TOG_fields_ {
  // Current count for the fast clock
  using CURR_COUNT_VAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct STAT1_TOG_fields_

struct STAT1_TOG : ftl::mmio::Register<
    0x0000006Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<16, 0>,
    STAT1_TOG_fields_::CURR_COUNT_VAL> {
  using CURR_COUNT_VAL = STAT1_TOG_fields_::CURR_COUNT_VAL;
};


// Status Register 2
struct STAT2_fields_ {
  // Current tuning value used by oscillator
  using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct STAT2_fields_

struct STAT2 : ftl::mmio::Register<
    0x00000070u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<24, 0>,
    STAT2_fields_::CURR_OSC_TUNE_VAL> {
  using CURR_OSC_TUNE_VAL = STAT2_fields_::CURR_OSC_TUNE_VAL;
};


// Status Register 2
struct STAT2_SET_fields_ {
  // Current tuning value used by oscillator
  using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
};  // struct STAT2_SET_fields_

struct STAT2_SET : ftl::mmio::Register<
    0x00000074u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<24, 0>,
    STAT2_SET_fields_::CURR_OSC_TUNE_VAL> {
  using CURR_OSC_TUNE_VAL = STAT2_SET_fields_::CURR_OSC_TUNE_VAL;
};


// Status Register 2
struct STAT2_CLR_fields_ {
  // Current tuning value used by oscillator
  using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
};  // struct STAT2_CLR_fields_

struct STAT2_CLR : ftl::mmio::Register<
    0x00000078u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<24, 0>,
    STAT2_CLR_fields_::CURR_OSC_TUNE_VAL> {
  using CURR_OSC_TUNE_VAL = STAT2_CLR_fields_::CURR_OSC_TUNE_VAL;
};


// Status Register 2
struct STAT2_TOG_fields_ {
  // Current tuning value used by oscillator
  using CURR_OSC_TUNE_VAL = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
};  // struct STAT2_TOG_fields_

struct STAT2_TOG : ftl::mmio::Register<
    0x0000007Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<24, 0>,
    STAT2_TOG_fields_::CURR_OSC_TUNE_VAL> {
  using CURR_OSC_TUNE_VAL = STAT2_TOG_fields_::CURR_OSC_TUNE_VAL;
};

}  // namespace regs::osc_rc_400m