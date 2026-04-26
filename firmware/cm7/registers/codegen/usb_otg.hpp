#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// USB
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct UsbOtg {
  static_assert(
        Instance == 1u || Instance == 2u,
        "UsbOtg: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40430000u :
      Instance == 2u ? 0x4042C000u :
      0u;

  // Identification register
  struct IdFields {
    // ID
    using ID = ftl::mmio::Field<6, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // NID
    using NID = ftl::mmio::Field<6, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // REVISION
    using REVISION = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct IdFields

  struct ID : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0xE4A1FA05u,
      ftl::mmio::RO,
      typename IdFields::ID,
      ftl::mmio::Reserved<2, 6>,
      typename IdFields::NID,
      ftl::mmio::Reserved<2, 14>,
      typename IdFields::REVISION,
      ftl::mmio::Reserved<8, 24>> {
    using VALUE = typename IdFields::ID;
    using NID = typename IdFields::NID;
    using REVISION = typename IdFields::REVISION;
  };

  // Hardware General
  struct HwgeneralFields {
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
  };  // struct HwgeneralFields

  struct HWGENERAL : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00000015u,
      ftl::mmio::RO,
      ftl::mmio::Reserved<4, 0>,
      typename HwgeneralFields::PHYW,
      typename HwgeneralFields::PHYM,
      typename HwgeneralFields::SM,
      ftl::mmio::Reserved<21, 11>> {
    using ePHYW = typename HwgeneralFields::ePHYW;
    using ePHYM = typename HwgeneralFields::ePHYM;
    using eSM = typename HwgeneralFields::eSM;
    using PHYW = typename HwgeneralFields::PHYW;
    using PHYM = typename HwgeneralFields::PHYM;
    using SM = typename HwgeneralFields::SM;
  };

  // Host Hardware Parameters
  struct HwhostFields {
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
  };  // struct HwhostFields

  struct HWHOST : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x10020001u,
      ftl::mmio::RO,
      typename HwhostFields::HC,
      typename HwhostFields::NPORT,
      ftl::mmio::Reserved<28, 4>> {
    using eHC = typename HwhostFields::eHC;
    using HC = typename HwhostFields::HC;
    using NPORT = typename HwhostFields::NPORT;
  };

  // Device Hardware Parameters
  struct HwdeviceFields {
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
  };  // struct HwdeviceFields

  struct HWDEVICE : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000011u,
      ftl::mmio::RO,
      typename HwdeviceFields::DC,
      typename HwdeviceFields::DEVEP,
      ftl::mmio::Reserved<26, 6>> {
    using eDC = typename HwdeviceFields::eDC;
    using DC = typename HwdeviceFields::DC;
    using DEVEP = typename HwdeviceFields::DEVEP;
  };

  // TX Buffer Hardware Parameters
  struct HwtxbufFields {
    // TXBURST
    using TXBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // TXCHANADD
    using TXCHANADD = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HwtxbufFields

  struct HWTXBUF : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x80080B08u,
      ftl::mmio::RO,
      typename HwtxbufFields::TXBURST,
      ftl::mmio::Reserved<8, 8>,
      typename HwtxbufFields::TXCHANADD,
      ftl::mmio::Reserved<8, 24>> {
    using TXBURST = typename HwtxbufFields::TXBURST;
    using TXCHANADD = typename HwtxbufFields::TXCHANADD;
  };

  // RX Buffer Hardware Parameters
  struct HwrxbufFields {
    // RXBURST
    using RXBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // RXADD
    using RXADD = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HwrxbufFields

  struct HWRXBUF : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000808u,
      ftl::mmio::RO,
      typename HwrxbufFields::RXBURST,
      typename HwrxbufFields::RXADD,
      ftl::mmio::Reserved<16, 16>> {
    using RXBURST = typename HwrxbufFields::RXBURST;
    using RXADD = typename HwrxbufFields::RXADD;
  };

  // General Purpose Timer #0 Load
  struct Gptimer0ldFields {
    // GPTLD
    using GPTLD = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gptimer0ldFields

  struct GPTIMER0LD : ftl::mmio::Register<
      kBase + 0x80u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Gptimer0ldFields::GPTLD,
      ftl::mmio::Reserved<8, 24>> {
    using GPTLD = typename Gptimer0ldFields::GPTLD;
  };

  // General Purpose Timer #0 Controller
  struct Gptimer0ctrlFields {
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
  };  // struct Gptimer0ctrlFields

  struct GPTIMER0CTRL : ftl::mmio::Register<
      kBase + 0x84u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Gptimer0ctrlFields::GPTCNT,
      typename Gptimer0ctrlFields::GPTMODE,
      ftl::mmio::Reserved<5, 25>,
      typename Gptimer0ctrlFields::GPTRST,
      typename Gptimer0ctrlFields::GPTRUN> {
    using eGPTMODE = typename Gptimer0ctrlFields::eGPTMODE;
    using eGPTRST = typename Gptimer0ctrlFields::eGPTRST;
    using eGPTRUN = typename Gptimer0ctrlFields::eGPTRUN;
    using GPTCNT = typename Gptimer0ctrlFields::GPTCNT;
    using GPTMODE = typename Gptimer0ctrlFields::GPTMODE;
    using GPTRST = typename Gptimer0ctrlFields::GPTRST;
    using GPTRUN = typename Gptimer0ctrlFields::GPTRUN;
  };

  // General Purpose Timer #1 Load
  struct Gptimer1ldFields {
    // GPTLD
    using GPTLD = ftl::mmio::Field<24, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Gptimer1ldFields

  struct GPTIMER1LD : ftl::mmio::Register<
      kBase + 0x88u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Gptimer1ldFields::GPTLD,
      ftl::mmio::Reserved<8, 24>> {
    using GPTLD = typename Gptimer1ldFields::GPTLD;
  };

  // General Purpose Timer #1 Controller
  struct Gptimer1ctrlFields {
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
  };  // struct Gptimer1ctrlFields

  struct GPTIMER1CTRL : ftl::mmio::Register<
      kBase + 0x8Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Gptimer1ctrlFields::GPTCNT,
      typename Gptimer1ctrlFields::GPTMODE,
      ftl::mmio::Reserved<5, 25>,
      typename Gptimer1ctrlFields::GPTRST,
      typename Gptimer1ctrlFields::GPTRUN> {
    using eGPTMODE = typename Gptimer1ctrlFields::eGPTMODE;
    using eGPTRST = typename Gptimer1ctrlFields::eGPTRST;
    using eGPTRUN = typename Gptimer1ctrlFields::eGPTRUN;
    using GPTCNT = typename Gptimer1ctrlFields::GPTCNT;
    using GPTMODE = typename Gptimer1ctrlFields::GPTMODE;
    using GPTRST = typename Gptimer1ctrlFields::GPTRST;
    using GPTRUN = typename Gptimer1ctrlFields::GPTRUN;
  };

  // System Bus Config
  struct SbuscfgFields {
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
  };  // struct SbuscfgFields

  struct SBUSCFG : ftl::mmio::Register<
      kBase + 0x90u,
      std::uint32_t,
      0x00000002u,
      ftl::mmio::RW,
      typename SbuscfgFields::AHBBRST,
      ftl::mmio::Reserved<29, 3>> {
    using eAHBBRST = typename SbuscfgFields::eAHBBRST;
    using AHBBRST = typename SbuscfgFields::AHBBRST;
  };

  // Capability Registers Length
  struct CaplengthFields {
    // CAPLENGTH
    using CAPLENGTH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CaplengthFields

  struct CAPLENGTH : ftl::mmio::Register<
      kBase + 0x100u,
      std::uint8_t,
      0x40u,
      ftl::mmio::RO,
      typename CaplengthFields::CAPLENGTH> {
    using VALUE = typename CaplengthFields::CAPLENGTH;
  };

  // Host Controller Interface Version
  struct HciversionFields {
    // HCIVERSION
    using HCIVERSION = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HciversionFields

  struct HCIVERSION : ftl::mmio::Register<
      kBase + 0x102u,
      std::uint16_t,
      0x0100u,
      ftl::mmio::RO,
      typename HciversionFields::HCIVERSION> {
    using VALUE = typename HciversionFields::HCIVERSION;
  };

  // Host Controller Structural Parameters
  struct HcsparamsFields {
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
  };  // struct HcsparamsFields

  struct HCSPARAMS : ftl::mmio::Register<
      kBase + 0x104u,
      std::uint32_t,
      0x00010011u,
      ftl::mmio::RO,
      typename HcsparamsFields::N_PORTS,
      typename HcsparamsFields::PPC,
      ftl::mmio::Reserved<3, 5>,
      typename HcsparamsFields::N_PCC,
      typename HcsparamsFields::N_CC,
      typename HcsparamsFields::PI,
      ftl::mmio::Reserved<3, 17>,
      typename HcsparamsFields::N_PTT,
      typename HcsparamsFields::N_TT,
      ftl::mmio::Reserved<4, 28>> {
    using eN_CC = typename HcsparamsFields::eN_CC;
    using N_PORTS = typename HcsparamsFields::N_PORTS;
    using PPC = typename HcsparamsFields::PPC;
    using N_PCC = typename HcsparamsFields::N_PCC;
    using N_CC = typename HcsparamsFields::N_CC;
    using PI = typename HcsparamsFields::PI;
    using N_PTT = typename HcsparamsFields::N_PTT;
    using N_TT = typename HcsparamsFields::N_TT;
  };

  // Host Controller Capability Parameters
  struct HccparamsFields {
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
  };  // struct HccparamsFields

  struct HCCPARAMS : ftl::mmio::Register<
      kBase + 0x108u,
      std::uint32_t,
      0x00000006u,
      ftl::mmio::RO,
      typename HccparamsFields::ADC,
      typename HccparamsFields::PFL,
      typename HccparamsFields::ASP,
      ftl::mmio::Reserved<1, 3>,
      typename HccparamsFields::IST,
      typename HccparamsFields::EECP,
      ftl::mmio::Reserved<16, 16>> {
    using ADC = typename HccparamsFields::ADC;
    using PFL = typename HccparamsFields::PFL;
    using ASP = typename HccparamsFields::ASP;
    using IST = typename HccparamsFields::IST;
    using EECP = typename HccparamsFields::EECP;
  };

  // Device Controller Interface Version
  struct DciversionFields {
    // DCIVERSION
    using DCIVERSION = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DciversionFields

  struct DCIVERSION : ftl::mmio::Register<
      kBase + 0x120u,
      std::uint16_t,
      0x0001u,
      ftl::mmio::RO,
      typename DciversionFields::DCIVERSION> {
    using VALUE = typename DciversionFields::DCIVERSION;
  };

  // Device Controller Capability Parameters
  struct DccparamsFields {
    // DEN
    using DEN = ftl::mmio::Field<5, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // DC
    using DC = ftl::mmio::Field<1, 7, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // HC
    using HC = ftl::mmio::Field<1, 8, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DccparamsFields

  struct DCCPARAMS : ftl::mmio::Register<
      kBase + 0x124u,
      std::uint32_t,
      0x00000188u,
      ftl::mmio::RO,
      typename DccparamsFields::DEN,
      ftl::mmio::Reserved<2, 5>,
      typename DccparamsFields::DC,
      typename DccparamsFields::HC,
      ftl::mmio::Reserved<23, 9>> {
    using DEN = typename DccparamsFields::DEN;
    using DC = typename DccparamsFields::DC;
    using HC = typename DccparamsFields::HC;
  };

  // USB Command Register
  struct UsbcmdFields {
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
  };  // struct UsbcmdFields

  struct USBCMD : ftl::mmio::Register<
      kBase + 0x140u,
      std::uint32_t,
      0x00080000u,
      ftl::mmio::RW,
      typename UsbcmdFields::RS,
      typename UsbcmdFields::RST,
      typename UsbcmdFields::FS_1,
      typename UsbcmdFields::PSE,
      typename UsbcmdFields::ASE,
      typename UsbcmdFields::IAA,
      ftl::mmio::Reserved<1, 7>,
      typename UsbcmdFields::ASP,
      ftl::mmio::Reserved<1, 10>,
      typename UsbcmdFields::ASPE,
      ftl::mmio::Reserved<1, 12>,
      typename UsbcmdFields::SUTW,
      typename UsbcmdFields::ATDTW,
      typename UsbcmdFields::FS_2,
      typename UsbcmdFields::ITC,
      ftl::mmio::Reserved<8, 24>> {
    using ePSE = typename UsbcmdFields::ePSE;
    using eASE = typename UsbcmdFields::eASE;
    using eITC = typename UsbcmdFields::eITC;
    using RS = typename UsbcmdFields::RS;
    using RST = typename UsbcmdFields::RST;
    using FS_1 = typename UsbcmdFields::FS_1;
    using PSE = typename UsbcmdFields::PSE;
    using ASE = typename UsbcmdFields::ASE;
    using IAA = typename UsbcmdFields::IAA;
    using ASP = typename UsbcmdFields::ASP;
    using ASPE = typename UsbcmdFields::ASPE;
    using SUTW = typename UsbcmdFields::SUTW;
    using ATDTW = typename UsbcmdFields::ATDTW;
    using FS_2 = typename UsbcmdFields::FS_2;
    using ITC = typename UsbcmdFields::ITC;
  };

  // USB Status Register
  struct UsbstsFields {
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
  };  // struct UsbstsFields

  struct USBSTS : ftl::mmio::Register<
      kBase + 0x144u,
      std::uint32_t,
      0x00000080u,
      ftl::mmio::RW,
      typename UsbstsFields::UI,
      typename UsbstsFields::UEI,
      typename UsbstsFields::PCI,
      typename UsbstsFields::FRI,
      typename UsbstsFields::SEI,
      typename UsbstsFields::AAI,
      typename UsbstsFields::URI,
      typename UsbstsFields::SRI,
      typename UsbstsFields::SLI,
      ftl::mmio::Reserved<1, 9>,
      typename UsbstsFields::ULPII,
      ftl::mmio::Reserved<1, 11>,
      typename UsbstsFields::HCH,
      typename UsbstsFields::RCL,
      typename UsbstsFields::PS,
      typename UsbstsFields::AS,
      typename UsbstsFields::NAKI,
      ftl::mmio::Reserved<7, 17>,
      typename UsbstsFields::TI0,
      typename UsbstsFields::TI1,
      ftl::mmio::Reserved<6, 26>> {
    using UI = typename UsbstsFields::UI;
    using UEI = typename UsbstsFields::UEI;
    using PCI = typename UsbstsFields::PCI;
    using FRI = typename UsbstsFields::FRI;
    using SEI = typename UsbstsFields::SEI;
    using AAI = typename UsbstsFields::AAI;
    using URI = typename UsbstsFields::URI;
    using SRI = typename UsbstsFields::SRI;
    using SLI = typename UsbstsFields::SLI;
    using ULPII = typename UsbstsFields::ULPII;
    using HCH = typename UsbstsFields::HCH;
    using RCL = typename UsbstsFields::RCL;
    using PS = typename UsbstsFields::PS;
    using AS = typename UsbstsFields::AS;
    using NAKI = typename UsbstsFields::NAKI;
    using TI0 = typename UsbstsFields::TI0;
    using TI1 = typename UsbstsFields::TI1;
  };

  // Interrupt Enable Register
  struct UsbintrFields {
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
  };  // struct UsbintrFields

  struct USBINTR : ftl::mmio::Register<
      kBase + 0x148u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename UsbintrFields::UE,
      typename UsbintrFields::UEE,
      typename UsbintrFields::PCE,
      typename UsbintrFields::FRE,
      typename UsbintrFields::SEE,
      typename UsbintrFields::AAE,
      typename UsbintrFields::URE,
      typename UsbintrFields::SRE,
      typename UsbintrFields::SLE,
      ftl::mmio::Reserved<1, 9>,
      typename UsbintrFields::ULPIE,
      ftl::mmio::Reserved<5, 11>,
      typename UsbintrFields::NAKE,
      ftl::mmio::Reserved<1, 17>,
      typename UsbintrFields::UAIE,
      typename UsbintrFields::UPIE,
      ftl::mmio::Reserved<4, 20>,
      typename UsbintrFields::TIE0,
      typename UsbintrFields::TIE1,
      ftl::mmio::Reserved<6, 26>> {
    using UE = typename UsbintrFields::UE;
    using UEE = typename UsbintrFields::UEE;
    using PCE = typename UsbintrFields::PCE;
    using FRE = typename UsbintrFields::FRE;
    using SEE = typename UsbintrFields::SEE;
    using AAE = typename UsbintrFields::AAE;
    using URE = typename UsbintrFields::URE;
    using SRE = typename UsbintrFields::SRE;
    using SLE = typename UsbintrFields::SLE;
    using ULPIE = typename UsbintrFields::ULPIE;
    using NAKE = typename UsbintrFields::NAKE;
    using UAIE = typename UsbintrFields::UAIE;
    using UPIE = typename UsbintrFields::UPIE;
    using TIE0 = typename UsbintrFields::TIE0;
    using TIE1 = typename UsbintrFields::TIE1;
  };

  // USB Frame Index
  struct FrindexFields {
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
  };  // struct FrindexFields

  struct FRINDEX : ftl::mmio::Register<
      kBase + 0x14Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FrindexFields::FRINDEX,
      ftl::mmio::Reserved<18, 14>> {
    using eFRINDEX = typename FrindexFields::eFRINDEX;
    using VALUE = typename FrindexFields::FRINDEX;
  };

  // Device Address
  struct DeviceaddrFields {
    // USBADRA
    using USBADRA = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // USBADR
    using USBADR = ftl::mmio::Field<7, 25, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DeviceaddrFields

  struct DEVICEADDR : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<24, 0>,
      typename DeviceaddrFields::USBADRA,
      typename DeviceaddrFields::USBADR> {
    using USBADRA = typename DeviceaddrFields::USBADRA;
    using USBADR = typename DeviceaddrFields::USBADR;
  };

  // Frame List Base Address
  struct PeriodiclistbaseFields {
    // BASEADR
    using BASEADR = ftl::mmio::Field<20, 12, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct PeriodiclistbaseFields

  struct PERIODICLISTBASE : ftl::mmio::Register<
      kBase + 0x154u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<12, 0>,
      typename PeriodiclistbaseFields::BASEADR> {
    using BASEADR = typename PeriodiclistbaseFields::BASEADR;
  };

  // Next Asynch. Address
  struct AsynclistaddrFields {
    // ASYBASE
    using ASYBASE = ftl::mmio::Field<27, 5, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AsynclistaddrFields

  struct ASYNCLISTADDR : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<5, 0>,
      typename AsynclistaddrFields::ASYBASE> {
    using ASYBASE = typename AsynclistaddrFields::ASYBASE;
  };

  // Endpoint List Address
  struct EndptlistaddrFields {
    // EPBASE
    using EPBASE = ftl::mmio::Field<21, 11, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptlistaddrFields

  struct ENDPTLISTADDR : ftl::mmio::Register<
      kBase + 0x158u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<11, 0>,
      typename EndptlistaddrFields::EPBASE> {
    using EPBASE = typename EndptlistaddrFields::EPBASE;
  };

  // Programmable Burst Size
  struct BurstsizeFields {
    // RXPBURST
    using RXPBURST = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TXPBURST
    using TXPBURST = ftl::mmio::Field<9, 8, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BurstsizeFields

  struct BURSTSIZE : ftl::mmio::Register<
      kBase + 0x160u,
      std::uint32_t,
      0x00000808u,
      ftl::mmio::RW,
      typename BurstsizeFields::RXPBURST,
      typename BurstsizeFields::TXPBURST,
      ftl::mmio::Reserved<15, 17>> {
    using RXPBURST = typename BurstsizeFields::RXPBURST;
    using TXPBURST = typename BurstsizeFields::TXPBURST;
  };

  // TX FIFO Fill Tuning
  struct TxfilltuningFields {
    // TXSCHOH
    using TXSCHOH = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TXSCHHEALTH
    using TXSCHHEALTH = ftl::mmio::Field<5, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TXFIFOTHRES
    using TXFIFOTHRES = ftl::mmio::Field<6, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TxfilltuningFields

  struct TXFILLTUNING : ftl::mmio::Register<
      kBase + 0x164u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename TxfilltuningFields::TXSCHOH,
      typename TxfilltuningFields::TXSCHHEALTH,
      ftl::mmio::Reserved<3, 13>,
      typename TxfilltuningFields::TXFIFOTHRES,
      ftl::mmio::Reserved<10, 22>> {
    using TXSCHOH = typename TxfilltuningFields::TXSCHOH;
    using TXSCHHEALTH = typename TxfilltuningFields::TXSCHHEALTH;
    using TXFIFOTHRES = typename TxfilltuningFields::TXFIFOTHRES;
  };

  // Endpoint NAK
  struct EndptnakFields {
    // EPRN
    using EPRN = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // EPTN
    using EPTN = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptnakFields

  struct ENDPTNAK : ftl::mmio::Register<
      kBase + 0x178u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptnakFields::EPRN,
      ftl::mmio::Reserved<8, 8>,
      typename EndptnakFields::EPTN,
      ftl::mmio::Reserved<8, 24>> {
    using EPRN = typename EndptnakFields::EPRN;
    using EPTN = typename EndptnakFields::EPTN;
  };

  // Endpoint NAK Enable
  struct EndptnakenFields {
    // EPRNE
    using EPRNE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // EPTNE
    using EPTNE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptnakenFields

  struct ENDPTNAKEN : ftl::mmio::Register<
      kBase + 0x17Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptnakenFields::EPRNE,
      ftl::mmio::Reserved<8, 8>,
      typename EndptnakenFields::EPTNE,
      ftl::mmio::Reserved<8, 24>> {
    using EPRNE = typename EndptnakenFields::EPRNE;
    using EPTNE = typename EndptnakenFields::EPTNE;
  };

  // Configure Flag Register
  struct ConfigflagFields {
    enum class eCF : std::uint32_t {
      // Port routing control logic default-routes each port to an implementation dependent classic host controller.
      ePORT_ROUTING_CLASSIC_HOST = 0,
      // Port routing control logic default-routes all ports to this host controller.
      ePORT_ROUTING_HOST = 1,
    };

    // CF
    using CF = ftl::mmio::Field<1, 0, eCF, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ConfigflagFields

  struct CONFIGFLAG : ftl::mmio::Register<
      kBase + 0x180u,
      std::uint32_t,
      0x00000001u,
      ftl::mmio::RO,
      typename ConfigflagFields::CF,
      ftl::mmio::Reserved<31, 1>> {
    using eCF = typename ConfigflagFields::eCF;
    using CF = typename ConfigflagFields::CF;
  };

  // Port Status & Control
  struct Portsc1Fields {
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
  };  // struct Portsc1Fields

  struct PORTSC1 : ftl::mmio::Register<
      kBase + 0x184u,
      std::uint32_t,
      0x1C000004u,
      ftl::mmio::RW,
      typename Portsc1Fields::CCS,
      typename Portsc1Fields::CSC,
      typename Portsc1Fields::PE,
      typename Portsc1Fields::PEC,
      typename Portsc1Fields::OCA,
      typename Portsc1Fields::OCC,
      typename Portsc1Fields::FPR,
      typename Portsc1Fields::SUSP,
      typename Portsc1Fields::PR,
      typename Portsc1Fields::HSP,
      typename Portsc1Fields::LS,
      typename Portsc1Fields::PP,
      typename Portsc1Fields::PO,
      typename Portsc1Fields::PIC,
      typename Portsc1Fields::PTC,
      typename Portsc1Fields::WKCN,
      typename Portsc1Fields::WKDC,
      typename Portsc1Fields::WKOC,
      typename Portsc1Fields::PHCD,
      typename Portsc1Fields::PFSC,
      typename Portsc1Fields::PTS_2,
      typename Portsc1Fields::PSPD,
      typename Portsc1Fields::PTW,
      typename Portsc1Fields::STS,
      typename Portsc1Fields::PTS_1> {
    using eOCA = typename Portsc1Fields::eOCA;
    using eLS = typename Portsc1Fields::eLS;
    using ePIC = typename Portsc1Fields::ePIC;
    using ePTC = typename Portsc1Fields::ePTC;
    using ePHCD = typename Portsc1Fields::ePHCD;
    using ePFSC = typename Portsc1Fields::ePFSC;
    using ePSPD = typename Portsc1Fields::ePSPD;
    using ePTW = typename Portsc1Fields::ePTW;
    using CCS = typename Portsc1Fields::CCS;
    using CSC = typename Portsc1Fields::CSC;
    using PE = typename Portsc1Fields::PE;
    using PEC = typename Portsc1Fields::PEC;
    using OCA = typename Portsc1Fields::OCA;
    using OCC = typename Portsc1Fields::OCC;
    using FPR = typename Portsc1Fields::FPR;
    using SUSP = typename Portsc1Fields::SUSP;
    using PR = typename Portsc1Fields::PR;
    using HSP = typename Portsc1Fields::HSP;
    using LS = typename Portsc1Fields::LS;
    using PP = typename Portsc1Fields::PP;
    using PO = typename Portsc1Fields::PO;
    using PIC = typename Portsc1Fields::PIC;
    using PTC = typename Portsc1Fields::PTC;
    using WKCN = typename Portsc1Fields::WKCN;
    using WKDC = typename Portsc1Fields::WKDC;
    using WKOC = typename Portsc1Fields::WKOC;
    using PHCD = typename Portsc1Fields::PHCD;
    using PFSC = typename Portsc1Fields::PFSC;
    using PTS_2 = typename Portsc1Fields::PTS_2;
    using PSPD = typename Portsc1Fields::PSPD;
    using PTW = typename Portsc1Fields::PTW;
    using STS = typename Portsc1Fields::STS;
    using PTS_1 = typename Portsc1Fields::PTS_1;
  };

  // On-The-Go Status & control
  struct OtgscFields {
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
  };  // struct OtgscFields

  struct OTGSC : ftl::mmio::Register<
      kBase + 0x1A4u,
      std::uint32_t,
      0x00202F20u,
      ftl::mmio::RW,
      typename OtgscFields::VD,
      typename OtgscFields::VC,
      ftl::mmio::Reserved<1, 2>,
      typename OtgscFields::OT,
      typename OtgscFields::DP,
      typename OtgscFields::IDPU,
      ftl::mmio::Reserved<2, 6>,
      typename OtgscFields::ID,
      typename OtgscFields::AVV,
      typename OtgscFields::ASV,
      typename OtgscFields::BSV,
      typename OtgscFields::BSE,
      typename OtgscFields::TOG_1MS,
      typename OtgscFields::DPS,
      ftl::mmio::Reserved<1, 15>,
      typename OtgscFields::IDIS,
      typename OtgscFields::AVVIS,
      typename OtgscFields::ASVIS,
      typename OtgscFields::BSVIS,
      typename OtgscFields::BSEIS,
      typename OtgscFields::STATUS_1MS,
      typename OtgscFields::DPIS,
      ftl::mmio::Reserved<1, 23>,
      typename OtgscFields::IDIE,
      typename OtgscFields::AVVIE,
      typename OtgscFields::ASVIE,
      typename OtgscFields::BSVIE,
      typename OtgscFields::BSEIE,
      typename OtgscFields::EN_1MS,
      typename OtgscFields::DPIE,
      ftl::mmio::Reserved<1, 31>> {
    using VD = typename OtgscFields::VD;
    using VC = typename OtgscFields::VC;
    using OT = typename OtgscFields::OT;
    using DP = typename OtgscFields::DP;
    using IDPU = typename OtgscFields::IDPU;
    using ID = typename OtgscFields::ID;
    using AVV = typename OtgscFields::AVV;
    using ASV = typename OtgscFields::ASV;
    using BSV = typename OtgscFields::BSV;
    using BSE = typename OtgscFields::BSE;
    using TOG_1MS = typename OtgscFields::TOG_1MS;
    using DPS = typename OtgscFields::DPS;
    using IDIS = typename OtgscFields::IDIS;
    using AVVIS = typename OtgscFields::AVVIS;
    using ASVIS = typename OtgscFields::ASVIS;
    using BSVIS = typename OtgscFields::BSVIS;
    using BSEIS = typename OtgscFields::BSEIS;
    using STATUS_1MS = typename OtgscFields::STATUS_1MS;
    using DPIS = typename OtgscFields::DPIS;
    using IDIE = typename OtgscFields::IDIE;
    using AVVIE = typename OtgscFields::AVVIE;
    using ASVIE = typename OtgscFields::ASVIE;
    using BSVIE = typename OtgscFields::BSVIE;
    using BSEIE = typename OtgscFields::BSEIE;
    using EN_1MS = typename OtgscFields::EN_1MS;
    using DPIE = typename OtgscFields::DPIE;
  };

  // USB Device Mode
  struct UsbmodeFields {
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
  };  // struct UsbmodeFields

  struct USBMODE : ftl::mmio::Register<
      kBase + 0x1A8u,
      std::uint32_t,
      0x00005000u,
      ftl::mmio::RW,
      typename UsbmodeFields::CM,
      typename UsbmodeFields::ES,
      typename UsbmodeFields::SLOM,
      typename UsbmodeFields::SDIS,
      ftl::mmio::Reserved<27, 5>> {
    using eCM = typename UsbmodeFields::eCM;
    using eES = typename UsbmodeFields::eES;
    using eSLOM = typename UsbmodeFields::eSLOM;
    using CM = typename UsbmodeFields::CM;
    using ES = typename UsbmodeFields::ES;
    using SLOM = typename UsbmodeFields::SLOM;
    using SDIS = typename UsbmodeFields::SDIS;
  };

  // Endpoint Setup Status
  struct EndptsetupstatFields {
    // ENDPTSETUPSTAT
    using ENDPTSETUPSTAT = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptsetupstatFields

  struct ENDPTSETUPSTAT : ftl::mmio::Register<
      kBase + 0x1ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptsetupstatFields::ENDPTSETUPSTAT,
      ftl::mmio::Reserved<16, 16>> {
    using VALUE = typename EndptsetupstatFields::ENDPTSETUPSTAT;
  };

  // Endpoint Prime
  struct EndptprimeFields {
    // PERB
    using PERB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // PETB
    using PETB = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptprimeFields

  struct ENDPTPRIME : ftl::mmio::Register<
      kBase + 0x1B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptprimeFields::PERB,
      ftl::mmio::Reserved<8, 8>,
      typename EndptprimeFields::PETB,
      ftl::mmio::Reserved<8, 24>> {
    using PERB = typename EndptprimeFields::PERB;
    using PETB = typename EndptprimeFields::PETB;
  };

  // Endpoint Flush
  struct EndptflushFields {
    // FERB
    using FERB = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // FETB
    using FETB = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptflushFields

  struct ENDPTFLUSH : ftl::mmio::Register<
      kBase + 0x1B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptflushFields::FERB,
      ftl::mmio::Reserved<8, 8>,
      typename EndptflushFields::FETB,
      ftl::mmio::Reserved<8, 24>> {
    using FERB = typename EndptflushFields::FERB;
    using FETB = typename EndptflushFields::FETB;
  };

  // Endpoint Status
  struct EndptstatFields {
    // ERBR
    using ERBR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ETBR
    using ETBR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct EndptstatFields

  struct ENDPTSTAT : ftl::mmio::Register<
      kBase + 0x1B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename EndptstatFields::ERBR,
      ftl::mmio::Reserved<8, 8>,
      typename EndptstatFields::ETBR,
      ftl::mmio::Reserved<8, 24>> {
    using ERBR = typename EndptstatFields::ERBR;
    using ETBR = typename EndptstatFields::ETBR;
  };

  // Endpoint Complete
  struct EndptcompleteFields {
    // ERCE
    using ERCE = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // ETCE
    using ETCE = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct EndptcompleteFields

  struct ENDPTCOMPLETE : ftl::mmio::Register<
      kBase + 0x1BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename EndptcompleteFields::ERCE,
      ftl::mmio::Reserved<8, 8>,
      typename EndptcompleteFields::ETCE,
      ftl::mmio::Reserved<8, 24>> {
    using ERCE = typename EndptcompleteFields::ERCE;
    using ETCE = typename EndptcompleteFields::ETCE;
  };

  // Endpoint Control0
  struct Endptctrl0Fields {
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
  };  // struct Endptctrl0Fields

  struct ENDPTCTRL0 : ftl::mmio::Register<
      kBase + 0x1C0u,
      std::uint32_t,
      0x00800080u,
      ftl::mmio::RW,
      typename Endptctrl0Fields::RXS,
      ftl::mmio::Reserved<1, 1>,
      typename Endptctrl0Fields::RXT,
      ftl::mmio::Reserved<3, 4>,
      typename Endptctrl0Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl0Fields::TXS,
      ftl::mmio::Reserved<1, 17>,
      typename Endptctrl0Fields::TXT,
      ftl::mmio::Reserved<3, 20>,
      typename Endptctrl0Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl0Fields::RXS;
    using RXT = typename Endptctrl0Fields::RXT;
    using RXE = typename Endptctrl0Fields::RXE;
    using TXS = typename Endptctrl0Fields::TXS;
    using TXT = typename Endptctrl0Fields::TXT;
    using TXE = typename Endptctrl0Fields::TXE;
  };

  // Endpoint Control 1
  struct Endptctrl1Fields {
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
  };  // struct Endptctrl1Fields

  struct ENDPTCTRL1 : ftl::mmio::Register<
      kBase + 0x1C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl1Fields::RXS,
      typename Endptctrl1Fields::RXD,
      typename Endptctrl1Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl1Fields::RXI,
      typename Endptctrl1Fields::RXR,
      typename Endptctrl1Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl1Fields::TXS,
      typename Endptctrl1Fields::TXD,
      typename Endptctrl1Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl1Fields::TXI,
      typename Endptctrl1Fields::TXR,
      typename Endptctrl1Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl1Fields::RXS;
    using RXD = typename Endptctrl1Fields::RXD;
    using RXT = typename Endptctrl1Fields::RXT;
    using RXI = typename Endptctrl1Fields::RXI;
    using RXR = typename Endptctrl1Fields::RXR;
    using RXE = typename Endptctrl1Fields::RXE;
    using TXS = typename Endptctrl1Fields::TXS;
    using TXD = typename Endptctrl1Fields::TXD;
    using TXT = typename Endptctrl1Fields::TXT;
    using TXI = typename Endptctrl1Fields::TXI;
    using TXR = typename Endptctrl1Fields::TXR;
    using TXE = typename Endptctrl1Fields::TXE;
  };

  // Endpoint Control 2
  struct Endptctrl2Fields {
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
  };  // struct Endptctrl2Fields

  struct ENDPTCTRL2 : ftl::mmio::Register<
      kBase + 0x1C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl2Fields::RXS,
      typename Endptctrl2Fields::RXD,
      typename Endptctrl2Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl2Fields::RXI,
      typename Endptctrl2Fields::RXR,
      typename Endptctrl2Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl2Fields::TXS,
      typename Endptctrl2Fields::TXD,
      typename Endptctrl2Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl2Fields::TXI,
      typename Endptctrl2Fields::TXR,
      typename Endptctrl2Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl2Fields::RXS;
    using RXD = typename Endptctrl2Fields::RXD;
    using RXT = typename Endptctrl2Fields::RXT;
    using RXI = typename Endptctrl2Fields::RXI;
    using RXR = typename Endptctrl2Fields::RXR;
    using RXE = typename Endptctrl2Fields::RXE;
    using TXS = typename Endptctrl2Fields::TXS;
    using TXD = typename Endptctrl2Fields::TXD;
    using TXT = typename Endptctrl2Fields::TXT;
    using TXI = typename Endptctrl2Fields::TXI;
    using TXR = typename Endptctrl2Fields::TXR;
    using TXE = typename Endptctrl2Fields::TXE;
  };

  // Endpoint Control 3
  struct Endptctrl3Fields {
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
  };  // struct Endptctrl3Fields

  struct ENDPTCTRL3 : ftl::mmio::Register<
      kBase + 0x1CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl3Fields::RXS,
      typename Endptctrl3Fields::RXD,
      typename Endptctrl3Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl3Fields::RXI,
      typename Endptctrl3Fields::RXR,
      typename Endptctrl3Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl3Fields::TXS,
      typename Endptctrl3Fields::TXD,
      typename Endptctrl3Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl3Fields::TXI,
      typename Endptctrl3Fields::TXR,
      typename Endptctrl3Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl3Fields::RXS;
    using RXD = typename Endptctrl3Fields::RXD;
    using RXT = typename Endptctrl3Fields::RXT;
    using RXI = typename Endptctrl3Fields::RXI;
    using RXR = typename Endptctrl3Fields::RXR;
    using RXE = typename Endptctrl3Fields::RXE;
    using TXS = typename Endptctrl3Fields::TXS;
    using TXD = typename Endptctrl3Fields::TXD;
    using TXT = typename Endptctrl3Fields::TXT;
    using TXI = typename Endptctrl3Fields::TXI;
    using TXR = typename Endptctrl3Fields::TXR;
    using TXE = typename Endptctrl3Fields::TXE;
  };

  // Endpoint Control 4
  struct Endptctrl4Fields {
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
  };  // struct Endptctrl4Fields

  struct ENDPTCTRL4 : ftl::mmio::Register<
      kBase + 0x1D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl4Fields::RXS,
      typename Endptctrl4Fields::RXD,
      typename Endptctrl4Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl4Fields::RXI,
      typename Endptctrl4Fields::RXR,
      typename Endptctrl4Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl4Fields::TXS,
      typename Endptctrl4Fields::TXD,
      typename Endptctrl4Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl4Fields::TXI,
      typename Endptctrl4Fields::TXR,
      typename Endptctrl4Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl4Fields::RXS;
    using RXD = typename Endptctrl4Fields::RXD;
    using RXT = typename Endptctrl4Fields::RXT;
    using RXI = typename Endptctrl4Fields::RXI;
    using RXR = typename Endptctrl4Fields::RXR;
    using RXE = typename Endptctrl4Fields::RXE;
    using TXS = typename Endptctrl4Fields::TXS;
    using TXD = typename Endptctrl4Fields::TXD;
    using TXT = typename Endptctrl4Fields::TXT;
    using TXI = typename Endptctrl4Fields::TXI;
    using TXR = typename Endptctrl4Fields::TXR;
    using TXE = typename Endptctrl4Fields::TXE;
  };

  // Endpoint Control 5
  struct Endptctrl5Fields {
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
  };  // struct Endptctrl5Fields

  struct ENDPTCTRL5 : ftl::mmio::Register<
      kBase + 0x1D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl5Fields::RXS,
      typename Endptctrl5Fields::RXD,
      typename Endptctrl5Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl5Fields::RXI,
      typename Endptctrl5Fields::RXR,
      typename Endptctrl5Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl5Fields::TXS,
      typename Endptctrl5Fields::TXD,
      typename Endptctrl5Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl5Fields::TXI,
      typename Endptctrl5Fields::TXR,
      typename Endptctrl5Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl5Fields::RXS;
    using RXD = typename Endptctrl5Fields::RXD;
    using RXT = typename Endptctrl5Fields::RXT;
    using RXI = typename Endptctrl5Fields::RXI;
    using RXR = typename Endptctrl5Fields::RXR;
    using RXE = typename Endptctrl5Fields::RXE;
    using TXS = typename Endptctrl5Fields::TXS;
    using TXD = typename Endptctrl5Fields::TXD;
    using TXT = typename Endptctrl5Fields::TXT;
    using TXI = typename Endptctrl5Fields::TXI;
    using TXR = typename Endptctrl5Fields::TXR;
    using TXE = typename Endptctrl5Fields::TXE;
  };

  // Endpoint Control 6
  struct Endptctrl6Fields {
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
  };  // struct Endptctrl6Fields

  struct ENDPTCTRL6 : ftl::mmio::Register<
      kBase + 0x1D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl6Fields::RXS,
      typename Endptctrl6Fields::RXD,
      typename Endptctrl6Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl6Fields::RXI,
      typename Endptctrl6Fields::RXR,
      typename Endptctrl6Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl6Fields::TXS,
      typename Endptctrl6Fields::TXD,
      typename Endptctrl6Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl6Fields::TXI,
      typename Endptctrl6Fields::TXR,
      typename Endptctrl6Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl6Fields::RXS;
    using RXD = typename Endptctrl6Fields::RXD;
    using RXT = typename Endptctrl6Fields::RXT;
    using RXI = typename Endptctrl6Fields::RXI;
    using RXR = typename Endptctrl6Fields::RXR;
    using RXE = typename Endptctrl6Fields::RXE;
    using TXS = typename Endptctrl6Fields::TXS;
    using TXD = typename Endptctrl6Fields::TXD;
    using TXT = typename Endptctrl6Fields::TXT;
    using TXI = typename Endptctrl6Fields::TXI;
    using TXR = typename Endptctrl6Fields::TXR;
    using TXE = typename Endptctrl6Fields::TXE;
  };

  // Endpoint Control 7
  struct Endptctrl7Fields {
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
  };  // struct Endptctrl7Fields

  struct ENDPTCTRL7 : ftl::mmio::Register<
      kBase + 0x1DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Endptctrl7Fields::RXS,
      typename Endptctrl7Fields::RXD,
      typename Endptctrl7Fields::RXT,
      ftl::mmio::Reserved<1, 4>,
      typename Endptctrl7Fields::RXI,
      typename Endptctrl7Fields::RXR,
      typename Endptctrl7Fields::RXE,
      ftl::mmio::Reserved<8, 8>,
      typename Endptctrl7Fields::TXS,
      typename Endptctrl7Fields::TXD,
      typename Endptctrl7Fields::TXT,
      ftl::mmio::Reserved<1, 20>,
      typename Endptctrl7Fields::TXI,
      typename Endptctrl7Fields::TXR,
      typename Endptctrl7Fields::TXE,
      ftl::mmio::Reserved<8, 24>> {
    using RXS = typename Endptctrl7Fields::RXS;
    using RXD = typename Endptctrl7Fields::RXD;
    using RXT = typename Endptctrl7Fields::RXT;
    using RXI = typename Endptctrl7Fields::RXI;
    using RXR = typename Endptctrl7Fields::RXR;
    using RXE = typename Endptctrl7Fields::RXE;
    using TXS = typename Endptctrl7Fields::TXS;
    using TXD = typename Endptctrl7Fields::TXD;
    using TXT = typename Endptctrl7Fields::TXT;
    using TXI = typename Endptctrl7Fields::TXI;
    using TXR = typename Endptctrl7Fields::TXR;
    using TXE = typename Endptctrl7Fields::TXE;
  };

};

}  // namespace regs