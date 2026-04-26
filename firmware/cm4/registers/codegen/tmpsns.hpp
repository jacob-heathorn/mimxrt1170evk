#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// Temperature Sensor Memory Map
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Tmpsns {
  // Temperature Sensor Control Register 0
  struct Ctrl0Fields {
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
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      0x00000000u,
      std::uint32_t,
      0x00008020u,
      ftl::mmio::RW,
      Ctrl0Fields::SLOPE_CAL,
      ftl::mmio::Reserved<2, 6>,
      Ctrl0Fields::V_SEL,
      ftl::mmio::Reserved<2, 10>,
      Ctrl0Fields::IBIAS_TRIM,
      ftl::mmio::Reserved<16, 16>> {
    using eV_SEL = Ctrl0Fields::eV_SEL;
    using SLOPE_CAL = Ctrl0Fields::SLOPE_CAL;
    using V_SEL = Ctrl0Fields::V_SEL;
    using IBIAS_TRIM = Ctrl0Fields::IBIAS_TRIM;
  };

  // Temperature Sensor Control Register 0
  struct Ctrl0SetFields {
    // Ramp slope calibration control
    using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Voltage Select
    using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Current bias trim value
    using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Ctrl0SetFields

  struct CTRL0_SET : ftl::mmio::Register<
      0x00000004u,
      std::uint32_t,
      0x00008020u,
      ftl::mmio::RW,
      Ctrl0SetFields::SLOPE_CAL,
      ftl::mmio::Reserved<2, 6>,
      Ctrl0SetFields::V_SEL,
      ftl::mmio::Reserved<2, 10>,
      Ctrl0SetFields::IBIAS_TRIM,
      ftl::mmio::Reserved<16, 16>> {
    using SLOPE_CAL = Ctrl0SetFields::SLOPE_CAL;
    using V_SEL = Ctrl0SetFields::V_SEL;
    using IBIAS_TRIM = Ctrl0SetFields::IBIAS_TRIM;
  };

  // Temperature Sensor Control Register 0
  struct Ctrl0ClrFields {
    // Ramp slope calibration control
    using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Voltage Select
    using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Current bias trim value
    using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl0ClrFields

  struct CTRL0_CLR : ftl::mmio::Register<
      0x00000008u,
      std::uint32_t,
      0x00008020u,
      ftl::mmio::RW,
      Ctrl0ClrFields::SLOPE_CAL,
      ftl::mmio::Reserved<2, 6>,
      Ctrl0ClrFields::V_SEL,
      ftl::mmio::Reserved<2, 10>,
      Ctrl0ClrFields::IBIAS_TRIM,
      ftl::mmio::Reserved<16, 16>> {
    using SLOPE_CAL = Ctrl0ClrFields::SLOPE_CAL;
    using V_SEL = Ctrl0ClrFields::V_SEL;
    using IBIAS_TRIM = Ctrl0ClrFields::IBIAS_TRIM;
  };

  // Temperature Sensor Control Register 0
  struct Ctrl0TogFields {
    // Ramp slope calibration control
    using SLOPE_CAL = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Voltage Select
    using V_SEL = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Current bias trim value
    using IBIAS_TRIM = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Ctrl0TogFields

  struct CTRL0_TOG : ftl::mmio::Register<
      0x0000000Cu,
      std::uint32_t,
      0x00008020u,
      ftl::mmio::RW,
      Ctrl0TogFields::SLOPE_CAL,
      ftl::mmio::Reserved<2, 6>,
      Ctrl0TogFields::V_SEL,
      ftl::mmio::Reserved<2, 10>,
      Ctrl0TogFields::IBIAS_TRIM,
      ftl::mmio::Reserved<16, 16>> {
    using SLOPE_CAL = Ctrl0TogFields::SLOPE_CAL;
    using V_SEL = Ctrl0TogFields::V_SEL;
    using IBIAS_TRIM = Ctrl0TogFields::IBIAS_TRIM;
  };

  // Temperature Sensor Control Register 1
  struct Ctrl1Fields {
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
  };  // struct Ctrl1Fields

  struct CTRL1 : ftl::mmio::Register<
      0x00000010u,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      Ctrl1Fields::FREQ,
      Ctrl1Fields::FINISH_IE,
      Ctrl1Fields::LOW_TEMP_IE,
      Ctrl1Fields::HIGH_TEMP_IE,
      Ctrl1Fields::PANIC_TEMP_IE,
      ftl::mmio::Reserved<2, 20>,
      Ctrl1Fields::START,
      Ctrl1Fields::PWD,
      Ctrl1Fields::RFU,
      Ctrl1Fields::PWD_FULL> {
    using eFREQ = Ctrl1Fields::eFREQ;
    using eFINISH_IE = Ctrl1Fields::eFINISH_IE;
    using eLOW_TEMP_IE = Ctrl1Fields::eLOW_TEMP_IE;
    using eHIGH_TEMP_IE = Ctrl1Fields::eHIGH_TEMP_IE;
    using ePANIC_TEMP_IE = Ctrl1Fields::ePANIC_TEMP_IE;
    using eSTART = Ctrl1Fields::eSTART;
    using ePWD = Ctrl1Fields::ePWD;
    using ePWD_FULL = Ctrl1Fields::ePWD_FULL;
    using FREQ = Ctrl1Fields::FREQ;
    using FINISH_IE = Ctrl1Fields::FINISH_IE;
    using LOW_TEMP_IE = Ctrl1Fields::LOW_TEMP_IE;
    using HIGH_TEMP_IE = Ctrl1Fields::HIGH_TEMP_IE;
    using PANIC_TEMP_IE = Ctrl1Fields::PANIC_TEMP_IE;
    using START = Ctrl1Fields::START;
    using PWD = Ctrl1Fields::PWD;
    using RFU = Ctrl1Fields::RFU;
    using PWD_FULL = Ctrl1Fields::PWD_FULL;
  };

  // Temperature Sensor Control Register 1
  struct Ctrl1SetFields {
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
  };  // struct Ctrl1SetFields

  struct CTRL1_SET : ftl::mmio::Register<
      0x00000014u,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      Ctrl1SetFields::FREQ,
      Ctrl1SetFields::FINISH_IE,
      Ctrl1SetFields::LOW_TEMP_IE,
      Ctrl1SetFields::HIGH_TEMP_IE,
      Ctrl1SetFields::PANIC_TEMP_IE,
      ftl::mmio::Reserved<2, 20>,
      Ctrl1SetFields::START,
      Ctrl1SetFields::PWD,
      Ctrl1SetFields::RFU,
      Ctrl1SetFields::PWD_FULL> {
    using FREQ = Ctrl1SetFields::FREQ;
    using FINISH_IE = Ctrl1SetFields::FINISH_IE;
    using LOW_TEMP_IE = Ctrl1SetFields::LOW_TEMP_IE;
    using HIGH_TEMP_IE = Ctrl1SetFields::HIGH_TEMP_IE;
    using PANIC_TEMP_IE = Ctrl1SetFields::PANIC_TEMP_IE;
    using START = Ctrl1SetFields::START;
    using PWD = Ctrl1SetFields::PWD;
    using RFU = Ctrl1SetFields::RFU;
    using PWD_FULL = Ctrl1SetFields::PWD_FULL;
  };

  // Temperature Sensor Control Register 1
  struct Ctrl1ClrFields {
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
  };  // struct Ctrl1ClrFields

  struct CTRL1_CLR : ftl::mmio::Register<
      0x00000018u,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      Ctrl1ClrFields::FREQ,
      Ctrl1ClrFields::FINISH_IE,
      Ctrl1ClrFields::LOW_TEMP_IE,
      Ctrl1ClrFields::HIGH_TEMP_IE,
      Ctrl1ClrFields::PANIC_TEMP_IE,
      ftl::mmio::Reserved<2, 20>,
      Ctrl1ClrFields::START,
      Ctrl1ClrFields::PWD,
      Ctrl1ClrFields::RFU,
      Ctrl1ClrFields::PWD_FULL> {
    using FREQ = Ctrl1ClrFields::FREQ;
    using FINISH_IE = Ctrl1ClrFields::FINISH_IE;
    using LOW_TEMP_IE = Ctrl1ClrFields::LOW_TEMP_IE;
    using HIGH_TEMP_IE = Ctrl1ClrFields::HIGH_TEMP_IE;
    using PANIC_TEMP_IE = Ctrl1ClrFields::PANIC_TEMP_IE;
    using START = Ctrl1ClrFields::START;
    using PWD = Ctrl1ClrFields::PWD;
    using RFU = Ctrl1ClrFields::RFU;
    using PWD_FULL = Ctrl1ClrFields::PWD_FULL;
  };

  // Temperature Sensor Control Register 1
  struct Ctrl1TogFields {
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
  };  // struct Ctrl1TogFields

  struct CTRL1_TOG : ftl::mmio::Register<
      0x0000001Cu,
      std::uint32_t,
      0x00800000u,
      ftl::mmio::RW,
      Ctrl1TogFields::FREQ,
      Ctrl1TogFields::FINISH_IE,
      Ctrl1TogFields::LOW_TEMP_IE,
      Ctrl1TogFields::HIGH_TEMP_IE,
      Ctrl1TogFields::PANIC_TEMP_IE,
      ftl::mmio::Reserved<2, 20>,
      Ctrl1TogFields::START,
      Ctrl1TogFields::PWD,
      Ctrl1TogFields::RFU,
      Ctrl1TogFields::PWD_FULL> {
    using FREQ = Ctrl1TogFields::FREQ;
    using FINISH_IE = Ctrl1TogFields::FINISH_IE;
    using LOW_TEMP_IE = Ctrl1TogFields::LOW_TEMP_IE;
    using HIGH_TEMP_IE = Ctrl1TogFields::HIGH_TEMP_IE;
    using PANIC_TEMP_IE = Ctrl1TogFields::PANIC_TEMP_IE;
    using START = Ctrl1TogFields::START;
    using PWD = Ctrl1TogFields::PWD;
    using RFU = Ctrl1TogFields::RFU;
    using PWD_FULL = Ctrl1TogFields::PWD_FULL;
  };

  // Temperature Sensor Range Register 0
  struct Range0Fields {
    // Low temperature threshold value
    using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // High temperature threshold value
    using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Range0Fields

  struct RANGE0 : ftl::mmio::Register<
      0x00000020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range0Fields::LOW_TEMP_VAL,
      ftl::mmio::Reserved<4, 12>,
      Range0Fields::HIGH_TEMP_VAL,
      ftl::mmio::Reserved<4, 28>> {
    using LOW_TEMP_VAL = Range0Fields::LOW_TEMP_VAL;
    using HIGH_TEMP_VAL = Range0Fields::HIGH_TEMP_VAL;
  };

  // Temperature Sensor Range Register 0
  struct Range0SetFields {
    // Low temperature threshold value
    using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // High temperature threshold value
    using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Range0SetFields

  struct RANGE0_SET : ftl::mmio::Register<
      0x00000024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range0SetFields::LOW_TEMP_VAL,
      ftl::mmio::Reserved<4, 12>,
      Range0SetFields::HIGH_TEMP_VAL,
      ftl::mmio::Reserved<4, 28>> {
    using LOW_TEMP_VAL = Range0SetFields::LOW_TEMP_VAL;
    using HIGH_TEMP_VAL = Range0SetFields::HIGH_TEMP_VAL;
  };

  // Temperature Sensor Range Register 0
  struct Range0ClrFields {
    // Low temperature threshold value
    using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // High temperature threshold value
    using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Range0ClrFields

  struct RANGE0_CLR : ftl::mmio::Register<
      0x00000028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range0ClrFields::LOW_TEMP_VAL,
      ftl::mmio::Reserved<4, 12>,
      Range0ClrFields::HIGH_TEMP_VAL,
      ftl::mmio::Reserved<4, 28>> {
    using LOW_TEMP_VAL = Range0ClrFields::LOW_TEMP_VAL;
    using HIGH_TEMP_VAL = Range0ClrFields::HIGH_TEMP_VAL;
  };

  // Temperature Sensor Range Register 0
  struct Range0TogFields {
    // Low temperature threshold value
    using LOW_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // High temperature threshold value
    using HIGH_TEMP_VAL = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Range0TogFields

  struct RANGE0_TOG : ftl::mmio::Register<
      0x0000002Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range0TogFields::LOW_TEMP_VAL,
      ftl::mmio::Reserved<4, 12>,
      Range0TogFields::HIGH_TEMP_VAL,
      ftl::mmio::Reserved<4, 28>> {
    using LOW_TEMP_VAL = Range0TogFields::LOW_TEMP_VAL;
    using HIGH_TEMP_VAL = Range0TogFields::HIGH_TEMP_VAL;
  };

  // Temperature Sensor Range Register 1
  struct Range1Fields {
    // Panic temperature threshold value
    using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Range1Fields

  struct RANGE1 : ftl::mmio::Register<
      0x00000030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range1Fields::PANIC_TEMP_VAL,
      ftl::mmio::Reserved<20, 12>> {
    using PANIC_TEMP_VAL = Range1Fields::PANIC_TEMP_VAL;
  };

  // Temperature Sensor Range Register 1
  struct Range1SetFields {
    // Panic temperature threshold value
    using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct Range1SetFields

  struct RANGE1_SET : ftl::mmio::Register<
      0x00000034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range1SetFields::PANIC_TEMP_VAL,
      ftl::mmio::Reserved<20, 12>> {
    using PANIC_TEMP_VAL = Range1SetFields::PANIC_TEMP_VAL;
  };

  // Temperature Sensor Range Register 1
  struct Range1ClrFields {
    // Panic temperature threshold value
    using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Range1ClrFields

  struct RANGE1_CLR : ftl::mmio::Register<
      0x00000038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range1ClrFields::PANIC_TEMP_VAL,
      ftl::mmio::Reserved<20, 12>> {
    using PANIC_TEMP_VAL = Range1ClrFields::PANIC_TEMP_VAL;
  };

  // Temperature Sensor Range Register 1
  struct Range1TogFields {
    // Panic temperature threshold value
    using PANIC_TEMP_VAL = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct Range1TogFields

  struct RANGE1_TOG : ftl::mmio::Register<
      0x0000003Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Range1TogFields::PANIC_TEMP_VAL,
      ftl::mmio::Reserved<20, 12>> {
    using PANIC_TEMP_VAL = Range1TogFields::PANIC_TEMP_VAL;
  };

  // Temperature Sensor Status Register 0
  struct Status0Fields {
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
  };  // struct Status0Fields

  struct STATUS0 : ftl::mmio::Register<
      0x00000050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Status0Fields::TEMP_VAL,
      ftl::mmio::Reserved<4, 12>,
      Status0Fields::FINISH,
      Status0Fields::LOW_TEMP,
      Status0Fields::HIGH_TEMP,
      Status0Fields::PANIC_TEMP,
      ftl::mmio::Reserved<12, 20>> {
    using eFINISH = Status0Fields::eFINISH;
    using eLOW_TEMP = Status0Fields::eLOW_TEMP;
    using eHIGH_TEMP = Status0Fields::eHIGH_TEMP;
    using ePANIC_TEMP = Status0Fields::ePANIC_TEMP;
    using TEMP_VAL = Status0Fields::TEMP_VAL;
    using FINISH = Status0Fields::FINISH;
    using LOW_TEMP = Status0Fields::LOW_TEMP;
    using HIGH_TEMP = Status0Fields::HIGH_TEMP;
    using PANIC_TEMP = Status0Fields::PANIC_TEMP;
  };

};

}  // namespace regs