#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IOMUXC SNVS GPR
namespace nIOMUXC_SNVS_GPR {


// GPR0 General Purpose Register
union GPR[0] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[0]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[0] &Instance() { return *reinterpret_cast<volatile GPR[0]*>(0x40C98000); }
};
// GPR0 General Purpose Register
union GPR[1] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[1]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[1] &Instance() { return *reinterpret_cast<volatile GPR[1]*>(0x40C98004); }
};
// GPR0 General Purpose Register
union GPR[2] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[2]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[2] &Instance() { return *reinterpret_cast<volatile GPR[2]*>(0x40C98008); }
};
// GPR0 General Purpose Register
union GPR[3] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[3]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[3] &Instance() { return *reinterpret_cast<volatile GPR[3]*>(0x40C9800C); }
};
// GPR0 General Purpose Register
union GPR[4] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[4]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[4] &Instance() { return *reinterpret_cast<volatile GPR[4]*>(0x40C98010); }
};
// GPR0 General Purpose Register
union GPR[5] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[5]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[5] &Instance() { return *reinterpret_cast<volatile GPR[5]*>(0x40C98014); }
};
// GPR0 General Purpose Register
union GPR[6] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[6]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[6] &Instance() { return *reinterpret_cast<volatile GPR[6]*>(0x40C98018); }
};
// GPR0 General Purpose Register
union GPR[7] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[7]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[7] &Instance() { return *reinterpret_cast<volatile GPR[7]*>(0x40C9801C); }
};
// GPR0 General Purpose Register
union GPR[8] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[8]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[8] &Instance() { return *reinterpret_cast<volatile GPR[8]*>(0x40C98020); }
};
// GPR0 General Purpose Register
union GPR[9] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[9]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[9] &Instance() { return *reinterpret_cast<volatile GPR[9]*>(0x40C98024); }
};
// GPR0 General Purpose Register
union GPR[10] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[10]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[10] &Instance() { return *reinterpret_cast<volatile GPR[10]*>(0x40C98028); }
};
// GPR0 General Purpose Register
union GPR[11] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[11]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[11] &Instance() { return *reinterpret_cast<volatile GPR[11]*>(0x40C9802C); }
};
// GPR0 General Purpose Register
union GPR[12] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[12]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[12] &Instance() { return *reinterpret_cast<volatile GPR[12]*>(0x40C98030); }
};
// GPR0 General Purpose Register
union GPR[13] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[13]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[13] &Instance() { return *reinterpret_cast<volatile GPR[13]*>(0x40C98034); }
};
// GPR0 General Purpose Register
union GPR[14] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[14]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[14] &Instance() { return *reinterpret_cast<volatile GPR[14]*>(0x40C98038); }
};
// GPR0 General Purpose Register
union GPR[15] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[15]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[15] &Instance() { return *reinterpret_cast<volatile GPR[15]*>(0x40C9803C); }
};
// GPR0 General Purpose Register
union GPR[16] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[16]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[16] &Instance() { return *reinterpret_cast<volatile GPR[16]*>(0x40C98040); }
};
// GPR0 General Purpose Register
union GPR[17] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[17]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[17] &Instance() { return *reinterpret_cast<volatile GPR[17]*>(0x40C98044); }
};
// GPR0 General Purpose Register
union GPR[18] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[18]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[18] &Instance() { return *reinterpret_cast<volatile GPR[18]*>(0x40C98048); }
};
// GPR0 General Purpose Register
union GPR[19] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[19]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[19] &Instance() { return *reinterpret_cast<volatile GPR[19]*>(0x40C9804C); }
};
// GPR0 General Purpose Register
union GPR[20] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[20]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[20] &Instance() { return *reinterpret_cast<volatile GPR[20]*>(0x40C98050); }
};
// GPR0 General Purpose Register
union GPR[21] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[21]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[21] &Instance() { return *reinterpret_cast<volatile GPR[21]*>(0x40C98054); }
};
// GPR0 General Purpose Register
union GPR[22] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[22]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[22] &Instance() { return *reinterpret_cast<volatile GPR[22]*>(0x40C98058); }
};
// GPR0 General Purpose Register
union GPR[23] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[23]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[23] &Instance() { return *reinterpret_cast<volatile GPR[23]*>(0x40C9805C); }
};
// GPR0 General Purpose Register
union GPR[24] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[24]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[24] &Instance() { return *reinterpret_cast<volatile GPR[24]*>(0x40C98060); }
};
// GPR0 General Purpose Register
union GPR[25] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[25]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[25] &Instance() { return *reinterpret_cast<volatile GPR[25]*>(0x40C98064); }
};
// GPR0 General Purpose Register
union GPR[26] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[26]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[26] &Instance() { return *reinterpret_cast<volatile GPR[26]*>(0x40C98068); }
};
// GPR0 General Purpose Register
union GPR[27] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[27]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[27] &Instance() { return *reinterpret_cast<volatile GPR[27]*>(0x40C9806C); }
};
// GPR0 General Purpose Register
union GPR[28] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[28]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[28] &Instance() { return *reinterpret_cast<volatile GPR[28]*>(0x40C98070); }
};
// GPR0 General Purpose Register
union GPR[29] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[29]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[29] &Instance() { return *reinterpret_cast<volatile GPR[29]*>(0x40C98074); }
};
// GPR0 General Purpose Register
union GPR[30] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[30]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[30] &Instance() { return *reinterpret_cast<volatile GPR[30]*>(0x40C98078); }
};
// GPR0 General Purpose Register
union GPR[31] {
  
  // Bit field definition.
  struct {
    // read-write - General purpose bits
    uint32_t GPR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR[31]() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR[31] &Instance() { return *reinterpret_cast<volatile GPR[31]*>(0x40C9807C); }
};

// GPR32 General Purpose Register
union GPR32 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - General purpose bits
    uint32_t GPR : 15;
    // read-writeOnce - Lock the write to bit 15:0
    uint32_t LOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR32() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR32 &Instance() { return *reinterpret_cast<volatile GPR32*>(0x40C98080); }
};

// GPR33 General Purpose Register
union GPR33 {
  
  // DCDC captured status clear
  enum class eDCDC_STATUS_CAPT_CLR : uint32_t {
    // No change
    eOVER = 0,
    // Clear the 3 bits of DCDC captured status: DCDC_OVER_VOL, DCDC_OVER_CUR, and DCDC_IN_LOW_VOL
    eNO = 1,
  };
  
  // SNVS LDO_SNVS_ANA bypass enable
  enum class eSNVS_BYPASS_EN : uint32_t {
    // Disable bypass
    eNO = 0,
    // Enable bypass
    eOVER = 1,
  };
  
  // DCDC_IN low voltage detect
  enum class eDCDC_IN_LOW_VOL : uint32_t {
    // Voltage on DCDC_IN is higher than 2.6V
    eNO = 0,
    // Voltage on DCDC_IN is lower than 2.6V
    eOVER = 1,
  };
  
  // DCDC output over current alert
  enum class eDCDC_OVER_CUR : uint32_t {
    // No Overcurrent on DCDC output
    eNO = 0,
    // Overcurrent on DCDC output
    eOVER = 1,
  };
  
  // DCDC output over voltage alert
  enum class eDCDC_OVER_VOL : uint32_t {
    // No Overvoltage on DCDC VDDLP0 or VDDLP8 output
    eNO = 0,
    // Overvoltage on DCDC VDDLP0 or VDDLP8 output
    eOVERVOLTAGE = 1,
  };
  
  // DCDC status OK
  enum class eDCDC_STS_DC_OK : uint32_t {
    // DCDC is settling
    eDISABLE = 0,
    // DCDC already settled
    eENABLE = 1,
  };
  
  // 32K OSC ok flag
  enum class eSNVS_XTAL_CLK_OK : uint32_t {
    // 32K oscillator is NOT stable into normal operation
    eUNSTABLE = 0,
    // 32K oscillator is stable into normal operation
    eSTABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - DCDC captured status clear
    eDCDC_STATUS_CAPT_CLR DCDC_STATUS_CAPT_CLR : 1;
    // read-write - SNVS LDO_SNVS_ANA bypass enable
    eSNVS_BYPASS_EN SNVS_BYPASS_EN : 1;
    uint32_t _reserved_1 : 13;
    // read-only - DCDC_IN low voltage detect
    eDCDC_IN_LOW_VOL DCDC_IN_LOW_VOL : 1;
    // read-only - DCDC output over current alert
    eDCDC_OVER_CUR DCDC_OVER_CUR : 1;
    // read-only - DCDC output over voltage alert
    eDCDC_OVER_VOL DCDC_OVER_VOL : 1;
    // read-only - DCDC status OK
    eDCDC_STS_DC_OK DCDC_STS_DC_OK : 1;
    // read-only - 32K OSC ok flag
    eSNVS_XTAL_CLK_OK SNVS_XTAL_CLK_OK : 1;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR33() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR33 &Instance() { return *reinterpret_cast<volatile GPR33*>(0x40C98084); }
};

// GPR34 General Purpose Register
union GPR34 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };
  
  // SNVS core voltage detect trim select
  enum class eSNVS_CORE_VOLT_DET_TRIM_SEL : uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of core voltage detectors used to change the voltage falling trip point are selected from SNVS_CORE_VOLT_DET_TRIM
    eNO1 = 1,
  };
  
  // SNVS clock detect trim select
  enum class eSNVS_CLK_DET_TRIM_SEL : uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of clock detector used to change the boundary frequencies are selected from SNVS_CLK_DET_TRIM
    eNO1 = 1,
  };
  
  // SNVS clock detect offset of high boundary frequency
  enum class eSNVS_CLK_DET_OFFSET_HIGH : uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };
  
  // SNVS clock detect offset of low boundary frequency
  enum class eSNVS_CLK_DET_OFFSET_LOW : uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };
  
  // SNVS OSC load capacitor trim select
  enum class eSNVS_CAP_TRIM_SEL : uint32_t {
    // The trimming codes are selected from eFuse
    eOVER = 0,
    // The trimming codes are used from SNVS_OSC_CAP_TRIM (osc32k's load capacitor)
    eNO = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    // read-write - SNVS core voltage detect trim select
    eSNVS_CORE_VOLT_DET_TRIM_SEL SNVS_CORE_VOLT_DET_TRIM_SEL : 1;
    // read-write - SNVS core voltage detect trim
    uint32_t SNVS_CORE_VOLT_DET_TRIM : 2;
    uint32_t _reserved_0 : 3;
    // read-write - SNVS clock detect trim select
    eSNVS_CLK_DET_TRIM_SEL SNVS_CLK_DET_TRIM_SEL : 1;
    // read-write - SNVS clock detect trim bits
    uint32_t SNVS_CLK_DET_TRIM : 8;
    // read-write - SNVS clock detect offset of high boundary frequency
    eSNVS_CLK_DET_OFFSET_HIGH SNVS_CLK_DET_OFFSET_HIGH : 2;
    // read-write - SNVS clock detect offset of low boundary frequency
    eSNVS_CLK_DET_OFFSET_LOW SNVS_CLK_DET_OFFSET_LOW : 2;
    uint32_t _reserved_1 : 3;
    // read-write - SNVS OSC load capacitor trim select
    eSNVS_CAP_TRIM_SEL SNVS_CAP_TRIM_SEL : 1;
    // read-write - SNVS OSC load capacitor trim
    uint32_t SNVS_OSC_CAP_TRIM : 4;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR34() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR34 &Instance() { return *reinterpret_cast<volatile GPR34*>(0x40C98088); }
};

// GPR35 General Purpose Register
union GPR35 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };
  
  // SNVS voltage detect trim select
  enum class eSNVS_VOLT_DET_TRIM_SEL : uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes of voltage detectors to change the voltage boundaries in battery voltage detecting are selected from SNVS_VOLT_DET_TRIM
    eNO1 = 1,
  };
  
  // SNVS temperature detect trim select
  enum class eSNVS_TEMP_DET_TRIM_SEL : uint32_t {
    // The trimming codes are selected from eFuse
    eOVER1 = 0,
    // The trimming codes to define the temperature boundaries of temperature detector are selected from SNVS_TEMP_DET_TRIM
    eNO1 = 1,
  };
  
  // SNVS temperature detect offset of high temperature boundary
  enum class eSNVS_TEMP_DET_OFFSET_HIGH : uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };
  
  // SNVS temperature detect offset of low temperature boundary
  enum class eSNVS_TEMP_DET_OFFSET_LOW : uint32_t {
    // No change (Default)
    eOVER = 0,
    // Add +5 to the Trim
    eNO = 1,
    // Add +10 to the trim
    eOVER1 = 2,
    // Add -5 to the Trim
    eNO1 = 3,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    uint32_t _reserved_0 : 2;
    // read-write - SNVS voltage detect trim select
    eSNVS_VOLT_DET_TRIM_SEL SNVS_VOLT_DET_TRIM_SEL : 1;
    // read-write - SNVS voltage detect trim
    uint32_t SNVS_VOLT_DET_TRIM : 8;
    uint32_t _reserved_1 : 3;
    // read-write - SNVS temperature detect trim select
    eSNVS_TEMP_DET_TRIM_SEL SNVS_TEMP_DET_TRIM_SEL : 1;
    // read-write - SNVS temperature detect trim
    uint32_t SNVS_TEMP_DET_TRIM : 12;
    // read-write - SNVS temperature detect offset of high temperature boundary
    eSNVS_TEMP_DET_OFFSET_HIGH SNVS_TEMP_DET_OFFSET_HIGH : 2;
    // read-write - SNVS temperature detect offset of low temperature boundary
    eSNVS_TEMP_DET_OFFSET_LOW SNVS_TEMP_DET_OFFSET_LOW : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR35() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR35 &Instance() { return *reinterpret_cast<volatile GPR35*>(0x40C9808C); }
};

// GPR36 General Purpose Register
union GPR36 {
  
  // SNVS RAM isolation enable bit
  enum class eSNVSDIG_SNVS1P8_ISO_EN : uint32_t {
    // Enable SRAM access (It should be cleared after LDO_SNVS_DIG and SNVS SRAM peripheral power is back)
    eDIS = 0,
    // Enable the isolation to avoid extra leakage power before SNVS SRAM peripheral power or LDO_SNVS_DIG is switched off
    eEN = 1,
  };
  
  // SNVS SRAM power-down enable bit
  enum class eSNVS_SRAM_SLEEP : uint32_t {
    // Enable SRAM access (It should be cleared after LDO_SNVS_DIG is enabled)
    eDIS = 0,
    // SNVS SRAM can go in Shutdown/ Periphery Off Array On/ Periphery On Array Off mode. In addition, this bit ensures power-up without stuck-at /high DC current states and hence must be held to 1 during wake-up, so this bit is default high.
    eEN = 1,
  };
  
  // SNVS SRAM standby enable bit
  enum class eSNVS_SRAM_STDBY : uint32_t {
    // SNVS SRAM does not enter low leakage state
    eNo = 0,
    // SNVS SRAM enters low leakage state and large drivers are switched OFF
    eDISABLE = 1,
  };
  
  // SNVS SRAM large switch control bit for peripheral
  enum class eSNVS_SRAM_PSWLARGEMP_FORCE : uint32_t {
    // Switch on SNVS SRAM power for peripheral
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral (SRAM array power is not impacted, and data can be retained)
    eDISABLE = 1,
  };
  
  // SNVS SRAM large switch control bit
  enum class eSNVS_SRAM_PSWLARGE : uint32_t {
    // Switch on SNVS SRAM power for peripheral and array
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral and array
    eDISABLE = 1,
  };
  
  // SNVS SRAM small switch control bit for peripheral
  enum class eSNVS_SRAM_PSWSMALLMP_FORCE : uint32_t {
    // Switch on SNVS SRAM power for peripheral
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral (SRAM array power is not impacted, and data can be retained)
    eDISABLE = 1,
  };
  
  // SNVS SRAM small switch control bit
  enum class eSNVS_SRAM_PSWSMALL : uint32_t {
    // Switch on SNVS SRAM power for peripheral and array
    eNo = 0,
    // Switch off SNVS SRAM power for peripheral and array
    eDISABLE = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 23;
    // read-write - SNVS RAM isolation enable bit
    eSNVSDIG_SNVS1P8_ISO_EN SNVSDIG_SNVS1P8_ISO_EN : 1;
    uint32_t _reserved_1 : 2;
    // read-write - SNVS SRAM power-down enable bit
    eSNVS_SRAM_SLEEP SNVS_SRAM_SLEEP : 1;
    // read-write - SNVS SRAM standby enable bit
    eSNVS_SRAM_STDBY SNVS_SRAM_STDBY : 1;
    // read-write - SNVS SRAM large switch control bit for peripheral
    eSNVS_SRAM_PSWLARGEMP_FORCE SNVS_SRAM_PSWLARGEMP_FORCE : 1;
    // read-write - SNVS SRAM large switch control bit
    eSNVS_SRAM_PSWLARGE SNVS_SRAM_PSWLARGE : 1;
    // read-write - SNVS SRAM small switch control bit for peripheral
    eSNVS_SRAM_PSWSMALLMP_FORCE SNVS_SRAM_PSWSMALLMP_FORCE : 1;
    // read-write - SNVS SRAM small switch control bit
    eSNVS_SRAM_PSWSMALL SNVS_SRAM_PSWSMALL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR36() = delete;
  inline void Reset() volatile { this->value = 0x04800000; }
  static inline volatile GPR36 &Instance() { return *reinterpret_cast<volatile GPR36*>(0x40C98090); }
};

// GPR37 General Purpose Register
union GPR37 {
  
  // Lock the write to bit 31:1
  enum class eLOCK : uint32_t {
    // Write access is not blocked
    eOVER1 = 0,
    // Write access is blocked
    eNO1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-writeOnce - Lock the write to bit 31:1
    eLOCK LOCK : 1;
    // read-write - SNVS tamper detect pin pull enable bit
    uint32_t SNVS_TAMPER_PUE : 10;
    // read-write - SNVS tamper detect pin pull selection bit
    uint32_t SNVS_TAMPER_PUS : 10;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  GPR37() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile GPR37 &Instance() { return *reinterpret_cast<volatile GPR37*>(0x40C98094); }
};


} // namespace nIOMUXC_SNVS_GPR