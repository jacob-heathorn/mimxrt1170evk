#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// // CMP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nCMP2 {


// Version ID Register
//
union VERID {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t FEATURE : 16;
    uint32_t MINOR : 8;
    uint32_t MAJOR : 8;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  VERID() = delete;
  inline void Reset() volatile { this->value = 0x01000000; }
  static inline volatile VERID &Instance() { return *reinterpret_cast<volatile VERID*>(0x401A8000); }
};

// Parameter Register
//
union PARAM {
  
  // Enum definitions.
  
  // Bit field definition.
  struct {
    uint32_t PARAM : 32;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  PARAM() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PARAM &Instance() { return *reinterpret_cast<volatile PARAM*>(0x401A8004); }
};

// CMP Control Register 0
//
union C0 {
  
  // Enum definitions.
  enum class eHYSTCTR : uint32_t {
    eHYSTCTR_0 = 0, // The hard block output has level 0 hysteresis internally.
    eHYSTCTR_1 = 1, // The hard block output has level 1 hysteresis internally.
    eHYSTCTR_2 = 2, // The hard block output has level 2 hysteresis internally.
    eHYSTCTR_3 = 3, // The hard block output has level 3 hysteresis internally.
  };
  enum class eFILTER_CNT : uint32_t {
    eFILTER_CNT_0 = 0, // Filter is disabled. If SE = 1, then COUT is a logic zero (this is not a legal state, and is not recommended). If SE = 0, COUT = COUTA.
    eFILTER_CNT_1 = 1, // 1 consecutive sample must agree (comparator output is simply sampled).
    eFILTER_CNT_2 = 2, // 2 consecutive samples must agree.
    eFILTER_CNT_3 = 3, // 3 consecutive samples must agree.
    eFILTER_CNT_4 = 4, // 4 consecutive samples must agree.
    eFILTER_CNT_5 = 5, // 5 consecutive samples must agree.
    eFILTER_CNT_6 = 6, // 6 consecutive samples must agree.
    eFILTER_CNT_7 = 7, // 7 consecutive samples must agree.
  };
  enum class eEN : uint32_t {
    eEN_0 = 0, // Analog Comparator is disabled.
    eEN_1 = 1, // Analog Comparator is enabled.
  };
  enum class eOPE : uint32_t {
    eOPE_0 = 0, // When OPE is 0, the comparator output (after window/filter settings dependent on software configuration) is not available to a packaged pin.
    eOPE_1 = 1, // When OPE is 1, and if the software has configured the comparator to own a packaged pin, the comparator is available in a packaged pin.
  };
  enum class eCOS : uint32_t {
    eCOS_0 = 0, // Set CMPO to equal COUT (filtered comparator output).
    eCOS_1 = 1, // Set CMPO to equal COUTA (unfiltered comparator output).
  };
  enum class eINVT : uint32_t {
    eINVT_0 = 0, // Does not invert the comparator output.
    eINVT_1 = 1, // Inverts the comparator output.
  };
  enum class ePMODE : uint32_t {
    ePMODE_0 = 0, // Low Speed (LS) comparison mode is selected.
    ePMODE_1 = 1, // High Speed (HS) comparison mode is selected.
  };
  enum class eWE : uint32_t {
    eWE_0 = 0, // Windowing mode is not selected.
    eWE_1 = 1, // Windowing mode is selected.
  };
  enum class eSE : uint32_t {
    eSE_0 = 0, // Sampling mode is not selected.
    eSE_1 = 1, // Sampling mode is selected.
  };
  enum class eCFF : uint32_t {
    eCFF_0 = 0, // A falling edge has not been detected on COUT.
    eCFF_1 = 1, // A falling edge on COUT has occurred.
  };
  enum class eCFR : uint32_t {
    eCFR_0 = 0, // A rising edge has not been detected on COUT.
    eCFR_1 = 1, // A rising edge on COUT has occurred.
  };
  enum class eIEF : uint32_t {
    eIEF_0 = 0, // Interrupt is disabled.
    eIEF_1 = 1, // Interrupt is enabled.
  };
  enum class eIER : uint32_t {
    eIER_0 = 0, // Interrupt is disabled.
    eIER_1 = 1, // Interrupt is enabled.
  };
  enum class eDMAEN : uint32_t {
    eDMAEN_0 = 0, // DMA is disabled.
    eDMAEN_1 = 1, // DMA is enabled.
  };
  enum class eLINKEN : uint32_t {
    eLINKEN_0 = 0, // CMP to DAC link is disabled
    eLINKEN_1 = 1, // CMP to DAC link is enabled.
  };
  
  // Bit field definition.
  struct {
    eHYSTCTR HYSTCTR : 2;
    uint32_t _reserved_1 : 2;
    eFILTER_CNT FILTER_CNT : 3;
    uint32_t _reserved_2 : 1;
    eEN EN : 1;
    eOPE OPE : 1;
    eCOS COS : 1;
    eINVT INVT : 1;
    ePMODE PMODE : 1;
    uint32_t _reserved_7 : 1;
    eWE WE : 1;
    eSE SE : 1;
    uint32_t FPR : 8;
    uint32_t COUT : 1;
    eCFF CFF : 1;
    eCFR CFR : 1;
    eIEF IEF : 1;
    eIER IER : 1;
    uint32_t _reserved_15 : 1;
    eDMAEN DMAEN : 1;
    eLINKEN LINKEN : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  C0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile C0 &Instance() { return *reinterpret_cast<volatile C0*>(0x401A8008); }
};

// CMP Control Register 1
//
union C1 {
  
  // Enum definitions.
  enum class eDMODE : uint32_t {
    eDMODE_0 = 0, // DAC is selected to work in low speed and low power mode.
    eDMODE_1 = 1, // DAC is selected to work in high speed high power mode.
  };
  enum class eVRSEL : uint32_t {
    eVRSEL_0 = 0, // Vin1 is selected as resistor ladder network supply reference Vin. Vin1 is from internal PMC.
    eVRSEL_1 = 1, // Vin2 is selected as resistor ladder network supply reference Vin. Vin2 is from PAD.
  };
  enum class eDACEN : uint32_t {
    eDACEN_0 = 0, // DAC is disabled.
    eDACEN_1 = 1, // DAC is enabled.
  };
  enum class eMSEL : uint32_t {
    eMSEL_0 = 0, // Internal Negative Input 0 for Minus Channel -- Internal Minus Input
    eMSEL_1 = 1, // External Input 1 for Minus Channel -- Reference Input 0
    eMSEL_2 = 2, // External Input 2 for Minus Channel -- Reference Input 1
    eMSEL_3 = 3, // External Input 3 for Minus Channel -- Reference Input 2
    eMSEL_4 = 4, // External Input 4 for Minus Channel -- Reference Input 3
    eMSEL_5 = 5, // External Input 5 for Minus Channel -- Reference Input 4
    eMSEL_6 = 6, // External Input 6 for Minus Channel -- Reference Input 5
    eMSEL_7 = 7, // Internal 8b DAC output
  };
  enum class ePSEL : uint32_t {
    ePSEL_0 = 0, // Internal Positive Input 0 for Plus Channel -- Internal Plus Input
    ePSEL_1 = 1, // External Input 1 for Plus Channel -- Reference Input 0
    ePSEL_2 = 2, // External Input 2 for Plus Channel -- Reference Input 1
    ePSEL_3 = 3, // External Input 3 for Plus Channel -- Reference Input 2
    ePSEL_4 = 4, // External Input 4 for Plus Channel -- Reference Input 3
    ePSEL_5 = 5, // External Input 5 for Plus Channel -- Reference Input 4
    ePSEL_6 = 6, // External Input 6 for Plus Channel -- Reference Input 5
    ePSEL_7 = 7, // Internal 8b DAC output
  };
  
  // Bit field definition.
  struct {
    uint32_t VOSEL : 8;
    eDMODE DMODE : 1;
    eVRSEL VRSEL : 1;
    eDACEN DACEN : 1;
    uint32_t _reserved_4 : 5;
    uint32_t CHN0 : 1;
    uint32_t CHN1 : 1;
    uint32_t CHN2 : 1;
    uint32_t CHN3 : 1;
    uint32_t CHN4 : 1;
    uint32_t CHN5 : 1;
    uint32_t _reserved_10 : 2;
    eMSEL MSEL : 3;
    uint32_t _reserved_11 : 1;
    ePSEL PSEL : 3;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  C1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile C1 &Instance() { return *reinterpret_cast<volatile C1*>(0x401A800C); }
};

// CMP Control Register 2
//
union C2 {
  
  // Enum definitions.
  enum class eNSAM : uint32_t {
    eNSAM_0 = 0, // The comparison result is sampled as soon as the active channel is scanned in one round-robin clock.
    eNSAM_1 = 1, // The sampling takes place 1 round-robin clock cycle after the next cycle of the round-robin clock.
    eNSAM_2 = 2, // The sampling takes place 2 round-robin clock cycles after the next cycle of the round-robin clock.
    eNSAM_3 = 3, // The sampling takes place 3 round-robin clock cycles after the next cycle of the round-robin clock.
  };
  enum class eFXMXCH : uint32_t {
    eFXMXCH_0 = 0, // External Reference Input 0 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_1 = 1, // External Reference Input 1 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_2 = 2, // External Reference Input 2 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_3 = 3, // External Reference Input 3 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_4 = 4, // External Reference Input 4 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_5 = 5, // External Reference Input 5 is selected as the fixed reference input for the fixed mux port.
    eFXMXCH_7 = 7, // The 8bit DAC is selected as the fixed reference input for the fixed mux port.
  };
  enum class eFXMP : uint32_t {
    eFXMP_0 = 0, // The Plus port is fixed. Only the inputs to the Minus port are swept in each round.
    eFXMP_1 = 1, // The Minus port is fixed. Only the inputs to the Plus port are swept in each round.
  };
  enum class eRRIE : uint32_t {
    eRRIE_0 = 0, // The round-robin interrupt is disabled.
    eRRIE_1 = 1, // The round-robin interrupt is enabled when a comparison result changes from the last sample.
  };
  
  // Bit field definition.
  struct {
    uint32_t ACOn : 6;
    uint32_t _reserved_1 : 2;
    uint32_t INITMOD : 6;
    eNSAM NSAM : 2;
    uint32_t CH0F : 1;
    uint32_t CH1F : 1;
    uint32_t CH2F : 1;
    uint32_t CH3F : 1;
    uint32_t CH4F : 1;
    uint32_t CH5F : 1;
    uint32_t _reserved_9 : 3;
    eFXMXCH FXMXCH : 3;
    uint32_t _reserved_10 : 1;
    eFXMP FXMP : 1;
    eRRIE RRIE : 1;
    uint32_t _reserved_end : 1;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  C2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile C2 &Instance() { return *reinterpret_cast<volatile C2*>(0x401A8010); }
};

// CMP Control Register 3
//
union C3 {
  
  // Enum definitions.
  enum class eACPH2TC : uint32_t {
    eACPH2TC_0 = 0, // Phase2 active time in one sampling period equals to T
    eACPH2TC_1 = 1, // Phase2 active time in one sampling period equals to 2*T
    eACPH2TC_2 = 2, // Phase2 active time in one sampling period equals to 4*T
    eACPH2TC_3 = 3, // Phase2 active time in one sampling period equals to 8*T
    eACPH2TC_4 = 4, // Phase2 active time in one sampling period equals to 16*T
    eACPH2TC_5 = 5, // Phase2 active time in one sampling period equals to 32*T
    eACPH2TC_6 = 6, // Phase2 active time in one sampling period equals to 64*T
    eACPH2TC_7 = 7, // Phase2 active time in one sampling period equals to 16*T
  };
  enum class eACPH1TC : uint32_t {
    eACPH1TC_0 = 0, // Phase1 active time in one sampling period equals to T
    eACPH1TC_1 = 1, // Phase1 active time in one sampling period equals to 2*T
    eACPH1TC_2 = 2, // Phase1 active time in one sampling period equals to 4*T
    eACPH1TC_3 = 3, // Phase1 active time in one sampling period equals to 8*T
    eACPH1TC_4 = 4, // Phase1 active time in one sampling period equals to T
    eACPH1TC_5 = 5, // Phase1 active time in one sampling period equals to T
    eACPH1TC_6 = 6, // Phase1 active time in one sampling period equals to T
    eACPH1TC_7 = 7, // Phase1 active time in one sampling period equals to 0
  };
  enum class eACSAT : uint32_t {
    eACSAT_0 = 0, // The sampling time equals to T
    eACSAT_1 = 1, // The sampling time equasl to 2*T
    eACSAT_2 = 2, // The sampling time equasl to 4*T
    eACSAT_3 = 3, // The sampling time equasl to 8*T
    eACSAT_4 = 4, // The sampling time equasl to 16*T
    eACSAT_5 = 5, // The sampling time equasl to 32*T
    eACSAT_6 = 6, // The sampling time equasl to 64*T
    eACSAT_7 = 7, // The sampling time equasl to 256*T
  };
  enum class eDMCS : uint32_t {
    eDMCS_0 = 0, // Slow clock is selected for the timing generation.
    eDMCS_1 = 1, // Fast clock is selected for the timing generation.
  };
  enum class eRDIVE : uint32_t {
    eRDIVE_0 = 0, // The resistor is not enabled even when either NCHEN or PCHEN is set to1 but the actual input is in the range of 0 - 1.8v.
    eRDIVE_1 = 1, // The resistor is enabled because the inputs are above 1.8v.
  };
  enum class eNCHCTEN : uint32_t {
    eNCHCTEN_0 = 0, // Negative channel is in Discrete Mode and special timing needs to be configured.
    eNCHCTEN_1 = 1, // Negative channel is in Continuous Mode and no special timing is requried.
  };
  enum class ePCHCTEN : uint32_t {
    ePCHCTEN_0 = 0, // Positive channel is in Discrete Mode and special timing needs to be configured.
    ePCHCTEN_1 = 1, // Positive channel is in Continuous Mode and no special timing is requried.
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 4;
    eACPH2TC ACPH2TC : 3;
    uint32_t _reserved_1 : 1;
    eACPH1TC ACPH1TC : 3;
    uint32_t _reserved_2 : 1;
    eACSAT ACSAT : 3;
    uint32_t _reserved_3 : 1;
    eDMCS DMCS : 1;
    uint32_t _reserved_4 : 3;
    eRDIVE RDIVE : 1;
    uint32_t _reserved_5 : 3;
    eNCHCTEN NCHCTEN : 1;
    uint32_t _reserved_6 : 3;
    ePCHCTEN PCHCTEN : 1;
    uint32_t _reserved_end : 3;
  } bits;          // Bit-field struct (auto-filling reserved gaps)
  
  // Full 32-bit register value.
  uint32_t value;

  C3() = delete;
  inline void Reset() volatile { this->value = 0x11000000; }
  static inline volatile C3 &Instance() { return *reinterpret_cast<volatile C3*>(0x401A8014); }
};


} // namespace nCMP2