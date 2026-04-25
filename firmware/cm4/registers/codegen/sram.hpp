#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Secure RAM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::sram {


// Control Register
struct CTRL_fields_ {

  enum class eRAM_RD_EN : std::uint32_t {
    // Disable read access
    eDISABLE = 0,
    // Enable read access
    eENABLE = 1,
  };

  enum class eRAM_WR_EN : std::uint32_t {
    // Disable write access
    eDISABLE = 0,
    // Enable write access
    eENABLE = 1,
  };

  enum class eTAMPER_BLOCK_EN : std::uint32_t {
    // Allow R/W access to secure RAM when tamper is detected
    eACCESS = 0,
    // Block R/W access to secure RAM when tamper is detected
    eBLOCK = 1,
  };

  enum class eTAMPER_PWR_OFF_EN : std::uint32_t {
    // Disable the turn off function when tamper is detected
    eOFF = 0,
    // Turn off power for all secure RAM banks when tamper is detected
    eON = 1,
  };
  // RAM Read Enable (with lock)
  using RAM_RD_EN = ftl::mmio::Field<1, 0, eRAM_RD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // RAM Write Enable (with lock)
  using RAM_WR_EN = ftl::mmio::Field<1, 1, eRAM_WR_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Power Enable (with lock)
  using PWR_EN = ftl::mmio::Field<4, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Tamper Block Enable (with lock)
  using TAMPER_BLOCK_EN = ftl::mmio::Field<1, 6, eTAMPER_BLOCK_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Turn off power on tamper event (with lock)
  using TAMPER_PWR_OFF_EN = ftl::mmio::Field<1, 7, eTAMPER_PWR_OFF_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Lock bits
  using LOCK_BIT = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    0x40C9F000u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CTRL_fields_::RAM_RD_EN,
    CTRL_fields_::RAM_WR_EN,
    CTRL_fields_::PWR_EN,
    CTRL_fields_::TAMPER_BLOCK_EN,
    CTRL_fields_::TAMPER_PWR_OFF_EN,
    ftl::mmio::Reserved<8, 8>,
    CTRL_fields_::LOCK_BIT,
    ftl::mmio::Reserved<8, 24>> {
  using eRAM_RD_EN = CTRL_fields_::eRAM_RD_EN;
  using eRAM_WR_EN = CTRL_fields_::eRAM_WR_EN;
  using eTAMPER_BLOCK_EN = CTRL_fields_::eTAMPER_BLOCK_EN;
  using eTAMPER_PWR_OFF_EN = CTRL_fields_::eTAMPER_PWR_OFF_EN;
  using RAM_RD_EN = CTRL_fields_::RAM_RD_EN;
  using RAM_WR_EN = CTRL_fields_::RAM_WR_EN;
  using PWR_EN = CTRL_fields_::PWR_EN;
  using TAMPER_BLOCK_EN = CTRL_fields_::TAMPER_BLOCK_EN;
  using TAMPER_PWR_OFF_EN = CTRL_fields_::TAMPER_PWR_OFF_EN;
  using LOCK_BIT = CTRL_fields_::LOCK_BIT;
};

}  // namespace regs::sram