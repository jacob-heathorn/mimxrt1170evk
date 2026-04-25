#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// QDC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Enc {
  static_assert( Instance == 1u || Instance == 2u || Instance == 3u || Instance == 4u,
      "Enc: Instance must be one of 1, 2, 3, 4");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40174000u :
      Instance == 2u ? 0x40178000u :
      Instance == 3u ? 0x4017C000u :
      Instance == 4u ? 0x40180000u :
      0u;

  
// Control Register
struct CTRL_fields_ {

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
};  // struct CTRL_fields_

struct CTRL : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename CTRL_fields_::CMPIE,
    typename CTRL_fields_::CMPIRQ,
    typename CTRL_fields_::WDE,
    typename CTRL_fields_::DIE,
    typename CTRL_fields_::DIRQ,
    typename CTRL_fields_::XNE,
    typename CTRL_fields_::XIP,
    typename CTRL_fields_::XIE,
    typename CTRL_fields_::XIRQ,
    typename CTRL_fields_::PH1,
    typename CTRL_fields_::REV,
    typename CTRL_fields_::SWIP,
    typename CTRL_fields_::HNE,
    typename CTRL_fields_::HIP,
    typename CTRL_fields_::HIE,
    typename CTRL_fields_::HIRQ> {
  using eCMPIE = typename CTRL_fields_::eCMPIE;
  using eCMPIRQ = typename CTRL_fields_::eCMPIRQ;
  using eWDE = typename CTRL_fields_::eWDE;
  using eDIE = typename CTRL_fields_::eDIE;
  using eDIRQ = typename CTRL_fields_::eDIRQ;
  using eXNE = typename CTRL_fields_::eXNE;
  using eXIP = typename CTRL_fields_::eXIP;
  using eXIE = typename CTRL_fields_::eXIE;
  using eXIRQ = typename CTRL_fields_::eXIRQ;
  using ePH1 = typename CTRL_fields_::ePH1;
  using eREV = typename CTRL_fields_::eREV;
  using eSWIP = typename CTRL_fields_::eSWIP;
  using eHNE = typename CTRL_fields_::eHNE;
  using eHIP = typename CTRL_fields_::eHIP;
  using eHIE = typename CTRL_fields_::eHIE;
  using eHIRQ = typename CTRL_fields_::eHIRQ;
  using CMPIE = typename CTRL_fields_::CMPIE;
  using CMPIRQ = typename CTRL_fields_::CMPIRQ;
  using WDE = typename CTRL_fields_::WDE;
  using DIE = typename CTRL_fields_::DIE;
  using DIRQ = typename CTRL_fields_::DIRQ;
  using XNE = typename CTRL_fields_::XNE;
  using XIP = typename CTRL_fields_::XIP;
  using XIE = typename CTRL_fields_::XIE;
  using XIRQ = typename CTRL_fields_::XIRQ;
  using PH1 = typename CTRL_fields_::PH1;
  using REV = typename CTRL_fields_::REV;
  using SWIP = typename CTRL_fields_::SWIP;
  using HNE = typename CTRL_fields_::HNE;
  using HIP = typename CTRL_fields_::HIP;
  using HIE = typename CTRL_fields_::HIE;
  using HIRQ = typename CTRL_fields_::HIRQ;
};

  
// Input Filter Register
struct FILT_fields_ {
  // Input Filter Sample Period
  using FILT_PER = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // Input Filter Sample Count
  using FILT_CNT = ftl::mmio::Field<3, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FILT_fields_

struct FILT : ftl::mmio::Register<
    kBase + 0x2u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename FILT_fields_::FILT_PER,
    typename FILT_fields_::FILT_CNT,
    ftl::mmio::Reserved<5, 11>> {
  using FILT_PER = typename FILT_fields_::FILT_PER;
  using FILT_CNT = typename FILT_fields_::FILT_CNT;
};

  
// Watchdog Timeout Register
struct WTR_fields_ {
  // WDOG
  using WDOG = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct WTR_fields_

struct WTR : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename WTR_fields_::WDOG> {
  using WDOG = typename WTR_fields_::WDOG;
};

  
// Position Difference Counter Register
struct POSD_fields_ {
  // POSD
  using POSD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct POSD_fields_

struct POSD : ftl::mmio::Register<
    kBase + 0x6u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename POSD_fields_::POSD> {
  using value_ = typename POSD_fields_::POSD;
};

  
// Position Difference Hold Register
struct POSDH_fields_ {
  // POSDH
  using POSDH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct POSDH_fields_

struct POSDH : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    typename POSDH_fields_::POSDH> {
  using value_ = typename POSDH_fields_::POSDH;
};

  
// Revolution Counter Register
struct REV_fields_ {
  // REV
  using REV = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct REV_fields_

struct REV : ftl::mmio::Register<
    kBase + 0xAu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename REV_fields_::REV> {
  using value_ = typename REV_fields_::REV;
};

  
// Revolution Hold Register
struct REVH_fields_ {
  // REVH
  using REVH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct REVH_fields_

struct REVH : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    typename REVH_fields_::REVH> {
  using value_ = typename REVH_fields_::REVH;
};

  
// Upper Position Counter Register
struct UPOS_fields_ {
  // POS
  using POS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct UPOS_fields_

struct UPOS : ftl::mmio::Register<
    kBase + 0xEu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename UPOS_fields_::POS> {
  using POS = typename UPOS_fields_::POS;
};

  
// Lower Position Counter Register
struct LPOS_fields_ {
  // POS
  using POS = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LPOS_fields_

struct LPOS : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename LPOS_fields_::POS> {
  using POS = typename LPOS_fields_::POS;
};

  
// Upper Position Hold Register
struct UPOSH_fields_ {
  // POSH
  using POSH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct UPOSH_fields_

struct UPOSH : ftl::mmio::Register<
    kBase + 0x12u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    typename UPOSH_fields_::POSH> {
  using POSH = typename UPOSH_fields_::POSH;
};

  
// Lower Position Hold Register
struct LPOSH_fields_ {
  // POSH
  using POSH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LPOSH_fields_

struct LPOSH : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    typename LPOSH_fields_::POSH> {
  using POSH = typename LPOSH_fields_::POSH;
};

  
// Upper Initialization Register
struct UINIT_fields_ {
  // INIT
  using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct UINIT_fields_

struct UINIT : ftl::mmio::Register<
    kBase + 0x16u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename UINIT_fields_::INIT> {
  using INIT = typename UINIT_fields_::INIT;
};

  
// Lower Initialization Register
struct LINIT_fields_ {
  // INIT
  using INIT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LINIT_fields_

struct LINIT : ftl::mmio::Register<
    kBase + 0x18u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename LINIT_fields_::INIT> {
  using INIT = typename LINIT_fields_::INIT;
};

  
// Input Monitor Register
struct IMR_fields_ {
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
};  // struct IMR_fields_

struct IMR : ftl::mmio::Register<
    kBase + 0x1Au,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RO,
    typename IMR_fields_::HOME,
    typename IMR_fields_::INDEX,
    typename IMR_fields_::PHB,
    typename IMR_fields_::PHA,
    typename IMR_fields_::FHOM,
    typename IMR_fields_::FIND,
    typename IMR_fields_::FPHB,
    typename IMR_fields_::FPHA,
    ftl::mmio::Reserved<8, 8>> {
  using HOME = typename IMR_fields_::HOME;
  using INDEX = typename IMR_fields_::INDEX;
  using PHB = typename IMR_fields_::PHB;
  using PHA = typename IMR_fields_::PHA;
  using FHOM = typename IMR_fields_::FHOM;
  using FIND = typename IMR_fields_::FIND;
  using FPHB = typename IMR_fields_::FPHB;
  using FPHA = typename IMR_fields_::FPHA;
};

  
// Test Register
struct TST_fields_ {

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
};  // struct TST_fields_

struct TST : ftl::mmio::Register<
    kBase + 0x1Cu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename TST_fields_::TEST_COUNT,
    typename TST_fields_::TEST_PERIOD,
    typename TST_fields_::QDN,
    typename TST_fields_::TCE,
    typename TST_fields_::TEN> {
  using eQDN = typename TST_fields_::eQDN;
  using eTCE = typename TST_fields_::eTCE;
  using eTEN = typename TST_fields_::eTEN;
  using TEST_COUNT = typename TST_fields_::TEST_COUNT;
  using TEST_PERIOD = typename TST_fields_::TEST_PERIOD;
  using QDN = typename TST_fields_::QDN;
  using TCE = typename TST_fields_::TCE;
  using TEN = typename TST_fields_::TEN;
};

  
// Control 2 Register
struct CTRL2_fields_ {

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
};  // struct CTRL2_fields_

struct CTRL2 : ftl::mmio::Register<
    kBase + 0x1Eu,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename CTRL2_fields_::UPDHLD,
    typename CTRL2_fields_::UPDPOS,
    typename CTRL2_fields_::MOD,
    typename CTRL2_fields_::DIR,
    typename CTRL2_fields_::RUIE,
    typename CTRL2_fields_::RUIRQ,
    typename CTRL2_fields_::ROIE,
    typename CTRL2_fields_::ROIRQ,
    typename CTRL2_fields_::REVMOD,
    typename CTRL2_fields_::OUTCTL,
    typename CTRL2_fields_::SABIE,
    typename CTRL2_fields_::SABIRQ,
    ftl::mmio::Reserved<4, 12>> {
  using eUPDHLD = typename CTRL2_fields_::eUPDHLD;
  using eUPDPOS = typename CTRL2_fields_::eUPDPOS;
  using eMOD = typename CTRL2_fields_::eMOD;
  using eDIR = typename CTRL2_fields_::eDIR;
  using eRUIE = typename CTRL2_fields_::eRUIE;
  using eRUIRQ = typename CTRL2_fields_::eRUIRQ;
  using eROIE = typename CTRL2_fields_::eROIE;
  using eROIRQ = typename CTRL2_fields_::eROIRQ;
  using eREVMOD = typename CTRL2_fields_::eREVMOD;
  using eOUTCTL = typename CTRL2_fields_::eOUTCTL;
  using eSABIE = typename CTRL2_fields_::eSABIE;
  using eSABIRQ = typename CTRL2_fields_::eSABIRQ;
  using UPDHLD = typename CTRL2_fields_::UPDHLD;
  using UPDPOS = typename CTRL2_fields_::UPDPOS;
  using MOD = typename CTRL2_fields_::MOD;
  using DIR = typename CTRL2_fields_::DIR;
  using RUIE = typename CTRL2_fields_::RUIE;
  using RUIRQ = typename CTRL2_fields_::RUIRQ;
  using ROIE = typename CTRL2_fields_::ROIE;
  using ROIRQ = typename CTRL2_fields_::ROIRQ;
  using REVMOD = typename CTRL2_fields_::REVMOD;
  using OUTCTL = typename CTRL2_fields_::OUTCTL;
  using SABIE = typename CTRL2_fields_::SABIE;
  using SABIRQ = typename CTRL2_fields_::SABIRQ;
};

  
// Upper Modulus Register
struct UMOD_fields_ {
  // MOD
  using MOD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct UMOD_fields_

struct UMOD : ftl::mmio::Register<
    kBase + 0x20u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename UMOD_fields_::MOD> {
  using MOD = typename UMOD_fields_::MOD;
};

  
// Lower Modulus Register
struct LMOD_fields_ {
  // MOD
  using MOD = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LMOD_fields_

struct LMOD : ftl::mmio::Register<
    kBase + 0x22u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename LMOD_fields_::MOD> {
  using MOD = typename LMOD_fields_::MOD;
};

  
// Upper Position Compare Register
struct UCOMP_fields_ {
  // COMP
  using COMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct UCOMP_fields_

struct UCOMP : ftl::mmio::Register<
    kBase + 0x24u,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RW,
    typename UCOMP_fields_::COMP> {
  using COMP = typename UCOMP_fields_::COMP;
};

  
// Lower Position Compare Register
struct LCOMP_fields_ {
  // COMP
  using COMP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct LCOMP_fields_

struct LCOMP : ftl::mmio::Register<
    kBase + 0x26u,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RW,
    typename LCOMP_fields_::COMP> {
  using COMP = typename LCOMP_fields_::COMP;
};

  
// Last Edge Time Register
struct LASTEDGE_fields_ {
  // Last Edge Time Counter
  using LASTEDGE = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LASTEDGE_fields_

struct LASTEDGE : ftl::mmio::Register<
    kBase + 0x28u,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RO,
    typename LASTEDGE_fields_::LASTEDGE> {
  using value_ = typename LASTEDGE_fields_::LASTEDGE;
};

  
// Last Edge Time Hold Register
struct LASTEDGEH_fields_ {
  // Last Edge Time Hold
  using LASTEDGEH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct LASTEDGEH_fields_

struct LASTEDGEH : ftl::mmio::Register<
    kBase + 0x2Au,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RO,
    typename LASTEDGEH_fields_::LASTEDGEH> {
  using value_ = typename LASTEDGEH_fields_::LASTEDGEH;
};

  
// Position Difference Period Counter Register
struct POSDPER_fields_ {
  // Position difference period
  using POSDPER = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct POSDPER_fields_

struct POSDPER : ftl::mmio::Register<
    kBase + 0x2Cu,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RO,
    typename POSDPER_fields_::POSDPER> {
  using value_ = typename POSDPER_fields_::POSDPER;
};

  
// Position Difference Period Buffer Register
struct POSDPERBFR_fields_ {
  // Position difference period buffer
  using POSDPERBFR = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct POSDPERBFR_fields_

struct POSDPERBFR : ftl::mmio::Register<
    kBase + 0x2Eu,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RO,
    typename POSDPERBFR_fields_::POSDPERBFR> {
  using value_ = typename POSDPERBFR_fields_::POSDPERBFR;
};

  
// Position Difference Period Hold Register
struct POSDPERH_fields_ {
  // Position difference period hold
  using POSDPERH = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct POSDPERH_fields_

struct POSDPERH : ftl::mmio::Register<
    kBase + 0x30u,
    std::uint16_t,
    0xFFFFu,
    ftl::mmio::RO,
    typename POSDPERH_fields_::POSDPERH> {
  using value_ = typename POSDPERH_fields_::POSDPERH;
};

  
// Control 3 Register
struct CTRL3_fields_ {

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
};  // struct CTRL3_fields_

struct CTRL3 : ftl::mmio::Register<
    kBase + 0x32u,
    std::uint16_t,
    0x0000u,
    ftl::mmio::RW,
    typename CTRL3_fields_::PMEN,
    ftl::mmio::Reserved<3, 1>,
    typename CTRL3_fields_::PRSC,
    ftl::mmio::Reserved<8, 8>> {
  using ePMEN = typename CTRL3_fields_::ePMEN;
  using PMEN = typename CTRL3_fields_::PMEN;
  using PRSC = typename CTRL3_fields_::PRSC;
};
};

}  // namespace regs