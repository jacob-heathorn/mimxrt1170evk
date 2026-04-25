#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Temperature Sensor Memory Map
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::tmpsns {


// Temperature Sensor Control Register 0
struct CTRL0_fields_ {

  enum class eV_SEL : std::uint32_t {
    // Normal temperature measuring mode
    eV_SEL_0 = 0,
  };
  // Ramp slope calibration control
  using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Voltage Select
  using V_SEL = ftl::mmio::Field<2, 8, eV_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  // Current bias trim value
  using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL0_fields_

struct CTRL0 : ftl::mmio::Register<
    0x00000000u,
    std::uint32_t,
    0x00008020u,
    ftl::mmio::RW,
    CTRL0_fields_::SLOPE_CAL,
    ftl::mmio::Reserved<2, 6>,
    CTRL0_fields_::V_SEL,
    ftl::mmio::Reserved<2, 10>,
    CTRL0_fields_::IBIAS_TRIM,
    ftl::mmio::Reserved<16, 16>> {
  using eV_SEL = CTRL0_fields_::eV_SEL;
  using SLOPE_CAL = CTRL0_fields_::SLOPE_CAL;
  using V_SEL = CTRL0_fields_::V_SEL;
  using IBIAS_TRIM = CTRL0_fields_::IBIAS_TRIM;
};


// Temperature Sensor Control Register 0
struct CTRL0_SET_fields_ {
  // Ramp slope calibration control
  using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Voltage Select
  using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Current bias trim value
  using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL0_SET_fields_

struct CTRL0_SET : ftl::mmio::Register<
    0x00000004u,
    std::uint32_t,
    0x00008020u,
    ftl::mmio::RW,
    CTRL0_SET_fields_::SLOPE_CAL,
    ftl::mmio::Reserved<2, 6>,
    CTRL0_SET_fields_::V_SEL,
    ftl::mmio::Reserved<2, 10>,
    CTRL0_SET_fields_::IBIAS_TRIM,
    ftl::mmio::Reserved<16, 16>> {
  using SLOPE_CAL = CTRL0_SET_fields_::SLOPE_CAL;
  using V_SEL = CTRL0_SET_fields_::V_SEL;
  using IBIAS_TRIM = CTRL0_SET_fields_::IBIAS_TRIM;
};


// Temperature Sensor Control Register 0
struct CTRL0_CLR_fields_ {
  // Ramp slope calibration control
  using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Voltage Select
  using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Current bias trim value
  using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL0_CLR_fields_

struct CTRL0_CLR : ftl::mmio::Register<
    0x00000008u,
    std::uint32_t,
    0x00008020u,
    ftl::mmio::RW,
    CTRL0_CLR_fields_::SLOPE_CAL,
    ftl::mmio::Reserved<2, 6>,
    CTRL0_CLR_fields_::V_SEL,
    ftl::mmio::Reserved<2, 10>,
    CTRL0_CLR_fields_::IBIAS_TRIM,
    ftl::mmio::Reserved<16, 16>> {
  using SLOPE_CAL = CTRL0_CLR_fields_::SLOPE_CAL;
  using V_SEL = CTRL0_CLR_fields_::V_SEL;
  using IBIAS_TRIM = CTRL0_CLR_fields_::IBIAS_TRIM;
};


// Temperature Sensor Control Register 0
struct CTRL0_TOG_fields_ {
  // Ramp slope calibration control
  using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Voltage Select
  using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Current bias trim value
  using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL0_TOG_fields_

struct CTRL0_TOG : ftl::mmio::Register<
    0x0000000Cu,
    std::uint32_t,
    0x00008020u,
    ftl::mmio::RW,
    CTRL0_TOG_fields_::SLOPE_CAL,
    ftl::mmio::Reserved<2, 6>,
    CTRL0_TOG_fields_::V_SEL,
    ftl::mmio::Reserved<2, 10>,
    CTRL0_TOG_fields_::IBIAS_TRIM,
    ftl::mmio::Reserved<16, 16>> {
  using SLOPE_CAL = CTRL0_TOG_fields_::SLOPE_CAL;
  using V_SEL = CTRL0_TOG_fields_::V_SEL;
  using IBIAS_TRIM = CTRL0_TOG_fields_::IBIAS_TRIM;
};


// Temperature Sensor Control Register 1
struct CTRL1_fields_ {

  enum class eFREQ : std::uint32_t {
    // Single Reading Mode. New reading available every time CTRL1[START] bit is set to 1 from 0.
    eFREQ_0 = 0,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_1 = 1,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_2 = 2,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_3 = 3,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_4 = 4,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_5 = 5,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_6 = 6,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_7 = 7,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_8 = 8,
    // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_9 = 9,
  };

  enum class eFINISH_IE : std::uint32_t {
    // Interrupt is disabled
    eFINISH_IE_0 = 0,
    // Interrupt is enabled
    eFINISH_IE_1 = 1,
  };

  enum class eLOW_TEMP_IE : std::uint32_t {
    // Interrupt is disabled
    eLOW_TEMP_IE_0 = 0,
    // Interrupt is enabled
    eLOW_TEMP_IE_1 = 1,
  };

  enum class eHIGH_TEMP_IE : std::uint32_t {
    // Interrupt is disabled
    eHIGH_TEMP_IE_0 = 0,
    // Interrupt is enabled
    eHIGH_TEMP_IE_1 = 1,
  };

  enum class ePANIC_TEMP_IE : std::uint32_t {
    // Interrupt is disabled
    ePANIC_TEMP_IE_0 = 0,
    // Interrupt is enabled
    ePANIC_TEMP_IE_1 = 1,
  };

  enum class eSTART : std::uint32_t {
    // No new temperature reading taken
    eSTART_0 = 0,
    // Initiate a new temperature reading
    eSTART_1 = 1,
  };

  enum class ePWD : std::uint32_t {
    // Sensor is active
    ePWD_0 = 0,
    // Sensor is powered down
    ePWD_1 = 1,
  };

  enum class ePWD_FULL : std::uint32_t {
    // Sensor is active
    ePWD_FULL_0 = 0,
    // Sensor is powered down
    ePWD_FULL_1 = 1,
  };
  // Temperature Measurement Frequency
  using FREQ = ftl::mmio::Field<16, 0, eFREQ, ftl::mmio::RW, ftl::mmio::Normal>;
  // Measurement finished interrupt enable
  using FINISH_IE = ftl::mmio::Field<1, 16, eFINISH_IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Low temperature interrupt enable
  using LOW_TEMP_IE = ftl::mmio::Field<1, 17, eLOW_TEMP_IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // High temperature interrupt enable
  using HIGH_TEMP_IE = ftl::mmio::Field<1, 18, eHIGH_TEMP_IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Panic temperature interrupt enable
  using PANIC_TEMP_IE = ftl::mmio::Field<1, 19, ePANIC_TEMP_IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Start Temperature Measurement
  using START = ftl::mmio::Field<1, 22, eSTART, ftl::mmio::RW, ftl::mmio::Normal>;
  // Temperature Sensor Power Down
  using PWD = ftl::mmio::Field<1, 23, ePWD, ftl::mmio::RW, ftl::mmio::Normal>;
  // Read/Writeable field. Reserved for future use
  using RFU = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Temperature Sensor Full Power Down
  using PWD_FULL = ftl::mmio::Field<1, 31, ePWD_FULL, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CTRL1_fields_

struct CTRL1 : ftl::mmio::Register<
    0x00000010u,
    std::uint32_t,
    0x00800000u,
    ftl::mmio::RW,
    CTRL1_fields_::FREQ,
    CTRL1_fields_::FINISH_IE,
    CTRL1_fields_::LOW_TEMP_IE,
    CTRL1_fields_::HIGH_TEMP_IE,
    CTRL1_fields_::PANIC_TEMP_IE,
    ftl::mmio::Reserved<2, 20>,
    CTRL1_fields_::START,
    CTRL1_fields_::PWD,
    CTRL1_fields_::RFU,
    CTRL1_fields_::PWD_FULL> {
  using eFREQ = CTRL1_fields_::eFREQ;
  using eFINISH_IE = CTRL1_fields_::eFINISH_IE;
  using eLOW_TEMP_IE = CTRL1_fields_::eLOW_TEMP_IE;
  using eHIGH_TEMP_IE = CTRL1_fields_::eHIGH_TEMP_IE;
  using ePANIC_TEMP_IE = CTRL1_fields_::ePANIC_TEMP_IE;
  using eSTART = CTRL1_fields_::eSTART;
  using ePWD = CTRL1_fields_::ePWD;
  using ePWD_FULL = CTRL1_fields_::ePWD_FULL;
  using FREQ = CTRL1_fields_::FREQ;
  using FINISH_IE = CTRL1_fields_::FINISH_IE;
  using LOW_TEMP_IE = CTRL1_fields_::LOW_TEMP_IE;
  using HIGH_TEMP_IE = CTRL1_fields_::HIGH_TEMP_IE;
  using PANIC_TEMP_IE = CTRL1_fields_::PANIC_TEMP_IE;
  using START = CTRL1_fields_::START;
  using PWD = CTRL1_fields_::PWD;
  using RFU = CTRL1_fields_::RFU;
  using PWD_FULL = CTRL1_fields_::PWD_FULL;
};


// Temperature Sensor Control Register 1
struct CTRL1_SET_fields_ {
  // Temperature Measurement Frequency
  using FREQ = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Measurement finished interrupt enable
  using FINISH_IE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Low temperature interrupt enable
  using LOW_TEMP_IE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // High temperature interrupt enable
  using HIGH_TEMP_IE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Panic temperature interrupt enable
  using PANIC_TEMP_IE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Start Temperature Measurement
  using START = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Temperature Sensor Power Down
  using PWD = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Read/Writeable field. Reserved for future use
  using RFU = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // Temperature Sensor Full Power Down
  using PWD_FULL = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct CTRL1_SET_fields_

struct CTRL1_SET : ftl::mmio::Register<
    0x00000014u,
    std::uint32_t,
    0x00800000u,
    ftl::mmio::RW,
    CTRL1_SET_fields_::FREQ,
    CTRL1_SET_fields_::FINISH_IE,
    CTRL1_SET_fields_::LOW_TEMP_IE,
    CTRL1_SET_fields_::HIGH_TEMP_IE,
    CTRL1_SET_fields_::PANIC_TEMP_IE,
    ftl::mmio::Reserved<2, 20>,
    CTRL1_SET_fields_::START,
    CTRL1_SET_fields_::PWD,
    CTRL1_SET_fields_::RFU,
    CTRL1_SET_fields_::PWD_FULL> {
  using FREQ = CTRL1_SET_fields_::FREQ;
  using FINISH_IE = CTRL1_SET_fields_::FINISH_IE;
  using LOW_TEMP_IE = CTRL1_SET_fields_::LOW_TEMP_IE;
  using HIGH_TEMP_IE = CTRL1_SET_fields_::HIGH_TEMP_IE;
  using PANIC_TEMP_IE = CTRL1_SET_fields_::PANIC_TEMP_IE;
  using START = CTRL1_SET_fields_::START;
  using PWD = CTRL1_SET_fields_::PWD;
  using RFU = CTRL1_SET_fields_::RFU;
  using PWD_FULL = CTRL1_SET_fields_::PWD_FULL;
};


// Temperature Sensor Control Register 1
struct CTRL1_CLR_fields_ {
  // Temperature Measurement Frequency
  using FREQ = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Measurement finished interrupt enable
  using FINISH_IE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Low temperature interrupt enable
  using LOW_TEMP_IE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // High temperature interrupt enable
  using HIGH_TEMP_IE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Panic temperature interrupt enable
  using PANIC_TEMP_IE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Start Temperature Measurement
  using START = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Temperature Sensor Power Down
  using PWD = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Read/Writeable field. Reserved for future use
  using RFU = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Temperature Sensor Full Power Down
  using PWD_FULL = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct CTRL1_CLR_fields_

struct CTRL1_CLR : ftl::mmio::Register<
    0x00000018u,
    std::uint32_t,
    0x00800000u,
    ftl::mmio::RW,
    CTRL1_CLR_fields_::FREQ,
    CTRL1_CLR_fields_::FINISH_IE,
    CTRL1_CLR_fields_::LOW_TEMP_IE,
    CTRL1_CLR_fields_::HIGH_TEMP_IE,
    CTRL1_CLR_fields_::PANIC_TEMP_IE,
    ftl::mmio::Reserved<2, 20>,
    CTRL1_CLR_fields_::START,
    CTRL1_CLR_fields_::PWD,
    CTRL1_CLR_fields_::RFU,
    CTRL1_CLR_fields_::PWD_FULL> {
  using FREQ = CTRL1_CLR_fields_::FREQ;
  using FINISH_IE = CTRL1_CLR_fields_::FINISH_IE;
  using LOW_TEMP_IE = CTRL1_CLR_fields_::LOW_TEMP_IE;
  using HIGH_TEMP_IE = CTRL1_CLR_fields_::HIGH_TEMP_IE;
  using PANIC_TEMP_IE = CTRL1_CLR_fields_::PANIC_TEMP_IE;
  using START = CTRL1_CLR_fields_::START;
  using PWD = CTRL1_CLR_fields_::PWD;
  using RFU = CTRL1_CLR_fields_::RFU;
  using PWD_FULL = CTRL1_CLR_fields_::PWD_FULL;
};


// Temperature Sensor Control Register 1
struct CTRL1_TOG_fields_ {
  // Temperature Measurement Frequency
  using FREQ = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Measurement finished interrupt enable
  using FINISH_IE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Low temperature interrupt enable
  using LOW_TEMP_IE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // High temperature interrupt enable
  using HIGH_TEMP_IE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Panic temperature interrupt enable
  using PANIC_TEMP_IE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Start Temperature Measurement
  using START = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Temperature Sensor Power Down
  using PWD = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Read/Writeable field. Reserved for future use
  using RFU = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // Temperature Sensor Full Power Down
  using PWD_FULL = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct CTRL1_TOG_fields_

struct CTRL1_TOG : ftl::mmio::Register<
    0x0000001Cu,
    std::uint32_t,
    0x00800000u,
    ftl::mmio::RW,
    CTRL1_TOG_fields_::FREQ,
    CTRL1_TOG_fields_::FINISH_IE,
    CTRL1_TOG_fields_::LOW_TEMP_IE,
    CTRL1_TOG_fields_::HIGH_TEMP_IE,
    CTRL1_TOG_fields_::PANIC_TEMP_IE,
    ftl::mmio::Reserved<2, 20>,
    CTRL1_TOG_fields_::START,
    CTRL1_TOG_fields_::PWD,
    CTRL1_TOG_fields_::RFU,
    CTRL1_TOG_fields_::PWD_FULL> {
  using FREQ = CTRL1_TOG_fields_::FREQ;
  using FINISH_IE = CTRL1_TOG_fields_::FINISH_IE;
  using LOW_TEMP_IE = CTRL1_TOG_fields_::LOW_TEMP_IE;
  using HIGH_TEMP_IE = CTRL1_TOG_fields_::HIGH_TEMP_IE;
  using PANIC_TEMP_IE = CTRL1_TOG_fields_::PANIC_TEMP_IE;
  using START = CTRL1_TOG_fields_::START;
  using PWD = CTRL1_TOG_fields_::PWD;
  using RFU = CTRL1_TOG_fields_::RFU;
  using PWD_FULL = CTRL1_TOG_fields_::PWD_FULL;
};


// Temperature Sensor Range Register 0
struct RANGE0_fields_ {
  // Low temperature threshold value
  using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // High temperature threshold value
  using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RANGE0_fields_

struct RANGE0 : ftl::mmio::Register<
    0x00000020u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE0_fields_::LOW_TEMP_VAL,
    ftl::mmio::Reserved<4, 12>,
    RANGE0_fields_::HIGH_TEMP_VAL,
    ftl::mmio::Reserved<4, 28>> {
  using LOW_TEMP_VAL = RANGE0_fields_::LOW_TEMP_VAL;
  using HIGH_TEMP_VAL = RANGE0_fields_::HIGH_TEMP_VAL;
};


// Temperature Sensor Range Register 0
struct RANGE0_SET_fields_ {
  // Low temperature threshold value
  using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  // High temperature threshold value
  using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct RANGE0_SET_fields_

struct RANGE0_SET : ftl::mmio::Register<
    0x00000024u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE0_SET_fields_::LOW_TEMP_VAL,
    ftl::mmio::Reserved<4, 12>,
    RANGE0_SET_fields_::HIGH_TEMP_VAL,
    ftl::mmio::Reserved<4, 28>> {
  using LOW_TEMP_VAL = RANGE0_SET_fields_::LOW_TEMP_VAL;
  using HIGH_TEMP_VAL = RANGE0_SET_fields_::HIGH_TEMP_VAL;
};


// Temperature Sensor Range Register 0
struct RANGE0_CLR_fields_ {
  // Low temperature threshold value
  using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // High temperature threshold value
  using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct RANGE0_CLR_fields_

struct RANGE0_CLR : ftl::mmio::Register<
    0x00000028u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE0_CLR_fields_::LOW_TEMP_VAL,
    ftl::mmio::Reserved<4, 12>,
    RANGE0_CLR_fields_::HIGH_TEMP_VAL,
    ftl::mmio::Reserved<4, 28>> {
  using LOW_TEMP_VAL = RANGE0_CLR_fields_::LOW_TEMP_VAL;
  using HIGH_TEMP_VAL = RANGE0_CLR_fields_::HIGH_TEMP_VAL;
};


// Temperature Sensor Range Register 0
struct RANGE0_TOG_fields_ {
  // Low temperature threshold value
  using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  // High temperature threshold value
  using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct RANGE0_TOG_fields_

struct RANGE0_TOG : ftl::mmio::Register<
    0x0000002Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE0_TOG_fields_::LOW_TEMP_VAL,
    ftl::mmio::Reserved<4, 12>,
    RANGE0_TOG_fields_::HIGH_TEMP_VAL,
    ftl::mmio::Reserved<4, 28>> {
  using LOW_TEMP_VAL = RANGE0_TOG_fields_::LOW_TEMP_VAL;
  using HIGH_TEMP_VAL = RANGE0_TOG_fields_::HIGH_TEMP_VAL;
};


// Temperature Sensor Range Register 1
struct RANGE1_fields_ {
  // Panic temperature threshold value
  using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct RANGE1_fields_

struct RANGE1 : ftl::mmio::Register<
    0x00000030u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE1_fields_::PANIC_TEMP_VAL,
    ftl::mmio::Reserved<20, 12>> {
  using PANIC_TEMP_VAL = RANGE1_fields_::PANIC_TEMP_VAL;
};


// Temperature Sensor Range Register 1
struct RANGE1_SET_fields_ {
  // Panic temperature threshold value
  using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
};  // struct RANGE1_SET_fields_

struct RANGE1_SET : ftl::mmio::Register<
    0x00000034u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE1_SET_fields_::PANIC_TEMP_VAL,
    ftl::mmio::Reserved<20, 12>> {
  using PANIC_TEMP_VAL = RANGE1_SET_fields_::PANIC_TEMP_VAL;
};


// Temperature Sensor Range Register 1
struct RANGE1_CLR_fields_ {
  // Panic temperature threshold value
  using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct RANGE1_CLR_fields_

struct RANGE1_CLR : ftl::mmio::Register<
    0x00000038u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE1_CLR_fields_::PANIC_TEMP_VAL,
    ftl::mmio::Reserved<20, 12>> {
  using PANIC_TEMP_VAL = RANGE1_CLR_fields_::PANIC_TEMP_VAL;
};


// Temperature Sensor Range Register 1
struct RANGE1_TOG_fields_ {
  // Panic temperature threshold value
  using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
};  // struct RANGE1_TOG_fields_

struct RANGE1_TOG : ftl::mmio::Register<
    0x0000003Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    RANGE1_TOG_fields_::PANIC_TEMP_VAL,
    ftl::mmio::Reserved<20, 12>> {
  using PANIC_TEMP_VAL = RANGE1_TOG_fields_::PANIC_TEMP_VAL;
};


// Temperature Sensor Status Register 0
struct STATUS0_fields_ {

  enum class eFINISH : std::uint32_t {
    // Temperature sensor is busy (if CTRL1[START] = 1)or no new reading has been initiated (if CTRL1[START] = 0)
    eFINISH_0 = 0,
    // Temperature reading is complete and new temperature value available for reading
    eFINISH_1 = 1,
  };

  enum class eLOW_TEMP : std::uint32_t {
    // No Low temperature alert
    eLOW_TEMP_0 = 0,
    // Low temperature alert
    eLOW_TEMP_1 = 1,
  };

  enum class eHIGH_TEMP : std::uint32_t {
    // No High temperature alert
    eHIGH_TEMP_0 = 0,
    // High temperature alert
    eHIGH_TEMP_1 = 1,
  };

  enum class ePANIC_TEMP : std::uint32_t {
    // No Panic temperature alert
    ePANIC_TEMP_0 = 0,
    // Panic temperature alert
    ePANIC_TEMP_1 = 1,
  };
  // Measured temperature value
  using TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // Temperature measurement complete
  using FINISH = ftl::mmio::Field<1, 16, eFINISH, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Low temperature alarm bit
  using LOW_TEMP = ftl::mmio::Field<1, 17, eLOW_TEMP, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // High temperature alarm bit
  using HIGH_TEMP = ftl::mmio::Field<1, 18, eHIGH_TEMP, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Panic temperature alarm bit
  using PANIC_TEMP = ftl::mmio::Field<1, 19, ePANIC_TEMP, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct STATUS0_fields_

struct STATUS0 : ftl::mmio::Register<
    0x00000050u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    STATUS0_fields_::TEMP_VAL,
    ftl::mmio::Reserved<4, 12>,
    STATUS0_fields_::FINISH,
    STATUS0_fields_::LOW_TEMP,
    STATUS0_fields_::HIGH_TEMP,
    STATUS0_fields_::PANIC_TEMP,
    ftl::mmio::Reserved<12, 20>> {
  using eFINISH = STATUS0_fields_::eFINISH;
  using eLOW_TEMP = STATUS0_fields_::eLOW_TEMP;
  using eHIGH_TEMP = STATUS0_fields_::eHIGH_TEMP;
  using ePANIC_TEMP = STATUS0_fields_::ePANIC_TEMP;
  using TEMP_VAL = STATUS0_fields_::TEMP_VAL;
  using FINISH = STATUS0_fields_::FINISH;
  using LOW_TEMP = STATUS0_fields_::LOW_TEMP;
  using HIGH_TEMP = STATUS0_fields_::HIGH_TEMP;
  using PANIC_TEMP = STATUS0_fields_::PANIC_TEMP;
};

}  // namespace regs::tmpsns