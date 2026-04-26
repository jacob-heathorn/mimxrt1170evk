#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// PWM
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Pwm {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u,
        "Pwm: Instance must be one of 1, 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x4018C000u :
      Instance == 2u ? 0x40190000u :
      Instance == 3u ? 0x40194000u :
      Instance == 4u ? 0x40198000u :
      0u;

  // Counter Register
  struct SM0CNT_fields_ {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CNT_fields_

  struct SM0CNT : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CNT_fields_::CNT> {
    using CNT = typename SM0CNT_fields_::CNT;
  };

  // Initial Count Register
  struct SM0INIT_fields_ {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0INIT_fields_

  struct SM0INIT : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0INIT_fields_::INIT> {
    using INIT = typename SM0INIT_fields_::INIT;
  };

  // Control 2 Register
  struct SM0CTRL2_fields_ {
    enum class eCLK_SEL : std::uint32_t {
      // The IPBus clock is used as the clock for the local prescaler and counter.
      eIPBUS = 0,
      // EXT_CLK is used as the clock for the local prescaler and counter.
      eEXT_CLK = 1,
      // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
      eAUX_CLK = 2,
    };

    enum class eRELOAD_SEL : std::uint32_t {
      // The local RELOAD signal is used to reload registers.
      eLOCAL = 0,
      // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
      eMASTER = 1,
    };

    enum class eFORCE_SEL : std::uint32_t {
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

    enum class eFRCEN : std::uint32_t {
      // Initialization from a FORCE_OUT is disabled.
      eDISABLED = 0,
      // Initialization from a FORCE_OUT is enabled.
      eENABLED = 1,
    };

    enum class eINIT_SEL : std::uint32_t {
      // Local sync (PWM_X) causes initialization.
      ePWM_X = 0,
      // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
      eMASTER_RELOAD = 1,
      // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
      eMASTER_SYNC = 2,
      // EXT_SYNC causes initialization.
      eEXT_SYNC = 3,
    };

    enum class eINDEP : std::uint32_t {
      // PWM_A and PWM_B form a complementary PWM pair.
      eCOMPLEMENTARY = 0,
      // PWM_A and PWM_B outputs are independent PWMs.
      eINDEPENDENT = 1,
    };

    // Clock Source Select
    using CLK_SEL = ftl::mmio::Field<2, 0, eCLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Source Select
    using RELOAD_SEL = ftl::mmio::Field<1, 2, eRELOAD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Select
    using FORCE_SEL = ftl::mmio::Field<3, 3, eFORCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Initialization
    using FORCE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Enable
    using FRCEN = ftl::mmio::Field<1, 7, eFRCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initialization Control Select
    using INIT_SEL = ftl::mmio::Field<2, 8, eINIT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Initial Value
    using PWMX_INIT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM45 Initial Value
    using PWM45_INIT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM23 Initial Value
    using PWM23_INIT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Independent or Complementary Pair Operation
    using INDEP = ftl::mmio::Field<1, 13, eINDEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0CTRL2_fields_

  struct SM0CTRL2 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CTRL2_fields_::CLK_SEL,
      typename SM0CTRL2_fields_::RELOAD_SEL,
      typename SM0CTRL2_fields_::FORCE_SEL,
      typename SM0CTRL2_fields_::FORCE,
      typename SM0CTRL2_fields_::FRCEN,
      typename SM0CTRL2_fields_::INIT_SEL,
      typename SM0CTRL2_fields_::PWMX_INIT,
      typename SM0CTRL2_fields_::PWM45_INIT,
      typename SM0CTRL2_fields_::PWM23_INIT,
      typename SM0CTRL2_fields_::INDEP,
      typename SM0CTRL2_fields_::WAITEN,
      typename SM0CTRL2_fields_::DBGEN> {
    using eCLK_SEL = typename SM0CTRL2_fields_::eCLK_SEL;
    using eRELOAD_SEL = typename SM0CTRL2_fields_::eRELOAD_SEL;
    using eFORCE_SEL = typename SM0CTRL2_fields_::eFORCE_SEL;
    using eFRCEN = typename SM0CTRL2_fields_::eFRCEN;
    using eINIT_SEL = typename SM0CTRL2_fields_::eINIT_SEL;
    using eINDEP = typename SM0CTRL2_fields_::eINDEP;
    using CLK_SEL = typename SM0CTRL2_fields_::CLK_SEL;
    using RELOAD_SEL = typename SM0CTRL2_fields_::RELOAD_SEL;
    using FORCE_SEL = typename SM0CTRL2_fields_::FORCE_SEL;
    using FORCE = typename SM0CTRL2_fields_::FORCE;
    using FRCEN = typename SM0CTRL2_fields_::FRCEN;
    using INIT_SEL = typename SM0CTRL2_fields_::INIT_SEL;
    using PWMX_INIT = typename SM0CTRL2_fields_::PWMX_INIT;
    using PWM45_INIT = typename SM0CTRL2_fields_::PWM45_INIT;
    using PWM23_INIT = typename SM0CTRL2_fields_::PWM23_INIT;
    using INDEP = typename SM0CTRL2_fields_::INDEP;
    using WAITEN = typename SM0CTRL2_fields_::WAITEN;
    using DBGEN = typename SM0CTRL2_fields_::DBGEN;
  };

  // Control Register
  struct SM0CTRL_fields_ {
    enum class eDBLEN : std::uint32_t {
      // Double switching disabled.
      eDISABLED = 0,
      // Double switching enabled.
      eENABLED = 1,
    };

    enum class eDBLX : std::uint32_t {
      // PWM_X double pulse disabled.
      eDISABLED = 0,
      // PWM_X double pulse enabled.
      eENABLED = 1,
    };

    enum class eLDMOD : std::uint32_t {
      // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
      eNEXT_PWM_RELOAD = 0,
      // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
      eMTCTRL_LDOK_SET = 1,
    };

    enum class eSPLIT : std::uint32_t {
      // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
      eDISABLED = 0,
      // DBLPWM is split to PWM_A and PWM_B.
      eENABLED = 1,
    };

    enum class ePRSC : std::uint32_t {
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

    enum class eCOMPMODE : std::uint32_t {
      // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
      eEQUAL_TO = 0,
      // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
      eEQUAL_TO_OR_GREATER_THAN = 1,
    };

    enum class eFULL : std::uint32_t {
      // Full-cycle reloads disabled.
      eDISABLED = 0,
      // Full-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eHALF : std::uint32_t {
      // Half-cycle reloads disabled.
      eDISABLED = 0,
      // Half-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eLDFQ : std::uint32_t {
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

    // Double Switching Enable
    using DBLEN = ftl::mmio::Field<1, 0, eDBLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Double Switching Enable
    using DBLX = ftl::mmio::Field<1, 1, eDBLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Mode Select
    using LDMOD = ftl::mmio::Field<1, 2, eLDMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Split the DBLPWM signal to PWM_A and PWM_B
    using SPLIT = ftl::mmio::Field<1, 3, eSPLIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler
    using PRSC = ftl::mmio::Field<3, 4, ePRSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Mode
    using COMPMODE = ftl::mmio::Field<1, 7, eCOMPMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deadtime
    using DT = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Full Cycle Reload
    using FULL = ftl::mmio::Field<1, 10, eFULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Half Cycle Reload
    using HALF = ftl::mmio::Field<1, 11, eHALF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Frequency
    using LDFQ = ftl::mmio::Field<4, 12, eLDFQ, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0CTRL_fields_

  struct SM0CTRL : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename SM0CTRL_fields_::DBLEN,
      typename SM0CTRL_fields_::DBLX,
      typename SM0CTRL_fields_::LDMOD,
      typename SM0CTRL_fields_::SPLIT,
      typename SM0CTRL_fields_::PRSC,
      typename SM0CTRL_fields_::COMPMODE,
      typename SM0CTRL_fields_::DT,
      typename SM0CTRL_fields_::FULL,
      typename SM0CTRL_fields_::HALF,
      typename SM0CTRL_fields_::LDFQ> {
    using eDBLEN = typename SM0CTRL_fields_::eDBLEN;
    using eDBLX = typename SM0CTRL_fields_::eDBLX;
    using eLDMOD = typename SM0CTRL_fields_::eLDMOD;
    using eSPLIT = typename SM0CTRL_fields_::eSPLIT;
    using ePRSC = typename SM0CTRL_fields_::ePRSC;
    using eCOMPMODE = typename SM0CTRL_fields_::eCOMPMODE;
    using eFULL = typename SM0CTRL_fields_::eFULL;
    using eHALF = typename SM0CTRL_fields_::eHALF;
    using eLDFQ = typename SM0CTRL_fields_::eLDFQ;
    using DBLEN = typename SM0CTRL_fields_::DBLEN;
    using DBLX = typename SM0CTRL_fields_::DBLX;
    using LDMOD = typename SM0CTRL_fields_::LDMOD;
    using SPLIT = typename SM0CTRL_fields_::SPLIT;
    using PRSC = typename SM0CTRL_fields_::PRSC;
    using COMPMODE = typename SM0CTRL_fields_::COMPMODE;
    using DT = typename SM0CTRL_fields_::DT;
    using FULL = typename SM0CTRL_fields_::FULL;
    using HALF = typename SM0CTRL_fields_::HALF;
    using LDFQ = typename SM0CTRL_fields_::LDFQ;
  };

  // Value Register 0
  struct SM0VAL0_fields_ {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL0_fields_

  struct SM0VAL0 : ftl::mmio::Register<
      kBase + 0xAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL0_fields_::VAL0> {
    using VAL0 = typename SM0VAL0_fields_::VAL0;
  };

  // Fractional Value Register 1
  struct SM0FRACVAL1_fields_ {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0FRACVAL1_fields_

  struct SM0FRACVAL1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM0FRACVAL1_fields_::FRACVAL1> {
    using FRACVAL1 = typename SM0FRACVAL1_fields_::FRACVAL1;
  };

  // Value Register 1
  struct SM0VAL1_fields_ {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL1_fields_

  struct SM0VAL1 : ftl::mmio::Register<
      kBase + 0xEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL1_fields_::VAL1> {
    using VAL1 = typename SM0VAL1_fields_::VAL1;
  };

  // Fractional Value Register 2
  struct SM0FRACVAL2_fields_ {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0FRACVAL2_fields_

  struct SM0FRACVAL2 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM0FRACVAL2_fields_::FRACVAL2> {
    using FRACVAL2 = typename SM0FRACVAL2_fields_::FRACVAL2;
  };

  // Value Register 2
  struct SM0VAL2_fields_ {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL2_fields_

  struct SM0VAL2 : ftl::mmio::Register<
      kBase + 0x12u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL2_fields_::VAL2> {
    using VAL2 = typename SM0VAL2_fields_::VAL2;
  };

  // Fractional Value Register 3
  struct SM0FRACVAL3_fields_ {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0FRACVAL3_fields_

  struct SM0FRACVAL3 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM0FRACVAL3_fields_::FRACVAL3> {
    using FRACVAL3 = typename SM0FRACVAL3_fields_::FRACVAL3;
  };

  // Value Register 3
  struct SM0VAL3_fields_ {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL3_fields_

  struct SM0VAL3 : ftl::mmio::Register<
      kBase + 0x16u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL3_fields_::VAL3> {
    using VAL3 = typename SM0VAL3_fields_::VAL3;
  };

  // Fractional Value Register 4
  struct SM0FRACVAL4_fields_ {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0FRACVAL4_fields_

  struct SM0FRACVAL4 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM0FRACVAL4_fields_::FRACVAL4> {
    using FRACVAL4 = typename SM0FRACVAL4_fields_::FRACVAL4;
  };

  // Value Register 4
  struct SM0VAL4_fields_ {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL4_fields_

  struct SM0VAL4 : ftl::mmio::Register<
      kBase + 0x1Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL4_fields_::VAL4> {
    using VAL4 = typename SM0VAL4_fields_::VAL4;
  };

  // Fractional Value Register 5
  struct SM0FRACVAL5_fields_ {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0FRACVAL5_fields_

  struct SM0FRACVAL5 : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM0FRACVAL5_fields_::FRACVAL5> {
    using FRACVAL5 = typename SM0FRACVAL5_fields_::FRACVAL5;
  };

  // Value Register 5
  struct SM0VAL5_fields_ {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0VAL5_fields_

  struct SM0VAL5 : ftl::mmio::Register<
      kBase + 0x1Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0VAL5_fields_::VAL5> {
    using VAL5 = typename SM0VAL5_fields_::VAL5;
  };

  // Fractional Control Register
  struct SM0FRCTRL_fields_ {
    enum class eFRAC1_EN : std::uint32_t {
      // Disable fractional cycle length for the PWM period.
      eDISABLED = 0,
      // Enable fractional cycle length for the PWM period.
      eENABLED = 1,
    };

    enum class eFRAC23_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_A.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_A.
      eENABLED = 1,
    };

    enum class eFRAC45_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_B.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_B.
      eENABLED = 1,
    };

    // Fractional Cycle PWM Period Enable
    using FRAC1_EN = ftl::mmio::Field<1, 1, eFRAC1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_A
    using FRAC23_EN = ftl::mmio::Field<1, 2, eFRAC23_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_B
    using FRAC45_EN = ftl::mmio::Field<1, 4, eFRAC45_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Status Bit
    using TEST = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0FRCTRL_fields_

  struct SM0FRCTRL : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename SM0FRCTRL_fields_::FRAC1_EN,
      typename SM0FRCTRL_fields_::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename SM0FRCTRL_fields_::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename SM0FRCTRL_fields_::TEST> {
    using eFRAC1_EN = typename SM0FRCTRL_fields_::eFRAC1_EN;
    using eFRAC23_EN = typename SM0FRCTRL_fields_::eFRAC23_EN;
    using eFRAC45_EN = typename SM0FRCTRL_fields_::eFRAC45_EN;
    using FRAC1_EN = typename SM0FRCTRL_fields_::FRAC1_EN;
    using FRAC23_EN = typename SM0FRCTRL_fields_::FRAC23_EN;
    using FRAC45_EN = typename SM0FRCTRL_fields_::FRAC45_EN;
    using TEST = typename SM0FRCTRL_fields_::TEST;
  };

  // Output Control Register
  struct SM0OCTRL_fields_ {
    enum class ePWMXFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMBFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMAFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePOLX : std::uint32_t {
      // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLB : std::uint32_t {
      // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLA : std::uint32_t {
      // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    // PWM_X Fault State
    using PWMXFS = ftl::mmio::Field<2, 0, ePWMXFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault State
    using PWMBFS = ftl::mmio::Field<2, 2, ePWMBFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Fault State
    using PWMAFS = ftl::mmio::Field<2, 4, ePWMAFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Output Polarity
    using POLX = ftl::mmio::Field<1, 8, ePOLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Polarity
    using POLB = ftl::mmio::Field<1, 9, ePOLB, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Polarity
    using POLA = ftl::mmio::Field<1, 10, ePOLA, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Input
    using PWMX_IN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_B Input
    using PWMB_IN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_A Input
    using PWMA_IN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0OCTRL_fields_

  struct SM0OCTRL : ftl::mmio::Register<
      kBase + 0x22u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0OCTRL_fields_::PWMXFS,
      typename SM0OCTRL_fields_::PWMBFS,
      typename SM0OCTRL_fields_::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename SM0OCTRL_fields_::POLX,
      typename SM0OCTRL_fields_::POLB,
      typename SM0OCTRL_fields_::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename SM0OCTRL_fields_::PWMX_IN,
      typename SM0OCTRL_fields_::PWMB_IN,
      typename SM0OCTRL_fields_::PWMA_IN> {
    using ePWMXFS = typename SM0OCTRL_fields_::ePWMXFS;
    using ePWMBFS = typename SM0OCTRL_fields_::ePWMBFS;
    using ePWMAFS = typename SM0OCTRL_fields_::ePWMAFS;
    using ePOLX = typename SM0OCTRL_fields_::ePOLX;
    using ePOLB = typename SM0OCTRL_fields_::ePOLB;
    using ePOLA = typename SM0OCTRL_fields_::ePOLA;
    using PWMXFS = typename SM0OCTRL_fields_::PWMXFS;
    using PWMBFS = typename SM0OCTRL_fields_::PWMBFS;
    using PWMAFS = typename SM0OCTRL_fields_::PWMAFS;
    using POLX = typename SM0OCTRL_fields_::POLX;
    using POLB = typename SM0OCTRL_fields_::POLB;
    using POLA = typename SM0OCTRL_fields_::POLA;
    using PWMX_IN = typename SM0OCTRL_fields_::PWMX_IN;
    using PWMB_IN = typename SM0OCTRL_fields_::PWMB_IN;
    using PWMA_IN = typename SM0OCTRL_fields_::PWMA_IN;
  };

  // Status Register
  struct SM0STS_fields_ {
    enum class eCMPF : std::uint32_t {
      // No compare event has occurred for a particular VALx value.
      eNO_EVENT = 0,
      // A compare event has occurred for a particular VALx value.
      eEVENT = 1,
    };

    enum class eRF : std::uint32_t {
      // No new reload cycle since last STS[RF] clearing
      eNO_FLAG = 0,
      // New reload cycle since last STS[RF] clearing
      eFLAG = 1,
    };

    enum class eREF : std::uint32_t {
      // No reload error occurred.
      eNO_FLAG = 0,
      // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
      eFLAG = 1,
    };

    enum class eRUF : std::uint32_t {
      // No register update has occurred since last reload.
      eNO_FLAG = 0,
      // At least one of the double buffered registers has been updated since the last reload.
      eFLAG = 1,
    };

    // Compare Flags
    using CMPF = ftl::mmio::Field<6, 0, eCMPF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X0
    using CFX0 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X1
    using CFX1 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B0
    using CFB0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B1
    using CFB1 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A0
    using CFA0 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A1
    using CFA1 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Flag
    using RF = ftl::mmio::Field<1, 12, eRF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Error Flag
    using REF = ftl::mmio::Field<1, 13, eREF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Registers Updated Flag
    using RUF = ftl::mmio::Field<1, 14, eRUF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0STS_fields_

  struct SM0STS : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0STS_fields_::CMPF,
      typename SM0STS_fields_::CFX0,
      typename SM0STS_fields_::CFX1,
      typename SM0STS_fields_::CFB0,
      typename SM0STS_fields_::CFB1,
      typename SM0STS_fields_::CFA0,
      typename SM0STS_fields_::CFA1,
      typename SM0STS_fields_::RF,
      typename SM0STS_fields_::REF,
      typename SM0STS_fields_::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename SM0STS_fields_::eCMPF;
    using eRF = typename SM0STS_fields_::eRF;
    using eREF = typename SM0STS_fields_::eREF;
    using eRUF = typename SM0STS_fields_::eRUF;
    using CMPF = typename SM0STS_fields_::CMPF;
    using CFX0 = typename SM0STS_fields_::CFX0;
    using CFX1 = typename SM0STS_fields_::CFX1;
    using CFB0 = typename SM0STS_fields_::CFB0;
    using CFB1 = typename SM0STS_fields_::CFB1;
    using CFA0 = typename SM0STS_fields_::CFA0;
    using CFA1 = typename SM0STS_fields_::CFA1;
    using RF = typename SM0STS_fields_::RF;
    using REF = typename SM0STS_fields_::REF;
    using RUF = typename SM0STS_fields_::RUF;
  };

  // Interrupt Enable Register
  struct SM0INTEN_fields_ {
    enum class eCMPIE : std::uint32_t {
      // The corresponding STS[CMPF] bit will not cause an interrupt request.
      eDISABLED = 0,
      // The corresponding STS[CMPF] bit will cause an interrupt request.
      eENABLED = 1,
    };

    enum class eCX0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX0].
      eENABLED = 1,
    };

    enum class eCX1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX1].
      eENABLED = 1,
    };

    enum class eCB0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB0].
      eENABLED = 1,
    };

    enum class eCB1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB1].
      eENABLED = 1,
    };

    enum class eCA0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA0].
      eENABLED = 1,
    };

    enum class eCA1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA1]
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA1]
      eENABLED = 1,
    };

    enum class eRIE : std::uint32_t {
      // STS[RF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[RF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    enum class eREIE : std::uint32_t {
      // STS[REF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[REF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    // Compare Interrupt Enables
    using CMPIE = ftl::mmio::Field<6, 0, eCMPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 0 Interrupt Enable
    using CX0IE = ftl::mmio::Field<1, 6, eCX0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 1 Interrupt Enable
    using CX1IE = ftl::mmio::Field<1, 7, eCX1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 0 Interrupt Enable
    using CB0IE = ftl::mmio::Field<1, 8, eCB0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 1 Interrupt Enable
    using CB1IE = ftl::mmio::Field<1, 9, eCB1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 0 Interrupt Enable
    using CA0IE = ftl::mmio::Field<1, 10, eCA0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 1 Interrupt Enable
    using CA1IE = ftl::mmio::Field<1, 11, eCA1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Interrupt Enable
    using RIE = ftl::mmio::Field<1, 12, eRIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Error Interrupt Enable
    using REIE = ftl::mmio::Field<1, 13, eREIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0INTEN_fields_

  struct SM0INTEN : ftl::mmio::Register<
      kBase + 0x26u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0INTEN_fields_::CMPIE,
      typename SM0INTEN_fields_::CX0IE,
      typename SM0INTEN_fields_::CX1IE,
      typename SM0INTEN_fields_::CB0IE,
      typename SM0INTEN_fields_::CB1IE,
      typename SM0INTEN_fields_::CA0IE,
      typename SM0INTEN_fields_::CA1IE,
      typename SM0INTEN_fields_::RIE,
      typename SM0INTEN_fields_::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename SM0INTEN_fields_::eCMPIE;
    using eCX0IE = typename SM0INTEN_fields_::eCX0IE;
    using eCX1IE = typename SM0INTEN_fields_::eCX1IE;
    using eCB0IE = typename SM0INTEN_fields_::eCB0IE;
    using eCB1IE = typename SM0INTEN_fields_::eCB1IE;
    using eCA0IE = typename SM0INTEN_fields_::eCA0IE;
    using eCA1IE = typename SM0INTEN_fields_::eCA1IE;
    using eRIE = typename SM0INTEN_fields_::eRIE;
    using eREIE = typename SM0INTEN_fields_::eREIE;
    using CMPIE = typename SM0INTEN_fields_::CMPIE;
    using CX0IE = typename SM0INTEN_fields_::CX0IE;
    using CX1IE = typename SM0INTEN_fields_::CX1IE;
    using CB0IE = typename SM0INTEN_fields_::CB0IE;
    using CB1IE = typename SM0INTEN_fields_::CB1IE;
    using CA0IE = typename SM0INTEN_fields_::CA0IE;
    using CA1IE = typename SM0INTEN_fields_::CA1IE;
    using RIE = typename SM0INTEN_fields_::RIE;
    using REIE = typename SM0INTEN_fields_::REIE;
  };

  // DMA Enable Register
  struct SM0DMAEN_fields_ {
    enum class eCAPTDE : std::uint32_t {
      // Read DMA requests disabled.
      eDISABLED = 0,
      // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
      eEXCEEDFIFO = 1,
      // A local synchronization (VAL1 matches counter) sets the read DMA request.
      eLOCAL_SYNC = 2,
      // A local reload (STS[RF] being set) sets the read DMA request.
      eLOCAL_RELOAD = 3,
    };

    enum class eFAND : std::uint32_t {
      // Selected FIFO watermarks are OR'ed together.
      eOR = 0,
      // Selected FIFO watermarks are AND'ed together.
      eAND = 1,
    };

    enum class eVALDE : std::uint32_t {
      // DMA write requests disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Capture X0 FIFO DMA Enable
    using CX0DE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X1 FIFO DMA Enable
    using CX1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO DMA Enable
    using CB0DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B1 FIFO DMA Enable
    using CB1DE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO DMA Enable
    using CA0DE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A1 FIFO DMA Enable
    using CA1DE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture DMA Enable Source Select
    using CAPTDE = ftl::mmio::Field<2, 6, eCAPTDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Watermark AND Control
    using FAND = ftl::mmio::Field<1, 8, eFAND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Value Registers DMA Enable
    using VALDE = ftl::mmio::Field<1, 9, eVALDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0DMAEN_fields_

  struct SM0DMAEN : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0DMAEN_fields_::CX0DE,
      typename SM0DMAEN_fields_::CX1DE,
      typename SM0DMAEN_fields_::CB0DE,
      typename SM0DMAEN_fields_::CB1DE,
      typename SM0DMAEN_fields_::CA0DE,
      typename SM0DMAEN_fields_::CA1DE,
      typename SM0DMAEN_fields_::CAPTDE,
      typename SM0DMAEN_fields_::FAND,
      typename SM0DMAEN_fields_::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename SM0DMAEN_fields_::eCAPTDE;
    using eFAND = typename SM0DMAEN_fields_::eFAND;
    using eVALDE = typename SM0DMAEN_fields_::eVALDE;
    using CX0DE = typename SM0DMAEN_fields_::CX0DE;
    using CX1DE = typename SM0DMAEN_fields_::CX1DE;
    using CB0DE = typename SM0DMAEN_fields_::CB0DE;
    using CB1DE = typename SM0DMAEN_fields_::CB1DE;
    using CA0DE = typename SM0DMAEN_fields_::CA0DE;
    using CA1DE = typename SM0DMAEN_fields_::CA1DE;
    using CAPTDE = typename SM0DMAEN_fields_::CAPTDE;
    using FAND = typename SM0DMAEN_fields_::FAND;
    using VALDE = typename SM0DMAEN_fields_::VALDE;
  };

  // Output Trigger Control Register
  struct SM0TCTRL_fields_ {
    enum class eOUT_TRIG_EN : std::uint32_t {
      // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
      eVAL0 = 1,
    };

    enum class eTRGFRQ : std::uint32_t {
      // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eEVERYPWM = 0,
      // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eFINALPWM = 1,
    };

    enum class ePWBOT1 : std::uint32_t {
      // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      ePWM_OUT_TRIG1_SIGNAL = 0,
      // Route the PWM_B output to the PWM_OUT_TRIG1 port.
      ePWMB_OUTPUT = 1,
    };

    enum class ePWAOT0 : std::uint32_t {
      // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      ePWM_OUT_TRIG0_SIGNAL = 0,
      // Route the PWM_A output to the PWM_OUT_TRIG0 port.
      ePWMA_OUTPUT = 1,
    };

    // Output Trigger Enables
    using OUT_TRIG_EN = ftl::mmio::Field<6, 0, eOUT_TRIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Frequency
    using TRGFRQ = ftl::mmio::Field<1, 12, eTRGFRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 1 Source Select
    using PWBOT1 = ftl::mmio::Field<1, 14, ePWBOT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 0 Source Select
    using PWAOT0 = ftl::mmio::Field<1, 15, ePWAOT0, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0TCTRL_fields_

  struct SM0TCTRL : ftl::mmio::Register<
      kBase + 0x2Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0TCTRL_fields_::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename SM0TCTRL_fields_::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename SM0TCTRL_fields_::PWBOT1,
      typename SM0TCTRL_fields_::PWAOT0> {
    using eOUT_TRIG_EN = typename SM0TCTRL_fields_::eOUT_TRIG_EN;
    using eTRGFRQ = typename SM0TCTRL_fields_::eTRGFRQ;
    using ePWBOT1 = typename SM0TCTRL_fields_::ePWBOT1;
    using ePWAOT0 = typename SM0TCTRL_fields_::ePWAOT0;
    using OUT_TRIG_EN = typename SM0TCTRL_fields_::OUT_TRIG_EN;
    using TRGFRQ = typename SM0TCTRL_fields_::TRGFRQ;
    using PWBOT1 = typename SM0TCTRL_fields_::PWBOT1;
    using PWAOT0 = typename SM0TCTRL_fields_::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct SM0DISMAP0_fields_ {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0DISMAP0_fields_

  struct SM0DISMAP0 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename SM0DISMAP0_fields_::DIS0A,
      typename SM0DISMAP0_fields_::DIS0B,
      typename SM0DISMAP0_fields_::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename SM0DISMAP0_fields_::DIS0A;
    using DIS0B = typename SM0DISMAP0_fields_::DIS0B;
    using DIS0X = typename SM0DISMAP0_fields_::DIS0X;
  };

  // Deadtime Count Register 0
  struct SM0DTCNT0_fields_ {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0DTCNT0_fields_

  struct SM0DTCNT0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM0DTCNT0_fields_::DTCNT0> {
    using DTCNT0 = typename SM0DTCNT0_fields_::DTCNT0;
  };

  // Deadtime Count Register 1
  struct SM0DTCNT1_fields_ {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM0DTCNT1_fields_

  struct SM0DTCNT1 : ftl::mmio::Register<
      kBase + 0x32u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM0DTCNT1_fields_::DTCNT1> {
    using DTCNT1 = typename SM0DTCNT1_fields_::DTCNT1;
  };

  // Capture Control A Register
  struct SM0CAPTCTRLA_fields_ {
    enum class eARMA : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTA : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGA0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGA1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELA : std::uint32_t {
      // Raw PWM_A input signal selected as source.
      ePWM_A = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTA_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm A
    using ARMA = ftl::mmio::Field<1, 0, eARMA, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode A
    using ONESHOTA = ftl::mmio::Field<1, 1, eONESHOTA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 0
    using EDGA0 = ftl::mmio::Field<2, 2, eEDGA0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 1
    using EDGA1 = ftl::mmio::Field<2, 4, eEDGA1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select A
    using INP_SELA = ftl::mmio::Field<1, 6, eINP_SELA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A Enable
    using EDGCNTA_EN = ftl::mmio::Field<1, 7, eEDGCNTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A FIFOs Water Mark
    using CFAWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO Word Count
    using CA0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture A1 FIFO Word Count
    using CA1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCTRLA_fields_

  struct SM0CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCTRLA_fields_::ARMA,
      typename SM0CAPTCTRLA_fields_::ONESHOTA,
      typename SM0CAPTCTRLA_fields_::EDGA0,
      typename SM0CAPTCTRLA_fields_::EDGA1,
      typename SM0CAPTCTRLA_fields_::INP_SELA,
      typename SM0CAPTCTRLA_fields_::EDGCNTA_EN,
      typename SM0CAPTCTRLA_fields_::CFAWM,
      typename SM0CAPTCTRLA_fields_::CA0CNT,
      typename SM0CAPTCTRLA_fields_::CA1CNT> {
    using eARMA = typename SM0CAPTCTRLA_fields_::eARMA;
    using eONESHOTA = typename SM0CAPTCTRLA_fields_::eONESHOTA;
    using eEDGA0 = typename SM0CAPTCTRLA_fields_::eEDGA0;
    using eEDGA1 = typename SM0CAPTCTRLA_fields_::eEDGA1;
    using eINP_SELA = typename SM0CAPTCTRLA_fields_::eINP_SELA;
    using eEDGCNTA_EN = typename SM0CAPTCTRLA_fields_::eEDGCNTA_EN;
    using ARMA = typename SM0CAPTCTRLA_fields_::ARMA;
    using ONESHOTA = typename SM0CAPTCTRLA_fields_::ONESHOTA;
    using EDGA0 = typename SM0CAPTCTRLA_fields_::EDGA0;
    using EDGA1 = typename SM0CAPTCTRLA_fields_::EDGA1;
    using INP_SELA = typename SM0CAPTCTRLA_fields_::INP_SELA;
    using EDGCNTA_EN = typename SM0CAPTCTRLA_fields_::EDGCNTA_EN;
    using CFAWM = typename SM0CAPTCTRLA_fields_::CFAWM;
    using CA0CNT = typename SM0CAPTCTRLA_fields_::CA0CNT;
    using CA1CNT = typename SM0CAPTCTRLA_fields_::CA1CNT;
  };

  // Capture Compare A Register
  struct SM0CAPTCOMPA_fields_ {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCOMPA_fields_

  struct SM0CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x36u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCOMPA_fields_::EDGCMPA,
      typename SM0CAPTCOMPA_fields_::EDGCNTA> {
    using EDGCMPA = typename SM0CAPTCOMPA_fields_::EDGCMPA;
    using EDGCNTA = typename SM0CAPTCOMPA_fields_::EDGCNTA;
  };

  // Capture Control B Register
  struct SM0CAPTCTRLB_fields_ {
    enum class eARMB : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTB : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGB0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGB1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELB : std::uint32_t {
      // Raw PWM_B input signal selected as source.
      ePWM_B = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTB_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm B
    using ARMB = ftl::mmio::Field<1, 0, eARMB, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode B
    using ONESHOTB = ftl::mmio::Field<1, 1, eONESHOTB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 0
    using EDGB0 = ftl::mmio::Field<2, 2, eEDGB0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 1
    using EDGB1 = ftl::mmio::Field<2, 4, eEDGB1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select B
    using INP_SELB = ftl::mmio::Field<1, 6, eINP_SELB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B Enable
    using EDGCNTB_EN = ftl::mmio::Field<1, 7, eEDGCNTB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B FIFOs Water Mark
    using CFBWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO Word Count
    using CB0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture B1 FIFO Word Count
    using CB1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCTRLB_fields_

  struct SM0CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCTRLB_fields_::ARMB,
      typename SM0CAPTCTRLB_fields_::ONESHOTB,
      typename SM0CAPTCTRLB_fields_::EDGB0,
      typename SM0CAPTCTRLB_fields_::EDGB1,
      typename SM0CAPTCTRLB_fields_::INP_SELB,
      typename SM0CAPTCTRLB_fields_::EDGCNTB_EN,
      typename SM0CAPTCTRLB_fields_::CFBWM,
      typename SM0CAPTCTRLB_fields_::CB0CNT,
      typename SM0CAPTCTRLB_fields_::CB1CNT> {
    using eARMB = typename SM0CAPTCTRLB_fields_::eARMB;
    using eONESHOTB = typename SM0CAPTCTRLB_fields_::eONESHOTB;
    using eEDGB0 = typename SM0CAPTCTRLB_fields_::eEDGB0;
    using eEDGB1 = typename SM0CAPTCTRLB_fields_::eEDGB1;
    using eINP_SELB = typename SM0CAPTCTRLB_fields_::eINP_SELB;
    using eEDGCNTB_EN = typename SM0CAPTCTRLB_fields_::eEDGCNTB_EN;
    using ARMB = typename SM0CAPTCTRLB_fields_::ARMB;
    using ONESHOTB = typename SM0CAPTCTRLB_fields_::ONESHOTB;
    using EDGB0 = typename SM0CAPTCTRLB_fields_::EDGB0;
    using EDGB1 = typename SM0CAPTCTRLB_fields_::EDGB1;
    using INP_SELB = typename SM0CAPTCTRLB_fields_::INP_SELB;
    using EDGCNTB_EN = typename SM0CAPTCTRLB_fields_::EDGCNTB_EN;
    using CFBWM = typename SM0CAPTCTRLB_fields_::CFBWM;
    using CB0CNT = typename SM0CAPTCTRLB_fields_::CB0CNT;
    using CB1CNT = typename SM0CAPTCTRLB_fields_::CB1CNT;
  };

  // Capture Compare B Register
  struct SM0CAPTCOMPB_fields_ {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCOMPB_fields_

  struct SM0CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x3Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCOMPB_fields_::EDGCMPB,
      typename SM0CAPTCOMPB_fields_::EDGCNTB> {
    using EDGCMPB = typename SM0CAPTCOMPB_fields_::EDGCMPB;
    using EDGCNTB = typename SM0CAPTCOMPB_fields_::EDGCNTB;
  };

  // Capture Control X Register
  struct SM0CAPTCTRLX_fields_ {
    enum class eARMX : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTX : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGX0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGX1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELX : std::uint32_t {
      // Raw PWM_X input signal selected as source.
      ePWM_X = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTX_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm X
    using ARMX = ftl::mmio::Field<1, 0, eARMX, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode Aux
    using ONESHOTX = ftl::mmio::Field<1, 1, eONESHOTX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 0
    using EDGX0 = ftl::mmio::Field<2, 2, eEDGX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 1
    using EDGX1 = ftl::mmio::Field<2, 4, eEDGX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select X
    using INP_SELX = ftl::mmio::Field<1, 6, eINP_SELX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X Enable
    using EDGCNTX_EN = ftl::mmio::Field<1, 7, eEDGCNTX_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X FIFOs Water Mark
    using CFXWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X0 FIFO Word Count
    using CX0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture X1 FIFO Word Count
    using CX1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCTRLX_fields_

  struct SM0CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCTRLX_fields_::ARMX,
      typename SM0CAPTCTRLX_fields_::ONESHOTX,
      typename SM0CAPTCTRLX_fields_::EDGX0,
      typename SM0CAPTCTRLX_fields_::EDGX1,
      typename SM0CAPTCTRLX_fields_::INP_SELX,
      typename SM0CAPTCTRLX_fields_::EDGCNTX_EN,
      typename SM0CAPTCTRLX_fields_::CFXWM,
      typename SM0CAPTCTRLX_fields_::CX0CNT,
      typename SM0CAPTCTRLX_fields_::CX1CNT> {
    using eARMX = typename SM0CAPTCTRLX_fields_::eARMX;
    using eONESHOTX = typename SM0CAPTCTRLX_fields_::eONESHOTX;
    using eEDGX0 = typename SM0CAPTCTRLX_fields_::eEDGX0;
    using eEDGX1 = typename SM0CAPTCTRLX_fields_::eEDGX1;
    using eINP_SELX = typename SM0CAPTCTRLX_fields_::eINP_SELX;
    using eEDGCNTX_EN = typename SM0CAPTCTRLX_fields_::eEDGCNTX_EN;
    using ARMX = typename SM0CAPTCTRLX_fields_::ARMX;
    using ONESHOTX = typename SM0CAPTCTRLX_fields_::ONESHOTX;
    using EDGX0 = typename SM0CAPTCTRLX_fields_::EDGX0;
    using EDGX1 = typename SM0CAPTCTRLX_fields_::EDGX1;
    using INP_SELX = typename SM0CAPTCTRLX_fields_::INP_SELX;
    using EDGCNTX_EN = typename SM0CAPTCTRLX_fields_::EDGCNTX_EN;
    using CFXWM = typename SM0CAPTCTRLX_fields_::CFXWM;
    using CX0CNT = typename SM0CAPTCTRLX_fields_::CX0CNT;
    using CX1CNT = typename SM0CAPTCTRLX_fields_::CX1CNT;
  };

  // Capture Compare X Register
  struct SM0CAPTCOMPX_fields_ {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CAPTCOMPX_fields_

  struct SM0CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x3Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM0CAPTCOMPX_fields_::EDGCMPX,
      typename SM0CAPTCOMPX_fields_::EDGCNTX> {
    using EDGCMPX = typename SM0CAPTCOMPX_fields_::EDGCMPX;
    using EDGCNTX = typename SM0CAPTCOMPX_fields_::EDGCNTX;
  };

  // Capture Value 0 Register
  struct SM0CVAL0_fields_ {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL0_fields_

  struct SM0CVAL0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL0_fields_::CAPTVAL0> {
    using CAPTVAL0 = typename SM0CVAL0_fields_::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct SM0CVAL0CYC_fields_ {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL0CYC_fields_

  struct SM0CVAL0CYC : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL0CYC_fields_::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename SM0CVAL0CYC_fields_::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct SM0CVAL1_fields_ {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL1_fields_

  struct SM0CVAL1 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL1_fields_::CAPTVAL1> {
    using CAPTVAL1 = typename SM0CVAL1_fields_::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct SM0CVAL1CYC_fields_ {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL1CYC_fields_

  struct SM0CVAL1CYC : ftl::mmio::Register<
      kBase + 0x46u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL1CYC_fields_::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename SM0CVAL1CYC_fields_::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct SM0CVAL2_fields_ {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL2_fields_

  struct SM0CVAL2 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL2_fields_::CAPTVAL2> {
    using CAPTVAL2 = typename SM0CVAL2_fields_::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct SM0CVAL2CYC_fields_ {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL2CYC_fields_

  struct SM0CVAL2CYC : ftl::mmio::Register<
      kBase + 0x4Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL2CYC_fields_::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename SM0CVAL2CYC_fields_::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct SM0CVAL3_fields_ {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL3_fields_

  struct SM0CVAL3 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL3_fields_::CAPTVAL3> {
    using CAPTVAL3 = typename SM0CVAL3_fields_::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct SM0CVAL3CYC_fields_ {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL3CYC_fields_

  struct SM0CVAL3CYC : ftl::mmio::Register<
      kBase + 0x4Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL3CYC_fields_::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename SM0CVAL3CYC_fields_::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct SM0CVAL4_fields_ {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL4_fields_

  struct SM0CVAL4 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL4_fields_::CAPTVAL4> {
    using CAPTVAL4 = typename SM0CVAL4_fields_::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct SM0CVAL4CYC_fields_ {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL4CYC_fields_

  struct SM0CVAL4CYC : ftl::mmio::Register<
      kBase + 0x52u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL4CYC_fields_::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename SM0CVAL4CYC_fields_::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct SM0CVAL5_fields_ {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL5_fields_

  struct SM0CVAL5 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL5_fields_::CAPTVAL5> {
    using CAPTVAL5 = typename SM0CVAL5_fields_::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct SM0CVAL5CYC_fields_ {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM0CVAL5CYC_fields_

  struct SM0CVAL5CYC : ftl::mmio::Register<
      kBase + 0x56u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM0CVAL5CYC_fields_::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename SM0CVAL5CYC_fields_::CVAL5CYC;
  };

  // Counter Register
  struct SM1CNT_fields_ {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CNT_fields_

  struct SM1CNT : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CNT_fields_::CNT> {
    using CNT = typename SM1CNT_fields_::CNT;
  };

  // Initial Count Register
  struct SM1INIT_fields_ {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1INIT_fields_

  struct SM1INIT : ftl::mmio::Register<
      kBase + 0x62u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1INIT_fields_::INIT> {
    using INIT = typename SM1INIT_fields_::INIT;
  };

  // Control 2 Register
  struct SM1CTRL2_fields_ {
    enum class eCLK_SEL : std::uint32_t {
      // The IPBus clock is used as the clock for the local prescaler and counter.
      eIPBUS = 0,
      // EXT_CLK is used as the clock for the local prescaler and counter.
      eEXT_CLK = 1,
      // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
      eAUX_CLK = 2,
    };

    enum class eRELOAD_SEL : std::uint32_t {
      // The local RELOAD signal is used to reload registers.
      eLOCAL = 0,
      // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
      eMASTER = 1,
    };

    enum class eFORCE_SEL : std::uint32_t {
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

    enum class eFRCEN : std::uint32_t {
      // Initialization from a FORCE_OUT is disabled.
      eDISABLED = 0,
      // Initialization from a FORCE_OUT is enabled.
      eENABLED = 1,
    };

    enum class eINIT_SEL : std::uint32_t {
      // Local sync (PWM_X) causes initialization.
      ePWM_X = 0,
      // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
      eMASTER_RELOAD = 1,
      // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
      eMASTER_SYNC = 2,
      // EXT_SYNC causes initialization.
      eEXT_SYNC = 3,
    };

    enum class eINDEP : std::uint32_t {
      // PWM_A and PWM_B form a complementary PWM pair.
      eCOMPLEMENTARY = 0,
      // PWM_A and PWM_B outputs are independent PWMs.
      eINDEPENDENT = 1,
    };

    // Clock Source Select
    using CLK_SEL = ftl::mmio::Field<2, 0, eCLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Source Select
    using RELOAD_SEL = ftl::mmio::Field<1, 2, eRELOAD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Select
    using FORCE_SEL = ftl::mmio::Field<3, 3, eFORCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Initialization
    using FORCE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Enable
    using FRCEN = ftl::mmio::Field<1, 7, eFRCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initialization Control Select
    using INIT_SEL = ftl::mmio::Field<2, 8, eINIT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Initial Value
    using PWMX_INIT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM45 Initial Value
    using PWM45_INIT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM23 Initial Value
    using PWM23_INIT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Independent or Complementary Pair Operation
    using INDEP = ftl::mmio::Field<1, 13, eINDEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1CTRL2_fields_

  struct SM1CTRL2 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CTRL2_fields_::CLK_SEL,
      typename SM1CTRL2_fields_::RELOAD_SEL,
      typename SM1CTRL2_fields_::FORCE_SEL,
      typename SM1CTRL2_fields_::FORCE,
      typename SM1CTRL2_fields_::FRCEN,
      typename SM1CTRL2_fields_::INIT_SEL,
      typename SM1CTRL2_fields_::PWMX_INIT,
      typename SM1CTRL2_fields_::PWM45_INIT,
      typename SM1CTRL2_fields_::PWM23_INIT,
      typename SM1CTRL2_fields_::INDEP,
      typename SM1CTRL2_fields_::WAITEN,
      typename SM1CTRL2_fields_::DBGEN> {
    using eCLK_SEL = typename SM1CTRL2_fields_::eCLK_SEL;
    using eRELOAD_SEL = typename SM1CTRL2_fields_::eRELOAD_SEL;
    using eFORCE_SEL = typename SM1CTRL2_fields_::eFORCE_SEL;
    using eFRCEN = typename SM1CTRL2_fields_::eFRCEN;
    using eINIT_SEL = typename SM1CTRL2_fields_::eINIT_SEL;
    using eINDEP = typename SM1CTRL2_fields_::eINDEP;
    using CLK_SEL = typename SM1CTRL2_fields_::CLK_SEL;
    using RELOAD_SEL = typename SM1CTRL2_fields_::RELOAD_SEL;
    using FORCE_SEL = typename SM1CTRL2_fields_::FORCE_SEL;
    using FORCE = typename SM1CTRL2_fields_::FORCE;
    using FRCEN = typename SM1CTRL2_fields_::FRCEN;
    using INIT_SEL = typename SM1CTRL2_fields_::INIT_SEL;
    using PWMX_INIT = typename SM1CTRL2_fields_::PWMX_INIT;
    using PWM45_INIT = typename SM1CTRL2_fields_::PWM45_INIT;
    using PWM23_INIT = typename SM1CTRL2_fields_::PWM23_INIT;
    using INDEP = typename SM1CTRL2_fields_::INDEP;
    using WAITEN = typename SM1CTRL2_fields_::WAITEN;
    using DBGEN = typename SM1CTRL2_fields_::DBGEN;
  };

  // Control Register
  struct SM1CTRL_fields_ {
    enum class eDBLEN : std::uint32_t {
      // Double switching disabled.
      eDISABLED = 0,
      // Double switching enabled.
      eENABLED = 1,
    };

    enum class eDBLX : std::uint32_t {
      // PWM_X double pulse disabled.
      eDISABLED = 0,
      // PWM_X double pulse enabled.
      eENABLED = 1,
    };

    enum class eLDMOD : std::uint32_t {
      // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
      eNEXT_PWM_RELOAD = 0,
      // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
      eMTCTRL_LDOK_SET = 1,
    };

    enum class eSPLIT : std::uint32_t {
      // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
      eDISABLED = 0,
      // DBLPWM is split to PWM_A and PWM_B.
      eENABLED = 1,
    };

    enum class ePRSC : std::uint32_t {
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

    enum class eCOMPMODE : std::uint32_t {
      // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
      eEQUAL_TO = 0,
      // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
      eEQUAL_TO_OR_GREATER_THAN = 1,
    };

    enum class eFULL : std::uint32_t {
      // Full-cycle reloads disabled.
      eDISABLED = 0,
      // Full-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eHALF : std::uint32_t {
      // Half-cycle reloads disabled.
      eDISABLED = 0,
      // Half-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eLDFQ : std::uint32_t {
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

    // Double Switching Enable
    using DBLEN = ftl::mmio::Field<1, 0, eDBLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Double Switching Enable
    using DBLX = ftl::mmio::Field<1, 1, eDBLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Mode Select
    using LDMOD = ftl::mmio::Field<1, 2, eLDMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Split the DBLPWM signal to PWM_A and PWM_B
    using SPLIT = ftl::mmio::Field<1, 3, eSPLIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler
    using PRSC = ftl::mmio::Field<3, 4, ePRSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Mode
    using COMPMODE = ftl::mmio::Field<1, 7, eCOMPMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deadtime
    using DT = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Full Cycle Reload
    using FULL = ftl::mmio::Field<1, 10, eFULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Half Cycle Reload
    using HALF = ftl::mmio::Field<1, 11, eHALF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Frequency
    using LDFQ = ftl::mmio::Field<4, 12, eLDFQ, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1CTRL_fields_

  struct SM1CTRL : ftl::mmio::Register<
      kBase + 0x66u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename SM1CTRL_fields_::DBLEN,
      typename SM1CTRL_fields_::DBLX,
      typename SM1CTRL_fields_::LDMOD,
      typename SM1CTRL_fields_::SPLIT,
      typename SM1CTRL_fields_::PRSC,
      typename SM1CTRL_fields_::COMPMODE,
      typename SM1CTRL_fields_::DT,
      typename SM1CTRL_fields_::FULL,
      typename SM1CTRL_fields_::HALF,
      typename SM1CTRL_fields_::LDFQ> {
    using eDBLEN = typename SM1CTRL_fields_::eDBLEN;
    using eDBLX = typename SM1CTRL_fields_::eDBLX;
    using eLDMOD = typename SM1CTRL_fields_::eLDMOD;
    using eSPLIT = typename SM1CTRL_fields_::eSPLIT;
    using ePRSC = typename SM1CTRL_fields_::ePRSC;
    using eCOMPMODE = typename SM1CTRL_fields_::eCOMPMODE;
    using eFULL = typename SM1CTRL_fields_::eFULL;
    using eHALF = typename SM1CTRL_fields_::eHALF;
    using eLDFQ = typename SM1CTRL_fields_::eLDFQ;
    using DBLEN = typename SM1CTRL_fields_::DBLEN;
    using DBLX = typename SM1CTRL_fields_::DBLX;
    using LDMOD = typename SM1CTRL_fields_::LDMOD;
    using SPLIT = typename SM1CTRL_fields_::SPLIT;
    using PRSC = typename SM1CTRL_fields_::PRSC;
    using COMPMODE = typename SM1CTRL_fields_::COMPMODE;
    using DT = typename SM1CTRL_fields_::DT;
    using FULL = typename SM1CTRL_fields_::FULL;
    using HALF = typename SM1CTRL_fields_::HALF;
    using LDFQ = typename SM1CTRL_fields_::LDFQ;
  };

  // Value Register 0
  struct SM1VAL0_fields_ {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL0_fields_

  struct SM1VAL0 : ftl::mmio::Register<
      kBase + 0x6Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL0_fields_::VAL0> {
    using VAL0 = typename SM1VAL0_fields_::VAL0;
  };

  // Fractional Value Register 1
  struct SM1FRACVAL1_fields_ {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1FRACVAL1_fields_

  struct SM1FRACVAL1 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM1FRACVAL1_fields_::FRACVAL1> {
    using FRACVAL1 = typename SM1FRACVAL1_fields_::FRACVAL1;
  };

  // Value Register 1
  struct SM1VAL1_fields_ {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL1_fields_

  struct SM1VAL1 : ftl::mmio::Register<
      kBase + 0x6Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL1_fields_::VAL1> {
    using VAL1 = typename SM1VAL1_fields_::VAL1;
  };

  // Fractional Value Register 2
  struct SM1FRACVAL2_fields_ {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1FRACVAL2_fields_

  struct SM1FRACVAL2 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM1FRACVAL2_fields_::FRACVAL2> {
    using FRACVAL2 = typename SM1FRACVAL2_fields_::FRACVAL2;
  };

  // Value Register 2
  struct SM1VAL2_fields_ {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL2_fields_

  struct SM1VAL2 : ftl::mmio::Register<
      kBase + 0x72u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL2_fields_::VAL2> {
    using VAL2 = typename SM1VAL2_fields_::VAL2;
  };

  // Fractional Value Register 3
  struct SM1FRACVAL3_fields_ {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1FRACVAL3_fields_

  struct SM1FRACVAL3 : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM1FRACVAL3_fields_::FRACVAL3> {
    using FRACVAL3 = typename SM1FRACVAL3_fields_::FRACVAL3;
  };

  // Value Register 3
  struct SM1VAL3_fields_ {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL3_fields_

  struct SM1VAL3 : ftl::mmio::Register<
      kBase + 0x76u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL3_fields_::VAL3> {
    using VAL3 = typename SM1VAL3_fields_::VAL3;
  };

  // Fractional Value Register 4
  struct SM1FRACVAL4_fields_ {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1FRACVAL4_fields_

  struct SM1FRACVAL4 : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM1FRACVAL4_fields_::FRACVAL4> {
    using FRACVAL4 = typename SM1FRACVAL4_fields_::FRACVAL4;
  };

  // Value Register 4
  struct SM1VAL4_fields_ {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL4_fields_

  struct SM1VAL4 : ftl::mmio::Register<
      kBase + 0x7Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL4_fields_::VAL4> {
    using VAL4 = typename SM1VAL4_fields_::VAL4;
  };

  // Fractional Value Register 5
  struct SM1FRACVAL5_fields_ {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1FRACVAL5_fields_

  struct SM1FRACVAL5 : ftl::mmio::Register<
      kBase + 0x7Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM1FRACVAL5_fields_::FRACVAL5> {
    using FRACVAL5 = typename SM1FRACVAL5_fields_::FRACVAL5;
  };

  // Value Register 5
  struct SM1VAL5_fields_ {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1VAL5_fields_

  struct SM1VAL5 : ftl::mmio::Register<
      kBase + 0x7Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1VAL5_fields_::VAL5> {
    using VAL5 = typename SM1VAL5_fields_::VAL5;
  };

  // Fractional Control Register
  struct SM1FRCTRL_fields_ {
    enum class eFRAC1_EN : std::uint32_t {
      // Disable fractional cycle length for the PWM period.
      eDISABLED = 0,
      // Enable fractional cycle length for the PWM period.
      eENABLED = 1,
    };

    enum class eFRAC23_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_A.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_A.
      eENABLED = 1,
    };

    enum class eFRAC45_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_B.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_B.
      eENABLED = 1,
    };

    // Fractional Cycle PWM Period Enable
    using FRAC1_EN = ftl::mmio::Field<1, 1, eFRAC1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_A
    using FRAC23_EN = ftl::mmio::Field<1, 2, eFRAC23_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_B
    using FRAC45_EN = ftl::mmio::Field<1, 4, eFRAC45_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Status Bit
    using TEST = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1FRCTRL_fields_

  struct SM1FRCTRL : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename SM1FRCTRL_fields_::FRAC1_EN,
      typename SM1FRCTRL_fields_::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename SM1FRCTRL_fields_::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename SM1FRCTRL_fields_::TEST> {
    using eFRAC1_EN = typename SM1FRCTRL_fields_::eFRAC1_EN;
    using eFRAC23_EN = typename SM1FRCTRL_fields_::eFRAC23_EN;
    using eFRAC45_EN = typename SM1FRCTRL_fields_::eFRAC45_EN;
    using FRAC1_EN = typename SM1FRCTRL_fields_::FRAC1_EN;
    using FRAC23_EN = typename SM1FRCTRL_fields_::FRAC23_EN;
    using FRAC45_EN = typename SM1FRCTRL_fields_::FRAC45_EN;
    using TEST = typename SM1FRCTRL_fields_::TEST;
  };

  // Output Control Register
  struct SM1OCTRL_fields_ {
    enum class ePWMXFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMBFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMAFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePOLX : std::uint32_t {
      // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLB : std::uint32_t {
      // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLA : std::uint32_t {
      // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    // PWM_X Fault State
    using PWMXFS = ftl::mmio::Field<2, 0, ePWMXFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault State
    using PWMBFS = ftl::mmio::Field<2, 2, ePWMBFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Fault State
    using PWMAFS = ftl::mmio::Field<2, 4, ePWMAFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Output Polarity
    using POLX = ftl::mmio::Field<1, 8, ePOLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Polarity
    using POLB = ftl::mmio::Field<1, 9, ePOLB, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Polarity
    using POLA = ftl::mmio::Field<1, 10, ePOLA, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Input
    using PWMX_IN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_B Input
    using PWMB_IN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_A Input
    using PWMA_IN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1OCTRL_fields_

  struct SM1OCTRL : ftl::mmio::Register<
      kBase + 0x82u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1OCTRL_fields_::PWMXFS,
      typename SM1OCTRL_fields_::PWMBFS,
      typename SM1OCTRL_fields_::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename SM1OCTRL_fields_::POLX,
      typename SM1OCTRL_fields_::POLB,
      typename SM1OCTRL_fields_::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename SM1OCTRL_fields_::PWMX_IN,
      typename SM1OCTRL_fields_::PWMB_IN,
      typename SM1OCTRL_fields_::PWMA_IN> {
    using ePWMXFS = typename SM1OCTRL_fields_::ePWMXFS;
    using ePWMBFS = typename SM1OCTRL_fields_::ePWMBFS;
    using ePWMAFS = typename SM1OCTRL_fields_::ePWMAFS;
    using ePOLX = typename SM1OCTRL_fields_::ePOLX;
    using ePOLB = typename SM1OCTRL_fields_::ePOLB;
    using ePOLA = typename SM1OCTRL_fields_::ePOLA;
    using PWMXFS = typename SM1OCTRL_fields_::PWMXFS;
    using PWMBFS = typename SM1OCTRL_fields_::PWMBFS;
    using PWMAFS = typename SM1OCTRL_fields_::PWMAFS;
    using POLX = typename SM1OCTRL_fields_::POLX;
    using POLB = typename SM1OCTRL_fields_::POLB;
    using POLA = typename SM1OCTRL_fields_::POLA;
    using PWMX_IN = typename SM1OCTRL_fields_::PWMX_IN;
    using PWMB_IN = typename SM1OCTRL_fields_::PWMB_IN;
    using PWMA_IN = typename SM1OCTRL_fields_::PWMA_IN;
  };

  // Status Register
  struct SM1STS_fields_ {
    enum class eCMPF : std::uint32_t {
      // No compare event has occurred for a particular VALx value.
      eNO_EVENT = 0,
      // A compare event has occurred for a particular VALx value.
      eEVENT = 1,
    };

    enum class eRF : std::uint32_t {
      // No new reload cycle since last STS[RF] clearing
      eNO_FLAG = 0,
      // New reload cycle since last STS[RF] clearing
      eFLAG = 1,
    };

    enum class eREF : std::uint32_t {
      // No reload error occurred.
      eNO_FLAG = 0,
      // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
      eFLAG = 1,
    };

    enum class eRUF : std::uint32_t {
      // No register update has occurred since last reload.
      eNO_FLAG = 0,
      // At least one of the double buffered registers has been updated since the last reload.
      eFLAG = 1,
    };

    // Compare Flags
    using CMPF = ftl::mmio::Field<6, 0, eCMPF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X0
    using CFX0 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X1
    using CFX1 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B0
    using CFB0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B1
    using CFB1 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A0
    using CFA0 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A1
    using CFA1 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Flag
    using RF = ftl::mmio::Field<1, 12, eRF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Error Flag
    using REF = ftl::mmio::Field<1, 13, eREF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Registers Updated Flag
    using RUF = ftl::mmio::Field<1, 14, eRUF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1STS_fields_

  struct SM1STS : ftl::mmio::Register<
      kBase + 0x84u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1STS_fields_::CMPF,
      typename SM1STS_fields_::CFX0,
      typename SM1STS_fields_::CFX1,
      typename SM1STS_fields_::CFB0,
      typename SM1STS_fields_::CFB1,
      typename SM1STS_fields_::CFA0,
      typename SM1STS_fields_::CFA1,
      typename SM1STS_fields_::RF,
      typename SM1STS_fields_::REF,
      typename SM1STS_fields_::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename SM1STS_fields_::eCMPF;
    using eRF = typename SM1STS_fields_::eRF;
    using eREF = typename SM1STS_fields_::eREF;
    using eRUF = typename SM1STS_fields_::eRUF;
    using CMPF = typename SM1STS_fields_::CMPF;
    using CFX0 = typename SM1STS_fields_::CFX0;
    using CFX1 = typename SM1STS_fields_::CFX1;
    using CFB0 = typename SM1STS_fields_::CFB0;
    using CFB1 = typename SM1STS_fields_::CFB1;
    using CFA0 = typename SM1STS_fields_::CFA0;
    using CFA1 = typename SM1STS_fields_::CFA1;
    using RF = typename SM1STS_fields_::RF;
    using REF = typename SM1STS_fields_::REF;
    using RUF = typename SM1STS_fields_::RUF;
  };

  // Interrupt Enable Register
  struct SM1INTEN_fields_ {
    enum class eCMPIE : std::uint32_t {
      // The corresponding STS[CMPF] bit will not cause an interrupt request.
      eDISABLED = 0,
      // The corresponding STS[CMPF] bit will cause an interrupt request.
      eENABLED = 1,
    };

    enum class eCX0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX0].
      eENABLED = 1,
    };

    enum class eCX1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX1].
      eENABLED = 1,
    };

    enum class eCB0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB0].
      eENABLED = 1,
    };

    enum class eCB1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB1].
      eENABLED = 1,
    };

    enum class eCA0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA0].
      eENABLED = 1,
    };

    enum class eCA1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA1]
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA1]
      eENABLED = 1,
    };

    enum class eRIE : std::uint32_t {
      // STS[RF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[RF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    enum class eREIE : std::uint32_t {
      // STS[REF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[REF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    // Compare Interrupt Enables
    using CMPIE = ftl::mmio::Field<6, 0, eCMPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 0 Interrupt Enable
    using CX0IE = ftl::mmio::Field<1, 6, eCX0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 1 Interrupt Enable
    using CX1IE = ftl::mmio::Field<1, 7, eCX1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 0 Interrupt Enable
    using CB0IE = ftl::mmio::Field<1, 8, eCB0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 1 Interrupt Enable
    using CB1IE = ftl::mmio::Field<1, 9, eCB1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 0 Interrupt Enable
    using CA0IE = ftl::mmio::Field<1, 10, eCA0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 1 Interrupt Enable
    using CA1IE = ftl::mmio::Field<1, 11, eCA1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Interrupt Enable
    using RIE = ftl::mmio::Field<1, 12, eRIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Error Interrupt Enable
    using REIE = ftl::mmio::Field<1, 13, eREIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1INTEN_fields_

  struct SM1INTEN : ftl::mmio::Register<
      kBase + 0x86u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1INTEN_fields_::CMPIE,
      typename SM1INTEN_fields_::CX0IE,
      typename SM1INTEN_fields_::CX1IE,
      typename SM1INTEN_fields_::CB0IE,
      typename SM1INTEN_fields_::CB1IE,
      typename SM1INTEN_fields_::CA0IE,
      typename SM1INTEN_fields_::CA1IE,
      typename SM1INTEN_fields_::RIE,
      typename SM1INTEN_fields_::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename SM1INTEN_fields_::eCMPIE;
    using eCX0IE = typename SM1INTEN_fields_::eCX0IE;
    using eCX1IE = typename SM1INTEN_fields_::eCX1IE;
    using eCB0IE = typename SM1INTEN_fields_::eCB0IE;
    using eCB1IE = typename SM1INTEN_fields_::eCB1IE;
    using eCA0IE = typename SM1INTEN_fields_::eCA0IE;
    using eCA1IE = typename SM1INTEN_fields_::eCA1IE;
    using eRIE = typename SM1INTEN_fields_::eRIE;
    using eREIE = typename SM1INTEN_fields_::eREIE;
    using CMPIE = typename SM1INTEN_fields_::CMPIE;
    using CX0IE = typename SM1INTEN_fields_::CX0IE;
    using CX1IE = typename SM1INTEN_fields_::CX1IE;
    using CB0IE = typename SM1INTEN_fields_::CB0IE;
    using CB1IE = typename SM1INTEN_fields_::CB1IE;
    using CA0IE = typename SM1INTEN_fields_::CA0IE;
    using CA1IE = typename SM1INTEN_fields_::CA1IE;
    using RIE = typename SM1INTEN_fields_::RIE;
    using REIE = typename SM1INTEN_fields_::REIE;
  };

  // DMA Enable Register
  struct SM1DMAEN_fields_ {
    enum class eCAPTDE : std::uint32_t {
      // Read DMA requests disabled.
      eDISABLED = 0,
      // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
      eEXCEEDFIFO = 1,
      // A local synchronization (VAL1 matches counter) sets the read DMA request.
      eLOCAL_SYNC = 2,
      // A local reload (STS[RF] being set) sets the read DMA request.
      eLOCAL_RELOAD = 3,
    };

    enum class eFAND : std::uint32_t {
      // Selected FIFO watermarks are OR'ed together.
      eOR = 0,
      // Selected FIFO watermarks are AND'ed together.
      eAND = 1,
    };

    enum class eVALDE : std::uint32_t {
      // DMA write requests disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Capture X0 FIFO DMA Enable
    using CX0DE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X1 FIFO DMA Enable
    using CX1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO DMA Enable
    using CB0DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B1 FIFO DMA Enable
    using CB1DE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO DMA Enable
    using CA0DE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A1 FIFO DMA Enable
    using CA1DE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture DMA Enable Source Select
    using CAPTDE = ftl::mmio::Field<2, 6, eCAPTDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Watermark AND Control
    using FAND = ftl::mmio::Field<1, 8, eFAND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Value Registers DMA Enable
    using VALDE = ftl::mmio::Field<1, 9, eVALDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1DMAEN_fields_

  struct SM1DMAEN : ftl::mmio::Register<
      kBase + 0x88u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1DMAEN_fields_::CX0DE,
      typename SM1DMAEN_fields_::CX1DE,
      typename SM1DMAEN_fields_::CB0DE,
      typename SM1DMAEN_fields_::CB1DE,
      typename SM1DMAEN_fields_::CA0DE,
      typename SM1DMAEN_fields_::CA1DE,
      typename SM1DMAEN_fields_::CAPTDE,
      typename SM1DMAEN_fields_::FAND,
      typename SM1DMAEN_fields_::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename SM1DMAEN_fields_::eCAPTDE;
    using eFAND = typename SM1DMAEN_fields_::eFAND;
    using eVALDE = typename SM1DMAEN_fields_::eVALDE;
    using CX0DE = typename SM1DMAEN_fields_::CX0DE;
    using CX1DE = typename SM1DMAEN_fields_::CX1DE;
    using CB0DE = typename SM1DMAEN_fields_::CB0DE;
    using CB1DE = typename SM1DMAEN_fields_::CB1DE;
    using CA0DE = typename SM1DMAEN_fields_::CA0DE;
    using CA1DE = typename SM1DMAEN_fields_::CA1DE;
    using CAPTDE = typename SM1DMAEN_fields_::CAPTDE;
    using FAND = typename SM1DMAEN_fields_::FAND;
    using VALDE = typename SM1DMAEN_fields_::VALDE;
  };

  // Output Trigger Control Register
  struct SM1TCTRL_fields_ {
    enum class eOUT_TRIG_EN : std::uint32_t {
      // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
      eVAL0 = 1,
    };

    enum class eTRGFRQ : std::uint32_t {
      // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eEVERYPWM = 0,
      // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eFINALPWM = 1,
    };

    enum class ePWBOT1 : std::uint32_t {
      // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      ePWM_OUT_TRIG1_SIGNAL = 0,
      // Route the PWM_B output to the PWM_OUT_TRIG1 port.
      ePWMB_OUTPUT = 1,
    };

    enum class ePWAOT0 : std::uint32_t {
      // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      ePWM_OUT_TRIG0_SIGNAL = 0,
      // Route the PWM_A output to the PWM_OUT_TRIG0 port.
      ePWMA_OUTPUT = 1,
    };

    // Output Trigger Enables
    using OUT_TRIG_EN = ftl::mmio::Field<6, 0, eOUT_TRIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Frequency
    using TRGFRQ = ftl::mmio::Field<1, 12, eTRGFRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 1 Source Select
    using PWBOT1 = ftl::mmio::Field<1, 14, ePWBOT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 0 Source Select
    using PWAOT0 = ftl::mmio::Field<1, 15, ePWAOT0, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1TCTRL_fields_

  struct SM1TCTRL : ftl::mmio::Register<
      kBase + 0x8Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1TCTRL_fields_::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename SM1TCTRL_fields_::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename SM1TCTRL_fields_::PWBOT1,
      typename SM1TCTRL_fields_::PWAOT0> {
    using eOUT_TRIG_EN = typename SM1TCTRL_fields_::eOUT_TRIG_EN;
    using eTRGFRQ = typename SM1TCTRL_fields_::eTRGFRQ;
    using ePWBOT1 = typename SM1TCTRL_fields_::ePWBOT1;
    using ePWAOT0 = typename SM1TCTRL_fields_::ePWAOT0;
    using OUT_TRIG_EN = typename SM1TCTRL_fields_::OUT_TRIG_EN;
    using TRGFRQ = typename SM1TCTRL_fields_::TRGFRQ;
    using PWBOT1 = typename SM1TCTRL_fields_::PWBOT1;
    using PWAOT0 = typename SM1TCTRL_fields_::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct SM1DISMAP0_fields_ {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1DISMAP0_fields_

  struct SM1DISMAP0 : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename SM1DISMAP0_fields_::DIS0A,
      typename SM1DISMAP0_fields_::DIS0B,
      typename SM1DISMAP0_fields_::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename SM1DISMAP0_fields_::DIS0A;
    using DIS0B = typename SM1DISMAP0_fields_::DIS0B;
    using DIS0X = typename SM1DISMAP0_fields_::DIS0X;
  };

  // Deadtime Count Register 0
  struct SM1DTCNT0_fields_ {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1DTCNT0_fields_

  struct SM1DTCNT0 : ftl::mmio::Register<
      kBase + 0x90u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM1DTCNT0_fields_::DTCNT0> {
    using DTCNT0 = typename SM1DTCNT0_fields_::DTCNT0;
  };

  // Deadtime Count Register 1
  struct SM1DTCNT1_fields_ {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM1DTCNT1_fields_

  struct SM1DTCNT1 : ftl::mmio::Register<
      kBase + 0x92u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM1DTCNT1_fields_::DTCNT1> {
    using DTCNT1 = typename SM1DTCNT1_fields_::DTCNT1;
  };

  // Capture Control A Register
  struct SM1CAPTCTRLA_fields_ {
    enum class eARMA : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTA : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGA0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGA1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELA : std::uint32_t {
      // Raw PWM_A input signal selected as source.
      ePWM_A = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTA_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm A
    using ARMA = ftl::mmio::Field<1, 0, eARMA, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode A
    using ONESHOTA = ftl::mmio::Field<1, 1, eONESHOTA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 0
    using EDGA0 = ftl::mmio::Field<2, 2, eEDGA0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 1
    using EDGA1 = ftl::mmio::Field<2, 4, eEDGA1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select A
    using INP_SELA = ftl::mmio::Field<1, 6, eINP_SELA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A Enable
    using EDGCNTA_EN = ftl::mmio::Field<1, 7, eEDGCNTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A FIFOs Water Mark
    using CFAWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO Word Count
    using CA0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture A1 FIFO Word Count
    using CA1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCTRLA_fields_

  struct SM1CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCTRLA_fields_::ARMA,
      typename SM1CAPTCTRLA_fields_::ONESHOTA,
      typename SM1CAPTCTRLA_fields_::EDGA0,
      typename SM1CAPTCTRLA_fields_::EDGA1,
      typename SM1CAPTCTRLA_fields_::INP_SELA,
      typename SM1CAPTCTRLA_fields_::EDGCNTA_EN,
      typename SM1CAPTCTRLA_fields_::CFAWM,
      typename SM1CAPTCTRLA_fields_::CA0CNT,
      typename SM1CAPTCTRLA_fields_::CA1CNT> {
    using eARMA = typename SM1CAPTCTRLA_fields_::eARMA;
    using eONESHOTA = typename SM1CAPTCTRLA_fields_::eONESHOTA;
    using eEDGA0 = typename SM1CAPTCTRLA_fields_::eEDGA0;
    using eEDGA1 = typename SM1CAPTCTRLA_fields_::eEDGA1;
    using eINP_SELA = typename SM1CAPTCTRLA_fields_::eINP_SELA;
    using eEDGCNTA_EN = typename SM1CAPTCTRLA_fields_::eEDGCNTA_EN;
    using ARMA = typename SM1CAPTCTRLA_fields_::ARMA;
    using ONESHOTA = typename SM1CAPTCTRLA_fields_::ONESHOTA;
    using EDGA0 = typename SM1CAPTCTRLA_fields_::EDGA0;
    using EDGA1 = typename SM1CAPTCTRLA_fields_::EDGA1;
    using INP_SELA = typename SM1CAPTCTRLA_fields_::INP_SELA;
    using EDGCNTA_EN = typename SM1CAPTCTRLA_fields_::EDGCNTA_EN;
    using CFAWM = typename SM1CAPTCTRLA_fields_::CFAWM;
    using CA0CNT = typename SM1CAPTCTRLA_fields_::CA0CNT;
    using CA1CNT = typename SM1CAPTCTRLA_fields_::CA1CNT;
  };

  // Capture Compare A Register
  struct SM1CAPTCOMPA_fields_ {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCOMPA_fields_

  struct SM1CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x96u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCOMPA_fields_::EDGCMPA,
      typename SM1CAPTCOMPA_fields_::EDGCNTA> {
    using EDGCMPA = typename SM1CAPTCOMPA_fields_::EDGCMPA;
    using EDGCNTA = typename SM1CAPTCOMPA_fields_::EDGCNTA;
  };

  // Capture Control B Register
  struct SM1CAPTCTRLB_fields_ {
    enum class eARMB : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTB : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGB0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGB1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELB : std::uint32_t {
      // Raw PWM_B input signal selected as source.
      ePWM_B = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTB_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm B
    using ARMB = ftl::mmio::Field<1, 0, eARMB, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode B
    using ONESHOTB = ftl::mmio::Field<1, 1, eONESHOTB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 0
    using EDGB0 = ftl::mmio::Field<2, 2, eEDGB0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 1
    using EDGB1 = ftl::mmio::Field<2, 4, eEDGB1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select B
    using INP_SELB = ftl::mmio::Field<1, 6, eINP_SELB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B Enable
    using EDGCNTB_EN = ftl::mmio::Field<1, 7, eEDGCNTB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B FIFOs Water Mark
    using CFBWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO Word Count
    using CB0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture B1 FIFO Word Count
    using CB1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCTRLB_fields_

  struct SM1CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x98u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCTRLB_fields_::ARMB,
      typename SM1CAPTCTRLB_fields_::ONESHOTB,
      typename SM1CAPTCTRLB_fields_::EDGB0,
      typename SM1CAPTCTRLB_fields_::EDGB1,
      typename SM1CAPTCTRLB_fields_::INP_SELB,
      typename SM1CAPTCTRLB_fields_::EDGCNTB_EN,
      typename SM1CAPTCTRLB_fields_::CFBWM,
      typename SM1CAPTCTRLB_fields_::CB0CNT,
      typename SM1CAPTCTRLB_fields_::CB1CNT> {
    using eARMB = typename SM1CAPTCTRLB_fields_::eARMB;
    using eONESHOTB = typename SM1CAPTCTRLB_fields_::eONESHOTB;
    using eEDGB0 = typename SM1CAPTCTRLB_fields_::eEDGB0;
    using eEDGB1 = typename SM1CAPTCTRLB_fields_::eEDGB1;
    using eINP_SELB = typename SM1CAPTCTRLB_fields_::eINP_SELB;
    using eEDGCNTB_EN = typename SM1CAPTCTRLB_fields_::eEDGCNTB_EN;
    using ARMB = typename SM1CAPTCTRLB_fields_::ARMB;
    using ONESHOTB = typename SM1CAPTCTRLB_fields_::ONESHOTB;
    using EDGB0 = typename SM1CAPTCTRLB_fields_::EDGB0;
    using EDGB1 = typename SM1CAPTCTRLB_fields_::EDGB1;
    using INP_SELB = typename SM1CAPTCTRLB_fields_::INP_SELB;
    using EDGCNTB_EN = typename SM1CAPTCTRLB_fields_::EDGCNTB_EN;
    using CFBWM = typename SM1CAPTCTRLB_fields_::CFBWM;
    using CB0CNT = typename SM1CAPTCTRLB_fields_::CB0CNT;
    using CB1CNT = typename SM1CAPTCTRLB_fields_::CB1CNT;
  };

  // Capture Compare B Register
  struct SM1CAPTCOMPB_fields_ {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCOMPB_fields_

  struct SM1CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x9Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCOMPB_fields_::EDGCMPB,
      typename SM1CAPTCOMPB_fields_::EDGCNTB> {
    using EDGCMPB = typename SM1CAPTCOMPB_fields_::EDGCMPB;
    using EDGCNTB = typename SM1CAPTCOMPB_fields_::EDGCNTB;
  };

  // Capture Control X Register
  struct SM1CAPTCTRLX_fields_ {
    enum class eARMX : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTX : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGX0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGX1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELX : std::uint32_t {
      // Raw PWM_X input signal selected as source.
      ePWM_X = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTX_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm X
    using ARMX = ftl::mmio::Field<1, 0, eARMX, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode Aux
    using ONESHOTX = ftl::mmio::Field<1, 1, eONESHOTX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 0
    using EDGX0 = ftl::mmio::Field<2, 2, eEDGX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 1
    using EDGX1 = ftl::mmio::Field<2, 4, eEDGX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select X
    using INP_SELX = ftl::mmio::Field<1, 6, eINP_SELX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X Enable
    using EDGCNTX_EN = ftl::mmio::Field<1, 7, eEDGCNTX_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X FIFOs Water Mark
    using CFXWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X0 FIFO Word Count
    using CX0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture X1 FIFO Word Count
    using CX1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCTRLX_fields_

  struct SM1CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x9Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCTRLX_fields_::ARMX,
      typename SM1CAPTCTRLX_fields_::ONESHOTX,
      typename SM1CAPTCTRLX_fields_::EDGX0,
      typename SM1CAPTCTRLX_fields_::EDGX1,
      typename SM1CAPTCTRLX_fields_::INP_SELX,
      typename SM1CAPTCTRLX_fields_::EDGCNTX_EN,
      typename SM1CAPTCTRLX_fields_::CFXWM,
      typename SM1CAPTCTRLX_fields_::CX0CNT,
      typename SM1CAPTCTRLX_fields_::CX1CNT> {
    using eARMX = typename SM1CAPTCTRLX_fields_::eARMX;
    using eONESHOTX = typename SM1CAPTCTRLX_fields_::eONESHOTX;
    using eEDGX0 = typename SM1CAPTCTRLX_fields_::eEDGX0;
    using eEDGX1 = typename SM1CAPTCTRLX_fields_::eEDGX1;
    using eINP_SELX = typename SM1CAPTCTRLX_fields_::eINP_SELX;
    using eEDGCNTX_EN = typename SM1CAPTCTRLX_fields_::eEDGCNTX_EN;
    using ARMX = typename SM1CAPTCTRLX_fields_::ARMX;
    using ONESHOTX = typename SM1CAPTCTRLX_fields_::ONESHOTX;
    using EDGX0 = typename SM1CAPTCTRLX_fields_::EDGX0;
    using EDGX1 = typename SM1CAPTCTRLX_fields_::EDGX1;
    using INP_SELX = typename SM1CAPTCTRLX_fields_::INP_SELX;
    using EDGCNTX_EN = typename SM1CAPTCTRLX_fields_::EDGCNTX_EN;
    using CFXWM = typename SM1CAPTCTRLX_fields_::CFXWM;
    using CX0CNT = typename SM1CAPTCTRLX_fields_::CX0CNT;
    using CX1CNT = typename SM1CAPTCTRLX_fields_::CX1CNT;
  };

  // Capture Compare X Register
  struct SM1CAPTCOMPX_fields_ {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CAPTCOMPX_fields_

  struct SM1CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x9Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM1CAPTCOMPX_fields_::EDGCMPX,
      typename SM1CAPTCOMPX_fields_::EDGCNTX> {
    using EDGCMPX = typename SM1CAPTCOMPX_fields_::EDGCMPX;
    using EDGCNTX = typename SM1CAPTCOMPX_fields_::EDGCNTX;
  };

  // Capture Value 0 Register
  struct SM1CVAL0_fields_ {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL0_fields_

  struct SM1CVAL0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL0_fields_::CAPTVAL0> {
    using CAPTVAL0 = typename SM1CVAL0_fields_::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct SM1CVAL0CYC_fields_ {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL0CYC_fields_

  struct SM1CVAL0CYC : ftl::mmio::Register<
      kBase + 0xA2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL0CYC_fields_::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename SM1CVAL0CYC_fields_::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct SM1CVAL1_fields_ {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL1_fields_

  struct SM1CVAL1 : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL1_fields_::CAPTVAL1> {
    using CAPTVAL1 = typename SM1CVAL1_fields_::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct SM1CVAL1CYC_fields_ {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL1CYC_fields_

  struct SM1CVAL1CYC : ftl::mmio::Register<
      kBase + 0xA6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL1CYC_fields_::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename SM1CVAL1CYC_fields_::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct SM1CVAL2_fields_ {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL2_fields_

  struct SM1CVAL2 : ftl::mmio::Register<
      kBase + 0xA8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL2_fields_::CAPTVAL2> {
    using CAPTVAL2 = typename SM1CVAL2_fields_::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct SM1CVAL2CYC_fields_ {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL2CYC_fields_

  struct SM1CVAL2CYC : ftl::mmio::Register<
      kBase + 0xAAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL2CYC_fields_::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename SM1CVAL2CYC_fields_::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct SM1CVAL3_fields_ {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL3_fields_

  struct SM1CVAL3 : ftl::mmio::Register<
      kBase + 0xACu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL3_fields_::CAPTVAL3> {
    using CAPTVAL3 = typename SM1CVAL3_fields_::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct SM1CVAL3CYC_fields_ {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL3CYC_fields_

  struct SM1CVAL3CYC : ftl::mmio::Register<
      kBase + 0xAEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL3CYC_fields_::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename SM1CVAL3CYC_fields_::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct SM1CVAL4_fields_ {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL4_fields_

  struct SM1CVAL4 : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL4_fields_::CAPTVAL4> {
    using CAPTVAL4 = typename SM1CVAL4_fields_::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct SM1CVAL4CYC_fields_ {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL4CYC_fields_

  struct SM1CVAL4CYC : ftl::mmio::Register<
      kBase + 0xB2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL4CYC_fields_::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename SM1CVAL4CYC_fields_::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct SM1CVAL5_fields_ {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL5_fields_

  struct SM1CVAL5 : ftl::mmio::Register<
      kBase + 0xB4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL5_fields_::CAPTVAL5> {
    using CAPTVAL5 = typename SM1CVAL5_fields_::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct SM1CVAL5CYC_fields_ {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM1CVAL5CYC_fields_

  struct SM1CVAL5CYC : ftl::mmio::Register<
      kBase + 0xB6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM1CVAL5CYC_fields_::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename SM1CVAL5CYC_fields_::CVAL5CYC;
  };

  // Counter Register
  struct SM2CNT_fields_ {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CNT_fields_

  struct SM2CNT : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CNT_fields_::CNT> {
    using CNT = typename SM2CNT_fields_::CNT;
  };

  // Initial Count Register
  struct SM2INIT_fields_ {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2INIT_fields_

  struct SM2INIT : ftl::mmio::Register<
      kBase + 0xC2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2INIT_fields_::INIT> {
    using INIT = typename SM2INIT_fields_::INIT;
  };

  // Control 2 Register
  struct SM2CTRL2_fields_ {
    enum class eCLK_SEL : std::uint32_t {
      // The IPBus clock is used as the clock for the local prescaler and counter.
      eIPBUS = 0,
      // EXT_CLK is used as the clock for the local prescaler and counter.
      eEXT_CLK = 1,
      // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
      eAUX_CLK = 2,
    };

    enum class eRELOAD_SEL : std::uint32_t {
      // The local RELOAD signal is used to reload registers.
      eLOCAL = 0,
      // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
      eMASTER = 1,
    };

    enum class eFORCE_SEL : std::uint32_t {
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

    enum class eFRCEN : std::uint32_t {
      // Initialization from a FORCE_OUT is disabled.
      eDISABLED = 0,
      // Initialization from a FORCE_OUT is enabled.
      eENABLED = 1,
    };

    enum class eINIT_SEL : std::uint32_t {
      // Local sync (PWM_X) causes initialization.
      ePWM_X = 0,
      // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
      eMASTER_RELOAD = 1,
      // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
      eMASTER_SYNC = 2,
      // EXT_SYNC causes initialization.
      eEXT_SYNC = 3,
    };

    enum class eINDEP : std::uint32_t {
      // PWM_A and PWM_B form a complementary PWM pair.
      eCOMPLEMENTARY = 0,
      // PWM_A and PWM_B outputs are independent PWMs.
      eINDEPENDENT = 1,
    };

    // Clock Source Select
    using CLK_SEL = ftl::mmio::Field<2, 0, eCLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Source Select
    using RELOAD_SEL = ftl::mmio::Field<1, 2, eRELOAD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Select
    using FORCE_SEL = ftl::mmio::Field<3, 3, eFORCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Initialization
    using FORCE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Enable
    using FRCEN = ftl::mmio::Field<1, 7, eFRCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initialization Control Select
    using INIT_SEL = ftl::mmio::Field<2, 8, eINIT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Initial Value
    using PWMX_INIT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM45 Initial Value
    using PWM45_INIT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM23 Initial Value
    using PWM23_INIT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Independent or Complementary Pair Operation
    using INDEP = ftl::mmio::Field<1, 13, eINDEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2CTRL2_fields_

  struct SM2CTRL2 : ftl::mmio::Register<
      kBase + 0xC4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CTRL2_fields_::CLK_SEL,
      typename SM2CTRL2_fields_::RELOAD_SEL,
      typename SM2CTRL2_fields_::FORCE_SEL,
      typename SM2CTRL2_fields_::FORCE,
      typename SM2CTRL2_fields_::FRCEN,
      typename SM2CTRL2_fields_::INIT_SEL,
      typename SM2CTRL2_fields_::PWMX_INIT,
      typename SM2CTRL2_fields_::PWM45_INIT,
      typename SM2CTRL2_fields_::PWM23_INIT,
      typename SM2CTRL2_fields_::INDEP,
      typename SM2CTRL2_fields_::WAITEN,
      typename SM2CTRL2_fields_::DBGEN> {
    using eCLK_SEL = typename SM2CTRL2_fields_::eCLK_SEL;
    using eRELOAD_SEL = typename SM2CTRL2_fields_::eRELOAD_SEL;
    using eFORCE_SEL = typename SM2CTRL2_fields_::eFORCE_SEL;
    using eFRCEN = typename SM2CTRL2_fields_::eFRCEN;
    using eINIT_SEL = typename SM2CTRL2_fields_::eINIT_SEL;
    using eINDEP = typename SM2CTRL2_fields_::eINDEP;
    using CLK_SEL = typename SM2CTRL2_fields_::CLK_SEL;
    using RELOAD_SEL = typename SM2CTRL2_fields_::RELOAD_SEL;
    using FORCE_SEL = typename SM2CTRL2_fields_::FORCE_SEL;
    using FORCE = typename SM2CTRL2_fields_::FORCE;
    using FRCEN = typename SM2CTRL2_fields_::FRCEN;
    using INIT_SEL = typename SM2CTRL2_fields_::INIT_SEL;
    using PWMX_INIT = typename SM2CTRL2_fields_::PWMX_INIT;
    using PWM45_INIT = typename SM2CTRL2_fields_::PWM45_INIT;
    using PWM23_INIT = typename SM2CTRL2_fields_::PWM23_INIT;
    using INDEP = typename SM2CTRL2_fields_::INDEP;
    using WAITEN = typename SM2CTRL2_fields_::WAITEN;
    using DBGEN = typename SM2CTRL2_fields_::DBGEN;
  };

  // Control Register
  struct SM2CTRL_fields_ {
    enum class eDBLEN : std::uint32_t {
      // Double switching disabled.
      eDISABLED = 0,
      // Double switching enabled.
      eENABLED = 1,
    };

    enum class eDBLX : std::uint32_t {
      // PWM_X double pulse disabled.
      eDISABLED = 0,
      // PWM_X double pulse enabled.
      eENABLED = 1,
    };

    enum class eLDMOD : std::uint32_t {
      // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
      eNEXT_PWM_RELOAD = 0,
      // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
      eMTCTRL_LDOK_SET = 1,
    };

    enum class eSPLIT : std::uint32_t {
      // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
      eDISABLED = 0,
      // DBLPWM is split to PWM_A and PWM_B.
      eENABLED = 1,
    };

    enum class ePRSC : std::uint32_t {
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

    enum class eCOMPMODE : std::uint32_t {
      // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
      eEQUAL_TO = 0,
      // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
      eEQUAL_TO_OR_GREATER_THAN = 1,
    };

    enum class eFULL : std::uint32_t {
      // Full-cycle reloads disabled.
      eDISABLED = 0,
      // Full-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eHALF : std::uint32_t {
      // Half-cycle reloads disabled.
      eDISABLED = 0,
      // Half-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eLDFQ : std::uint32_t {
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

    // Double Switching Enable
    using DBLEN = ftl::mmio::Field<1, 0, eDBLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Double Switching Enable
    using DBLX = ftl::mmio::Field<1, 1, eDBLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Mode Select
    using LDMOD = ftl::mmio::Field<1, 2, eLDMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Split the DBLPWM signal to PWM_A and PWM_B
    using SPLIT = ftl::mmio::Field<1, 3, eSPLIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler
    using PRSC = ftl::mmio::Field<3, 4, ePRSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Mode
    using COMPMODE = ftl::mmio::Field<1, 7, eCOMPMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deadtime
    using DT = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Full Cycle Reload
    using FULL = ftl::mmio::Field<1, 10, eFULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Half Cycle Reload
    using HALF = ftl::mmio::Field<1, 11, eHALF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Frequency
    using LDFQ = ftl::mmio::Field<4, 12, eLDFQ, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2CTRL_fields_

  struct SM2CTRL : ftl::mmio::Register<
      kBase + 0xC6u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename SM2CTRL_fields_::DBLEN,
      typename SM2CTRL_fields_::DBLX,
      typename SM2CTRL_fields_::LDMOD,
      typename SM2CTRL_fields_::SPLIT,
      typename SM2CTRL_fields_::PRSC,
      typename SM2CTRL_fields_::COMPMODE,
      typename SM2CTRL_fields_::DT,
      typename SM2CTRL_fields_::FULL,
      typename SM2CTRL_fields_::HALF,
      typename SM2CTRL_fields_::LDFQ> {
    using eDBLEN = typename SM2CTRL_fields_::eDBLEN;
    using eDBLX = typename SM2CTRL_fields_::eDBLX;
    using eLDMOD = typename SM2CTRL_fields_::eLDMOD;
    using eSPLIT = typename SM2CTRL_fields_::eSPLIT;
    using ePRSC = typename SM2CTRL_fields_::ePRSC;
    using eCOMPMODE = typename SM2CTRL_fields_::eCOMPMODE;
    using eFULL = typename SM2CTRL_fields_::eFULL;
    using eHALF = typename SM2CTRL_fields_::eHALF;
    using eLDFQ = typename SM2CTRL_fields_::eLDFQ;
    using DBLEN = typename SM2CTRL_fields_::DBLEN;
    using DBLX = typename SM2CTRL_fields_::DBLX;
    using LDMOD = typename SM2CTRL_fields_::LDMOD;
    using SPLIT = typename SM2CTRL_fields_::SPLIT;
    using PRSC = typename SM2CTRL_fields_::PRSC;
    using COMPMODE = typename SM2CTRL_fields_::COMPMODE;
    using DT = typename SM2CTRL_fields_::DT;
    using FULL = typename SM2CTRL_fields_::FULL;
    using HALF = typename SM2CTRL_fields_::HALF;
    using LDFQ = typename SM2CTRL_fields_::LDFQ;
  };

  // Value Register 0
  struct SM2VAL0_fields_ {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL0_fields_

  struct SM2VAL0 : ftl::mmio::Register<
      kBase + 0xCAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL0_fields_::VAL0> {
    using VAL0 = typename SM2VAL0_fields_::VAL0;
  };

  // Fractional Value Register 1
  struct SM2FRACVAL1_fields_ {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2FRACVAL1_fields_

  struct SM2FRACVAL1 : ftl::mmio::Register<
      kBase + 0xCCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM2FRACVAL1_fields_::FRACVAL1> {
    using FRACVAL1 = typename SM2FRACVAL1_fields_::FRACVAL1;
  };

  // Value Register 1
  struct SM2VAL1_fields_ {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL1_fields_

  struct SM2VAL1 : ftl::mmio::Register<
      kBase + 0xCEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL1_fields_::VAL1> {
    using VAL1 = typename SM2VAL1_fields_::VAL1;
  };

  // Fractional Value Register 2
  struct SM2FRACVAL2_fields_ {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2FRACVAL2_fields_

  struct SM2FRACVAL2 : ftl::mmio::Register<
      kBase + 0xD0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM2FRACVAL2_fields_::FRACVAL2> {
    using FRACVAL2 = typename SM2FRACVAL2_fields_::FRACVAL2;
  };

  // Value Register 2
  struct SM2VAL2_fields_ {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL2_fields_

  struct SM2VAL2 : ftl::mmio::Register<
      kBase + 0xD2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL2_fields_::VAL2> {
    using VAL2 = typename SM2VAL2_fields_::VAL2;
  };

  // Fractional Value Register 3
  struct SM2FRACVAL3_fields_ {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2FRACVAL3_fields_

  struct SM2FRACVAL3 : ftl::mmio::Register<
      kBase + 0xD4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM2FRACVAL3_fields_::FRACVAL3> {
    using FRACVAL3 = typename SM2FRACVAL3_fields_::FRACVAL3;
  };

  // Value Register 3
  struct SM2VAL3_fields_ {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL3_fields_

  struct SM2VAL3 : ftl::mmio::Register<
      kBase + 0xD6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL3_fields_::VAL3> {
    using VAL3 = typename SM2VAL3_fields_::VAL3;
  };

  // Fractional Value Register 4
  struct SM2FRACVAL4_fields_ {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2FRACVAL4_fields_

  struct SM2FRACVAL4 : ftl::mmio::Register<
      kBase + 0xD8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM2FRACVAL4_fields_::FRACVAL4> {
    using FRACVAL4 = typename SM2FRACVAL4_fields_::FRACVAL4;
  };

  // Value Register 4
  struct SM2VAL4_fields_ {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL4_fields_

  struct SM2VAL4 : ftl::mmio::Register<
      kBase + 0xDAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL4_fields_::VAL4> {
    using VAL4 = typename SM2VAL4_fields_::VAL4;
  };

  // Fractional Value Register 5
  struct SM2FRACVAL5_fields_ {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2FRACVAL5_fields_

  struct SM2FRACVAL5 : ftl::mmio::Register<
      kBase + 0xDCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM2FRACVAL5_fields_::FRACVAL5> {
    using FRACVAL5 = typename SM2FRACVAL5_fields_::FRACVAL5;
  };

  // Value Register 5
  struct SM2VAL5_fields_ {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2VAL5_fields_

  struct SM2VAL5 : ftl::mmio::Register<
      kBase + 0xDEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2VAL5_fields_::VAL5> {
    using VAL5 = typename SM2VAL5_fields_::VAL5;
  };

  // Fractional Control Register
  struct SM2FRCTRL_fields_ {
    enum class eFRAC1_EN : std::uint32_t {
      // Disable fractional cycle length for the PWM period.
      eDISABLED = 0,
      // Enable fractional cycle length for the PWM period.
      eENABLED = 1,
    };

    enum class eFRAC23_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_A.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_A.
      eENABLED = 1,
    };

    enum class eFRAC45_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_B.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_B.
      eENABLED = 1,
    };

    // Fractional Cycle PWM Period Enable
    using FRAC1_EN = ftl::mmio::Field<1, 1, eFRAC1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_A
    using FRAC23_EN = ftl::mmio::Field<1, 2, eFRAC23_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_B
    using FRAC45_EN = ftl::mmio::Field<1, 4, eFRAC45_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Status Bit
    using TEST = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2FRCTRL_fields_

  struct SM2FRCTRL : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename SM2FRCTRL_fields_::FRAC1_EN,
      typename SM2FRCTRL_fields_::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename SM2FRCTRL_fields_::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename SM2FRCTRL_fields_::TEST> {
    using eFRAC1_EN = typename SM2FRCTRL_fields_::eFRAC1_EN;
    using eFRAC23_EN = typename SM2FRCTRL_fields_::eFRAC23_EN;
    using eFRAC45_EN = typename SM2FRCTRL_fields_::eFRAC45_EN;
    using FRAC1_EN = typename SM2FRCTRL_fields_::FRAC1_EN;
    using FRAC23_EN = typename SM2FRCTRL_fields_::FRAC23_EN;
    using FRAC45_EN = typename SM2FRCTRL_fields_::FRAC45_EN;
    using TEST = typename SM2FRCTRL_fields_::TEST;
  };

  // Output Control Register
  struct SM2OCTRL_fields_ {
    enum class ePWMXFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMBFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMAFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePOLX : std::uint32_t {
      // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLB : std::uint32_t {
      // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLA : std::uint32_t {
      // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    // PWM_X Fault State
    using PWMXFS = ftl::mmio::Field<2, 0, ePWMXFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault State
    using PWMBFS = ftl::mmio::Field<2, 2, ePWMBFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Fault State
    using PWMAFS = ftl::mmio::Field<2, 4, ePWMAFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Output Polarity
    using POLX = ftl::mmio::Field<1, 8, ePOLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Polarity
    using POLB = ftl::mmio::Field<1, 9, ePOLB, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Polarity
    using POLA = ftl::mmio::Field<1, 10, ePOLA, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Input
    using PWMX_IN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_B Input
    using PWMB_IN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_A Input
    using PWMA_IN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2OCTRL_fields_

  struct SM2OCTRL : ftl::mmio::Register<
      kBase + 0xE2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2OCTRL_fields_::PWMXFS,
      typename SM2OCTRL_fields_::PWMBFS,
      typename SM2OCTRL_fields_::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename SM2OCTRL_fields_::POLX,
      typename SM2OCTRL_fields_::POLB,
      typename SM2OCTRL_fields_::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename SM2OCTRL_fields_::PWMX_IN,
      typename SM2OCTRL_fields_::PWMB_IN,
      typename SM2OCTRL_fields_::PWMA_IN> {
    using ePWMXFS = typename SM2OCTRL_fields_::ePWMXFS;
    using ePWMBFS = typename SM2OCTRL_fields_::ePWMBFS;
    using ePWMAFS = typename SM2OCTRL_fields_::ePWMAFS;
    using ePOLX = typename SM2OCTRL_fields_::ePOLX;
    using ePOLB = typename SM2OCTRL_fields_::ePOLB;
    using ePOLA = typename SM2OCTRL_fields_::ePOLA;
    using PWMXFS = typename SM2OCTRL_fields_::PWMXFS;
    using PWMBFS = typename SM2OCTRL_fields_::PWMBFS;
    using PWMAFS = typename SM2OCTRL_fields_::PWMAFS;
    using POLX = typename SM2OCTRL_fields_::POLX;
    using POLB = typename SM2OCTRL_fields_::POLB;
    using POLA = typename SM2OCTRL_fields_::POLA;
    using PWMX_IN = typename SM2OCTRL_fields_::PWMX_IN;
    using PWMB_IN = typename SM2OCTRL_fields_::PWMB_IN;
    using PWMA_IN = typename SM2OCTRL_fields_::PWMA_IN;
  };

  // Status Register
  struct SM2STS_fields_ {
    enum class eCMPF : std::uint32_t {
      // No compare event has occurred for a particular VALx value.
      eNO_EVENT = 0,
      // A compare event has occurred for a particular VALx value.
      eEVENT = 1,
    };

    enum class eRF : std::uint32_t {
      // No new reload cycle since last STS[RF] clearing
      eNO_FLAG = 0,
      // New reload cycle since last STS[RF] clearing
      eFLAG = 1,
    };

    enum class eREF : std::uint32_t {
      // No reload error occurred.
      eNO_FLAG = 0,
      // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
      eFLAG = 1,
    };

    enum class eRUF : std::uint32_t {
      // No register update has occurred since last reload.
      eNO_FLAG = 0,
      // At least one of the double buffered registers has been updated since the last reload.
      eFLAG = 1,
    };

    // Compare Flags
    using CMPF = ftl::mmio::Field<6, 0, eCMPF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X0
    using CFX0 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X1
    using CFX1 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B0
    using CFB0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B1
    using CFB1 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A0
    using CFA0 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A1
    using CFA1 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Flag
    using RF = ftl::mmio::Field<1, 12, eRF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Error Flag
    using REF = ftl::mmio::Field<1, 13, eREF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Registers Updated Flag
    using RUF = ftl::mmio::Field<1, 14, eRUF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2STS_fields_

  struct SM2STS : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2STS_fields_::CMPF,
      typename SM2STS_fields_::CFX0,
      typename SM2STS_fields_::CFX1,
      typename SM2STS_fields_::CFB0,
      typename SM2STS_fields_::CFB1,
      typename SM2STS_fields_::CFA0,
      typename SM2STS_fields_::CFA1,
      typename SM2STS_fields_::RF,
      typename SM2STS_fields_::REF,
      typename SM2STS_fields_::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename SM2STS_fields_::eCMPF;
    using eRF = typename SM2STS_fields_::eRF;
    using eREF = typename SM2STS_fields_::eREF;
    using eRUF = typename SM2STS_fields_::eRUF;
    using CMPF = typename SM2STS_fields_::CMPF;
    using CFX0 = typename SM2STS_fields_::CFX0;
    using CFX1 = typename SM2STS_fields_::CFX1;
    using CFB0 = typename SM2STS_fields_::CFB0;
    using CFB1 = typename SM2STS_fields_::CFB1;
    using CFA0 = typename SM2STS_fields_::CFA0;
    using CFA1 = typename SM2STS_fields_::CFA1;
    using RF = typename SM2STS_fields_::RF;
    using REF = typename SM2STS_fields_::REF;
    using RUF = typename SM2STS_fields_::RUF;
  };

  // Interrupt Enable Register
  struct SM2INTEN_fields_ {
    enum class eCMPIE : std::uint32_t {
      // The corresponding STS[CMPF] bit will not cause an interrupt request.
      eDISABLED = 0,
      // The corresponding STS[CMPF] bit will cause an interrupt request.
      eENABLED = 1,
    };

    enum class eCX0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX0].
      eENABLED = 1,
    };

    enum class eCX1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX1].
      eENABLED = 1,
    };

    enum class eCB0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB0].
      eENABLED = 1,
    };

    enum class eCB1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB1].
      eENABLED = 1,
    };

    enum class eCA0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA0].
      eENABLED = 1,
    };

    enum class eCA1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA1]
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA1]
      eENABLED = 1,
    };

    enum class eRIE : std::uint32_t {
      // STS[RF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[RF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    enum class eREIE : std::uint32_t {
      // STS[REF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[REF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    // Compare Interrupt Enables
    using CMPIE = ftl::mmio::Field<6, 0, eCMPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 0 Interrupt Enable
    using CX0IE = ftl::mmio::Field<1, 6, eCX0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 1 Interrupt Enable
    using CX1IE = ftl::mmio::Field<1, 7, eCX1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 0 Interrupt Enable
    using CB0IE = ftl::mmio::Field<1, 8, eCB0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 1 Interrupt Enable
    using CB1IE = ftl::mmio::Field<1, 9, eCB1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 0 Interrupt Enable
    using CA0IE = ftl::mmio::Field<1, 10, eCA0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 1 Interrupt Enable
    using CA1IE = ftl::mmio::Field<1, 11, eCA1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Interrupt Enable
    using RIE = ftl::mmio::Field<1, 12, eRIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Error Interrupt Enable
    using REIE = ftl::mmio::Field<1, 13, eREIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2INTEN_fields_

  struct SM2INTEN : ftl::mmio::Register<
      kBase + 0xE6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2INTEN_fields_::CMPIE,
      typename SM2INTEN_fields_::CX0IE,
      typename SM2INTEN_fields_::CX1IE,
      typename SM2INTEN_fields_::CB0IE,
      typename SM2INTEN_fields_::CB1IE,
      typename SM2INTEN_fields_::CA0IE,
      typename SM2INTEN_fields_::CA1IE,
      typename SM2INTEN_fields_::RIE,
      typename SM2INTEN_fields_::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename SM2INTEN_fields_::eCMPIE;
    using eCX0IE = typename SM2INTEN_fields_::eCX0IE;
    using eCX1IE = typename SM2INTEN_fields_::eCX1IE;
    using eCB0IE = typename SM2INTEN_fields_::eCB0IE;
    using eCB1IE = typename SM2INTEN_fields_::eCB1IE;
    using eCA0IE = typename SM2INTEN_fields_::eCA0IE;
    using eCA1IE = typename SM2INTEN_fields_::eCA1IE;
    using eRIE = typename SM2INTEN_fields_::eRIE;
    using eREIE = typename SM2INTEN_fields_::eREIE;
    using CMPIE = typename SM2INTEN_fields_::CMPIE;
    using CX0IE = typename SM2INTEN_fields_::CX0IE;
    using CX1IE = typename SM2INTEN_fields_::CX1IE;
    using CB0IE = typename SM2INTEN_fields_::CB0IE;
    using CB1IE = typename SM2INTEN_fields_::CB1IE;
    using CA0IE = typename SM2INTEN_fields_::CA0IE;
    using CA1IE = typename SM2INTEN_fields_::CA1IE;
    using RIE = typename SM2INTEN_fields_::RIE;
    using REIE = typename SM2INTEN_fields_::REIE;
  };

  // DMA Enable Register
  struct SM2DMAEN_fields_ {
    enum class eCAPTDE : std::uint32_t {
      // Read DMA requests disabled.
      eDISABLED = 0,
      // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
      eEXCEEDFIFO = 1,
      // A local synchronization (VAL1 matches counter) sets the read DMA request.
      eLOCAL_SYNC = 2,
      // A local reload (STS[RF] being set) sets the read DMA request.
      eLOCAL_RELOAD = 3,
    };

    enum class eFAND : std::uint32_t {
      // Selected FIFO watermarks are OR'ed together.
      eOR = 0,
      // Selected FIFO watermarks are AND'ed together.
      eAND = 1,
    };

    enum class eVALDE : std::uint32_t {
      // DMA write requests disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Capture X0 FIFO DMA Enable
    using CX0DE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X1 FIFO DMA Enable
    using CX1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO DMA Enable
    using CB0DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B1 FIFO DMA Enable
    using CB1DE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO DMA Enable
    using CA0DE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A1 FIFO DMA Enable
    using CA1DE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture DMA Enable Source Select
    using CAPTDE = ftl::mmio::Field<2, 6, eCAPTDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Watermark AND Control
    using FAND = ftl::mmio::Field<1, 8, eFAND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Value Registers DMA Enable
    using VALDE = ftl::mmio::Field<1, 9, eVALDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2DMAEN_fields_

  struct SM2DMAEN : ftl::mmio::Register<
      kBase + 0xE8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2DMAEN_fields_::CX0DE,
      typename SM2DMAEN_fields_::CX1DE,
      typename SM2DMAEN_fields_::CB0DE,
      typename SM2DMAEN_fields_::CB1DE,
      typename SM2DMAEN_fields_::CA0DE,
      typename SM2DMAEN_fields_::CA1DE,
      typename SM2DMAEN_fields_::CAPTDE,
      typename SM2DMAEN_fields_::FAND,
      typename SM2DMAEN_fields_::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename SM2DMAEN_fields_::eCAPTDE;
    using eFAND = typename SM2DMAEN_fields_::eFAND;
    using eVALDE = typename SM2DMAEN_fields_::eVALDE;
    using CX0DE = typename SM2DMAEN_fields_::CX0DE;
    using CX1DE = typename SM2DMAEN_fields_::CX1DE;
    using CB0DE = typename SM2DMAEN_fields_::CB0DE;
    using CB1DE = typename SM2DMAEN_fields_::CB1DE;
    using CA0DE = typename SM2DMAEN_fields_::CA0DE;
    using CA1DE = typename SM2DMAEN_fields_::CA1DE;
    using CAPTDE = typename SM2DMAEN_fields_::CAPTDE;
    using FAND = typename SM2DMAEN_fields_::FAND;
    using VALDE = typename SM2DMAEN_fields_::VALDE;
  };

  // Output Trigger Control Register
  struct SM2TCTRL_fields_ {
    enum class eOUT_TRIG_EN : std::uint32_t {
      // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
      eVAL0 = 1,
    };

    enum class eTRGFRQ : std::uint32_t {
      // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eEVERYPWM = 0,
      // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eFINALPWM = 1,
    };

    enum class ePWBOT1 : std::uint32_t {
      // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      ePWM_OUT_TRIG1_SIGNAL = 0,
      // Route the PWM_B output to the PWM_OUT_TRIG1 port.
      ePWMB_OUTPUT = 1,
    };

    enum class ePWAOT0 : std::uint32_t {
      // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      ePWM_OUT_TRIG0_SIGNAL = 0,
      // Route the PWM_A output to the PWM_OUT_TRIG0 port.
      ePWMA_OUTPUT = 1,
    };

    // Output Trigger Enables
    using OUT_TRIG_EN = ftl::mmio::Field<6, 0, eOUT_TRIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Frequency
    using TRGFRQ = ftl::mmio::Field<1, 12, eTRGFRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 1 Source Select
    using PWBOT1 = ftl::mmio::Field<1, 14, ePWBOT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 0 Source Select
    using PWAOT0 = ftl::mmio::Field<1, 15, ePWAOT0, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2TCTRL_fields_

  struct SM2TCTRL : ftl::mmio::Register<
      kBase + 0xEAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2TCTRL_fields_::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename SM2TCTRL_fields_::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename SM2TCTRL_fields_::PWBOT1,
      typename SM2TCTRL_fields_::PWAOT0> {
    using eOUT_TRIG_EN = typename SM2TCTRL_fields_::eOUT_TRIG_EN;
    using eTRGFRQ = typename SM2TCTRL_fields_::eTRGFRQ;
    using ePWBOT1 = typename SM2TCTRL_fields_::ePWBOT1;
    using ePWAOT0 = typename SM2TCTRL_fields_::ePWAOT0;
    using OUT_TRIG_EN = typename SM2TCTRL_fields_::OUT_TRIG_EN;
    using TRGFRQ = typename SM2TCTRL_fields_::TRGFRQ;
    using PWBOT1 = typename SM2TCTRL_fields_::PWBOT1;
    using PWAOT0 = typename SM2TCTRL_fields_::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct SM2DISMAP0_fields_ {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2DISMAP0_fields_

  struct SM2DISMAP0 : ftl::mmio::Register<
      kBase + 0xECu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename SM2DISMAP0_fields_::DIS0A,
      typename SM2DISMAP0_fields_::DIS0B,
      typename SM2DISMAP0_fields_::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename SM2DISMAP0_fields_::DIS0A;
    using DIS0B = typename SM2DISMAP0_fields_::DIS0B;
    using DIS0X = typename SM2DISMAP0_fields_::DIS0X;
  };

  // Deadtime Count Register 0
  struct SM2DTCNT0_fields_ {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2DTCNT0_fields_

  struct SM2DTCNT0 : ftl::mmio::Register<
      kBase + 0xF0u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM2DTCNT0_fields_::DTCNT0> {
    using DTCNT0 = typename SM2DTCNT0_fields_::DTCNT0;
  };

  // Deadtime Count Register 1
  struct SM2DTCNT1_fields_ {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM2DTCNT1_fields_

  struct SM2DTCNT1 : ftl::mmio::Register<
      kBase + 0xF2u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM2DTCNT1_fields_::DTCNT1> {
    using DTCNT1 = typename SM2DTCNT1_fields_::DTCNT1;
  };

  // Capture Control A Register
  struct SM2CAPTCTRLA_fields_ {
    enum class eARMA : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTA : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGA0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGA1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELA : std::uint32_t {
      // Raw PWM_A input signal selected as source.
      ePWM_A = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTA_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm A
    using ARMA = ftl::mmio::Field<1, 0, eARMA, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode A
    using ONESHOTA = ftl::mmio::Field<1, 1, eONESHOTA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 0
    using EDGA0 = ftl::mmio::Field<2, 2, eEDGA0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 1
    using EDGA1 = ftl::mmio::Field<2, 4, eEDGA1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select A
    using INP_SELA = ftl::mmio::Field<1, 6, eINP_SELA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A Enable
    using EDGCNTA_EN = ftl::mmio::Field<1, 7, eEDGCNTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A FIFOs Water Mark
    using CFAWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO Word Count
    using CA0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture A1 FIFO Word Count
    using CA1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCTRLA_fields_

  struct SM2CAPTCTRLA : ftl::mmio::Register<
      kBase + 0xF4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCTRLA_fields_::ARMA,
      typename SM2CAPTCTRLA_fields_::ONESHOTA,
      typename SM2CAPTCTRLA_fields_::EDGA0,
      typename SM2CAPTCTRLA_fields_::EDGA1,
      typename SM2CAPTCTRLA_fields_::INP_SELA,
      typename SM2CAPTCTRLA_fields_::EDGCNTA_EN,
      typename SM2CAPTCTRLA_fields_::CFAWM,
      typename SM2CAPTCTRLA_fields_::CA0CNT,
      typename SM2CAPTCTRLA_fields_::CA1CNT> {
    using eARMA = typename SM2CAPTCTRLA_fields_::eARMA;
    using eONESHOTA = typename SM2CAPTCTRLA_fields_::eONESHOTA;
    using eEDGA0 = typename SM2CAPTCTRLA_fields_::eEDGA0;
    using eEDGA1 = typename SM2CAPTCTRLA_fields_::eEDGA1;
    using eINP_SELA = typename SM2CAPTCTRLA_fields_::eINP_SELA;
    using eEDGCNTA_EN = typename SM2CAPTCTRLA_fields_::eEDGCNTA_EN;
    using ARMA = typename SM2CAPTCTRLA_fields_::ARMA;
    using ONESHOTA = typename SM2CAPTCTRLA_fields_::ONESHOTA;
    using EDGA0 = typename SM2CAPTCTRLA_fields_::EDGA0;
    using EDGA1 = typename SM2CAPTCTRLA_fields_::EDGA1;
    using INP_SELA = typename SM2CAPTCTRLA_fields_::INP_SELA;
    using EDGCNTA_EN = typename SM2CAPTCTRLA_fields_::EDGCNTA_EN;
    using CFAWM = typename SM2CAPTCTRLA_fields_::CFAWM;
    using CA0CNT = typename SM2CAPTCTRLA_fields_::CA0CNT;
    using CA1CNT = typename SM2CAPTCTRLA_fields_::CA1CNT;
  };

  // Capture Compare A Register
  struct SM2CAPTCOMPA_fields_ {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCOMPA_fields_

  struct SM2CAPTCOMPA : ftl::mmio::Register<
      kBase + 0xF6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCOMPA_fields_::EDGCMPA,
      typename SM2CAPTCOMPA_fields_::EDGCNTA> {
    using EDGCMPA = typename SM2CAPTCOMPA_fields_::EDGCMPA;
    using EDGCNTA = typename SM2CAPTCOMPA_fields_::EDGCNTA;
  };

  // Capture Control B Register
  struct SM2CAPTCTRLB_fields_ {
    enum class eARMB : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTB : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGB0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGB1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELB : std::uint32_t {
      // Raw PWM_B input signal selected as source.
      ePWM_B = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTB_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm B
    using ARMB = ftl::mmio::Field<1, 0, eARMB, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode B
    using ONESHOTB = ftl::mmio::Field<1, 1, eONESHOTB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 0
    using EDGB0 = ftl::mmio::Field<2, 2, eEDGB0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 1
    using EDGB1 = ftl::mmio::Field<2, 4, eEDGB1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select B
    using INP_SELB = ftl::mmio::Field<1, 6, eINP_SELB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B Enable
    using EDGCNTB_EN = ftl::mmio::Field<1, 7, eEDGCNTB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B FIFOs Water Mark
    using CFBWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO Word Count
    using CB0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture B1 FIFO Word Count
    using CB1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCTRLB_fields_

  struct SM2CAPTCTRLB : ftl::mmio::Register<
      kBase + 0xF8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCTRLB_fields_::ARMB,
      typename SM2CAPTCTRLB_fields_::ONESHOTB,
      typename SM2CAPTCTRLB_fields_::EDGB0,
      typename SM2CAPTCTRLB_fields_::EDGB1,
      typename SM2CAPTCTRLB_fields_::INP_SELB,
      typename SM2CAPTCTRLB_fields_::EDGCNTB_EN,
      typename SM2CAPTCTRLB_fields_::CFBWM,
      typename SM2CAPTCTRLB_fields_::CB0CNT,
      typename SM2CAPTCTRLB_fields_::CB1CNT> {
    using eARMB = typename SM2CAPTCTRLB_fields_::eARMB;
    using eONESHOTB = typename SM2CAPTCTRLB_fields_::eONESHOTB;
    using eEDGB0 = typename SM2CAPTCTRLB_fields_::eEDGB0;
    using eEDGB1 = typename SM2CAPTCTRLB_fields_::eEDGB1;
    using eINP_SELB = typename SM2CAPTCTRLB_fields_::eINP_SELB;
    using eEDGCNTB_EN = typename SM2CAPTCTRLB_fields_::eEDGCNTB_EN;
    using ARMB = typename SM2CAPTCTRLB_fields_::ARMB;
    using ONESHOTB = typename SM2CAPTCTRLB_fields_::ONESHOTB;
    using EDGB0 = typename SM2CAPTCTRLB_fields_::EDGB0;
    using EDGB1 = typename SM2CAPTCTRLB_fields_::EDGB1;
    using INP_SELB = typename SM2CAPTCTRLB_fields_::INP_SELB;
    using EDGCNTB_EN = typename SM2CAPTCTRLB_fields_::EDGCNTB_EN;
    using CFBWM = typename SM2CAPTCTRLB_fields_::CFBWM;
    using CB0CNT = typename SM2CAPTCTRLB_fields_::CB0CNT;
    using CB1CNT = typename SM2CAPTCTRLB_fields_::CB1CNT;
  };

  // Capture Compare B Register
  struct SM2CAPTCOMPB_fields_ {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCOMPB_fields_

  struct SM2CAPTCOMPB : ftl::mmio::Register<
      kBase + 0xFAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCOMPB_fields_::EDGCMPB,
      typename SM2CAPTCOMPB_fields_::EDGCNTB> {
    using EDGCMPB = typename SM2CAPTCOMPB_fields_::EDGCMPB;
    using EDGCNTB = typename SM2CAPTCOMPB_fields_::EDGCNTB;
  };

  // Capture Control X Register
  struct SM2CAPTCTRLX_fields_ {
    enum class eARMX : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTX : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGX0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGX1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELX : std::uint32_t {
      // Raw PWM_X input signal selected as source.
      ePWM_X = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTX_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm X
    using ARMX = ftl::mmio::Field<1, 0, eARMX, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode Aux
    using ONESHOTX = ftl::mmio::Field<1, 1, eONESHOTX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 0
    using EDGX0 = ftl::mmio::Field<2, 2, eEDGX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 1
    using EDGX1 = ftl::mmio::Field<2, 4, eEDGX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select X
    using INP_SELX = ftl::mmio::Field<1, 6, eINP_SELX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X Enable
    using EDGCNTX_EN = ftl::mmio::Field<1, 7, eEDGCNTX_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X FIFOs Water Mark
    using CFXWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X0 FIFO Word Count
    using CX0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture X1 FIFO Word Count
    using CX1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCTRLX_fields_

  struct SM2CAPTCTRLX : ftl::mmio::Register<
      kBase + 0xFCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCTRLX_fields_::ARMX,
      typename SM2CAPTCTRLX_fields_::ONESHOTX,
      typename SM2CAPTCTRLX_fields_::EDGX0,
      typename SM2CAPTCTRLX_fields_::EDGX1,
      typename SM2CAPTCTRLX_fields_::INP_SELX,
      typename SM2CAPTCTRLX_fields_::EDGCNTX_EN,
      typename SM2CAPTCTRLX_fields_::CFXWM,
      typename SM2CAPTCTRLX_fields_::CX0CNT,
      typename SM2CAPTCTRLX_fields_::CX1CNT> {
    using eARMX = typename SM2CAPTCTRLX_fields_::eARMX;
    using eONESHOTX = typename SM2CAPTCTRLX_fields_::eONESHOTX;
    using eEDGX0 = typename SM2CAPTCTRLX_fields_::eEDGX0;
    using eEDGX1 = typename SM2CAPTCTRLX_fields_::eEDGX1;
    using eINP_SELX = typename SM2CAPTCTRLX_fields_::eINP_SELX;
    using eEDGCNTX_EN = typename SM2CAPTCTRLX_fields_::eEDGCNTX_EN;
    using ARMX = typename SM2CAPTCTRLX_fields_::ARMX;
    using ONESHOTX = typename SM2CAPTCTRLX_fields_::ONESHOTX;
    using EDGX0 = typename SM2CAPTCTRLX_fields_::EDGX0;
    using EDGX1 = typename SM2CAPTCTRLX_fields_::EDGX1;
    using INP_SELX = typename SM2CAPTCTRLX_fields_::INP_SELX;
    using EDGCNTX_EN = typename SM2CAPTCTRLX_fields_::EDGCNTX_EN;
    using CFXWM = typename SM2CAPTCTRLX_fields_::CFXWM;
    using CX0CNT = typename SM2CAPTCTRLX_fields_::CX0CNT;
    using CX1CNT = typename SM2CAPTCTRLX_fields_::CX1CNT;
  };

  // Capture Compare X Register
  struct SM2CAPTCOMPX_fields_ {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CAPTCOMPX_fields_

  struct SM2CAPTCOMPX : ftl::mmio::Register<
      kBase + 0xFEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM2CAPTCOMPX_fields_::EDGCMPX,
      typename SM2CAPTCOMPX_fields_::EDGCNTX> {
    using EDGCMPX = typename SM2CAPTCOMPX_fields_::EDGCMPX;
    using EDGCNTX = typename SM2CAPTCOMPX_fields_::EDGCNTX;
  };

  // Capture Value 0 Register
  struct SM2CVAL0_fields_ {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL0_fields_

  struct SM2CVAL0 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL0_fields_::CAPTVAL0> {
    using CAPTVAL0 = typename SM2CVAL0_fields_::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct SM2CVAL0CYC_fields_ {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL0CYC_fields_

  struct SM2CVAL0CYC : ftl::mmio::Register<
      kBase + 0x102u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL0CYC_fields_::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename SM2CVAL0CYC_fields_::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct SM2CVAL1_fields_ {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL1_fields_

  struct SM2CVAL1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL1_fields_::CAPTVAL1> {
    using CAPTVAL1 = typename SM2CVAL1_fields_::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct SM2CVAL1CYC_fields_ {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL1CYC_fields_

  struct SM2CVAL1CYC : ftl::mmio::Register<
      kBase + 0x106u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL1CYC_fields_::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename SM2CVAL1CYC_fields_::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct SM2CVAL2_fields_ {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL2_fields_

  struct SM2CVAL2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL2_fields_::CAPTVAL2> {
    using CAPTVAL2 = typename SM2CVAL2_fields_::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct SM2CVAL2CYC_fields_ {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL2CYC_fields_

  struct SM2CVAL2CYC : ftl::mmio::Register<
      kBase + 0x10Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL2CYC_fields_::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename SM2CVAL2CYC_fields_::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct SM2CVAL3_fields_ {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL3_fields_

  struct SM2CVAL3 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL3_fields_::CAPTVAL3> {
    using CAPTVAL3 = typename SM2CVAL3_fields_::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct SM2CVAL3CYC_fields_ {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL3CYC_fields_

  struct SM2CVAL3CYC : ftl::mmio::Register<
      kBase + 0x10Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL3CYC_fields_::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename SM2CVAL3CYC_fields_::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct SM2CVAL4_fields_ {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL4_fields_

  struct SM2CVAL4 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL4_fields_::CAPTVAL4> {
    using CAPTVAL4 = typename SM2CVAL4_fields_::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct SM2CVAL4CYC_fields_ {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL4CYC_fields_

  struct SM2CVAL4CYC : ftl::mmio::Register<
      kBase + 0x112u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL4CYC_fields_::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename SM2CVAL4CYC_fields_::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct SM2CVAL5_fields_ {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL5_fields_

  struct SM2CVAL5 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL5_fields_::CAPTVAL5> {
    using CAPTVAL5 = typename SM2CVAL5_fields_::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct SM2CVAL5CYC_fields_ {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM2CVAL5CYC_fields_

  struct SM2CVAL5CYC : ftl::mmio::Register<
      kBase + 0x116u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM2CVAL5CYC_fields_::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename SM2CVAL5CYC_fields_::CVAL5CYC;
  };

  // Counter Register
  struct SM3CNT_fields_ {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CNT_fields_

  struct SM3CNT : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CNT_fields_::CNT> {
    using CNT = typename SM3CNT_fields_::CNT;
  };

  // Initial Count Register
  struct SM3INIT_fields_ {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3INIT_fields_

  struct SM3INIT : ftl::mmio::Register<
      kBase + 0x122u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3INIT_fields_::INIT> {
    using INIT = typename SM3INIT_fields_::INIT;
  };

  // Control 2 Register
  struct SM3CTRL2_fields_ {
    enum class eCLK_SEL : std::uint32_t {
      // The IPBus clock is used as the clock for the local prescaler and counter.
      eIPBUS = 0,
      // EXT_CLK is used as the clock for the local prescaler and counter.
      eEXT_CLK = 1,
      // Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it forces the clock to logic 0.
      eAUX_CLK = 2,
    };

    enum class eRELOAD_SEL : std::uint32_t {
      // The local RELOAD signal is used to reload registers.
      eLOCAL = 0,
      // The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it forces the RELOAD signal to logic 0.
      eMASTER = 1,
    };

    enum class eFORCE_SEL : std::uint32_t {
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

    enum class eFRCEN : std::uint32_t {
      // Initialization from a FORCE_OUT is disabled.
      eDISABLED = 0,
      // Initialization from a FORCE_OUT is enabled.
      eENABLED = 1,
    };

    enum class eINIT_SEL : std::uint32_t {
      // Local sync (PWM_X) causes initialization.
      ePWM_X = 0,
      // Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0. The submodule counter will only re-initialize when a master reload occurs.
      eMASTER_RELOAD = 1,
      // Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it forces the INIT signal to logic 0.
      eMASTER_SYNC = 2,
      // EXT_SYNC causes initialization.
      eEXT_SYNC = 3,
    };

    enum class eINDEP : std::uint32_t {
      // PWM_A and PWM_B form a complementary PWM pair.
      eCOMPLEMENTARY = 0,
      // PWM_A and PWM_B outputs are independent PWMs.
      eINDEPENDENT = 1,
    };

    // Clock Source Select
    using CLK_SEL = ftl::mmio::Field<2, 0, eCLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Source Select
    using RELOAD_SEL = ftl::mmio::Field<1, 2, eRELOAD_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Select
    using FORCE_SEL = ftl::mmio::Field<3, 3, eFORCE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Initialization
    using FORCE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force Enable
    using FRCEN = ftl::mmio::Field<1, 7, eFRCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initialization Control Select
    using INIT_SEL = ftl::mmio::Field<2, 8, eINIT_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Initial Value
    using PWMX_INIT = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM45 Initial Value
    using PWM45_INIT = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM23 Initial Value
    using PWM23_INIT = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Independent or Complementary Pair Operation
    using INDEP = ftl::mmio::Field<1, 13, eINDEP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wait Enable
    using WAITEN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGEN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3CTRL2_fields_

  struct SM3CTRL2 : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CTRL2_fields_::CLK_SEL,
      typename SM3CTRL2_fields_::RELOAD_SEL,
      typename SM3CTRL2_fields_::FORCE_SEL,
      typename SM3CTRL2_fields_::FORCE,
      typename SM3CTRL2_fields_::FRCEN,
      typename SM3CTRL2_fields_::INIT_SEL,
      typename SM3CTRL2_fields_::PWMX_INIT,
      typename SM3CTRL2_fields_::PWM45_INIT,
      typename SM3CTRL2_fields_::PWM23_INIT,
      typename SM3CTRL2_fields_::INDEP,
      typename SM3CTRL2_fields_::WAITEN,
      typename SM3CTRL2_fields_::DBGEN> {
    using eCLK_SEL = typename SM3CTRL2_fields_::eCLK_SEL;
    using eRELOAD_SEL = typename SM3CTRL2_fields_::eRELOAD_SEL;
    using eFORCE_SEL = typename SM3CTRL2_fields_::eFORCE_SEL;
    using eFRCEN = typename SM3CTRL2_fields_::eFRCEN;
    using eINIT_SEL = typename SM3CTRL2_fields_::eINIT_SEL;
    using eINDEP = typename SM3CTRL2_fields_::eINDEP;
    using CLK_SEL = typename SM3CTRL2_fields_::CLK_SEL;
    using RELOAD_SEL = typename SM3CTRL2_fields_::RELOAD_SEL;
    using FORCE_SEL = typename SM3CTRL2_fields_::FORCE_SEL;
    using FORCE = typename SM3CTRL2_fields_::FORCE;
    using FRCEN = typename SM3CTRL2_fields_::FRCEN;
    using INIT_SEL = typename SM3CTRL2_fields_::INIT_SEL;
    using PWMX_INIT = typename SM3CTRL2_fields_::PWMX_INIT;
    using PWM45_INIT = typename SM3CTRL2_fields_::PWM45_INIT;
    using PWM23_INIT = typename SM3CTRL2_fields_::PWM23_INIT;
    using INDEP = typename SM3CTRL2_fields_::INDEP;
    using WAITEN = typename SM3CTRL2_fields_::WAITEN;
    using DBGEN = typename SM3CTRL2_fields_::DBGEN;
  };

  // Control Register
  struct SM3CTRL_fields_ {
    enum class eDBLEN : std::uint32_t {
      // Double switching disabled.
      eDISABLED = 0,
      // Double switching enabled.
      eENABLED = 1,
    };

    enum class eDBLX : std::uint32_t {
      // PWM_X double pulse disabled.
      eDISABLED = 0,
      // PWM_X double pulse enabled.
      eENABLED = 1,
    };

    enum class eLDMOD : std::uint32_t {
      // Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
      eNEXT_PWM_RELOAD = 0,
      // Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case, it is not necessary to set CTRL[FULL] or CTRL[HALF].
      eMTCTRL_LDOK_SET = 1,
    };

    enum class eSPLIT : std::uint32_t {
      // DBLPWM is not split. PWM_A and PWM_B each have double pulses.
      eDISABLED = 0,
      // DBLPWM is split to PWM_A and PWM_B.
      eENABLED = 1,
    };

    enum class ePRSC : std::uint32_t {
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

    enum class eCOMPMODE : std::uint32_t {
      // The VAL* registers and the PWM counter are compared using an "equal to" method. This means that PWM edges are only produced when the counter is equal to one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period maintains this state until a match with VAL3 clears the output in the following period.
      eEQUAL_TO = 0,
      // The VAL* registers and the PWM counter are compared using an "equal to or greater than" method. This means that PWM edges are produced when the counter is equal to or greater than one of the VAL* register values. This implies that a PWM_A output that is high at the end of a period could go low at the start of the next period if the starting counter value is greater than (but not necessarily equal to) the new VAL3 value.
      eEQUAL_TO_OR_GREATER_THAN = 1,
    };

    enum class eFULL : std::uint32_t {
      // Full-cycle reloads disabled.
      eDISABLED = 0,
      // Full-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eHALF : std::uint32_t {
      // Half-cycle reloads disabled.
      eDISABLED = 0,
      // Half-cycle reloads enabled.
      eENABLED = 1,
    };

    enum class eLDFQ : std::uint32_t {
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

    // Double Switching Enable
    using DBLEN = ftl::mmio::Field<1, 0, eDBLEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Double Switching Enable
    using DBLX = ftl::mmio::Field<1, 1, eDBLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Mode Select
    using LDMOD = ftl::mmio::Field<1, 2, eLDMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Split the DBLPWM signal to PWM_A and PWM_B
    using SPLIT = ftl::mmio::Field<1, 3, eSPLIT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler
    using PRSC = ftl::mmio::Field<3, 4, ePRSC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Mode
    using COMPMODE = ftl::mmio::Field<1, 7, eCOMPMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Deadtime
    using DT = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Full Cycle Reload
    using FULL = ftl::mmio::Field<1, 10, eFULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Half Cycle Reload
    using HALF = ftl::mmio::Field<1, 11, eHALF, ftl::mmio::RW, ftl::mmio::Normal>;
    // Load Frequency
    using LDFQ = ftl::mmio::Field<4, 12, eLDFQ, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3CTRL_fields_

  struct SM3CTRL : ftl::mmio::Register<
      kBase + 0x126u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename SM3CTRL_fields_::DBLEN,
      typename SM3CTRL_fields_::DBLX,
      typename SM3CTRL_fields_::LDMOD,
      typename SM3CTRL_fields_::SPLIT,
      typename SM3CTRL_fields_::PRSC,
      typename SM3CTRL_fields_::COMPMODE,
      typename SM3CTRL_fields_::DT,
      typename SM3CTRL_fields_::FULL,
      typename SM3CTRL_fields_::HALF,
      typename SM3CTRL_fields_::LDFQ> {
    using eDBLEN = typename SM3CTRL_fields_::eDBLEN;
    using eDBLX = typename SM3CTRL_fields_::eDBLX;
    using eLDMOD = typename SM3CTRL_fields_::eLDMOD;
    using eSPLIT = typename SM3CTRL_fields_::eSPLIT;
    using ePRSC = typename SM3CTRL_fields_::ePRSC;
    using eCOMPMODE = typename SM3CTRL_fields_::eCOMPMODE;
    using eFULL = typename SM3CTRL_fields_::eFULL;
    using eHALF = typename SM3CTRL_fields_::eHALF;
    using eLDFQ = typename SM3CTRL_fields_::eLDFQ;
    using DBLEN = typename SM3CTRL_fields_::DBLEN;
    using DBLX = typename SM3CTRL_fields_::DBLX;
    using LDMOD = typename SM3CTRL_fields_::LDMOD;
    using SPLIT = typename SM3CTRL_fields_::SPLIT;
    using PRSC = typename SM3CTRL_fields_::PRSC;
    using COMPMODE = typename SM3CTRL_fields_::COMPMODE;
    using DT = typename SM3CTRL_fields_::DT;
    using FULL = typename SM3CTRL_fields_::FULL;
    using HALF = typename SM3CTRL_fields_::HALF;
    using LDFQ = typename SM3CTRL_fields_::LDFQ;
  };

  // Value Register 0
  struct SM3VAL0_fields_ {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL0_fields_

  struct SM3VAL0 : ftl::mmio::Register<
      kBase + 0x12Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL0_fields_::VAL0> {
    using VAL0 = typename SM3VAL0_fields_::VAL0;
  };

  // Fractional Value Register 1
  struct SM3FRACVAL1_fields_ {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3FRACVAL1_fields_

  struct SM3FRACVAL1 : ftl::mmio::Register<
      kBase + 0x12Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM3FRACVAL1_fields_::FRACVAL1> {
    using FRACVAL1 = typename SM3FRACVAL1_fields_::FRACVAL1;
  };

  // Value Register 1
  struct SM3VAL1_fields_ {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL1_fields_

  struct SM3VAL1 : ftl::mmio::Register<
      kBase + 0x12Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL1_fields_::VAL1> {
    using VAL1 = typename SM3VAL1_fields_::VAL1;
  };

  // Fractional Value Register 2
  struct SM3FRACVAL2_fields_ {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3FRACVAL2_fields_

  struct SM3FRACVAL2 : ftl::mmio::Register<
      kBase + 0x130u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM3FRACVAL2_fields_::FRACVAL2> {
    using FRACVAL2 = typename SM3FRACVAL2_fields_::FRACVAL2;
  };

  // Value Register 2
  struct SM3VAL2_fields_ {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL2_fields_

  struct SM3VAL2 : ftl::mmio::Register<
      kBase + 0x132u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL2_fields_::VAL2> {
    using VAL2 = typename SM3VAL2_fields_::VAL2;
  };

  // Fractional Value Register 3
  struct SM3FRACVAL3_fields_ {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3FRACVAL3_fields_

  struct SM3FRACVAL3 : ftl::mmio::Register<
      kBase + 0x134u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM3FRACVAL3_fields_::FRACVAL3> {
    using FRACVAL3 = typename SM3FRACVAL3_fields_::FRACVAL3;
  };

  // Value Register 3
  struct SM3VAL3_fields_ {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL3_fields_

  struct SM3VAL3 : ftl::mmio::Register<
      kBase + 0x136u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL3_fields_::VAL3> {
    using VAL3 = typename SM3VAL3_fields_::VAL3;
  };

  // Fractional Value Register 4
  struct SM3FRACVAL4_fields_ {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3FRACVAL4_fields_

  struct SM3FRACVAL4 : ftl::mmio::Register<
      kBase + 0x138u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM3FRACVAL4_fields_::FRACVAL4> {
    using FRACVAL4 = typename SM3FRACVAL4_fields_::FRACVAL4;
  };

  // Value Register 4
  struct SM3VAL4_fields_ {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL4_fields_

  struct SM3VAL4 : ftl::mmio::Register<
      kBase + 0x13Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL4_fields_::VAL4> {
    using VAL4 = typename SM3VAL4_fields_::VAL4;
  };

  // Fractional Value Register 5
  struct SM3FRACVAL5_fields_ {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3FRACVAL5_fields_

  struct SM3FRACVAL5 : ftl::mmio::Register<
      kBase + 0x13Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename SM3FRACVAL5_fields_::FRACVAL5> {
    using FRACVAL5 = typename SM3FRACVAL5_fields_::FRACVAL5;
  };

  // Value Register 5
  struct SM3VAL5_fields_ {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3VAL5_fields_

  struct SM3VAL5 : ftl::mmio::Register<
      kBase + 0x13Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3VAL5_fields_::VAL5> {
    using VAL5 = typename SM3VAL5_fields_::VAL5;
  };

  // Fractional Control Register
  struct SM3FRCTRL_fields_ {
    enum class eFRAC1_EN : std::uint32_t {
      // Disable fractional cycle length for the PWM period.
      eDISABLED = 0,
      // Enable fractional cycle length for the PWM period.
      eENABLED = 1,
    };

    enum class eFRAC23_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_A.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_A.
      eENABLED = 1,
    };

    enum class eFRAC45_EN : std::uint32_t {
      // Disable fractional cycle placement for PWM_B.
      eDISABLED = 0,
      // Enable fractional cycle placement for PWM_B.
      eENABLED = 1,
    };

    // Fractional Cycle PWM Period Enable
    using FRAC1_EN = ftl::mmio::Field<1, 1, eFRAC1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_A
    using FRAC23_EN = ftl::mmio::Field<1, 2, eFRAC23_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fractional Cycle Placement Enable for PWM_B
    using FRAC45_EN = ftl::mmio::Field<1, 4, eFRAC45_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Status Bit
    using TEST = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3FRCTRL_fields_

  struct SM3FRCTRL : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename SM3FRCTRL_fields_::FRAC1_EN,
      typename SM3FRCTRL_fields_::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename SM3FRCTRL_fields_::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename SM3FRCTRL_fields_::TEST> {
    using eFRAC1_EN = typename SM3FRCTRL_fields_::eFRAC1_EN;
    using eFRAC23_EN = typename SM3FRCTRL_fields_::eFRAC23_EN;
    using eFRAC45_EN = typename SM3FRCTRL_fields_::eFRAC45_EN;
    using FRAC1_EN = typename SM3FRCTRL_fields_::FRAC1_EN;
    using FRAC23_EN = typename SM3FRCTRL_fields_::FRAC23_EN;
    using FRAC45_EN = typename SM3FRCTRL_fields_::FRAC45_EN;
    using TEST = typename SM3FRCTRL_fields_::TEST;
  };

  // Output Control Register
  struct SM3OCTRL_fields_ {
    enum class ePWMXFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMBFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePWMAFS : std::uint32_t {
      // Output is forced to logic 0 state prior to consideration of output polarity control.
      eLOGIC_0 = 0,
      // Output is forced to logic 1 state prior to consideration of output polarity control.
      eLOGIC_1 = 1,
      // Output is put in a high-impedance state.
      eTRISTATED_2 = 2,
      // Output is put in a high-impedance state.
      eTRISTATED_3 = 3,
    };

    enum class ePOLX : std::uint32_t {
      // PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLB : std::uint32_t {
      // PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    enum class ePOLA : std::uint32_t {
      // PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
      eNOT_INVERTED = 0,
      // PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
      eINVERTED = 1,
    };

    // PWM_X Fault State
    using PWMXFS = ftl::mmio::Field<2, 0, ePWMXFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault State
    using PWMBFS = ftl::mmio::Field<2, 2, ePWMBFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Fault State
    using PWMAFS = ftl::mmio::Field<2, 4, ePWMAFS, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Output Polarity
    using POLX = ftl::mmio::Field<1, 8, ePOLX, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Polarity
    using POLB = ftl::mmio::Field<1, 9, ePOLB, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Polarity
    using POLA = ftl::mmio::Field<1, 10, ePOLA, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Input
    using PWMX_IN = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_B Input
    using PWMB_IN = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PWM_A Input
    using PWMA_IN = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3OCTRL_fields_

  struct SM3OCTRL : ftl::mmio::Register<
      kBase + 0x142u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3OCTRL_fields_::PWMXFS,
      typename SM3OCTRL_fields_::PWMBFS,
      typename SM3OCTRL_fields_::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename SM3OCTRL_fields_::POLX,
      typename SM3OCTRL_fields_::POLB,
      typename SM3OCTRL_fields_::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename SM3OCTRL_fields_::PWMX_IN,
      typename SM3OCTRL_fields_::PWMB_IN,
      typename SM3OCTRL_fields_::PWMA_IN> {
    using ePWMXFS = typename SM3OCTRL_fields_::ePWMXFS;
    using ePWMBFS = typename SM3OCTRL_fields_::ePWMBFS;
    using ePWMAFS = typename SM3OCTRL_fields_::ePWMAFS;
    using ePOLX = typename SM3OCTRL_fields_::ePOLX;
    using ePOLB = typename SM3OCTRL_fields_::ePOLB;
    using ePOLA = typename SM3OCTRL_fields_::ePOLA;
    using PWMXFS = typename SM3OCTRL_fields_::PWMXFS;
    using PWMBFS = typename SM3OCTRL_fields_::PWMBFS;
    using PWMAFS = typename SM3OCTRL_fields_::PWMAFS;
    using POLX = typename SM3OCTRL_fields_::POLX;
    using POLB = typename SM3OCTRL_fields_::POLB;
    using POLA = typename SM3OCTRL_fields_::POLA;
    using PWMX_IN = typename SM3OCTRL_fields_::PWMX_IN;
    using PWMB_IN = typename SM3OCTRL_fields_::PWMB_IN;
    using PWMA_IN = typename SM3OCTRL_fields_::PWMA_IN;
  };

  // Status Register
  struct SM3STS_fields_ {
    enum class eCMPF : std::uint32_t {
      // No compare event has occurred for a particular VALx value.
      eNO_EVENT = 0,
      // A compare event has occurred for a particular VALx value.
      eEVENT = 1,
    };

    enum class eRF : std::uint32_t {
      // No new reload cycle since last STS[RF] clearing
      eNO_FLAG = 0,
      // New reload cycle since last STS[RF] clearing
      eFLAG = 1,
    };

    enum class eREF : std::uint32_t {
      // No reload error occurred.
      eNO_FLAG = 0,
      // Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
      eFLAG = 1,
    };

    enum class eRUF : std::uint32_t {
      // No register update has occurred since last reload.
      eNO_FLAG = 0,
      // At least one of the double buffered registers has been updated since the last reload.
      eFLAG = 1,
    };

    // Compare Flags
    using CMPF = ftl::mmio::Field<6, 0, eCMPF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X0
    using CFX0 = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag X1
    using CFX1 = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B0
    using CFB0 = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag B1
    using CFB1 = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A0
    using CFA0 = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Capture Flag A1
    using CFA1 = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Flag
    using RF = ftl::mmio::Field<1, 12, eRF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Error Flag
    using REF = ftl::mmio::Field<1, 13, eREF, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Registers Updated Flag
    using RUF = ftl::mmio::Field<1, 14, eRUF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3STS_fields_

  struct SM3STS : ftl::mmio::Register<
      kBase + 0x144u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3STS_fields_::CMPF,
      typename SM3STS_fields_::CFX0,
      typename SM3STS_fields_::CFX1,
      typename SM3STS_fields_::CFB0,
      typename SM3STS_fields_::CFB1,
      typename SM3STS_fields_::CFA0,
      typename SM3STS_fields_::CFA1,
      typename SM3STS_fields_::RF,
      typename SM3STS_fields_::REF,
      typename SM3STS_fields_::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename SM3STS_fields_::eCMPF;
    using eRF = typename SM3STS_fields_::eRF;
    using eREF = typename SM3STS_fields_::eREF;
    using eRUF = typename SM3STS_fields_::eRUF;
    using CMPF = typename SM3STS_fields_::CMPF;
    using CFX0 = typename SM3STS_fields_::CFX0;
    using CFX1 = typename SM3STS_fields_::CFX1;
    using CFB0 = typename SM3STS_fields_::CFB0;
    using CFB1 = typename SM3STS_fields_::CFB1;
    using CFA0 = typename SM3STS_fields_::CFA0;
    using CFA1 = typename SM3STS_fields_::CFA1;
    using RF = typename SM3STS_fields_::RF;
    using REF = typename SM3STS_fields_::REF;
    using RUF = typename SM3STS_fields_::RUF;
  };

  // Interrupt Enable Register
  struct SM3INTEN_fields_ {
    enum class eCMPIE : std::uint32_t {
      // The corresponding STS[CMPF] bit will not cause an interrupt request.
      eDISABLED = 0,
      // The corresponding STS[CMPF] bit will cause an interrupt request.
      eENABLED = 1,
    };

    enum class eCX0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX0].
      eENABLED = 1,
    };

    enum class eCX1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFX1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFX1].
      eENABLED = 1,
    };

    enum class eCB0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB0].
      eENABLED = 1,
    };

    enum class eCB1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFB1].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFB1].
      eENABLED = 1,
    };

    enum class eCA0IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA0].
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA0].
      eENABLED = 1,
    };

    enum class eCA1IE : std::uint32_t {
      // Interrupt request disabled for STS[CFA1]
      eDISABLED = 0,
      // Interrupt request enabled for STS[CFA1]
      eENABLED = 1,
    };

    enum class eRIE : std::uint32_t {
      // STS[RF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[RF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    enum class eREIE : std::uint32_t {
      // STS[REF] CPU interrupt requests disabled
      eDISABLED = 0,
      // STS[REF] CPU interrupt requests enabled
      eENABLED = 1,
    };

    // Compare Interrupt Enables
    using CMPIE = ftl::mmio::Field<6, 0, eCMPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 0 Interrupt Enable
    using CX0IE = ftl::mmio::Field<1, 6, eCX0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X 1 Interrupt Enable
    using CX1IE = ftl::mmio::Field<1, 7, eCX1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 0 Interrupt Enable
    using CB0IE = ftl::mmio::Field<1, 8, eCB0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B 1 Interrupt Enable
    using CB1IE = ftl::mmio::Field<1, 9, eCB1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 0 Interrupt Enable
    using CA0IE = ftl::mmio::Field<1, 10, eCA0IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A 1 Interrupt Enable
    using CA1IE = ftl::mmio::Field<1, 11, eCA1IE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Interrupt Enable
    using RIE = ftl::mmio::Field<1, 12, eRIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Error Interrupt Enable
    using REIE = ftl::mmio::Field<1, 13, eREIE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3INTEN_fields_

  struct SM3INTEN : ftl::mmio::Register<
      kBase + 0x146u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3INTEN_fields_::CMPIE,
      typename SM3INTEN_fields_::CX0IE,
      typename SM3INTEN_fields_::CX1IE,
      typename SM3INTEN_fields_::CB0IE,
      typename SM3INTEN_fields_::CB1IE,
      typename SM3INTEN_fields_::CA0IE,
      typename SM3INTEN_fields_::CA1IE,
      typename SM3INTEN_fields_::RIE,
      typename SM3INTEN_fields_::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename SM3INTEN_fields_::eCMPIE;
    using eCX0IE = typename SM3INTEN_fields_::eCX0IE;
    using eCX1IE = typename SM3INTEN_fields_::eCX1IE;
    using eCB0IE = typename SM3INTEN_fields_::eCB0IE;
    using eCB1IE = typename SM3INTEN_fields_::eCB1IE;
    using eCA0IE = typename SM3INTEN_fields_::eCA0IE;
    using eCA1IE = typename SM3INTEN_fields_::eCA1IE;
    using eRIE = typename SM3INTEN_fields_::eRIE;
    using eREIE = typename SM3INTEN_fields_::eREIE;
    using CMPIE = typename SM3INTEN_fields_::CMPIE;
    using CX0IE = typename SM3INTEN_fields_::CX0IE;
    using CX1IE = typename SM3INTEN_fields_::CX1IE;
    using CB0IE = typename SM3INTEN_fields_::CB0IE;
    using CB1IE = typename SM3INTEN_fields_::CB1IE;
    using CA0IE = typename SM3INTEN_fields_::CA0IE;
    using CA1IE = typename SM3INTEN_fields_::CA1IE;
    using RIE = typename SM3INTEN_fields_::RIE;
    using REIE = typename SM3INTEN_fields_::REIE;
  };

  // DMA Enable Register
  struct SM3DMAEN_fields_ {
    enum class eCAPTDE : std::uint32_t {
      // Read DMA requests disabled.
      eDISABLED = 0,
      // Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to be set to determine which watermark(s) the DMA request is sensitive.
      eEXCEEDFIFO = 1,
      // A local synchronization (VAL1 matches counter) sets the read DMA request.
      eLOCAL_SYNC = 2,
      // A local reload (STS[RF] being set) sets the read DMA request.
      eLOCAL_RELOAD = 3,
    };

    enum class eFAND : std::uint32_t {
      // Selected FIFO watermarks are OR'ed together.
      eOR = 0,
      // Selected FIFO watermarks are AND'ed together.
      eAND = 1,
    };

    enum class eVALDE : std::uint32_t {
      // DMA write requests disabled
      eDISABLED = 0,
      // Enabled
      eENABLED = 1,
    };

    // Capture X0 FIFO DMA Enable
    using CX0DE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X1 FIFO DMA Enable
    using CX1DE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO DMA Enable
    using CB0DE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B1 FIFO DMA Enable
    using CB1DE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO DMA Enable
    using CA0DE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A1 FIFO DMA Enable
    using CA1DE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture DMA Enable Source Select
    using CAPTDE = ftl::mmio::Field<2, 6, eCAPTDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // FIFO Watermark AND Control
    using FAND = ftl::mmio::Field<1, 8, eFAND, ftl::mmio::RW, ftl::mmio::Normal>;
    // Value Registers DMA Enable
    using VALDE = ftl::mmio::Field<1, 9, eVALDE, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3DMAEN_fields_

  struct SM3DMAEN : ftl::mmio::Register<
      kBase + 0x148u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3DMAEN_fields_::CX0DE,
      typename SM3DMAEN_fields_::CX1DE,
      typename SM3DMAEN_fields_::CB0DE,
      typename SM3DMAEN_fields_::CB1DE,
      typename SM3DMAEN_fields_::CA0DE,
      typename SM3DMAEN_fields_::CA1DE,
      typename SM3DMAEN_fields_::CAPTDE,
      typename SM3DMAEN_fields_::FAND,
      typename SM3DMAEN_fields_::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename SM3DMAEN_fields_::eCAPTDE;
    using eFAND = typename SM3DMAEN_fields_::eFAND;
    using eVALDE = typename SM3DMAEN_fields_::eVALDE;
    using CX0DE = typename SM3DMAEN_fields_::CX0DE;
    using CX1DE = typename SM3DMAEN_fields_::CX1DE;
    using CB0DE = typename SM3DMAEN_fields_::CB0DE;
    using CB1DE = typename SM3DMAEN_fields_::CB1DE;
    using CA0DE = typename SM3DMAEN_fields_::CA0DE;
    using CA1DE = typename SM3DMAEN_fields_::CA1DE;
    using CAPTDE = typename SM3DMAEN_fields_::CAPTDE;
    using FAND = typename SM3DMAEN_fields_::FAND;
    using VALDE = typename SM3DMAEN_fields_::VALDE;
  };

  // Output Trigger Control Register
  struct SM3TCTRL_fields_ {
    enum class eOUT_TRIG_EN : std::uint32_t {
      // PWM_OUT_TRIG0 will set when the counter value matches the VAL0 value.
      eVAL0 = 1,
    };

    enum class eTRGFRQ : std::uint32_t {
      // Trigger outputs are generated during every PWM period even if the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eEVERYPWM = 0,
      // Trigger outputs are generated only during the final PWM period prior to a reload opportunity when the PWM is not reloaded every period due to CTRL[LDFQ] being non-zero.
      eFINALPWM = 1,
    };

    enum class ePWBOT1 : std::uint32_t {
      // Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
      ePWM_OUT_TRIG1_SIGNAL = 0,
      // Route the PWM_B output to the PWM_OUT_TRIG1 port.
      ePWMB_OUTPUT = 1,
    };

    enum class ePWAOT0 : std::uint32_t {
      // Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
      ePWM_OUT_TRIG0_SIGNAL = 0,
      // Route the PWM_A output to the PWM_OUT_TRIG0 port.
      ePWMA_OUTPUT = 1,
    };

    // Output Trigger Enables
    using OUT_TRIG_EN = ftl::mmio::Field<6, 0, eOUT_TRIG_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Frequency
    using TRGFRQ = ftl::mmio::Field<1, 12, eTRGFRQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 1 Source Select
    using PWBOT1 = ftl::mmio::Field<1, 14, ePWBOT1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Trigger 0 Source Select
    using PWAOT0 = ftl::mmio::Field<1, 15, ePWAOT0, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3TCTRL_fields_

  struct SM3TCTRL : ftl::mmio::Register<
      kBase + 0x14Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3TCTRL_fields_::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename SM3TCTRL_fields_::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename SM3TCTRL_fields_::PWBOT1,
      typename SM3TCTRL_fields_::PWAOT0> {
    using eOUT_TRIG_EN = typename SM3TCTRL_fields_::eOUT_TRIG_EN;
    using eTRGFRQ = typename SM3TCTRL_fields_::eTRGFRQ;
    using ePWBOT1 = typename SM3TCTRL_fields_::ePWBOT1;
    using ePWAOT0 = typename SM3TCTRL_fields_::ePWAOT0;
    using OUT_TRIG_EN = typename SM3TCTRL_fields_::OUT_TRIG_EN;
    using TRGFRQ = typename SM3TCTRL_fields_::TRGFRQ;
    using PWBOT1 = typename SM3TCTRL_fields_::PWBOT1;
    using PWAOT0 = typename SM3TCTRL_fields_::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct SM3DISMAP0_fields_ {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3DISMAP0_fields_

  struct SM3DISMAP0 : ftl::mmio::Register<
      kBase + 0x14Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename SM3DISMAP0_fields_::DIS0A,
      typename SM3DISMAP0_fields_::DIS0B,
      typename SM3DISMAP0_fields_::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename SM3DISMAP0_fields_::DIS0A;
    using DIS0B = typename SM3DISMAP0_fields_::DIS0B;
    using DIS0X = typename SM3DISMAP0_fields_::DIS0X;
  };

  // Deadtime Count Register 0
  struct SM3DTCNT0_fields_ {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3DTCNT0_fields_

  struct SM3DTCNT0 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM3DTCNT0_fields_::DTCNT0> {
    using DTCNT0 = typename SM3DTCNT0_fields_::DTCNT0;
  };

  // Deadtime Count Register 1
  struct SM3DTCNT1_fields_ {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SM3DTCNT1_fields_

  struct SM3DTCNT1 : ftl::mmio::Register<
      kBase + 0x152u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename SM3DTCNT1_fields_::DTCNT1> {
    using DTCNT1 = typename SM3DTCNT1_fields_::DTCNT1;
  };

  // Capture Control A Register
  struct SM3CAPTCTRLA_fields_ {
    enum class eARMA : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTA : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGA0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGA1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELA : std::uint32_t {
      // Raw PWM_A input signal selected as source.
      ePWM_A = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTA_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm A
    using ARMA = ftl::mmio::Field<1, 0, eARMA, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode A
    using ONESHOTA = ftl::mmio::Field<1, 1, eONESHOTA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 0
    using EDGA0 = ftl::mmio::Field<2, 2, eEDGA0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge A 1
    using EDGA1 = ftl::mmio::Field<2, 4, eEDGA1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select A
    using INP_SELA = ftl::mmio::Field<1, 6, eINP_SELA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A Enable
    using EDGCNTA_EN = ftl::mmio::Field<1, 7, eEDGCNTA_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A FIFOs Water Mark
    using CFAWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture A0 FIFO Word Count
    using CA0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture A1 FIFO Word Count
    using CA1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCTRLA_fields_

  struct SM3CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCTRLA_fields_::ARMA,
      typename SM3CAPTCTRLA_fields_::ONESHOTA,
      typename SM3CAPTCTRLA_fields_::EDGA0,
      typename SM3CAPTCTRLA_fields_::EDGA1,
      typename SM3CAPTCTRLA_fields_::INP_SELA,
      typename SM3CAPTCTRLA_fields_::EDGCNTA_EN,
      typename SM3CAPTCTRLA_fields_::CFAWM,
      typename SM3CAPTCTRLA_fields_::CA0CNT,
      typename SM3CAPTCTRLA_fields_::CA1CNT> {
    using eARMA = typename SM3CAPTCTRLA_fields_::eARMA;
    using eONESHOTA = typename SM3CAPTCTRLA_fields_::eONESHOTA;
    using eEDGA0 = typename SM3CAPTCTRLA_fields_::eEDGA0;
    using eEDGA1 = typename SM3CAPTCTRLA_fields_::eEDGA1;
    using eINP_SELA = typename SM3CAPTCTRLA_fields_::eINP_SELA;
    using eEDGCNTA_EN = typename SM3CAPTCTRLA_fields_::eEDGCNTA_EN;
    using ARMA = typename SM3CAPTCTRLA_fields_::ARMA;
    using ONESHOTA = typename SM3CAPTCTRLA_fields_::ONESHOTA;
    using EDGA0 = typename SM3CAPTCTRLA_fields_::EDGA0;
    using EDGA1 = typename SM3CAPTCTRLA_fields_::EDGA1;
    using INP_SELA = typename SM3CAPTCTRLA_fields_::INP_SELA;
    using EDGCNTA_EN = typename SM3CAPTCTRLA_fields_::EDGCNTA_EN;
    using CFAWM = typename SM3CAPTCTRLA_fields_::CFAWM;
    using CA0CNT = typename SM3CAPTCTRLA_fields_::CA0CNT;
    using CA1CNT = typename SM3CAPTCTRLA_fields_::CA1CNT;
  };

  // Capture Compare A Register
  struct SM3CAPTCOMPA_fields_ {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCOMPA_fields_

  struct SM3CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x156u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCOMPA_fields_::EDGCMPA,
      typename SM3CAPTCOMPA_fields_::EDGCNTA> {
    using EDGCMPA = typename SM3CAPTCOMPA_fields_::EDGCMPA;
    using EDGCNTA = typename SM3CAPTCOMPA_fields_::EDGCNTA;
  };

  // Capture Control B Register
  struct SM3CAPTCTRLB_fields_ {
    enum class eARMB : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTB : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGB0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGB1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELB : std::uint32_t {
      // Raw PWM_B input signal selected as source.
      ePWM_B = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTB_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm B
    using ARMB = ftl::mmio::Field<1, 0, eARMB, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode B
    using ONESHOTB = ftl::mmio::Field<1, 1, eONESHOTB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 0
    using EDGB0 = ftl::mmio::Field<2, 2, eEDGB0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge B 1
    using EDGB1 = ftl::mmio::Field<2, 4, eEDGB1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select B
    using INP_SELB = ftl::mmio::Field<1, 6, eINP_SELB, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B Enable
    using EDGCNTB_EN = ftl::mmio::Field<1, 7, eEDGCNTB_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B FIFOs Water Mark
    using CFBWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture B0 FIFO Word Count
    using CB0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture B1 FIFO Word Count
    using CB1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCTRLB_fields_

  struct SM3CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCTRLB_fields_::ARMB,
      typename SM3CAPTCTRLB_fields_::ONESHOTB,
      typename SM3CAPTCTRLB_fields_::EDGB0,
      typename SM3CAPTCTRLB_fields_::EDGB1,
      typename SM3CAPTCTRLB_fields_::INP_SELB,
      typename SM3CAPTCTRLB_fields_::EDGCNTB_EN,
      typename SM3CAPTCTRLB_fields_::CFBWM,
      typename SM3CAPTCTRLB_fields_::CB0CNT,
      typename SM3CAPTCTRLB_fields_::CB1CNT> {
    using eARMB = typename SM3CAPTCTRLB_fields_::eARMB;
    using eONESHOTB = typename SM3CAPTCTRLB_fields_::eONESHOTB;
    using eEDGB0 = typename SM3CAPTCTRLB_fields_::eEDGB0;
    using eEDGB1 = typename SM3CAPTCTRLB_fields_::eEDGB1;
    using eINP_SELB = typename SM3CAPTCTRLB_fields_::eINP_SELB;
    using eEDGCNTB_EN = typename SM3CAPTCTRLB_fields_::eEDGCNTB_EN;
    using ARMB = typename SM3CAPTCTRLB_fields_::ARMB;
    using ONESHOTB = typename SM3CAPTCTRLB_fields_::ONESHOTB;
    using EDGB0 = typename SM3CAPTCTRLB_fields_::EDGB0;
    using EDGB1 = typename SM3CAPTCTRLB_fields_::EDGB1;
    using INP_SELB = typename SM3CAPTCTRLB_fields_::INP_SELB;
    using EDGCNTB_EN = typename SM3CAPTCTRLB_fields_::EDGCNTB_EN;
    using CFBWM = typename SM3CAPTCTRLB_fields_::CFBWM;
    using CB0CNT = typename SM3CAPTCTRLB_fields_::CB0CNT;
    using CB1CNT = typename SM3CAPTCTRLB_fields_::CB1CNT;
  };

  // Capture Compare B Register
  struct SM3CAPTCOMPB_fields_ {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCOMPB_fields_

  struct SM3CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x15Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCOMPB_fields_::EDGCMPB,
      typename SM3CAPTCOMPB_fields_::EDGCNTB> {
    using EDGCMPB = typename SM3CAPTCOMPB_fields_::EDGCMPB;
    using EDGCNTB = typename SM3CAPTCOMPB_fields_::EDGCNTB;
  };

  // Capture Control X Register
  struct SM3CAPTCTRLX_fields_ {
    enum class eARMX : std::uint32_t {
      // Input capture operation is disabled.
      eDISABLED = 0,
      // Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
      eENABLED = 1,
    };

    enum class eONESHOTX : std::uint32_t {
      // Free Running
      eFREE_RUNNING = 0,
      // One Shot
      eONE_SHOT = 1,
    };

    enum class eEDGX0 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eEDGX1 : std::uint32_t {
      // Disabled
      eDISABLED = 0,
      // Capture falling edges
      eFALLING_EDGE = 1,
      // Capture rising edges
      eRISING_EDGE = 2,
      // Capture any edge
      eANY_EDGE = 3,
    };

    enum class eINP_SELX : std::uint32_t {
      // Raw PWM_X input signal selected as source.
      ePWM_X = 0,
      // Edge Counter
      eEDGE_COUNTER = 1,
    };

    enum class eEDGCNTX_EN : std::uint32_t {
      // Edge counter disabled and held in reset
      eDISABLED = 0,
      // Edge counter enabled
      eENABLED = 1,
    };

    // Arm X
    using ARMX = ftl::mmio::Field<1, 0, eARMX, ftl::mmio::RW, ftl::mmio::Normal>;
    // One Shot Mode Aux
    using ONESHOTX = ftl::mmio::Field<1, 1, eONESHOTX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 0
    using EDGX0 = ftl::mmio::Field<2, 2, eEDGX0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge X 1
    using EDGX1 = ftl::mmio::Field<2, 4, eEDGX1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Select X
    using INP_SELX = ftl::mmio::Field<1, 6, eINP_SELX, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X Enable
    using EDGCNTX_EN = ftl::mmio::Field<1, 7, eEDGCNTX_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X FIFOs Water Mark
    using CFXWM = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Capture X0 FIFO Word Count
    using CX0CNT = ftl::mmio::Field<3, 10, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Capture X1 FIFO Word Count
    using CX1CNT = ftl::mmio::Field<3, 13, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCTRLX_fields_

  struct SM3CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCTRLX_fields_::ARMX,
      typename SM3CAPTCTRLX_fields_::ONESHOTX,
      typename SM3CAPTCTRLX_fields_::EDGX0,
      typename SM3CAPTCTRLX_fields_::EDGX1,
      typename SM3CAPTCTRLX_fields_::INP_SELX,
      typename SM3CAPTCTRLX_fields_::EDGCNTX_EN,
      typename SM3CAPTCTRLX_fields_::CFXWM,
      typename SM3CAPTCTRLX_fields_::CX0CNT,
      typename SM3CAPTCTRLX_fields_::CX1CNT> {
    using eARMX = typename SM3CAPTCTRLX_fields_::eARMX;
    using eONESHOTX = typename SM3CAPTCTRLX_fields_::eONESHOTX;
    using eEDGX0 = typename SM3CAPTCTRLX_fields_::eEDGX0;
    using eEDGX1 = typename SM3CAPTCTRLX_fields_::eEDGX1;
    using eINP_SELX = typename SM3CAPTCTRLX_fields_::eINP_SELX;
    using eEDGCNTX_EN = typename SM3CAPTCTRLX_fields_::eEDGCNTX_EN;
    using ARMX = typename SM3CAPTCTRLX_fields_::ARMX;
    using ONESHOTX = typename SM3CAPTCTRLX_fields_::ONESHOTX;
    using EDGX0 = typename SM3CAPTCTRLX_fields_::EDGX0;
    using EDGX1 = typename SM3CAPTCTRLX_fields_::EDGX1;
    using INP_SELX = typename SM3CAPTCTRLX_fields_::INP_SELX;
    using EDGCNTX_EN = typename SM3CAPTCTRLX_fields_::EDGCNTX_EN;
    using CFXWM = typename SM3CAPTCTRLX_fields_::CFXWM;
    using CX0CNT = typename SM3CAPTCTRLX_fields_::CX0CNT;
    using CX1CNT = typename SM3CAPTCTRLX_fields_::CX1CNT;
  };

  // Capture Compare X Register
  struct SM3CAPTCOMPX_fields_ {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CAPTCOMPX_fields_

  struct SM3CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x15Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SM3CAPTCOMPX_fields_::EDGCMPX,
      typename SM3CAPTCOMPX_fields_::EDGCNTX> {
    using EDGCMPX = typename SM3CAPTCOMPX_fields_::EDGCMPX;
    using EDGCNTX = typename SM3CAPTCOMPX_fields_::EDGCNTX;
  };

  // Capture Value 0 Register
  struct SM3CVAL0_fields_ {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL0_fields_

  struct SM3CVAL0 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL0_fields_::CAPTVAL0> {
    using CAPTVAL0 = typename SM3CVAL0_fields_::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct SM3CVAL0CYC_fields_ {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL0CYC_fields_

  struct SM3CVAL0CYC : ftl::mmio::Register<
      kBase + 0x162u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL0CYC_fields_::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename SM3CVAL0CYC_fields_::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct SM3CVAL1_fields_ {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL1_fields_

  struct SM3CVAL1 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL1_fields_::CAPTVAL1> {
    using CAPTVAL1 = typename SM3CVAL1_fields_::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct SM3CVAL1CYC_fields_ {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL1CYC_fields_

  struct SM3CVAL1CYC : ftl::mmio::Register<
      kBase + 0x166u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL1CYC_fields_::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename SM3CVAL1CYC_fields_::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct SM3CVAL2_fields_ {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL2_fields_

  struct SM3CVAL2 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL2_fields_::CAPTVAL2> {
    using CAPTVAL2 = typename SM3CVAL2_fields_::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct SM3CVAL2CYC_fields_ {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL2CYC_fields_

  struct SM3CVAL2CYC : ftl::mmio::Register<
      kBase + 0x16Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL2CYC_fields_::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename SM3CVAL2CYC_fields_::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct SM3CVAL3_fields_ {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL3_fields_

  struct SM3CVAL3 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL3_fields_::CAPTVAL3> {
    using CAPTVAL3 = typename SM3CVAL3_fields_::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct SM3CVAL3CYC_fields_ {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL3CYC_fields_

  struct SM3CVAL3CYC : ftl::mmio::Register<
      kBase + 0x16Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL3CYC_fields_::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename SM3CVAL3CYC_fields_::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct SM3CVAL4_fields_ {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL4_fields_

  struct SM3CVAL4 : ftl::mmio::Register<
      kBase + 0x170u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL4_fields_::CAPTVAL4> {
    using CAPTVAL4 = typename SM3CVAL4_fields_::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct SM3CVAL4CYC_fields_ {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL4CYC_fields_

  struct SM3CVAL4CYC : ftl::mmio::Register<
      kBase + 0x172u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL4CYC_fields_::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename SM3CVAL4CYC_fields_::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct SM3CVAL5_fields_ {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL5_fields_

  struct SM3CVAL5 : ftl::mmio::Register<
      kBase + 0x174u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL5_fields_::CAPTVAL5> {
    using CAPTVAL5 = typename SM3CVAL5_fields_::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct SM3CVAL5CYC_fields_ {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct SM3CVAL5CYC_fields_

  struct SM3CVAL5CYC : ftl::mmio::Register<
      kBase + 0x176u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename SM3CVAL5CYC_fields_::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename SM3CVAL5CYC_fields_::CVAL5CYC;
  };

  // Output Enable Register
  struct OUTEN_fields_ {
    // PWM_X Output Enables
    using PWMX_EN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Enables
    using PWMB_EN = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Enables
    using PWMA_EN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OUTEN_fields_

  struct OUTEN : ftl::mmio::Register<
      kBase + 0x180u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename OUTEN_fields_::PWMX_EN,
      typename OUTEN_fields_::PWMB_EN,
      typename OUTEN_fields_::PWMA_EN,
      ftl::mmio::Reserved<4, 12>> {
    using PWMX_EN = typename OUTEN_fields_::PWMX_EN;
    using PWMB_EN = typename OUTEN_fields_::PWMB_EN;
    using PWMA_EN = typename OUTEN_fields_::PWMA_EN;
  };

  // Mask Register
  struct MASK_fields_ {
    // PWM_X Masks
    using MASKX = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Masks
    using MASKB = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Masks
    using MASKA = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Update Mask Bits Immediately
    using UPDATE_MASK = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct MASK_fields_

  struct MASK : ftl::mmio::Register<
      kBase + 0x182u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename MASK_fields_::MASKX,
      typename MASK_fields_::MASKB,
      typename MASK_fields_::MASKA,
      typename MASK_fields_::UPDATE_MASK> {
    using MASKX = typename MASK_fields_::MASKX;
    using MASKB = typename MASK_fields_::MASKB;
    using MASKA = typename MASK_fields_::MASKA;
    using UPDATE_MASK = typename MASK_fields_::UPDATE_MASK;
  };

  // Software Controlled Output Register
  struct SWCOUT_fields_ {
    enum class eSM0OUT45 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM45.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM45.
      eLOGIC_1 = 1,
    };

    enum class eSM0OUT23 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM23.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM23.
      eLOGIC_1 = 1,
    };

    enum class eSM1OUT45 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM45.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM45.
      eLOGIC_1 = 1,
    };

    enum class eSM1OUT23 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM23.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM23.
      eLOGIC_1 = 1,
    };

    enum class eSM2OUT45 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM45.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM45.
      eLOGIC_1 = 1,
    };

    enum class eSM2OUT23 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM23.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM23.
      eLOGIC_1 = 1,
    };

    enum class eSM3OUT45 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM45.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM45.
      eLOGIC_1 = 1,
    };

    enum class eSM3OUT23 : std::uint32_t {
      // A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM23.
      eLOGIC_0 = 0,
      // A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM23.
      eLOGIC_1 = 1,
    };

    // Submodule 0 Software Controlled Output 45
    using SM0OUT45 = ftl::mmio::Field<1, 0, eSM0OUT45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 0 Software Controlled Output 23
    using SM0OUT23 = ftl::mmio::Field<1, 1, eSM0OUT23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 1 Software Controlled Output 45
    using SM1OUT45 = ftl::mmio::Field<1, 2, eSM1OUT45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 1 Software Controlled Output 23
    using SM1OUT23 = ftl::mmio::Field<1, 3, eSM1OUT23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 2 Software Controlled Output 45
    using SM2OUT45 = ftl::mmio::Field<1, 4, eSM2OUT45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 2 Software Controlled Output 23
    using SM2OUT23 = ftl::mmio::Field<1, 5, eSM2OUT23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 3 Software Controlled Output 45
    using SM3OUT45 = ftl::mmio::Field<1, 6, eSM3OUT45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 3 Software Controlled Output 23
    using SM3OUT23 = ftl::mmio::Field<1, 7, eSM3OUT23, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SWCOUT_fields_

  struct SWCOUT : ftl::mmio::Register<
      kBase + 0x184u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SWCOUT_fields_::SM0OUT45,
      typename SWCOUT_fields_::SM0OUT23,
      typename SWCOUT_fields_::SM1OUT45,
      typename SWCOUT_fields_::SM1OUT23,
      typename SWCOUT_fields_::SM2OUT45,
      typename SWCOUT_fields_::SM2OUT23,
      typename SWCOUT_fields_::SM3OUT45,
      typename SWCOUT_fields_::SM3OUT23,
      ftl::mmio::Reserved<8, 8>> {
    using eSM0OUT45 = typename SWCOUT_fields_::eSM0OUT45;
    using eSM0OUT23 = typename SWCOUT_fields_::eSM0OUT23;
    using eSM1OUT45 = typename SWCOUT_fields_::eSM1OUT45;
    using eSM1OUT23 = typename SWCOUT_fields_::eSM1OUT23;
    using eSM2OUT45 = typename SWCOUT_fields_::eSM2OUT45;
    using eSM2OUT23 = typename SWCOUT_fields_::eSM2OUT23;
    using eSM3OUT45 = typename SWCOUT_fields_::eSM3OUT45;
    using eSM3OUT23 = typename SWCOUT_fields_::eSM3OUT23;
    using SM0OUT45 = typename SWCOUT_fields_::SM0OUT45;
    using SM0OUT23 = typename SWCOUT_fields_::SM0OUT23;
    using SM1OUT45 = typename SWCOUT_fields_::SM1OUT45;
    using SM1OUT23 = typename SWCOUT_fields_::SM1OUT23;
    using SM2OUT45 = typename SWCOUT_fields_::SM2OUT45;
    using SM2OUT23 = typename SWCOUT_fields_::SM2OUT23;
    using SM3OUT45 = typename SWCOUT_fields_::SM3OUT45;
    using SM3OUT23 = typename SWCOUT_fields_::SM3OUT23;
  };

  // PWM Source Select Register
  struct DTSRCSEL_fields_ {
    enum class eSM0SEL45 : std::uint32_t {
      // Generated SM0PWM45 signal used by the deadtime logic.
      eSM0PWM45 = 0,
      // Inverted generated SM0PWM45 signal used by the deadtime logic.
      eINVERTED_SM0PWM45 = 1,
      // SWCOUT[SM0OUT45] used by the deadtime logic.
      eSM0OUT45 = 2,
    };

    enum class eSM0SEL23 : std::uint32_t {
      // Generated SM0PWM23 signal used by the deadtime logic.
      eSM0PWM23 = 0,
      // Inverted generated SM0PWM23 signal used by the deadtime logic.
      eINVERTED_SM0PWM23 = 1,
      // SWCOUT[SM0OUT23] used by the deadtime logic.
      eSM0OUT23 = 2,
      // PWM0_EXTA signal used by the deadtime logic.
      ePWM0_EXTA = 3,
    };

    enum class eSM1SEL45 : std::uint32_t {
      // Generated SM1PWM45 signal used by the deadtime logic.
      eSM1PWM45 = 0,
      // Inverted generated SM1PWM45 signal used by the deadtime logic.
      eINVERTED_SM1PWM45 = 1,
      // SWCOUT[SM1OUT45] used by the deadtime logic.
      eSM1OUT45 = 2,
    };

    enum class eSM1SEL23 : std::uint32_t {
      // Generated SM1PWM23 signal used by the deadtime logic.
      eSM1PWM23 = 0,
      // Inverted generated SM1PWM23 signal used by the deadtime logic.
      eINVERTED_SM1PWM23 = 1,
      // SWCOUT[SM1OUT23] used by the deadtime logic.
      eSM1OUT23 = 2,
      // PWM1_EXTA signal used by the deadtime logic.
      ePWM1_EXTA = 3,
    };

    enum class eSM2SEL45 : std::uint32_t {
      // Generated SM2PWM45 signal used by the deadtime logic.
      eSM2PWM45 = 0,
      // Inverted generated SM2PWM45 signal used by the deadtime logic.
      eINVERTED_SM2PWM45 = 1,
      // SWCOUT[SM2OUT45] used by the deadtime logic.
      eSM2OUT45 = 2,
    };

    enum class eSM2SEL23 : std::uint32_t {
      // Generated SM2PWM23 signal used by the deadtime logic.
      eSM2PWM23 = 0,
      // Inverted generated SM2PWM23 signal used by the deadtime logic.
      eINVERTED_SM2PWM23 = 1,
      // SWCOUT[SM2OUT23] used by the deadtime logic.
      eSM2OUT23 = 2,
      // PWM2_EXTA signal used by the deadtime logic.
      ePWM2_EXTA = 3,
    };

    enum class eSM3SEL45 : std::uint32_t {
      // Generated SM3PWM45 signal used by the deadtime logic.
      eSM3PWM45 = 0,
      // Inverted generated SM3PWM45 signal used by the deadtime logic.
      eINVERTED_SM3PWM45 = 1,
      // SWCOUT[SM3OUT45] used by the deadtime logic.
      eSM3OUT45 = 2,
    };

    enum class eSM3SEL23 : std::uint32_t {
      // Generated SM3PWM23 signal used by the deadtime logic.
      eSM3PWM23 = 0,
      // Inverted generated SM3PWM23 signal used by the deadtime logic.
      eINVERTED_SM3PWM23 = 1,
      // SWCOUT[SM3OUT23] used by the deadtime logic.
      eSM3OUT23 = 2,
      // PWM3_EXTA signal used by the deadtime logic.
      ePWM3_EXTA = 3,
    };

    // Submodule 0 PWM45 Control Select
    using SM0SEL45 = ftl::mmio::Field<2, 0, eSM0SEL45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 0 PWM23 Control Select
    using SM0SEL23 = ftl::mmio::Field<2, 2, eSM0SEL23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 1 PWM45 Control Select
    using SM1SEL45 = ftl::mmio::Field<2, 4, eSM1SEL45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 1 PWM23 Control Select
    using SM1SEL23 = ftl::mmio::Field<2, 6, eSM1SEL23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 2 PWM45 Control Select
    using SM2SEL45 = ftl::mmio::Field<2, 8, eSM2SEL45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 2 PWM23 Control Select
    using SM2SEL23 = ftl::mmio::Field<2, 10, eSM2SEL23, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 3 PWM45 Control Select
    using SM3SEL45 = ftl::mmio::Field<2, 12, eSM3SEL45, ftl::mmio::RW, ftl::mmio::Normal>;
    // Submodule 3 PWM23 Control Select
    using SM3SEL23 = ftl::mmio::Field<2, 14, eSM3SEL23, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DTSRCSEL_fields_

  struct DTSRCSEL : ftl::mmio::Register<
      kBase + 0x186u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DTSRCSEL_fields_::SM0SEL45,
      typename DTSRCSEL_fields_::SM0SEL23,
      typename DTSRCSEL_fields_::SM1SEL45,
      typename DTSRCSEL_fields_::SM1SEL23,
      typename DTSRCSEL_fields_::SM2SEL45,
      typename DTSRCSEL_fields_::SM2SEL23,
      typename DTSRCSEL_fields_::SM3SEL45,
      typename DTSRCSEL_fields_::SM3SEL23> {
    using eSM0SEL45 = typename DTSRCSEL_fields_::eSM0SEL45;
    using eSM0SEL23 = typename DTSRCSEL_fields_::eSM0SEL23;
    using eSM1SEL45 = typename DTSRCSEL_fields_::eSM1SEL45;
    using eSM1SEL23 = typename DTSRCSEL_fields_::eSM1SEL23;
    using eSM2SEL45 = typename DTSRCSEL_fields_::eSM2SEL45;
    using eSM2SEL23 = typename DTSRCSEL_fields_::eSM2SEL23;
    using eSM3SEL45 = typename DTSRCSEL_fields_::eSM3SEL45;
    using eSM3SEL23 = typename DTSRCSEL_fields_::eSM3SEL23;
    using SM0SEL45 = typename DTSRCSEL_fields_::SM0SEL45;
    using SM0SEL23 = typename DTSRCSEL_fields_::SM0SEL23;
    using SM1SEL45 = typename DTSRCSEL_fields_::SM1SEL45;
    using SM1SEL23 = typename DTSRCSEL_fields_::SM1SEL23;
    using SM2SEL45 = typename DTSRCSEL_fields_::SM2SEL45;
    using SM2SEL23 = typename DTSRCSEL_fields_::SM2SEL23;
    using SM3SEL45 = typename DTSRCSEL_fields_::SM3SEL45;
    using SM3SEL23 = typename DTSRCSEL_fields_::SM3SEL23;
  };

  // Master Control Register
  struct MCTRL_fields_ {
    enum class eLDOK : std::uint32_t {
      // Do not load new values.
      eDISABLED = 0,
      // Load prescaler, modulus, and PWM values of the corresponding submodule.
      eENABLED = 1,
    };

    enum class eRUN : std::uint32_t {
      // PWM counter is stopped, but PWM outputs hold the current state.
      eDISABLED = 0,
      // PWM counter is started in the corresponding submodule.
      eENABLED = 1,
    };

    enum class eIPOL : std::uint32_t {
      // PWM23 is used to generate complementary PWM pair in the corresponding submodule.
      ePWM23 = 0,
      // PWM45 is used to generate complementary PWM pair in the corresponding submodule.
      ePWM45 = 1,
    };

    // Load Okay
    using LDOK = ftl::mmio::Field<4, 0, eLDOK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clear Load Okay
    using CLDOK = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Run
    using RUN = ftl::mmio::Field<4, 8, eRUN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Current Polarity
    using IPOL = ftl::mmio::Field<4, 12, eIPOL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MCTRL_fields_

  struct MCTRL : ftl::mmio::Register<
      kBase + 0x188u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename MCTRL_fields_::LDOK,
      typename MCTRL_fields_::CLDOK,
      typename MCTRL_fields_::RUN,
      typename MCTRL_fields_::IPOL> {
    using eLDOK = typename MCTRL_fields_::eLDOK;
    using eRUN = typename MCTRL_fields_::eRUN;
    using eIPOL = typename MCTRL_fields_::eIPOL;
    using LDOK = typename MCTRL_fields_::LDOK;
    using CLDOK = typename MCTRL_fields_::CLDOK;
    using RUN = typename MCTRL_fields_::RUN;
    using IPOL = typename MCTRL_fields_::IPOL;
  };

  // Fault Control Register
  struct FCTRL0_fields_ {
    enum class eFIE : std::uint32_t {
      // FAULTx CPU interrupt requests disabled.
      eDISABLED = 0,
      // FAULTx CPU interrupt requests enabled.
      eENABLED = 1,
    };

    enum class eFSAFE : std::uint32_t {
      // Normal mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFPINx]. If neither FHALF nor FFULL is set, then the fault condition cannot be cleared. The PWM outputs disabled by this fault input will not be re-enabled until the actual FAULTx input signal de-asserts since the fault input will combinationally disable the PWM outputs (as programmed in DISMAPn).
      eNORMAL = 0,
      // Safe mode. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear and FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL]. If neither FHLAF nor FFULL is set, then the fault condition cannot be cleared.
      eSAFE = 1,
    };

    enum class eFAUTO : std::uint32_t {
      // Manual fault clearing. PWM outputs disabled by this fault are not enabled until FSTS[FFLAGx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared. This is further controlled by FCTRL[FSAFE].
      eMANUAL = 0,
      // Automatic fault clearing. PWM outputs disabled by this fault are enabled when FSTS[FFPINx] is clear at the start of a half cycle or full cycle depending on the states of FSTS[FHALF] and FSTS[FFULL] without regard to the state of FSTS[FFLAGx]. If neither FFULL nor FHALF is set, then the fault condition cannot be cleared.
      eAUTOMATIC = 1,
    };

    enum class eFLVL : std::uint32_t {
      // A logic 0 on the fault input indicates a fault condition.
      eLOGIC_0 = 0,
      // A logic 1 on the fault input indicates a fault condition.
      eLOGIC_1 = 1,
    };

    // Fault Interrupt Enables
    using FIE = ftl::mmio::Field<4, 0, eFIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Safety Mode
    using FSAFE = ftl::mmio::Field<4, 4, eFSAFE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Automatic Fault Clearing
    using FAUTO = ftl::mmio::Field<4, 8, eFAUTO, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Level
    using FLVL = ftl::mmio::Field<4, 12, eFLVL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FCTRL0_fields_

  struct FCTRL0 : ftl::mmio::Register<
      kBase + 0x18Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FCTRL0_fields_::FIE,
      typename FCTRL0_fields_::FSAFE,
      typename FCTRL0_fields_::FAUTO,
      typename FCTRL0_fields_::FLVL> {
    using eFIE = typename FCTRL0_fields_::eFIE;
    using eFSAFE = typename FCTRL0_fields_::eFSAFE;
    using eFAUTO = typename FCTRL0_fields_::eFAUTO;
    using eFLVL = typename FCTRL0_fields_::eFLVL;
    using FIE = typename FCTRL0_fields_::FIE;
    using FSAFE = typename FCTRL0_fields_::FSAFE;
    using FAUTO = typename FCTRL0_fields_::FAUTO;
    using FLVL = typename FCTRL0_fields_::FLVL;
  };

  // Fault Status Register
  struct FSTS0_fields_ {
    enum class eFFLAG : std::uint32_t {
      // No fault on the FAULTx pin.
      eNO_FLAG = 0,
      // Fault on the FAULTx pin.
      eFLAG = 1,
    };

    enum class eFFULL : std::uint32_t {
      // PWM outputs are not re-enabled at the start of a full cycle
      ePWM_OUTPUTS_NOT_REENABLED = 0,
      // PWM outputs are re-enabled at the start of a full cycle
      ePWM_OUTPUTS_REENABLED = 1,
    };

    enum class eFHALF : std::uint32_t {
      // PWM outputs are not re-enabled at the start of a half cycle.
      ePWM_OUTPUTS_NOT_REENABLED = 0,
      // PWM outputs are re-enabled at the start of a half cycle (as defined by VAL0).
      ePWM_OUTPUTS_REENABLED = 1,
    };

    // Fault Flags
    using FFLAG = ftl::mmio::Field<4, 0, eFFLAG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Full Cycle
    using FFULL = ftl::mmio::Field<4, 4, eFFULL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Filtered Fault Pins
    using FFPIN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Half Cycle Fault Recovery
    using FHALF = ftl::mmio::Field<4, 12, eFHALF, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FSTS0_fields_

  struct FSTS0 : ftl::mmio::Register<
      kBase + 0x18Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FSTS0_fields_::FFLAG,
      typename FSTS0_fields_::FFULL,
      typename FSTS0_fields_::FFPIN,
      typename FSTS0_fields_::FHALF> {
    using eFFLAG = typename FSTS0_fields_::eFFLAG;
    using eFFULL = typename FSTS0_fields_::eFFULL;
    using eFHALF = typename FSTS0_fields_::eFHALF;
    using FFLAG = typename FSTS0_fields_::FFLAG;
    using FFULL = typename FSTS0_fields_::FFULL;
    using FFPIN = typename FSTS0_fields_::FFPIN;
    using FHALF = typename FSTS0_fields_::FHALF;
  };

  // Fault Filter Register
  struct FFILT0_fields_ {
    enum class eGSTR : std::uint32_t {
      // Fault input glitch stretching is disabled.
      eDISABLED = 0,
      // Input fault signals are stretched to at least 2 IPBus clock cycles.
      eENABLED = 1,
    };

    // Fault Filter Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Filter Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fault Glitch Stretch Enable
    using GSTR = ftl::mmio::Field<1, 15, eGSTR, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FFILT0_fields_

  struct FFILT0 : ftl::mmio::Register<
      kBase + 0x190u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FFILT0_fields_::FILT_PER,
      typename FFILT0_fields_::FILT_CNT,
      ftl::mmio::Reserved<4, 11>,
      typename FFILT0_fields_::GSTR> {
    using eGSTR = typename FFILT0_fields_::eGSTR;
    using FILT_PER = typename FFILT0_fields_::FILT_PER;
    using FILT_CNT = typename FFILT0_fields_::FILT_CNT;
    using GSTR = typename FFILT0_fields_::GSTR;
  };

  // Fault Test Register
  struct FTST0_fields_ {
    enum class eFTEST : std::uint32_t {
      // No fault
      eNO_FAULT = 0,
      // Cause a simulated fault
      eFAULT = 1,
    };

    // Fault Test
    using FTEST = ftl::mmio::Field<1, 0, eFTEST, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FTST0_fields_

  struct FTST0 : ftl::mmio::Register<
      kBase + 0x192u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FTST0_fields_::FTEST,
      ftl::mmio::Reserved<15, 1>> {
    using eFTEST = typename FTST0_fields_::eFTEST;
    using FTEST = typename FTST0_fields_::FTEST;
  };

  // Fault Control 2 Register
  struct FCTRL20_fields_ {
    enum class eNOCOMB : std::uint32_t {
      // There is a combinational link from the fault inputs to the PWM outputs. The fault inputs are combined with the filtered and latched fault signals to disable the PWM outputs.
      eENABLED = 0,
      // The direct combinational path from the fault inputs to the PWM outputs is disabled and the filtered and latched fault signals are used to disable the PWM outputs.
      eDISABLED = 1,
    };

    // No Combinational Path From Fault Input To PWM Output
    using NOCOMB = ftl::mmio::Field<4, 0, eNOCOMB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FCTRL20_fields_

  struct FCTRL20 : ftl::mmio::Register<
      kBase + 0x194u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FCTRL20_fields_::NOCOMB,
      ftl::mmio::Reserved<12, 4>> {
    using eNOCOMB = typename FCTRL20_fields_::eNOCOMB;
    using NOCOMB = typename FCTRL20_fields_::NOCOMB;
  };

};

}  // namespace regs