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
  struct COMP10_fields_ {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP10_fields_

  struct COMP10 : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP10_fields_::COMPARISON_1> {
    using COMPARISON_1 = typename COMP10_fields_::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct COMP20_fields_ {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP20_fields_

  struct COMP20 : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP20_fields_::COMPARISON_2> {
    using COMPARISON_2 = typename COMP20_fields_::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct CAPT0_fields_ {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAPT0_fields_

  struct CAPT0 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CAPT0_fields_::CAPTURE> {
    using CAPTURE = typename CAPT0_fields_::CAPTURE;
  };

  // Timer Channel Load Register
  struct LOAD0_fields_ {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LOAD0_fields_

  struct LOAD0 : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LOAD0_fields_::LOAD> {
    using LOAD = typename LOAD0_fields_::LOAD;
  };

  // Timer Channel Hold Register
  struct HOLD0_fields_ {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HOLD0_fields_

  struct HOLD0 : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename HOLD0_fields_::HOLD> {
    using HOLD = typename HOLD0_fields_::HOLD;
  };

  // Timer Channel Counter Register
  struct CNTR0_fields_ {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CNTR0_fields_

  struct CNTR0 : ftl::mmio::Register<
      kBase + 0xAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CNTR0_fields_::COUNTER> {
    using COUNTER = typename CNTR0_fields_::COUNTER;
  };

  // Timer Channel Control Register
  struct CTRL0_fields_ {
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
  };  // struct CTRL0_fields_

  struct CTRL0 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CTRL0_fields_::OUTMODE,
      typename CTRL0_fields_::COINIT,
      typename CTRL0_fields_::DIR,
      typename CTRL0_fields_::LENGTH,
      typename CTRL0_fields_::ONCE,
      typename CTRL0_fields_::SCS,
      typename CTRL0_fields_::PCS,
      typename CTRL0_fields_::CM> {
    using eOUTMODE = typename CTRL0_fields_::eOUTMODE;
    using eCOINIT = typename CTRL0_fields_::eCOINIT;
    using eDIR = typename CTRL0_fields_::eDIR;
    using eLENGTH = typename CTRL0_fields_::eLENGTH;
    using eONCE = typename CTRL0_fields_::eONCE;
    using eSCS = typename CTRL0_fields_::eSCS;
    using ePCS = typename CTRL0_fields_::ePCS;
    using eCM = typename CTRL0_fields_::eCM;
    using OUTMODE = typename CTRL0_fields_::OUTMODE;
    using COINIT = typename CTRL0_fields_::COINIT;
    using DIR = typename CTRL0_fields_::DIR;
    using LENGTH = typename CTRL0_fields_::LENGTH;
    using ONCE = typename CTRL0_fields_::ONCE;
    using SCS = typename CTRL0_fields_::SCS;
    using PCS = typename CTRL0_fields_::PCS;
    using CM = typename CTRL0_fields_::CM;
  };

  // Timer Channel Status and Control Register
  struct SCTRL0_fields_ {
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
  };  // struct SCTRL0_fields_

  struct SCTRL0 : ftl::mmio::Register<
      kBase + 0xEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SCTRL0_fields_::OEN,
      typename SCTRL0_fields_::OPS,
      typename SCTRL0_fields_::FORCE,
      typename SCTRL0_fields_::VAL,
      typename SCTRL0_fields_::EEOF,
      typename SCTRL0_fields_::MSTR,
      typename SCTRL0_fields_::CAPTURE_MODE,
      typename SCTRL0_fields_::INPUT,
      typename SCTRL0_fields_::IPS,
      typename SCTRL0_fields_::IEFIE,
      typename SCTRL0_fields_::IEF,
      typename SCTRL0_fields_::TOFIE,
      typename SCTRL0_fields_::TOF,
      typename SCTRL0_fields_::TCFIE,
      typename SCTRL0_fields_::TCF> {
    using eOEN = typename SCTRL0_fields_::eOEN;
    using eOPS = typename SCTRL0_fields_::eOPS;
    using eCAPTURE_MODE = typename SCTRL0_fields_::eCAPTURE_MODE;
    using OEN = typename SCTRL0_fields_::OEN;
    using OPS = typename SCTRL0_fields_::OPS;
    using FORCE = typename SCTRL0_fields_::FORCE;
    using VAL = typename SCTRL0_fields_::VAL;
    using EEOF = typename SCTRL0_fields_::EEOF;
    using MSTR = typename SCTRL0_fields_::MSTR;
    using CAPTURE_MODE = typename SCTRL0_fields_::CAPTURE_MODE;
    using INPUT = typename SCTRL0_fields_::INPUT;
    using IPS = typename SCTRL0_fields_::IPS;
    using IEFIE = typename SCTRL0_fields_::IEFIE;
    using IEF = typename SCTRL0_fields_::IEF;
    using TOFIE = typename SCTRL0_fields_::TOFIE;
    using TOF = typename SCTRL0_fields_::TOF;
    using TCFIE = typename SCTRL0_fields_::TCFIE;
    using TCF = typename SCTRL0_fields_::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct CMPLD10_fields_ {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD10_fields_

  struct CMPLD10 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD10_fields_::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename CMPLD10_fields_::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct CMPLD20_fields_ {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD20_fields_

  struct CMPLD20 : ftl::mmio::Register<
      kBase + 0x12u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD20_fields_::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename CMPLD20_fields_::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct CSCTRL0_fields_ {
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
  };  // struct CSCTRL0_fields_

  struct CSCTRL0 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CSCTRL0_fields_::CL1,
      typename CSCTRL0_fields_::CL2,
      typename CSCTRL0_fields_::TCF1,
      typename CSCTRL0_fields_::TCF2,
      typename CSCTRL0_fields_::TCF1EN,
      typename CSCTRL0_fields_::TCF2EN,
      typename CSCTRL0_fields_::OFLAG,
      typename CSCTRL0_fields_::UP,
      typename CSCTRL0_fields_::TCI,
      typename CSCTRL0_fields_::ROC,
      typename CSCTRL0_fields_::ALT_LOAD,
      typename CSCTRL0_fields_::FAULT,
      typename CSCTRL0_fields_::DBG_EN> {
    using eCL1 = typename CSCTRL0_fields_::eCL1;
    using eCL2 = typename CSCTRL0_fields_::eCL2;
    using eUP = typename CSCTRL0_fields_::eUP;
    using eTCI = typename CSCTRL0_fields_::eTCI;
    using eROC = typename CSCTRL0_fields_::eROC;
    using eALT_LOAD = typename CSCTRL0_fields_::eALT_LOAD;
    using eFAULT = typename CSCTRL0_fields_::eFAULT;
    using eDBG_EN = typename CSCTRL0_fields_::eDBG_EN;
    using CL1 = typename CSCTRL0_fields_::CL1;
    using CL2 = typename CSCTRL0_fields_::CL2;
    using TCF1 = typename CSCTRL0_fields_::TCF1;
    using TCF2 = typename CSCTRL0_fields_::TCF2;
    using TCF1EN = typename CSCTRL0_fields_::TCF1EN;
    using TCF2EN = typename CSCTRL0_fields_::TCF2EN;
    using OFLAG = typename CSCTRL0_fields_::OFLAG;
    using UP = typename CSCTRL0_fields_::UP;
    using TCI = typename CSCTRL0_fields_::TCI;
    using ROC = typename CSCTRL0_fields_::ROC;
    using ALT_LOAD = typename CSCTRL0_fields_::ALT_LOAD;
    using FAULT = typename CSCTRL0_fields_::FAULT;
    using DBG_EN = typename CSCTRL0_fields_::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct FILT0_fields_ {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FILT0_fields_

  struct FILT0 : ftl::mmio::Register<
      kBase + 0x16u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FILT0_fields_::FILT_PER,
      typename FILT0_fields_::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename FILT0_fields_::FILT_PER;
    using FILT_CNT = typename FILT0_fields_::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct DMA0_fields_ {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMA0_fields_

  struct DMA0 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DMA0_fields_::IEFDE,
      typename DMA0_fields_::CMPLD1DE,
      typename DMA0_fields_::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename DMA0_fields_::IEFDE;
    using CMPLD1DE = typename DMA0_fields_::CMPLD1DE;
    using CMPLD2DE = typename DMA0_fields_::CMPLD2DE;
  };

  // Timer Channel Enable Register
  struct ENBL_fields_ {
    enum class eENBL : std::uint32_t {
      // Disables the timer channel.
      eDISABLE = 0,
      // Enables the timer channel. (default)
      eENABLE = 1,
    };

    // Timer Channel Enable
    using ENBL = ftl::mmio::Field<4, 0, eENBL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ENBL_fields_

  struct ENBL : ftl::mmio::Register<
      kBase + 0x1Eu,
      std::uint16_t,
      0x000Fu,
      ftl::mmio::RW,
      typename ENBL_fields_::ENBL,
      ftl::mmio::Reserved<12, 4>> {
    using eENBL = typename ENBL_fields_::eENBL;
    using VALUE = typename ENBL_fields_::ENBL;
  };

  // Timer Channel Compare Register 1
  struct COMP11_fields_ {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP11_fields_

  struct COMP11 : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP11_fields_::COMPARISON_1> {
    using COMPARISON_1 = typename COMP11_fields_::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct COMP21_fields_ {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP21_fields_

  struct COMP21 : ftl::mmio::Register<
      kBase + 0x22u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP21_fields_::COMPARISON_2> {
    using COMPARISON_2 = typename COMP21_fields_::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct CAPT1_fields_ {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAPT1_fields_

  struct CAPT1 : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CAPT1_fields_::CAPTURE> {
    using CAPTURE = typename CAPT1_fields_::CAPTURE;
  };

  // Timer Channel Load Register
  struct LOAD1_fields_ {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LOAD1_fields_

  struct LOAD1 : ftl::mmio::Register<
      kBase + 0x26u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LOAD1_fields_::LOAD> {
    using LOAD = typename LOAD1_fields_::LOAD;
  };

  // Timer Channel Hold Register
  struct HOLD1_fields_ {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HOLD1_fields_

  struct HOLD1 : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename HOLD1_fields_::HOLD> {
    using HOLD = typename HOLD1_fields_::HOLD;
  };

  // Timer Channel Counter Register
  struct CNTR1_fields_ {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CNTR1_fields_

  struct CNTR1 : ftl::mmio::Register<
      kBase + 0x2Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CNTR1_fields_::COUNTER> {
    using COUNTER = typename CNTR1_fields_::COUNTER;
  };

  // Timer Channel Control Register
  struct CTRL1_fields_ {
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
  };  // struct CTRL1_fields_

  struct CTRL1 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CTRL1_fields_::OUTMODE,
      typename CTRL1_fields_::COINIT,
      typename CTRL1_fields_::DIR,
      typename CTRL1_fields_::LENGTH,
      typename CTRL1_fields_::ONCE,
      typename CTRL1_fields_::SCS,
      typename CTRL1_fields_::PCS,
      typename CTRL1_fields_::CM> {
    using eOUTMODE = typename CTRL1_fields_::eOUTMODE;
    using eCOINIT = typename CTRL1_fields_::eCOINIT;
    using eDIR = typename CTRL1_fields_::eDIR;
    using eLENGTH = typename CTRL1_fields_::eLENGTH;
    using eONCE = typename CTRL1_fields_::eONCE;
    using eSCS = typename CTRL1_fields_::eSCS;
    using ePCS = typename CTRL1_fields_::ePCS;
    using eCM = typename CTRL1_fields_::eCM;
    using OUTMODE = typename CTRL1_fields_::OUTMODE;
    using COINIT = typename CTRL1_fields_::COINIT;
    using DIR = typename CTRL1_fields_::DIR;
    using LENGTH = typename CTRL1_fields_::LENGTH;
    using ONCE = typename CTRL1_fields_::ONCE;
    using SCS = typename CTRL1_fields_::SCS;
    using PCS = typename CTRL1_fields_::PCS;
    using CM = typename CTRL1_fields_::CM;
  };

  // Timer Channel Status and Control Register
  struct SCTRL1_fields_ {
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
  };  // struct SCTRL1_fields_

  struct SCTRL1 : ftl::mmio::Register<
      kBase + 0x2Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SCTRL1_fields_::OEN,
      typename SCTRL1_fields_::OPS,
      typename SCTRL1_fields_::FORCE,
      typename SCTRL1_fields_::VAL,
      typename SCTRL1_fields_::EEOF,
      typename SCTRL1_fields_::MSTR,
      typename SCTRL1_fields_::CAPTURE_MODE,
      typename SCTRL1_fields_::INPUT,
      typename SCTRL1_fields_::IPS,
      typename SCTRL1_fields_::IEFIE,
      typename SCTRL1_fields_::IEF,
      typename SCTRL1_fields_::TOFIE,
      typename SCTRL1_fields_::TOF,
      typename SCTRL1_fields_::TCFIE,
      typename SCTRL1_fields_::TCF> {
    using eOEN = typename SCTRL1_fields_::eOEN;
    using eOPS = typename SCTRL1_fields_::eOPS;
    using eCAPTURE_MODE = typename SCTRL1_fields_::eCAPTURE_MODE;
    using OEN = typename SCTRL1_fields_::OEN;
    using OPS = typename SCTRL1_fields_::OPS;
    using FORCE = typename SCTRL1_fields_::FORCE;
    using VAL = typename SCTRL1_fields_::VAL;
    using EEOF = typename SCTRL1_fields_::EEOF;
    using MSTR = typename SCTRL1_fields_::MSTR;
    using CAPTURE_MODE = typename SCTRL1_fields_::CAPTURE_MODE;
    using INPUT = typename SCTRL1_fields_::INPUT;
    using IPS = typename SCTRL1_fields_::IPS;
    using IEFIE = typename SCTRL1_fields_::IEFIE;
    using IEF = typename SCTRL1_fields_::IEF;
    using TOFIE = typename SCTRL1_fields_::TOFIE;
    using TOF = typename SCTRL1_fields_::TOF;
    using TCFIE = typename SCTRL1_fields_::TCFIE;
    using TCF = typename SCTRL1_fields_::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct CMPLD11_fields_ {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD11_fields_

  struct CMPLD11 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD11_fields_::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename CMPLD11_fields_::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct CMPLD21_fields_ {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD21_fields_

  struct CMPLD21 : ftl::mmio::Register<
      kBase + 0x32u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD21_fields_::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename CMPLD21_fields_::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct CSCTRL1_fields_ {
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
  };  // struct CSCTRL1_fields_

  struct CSCTRL1 : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CSCTRL1_fields_::CL1,
      typename CSCTRL1_fields_::CL2,
      typename CSCTRL1_fields_::TCF1,
      typename CSCTRL1_fields_::TCF2,
      typename CSCTRL1_fields_::TCF1EN,
      typename CSCTRL1_fields_::TCF2EN,
      typename CSCTRL1_fields_::OFLAG,
      typename CSCTRL1_fields_::UP,
      typename CSCTRL1_fields_::TCI,
      typename CSCTRL1_fields_::ROC,
      typename CSCTRL1_fields_::ALT_LOAD,
      typename CSCTRL1_fields_::FAULT,
      typename CSCTRL1_fields_::DBG_EN> {
    using eCL1 = typename CSCTRL1_fields_::eCL1;
    using eCL2 = typename CSCTRL1_fields_::eCL2;
    using eUP = typename CSCTRL1_fields_::eUP;
    using eTCI = typename CSCTRL1_fields_::eTCI;
    using eROC = typename CSCTRL1_fields_::eROC;
    using eALT_LOAD = typename CSCTRL1_fields_::eALT_LOAD;
    using eFAULT = typename CSCTRL1_fields_::eFAULT;
    using eDBG_EN = typename CSCTRL1_fields_::eDBG_EN;
    using CL1 = typename CSCTRL1_fields_::CL1;
    using CL2 = typename CSCTRL1_fields_::CL2;
    using TCF1 = typename CSCTRL1_fields_::TCF1;
    using TCF2 = typename CSCTRL1_fields_::TCF2;
    using TCF1EN = typename CSCTRL1_fields_::TCF1EN;
    using TCF2EN = typename CSCTRL1_fields_::TCF2EN;
    using OFLAG = typename CSCTRL1_fields_::OFLAG;
    using UP = typename CSCTRL1_fields_::UP;
    using TCI = typename CSCTRL1_fields_::TCI;
    using ROC = typename CSCTRL1_fields_::ROC;
    using ALT_LOAD = typename CSCTRL1_fields_::ALT_LOAD;
    using FAULT = typename CSCTRL1_fields_::FAULT;
    using DBG_EN = typename CSCTRL1_fields_::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct FILT1_fields_ {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FILT1_fields_

  struct FILT1 : ftl::mmio::Register<
      kBase + 0x36u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FILT1_fields_::FILT_PER,
      typename FILT1_fields_::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename FILT1_fields_::FILT_PER;
    using FILT_CNT = typename FILT1_fields_::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct DMA1_fields_ {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMA1_fields_

  struct DMA1 : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DMA1_fields_::IEFDE,
      typename DMA1_fields_::CMPLD1DE,
      typename DMA1_fields_::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename DMA1_fields_::IEFDE;
    using CMPLD1DE = typename DMA1_fields_::CMPLD1DE;
    using CMPLD2DE = typename DMA1_fields_::CMPLD2DE;
  };

  // Timer Channel Compare Register 1
  struct COMP12_fields_ {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP12_fields_

  struct COMP12 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP12_fields_::COMPARISON_1> {
    using COMPARISON_1 = typename COMP12_fields_::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct COMP22_fields_ {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP22_fields_

  struct COMP22 : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP22_fields_::COMPARISON_2> {
    using COMPARISON_2 = typename COMP22_fields_::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct CAPT2_fields_ {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAPT2_fields_

  struct CAPT2 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CAPT2_fields_::CAPTURE> {
    using CAPTURE = typename CAPT2_fields_::CAPTURE;
  };

  // Timer Channel Load Register
  struct LOAD2_fields_ {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LOAD2_fields_

  struct LOAD2 : ftl::mmio::Register<
      kBase + 0x46u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LOAD2_fields_::LOAD> {
    using LOAD = typename LOAD2_fields_::LOAD;
  };

  // Timer Channel Hold Register
  struct HOLD2_fields_ {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HOLD2_fields_

  struct HOLD2 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename HOLD2_fields_::HOLD> {
    using HOLD = typename HOLD2_fields_::HOLD;
  };

  // Timer Channel Counter Register
  struct CNTR2_fields_ {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CNTR2_fields_

  struct CNTR2 : ftl::mmio::Register<
      kBase + 0x4Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CNTR2_fields_::COUNTER> {
    using COUNTER = typename CNTR2_fields_::COUNTER;
  };

  // Timer Channel Control Register
  struct CTRL2_fields_ {
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
  };  // struct CTRL2_fields_

  struct CTRL2 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CTRL2_fields_::OUTMODE,
      typename CTRL2_fields_::COINIT,
      typename CTRL2_fields_::DIR,
      typename CTRL2_fields_::LENGTH,
      typename CTRL2_fields_::ONCE,
      typename CTRL2_fields_::SCS,
      typename CTRL2_fields_::PCS,
      typename CTRL2_fields_::CM> {
    using eOUTMODE = typename CTRL2_fields_::eOUTMODE;
    using eCOINIT = typename CTRL2_fields_::eCOINIT;
    using eDIR = typename CTRL2_fields_::eDIR;
    using eLENGTH = typename CTRL2_fields_::eLENGTH;
    using eONCE = typename CTRL2_fields_::eONCE;
    using eSCS = typename CTRL2_fields_::eSCS;
    using ePCS = typename CTRL2_fields_::ePCS;
    using eCM = typename CTRL2_fields_::eCM;
    using OUTMODE = typename CTRL2_fields_::OUTMODE;
    using COINIT = typename CTRL2_fields_::COINIT;
    using DIR = typename CTRL2_fields_::DIR;
    using LENGTH = typename CTRL2_fields_::LENGTH;
    using ONCE = typename CTRL2_fields_::ONCE;
    using SCS = typename CTRL2_fields_::SCS;
    using PCS = typename CTRL2_fields_::PCS;
    using CM = typename CTRL2_fields_::CM;
  };

  // Timer Channel Status and Control Register
  struct SCTRL2_fields_ {
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
  };  // struct SCTRL2_fields_

  struct SCTRL2 : ftl::mmio::Register<
      kBase + 0x4Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SCTRL2_fields_::OEN,
      typename SCTRL2_fields_::OPS,
      typename SCTRL2_fields_::FORCE,
      typename SCTRL2_fields_::VAL,
      typename SCTRL2_fields_::EEOF,
      typename SCTRL2_fields_::MSTR,
      typename SCTRL2_fields_::CAPTURE_MODE,
      typename SCTRL2_fields_::INPUT,
      typename SCTRL2_fields_::IPS,
      typename SCTRL2_fields_::IEFIE,
      typename SCTRL2_fields_::IEF,
      typename SCTRL2_fields_::TOFIE,
      typename SCTRL2_fields_::TOF,
      typename SCTRL2_fields_::TCFIE,
      typename SCTRL2_fields_::TCF> {
    using eOEN = typename SCTRL2_fields_::eOEN;
    using eOPS = typename SCTRL2_fields_::eOPS;
    using eCAPTURE_MODE = typename SCTRL2_fields_::eCAPTURE_MODE;
    using OEN = typename SCTRL2_fields_::OEN;
    using OPS = typename SCTRL2_fields_::OPS;
    using FORCE = typename SCTRL2_fields_::FORCE;
    using VAL = typename SCTRL2_fields_::VAL;
    using EEOF = typename SCTRL2_fields_::EEOF;
    using MSTR = typename SCTRL2_fields_::MSTR;
    using CAPTURE_MODE = typename SCTRL2_fields_::CAPTURE_MODE;
    using INPUT = typename SCTRL2_fields_::INPUT;
    using IPS = typename SCTRL2_fields_::IPS;
    using IEFIE = typename SCTRL2_fields_::IEFIE;
    using IEF = typename SCTRL2_fields_::IEF;
    using TOFIE = typename SCTRL2_fields_::TOFIE;
    using TOF = typename SCTRL2_fields_::TOF;
    using TCFIE = typename SCTRL2_fields_::TCFIE;
    using TCF = typename SCTRL2_fields_::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct CMPLD12_fields_ {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD12_fields_

  struct CMPLD12 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD12_fields_::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename CMPLD12_fields_::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct CMPLD22_fields_ {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD22_fields_

  struct CMPLD22 : ftl::mmio::Register<
      kBase + 0x52u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD22_fields_::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename CMPLD22_fields_::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct CSCTRL2_fields_ {
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
  };  // struct CSCTRL2_fields_

  struct CSCTRL2 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CSCTRL2_fields_::CL1,
      typename CSCTRL2_fields_::CL2,
      typename CSCTRL2_fields_::TCF1,
      typename CSCTRL2_fields_::TCF2,
      typename CSCTRL2_fields_::TCF1EN,
      typename CSCTRL2_fields_::TCF2EN,
      typename CSCTRL2_fields_::OFLAG,
      typename CSCTRL2_fields_::UP,
      typename CSCTRL2_fields_::TCI,
      typename CSCTRL2_fields_::ROC,
      typename CSCTRL2_fields_::ALT_LOAD,
      typename CSCTRL2_fields_::FAULT,
      typename CSCTRL2_fields_::DBG_EN> {
    using eCL1 = typename CSCTRL2_fields_::eCL1;
    using eCL2 = typename CSCTRL2_fields_::eCL2;
    using eUP = typename CSCTRL2_fields_::eUP;
    using eTCI = typename CSCTRL2_fields_::eTCI;
    using eROC = typename CSCTRL2_fields_::eROC;
    using eALT_LOAD = typename CSCTRL2_fields_::eALT_LOAD;
    using eFAULT = typename CSCTRL2_fields_::eFAULT;
    using eDBG_EN = typename CSCTRL2_fields_::eDBG_EN;
    using CL1 = typename CSCTRL2_fields_::CL1;
    using CL2 = typename CSCTRL2_fields_::CL2;
    using TCF1 = typename CSCTRL2_fields_::TCF1;
    using TCF2 = typename CSCTRL2_fields_::TCF2;
    using TCF1EN = typename CSCTRL2_fields_::TCF1EN;
    using TCF2EN = typename CSCTRL2_fields_::TCF2EN;
    using OFLAG = typename CSCTRL2_fields_::OFLAG;
    using UP = typename CSCTRL2_fields_::UP;
    using TCI = typename CSCTRL2_fields_::TCI;
    using ROC = typename CSCTRL2_fields_::ROC;
    using ALT_LOAD = typename CSCTRL2_fields_::ALT_LOAD;
    using FAULT = typename CSCTRL2_fields_::FAULT;
    using DBG_EN = typename CSCTRL2_fields_::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct FILT2_fields_ {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FILT2_fields_

  struct FILT2 : ftl::mmio::Register<
      kBase + 0x56u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FILT2_fields_::FILT_PER,
      typename FILT2_fields_::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename FILT2_fields_::FILT_PER;
    using FILT_CNT = typename FILT2_fields_::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct DMA2_fields_ {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMA2_fields_

  struct DMA2 : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DMA2_fields_::IEFDE,
      typename DMA2_fields_::CMPLD1DE,
      typename DMA2_fields_::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename DMA2_fields_::IEFDE;
    using CMPLD1DE = typename DMA2_fields_::CMPLD1DE;
    using CMPLD2DE = typename DMA2_fields_::CMPLD2DE;
  };

  // Timer Channel Compare Register 1
  struct COMP13_fields_ {
    // Comparison Value 1
    using COMPARISON_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP13_fields_

  struct COMP13 : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP13_fields_::COMPARISON_1> {
    using COMPARISON_1 = typename COMP13_fields_::COMPARISON_1;
  };

  // Timer Channel Compare Register 2
  struct COMP23_fields_ {
    // Comparison Value 2
    using COMPARISON_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct COMP23_fields_

  struct COMP23 : ftl::mmio::Register<
      kBase + 0x62u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename COMP23_fields_::COMPARISON_2> {
    using COMPARISON_2 = typename COMP23_fields_::COMPARISON_2;
  };

  // Timer Channel Capture Register
  struct CAPT3_fields_ {
    // Capture Value
    using CAPTURE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CAPT3_fields_

  struct CAPT3 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CAPT3_fields_::CAPTURE> {
    using CAPTURE = typename CAPT3_fields_::CAPTURE;
  };

  // Timer Channel Load Register
  struct LOAD3_fields_ {
    // Timer Load Register
    using LOAD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LOAD3_fields_

  struct LOAD3 : ftl::mmio::Register<
      kBase + 0x66u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LOAD3_fields_::LOAD> {
    using LOAD = typename LOAD3_fields_::LOAD;
  };

  // Timer Channel Hold Register
  struct HOLD3_fields_ {
    // HOLD
    using HOLD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct HOLD3_fields_

  struct HOLD3 : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename HOLD3_fields_::HOLD> {
    using HOLD = typename HOLD3_fields_::HOLD;
  };

  // Timer Channel Counter Register
  struct CNTR3_fields_ {
    // COUNTER
    using COUNTER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CNTR3_fields_

  struct CNTR3 : ftl::mmio::Register<
      kBase + 0x6Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CNTR3_fields_::COUNTER> {
    using COUNTER = typename CNTR3_fields_::COUNTER;
  };

  // Timer Channel Control Register
  struct CTRL3_fields_ {
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
  };  // struct CTRL3_fields_

  struct CTRL3 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CTRL3_fields_::OUTMODE,
      typename CTRL3_fields_::COINIT,
      typename CTRL3_fields_::DIR,
      typename CTRL3_fields_::LENGTH,
      typename CTRL3_fields_::ONCE,
      typename CTRL3_fields_::SCS,
      typename CTRL3_fields_::PCS,
      typename CTRL3_fields_::CM> {
    using eOUTMODE = typename CTRL3_fields_::eOUTMODE;
    using eCOINIT = typename CTRL3_fields_::eCOINIT;
    using eDIR = typename CTRL3_fields_::eDIR;
    using eLENGTH = typename CTRL3_fields_::eLENGTH;
    using eONCE = typename CTRL3_fields_::eONCE;
    using eSCS = typename CTRL3_fields_::eSCS;
    using ePCS = typename CTRL3_fields_::ePCS;
    using eCM = typename CTRL3_fields_::eCM;
    using OUTMODE = typename CTRL3_fields_::OUTMODE;
    using COINIT = typename CTRL3_fields_::COINIT;
    using DIR = typename CTRL3_fields_::DIR;
    using LENGTH = typename CTRL3_fields_::LENGTH;
    using ONCE = typename CTRL3_fields_::ONCE;
    using SCS = typename CTRL3_fields_::SCS;
    using PCS = typename CTRL3_fields_::PCS;
    using CM = typename CTRL3_fields_::CM;
  };

  // Timer Channel Status and Control Register
  struct SCTRL3_fields_ {
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
  };  // struct SCTRL3_fields_

  struct SCTRL3 : ftl::mmio::Register<
      kBase + 0x6Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SCTRL3_fields_::OEN,
      typename SCTRL3_fields_::OPS,
      typename SCTRL3_fields_::FORCE,
      typename SCTRL3_fields_::VAL,
      typename SCTRL3_fields_::EEOF,
      typename SCTRL3_fields_::MSTR,
      typename SCTRL3_fields_::CAPTURE_MODE,
      typename SCTRL3_fields_::INPUT,
      typename SCTRL3_fields_::IPS,
      typename SCTRL3_fields_::IEFIE,
      typename SCTRL3_fields_::IEF,
      typename SCTRL3_fields_::TOFIE,
      typename SCTRL3_fields_::TOF,
      typename SCTRL3_fields_::TCFIE,
      typename SCTRL3_fields_::TCF> {
    using eOEN = typename SCTRL3_fields_::eOEN;
    using eOPS = typename SCTRL3_fields_::eOPS;
    using eCAPTURE_MODE = typename SCTRL3_fields_::eCAPTURE_MODE;
    using OEN = typename SCTRL3_fields_::OEN;
    using OPS = typename SCTRL3_fields_::OPS;
    using FORCE = typename SCTRL3_fields_::FORCE;
    using VAL = typename SCTRL3_fields_::VAL;
    using EEOF = typename SCTRL3_fields_::EEOF;
    using MSTR = typename SCTRL3_fields_::MSTR;
    using CAPTURE_MODE = typename SCTRL3_fields_::CAPTURE_MODE;
    using INPUT = typename SCTRL3_fields_::INPUT;
    using IPS = typename SCTRL3_fields_::IPS;
    using IEFIE = typename SCTRL3_fields_::IEFIE;
    using IEF = typename SCTRL3_fields_::IEF;
    using TOFIE = typename SCTRL3_fields_::TOFIE;
    using TOF = typename SCTRL3_fields_::TOF;
    using TCFIE = typename SCTRL3_fields_::TCFIE;
    using TCF = typename SCTRL3_fields_::TCF;
  };

  // Timer Channel Comparator Load Register 1
  struct CMPLD13_fields_ {
    // COMPARATOR_LOAD_1
    using COMPARATOR_LOAD_1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD13_fields_

  struct CMPLD13 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD13_fields_::COMPARATOR_LOAD_1> {
    using COMPARATOR_LOAD_1 = typename CMPLD13_fields_::COMPARATOR_LOAD_1;
  };

  // Timer Channel Comparator Load Register 2
  struct CMPLD23_fields_ {
    // COMPARATOR_LOAD_2
    using COMPARATOR_LOAD_2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMPLD23_fields_

  struct CMPLD23 : ftl::mmio::Register<
      kBase + 0x72u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CMPLD23_fields_::COMPARATOR_LOAD_2> {
    using COMPARATOR_LOAD_2 = typename CMPLD23_fields_::COMPARATOR_LOAD_2;
  };

  // Timer Channel Comparator Status and Control Register
  struct CSCTRL3_fields_ {
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
  };  // struct CSCTRL3_fields_

  struct CSCTRL3 : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CSCTRL3_fields_::CL1,
      typename CSCTRL3_fields_::CL2,
      typename CSCTRL3_fields_::TCF1,
      typename CSCTRL3_fields_::TCF2,
      typename CSCTRL3_fields_::TCF1EN,
      typename CSCTRL3_fields_::TCF2EN,
      typename CSCTRL3_fields_::OFLAG,
      typename CSCTRL3_fields_::UP,
      typename CSCTRL3_fields_::TCI,
      typename CSCTRL3_fields_::ROC,
      typename CSCTRL3_fields_::ALT_LOAD,
      typename CSCTRL3_fields_::FAULT,
      typename CSCTRL3_fields_::DBG_EN> {
    using eCL1 = typename CSCTRL3_fields_::eCL1;
    using eCL2 = typename CSCTRL3_fields_::eCL2;
    using eUP = typename CSCTRL3_fields_::eUP;
    using eTCI = typename CSCTRL3_fields_::eTCI;
    using eROC = typename CSCTRL3_fields_::eROC;
    using eALT_LOAD = typename CSCTRL3_fields_::eALT_LOAD;
    using eFAULT = typename CSCTRL3_fields_::eFAULT;
    using eDBG_EN = typename CSCTRL3_fields_::eDBG_EN;
    using CL1 = typename CSCTRL3_fields_::CL1;
    using CL2 = typename CSCTRL3_fields_::CL2;
    using TCF1 = typename CSCTRL3_fields_::TCF1;
    using TCF2 = typename CSCTRL3_fields_::TCF2;
    using TCF1EN = typename CSCTRL3_fields_::TCF1EN;
    using TCF2EN = typename CSCTRL3_fields_::TCF2EN;
    using OFLAG = typename CSCTRL3_fields_::OFLAG;
    using UP = typename CSCTRL3_fields_::UP;
    using TCI = typename CSCTRL3_fields_::TCI;
    using ROC = typename CSCTRL3_fields_::ROC;
    using ALT_LOAD = typename CSCTRL3_fields_::ALT_LOAD;
    using FAULT = typename CSCTRL3_fields_::FAULT;
    using DBG_EN = typename CSCTRL3_fields_::DBG_EN;
  };

  // Timer Channel Input Filter Register
  struct FILT3_fields_ {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FILT3_fields_

  struct FILT3 : ftl::mmio::Register<
      kBase + 0x76u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FILT3_fields_::FILT_PER,
      typename FILT3_fields_::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename FILT3_fields_::FILT_PER;
    using FILT_CNT = typename FILT3_fields_::FILT_CNT;
  };

  // Timer Channel DMA Enable Register
  struct DMA3_fields_ {
    // Input Edge Flag DMA Enable
    using IEFDE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 1 DMA Enable
    using CMPLD1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Comparator Preload Register 2 DMA Enable
    using CMPLD2DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DMA3_fields_

  struct DMA3 : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DMA3_fields_::IEFDE,
      typename DMA3_fields_::CMPLD1DE,
      typename DMA3_fields_::CMPLD2DE,
      ftl::mmio::Reserved<13, 3>> {
    using IEFDE = typename DMA3_fields_::IEFDE;
    using CMPLD1DE = typename DMA3_fields_::CMPLD1DE;
    using CMPLD2DE = typename DMA3_fields_::CMPLD2DE;
  };

};

}  // namespace regs