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
  struct VERID_fields_ {
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
  };  // struct VERID_fields_

  struct VERID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x02000001u,
      ftl::mmio::RO,
      typename VERID_fields_::FEATURE,
      typename VERID_fields_::MINOR,
      typename VERID_fields_::MAJOR> {
    using eFEATURE = typename VERID_fields_::eFEATURE;
    using FEATURE = typename VERID_fields_::FEATURE;
    using MINOR = typename VERID_fields_::MINOR;
    using MAJOR = typename VERID_fields_::MAJOR;
  };

  // Parameter Register
  struct PARAM_fields_ {
    // Shifter Number
    using SHIFTER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Timer Number
    using TIMER = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Pin Number
    using PIN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Trigger Number
    using TRIGGER = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PARAM_fields_

  struct PARAM : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x02200808u,
      ftl::mmio::RO,
      typename PARAM_fields_::SHIFTER,
      typename PARAM_fields_::TIMER,
      typename PARAM_fields_::PIN,
      typename PARAM_fields_::TRIGGER> {
    using SHIFTER = typename PARAM_fields_::SHIFTER;
    using TIMER = typename PARAM_fields_::TIMER;
    using PIN = typename PARAM_fields_::PIN;
    using TRIGGER = typename PARAM_fields_::TRIGGER;
  };

  // FlexIO Control Register
  struct CTRL_fields_ {
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
  };  // struct CTRL_fields_

  struct CTRL : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CTRL_fields_::FLEXEN,
      typename CTRL_fields_::SWRST,
      typename CTRL_fields_::FASTACC,
      ftl::mmio::Reserved<27, 3>,
      typename CTRL_fields_::DBGE,
      typename CTRL_fields_::DOZEN> {
    using eFLEXEN = typename CTRL_fields_::eFLEXEN;
    using eSWRST = typename CTRL_fields_::eSWRST;
    using eFASTACC = typename CTRL_fields_::eFASTACC;
    using eDBGE = typename CTRL_fields_::eDBGE;
    using eDOZEN = typename CTRL_fields_::eDOZEN;
    using FLEXEN = typename CTRL_fields_::FLEXEN;
    using SWRST = typename CTRL_fields_::SWRST;
    using FASTACC = typename CTRL_fields_::FASTACC;
    using DBGE = typename CTRL_fields_::DBGE;
    using DOZEN = typename CTRL_fields_::DOZEN;
  };

  // Pin State Register
  struct PIN_fields_ {
    // Pin Data Input
    using PDI = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PIN_fields_

  struct PIN : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename PIN_fields_::PDI> {
    using PDI = typename PIN_fields_::PDI;
  };

  // Shifter Status Register
  struct SHIFTSTAT_fields_ {
    // Shifter Status Flag
    using SSF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SHIFTSTAT_fields_

  struct SHIFTSTAT : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTSTAT_fields_::SSF,
      ftl::mmio::Reserved<24, 8>> {
    using SSF = typename SHIFTSTAT_fields_::SSF;
  };

  // Shifter Error Register
  struct SHIFTERR_fields_ {
    // Shifter Error Flags
    using SEF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct SHIFTERR_fields_

  struct SHIFTERR : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTERR_fields_::SEF,
      ftl::mmio::Reserved<24, 8>> {
    using SEF = typename SHIFTERR_fields_::SEF;
  };

  // Timer Status Register
  struct TIMSTAT_fields_ {
    // Timer Status Flags
    using TSF = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct TIMSTAT_fields_

  struct TIMSTAT : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TIMSTAT_fields_::TSF,
      ftl::mmio::Reserved<24, 8>> {
    using TSF = typename TIMSTAT_fields_::TSF;
  };

  // Shifter Status Interrupt Enable
  struct SHIFTSIEN_fields_ {
    // Shifter Status Interrupt Enable
    using SSIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTSIEN_fields_

  struct SHIFTSIEN : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTSIEN_fields_::SSIE,
      ftl::mmio::Reserved<24, 8>> {
    using SSIE = typename SHIFTSIEN_fields_::SSIE;
  };

  // Shifter Error Interrupt Enable
  struct SHIFTEIEN_fields_ {
    // Shifter Error Interrupt Enable
    using SEIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTEIEN_fields_

  struct SHIFTEIEN : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTEIEN_fields_::SEIE,
      ftl::mmio::Reserved<24, 8>> {
    using SEIE = typename SHIFTEIEN_fields_::SEIE;
  };

  // Timer Interrupt Enable Register
  struct TIMIEN_fields_ {
    // Timer Status Interrupt Enable
    using TEIE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TIMIEN_fields_

  struct TIMIEN : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TIMIEN_fields_::TEIE,
      ftl::mmio::Reserved<24, 8>> {
    using TEIE = typename TIMIEN_fields_::TEIE;
  };

  // Shifter Status DMA Enable
  struct SHIFTSDEN_fields_ {
    // Shifter Status DMA Enable
    using SSDE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTSDEN_fields_

  struct SHIFTSDEN : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTSDEN_fields_::SSDE,
      ftl::mmio::Reserved<24, 8>> {
    using SSDE = typename SHIFTSDEN_fields_::SSDE;
  };

  // Timer Status DMA Enable
  struct TIMERSDEN_fields_ {
    // Timer Status DMA Enable
    using TSDE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TIMERSDEN_fields_

  struct TIMERSDEN : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TIMERSDEN_fields_::TSDE,
      ftl::mmio::Reserved<24, 8>> {
    using TSDE = typename TIMERSDEN_fields_::TSDE;
  };

  // Shifter State Register
  struct SHIFTSTATE_fields_ {
    // Current State Pointer
    using STATE = ftl::mmio::Field<3, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTSTATE_fields_

  struct SHIFTSTATE : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTSTATE_fields_::STATE,
      ftl::mmio::Reserved<29, 3>> {
    using STATE = typename SHIFTSTATE_fields_::STATE;
  };

  // Shifter Control N Register
  struct SHIFTCTL_fields_ {
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
  };  // struct SHIFTCTL_fields_

  template<std::uint32_t Index>
  struct SHIFTCTL : ftl::mmio::Register<
      kBase + 0x80u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTCTL_fields_::SMOD,
      ftl::mmio::Reserved<4, 3>,
      typename SHIFTCTL_fields_::PINPOL,
      typename SHIFTCTL_fields_::PINSEL,
      ftl::mmio::Reserved<3, 13>,
      typename SHIFTCTL_fields_::PINCFG,
      ftl::mmio::Reserved<5, 18>,
      typename SHIFTCTL_fields_::TIMPOL,
      typename SHIFTCTL_fields_::TIMSEL,
      ftl::mmio::Reserved<5, 27>> {
    static_assert(Index < 8u, "SHIFTCTL: Index out of range");
    using eSMOD = typename SHIFTCTL_fields_::eSMOD;
    using ePINPOL = typename SHIFTCTL_fields_::ePINPOL;
    using ePINCFG = typename SHIFTCTL_fields_::ePINCFG;
    using eTIMPOL = typename SHIFTCTL_fields_::eTIMPOL;
    using SMOD = typename SHIFTCTL_fields_::SMOD;
    using PINPOL = typename SHIFTCTL_fields_::PINPOL;
    using PINSEL = typename SHIFTCTL_fields_::PINSEL;
    using PINCFG = typename SHIFTCTL_fields_::PINCFG;
    using TIMPOL = typename SHIFTCTL_fields_::TIMPOL;
    using TIMSEL = typename SHIFTCTL_fields_::TIMSEL;
  };

  // Shifter Configuration N Register
  struct SHIFTCFG_fields_ {
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
  };  // struct SHIFTCFG_fields_

  template<std::uint32_t Index>
  struct SHIFTCFG : ftl::mmio::Register<
      kBase + 0x100u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTCFG_fields_::SSTART,
      ftl::mmio::Reserved<2, 2>,
      typename SHIFTCFG_fields_::SSTOP,
      ftl::mmio::Reserved<2, 6>,
      typename SHIFTCFG_fields_::INSRC,
      typename SHIFTCFG_fields_::LATST,
      ftl::mmio::Reserved<6, 10>,
      typename SHIFTCFG_fields_::PWIDTH,
      ftl::mmio::Reserved<11, 21>> {
    static_assert(Index < 8u, "SHIFTCFG: Index out of range");
    using eSSTART = typename SHIFTCFG_fields_::eSSTART;
    using eSSTOP = typename SHIFTCFG_fields_::eSSTOP;
    using eINSRC = typename SHIFTCFG_fields_::eINSRC;
    using eLATST = typename SHIFTCFG_fields_::eLATST;
    using SSTART = typename SHIFTCFG_fields_::SSTART;
    using SSTOP = typename SHIFTCFG_fields_::SSTOP;
    using INSRC = typename SHIFTCFG_fields_::INSRC;
    using LATST = typename SHIFTCFG_fields_::LATST;
    using PWIDTH = typename SHIFTCFG_fields_::PWIDTH;
  };

  // Shifter Buffer N Register
  struct SHIFTBUF_fields_ {
    // Shift Buffer
    using SHIFTBUF = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUF_fields_

  template<std::uint32_t Index>
  struct SHIFTBUF : ftl::mmio::Register<
      kBase + 0x200u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUF_fields_::SHIFTBUF> {
    static_assert(Index < 8u, "SHIFTBUF: Index out of range");
    using VALUE = typename SHIFTBUF_fields_::SHIFTBUF;
  };

  // Shifter Buffer N Bit Swapped Register
  struct SHIFTBUFBIS_fields_ {
    // Shift Buffer
    using SHIFTBUFBIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFBIS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFBIS : ftl::mmio::Register<
      kBase + 0x280u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFBIS_fields_::SHIFTBUFBIS> {
    static_assert(Index < 8u, "SHIFTBUFBIS: Index out of range");
    using VALUE = typename SHIFTBUFBIS_fields_::SHIFTBUFBIS;
  };

  // Shifter Buffer N Byte Swapped Register
  struct SHIFTBUFBYS_fields_ {
    // Shift Buffer
    using SHIFTBUFBYS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFBYS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFBYS : ftl::mmio::Register<
      kBase + 0x300u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFBYS_fields_::SHIFTBUFBYS> {
    static_assert(Index < 8u, "SHIFTBUFBYS: Index out of range");
    using VALUE = typename SHIFTBUFBYS_fields_::SHIFTBUFBYS;
  };

  // Shifter Buffer N Bit Byte Swapped Register
  struct SHIFTBUFBBS_fields_ {
    // Shift Buffer
    using SHIFTBUFBBS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFBBS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFBBS : ftl::mmio::Register<
      kBase + 0x380u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFBBS_fields_::SHIFTBUFBBS> {
    static_assert(Index < 8u, "SHIFTBUFBBS: Index out of range");
    using VALUE = typename SHIFTBUFBBS_fields_::SHIFTBUFBBS;
  };

  // Timer Control N Register
  struct TIMCTL_fields_ {
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
  };  // struct TIMCTL_fields_

  template<std::uint32_t Index>
  struct TIMCTL : ftl::mmio::Register<
      kBase + 0x400u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TIMCTL_fields_::TIMOD,
      ftl::mmio::Reserved<2, 3>,
      typename TIMCTL_fields_::ONETIM,
      typename TIMCTL_fields_::PININS,
      typename TIMCTL_fields_::PINPOL,
      typename TIMCTL_fields_::PINSEL,
      ftl::mmio::Reserved<3, 13>,
      typename TIMCTL_fields_::PINCFG,
      ftl::mmio::Reserved<4, 18>,
      typename TIMCTL_fields_::TRGSRC,
      typename TIMCTL_fields_::TRGPOL,
      typename TIMCTL_fields_::TRGSEL,
      ftl::mmio::Reserved<2, 30>> {
    static_assert(Index < 8u, "TIMCTL: Index out of range");
    using eTIMOD = typename TIMCTL_fields_::eTIMOD;
    using eONETIM = typename TIMCTL_fields_::eONETIM;
    using ePININS = typename TIMCTL_fields_::ePININS;
    using ePINPOL = typename TIMCTL_fields_::ePINPOL;
    using ePINCFG = typename TIMCTL_fields_::ePINCFG;
    using eTRGSRC = typename TIMCTL_fields_::eTRGSRC;
    using eTRGPOL = typename TIMCTL_fields_::eTRGPOL;
    using TIMOD = typename TIMCTL_fields_::TIMOD;
    using ONETIM = typename TIMCTL_fields_::ONETIM;
    using PININS = typename TIMCTL_fields_::PININS;
    using PINPOL = typename TIMCTL_fields_::PINPOL;
    using PINSEL = typename TIMCTL_fields_::PINSEL;
    using PINCFG = typename TIMCTL_fields_::PINCFG;
    using TRGSRC = typename TIMCTL_fields_::TRGSRC;
    using TRGPOL = typename TIMCTL_fields_::TRGPOL;
    using TRGSEL = typename TIMCTL_fields_::TRGSEL;
  };

  // Timer Configuration N Register
  struct TIMCFG_fields_ {
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
  };  // struct TIMCFG_fields_

  template<std::uint32_t Index>
  struct TIMCFG : ftl::mmio::Register<
      kBase + 0x480u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename TIMCFG_fields_::TSTART,
      ftl::mmio::Reserved<2, 2>,
      typename TIMCFG_fields_::TSTOP,
      ftl::mmio::Reserved<2, 6>,
      typename TIMCFG_fields_::TIMENA,
      ftl::mmio::Reserved<1, 11>,
      typename TIMCFG_fields_::TIMDIS,
      ftl::mmio::Reserved<1, 15>,
      typename TIMCFG_fields_::TIMRST,
      ftl::mmio::Reserved<1, 19>,
      typename TIMCFG_fields_::TIMDEC,
      ftl::mmio::Reserved<1, 23>,
      typename TIMCFG_fields_::TIMOUT,
      ftl::mmio::Reserved<6, 26>> {
    static_assert(Index < 8u, "TIMCFG: Index out of range");
    using eTSTART = typename TIMCFG_fields_::eTSTART;
    using eTSTOP = typename TIMCFG_fields_::eTSTOP;
    using eTIMENA = typename TIMCFG_fields_::eTIMENA;
    using eTIMDIS = typename TIMCFG_fields_::eTIMDIS;
    using eTIMRST = typename TIMCFG_fields_::eTIMRST;
    using eTIMDEC = typename TIMCFG_fields_::eTIMDEC;
    using eTIMOUT = typename TIMCFG_fields_::eTIMOUT;
    using TSTART = typename TIMCFG_fields_::TSTART;
    using TSTOP = typename TIMCFG_fields_::TSTOP;
    using TIMENA = typename TIMCFG_fields_::TIMENA;
    using TIMDIS = typename TIMCFG_fields_::TIMDIS;
    using TIMRST = typename TIMCFG_fields_::TIMRST;
    using TIMDEC = typename TIMCFG_fields_::TIMDEC;
    using TIMOUT = typename TIMCFG_fields_::TIMOUT;
  };

  // Timer Compare N Register
  struct TIMCMP_fields_ {
    // Timer Compare Value
    using CMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TIMCMP_fields_

  template<std::uint32_t Index>
  struct TIMCMP : ftl::mmio::Register<
      kBase + 0x500u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TIMCMP_fields_::CMP,
      ftl::mmio::Reserved<16, 16>> {
    static_assert(Index < 8u, "TIMCMP: Index out of range");
    using CMP = typename TIMCMP_fields_::CMP;
  };

  // Shifter Buffer N Nibble Byte Swapped Register
  struct SHIFTBUFNBS_fields_ {
    // Shift Buffer
    using SHIFTBUFNBS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFNBS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFNBS : ftl::mmio::Register<
      kBase + 0x680u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFNBS_fields_::SHIFTBUFNBS> {
    static_assert(Index < 8u, "SHIFTBUFNBS: Index out of range");
    using VALUE = typename SHIFTBUFNBS_fields_::SHIFTBUFNBS;
  };

  // Shifter Buffer N Half Word Swapped Register
  struct SHIFTBUFHWS_fields_ {
    // Shift Buffer
    using SHIFTBUFHWS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFHWS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFHWS : ftl::mmio::Register<
      kBase + 0x700u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFHWS_fields_::SHIFTBUFHWS> {
    static_assert(Index < 8u, "SHIFTBUFHWS: Index out of range");
    using VALUE = typename SHIFTBUFHWS_fields_::SHIFTBUFHWS;
  };

  // Shifter Buffer N Nibble Swapped Register
  struct SHIFTBUFNIS_fields_ {
    // Shift Buffer
    using SHIFTBUFNIS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFNIS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFNIS : ftl::mmio::Register<
      kBase + 0x780u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFNIS_fields_::SHIFTBUFNIS> {
    static_assert(Index < 8u, "SHIFTBUFNIS: Index out of range");
    using VALUE = typename SHIFTBUFNIS_fields_::SHIFTBUFNIS;
  };

  // Shifter Buffer N Odd Even Swapped Register
  struct SHIFTBUFOES_fields_ {
    // Shift Buffer
    using SHIFTBUFOES = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFOES_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFOES : ftl::mmio::Register<
      kBase + 0x800u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFOES_fields_::SHIFTBUFOES> {
    static_assert(Index < 8u, "SHIFTBUFOES: Index out of range");
    using VALUE = typename SHIFTBUFOES_fields_::SHIFTBUFOES;
  };

  // Shifter Buffer N Even Odd Swapped Register
  struct SHIFTBUFEOS_fields_ {
    // Shift Buffer
    using SHIFTBUFEOS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SHIFTBUFEOS_fields_

  template<std::uint32_t Index>
  struct SHIFTBUFEOS : ftl::mmio::Register<
      kBase + 0x880u + (Index * 0x4u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename SHIFTBUFEOS_fields_::SHIFTBUFEOS> {
    static_assert(Index < 8u, "SHIFTBUFEOS: Index out of range");
    using VALUE = typename SHIFTBUFEOS_fields_::SHIFTBUFEOS;
  };

};

}  // namespace regs