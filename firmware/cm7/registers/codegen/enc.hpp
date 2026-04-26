#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// QDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Enc {
  static_assert(
        Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u,
        "Enc: Instance must be one of 1, 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40174000u :
      Instance == 2u ? 0x40178000u :
      Instance == 3u ? 0x4017C000u :
      Instance == 4u ? 0x40180000u :
      0u;

  // Control Register
  struct CtrlFields {
    enum class eCMPIE : std::uint32_t {
      // Disabled
      eCMPIE_0 = 0,
      // Enabled
      eCMPIE_1 = 1,
    };

    enum class eCMPIRQ : std::uint32_t {
      // No match has occurred (the counter does not match the COMP value)
      eCMPIRQ_0 = 0,
      // COMP match has occurred (the counter matches the COMP value)
      eCMPIRQ_1 = 1,
    };

    enum class eWDE : std::uint32_t {
      // Disabled
      eWDE_0 = 0,
      // Enabled
      eWDE_1 = 1,
    };

    enum class eDIE : std::uint32_t {
      // Disabled
      eDIE_0 = 0,
      // Enabled
      eDIE_1 = 1,
    };

    enum class eDIRQ : std::uint32_t {
      // No Watchdog timeout interrupt has occurred
      eDIRQ_0 = 0,
      // Watchdog timeout interrupt has occurred
      eDIRQ_1 = 1,
    };

    enum class eXNE : std::uint32_t {
      // Use positive edge of INDEX pulse
      eXNE_0 = 0,
      // Use negative edge of INDEX pulse
      eXNE_1 = 1,
    };

    enum class eXIP : std::uint32_t {
      // INDEX pulse does not initialize the position counter
      eXIP_0 = 0,
      // INDEX pulse initializes the position counter
      eXIP_1 = 1,
    };

    enum class eXIE : std::uint32_t {
      // Disabled
      eXIE_0 = 0,
      // Enabled
      eXIE_1 = 1,
    };

    enum class eXIRQ : std::uint32_t {
      // INDEX pulse has not occurred
      eXIRQ_0 = 0,
      // INDEX pulse has occurred
      eXIRQ_1 = 1,
    };

    enum class ePH1 : std::uint32_t {
      // Use the standard quadrature decoder, where PHASEA and PHASEB represent a two-phase quadrature signal.
      ePH1_0 = 0,
      // Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction: If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 1, PHASEB = 1, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down
      ePH1_1 = 1,
    };

    enum class eREV : std::uint32_t {
      // Count normally
      eREV_0 = 0,
      // Count in the reverse direction
      eREV_1 = 1,
    };

    enum class eSWIP : std::uint32_t {
      // No action
      eSWIP_0 = 0,
      // Initialize position counter (using upper and lower initialization registers, UINIT and LINIT)
      eSWIP_1 = 1,
    };

    enum class eHNE : std::uint32_t {
      // Use positive-going edge-to-trigger initialization of position counters UPOS and LPOS
      eHNE_0 = 0,
      // Use negative-going edge-to-trigger initialization of position counters UPOS and LPOS
      eHNE_1 = 1,
    };

    enum class eHIP : std::uint32_t {
      // No action
      eHIP_0 = 0,
      // HOME signal initializes the position counter
      eHIP_1 = 1,
    };

    enum class eHIE : std::uint32_t {
      // Disabled
      eHIE_0 = 0,
      // Enabled
      eHIE_1 = 1,
    };

    enum class eHIRQ : std::uint32_t {
      // No transition on the HOME signal has occurred
      eHIRQ_0 = 0,
      // A transition on the HOME signal has occurred
      eHIRQ_1 = 1,
    };

    // Compare Interrupt Enable
    using CMPIE = ftl::mmio::Field<1, 0, eCMPIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Compare Interrupt Request
    using CMPIRQ = ftl::mmio::Field<1, 1, eCMPIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Watchdog Enable
    using WDE = ftl::mmio::Field<1, 2, eWDE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Timeout Interrupt Enable
    using DIE = ftl::mmio::Field<1, 3, eDIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Watchdog Timeout Interrupt Request
    using DIRQ = ftl::mmio::Field<1, 4, eDIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Use Negative Edge of INDEX Pulse
    using XNE = ftl::mmio::Field<1, 5, eXNE, ftl::mmio::RW, ftl::mmio::Normal>;
    // INDEX Triggered Initialization of Position Counters UPOS and LPOS
    using XIP = ftl::mmio::Field<1, 6, eXIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // INDEX Pulse Interrupt Enable
    using XIE = ftl::mmio::Field<1, 7, eXIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // INDEX Pulse Interrupt Request
    using XIRQ = ftl::mmio::Field<1, 8, eXIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Enable Signal Phase Count Mode
    using PH1 = ftl::mmio::Field<1, 9, ePH1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Reverse Direction Counting
    using REV = ftl::mmio::Field<1, 10, eREV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software-Triggered Initialization of Position Counters UPOS and LPOS
    using SWIP = ftl::mmio::Field<1, 11, eSWIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Use Negative Edge of HOME Input
    using HNE = ftl::mmio::Field<1, 12, eHNE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable HOME to Initialize Position Counters UPOS and LPOS
    using HIP = ftl::mmio::Field<1, 13, eHIP, ftl::mmio::RW, ftl::mmio::Normal>;
    // HOME Interrupt Enable
    using HIE = ftl::mmio::Field<1, 14, eHIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // HOME Signal Transition Interrupt Request
    using HIRQ = ftl::mmio::Field<1, 15, eHIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename CtrlFields::CMPIE,
      typename CtrlFields::CMPIRQ,
      typename CtrlFields::WDE,
      typename CtrlFields::DIE,
      typename CtrlFields::DIRQ,
      typename CtrlFields::XNE,
      typename CtrlFields::XIP,
      typename CtrlFields::XIE,
      typename CtrlFields::XIRQ,
      typename CtrlFields::PH1,
      typename CtrlFields::REV,
      typename CtrlFields::SWIP,
      typename CtrlFields::HNE,
      typename CtrlFields::HIP,
      typename CtrlFields::HIE,
      typename CtrlFields::HIRQ> {
    using eCMPIE = typename CtrlFields::eCMPIE;
    using eCMPIRQ = typename CtrlFields::eCMPIRQ;
    using eWDE = typename CtrlFields::eWDE;
    using eDIE = typename CtrlFields::eDIE;
    using eDIRQ = typename CtrlFields::eDIRQ;
    using eXNE = typename CtrlFields::eXNE;
    using eXIP = typename CtrlFields::eXIP;
    using eXIE = typename CtrlFields::eXIE;
    using eXIRQ = typename CtrlFields::eXIRQ;
    using ePH1 = typename CtrlFields::ePH1;
    using eREV = typename CtrlFields::eREV;
    using eSWIP = typename CtrlFields::eSWIP;
    using eHNE = typename CtrlFields::eHNE;
    using eHIP = typename CtrlFields::eHIP;
    using eHIE = typename CtrlFields::eHIE;
    using eHIRQ = typename CtrlFields::eHIRQ;
    using CMPIE = typename CtrlFields::CMPIE;
    using CMPIRQ = typename CtrlFields::CMPIRQ;
    using WDE = typename CtrlFields::WDE;
    using DIE = typename CtrlFields::DIE;
    using DIRQ = typename CtrlFields::DIRQ;
    using XNE = typename CtrlFields::XNE;
    using XIP = typename CtrlFields::XIP;
    using XIE = typename CtrlFields::XIE;
    using XIRQ = typename CtrlFields::XIRQ;
    using PH1 = typename CtrlFields::PH1;
    using REV = typename CtrlFields::REV;
    using SWIP = typename CtrlFields::SWIP;
    using HNE = typename CtrlFields::HNE;
    using HIP = typename CtrlFields::HIP;
    using HIE = typename CtrlFields::HIE;
    using HIRQ = typename CtrlFields::HIRQ;
  };

  // Input Filter Register
  struct FiltFields {
    // Input Filter Sample Period
    using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Input Filter Sample Count
    using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct FiltFields

  struct FILT : ftl::mmio::Register<
      kBase + 0x2u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename FiltFields::FILT_PER,
      typename FiltFields::FILT_CNT,
      ftl::mmio::Reserved<5, 11>> {
    using FILT_PER = typename FiltFields::FILT_PER;
    using FILT_CNT = typename FiltFields::FILT_CNT;
  };

  // Watchdog Timeout Register
  struct WtrFields {
    // WDOG
    using WDOG = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WtrFields

  struct WTR : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename WtrFields::WDOG> {
    using WDOG = typename WtrFields::WDOG;
  };

  // Position Difference Counter Register
  struct PosdFields {
    // POSD
    using POSD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PosdFields

  struct POSD : ftl::mmio::Register<
      kBase + 0x6u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename PosdFields::POSD> {
    using VALUE = typename PosdFields::POSD;
  };

  // Position Difference Hold Register
  struct PosdhFields {
    // POSDH
    using POSDH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PosdhFields

  struct POSDH : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename PosdhFields::POSDH> {
    using VALUE = typename PosdhFields::POSDH;
  };

  // Revolution Counter Register
  struct RevFields {
    // REV
    using REV = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RevFields

  struct REV : ftl::mmio::Register<
      kBase + 0xAu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename RevFields::REV> {
    using VALUE = typename RevFields::REV;
  };

  // Revolution Hold Register
  struct RevhFields {
    // REVH
    using REVH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct RevhFields

  struct REVH : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename RevhFields::REVH> {
    using VALUE = typename RevhFields::REVH;
  };

  // Upper Position Counter Register
  struct UposFields {
    // POS
    using POS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UposFields

  struct UPOS : ftl::mmio::Register<
      kBase + 0xEu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename UposFields::POS> {
    using POS = typename UposFields::POS;
  };

  // Lower Position Counter Register
  struct LposFields {
    // POS
    using POS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LposFields

  struct LPOS : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LposFields::POS> {
    using POS = typename LposFields::POS;
  };

  // Upper Position Hold Register
  struct UposhFields {
    // POSH
    using POSH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct UposhFields

  struct UPOSH : ftl::mmio::Register<
      kBase + 0x12u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename UposhFields::POSH> {
    using POSH = typename UposhFields::POSH;
  };

  // Lower Position Hold Register
  struct LposhFields {
    // POSH
    using POSH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LposhFields

  struct LPOSH : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename LposhFields::POSH> {
    using POSH = typename LposhFields::POSH;
  };

  // Upper Initialization Register
  struct UinitFields {
    // INIT
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UinitFields

  struct UINIT : ftl::mmio::Register<
      kBase + 0x16u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename UinitFields::INIT> {
    using INIT = typename UinitFields::INIT;
  };

  // Lower Initialization Register
  struct LinitFields {
    // INIT
    using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LinitFields

  struct LINIT : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LinitFields::INIT> {
    using INIT = typename LinitFields::INIT;
  };

  // Input Monitor Register
  struct ImrFields {
    // HOME
    using HOME = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // INDEX
    using INDEX = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PHB
    using PHB = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // PHA
    using PHA = ftl::mmio::Field<1, 3, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // FHOM
    using FHOM = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // FIND
    using FIND = ftl::mmio::Field<1, 5, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPHB
    using FPHB = ftl::mmio::Field<1, 6, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // FPHA
    using FPHA = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ImrFields

  struct IMR : ftl::mmio::Register<
      kBase + 0x1Au,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RO,
      typename ImrFields::HOME,
      typename ImrFields::INDEX,
      typename ImrFields::PHB,
      typename ImrFields::PHA,
      typename ImrFields::FHOM,
      typename ImrFields::FIND,
      typename ImrFields::FPHB,
      typename ImrFields::FPHA,
      ftl::mmio::Reserved<8, 8>> {
    using HOME = typename ImrFields::HOME;
    using INDEX = typename ImrFields::INDEX;
    using PHB = typename ImrFields::PHB;
    using PHA = typename ImrFields::PHA;
    using FHOM = typename ImrFields::FHOM;
    using FIND = typename ImrFields::FIND;
    using FPHB = typename ImrFields::FPHB;
    using FPHA = typename ImrFields::FPHA;
  };

  // Test Register
  struct TstFields {
    enum class eQDN : std::uint32_t {
      // Generates a positive quadrature decoder signal
      eQDN_0 = 0,
      // Generates a negative quadrature decoder signal
      eQDN_1 = 1,
    };

    enum class eTCE : std::uint32_t {
      // Disabled
      eTCE_0 = 0,
      // Enabled
      eTCE_1 = 1,
    };

    enum class eTEN : std::uint32_t {
      // Disabled
      eTEN_0 = 0,
      // Enabled
      eTEN_1 = 1,
    };

    // TEST_COUNT
    using TEST_COUNT = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TEST_PERIOD
    using TEST_PERIOD = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Quadrature Decoder Negative Signal
    using QDN = ftl::mmio::Field<1, 13, eQDN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Counter Enable
    using TCE = ftl::mmio::Field<1, 14, eTCE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Test Mode Enable
    using TEN = ftl::mmio::Field<1, 15, eTEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TstFields

  struct TST : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename TstFields::TEST_COUNT,
      typename TstFields::TEST_PERIOD,
      typename TstFields::QDN,
      typename TstFields::TCE,
      typename TstFields::TEN> {
    using eQDN = typename TstFields::eQDN;
    using eTCE = typename TstFields::eTCE;
    using eTEN = typename TstFields::eTEN;
    using TEST_COUNT = typename TstFields::TEST_COUNT;
    using TEST_PERIOD = typename TstFields::TEST_PERIOD;
    using QDN = typename TstFields::QDN;
    using TCE = typename TstFields::TCE;
    using TEN = typename TstFields::TEN;
  };

  // Control 2 Register
  struct Ctrl2Fields {
    enum class eUPDHLD : std::uint32_t {
      // Disable updates of hold registers on the rising edge of TRIGGER input signal
      eUPDHLD_0 = 0,
      // Enable updates of hold registers on the rising edge of TRIGGER input signal
      eUPDHLD_1 = 1,
    };

    enum class eUPDPOS : std::uint32_t {
      // No action for POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
      eUPDPOS_0 = 0,
      // Clear POSD, REV, UPOS and LPOS registers on rising edge of TRIGGER
      eUPDPOS_1 = 1,
    };

    enum class eMOD : std::uint32_t {
      // Disable modulo counting
      eMOD_0 = 0,
      // Enable modulo counting
      eMOD_1 = 1,
    };

    enum class eDIR : std::uint32_t {
      // Last count was in the down direction
      eDIR_0 = 0,
      // Last count was in the up direction
      eDIR_1 = 1,
    };

    enum class eRUIE : std::uint32_t {
      // Disabled
      eRUIE_0 = 0,
      // Enabled
      eRUIE_1 = 1,
    };

    enum class eRUIRQ : std::uint32_t {
      // No roll-under has occurred
      eRUIRQ_0 = 0,
      // Roll-under has occurred
      eRUIRQ_1 = 1,
    };

    enum class eROIE : std::uint32_t {
      // Disabled
      eROIE_0 = 0,
      // Enabled
      eROIE_1 = 1,
    };

    enum class eROIRQ : std::uint32_t {
      // No roll-over has occurred
      eROIRQ_0 = 0,
      // Roll-over has occurred
      eROIRQ_1 = 1,
    };

    enum class eREVMOD : std::uint32_t {
      // Use INDEX pulse to increment/decrement revolution counter (REV)
      eREVMOD_0 = 0,
      // Use modulus counting roll-over/under to increment/decrement revolution counter (REV)
      eREVMOD_1 = 1,
    };

    enum class eOUTCTL : std::uint32_t {
      // POSMATCH pulses when a match occurs between the position counters (POS) and the corresponding compare value (COMP )
      eOUTCTL_0 = 0,
      // POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read
      eOUTCTL_1 = 1,
    };

    enum class eSABIE : std::uint32_t {
      // Disabled
      eSABIE_0 = 0,
      // Enabled
      eSABIE_1 = 1,
    };

    enum class eSABIRQ : std::uint32_t {
      // No simultaneous change of PHASEA and PHASEB has occurred
      eSABIRQ_0 = 0,
      // A simultaneous change of PHASEA and PHASEB has occurred
      eSABIRQ_1 = 1,
    };

    // Update Hold Registers
    using UPDHLD = ftl::mmio::Field<1, 0, eUPDHLD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Update Position Registers
    using UPDPOS = ftl::mmio::Field<1, 1, eUPDPOS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable Modulo Counting
    using MOD = ftl::mmio::Field<1, 2, eMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Count Direction Flag
    using DIR = ftl::mmio::Field<1, 3, eDIR, ftl::mmio::RO, ftl::mmio::Normal>;
    // Roll-under Interrupt Enable
    using RUIE = ftl::mmio::Field<1, 4, eRUIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Roll-under Interrupt Request
    using RUIRQ = ftl::mmio::Field<1, 5, eRUIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Roll-over Interrupt Enable
    using ROIE = ftl::mmio::Field<1, 6, eROIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Roll-over Interrupt Request
    using ROIRQ = ftl::mmio::Field<1, 7, eROIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Revolution Counter Modulus Enable
    using REVMOD = ftl::mmio::Field<1, 8, eREVMOD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Output Control
    using OUTCTL = ftl::mmio::Field<1, 9, eOUTCTL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Simultaneous PHASEA and PHASEB Change Interrupt Enable
    using SABIE = ftl::mmio::Field<1, 10, eSABIE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Simultaneous PHASEA and PHASEB Change Interrupt Request
    using SABIRQ = ftl::mmio::Field<1, 11, eSABIRQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Ctrl2Fields

  struct CTRL2 : ftl::mmio::Register<
      kBase + 0x1Eu,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl2Fields::UPDHLD,
      typename Ctrl2Fields::UPDPOS,
      typename Ctrl2Fields::MOD,
      typename Ctrl2Fields::DIR,
      typename Ctrl2Fields::RUIE,
      typename Ctrl2Fields::RUIRQ,
      typename Ctrl2Fields::ROIE,
      typename Ctrl2Fields::ROIRQ,
      typename Ctrl2Fields::REVMOD,
      typename Ctrl2Fields::OUTCTL,
      typename Ctrl2Fields::SABIE,
      typename Ctrl2Fields::SABIRQ,
      ftl::mmio::Reserved<4, 12>> {
    using eUPDHLD = typename Ctrl2Fields::eUPDHLD;
    using eUPDPOS = typename Ctrl2Fields::eUPDPOS;
    using eMOD = typename Ctrl2Fields::eMOD;
    using eDIR = typename Ctrl2Fields::eDIR;
    using eRUIE = typename Ctrl2Fields::eRUIE;
    using eRUIRQ = typename Ctrl2Fields::eRUIRQ;
    using eROIE = typename Ctrl2Fields::eROIE;
    using eROIRQ = typename Ctrl2Fields::eROIRQ;
    using eREVMOD = typename Ctrl2Fields::eREVMOD;
    using eOUTCTL = typename Ctrl2Fields::eOUTCTL;
    using eSABIE = typename Ctrl2Fields::eSABIE;
    using eSABIRQ = typename Ctrl2Fields::eSABIRQ;
    using UPDHLD = typename Ctrl2Fields::UPDHLD;
    using UPDPOS = typename Ctrl2Fields::UPDPOS;
    using MOD = typename Ctrl2Fields::MOD;
    using DIR = typename Ctrl2Fields::DIR;
    using RUIE = typename Ctrl2Fields::RUIE;
    using RUIRQ = typename Ctrl2Fields::RUIRQ;
    using ROIE = typename Ctrl2Fields::ROIE;
    using ROIRQ = typename Ctrl2Fields::ROIRQ;
    using REVMOD = typename Ctrl2Fields::REVMOD;
    using OUTCTL = typename Ctrl2Fields::OUTCTL;
    using SABIE = typename Ctrl2Fields::SABIE;
    using SABIRQ = typename Ctrl2Fields::SABIRQ;
  };

  // Upper Modulus Register
  struct UmodFields {
    // MOD
    using MOD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UmodFields

  struct UMOD : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename UmodFields::MOD> {
    using MOD = typename UmodFields::MOD;
  };

  // Lower Modulus Register
  struct LmodFields {
    // MOD
    using MOD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LmodFields

  struct LMOD : ftl::mmio::Register<
      kBase + 0x22u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename LmodFields::MOD> {
    using MOD = typename LmodFields::MOD;
  };

  // Upper Position Compare Register
  struct UcompFields {
    // COMP
    using COMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct UcompFields

  struct UCOMP : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename UcompFields::COMP> {
    using COMP = typename UcompFields::COMP;
  };

  // Lower Position Compare Register
  struct LcompFields {
    // COMP
    using COMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct LcompFields

  struct LCOMP : ftl::mmio::Register<
      kBase + 0x26u,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RW,
      typename LcompFields::COMP> {
    using COMP = typename LcompFields::COMP;
  };

  // Last Edge Time Register
  struct LastedgeFields {
    // Last Edge Time Counter
    using LASTEDGE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LastedgeFields

  struct LASTEDGE : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RO,
      typename LastedgeFields::LASTEDGE> {
    using VALUE = typename LastedgeFields::LASTEDGE;
  };

  // Last Edge Time Hold Register
  struct LastedgehFields {
    // Last Edge Time Hold
    using LASTEDGEH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct LastedgehFields

  struct LASTEDGEH : ftl::mmio::Register<
      kBase + 0x2Au,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RO,
      typename LastedgehFields::LASTEDGEH> {
    using VALUE = typename LastedgehFields::LASTEDGEH;
  };

  // Position Difference Period Counter Register
  struct PosdperFields {
    // Position difference period
    using POSDPER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PosdperFields

  struct POSDPER : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RO,
      typename PosdperFields::POSDPER> {
    using VALUE = typename PosdperFields::POSDPER;
  };

  // Position Difference Period Buffer Register
  struct PosdperbfrFields {
    // Position difference period buffer
    using POSDPERBFR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PosdperbfrFields

  struct POSDPERBFR : ftl::mmio::Register<
      kBase + 0x2Eu,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RO,
      typename PosdperbfrFields::POSDPERBFR> {
    using VALUE = typename PosdperbfrFields::POSDPERBFR;
  };

  // Position Difference Period Hold Register
  struct PosdperhFields {
    // Position difference period hold
    using POSDPERH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PosdperhFields

  struct POSDPERH : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint16_t,
      0xFFFFu,
      ftl::mmio::RO,
      typename PosdperhFields::POSDPERH> {
    using VALUE = typename PosdperhFields::POSDPERH;
  };

  // Control 3 Register
  struct Ctrl3Fields {
    enum class ePMEN : std::uint32_t {
      // Period measurement functions are not used. POSD is loaded to POSDH and then cleared whenever POSD, UPOS, LPOS, or REV is read.
      ePMEN_0 = 0,
      // Period measurement functions are used. POSD is loaded to POSDH and then cleared only when POSD is read.
      ePMEN_1 = 1,
    };

    // Period measurement function enable
    using PMEN = ftl::mmio::Field<1, 0, ePMEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Prescaler
    using PRSC = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Ctrl3Fields

  struct CTRL3 : ftl::mmio::Register<
      kBase + 0x32u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename Ctrl3Fields::PMEN,
      ftl::mmio::Reserved<3, 1>,
      typename Ctrl3Fields::PRSC,
      ftl::mmio::Reserved<8, 8>> {
    using ePMEN = typename Ctrl3Fields::ePMEN;
    using PMEN = typename Ctrl3Fields::PMEN;
    using PRSC = typename Ctrl3Fields::PRSC;
  };

};

}  // namespace regs