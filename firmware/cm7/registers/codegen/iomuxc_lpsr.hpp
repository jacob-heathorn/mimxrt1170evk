#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// IOMUXC LPSR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct IomuxcLpsr {
  // SW_MUX_CTL_PAD_GPIO_LPSR_00 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr00Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr00Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_00 : ftl::mmio::Register<
      0x40C08000u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr00Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr00Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr00Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr00Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr00Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr00Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_01 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr01Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr01Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_01 : ftl::mmio::Register<
      0x40C08004u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr01Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr01Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr01Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr01Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr01Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr01Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_02 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr02Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr02Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_02 : ftl::mmio::Register<
      0x40C08008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr02Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr02Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr02Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr02Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr02Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr02Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_03 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr03Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr03Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_03 : ftl::mmio::Register<
      0x40C0800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr03Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr03Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr03Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr03Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr03Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr03Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_04 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr04Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr04Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_04 : ftl::mmio::Register<
      0x40C08010u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr04Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr04Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr04Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr04Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr04Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr04Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_05 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr05Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr05Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_05 : ftl::mmio::Register<
      0x40C08014u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr05Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr05Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr05Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr05Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr05Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr05Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_06 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr06Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr06Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_06 : ftl::mmio::Register<
      0x40C08018u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr06Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr06Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr06Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr06Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr06Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr06Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_07 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr07Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr07Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_07 : ftl::mmio::Register<
      0x40C0801Cu,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr07Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr07Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr07Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr07Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr07Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr07Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_08 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr08Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr08Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_08 : ftl::mmio::Register<
      0x40C08020u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr08Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr08Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr08Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr08Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr08Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr08Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_09 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr09Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr09Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_09 : ftl::mmio::Register<
      0x40C08024u,
      std::uint32_t,
      0x0000000Au,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr09Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr09Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr09Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr09Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr09Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr09Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_10 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr10Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr10Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_10 : ftl::mmio::Register<
      0x40C08028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr10Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr10Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr10Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr10Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr10Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr10Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_11 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr11Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr11Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_11 : ftl::mmio::Register<
      0x40C0802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr11Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr11Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr11Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr11Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr11Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr11Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_12 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr12Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr12Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_12 : ftl::mmio::Register<
      0x40C08030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr12Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr12Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr12Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr12Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr12Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr12Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_13 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr13Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr13Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_13 : ftl::mmio::Register<
      0x40C08034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr13Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr13Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr13Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr13Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr13Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr13Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_14 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr14Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr14Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_14 : ftl::mmio::Register<
      0x40C08038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr14Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr14Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr14Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr14Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr14Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr14Fields::SION;
  };

  // SW_MUX_CTL_PAD_GPIO_LPSR_15 SW MUX Control Register
  struct SwMuxCtlPadGpioLpsr15Fields {
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
  };  // struct SwMuxCtlPadGpioLpsr15Fields

  struct SW_MUX_CTL_PAD_GPIO_LPSR_15 : ftl::mmio::Register<
      0x40C0803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwMuxCtlPadGpioLpsr15Fields::MUX_MODE,
      SwMuxCtlPadGpioLpsr15Fields::SION,
      ftl::mmio::Reserved<27, 5>> {
    using eMUX_MODE = SwMuxCtlPadGpioLpsr15Fields::eMUX_MODE;
    using eSION = SwMuxCtlPadGpioLpsr15Fields::eSION;
    using MUX_MODE = SwMuxCtlPadGpioLpsr15Fields::MUX_MODE;
    using SION = SwMuxCtlPadGpioLpsr15Fields::SION;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_00 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr00Fields {
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
  };  // struct SwPadCtlPadGpioLpsr00Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_00 : ftl::mmio::Register<
      0x40C08040u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr00Fields::SRE,
      SwPadCtlPadGpioLpsr00Fields::DSE,
      SwPadCtlPadGpioLpsr00Fields::PUE,
      SwPadCtlPadGpioLpsr00Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr00Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr00Fields::DWP,
      SwPadCtlPadGpioLpsr00Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr00Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr00Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr00Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr00Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr00Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr00Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr00Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr00Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr00Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr00Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr00Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr00Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr00Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr00Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_01 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr01Fields {
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
  };  // struct SwPadCtlPadGpioLpsr01Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_01 : ftl::mmio::Register<
      0x40C08044u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr01Fields::SRE,
      SwPadCtlPadGpioLpsr01Fields::DSE,
      SwPadCtlPadGpioLpsr01Fields::PUE,
      SwPadCtlPadGpioLpsr01Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr01Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr01Fields::DWP,
      SwPadCtlPadGpioLpsr01Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr01Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr01Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr01Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr01Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr01Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr01Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr01Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr01Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr01Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr01Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr01Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr01Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr01Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr01Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_02 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr02Fields {
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
  };  // struct SwPadCtlPadGpioLpsr02Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_02 : ftl::mmio::Register<
      0x40C08048u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr02Fields::SRE,
      SwPadCtlPadGpioLpsr02Fields::DSE,
      SwPadCtlPadGpioLpsr02Fields::PUE,
      SwPadCtlPadGpioLpsr02Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr02Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr02Fields::DWP,
      SwPadCtlPadGpioLpsr02Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr02Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr02Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr02Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr02Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr02Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr02Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr02Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr02Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr02Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr02Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr02Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr02Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr02Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr02Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_03 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr03Fields {
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
  };  // struct SwPadCtlPadGpioLpsr03Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_03 : ftl::mmio::Register<
      0x40C0804Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr03Fields::SRE,
      SwPadCtlPadGpioLpsr03Fields::DSE,
      SwPadCtlPadGpioLpsr03Fields::PUE,
      SwPadCtlPadGpioLpsr03Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr03Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr03Fields::DWP,
      SwPadCtlPadGpioLpsr03Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr03Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr03Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr03Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr03Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr03Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr03Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr03Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr03Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr03Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr03Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr03Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr03Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr03Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr03Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_04 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr04Fields {
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
  };  // struct SwPadCtlPadGpioLpsr04Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_04 : ftl::mmio::Register<
      0x40C08050u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr04Fields::SRE,
      SwPadCtlPadGpioLpsr04Fields::DSE,
      SwPadCtlPadGpioLpsr04Fields::PUE,
      SwPadCtlPadGpioLpsr04Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr04Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr04Fields::DWP,
      SwPadCtlPadGpioLpsr04Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr04Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr04Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr04Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr04Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr04Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr04Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr04Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr04Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr04Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr04Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr04Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr04Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr04Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr04Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_05 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr05Fields {
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
  };  // struct SwPadCtlPadGpioLpsr05Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_05 : ftl::mmio::Register<
      0x40C08054u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr05Fields::SRE,
      SwPadCtlPadGpioLpsr05Fields::DSE,
      SwPadCtlPadGpioLpsr05Fields::PUE,
      SwPadCtlPadGpioLpsr05Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr05Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr05Fields::DWP,
      SwPadCtlPadGpioLpsr05Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr05Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr05Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr05Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr05Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr05Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr05Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr05Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr05Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr05Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr05Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr05Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr05Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr05Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr05Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_06 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr06Fields {
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
  };  // struct SwPadCtlPadGpioLpsr06Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_06 : ftl::mmio::Register<
      0x40C08058u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr06Fields::SRE,
      SwPadCtlPadGpioLpsr06Fields::DSE,
      SwPadCtlPadGpioLpsr06Fields::PUE,
      SwPadCtlPadGpioLpsr06Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr06Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr06Fields::DWP,
      SwPadCtlPadGpioLpsr06Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr06Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr06Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr06Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr06Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr06Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr06Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr06Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr06Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr06Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr06Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr06Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr06Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr06Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr06Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_07 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr07Fields {
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
  };  // struct SwPadCtlPadGpioLpsr07Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_07 : ftl::mmio::Register<
      0x40C0805Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr07Fields::SRE,
      SwPadCtlPadGpioLpsr07Fields::DSE,
      SwPadCtlPadGpioLpsr07Fields::PUE,
      SwPadCtlPadGpioLpsr07Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr07Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr07Fields::DWP,
      SwPadCtlPadGpioLpsr07Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr07Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr07Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr07Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr07Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr07Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr07Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr07Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr07Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr07Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr07Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr07Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr07Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr07Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr07Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_08 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr08Fields {
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
  };  // struct SwPadCtlPadGpioLpsr08Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_08 : ftl::mmio::Register<
      0x40C08060u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr08Fields::SRE,
      SwPadCtlPadGpioLpsr08Fields::DSE,
      SwPadCtlPadGpioLpsr08Fields::PUE,
      SwPadCtlPadGpioLpsr08Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr08Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr08Fields::DWP,
      SwPadCtlPadGpioLpsr08Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr08Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr08Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr08Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr08Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr08Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr08Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr08Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr08Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr08Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr08Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr08Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr08Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr08Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr08Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_09 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr09Fields {
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
  };  // struct SwPadCtlPadGpioLpsr09Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_09 : ftl::mmio::Register<
      0x40C08064u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr09Fields::SRE,
      SwPadCtlPadGpioLpsr09Fields::DSE,
      SwPadCtlPadGpioLpsr09Fields::PUE,
      SwPadCtlPadGpioLpsr09Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr09Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr09Fields::DWP,
      SwPadCtlPadGpioLpsr09Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr09Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr09Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr09Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr09Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr09Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr09Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr09Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr09Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr09Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr09Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr09Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr09Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr09Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr09Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_10 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr10Fields {
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
  };  // struct SwPadCtlPadGpioLpsr10Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_10 : ftl::mmio::Register<
      0x40C08068u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr10Fields::SRE,
      SwPadCtlPadGpioLpsr10Fields::DSE,
      SwPadCtlPadGpioLpsr10Fields::PUE,
      SwPadCtlPadGpioLpsr10Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr10Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr10Fields::DWP,
      SwPadCtlPadGpioLpsr10Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr10Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr10Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr10Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr10Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr10Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr10Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr10Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr10Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr10Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr10Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr10Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr10Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr10Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr10Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_11 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr11Fields {
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
  };  // struct SwPadCtlPadGpioLpsr11Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_11 : ftl::mmio::Register<
      0x40C0806Cu,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr11Fields::SRE,
      SwPadCtlPadGpioLpsr11Fields::DSE,
      SwPadCtlPadGpioLpsr11Fields::PUE,
      SwPadCtlPadGpioLpsr11Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr11Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr11Fields::DWP,
      SwPadCtlPadGpioLpsr11Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr11Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr11Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr11Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr11Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr11Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr11Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr11Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr11Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr11Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr11Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr11Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr11Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr11Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr11Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_12 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr12Fields {
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
  };  // struct SwPadCtlPadGpioLpsr12Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_12 : ftl::mmio::Register<
      0x40C08070u,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr12Fields::SRE,
      SwPadCtlPadGpioLpsr12Fields::DSE,
      SwPadCtlPadGpioLpsr12Fields::PUE,
      SwPadCtlPadGpioLpsr12Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr12Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr12Fields::DWP,
      SwPadCtlPadGpioLpsr12Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr12Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr12Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr12Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr12Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr12Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr12Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr12Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr12Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr12Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr12Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr12Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr12Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr12Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr12Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_13 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr13Fields {
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
  };  // struct SwPadCtlPadGpioLpsr13Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_13 : ftl::mmio::Register<
      0x40C08074u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr13Fields::SRE,
      SwPadCtlPadGpioLpsr13Fields::DSE,
      SwPadCtlPadGpioLpsr13Fields::PUE,
      SwPadCtlPadGpioLpsr13Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr13Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr13Fields::DWP,
      SwPadCtlPadGpioLpsr13Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr13Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr13Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr13Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr13Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr13Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr13Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr13Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr13Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr13Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr13Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr13Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr13Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr13Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr13Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_14 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr14Fields {
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
  };  // struct SwPadCtlPadGpioLpsr14Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_14 : ftl::mmio::Register<
      0x40C08078u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr14Fields::SRE,
      SwPadCtlPadGpioLpsr14Fields::DSE,
      SwPadCtlPadGpioLpsr14Fields::PUE,
      SwPadCtlPadGpioLpsr14Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr14Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr14Fields::DWP,
      SwPadCtlPadGpioLpsr14Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr14Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr14Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr14Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr14Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr14Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr14Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr14Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr14Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr14Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr14Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr14Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr14Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr14Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr14Fields::DWP_LOCK;
  };

  // SW_PAD_CTL_PAD_GPIO_LPSR_15 SW PAD Control Register
  struct SwPadCtlPadGpioLpsr15Fields {
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
  };  // struct SwPadCtlPadGpioLpsr15Fields

  struct SW_PAD_CTL_PAD_GPIO_LPSR_15 : ftl::mmio::Register<
      0x40C0807Cu,
      std::uint32_t,
      0x0000000Eu,
      ftl::mmio::RW,
      SwPadCtlPadGpioLpsr15Fields::SRE,
      SwPadCtlPadGpioLpsr15Fields::DSE,
      SwPadCtlPadGpioLpsr15Fields::PUE,
      SwPadCtlPadGpioLpsr15Fields::PUS,
      ftl::mmio::Reserved<1, 4>,
      SwPadCtlPadGpioLpsr15Fields::ODE_LPSR,
      ftl::mmio::Reserved<22, 6>,
      SwPadCtlPadGpioLpsr15Fields::DWP,
      SwPadCtlPadGpioLpsr15Fields::DWP_LOCK> {
    using eSRE = SwPadCtlPadGpioLpsr15Fields::eSRE;
    using eDSE = SwPadCtlPadGpioLpsr15Fields::eDSE;
    using ePUE = SwPadCtlPadGpioLpsr15Fields::ePUE;
    using ePUS = SwPadCtlPadGpioLpsr15Fields::ePUS;
    using eODE_LPSR = SwPadCtlPadGpioLpsr15Fields::eODE_LPSR;
    using eDWP = SwPadCtlPadGpioLpsr15Fields::eDWP;
    using eDWP_LOCK = SwPadCtlPadGpioLpsr15Fields::eDWP_LOCK;
    using SRE = SwPadCtlPadGpioLpsr15Fields::SRE;
    using DSE = SwPadCtlPadGpioLpsr15Fields::DSE;
    using PUE = SwPadCtlPadGpioLpsr15Fields::PUE;
    using PUS = SwPadCtlPadGpioLpsr15Fields::PUS;
    using ODE_LPSR = SwPadCtlPadGpioLpsr15Fields::ODE_LPSR;
    using DWP = SwPadCtlPadGpioLpsr15Fields::DWP;
    using DWP_LOCK = SwPadCtlPadGpioLpsr15Fields::DWP_LOCK;
  };

  // CAN3_IPP_IND_CANRX_SELECT_INPUT DAISY Register
  struct Can3IppIndCanrxSelectInputFields {
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
  };  // struct Can3IppIndCanrxSelectInputFields

  struct CAN3_IPP_IND_CANRX_SELECT_INPUT : ftl::mmio::Register<
      0x40C08080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Can3IppIndCanrxSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Can3IppIndCanrxSelectInputFields::eDAISY;
    using DAISY = Can3IppIndCanrxSelectInputFields::DAISY;
  };

  // LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c5IppIndLpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT0
      eSELECT_GPIO_LPSR_05_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT6
      eSELECT_GPIO_LPSR_09_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c5IppIndLpi2cSclSelectInputFields

  struct LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x40C08084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c5IppIndLpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c5IppIndLpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c5IppIndLpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c5IppIndLpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT0
      eSELECT_GPIO_LPSR_04_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT6
      eSELECT_GPIO_LPSR_08_ALT6 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c5IppIndLpi2cSdaSelectInputFields

  struct LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x40C08088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c5IppIndLpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c5IppIndLpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c5IppIndLpi2cSdaSelectInputFields::DAISY;
  };

  // LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
  struct Lpi2c6IppIndLpi2cSclSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT0
      eSELECT_GPIO_LPSR_07_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_11 for Mode: ALT2
      eSELECT_GPIO_LPSR_11_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c6IppIndLpi2cSclSelectInputFields

  struct LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT : ftl::mmio::Register<
      0x40C0808Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c6IppIndLpi2cSclSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c6IppIndLpi2cSclSelectInputFields::eDAISY;
    using DAISY = Lpi2c6IppIndLpi2cSclSelectInputFields::DAISY;
  };

  // LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
  struct Lpi2c6IppIndLpi2cSdaSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_06 for Mode: ALT0
      eSELECT_GPIO_LPSR_06_ALT0 = 0,
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT2
      eSELECT_GPIO_LPSR_10_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpi2c6IppIndLpi2cSdaSelectInputFields

  struct LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT : ftl::mmio::Register<
      0x40C08090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpi2c6IppIndLpi2cSdaSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpi2c6IppIndLpi2cSdaSelectInputFields::eDAISY;
    using DAISY = Lpi2c6IppIndLpi2cSdaSelectInputFields::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
  struct Lpspi5IppIndLpspiPcsSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_03 for Mode: ALT1
      eSELECT_GPIO_LPSR_03_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT8
      eSELECT_GPIO_LPSR_13_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi5IppIndLpspiPcsSelectInput0Fields

  struct LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C08094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi5IppIndLpspiPcsSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi5IppIndLpspiPcsSelectInput0Fields::eDAISY;
    using DAISY = Lpspi5IppIndLpspiPcsSelectInput0Fields::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT DAISY Register
  struct Lpspi5IppIndLpspiSckSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_02 for Mode: ALT1
      eSELECT_GPIO_LPSR_02_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT8
      eSELECT_GPIO_LPSR_12_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi5IppIndLpspiSckSelectInputFields

  struct LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT : ftl::mmio::Register<
      0x40C08098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi5IppIndLpspiSckSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi5IppIndLpspiSckSelectInputFields::eDAISY;
    using DAISY = Lpspi5IppIndLpspiSckSelectInputFields::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT DAISY Register
  struct Lpspi5IppIndLpspiSdiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT1
      eSELECT_GPIO_LPSR_05_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT8
      eSELECT_GPIO_LPSR_15_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi5IppIndLpspiSdiSelectInputFields

  struct LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT : ftl::mmio::Register<
      0x40C0809Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi5IppIndLpspiSdiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi5IppIndLpspiSdiSelectInputFields::eDAISY;
    using DAISY = Lpspi5IppIndLpspiSdiSelectInputFields::DAISY;
  };

  // LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT DAISY Register
  struct Lpspi5IppIndLpspiSdoSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT1
      eSELECT_GPIO_LPSR_04_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT8
      eSELECT_GPIO_LPSR_14_ALT8 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpspi5IppIndLpspiSdoSelectInputFields

  struct LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpspi5IppIndLpspiSdoSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpspi5IppIndLpspiSdoSelectInputFields::eDAISY;
    using DAISY = Lpspi5IppIndLpspiSdoSelectInputFields::DAISY;
  };

  // LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart11IppIndLpuartRxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT6
      eSELECT_GPIO_LPSR_05_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT0
      eSELECT_GPIO_LPSR_09_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart11IppIndLpuartRxdSelectInputFields

  struct LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart11IppIndLpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart11IppIndLpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart11IppIndLpuartRxdSelectInputFields::DAISY;
  };

  // LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart11IppIndLpuartTxdSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT6
      eSELECT_GPIO_LPSR_04_ALT6 = 0,
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT0
      eSELECT_GPIO_LPSR_08_ALT0 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Lpuart11IppIndLpuartTxdSelectInputFields

  struct LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart11IppIndLpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Lpuart11IppIndLpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart11IppIndLpuartTxdSelectInputFields::DAISY;
  };

  // LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
  struct Lpuart12IppIndLpuartRxdSelectInputFields {
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
  };  // struct Lpuart12IppIndLpuartRxdSelectInputFields

  struct LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart12IppIndLpuartRxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Lpuart12IppIndLpuartRxdSelectInputFields::eDAISY;
    using DAISY = Lpuart12IppIndLpuartRxdSelectInputFields::DAISY;
  };

  // LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
  struct Lpuart12IppIndLpuartTxdSelectInputFields {
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
  };  // struct Lpuart12IppIndLpuartTxdSelectInputFields

  struct LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT : ftl::mmio::Register<
      0x40C080B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Lpuart12IppIndLpuartTxdSelectInputFields::DAISY,
      ftl::mmio::Reserved<30, 2>> {
    using eDAISY = Lpuart12IppIndLpuartTxdSelectInputFields::eDAISY;
    using DAISY = Lpuart12IppIndLpuartTxdSelectInputFields::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 DAISY Register
  struct MicIppIndMicPdmBitstreamSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_01 for Mode: ALT1
      eSELECT_GPIO_LPSR_01_ALT1 = 0,
      // Selecting Pad: GPIO_LPSR_09 for Mode: ALT3
      eSELECT_GPIO_LPSR_09_ALT3 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MicIppIndMicPdmBitstreamSelectInput0Fields

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C080B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MicIppIndMicPdmBitstreamSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MicIppIndMicPdmBitstreamSelectInput0Fields::eDAISY;
    using DAISY = MicIppIndMicPdmBitstreamSelectInput0Fields::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 DAISY Register
  struct MicIppIndMicPdmBitstreamSelectInput1Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT3
      eSELECT_GPIO_LPSR_10_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT1
      eSELECT_GPIO_LPSR_13_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MicIppIndMicPdmBitstreamSelectInput1Fields

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 : ftl::mmio::Register<
      0x40C080B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MicIppIndMicPdmBitstreamSelectInput1Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MicIppIndMicPdmBitstreamSelectInput1Fields::eDAISY;
    using DAISY = MicIppIndMicPdmBitstreamSelectInput1Fields::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 DAISY Register
  struct MicIppIndMicPdmBitstreamSelectInput2Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_11 for Mode: ALT3
      eSELECT_GPIO_LPSR_11_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT1
      eSELECT_GPIO_LPSR_14_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MicIppIndMicPdmBitstreamSelectInput2Fields

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 : ftl::mmio::Register<
      0x40C080BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MicIppIndMicPdmBitstreamSelectInput2Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MicIppIndMicPdmBitstreamSelectInput2Fields::eDAISY;
    using DAISY = MicIppIndMicPdmBitstreamSelectInput2Fields::DAISY;
  };

  // MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 DAISY Register
  struct MicIppIndMicPdmBitstreamSelectInput3Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT3
      eSELECT_GPIO_LPSR_12_ALT3 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT1
      eSELECT_GPIO_LPSR_15_ALT1 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MicIppIndMicPdmBitstreamSelectInput3Fields

  struct MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 : ftl::mmio::Register<
      0x40C080C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      MicIppIndMicPdmBitstreamSelectInput3Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = MicIppIndMicPdmBitstreamSelectInput3Fields::eDAISY;
    using DAISY = MicIppIndMicPdmBitstreamSelectInput3Fields::DAISY;
  };

  // NMI_GLUE_IPP_IND_NMI_SELECT_INPUT DAISY Register
  struct NmiGlueIppIndNmiSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT7
      eSELECT_GPIO_LPSR_05_ALT7 = 0,
      // Selecting Pad: WAKEUP_DIG for Mode: ALT7
      eSELECT_WAKEUP_DIG_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct NmiGlueIppIndNmiSelectInputFields

  struct NMI_GLUE_IPP_IND_NMI_SELECT_INPUT : ftl::mmio::Register<
      0x40C080C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      NmiGlueIppIndNmiSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = NmiGlueIppIndNmiSelectInputFields::eDAISY;
    using DAISY = NmiGlueIppIndNmiSelectInputFields::DAISY;
  };

  // SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT DAISY Register
  struct Sai4IpgClkSaiMclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_00 for Mode: ALT7
      eSELECT_GPIO_LPSR_00_ALT7 = 0,
      // Selecting Pad: GPIO_LPSR_05 for Mode: ALT2
      eSELECT_GPIO_LPSR_05_ALT2 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IpgClkSaiMclkSelectInputFields

  struct SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IpgClkSaiMclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IpgClkSaiMclkSelectInputFields::eDAISY;
    using DAISY = Sai4IpgClkSaiMclkSelectInputFields::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT DAISY Register
  struct Sai4IppIndSaiRxbclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_07 for Mode: ALT2
      eSELECT_GPIO_LPSR_07_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_14 for Mode: ALT7
      eSELECT_GPIO_LPSR_14_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IppIndSaiRxbclkSelectInputFields

  struct SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IppIndSaiRxbclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IppIndSaiRxbclkSelectInputFields::eDAISY;
    using DAISY = Sai4IppIndSaiRxbclkSelectInputFields::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 DAISY Register
  struct Sai4IppIndSaiRxdataSelectInput0Fields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_06 for Mode: ALT2
      eSELECT_GPIO_LPSR_06_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_13 for Mode: ALT7
      eSELECT_GPIO_LPSR_13_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IppIndSaiRxdataSelectInput0Fields

  struct SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 : ftl::mmio::Register<
      0x40C080D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IppIndSaiRxdataSelectInput0Fields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IppIndSaiRxdataSelectInput0Fields::eDAISY;
    using DAISY = Sai4IppIndSaiRxdataSelectInput0Fields::DAISY;
  };

  // SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT DAISY Register
  struct Sai4IppIndSaiRxsyncSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_08 for Mode: ALT2
      eSELECT_GPIO_LPSR_08_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_15 for Mode: ALT7
      eSELECT_GPIO_LPSR_15_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IppIndSaiRxsyncSelectInputFields

  struct SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x40C080D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IppIndSaiRxsyncSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IppIndSaiRxsyncSelectInputFields::eDAISY;
    using DAISY = Sai4IppIndSaiRxsyncSelectInputFields::DAISY;
  };

  // SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT DAISY Register
  struct Sai4IppIndSaiTxbclkSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_04 for Mode: ALT2
      eSELECT_GPIO_LPSR_04_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_12 for Mode: ALT7
      eSELECT_GPIO_LPSR_12_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IppIndSaiTxbclkSelectInputFields

  struct SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT : ftl::mmio::Register<
      0x40C080D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IppIndSaiTxbclkSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IppIndSaiTxbclkSelectInputFields::eDAISY;
    using DAISY = Sai4IppIndSaiTxbclkSelectInputFields::DAISY;
  };

  // SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT DAISY Register
  struct Sai4IppIndSaiTxsyncSelectInputFields {
    enum class eDAISY : std::uint32_t {
      // Selecting Pad: GPIO_LPSR_03 for Mode: ALT2
      eSELECT_GPIO_LPSR_03_ALT2 = 0,
      // Selecting Pad: GPIO_LPSR_10 for Mode: ALT7
      eSELECT_GPIO_LPSR_10_ALT7 = 1,
    };

    // Selecting Pads Involved in Daisy Chain.
    using DAISY = ftl::mmio::Field<1, 0, eDAISY, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sai4IppIndSaiTxsyncSelectInputFields

  struct SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT : ftl::mmio::Register<
      0x40C080DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Sai4IppIndSaiTxsyncSelectInputFields::DAISY,
      ftl::mmio::Reserved<31, 1>> {
    using eDAISY = Sai4IppIndSaiTxsyncSelectInputFields::eDAISY;
    using DAISY = Sai4IppIndSaiTxsyncSelectInputFields::DAISY;
  };

};

}  // namespace regs