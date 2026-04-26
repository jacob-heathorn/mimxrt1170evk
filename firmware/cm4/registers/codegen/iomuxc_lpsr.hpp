#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC LPSR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcLpsr {
  // SW_MUX_CTL_PAD_GPIO_LPSR_00 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: FLEXCAN3_TX of instance: FLEXCAN3
      eALT0_can3_TX = 0,
      // Select mux mode: ALT1 mux port: MIC_CLK of instance: MIC
      eALT1_mic_CLK = 1,
      // Select mux mode: ALT2 mux port: MQS_RIGHT of instance: MQS
      eALT2_mqs_RIGHT = 2,
      // Select mux mode: ALT3 mux port: ARM_CM4_EVENTO of instance: CM4
      eALT3_ARM_CM4_EVENTO = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO00 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO0 = 5,
      // Select mux mode: ALT6 mux port: LPUART12_TXD of instance: LPUART12
      eALT6_lpuart12_TX = 6,
      // Select mux mode: ALT7 mux port: SAI4_MCLK of instance: SAI4
      eALT7_sai4_MCLK = 7,
      // Select mux mode: ALT10 mux port: GPIO12_IO00 of instance: GPIO12
      eALT10_gpio12_IO0 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_00
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_00 : ftl::mmio::Register<
      0x40C08000u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_00_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_01 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: FLEXCAN3_RX of instance: FLEXCAN3
      eALT0_can3_RX = 0,
      // Select mux mode: ALT1 mux port: MIC_BITSTREAM0 of instance: MIC
      eALT1_mic_BITSTREAM0 = 1,
      // Select mux mode: ALT2 mux port: MQS_LEFT of instance: MQS
      eALT2_mqs_LEFT = 2,
      // Select mux mode: ALT3 mux port: ARM_CM4_EVENTI of instance: CM4
      eALT3_ARM_CM4_EVENTI = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO01 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO1 = 5,
      // Select mux mode: ALT6 mux port: LPUART12_RXD of instance: LPUART12
      eALT6_lpuart12_RX = 6,
      // Select mux mode: ALT10 mux port: GPIO12_IO01 of instance: GPIO12
      eALT10_gpio12_IO1 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_01
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_01 : ftl::mmio::Register<
      0x40C08004u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_01_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_02 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SRC_BOOT_MODE00 of instance: SRC
      eALT0_src_BOOT_MODE0 = 0,
      // Select mux mode: ALT1 mux port: LPSPI5_SCK of instance: LPSPI5
      eALT1_lpspi5_SCK = 1,
      // Select mux mode: ALT2 mux port: SAI4_TX_DATA of instance: SAI4
      eALT2_sai4_TX_DATA = 2,
      // Select mux mode: ALT3 mux port: MQS_RIGHT of instance: MQS
      eALT3_mqs_RIGHT = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO02 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO2 = 5,
      // Select mux mode: ALT10 mux port: GPIO12_IO02 of instance: GPIO12
      eALT10_gpio12_IO2 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_02
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_02 : ftl::mmio::Register<
      0x40C08008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_02_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_03 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: SRC_BOOT_MODE01 of instance: SRC
      eALT0_src_BOOT_MODE1 = 0,
      // Select mux mode: ALT1 mux port: LPSPI5_PCS0 of instance: LPSPI5
      eALT1_lpspi5_PCS0 = 1,
      // Select mux mode: ALT2 mux port: SAI4_TX_SYNC of instance: SAI4
      eALT2_sai4_TX_SYNC = 2,
      // Select mux mode: ALT3 mux port: MQS_LEFT of instance: MQS
      eALT3_mqs_LEFT = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO03 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO3 = 5,
      // Select mux mode: ALT10 mux port: GPIO12_IO03 of instance: GPIO12
      eALT10_gpio12_IO3 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_03
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_03 : ftl::mmio::Register<
      0x40C0800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_03_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_04 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C5_SDA of instance: LPI2C5
      eALT0_lpi2c5_SDA = 0,
      // Select mux mode: ALT1 mux port: LPSPI5_SOUT of instance: LPSPI5
      eALT1_lpspi5_SDO = 1,
      // Select mux mode: ALT2 mux port: SAI4_TX_BCLK of instance: SAI4
      eALT2_sai4_TX_BCLK = 2,
      // Select mux mode: ALT3 mux port: LPUART12_RTS_B of instance: LPUART12
      eALT3_lpuart12_RTS_B = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO04 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO4 = 5,
      // Select mux mode: ALT6 mux port: LPUART11_TXD of instance: LPUART11
      eALT6_lpuart11_TX = 6,
      // Select mux mode: ALT10 mux port: GPIO12_IO04 of instance: GPIO12
      eALT10_gpio12_IO4 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_04
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_04 : ftl::mmio::Register<
      0x40C08010u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_04_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_05 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C5_SCL of instance: LPI2C5
      eALT0_lpi2c5_SCL = 0,
      // Select mux mode: ALT1 mux port: LPSPI5_SIN of instance: LPSPI5
      eALT1_lpspi5_SDI = 1,
      // Select mux mode: ALT2 mux port: SAI4_MCLK of instance: SAI4
      eALT2_sai4_MCLK = 2,
      // Select mux mode: ALT3 mux port: LPUART12_CTS_B of instance: LPUART12
      eALT3_lpuart12_CTS_B = 3,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO05 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO5 = 5,
      // Select mux mode: ALT6 mux port: LPUART11_RXD of instance: LPUART11
      eALT6_lpuart11_RX = 6,
      // Select mux mode: ALT7 mux port: NMI_GLUE_NMI of instance: nmi_glue
      eALT7_nmi_glue_NMI = 7,
      // Select mux mode: ALT10 mux port: GPIO12_IO05 of instance: GPIO12
      eALT10_gpio12_IO5 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_05
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_05 : ftl::mmio::Register<
      0x40C08014u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_05_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_06 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C6_SDA of instance: LPI2C6
      eALT0_lpi2c6_SDA = 0,
      // Select mux mode: ALT2 mux port: SAI4_RX_DATA of instance: SAI4
      eALT2_sai4_RX_DATA = 2,
      // Select mux mode: ALT3 mux port: LPUART12_TXD of instance: LPUART12
      eALT3_lpuart12_TX = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_PCS3 of instance: LPSPI6
      eALT4_lpspi6_PCS3 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO06 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO6 = 5,
      // Select mux mode: ALT6 mux port: FLEXCAN3_TX of instance: FLEXCAN3
      eALT6_can3_TX = 6,
      // Select mux mode: ALT7 mux port: PIT2_TRIGGER3 of instance: PIT2
      eALT7_pit2_TRIGGER3 = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_PCS1 of instance: LPSPI5
      eALT8_lpspi5_PCS1 = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO06 of instance: GPIO12
      eALT10_gpio12_IO6 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_06
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_06 : ftl::mmio::Register<
      0x40C08018u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_06_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_07 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPI2C6_SCL of instance: LPI2C6
      eALT0_lpi2c6_SCL = 0,
      // Select mux mode: ALT2 mux port: SAI4_RX_BCLK of instance: SAI4
      eALT2_sai4_RX_BCLK = 2,
      // Select mux mode: ALT3 mux port: LPUART12_RXD of instance: LPUART12
      eALT3_lpuart12_RX = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_PCS2 of instance: LPSPI6
      eALT4_lpspi6_PCS2 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO07 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO7 = 5,
      // Select mux mode: ALT6 mux port: FLEXCAN3_RX of instance: FLEXCAN3
      eALT6_can3_RX = 6,
      // Select mux mode: ALT7 mux port: PIT2_TRIGGER2 of instance: PIT2
      eALT7_pit2_TRIGGER2 = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_PCS2 of instance: LPSPI5
      eALT8_lpspi5_PCS2 = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO07 of instance: GPIO12
      eALT10_gpio12_IO7 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_07
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_07 : ftl::mmio::Register<
      0x40C0801Cu,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_07_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_08 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART11_TXD of instance: LPUART11
      eALT0_lpuart11_TX = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN3_TX of instance: FLEXCAN3
      eALT1_can3_TX = 1,
      // Select mux mode: ALT2 mux port: SAI4_RX_SYNC of instance: SAI4
      eALT2_sai4_RX_SYNC = 2,
      // Select mux mode: ALT3 mux port: MIC_CLK of instance: MIC
      eALT3_mic_CLK = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_PCS1 of instance: LPSPI6
      eALT4_lpspi6_PCS1 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO08 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO8 = 5,
      // Select mux mode: ALT6 mux port: LPI2C5_SDA of instance: LPI2C5
      eALT6_lpi2c5_SDA = 6,
      // Select mux mode: ALT7 mux port: PIT2_TRIGGER1 of instance: PIT2
      eALT7_pit2_TRIGGER1 = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_PCS3 of instance: LPSPI5
      eALT8_lpspi5_PCS3 = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO08 of instance: GPIO12
      eALT10_gpio12_IO8 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_08
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_08 : ftl::mmio::Register<
      0x40C08020u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_08_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_09 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: LPUART11_RXD of instance: LPUART11
      eALT0_lpuart11_RX = 0,
      // Select mux mode: ALT1 mux port: FLEXCAN3_RX of instance: FLEXCAN3
      eALT1_can3_RX = 1,
      // Select mux mode: ALT2 mux port: PIT2_TRIGGER0 of instance: PIT2
      eALT2_pit2_TRIGGER0 = 2,
      // Select mux mode: ALT3 mux port: MIC_BITSTREAM0 of instance: MIC
      eALT3_mic_BITSTREAM0 = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_PCS0 of instance: LPSPI6
      eALT4_lpspi6_PCS0 = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO09 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO9 = 5,
      // Select mux mode: ALT6 mux port: LPI2C5_SCL of instance: LPI2C5
      eALT6_lpi2c5_SCL = 6,
      // Select mux mode: ALT7 mux port: SAI4_TX_DATA of instance: SAI4
      eALT7_sai4_TX_DATA = 7,
      // Select mux mode: ALT10 mux port: GPIO12_IO09 of instance: GPIO12
      eALT10_gpio12_IO9 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_09
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_09 : ftl::mmio::Register<
      0x40C08024u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_09_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_10 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_TRSTB of instance: JTAG_MUX
      eALT0_jtag_mux_TRSTB = 0,
      // Select mux mode: ALT1 mux port: LPUART11_CTS_B of instance: LPUART11
      eALT1_lpuart11_CTS_B = 1,
      // Select mux mode: ALT2 mux port: LPI2C6_SDA of instance: LPI2C6
      eALT2_lpi2c6_SDA = 2,
      // Select mux mode: ALT3 mux port: MIC_BITSTREAM1 of instance: MIC
      eALT3_mic_BITSTREAM1 = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_SCK of instance: LPSPI6
      eALT4_lpspi6_SCK = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO10 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO10 = 5,
      // Select mux mode: ALT6 mux port: LPI2C5_SCLS of instance: LPI2C5
      eALT6_lpi2c5_SCLS = 6,
      // Select mux mode: ALT7 mux port: SAI4_TX_SYNC of instance: SAI4
      eALT7_sai4_TX_SYNC = 7,
      // Select mux mode: ALT8 mux port: LPUART12_TXD of instance: LPUART12
      eALT8_lpuart12_TX = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO10 of instance: GPIO12
      eALT10_gpio12_IO10 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_10
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_10 : ftl::mmio::Register<
      0x40C08028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_10_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_11 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_TDO of instance: JTAG_MUX
      eALT0_jtag_mux_TDO = 0,
      // Select mux mode: ALT1 mux port: LPUART11_RTS_B of instance: LPUART11
      eALT1_lpuart11_RTS_B = 1,
      // Select mux mode: ALT2 mux port: LPI2C6_SCL of instance: LPI2C6
      eALT2_lpi2c6_SCL = 2,
      // Select mux mode: ALT3 mux port: MIC_BITSTREAM2 of instance: MIC
      eALT3_mic_BITSTREAM2 = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_SOUT of instance: LPSPI6
      eALT4_lpspi6_SDO = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO11 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO11 = 5,
      // Select mux mode: ALT6 mux port: LPI2C5_SDAS of instance: LPI2C5
      eALT6_lpi2c5_SDAS = 6,
      // Select mux mode: ALT7 mux port: ARM_TRACE_SWO of instance: ARM
      eALT7_ARM_TRACE_SWO = 7,
      // Select mux mode: ALT8 mux port: LPUART12_RXD of instance: LPUART12
      eALT8_lpuart12_RX = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO11 of instance: GPIO12
      eALT10_gpio12_IO11 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_11
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_11 : ftl::mmio::Register<
      0x40C0802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_11_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_12 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_TDI of instance: JTAG_MUX
      eALT0_jtag_mux_TDI = 0,
      // Select mux mode: ALT1 mux port: PIT2_TRIGGER0 of instance: PIT2
      eALT1_pit2_TRIGGER0 = 1,
      // Select mux mode: ALT3 mux port: MIC_BITSTREAM3 of instance: MIC
      eALT3_mic_BITSTREAM3 = 3,
      // Select mux mode: ALT4 mux port: LPSPI6_SIN of instance: LPSPI6
      eALT4_lpspi6_SDI = 4,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO12 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO12 = 5,
      // Select mux mode: ALT6 mux port: LPI2C5_HREQ of instance: LPI2C5
      eALT6_lpi2c5_HREQ = 6,
      // Select mux mode: ALT7 mux port: SAI4_TX_BCLK of instance: SAI4
      eALT7_sai4_TX_BCLK = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_SCK of instance: LPSPI5
      eALT8_lpspi5_SCK = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO12 of instance: GPIO12
      eALT10_gpio12_IO12 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_12
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_12 : ftl::mmio::Register<
      0x40C08030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_12_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_13 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_MOD of instance: JTAG_MUX
      eALT0_jtag_mux_MOD = 0,
      // Select mux mode: ALT1 mux port: MIC_BITSTREAM1 of instance: MIC
      eALT1_mic_BITSTREAM1 = 1,
      // Select mux mode: ALT2 mux port: PIT2_TRIGGER1 of instance: PIT2
      eALT2_pit2_TRIGGER1 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO13 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO13 = 5,
      // Select mux mode: ALT7 mux port: SAI4_RX_DATA of instance: SAI4
      eALT7_sai4_RX_DATA = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_PCS0 of instance: LPSPI5
      eALT8_lpspi5_PCS0 = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO13 of instance: GPIO12
      eALT10_gpio12_IO13 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_13
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_13 : ftl::mmio::Register<
      0x40C08034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_13_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_14 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_TCK of instance: JTAG_MUX/SWD_CLK
      eALT0_jtag_mux_TCK = 0,
      // Select mux mode: ALT1 mux port: MIC_BITSTREAM2 of instance: MIC
      eALT1_mic_BITSTREAM2 = 1,
      // Select mux mode: ALT2 mux port: PIT2_TRIGGER2 of instance: PIT2
      eALT2_pit2_TRIGGER2 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO14 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO14 = 5,
      // Select mux mode: ALT7 mux port: SAI4_RX_BCLK of instance: SAI4
      eALT7_sai4_RX_BCLK = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_SOUT of instance: LPSPI5
      eALT8_lpspi5_SDO = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO14 of instance: GPIO12
      eALT10_gpio12_IO14 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_14
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_14 : ftl::mmio::Register<
      0x40C08038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_14_fields_::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_15 SW MUX Control Register
  struct SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_ {
    enum class eMUX_MODE : std::uint32_t {
      // Select mux mode: ALT0 mux port: JTAG_MUX_TMS of instance: JTAG_MUX/SWD_DIO
      eALT0_jtag_mux_TMS = 0,
      // Select mux mode: ALT1 mux port: MIC_BITSTREAM3 of instance: MIC
      eALT1_mic_BITSTREAM3 = 1,
      // Select mux mode: ALT2 mux port: PIT2_TRIGGER3 of instance: PIT2
      eALT2_pit2_TRIGGER3 = 2,
      // Select mux mode: ALT5 mux port: GPIO_MUX6_IO15 of instance: GPIO_MUX6
      eALT5_gpio_mux6_IO15 = 5,
      // Select mux mode: ALT7 mux port: SAI4_RX_SYNC of instance: SAI4
      eALT7_sai4_RX_SYNC = 7,
      // Select mux mode: ALT8 mux port: LPSPI5_SIN of instance: LPSPI5
      eALT8_lpspi5_SDI = 8,
      // Select mux mode: ALT10 mux port: GPIO12_IO15 of instance: GPIO12
      eALT10_gpio12_IO15 = 10,
    };

    enum class eSION : std::uint32_t {
      // Input Path is determined by functionality
      eDISABLED = 0,
      // Force input path of pad GPIO_LPSR_15
      eENABLED = 1,
    };

    // MUX Mode Select Field.
    using MUX_MODE = ftl::mmio::Field<4, 0, eMUX_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Input On Field.
    using SION = ftl::mmio::Field<1, 4, eSION, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_

  struct SW_MUX_CTL_PAD_GPIO_LPSR_15 : ftl::mmio::Register<
      0x40C0803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::MUX_MODE,
      SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::eMUX_MODE;
    using eSION = SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::eSION;
    using MUX_MODE = SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::MUX_MODE;
    using SION = SW_MUX_CTL_PAD_GPIO_LPSR_15_fields_::SION;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_00 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_00 : ftl::mmio::Register<
      0x40C08040u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_00_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_01 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_01 : ftl::mmio::Register<
      0x40C08044u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_01_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_02 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_02 : ftl::mmio::Register<
      0x40C08048u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_02_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_03 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_03 : ftl::mmio::Register<
      0x40C0804Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_03_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_04 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_04 : ftl::mmio::Register<
      0x40C08050u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_04_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_05 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_05 : ftl::mmio::Register<
      0x40C08054u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_05_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_06 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_06 : ftl::mmio::Register<
      0x40C08058u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_06_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_07 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_07 : ftl::mmio::Register<
      0x40C0805Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_07_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_08 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_08 : ftl::mmio::Register<
      0x40C08060u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_08_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_09 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_09 : ftl::mmio::Register<
      0x40C08064u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_09_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_10 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_10 : ftl::mmio::Register<
      0x40C08068u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_10_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_11 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_11 : ftl::mmio::Register<
      0x40C0806Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_11_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_12 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_12 : ftl::mmio::Register<
      0x40C08070u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_12_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_13 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_13 : ftl::mmio::Register<
      0x40C08074u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_13_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_14 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_14 : ftl::mmio::Register<
      0x40C08078u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_14_fields_::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_15 SW PAD Control Register
  struct SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_ {
    enum class eSRE : std::uint32_t {
      // Slow Slew Rate
      eSRE_0_Slow_Slew_Rate = 0,
      // Fast Slew Rate
      eSRE_1_Fast_Slew_Rate = 1,
    };

    enum class eDSE : std::uint32_t {
      // normal driver
      eDSE_0_normal_driver = 0,
      // high driver
      eDSE_1_high_driver = 1,
    };

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

    enum class eODE_LPSR : std::uint32_t {
      // Disabled
      eODE_LPSR_0_Disabled = 0,
      // Enabled
      eODE_LPSR_1_Enabled = 1,
    };

    enum class eDWP : std::uint32_t {
      // Both cores are allowed
      eforbid_none = 0,
      // CM7 is forbidden
      eforbid_CM7 = 1,
      // CM4 is forbidden
      eforbid_CM4 = 2,
      // Both cores are forbidden
      eforbid_both = 3,
    };

    enum class eDWP_LOCK : std::uint32_t {
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
    // Pull Select Field
    using PUE = ftl::mmio::Field<1, 2, ePUE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pull Up / Down Config. Field
    using PUS = ftl::mmio::Field<1, 3, ePUS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Open Drain LPSR Field
    using ODE_LPSR = ftl::mmio::Field<1, 5, eODE_LPSR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection
    using DWP = ftl::mmio::Field<2, 28, eDWP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Domain write protection lock
    using DWP_LOCK = ftl::mmio::Field<2, 30, eDWP_LOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_

  struct SW_PAD_CTL_PAD_GPIO_LPSR_15 : ftl::mmio::Register<
      0x40C0807Cu,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::SRE,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DSE,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::PUE,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::PUS,
      ftl::mmio::Reserved<1, 4>,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DWP,
      SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DWP_LOCK> {
    using eSRE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::eSRE;
    using eDSE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::eDSE;
    using ePUE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::ePUE;
    using ePUS = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::ePUS;
    using eODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::eODE_LPSR;
    using eDWP = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::eDWP;
    using eDWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::eDWP_LOCK;
    using SRE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::SRE;
    using DSE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DSE;
    using PUE = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::PUE;
    using PUS = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::PUS;
    using ODE_LPSR = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::ODE_LPSR;
    using DWP = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DWP;
    using DWP_LOCK = SW_PAD_CTL_PAD_GPIO_LPSR_15_fields_::DWP_LOCK;
  };

  // CAN3_IPP_IND_CANRX_SELECT_INPUT DAISY Register
  struct CAN3_IPP_IND_CANRX_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_01 for Mode: ALT0
      eSELECT_GPIO_LPSR_01_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT6
      eSELECT_GPIO_LPSR_07_ALT6 = 1,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT1
      eSELECT_GPIO_LPSR_09_ALT1 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAN3_IPP_IND_CANRX_SELECT_INPUT_fields_

  struct CAN3_IPP_IND_CANRX_SELECT_INPUT : ftl::mmio::Register<
      0x40C08080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CAN3_IPP_IND_CANRX_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = CAN3_IPP_IND_CANRX_SELECT_INPUT_fields_::eDAISY;
    using DAISY = CAN3_IPP_IND_CANRX_SELECT_INPUT_fields_::DAISY;
  };

  // LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT0
      eSELECT_GPIO_LPSR_05_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT6
      eSELECT_GPIO_LPSR_09_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_

  struct LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x40C08084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
  };

  // LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT0
      eSELECT_GPIO_LPSR_04_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT6
      eSELECT_GPIO_LPSR_08_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_

  struct LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x40C08088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
  };

  // LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT0
      eSELECT_GPIO_LPSR_07_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_11 for Mode: ALT2
      eSELECT_GPIO_LPSR_11_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_

  struct LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x40C0808Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT_fields_::DAISY;
  };

  // LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_06 for Mode: ALT0
      eSELECT_GPIO_LPSR_06_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT2
      eSELECT_GPIO_LPSR_10_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_

  struct LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x40C08090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT_fields_::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_03 for Mode: ALT1
      eSELECT_GPIO_LPSR_03_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT8
      eSELECT_GPIO_LPSR_13_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0_fields_

  struct LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C08094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0_fields_::eDAISY;
    using DAISY = LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0_fields_::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_02 for Mode: ALT1
      eSELECT_GPIO_LPSR_02_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT8
      eSELECT_GPIO_LPSR_12_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT_fields_

  struct LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x40C08098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT_fields_::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT1
      eSELECT_GPIO_LPSR_05_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT8
      eSELECT_GPIO_LPSR_15_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT_fields_

  struct LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x40C0809Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT_fields_::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT1
      eSELECT_GPIO_LPSR_04_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT8
      eSELECT_GPIO_LPSR_14_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT_fields_

  struct LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT_fields_::DAISY;
  };

  // LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
  struct LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT6
      eSELECT_GPIO_LPSR_05_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT0
      eSELECT_GPIO_LPSR_09_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_

  struct LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
  };

  // LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
  struct LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT6
      eSELECT_GPIO_LPSR_04_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT0
      eSELECT_GPIO_LPSR_08_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_

  struct LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
  };

  // LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
  struct LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_01 for Mode: ALT6
      eSELECT_GPIO_LPSR_01_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT3
      eSELECT_GPIO_LPSR_07_ALT3 = 1,
      // Selecting Pad: GPIO_LPSR_11 for Mode: ALT8
      eSELECT_GPIO_LPSR_11_ALT8 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_

  struct LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT_fields_::DAISY;
  };

  // LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
  struct LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_00 for Mode: ALT6
      eSELECT_GPIO_LPSR_00_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_06 for Mode: ALT3
      eSELECT_GPIO_LPSR_06_ALT3 = 1,
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT8
      eSELECT_GPIO_LPSR_10_ALT8 = 2,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<2, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_

  struct LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::eDAISY;
    using DAISY = LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_fields_::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 DAISY Register
  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_01 for Mode: ALT1
      eSELECT_GPIO_LPSR_01_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT3
      eSELECT_GPIO_LPSR_09_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0_fields_

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C080B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0_fields_::eDAISY;
    using DAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0_fields_::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 DAISY Register
  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT3
      eSELECT_GPIO_LPSR_10_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT1
      eSELECT_GPIO_LPSR_13_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1_fields_

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 : ftl::mmio::Register<
      0x40C080B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1_fields_::eDAISY;
    using DAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1_fields_::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 DAISY Register
  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_11 for Mode: ALT3
      eSELECT_GPIO_LPSR_11_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT1
      eSELECT_GPIO_LPSR_14_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2_fields_

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 : ftl::mmio::Register<
      0x40C080BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2_fields_::eDAISY;
    using DAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2_fields_::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 DAISY Register
  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT3
      eSELECT_GPIO_LPSR_12_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT1
      eSELECT_GPIO_LPSR_15_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3_fields_

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 : ftl::mmio::Register<
      0x40C080C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3_fields_::eDAISY;
    using DAISY = MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3_fields_::DAISY;
  };

  // NMI_GLUE_IPP_IND_NMI_SELECT_INPUT DAISY Register
  struct NMI_GLUE_IPP_IND_NMI_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT7
      eSELECT_GPIO_LPSR_05_ALT7 = 0,
      // Selecting Pad: WAKEUP_DIG for Mode: ALT7
      eSELECT_WAKEUP_DIG_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct NMI_GLUE_IPP_IND_NMI_SELECT_INPUT_fields_

  struct NMI_GLUE_IPP_IND_NMI_SELECT_INPUT : ftl::mmio::Register<
      0x40C080C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NMI_GLUE_IPP_IND_NMI_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = NMI_GLUE_IPP_IND_NMI_SELECT_INPUT_fields_::eDAISY;
    using DAISY = NMI_GLUE_IPP_IND_NMI_SELECT_INPUT_fields_::DAISY;
  };

  // SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT DAISY Register
  struct SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_00 for Mode: ALT7
      eSELECT_GPIO_LPSR_00_ALT7 = 0,
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT2
      eSELECT_GPIO_LPSR_05_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_

  struct SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::eDAISY;
    using DAISY = SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT_fields_::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT DAISY Register
  struct SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT2
      eSELECT_GPIO_LPSR_07_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT7
      eSELECT_GPIO_LPSR_14_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT_fields_

  struct SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT_fields_::eDAISY;
    using DAISY = SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT_fields_::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 DAISY Register
  struct SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_06 for Mode: ALT2
      eSELECT_GPIO_LPSR_06_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT7
      eSELECT_GPIO_LPSR_13_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0_fields_

  struct SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C080D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0_fields_::eDAISY;
    using DAISY = SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0_fields_::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT DAISY Register
  struct SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT2
      eSELECT_GPIO_LPSR_08_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT7
      eSELECT_GPIO_LPSR_15_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT_fields_

  struct SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x40C080D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT_fields_::eDAISY;
    using DAISY = SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT_fields_::DAISY;
  };

  // SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT DAISY Register
  struct SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT2
      eSELECT_GPIO_LPSR_04_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT7
      eSELECT_GPIO_LPSR_12_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT_fields_

  struct SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT_fields_::eDAISY;
    using DAISY = SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT_fields_::DAISY;
  };

  // SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT DAISY Register
  struct SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT_fields_ {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_03 for Mode: ALT2
      eSELECT_GPIO_LPSR_03_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT7
      eSELECT_GPIO_LPSR_10_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT_fields_

  struct SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x40C080DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT_fields_::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT_fields_::eDAISY;
    using DAISY = SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT_fields_::DAISY;
  };

};

}  // namespace regs