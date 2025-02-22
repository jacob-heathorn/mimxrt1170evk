#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // Temperature Sensor Memory Map
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nTMPSNS {


// Temperature Sensor Control Register 0
//
union CTRL0 {
  
  enum class eV_SEL : uint32_t {
    eV_SEL_0 = 0, // Normal temperature measuring mode
  };
  
  // Bit field definition.
  struct {
    uint32_t SLOPE_CAL : 6;
    uint32_t _reserved_1 : 2;
    eV_SEL V_SEL : 2;
    uint32_t _reserved_2 : 2;
    uint32_t IBIAS_TRIM : 4;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00008020; }
  static inline volatile CTRL0 &Instance() { return *reinterpret_cast<volatile CTRL0*>(0x00000000); }
};

// Temperature Sensor Control Register 0
//
union CTRL0_SET {
  
  // Bit field definition.
  struct {
    uint32_t SLOPE_CAL : 6;
    uint32_t _reserved_1 : 2;
    uint32_t V_SEL : 2;
    uint32_t _reserved_2 : 2;
    uint32_t IBIAS_TRIM : 4;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00008020; }
  static inline volatile CTRL0_SET &Instance() { return *reinterpret_cast<volatile CTRL0_SET*>(0x00000004); }
};

// Temperature Sensor Control Register 0
//
union CTRL0_CLR {
  
  // Bit field definition.
  struct {
    uint32_t SLOPE_CAL : 6;
    uint32_t _reserved_1 : 2;
    uint32_t V_SEL : 2;
    uint32_t _reserved_2 : 2;
    uint32_t IBIAS_TRIM : 4;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00008020; }
  static inline volatile CTRL0_CLR &Instance() { return *reinterpret_cast<volatile CTRL0_CLR*>(0x00000008); }
};

// Temperature Sensor Control Register 0
//
union CTRL0_TOG {
  
  // Bit field definition.
  struct {
    uint32_t SLOPE_CAL : 6;
    uint32_t _reserved_1 : 2;
    uint32_t V_SEL : 2;
    uint32_t _reserved_2 : 2;
    uint32_t IBIAS_TRIM : 4;
    uint32_t _reserved_end : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00008020; }
  static inline volatile CTRL0_TOG &Instance() { return *reinterpret_cast<volatile CTRL0_TOG*>(0x0000000C); }
};

// Temperature Sensor Control Register 1
//
union CTRL1 {
  
  enum class eFREQ : uint32_t {
    eFREQ_0 = 0, // Single Reading Mode. New reading available every time CTRL1[START] bit is set to 1 from 0.
    eFREQ_1 = 1, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_2 = 2, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_3 = 3, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_4 = 4, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_5 = 5, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_6 = 6, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_7 = 7, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_8 = 8, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
    eFREQ_9 = 9, // Continuous Reading Mode. Next temperature reading taken after programmed number of cycles after current reading is complete.
  };
  
  enum class eFINISH_IE : uint32_t {
    eFINISH_IE_0 = 0, // Interrupt is disabled
    eFINISH_IE_1 = 1, // Interrupt is enabled
  };
  
  enum class eLOW_TEMP_IE : uint32_t {
    eLOW_TEMP_IE_0 = 0, // Interrupt is disabled
    eLOW_TEMP_IE_1 = 1, // Interrupt is enabled
  };
  
  enum class eHIGH_TEMP_IE : uint32_t {
    eHIGH_TEMP_IE_0 = 0, // Interrupt is disabled
    eHIGH_TEMP_IE_1 = 1, // Interrupt is enabled
  };
  
  enum class ePANIC_TEMP_IE : uint32_t {
    ePANIC_TEMP_IE_0 = 0, // Interrupt is disabled
    ePANIC_TEMP_IE_1 = 1, // Interrupt is enabled
  };
  
  enum class eSTART : uint32_t {
    eSTART_0 = 0, // No new temperature reading taken
    eSTART_1 = 1, // Initiate a new temperature reading
  };
  
  enum class ePWD : uint32_t {
    ePWD_0 = 0, // Sensor is active
    ePWD_1 = 1, // Sensor is powered down
  };
  
  enum class ePWD_FULL : uint32_t {
    ePWD_FULL_0 = 0, // Sensor is active
    ePWD_FULL_1 = 1, // Sensor is powered down
  };
  
  // Bit field definition.
  struct {
    eFREQ FREQ : 16;
    eFINISH_IE FINISH_IE : 1;
    eLOW_TEMP_IE LOW_TEMP_IE : 1;
    eHIGH_TEMP_IE HIGH_TEMP_IE : 1;
    ePANIC_TEMP_IE PANIC_TEMP_IE : 1;
    uint32_t _reserved_5 : 2;
    eSTART START : 1;
    ePWD PWD : 1;
    uint32_t RFU : 7;
    ePWD_FULL PWD_FULL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL1 &Instance() { return *reinterpret_cast<volatile CTRL1*>(0x00000010); }
};

// Temperature Sensor Control Register 1
//
union CTRL1_SET {
  
  // Bit field definition.
  struct {
    uint32_t FREQ : 16;
    uint32_t FINISH_IE : 1;
    uint32_t LOW_TEMP_IE : 1;
    uint32_t HIGH_TEMP_IE : 1;
    uint32_t PANIC_TEMP_IE : 1;
    uint32_t _reserved_5 : 2;
    uint32_t START : 1;
    uint32_t PWD : 1;
    uint32_t RFU : 7;
    uint32_t PWD_FULL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1_SET() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL1_SET &Instance() { return *reinterpret_cast<volatile CTRL1_SET*>(0x00000014); }
};

// Temperature Sensor Control Register 1
//
union CTRL1_CLR {
  
  // Bit field definition.
  struct {
    uint32_t FREQ : 16;
    uint32_t FINISH_IE : 1;
    uint32_t LOW_TEMP_IE : 1;
    uint32_t HIGH_TEMP_IE : 1;
    uint32_t PANIC_TEMP_IE : 1;
    uint32_t _reserved_5 : 2;
    uint32_t START : 1;
    uint32_t PWD : 1;
    uint32_t RFU : 7;
    uint32_t PWD_FULL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL1_CLR &Instance() { return *reinterpret_cast<volatile CTRL1_CLR*>(0x00000018); }
};

// Temperature Sensor Control Register 1
//
union CTRL1_TOG {
  
  // Bit field definition.
  struct {
    uint32_t FREQ : 16;
    uint32_t FINISH_IE : 1;
    uint32_t LOW_TEMP_IE : 1;
    uint32_t HIGH_TEMP_IE : 1;
    uint32_t PANIC_TEMP_IE : 1;
    uint32_t _reserved_5 : 2;
    uint32_t START : 1;
    uint32_t PWD : 1;
    uint32_t RFU : 7;
    uint32_t PWD_FULL : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00800000; }
  static inline volatile CTRL1_TOG &Instance() { return *reinterpret_cast<volatile CTRL1_TOG*>(0x0000001C); }
};

// Temperature Sensor Range Register 0
//
union RANGE0 {
  
  // Bit field definition.
  struct {
    uint32_t LOW_TEMP_VAL : 12;
    uint32_t _reserved_1 : 4;
    uint32_t HIGH_TEMP_VAL : 12;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE0 &Instance() { return *reinterpret_cast<volatile RANGE0*>(0x00000020); }
};

// Temperature Sensor Range Register 0
//
union RANGE0_SET {
  
  // Bit field definition.
  struct {
    uint32_t LOW_TEMP_VAL : 12;
    uint32_t _reserved_1 : 4;
    uint32_t HIGH_TEMP_VAL : 12;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE0_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE0_SET &Instance() { return *reinterpret_cast<volatile RANGE0_SET*>(0x00000024); }
};

// Temperature Sensor Range Register 0
//
union RANGE0_CLR {
  
  // Bit field definition.
  struct {
    uint32_t LOW_TEMP_VAL : 12;
    uint32_t _reserved_1 : 4;
    uint32_t HIGH_TEMP_VAL : 12;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE0_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE0_CLR &Instance() { return *reinterpret_cast<volatile RANGE0_CLR*>(0x00000028); }
};

// Temperature Sensor Range Register 0
//
union RANGE0_TOG {
  
  // Bit field definition.
  struct {
    uint32_t LOW_TEMP_VAL : 12;
    uint32_t _reserved_1 : 4;
    uint32_t HIGH_TEMP_VAL : 12;
    uint32_t _reserved_end : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE0_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE0_TOG &Instance() { return *reinterpret_cast<volatile RANGE0_TOG*>(0x0000002C); }
};

// Temperature Sensor Range Register 1
//
union RANGE1 {
  
  // Bit field definition.
  struct {
    uint32_t PANIC_TEMP_VAL : 12;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE1 &Instance() { return *reinterpret_cast<volatile RANGE1*>(0x00000030); }
};

// Temperature Sensor Range Register 1
//
union RANGE1_SET {
  
  // Bit field definition.
  struct {
    uint32_t PANIC_TEMP_VAL : 12;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE1_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE1_SET &Instance() { return *reinterpret_cast<volatile RANGE1_SET*>(0x00000034); }
};

// Temperature Sensor Range Register 1
//
union RANGE1_CLR {
  
  // Bit field definition.
  struct {
    uint32_t PANIC_TEMP_VAL : 12;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE1_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE1_CLR &Instance() { return *reinterpret_cast<volatile RANGE1_CLR*>(0x00000038); }
};

// Temperature Sensor Range Register 1
//
union RANGE1_TOG {
  
  // Bit field definition.
  struct {
    uint32_t PANIC_TEMP_VAL : 12;
    uint32_t _reserved_end : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  RANGE1_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile RANGE1_TOG &Instance() { return *reinterpret_cast<volatile RANGE1_TOG*>(0x0000003C); }
};

// Temperature Sensor Status Register 0
//
union STATUS0 {
  
  enum class eFINISH : uint32_t {
    eFINISH_0 = 0, // Temperature sensor is busy (if CTRL1[START] = 1)or no new reading has been initiated (if CTRL1[START] = 0)
    eFINISH_1 = 1, // Temperature reading is complete and new temperature value available for reading
  };
  
  enum class eLOW_TEMP : uint32_t {
    eLOW_TEMP_0 = 0, // No Low temperature alert
    eLOW_TEMP_1 = 1, // Low temperature alert
  };
  
  enum class eHIGH_TEMP : uint32_t {
    eHIGH_TEMP_0 = 0, // No High temperature alert
    eHIGH_TEMP_1 = 1, // High temperature alert
  };
  
  enum class ePANIC_TEMP : uint32_t {
    ePANIC_TEMP_0 = 0, // No Panic temperature alert
    ePANIC_TEMP_1 = 1, // Panic temperature alert
  };
  
  // Bit field definition.
  struct {
    uint32_t TEMP_VAL : 12;
    uint32_t _reserved_1 : 4;
    eFINISH FINISH : 1;
    eLOW_TEMP LOW_TEMP : 1;
    eHIGH_TEMP HIGH_TEMP : 1;
    ePANIC_TEMP PANIC_TEMP : 1;
    uint32_t _reserved_end : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  STATUS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile STATUS0 &Instance() { return *reinterpret_cast<volatile STATUS0*>(0x00000050); }
};


} // namespace nTMPSNS