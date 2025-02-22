#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// GPT
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nGPT3 {


// GPT Control Register
//
union CR {
  
  enum class eEN : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eENMOD : uint32_t {
    eRESUME_COUNT = 0, // Restart counting from their frozen values after GPT is enabled (EN=1).
    eZERO_COUNT = 1, // Reset counting from 0 after GPT is enabled (EN=1).
  };
  
  enum class eDBGEN : uint32_t {
    eDEBUG_DIS = 0, // Disable in Debug mode
    eDEBUG_EN = 1, // Enable in Debug mode
  };
  
  enum class eWAITEN : uint32_t {
    eWAIT_DIS = 0, // Disable in Wait mode
    eWAIT_EN = 1, // Enable in Wait mode
  };
  
  enum class eDOZEEN : uint32_t {
    eDOZE_DIS = 0, // Disable in Doze mode
    eDOZE_EN = 1, // Enable in Doze mode
  };
  
  enum class eSTOPEN : uint32_t {
    eSTOP_DIS = 0, // Disable in Stop mode
    eSTOP_EN = 1, // Enable in Stop mode
  };
  
  enum class eCLKSRC : uint32_t {
    eNO_CLOCK = 0, // No clock
    eCLOCK_001 = 1, // Peripheral Clock (ipg_clk)
    eCLOCK_010 = 2, // High Frequency Reference Clock (ipg_clk_highfreq)
    eCLOCK_011 = 3, // External Clock
    eCLOCK_100 = 4, // Low Frequency Reference Clock (ipg_clk_32k)
    eCLOCK_101 = 5, // Oscillator as Reference Clock (ipg_clk_16M)
  };
  
  enum class eFRR : uint32_t {
    eRESTART = 0, // Restart mode. After a compare event, the counter resets to 0x0000_0000 and resumes counting.
    eFREE_RUN = 1, // Free-Run mode. After a compare event, the counter continues counting until 0xFFFF_FFFF and then rolls over to 0.
  };
  
  enum class eEN_24M : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eSWR : uint32_t {
    eNOT_SWRESET = 0, // GPT is not in software reset state
    eSWRESET = 1, // GPT is in software reset state
  };
  
  enum class eIM1 : uint32_t {
    eDISABLED = 0, // Capture disabled
    eRISING = 1, // Capture on rising edge only
    eFALLING = 2, // Capture on falling edge only
    eBOTH = 3, // Capture on both edges
  };
  
  enum class eIM2 : uint32_t {
    eDISABLED = 0, // Capture disabled
    eRISING = 1, // Capture on rising edge only
    eFALLING = 2, // Capture on falling edge only
    eBOTH = 3, // Capture on both edges
  };
  
  enum class eOM1 : uint32_t {
    eDISABLED = 0, // Output disabled. No response on pin.
    eTOGGLE = 1, // Toggle output pin
    eCLEAR = 2, // Clear output pin
    eSET = 3, // Set output pin
    ePULSE = 4, // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
  };
  
  enum class eOM2 : uint32_t {
    eDISABLED = 0, // Output disabled. No response on pin.
    eTOGGLE = 1, // Toggle output pin
    eCLEAR = 2, // Clear output pin
    eSET = 3, // Set output pin
    ePULSE = 4, // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
  };
  
  enum class eOM3 : uint32_t {
    eDISABLED = 0, // Output disabled. No response on pin.
    eTOGGLE = 1, // Toggle output pin
    eCLEAR = 2, // Clear output pin
    eSET = 3, // Set output pin
    ePULSE = 4, // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
  };
  
  enum class eFO1 : uint32_t {
    eNO_FORCE = 0, // No effect
    eFORCE = 1, // Trigger the programmed response on the pin
  };
  
  enum class eFO2 : uint32_t {
    eNO_FORCE = 0, // No effect
    eFORCE = 1, // Trigger the programmed response on the pin
  };
  
  enum class eFO3 : uint32_t {
    eNO_FORCE = 0, // No effect
    eFORCE = 1, // Trigger the programmed response on the pin
  };
  
  // Bit field definition.
  struct {
    eEN EN : 1;
    eENMOD ENMOD : 1;
    eDBGEN DBGEN : 1;
    eWAITEN WAITEN : 1;
    eDOZEEN DOZEEN : 1;
    eSTOPEN STOPEN : 1;
    eCLKSRC CLKSRC : 3;
    eFRR FRR : 1;
    eEN_24M EN_24M : 1;
    uint32_t _reserved_0 : 4;
    eSWR SWR : 1;
    eIM1 IM1 : 2;
    eIM2 IM2 : 2;
    eOM1 OM1 : 3;
    eOM2 OM2 : 3;
    eOM3 OM3 : 3;
    eFO1 FO1 : 1;
    eFO2 FO2 : 1;
    eFO3 FO3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x400F4000); }
};

// GPT Prescaler Register
//
union PR {
  
  enum class ePRESCALER : uint32_t {
    eDIV_BY_1 = 0, // Divide by 1
    eDIV_BY_2 = 1, // Divide by 2
    eDIV_BY_4096 = 4095, // Divide by 4096
  };
  
  enum class ePRESCALER24M : uint32_t {
    eDIV_BY_1 = 0, // Divide by 1
    eDIV_BY_2 = 1, // Divide by 2
    eDIV_BY_16 = 15, // Divide by 16
  };
  
  // Bit field definition.
  struct {
    ePRESCALER PRESCALER : 12;
    ePRESCALER24M PRESCALER24M : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PR &Instance() { return *reinterpret_cast<volatile PR*>(0x400F4004); }
};

// GPT Status Register
//
union SR {
  
  enum class eOF1 : uint32_t {
    eNO_EVENT = 0, // Compare event has not occurred.
    eEVENT = 1, // Compare event has occurred.
  };
  
  enum class eOF2 : uint32_t {
    eNO_EVENT = 0, // Compare event has not occurred.
    eEVENT = 1, // Compare event has occurred.
  };
  
  enum class eOF3 : uint32_t {
    eNO_EVENT = 0, // Compare event has not occurred.
    eEVENT = 1, // Compare event has occurred.
  };
  
  enum class eIF1 : uint32_t {
    eNO_EVENT = 0, // Capture event has not occurred.
    eEVENT = 1, // Capture event has occurred.
  };
  
  enum class eIF2 : uint32_t {
    eNO_EVENT = 0, // Capture event has not occurred.
    eEVENT = 1, // Capture event has occurred.
  };
  
  enum class eROV : uint32_t {
    eNO_ROLLOVER = 0, // Rollover has not occurred.
    eROLLOVER = 1, // Rollover has occurred.
  };
  
  // Bit field definition.
  struct {
    eOF1 OF1 : 1;
    eOF2 OF2 : 1;
    eOF3 OF3 : 1;
    eIF1 IF1 : 1;
    eIF2 IF2 : 1;
    eROV ROV : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x400F4008); }
};

// GPT Interrupt Register
//
union IR {
  
  enum class eOF1IE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eOF2IE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eOF3IE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eIF1IE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eIF2IE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eROVIE : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    eOF1IE OF1IE : 1;
    eOF2IE OF2IE : 1;
    eOF3IE OF3IE : 1;
    eIF1IE IF1IE : 1;
    eIF2IE IF2IE : 1;
    eROVIE ROVIE : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IR &Instance() { return *reinterpret_cast<volatile IR*>(0x400F400C); }
};

// GPT Output Compare Register
//
union OCR1 {
  
  // Bit field definition.
  struct {
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR1() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR1 &Instance() { return *reinterpret_cast<volatile OCR1*>(0x400F4010); }
};
// GPT Output Compare Register
//
union OCR2 {
  
  // Bit field definition.
  struct {
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR2() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR2 &Instance() { return *reinterpret_cast<volatile OCR2*>(0x400F4014); }
};
// GPT Output Compare Register
//
union OCR3 {
  
  // Bit field definition.
  struct {
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR3() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR3 &Instance() { return *reinterpret_cast<volatile OCR3*>(0x400F4018); }
};

// GPT Input Capture Register
//
union ICR1 {
  
  // Bit field definition.
  struct {
    uint32_t CAPT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ICR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR1 &Instance() { return *reinterpret_cast<volatile ICR1*>(0x400F401C); }
};
// GPT Input Capture Register
//
union ICR2 {
  
  // Bit field definition.
  struct {
    uint32_t CAPT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ICR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR2 &Instance() { return *reinterpret_cast<volatile ICR2*>(0x400F4020); }
};

// GPT Counter Register
//
union CNT {
  
  // Bit field definition.
  struct {
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNT &Instance() { return *reinterpret_cast<volatile CNT*>(0x400F4024); }
};


} // namespace nGPT3