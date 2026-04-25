#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs::iomuxc_snvs {


// SW_MUX_CTL_PAD_WAKEUP_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_WAKEUP_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_WAKEUP_DIG_fields_

struct SW_MUX_CTL_PAD_WAKEUP_DIG : ftl::mmio::Register<
    0x40C94000u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_WAKEUP_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_

struct SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG : ftl::mmio::Register<
    0x40C94004u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_

struct SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG : ftl::mmio::Register<
    0x40C94008u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG : ftl::mmio::Register<
    0x40C9400Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG : ftl::mmio::Register<
    0x40C94010u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG : ftl::mmio::Register<
    0x40C94014u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG : ftl::mmio::Register<
    0x40C94018u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG : ftl::mmio::Register<
    0x40C9401Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG : ftl::mmio::Register<
    0x40C94020u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG : ftl::mmio::Register<
    0x40C94024u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG : ftl::mmio::Register<
    0x40C94028u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG : ftl::mmio::Register<
    0x40C9402Cu,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG_fields_::SION;
};


// SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG SW MUX Control Register
struct SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_ {

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
};  // struct SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_

struct SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG : ftl::mmio::Register<
    0x40C94030u,
    std::uint32_t,
    0x00000005u,
    ftl::mmio::RW,
    SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::MUX_MODE,
    ftl::mmio::Reserved<1, 3>,
    SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::SION,
    ftl::mmio::Reserved<27, 5>> {
  using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::eMUX_MODE;
  using eSION = SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::eSION;
  using MUX_MODE = SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::MUX_MODE;
  using SION = SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG_fields_::SION;
};


// SW_PAD_CTL_PAD_TEST_MODE_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_

struct SW_PAD_CTL_PAD_TEST_MODE_DIG : ftl::mmio::Register<
    0x40C94034u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::PUS,
    ftl::mmio::Reserved<24, 4>,
    SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::ePUS;
  using eDWP = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::PUS;
  using DWP = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_TEST_MODE_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_POR_B_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_POR_B_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_POR_B_DIG_fields_

struct SW_PAD_CTL_PAD_POR_B_DIG : ftl::mmio::Register<
    0x40C94038u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_POR_B_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_POR_B_DIG_fields_::PUS,
    ftl::mmio::Reserved<24, 4>,
    SW_PAD_CTL_PAD_POR_B_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_POR_B_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_POR_B_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_POR_B_DIG_fields_::ePUS;
  using eDWP = SW_PAD_CTL_PAD_POR_B_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_POR_B_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_POR_B_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_POR_B_DIG_fields_::PUS;
  using DWP = SW_PAD_CTL_PAD_POR_B_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_POR_B_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_ONOFF_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_ONOFF_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_ONOFF_DIG_fields_

struct SW_PAD_CTL_PAD_ONOFF_DIG : ftl::mmio::Register<
    0x40C9403Cu,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_ONOFF_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_ONOFF_DIG_fields_::PUS,
    ftl::mmio::Reserved<24, 4>,
    SW_PAD_CTL_PAD_ONOFF_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_ONOFF_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::ePUS;
  using eDWP = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::PUS;
  using DWP = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_ONOFF_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_WAKEUP_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_WAKEUP_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_WAKEUP_DIG_fields_

struct SW_PAD_CTL_PAD_WAKEUP_DIG : ftl::mmio::Register<
    0x40C94040u,
    std::uint32_t,
    0x0000000Eu,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_WAKEUP_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_

struct SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG : ftl::mmio::Register<
    0x40C94044u,
    std::uint32_t,
    0x0000000Au,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_

struct SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG : ftl::mmio::Register<
    0x40C94048u,
    std::uint32_t,
    0x0000000Au,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG : ftl::mmio::Register<
    0x40C9404Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG : ftl::mmio::Register<
    0x40C94050u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG : ftl::mmio::Register<
    0x40C94054u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG : ftl::mmio::Register<
    0x40C94058u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG : ftl::mmio::Register<
    0x40C9405Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG : ftl::mmio::Register<
    0x40C94060u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG : ftl::mmio::Register<
    0x40C94064u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG : ftl::mmio::Register<
    0x40C94068u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG : ftl::mmio::Register<
    0x40C9406Cu,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG_fields_::DWP_LOCK;
};


// SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG SW PAD Control Register
struct SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_ {

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
};  // struct SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_

struct SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG : ftl::mmio::Register<
    0x40C94070u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<2, 0>,
    SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::PUE,
    SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::PUS,
    ftl::mmio::Reserved<2, 4>,
    SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::ODE_SNVS,
    ftl::mmio::Reserved<21, 7>,
    SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::DWP,
    SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::DWP_LOCK> {
  using ePUE = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::ePUE;
  using ePUS = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::ePUS;
  using eODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::eODE_SNVS;
  using eDWP = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::eDWP;
  using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::eDWP_LOCK;
  using PUE = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::PUE;
  using PUS = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::PUS;
  using ODE_SNVS = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::ODE_SNVS;
  using DWP = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::DWP;
  using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG_fields_::DWP_LOCK;
};

}  // namespace regs::iomuxc_snvs