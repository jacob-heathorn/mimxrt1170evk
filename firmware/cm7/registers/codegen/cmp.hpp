#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// CMP
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Cmp {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u,
        "Cmp: Instance must be one of 1, 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x401A4000u :
      Instance == 2u ? 0x401A8000u :
      Instance == 3u ? 0x401AC000u :
      Instance == 4u ? 0x401B0000u :
      0u;

  // Version ID Register
  struct VERID_fields_ {
    // Feature Specification Number. This read only filed returns the feature set number.
    using FEATURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor Version Number. This read only field returns the minor version number for the module specification.
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major Version Number. This read only field returns the major version number for the module specification.
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VERID_fields_

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x01000000u,
      ftl::mmio::RO,
      typename VERID_fields_::FEATURE,
      typename VERID_fields_::MINOR,
      typename VERID_fields_::MAJOR> {
    using FEATURE = typename VERID_fields_::FEATURE;
    using MINOR = typename VERID_fields_::MINOR;
    using MAJOR = typename VERID_fields_::MAJOR;
  };

  // Parameter Register
  struct PARAM_fields_ {
    // Parameter Registers. This read only filed returns the feature parameters implemented along with the Version ID register.
    using PARAM = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PARAM_fields_

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename PARAM_fields_::PARAM> {
    using value_ = typename PARAM_fields_::PARAM;
  };

  // CMP Control Register 0
  struct C0_fields_ {
    enum class eHYSTCTR : std::uint32_t {
      // The hard block output has level 0 hysteresis internally.
      eHYSTCTR_0 = 0,
      // The hard block output has level 1 hysteresis internally.
      eHYSTCTR_1 = 1,
      // The hard block output has level 2 hysteresis internally.
      eHYSTCTR_2 = 2,
      // The hard block output has level 3 hysteresis internally.
      eHYSTCTR_3 = 3,
    };

    enum class eFILTER_CNT : std::uint32_t {
      // Filter is disabled. If SE = 1, then COUT is a logic zero (this is not a legal state, and is not recommended). If SE = 0, COUT = COUTA.
      eFILTER_CNT_0 = 0,
      // 1 consecutive sample must agree (comparator output is simply sampled).
      eFILTER_CNT_1 = 1,
      // 2 consecutive samples must agree.
      eFILTER_CNT_2 = 2,
      // 3 consecutive samples must agree.
      eFILTER_CNT_3 = 3,
      // 4 consecutive samples must agree.
      eFILTER_CNT_4 = 4,
      // 5 consecutive samples must agree.
      eFILTER_CNT_5 = 5,
      // 6 consecutive samples must agree.
      eFILTER_CNT_6 = 6,
      // 7 consecutive samples must agree.
      eFILTER_CNT_7 = 7,
    };

    enum class eEN : std::uint32_t {
      // Analog Comparator is disabled.
      eEN_0 = 0,
      // Analog Comparator is enabled.
      eEN_1 = 1,
    };

    enum class eOPE : std::uint32_t {
      // When OPE is 0, the comparator output (after window/filter settings dependent on software configuration) is not available to a packaged pin.
      eOPE_0 = 0,
      // When OPE is 1, and if the software has configured the comparator to own a packaged pin, the comparator is available in a packaged pin.
      eOPE_1 = 1,
    };

    enum class eCOS : std::uint32_t {
      // Set CMPO to equal COUT (filtered comparator output).
      eCOS_0 = 0,
      // Set CMPO to equal COUTA (unfiltered comparator output).
      eCOS_1 = 1,
    };

    enum class eINVT : std::uint32_t {
      // Does not invert the comparator output.
      eINVT_0 = 0,
      // Inverts the comparator output.
      eINVT_1 = 1,
    };

    enum class ePMODE : std::uint32_t {
      // Low Speed (LS) comparison mode is selected.
      ePMODE_0 = 0,
      // High Speed (HS) comparison mode is selected.
      ePMODE_1 = 1,
    };

    enum class eWE : std::uint32_t {
      // Windowing mode is not selected.
      eWE_0 = 0,
      // Windowing mode is selected.
      eWE_1 = 1,
    };

    enum class eSE : std::uint32_t {
      // Sampling mode is not selected.
      eSE_0 = 0,
      // Sampling mode is selected.
      eSE_1 = 1,
    };

    enum class eCFF : std::uint32_t {
      // A falling edge has not been detected on COUT.
      eCFF_0 = 0,
      // A falling edge on COUT has occurred.
      eCFF_1 = 1,
    };

    enum class eCFR : std::uint32_t {
      // A rising edge has not been detected on COUT.
      eCFR_0 = 0,
      // A rising edge on COUT has occurred.
      eCFR_1 = 1,
    };

    enum class eIEF : std::uint32_t {
      // Interrupt is disabled.
      eIEF_0 = 0,
      // Interrupt is enabled.
      eIEF_1 = 1,
    };

    enum class eIER : std::uint32_t {
      // Interrupt is disabled.
      eIER_0 = 0,
      // Interrupt is enabled.
      eIER_1 = 1,
    };

    enum class eDMAEN : std::uint32_t {
      // DMA is disabled.
      eDMAEN_0 = 0,
      // DMA is enabled.
      eDMAEN_1 = 1,
    };

    enum class eLINKEN : std::uint32_t {
      // CMP to DAC link is disabled
      eLINKEN_0 = 0,
      // CMP to DAC link is enabled.
      eLINKEN_1 = 1,
    };

    // Comparator hard block hysteresis control. See chip data sheet to get the actual hystersis value with each level
    using HYSTCTR = ftl::mmio::Field<2, 0, eHYSTCTR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Filter Sample Count
    using FILTER_CNT = ftl::mmio::Field<3, 4, eFILTER_CNT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Module Enable
    using EN = ftl::mmio::Field<1, 8, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Output Pin Enable
    using OPE = ftl::mmio::Field<1, 9, eOPE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Output Select
    using COS = ftl::mmio::Field<1, 10, eCOS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator invert
    using INVT = ftl::mmio::Field<1, 11, eINVT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Power Mode Select
    using PMODE = ftl::mmio::Field<1, 12, ePMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Windowing Enable
    using WE = ftl::mmio::Field<1, 14, eWE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample Enable
    using SE = ftl::mmio::Field<1, 15, eSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Filter Sample Period
    using FPR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Analog Comparator Output
    using COUT = ftl::mmio::Field<1, 24, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Analog Comparator Flag Falling
    using CFF = ftl::mmio::Field<1, 25, eCFF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Analog Comparator Flag Rising
    using CFR = ftl::mmio::Field<1, 26, eCFR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Comparator Interrupt Enable Falling
    using IEF = ftl::mmio::Field<1, 27, eIEF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Interrupt Enable Rising
    using IER = ftl::mmio::Field<1, 28, eIER, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA Enable
    using DMAEN = ftl::mmio::Field<1, 30, eDMAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // CMP to DAC link enable.
    using LINKEN = ftl::mmio::Field<1, 31, eLINKEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct C0_fields_

  struct C0 : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename C0_fields_::HYSTCTR,
      ftl::mmio::Reserved<2, 2>,
      typename C0_fields_::FILTER_CNT,
      ftl::mmio::Reserved<1, 7>,
      typename C0_fields_::EN,
      typename C0_fields_::OPE,
      typename C0_fields_::COS,
      typename C0_fields_::INVT,
      typename C0_fields_::PMODE,
      ftl::mmio::Reserved<1, 13>,
      typename C0_fields_::WE,
      typename C0_fields_::SE,
      typename C0_fields_::FPR,
      typename C0_fields_::COUT,
      typename C0_fields_::CFF,
      typename C0_fields_::CFR,
      typename C0_fields_::IEF,
      typename C0_fields_::IER,
      ftl::mmio::Reserved<1, 29>,
      typename C0_fields_::DMAEN,
      typename C0_fields_::LINKEN> {
    using eHYSTCTR = typename C0_fields_::eHYSTCTR;
    using eFILTER_CNT = typename C0_fields_::eFILTER_CNT;
    using eEN = typename C0_fields_::eEN;
    using eOPE = typename C0_fields_::eOPE;
    using eCOS = typename C0_fields_::eCOS;
    using eINVT = typename C0_fields_::eINVT;
    using ePMODE = typename C0_fields_::ePMODE;
    using eWE = typename C0_fields_::eWE;
    using eSE = typename C0_fields_::eSE;
    using eCFF = typename C0_fields_::eCFF;
    using eCFR = typename C0_fields_::eCFR;
    using eIEF = typename C0_fields_::eIEF;
    using eIER = typename C0_fields_::eIER;
    using eDMAEN = typename C0_fields_::eDMAEN;
    using eLINKEN = typename C0_fields_::eLINKEN;
    using HYSTCTR = typename C0_fields_::HYSTCTR;
    using FILTER_CNT = typename C0_fields_::FILTER_CNT;
    using EN = typename C0_fields_::EN;
    using OPE = typename C0_fields_::OPE;
    using COS = typename C0_fields_::COS;
    using INVT = typename C0_fields_::INVT;
    using PMODE = typename C0_fields_::PMODE;
    using WE = typename C0_fields_::WE;
    using SE = typename C0_fields_::SE;
    using FPR = typename C0_fields_::FPR;
    using COUT = typename C0_fields_::COUT;
    using CFF = typename C0_fields_::CFF;
    using CFR = typename C0_fields_::CFR;
    using IEF = typename C0_fields_::IEF;
    using IER = typename C0_fields_::IER;
    using DMAEN = typename C0_fields_::DMAEN;
    using LINKEN = typename C0_fields_::LINKEN;
  };

  // CMP Control Register 1
  struct C1_fields_ {
    enum class eDMODE : std::uint32_t {
      // DAC is selected to work in low speed and low power mode.
      eDMODE_0 = 0,
      // DAC is selected to work in high speed high power mode.
      eDMODE_1 = 1,
    };

    enum class eVRSEL : std::uint32_t {
      // Vin1 is selected as resistor ladder network supply reference Vin. Vin1 is from internal PMC.
      eVRSEL_0 = 0,
      // Vin2 is selected as resistor ladder network supply reference Vin. Vin2 is from PAD.
      eVRSEL_1 = 1,
    };

    enum class eDACEN : std::uint32_t {
      // DAC is disabled.
      eDACEN_0 = 0,
      // DAC is enabled.
      eDACEN_1 = 1,
    };

    enum class eMSEL : std::uint32_t {
      // Internal Negative Input 0 for Minus Channel -- Internal Minus Input
      eMSEL_0 = 0,
      // External Input 1 for Minus Channel -- Reference Input 0
      eMSEL_1 = 1,
      // External Input 2 for Minus Channel -- Reference Input 1
      eMSEL_2 = 2,
      // External Input 3 for Minus Channel -- Reference Input 2
      eMSEL_3 = 3,
      // External Input 4 for Minus Channel -- Reference Input 3
      eMSEL_4 = 4,
      // External Input 5 for Minus Channel -- Reference Input 4
      eMSEL_5 = 5,
      // External Input 6 for Minus Channel -- Reference Input 5
      eMSEL_6 = 6,
      // Internal 8b DAC output
      eMSEL_7 = 7,
    };

    enum class ePSEL : std::uint32_t {
      // Internal Positive Input 0 for Plus Channel -- Internal Plus Input
      ePSEL_0 = 0,
      // External Input 1 for Plus Channel -- Reference Input 0
      ePSEL_1 = 1,
      // External Input 2 for Plus Channel -- Reference Input 1
      ePSEL_2 = 2,
      // External Input 3 for Plus Channel -- Reference Input 2
      ePSEL_3 = 3,
      // External Input 4 for Plus Channel -- Reference Input 3
      ePSEL_4 = 4,
      // External Input 5 for Plus Channel -- Reference Input 4
      ePSEL_5 = 5,
      // External Input 6 for Plus Channel -- Reference Input 5
      ePSEL_6 = 6,
      // Internal 8b DAC output
      ePSEL_7 = 7,
    };

    // DAC Output Voltage Select
    using VOSEL = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Mode Selection
    using DMODE = ftl::mmio::Field<1, 8, eDMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Supply Voltage Reference Source Select
    using VRSEL = ftl::mmio::Field<1, 9, eVRSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // DAC Enable
    using DACEN = ftl::mmio::Field<1, 10, eDACEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 0 input enable
    using CHN0 = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 1 input enable
    using CHN1 = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 2 input enable
    using CHN2 = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 3 input enable
    using CHN3 = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 4 input enable
    using CHN4 = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Channel 5 input enable
    using CHN5 = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Minus Input MUX Control
    using MSEL = ftl::mmio::Field<3, 24, eMSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Plus Input MUX Control
    using PSEL = ftl::mmio::Field<3, 28, ePSEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct C1_fields_

  struct C1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename C1_fields_::VOSEL,
      typename C1_fields_::DMODE,
      typename C1_fields_::VRSEL,
      typename C1_fields_::DACEN,
      ftl::mmio::Reserved<5, 11>,
      typename C1_fields_::CHN0,
      typename C1_fields_::CHN1,
      typename C1_fields_::CHN2,
      typename C1_fields_::CHN3,
      typename C1_fields_::CHN4,
      typename C1_fields_::CHN5,
      ftl::mmio::Reserved<2, 22>,
      typename C1_fields_::MSEL,
      ftl::mmio::Reserved<1, 27>,
      typename C1_fields_::PSEL,
      ftl::mmio::Reserved<1, 31>> {
    using eDMODE = typename C1_fields_::eDMODE;
    using eVRSEL = typename C1_fields_::eVRSEL;
    using eDACEN = typename C1_fields_::eDACEN;
    using eMSEL = typename C1_fields_::eMSEL;
    using ePSEL = typename C1_fields_::ePSEL;
    using VOSEL = typename C1_fields_::VOSEL;
    using DMODE = typename C1_fields_::DMODE;
    using VRSEL = typename C1_fields_::VRSEL;
    using DACEN = typename C1_fields_::DACEN;
    using CHN0 = typename C1_fields_::CHN0;
    using CHN1 = typename C1_fields_::CHN1;
    using CHN2 = typename C1_fields_::CHN2;
    using CHN3 = typename C1_fields_::CHN3;
    using CHN4 = typename C1_fields_::CHN4;
    using CHN5 = typename C1_fields_::CHN5;
    using MSEL = typename C1_fields_::MSEL;
    using PSEL = typename C1_fields_::PSEL;
  };

  // CMP Control Register 2
  struct C2_fields_ {
    enum class eNSAM : std::uint32_t {
      // The comparison result is sampled as soon as the active channel is scanned in one round-robin clock.
      eNSAM_0 = 0,
      // The sampling takes place 1 round-robin clock cycle after the next cycle of the round-robin clock.
      eNSAM_1 = 1,
      // The sampling takes place 2 round-robin clock cycles after the next cycle of the round-robin clock.
      eNSAM_2 = 2,
      // The sampling takes place 3 round-robin clock cycles after the next cycle of the round-robin clock.
      eNSAM_3 = 3,
    };

    enum class eFXMXCH : std::uint32_t {
      // External Reference Input 0 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_0 = 0,
      // External Reference Input 1 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_1 = 1,
      // External Reference Input 2 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_2 = 2,
      // External Reference Input 3 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_3 = 3,
      // External Reference Input 4 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_4 = 4,
      // External Reference Input 5 is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_5 = 5,
      // The 8bit DAC is selected as the fixed reference input for the fixed mux port.
      eFXMXCH_7 = 7,
    };

    enum class eFXMP : std::uint32_t {
      // The Plus port is fixed. Only the inputs to the Minus port are swept in each round.
      eFXMP_0 = 0,
      // The Minus port is fixed. Only the inputs to the Plus port are swept in each round.
      eFXMP_1 = 1,
    };

    enum class eRRIE : std::uint32_t {
      // The round-robin interrupt is disabled.
      eRRIE_0 = 0,
      // The round-robin interrupt is enabled when a comparison result changes from the last sample.
      eRRIE_1 = 1,
    };

    // ACOn
    using ACOn = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator and DAC initialization delay modulus.
    using INITMOD = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of sample clocks
    using NSAM = ftl::mmio::Field<2, 14, eNSAM, ftl::mmio::RW, ftl::mmio::Normal>;
    // CH0F
    using CH0F = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // CH1F
    using CH1F = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // CH2F
    using CH2F = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // CH3F
    using CH3F = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // CH4F
    using CH4F = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // CH5F
    using CH5F = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Fixed channel selection
    using FXMXCH = ftl::mmio::Field<3, 25, eFXMXCH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fixed MUX Port
    using FXMP = ftl::mmio::Field<1, 29, eFXMP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Round-Robin interrupt enable
    using RRIE = ftl::mmio::Field<1, 30, eRRIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct C2_fields_

  struct C2 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename C2_fields_::ACOn,
      ftl::mmio::Reserved<2, 6>,
      typename C2_fields_::INITMOD,
      typename C2_fields_::NSAM,
      typename C2_fields_::CH0F,
      typename C2_fields_::CH1F,
      typename C2_fields_::CH2F,
      typename C2_fields_::CH3F,
      typename C2_fields_::CH4F,
      typename C2_fields_::CH5F,
      ftl::mmio::Reserved<3, 22>,
      typename C2_fields_::FXMXCH,
      ftl::mmio::Reserved<1, 28>,
      typename C2_fields_::FXMP,
      typename C2_fields_::RRIE,
      ftl::mmio::Reserved<1, 31>> {
    using eNSAM = typename C2_fields_::eNSAM;
    using eFXMXCH = typename C2_fields_::eFXMXCH;
    using eFXMP = typename C2_fields_::eFXMP;
    using eRRIE = typename C2_fields_::eRRIE;
    using ACOn = typename C2_fields_::ACOn;
    using INITMOD = typename C2_fields_::INITMOD;
    using NSAM = typename C2_fields_::NSAM;
    using CH0F = typename C2_fields_::CH0F;
    using CH1F = typename C2_fields_::CH1F;
    using CH2F = typename C2_fields_::CH2F;
    using CH3F = typename C2_fields_::CH3F;
    using CH4F = typename C2_fields_::CH4F;
    using CH5F = typename C2_fields_::CH5F;
    using FXMXCH = typename C2_fields_::FXMXCH;
    using FXMP = typename C2_fields_::FXMP;
    using RRIE = typename C2_fields_::RRIE;
  };

  // CMP Control Register 3
  struct C3_fields_ {
    enum class eACPH2TC : std::uint32_t {
      // Phase2 active time in one sampling period equals to T
      eACPH2TC_0 = 0,
      // Phase2 active time in one sampling period equals to 2*T
      eACPH2TC_1 = 1,
      // Phase2 active time in one sampling period equals to 4*T
      eACPH2TC_2 = 2,
      // Phase2 active time in one sampling period equals to 8*T
      eACPH2TC_3 = 3,
      // Phase2 active time in one sampling period equals to 16*T
      eACPH2TC_4 = 4,
      // Phase2 active time in one sampling period equals to 32*T
      eACPH2TC_5 = 5,
      // Phase2 active time in one sampling period equals to 64*T
      eACPH2TC_6 = 6,
      // Phase2 active time in one sampling period equals to 16*T
      eACPH2TC_7 = 7,
    };

    enum class eACPH1TC : std::uint32_t {
      // Phase1 active time in one sampling period equals to T
      eACPH1TC_0 = 0,
      // Phase1 active time in one sampling period equals to 2*T
      eACPH1TC_1 = 1,
      // Phase1 active time in one sampling period equals to 4*T
      eACPH1TC_2 = 2,
      // Phase1 active time in one sampling period equals to 8*T
      eACPH1TC_3 = 3,
      // Phase1 active time in one sampling period equals to T
      eACPH1TC_4 = 4,
      // Phase1 active time in one sampling period equals to T
      eACPH1TC_5 = 5,
      // Phase1 active time in one sampling period equals to T
      eACPH1TC_6 = 6,
      // Phase1 active time in one sampling period equals to 0
      eACPH1TC_7 = 7,
    };

    enum class eACSAT : std::uint32_t {
      // The sampling time equals to T
      eACSAT_0 = 0,
      // The sampling time equasl to 2*T
      eACSAT_1 = 1,
      // The sampling time equasl to 4*T
      eACSAT_2 = 2,
      // The sampling time equasl to 8*T
      eACSAT_3 = 3,
      // The sampling time equasl to 16*T
      eACSAT_4 = 4,
      // The sampling time equasl to 32*T
      eACSAT_5 = 5,
      // The sampling time equasl to 64*T
      eACSAT_6 = 6,
      // The sampling time equasl to 256*T
      eACSAT_7 = 7,
    };

    enum class eDMCS : std::uint32_t {
      // Slow clock is selected for the timing generation.
      eDMCS_0 = 0,
      // Fast clock is selected for the timing generation.
      eDMCS_1 = 1,
    };

    enum class eRDIVE : std::uint32_t {
      // The resistor is not enabled even when either NCHEN or PCHEN is set to1 but the actual input is in the range of 0 - 1.8v.
      eRDIVE_0 = 0,
      // The resistor is enabled because the inputs are above 1.8v.
      eRDIVE_1 = 1,
    };

    enum class eNCHCTEN : std::uint32_t {
      // Negative channel is in Discrete Mode and special timing needs to be configured.
      eNCHCTEN_0 = 0,
      // Negative channel is in Continuous Mode and no special timing is requried.
      eNCHCTEN_1 = 1,
    };

    enum class ePCHCTEN : std::uint32_t {
      // Positive channel is in Discrete Mode and special timing needs to be configured.
      ePCHCTEN_0 = 0,
      // Positive channel is in Continuous Mode and no special timing is requried.
      ePCHCTEN_1 = 1,
    };

    // Analog Comparator Phase2 Timing Control.
    using ACPH2TC = ftl::mmio::Field<3, 4, eACPH2TC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Analog Comparator Phase1 Timing Control.
    using ACPH1TC = ftl::mmio::Field<3, 8, eACPH1TC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Analog Comparator Sampling Time control.
    using ACSAT = ftl::mmio::Field<3, 12, eACSAT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Discrete Mode Clock Selection
    using DMCS = ftl::mmio::Field<1, 16, eDMCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Resistor Divider Enable
    using RDIVE = ftl::mmio::Field<1, 20, eRDIVE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Negative Channel Continuous Mode Enable.
    using NCHCTEN = ftl::mmio::Field<1, 24, eNCHCTEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Positive Channel Continuous Mode Enable.
    using PCHCTEN = ftl::mmio::Field<1, 28, ePCHCTEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct C3_fields_

  struct C3 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x11000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      typename C3_fields_::ACPH2TC,
      ftl::mmio::Reserved<1, 7>,
      typename C3_fields_::ACPH1TC,
      ftl::mmio::Reserved<1, 11>,
      typename C3_fields_::ACSAT,
      ftl::mmio::Reserved<1, 15>,
      typename C3_fields_::DMCS,
      ftl::mmio::Reserved<3, 17>,
      typename C3_fields_::RDIVE,
      ftl::mmio::Reserved<3, 21>,
      typename C3_fields_::NCHCTEN,
      ftl::mmio::Reserved<3, 25>,
      typename C3_fields_::PCHCTEN,
      ftl::mmio::Reserved<3, 29>> {
    using eACPH2TC = typename C3_fields_::eACPH2TC;
    using eACPH1TC = typename C3_fields_::eACPH1TC;
    using eACSAT = typename C3_fields_::eACSAT;
    using eDMCS = typename C3_fields_::eDMCS;
    using eRDIVE = typename C3_fields_::eRDIVE;
    using eNCHCTEN = typename C3_fields_::eNCHCTEN;
    using ePCHCTEN = typename C3_fields_::ePCHCTEN;
    using ACPH2TC = typename C3_fields_::ACPH2TC;
    using ACPH1TC = typename C3_fields_::ACPH1TC;
    using ACSAT = typename C3_fields_::ACSAT;
    using DMCS = typename C3_fields_::DMCS;
    using RDIVE = typename C3_fields_::RDIVE;
    using NCHCTEN = typename C3_fields_::NCHCTEN;
    using PCHCTEN = typename C3_fields_::PCHCTEN;
  };

};

}  // namespace regs