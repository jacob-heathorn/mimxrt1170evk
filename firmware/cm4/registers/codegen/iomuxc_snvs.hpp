#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcSnvs {
  // SW_MUX_CTL_PAD_WAKEUP_DIG SW MUX Control Register
  struct SwMuxCtlPadWakeupDigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT5 mux port: GPIO13_IO00 of instance: GPIO13
      eALT5_gpio13_IO0 = 5,
      // Select mux mode: ALT7 mux port: NMI_GLUE_NMI of instance: NMI_GLUE
      eALT7_nmi_glue_NMI = 7,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad WAKEUP_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadWakeupDigFields

  struct SW_MUX_CTL_PAD_WAKEUP_DIG : ftl::mmio::Register<
      0x40C94000u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadWakeupDigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadWakeupDigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadWakeupDigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadWakeupDigFields::eSION;
    using MUX_MODE = SwMuxCtlPadWakeupDigFields::MUX_MODE;
    using SION = SwMuxCtlPadWakeupDigFields::SION;
  };

  // SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG SW MUX Control Register
  struct SwMuxCtlPadPmicOnReqDigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_LP_PMIC_ON_REQ of instance: SNVS_LP
      eALT0_snvs_lp_PMIC_ON_REQ = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO01 of instance: GPIO13
      eALT5_gpio13_IO1 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad PMIC_ON_REQ_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadPmicOnReqDigFields

  struct SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG : ftl::mmio::Register<
      0x40C94004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadPmicOnReqDigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadPmicOnReqDigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadPmicOnReqDigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadPmicOnReqDigFields::eSION;
    using MUX_MODE = SwMuxCtlPadPmicOnReqDigFields::MUX_MODE;
    using SION = SwMuxCtlPadPmicOnReqDigFields::SION;
  };

  // SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG SW MUX Control Register
  struct SwMuxCtlPadPmicStbyReqDigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: CCM_PMIC_VSTBY_REQ of instance: CCM
      eALT0_ccm_PMIC_VSTBY_REQ = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO02 of instance: GPIO13
      eALT5_gpio13_IO2 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad PMIC_STBY_REQ_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadPmicStbyReqDigFields

  struct SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG : ftl::mmio::Register<
      0x40C94008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadPmicStbyReqDigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadPmicStbyReqDigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadPmicStbyReqDigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadPmicStbyReqDigFields::eSION;
    using MUX_MODE = SwMuxCtlPadPmicStbyReqDigFields::MUX_MODE;
    using SION = SwMuxCtlPadPmicStbyReqDigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs00DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER0 of instance: SNVS_LP
      eALT0_SNVS_TAMPER0 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO03 of instance: GPIO13
      eALT5_gpio13_IO3 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_00_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs00DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG : ftl::mmio::Register<
      0x40C9400Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs00DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs00DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs00DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs00DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs00DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs00DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs01DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER1 of instance: SNVS_LP
      eALT0_SNVS_TAMPER1 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO04 of instance: GPIO13
      eALT5_gpio13_IO4 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_01_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs01DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG : ftl::mmio::Register<
      0x40C94010u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs01DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs01DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs01DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs01DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs01DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs01DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs02DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER2 of instance: SNVS_LP
      eALT0_SNVS_TAMPER2 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO05 of instance: GPIO13
      eALT5_gpio13_IO5 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_02_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs02DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG : ftl::mmio::Register<
      0x40C94014u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs02DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs02DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs02DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs02DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs02DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs02DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs03DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER3 of instance: SNVS_LP
      eALT0_SNVS_TAMPER3 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO06 of instance: GPIO13
      eALT5_gpio13_IO6 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_03_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs03DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG : ftl::mmio::Register<
      0x40C94018u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs03DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs03DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs03DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs03DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs03DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs03DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs04DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER4 of instance: SNVS_LP
      eALT0_SNVS_TAMPER4 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO07 of instance: GPIO13
      eALT5_gpio13_IO7 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_04_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs04DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG : ftl::mmio::Register<
      0x40C9401Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs04DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs04DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs04DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs04DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs04DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs04DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs05DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER5 of instance: SNVS_LP
      eALT0_SNVS_TAMPER5 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO08 of instance: GPIO13
      eALT5_gpio13_IO8 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_05_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs05DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG : ftl::mmio::Register<
      0x40C94020u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs05DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs05DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs05DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs05DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs05DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs05DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs06DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER6 of instance: SNVS_LP
      eALT0_SNVS_TAMPER6 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO09 of instance: GPIO13
      eALT5_gpio13_IO9 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_06_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs06DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG : ftl::mmio::Register<
      0x40C94024u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs06DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs06DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs06DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs06DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs06DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs06DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs07DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER7 of instance: SNVS_LP
      eALT0_SNVS_TAMPER7 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO10 of instance: GPIO13
      eALT5_gpio13_IO10 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_07_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs07DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG : ftl::mmio::Register<
      0x40C94028u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs07DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs07DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs07DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs07DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs07DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs07DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs08DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER8 of instance: SNVS_LP
      eALT0_SNVS_TAMPER8 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO11 of instance: GPIO13
      eALT5_gpio13_IO11 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_08_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs08DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG : ftl::mmio::Register<
      0x40C9402Cu,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs08DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs08DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs08DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs08DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs08DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs08DigFields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG SW MUX Control Register
  struct SwMuxCtlPadGpioSnvs09DigFields {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SNVS_TAMPER9 of instance: SNVS_LP
      eALT0_SNVS_TAMPER9 = 0,
      // Select mux mode: ALT5 mux port: GPIO13_IO12 of instance: GPIO13
      eALT5_gpio13_IO12 = 5,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_SNVS_09_DIG
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<3, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwMuxCtlPadGpioSnvs09DigFields

  struct SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG : ftl::mmio::Register<
      0x40C94030u,
      std::uint32_t,
      0x00000005u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioSnvs09DigFields::MUX_MODE,
      ftl::mmio::Reserved<1, 3>,
      SwMuxCtlPadGpioSnvs09DigFields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioSnvs09DigFields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioSnvs09DigFields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioSnvs09DigFields::MUX_MODE;
    using SION = SwMuxCtlPadGpioSnvs09DigFields::SION;
  };

  // SW_PAD_CTL_PAD_TEST_MODE_DIG SW PAD Control Register
  struct SwPadCtlPadTestModeDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadTestModeDigFields

  struct SW_PAD_CTL_PAD_TEST_MODE_DIG : ftl::mmio::Register<
      0x40C94034u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadTestModeDigFields::PUE,
      SwPadCtlPadTestModeDigFields::PUS,
      ftl::mmio::Reserved<24, 4>,
      SwPadCtlPadTestModeDigFields::DWP,
      SwPadCtlPadTestModeDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadTestModeDigFields::ePUE;
    using ePUS = SwPadCtlPadTestModeDigFields::ePUS;
    using eDWP = SwPadCtlPadTestModeDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadTestModeDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadTestModeDigFields::PUE;
    using PUS = SwPadCtlPadTestModeDigFields::PUS;
    using DWP = SwPadCtlPadTestModeDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadTestModeDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_POR_B_DIG SW PAD Control Register
  struct SwPadCtlPadPorBDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadPorBDigFields

  struct SW_PAD_CTL_PAD_POR_B_DIG : ftl::mmio::Register<
      0x40C94038u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadPorBDigFields::PUE,
      SwPadCtlPadPorBDigFields::PUS,
      ftl::mmio::Reserved<24, 4>,
      SwPadCtlPadPorBDigFields::DWP,
      SwPadCtlPadPorBDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadPorBDigFields::ePUE;
    using ePUS = SwPadCtlPadPorBDigFields::ePUS;
    using eDWP = SwPadCtlPadPorBDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadPorBDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadPorBDigFields::PUE;
    using PUS = SwPadCtlPadPorBDigFields::PUS;
    using DWP = SwPadCtlPadPorBDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadPorBDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_ONOFF_DIG SW PAD Control Register
  struct SwPadCtlPadOnoffDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadOnoffDigFields

  struct SW_PAD_CTL_PAD_ONOFF_DIG : ftl::mmio::Register<
      0x40C9403Cu,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadOnoffDigFields::PUE,
      SwPadCtlPadOnoffDigFields::PUS,
      ftl::mmio::Reserved<24, 4>,
      SwPadCtlPadOnoffDigFields::DWP,
      SwPadCtlPadOnoffDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadOnoffDigFields::ePUE;
    using ePUS = SwPadCtlPadOnoffDigFields::ePUS;
    using eDWP = SwPadCtlPadOnoffDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadOnoffDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadOnoffDigFields::PUE;
    using PUS = SwPadCtlPadOnoffDigFields::PUS;
    using DWP = SwPadCtlPadOnoffDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadOnoffDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_WAKEUP_DIG SW PAD Control Register
  struct SwPadCtlPadWakeupDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadWakeupDigFields

  struct SW_PAD_CTL_PAD_WAKEUP_DIG : ftl::mmio::Register<
      0x40C94040u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadWakeupDigFields::PUE,
      SwPadCtlPadWakeupDigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadWakeupDigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadWakeupDigFields::DWP,
      SwPadCtlPadWakeupDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadWakeupDigFields::ePUE;
    using ePUS = SwPadCtlPadWakeupDigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadWakeupDigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadWakeupDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadWakeupDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadWakeupDigFields::PUE;
    using PUS = SwPadCtlPadWakeupDigFields::PUS;
    using ODE_SNVS = SwPadCtlPadWakeupDigFields::ODE_SNVS;
    using DWP = SwPadCtlPadWakeupDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadWakeupDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG SW PAD Control Register
  struct SwPadCtlPadPmicOnReqDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadPmicOnReqDigFields

  struct SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG : ftl::mmio::Register<
      0x40C94044u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadPmicOnReqDigFields::PUE,
      SwPadCtlPadPmicOnReqDigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadPmicOnReqDigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadPmicOnReqDigFields::DWP,
      SwPadCtlPadPmicOnReqDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadPmicOnReqDigFields::ePUE;
    using ePUS = SwPadCtlPadPmicOnReqDigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadPmicOnReqDigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadPmicOnReqDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadPmicOnReqDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadPmicOnReqDigFields::PUE;
    using PUS = SwPadCtlPadPmicOnReqDigFields::PUS;
    using ODE_SNVS = SwPadCtlPadPmicOnReqDigFields::ODE_SNVS;
    using DWP = SwPadCtlPadPmicOnReqDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadPmicOnReqDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG SW PAD Control Register
  struct SwPadCtlPadPmicStbyReqDigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadPmicStbyReqDigFields

  struct SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG : ftl::mmio::Register<
      0x40C94048u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadPmicStbyReqDigFields::PUE,
      SwPadCtlPadPmicStbyReqDigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadPmicStbyReqDigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadPmicStbyReqDigFields::DWP,
      SwPadCtlPadPmicStbyReqDigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadPmicStbyReqDigFields::ePUE;
    using ePUS = SwPadCtlPadPmicStbyReqDigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadPmicStbyReqDigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadPmicStbyReqDigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadPmicStbyReqDigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadPmicStbyReqDigFields::PUE;
    using PUS = SwPadCtlPadPmicStbyReqDigFields::PUS;
    using ODE_SNVS = SwPadCtlPadPmicStbyReqDigFields::ODE_SNVS;
    using DWP = SwPadCtlPadPmicStbyReqDigFields::DWP;
    using DWP_LOCK = SwPadCtlPadPmicStbyReqDigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs00DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs00DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG : ftl::mmio::Register<
      0x40C9404Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs00DigFields::PUE,
      SwPadCtlPadGpioSnvs00DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs00DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs00DigFields::DWP,
      SwPadCtlPadGpioSnvs00DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs00DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs00DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs00DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs00DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs00DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs00DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs00DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs00DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs00DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs00DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs01DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs01DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG : ftl::mmio::Register<
      0x40C94050u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs01DigFields::PUE,
      SwPadCtlPadGpioSnvs01DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs01DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs01DigFields::DWP,
      SwPadCtlPadGpioSnvs01DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs01DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs01DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs01DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs01DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs01DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs01DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs01DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs01DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs01DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs01DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs02DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs02DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG : ftl::mmio::Register<
      0x40C94054u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs02DigFields::PUE,
      SwPadCtlPadGpioSnvs02DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs02DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs02DigFields::DWP,
      SwPadCtlPadGpioSnvs02DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs02DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs02DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs02DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs02DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs02DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs02DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs02DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs02DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs02DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs02DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs03DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs03DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG : ftl::mmio::Register<
      0x40C94058u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs03DigFields::PUE,
      SwPadCtlPadGpioSnvs03DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs03DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs03DigFields::DWP,
      SwPadCtlPadGpioSnvs03DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs03DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs03DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs03DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs03DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs03DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs03DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs03DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs03DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs03DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs03DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs04DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs04DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG : ftl::mmio::Register<
      0x40C9405Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs04DigFields::PUE,
      SwPadCtlPadGpioSnvs04DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs04DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs04DigFields::DWP,
      SwPadCtlPadGpioSnvs04DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs04DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs04DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs04DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs04DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs04DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs04DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs04DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs04DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs04DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs04DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs05DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs05DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG : ftl::mmio::Register<
      0x40C94060u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs05DigFields::PUE,
      SwPadCtlPadGpioSnvs05DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs05DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs05DigFields::DWP,
      SwPadCtlPadGpioSnvs05DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs05DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs05DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs05DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs05DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs05DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs05DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs05DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs05DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs05DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs05DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs06DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs06DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG : ftl::mmio::Register<
      0x40C94064u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs06DigFields::PUE,
      SwPadCtlPadGpioSnvs06DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs06DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs06DigFields::DWP,
      SwPadCtlPadGpioSnvs06DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs06DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs06DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs06DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs06DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs06DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs06DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs06DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs06DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs06DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs06DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs07DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs07DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG : ftl::mmio::Register<
      0x40C94068u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs07DigFields::PUE,
      SwPadCtlPadGpioSnvs07DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs07DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs07DigFields::DWP,
      SwPadCtlPadGpioSnvs07DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs07DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs07DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs07DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs07DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs07DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs07DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs07DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs07DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs07DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs07DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs08DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs08DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG : ftl::mmio::Register<
      0x40C9406Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs08DigFields::PUE,
      SwPadCtlPadGpioSnvs08DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs08DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs08DigFields::DWP,
      SwPadCtlPadGpioSnvs08DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs08DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs08DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs08DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs08DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs08DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs08DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs08DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs08DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs08DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs08DigFields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG SW PAD Control Register
  struct SwPadCtlPadGpioSnvs09DigFields {
    enum class ePUE : std::uint32_t {
      // Pull Disable
      ePUE_0_Disable = 0,
      // Pull Enable
      ePUE_1_Pull = 1,
    };

    enum class ePUS : std::uint32_t {
      // Weak pull down
      ePUS_0_Weak_pull_down = 0,
      // Weak pull up
      ePUS_1_Weak_pull_up = 1,
    };

    enum class eODE_SNVS : std::uint32_t {
      // Disabled
      eODE_SNVS_0_Disabled = 0,
      // Enabled
      eODE_SNVS_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
      // Neither of DWP bits is locked
      elock_none = 0,
      // The lower DWP bit is locked
      elock_low = 1,
      // The higher DWP bit is locked
      elock_high = 2,
      // Both DWP bits are locked
      elock_both = 3,
    };

    // Pull / Keep Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain SNVS Field
    using ODE_SNVS = ftl::mmio::Field<1, 6, eODE_SNVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwPadCtlPadGpioSnvs09DigFields

  struct SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG : ftl::mmio::Register<
      0x40C94070u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      SwPadCtlPadGpioSnvs09DigFields::PUE,
      SwPadCtlPadGpioSnvs09DigFields::PUS,
      ftl::mmio::Reserved<2, 4>,
      SwPadCtlPadGpioSnvs09DigFields::ODE_SNVS,
      ftl::mmio::Reserved<21, 7>,
      SwPadCtlPadGpioSnvs09DigFields::DWP,
      SwPadCtlPadGpioSnvs09DigFields::DWP_LOCK> {
    using ePUE = SwPadCtlPadGpioSnvs09DigFields::ePUE;
    using ePUS = SwPadCtlPadGpioSnvs09DigFields::ePUS;
    using eODE_SNVS = SwPadCtlPadGpioSnvs09DigFields::eODE_SNVS;
    using eDWP = SwPadCtlPadGpioSnvs09DigFields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioSnvs09DigFields::eDWP_LOCK;
    using PUE = SwPadCtlPadGpioSnvs09DigFields::PUE;
    using PUS = SwPadCtlPadGpioSnvs09DigFields::PUS;
    using ODE_SNVS = SwPadCtlPadGpioSnvs09DigFields::ODE_SNVS;
    using DWP = SwPadCtlPadGpioSnvs09DigFields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioSnvs09DigFields::DWP_LOCK;
  };

};

}  // namespace regs