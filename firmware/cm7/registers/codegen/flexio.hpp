#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// FLEXIO
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Flexio {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Flexio: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x400AC000u :
      Instance == 2u ? 0x400B0000u :
      0u;

  // Version ID Register
  struct VeridFields {
    enum class eFEATURE : std::uint32_t {
      // Standard features implemented.
      estandard = 0,
      // Supports state, logic and parallel modes.
      estate_logic_parallel = 1,
      // Supports pin control registers.
      epinctrl = 2,
      // Supports state, logic and parallel modes; plus pin control registers.
      estate_logic_parallel_pinctrl = 3,
    };

    // Feature Specification Number
    using FEATURE = ftl::mmio::Field<16, 0, eFEATURE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor Version Number
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major Version Number
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VeridFields

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x02000001u,
      ftl::mmio::RO,
      typename VeridFields::FEATURE,
      typename VeridFields::MINOR,
      typename VeridFields::MAJOR> {
    using eFEATURE = typename VeridFields::eFEATURE;
    using FEATURE = typename VeridFields::FEATURE;
    using MINOR = typename VeridFields::MINOR;
    using MAJOR = typename VeridFields::MAJOR;
  };

  // Parameter Register
  struct ParamFields {
    // Shifter Number
    using SHIFTER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Timer Number
    using TIMER = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Pin Number
    using PIN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Trigger Number
    using TRIGGER = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ParamFields

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x02200808u,
      ftl::mmio::RO,
      typename ParamFields::SHIFTER,
      typename ParamFields::TIMER,
      typename ParamFields::PIN,
      typename ParamFields::TRIGGER> {
    using SHIFTER = typename ParamFields::SHIFTER;
    using TIMER = typename ParamFields::TIMER;
    using PIN = typename ParamFields::PIN;
    using TRIGGER = typename ParamFields::TRIGGER;
  };

  // FlexIO Control Register
  struct CtrlFields {
    enum class eFLEXEN : std::uint32_t {
      // FlexIO module is disabled.
      edisable = 0,
      // FlexIO module is enabled.
      eenable = 1,
    };

    enum class eSWRST : std::uint32_t {
      // Software reset is disabled
      edisable = 0,
      // Software reset is enabled, all FlexIO registers except the Control Register are reset.
      eenable = 1,
    };

    enum class eFASTACC : std::uint32_t {
      // Configures for normal register accesses to FlexIO
      enormal = 0,
      // Configures for fast register accesses to FlexIO
      efast = 1,
    };

    enum class eDBGE : std::uint32_t {
      // FlexIO is disabled in debug modes.
      edisable = 0,
      // FlexIO is enabled in debug modes
      eemable = 1,
    };

    enum class eDOZEN : std::uint32_t {
      // FlexIO enabled in Doze modes.
      eenable = 0,
      // FlexIO disabled in Doze modes.
      edisable = 1,
    };

    // FlexIO Enable
    using FLEXEN = ftl::mmio::Field<1, 0, eFLEXEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software Reset
    using SWRST = ftl::mmio::Field<1, 1, eSWRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fast Access
    using FASTACC = ftl::mmio::Field<1, 2, eFASTACC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Debug Enable
    using DBGE = ftl::mmio::Field<1, 30, eDBGE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Doze Enable
    using DOZEN = ftl::mmio::Field<1, 31, eDOZEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CtrlFields::FLEXEN,
      typename CtrlFields::SWRST,
      typename CtrlFields::FASTACC,
      ftl::mmio::Reserved<27, 3>,
      typename CtrlFields::DBGE,
      typename CtrlFields::DOZEN> {
    using eFLEXEN = typename CtrlFields::eFLEXEN;
    using eSWRST = typename CtrlFields::eSWRST;
    using eFASTACC = typename CtrlFields::eFASTACC;
    using eDBGE = typename CtrlFields::eDBGE;
    using eDOZEN = typename CtrlFields::eDOZEN;
    using FLEXEN = typename CtrlFields::FLEXEN;
    using SWRST = typename CtrlFields::SWRST;
    using FASTACC = typename CtrlFields::FASTACC;
    using DBGE = typename CtrlFields::DBGE;
    using DOZEN = typename CtrlFields::DOZEN;
  };

  // Pin State Register
  struct PinFields {
    // Pin Data Input
    using PDI = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PinFields

  struct PIN : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename PinFields::PDI> {
    using PDI = typename PinFields::PDI;
  };

  // Shifter Status Register
  struct ShiftstatFields {
    // Shifter Status Flag
    using SSF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct ShiftstatFields

  struct SHIFTSTAT : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftstatFields::SSF,
      ftl::mmio::Reserved<24, 8>> {
    using SSF = typename ShiftstatFields::SSF;
  };

  // Shifter Error Register
  struct ShifterrFields {
    // Shifter Error Flags
    using SEF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct ShifterrFields

  struct SHIFTERR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShifterrFields::SEF,
      ftl::mmio::Reserved<24, 8>> {
    using SEF = typename ShifterrFields::SEF;
  };

  // Timer Status Register
  struct TimstatFields {
    // Timer Status Flags
    using TSF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct TimstatFields

  struct TIMSTAT : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TimstatFields::TSF,
      ftl::mmio::Reserved<24, 8>> {
    using TSF = typename TimstatFields::TSF;
  };

  // Shifter Status Interrupt Enable
  struct ShiftsienFields {
    // Shifter Status Interrupt Enable
    using SSIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftsienFields

  struct SHIFTSIEN : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftsienFields::SSIE,
      ftl::mmio::Reserved<24, 8>> {
    using SSIE = typename ShiftsienFields::SSIE;
  };

  // Shifter Error Interrupt Enable
  struct ShifteienFields {
    // Shifter Error Interrupt Enable
    using SEIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShifteienFields

  struct SHIFTEIEN : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShifteienFields::SEIE,
      ftl::mmio::Reserved<24, 8>> {
    using SEIE = typename ShifteienFields::SEIE;
  };

  // Timer Interrupt Enable Register
  struct TimienFields {
    // Timer Status Interrupt Enable
    using TEIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TimienFields

  struct TIMIEN : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TimienFields::TEIE,
      ftl::mmio::Reserved<24, 8>> {
    using TEIE = typename TimienFields::TEIE;
  };

  // Shifter Status DMA Enable
  struct ShiftsdenFields {
    // Shifter Status DMA Enable
    using SSDE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftsdenFields

  struct SHIFTSDEN : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftsdenFields::SSDE,
      ftl::mmio::Reserved<24, 8>> {
    using SSDE = typename ShiftsdenFields::SSDE;
  };

  // Timer Status DMA Enable
  struct TimersdenFields {
    // Timer Status DMA Enable
    using TSDE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TimersdenFields

  struct TIMERSDEN : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TimersdenFields::TSDE,
      ftl::mmio::Reserved<24, 8>> {
    using TSDE = typename TimersdenFields::TSDE;
  };

  // Shifter State Register
  struct ShiftstateFields {
    // Current State Pointer
    using STATE = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftstateFields

  struct SHIFTSTATE : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftstateFields::STATE,
      ftl::mmio::Reserved<29, 3>> {
    using STATE = typename ShiftstateFields::STATE;
  };

  // Shifter Control N Register
  struct ShiftctlFields {
    enum class eSMOD : std::uint32_t {
      // Disabled.
      edisable = 0,
      // Receive mode. Captures the current Shifter content into the SHIFTBUF on expiration of the Timer.
      ereceive = 1,
      // Transmit mode. Load SHIFTBUF contents into the Shifter on expiration of the Timer.
      etransmit = 2,
      // Match Store mode. Shifter data is compared to SHIFTBUF content on expiration of the Timer.
      ematchstore = 4,
      // Match Continuous mode. Shifter data is continuously compared to SHIFTBUF contents.
      ematchcont = 5,
      // State mode. SHIFTBUF contents are used for storing programmable state attributes.
      estate = 6,
      // Logic mode. SHIFTBUF contents are used for implementing programmable logic look up table.
      elogic = 7,
    };

    enum class ePINPOL : std::uint32_t {
      // Pin is active high
      eactive_high = 0,
      // Pin is active low
      eactive_low = 1,
    };

    enum class ePINCFG : std::uint32_t {
      // Shifter pin output disabled
      edisable = 0,
      // Shifter pin open drain or bidirectional output enable
      eopend_bidirouten = 1,
      // Shifter pin bidirectional output data
      ebidir_outdata = 2,
      // Shifter pin output
      eoutput = 3,
    };

    enum class eTIMPOL : std::uint32_t {
      // Shift on posedge of Shift clock
      eposedge = 0,
      // Shift on negedge of Shift clock
      enegedge = 1,
    };

    // Shifter Mode
    using SMOD = ftl::mmio::Field<3, 0, eSMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Shifter Pin Polarity
    using PINPOL = ftl::mmio::Field<1, 7, ePINPOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Shifter Pin Select
    using PINSEL = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Shifter Pin Configuration
    using PINCFG = ftl::mmio::Field<2, 16, ePINCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Polarity
    using TIMPOL = ftl::mmio::Field<1, 23, eTIMPOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Select
    using TIMSEL = ftl::mmio::Field<3, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftctlFields

  template<std::uint32_t Index>
  struct SHIFTCTL : ftl::mmio::Register<
      kBase + 0x80u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftctlFields::SMOD,
      ftl::mmio::Reserved<4, 3>,
      typename ShiftctlFields::PINPOL,
      typename ShiftctlFields::PINSEL,
      ftl::mmio::Reserved<3, 13>,
      typename ShiftctlFields::PINCFG,
      ftl::mmio::Reserved<5, 18>,
      typename ShiftctlFields::TIMPOL,
      typename ShiftctlFields::TIMSEL,
      ftl::mmio::Reserved<5, 27>> {
    static_assert(Index < 8u, "SHIFTCTL: Index out of range");
    using eSMOD = typename ShiftctlFields::eSMOD;
    using ePINPOL = typename ShiftctlFields::ePINPOL;
    using ePINCFG = typename ShiftctlFields::ePINCFG;
    using eTIMPOL = typename ShiftctlFields::eTIMPOL;
    using SMOD = typename ShiftctlFields::SMOD;
    using PINPOL = typename ShiftctlFields::PINPOL;
    using PINSEL = typename ShiftctlFields::PINSEL;
    using PINCFG = typename ShiftctlFields::PINCFG;
    using TIMPOL = typename ShiftctlFields::TIMPOL;
    using TIMSEL = typename ShiftctlFields::TIMSEL;
  };

  // Shifter Configuration N Register
  struct ShiftcfgFields {
    enum class eSSTART : std::uint32_t {
      // Start bit disabled for transmitter/receiver/match store, transmitter loads data on enable
      evalue00 = 0,
      // Start bit disabled for transmitter/receiver/match store, transmitter loads data on first shift
      evalue01 = 1,
      // Transmitter outputs start bit value 0 before loading data on first shift, receiver/match store sets error flag if start bit is not 0
      evalue10 = 2,
      // Transmitter outputs start bit value 1 before loading data on first shift, receiver/match store sets error flag if start bit is not 1
      evalue11 = 3,
    };

    enum class eSSTOP : std::uint32_t {
      // Stop bit disabled for transmitter/receiver/match store
      evalue00 = 0,
      // Transmitter outputs stop bit value 0 on store, receiver/match store sets error flag if stop bit is not 0
      evalue10 = 2,
      // Transmitter outputs stop bit value 1 on store, receiver/match store sets error flag if stop bit is not 1
      evalue11 = 3,
    };

    enum class eINSRC : std::uint32_t {
      // Pin
      epin = 0,
      // Shifter N+1 Output
      eshifter_nplus1 = 1,
    };

    enum class eLATST : std::uint32_t {
      // Shift register stores the pre-shift register state.
      epreshift = 0,
      // Shift register stores the post-shift register state.
      epostshift = 1,
    };

    // Shifter Start bit
    using SSTART = ftl::mmio::Field<2, 0, eSSTART, ftl::mmio::RW, ftl::mmio::Normal>;
    // Shifter Stop bit
    using SSTOP = ftl::mmio::Field<2, 4, eSSTOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Source
    using INSRC = ftl::mmio::Field<1, 8, eINSRC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Late Store
    using LATST = ftl::mmio::Field<1, 9, eLATST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Parallel Width
    using PWIDTH = ftl::mmio::Field<5, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftcfgFields

  template<std::uint32_t Index>
  struct SHIFTCFG : ftl::mmio::Register<
      kBase + 0x100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftcfgFields::SSTART,
      ftl::mmio::Reserved<2, 2>,
      typename ShiftcfgFields::SSTOP,
      ftl::mmio::Reserved<2, 6>,
      typename ShiftcfgFields::INSRC,
      typename ShiftcfgFields::LATST,
      ftl::mmio::Reserved<6, 10>,
      typename ShiftcfgFields::PWIDTH,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(Index < 8u, "SHIFTCFG: Index out of range");
    using eSSTART = typename ShiftcfgFields::eSSTART;
    using eSSTOP = typename ShiftcfgFields::eSSTOP;
    using eINSRC = typename ShiftcfgFields::eINSRC;
    using eLATST = typename ShiftcfgFields::eLATST;
    using SSTART = typename ShiftcfgFields::SSTART;
    using SSTOP = typename ShiftcfgFields::SSTOP;
    using INSRC = typename ShiftcfgFields::INSRC;
    using LATST = typename ShiftcfgFields::LATST;
    using PWIDTH = typename ShiftcfgFields::PWIDTH;
  };

  // Shifter Buffer N Register
  struct ShiftbufFields {
    // Shift Buffer
    using SHIFTBUF = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufFields

  template<std::uint32_t Index>
  struct SHIFTBUF : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufFields::SHIFTBUF> {
    static_assert(Index < 8u, "SHIFTBUF: Index out of range");
    using VALUE = typename ShiftbufFields::SHIFTBUF;
  };

  // Shifter Buffer N Bit Swapped Register
  struct ShiftbufbisFields {
    // Shift Buffer
    using SHIFTBUFBIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufbisFields

  template<std::uint32_t Index>
  struct SHIFTBUFBIS : ftl::mmio::Register<
      kBase + 0x280u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufbisFields::SHIFTBUFBIS> {
    static_assert(Index < 8u, "SHIFTBUFBIS: Index out of range");
    using VALUE = typename ShiftbufbisFields::SHIFTBUFBIS;
  };

  // Shifter Buffer N Byte Swapped Register
  struct ShiftbufbysFields {
    // Shift Buffer
    using SHIFTBUFBYS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufbysFields

  template<std::uint32_t Index>
  struct SHIFTBUFBYS : ftl::mmio::Register<
      kBase + 0x300u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufbysFields::SHIFTBUFBYS> {
    static_assert(Index < 8u, "SHIFTBUFBYS: Index out of range");
    using VALUE = typename ShiftbufbysFields::SHIFTBUFBYS;
  };

  // Shifter Buffer N Bit Byte Swapped Register
  struct ShiftbufbbsFields {
    // Shift Buffer
    using SHIFTBUFBBS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufbbsFields

  template<std::uint32_t Index>
  struct SHIFTBUFBBS : ftl::mmio::Register<
      kBase + 0x380u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufbbsFields::SHIFTBUFBBS> {
    static_assert(Index < 8u, "SHIFTBUFBBS: Index out of range");
    using VALUE = typename ShiftbufbbsFields::SHIFTBUFBBS;
  };

  // Timer Control N Register
  struct TimctlFields {
    enum class eTIMOD : std::uint32_t {
      // Timer Disabled.
      edisable = 0,
      // Dual 8-bit counters baud mode.
      edual8bit_baud = 1,
      // Dual 8-bit counters PWM high mode.
      edual8bit_pwm_h = 2,
      // Single 16-bit counter mode.
      esingle16bit = 3,
      // Single 16-bit counter disable mode.
      esingle16bit_disable = 4,
      // Dual 8-bit counters word mode.
      edual8bit_word = 5,
      // Dual 8-bit counters PWM low mode.
      edual8bit_pwm_l = 6,
      // Single 16-bit input capture mode.
      esingle16bit_in_capture = 7,
    };

    enum class eONETIM : std::uint32_t {
      // The timer enable event is generated as normal.
      enot_blocked = 0,
      // The timer enable event is blocked unless timer status flag is clear.
      eblocked = 1,
    };

    enum class ePININS : std::uint32_t {
      // Timer pin input and output are selected by PINSEL.
      epinsel = 0,
      // Timer pin input is selected by PINSEL+1, timer pin output remains selected by PINSEL.
      epinselplus1 = 1,
    };

    enum class ePINPOL : std::uint32_t {
      // Pin is active high
      eactive_high = 0,
      // Pin is active low
      eactive_low = 1,
    };

    enum class ePINCFG : std::uint32_t {
      // Timer pin output disabled
      eoutdisable = 0,
      // Timer pin open drain or bidirectional output enable
      eopend_bidirouten = 1,
      // Timer pin bidirectional output data
      ebidir_outdata = 2,
      // Timer pin output
      eoutput = 3,
    };

    enum class eTRGSRC : std::uint32_t {
      // External trigger selected
      eext_trig = 0,
      // Internal trigger selected
      einternal_trig = 1,
    };

    enum class eTRGPOL : std::uint32_t {
      // Trigger active high
      eactive_high = 0,
      // Trigger active low
      eactive_low = 1,
    };

    // Timer Mode
    using TIMOD = ftl::mmio::Field<3, 0, eTIMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer One Time Operation
    using ONETIM = ftl::mmio::Field<1, 5, eONETIM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Pin Input Select
    using PININS = ftl::mmio::Field<1, 6, ePININS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Pin Polarity
    using PINPOL = ftl::mmio::Field<1, 7, ePINPOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Pin Select
    using PINSEL = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Pin Configuration
    using PINCFG = ftl::mmio::Field<2, 16, ePINCFG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Source
    using TRGSRC = ftl::mmio::Field<1, 22, eTRGSRC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Polarity
    using TRGPOL = ftl::mmio::Field<1, 23, eTRGPOL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger Select
    using TRGSEL = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TimctlFields

  template<std::uint32_t Index>
  struct TIMCTL : ftl::mmio::Register<
      kBase + 0x400u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TimctlFields::TIMOD,
      ftl::mmio::Reserved<2, 3>,
      typename TimctlFields::ONETIM,
      typename TimctlFields::PININS,
      typename TimctlFields::PINPOL,
      typename TimctlFields::PINSEL,
      ftl::mmio::Reserved<3, 13>,
      typename TimctlFields::PINCFG,
      ftl::mmio::Reserved<4, 18>,
      typename TimctlFields::TRGSRC,
      typename TimctlFields::TRGPOL,
      typename TimctlFields::TRGSEL,
      ftl::mmio::Reserved<2, 30>> {
    static_assert(Index < 8u, "TIMCTL: Index out of range");
    using eTIMOD = typename TimctlFields::eTIMOD;
    using eONETIM = typename TimctlFields::eONETIM;
    using ePININS = typename TimctlFields::ePININS;
    using ePINPOL = typename TimctlFields::ePINPOL;
    using ePINCFG = typename TimctlFields::ePINCFG;
    using eTRGSRC = typename TimctlFields::eTRGSRC;
    using eTRGPOL = typename TimctlFields::eTRGPOL;
    using TIMOD = typename TimctlFields::TIMOD;
    using ONETIM = typename TimctlFields::ONETIM;
    using PININS = typename TimctlFields::PININS;
    using PINPOL = typename TimctlFields::PINPOL;
    using PINSEL = typename TimctlFields::PINSEL;
    using PINCFG = typename TimctlFields::PINCFG;
    using TRGSRC = typename TimctlFields::TRGSRC;
    using TRGPOL = typename TimctlFields::TRGPOL;
    using TRGSEL = typename TimctlFields::TRGSEL;
  };

  // Timer Configuration N Register
  struct TimcfgFields {
    enum class eTSTART : std::uint32_t {
      // Start bit disabled
      edisable = 0,
      // Start bit enabled
      eenable = 1,
    };

    enum class eTSTOP : std::uint32_t {
      // Stop bit disabled
      estop_disable = 0,
      // Stop bit is enabled on timer compare
      eenable_tmrcmp = 1,
      // Stop bit is enabled on timer disable
      eenable_tmrdisable = 2,
      // Stop bit is enabled on timer compare and timer disable
      eenable_tmr_cmp_dis = 3,
    };

    enum class eTIMENA : std::uint32_t {
      // Timer always enabled
      eenable = 0,
      // Timer enabled on Timer N-1 enable
      etmr_nminus1_en = 1,
      // Timer enabled on Trigger high
      etmr_trighi_en = 2,
      // Timer enabled on Trigger high and Pin high
      etmr_trig_pin_hi_en = 3,
      // Timer enabled on Pin rising edge
      etmr_pinrise_en = 4,
      // Timer enabled on Pin rising edge and Trigger high
      etmr_pinrise_trighi_en = 5,
      // Timer enabled on Trigger rising edge
      etmr_trigrise_en = 6,
      // Timer enabled on Trigger rising or falling edge
      etmr_trigedge_en = 7,
    };

    enum class eTIMDIS : std::uint32_t {
      // Timer never disabled
      enever = 0,
      // Timer disabled on Timer N-1 disable
      etmr_nminus1 = 1,
      // Timer disabled on Timer compare (upper 8-bits match and decrement)
      etmr_cmp = 2,
      // Timer disabled on Timer compare (upper 8-bits match and decrement) and Trigger Low
      etmr_cmp_triglow = 3,
      // Timer disabled on Pin rising or falling edge
      epin_edge = 4,
      // Timer disabled on Pin rising or falling edge provided Trigger is high
      epin_edge_trighi = 5,
      // Timer disabled on Trigger falling edge
      etrig_falledge = 6,
    };

    enum class eTIMRST : std::uint32_t {
      // Timer never reset
      enever = 0,
      // Timer reset on Timer Output high.
      etmr_out_hi = 1,
      // Timer reset on Timer Pin equal to Timer Output
      epin_eq_tmr_out = 2,
      // Timer reset on Timer Trigger equal to Timer Output
      etrig_eq_tmr_out = 3,
      // Timer reset on Timer Pin rising edge
      epin_rise_edge = 4,
      // Timer reset on Trigger rising edge
      etrig_rise_edge = 6,
      // Timer reset on Trigger rising or falling edge
      etrig_edge = 7,
    };

    enum class eTIMDEC : std::uint32_t {
      // Decrement counter on FlexIO clock, Shift clock equals Timer output.
      eflexio_clk_shiftclk_tmr_out = 0,
      // Decrement counter on Trigger input (both edges), Shift clock equals Timer output.
      etrig_edge_shiftclk_tmr_out = 1,
      // Decrement counter on Pin input (both edges), Shift clock equals Pin input.
      epin_edge_shiftclk_tmr_out = 2,
      // Decrement counter on Trigger input (both edges), Shift clock equals Trigger input.
      etrig_edge_shiftclk_trig_in = 3,
      // Decrement counter on FlexIO clock divided by 16, Shift clock equals Timer output.
      eflexio_clk_div16_shiftclk_tmr_out = 4,
      // Decrement counter on FlexIO clock divided by 256, Shift clock equals Timer output.
      eflexio_clk_div256_shiftclk_tmr_out = 5,
      // Decrement counter on Pin input (rising edge), Shift clock equals Pin input.
      epin_rise_shiftclk_pin_in = 6,
      // Decrement counter on Trigger input (rising edge), Shift clock equals Trigger input.
      etrig_rise_shiftclk_trig_in = 7,
    };

    enum class eTIMOUT : std::uint32_t {
      // Timer output is logic one when enabled and is not affected by timer reset
      eone = 0,
      // Timer output is logic zero when enabled and is not affected by timer reset
      ezero = 1,
      // Timer output is logic one when enabled and on timer reset
      eone_tmrreset = 2,
      // Timer output is logic zero when enabled and on timer reset
      ezero_tmrreset = 3,
    };

    // Timer Start Bit
    using TSTART = ftl::mmio::Field<1, 1, eTSTART, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Stop Bit
    using TSTOP = ftl::mmio::Field<2, 4, eTSTOP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Enable
    using TIMENA = ftl::mmio::Field<3, 8, eTIMENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Disable
    using TIMDIS = ftl::mmio::Field<3, 12, eTIMDIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Reset
    using TIMRST = ftl::mmio::Field<3, 16, eTIMRST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Decrement
    using TIMDEC = ftl::mmio::Field<3, 20, eTIMDEC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Timer Output
    using TIMOUT = ftl::mmio::Field<2, 24, eTIMOUT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TimcfgFields

  template<std::uint32_t Index>
  struct TIMCFG : ftl::mmio::Register<
      kBase + 0x480u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename TimcfgFields::TSTART,
      ftl::mmio::Reserved<2, 2>,
      typename TimcfgFields::TSTOP,
      ftl::mmio::Reserved<2, 6>,
      typename TimcfgFields::TIMENA,
      ftl::mmio::Reserved<1, 11>,
      typename TimcfgFields::TIMDIS,
      ftl::mmio::Reserved<1, 15>,
      typename TimcfgFields::TIMRST,
      ftl::mmio::Reserved<1, 19>,
      typename TimcfgFields::TIMDEC,
      ftl::mmio::Reserved<1, 23>,
      typename TimcfgFields::TIMOUT,
      ftl::mmio::Reserved<6, 26>> {
    static_assert(Index < 8u, "TIMCFG: Index out of range");
    using eTSTART = typename TimcfgFields::eTSTART;
    using eTSTOP = typename TimcfgFields::eTSTOP;
    using eTIMENA = typename TimcfgFields::eTIMENA;
    using eTIMDIS = typename TimcfgFields::eTIMDIS;
    using eTIMRST = typename TimcfgFields::eTIMRST;
    using eTIMDEC = typename TimcfgFields::eTIMDEC;
    using eTIMOUT = typename TimcfgFields::eTIMOUT;
    using TSTART = typename TimcfgFields::TSTART;
    using TSTOP = typename TimcfgFields::TSTOP;
    using TIMENA = typename TimcfgFields::TIMENA;
    using TIMDIS = typename TimcfgFields::TIMDIS;
    using TIMRST = typename TimcfgFields::TIMRST;
    using TIMDEC = typename TimcfgFields::TIMDEC;
    using TIMOUT = typename TimcfgFields::TIMOUT;
  };

  // Timer Compare N Register
  struct TimcmpFields {
    // Timer Compare Value
    using CMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TimcmpFields

  template<std::uint32_t Index>
  struct TIMCMP : ftl::mmio::Register<
      kBase + 0x500u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TimcmpFields::CMP,
      ftl::mmio::Reserved<16, 16>> {
    static_assert(Index < 8u, "TIMCMP: Index out of range");
    using CMP = typename TimcmpFields::CMP;
  };

  // Shifter Buffer N Nibble Byte Swapped Register
  struct ShiftbufnbsFields {
    // Shift Buffer
    using SHIFTBUFNBS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufnbsFields

  template<std::uint32_t Index>
  struct SHIFTBUFNBS : ftl::mmio::Register<
      kBase + 0x680u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufnbsFields::SHIFTBUFNBS> {
    static_assert(Index < 8u, "SHIFTBUFNBS: Index out of range");
    using VALUE = typename ShiftbufnbsFields::SHIFTBUFNBS;
  };

  // Shifter Buffer N Half Word Swapped Register
  struct ShiftbufhwsFields {
    // Shift Buffer
    using SHIFTBUFHWS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufhwsFields

  template<std::uint32_t Index>
  struct SHIFTBUFHWS : ftl::mmio::Register<
      kBase + 0x700u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufhwsFields::SHIFTBUFHWS> {
    static_assert(Index < 8u, "SHIFTBUFHWS: Index out of range");
    using VALUE = typename ShiftbufhwsFields::SHIFTBUFHWS;
  };

  // Shifter Buffer N Nibble Swapped Register
  struct ShiftbufnisFields {
    // Shift Buffer
    using SHIFTBUFNIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufnisFields

  template<std::uint32_t Index>
  struct SHIFTBUFNIS : ftl::mmio::Register<
      kBase + 0x780u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufnisFields::SHIFTBUFNIS> {
    static_assert(Index < 8u, "SHIFTBUFNIS: Index out of range");
    using VALUE = typename ShiftbufnisFields::SHIFTBUFNIS;
  };

  // Shifter Buffer N Odd Even Swapped Register
  struct ShiftbufoesFields {
    // Shift Buffer
    using SHIFTBUFOES = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufoesFields

  template<std::uint32_t Index>
  struct SHIFTBUFOES : ftl::mmio::Register<
      kBase + 0x800u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufoesFields::SHIFTBUFOES> {
    static_assert(Index < 8u, "SHIFTBUFOES: Index out of range");
    using VALUE = typename ShiftbufoesFields::SHIFTBUFOES;
  };

  // Shifter Buffer N Even Odd Swapped Register
  struct ShiftbufeosFields {
    // Shift Buffer
    using SHIFTBUFEOS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ShiftbufeosFields

  template<std::uint32_t Index>
  struct SHIFTBUFEOS : ftl::mmio::Register<
      kBase + 0x880u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ShiftbufeosFields::SHIFTBUFEOS> {
    static_assert(Index < 8u, "SHIFTBUFEOS: Index out of range");
    using VALUE = typename ShiftbufeosFields::SHIFTBUFEOS;
  };

};

}  // namespace regs