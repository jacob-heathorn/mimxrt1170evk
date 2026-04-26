#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Iomuxc {
  // SW_MUX_CTL_PAD_GPIO_EMC_B1_00 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB100Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA00 of instance: SEMC
      eALT0_semc_DATA0 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM0_A of instance: FLEXPWM4
      eALT1_flexpwm4_PWMA0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO00 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO0 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D00 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO0 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO00 of instance: GPIO7
      eALT10_gpio7_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB100Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_00 : ftl::mmio::Register<
      0x400E8010u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB100Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB100Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB100Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB100Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB100Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB100Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_01 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB101Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA01 of instance: SEMC
      eALT0_semc_DATA1 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM0_B of instance: FLEXPWM4
      eALT1_flexpwm4_PWMB0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO01 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO1 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D01 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO1 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO01 of instance: GPIO7
      eALT10_gpio7_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB101Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_01 : ftl::mmio::Register<
      0x400E8014u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB101Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB101Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB101Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB101Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB101Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB101Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_02 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB102Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA02 of instance: SEMC
      eALT0_semc_DATA2 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM1_A of instance: FLEXPWM4
      eALT1_flexpwm4_PWMA1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO02 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO2 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D02 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO2 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO02 of instance: GPIO7
      eALT10_gpio7_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB102Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_02 : ftl::mmio::Register<
      0x400E8018u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB102Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB102Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB102Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB102Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB102Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB102Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_03 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB103Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA03 of instance: SEMC
      eALT0_semc_DATA3 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM1_B of instance: FLEXPWM4
      eALT1_flexpwm4_PWMB1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO03 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO3 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D03 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO3 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO03 of instance: GPIO7
      eALT10_gpio7_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB103Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_03 : ftl::mmio::Register<
      0x400E801Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB103Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB103Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB103Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB103Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB103Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB103Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_04 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB104Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA04 of instance: SEMC
      eALT0_semc_DATA4 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM2_A of instance: FLEXPWM4
      eALT1_flexpwm4_PWMA2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO04 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO4 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D04 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO4 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO04 of instance: GPIO7
      eALT10_gpio7_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB104Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_04 : ftl::mmio::Register<
      0x400E8020u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB104Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB104Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB104Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB104Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB104Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB104Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_05 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB105Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA05 of instance: SEMC
      eALT0_semc_DATA5 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM2_B of instance: FLEXPWM4
      eALT1_flexpwm4_PWMB2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO05 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO5 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D05 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO5 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO05 of instance: GPIO7
      eALT10_gpio7_IO5 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB105Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_05 : ftl::mmio::Register<
      0x400E8024u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB105Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB105Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB105Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB105Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB105Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB105Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_06 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB106Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA06 of instance: SEMC
      eALT0_semc_DATA6 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM0_A of instance: FLEXPWM2
      eALT1_flexpwm2_PWMA0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO06 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO6 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D06 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO6 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO06 of instance: GPIO7
      eALT10_gpio7_IO6 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB106Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_06 : ftl::mmio::Register<
      0x400E8028u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB106Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB106Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB106Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB106Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB106Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB106Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_07 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB107Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA07 of instance: SEMC
      eALT0_semc_DATA7 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM0_B of instance: FLEXPWM2
      eALT1_flexpwm2_PWMB0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO07 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO7 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D07 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO7 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO07 of instance: GPIO7
      eALT10_gpio7_IO7 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB107Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_07 : ftl::mmio::Register<
      0x400E802Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB107Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB107Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB107Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB107Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB107Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB107Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_08 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB108Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DM00 of instance: SEMC
      eALT0_semc_DM0 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM1_A of instance: FLEXPWM2
      eALT1_flexpwm2_PWMA1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO08 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO8 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D08 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO8 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO08 of instance: GPIO7
      eALT10_gpio7_IO8 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB108Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_08 : ftl::mmio::Register<
      0x400E8030u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB108Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB108Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB108Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB108Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB108Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB108Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_09 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB109Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR00 of instance: SEMC
      eALT0_semc_ADDR0 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM1_B of instance: FLEXPWM2
      eALT1_flexpwm2_PWMB1 = 1,
      // Select mux mode: ALT2 mux port: GPT5_CAPTURE1 of instance: GPT5
      eALT2_gpt5_CAPTURE1 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO09 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO9 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D09 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO9 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO09 of instance: GPIO7
      eALT10_gpio7_IO9 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB109Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_09 : ftl::mmio::Register<
      0x400E8034u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB109Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB109Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB109Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB109Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB109Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB109Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_10 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB110Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR01 of instance: SEMC
      eALT0_semc_ADDR1 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM2_A of instance: FLEXPWM2
      eALT1_flexpwm2_PWMA2 = 1,
      // Select mux mode: ALT2 mux port: GPT5_CAPTURE2 of instance: GPT5
      eALT2_gpt5_CAPTURE2 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO10 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO10 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D10 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO10 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO10 of instance: GPIO7
      eALT10_gpio7_IO10 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB110Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_10 : ftl::mmio::Register<
      0x400E8038u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB110Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB110Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB110Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB110Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB110Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB110Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_11 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB111Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR02 of instance: SEMC
      eALT0_semc_ADDR2 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM2_B of instance: FLEXPWM2
      eALT1_flexpwm2_PWMB2 = 1,
      // Select mux mode: ALT2 mux port: GPT5_COMPARE1 of instance: GPT5
      eALT2_gpt5_COMPARE1 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO11 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO11 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D11 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO11 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO11 of instance: GPIO7
      eALT10_gpio7_IO11 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB111Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_11 : ftl::mmio::Register<
      0x400E803Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB111Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB111Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB111Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB111Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB111Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB111Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_12 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB112Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR03 of instance: SEMC
      eALT0_semc_ADDR3 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT04 of instance: XBAR1
      eALT1_XBAR1_INOUT4 = 1,
      // Select mux mode: ALT2 mux port: GPT5_COMPARE2 of instance: GPT5
      eALT2_gpt5_COMPARE2 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO12 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO12 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D12 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO12 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO12 of instance: GPIO7
      eALT10_gpio7_IO12 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_12
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB112Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_12 : ftl::mmio::Register<
      0x400E8040u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB112Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB112Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB112Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB112Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB112Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB112Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_13 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB113Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR04 of instance: SEMC
      eALT0_semc_ADDR4 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT05 of instance: XBAR1
      eALT1_XBAR1_INOUT5 = 1,
      // Select mux mode: ALT2 mux port: GPT5_COMPARE3 of instance: GPT5
      eALT2_gpt5_COMPARE3 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO13 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO13 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D13 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO13 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO13 of instance: GPIO7
      eALT10_gpio7_IO13 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_13
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB113Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_13 : ftl::mmio::Register<
      0x400E8044u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB113Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB113Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB113Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB113Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB113Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB113Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_14 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB114Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR05 of instance: SEMC
      eALT0_semc_ADDR5 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT06 of instance: XBAR1
      eALT1_XBAR1_INOUT6 = 1,
      // Select mux mode: ALT2 mux port: GPT5_CLK of instance: GPT5
      eALT2_gpt5_CLK = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO14 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO14 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D14 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO14 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO14 of instance: GPIO7
      eALT10_gpio7_IO14 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_14
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB114Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_14 : ftl::mmio::Register<
      0x400E8048u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB114Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB114Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB114Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB114Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB114Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB114Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_15 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB115Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR06 of instance: SEMC
      eALT0_semc_ADDR6 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT07 of instance: XBAR1
      eALT1_XBAR1_INOUT7 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO15 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO15 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D15 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO15 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO15 of instance: GPIO7
      eALT10_gpio7_IO15 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_15
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB115Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_15 : ftl::mmio::Register<
      0x400E804Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB115Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB115Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB115Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB115Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB115Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB115Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_16 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB116Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR07 of instance: SEMC
      eALT0_semc_ADDR7 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT08 of instance: XBAR1
      eALT1_XBAR1_INOUT8 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO16 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO16 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D16 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO16 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO16 of instance: GPIO7
      eALT10_gpio7_IO16 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_16
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB116Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_16 : ftl::mmio::Register<
      0x400E8050u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB116Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB116Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB116Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB116Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB116Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB116Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_17 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB117Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR08 of instance: SEMC
      eALT0_semc_ADDR8 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM3_A of instance: FLEXPWM4
      eALT1_flexpwm4_PWMA3 = 1,
      // Select mux mode: ALT2 mux port: TMR1_TIMER0 of instance: TMR1
      eALT2_qtimer1_TIMER0 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO17 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO17 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D17 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO17 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO17 of instance: GPIO7
      eALT10_gpio7_IO17 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_17
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB117Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_17 : ftl::mmio::Register<
      0x400E8054u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB117Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB117Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB117Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB117Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB117Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB117Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_18 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB118Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR09 of instance: SEMC
      eALT0_semc_ADDR9 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM4_PWM3_B of instance: FLEXPWM4
      eALT1_flexpwm4_PWMB3 = 1,
      // Select mux mode: ALT2 mux port: TMR2_TIMER0 of instance: TMR2
      eALT2_qtimer2_TIMER0 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO18 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO18 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D18 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO18 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO18 of instance: GPIO7
      eALT10_gpio7_IO18 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_18
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB118Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_18 : ftl::mmio::Register<
      0x400E8058u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB118Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB118Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB118Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB118Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB118Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB118Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_19 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB119Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR11 of instance: SEMC
      eALT0_semc_ADDR11 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM3_A of instance: FLEXPWM2
      eALT1_flexpwm2_PWMA3 = 1,
      // Select mux mode: ALT2 mux port: TMR3_TIMER0 of instance: TMR3
      eALT2_qtimer3_TIMER0 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO19 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO19 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D19 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO19 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO19 of instance: GPIO7
      eALT10_gpio7_IO19 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_19
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB119Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_19 : ftl::mmio::Register<
      0x400E805Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB119Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB119Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB119Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB119Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB119Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB119Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_20 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB120Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR12 of instance: SEMC
      eALT0_semc_ADDR12 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM2_PWM3_B of instance: FLEXPWM2
      eALT1_flexpwm2_PWMB3 = 1,
      // Select mux mode: ALT2 mux port: TMR4_TIMER0 of instance: TMR4
      eALT2_qtimer4_TIMER0 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO20 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO20 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D20 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO20 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO20 of instance: GPIO7
      eALT10_gpio7_IO20 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_20
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB120Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_20 : ftl::mmio::Register<
      0x400E8060u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB120Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB120Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB120Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB120Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB120Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB120Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_21 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB121Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_BA0 of instance: SEMC
      eALT0_semc_BA0 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM3_A of instance: FLEXPWM3
      eALT1_flexpwm3_PWMA3 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO21 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO21 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D21 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO21 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO21 of instance: GPIO7
      eALT10_gpio7_IO21 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_21
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB121Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_21 : ftl::mmio::Register<
      0x400E8064u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB121Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB121Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB121Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB121Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB121Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB121Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_22 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB122Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_BA1 of instance: SEMC
      eALT0_semc_BA1 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM3_B of instance: FLEXPWM3
      eALT1_flexpwm3_PWMB3 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO22 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO22 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D22 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO22 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO22 of instance: GPIO7
      eALT10_gpio7_IO22 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_22
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB122Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_22 : ftl::mmio::Register<
      0x400E8068u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB122Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB122Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB122Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB122Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB122Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB122Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_23 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB123Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_ADDR10 of instance: SEMC
      eALT0_semc_ADDR10 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM0_A of instance: FLEXPWM1
      eALT1_flexpwm1_PWMA0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO23 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO23 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D23 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO23 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO23 of instance: GPIO7
      eALT10_gpio7_IO23 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_23
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB123Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_23 : ftl::mmio::Register<
      0x400E806Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB123Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB123Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB123Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB123Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB123Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB123Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_24 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB124Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CAS of instance: SEMC
      eALT0_semc_CAS = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM0_B of instance: FLEXPWM1
      eALT1_flexpwm1_PWMB0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO24 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO24 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D24 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO24 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO24 of instance: GPIO7
      eALT10_gpio7_IO24 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_24
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB124Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_24 : ftl::mmio::Register<
      0x400E8070u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB124Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB124Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB124Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB124Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB124Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB124Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_25 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB125Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_RAS of instance: SEMC
      eALT0_semc_RAS = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM1_A of instance: FLEXPWM1
      eALT1_flexpwm1_PWMA1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO25 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO25 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D25 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO25 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO25 of instance: GPIO7
      eALT10_gpio7_IO25 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_25
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB125Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_25 : ftl::mmio::Register<
      0x400E8074u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB125Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB125Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB125Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB125Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB125Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB125Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_26 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB126Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CLK of instance: SEMC
      eALT0_semc_CLK = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM1_B of instance: FLEXPWM1
      eALT1_flexpwm1_PWMB1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO26 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO26 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D26 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO26 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO26 of instance: GPIO7
      eALT10_gpio7_IO26 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_26
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB126Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_26 : ftl::mmio::Register<
      0x400E8078u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB126Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB126Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB126Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB126Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB126Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB126Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_27 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB127Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CKE of instance: SEMC
      eALT0_semc_CKE = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM2_A of instance: FLEXPWM1
      eALT1_flexpwm1_PWMA2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO27 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO27 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D27 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO27 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO27 of instance: GPIO7
      eALT10_gpio7_IO27 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_27
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB127Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_27 : ftl::mmio::Register<
      0x400E807Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB127Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB127Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB127Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB127Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB127Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB127Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_28 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB128Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_WE of instance: SEMC
      eALT0_semc_WE = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM2_B of instance: FLEXPWM1
      eALT1_flexpwm1_PWMB2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO28 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO28 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D28 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO28 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO28 of instance: GPIO7
      eALT10_gpio7_IO28 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_28
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB128Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_28 : ftl::mmio::Register<
      0x400E8080u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB128Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB128Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB128Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB128Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB128Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB128Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_29 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB129Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CS0 of instance: SEMC
      eALT0_semc_CS0 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM0_A of instance: FLEXPWM3
      eALT1_flexpwm3_PWMA0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO29 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO29 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D29 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO29 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO29 of instance: GPIO7
      eALT10_gpio7_IO29 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_29
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB129Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_29 : ftl::mmio::Register<
      0x400E8084u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB129Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB129Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB129Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB129Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB129Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB129Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_30 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB130Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA08 of instance: SEMC
      eALT0_semc_DATA8 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM0_B of instance: FLEXPWM3
      eALT1_flexpwm3_PWMB0 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO30 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO30 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D30 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO30 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO30 of instance: GPIO7
      eALT10_gpio7_IO30 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_30
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB130Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_30 : ftl::mmio::Register<
      0x400E8088u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB130Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB130Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB130Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB130Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB130Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB130Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_31 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB131Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA09 of instance: SEMC
      eALT0_semc_DATA9 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM1_A of instance: FLEXPWM3
      eALT1_flexpwm3_PWMA1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX1_IO31 of instance: GPIO_MUX1
      eALT5_gpio_mux1_IO31 = 5,
      // Select mux mode: ALT8 mux port: FLEXIO1_D31 of instance: FLEXIO1
      eALT8_flexio1_FLEXIO31 = 8,
      // Select mux mode: ALT10 mux port: GPIO7_IO31 of instance: GPIO7
      eALT10_gpio7_IO31 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_31
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB131Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_31 : ftl::mmio::Register<
      0x400E808Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB131Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB131Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB131Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB131Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB131Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB131Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_32 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB132Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA10 of instance: SEMC
      eALT0_semc_DATA10 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM1_B of instance: FLEXPWM3
      eALT1_flexpwm3_PWMB1 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO00 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO0 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO00 of instance: GPIO8
      eALT10_gpio8_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_32
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB132Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_32 : ftl::mmio::Register<
      0x400E8090u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB132Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB132Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB132Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB132Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB132Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB132Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_33 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB133Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA11 of instance: SEMC
      eALT0_semc_DATA11 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM2_A of instance: FLEXPWM3
      eALT1_flexpwm3_PWMA2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO01 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO1 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO01 of instance: GPIO8
      eALT10_gpio8_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_33
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB133Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_33 : ftl::mmio::Register<
      0x400E8094u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB133Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB133Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB133Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB133Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB133Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB133Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_34 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB134Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA12 of instance: SEMC
      eALT0_semc_DATA12 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM3_PWM2_B of instance: FLEXPWM3
      eALT1_flexpwm3_PWMB2 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO02 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO2 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO02 of instance: GPIO8
      eALT10_gpio8_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_34
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB134Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_34 : ftl::mmio::Register<
      0x400E8098u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB134Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB134Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB134Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB134Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB134Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB134Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_35 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB135Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA13 of instance: SEMC
      eALT0_semc_DATA13 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT09 of instance: XBAR1
      eALT1_XBAR1_INOUT9 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO03 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO3 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO03 of instance: GPIO8
      eALT10_gpio8_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_35
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB135Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_35 : ftl::mmio::Register<
      0x400E809Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB135Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB135Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB135Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB135Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB135Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB135Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_36 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB136Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA14 of instance: SEMC
      eALT0_semc_DATA14 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT10 of instance: XBAR1
      eALT1_XBAR1_INOUT10 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO04 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO4 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO04 of instance: GPIO8
      eALT10_gpio8_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_36
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB136Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_36 : ftl::mmio::Register<
      0x400E80A0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB136Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB136Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB136Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB136Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB136Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB136Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_37 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB137Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA15 of instance: SEMC
      eALT0_semc_DATA15 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT11 of instance: XBAR1
      eALT1_XBAR1_INOUT11 = 1,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO05 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO5 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO05 of instance: GPIO8
      eALT10_gpio8_IO5 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_37
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB137Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_37 : ftl::mmio::Register<
      0x400E80A4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB137Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB137Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB137Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB137Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB137Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB137Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_38 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB138Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DM01 of instance: SEMC
      eALT0_semc_DM1 = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM3_A of instance: FLEXPWM1
      eALT1_flexpwm1_PWMA3 = 1,
      // Select mux mode: ALT2 mux port: TMR1_TIMER1 of instance: TMR1
      eALT2_qtimer1_TIMER1 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO06 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO6 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO06 of instance: GPIO8
      eALT10_gpio8_IO6 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_38
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB138Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_38 : ftl::mmio::Register<
      0x400E80A8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB138Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB138Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB138Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB138Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB138Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB138Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_39 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB139Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DQS of instance: SEMC
      eALT0_semc_DQS = 0,
      // Select mux mode: ALT1 mux port: FLEXPWM1_PWM3_B of instance: FLEXPWM1
      eALT1_flexpwm1_PWMB3 = 1,
      // Select mux mode: ALT2 mux port: TMR2_TIMER1 of instance: TMR2
      eALT2_qtimer2_TIMER1 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO07 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO7 = 5,
      // Select mux mode: ALT10 mux port: GPIO8_IO07 of instance: GPIO8
      eALT10_gpio8_IO7 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_39
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB139Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_39 : ftl::mmio::Register<
      0x400E80ACu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB139Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB139Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB139Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB139Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB139Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB139Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_40 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB140Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_RDY of instance: SEMC
      eALT0_semc_RDY = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT12 of instance: XBAR1
      eALT1_XBAR1_INOUT12 = 1,
      // Select mux mode: ALT2 mux port: MQS_RIGHT of instance: MQS
      eALT2_mqs_RIGHT = 2,
      // Select mux mode: ALT3 mux port: LPUART6_TXD of instance: LPUART6
      eALT3_lpuart6_TX = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO08 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO8 = 5,
      // Select mux mode: ALT7 mux port: ENET_1G_MDC of instance: ENET_1G
      eALT7_enet_1g_MDC = 7,
      // Select mux mode: ALT9 mux port: CCM_CLKO1 of instance: CCM
      eALT9_CCM_CLKO1 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO08 of instance: GPIO8
      eALT10_gpio8_IO8 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_40
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB140Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_40 : ftl::mmio::Register<
      0x400E80B0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB140Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB140Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB140Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB140Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB140Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB140Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B1_41 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB141Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CSX00 of instance: SEMC
      eALT0_semc_CSX0 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT13 of instance: XBAR1
      eALT1_XBAR1_INOUT13 = 1,
      // Select mux mode: ALT2 mux port: MQS_LEFT of instance: MQS
      eALT2_mqs_LEFT = 2,
      // Select mux mode: ALT3 mux port: LPUART6_RXD of instance: LPUART6
      eALT3_lpuart6_RX = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA07 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA7 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO09 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO9 = 5,
      // Select mux mode: ALT7 mux port: ENET_1G_MDIO of instance: ENET_1G
      eALT7_enet_1g_MDIO = 7,
      // Select mux mode: ALT9 mux port: CCM_CLKO2 of instance: CCM
      eALT9_CCM_CLKO2 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO09 of instance: GPIO8
      eALT10_gpio8_IO9 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B1_41
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB141Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B1_41 : ftl::mmio::Register<
      0x400E80B4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB141Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB141Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB141Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB141Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB141Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB141Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_00 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB200Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA16 of instance: SEMC
      eALT0_semc_DATA16 = 0,
      // Select mux mode: ALT1 mux port: CCM_ENET_REF_CLK_25M of instance: CCM
      eALT1_CCM_ENET_REF_CLK_25M = 1,
      // Select mux mode: ALT2 mux port: TMR3_TIMER1 of instance: TMR3
      eALT2_qtimer3_TIMER1 = 2,
      // Select mux mode: ALT3 mux port: LPUART6_CTS_B of instance: LPUART6
      eALT3_lpuart6_CTS_B = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA06 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA6 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO10 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO10 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT20 of instance: XBAR1
      eALT6_XBAR1_INOUT20 = 6,
      // Select mux mode: ALT7 mux port: ENET_QOS_1588_EVENT1_OUT of instance: ENET_QOS
      eALT7_enet_qos_1588_EVENT1_OUT = 7,
      // Select mux mode: ALT8 mux port: LPSPI1_SCK of instance: LPSPI1
      eALT8_lpspi1_SCK = 8,
      // Select mux mode: ALT9 mux port: LPI2C2_SCL of instance: LPI2C2
      eALT9_lpi2c2_SCL = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO10 of instance: GPIO8
      eALT10_gpio8_IO10 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM0_A of instance: FLEXPWM3
      eALT11_flexpwm3_PWMA0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB200Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_00 : ftl::mmio::Register<
      0x400E80B8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB200Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB200Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB200Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB200Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB200Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB200Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_01 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB201Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA17 of instance: SEMC
      eALT0_semc_DATA17 = 0,
      // Select mux mode: ALT1 mux port: USDHC2_CD_B of instance: USDHC2
      eALT1_usdhc2_CD_B = 1,
      // Select mux mode: ALT2 mux port: TMR4_TIMER1 of instance: TMR4
      eALT2_qtimer4_TIMER1 = 2,
      // Select mux mode: ALT3 mux port: LPUART6_RTS_B of instance: LPUART6
      eALT3_lpuart6_RTS_B = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA05 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA5 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO11 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO11 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT21 of instance: XBAR1
      eALT6_XBAR1_INOUT21 = 6,
      // Select mux mode: ALT7 mux port: ENET_QOS_1588_EVENT1_IN of instance: ENET_QOS
      eALT7_enet_qos_1588_EVENT1_IN = 7,
      // Select mux mode: ALT8 mux port: LPSPI1_PCS0 of instance: LPSPI1
      eALT8_lpspi1_PCS0 = 8,
      // Select mux mode: ALT9 mux port: LPI2C2_SDA of instance: LPI2C2
      eALT9_lpi2c2_SDA = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO11 of instance: GPIO8
      eALT10_gpio8_IO11 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM0_B of instance: FLEXPWM3
      eALT11_flexpwm3_PWMB0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB201Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_01 : ftl::mmio::Register<
      0x400E80BCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB201Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB201Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB201Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB201Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB201Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB201Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_02 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB202Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA18 of instance: SEMC
      eALT0_semc_DATA18 = 0,
      // Select mux mode: ALT1 mux port: USDHC2_WP of instance: USDHC2
      eALT1_usdhc2_WP = 1,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA23 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA23 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA04 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA4 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO12 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO12 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT22 of instance: XBAR1
      eALT6_XBAR1_INOUT22 = 6,
      // Select mux mode: ALT7 mux port: ENET_QOS_1588_EVENT1_AUX_IN of instance: ENET_QOS
      eALT7_enet_qos_1588_EVENT1_AUX_IN = 7,
      // Select mux mode: ALT8 mux port: LPSPI1_SOUT of instance: LPSPI1
      eALT8_lpspi1_SDO = 8,
      // Select mux mode: ALT10 mux port: GPIO8_IO12 of instance: GPIO8
      eALT10_gpio8_IO12 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM1_A of instance: FLEXPWM3
      eALT11_flexpwm3_PWMA1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB202Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_02 : ftl::mmio::Register<
      0x400E80C0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB202Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB202Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB202Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB202Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB202Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB202Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_03 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB203Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA19 of instance: SEMC
      eALT0_semc_DATA19 = 0,
      // Select mux mode: ALT1 mux port: USDHC2_VSELECT of instance: USDHC2
      eALT1_usdhc2_VSELECT = 1,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA22 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA22 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA03 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO13 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO13 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT23 of instance: XBAR1
      eALT6_XBAR1_INOUT23 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_TX_DATA03 of instance: ENET_1G
      eALT7_ENET_1G_TX_DATA3 = 7,
      // Select mux mode: ALT8 mux port: LPSPI1_SIN of instance: LPSPI1
      eALT8_lpspi1_SDI = 8,
      // Select mux mode: ALT10 mux port: GPIO8_IO13 of instance: GPIO8
      eALT10_gpio8_IO13 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM1_B of instance: FLEXPWM3
      eALT11_flexpwm3_PWMB1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB203Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_03 : ftl::mmio::Register<
      0x400E80C4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB203Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB203Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB203Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB203Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB203Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB203Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_04 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB204Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA20 of instance: SEMC
      eALT0_semc_DATA20 = 0,
      // Select mux mode: ALT1 mux port: USDHC2_RESET_B of instance: USDHC2
      eALT1_usdhc2_RESET_B = 1,
      // Select mux mode: ALT2 mux port: SAI2_MCLK of instance: SAI2
      eALT2_sai2_MCLK = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA21 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA21 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA02 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO14 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO14 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT24 of instance: XBAR1
      eALT6_XBAR1_INOUT24 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_TX_DATA02 of instance: ENET_1G
      eALT7_ENET_1G_TX_DATA2 = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_SCK of instance: LPSPI3
      eALT8_lpspi3_SCK = 8,
      // Select mux mode: ALT10 mux port: GPIO8_IO14 of instance: GPIO8
      eALT10_gpio8_IO14 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM2_A of instance: FLEXPWM3
      eALT11_flexpwm3_PWMA2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB204Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_04 : ftl::mmio::Register<
      0x400E80C8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB204Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB204Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB204Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB204Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB204Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB204Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_05 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB205Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA21 of instance: SEMC
      eALT0_semc_DATA21 = 0,
      // Select mux mode: ALT1 mux port: GPT3_CLK of instance: GPT3
      eALT1_gpt3_CLK = 1,
      // Select mux mode: ALT2 mux port: SAI2_RX_SYNC of instance: SAI2
      eALT2_sai2_RX_SYNC = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA20 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA20 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA01 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO15 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO15 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT25 of instance: XBAR1
      eALT6_XBAR1_INOUT25 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_RX_CLK of instance: ENET_1G
      eALT7_enet_1g_RX_CLK = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_PCS0 of instance: LPSPI3
      eALT8_lpspi3_PCS0 = 8,
      // Select mux mode: ALT9 mux port: PIT1_TRIGGER0 of instance: PIT1
      eALT9_pit1_TRIGGER0 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO15 of instance: GPIO8
      eALT10_gpio8_IO15 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM2_B of instance: FLEXPWM3
      eALT11_flexpwm3_PWMB2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB205Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_05 : ftl::mmio::Register<
      0x400E80CCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB205Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB205Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB205Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB205Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB205Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB205Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_06 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB206Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA22 of instance: SEMC
      eALT0_semc_DATA22 = 0,
      // Select mux mode: ALT1 mux port: GPT3_CAPTURE1 of instance: GPT3
      eALT1_gpt3_CAPTURE1 = 1,
      // Select mux mode: ALT2 mux port: SAI2_RX_BCLK of instance: SAI2
      eALT2_sai2_RX_BCLK = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA19 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA19 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DATA00 of instance: FLEXSPI2
      eALT4_flexspi2_B_DATA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO16 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO16 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT26 of instance: XBAR1
      eALT6_XBAR1_INOUT26 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_TX_ER of instance: ENET_1G
      eALT7_enet_1g_TX_ER = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_SOUT of instance: LPSPI3
      eALT8_lpspi3_SDO = 8,
      // Select mux mode: ALT9 mux port: PIT1_TRIGGER1 of instance: PIT1
      eALT9_pit1_TRIGGER1 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO16 of instance: GPIO8
      eALT10_gpio8_IO16 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM3_A of instance: FLEXPWM3
      eALT11_flexpwm3_PWMA3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB206Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_06 : ftl::mmio::Register<
      0x400E80D0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB206Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB206Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB206Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB206Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB206Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB206Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_07 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB207Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA23 of instance: SEMC
      eALT0_semc_DATA23 = 0,
      // Select mux mode: ALT1 mux port: GPT3_CAPTURE2 of instance: GPT3
      eALT1_gpt3_CAPTURE2 = 1,
      // Select mux mode: ALT2 mux port: SAI2_RX_DATA of instance: SAI2
      eALT2_sai2_RX_DATA = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA18 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA18 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_DQS of instance: FLEXSPI2
      eALT4_flexspi2_B_DQS = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO17 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO17 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT27 of instance: XBAR1
      eALT6_XBAR1_INOUT27 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_RX_DATA03 of instance: ENET_1G
      eALT7_ENET_1G_RX_DATA3 = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_SIN of instance: LPSPI3
      eALT8_lpspi3_SDI = 8,
      // Select mux mode: ALT9 mux port: PIT1_TRIGGER2 of instance: PIT1
      eALT9_pit1_TRIGGER2 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO17 of instance: GPIO8
      eALT10_gpio8_IO17 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM3_B of instance: FLEXPWM3
      eALT11_flexpwm3_PWMB3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB207Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_07 : ftl::mmio::Register<
      0x400E80D4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB207Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB207Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB207Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB207Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB207Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB207Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_08 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB208Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DM02 of instance: SEMC
      eALT0_semc_DM2 = 0,
      // Select mux mode: ALT1 mux port: GPT3_COMPARE1 of instance: GPT3
      eALT1_gpt3_COMPARE1 = 1,
      // Select mux mode: ALT2 mux port: SAI2_TX_DATA of instance: SAI2
      eALT2_sai2_TX_DATA = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA17 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA17 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_SS0_B of instance: FLEXSPI2
      eALT4_flexspi2_B_SS0_B = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO18 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO18 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT28 of instance: XBAR1
      eALT6_XBAR1_INOUT28 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_RX_DATA02 of instance: ENET_1G
      eALT7_ENET_1G_RX_DATA2 = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_PCS1 of instance: LPSPI3
      eALT8_lpspi3_PCS1 = 8,
      // Select mux mode: ALT9 mux port: PIT1_TRIGGER3 of instance: PIT1
      eALT9_pit1_TRIGGER3 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO18 of instance: GPIO8
      eALT10_gpio8_IO18 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB208Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_08 : ftl::mmio::Register<
      0x400E80D8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB208Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB208Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB208Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB208Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB208Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB208Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_09 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB209Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA24 of instance: SEMC
      eALT0_semc_DATA24 = 0,
      // Select mux mode: ALT1 mux port: GPT3_COMPARE2 of instance: GPT3
      eALT1_gpt3_COMPARE2 = 1,
      // Select mux mode: ALT2 mux port: SAI2_TX_BCLK of instance: SAI2
      eALT2_sai2_TX_BCLK = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA16 of instance: VIDEO_MUX
      eALT3_video_mux_CSI_DATA16 = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_B_SCLK of instance: FLEXSPI2
      eALT4_flexspi2_B_SCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO19 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO19 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT29 of instance: XBAR1
      eALT6_XBAR1_INOUT29 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_CRS of instance: ENET_1G
      eALT7_enet_1g_CRS = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_PCS2 of instance: LPSPI3
      eALT8_lpspi3_PCS2 = 8,
      // Select mux mode: ALT9 mux port: TMR1_TIMER0 of instance: TMR1
      eALT9_qtimer1_TIMER0 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO19 of instance: GPIO8
      eALT10_gpio8_IO19 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB209Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_09 : ftl::mmio::Register<
      0x400E80DCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB209Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB209Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB209Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB209Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB209Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB209Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_10 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB210Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA25 of instance: SEMC
      eALT0_semc_DATA25 = 0,
      // Select mux mode: ALT1 mux port: GPT3_COMPARE3 of instance: GPT3
      eALT1_gpt3_COMPARE3 = 1,
      // Select mux mode: ALT2 mux port: SAI2_TX_SYNC of instance: SAI2
      eALT2_sai2_TX_SYNC = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_FIELD of instance: VIDEO_MUX
      eALT3_video_mux_CSI_FIELD = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_SCLK of instance: FLEXSPI2
      eALT4_flexspi2_A_SCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO20 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO20 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT30 of instance: XBAR1
      eALT6_XBAR1_INOUT30 = 6,
      // Select mux mode: ALT7 mux port: ENET_1G_COL of instance: ENET_1G
      eALT7_enet_1g_COL = 7,
      // Select mux mode: ALT8 mux port: LPSPI3_PCS3 of instance: LPSPI3
      eALT8_lpspi3_PCS3 = 8,
      // Select mux mode: ALT9 mux port: TMR1_TIMER1 of instance: TMR1
      eALT9_qtimer1_TIMER1 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO20 of instance: GPIO8
      eALT10_gpio8_IO20 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB210Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_10 : ftl::mmio::Register<
      0x400E80E0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB210Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB210Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB210Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB210Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB210Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB210Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_11 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB211Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA26 of instance: SEMC
      eALT0_semc_DATA26 = 0,
      // Select mux mode: ALT1 mux port: SPDIF_IN of instance: SPDIF
      eALT1_spdif_IN = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA00 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA0 = 2,
      // Select mux mode: ALT3 mux port: SAI3_RX_SYNC of instance: SAI3
      eALT3_sai3_RX_SYNC = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_SS0_B of instance: FLEXSPI2
      eALT4_flexspi2_A_SS0_B = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO21 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO21 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT31 of instance: XBAR1
      eALT6_XBAR1_INOUT31 = 6,
      // Select mux mode: ALT8 mux port: EMVSIM1_IO of instance: EMVSIM1
      eALT8_EMVSIM1_TRXD = 8,
      // Select mux mode: ALT9 mux port: TMR1_TIMER2 of instance: TMR1
      eALT9_qtimer1_TIMER2 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO21 of instance: GPIO8
      eALT10_gpio8_IO21 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB211Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_11 : ftl::mmio::Register<
      0x400E80E4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB211Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB211Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB211Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB211Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB211Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB211Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_12 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB212Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA27 of instance: SEMC
      eALT0_semc_DATA27 = 0,
      // Select mux mode: ALT1 mux port: SPDIF_OUT of instance: SPDIF
      eALT1_spdif_OUT = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA01 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA1 = 2,
      // Select mux mode: ALT3 mux port: SAI3_RX_BCLK of instance: SAI3
      eALT3_sai3_RX_BCLK = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DQS of instance: FLEXSPI2
      eALT4_flexspi2_A_DQS = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO22 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO22 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT32 of instance: XBAR1
      eALT6_XBAR1_INOUT32 = 6,
      // Select mux mode: ALT8 mux port: EMVSIM1_CLK of instance: EMVSIM1
      eALT8_EMVSIM1_CLK = 8,
      // Select mux mode: ALT9 mux port: TMR1_TIMER3 of instance: TMR1
      eALT9_qtimer1_TIMER3 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO22 of instance: GPIO8
      eALT10_gpio8_IO22 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_12
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB212Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_12 : ftl::mmio::Register<
      0x400E80E8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB212Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB212Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB212Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB212Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB212Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB212Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_13 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB213Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA28 of instance: SEMC
      eALT0_semc_DATA28 = 0,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_EN of instance: ENET_1G
      eALT2_enet_1g_TX_EN = 2,
      // Select mux mode: ALT3 mux port: SAI3_RX_DATA of instance: SAI3
      eALT3_sai3_RX_DATA = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA00 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO23 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO23 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT33 of instance: XBAR1
      eALT6_XBAR1_INOUT33 = 6,
      // Select mux mode: ALT8 mux port: EMVSIM1_RST of instance: EMVSIM1
      eALT8_EMVSIM1_RST_B = 8,
      // Select mux mode: ALT9 mux port: TMR2_TIMER0 of instance: TMR2
      eALT9_qtimer2_TIMER0 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO23 of instance: GPIO8
      eALT10_gpio8_IO23 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_13
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB213Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_13 : ftl::mmio::Register<
      0x400E80ECu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB213Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB213Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB213Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB213Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB213Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB213Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_14 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB214Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA29 of instance: SEMC
      eALT0_semc_DATA29 = 0,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_CLK_IO of instance: ENET_1G
      eALT2_enet_1g_TX_CLK_IO = 2,
      // Select mux mode: ALT3 mux port: SAI3_TX_DATA of instance: SAI3
      eALT3_sai3_TX_DATA = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA01 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO24 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO24 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT34 of instance: XBAR1
      eALT6_XBAR1_INOUT34 = 6,
      // Select mux mode: ALT7 mux port: SFA_ipp_do_atx_clk_under_test of instance: sfa
      eALT7_sfa_ipp_do_atx_clk_under_test = 7,
      // Select mux mode: ALT8 mux port: EMVSIM1_SVEN of instance: EMVSIM1
      eALT8_EMVSIM1_SVEN = 8,
      // Select mux mode: ALT9 mux port: TMR2_TIMER1 of instance: TMR2
      eALT9_qtimer2_TIMER1 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO24 of instance: GPIO8
      eALT10_gpio8_IO24 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_14
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB214Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_14 : ftl::mmio::Register<
      0x400E80F0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB214Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB214Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB214Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB214Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB214Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB214Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_15 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB215Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA30 of instance: SEMC
      eALT0_semc_DATA30 = 0,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA00 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA0 = 2,
      // Select mux mode: ALT3 mux port: SAI3_TX_BCLK of instance: SAI3
      eALT3_sai3_TX_BCLK = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA02 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO25 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO25 = 5,
      // Select mux mode: ALT6 mux port: XBAR1_INOUT35 of instance: XBAR1
      eALT6_XBAR1_INOUT35 = 6,
      // Select mux mode: ALT8 mux port: EMVSIM1_PD of instance: EMVSIM1
      eALT8_EMVSIM1_PD = 8,
      // Select mux mode: ALT9 mux port: TMR2_TIMER2 of instance: TMR2
      eALT9_qtimer2_TIMER2 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO25 of instance: GPIO8
      eALT10_gpio8_IO25 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_15
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB215Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_15 : ftl::mmio::Register<
      0x400E80F4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB215Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB215Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB215Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB215Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB215Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB215Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_16 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB216Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DATA31 of instance: SEMC
      eALT0_semc_DATA31 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT14 of instance: XBAR1
      eALT1_XBAR1_INOUT14 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA01 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA1 = 2,
      // Select mux mode: ALT3 mux port: SAI3_TX_SYNC of instance: SAI3
      eALT3_sai3_TX_SYNC = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA03 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO26 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO26 = 5,
      // Select mux mode: ALT8 mux port: EMVSIM1_POWER_FAIL of instance: EMVSIM1
      eALT8_EMVSIM1_POWER_FAIL = 8,
      // Select mux mode: ALT9 mux port: TMR2_TIMER3 of instance: TMR2
      eALT9_qtimer2_TIMER3 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO26 of instance: GPIO8
      eALT10_gpio8_IO26 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_16
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB216Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_16 : ftl::mmio::Register<
      0x400E80F8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB216Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB216Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB216Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB216Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB216Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB216Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_17 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB217Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DM03 of instance: SEMC
      eALT0_semc_DM3 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT15 of instance: XBAR1
      eALT1_XBAR1_INOUT15 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_EN of instance: ENET_1G
      eALT2_enet_1g_RX_EN = 2,
      // Select mux mode: ALT3 mux port: SAI3_MCLK of instance: SAI3
      eALT3_sai3_MCLK = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA04 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA4 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO27 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO27 = 5,
      // Select mux mode: ALT8 mux port: WDOG1_ANY of instance: WDOG1
      eALT8_WDOG1_ANY = 8,
      // Select mux mode: ALT9 mux port: TMR3_TIMER0 of instance: TMR3
      eALT9_qtimer3_TIMER0 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO27 of instance: GPIO8
      eALT10_gpio8_IO27 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_17
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB217Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_17 : ftl::mmio::Register<
      0x400E80FCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB217Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB217Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB217Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB217Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB217Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB217Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_18 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB218Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_DQS4 of instance: SEMC
      eALT0_semc_DQS4 = 0,
      // Select mux mode: ALT1 mux port: XBAR1_INOUT16 of instance: XBAR1
      eALT1_XBAR1_INOUT16 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_ER of instance: ENET_1G
      eALT2_enet_1g_RX_ER = 2,
      // Select mux mode: ALT3 mux port: EWM_OUT_B of instance: EWM
      eALT3_EWM_OUT_B = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA05 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA5 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO28 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO28 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI1_A_DQS of instance: FLEXSPI1
      eALT6_flexspi1_A_DQS = 6,
      // Select mux mode: ALT8 mux port: WDOG1_B of instance: WDOG1
      eALT8_WDOG1_B = 8,
      // Select mux mode: ALT9 mux port: TMR3_TIMER1 of instance: TMR3
      eALT9_qtimer3_TIMER1 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO28 of instance: GPIO8
      eALT10_gpio8_IO28 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_18
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB218Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_18 : ftl::mmio::Register<
      0x400E8100u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB218Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB218Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB218Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB218Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB218Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB218Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_19 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB219Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CLKX00 of instance: SEMC
      eALT0_semc_CLKX0 = 0,
      // Select mux mode: ALT1 mux port: ENET_MDC of instance: ENET
      eALT1_enet_MDC = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_MDC of instance: ENET_1G
      eALT2_enet_1g_MDC = 2,
      // Select mux mode: ALT3 mux port: ENET_1G_REF_CLK of instance: ENET_1G
      eALT3_enet_1g_REF_CLK = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA06 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA6 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO29 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO29 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_MDC of instance: ENET_QOS
      eALT8_enet_qos_MDC = 8,
      // Select mux mode: ALT9 mux port: TMR3_TIMER2 of instance: TMR3
      eALT9_qtimer3_TIMER2 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO29 of instance: GPIO8
      eALT10_gpio8_IO29 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_19
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB219Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_19 : ftl::mmio::Register<
      0x400E8104u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB219Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB219Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB219Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB219Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB219Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB219Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_EMC_B2_20 SW MUX Control Register
  struct SwMuxCtlPadGpioEmcB220Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SEMC_CLKX01 of instance: SEMC
      eALT0_semc_CLKX1 = 0,
      // Select mux mode: ALT1 mux port: ENET_MDIO of instance: ENET
      eALT1_enet_MDIO = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_MDIO of instance: ENET_1G
      eALT2_enet_1g_MDIO = 2,
      // Select mux mode: ALT3 mux port: ENET_QOS_REF_CLK of instance: ENET_QOS
      eALT3_CCM_enet_qos_clock_generate_REF_CLK = 3,
      // Select mux mode: ALT4 mux port: FLEXSPI2_A_DATA07 of instance: FLEXSPI2
      eALT4_flexspi2_A_DATA7 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO30 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO30 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_MDIO of instance: ENET_QOS
      eALT8_enet_qos_MDIO = 8,
      // Select mux mode: ALT9 mux port: TMR3_TIMER3 of instance: TMR3
      eALT9_qtimer3_TIMER3 = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO30 of instance: GPIO8
      eALT10_gpio8_IO30 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_EMC_B2_20
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioEmcB220Fields

  struct SW_MUX_CTL_PAD_GPIO_EMC_B2_20 : ftl::mmio::Register<
      0x400E8108u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioEmcB220Fields::MUX_MODE,
      SwMuxCtlPadGpioEmcB220Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioEmcB220Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioEmcB220Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioEmcB220Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioEmcB220Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_00 SW MUX Control Register
  struct SwMuxCtlPadGpioAd00Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_IO of instance: EMVSIM1
      eALT0_EMVSIM1_TRXD = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN2_TX of instance: FLEXCAN2
      eALT1_can2_TX = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT1_IN of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT1_IN = 2,
      // Select mux mode: ALT3 mux port: GPT2_CAPTURE1 of instance: GPT2
      eALT3_gpt2_CAPTURE1 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM0_A of instance: FLEXPWM1
      eALT4_flexpwm1_PWMA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX2_IO31 of instance: GPIO_MUX2
      eALT5_gpio_mux2_IO31 = 5,
      // Select mux mode: ALT6 mux port: LPUART7_TXD of instance: LPUART7
      eALT6_lpuart7_TX = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D00 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO0 = 8,
      // Select mux mode: ALT9 mux port: FLEXSPI2_B_SS1_B of instance: FLEXSPI2
      eALT9_flexspi2_B_SS1_B = 9,
      // Select mux mode: ALT10 mux port: GPIO8_IO31 of instance: GPIO8
      eALT10_gpio8_IO31 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd00Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_00 : ftl::mmio::Register<
      0x400E810Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd00Fields::MUX_MODE,
      SwMuxCtlPadGpioAd00Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd00Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd00Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd00Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd00Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_01 SW MUX Control Register
  struct SwMuxCtlPadGpioAd01Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_CLK of instance: EMVSIM1
      eALT0_EMVSIM1_CLK = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN2_RX of instance: FLEXCAN2
      eALT1_can2_RX = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT1_OUT of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT1_OUT = 2,
      // Select mux mode: ALT3 mux port: GPT2_CAPTURE2 of instance: GPT2
      eALT3_gpt2_CAPTURE2 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM0_B of instance: FLEXPWM1
      eALT4_flexpwm1_PWMB0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO00 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO0 = 5,
      // Select mux mode: ALT6 mux port: LPUART7_RXD of instance: LPUART7
      eALT6_lpuart7_RX = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D01 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO1 = 8,
      // Select mux mode: ALT9 mux port: FLEXSPI2_A_SS1_B of instance: FLEXSPI2
      eALT9_flexspi2_A_SS1_B = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO00 of instance: GPIO9
      eALT10_gpio9_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd01Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_01 : ftl::mmio::Register<
      0x400E8110u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd01Fields::MUX_MODE,
      SwMuxCtlPadGpioAd01Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd01Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd01Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd01Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd01Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_02 SW MUX Control Register
  struct SwMuxCtlPadGpioAd02Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_RST of instance: EMVSIM1
      eALT0_EMVSIM1_RST_B = 0,
      // Select mux mode: ALT1 mux port: LPUART7_CTS_B of instance: LPUART7
      eALT1_lpuart7_CTS_B = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT2_IN of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT2_IN = 2,
      // Select mux mode: ALT3 mux port: GPT2_COMPARE1 of instance: GPT2
      eALT3_gpt2_COMPARE1 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM1_A of instance: FLEXPWM1
      eALT4_flexpwm1_PWMA1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO01 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO1 = 5,
      // Select mux mode: ALT6 mux port: LPUART8_TXD of instance: LPUART8
      eALT6_lpuart8_TX = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D02 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO2 = 8,
      // Select mux mode: ALT9 mux port: VIDEO_MUX_EXT_DCIC1 of instance: VIDEO_MUX
      eALT9_video_mux_EXT_DCIC1 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO01 of instance: GPIO9
      eALT10_gpio9_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd02Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_02 : ftl::mmio::Register<
      0x400E8114u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd02Fields::MUX_MODE,
      SwMuxCtlPadGpioAd02Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd02Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd02Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd02Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd02Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_03 SW MUX Control Register
  struct SwMuxCtlPadGpioAd03Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_SVEN of instance: EMVSIM1
      eALT0_EMVSIM1_SVEN = 0,
      // Select mux mode: ALT1 mux port: LPUART7_RTS_B of instance: LPUART7
      eALT1_lpuart7_RTS_B = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT2_OUT of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT2_OUT = 2,
      // Select mux mode: ALT3 mux port: GPT2_COMPARE2 of instance: GPT2
      eALT3_gpt2_COMPARE2 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM1_B of instance: FLEXPWM1
      eALT4_flexpwm1_PWMB1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO02 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO2 = 5,
      // Select mux mode: ALT6 mux port: LPUART8_RXD of instance: LPUART8
      eALT6_lpuart8_RX = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D03 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO3 = 8,
      // Select mux mode: ALT9 mux port: VIDEO_MUX_EXT_DCIC2 of instance: VIDEO_MUX
      eALT9_video_mux_EXT_DCIC2 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO02 of instance: GPIO9
      eALT10_gpio9_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd03Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_03 : ftl::mmio::Register<
      0x400E8118u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd03Fields::MUX_MODE,
      SwMuxCtlPadGpioAd03Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd03Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd03Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd03Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd03Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_04 SW MUX Control Register
  struct SwMuxCtlPadGpioAd04Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_PD of instance: EMVSIM1
      eALT0_EMVSIM1_PD = 0,
      // Select mux mode: ALT1 mux port: LPUART8_CTS_B of instance: LPUART8
      eALT1_lpuart8_CTS_B = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT3_IN of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT3_IN = 2,
      // Select mux mode: ALT3 mux port: GPT2_COMPARE3 of instance: GPT2
      eALT3_gpt2_COMPARE3 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM2_A of instance: FLEXPWM1
      eALT4_flexpwm1_PWMA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO03 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO3 = 5,
      // Select mux mode: ALT6 mux port: WDOG1_B of instance: WDOG1
      eALT6_WDOG1_B = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D04 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO4 = 8,
      // Select mux mode: ALT9 mux port: TMR4_TIMER0 of instance: TMR4
      eALT9_qtimer4_TIMER0 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO03 of instance: GPIO9
      eALT10_gpio9_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd04Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_04 : ftl::mmio::Register<
      0x400E811Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd04Fields::MUX_MODE,
      SwMuxCtlPadGpioAd04Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd04Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd04Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd04Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd04Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_05 SW MUX Control Register
  struct SwMuxCtlPadGpioAd05Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: EMVSIM1_POWER_FAIL of instance: EMVSIM1
      eALT0_EMVSIM1_POWER_FAIL = 0,
      // Select mux mode: ALT1 mux port: LPUART8_RTS_B of instance: LPUART8
      eALT1_lpuart8_RTS_B = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT3_OUT of instance: ENET_1G
      eALT2_enet_1g_1588_EVENT3_OUT = 2,
      // Select mux mode: ALT3 mux port: GPT2_CLK of instance: GPT2
      eALT3_gpt2_CLK = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM1_PWM2_B of instance: FLEXPWM1
      eALT4_flexpwm1_PWMB2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO04 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO4 = 5,
      // Select mux mode: ALT6 mux port: WDOG2_B of instance: WDOG2
      eALT6_WDOG2_B = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D05 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO5 = 8,
      // Select mux mode: ALT9 mux port: TMR4_TIMER1 of instance: TMR4
      eALT9_qtimer4_TIMER1 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO04 of instance: GPIO9
      eALT10_gpio9_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd05Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_05 : ftl::mmio::Register<
      0x400E8120u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd05Fields::MUX_MODE,
      SwMuxCtlPadGpioAd05Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd05Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd05Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd05Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd05Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_06 SW MUX Control Register
  struct SwMuxCtlPadGpioAd06Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USB_OTG2_OC of instance: USB
      eALT0_usb_OTG2_OC = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN1_TX of instance: FLEXCAN1
      eALT1_can1_TX = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_IO of instance: EMVSIM2
      eALT2_EMVSIM2_TRXD = 2,
      // Select mux mode: ALT3 mux port: GPT3_CAPTURE1 of instance: GPT3
      eALT3_gpt3_CAPTURE1 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA15 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA15 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO05 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO5 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT1_IN of instance: ENET
      eALT6_enet_1588_EVENT1_IN = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D06 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO6 = 8,
      // Select mux mode: ALT9 mux port: TMR4_TIMER2 of instance: TMR4
      eALT9_qtimer4_TIMER2 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO05 of instance: GPIO9
      eALT10_gpio9_IO5 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM1_PWM0_X of instance: FLEXPWM1
      eALT11_flexpwm1_PWMX0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd06Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_06 : ftl::mmio::Register<
      0x400E8124u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd06Fields::MUX_MODE,
      SwMuxCtlPadGpioAd06Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd06Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd06Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd06Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd06Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_07 SW MUX Control Register
  struct SwMuxCtlPadGpioAd07Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USB_OTG2_PWR of instance: USB
      eALT0_usb_OTG2_PWR = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN1_RX of instance: FLEXCAN1
      eALT1_can1_RX = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_CLK of instance: EMVSIM2
      eALT2_EMVSIM2_CLK = 2,
      // Select mux mode: ALT3 mux port: GPT3_CAPTURE2 of instance: GPT3
      eALT3_gpt3_CAPTURE2 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA14 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA14 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO06 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO6 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT1_OUT of instance: ENET
      eALT6_enet_1588_EVENT1_OUT = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D07 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO7 = 8,
      // Select mux mode: ALT9 mux port: TMR4_TIMER3 of instance: TMR4
      eALT9_qtimer4_TIMER3 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO06 of instance: GPIO9
      eALT10_gpio9_IO6 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM1_PWM1_X of instance: FLEXPWM1
      eALT11_flexpwm1_PWMX1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd07Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_07 : ftl::mmio::Register<
      0x400E8128u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd07Fields::MUX_MODE,
      SwMuxCtlPadGpioAd07Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd07Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd07Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd07Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd07Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_08 SW MUX Control Register
  struct SwMuxCtlPadGpioAd08Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USBPHY2_OTG_ID of instance: USBPHY2
      eALT0_usbphy2_OTG_ID = 0,
      // Select mux mode: ALT1 mux port: LPI2C1_SCL of instance: LPI2C1
      eALT1_lpi2c1_SCL = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_RST of instance: EMVSIM2
      eALT2_EMVSIM2_RST_B = 2,
      // Select mux mode: ALT3 mux port: GPT3_COMPARE1 of instance: GPT3
      eALT3_gpt3_COMPARE1 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA13 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA13 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO07 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO7 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT2_IN of instance: ENET
      eALT6_enet_1588_EVENT2_IN = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D08 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO8 = 8,
      // Select mux mode: ALT10 mux port: GPIO9_IO07 of instance: GPIO9
      eALT10_gpio9_IO7 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM1_PWM2_X of instance: FLEXPWM1
      eALT11_flexpwm1_PWMX2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd08Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_08 : ftl::mmio::Register<
      0x400E812Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd08Fields::MUX_MODE,
      SwMuxCtlPadGpioAd08Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd08Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd08Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd08Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd08Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_09 SW MUX Control Register
  struct SwMuxCtlPadGpioAd09Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USBPHY1_OTG_ID of instance: USBPHY1
      eALT0_usbphy1_OTG_ID = 0,
      // Select mux mode: ALT1 mux port: LPI2C1_SDA of instance: LPI2C1
      eALT1_lpi2c1_SDA = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_SVEN of instance: EMVSIM2
      eALT2_EMVSIM2_SVEN = 2,
      // Select mux mode: ALT3 mux port: GPT3_COMPARE2 of instance: GPT3
      eALT3_gpt3_COMPARE2 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA12 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA12 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO08 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO8 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT2_OUT of instance: ENET
      eALT6_enet_1588_EVENT2_OUT = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D09 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO9 = 8,
      // Select mux mode: ALT10 mux port: GPIO9_IO08 of instance: GPIO9
      eALT10_gpio9_IO8 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM1_PWM3_X of instance: FLEXPWM1
      eALT11_flexpwm1_PWMX3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd09Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_09 : ftl::mmio::Register<
      0x400E8130u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd09Fields::MUX_MODE,
      SwMuxCtlPadGpioAd09Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd09Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd09Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd09Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd09Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_10 SW MUX Control Register
  struct SwMuxCtlPadGpioAd10Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USB_OTG1_PWR of instance: USB
      eALT0_usb_OTG1_PWR = 0,
      // Select mux mode: ALT1 mux port: LPI2C1_SCLS of instance: LPI2C1
      eALT1_lpi2c1_SCLS = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_PD of instance: EMVSIM2
      eALT2_EMVSIM2_PD = 2,
      // Select mux mode: ALT3 mux port: GPT3_COMPARE3 of instance: GPT3
      eALT3_gpt3_COMPARE3 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA11 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA11 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO09 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO9 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT3_IN of instance: ENET
      eALT6_enet_1588_EVENT3_IN = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D10 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO10 = 8,
      // Select mux mode: ALT10 mux port: GPIO9_IO09 of instance: GPIO9
      eALT10_gpio9_IO9 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM2_PWM0_X of instance: FLEXPWM2
      eALT11_flexpwm2_PWMX0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd10Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_10 : ftl::mmio::Register<
      0x400E8134u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd10Fields::MUX_MODE,
      SwMuxCtlPadGpioAd10Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd10Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd10Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd10Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd10Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_11 SW MUX Control Register
  struct SwMuxCtlPadGpioAd11Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USB_OTG1_OC of instance: USB
      eALT0_usb_OTG1_OC = 0,
      // Select mux mode: ALT1 mux port: LPI2C1_SDAS of instance: LPI2C1
      eALT1_lpi2c1_SDAS = 1,
      // Select mux mode: ALT2 mux port: EMVSIM2_POWER_FAIL of instance: EMVSIM2
      eALT2_EMVSIM2_POWER_FAIL = 2,
      // Select mux mode: ALT3 mux port: GPT3_CLK of instance: GPT3
      eALT3_gpt3_CLK = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA10 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA10 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO10 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO10 = 5,
      // Select mux mode: ALT6 mux port: ENET_1588_EVENT3_OUT of instance: ENET
      eALT6_enet_1588_EVENT3_OUT = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D11 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO11 = 8,
      // Select mux mode: ALT10 mux port: GPIO9_IO10 of instance: GPIO9
      eALT10_gpio9_IO10 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM2_PWM1_X of instance: FLEXPWM2
      eALT11_flexpwm2_PWMX1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd11Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_11 : ftl::mmio::Register<
      0x400E8138u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd11Fields::MUX_MODE,
      SwMuxCtlPadGpioAd11Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd11Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd11Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd11Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd11Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_12 SW MUX Control Register
  struct SwMuxCtlPadGpioAd12Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SPDIF_LOCK of instance: SPDIF
      eALT0_spdif_LOCK = 0,
      // Select mux mode: ALT1 mux port: LPI2C1_HREQ of instance: LPI2C1
      eALT1_lpi2c1_HREQ = 1,
      // Select mux mode: ALT2 mux port: GPT1_CAPTURE1 of instance: GPT1
      eALT2_gpt1_CAPTURE1 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_DATA03 of instance: FLEXSPI1
      eALT3_flexspi1_B_DATA3 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_PIXCLK of instance: VIDEO_MUX
      eALT4_video_mux_CSI_PIXCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO11 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO11 = 5,
      // Select mux mode: ALT6 mux port: ENET_TX_DATA03 of instance: ENET
      eALT6_ENET_TX_DATA3 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D12 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO12 = 8,
      // Select mux mode: ALT9 mux port: EWM_OUT_B of instance: EWM
      eALT9_EWM_OUT_B = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO11 of instance: GPIO9
      eALT10_gpio9_IO11 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM2_PWM2_X of instance: FLEXPWM2
      eALT11_flexpwm2_PWMX2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_12
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd12Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_12 : ftl::mmio::Register<
      0x400E813Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd12Fields::MUX_MODE,
      SwMuxCtlPadGpioAd12Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd12Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd12Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd12Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd12Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_13 SW MUX Control Register
  struct SwMuxCtlPadGpioAd13Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SPDIF_SR_CLK of instance: SPDIF
      eALT0_spdif_SR_CLK = 0,
      // Select mux mode: ALT1 mux port: PIT1_TRIGGER0 of instance: PIT1
      eALT1_pit1_TRIGGER0 = 1,
      // Select mux mode: ALT2 mux port: GPT1_CAPTURE2 of instance: GPT1
      eALT2_gpt1_CAPTURE2 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_DATA02 of instance: FLEXSPI1
      eALT3_flexspi1_B_DATA2 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_MCLK of instance: VIDEO_MUX
      eALT4_video_mux_CSI_MCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO12 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO12 = 5,
      // Select mux mode: ALT6 mux port: ENET_TX_DATA02 of instance: ENET
      eALT6_ENET_TX_DATA2 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D13 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO13 = 8,
      // Select mux mode: ALT9 mux port: REF_CLK_32K of instance: XTAL OSC
      eALT9_anatop_32K_OUT = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO12 of instance: GPIO9
      eALT10_gpio9_IO12 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM2_PWM3_X of instance: FLEXPWM2
      eALT11_flexpwm2_PWMX3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_13
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd13Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_13 : ftl::mmio::Register<
      0x400E8140u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd13Fields::MUX_MODE,
      SwMuxCtlPadGpioAd13Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd13Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd13Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd13Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd13Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_14 SW MUX Control Register
  struct SwMuxCtlPadGpioAd14Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SPDIF_EXT_CLK of instance: SPDIF
      eALT0_spdif_EXT_CLK = 0,
      // Select mux mode: ALT1 mux port: REF_CLK_24M of instance: XTAL OSC
      eALT1_anatop_24M_OUT = 1,
      // Select mux mode: ALT2 mux port: GPT1_COMPARE1 of instance: GPT1
      eALT2_gpt1_COMPARE1 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_DATA01 of instance: FLEXSPI1
      eALT3_flexspi1_B_DATA1 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_VSYNC of instance: VIDEO_MUX
      eALT4_video_mux_CSI_VSYNC = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO13 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO13 = 5,
      // Select mux mode: ALT6 mux port: ENET_RX_CLK of instance: ENET
      eALT6_enet_RX_CLK = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D14 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO14 = 8,
      // Select mux mode: ALT9 mux port: CCM_ENET_REF_CLK_25M of instance: CCM
      eALT9_CCM_ENET_REF_CLK_25M = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO13 of instance: GPIO9
      eALT10_gpio9_IO13 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM0_X of instance: FLEXPWM3
      eALT11_flexpwm3_PWMX0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_14
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd14Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_14 : ftl::mmio::Register<
      0x400E8144u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd14Fields::MUX_MODE,
      SwMuxCtlPadGpioAd14Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd14Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd14Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd14Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd14Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_15 SW MUX Control Register
  struct SwMuxCtlPadGpioAd15Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SPDIF_IN of instance: SPDIF
      eALT0_spdif_IN = 0,
      // Select mux mode: ALT1 mux port: LPUART10_TXD of instance: LPUART10
      eALT1_lpuart10_TX = 1,
      // Select mux mode: ALT2 mux port: GPT1_COMPARE2 of instance: GPT1
      eALT2_gpt1_COMPARE2 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_DATA00 of instance: FLEXSPI1
      eALT3_flexspi1_B_DATA0 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_HSYNC of instance: VIDEO_MUX
      eALT4_video_mux_CSI_HSYNC = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO14 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO14 = 5,
      // Select mux mode: ALT6 mux port: ENET_TX_ER of instance: ENET
      eALT6_enet_TX_ER = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D15 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO15 = 8,
      // Select mux mode: ALT10 mux port: GPIO9_IO14 of instance: GPIO9
      eALT10_gpio9_IO14 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM1_X of instance: FLEXPWM3
      eALT11_flexpwm3_PWMX1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_15
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd15Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_15 : ftl::mmio::Register<
      0x400E8148u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd15Fields::MUX_MODE,
      SwMuxCtlPadGpioAd15Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd15Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd15Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd15Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd15Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_16 SW MUX Control Register
  struct SwMuxCtlPadGpioAd16Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SPDIF_OUT of instance: SPDIF
      eALT0_spdif_OUT = 0,
      // Select mux mode: ALT1 mux port: LPUART10_RXD of instance: LPUART10
      eALT1_lpuart10_RX = 1,
      // Select mux mode: ALT2 mux port: GPT1_COMPARE3 of instance: GPT1
      eALT2_gpt1_COMPARE3 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_SCLK of instance: FLEXSPI1
      eALT3_flexspi1_B_SCLK = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA09 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA9 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO15 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO15 = 5,
      // Select mux mode: ALT6 mux port: ENET_RX_DATA03 of instance: ENET
      eALT6_ENET_RX_DATA3 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D16 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO16 = 8,
      // Select mux mode: ALT9 mux port: ENET_1G_MDC of instance: ENET_1G
      eALT9_enet_1g_MDC = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO15 of instance: GPIO9
      eALT10_gpio9_IO15 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM2_X of instance: FLEXPWM3
      eALT11_flexpwm3_PWMX2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_16
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd16Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_16 : ftl::mmio::Register<
      0x400E814Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd16Fields::MUX_MODE,
      SwMuxCtlPadGpioAd16Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd16Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd16Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd16Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd16Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_17 SW MUX Control Register
  struct SwMuxCtlPadGpioAd17Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_MCLK of instance: SAI1
      eALT0_sai1_MCLK = 0,
      // Select mux mode: ALT1 mux port: ACMP1_OUT of instance: ACMP1
      eALT1_ACMP1_OUT = 1,
      // Select mux mode: ALT2 mux port: GPT1_CLK of instance: GPT1
      eALT2_gpt1_CLK = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_DQS of instance: FLEXSPI1
      eALT3_flexspi1_A_DQS = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA08 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA8 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO16 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO16 = 5,
      // Select mux mode: ALT6 mux port: ENET_RX_DATA02 of instance: ENET
      eALT6_ENET_RX_DATA2 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D17 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO17 = 8,
      // Select mux mode: ALT9 mux port: ENET_1G_MDIO of instance: ENET_1G
      eALT9_enet_1g_MDIO = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO16 of instance: GPIO9
      eALT10_gpio9_IO16 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM3_PWM3_X of instance: FLEXPWM3
      eALT11_flexpwm3_PWMX3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_17
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd17Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_17 : ftl::mmio::Register<
      0x400E8150u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd17Fields::MUX_MODE,
      SwMuxCtlPadGpioAd17Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd17Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd17Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd17Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd17Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_18 SW MUX Control Register
  struct SwMuxCtlPadGpioAd18Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_RX_SYNC of instance: SAI1
      eALT0_sai1_RX_SYNC = 0,
      // Select mux mode: ALT1 mux port: ACMP2_OUT of instance: ACMP2
      eALT1_ACMP2_OUT = 1,
      // Select mux mode: ALT2 mux port: LPSPI1_PCS1 of instance: LPSPI1
      eALT2_lpspi1_PCS1 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_SS0_B of instance: FLEXSPI1
      eALT3_flexspi1_A_SS0_B = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA07 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA7 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO17 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO17 = 5,
      // Select mux mode: ALT6 mux port: ENET_CRS of instance: ENET
      eALT6_enet_CRS = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D18 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO18 = 8,
      // Select mux mode: ALT9 mux port: LPI2C2_SCL of instance: LPI2C2
      eALT9_lpi2c2_SCL = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO17 of instance: GPIO9
      eALT10_gpio9_IO17 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM4_PWM0_X of instance: FLEXPWM4
      eALT11_flexpwm4_PWMX0 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_18
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd18Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_18 : ftl::mmio::Register<
      0x400E8154u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd18Fields::MUX_MODE,
      SwMuxCtlPadGpioAd18Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd18Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd18Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd18Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd18Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_19 SW MUX Control Register
  struct SwMuxCtlPadGpioAd19Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_RX_BCLK of instance: SAI1
      eALT0_sai1_RX_BCLK = 0,
      // Select mux mode: ALT1 mux port: ACMP3_OUT of instance: ACMP3
      eALT1_ACMP3_OUT = 1,
      // Select mux mode: ALT2 mux port: LPSPI1_PCS2 of instance: LPSPI1
      eALT2_lpspi1_PCS2 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_SCLK of instance: FLEXSPI1
      eALT3_flexspi1_A_SCLK = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA06 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA6 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO18 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO18 = 5,
      // Select mux mode: ALT6 mux port: ENET_COL of instance: ENET
      eALT6_enet_COL = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D19 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO19 = 8,
      // Select mux mode: ALT9 mux port: LPI2C2_SDA of instance: LPI2C2
      eALT9_lpi2c2_SDA = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO18 of instance: GPIO9
      eALT10_gpio9_IO18 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM4_PWM1_X of instance: FLEXPWM4
      eALT11_flexpwm4_PWMX1 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_19
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd19Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_19 : ftl::mmio::Register<
      0x400E8158u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd19Fields::MUX_MODE,
      SwMuxCtlPadGpioAd19Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd19Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd19Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd19Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd19Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_20 SW MUX Control Register
  struct SwMuxCtlPadGpioAd20Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_RX_DATA00 of instance: SAI1
      eALT0_sai1_RX_DATA0 = 0,
      // Select mux mode: ALT1 mux port: ACMP4_OUT of instance: ACMP4
      eALT1_ACMP4_OUT = 1,
      // Select mux mode: ALT2 mux port: LPSPI1_PCS3 of instance: LPSPI1
      eALT2_lpspi1_PCS3 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_DATA00 of instance: FLEXSPI1
      eALT3_flexspi1_A_DATA0 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA05 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA5 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO19 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO19 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW07 of instance: KPP
      eALT6_kpp_ROW7 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D20 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO20 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT2_OUT of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT2_OUT = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO19 of instance: GPIO9
      eALT10_gpio9_IO19 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM4_PWM2_X of instance: FLEXPWM4
      eALT11_flexpwm4_PWMX2 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_20
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd20Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_20 : ftl::mmio::Register<
      0x400E815Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd20Fields::MUX_MODE,
      SwMuxCtlPadGpioAd20Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd20Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd20Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd20Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd20Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_21 SW MUX Control Register
  struct SwMuxCtlPadGpioAd21Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_TX_DATA00 of instance: SAI1
      eALT0_sai1_TX_DATA0 = 0,
      // Select mux mode: ALT2 mux port: LPSPI2_PCS1 of instance: LPSPI2
      eALT2_lpspi2_PCS1 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_DATA01 of instance: FLEXSPI1
      eALT3_flexspi1_A_DATA1 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA04 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA4 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO20 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO20 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL07 of instance: KPP
      eALT6_kpp_COL7 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D21 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO21 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT2_IN of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT2_IN = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO20 of instance: GPIO9
      eALT10_gpio9_IO20 = 10,
      // Select mux mode: ALT11 mux port: FLEXPWM4_PWM3_X of instance: FLEXPWM4
      eALT11_flexpwm4_PWMX3 = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_21
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd21Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_21 : ftl::mmio::Register<
      0x400E8160u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd21Fields::MUX_MODE,
      SwMuxCtlPadGpioAd21Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd21Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd21Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd21Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd21Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_22 SW MUX Control Register
  struct SwMuxCtlPadGpioAd22Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_TX_BCLK of instance: SAI1
      eALT0_sai1_TX_BCLK = 0,
      // Select mux mode: ALT2 mux port: LPSPI2_PCS2 of instance: LPSPI2
      eALT2_lpspi2_PCS2 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_DATA02 of instance: FLEXSPI1
      eALT3_flexspi1_A_DATA2 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA03 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO21 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO21 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW06 of instance: KPP
      eALT6_kpp_ROW6 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D22 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO22 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT3_OUT of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT3_OUT = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO21 of instance: GPIO9
      eALT10_gpio9_IO21 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_22
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd22Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_22 : ftl::mmio::Register<
      0x400E8164u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd22Fields::MUX_MODE,
      SwMuxCtlPadGpioAd22Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd22Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd22Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd22Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd22Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_23 SW MUX Control Register
  struct SwMuxCtlPadGpioAd23Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SAI1_TX_SYNC of instance: SAI1
      eALT0_sai1_TX_SYNC = 0,
      // Select mux mode: ALT2 mux port: LPSPI2_PCS3 of instance: LPSPI2
      eALT2_lpspi2_PCS3 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_DATA03 of instance: FLEXSPI1
      eALT3_flexspi1_A_DATA3 = 3,
      // Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA02 of instance: VIDEO_MUX
      eALT4_video_mux_CSI_DATA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO22 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO22 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL06 of instance: KPP
      eALT6_kpp_COL6 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D23 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO23 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT3_IN of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT3_IN = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO22 of instance: GPIO9
      eALT10_gpio9_IO22 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_23
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd23Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_23 : ftl::mmio::Register<
      0x400E8168u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd23Fields::MUX_MODE,
      SwMuxCtlPadGpioAd23Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd23Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd23Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd23Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd23Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_24 SW MUX Control Register
  struct SwMuxCtlPadGpioAd24Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART1_TXD of instance: LPUART1
      eALT0_lpuart1_TX = 0,
      // Select mux mode: ALT1 mux port: LPSPI2_SCK of instance: LPSPI2
      eALT1_lpspi2_SCK = 1,
      // Select mux mode: ALT2 mux port: VIDEO_MUX_CSI_DATA00 of instance: VIDEO_MUX
      eALT2_video_mux_CSI_DATA0 = 2,
      // Select mux mode: ALT3 mux port: ENET_RX_EN of instance: ENET
      eALT3_enet_RX_EN = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM0_A of instance: FLEXPWM2
      eALT4_flexpwm2_PWMA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO23 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO23 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW05 of instance: KPP
      eALT6_kpp_ROW5 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D24 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO24 = 8,
      // Select mux mode: ALT9 mux port: LPI2C4_SCL of instance: LPI2C4
      eALT9_lpi2c4_SCL = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO23 of instance: GPIO9
      eALT10_gpio9_IO23 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_24
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd24Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_24 : ftl::mmio::Register<
      0x400E816Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd24Fields::MUX_MODE,
      SwMuxCtlPadGpioAd24Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd24Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd24Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd24Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd24Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_25 SW MUX Control Register
  struct SwMuxCtlPadGpioAd25Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART1_RXD of instance: LPUART1
      eALT0_lpuart1_RX = 0,
      // Select mux mode: ALT1 mux port: LPSPI2_PCS0 of instance: LPSPI2
      eALT1_lpspi2_PCS0 = 1,
      // Select mux mode: ALT2 mux port: VIDEO_MUX_CSI_DATA01 of instance: VIDEO_MUX
      eALT2_video_mux_CSI_DATA1 = 2,
      // Select mux mode: ALT3 mux port: ENET_RX_ER of instance: ENET
      eALT3_enet_RX_ER = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM0_B of instance: FLEXPWM2
      eALT4_flexpwm2_PWMB0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO24 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO24 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL05 of instance: KPP
      eALT6_kpp_COL5 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D25 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO25 = 8,
      // Select mux mode: ALT9 mux port: LPI2C4_SDA of instance: LPI2C4
      eALT9_lpi2c4_SDA = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO24 of instance: GPIO9
      eALT10_gpio9_IO24 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_25
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd25Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_25 : ftl::mmio::Register<
      0x400E8170u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd25Fields::MUX_MODE,
      SwMuxCtlPadGpioAd25Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd25Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd25Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd25Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd25Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_26 SW MUX Control Register
  struct SwMuxCtlPadGpioAd26Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART1_CTS_B of instance: LPUART1
      eALT0_lpuart1_CTS_B = 0,
      // Select mux mode: ALT1 mux port: LPSPI2_SOUT of instance: LPSPI2
      eALT1_lpspi2_SDO = 1,
      // Select mux mode: ALT2 mux port: SEMC_CSX01 of instance: SEMC
      eALT2_semc_CSX1 = 2,
      // Select mux mode: ALT3 mux port: ENET_RX_DATA00 of instance: ENET
      eALT3_ENET_RX_DATA0 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM1_A of instance: FLEXPWM2
      eALT4_flexpwm2_PWMA1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO25 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO25 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW04 of instance: KPP
      eALT6_kpp_ROW4 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D26 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO26 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_MDC of instance: ENET_QOS
      eALT9_enet_qos_MDC = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO25 of instance: GPIO9
      eALT10_gpio9_IO25 = 10,
      // Select mux mode: ALT11 mux port: USDHC2_CD_B of instance: USDHC2
      eALT11_usdhc2_CD_B = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_26
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd26Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_26 : ftl::mmio::Register<
      0x400E8174u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd26Fields::MUX_MODE,
      SwMuxCtlPadGpioAd26Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd26Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd26Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd26Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd26Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_27 SW MUX Control Register
  struct SwMuxCtlPadGpioAd27Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART1_RTS_B of instance: LPUART1
      eALT0_lpuart1_RTS_B = 0,
      // Select mux mode: ALT1 mux port: LPSPI2_SIN of instance: LPSPI2
      eALT1_lpspi2_SDI = 1,
      // Select mux mode: ALT2 mux port: SEMC_CSX02 of instance: SEMC
      eALT2_semc_CSX2 = 2,
      // Select mux mode: ALT3 mux port: ENET_RX_DATA01 of instance: ENET
      eALT3_ENET_RX_DATA1 = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM1_B of instance: FLEXPWM2
      eALT4_flexpwm2_PWMB1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO26 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO26 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL04 of instance: KPP
      eALT6_kpp_COL4 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D27 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO27 = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_MDIO of instance: ENET_QOS
      eALT9_enet_qos_MDIO = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO26 of instance: GPIO9
      eALT10_gpio9_IO26 = 10,
      // Select mux mode: ALT11 mux port: USDHC2_WP of instance: USDHC2
      eALT11_usdhc2_WP = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_27
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd27Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_27 : ftl::mmio::Register<
      0x400E8178u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd27Fields::MUX_MODE,
      SwMuxCtlPadGpioAd27Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd27Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd27Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd27Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd27Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_28 SW MUX Control Register
  struct SwMuxCtlPadGpioAd28Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPSPI1_SCK of instance: LPSPI1
      eALT0_lpspi1_SCK = 0,
      // Select mux mode: ALT1 mux port: LPUART5_TXD of instance: LPUART5
      eALT1_lpuart5_TX = 1,
      // Select mux mode: ALT2 mux port: SEMC_CSX03 of instance: SEMC
      eALT2_semc_CSX3 = 2,
      // Select mux mode: ALT3 mux port: ENET_TX_EN of instance: ENET
      eALT3_enet_TX_EN = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM2_A of instance: FLEXPWM2
      eALT4_flexpwm2_PWMA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO27 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO27 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW03 of instance: KPP
      eALT6_kpp_ROW3 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D28 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO28 = 8,
      // Select mux mode: ALT9 mux port: VIDEO_MUX_EXT_DCIC1 of instance: VIDEO_MUX
      eALT9_video_mux_EXT_DCIC1 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO27 of instance: GPIO9
      eALT10_gpio9_IO27 = 10,
      // Select mux mode: ALT11 mux port: USDHC2_VSELECT of instance: USDHC2
      eALT11_usdhc2_VSELECT = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_28
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd28Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_28 : ftl::mmio::Register<
      0x400E817Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd28Fields::MUX_MODE,
      SwMuxCtlPadGpioAd28Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd28Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd28Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd28Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd28Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_29 SW MUX Control Register
  struct SwMuxCtlPadGpioAd29Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPSPI1_PCS0 of instance: LPSPI1
      eALT0_lpspi1_PCS0 = 0,
      // Select mux mode: ALT1 mux port: LPUART5_RXD of instance: LPUART5
      eALT1_lpuart5_RX = 1,
      // Select mux mode: ALT2 mux port: ENET_REF_CLK of instance: ENET
      eALT2_enet_REF_CLK = 2,
      // Select mux mode: ALT3 mux port: ENET_TX_CLK of instance: ENET
      eALT3_enet_TX_CLK = 3,
      // Select mux mode: ALT4 mux port: FLEXPWM2_PWM2_B of instance: FLEXPWM2
      eALT4_flexpwm2_PWMB2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO28 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO28 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL03 of instance: KPP
      eALT6_kpp_COL3 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D29 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO29 = 8,
      // Select mux mode: ALT9 mux port: VIDEO_MUX_EXT_DCIC2 of instance: VIDEO_MUX
      eALT9_video_mux_EXT_DCIC2 = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO28 of instance: GPIO9
      eALT10_gpio9_IO28 = 10,
      // Select mux mode: ALT11 mux port: USDHC2_RESET_B of instance: USDHC2
      eALT11_usdhc2_RESET_B = 11,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_29
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd29Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_29 : ftl::mmio::Register<
      0x400E8180u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd29Fields::MUX_MODE,
      SwMuxCtlPadGpioAd29Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd29Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd29Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd29Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd29Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_30 SW MUX Control Register
  struct SwMuxCtlPadGpioAd30Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPSPI1_SOUT of instance: LPSPI1
      eALT0_lpspi1_SDO = 0,
      // Select mux mode: ALT1 mux port: USB_OTG2_OC of instance: USB
      eALT1_usb_OTG2_OC = 1,
      // Select mux mode: ALT2 mux port: FLEXCAN2_TX of instance: FLEXCAN2
      eALT2_can2_TX = 2,
      // Select mux mode: ALT3 mux port: ENET_TX_DATA00 of instance: ENET
      eALT3_ENET_TX_DATA0 = 3,
      // Select mux mode: ALT4 mux port: LPUART3_TXD of instance: LPUART3
      eALT4_lpuart3_TX = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO29 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO29 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW02 of instance: KPP
      eALT6_kpp_ROW2 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D30 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO30 = 8,
      // Select mux mode: ALT9 mux port: WDOG2_RESET_B_DEB of instance: WDOG2
      eALT9_WDOG2_RESET_B_DEB = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO29 of instance: GPIO9
      eALT10_gpio9_IO29 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_30
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd30Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_30 : ftl::mmio::Register<
      0x400E8184u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd30Fields::MUX_MODE,
      SwMuxCtlPadGpioAd30Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd30Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd30Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd30Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd30Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_31 SW MUX Control Register
  struct SwMuxCtlPadGpioAd31Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPSPI1_SIN of instance: LPSPI1
      eALT0_lpspi1_SDI = 0,
      // Select mux mode: ALT1 mux port: USB_OTG2_PWR of instance: USB
      eALT1_usb_OTG2_PWR = 1,
      // Select mux mode: ALT2 mux port: FLEXCAN2_RX of instance: FLEXCAN2
      eALT2_can2_RX = 2,
      // Select mux mode: ALT3 mux port: ENET_TX_DATA01 of instance: ENET
      eALT3_ENET_TX_DATA1 = 3,
      // Select mux mode: ALT4 mux port: LPUART3_RXD of instance: LPUART3
      eALT4_lpuart3_RX = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO30 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO30 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL02 of instance: KPP
      eALT6_kpp_COL2 = 6,
      // Select mux mode: ALT8 mux port: FLEXIO2_D31 of instance: FLEXIO2
      eALT8_flexio2_FLEXIO31 = 8,
      // Select mux mode: ALT9 mux port: WDOG1_RESET_B_DEB of instance: WDOG1
      eALT9_WDOG1_RESET_B_DEB = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO30 of instance: GPIO9
      eALT10_gpio9_IO30 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_31
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd31Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_31 : ftl::mmio::Register<
      0x400E8188u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd31Fields::MUX_MODE,
      SwMuxCtlPadGpioAd31Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd31Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd31Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd31Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd31Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_32 SW MUX Control Register
  struct SwMuxCtlPadGpioAd32Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C1_SCL of instance: LPI2C1
      eALT0_lpi2c1_SCL = 0,
      // Select mux mode: ALT1 mux port: USBPHY2_OTG_ID of instance: USBPHY2
      eALT1_usbphy2_OTG_ID = 1,
      // Select mux mode: ALT2 mux port: PGMC_PMIC_RDY of instance: pgmc
      eALT2_pgmc_PMIC_RDY = 2,
      // Select mux mode: ALT3 mux port: ENET_MDC of instance: ENET
      eALT3_enet_MDC = 3,
      // Select mux mode: ALT4 mux port: USDHC1_CD_B of instance: USDHC1
      eALT4_usdhc1_CD_B = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX3_IO31 of instance: GPIO_MUX3
      eALT5_gpio_mux3_IO31 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW01 of instance: KPP
      eALT6_kpp_ROW1 = 6,
      // Select mux mode: ALT8 mux port: LPUART10_TXD of instance: LPUART10
      eALT8_lpuart10_TX = 8,
      // Select mux mode: ALT9 mux port: ENET_1G_MDC of instance: ENET_1G
      eALT9_enet_1g_MDC = 9,
      // Select mux mode: ALT10 mux port: GPIO9_IO31 of instance: GPIO9
      eALT10_gpio9_IO31 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_32
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd32Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_32 : ftl::mmio::Register<
      0x400E818Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd32Fields::MUX_MODE,
      SwMuxCtlPadGpioAd32Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd32Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd32Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd32Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd32Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_33 SW MUX Control Register
  struct SwMuxCtlPadGpioAd33Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C1_SDA of instance: LPI2C1
      eALT0_lpi2c1_SDA = 0,
      // Select mux mode: ALT1 mux port: USBPHY1_OTG_ID of instance: USBPHY1
      eALT1_usbphy1_OTG_ID = 1,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT17 of instance: XBAR1
      eALT2_XBAR1_INOUT17 = 2,
      // Select mux mode: ALT3 mux port: ENET_MDIO of instance: ENET
      eALT3_enet_MDIO = 3,
      // Select mux mode: ALT4 mux port: USDHC1_WP of instance: USDHC1
      eALT4_usdhc1_WP = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO00 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO0 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL01 of instance: KPP
      eALT6_kpp_COL1 = 6,
      // Select mux mode: ALT8 mux port: LPUART10_RXD of instance: LPUART10
      eALT8_lpuart10_RX = 8,
      // Select mux mode: ALT9 mux port: ENET_1G_MDIO of instance: ENET_1G
      eALT9_enet_1g_MDIO = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO00 of instance: GPIO10
      eALT10_gpio10_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_33
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd33Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_33 : ftl::mmio::Register<
      0x400E8190u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd33Fields::MUX_MODE,
      SwMuxCtlPadGpioAd33Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd33Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd33Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd33Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd33Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_34 SW MUX Control Register
  struct SwMuxCtlPadGpioAd34Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: ENET_1G_1588_EVENT0_IN of instance: ENET_1G
      eALT0_enet_1g_1588_EVENT0_IN = 0,
      // Select mux mode: ALT1 mux port: USB_OTG1_PWR of instance: USB
      eALT1_usb_OTG1_PWR = 1,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT18 of instance: XBAR1
      eALT2_XBAR1_INOUT18 = 2,
      // Select mux mode: ALT3 mux port: ENET_1588_EVENT0_IN of instance: ENET
      eALT3_enet_1588_EVENT0_IN = 3,
      // Select mux mode: ALT4 mux port: USDHC1_VSELECT of instance: USDHC1
      eALT4_usdhc1_VSELECT = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO01 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO1 = 5,
      // Select mux mode: ALT6 mux port: KPP_ROW00 of instance: KPP
      eALT6_kpp_ROW0 = 6,
      // Select mux mode: ALT8 mux port: LPUART10_CTS_B of instance: LPUART10
      eALT8_lpuart10_CTS_B = 8,
      // Select mux mode: ALT9 mux port: WDOG1_ANY of instance: WDOG1
      eALT9_WDOG1_ANY = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO01 of instance: GPIO10
      eALT10_gpio10_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_34
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd34Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_34 : ftl::mmio::Register<
      0x400E8194u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd34Fields::MUX_MODE,
      SwMuxCtlPadGpioAd34Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd34Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd34Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd34Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd34Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_AD_35 SW MUX Control Register
  struct SwMuxCtlPadGpioAd35Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: ENET_1G_1588_EVENT0_OUT of instance: ENET_1G
      eALT0_enet_1g_1588_EVENT0_OUT = 0,
      // Select mux mode: ALT1 mux port: USB_OTG1_OC of instance: USB
      eALT1_usb_OTG1_OC = 1,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT19 of instance: XBAR1
      eALT2_XBAR1_INOUT19 = 2,
      // Select mux mode: ALT3 mux port: ENET_1588_EVENT0_OUT of instance: ENET
      eALT3_enet_1588_EVENT0_OUT = 3,
      // Select mux mode: ALT4 mux port: USDHC1_RESET_B of instance: USDHC1
      eALT4_usdhc1_RESET_B = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO02 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO2 = 5,
      // Select mux mode: ALT6 mux port: KPP_COL00 of instance: KPP
      eALT6_kpp_COL0 = 6,
      // Select mux mode: ALT8 mux port: LPUART10_RTS_B of instance: LPUART10
      eALT8_lpuart10_RTS_B = 8,
      // Select mux mode: ALT9 mux port: FLEXSPI1_B_SS1_B of instance: FLEXSPI1
      eALT9_flexspi1_B_SS1_B = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO02 of instance: GPIO10
      eALT10_gpio10_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_AD_35
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioAd35Fields

  struct SW_MUX_CTL_PAD_GPIO_AD_35 : ftl::mmio::Register<
      0x400E8198u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioAd35Fields::MUX_MODE,
      SwMuxCtlPadGpioAd35Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioAd35Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioAd35Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioAd35Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioAd35Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_00 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB100Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_CMD of instance: USDHC1
      eALT0_usdhc1_CMD = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT20 of instance: XBAR1
      eALT2_XBAR1_INOUT20 = 2,
      // Select mux mode: ALT3 mux port: GPT4_CAPTURE1 of instance: GPT4
      eALT3_gpt4_CAPTURE1 = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO03 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO3 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_SS0_B of instance: FLEXSPI2
      eALT6_flexspi2_A_SS0_B = 6,
      // Select mux mode: ALT8 mux port: KPP_ROW07 of instance: KPP
      eALT8_kpp_ROW7 = 8,
      // Select mux mode: ALT10 mux port: GPIO10_IO03 of instance: GPIO10
      eALT10_gpio10_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB100Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_00 : ftl::mmio::Register<
      0x400E819Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB100Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB100Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB100Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB100Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB100Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB100Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_01 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB101Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_CLK of instance: USDHC1
      eALT0_usdhc1_CLK = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT21 of instance: XBAR1
      eALT2_XBAR1_INOUT21 = 2,
      // Select mux mode: ALT3 mux port: GPT4_CAPTURE2 of instance: GPT4
      eALT3_gpt4_CAPTURE2 = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO04 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO4 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_SCLK of instance: FLEXSPI2
      eALT6_flexspi2_A_SCLK = 6,
      // Select mux mode: ALT8 mux port: KPP_COL07 of instance: KPP
      eALT8_kpp_COL7 = 8,
      // Select mux mode: ALT10 mux port: GPIO10_IO04 of instance: GPIO10
      eALT10_gpio10_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB101Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_01 : ftl::mmio::Register<
      0x400E81A0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB101Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB101Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB101Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB101Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB101Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB101Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_02 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB102Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_DATA0 of instance: USDHC1
      eALT0_usdhc1_DATA0 = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT22 of instance: XBAR1
      eALT2_XBAR1_INOUT22 = 2,
      // Select mux mode: ALT3 mux port: GPT4_COMPARE1 of instance: GPT4
      eALT3_gpt4_COMPARE1 = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO05 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO5 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_DATA00 of instance: FLEXSPI2
      eALT6_flexspi2_A_DATA0 = 6,
      // Select mux mode: ALT8 mux port: KPP_ROW06 of instance: KPP
      eALT8_kpp_ROW6 = 8,
      // Select mux mode: ALT9 mux port: FLEXSPI1_A_SS1_B of instance: FLEXSPI1
      eALT9_flexspi1_A_SS1_B = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO05 of instance: GPIO10
      eALT10_gpio10_IO5 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB102Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_02 : ftl::mmio::Register<
      0x400E81A4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB102Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB102Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB102Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB102Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB102Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB102Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_03 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB103Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_DATA1 of instance: USDHC1
      eALT0_usdhc1_DATA1 = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT23 of instance: XBAR1
      eALT2_XBAR1_INOUT23 = 2,
      // Select mux mode: ALT3 mux port: GPT4_COMPARE2 of instance: GPT4
      eALT3_gpt4_COMPARE2 = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO06 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO6 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_DATA01 of instance: FLEXSPI2
      eALT6_flexspi2_A_DATA1 = 6,
      // Select mux mode: ALT8 mux port: KPP_COL06 of instance: KPP
      eALT8_kpp_COL6 = 8,
      // Select mux mode: ALT9 mux port: FLEXSPI1_B_SS1_B of instance: FLEXSPI1
      eALT9_flexspi1_B_SS1_B = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO06 of instance: GPIO10
      eALT10_gpio10_IO6 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB103Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_03 : ftl::mmio::Register<
      0x400E81A8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB103Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB103Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB103Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB103Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB103Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB103Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_04 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB104Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_DATA2 of instance: USDHC1
      eALT0_usdhc1_DATA2 = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT24 of instance: XBAR1
      eALT2_XBAR1_INOUT24 = 2,
      // Select mux mode: ALT3 mux port: GPT4_COMPARE3 of instance: GPT4
      eALT3_gpt4_COMPARE3 = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO07 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO7 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_DATA02 of instance: FLEXSPI2
      eALT6_flexspi2_A_DATA2 = 6,
      // Select mux mode: ALT8 mux port: FLEXSPI1_B_SS0_B of instance: FLEXSPI1
      eALT8_flexspi1_B_SS0_B = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT2_AUX_IN of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT2_AUX_IN = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO07 of instance: GPIO10
      eALT10_gpio10_IO7 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB104Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_04 : ftl::mmio::Register<
      0x400E81ACu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB104Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB104Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB104Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB104Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB104Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB104Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B1_05 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB105Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC1_DATA3 of instance: USDHC1
      eALT0_usdhc1_DATA3 = 0,
      // Select mux mode: ALT2 mux port: XBAR1_INOUT25 of instance: XBAR1
      eALT2_XBAR1_INOUT25 = 2,
      // Select mux mode: ALT3 mux port: GPT4_CLK of instance: GPT4
      eALT3_gpt4_CLK = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO08 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO8 = 5,
      // Select mux mode: ALT6 mux port: FLEXSPI2_A_DATA03 of instance: FLEXSPI2
      eALT6_flexspi2_A_DATA3 = 6,
      // Select mux mode: ALT8 mux port: FLEXSPI1_B_DQS of instance: FLEXSPI1
      eALT8_flexspi1_B_DQS = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT3_AUX_IN of instance: ENET_QOS
      eALT9_enet_qos_1588_EVENT3_AUX_IN = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO08 of instance: GPIO10
      eALT10_gpio10_IO8 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B1_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB105Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B1_05 : ftl::mmio::Register<
      0x400E81B0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB105Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB105Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB105Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB105Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB105Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB105Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_00 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB200Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA3 of instance: USDHC2
      eALT0_usdhc2_DATA3 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_B_DATA03 of instance: FLEXSPI1
      eALT1_flexspi1_B_DATA3 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_EN of instance: ENET_1G
      eALT2_enet_1g_RX_EN = 2,
      // Select mux mode: ALT3 mux port: LPUART9_TXD of instance: LPUART9
      eALT3_lpuart9_TX = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_SCK of instance: LPSPI4
      eALT4_lpspi4_SCK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO09 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO9 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO09 of instance: GPIO10
      eALT10_gpio10_IO9 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB200Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_00 : ftl::mmio::Register<
      0x400E81B4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB200Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB200Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB200Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB200Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB200Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB200Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_01 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB201Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA2 of instance: USDHC2
      eALT0_usdhc2_DATA2 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_B_DATA02 of instance: FLEXSPI1
      eALT1_flexspi1_B_DATA2 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_CLK of instance: ENET_1G
      eALT2_enet_1g_RX_CLK = 2,
      // Select mux mode: ALT3 mux port: LPUART9_RXD of instance: LPUART9
      eALT3_lpuart9_RX = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_PCS0 of instance: LPSPI4
      eALT4_lpspi4_PCS0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO10 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO10 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO10 of instance: GPIO10
      eALT10_gpio10_IO10 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB201Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_01 : ftl::mmio::Register<
      0x400E81B8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB201Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB201Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB201Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB201Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB201Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB201Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_02 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB202Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA1 of instance: USDHC2
      eALT0_usdhc2_DATA1 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_B_DATA01 of instance: FLEXSPI1
      eALT1_flexspi1_B_DATA1 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA00 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA0 = 2,
      // Select mux mode: ALT3 mux port: LPUART9_CTS_B of instance: LPUART9
      eALT3_lpuart9_CTS_B = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_SOUT of instance: LPSPI4
      eALT4_lpspi4_SDO = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO11 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO11 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO11 of instance: GPIO10
      eALT10_gpio10_IO11 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB202Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_02 : ftl::mmio::Register<
      0x400E81BCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB202Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB202Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB202Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB202Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB202Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB202Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_03 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB203Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA0 of instance: USDHC2
      eALT0_usdhc2_DATA0 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_B_DATA00 of instance: FLEXSPI1
      eALT1_flexspi1_B_DATA0 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA01 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA1 = 2,
      // Select mux mode: ALT3 mux port: LPUART9_RTS_B of instance: LPUART9
      eALT3_lpuart9_RTS_B = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_SIN of instance: LPSPI4
      eALT4_lpspi4_SDI = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO12 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO12 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO12 of instance: GPIO10
      eALT10_gpio10_IO12 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB203Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_03 : ftl::mmio::Register<
      0x400E81C0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB203Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB203Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB203Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB203Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB203Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB203Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_04 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB204Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_CLK of instance: USDHC2
      eALT0_usdhc2_CLK = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_B_SCLK of instance: FLEXSPI1
      eALT1_flexspi1_B_SCLK = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA02 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA2 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_A_SS1_B of instance: FLEXSPI1
      eALT3_flexspi1_A_SS1_B = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_PCS1 of instance: LPSPI4
      eALT4_lpspi4_PCS1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO13 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO13 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO13 of instance: GPIO10
      eALT10_gpio10_IO13 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB204Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_04 : ftl::mmio::Register<
      0x400E81C4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB204Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB204Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB204Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB204Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB204Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB204Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_05 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB205Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_CMD of instance: USDHC2
      eALT0_usdhc2_CMD = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_DQS of instance: FLEXSPI1
      eALT1_flexspi1_A_DQS = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_DATA03 of instance: ENET_1G
      eALT2_ENET_1G_RX_DATA3 = 2,
      // Select mux mode: ALT3 mux port: FLEXSPI1_B_SS0_B of instance: FLEXSPI1
      eALT3_flexspi1_B_SS0_B = 3,
      // Select mux mode: ALT4 mux port: LPSPI4_PCS2 of instance: LPSPI4
      eALT4_lpspi4_PCS2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO14 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO14 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO14 of instance: GPIO10
      eALT10_gpio10_IO14 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB205Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_05 : ftl::mmio::Register<
      0x400E81C8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB205Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB205Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB205Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB205Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB205Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB205Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_06 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB206Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_RESET_B of instance: USDHC2
      eALT0_usdhc2_RESET_B = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_SS0_B of instance: FLEXSPI1
      eALT1_flexspi1_A_SS0_B = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA03 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA3 = 2,
      // Select mux mode: ALT3 mux port: LPSPI4_PCS3 of instance: LPSPI4
      eALT3_lpspi4_PCS3 = 3,
      // Select mux mode: ALT4 mux port: GPT6_CAPTURE1 of instance: GPT6
      eALT4_gpt6_CAPTURE1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO15 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO15 = 5,
      // Select mux mode: ALT10 mux port: GPIO10_IO15 of instance: GPIO10
      eALT10_gpio10_IO15 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB206Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_06 : ftl::mmio::Register<
      0x400E81CCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB206Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB206Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB206Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB206Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB206Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB206Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_07 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB207Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_STROBE of instance: USDHC2
      eALT0_usdhc2_STROBE = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_SCLK of instance: FLEXSPI1
      eALT1_flexspi1_A_SCLK = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA02 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA2 = 2,
      // Select mux mode: ALT3 mux port: LPUART3_CTS_B of instance: LPUART3
      eALT3_lpuart3_CTS_B = 3,
      // Select mux mode: ALT4 mux port: GPT6_CAPTURE2 of instance: GPT6
      eALT4_gpt6_CAPTURE2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO16 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO16 = 5,
      // Select mux mode: ALT6 mux port: LPSPI2_SCK of instance: LPSPI2
      eALT6_lpspi2_SCK = 6,
      // Select mux mode: ALT8 mux port: ENET_TX_ER of instance: ENET
      eALT8_enet_TX_ER = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_REF_CLK of instance: ENET_QOS
      eALT9_CCM_enet_qos_clock_generate_REF_CLK = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO16 of instance: GPIO10
      eALT10_gpio10_IO16 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB207Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_07 : ftl::mmio::Register<
      0x400E81D0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB207Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB207Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB207Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB207Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB207Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB207Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_08 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB208Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA4 of instance: USDHC2
      eALT0_usdhc2_DATA4 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_DATA00 of instance: FLEXSPI1
      eALT1_flexspi1_A_DATA0 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA01 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA1 = 2,
      // Select mux mode: ALT3 mux port: LPUART3_RTS_B of instance: LPUART3
      eALT3_lpuart3_RTS_B = 3,
      // Select mux mode: ALT4 mux port: GPT6_COMPARE1 of instance: GPT6
      eALT4_gpt6_COMPARE1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO17 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO17 = 5,
      // Select mux mode: ALT6 mux port: LPSPI2_PCS0 of instance: LPSPI2
      eALT6_lpspi2_PCS0 = 6,
      // Select mux mode: ALT10 mux port: GPIO10_IO17 of instance: GPIO10
      eALT10_gpio10_IO17 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB208Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_08 : ftl::mmio::Register<
      0x400E81D4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB208Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB208Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB208Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB208Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB208Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB208Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_09 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB209Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA5 of instance: USDHC2
      eALT0_usdhc2_DATA5 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_DATA01 of instance: FLEXSPI1
      eALT1_flexspi1_A_DATA1 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_DATA00 of instance: ENET_1G
      eALT2_ENET_1G_TX_DATA0 = 2,
      // Select mux mode: ALT3 mux port: LPUART5_CTS_B of instance: LPUART5
      eALT3_lpuart5_CTS_B = 3,
      // Select mux mode: ALT4 mux port: GPT6_COMPARE2 of instance: GPT6
      eALT4_gpt6_COMPARE2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO18 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO18 = 5,
      // Select mux mode: ALT6 mux port: LPSPI2_SOUT of instance: LPSPI2
      eALT6_lpspi2_SDO = 6,
      // Select mux mode: ALT10 mux port: GPIO10_IO18 of instance: GPIO10
      eALT10_gpio10_IO18 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB209Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_09 : ftl::mmio::Register<
      0x400E81D8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB209Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB209Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB209Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB209Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB209Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB209Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_10 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB210Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA6 of instance: USDHC2
      eALT0_usdhc2_DATA6 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_DATA02 of instance: FLEXSPI1
      eALT1_flexspi1_A_DATA2 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_EN of instance: ENET_1G
      eALT2_enet_1g_TX_EN = 2,
      // Select mux mode: ALT3 mux port: LPUART5_RTS_B of instance: LPUART5
      eALT3_lpuart5_RTS_B = 3,
      // Select mux mode: ALT4 mux port: GPT6_COMPARE3 of instance: GPT6
      eALT4_gpt6_COMPARE3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO19 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO19 = 5,
      // Select mux mode: ALT6 mux port: LPSPI2_SIN of instance: LPSPI2
      eALT6_lpspi2_SDI = 6,
      // Select mux mode: ALT10 mux port: GPIO10_IO19 of instance: GPIO10
      eALT10_gpio10_IO19 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB210Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_10 : ftl::mmio::Register<
      0x400E81DCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB210Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB210Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB210Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB210Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB210Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB210Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SD_B2_11 SW MUX Control Register
  struct SwMuxCtlPadGpioSdB211Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: USDHC2_DATA7 of instance: USDHC2
      eALT0_usdhc2_DATA7 = 0,
      // Select mux mode: ALT1 mux port: FLEXSPI1_A_DATA03 of instance: FLEXSPI1
      eALT1_flexspi1_A_DATA3 = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_TX_CLK_IO of instance: ENET_1G
      eALT2_enet_1g_TX_CLK_IO = 2,
      // Select mux mode: ALT3 mux port: ENET_1G_REF_CLK of instance: ENET_1G
      eALT3_enet_1g_REF_CLK = 3,
      // Select mux mode: ALT4 mux port: GPT6_CLK of instance: GPT6
      eALT4_gpt6_CLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO20 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO20 = 5,
      // Select mux mode: ALT6 mux port: LPSPI2_PCS1 of instance: LPSPI2
      eALT6_lpspi2_PCS1 = 6,
      // Select mux mode: ALT10 mux port: GPIO10_IO20 of instance: GPIO10
      eALT10_gpio10_IO20 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SD_B2_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSdB211Fields

  struct SW_MUX_CTL_PAD_GPIO_SD_B2_11 : ftl::mmio::Register<
      0x400E81E0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSdB211Fields::MUX_MODE,
      SwMuxCtlPadGpioSdB211Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSdB211Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSdB211Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSdB211Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSdB211Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_00 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB100Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_CLK of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_CLK = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_EN of instance: ENET_1G
      eALT1_enet_1g_RX_EN = 1,
      // Select mux mode: ALT3 mux port: TMR1_TIMER0 of instance: TMR1
      eALT3_qtimer1_TIMER0 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT26 of instance: XBAR1
      eALT4_XBAR1_INOUT26 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO21 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO21 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_EN of instance: ENET_QOS
      eALT8_enet_qos_RX_EN = 8,
      // Select mux mode: ALT10 mux port: GPIO10_IO21 of instance: GPIO10
      eALT10_gpio10_IO21 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB100Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_00 : ftl::mmio::Register<
      0x400E81E4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB100Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB100Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB100Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB100Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB100Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB100Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_01 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB101Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_ENABLE of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_ENABLE = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_CLK of instance: ENET_1G
      eALT1_enet_1g_RX_CLK = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_RX_ER of instance: ENET_1G
      eALT2_enet_1g_RX_ER = 2,
      // Select mux mode: ALT3 mux port: TMR1_TIMER1 of instance: TMR1
      eALT3_qtimer1_TIMER1 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT27 of instance: XBAR1
      eALT4_XBAR1_INOUT27 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO22 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO22 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_CLK of instance: ENET_QOS
      eALT8_CCM_enet_qos_clock_generate_RX_CLK = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_RX_ER of instance: ENET_QOS
      eALT9_enet_qos_RX_ER = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO22 of instance: GPIO10
      eALT10_gpio10_IO22 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB101Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_01 : ftl::mmio::Register<
      0x400E81E8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB101Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB101Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB101Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB101Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB101Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB101Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_02 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB102Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_HSYNC of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_HSYNC = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_DATA00 of instance: ENET_1G
      eALT1_ENET_1G_RX_DATA0 = 1,
      // Select mux mode: ALT2 mux port: LPI2C3_SCL of instance: LPI2C3
      eALT2_lpi2c3_SCL = 2,
      // Select mux mode: ALT3 mux port: TMR1_TIMER2 of instance: TMR1
      eALT3_qtimer1_TIMER2 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT28 of instance: XBAR1
      eALT4_XBAR1_INOUT28 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO23 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO23 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA00 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA0 = 8,
      // Select mux mode: ALT9 mux port: LPUART1_TXD of instance: LPUART1
      eALT9_lpuart1_TX = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO23 of instance: GPIO10
      eALT10_gpio10_IO23 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB102Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_02 : ftl::mmio::Register<
      0x400E81ECu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB102Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB102Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB102Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB102Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB102Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB102Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_03 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB103Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_VSYNC of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_VSYNC = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_DATA01 of instance: ENET_1G
      eALT1_ENET_1G_RX_DATA1 = 1,
      // Select mux mode: ALT2 mux port: LPI2C3_SDA of instance: LPI2C3
      eALT2_lpi2c3_SDA = 2,
      // Select mux mode: ALT3 mux port: TMR2_TIMER0 of instance: TMR2
      eALT3_qtimer2_TIMER0 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT29 of instance: XBAR1
      eALT4_XBAR1_INOUT29 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO24 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO24 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA01 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA1 = 8,
      // Select mux mode: ALT9 mux port: LPUART1_RXD of instance: LPUART1
      eALT9_lpuart1_RX = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO24 of instance: GPIO10
      eALT10_gpio10_IO24 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB103Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_03 : ftl::mmio::Register<
      0x400E81F0u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB103Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB103Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB103Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB103Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB103Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB103Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_04 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB104Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA00 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA0 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_DATA02 of instance: ENET_1G
      eALT1_ENET_1G_RX_DATA2 = 1,
      // Select mux mode: ALT2 mux port: LPUART4_RXD of instance: LPUART4
      eALT2_lpuart4_RX = 2,
      // Select mux mode: ALT3 mux port: TMR2_TIMER1 of instance: TMR2
      eALT3_qtimer2_TIMER1 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT30 of instance: XBAR1
      eALT4_XBAR1_INOUT30 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO25 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO25 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA02 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA2 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_SCK of instance: LPSPI3
      eALT9_lpspi3_SCK = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO25 of instance: GPIO10
      eALT10_gpio10_IO25 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB104Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_04 : ftl::mmio::Register<
      0x400E81F4u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB104Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB104Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB104Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB104Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB104Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB104Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_05 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB105Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA01 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA1 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_RX_DATA03 of instance: ENET_1G
      eALT1_ENET_1G_RX_DATA3 = 1,
      // Select mux mode: ALT2 mux port: LPUART4_CTS_B of instance: LPUART4
      eALT2_lpuart4_CTS_B = 2,
      // Select mux mode: ALT3 mux port: TMR2_TIMER2 of instance: TMR2
      eALT3_qtimer2_TIMER2 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT31 of instance: XBAR1
      eALT4_XBAR1_INOUT31 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO26 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO26 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA03 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA3 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_SIN of instance: LPSPI3
      eALT9_lpspi3_SDI = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO26 of instance: GPIO10
      eALT10_gpio10_IO26 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB105Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_05 : ftl::mmio::Register<
      0x400E81F8u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB105Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB105Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB105Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB105Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB105Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB105Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_06 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB106Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA02 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA2 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_DATA03 of instance: ENET_1G
      eALT1_ENET_1G_TX_DATA3 = 1,
      // Select mux mode: ALT2 mux port: LPUART4_TXD of instance: LPUART4
      eALT2_lpuart4_TX = 2,
      // Select mux mode: ALT3 mux port: TMR3_TIMER0 of instance: TMR3
      eALT3_qtimer3_TIMER0 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT32 of instance: XBAR1
      eALT4_XBAR1_INOUT32 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO27 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO27 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG00 of instance: SRC
      eALT6_src_BT_CFG0 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA03 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA3 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_SOUT of instance: LPSPI3
      eALT9_lpspi3_SDO = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO27 of instance: GPIO10
      eALT10_gpio10_IO27 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB106Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_06 : ftl::mmio::Register<
      0x400E81FCu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB106Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB106Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB106Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB106Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB106Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB106Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_07 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB107Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA03 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA3 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_DATA02 of instance: ENET_1G
      eALT1_ENET_1G_TX_DATA2 = 1,
      // Select mux mode: ALT2 mux port: LPUART4_RTS_B of instance: LPUART4
      eALT2_lpuart4_RTS_B = 2,
      // Select mux mode: ALT3 mux port: TMR3_TIMER1 of instance: TMR3
      eALT3_qtimer3_TIMER1 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT33 of instance: XBAR1
      eALT4_XBAR1_INOUT33 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO28 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO28 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG01 of instance: SRC
      eALT6_src_BT_CFG1 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA02 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA2 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_PCS0 of instance: LPSPI3
      eALT9_lpspi3_PCS0 = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO28 of instance: GPIO10
      eALT10_gpio10_IO28 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB107Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_07 : ftl::mmio::Register<
      0x400E8200u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB107Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB107Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB107Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB107Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB107Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB107Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_08 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB108Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA04 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA4 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_DATA01 of instance: ENET_1G
      eALT1_ENET_1G_TX_DATA1 = 1,
      // Select mux mode: ALT2 mux port: USDHC1_CD_B of instance: USDHC1
      eALT2_usdhc1_CD_B = 2,
      // Select mux mode: ALT3 mux port: TMR3_TIMER2 of instance: TMR3
      eALT3_qtimer3_TIMER2 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT34 of instance: XBAR1
      eALT4_XBAR1_INOUT34 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO29 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO29 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG02 of instance: SRC
      eALT6_src_BT_CFG2 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA01 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA1 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_PCS1 of instance: LPSPI3
      eALT9_lpspi3_PCS1 = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO29 of instance: GPIO10
      eALT10_gpio10_IO29 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB108Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_08 : ftl::mmio::Register<
      0x400E8204u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB108Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB108Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB108Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB108Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB108Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB108Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_09 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB109Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA05 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA5 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_DATA00 of instance: ENET_1G
      eALT1_ENET_1G_TX_DATA0 = 1,
      // Select mux mode: ALT2 mux port: USDHC1_WP of instance: USDHC1
      eALT2_usdhc1_WP = 2,
      // Select mux mode: ALT3 mux port: TMR4_TIMER0 of instance: TMR4
      eALT3_qtimer4_TIMER0 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT35 of instance: XBAR1
      eALT4_XBAR1_INOUT35 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO30 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO30 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG03 of instance: SRC
      eALT6_src_BT_CFG3 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA00 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA0 = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_PCS2 of instance: LPSPI3
      eALT9_lpspi3_PCS2 = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO30 of instance: GPIO10
      eALT10_gpio10_IO30 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB109Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_09 : ftl::mmio::Register<
      0x400E8208u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB109Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB109Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB109Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB109Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB109Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB109Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_10 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB110Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA06 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA6 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_EN of instance: ENET_1G
      eALT1_enet_1g_TX_EN = 1,
      // Select mux mode: ALT2 mux port: USDHC1_RESET_B of instance: USDHC1
      eALT2_usdhc1_RESET_B = 2,
      // Select mux mode: ALT3 mux port: TMR4_TIMER1 of instance: TMR4
      eALT3_qtimer4_TIMER1 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT36 of instance: XBAR1
      eALT4_XBAR1_INOUT36 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX4_IO31 of instance: GPIO_MUX4
      eALT5_gpio_mux4_IO31 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG04 of instance: SRC
      eALT6_src_BT_CFG4 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_EN of instance: ENET_QOS
      eALT8_enet_qos_TX_EN = 8,
      // Select mux mode: ALT9 mux port: LPSPI3_PCS3 of instance: LPSPI3
      eALT9_lpspi3_PCS3 = 9,
      // Select mux mode: ALT10 mux port: GPIO10_IO31 of instance: GPIO10
      eALT10_gpio10_IO31 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB110Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_10 : ftl::mmio::Register<
      0x400E820Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB110Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB110Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB110Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB110Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB110Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB110Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B1_11 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB111Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA07 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA7 = 0,
      // Select mux mode: ALT1 mux port: ENET_1G_TX_CLK_IO of instance: ENET_1G
      eALT1_enet_1g_TX_CLK_IO = 1,
      // Select mux mode: ALT2 mux port: ENET_1G_REF_CLK of instance: ENET_1G
      eALT2_enet_1g_REF_CLK = 2,
      // Select mux mode: ALT3 mux port: TMR4_TIMER2 of instance: TMR4
      eALT3_qtimer4_TIMER2 = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT37 of instance: XBAR1
      eALT4_XBAR1_INOUT37 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO00 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO0 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG05 of instance: SRC
      eALT6_src_BT_CFG5 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_CLK of instance: ENET_QOS
      eALT8_CCM_enet_qos_clock_generate_TX_CLK = 8,
      // Select mux mode: ALT9 mux port: ENET_QOS_REF_CLK of instance: ENET_QOS
      eALT9_CCM_enet_qos_clock_generate_REF_CLK = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO00 of instance: GPIO11
      eALT10_gpio11_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B1_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB111Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B1_11 : ftl::mmio::Register<
      0x400E8210u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB111Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB111Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB111Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB111Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB111Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB111Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_00 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB200Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA08 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA8 = 0,
      // Select mux mode: ALT1 mux port: WDOG1_B of instance: WDOG1
      eALT1_WDOG1_B = 1,
      // Select mux mode: ALT2 mux port: MQS_RIGHT of instance: MQS
      eALT2_mqs_RIGHT = 2,
      // Select mux mode: ALT3 mux port: ENET_1G_TX_ER of instance: ENET_1G
      eALT3_enet_1g_TX_ER = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_DATA03 of instance SAI1 as input, and SAI1_RX_DATA01 of instance SAI1 as output
      eALT4_sai1_TX_DATA3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO01 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO1 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG06 of instance: SRC
      eALT6_src_BT_CFG6 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_ER of instance: ENET_QOS
      eALT8_enet_qos_TX_ER = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO01 of instance: GPIO11
      eALT10_gpio11_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB200Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_00 : ftl::mmio::Register<
      0x400E8214u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB200Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB200Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB200Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB200Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB200Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB200Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_01 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB201Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA09 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA9 = 0,
      // Select mux mode: ALT1 mux port: USDHC1_VSELECT of instance: USDHC1
      eALT1_usdhc1_VSELECT = 1,
      // Select mux mode: ALT2 mux port: MQS_LEFT of instance: MQS
      eALT2_mqs_LEFT = 2,
      // Select mux mode: ALT3 mux port: WDOG2_B of instance: WDOG2
      eALT3_WDOG2_B = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_DATA02 of instance SAI1 as input, and SAI1_RX_DATA2 of instance SAI1 as output
      eALT4_sai1_TX_DATA2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO02 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO2 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG07 of instance: SRC
      eALT6_src_BT_CFG7 = 6,
      // Select mux mode: ALT8 mux port: EWM_OUT_B of instance: EWM
      eALT8_EWM_OUT_B = 8,
      // Select mux mode: ALT9 mux port: CCM_ENET_REF_CLK_25M of instance: CCM
      eALT9_CCM_ENET_REF_CLK_25M = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO02 of instance: GPIO11
      eALT10_gpio11_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB201Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_01 : ftl::mmio::Register<
      0x400E8218u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB201Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB201Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB201Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB201Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB201Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB201Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_02 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB202Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA10 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA10 = 0,
      // Select mux mode: ALT1 mux port: ENET_TX_DATA00 of instance: ENET
      eALT1_ENET_TX_DATA0 = 1,
      // Select mux mode: ALT2 mux port: PIT1_TRIGGER3 of instance: PIT1
      eALT2_pit1_TRIGGER3 = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE00 of instance: ARM
      eALT3_ARM_TRACE0 = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_DATA01 of instance SAI1 as input or SAI1_RX_DATA3 of instance SAI as output
      eALT4_sai1_TX_DATA1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO03 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO3 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG08 of instance: SRC
      eALT6_src_BT_CFG8 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA00 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA0 = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO03 of instance: GPIO11
      eALT10_gpio11_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB202Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_02 : ftl::mmio::Register<
      0x400E821Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB202Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB202Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB202Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB202Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB202Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB202Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_03 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB203Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA11 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA11 = 0,
      // Select mux mode: ALT1 mux port: ENET_TX_DATA01 of instance: ENET
      eALT1_ENET_TX_DATA1 = 1,
      // Select mux mode: ALT2 mux port: PIT1_TRIGGER2 of instance: PIT1
      eALT2_pit1_TRIGGER2 = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE01 of instance: ARM
      eALT3_ARM_TRACE1 = 3,
      // Select mux mode: ALT4 mux port: SAI1_MCLK of instance: SAI1
      eALT4_sai1_MCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO04 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO4 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG09 of instance: SRC
      eALT6_src_BT_CFG9 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_DATA01 of instance: ENET_QOS
      eALT8_ENET_QOS_TX_DATA1 = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO04 of instance: GPIO11
      eALT10_gpio11_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB203Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_03 : ftl::mmio::Register<
      0x400E8220u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB203Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB203Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB203Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB203Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB203Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB203Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_04 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB204Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA12 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA12 = 0,
      // Select mux mode: ALT1 mux port: ENET_TX_EN of instance: ENET
      eALT1_enet_TX_EN = 1,
      // Select mux mode: ALT2 mux port: PIT1_TRIGGER1 of instance: PIT1
      eALT2_pit1_TRIGGER1 = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE02 of instance: ARM
      eALT3_ARM_TRACE2 = 3,
      // Select mux mode: ALT4 mux port: SAI1_RX_SYNC of instance: SAI1
      eALT4_sai1_RX_SYNC = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO05 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO5 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG10 of instance: SRC
      eALT6_src_BT_CFG10 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_EN of instance: ENET_QOS
      eALT8_enet_qos_TX_EN = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO05 of instance: GPIO11
      eALT10_gpio11_IO5 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB204Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_04 : ftl::mmio::Register<
      0x400E8224u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB204Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB204Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB204Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB204Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB204Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB204Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_05 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB205Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA13 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA13 = 0,
      // Select mux mode: ALT1 mux port: ENET_TX_CLK of instance: ENET
      eALT1_enet_TX_CLK = 1,
      // Select mux mode: ALT2 mux port: ENET_REF_CLK of instance: ENET
      eALT2_enet_REF_CLK = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE03 of instance: ARM
      eALT3_ARM_TRACE3 = 3,
      // Select mux mode: ALT4 mux port: SAI1_RX_BCLK of instance: SAI1
      eALT4_sai1_RX_BCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO06 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO6 = 5,
      // Select mux mode: ALT6 mux port: SRC_BT_CFG11 of instance: SRC
      eALT6_src_BT_CFG11 = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_TX_CLK of instance: ENET_QOS
      eALT8_CCM_enet_qos_clock_generate_TX_CLK = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO06 of instance: GPIO11
      eALT10_gpio11_IO6 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB205Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_05 : ftl::mmio::Register<
      0x400E8228u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB205Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB205Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB205Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB205Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB205Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB205Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_06 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB206Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA14 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA14 = 0,
      // Select mux mode: ALT1 mux port: ENET_RX_DATA00 of instance: ENET
      eALT1_ENET_RX_DATA0 = 1,
      // Select mux mode: ALT2 mux port: LPUART7_TXD of instance: LPUART7
      eALT2_lpuart7_TX = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE_CLK of instance: ARM
      eALT3_ARM_TRACE_CLK = 3,
      // Select mux mode: ALT4 mux port: SAI1_RX_DATA00 of instance: SAI1
      eALT4_sai1_RX_DATA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO07 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO7 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA00 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA0 = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO07 of instance: GPIO11
      eALT10_gpio11_IO7 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB206Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_06 : ftl::mmio::Register<
      0x400E822Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB206Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB206Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB206Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB206Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB206Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB206Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_07 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB207Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA15 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA15 = 0,
      // Select mux mode: ALT1 mux port: ENET_RX_DATA01 of instance: ENET
      eALT1_ENET_RX_DATA1 = 1,
      // Select mux mode: ALT2 mux port: LPUART7_RXD of instance: LPUART7
      eALT2_lpuart7_RX = 2,
      // Select mux mode: ALT3 mux port: ARM_TRACE_SWO of instance: ARM
      eALT3_ARM_TRACE_SWO = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_DATA00 of instance: SAI1
      eALT4_sai1_TX_DATA0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO08 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO8 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_DATA01 of instance: ENET_QOS
      eALT8_ENET_QOS_RX_DATA1 = 8,
      // Select mux mode: ALT10 mux port: GPIO11_IO08 of instance: GPIO11
      eALT10_gpio11_IO8 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB207Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_07 : ftl::mmio::Register<
      0x400E8230u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB207Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB207Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB207Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB207Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB207Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB207Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_08 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB208Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA16 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA16 = 0,
      // Select mux mode: ALT1 mux port: ENET_RX_EN of instance: ENET
      eALT1_enet_RX_EN = 1,
      // Select mux mode: ALT2 mux port: LPUART8_TXD of instance: LPUART8
      eALT2_lpuart8_TX = 2,
      // Select mux mode: ALT3 mux port: ARM_CM7_EVENTO of instance: CM7
      eALT3_cm7_imxrt_TXEV = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_BCLK of instance: SAI1
      eALT4_sai1_TX_BCLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO09 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO9 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_EN of instance: ENET_QOS
      eALT8_enet_qos_RX_EN = 8,
      // Select mux mode: ALT9 mux port: LPUART1_TXD of instance: LPUART1
      eALT9_lpuart1_TX = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO09 of instance: GPIO11
      eALT10_gpio11_IO9 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB208Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_08 : ftl::mmio::Register<
      0x400E8234u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB208Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB208Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB208Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB208Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB208Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB208Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_09 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB209Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA17 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA17 = 0,
      // Select mux mode: ALT1 mux port: ENET_RX_ER of instance: ENET
      eALT1_enet_RX_ER = 1,
      // Select mux mode: ALT2 mux port: LPUART8_RXD of instance: LPUART8
      eALT2_lpuart8_RX = 2,
      // Select mux mode: ALT3 mux port: ARM_CM7_EVENTI of instance: CM7
      eALT3_cm7_imxrt_RXEV = 3,
      // Select mux mode: ALT4 mux port: SAI1_TX_SYNC of instance: SAI1
      eALT4_sai1_TX_SYNC = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO10 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO10 = 5,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_ER of instance: ENET_QOS
      eALT8_enet_qos_RX_ER = 8,
      // Select mux mode: ALT9 mux port: LPUART1_RXD of instance: LPUART1
      eALT9_lpuart1_RX = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO10 of instance: GPIO11
      eALT10_gpio11_IO10 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB209Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_09 : ftl::mmio::Register<
      0x400E8238u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB209Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB209Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB209Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB209Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB209Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB209Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_10 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB210Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA18 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA18 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_IO of instance: EMVSIM2
      eALT1_EMVSIM2_TRXD = 1,
      // Select mux mode: ALT2 mux port: LPUART2_TXD of instance: LPUART2
      eALT2_lpuart2_TX = 2,
      // Select mux mode: ALT3 mux port: WDOG2_RESET_B_DEB of instance: WDOG2
      eALT3_WDOG2_RESET_B_DEB = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT38 of instance: XBAR1
      eALT4_XBAR1_INOUT38 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO11 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO11 = 5,
      // Select mux mode: ALT6 mux port: LPI2C3_SCL of instance: LPI2C3
      eALT6_lpi2c3_SCL = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_RX_ER of instance: ENET_QOS
      eALT8_enet_qos_RX_ER = 8,
      // Select mux mode: ALT9 mux port: SPDIF_IN of instance: SPDIF
      eALT9_spdif_IN = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO11 of instance: GPIO11
      eALT10_gpio11_IO11 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB210Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_10 : ftl::mmio::Register<
      0x400E823Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB210Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB210Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB210Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB210Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB210Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB210Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_11 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB211Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA19 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA19 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_CLK of instance: EMVSIM2
      eALT1_EMVSIM2_CLK = 1,
      // Select mux mode: ALT2 mux port: LPUART2_RXD of instance: LPUART2
      eALT2_lpuart2_RX = 2,
      // Select mux mode: ALT3 mux port: WDOG1_RESET_B_DEB of instance: WDOG1
      eALT3_WDOG1_RESET_B_DEB = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT39 of instance: XBAR1
      eALT4_XBAR1_INOUT39 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO12 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO12 = 5,
      // Select mux mode: ALT6 mux port: LPI2C3_SDA of instance: LPI2C3
      eALT6_lpi2c3_SDA = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_CRS of instance: ENET_QOS
      eALT8_enet_qos_CRS = 8,
      // Select mux mode: ALT9 mux port: SPDIF_OUT of instance: SPDIF
      eALT9_spdif_OUT = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO12 of instance: GPIO11
      eALT10_gpio11_IO12 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB211Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_11 : ftl::mmio::Register<
      0x400E8240u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB211Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB211Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB211Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB211Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB211Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB211Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_12 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB212Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA20 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA20 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_RST of instance: EMVSIM2
      eALT1_EMVSIM2_RST_B = 1,
      // Select mux mode: ALT2 mux port: FLEXCAN1_TX of instance: FLEXCAN1
      eALT2_can1_TX = 2,
      // Select mux mode: ALT3 mux port: LPUART2_CTS_B of instance: LPUART2
      eALT3_lpuart2_CTS_B = 3,
      // Select mux mode: ALT4 mux port: XBAR1_INOUT40 of instance: XBAR1
      eALT4_XBAR1_INOUT40 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO13 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO13 = 5,
      // Select mux mode: ALT6 mux port: LPI2C4_SCL of instance: LPI2C4
      eALT6_lpi2c4_SCL = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_COL of instance: ENET_QOS
      eALT8_enet_qos_COL = 8,
      // Select mux mode: ALT9 mux port: LPSPI4_SCK of instance: LPSPI4
      eALT9_lpspi4_SCK = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO13 of instance: GPIO11
      eALT10_gpio11_IO13 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_12
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB212Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_12 : ftl::mmio::Register<
      0x400E8244u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB212Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB212Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB212Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB212Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB212Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB212Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_13 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB213Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA21 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA21 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_SVEN of instance: EMVSIM2
      eALT1_EMVSIM2_SVEN = 1,
      // Select mux mode: ALT2 mux port: FLEXCAN1_RX of instance: FLEXCAN1
      eALT2_can1_RX = 2,
      // Select mux mode: ALT3 mux port: LPUART2_RTS_B of instance: LPUART2
      eALT3_lpuart2_RTS_B = 3,
      // Select mux mode: ALT4 mux port: ENET_REF_CLK of instance: ENET
      eALT4_enet_REF_CLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO14 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO14 = 5,
      // Select mux mode: ALT6 mux port: LPI2C4_SDA of instance: LPI2C4
      eALT6_lpi2c4_SDA = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_1588_EVENT0_OUT of instance: ENET_QOS
      eALT8_enet_qos_1588_EVENT0_OUT = 8,
      // Select mux mode: ALT9 mux port: LPSPI4_SIN of instance: LPSPI4
      eALT9_lpspi4_SDI = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO14 of instance: GPIO11
      eALT10_gpio11_IO14 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_13
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB213Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_13 : ftl::mmio::Register<
      0x400E8248u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB213Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB213Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB213Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB213Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB213Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB213Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_14 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB214Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA22 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA22 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_PD of instance: EMVSIM2
      eALT1_EMVSIM2_PD = 1,
      // Select mux mode: ALT2 mux port: WDOG2_B of instance: WDOG2
      eALT2_WDOG2_B = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_EXT_DCIC1 of instance: VIDEO_MUX
      eALT3_video_mux_EXT_DCIC1 = 3,
      // Select mux mode: ALT4 mux port: ENET_1G_REF_CLK of instance: ENET_1G
      eALT4_enet_1g_REF_CLK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO15 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO15 = 5,
      // Select mux mode: ALT6 mux port: FLEXCAN1_TX of instance: FLEXCAN1
      eALT6_can1_TX = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_1588_EVENT0_IN of instance: ENET_QOS
      eALT8_enet_qos_1588_EVENT0_IN = 8,
      // Select mux mode: ALT9 mux port: LPSPI4_SOUT of instance: LPSPI4
      eALT9_lpspi4_SDO = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO15 of instance: GPIO11
      eALT10_gpio11_IO15 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_14
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB214Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_14 : ftl::mmio::Register<
      0x400E824Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB214Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB214Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB214Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB214Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB214Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB214Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_DISP_B2_15 SW MUX Control Register
  struct SwMuxCtlPadGpioDispB215Fields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: VIDEO_MUX_LCDIF_DATA23 of instance: VIDEO_MUX
      eALT0_video_mux_LCDIF_DATA23 = 0,
      // Select mux mode: ALT1 mux port: EMVSIM2_POWER_FAIL of instance: EMVSIM2
      eALT1_EMVSIM2_POWER_FAIL = 1,
      // Select mux mode: ALT2 mux port: WDOG1_B of instance: WDOG1
      eALT2_WDOG1_B = 2,
      // Select mux mode: ALT3 mux port: VIDEO_MUX_EXT_DCIC2 of instance: VIDEO_MUX
      eALT3_video_mux_EXT_DCIC2 = 3,
      // Select mux mode: ALT4 mux port: PIT1_TRIGGER0 of instance: PIT1
      eALT4_pit1_TRIGGER0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX5_IO16 of instance: GPIO_MUX5
      eALT5_gpio_mux5_IO16 = 5,
      // Select mux mode: ALT6 mux port: FLEXCAN1_RX of instance: FLEXCAN1
      eALT6_can1_RX = 6,
      // Select mux mode: ALT8 mux port: ENET_QOS_1588_EVENT0_AUX_IN of instance: ENET_QOS
      eALT8_enet_qos_1588_EVENT0_AUX_IN = 8,
      // Select mux mode: ALT9 mux port: LPSPI4_PCS0 of instance: LPSPI4
      eALT9_lpspi4_PCS0 = 9,
      // Select mux mode: ALT10 mux port: GPIO11_IO16 of instance: GPIO11
      eALT10_gpio11_IO16 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_DISP_B2_15
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioDispB215Fields

  struct SW_MUX_CTL_PAD_GPIO_DISP_B2_15 : ftl::mmio::Register<
      0x400E8250u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioDispB215Fields::MUX_MODE,
      SwMuxCtlPadGpioDispB215Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioDispB215Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioDispB215Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioDispB215Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioDispB215Fields::SION;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_00 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB100Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB100Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_00 : ftl::mmio::Register<
      0x400E8254u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB100Fields::PDRV,
      SwPadCtlPadGpioEmcB100Fields::PULL,
      SwPadCtlPadGpioEmcB100Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB100Fields::DWP,
      SwPadCtlPadGpioEmcB100Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB100Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB100Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB100Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB100Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB100Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB100Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB100Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB100Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB100Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB100Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_01 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB101Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB101Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_01 : ftl::mmio::Register<
      0x400E8258u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB101Fields::PDRV,
      SwPadCtlPadGpioEmcB101Fields::PULL,
      SwPadCtlPadGpioEmcB101Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB101Fields::DWP,
      SwPadCtlPadGpioEmcB101Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB101Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB101Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB101Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB101Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB101Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB101Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB101Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB101Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB101Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB101Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_02 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB102Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB102Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_02 : ftl::mmio::Register<
      0x400E825Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB102Fields::PDRV,
      SwPadCtlPadGpioEmcB102Fields::PULL,
      SwPadCtlPadGpioEmcB102Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB102Fields::DWP,
      SwPadCtlPadGpioEmcB102Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB102Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB102Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB102Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB102Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB102Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB102Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB102Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB102Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB102Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB102Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_03 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB103Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB103Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_03 : ftl::mmio::Register<
      0x400E8260u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB103Fields::PDRV,
      SwPadCtlPadGpioEmcB103Fields::PULL,
      SwPadCtlPadGpioEmcB103Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB103Fields::DWP,
      SwPadCtlPadGpioEmcB103Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB103Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB103Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB103Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB103Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB103Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB103Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB103Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB103Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB103Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB103Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_04 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB104Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB104Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_04 : ftl::mmio::Register<
      0x400E8264u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB104Fields::PDRV,
      SwPadCtlPadGpioEmcB104Fields::PULL,
      SwPadCtlPadGpioEmcB104Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB104Fields::DWP,
      SwPadCtlPadGpioEmcB104Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB104Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB104Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB104Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB104Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB104Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB104Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB104Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB104Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB104Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB104Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_05 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB105Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB105Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_05 : ftl::mmio::Register<
      0x400E8268u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB105Fields::PDRV,
      SwPadCtlPadGpioEmcB105Fields::PULL,
      SwPadCtlPadGpioEmcB105Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB105Fields::DWP,
      SwPadCtlPadGpioEmcB105Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB105Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB105Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB105Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB105Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB105Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB105Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB105Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB105Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB105Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB105Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_06 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB106Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB106Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_06 : ftl::mmio::Register<
      0x400E826Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB106Fields::PDRV,
      SwPadCtlPadGpioEmcB106Fields::PULL,
      SwPadCtlPadGpioEmcB106Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB106Fields::DWP,
      SwPadCtlPadGpioEmcB106Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB106Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB106Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB106Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB106Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB106Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB106Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB106Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB106Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB106Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB106Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_07 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB107Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB107Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_07 : ftl::mmio::Register<
      0x400E8270u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB107Fields::PDRV,
      SwPadCtlPadGpioEmcB107Fields::PULL,
      SwPadCtlPadGpioEmcB107Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB107Fields::DWP,
      SwPadCtlPadGpioEmcB107Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB107Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB107Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB107Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB107Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB107Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB107Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB107Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB107Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB107Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB107Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_08 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB108Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB108Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_08 : ftl::mmio::Register<
      0x400E8274u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB108Fields::PDRV,
      SwPadCtlPadGpioEmcB108Fields::PULL,
      SwPadCtlPadGpioEmcB108Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB108Fields::DWP,
      SwPadCtlPadGpioEmcB108Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB108Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB108Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB108Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB108Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB108Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB108Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB108Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB108Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB108Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB108Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_09 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB109Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB109Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_09 : ftl::mmio::Register<
      0x400E8278u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB109Fields::PDRV,
      SwPadCtlPadGpioEmcB109Fields::PULL,
      SwPadCtlPadGpioEmcB109Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB109Fields::DWP,
      SwPadCtlPadGpioEmcB109Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB109Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB109Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB109Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB109Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB109Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB109Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB109Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB109Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB109Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB109Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_10 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB110Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB110Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_10 : ftl::mmio::Register<
      0x400E827Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB110Fields::PDRV,
      SwPadCtlPadGpioEmcB110Fields::PULL,
      SwPadCtlPadGpioEmcB110Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB110Fields::DWP,
      SwPadCtlPadGpioEmcB110Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB110Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB110Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB110Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB110Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB110Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB110Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB110Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB110Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB110Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB110Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_11 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB111Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB111Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_11 : ftl::mmio::Register<
      0x400E8280u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB111Fields::PDRV,
      SwPadCtlPadGpioEmcB111Fields::PULL,
      SwPadCtlPadGpioEmcB111Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB111Fields::DWP,
      SwPadCtlPadGpioEmcB111Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB111Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB111Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB111Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB111Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB111Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB111Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB111Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB111Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB111Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB111Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_12 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB112Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB112Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_12 : ftl::mmio::Register<
      0x400E8284u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB112Fields::PDRV,
      SwPadCtlPadGpioEmcB112Fields::PULL,
      SwPadCtlPadGpioEmcB112Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB112Fields::DWP,
      SwPadCtlPadGpioEmcB112Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB112Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB112Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB112Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB112Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB112Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB112Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB112Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB112Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB112Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB112Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_13 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB113Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB113Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_13 : ftl::mmio::Register<
      0x400E8288u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB113Fields::PDRV,
      SwPadCtlPadGpioEmcB113Fields::PULL,
      SwPadCtlPadGpioEmcB113Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB113Fields::DWP,
      SwPadCtlPadGpioEmcB113Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB113Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB113Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB113Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB113Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB113Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB113Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB113Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB113Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB113Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB113Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_14 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB114Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB114Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_14 : ftl::mmio::Register<
      0x400E828Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB114Fields::PDRV,
      SwPadCtlPadGpioEmcB114Fields::PULL,
      SwPadCtlPadGpioEmcB114Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB114Fields::DWP,
      SwPadCtlPadGpioEmcB114Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB114Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB114Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB114Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB114Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB114Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB114Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB114Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB114Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB114Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB114Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_15 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB115Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB115Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_15 : ftl::mmio::Register<
      0x400E8290u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB115Fields::PDRV,
      SwPadCtlPadGpioEmcB115Fields::PULL,
      SwPadCtlPadGpioEmcB115Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB115Fields::DWP,
      SwPadCtlPadGpioEmcB115Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB115Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB115Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB115Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB115Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB115Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB115Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB115Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB115Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB115Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB115Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_16 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB116Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB116Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_16 : ftl::mmio::Register<
      0x400E8294u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB116Fields::PDRV,
      SwPadCtlPadGpioEmcB116Fields::PULL,
      SwPadCtlPadGpioEmcB116Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB116Fields::DWP,
      SwPadCtlPadGpioEmcB116Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB116Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB116Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB116Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB116Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB116Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB116Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB116Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB116Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB116Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB116Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_17 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB117Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB117Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_17 : ftl::mmio::Register<
      0x400E8298u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB117Fields::PDRV,
      SwPadCtlPadGpioEmcB117Fields::PULL,
      SwPadCtlPadGpioEmcB117Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB117Fields::DWP,
      SwPadCtlPadGpioEmcB117Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB117Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB117Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB117Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB117Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB117Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB117Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB117Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB117Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB117Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB117Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_18 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB118Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB118Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_18 : ftl::mmio::Register<
      0x400E829Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB118Fields::PDRV,
      SwPadCtlPadGpioEmcB118Fields::PULL,
      SwPadCtlPadGpioEmcB118Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB118Fields::DWP,
      SwPadCtlPadGpioEmcB118Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB118Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB118Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB118Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB118Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB118Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB118Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB118Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB118Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB118Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB118Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_19 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB119Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB119Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_19 : ftl::mmio::Register<
      0x400E82A0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB119Fields::PDRV,
      SwPadCtlPadGpioEmcB119Fields::PULL,
      SwPadCtlPadGpioEmcB119Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB119Fields::DWP,
      SwPadCtlPadGpioEmcB119Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB119Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB119Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB119Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB119Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB119Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB119Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB119Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB119Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB119Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB119Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_20 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB120Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB120Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_20 : ftl::mmio::Register<
      0x400E82A4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB120Fields::PDRV,
      SwPadCtlPadGpioEmcB120Fields::PULL,
      SwPadCtlPadGpioEmcB120Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB120Fields::DWP,
      SwPadCtlPadGpioEmcB120Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB120Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB120Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB120Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB120Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB120Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB120Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB120Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB120Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB120Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB120Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_21 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB121Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB121Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_21 : ftl::mmio::Register<
      0x400E82A8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB121Fields::PDRV,
      SwPadCtlPadGpioEmcB121Fields::PULL,
      SwPadCtlPadGpioEmcB121Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB121Fields::DWP,
      SwPadCtlPadGpioEmcB121Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB121Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB121Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB121Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB121Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB121Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB121Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB121Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB121Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB121Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB121Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_22 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB122Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB122Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_22 : ftl::mmio::Register<
      0x400E82ACu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB122Fields::PDRV,
      SwPadCtlPadGpioEmcB122Fields::PULL,
      SwPadCtlPadGpioEmcB122Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB122Fields::DWP,
      SwPadCtlPadGpioEmcB122Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB122Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB122Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB122Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB122Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB122Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB122Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB122Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB122Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB122Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB122Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_23 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB123Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB123Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_23 : ftl::mmio::Register<
      0x400E82B0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB123Fields::PDRV,
      SwPadCtlPadGpioEmcB123Fields::PULL,
      SwPadCtlPadGpioEmcB123Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB123Fields::DWP,
      SwPadCtlPadGpioEmcB123Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB123Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB123Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB123Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB123Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB123Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB123Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB123Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB123Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB123Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB123Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_24 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB124Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB124Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_24 : ftl::mmio::Register<
      0x400E82B4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB124Fields::PDRV,
      SwPadCtlPadGpioEmcB124Fields::PULL,
      SwPadCtlPadGpioEmcB124Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB124Fields::DWP,
      SwPadCtlPadGpioEmcB124Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB124Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB124Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB124Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB124Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB124Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB124Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB124Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB124Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB124Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB124Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_25 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB125Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB125Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_25 : ftl::mmio::Register<
      0x400E82B8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB125Fields::PDRV,
      SwPadCtlPadGpioEmcB125Fields::PULL,
      SwPadCtlPadGpioEmcB125Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB125Fields::DWP,
      SwPadCtlPadGpioEmcB125Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB125Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB125Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB125Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB125Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB125Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB125Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB125Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB125Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB125Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB125Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_26 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB126Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB126Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_26 : ftl::mmio::Register<
      0x400E82BCu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB126Fields::PDRV,
      SwPadCtlPadGpioEmcB126Fields::PULL,
      SwPadCtlPadGpioEmcB126Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB126Fields::DWP,
      SwPadCtlPadGpioEmcB126Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB126Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB126Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB126Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB126Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB126Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB126Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB126Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB126Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB126Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB126Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_27 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB127Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB127Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_27 : ftl::mmio::Register<
      0x400E82C0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB127Fields::PDRV,
      SwPadCtlPadGpioEmcB127Fields::PULL,
      SwPadCtlPadGpioEmcB127Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB127Fields::DWP,
      SwPadCtlPadGpioEmcB127Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB127Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB127Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB127Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB127Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB127Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB127Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB127Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB127Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB127Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB127Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_28 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB128Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB128Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_28 : ftl::mmio::Register<
      0x400E82C4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB128Fields::PDRV,
      SwPadCtlPadGpioEmcB128Fields::PULL,
      SwPadCtlPadGpioEmcB128Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB128Fields::DWP,
      SwPadCtlPadGpioEmcB128Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB128Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB128Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB128Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB128Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB128Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB128Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB128Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB128Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB128Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB128Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_29 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB129Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB129Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_29 : ftl::mmio::Register<
      0x400E82C8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB129Fields::PDRV,
      SwPadCtlPadGpioEmcB129Fields::PULL,
      SwPadCtlPadGpioEmcB129Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB129Fields::DWP,
      SwPadCtlPadGpioEmcB129Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB129Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB129Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB129Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB129Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB129Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB129Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB129Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB129Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB129Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB129Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_30 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB130Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB130Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_30 : ftl::mmio::Register<
      0x400E82CCu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB130Fields::PDRV,
      SwPadCtlPadGpioEmcB130Fields::PULL,
      SwPadCtlPadGpioEmcB130Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB130Fields::DWP,
      SwPadCtlPadGpioEmcB130Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB130Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB130Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB130Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB130Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB130Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB130Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB130Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB130Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB130Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB130Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_31 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB131Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB131Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_31 : ftl::mmio::Register<
      0x400E82D0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB131Fields::PDRV,
      SwPadCtlPadGpioEmcB131Fields::PULL,
      SwPadCtlPadGpioEmcB131Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB131Fields::DWP,
      SwPadCtlPadGpioEmcB131Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB131Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB131Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB131Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB131Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB131Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB131Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB131Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB131Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB131Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB131Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_32 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB132Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB132Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_32 : ftl::mmio::Register<
      0x400E82D4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB132Fields::PDRV,
      SwPadCtlPadGpioEmcB132Fields::PULL,
      SwPadCtlPadGpioEmcB132Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB132Fields::DWP,
      SwPadCtlPadGpioEmcB132Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB132Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB132Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB132Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB132Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB132Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB132Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB132Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB132Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB132Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB132Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_33 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB133Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB133Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_33 : ftl::mmio::Register<
      0x400E82D8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB133Fields::PDRV,
      SwPadCtlPadGpioEmcB133Fields::PULL,
      SwPadCtlPadGpioEmcB133Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB133Fields::DWP,
      SwPadCtlPadGpioEmcB133Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB133Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB133Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB133Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB133Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB133Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB133Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB133Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB133Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB133Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB133Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_34 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB134Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB134Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_34 : ftl::mmio::Register<
      0x400E82DCu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB134Fields::PDRV,
      SwPadCtlPadGpioEmcB134Fields::PULL,
      SwPadCtlPadGpioEmcB134Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB134Fields::DWP,
      SwPadCtlPadGpioEmcB134Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB134Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB134Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB134Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB134Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB134Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB134Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB134Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB134Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB134Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB134Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_35 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB135Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB135Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_35 : ftl::mmio::Register<
      0x400E82E0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB135Fields::PDRV,
      SwPadCtlPadGpioEmcB135Fields::PULL,
      SwPadCtlPadGpioEmcB135Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB135Fields::DWP,
      SwPadCtlPadGpioEmcB135Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB135Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB135Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB135Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB135Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB135Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB135Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB135Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB135Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB135Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB135Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_36 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB136Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB136Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_36 : ftl::mmio::Register<
      0x400E82E4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB136Fields::PDRV,
      SwPadCtlPadGpioEmcB136Fields::PULL,
      SwPadCtlPadGpioEmcB136Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB136Fields::DWP,
      SwPadCtlPadGpioEmcB136Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB136Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB136Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB136Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB136Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB136Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB136Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB136Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB136Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB136Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB136Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_37 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB137Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB137Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_37 : ftl::mmio::Register<
      0x400E82E8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB137Fields::PDRV,
      SwPadCtlPadGpioEmcB137Fields::PULL,
      SwPadCtlPadGpioEmcB137Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB137Fields::DWP,
      SwPadCtlPadGpioEmcB137Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB137Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB137Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB137Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB137Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB137Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB137Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB137Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB137Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB137Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB137Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_38 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB138Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB138Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_38 : ftl::mmio::Register<
      0x400E82ECu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB138Fields::PDRV,
      SwPadCtlPadGpioEmcB138Fields::PULL,
      SwPadCtlPadGpioEmcB138Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB138Fields::DWP,
      SwPadCtlPadGpioEmcB138Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB138Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB138Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB138Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB138Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB138Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB138Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB138Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB138Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB138Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB138Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_39 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB139Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB139Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_39 : ftl::mmio::Register<
      0x400E82F0u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB139Fields::PDRV,
      SwPadCtlPadGpioEmcB139Fields::PULL,
      SwPadCtlPadGpioEmcB139Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB139Fields::DWP,
      SwPadCtlPadGpioEmcB139Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB139Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB139Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB139Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB139Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB139Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB139Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB139Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB139Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB139Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB139Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_40 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB140Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB140Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_40 : ftl::mmio::Register<
      0x400E82F4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB140Fields::PDRV,
      SwPadCtlPadGpioEmcB140Fields::PULL,
      SwPadCtlPadGpioEmcB140Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB140Fields::DWP,
      SwPadCtlPadGpioEmcB140Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB140Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB140Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB140Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB140Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB140Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB140Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB140Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB140Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB140Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB140Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B1_41 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB141Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB141Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B1_41 : ftl::mmio::Register<
      0x400E82F8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB141Fields::PDRV,
      SwPadCtlPadGpioEmcB141Fields::PULL,
      SwPadCtlPadGpioEmcB141Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB141Fields::DWP,
      SwPadCtlPadGpioEmcB141Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB141Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB141Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB141Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB141Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB141Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB141Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB141Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB141Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB141Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB141Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_00 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB200Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB200Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_00 : ftl::mmio::Register<
      0x400E82FCu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB200Fields::PDRV,
      SwPadCtlPadGpioEmcB200Fields::PULL,
      SwPadCtlPadGpioEmcB200Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB200Fields::DWP,
      SwPadCtlPadGpioEmcB200Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB200Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB200Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB200Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB200Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB200Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB200Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB200Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB200Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB200Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB200Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_01 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB201Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB201Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_01 : ftl::mmio::Register<
      0x400E8300u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB201Fields::PDRV,
      SwPadCtlPadGpioEmcB201Fields::PULL,
      SwPadCtlPadGpioEmcB201Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB201Fields::DWP,
      SwPadCtlPadGpioEmcB201Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB201Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB201Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB201Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB201Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB201Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB201Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB201Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB201Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB201Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB201Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_02 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB202Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB202Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_02 : ftl::mmio::Register<
      0x400E8304u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB202Fields::PDRV,
      SwPadCtlPadGpioEmcB202Fields::PULL,
      SwPadCtlPadGpioEmcB202Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB202Fields::DWP,
      SwPadCtlPadGpioEmcB202Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB202Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB202Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB202Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB202Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB202Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB202Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB202Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB202Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB202Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB202Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_03 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB203Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB203Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_03 : ftl::mmio::Register<
      0x400E8308u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB203Fields::PDRV,
      SwPadCtlPadGpioEmcB203Fields::PULL,
      SwPadCtlPadGpioEmcB203Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB203Fields::DWP,
      SwPadCtlPadGpioEmcB203Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB203Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB203Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB203Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB203Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB203Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB203Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB203Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB203Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB203Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB203Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_04 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB204Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB204Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_04 : ftl::mmio::Register<
      0x400E830Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB204Fields::PDRV,
      SwPadCtlPadGpioEmcB204Fields::PULL,
      SwPadCtlPadGpioEmcB204Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB204Fields::DWP,
      SwPadCtlPadGpioEmcB204Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB204Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB204Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB204Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB204Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB204Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB204Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB204Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB204Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB204Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB204Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_05 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB205Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB205Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_05 : ftl::mmio::Register<
      0x400E8310u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB205Fields::PDRV,
      SwPadCtlPadGpioEmcB205Fields::PULL,
      SwPadCtlPadGpioEmcB205Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB205Fields::DWP,
      SwPadCtlPadGpioEmcB205Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB205Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB205Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB205Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB205Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB205Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB205Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB205Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB205Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB205Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB205Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_06 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB206Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB206Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_06 : ftl::mmio::Register<
      0x400E8314u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB206Fields::PDRV,
      SwPadCtlPadGpioEmcB206Fields::PULL,
      SwPadCtlPadGpioEmcB206Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB206Fields::DWP,
      SwPadCtlPadGpioEmcB206Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB206Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB206Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB206Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB206Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB206Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB206Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB206Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB206Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB206Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB206Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_07 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB207Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB207Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_07 : ftl::mmio::Register<
      0x400E8318u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB207Fields::PDRV,
      SwPadCtlPadGpioEmcB207Fields::PULL,
      SwPadCtlPadGpioEmcB207Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB207Fields::DWP,
      SwPadCtlPadGpioEmcB207Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB207Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB207Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB207Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB207Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB207Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB207Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB207Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB207Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB207Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB207Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_08 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB208Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB208Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_08 : ftl::mmio::Register<
      0x400E831Cu,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB208Fields::PDRV,
      SwPadCtlPadGpioEmcB208Fields::PULL,
      SwPadCtlPadGpioEmcB208Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB208Fields::DWP,
      SwPadCtlPadGpioEmcB208Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB208Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB208Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB208Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB208Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB208Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB208Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB208Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB208Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB208Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB208Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_09 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB209Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB209Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_09 : ftl::mmio::Register<
      0x400E8320u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB209Fields::PDRV,
      SwPadCtlPadGpioEmcB209Fields::PULL,
      SwPadCtlPadGpioEmcB209Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB209Fields::DWP,
      SwPadCtlPadGpioEmcB209Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB209Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB209Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB209Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB209Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB209Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB209Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB209Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB209Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB209Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB209Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_10 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB210Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB210Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_10 : ftl::mmio::Register<
      0x400E8324u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB210Fields::PDRV,
      SwPadCtlPadGpioEmcB210Fields::PULL,
      SwPadCtlPadGpioEmcB210Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB210Fields::DWP,
      SwPadCtlPadGpioEmcB210Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB210Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB210Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB210Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB210Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB210Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB210Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB210Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB210Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB210Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB210Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_11 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB211Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB211Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_11 : ftl::mmio::Register<
      0x400E8328u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB211Fields::PDRV,
      SwPadCtlPadGpioEmcB211Fields::PULL,
      SwPadCtlPadGpioEmcB211Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB211Fields::DWP,
      SwPadCtlPadGpioEmcB211Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB211Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB211Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB211Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB211Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB211Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB211Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB211Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB211Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB211Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB211Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_12 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB212Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB212Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_12 : ftl::mmio::Register<
      0x400E832Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB212Fields::PDRV,
      SwPadCtlPadGpioEmcB212Fields::PULL,
      SwPadCtlPadGpioEmcB212Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB212Fields::DWP,
      SwPadCtlPadGpioEmcB212Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB212Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB212Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB212Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB212Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB212Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB212Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB212Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB212Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB212Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB212Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_13 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB213Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB213Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_13 : ftl::mmio::Register<
      0x400E8330u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB213Fields::PDRV,
      SwPadCtlPadGpioEmcB213Fields::PULL,
      SwPadCtlPadGpioEmcB213Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB213Fields::DWP,
      SwPadCtlPadGpioEmcB213Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB213Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB213Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB213Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB213Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB213Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB213Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB213Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB213Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB213Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB213Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_14 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB214Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB214Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_14 : ftl::mmio::Register<
      0x400E8334u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB214Fields::PDRV,
      SwPadCtlPadGpioEmcB214Fields::PULL,
      SwPadCtlPadGpioEmcB214Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB214Fields::DWP,
      SwPadCtlPadGpioEmcB214Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB214Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB214Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB214Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB214Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB214Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB214Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB214Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB214Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB214Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB214Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_15 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB215Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB215Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_15 : ftl::mmio::Register<
      0x400E8338u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB215Fields::PDRV,
      SwPadCtlPadGpioEmcB215Fields::PULL,
      SwPadCtlPadGpioEmcB215Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB215Fields::DWP,
      SwPadCtlPadGpioEmcB215Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB215Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB215Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB215Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB215Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB215Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB215Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB215Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB215Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB215Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB215Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_16 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB216Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB216Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_16 : ftl::mmio::Register<
      0x400E833Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB216Fields::PDRV,
      SwPadCtlPadGpioEmcB216Fields::PULL,
      SwPadCtlPadGpioEmcB216Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB216Fields::DWP,
      SwPadCtlPadGpioEmcB216Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB216Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB216Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB216Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB216Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB216Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB216Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB216Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB216Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB216Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB216Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_17 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB217Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB217Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_17 : ftl::mmio::Register<
      0x400E8340u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB217Fields::PDRV,
      SwPadCtlPadGpioEmcB217Fields::PULL,
      SwPadCtlPadGpioEmcB217Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB217Fields::DWP,
      SwPadCtlPadGpioEmcB217Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB217Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB217Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB217Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB217Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB217Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB217Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB217Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB217Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB217Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB217Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_18 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB218Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB218Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_18 : ftl::mmio::Register<
      0x400E8344u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB218Fields::PDRV,
      SwPadCtlPadGpioEmcB218Fields::PULL,
      SwPadCtlPadGpioEmcB218Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB218Fields::DWP,
      SwPadCtlPadGpioEmcB218Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB218Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB218Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB218Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB218Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB218Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB218Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB218Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB218Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB218Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB218Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_19 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB219Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB219Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_19 : ftl::mmio::Register<
      0x400E8348u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB219Fields::PDRV,
      SwPadCtlPadGpioEmcB219Fields::PULL,
      SwPadCtlPadGpioEmcB219Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB219Fields::DWP,
      SwPadCtlPadGpioEmcB219Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB219Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB219Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB219Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB219Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB219Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB219Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB219Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB219Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB219Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB219Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_EMC_B2_20 SW PAD Control Register
  struct SwPadCtlPadGpioEmcB220Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioEmcB220Fields

  struct SW_PAD_CTL_PAD_GPIO_EMC_B2_20 : ftl::mmio::Register<
      0x400E834Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioEmcB220Fields::PDRV,
      SwPadCtlPadGpioEmcB220Fields::PULL,
      SwPadCtlPadGpioEmcB220Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioEmcB220Fields::DWP,
      SwPadCtlPadGpioEmcB220Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioEmcB220Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioEmcB220Fields::ePULL;
    using eODE = SwPadCtlPadGpioEmcB220Fields::eODE;
    using eDWP = SwPadCtlPadGpioEmcB220Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioEmcB220Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioEmcB220Fields::PDRV;
    using PULL = SwPadCtlPadGpioEmcB220Fields::PULL;
    using ODE = SwPadCtlPadGpioEmcB220Fields::ODE;
    using DWP = SwPadCtlPadGpioEmcB220Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioEmcB220Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_00 SW PAD Control Register
  struct SwPadCtlPadGpioAd00Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd00Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_00 : ftl::mmio::Register<
      0x400E8350u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd00Fields::SRE,
      SwPadCtlPadGpioAd00Fields::DSE,
      SwPadCtlPadGpioAd00Fields::PUE,
      SwPadCtlPadGpioAd00Fields::PUS,
      SwPadCtlPadGpioAd00Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd00Fields::DWP,
      SwPadCtlPadGpioAd00Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd00Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd00Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd00Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd00Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd00Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd00Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd00Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd00Fields::SRE;
    using DSE = SwPadCtlPadGpioAd00Fields::DSE;
    using PUE = SwPadCtlPadGpioAd00Fields::PUE;
    using PUS = SwPadCtlPadGpioAd00Fields::PUS;
    using ODE = SwPadCtlPadGpioAd00Fields::ODE;
    using DWP = SwPadCtlPadGpioAd00Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd00Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_01 SW PAD Control Register
  struct SwPadCtlPadGpioAd01Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd01Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_01 : ftl::mmio::Register<
      0x400E8354u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd01Fields::SRE,
      SwPadCtlPadGpioAd01Fields::DSE,
      SwPadCtlPadGpioAd01Fields::PUE,
      SwPadCtlPadGpioAd01Fields::PUS,
      SwPadCtlPadGpioAd01Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd01Fields::DWP,
      SwPadCtlPadGpioAd01Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd01Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd01Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd01Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd01Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd01Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd01Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd01Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd01Fields::SRE;
    using DSE = SwPadCtlPadGpioAd01Fields::DSE;
    using PUE = SwPadCtlPadGpioAd01Fields::PUE;
    using PUS = SwPadCtlPadGpioAd01Fields::PUS;
    using ODE = SwPadCtlPadGpioAd01Fields::ODE;
    using DWP = SwPadCtlPadGpioAd01Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd01Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_02 SW PAD Control Register
  struct SwPadCtlPadGpioAd02Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd02Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_02 : ftl::mmio::Register<
      0x400E8358u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd02Fields::SRE,
      SwPadCtlPadGpioAd02Fields::DSE,
      SwPadCtlPadGpioAd02Fields::PUE,
      SwPadCtlPadGpioAd02Fields::PUS,
      SwPadCtlPadGpioAd02Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd02Fields::DWP,
      SwPadCtlPadGpioAd02Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd02Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd02Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd02Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd02Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd02Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd02Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd02Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd02Fields::SRE;
    using DSE = SwPadCtlPadGpioAd02Fields::DSE;
    using PUE = SwPadCtlPadGpioAd02Fields::PUE;
    using PUS = SwPadCtlPadGpioAd02Fields::PUS;
    using ODE = SwPadCtlPadGpioAd02Fields::ODE;
    using DWP = SwPadCtlPadGpioAd02Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd02Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_03 SW PAD Control Register
  struct SwPadCtlPadGpioAd03Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd03Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_03 : ftl::mmio::Register<
      0x400E835Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd03Fields::SRE,
      SwPadCtlPadGpioAd03Fields::DSE,
      SwPadCtlPadGpioAd03Fields::PUE,
      SwPadCtlPadGpioAd03Fields::PUS,
      SwPadCtlPadGpioAd03Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd03Fields::DWP,
      SwPadCtlPadGpioAd03Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd03Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd03Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd03Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd03Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd03Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd03Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd03Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd03Fields::SRE;
    using DSE = SwPadCtlPadGpioAd03Fields::DSE;
    using PUE = SwPadCtlPadGpioAd03Fields::PUE;
    using PUS = SwPadCtlPadGpioAd03Fields::PUS;
    using ODE = SwPadCtlPadGpioAd03Fields::ODE;
    using DWP = SwPadCtlPadGpioAd03Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd03Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_04 SW PAD Control Register
  struct SwPadCtlPadGpioAd04Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd04Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_04 : ftl::mmio::Register<
      0x400E8360u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd04Fields::SRE,
      SwPadCtlPadGpioAd04Fields::DSE,
      SwPadCtlPadGpioAd04Fields::PUE,
      SwPadCtlPadGpioAd04Fields::PUS,
      SwPadCtlPadGpioAd04Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd04Fields::DWP,
      SwPadCtlPadGpioAd04Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd04Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd04Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd04Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd04Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd04Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd04Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd04Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd04Fields::SRE;
    using DSE = SwPadCtlPadGpioAd04Fields::DSE;
    using PUE = SwPadCtlPadGpioAd04Fields::PUE;
    using PUS = SwPadCtlPadGpioAd04Fields::PUS;
    using ODE = SwPadCtlPadGpioAd04Fields::ODE;
    using DWP = SwPadCtlPadGpioAd04Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd04Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_05 SW PAD Control Register
  struct SwPadCtlPadGpioAd05Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd05Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_05 : ftl::mmio::Register<
      0x400E8364u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd05Fields::SRE,
      SwPadCtlPadGpioAd05Fields::DSE,
      SwPadCtlPadGpioAd05Fields::PUE,
      SwPadCtlPadGpioAd05Fields::PUS,
      SwPadCtlPadGpioAd05Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd05Fields::DWP,
      SwPadCtlPadGpioAd05Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd05Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd05Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd05Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd05Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd05Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd05Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd05Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd05Fields::SRE;
    using DSE = SwPadCtlPadGpioAd05Fields::DSE;
    using PUE = SwPadCtlPadGpioAd05Fields::PUE;
    using PUS = SwPadCtlPadGpioAd05Fields::PUS;
    using ODE = SwPadCtlPadGpioAd05Fields::ODE;
    using DWP = SwPadCtlPadGpioAd05Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd05Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_06 SW PAD Control Register
  struct SwPadCtlPadGpioAd06Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd06Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_06 : ftl::mmio::Register<
      0x400E8368u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd06Fields::SRE,
      SwPadCtlPadGpioAd06Fields::DSE,
      SwPadCtlPadGpioAd06Fields::PUE,
      SwPadCtlPadGpioAd06Fields::PUS,
      SwPadCtlPadGpioAd06Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd06Fields::DWP,
      SwPadCtlPadGpioAd06Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd06Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd06Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd06Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd06Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd06Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd06Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd06Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd06Fields::SRE;
    using DSE = SwPadCtlPadGpioAd06Fields::DSE;
    using PUE = SwPadCtlPadGpioAd06Fields::PUE;
    using PUS = SwPadCtlPadGpioAd06Fields::PUS;
    using ODE = SwPadCtlPadGpioAd06Fields::ODE;
    using DWP = SwPadCtlPadGpioAd06Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd06Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_07 SW PAD Control Register
  struct SwPadCtlPadGpioAd07Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd07Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_07 : ftl::mmio::Register<
      0x400E836Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd07Fields::SRE,
      SwPadCtlPadGpioAd07Fields::DSE,
      SwPadCtlPadGpioAd07Fields::PUE,
      SwPadCtlPadGpioAd07Fields::PUS,
      SwPadCtlPadGpioAd07Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd07Fields::DWP,
      SwPadCtlPadGpioAd07Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd07Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd07Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd07Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd07Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd07Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd07Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd07Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd07Fields::SRE;
    using DSE = SwPadCtlPadGpioAd07Fields::DSE;
    using PUE = SwPadCtlPadGpioAd07Fields::PUE;
    using PUS = SwPadCtlPadGpioAd07Fields::PUS;
    using ODE = SwPadCtlPadGpioAd07Fields::ODE;
    using DWP = SwPadCtlPadGpioAd07Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd07Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_08 SW PAD Control Register
  struct SwPadCtlPadGpioAd08Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd08Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_08 : ftl::mmio::Register<
      0x400E8370u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd08Fields::SRE,
      SwPadCtlPadGpioAd08Fields::DSE,
      SwPadCtlPadGpioAd08Fields::PUE,
      SwPadCtlPadGpioAd08Fields::PUS,
      SwPadCtlPadGpioAd08Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd08Fields::DWP,
      SwPadCtlPadGpioAd08Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd08Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd08Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd08Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd08Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd08Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd08Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd08Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd08Fields::SRE;
    using DSE = SwPadCtlPadGpioAd08Fields::DSE;
    using PUE = SwPadCtlPadGpioAd08Fields::PUE;
    using PUS = SwPadCtlPadGpioAd08Fields::PUS;
    using ODE = SwPadCtlPadGpioAd08Fields::ODE;
    using DWP = SwPadCtlPadGpioAd08Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd08Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_09 SW PAD Control Register
  struct SwPadCtlPadGpioAd09Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd09Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_09 : ftl::mmio::Register<
      0x400E8374u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd09Fields::SRE,
      SwPadCtlPadGpioAd09Fields::DSE,
      SwPadCtlPadGpioAd09Fields::PUE,
      SwPadCtlPadGpioAd09Fields::PUS,
      SwPadCtlPadGpioAd09Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd09Fields::DWP,
      SwPadCtlPadGpioAd09Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd09Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd09Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd09Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd09Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd09Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd09Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd09Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd09Fields::SRE;
    using DSE = SwPadCtlPadGpioAd09Fields::DSE;
    using PUE = SwPadCtlPadGpioAd09Fields::PUE;
    using PUS = SwPadCtlPadGpioAd09Fields::PUS;
    using ODE = SwPadCtlPadGpioAd09Fields::ODE;
    using DWP = SwPadCtlPadGpioAd09Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd09Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_10 SW PAD Control Register
  struct SwPadCtlPadGpioAd10Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd10Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_10 : ftl::mmio::Register<
      0x400E8378u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd10Fields::SRE,
      SwPadCtlPadGpioAd10Fields::DSE,
      SwPadCtlPadGpioAd10Fields::PUE,
      SwPadCtlPadGpioAd10Fields::PUS,
      SwPadCtlPadGpioAd10Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd10Fields::DWP,
      SwPadCtlPadGpioAd10Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd10Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd10Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd10Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd10Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd10Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd10Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd10Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd10Fields::SRE;
    using DSE = SwPadCtlPadGpioAd10Fields::DSE;
    using PUE = SwPadCtlPadGpioAd10Fields::PUE;
    using PUS = SwPadCtlPadGpioAd10Fields::PUS;
    using ODE = SwPadCtlPadGpioAd10Fields::ODE;
    using DWP = SwPadCtlPadGpioAd10Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd10Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_11 SW PAD Control Register
  struct SwPadCtlPadGpioAd11Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd11Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_11 : ftl::mmio::Register<
      0x400E837Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd11Fields::SRE,
      SwPadCtlPadGpioAd11Fields::DSE,
      SwPadCtlPadGpioAd11Fields::PUE,
      SwPadCtlPadGpioAd11Fields::PUS,
      SwPadCtlPadGpioAd11Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd11Fields::DWP,
      SwPadCtlPadGpioAd11Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd11Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd11Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd11Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd11Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd11Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd11Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd11Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd11Fields::SRE;
    using DSE = SwPadCtlPadGpioAd11Fields::DSE;
    using PUE = SwPadCtlPadGpioAd11Fields::PUE;
    using PUS = SwPadCtlPadGpioAd11Fields::PUS;
    using ODE = SwPadCtlPadGpioAd11Fields::ODE;
    using DWP = SwPadCtlPadGpioAd11Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd11Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_12 SW PAD Control Register
  struct SwPadCtlPadGpioAd12Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd12Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_12 : ftl::mmio::Register<
      0x400E8380u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd12Fields::SRE,
      SwPadCtlPadGpioAd12Fields::DSE,
      SwPadCtlPadGpioAd12Fields::PUE,
      SwPadCtlPadGpioAd12Fields::PUS,
      SwPadCtlPadGpioAd12Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd12Fields::DWP,
      SwPadCtlPadGpioAd12Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd12Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd12Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd12Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd12Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd12Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd12Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd12Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd12Fields::SRE;
    using DSE = SwPadCtlPadGpioAd12Fields::DSE;
    using PUE = SwPadCtlPadGpioAd12Fields::PUE;
    using PUS = SwPadCtlPadGpioAd12Fields::PUS;
    using ODE = SwPadCtlPadGpioAd12Fields::ODE;
    using DWP = SwPadCtlPadGpioAd12Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd12Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_13 SW PAD Control Register
  struct SwPadCtlPadGpioAd13Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd13Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_13 : ftl::mmio::Register<
      0x400E8384u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd13Fields::SRE,
      SwPadCtlPadGpioAd13Fields::DSE,
      SwPadCtlPadGpioAd13Fields::PUE,
      SwPadCtlPadGpioAd13Fields::PUS,
      SwPadCtlPadGpioAd13Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd13Fields::DWP,
      SwPadCtlPadGpioAd13Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd13Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd13Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd13Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd13Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd13Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd13Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd13Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd13Fields::SRE;
    using DSE = SwPadCtlPadGpioAd13Fields::DSE;
    using PUE = SwPadCtlPadGpioAd13Fields::PUE;
    using PUS = SwPadCtlPadGpioAd13Fields::PUS;
    using ODE = SwPadCtlPadGpioAd13Fields::ODE;
    using DWP = SwPadCtlPadGpioAd13Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd13Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_14 SW PAD Control Register
  struct SwPadCtlPadGpioAd14Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd14Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_14 : ftl::mmio::Register<
      0x400E8388u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd14Fields::SRE,
      SwPadCtlPadGpioAd14Fields::DSE,
      SwPadCtlPadGpioAd14Fields::PUE,
      SwPadCtlPadGpioAd14Fields::PUS,
      SwPadCtlPadGpioAd14Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd14Fields::DWP,
      SwPadCtlPadGpioAd14Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd14Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd14Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd14Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd14Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd14Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd14Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd14Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd14Fields::SRE;
    using DSE = SwPadCtlPadGpioAd14Fields::DSE;
    using PUE = SwPadCtlPadGpioAd14Fields::PUE;
    using PUS = SwPadCtlPadGpioAd14Fields::PUS;
    using ODE = SwPadCtlPadGpioAd14Fields::ODE;
    using DWP = SwPadCtlPadGpioAd14Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd14Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_15 SW PAD Control Register
  struct SwPadCtlPadGpioAd15Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd15Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_15 : ftl::mmio::Register<
      0x400E838Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd15Fields::SRE,
      SwPadCtlPadGpioAd15Fields::DSE,
      SwPadCtlPadGpioAd15Fields::PUE,
      SwPadCtlPadGpioAd15Fields::PUS,
      SwPadCtlPadGpioAd15Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd15Fields::DWP,
      SwPadCtlPadGpioAd15Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd15Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd15Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd15Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd15Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd15Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd15Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd15Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd15Fields::SRE;
    using DSE = SwPadCtlPadGpioAd15Fields::DSE;
    using PUE = SwPadCtlPadGpioAd15Fields::PUE;
    using PUS = SwPadCtlPadGpioAd15Fields::PUS;
    using ODE = SwPadCtlPadGpioAd15Fields::ODE;
    using DWP = SwPadCtlPadGpioAd15Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd15Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_16 SW PAD Control Register
  struct SwPadCtlPadGpioAd16Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd16Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_16 : ftl::mmio::Register<
      0x400E8390u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd16Fields::SRE,
      SwPadCtlPadGpioAd16Fields::DSE,
      SwPadCtlPadGpioAd16Fields::PUE,
      SwPadCtlPadGpioAd16Fields::PUS,
      SwPadCtlPadGpioAd16Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd16Fields::DWP,
      SwPadCtlPadGpioAd16Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd16Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd16Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd16Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd16Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd16Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd16Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd16Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd16Fields::SRE;
    using DSE = SwPadCtlPadGpioAd16Fields::DSE;
    using PUE = SwPadCtlPadGpioAd16Fields::PUE;
    using PUS = SwPadCtlPadGpioAd16Fields::PUS;
    using ODE = SwPadCtlPadGpioAd16Fields::ODE;
    using DWP = SwPadCtlPadGpioAd16Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd16Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_17 SW PAD Control Register
  struct SwPadCtlPadGpioAd17Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd17Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_17 : ftl::mmio::Register<
      0x400E8394u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd17Fields::SRE,
      SwPadCtlPadGpioAd17Fields::DSE,
      SwPadCtlPadGpioAd17Fields::PUE,
      SwPadCtlPadGpioAd17Fields::PUS,
      SwPadCtlPadGpioAd17Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd17Fields::DWP,
      SwPadCtlPadGpioAd17Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd17Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd17Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd17Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd17Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd17Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd17Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd17Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd17Fields::SRE;
    using DSE = SwPadCtlPadGpioAd17Fields::DSE;
    using PUE = SwPadCtlPadGpioAd17Fields::PUE;
    using PUS = SwPadCtlPadGpioAd17Fields::PUS;
    using ODE = SwPadCtlPadGpioAd17Fields::ODE;
    using DWP = SwPadCtlPadGpioAd17Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd17Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_18 SW PAD Control Register
  struct SwPadCtlPadGpioAd18Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd18Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_18 : ftl::mmio::Register<
      0x400E8398u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd18Fields::SRE,
      SwPadCtlPadGpioAd18Fields::DSE,
      SwPadCtlPadGpioAd18Fields::PUE,
      SwPadCtlPadGpioAd18Fields::PUS,
      SwPadCtlPadGpioAd18Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd18Fields::DWP,
      SwPadCtlPadGpioAd18Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd18Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd18Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd18Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd18Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd18Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd18Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd18Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd18Fields::SRE;
    using DSE = SwPadCtlPadGpioAd18Fields::DSE;
    using PUE = SwPadCtlPadGpioAd18Fields::PUE;
    using PUS = SwPadCtlPadGpioAd18Fields::PUS;
    using ODE = SwPadCtlPadGpioAd18Fields::ODE;
    using DWP = SwPadCtlPadGpioAd18Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd18Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_19 SW PAD Control Register
  struct SwPadCtlPadGpioAd19Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd19Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_19 : ftl::mmio::Register<
      0x400E839Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd19Fields::SRE,
      SwPadCtlPadGpioAd19Fields::DSE,
      SwPadCtlPadGpioAd19Fields::PUE,
      SwPadCtlPadGpioAd19Fields::PUS,
      SwPadCtlPadGpioAd19Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd19Fields::DWP,
      SwPadCtlPadGpioAd19Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd19Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd19Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd19Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd19Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd19Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd19Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd19Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd19Fields::SRE;
    using DSE = SwPadCtlPadGpioAd19Fields::DSE;
    using PUE = SwPadCtlPadGpioAd19Fields::PUE;
    using PUS = SwPadCtlPadGpioAd19Fields::PUS;
    using ODE = SwPadCtlPadGpioAd19Fields::ODE;
    using DWP = SwPadCtlPadGpioAd19Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd19Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_20 SW PAD Control Register
  struct SwPadCtlPadGpioAd20Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd20Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_20 : ftl::mmio::Register<
      0x400E83A0u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd20Fields::SRE,
      SwPadCtlPadGpioAd20Fields::DSE,
      SwPadCtlPadGpioAd20Fields::PUE,
      SwPadCtlPadGpioAd20Fields::PUS,
      SwPadCtlPadGpioAd20Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd20Fields::DWP,
      SwPadCtlPadGpioAd20Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd20Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd20Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd20Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd20Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd20Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd20Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd20Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd20Fields::SRE;
    using DSE = SwPadCtlPadGpioAd20Fields::DSE;
    using PUE = SwPadCtlPadGpioAd20Fields::PUE;
    using PUS = SwPadCtlPadGpioAd20Fields::PUS;
    using ODE = SwPadCtlPadGpioAd20Fields::ODE;
    using DWP = SwPadCtlPadGpioAd20Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd20Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_21 SW PAD Control Register
  struct SwPadCtlPadGpioAd21Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd21Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_21 : ftl::mmio::Register<
      0x400E83A4u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd21Fields::SRE,
      SwPadCtlPadGpioAd21Fields::DSE,
      SwPadCtlPadGpioAd21Fields::PUE,
      SwPadCtlPadGpioAd21Fields::PUS,
      SwPadCtlPadGpioAd21Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd21Fields::DWP,
      SwPadCtlPadGpioAd21Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd21Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd21Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd21Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd21Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd21Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd21Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd21Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd21Fields::SRE;
    using DSE = SwPadCtlPadGpioAd21Fields::DSE;
    using PUE = SwPadCtlPadGpioAd21Fields::PUE;
    using PUS = SwPadCtlPadGpioAd21Fields::PUS;
    using ODE = SwPadCtlPadGpioAd21Fields::ODE;
    using DWP = SwPadCtlPadGpioAd21Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd21Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_22 SW PAD Control Register
  struct SwPadCtlPadGpioAd22Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd22Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_22 : ftl::mmio::Register<
      0x400E83A8u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd22Fields::SRE,
      SwPadCtlPadGpioAd22Fields::DSE,
      SwPadCtlPadGpioAd22Fields::PUE,
      SwPadCtlPadGpioAd22Fields::PUS,
      SwPadCtlPadGpioAd22Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd22Fields::DWP,
      SwPadCtlPadGpioAd22Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd22Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd22Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd22Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd22Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd22Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd22Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd22Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd22Fields::SRE;
    using DSE = SwPadCtlPadGpioAd22Fields::DSE;
    using PUE = SwPadCtlPadGpioAd22Fields::PUE;
    using PUS = SwPadCtlPadGpioAd22Fields::PUS;
    using ODE = SwPadCtlPadGpioAd22Fields::ODE;
    using DWP = SwPadCtlPadGpioAd22Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd22Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_23 SW PAD Control Register
  struct SwPadCtlPadGpioAd23Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd23Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_23 : ftl::mmio::Register<
      0x400E83ACu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd23Fields::SRE,
      SwPadCtlPadGpioAd23Fields::DSE,
      SwPadCtlPadGpioAd23Fields::PUE,
      SwPadCtlPadGpioAd23Fields::PUS,
      SwPadCtlPadGpioAd23Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd23Fields::DWP,
      SwPadCtlPadGpioAd23Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd23Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd23Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd23Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd23Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd23Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd23Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd23Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd23Fields::SRE;
    using DSE = SwPadCtlPadGpioAd23Fields::DSE;
    using PUE = SwPadCtlPadGpioAd23Fields::PUE;
    using PUS = SwPadCtlPadGpioAd23Fields::PUS;
    using ODE = SwPadCtlPadGpioAd23Fields::ODE;
    using DWP = SwPadCtlPadGpioAd23Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd23Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_24 SW PAD Control Register
  struct SwPadCtlPadGpioAd24Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd24Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_24 : ftl::mmio::Register<
      0x400E83B0u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd24Fields::SRE,
      SwPadCtlPadGpioAd24Fields::DSE,
      SwPadCtlPadGpioAd24Fields::PUE,
      SwPadCtlPadGpioAd24Fields::PUS,
      SwPadCtlPadGpioAd24Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd24Fields::DWP,
      SwPadCtlPadGpioAd24Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd24Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd24Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd24Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd24Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd24Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd24Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd24Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd24Fields::SRE;
    using DSE = SwPadCtlPadGpioAd24Fields::DSE;
    using PUE = SwPadCtlPadGpioAd24Fields::PUE;
    using PUS = SwPadCtlPadGpioAd24Fields::PUS;
    using ODE = SwPadCtlPadGpioAd24Fields::ODE;
    using DWP = SwPadCtlPadGpioAd24Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd24Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_25 SW PAD Control Register
  struct SwPadCtlPadGpioAd25Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd25Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_25 : ftl::mmio::Register<
      0x400E83B4u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd25Fields::SRE,
      SwPadCtlPadGpioAd25Fields::DSE,
      SwPadCtlPadGpioAd25Fields::PUE,
      SwPadCtlPadGpioAd25Fields::PUS,
      SwPadCtlPadGpioAd25Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd25Fields::DWP,
      SwPadCtlPadGpioAd25Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd25Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd25Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd25Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd25Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd25Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd25Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd25Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd25Fields::SRE;
    using DSE = SwPadCtlPadGpioAd25Fields::DSE;
    using PUE = SwPadCtlPadGpioAd25Fields::PUE;
    using PUS = SwPadCtlPadGpioAd25Fields::PUS;
    using ODE = SwPadCtlPadGpioAd25Fields::ODE;
    using DWP = SwPadCtlPadGpioAd25Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd25Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_26 SW PAD Control Register
  struct SwPadCtlPadGpioAd26Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd26Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_26 : ftl::mmio::Register<
      0x400E83B8u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd26Fields::SRE,
      SwPadCtlPadGpioAd26Fields::DSE,
      SwPadCtlPadGpioAd26Fields::PUE,
      SwPadCtlPadGpioAd26Fields::PUS,
      SwPadCtlPadGpioAd26Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd26Fields::DWP,
      SwPadCtlPadGpioAd26Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd26Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd26Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd26Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd26Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd26Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd26Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd26Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd26Fields::SRE;
    using DSE = SwPadCtlPadGpioAd26Fields::DSE;
    using PUE = SwPadCtlPadGpioAd26Fields::PUE;
    using PUS = SwPadCtlPadGpioAd26Fields::PUS;
    using ODE = SwPadCtlPadGpioAd26Fields::ODE;
    using DWP = SwPadCtlPadGpioAd26Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd26Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_27 SW PAD Control Register
  struct SwPadCtlPadGpioAd27Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd27Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_27 : ftl::mmio::Register<
      0x400E83BCu,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd27Fields::SRE,
      SwPadCtlPadGpioAd27Fields::DSE,
      SwPadCtlPadGpioAd27Fields::PUE,
      SwPadCtlPadGpioAd27Fields::PUS,
      SwPadCtlPadGpioAd27Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd27Fields::DWP,
      SwPadCtlPadGpioAd27Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd27Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd27Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd27Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd27Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd27Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd27Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd27Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd27Fields::SRE;
    using DSE = SwPadCtlPadGpioAd27Fields::DSE;
    using PUE = SwPadCtlPadGpioAd27Fields::PUE;
    using PUS = SwPadCtlPadGpioAd27Fields::PUS;
    using ODE = SwPadCtlPadGpioAd27Fields::ODE;
    using DWP = SwPadCtlPadGpioAd27Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd27Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_28 SW PAD Control Register
  struct SwPadCtlPadGpioAd28Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd28Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_28 : ftl::mmio::Register<
      0x400E83C0u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd28Fields::SRE,
      SwPadCtlPadGpioAd28Fields::DSE,
      SwPadCtlPadGpioAd28Fields::PUE,
      SwPadCtlPadGpioAd28Fields::PUS,
      SwPadCtlPadGpioAd28Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd28Fields::DWP,
      SwPadCtlPadGpioAd28Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd28Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd28Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd28Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd28Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd28Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd28Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd28Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd28Fields::SRE;
    using DSE = SwPadCtlPadGpioAd28Fields::DSE;
    using PUE = SwPadCtlPadGpioAd28Fields::PUE;
    using PUS = SwPadCtlPadGpioAd28Fields::PUS;
    using ODE = SwPadCtlPadGpioAd28Fields::ODE;
    using DWP = SwPadCtlPadGpioAd28Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd28Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_29 SW PAD Control Register
  struct SwPadCtlPadGpioAd29Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd29Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_29 : ftl::mmio::Register<
      0x400E83C4u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd29Fields::SRE,
      SwPadCtlPadGpioAd29Fields::DSE,
      SwPadCtlPadGpioAd29Fields::PUE,
      SwPadCtlPadGpioAd29Fields::PUS,
      SwPadCtlPadGpioAd29Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd29Fields::DWP,
      SwPadCtlPadGpioAd29Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd29Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd29Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd29Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd29Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd29Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd29Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd29Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd29Fields::SRE;
    using DSE = SwPadCtlPadGpioAd29Fields::DSE;
    using PUE = SwPadCtlPadGpioAd29Fields::PUE;
    using PUS = SwPadCtlPadGpioAd29Fields::PUS;
    using ODE = SwPadCtlPadGpioAd29Fields::ODE;
    using DWP = SwPadCtlPadGpioAd29Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd29Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_30 SW PAD Control Register
  struct SwPadCtlPadGpioAd30Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd30Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_30 : ftl::mmio::Register<
      0x400E83C8u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd30Fields::SRE,
      SwPadCtlPadGpioAd30Fields::DSE,
      SwPadCtlPadGpioAd30Fields::PUE,
      SwPadCtlPadGpioAd30Fields::PUS,
      SwPadCtlPadGpioAd30Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd30Fields::DWP,
      SwPadCtlPadGpioAd30Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd30Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd30Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd30Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd30Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd30Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd30Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd30Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd30Fields::SRE;
    using DSE = SwPadCtlPadGpioAd30Fields::DSE;
    using PUE = SwPadCtlPadGpioAd30Fields::PUE;
    using PUS = SwPadCtlPadGpioAd30Fields::PUS;
    using ODE = SwPadCtlPadGpioAd30Fields::ODE;
    using DWP = SwPadCtlPadGpioAd30Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd30Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_31 SW PAD Control Register
  struct SwPadCtlPadGpioAd31Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd31Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_31 : ftl::mmio::Register<
      0x400E83CCu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd31Fields::SRE,
      SwPadCtlPadGpioAd31Fields::DSE,
      SwPadCtlPadGpioAd31Fields::PUE,
      SwPadCtlPadGpioAd31Fields::PUS,
      SwPadCtlPadGpioAd31Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd31Fields::DWP,
      SwPadCtlPadGpioAd31Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd31Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd31Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd31Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd31Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd31Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd31Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd31Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd31Fields::SRE;
    using DSE = SwPadCtlPadGpioAd31Fields::DSE;
    using PUE = SwPadCtlPadGpioAd31Fields::PUE;
    using PUS = SwPadCtlPadGpioAd31Fields::PUS;
    using ODE = SwPadCtlPadGpioAd31Fields::ODE;
    using DWP = SwPadCtlPadGpioAd31Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd31Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_32 SW PAD Control Register
  struct SwPadCtlPadGpioAd32Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd32Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_32 : ftl::mmio::Register<
      0x400E83D0u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd32Fields::SRE,
      SwPadCtlPadGpioAd32Fields::DSE,
      SwPadCtlPadGpioAd32Fields::PUE,
      SwPadCtlPadGpioAd32Fields::PUS,
      SwPadCtlPadGpioAd32Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd32Fields::DWP,
      SwPadCtlPadGpioAd32Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd32Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd32Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd32Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd32Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd32Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd32Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd32Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd32Fields::SRE;
    using DSE = SwPadCtlPadGpioAd32Fields::DSE;
    using PUE = SwPadCtlPadGpioAd32Fields::PUE;
    using PUS = SwPadCtlPadGpioAd32Fields::PUS;
    using ODE = SwPadCtlPadGpioAd32Fields::ODE;
    using DWP = SwPadCtlPadGpioAd32Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd32Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_33 SW PAD Control Register
  struct SwPadCtlPadGpioAd33Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd33Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_33 : ftl::mmio::Register<
      0x400E83D4u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd33Fields::SRE,
      SwPadCtlPadGpioAd33Fields::DSE,
      SwPadCtlPadGpioAd33Fields::PUE,
      SwPadCtlPadGpioAd33Fields::PUS,
      SwPadCtlPadGpioAd33Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd33Fields::DWP,
      SwPadCtlPadGpioAd33Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd33Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd33Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd33Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd33Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd33Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd33Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd33Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd33Fields::SRE;
    using DSE = SwPadCtlPadGpioAd33Fields::DSE;
    using PUE = SwPadCtlPadGpioAd33Fields::PUE;
    using PUS = SwPadCtlPadGpioAd33Fields::PUS;
    using ODE = SwPadCtlPadGpioAd33Fields::ODE;
    using DWP = SwPadCtlPadGpioAd33Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd33Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_34 SW PAD Control Register
  struct SwPadCtlPadGpioAd34Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd34Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_34 : ftl::mmio::Register<
      0x400E83D8u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd34Fields::SRE,
      SwPadCtlPadGpioAd34Fields::DSE,
      SwPadCtlPadGpioAd34Fields::PUE,
      SwPadCtlPadGpioAd34Fields::PUS,
      SwPadCtlPadGpioAd34Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd34Fields::DWP,
      SwPadCtlPadGpioAd34Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd34Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd34Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd34Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd34Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd34Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd34Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd34Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd34Fields::SRE;
    using DSE = SwPadCtlPadGpioAd34Fields::DSE;
    using PUE = SwPadCtlPadGpioAd34Fields::PUE;
    using PUS = SwPadCtlPadGpioAd34Fields::PUS;
    using ODE = SwPadCtlPadGpioAd34Fields::ODE;
    using DWP = SwPadCtlPadGpioAd34Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd34Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_AD_35 SW PAD Control Register
  struct SwPadCtlPadGpioAd35Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioAd35Fields

  struct SW_PAD_CTL_PAD_GPIO_AD_35 : ftl::mmio::Register<
      0x400E83DCu,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioAd35Fields::SRE,
      SwPadCtlPadGpioAd35Fields::DSE,
      SwPadCtlPadGpioAd35Fields::PUE,
      SwPadCtlPadGpioAd35Fields::PUS,
      SwPadCtlPadGpioAd35Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioAd35Fields::DWP,
      SwPadCtlPadGpioAd35Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioAd35Fields::eSRE;
    using eDSE = SwPadCtlPadGpioAd35Fields::eDSE;
    using ePUE = SwPadCtlPadGpioAd35Fields::ePUE;
    using ePUS = SwPadCtlPadGpioAd35Fields::ePUS;
    using eODE = SwPadCtlPadGpioAd35Fields::eODE;
    using eDWP = SwPadCtlPadGpioAd35Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioAd35Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioAd35Fields::SRE;
    using DSE = SwPadCtlPadGpioAd35Fields::DSE;
    using PUE = SwPadCtlPadGpioAd35Fields::PUE;
    using PUS = SwPadCtlPadGpioAd35Fields::PUS;
    using ODE = SwPadCtlPadGpioAd35Fields::ODE;
    using DWP = SwPadCtlPadGpioAd35Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioAd35Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_00 SW PAD Control Register
  struct SwPadCtlPadGpioSdB100Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB100Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_00 : ftl::mmio::Register<
      0x400E83E0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB100Fields::PDRV,
      SwPadCtlPadGpioSdB100Fields::PULL,
      SwPadCtlPadGpioSdB100Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB100Fields::DWP,
      SwPadCtlPadGpioSdB100Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB100Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB100Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB100Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB100Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB100Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB100Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB100Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB100Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB100Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB100Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_01 SW PAD Control Register
  struct SwPadCtlPadGpioSdB101Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB101Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_01 : ftl::mmio::Register<
      0x400E83E4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB101Fields::PDRV,
      SwPadCtlPadGpioSdB101Fields::PULL,
      SwPadCtlPadGpioSdB101Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB101Fields::DWP,
      SwPadCtlPadGpioSdB101Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB101Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB101Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB101Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB101Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB101Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB101Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB101Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB101Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB101Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB101Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_02 SW PAD Control Register
  struct SwPadCtlPadGpioSdB102Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB102Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_02 : ftl::mmio::Register<
      0x400E83E8u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB102Fields::PDRV,
      SwPadCtlPadGpioSdB102Fields::PULL,
      SwPadCtlPadGpioSdB102Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB102Fields::DWP,
      SwPadCtlPadGpioSdB102Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB102Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB102Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB102Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB102Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB102Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB102Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB102Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB102Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB102Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB102Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_03 SW PAD Control Register
  struct SwPadCtlPadGpioSdB103Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB103Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_03 : ftl::mmio::Register<
      0x400E83ECu,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB103Fields::PDRV,
      SwPadCtlPadGpioSdB103Fields::PULL,
      SwPadCtlPadGpioSdB103Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB103Fields::DWP,
      SwPadCtlPadGpioSdB103Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB103Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB103Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB103Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB103Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB103Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB103Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB103Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB103Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB103Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB103Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_04 SW PAD Control Register
  struct SwPadCtlPadGpioSdB104Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB104Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_04 : ftl::mmio::Register<
      0x400E83F0u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB104Fields::PDRV,
      SwPadCtlPadGpioSdB104Fields::PULL,
      SwPadCtlPadGpioSdB104Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB104Fields::DWP,
      SwPadCtlPadGpioSdB104Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB104Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB104Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB104Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB104Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB104Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB104Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB104Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB104Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB104Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB104Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B1_05 SW PAD Control Register
  struct SwPadCtlPadGpioSdB105Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB105Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B1_05 : ftl::mmio::Register<
      0x400E83F4u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB105Fields::PDRV,
      SwPadCtlPadGpioSdB105Fields::PULL,
      SwPadCtlPadGpioSdB105Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB105Fields::DWP,
      SwPadCtlPadGpioSdB105Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB105Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB105Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB105Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB105Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB105Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB105Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB105Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB105Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB105Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB105Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_00 SW PAD Control Register
  struct SwPadCtlPadGpioSdB200Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB200Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_00 : ftl::mmio::Register<
      0x400E83F8u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB200Fields::PDRV,
      SwPadCtlPadGpioSdB200Fields::PULL,
      SwPadCtlPadGpioSdB200Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB200Fields::DWP,
      SwPadCtlPadGpioSdB200Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB200Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB200Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB200Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB200Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB200Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB200Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB200Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB200Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB200Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB200Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_01 SW PAD Control Register
  struct SwPadCtlPadGpioSdB201Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB201Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_01 : ftl::mmio::Register<
      0x400E83FCu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB201Fields::PDRV,
      SwPadCtlPadGpioSdB201Fields::PULL,
      SwPadCtlPadGpioSdB201Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB201Fields::DWP,
      SwPadCtlPadGpioSdB201Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB201Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB201Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB201Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB201Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB201Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB201Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB201Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB201Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB201Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB201Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_02 SW PAD Control Register
  struct SwPadCtlPadGpioSdB202Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB202Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_02 : ftl::mmio::Register<
      0x400E8400u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB202Fields::PDRV,
      SwPadCtlPadGpioSdB202Fields::PULL,
      SwPadCtlPadGpioSdB202Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB202Fields::DWP,
      SwPadCtlPadGpioSdB202Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB202Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB202Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB202Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB202Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB202Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB202Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB202Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB202Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB202Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB202Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_03 SW PAD Control Register
  struct SwPadCtlPadGpioSdB203Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB203Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_03 : ftl::mmio::Register<
      0x400E8404u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB203Fields::PDRV,
      SwPadCtlPadGpioSdB203Fields::PULL,
      SwPadCtlPadGpioSdB203Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB203Fields::DWP,
      SwPadCtlPadGpioSdB203Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB203Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB203Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB203Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB203Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB203Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB203Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB203Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB203Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB203Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB203Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_04 SW PAD Control Register
  struct SwPadCtlPadGpioSdB204Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB204Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_04 : ftl::mmio::Register<
      0x400E8408u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB204Fields::PDRV,
      SwPadCtlPadGpioSdB204Fields::PULL,
      SwPadCtlPadGpioSdB204Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB204Fields::DWP,
      SwPadCtlPadGpioSdB204Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB204Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB204Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB204Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB204Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB204Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB204Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB204Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB204Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB204Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB204Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_05 SW PAD Control Register
  struct SwPadCtlPadGpioSdB205Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB205Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_05 : ftl::mmio::Register<
      0x400E840Cu,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB205Fields::PDRV,
      SwPadCtlPadGpioSdB205Fields::PULL,
      SwPadCtlPadGpioSdB205Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB205Fields::DWP,
      SwPadCtlPadGpioSdB205Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB205Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB205Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB205Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB205Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB205Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB205Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB205Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB205Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB205Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB205Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_06 SW PAD Control Register
  struct SwPadCtlPadGpioSdB206Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB206Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_06 : ftl::mmio::Register<
      0x400E8410u,
      std::uint32_t,
      0x00000004u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB206Fields::PDRV,
      SwPadCtlPadGpioSdB206Fields::PULL,
      SwPadCtlPadGpioSdB206Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB206Fields::DWP,
      SwPadCtlPadGpioSdB206Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB206Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB206Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB206Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB206Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB206Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB206Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB206Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB206Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB206Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB206Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_07 SW PAD Control Register
  struct SwPadCtlPadGpioSdB207Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB207Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_07 : ftl::mmio::Register<
      0x400E8414u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB207Fields::PDRV,
      SwPadCtlPadGpioSdB207Fields::PULL,
      SwPadCtlPadGpioSdB207Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB207Fields::DWP,
      SwPadCtlPadGpioSdB207Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB207Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB207Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB207Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB207Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB207Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB207Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB207Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB207Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB207Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB207Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_08 SW PAD Control Register
  struct SwPadCtlPadGpioSdB208Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB208Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_08 : ftl::mmio::Register<
      0x400E8418u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB208Fields::PDRV,
      SwPadCtlPadGpioSdB208Fields::PULL,
      SwPadCtlPadGpioSdB208Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB208Fields::DWP,
      SwPadCtlPadGpioSdB208Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB208Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB208Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB208Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB208Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB208Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB208Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB208Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB208Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB208Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB208Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_09 SW PAD Control Register
  struct SwPadCtlPadGpioSdB209Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB209Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_09 : ftl::mmio::Register<
      0x400E841Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB209Fields::PDRV,
      SwPadCtlPadGpioSdB209Fields::PULL,
      SwPadCtlPadGpioSdB209Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB209Fields::DWP,
      SwPadCtlPadGpioSdB209Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB209Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB209Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB209Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB209Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB209Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB209Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB209Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB209Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB209Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB209Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_10 SW PAD Control Register
  struct SwPadCtlPadGpioSdB210Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB210Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_10 : ftl::mmio::Register<
      0x400E8420u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB210Fields::PDRV,
      SwPadCtlPadGpioSdB210Fields::PULL,
      SwPadCtlPadGpioSdB210Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB210Fields::DWP,
      SwPadCtlPadGpioSdB210Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB210Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB210Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB210Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB210Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB210Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB210Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB210Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB210Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB210Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB210Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SD_B2_11 SW PAD Control Register
  struct SwPadCtlPadGpioSdB211Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSdB211Fields

  struct SW_PAD_CTL_PAD_GPIO_SD_B2_11 : ftl::mmio::Register<
      0x400E8424u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioSdB211Fields::PDRV,
      SwPadCtlPadGpioSdB211Fields::PULL,
      SwPadCtlPadGpioSdB211Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioSdB211Fields::DWP,
      SwPadCtlPadGpioSdB211Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioSdB211Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioSdB211Fields::ePULL;
    using eODE = SwPadCtlPadGpioSdB211Fields::eODE;
    using eDWP = SwPadCtlPadGpioSdB211Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSdB211Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioSdB211Fields::PDRV;
    using PULL = SwPadCtlPadGpioSdB211Fields::PULL;
    using ODE = SwPadCtlPadGpioSdB211Fields::ODE;
    using DWP = SwPadCtlPadGpioSdB211Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSdB211Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_00 SW PAD Control Register
  struct SwPadCtlPadGpioDispB100Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB100Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_00 : ftl::mmio::Register<
      0x400E8428u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB100Fields::PDRV,
      SwPadCtlPadGpioDispB100Fields::PULL,
      SwPadCtlPadGpioDispB100Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB100Fields::DWP,
      SwPadCtlPadGpioDispB100Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB100Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB100Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB100Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB100Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB100Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB100Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB100Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB100Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB100Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB100Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_01 SW PAD Control Register
  struct SwPadCtlPadGpioDispB101Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB101Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_01 : ftl::mmio::Register<
      0x400E842Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB101Fields::PDRV,
      SwPadCtlPadGpioDispB101Fields::PULL,
      SwPadCtlPadGpioDispB101Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB101Fields::DWP,
      SwPadCtlPadGpioDispB101Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB101Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB101Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB101Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB101Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB101Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB101Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB101Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB101Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB101Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB101Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_02 SW PAD Control Register
  struct SwPadCtlPadGpioDispB102Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB102Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_02 : ftl::mmio::Register<
      0x400E8430u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB102Fields::PDRV,
      SwPadCtlPadGpioDispB102Fields::PULL,
      SwPadCtlPadGpioDispB102Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB102Fields::DWP,
      SwPadCtlPadGpioDispB102Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB102Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB102Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB102Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB102Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB102Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB102Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB102Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB102Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB102Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB102Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_03 SW PAD Control Register
  struct SwPadCtlPadGpioDispB103Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB103Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_03 : ftl::mmio::Register<
      0x400E8434u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB103Fields::PDRV,
      SwPadCtlPadGpioDispB103Fields::PULL,
      SwPadCtlPadGpioDispB103Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB103Fields::DWP,
      SwPadCtlPadGpioDispB103Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB103Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB103Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB103Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB103Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB103Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB103Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB103Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB103Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB103Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB103Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_04 SW PAD Control Register
  struct SwPadCtlPadGpioDispB104Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB104Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_04 : ftl::mmio::Register<
      0x400E8438u,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB104Fields::PDRV,
      SwPadCtlPadGpioDispB104Fields::PULL,
      SwPadCtlPadGpioDispB104Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB104Fields::DWP,
      SwPadCtlPadGpioDispB104Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB104Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB104Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB104Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB104Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB104Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB104Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB104Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB104Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB104Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB104Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_05 SW PAD Control Register
  struct SwPadCtlPadGpioDispB105Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB105Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_05 : ftl::mmio::Register<
      0x400E843Cu,
      std::uint32_t,
      0x00000008u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB105Fields::PDRV,
      SwPadCtlPadGpioDispB105Fields::PULL,
      SwPadCtlPadGpioDispB105Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB105Fields::DWP,
      SwPadCtlPadGpioDispB105Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB105Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB105Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB105Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB105Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB105Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB105Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB105Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB105Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB105Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB105Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_06 SW PAD Control Register
  struct SwPadCtlPadGpioDispB106Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB106Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_06 : ftl::mmio::Register<
      0x400E8440u,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB106Fields::PDRV,
      SwPadCtlPadGpioDispB106Fields::PULL,
      SwPadCtlPadGpioDispB106Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB106Fields::DWP,
      SwPadCtlPadGpioDispB106Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB106Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB106Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB106Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB106Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB106Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB106Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB106Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB106Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB106Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB106Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_07 SW PAD Control Register
  struct SwPadCtlPadGpioDispB107Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB107Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_07 : ftl::mmio::Register<
      0x400E8444u,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB107Fields::PDRV,
      SwPadCtlPadGpioDispB107Fields::PULL,
      SwPadCtlPadGpioDispB107Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB107Fields::DWP,
      SwPadCtlPadGpioDispB107Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB107Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB107Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB107Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB107Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB107Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB107Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB107Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB107Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB107Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB107Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_08 SW PAD Control Register
  struct SwPadCtlPadGpioDispB108Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB108Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_08 : ftl::mmio::Register<
      0x400E8448u,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB108Fields::PDRV,
      SwPadCtlPadGpioDispB108Fields::PULL,
      SwPadCtlPadGpioDispB108Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB108Fields::DWP,
      SwPadCtlPadGpioDispB108Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB108Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB108Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB108Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB108Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB108Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB108Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB108Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB108Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB108Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB108Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_09 SW PAD Control Register
  struct SwPadCtlPadGpioDispB109Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB109Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_09 : ftl::mmio::Register<
      0x400E844Cu,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB109Fields::PDRV,
      SwPadCtlPadGpioDispB109Fields::PULL,
      SwPadCtlPadGpioDispB109Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB109Fields::DWP,
      SwPadCtlPadGpioDispB109Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB109Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB109Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB109Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB109Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB109Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB109Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB109Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB109Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB109Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB109Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_10 SW PAD Control Register
  struct SwPadCtlPadGpioDispB110Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB110Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_10 : ftl::mmio::Register<
      0x400E8450u,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB110Fields::PDRV,
      SwPadCtlPadGpioDispB110Fields::PULL,
      SwPadCtlPadGpioDispB110Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB110Fields::DWP,
      SwPadCtlPadGpioDispB110Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB110Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB110Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB110Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB110Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB110Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB110Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB110Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB110Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB110Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB110Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B1_11 SW PAD Control Register
  struct SwPadCtlPadGpioDispB111Fields {
    enum class ePDRV : std::uint32_t {
      // high drive strength
      ePDRV_0_high_driver = 0,
      // normal drive strength
      ePDRV_1_normal_driver = 1,
    };

    enum class ePULL : std::uint32_t {
      // Forbidden
      ePULL_0_Forbidden = 0,
      // Internal pullup resistor enabled
      ePULL_1_PU = 1,
      // Internal pulldown resistor enabled
      ePULL_2_PD = 2,
      // No Pull
      ePULL_3_No_Pull = 3,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // PDRV Field
    using PDRV = ftl::mmio::Field<1, 1, ePDRV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Down Pull Up Field
    using PULL = ftl::mmio::Field<2, 2, ePULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB111Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B1_11 : ftl::mmio::Register<
      0x400E8454u,
      std::uint32_t,
      0x0000000Cu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      SwPadCtlPadGpioDispB111Fields::PDRV,
      SwPadCtlPadGpioDispB111Fields::PULL,
      SwPadCtlPadGpioDispB111Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB111Fields::DWP,
      SwPadCtlPadGpioDispB111Fields::DWP_LOCK> {
    using ePDRV = SwPadCtlPadGpioDispB111Fields::ePDRV;
    using ePULL = SwPadCtlPadGpioDispB111Fields::ePULL;
    using eODE = SwPadCtlPadGpioDispB111Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB111Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB111Fields::eDWP_LOCK;
    using PDRV = SwPadCtlPadGpioDispB111Fields::PDRV;
    using PULL = SwPadCtlPadGpioDispB111Fields::PULL;
    using ODE = SwPadCtlPadGpioDispB111Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB111Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB111Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_00 SW PAD Control Register
  struct SwPadCtlPadGpioDispB200Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB200Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_00 : ftl::mmio::Register<
      0x400E8458u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB200Fields::SRE,
      SwPadCtlPadGpioDispB200Fields::DSE,
      SwPadCtlPadGpioDispB200Fields::PUE,
      SwPadCtlPadGpioDispB200Fields::PUS,
      SwPadCtlPadGpioDispB200Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB200Fields::DWP,
      SwPadCtlPadGpioDispB200Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB200Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB200Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB200Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB200Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB200Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB200Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB200Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB200Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB200Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB200Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB200Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB200Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB200Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB200Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_01 SW PAD Control Register
  struct SwPadCtlPadGpioDispB201Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB201Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_01 : ftl::mmio::Register<
      0x400E845Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB201Fields::SRE,
      SwPadCtlPadGpioDispB201Fields::DSE,
      SwPadCtlPadGpioDispB201Fields::PUE,
      SwPadCtlPadGpioDispB201Fields::PUS,
      SwPadCtlPadGpioDispB201Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB201Fields::DWP,
      SwPadCtlPadGpioDispB201Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB201Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB201Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB201Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB201Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB201Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB201Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB201Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB201Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB201Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB201Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB201Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB201Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB201Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB201Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_02 SW PAD Control Register
  struct SwPadCtlPadGpioDispB202Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB202Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_02 : ftl::mmio::Register<
      0x400E8460u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB202Fields::SRE,
      SwPadCtlPadGpioDispB202Fields::DSE,
      SwPadCtlPadGpioDispB202Fields::PUE,
      SwPadCtlPadGpioDispB202Fields::PUS,
      SwPadCtlPadGpioDispB202Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB202Fields::DWP,
      SwPadCtlPadGpioDispB202Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB202Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB202Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB202Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB202Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB202Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB202Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB202Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB202Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB202Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB202Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB202Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB202Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB202Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB202Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_03 SW PAD Control Register
  struct SwPadCtlPadGpioDispB203Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB203Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_03 : ftl::mmio::Register<
      0x400E8464u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB203Fields::SRE,
      SwPadCtlPadGpioDispB203Fields::DSE,
      SwPadCtlPadGpioDispB203Fields::PUE,
      SwPadCtlPadGpioDispB203Fields::PUS,
      SwPadCtlPadGpioDispB203Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB203Fields::DWP,
      SwPadCtlPadGpioDispB203Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB203Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB203Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB203Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB203Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB203Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB203Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB203Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB203Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB203Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB203Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB203Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB203Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB203Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB203Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_04 SW PAD Control Register
  struct SwPadCtlPadGpioDispB204Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB204Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_04 : ftl::mmio::Register<
      0x400E8468u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB204Fields::SRE,
      SwPadCtlPadGpioDispB204Fields::DSE,
      SwPadCtlPadGpioDispB204Fields::PUE,
      SwPadCtlPadGpioDispB204Fields::PUS,
      SwPadCtlPadGpioDispB204Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB204Fields::DWP,
      SwPadCtlPadGpioDispB204Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB204Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB204Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB204Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB204Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB204Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB204Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB204Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB204Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB204Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB204Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB204Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB204Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB204Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB204Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_05 SW PAD Control Register
  struct SwPadCtlPadGpioDispB205Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB205Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_05 : ftl::mmio::Register<
      0x400E846Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB205Fields::SRE,
      SwPadCtlPadGpioDispB205Fields::DSE,
      SwPadCtlPadGpioDispB205Fields::PUE,
      SwPadCtlPadGpioDispB205Fields::PUS,
      SwPadCtlPadGpioDispB205Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB205Fields::DWP,
      SwPadCtlPadGpioDispB205Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB205Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB205Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB205Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB205Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB205Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB205Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB205Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB205Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB205Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB205Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB205Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB205Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB205Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB205Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_06 SW PAD Control Register
  struct SwPadCtlPadGpioDispB206Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB206Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_06 : ftl::mmio::Register<
      0x400E8470u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB206Fields::SRE,
      SwPadCtlPadGpioDispB206Fields::DSE,
      SwPadCtlPadGpioDispB206Fields::PUE,
      SwPadCtlPadGpioDispB206Fields::PUS,
      SwPadCtlPadGpioDispB206Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB206Fields::DWP,
      SwPadCtlPadGpioDispB206Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB206Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB206Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB206Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB206Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB206Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB206Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB206Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB206Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB206Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB206Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB206Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB206Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB206Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB206Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_07 SW PAD Control Register
  struct SwPadCtlPadGpioDispB207Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB207Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_07 : ftl::mmio::Register<
      0x400E8474u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB207Fields::SRE,
      SwPadCtlPadGpioDispB207Fields::DSE,
      SwPadCtlPadGpioDispB207Fields::PUE,
      SwPadCtlPadGpioDispB207Fields::PUS,
      SwPadCtlPadGpioDispB207Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB207Fields::DWP,
      SwPadCtlPadGpioDispB207Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB207Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB207Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB207Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB207Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB207Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB207Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB207Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB207Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB207Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB207Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB207Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB207Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB207Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB207Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_08 SW PAD Control Register
  struct SwPadCtlPadGpioDispB208Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB208Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_08 : ftl::mmio::Register<
      0x400E8478u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB208Fields::SRE,
      SwPadCtlPadGpioDispB208Fields::DSE,
      SwPadCtlPadGpioDispB208Fields::PUE,
      SwPadCtlPadGpioDispB208Fields::PUS,
      SwPadCtlPadGpioDispB208Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB208Fields::DWP,
      SwPadCtlPadGpioDispB208Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB208Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB208Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB208Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB208Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB208Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB208Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB208Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB208Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB208Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB208Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB208Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB208Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB208Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB208Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_09 SW PAD Control Register
  struct SwPadCtlPadGpioDispB209Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB209Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_09 : ftl::mmio::Register<
      0x400E847Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB209Fields::SRE,
      SwPadCtlPadGpioDispB209Fields::DSE,
      SwPadCtlPadGpioDispB209Fields::PUE,
      SwPadCtlPadGpioDispB209Fields::PUS,
      SwPadCtlPadGpioDispB209Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB209Fields::DWP,
      SwPadCtlPadGpioDispB209Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB209Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB209Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB209Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB209Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB209Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB209Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB209Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB209Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB209Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB209Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB209Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB209Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB209Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB209Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_10 SW PAD Control Register
  struct SwPadCtlPadGpioDispB210Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB210Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_10 : ftl::mmio::Register<
      0x400E8480u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB210Fields::SRE,
      SwPadCtlPadGpioDispB210Fields::DSE,
      SwPadCtlPadGpioDispB210Fields::PUE,
      SwPadCtlPadGpioDispB210Fields::PUS,
      SwPadCtlPadGpioDispB210Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB210Fields::DWP,
      SwPadCtlPadGpioDispB210Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB210Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB210Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB210Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB210Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB210Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB210Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB210Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB210Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB210Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB210Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB210Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB210Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB210Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB210Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_11 SW PAD Control Register
  struct SwPadCtlPadGpioDispB211Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB211Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_11 : ftl::mmio::Register<
      0x400E8484u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB211Fields::SRE,
      SwPadCtlPadGpioDispB211Fields::DSE,
      SwPadCtlPadGpioDispB211Fields::PUE,
      SwPadCtlPadGpioDispB211Fields::PUS,
      SwPadCtlPadGpioDispB211Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB211Fields::DWP,
      SwPadCtlPadGpioDispB211Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB211Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB211Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB211Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB211Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB211Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB211Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB211Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB211Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB211Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB211Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB211Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB211Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB211Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB211Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_12 SW PAD Control Register
  struct SwPadCtlPadGpioDispB212Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB212Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_12 : ftl::mmio::Register<
      0x400E8488u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB212Fields::SRE,
      SwPadCtlPadGpioDispB212Fields::DSE,
      SwPadCtlPadGpioDispB212Fields::PUE,
      SwPadCtlPadGpioDispB212Fields::PUS,
      SwPadCtlPadGpioDispB212Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB212Fields::DWP,
      SwPadCtlPadGpioDispB212Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB212Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB212Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB212Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB212Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB212Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB212Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB212Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB212Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB212Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB212Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB212Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB212Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB212Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB212Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_13 SW PAD Control Register
  struct SwPadCtlPadGpioDispB213Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB213Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_13 : ftl::mmio::Register<
      0x400E848Cu,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB213Fields::SRE,
      SwPadCtlPadGpioDispB213Fields::DSE,
      SwPadCtlPadGpioDispB213Fields::PUE,
      SwPadCtlPadGpioDispB213Fields::PUS,
      SwPadCtlPadGpioDispB213Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB213Fields::DWP,
      SwPadCtlPadGpioDispB213Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB213Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB213Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB213Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB213Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB213Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB213Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB213Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB213Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB213Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB213Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB213Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB213Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB213Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB213Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_14 SW PAD Control Register
  struct SwPadCtlPadGpioDispB214Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB214Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_14 : ftl::mmio::Register<
      0x400E8490u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB214Fields::SRE,
      SwPadCtlPadGpioDispB214Fields::DSE,
      SwPadCtlPadGpioDispB214Fields::PUE,
      SwPadCtlPadGpioDispB214Fields::PUS,
      SwPadCtlPadGpioDispB214Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB214Fields::DWP,
      SwPadCtlPadGpioDispB214Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB214Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB214Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB214Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB214Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB214Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB214Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB214Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB214Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB214Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB214Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB214Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB214Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB214Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB214Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_DISP_B2_15 SW PAD Control Register
  struct SwPadCtlPadGpioDispB215Fields {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal drive strength
      eDSE_0_normal_driver = 0,
      // high drive strength
      eDSE_1_high_driver = 1,
    };

    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Pull_Disable__Highz = 0,
      // Pull Enable
      ePUE_1_Pull_Enable = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE : std::uint32_t {
      // Disabled
      eODE_0_Disabled = 0,
      // Enabled
      eODE_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Slew Rate Field
    using SRE = ftl::mmio::Field<1, 0, eSRE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Drive Strength Field
    using DSE = ftl::mmio::Field<1, 1, eDSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain Field
    using ODE = ftl::mmio::Field<1, 4, eODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioDispB215Fields

  struct SW_PAD_CTL_PAD_GPIO_DISP_B2_15 : ftl::mmio::Register<
      0x400E8494u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioDispB215Fields::SRE,
      SwPadCtlPadGpioDispB215Fields::DSE,
      SwPadCtlPadGpioDispB215Fields::PUE,
      SwPadCtlPadGpioDispB215Fields::PUS,
      SwPadCtlPadGpioDispB215Fields::ODE,
      ftl::mmio::Reserved<23, 5>,
      SwPadCtlPadGpioDispB215Fields::DWP,
      SwPadCtlPadGpioDispB215Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioDispB215Fields::eSRE;
    using eDSE = SwPadCtlPadGpioDispB215Fields::eDSE;
    using ePUE = SwPadCtlPadGpioDispB215Fields::ePUE;
    using ePUS = SwPadCtlPadGpioDispB215Fields::ePUS;
    using eODE = SwPadCtlPadGpioDispB215Fields::eODE;
    using eDWP = SwPadCtlPadGpioDispB215Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioDispB215Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioDispB215Fields::SRE;
    using DSE = SwPadCtlPadGpioDispB215Fields::DSE;
    using PUE = SwPadCtlPadGpioDispB215Fields::PUE;
    using PUS = SwPadCtlPadGpioDispB215Fields::PUS;
    using ODE = SwPadCtlPadGpioDispB215Fields::ODE;
    using DWP = SwPadCtlPadGpioDispB215Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioDispB215Fields::DWP_LOCK;
  };

  // FLEXCAN1_RX_SELECT_INPUT DAISY Register
  struct Flexcan1RxSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_07 for Mode: ALT1
      eSELECT_GPIO_AD_07_ALT1 = 0,
      // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_13_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT6
      eSELECT_GPIO_DISP_B2_15_ALT6 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexcan1RxSelectInputFields

  struct FLEXCAN1_RX_SELECT_INPUT : ftl::mmio::Register<
      0x400E8498u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexcan1RxSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Flexcan1RxSelectInputFields::eDAISY;
    using DAISY = Flexcan1RxSelectInputFields::DAISY;
  };

  // FLEXCAN2_RX_SELECT_INPUT DAISY Register
  struct Flexcan2RxSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_01 for Mode: ALT1
      eSELECT_GPIO_AD_01_ALT1 = 0,
      // Selecting Pad: GPIO_AD_31 for Mode: ALT2
      eSELECT_GPIO_AD_31_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexcan2RxSelectInputFields

  struct FLEXCAN2_RX_SELECT_INPUT : ftl::mmio::Register<
      0x400E849Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexcan2RxSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexcan2RxSelectInputFields::eDAISY;
    using DAISY = Flexcan2RxSelectInputFields::DAISY;
  };

  // CCM_ENET_QOS_REF_CLK_SELECT_INPUT DAISY Register
  struct CcmEnetQosRefClkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT3
      eSELECT_GPIO_EMC_B2_20_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_07 for Mode: ALT9
      eSELECT_GPIO_SD_B2_07_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_11_ALT9 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CcmEnetQosRefClkSelectInputFields

  struct CCM_ENET_QOS_REF_CLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E84A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CcmEnetQosRefClkSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = CcmEnetQosRefClkSelectInputFields::eDAISY;
    using DAISY = CcmEnetQosRefClkSelectInputFields::DAISY;
  };

  // CCM_ENET_QOS_TX_CLK_SELECT_INPUT DAISY Register
  struct CcmEnetQosTxClkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT8
      eSELECT_GPIO_DISP_B1_11_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_05_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CcmEnetQosTxClkSelectInputFields

  struct CCM_ENET_QOS_TX_CLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E84A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CcmEnetQosTxClkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = CcmEnetQosTxClkSelectInputFields::eDAISY;
    using DAISY = CcmEnetQosTxClkSelectInputFields::DAISY;
  };

  // ENET_IPG_CLK_RMII_SELECT_INPUT DAISY Register
  struct EnetIpgClkRmiiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_29 for Mode: ALT2
      eSELECT_GPIO_AD_29_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_05_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_13_ALT4 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetIpgClkRmiiSelectInputFields

  struct ENET_IPG_CLK_RMII_SELECT_INPUT : ftl::mmio::Register<
      0x400E84A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetIpgClkRmiiSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = EnetIpgClkRmiiSelectInputFields::eDAISY;
    using DAISY = EnetIpgClkRmiiSelectInputFields::DAISY;
  };

  // ENET_MAC0_MDIO_SELECT_INPUT DAISY Register
  struct EnetMac0MdioSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_20_ALT1 = 0,
      // Selecting Pad: GPIO_AD_33 for Mode: ALT3
      eSELECT_GPIO_AD_33_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0MdioSelectInputFields

  struct ENET_MAC0_MDIO_SELECT_INPUT : ftl::mmio::Register<
      0x400E84ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0MdioSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0MdioSelectInputFields::eDAISY;
    using DAISY = EnetMac0MdioSelectInputFields::DAISY;
  };

  // ENET_MAC0_RXDATA_SELECT_INPUT_0 DAISY Register
  struct EnetMac0RxdataSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_26 for Mode: ALT3
      eSELECT_GPIO_AD_26_ALT3 = 0,
      // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_06_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0RxdataSelectInput0Fields

  struct ENET_MAC0_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E84B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0RxdataSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0RxdataSelectInput0Fields::eDAISY;
    using DAISY = EnetMac0RxdataSelectInput0Fields::DAISY;
  };

  // ENET_MAC0_RXDATA_SELECT_INPUT_1 DAISY Register
  struct EnetMac0RxdataSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_27 for Mode: ALT3
      eSELECT_GPIO_AD_27_ALT3 = 0,
      // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_07_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0RxdataSelectInput1Fields

  struct ENET_MAC0_RXDATA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E84B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0RxdataSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0RxdataSelectInput1Fields::eDAISY;
    using DAISY = EnetMac0RxdataSelectInput1Fields::DAISY;
  };

  // ENET_MAC0_RXEN_SELECT_INPUT DAISY Register
  struct EnetMac0RxenSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_24 for Mode: ALT3
      eSELECT_GPIO_AD_24_ALT3 = 0,
      // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_08_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0RxenSelectInputFields

  struct ENET_MAC0_RXEN_SELECT_INPUT : ftl::mmio::Register<
      0x400E84B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0RxenSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0RxenSelectInputFields::eDAISY;
    using DAISY = EnetMac0RxenSelectInputFields::DAISY;
  };

  // ENET_MAC0_RXERR_SELECT_INPUT DAISY Register
  struct EnetMac0RxerrSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_25 for Mode: ALT3
      eSELECT_GPIO_AD_25_ALT3 = 0,
      // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_09_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0RxerrSelectInputFields

  struct ENET_MAC0_RXERR_SELECT_INPUT : ftl::mmio::Register<
      0x400E84BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0RxerrSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0RxerrSelectInputFields::eDAISY;
    using DAISY = EnetMac0RxerrSelectInputFields::DAISY;
  };

  // ENET_MAC0_TXCLK_SELECT_INPUT DAISY Register
  struct EnetMac0TxclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_29 for Mode: ALT3
      eSELECT_GPIO_AD_29_ALT3 = 0,
      // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_05_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetMac0TxclkSelectInputFields

  struct ENET_MAC0_TXCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E84C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetMac0TxclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetMac0TxclkSelectInputFields::eDAISY;
    using DAISY = EnetMac0TxclkSelectInputFields::DAISY;
  };

  // ENET_1G_IPG_CLK_RMII_SELECT_INPUT DAISY Register
  struct Enet1gIpgClkRmiiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_19 for Mode: ALT3
      eSELECT_GPIO_EMC_B2_19_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT3
      eSELECT_GPIO_SD_B2_11_ALT3 = 1,
      // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_11_ALT2 = 2,
      // Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_14_ALT4 = 3,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gIpgClkRmiiSelectInputFields

  struct ENET_1G_IPG_CLK_RMII_SELECT_INPUT : ftl::mmio::Register<
      0x400E84C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gIpgClkRmiiSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gIpgClkRmiiSelectInputFields::eDAISY;
    using DAISY = Enet1gIpgClkRmiiSelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_MDIO_SELECT_INPUT DAISY Register
  struct Enet1gMac0MdioSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_41 for Mode: ALT7
      eSELECT_GPIO_EMC_B1_41_ALT7 = 0,
      // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_20_ALT2 = 1,
      // Selecting Pad: GPIO_AD_17 for Mode: ALT9
      eSELECT_GPIO_AD_17_ALT9 = 2,
      // Selecting Pad: GPIO_AD_33 for Mode: ALT9
      eSELECT_GPIO_AD_33_ALT9 = 3,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0MdioSelectInputFields

  struct ENET_1G_MAC0_MDIO_SELECT_INPUT : ftl::mmio::Register<
      0x400E84C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0MdioSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0MdioSelectInputFields::eDAISY;
    using DAISY = Enet1gMac0MdioSelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXCLK_SELECT_INPUT DAISY Register
  struct Enet1gMac0RxclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT7
      eSELECT_GPIO_EMC_B2_05_ALT7 = 0,
      // Selecting Pad: GPIO_SD_B2_01 for Mode: ALT2
      eSELECT_GPIO_SD_B2_01_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_01_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0RxclkSelectInputFields

  struct ENET_1G_MAC0_RXCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E84CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0RxclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0RxclkSelectInputFields::eDAISY;
    using DAISY = Enet1gMac0RxclkSelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXDATA_0_SELECT_INPUT DAISY Register
  struct Enet1gMac0Rxdata0SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_15_ALT2 = 0,
      // Selecting Pad: GPIO_SD_B2_02 for Mode: ALT2
      eSELECT_GPIO_SD_B2_02_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_02_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0Rxdata0SelectInputFields

  struct ENET_1G_MAC0_RXDATA_0_SELECT_INPUT : ftl::mmio::Register<
      0x400E84D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0Rxdata0SelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0Rxdata0SelectInputFields::eDAISY;
    using DAISY = Enet1gMac0Rxdata0SelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXDATA_1_SELECT_INPUT DAISY Register
  struct Enet1gMac0Rxdata1SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_16 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_16_ALT2 = 0,
      // Selecting Pad: GPIO_SD_B2_03 for Mode: ALT2
      eSELECT_GPIO_SD_B2_03_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_03_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0Rxdata1SelectInputFields

  struct ENET_1G_MAC0_RXDATA_1_SELECT_INPUT : ftl::mmio::Register<
      0x400E84D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0Rxdata1SelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0Rxdata1SelectInputFields::eDAISY;
    using DAISY = Enet1gMac0Rxdata1SelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXDATA_2_SELECT_INPUT DAISY Register
  struct Enet1gMac0Rxdata2SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_08 for Mode: ALT7
      eSELECT_GPIO_EMC_B2_08_ALT7 = 0,
      // Selecting Pad: GPIO_SD_B2_04 for Mode: ALT2
      eSELECT_GPIO_SD_B2_04_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_04_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0Rxdata2SelectInputFields

  struct ENET_1G_MAC0_RXDATA_2_SELECT_INPUT : ftl::mmio::Register<
      0x400E84D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0Rxdata2SelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0Rxdata2SelectInputFields::eDAISY;
    using DAISY = Enet1gMac0Rxdata2SelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXDATA_3_SELECT_INPUT DAISY Register
  struct Enet1gMac0Rxdata3SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT7
      eSELECT_GPIO_EMC_B2_07_ALT7 = 0,
      // Selecting Pad: GPIO_SD_B2_05 for Mode: ALT2
      eSELECT_GPIO_SD_B2_05_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_05_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0Rxdata3SelectInputFields

  struct ENET_1G_MAC0_RXDATA_3_SELECT_INPUT : ftl::mmio::Register<
      0x400E84DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0Rxdata3SelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0Rxdata3SelectInputFields::eDAISY;
    using DAISY = Enet1gMac0Rxdata3SelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXEN_SELECT_INPUT DAISY Register
  struct Enet1gMac0RxenSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_17 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_17_ALT2 = 0,
      // Selecting Pad: GPIO_SD_B2_00 for Mode: ALT2
      eSELECT_GPIO_SD_B2_00_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_00_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0RxenSelectInputFields

  struct ENET_1G_MAC0_RXEN_SELECT_INPUT : ftl::mmio::Register<
      0x400E84E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0RxenSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0RxenSelectInputFields::eDAISY;
    using DAISY = Enet1gMac0RxenSelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_RXERR_SELECT_INPUT DAISY Register
  struct Enet1gMac0RxerrSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_18 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_18_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_01_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0RxerrSelectInputFields

  struct ENET_1G_MAC0_RXERR_SELECT_INPUT : ftl::mmio::Register<
      0x400E84E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0RxerrSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Enet1gMac0RxerrSelectInputFields::eDAISY;
    using DAISY = Enet1gMac0RxerrSelectInputFields::DAISY;
  };

  // ENET_1G_MAC0_TXCLK_SELECT_INPUT DAISY Register
  struct Enet1gMac0TxclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_14_ALT2 = 0,
      // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT2
      eSELECT_GPIO_SD_B2_11_ALT2 = 1,
      // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT1
      eSELECT_GPIO_DISP_B1_11_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Enet1gMac0TxclkSelectInputFields

  struct ENET_1G_MAC0_TXCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E84E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Enet1gMac0TxclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Enet1gMac0TxclkSelectInputFields::eDAISY;
    using DAISY = Enet1gMac0TxclkSelectInputFields::DAISY;
  };

  // ENET_QOS_GMII_MDI_I_SELECT_INPUT DAISY Register
  struct EnetQosGmiiMdiISelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_20_ALT8 = 0,
      // Selecting Pad: GPIO_AD_27 for Mode: ALT9
      eSELECT_GPIO_AD_27_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetQosGmiiMdiISelectInputFields

  struct ENET_QOS_GMII_MDI_I_SELECT_INPUT : ftl::mmio::Register<
      0x400E84ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetQosGmiiMdiISelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetQosGmiiMdiISelectInputFields::eDAISY;
    using DAISY = EnetQosGmiiMdiISelectInputFields::DAISY;
  };

  // ENET_QOS_PHY_RXD_I_SELECT_INPUT_0 DAISY Register
  struct EnetQosPhyRxdISelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT8
      eSELECT_GPIO_DISP_B1_02_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_06_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetQosPhyRxdISelectInput0Fields

  struct ENET_QOS_PHY_RXD_I_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E84F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetQosPhyRxdISelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetQosPhyRxdISelectInput0Fields::eDAISY;
    using DAISY = EnetQosPhyRxdISelectInput0Fields::DAISY;
  };

  // ENET_QOS_PHY_RXD_I_SELECT_INPUT_1 DAISY Register
  struct EnetQosPhyRxdISelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT8
      eSELECT_GPIO_DISP_B1_03_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_07_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetQosPhyRxdISelectInput1Fields

  struct ENET_QOS_PHY_RXD_I_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E84F4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetQosPhyRxdISelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetQosPhyRxdISelectInput1Fields::eDAISY;
    using DAISY = EnetQosPhyRxdISelectInput1Fields::DAISY;
  };

  // ENET_QOS_PHY_RXDV_I_SELECT_INPUT DAISY Register
  struct EnetQosPhyRxdvISelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT8
      eSELECT_GPIO_DISP_B1_00_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_08_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetQosPhyRxdvISelectInputFields

  struct ENET_QOS_PHY_RXDV_I_SELECT_INPUT : ftl::mmio::Register<
      0x400E84F8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetQosPhyRxdvISelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = EnetQosPhyRxdvISelectInputFields::eDAISY;
    using DAISY = EnetQosPhyRxdvISelectInputFields::DAISY;
  };

  // ENET_QOS_PHY_RXER_I_SELECT_INPUT DAISY Register
  struct EnetQosPhyRxerISelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_01_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_09_ALT8 = 1,
      // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT8
      eSELECT_GPIO_DISP_B2_10_ALT8 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnetQosPhyRxerISelectInputFields

  struct ENET_QOS_PHY_RXER_I_SELECT_INPUT : ftl::mmio::Register<
      0x400E84FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      EnetQosPhyRxerISelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = EnetQosPhyRxerISelectInputFields::eDAISY;
    using DAISY = EnetQosPhyRxerISelectInputFields::DAISY;
  };

  // FLEXPWM1_PWMA_SELECT_INPUT_0 DAISY Register
  struct Flexpwm1PwmaSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_23 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_23_ALT1 = 0,
      // Selecting Pad: GPIO_AD_00 for Mode: ALT4
      eSELECT_GPIO_AD_00_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmaSelectInput0Fields

  struct FLEXPWM1_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8500u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmaSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmaSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm1PwmaSelectInput0Fields::DAISY;
  };

  // FLEXPWM1_PWMA_SELECT_INPUT_1 DAISY Register
  struct Flexpwm1PwmaSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_25 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_25_ALT1 = 0,
      // Selecting Pad: GPIO_AD_02 for Mode: ALT4
      eSELECT_GPIO_AD_02_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmaSelectInput1Fields

  struct FLEXPWM1_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8504u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmaSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmaSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm1PwmaSelectInput1Fields::DAISY;
  };

  // FLEXPWM1_PWMA_SELECT_INPUT_2 DAISY Register
  struct Flexpwm1PwmaSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_27 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_27_ALT1 = 0,
      // Selecting Pad: GPIO_AD_04 for Mode: ALT4
      eSELECT_GPIO_AD_04_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmaSelectInput2Fields

  struct FLEXPWM1_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8508u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmaSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmaSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm1PwmaSelectInput2Fields::DAISY;
  };

  // FLEXPWM1_PWMB_SELECT_INPUT_0 DAISY Register
  struct Flexpwm1PwmbSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_24 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_24_ALT1 = 0,
      // Selecting Pad: GPIO_AD_01 for Mode: ALT4
      eSELECT_GPIO_AD_01_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmbSelectInput0Fields

  struct FLEXPWM1_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E850Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmbSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmbSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm1PwmbSelectInput0Fields::DAISY;
  };

  // FLEXPWM1_PWMB_SELECT_INPUT_1 DAISY Register
  struct Flexpwm1PwmbSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_26 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_26_ALT1 = 0,
      // Selecting Pad: GPIO_AD_03 for Mode: ALT4
      eSELECT_GPIO_AD_03_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmbSelectInput1Fields

  struct FLEXPWM1_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8510u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmbSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmbSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm1PwmbSelectInput1Fields::DAISY;
  };

  // FLEXPWM1_PWMB_SELECT_INPUT_2 DAISY Register
  struct Flexpwm1PwmbSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_28 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_28_ALT1 = 0,
      // Selecting Pad: GPIO_AD_05 for Mode: ALT4
      eSELECT_GPIO_AD_05_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm1PwmbSelectInput2Fields

  struct FLEXPWM1_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8514u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm1PwmbSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm1PwmbSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm1PwmbSelectInput2Fields::DAISY;
  };

  // FLEXPWM2_PWMA_SELECT_INPUT_0 DAISY Register
  struct Flexpwm2PwmaSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_06 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_06_ALT1 = 0,
      // Selecting Pad: GPIO_AD_24 for Mode: ALT4
      eSELECT_GPIO_AD_24_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmaSelectInput0Fields

  struct FLEXPWM2_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8518u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmaSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmaSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm2PwmaSelectInput0Fields::DAISY;
  };

  // FLEXPWM2_PWMA_SELECT_INPUT_1 DAISY Register
  struct Flexpwm2PwmaSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_08 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_08_ALT1 = 0,
      // Selecting Pad: GPIO_AD_26 for Mode: ALT4
      eSELECT_GPIO_AD_26_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmaSelectInput1Fields

  struct FLEXPWM2_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E851Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmaSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmaSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm2PwmaSelectInput1Fields::DAISY;
  };

  // FLEXPWM2_PWMA_SELECT_INPUT_2 DAISY Register
  struct Flexpwm2PwmaSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_10 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_10_ALT1 = 0,
      // Selecting Pad: GPIO_AD_28 for Mode: ALT4
      eSELECT_GPIO_AD_28_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmaSelectInput2Fields

  struct FLEXPWM2_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8520u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmaSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmaSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm2PwmaSelectInput2Fields::DAISY;
  };

  // FLEXPWM2_PWMB_SELECT_INPUT_0 DAISY Register
  struct Flexpwm2PwmbSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_07 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_07_ALT1 = 0,
      // Selecting Pad: GPIO_AD_25 for Mode: ALT4
      eSELECT_GPIO_AD_25_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmbSelectInput0Fields

  struct FLEXPWM2_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8524u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmbSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmbSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm2PwmbSelectInput0Fields::DAISY;
  };

  // FLEXPWM2_PWMB_SELECT_INPUT_1 DAISY Register
  struct Flexpwm2PwmbSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_09 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_09_ALT1 = 0,
      // Selecting Pad: GPIO_AD_27 for Mode: ALT4
      eSELECT_GPIO_AD_27_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmbSelectInput1Fields

  struct FLEXPWM2_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8528u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmbSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmbSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm2PwmbSelectInput1Fields::DAISY;
  };

  // FLEXPWM2_PWMB_SELECT_INPUT_2 DAISY Register
  struct Flexpwm2PwmbSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_11 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_11_ALT1 = 0,
      // Selecting Pad: GPIO_AD_29 for Mode: ALT4
      eSELECT_GPIO_AD_29_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm2PwmbSelectInput2Fields

  struct FLEXPWM2_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E852Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm2PwmbSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm2PwmbSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm2PwmbSelectInput2Fields::DAISY;
  };

  // FLEXPWM3_PWMA_SELECT_INPUT_0 DAISY Register
  struct Flexpwm3PwmaSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_29 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_29_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_00_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmaSelectInput0Fields

  struct FLEXPWM3_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8530u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmaSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmaSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm3PwmaSelectInput0Fields::DAISY;
  };

  // FLEXPWM3_PWMA_SELECT_INPUT_1 DAISY Register
  struct Flexpwm3PwmaSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_31 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_31_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_02_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmaSelectInput1Fields

  struct FLEXPWM3_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8534u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmaSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmaSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm3PwmaSelectInput1Fields::DAISY;
  };

  // FLEXPWM3_PWMA_SELECT_INPUT_2 DAISY Register
  struct Flexpwm3PwmaSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_33 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_33_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_04_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmaSelectInput2Fields

  struct FLEXPWM3_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8538u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmaSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmaSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm3PwmaSelectInput2Fields::DAISY;
  };

  // FLEXPWM3_PWMA_SELECT_INPUT_3 DAISY Register
  struct Flexpwm3PwmaSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_21 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_21_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_06_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmaSelectInput3Fields

  struct FLEXPWM3_PWMA_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E853Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmaSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmaSelectInput3Fields::eDAISY;
    using DAISY = Flexpwm3PwmaSelectInput3Fields::DAISY;
  };

  // FLEXPWM3_PWMB_SELECT_INPUT_0 DAISY Register
  struct Flexpwm3PwmbSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_30 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_30_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_01_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmbSelectInput0Fields

  struct FLEXPWM3_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8540u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmbSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmbSelectInput0Fields::eDAISY;
    using DAISY = Flexpwm3PwmbSelectInput0Fields::DAISY;
  };

  // FLEXPWM3_PWMB_SELECT_INPUT_1 DAISY Register
  struct Flexpwm3PwmbSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_32 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_32_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_03_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmbSelectInput1Fields

  struct FLEXPWM3_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8544u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmbSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmbSelectInput1Fields::eDAISY;
    using DAISY = Flexpwm3PwmbSelectInput1Fields::DAISY;
  };

  // FLEXPWM3_PWMB_SELECT_INPUT_2 DAISY Register
  struct Flexpwm3PwmbSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_34 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_34_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_05_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmbSelectInput2Fields

  struct FLEXPWM3_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8548u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmbSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmbSelectInput2Fields::eDAISY;
    using DAISY = Flexpwm3PwmbSelectInput2Fields::DAISY;
  };

  // FLEXPWM3_PWMB_SELECT_INPUT_3 DAISY Register
  struct Flexpwm3PwmbSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_22 for Mode: ALT1
      eSELECT_GPIO_EMC_B1_22_ALT1 = 0,
      // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT11
      eSELECT_GPIO_EMC_B2_07_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexpwm3PwmbSelectInput3Fields

  struct FLEXPWM3_PWMB_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E854Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexpwm3PwmbSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexpwm3PwmbSelectInput3Fields::eDAISY;
    using DAISY = Flexpwm3PwmbSelectInput3Fields::DAISY;
  };

  // FLEXSPI1_I_DQS_FA_SELECT_INPUT DAISY Register
  struct Flexspi1IDqsFaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_18 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_18_ALT6 = 0,
      // Selecting Pad: GPIO_AD_17 for Mode: ALT3
      eSELECT_GPIO_AD_17_ALT3 = 1,
      // Selecting Pad: GPIO_SD_B2_05 for Mode: ALT1
      eSELECT_GPIO_SD_B2_05_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IDqsFaSelectInputFields

  struct FLEXSPI1_I_DQS_FA_SELECT_INPUT : ftl::mmio::Register<
      0x400E8550u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IDqsFaSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Flexspi1IDqsFaSelectInputFields::eDAISY;
    using DAISY = Flexspi1IDqsFaSelectInputFields::DAISY;
  };

  // FLEXSPI1_I_IO_FA_SELECT_INPUT_0 DAISY Register
  struct Flexspi1IIoFaSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_20 for Mode: ALT3
      eSELECT_GPIO_AD_20_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_08 for Mode: ALT1
      eSELECT_GPIO_SD_B2_08_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFaSelectInput0Fields

  struct FLEXSPI1_I_IO_FA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8554u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFaSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFaSelectInput0Fields::eDAISY;
    using DAISY = Flexspi1IIoFaSelectInput0Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FA_SELECT_INPUT_1 DAISY Register
  struct Flexspi1IIoFaSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_21 for Mode: ALT3
      eSELECT_GPIO_AD_21_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_09 for Mode: ALT1
      eSELECT_GPIO_SD_B2_09_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFaSelectInput1Fields

  struct FLEXSPI1_I_IO_FA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8558u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFaSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFaSelectInput1Fields::eDAISY;
    using DAISY = Flexspi1IIoFaSelectInput1Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FA_SELECT_INPUT_2 DAISY Register
  struct Flexspi1IIoFaSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_22 for Mode: ALT3
      eSELECT_GPIO_AD_22_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_10 for Mode: ALT1
      eSELECT_GPIO_SD_B2_10_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFaSelectInput2Fields

  struct FLEXSPI1_I_IO_FA_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E855Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFaSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFaSelectInput2Fields::eDAISY;
    using DAISY = Flexspi1IIoFaSelectInput2Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FA_SELECT_INPUT_3 DAISY Register
  struct Flexspi1IIoFaSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_23 for Mode: ALT3
      eSELECT_GPIO_AD_23_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT1
      eSELECT_GPIO_SD_B2_11_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFaSelectInput3Fields

  struct FLEXSPI1_I_IO_FA_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E8560u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFaSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFaSelectInput3Fields::eDAISY;
    using DAISY = Flexspi1IIoFaSelectInput3Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FB_SELECT_INPUT_0 DAISY Register
  struct Flexspi1IIoFbSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_15 for Mode: ALT3
      eSELECT_GPIO_AD_15_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_03 for Mode: ALT1
      eSELECT_GPIO_SD_B2_03_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFbSelectInput0Fields

  struct FLEXSPI1_I_IO_FB_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8564u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFbSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFbSelectInput0Fields::eDAISY;
    using DAISY = Flexspi1IIoFbSelectInput0Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FB_SELECT_INPUT_1 DAISY Register
  struct Flexspi1IIoFbSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_14 for Mode: ALT3
      eSELECT_GPIO_AD_14_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_02 for Mode: ALT1
      eSELECT_GPIO_SD_B2_02_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFbSelectInput1Fields

  struct FLEXSPI1_I_IO_FB_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8568u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFbSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFbSelectInput1Fields::eDAISY;
    using DAISY = Flexspi1IIoFbSelectInput1Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FB_SELECT_INPUT_2 DAISY Register
  struct Flexspi1IIoFbSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_13 for Mode: ALT3
      eSELECT_GPIO_AD_13_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_01 for Mode: ALT1
      eSELECT_GPIO_SD_B2_01_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFbSelectInput2Fields

  struct FLEXSPI1_I_IO_FB_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E856Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFbSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFbSelectInput2Fields::eDAISY;
    using DAISY = Flexspi1IIoFbSelectInput2Fields::DAISY;
  };

  // FLEXSPI1_I_IO_FB_SELECT_INPUT_3 DAISY Register
  struct Flexspi1IIoFbSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_12 for Mode: ALT3
      eSELECT_GPIO_AD_12_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_00 for Mode: ALT1
      eSELECT_GPIO_SD_B2_00_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1IIoFbSelectInput3Fields

  struct FLEXSPI1_I_IO_FB_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E8570u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1IIoFbSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1IIoFbSelectInput3Fields::eDAISY;
    using DAISY = Flexspi1IIoFbSelectInput3Fields::DAISY;
  };

  // FLEXSPI1_I_SCK_FA_SELECT_INPUT DAISY Register
  struct Flexspi1ISckFaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_19 for Mode: ALT3
      eSELECT_GPIO_AD_19_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_07 for Mode: ALT1
      eSELECT_GPIO_SD_B2_07_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1ISckFaSelectInputFields

  struct FLEXSPI1_I_SCK_FA_SELECT_INPUT : ftl::mmio::Register<
      0x400E8574u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1ISckFaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1ISckFaSelectInputFields::eDAISY;
    using DAISY = Flexspi1ISckFaSelectInputFields::DAISY;
  };

  // FLEXSPI1_I_SCK_FB_SELECT_INPUT DAISY Register
  struct Flexspi1ISckFbSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_16 for Mode: ALT3
      eSELECT_GPIO_AD_16_ALT3 = 0,
      // Selecting Pad: GPIO_SD_B2_04 for Mode: ALT1
      eSELECT_GPIO_SD_B2_04_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi1ISckFbSelectInputFields

  struct FLEXSPI1_I_SCK_FB_SELECT_INPUT : ftl::mmio::Register<
      0x400E8578u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi1ISckFbSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi1ISckFbSelectInputFields::eDAISY;
    using DAISY = Flexspi1ISckFbSelectInputFields::DAISY;
  };

  // FLEXSPI2_I_IO_FA_SELECT_INPUT_0 DAISY Register
  struct Flexspi2IIoFaSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_13 for Mode: ALT4
      eSELECT_GPIO_EMC_B2_13_ALT4 = 0,
      // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT6
      eSELECT_GPIO_SD_B1_02_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi2IIoFaSelectInput0Fields

  struct FLEXSPI2_I_IO_FA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E857Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi2IIoFaSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi2IIoFaSelectInput0Fields::eDAISY;
    using DAISY = Flexspi2IIoFaSelectInput0Fields::DAISY;
  };

  // FLEXSPI2_I_IO_FA_SELECT_INPUT_1 DAISY Register
  struct Flexspi2IIoFaSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT4
      eSELECT_GPIO_EMC_B2_14_ALT4 = 0,
      // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT6
      eSELECT_GPIO_SD_B1_03_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi2IIoFaSelectInput1Fields

  struct FLEXSPI2_I_IO_FA_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E8580u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi2IIoFaSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi2IIoFaSelectInput1Fields::eDAISY;
    using DAISY = Flexspi2IIoFaSelectInput1Fields::DAISY;
  };

  // FLEXSPI2_I_IO_FA_SELECT_INPUT_2 DAISY Register
  struct Flexspi2IIoFaSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT4
      eSELECT_GPIO_EMC_B2_15_ALT4 = 0,
      // Selecting Pad: GPIO_SD_B1_04 for Mode: ALT6
      eSELECT_GPIO_SD_B1_04_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi2IIoFaSelectInput2Fields

  struct FLEXSPI2_I_IO_FA_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E8584u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi2IIoFaSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi2IIoFaSelectInput2Fields::eDAISY;
    using DAISY = Flexspi2IIoFaSelectInput2Fields::DAISY;
  };

  // FLEXSPI2_I_IO_FA_SELECT_INPUT_3 DAISY Register
  struct Flexspi2IIoFaSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_16 for Mode: ALT4
      eSELECT_GPIO_EMC_B2_16_ALT4 = 0,
      // Selecting Pad: GPIO_SD_B1_05 for Mode: ALT6
      eSELECT_GPIO_SD_B1_05_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi2IIoFaSelectInput3Fields

  struct FLEXSPI2_I_IO_FA_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E8588u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi2IIoFaSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi2IIoFaSelectInput3Fields::eDAISY;
    using DAISY = Flexspi2IIoFaSelectInput3Fields::DAISY;
  };

  // FLEXSPI2_I_SCK_FA_SELECT_INPUT DAISY Register
  struct Flexspi2ISckFaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT4
      eSELECT_GPIO_EMC_B2_10_ALT4 = 0,
      // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT6
      eSELECT_GPIO_SD_B1_01_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Flexspi2ISckFaSelectInputFields

  struct FLEXSPI2_I_SCK_FA_SELECT_INPUT : ftl::mmio::Register<
      0x400E858Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Flexspi2ISckFaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Flexspi2ISckFaSelectInputFields::eDAISY;
    using DAISY = Flexspi2ISckFaSelectInputFields::DAISY;
  };

  // GPT3_CAPIN1_SELECT_INPUT DAISY Register
  struct Gpt3Capin1SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_06_ALT1 = 0,
      // Selecting Pad: GPIO_AD_06 for Mode: ALT3
      eSELECT_GPIO_AD_06_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpt3Capin1SelectInputFields

  struct GPT3_CAPIN1_SELECT_INPUT : ftl::mmio::Register<
      0x400E8590u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpt3Capin1SelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Gpt3Capin1SelectInputFields::eDAISY;
    using DAISY = Gpt3Capin1SelectInputFields::DAISY;
  };

  // GPT3_CAPIN2_SELECT_INPUT DAISY Register
  struct Gpt3Capin2SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_07_ALT1 = 0,
      // Selecting Pad: GPIO_AD_07 for Mode: ALT3
      eSELECT_GPIO_AD_07_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpt3Capin2SelectInputFields

  struct GPT3_CAPIN2_SELECT_INPUT : ftl::mmio::Register<
      0x400E8594u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpt3Capin2SelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Gpt3Capin2SelectInputFields::eDAISY;
    using DAISY = Gpt3Capin2SelectInputFields::DAISY;
  };

  // GPT3_CLKIN_SELECT_INPUT DAISY Register
  struct Gpt3ClkinSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_05_ALT1 = 0,
      // Selecting Pad: GPIO_AD_11 for Mode: ALT3
      eSELECT_GPIO_AD_11_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gpt3ClkinSelectInputFields

  struct GPT3_CLKIN_SELECT_INPUT : ftl::mmio::Register<
      0x400E8598u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Gpt3ClkinSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Gpt3ClkinSelectInputFields::eDAISY;
    using DAISY = Gpt3ClkinSelectInputFields::DAISY;
  };

  // KPP_COL_SELECT_INPUT_6 DAISY Register
  struct KppColSelectInput6Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_23 for Mode: ALT6
      eSELECT_GPIO_AD_23_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT8
      eSELECT_GPIO_SD_B1_03_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KppColSelectInput6Fields

  struct KPP_COL_SELECT_INPUT_6 : ftl::mmio::Register<
      0x400E859Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KppColSelectInput6Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = KppColSelectInput6Fields::eDAISY;
    using DAISY = KppColSelectInput6Fields::DAISY;
  };

  // KPP_COL_SELECT_INPUT_7 DAISY Register
  struct KppColSelectInput7Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_21 for Mode: ALT6
      eSELECT_GPIO_AD_21_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT8
      eSELECT_GPIO_SD_B1_01_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KppColSelectInput7Fields

  struct KPP_COL_SELECT_INPUT_7 : ftl::mmio::Register<
      0x400E85A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KppColSelectInput7Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = KppColSelectInput7Fields::eDAISY;
    using DAISY = KppColSelectInput7Fields::DAISY;
  };

  // KPP_ROW_SELECT_INPUT_6 DAISY Register
  struct KppRowSelectInput6Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_22 for Mode: ALT6
      eSELECT_GPIO_AD_22_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT8
      eSELECT_GPIO_SD_B1_02_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KppRowSelectInput6Fields

  struct KPP_ROW_SELECT_INPUT_6 : ftl::mmio::Register<
      0x400E85A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KppRowSelectInput6Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = KppRowSelectInput6Fields::eDAISY;
    using DAISY = KppRowSelectInput6Fields::DAISY;
  };

  // KPP_ROW_SELECT_INPUT_7 DAISY Register
  struct KppRowSelectInput7Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_20 for Mode: ALT6
      eSELECT_GPIO_AD_20_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_00 for Mode: ALT8
      eSELECT_GPIO_SD_B1_00_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct KppRowSelectInput7Fields

  struct KPP_ROW_SELECT_INPUT_7 : ftl::mmio::Register<
      0x400E85A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      KppRowSelectInput7Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = KppRowSelectInput7Fields::eDAISY;
    using DAISY = KppRowSelectInput7Fields::DAISY;
  };

  // LPI2C1_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c1Lpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_08 for Mode: ALT1
      eSELECT_GPIO_AD_08_ALT1 = 0,
      // Selecting Pad: GPIO_AD_32 for Mode: ALT0
      eSELECT_GPIO_AD_32_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c1Lpi2cSclSelectInputFields

  struct LPI2C1_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x400E85ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c1Lpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c1Lpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c1Lpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C1_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c1Lpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_09 for Mode: ALT1
      eSELECT_GPIO_AD_09_ALT1 = 0,
      // Selecting Pad: GPIO_AD_33 for Mode: ALT0
      eSELECT_GPIO_AD_33_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c1Lpi2cSdaSelectInputFields

  struct LPI2C1_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x400E85B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c1Lpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c1Lpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c1Lpi2cSdaSelectInputFields::DAISY;
  };

  // LPI2C2_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c2Lpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_00_ALT9 = 0,
      // Selecting Pad: GPIO_AD_18 for Mode: ALT9
      eSELECT_GPIO_AD_18_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c2Lpi2cSclSelectInputFields

  struct LPI2C2_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x400E85B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c2Lpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c2Lpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c2Lpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C2_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c2Lpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_01_ALT9 = 0,
      // Selecting Pad: GPIO_AD_19 for Mode: ALT9
      eSELECT_GPIO_AD_19_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c2Lpi2cSdaSelectInputFields

  struct LPI2C2_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x400E85B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c2Lpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c2Lpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c2Lpi2cSdaSelectInputFields::DAISY;
  };

  // LPI2C3_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c3Lpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_02_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT6
      eSELECT_GPIO_DISP_B2_10_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c3Lpi2cSclSelectInputFields

  struct LPI2C3_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x400E85BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c3Lpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c3Lpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c3Lpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C3_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c3Lpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_03_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_11 for Mode: ALT6
      eSELECT_GPIO_DISP_B2_11_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c3Lpi2cSdaSelectInputFields

  struct LPI2C3_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x400E85C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c3Lpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c3Lpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c3Lpi2cSdaSelectInputFields::DAISY;
  };

  // LPI2C4_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c4Lpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_24 for Mode: ALT9
      eSELECT_GPIO_AD_24_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B2_12 for Mode: ALT6
      eSELECT_GPIO_DISP_B2_12_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c4Lpi2cSclSelectInputFields

  struct LPI2C4_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x400E85C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c4Lpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c4Lpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c4Lpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C4_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c4Lpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_25 for Mode: ALT9
      eSELECT_GPIO_AD_25_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT6
      eSELECT_GPIO_DISP_B2_13_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c4Lpi2cSdaSelectInputFields

  struct LPI2C4_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x400E85C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c4Lpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c4Lpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c4Lpi2cSdaSelectInputFields::DAISY;
  };

  // LPSPI1_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct Lpspi1LpspiPcsSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_01_ALT8 = 0,
      // Selecting Pad: GPIO_AD_29 for Mode: ALT0
      eSELECT_GPIO_AD_29_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi1LpspiPcsSelectInput0Fields

  struct LPSPI1_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E85CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi1LpspiPcsSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi1LpspiPcsSelectInput0Fields::eDAISY;
    using DAISY = Lpspi1LpspiPcsSelectInput0Fields::DAISY;
  };

  // LPSPI1_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct Lpspi1LpspiSckSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_00_ALT8 = 0,
      // Selecting Pad: GPIO_AD_28 for Mode: ALT0
      eSELECT_GPIO_AD_28_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi1LpspiSckSelectInputFields

  struct LPSPI1_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x400E85D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi1LpspiSckSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi1LpspiSckSelectInputFields::eDAISY;
    using DAISY = Lpspi1LpspiSckSelectInputFields::DAISY;
  };

  // LPSPI1_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct Lpspi1LpspiSdiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_03_ALT8 = 0,
      // Selecting Pad: GPIO_AD_31 for Mode: ALT0
      eSELECT_GPIO_AD_31_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi1LpspiSdiSelectInputFields

  struct LPSPI1_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x400E85D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi1LpspiSdiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi1LpspiSdiSelectInputFields::eDAISY;
    using DAISY = Lpspi1LpspiSdiSelectInputFields::DAISY;
  };

  // LPSPI1_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct Lpspi1LpspiSdoSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_02_ALT8 = 0,
      // Selecting Pad: GPIO_AD_30 for Mode: ALT0
      eSELECT_GPIO_AD_30_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi1LpspiSdoSelectInputFields

  struct LPSPI1_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x400E85D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi1LpspiSdoSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi1LpspiSdoSelectInputFields::eDAISY;
    using DAISY = Lpspi1LpspiSdoSelectInputFields::DAISY;
  };

  // LPSPI2_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct Lpspi2LpspiPcsSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_25 for Mode: ALT1
      eSELECT_GPIO_AD_25_ALT1 = 0,
      // Selecting Pad: GPIO_SD_B2_08 for Mode: ALT6
      eSELECT_GPIO_SD_B2_08_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi2LpspiPcsSelectInput0Fields

  struct LPSPI2_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E85DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi2LpspiPcsSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi2LpspiPcsSelectInput0Fields::eDAISY;
    using DAISY = Lpspi2LpspiPcsSelectInput0Fields::DAISY;
  };

  // LPSPI2_LPSPI_PCS_SELECT_INPUT_1 DAISY Register
  struct Lpspi2LpspiPcsSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_21 for Mode: ALT2
      eSELECT_GPIO_AD_21_ALT2 = 0,
      // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT6
      eSELECT_GPIO_SD_B2_11_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi2LpspiPcsSelectInput1Fields

  struct LPSPI2_LPSPI_PCS_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E85E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi2LpspiPcsSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi2LpspiPcsSelectInput1Fields::eDAISY;
    using DAISY = Lpspi2LpspiPcsSelectInput1Fields::DAISY;
  };

  // LPSPI2_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct Lpspi2LpspiSckSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_24 for Mode: ALT1
      eSELECT_GPIO_AD_24_ALT1 = 0,
      // Selecting Pad: GPIO_SD_B2_07 for Mode: ALT6
      eSELECT_GPIO_SD_B2_07_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi2LpspiSckSelectInputFields

  struct LPSPI2_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x400E85E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi2LpspiSckSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi2LpspiSckSelectInputFields::eDAISY;
    using DAISY = Lpspi2LpspiSckSelectInputFields::DAISY;
  };

  // LPSPI2_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct Lpspi2LpspiSdiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_27 for Mode: ALT1
      eSELECT_GPIO_AD_27_ALT1 = 0,
      // Selecting Pad: GPIO_SD_B2_10 for Mode: ALT6
      eSELECT_GPIO_SD_B2_10_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi2LpspiSdiSelectInputFields

  struct LPSPI2_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x400E85E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi2LpspiSdiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi2LpspiSdiSelectInputFields::eDAISY;
    using DAISY = Lpspi2LpspiSdiSelectInputFields::DAISY;
  };

  // LPSPI2_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct Lpspi2LpspiSdoSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_26 for Mode: ALT1
      eSELECT_GPIO_AD_26_ALT1 = 0,
      // Selecting Pad: GPIO_SD_B2_09 for Mode: ALT6
      eSELECT_GPIO_SD_B2_09_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi2LpspiSdoSelectInputFields

  struct LPSPI2_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x400E85ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi2LpspiSdoSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi2LpspiSdoSelectInputFields::eDAISY;
    using DAISY = Lpspi2LpspiSdoSelectInputFields::DAISY;
  };

  // LPSPI3_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct Lpspi3LpspiPcsSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_05_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_07 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_07_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiPcsSelectInput0Fields

  struct LPSPI3_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E85F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiPcsSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiPcsSelectInput0Fields::eDAISY;
    using DAISY = Lpspi3LpspiPcsSelectInput0Fields::DAISY;
  };

  // LPSPI3_LPSPI_PCS_SELECT_INPUT_1 DAISY Register
  struct Lpspi3LpspiPcsSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_08 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_08_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_08_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiPcsSelectInput1Fields

  struct LPSPI3_LPSPI_PCS_SELECT_INPUT_1 : ftl::mmio::Register<
      0x400E85F4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiPcsSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiPcsSelectInput1Fields::eDAISY;
    using DAISY = Lpspi3LpspiPcsSelectInput1Fields::DAISY;
  };

  // LPSPI3_LPSPI_PCS_SELECT_INPUT_2 DAISY Register
  struct Lpspi3LpspiPcsSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_09 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_09_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_09_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiPcsSelectInput2Fields

  struct LPSPI3_LPSPI_PCS_SELECT_INPUT_2 : ftl::mmio::Register<
      0x400E85F8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiPcsSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiPcsSelectInput2Fields::eDAISY;
    using DAISY = Lpspi3LpspiPcsSelectInput2Fields::DAISY;
  };

  // LPSPI3_LPSPI_PCS_SELECT_INPUT_3 DAISY Register
  struct Lpspi3LpspiPcsSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_10_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_10 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_10_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiPcsSelectInput3Fields

  struct LPSPI3_LPSPI_PCS_SELECT_INPUT_3 : ftl::mmio::Register<
      0x400E85FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiPcsSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiPcsSelectInput3Fields::eDAISY;
    using DAISY = Lpspi3LpspiPcsSelectInput3Fields::DAISY;
  };

  // LPSPI3_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct Lpspi3LpspiSckSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_04_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_04_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiSckSelectInputFields

  struct LPSPI3_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x400E8600u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiSckSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiSckSelectInputFields::eDAISY;
    using DAISY = Lpspi3LpspiSckSelectInputFields::DAISY;
  };

  // LPSPI3_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct Lpspi3LpspiSdiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_07_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_05_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiSdiSelectInputFields

  struct LPSPI3_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x400E8604u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiSdiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiSdiSelectInputFields::eDAISY;
    using DAISY = Lpspi3LpspiSdiSelectInputFields::DAISY;
  };

  // LPSPI3_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct Lpspi3LpspiSdoSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_06_ALT8 = 0,
      // Selecting Pad: GPIO_DISP_B1_06 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_06_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi3LpspiSdoSelectInputFields

  struct LPSPI3_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x400E8608u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi3LpspiSdoSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi3LpspiSdoSelectInputFields::eDAISY;
    using DAISY = Lpspi3LpspiSdoSelectInputFields::DAISY;
  };

  // LPSPI4_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct Lpspi4LpspiPcsSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_SD_B2_01 for Mode: ALT4
      eSELECT_GPIO_SD_B2_01_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_15_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi4LpspiPcsSelectInput0Fields

  struct LPSPI4_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E860Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi4LpspiPcsSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi4LpspiPcsSelectInput0Fields::eDAISY;
    using DAISY = Lpspi4LpspiPcsSelectInput0Fields::DAISY;
  };

  // LPSPI4_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct Lpspi4LpspiSckSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_SD_B2_00 for Mode: ALT4
      eSELECT_GPIO_SD_B2_00_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B2_12 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_12_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi4LpspiSckSelectInputFields

  struct LPSPI4_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x400E8610u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi4LpspiSckSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi4LpspiSckSelectInputFields::eDAISY;
    using DAISY = Lpspi4LpspiSckSelectInputFields::DAISY;
  };

  // LPSPI4_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct Lpspi4LpspiSdiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_SD_B2_03 for Mode: ALT4
      eSELECT_GPIO_SD_B2_03_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_13_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi4LpspiSdiSelectInputFields

  struct LPSPI4_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x400E8614u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi4LpspiSdiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi4LpspiSdiSelectInputFields::eDAISY;
    using DAISY = Lpspi4LpspiSdiSelectInputFields::DAISY;
  };

  // LPSPI4_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct Lpspi4LpspiSdoSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_SD_B2_02 for Mode: ALT4
      eSELECT_GPIO_SD_B2_02_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_14_ALT9 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi4LpspiSdoSelectInputFields

  struct LPSPI4_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x400E8618u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi4LpspiSdoSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi4LpspiSdoSelectInputFields::eDAISY;
    using DAISY = Lpspi4LpspiSdoSelectInputFields::DAISY;
  };

  // LPUART1_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart1LpuartRxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_25 for Mode: ALT0
      eSELECT_GPIO_AD_25_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_03_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_09_ALT9 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart1LpuartRxdSelectInputFields

  struct LPUART1_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E861Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart1LpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Lpuart1LpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart1LpuartRxdSelectInputFields::DAISY;
  };

  // LPUART1_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart1LpuartTxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_24 for Mode: ALT0
      eSELECT_GPIO_AD_24_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT9
      eSELECT_GPIO_DISP_B1_02_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_08_ALT9 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart1LpuartTxdSelectInputFields

  struct LPUART1_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8620u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart1LpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Lpuart1LpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart1LpuartTxdSelectInputFields::DAISY;
  };

  // LPUART10_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart10LpuartRxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_16 for Mode: ALT1
      eSELECT_GPIO_AD_16_ALT1 = 0,
      // Selecting Pad: GPIO_AD_33 for Mode: ALT8
      eSELECT_GPIO_AD_33_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart10LpuartRxdSelectInputFields

  struct LPUART10_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8624u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart10LpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart10LpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart10LpuartRxdSelectInputFields::DAISY;
  };

  // LPUART10_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart10LpuartTxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_15 for Mode: ALT1
      eSELECT_GPIO_AD_15_ALT1 = 0,
      // Selecting Pad: GPIO_AD_32 for Mode: ALT8
      eSELECT_GPIO_AD_32_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart10LpuartTxdSelectInputFields

  struct LPUART10_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8628u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart10LpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart10LpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart10LpuartTxdSelectInputFields::DAISY;
  };

  // LPUART7_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart7LpuartRxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_01 for Mode: ALT6
      eSELECT_GPIO_AD_01_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_07_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart7LpuartRxdSelectInputFields

  struct LPUART7_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E862Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart7LpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart7LpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart7LpuartRxdSelectInputFields::DAISY;
  };

  // LPUART7_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart7LpuartTxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_00 for Mode: ALT6
      eSELECT_GPIO_AD_00_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_06_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart7LpuartTxdSelectInputFields

  struct LPUART7_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8630u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart7LpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart7LpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart7LpuartTxdSelectInputFields::DAISY;
  };

  // LPUART8_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart8LpuartRxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_03 for Mode: ALT6
      eSELECT_GPIO_AD_03_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_09_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart8LpuartRxdSelectInputFields

  struct LPUART8_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8634u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart8LpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart8LpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart8LpuartRxdSelectInputFields::DAISY;
  };

  // LPUART8_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart8LpuartTxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_02 for Mode: ALT6
      eSELECT_GPIO_AD_02_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT2
      eSELECT_GPIO_DISP_B2_08_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart8LpuartTxdSelectInputFields

  struct LPUART8_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x400E8638u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart8LpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart8LpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart8LpuartTxdSelectInputFields::DAISY;
  };

  // QTIMER1_TMR0_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer1Tmr0InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_17 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_17_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_09 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_09_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_00_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer1Tmr0InputSelectInputFields

  struct QTIMER1_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E863Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer1Tmr0InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer1Tmr0InputSelectInputFields::eDAISY;
    using DAISY = Qtimer1Tmr0InputSelectInputFields::DAISY;
  };

  // QTIMER1_TMR1_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer1Tmr1InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_38 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_38_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_10_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_01_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer1Tmr1InputSelectInputFields

  struct QTIMER1_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8640u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer1Tmr1InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer1Tmr1InputSelectInputFields::eDAISY;
    using DAISY = Qtimer1Tmr1InputSelectInputFields::DAISY;
  };

  // QTIMER1_TMR2_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer1Tmr2InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_11_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_02_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer1Tmr2InputSelectInputFields

  struct QTIMER1_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8644u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer1Tmr2InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Qtimer1Tmr2InputSelectInputFields::eDAISY;
    using DAISY = Qtimer1Tmr2InputSelectInputFields::DAISY;
  };

  // QTIMER2_TMR0_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer2Tmr0InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_18 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_18_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_13 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_13_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_03_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer2Tmr0InputSelectInputFields

  struct QTIMER2_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8648u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer2Tmr0InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer2Tmr0InputSelectInputFields::eDAISY;
    using DAISY = Qtimer2Tmr0InputSelectInputFields::DAISY;
  };

  // QTIMER2_TMR1_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer2Tmr1InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_39 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_39_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_14_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_04_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer2Tmr1InputSelectInputFields

  struct QTIMER2_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E864Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer2Tmr1InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer2Tmr1InputSelectInputFields::eDAISY;
    using DAISY = Qtimer2Tmr1InputSelectInputFields::DAISY;
  };

  // QTIMER2_TMR2_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer2Tmr2InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_15_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_05_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer2Tmr2InputSelectInputFields

  struct QTIMER2_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8650u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer2Tmr2InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Qtimer2Tmr2InputSelectInputFields::eDAISY;
    using DAISY = Qtimer2Tmr2InputSelectInputFields::DAISY;
  };

  // QTIMER3_TMR0_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer3Tmr0InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_19 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_19_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_17 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_17_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_06 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_06_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer3Tmr0InputSelectInputFields

  struct QTIMER3_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8654u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer3Tmr0InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer3Tmr0InputSelectInputFields::eDAISY;
    using DAISY = Qtimer3Tmr0InputSelectInputFields::DAISY;
  };

  // QTIMER3_TMR1_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer3Tmr1InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_00_ALT2 = 0,
      // Selecting Pad: GPIO_EMC_B2_18 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_18_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_07 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_07_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer3Tmr1InputSelectInputFields

  struct QTIMER3_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8658u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer3Tmr1InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer3Tmr1InputSelectInputFields::eDAISY;
    using DAISY = Qtimer3Tmr1InputSelectInputFields::DAISY;
  };

  // QTIMER3_TMR2_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer3Tmr2InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_19 for Mode: ALT9
      eSELECT_GPIO_EMC_B2_19_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_08_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer3Tmr2InputSelectInputFields

  struct QTIMER3_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E865Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer3Tmr2InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Qtimer3Tmr2InputSelectInputFields::eDAISY;
    using DAISY = Qtimer3Tmr2InputSelectInputFields::DAISY;
  };

  // QTIMER4_TMR0_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer4Tmr0InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B1_20 for Mode: ALT2
      eSELECT_GPIO_EMC_B1_20_ALT2 = 0,
      // Selecting Pad: GPIO_AD_04 for Mode: ALT9
      eSELECT_GPIO_AD_04_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_09_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer4Tmr0InputSelectInputFields

  struct QTIMER4_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8660u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer4Tmr0InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer4Tmr0InputSelectInputFields::eDAISY;
    using DAISY = Qtimer4Tmr0InputSelectInputFields::DAISY;
  };

  // QTIMER4_TMR1_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer4Tmr1InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT2
      eSELECT_GPIO_EMC_B2_01_ALT2 = 0,
      // Selecting Pad: GPIO_AD_05 for Mode: ALT9
      eSELECT_GPIO_AD_05_ALT9 = 1,
      // Selecting Pad: GPIO_DISP_B1_10 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_10_ALT3 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer4Tmr1InputSelectInputFields

  struct QTIMER4_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8664u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer4Tmr1InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Qtimer4Tmr1InputSelectInputFields::eDAISY;
    using DAISY = Qtimer4Tmr1InputSelectInputFields::DAISY;
  };

  // QTIMER4_TMR2_INPUT_SELECT_INPUT DAISY Register
  struct Qtimer4Tmr2InputSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_06 for Mode: ALT9
      eSELECT_GPIO_AD_06_ALT9 = 0,
      // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT3
      eSELECT_GPIO_DISP_B1_11_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Qtimer4Tmr2InputSelectInputFields

  struct QTIMER4_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
      0x400E8668u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Qtimer4Tmr2InputSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Qtimer4Tmr2InputSelectInputFields::eDAISY;
    using DAISY = Qtimer4Tmr2InputSelectInputFields::DAISY;
  };

  // SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT DAISY Register
  struct Sai1IpgClkSaiMclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_17 for Mode: ALT0
      eSELECT_GPIO_AD_17_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_03 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_03_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1IpgClkSaiMclkSelectInputFields

  struct SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E866Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1IpgClkSaiMclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1IpgClkSaiMclkSelectInputFields::eDAISY;
    using DAISY = Sai1IpgClkSaiMclkSelectInputFields::DAISY;
  };

  // SAI1_SAI_RXBCLK_SELECT_INPUT DAISY Register
  struct Sai1SaiRxbclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_19 for Mode: ALT0
      eSELECT_GPIO_AD_19_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_05_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1SaiRxbclkSelectInputFields

  struct SAI1_SAI_RXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E8670u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1SaiRxbclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1SaiRxbclkSelectInputFields::eDAISY;
    using DAISY = Sai1SaiRxbclkSelectInputFields::DAISY;
  };

  // SAI1_SAI_RXDATA_SELECT_INPUT_0 DAISY Register
  struct Sai1SaiRxdataSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_20 for Mode: ALT0
      eSELECT_GPIO_AD_20_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_06_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1SaiRxdataSelectInput0Fields

  struct SAI1_SAI_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x400E8674u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1SaiRxdataSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1SaiRxdataSelectInput0Fields::eDAISY;
    using DAISY = Sai1SaiRxdataSelectInput0Fields::DAISY;
  };

  // SAI1_SAI_RXSYNC_SELECT_INPUT DAISY Register
  struct Sai1SaiRxsyncSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_18 for Mode: ALT0
      eSELECT_GPIO_AD_18_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_04 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_04_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1SaiRxsyncSelectInputFields

  struct SAI1_SAI_RXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x400E8678u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1SaiRxsyncSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1SaiRxsyncSelectInputFields::eDAISY;
    using DAISY = Sai1SaiRxsyncSelectInputFields::DAISY;
  };

  // SAI1_SAI_TXBCLK_SELECT_INPUT DAISY Register
  struct Sai1SaiTxbclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_22 for Mode: ALT0
      eSELECT_GPIO_AD_22_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_08_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1SaiTxbclkSelectInputFields

  struct SAI1_SAI_TXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x400E867Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1SaiTxbclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1SaiTxbclkSelectInputFields::eDAISY;
    using DAISY = Sai1SaiTxbclkSelectInputFields::DAISY;
  };

  // SAI1_SAI_TXSYNC_SELECT_INPUT DAISY Register
  struct Sai1SaiTxsyncSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_23 for Mode: ALT0
      eSELECT_GPIO_AD_23_ALT0 = 0,
      // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT4
      eSELECT_GPIO_DISP_B2_09_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai1SaiTxsyncSelectInputFields

  struct SAI1_SAI_TXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x400E8680u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai1SaiTxsyncSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai1SaiTxsyncSelectInputFields::eDAISY;
    using DAISY = Sai1SaiTxsyncSelectInputFields::DAISY;
  };

  // EMVSIM1_SIO_SELECT_INPUT DAISY Register
  struct Emvsim1SioSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_11_ALT8 = 0,
      // Selecting Pad: GPIO_AD_00 for Mode: ALT0
      eSELECT_GPIO_AD_00_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim1SioSelectInputFields

  struct EMVSIM1_SIO_SELECT_INPUT : ftl::mmio::Register<
      0x400E869Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim1SioSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim1SioSelectInputFields::eDAISY;
    using DAISY = Emvsim1SioSelectInputFields::DAISY;
  };

  // EMVSIM1_IPP_SIMPD_SELECT_INPUT DAISY Register
  struct Emvsim1IppSimpdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_15_ALT8 = 0,
      // Selecting Pad: GPIO_AD_04 for Mode: ALT0
      eSELECT_GPIO_AD_04_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim1IppSimpdSelectInputFields

  struct EMVSIM1_IPP_SIMPD_SELECT_INPUT : ftl::mmio::Register<
      0x400E86A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim1IppSimpdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim1IppSimpdSelectInputFields::eDAISY;
    using DAISY = Emvsim1IppSimpdSelectInputFields::DAISY;
  };

  // EMVSIM1_POWER_FAIL_SELECT_INPUT DAISY Register
  struct Emvsim1PowerFailSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_16 for Mode: ALT8
      eSELECT_GPIO_EMC_B2_16_ALT8 = 0,
      // Selecting Pad: GPIO_AD_05 for Mode: ALT0
      eSELECT_GPIO_AD_05_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim1PowerFailSelectInputFields

  struct EMVSIM1_POWER_FAIL_SELECT_INPUT : ftl::mmio::Register<
      0x400E86A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim1PowerFailSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim1PowerFailSelectInputFields::eDAISY;
    using DAISY = Emvsim1PowerFailSelectInputFields::DAISY;
  };

  // EMVSIM2_SIO_SELECT_INPUT DAISY Register
  struct Emvsim2SioSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_06 for Mode: ALT2
      eSELECT_GPIO_AD_06_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_10_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim2SioSelectInputFields

  struct EMVSIM2_SIO_SELECT_INPUT : ftl::mmio::Register<
      0x400E86A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim2SioSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim2SioSelectInputFields::eDAISY;
    using DAISY = Emvsim2SioSelectInputFields::DAISY;
  };

  // EMVSIM2_IPP_SIMPD_SELECT_INPUT DAISY Register
  struct Emvsim2IppSimpdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_10 for Mode: ALT2
      eSELECT_GPIO_AD_10_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_14_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim2IppSimpdSelectInputFields

  struct EMVSIM2_IPP_SIMPD_SELECT_INPUT : ftl::mmio::Register<
      0x400E86ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim2IppSimpdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim2IppSimpdSelectInputFields::eDAISY;
    using DAISY = Emvsim2IppSimpdSelectInputFields::DAISY;
  };

  // EMVSIM2_POWER_FAIL_SELECT_INPUT DAISY Register
  struct Emvsim2PowerFailSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_11 for Mode: ALT2
      eSELECT_GPIO_AD_11_ALT2 = 0,
      // Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT1
      eSELECT_GPIO_DISP_B2_15_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Emvsim2PowerFailSelectInputFields

  struct EMVSIM2_POWER_FAIL_SELECT_INPUT : ftl::mmio::Register<
      0x400E86B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Emvsim2PowerFailSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Emvsim2PowerFailSelectInputFields::eDAISY;
    using DAISY = Emvsim2PowerFailSelectInputFields::DAISY;
  };

  // SPDIF_SPDIF_IN1_SELECT_INPUT DAISY Register
  struct SpdifSpdifIn1SelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_11_ALT1 = 0,
      // Selecting Pad: GPIO_AD_15 for Mode: ALT0
      eSELECT_GPIO_AD_15_ALT0 = 1,
      // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT9
      eSELECT_GPIO_DISP_B2_10_ALT9 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SpdifSpdifIn1SelectInputFields

  struct SPDIF_SPDIF_IN1_SELECT_INPUT : ftl::mmio::Register<
      0x400E86B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SpdifSpdifIn1SelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = SpdifSpdifIn1SelectInputFields::eDAISY;
    using DAISY = SpdifSpdifIn1SelectInputFields::DAISY;
  };

  // USB_OTG2_OC_SELECT_INPUT DAISY Register
  struct UsbOtg2OcSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_06 for Mode: ALT0
      eSELECT_GPIO_AD_06_ALT0 = 0,
      // Selecting Pad: GPIO_AD_30 for Mode: ALT1
      eSELECT_GPIO_AD_30_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UsbOtg2OcSelectInputFields

  struct USB_OTG2_OC_SELECT_INPUT : ftl::mmio::Register<
      0x400E86B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      UsbOtg2OcSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = UsbOtg2OcSelectInputFields::eDAISY;
    using DAISY = UsbOtg2OcSelectInputFields::DAISY;
  };

  // USB_OTG_OC_SELECT_INPUT DAISY Register
  struct UsbOtgOcSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_11 for Mode: ALT0
      eSELECT_GPIO_AD_11_ALT0 = 0,
      // Selecting Pad: GPIO_AD_35 for Mode: ALT1
      eSELECT_GPIO_AD_35_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UsbOtgOcSelectInputFields

  struct USB_OTG_OC_SELECT_INPUT : ftl::mmio::Register<
      0x400E86BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      UsbOtgOcSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = UsbOtgOcSelectInputFields::eDAISY;
    using DAISY = UsbOtgOcSelectInputFields::DAISY;
  };

  // USBPHY1_USB_ID_SELECT_INPUT DAISY Register
  struct Usbphy1UsbIdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_09 for Mode: ALT0
      eSELECT_GPIO_AD_09_ALT0 = 0,
      // Selecting Pad: GPIO_AD_33 for Mode: ALT1
      eSELECT_GPIO_AD_33_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usbphy1UsbIdSelectInputFields

  struct USBPHY1_USB_ID_SELECT_INPUT : ftl::mmio::Register<
      0x400E86C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usbphy1UsbIdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usbphy1UsbIdSelectInputFields::eDAISY;
    using DAISY = Usbphy1UsbIdSelectInputFields::DAISY;
  };

  // USBPHY2_USB_ID_SELECT_INPUT DAISY Register
  struct Usbphy2UsbIdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_08 for Mode: ALT0
      eSELECT_GPIO_AD_08_ALT0 = 0,
      // Selecting Pad: GPIO_AD_32 for Mode: ALT1
      eSELECT_GPIO_AD_32_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usbphy2UsbIdSelectInputFields

  struct USBPHY2_USB_ID_SELECT_INPUT : ftl::mmio::Register<
      0x400E86C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usbphy2UsbIdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usbphy2UsbIdSelectInputFields::eDAISY;
    using DAISY = Usbphy2UsbIdSelectInputFields::DAISY;
  };

  // USDHC1_IPP_CARD_DET_SELECT_INPUT DAISY Register
  struct Usdhc1IppCardDetSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_32 for Mode: ALT4
      eSELECT_GPIO_AD_32_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_08_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usdhc1IppCardDetSelectInputFields

  struct USDHC1_IPP_CARD_DET_SELECT_INPUT : ftl::mmio::Register<
      0x400E86C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usdhc1IppCardDetSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usdhc1IppCardDetSelectInputFields::eDAISY;
    using DAISY = Usdhc1IppCardDetSelectInputFields::DAISY;
  };

  // USDHC1_IPP_WP_ON_SELECT_INPUT DAISY Register
  struct Usdhc1IppWpOnSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_AD_33 for Mode: ALT4
      eSELECT_GPIO_AD_33_ALT4 = 0,
      // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT2
      eSELECT_GPIO_DISP_B1_09_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usdhc1IppWpOnSelectInputFields

  struct USDHC1_IPP_WP_ON_SELECT_INPUT : ftl::mmio::Register<
      0x400E86CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usdhc1IppWpOnSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usdhc1IppWpOnSelectInputFields::eDAISY;
    using DAISY = Usdhc1IppWpOnSelectInputFields::DAISY;
  };

  // USDHC2_IPP_CARD_DET_SELECT_INPUT DAISY Register
  struct Usdhc2IppCardDetSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_01_ALT1 = 0,
      // Selecting Pad: GPIO_AD_26 for Mode: ALT11
      eSELECT_GPIO_AD_26_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usdhc2IppCardDetSelectInputFields

  struct USDHC2_IPP_CARD_DET_SELECT_INPUT : ftl::mmio::Register<
      0x400E86D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usdhc2IppCardDetSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usdhc2IppCardDetSelectInputFields::eDAISY;
    using DAISY = Usdhc2IppCardDetSelectInputFields::DAISY;
  };

  // USDHC2_IPP_WP_ON_SELECT_INPUT DAISY Register
  struct Usdhc2IppWpOnSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT1
      eSELECT_GPIO_EMC_B2_02_ALT1 = 0,
      // Selecting Pad: GPIO_AD_27 for Mode: ALT11
      eSELECT_GPIO_AD_27_ALT11 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Usdhc2IppWpOnSelectInputFields

  struct USDHC2_IPP_WP_ON_SELECT_INPUT : ftl::mmio::Register<
      0x400E86D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Usdhc2IppWpOnSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Usdhc2IppWpOnSelectInputFields::eDAISY;
    using DAISY = Usdhc2IppWpOnSelectInputFields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_20 DAISY Register
  struct Xbar1InSelectInput20Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_00_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_00 for Mode: ALT2
      eSELECT_GPIO_SD_B1_00_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput20Fields

  struct XBAR1_IN_SELECT_INPUT_20 : ftl::mmio::Register<
      0x400E86D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput20Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput20Fields::eDAISY;
    using DAISY = Xbar1InSelectInput20Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_21 DAISY Register
  struct Xbar1InSelectInput21Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_01_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT2
      eSELECT_GPIO_SD_B1_01_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput21Fields

  struct XBAR1_IN_SELECT_INPUT_21 : ftl::mmio::Register<
      0x400E86DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput21Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput21Fields::eDAISY;
    using DAISY = Xbar1InSelectInput21Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_22 DAISY Register
  struct Xbar1InSelectInput22Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_02_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT2
      eSELECT_GPIO_SD_B1_02_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput22Fields

  struct XBAR1_IN_SELECT_INPUT_22 : ftl::mmio::Register<
      0x400E86E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput22Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput22Fields::eDAISY;
    using DAISY = Xbar1InSelectInput22Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_23 DAISY Register
  struct Xbar1InSelectInput23Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_03_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT2
      eSELECT_GPIO_SD_B1_03_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput23Fields

  struct XBAR1_IN_SELECT_INPUT_23 : ftl::mmio::Register<
      0x400E86E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput23Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput23Fields::eDAISY;
    using DAISY = Xbar1InSelectInput23Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_24 DAISY Register
  struct Xbar1InSelectInput24Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_04_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_04 for Mode: ALT2
      eSELECT_GPIO_SD_B1_04_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput24Fields

  struct XBAR1_IN_SELECT_INPUT_24 : ftl::mmio::Register<
      0x400E86E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput24Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput24Fields::eDAISY;
    using DAISY = Xbar1InSelectInput24Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_25 DAISY Register
  struct Xbar1InSelectInput25Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_05_ALT6 = 0,
      // Selecting Pad: GPIO_SD_B1_05 for Mode: ALT2
      eSELECT_GPIO_SD_B1_05_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput25Fields

  struct XBAR1_IN_SELECT_INPUT_25 : ftl::mmio::Register<
      0x400E86ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput25Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput25Fields::eDAISY;
    using DAISY = Xbar1InSelectInput25Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_26 DAISY Register
  struct Xbar1InSelectInput26Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_06_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_00_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput26Fields

  struct XBAR1_IN_SELECT_INPUT_26 : ftl::mmio::Register<
      0x400E86F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput26Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput26Fields::eDAISY;
    using DAISY = Xbar1InSelectInput26Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_27 DAISY Register
  struct Xbar1InSelectInput27Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_07_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_01_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput27Fields

  struct XBAR1_IN_SELECT_INPUT_27 : ftl::mmio::Register<
      0x400E86F4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput27Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput27Fields::eDAISY;
    using DAISY = Xbar1InSelectInput27Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_28 DAISY Register
  struct Xbar1InSelectInput28Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_08 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_08_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_02_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput28Fields

  struct XBAR1_IN_SELECT_INPUT_28 : ftl::mmio::Register<
      0x400E86F8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput28Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput28Fields::eDAISY;
    using DAISY = Xbar1InSelectInput28Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_29 DAISY Register
  struct Xbar1InSelectInput29Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_09 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_09_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_03_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput29Fields

  struct XBAR1_IN_SELECT_INPUT_29 : ftl::mmio::Register<
      0x400E86FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput29Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput29Fields::eDAISY;
    using DAISY = Xbar1InSelectInput29Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_30 DAISY Register
  struct Xbar1InSelectInput30Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_10_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_04_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput30Fields

  struct XBAR1_IN_SELECT_INPUT_30 : ftl::mmio::Register<
      0x400E8700u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput30Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput30Fields::eDAISY;
    using DAISY = Xbar1InSelectInput30Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_31 DAISY Register
  struct Xbar1InSelectInput31Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_11_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_05_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput31Fields

  struct XBAR1_IN_SELECT_INPUT_31 : ftl::mmio::Register<
      0x400E8704u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput31Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput31Fields::eDAISY;
    using DAISY = Xbar1InSelectInput31Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_32 DAISY Register
  struct Xbar1InSelectInput32Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_12 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_12_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_06 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_06_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput32Fields

  struct XBAR1_IN_SELECT_INPUT_32 : ftl::mmio::Register<
      0x400E8708u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput32Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput32Fields::eDAISY;
    using DAISY = Xbar1InSelectInput32Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_33 DAISY Register
  struct Xbar1InSelectInput33Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_13 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_13_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_07 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_07_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput33Fields

  struct XBAR1_IN_SELECT_INPUT_33 : ftl::mmio::Register<
      0x400E870Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput33Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput33Fields::eDAISY;
    using DAISY = Xbar1InSelectInput33Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_34 DAISY Register
  struct Xbar1InSelectInput34Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_14_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_08_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput34Fields

  struct XBAR1_IN_SELECT_INPUT_34 : ftl::mmio::Register<
      0x400E8710u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput34Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput34Fields::eDAISY;
    using DAISY = Xbar1InSelectInput34Fields::DAISY;
  };

  // XBAR1_IN_SELECT_INPUT_35 DAISY Register
  struct Xbar1InSelectInput35Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT6
      eSELECT_GPIO_EMC_B2_15_ALT6 = 0,
      // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT4
      eSELECT_GPIO_DISP_B1_09_ALT4 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Xbar1InSelectInput35Fields

  struct XBAR1_IN_SELECT_INPUT_35 : ftl::mmio::Register<
      0x400E8714u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Xbar1InSelectInput35Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Xbar1InSelectInput35Fields::eDAISY;
    using DAISY = Xbar1InSelectInput35Fields::DAISY;
  };

};

}  // namespace regs