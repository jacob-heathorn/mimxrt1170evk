#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nPWM2 {


// Counter Register
union SM0CNT {
  
  // Bit field definition.
  struct {
    // read-only - Counter Register Bits
    uint32_t CNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CNT &Instance() { return *reinterpret_cast<volatile SM0CNT*>(0x40190000); }
};

// Initial Count Register
union SM0INIT {
  
  // Bit field definition.
  struct {
    // read-write - Initial Count Register Bits
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0INIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0INIT &Instance() { return *reinterpret_cast<volatile SM0INIT*>(0x40190002); }
};

// Control 2 Register
union SM0CTRL2 {
  
  // Clock Source Select
  enum class eCLK_SEL : uint32_t {
    // The IPBus clock is used as the clock for the local prescaler and counter.
    eIPBUS = 0,
    // EXT_CLK is used as the clock for the local prescaler and counter.
    eEXT_CLK = 1,
    // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
    eAUX_CLK = 2,
  };
  
  // Reload Source Select
  enum class eRELOAD_SEL : uint32_t {
    // The local RELOAD signal is used to reload registers.
    eLOCAL = 0,
    // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
    eMASTER = 1,
  };
  
  // Force Select
  enum class eFORCE_SEL : uint32_t {
    // The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
    eLOCAL = 0,
    // The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER = 1,
    // The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
    eLOCAL_RELOAD = 2,
    // The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_RELOAD = 3,
    // The local sync signal from this submodule is used to force updates.
    eLOCAL_SYNC = 4,
    // The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_SYNC = 5,
    // The external force signal, EXT_FORCE, from outside the PWM module causes updates.
    eEXT_FORCE = 6,
    // The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
    eEXT_SYNC = 7,
  };
  
  // Force Enable
  enum class eFRCEN : uint32_t {
    // Initialization from a FORCE_OUT is disabled.
    eDISABLED = 0,
    // Initialization from a FORCE_OUT is enabled.
    eENABLED = 1,
  };
  
  // Initialization Control Select
  enum class eINIT_SEL : uint32_t {
    // Local sync (PWM_X) causes initialization.
    ePWM_X = 0,
    // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
    eMASTER_RELOAD = 1,
    // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
    eMASTER_SYNC = 2,
    // EXT_SYNC causes initialization.
    eEXT_SYNC = 3,
  };
  
  // Independent or Complementary Pair Operation
  enum class eINDEP : uint32_t {
    // PWM_A and PWM_B form a complementary PWM pair.
    eCOMPLEMENTARY = 0,
    // PWM_A and PWM_B outputs are independent PWMs.
    eINDEPENDENT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Source Select
    eCLK_SEL CLK_SEL : 2;
    // read-write - Reload Source Select
    eRELOAD_SEL RELOAD_SEL : 1;
    // read-write - Force Select
    eFORCE_SEL FORCE_SEL : 3;
    // read-write - Force Initialization
    uint32_t FORCE : 1;
    // read-write - Force Enable
    eFRCEN FRCEN : 1;
    // read-write - Initialization Control Select
    eINIT_SEL INIT_SEL : 2;
    // read-write - PWM_X Initial Value
    uint32_t PWMX_INIT : 1;
    // read-write - PWM45 Initial Value
    uint32_t PWM45_INIT : 1;
    // read-write - PWM23 Initial Value
    uint32_t PWM23_INIT : 1;
    // read-write - Independent or Complementary Pair Operation
    eINDEP INDEP : 1;
    // read-write - Wait Enable
    uint32_t WAITEN : 1;
    // read-write - Debug Enable
    uint32_t DBGEN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CTRL2 &Instance() { return *reinterpret_cast<volatile SM0CTRL2*>(0x40190004); }
};

// Control Register
union SM0CTRL {
  
  // Double Switching Enable
  enum class eDBLEN : uint32_t {
    // Double switching disabled.
    eDISABLED = 0,
    // Double switching enabled.
    eENABLED = 1,
  };
  
  // PWM_X Double Switching Enable
  enum class eDBLX : uint32_t {
    // PWM_X double pulse disabled.
    eDISABLED = 0,
    // PWM_X double pulse enabled.
    eENABLED = 1,
  };
  
  // Load Mode Select
  enum class eLDMOD : uint32_t {
    // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
    eNEXT_PWM_RELOAD = 0,
    // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
    eMTCTRL_LDOK_SET = 1,
  };
  
  // Split the DBLPWM signal to PWM_A and PWM_B
  enum class eSPLIT : uint32_t {
    // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
    eDISABLED = 0,
    // DBLPWM is split to PWM_A and PWM_B.
    eENABLED = 1,
  };
  
  // Prescaler
  enum class ePRSC : uint32_t {
    // Prescaler 1
    eONE = 0,
    // Prescaler 2
    eTWO = 1,
    // Prescaler 4
    eFOUR = 2,
    // Prescaler 8
    eEIGHT = 3,
    // Prescaler 16
    eSIXTEEN = 4,
    // Prescaler 32
    eTHIRTYTWO = 5,
    // Prescaler 64
    eSIXTYFOUR = 6,
    // Prescaler 128
    eHUNDREDTWENTYEIGHT = 7,
  };
  
  // Compare Mode
  enum class eCOMPMODE : uint32_t {
    // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
    eEQUAL_TO = 0,
    // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
    eEQUAL_TO_OR_GREATER_THAN = 1,
  };
  
  // Full Cycle Reload
  enum class eFULL : uint32_t {
    // Full-cycle reloads disabled.
    eDISABLED = 0,
    // Full-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Half Cycle Reload
  enum class eHALF : uint32_t {
    // Half-cycle reloads disabled.
    eDISABLED = 0,
    // Half-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Load Frequency
  enum class eLDFQ : uint32_t {
    // Every PWM opportunity
    eEVERYPWM = 0,
    // Every 2 PWM opportunities
    eEVERY2PWM = 1,
    // Every 3 PWM opportunities
    eEVERY3PWM = 2,
    // Every 4 PWM opportunities
    eEVERY4PWM = 3,
    // Every 5 PWM opportunities
    eEVERY5PWM = 4,
    // Every 6 PWM opportunities
    eEVERY6PWM = 5,
    // Every 7 PWM opportunities
    eEVERY7PWM = 6,
    // Every 8 PWM opportunities
    eEVERY8PWM = 7,
    // Every 9 PWM opportunities
    eEVERY9PWM = 8,
    // Every 10 PWM opportunities
    eEVERY10PWM = 9,
    // Every 11 PWM opportunities
    eEVERY11PWM = 10,
    // Every 12 PWM opportunities
    eEVERY12PWM = 11,
    // Every 13 PWM opportunities
    eEVERY13PWM = 12,
    // Every 14 PWM opportunities
    eEVERY14PWM = 13,
    // Every 15 PWM opportunities
    eEVERY15PWM = 14,
    // Every 16 PWM opportunities
    eEVERY16PWM = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Double Switching Enable
    eDBLEN DBLEN : 1;
    // read-write - PWM_X Double Switching Enable
    eDBLX DBLX : 1;
    // read-write - Load Mode Select
    eLDMOD LDMOD : 1;
    // read-write - Split the DBLPWM signal to PWM_A and PWM_B
    eSPLIT SPLIT : 1;
    // read-write - Prescaler
    ePRSC PRSC : 3;
    // read-write - Compare Mode
    eCOMPMODE COMPMODE : 1;
    // read-only - Deadtime
    uint32_t DT : 2;
    // read-write - Full Cycle Reload
    eFULL FULL : 1;
    // read-write - Half Cycle Reload
    eHALF HALF : 1;
    // read-write - Load Frequency
    eLDFQ LDFQ : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SM0CTRL &Instance() { return *reinterpret_cast<volatile SM0CTRL*>(0x40190006); }
};

// Value Register 0
union SM0VAL0 {
  
  // Bit field definition.
  struct {
    // read-write - Value 0
    uint32_t VAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL0 &Instance() { return *reinterpret_cast<volatile SM0VAL0*>(0x4019000A); }
};

// Fractional Value Register 1
union SM0FRACVAL1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 1
    uint32_t FRACVAL1 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRACVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRACVAL1 &Instance() { return *reinterpret_cast<volatile SM0FRACVAL1*>(0x4019000C); }
};

// Value Register 1
union SM0VAL1 {
  
  // Bit field definition.
  struct {
    // read-write - Value 1
    uint32_t VAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL1 &Instance() { return *reinterpret_cast<volatile SM0VAL1*>(0x4019000E); }
};

// Fractional Value Register 2
union SM0FRACVAL2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 2
    uint32_t FRACVAL2 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRACVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRACVAL2 &Instance() { return *reinterpret_cast<volatile SM0FRACVAL2*>(0x40190010); }
};

// Value Register 2
union SM0VAL2 {
  
  // Bit field definition.
  struct {
    // read-write - Value 2
    uint32_t VAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL2 &Instance() { return *reinterpret_cast<volatile SM0VAL2*>(0x40190012); }
};

// Fractional Value Register 3
union SM0FRACVAL3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 3
    uint32_t FRACVAL3 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRACVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRACVAL3 &Instance() { return *reinterpret_cast<volatile SM0FRACVAL3*>(0x40190014); }
};

// Value Register 3
union SM0VAL3 {
  
  // Bit field definition.
  struct {
    // read-write - Value 3
    uint32_t VAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL3 &Instance() { return *reinterpret_cast<volatile SM0VAL3*>(0x40190016); }
};

// Fractional Value Register 4
union SM0FRACVAL4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 4
    uint32_t FRACVAL4 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRACVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRACVAL4 &Instance() { return *reinterpret_cast<volatile SM0FRACVAL4*>(0x40190018); }
};

// Value Register 4
union SM0VAL4 {
  
  // Bit field definition.
  struct {
    // read-write - Value 4
    uint32_t VAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL4 &Instance() { return *reinterpret_cast<volatile SM0VAL4*>(0x4019001A); }
};

// Fractional Value Register 5
union SM0FRACVAL5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 5
    uint32_t FRACVAL5 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRACVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRACVAL5 &Instance() { return *reinterpret_cast<volatile SM0FRACVAL5*>(0x4019001C); }
};

// Value Register 5
union SM0VAL5 {
  
  // Bit field definition.
  struct {
    // read-write - Value 5
    uint32_t VAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0VAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0VAL5 &Instance() { return *reinterpret_cast<volatile SM0VAL5*>(0x4019001E); }
};

// Fractional Control Register
union SM0FRCTRL {
  
  // Fractional Cycle PWM Period Enable
  enum class eFRAC1_EN : uint32_t {
    // Disable fractional cycle length for the PWM period.
    eDISABLED = 0,
    // Enable fractional cycle length for the PWM period.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_A
  enum class eFRAC23_EN : uint32_t {
    // Disable fractional cycle placement for PWM_A.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_A.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_B
  enum class eFRAC45_EN : uint32_t {
    // Disable fractional cycle placement for PWM_B.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_B.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Fractional Cycle PWM Period Enable
    eFRAC1_EN FRAC1_EN : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_A
    eFRAC23_EN FRAC23_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_B
    eFRAC45_EN FRAC45_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-only - Test Status Bit
    uint32_t TEST : 1;
    uint32_t _reserved_3 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0FRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0FRCTRL &Instance() { return *reinterpret_cast<volatile SM0FRCTRL*>(0x40190020); }
};

// Output Control Register
union SM0OCTRL {
  
  // PWM_X Fault State
  enum class ePWMXFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_B Fault State
  enum class ePWMBFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_A Fault State
  enum class ePWMAFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_X Output Polarity
  enum class ePOLX : uint32_t {
    // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_B Output Polarity
  enum class ePOLB : uint32_t {
    // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_A Output Polarity
  enum class ePOLA : uint32_t {
    // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Fault State
    ePWMXFS PWMXFS : 2;
    // read-write - PWM_B Fault State
    ePWMBFS PWMBFS : 2;
    // read-write - PWM_A Fault State
    ePWMAFS PWMAFS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - PWM_X Output Polarity
    ePOLX POLX : 1;
    // read-write - PWM_B Output Polarity
    ePOLB POLB : 1;
    // read-write - PWM_A Output Polarity
    ePOLA POLA : 1;
    uint32_t _reserved_1 : 2;
    // read-only - PWM_X Input
    uint32_t PWMX_IN : 1;
    // read-only - PWM_B Input
    uint32_t PWMB_IN : 1;
    // read-only - PWM_A Input
    uint32_t PWMA_IN : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0OCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0OCTRL &Instance() { return *reinterpret_cast<volatile SM0OCTRL*>(0x40190022); }
};

// Status Register
union SM0STS {
  
  // Compare Flags
  enum class eCMPF : uint32_t {
    // No compare event has occurred for a particular VALx value.
    eNO_EVENT = 0,
    // A compare event has occurred for a particular VALx value.
    eEVENT = 1,
  };
  
  // Reload Flag
  enum class eRF : uint32_t {
    // No new reload cycle since last STS[RF] clearing
    eNO_FLAG = 0,
    // New reload cycle since last STS[RF] clearing
    eFLAG = 1,
  };
  
  // Reload Error Flag
  enum class eREF : uint32_t {
    // No reload error occurred.
    eNO_FLAG = 0,
    // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
    eFLAG = 1,
  };
  
  // Registers Updated Flag
  enum class eRUF : uint32_t {
    // No register update has occurred since last reload.
    eNO_FLAG = 0,
    // At least one of the double buffered registers has been updated since the last reload.
    eFLAG = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Flags
    eCMPF CMPF : 6;
    // read-write - Capture Flag X0
    uint32_t CFX0 : 1;
    // read-write - Capture Flag X1
    uint32_t CFX1 : 1;
    // read-write - Capture Flag B0
    uint32_t CFB0 : 1;
    // read-write - Capture Flag B1
    uint32_t CFB1 : 1;
    // read-write - Capture Flag A0
    uint32_t CFA0 : 1;
    // read-write - Capture Flag A1
    uint32_t CFA1 : 1;
    // read-write - Reload Flag
    eRF RF : 1;
    // read-write - Reload Error Flag
    eREF REF : 1;
    // read-only - Registers Updated Flag
    eRUF RUF : 1;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0STS &Instance() { return *reinterpret_cast<volatile SM0STS*>(0x40190024); }
};

// Interrupt Enable Register
union SM0INTEN {
  
  // Compare Interrupt Enables
  enum class eCMPIE : uint32_t {
    // The corresponding STS[CMPF] bit will not cause an interrupt request.
    eDISABLED = 0,
    // The corresponding STS[CMPF] bit will cause an interrupt request.
    eENABLED = 1,
  };
  
  // Capture X 0 Interrupt Enable
  enum class eCX0IE : uint32_t {
    // Interrupt request disabled for STS[CFX0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX0].
    eENABLED = 1,
  };
  
  // Capture X 1 Interrupt Enable
  enum class eCX1IE : uint32_t {
    // Interrupt request disabled for STS[CFX1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX1].
    eENABLED = 1,
  };
  
  // Capture B 0 Interrupt Enable
  enum class eCB0IE : uint32_t {
    // Interrupt request disabled for STS[CFB0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB0].
    eENABLED = 1,
  };
  
  // Capture B 1 Interrupt Enable
  enum class eCB1IE : uint32_t {
    // Interrupt request disabled for STS[CFB1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB1].
    eENABLED = 1,
  };
  
  // Capture A 0 Interrupt Enable
  enum class eCA0IE : uint32_t {
    // Interrupt request disabled for STS[CFA0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA0].
    eENABLED = 1,
  };
  
  // Capture A 1 Interrupt Enable
  enum class eCA1IE : uint32_t {
    // Interrupt request disabled for STS[CFA1]
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA1]
    eENABLED = 1,
  };
  
  // Reload Interrupt Enable
  enum class eRIE : uint32_t {
    // STS[RF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[RF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Reload Error Interrupt Enable
  enum class eREIE : uint32_t {
    // STS[REF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[REF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Interrupt Enables
    eCMPIE CMPIE : 6;
    // read-write - Capture X 0 Interrupt Enable
    eCX0IE CX0IE : 1;
    // read-write - Capture X 1 Interrupt Enable
    eCX1IE CX1IE : 1;
    // read-write - Capture B 0 Interrupt Enable
    eCB0IE CB0IE : 1;
    // read-write - Capture B 1 Interrupt Enable
    eCB1IE CB1IE : 1;
    // read-write - Capture A 0 Interrupt Enable
    eCA0IE CA0IE : 1;
    // read-write - Capture A 1 Interrupt Enable
    eCA1IE CA1IE : 1;
    // read-write - Reload Interrupt Enable
    eRIE RIE : 1;
    // read-write - Reload Error Interrupt Enable
    eREIE REIE : 1;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0INTEN &Instance() { return *reinterpret_cast<volatile SM0INTEN*>(0x40190026); }
};

// DMA Enable Register
union SM0DMAEN {
  
  // Capture DMA Enable Source Select
  enum class eCAPTDE : uint32_t {
    // Read DMA requests disabled.
    eDISABLED = 0,
    // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
    eEXCEEDFIFO = 1,
    // A local synchronization (VAL1 matches counter) sets the read DMA request.
    eLOCAL_SYNC = 2,
    // A local reload (STS[RF] being set) sets the read DMA request.
    eLOCAL_RELOAD = 3,
  };
  
  // FIFO Watermark AND Control
  enum class eFAND : uint32_t {
    // Selected FIFO watermarks are OR'ed together.
    eOR = 0,
    // Selected FIFO watermarks are AND'ed together.
    eAND = 1,
  };
  
  // Value Registers DMA Enable
  enum class eVALDE : uint32_t {
    // DMA write requests disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Capture X0 FIFO DMA Enable
    uint32_t CX0DE : 1;
    // read-write - Capture X1 FIFO DMA Enable
    uint32_t CX1DE : 1;
    // read-write - Capture B0 FIFO DMA Enable
    uint32_t CB0DE : 1;
    // read-write - Capture B1 FIFO DMA Enable
    uint32_t CB1DE : 1;
    // read-write - Capture A0 FIFO DMA Enable
    uint32_t CA0DE : 1;
    // read-write - Capture A1 FIFO DMA Enable
    uint32_t CA1DE : 1;
    // read-write - Capture DMA Enable Source Select
    eCAPTDE CAPTDE : 2;
    // read-write - FIFO Watermark AND Control
    eFAND FAND : 1;
    // read-write - Value Registers DMA Enable
    eVALDE VALDE : 1;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0DMAEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0DMAEN &Instance() { return *reinterpret_cast<volatile SM0DMAEN*>(0x40190028); }
};

// Output Trigger Control Register
union SM0TCTRL {
  
  // Output Trigger Enables
  enum class eOUT_TRIG_EN : uint32_t {
    // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
    eVAL0 = 1,
  };
  
  // Trigger Frequency
  enum class eTRGFRQ : uint32_t {
    // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eEVERYPWM = 0,
    // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eFINALPWM = 1,
  };
  
  // Output Trigger 1 Source Select
  enum class ePWBOT1 : uint32_t {
    // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
    ePWM_OUT_TRIG1_SIGNAL = 0,
    // Route the PWM_B output to the PWM_OUT_TRIG1 port.
    ePWMB_OUTPUT = 1,
  };
  
  // Output Trigger 0 Source Select
  enum class ePWAOT0 : uint32_t {
    // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
    ePWM_OUT_TRIG0_SIGNAL = 0,
    // Route the PWM_A output to the PWM_OUT_TRIG0 port.
    ePWMA_OUTPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Trigger Enables
    eOUT_TRIG_EN OUT_TRIG_EN : 6;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger Frequency
    eTRGFRQ TRGFRQ : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Output Trigger 1 Source Select
    ePWBOT1 PWBOT1 : 1;
    // read-write - Output Trigger 0 Source Select
    ePWAOT0 PWAOT0 : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0TCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0TCTRL &Instance() { return *reinterpret_cast<volatile SM0TCTRL*>(0x4019002A); }
};

// Fault Disable Mapping Register 0
union SM0DISMAP0 {
  
  // Bit field definition.
  struct {
    // read-write - PWM_A Fault Disable Mask 0
    uint32_t DIS0A : 4;
    // read-write - PWM_B Fault Disable Mask 0
    uint32_t DIS0B : 4;
    // read-write - PWM_X Fault Disable Mask 0
    uint32_t DIS0X : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0DISMAP0() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile SM0DISMAP0 &Instance() { return *reinterpret_cast<volatile SM0DISMAP0*>(0x4019002C); }
};

// Deadtime Count Register 0
union SM0DTCNT0 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT0
    uint32_t DTCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0DTCNT0() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM0DTCNT0 &Instance() { return *reinterpret_cast<volatile SM0DTCNT0*>(0x40190030); }
};

// Deadtime Count Register 1
union SM0DTCNT1 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT1
    uint32_t DTCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0DTCNT1() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM0DTCNT1 &Instance() { return *reinterpret_cast<volatile SM0DTCNT1*>(0x40190032); }
};

// Capture Control A Register
union SM0CAPTCTRLA {
  
  // Arm A
  enum class eARMA : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode A
  enum class eONESHOTA : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge A 0
  enum class eEDGA0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge A 1
  enum class eEDGA1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select A
  enum class eINP_SELA : uint32_t {
    // Raw PWM_A input signal selected as source.
    ePWM_A = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter A Enable
  enum class eEDGCNTA_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm A
    eARMA ARMA : 1;
    // read-write - One Shot Mode A
    eONESHOTA ONESHOTA : 1;
    // read-write - Edge A 0
    eEDGA0 EDGA0 : 2;
    // read-write - Edge A 1
    eEDGA1 EDGA1 : 2;
    // read-write - Input Select A
    eINP_SELA INP_SELA : 1;
    // read-write - Edge Counter A Enable
    eEDGCNTA_EN EDGCNTA_EN : 1;
    // read-write - Capture A FIFOs Water Mark
    uint32_t CFAWM : 2;
    // read-only - Capture A0 FIFO Word Count
    uint32_t CA0CNT : 3;
    // read-only - Capture A1 FIFO Word Count
    uint32_t CA1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCTRLA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCTRLA &Instance() { return *reinterpret_cast<volatile SM0CAPTCTRLA*>(0x40190034); }
};

// Capture Compare A Register
union SM0CAPTCOMPA {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare A
    uint32_t EDGCMPA : 8;
    // read-only - Edge Counter A
    uint32_t EDGCNTA : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCOMPA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCOMPA &Instance() { return *reinterpret_cast<volatile SM0CAPTCOMPA*>(0x40190036); }
};

// Capture Control B Register
union SM0CAPTCTRLB {
  
  // Arm B
  enum class eARMB : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode B
  enum class eONESHOTB : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge B 0
  enum class eEDGB0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge B 1
  enum class eEDGB1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select B
  enum class eINP_SELB : uint32_t {
    // Raw PWM_B input signal selected as source.
    ePWM_B = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter B Enable
  enum class eEDGCNTB_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm B
    eARMB ARMB : 1;
    // read-write - One Shot Mode B
    eONESHOTB ONESHOTB : 1;
    // read-write - Edge B 0
    eEDGB0 EDGB0 : 2;
    // read-write - Edge B 1
    eEDGB1 EDGB1 : 2;
    // read-write - Input Select B
    eINP_SELB INP_SELB : 1;
    // read-write - Edge Counter B Enable
    eEDGCNTB_EN EDGCNTB_EN : 1;
    // read-write - Capture B FIFOs Water Mark
    uint32_t CFBWM : 2;
    // read-only - Capture B0 FIFO Word Count
    uint32_t CB0CNT : 3;
    // read-only - Capture B1 FIFO Word Count
    uint32_t CB1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCTRLB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCTRLB &Instance() { return *reinterpret_cast<volatile SM0CAPTCTRLB*>(0x40190038); }
};

// Capture Compare B Register
union SM0CAPTCOMPB {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare B
    uint32_t EDGCMPB : 8;
    // read-only - Edge Counter B
    uint32_t EDGCNTB : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCOMPB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCOMPB &Instance() { return *reinterpret_cast<volatile SM0CAPTCOMPB*>(0x4019003A); }
};

// Capture Control X Register
union SM0CAPTCTRLX {
  
  // Arm X
  enum class eARMX : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode Aux
  enum class eONESHOTX : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge X 0
  enum class eEDGX0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge X 1
  enum class eEDGX1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select X
  enum class eINP_SELX : uint32_t {
    // Raw PWM_X input signal selected as source.
    ePWM_X = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter X Enable
  enum class eEDGCNTX_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm X
    eARMX ARMX : 1;
    // read-write - One Shot Mode Aux
    eONESHOTX ONESHOTX : 1;
    // read-write - Edge X 0
    eEDGX0 EDGX0 : 2;
    // read-write - Edge X 1
    eEDGX1 EDGX1 : 2;
    // read-write - Input Select X
    eINP_SELX INP_SELX : 1;
    // read-write - Edge Counter X Enable
    eEDGCNTX_EN EDGCNTX_EN : 1;
    // read-write - Capture X FIFOs Water Mark
    uint32_t CFXWM : 2;
    // read-only - Capture X0 FIFO Word Count
    uint32_t CX0CNT : 3;
    // read-only - Capture X1 FIFO Word Count
    uint32_t CX1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCTRLX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCTRLX &Instance() { return *reinterpret_cast<volatile SM0CAPTCTRLX*>(0x4019003C); }
};

// Capture Compare X Register
union SM0CAPTCOMPX {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare X
    uint32_t EDGCMPX : 8;
    // read-only - Edge Counter X
    uint32_t EDGCNTX : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CAPTCOMPX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CAPTCOMPX &Instance() { return *reinterpret_cast<volatile SM0CAPTCOMPX*>(0x4019003E); }
};

// Capture Value 0 Register
union SM0CVAL0 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0
    uint32_t CAPTVAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL0 &Instance() { return *reinterpret_cast<volatile SM0CVAL0*>(0x40190040); }
};

// Capture Value 0 Cycle Register
union SM0CVAL0CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0 Cycle
    uint32_t CVAL0CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL0CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL0CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL0CYC*>(0x40190042); }
};

// Capture Value 1 Register
union SM0CVAL1 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1
    uint32_t CAPTVAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL1 &Instance() { return *reinterpret_cast<volatile SM0CVAL1*>(0x40190044); }
};

// Capture Value 1 Cycle Register
union SM0CVAL1CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1 Cycle
    uint32_t CVAL1CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL1CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL1CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL1CYC*>(0x40190046); }
};

// Capture Value 2 Register
union SM0CVAL2 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2
    uint32_t CAPTVAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL2 &Instance() { return *reinterpret_cast<volatile SM0CVAL2*>(0x40190048); }
};

// Capture Value 2 Cycle Register
union SM0CVAL2CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2 Cycle
    uint32_t CVAL2CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL2CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL2CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL2CYC*>(0x4019004A); }
};

// Capture Value 3 Register
union SM0CVAL3 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3
    uint32_t CAPTVAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL3 &Instance() { return *reinterpret_cast<volatile SM0CVAL3*>(0x4019004C); }
};

// Capture Value 3 Cycle Register
union SM0CVAL3CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3 Cycle
    uint32_t CVAL3CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL3CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL3CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL3CYC*>(0x4019004E); }
};

// Capture Value 4 Register
union SM0CVAL4 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4
    uint32_t CAPTVAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL4 &Instance() { return *reinterpret_cast<volatile SM0CVAL4*>(0x40190050); }
};

// Capture Value 4 Cycle Register
union SM0CVAL4CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4 Cycle
    uint32_t CVAL4CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL4CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL4CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL4CYC*>(0x40190052); }
};

// Capture Value 5 Register
union SM0CVAL5 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5
    uint32_t CAPTVAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL5 &Instance() { return *reinterpret_cast<volatile SM0CVAL5*>(0x40190054); }
};

// Capture Value 5 Cycle Register
union SM0CVAL5CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5 Cycle
    uint32_t CVAL5CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM0CVAL5CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM0CVAL5CYC &Instance() { return *reinterpret_cast<volatile SM0CVAL5CYC*>(0x40190056); }
};

// Counter Register
union SM1CNT {
  
  // Bit field definition.
  struct {
    // read-only - Counter Register Bits
    uint32_t CNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CNT &Instance() { return *reinterpret_cast<volatile SM1CNT*>(0x40190060); }
};

// Initial Count Register
union SM1INIT {
  
  // Bit field definition.
  struct {
    // read-write - Initial Count Register Bits
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1INIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1INIT &Instance() { return *reinterpret_cast<volatile SM1INIT*>(0x40190062); }
};

// Control 2 Register
union SM1CTRL2 {
  
  // Clock Source Select
  enum class eCLK_SEL : uint32_t {
    // The IPBus clock is used as the clock for the local prescaler and counter.
    eIPBUS = 0,
    // EXT_CLK is used as the clock for the local prescaler and counter.
    eEXT_CLK = 1,
    // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
    eAUX_CLK = 2,
  };
  
  // Reload Source Select
  enum class eRELOAD_SEL : uint32_t {
    // The local RELOAD signal is used to reload registers.
    eLOCAL = 0,
    // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
    eMASTER = 1,
  };
  
  // Force Select
  enum class eFORCE_SEL : uint32_t {
    // The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
    eLOCAL = 0,
    // The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER = 1,
    // The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
    eLOCAL_RELOAD = 2,
    // The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_RELOAD = 3,
    // The local sync signal from this submodule is used to force updates.
    eLOCAL_SYNC = 4,
    // The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_SYNC = 5,
    // The external force signal, EXT_FORCE, from outside the PWM module causes updates.
    eEXT_FORCE = 6,
    // The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
    eEXT_SYNC = 7,
  };
  
  // Force Enable
  enum class eFRCEN : uint32_t {
    // Initialization from a FORCE_OUT is disabled.
    eDISABLED = 0,
    // Initialization from a FORCE_OUT is enabled.
    eENABLED = 1,
  };
  
  // Initialization Control Select
  enum class eINIT_SEL : uint32_t {
    // Local sync (PWM_X) causes initialization.
    ePWM_X = 0,
    // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
    eMASTER_RELOAD = 1,
    // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
    eMASTER_SYNC = 2,
    // EXT_SYNC causes initialization.
    eEXT_SYNC = 3,
  };
  
  // Independent or Complementary Pair Operation
  enum class eINDEP : uint32_t {
    // PWM_A and PWM_B form a complementary PWM pair.
    eCOMPLEMENTARY = 0,
    // PWM_A and PWM_B outputs are independent PWMs.
    eINDEPENDENT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Source Select
    eCLK_SEL CLK_SEL : 2;
    // read-write - Reload Source Select
    eRELOAD_SEL RELOAD_SEL : 1;
    // read-write - Force Select
    eFORCE_SEL FORCE_SEL : 3;
    // read-write - Force Initialization
    uint32_t FORCE : 1;
    // read-write - Force Enable
    eFRCEN FRCEN : 1;
    // read-write - Initialization Control Select
    eINIT_SEL INIT_SEL : 2;
    // read-write - PWM_X Initial Value
    uint32_t PWMX_INIT : 1;
    // read-write - PWM45 Initial Value
    uint32_t PWM45_INIT : 1;
    // read-write - PWM23 Initial Value
    uint32_t PWM23_INIT : 1;
    // read-write - Independent or Complementary Pair Operation
    eINDEP INDEP : 1;
    // read-write - Wait Enable
    uint32_t WAITEN : 1;
    // read-write - Debug Enable
    uint32_t DBGEN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CTRL2 &Instance() { return *reinterpret_cast<volatile SM1CTRL2*>(0x40190064); }
};

// Control Register
union SM1CTRL {
  
  // Double Switching Enable
  enum class eDBLEN : uint32_t {
    // Double switching disabled.
    eDISABLED = 0,
    // Double switching enabled.
    eENABLED = 1,
  };
  
  // PWM_X Double Switching Enable
  enum class eDBLX : uint32_t {
    // PWM_X double pulse disabled.
    eDISABLED = 0,
    // PWM_X double pulse enabled.
    eENABLED = 1,
  };
  
  // Load Mode Select
  enum class eLDMOD : uint32_t {
    // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
    eNEXT_PWM_RELOAD = 0,
    // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
    eMTCTRL_LDOK_SET = 1,
  };
  
  // Split the DBLPWM signal to PWM_A and PWM_B
  enum class eSPLIT : uint32_t {
    // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
    eDISABLED = 0,
    // DBLPWM is split to PWM_A and PWM_B.
    eENABLED = 1,
  };
  
  // Prescaler
  enum class ePRSC : uint32_t {
    // Prescaler 1
    eONE = 0,
    // Prescaler 2
    eTWO = 1,
    // Prescaler 4
    eFOUR = 2,
    // Prescaler 8
    eEIGHT = 3,
    // Prescaler 16
    eSIXTEEN = 4,
    // Prescaler 32
    eTHIRTYTWO = 5,
    // Prescaler 64
    eSIXTYFOUR = 6,
    // Prescaler 128
    eHUNDREDTWENTYEIGHT = 7,
  };
  
  // Compare Mode
  enum class eCOMPMODE : uint32_t {
    // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
    eEQUAL_TO = 0,
    // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
    eEQUAL_TO_OR_GREATER_THAN = 1,
  };
  
  // Full Cycle Reload
  enum class eFULL : uint32_t {
    // Full-cycle reloads disabled.
    eDISABLED = 0,
    // Full-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Half Cycle Reload
  enum class eHALF : uint32_t {
    // Half-cycle reloads disabled.
    eDISABLED = 0,
    // Half-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Load Frequency
  enum class eLDFQ : uint32_t {
    // Every PWM opportunity
    eEVERYPWM = 0,
    // Every 2 PWM opportunities
    eEVERY2PWM = 1,
    // Every 3 PWM opportunities
    eEVERY3PWM = 2,
    // Every 4 PWM opportunities
    eEVERY4PWM = 3,
    // Every 5 PWM opportunities
    eEVERY5PWM = 4,
    // Every 6 PWM opportunities
    eEVERY6PWM = 5,
    // Every 7 PWM opportunities
    eEVERY7PWM = 6,
    // Every 8 PWM opportunities
    eEVERY8PWM = 7,
    // Every 9 PWM opportunities
    eEVERY9PWM = 8,
    // Every 10 PWM opportunities
    eEVERY10PWM = 9,
    // Every 11 PWM opportunities
    eEVERY11PWM = 10,
    // Every 12 PWM opportunities
    eEVERY12PWM = 11,
    // Every 13 PWM opportunities
    eEVERY13PWM = 12,
    // Every 14 PWM opportunities
    eEVERY14PWM = 13,
    // Every 15 PWM opportunities
    eEVERY15PWM = 14,
    // Every 16 PWM opportunities
    eEVERY16PWM = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Double Switching Enable
    eDBLEN DBLEN : 1;
    // read-write - PWM_X Double Switching Enable
    eDBLX DBLX : 1;
    // read-write - Load Mode Select
    eLDMOD LDMOD : 1;
    // read-write - Split the DBLPWM signal to PWM_A and PWM_B
    eSPLIT SPLIT : 1;
    // read-write - Prescaler
    ePRSC PRSC : 3;
    // read-write - Compare Mode
    eCOMPMODE COMPMODE : 1;
    // read-only - Deadtime
    uint32_t DT : 2;
    // read-write - Full Cycle Reload
    eFULL FULL : 1;
    // read-write - Half Cycle Reload
    eHALF HALF : 1;
    // read-write - Load Frequency
    eLDFQ LDFQ : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SM1CTRL &Instance() { return *reinterpret_cast<volatile SM1CTRL*>(0x40190066); }
};

// Value Register 0
union SM1VAL0 {
  
  // Bit field definition.
  struct {
    // read-write - Value 0
    uint32_t VAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL0 &Instance() { return *reinterpret_cast<volatile SM1VAL0*>(0x4019006A); }
};

// Fractional Value Register 1
union SM1FRACVAL1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 1
    uint32_t FRACVAL1 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRACVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRACVAL1 &Instance() { return *reinterpret_cast<volatile SM1FRACVAL1*>(0x4019006C); }
};

// Value Register 1
union SM1VAL1 {
  
  // Bit field definition.
  struct {
    // read-write - Value 1
    uint32_t VAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL1 &Instance() { return *reinterpret_cast<volatile SM1VAL1*>(0x4019006E); }
};

// Fractional Value Register 2
union SM1FRACVAL2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 2
    uint32_t FRACVAL2 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRACVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRACVAL2 &Instance() { return *reinterpret_cast<volatile SM1FRACVAL2*>(0x40190070); }
};

// Value Register 2
union SM1VAL2 {
  
  // Bit field definition.
  struct {
    // read-write - Value 2
    uint32_t VAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL2 &Instance() { return *reinterpret_cast<volatile SM1VAL2*>(0x40190072); }
};

// Fractional Value Register 3
union SM1FRACVAL3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 3
    uint32_t FRACVAL3 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRACVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRACVAL3 &Instance() { return *reinterpret_cast<volatile SM1FRACVAL3*>(0x40190074); }
};

// Value Register 3
union SM1VAL3 {
  
  // Bit field definition.
  struct {
    // read-write - Value 3
    uint32_t VAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL3 &Instance() { return *reinterpret_cast<volatile SM1VAL3*>(0x40190076); }
};

// Fractional Value Register 4
union SM1FRACVAL4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 4
    uint32_t FRACVAL4 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRACVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRACVAL4 &Instance() { return *reinterpret_cast<volatile SM1FRACVAL4*>(0x40190078); }
};

// Value Register 4
union SM1VAL4 {
  
  // Bit field definition.
  struct {
    // read-write - Value 4
    uint32_t VAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL4 &Instance() { return *reinterpret_cast<volatile SM1VAL4*>(0x4019007A); }
};

// Fractional Value Register 5
union SM1FRACVAL5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 5
    uint32_t FRACVAL5 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRACVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRACVAL5 &Instance() { return *reinterpret_cast<volatile SM1FRACVAL5*>(0x4019007C); }
};

// Value Register 5
union SM1VAL5 {
  
  // Bit field definition.
  struct {
    // read-write - Value 5
    uint32_t VAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1VAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1VAL5 &Instance() { return *reinterpret_cast<volatile SM1VAL5*>(0x4019007E); }
};

// Fractional Control Register
union SM1FRCTRL {
  
  // Fractional Cycle PWM Period Enable
  enum class eFRAC1_EN : uint32_t {
    // Disable fractional cycle length for the PWM period.
    eDISABLED = 0,
    // Enable fractional cycle length for the PWM period.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_A
  enum class eFRAC23_EN : uint32_t {
    // Disable fractional cycle placement for PWM_A.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_A.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_B
  enum class eFRAC45_EN : uint32_t {
    // Disable fractional cycle placement for PWM_B.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_B.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Fractional Cycle PWM Period Enable
    eFRAC1_EN FRAC1_EN : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_A
    eFRAC23_EN FRAC23_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_B
    eFRAC45_EN FRAC45_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-only - Test Status Bit
    uint32_t TEST : 1;
    uint32_t _reserved_3 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1FRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1FRCTRL &Instance() { return *reinterpret_cast<volatile SM1FRCTRL*>(0x40190080); }
};

// Output Control Register
union SM1OCTRL {
  
  // PWM_X Fault State
  enum class ePWMXFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_B Fault State
  enum class ePWMBFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_A Fault State
  enum class ePWMAFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_X Output Polarity
  enum class ePOLX : uint32_t {
    // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_B Output Polarity
  enum class ePOLB : uint32_t {
    // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_A Output Polarity
  enum class ePOLA : uint32_t {
    // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Fault State
    ePWMXFS PWMXFS : 2;
    // read-write - PWM_B Fault State
    ePWMBFS PWMBFS : 2;
    // read-write - PWM_A Fault State
    ePWMAFS PWMAFS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - PWM_X Output Polarity
    ePOLX POLX : 1;
    // read-write - PWM_B Output Polarity
    ePOLB POLB : 1;
    // read-write - PWM_A Output Polarity
    ePOLA POLA : 1;
    uint32_t _reserved_1 : 2;
    // read-only - PWM_X Input
    uint32_t PWMX_IN : 1;
    // read-only - PWM_B Input
    uint32_t PWMB_IN : 1;
    // read-only - PWM_A Input
    uint32_t PWMA_IN : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1OCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1OCTRL &Instance() { return *reinterpret_cast<volatile SM1OCTRL*>(0x40190082); }
};

// Status Register
union SM1STS {
  
  // Compare Flags
  enum class eCMPF : uint32_t {
    // No compare event has occurred for a particular VALx value.
    eNO_EVENT = 0,
    // A compare event has occurred for a particular VALx value.
    eEVENT = 1,
  };
  
  // Reload Flag
  enum class eRF : uint32_t {
    // No new reload cycle since last STS[RF] clearing
    eNO_FLAG = 0,
    // New reload cycle since last STS[RF] clearing
    eFLAG = 1,
  };
  
  // Reload Error Flag
  enum class eREF : uint32_t {
    // No reload error occurred.
    eNO_FLAG = 0,
    // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
    eFLAG = 1,
  };
  
  // Registers Updated Flag
  enum class eRUF : uint32_t {
    // No register update has occurred since last reload.
    eNO_FLAG = 0,
    // At least one of the double buffered registers has been updated since the last reload.
    eFLAG = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Flags
    eCMPF CMPF : 6;
    // read-write - Capture Flag X0
    uint32_t CFX0 : 1;
    // read-write - Capture Flag X1
    uint32_t CFX1 : 1;
    // read-write - Capture Flag B0
    uint32_t CFB0 : 1;
    // read-write - Capture Flag B1
    uint32_t CFB1 : 1;
    // read-write - Capture Flag A0
    uint32_t CFA0 : 1;
    // read-write - Capture Flag A1
    uint32_t CFA1 : 1;
    // read-write - Reload Flag
    eRF RF : 1;
    // read-write - Reload Error Flag
    eREF REF : 1;
    // read-only - Registers Updated Flag
    eRUF RUF : 1;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1STS &Instance() { return *reinterpret_cast<volatile SM1STS*>(0x40190084); }
};

// Interrupt Enable Register
union SM1INTEN {
  
  // Compare Interrupt Enables
  enum class eCMPIE : uint32_t {
    // The corresponding STS[CMPF] bit will not cause an interrupt request.
    eDISABLED = 0,
    // The corresponding STS[CMPF] bit will cause an interrupt request.
    eENABLED = 1,
  };
  
  // Capture X 0 Interrupt Enable
  enum class eCX0IE : uint32_t {
    // Interrupt request disabled for STS[CFX0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX0].
    eENABLED = 1,
  };
  
  // Capture X 1 Interrupt Enable
  enum class eCX1IE : uint32_t {
    // Interrupt request disabled for STS[CFX1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX1].
    eENABLED = 1,
  };
  
  // Capture B 0 Interrupt Enable
  enum class eCB0IE : uint32_t {
    // Interrupt request disabled for STS[CFB0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB0].
    eENABLED = 1,
  };
  
  // Capture B 1 Interrupt Enable
  enum class eCB1IE : uint32_t {
    // Interrupt request disabled for STS[CFB1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB1].
    eENABLED = 1,
  };
  
  // Capture A 0 Interrupt Enable
  enum class eCA0IE : uint32_t {
    // Interrupt request disabled for STS[CFA0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA0].
    eENABLED = 1,
  };
  
  // Capture A 1 Interrupt Enable
  enum class eCA1IE : uint32_t {
    // Interrupt request disabled for STS[CFA1]
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA1]
    eENABLED = 1,
  };
  
  // Reload Interrupt Enable
  enum class eRIE : uint32_t {
    // STS[RF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[RF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Reload Error Interrupt Enable
  enum class eREIE : uint32_t {
    // STS[REF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[REF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Interrupt Enables
    eCMPIE CMPIE : 6;
    // read-write - Capture X 0 Interrupt Enable
    eCX0IE CX0IE : 1;
    // read-write - Capture X 1 Interrupt Enable
    eCX1IE CX1IE : 1;
    // read-write - Capture B 0 Interrupt Enable
    eCB0IE CB0IE : 1;
    // read-write - Capture B 1 Interrupt Enable
    eCB1IE CB1IE : 1;
    // read-write - Capture A 0 Interrupt Enable
    eCA0IE CA0IE : 1;
    // read-write - Capture A 1 Interrupt Enable
    eCA1IE CA1IE : 1;
    // read-write - Reload Interrupt Enable
    eRIE RIE : 1;
    // read-write - Reload Error Interrupt Enable
    eREIE REIE : 1;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1INTEN &Instance() { return *reinterpret_cast<volatile SM1INTEN*>(0x40190086); }
};

// DMA Enable Register
union SM1DMAEN {
  
  // Capture DMA Enable Source Select
  enum class eCAPTDE : uint32_t {
    // Read DMA requests disabled.
    eDISABLED = 0,
    // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
    eEXCEEDFIFO = 1,
    // A local synchronization (VAL1 matches counter) sets the read DMA request.
    eLOCAL_SYNC = 2,
    // A local reload (STS[RF] being set) sets the read DMA request.
    eLOCAL_RELOAD = 3,
  };
  
  // FIFO Watermark AND Control
  enum class eFAND : uint32_t {
    // Selected FIFO watermarks are OR'ed together.
    eOR = 0,
    // Selected FIFO watermarks are AND'ed together.
    eAND = 1,
  };
  
  // Value Registers DMA Enable
  enum class eVALDE : uint32_t {
    // DMA write requests disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Capture X0 FIFO DMA Enable
    uint32_t CX0DE : 1;
    // read-write - Capture X1 FIFO DMA Enable
    uint32_t CX1DE : 1;
    // read-write - Capture B0 FIFO DMA Enable
    uint32_t CB0DE : 1;
    // read-write - Capture B1 FIFO DMA Enable
    uint32_t CB1DE : 1;
    // read-write - Capture A0 FIFO DMA Enable
    uint32_t CA0DE : 1;
    // read-write - Capture A1 FIFO DMA Enable
    uint32_t CA1DE : 1;
    // read-write - Capture DMA Enable Source Select
    eCAPTDE CAPTDE : 2;
    // read-write - FIFO Watermark AND Control
    eFAND FAND : 1;
    // read-write - Value Registers DMA Enable
    eVALDE VALDE : 1;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1DMAEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1DMAEN &Instance() { return *reinterpret_cast<volatile SM1DMAEN*>(0x40190088); }
};

// Output Trigger Control Register
union SM1TCTRL {
  
  // Output Trigger Enables
  enum class eOUT_TRIG_EN : uint32_t {
    // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
    eVAL0 = 1,
  };
  
  // Trigger Frequency
  enum class eTRGFRQ : uint32_t {
    // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eEVERYPWM = 0,
    // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eFINALPWM = 1,
  };
  
  // Output Trigger 1 Source Select
  enum class ePWBOT1 : uint32_t {
    // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
    ePWM_OUT_TRIG1_SIGNAL = 0,
    // Route the PWM_B output to the PWM_OUT_TRIG1 port.
    ePWMB_OUTPUT = 1,
  };
  
  // Output Trigger 0 Source Select
  enum class ePWAOT0 : uint32_t {
    // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
    ePWM_OUT_TRIG0_SIGNAL = 0,
    // Route the PWM_A output to the PWM_OUT_TRIG0 port.
    ePWMA_OUTPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Trigger Enables
    eOUT_TRIG_EN OUT_TRIG_EN : 6;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger Frequency
    eTRGFRQ TRGFRQ : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Output Trigger 1 Source Select
    ePWBOT1 PWBOT1 : 1;
    // read-write - Output Trigger 0 Source Select
    ePWAOT0 PWAOT0 : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1TCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1TCTRL &Instance() { return *reinterpret_cast<volatile SM1TCTRL*>(0x4019008A); }
};

// Fault Disable Mapping Register 0
union SM1DISMAP0 {
  
  // Bit field definition.
  struct {
    // read-write - PWM_A Fault Disable Mask 0
    uint32_t DIS0A : 4;
    // read-write - PWM_B Fault Disable Mask 0
    uint32_t DIS0B : 4;
    // read-write - PWM_X Fault Disable Mask 0
    uint32_t DIS0X : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1DISMAP0() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile SM1DISMAP0 &Instance() { return *reinterpret_cast<volatile SM1DISMAP0*>(0x4019008C); }
};

// Deadtime Count Register 0
union SM1DTCNT0 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT0
    uint32_t DTCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1DTCNT0() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM1DTCNT0 &Instance() { return *reinterpret_cast<volatile SM1DTCNT0*>(0x40190090); }
};

// Deadtime Count Register 1
union SM1DTCNT1 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT1
    uint32_t DTCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1DTCNT1() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM1DTCNT1 &Instance() { return *reinterpret_cast<volatile SM1DTCNT1*>(0x40190092); }
};

// Capture Control A Register
union SM1CAPTCTRLA {
  
  // Arm A
  enum class eARMA : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode A
  enum class eONESHOTA : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge A 0
  enum class eEDGA0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge A 1
  enum class eEDGA1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select A
  enum class eINP_SELA : uint32_t {
    // Raw PWM_A input signal selected as source.
    ePWM_A = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter A Enable
  enum class eEDGCNTA_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm A
    eARMA ARMA : 1;
    // read-write - One Shot Mode A
    eONESHOTA ONESHOTA : 1;
    // read-write - Edge A 0
    eEDGA0 EDGA0 : 2;
    // read-write - Edge A 1
    eEDGA1 EDGA1 : 2;
    // read-write - Input Select A
    eINP_SELA INP_SELA : 1;
    // read-write - Edge Counter A Enable
    eEDGCNTA_EN EDGCNTA_EN : 1;
    // read-write - Capture A FIFOs Water Mark
    uint32_t CFAWM : 2;
    // read-only - Capture A0 FIFO Word Count
    uint32_t CA0CNT : 3;
    // read-only - Capture A1 FIFO Word Count
    uint32_t CA1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCTRLA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCTRLA &Instance() { return *reinterpret_cast<volatile SM1CAPTCTRLA*>(0x40190094); }
};

// Capture Compare A Register
union SM1CAPTCOMPA {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare A
    uint32_t EDGCMPA : 8;
    // read-only - Edge Counter A
    uint32_t EDGCNTA : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCOMPA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCOMPA &Instance() { return *reinterpret_cast<volatile SM1CAPTCOMPA*>(0x40190096); }
};

// Capture Control B Register
union SM1CAPTCTRLB {
  
  // Arm B
  enum class eARMB : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode B
  enum class eONESHOTB : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge B 0
  enum class eEDGB0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge B 1
  enum class eEDGB1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select B
  enum class eINP_SELB : uint32_t {
    // Raw PWM_B input signal selected as source.
    ePWM_B = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter B Enable
  enum class eEDGCNTB_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm B
    eARMB ARMB : 1;
    // read-write - One Shot Mode B
    eONESHOTB ONESHOTB : 1;
    // read-write - Edge B 0
    eEDGB0 EDGB0 : 2;
    // read-write - Edge B 1
    eEDGB1 EDGB1 : 2;
    // read-write - Input Select B
    eINP_SELB INP_SELB : 1;
    // read-write - Edge Counter B Enable
    eEDGCNTB_EN EDGCNTB_EN : 1;
    // read-write - Capture B FIFOs Water Mark
    uint32_t CFBWM : 2;
    // read-only - Capture B0 FIFO Word Count
    uint32_t CB0CNT : 3;
    // read-only - Capture B1 FIFO Word Count
    uint32_t CB1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCTRLB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCTRLB &Instance() { return *reinterpret_cast<volatile SM1CAPTCTRLB*>(0x40190098); }
};

// Capture Compare B Register
union SM1CAPTCOMPB {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare B
    uint32_t EDGCMPB : 8;
    // read-only - Edge Counter B
    uint32_t EDGCNTB : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCOMPB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCOMPB &Instance() { return *reinterpret_cast<volatile SM1CAPTCOMPB*>(0x4019009A); }
};

// Capture Control X Register
union SM1CAPTCTRLX {
  
  // Arm X
  enum class eARMX : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode Aux
  enum class eONESHOTX : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge X 0
  enum class eEDGX0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge X 1
  enum class eEDGX1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select X
  enum class eINP_SELX : uint32_t {
    // Raw PWM_X input signal selected as source.
    ePWM_X = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter X Enable
  enum class eEDGCNTX_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm X
    eARMX ARMX : 1;
    // read-write - One Shot Mode Aux
    eONESHOTX ONESHOTX : 1;
    // read-write - Edge X 0
    eEDGX0 EDGX0 : 2;
    // read-write - Edge X 1
    eEDGX1 EDGX1 : 2;
    // read-write - Input Select X
    eINP_SELX INP_SELX : 1;
    // read-write - Edge Counter X Enable
    eEDGCNTX_EN EDGCNTX_EN : 1;
    // read-write - Capture X FIFOs Water Mark
    uint32_t CFXWM : 2;
    // read-only - Capture X0 FIFO Word Count
    uint32_t CX0CNT : 3;
    // read-only - Capture X1 FIFO Word Count
    uint32_t CX1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCTRLX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCTRLX &Instance() { return *reinterpret_cast<volatile SM1CAPTCTRLX*>(0x4019009C); }
};

// Capture Compare X Register
union SM1CAPTCOMPX {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare X
    uint32_t EDGCMPX : 8;
    // read-only - Edge Counter X
    uint32_t EDGCNTX : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CAPTCOMPX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CAPTCOMPX &Instance() { return *reinterpret_cast<volatile SM1CAPTCOMPX*>(0x4019009E); }
};

// Capture Value 0 Register
union SM1CVAL0 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0
    uint32_t CAPTVAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL0 &Instance() { return *reinterpret_cast<volatile SM1CVAL0*>(0x401900A0); }
};

// Capture Value 0 Cycle Register
union SM1CVAL0CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0 Cycle
    uint32_t CVAL0CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL0CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL0CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL0CYC*>(0x401900A2); }
};

// Capture Value 1 Register
union SM1CVAL1 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1
    uint32_t CAPTVAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL1 &Instance() { return *reinterpret_cast<volatile SM1CVAL1*>(0x401900A4); }
};

// Capture Value 1 Cycle Register
union SM1CVAL1CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1 Cycle
    uint32_t CVAL1CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL1CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL1CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL1CYC*>(0x401900A6); }
};

// Capture Value 2 Register
union SM1CVAL2 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2
    uint32_t CAPTVAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL2 &Instance() { return *reinterpret_cast<volatile SM1CVAL2*>(0x401900A8); }
};

// Capture Value 2 Cycle Register
union SM1CVAL2CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2 Cycle
    uint32_t CVAL2CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL2CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL2CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL2CYC*>(0x401900AA); }
};

// Capture Value 3 Register
union SM1CVAL3 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3
    uint32_t CAPTVAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL3 &Instance() { return *reinterpret_cast<volatile SM1CVAL3*>(0x401900AC); }
};

// Capture Value 3 Cycle Register
union SM1CVAL3CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3 Cycle
    uint32_t CVAL3CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL3CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL3CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL3CYC*>(0x401900AE); }
};

// Capture Value 4 Register
union SM1CVAL4 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4
    uint32_t CAPTVAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL4 &Instance() { return *reinterpret_cast<volatile SM1CVAL4*>(0x401900B0); }
};

// Capture Value 4 Cycle Register
union SM1CVAL4CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4 Cycle
    uint32_t CVAL4CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL4CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL4CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL4CYC*>(0x401900B2); }
};

// Capture Value 5 Register
union SM1CVAL5 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5
    uint32_t CAPTVAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL5 &Instance() { return *reinterpret_cast<volatile SM1CVAL5*>(0x401900B4); }
};

// Capture Value 5 Cycle Register
union SM1CVAL5CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5 Cycle
    uint32_t CVAL5CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM1CVAL5CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM1CVAL5CYC &Instance() { return *reinterpret_cast<volatile SM1CVAL5CYC*>(0x401900B6); }
};

// Counter Register
union SM2CNT {
  
  // Bit field definition.
  struct {
    // read-only - Counter Register Bits
    uint32_t CNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CNT &Instance() { return *reinterpret_cast<volatile SM2CNT*>(0x401900C0); }
};

// Initial Count Register
union SM2INIT {
  
  // Bit field definition.
  struct {
    // read-write - Initial Count Register Bits
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2INIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2INIT &Instance() { return *reinterpret_cast<volatile SM2INIT*>(0x401900C2); }
};

// Control 2 Register
union SM2CTRL2 {
  
  // Clock Source Select
  enum class eCLK_SEL : uint32_t {
    // The IPBus clock is used as the clock for the local prescaler and counter.
    eIPBUS = 0,
    // EXT_CLK is used as the clock for the local prescaler and counter.
    eEXT_CLK = 1,
    // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
    eAUX_CLK = 2,
  };
  
  // Reload Source Select
  enum class eRELOAD_SEL : uint32_t {
    // The local RELOAD signal is used to reload registers.
    eLOCAL = 0,
    // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
    eMASTER = 1,
  };
  
  // Force Select
  enum class eFORCE_SEL : uint32_t {
    // The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
    eLOCAL = 0,
    // The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER = 1,
    // The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
    eLOCAL_RELOAD = 2,
    // The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_RELOAD = 3,
    // The local sync signal from this submodule is used to force updates.
    eLOCAL_SYNC = 4,
    // The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_SYNC = 5,
    // The external force signal, EXT_FORCE, from outside the PWM module causes updates.
    eEXT_FORCE = 6,
    // The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
    eEXT_SYNC = 7,
  };
  
  // Force Enable
  enum class eFRCEN : uint32_t {
    // Initialization from a FORCE_OUT is disabled.
    eDISABLED = 0,
    // Initialization from a FORCE_OUT is enabled.
    eENABLED = 1,
  };
  
  // Initialization Control Select
  enum class eINIT_SEL : uint32_t {
    // Local sync (PWM_X) causes initialization.
    ePWM_X = 0,
    // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
    eMASTER_RELOAD = 1,
    // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
    eMASTER_SYNC = 2,
    // EXT_SYNC causes initialization.
    eEXT_SYNC = 3,
  };
  
  // Independent or Complementary Pair Operation
  enum class eINDEP : uint32_t {
    // PWM_A and PWM_B form a complementary PWM pair.
    eCOMPLEMENTARY = 0,
    // PWM_A and PWM_B outputs are independent PWMs.
    eINDEPENDENT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Source Select
    eCLK_SEL CLK_SEL : 2;
    // read-write - Reload Source Select
    eRELOAD_SEL RELOAD_SEL : 1;
    // read-write - Force Select
    eFORCE_SEL FORCE_SEL : 3;
    // read-write - Force Initialization
    uint32_t FORCE : 1;
    // read-write - Force Enable
    eFRCEN FRCEN : 1;
    // read-write - Initialization Control Select
    eINIT_SEL INIT_SEL : 2;
    // read-write - PWM_X Initial Value
    uint32_t PWMX_INIT : 1;
    // read-write - PWM45 Initial Value
    uint32_t PWM45_INIT : 1;
    // read-write - PWM23 Initial Value
    uint32_t PWM23_INIT : 1;
    // read-write - Independent or Complementary Pair Operation
    eINDEP INDEP : 1;
    // read-write - Wait Enable
    uint32_t WAITEN : 1;
    // read-write - Debug Enable
    uint32_t DBGEN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CTRL2 &Instance() { return *reinterpret_cast<volatile SM2CTRL2*>(0x401900C4); }
};

// Control Register
union SM2CTRL {
  
  // Double Switching Enable
  enum class eDBLEN : uint32_t {
    // Double switching disabled.
    eDISABLED = 0,
    // Double switching enabled.
    eENABLED = 1,
  };
  
  // PWM_X Double Switching Enable
  enum class eDBLX : uint32_t {
    // PWM_X double pulse disabled.
    eDISABLED = 0,
    // PWM_X double pulse enabled.
    eENABLED = 1,
  };
  
  // Load Mode Select
  enum class eLDMOD : uint32_t {
    // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
    eNEXT_PWM_RELOAD = 0,
    // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
    eMTCTRL_LDOK_SET = 1,
  };
  
  // Split the DBLPWM signal to PWM_A and PWM_B
  enum class eSPLIT : uint32_t {
    // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
    eDISABLED = 0,
    // DBLPWM is split to PWM_A and PWM_B.
    eENABLED = 1,
  };
  
  // Prescaler
  enum class ePRSC : uint32_t {
    // Prescaler 1
    eONE = 0,
    // Prescaler 2
    eTWO = 1,
    // Prescaler 4
    eFOUR = 2,
    // Prescaler 8
    eEIGHT = 3,
    // Prescaler 16
    eSIXTEEN = 4,
    // Prescaler 32
    eTHIRTYTWO = 5,
    // Prescaler 64
    eSIXTYFOUR = 6,
    // Prescaler 128
    eHUNDREDTWENTYEIGHT = 7,
  };
  
  // Compare Mode
  enum class eCOMPMODE : uint32_t {
    // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
    eEQUAL_TO = 0,
    // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
    eEQUAL_TO_OR_GREATER_THAN = 1,
  };
  
  // Full Cycle Reload
  enum class eFULL : uint32_t {
    // Full-cycle reloads disabled.
    eDISABLED = 0,
    // Full-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Half Cycle Reload
  enum class eHALF : uint32_t {
    // Half-cycle reloads disabled.
    eDISABLED = 0,
    // Half-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Load Frequency
  enum class eLDFQ : uint32_t {
    // Every PWM opportunity
    eEVERYPWM = 0,
    // Every 2 PWM opportunities
    eEVERY2PWM = 1,
    // Every 3 PWM opportunities
    eEVERY3PWM = 2,
    // Every 4 PWM opportunities
    eEVERY4PWM = 3,
    // Every 5 PWM opportunities
    eEVERY5PWM = 4,
    // Every 6 PWM opportunities
    eEVERY6PWM = 5,
    // Every 7 PWM opportunities
    eEVERY7PWM = 6,
    // Every 8 PWM opportunities
    eEVERY8PWM = 7,
    // Every 9 PWM opportunities
    eEVERY9PWM = 8,
    // Every 10 PWM opportunities
    eEVERY10PWM = 9,
    // Every 11 PWM opportunities
    eEVERY11PWM = 10,
    // Every 12 PWM opportunities
    eEVERY12PWM = 11,
    // Every 13 PWM opportunities
    eEVERY13PWM = 12,
    // Every 14 PWM opportunities
    eEVERY14PWM = 13,
    // Every 15 PWM opportunities
    eEVERY15PWM = 14,
    // Every 16 PWM opportunities
    eEVERY16PWM = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Double Switching Enable
    eDBLEN DBLEN : 1;
    // read-write - PWM_X Double Switching Enable
    eDBLX DBLX : 1;
    // read-write - Load Mode Select
    eLDMOD LDMOD : 1;
    // read-write - Split the DBLPWM signal to PWM_A and PWM_B
    eSPLIT SPLIT : 1;
    // read-write - Prescaler
    ePRSC PRSC : 3;
    // read-write - Compare Mode
    eCOMPMODE COMPMODE : 1;
    // read-only - Deadtime
    uint32_t DT : 2;
    // read-write - Full Cycle Reload
    eFULL FULL : 1;
    // read-write - Half Cycle Reload
    eHALF HALF : 1;
    // read-write - Load Frequency
    eLDFQ LDFQ : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SM2CTRL &Instance() { return *reinterpret_cast<volatile SM2CTRL*>(0x401900C6); }
};

// Value Register 0
union SM2VAL0 {
  
  // Bit field definition.
  struct {
    // read-write - Value 0
    uint32_t VAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL0 &Instance() { return *reinterpret_cast<volatile SM2VAL0*>(0x401900CA); }
};

// Fractional Value Register 1
union SM2FRACVAL1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 1
    uint32_t FRACVAL1 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRACVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRACVAL1 &Instance() { return *reinterpret_cast<volatile SM2FRACVAL1*>(0x401900CC); }
};

// Value Register 1
union SM2VAL1 {
  
  // Bit field definition.
  struct {
    // read-write - Value 1
    uint32_t VAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL1 &Instance() { return *reinterpret_cast<volatile SM2VAL1*>(0x401900CE); }
};

// Fractional Value Register 2
union SM2FRACVAL2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 2
    uint32_t FRACVAL2 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRACVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRACVAL2 &Instance() { return *reinterpret_cast<volatile SM2FRACVAL2*>(0x401900D0); }
};

// Value Register 2
union SM2VAL2 {
  
  // Bit field definition.
  struct {
    // read-write - Value 2
    uint32_t VAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL2 &Instance() { return *reinterpret_cast<volatile SM2VAL2*>(0x401900D2); }
};

// Fractional Value Register 3
union SM2FRACVAL3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 3
    uint32_t FRACVAL3 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRACVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRACVAL3 &Instance() { return *reinterpret_cast<volatile SM2FRACVAL3*>(0x401900D4); }
};

// Value Register 3
union SM2VAL3 {
  
  // Bit field definition.
  struct {
    // read-write - Value 3
    uint32_t VAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL3 &Instance() { return *reinterpret_cast<volatile SM2VAL3*>(0x401900D6); }
};

// Fractional Value Register 4
union SM2FRACVAL4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 4
    uint32_t FRACVAL4 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRACVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRACVAL4 &Instance() { return *reinterpret_cast<volatile SM2FRACVAL4*>(0x401900D8); }
};

// Value Register 4
union SM2VAL4 {
  
  // Bit field definition.
  struct {
    // read-write - Value 4
    uint32_t VAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL4 &Instance() { return *reinterpret_cast<volatile SM2VAL4*>(0x401900DA); }
};

// Fractional Value Register 5
union SM2FRACVAL5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 5
    uint32_t FRACVAL5 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRACVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRACVAL5 &Instance() { return *reinterpret_cast<volatile SM2FRACVAL5*>(0x401900DC); }
};

// Value Register 5
union SM2VAL5 {
  
  // Bit field definition.
  struct {
    // read-write - Value 5
    uint32_t VAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2VAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2VAL5 &Instance() { return *reinterpret_cast<volatile SM2VAL5*>(0x401900DE); }
};

// Fractional Control Register
union SM2FRCTRL {
  
  // Fractional Cycle PWM Period Enable
  enum class eFRAC1_EN : uint32_t {
    // Disable fractional cycle length for the PWM period.
    eDISABLED = 0,
    // Enable fractional cycle length for the PWM period.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_A
  enum class eFRAC23_EN : uint32_t {
    // Disable fractional cycle placement for PWM_A.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_A.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_B
  enum class eFRAC45_EN : uint32_t {
    // Disable fractional cycle placement for PWM_B.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_B.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Fractional Cycle PWM Period Enable
    eFRAC1_EN FRAC1_EN : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_A
    eFRAC23_EN FRAC23_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_B
    eFRAC45_EN FRAC45_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-only - Test Status Bit
    uint32_t TEST : 1;
    uint32_t _reserved_3 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2FRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2FRCTRL &Instance() { return *reinterpret_cast<volatile SM2FRCTRL*>(0x401900E0); }
};

// Output Control Register
union SM2OCTRL {
  
  // PWM_X Fault State
  enum class ePWMXFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_B Fault State
  enum class ePWMBFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_A Fault State
  enum class ePWMAFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_X Output Polarity
  enum class ePOLX : uint32_t {
    // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_B Output Polarity
  enum class ePOLB : uint32_t {
    // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_A Output Polarity
  enum class ePOLA : uint32_t {
    // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Fault State
    ePWMXFS PWMXFS : 2;
    // read-write - PWM_B Fault State
    ePWMBFS PWMBFS : 2;
    // read-write - PWM_A Fault State
    ePWMAFS PWMAFS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - PWM_X Output Polarity
    ePOLX POLX : 1;
    // read-write - PWM_B Output Polarity
    ePOLB POLB : 1;
    // read-write - PWM_A Output Polarity
    ePOLA POLA : 1;
    uint32_t _reserved_1 : 2;
    // read-only - PWM_X Input
    uint32_t PWMX_IN : 1;
    // read-only - PWM_B Input
    uint32_t PWMB_IN : 1;
    // read-only - PWM_A Input
    uint32_t PWMA_IN : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2OCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2OCTRL &Instance() { return *reinterpret_cast<volatile SM2OCTRL*>(0x401900E2); }
};

// Status Register
union SM2STS {
  
  // Compare Flags
  enum class eCMPF : uint32_t {
    // No compare event has occurred for a particular VALx value.
    eNO_EVENT = 0,
    // A compare event has occurred for a particular VALx value.
    eEVENT = 1,
  };
  
  // Reload Flag
  enum class eRF : uint32_t {
    // No new reload cycle since last STS[RF] clearing
    eNO_FLAG = 0,
    // New reload cycle since last STS[RF] clearing
    eFLAG = 1,
  };
  
  // Reload Error Flag
  enum class eREF : uint32_t {
    // No reload error occurred.
    eNO_FLAG = 0,
    // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
    eFLAG = 1,
  };
  
  // Registers Updated Flag
  enum class eRUF : uint32_t {
    // No register update has occurred since last reload.
    eNO_FLAG = 0,
    // At least one of the double buffered registers has been updated since the last reload.
    eFLAG = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Flags
    eCMPF CMPF : 6;
    // read-write - Capture Flag X0
    uint32_t CFX0 : 1;
    // read-write - Capture Flag X1
    uint32_t CFX1 : 1;
    // read-write - Capture Flag B0
    uint32_t CFB0 : 1;
    // read-write - Capture Flag B1
    uint32_t CFB1 : 1;
    // read-write - Capture Flag A0
    uint32_t CFA0 : 1;
    // read-write - Capture Flag A1
    uint32_t CFA1 : 1;
    // read-write - Reload Flag
    eRF RF : 1;
    // read-write - Reload Error Flag
    eREF REF : 1;
    // read-only - Registers Updated Flag
    eRUF RUF : 1;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2STS &Instance() { return *reinterpret_cast<volatile SM2STS*>(0x401900E4); }
};

// Interrupt Enable Register
union SM2INTEN {
  
  // Compare Interrupt Enables
  enum class eCMPIE : uint32_t {
    // The corresponding STS[CMPF] bit will not cause an interrupt request.
    eDISABLED = 0,
    // The corresponding STS[CMPF] bit will cause an interrupt request.
    eENABLED = 1,
  };
  
  // Capture X 0 Interrupt Enable
  enum class eCX0IE : uint32_t {
    // Interrupt request disabled for STS[CFX0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX0].
    eENABLED = 1,
  };
  
  // Capture X 1 Interrupt Enable
  enum class eCX1IE : uint32_t {
    // Interrupt request disabled for STS[CFX1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX1].
    eENABLED = 1,
  };
  
  // Capture B 0 Interrupt Enable
  enum class eCB0IE : uint32_t {
    // Interrupt request disabled for STS[CFB0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB0].
    eENABLED = 1,
  };
  
  // Capture B 1 Interrupt Enable
  enum class eCB1IE : uint32_t {
    // Interrupt request disabled for STS[CFB1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB1].
    eENABLED = 1,
  };
  
  // Capture A 0 Interrupt Enable
  enum class eCA0IE : uint32_t {
    // Interrupt request disabled for STS[CFA0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA0].
    eENABLED = 1,
  };
  
  // Capture A 1 Interrupt Enable
  enum class eCA1IE : uint32_t {
    // Interrupt request disabled for STS[CFA1]
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA1]
    eENABLED = 1,
  };
  
  // Reload Interrupt Enable
  enum class eRIE : uint32_t {
    // STS[RF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[RF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Reload Error Interrupt Enable
  enum class eREIE : uint32_t {
    // STS[REF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[REF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Interrupt Enables
    eCMPIE CMPIE : 6;
    // read-write - Capture X 0 Interrupt Enable
    eCX0IE CX0IE : 1;
    // read-write - Capture X 1 Interrupt Enable
    eCX1IE CX1IE : 1;
    // read-write - Capture B 0 Interrupt Enable
    eCB0IE CB0IE : 1;
    // read-write - Capture B 1 Interrupt Enable
    eCB1IE CB1IE : 1;
    // read-write - Capture A 0 Interrupt Enable
    eCA0IE CA0IE : 1;
    // read-write - Capture A 1 Interrupt Enable
    eCA1IE CA1IE : 1;
    // read-write - Reload Interrupt Enable
    eRIE RIE : 1;
    // read-write - Reload Error Interrupt Enable
    eREIE REIE : 1;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2INTEN &Instance() { return *reinterpret_cast<volatile SM2INTEN*>(0x401900E6); }
};

// DMA Enable Register
union SM2DMAEN {
  
  // Capture DMA Enable Source Select
  enum class eCAPTDE : uint32_t {
    // Read DMA requests disabled.
    eDISABLED = 0,
    // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
    eEXCEEDFIFO = 1,
    // A local synchronization (VAL1 matches counter) sets the read DMA request.
    eLOCAL_SYNC = 2,
    // A local reload (STS[RF] being set) sets the read DMA request.
    eLOCAL_RELOAD = 3,
  };
  
  // FIFO Watermark AND Control
  enum class eFAND : uint32_t {
    // Selected FIFO watermarks are OR'ed together.
    eOR = 0,
    // Selected FIFO watermarks are AND'ed together.
    eAND = 1,
  };
  
  // Value Registers DMA Enable
  enum class eVALDE : uint32_t {
    // DMA write requests disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Capture X0 FIFO DMA Enable
    uint32_t CX0DE : 1;
    // read-write - Capture X1 FIFO DMA Enable
    uint32_t CX1DE : 1;
    // read-write - Capture B0 FIFO DMA Enable
    uint32_t CB0DE : 1;
    // read-write - Capture B1 FIFO DMA Enable
    uint32_t CB1DE : 1;
    // read-write - Capture A0 FIFO DMA Enable
    uint32_t CA0DE : 1;
    // read-write - Capture A1 FIFO DMA Enable
    uint32_t CA1DE : 1;
    // read-write - Capture DMA Enable Source Select
    eCAPTDE CAPTDE : 2;
    // read-write - FIFO Watermark AND Control
    eFAND FAND : 1;
    // read-write - Value Registers DMA Enable
    eVALDE VALDE : 1;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2DMAEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2DMAEN &Instance() { return *reinterpret_cast<volatile SM2DMAEN*>(0x401900E8); }
};

// Output Trigger Control Register
union SM2TCTRL {
  
  // Output Trigger Enables
  enum class eOUT_TRIG_EN : uint32_t {
    // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
    eVAL0 = 1,
  };
  
  // Trigger Frequency
  enum class eTRGFRQ : uint32_t {
    // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eEVERYPWM = 0,
    // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eFINALPWM = 1,
  };
  
  // Output Trigger 1 Source Select
  enum class ePWBOT1 : uint32_t {
    // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
    ePWM_OUT_TRIG1_SIGNAL = 0,
    // Route the PWM_B output to the PWM_OUT_TRIG1 port.
    ePWMB_OUTPUT = 1,
  };
  
  // Output Trigger 0 Source Select
  enum class ePWAOT0 : uint32_t {
    // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
    ePWM_OUT_TRIG0_SIGNAL = 0,
    // Route the PWM_A output to the PWM_OUT_TRIG0 port.
    ePWMA_OUTPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Trigger Enables
    eOUT_TRIG_EN OUT_TRIG_EN : 6;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger Frequency
    eTRGFRQ TRGFRQ : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Output Trigger 1 Source Select
    ePWBOT1 PWBOT1 : 1;
    // read-write - Output Trigger 0 Source Select
    ePWAOT0 PWAOT0 : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2TCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2TCTRL &Instance() { return *reinterpret_cast<volatile SM2TCTRL*>(0x401900EA); }
};

// Fault Disable Mapping Register 0
union SM2DISMAP0 {
  
  // Bit field definition.
  struct {
    // read-write - PWM_A Fault Disable Mask 0
    uint32_t DIS0A : 4;
    // read-write - PWM_B Fault Disable Mask 0
    uint32_t DIS0B : 4;
    // read-write - PWM_X Fault Disable Mask 0
    uint32_t DIS0X : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2DISMAP0() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile SM2DISMAP0 &Instance() { return *reinterpret_cast<volatile SM2DISMAP0*>(0x401900EC); }
};

// Deadtime Count Register 0
union SM2DTCNT0 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT0
    uint32_t DTCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2DTCNT0() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM2DTCNT0 &Instance() { return *reinterpret_cast<volatile SM2DTCNT0*>(0x401900F0); }
};

// Deadtime Count Register 1
union SM2DTCNT1 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT1
    uint32_t DTCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2DTCNT1() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM2DTCNT1 &Instance() { return *reinterpret_cast<volatile SM2DTCNT1*>(0x401900F2); }
};

// Capture Control A Register
union SM2CAPTCTRLA {
  
  // Arm A
  enum class eARMA : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode A
  enum class eONESHOTA : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge A 0
  enum class eEDGA0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge A 1
  enum class eEDGA1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select A
  enum class eINP_SELA : uint32_t {
    // Raw PWM_A input signal selected as source.
    ePWM_A = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter A Enable
  enum class eEDGCNTA_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm A
    eARMA ARMA : 1;
    // read-write - One Shot Mode A
    eONESHOTA ONESHOTA : 1;
    // read-write - Edge A 0
    eEDGA0 EDGA0 : 2;
    // read-write - Edge A 1
    eEDGA1 EDGA1 : 2;
    // read-write - Input Select A
    eINP_SELA INP_SELA : 1;
    // read-write - Edge Counter A Enable
    eEDGCNTA_EN EDGCNTA_EN : 1;
    // read-write - Capture A FIFOs Water Mark
    uint32_t CFAWM : 2;
    // read-only - Capture A0 FIFO Word Count
    uint32_t CA0CNT : 3;
    // read-only - Capture A1 FIFO Word Count
    uint32_t CA1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCTRLA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCTRLA &Instance() { return *reinterpret_cast<volatile SM2CAPTCTRLA*>(0x401900F4); }
};

// Capture Compare A Register
union SM2CAPTCOMPA {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare A
    uint32_t EDGCMPA : 8;
    // read-only - Edge Counter A
    uint32_t EDGCNTA : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCOMPA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCOMPA &Instance() { return *reinterpret_cast<volatile SM2CAPTCOMPA*>(0x401900F6); }
};

// Capture Control B Register
union SM2CAPTCTRLB {
  
  // Arm B
  enum class eARMB : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode B
  enum class eONESHOTB : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge B 0
  enum class eEDGB0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge B 1
  enum class eEDGB1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select B
  enum class eINP_SELB : uint32_t {
    // Raw PWM_B input signal selected as source.
    ePWM_B = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter B Enable
  enum class eEDGCNTB_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm B
    eARMB ARMB : 1;
    // read-write - One Shot Mode B
    eONESHOTB ONESHOTB : 1;
    // read-write - Edge B 0
    eEDGB0 EDGB0 : 2;
    // read-write - Edge B 1
    eEDGB1 EDGB1 : 2;
    // read-write - Input Select B
    eINP_SELB INP_SELB : 1;
    // read-write - Edge Counter B Enable
    eEDGCNTB_EN EDGCNTB_EN : 1;
    // read-write - Capture B FIFOs Water Mark
    uint32_t CFBWM : 2;
    // read-only - Capture B0 FIFO Word Count
    uint32_t CB0CNT : 3;
    // read-only - Capture B1 FIFO Word Count
    uint32_t CB1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCTRLB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCTRLB &Instance() { return *reinterpret_cast<volatile SM2CAPTCTRLB*>(0x401900F8); }
};

// Capture Compare B Register
union SM2CAPTCOMPB {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare B
    uint32_t EDGCMPB : 8;
    // read-only - Edge Counter B
    uint32_t EDGCNTB : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCOMPB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCOMPB &Instance() { return *reinterpret_cast<volatile SM2CAPTCOMPB*>(0x401900FA); }
};

// Capture Control X Register
union SM2CAPTCTRLX {
  
  // Arm X
  enum class eARMX : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode Aux
  enum class eONESHOTX : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge X 0
  enum class eEDGX0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge X 1
  enum class eEDGX1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select X
  enum class eINP_SELX : uint32_t {
    // Raw PWM_X input signal selected as source.
    ePWM_X = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter X Enable
  enum class eEDGCNTX_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm X
    eARMX ARMX : 1;
    // read-write - One Shot Mode Aux
    eONESHOTX ONESHOTX : 1;
    // read-write - Edge X 0
    eEDGX0 EDGX0 : 2;
    // read-write - Edge X 1
    eEDGX1 EDGX1 : 2;
    // read-write - Input Select X
    eINP_SELX INP_SELX : 1;
    // read-write - Edge Counter X Enable
    eEDGCNTX_EN EDGCNTX_EN : 1;
    // read-write - Capture X FIFOs Water Mark
    uint32_t CFXWM : 2;
    // read-only - Capture X0 FIFO Word Count
    uint32_t CX0CNT : 3;
    // read-only - Capture X1 FIFO Word Count
    uint32_t CX1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCTRLX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCTRLX &Instance() { return *reinterpret_cast<volatile SM2CAPTCTRLX*>(0x401900FC); }
};

// Capture Compare X Register
union SM2CAPTCOMPX {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare X
    uint32_t EDGCMPX : 8;
    // read-only - Edge Counter X
    uint32_t EDGCNTX : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CAPTCOMPX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CAPTCOMPX &Instance() { return *reinterpret_cast<volatile SM2CAPTCOMPX*>(0x401900FE); }
};

// Capture Value 0 Register
union SM2CVAL0 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0
    uint32_t CAPTVAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL0 &Instance() { return *reinterpret_cast<volatile SM2CVAL0*>(0x40190100); }
};

// Capture Value 0 Cycle Register
union SM2CVAL0CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0 Cycle
    uint32_t CVAL0CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL0CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL0CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL0CYC*>(0x40190102); }
};

// Capture Value 1 Register
union SM2CVAL1 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1
    uint32_t CAPTVAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL1 &Instance() { return *reinterpret_cast<volatile SM2CVAL1*>(0x40190104); }
};

// Capture Value 1 Cycle Register
union SM2CVAL1CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1 Cycle
    uint32_t CVAL1CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL1CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL1CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL1CYC*>(0x40190106); }
};

// Capture Value 2 Register
union SM2CVAL2 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2
    uint32_t CAPTVAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL2 &Instance() { return *reinterpret_cast<volatile SM2CVAL2*>(0x40190108); }
};

// Capture Value 2 Cycle Register
union SM2CVAL2CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2 Cycle
    uint32_t CVAL2CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL2CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL2CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL2CYC*>(0x4019010A); }
};

// Capture Value 3 Register
union SM2CVAL3 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3
    uint32_t CAPTVAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL3 &Instance() { return *reinterpret_cast<volatile SM2CVAL3*>(0x4019010C); }
};

// Capture Value 3 Cycle Register
union SM2CVAL3CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3 Cycle
    uint32_t CVAL3CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL3CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL3CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL3CYC*>(0x4019010E); }
};

// Capture Value 4 Register
union SM2CVAL4 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4
    uint32_t CAPTVAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL4 &Instance() { return *reinterpret_cast<volatile SM2CVAL4*>(0x40190110); }
};

// Capture Value 4 Cycle Register
union SM2CVAL4CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4 Cycle
    uint32_t CVAL4CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL4CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL4CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL4CYC*>(0x40190112); }
};

// Capture Value 5 Register
union SM2CVAL5 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5
    uint32_t CAPTVAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL5 &Instance() { return *reinterpret_cast<volatile SM2CVAL5*>(0x40190114); }
};

// Capture Value 5 Cycle Register
union SM2CVAL5CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5 Cycle
    uint32_t CVAL5CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM2CVAL5CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM2CVAL5CYC &Instance() { return *reinterpret_cast<volatile SM2CVAL5CYC*>(0x40190116); }
};

// Counter Register
union SM3CNT {
  
  // Bit field definition.
  struct {
    // read-only - Counter Register Bits
    uint32_t CNT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CNT &Instance() { return *reinterpret_cast<volatile SM3CNT*>(0x40190120); }
};

// Initial Count Register
union SM3INIT {
  
  // Bit field definition.
  struct {
    // read-write - Initial Count Register Bits
    uint32_t INIT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3INIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3INIT &Instance() { return *reinterpret_cast<volatile SM3INIT*>(0x40190122); }
};

// Control 2 Register
union SM3CTRL2 {
  
  // Clock Source Select
  enum class eCLK_SEL : uint32_t {
    // The IPBus clock is used as the clock for the local prescaler and counter.
    eIPBUS = 0,
    // EXT_CLK is used as the clock for the local prescaler and counter.
    eEXT_CLK = 1,
    // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
    eAUX_CLK = 2,
  };
  
  // Reload Source Select
  enum class eRELOAD_SEL : uint32_t {
    // The local RELOAD signal is used to reload registers.
    eLOCAL = 0,
    // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
    eMASTER = 1,
  };
  
  // Force Select
  enum class eFORCE_SEL : uint32_t {
    // The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
    eLOCAL = 0,
    // The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER = 1,
    // The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
    eLOCAL_RELOAD = 2,
    // The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_RELOAD = 3,
    // The local sync signal from this submodule is used to force updates.
    eLOCAL_SYNC = 4,
    // The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it holds the FORCE OUTPUT signal to logic 0.
    eMASTER_SYNC = 5,
    // The external force signal, EXT_FORCE, from outside the PWM module causes updates.
    eEXT_FORCE = 6,
    // The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
    eEXT_SYNC = 7,
  };
  
  // Force Enable
  enum class eFRCEN : uint32_t {
    // Initialization from a FORCE_OUT is disabled.
    eDISABLED = 0,
    // Initialization from a FORCE_OUT is enabled.
    eENABLED = 1,
  };
  
  // Initialization Control Select
  enum class eINIT_SEL : uint32_t {
    // Local sync (PWM_X) causes initialization.
    ePWM_X = 0,
    // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
    eMASTER_RELOAD = 1,
    // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
    eMASTER_SYNC = 2,
    // EXT_SYNC causes initialization.
    eEXT_SYNC = 3,
  };
  
  // Independent or Complementary Pair Operation
  enum class eINDEP : uint32_t {
    // PWM_A and PWM_B form a complementary PWM pair.
    eCOMPLEMENTARY = 0,
    // PWM_A and PWM_B outputs are independent PWMs.
    eINDEPENDENT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Clock Source Select
    eCLK_SEL CLK_SEL : 2;
    // read-write - Reload Source Select
    eRELOAD_SEL RELOAD_SEL : 1;
    // read-write - Force Select
    eFORCE_SEL FORCE_SEL : 3;
    // read-write - Force Initialization
    uint32_t FORCE : 1;
    // read-write - Force Enable
    eFRCEN FRCEN : 1;
    // read-write - Initialization Control Select
    eINIT_SEL INIT_SEL : 2;
    // read-write - PWM_X Initial Value
    uint32_t PWMX_INIT : 1;
    // read-write - PWM45 Initial Value
    uint32_t PWM45_INIT : 1;
    // read-write - PWM23 Initial Value
    uint32_t PWM23_INIT : 1;
    // read-write - Independent or Complementary Pair Operation
    eINDEP INDEP : 1;
    // read-write - Wait Enable
    uint32_t WAITEN : 1;
    // read-write - Debug Enable
    uint32_t DBGEN : 1;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CTRL2 &Instance() { return *reinterpret_cast<volatile SM3CTRL2*>(0x40190124); }
};

// Control Register
union SM3CTRL {
  
  // Double Switching Enable
  enum class eDBLEN : uint32_t {
    // Double switching disabled.
    eDISABLED = 0,
    // Double switching enabled.
    eENABLED = 1,
  };
  
  // PWM_X Double Switching Enable
  enum class eDBLX : uint32_t {
    // PWM_X double pulse disabled.
    eDISABLED = 0,
    // PWM_X double pulse enabled.
    eENABLED = 1,
  };
  
  // Load Mode Select
  enum class eLDMOD : uint32_t {
    // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
    eNEXT_PWM_RELOAD = 0,
    // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
    eMTCTRL_LDOK_SET = 1,
  };
  
  // Split the DBLPWM signal to PWM_A and PWM_B
  enum class eSPLIT : uint32_t {
    // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
    eDISABLED = 0,
    // DBLPWM is split to PWM_A and PWM_B.
    eENABLED = 1,
  };
  
  // Prescaler
  enum class ePRSC : uint32_t {
    // Prescaler 1
    eONE = 0,
    // Prescaler 2
    eTWO = 1,
    // Prescaler 4
    eFOUR = 2,
    // Prescaler 8
    eEIGHT = 3,
    // Prescaler 16
    eSIXTEEN = 4,
    // Prescaler 32
    eTHIRTYTWO = 5,
    // Prescaler 64
    eSIXTYFOUR = 6,
    // Prescaler 128
    eHUNDREDTWENTYEIGHT = 7,
  };
  
  // Compare Mode
  enum class eCOMPMODE : uint32_t {
    // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
    eEQUAL_TO = 0,
    // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
    eEQUAL_TO_OR_GREATER_THAN = 1,
  };
  
  // Full Cycle Reload
  enum class eFULL : uint32_t {
    // Full-cycle reloads disabled.
    eDISABLED = 0,
    // Full-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Half Cycle Reload
  enum class eHALF : uint32_t {
    // Half-cycle reloads disabled.
    eDISABLED = 0,
    // Half-cycle reloads enabled.
    eENABLED = 1,
  };
  
  // Load Frequency
  enum class eLDFQ : uint32_t {
    // Every PWM opportunity
    eEVERYPWM = 0,
    // Every 2 PWM opportunities
    eEVERY2PWM = 1,
    // Every 3 PWM opportunities
    eEVERY3PWM = 2,
    // Every 4 PWM opportunities
    eEVERY4PWM = 3,
    // Every 5 PWM opportunities
    eEVERY5PWM = 4,
    // Every 6 PWM opportunities
    eEVERY6PWM = 5,
    // Every 7 PWM opportunities
    eEVERY7PWM = 6,
    // Every 8 PWM opportunities
    eEVERY8PWM = 7,
    // Every 9 PWM opportunities
    eEVERY9PWM = 8,
    // Every 10 PWM opportunities
    eEVERY10PWM = 9,
    // Every 11 PWM opportunities
    eEVERY11PWM = 10,
    // Every 12 PWM opportunities
    eEVERY12PWM = 11,
    // Every 13 PWM opportunities
    eEVERY13PWM = 12,
    // Every 14 PWM opportunities
    eEVERY14PWM = 13,
    // Every 15 PWM opportunities
    eEVERY15PWM = 14,
    // Every 16 PWM opportunities
    eEVERY16PWM = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Double Switching Enable
    eDBLEN DBLEN : 1;
    // read-write - PWM_X Double Switching Enable
    eDBLX DBLX : 1;
    // read-write - Load Mode Select
    eLDMOD LDMOD : 1;
    // read-write - Split the DBLPWM signal to PWM_A and PWM_B
    eSPLIT SPLIT : 1;
    // read-write - Prescaler
    ePRSC PRSC : 3;
    // read-write - Compare Mode
    eCOMPMODE COMPMODE : 1;
    // read-only - Deadtime
    uint32_t DT : 2;
    // read-write - Full Cycle Reload
    eFULL FULL : 1;
    // read-write - Half Cycle Reload
    eHALF HALF : 1;
    // read-write - Load Frequency
    eLDFQ LDFQ : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000400; }
  static inline volatile SM3CTRL &Instance() { return *reinterpret_cast<volatile SM3CTRL*>(0x40190126); }
};

// Value Register 0
union SM3VAL0 {
  
  // Bit field definition.
  struct {
    // read-write - Value 0
    uint32_t VAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL0 &Instance() { return *reinterpret_cast<volatile SM3VAL0*>(0x4019012A); }
};

// Fractional Value Register 1
union SM3FRACVAL1 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 1
    uint32_t FRACVAL1 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRACVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRACVAL1 &Instance() { return *reinterpret_cast<volatile SM3FRACVAL1*>(0x4019012C); }
};

// Value Register 1
union SM3VAL1 {
  
  // Bit field definition.
  struct {
    // read-write - Value 1
    uint32_t VAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL1 &Instance() { return *reinterpret_cast<volatile SM3VAL1*>(0x4019012E); }
};

// Fractional Value Register 2
union SM3FRACVAL2 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 2
    uint32_t FRACVAL2 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRACVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRACVAL2 &Instance() { return *reinterpret_cast<volatile SM3FRACVAL2*>(0x40190130); }
};

// Value Register 2
union SM3VAL2 {
  
  // Bit field definition.
  struct {
    // read-write - Value 2
    uint32_t VAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL2 &Instance() { return *reinterpret_cast<volatile SM3VAL2*>(0x40190132); }
};

// Fractional Value Register 3
union SM3FRACVAL3 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 3
    uint32_t FRACVAL3 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRACVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRACVAL3 &Instance() { return *reinterpret_cast<volatile SM3FRACVAL3*>(0x40190134); }
};

// Value Register 3
union SM3VAL3 {
  
  // Bit field definition.
  struct {
    // read-write - Value 3
    uint32_t VAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL3 &Instance() { return *reinterpret_cast<volatile SM3VAL3*>(0x40190136); }
};

// Fractional Value Register 4
union SM3FRACVAL4 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 4
    uint32_t FRACVAL4 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRACVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRACVAL4 &Instance() { return *reinterpret_cast<volatile SM3FRACVAL4*>(0x40190138); }
};

// Value Register 4
union SM3VAL4 {
  
  // Bit field definition.
  struct {
    // read-write - Value 4
    uint32_t VAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL4 &Instance() { return *reinterpret_cast<volatile SM3VAL4*>(0x4019013A); }
};

// Fractional Value Register 5
union SM3FRACVAL5 {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 11;
    // read-write - Fractional Value 5
    uint32_t FRACVAL5 : 5;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRACVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRACVAL5 &Instance() { return *reinterpret_cast<volatile SM3FRACVAL5*>(0x4019013C); }
};

// Value Register 5
union SM3VAL5 {
  
  // Bit field definition.
  struct {
    // read-write - Value 5
    uint32_t VAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3VAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3VAL5 &Instance() { return *reinterpret_cast<volatile SM3VAL5*>(0x4019013E); }
};

// Fractional Control Register
union SM3FRCTRL {
  
  // Fractional Cycle PWM Period Enable
  enum class eFRAC1_EN : uint32_t {
    // Disable fractional cycle length for the PWM period.
    eDISABLED = 0,
    // Enable fractional cycle length for the PWM period.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_A
  enum class eFRAC23_EN : uint32_t {
    // Disable fractional cycle placement for PWM_A.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_A.
    eENABLED = 1,
  };
  
  // Fractional Cycle Placement Enable for PWM_B
  enum class eFRAC45_EN : uint32_t {
    // Disable fractional cycle placement for PWM_B.
    eDISABLED = 0,
    // Enable fractional cycle placement for PWM_B.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    // read-write - Fractional Cycle PWM Period Enable
    eFRAC1_EN FRAC1_EN : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_A
    eFRAC23_EN FRAC23_EN : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Fractional Cycle Placement Enable for PWM_B
    eFRAC45_EN FRAC45_EN : 1;
    uint32_t _reserved_2 : 10;
    // read-only - Test Status Bit
    uint32_t TEST : 1;
    uint32_t _reserved_3 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3FRCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3FRCTRL &Instance() { return *reinterpret_cast<volatile SM3FRCTRL*>(0x40190140); }
};

// Output Control Register
union SM3OCTRL {
  
  // PWM_X Fault State
  enum class ePWMXFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_B Fault State
  enum class ePWMBFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_A Fault State
  enum class ePWMAFS : uint32_t {
    // Output is forced to logic 0 state prior to consideration of output polarity control.
    eLOGIC_0 = 0,
    // Output is forced to logic 1 state prior to consideration of output polarity control.
    eLOGIC_1 = 1,
    // Output is put in a high-impedance state.
    eTRISTATED_2 = 2,
    // Output is put in a high-impedance state.
    eTRISTATED_3 = 3,
  };
  
  // PWM_X Output Polarity
  enum class ePOLX : uint32_t {
    // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_B Output Polarity
  enum class ePOLB : uint32_t {
    // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // PWM_A Output Polarity
  enum class ePOLA : uint32_t {
    // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
    eNOT_INVERTED = 0,
    // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
    eINVERTED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Fault State
    ePWMXFS PWMXFS : 2;
    // read-write - PWM_B Fault State
    ePWMBFS PWMBFS : 2;
    // read-write - PWM_A Fault State
    ePWMAFS PWMAFS : 2;
    uint32_t _reserved_0 : 2;
    // read-write - PWM_X Output Polarity
    ePOLX POLX : 1;
    // read-write - PWM_B Output Polarity
    ePOLB POLB : 1;
    // read-write - PWM_A Output Polarity
    ePOLA POLA : 1;
    uint32_t _reserved_1 : 2;
    // read-only - PWM_X Input
    uint32_t PWMX_IN : 1;
    // read-only - PWM_B Input
    uint32_t PWMB_IN : 1;
    // read-only - PWM_A Input
    uint32_t PWMA_IN : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3OCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3OCTRL &Instance() { return *reinterpret_cast<volatile SM3OCTRL*>(0x40190142); }
};

// Status Register
union SM3STS {
  
  // Compare Flags
  enum class eCMPF : uint32_t {
    // No compare event has occurred for a particular VALx value.
    eNO_EVENT = 0,
    // A compare event has occurred for a particular VALx value.
    eEVENT = 1,
  };
  
  // Reload Flag
  enum class eRF : uint32_t {
    // No new reload cycle since last STS[RF] clearing
    eNO_FLAG = 0,
    // New reload cycle since last STS[RF] clearing
    eFLAG = 1,
  };
  
  // Reload Error Flag
  enum class eREF : uint32_t {
    // No reload error occurred.
    eNO_FLAG = 0,
    // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
    eFLAG = 1,
  };
  
  // Registers Updated Flag
  enum class eRUF : uint32_t {
    // No register update has occurred since last reload.
    eNO_FLAG = 0,
    // At least one of the double buffered registers has been updated since the last reload.
    eFLAG = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Flags
    eCMPF CMPF : 6;
    // read-write - Capture Flag X0
    uint32_t CFX0 : 1;
    // read-write - Capture Flag X1
    uint32_t CFX1 : 1;
    // read-write - Capture Flag B0
    uint32_t CFB0 : 1;
    // read-write - Capture Flag B1
    uint32_t CFB1 : 1;
    // read-write - Capture Flag A0
    uint32_t CFA0 : 1;
    // read-write - Capture Flag A1
    uint32_t CFA1 : 1;
    // read-write - Reload Flag
    eRF RF : 1;
    // read-write - Reload Error Flag
    eREF REF : 1;
    // read-only - Registers Updated Flag
    eRUF RUF : 1;
    uint32_t _reserved_0 : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3STS &Instance() { return *reinterpret_cast<volatile SM3STS*>(0x40190144); }
};

// Interrupt Enable Register
union SM3INTEN {
  
  // Compare Interrupt Enables
  enum class eCMPIE : uint32_t {
    // The corresponding STS[CMPF] bit will not cause an interrupt request.
    eDISABLED = 0,
    // The corresponding STS[CMPF] bit will cause an interrupt request.
    eENABLED = 1,
  };
  
  // Capture X 0 Interrupt Enable
  enum class eCX0IE : uint32_t {
    // Interrupt request disabled for STS[CFX0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX0].
    eENABLED = 1,
  };
  
  // Capture X 1 Interrupt Enable
  enum class eCX1IE : uint32_t {
    // Interrupt request disabled for STS[CFX1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFX1].
    eENABLED = 1,
  };
  
  // Capture B 0 Interrupt Enable
  enum class eCB0IE : uint32_t {
    // Interrupt request disabled for STS[CFB0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB0].
    eENABLED = 1,
  };
  
  // Capture B 1 Interrupt Enable
  enum class eCB1IE : uint32_t {
    // Interrupt request disabled for STS[CFB1].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFB1].
    eENABLED = 1,
  };
  
  // Capture A 0 Interrupt Enable
  enum class eCA0IE : uint32_t {
    // Interrupt request disabled for STS[CFA0].
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA0].
    eENABLED = 1,
  };
  
  // Capture A 1 Interrupt Enable
  enum class eCA1IE : uint32_t {
    // Interrupt request disabled for STS[CFA1]
    eDISABLED = 0,
    // Interrupt request enabled for STS[CFA1]
    eENABLED = 1,
  };
  
  // Reload Interrupt Enable
  enum class eRIE : uint32_t {
    // STS[RF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[RF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Reload Error Interrupt Enable
  enum class eREIE : uint32_t {
    // STS[REF] CPU interrupt requests disabled
    eDISABLED = 0,
    // STS[REF] CPU interrupt requests enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Compare Interrupt Enables
    eCMPIE CMPIE : 6;
    // read-write - Capture X 0 Interrupt Enable
    eCX0IE CX0IE : 1;
    // read-write - Capture X 1 Interrupt Enable
    eCX1IE CX1IE : 1;
    // read-write - Capture B 0 Interrupt Enable
    eCB0IE CB0IE : 1;
    // read-write - Capture B 1 Interrupt Enable
    eCB1IE CB1IE : 1;
    // read-write - Capture A 0 Interrupt Enable
    eCA0IE CA0IE : 1;
    // read-write - Capture A 1 Interrupt Enable
    eCA1IE CA1IE : 1;
    // read-write - Reload Interrupt Enable
    eRIE RIE : 1;
    // read-write - Reload Error Interrupt Enable
    eREIE REIE : 1;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3INTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3INTEN &Instance() { return *reinterpret_cast<volatile SM3INTEN*>(0x40190146); }
};

// DMA Enable Register
union SM3DMAEN {
  
  // Capture DMA Enable Source Select
  enum class eCAPTDE : uint32_t {
    // Read DMA requests disabled.
    eDISABLED = 0,
    // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
    eEXCEEDFIFO = 1,
    // A local synchronization (VAL1 matches counter) sets the read DMA request.
    eLOCAL_SYNC = 2,
    // A local reload (STS[RF] being set) sets the read DMA request.
    eLOCAL_RELOAD = 3,
  };
  
  // FIFO Watermark AND Control
  enum class eFAND : uint32_t {
    // Selected FIFO watermarks are OR'ed together.
    eOR = 0,
    // Selected FIFO watermarks are AND'ed together.
    eAND = 1,
  };
  
  // Value Registers DMA Enable
  enum class eVALDE : uint32_t {
    // DMA write requests disabled
    eDISABLED = 0,
    // Enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Capture X0 FIFO DMA Enable
    uint32_t CX0DE : 1;
    // read-write - Capture X1 FIFO DMA Enable
    uint32_t CX1DE : 1;
    // read-write - Capture B0 FIFO DMA Enable
    uint32_t CB0DE : 1;
    // read-write - Capture B1 FIFO DMA Enable
    uint32_t CB1DE : 1;
    // read-write - Capture A0 FIFO DMA Enable
    uint32_t CA0DE : 1;
    // read-write - Capture A1 FIFO DMA Enable
    uint32_t CA1DE : 1;
    // read-write - Capture DMA Enable Source Select
    eCAPTDE CAPTDE : 2;
    // read-write - FIFO Watermark AND Control
    eFAND FAND : 1;
    // read-write - Value Registers DMA Enable
    eVALDE VALDE : 1;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3DMAEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3DMAEN &Instance() { return *reinterpret_cast<volatile SM3DMAEN*>(0x40190148); }
};

// Output Trigger Control Register
union SM3TCTRL {
  
  // Output Trigger Enables
  enum class eOUT_TRIG_EN : uint32_t {
    // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
    eVAL0 = 1,
  };
  
  // Trigger Frequency
  enum class eTRGFRQ : uint32_t {
    // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eEVERYPWM = 0,
    // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
    eFINALPWM = 1,
  };
  
  // Output Trigger 1 Source Select
  enum class ePWBOT1 : uint32_t {
    // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
    ePWM_OUT_TRIG1_SIGNAL = 0,
    // Route the PWM_B output to the PWM_OUT_TRIG1 port.
    ePWMB_OUTPUT = 1,
  };
  
  // Output Trigger 0 Source Select
  enum class ePWAOT0 : uint32_t {
    // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
    ePWM_OUT_TRIG0_SIGNAL = 0,
    // Route the PWM_A output to the PWM_OUT_TRIG0 port.
    ePWMA_OUTPUT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Trigger Enables
    eOUT_TRIG_EN OUT_TRIG_EN : 6;
    uint32_t _reserved_0 : 6;
    // read-write - Trigger Frequency
    eTRGFRQ TRGFRQ : 1;
    uint32_t _reserved_1 : 1;
    // read-write - Output Trigger 1 Source Select
    ePWBOT1 PWBOT1 : 1;
    // read-write - Output Trigger 0 Source Select
    ePWAOT0 PWAOT0 : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3TCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3TCTRL &Instance() { return *reinterpret_cast<volatile SM3TCTRL*>(0x4019014A); }
};

// Fault Disable Mapping Register 0
union SM3DISMAP0 {
  
  // Bit field definition.
  struct {
    // read-write - PWM_A Fault Disable Mask 0
    uint32_t DIS0A : 4;
    // read-write - PWM_B Fault Disable Mask 0
    uint32_t DIS0B : 4;
    // read-write - PWM_X Fault Disable Mask 0
    uint32_t DIS0X : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3DISMAP0() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile SM3DISMAP0 &Instance() { return *reinterpret_cast<volatile SM3DISMAP0*>(0x4019014C); }
};

// Deadtime Count Register 0
union SM3DTCNT0 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT0
    uint32_t DTCNT0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3DTCNT0() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM3DTCNT0 &Instance() { return *reinterpret_cast<volatile SM3DTCNT0*>(0x40190150); }
};

// Deadtime Count Register 1
union SM3DTCNT1 {
  
  // Bit field definition.
  struct {
    // read-write - DTCNT1
    uint32_t DTCNT1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3DTCNT1() = delete;
  inline void Reset() volatile { this->value = 0x000007FF; }
  static inline volatile SM3DTCNT1 &Instance() { return *reinterpret_cast<volatile SM3DTCNT1*>(0x40190152); }
};

// Capture Control A Register
union SM3CAPTCTRLA {
  
  // Arm A
  enum class eARMA : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode A
  enum class eONESHOTA : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge A 0
  enum class eEDGA0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge A 1
  enum class eEDGA1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select A
  enum class eINP_SELA : uint32_t {
    // Raw PWM_A input signal selected as source.
    ePWM_A = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter A Enable
  enum class eEDGCNTA_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm A
    eARMA ARMA : 1;
    // read-write - One Shot Mode A
    eONESHOTA ONESHOTA : 1;
    // read-write - Edge A 0
    eEDGA0 EDGA0 : 2;
    // read-write - Edge A 1
    eEDGA1 EDGA1 : 2;
    // read-write - Input Select A
    eINP_SELA INP_SELA : 1;
    // read-write - Edge Counter A Enable
    eEDGCNTA_EN EDGCNTA_EN : 1;
    // read-write - Capture A FIFOs Water Mark
    uint32_t CFAWM : 2;
    // read-only - Capture A0 FIFO Word Count
    uint32_t CA0CNT : 3;
    // read-only - Capture A1 FIFO Word Count
    uint32_t CA1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCTRLA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCTRLA &Instance() { return *reinterpret_cast<volatile SM3CAPTCTRLA*>(0x40190154); }
};

// Capture Compare A Register
union SM3CAPTCOMPA {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare A
    uint32_t EDGCMPA : 8;
    // read-only - Edge Counter A
    uint32_t EDGCNTA : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCOMPA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCOMPA &Instance() { return *reinterpret_cast<volatile SM3CAPTCOMPA*>(0x40190156); }
};

// Capture Control B Register
union SM3CAPTCTRLB {
  
  // Arm B
  enum class eARMB : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode B
  enum class eONESHOTB : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge B 0
  enum class eEDGB0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge B 1
  enum class eEDGB1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select B
  enum class eINP_SELB : uint32_t {
    // Raw PWM_B input signal selected as source.
    ePWM_B = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter B Enable
  enum class eEDGCNTB_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm B
    eARMB ARMB : 1;
    // read-write - One Shot Mode B
    eONESHOTB ONESHOTB : 1;
    // read-write - Edge B 0
    eEDGB0 EDGB0 : 2;
    // read-write - Edge B 1
    eEDGB1 EDGB1 : 2;
    // read-write - Input Select B
    eINP_SELB INP_SELB : 1;
    // read-write - Edge Counter B Enable
    eEDGCNTB_EN EDGCNTB_EN : 1;
    // read-write - Capture B FIFOs Water Mark
    uint32_t CFBWM : 2;
    // read-only - Capture B0 FIFO Word Count
    uint32_t CB0CNT : 3;
    // read-only - Capture B1 FIFO Word Count
    uint32_t CB1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCTRLB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCTRLB &Instance() { return *reinterpret_cast<volatile SM3CAPTCTRLB*>(0x40190158); }
};

// Capture Compare B Register
union SM3CAPTCOMPB {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare B
    uint32_t EDGCMPB : 8;
    // read-only - Edge Counter B
    uint32_t EDGCNTB : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCOMPB() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCOMPB &Instance() { return *reinterpret_cast<volatile SM3CAPTCOMPB*>(0x4019015A); }
};

// Capture Control X Register
union SM3CAPTCTRLX {
  
  // Arm X
  enum class eARMX : uint32_t {
    // Input capture operation is disabled.
    eDISABLED = 0,
    // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
    eENABLED = 1,
  };
  
  // One Shot Mode Aux
  enum class eONESHOTX : uint32_t {
    // Free Running
    eFREE_RUNNING = 0,
    // One Shot
    eONE_SHOT = 1,
  };
  
  // Edge X 0
  enum class eEDGX0 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Edge X 1
  enum class eEDGX1 : uint32_t {
    // Disabled
    eDISABLED = 0,
    // Capture falling edges
    eFALLING_EDGE = 1,
    // Capture rising edges
    eRISING_EDGE = 2,
    // Capture any edge
    eANY_EDGE = 3,
  };
  
  // Input Select X
  enum class eINP_SELX : uint32_t {
    // Raw PWM_X input signal selected as source.
    ePWM_X = 0,
    // Edge Counter
    eEDGE_COUNTER = 1,
  };
  
  // Edge Counter X Enable
  enum class eEDGCNTX_EN : uint32_t {
    // Edge counter disabled and held in reset
    eDISABLED = 0,
    // Edge counter enabled
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Arm X
    eARMX ARMX : 1;
    // read-write - One Shot Mode Aux
    eONESHOTX ONESHOTX : 1;
    // read-write - Edge X 0
    eEDGX0 EDGX0 : 2;
    // read-write - Edge X 1
    eEDGX1 EDGX1 : 2;
    // read-write - Input Select X
    eINP_SELX INP_SELX : 1;
    // read-write - Edge Counter X Enable
    eEDGCNTX_EN EDGCNTX_EN : 1;
    // read-write - Capture X FIFOs Water Mark
    uint32_t CFXWM : 2;
    // read-only - Capture X0 FIFO Word Count
    uint32_t CX0CNT : 3;
    // read-only - Capture X1 FIFO Word Count
    uint32_t CX1CNT : 3;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCTRLX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCTRLX &Instance() { return *reinterpret_cast<volatile SM3CAPTCTRLX*>(0x4019015C); }
};

// Capture Compare X Register
union SM3CAPTCOMPX {
  
  // Bit field definition.
  struct {
    // read-write - Edge Compare X
    uint32_t EDGCMPX : 8;
    // read-only - Edge Counter X
    uint32_t EDGCNTX : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CAPTCOMPX() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CAPTCOMPX &Instance() { return *reinterpret_cast<volatile SM3CAPTCOMPX*>(0x4019015E); }
};

// Capture Value 0 Register
union SM3CVAL0 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0
    uint32_t CAPTVAL0 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL0 &Instance() { return *reinterpret_cast<volatile SM3CVAL0*>(0x40190160); }
};

// Capture Value 0 Cycle Register
union SM3CVAL0CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 0 Cycle
    uint32_t CVAL0CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL0CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL0CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL0CYC*>(0x40190162); }
};

// Capture Value 1 Register
union SM3CVAL1 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1
    uint32_t CAPTVAL1 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL1 &Instance() { return *reinterpret_cast<volatile SM3CVAL1*>(0x40190164); }
};

// Capture Value 1 Cycle Register
union SM3CVAL1CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 1 Cycle
    uint32_t CVAL1CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL1CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL1CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL1CYC*>(0x40190166); }
};

// Capture Value 2 Register
union SM3CVAL2 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2
    uint32_t CAPTVAL2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL2 &Instance() { return *reinterpret_cast<volatile SM3CVAL2*>(0x40190168); }
};

// Capture Value 2 Cycle Register
union SM3CVAL2CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 2 Cycle
    uint32_t CVAL2CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL2CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL2CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL2CYC*>(0x4019016A); }
};

// Capture Value 3 Register
union SM3CVAL3 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3
    uint32_t CAPTVAL3 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL3 &Instance() { return *reinterpret_cast<volatile SM3CVAL3*>(0x4019016C); }
};

// Capture Value 3 Cycle Register
union SM3CVAL3CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 3 Cycle
    uint32_t CVAL3CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL3CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL3CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL3CYC*>(0x4019016E); }
};

// Capture Value 4 Register
union SM3CVAL4 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4
    uint32_t CAPTVAL4 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL4 &Instance() { return *reinterpret_cast<volatile SM3CVAL4*>(0x40190170); }
};

// Capture Value 4 Cycle Register
union SM3CVAL4CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 4 Cycle
    uint32_t CVAL4CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL4CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL4CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL4CYC*>(0x40190172); }
};

// Capture Value 5 Register
union SM3CVAL5 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5
    uint32_t CAPTVAL5 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL5 &Instance() { return *reinterpret_cast<volatile SM3CVAL5*>(0x40190174); }
};

// Capture Value 5 Cycle Register
union SM3CVAL5CYC {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value 5 Cycle
    uint32_t CVAL5CYC : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SM3CVAL5CYC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SM3CVAL5CYC &Instance() { return *reinterpret_cast<volatile SM3CVAL5CYC*>(0x40190176); }
};

// Output Enable Register
union OUTEN {
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Output Enables
    uint32_t PWMX_EN : 4;
    // read-write - PWM_B Output Enables
    uint32_t PWMB_EN : 4;
    // read-write - PWM_A Output Enables
    uint32_t PWMA_EN : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUTEN &Instance() { return *reinterpret_cast<volatile OUTEN*>(0x40190180); }
};

// Mask Register
union MASK {
  
  // Bit field definition.
  struct {
    // read-write - PWM_X Masks
    uint32_t MASKX : 4;
    // read-write - PWM_B Masks
    uint32_t MASKB : 4;
    // read-write - PWM_A Masks
    uint32_t MASKA : 4;
    // write-only - Update Mask Bits Immediately
    uint32_t UPDATE_MASK : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MASK &Instance() { return *reinterpret_cast<volatile MASK*>(0x40190182); }
};

// Software Controlled Output Register
union SWCOUT {
  
  // Submodule 0 Software Controlled Output 45
  enum class eSM0OUT45 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM45.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM45.
    eLOGIC_1 = 1,
  };
  
  // Submodule 0 Software Controlled Output 23
  enum class eSM0OUT23 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM23.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM23.
    eLOGIC_1 = 1,
  };
  
  // Submodule 1 Software Controlled Output 45
  enum class eSM1OUT45 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM45.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM45.
    eLOGIC_1 = 1,
  };
  
  // Submodule 1 Software Controlled Output 23
  enum class eSM1OUT23 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM23.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM23.
    eLOGIC_1 = 1,
  };
  
  // Submodule 2 Software Controlled Output 45
  enum class eSM2OUT45 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM45.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM45.
    eLOGIC_1 = 1,
  };
  
  // Submodule 2 Software Controlled Output 23
  enum class eSM2OUT23 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM23.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM23.
    eLOGIC_1 = 1,
  };
  
  // Submodule 3 Software Controlled Output 45
  enum class eSM3OUT45 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM45.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM45.
    eLOGIC_1 = 1,
  };
  
  // Submodule 3 Software Controlled Output 23
  enum class eSM3OUT23 : uint32_t {
    // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM23.
    eLOGIC_0 = 0,
    // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM23.
    eLOGIC_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Submodule 0 Software Controlled Output 45
    eSM0OUT45 SM0OUT45 : 1;
    // read-write - Submodule 0 Software Controlled Output 23
    eSM0OUT23 SM0OUT23 : 1;
    // read-write - Submodule 1 Software Controlled Output 45
    eSM1OUT45 SM1OUT45 : 1;
    // read-write - Submodule 1 Software Controlled Output 23
    eSM1OUT23 SM1OUT23 : 1;
    // read-write - Submodule 2 Software Controlled Output 45
    eSM2OUT45 SM2OUT45 : 1;
    // read-write - Submodule 2 Software Controlled Output 23
    eSM2OUT23 SM2OUT23 : 1;
    // read-write - Submodule 3 Software Controlled Output 45
    eSM3OUT45 SM3OUT45 : 1;
    // read-write - Submodule 3 Software Controlled Output 23
    eSM3OUT23 SM3OUT23 : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SWCOUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SWCOUT &Instance() { return *reinterpret_cast<volatile SWCOUT*>(0x40190184); }
};

// PWM Source Select Register
union DTSRCSEL {
  
  // Submodule 0 PWM45 Control Select
  enum class eSM0SEL45 : uint32_t {
    // Generated SM0PWM45 signal used by the deadtime logic.
    eSM0PWM45 = 0,
    // Inverted generated SM0PWM45 signal used by the deadtime logic.
    eINVERTED_SM0PWM45 = 1,
    // SWCOUT[SM0OUT45] used by the deadtime logic.
    eSM0OUT45 = 2,
  };
  
  // Submodule 0 PWM23 Control Select
  enum class eSM0SEL23 : uint32_t {
    // Generated SM0PWM23 signal used by the deadtime logic.
    eSM0PWM23 = 0,
    // Inverted generated SM0PWM23 signal used by the deadtime logic.
    eINVERTED_SM0PWM23 = 1,
    // SWCOUT[SM0OUT23] used by the deadtime logic.
    eSM0OUT23 = 2,
    // PWM0_EXTA signal used by the deadtime logic.
    ePWM0_EXTA = 3,
  };
  
  // Submodule 1 PWM45 Control Select
  enum class eSM1SEL45 : uint32_t {
    // Generated SM1PWM45 signal used by the deadtime logic.
    eSM1PWM45 = 0,
    // Inverted generated SM1PWM45 signal used by the deadtime logic.
    eINVERTED_SM1PWM45 = 1,
    // SWCOUT[SM1OUT45] used by the deadtime logic.
    eSM1OUT45 = 2,
  };
  
  // Submodule 1 PWM23 Control Select
  enum class eSM1SEL23 : uint32_t {
    // Generated SM1PWM23 signal used by the deadtime logic.
    eSM1PWM23 = 0,
    // Inverted generated SM1PWM23 signal used by the deadtime logic.
    eINVERTED_SM1PWM23 = 1,
    // SWCOUT[SM1OUT23] used by the deadtime logic.
    eSM1OUT23 = 2,
    // PWM1_EXTA signal used by the deadtime logic.
    ePWM1_EXTA = 3,
  };
  
  // Submodule 2 PWM45 Control Select
  enum class eSM2SEL45 : uint32_t {
    // Generated SM2PWM45 signal used by the deadtime logic.
    eSM2PWM45 = 0,
    // Inverted generated SM2PWM45 signal used by the deadtime logic.
    eINVERTED_SM2PWM45 = 1,
    // SWCOUT[SM2OUT45] used by the deadtime logic.
    eSM2OUT45 = 2,
  };
  
  // Submodule 2 PWM23 Control Select
  enum class eSM2SEL23 : uint32_t {
    // Generated SM2PWM23 signal used by the deadtime logic.
    eSM2PWM23 = 0,
    // Inverted generated SM2PWM23 signal used by the deadtime logic.
    eINVERTED_SM2PWM23 = 1,
    // SWCOUT[SM2OUT23] used by the deadtime logic.
    eSM2OUT23 = 2,
    // PWM2_EXTA signal used by the deadtime logic.
    ePWM2_EXTA = 3,
  };
  
  // Submodule 3 PWM45 Control Select
  enum class eSM3SEL45 : uint32_t {
    // Generated SM3PWM45 signal used by the deadtime logic.
    eSM3PWM45 = 0,
    // Inverted generated SM3PWM45 signal used by the deadtime logic.
    eINVERTED_SM3PWM45 = 1,
    // SWCOUT[SM3OUT45] used by the deadtime logic.
    eSM3OUT45 = 2,
  };
  
  // Submodule 3 PWM23 Control Select
  enum class eSM3SEL23 : uint32_t {
    // Generated SM3PWM23 signal used by the deadtime logic.
    eSM3PWM23 = 0,
    // Inverted generated SM3PWM23 signal used by the deadtime logic.
    eINVERTED_SM3PWM23 = 1,
    // SWCOUT[SM3OUT23] used by the deadtime logic.
    eSM3OUT23 = 2,
    // PWM3_EXTA signal used by the deadtime logic.
    ePWM3_EXTA = 3,
  };
  
  // Bit field definition.
  struct {
    // read-write - Submodule 0 PWM45 Control Select
    eSM0SEL45 SM0SEL45 : 2;
    // read-write - Submodule 0 PWM23 Control Select
    eSM0SEL23 SM0SEL23 : 2;
    // read-write - Submodule 1 PWM45 Control Select
    eSM1SEL45 SM1SEL45 : 2;
    // read-write - Submodule 1 PWM23 Control Select
    eSM1SEL23 SM1SEL23 : 2;
    // read-write - Submodule 2 PWM45 Control Select
    eSM2SEL45 SM2SEL45 : 2;
    // read-write - Submodule 2 PWM23 Control Select
    eSM2SEL23 SM2SEL23 : 2;
    // read-write - Submodule 3 PWM45 Control Select
    eSM3SEL45 SM3SEL45 : 2;
    // read-write - Submodule 3 PWM23 Control Select
    eSM3SEL23 SM3SEL23 : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DTSRCSEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DTSRCSEL &Instance() { return *reinterpret_cast<volatile DTSRCSEL*>(0x40190186); }
};

// Master Control Register
union MCTRL {
  
  // Load Okay
  enum class eLDOK : uint32_t {
    // Do not load new values.
    eDISABLED = 0,
    // Load prescaler, modulus, and PWM values of the corresponding submodule.
    eENABLED = 1,
  };
  
  // Run
  enum class eRUN : uint32_t {
    // PWM counter is stopped, but PWM outputs hold the current state.
    eDISABLED = 0,
    // PWM counter is started in the corresponding submodule.
    eENABLED = 1,
  };
  
  // Current Polarity
  enum class eIPOL : uint32_t {
    // PWM23 is used to generate complementary PWM pair in the corresponding submodule.
    ePWM23 = 0,
    // PWM45 is used to generate complementary PWM pair in the corresponding submodule.
    ePWM45 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Load Okay
    eLDOK LDOK : 4;
    // read-write - Clear Load Okay
    uint32_t CLDOK : 4;
    // read-write - Run
    eRUN RUN : 4;
    // read-write - Current Polarity
    eIPOL IPOL : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCTRL &Instance() { return *reinterpret_cast<volatile MCTRL*>(0x40190188); }
};

// Fault Control Register
union FCTRL0 {
  
  // Fault Interrupt Enables
  enum class eFIE : uint32_t {
    // FAULTx CPU interrupt requests disabled.
    eDISABLED = 0,
    // FAULTx CPU interrupt requests enabled.
    eENABLED = 1,
  };
  
  // Fault Safety Mode
  enum class eFSAFE : uint32_t {
    // Normal mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFPINx]. If neither FHALF nor FFULL is set, then the fault condition cannot be cleared. The PWM outputs disabled by this fault input will not be re-enabled until the actual FAULTx input signal de-asserts since the fault input will combinationally disable the PWM outputs (as programmed in DISMAPn).
    eNORMAL = 0,
    // Safe mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear and FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL]. If neither FHLAF nor FFULL is set, then the fault condition cannot be cleared.
    eSAFE = 1,
  };
  
  // Automatic Fault Clearing
  enum class eFAUTO : uint32_t {
    // Manual fault clearing. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared. This is further controlled by FCTRL[FSAFE].
    eMANUAL = 0,
    // Automatic fault clearing. PWM outputs disabled by this fault are enabled when FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFLAGx]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared.
    eAUTOMATIC = 1,
  };
  
  // Fault Level
  enum class eFLVL : uint32_t {
    // A logic 0 on the fault input indicates a fault condition.
    eLOGIC_0 = 0,
    // A logic 1 on the fault input indicates a fault condition.
    eLOGIC_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fault Interrupt Enables
    eFIE FIE : 4;
    // read-write - Fault Safety Mode
    eFSAFE FSAFE : 4;
    // read-write - Automatic Fault Clearing
    eFAUTO FAUTO : 4;
    // read-write - Fault Level
    eFLVL FLVL : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL0 &Instance() { return *reinterpret_cast<volatile FCTRL0*>(0x4019018C); }
};

// Fault Status Register
union FSTS0 {
  
  // Fault Flags
  enum class eFFLAG : uint32_t {
    // No fault on the FAULTx pin.
    eNO_FLAG = 0,
    // Fault on the FAULTx pin.
    eFLAG = 1,
  };
  
  // Full Cycle
  enum class eFFULL : uint32_t {
    // PWM outputs are not re-enabled at the start of a full cycle
    ePWM_OUTPUTS_NOT_REENABLED = 0,
    // PWM outputs are re-enabled at the start of a full cycle
    ePWM_OUTPUTS_REENABLED = 1,
  };
  
  // Half Cycle Fault Recovery
  enum class eFHALF : uint32_t {
    // PWM outputs are not re-enabled at the start of a half cycle.
    ePWM_OUTPUTS_NOT_REENABLED = 0,
    // PWM outputs are re-enabled at the start of a half cycle (as defined by VAL0).
    ePWM_OUTPUTS_REENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fault Flags
    eFFLAG FFLAG : 4;
    // read-write - Full Cycle
    eFFULL FFULL : 4;
    // read-only - Filtered Fault Pins
    uint32_t FFPIN : 4;
    // read-write - Half Cycle Fault Recovery
    eFHALF FHALF : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FSTS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FSTS0 &Instance() { return *reinterpret_cast<volatile FSTS0*>(0x4019018E); }
};

// Fault Filter Register
union FFILT0 {
  
  // Fault Glitch Stretch Enable
  enum class eGSTR : uint32_t {
    // Fault input glitch stretching is disabled.
    eDISABLED = 0,
    // Input fault signals are stretched to at least 2 IPBus clock cycles.
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fault Filter Period
    uint32_t FILT_PER : 8;
    // read-write - Fault Filter Count
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 4;
    // read-write - Fault Glitch Stretch Enable
    eGSTR GSTR : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FFILT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FFILT0 &Instance() { return *reinterpret_cast<volatile FFILT0*>(0x40190190); }
};

// Fault Test Register
union FTST0 {
  
  // Fault Test
  enum class eFTEST : uint32_t {
    // No fault
    eNO_FAULT = 0,
    // Cause a simulated fault
    eFAULT = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Fault Test
    eFTEST FTEST : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FTST0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FTST0 &Instance() { return *reinterpret_cast<volatile FTST0*>(0x40190192); }
};

// Fault Control 2 Register
union FCTRL20 {
  
  // No Combinational Path From Fault Input To PWM Output
  enum class eNOCOMB : uint32_t {
    // There is a combinational link from the fault inputs to the PWM outputs. The fault inputs are combined with the filtered and latched fault signals to disable the PWM outputs.
    eENABLED = 0,
    // The direct combinational path from the fault inputs to the PWM outputs is disabled and the filtered and latched fault signals are used to disable the PWM outputs.
    eDISABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - No Combinational Path From Fault Input To PWM Output
    eNOCOMB NOCOMB : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FCTRL20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL20 &Instance() { return *reinterpret_cast<volatile FCTRL20*>(0x40190194); }
};


} // namespace nPWM2