#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// TMR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Tmr {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u,
        "Tmr: Instance must be one of 1, 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x4015C000u :
      Instance == 2u ? 0x40160000u :
      Instance == 3u ? 0x40164000u :
      Instance == 4u ? 0x40168000u :
      0u;

  // Timer Channel Compare Register 1
  struct Comp10Fields {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp10Fields

  struct COMP10 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp10Fields::COMPARISON_1> {
    using COMPARISON_1 = typename Comp10Fields::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct Comp20Fields {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp20Fields

  struct COMP20 : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp20Fields::COMPARISON_2> {
    using COMPARISON_2 = typename Comp20Fields::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct Capt0Fields {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Capt0Fields

  struct CAPT0 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Capt0Fields::CAPTURE> {
    using CAPTURE = typename Capt0Fields::CAPTURE;
  };

  // Timer Channel Load Register
  struct Load0Fields {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Load0Fields

  struct LOAD0 : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Load0Fields::LOAD> {
    using LOAD = typename Load0Fields::LOAD;
  };

  // Timer Channel Hold Register
  struct Hold0Fields {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Hold0Fields

  struct HOLD0 : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Hold0Fields::HOLD> {
    using HOLD = typename Hold0Fields::HOLD;
  };

  // Timer Channel Counter Register
  struct Cntr0Fields {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cntr0Fields

  struct CNTR0 : ftl::mmio::Register<
      kBase + 0xAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cntr0Fields::COUNTER> {
    using COUNTER = typename Cntr0Fields::COUNTER;
  };

  // Timer Channel Control Register
  struct Ctrl0Fields {
    enum class eOUTMODE : std::uint32_t {
      // Asserted while counter is active
      eCOUNTER_ACTIVE = 0,
      // Clear OFLAG output on successful compare
      eCLEAR_OFLAG = 1,
      // Set OFLAG output on successful compare
      eSET_OFLAG = 2,
      // Toggle OFLAG output on successful compare
      eTOGGLE_OFLAG_SUCCESS = 3,
      // Toggle OFLAG output using alternating compare registers
      eTOGGLE_OFLAG_ALT = 4,
      // Set on compare, cleared on secondary source input edge
      eCLEAR_ON_SECONDARY = 5,
      // Set on compare, cleared on counter rollover
      eCLEAR_ON_ROLLOVER = 6,
      // Enable gated clock output while counter is active
      eENABLE_GATED_OUT = 7,
    };

    enum class eCOINIT : std::uint32_t {
      // Co-channel counter/timers cannot force a re-initialization of this counter/timer
      eDISABLE = 0,
      // Co-channel counter/timers may force a re-initialization of this counter/timer
      eENABLE = 1,
    };

    enum class eDIR : std::uint32_t {
      // Count up.
      eCOUNTUP = 0,
      // Count down.
      eCOUNTDOWN = 1,
    };

    enum class eLENGTH : std::uint32_t {
      // Count until roll over at $FFFF and continue from $0000.
      eUNTIL_ROLLOVER = 0,
      // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
      eUNTIL_COMPARE = 1,
    };

    enum class eONCE : std::uint32_t {
      // Count repeatedly.
      eREPEAT = 0,
      // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
      eUNTIL_COMPARE = 1,
    };

    enum class eSCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
    };

    enum class ePCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
      // Counter 0 output
      eCOUNTER0_OUT = 4,
      // Counter 1 output
      eCOUNTER1_OUT = 5,
      // Counter 2 output
      eCOUNTER2_OUT = 6,
      // Counter 3 output
      eCOUNTER3_OUT = 7,
      // IP bus clock divide by 1 prescaler
      eBUS_DIVBY1 = 8,
      // IP bus clock divide by 2 prescaler
      eBUS_DIVBY2 = 9,
      // IP bus clock divide by 4 prescaler
      eBUS_DIVBY4 = 10,
      // IP bus clock divide by 8 prescaler
      eBUS_DIVBY8 = 11,
      // IP bus clock divide by 16 prescaler
      eBUS_DIVBY16 = 12,
      // IP bus clock divide by 32 prescaler
      eBUS_DIVBY32 = 13,
      // IP bus clock divide by 64 prescaler
      eBUS_DIVBY64 = 14,
      // IP bus clock divide by 128 prescaler
      eBUS_DIVBY128 = 15,
    };

    enum class eCM : std::uint32_t {
      // No operation
      eNOOP = 0,
      // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
      eRISING_ONLY = 1,
      // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
      eRISING_AND_FALLING = 2,
      // Count rising edges of primary source while secondary input high active
      eRISING_WHILE_SEC_HIGH = 3,
      // Quadrature count mode, uses primary and secondary sources
      eQUADRATURE = 4,
      // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
      eRISING_SEC_DIR = 5,
      // Edge of secondary source triggers primary count until compare
      eSECONDARY = 6,
      // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
      eCASCADE = 7,
    };

    // Output Mode
    using OUTMODE = ftl::mmio::Field<3, 0, eOUTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Co-Channel Initialization
    using COINIT = ftl::mmio::Field<1, 3, eCOINIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Direction
    using DIR = ftl::mmio::Field<1, 4, eDIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Length
    using LENGTH = ftl::mmio::Field<1, 5, eLENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Once
    using ONCE = ftl::mmio::Field<1, 6, eONCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Secondary Count Source
    using SCS = ftl::mmio::Field<2, 7, eSCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Primary Count Source
    using PCS = ftl::mmio::Field<4, 9, ePCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Mode
    using CM = ftl::mmio::Field<3, 13, eCM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl0Fields

  struct CTRL0 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl0Fields::OUTMODE,
      typename Ctrl0Fields::COINIT,
      typename Ctrl0Fields::DIR,
      typename Ctrl0Fields::LENGTH,
      typename Ctrl0Fields::ONCE,
      typename Ctrl0Fields::SCS,
      typename Ctrl0Fields::PCS,
      typename Ctrl0Fields::CM> {
    using eOUTMODE = typename Ctrl0Fields::eOUTMODE;
    using eCOINIT = typename Ctrl0Fields::eCOINIT;
    using eDIR = typename Ctrl0Fields::eDIR;
    using eLENGTH = typename Ctrl0Fields::eLENGTH;
    using eONCE = typename Ctrl0Fields::eONCE;
    using eSCS = typename Ctrl0Fields::eSCS;
    using ePCS = typename Ctrl0Fields::ePCS;
    using eCM = typename Ctrl0Fields::eCM;
    using OUTMODE = typename Ctrl0Fields::OUTMODE;
    using COINIT = typename Ctrl0Fields::COINIT;
    using DIR = typename Ctrl0Fields::DIR;
    using LENGTH = typename Ctrl0Fields::LENGTH;
    using ONCE = typename Ctrl0Fields::ONCE;
    using SCS = typename Ctrl0Fields::SCS;
    using PCS = typename Ctrl0Fields::PCS;
    using CM = typename Ctrl0Fields::CM;
  };

  // Timer Channel Status and Control Register
  struct Sctrl0Fields {
    enum class eOEN : std::uint32_t {
      // The external pin is configured as an input.
      eINPUT = 0,
      // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
      eOFLAG_OUT = 1,
    };

    enum class eOPS : std::uint32_t {
      // True polarity.
      eTRUE = 0,
      // Inverted polarity.
      eINVERTED = 1,
    };

    enum class eCAPTURE_MODE : std::uint32_t {
      // Capture function is disabled
      eDISABLED = 0,
      // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
      eENABLE_RISING = 1,
      // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
      eENABLE_FALLING = 2,
      // Load capture register on both edges of input
      eENABLE_BOTH = 3,
    };

    // Output Enable
    using OEN = ftl::mmio::Field<1, 0, eOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Polarity Select
    using OPS = ftl::mmio::Field<1, 1, eOPS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force OFLAG Output
    using FORCE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forced OFLAG Value
    using VAL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable External OFLAG Force
    using EEOF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master Mode
    using MSTR = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Capture Mode
    using CAPTURE_MODE = ftl::mmio::Field<2, 6, eCAPTURE_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // External Input Signal
    using INPUT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Input Polarity Select
    using IPS = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag Interrupt Enable
    using IEFIE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag
    using IEF = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag Interrupt Enable
    using TOFIE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag
    using TOF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag Interrupt Enable
    using TCFIE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag
    using TCF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sctrl0Fields

  struct SCTRL0 : ftl::mmio::Register<
      kBase + 0xEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sctrl0Fields::OEN,
      typename Sctrl0Fields::OPS,
      typename Sctrl0Fields::FORCE,
      typename Sctrl0Fields::VAL,
      typename Sctrl0Fields::EEOF,
      typename Sctrl0Fields::MSTR,
      typename Sctrl0Fields::CAPTURE_MODE,
      typename Sctrl0Fields::INPUT,
      typename Sctrl0Fields::IPS,
      typename Sctrl0Fields::IEFIE,
      typename Sctrl0Fields::IEF,
      typename Sctrl0Fields::TOFIE,
      typename Sctrl0Fields::TOF,
      typename Sctrl0Fields::TCFIE,
      typename Sctrl0Fields::TCF> {
    using eOEN = typename Sctrl0Fields::eOEN;
    using eOPS = typename Sctrl0Fields::eOPS;
    using eCAPTURE_MODE = typename Sctrl0Fields::eCAPTURE_MODE;
    using OEN = typename Sctrl0Fields::OEN;
    using OPS = typename Sctrl0Fields::OPS;
    using FORCE = typename Sctrl0Fields::FORCE;
    using VAL = typename Sctrl0Fields::VAL;
    using EEOF = typename Sctrl0Fields::EEOF;
    using MSTR = typename Sctrl0Fields::MSTR;
    using CAPTURE_MODE = typename Sctrl0Fields::CAPTURE_MODE;
    using INPUT = typename Sctrl0Fields::INPUT;
    using IPS = typename Sctrl0Fields::IPS;
    using IEFIE = typename Sctrl0Fields::IEFIE;
    using IEF = typename Sctrl0Fields::IEF;
    using TOFIE = typename Sctrl0Fields::TOFIE;
    using TOF = typename Sctrl0Fields::TOF;
    using TCFIE = typename Sctrl0Fields::TCFIE;
    using TCF = typename Sctrl0Fields::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct Cmpld10Fields {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld10Fields

  struct CMPLD10 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld10Fields::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename Cmpld10Fields::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct Cmpld20Fields {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld20Fields

  struct CMPLD20 : ftl::mmio::Register<
      kBase + 0x12u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld20Fields::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename Cmpld20Fields::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct Csctrl0Fields {
    enum class eCL1 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eCL2 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eUP : std::uint32_t {
      // The last count was in the DOWN direction.
      eDOWN = 0,
      // The last count was in the UP direction.
      eUP = 1,
    };

    enum class eTCI : std::uint32_t {
      // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
      eSTOP = 0,
      // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
      eRELOAD = 1,
    };

    enum class eROC : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eALT_LOAD : std::uint32_t {
      // Counter can be re-initialized only with the LOAD register.
      eDISABLE = 0,
      // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
      eENABLE = 1,
    };

    enum class eFAULT : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eDBG_EN : std::uint32_t {
      // Continue with normal operation during debug mode. (default)
      eNORMAL = 0,
      // Halt TMR counter during debug mode.
      eHALT_TMR = 1,
      // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      eFORCE_0 = 2,
      // Both halt counter and force output to 0 during debug mode.
      eHALT_AND_FORCE_0 = 3,
    };

    // Compare Load Control 1
    using CL1 = ftl::mmio::Field<2, 0, eCL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Load Control 2
    using CL2 = ftl::mmio::Field<2, 2, eCL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Flag
    using TCF1 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Flag
    using TCF2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Enable
    using TCF1EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Enable
    using TCF2EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output flag
    using OFLAG = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Counting Direction Indicator
    using UP = ftl::mmio::Field<1, 9, eUP, ftl::mmio::RO, ftl::mmio::Normal>;
    // Triggered Count Initialization Control
    using TCI = ftl::mmio::Field<1, 10, eTCI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload on Capture
    using ROC = ftl::mmio::Field<1, 11, eROC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Alternative Load Enable
    using ALT_LOAD = ftl::mmio::Field<1, 12, eALT_LOAD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Enable
    using FAULT = ftl::mmio::Field<1, 13, eFAULT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Actions Enable
    using DBG_EN = ftl::mmio::Field<2, 14, eDBG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csctrl0Fields

  struct CSCTRL0 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Csctrl0Fields::CL1,
      typename Csctrl0Fields::CL2,
      typename Csctrl0Fields::TCF1,
      typename Csctrl0Fields::TCF2,
      typename Csctrl0Fields::TCF1EN,
      typename Csctrl0Fields::TCF2EN,
      typename Csctrl0Fields::OFLAG,
      typename Csctrl0Fields::UP,
      typename Csctrl0Fields::TCI,
      typename Csctrl0Fields::ROC,
      typename Csctrl0Fields::ALT_LOAD,
      typename Csctrl0Fields::FAULT,
      typename Csctrl0Fields::DBG_EN> {
    using eCL1 = typename Csctrl0Fields::eCL1;
    using eCL2 = typename Csctrl0Fields::eCL2;
    using eUP = typename Csctrl0Fields::eUP;
    using eTCI = typename Csctrl0Fields::eTCI;
    using eROC = typename Csctrl0Fields::eROC;
    using eALT_LOAD = typename Csctrl0Fields::eALT_LOAD;
    using eFAULT = typename Csctrl0Fields::eFAULT;
    using eDBG_EN = typename Csctrl0Fields::eDBG_EN;
    using CL1 = typename Csctrl0Fields::CL1;
    using CL2 = typename Csctrl0Fields::CL2;
    using TCF1 = typename Csctrl0Fields::TCF1;
    using TCF2 = typename Csctrl0Fields::TCF2;
    using TCF1EN = typename Csctrl0Fields::TCF1EN;
    using TCF2EN = typename Csctrl0Fields::TCF2EN;
    using OFLAG = typename Csctrl0Fields::OFLAG;
    using UP = typename Csctrl0Fields::UP;
    using TCI = typename Csctrl0Fields::TCI;
    using ROC = typename Csctrl0Fields::ROC;
    using ALT_LOAD = typename Csctrl0Fields::ALT_LOAD;
    using FAULT = typename Csctrl0Fields::FAULT;
    using DBG_EN = typename Csctrl0Fields::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct Filt0Fields {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Filt0Fields

  struct FILT0 : ftl::mmio::Register<
      kBase + 0x16u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Filt0Fields::FILT_PER,
      typename Filt0Fields::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename Filt0Fields::FILT_PER;
    using FILT_CNT = typename Filt0Fields::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct Dma0Fields {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dma0Fields

  struct DMA0 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Dma0Fields::IEFDE,
      typename Dma0Fields::CMPLD1DE,
      typename Dma0Fields::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename Dma0Fields::IEFDE;
    using CMPLD1DE = typename Dma0Fields::CMPLD1DE;
    using CMPLD2DE = typename Dma0Fields::CMPLD2DE;
  };

  // Timer Channel Enable Register
  struct EnblFields {
    enum class eENBL : std::uint32_t {
      // Disables the timer channel.
      eDISABLE = 0,
      // Enables the timer channel. (default)
      eENABLE = 1,
    };

    // Timer Channel Enable
    using ENBL = ftl::mmio::Field<4, 0, eENBL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EnblFields

  struct ENBL : ftl::mmio::Register<
      kBase + 0x1Eu,
      std::uint16_t,
      0x000Fu,
      ftl::mmio::RW,
      typename EnblFields::ENBL,
      ftl::mmio::Reserved<12, 4>> {
    using eENBL = typename EnblFields::eENBL;
    using VALUE = typename EnblFields::ENBL;
  };

  // Timer Channel Compare Register 1
  struct Comp11Fields {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp11Fields

  struct COMP11 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp11Fields::COMPARISON_1> {
    using COMPARISON_1 = typename Comp11Fields::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct Comp21Fields {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp21Fields

  struct COMP21 : ftl::mmio::Register<
      kBase + 0x22u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp21Fields::COMPARISON_2> {
    using COMPARISON_2 = typename Comp21Fields::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct Capt1Fields {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Capt1Fields

  struct CAPT1 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Capt1Fields::CAPTURE> {
    using CAPTURE = typename Capt1Fields::CAPTURE;
  };

  // Timer Channel Load Register
  struct Load1Fields {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Load1Fields

  struct LOAD1 : ftl::mmio::Register<
      kBase + 0x26u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Load1Fields::LOAD> {
    using LOAD = typename Load1Fields::LOAD;
  };

  // Timer Channel Hold Register
  struct Hold1Fields {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Hold1Fields

  struct HOLD1 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Hold1Fields::HOLD> {
    using HOLD = typename Hold1Fields::HOLD;
  };

  // Timer Channel Counter Register
  struct Cntr1Fields {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cntr1Fields

  struct CNTR1 : ftl::mmio::Register<
      kBase + 0x2Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cntr1Fields::COUNTER> {
    using COUNTER = typename Cntr1Fields::COUNTER;
  };

  // Timer Channel Control Register
  struct Ctrl1Fields {
    enum class eOUTMODE : std::uint32_t {
      // Asserted while counter is active
      eCOUNTER_ACTIVE = 0,
      // Clear OFLAG output on successful compare
      eCLEAR_OFLAG = 1,
      // Set OFLAG output on successful compare
      eSET_OFLAG = 2,
      // Toggle OFLAG output on successful compare
      eTOGGLE_OFLAG_SUCCESS = 3,
      // Toggle OFLAG output using alternating compare registers
      eTOGGLE_OFLAG_ALT = 4,
      // Set on compare, cleared on secondary source input edge
      eCLEAR_ON_SECONDARY = 5,
      // Set on compare, cleared on counter rollover
      eCLEAR_ON_ROLLOVER = 6,
      // Enable gated clock output while counter is active
      eENABLE_GATED_OUT = 7,
    };

    enum class eCOINIT : std::uint32_t {
      // Co-channel counter/timers cannot force a re-initialization of this counter/timer
      eDISABLE = 0,
      // Co-channel counter/timers may force a re-initialization of this counter/timer
      eENABLE = 1,
    };

    enum class eDIR : std::uint32_t {
      // Count up.
      eCOUNTUP = 0,
      // Count down.
      eCOUNTDOWN = 1,
    };

    enum class eLENGTH : std::uint32_t {
      // Count until roll over at $FFFF and continue from $0000.
      eUNTIL_ROLLOVER = 0,
      // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
      eUNTIL_COMPARE = 1,
    };

    enum class eONCE : std::uint32_t {
      // Count repeatedly.
      eREPEAT = 0,
      // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
      eUNTIL_COMPARE = 1,
    };

    enum class eSCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
    };

    enum class ePCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
      // Counter 0 output
      eCOUNTER0_OUT = 4,
      // Counter 1 output
      eCOUNTER1_OUT = 5,
      // Counter 2 output
      eCOUNTER2_OUT = 6,
      // Counter 3 output
      eCOUNTER3_OUT = 7,
      // IP bus clock divide by 1 prescaler
      eBUS_DIVBY1 = 8,
      // IP bus clock divide by 2 prescaler
      eBUS_DIVBY2 = 9,
      // IP bus clock divide by 4 prescaler
      eBUS_DIVBY4 = 10,
      // IP bus clock divide by 8 prescaler
      eBUS_DIVBY8 = 11,
      // IP bus clock divide by 16 prescaler
      eBUS_DIVBY16 = 12,
      // IP bus clock divide by 32 prescaler
      eBUS_DIVBY32 = 13,
      // IP bus clock divide by 64 prescaler
      eBUS_DIVBY64 = 14,
      // IP bus clock divide by 128 prescaler
      eBUS_DIVBY128 = 15,
    };

    enum class eCM : std::uint32_t {
      // No operation
      eNOOP = 0,
      // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
      eRISING_ONLY = 1,
      // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
      eRISING_AND_FALLING = 2,
      // Count rising edges of primary source while secondary input high active
      eRISING_WHILE_SEC_HIGH = 3,
      // Quadrature count mode, uses primary and secondary sources
      eQUADRATURE = 4,
      // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
      eRISING_SEC_DIR = 5,
      // Edge of secondary source triggers primary count until compare
      eSECONDARY = 6,
      // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
      eCASCADE = 7,
    };

    // Output Mode
    using OUTMODE = ftl::mmio::Field<3, 0, eOUTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Co-Channel Initialization
    using COINIT = ftl::mmio::Field<1, 3, eCOINIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Direction
    using DIR = ftl::mmio::Field<1, 4, eDIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Length
    using LENGTH = ftl::mmio::Field<1, 5, eLENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Once
    using ONCE = ftl::mmio::Field<1, 6, eONCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Secondary Count Source
    using SCS = ftl::mmio::Field<2, 7, eSCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Primary Count Source
    using PCS = ftl::mmio::Field<4, 9, ePCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Mode
    using CM = ftl::mmio::Field<3, 13, eCM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl1Fields

  struct CTRL1 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl1Fields::OUTMODE,
      typename Ctrl1Fields::COINIT,
      typename Ctrl1Fields::DIR,
      typename Ctrl1Fields::LENGTH,
      typename Ctrl1Fields::ONCE,
      typename Ctrl1Fields::SCS,
      typename Ctrl1Fields::PCS,
      typename Ctrl1Fields::CM> {
    using eOUTMODE = typename Ctrl1Fields::eOUTMODE;
    using eCOINIT = typename Ctrl1Fields::eCOINIT;
    using eDIR = typename Ctrl1Fields::eDIR;
    using eLENGTH = typename Ctrl1Fields::eLENGTH;
    using eONCE = typename Ctrl1Fields::eONCE;
    using eSCS = typename Ctrl1Fields::eSCS;
    using ePCS = typename Ctrl1Fields::ePCS;
    using eCM = typename Ctrl1Fields::eCM;
    using OUTMODE = typename Ctrl1Fields::OUTMODE;
    using COINIT = typename Ctrl1Fields::COINIT;
    using DIR = typename Ctrl1Fields::DIR;
    using LENGTH = typename Ctrl1Fields::LENGTH;
    using ONCE = typename Ctrl1Fields::ONCE;
    using SCS = typename Ctrl1Fields::SCS;
    using PCS = typename Ctrl1Fields::PCS;
    using CM = typename Ctrl1Fields::CM;
  };

  // Timer Channel Status and Control Register
  struct Sctrl1Fields {
    enum class eOEN : std::uint32_t {
      // The external pin is configured as an input.
      eINPUT = 0,
      // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
      eOFLAG_OUT = 1,
    };

    enum class eOPS : std::uint32_t {
      // True polarity.
      eTRUE = 0,
      // Inverted polarity.
      eINVERTED = 1,
    };

    enum class eCAPTURE_MODE : std::uint32_t {
      // Capture function is disabled
      eDISABLED = 0,
      // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
      eENABLE_RISING = 1,
      // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
      eENABLE_FALLING = 2,
      // Load capture register on both edges of input
      eENABLE_BOTH = 3,
    };

    // Output Enable
    using OEN = ftl::mmio::Field<1, 0, eOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Polarity Select
    using OPS = ftl::mmio::Field<1, 1, eOPS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force OFLAG Output
    using FORCE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forced OFLAG Value
    using VAL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable External OFLAG Force
    using EEOF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master Mode
    using MSTR = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Capture Mode
    using CAPTURE_MODE = ftl::mmio::Field<2, 6, eCAPTURE_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // External Input Signal
    using INPUT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Input Polarity Select
    using IPS = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag Interrupt Enable
    using IEFIE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag
    using IEF = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag Interrupt Enable
    using TOFIE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag
    using TOF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag Interrupt Enable
    using TCFIE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag
    using TCF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sctrl1Fields

  struct SCTRL1 : ftl::mmio::Register<
      kBase + 0x2Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sctrl1Fields::OEN,
      typename Sctrl1Fields::OPS,
      typename Sctrl1Fields::FORCE,
      typename Sctrl1Fields::VAL,
      typename Sctrl1Fields::EEOF,
      typename Sctrl1Fields::MSTR,
      typename Sctrl1Fields::CAPTURE_MODE,
      typename Sctrl1Fields::INPUT,
      typename Sctrl1Fields::IPS,
      typename Sctrl1Fields::IEFIE,
      typename Sctrl1Fields::IEF,
      typename Sctrl1Fields::TOFIE,
      typename Sctrl1Fields::TOF,
      typename Sctrl1Fields::TCFIE,
      typename Sctrl1Fields::TCF> {
    using eOEN = typename Sctrl1Fields::eOEN;
    using eOPS = typename Sctrl1Fields::eOPS;
    using eCAPTURE_MODE = typename Sctrl1Fields::eCAPTURE_MODE;
    using OEN = typename Sctrl1Fields::OEN;
    using OPS = typename Sctrl1Fields::OPS;
    using FORCE = typename Sctrl1Fields::FORCE;
    using VAL = typename Sctrl1Fields::VAL;
    using EEOF = typename Sctrl1Fields::EEOF;
    using MSTR = typename Sctrl1Fields::MSTR;
    using CAPTURE_MODE = typename Sctrl1Fields::CAPTURE_MODE;
    using INPUT = typename Sctrl1Fields::INPUT;
    using IPS = typename Sctrl1Fields::IPS;
    using IEFIE = typename Sctrl1Fields::IEFIE;
    using IEF = typename Sctrl1Fields::IEF;
    using TOFIE = typename Sctrl1Fields::TOFIE;
    using TOF = typename Sctrl1Fields::TOF;
    using TCFIE = typename Sctrl1Fields::TCFIE;
    using TCF = typename Sctrl1Fields::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct Cmpld11Fields {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld11Fields

  struct CMPLD11 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld11Fields::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename Cmpld11Fields::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct Cmpld21Fields {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld21Fields

  struct CMPLD21 : ftl::mmio::Register<
      kBase + 0x32u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld21Fields::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename Cmpld21Fields::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct Csctrl1Fields {
    enum class eCL1 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eCL2 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eUP : std::uint32_t {
      // The last count was in the DOWN direction.
      eDOWN = 0,
      // The last count was in the UP direction.
      eUP = 1,
    };

    enum class eTCI : std::uint32_t {
      // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
      eSTOP = 0,
      // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
      eRELOAD = 1,
    };

    enum class eROC : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eALT_LOAD : std::uint32_t {
      // Counter can be re-initialized only with the LOAD register.
      eDISABLE = 0,
      // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
      eENABLE = 1,
    };

    enum class eFAULT : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eDBG_EN : std::uint32_t {
      // Continue with normal operation during debug mode. (default)
      eNORMAL = 0,
      // Halt TMR counter during debug mode.
      eHALT_TMR = 1,
      // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      eFORCE_0 = 2,
      // Both halt counter and force output to 0 during debug mode.
      eHALT_AND_FORCE_0 = 3,
    };

    // Compare Load Control 1
    using CL1 = ftl::mmio::Field<2, 0, eCL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Load Control 2
    using CL2 = ftl::mmio::Field<2, 2, eCL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Flag
    using TCF1 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Flag
    using TCF2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Enable
    using TCF1EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Enable
    using TCF2EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output flag
    using OFLAG = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Counting Direction Indicator
    using UP = ftl::mmio::Field<1, 9, eUP, ftl::mmio::RO, ftl::mmio::Normal>;
    // Triggered Count Initialization Control
    using TCI = ftl::mmio::Field<1, 10, eTCI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload on Capture
    using ROC = ftl::mmio::Field<1, 11, eROC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Alternative Load Enable
    using ALT_LOAD = ftl::mmio::Field<1, 12, eALT_LOAD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Enable
    using FAULT = ftl::mmio::Field<1, 13, eFAULT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Actions Enable
    using DBG_EN = ftl::mmio::Field<2, 14, eDBG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csctrl1Fields

  struct CSCTRL1 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Csctrl1Fields::CL1,
      typename Csctrl1Fields::CL2,
      typename Csctrl1Fields::TCF1,
      typename Csctrl1Fields::TCF2,
      typename Csctrl1Fields::TCF1EN,
      typename Csctrl1Fields::TCF2EN,
      typename Csctrl1Fields::OFLAG,
      typename Csctrl1Fields::UP,
      typename Csctrl1Fields::TCI,
      typename Csctrl1Fields::ROC,
      typename Csctrl1Fields::ALT_LOAD,
      typename Csctrl1Fields::FAULT,
      typename Csctrl1Fields::DBG_EN> {
    using eCL1 = typename Csctrl1Fields::eCL1;
    using eCL2 = typename Csctrl1Fields::eCL2;
    using eUP = typename Csctrl1Fields::eUP;
    using eTCI = typename Csctrl1Fields::eTCI;
    using eROC = typename Csctrl1Fields::eROC;
    using eALT_LOAD = typename Csctrl1Fields::eALT_LOAD;
    using eFAULT = typename Csctrl1Fields::eFAULT;
    using eDBG_EN = typename Csctrl1Fields::eDBG_EN;
    using CL1 = typename Csctrl1Fields::CL1;
    using CL2 = typename Csctrl1Fields::CL2;
    using TCF1 = typename Csctrl1Fields::TCF1;
    using TCF2 = typename Csctrl1Fields::TCF2;
    using TCF1EN = typename Csctrl1Fields::TCF1EN;
    using TCF2EN = typename Csctrl1Fields::TCF2EN;
    using OFLAG = typename Csctrl1Fields::OFLAG;
    using UP = typename Csctrl1Fields::UP;
    using TCI = typename Csctrl1Fields::TCI;
    using ROC = typename Csctrl1Fields::ROC;
    using ALT_LOAD = typename Csctrl1Fields::ALT_LOAD;
    using FAULT = typename Csctrl1Fields::FAULT;
    using DBG_EN = typename Csctrl1Fields::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct Filt1Fields {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Filt1Fields

  struct FILT1 : ftl::mmio::Register<
      kBase + 0x36u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Filt1Fields::FILT_PER,
      typename Filt1Fields::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename Filt1Fields::FILT_PER;
    using FILT_CNT = typename Filt1Fields::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct Dma1Fields {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dma1Fields

  struct DMA1 : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Dma1Fields::IEFDE,
      typename Dma1Fields::CMPLD1DE,
      typename Dma1Fields::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename Dma1Fields::IEFDE;
    using CMPLD1DE = typename Dma1Fields::CMPLD1DE;
    using CMPLD2DE = typename Dma1Fields::CMPLD2DE;
  };

  // Timer Channel Compare Register 1
  struct Comp12Fields {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp12Fields

  struct COMP12 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp12Fields::COMPARISON_1> {
    using COMPARISON_1 = typename Comp12Fields::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct Comp22Fields {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp22Fields

  struct COMP22 : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp22Fields::COMPARISON_2> {
    using COMPARISON_2 = typename Comp22Fields::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct Capt2Fields {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Capt2Fields

  struct CAPT2 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Capt2Fields::CAPTURE> {
    using CAPTURE = typename Capt2Fields::CAPTURE;
  };

  // Timer Channel Load Register
  struct Load2Fields {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Load2Fields

  struct LOAD2 : ftl::mmio::Register<
      kBase + 0x46u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Load2Fields::LOAD> {
    using LOAD = typename Load2Fields::LOAD;
  };

  // Timer Channel Hold Register
  struct Hold2Fields {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Hold2Fields

  struct HOLD2 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Hold2Fields::HOLD> {
    using HOLD = typename Hold2Fields::HOLD;
  };

  // Timer Channel Counter Register
  struct Cntr2Fields {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cntr2Fields

  struct CNTR2 : ftl::mmio::Register<
      kBase + 0x4Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cntr2Fields::COUNTER> {
    using COUNTER = typename Cntr2Fields::COUNTER;
  };

  // Timer Channel Control Register
  struct Ctrl2Fields {
    enum class eOUTMODE : std::uint32_t {
      // Asserted while counter is active
      eCOUNTER_ACTIVE = 0,
      // Clear OFLAG output on successful compare
      eCLEAR_OFLAG = 1,
      // Set OFLAG output on successful compare
      eSET_OFLAG = 2,
      // Toggle OFLAG output on successful compare
      eTOGGLE_OFLAG_SUCCESS = 3,
      // Toggle OFLAG output using alternating compare registers
      eTOGGLE_OFLAG_ALT = 4,
      // Set on compare, cleared on secondary source input edge
      eCLEAR_ON_SECONDARY = 5,
      // Set on compare, cleared on counter rollover
      eCLEAR_ON_ROLLOVER = 6,
      // Enable gated clock output while counter is active
      eENABLE_GATED_OUT = 7,
    };

    enum class eCOINIT : std::uint32_t {
      // Co-channel counter/timers cannot force a re-initialization of this counter/timer
      eDISABLE = 0,
      // Co-channel counter/timers may force a re-initialization of this counter/timer
      eENABLE = 1,
    };

    enum class eDIR : std::uint32_t {
      // Count up.
      eCOUNTUP = 0,
      // Count down.
      eCOUNTDOWN = 1,
    };

    enum class eLENGTH : std::uint32_t {
      // Count until roll over at $FFFF and continue from $0000.
      eUNTIL_ROLLOVER = 0,
      // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
      eUNTIL_COMPARE = 1,
    };

    enum class eONCE : std::uint32_t {
      // Count repeatedly.
      eREPEAT = 0,
      // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
      eUNTIL_COMPARE = 1,
    };

    enum class eSCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
    };

    enum class ePCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
      // Counter 0 output
      eCOUNTER0_OUT = 4,
      // Counter 1 output
      eCOUNTER1_OUT = 5,
      // Counter 2 output
      eCOUNTER2_OUT = 6,
      // Counter 3 output
      eCOUNTER3_OUT = 7,
      // IP bus clock divide by 1 prescaler
      eBUS_DIVBY1 = 8,
      // IP bus clock divide by 2 prescaler
      eBUS_DIVBY2 = 9,
      // IP bus clock divide by 4 prescaler
      eBUS_DIVBY4 = 10,
      // IP bus clock divide by 8 prescaler
      eBUS_DIVBY8 = 11,
      // IP bus clock divide by 16 prescaler
      eBUS_DIVBY16 = 12,
      // IP bus clock divide by 32 prescaler
      eBUS_DIVBY32 = 13,
      // IP bus clock divide by 64 prescaler
      eBUS_DIVBY64 = 14,
      // IP bus clock divide by 128 prescaler
      eBUS_DIVBY128 = 15,
    };

    enum class eCM : std::uint32_t {
      // No operation
      eNOOP = 0,
      // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
      eRISING_ONLY = 1,
      // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
      eRISING_AND_FALLING = 2,
      // Count rising edges of primary source while secondary input high active
      eRISING_WHILE_SEC_HIGH = 3,
      // Quadrature count mode, uses primary and secondary sources
      eQUADRATURE = 4,
      // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
      eRISING_SEC_DIR = 5,
      // Edge of secondary source triggers primary count until compare
      eSECONDARY = 6,
      // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
      eCASCADE = 7,
    };

    // Output Mode
    using OUTMODE = ftl::mmio::Field<3, 0, eOUTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Co-Channel Initialization
    using COINIT = ftl::mmio::Field<1, 3, eCOINIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Direction
    using DIR = ftl::mmio::Field<1, 4, eDIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Length
    using LENGTH = ftl::mmio::Field<1, 5, eLENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Once
    using ONCE = ftl::mmio::Field<1, 6, eONCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Secondary Count Source
    using SCS = ftl::mmio::Field<2, 7, eSCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Primary Count Source
    using PCS = ftl::mmio::Field<4, 9, ePCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Mode
    using CM = ftl::mmio::Field<3, 13, eCM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl2Fields

  struct CTRL2 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl2Fields::OUTMODE,
      typename Ctrl2Fields::COINIT,
      typename Ctrl2Fields::DIR,
      typename Ctrl2Fields::LENGTH,
      typename Ctrl2Fields::ONCE,
      typename Ctrl2Fields::SCS,
      typename Ctrl2Fields::PCS,
      typename Ctrl2Fields::CM> {
    using eOUTMODE = typename Ctrl2Fields::eOUTMODE;
    using eCOINIT = typename Ctrl2Fields::eCOINIT;
    using eDIR = typename Ctrl2Fields::eDIR;
    using eLENGTH = typename Ctrl2Fields::eLENGTH;
    using eONCE = typename Ctrl2Fields::eONCE;
    using eSCS = typename Ctrl2Fields::eSCS;
    using ePCS = typename Ctrl2Fields::ePCS;
    using eCM = typename Ctrl2Fields::eCM;
    using OUTMODE = typename Ctrl2Fields::OUTMODE;
    using COINIT = typename Ctrl2Fields::COINIT;
    using DIR = typename Ctrl2Fields::DIR;
    using LENGTH = typename Ctrl2Fields::LENGTH;
    using ONCE = typename Ctrl2Fields::ONCE;
    using SCS = typename Ctrl2Fields::SCS;
    using PCS = typename Ctrl2Fields::PCS;
    using CM = typename Ctrl2Fields::CM;
  };

  // Timer Channel Status and Control Register
  struct Sctrl2Fields {
    enum class eOEN : std::uint32_t {
      // The external pin is configured as an input.
      eINPUT = 0,
      // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
      eOFLAG_OUT = 1,
    };

    enum class eOPS : std::uint32_t {
      // True polarity.
      eTRUE = 0,
      // Inverted polarity.
      eINVERTED = 1,
    };

    enum class eCAPTURE_MODE : std::uint32_t {
      // Capture function is disabled
      eDISABLED = 0,
      // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
      eENABLE_RISING = 1,
      // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
      eENABLE_FALLING = 2,
      // Load capture register on both edges of input
      eENABLE_BOTH = 3,
    };

    // Output Enable
    using OEN = ftl::mmio::Field<1, 0, eOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Polarity Select
    using OPS = ftl::mmio::Field<1, 1, eOPS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force OFLAG Output
    using FORCE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forced OFLAG Value
    using VAL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable External OFLAG Force
    using EEOF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master Mode
    using MSTR = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Capture Mode
    using CAPTURE_MODE = ftl::mmio::Field<2, 6, eCAPTURE_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // External Input Signal
    using INPUT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Input Polarity Select
    using IPS = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag Interrupt Enable
    using IEFIE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag
    using IEF = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag Interrupt Enable
    using TOFIE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag
    using TOF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag Interrupt Enable
    using TCFIE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag
    using TCF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sctrl2Fields

  struct SCTRL2 : ftl::mmio::Register<
      kBase + 0x4Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sctrl2Fields::OEN,
      typename Sctrl2Fields::OPS,
      typename Sctrl2Fields::FORCE,
      typename Sctrl2Fields::VAL,
      typename Sctrl2Fields::EEOF,
      typename Sctrl2Fields::MSTR,
      typename Sctrl2Fields::CAPTURE_MODE,
      typename Sctrl2Fields::INPUT,
      typename Sctrl2Fields::IPS,
      typename Sctrl2Fields::IEFIE,
      typename Sctrl2Fields::IEF,
      typename Sctrl2Fields::TOFIE,
      typename Sctrl2Fields::TOF,
      typename Sctrl2Fields::TCFIE,
      typename Sctrl2Fields::TCF> {
    using eOEN = typename Sctrl2Fields::eOEN;
    using eOPS = typename Sctrl2Fields::eOPS;
    using eCAPTURE_MODE = typename Sctrl2Fields::eCAPTURE_MODE;
    using OEN = typename Sctrl2Fields::OEN;
    using OPS = typename Sctrl2Fields::OPS;
    using FORCE = typename Sctrl2Fields::FORCE;
    using VAL = typename Sctrl2Fields::VAL;
    using EEOF = typename Sctrl2Fields::EEOF;
    using MSTR = typename Sctrl2Fields::MSTR;
    using CAPTURE_MODE = typename Sctrl2Fields::CAPTURE_MODE;
    using INPUT = typename Sctrl2Fields::INPUT;
    using IPS = typename Sctrl2Fields::IPS;
    using IEFIE = typename Sctrl2Fields::IEFIE;
    using IEF = typename Sctrl2Fields::IEF;
    using TOFIE = typename Sctrl2Fields::TOFIE;
    using TOF = typename Sctrl2Fields::TOF;
    using TCFIE = typename Sctrl2Fields::TCFIE;
    using TCF = typename Sctrl2Fields::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct Cmpld12Fields {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld12Fields

  struct CMPLD12 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld12Fields::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename Cmpld12Fields::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct Cmpld22Fields {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld22Fields

  struct CMPLD22 : ftl::mmio::Register<
      kBase + 0x52u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld22Fields::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename Cmpld22Fields::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct Csctrl2Fields {
    enum class eCL1 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eCL2 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eUP : std::uint32_t {
      // The last count was in the DOWN direction.
      eDOWN = 0,
      // The last count was in the UP direction.
      eUP = 1,
    };

    enum class eTCI : std::uint32_t {
      // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
      eSTOP = 0,
      // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
      eRELOAD = 1,
    };

    enum class eROC : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eALT_LOAD : std::uint32_t {
      // Counter can be re-initialized only with the LOAD register.
      eDISABLE = 0,
      // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
      eENABLE = 1,
    };

    enum class eFAULT : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eDBG_EN : std::uint32_t {
      // Continue with normal operation during debug mode. (default)
      eNORMAL = 0,
      // Halt TMR counter during debug mode.
      eHALT_TMR = 1,
      // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      eFORCE_0 = 2,
      // Both halt counter and force output to 0 during debug mode.
      eHALT_AND_FORCE_0 = 3,
    };

    // Compare Load Control 1
    using CL1 = ftl::mmio::Field<2, 0, eCL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Load Control 2
    using CL2 = ftl::mmio::Field<2, 2, eCL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Flag
    using TCF1 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Flag
    using TCF2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Enable
    using TCF1EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Enable
    using TCF2EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output flag
    using OFLAG = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Counting Direction Indicator
    using UP = ftl::mmio::Field<1, 9, eUP, ftl::mmio::RO, ftl::mmio::Normal>;
    // Triggered Count Initialization Control
    using TCI = ftl::mmio::Field<1, 10, eTCI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload on Capture
    using ROC = ftl::mmio::Field<1, 11, eROC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Alternative Load Enable
    using ALT_LOAD = ftl::mmio::Field<1, 12, eALT_LOAD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Enable
    using FAULT = ftl::mmio::Field<1, 13, eFAULT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Actions Enable
    using DBG_EN = ftl::mmio::Field<2, 14, eDBG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csctrl2Fields

  struct CSCTRL2 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Csctrl2Fields::CL1,
      typename Csctrl2Fields::CL2,
      typename Csctrl2Fields::TCF1,
      typename Csctrl2Fields::TCF2,
      typename Csctrl2Fields::TCF1EN,
      typename Csctrl2Fields::TCF2EN,
      typename Csctrl2Fields::OFLAG,
      typename Csctrl2Fields::UP,
      typename Csctrl2Fields::TCI,
      typename Csctrl2Fields::ROC,
      typename Csctrl2Fields::ALT_LOAD,
      typename Csctrl2Fields::FAULT,
      typename Csctrl2Fields::DBG_EN> {
    using eCL1 = typename Csctrl2Fields::eCL1;
    using eCL2 = typename Csctrl2Fields::eCL2;
    using eUP = typename Csctrl2Fields::eUP;
    using eTCI = typename Csctrl2Fields::eTCI;
    using eROC = typename Csctrl2Fields::eROC;
    using eALT_LOAD = typename Csctrl2Fields::eALT_LOAD;
    using eFAULT = typename Csctrl2Fields::eFAULT;
    using eDBG_EN = typename Csctrl2Fields::eDBG_EN;
    using CL1 = typename Csctrl2Fields::CL1;
    using CL2 = typename Csctrl2Fields::CL2;
    using TCF1 = typename Csctrl2Fields::TCF1;
    using TCF2 = typename Csctrl2Fields::TCF2;
    using TCF1EN = typename Csctrl2Fields::TCF1EN;
    using TCF2EN = typename Csctrl2Fields::TCF2EN;
    using OFLAG = typename Csctrl2Fields::OFLAG;
    using UP = typename Csctrl2Fields::UP;
    using TCI = typename Csctrl2Fields::TCI;
    using ROC = typename Csctrl2Fields::ROC;
    using ALT_LOAD = typename Csctrl2Fields::ALT_LOAD;
    using FAULT = typename Csctrl2Fields::FAULT;
    using DBG_EN = typename Csctrl2Fields::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct Filt2Fields {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Filt2Fields

  struct FILT2 : ftl::mmio::Register<
      kBase + 0x56u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Filt2Fields::FILT_PER,
      typename Filt2Fields::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename Filt2Fields::FILT_PER;
    using FILT_CNT = typename Filt2Fields::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct Dma2Fields {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dma2Fields

  struct DMA2 : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Dma2Fields::IEFDE,
      typename Dma2Fields::CMPLD1DE,
      typename Dma2Fields::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename Dma2Fields::IEFDE;
    using CMPLD1DE = typename Dma2Fields::CMPLD1DE;
    using CMPLD2DE = typename Dma2Fields::CMPLD2DE;
  };

  // Timer Channel Compare Register 1
  struct Comp13Fields {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp13Fields

  struct COMP13 : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp13Fields::COMPARISON_1> {
    using COMPARISON_1 = typename Comp13Fields::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct Comp23Fields {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Comp23Fields

  struct COMP23 : ftl::mmio::Register<
      kBase + 0x62u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Comp23Fields::COMPARISON_2> {
    using COMPARISON_2 = typename Comp23Fields::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct Capt3Fields {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Capt3Fields

  struct CAPT3 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Capt3Fields::CAPTURE> {
    using CAPTURE = typename Capt3Fields::CAPTURE;
  };

  // Timer Channel Load Register
  struct Load3Fields {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Load3Fields

  struct LOAD3 : ftl::mmio::Register<
      kBase + 0x66u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Load3Fields::LOAD> {
    using LOAD = typename Load3Fields::LOAD;
  };

  // Timer Channel Hold Register
  struct Hold3Fields {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Hold3Fields

  struct HOLD3 : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Hold3Fields::HOLD> {
    using HOLD = typename Hold3Fields::HOLD;
  };

  // Timer Channel Counter Register
  struct Cntr3Fields {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cntr3Fields

  struct CNTR3 : ftl::mmio::Register<
      kBase + 0x6Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cntr3Fields::COUNTER> {
    using COUNTER = typename Cntr3Fields::COUNTER;
  };

  // Timer Channel Control Register
  struct Ctrl3Fields {
    enum class eOUTMODE : std::uint32_t {
      // Asserted while counter is active
      eCOUNTER_ACTIVE = 0,
      // Clear OFLAG output on successful compare
      eCLEAR_OFLAG = 1,
      // Set OFLAG output on successful compare
      eSET_OFLAG = 2,
      // Toggle OFLAG output on successful compare
      eTOGGLE_OFLAG_SUCCESS = 3,
      // Toggle OFLAG output using alternating compare registers
      eTOGGLE_OFLAG_ALT = 4,
      // Set on compare, cleared on secondary source input edge
      eCLEAR_ON_SECONDARY = 5,
      // Set on compare, cleared on counter rollover
      eCLEAR_ON_ROLLOVER = 6,
      // Enable gated clock output while counter is active
      eENABLE_GATED_OUT = 7,
    };

    enum class eCOINIT : std::uint32_t {
      // Co-channel counter/timers cannot force a re-initialization of this counter/timer
      eDISABLE = 0,
      // Co-channel counter/timers may force a re-initialization of this counter/timer
      eENABLE = 1,
    };

    enum class eDIR : std::uint32_t {
      // Count up.
      eCOUNTUP = 0,
      // Count down.
      eCOUNTDOWN = 1,
    };

    enum class eLENGTH : std::uint32_t {
      // Count until roll over at $FFFF and continue from $0000.
      eUNTIL_ROLLOVER = 0,
      // Count until compare, then re-initialize. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, alternating values of COMP1 and COMP2 are used to generate successful comparisons. For example, the counter counts until a COMP1 value is reached, re-initializes, counts until COMP2 value is reached, re-initializes, counts until COMP1 value is reached, and so on.
      eUNTIL_COMPARE = 1,
    };

    enum class eONCE : std::uint32_t {
      // Count repeatedly.
      eREPEAT = 0,
      // Count until compare and then stop. If counting up, a successful compare occurs when the counter reaches a COMP1 value. If counting down, a successful compare occurs when the counter reaches a COMP2 value. When output mode $4 is used, the counter re-initializes after reaching the COMP1 value, continues to count to the COMP2 value, and then stops.
      eUNTIL_COMPARE = 1,
    };

    enum class eSCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
    };

    enum class ePCS : std::uint32_t {
      // Counter 0 input pin
      eCOUNTER0_IN = 0,
      // Counter 1 input pin
      eCOUNTER1_IN = 1,
      // Counter 2 input pin
      eCOUNTER2_IN = 2,
      // Counter 3 input pin
      eCOUNTER3_IN = 3,
      // Counter 0 output
      eCOUNTER0_OUT = 4,
      // Counter 1 output
      eCOUNTER1_OUT = 5,
      // Counter 2 output
      eCOUNTER2_OUT = 6,
      // Counter 3 output
      eCOUNTER3_OUT = 7,
      // IP bus clock divide by 1 prescaler
      eBUS_DIVBY1 = 8,
      // IP bus clock divide by 2 prescaler
      eBUS_DIVBY2 = 9,
      // IP bus clock divide by 4 prescaler
      eBUS_DIVBY4 = 10,
      // IP bus clock divide by 8 prescaler
      eBUS_DIVBY8 = 11,
      // IP bus clock divide by 16 prescaler
      eBUS_DIVBY16 = 12,
      // IP bus clock divide by 32 prescaler
      eBUS_DIVBY32 = 13,
      // IP bus clock divide by 64 prescaler
      eBUS_DIVBY64 = 14,
      // IP bus clock divide by 128 prescaler
      eBUS_DIVBY128 = 15,
    };

    enum class eCM : std::uint32_t {
      // No operation
      eNOOP = 0,
      // Count rising edges of primary sourceRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1. If the primary count source is IP bus clock divide by 1, only rising edges are counted regardless of the value of SCTRL[IPS].
      eRISING_ONLY = 1,
      // Count rising and falling edges of primary sourceIP bus clock divide by 1 cannot be used as a primary count source in edge count mode.
      eRISING_AND_FALLING = 2,
      // Count rising edges of primary source while secondary input high active
      eRISING_WHILE_SEC_HIGH = 3,
      // Quadrature count mode, uses primary and secondary sources
      eQUADRATURE = 4,
      // Count rising edges of primary source; secondary source specifies directionRising edges are counted only when SCTRL[IPS] = 0. Falling edges are counted when SCTRL[IPS] = 1.
      eRISING_SEC_DIR = 5,
      // Edge of secondary source triggers primary count until compare
      eSECONDARY = 6,
      // Cascaded counter mode (up/down)The primary count source must be set to one of the counter outputs.
      eCASCADE = 7,
    };

    // Output Mode
    using OUTMODE = ftl::mmio::Field<3, 0, eOUTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Co-Channel Initialization
    using COINIT = ftl::mmio::Field<1, 3, eCOINIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Direction
    using DIR = ftl::mmio::Field<1, 4, eDIR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Length
    using LENGTH = ftl::mmio::Field<1, 5, eLENGTH, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Once
    using ONCE = ftl::mmio::Field<1, 6, eONCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Secondary Count Source
    using SCS = ftl::mmio::Field<2, 7, eSCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Primary Count Source
    using PCS = ftl::mmio::Field<4, 9, ePCS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Mode
    using CM = ftl::mmio::Field<3, 13, eCM, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl3Fields

  struct CTRL3 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl3Fields::OUTMODE,
      typename Ctrl3Fields::COINIT,
      typename Ctrl3Fields::DIR,
      typename Ctrl3Fields::LENGTH,
      typename Ctrl3Fields::ONCE,
      typename Ctrl3Fields::SCS,
      typename Ctrl3Fields::PCS,
      typename Ctrl3Fields::CM> {
    using eOUTMODE = typename Ctrl3Fields::eOUTMODE;
    using eCOINIT = typename Ctrl3Fields::eCOINIT;
    using eDIR = typename Ctrl3Fields::eDIR;
    using eLENGTH = typename Ctrl3Fields::eLENGTH;
    using eONCE = typename Ctrl3Fields::eONCE;
    using eSCS = typename Ctrl3Fields::eSCS;
    using ePCS = typename Ctrl3Fields::ePCS;
    using eCM = typename Ctrl3Fields::eCM;
    using OUTMODE = typename Ctrl3Fields::OUTMODE;
    using COINIT = typename Ctrl3Fields::COINIT;
    using DIR = typename Ctrl3Fields::DIR;
    using LENGTH = typename Ctrl3Fields::LENGTH;
    using ONCE = typename Ctrl3Fields::ONCE;
    using SCS = typename Ctrl3Fields::SCS;
    using PCS = typename Ctrl3Fields::PCS;
    using CM = typename Ctrl3Fields::CM;
  };

  // Timer Channel Status and Control Register
  struct Sctrl3Fields {
    enum class eOEN : std::uint32_t {
      // The external pin is configured as an input.
      eINPUT = 0,
      // The OFLAG output signal is driven on the external pin. Other timer groups using this external pin as their input see the driven value. The polarity of the signal is determined by OPS.
      eOFLAG_OUT = 1,
    };

    enum class eOPS : std::uint32_t {
      // True polarity.
      eTRUE = 0,
      // Inverted polarity.
      eINVERTED = 1,
    };

    enum class eCAPTURE_MODE : std::uint32_t {
      // Capture function is disabled
      eDISABLED = 0,
      // Load capture register on rising edge (when IPS=0) or falling edge (when IPS=1) of input
      eENABLE_RISING = 1,
      // Load capture register on falling edge (when IPS=0) or rising edge (when IPS=1) of input
      eENABLE_FALLING = 2,
      // Load capture register on both edges of input
      eENABLE_BOTH = 3,
    };

    // Output Enable
    using OEN = ftl::mmio::Field<1, 0, eOEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Polarity Select
    using OPS = ftl::mmio::Field<1, 1, eOPS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force OFLAG Output
    using FORCE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Forced OFLAG Value
    using VAL = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable External OFLAG Force
    using EEOF = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Master Mode
    using MSTR = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Capture Mode
    using CAPTURE_MODE = ftl::mmio::Field<2, 6, eCAPTURE_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // External Input Signal
    using INPUT = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Input Polarity Select
    using IPS = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag Interrupt Enable
    using IEFIE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Edge Flag
    using IEF = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag Interrupt Enable
    using TOFIE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Overflow Flag
    using TOF = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag Interrupt Enable
    using TCFIE = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare Flag
    using TCF = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sctrl3Fields

  struct SCTRL3 : ftl::mmio::Register<
      kBase + 0x6Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sctrl3Fields::OEN,
      typename Sctrl3Fields::OPS,
      typename Sctrl3Fields::FORCE,
      typename Sctrl3Fields::VAL,
      typename Sctrl3Fields::EEOF,
      typename Sctrl3Fields::MSTR,
      typename Sctrl3Fields::CAPTURE_MODE,
      typename Sctrl3Fields::INPUT,
      typename Sctrl3Fields::IPS,
      typename Sctrl3Fields::IEFIE,
      typename Sctrl3Fields::IEF,
      typename Sctrl3Fields::TOFIE,
      typename Sctrl3Fields::TOF,
      typename Sctrl3Fields::TCFIE,
      typename Sctrl3Fields::TCF> {
    using eOEN = typename Sctrl3Fields::eOEN;
    using eOPS = typename Sctrl3Fields::eOPS;
    using eCAPTURE_MODE = typename Sctrl3Fields::eCAPTURE_MODE;
    using OEN = typename Sctrl3Fields::OEN;
    using OPS = typename Sctrl3Fields::OPS;
    using FORCE = typename Sctrl3Fields::FORCE;
    using VAL = typename Sctrl3Fields::VAL;
    using EEOF = typename Sctrl3Fields::EEOF;
    using MSTR = typename Sctrl3Fields::MSTR;
    using CAPTURE_MODE = typename Sctrl3Fields::CAPTURE_MODE;
    using INPUT = typename Sctrl3Fields::INPUT;
    using IPS = typename Sctrl3Fields::IPS;
    using IEFIE = typename Sctrl3Fields::IEFIE;
    using IEF = typename Sctrl3Fields::IEF;
    using TOFIE = typename Sctrl3Fields::TOFIE;
    using TOF = typename Sctrl3Fields::TOF;
    using TCFIE = typename Sctrl3Fields::TCFIE;
    using TCF = typename Sctrl3Fields::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct Cmpld13Fields {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld13Fields

  struct CMPLD13 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld13Fields::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename Cmpld13Fields::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct Cmpld23Fields {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Cmpld23Fields

  struct CMPLD23 : ftl::mmio::Register<
      kBase + 0x72u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Cmpld23Fields::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename Cmpld23Fields::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct Csctrl3Fields {
    enum class eCL1 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eCL2 : std::uint32_t {
      // Never preload
      eNEVER = 0,
      // Load upon successful compare with the value in COMP1
      eCOMP1 = 1,
      // Load upon successful compare with the value in COMP2
      eCOMP2 = 2,
    };

    enum class eUP : std::uint32_t {
      // The last count was in the DOWN direction.
      eDOWN = 0,
      // The last count was in the UP direction.
      eUP = 1,
    };

    enum class eTCI : std::uint32_t {
      // Stop the counter upon receiving a second trigger event while still counting from the first trigger event.
      eSTOP = 0,
      // Reload the counter upon receiving a second trigger event while still counting from the first trigger event.
      eRELOAD = 1,
    };

    enum class eROC : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eALT_LOAD : std::uint32_t {
      // Counter can be re-initialized only with the LOAD register.
      eDISABLE = 0,
      // Counter can be re-initialized with the LOAD or CMPLD2 registers depending on count direction.
      eENABLE = 1,
    };

    enum class eFAULT : std::uint32_t {
      // Disables
      eDISABLE = 0,
      // Enables
      eENABLE = 1,
    };

    enum class eDBG_EN : std::uint32_t {
      // Continue with normal operation during debug mode. (default)
      eNORMAL = 0,
      // Halt TMR counter during debug mode.
      eHALT_TMR = 1,
      // Force TMR output to logic 0 (prior to consideration of SCTRL[OPS]).
      eFORCE_0 = 2,
      // Both halt counter and force output to 0 during debug mode.
      eHALT_AND_FORCE_0 = 3,
    };

    // Compare Load Control 1
    using CL1 = ftl::mmio::Field<2, 0, eCL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Load Control 2
    using CL2 = ftl::mmio::Field<2, 2, eCL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Flag
    using TCF1 = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Flag
    using TCF2 = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 1 Interrupt Enable
    using TCF1EN = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Compare 2 Interrupt Enable
    using TCF2EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output flag
    using OFLAG = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Counting Direction Indicator
    using UP = ftl::mmio::Field<1, 9, eUP, ftl::mmio::RO, ftl::mmio::Normal>;
    // Triggered Count Initialization Control
    using TCI = ftl::mmio::Field<1, 10, eTCI, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload on Capture
    using ROC = ftl::mmio::Field<1, 11, eROC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Alternative Load Enable
    using ALT_LOAD = ftl::mmio::Field<1, 12, eALT_LOAD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Enable
    using FAULT = ftl::mmio::Field<1, 13, eFAULT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Actions Enable
    using DBG_EN = ftl::mmio::Field<2, 14, eDBG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Csctrl3Fields

  struct CSCTRL3 : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Csctrl3Fields::CL1,
      typename Csctrl3Fields::CL2,
      typename Csctrl3Fields::TCF1,
      typename Csctrl3Fields::TCF2,
      typename Csctrl3Fields::TCF1EN,
      typename Csctrl3Fields::TCF2EN,
      typename Csctrl3Fields::OFLAG,
      typename Csctrl3Fields::UP,
      typename Csctrl3Fields::TCI,
      typename Csctrl3Fields::ROC,
      typename Csctrl3Fields::ALT_LOAD,
      typename Csctrl3Fields::FAULT,
      typename Csctrl3Fields::DBG_EN> {
    using eCL1 = typename Csctrl3Fields::eCL1;
    using eCL2 = typename Csctrl3Fields::eCL2;
    using eUP = typename Csctrl3Fields::eUP;
    using eTCI = typename Csctrl3Fields::eTCI;
    using eROC = typename Csctrl3Fields::eROC;
    using eALT_LOAD = typename Csctrl3Fields::eALT_LOAD;
    using eFAULT = typename Csctrl3Fields::eFAULT;
    using eDBG_EN = typename Csctrl3Fields::eDBG_EN;
    using CL1 = typename Csctrl3Fields::CL1;
    using CL2 = typename Csctrl3Fields::CL2;
    using TCF1 = typename Csctrl3Fields::TCF1;
    using TCF2 = typename Csctrl3Fields::TCF2;
    using TCF1EN = typename Csctrl3Fields::TCF1EN;
    using TCF2EN = typename Csctrl3Fields::TCF2EN;
    using OFLAG = typename Csctrl3Fields::OFLAG;
    using UP = typename Csctrl3Fields::UP;
    using TCI = typename Csctrl3Fields::TCI;
    using ROC = typename Csctrl3Fields::ROC;
    using ALT_LOAD = typename Csctrl3Fields::ALT_LOAD;
    using FAULT = typename Csctrl3Fields::FAULT;
    using DBG_EN = typename Csctrl3Fields::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct Filt3Fields {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Filt3Fields

  struct FILT3 : ftl::mmio::Register<
      kBase + 0x76u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Filt3Fields::FILT_PER,
      typename Filt3Fields::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename Filt3Fields::FILT_PER;
    using FILT_CNT = typename Filt3Fields::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct Dma3Fields {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Dma3Fields

  struct DMA3 : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Dma3Fields::IEFDE,
      typename Dma3Fields::CMPLD1DE,
      typename Dma3Fields::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename Dma3Fields::IEFDE;
    using CMPLD1DE = typename Dma3Fields::CMPLD1DE;
    using CMPLD2DE = typename Dma3Fields::CMPLD2DE;
  };

};

}  // namespace regs