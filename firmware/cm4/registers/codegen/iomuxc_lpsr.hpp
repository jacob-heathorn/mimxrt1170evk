#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IOMUXC LPSR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nIOMUXC_LPSR {


// SW_MUX_CTL_PAD_GPIO_LPSR_00 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_00 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_00
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_00 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_00*>(0x40C08000); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_01 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_01 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_01
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_01 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_01*>(0x40C08004); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_02 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_02 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_02
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_02 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_02*>(0x40C08008); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_03 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_03 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_03
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_03 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_03*>(0x40C0800C); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_04 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_04 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_04
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_04 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_04*>(0x40C08010); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_05 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_05 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_05
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_05 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_05*>(0x40C08014); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_06 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_06 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_06
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_06 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_06*>(0x40C08018); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_07 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_07 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_07
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_07 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_07*>(0x40C0801C); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_08 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_08 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_08
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_08 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_08*>(0x40C08020); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_09 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_09 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_09
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_09 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_09*>(0x40C08024); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_10 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_10 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_10
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_10 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_10*>(0x40C08028); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_11 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_11 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_11
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_11 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_11*>(0x40C0802C); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_12 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_12 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_12
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_12 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_12*>(0x40C08030); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_13 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_13 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_13
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_13 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_13*>(0x40C08034); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_14 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_14 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_14
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_14 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_14*>(0x40C08038); }
};

// SW_MUX_CTL_PAD_GPIO_LPSR_15 SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_LPSR_15 {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
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
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_LPSR_15
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 4;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_LPSR_15 &ref() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_LPSR_15*>(0x40C0803C); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_00 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_00 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_00 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_00*>(0x40C08040); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_01 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_01 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_01 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_01*>(0x40C08044); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_02 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_02 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_02 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_02*>(0x40C08048); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_03 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_03 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_03 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_03*>(0x40C0804C); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_04 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_04 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_04 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_04*>(0x40C08050); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_05 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_05 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_05 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_05*>(0x40C08054); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_06 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_06 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_06 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_06*>(0x40C08058); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_07 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_07 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_07 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_07*>(0x40C0805C); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_08 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_08 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_08 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_08*>(0x40C08060); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_09 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_09 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_09 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_09*>(0x40C08064); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_10 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_10 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_10 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_10*>(0x40C08068); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_11 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_11 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_11 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_11*>(0x40C0806C); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_12 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_12 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_12 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_12*>(0x40C08070); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_13 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_13 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_13 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_13*>(0x40C08074); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_14 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_14 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_14 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_14*>(0x40C08078); }
};

// SW_PAD_CTL_PAD_GPIO_LPSR_15 SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_LPSR_15 {
  
  // Slew Rate Field
  enum class eSRE : uint32_t {
    // Slow Slew Rate
    eSRE_0_Slow_Slew_Rate = 0,
    // Fast Slew Rate
    eSRE_1_Fast_Slew_Rate = 1,
  };
  
  // Drive Strength Field
  enum class eDSE : uint32_t {
    // normal driver
    eDSE_0_normal_driver = 0,
    // high driver
    eDSE_1_high_driver = 1,
  };
  
  // Pull Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain LPSR Field
  enum class eODE_LPSR : uint32_t {
    // Disabled
    eODE_LPSR_0_Disabled = 0,
    // Enabled
    eODE_LPSR_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Slew Rate Field
    eSRE SRE : 1;
    // read-write - Drive Strength Field
    eDSE DSE : 1;
    // read-write - Pull Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Open Drain LPSR Field
    eODE_LPSR ODE_LPSR : 1;
    uint32_t _reserved_1 : 22;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_LPSR_15 &ref() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_LPSR_15*>(0x40C0807C); }
};

// CAN3_IPP_IND_CANRX_SELECT_INPUT DAISY Register
union CAN3_IPP_IND_CANRX_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_01 for Mode: ALT0
    eSELECT_GPIO_LPSR_01_ALT0 = 0,
    // Selecting Pad: GPIO_LPSR_07 for Mode: ALT6
    eSELECT_GPIO_LPSR_07_ALT6 = 1,
    // Selecting Pad: GPIO_LPSR_09 for Mode: ALT1
    eSELECT_GPIO_LPSR_09_ALT1 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CAN3_IPP_IND_CANRX_SELECT_INPUT &ref() { return *reinterpret_cast<volatile CAN3_IPP_IND_CANRX_SELECT_INPUT*>(0x40C08080); }
};

// LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
union LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_05 for Mode: ALT0
    eSELECT_GPIO_LPSR_05_ALT0 = 0,
    // Selecting Pad: GPIO_LPSR_09 for Mode: ALT6
    eSELECT_GPIO_LPSR_09_ALT6 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPI2C5_IPP_IND_LPI2C_SCL_SELECT_INPUT*>(0x40C08084); }
};

// LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
union LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_04 for Mode: ALT0
    eSELECT_GPIO_LPSR_04_ALT0 = 0,
    // Selecting Pad: GPIO_LPSR_08 for Mode: ALT6
    eSELECT_GPIO_LPSR_08_ALT6 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPI2C5_IPP_IND_LPI2C_SDA_SELECT_INPUT*>(0x40C08088); }
};

// LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT DAISY Register
union LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_07 for Mode: ALT0
    eSELECT_GPIO_LPSR_07_ALT0 = 0,
    // Selecting Pad: GPIO_LPSR_11 for Mode: ALT2
    eSELECT_GPIO_LPSR_11_ALT2 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPI2C6_IPP_IND_LPI2C_SCL_SELECT_INPUT*>(0x40C0808C); }
};

// LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT DAISY Register
union LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_06 for Mode: ALT0
    eSELECT_GPIO_LPSR_06_ALT0 = 0,
    // Selecting Pad: GPIO_LPSR_10 for Mode: ALT2
    eSELECT_GPIO_LPSR_10_ALT2 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPI2C6_IPP_IND_LPI2C_SDA_SELECT_INPUT*>(0x40C08090); }
};

// LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 DAISY Register
union LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_03 for Mode: ALT1
    eSELECT_GPIO_LPSR_03_ALT1 = 0,
    // Selecting Pad: GPIO_LPSR_13 for Mode: ALT8
    eSELECT_GPIO_LPSR_13_ALT8 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0 &ref() { return *reinterpret_cast<volatile LPSPI5_IPP_IND_LPSPI_PCS_SELECT_INPUT_0*>(0x40C08094); }
};

// LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT DAISY Register
union LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_02 for Mode: ALT1
    eSELECT_GPIO_LPSR_02_ALT1 = 0,
    // Selecting Pad: GPIO_LPSR_12 for Mode: ALT8
    eSELECT_GPIO_LPSR_12_ALT8 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPSPI5_IPP_IND_LPSPI_SCK_SELECT_INPUT*>(0x40C08098); }
};

// LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT DAISY Register
union LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_05 for Mode: ALT1
    eSELECT_GPIO_LPSR_05_ALT1 = 0,
    // Selecting Pad: GPIO_LPSR_15 for Mode: ALT8
    eSELECT_GPIO_LPSR_15_ALT8 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPSPI5_IPP_IND_LPSPI_SDI_SELECT_INPUT*>(0x40C0809C); }
};

// LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT DAISY Register
union LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_04 for Mode: ALT1
    eSELECT_GPIO_LPSR_04_ALT1 = 0,
    // Selecting Pad: GPIO_LPSR_14 for Mode: ALT8
    eSELECT_GPIO_LPSR_14_ALT8 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPSPI5_IPP_IND_LPSPI_SDO_SELECT_INPUT*>(0x40C080A0); }
};

// LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
union LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_05 for Mode: ALT6
    eSELECT_GPIO_LPSR_05_ALT6 = 0,
    // Selecting Pad: GPIO_LPSR_09 for Mode: ALT0
    eSELECT_GPIO_LPSR_09_ALT0 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPUART11_IPP_IND_LPUART_RXD_SELECT_INPUT*>(0x40C080A4); }
};

// LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
union LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_04 for Mode: ALT6
    eSELECT_GPIO_LPSR_04_ALT6 = 0,
    // Selecting Pad: GPIO_LPSR_08 for Mode: ALT0
    eSELECT_GPIO_LPSR_08_ALT0 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPUART11_IPP_IND_LPUART_TXD_SELECT_INPUT*>(0x40C080A8); }
};

// LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT DAISY Register
union LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_01 for Mode: ALT6
    eSELECT_GPIO_LPSR_01_ALT6 = 0,
    // Selecting Pad: GPIO_LPSR_07 for Mode: ALT3
    eSELECT_GPIO_LPSR_07_ALT3 = 1,
    // Selecting Pad: GPIO_LPSR_11 for Mode: ALT8
    eSELECT_GPIO_LPSR_11_ALT8 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPUART12_IPP_IND_LPUART_RXD_SELECT_INPUT*>(0x40C080AC); }
};

// LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT DAISY Register
union LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_00 for Mode: ALT6
    eSELECT_GPIO_LPSR_00_ALT6 = 0,
    // Selecting Pad: GPIO_LPSR_06 for Mode: ALT3
    eSELECT_GPIO_LPSR_06_ALT3 = 1,
    // Selecting Pad: GPIO_LPSR_10 for Mode: ALT8
    eSELECT_GPIO_LPSR_10_ALT8 = 2,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT &ref() { return *reinterpret_cast<volatile LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT*>(0x40C080B0); }
};

// MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 DAISY Register
union MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_01 for Mode: ALT1
    eSELECT_GPIO_LPSR_01_ALT1 = 0,
    // Selecting Pad: GPIO_LPSR_09 for Mode: ALT3
    eSELECT_GPIO_LPSR_09_ALT3 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0 &ref() { return *reinterpret_cast<volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_0*>(0x40C080B4); }
};

// MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 DAISY Register
union MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_10 for Mode: ALT3
    eSELECT_GPIO_LPSR_10_ALT3 = 0,
    // Selecting Pad: GPIO_LPSR_13 for Mode: ALT1
    eSELECT_GPIO_LPSR_13_ALT1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1 &ref() { return *reinterpret_cast<volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_1*>(0x40C080B8); }
};

// MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 DAISY Register
union MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_11 for Mode: ALT3
    eSELECT_GPIO_LPSR_11_ALT3 = 0,
    // Selecting Pad: GPIO_LPSR_14 for Mode: ALT1
    eSELECT_GPIO_LPSR_14_ALT1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2 &ref() { return *reinterpret_cast<volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_2*>(0x40C080BC); }
};

// MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 DAISY Register
union MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_12 for Mode: ALT3
    eSELECT_GPIO_LPSR_12_ALT3 = 0,
    // Selecting Pad: GPIO_LPSR_15 for Mode: ALT1
    eSELECT_GPIO_LPSR_15_ALT1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3 &ref() { return *reinterpret_cast<volatile MIC_IPP_IND_MIC_PDM_BITSTREAM_SELECT_INPUT_3*>(0x40C080C0); }
};

// NMI_GLUE_IPP_IND_NMI_SELECT_INPUT DAISY Register
union NMI_GLUE_IPP_IND_NMI_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_05 for Mode: ALT7
    eSELECT_GPIO_LPSR_05_ALT7 = 0,
    // Selecting Pad: WAKEUP_DIG for Mode: ALT7
    eSELECT_WAKEUP_DIG_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile NMI_GLUE_IPP_IND_NMI_SELECT_INPUT &ref() { return *reinterpret_cast<volatile NMI_GLUE_IPP_IND_NMI_SELECT_INPUT*>(0x40C080C4); }
};

// SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT DAISY Register
union SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_00 for Mode: ALT7
    eSELECT_GPIO_LPSR_00_ALT7 = 0,
    // Selecting Pad: GPIO_LPSR_05 for Mode: ALT2
    eSELECT_GPIO_LPSR_05_ALT2 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT &ref() { return *reinterpret_cast<volatile SAI4_IPG_CLK_SAI_MCLK_SELECT_INPUT*>(0x40C080C8); }
};

// SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT DAISY Register
union SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_07 for Mode: ALT2
    eSELECT_GPIO_LPSR_07_ALT2 = 0,
    // Selecting Pad: GPIO_LPSR_14 for Mode: ALT7
    eSELECT_GPIO_LPSR_14_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT &ref() { return *reinterpret_cast<volatile SAI4_IPP_IND_SAI_RXBCLK_SELECT_INPUT*>(0x40C080CC); }
};

// SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 DAISY Register
union SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_06 for Mode: ALT2
    eSELECT_GPIO_LPSR_06_ALT2 = 0,
    // Selecting Pad: GPIO_LPSR_13 for Mode: ALT7
    eSELECT_GPIO_LPSR_13_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0 &ref() { return *reinterpret_cast<volatile SAI4_IPP_IND_SAI_RXDATA_SELECT_INPUT_0*>(0x40C080D0); }
};

// SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT DAISY Register
union SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_08 for Mode: ALT2
    eSELECT_GPIO_LPSR_08_ALT2 = 0,
    // Selecting Pad: GPIO_LPSR_15 for Mode: ALT7
    eSELECT_GPIO_LPSR_15_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT &ref() { return *reinterpret_cast<volatile SAI4_IPP_IND_SAI_RXSYNC_SELECT_INPUT*>(0x40C080D4); }
};

// SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT DAISY Register
union SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_04 for Mode: ALT2
    eSELECT_GPIO_LPSR_04_ALT2 = 0,
    // Selecting Pad: GPIO_LPSR_12 for Mode: ALT7
    eSELECT_GPIO_LPSR_12_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT &ref() { return *reinterpret_cast<volatile SAI4_IPP_IND_SAI_TXBCLK_SELECT_INPUT*>(0x40C080D8); }
};

// SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT DAISY Register
union SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT {
  
  // Selecting Pads Involved in Daisy Chain.
  enum class eDAISY : uint32_t {
    // Selecting Pad: GPIO_LPSR_03 for Mode: ALT2
    eSELECT_GPIO_LPSR_03_ALT2 = 0,
    // Selecting Pad: GPIO_LPSR_10 for Mode: ALT7
    eSELECT_GPIO_LPSR_10_ALT7 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Selecting Pads Involved in Daisy Chain.
    eDAISY DAISY : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT &ref() { return *reinterpret_cast<volatile SAI4_IPP_IND_SAI_TXSYNC_SELECT_INPUT*>(0x40C080DC); }
};


} // namespace nIOMUXC_LPSR