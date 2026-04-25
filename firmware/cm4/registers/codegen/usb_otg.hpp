#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usb_otg {
  static_assert( Instance == 1u || Instance == 2u,
      "Usb_otg: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40430000u :
      Instance == 2u ? 0x4042C000u :
      0u;

  
// Identification register
struct ID_fields_ {
  // ID
  using ID = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // NID
  using NID = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // REVISION
  using REVISION = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ID_fields_

struct ID : ftl::mmio::Register<
    kBase + 0x0u,
    std::uint32_t,
    0xE4A1FA05u,
    ftl::mmio::RO,
    typename ID_fields_::ID,
    ftl::mmio::Reserved<2, 6>,
    typename ID_fields_::NID,
    ftl::mmio::Reserved<2, 14>,
    typename ID_fields_::REVISION,
    ftl::mmio::Reserved<8, 24>> {
  using value_ = typename ID_fields_::ID;
  using NID = typename ID_fields_::NID;
  using REVISION = typename ID_fields_::REVISION;
};

  
// Hardware General
struct HWGENERAL_fields_ {

  enum class ePHYW : std::uint32_t {
    // 8 bit wide data bus (Software non-programmable)
    eDATA_BUS_8 = 0,
    // 16 bit wide data bus (Software non-programmable)
    eDATA_BUS_16 = 1,
    // Reset to 8 bit wide data bus (Software programmable)
    eSW_RST_8 = 2,
    // Reset to 16 bit wide data bus (Software programmable)
    eSW_RST_16 = 3,
  };

  enum class ePHYM : std::uint32_t {
    // UTMI/UMTI+
    eUTMI = 0,
    // ULPI DDR
    eULPI_DDR = 1,
    // ULPI
    eULPI = 2,
    // Serial Only
    eSERIAL = 3,
    // Software programmable - reset to UTMI/UTMI+
    eSW_RST_UTMI = 4,
    // Software programmable - reset to ULPI DDR
    eSW_RST_ULPI_DDR = 5,
    // Software programmable - reset to ULPI
    eSW_RST_ULPI = 6,
    // Software programmable - reset to Serial
    eSW_RST_SERIAL = 7,
  };

  enum class eSM : std::uint32_t {
    // No Serial Engine, always use parallel signalling.
    eSERIAL_ENGINE_NO = 0,
    // Serial Engine present, always use serial signalling for FS/LS.
    eSERIAL_ENGINE_EN = 1,
    // Software programmable - Reset to use parallel signalling for FS/LS
    eSW_RST_PARALLEL = 2,
    // Software programmable - Reset to use serial signalling for FS/LS
    eSW_RST_SERIAL_ENG = 3,
  };
  // PHYW
  using PHYW = ftl::mmio::Field<2, 4, ePHYW, ftl::mmio::RO, ftl::mmio::Normal>;
  // PHYM
  using PHYM = ftl::mmio::Field<3, 6, ePHYM, ftl::mmio::RO, ftl::mmio::Normal>;
  // SM
  using SM = ftl::mmio::Field<2, 9, eSM, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HWGENERAL_fields_

struct HWGENERAL : ftl::mmio::Register<
    kBase + 0x4u,
    std::uint32_t,
    0x00000015u,
    ftl::mmio::RO,
    ftl::mmio::Reserved<4, 0>,
    typename HWGENERAL_fields_::PHYW,
    typename HWGENERAL_fields_::PHYM,
    typename HWGENERAL_fields_::SM,
    ftl::mmio::Reserved<21, 11>> {
  using ePHYW = typename HWGENERAL_fields_::ePHYW;
  using ePHYM = typename HWGENERAL_fields_::ePHYM;
  using eSM = typename HWGENERAL_fields_::eSM;
  using PHYW = typename HWGENERAL_fields_::PHYW;
  using PHYM = typename HWGENERAL_fields_::PHYM;
  using SM = typename HWGENERAL_fields_::SM;
};

  
// Host Hardware Parameters
struct HWHOST_fields_ {

  enum class eHC : std::uint32_t {
    // Not supported
    eHOST_OP_DIS = 0,
    // Supported
    eHOST_OP_EN = 1,
  };
  // HC
  using HC = ftl::mmio::Field<1, 0, eHC, ftl::mmio::RO, ftl::mmio::Normal>;
  // NPORT
  using NPORT = ftl::mmio::Field<3, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HWHOST_fields_

struct HWHOST : ftl::mmio::Register<
    kBase + 0x8u,
    std::uint32_t,
    0x10020001u,
    ftl::mmio::RO,
    typename HWHOST_fields_::HC,
    typename HWHOST_fields_::NPORT,
    ftl::mmio::Reserved<28, 4>> {
  using eHC = typename HWHOST_fields_::eHC;
  using HC = typename HWHOST_fields_::HC;
  using NPORT = typename HWHOST_fields_::NPORT;
};

  
// Device Hardware Parameters
struct HWDEVICE_fields_ {

  enum class eDC : std::uint32_t {
    // Not supported
    eDEVICE_OP_DIS = 0,
    // Supported
    eDEVICE_OP_EN = 1,
  };
  // DC
  using DC = ftl::mmio::Field<1, 0, eDC, ftl::mmio::RO, ftl::mmio::Normal>;
  // DEVEP
  using DEVEP = ftl::mmio::Field<5, 1, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HWDEVICE_fields_

struct HWDEVICE : ftl::mmio::Register<
    kBase + 0xCu,
    std::uint32_t,
    0x00000011u,
    ftl::mmio::RO,
    typename HWDEVICE_fields_::DC,
    typename HWDEVICE_fields_::DEVEP,
    ftl::mmio::Reserved<26, 6>> {
  using eDC = typename HWDEVICE_fields_::eDC;
  using DC = typename HWDEVICE_fields_::DC;
  using DEVEP = typename HWDEVICE_fields_::DEVEP;
};

  
// TX Buffer Hardware Parameters
struct HWTXBUF_fields_ {
  // TXBURST
  using TXBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // TXCHANADD
  using TXCHANADD = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HWTXBUF_fields_

struct HWTXBUF : ftl::mmio::Register<
    kBase + 0x10u,
    std::uint32_t,
    0x80080B08u,
    ftl::mmio::RO,
    typename HWTXBUF_fields_::TXBURST,
    ftl::mmio::Reserved<8, 8>,
    typename HWTXBUF_fields_::TXCHANADD,
    ftl::mmio::Reserved<8, 24>> {
  using TXBURST = typename HWTXBUF_fields_::TXBURST;
  using TXCHANADD = typename HWTXBUF_fields_::TXCHANADD;
};

  
// RX Buffer Hardware Parameters
struct HWRXBUF_fields_ {
  // RXBURST
  using RXBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // RXADD
  using RXADD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HWRXBUF_fields_

struct HWRXBUF : ftl::mmio::Register<
    kBase + 0x14u,
    std::uint32_t,
    0x00000808u,
    ftl::mmio::RO,
    typename HWRXBUF_fields_::RXBURST,
    typename HWRXBUF_fields_::RXADD,
    ftl::mmio::Reserved<16, 16>> {
  using RXBURST = typename HWRXBUF_fields_::RXBURST;
  using RXADD = typename HWRXBUF_fields_::RXADD;
};

  
// General Purpose Timer #0 Load
struct GPTIMER0LD_fields_ {
  // GPTLD
  using GPTLD = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPTIMER0LD_fields_

struct GPTIMER0LD : ftl::mmio::Register<
    kBase + 0x80u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename GPTIMER0LD_fields_::GPTLD,
    ftl::mmio::Reserved<8, 24>> {
  using GPTLD = typename GPTIMER0LD_fields_::GPTLD;
};

  
// General Purpose Timer #0 Controller
struct GPTIMER0CTRL_fields_ {

  enum class eGPTMODE : std::uint32_t {
    // One Shot Mode
    eONE_SHOT = 0,
    // Repeat Mode
    eREPEAT = 1,
  };

  enum class eGPTRST : std::uint32_t {
    // No action
    eNO_ACTION = 0,
    // Load counter value from GPTLD bits in n_GPTIMER0LD
    eLOAD_CNTR = 1,
  };

  enum class eGPTRUN : std::uint32_t {
    // Stop counting
    eSTOP_CNTR = 0,
    // Run
    eRUN = 1,
  };
  // GPTCNT
  using GPTCNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTMODE
  using GPTMODE = ftl::mmio::Field<1, 24, eGPTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTRST
  using GPTRST = ftl::mmio::Field<1, 30, eGPTRST, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTRUN
  using GPTRUN = ftl::mmio::Field<1, 31, eGPTRUN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPTIMER0CTRL_fields_

struct GPTIMER0CTRL : ftl::mmio::Register<
    kBase + 0x84u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename GPTIMER0CTRL_fields_::GPTCNT,
    typename GPTIMER0CTRL_fields_::GPTMODE,
    ftl::mmio::Reserved<5, 25>,
    typename GPTIMER0CTRL_fields_::GPTRST,
    typename GPTIMER0CTRL_fields_::GPTRUN> {
  using eGPTMODE = typename GPTIMER0CTRL_fields_::eGPTMODE;
  using eGPTRST = typename GPTIMER0CTRL_fields_::eGPTRST;
  using eGPTRUN = typename GPTIMER0CTRL_fields_::eGPTRUN;
  using GPTCNT = typename GPTIMER0CTRL_fields_::GPTCNT;
  using GPTMODE = typename GPTIMER0CTRL_fields_::GPTMODE;
  using GPTRST = typename GPTIMER0CTRL_fields_::GPTRST;
  using GPTRUN = typename GPTIMER0CTRL_fields_::GPTRUN;
};

  
// General Purpose Timer #1 Load
struct GPTIMER1LD_fields_ {
  // GPTLD
  using GPTLD = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPTIMER1LD_fields_

struct GPTIMER1LD : ftl::mmio::Register<
    kBase + 0x88u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename GPTIMER1LD_fields_::GPTLD,
    ftl::mmio::Reserved<8, 24>> {
  using GPTLD = typename GPTIMER1LD_fields_::GPTLD;
};

  
// General Purpose Timer #1 Controller
struct GPTIMER1CTRL_fields_ {

  enum class eGPTMODE : std::uint32_t {
    // One Shot Mode
    eONE_SHOT = 0,
    // Repeat Mode
    eREPEAT = 1,
  };

  enum class eGPTRST : std::uint32_t {
    // No action
    eNO_ACTION = 0,
    // Load counter value from GPTLD bits in USB_n_GPTIMER0LD
    eLOAD_CNTR = 1,
  };

  enum class eGPTRUN : std::uint32_t {
    // Stop counting
    eSTOP_CNTR = 0,
    // Run
    eRUN = 1,
  };
  // GPTCNT
  using GPTCNT = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTMODE
  using GPTMODE = ftl::mmio::Field<1, 24, eGPTMODE, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTRST
  using GPTRST = ftl::mmio::Field<1, 30, eGPTRST, ftl::mmio::RW, ftl::mmio::Normal>;
  // GPTRUN
  using GPTRUN = ftl::mmio::Field<1, 31, eGPTRUN, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct GPTIMER1CTRL_fields_

struct GPTIMER1CTRL : ftl::mmio::Register<
    kBase + 0x8Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename GPTIMER1CTRL_fields_::GPTCNT,
    typename GPTIMER1CTRL_fields_::GPTMODE,
    ftl::mmio::Reserved<5, 25>,
    typename GPTIMER1CTRL_fields_::GPTRST,
    typename GPTIMER1CTRL_fields_::GPTRUN> {
  using eGPTMODE = typename GPTIMER1CTRL_fields_::eGPTMODE;
  using eGPTRST = typename GPTIMER1CTRL_fields_::eGPTRST;
  using eGPTRUN = typename GPTIMER1CTRL_fields_::eGPTRUN;
  using GPTCNT = typename GPTIMER1CTRL_fields_::GPTCNT;
  using GPTMODE = typename GPTIMER1CTRL_fields_::GPTMODE;
  using GPTRST = typename GPTIMER1CTRL_fields_::GPTRST;
  using GPTRUN = typename GPTIMER1CTRL_fields_::GPTRUN;
};

  
// System Bus Config
struct SBUSCFG_fields_ {

  enum class eAHBBRST : std::uint32_t {
    // Incremental burst of unspecified length only
    eINCR_BURST = 0,
    // INCR4 burst, then single transfer
    eINCR4_BURST = 1,
    // INCR8 burst, INCR4 burst, then single transfer
    eINCR8_BURST = 2,
    // INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
    eINCR16_BURST = 3,
    // INCR4 burst, then incremental burst of unspecified length
    eINCR4_UNSPEC = 5,
    // INCR8 burst, INCR4 burst, then incremental burst of unspecified length
    eINCR8_4_UNSPEC = 6,
    // INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
    eINCR16_8_4_UNSPEC = 7,
  };
  // AHBBRST
  using AHBBRST = ftl::mmio::Field<3, 0, eAHBBRST, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct SBUSCFG_fields_

struct SBUSCFG : ftl::mmio::Register<
    kBase + 0x90u,
    std::uint32_t,
    0x00000002u,
    ftl::mmio::RW,
    typename SBUSCFG_fields_::AHBBRST,
    ftl::mmio::Reserved<29, 3>> {
  using eAHBBRST = typename SBUSCFG_fields_::eAHBBRST;
  using AHBBRST = typename SBUSCFG_fields_::AHBBRST;
};

  
// Capability Registers Length
struct CAPLENGTH_fields_ {
  // CAPLENGTH
  using CAPLENGTH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct CAPLENGTH_fields_

struct CAPLENGTH : ftl::mmio::Register<
    kBase + 0x100u,
    std::uint8_t,
    0x40u,
    ftl::mmio::RO,
    typename CAPLENGTH_fields_::CAPLENGTH> {
  using value_ = typename CAPLENGTH_fields_::CAPLENGTH;
};

  
// Host Controller Interface Version
struct HCIVERSION_fields_ {
  // HCIVERSION
  using HCIVERSION = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HCIVERSION_fields_

struct HCIVERSION : ftl::mmio::Register<
    kBase + 0x102u,
    std::uint16_t,
    0x0100u,
    ftl::mmio::RO,
    typename HCIVERSION_fields_::HCIVERSION> {
  using value_ = typename HCIVERSION_fields_::HCIVERSION;
};

  
// Host Controller Structural Parameters
struct HCSPARAMS_fields_ {

  enum class eN_CC : std::uint32_t {
    // There is no internal Companion Controller and port-ownership hand-off is not supported.
    eNO_COMP_CONTROLLER = 0,
    // There are internal companion controller(s) and port-ownership hand-offs is supported.
    eCOMP_CONTROLLER = 1,
  };
  // N_PORTS
  using N_PORTS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // PPC
  using PPC = ftl::mmio::Field<1, 4, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // N_PCC
  using N_PCC = ftl::mmio::Field<4, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // N_CC
  using N_CC = ftl::mmio::Field<4, 12, eN_CC, ftl::mmio::RO, ftl::mmio::Normal>;
  // PI
  using PI = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // N_PTT
  using N_PTT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // N_TT
  using N_TT = ftl::mmio::Field<4, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HCSPARAMS_fields_

struct HCSPARAMS : ftl::mmio::Register<
    kBase + 0x104u,
    std::uint32_t,
    0x00010011u,
    ftl::mmio::RO,
    typename HCSPARAMS_fields_::N_PORTS,
    typename HCSPARAMS_fields_::PPC,
    ftl::mmio::Reserved<3, 5>,
    typename HCSPARAMS_fields_::N_PCC,
    typename HCSPARAMS_fields_::N_CC,
    typename HCSPARAMS_fields_::PI,
    ftl::mmio::Reserved<3, 17>,
    typename HCSPARAMS_fields_::N_PTT,
    typename HCSPARAMS_fields_::N_TT,
    ftl::mmio::Reserved<4, 28>> {
  using eN_CC = typename HCSPARAMS_fields_::eN_CC;
  using N_PORTS = typename HCSPARAMS_fields_::N_PORTS;
  using PPC = typename HCSPARAMS_fields_::PPC;
  using N_PCC = typename HCSPARAMS_fields_::N_PCC;
  using N_CC = typename HCSPARAMS_fields_::N_CC;
  using PI = typename HCSPARAMS_fields_::PI;
  using N_PTT = typename HCSPARAMS_fields_::N_PTT;
  using N_TT = typename HCSPARAMS_fields_::N_TT;
};

  
// Host Controller Capability Parameters
struct HCCPARAMS_fields_ {
  // ADC
  using ADC = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // PFL
  using PFL = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ASP
  using ASP = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // IST
  using IST = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // EECP
  using EECP = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct HCCPARAMS_fields_

struct HCCPARAMS : ftl::mmio::Register<
    kBase + 0x108u,
    std::uint32_t,
    0x00000006u,
    ftl::mmio::RO,
    typename HCCPARAMS_fields_::ADC,
    typename HCCPARAMS_fields_::PFL,
    typename HCCPARAMS_fields_::ASP,
    ftl::mmio::Reserved<1, 3>,
    typename HCCPARAMS_fields_::IST,
    typename HCCPARAMS_fields_::EECP,
    ftl::mmio::Reserved<16, 16>> {
  using ADC = typename HCCPARAMS_fields_::ADC;
  using PFL = typename HCCPARAMS_fields_::PFL;
  using ASP = typename HCCPARAMS_fields_::ASP;
  using IST = typename HCCPARAMS_fields_::IST;
  using EECP = typename HCCPARAMS_fields_::EECP;
};

  
// Device Controller Interface Version
struct DCIVERSION_fields_ {
  // DCIVERSION
  using DCIVERSION = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct DCIVERSION_fields_

struct DCIVERSION : ftl::mmio::Register<
    kBase + 0x120u,
    std::uint16_t,
    0x0001u,
    ftl::mmio::RO,
    typename DCIVERSION_fields_::DCIVERSION> {
  using value_ = typename DCIVERSION_fields_::DCIVERSION;
};

  
// Device Controller Capability Parameters
struct DCCPARAMS_fields_ {
  // DEN
  using DEN = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // DC
  using DC = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // HC
  using HC = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct DCCPARAMS_fields_

struct DCCPARAMS : ftl::mmio::Register<
    kBase + 0x124u,
    std::uint32_t,
    0x00000188u,
    ftl::mmio::RO,
    typename DCCPARAMS_fields_::DEN,
    ftl::mmio::Reserved<2, 5>,
    typename DCCPARAMS_fields_::DC,
    typename DCCPARAMS_fields_::HC,
    ftl::mmio::Reserved<23, 9>> {
  using DEN = typename DCCPARAMS_fields_::DEN;
  using DC = typename DCCPARAMS_fields_::DC;
  using HC = typename DCCPARAMS_fields_::HC;
};

  
// USB Command Register
struct USBCMD_fields_ {

  enum class ePSE : std::uint32_t {
    // Do not process the Periodic Schedule
    eDONT_PROCESS_PT = 0,
    // Use the PERIODICLISTBASE register to access the Periodic Schedule.
    ePROCESS_PT_PERIODICLISTBASE = 1,
  };

  enum class eASE : std::uint32_t {
    // Do not process the Asynchronous Schedule.
    eDONT_PROCESS_ASYNC = 0,
    // Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
    eACCESS_ASYNC = 1,
  };

  enum class eITC : std::uint32_t {
    // Immediate (no threshold)
    eIMMEDIATE = 0,
    // 1 micro-frame
    eMICROFRAME_1 = 1,
    // 2 micro-frames
    eMICROFRAME_2 = 2,
    // 4 micro-frames
    eMICROFRAME_4 = 4,
    // 8 micro-frames
    eMICROFRAME_8 = 8,
    // 16 micro-frames
    eMICROFRAME_16 = 16,
    // 32 micro-frames
    eMICROFRAME_32 = 32,
    // 64 micro-frames
    eMICROFRAME_64 = 64,
  };
  // RS
  using RS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RST
  using RST = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FS_1
  using FS_1 = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // PSE
  using PSE = ftl::mmio::Field<1, 4, ePSE, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASE
  using ASE = ftl::mmio::Field<1, 5, eASE, ftl::mmio::RW, ftl::mmio::Normal>;
  // IAA
  using IAA = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASP
  using ASP = ftl::mmio::Field<2, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASPE
  using ASPE = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SUTW
  using SUTW = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ATDTW
  using ATDTW = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FS_2
  using FS_2 = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ITC
  using ITC = ftl::mmio::Field<8, 16, eITC, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USBCMD_fields_

struct USBCMD : ftl::mmio::Register<
    kBase + 0x140u,
    std::uint32_t,
    0x00080000u,
    ftl::mmio::RW,
    typename USBCMD_fields_::RS,
    typename USBCMD_fields_::RST,
    typename USBCMD_fields_::FS_1,
    typename USBCMD_fields_::PSE,
    typename USBCMD_fields_::ASE,
    typename USBCMD_fields_::IAA,
    ftl::mmio::Reserved<1, 7>,
    typename USBCMD_fields_::ASP,
    ftl::mmio::Reserved<1, 10>,
    typename USBCMD_fields_::ASPE,
    ftl::mmio::Reserved<1, 12>,
    typename USBCMD_fields_::SUTW,
    typename USBCMD_fields_::ATDTW,
    typename USBCMD_fields_::FS_2,
    typename USBCMD_fields_::ITC,
    ftl::mmio::Reserved<8, 24>> {
  using ePSE = typename USBCMD_fields_::ePSE;
  using eASE = typename USBCMD_fields_::eASE;
  using eITC = typename USBCMD_fields_::eITC;
  using RS = typename USBCMD_fields_::RS;
  using RST = typename USBCMD_fields_::RST;
  using FS_1 = typename USBCMD_fields_::FS_1;
  using PSE = typename USBCMD_fields_::PSE;
  using ASE = typename USBCMD_fields_::ASE;
  using IAA = typename USBCMD_fields_::IAA;
  using ASP = typename USBCMD_fields_::ASP;
  using ASPE = typename USBCMD_fields_::ASPE;
  using SUTW = typename USBCMD_fields_::SUTW;
  using ATDTW = typename USBCMD_fields_::ATDTW;
  using FS_2 = typename USBCMD_fields_::FS_2;
  using ITC = typename USBCMD_fields_::ITC;
};

  
// USB Status Register
struct USBSTS_fields_ {
  // UI
  using UI = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UEI
  using UEI = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PCI
  using PCI = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FRI
  using FRI = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SEI
  using SEI = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AAI
  using AAI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // URI
  using URI = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SRI
  using SRI = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SLI
  using SLI = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ULPII
  using ULPII = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // HCH
  using HCH = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RCL
  using RCL = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PS
  using PS = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AS
  using AS = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // NAKI
  using NAKI = ftl::mmio::Field<1, 16, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // TI0
  using TI0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TI1
  using TI1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USBSTS_fields_

struct USBSTS : ftl::mmio::Register<
    kBase + 0x144u,
    std::uint32_t,
    0x00000080u,
    ftl::mmio::RW,
    typename USBSTS_fields_::UI,
    typename USBSTS_fields_::UEI,
    typename USBSTS_fields_::PCI,
    typename USBSTS_fields_::FRI,
    typename USBSTS_fields_::SEI,
    typename USBSTS_fields_::AAI,
    typename USBSTS_fields_::URI,
    typename USBSTS_fields_::SRI,
    typename USBSTS_fields_::SLI,
    ftl::mmio::Reserved<1, 9>,
    typename USBSTS_fields_::ULPII,
    ftl::mmio::Reserved<1, 11>,
    typename USBSTS_fields_::HCH,
    typename USBSTS_fields_::RCL,
    typename USBSTS_fields_::PS,
    typename USBSTS_fields_::AS,
    typename USBSTS_fields_::NAKI,
    ftl::mmio::Reserved<7, 17>,
    typename USBSTS_fields_::TI0,
    typename USBSTS_fields_::TI1,
    ftl::mmio::Reserved<6, 26>> {
  using UI = typename USBSTS_fields_::UI;
  using UEI = typename USBSTS_fields_::UEI;
  using PCI = typename USBSTS_fields_::PCI;
  using FRI = typename USBSTS_fields_::FRI;
  using SEI = typename USBSTS_fields_::SEI;
  using AAI = typename USBSTS_fields_::AAI;
  using URI = typename USBSTS_fields_::URI;
  using SRI = typename USBSTS_fields_::SRI;
  using SLI = typename USBSTS_fields_::SLI;
  using ULPII = typename USBSTS_fields_::ULPII;
  using HCH = typename USBSTS_fields_::HCH;
  using RCL = typename USBSTS_fields_::RCL;
  using PS = typename USBSTS_fields_::PS;
  using AS = typename USBSTS_fields_::AS;
  using NAKI = typename USBSTS_fields_::NAKI;
  using TI0 = typename USBSTS_fields_::TI0;
  using TI1 = typename USBSTS_fields_::TI1;
};

  
// Interrupt Enable Register
struct USBINTR_fields_ {
  // UE
  using UE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UEE
  using UEE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PCE
  using PCE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FRE
  using FRE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SEE
  using SEE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AAE
  using AAE = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // URE
  using URE = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SRE
  using SRE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SLE
  using SLE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ULPIE
  using ULPIE = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // NAKE
  using NAKE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UAIE
  using UAIE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // UPIE
  using UPIE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TIE0
  using TIE0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TIE1
  using TIE1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USBINTR_fields_

struct USBINTR : ftl::mmio::Register<
    kBase + 0x148u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename USBINTR_fields_::UE,
    typename USBINTR_fields_::UEE,
    typename USBINTR_fields_::PCE,
    typename USBINTR_fields_::FRE,
    typename USBINTR_fields_::SEE,
    typename USBINTR_fields_::AAE,
    typename USBINTR_fields_::URE,
    typename USBINTR_fields_::SRE,
    typename USBINTR_fields_::SLE,
    ftl::mmio::Reserved<1, 9>,
    typename USBINTR_fields_::ULPIE,
    ftl::mmio::Reserved<5, 11>,
    typename USBINTR_fields_::NAKE,
    ftl::mmio::Reserved<1, 17>,
    typename USBINTR_fields_::UAIE,
    typename USBINTR_fields_::UPIE,
    ftl::mmio::Reserved<4, 20>,
    typename USBINTR_fields_::TIE0,
    typename USBINTR_fields_::TIE1,
    ftl::mmio::Reserved<6, 26>> {
  using UE = typename USBINTR_fields_::UE;
  using UEE = typename USBINTR_fields_::UEE;
  using PCE = typename USBINTR_fields_::PCE;
  using FRE = typename USBINTR_fields_::FRE;
  using SEE = typename USBINTR_fields_::SEE;
  using AAE = typename USBINTR_fields_::AAE;
  using URE = typename USBINTR_fields_::URE;
  using SRE = typename USBINTR_fields_::SRE;
  using SLE = typename USBINTR_fields_::SLE;
  using ULPIE = typename USBINTR_fields_::ULPIE;
  using NAKE = typename USBINTR_fields_::NAKE;
  using UAIE = typename USBINTR_fields_::UAIE;
  using UPIE = typename USBINTR_fields_::UPIE;
  using TIE0 = typename USBINTR_fields_::TIE0;
  using TIE1 = typename USBINTR_fields_::TIE1;
};

  
// USB Frame Index
struct FRINDEX_fields_ {

  enum class eFRINDEX : std::uint32_t {
    // (1024) 12
    eFRINDEX_1024 = 0,
    // (512) 11
    eFRINDEX_512 = 1,
    // (256) 10
    eFRINDEX_256 = 2,
    // (128) 9
    eFRINDEX_128 = 3,
    // (64) 8
    eFRINDEX_64 = 4,
    // (32) 7
    eFRINDEX_32 = 5,
    // (16) 6
    eFRINDEX_16 = 6,
    // (8) 5
    eFRINDEX_8 = 7,
  };
  // FRINDEX
  using FRINDEX = ftl::mmio::Field<14, 0, eFRINDEX, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct FRINDEX_fields_

struct FRINDEX : ftl::mmio::Register<
    kBase + 0x14Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename FRINDEX_fields_::FRINDEX,
    ftl::mmio::Reserved<18, 14>> {
  using eFRINDEX = typename FRINDEX_fields_::eFRINDEX;
  using value_ = typename FRINDEX_fields_::FRINDEX;
};

  
// Device Address
struct DEVICEADDR_fields_ {
  // USBADRA
  using USBADRA = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // USBADR
  using USBADR = ftl::mmio::Field<7, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct DEVICEADDR_fields_

struct DEVICEADDR : ftl::mmio::Register<
    kBase + 0x154u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<24, 0>,
    typename DEVICEADDR_fields_::USBADRA,
    typename DEVICEADDR_fields_::USBADR> {
  using USBADRA = typename DEVICEADDR_fields_::USBADRA;
  using USBADR = typename DEVICEADDR_fields_::USBADR;
};

  
// Frame List Base Address
struct PERIODICLISTBASE_fields_ {
  // BASEADR
  using BASEADR = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PERIODICLISTBASE_fields_

struct PERIODICLISTBASE : ftl::mmio::Register<
    kBase + 0x154u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<12, 0>,
    typename PERIODICLISTBASE_fields_::BASEADR> {
  using BASEADR = typename PERIODICLISTBASE_fields_::BASEADR;
};

  
// Next Asynch. Address
struct ASYNCLISTADDR_fields_ {
  // ASYBASE
  using ASYBASE = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ASYNCLISTADDR_fields_

struct ASYNCLISTADDR : ftl::mmio::Register<
    kBase + 0x158u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<5, 0>,
    typename ASYNCLISTADDR_fields_::ASYBASE> {
  using ASYBASE = typename ASYNCLISTADDR_fields_::ASYBASE;
};

  
// Endpoint List Address
struct ENDPTLISTADDR_fields_ {
  // EPBASE
  using EPBASE = ftl::mmio::Field<21, 11, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTLISTADDR_fields_

struct ENDPTLISTADDR : ftl::mmio::Register<
    kBase + 0x158u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    ftl::mmio::Reserved<11, 0>,
    typename ENDPTLISTADDR_fields_::EPBASE> {
  using EPBASE = typename ENDPTLISTADDR_fields_::EPBASE;
};

  
// Programmable Burst Size
struct BURSTSIZE_fields_ {
  // RXPBURST
  using RXPBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXPBURST
  using TXPBURST = ftl::mmio::Field<9, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct BURSTSIZE_fields_

struct BURSTSIZE : ftl::mmio::Register<
    kBase + 0x160u,
    std::uint32_t,
    0x00000808u,
    ftl::mmio::RW,
    typename BURSTSIZE_fields_::RXPBURST,
    typename BURSTSIZE_fields_::TXPBURST,
    ftl::mmio::Reserved<15, 17>> {
  using RXPBURST = typename BURSTSIZE_fields_::RXPBURST;
  using TXPBURST = typename BURSTSIZE_fields_::TXPBURST;
};

  
// TX FIFO Fill Tuning
struct TXFILLTUNING_fields_ {
  // TXSCHOH
  using TXSCHOH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXSCHHEALTH
  using TXSCHHEALTH = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXFIFOTHRES
  using TXFIFOTHRES = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct TXFILLTUNING_fields_

struct TXFILLTUNING : ftl::mmio::Register<
    kBase + 0x164u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename TXFILLTUNING_fields_::TXSCHOH,
    typename TXFILLTUNING_fields_::TXSCHHEALTH,
    ftl::mmio::Reserved<3, 13>,
    typename TXFILLTUNING_fields_::TXFIFOTHRES,
    ftl::mmio::Reserved<10, 22>> {
  using TXSCHOH = typename TXFILLTUNING_fields_::TXSCHOH;
  using TXSCHHEALTH = typename TXFILLTUNING_fields_::TXSCHHEALTH;
  using TXFIFOTHRES = typename TXFILLTUNING_fields_::TXFIFOTHRES;
};

  
// Endpoint NAK
struct ENDPTNAK_fields_ {
  // EPRN
  using EPRN = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // EPTN
  using EPTN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTNAK_fields_

struct ENDPTNAK : ftl::mmio::Register<
    kBase + 0x178u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTNAK_fields_::EPRN,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTNAK_fields_::EPTN,
    ftl::mmio::Reserved<8, 24>> {
  using EPRN = typename ENDPTNAK_fields_::EPRN;
  using EPTN = typename ENDPTNAK_fields_::EPTN;
};

  
// Endpoint NAK Enable
struct ENDPTNAKEN_fields_ {
  // EPRNE
  using EPRNE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // EPTNE
  using EPTNE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTNAKEN_fields_

struct ENDPTNAKEN : ftl::mmio::Register<
    kBase + 0x17Cu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTNAKEN_fields_::EPRNE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTNAKEN_fields_::EPTNE,
    ftl::mmio::Reserved<8, 24>> {
  using EPRNE = typename ENDPTNAKEN_fields_::EPRNE;
  using EPTNE = typename ENDPTNAKEN_fields_::EPTNE;
};

  
// Configure Flag Register
struct CONFIGFLAG_fields_ {

  enum class eCF : std::uint32_t {
    // Port routing control logic default-routes each port to an implementation dependent classic host controller.
    ePORT_ROUTING_CLASSIC_HOST = 0,
    // Port routing control logic default-routes all ports to this host controller.
    ePORT_ROUTING_HOST = 1,
  };
  // CF
  using CF = ftl::mmio::Field<1, 0, eCF, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct CONFIGFLAG_fields_

struct CONFIGFLAG : ftl::mmio::Register<
    kBase + 0x180u,
    std::uint32_t,
    0x00000001u,
    ftl::mmio::RO,
    typename CONFIGFLAG_fields_::CF,
    ftl::mmio::Reserved<31, 1>> {
  using eCF = typename CONFIGFLAG_fields_::eCF;
  using CF = typename CONFIGFLAG_fields_::CF;
};

  
// Port Status & Control
struct PORTSC1_fields_ {

  enum class eOCA : std::uint32_t {
    // This port does not have an over-current condition.
    eNO_OVERCURRENT = 0,
    // This port currently has an over-current condition
    eOVERCURRENT = 1,
  };

  enum class eLS : std::uint32_t {
    // SE0
    eSE0 = 0,
    // K-state
    eK_STATE = 1,
    // J-state
    eJ_STATE = 2,
    // Undefined
    eUNDEFINED = 3,
  };

  enum class ePIC : std::uint32_t {
    // Port indicators are off
    ePORT_INDICATOR_OFF = 0,
    // Amber
    ePORT_IND_AMBER = 1,
    // Green
    ePORT_IND_GREEN = 2,
    // Undefined
    eUNDEFINED = 3,
  };

  enum class ePTC : std::uint32_t {
    // TEST_MODE_DISABLE
    eTST_MODE_DIS = 0,
    // J_STATE
    eJ_STATE = 1,
    // K_STATE
    eK_STATE = 2,
    // SE0 (host) / NAK (device)
    eSE0 = 3,
    // Packet
    ePCKT = 4,
    // FORCE_ENABLE_HS
    eHS = 5,
    // FORCE_ENABLE_FS
    eFS = 6,
    // FORCE_ENABLE_LS
    eLS = 7,
  };

  enum class ePHCD : std::uint32_t {
    // Enable PHY clock
    ePHY_CLK_EN = 0,
    // Disable PHY clock
    ePHY_CLK_DIS = 1,
  };

  enum class ePFSC : std::uint32_t {
    // Normal operation
    eNORMAL = 0,
    // Forced to full speed
    eFULL_SPEED = 1,
  };

  enum class ePSPD : std::uint32_t {
    // Full Speed
    eFS = 0,
    // Low Speed
    eLS = 1,
    // High Speed
    eHS = 2,
    // Undefined
    eUNDEFINED = 3,
  };

  enum class ePTW : std::uint32_t {
    // Select the 8-bit UTMI interface [60MHz]
    eUTMI_8 = 0,
    // Select the 16-bit UTMI interface [30MHz]
    eUTMI_16 = 1,
  };
  // CCS
  using CCS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // CSC
  using CSC = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PE
  using PE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PEC
  using PEC = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // OCA
  using OCA = ftl::mmio::Field<1, 4, eOCA, ftl::mmio::RO, ftl::mmio::Normal>;
  // OCC
  using OCC = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // FPR
  using FPR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // SUSP
  using SUSP = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PR
  using PR = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // HSP
  using HSP = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // LS
  using LS = ftl::mmio::Field<2, 10, eLS, ftl::mmio::RW, ftl::mmio::Normal>;
  // PP
  using PP = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PO
  using PO = ftl::mmio::Field<1, 13, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PIC
  using PIC = ftl::mmio::Field<2, 14, ePIC, ftl::mmio::RW, ftl::mmio::Normal>;
  // PTC
  using PTC = ftl::mmio::Field<4, 16, ePTC, ftl::mmio::RW, ftl::mmio::Normal>;
  // WKCN
  using WKCN = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // WKDC
  using WKDC = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // WKOC
  using WKOC = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PHCD
  using PHCD = ftl::mmio::Field<1, 23, ePHCD, ftl::mmio::RW, ftl::mmio::Normal>;
  // PFSC
  using PFSC = ftl::mmio::Field<1, 24, ePFSC, ftl::mmio::RW, ftl::mmio::Normal>;
  // PTS_2
  using PTS_2 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PSPD
  using PSPD = ftl::mmio::Field<2, 26, ePSPD, ftl::mmio::RW, ftl::mmio::Normal>;
  // PTW
  using PTW = ftl::mmio::Field<1, 28, ePTW, ftl::mmio::RW, ftl::mmio::Normal>;
  // STS
  using STS = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // PTS_1
  using PTS_1 = ftl::mmio::Field<2, 30, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct PORTSC1_fields_

struct PORTSC1 : ftl::mmio::Register<
    kBase + 0x184u,
    std::uint32_t,
    0x1C000004u,
    ftl::mmio::RW,
    typename PORTSC1_fields_::CCS,
    typename PORTSC1_fields_::CSC,
    typename PORTSC1_fields_::PE,
    typename PORTSC1_fields_::PEC,
    typename PORTSC1_fields_::OCA,
    typename PORTSC1_fields_::OCC,
    typename PORTSC1_fields_::FPR,
    typename PORTSC1_fields_::SUSP,
    typename PORTSC1_fields_::PR,
    typename PORTSC1_fields_::HSP,
    typename PORTSC1_fields_::LS,
    typename PORTSC1_fields_::PP,
    typename PORTSC1_fields_::PO,
    typename PORTSC1_fields_::PIC,
    typename PORTSC1_fields_::PTC,
    typename PORTSC1_fields_::WKCN,
    typename PORTSC1_fields_::WKDC,
    typename PORTSC1_fields_::WKOC,
    typename PORTSC1_fields_::PHCD,
    typename PORTSC1_fields_::PFSC,
    typename PORTSC1_fields_::PTS_2,
    typename PORTSC1_fields_::PSPD,
    typename PORTSC1_fields_::PTW,
    typename PORTSC1_fields_::STS,
    typename PORTSC1_fields_::PTS_1> {
  using eOCA = typename PORTSC1_fields_::eOCA;
  using eLS = typename PORTSC1_fields_::eLS;
  using ePIC = typename PORTSC1_fields_::ePIC;
  using ePTC = typename PORTSC1_fields_::ePTC;
  using ePHCD = typename PORTSC1_fields_::ePHCD;
  using ePFSC = typename PORTSC1_fields_::ePFSC;
  using ePSPD = typename PORTSC1_fields_::ePSPD;
  using ePTW = typename PORTSC1_fields_::ePTW;
  using CCS = typename PORTSC1_fields_::CCS;
  using CSC = typename PORTSC1_fields_::CSC;
  using PE = typename PORTSC1_fields_::PE;
  using PEC = typename PORTSC1_fields_::PEC;
  using OCA = typename PORTSC1_fields_::OCA;
  using OCC = typename PORTSC1_fields_::OCC;
  using FPR = typename PORTSC1_fields_::FPR;
  using SUSP = typename PORTSC1_fields_::SUSP;
  using PR = typename PORTSC1_fields_::PR;
  using HSP = typename PORTSC1_fields_::HSP;
  using LS = typename PORTSC1_fields_::LS;
  using PP = typename PORTSC1_fields_::PP;
  using PO = typename PORTSC1_fields_::PO;
  using PIC = typename PORTSC1_fields_::PIC;
  using PTC = typename PORTSC1_fields_::PTC;
  using WKCN = typename PORTSC1_fields_::WKCN;
  using WKDC = typename PORTSC1_fields_::WKDC;
  using WKOC = typename PORTSC1_fields_::WKOC;
  using PHCD = typename PORTSC1_fields_::PHCD;
  using PFSC = typename PORTSC1_fields_::PFSC;
  using PTS_2 = typename PORTSC1_fields_::PTS_2;
  using PSPD = typename PORTSC1_fields_::PSPD;
  using PTW = typename PORTSC1_fields_::PTW;
  using STS = typename PORTSC1_fields_::STS;
  using PTS_1 = typename PORTSC1_fields_::PTS_1;
};

  
// On-The-Go Status & control
struct OTGSC_fields_ {
  // VD
  using VD = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // VC
  using VC = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // OT
  using OT = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // DP
  using DP = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // IDPU
  using IDPU = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ID
  using ID = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // AVV
  using AVV = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // ASV
  using ASV = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // BSV
  using BSV = ftl::mmio::Field<1, 11, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // BSE
  using BSE = ftl::mmio::Field<1, 12, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // TOG_1MS
  using TOG_1MS = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // DPS
  using DPS = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  // IDIS
  using IDIS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AVVIS
  using AVVIS = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASVIS
  using ASVIS = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // BSVIS
  using BSVIS = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // BSEIS
  using BSEIS = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // STATUS_1MS
  using STATUS_1MS = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // DPIS
  using DPIS = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // IDIE
  using IDIE = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // AVVIE
  using AVVIE = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // ASVIE
  using ASVIE = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // BSVIE
  using BSVIE = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // BSEIE
  using BSEIE = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // EN_1MS
  using EN_1MS = ftl::mmio::Field<1, 29, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // DPIE
  using DPIE = ftl::mmio::Field<1, 30, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct OTGSC_fields_

struct OTGSC : ftl::mmio::Register<
    kBase + 0x1A4u,
    std::uint32_t,
    0x00202F20u,
    ftl::mmio::RW,
    typename OTGSC_fields_::VD,
    typename OTGSC_fields_::VC,
    ftl::mmio::Reserved<1, 2>,
    typename OTGSC_fields_::OT,
    typename OTGSC_fields_::DP,
    typename OTGSC_fields_::IDPU,
    ftl::mmio::Reserved<2, 6>,
    typename OTGSC_fields_::ID,
    typename OTGSC_fields_::AVV,
    typename OTGSC_fields_::ASV,
    typename OTGSC_fields_::BSV,
    typename OTGSC_fields_::BSE,
    typename OTGSC_fields_::TOG_1MS,
    typename OTGSC_fields_::DPS,
    ftl::mmio::Reserved<1, 15>,
    typename OTGSC_fields_::IDIS,
    typename OTGSC_fields_::AVVIS,
    typename OTGSC_fields_::ASVIS,
    typename OTGSC_fields_::BSVIS,
    typename OTGSC_fields_::BSEIS,
    typename OTGSC_fields_::STATUS_1MS,
    typename OTGSC_fields_::DPIS,
    ftl::mmio::Reserved<1, 23>,
    typename OTGSC_fields_::IDIE,
    typename OTGSC_fields_::AVVIE,
    typename OTGSC_fields_::ASVIE,
    typename OTGSC_fields_::BSVIE,
    typename OTGSC_fields_::BSEIE,
    typename OTGSC_fields_::EN_1MS,
    typename OTGSC_fields_::DPIE,
    ftl::mmio::Reserved<1, 31>> {
  using VD = typename OTGSC_fields_::VD;
  using VC = typename OTGSC_fields_::VC;
  using OT = typename OTGSC_fields_::OT;
  using DP = typename OTGSC_fields_::DP;
  using IDPU = typename OTGSC_fields_::IDPU;
  using ID = typename OTGSC_fields_::ID;
  using AVV = typename OTGSC_fields_::AVV;
  using ASV = typename OTGSC_fields_::ASV;
  using BSV = typename OTGSC_fields_::BSV;
  using BSE = typename OTGSC_fields_::BSE;
  using TOG_1MS = typename OTGSC_fields_::TOG_1MS;
  using DPS = typename OTGSC_fields_::DPS;
  using IDIS = typename OTGSC_fields_::IDIS;
  using AVVIS = typename OTGSC_fields_::AVVIS;
  using ASVIS = typename OTGSC_fields_::ASVIS;
  using BSVIS = typename OTGSC_fields_::BSVIS;
  using BSEIS = typename OTGSC_fields_::BSEIS;
  using STATUS_1MS = typename OTGSC_fields_::STATUS_1MS;
  using DPIS = typename OTGSC_fields_::DPIS;
  using IDIE = typename OTGSC_fields_::IDIE;
  using AVVIE = typename OTGSC_fields_::AVVIE;
  using ASVIE = typename OTGSC_fields_::ASVIE;
  using BSVIE = typename OTGSC_fields_::BSVIE;
  using BSEIE = typename OTGSC_fields_::BSEIE;
  using EN_1MS = typename OTGSC_fields_::EN_1MS;
  using DPIE = typename OTGSC_fields_::DPIE;
};

  
// USB Device Mode
struct USBMODE_fields_ {

  enum class eCM : std::uint32_t {
    // Idle [Default for combination host/device]
    eIDL = 0,
    // Device Controller [Default for device only controller]
    eDEVICE_CONTR = 2,
    // Host Controller [Default for host only controller]
    eHOST_CONTR = 3,
  };

  enum class eES : std::uint32_t {
    // Little Endian [Default]
    eLITTLE_ENDIAN = 0,
    // Big Endian
    eBIG_ENDIAN = 1,
  };

  enum class eSLOM : std::uint32_t {
    // Setup Lockouts On (default);
    eLOCKOUT_ON = 0,
    // Setup Lockouts Off
    eLOCKOUT_OFF = 1,
  };
  // CM
  using CM = ftl::mmio::Field<2, 0, eCM, ftl::mmio::RW, ftl::mmio::Normal>;
  // ES
  using ES = ftl::mmio::Field<1, 2, eES, ftl::mmio::RW, ftl::mmio::Normal>;
  // SLOM
  using SLOM = ftl::mmio::Field<1, 3, eSLOM, ftl::mmio::RW, ftl::mmio::Normal>;
  // SDIS
  using SDIS = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct USBMODE_fields_

struct USBMODE : ftl::mmio::Register<
    kBase + 0x1A8u,
    std::uint32_t,
    0x00005000u,
    ftl::mmio::RW,
    typename USBMODE_fields_::CM,
    typename USBMODE_fields_::ES,
    typename USBMODE_fields_::SLOM,
    typename USBMODE_fields_::SDIS,
    ftl::mmio::Reserved<27, 5>> {
  using eCM = typename USBMODE_fields_::eCM;
  using eES = typename USBMODE_fields_::eES;
  using eSLOM = typename USBMODE_fields_::eSLOM;
  using CM = typename USBMODE_fields_::CM;
  using ES = typename USBMODE_fields_::ES;
  using SLOM = typename USBMODE_fields_::SLOM;
  using SDIS = typename USBMODE_fields_::SDIS;
};

  
// Endpoint Setup Status
struct ENDPTSETUPSTAT_fields_ {
  // ENDPTSETUPSTAT
  using ENDPTSETUPSTAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTSETUPSTAT_fields_

struct ENDPTSETUPSTAT : ftl::mmio::Register<
    kBase + 0x1ACu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTSETUPSTAT_fields_::ENDPTSETUPSTAT,
    ftl::mmio::Reserved<16, 16>> {
  using value_ = typename ENDPTSETUPSTAT_fields_::ENDPTSETUPSTAT;
};

  
// Endpoint Prime
struct ENDPTPRIME_fields_ {
  // PERB
  using PERB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // PETB
  using PETB = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTPRIME_fields_

struct ENDPTPRIME : ftl::mmio::Register<
    kBase + 0x1B0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTPRIME_fields_::PERB,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTPRIME_fields_::PETB,
    ftl::mmio::Reserved<8, 24>> {
  using PERB = typename ENDPTPRIME_fields_::PERB;
  using PETB = typename ENDPTPRIME_fields_::PETB;
};

  
// Endpoint Flush
struct ENDPTFLUSH_fields_ {
  // FERB
  using FERB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // FETB
  using FETB = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTFLUSH_fields_

struct ENDPTFLUSH : ftl::mmio::Register<
    kBase + 0x1B4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTFLUSH_fields_::FERB,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTFLUSH_fields_::FETB,
    ftl::mmio::Reserved<8, 24>> {
  using FERB = typename ENDPTFLUSH_fields_::FERB;
  using FETB = typename ENDPTFLUSH_fields_::FETB;
};

  
// Endpoint Status
struct ENDPTSTAT_fields_ {
  // ERBR
  using ERBR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  // ETBR
  using ETBR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
};  // struct ENDPTSTAT_fields_

struct ENDPTSTAT : ftl::mmio::Register<
    kBase + 0x1B8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RO,
    typename ENDPTSTAT_fields_::ERBR,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTSTAT_fields_::ETBR,
    ftl::mmio::Reserved<8, 24>> {
  using ERBR = typename ENDPTSTAT_fields_::ERBR;
  using ETBR = typename ENDPTSTAT_fields_::ETBR;
};

  
// Endpoint Complete
struct ENDPTCOMPLETE_fields_ {
  // ERCE
  using ERCE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // ETCE
  using ETCE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCOMPLETE_fields_

struct ENDPTCOMPLETE : ftl::mmio::Register<
    kBase + 0x1BCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCOMPLETE_fields_::ERCE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCOMPLETE_fields_::ETCE,
    ftl::mmio::Reserved<8, 24>> {
  using ERCE = typename ENDPTCOMPLETE_fields_::ERCE;
  using ETCE = typename ENDPTCOMPLETE_fields_::ETCE;
};

  
// Endpoint Control0
struct ENDPTCTRL0_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL0_fields_

struct ENDPTCTRL0 : ftl::mmio::Register<
    kBase + 0x1C0u,
    std::uint32_t,
    0x00800080u,
    ftl::mmio::RW,
    typename ENDPTCTRL0_fields_::RXS,
    ftl::mmio::Reserved<1, 1>,
    typename ENDPTCTRL0_fields_::RXT,
    ftl::mmio::Reserved<3, 4>,
    typename ENDPTCTRL0_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL0_fields_::TXS,
    ftl::mmio::Reserved<1, 17>,
    typename ENDPTCTRL0_fields_::TXT,
    ftl::mmio::Reserved<3, 20>,
    typename ENDPTCTRL0_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL0_fields_::RXS;
  using RXT = typename ENDPTCTRL0_fields_::RXT;
  using RXE = typename ENDPTCTRL0_fields_::RXE;
  using TXS = typename ENDPTCTRL0_fields_::TXS;
  using TXT = typename ENDPTCTRL0_fields_::TXT;
  using TXE = typename ENDPTCTRL0_fields_::TXE;
};

  
// Endpoint Control 1
struct ENDPTCTRL1_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL1_fields_

struct ENDPTCTRL1 : ftl::mmio::Register<
    kBase + 0x1C4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL1_fields_::RXS,
    typename ENDPTCTRL1_fields_::RXD,
    typename ENDPTCTRL1_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL1_fields_::RXI,
    typename ENDPTCTRL1_fields_::RXR,
    typename ENDPTCTRL1_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL1_fields_::TXS,
    typename ENDPTCTRL1_fields_::TXD,
    typename ENDPTCTRL1_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL1_fields_::TXI,
    typename ENDPTCTRL1_fields_::TXR,
    typename ENDPTCTRL1_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL1_fields_::RXS;
  using RXD = typename ENDPTCTRL1_fields_::RXD;
  using RXT = typename ENDPTCTRL1_fields_::RXT;
  using RXI = typename ENDPTCTRL1_fields_::RXI;
  using RXR = typename ENDPTCTRL1_fields_::RXR;
  using RXE = typename ENDPTCTRL1_fields_::RXE;
  using TXS = typename ENDPTCTRL1_fields_::TXS;
  using TXD = typename ENDPTCTRL1_fields_::TXD;
  using TXT = typename ENDPTCTRL1_fields_::TXT;
  using TXI = typename ENDPTCTRL1_fields_::TXI;
  using TXR = typename ENDPTCTRL1_fields_::TXR;
  using TXE = typename ENDPTCTRL1_fields_::TXE;
};

  
// Endpoint Control 2
struct ENDPTCTRL2_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL2_fields_

struct ENDPTCTRL2 : ftl::mmio::Register<
    kBase + 0x1C8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL2_fields_::RXS,
    typename ENDPTCTRL2_fields_::RXD,
    typename ENDPTCTRL2_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL2_fields_::RXI,
    typename ENDPTCTRL2_fields_::RXR,
    typename ENDPTCTRL2_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL2_fields_::TXS,
    typename ENDPTCTRL2_fields_::TXD,
    typename ENDPTCTRL2_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL2_fields_::TXI,
    typename ENDPTCTRL2_fields_::TXR,
    typename ENDPTCTRL2_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL2_fields_::RXS;
  using RXD = typename ENDPTCTRL2_fields_::RXD;
  using RXT = typename ENDPTCTRL2_fields_::RXT;
  using RXI = typename ENDPTCTRL2_fields_::RXI;
  using RXR = typename ENDPTCTRL2_fields_::RXR;
  using RXE = typename ENDPTCTRL2_fields_::RXE;
  using TXS = typename ENDPTCTRL2_fields_::TXS;
  using TXD = typename ENDPTCTRL2_fields_::TXD;
  using TXT = typename ENDPTCTRL2_fields_::TXT;
  using TXI = typename ENDPTCTRL2_fields_::TXI;
  using TXR = typename ENDPTCTRL2_fields_::TXR;
  using TXE = typename ENDPTCTRL2_fields_::TXE;
};

  
// Endpoint Control 3
struct ENDPTCTRL3_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL3_fields_

struct ENDPTCTRL3 : ftl::mmio::Register<
    kBase + 0x1CCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL3_fields_::RXS,
    typename ENDPTCTRL3_fields_::RXD,
    typename ENDPTCTRL3_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL3_fields_::RXI,
    typename ENDPTCTRL3_fields_::RXR,
    typename ENDPTCTRL3_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL3_fields_::TXS,
    typename ENDPTCTRL3_fields_::TXD,
    typename ENDPTCTRL3_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL3_fields_::TXI,
    typename ENDPTCTRL3_fields_::TXR,
    typename ENDPTCTRL3_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL3_fields_::RXS;
  using RXD = typename ENDPTCTRL3_fields_::RXD;
  using RXT = typename ENDPTCTRL3_fields_::RXT;
  using RXI = typename ENDPTCTRL3_fields_::RXI;
  using RXR = typename ENDPTCTRL3_fields_::RXR;
  using RXE = typename ENDPTCTRL3_fields_::RXE;
  using TXS = typename ENDPTCTRL3_fields_::TXS;
  using TXD = typename ENDPTCTRL3_fields_::TXD;
  using TXT = typename ENDPTCTRL3_fields_::TXT;
  using TXI = typename ENDPTCTRL3_fields_::TXI;
  using TXR = typename ENDPTCTRL3_fields_::TXR;
  using TXE = typename ENDPTCTRL3_fields_::TXE;
};

  
// Endpoint Control 4
struct ENDPTCTRL4_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL4_fields_

struct ENDPTCTRL4 : ftl::mmio::Register<
    kBase + 0x1D0u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL4_fields_::RXS,
    typename ENDPTCTRL4_fields_::RXD,
    typename ENDPTCTRL4_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL4_fields_::RXI,
    typename ENDPTCTRL4_fields_::RXR,
    typename ENDPTCTRL4_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL4_fields_::TXS,
    typename ENDPTCTRL4_fields_::TXD,
    typename ENDPTCTRL4_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL4_fields_::TXI,
    typename ENDPTCTRL4_fields_::TXR,
    typename ENDPTCTRL4_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL4_fields_::RXS;
  using RXD = typename ENDPTCTRL4_fields_::RXD;
  using RXT = typename ENDPTCTRL4_fields_::RXT;
  using RXI = typename ENDPTCTRL4_fields_::RXI;
  using RXR = typename ENDPTCTRL4_fields_::RXR;
  using RXE = typename ENDPTCTRL4_fields_::RXE;
  using TXS = typename ENDPTCTRL4_fields_::TXS;
  using TXD = typename ENDPTCTRL4_fields_::TXD;
  using TXT = typename ENDPTCTRL4_fields_::TXT;
  using TXI = typename ENDPTCTRL4_fields_::TXI;
  using TXR = typename ENDPTCTRL4_fields_::TXR;
  using TXE = typename ENDPTCTRL4_fields_::TXE;
};

  
// Endpoint Control 5
struct ENDPTCTRL5_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL5_fields_

struct ENDPTCTRL5 : ftl::mmio::Register<
    kBase + 0x1D4u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL5_fields_::RXS,
    typename ENDPTCTRL5_fields_::RXD,
    typename ENDPTCTRL5_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL5_fields_::RXI,
    typename ENDPTCTRL5_fields_::RXR,
    typename ENDPTCTRL5_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL5_fields_::TXS,
    typename ENDPTCTRL5_fields_::TXD,
    typename ENDPTCTRL5_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL5_fields_::TXI,
    typename ENDPTCTRL5_fields_::TXR,
    typename ENDPTCTRL5_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL5_fields_::RXS;
  using RXD = typename ENDPTCTRL5_fields_::RXD;
  using RXT = typename ENDPTCTRL5_fields_::RXT;
  using RXI = typename ENDPTCTRL5_fields_::RXI;
  using RXR = typename ENDPTCTRL5_fields_::RXR;
  using RXE = typename ENDPTCTRL5_fields_::RXE;
  using TXS = typename ENDPTCTRL5_fields_::TXS;
  using TXD = typename ENDPTCTRL5_fields_::TXD;
  using TXT = typename ENDPTCTRL5_fields_::TXT;
  using TXI = typename ENDPTCTRL5_fields_::TXI;
  using TXR = typename ENDPTCTRL5_fields_::TXR;
  using TXE = typename ENDPTCTRL5_fields_::TXE;
};

  
// Endpoint Control 6
struct ENDPTCTRL6_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL6_fields_

struct ENDPTCTRL6 : ftl::mmio::Register<
    kBase + 0x1D8u,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL6_fields_::RXS,
    typename ENDPTCTRL6_fields_::RXD,
    typename ENDPTCTRL6_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL6_fields_::RXI,
    typename ENDPTCTRL6_fields_::RXR,
    typename ENDPTCTRL6_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL6_fields_::TXS,
    typename ENDPTCTRL6_fields_::TXD,
    typename ENDPTCTRL6_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL6_fields_::TXI,
    typename ENDPTCTRL6_fields_::TXR,
    typename ENDPTCTRL6_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL6_fields_::RXS;
  using RXD = typename ENDPTCTRL6_fields_::RXD;
  using RXT = typename ENDPTCTRL6_fields_::RXT;
  using RXI = typename ENDPTCTRL6_fields_::RXI;
  using RXR = typename ENDPTCTRL6_fields_::RXR;
  using RXE = typename ENDPTCTRL6_fields_::RXE;
  using TXS = typename ENDPTCTRL6_fields_::TXS;
  using TXD = typename ENDPTCTRL6_fields_::TXD;
  using TXT = typename ENDPTCTRL6_fields_::TXT;
  using TXI = typename ENDPTCTRL6_fields_::TXI;
  using TXR = typename ENDPTCTRL6_fields_::TXR;
  using TXE = typename ENDPTCTRL6_fields_::TXE;
};

  
// Endpoint Control 7
struct ENDPTCTRL7_fields_ {
  // RXS
  using RXS = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXD
  using RXD = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXT
  using RXT = ftl::mmio::Field<2, 2, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXI
  using RXI = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXR
  using RXR = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // RXE
  using RXE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXS
  using TXS = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXD
  using TXD = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXT
  using TXT = ftl::mmio::Field<2, 18, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXI
  using TXI = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXR
  using TXR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  // TXE
  using TXE = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
};  // struct ENDPTCTRL7_fields_

struct ENDPTCTRL7 : ftl::mmio::Register<
    kBase + 0x1DCu,
    std::uint32_t,
    0x00000000u,
    ftl::mmio::RW,
    typename ENDPTCTRL7_fields_::RXS,
    typename ENDPTCTRL7_fields_::RXD,
    typename ENDPTCTRL7_fields_::RXT,
    ftl::mmio::Reserved<1, 4>,
    typename ENDPTCTRL7_fields_::RXI,
    typename ENDPTCTRL7_fields_::RXR,
    typename ENDPTCTRL7_fields_::RXE,
    ftl::mmio::Reserved<8, 8>,
    typename ENDPTCTRL7_fields_::TXS,
    typename ENDPTCTRL7_fields_::TXD,
    typename ENDPTCTRL7_fields_::TXT,
    ftl::mmio::Reserved<1, 20>,
    typename ENDPTCTRL7_fields_::TXI,
    typename ENDPTCTRL7_fields_::TXR,
    typename ENDPTCTRL7_fields_::TXE,
    ftl::mmio::Reserved<8, 24>> {
  using RXS = typename ENDPTCTRL7_fields_::RXS;
  using RXD = typename ENDPTCTRL7_fields_::RXD;
  using RXT = typename ENDPTCTRL7_fields_::RXT;
  using RXI = typename ENDPTCTRL7_fields_::RXI;
  using RXR = typename ENDPTCTRL7_fields_::RXR;
  using RXE = typename ENDPTCTRL7_fields_::RXE;
  using TXS = typename ENDPTCTRL7_fields_::TXS;
  using TXD = typename ENDPTCTRL7_fields_::TXD;
  using TXT = typename ENDPTCTRL7_fields_::TXT;
  using TXI = typename ENDPTCTRL7_fields_::TXI;
  using TXR = typename ENDPTCTRL7_fields_::TXR;
  using TXE = typename ENDPTCTRL7_fields_::TXE;
};
};

}  // namespace regs