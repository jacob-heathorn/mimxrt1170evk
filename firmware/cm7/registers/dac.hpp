#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DAC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nDAC {


// Version Identifier Register
union VERID {
  
  // Feature Identification Number
  enum class eFEATURE : uint32_t {
    // Standard feature set
    eFEATURE_0 = 0,
    // C40 feature set
    eFEATURE_1 = 1,
    // 5V DAC feature set
    eFEATURE_2 = 2,
    // ADC BIST feature set
    eFEATURE_4 = 4,
  };
  
  // Bit field definition.
  struct {
    // read-only - Feature Identification Number
    eFEATURE FEATURE : 16;
    // read-only - Minor version number
    uint32_t MINOR : 8;
    // read-only - Major version number
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x01000000; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x40064000); }
};

// Parameter Register
union PARAM {
  
  // FIFO size
  enum class eFIFOSZ : uint32_t {
    // FIFO depth is 2
    eFIFOSZ_0 = 0,
    // FIFO depth is 4
    eFIFOSZ_1 = 1,
    // FIFO depth is 8
    eFIFOSZ_2 = 2,
    // FIFO depth is 16
    eFIFOSZ_3 = 3,
    // FIFO depth is 32
    eFIFOSZ_4 = 4,
    // FIFO depth is 64
    eFIFOSZ_5 = 5,
    // FIFO depth is 128
    eFIFOSZ_6 = 6,
    // FIFO depth is 256
    eFIFOSZ_7 = 7,
  };
  
  // Bit field definition.
  struct {
    // read-only - FIFO size
    eFIFOSZ FIFOSZ : 3;
    uint32_t _reserved_0 : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00000003; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x40064004); }
};

// DAC Data Register
union DATA {
  
  // Bit field definition.
  struct {
    // write-only - FIFO DATA0
    uint32_t DATA0 : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATA &Instance() { return *reinterpret_cast<volatile DATA*>(0x40064008); }
};

// DAC Status and Control Register
union CR {
  
  // Full Flag
  enum class eFULLF : uint32_t {
    // FIFO is not full.
    eFULLF_0 = 0,
    // FIFO is full.
    eFULLF_1 = 1,
  };
  
  // Nearly Empty Flag
  enum class eNEMPTF : uint32_t {
    // More than one data is available in the FIFO.
    eNEMPTF_0 = 0,
    // One data is available in the FIFO.
    eNEMPTF_1 = 1,
  };
  
  // FIFO Watermark Status Flag
  enum class eWMF : uint32_t {
    // The DAC buffer read pointer has not reached the watermark level.
    eWMF_0 = 0,
    // The DAC buffer read pointer has reached the watermark level.
    eWMF_1 = 1,
  };
  
  // Underflow Flag
  enum class eUDFF : uint32_t {
    // No underflow has occurred since the last time the flag was cleared.
    eUDFF_0 = 0,
    // At least one trigger underflow has occurred since the last time the flag was cleared.
    eUDFF_1 = 1,
  };
  
  // Overflow Flag
  enum class eOVFF : uint32_t {
    // No overflow has occurred since the last time the flag was cleared.
    eOVFF_0 = 0,
    // At least one FIFO overflow has occurred since the last time the flag was cleared.
    eOVFF_1 = 1,
  };
  
  // Full Interrupt Enable
  enum class eFULLIE : uint32_t {
    // FIFO Full interrupt is disabled.
    eFULLIE_0 = 0,
    // FIFO Full interrupt is enabled.
    eFULLIE_1 = 1,
  };
  
  // Nearly Empty Interrupt Enable
  enum class eEMPTIE : uint32_t {
    // FIFO Nearly Empty interrupt is disabled.
    eEMPTIE_0 = 0,
    // FIFO Nearly Empty interrupt is enabled.
    eEMPTIE_1 = 1,
  };
  
  // Watermark Interrupt Enable
  enum class eWTMIE : uint32_t {
    // Watermark interrupt is disabled.
    eWTMIE_0 = 0,
    // Watermark interrupt is enabled.
    eWTMIE_1 = 1,
  };
  
  // DAC Software Trigger
  enum class eSWTRG : uint32_t {
    // The DAC soft trigger is not valid.
    eSWTRG_0 = 0,
    // The DAC soft trigger is valid.
    eSWTRG_1 = 1,
  };
  
  // DAC Trigger Select
  enum class eTRGSEL : uint32_t {
    // The DAC hardware trigger is selected.
    eTRGSEL_0 = 0,
    // The DAC software trigger is selected.
    eTRGSEL_1 = 1,
  };
  
  // DAC Reference Select
  enum class eDACRFS : uint32_t {
    // The DAC selects DACREF_1 as the reference voltage.
    eDACRFS_0 = 0,
    // The DAC selects DACREF_2 as the reference voltage.
    eDACRFS_1 = 1,
  };
  
  // DAC Enable
  enum class eDACEN : uint32_t {
    // The DAC system is disabled.
    eDACEN_0 = 0,
    // The DAC system is enabled.
    eDACEN_1 = 1,
  };
  
  // FIFO Enable
  enum class eFIFOEN : uint32_t {
    // FIFO is disabled and only one level buffer is enabled. Any data written from this buffer goes to conversion.
    eFIFOEN_0 = 0,
    // FIFO is enabled. Data will first read from FIFO to buffer then go to conversion.
    eFIFOEN_1 = 1,
  };
  
  // DAC FIFO Mode Select
  enum class eSWMD : uint32_t {
    // Normal mode
    eSWMD_0 = 0,
    // Swing back mode
    eSWMD_1 = 1,
  };
  
  // Underflow and overflow interrupt enable
  enum class eUVIE : uint32_t {
    // Underflow and overflow interrupt is disabled.
    eUVIE_0 = 0,
    // Underflow and overflow interrupt is enabled.
    eUVIE_1 = 1,
  };
  
  // FIFO Reset
  enum class eFIFORST : uint32_t {
    // No effect
    eFIFORST_0 = 0,
    // FIFO reset
    eFIFORST_1 = 1,
  };
  
  // DMA Enable Select
  enum class eDMAEN : uint32_t {
    // DMA is disabled.
    eDMAEN_0 = 0,
    // DMA is enabled. When DMA is enabled, the DMA request will be generated by original interrupts. The interrupts will not be presented on this module at the same time.
    eDMAEN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Full Flag
    eFULLF FULLF : 1;
    // read-write - Nearly Empty Flag
    eNEMPTF NEMPTF : 1;
    // read-write - FIFO Watermark Status Flag
    eWMF WMF : 1;
    // read-write - Underflow Flag
    eUDFF UDFF : 1;
    // read-write - Overflow Flag
    eOVFF OVFF : 1;
    uint32_t _reserved_0 : 3;
    // read-write - Full Interrupt Enable
    eFULLIE FULLIE : 1;
    // read-write - Nearly Empty Interrupt Enable
    eEMPTIE EMPTIE : 1;
    // read-write - Watermark Interrupt Enable
    eWTMIE WTMIE : 1;
    uint32_t _reserved_1 : 1;
    // read-write - DAC Software Trigger
    eSWTRG SWTRG : 1;
    // read-write - DAC Trigger Select
    eTRGSEL TRGSEL : 1;
    // read-write - DAC Reference Select
    eDACRFS DACRFS : 1;
    // read-write - DAC Enable
    eDACEN DACEN : 1;
    // read-write - FIFO Enable
    eFIFOEN FIFOEN : 1;
    // read-write - DAC FIFO Mode Select
    eSWMD SWMD : 1;
    // read-write - Underflow and overflow interrupt enable
    eUVIE UVIE : 1;
    uint32_t _reserved_2 : 2;
    // read-write - FIFO Reset
    eFIFORST FIFORST : 1;
    // read-write - Software reset
    uint32_t SWRST : 1;
    // read-write - DMA Enable Select
    eDMAEN DMAEN : 1;
    // read-write - Watermark Level Select
    uint32_t WML : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile CR &Instance() { return *reinterpret_cast<volatile CR*>(0x4006400C); }
};

// DAC FIFO Pointer Register
union PTR {
  
  // Bit field definition.
  struct {
    // read-only - DACWFP
    uint32_t DACWFP : 8;
    uint32_t _reserved_0 : 8;
    // read-only - DACRFP
    uint32_t DACRFP : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PTR &Instance() { return *reinterpret_cast<volatile PTR*>(0x40064010); }
};

// DAC Status and Control Register 2
union CR2 {
  
  // Buffer Enable
  enum class eBFEN : uint32_t {
    // Opamp is not used as buffer
    eBFEN_0 = 0,
    // Opamp is used as buffer
    eBFEN_1 = 1,
  };
  
  // Optional Enable
  enum class eOEN : uint32_t {
    // Output buffer is not bypassed
    eOEN_0 = 0,
    // Output buffer is bypassed
    eOEN_1 = 1,
  };
  
  // Buffer Middle Speed Select
  enum class eBFMS : uint32_t {
    // Buffer middle speed not selected
    eBFMS_0 = 0,
    // Buffer middle speed selected
    eBFMS_1 = 1,
  };
  
  // Buffer High Speed Select
  enum class eBFHS : uint32_t {
    // Buffer high speed not selected
    eBFHS_0 = 0,
    // Buffer high speed selected
    eBFHS_1 = 1,
  };
  
  // Internal PTAT (Proportional To Absolute Temperature) Current Reference Select
  enum class eIREF2 : uint32_t {
    // Internal PTAT Current Reference not selected
    eIREF2_0 = 0,
    // Internal PTAT Current Reference selected
    eIREF2_1 = 1,
  };
  
  // Internal ZTC (Zero Temperature Coefficient) Current Reference Select
  enum class eIREF1 : uint32_t {
    // Internal ZTC Current Reference not selected
    eIREF1_0 = 0,
    // Internal ZTC Current Reference selected
    eIREF1_1 = 1,
  };
  
  // Internal Current Reference Select
  enum class eIREF : uint32_t {
    // Internal Current Reference not selected
    eIREF_0 = 0,
    // Internal Current Reference selected
    eIREF_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Buffer Enable
    eBFEN BFEN : 1;
    // read-write - Optional Enable
    eOEN OEN : 1;
    // read-write - Buffer Middle Speed Select
    eBFMS BFMS : 1;
    // read-write - Buffer High Speed Select
    eBFHS BFHS : 1;
    // read-write - Internal PTAT (Proportional To Absolute Temperature) Current Reference Select
    eIREF2 IREF2 : 1;
    // read-write - Internal ZTC (Zero Temperature Coefficient) Current Reference Select
    eIREF1 IREF1 : 1;
    // read-write - Internal Current Reference Select
    eIREF IREF : 1;
    uint32_t _reserved_0 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CR2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CR2 &Instance() { return *reinterpret_cast<volatile CR2*>(0x40064014); }
};


} // namespace nDAC