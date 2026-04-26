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
  struct Sm0cntFields {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cntFields

  struct SM0CNT : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cntFields::CNT> {
    using CNT = typename Sm0cntFields::CNT;
  };

  // Initial Count Register
  struct Sm0initFields {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0initFields

  struct SM0INIT : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0initFields::INIT> {
    using INIT = typename Sm0initFields::INIT;
  };

  // Control 2 Register
  struct Sm0ctrl2Fields {
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
  };  // struct Sm0ctrl2Fields

  struct SM0CTRL2 : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0ctrl2Fields::CLK_SEL,
      typename Sm0ctrl2Fields::RELOAD_SEL,
      typename Sm0ctrl2Fields::FORCE_SEL,
      typename Sm0ctrl2Fields::FORCE,
      typename Sm0ctrl2Fields::FRCEN,
      typename Sm0ctrl2Fields::INIT_SEL,
      typename Sm0ctrl2Fields::PWMX_INIT,
      typename Sm0ctrl2Fields::PWM45_INIT,
      typename Sm0ctrl2Fields::PWM23_INIT,
      typename Sm0ctrl2Fields::INDEP,
      typename Sm0ctrl2Fields::WAITEN,
      typename Sm0ctrl2Fields::DBGEN> {
    using eCLK_SEL = typename Sm0ctrl2Fields::eCLK_SEL;
    using eRELOAD_SEL = typename Sm0ctrl2Fields::eRELOAD_SEL;
    using eFORCE_SEL = typename Sm0ctrl2Fields::eFORCE_SEL;
    using eFRCEN = typename Sm0ctrl2Fields::eFRCEN;
    using eINIT_SEL = typename Sm0ctrl2Fields::eINIT_SEL;
    using eINDEP = typename Sm0ctrl2Fields::eINDEP;
    using CLK_SEL = typename Sm0ctrl2Fields::CLK_SEL;
    using RELOAD_SEL = typename Sm0ctrl2Fields::RELOAD_SEL;
    using FORCE_SEL = typename Sm0ctrl2Fields::FORCE_SEL;
    using FORCE = typename Sm0ctrl2Fields::FORCE;
    using FRCEN = typename Sm0ctrl2Fields::FRCEN;
    using INIT_SEL = typename Sm0ctrl2Fields::INIT_SEL;
    using PWMX_INIT = typename Sm0ctrl2Fields::PWMX_INIT;
    using PWM45_INIT = typename Sm0ctrl2Fields::PWM45_INIT;
    using PWM23_INIT = typename Sm0ctrl2Fields::PWM23_INIT;
    using INDEP = typename Sm0ctrl2Fields::INDEP;
    using WAITEN = typename Sm0ctrl2Fields::WAITEN;
    using DBGEN = typename Sm0ctrl2Fields::DBGEN;
  };

  // Control Register
  struct Sm0ctrlFields {
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
  };  // struct Sm0ctrlFields

  struct SM0CTRL : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename Sm0ctrlFields::DBLEN,
      typename Sm0ctrlFields::DBLX,
      typename Sm0ctrlFields::LDMOD,
      typename Sm0ctrlFields::SPLIT,
      typename Sm0ctrlFields::PRSC,
      typename Sm0ctrlFields::COMPMODE,
      typename Sm0ctrlFields::DT,
      typename Sm0ctrlFields::FULL,
      typename Sm0ctrlFields::HALF,
      typename Sm0ctrlFields::LDFQ> {
    using eDBLEN = typename Sm0ctrlFields::eDBLEN;
    using eDBLX = typename Sm0ctrlFields::eDBLX;
    using eLDMOD = typename Sm0ctrlFields::eLDMOD;
    using eSPLIT = typename Sm0ctrlFields::eSPLIT;
    using ePRSC = typename Sm0ctrlFields::ePRSC;
    using eCOMPMODE = typename Sm0ctrlFields::eCOMPMODE;
    using eFULL = typename Sm0ctrlFields::eFULL;
    using eHALF = typename Sm0ctrlFields::eHALF;
    using eLDFQ = typename Sm0ctrlFields::eLDFQ;
    using DBLEN = typename Sm0ctrlFields::DBLEN;
    using DBLX = typename Sm0ctrlFields::DBLX;
    using LDMOD = typename Sm0ctrlFields::LDMOD;
    using SPLIT = typename Sm0ctrlFields::SPLIT;
    using PRSC = typename Sm0ctrlFields::PRSC;
    using COMPMODE = typename Sm0ctrlFields::COMPMODE;
    using DT = typename Sm0ctrlFields::DT;
    using FULL = typename Sm0ctrlFields::FULL;
    using HALF = typename Sm0ctrlFields::HALF;
    using LDFQ = typename Sm0ctrlFields::LDFQ;
  };

  // Value Register 0
  struct Sm0val0Fields {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val0Fields

  struct SM0VAL0 : ftl::mmio::Register<
      kBase + 0xAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val0Fields::VAL0> {
    using VAL0 = typename Sm0val0Fields::VAL0;
  };

  // Fractional Value Register 1
  struct Sm0fracval1Fields {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0fracval1Fields

  struct SM0FRACVAL1 : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm0fracval1Fields::FRACVAL1> {
    using FRACVAL1 = typename Sm0fracval1Fields::FRACVAL1;
  };

  // Value Register 1
  struct Sm0val1Fields {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val1Fields

  struct SM0VAL1 : ftl::mmio::Register<
      kBase + 0xEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val1Fields::VAL1> {
    using VAL1 = typename Sm0val1Fields::VAL1;
  };

  // Fractional Value Register 2
  struct Sm0fracval2Fields {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0fracval2Fields

  struct SM0FRACVAL2 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm0fracval2Fields::FRACVAL2> {
    using FRACVAL2 = typename Sm0fracval2Fields::FRACVAL2;
  };

  // Value Register 2
  struct Sm0val2Fields {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val2Fields

  struct SM0VAL2 : ftl::mmio::Register<
      kBase + 0x12u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val2Fields::VAL2> {
    using VAL2 = typename Sm0val2Fields::VAL2;
  };

  // Fractional Value Register 3
  struct Sm0fracval3Fields {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0fracval3Fields

  struct SM0FRACVAL3 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm0fracval3Fields::FRACVAL3> {
    using FRACVAL3 = typename Sm0fracval3Fields::FRACVAL3;
  };

  // Value Register 3
  struct Sm0val3Fields {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val3Fields

  struct SM0VAL3 : ftl::mmio::Register<
      kBase + 0x16u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val3Fields::VAL3> {
    using VAL3 = typename Sm0val3Fields::VAL3;
  };

  // Fractional Value Register 4
  struct Sm0fracval4Fields {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0fracval4Fields

  struct SM0FRACVAL4 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm0fracval4Fields::FRACVAL4> {
    using FRACVAL4 = typename Sm0fracval4Fields::FRACVAL4;
  };

  // Value Register 4
  struct Sm0val4Fields {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val4Fields

  struct SM0VAL4 : ftl::mmio::Register<
      kBase + 0x1Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val4Fields::VAL4> {
    using VAL4 = typename Sm0val4Fields::VAL4;
  };

  // Fractional Value Register 5
  struct Sm0fracval5Fields {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0fracval5Fields

  struct SM0FRACVAL5 : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm0fracval5Fields::FRACVAL5> {
    using FRACVAL5 = typename Sm0fracval5Fields::FRACVAL5;
  };

  // Value Register 5
  struct Sm0val5Fields {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0val5Fields

  struct SM0VAL5 : ftl::mmio::Register<
      kBase + 0x1Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0val5Fields::VAL5> {
    using VAL5 = typename Sm0val5Fields::VAL5;
  };

  // Fractional Control Register
  struct Sm0frctrlFields {
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
  };  // struct Sm0frctrlFields

  struct SM0FRCTRL : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename Sm0frctrlFields::FRAC1_EN,
      typename Sm0frctrlFields::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename Sm0frctrlFields::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename Sm0frctrlFields::TEST> {
    using eFRAC1_EN = typename Sm0frctrlFields::eFRAC1_EN;
    using eFRAC23_EN = typename Sm0frctrlFields::eFRAC23_EN;
    using eFRAC45_EN = typename Sm0frctrlFields::eFRAC45_EN;
    using FRAC1_EN = typename Sm0frctrlFields::FRAC1_EN;
    using FRAC23_EN = typename Sm0frctrlFields::FRAC23_EN;
    using FRAC45_EN = typename Sm0frctrlFields::FRAC45_EN;
    using TEST = typename Sm0frctrlFields::TEST;
  };

  // Output Control Register
  struct Sm0octrlFields {
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
  };  // struct Sm0octrlFields

  struct SM0OCTRL : ftl::mmio::Register<
      kBase + 0x22u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0octrlFields::PWMXFS,
      typename Sm0octrlFields::PWMBFS,
      typename Sm0octrlFields::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename Sm0octrlFields::POLX,
      typename Sm0octrlFields::POLB,
      typename Sm0octrlFields::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename Sm0octrlFields::PWMX_IN,
      typename Sm0octrlFields::PWMB_IN,
      typename Sm0octrlFields::PWMA_IN> {
    using ePWMXFS = typename Sm0octrlFields::ePWMXFS;
    using ePWMBFS = typename Sm0octrlFields::ePWMBFS;
    using ePWMAFS = typename Sm0octrlFields::ePWMAFS;
    using ePOLX = typename Sm0octrlFields::ePOLX;
    using ePOLB = typename Sm0octrlFields::ePOLB;
    using ePOLA = typename Sm0octrlFields::ePOLA;
    using PWMXFS = typename Sm0octrlFields::PWMXFS;
    using PWMBFS = typename Sm0octrlFields::PWMBFS;
    using PWMAFS = typename Sm0octrlFields::PWMAFS;
    using POLX = typename Sm0octrlFields::POLX;
    using POLB = typename Sm0octrlFields::POLB;
    using POLA = typename Sm0octrlFields::POLA;
    using PWMX_IN = typename Sm0octrlFields::PWMX_IN;
    using PWMB_IN = typename Sm0octrlFields::PWMB_IN;
    using PWMA_IN = typename Sm0octrlFields::PWMA_IN;
  };

  // Status Register
  struct Sm0stsFields {
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
  };  // struct Sm0stsFields

  struct SM0STS : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0stsFields::CMPF,
      typename Sm0stsFields::CFX0,
      typename Sm0stsFields::CFX1,
      typename Sm0stsFields::CFB0,
      typename Sm0stsFields::CFB1,
      typename Sm0stsFields::CFA0,
      typename Sm0stsFields::CFA1,
      typename Sm0stsFields::RF,
      typename Sm0stsFields::REF,
      typename Sm0stsFields::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename Sm0stsFields::eCMPF;
    using eRF = typename Sm0stsFields::eRF;
    using eREF = typename Sm0stsFields::eREF;
    using eRUF = typename Sm0stsFields::eRUF;
    using CMPF = typename Sm0stsFields::CMPF;
    using CFX0 = typename Sm0stsFields::CFX0;
    using CFX1 = typename Sm0stsFields::CFX1;
    using CFB0 = typename Sm0stsFields::CFB0;
    using CFB1 = typename Sm0stsFields::CFB1;
    using CFA0 = typename Sm0stsFields::CFA0;
    using CFA1 = typename Sm0stsFields::CFA1;
    using RF = typename Sm0stsFields::RF;
    using REF = typename Sm0stsFields::REF;
    using RUF = typename Sm0stsFields::RUF;
  };

  // Interrupt Enable Register
  struct Sm0intenFields {
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
  };  // struct Sm0intenFields

  struct SM0INTEN : ftl::mmio::Register<
      kBase + 0x26u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0intenFields::CMPIE,
      typename Sm0intenFields::CX0IE,
      typename Sm0intenFields::CX1IE,
      typename Sm0intenFields::CB0IE,
      typename Sm0intenFields::CB1IE,
      typename Sm0intenFields::CA0IE,
      typename Sm0intenFields::CA1IE,
      typename Sm0intenFields::RIE,
      typename Sm0intenFields::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename Sm0intenFields::eCMPIE;
    using eCX0IE = typename Sm0intenFields::eCX0IE;
    using eCX1IE = typename Sm0intenFields::eCX1IE;
    using eCB0IE = typename Sm0intenFields::eCB0IE;
    using eCB1IE = typename Sm0intenFields::eCB1IE;
    using eCA0IE = typename Sm0intenFields::eCA0IE;
    using eCA1IE = typename Sm0intenFields::eCA1IE;
    using eRIE = typename Sm0intenFields::eRIE;
    using eREIE = typename Sm0intenFields::eREIE;
    using CMPIE = typename Sm0intenFields::CMPIE;
    using CX0IE = typename Sm0intenFields::CX0IE;
    using CX1IE = typename Sm0intenFields::CX1IE;
    using CB0IE = typename Sm0intenFields::CB0IE;
    using CB1IE = typename Sm0intenFields::CB1IE;
    using CA0IE = typename Sm0intenFields::CA0IE;
    using CA1IE = typename Sm0intenFields::CA1IE;
    using RIE = typename Sm0intenFields::RIE;
    using REIE = typename Sm0intenFields::REIE;
  };

  // DMA Enable Register
  struct Sm0dmaenFields {
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
  };  // struct Sm0dmaenFields

  struct SM0DMAEN : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0dmaenFields::CX0DE,
      typename Sm0dmaenFields::CX1DE,
      typename Sm0dmaenFields::CB0DE,
      typename Sm0dmaenFields::CB1DE,
      typename Sm0dmaenFields::CA0DE,
      typename Sm0dmaenFields::CA1DE,
      typename Sm0dmaenFields::CAPTDE,
      typename Sm0dmaenFields::FAND,
      typename Sm0dmaenFields::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename Sm0dmaenFields::eCAPTDE;
    using eFAND = typename Sm0dmaenFields::eFAND;
    using eVALDE = typename Sm0dmaenFields::eVALDE;
    using CX0DE = typename Sm0dmaenFields::CX0DE;
    using CX1DE = typename Sm0dmaenFields::CX1DE;
    using CB0DE = typename Sm0dmaenFields::CB0DE;
    using CB1DE = typename Sm0dmaenFields::CB1DE;
    using CA0DE = typename Sm0dmaenFields::CA0DE;
    using CA1DE = typename Sm0dmaenFields::CA1DE;
    using CAPTDE = typename Sm0dmaenFields::CAPTDE;
    using FAND = typename Sm0dmaenFields::FAND;
    using VALDE = typename Sm0dmaenFields::VALDE;
  };

  // Output Trigger Control Register
  struct Sm0tctrlFields {
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
  };  // struct Sm0tctrlFields

  struct SM0TCTRL : ftl::mmio::Register<
      kBase + 0x2Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0tctrlFields::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename Sm0tctrlFields::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename Sm0tctrlFields::PWBOT1,
      typename Sm0tctrlFields::PWAOT0> {
    using eOUT_TRIG_EN = typename Sm0tctrlFields::eOUT_TRIG_EN;
    using eTRGFRQ = typename Sm0tctrlFields::eTRGFRQ;
    using ePWBOT1 = typename Sm0tctrlFields::ePWBOT1;
    using ePWAOT0 = typename Sm0tctrlFields::ePWAOT0;
    using OUT_TRIG_EN = typename Sm0tctrlFields::OUT_TRIG_EN;
    using TRGFRQ = typename Sm0tctrlFields::TRGFRQ;
    using PWBOT1 = typename Sm0tctrlFields::PWBOT1;
    using PWAOT0 = typename Sm0tctrlFields::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct Sm0dismap0Fields {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0dismap0Fields

  struct SM0DISMAP0 : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename Sm0dismap0Fields::DIS0A,
      typename Sm0dismap0Fields::DIS0B,
      typename Sm0dismap0Fields::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename Sm0dismap0Fields::DIS0A;
    using DIS0B = typename Sm0dismap0Fields::DIS0B;
    using DIS0X = typename Sm0dismap0Fields::DIS0X;
  };

  // Deadtime Count Register 0
  struct Sm0dtcnt0Fields {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0dtcnt0Fields

  struct SM0DTCNT0 : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm0dtcnt0Fields::DTCNT0> {
    using DTCNT0 = typename Sm0dtcnt0Fields::DTCNT0;
  };

  // Deadtime Count Register 1
  struct Sm0dtcnt1Fields {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm0dtcnt1Fields

  struct SM0DTCNT1 : ftl::mmio::Register<
      kBase + 0x32u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm0dtcnt1Fields::DTCNT1> {
    using DTCNT1 = typename Sm0dtcnt1Fields::DTCNT1;
  };

  // Capture Control A Register
  struct Sm0captctrlaFields {
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
  };  // struct Sm0captctrlaFields

  struct SM0CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captctrlaFields::ARMA,
      typename Sm0captctrlaFields::ONESHOTA,
      typename Sm0captctrlaFields::EDGA0,
      typename Sm0captctrlaFields::EDGA1,
      typename Sm0captctrlaFields::INP_SELA,
      typename Sm0captctrlaFields::EDGCNTA_EN,
      typename Sm0captctrlaFields::CFAWM,
      typename Sm0captctrlaFields::CA0CNT,
      typename Sm0captctrlaFields::CA1CNT> {
    using eARMA = typename Sm0captctrlaFields::eARMA;
    using eONESHOTA = typename Sm0captctrlaFields::eONESHOTA;
    using eEDGA0 = typename Sm0captctrlaFields::eEDGA0;
    using eEDGA1 = typename Sm0captctrlaFields::eEDGA1;
    using eINP_SELA = typename Sm0captctrlaFields::eINP_SELA;
    using eEDGCNTA_EN = typename Sm0captctrlaFields::eEDGCNTA_EN;
    using ARMA = typename Sm0captctrlaFields::ARMA;
    using ONESHOTA = typename Sm0captctrlaFields::ONESHOTA;
    using EDGA0 = typename Sm0captctrlaFields::EDGA0;
    using EDGA1 = typename Sm0captctrlaFields::EDGA1;
    using INP_SELA = typename Sm0captctrlaFields::INP_SELA;
    using EDGCNTA_EN = typename Sm0captctrlaFields::EDGCNTA_EN;
    using CFAWM = typename Sm0captctrlaFields::CFAWM;
    using CA0CNT = typename Sm0captctrlaFields::CA0CNT;
    using CA1CNT = typename Sm0captctrlaFields::CA1CNT;
  };

  // Capture Compare A Register
  struct Sm0captcompaFields {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0captcompaFields

  struct SM0CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x36u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captcompaFields::EDGCMPA,
      typename Sm0captcompaFields::EDGCNTA> {
    using EDGCMPA = typename Sm0captcompaFields::EDGCMPA;
    using EDGCNTA = typename Sm0captcompaFields::EDGCNTA;
  };

  // Capture Control B Register
  struct Sm0captctrlbFields {
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
  };  // struct Sm0captctrlbFields

  struct SM0CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captctrlbFields::ARMB,
      typename Sm0captctrlbFields::ONESHOTB,
      typename Sm0captctrlbFields::EDGB0,
      typename Sm0captctrlbFields::EDGB1,
      typename Sm0captctrlbFields::INP_SELB,
      typename Sm0captctrlbFields::EDGCNTB_EN,
      typename Sm0captctrlbFields::CFBWM,
      typename Sm0captctrlbFields::CB0CNT,
      typename Sm0captctrlbFields::CB1CNT> {
    using eARMB = typename Sm0captctrlbFields::eARMB;
    using eONESHOTB = typename Sm0captctrlbFields::eONESHOTB;
    using eEDGB0 = typename Sm0captctrlbFields::eEDGB0;
    using eEDGB1 = typename Sm0captctrlbFields::eEDGB1;
    using eINP_SELB = typename Sm0captctrlbFields::eINP_SELB;
    using eEDGCNTB_EN = typename Sm0captctrlbFields::eEDGCNTB_EN;
    using ARMB = typename Sm0captctrlbFields::ARMB;
    using ONESHOTB = typename Sm0captctrlbFields::ONESHOTB;
    using EDGB0 = typename Sm0captctrlbFields::EDGB0;
    using EDGB1 = typename Sm0captctrlbFields::EDGB1;
    using INP_SELB = typename Sm0captctrlbFields::INP_SELB;
    using EDGCNTB_EN = typename Sm0captctrlbFields::EDGCNTB_EN;
    using CFBWM = typename Sm0captctrlbFields::CFBWM;
    using CB0CNT = typename Sm0captctrlbFields::CB0CNT;
    using CB1CNT = typename Sm0captctrlbFields::CB1CNT;
  };

  // Capture Compare B Register
  struct Sm0captcompbFields {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0captcompbFields

  struct SM0CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x3Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captcompbFields::EDGCMPB,
      typename Sm0captcompbFields::EDGCNTB> {
    using EDGCMPB = typename Sm0captcompbFields::EDGCMPB;
    using EDGCNTB = typename Sm0captcompbFields::EDGCNTB;
  };

  // Capture Control X Register
  struct Sm0captctrlxFields {
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
  };  // struct Sm0captctrlxFields

  struct SM0CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captctrlxFields::ARMX,
      typename Sm0captctrlxFields::ONESHOTX,
      typename Sm0captctrlxFields::EDGX0,
      typename Sm0captctrlxFields::EDGX1,
      typename Sm0captctrlxFields::INP_SELX,
      typename Sm0captctrlxFields::EDGCNTX_EN,
      typename Sm0captctrlxFields::CFXWM,
      typename Sm0captctrlxFields::CX0CNT,
      typename Sm0captctrlxFields::CX1CNT> {
    using eARMX = typename Sm0captctrlxFields::eARMX;
    using eONESHOTX = typename Sm0captctrlxFields::eONESHOTX;
    using eEDGX0 = typename Sm0captctrlxFields::eEDGX0;
    using eEDGX1 = typename Sm0captctrlxFields::eEDGX1;
    using eINP_SELX = typename Sm0captctrlxFields::eINP_SELX;
    using eEDGCNTX_EN = typename Sm0captctrlxFields::eEDGCNTX_EN;
    using ARMX = typename Sm0captctrlxFields::ARMX;
    using ONESHOTX = typename Sm0captctrlxFields::ONESHOTX;
    using EDGX0 = typename Sm0captctrlxFields::EDGX0;
    using EDGX1 = typename Sm0captctrlxFields::EDGX1;
    using INP_SELX = typename Sm0captctrlxFields::INP_SELX;
    using EDGCNTX_EN = typename Sm0captctrlxFields::EDGCNTX_EN;
    using CFXWM = typename Sm0captctrlxFields::CFXWM;
    using CX0CNT = typename Sm0captctrlxFields::CX0CNT;
    using CX1CNT = typename Sm0captctrlxFields::CX1CNT;
  };

  // Capture Compare X Register
  struct Sm0captcompxFields {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0captcompxFields

  struct SM0CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x3Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm0captcompxFields::EDGCMPX,
      typename Sm0captcompxFields::EDGCNTX> {
    using EDGCMPX = typename Sm0captcompxFields::EDGCMPX;
    using EDGCNTX = typename Sm0captcompxFields::EDGCNTX;
  };

  // Capture Value 0 Register
  struct Sm0cval0Fields {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval0Fields

  struct SM0CVAL0 : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval0Fields::CAPTVAL0> {
    using CAPTVAL0 = typename Sm0cval0Fields::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct Sm0cval0cycFields {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval0cycFields

  struct SM0CVAL0CYC : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval0cycFields::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename Sm0cval0cycFields::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct Sm0cval1Fields {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval1Fields

  struct SM0CVAL1 : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval1Fields::CAPTVAL1> {
    using CAPTVAL1 = typename Sm0cval1Fields::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct Sm0cval1cycFields {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval1cycFields

  struct SM0CVAL1CYC : ftl::mmio::Register<
      kBase + 0x46u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval1cycFields::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename Sm0cval1cycFields::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct Sm0cval2Fields {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval2Fields

  struct SM0CVAL2 : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval2Fields::CAPTVAL2> {
    using CAPTVAL2 = typename Sm0cval2Fields::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct Sm0cval2cycFields {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval2cycFields

  struct SM0CVAL2CYC : ftl::mmio::Register<
      kBase + 0x4Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval2cycFields::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename Sm0cval2cycFields::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct Sm0cval3Fields {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval3Fields

  struct SM0CVAL3 : ftl::mmio::Register<
      kBase + 0x4Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval3Fields::CAPTVAL3> {
    using CAPTVAL3 = typename Sm0cval3Fields::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct Sm0cval3cycFields {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval3cycFields

  struct SM0CVAL3CYC : ftl::mmio::Register<
      kBase + 0x4Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval3cycFields::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename Sm0cval3cycFields::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct Sm0cval4Fields {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval4Fields

  struct SM0CVAL4 : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval4Fields::CAPTVAL4> {
    using CAPTVAL4 = typename Sm0cval4Fields::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct Sm0cval4cycFields {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval4cycFields

  struct SM0CVAL4CYC : ftl::mmio::Register<
      kBase + 0x52u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval4cycFields::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename Sm0cval4cycFields::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct Sm0cval5Fields {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval5Fields

  struct SM0CVAL5 : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval5Fields::CAPTVAL5> {
    using CAPTVAL5 = typename Sm0cval5Fields::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct Sm0cval5cycFields {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm0cval5cycFields

  struct SM0CVAL5CYC : ftl::mmio::Register<
      kBase + 0x56u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm0cval5cycFields::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename Sm0cval5cycFields::CVAL5CYC;
  };

  // Counter Register
  struct Sm1cntFields {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cntFields

  struct SM1CNT : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cntFields::CNT> {
    using CNT = typename Sm1cntFields::CNT;
  };

  // Initial Count Register
  struct Sm1initFields {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1initFields

  struct SM1INIT : ftl::mmio::Register<
      kBase + 0x62u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1initFields::INIT> {
    using INIT = typename Sm1initFields::INIT;
  };

  // Control 2 Register
  struct Sm1ctrl2Fields {
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
  };  // struct Sm1ctrl2Fields

  struct SM1CTRL2 : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1ctrl2Fields::CLK_SEL,
      typename Sm1ctrl2Fields::RELOAD_SEL,
      typename Sm1ctrl2Fields::FORCE_SEL,
      typename Sm1ctrl2Fields::FORCE,
      typename Sm1ctrl2Fields::FRCEN,
      typename Sm1ctrl2Fields::INIT_SEL,
      typename Sm1ctrl2Fields::PWMX_INIT,
      typename Sm1ctrl2Fields::PWM45_INIT,
      typename Sm1ctrl2Fields::PWM23_INIT,
      typename Sm1ctrl2Fields::INDEP,
      typename Sm1ctrl2Fields::WAITEN,
      typename Sm1ctrl2Fields::DBGEN> {
    using eCLK_SEL = typename Sm1ctrl2Fields::eCLK_SEL;
    using eRELOAD_SEL = typename Sm1ctrl2Fields::eRELOAD_SEL;
    using eFORCE_SEL = typename Sm1ctrl2Fields::eFORCE_SEL;
    using eFRCEN = typename Sm1ctrl2Fields::eFRCEN;
    using eINIT_SEL = typename Sm1ctrl2Fields::eINIT_SEL;
    using eINDEP = typename Sm1ctrl2Fields::eINDEP;
    using CLK_SEL = typename Sm1ctrl2Fields::CLK_SEL;
    using RELOAD_SEL = typename Sm1ctrl2Fields::RELOAD_SEL;
    using FORCE_SEL = typename Sm1ctrl2Fields::FORCE_SEL;
    using FORCE = typename Sm1ctrl2Fields::FORCE;
    using FRCEN = typename Sm1ctrl2Fields::FRCEN;
    using INIT_SEL = typename Sm1ctrl2Fields::INIT_SEL;
    using PWMX_INIT = typename Sm1ctrl2Fields::PWMX_INIT;
    using PWM45_INIT = typename Sm1ctrl2Fields::PWM45_INIT;
    using PWM23_INIT = typename Sm1ctrl2Fields::PWM23_INIT;
    using INDEP = typename Sm1ctrl2Fields::INDEP;
    using WAITEN = typename Sm1ctrl2Fields::WAITEN;
    using DBGEN = typename Sm1ctrl2Fields::DBGEN;
  };

  // Control Register
  struct Sm1ctrlFields {
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
  };  // struct Sm1ctrlFields

  struct SM1CTRL : ftl::mmio::Register<
      kBase + 0x66u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename Sm1ctrlFields::DBLEN,
      typename Sm1ctrlFields::DBLX,
      typename Sm1ctrlFields::LDMOD,
      typename Sm1ctrlFields::SPLIT,
      typename Sm1ctrlFields::PRSC,
      typename Sm1ctrlFields::COMPMODE,
      typename Sm1ctrlFields::DT,
      typename Sm1ctrlFields::FULL,
      typename Sm1ctrlFields::HALF,
      typename Sm1ctrlFields::LDFQ> {
    using eDBLEN = typename Sm1ctrlFields::eDBLEN;
    using eDBLX = typename Sm1ctrlFields::eDBLX;
    using eLDMOD = typename Sm1ctrlFields::eLDMOD;
    using eSPLIT = typename Sm1ctrlFields::eSPLIT;
    using ePRSC = typename Sm1ctrlFields::ePRSC;
    using eCOMPMODE = typename Sm1ctrlFields::eCOMPMODE;
    using eFULL = typename Sm1ctrlFields::eFULL;
    using eHALF = typename Sm1ctrlFields::eHALF;
    using eLDFQ = typename Sm1ctrlFields::eLDFQ;
    using DBLEN = typename Sm1ctrlFields::DBLEN;
    using DBLX = typename Sm1ctrlFields::DBLX;
    using LDMOD = typename Sm1ctrlFields::LDMOD;
    using SPLIT = typename Sm1ctrlFields::SPLIT;
    using PRSC = typename Sm1ctrlFields::PRSC;
    using COMPMODE = typename Sm1ctrlFields::COMPMODE;
    using DT = typename Sm1ctrlFields::DT;
    using FULL = typename Sm1ctrlFields::FULL;
    using HALF = typename Sm1ctrlFields::HALF;
    using LDFQ = typename Sm1ctrlFields::LDFQ;
  };

  // Value Register 0
  struct Sm1val0Fields {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val0Fields

  struct SM1VAL0 : ftl::mmio::Register<
      kBase + 0x6Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val0Fields::VAL0> {
    using VAL0 = typename Sm1val0Fields::VAL0;
  };

  // Fractional Value Register 1
  struct Sm1fracval1Fields {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1fracval1Fields

  struct SM1FRACVAL1 : ftl::mmio::Register<
      kBase + 0x6Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm1fracval1Fields::FRACVAL1> {
    using FRACVAL1 = typename Sm1fracval1Fields::FRACVAL1;
  };

  // Value Register 1
  struct Sm1val1Fields {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val1Fields

  struct SM1VAL1 : ftl::mmio::Register<
      kBase + 0x6Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val1Fields::VAL1> {
    using VAL1 = typename Sm1val1Fields::VAL1;
  };

  // Fractional Value Register 2
  struct Sm1fracval2Fields {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1fracval2Fields

  struct SM1FRACVAL2 : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm1fracval2Fields::FRACVAL2> {
    using FRACVAL2 = typename Sm1fracval2Fields::FRACVAL2;
  };

  // Value Register 2
  struct Sm1val2Fields {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val2Fields

  struct SM1VAL2 : ftl::mmio::Register<
      kBase + 0x72u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val2Fields::VAL2> {
    using VAL2 = typename Sm1val2Fields::VAL2;
  };

  // Fractional Value Register 3
  struct Sm1fracval3Fields {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1fracval3Fields

  struct SM1FRACVAL3 : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm1fracval3Fields::FRACVAL3> {
    using FRACVAL3 = typename Sm1fracval3Fields::FRACVAL3;
  };

  // Value Register 3
  struct Sm1val3Fields {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val3Fields

  struct SM1VAL3 : ftl::mmio::Register<
      kBase + 0x76u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val3Fields::VAL3> {
    using VAL3 = typename Sm1val3Fields::VAL3;
  };

  // Fractional Value Register 4
  struct Sm1fracval4Fields {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1fracval4Fields

  struct SM1FRACVAL4 : ftl::mmio::Register<
      kBase + 0x78u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm1fracval4Fields::FRACVAL4> {
    using FRACVAL4 = typename Sm1fracval4Fields::FRACVAL4;
  };

  // Value Register 4
  struct Sm1val4Fields {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val4Fields

  struct SM1VAL4 : ftl::mmio::Register<
      kBase + 0x7Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val4Fields::VAL4> {
    using VAL4 = typename Sm1val4Fields::VAL4;
  };

  // Fractional Value Register 5
  struct Sm1fracval5Fields {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1fracval5Fields

  struct SM1FRACVAL5 : ftl::mmio::Register<
      kBase + 0x7Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm1fracval5Fields::FRACVAL5> {
    using FRACVAL5 = typename Sm1fracval5Fields::FRACVAL5;
  };

  // Value Register 5
  struct Sm1val5Fields {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1val5Fields

  struct SM1VAL5 : ftl::mmio::Register<
      kBase + 0x7Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1val5Fields::VAL5> {
    using VAL5 = typename Sm1val5Fields::VAL5;
  };

  // Fractional Control Register
  struct Sm1frctrlFields {
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
  };  // struct Sm1frctrlFields

  struct SM1FRCTRL : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename Sm1frctrlFields::FRAC1_EN,
      typename Sm1frctrlFields::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename Sm1frctrlFields::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename Sm1frctrlFields::TEST> {
    using eFRAC1_EN = typename Sm1frctrlFields::eFRAC1_EN;
    using eFRAC23_EN = typename Sm1frctrlFields::eFRAC23_EN;
    using eFRAC45_EN = typename Sm1frctrlFields::eFRAC45_EN;
    using FRAC1_EN = typename Sm1frctrlFields::FRAC1_EN;
    using FRAC23_EN = typename Sm1frctrlFields::FRAC23_EN;
    using FRAC45_EN = typename Sm1frctrlFields::FRAC45_EN;
    using TEST = typename Sm1frctrlFields::TEST;
  };

  // Output Control Register
  struct Sm1octrlFields {
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
  };  // struct Sm1octrlFields

  struct SM1OCTRL : ftl::mmio::Register<
      kBase + 0x82u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1octrlFields::PWMXFS,
      typename Sm1octrlFields::PWMBFS,
      typename Sm1octrlFields::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename Sm1octrlFields::POLX,
      typename Sm1octrlFields::POLB,
      typename Sm1octrlFields::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename Sm1octrlFields::PWMX_IN,
      typename Sm1octrlFields::PWMB_IN,
      typename Sm1octrlFields::PWMA_IN> {
    using ePWMXFS = typename Sm1octrlFields::ePWMXFS;
    using ePWMBFS = typename Sm1octrlFields::ePWMBFS;
    using ePWMAFS = typename Sm1octrlFields::ePWMAFS;
    using ePOLX = typename Sm1octrlFields::ePOLX;
    using ePOLB = typename Sm1octrlFields::ePOLB;
    using ePOLA = typename Sm1octrlFields::ePOLA;
    using PWMXFS = typename Sm1octrlFields::PWMXFS;
    using PWMBFS = typename Sm1octrlFields::PWMBFS;
    using PWMAFS = typename Sm1octrlFields::PWMAFS;
    using POLX = typename Sm1octrlFields::POLX;
    using POLB = typename Sm1octrlFields::POLB;
    using POLA = typename Sm1octrlFields::POLA;
    using PWMX_IN = typename Sm1octrlFields::PWMX_IN;
    using PWMB_IN = typename Sm1octrlFields::PWMB_IN;
    using PWMA_IN = typename Sm1octrlFields::PWMA_IN;
  };

  // Status Register
  struct Sm1stsFields {
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
  };  // struct Sm1stsFields

  struct SM1STS : ftl::mmio::Register<
      kBase + 0x84u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1stsFields::CMPF,
      typename Sm1stsFields::CFX0,
      typename Sm1stsFields::CFX1,
      typename Sm1stsFields::CFB0,
      typename Sm1stsFields::CFB1,
      typename Sm1stsFields::CFA0,
      typename Sm1stsFields::CFA1,
      typename Sm1stsFields::RF,
      typename Sm1stsFields::REF,
      typename Sm1stsFields::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename Sm1stsFields::eCMPF;
    using eRF = typename Sm1stsFields::eRF;
    using eREF = typename Sm1stsFields::eREF;
    using eRUF = typename Sm1stsFields::eRUF;
    using CMPF = typename Sm1stsFields::CMPF;
    using CFX0 = typename Sm1stsFields::CFX0;
    using CFX1 = typename Sm1stsFields::CFX1;
    using CFB0 = typename Sm1stsFields::CFB0;
    using CFB1 = typename Sm1stsFields::CFB1;
    using CFA0 = typename Sm1stsFields::CFA0;
    using CFA1 = typename Sm1stsFields::CFA1;
    using RF = typename Sm1stsFields::RF;
    using REF = typename Sm1stsFields::REF;
    using RUF = typename Sm1stsFields::RUF;
  };

  // Interrupt Enable Register
  struct Sm1intenFields {
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
  };  // struct Sm1intenFields

  struct SM1INTEN : ftl::mmio::Register<
      kBase + 0x86u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1intenFields::CMPIE,
      typename Sm1intenFields::CX0IE,
      typename Sm1intenFields::CX1IE,
      typename Sm1intenFields::CB0IE,
      typename Sm1intenFields::CB1IE,
      typename Sm1intenFields::CA0IE,
      typename Sm1intenFields::CA1IE,
      typename Sm1intenFields::RIE,
      typename Sm1intenFields::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename Sm1intenFields::eCMPIE;
    using eCX0IE = typename Sm1intenFields::eCX0IE;
    using eCX1IE = typename Sm1intenFields::eCX1IE;
    using eCB0IE = typename Sm1intenFields::eCB0IE;
    using eCB1IE = typename Sm1intenFields::eCB1IE;
    using eCA0IE = typename Sm1intenFields::eCA0IE;
    using eCA1IE = typename Sm1intenFields::eCA1IE;
    using eRIE = typename Sm1intenFields::eRIE;
    using eREIE = typename Sm1intenFields::eREIE;
    using CMPIE = typename Sm1intenFields::CMPIE;
    using CX0IE = typename Sm1intenFields::CX0IE;
    using CX1IE = typename Sm1intenFields::CX1IE;
    using CB0IE = typename Sm1intenFields::CB0IE;
    using CB1IE = typename Sm1intenFields::CB1IE;
    using CA0IE = typename Sm1intenFields::CA0IE;
    using CA1IE = typename Sm1intenFields::CA1IE;
    using RIE = typename Sm1intenFields::RIE;
    using REIE = typename Sm1intenFields::REIE;
  };

  // DMA Enable Register
  struct Sm1dmaenFields {
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
  };  // struct Sm1dmaenFields

  struct SM1DMAEN : ftl::mmio::Register<
      kBase + 0x88u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1dmaenFields::CX0DE,
      typename Sm1dmaenFields::CX1DE,
      typename Sm1dmaenFields::CB0DE,
      typename Sm1dmaenFields::CB1DE,
      typename Sm1dmaenFields::CA0DE,
      typename Sm1dmaenFields::CA1DE,
      typename Sm1dmaenFields::CAPTDE,
      typename Sm1dmaenFields::FAND,
      typename Sm1dmaenFields::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename Sm1dmaenFields::eCAPTDE;
    using eFAND = typename Sm1dmaenFields::eFAND;
    using eVALDE = typename Sm1dmaenFields::eVALDE;
    using CX0DE = typename Sm1dmaenFields::CX0DE;
    using CX1DE = typename Sm1dmaenFields::CX1DE;
    using CB0DE = typename Sm1dmaenFields::CB0DE;
    using CB1DE = typename Sm1dmaenFields::CB1DE;
    using CA0DE = typename Sm1dmaenFields::CA0DE;
    using CA1DE = typename Sm1dmaenFields::CA1DE;
    using CAPTDE = typename Sm1dmaenFields::CAPTDE;
    using FAND = typename Sm1dmaenFields::FAND;
    using VALDE = typename Sm1dmaenFields::VALDE;
  };

  // Output Trigger Control Register
  struct Sm1tctrlFields {
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
  };  // struct Sm1tctrlFields

  struct SM1TCTRL : ftl::mmio::Register<
      kBase + 0x8Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1tctrlFields::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename Sm1tctrlFields::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename Sm1tctrlFields::PWBOT1,
      typename Sm1tctrlFields::PWAOT0> {
    using eOUT_TRIG_EN = typename Sm1tctrlFields::eOUT_TRIG_EN;
    using eTRGFRQ = typename Sm1tctrlFields::eTRGFRQ;
    using ePWBOT1 = typename Sm1tctrlFields::ePWBOT1;
    using ePWAOT0 = typename Sm1tctrlFields::ePWAOT0;
    using OUT_TRIG_EN = typename Sm1tctrlFields::OUT_TRIG_EN;
    using TRGFRQ = typename Sm1tctrlFields::TRGFRQ;
    using PWBOT1 = typename Sm1tctrlFields::PWBOT1;
    using PWAOT0 = typename Sm1tctrlFields::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct Sm1dismap0Fields {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1dismap0Fields

  struct SM1DISMAP0 : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename Sm1dismap0Fields::DIS0A,
      typename Sm1dismap0Fields::DIS0B,
      typename Sm1dismap0Fields::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename Sm1dismap0Fields::DIS0A;
    using DIS0B = typename Sm1dismap0Fields::DIS0B;
    using DIS0X = typename Sm1dismap0Fields::DIS0X;
  };

  // Deadtime Count Register 0
  struct Sm1dtcnt0Fields {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1dtcnt0Fields

  struct SM1DTCNT0 : ftl::mmio::Register<
      kBase + 0x90u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm1dtcnt0Fields::DTCNT0> {
    using DTCNT0 = typename Sm1dtcnt0Fields::DTCNT0;
  };

  // Deadtime Count Register 1
  struct Sm1dtcnt1Fields {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm1dtcnt1Fields

  struct SM1DTCNT1 : ftl::mmio::Register<
      kBase + 0x92u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm1dtcnt1Fields::DTCNT1> {
    using DTCNT1 = typename Sm1dtcnt1Fields::DTCNT1;
  };

  // Capture Control A Register
  struct Sm1captctrlaFields {
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
  };  // struct Sm1captctrlaFields

  struct SM1CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x94u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captctrlaFields::ARMA,
      typename Sm1captctrlaFields::ONESHOTA,
      typename Sm1captctrlaFields::EDGA0,
      typename Sm1captctrlaFields::EDGA1,
      typename Sm1captctrlaFields::INP_SELA,
      typename Sm1captctrlaFields::EDGCNTA_EN,
      typename Sm1captctrlaFields::CFAWM,
      typename Sm1captctrlaFields::CA0CNT,
      typename Sm1captctrlaFields::CA1CNT> {
    using eARMA = typename Sm1captctrlaFields::eARMA;
    using eONESHOTA = typename Sm1captctrlaFields::eONESHOTA;
    using eEDGA0 = typename Sm1captctrlaFields::eEDGA0;
    using eEDGA1 = typename Sm1captctrlaFields::eEDGA1;
    using eINP_SELA = typename Sm1captctrlaFields::eINP_SELA;
    using eEDGCNTA_EN = typename Sm1captctrlaFields::eEDGCNTA_EN;
    using ARMA = typename Sm1captctrlaFields::ARMA;
    using ONESHOTA = typename Sm1captctrlaFields::ONESHOTA;
    using EDGA0 = typename Sm1captctrlaFields::EDGA0;
    using EDGA1 = typename Sm1captctrlaFields::EDGA1;
    using INP_SELA = typename Sm1captctrlaFields::INP_SELA;
    using EDGCNTA_EN = typename Sm1captctrlaFields::EDGCNTA_EN;
    using CFAWM = typename Sm1captctrlaFields::CFAWM;
    using CA0CNT = typename Sm1captctrlaFields::CA0CNT;
    using CA1CNT = typename Sm1captctrlaFields::CA1CNT;
  };

  // Capture Compare A Register
  struct Sm1captcompaFields {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1captcompaFields

  struct SM1CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x96u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captcompaFields::EDGCMPA,
      typename Sm1captcompaFields::EDGCNTA> {
    using EDGCMPA = typename Sm1captcompaFields::EDGCMPA;
    using EDGCNTA = typename Sm1captcompaFields::EDGCNTA;
  };

  // Capture Control B Register
  struct Sm1captctrlbFields {
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
  };  // struct Sm1captctrlbFields

  struct SM1CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x98u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captctrlbFields::ARMB,
      typename Sm1captctrlbFields::ONESHOTB,
      typename Sm1captctrlbFields::EDGB0,
      typename Sm1captctrlbFields::EDGB1,
      typename Sm1captctrlbFields::INP_SELB,
      typename Sm1captctrlbFields::EDGCNTB_EN,
      typename Sm1captctrlbFields::CFBWM,
      typename Sm1captctrlbFields::CB0CNT,
      typename Sm1captctrlbFields::CB1CNT> {
    using eARMB = typename Sm1captctrlbFields::eARMB;
    using eONESHOTB = typename Sm1captctrlbFields::eONESHOTB;
    using eEDGB0 = typename Sm1captctrlbFields::eEDGB0;
    using eEDGB1 = typename Sm1captctrlbFields::eEDGB1;
    using eINP_SELB = typename Sm1captctrlbFields::eINP_SELB;
    using eEDGCNTB_EN = typename Sm1captctrlbFields::eEDGCNTB_EN;
    using ARMB = typename Sm1captctrlbFields::ARMB;
    using ONESHOTB = typename Sm1captctrlbFields::ONESHOTB;
    using EDGB0 = typename Sm1captctrlbFields::EDGB0;
    using EDGB1 = typename Sm1captctrlbFields::EDGB1;
    using INP_SELB = typename Sm1captctrlbFields::INP_SELB;
    using EDGCNTB_EN = typename Sm1captctrlbFields::EDGCNTB_EN;
    using CFBWM = typename Sm1captctrlbFields::CFBWM;
    using CB0CNT = typename Sm1captctrlbFields::CB0CNT;
    using CB1CNT = typename Sm1captctrlbFields::CB1CNT;
  };

  // Capture Compare B Register
  struct Sm1captcompbFields {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1captcompbFields

  struct SM1CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x9Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captcompbFields::EDGCMPB,
      typename Sm1captcompbFields::EDGCNTB> {
    using EDGCMPB = typename Sm1captcompbFields::EDGCMPB;
    using EDGCNTB = typename Sm1captcompbFields::EDGCNTB;
  };

  // Capture Control X Register
  struct Sm1captctrlxFields {
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
  };  // struct Sm1captctrlxFields

  struct SM1CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x9Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captctrlxFields::ARMX,
      typename Sm1captctrlxFields::ONESHOTX,
      typename Sm1captctrlxFields::EDGX0,
      typename Sm1captctrlxFields::EDGX1,
      typename Sm1captctrlxFields::INP_SELX,
      typename Sm1captctrlxFields::EDGCNTX_EN,
      typename Sm1captctrlxFields::CFXWM,
      typename Sm1captctrlxFields::CX0CNT,
      typename Sm1captctrlxFields::CX1CNT> {
    using eARMX = typename Sm1captctrlxFields::eARMX;
    using eONESHOTX = typename Sm1captctrlxFields::eONESHOTX;
    using eEDGX0 = typename Sm1captctrlxFields::eEDGX0;
    using eEDGX1 = typename Sm1captctrlxFields::eEDGX1;
    using eINP_SELX = typename Sm1captctrlxFields::eINP_SELX;
    using eEDGCNTX_EN = typename Sm1captctrlxFields::eEDGCNTX_EN;
    using ARMX = typename Sm1captctrlxFields::ARMX;
    using ONESHOTX = typename Sm1captctrlxFields::ONESHOTX;
    using EDGX0 = typename Sm1captctrlxFields::EDGX0;
    using EDGX1 = typename Sm1captctrlxFields::EDGX1;
    using INP_SELX = typename Sm1captctrlxFields::INP_SELX;
    using EDGCNTX_EN = typename Sm1captctrlxFields::EDGCNTX_EN;
    using CFXWM = typename Sm1captctrlxFields::CFXWM;
    using CX0CNT = typename Sm1captctrlxFields::CX0CNT;
    using CX1CNT = typename Sm1captctrlxFields::CX1CNT;
  };

  // Capture Compare X Register
  struct Sm1captcompxFields {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1captcompxFields

  struct SM1CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x9Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm1captcompxFields::EDGCMPX,
      typename Sm1captcompxFields::EDGCNTX> {
    using EDGCMPX = typename Sm1captcompxFields::EDGCMPX;
    using EDGCNTX = typename Sm1captcompxFields::EDGCNTX;
  };

  // Capture Value 0 Register
  struct Sm1cval0Fields {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval0Fields

  struct SM1CVAL0 : ftl::mmio::Register<
      kBase + 0xA0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval0Fields::CAPTVAL0> {
    using CAPTVAL0 = typename Sm1cval0Fields::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct Sm1cval0cycFields {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval0cycFields

  struct SM1CVAL0CYC : ftl::mmio::Register<
      kBase + 0xA2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval0cycFields::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename Sm1cval0cycFields::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct Sm1cval1Fields {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval1Fields

  struct SM1CVAL1 : ftl::mmio::Register<
      kBase + 0xA4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval1Fields::CAPTVAL1> {
    using CAPTVAL1 = typename Sm1cval1Fields::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct Sm1cval1cycFields {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval1cycFields

  struct SM1CVAL1CYC : ftl::mmio::Register<
      kBase + 0xA6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval1cycFields::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename Sm1cval1cycFields::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct Sm1cval2Fields {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval2Fields

  struct SM1CVAL2 : ftl::mmio::Register<
      kBase + 0xA8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval2Fields::CAPTVAL2> {
    using CAPTVAL2 = typename Sm1cval2Fields::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct Sm1cval2cycFields {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval2cycFields

  struct SM1CVAL2CYC : ftl::mmio::Register<
      kBase + 0xAAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval2cycFields::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename Sm1cval2cycFields::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct Sm1cval3Fields {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval3Fields

  struct SM1CVAL3 : ftl::mmio::Register<
      kBase + 0xACu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval3Fields::CAPTVAL3> {
    using CAPTVAL3 = typename Sm1cval3Fields::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct Sm1cval3cycFields {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval3cycFields

  struct SM1CVAL3CYC : ftl::mmio::Register<
      kBase + 0xAEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval3cycFields::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename Sm1cval3cycFields::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct Sm1cval4Fields {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval4Fields

  struct SM1CVAL4 : ftl::mmio::Register<
      kBase + 0xB0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval4Fields::CAPTVAL4> {
    using CAPTVAL4 = typename Sm1cval4Fields::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct Sm1cval4cycFields {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval4cycFields

  struct SM1CVAL4CYC : ftl::mmio::Register<
      kBase + 0xB2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval4cycFields::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename Sm1cval4cycFields::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct Sm1cval5Fields {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval5Fields

  struct SM1CVAL5 : ftl::mmio::Register<
      kBase + 0xB4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval5Fields::CAPTVAL5> {
    using CAPTVAL5 = typename Sm1cval5Fields::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct Sm1cval5cycFields {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm1cval5cycFields

  struct SM1CVAL5CYC : ftl::mmio::Register<
      kBase + 0xB6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm1cval5cycFields::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename Sm1cval5cycFields::CVAL5CYC;
  };

  // Counter Register
  struct Sm2cntFields {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cntFields

  struct SM2CNT : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cntFields::CNT> {
    using CNT = typename Sm2cntFields::CNT;
  };

  // Initial Count Register
  struct Sm2initFields {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2initFields

  struct SM2INIT : ftl::mmio::Register<
      kBase + 0xC2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2initFields::INIT> {
    using INIT = typename Sm2initFields::INIT;
  };

  // Control 2 Register
  struct Sm2ctrl2Fields {
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
  };  // struct Sm2ctrl2Fields

  struct SM2CTRL2 : ftl::mmio::Register<
      kBase + 0xC4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2ctrl2Fields::CLK_SEL,
      typename Sm2ctrl2Fields::RELOAD_SEL,
      typename Sm2ctrl2Fields::FORCE_SEL,
      typename Sm2ctrl2Fields::FORCE,
      typename Sm2ctrl2Fields::FRCEN,
      typename Sm2ctrl2Fields::INIT_SEL,
      typename Sm2ctrl2Fields::PWMX_INIT,
      typename Sm2ctrl2Fields::PWM45_INIT,
      typename Sm2ctrl2Fields::PWM23_INIT,
      typename Sm2ctrl2Fields::INDEP,
      typename Sm2ctrl2Fields::WAITEN,
      typename Sm2ctrl2Fields::DBGEN> {
    using eCLK_SEL = typename Sm2ctrl2Fields::eCLK_SEL;
    using eRELOAD_SEL = typename Sm2ctrl2Fields::eRELOAD_SEL;
    using eFORCE_SEL = typename Sm2ctrl2Fields::eFORCE_SEL;
    using eFRCEN = typename Sm2ctrl2Fields::eFRCEN;
    using eINIT_SEL = typename Sm2ctrl2Fields::eINIT_SEL;
    using eINDEP = typename Sm2ctrl2Fields::eINDEP;
    using CLK_SEL = typename Sm2ctrl2Fields::CLK_SEL;
    using RELOAD_SEL = typename Sm2ctrl2Fields::RELOAD_SEL;
    using FORCE_SEL = typename Sm2ctrl2Fields::FORCE_SEL;
    using FORCE = typename Sm2ctrl2Fields::FORCE;
    using FRCEN = typename Sm2ctrl2Fields::FRCEN;
    using INIT_SEL = typename Sm2ctrl2Fields::INIT_SEL;
    using PWMX_INIT = typename Sm2ctrl2Fields::PWMX_INIT;
    using PWM45_INIT = typename Sm2ctrl2Fields::PWM45_INIT;
    using PWM23_INIT = typename Sm2ctrl2Fields::PWM23_INIT;
    using INDEP = typename Sm2ctrl2Fields::INDEP;
    using WAITEN = typename Sm2ctrl2Fields::WAITEN;
    using DBGEN = typename Sm2ctrl2Fields::DBGEN;
  };

  // Control Register
  struct Sm2ctrlFields {
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
  };  // struct Sm2ctrlFields

  struct SM2CTRL : ftl::mmio::Register<
      kBase + 0xC6u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename Sm2ctrlFields::DBLEN,
      typename Sm2ctrlFields::DBLX,
      typename Sm2ctrlFields::LDMOD,
      typename Sm2ctrlFields::SPLIT,
      typename Sm2ctrlFields::PRSC,
      typename Sm2ctrlFields::COMPMODE,
      typename Sm2ctrlFields::DT,
      typename Sm2ctrlFields::FULL,
      typename Sm2ctrlFields::HALF,
      typename Sm2ctrlFields::LDFQ> {
    using eDBLEN = typename Sm2ctrlFields::eDBLEN;
    using eDBLX = typename Sm2ctrlFields::eDBLX;
    using eLDMOD = typename Sm2ctrlFields::eLDMOD;
    using eSPLIT = typename Sm2ctrlFields::eSPLIT;
    using ePRSC = typename Sm2ctrlFields::ePRSC;
    using eCOMPMODE = typename Sm2ctrlFields::eCOMPMODE;
    using eFULL = typename Sm2ctrlFields::eFULL;
    using eHALF = typename Sm2ctrlFields::eHALF;
    using eLDFQ = typename Sm2ctrlFields::eLDFQ;
    using DBLEN = typename Sm2ctrlFields::DBLEN;
    using DBLX = typename Sm2ctrlFields::DBLX;
    using LDMOD = typename Sm2ctrlFields::LDMOD;
    using SPLIT = typename Sm2ctrlFields::SPLIT;
    using PRSC = typename Sm2ctrlFields::PRSC;
    using COMPMODE = typename Sm2ctrlFields::COMPMODE;
    using DT = typename Sm2ctrlFields::DT;
    using FULL = typename Sm2ctrlFields::FULL;
    using HALF = typename Sm2ctrlFields::HALF;
    using LDFQ = typename Sm2ctrlFields::LDFQ;
  };

  // Value Register 0
  struct Sm2val0Fields {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val0Fields

  struct SM2VAL0 : ftl::mmio::Register<
      kBase + 0xCAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val0Fields::VAL0> {
    using VAL0 = typename Sm2val0Fields::VAL0;
  };

  // Fractional Value Register 1
  struct Sm2fracval1Fields {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2fracval1Fields

  struct SM2FRACVAL1 : ftl::mmio::Register<
      kBase + 0xCCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm2fracval1Fields::FRACVAL1> {
    using FRACVAL1 = typename Sm2fracval1Fields::FRACVAL1;
  };

  // Value Register 1
  struct Sm2val1Fields {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val1Fields

  struct SM2VAL1 : ftl::mmio::Register<
      kBase + 0xCEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val1Fields::VAL1> {
    using VAL1 = typename Sm2val1Fields::VAL1;
  };

  // Fractional Value Register 2
  struct Sm2fracval2Fields {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2fracval2Fields

  struct SM2FRACVAL2 : ftl::mmio::Register<
      kBase + 0xD0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm2fracval2Fields::FRACVAL2> {
    using FRACVAL2 = typename Sm2fracval2Fields::FRACVAL2;
  };

  // Value Register 2
  struct Sm2val2Fields {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val2Fields

  struct SM2VAL2 : ftl::mmio::Register<
      kBase + 0xD2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val2Fields::VAL2> {
    using VAL2 = typename Sm2val2Fields::VAL2;
  };

  // Fractional Value Register 3
  struct Sm2fracval3Fields {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2fracval3Fields

  struct SM2FRACVAL3 : ftl::mmio::Register<
      kBase + 0xD4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm2fracval3Fields::FRACVAL3> {
    using FRACVAL3 = typename Sm2fracval3Fields::FRACVAL3;
  };

  // Value Register 3
  struct Sm2val3Fields {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val3Fields

  struct SM2VAL3 : ftl::mmio::Register<
      kBase + 0xD6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val3Fields::VAL3> {
    using VAL3 = typename Sm2val3Fields::VAL3;
  };

  // Fractional Value Register 4
  struct Sm2fracval4Fields {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2fracval4Fields

  struct SM2FRACVAL4 : ftl::mmio::Register<
      kBase + 0xD8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm2fracval4Fields::FRACVAL4> {
    using FRACVAL4 = typename Sm2fracval4Fields::FRACVAL4;
  };

  // Value Register 4
  struct Sm2val4Fields {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val4Fields

  struct SM2VAL4 : ftl::mmio::Register<
      kBase + 0xDAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val4Fields::VAL4> {
    using VAL4 = typename Sm2val4Fields::VAL4;
  };

  // Fractional Value Register 5
  struct Sm2fracval5Fields {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2fracval5Fields

  struct SM2FRACVAL5 : ftl::mmio::Register<
      kBase + 0xDCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm2fracval5Fields::FRACVAL5> {
    using FRACVAL5 = typename Sm2fracval5Fields::FRACVAL5;
  };

  // Value Register 5
  struct Sm2val5Fields {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2val5Fields

  struct SM2VAL5 : ftl::mmio::Register<
      kBase + 0xDEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2val5Fields::VAL5> {
    using VAL5 = typename Sm2val5Fields::VAL5;
  };

  // Fractional Control Register
  struct Sm2frctrlFields {
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
  };  // struct Sm2frctrlFields

  struct SM2FRCTRL : ftl::mmio::Register<
      kBase + 0xE0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename Sm2frctrlFields::FRAC1_EN,
      typename Sm2frctrlFields::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename Sm2frctrlFields::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename Sm2frctrlFields::TEST> {
    using eFRAC1_EN = typename Sm2frctrlFields::eFRAC1_EN;
    using eFRAC23_EN = typename Sm2frctrlFields::eFRAC23_EN;
    using eFRAC45_EN = typename Sm2frctrlFields::eFRAC45_EN;
    using FRAC1_EN = typename Sm2frctrlFields::FRAC1_EN;
    using FRAC23_EN = typename Sm2frctrlFields::FRAC23_EN;
    using FRAC45_EN = typename Sm2frctrlFields::FRAC45_EN;
    using TEST = typename Sm2frctrlFields::TEST;
  };

  // Output Control Register
  struct Sm2octrlFields {
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
  };  // struct Sm2octrlFields

  struct SM2OCTRL : ftl::mmio::Register<
      kBase + 0xE2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2octrlFields::PWMXFS,
      typename Sm2octrlFields::PWMBFS,
      typename Sm2octrlFields::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename Sm2octrlFields::POLX,
      typename Sm2octrlFields::POLB,
      typename Sm2octrlFields::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename Sm2octrlFields::PWMX_IN,
      typename Sm2octrlFields::PWMB_IN,
      typename Sm2octrlFields::PWMA_IN> {
    using ePWMXFS = typename Sm2octrlFields::ePWMXFS;
    using ePWMBFS = typename Sm2octrlFields::ePWMBFS;
    using ePWMAFS = typename Sm2octrlFields::ePWMAFS;
    using ePOLX = typename Sm2octrlFields::ePOLX;
    using ePOLB = typename Sm2octrlFields::ePOLB;
    using ePOLA = typename Sm2octrlFields::ePOLA;
    using PWMXFS = typename Sm2octrlFields::PWMXFS;
    using PWMBFS = typename Sm2octrlFields::PWMBFS;
    using PWMAFS = typename Sm2octrlFields::PWMAFS;
    using POLX = typename Sm2octrlFields::POLX;
    using POLB = typename Sm2octrlFields::POLB;
    using POLA = typename Sm2octrlFields::POLA;
    using PWMX_IN = typename Sm2octrlFields::PWMX_IN;
    using PWMB_IN = typename Sm2octrlFields::PWMB_IN;
    using PWMA_IN = typename Sm2octrlFields::PWMA_IN;
  };

  // Status Register
  struct Sm2stsFields {
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
  };  // struct Sm2stsFields

  struct SM2STS : ftl::mmio::Register<
      kBase + 0xE4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2stsFields::CMPF,
      typename Sm2stsFields::CFX0,
      typename Sm2stsFields::CFX1,
      typename Sm2stsFields::CFB0,
      typename Sm2stsFields::CFB1,
      typename Sm2stsFields::CFA0,
      typename Sm2stsFields::CFA1,
      typename Sm2stsFields::RF,
      typename Sm2stsFields::REF,
      typename Sm2stsFields::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename Sm2stsFields::eCMPF;
    using eRF = typename Sm2stsFields::eRF;
    using eREF = typename Sm2stsFields::eREF;
    using eRUF = typename Sm2stsFields::eRUF;
    using CMPF = typename Sm2stsFields::CMPF;
    using CFX0 = typename Sm2stsFields::CFX0;
    using CFX1 = typename Sm2stsFields::CFX1;
    using CFB0 = typename Sm2stsFields::CFB0;
    using CFB1 = typename Sm2stsFields::CFB1;
    using CFA0 = typename Sm2stsFields::CFA0;
    using CFA1 = typename Sm2stsFields::CFA1;
    using RF = typename Sm2stsFields::RF;
    using REF = typename Sm2stsFields::REF;
    using RUF = typename Sm2stsFields::RUF;
  };

  // Interrupt Enable Register
  struct Sm2intenFields {
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
  };  // struct Sm2intenFields

  struct SM2INTEN : ftl::mmio::Register<
      kBase + 0xE6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2intenFields::CMPIE,
      typename Sm2intenFields::CX0IE,
      typename Sm2intenFields::CX1IE,
      typename Sm2intenFields::CB0IE,
      typename Sm2intenFields::CB1IE,
      typename Sm2intenFields::CA0IE,
      typename Sm2intenFields::CA1IE,
      typename Sm2intenFields::RIE,
      typename Sm2intenFields::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename Sm2intenFields::eCMPIE;
    using eCX0IE = typename Sm2intenFields::eCX0IE;
    using eCX1IE = typename Sm2intenFields::eCX1IE;
    using eCB0IE = typename Sm2intenFields::eCB0IE;
    using eCB1IE = typename Sm2intenFields::eCB1IE;
    using eCA0IE = typename Sm2intenFields::eCA0IE;
    using eCA1IE = typename Sm2intenFields::eCA1IE;
    using eRIE = typename Sm2intenFields::eRIE;
    using eREIE = typename Sm2intenFields::eREIE;
    using CMPIE = typename Sm2intenFields::CMPIE;
    using CX0IE = typename Sm2intenFields::CX0IE;
    using CX1IE = typename Sm2intenFields::CX1IE;
    using CB0IE = typename Sm2intenFields::CB0IE;
    using CB1IE = typename Sm2intenFields::CB1IE;
    using CA0IE = typename Sm2intenFields::CA0IE;
    using CA1IE = typename Sm2intenFields::CA1IE;
    using RIE = typename Sm2intenFields::RIE;
    using REIE = typename Sm2intenFields::REIE;
  };

  // DMA Enable Register
  struct Sm2dmaenFields {
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
  };  // struct Sm2dmaenFields

  struct SM2DMAEN : ftl::mmio::Register<
      kBase + 0xE8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2dmaenFields::CX0DE,
      typename Sm2dmaenFields::CX1DE,
      typename Sm2dmaenFields::CB0DE,
      typename Sm2dmaenFields::CB1DE,
      typename Sm2dmaenFields::CA0DE,
      typename Sm2dmaenFields::CA1DE,
      typename Sm2dmaenFields::CAPTDE,
      typename Sm2dmaenFields::FAND,
      typename Sm2dmaenFields::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename Sm2dmaenFields::eCAPTDE;
    using eFAND = typename Sm2dmaenFields::eFAND;
    using eVALDE = typename Sm2dmaenFields::eVALDE;
    using CX0DE = typename Sm2dmaenFields::CX0DE;
    using CX1DE = typename Sm2dmaenFields::CX1DE;
    using CB0DE = typename Sm2dmaenFields::CB0DE;
    using CB1DE = typename Sm2dmaenFields::CB1DE;
    using CA0DE = typename Sm2dmaenFields::CA0DE;
    using CA1DE = typename Sm2dmaenFields::CA1DE;
    using CAPTDE = typename Sm2dmaenFields::CAPTDE;
    using FAND = typename Sm2dmaenFields::FAND;
    using VALDE = typename Sm2dmaenFields::VALDE;
  };

  // Output Trigger Control Register
  struct Sm2tctrlFields {
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
  };  // struct Sm2tctrlFields

  struct SM2TCTRL : ftl::mmio::Register<
      kBase + 0xEAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2tctrlFields::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename Sm2tctrlFields::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename Sm2tctrlFields::PWBOT1,
      typename Sm2tctrlFields::PWAOT0> {
    using eOUT_TRIG_EN = typename Sm2tctrlFields::eOUT_TRIG_EN;
    using eTRGFRQ = typename Sm2tctrlFields::eTRGFRQ;
    using ePWBOT1 = typename Sm2tctrlFields::ePWBOT1;
    using ePWAOT0 = typename Sm2tctrlFields::ePWAOT0;
    using OUT_TRIG_EN = typename Sm2tctrlFields::OUT_TRIG_EN;
    using TRGFRQ = typename Sm2tctrlFields::TRGFRQ;
    using PWBOT1 = typename Sm2tctrlFields::PWBOT1;
    using PWAOT0 = typename Sm2tctrlFields::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct Sm2dismap0Fields {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2dismap0Fields

  struct SM2DISMAP0 : ftl::mmio::Register<
      kBase + 0xECu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename Sm2dismap0Fields::DIS0A,
      typename Sm2dismap0Fields::DIS0B,
      typename Sm2dismap0Fields::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename Sm2dismap0Fields::DIS0A;
    using DIS0B = typename Sm2dismap0Fields::DIS0B;
    using DIS0X = typename Sm2dismap0Fields::DIS0X;
  };

  // Deadtime Count Register 0
  struct Sm2dtcnt0Fields {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2dtcnt0Fields

  struct SM2DTCNT0 : ftl::mmio::Register<
      kBase + 0xF0u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm2dtcnt0Fields::DTCNT0> {
    using DTCNT0 = typename Sm2dtcnt0Fields::DTCNT0;
  };

  // Deadtime Count Register 1
  struct Sm2dtcnt1Fields {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm2dtcnt1Fields

  struct SM2DTCNT1 : ftl::mmio::Register<
      kBase + 0xF2u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm2dtcnt1Fields::DTCNT1> {
    using DTCNT1 = typename Sm2dtcnt1Fields::DTCNT1;
  };

  // Capture Control A Register
  struct Sm2captctrlaFields {
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
  };  // struct Sm2captctrlaFields

  struct SM2CAPTCTRLA : ftl::mmio::Register<
      kBase + 0xF4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captctrlaFields::ARMA,
      typename Sm2captctrlaFields::ONESHOTA,
      typename Sm2captctrlaFields::EDGA0,
      typename Sm2captctrlaFields::EDGA1,
      typename Sm2captctrlaFields::INP_SELA,
      typename Sm2captctrlaFields::EDGCNTA_EN,
      typename Sm2captctrlaFields::CFAWM,
      typename Sm2captctrlaFields::CA0CNT,
      typename Sm2captctrlaFields::CA1CNT> {
    using eARMA = typename Sm2captctrlaFields::eARMA;
    using eONESHOTA = typename Sm2captctrlaFields::eONESHOTA;
    using eEDGA0 = typename Sm2captctrlaFields::eEDGA0;
    using eEDGA1 = typename Sm2captctrlaFields::eEDGA1;
    using eINP_SELA = typename Sm2captctrlaFields::eINP_SELA;
    using eEDGCNTA_EN = typename Sm2captctrlaFields::eEDGCNTA_EN;
    using ARMA = typename Sm2captctrlaFields::ARMA;
    using ONESHOTA = typename Sm2captctrlaFields::ONESHOTA;
    using EDGA0 = typename Sm2captctrlaFields::EDGA0;
    using EDGA1 = typename Sm2captctrlaFields::EDGA1;
    using INP_SELA = typename Sm2captctrlaFields::INP_SELA;
    using EDGCNTA_EN = typename Sm2captctrlaFields::EDGCNTA_EN;
    using CFAWM = typename Sm2captctrlaFields::CFAWM;
    using CA0CNT = typename Sm2captctrlaFields::CA0CNT;
    using CA1CNT = typename Sm2captctrlaFields::CA1CNT;
  };

  // Capture Compare A Register
  struct Sm2captcompaFields {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2captcompaFields

  struct SM2CAPTCOMPA : ftl::mmio::Register<
      kBase + 0xF6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captcompaFields::EDGCMPA,
      typename Sm2captcompaFields::EDGCNTA> {
    using EDGCMPA = typename Sm2captcompaFields::EDGCMPA;
    using EDGCNTA = typename Sm2captcompaFields::EDGCNTA;
  };

  // Capture Control B Register
  struct Sm2captctrlbFields {
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
  };  // struct Sm2captctrlbFields

  struct SM2CAPTCTRLB : ftl::mmio::Register<
      kBase + 0xF8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captctrlbFields::ARMB,
      typename Sm2captctrlbFields::ONESHOTB,
      typename Sm2captctrlbFields::EDGB0,
      typename Sm2captctrlbFields::EDGB1,
      typename Sm2captctrlbFields::INP_SELB,
      typename Sm2captctrlbFields::EDGCNTB_EN,
      typename Sm2captctrlbFields::CFBWM,
      typename Sm2captctrlbFields::CB0CNT,
      typename Sm2captctrlbFields::CB1CNT> {
    using eARMB = typename Sm2captctrlbFields::eARMB;
    using eONESHOTB = typename Sm2captctrlbFields::eONESHOTB;
    using eEDGB0 = typename Sm2captctrlbFields::eEDGB0;
    using eEDGB1 = typename Sm2captctrlbFields::eEDGB1;
    using eINP_SELB = typename Sm2captctrlbFields::eINP_SELB;
    using eEDGCNTB_EN = typename Sm2captctrlbFields::eEDGCNTB_EN;
    using ARMB = typename Sm2captctrlbFields::ARMB;
    using ONESHOTB = typename Sm2captctrlbFields::ONESHOTB;
    using EDGB0 = typename Sm2captctrlbFields::EDGB0;
    using EDGB1 = typename Sm2captctrlbFields::EDGB1;
    using INP_SELB = typename Sm2captctrlbFields::INP_SELB;
    using EDGCNTB_EN = typename Sm2captctrlbFields::EDGCNTB_EN;
    using CFBWM = typename Sm2captctrlbFields::CFBWM;
    using CB0CNT = typename Sm2captctrlbFields::CB0CNT;
    using CB1CNT = typename Sm2captctrlbFields::CB1CNT;
  };

  // Capture Compare B Register
  struct Sm2captcompbFields {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2captcompbFields

  struct SM2CAPTCOMPB : ftl::mmio::Register<
      kBase + 0xFAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captcompbFields::EDGCMPB,
      typename Sm2captcompbFields::EDGCNTB> {
    using EDGCMPB = typename Sm2captcompbFields::EDGCMPB;
    using EDGCNTB = typename Sm2captcompbFields::EDGCNTB;
  };

  // Capture Control X Register
  struct Sm2captctrlxFields {
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
  };  // struct Sm2captctrlxFields

  struct SM2CAPTCTRLX : ftl::mmio::Register<
      kBase + 0xFCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captctrlxFields::ARMX,
      typename Sm2captctrlxFields::ONESHOTX,
      typename Sm2captctrlxFields::EDGX0,
      typename Sm2captctrlxFields::EDGX1,
      typename Sm2captctrlxFields::INP_SELX,
      typename Sm2captctrlxFields::EDGCNTX_EN,
      typename Sm2captctrlxFields::CFXWM,
      typename Sm2captctrlxFields::CX0CNT,
      typename Sm2captctrlxFields::CX1CNT> {
    using eARMX = typename Sm2captctrlxFields::eARMX;
    using eONESHOTX = typename Sm2captctrlxFields::eONESHOTX;
    using eEDGX0 = typename Sm2captctrlxFields::eEDGX0;
    using eEDGX1 = typename Sm2captctrlxFields::eEDGX1;
    using eINP_SELX = typename Sm2captctrlxFields::eINP_SELX;
    using eEDGCNTX_EN = typename Sm2captctrlxFields::eEDGCNTX_EN;
    using ARMX = typename Sm2captctrlxFields::ARMX;
    using ONESHOTX = typename Sm2captctrlxFields::ONESHOTX;
    using EDGX0 = typename Sm2captctrlxFields::EDGX0;
    using EDGX1 = typename Sm2captctrlxFields::EDGX1;
    using INP_SELX = typename Sm2captctrlxFields::INP_SELX;
    using EDGCNTX_EN = typename Sm2captctrlxFields::EDGCNTX_EN;
    using CFXWM = typename Sm2captctrlxFields::CFXWM;
    using CX0CNT = typename Sm2captctrlxFields::CX0CNT;
    using CX1CNT = typename Sm2captctrlxFields::CX1CNT;
  };

  // Capture Compare X Register
  struct Sm2captcompxFields {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2captcompxFields

  struct SM2CAPTCOMPX : ftl::mmio::Register<
      kBase + 0xFEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm2captcompxFields::EDGCMPX,
      typename Sm2captcompxFields::EDGCNTX> {
    using EDGCMPX = typename Sm2captcompxFields::EDGCMPX;
    using EDGCNTX = typename Sm2captcompxFields::EDGCNTX;
  };

  // Capture Value 0 Register
  struct Sm2cval0Fields {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval0Fields

  struct SM2CVAL0 : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval0Fields::CAPTVAL0> {
    using CAPTVAL0 = typename Sm2cval0Fields::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct Sm2cval0cycFields {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval0cycFields

  struct SM2CVAL0CYC : ftl::mmio::Register<
      kBase + 0x102u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval0cycFields::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename Sm2cval0cycFields::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct Sm2cval1Fields {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval1Fields

  struct SM2CVAL1 : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval1Fields::CAPTVAL1> {
    using CAPTVAL1 = typename Sm2cval1Fields::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct Sm2cval1cycFields {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval1cycFields

  struct SM2CVAL1CYC : ftl::mmio::Register<
      kBase + 0x106u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval1cycFields::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename Sm2cval1cycFields::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct Sm2cval2Fields {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval2Fields

  struct SM2CVAL2 : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval2Fields::CAPTVAL2> {
    using CAPTVAL2 = typename Sm2cval2Fields::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct Sm2cval2cycFields {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval2cycFields

  struct SM2CVAL2CYC : ftl::mmio::Register<
      kBase + 0x10Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval2cycFields::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename Sm2cval2cycFields::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct Sm2cval3Fields {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval3Fields

  struct SM2CVAL3 : ftl::mmio::Register<
      kBase + 0x10Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval3Fields::CAPTVAL3> {
    using CAPTVAL3 = typename Sm2cval3Fields::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct Sm2cval3cycFields {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval3cycFields

  struct SM2CVAL3CYC : ftl::mmio::Register<
      kBase + 0x10Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval3cycFields::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename Sm2cval3cycFields::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct Sm2cval4Fields {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval4Fields

  struct SM2CVAL4 : ftl::mmio::Register<
      kBase + 0x110u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval4Fields::CAPTVAL4> {
    using CAPTVAL4 = typename Sm2cval4Fields::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct Sm2cval4cycFields {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval4cycFields

  struct SM2CVAL4CYC : ftl::mmio::Register<
      kBase + 0x112u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval4cycFields::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename Sm2cval4cycFields::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct Sm2cval5Fields {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval5Fields

  struct SM2CVAL5 : ftl::mmio::Register<
      kBase + 0x114u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval5Fields::CAPTVAL5> {
    using CAPTVAL5 = typename Sm2cval5Fields::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct Sm2cval5cycFields {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm2cval5cycFields

  struct SM2CVAL5CYC : ftl::mmio::Register<
      kBase + 0x116u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm2cval5cycFields::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename Sm2cval5cycFields::CVAL5CYC;
  };

  // Counter Register
  struct Sm3cntFields {
    // Counter Register Bits
    using CNT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cntFields

  struct SM3CNT : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cntFields::CNT> {
    using CNT = typename Sm3cntFields::CNT;
  };

  // Initial Count Register
  struct Sm3initFields {
    // Initial Count Register Bits
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3initFields

  struct SM3INIT : ftl::mmio::Register<
      kBase + 0x122u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3initFields::INIT> {
    using INIT = typename Sm3initFields::INIT;
  };

  // Control 2 Register
  struct Sm3ctrl2Fields {
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
  };  // struct Sm3ctrl2Fields

  struct SM3CTRL2 : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3ctrl2Fields::CLK_SEL,
      typename Sm3ctrl2Fields::RELOAD_SEL,
      typename Sm3ctrl2Fields::FORCE_SEL,
      typename Sm3ctrl2Fields::FORCE,
      typename Sm3ctrl2Fields::FRCEN,
      typename Sm3ctrl2Fields::INIT_SEL,
      typename Sm3ctrl2Fields::PWMX_INIT,
      typename Sm3ctrl2Fields::PWM45_INIT,
      typename Sm3ctrl2Fields::PWM23_INIT,
      typename Sm3ctrl2Fields::INDEP,
      typename Sm3ctrl2Fields::WAITEN,
      typename Sm3ctrl2Fields::DBGEN> {
    using eCLK_SEL = typename Sm3ctrl2Fields::eCLK_SEL;
    using eRELOAD_SEL = typename Sm3ctrl2Fields::eRELOAD_SEL;
    using eFORCE_SEL = typename Sm3ctrl2Fields::eFORCE_SEL;
    using eFRCEN = typename Sm3ctrl2Fields::eFRCEN;
    using eINIT_SEL = typename Sm3ctrl2Fields::eINIT_SEL;
    using eINDEP = typename Sm3ctrl2Fields::eINDEP;
    using CLK_SEL = typename Sm3ctrl2Fields::CLK_SEL;
    using RELOAD_SEL = typename Sm3ctrl2Fields::RELOAD_SEL;
    using FORCE_SEL = typename Sm3ctrl2Fields::FORCE_SEL;
    using FORCE = typename Sm3ctrl2Fields::FORCE;
    using FRCEN = typename Sm3ctrl2Fields::FRCEN;
    using INIT_SEL = typename Sm3ctrl2Fields::INIT_SEL;
    using PWMX_INIT = typename Sm3ctrl2Fields::PWMX_INIT;
    using PWM45_INIT = typename Sm3ctrl2Fields::PWM45_INIT;
    using PWM23_INIT = typename Sm3ctrl2Fields::PWM23_INIT;
    using INDEP = typename Sm3ctrl2Fields::INDEP;
    using WAITEN = typename Sm3ctrl2Fields::WAITEN;
    using DBGEN = typename Sm3ctrl2Fields::DBGEN;
  };

  // Control Register
  struct Sm3ctrlFields {
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
  };  // struct Sm3ctrlFields

  struct SM3CTRL : ftl::mmio::Register<
      kBase + 0x126u,
      std::uint16_t,
      0x0400u,
      ftl::mmio::RW,
      typename Sm3ctrlFields::DBLEN,
      typename Sm3ctrlFields::DBLX,
      typename Sm3ctrlFields::LDMOD,
      typename Sm3ctrlFields::SPLIT,
      typename Sm3ctrlFields::PRSC,
      typename Sm3ctrlFields::COMPMODE,
      typename Sm3ctrlFields::DT,
      typename Sm3ctrlFields::FULL,
      typename Sm3ctrlFields::HALF,
      typename Sm3ctrlFields::LDFQ> {
    using eDBLEN = typename Sm3ctrlFields::eDBLEN;
    using eDBLX = typename Sm3ctrlFields::eDBLX;
    using eLDMOD = typename Sm3ctrlFields::eLDMOD;
    using eSPLIT = typename Sm3ctrlFields::eSPLIT;
    using ePRSC = typename Sm3ctrlFields::ePRSC;
    using eCOMPMODE = typename Sm3ctrlFields::eCOMPMODE;
    using eFULL = typename Sm3ctrlFields::eFULL;
    using eHALF = typename Sm3ctrlFields::eHALF;
    using eLDFQ = typename Sm3ctrlFields::eLDFQ;
    using DBLEN = typename Sm3ctrlFields::DBLEN;
    using DBLX = typename Sm3ctrlFields::DBLX;
    using LDMOD = typename Sm3ctrlFields::LDMOD;
    using SPLIT = typename Sm3ctrlFields::SPLIT;
    using PRSC = typename Sm3ctrlFields::PRSC;
    using COMPMODE = typename Sm3ctrlFields::COMPMODE;
    using DT = typename Sm3ctrlFields::DT;
    using FULL = typename Sm3ctrlFields::FULL;
    using HALF = typename Sm3ctrlFields::HALF;
    using LDFQ = typename Sm3ctrlFields::LDFQ;
  };

  // Value Register 0
  struct Sm3val0Fields {
    // Value 0
    using VAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val0Fields

  struct SM3VAL0 : ftl::mmio::Register<
      kBase + 0x12Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val0Fields::VAL0> {
    using VAL0 = typename Sm3val0Fields::VAL0;
  };

  // Fractional Value Register 1
  struct Sm3fracval1Fields {
    // Fractional Value 1
    using FRACVAL1 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3fracval1Fields

  struct SM3FRACVAL1 : ftl::mmio::Register<
      kBase + 0x12Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm3fracval1Fields::FRACVAL1> {
    using FRACVAL1 = typename Sm3fracval1Fields::FRACVAL1;
  };

  // Value Register 1
  struct Sm3val1Fields {
    // Value 1
    using VAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val1Fields

  struct SM3VAL1 : ftl::mmio::Register<
      kBase + 0x12Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val1Fields::VAL1> {
    using VAL1 = typename Sm3val1Fields::VAL1;
  };

  // Fractional Value Register 2
  struct Sm3fracval2Fields {
    // Fractional Value 2
    using FRACVAL2 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3fracval2Fields

  struct SM3FRACVAL2 : ftl::mmio::Register<
      kBase + 0x130u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm3fracval2Fields::FRACVAL2> {
    using FRACVAL2 = typename Sm3fracval2Fields::FRACVAL2;
  };

  // Value Register 2
  struct Sm3val2Fields {
    // Value 2
    using VAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val2Fields

  struct SM3VAL2 : ftl::mmio::Register<
      kBase + 0x132u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val2Fields::VAL2> {
    using VAL2 = typename Sm3val2Fields::VAL2;
  };

  // Fractional Value Register 3
  struct Sm3fracval3Fields {
    // Fractional Value 3
    using FRACVAL3 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3fracval3Fields

  struct SM3FRACVAL3 : ftl::mmio::Register<
      kBase + 0x134u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm3fracval3Fields::FRACVAL3> {
    using FRACVAL3 = typename Sm3fracval3Fields::FRACVAL3;
  };

  // Value Register 3
  struct Sm3val3Fields {
    // Value 3
    using VAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val3Fields

  struct SM3VAL3 : ftl::mmio::Register<
      kBase + 0x136u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val3Fields::VAL3> {
    using VAL3 = typename Sm3val3Fields::VAL3;
  };

  // Fractional Value Register 4
  struct Sm3fracval4Fields {
    // Fractional Value 4
    using FRACVAL4 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3fracval4Fields

  struct SM3FRACVAL4 : ftl::mmio::Register<
      kBase + 0x138u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm3fracval4Fields::FRACVAL4> {
    using FRACVAL4 = typename Sm3fracval4Fields::FRACVAL4;
  };

  // Value Register 4
  struct Sm3val4Fields {
    // Value 4
    using VAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val4Fields

  struct SM3VAL4 : ftl::mmio::Register<
      kBase + 0x13Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val4Fields::VAL4> {
    using VAL4 = typename Sm3val4Fields::VAL4;
  };

  // Fractional Value Register 5
  struct Sm3fracval5Fields {
    // Fractional Value 5
    using FRACVAL5 = ftl::mmio::Field<5, 11, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3fracval5Fields

  struct SM3FRACVAL5 : ftl::mmio::Register<
      kBase + 0x13Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename Sm3fracval5Fields::FRACVAL5> {
    using FRACVAL5 = typename Sm3fracval5Fields::FRACVAL5;
  };

  // Value Register 5
  struct Sm3val5Fields {
    // Value 5
    using VAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3val5Fields

  struct SM3VAL5 : ftl::mmio::Register<
      kBase + 0x13Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3val5Fields::VAL5> {
    using VAL5 = typename Sm3val5Fields::VAL5;
  };

  // Fractional Control Register
  struct Sm3frctrlFields {
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
  };  // struct Sm3frctrlFields

  struct SM3FRCTRL : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename Sm3frctrlFields::FRAC1_EN,
      typename Sm3frctrlFields::FRAC23_EN,
      ftl::mmio::Reserved<1, 3>,
      typename Sm3frctrlFields::FRAC45_EN,
      ftl::mmio::Reserved<10, 5>,
      typename Sm3frctrlFields::TEST> {
    using eFRAC1_EN = typename Sm3frctrlFields::eFRAC1_EN;
    using eFRAC23_EN = typename Sm3frctrlFields::eFRAC23_EN;
    using eFRAC45_EN = typename Sm3frctrlFields::eFRAC45_EN;
    using FRAC1_EN = typename Sm3frctrlFields::FRAC1_EN;
    using FRAC23_EN = typename Sm3frctrlFields::FRAC23_EN;
    using FRAC45_EN = typename Sm3frctrlFields::FRAC45_EN;
    using TEST = typename Sm3frctrlFields::TEST;
  };

  // Output Control Register
  struct Sm3octrlFields {
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
  };  // struct Sm3octrlFields

  struct SM3OCTRL : ftl::mmio::Register<
      kBase + 0x142u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3octrlFields::PWMXFS,
      typename Sm3octrlFields::PWMBFS,
      typename Sm3octrlFields::PWMAFS,
      ftl::mmio::Reserved<2, 6>,
      typename Sm3octrlFields::POLX,
      typename Sm3octrlFields::POLB,
      typename Sm3octrlFields::POLA,
      ftl::mmio::Reserved<2, 11>,
      typename Sm3octrlFields::PWMX_IN,
      typename Sm3octrlFields::PWMB_IN,
      typename Sm3octrlFields::PWMA_IN> {
    using ePWMXFS = typename Sm3octrlFields::ePWMXFS;
    using ePWMBFS = typename Sm3octrlFields::ePWMBFS;
    using ePWMAFS = typename Sm3octrlFields::ePWMAFS;
    using ePOLX = typename Sm3octrlFields::ePOLX;
    using ePOLB = typename Sm3octrlFields::ePOLB;
    using ePOLA = typename Sm3octrlFields::ePOLA;
    using PWMXFS = typename Sm3octrlFields::PWMXFS;
    using PWMBFS = typename Sm3octrlFields::PWMBFS;
    using PWMAFS = typename Sm3octrlFields::PWMAFS;
    using POLX = typename Sm3octrlFields::POLX;
    using POLB = typename Sm3octrlFields::POLB;
    using POLA = typename Sm3octrlFields::POLA;
    using PWMX_IN = typename Sm3octrlFields::PWMX_IN;
    using PWMB_IN = typename Sm3octrlFields::PWMB_IN;
    using PWMA_IN = typename Sm3octrlFields::PWMA_IN;
  };

  // Status Register
  struct Sm3stsFields {
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
  };  // struct Sm3stsFields

  struct SM3STS : ftl::mmio::Register<
      kBase + 0x144u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3stsFields::CMPF,
      typename Sm3stsFields::CFX0,
      typename Sm3stsFields::CFX1,
      typename Sm3stsFields::CFB0,
      typename Sm3stsFields::CFB1,
      typename Sm3stsFields::CFA0,
      typename Sm3stsFields::CFA1,
      typename Sm3stsFields::RF,
      typename Sm3stsFields::REF,
      typename Sm3stsFields::RUF,
      ftl::mmio::Reserved<1, 15>> {
    using eCMPF = typename Sm3stsFields::eCMPF;
    using eRF = typename Sm3stsFields::eRF;
    using eREF = typename Sm3stsFields::eREF;
    using eRUF = typename Sm3stsFields::eRUF;
    using CMPF = typename Sm3stsFields::CMPF;
    using CFX0 = typename Sm3stsFields::CFX0;
    using CFX1 = typename Sm3stsFields::CFX1;
    using CFB0 = typename Sm3stsFields::CFB0;
    using CFB1 = typename Sm3stsFields::CFB1;
    using CFA0 = typename Sm3stsFields::CFA0;
    using CFA1 = typename Sm3stsFields::CFA1;
    using RF = typename Sm3stsFields::RF;
    using REF = typename Sm3stsFields::REF;
    using RUF = typename Sm3stsFields::RUF;
  };

  // Interrupt Enable Register
  struct Sm3intenFields {
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
  };  // struct Sm3intenFields

  struct SM3INTEN : ftl::mmio::Register<
      kBase + 0x146u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3intenFields::CMPIE,
      typename Sm3intenFields::CX0IE,
      typename Sm3intenFields::CX1IE,
      typename Sm3intenFields::CB0IE,
      typename Sm3intenFields::CB1IE,
      typename Sm3intenFields::CA0IE,
      typename Sm3intenFields::CA1IE,
      typename Sm3intenFields::RIE,
      typename Sm3intenFields::REIE,
      ftl::mmio::Reserved<2, 14>> {
    using eCMPIE = typename Sm3intenFields::eCMPIE;
    using eCX0IE = typename Sm3intenFields::eCX0IE;
    using eCX1IE = typename Sm3intenFields::eCX1IE;
    using eCB0IE = typename Sm3intenFields::eCB0IE;
    using eCB1IE = typename Sm3intenFields::eCB1IE;
    using eCA0IE = typename Sm3intenFields::eCA0IE;
    using eCA1IE = typename Sm3intenFields::eCA1IE;
    using eRIE = typename Sm3intenFields::eRIE;
    using eREIE = typename Sm3intenFields::eREIE;
    using CMPIE = typename Sm3intenFields::CMPIE;
    using CX0IE = typename Sm3intenFields::CX0IE;
    using CX1IE = typename Sm3intenFields::CX1IE;
    using CB0IE = typename Sm3intenFields::CB0IE;
    using CB1IE = typename Sm3intenFields::CB1IE;
    using CA0IE = typename Sm3intenFields::CA0IE;
    using CA1IE = typename Sm3intenFields::CA1IE;
    using RIE = typename Sm3intenFields::RIE;
    using REIE = typename Sm3intenFields::REIE;
  };

  // DMA Enable Register
  struct Sm3dmaenFields {
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
  };  // struct Sm3dmaenFields

  struct SM3DMAEN : ftl::mmio::Register<
      kBase + 0x148u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3dmaenFields::CX0DE,
      typename Sm3dmaenFields::CX1DE,
      typename Sm3dmaenFields::CB0DE,
      typename Sm3dmaenFields::CB1DE,
      typename Sm3dmaenFields::CA0DE,
      typename Sm3dmaenFields::CA1DE,
      typename Sm3dmaenFields::CAPTDE,
      typename Sm3dmaenFields::FAND,
      typename Sm3dmaenFields::VALDE,
      ftl::mmio::Reserved<6, 10>> {
    using eCAPTDE = typename Sm3dmaenFields::eCAPTDE;
    using eFAND = typename Sm3dmaenFields::eFAND;
    using eVALDE = typename Sm3dmaenFields::eVALDE;
    using CX0DE = typename Sm3dmaenFields::CX0DE;
    using CX1DE = typename Sm3dmaenFields::CX1DE;
    using CB0DE = typename Sm3dmaenFields::CB0DE;
    using CB1DE = typename Sm3dmaenFields::CB1DE;
    using CA0DE = typename Sm3dmaenFields::CA0DE;
    using CA1DE = typename Sm3dmaenFields::CA1DE;
    using CAPTDE = typename Sm3dmaenFields::CAPTDE;
    using FAND = typename Sm3dmaenFields::FAND;
    using VALDE = typename Sm3dmaenFields::VALDE;
  };

  // Output Trigger Control Register
  struct Sm3tctrlFields {
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
  };  // struct Sm3tctrlFields

  struct SM3TCTRL : ftl::mmio::Register<
      kBase + 0x14Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3tctrlFields::OUT_TRIG_EN,
      ftl::mmio::Reserved<6, 6>,
      typename Sm3tctrlFields::TRGFRQ,
      ftl::mmio::Reserved<1, 13>,
      typename Sm3tctrlFields::PWBOT1,
      typename Sm3tctrlFields::PWAOT0> {
    using eOUT_TRIG_EN = typename Sm3tctrlFields::eOUT_TRIG_EN;
    using eTRGFRQ = typename Sm3tctrlFields::eTRGFRQ;
    using ePWBOT1 = typename Sm3tctrlFields::ePWBOT1;
    using ePWAOT0 = typename Sm3tctrlFields::ePWAOT0;
    using OUT_TRIG_EN = typename Sm3tctrlFields::OUT_TRIG_EN;
    using TRGFRQ = typename Sm3tctrlFields::TRGFRQ;
    using PWBOT1 = typename Sm3tctrlFields::PWBOT1;
    using PWAOT0 = typename Sm3tctrlFields::PWAOT0;
  };

  // Fault Disable Mapping Register 0
  struct Sm3dismap0Fields {
    // PWM_A Fault Disable Mask 0
    using DIS0A = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Fault Disable Mask 0
    using DIS0B = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_X Fault Disable Mask 0
    using DIS0X = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3dismap0Fields

  struct SM3DISMAP0 : ftl::mmio::Register<
      kBase + 0x14Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename Sm3dismap0Fields::DIS0A,
      typename Sm3dismap0Fields::DIS0B,
      typename Sm3dismap0Fields::DIS0X,
      ftl::mmio::Reserved<4, 12>> {
    using DIS0A = typename Sm3dismap0Fields::DIS0A;
    using DIS0B = typename Sm3dismap0Fields::DIS0B;
    using DIS0X = typename Sm3dismap0Fields::DIS0X;
  };

  // Deadtime Count Register 0
  struct Sm3dtcnt0Fields {
    // DTCNT0
    using DTCNT0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3dtcnt0Fields

  struct SM3DTCNT0 : ftl::mmio::Register<
      kBase + 0x150u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm3dtcnt0Fields::DTCNT0> {
    using DTCNT0 = typename Sm3dtcnt0Fields::DTCNT0;
  };

  // Deadtime Count Register 1
  struct Sm3dtcnt1Fields {
    // DTCNT1
    using DTCNT1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Sm3dtcnt1Fields

  struct SM3DTCNT1 : ftl::mmio::Register<
      kBase + 0x152u,
      std::uint16_t,
      0x07FFu,
      ftl::mmio::RW,
      typename Sm3dtcnt1Fields::DTCNT1> {
    using DTCNT1 = typename Sm3dtcnt1Fields::DTCNT1;
  };

  // Capture Control A Register
  struct Sm3captctrlaFields {
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
  };  // struct Sm3captctrlaFields

  struct SM3CAPTCTRLA : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captctrlaFields::ARMA,
      typename Sm3captctrlaFields::ONESHOTA,
      typename Sm3captctrlaFields::EDGA0,
      typename Sm3captctrlaFields::EDGA1,
      typename Sm3captctrlaFields::INP_SELA,
      typename Sm3captctrlaFields::EDGCNTA_EN,
      typename Sm3captctrlaFields::CFAWM,
      typename Sm3captctrlaFields::CA0CNT,
      typename Sm3captctrlaFields::CA1CNT> {
    using eARMA = typename Sm3captctrlaFields::eARMA;
    using eONESHOTA = typename Sm3captctrlaFields::eONESHOTA;
    using eEDGA0 = typename Sm3captctrlaFields::eEDGA0;
    using eEDGA1 = typename Sm3captctrlaFields::eEDGA1;
    using eINP_SELA = typename Sm3captctrlaFields::eINP_SELA;
    using eEDGCNTA_EN = typename Sm3captctrlaFields::eEDGCNTA_EN;
    using ARMA = typename Sm3captctrlaFields::ARMA;
    using ONESHOTA = typename Sm3captctrlaFields::ONESHOTA;
    using EDGA0 = typename Sm3captctrlaFields::EDGA0;
    using EDGA1 = typename Sm3captctrlaFields::EDGA1;
    using INP_SELA = typename Sm3captctrlaFields::INP_SELA;
    using EDGCNTA_EN = typename Sm3captctrlaFields::EDGCNTA_EN;
    using CFAWM = typename Sm3captctrlaFields::CFAWM;
    using CA0CNT = typename Sm3captctrlaFields::CA0CNT;
    using CA1CNT = typename Sm3captctrlaFields::CA1CNT;
  };

  // Capture Compare A Register
  struct Sm3captcompaFields {
    // Edge Compare A
    using EDGCMPA = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter A
    using EDGCNTA = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3captcompaFields

  struct SM3CAPTCOMPA : ftl::mmio::Register<
      kBase + 0x156u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captcompaFields::EDGCMPA,
      typename Sm3captcompaFields::EDGCNTA> {
    using EDGCMPA = typename Sm3captcompaFields::EDGCMPA;
    using EDGCNTA = typename Sm3captcompaFields::EDGCNTA;
  };

  // Capture Control B Register
  struct Sm3captctrlbFields {
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
  };  // struct Sm3captctrlbFields

  struct SM3CAPTCTRLB : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captctrlbFields::ARMB,
      typename Sm3captctrlbFields::ONESHOTB,
      typename Sm3captctrlbFields::EDGB0,
      typename Sm3captctrlbFields::EDGB1,
      typename Sm3captctrlbFields::INP_SELB,
      typename Sm3captctrlbFields::EDGCNTB_EN,
      typename Sm3captctrlbFields::CFBWM,
      typename Sm3captctrlbFields::CB0CNT,
      typename Sm3captctrlbFields::CB1CNT> {
    using eARMB = typename Sm3captctrlbFields::eARMB;
    using eONESHOTB = typename Sm3captctrlbFields::eONESHOTB;
    using eEDGB0 = typename Sm3captctrlbFields::eEDGB0;
    using eEDGB1 = typename Sm3captctrlbFields::eEDGB1;
    using eINP_SELB = typename Sm3captctrlbFields::eINP_SELB;
    using eEDGCNTB_EN = typename Sm3captctrlbFields::eEDGCNTB_EN;
    using ARMB = typename Sm3captctrlbFields::ARMB;
    using ONESHOTB = typename Sm3captctrlbFields::ONESHOTB;
    using EDGB0 = typename Sm3captctrlbFields::EDGB0;
    using EDGB1 = typename Sm3captctrlbFields::EDGB1;
    using INP_SELB = typename Sm3captctrlbFields::INP_SELB;
    using EDGCNTB_EN = typename Sm3captctrlbFields::EDGCNTB_EN;
    using CFBWM = typename Sm3captctrlbFields::CFBWM;
    using CB0CNT = typename Sm3captctrlbFields::CB0CNT;
    using CB1CNT = typename Sm3captctrlbFields::CB1CNT;
  };

  // Capture Compare B Register
  struct Sm3captcompbFields {
    // Edge Compare B
    using EDGCMPB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter B
    using EDGCNTB = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3captcompbFields

  struct SM3CAPTCOMPB : ftl::mmio::Register<
      kBase + 0x15Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captcompbFields::EDGCMPB,
      typename Sm3captcompbFields::EDGCNTB> {
    using EDGCMPB = typename Sm3captcompbFields::EDGCMPB;
    using EDGCNTB = typename Sm3captcompbFields::EDGCNTB;
  };

  // Capture Control X Register
  struct Sm3captctrlxFields {
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
  };  // struct Sm3captctrlxFields

  struct SM3CAPTCTRLX : ftl::mmio::Register<
      kBase + 0x15Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captctrlxFields::ARMX,
      typename Sm3captctrlxFields::ONESHOTX,
      typename Sm3captctrlxFields::EDGX0,
      typename Sm3captctrlxFields::EDGX1,
      typename Sm3captctrlxFields::INP_SELX,
      typename Sm3captctrlxFields::EDGCNTX_EN,
      typename Sm3captctrlxFields::CFXWM,
      typename Sm3captctrlxFields::CX0CNT,
      typename Sm3captctrlxFields::CX1CNT> {
    using eARMX = typename Sm3captctrlxFields::eARMX;
    using eONESHOTX = typename Sm3captctrlxFields::eONESHOTX;
    using eEDGX0 = typename Sm3captctrlxFields::eEDGX0;
    using eEDGX1 = typename Sm3captctrlxFields::eEDGX1;
    using eINP_SELX = typename Sm3captctrlxFields::eINP_SELX;
    using eEDGCNTX_EN = typename Sm3captctrlxFields::eEDGCNTX_EN;
    using ARMX = typename Sm3captctrlxFields::ARMX;
    using ONESHOTX = typename Sm3captctrlxFields::ONESHOTX;
    using EDGX0 = typename Sm3captctrlxFields::EDGX0;
    using EDGX1 = typename Sm3captctrlxFields::EDGX1;
    using INP_SELX = typename Sm3captctrlxFields::INP_SELX;
    using EDGCNTX_EN = typename Sm3captctrlxFields::EDGCNTX_EN;
    using CFXWM = typename Sm3captctrlxFields::CFXWM;
    using CX0CNT = typename Sm3captctrlxFields::CX0CNT;
    using CX1CNT = typename Sm3captctrlxFields::CX1CNT;
  };

  // Capture Compare X Register
  struct Sm3captcompxFields {
    // Edge Compare X
    using EDGCMPX = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Edge Counter X
    using EDGCNTX = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3captcompxFields

  struct SM3CAPTCOMPX : ftl::mmio::Register<
      kBase + 0x15Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Sm3captcompxFields::EDGCMPX,
      typename Sm3captcompxFields::EDGCNTX> {
    using EDGCMPX = typename Sm3captcompxFields::EDGCMPX;
    using EDGCNTX = typename Sm3captcompxFields::EDGCNTX;
  };

  // Capture Value 0 Register
  struct Sm3cval0Fields {
    // Capture Value 0
    using CAPTVAL0 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval0Fields

  struct SM3CVAL0 : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval0Fields::CAPTVAL0> {
    using CAPTVAL0 = typename Sm3cval0Fields::CAPTVAL0;
  };

  // Capture Value 0 Cycle Register
  struct Sm3cval0cycFields {
    // Capture Value 0 Cycle
    using CVAL0CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval0cycFields

  struct SM3CVAL0CYC : ftl::mmio::Register<
      kBase + 0x162u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval0cycFields::CVAL0CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL0CYC = typename Sm3cval0cycFields::CVAL0CYC;
  };

  // Capture Value 1 Register
  struct Sm3cval1Fields {
    // Capture Value 1
    using CAPTVAL1 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval1Fields

  struct SM3CVAL1 : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval1Fields::CAPTVAL1> {
    using CAPTVAL1 = typename Sm3cval1Fields::CAPTVAL1;
  };

  // Capture Value 1 Cycle Register
  struct Sm3cval1cycFields {
    // Capture Value 1 Cycle
    using CVAL1CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval1cycFields

  struct SM3CVAL1CYC : ftl::mmio::Register<
      kBase + 0x166u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval1cycFields::CVAL1CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL1CYC = typename Sm3cval1cycFields::CVAL1CYC;
  };

  // Capture Value 2 Register
  struct Sm3cval2Fields {
    // Capture Value 2
    using CAPTVAL2 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval2Fields

  struct SM3CVAL2 : ftl::mmio::Register<
      kBase + 0x168u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval2Fields::CAPTVAL2> {
    using CAPTVAL2 = typename Sm3cval2Fields::CAPTVAL2;
  };

  // Capture Value 2 Cycle Register
  struct Sm3cval2cycFields {
    // Capture Value 2 Cycle
    using CVAL2CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval2cycFields

  struct SM3CVAL2CYC : ftl::mmio::Register<
      kBase + 0x16Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval2cycFields::CVAL2CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL2CYC = typename Sm3cval2cycFields::CVAL2CYC;
  };

  // Capture Value 3 Register
  struct Sm3cval3Fields {
    // Capture Value 3
    using CAPTVAL3 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval3Fields

  struct SM3CVAL3 : ftl::mmio::Register<
      kBase + 0x16Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval3Fields::CAPTVAL3> {
    using CAPTVAL3 = typename Sm3cval3Fields::CAPTVAL3;
  };

  // Capture Value 3 Cycle Register
  struct Sm3cval3cycFields {
    // Capture Value 3 Cycle
    using CVAL3CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval3cycFields

  struct SM3CVAL3CYC : ftl::mmio::Register<
      kBase + 0x16Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval3cycFields::CVAL3CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL3CYC = typename Sm3cval3cycFields::CVAL3CYC;
  };

  // Capture Value 4 Register
  struct Sm3cval4Fields {
    // Capture Value 4
    using CAPTVAL4 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval4Fields

  struct SM3CVAL4 : ftl::mmio::Register<
      kBase + 0x170u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval4Fields::CAPTVAL4> {
    using CAPTVAL4 = typename Sm3cval4Fields::CAPTVAL4;
  };

  // Capture Value 4 Cycle Register
  struct Sm3cval4cycFields {
    // Capture Value 4 Cycle
    using CVAL4CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval4cycFields

  struct SM3CVAL4CYC : ftl::mmio::Register<
      kBase + 0x172u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval4cycFields::CVAL4CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL4CYC = typename Sm3cval4cycFields::CVAL4CYC;
  };

  // Capture Value 5 Register
  struct Sm3cval5Fields {
    // Capture Value 5
    using CAPTVAL5 = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval5Fields

  struct SM3CVAL5 : ftl::mmio::Register<
      kBase + 0x174u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval5Fields::CAPTVAL5> {
    using CAPTVAL5 = typename Sm3cval5Fields::CAPTVAL5;
  };

  // Capture Value 5 Cycle Register
  struct Sm3cval5cycFields {
    // Capture Value 5 Cycle
    using CVAL5CYC = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Sm3cval5cycFields

  struct SM3CVAL5CYC : ftl::mmio::Register<
      kBase + 0x176u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename Sm3cval5cycFields::CVAL5CYC,
      ftl::mmio::Reserved<12, 4>> {
    using CVAL5CYC = typename Sm3cval5cycFields::CVAL5CYC;
  };

  // Output Enable Register
  struct OutenFields {
    // PWM_X Output Enables
    using PWMX_EN = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Output Enables
    using PWMB_EN = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Output Enables
    using PWMA_EN = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OutenFields

  struct OUTEN : ftl::mmio::Register<
      kBase + 0x180u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename OutenFields::PWMX_EN,
      typename OutenFields::PWMB_EN,
      typename OutenFields::PWMA_EN,
      ftl::mmio::Reserved<4, 12>> {
    using PWMX_EN = typename OutenFields::PWMX_EN;
    using PWMB_EN = typename OutenFields::PWMB_EN;
    using PWMA_EN = typename OutenFields::PWMA_EN;
  };

  // Mask Register
  struct MaskFields {
    // PWM_X Masks
    using MASKX = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_B Masks
    using MASKB = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PWM_A Masks
    using MASKA = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Update Mask Bits Immediately
    using UPDATE_MASK = ftl::mmio::Field<4, 12, std::uint8_t, ftl::mmio::WO, ftl::mmio::Normal>;
  };  // struct MaskFields

  struct MASK : ftl::mmio::Register<
      kBase + 0x182u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename MaskFields::MASKX,
      typename MaskFields::MASKB,
      typename MaskFields::MASKA,
      typename MaskFields::UPDATE_MASK> {
    using MASKX = typename MaskFields::MASKX;
    using MASKB = typename MaskFields::MASKB;
    using MASKA = typename MaskFields::MASKA;
    using UPDATE_MASK = typename MaskFields::UPDATE_MASK;
  };

  // Software Controlled Output Register
  struct SwcoutFields {
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
  };  // struct SwcoutFields

  struct SWCOUT : ftl::mmio::Register<
      kBase + 0x184u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename SwcoutFields::SM0OUT45,
      typename SwcoutFields::SM0OUT23,
      typename SwcoutFields::SM1OUT45,
      typename SwcoutFields::SM1OUT23,
      typename SwcoutFields::SM2OUT45,
      typename SwcoutFields::SM2OUT23,
      typename SwcoutFields::SM3OUT45,
      typename SwcoutFields::SM3OUT23,
      ftl::mmio::Reserved<8, 8>> {
    using eSM0OUT45 = typename SwcoutFields::eSM0OUT45;
    using eSM0OUT23 = typename SwcoutFields::eSM0OUT23;
    using eSM1OUT45 = typename SwcoutFields::eSM1OUT45;
    using eSM1OUT23 = typename SwcoutFields::eSM1OUT23;
    using eSM2OUT45 = typename SwcoutFields::eSM2OUT45;
    using eSM2OUT23 = typename SwcoutFields::eSM2OUT23;
    using eSM3OUT45 = typename SwcoutFields::eSM3OUT45;
    using eSM3OUT23 = typename SwcoutFields::eSM3OUT23;
    using SM0OUT45 = typename SwcoutFields::SM0OUT45;
    using SM0OUT23 = typename SwcoutFields::SM0OUT23;
    using SM1OUT45 = typename SwcoutFields::SM1OUT45;
    using SM1OUT23 = typename SwcoutFields::SM1OUT23;
    using SM2OUT45 = typename SwcoutFields::SM2OUT45;
    using SM2OUT23 = typename SwcoutFields::SM2OUT23;
    using SM3OUT45 = typename SwcoutFields::SM3OUT45;
    using SM3OUT23 = typename SwcoutFields::SM3OUT23;
  };

  // PWM Source Select Register
  struct DtsrcselFields {
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
  };  // struct DtsrcselFields

  struct DTSRCSEL : ftl::mmio::Register<
      kBase + 0x186u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename DtsrcselFields::SM0SEL45,
      typename DtsrcselFields::SM0SEL23,
      typename DtsrcselFields::SM1SEL45,
      typename DtsrcselFields::SM1SEL23,
      typename DtsrcselFields::SM2SEL45,
      typename DtsrcselFields::SM2SEL23,
      typename DtsrcselFields::SM3SEL45,
      typename DtsrcselFields::SM3SEL23> {
    using eSM0SEL45 = typename DtsrcselFields::eSM0SEL45;
    using eSM0SEL23 = typename DtsrcselFields::eSM0SEL23;
    using eSM1SEL45 = typename DtsrcselFields::eSM1SEL45;
    using eSM1SEL23 = typename DtsrcselFields::eSM1SEL23;
    using eSM2SEL45 = typename DtsrcselFields::eSM2SEL45;
    using eSM2SEL23 = typename DtsrcselFields::eSM2SEL23;
    using eSM3SEL45 = typename DtsrcselFields::eSM3SEL45;
    using eSM3SEL23 = typename DtsrcselFields::eSM3SEL23;
    using SM0SEL45 = typename DtsrcselFields::SM0SEL45;
    using SM0SEL23 = typename DtsrcselFields::SM0SEL23;
    using SM1SEL45 = typename DtsrcselFields::SM1SEL45;
    using SM1SEL23 = typename DtsrcselFields::SM1SEL23;
    using SM2SEL45 = typename DtsrcselFields::SM2SEL45;
    using SM2SEL23 = typename DtsrcselFields::SM2SEL23;
    using SM3SEL45 = typename DtsrcselFields::SM3SEL45;
    using SM3SEL23 = typename DtsrcselFields::SM3SEL23;
  };

  // Master Control Register
  struct MctrlFields {
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
  };  // struct MctrlFields

  struct MCTRL : ftl::mmio::Register<
      kBase + 0x188u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename MctrlFields::LDOK,
      typename MctrlFields::CLDOK,
      typename MctrlFields::RUN,
      typename MctrlFields::IPOL> {
    using eLDOK = typename MctrlFields::eLDOK;
    using eRUN = typename MctrlFields::eRUN;
    using eIPOL = typename MctrlFields::eIPOL;
    using LDOK = typename MctrlFields::LDOK;
    using CLDOK = typename MctrlFields::CLDOK;
    using RUN = typename MctrlFields::RUN;
    using IPOL = typename MctrlFields::IPOL;
  };

  // Fault Control Register
  struct Fctrl0Fields {
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
  };  // struct Fctrl0Fields

  struct FCTRL0 : ftl::mmio::Register<
      kBase + 0x18Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Fctrl0Fields::FIE,
      typename Fctrl0Fields::FSAFE,
      typename Fctrl0Fields::FAUTO,
      typename Fctrl0Fields::FLVL> {
    using eFIE = typename Fctrl0Fields::eFIE;
    using eFSAFE = typename Fctrl0Fields::eFSAFE;
    using eFAUTO = typename Fctrl0Fields::eFAUTO;
    using eFLVL = typename Fctrl0Fields::eFLVL;
    using FIE = typename Fctrl0Fields::FIE;
    using FSAFE = typename Fctrl0Fields::FSAFE;
    using FAUTO = typename Fctrl0Fields::FAUTO;
    using FLVL = typename Fctrl0Fields::FLVL;
  };

  // Fault Status Register
  struct Fsts0Fields {
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
  };  // struct Fsts0Fields

  struct FSTS0 : ftl::mmio::Register<
      kBase + 0x18Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Fsts0Fields::FFLAG,
      typename Fsts0Fields::FFULL,
      typename Fsts0Fields::FFPIN,
      typename Fsts0Fields::FHALF> {
    using eFFLAG = typename Fsts0Fields::eFFLAG;
    using eFFULL = typename Fsts0Fields::eFFULL;
    using eFHALF = typename Fsts0Fields::eFHALF;
    using FFLAG = typename Fsts0Fields::FFLAG;
    using FFULL = typename Fsts0Fields::FFULL;
    using FFPIN = typename Fsts0Fields::FFPIN;
    using FHALF = typename Fsts0Fields::FHALF;
  };

  // Fault Filter Register
  struct Ffilt0Fields {
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
  };  // struct Ffilt0Fields

  struct FFILT0 : ftl::mmio::Register<
      kBase + 0x190u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ffilt0Fields::FILT_PER,
      typename Ffilt0Fields::FILT_CNT,
      ftl::mmio::Reserved<4, 11>,
      typename Ffilt0Fields::GSTR> {
    using eGSTR = typename Ffilt0Fields::eGSTR;
    using FILT_PER = typename Ffilt0Fields::FILT_PER;
    using FILT_CNT = typename Ffilt0Fields::FILT_CNT;
    using GSTR = typename Ffilt0Fields::GSTR;
  };

  // Fault Test Register
  struct Ftst0Fields {
    enum class eFTEST : std::uint32_t {
      // No fault
      eNO_FAULT = 0,
      // Cause a simulated fault
      eFAULT = 1,
    };

    // Fault Test
    using FTEST = ftl::mmio::Field<1, 0, eFTEST, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ftst0Fields

  struct FTST0 : ftl::mmio::Register<
      kBase + 0x192u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ftst0Fields::FTEST,
      ftl::mmio::Reserved<15, 1>> {
    using eFTEST = typename Ftst0Fields::eFTEST;
    using FTEST = typename Ftst0Fields::FTEST;
  };

  // Fault Control 2 Register
  struct Fctrl20Fields {
    enum class eNOCOMB : std::uint32_t {
      // There is a combinational link from the fault inputs to the PWM outputs. The fault inputs are combined with the filtered and latched fault signals to disable the PWM outputs.
      eENABLED = 0,
      // The direct combinational path from the fault inputs to the PWM outputs is disabled and the filtered and latched fault signals are used to disable the PWM outputs.
      eDISABLED = 1,
    };

    // No Combinational Path From Fault Input To PWM Output
    using NOCOMB = ftl::mmio::Field<4, 0, eNOCOMB, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Fctrl20Fields

  struct FCTRL20 : ftl::mmio::Register<
      kBase + 0x194u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Fctrl20Fields::NOCOMB,
      ftl::mmio::Reserved<12, 4>> {
    using eNOCOMB = typename Fctrl20Fields::eNOCOMB;
    using NOCOMB = typename Fctrl20Fields::NOCOMB;
  };

};

}  // namespace regs