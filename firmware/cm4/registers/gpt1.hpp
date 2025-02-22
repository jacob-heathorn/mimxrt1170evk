#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// GPT
namespace nGPT1 {


// GPT Control Register
union CR {
  
  // GPT Enable
  enum class eEN : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // GPT Enable Mode
  enum class eENMOD : uint32_t {
    // Restart counting from their frozen values after GPT is enabled (EN=1).
    eRESUME_COUNT = 0,
    // Reset counting from 0 after GPT is enabled (EN=1).
    eZERO_COUNT = 1,
  };
  
  // GPT Debug Mode Enable
  enum class eDBGEN : uint32_t {
    // Disable in Debug mode
    eDEBUG_DIS = 0,
    // Enable in Debug mode
    eDEBUG_EN = 1,
  };
  
  // GPT Wait Mode Enable
  enum class eWAITEN : uint32_t {
    // Disable in Wait mode
    eWAIT_DIS = 0,
    // Enable in Wait mode
    eWAIT_EN = 1,
  };
  
  // GPT Doze Mode Enable
  enum class eDOZEEN : uint32_t {
    // Disable in Doze mode
    eDOZE_DIS = 0,
    // Enable in Doze mode
    eDOZE_EN = 1,
  };
  
  // GPT Stop Mode Enable
  enum class eSTOPEN : uint32_t {
    // Disable in Stop mode
    eSTOP_DIS = 0,
    // Enable in Stop mode
    eSTOP_EN = 1,
  };
  
  // Clock Source Select
  enum class eCLKSRC : uint32_t {
    // No clock
    eNO_CLOCK = 0,
    // Peripheral Clock (ipg_clk)
    eCLOCK_001 = 1,
    // High Frequency Reference Clock (ipg_clk_highfreq)
    eCLOCK_010 = 2,
    // External Clock
    eCLOCK_011 = 3,
    // Low Frequency Reference Clock (ipg_clk_32k)
    eCLOCK_100 = 4,
    // Oscillator as Reference Clock (ipg_clk_16M)
    eCLOCK_101 = 5,
  };
  
  // Free-Run or Restart Mode
  enum class eFRR : uint32_t {
    // Restart mode. After a compare event, the counter resets to 0x0000_0000 and resumes counting.
    eRESTART = 0,
    // Free-Run mode. After a compare event, the counter continues counting until 0xFFFF_FFFF and then rolls over to 0.
    eFREE_RUN = 1,
  };
  
  // Enable Oscillator Clock Input
  enum class eEN_24M : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Software Reset
  enum class eSWR : uint32_t {
    // GPT is not in software reset state
    eNOT_SWRESET = 0,
    // GPT is in software reset state
    eSWRESET = 1,
  };
  
  // Input Capture Operating Mode for Channel 1
  enum class eIM1 : uint32_t {
    // Capture disabled
    eDISABLED = 0,
    // Capture on rising edge only
    eRISING = 1,
    // Capture on falling edge only
    eFALLING = 2,
    // Capture on both edges
    eBOTH = 3,
  };
  
  // Input Capture Operating Mode for Channel 2
  enum class eIM2 : uint32_t {
    // Capture disabled
    eDISABLED = 0,
    // Capture on rising edge only
    eRISING = 1,
    // Capture on falling edge only
    eFALLING = 2,
    // Capture on both edges
    eBOTH = 3,
  };
  
  // Output Compare Operating Mode for Channel 1
  enum class eOM1 : uint32_t {
    // Output disabled. No response on pin.
    eDISABLED = 0,
    // Toggle output pin
    eTOGGLE = 1,
    // Clear output pin
    eCLEAR = 2,
    // Set output pin
    eSET = 3,
    // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
    ePULSE = 4,
  };
  
  // Output Compare Operating Mode for Channel 2
  enum class eOM2 : uint32_t {
    // Output disabled. No response on pin.
    eDISABLED = 0,
    // Toggle output pin
    eTOGGLE = 1,
    // Clear output pin
    eCLEAR = 2,
    // Set output pin
    eSET = 3,
    // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
    ePULSE = 4,
  };
  
  // Output Compare Operating Mode for Channel 3
  enum class eOM3 : uint32_t {
    // Output disabled. No response on pin.
    eDISABLED = 0,
    // Toggle output pin
    eTOGGLE = 1,
    // Clear output pin
    eCLEAR = 2,
    // Set output pin
    eSET = 3,
    // Generate a low pulse that is one input clock cycle wide on the output pin. When OMn is first programmed as 1xx, the output pin is set to one immediately on the next input clock (if it was not one already). "Input clock" here refers to the clock selected by the CLKSRC field of this register.
    ePULSE = 4,
  };
  
  // Force Output Compare for Channel 1
  enum class eFO1 : uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };
  
  // Force Output Compare for Channel 2
  enum class eFO2 : uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };
  
  // Force Output Compare for Channel 3
  enum class eFO3 : uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - GPT Enable
    eEN EN : 1;
    // read-write - GPT Enable Mode
    eENMOD ENMOD : 1;
    // read-write - GPT Debug Mode Enable
    eDBGEN DBGEN : 1;
    // read-write - GPT Wait Mode Enable
    eWAITEN WAITEN : 1;
    // read-write - GPT Doze Mode Enable
    eDOZEEN DOZEEN : 1;
    // read-write - GPT Stop Mode Enable
    eSTOPEN STOPEN : 1;
    // read-write - Clock Source Select
    eCLKSRC CLKSRC : 3;
    // read-write - Free-Run or Restart Mode
    eFRR FRR : 1;
    // read-write - Enable Oscillator Clock Input
    eEN_24M EN_24M : 1;
    uint32_t _reserved_0 : 4;
    // read-write - Software Reset
    eSWR SWR : 1;
    // read-write - Input Capture Operating Mode for Channel 1
    eIM1 IM1 : 2;
    // read-write - Input Capture Operating Mode for Channel 2
    eIM2 IM2 : 2;
    // read-write - Output Compare Operating Mode for Channel 1
    eOM1 OM1 : 3;
    // read-write - Output Compare Operating Mode for Channel 2
    eOM2 OM2 : 3;
    // read-write - Output Compare Operating Mode for Channel 3
    eOM3 OM3 : 3;
    // read-write - Force Output Compare for Channel 1
    eFO1 FO1 : 1;
    // read-write - Force Output Compare for Channel 2
    eFO2 FO2 : 1;
    // read-write - Force Output Compare for Channel 3
    eFO3 FO3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x400EC000); }
};

// GPT Prescaler Register
union PR {
  
  // Prescaler divide value
  enum class ePRESCALER : uint32_t {
    // Divide by 1
    eDIV_BY_1 = 0,
    // Divide by 2
    eDIV_BY_2 = 1,
    // Divide by 4096
    eDIV_BY_4096 = 4095,
  };
  
  // Prescaler divide value for the oscillator clock
  enum class ePRESCALER24M : uint32_t {
    // Divide by 1
    eDIV_BY_1 = 0,
    // Divide by 2
    eDIV_BY_2 = 1,
    // Divide by 16
    eDIV_BY_16 = 15,
  };
  
  // Bit field definition.
  struct {
    // read-write - Prescaler divide value
    ePRESCALER PRESCALER : 12;
    // read-write - Prescaler divide value for the oscillator clock
    ePRESCALER24M PRESCALER24M : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PR &Instance() { return *reinterpret_cast<volatile PR*>(0x400EC004); }
};

// GPT Status Register
union SR {
  
  // Output Compare Flag for Channel 1
  enum class eOF1 : uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };
  
  // Output Compare Flag for Channel 2
  enum class eOF2 : uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };
  
  // Output Compare Flag for Channel 3
  enum class eOF3 : uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };
  
  // Input Capture Flag for Channel 1
  enum class eIF1 : uint32_t {
    // Capture event has not occurred.
    eNO_EVENT = 0,
    // Capture event has occurred.
    eEVENT = 1,
  };
  
  // Input Capture Flag for Channel 2
  enum class eIF2 : uint32_t {
    // Capture event has not occurred.
    eNO_EVENT = 0,
    // Capture event has occurred.
    eEVENT = 1,
  };
  
  // Rollover Flag
  enum class eROV : uint32_t {
    // Rollover has not occurred.
    eNO_ROLLOVER = 0,
    // Rollover has occurred.
    eROLLOVER = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Compare Flag for Channel 1
    eOF1 OF1 : 1;
    // read-write - Output Compare Flag for Channel 2
    eOF2 OF2 : 1;
    // read-write - Output Compare Flag for Channel 3
    eOF3 OF3 : 1;
    // read-write - Input Capture Flag for Channel 1
    eIF1 IF1 : 1;
    // read-write - Input Capture Flag for Channel 2
    eIF2 IF2 : 1;
    // read-write - Rollover Flag
    eROV ROV : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SR &Instance() { return *reinterpret_cast<volatile SR*>(0x400EC008); }
};

// GPT Interrupt Register
union IR {
  
  // Output Compare Flag for Channel 1 Interrupt Enable
  enum class eOF1IE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Output Compare Flag for Channel 2 Interrupt Enable
  enum class eOF2IE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Output Compare Flag for Channel 3 Interrupt Enable
  enum class eOF3IE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Input Capture Flag for Channel 1 Interrupt Enable
  enum class eIF1IE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Input Capture Flag for Channel 2 Interrupt Enable
  enum class eIF2IE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Rollover Interrupt Enable
  enum class eROVIE : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Output Compare Flag for Channel 1 Interrupt Enable
    eOF1IE OF1IE : 1;
    // read-write - Output Compare Flag for Channel 2 Interrupt Enable
    eOF2IE OF2IE : 1;
    // read-write - Output Compare Flag for Channel 3 Interrupt Enable
    eOF3IE OF3IE : 1;
    // read-write - Input Capture Flag for Channel 1 Interrupt Enable
    eIF1IE IF1IE : 1;
    // read-write - Input Capture Flag for Channel 2 Interrupt Enable
    eIF2IE IF2IE : 1;
    // read-write - Rollover Interrupt Enable
    eROVIE ROVIE : 1;
    uint32_t _reserved_0 : 26;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  IR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile IR &Instance() { return *reinterpret_cast<volatile IR*>(0x400EC00C); }
};

// GPT Output Compare Register
union OCR1 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR1() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR1 &Instance() { return *reinterpret_cast<volatile OCR1*>(0x400EC010); }
};
// GPT Output Compare Register
union OCR2 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR2() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR2 &Instance() { return *reinterpret_cast<volatile OCR2*>(0x400EC014); }
};
// GPT Output Compare Register
union OCR3 {
  
  // Bit field definition.
  struct {
    // read-write - Compare Value
    uint32_t COMP : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OCR3() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile OCR3 &Instance() { return *reinterpret_cast<volatile OCR3*>(0x400EC018); }
};

// GPT Input Capture Register
union ICR1 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value
    uint32_t CAPT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ICR1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR1 &Instance() { return *reinterpret_cast<volatile ICR1*>(0x400EC01C); }
};
// GPT Input Capture Register
union ICR2 {
  
  // Bit field definition.
  struct {
    // read-only - Capture Value
    uint32_t CAPT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  ICR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile ICR2 &Instance() { return *reinterpret_cast<volatile ICR2*>(0x400EC020); }
};

// GPT Counter Register
union CNT {
  
  // Bit field definition.
  struct {
    // read-only - Counter Value
    uint32_t COUNT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CNT &Instance() { return *reinterpret_cast<volatile CNT*>(0x400EC024); }
};


} // namespace nGPT1