#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::iomuxc {

// SW_MUX_CTL_PAD_GPIO_EMC_B1_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_00 : ftl::mmio::Register<
    0x400E8010u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_01 : ftl::mmio::Register<
    0x400E8014u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_02 : ftl::mmio::Register<
    0x400E8018u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_03 : ftl::mmio::Register<
    0x400E801Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_04 : ftl::mmio::Register<
    0x400E8020u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_05 : ftl::mmio::Register<
    0x400E8024u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_06 : ftl::mmio::Register<
    0x400E8028u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_07 : ftl::mmio::Register<
    0x400E802Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_08 : ftl::mmio::Register<
    0x400E8030u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_09 : ftl::mmio::Register<
    0x400E8034u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_10 : ftl::mmio::Register<
    0x400E8038u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_11 : ftl::mmio::Register<
    0x400E803Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_12 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_12 : ftl::mmio::Register<
    0x400E8040u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_12_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_13 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_13 : ftl::mmio::Register<
    0x400E8044u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_13_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_14 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_14 : ftl::mmio::Register<
    0x400E8048u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_14_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_15 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_15 : ftl::mmio::Register<
    0x400E804Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_15_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_16 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_16 : ftl::mmio::Register<
    0x400E8050u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_16_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_17 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_17 : ftl::mmio::Register<
    0x400E8054u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_17_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_18 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_18 : ftl::mmio::Register<
    0x400E8058u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_18_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_19 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_19 : ftl::mmio::Register<
    0x400E805Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_19_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_20 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_20 : ftl::mmio::Register<
    0x400E8060u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_20_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_21 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_21 : ftl::mmio::Register<
    0x400E8064u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_21_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_22 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_22 : ftl::mmio::Register<
    0x400E8068u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_22_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_23 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_23 : ftl::mmio::Register<
    0x400E806Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_23_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_24 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_24 : ftl::mmio::Register<
    0x400E8070u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_24_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_25 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_25 : ftl::mmio::Register<
    0x400E8074u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_25_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_26 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_26 : ftl::mmio::Register<
    0x400E8078u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_26_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_27 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_27 : ftl::mmio::Register<
    0x400E807Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_27_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_28 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_28 : ftl::mmio::Register<
    0x400E8080u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_28_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_29 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_29 : ftl::mmio::Register<
    0x400E8084u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_29_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_30 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_30 : ftl::mmio::Register<
    0x400E8088u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_30_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_31 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_31 : ftl::mmio::Register<
    0x400E808Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_31_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_32 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_32 : ftl::mmio::Register<
    0x400E8090u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_32_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_33 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_33 : ftl::mmio::Register<
    0x400E8094u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_33_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_34 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_34 : ftl::mmio::Register<
    0x400E8098u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_34_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_35 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_35 : ftl::mmio::Register<
    0x400E809Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_35_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_36 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_36 : ftl::mmio::Register<
    0x400E80A0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_36_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_37 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_37 : ftl::mmio::Register<
    0x400E80A4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_37_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_38 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_38 : ftl::mmio::Register<
    0x400E80A8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_38_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_39 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_39 : ftl::mmio::Register<
    0x400E80ACu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_39_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_40 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_40 : ftl::mmio::Register<
    0x400E80B0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_40_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B1_41 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B1_41 : ftl::mmio::Register<
    0x400E80B4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B1_41_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_00 : ftl::mmio::Register<
    0x400E80B8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_01 : ftl::mmio::Register<
    0x400E80BCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_02 : ftl::mmio::Register<
    0x400E80C0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_03 : ftl::mmio::Register<
    0x400E80C4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_04 : ftl::mmio::Register<
    0x400E80C8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_05 : ftl::mmio::Register<
    0x400E80CCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_06 : ftl::mmio::Register<
    0x400E80D0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_07 : ftl::mmio::Register<
    0x400E80D4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_08 : ftl::mmio::Register<
    0x400E80D8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_09 : ftl::mmio::Register<
    0x400E80DCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_10 : ftl::mmio::Register<
    0x400E80E0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_11 : ftl::mmio::Register<
    0x400E80E4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_12 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_12 : ftl::mmio::Register<
    0x400E80E8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_12_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_13 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_13 : ftl::mmio::Register<
    0x400E80ECu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_13_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_14 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_14 : ftl::mmio::Register<
    0x400E80F0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_14_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_15 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_15 : ftl::mmio::Register<
    0x400E80F4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_15_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_16 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_16 : ftl::mmio::Register<
    0x400E80F8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_16_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_17 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_17 : ftl::mmio::Register<
    0x400E80FCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_17_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_18 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_18 : ftl::mmio::Register<
    0x400E8100u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_18_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_19 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_19 : ftl::mmio::Register<
    0x400E8104u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_19_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_EMC_B2_20 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_

struct SW_MUX_CTL_PAD_GPIO_EMC_B2_20 : ftl::mmio::Register<
    0x400E8108u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_EMC_B2_20_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_00_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_00 : ftl::mmio::Register<
    0x400E810Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_01_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_01 : ftl::mmio::Register<
    0x400E8110u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_02_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_02 : ftl::mmio::Register<
    0x400E8114u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_03_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_03 : ftl::mmio::Register<
    0x400E8118u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_04_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_04 : ftl::mmio::Register<
    0x400E811Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_05_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_05 : ftl::mmio::Register<
    0x400E8120u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_06_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_06 : ftl::mmio::Register<
    0x400E8124u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_07_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_07 : ftl::mmio::Register<
    0x400E8128u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_08_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_08 : ftl::mmio::Register<
    0x400E812Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_09_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_09 : ftl::mmio::Register<
    0x400E8130u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_10_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_10 : ftl::mmio::Register<
    0x400E8134u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_11_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_11 : ftl::mmio::Register<
    0x400E8138u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_12 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_12_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_12_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_12 : ftl::mmio::Register<
    0x400E813Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_12_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_12_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_12_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_12_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_12_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_12_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_13 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_13_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_13_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_13 : ftl::mmio::Register<
    0x400E8140u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_13_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_13_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_13_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_13_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_13_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_13_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_14 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_14_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_14_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_14 : ftl::mmio::Register<
    0x400E8144u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_14_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_14_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_14_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_14_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_14_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_14_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_15 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_15_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_15_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_15 : ftl::mmio::Register<
    0x400E8148u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_15_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_15_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_15_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_15_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_15_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_15_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_16 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_16_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_16_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_16 : ftl::mmio::Register<
    0x400E814Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_16_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_16_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_16_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_16_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_16_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_16_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_17 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_17_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_17_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_17 : ftl::mmio::Register<
    0x400E8150u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_17_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_17_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_17_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_17_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_17_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_17_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_18 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_18_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_18_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_18 : ftl::mmio::Register<
    0x400E8154u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_18_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_18_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_18_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_18_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_18_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_18_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_19 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_19_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_19_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_19 : ftl::mmio::Register<
    0x400E8158u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_19_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_19_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_19_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_19_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_19_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_19_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_20 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_20_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_20_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_20 : ftl::mmio::Register<
    0x400E815Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_20_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_20_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_20_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_20_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_20_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_20_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_21 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_21_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_21_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_21 : ftl::mmio::Register<
    0x400E8160u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_21_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_21_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_21_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_21_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_21_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_21_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_22 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_22_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_22_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_22 : ftl::mmio::Register<
    0x400E8164u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_22_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_22_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_22_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_22_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_22_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_22_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_23 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_23_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_23_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_23 : ftl::mmio::Register<
    0x400E8168u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_23_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_23_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_23_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_23_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_23_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_23_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_24 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_24_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_24_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_24 : ftl::mmio::Register<
    0x400E816Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_24_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_24_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_24_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_24_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_24_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_24_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_25 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_25_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_25_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_25 : ftl::mmio::Register<
    0x400E8170u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_25_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_25_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_25_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_25_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_25_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_25_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_26 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_26_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_26_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_26 : ftl::mmio::Register<
    0x400E8174u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_26_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_26_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_26_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_26_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_26_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_26_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_27 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_27_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_27_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_27 : ftl::mmio::Register<
    0x400E8178u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_27_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_27_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_27_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_27_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_27_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_27_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_28 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_28_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_28_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_28 : ftl::mmio::Register<
    0x400E817Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_28_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_28_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_28_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_28_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_28_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_28_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_29 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_29_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_29_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_29 : ftl::mmio::Register<
    0x400E8180u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_29_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_29_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_29_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_29_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_29_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_29_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_30 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_30_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_30_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_30 : ftl::mmio::Register<
    0x400E8184u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_30_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_30_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_30_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_30_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_30_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_30_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_31 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_31_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_31_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_31 : ftl::mmio::Register<
    0x400E8188u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_31_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_31_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_31_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_31_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_31_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_31_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_32 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_32_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_32_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_32 : ftl::mmio::Register<
    0x400E818Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_32_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_32_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_32_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_32_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_32_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_32_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_33 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_33_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_33_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_33 : ftl::mmio::Register<
    0x400E8190u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_33_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_33_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_33_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_33_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_33_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_33_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_34 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_34_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_34_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_34 : ftl::mmio::Register<
    0x400E8194u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_34_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_34_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_34_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_34_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_34_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_34_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_AD_35 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_AD_35_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_AD_35_fields_

struct SW_MUX_CTL_PAD_GPIO_AD_35 : ftl::mmio::Register<
    0x400E8198u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_AD_35_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_AD_35_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_35_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_AD_35_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_AD_35_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_AD_35_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_00 : ftl::mmio::Register<
    0x400E819Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_01 : ftl::mmio::Register<
    0x400E81A0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_02 : ftl::mmio::Register<
    0x400E81A4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_03 : ftl::mmio::Register<
    0x400E81A8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_04 : ftl::mmio::Register<
    0x400E81ACu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B1_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B1_05 : ftl::mmio::Register<
    0x400E81B0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B1_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_00 : ftl::mmio::Register<
    0x400E81B4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_01 : ftl::mmio::Register<
    0x400E81B8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_02 : ftl::mmio::Register<
    0x400E81BCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_03 : ftl::mmio::Register<
    0x400E81C0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_04 : ftl::mmio::Register<
    0x400E81C4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_05 : ftl::mmio::Register<
    0x400E81C8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_06 : ftl::mmio::Register<
    0x400E81CCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_07 : ftl::mmio::Register<
    0x400E81D0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_08 : ftl::mmio::Register<
    0x400E81D4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_09 : ftl::mmio::Register<
    0x400E81D8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_10 : ftl::mmio::Register<
    0x400E81DCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_SD_B2_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_

struct SW_MUX_CTL_PAD_GPIO_SD_B2_11 : ftl::mmio::Register<
    0x400E81E0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SD_B2_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_00 : ftl::mmio::Register<
    0x400E81E4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_01 : ftl::mmio::Register<
    0x400E81E8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_02 : ftl::mmio::Register<
    0x400E81ECu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_03 : ftl::mmio::Register<
    0x400E81F0u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_04 : ftl::mmio::Register<
    0x400E81F4u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_05 : ftl::mmio::Register<
    0x400E81F8u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_06 : ftl::mmio::Register<
    0x400E81FCu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_07 : ftl::mmio::Register<
    0x400E8200u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_08 : ftl::mmio::Register<
    0x400E8204u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_09 : ftl::mmio::Register<
    0x400E8208u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_10 : ftl::mmio::Register<
    0x400E820Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B1_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B1_11 : ftl::mmio::Register<
    0x400E8210u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B1_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_00 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_00 : ftl::mmio::Register<
    0x400E8214u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_00_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_01 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_01 : ftl::mmio::Register<
    0x400E8218u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_01_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_02 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_02 : ftl::mmio::Register<
    0x400E821Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_02_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_03 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_03 : ftl::mmio::Register<
    0x400E8220u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_03_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_04 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_04 : ftl::mmio::Register<
    0x400E8224u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_04_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_05 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_05 : ftl::mmio::Register<
    0x400E8228u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_05_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_06 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_06 : ftl::mmio::Register<
    0x400E822Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_06_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_07 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_07 : ftl::mmio::Register<
    0x400E8230u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_07_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_08 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_08 : ftl::mmio::Register<
    0x400E8234u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_08_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_09 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_09 : ftl::mmio::Register<
    0x400E8238u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_09_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_10 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_10 : ftl::mmio::Register<
    0x400E823Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_10_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_11 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_11 : ftl::mmio::Register<
    0x400E8240u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_11_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_12 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_12 : ftl::mmio::Register<
    0x400E8244u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_12_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_13 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_13 : ftl::mmio::Register<
    0x400E8248u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_13_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_14 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_14 : ftl::mmio::Register<
    0x400E824Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_14_fields_::SION;
};

// SW_MUX_CTL_PAD_GPIO_DISP_B2_15 SW MUX Control Register
namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_ {

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
}  // namespace SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_

struct SW_MUX_CTL_PAD_GPIO_DISP_B2_15 : ftl::mmio::Register<
    0x400E8250u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::MUX_MODE,
    SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_DISP_B2_15_fields_::SION;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_00 : ftl::mmio::Register<
    0x400E8254u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_01 : ftl::mmio::Register<
    0x400E8258u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_02 : ftl::mmio::Register<
    0x400E825Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_03 : ftl::mmio::Register<
    0x400E8260u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_04 : ftl::mmio::Register<
    0x400E8264u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_05 : ftl::mmio::Register<
    0x400E8268u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_06 : ftl::mmio::Register<
    0x400E826Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_07 : ftl::mmio::Register<
    0x400E8270u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_08 : ftl::mmio::Register<
    0x400E8274u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_09 : ftl::mmio::Register<
    0x400E8278u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_10 : ftl::mmio::Register<
    0x400E827Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_11 : ftl::mmio::Register<
    0x400E8280u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_12 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_12 : ftl::mmio::Register<
    0x400E8284u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_12_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_13 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_13 : ftl::mmio::Register<
    0x400E8288u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_13_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_14 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_14 : ftl::mmio::Register<
    0x400E828Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_14_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_15 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_15 : ftl::mmio::Register<
    0x400E8290u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_15_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_16 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_16 : ftl::mmio::Register<
    0x400E8294u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_16_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_17 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_17 : ftl::mmio::Register<
    0x400E8298u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_17_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_18 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_18 : ftl::mmio::Register<
    0x400E829Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_18_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_19 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_19 : ftl::mmio::Register<
    0x400E82A0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_19_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_20 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_20 : ftl::mmio::Register<
    0x400E82A4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_20_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_21 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_21 : ftl::mmio::Register<
    0x400E82A8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_21_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_22 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_22 : ftl::mmio::Register<
    0x400E82ACu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_22_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_23 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_23 : ftl::mmio::Register<
    0x400E82B0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_23_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_24 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_24 : ftl::mmio::Register<
    0x400E82B4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_24_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_25 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_25 : ftl::mmio::Register<
    0x400E82B8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_25_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_26 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_26 : ftl::mmio::Register<
    0x400E82BCu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_26_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_27 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_27 : ftl::mmio::Register<
    0x400E82C0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_27_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_28 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_28 : ftl::mmio::Register<
    0x400E82C4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_28_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_29 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_29 : ftl::mmio::Register<
    0x400E82C8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_29_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_30 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_30 : ftl::mmio::Register<
    0x400E82CCu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_30_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_31 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_31 : ftl::mmio::Register<
    0x400E82D0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_31_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_32 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_32 : ftl::mmio::Register<
    0x400E82D4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_32_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_33 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_33 : ftl::mmio::Register<
    0x400E82D8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_33_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_34 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_34 : ftl::mmio::Register<
    0x400E82DCu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_34_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_35 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_35 : ftl::mmio::Register<
    0x400E82E0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_35_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_36 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_36 : ftl::mmio::Register<
    0x400E82E4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_36_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_37 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_37 : ftl::mmio::Register<
    0x400E82E8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_37_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_38 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_38 : ftl::mmio::Register<
    0x400E82ECu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_38_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_39 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_39 : ftl::mmio::Register<
    0x400E82F0u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_39_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_40 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_40 : ftl::mmio::Register<
    0x400E82F4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_40_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B1_41 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B1_41 : ftl::mmio::Register<
    0x400E82F8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B1_41_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_00 : ftl::mmio::Register<
    0x400E82FCu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_01 : ftl::mmio::Register<
    0x400E8300u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_02 : ftl::mmio::Register<
    0x400E8304u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_03 : ftl::mmio::Register<
    0x400E8308u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_04 : ftl::mmio::Register<
    0x400E830Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_05 : ftl::mmio::Register<
    0x400E8310u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_06 : ftl::mmio::Register<
    0x400E8314u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_07 : ftl::mmio::Register<
    0x400E8318u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_08 : ftl::mmio::Register<
    0x400E831Cu,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_09 : ftl::mmio::Register<
    0x400E8320u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_10 : ftl::mmio::Register<
    0x400E8324u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_11 : ftl::mmio::Register<
    0x400E8328u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_12 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_12 : ftl::mmio::Register<
    0x400E832Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_12_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_13 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_13 : ftl::mmio::Register<
    0x400E8330u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_13_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_14 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_14 : ftl::mmio::Register<
    0x400E8334u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_14_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_15 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_15 : ftl::mmio::Register<
    0x400E8338u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_15_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_16 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_16 : ftl::mmio::Register<
    0x400E833Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_16_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_17 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_17 : ftl::mmio::Register<
    0x400E8340u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_17_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_18 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_18 : ftl::mmio::Register<
    0x400E8344u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_18_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_19 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_19 : ftl::mmio::Register<
    0x400E8348u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_19_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_EMC_B2_20 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_

struct SW_PAD_CTL_PAD_GPIO_EMC_B2_20 : ftl::mmio::Register<
    0x400E834Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_EMC_B2_20_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_00_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_00 : ftl::mmio::Register<
    0x400E8350u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_01_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_01 : ftl::mmio::Register<
    0x400E8354u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_02_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_02 : ftl::mmio::Register<
    0x400E8358u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_03_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_03 : ftl::mmio::Register<
    0x400E835Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_04_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_04 : ftl::mmio::Register<
    0x400E8360u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_05_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_05 : ftl::mmio::Register<
    0x400E8364u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_06_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_06 : ftl::mmio::Register<
    0x400E8368u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_07_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_07 : ftl::mmio::Register<
    0x400E836Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_08_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_08 : ftl::mmio::Register<
    0x400E8370u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_09_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_09 : ftl::mmio::Register<
    0x400E8374u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_10_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_10 : ftl::mmio::Register<
    0x400E8378u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_11_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_11 : ftl::mmio::Register<
    0x400E837Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_12 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_12_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_12_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_12 : ftl::mmio::Register<
    0x400E8380u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_12_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_13 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_13_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_13_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_13 : ftl::mmio::Register<
    0x400E8384u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_13_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_14 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_14_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_14_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_14 : ftl::mmio::Register<
    0x400E8388u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_14_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_15 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_15_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_15_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_15 : ftl::mmio::Register<
    0x400E838Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_15_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_16 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_16_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_16_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_16 : ftl::mmio::Register<
    0x400E8390u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_16_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_17 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_17_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_17_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_17 : ftl::mmio::Register<
    0x400E8394u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_17_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_18 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_18_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_18_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_18 : ftl::mmio::Register<
    0x400E8398u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_18_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_19 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_19_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_19_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_19 : ftl::mmio::Register<
    0x400E839Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_19_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_20 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_20_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_20_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_20 : ftl::mmio::Register<
    0x400E83A0u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_20_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_21 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_21_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_21_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_21 : ftl::mmio::Register<
    0x400E83A4u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_21_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_22 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_22_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_22_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_22 : ftl::mmio::Register<
    0x400E83A8u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_22_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_23 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_23_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_23_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_23 : ftl::mmio::Register<
    0x400E83ACu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_23_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_24 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_24_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_24_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_24 : ftl::mmio::Register<
    0x400E83B0u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_24_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_25 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_25_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_25_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_25 : ftl::mmio::Register<
    0x400E83B4u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_25_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_26 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_26_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_26_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_26 : ftl::mmio::Register<
    0x400E83B8u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_26_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_27 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_27_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_27_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_27 : ftl::mmio::Register<
    0x400E83BCu,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_27_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_28 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_28_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_28_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_28 : ftl::mmio::Register<
    0x400E83C0u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_28_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_29 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_29_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_29_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_29 : ftl::mmio::Register<
    0x400E83C4u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_29_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_30 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_30_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_30_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_30 : ftl::mmio::Register<
    0x400E83C8u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_30_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_31 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_31_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_31_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_31 : ftl::mmio::Register<
    0x400E83CCu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_31_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_32 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_32_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_32_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_32 : ftl::mmio::Register<
    0x400E83D0u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_32_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_33 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_33_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_33_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_33 : ftl::mmio::Register<
    0x400E83D4u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_33_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_34 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_34_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_34_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_34 : ftl::mmio::Register<
    0x400E83D8u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_34_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_AD_35 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_AD_35_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_AD_35_fields_

struct SW_PAD_CTL_PAD_GPIO_AD_35 : ftl::mmio::Register<
    0x400E83DCu,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_AD_35_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_00 : ftl::mmio::Register<
    0x400E83E0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_01 : ftl::mmio::Register<
    0x400E83E4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_02 : ftl::mmio::Register<
    0x400E83E8u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_03 : ftl::mmio::Register<
    0x400E83ECu,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_04 : ftl::mmio::Register<
    0x400E83F0u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B1_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B1_05 : ftl::mmio::Register<
    0x400E83F4u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B1_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_00 : ftl::mmio::Register<
    0x400E83F8u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_01 : ftl::mmio::Register<
    0x400E83FCu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_02 : ftl::mmio::Register<
    0x400E8400u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_03 : ftl::mmio::Register<
    0x400E8404u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_04 : ftl::mmio::Register<
    0x400E8408u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_05 : ftl::mmio::Register<
    0x400E840Cu,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_06 : ftl::mmio::Register<
    0x400E8410u,
    std::uint32_t,
    0x00000004u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_07 : ftl::mmio::Register<
    0x400E8414u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_08 : ftl::mmio::Register<
    0x400E8418u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_09 : ftl::mmio::Register<
    0x400E841Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_10 : ftl::mmio::Register<
    0x400E8420u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_SD_B2_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_

struct SW_PAD_CTL_PAD_GPIO_SD_B2_11 : ftl::mmio::Register<
    0x400E8424u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SD_B2_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_00 : ftl::mmio::Register<
    0x400E8428u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_01 : ftl::mmio::Register<
    0x400E842Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_02 : ftl::mmio::Register<
    0x400E8430u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_03 : ftl::mmio::Register<
    0x400E8434u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_04 : ftl::mmio::Register<
    0x400E8438u,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_05 : ftl::mmio::Register<
    0x400E843Cu,
    std::uint32_t,
    0x00000008u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_06 : ftl::mmio::Register<
    0x400E8440u,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_07 : ftl::mmio::Register<
    0x400E8444u,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_08 : ftl::mmio::Register<
    0x400E8448u,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_09 : ftl::mmio::Register<
    0x400E844Cu,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_10 : ftl::mmio::Register<
    0x400E8450u,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B1_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B1_11 : ftl::mmio::Register<
    0x400E8454u,
    std::uint32_t,
    0x0000000Cu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<1, 0>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::PDRV,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::PULL,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::DWP_LOCK> {
  using ePDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::ePDRV;
  using ePULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::ePULL;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::eDWP_LOCK;
  using PDRV = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::PDRV;
  using PULL = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::PULL;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B1_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_00 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_00 : ftl::mmio::Register<
    0x400E8458u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_00_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_01 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_01 : ftl::mmio::Register<
    0x400E845Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_01_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_02 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_02 : ftl::mmio::Register<
    0x400E8460u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_02_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_03 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_03 : ftl::mmio::Register<
    0x400E8464u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_03_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_04 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_04 : ftl::mmio::Register<
    0x400E8468u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_04_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_05 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_05 : ftl::mmio::Register<
    0x400E846Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_05_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_06 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_06 : ftl::mmio::Register<
    0x400E8470u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_06_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_07 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_07 : ftl::mmio::Register<
    0x400E8474u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_07_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_08 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_08 : ftl::mmio::Register<
    0x400E8478u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_08_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_09 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_09 : ftl::mmio::Register<
    0x400E847Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_09_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_10 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_10 : ftl::mmio::Register<
    0x400E8480u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_10_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_11 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_11 : ftl::mmio::Register<
    0x400E8484u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_11_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_12 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_12 : ftl::mmio::Register<
    0x400E8488u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_12_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_13 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_13 : ftl::mmio::Register<
    0x400E848Cu,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_13_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_14 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_14 : ftl::mmio::Register<
    0x400E8490u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_14_fields_::DWP_LOCK;
};

// SW_PAD_CTL_PAD_GPIO_DISP_B2_15 SW PAD Control Register
namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_ {

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
}  // namespace SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_

struct SW_PAD_CTL_PAD_GPIO_DISP_B2_15 : ftl::mmio::Register<
    0x400E8494u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::SRE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DSE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::PUS,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::ODE,
    ftl::mmio::Reserved<23, 5>,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DWP_LOCK> {
  using eSRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::eSRE;
  using eDSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::eDSE;
  using ePUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::ePUS;
  using eODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::eODE;
  using eDWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::eDWP_LOCK;
  using SRE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::SRE;
  using DSE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DSE;
  using PUE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::PUS;
  using ODE = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::ODE;
  using DWP = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_DISP_B2_15_fields_::DWP_LOCK;
};

// FLEXCAN1_RX_SELECT_INPUT DAISY Register
namespace FLEXCAN1_RX_SELECT_INPUT_fields_ {

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
}  // namespace FLEXCAN1_RX_SELECT_INPUT_fields_

struct FLEXCAN1_RX_SELECT_INPUT : ftl::mmio::Register<
    0x400E8498u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXCAN1_RX_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = FLEXCAN1_RX_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXCAN1_RX_SELECT_INPUT_fields_::DAISY;
};

// FLEXCAN2_RX_SELECT_INPUT DAISY Register
namespace FLEXCAN2_RX_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_01 for Mode: ALT1
    eSELECT_GPIO_AD_01_ALT1 = 0,
    // Selecting Pad: GPIO_AD_31 for Mode: ALT2
    eSELECT_GPIO_AD_31_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXCAN2_RX_SELECT_INPUT_fields_

struct FLEXCAN2_RX_SELECT_INPUT : ftl::mmio::Register<
    0x400E849Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXCAN2_RX_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXCAN2_RX_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXCAN2_RX_SELECT_INPUT_fields_::DAISY;
};

// CCM_ENET_QOS_REF_CLK_SELECT_INPUT DAISY Register
namespace CCM_ENET_QOS_REF_CLK_SELECT_INPUT_fields_ {

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
}  // namespace CCM_ENET_QOS_REF_CLK_SELECT_INPUT_fields_

struct CCM_ENET_QOS_REF_CLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E84A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CCM_ENET_QOS_REF_CLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = CCM_ENET_QOS_REF_CLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = CCM_ENET_QOS_REF_CLK_SELECT_INPUT_fields_::DAISY;
};

// CCM_ENET_QOS_TX_CLK_SELECT_INPUT DAISY Register
namespace CCM_ENET_QOS_TX_CLK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT8
    eSELECT_GPIO_DISP_B1_11_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT8
    eSELECT_GPIO_DISP_B2_05_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace CCM_ENET_QOS_TX_CLK_SELECT_INPUT_fields_

struct CCM_ENET_QOS_TX_CLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E84A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    CCM_ENET_QOS_TX_CLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = CCM_ENET_QOS_TX_CLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = CCM_ENET_QOS_TX_CLK_SELECT_INPUT_fields_::DAISY;
};

// ENET_IPG_CLK_RMII_SELECT_INPUT DAISY Register
namespace ENET_IPG_CLK_RMII_SELECT_INPUT_fields_ {

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
}  // namespace ENET_IPG_CLK_RMII_SELECT_INPUT_fields_

struct ENET_IPG_CLK_RMII_SELECT_INPUT : ftl::mmio::Register<
    0x400E84A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_IPG_CLK_RMII_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_IPG_CLK_RMII_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_IPG_CLK_RMII_SELECT_INPUT_fields_::DAISY;
};

// ENET_MAC0_MDIO_SELECT_INPUT DAISY Register
namespace ENET_MAC0_MDIO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_20_ALT1 = 0,
    // Selecting Pad: GPIO_AD_33 for Mode: ALT3
    eSELECT_GPIO_AD_33_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_MDIO_SELECT_INPUT_fields_

struct ENET_MAC0_MDIO_SELECT_INPUT : ftl::mmio::Register<
    0x400E84ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_MDIO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_MDIO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_MAC0_MDIO_SELECT_INPUT_fields_::DAISY;
};

// ENET_MAC0_RXDATA_SELECT_INPUT_0 DAISY Register
namespace ENET_MAC0_RXDATA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_26 for Mode: ALT3
    eSELECT_GPIO_AD_26_ALT3 = 0,
    // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_06_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_RXDATA_SELECT_INPUT_0_fields_

struct ENET_MAC0_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E84B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_RXDATA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_RXDATA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = ENET_MAC0_RXDATA_SELECT_INPUT_0_fields_::DAISY;
};

// ENET_MAC0_RXDATA_SELECT_INPUT_1 DAISY Register
namespace ENET_MAC0_RXDATA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_27 for Mode: ALT3
    eSELECT_GPIO_AD_27_ALT3 = 0,
    // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_07_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_RXDATA_SELECT_INPUT_1_fields_

struct ENET_MAC0_RXDATA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E84B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_RXDATA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_RXDATA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = ENET_MAC0_RXDATA_SELECT_INPUT_1_fields_::DAISY;
};

// ENET_MAC0_RXEN_SELECT_INPUT DAISY Register
namespace ENET_MAC0_RXEN_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_24 for Mode: ALT3
    eSELECT_GPIO_AD_24_ALT3 = 0,
    // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_08_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_RXEN_SELECT_INPUT_fields_

struct ENET_MAC0_RXEN_SELECT_INPUT : ftl::mmio::Register<
    0x400E84B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_RXEN_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_RXEN_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_MAC0_RXEN_SELECT_INPUT_fields_::DAISY;
};

// ENET_MAC0_RXERR_SELECT_INPUT DAISY Register
namespace ENET_MAC0_RXERR_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_25 for Mode: ALT3
    eSELECT_GPIO_AD_25_ALT3 = 0,
    // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_09_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_RXERR_SELECT_INPUT_fields_

struct ENET_MAC0_RXERR_SELECT_INPUT : ftl::mmio::Register<
    0x400E84BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_RXERR_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_RXERR_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_MAC0_RXERR_SELECT_INPUT_fields_::DAISY;
};

// ENET_MAC0_TXCLK_SELECT_INPUT DAISY Register
namespace ENET_MAC0_TXCLK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_29 for Mode: ALT3
    eSELECT_GPIO_AD_29_ALT3 = 0,
    // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_05_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_MAC0_TXCLK_SELECT_INPUT_fields_

struct ENET_MAC0_TXCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E84C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_MAC0_TXCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_MAC0_TXCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_MAC0_TXCLK_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_IPG_CLK_RMII_SELECT_INPUT DAISY Register
namespace ENET_1G_IPG_CLK_RMII_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_IPG_CLK_RMII_SELECT_INPUT_fields_

struct ENET_1G_IPG_CLK_RMII_SELECT_INPUT : ftl::mmio::Register<
    0x400E84C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_IPG_CLK_RMII_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_IPG_CLK_RMII_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_IPG_CLK_RMII_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_MDIO_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_MDIO_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_MDIO_SELECT_INPUT_fields_

struct ENET_1G_MAC0_MDIO_SELECT_INPUT : ftl::mmio::Register<
    0x400E84C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_MDIO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_MDIO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_MDIO_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXCLK_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXCLK_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXCLK_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E84CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXCLK_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXDATA_0_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXDATA_0_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXDATA_0_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXDATA_0_SELECT_INPUT : ftl::mmio::Register<
    0x400E84D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXDATA_0_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXDATA_0_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXDATA_0_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXDATA_1_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXDATA_1_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXDATA_1_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXDATA_1_SELECT_INPUT : ftl::mmio::Register<
    0x400E84D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXDATA_1_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXDATA_1_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXDATA_1_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXDATA_2_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXDATA_2_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXDATA_2_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXDATA_2_SELECT_INPUT : ftl::mmio::Register<
    0x400E84D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXDATA_2_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXDATA_2_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXDATA_2_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXDATA_3_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXDATA_3_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXDATA_3_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXDATA_3_SELECT_INPUT : ftl::mmio::Register<
    0x400E84DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXDATA_3_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXDATA_3_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXDATA_3_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXEN_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXEN_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_RXEN_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXEN_SELECT_INPUT : ftl::mmio::Register<
    0x400E84E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXEN_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_RXEN_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXEN_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_RXERR_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_RXERR_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_18 for Mode: ALT2
    eSELECT_GPIO_EMC_B2_18_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT2
    eSELECT_GPIO_DISP_B1_01_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_1G_MAC0_RXERR_SELECT_INPUT_fields_

struct ENET_1G_MAC0_RXERR_SELECT_INPUT : ftl::mmio::Register<
    0x400E84E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_RXERR_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_1G_MAC0_RXERR_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_RXERR_SELECT_INPUT_fields_::DAISY;
};

// ENET_1G_MAC0_TXCLK_SELECT_INPUT DAISY Register
namespace ENET_1G_MAC0_TXCLK_SELECT_INPUT_fields_ {

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
}  // namespace ENET_1G_MAC0_TXCLK_SELECT_INPUT_fields_

struct ENET_1G_MAC0_TXCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E84E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_1G_MAC0_TXCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_1G_MAC0_TXCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_1G_MAC0_TXCLK_SELECT_INPUT_fields_::DAISY;
};

// ENET_QOS_GMII_MDI_I_SELECT_INPUT DAISY Register
namespace ENET_QOS_GMII_MDI_I_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_20 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_20_ALT8 = 0,
    // Selecting Pad: GPIO_AD_27 for Mode: ALT9
    eSELECT_GPIO_AD_27_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_QOS_GMII_MDI_I_SELECT_INPUT_fields_

struct ENET_QOS_GMII_MDI_I_SELECT_INPUT : ftl::mmio::Register<
    0x400E84ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_QOS_GMII_MDI_I_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_QOS_GMII_MDI_I_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_QOS_GMII_MDI_I_SELECT_INPUT_fields_::DAISY;
};

// ENET_QOS_PHY_RXD_I_SELECT_INPUT_0 DAISY Register
namespace ENET_QOS_PHY_RXD_I_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT8
    eSELECT_GPIO_DISP_B1_02_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT8
    eSELECT_GPIO_DISP_B2_06_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_QOS_PHY_RXD_I_SELECT_INPUT_0_fields_

struct ENET_QOS_PHY_RXD_I_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E84F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_QOS_PHY_RXD_I_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_QOS_PHY_RXD_I_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = ENET_QOS_PHY_RXD_I_SELECT_INPUT_0_fields_::DAISY;
};

// ENET_QOS_PHY_RXD_I_SELECT_INPUT_1 DAISY Register
namespace ENET_QOS_PHY_RXD_I_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT8
    eSELECT_GPIO_DISP_B1_03_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT8
    eSELECT_GPIO_DISP_B2_07_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_QOS_PHY_RXD_I_SELECT_INPUT_1_fields_

struct ENET_QOS_PHY_RXD_I_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E84F4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_QOS_PHY_RXD_I_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_QOS_PHY_RXD_I_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = ENET_QOS_PHY_RXD_I_SELECT_INPUT_1_fields_::DAISY;
};

// ENET_QOS_PHY_RXDV_I_SELECT_INPUT DAISY Register
namespace ENET_QOS_PHY_RXDV_I_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT8
    eSELECT_GPIO_DISP_B1_00_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT8
    eSELECT_GPIO_DISP_B2_08_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace ENET_QOS_PHY_RXDV_I_SELECT_INPUT_fields_

struct ENET_QOS_PHY_RXDV_I_SELECT_INPUT : ftl::mmio::Register<
    0x400E84F8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_QOS_PHY_RXDV_I_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = ENET_QOS_PHY_RXDV_I_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_QOS_PHY_RXDV_I_SELECT_INPUT_fields_::DAISY;
};

// ENET_QOS_PHY_RXER_I_SELECT_INPUT DAISY Register
namespace ENET_QOS_PHY_RXER_I_SELECT_INPUT_fields_ {

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
}  // namespace ENET_QOS_PHY_RXER_I_SELECT_INPUT_fields_

struct ENET_QOS_PHY_RXER_I_SELECT_INPUT : ftl::mmio::Register<
    0x400E84FCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ENET_QOS_PHY_RXER_I_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = ENET_QOS_PHY_RXER_I_SELECT_INPUT_fields_::eDAISY;
  using DAISY = ENET_QOS_PHY_RXER_I_SELECT_INPUT_fields_::DAISY;
};

// FLEXPWM1_PWMA_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM1_PWMA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_23 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_23_ALT1 = 0,
    // Selecting Pad: GPIO_AD_00 for Mode: ALT4
    eSELECT_GPIO_AD_00_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMA_SELECT_INPUT_0_fields_

struct FLEXPWM1_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8500u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMA_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM1_PWMA_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM1_PWMA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_25 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_25_ALT1 = 0,
    // Selecting Pad: GPIO_AD_02 for Mode: ALT4
    eSELECT_GPIO_AD_02_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMA_SELECT_INPUT_1_fields_

struct FLEXPWM1_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8504u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMA_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM1_PWMA_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM1_PWMA_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_27 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_27_ALT1 = 0,
    // Selecting Pad: GPIO_AD_04 for Mode: ALT4
    eSELECT_GPIO_AD_04_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMA_SELECT_INPUT_2_fields_

struct FLEXPWM1_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8508u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMA_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMA_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMA_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM1_PWMB_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM1_PWMB_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_24 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_24_ALT1 = 0,
    // Selecting Pad: GPIO_AD_01 for Mode: ALT4
    eSELECT_GPIO_AD_01_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMB_SELECT_INPUT_0_fields_

struct FLEXPWM1_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E850Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMB_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMB_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMB_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM1_PWMB_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM1_PWMB_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_26 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_26_ALT1 = 0,
    // Selecting Pad: GPIO_AD_03 for Mode: ALT4
    eSELECT_GPIO_AD_03_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMB_SELECT_INPUT_1_fields_

struct FLEXPWM1_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8510u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMB_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMB_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMB_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM1_PWMB_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM1_PWMB_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_28 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_28_ALT1 = 0,
    // Selecting Pad: GPIO_AD_05 for Mode: ALT4
    eSELECT_GPIO_AD_05_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM1_PWMB_SELECT_INPUT_2_fields_

struct FLEXPWM1_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8514u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM1_PWMB_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM1_PWMB_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM1_PWMB_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM2_PWMA_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM2_PWMA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_06 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_06_ALT1 = 0,
    // Selecting Pad: GPIO_AD_24 for Mode: ALT4
    eSELECT_GPIO_AD_24_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMA_SELECT_INPUT_0_fields_

struct FLEXPWM2_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8518u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMA_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM2_PWMA_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM2_PWMA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_08 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_08_ALT1 = 0,
    // Selecting Pad: GPIO_AD_26 for Mode: ALT4
    eSELECT_GPIO_AD_26_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMA_SELECT_INPUT_1_fields_

struct FLEXPWM2_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E851Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMA_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM2_PWMA_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM2_PWMA_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_10 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_10_ALT1 = 0,
    // Selecting Pad: GPIO_AD_28 for Mode: ALT4
    eSELECT_GPIO_AD_28_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMA_SELECT_INPUT_2_fields_

struct FLEXPWM2_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8520u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMA_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMA_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMA_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM2_PWMB_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM2_PWMB_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_07 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_07_ALT1 = 0,
    // Selecting Pad: GPIO_AD_25 for Mode: ALT4
    eSELECT_GPIO_AD_25_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMB_SELECT_INPUT_0_fields_

struct FLEXPWM2_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8524u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMB_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMB_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMB_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM2_PWMB_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM2_PWMB_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_09 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_09_ALT1 = 0,
    // Selecting Pad: GPIO_AD_27 for Mode: ALT4
    eSELECT_GPIO_AD_27_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMB_SELECT_INPUT_1_fields_

struct FLEXPWM2_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8528u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMB_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMB_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMB_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM2_PWMB_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM2_PWMB_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_11 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_11_ALT1 = 0,
    // Selecting Pad: GPIO_AD_29 for Mode: ALT4
    eSELECT_GPIO_AD_29_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM2_PWMB_SELECT_INPUT_2_fields_

struct FLEXPWM2_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E852Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM2_PWMB_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM2_PWMB_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM2_PWMB_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM3_PWMA_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM3_PWMA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_29 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_29_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_00_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMA_SELECT_INPUT_0_fields_

struct FLEXPWM3_PWMA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8530u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMA_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM3_PWMA_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM3_PWMA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_31 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_31_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_02_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMA_SELECT_INPUT_1_fields_

struct FLEXPWM3_PWMA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8534u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMA_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM3_PWMA_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM3_PWMA_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_33 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_33_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_04_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMA_SELECT_INPUT_2_fields_

struct FLEXPWM3_PWMA_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8538u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMA_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMA_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMA_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM3_PWMA_SELECT_INPUT_3 DAISY Register
namespace FLEXPWM3_PWMA_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_21 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_21_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_06_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMA_SELECT_INPUT_3_fields_

struct FLEXPWM3_PWMA_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E853Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMA_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMA_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMA_SELECT_INPUT_3_fields_::DAISY;
};

// FLEXPWM3_PWMB_SELECT_INPUT_0 DAISY Register
namespace FLEXPWM3_PWMB_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_30 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_30_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_01_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMB_SELECT_INPUT_0_fields_

struct FLEXPWM3_PWMB_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8540u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMB_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMB_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMB_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXPWM3_PWMB_SELECT_INPUT_1 DAISY Register
namespace FLEXPWM3_PWMB_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_32 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_32_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_03_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMB_SELECT_INPUT_1_fields_

struct FLEXPWM3_PWMB_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8544u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMB_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMB_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMB_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXPWM3_PWMB_SELECT_INPUT_2 DAISY Register
namespace FLEXPWM3_PWMB_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_34 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_34_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_05_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMB_SELECT_INPUT_2_fields_

struct FLEXPWM3_PWMB_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8548u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMB_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMB_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMB_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXPWM3_PWMB_SELECT_INPUT_3 DAISY Register
namespace FLEXPWM3_PWMB_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B1_22 for Mode: ALT1
    eSELECT_GPIO_EMC_B1_22_ALT1 = 0,
    // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT11
    eSELECT_GPIO_EMC_B2_07_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXPWM3_PWMB_SELECT_INPUT_3_fields_

struct FLEXPWM3_PWMB_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E854Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXPWM3_PWMB_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXPWM3_PWMB_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = FLEXPWM3_PWMB_SELECT_INPUT_3_fields_::DAISY;
};

// FLEXSPI1_I_DQS_FA_SELECT_INPUT DAISY Register
namespace FLEXSPI1_I_DQS_FA_SELECT_INPUT_fields_ {

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
}  // namespace FLEXSPI1_I_DQS_FA_SELECT_INPUT_fields_

struct FLEXSPI1_I_DQS_FA_SELECT_INPUT : ftl::mmio::Register<
    0x400E8550u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_DQS_FA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = FLEXSPI1_I_DQS_FA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_DQS_FA_SELECT_INPUT_fields_::DAISY;
};

// FLEXSPI1_I_IO_FA_SELECT_INPUT_0 DAISY Register
namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_20 for Mode: ALT3
    eSELECT_GPIO_AD_20_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_08 for Mode: ALT1
    eSELECT_GPIO_SD_B2_08_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_0_fields_

struct FLEXSPI1_I_IO_FA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8554u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXSPI1_I_IO_FA_SELECT_INPUT_1 DAISY Register
namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_21 for Mode: ALT3
    eSELECT_GPIO_AD_21_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_09 for Mode: ALT1
    eSELECT_GPIO_SD_B2_09_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_1_fields_

struct FLEXSPI1_I_IO_FA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8558u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXSPI1_I_IO_FA_SELECT_INPUT_2 DAISY Register
namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_22 for Mode: ALT3
    eSELECT_GPIO_AD_22_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_10 for Mode: ALT1
    eSELECT_GPIO_SD_B2_10_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_2_fields_

struct FLEXSPI1_I_IO_FA_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E855Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FA_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXSPI1_I_IO_FA_SELECT_INPUT_3 DAISY Register
namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_23 for Mode: ALT3
    eSELECT_GPIO_AD_23_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT1
    eSELECT_GPIO_SD_B2_11_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FA_SELECT_INPUT_3_fields_

struct FLEXSPI1_I_IO_FA_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E8560u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FA_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FA_SELECT_INPUT_3_fields_::DAISY;
};

// FLEXSPI1_I_IO_FB_SELECT_INPUT_0 DAISY Register
namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_15 for Mode: ALT3
    eSELECT_GPIO_AD_15_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_03 for Mode: ALT1
    eSELECT_GPIO_SD_B2_03_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_0_fields_

struct FLEXSPI1_I_IO_FB_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8564u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FB_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXSPI1_I_IO_FB_SELECT_INPUT_1 DAISY Register
namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_14 for Mode: ALT3
    eSELECT_GPIO_AD_14_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_02 for Mode: ALT1
    eSELECT_GPIO_SD_B2_02_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_1_fields_

struct FLEXSPI1_I_IO_FB_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8568u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FB_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXSPI1_I_IO_FB_SELECT_INPUT_2 DAISY Register
namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_13 for Mode: ALT3
    eSELECT_GPIO_AD_13_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_01 for Mode: ALT1
    eSELECT_GPIO_SD_B2_01_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_2_fields_

struct FLEXSPI1_I_IO_FB_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E856Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FB_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXSPI1_I_IO_FB_SELECT_INPUT_3 DAISY Register
namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_12 for Mode: ALT3
    eSELECT_GPIO_AD_12_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_00 for Mode: ALT1
    eSELECT_GPIO_SD_B2_00_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_IO_FB_SELECT_INPUT_3_fields_

struct FLEXSPI1_I_IO_FB_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E8570u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_IO_FB_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_IO_FB_SELECT_INPUT_3_fields_::DAISY;
};

// FLEXSPI1_I_SCK_FA_SELECT_INPUT DAISY Register
namespace FLEXSPI1_I_SCK_FA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_19 for Mode: ALT3
    eSELECT_GPIO_AD_19_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_07 for Mode: ALT1
    eSELECT_GPIO_SD_B2_07_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_SCK_FA_SELECT_INPUT_fields_

struct FLEXSPI1_I_SCK_FA_SELECT_INPUT : ftl::mmio::Register<
    0x400E8574u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_SCK_FA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_SCK_FA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_SCK_FA_SELECT_INPUT_fields_::DAISY;
};

// FLEXSPI1_I_SCK_FB_SELECT_INPUT DAISY Register
namespace FLEXSPI1_I_SCK_FB_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_16 for Mode: ALT3
    eSELECT_GPIO_AD_16_ALT3 = 0,
    // Selecting Pad: GPIO_SD_B2_04 for Mode: ALT1
    eSELECT_GPIO_SD_B2_04_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI1_I_SCK_FB_SELECT_INPUT_fields_

struct FLEXSPI1_I_SCK_FB_SELECT_INPUT : ftl::mmio::Register<
    0x400E8578u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI1_I_SCK_FB_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI1_I_SCK_FB_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXSPI1_I_SCK_FB_SELECT_INPUT_fields_::DAISY;
};

// FLEXSPI2_I_IO_FA_SELECT_INPUT_0 DAISY Register
namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_13 for Mode: ALT4
    eSELECT_GPIO_EMC_B2_13_ALT4 = 0,
    // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT6
    eSELECT_GPIO_SD_B1_02_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_0_fields_

struct FLEXSPI2_I_IO_FA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E857Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI2_I_IO_FA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_0_fields_::DAISY;
};

// FLEXSPI2_I_IO_FA_SELECT_INPUT_1 DAISY Register
namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT4
    eSELECT_GPIO_EMC_B2_14_ALT4 = 0,
    // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT6
    eSELECT_GPIO_SD_B1_03_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_1_fields_

struct FLEXSPI2_I_IO_FA_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E8580u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI2_I_IO_FA_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_1_fields_::DAISY;
};

// FLEXSPI2_I_IO_FA_SELECT_INPUT_2 DAISY Register
namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT4
    eSELECT_GPIO_EMC_B2_15_ALT4 = 0,
    // Selecting Pad: GPIO_SD_B1_04 for Mode: ALT6
    eSELECT_GPIO_SD_B1_04_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_2_fields_

struct FLEXSPI2_I_IO_FA_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E8584u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI2_I_IO_FA_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_2_fields_::DAISY;
};

// FLEXSPI2_I_IO_FA_SELECT_INPUT_3 DAISY Register
namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_16 for Mode: ALT4
    eSELECT_GPIO_EMC_B2_16_ALT4 = 0,
    // Selecting Pad: GPIO_SD_B1_05 for Mode: ALT6
    eSELECT_GPIO_SD_B1_05_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI2_I_IO_FA_SELECT_INPUT_3_fields_

struct FLEXSPI2_I_IO_FA_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E8588u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI2_I_IO_FA_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = FLEXSPI2_I_IO_FA_SELECT_INPUT_3_fields_::DAISY;
};

// FLEXSPI2_I_SCK_FA_SELECT_INPUT DAISY Register
namespace FLEXSPI2_I_SCK_FA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT4
    eSELECT_GPIO_EMC_B2_10_ALT4 = 0,
    // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT6
    eSELECT_GPIO_SD_B1_01_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace FLEXSPI2_I_SCK_FA_SELECT_INPUT_fields_

struct FLEXSPI2_I_SCK_FA_SELECT_INPUT : ftl::mmio::Register<
    0x400E858Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    FLEXSPI2_I_SCK_FA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = FLEXSPI2_I_SCK_FA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = FLEXSPI2_I_SCK_FA_SELECT_INPUT_fields_::DAISY;
};

// GPT3_CAPIN1_SELECT_INPUT DAISY Register
namespace GPT3_CAPIN1_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_06_ALT1 = 0,
    // Selecting Pad: GPIO_AD_06 for Mode: ALT3
    eSELECT_GPIO_AD_06_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace GPT3_CAPIN1_SELECT_INPUT_fields_

struct GPT3_CAPIN1_SELECT_INPUT : ftl::mmio::Register<
    0x400E8590u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPT3_CAPIN1_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = GPT3_CAPIN1_SELECT_INPUT_fields_::eDAISY;
  using DAISY = GPT3_CAPIN1_SELECT_INPUT_fields_::DAISY;
};

// GPT3_CAPIN2_SELECT_INPUT DAISY Register
namespace GPT3_CAPIN2_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_07_ALT1 = 0,
    // Selecting Pad: GPIO_AD_07 for Mode: ALT3
    eSELECT_GPIO_AD_07_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace GPT3_CAPIN2_SELECT_INPUT_fields_

struct GPT3_CAPIN2_SELECT_INPUT : ftl::mmio::Register<
    0x400E8594u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPT3_CAPIN2_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = GPT3_CAPIN2_SELECT_INPUT_fields_::eDAISY;
  using DAISY = GPT3_CAPIN2_SELECT_INPUT_fields_::DAISY;
};

// GPT3_CLKIN_SELECT_INPUT DAISY Register
namespace GPT3_CLKIN_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_05_ALT1 = 0,
    // Selecting Pad: GPIO_AD_11 for Mode: ALT3
    eSELECT_GPIO_AD_11_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace GPT3_CLKIN_SELECT_INPUT_fields_

struct GPT3_CLKIN_SELECT_INPUT : ftl::mmio::Register<
    0x400E8598u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    GPT3_CLKIN_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = GPT3_CLKIN_SELECT_INPUT_fields_::eDAISY;
  using DAISY = GPT3_CLKIN_SELECT_INPUT_fields_::DAISY;
};

// KPP_COL_SELECT_INPUT_6 DAISY Register
namespace KPP_COL_SELECT_INPUT_6_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_23 for Mode: ALT6
    eSELECT_GPIO_AD_23_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT8
    eSELECT_GPIO_SD_B1_03_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace KPP_COL_SELECT_INPUT_6_fields_

struct KPP_COL_SELECT_INPUT_6 : ftl::mmio::Register<
    0x400E859Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    KPP_COL_SELECT_INPUT_6_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = KPP_COL_SELECT_INPUT_6_fields_::eDAISY;
  using DAISY = KPP_COL_SELECT_INPUT_6_fields_::DAISY;
};

// KPP_COL_SELECT_INPUT_7 DAISY Register
namespace KPP_COL_SELECT_INPUT_7_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_21 for Mode: ALT6
    eSELECT_GPIO_AD_21_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT8
    eSELECT_GPIO_SD_B1_01_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace KPP_COL_SELECT_INPUT_7_fields_

struct KPP_COL_SELECT_INPUT_7 : ftl::mmio::Register<
    0x400E85A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    KPP_COL_SELECT_INPUT_7_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = KPP_COL_SELECT_INPUT_7_fields_::eDAISY;
  using DAISY = KPP_COL_SELECT_INPUT_7_fields_::DAISY;
};

// KPP_ROW_SELECT_INPUT_6 DAISY Register
namespace KPP_ROW_SELECT_INPUT_6_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_22 for Mode: ALT6
    eSELECT_GPIO_AD_22_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT8
    eSELECT_GPIO_SD_B1_02_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace KPP_ROW_SELECT_INPUT_6_fields_

struct KPP_ROW_SELECT_INPUT_6 : ftl::mmio::Register<
    0x400E85A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    KPP_ROW_SELECT_INPUT_6_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = KPP_ROW_SELECT_INPUT_6_fields_::eDAISY;
  using DAISY = KPP_ROW_SELECT_INPUT_6_fields_::DAISY;
};

// KPP_ROW_SELECT_INPUT_7 DAISY Register
namespace KPP_ROW_SELECT_INPUT_7_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_20 for Mode: ALT6
    eSELECT_GPIO_AD_20_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_00 for Mode: ALT8
    eSELECT_GPIO_SD_B1_00_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace KPP_ROW_SELECT_INPUT_7_fields_

struct KPP_ROW_SELECT_INPUT_7 : ftl::mmio::Register<
    0x400E85A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    KPP_ROW_SELECT_INPUT_7_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = KPP_ROW_SELECT_INPUT_7_fields_::eDAISY;
  using DAISY = KPP_ROW_SELECT_INPUT_7_fields_::DAISY;
};

// LPI2C1_LPI2C_SCL_SELECT_INPUT DAISY Register
namespace LPI2C1_LPI2C_SCL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_08 for Mode: ALT1
    eSELECT_GPIO_AD_08_ALT1 = 0,
    // Selecting Pad: GPIO_AD_32 for Mode: ALT0
    eSELECT_GPIO_AD_32_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C1_LPI2C_SCL_SELECT_INPUT_fields_

struct LPI2C1_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
    0x400E85ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C1_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C1_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C1_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
};

// LPI2C1_LPI2C_SDA_SELECT_INPUT DAISY Register
namespace LPI2C1_LPI2C_SDA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_09 for Mode: ALT1
    eSELECT_GPIO_AD_09_ALT1 = 0,
    // Selecting Pad: GPIO_AD_33 for Mode: ALT0
    eSELECT_GPIO_AD_33_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C1_LPI2C_SDA_SELECT_INPUT_fields_

struct LPI2C1_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
    0x400E85B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C1_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C1_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C1_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
};

// LPI2C2_LPI2C_SCL_SELECT_INPUT DAISY Register
namespace LPI2C2_LPI2C_SCL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT9
    eSELECT_GPIO_EMC_B2_00_ALT9 = 0,
    // Selecting Pad: GPIO_AD_18 for Mode: ALT9
    eSELECT_GPIO_AD_18_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C2_LPI2C_SCL_SELECT_INPUT_fields_

struct LPI2C2_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
    0x400E85B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C2_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C2_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C2_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
};

// LPI2C2_LPI2C_SDA_SELECT_INPUT DAISY Register
namespace LPI2C2_LPI2C_SDA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT9
    eSELECT_GPIO_EMC_B2_01_ALT9 = 0,
    // Selecting Pad: GPIO_AD_19 for Mode: ALT9
    eSELECT_GPIO_AD_19_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C2_LPI2C_SDA_SELECT_INPUT_fields_

struct LPI2C2_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
    0x400E85B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C2_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C2_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C2_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
};

// LPI2C3_LPI2C_SCL_SELECT_INPUT DAISY Register
namespace LPI2C3_LPI2C_SCL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT2
    eSELECT_GPIO_DISP_B1_02_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT6
    eSELECT_GPIO_DISP_B2_10_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C3_LPI2C_SCL_SELECT_INPUT_fields_

struct LPI2C3_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
    0x400E85BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C3_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C3_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C3_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
};

// LPI2C3_LPI2C_SDA_SELECT_INPUT DAISY Register
namespace LPI2C3_LPI2C_SDA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT2
    eSELECT_GPIO_DISP_B1_03_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B2_11 for Mode: ALT6
    eSELECT_GPIO_DISP_B2_11_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C3_LPI2C_SDA_SELECT_INPUT_fields_

struct LPI2C3_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
    0x400E85C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C3_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C3_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C3_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
};

// LPI2C4_LPI2C_SCL_SELECT_INPUT DAISY Register
namespace LPI2C4_LPI2C_SCL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_24 for Mode: ALT9
    eSELECT_GPIO_AD_24_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B2_12 for Mode: ALT6
    eSELECT_GPIO_DISP_B2_12_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C4_LPI2C_SCL_SELECT_INPUT_fields_

struct LPI2C4_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
    0x400E85C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C4_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C4_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C4_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
};

// LPI2C4_LPI2C_SDA_SELECT_INPUT DAISY Register
namespace LPI2C4_LPI2C_SDA_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_25 for Mode: ALT9
    eSELECT_GPIO_AD_25_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT6
    eSELECT_GPIO_DISP_B2_13_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPI2C4_LPI2C_SDA_SELECT_INPUT_fields_

struct LPI2C4_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
    0x400E85C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPI2C4_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPI2C4_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPI2C4_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
};

// LPSPI1_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
namespace LPSPI1_LPSPI_PCS_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_01_ALT8 = 0,
    // Selecting Pad: GPIO_AD_29 for Mode: ALT0
    eSELECT_GPIO_AD_29_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI1_LPSPI_PCS_SELECT_INPUT_0_fields_

struct LPSPI1_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E85CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI1_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI1_LPSPI_PCS_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = LPSPI1_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY;
};

// LPSPI1_LPSPI_SCK_SELECT_INPUT DAISY Register
namespace LPSPI1_LPSPI_SCK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_00_ALT8 = 0,
    // Selecting Pad: GPIO_AD_28 for Mode: ALT0
    eSELECT_GPIO_AD_28_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI1_LPSPI_SCK_SELECT_INPUT_fields_

struct LPSPI1_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
    0x400E85D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI1_LPSPI_SCK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI1_LPSPI_SCK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI1_LPSPI_SCK_SELECT_INPUT_fields_::DAISY;
};

// LPSPI1_LPSPI_SDI_SELECT_INPUT DAISY Register
namespace LPSPI1_LPSPI_SDI_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_03_ALT8 = 0,
    // Selecting Pad: GPIO_AD_31 for Mode: ALT0
    eSELECT_GPIO_AD_31_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI1_LPSPI_SDI_SELECT_INPUT_fields_

struct LPSPI1_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
    0x400E85D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI1_LPSPI_SDI_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI1_LPSPI_SDI_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI1_LPSPI_SDI_SELECT_INPUT_fields_::DAISY;
};

// LPSPI1_LPSPI_SDO_SELECT_INPUT DAISY Register
namespace LPSPI1_LPSPI_SDO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_02_ALT8 = 0,
    // Selecting Pad: GPIO_AD_30 for Mode: ALT0
    eSELECT_GPIO_AD_30_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI1_LPSPI_SDO_SELECT_INPUT_fields_

struct LPSPI1_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
    0x400E85D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI1_LPSPI_SDO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI1_LPSPI_SDO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI1_LPSPI_SDO_SELECT_INPUT_fields_::DAISY;
};

// LPSPI2_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
namespace LPSPI2_LPSPI_PCS_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_25 for Mode: ALT1
    eSELECT_GPIO_AD_25_ALT1 = 0,
    // Selecting Pad: GPIO_SD_B2_08 for Mode: ALT6
    eSELECT_GPIO_SD_B2_08_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI2_LPSPI_PCS_SELECT_INPUT_0_fields_

struct LPSPI2_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E85DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI2_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI2_LPSPI_PCS_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = LPSPI2_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY;
};

// LPSPI2_LPSPI_PCS_SELECT_INPUT_1 DAISY Register
namespace LPSPI2_LPSPI_PCS_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_21 for Mode: ALT2
    eSELECT_GPIO_AD_21_ALT2 = 0,
    // Selecting Pad: GPIO_SD_B2_11 for Mode: ALT6
    eSELECT_GPIO_SD_B2_11_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI2_LPSPI_PCS_SELECT_INPUT_1_fields_

struct LPSPI2_LPSPI_PCS_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E85E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI2_LPSPI_PCS_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI2_LPSPI_PCS_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = LPSPI2_LPSPI_PCS_SELECT_INPUT_1_fields_::DAISY;
};

// LPSPI2_LPSPI_SCK_SELECT_INPUT DAISY Register
namespace LPSPI2_LPSPI_SCK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_24 for Mode: ALT1
    eSELECT_GPIO_AD_24_ALT1 = 0,
    // Selecting Pad: GPIO_SD_B2_07 for Mode: ALT6
    eSELECT_GPIO_SD_B2_07_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI2_LPSPI_SCK_SELECT_INPUT_fields_

struct LPSPI2_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
    0x400E85E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI2_LPSPI_SCK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI2_LPSPI_SCK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI2_LPSPI_SCK_SELECT_INPUT_fields_::DAISY;
};

// LPSPI2_LPSPI_SDI_SELECT_INPUT DAISY Register
namespace LPSPI2_LPSPI_SDI_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_27 for Mode: ALT1
    eSELECT_GPIO_AD_27_ALT1 = 0,
    // Selecting Pad: GPIO_SD_B2_10 for Mode: ALT6
    eSELECT_GPIO_SD_B2_10_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI2_LPSPI_SDI_SELECT_INPUT_fields_

struct LPSPI2_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
    0x400E85E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI2_LPSPI_SDI_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI2_LPSPI_SDI_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI2_LPSPI_SDI_SELECT_INPUT_fields_::DAISY;
};

// LPSPI2_LPSPI_SDO_SELECT_INPUT DAISY Register
namespace LPSPI2_LPSPI_SDO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_26 for Mode: ALT1
    eSELECT_GPIO_AD_26_ALT1 = 0,
    // Selecting Pad: GPIO_SD_B2_09 for Mode: ALT6
    eSELECT_GPIO_SD_B2_09_ALT6 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI2_LPSPI_SDO_SELECT_INPUT_fields_

struct LPSPI2_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
    0x400E85ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI2_LPSPI_SDO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI2_LPSPI_SDO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI2_LPSPI_SDO_SELECT_INPUT_fields_::DAISY;
};

// LPSPI3_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_05_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_07 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_07_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_0_fields_

struct LPSPI3_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E85F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY;
};

// LPSPI3_LPSPI_PCS_SELECT_INPUT_1 DAISY Register
namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_1_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_08 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_08_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_08_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_1_fields_

struct LPSPI3_LPSPI_PCS_SELECT_INPUT_1 : ftl::mmio::Register<
    0x400E85F4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_PCS_SELECT_INPUT_1_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_1_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_1_fields_::DAISY;
};

// LPSPI3_LPSPI_PCS_SELECT_INPUT_2 DAISY Register
namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_2_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_09 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_09_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_09_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_2_fields_

struct LPSPI3_LPSPI_PCS_SELECT_INPUT_2 : ftl::mmio::Register<
    0x400E85F8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_PCS_SELECT_INPUT_2_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_2_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_2_fields_::DAISY;
};

// LPSPI3_LPSPI_PCS_SELECT_INPUT_3 DAISY Register
namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_3_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_10_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_10 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_10_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_PCS_SELECT_INPUT_3_fields_

struct LPSPI3_LPSPI_PCS_SELECT_INPUT_3 : ftl::mmio::Register<
    0x400E85FCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_PCS_SELECT_INPUT_3_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_3_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_PCS_SELECT_INPUT_3_fields_::DAISY;
};

// LPSPI3_LPSPI_SCK_SELECT_INPUT DAISY Register
namespace LPSPI3_LPSPI_SCK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_04_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_04_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_SCK_SELECT_INPUT_fields_

struct LPSPI3_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
    0x400E8600u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_SCK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_SCK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_SCK_SELECT_INPUT_fields_::DAISY;
};

// LPSPI3_LPSPI_SDI_SELECT_INPUT DAISY Register
namespace LPSPI3_LPSPI_SDI_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_07_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_05_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_SDI_SELECT_INPUT_fields_

struct LPSPI3_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
    0x400E8604u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_SDI_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_SDI_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_SDI_SELECT_INPUT_fields_::DAISY;
};

// LPSPI3_LPSPI_SDO_SELECT_INPUT DAISY Register
namespace LPSPI3_LPSPI_SDO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_06_ALT8 = 0,
    // Selecting Pad: GPIO_DISP_B1_06 for Mode: ALT9
    eSELECT_GPIO_DISP_B1_06_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI3_LPSPI_SDO_SELECT_INPUT_fields_

struct LPSPI3_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
    0x400E8608u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI3_LPSPI_SDO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI3_LPSPI_SDO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI3_LPSPI_SDO_SELECT_INPUT_fields_::DAISY;
};

// LPSPI4_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
namespace LPSPI4_LPSPI_PCS_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_SD_B2_01 for Mode: ALT4
    eSELECT_GPIO_SD_B2_01_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT9
    eSELECT_GPIO_DISP_B2_15_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI4_LPSPI_PCS_SELECT_INPUT_0_fields_

struct LPSPI4_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E860Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI4_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI4_LPSPI_PCS_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = LPSPI4_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY;
};

// LPSPI4_LPSPI_SCK_SELECT_INPUT DAISY Register
namespace LPSPI4_LPSPI_SCK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_SD_B2_00 for Mode: ALT4
    eSELECT_GPIO_SD_B2_00_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B2_12 for Mode: ALT9
    eSELECT_GPIO_DISP_B2_12_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI4_LPSPI_SCK_SELECT_INPUT_fields_

struct LPSPI4_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
    0x400E8610u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI4_LPSPI_SCK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI4_LPSPI_SCK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI4_LPSPI_SCK_SELECT_INPUT_fields_::DAISY;
};

// LPSPI4_LPSPI_SDI_SELECT_INPUT DAISY Register
namespace LPSPI4_LPSPI_SDI_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_SD_B2_03 for Mode: ALT4
    eSELECT_GPIO_SD_B2_03_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B2_13 for Mode: ALT9
    eSELECT_GPIO_DISP_B2_13_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI4_LPSPI_SDI_SELECT_INPUT_fields_

struct LPSPI4_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
    0x400E8614u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI4_LPSPI_SDI_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI4_LPSPI_SDI_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI4_LPSPI_SDI_SELECT_INPUT_fields_::DAISY;
};

// LPSPI4_LPSPI_SDO_SELECT_INPUT DAISY Register
namespace LPSPI4_LPSPI_SDO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_SD_B2_02 for Mode: ALT4
    eSELECT_GPIO_SD_B2_02_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT9
    eSELECT_GPIO_DISP_B2_14_ALT9 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPSPI4_LPSPI_SDO_SELECT_INPUT_fields_

struct LPSPI4_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
    0x400E8618u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPSPI4_LPSPI_SDO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPSPI4_LPSPI_SDO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPSPI4_LPSPI_SDO_SELECT_INPUT_fields_::DAISY;
};

// LPUART1_LPUART_RXD_SELECT_INPUT DAISY Register
namespace LPUART1_LPUART_RXD_SELECT_INPUT_fields_ {

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
}  // namespace LPUART1_LPUART_RXD_SELECT_INPUT_fields_

struct LPUART1_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E861Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART1_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = LPUART1_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART1_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART1_LPUART_TXD_SELECT_INPUT DAISY Register
namespace LPUART1_LPUART_TXD_SELECT_INPUT_fields_ {

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
}  // namespace LPUART1_LPUART_TXD_SELECT_INPUT_fields_

struct LPUART1_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8620u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART1_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = LPUART1_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART1_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART10_LPUART_RXD_SELECT_INPUT DAISY Register
namespace LPUART10_LPUART_RXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_16 for Mode: ALT1
    eSELECT_GPIO_AD_16_ALT1 = 0,
    // Selecting Pad: GPIO_AD_33 for Mode: ALT8
    eSELECT_GPIO_AD_33_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART10_LPUART_RXD_SELECT_INPUT_fields_

struct LPUART10_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8624u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART10_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART10_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART10_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART10_LPUART_TXD_SELECT_INPUT DAISY Register
namespace LPUART10_LPUART_TXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_15 for Mode: ALT1
    eSELECT_GPIO_AD_15_ALT1 = 0,
    // Selecting Pad: GPIO_AD_32 for Mode: ALT8
    eSELECT_GPIO_AD_32_ALT8 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART10_LPUART_TXD_SELECT_INPUT_fields_

struct LPUART10_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8628u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART10_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART10_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART10_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART7_LPUART_RXD_SELECT_INPUT DAISY Register
namespace LPUART7_LPUART_RXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_01 for Mode: ALT6
    eSELECT_GPIO_AD_01_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B2_07 for Mode: ALT2
    eSELECT_GPIO_DISP_B2_07_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART7_LPUART_RXD_SELECT_INPUT_fields_

struct LPUART7_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E862Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART7_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART7_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART7_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART7_LPUART_TXD_SELECT_INPUT DAISY Register
namespace LPUART7_LPUART_TXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_00 for Mode: ALT6
    eSELECT_GPIO_AD_00_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT2
    eSELECT_GPIO_DISP_B2_06_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART7_LPUART_TXD_SELECT_INPUT_fields_

struct LPUART7_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8630u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART7_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART7_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART7_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART8_LPUART_RXD_SELECT_INPUT DAISY Register
namespace LPUART8_LPUART_RXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_03 for Mode: ALT6
    eSELECT_GPIO_AD_03_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT2
    eSELECT_GPIO_DISP_B2_09_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART8_LPUART_RXD_SELECT_INPUT_fields_

struct LPUART8_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8634u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART8_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART8_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART8_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
};

// LPUART8_LPUART_TXD_SELECT_INPUT DAISY Register
namespace LPUART8_LPUART_TXD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_02 for Mode: ALT6
    eSELECT_GPIO_AD_02_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT2
    eSELECT_GPIO_DISP_B2_08_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace LPUART8_LPUART_TXD_SELECT_INPUT_fields_

struct LPUART8_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
    0x400E8638u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    LPUART8_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = LPUART8_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = LPUART8_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
};

// QTIMER1_TMR0_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER1_TMR0_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER1_TMR0_INPUT_SELECT_INPUT_fields_

struct QTIMER1_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E863Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER1_TMR0_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER1_TMR0_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER1_TMR0_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER1_TMR1_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER1_TMR1_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER1_TMR1_INPUT_SELECT_INPUT_fields_

struct QTIMER1_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8640u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER1_TMR1_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER1_TMR1_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER1_TMR1_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER1_TMR2_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER1_TMR2_INPUT_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT9
    eSELECT_GPIO_EMC_B2_11_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT3
    eSELECT_GPIO_DISP_B1_02_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace QTIMER1_TMR2_INPUT_SELECT_INPUT_fields_

struct QTIMER1_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8644u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER1_TMR2_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = QTIMER1_TMR2_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER1_TMR2_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER2_TMR0_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER2_TMR0_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER2_TMR0_INPUT_SELECT_INPUT_fields_

struct QTIMER2_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8648u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER2_TMR0_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER2_TMR0_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER2_TMR0_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER2_TMR1_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER2_TMR1_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER2_TMR1_INPUT_SELECT_INPUT_fields_

struct QTIMER2_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E864Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER2_TMR1_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER2_TMR1_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER2_TMR1_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER2_TMR2_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER2_TMR2_INPUT_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT9
    eSELECT_GPIO_EMC_B2_15_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT3
    eSELECT_GPIO_DISP_B1_05_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace QTIMER2_TMR2_INPUT_SELECT_INPUT_fields_

struct QTIMER2_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8650u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER2_TMR2_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = QTIMER2_TMR2_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER2_TMR2_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER3_TMR0_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER3_TMR0_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER3_TMR0_INPUT_SELECT_INPUT_fields_

struct QTIMER3_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8654u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER3_TMR0_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER3_TMR0_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER3_TMR0_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER3_TMR1_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER3_TMR1_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER3_TMR1_INPUT_SELECT_INPUT_fields_

struct QTIMER3_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8658u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER3_TMR1_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER3_TMR1_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER3_TMR1_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER3_TMR2_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER3_TMR2_INPUT_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_19 for Mode: ALT9
    eSELECT_GPIO_EMC_B2_19_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT3
    eSELECT_GPIO_DISP_B1_08_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace QTIMER3_TMR2_INPUT_SELECT_INPUT_fields_

struct QTIMER3_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E865Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER3_TMR2_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = QTIMER3_TMR2_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER3_TMR2_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER4_TMR0_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER4_TMR0_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER4_TMR0_INPUT_SELECT_INPUT_fields_

struct QTIMER4_TMR0_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8660u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER4_TMR0_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER4_TMR0_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER4_TMR0_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER4_TMR1_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER4_TMR1_INPUT_SELECT_INPUT_fields_ {

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
}  // namespace QTIMER4_TMR1_INPUT_SELECT_INPUT_fields_

struct QTIMER4_TMR1_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8664u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER4_TMR1_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = QTIMER4_TMR1_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER4_TMR1_INPUT_SELECT_INPUT_fields_::DAISY;
};

// QTIMER4_TMR2_INPUT_SELECT_INPUT DAISY Register
namespace QTIMER4_TMR2_INPUT_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_06 for Mode: ALT9
    eSELECT_GPIO_AD_06_ALT9 = 0,
    // Selecting Pad: GPIO_DISP_B1_11 for Mode: ALT3
    eSELECT_GPIO_DISP_B1_11_ALT3 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace QTIMER4_TMR2_INPUT_SELECT_INPUT_fields_

struct QTIMER4_TMR2_INPUT_SELECT_INPUT : ftl::mmio::Register<
    0x400E8668u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    QTIMER4_TMR2_INPUT_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = QTIMER4_TMR2_INPUT_SELECT_INPUT_fields_::eDAISY;
  using DAISY = QTIMER4_TMR2_INPUT_SELECT_INPUT_fields_::DAISY;
};

// SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT DAISY Register
namespace SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_17 for Mode: ALT0
    eSELECT_GPIO_AD_17_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_03 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_03_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_

struct SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E866Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SAI1_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::DAISY;
};

// SAI1_SAI_RXBCLK_SELECT_INPUT DAISY Register
namespace SAI1_SAI_RXBCLK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_19 for Mode: ALT0
    eSELECT_GPIO_AD_19_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_05 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_05_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_SAI_RXBCLK_SELECT_INPUT_fields_

struct SAI1_SAI_RXBCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E8670u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_SAI_RXBCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_SAI_RXBCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SAI1_SAI_RXBCLK_SELECT_INPUT_fields_::DAISY;
};

// SAI1_SAI_RXDATA_SELECT_INPUT_0 DAISY Register
namespace SAI1_SAI_RXDATA_SELECT_INPUT_0_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_20 for Mode: ALT0
    eSELECT_GPIO_AD_20_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_06 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_06_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_SAI_RXDATA_SELECT_INPUT_0_fields_

struct SAI1_SAI_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
    0x400E8674u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_SAI_RXDATA_SELECT_INPUT_0_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_SAI_RXDATA_SELECT_INPUT_0_fields_::eDAISY;
  using DAISY = SAI1_SAI_RXDATA_SELECT_INPUT_0_fields_::DAISY;
};

// SAI1_SAI_RXSYNC_SELECT_INPUT DAISY Register
namespace SAI1_SAI_RXSYNC_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_18 for Mode: ALT0
    eSELECT_GPIO_AD_18_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_04 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_04_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_SAI_RXSYNC_SELECT_INPUT_fields_

struct SAI1_SAI_RXSYNC_SELECT_INPUT : ftl::mmio::Register<
    0x400E8678u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_SAI_RXSYNC_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_SAI_RXSYNC_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SAI1_SAI_RXSYNC_SELECT_INPUT_fields_::DAISY;
};

// SAI1_SAI_TXBCLK_SELECT_INPUT DAISY Register
namespace SAI1_SAI_TXBCLK_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_22 for Mode: ALT0
    eSELECT_GPIO_AD_22_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_08 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_08_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_SAI_TXBCLK_SELECT_INPUT_fields_

struct SAI1_SAI_TXBCLK_SELECT_INPUT : ftl::mmio::Register<
    0x400E867Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_SAI_TXBCLK_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_SAI_TXBCLK_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SAI1_SAI_TXBCLK_SELECT_INPUT_fields_::DAISY;
};

// SAI1_SAI_TXSYNC_SELECT_INPUT DAISY Register
namespace SAI1_SAI_TXSYNC_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_23 for Mode: ALT0
    eSELECT_GPIO_AD_23_ALT0 = 0,
    // Selecting Pad: GPIO_DISP_B2_09 for Mode: ALT4
    eSELECT_GPIO_DISP_B2_09_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace SAI1_SAI_TXSYNC_SELECT_INPUT_fields_

struct SAI1_SAI_TXSYNC_SELECT_INPUT : ftl::mmio::Register<
    0x400E8680u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SAI1_SAI_TXSYNC_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = SAI1_SAI_TXSYNC_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SAI1_SAI_TXSYNC_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM1_SIO_SELECT_INPUT DAISY Register
namespace EMVSIM1_SIO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_11_ALT8 = 0,
    // Selecting Pad: GPIO_AD_00 for Mode: ALT0
    eSELECT_GPIO_AD_00_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM1_SIO_SELECT_INPUT_fields_

struct EMVSIM1_SIO_SELECT_INPUT : ftl::mmio::Register<
    0x400E869Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM1_SIO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM1_SIO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM1_SIO_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM1_IPP_SIMPD_SELECT_INPUT DAISY Register
namespace EMVSIM1_IPP_SIMPD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_15_ALT8 = 0,
    // Selecting Pad: GPIO_AD_04 for Mode: ALT0
    eSELECT_GPIO_AD_04_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM1_IPP_SIMPD_SELECT_INPUT_fields_

struct EMVSIM1_IPP_SIMPD_SELECT_INPUT : ftl::mmio::Register<
    0x400E86A0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM1_IPP_SIMPD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM1_IPP_SIMPD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM1_IPP_SIMPD_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM1_POWER_FAIL_SELECT_INPUT DAISY Register
namespace EMVSIM1_POWER_FAIL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_16 for Mode: ALT8
    eSELECT_GPIO_EMC_B2_16_ALT8 = 0,
    // Selecting Pad: GPIO_AD_05 for Mode: ALT0
    eSELECT_GPIO_AD_05_ALT0 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM1_POWER_FAIL_SELECT_INPUT_fields_

struct EMVSIM1_POWER_FAIL_SELECT_INPUT : ftl::mmio::Register<
    0x400E86A4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM1_POWER_FAIL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM1_POWER_FAIL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM1_POWER_FAIL_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM2_SIO_SELECT_INPUT DAISY Register
namespace EMVSIM2_SIO_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_06 for Mode: ALT2
    eSELECT_GPIO_AD_06_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B2_10 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_10_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM2_SIO_SELECT_INPUT_fields_

struct EMVSIM2_SIO_SELECT_INPUT : ftl::mmio::Register<
    0x400E86A8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM2_SIO_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM2_SIO_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM2_SIO_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM2_IPP_SIMPD_SELECT_INPUT DAISY Register
namespace EMVSIM2_IPP_SIMPD_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_10 for Mode: ALT2
    eSELECT_GPIO_AD_10_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B2_14 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_14_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM2_IPP_SIMPD_SELECT_INPUT_fields_

struct EMVSIM2_IPP_SIMPD_SELECT_INPUT : ftl::mmio::Register<
    0x400E86ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM2_IPP_SIMPD_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM2_IPP_SIMPD_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM2_IPP_SIMPD_SELECT_INPUT_fields_::DAISY;
};

// EMVSIM2_POWER_FAIL_SELECT_INPUT DAISY Register
namespace EMVSIM2_POWER_FAIL_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_11 for Mode: ALT2
    eSELECT_GPIO_AD_11_ALT2 = 0,
    // Selecting Pad: GPIO_DISP_B2_15 for Mode: ALT1
    eSELECT_GPIO_DISP_B2_15_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace EMVSIM2_POWER_FAIL_SELECT_INPUT_fields_

struct EMVSIM2_POWER_FAIL_SELECT_INPUT : ftl::mmio::Register<
    0x400E86B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    EMVSIM2_POWER_FAIL_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = EMVSIM2_POWER_FAIL_SELECT_INPUT_fields_::eDAISY;
  using DAISY = EMVSIM2_POWER_FAIL_SELECT_INPUT_fields_::DAISY;
};

// SPDIF_SPDIF_IN1_SELECT_INPUT DAISY Register
namespace SPDIF_SPDIF_IN1_SELECT_INPUT_fields_ {

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
}  // namespace SPDIF_SPDIF_IN1_SELECT_INPUT_fields_

struct SPDIF_SPDIF_IN1_SELECT_INPUT : ftl::mmio::Register<
    0x400E86B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SPDIF_SPDIF_IN1_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<30, 2>> {
  using eDAISY = SPDIF_SPDIF_IN1_SELECT_INPUT_fields_::eDAISY;
  using DAISY = SPDIF_SPDIF_IN1_SELECT_INPUT_fields_::DAISY;
};

// USB_OTG2_OC_SELECT_INPUT DAISY Register
namespace USB_OTG2_OC_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_06 for Mode: ALT0
    eSELECT_GPIO_AD_06_ALT0 = 0,
    // Selecting Pad: GPIO_AD_30 for Mode: ALT1
    eSELECT_GPIO_AD_30_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USB_OTG2_OC_SELECT_INPUT_fields_

struct USB_OTG2_OC_SELECT_INPUT : ftl::mmio::Register<
    0x400E86B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USB_OTG2_OC_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USB_OTG2_OC_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USB_OTG2_OC_SELECT_INPUT_fields_::DAISY;
};

// USB_OTG_OC_SELECT_INPUT DAISY Register
namespace USB_OTG_OC_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_11 for Mode: ALT0
    eSELECT_GPIO_AD_11_ALT0 = 0,
    // Selecting Pad: GPIO_AD_35 for Mode: ALT1
    eSELECT_GPIO_AD_35_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USB_OTG_OC_SELECT_INPUT_fields_

struct USB_OTG_OC_SELECT_INPUT : ftl::mmio::Register<
    0x400E86BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USB_OTG_OC_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USB_OTG_OC_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USB_OTG_OC_SELECT_INPUT_fields_::DAISY;
};

// USBPHY1_USB_ID_SELECT_INPUT DAISY Register
namespace USBPHY1_USB_ID_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_09 for Mode: ALT0
    eSELECT_GPIO_AD_09_ALT0 = 0,
    // Selecting Pad: GPIO_AD_33 for Mode: ALT1
    eSELECT_GPIO_AD_33_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USBPHY1_USB_ID_SELECT_INPUT_fields_

struct USBPHY1_USB_ID_SELECT_INPUT : ftl::mmio::Register<
    0x400E86C0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USBPHY1_USB_ID_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USBPHY1_USB_ID_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USBPHY1_USB_ID_SELECT_INPUT_fields_::DAISY;
};

// USBPHY2_USB_ID_SELECT_INPUT DAISY Register
namespace USBPHY2_USB_ID_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_08 for Mode: ALT0
    eSELECT_GPIO_AD_08_ALT0 = 0,
    // Selecting Pad: GPIO_AD_32 for Mode: ALT1
    eSELECT_GPIO_AD_32_ALT1 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USBPHY2_USB_ID_SELECT_INPUT_fields_

struct USBPHY2_USB_ID_SELECT_INPUT : ftl::mmio::Register<
    0x400E86C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USBPHY2_USB_ID_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USBPHY2_USB_ID_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USBPHY2_USB_ID_SELECT_INPUT_fields_::DAISY;
};

// USDHC1_IPP_CARD_DET_SELECT_INPUT DAISY Register
namespace USDHC1_IPP_CARD_DET_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_32 for Mode: ALT4
    eSELECT_GPIO_AD_32_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT2
    eSELECT_GPIO_DISP_B1_08_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USDHC1_IPP_CARD_DET_SELECT_INPUT_fields_

struct USDHC1_IPP_CARD_DET_SELECT_INPUT : ftl::mmio::Register<
    0x400E86C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USDHC1_IPP_CARD_DET_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USDHC1_IPP_CARD_DET_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USDHC1_IPP_CARD_DET_SELECT_INPUT_fields_::DAISY;
};

// USDHC1_IPP_WP_ON_SELECT_INPUT DAISY Register
namespace USDHC1_IPP_WP_ON_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_AD_33 for Mode: ALT4
    eSELECT_GPIO_AD_33_ALT4 = 0,
    // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT2
    eSELECT_GPIO_DISP_B1_09_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USDHC1_IPP_WP_ON_SELECT_INPUT_fields_

struct USDHC1_IPP_WP_ON_SELECT_INPUT : ftl::mmio::Register<
    0x400E86CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USDHC1_IPP_WP_ON_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USDHC1_IPP_WP_ON_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USDHC1_IPP_WP_ON_SELECT_INPUT_fields_::DAISY;
};

// USDHC2_IPP_CARD_DET_SELECT_INPUT DAISY Register
namespace USDHC2_IPP_CARD_DET_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_01_ALT1 = 0,
    // Selecting Pad: GPIO_AD_26 for Mode: ALT11
    eSELECT_GPIO_AD_26_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USDHC2_IPP_CARD_DET_SELECT_INPUT_fields_

struct USDHC2_IPP_CARD_DET_SELECT_INPUT : ftl::mmio::Register<
    0x400E86D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USDHC2_IPP_CARD_DET_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USDHC2_IPP_CARD_DET_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USDHC2_IPP_CARD_DET_SELECT_INPUT_fields_::DAISY;
};

// USDHC2_IPP_WP_ON_SELECT_INPUT DAISY Register
namespace USDHC2_IPP_WP_ON_SELECT_INPUT_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT1
    eSELECT_GPIO_EMC_B2_02_ALT1 = 0,
    // Selecting Pad: GPIO_AD_27 for Mode: ALT11
    eSELECT_GPIO_AD_27_ALT11 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace USDHC2_IPP_WP_ON_SELECT_INPUT_fields_

struct USDHC2_IPP_WP_ON_SELECT_INPUT : ftl::mmio::Register<
    0x400E86D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    USDHC2_IPP_WP_ON_SELECT_INPUT_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = USDHC2_IPP_WP_ON_SELECT_INPUT_fields_::eDAISY;
  using DAISY = USDHC2_IPP_WP_ON_SELECT_INPUT_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_20 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_20_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_00 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_00_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_00 for Mode: ALT2
    eSELECT_GPIO_SD_B1_00_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_20_fields_

struct XBAR1_IN_SELECT_INPUT_20 : ftl::mmio::Register<
    0x400E86D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_20_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_20_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_20_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_21 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_21_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_01 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_01_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_01 for Mode: ALT2
    eSELECT_GPIO_SD_B1_01_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_21_fields_

struct XBAR1_IN_SELECT_INPUT_21 : ftl::mmio::Register<
    0x400E86DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_21_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_21_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_21_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_22 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_22_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_02 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_02_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_02 for Mode: ALT2
    eSELECT_GPIO_SD_B1_02_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_22_fields_

struct XBAR1_IN_SELECT_INPUT_22 : ftl::mmio::Register<
    0x400E86E0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_22_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_22_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_22_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_23 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_23_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_03 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_03_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_03 for Mode: ALT2
    eSELECT_GPIO_SD_B1_03_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_23_fields_

struct XBAR1_IN_SELECT_INPUT_23 : ftl::mmio::Register<
    0x400E86E4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_23_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_23_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_23_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_24 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_24_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_04 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_04_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_04 for Mode: ALT2
    eSELECT_GPIO_SD_B1_04_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_24_fields_

struct XBAR1_IN_SELECT_INPUT_24 : ftl::mmio::Register<
    0x400E86E8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_24_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_24_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_24_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_25 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_25_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_05 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_05_ALT6 = 0,
    // Selecting Pad: GPIO_SD_B1_05 for Mode: ALT2
    eSELECT_GPIO_SD_B1_05_ALT2 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_25_fields_

struct XBAR1_IN_SELECT_INPUT_25 : ftl::mmio::Register<
    0x400E86ECu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_25_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_25_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_25_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_26 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_26_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_06 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_06_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_00 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_00_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_26_fields_

struct XBAR1_IN_SELECT_INPUT_26 : ftl::mmio::Register<
    0x400E86F0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_26_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_26_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_26_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_27 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_27_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_07 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_07_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_01 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_01_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_27_fields_

struct XBAR1_IN_SELECT_INPUT_27 : ftl::mmio::Register<
    0x400E86F4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_27_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_27_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_27_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_28 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_28_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_08 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_08_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_02 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_02_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_28_fields_

struct XBAR1_IN_SELECT_INPUT_28 : ftl::mmio::Register<
    0x400E86F8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_28_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_28_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_28_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_29 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_29_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_09 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_09_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_03 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_03_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_29_fields_

struct XBAR1_IN_SELECT_INPUT_29 : ftl::mmio::Register<
    0x400E86FCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_29_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_29_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_29_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_30 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_30_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_10 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_10_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_04 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_04_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_30_fields_

struct XBAR1_IN_SELECT_INPUT_30 : ftl::mmio::Register<
    0x400E8700u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_30_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_30_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_30_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_31 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_31_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_11 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_11_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_05 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_05_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_31_fields_

struct XBAR1_IN_SELECT_INPUT_31 : ftl::mmio::Register<
    0x400E8704u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_31_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_31_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_31_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_32 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_32_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_12 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_12_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_06 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_06_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_32_fields_

struct XBAR1_IN_SELECT_INPUT_32 : ftl::mmio::Register<
    0x400E8708u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_32_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_32_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_32_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_33 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_33_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_13 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_13_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_07 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_07_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_33_fields_

struct XBAR1_IN_SELECT_INPUT_33 : ftl::mmio::Register<
    0x400E870Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_33_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_33_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_33_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_34 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_34_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_14 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_14_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_08 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_08_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_34_fields_

struct XBAR1_IN_SELECT_INPUT_34 : ftl::mmio::Register<
    0x400E8710u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_34_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_34_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_34_fields_::DAISY;
};

// XBAR1_IN_SELECT_INPUT_35 DAISY Register
namespace XBAR1_IN_SELECT_INPUT_35_fields_ {

  enum class eDAISY : std::uint32_t {
    // Selecting Pad: GPIO_EMC_B2_15 for Mode: ALT6
    eSELECT_GPIO_EMC_B2_15_ALT6 = 0,
    // Selecting Pad: GPIO_DISP_B1_09 for Mode: ALT4
    eSELECT_GPIO_DISP_B1_09_ALT4 = 1,
  };
  // Selecting Pads Involved in Daisy Chain.
  using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
}  // namespace XBAR1_IN_SELECT_INPUT_35_fields_

struct XBAR1_IN_SELECT_INPUT_35 : ftl::mmio::Register<
    0x400E8714u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    XBAR1_IN_SELECT_INPUT_35_fields_::DAISY,
    ftl::mmio::Reserved<31, 1>> {
  using eDAISY = XBAR1_IN_SELECT_INPUT_35_fields_::eDAISY;
  using DAISY = XBAR1_IN_SELECT_INPUT_35_fields_::DAISY;
};

}  // namespace regs::iomuxc