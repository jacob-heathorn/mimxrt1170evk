#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// GPT
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Gpt {
  static_assert( Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u || Instance == 5u || Instance == 6u,
      "Gpt: Instance must be one of 1, 2, 3, 4, 5, 6");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400EC000u :
      Instance == 2u ? 0x400F0000u :
      Instance == 3u ? 0x400F4000u :
      Instance == 4u ? 0x400F8000u :
      Instance == 5u ? 0x400FC000u :
      Instance == 6u ? 0x40100000u :
      0u;

  
// GPT Control Register
struct CR_fields_ {

  enum class eEN : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eENMOD : std::uint32_t {
    // Restart counting from their frozen values after GPT is enabled (EN=1).
    eRESUME_COUNT = 0,
    // Reset counting from 0 after GPT is enabled (EN=1).
    eZERO_COUNT = 1,
  };

  enum class eDBGEN : std::uint32_t {
    // Disable in Debug mode
    eDEBUG_DIS = 0,
    // Enable in Debug mode
    eDEBUG_EN = 1,
  };

  enum class eWAITEN : std::uint32_t {
    // Disable in Wait mode
    eWAIT_DIS = 0,
    // Enable in Wait mode
    eWAIT_EN = 1,
  };

  enum class eDOZEEN : std::uint32_t {
    // Disable in Doze mode
    eDOZE_DIS = 0,
    // Enable in Doze mode
    eDOZE_EN = 1,
  };

  enum class eSTOPEN : std::uint32_t {
    // Disable in Stop mode
    eSTOP_DIS = 0,
    // Enable in Stop mode
    eSTOP_EN = 1,
  };

  enum class eCLKSRC : std::uint32_t {
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

  enum class eFRR : std::uint32_t {
    // Restart mode. After a compare event, the counter resets to 0x0000_0000 and resumes counting.
    eRESTART = 0,
    // Free-Run mode. After a compare event, the counter continues counting until 0xFFFF_FFFF and then rolls over to 0.
    eFREE_RUN = 1,
  };

  enum class eEN_24M : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eSWR : std::uint32_t {
    // GPT is not in software reset state
    eNOT_SWRESET = 0,
    // GPT is in software reset state
    eSWRESET = 1,
  };

  enum class eIM1 : std::uint32_t {
    // Capture disabled
    eDISABLED = 0,
    // Capture on rising edge only
    eRISING = 1,
    // Capture on falling edge only
    eFALLING = 2,
    // Capture on both edges
    eBOTH = 3,
  };

  enum class eIM2 : std::uint32_t {
    // Capture disabled
    eDISABLED = 0,
    // Capture on rising edge only
    eRISING = 1,
    // Capture on falling edge only
    eFALLING = 2,
    // Capture on both edges
    eBOTH = 3,
  };

  enum class eOM1 : std::uint32_t {
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

  enum class eOM2 : std::uint32_t {
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

  enum class eOM3 : std::uint32_t {
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

  enum class eFO1 : std::uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };

  enum class eFO2 : std::uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };

  enum class eFO3 : std::uint32_t {
    // No effect
    eNO_FORCE = 0,
    // Trigger the programmed response on the pin
    eFORCE = 1,
  };
  // GPT Enable
  using EN = ftl::mmio::Field<1, 0, eEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT Enable Mode
  using ENMOD = ftl::mmio::Field<1, 1, eENMOD, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT Debug Mode Enable
  using DBGEN = ftl::mmio::Field<1, 2, eDBGEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT Wait Mode Enable
  using WAITEN = ftl::mmio::Field<1, 3, eWAITEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT Doze Mode Enable
  using DOZEEN = ftl::mmio::Field<1, 4, eDOZEEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPT Stop Mode Enable
  using STOPEN = ftl::mmio::Field<1, 5, eSTOPEN, ftl::mmio::RW, ftl::mmio::Normal>;
  // Clock Source Select
  using CLKSRC = ftl::mmio::Field<3, 6, eCLKSRC, ftl::mmio::RW, ftl::mmio::Normal>;
  // Free-Run or Restart Mode
  using FRR = ftl::mmio::Field<1, 9, eFRR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Enable Oscillator Clock Input
  using EN_24M = ftl::mmio::Field<1, 10, eEN_24M, ftl::mmio::RW, ftl::mmio::Normal>;
  // Software Reset
  using SWR = ftl::mmio::Field<1, 15, eSWR, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input Capture Operating Mode for Channel 1
  using IM1 = ftl::mmio::Field<2, 16, eIM1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input Capture Operating Mode for Channel 2
  using IM2 = ftl::mmio::Field<2, 18, eIM2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Output Compare Operating Mode for Channel 1
  using OM1 = ftl::mmio::Field<3, 20, eOM1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Output Compare Operating Mode for Channel 2
  using OM2 = ftl::mmio::Field<3, 23, eOM2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Output Compare Operating Mode for Channel 3
  using OM3 = ftl::mmio::Field<3, 26, eOM3, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force Output Compare for Channel 1
  using FO1 = ftl::mmio::Field<1, 29, eFO1, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force Output Compare for Channel 2
  using FO2 = ftl::mmio::Field<1, 30, eFO2, ftl::mmio::RW, ftl::mmio::Normal>;
  // Force Output Compare for Channel 3
  using FO3 = ftl::mmio::Field<1, 31, eFO3, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct CR_fields_

struct CR : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename CR_fields_::EN,
    typename CR_fields_::ENMOD,
    typename CR_fields_::DBGEN,
    typename CR_fields_::WAITEN,
    typename CR_fields_::DOZEEN,
    typename CR_fields_::STOPEN,
    typename CR_fields_::CLKSRC,
    typename CR_fields_::FRR,
    typename CR_fields_::EN_24M,
    ftl::mmio::Reserved<4, 11>,
    typename CR_fields_::SWR,
    typename CR_fields_::IM1,
    typename CR_fields_::IM2,
    typename CR_fields_::OM1,
    typename CR_fields_::OM2,
    typename CR_fields_::OM3,
    typename CR_fields_::FO1,
    typename CR_fields_::FO2,
    typename CR_fields_::FO3> {
  using eEN = typename CR_fields_::eEN;
  using eENMOD = typename CR_fields_::eENMOD;
  using eDBGEN = typename CR_fields_::eDBGEN;
  using eWAITEN = typename CR_fields_::eWAITEN;
  using eDOZEEN = typename CR_fields_::eDOZEEN;
  using eSTOPEN = typename CR_fields_::eSTOPEN;
  using eCLKSRC = typename CR_fields_::eCLKSRC;
  using eFRR = typename CR_fields_::eFRR;
  using eEN_24M = typename CR_fields_::eEN_24M;
  using eSWR = typename CR_fields_::eSWR;
  using eIM1 = typename CR_fields_::eIM1;
  using eIM2 = typename CR_fields_::eIM2;
  using eOM1 = typename CR_fields_::eOM1;
  using eOM2 = typename CR_fields_::eOM2;
  using eOM3 = typename CR_fields_::eOM3;
  using eFO1 = typename CR_fields_::eFO1;
  using eFO2 = typename CR_fields_::eFO2;
  using eFO3 = typename CR_fields_::eFO3;
  using EN = typename CR_fields_::EN;
  using ENMOD = typename CR_fields_::ENMOD;
  using DBGEN = typename CR_fields_::DBGEN;
  using WAITEN = typename CR_fields_::WAITEN;
  using DOZEEN = typename CR_fields_::DOZEEN;
  using STOPEN = typename CR_fields_::STOPEN;
  using CLKSRC = typename CR_fields_::CLKSRC;
  using FRR = typename CR_fields_::FRR;
  using EN_24M = typename CR_fields_::EN_24M;
  using SWR = typename CR_fields_::SWR;
  using IM1 = typename CR_fields_::IM1;
  using IM2 = typename CR_fields_::IM2;
  using OM1 = typename CR_fields_::OM1;
  using OM2 = typename CR_fields_::OM2;
  using OM3 = typename CR_fields_::OM3;
  using FO1 = typename CR_fields_::FO1;
  using FO2 = typename CR_fields_::FO2;
  using FO3 = typename CR_fields_::FO3;
};

  
// GPT Prescaler Register
struct PR_fields_ {

  enum class ePRESCALER : std::uint32_t {
    // Divide by 1
    eDIV_BY_1 = 0,
    // Divide by 2
    eDIV_BY_2 = 1,
    // Divide by 4096
    eDIV_BY_4096 = 4095,
  };

  enum class ePRESCALER24M : std::uint32_t {
    // Divide by 1
    eDIV_BY_1 = 0,
    // Divide by 2
    eDIV_BY_2 = 1,
    // Divide by 16
    eDIV_BY_16 = 15,
  };
  // Prescaler divide value
  using PRESCALER = ftl::mmio::Field<12, 0, ePRESCALER, ftl::mmio::RW, ftl::mmio::Normal>;
  // Prescaler divide value for the oscillator clock
  using PRESCALER24M = ftl::mmio::Field<4, 12, ePRESCALER24M, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PR_fields_

struct PR : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename PR_fields_::PRESCALER,
    typename PR_fields_::PRESCALER24M,
    ftl::mmio::Reserved<16, 16>> {
  using ePRESCALER = typename PR_fields_::ePRESCALER;
  using ePRESCALER24M = typename PR_fields_::ePRESCALER24M;
  using PRESCALER = typename PR_fields_::PRESCALER;
  using PRESCALER24M = typename PR_fields_::PRESCALER24M;
};

  
// GPT Status Register
struct SR_fields_ {

  enum class eOF1 : std::uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };

  enum class eOF2 : std::uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };

  enum class eOF3 : std::uint32_t {
    // Compare event has not occurred.
    eNO_EVENT = 0,
    // Compare event has occurred.
    eEVENT = 1,
  };

  enum class eIF1 : std::uint32_t {
    // Capture event has not occurred.
    eNO_EVENT = 0,
    // Capture event has occurred.
    eEVENT = 1,
  };

  enum class eIF2 : std::uint32_t {
    // Capture event has not occurred.
    eNO_EVENT = 0,
    // Capture event has occurred.
    eEVENT = 1,
  };

  enum class eROV : std::uint32_t {
    // Rollover has not occurred.
    eNO_ROLLOVER = 0,
    // Rollover has occurred.
    eROLLOVER = 1,
  };
  // Output Compare Flag for Channel 1
  using OF1 = ftl::mmio::Field<1, 0, eOF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Output Compare Flag for Channel 2
  using OF2 = ftl::mmio::Field<1, 1, eOF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Output Compare Flag for Channel 3
  using OF3 = ftl::mmio::Field<1, 2, eOF3, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Input Capture Flag for Channel 1
  using IF1 = ftl::mmio::Field<1, 3, eIF1, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Input Capture Flag for Channel 2
  using IF2 = ftl::mmio::Field<1, 4, eIF2, ftl::mmio::RW, ftl::mmio::OneToClear>;
  // Rollover Flag
  using ROV = ftl::mmio::Field<1, 5, eROV, ftl::mmio::RW, ftl::mmio::OneToClear>;
};  // struct SR_fields_

struct SR : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename SR_fields_::OF1,
    typename SR_fields_::OF2,
    typename SR_fields_::OF3,
    typename SR_fields_::IF1,
    typename SR_fields_::IF2,
    typename SR_fields_::ROV,
    ftl::mmio::Reserved<26, 6>> {
  using eOF1 = typename SR_fields_::eOF1;
  using eOF2 = typename SR_fields_::eOF2;
  using eOF3 = typename SR_fields_::eOF3;
  using eIF1 = typename SR_fields_::eIF1;
  using eIF2 = typename SR_fields_::eIF2;
  using eROV = typename SR_fields_::eROV;
  using OF1 = typename SR_fields_::OF1;
  using OF2 = typename SR_fields_::OF2;
  using OF3 = typename SR_fields_::OF3;
  using IF1 = typename SR_fields_::IF1;
  using IF2 = typename SR_fields_::IF2;
  using ROV = typename SR_fields_::ROV;
};

  
// GPT Interrupt Register
struct IR_fields_ {

  enum class eOF1IE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eOF2IE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eOF3IE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eIF1IE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eIF2IE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };

  enum class eROVIE : std::uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  // Output Compare Flag for Channel 1 Interrupt Enable
  using OF1IE = ftl::mmio::Field<1, 0, eOF1IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Output Compare Flag for Channel 2 Interrupt Enable
  using OF2IE = ftl::mmio::Field<1, 1, eOF2IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Output Compare Flag for Channel 3 Interrupt Enable
  using OF3IE = ftl::mmio::Field<1, 2, eOF3IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input Capture Flag for Channel 1 Interrupt Enable
  using IF1IE = ftl::mmio::Field<1, 3, eIF1IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input Capture Flag for Channel 2 Interrupt Enable
  using IF2IE = ftl::mmio::Field<1, 4, eIF2IE, ftl::mmio::RW, ftl::mmio::Normal>;
  // Rollover Interrupt Enable
  using ROVIE = ftl::mmio::Field<1, 5, eROVIE, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct IR_fields_

struct IR : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename IR_fields_::OF1IE,
    typename IR_fields_::OF2IE,
    typename IR_fields_::OF3IE,
    typename IR_fields_::IF1IE,
    typename IR_fields_::IF2IE,
    typename IR_fields_::ROVIE,
    ftl::mmio::Reserved<26, 6>> {
  using eOF1IE = typename IR_fields_::eOF1IE;
  using eOF2IE = typename IR_fields_::eOF2IE;
  using eOF3IE = typename IR_fields_::eOF3IE;
  using eIF1IE = typename IR_fields_::eIF1IE;
  using eIF2IE = typename IR_fields_::eIF2IE;
  using eROVIE = typename IR_fields_::eROVIE;
  using OF1IE = typename IR_fields_::OF1IE;
  using OF2IE = typename IR_fields_::OF2IE;
  using OF3IE = typename IR_fields_::OF3IE;
  using IF1IE = typename IR_fields_::IF1IE;
  using IF2IE = typename IR_fields_::IF2IE;
  using ROVIE = typename IR_fields_::ROVIE;
};

  
// GPT Output Compare Register
struct OCR_fields_ {
  // Compare Value
  using COMP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct OCR_fields_

template<std::uint32_t Index>
struct OCR : ftl::mmio::Register<
    kBase + 0x10u + (Index * 0x4u),
    std::uint32_t,
    0xFFFFFFFFu,
    ftl::mmio::RW,
    typename OCR_fields_::COMP> {
  static_assert(Index < 3u, "OCR: Index out of range");
  using COMP = typename OCR_fields_::COMP;
};

  
// GPT Input Capture Register
struct ICR_fields_ {
  // Capture Value
  using CAPT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ICR_fields_

template<std::uint32_t Index>
struct ICR : ftl::mmio::Register<
    kBase + 0x1Cu + (Index * 0x4u),
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename ICR_fields_::CAPT> {
  static_assert(Index < 2u, "ICR: Index out of range");
  using CAPT = typename ICR_fields_::CAPT;
};

  
// GPT Counter Register
struct CNT_fields_ {
  // Counter Value
  using COUNT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct CNT_fields_

struct CNT : ftl::mmio::Register<
    kBase + 0x24u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename CNT_fields_::COUNT> {
  using COUNT = typename CNT_fields_::COUNT;
};
};

}  // namespace regs