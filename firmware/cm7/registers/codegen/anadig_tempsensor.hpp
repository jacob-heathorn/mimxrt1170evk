#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::anadig_tempsensor {


// Tempsensor Register
struct TEMPSENSOR_fields_ {
  // AI toggle
  using TEMPSNS_AI_TOGGLE = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AI Busy monitor
  using TEMPSNS_AI_BUSY = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct TEMPSENSOR_fields_

struct TEMPSENSOR : ftl::mmio::Register<
    0x40C84400u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<15, 0>,
    TEMPSENSOR_fields_::TEMPSNS_AI_TOGGLE,
    TEMPSENSOR_fields_::TEMPSNS_AI_BUSY,
    ftl::mmio::Reserved<15, 17>> {
  using TEMPSNS_AI_TOGGLE = TEMPSENSOR_fields_::TEMPSNS_AI_TOGGLE;
  using TEMPSNS_AI_BUSY = TEMPSENSOR_fields_::TEMPSNS_AI_BUSY;
};


// TEMPSNS_OTP_TRIM_VALUE_REGISTER
struct TEMPSNS_OTP_TRIM_VALUE_fields_ {
  // Temperature Value at 25C
  using TEMPSNS_TEMP_VAL = ftl::mmio::Field<12, 10, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct TEMPSNS_OTP_TRIM_VALUE_fields_

struct TEMPSNS_OTP_TRIM_VALUE : ftl::mmio::Register<
    0x40C84430u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<10, 0>,
    TEMPSNS_OTP_TRIM_VALUE_fields_::TEMPSNS_TEMP_VAL,
    ftl::mmio::Reserved<10, 22>> {
  using TEMPSNS_TEMP_VAL = TEMPSNS_OTP_TRIM_VALUE_fields_::TEMPSNS_TEMP_VAL;
};

}  // namespace regs::anadig_tempsensor