#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// PWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nPWM4 {


// Output Enable Register
//
union OUTEN {
  
  enum class ePWMX_EN : uint32_t {
    eDISABLED = 0, // PWM_X output disabled.
    eENABLED = 1, // PWM_X output enabled.
  };
  
  enum class ePWMB_EN : uint32_t {
    eDISABLED = 0, // PWM_B output disabled.
    eENABLED = 1, // PWM_B output enabled.
  };
  
  enum class ePWMA_EN : uint32_t {
    eDISABLED = 0, // PWM_A output disabled.
    eENABLED = 1, // PWM_A output enabled.
  };
  
  // Bit field definition.
  struct {
    ePWMX_EN PWMX_EN : 4;
    ePWMB_EN PWMB_EN : 4;
    ePWMA_EN PWMA_EN : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUTEN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUTEN &Instance() { return *reinterpret_cast<volatile OUTEN*>(0x40198180); }
};

// Mask Register
//
union MASK {
  
  enum class eMASKX : uint32_t {
    eNORMAL = 0, // PWM_X output normal.
    eMASKED = 1, // PWM_X output masked.
  };
  
  enum class eMASKB : uint32_t {
    eNORMAL = 0, // PWM_B output normal.
    eMASKED = 1, // PWM_B output masked.
  };
  
  enum class eMASKA : uint32_t {
    eNORMAL = 0, // PWM_A output normal.
    eMASKED = 1, // PWM_A output masked.
  };
  
  // Bit field definition.
  struct {
    eMASKX MASKX : 4;
    eMASKB MASKB : 4;
    eMASKA MASKA : 4;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MASK &Instance() { return *reinterpret_cast<volatile MASK*>(0x40198182); }
};

// Software Controlled Output Register
//
union SWCOUT {
  
  enum class eSM0OUT45 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM45.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM45.
  };
  
  enum class eSM0OUT23 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM23.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM23.
  };
  
  enum class eSM1OUT45 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM45.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM45.
  };
  
  enum class eSM1OUT23 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM23.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM23.
  };
  
  enum class eSM2OUT45 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM45.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM45.
  };
  
  enum class eSM2OUT23 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM23.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM23.
  };
  
  enum class eSM3OUT45 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM45.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM45.
  };
  
  enum class eSM3OUT23 : uint32_t {
    eLOGIC_0 = 0, // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM23.
    eLOGIC_1 = 1, // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM23.
  };
  
  // Bit field definition.
  struct {
    eSM0OUT45 SM0OUT45 : 1;
    eSM0OUT23 SM0OUT23 : 1;
    eSM1OUT45 SM1OUT45 : 1;
    eSM1OUT23 SM1OUT23 : 1;
    eSM2OUT45 SM2OUT45 : 1;
    eSM2OUT23 SM2OUT23 : 1;
    eSM3OUT45 SM3OUT45 : 1;
    eSM3OUT23 SM3OUT23 : 1;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SWCOUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SWCOUT &Instance() { return *reinterpret_cast<volatile SWCOUT*>(0x40198184); }
};

// PWM Source Select Register
//
union DTSRCSEL {
  
  enum class eSM0SEL45 : uint32_t {
    eSM0PWM45 = 0, // Generated SM0PWM45 signal is used by the deadtime logic.
    eINVERTED_SM0PWM45 = 1, // Inverted generated SM0PWM45 signal is used by the deadtime logic.
    eSM0OUT45 = 2, // SWCOUT[SM0OUT45] is used by the deadtime logic.
    ePWM0_EXTB = 3, // PWM0_EXTB signal is used by the deadtime logic.
  };
  
  enum class eSM0SEL23 : uint32_t {
    eSM0PWM23 = 0, // Generated SM0PWM23 signal is used by the deadtime logic.
    eINVERTED_SM0PWM23 = 1, // Inverted generated SM0PWM23 signal is used by the deadtime logic.
    eSM0OUT23 = 2, // SWCOUT[SM0OUT23] is used by the deadtime logic.
    ePWM0_EXTA = 3, // PWM0_EXTA signal is used by the deadtime logic.
  };
  
  enum class eSM1SEL45 : uint32_t {
    eSM1PWM45 = 0, // Generated SM1PWM45 signal is used by the deadtime logic.
    eINVERTED_SM1PWM45 = 1, // Inverted generated SM1PWM45 signal is used by the deadtime logic.
    eSM1OUT45 = 2, // SWCOUT[SM1OUT45] is used by the deadtime logic.
    ePWM1_EXTB = 3, // PWM1_EXTB signal is used by the deadtime logic.
  };
  
  enum class eSM1SEL23 : uint32_t {
    eSM1PWM23 = 0, // Generated SM1PWM23 signal is used by the deadtime logic.
    eINVERTED_SM1PWM23 = 1, // Inverted generated SM1PWM23 signal is used by the deadtime logic.
    eSM1OUT23 = 2, // SWCOUT[SM1OUT23] is used by the deadtime logic.
    ePWM1_EXTA = 3, // PWM1_EXTA signal is used by the deadtime logic.
  };
  
  enum class eSM2SEL45 : uint32_t {
    eSM2PWM45 = 0, // Generated SM2PWM45 signal is used by the deadtime logic.
    eINVERTED_SM2PWM45 = 1, // Inverted generated SM2PWM45 signal is used by the deadtime logic.
    eSM2OUT45 = 2, // SWCOUT[SM2OUT45] is used by the deadtime logic.
    ePWM2_EXTB = 3, // PWM2_EXTB signal is used by the deadtime logic.
  };
  
  enum class eSM2SEL23 : uint32_t {
    eSM2PWM23 = 0, // Generated SM2PWM23 signal is used by the deadtime logic.
    eINVERTED_SM2PWM23 = 1, // Inverted generated SM2PWM23 signal is used by the deadtime logic.
    eSM2OUT23 = 2, // SWCOUT[SM2OUT23] is used by the deadtime logic.
    ePWM2_EXTA = 3, // PWM2_EXTA signal is used by the deadtime logic.
  };
  
  enum class eSM3SEL45 : uint32_t {
    eSM3PWM45 = 0, // Generated SM3PWM45 signal is used by the deadtime logic.
    eINVERTED_SM3PWM45 = 1, // Inverted generated SM3PWM45 signal is used by the deadtime logic.
    eSM3OUT45 = 2, // SWCOUT[SM3OUT45] is used by the deadtime logic.
    ePWM3_EXTB = 3, // PWM3_EXTB signal is used by the deadtime logic.
  };
  
  enum class eSM3SEL23 : uint32_t {
    eSM3PWM23 = 0, // Generated SM3PWM23 signal is used by the deadtime logic.
    eINVERTED_SM3PWM23 = 1, // Inverted generated SM3PWM23 signal is used by the deadtime logic.
    eSM3OUT23 = 2, // SWCOUT[SM3OUT23] is used by the deadtime logic.
    ePWM3_EXTA = 3, // PWM3_EXTA signal is used by the deadtime logic.
  };
  
  // Bit field definition.
  struct {
    eSM0SEL45 SM0SEL45 : 2;
    eSM0SEL23 SM0SEL23 : 2;
    eSM1SEL45 SM1SEL45 : 2;
    eSM1SEL23 SM1SEL23 : 2;
    eSM2SEL45 SM2SEL45 : 2;
    eSM2SEL23 SM2SEL23 : 2;
    eSM3SEL45 SM3SEL45 : 2;
    eSM3SEL23 SM3SEL23 : 2;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DTSRCSEL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DTSRCSEL &Instance() { return *reinterpret_cast<volatile DTSRCSEL*>(0x40198186); }
};

// Master Control Register
//
union MCTRL {
  
  enum class eLDOK : uint32_t {
    eDISABLED = 0, // Do not load new values.
    eENABLED = 1, // Load prescaler, modulus, and PWM values of the corresponding submodule.
  };
  
  enum class eRUN : uint32_t {
    eDISABLED = 0, // PWM counter is stopped, but PWM outputs will hold the current state.
    eENABLED = 1, // PWM counter is started in the corresponding submodule.
  };
  
  enum class eIPOL : uint32_t {
    ePWM23 = 0, // PWM23 is used to generate complementary PWM pair in the corresponding submodule.
    ePWM45 = 1, // PWM45 is used to generate complementary PWM pair in the corresponding submodule.
  };
  
  // Bit field definition.
  struct {
    eLDOK LDOK : 4;
    uint32_t CLDOK : 4;
    eRUN RUN : 4;
    eIPOL IPOL : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCTRL &Instance() { return *reinterpret_cast<volatile MCTRL*>(0x40198188); }
};

// Master Control 2 Register
//
union MCTRL2 {
  
  enum class eMONPLL : uint32_t {
    eNOTLOCKED_DO_NOT_MON_PLL = 0, // Not locked. Do not monitor PLL operation. Resetting of the fractional delay block in case of PLL losing lock will be controlled by software.
    eNOTLOCKED_MON_PLL = 1, // Not locked. Monitor PLL operation to automatically disable the fractional delay block when the PLL encounters problems.
    eLOCKED_DO_NOT_MON_PLL = 2, // Locked. Do not monitor PLL operation. Resetting of the fractional delay block in case of PLL losing lock will be controlled by software. These bits are write protected until the next reset.
    eLOCKED_MON_PLL = 3, // Locked. Monitor PLL operation to automatically disable the fractional delay block when the PLL encounters problems. These bits are write protected until the next reset.
  };
  
  // Bit field definition.
  struct {
    eMONPLL MONPLL : 2;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MCTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MCTRL2 &Instance() { return *reinterpret_cast<volatile MCTRL2*>(0x4019818A); }
};

// Fault Control Register
//
union FCTRL0 {
  
  enum class eFIE : uint32_t {
    eDISABLED = 0, // FAULTx CPU interrupt requests disabled.
    eENABLED = 1, // FAULTx CPU interrupt requests enabled.
  };
  
  enum class eFSAFE : uint32_t {
    eNORMAL = 0, // Normal mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFPINx]. If neither FHALF nor FFULL is set then the fault condition cannot be cleared. The PWM outputs disabled by this fault input will not be re-enabled until the actual FAULTx input signal de-asserts since the fault input will combinationally disable the PWM outputs (as programmed in DISMAPn).
    eSAFE = 1, // Safe mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear and FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL]. If neither FHLAF nor FFULL is set, then the fault condition cannot be cleared.
  };
  
  enum class eFAUTO : uint32_t {
    eMANUAL = 0, // Manual fault clearing. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending the states of FSTS[FHALF] and FSTS[FFULL]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared. This is further controlled by FCTRL[FSAFE].
    eAUTOMATIC = 1, // Automatic fault clearing. PWM outputs disabled by this fault are enabled when FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFLAGx]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared.
  };
  
  enum class eFLVL : uint32_t {
    eLOGIC_0 = 0, // A logic 0 on the fault input indicates a fault condition.
    eLOGIC_1 = 1, // A logic 1 on the fault input indicates a fault condition.
  };
  
  // Bit field definition.
  struct {
    eFIE FIE : 4;
    eFSAFE FSAFE : 4;
    eFAUTO FAUTO : 4;
    eFLVL FLVL : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FCTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL0 &Instance() { return *reinterpret_cast<volatile FCTRL0*>(0x4019818C); }
};

// Fault Status Register
//
union FSTS0 {
  
  enum class eFFLAG : uint32_t {
    eNO_FLAG = 0, // No fault on the FAULTx pin.
    eFLAG = 1, // Fault on the FAULTx pin.
  };
  
  enum class eFFULL : uint32_t {
    ePWM_OUTPUTS_NOT_REENABLED = 0, // PWM outputs are not re-enabled at the start of a full cycle
    ePWM_OUTPUTS_REENABLED = 1, // PWM outputs are re-enabled at the start of a full cycle
  };
  
  enum class eFHALF : uint32_t {
    ePWM_OUTPUTS_NOT_REENABLED = 0, // PWM outputs are not re-enabled at the start of a half cycle.
    ePWM_OUTPUTS_REENABLED = 1, // PWM outputs are re-enabled at the start of a half cycle (as defined by VAL0).
  };
  
  // Bit field definition.
  struct {
    eFFLAG FFLAG : 4;
    eFFULL FFULL : 4;
    uint32_t FFPIN : 4;
    eFHALF FHALF : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FSTS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FSTS0 &Instance() { return *reinterpret_cast<volatile FSTS0*>(0x4019818E); }
};

// Fault Filter Register
//
union FFILT0 {
  
  enum class eGSTR : uint32_t {
    eDISABLED = 0, // Fault input glitch stretching is disabled.
    eENABLED = 1, // Input fault signals will be stretched to at least 2 IPBus clock cycles.
  };
  
  // Bit field definition.
  struct {
    uint32_t FILT_PER : 8;
    uint32_t FILT_CNT : 3;
    uint32_t _reserved_0 : 4;
    eGSTR GSTR : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FFILT0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FFILT0 &Instance() { return *reinterpret_cast<volatile FFILT0*>(0x40198190); }
};

// Fault Test Register
//
union FTST0 {
  
  enum class eFTEST : uint32_t {
    eNO_FAULT = 0, // No fault
    eFAULT = 1, // Cause a simulated fault
  };
  
  // Bit field definition.
  struct {
    eFTEST FTEST : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FTST0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FTST0 &Instance() { return *reinterpret_cast<volatile FTST0*>(0x40198192); }
};

// Fault Control 2 Register
//
union FCTRL20 {
  
  enum class eNOCOMB : uint32_t {
    eENABLED = 0, // There is a combinational link from the fault inputs to the PWM outputs. The fault inputs are combined with the filtered and latched fault signals to disable the PWM outputs.
    eDISABLED = 1, // The direct combinational path from the fault inputs to the PWM outputs is disabled and the filtered and latched fault signals are used to disable the PWM outputs.
  };
  
  // Bit field definition.
  struct {
    eNOCOMB NOCOMB : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  FCTRL20() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile FCTRL20 &Instance() { return *reinterpret_cast<volatile FCTRL20*>(0x40198194); }
};



} // namespace nPWM4