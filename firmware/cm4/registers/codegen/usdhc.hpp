#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// uSDHC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct Usdhc {
  static_assert(
        Instance == 1u || Instance == 2u,
        "Usdhc: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40418000u :
      Instance == 2u ? 0x4041C000u :
      0u;

  // DMA System Address
  struct DsAddrFields {
    // System address
    using DS_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DsAddrFields

  struct DS_ADDR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DsAddrFields::DS_ADDR> {
    using VALUE = typename DsAddrFields::DS_ADDR;
  };

  // Block Attributes
  struct BlkAttFields {
    enum class eBLKSIZE : std::uint32_t {
      // No data transfer
      eBLKSIZE_0 = 0,
      // 1 byte
      eBLKSIZE_1 = 1,
      // 2 bytes
      eBLKSIZE_2 = 2,
      // 3 bytes
      eBLKSIZE_3 = 3,
      // 4 bytes
      eBLKSIZE_4 = 4,
      // 511 bytes
      eBLKSIZE_511 = 511,
      // 512 bytes
      eBLKSIZE_512 = 512,
      // 2048 bytes
      eBLKSIZE_2048 = 2048,
      // 4096 bytes
      eBLKSIZE_4096 = 4096,
    };

    enum class eBLKCNT : std::uint32_t {
      // Stop count
      eBLKCNT_0 = 0,
      // 1 block
      eBLKCNT_1 = 1,
      // 2 blocks
      eBLKCNT_2 = 2,
      // 65535 blocks
      eBLKCNT_65535 = 65535,
    };

    // Transfer block size
    using BLKSIZE = ftl::mmio::Field<13, 0, eBLKSIZE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Blocks count for current transfer
    using BLKCNT = ftl::mmio::Field<16, 16, eBLKCNT, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BlkAttFields

  struct BLK_ATT : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename BlkAttFields::BLKSIZE,
      ftl::mmio::Reserved<3, 13>,
      typename BlkAttFields::BLKCNT> {
    using eBLKSIZE = typename BlkAttFields::eBLKSIZE;
    using eBLKCNT = typename BlkAttFields::eBLKCNT;
    using BLKSIZE = typename BlkAttFields::BLKSIZE;
    using BLKCNT = typename BlkAttFields::BLKCNT;
  };

  // Command Argument
  struct CmdArgFields {
    // Command argument
    using CMDARG = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmdArgFields

  struct CMD_ARG : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CmdArgFields::CMDARG> {
    using CMDARG = typename CmdArgFields::CMDARG;
  };

  // Command Transfer Type
  struct CmdXfrTypFields {
    enum class eRSPTYP : std::uint32_t {
      // No response
      eRSPTYP_0 = 0,
      // Response length 136
      eRSPTYP_1 = 1,
      // Response length 48
      eRSPTYP_2 = 2,
      // Response length 48, check busy after response
      eRSPTYP_3 = 3,
    };

    enum class eCCCEN : std::uint32_t {
      // Disables command CRC check
      eCCCEN_0 = 0,
      // Enables command CRC check
      eCCCEN_1 = 1,
    };

    enum class eCICEN : std::uint32_t {
      // Disable command index check
      eCICEN_0 = 0,
      // Enables command index check
      eCICEN_1 = 1,
    };

    enum class eDPSEL : std::uint32_t {
      // No data present
      eDPSEL_0 = 0,
      // Data present
      eDPSEL_1 = 1,
    };

    enum class eCMDTYP : std::uint32_t {
      // Normal other commands
      eCMDTYP_0 = 0,
      // Suspend CMD52 for writing bus suspend in CCCR
      eCMDTYP_1 = 1,
      // Resume CMD52 for writing function select in CCCR
      eCMDTYP_2 = 2,
      // Abort CMD12, CMD52 for writing I/O Abort in CCCR
      eCMDTYP_3 = 3,
    };

    // Response type select
    using RSPTYP = ftl::mmio::Field<2, 16, eRSPTYP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command CRC check enable
    using CCCEN = ftl::mmio::Field<1, 19, eCCCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command index check enable
    using CICEN = ftl::mmio::Field<1, 20, eCICEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data present select
    using DPSEL = ftl::mmio::Field<1, 21, eDPSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command type
    using CMDTYP = ftl::mmio::Field<2, 22, eCMDTYP, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command index
    using CMDINX = ftl::mmio::Field<6, 24, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CmdXfrTypFields

  struct CMD_XFR_TYP : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<16, 0>,
      typename CmdXfrTypFields::RSPTYP,
      ftl::mmio::Reserved<1, 18>,
      typename CmdXfrTypFields::CCCEN,
      typename CmdXfrTypFields::CICEN,
      typename CmdXfrTypFields::DPSEL,
      typename CmdXfrTypFields::CMDTYP,
      typename CmdXfrTypFields::CMDINX,
      ftl::mmio::Reserved<2, 30>> {
    using eRSPTYP = typename CmdXfrTypFields::eRSPTYP;
    using eCCCEN = typename CmdXfrTypFields::eCCCEN;
    using eCICEN = typename CmdXfrTypFields::eCICEN;
    using eDPSEL = typename CmdXfrTypFields::eDPSEL;
    using eCMDTYP = typename CmdXfrTypFields::eCMDTYP;
    using RSPTYP = typename CmdXfrTypFields::RSPTYP;
    using CCCEN = typename CmdXfrTypFields::CCCEN;
    using CICEN = typename CmdXfrTypFields::CICEN;
    using DPSEL = typename CmdXfrTypFields::DPSEL;
    using CMDTYP = typename CmdXfrTypFields::CMDTYP;
    using CMDINX = typename CmdXfrTypFields::CMDINX;
  };

  // Command Response0
  struct CmdRsp0Fields {
    // Command response 0
    using CMDRSP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmdRsp0Fields

  struct CMD_RSP0 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmdRsp0Fields::CMDRSP0> {
    using CMDRSP0 = typename CmdRsp0Fields::CMDRSP0;
  };

  // Command Response1
  struct CmdRsp1Fields {
    // Command response 1
    using CMDRSP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmdRsp1Fields

  struct CMD_RSP1 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmdRsp1Fields::CMDRSP1> {
    using CMDRSP1 = typename CmdRsp1Fields::CMDRSP1;
  };

  // Command Response2
  struct CmdRsp2Fields {
    // Command response 2
    using CMDRSP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmdRsp2Fields

  struct CMD_RSP2 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmdRsp2Fields::CMDRSP2> {
    using CMDRSP2 = typename CmdRsp2Fields::CMDRSP2;
  };

  // Command Response3
  struct CmdRsp3Fields {
    // Command response 3
    using CMDRSP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CmdRsp3Fields

  struct CMD_RSP3 : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CmdRsp3Fields::CMDRSP3> {
    using CMDRSP3 = typename CmdRsp3Fields::CMDRSP3;
  };

  // Data Buffer Access Port
  struct DataBuffAccPortFields {
    // Data content
    using DATCONT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DataBuffAccPortFields

  struct DATA_BUFF_ACC_PORT : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DataBuffAccPortFields::DATCONT> {
    using DATCONT = typename DataBuffAccPortFields::DATCONT;
  };

  // Present State
  struct PresStateFields {
    enum class eCIHB : std::uint32_t {
      // Can issue command using only CMD line
      eCIHB_0 = 0,
      // Cannot issue command
      eCIHB_1 = 1,
    };

    enum class eCDIHB : std::uint32_t {
      // Can issue command that uses the DATA line
      eCDIHB_0 = 0,
      // Cannot issue command that uses the DATA line
      eCDIHB_1 = 1,
    };

    enum class eDLA : std::uint32_t {
      // DATA line inactive
      eDLA_0 = 0,
      // DATA line active
      eDLA_1 = 1,
    };

    enum class eSDSTB : std::uint32_t {
      // Clock is changing frequency and not stable.
      eSDSTB_0 = 0,
      // Clock is stable.
      eSDSTB_1 = 1,
    };

    enum class eIPGOFF : std::uint32_t {
      // Peripheral clock is active.
      eIPGOFF_0 = 0,
      // Peripheral clock is gated off.
      eIPGOFF_1 = 1,
    };

    enum class eHCKOFF : std::uint32_t {
      // HCLK is active.
      eHCKOFF_0 = 0,
      // HCLK is gated off.
      eHCKOFF_1 = 1,
    };

    enum class ePEROFF : std::uint32_t {
      // IPG_PERCLK is active.
      ePEROFF_0 = 0,
      // IPG_PERCLK is gated off.
      ePEROFF_1 = 1,
    };

    enum class eSDOFF : std::uint32_t {
      // SD clock is active.
      eSDOFF_0 = 0,
      // SD clock is gated off.
      eSDOFF_1 = 1,
    };

    enum class eWTA : std::uint32_t {
      // No valid data
      eWTA_0 = 0,
      // Transferring data
      eWTA_1 = 1,
    };

    enum class eRTA : std::uint32_t {
      // No valid data
      eRTA_0 = 0,
      // Transferring data
      eRTA_1 = 1,
    };

    enum class eBWEN : std::uint32_t {
      // Write disable
      eBWEN_0 = 0,
      // Write enable
      eBWEN_1 = 1,
    };

    enum class eBREN : std::uint32_t {
      // Read disable
      eBREN_0 = 0,
      // Read enable
      eBREN_1 = 1,
    };

    enum class eRTR : std::uint32_t {
      // Fixed or well tuned sampling clock
      eRTR_0 = 0,
      // Sampling clock needs re-tuning
      eRTR_1 = 1,
    };

    enum class eTSCD : std::uint32_t {
      // Delay cell select change is not finished.
      eTSCD_0 = 0,
      // Delay cell select change is finished.
      eTSCD_1 = 1,
    };

    enum class eCINST : std::uint32_t {
      // Power on reset or no card
      eCINST_0 = 0,
      // Card inserted
      eCINST_1 = 1,
    };

    enum class eCDPL : std::uint32_t {
      // No card present (CD_B = 1)
      eCDPL_0 = 0,
      // Card present (CD_B = 0)
      eCDPL_1 = 1,
    };

    enum class eWPSPL : std::uint32_t {
      // Write protected (WP = 1)
      eWPSPL_0 = 0,
      // Write enabled (WP = 0)
      eWPSPL_1 = 1,
    };

    enum class eDLSL : std::uint32_t {
      // Data 0 line signal level
      eDATA0 = 0,
      // Data 1 line signal level
      eDATA1 = 1,
      // Data 2 line signal level
      eDATA2 = 2,
      // Data 3 line signal level
      eDATA3 = 3,
      // Data 4 line signal level
      eDATA4 = 4,
      // Data 5 line signal level
      eDATA5 = 5,
      // Data 6 line signal level
      eDATA6 = 6,
      // Data 7 line signal level
      eDATA7 = 7,
    };

    // Command inhibit (CMD)
    using CIHB = ftl::mmio::Field<1, 0, eCIHB, ftl::mmio::RO, ftl::mmio::Normal>;
    // Command Inhibit Data (DATA)
    using CDIHB = ftl::mmio::Field<1, 1, eCDIHB, ftl::mmio::RO, ftl::mmio::Normal>;
    // Data line active
    using DLA = ftl::mmio::Field<1, 2, eDLA, ftl::mmio::RO, ftl::mmio::Normal>;
    // SD clock stable
    using SDSTB = ftl::mmio::Field<1, 3, eSDSTB, ftl::mmio::RO, ftl::mmio::Normal>;
    // Peripheral clock gated off internally
    using IPGOFF = ftl::mmio::Field<1, 4, eIPGOFF, ftl::mmio::RO, ftl::mmio::Normal>;
    // HCLK gated off internally
    using HCKOFF = ftl::mmio::Field<1, 5, eHCKOFF, ftl::mmio::RO, ftl::mmio::Normal>;
    // IPG_PERCLK gated off internally
    using PEROFF = ftl::mmio::Field<1, 6, ePEROFF, ftl::mmio::RO, ftl::mmio::Normal>;
    // SD clock gated off internally
    using SDOFF = ftl::mmio::Field<1, 7, eSDOFF, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write transfer active
    using WTA = ftl::mmio::Field<1, 8, eWTA, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read transfer active
    using RTA = ftl::mmio::Field<1, 9, eRTA, ftl::mmio::RO, ftl::mmio::Normal>;
    // Buffer write enable
    using BWEN = ftl::mmio::Field<1, 10, eBWEN, ftl::mmio::RO, ftl::mmio::Normal>;
    // Buffer read enable
    using BREN = ftl::mmio::Field<1, 11, eBREN, ftl::mmio::RO, ftl::mmio::Normal>;
    // Re-Tuning Request (only for SD3.0 SDR104 mode,and EMMC HS200 mode)
    using RTR = ftl::mmio::Field<1, 12, eRTR, ftl::mmio::RO, ftl::mmio::Normal>;
    // Tap select change done
    using TSCD = ftl::mmio::Field<1, 15, eTSCD, ftl::mmio::RO, ftl::mmio::Normal>;
    // Card inserted
    using CINST = ftl::mmio::Field<1, 16, eCINST, ftl::mmio::RO, ftl::mmio::Normal>;
    // Card detect pin level
    using CDPL = ftl::mmio::Field<1, 18, eCDPL, ftl::mmio::RO, ftl::mmio::Normal>;
    // Write protect switch pin level
    using WPSPL = ftl::mmio::Field<1, 19, eWPSPL, ftl::mmio::RO, ftl::mmio::Normal>;
    // CMD line signal level
    using CLSL = ftl::mmio::Field<1, 23, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // DATA[7:0] line signal level
    using DLSL = ftl::mmio::Field<8, 24, eDLSL, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct PresStateFields

  struct PRES_STATE : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00008080u,
      ftl::mmio::RO,
      typename PresStateFields::CIHB,
      typename PresStateFields::CDIHB,
      typename PresStateFields::DLA,
      typename PresStateFields::SDSTB,
      typename PresStateFields::IPGOFF,
      typename PresStateFields::HCKOFF,
      typename PresStateFields::PEROFF,
      typename PresStateFields::SDOFF,
      typename PresStateFields::WTA,
      typename PresStateFields::RTA,
      typename PresStateFields::BWEN,
      typename PresStateFields::BREN,
      typename PresStateFields::RTR,
      ftl::mmio::Reserved<2, 13>,
      typename PresStateFields::TSCD,
      typename PresStateFields::CINST,
      ftl::mmio::Reserved<1, 17>,
      typename PresStateFields::CDPL,
      typename PresStateFields::WPSPL,
      ftl::mmio::Reserved<3, 20>,
      typename PresStateFields::CLSL,
      typename PresStateFields::DLSL> {
    using eCIHB = typename PresStateFields::eCIHB;
    using eCDIHB = typename PresStateFields::eCDIHB;
    using eDLA = typename PresStateFields::eDLA;
    using eSDSTB = typename PresStateFields::eSDSTB;
    using eIPGOFF = typename PresStateFields::eIPGOFF;
    using eHCKOFF = typename PresStateFields::eHCKOFF;
    using ePEROFF = typename PresStateFields::ePEROFF;
    using eSDOFF = typename PresStateFields::eSDOFF;
    using eWTA = typename PresStateFields::eWTA;
    using eRTA = typename PresStateFields::eRTA;
    using eBWEN = typename PresStateFields::eBWEN;
    using eBREN = typename PresStateFields::eBREN;
    using eRTR = typename PresStateFields::eRTR;
    using eTSCD = typename PresStateFields::eTSCD;
    using eCINST = typename PresStateFields::eCINST;
    using eCDPL = typename PresStateFields::eCDPL;
    using eWPSPL = typename PresStateFields::eWPSPL;
    using eDLSL = typename PresStateFields::eDLSL;
    using CIHB = typename PresStateFields::CIHB;
    using CDIHB = typename PresStateFields::CDIHB;
    using DLA = typename PresStateFields::DLA;
    using SDSTB = typename PresStateFields::SDSTB;
    using IPGOFF = typename PresStateFields::IPGOFF;
    using HCKOFF = typename PresStateFields::HCKOFF;
    using PEROFF = typename PresStateFields::PEROFF;
    using SDOFF = typename PresStateFields::SDOFF;
    using WTA = typename PresStateFields::WTA;
    using RTA = typename PresStateFields::RTA;
    using BWEN = typename PresStateFields::BWEN;
    using BREN = typename PresStateFields::BREN;
    using RTR = typename PresStateFields::RTR;
    using TSCD = typename PresStateFields::TSCD;
    using CINST = typename PresStateFields::CINST;
    using CDPL = typename PresStateFields::CDPL;
    using WPSPL = typename PresStateFields::WPSPL;
    using CLSL = typename PresStateFields::CLSL;
    using DLSL = typename PresStateFields::DLSL;
  };

  // Protocol Control
  struct ProtCtrlFields {
    enum class eDTW : std::uint32_t {
      // 1-bit mode
      eDTW_0 = 0,
      // 4-bit mode
      eDTW_1 = 1,
      // 8-bit mode
      eDTW_2 = 2,
    };

    enum class eD3CD : std::uint32_t {
      // DATA3 does not monitor card insertion
      eD3CD_0 = 0,
      // DATA3 as card detection pin
      eD3CD_1 = 1,
    };

    enum class eEMODE : std::uint32_t {
      // Big endian mode
      eEMODE_0 = 0,
      // Half word big endian mode
      eEMODE_1 = 1,
      // Little endian mode
      eEMODE_2 = 2,
    };

    enum class eCDTL : std::uint32_t {
      // Card detect test level is 0, no card inserted
      eCDTL_0 = 0,
      // Card detect test level is 1, card inserted
      eCDTL_1 = 1,
    };

    enum class eCDSS : std::uint32_t {
      // Card detection level is selected (for normal purpose).
      eCDSS_0 = 0,
      // Card detection test level is selected (for test purpose).
      eCDSS_1 = 1,
    };

    enum class eDMASEL : std::uint32_t {
      // No DMA or simple DMA is selected.
      eDMASEL_0 = 0,
      // ADMA1 is selected.
      eDMASEL_1 = 1,
      // ADMA2 is selected.
      eDMASEL_2 = 2,
    };

    enum class eSABGREQ : std::uint32_t {
      // Transfer
      eSABGREQ_0 = 0,
      // Stop
      eSABGREQ_1 = 1,
    };

    enum class eCREQ : std::uint32_t {
      // No effect
      eCREQ_0 = 0,
      // Restart
      eCREQ_1 = 1,
    };

    enum class eRWCTL : std::uint32_t {
      // Disables read wait control and stop SD clock at block gap when SABGREQ field is set
      eRWCTL_0 = 0,
      // Enables read wait control and assert read wait without stopping SD clock at block gap when SABGREQ field is set
      eRWCTL_1 = 1,
    };

    enum class eIABG : std::uint32_t {
      // Disables interrupt at block gap
      eIABG_0 = 0,
      // Enables interrupt at block gap
      eIABG_1 = 1,
    };

    enum class eWECINT : std::uint32_t {
      // Disables wakeup event enable on card interrupt
      eWECINT_0 = 0,
      // Enables wakeup event enable on card interrupt
      eWECINT_1 = 1,
    };

    enum class eWECINS : std::uint32_t {
      // Disable wakeup event enable on SD card insertion
      eWECINS_0 = 0,
      // Enable wakeup event enable on SD card insertion
      eWECINS_1 = 1,
    };

    enum class eWECRM : std::uint32_t {
      // Disables wakeup event enable on SD card removal
      eWECRM_0 = 0,
      // Enables wakeup event enable on SD card removal
      eWECRM_1 = 1,
    };

    enum class eNON_EXACT_BLK_RD : std::uint32_t {
      // The block read is exact block read. Host driver does not need to issue abort command to terminate this multi-block read.
      eNON_EXACT_BLK_RD_0 = 0,
      // The block read is non-exact block read. Host driver needs to issue abort command to terminate this multi-block read.
      eNON_EXACT_BLK_RD_1 = 1,
    };

    // Data transfer width
    using DTW = ftl::mmio::Field<2, 1, eDTW, ftl::mmio::RW, ftl::mmio::Normal>;
    // DATA3 as card detection pin
    using D3CD = ftl::mmio::Field<1, 3, eD3CD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Endian mode
    using EMODE = ftl::mmio::Field<2, 4, eEMODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card detect test level
    using CDTL = ftl::mmio::Field<1, 6, eCDTL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card detect signal selection
    using CDSS = ftl::mmio::Field<1, 7, eCDSS, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA select
    using DMASEL = ftl::mmio::Field<2, 8, eDMASEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Stop at block gap request
    using SABGREQ = ftl::mmio::Field<1, 16, eSABGREQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Continue request
    using CREQ = ftl::mmio::Field<1, 17, eCREQ, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read wait control
    using RWCTL = ftl::mmio::Field<1, 18, eRWCTL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Interrupt at block gap
    using IABG = ftl::mmio::Field<1, 19, eIABG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read performed number 8 clock
    using RD_DONE_NO_8CLK = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wakeup event enable on card interrupt
    using WECINT = ftl::mmio::Field<1, 24, eWECINT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wakeup event enable on SD card insertion
    using WECINS = ftl::mmio::Field<1, 25, eWECINS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Wakeup event enable on SD card removal
    using WECRM = ftl::mmio::Field<1, 26, eWECRM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Non-exact block read
    using NON_EXACT_BLK_RD = ftl::mmio::Field<1, 30, eNON_EXACT_BLK_RD, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ProtCtrlFields

  struct PROT_CTRL : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x08800020u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename ProtCtrlFields::DTW,
      typename ProtCtrlFields::D3CD,
      typename ProtCtrlFields::EMODE,
      typename ProtCtrlFields::CDTL,
      typename ProtCtrlFields::CDSS,
      typename ProtCtrlFields::DMASEL,
      ftl::mmio::Reserved<6, 10>,
      typename ProtCtrlFields::SABGREQ,
      typename ProtCtrlFields::CREQ,
      typename ProtCtrlFields::RWCTL,
      typename ProtCtrlFields::IABG,
      typename ProtCtrlFields::RD_DONE_NO_8CLK,
      ftl::mmio::Reserved<3, 21>,
      typename ProtCtrlFields::WECINT,
      typename ProtCtrlFields::WECINS,
      typename ProtCtrlFields::WECRM,
      ftl::mmio::Reserved<3, 27>,
      typename ProtCtrlFields::NON_EXACT_BLK_RD,
      ftl::mmio::Reserved<1, 31>> {
    using eDTW = typename ProtCtrlFields::eDTW;
    using eD3CD = typename ProtCtrlFields::eD3CD;
    using eEMODE = typename ProtCtrlFields::eEMODE;
    using eCDTL = typename ProtCtrlFields::eCDTL;
    using eCDSS = typename ProtCtrlFields::eCDSS;
    using eDMASEL = typename ProtCtrlFields::eDMASEL;
    using eSABGREQ = typename ProtCtrlFields::eSABGREQ;
    using eCREQ = typename ProtCtrlFields::eCREQ;
    using eRWCTL = typename ProtCtrlFields::eRWCTL;
    using eIABG = typename ProtCtrlFields::eIABG;
    using eWECINT = typename ProtCtrlFields::eWECINT;
    using eWECINS = typename ProtCtrlFields::eWECINS;
    using eWECRM = typename ProtCtrlFields::eWECRM;
    using eNON_EXACT_BLK_RD = typename ProtCtrlFields::eNON_EXACT_BLK_RD;
    using DTW = typename ProtCtrlFields::DTW;
    using D3CD = typename ProtCtrlFields::D3CD;
    using EMODE = typename ProtCtrlFields::EMODE;
    using CDTL = typename ProtCtrlFields::CDTL;
    using CDSS = typename ProtCtrlFields::CDSS;
    using DMASEL = typename ProtCtrlFields::DMASEL;
    using SABGREQ = typename ProtCtrlFields::SABGREQ;
    using CREQ = typename ProtCtrlFields::CREQ;
    using RWCTL = typename ProtCtrlFields::RWCTL;
    using IABG = typename ProtCtrlFields::IABG;
    using RD_DONE_NO_8CLK = typename ProtCtrlFields::RD_DONE_NO_8CLK;
    using WECINT = typename ProtCtrlFields::WECINT;
    using WECINS = typename ProtCtrlFields::WECINS;
    using WECRM = typename ProtCtrlFields::WECRM;
    using NON_EXACT_BLK_RD = typename ProtCtrlFields::NON_EXACT_BLK_RD;
  };

  // System Control
  struct SysCtrlFields {
    enum class eDVS : std::uint32_t {
      // Divide-by-1
      eDVS_0 = 0,
      // Divide-by-2
      eDVS_1 = 1,
      // Divide-by-15
      eDVS_14 = 14,
      // Divide-by-16
      eDVS_15 = 15,
    };

    enum class eDTOCV : std::uint32_t {
      // SDCLK x 2 14
      eDTOCV_0 = 0,
      // SDCLK x 2 15
      eDTOCV_1 = 1,
      // SDCLK x 2 16
      eDTOCV_2 = 2,
      // SDCLK x 2 17
      eDTOCV_3 = 3,
      // SDCLK x 2 18
      eDTOCV_4 = 4,
      // SDCLK x 2 19
      eDTOCV_5 = 5,
      // SDCLK x 2 20
      eDTOCV_6 = 6,
      // SDCLK x 2 21
      eDTOCV_7 = 7,
      // SDCLK x 2 22
      eDTOCV_8 = 8,
      // SDCLK x 2 23
      eDTOCV_9 = 9,
      // SDCLK x 2 24
      eDTOCV_10 = 10,
      // SDCLK x 2 25
      eDTOCV_11 = 11,
      // SDCLK x 2 26
      eDTOCV_12 = 12,
      // SDCLK x 2 27
      eDTOCV_13 = 13,
      // SDCLK x 2 28
      eDTOCV_14 = 14,
      // SDCLK x 2 29
      eDTOCV_15 = 15,
    };

    enum class eRSTA : std::uint32_t {
      // No reset
      eRSTA_0 = 0,
      // Reset
      eRSTA_1 = 1,
    };

    enum class eRSTC : std::uint32_t {
      // No reset
      eRSTC_0 = 0,
      // Reset
      eRSTC_1 = 1,
    };

    enum class eRSTD : std::uint32_t {
      // No reset
      eRSTD_0 = 0,
      // Reset
      eRSTD_1 = 1,
    };

    // Divisor
    using DVS = ftl::mmio::Field<4, 4, eDVS, ftl::mmio::RW, ftl::mmio::Normal>;
    // SDCLK frequency select
    using SDCLKFS = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data timeout counter value
    using DTOCV = ftl::mmio::Field<4, 16, eDTOCV, ftl::mmio::RW, ftl::mmio::Normal>;
    // Hardware reset
    using IPP_RST_N = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software reset for all
    using RSTA = ftl::mmio::Field<1, 24, eRSTA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software reset for CMD line
    using RSTC = ftl::mmio::Field<1, 25, eRSTC, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software reset for data line
    using RSTD = ftl::mmio::Field<1, 26, eRSTD, ftl::mmio::RW, ftl::mmio::Normal>;
    // Initialization active
    using INITA = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset tuning
    using RSTT = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SysCtrlFields

  struct SYS_CTRL : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x0080800Fu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      typename SysCtrlFields::DVS,
      typename SysCtrlFields::SDCLKFS,
      typename SysCtrlFields::DTOCV,
      ftl::mmio::Reserved<3, 20>,
      typename SysCtrlFields::IPP_RST_N,
      typename SysCtrlFields::RSTA,
      typename SysCtrlFields::RSTC,
      typename SysCtrlFields::RSTD,
      typename SysCtrlFields::INITA,
      typename SysCtrlFields::RSTT,
      ftl::mmio::Reserved<3, 29>> {
    using eDVS = typename SysCtrlFields::eDVS;
    using eDTOCV = typename SysCtrlFields::eDTOCV;
    using eRSTA = typename SysCtrlFields::eRSTA;
    using eRSTC = typename SysCtrlFields::eRSTC;
    using eRSTD = typename SysCtrlFields::eRSTD;
    using DVS = typename SysCtrlFields::DVS;
    using SDCLKFS = typename SysCtrlFields::SDCLKFS;
    using DTOCV = typename SysCtrlFields::DTOCV;
    using IPP_RST_N = typename SysCtrlFields::IPP_RST_N;
    using RSTA = typename SysCtrlFields::RSTA;
    using RSTC = typename SysCtrlFields::RSTC;
    using RSTD = typename SysCtrlFields::RSTD;
    using INITA = typename SysCtrlFields::INITA;
    using RSTT = typename SysCtrlFields::RSTT;
  };

  // Interrupt Status
  struct IntStatusFields {
    enum class eCC : std::uint32_t {
      // Command not complete
      eCC_0 = 0,
      // Command complete
      eCC_1 = 1,
    };

    enum class eTC : std::uint32_t {
      // Transfer does not complete
      eTC_0 = 0,
      // Transfer complete
      eTC_1 = 1,
    };

    enum class eBGE : std::uint32_t {
      // No block gap event
      eBGE_0 = 0,
      // Transaction stopped at block gap
      eBGE_1 = 1,
    };

    enum class eDINT : std::uint32_t {
      // No DMA interrupt
      eDINT_0 = 0,
      // DMA interrupt is generated.
      eDINT_1 = 1,
    };

    enum class eBWR : std::uint32_t {
      // Not ready to write buffer
      eBWR_0 = 0,
      // Ready to write buffer
      eBWR_1 = 1,
    };

    enum class eBRR : std::uint32_t {
      // Not ready to read buffer
      eBRR_0 = 0,
      // Ready to read buffer
      eBRR_1 = 1,
    };

    enum class eCINS : std::uint32_t {
      // Card state unstable or removed
      eCINS_0 = 0,
      // Card inserted
      eCINS_1 = 1,
    };

    enum class eCRM : std::uint32_t {
      // Card state unstable or inserted
      eCRM_0 = 0,
      // Card removed
      eCRM_1 = 1,
    };

    enum class eCINT : std::uint32_t {
      // No card interrupt
      eCINT_0 = 0,
      // Generate card interrupt
      eCINT_1 = 1,
    };

    enum class eRTE : std::uint32_t {
      // Re-tuning is not required.
      eRTE_0 = 0,
      // Re-tuning should be performed.
      eRTE_1 = 1,
    };

    enum class eCTOE : std::uint32_t {
      // No error
      eCTOE_0 = 0,
      // Time out
      eCTOE_1 = 1,
    };

    enum class eCCE : std::uint32_t {
      // No error
      eCCE_0 = 0,
      // CRC error generated
      eCCE_1 = 1,
    };

    enum class eCEBE : std::uint32_t {
      // No error
      eCEBE_0 = 0,
      // End bit error generated
      eCEBE_1 = 1,
    };

    enum class eCIE : std::uint32_t {
      // No error
      eCIE_0 = 0,
      // Error
      eCIE_1 = 1,
    };

    enum class eDTOE : std::uint32_t {
      // No error
      eDTOE_0 = 0,
      // Time out
      eDTOE_1 = 1,
    };

    enum class eDCE : std::uint32_t {
      // No error
      eDCE_0 = 0,
      // Error
      eDCE_1 = 1,
    };

    enum class eDEBE : std::uint32_t {
      // No error
      eDEBE_0 = 0,
      // Error
      eDEBE_1 = 1,
    };

    enum class eAC12E : std::uint32_t {
      // No error
      eAC12E_0 = 0,
      // Error
      eAC12E_1 = 1,
    };

    enum class eDMAE : std::uint32_t {
      // No error
      eDMAE_0 = 0,
      // Error
      eDMAE_1 = 1,
    };

    // Command complete
    using CC = ftl::mmio::Field<1, 0, eCC, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Transfer complete
    using TC = ftl::mmio::Field<1, 1, eTC, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Block gap event
    using BGE = ftl::mmio::Field<1, 2, eBGE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DMA interrupt
    using DINT = ftl::mmio::Field<1, 3, eDINT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Buffer write ready
    using BWR = ftl::mmio::Field<1, 4, eBWR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Buffer read ready
    using BRR = ftl::mmio::Field<1, 5, eBRR, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Card insertion
    using CINS = ftl::mmio::Field<1, 6, eCINS, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Card removal
    using CRM = ftl::mmio::Field<1, 7, eCRM, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Card interrupt
    using CINT = ftl::mmio::Field<1, 8, eCINT, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Re-tuning event: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
    using RTE = ftl::mmio::Field<1, 12, eRTE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Tuning pass:(only for SD3.0 SDR104 mode and EMMC HS200 mode)
    using TP = ftl::mmio::Field<1, 14, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Command timeout error
    using CTOE = ftl::mmio::Field<1, 16, eCTOE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Command CRC error
    using CCE = ftl::mmio::Field<1, 17, eCCE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Command end bit error
    using CEBE = ftl::mmio::Field<1, 18, eCEBE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Command index error
    using CIE = ftl::mmio::Field<1, 19, eCIE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Data timeout error
    using DTOE = ftl::mmio::Field<1, 20, eDTOE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Data CRC error
    using DCE = ftl::mmio::Field<1, 21, eDCE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Data end bit error
    using DEBE = ftl::mmio::Field<1, 22, eDEBE, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Auto CMD12 error
    using AC12E = ftl::mmio::Field<1, 24, eAC12E, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Tuning error: (only for SD3.0 SDR104 mode and EMMC HS200 mode)
    using TNE = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // DMA error
    using DMAE = ftl::mmio::Field<1, 28, eDMAE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct IntStatusFields

  struct INT_STATUS : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IntStatusFields::CC,
      typename IntStatusFields::TC,
      typename IntStatusFields::BGE,
      typename IntStatusFields::DINT,
      typename IntStatusFields::BWR,
      typename IntStatusFields::BRR,
      typename IntStatusFields::CINS,
      typename IntStatusFields::CRM,
      typename IntStatusFields::CINT,
      ftl::mmio::Reserved<3, 9>,
      typename IntStatusFields::RTE,
      ftl::mmio::Reserved<1, 13>,
      typename IntStatusFields::TP,
      ftl::mmio::Reserved<1, 15>,
      typename IntStatusFields::CTOE,
      typename IntStatusFields::CCE,
      typename IntStatusFields::CEBE,
      typename IntStatusFields::CIE,
      typename IntStatusFields::DTOE,
      typename IntStatusFields::DCE,
      typename IntStatusFields::DEBE,
      ftl::mmio::Reserved<1, 23>,
      typename IntStatusFields::AC12E,
      ftl::mmio::Reserved<1, 25>,
      typename IntStatusFields::TNE,
      ftl::mmio::Reserved<1, 27>,
      typename IntStatusFields::DMAE,
      ftl::mmio::Reserved<3, 29>> {
    using eCC = typename IntStatusFields::eCC;
    using eTC = typename IntStatusFields::eTC;
    using eBGE = typename IntStatusFields::eBGE;
    using eDINT = typename IntStatusFields::eDINT;
    using eBWR = typename IntStatusFields::eBWR;
    using eBRR = typename IntStatusFields::eBRR;
    using eCINS = typename IntStatusFields::eCINS;
    using eCRM = typename IntStatusFields::eCRM;
    using eCINT = typename IntStatusFields::eCINT;
    using eRTE = typename IntStatusFields::eRTE;
    using eCTOE = typename IntStatusFields::eCTOE;
    using eCCE = typename IntStatusFields::eCCE;
    using eCEBE = typename IntStatusFields::eCEBE;
    using eCIE = typename IntStatusFields::eCIE;
    using eDTOE = typename IntStatusFields::eDTOE;
    using eDCE = typename IntStatusFields::eDCE;
    using eDEBE = typename IntStatusFields::eDEBE;
    using eAC12E = typename IntStatusFields::eAC12E;
    using eDMAE = typename IntStatusFields::eDMAE;
    using CC = typename IntStatusFields::CC;
    using TC = typename IntStatusFields::TC;
    using BGE = typename IntStatusFields::BGE;
    using DINT = typename IntStatusFields::DINT;
    using BWR = typename IntStatusFields::BWR;
    using BRR = typename IntStatusFields::BRR;
    using CINS = typename IntStatusFields::CINS;
    using CRM = typename IntStatusFields::CRM;
    using CINT = typename IntStatusFields::CINT;
    using RTE = typename IntStatusFields::RTE;
    using TP = typename IntStatusFields::TP;
    using CTOE = typename IntStatusFields::CTOE;
    using CCE = typename IntStatusFields::CCE;
    using CEBE = typename IntStatusFields::CEBE;
    using CIE = typename IntStatusFields::CIE;
    using DTOE = typename IntStatusFields::DTOE;
    using DCE = typename IntStatusFields::DCE;
    using DEBE = typename IntStatusFields::DEBE;
    using AC12E = typename IntStatusFields::AC12E;
    using TNE = typename IntStatusFields::TNE;
    using DMAE = typename IntStatusFields::DMAE;
  };

  // Interrupt Status Enable
  struct IntStatusEnFields {
    enum class eCCSEN : std::uint32_t {
      // Masked
      eCCSEN_0 = 0,
      // Enabled
      eCCSEN_1 = 1,
    };

    enum class eTCSEN : std::uint32_t {
      // Masked
      eTCSEN_0 = 0,
      // Enabled
      eTCSEN_1 = 1,
    };

    enum class eBGESEN : std::uint32_t {
      // Masked
      eBGESEN_0 = 0,
      // Enabled
      eBGESEN_1 = 1,
    };

    enum class eDINTSEN : std::uint32_t {
      // Masked
      eDINTSEN_0 = 0,
      // Enabled
      eDINTSEN_1 = 1,
    };

    enum class eBWRSEN : std::uint32_t {
      // Masked
      eBWRSEN_0 = 0,
      // Enabled
      eBWRSEN_1 = 1,
    };

    enum class eBRRSEN : std::uint32_t {
      // Masked
      eBRRSEN_0 = 0,
      // Enabled
      eBRRSEN_1 = 1,
    };

    enum class eCINSSEN : std::uint32_t {
      // Masked
      eCINSSEN_0 = 0,
      // Enabled
      eCINSSEN_1 = 1,
    };

    enum class eCRMSEN : std::uint32_t {
      // Masked
      eCRMSEN_0 = 0,
      // Enabled
      eCRMSEN_1 = 1,
    };

    enum class eCINTSEN : std::uint32_t {
      // Masked
      eCINTSEN_0 = 0,
      // Enabled
      eCINTSEN_1 = 1,
    };

    enum class eRTESEN : std::uint32_t {
      // Masked
      eRTESEN_0 = 0,
      // Enabled
      eRTESEN_1 = 1,
    };

    enum class eTPSEN : std::uint32_t {
      // Masked
      eTPSEN_0 = 0,
      // Enabled
      eTPSEN_1 = 1,
    };

    enum class eCTOESEN : std::uint32_t {
      // Masked
      eCTOESEN_0 = 0,
      // Enabled
      eCTOESEN_1 = 1,
    };

    enum class eCCESEN : std::uint32_t {
      // Masked
      eCCESEN_0 = 0,
      // Enabled
      eCCESEN_1 = 1,
    };

    enum class eCEBESEN : std::uint32_t {
      // Masked
      eCEBESEN_0 = 0,
      // Enabled
      eCEBESEN_1 = 1,
    };

    enum class eCIESEN : std::uint32_t {
      // Masked
      eCIESEN_0 = 0,
      // Enabled
      eCIESEN_1 = 1,
    };

    enum class eDTOESEN : std::uint32_t {
      // Masked
      eDTOESEN_0 = 0,
      // Enabled
      eDTOESEN_1 = 1,
    };

    enum class eDCESEN : std::uint32_t {
      // Masked
      eDCESEN_0 = 0,
      // Enabled
      eDCESEN_1 = 1,
    };

    enum class eDEBESEN : std::uint32_t {
      // Masked
      eDEBESEN_0 = 0,
      // Enabled
      eDEBESEN_1 = 1,
    };

    enum class eAC12ESEN : std::uint32_t {
      // Masked
      eAC12ESEN_0 = 0,
      // Enabled
      eAC12ESEN_1 = 1,
    };

    enum class eTNESEN : std::uint32_t {
      // Masked
      eTNESEN_0 = 0,
      // Enabled
      eTNESEN_1 = 1,
    };

    enum class eDMAESEN : std::uint32_t {
      // Masked
      eDMAESEN_0 = 0,
      // Enabled
      eDMAESEN_1 = 1,
    };

    // Command complete status enable
    using CCSEN = ftl::mmio::Field<1, 0, eCCSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transfer complete status enable
    using TCSEN = ftl::mmio::Field<1, 1, eTCSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block gap event status enable
    using BGESEN = ftl::mmio::Field<1, 2, eBGESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA interrupt status enable
    using DINTSEN = ftl::mmio::Field<1, 3, eDINTSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer write ready status enable
    using BWRSEN = ftl::mmio::Field<1, 4, eBWRSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer read ready status enable
    using BRRSEN = ftl::mmio::Field<1, 5, eBRRSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card insertion status enable
    using CINSSEN = ftl::mmio::Field<1, 6, eCINSSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card removal status enable
    using CRMSEN = ftl::mmio::Field<1, 7, eCRMSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card interrupt status enable
    using CINTSEN = ftl::mmio::Field<1, 8, eCINTSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Re-tuning event status enable
    using RTESEN = ftl::mmio::Field<1, 12, eRTESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning pass status enable
    using TPSEN = ftl::mmio::Field<1, 14, eTPSEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command timeout error status enable
    using CTOESEN = ftl::mmio::Field<1, 16, eCTOESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command CRC error status enable
    using CCESEN = ftl::mmio::Field<1, 17, eCCESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command end bit error status enable
    using CEBESEN = ftl::mmio::Field<1, 18, eCEBESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command index error status enable
    using CIESEN = ftl::mmio::Field<1, 19, eCIESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data timeout error status enable
    using DTOESEN = ftl::mmio::Field<1, 20, eDTOESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data CRC error status enable
    using DCESEN = ftl::mmio::Field<1, 21, eDCESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data end bit error status enable
    using DEBESEN = ftl::mmio::Field<1, 22, eDEBESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto CMD12 error status enable
    using AC12ESEN = ftl::mmio::Field<1, 24, eAC12ESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning error status enable
    using TNESEN = ftl::mmio::Field<1, 26, eTNESEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA error status enable
    using DMAESEN = ftl::mmio::Field<1, 28, eDMAESEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IntStatusEnFields

  struct INT_STATUS_EN : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IntStatusEnFields::CCSEN,
      typename IntStatusEnFields::TCSEN,
      typename IntStatusEnFields::BGESEN,
      typename IntStatusEnFields::DINTSEN,
      typename IntStatusEnFields::BWRSEN,
      typename IntStatusEnFields::BRRSEN,
      typename IntStatusEnFields::CINSSEN,
      typename IntStatusEnFields::CRMSEN,
      typename IntStatusEnFields::CINTSEN,
      ftl::mmio::Reserved<3, 9>,
      typename IntStatusEnFields::RTESEN,
      ftl::mmio::Reserved<1, 13>,
      typename IntStatusEnFields::TPSEN,
      ftl::mmio::Reserved<1, 15>,
      typename IntStatusEnFields::CTOESEN,
      typename IntStatusEnFields::CCESEN,
      typename IntStatusEnFields::CEBESEN,
      typename IntStatusEnFields::CIESEN,
      typename IntStatusEnFields::DTOESEN,
      typename IntStatusEnFields::DCESEN,
      typename IntStatusEnFields::DEBESEN,
      ftl::mmio::Reserved<1, 23>,
      typename IntStatusEnFields::AC12ESEN,
      ftl::mmio::Reserved<1, 25>,
      typename IntStatusEnFields::TNESEN,
      ftl::mmio::Reserved<1, 27>,
      typename IntStatusEnFields::DMAESEN,
      ftl::mmio::Reserved<3, 29>> {
    using eCCSEN = typename IntStatusEnFields::eCCSEN;
    using eTCSEN = typename IntStatusEnFields::eTCSEN;
    using eBGESEN = typename IntStatusEnFields::eBGESEN;
    using eDINTSEN = typename IntStatusEnFields::eDINTSEN;
    using eBWRSEN = typename IntStatusEnFields::eBWRSEN;
    using eBRRSEN = typename IntStatusEnFields::eBRRSEN;
    using eCINSSEN = typename IntStatusEnFields::eCINSSEN;
    using eCRMSEN = typename IntStatusEnFields::eCRMSEN;
    using eCINTSEN = typename IntStatusEnFields::eCINTSEN;
    using eRTESEN = typename IntStatusEnFields::eRTESEN;
    using eTPSEN = typename IntStatusEnFields::eTPSEN;
    using eCTOESEN = typename IntStatusEnFields::eCTOESEN;
    using eCCESEN = typename IntStatusEnFields::eCCESEN;
    using eCEBESEN = typename IntStatusEnFields::eCEBESEN;
    using eCIESEN = typename IntStatusEnFields::eCIESEN;
    using eDTOESEN = typename IntStatusEnFields::eDTOESEN;
    using eDCESEN = typename IntStatusEnFields::eDCESEN;
    using eDEBESEN = typename IntStatusEnFields::eDEBESEN;
    using eAC12ESEN = typename IntStatusEnFields::eAC12ESEN;
    using eTNESEN = typename IntStatusEnFields::eTNESEN;
    using eDMAESEN = typename IntStatusEnFields::eDMAESEN;
    using CCSEN = typename IntStatusEnFields::CCSEN;
    using TCSEN = typename IntStatusEnFields::TCSEN;
    using BGESEN = typename IntStatusEnFields::BGESEN;
    using DINTSEN = typename IntStatusEnFields::DINTSEN;
    using BWRSEN = typename IntStatusEnFields::BWRSEN;
    using BRRSEN = typename IntStatusEnFields::BRRSEN;
    using CINSSEN = typename IntStatusEnFields::CINSSEN;
    using CRMSEN = typename IntStatusEnFields::CRMSEN;
    using CINTSEN = typename IntStatusEnFields::CINTSEN;
    using RTESEN = typename IntStatusEnFields::RTESEN;
    using TPSEN = typename IntStatusEnFields::TPSEN;
    using CTOESEN = typename IntStatusEnFields::CTOESEN;
    using CCESEN = typename IntStatusEnFields::CCESEN;
    using CEBESEN = typename IntStatusEnFields::CEBESEN;
    using CIESEN = typename IntStatusEnFields::CIESEN;
    using DTOESEN = typename IntStatusEnFields::DTOESEN;
    using DCESEN = typename IntStatusEnFields::DCESEN;
    using DEBESEN = typename IntStatusEnFields::DEBESEN;
    using AC12ESEN = typename IntStatusEnFields::AC12ESEN;
    using TNESEN = typename IntStatusEnFields::TNESEN;
    using DMAESEN = typename IntStatusEnFields::DMAESEN;
  };

  // Interrupt Signal Enable
  struct IntSignalEnFields {
    enum class eCCIEN : std::uint32_t {
      // Masked
      eCCIEN_0 = 0,
      // Enabled
      eCCIEN_1 = 1,
    };

    enum class eTCIEN : std::uint32_t {
      // Masked
      eTCIEN_0 = 0,
      // Enabled
      eTCIEN_1 = 1,
    };

    enum class eBGEIEN : std::uint32_t {
      // Masked
      eBGEIEN_0 = 0,
      // Enabled
      eBGEIEN_1 = 1,
    };

    enum class eDINTIEN : std::uint32_t {
      // Masked
      eDINTIEN_0 = 0,
      // Enabled
      eDINTIEN_1 = 1,
    };

    enum class eBWRIEN : std::uint32_t {
      // Masked
      eBWRIEN_0 = 0,
      // Enabled
      eBWRIEN_1 = 1,
    };

    enum class eBRRIEN : std::uint32_t {
      // Masked
      eBRRIEN_0 = 0,
      // Enabled
      eBRRIEN_1 = 1,
    };

    enum class eCINSIEN : std::uint32_t {
      // Masked
      eCINSIEN_0 = 0,
      // Enabled
      eCINSIEN_1 = 1,
    };

    enum class eCRMIEN : std::uint32_t {
      // Masked
      eCRMIEN_0 = 0,
      // Enabled
      eCRMIEN_1 = 1,
    };

    enum class eCINTIEN : std::uint32_t {
      // Masked
      eCINTIEN_0 = 0,
      // Enabled
      eCINTIEN_1 = 1,
    };

    enum class eRTEIEN : std::uint32_t {
      // Masked
      eRTEIEN_0 = 0,
      // Enabled
      eRTEIEN_1 = 1,
    };

    enum class eTPIEN : std::uint32_t {
      // Masked
      eTPIEN_0 = 0,
      // Enabled
      eTPIEN_1 = 1,
    };

    enum class eCTOEIEN : std::uint32_t {
      // Masked
      eCTOEIEN_0 = 0,
      // Enabled
      eCTOEIEN_1 = 1,
    };

    enum class eCCEIEN : std::uint32_t {
      // Masked
      eCCEIEN_0 = 0,
      // Enabled
      eCCEIEN_1 = 1,
    };

    enum class eCEBEIEN : std::uint32_t {
      // Masked
      eCEBEIEN_0 = 0,
      // Enabled
      eCEBEIEN_1 = 1,
    };

    enum class eCIEIEN : std::uint32_t {
      // Masked
      eCIEIEN_0 = 0,
      // Enabled
      eCIEIEN_1 = 1,
    };

    enum class eDTOEIEN : std::uint32_t {
      // Masked
      eDTOEIEN_0 = 0,
      // Enabled
      eDTOEIEN_1 = 1,
    };

    enum class eDCEIEN : std::uint32_t {
      // Masked
      eDCEIEN_0 = 0,
      // Enabled
      eDCEIEN_1 = 1,
    };

    enum class eDEBEIEN : std::uint32_t {
      // Masked
      eDEBEIEN_0 = 0,
      // Enabled
      eDEBEIEN_1 = 1,
    };

    enum class eAC12EIEN : std::uint32_t {
      // Masked
      eAC12EIEN_0 = 0,
      // Enabled
      eAC12EIEN_1 = 1,
    };

    enum class eTNEIEN : std::uint32_t {
      // Masked
      eTNEIEN_0 = 0,
      // Enabled
      eTNEIEN_1 = 1,
    };

    enum class eDMAEIEN : std::uint32_t {
      // Masked
      eDMAEIEN_0 = 0,
      // Enable
      eDMAEIEN_1 = 1,
    };

    // Command complete interrupt enable
    using CCIEN = ftl::mmio::Field<1, 0, eCCIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Transfer complete interrupt enable
    using TCIEN = ftl::mmio::Field<1, 1, eTCIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block gap event interrupt enable
    using BGEIEN = ftl::mmio::Field<1, 2, eBGEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA interrupt enable
    using DINTIEN = ftl::mmio::Field<1, 3, eDINTIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer write ready interrupt enable
    using BWRIEN = ftl::mmio::Field<1, 4, eBWRIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Buffer read ready interrupt enable
    using BRRIEN = ftl::mmio::Field<1, 5, eBRRIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card insertion interrupt enable
    using CINSIEN = ftl::mmio::Field<1, 6, eCINSIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card removal interrupt enable
    using CRMIEN = ftl::mmio::Field<1, 7, eCRMIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Card interrupt enable
    using CINTIEN = ftl::mmio::Field<1, 8, eCINTIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Re-tuning event interrupt enable
    using RTEIEN = ftl::mmio::Field<1, 12, eRTEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning Pass interrupt enable
    using TPIEN = ftl::mmio::Field<1, 14, eTPIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command timeout error interrupt enable
    using CTOEIEN = ftl::mmio::Field<1, 16, eCTOEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command CRC error interrupt enable
    using CCEIEN = ftl::mmio::Field<1, 17, eCCEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command end bit error interrupt enable
    using CEBEIEN = ftl::mmio::Field<1, 18, eCEBEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Command index error interrupt enable
    using CIEIEN = ftl::mmio::Field<1, 19, eCIEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data timeout error interrupt enable
    using DTOEIEN = ftl::mmio::Field<1, 20, eDTOEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data CRC error interrupt enable
    using DCEIEN = ftl::mmio::Field<1, 21, eDCEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data end bit error interrupt enable
    using DEBEIEN = ftl::mmio::Field<1, 22, eDEBEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto CMD12 error interrupt enable
    using AC12EIEN = ftl::mmio::Field<1, 24, eAC12EIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning error interrupt enable
    using TNEIEN = ftl::mmio::Field<1, 26, eTNEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // DMA error interrupt enable
    using DMAEIEN = ftl::mmio::Field<1, 28, eDMAEIEN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct IntSignalEnFields

  struct INT_SIGNAL_EN : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename IntSignalEnFields::CCIEN,
      typename IntSignalEnFields::TCIEN,
      typename IntSignalEnFields::BGEIEN,
      typename IntSignalEnFields::DINTIEN,
      typename IntSignalEnFields::BWRIEN,
      typename IntSignalEnFields::BRRIEN,
      typename IntSignalEnFields::CINSIEN,
      typename IntSignalEnFields::CRMIEN,
      typename IntSignalEnFields::CINTIEN,
      ftl::mmio::Reserved<3, 9>,
      typename IntSignalEnFields::RTEIEN,
      ftl::mmio::Reserved<1, 13>,
      typename IntSignalEnFields::TPIEN,
      ftl::mmio::Reserved<1, 15>,
      typename IntSignalEnFields::CTOEIEN,
      typename IntSignalEnFields::CCEIEN,
      typename IntSignalEnFields::CEBEIEN,
      typename IntSignalEnFields::CIEIEN,
      typename IntSignalEnFields::DTOEIEN,
      typename IntSignalEnFields::DCEIEN,
      typename IntSignalEnFields::DEBEIEN,
      ftl::mmio::Reserved<1, 23>,
      typename IntSignalEnFields::AC12EIEN,
      ftl::mmio::Reserved<1, 25>,
      typename IntSignalEnFields::TNEIEN,
      ftl::mmio::Reserved<1, 27>,
      typename IntSignalEnFields::DMAEIEN,
      ftl::mmio::Reserved<3, 29>> {
    using eCCIEN = typename IntSignalEnFields::eCCIEN;
    using eTCIEN = typename IntSignalEnFields::eTCIEN;
    using eBGEIEN = typename IntSignalEnFields::eBGEIEN;
    using eDINTIEN = typename IntSignalEnFields::eDINTIEN;
    using eBWRIEN = typename IntSignalEnFields::eBWRIEN;
    using eBRRIEN = typename IntSignalEnFields::eBRRIEN;
    using eCINSIEN = typename IntSignalEnFields::eCINSIEN;
    using eCRMIEN = typename IntSignalEnFields::eCRMIEN;
    using eCINTIEN = typename IntSignalEnFields::eCINTIEN;
    using eRTEIEN = typename IntSignalEnFields::eRTEIEN;
    using eTPIEN = typename IntSignalEnFields::eTPIEN;
    using eCTOEIEN = typename IntSignalEnFields::eCTOEIEN;
    using eCCEIEN = typename IntSignalEnFields::eCCEIEN;
    using eCEBEIEN = typename IntSignalEnFields::eCEBEIEN;
    using eCIEIEN = typename IntSignalEnFields::eCIEIEN;
    using eDTOEIEN = typename IntSignalEnFields::eDTOEIEN;
    using eDCEIEN = typename IntSignalEnFields::eDCEIEN;
    using eDEBEIEN = typename IntSignalEnFields::eDEBEIEN;
    using eAC12EIEN = typename IntSignalEnFields::eAC12EIEN;
    using eTNEIEN = typename IntSignalEnFields::eTNEIEN;
    using eDMAEIEN = typename IntSignalEnFields::eDMAEIEN;
    using CCIEN = typename IntSignalEnFields::CCIEN;
    using TCIEN = typename IntSignalEnFields::TCIEN;
    using BGEIEN = typename IntSignalEnFields::BGEIEN;
    using DINTIEN = typename IntSignalEnFields::DINTIEN;
    using BWRIEN = typename IntSignalEnFields::BWRIEN;
    using BRRIEN = typename IntSignalEnFields::BRRIEN;
    using CINSIEN = typename IntSignalEnFields::CINSIEN;
    using CRMIEN = typename IntSignalEnFields::CRMIEN;
    using CINTIEN = typename IntSignalEnFields::CINTIEN;
    using RTEIEN = typename IntSignalEnFields::RTEIEN;
    using TPIEN = typename IntSignalEnFields::TPIEN;
    using CTOEIEN = typename IntSignalEnFields::CTOEIEN;
    using CCEIEN = typename IntSignalEnFields::CCEIEN;
    using CEBEIEN = typename IntSignalEnFields::CEBEIEN;
    using CIEIEN = typename IntSignalEnFields::CIEIEN;
    using DTOEIEN = typename IntSignalEnFields::DTOEIEN;
    using DCEIEN = typename IntSignalEnFields::DCEIEN;
    using DEBEIEN = typename IntSignalEnFields::DEBEIEN;
    using AC12EIEN = typename IntSignalEnFields::AC12EIEN;
    using TNEIEN = typename IntSignalEnFields::TNEIEN;
    using DMAEIEN = typename IntSignalEnFields::DMAEIEN;
  };

  // Auto CMD12 Error Status
  struct Autocmd12ErrStatusFields {
    enum class eAC12NE : std::uint32_t {
      // Executed
      eAC12NE_0 = 0,
      // Not executed
      eAC12NE_1 = 1,
    };

    enum class eAC12TOE : std::uint32_t {
      // No error
      eAC12TOE_0 = 0,
      // Time out
      eAC12TOE_1 = 1,
    };

    enum class eAC12EBE : std::uint32_t {
      // No error
      eAC12EBE_0 = 0,
      // End bit error generated
      eAC12EBE_1 = 1,
    };

    enum class eAC12CE : std::uint32_t {
      // No CRC error
      eAC12CE_0 = 0,
      // CRC error met in Auto CMD12/23 response
      eAC12CE_1 = 1,
    };

    enum class eAC12IE : std::uint32_t {
      // No error
      eAC12IE_0 = 0,
      // Error, the CMD index in response is not CMD12/23
      eAC12IE_1 = 1,
    };

    enum class eCNIBAC12E : std::uint32_t {
      // No error
      eCNIBAC12E_0 = 0,
      // Not issued
      eCNIBAC12E_1 = 1,
    };

    enum class eEXECUTE_TUNING : std::uint32_t {
      // Tuning procedure is aborted
      eEXECUTE_TUNING_0 = 0,
      // Start tuning procedure
      eEXECUTE_TUNING_1 = 1,
    };

    enum class eSMP_CLK_SEL : std::uint32_t {
      // Fixed clock is used to sample data
      eSMP_CLK_SEL_0 = 0,
      // Tuned clock is used to sample data
      eSMP_CLK_SEL_1 = 1,
    };

    // Auto CMD12 not executed
    using AC12NE = ftl::mmio::Field<1, 0, eAC12NE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Auto CMD12 / 23 timeout error
    using AC12TOE = ftl::mmio::Field<1, 1, eAC12TOE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Auto CMD12 / 23 end bit error
    using AC12EBE = ftl::mmio::Field<1, 2, eAC12EBE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Auto CMD12 / 23 CRC error
    using AC12CE = ftl::mmio::Field<1, 3, eAC12CE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Auto CMD12 / 23 index error
    using AC12IE = ftl::mmio::Field<1, 4, eAC12IE, ftl::mmio::RO, ftl::mmio::Normal>;
    // Command not issued by Auto CMD12 error
    using CNIBAC12E = ftl::mmio::Field<1, 7, eCNIBAC12E, ftl::mmio::RO, ftl::mmio::Normal>;
    // Execute tuning
    using EXECUTE_TUNING = ftl::mmio::Field<1, 22, eEXECUTE_TUNING, ftl::mmio::RW, ftl::mmio::Normal>;
    // Sample clock select
    using SMP_CLK_SEL = ftl::mmio::Field<1, 23, eSMP_CLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Autocmd12ErrStatusFields

  struct AUTOCMD12_ERR_STATUS : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename Autocmd12ErrStatusFields::AC12NE,
      typename Autocmd12ErrStatusFields::AC12TOE,
      typename Autocmd12ErrStatusFields::AC12EBE,
      typename Autocmd12ErrStatusFields::AC12CE,
      typename Autocmd12ErrStatusFields::AC12IE,
      ftl::mmio::Reserved<2, 5>,
      typename Autocmd12ErrStatusFields::CNIBAC12E,
      ftl::mmio::Reserved<14, 8>,
      typename Autocmd12ErrStatusFields::EXECUTE_TUNING,
      typename Autocmd12ErrStatusFields::SMP_CLK_SEL,
      ftl::mmio::Reserved<8, 24>> {
    using eAC12NE = typename Autocmd12ErrStatusFields::eAC12NE;
    using eAC12TOE = typename Autocmd12ErrStatusFields::eAC12TOE;
    using eAC12EBE = typename Autocmd12ErrStatusFields::eAC12EBE;
    using eAC12CE = typename Autocmd12ErrStatusFields::eAC12CE;
    using eAC12IE = typename Autocmd12ErrStatusFields::eAC12IE;
    using eCNIBAC12E = typename Autocmd12ErrStatusFields::eCNIBAC12E;
    using eEXECUTE_TUNING = typename Autocmd12ErrStatusFields::eEXECUTE_TUNING;
    using eSMP_CLK_SEL = typename Autocmd12ErrStatusFields::eSMP_CLK_SEL;
    using AC12NE = typename Autocmd12ErrStatusFields::AC12NE;
    using AC12TOE = typename Autocmd12ErrStatusFields::AC12TOE;
    using AC12EBE = typename Autocmd12ErrStatusFields::AC12EBE;
    using AC12CE = typename Autocmd12ErrStatusFields::AC12CE;
    using AC12IE = typename Autocmd12ErrStatusFields::AC12IE;
    using CNIBAC12E = typename Autocmd12ErrStatusFields::CNIBAC12E;
    using EXECUTE_TUNING = typename Autocmd12ErrStatusFields::EXECUTE_TUNING;
    using SMP_CLK_SEL = typename Autocmd12ErrStatusFields::SMP_CLK_SEL;
  };

  // Host Controller Capabilities
  struct HostCtrlCapFields {
    enum class eUSE_TUNING_SDR50 : std::uint32_t {
      // SDR50 does not support tuning
      eUSE_TUNING_SDR50_0 = 0,
      // SDR50 supports tuning
      eUSE_TUNING_SDR50_1 = 1,
    };

    enum class eMBL : std::uint32_t {
      // 512 bytes
      eMBL_0 = 0,
      // 1024 bytes
      eMBL_1 = 1,
      // 2048 bytes
      eMBL_2 = 2,
      // 4096 bytes
      eMBL_3 = 3,
    };

    enum class eADMAS : std::uint32_t {
      // Advanced DMA not supported
      eADMAS_0 = 0,
      // Advanced DMA supported
      eADMAS_1 = 1,
    };

    enum class eHSS : std::uint32_t {
      // High speed not supported
      eHSS_0 = 0,
      // High speed supported
      eHSS_1 = 1,
    };

    enum class eDMAS : std::uint32_t {
      // DMA not supported
      eDMAS_0 = 0,
      // DMA supported
      eDMAS_1 = 1,
    };

    enum class eSRS : std::uint32_t {
      // Not supported
      eSRS_0 = 0,
      // Supported
      eSRS_1 = 1,
    };

    enum class eVS33 : std::uint32_t {
      // 3.3 V not supported
      eVS33_0 = 0,
      // 3.3 V supported
      eVS33_1 = 1,
    };

    enum class eVS30 : std::uint32_t {
      // 3.0 V not supported
      eVS30_0 = 0,
      // 3.0 V supported
      eVS30_1 = 1,
    };

    enum class eVS18 : std::uint32_t {
      // 1.8 V not supported
      eVS18_0 = 0,
      // 1.8 V supported
      eVS18_1 = 1,
    };

    // SDR50 support
    using SDR50_SUPPORT = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // SDR104 support
    using SDR104_SUPPORT = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // DDR50 support
    using DDR50_SUPPORT = ftl::mmio::Field<1, 2, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Use Tuning for SDR50
    using USE_TUNING_SDR50 = ftl::mmio::Field<1, 13, eUSE_TUNING_SDR50, ftl::mmio::RW, ftl::mmio::Normal>;
    // Max block length
    using MBL = ftl::mmio::Field<3, 16, eMBL, ftl::mmio::RO, ftl::mmio::Normal>;
    // ADMA support
    using ADMAS = ftl::mmio::Field<1, 20, eADMAS, ftl::mmio::RO, ftl::mmio::Normal>;
    // High speed support
    using HSS = ftl::mmio::Field<1, 21, eHSS, ftl::mmio::RO, ftl::mmio::Normal>;
    // DMA support
    using DMAS = ftl::mmio::Field<1, 22, eDMAS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Suspend / resume support
    using SRS = ftl::mmio::Field<1, 23, eSRS, ftl::mmio::RO, ftl::mmio::Normal>;
    // Voltage support 3.3 V
    using VS33 = ftl::mmio::Field<1, 24, eVS33, ftl::mmio::RO, ftl::mmio::Normal>;
    // Voltage support 3.0 V
    using VS30 = ftl::mmio::Field<1, 25, eVS30, ftl::mmio::RO, ftl::mmio::Normal>;
    // Voltage support 1.8 V
    using VS18 = ftl::mmio::Field<1, 26, eVS18, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct HostCtrlCapFields

  struct HOST_CTRL_CAP : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x07F3B407u,
      ftl::mmio::RW,
      typename HostCtrlCapFields::SDR50_SUPPORT,
      typename HostCtrlCapFields::SDR104_SUPPORT,
      typename HostCtrlCapFields::DDR50_SUPPORT,
      ftl::mmio::Reserved<10, 3>,
      typename HostCtrlCapFields::USE_TUNING_SDR50,
      ftl::mmio::Reserved<2, 14>,
      typename HostCtrlCapFields::MBL,
      ftl::mmio::Reserved<1, 19>,
      typename HostCtrlCapFields::ADMAS,
      typename HostCtrlCapFields::HSS,
      typename HostCtrlCapFields::DMAS,
      typename HostCtrlCapFields::SRS,
      typename HostCtrlCapFields::VS33,
      typename HostCtrlCapFields::VS30,
      typename HostCtrlCapFields::VS18,
      ftl::mmio::Reserved<5, 27>> {
    using eUSE_TUNING_SDR50 = typename HostCtrlCapFields::eUSE_TUNING_SDR50;
    using eMBL = typename HostCtrlCapFields::eMBL;
    using eADMAS = typename HostCtrlCapFields::eADMAS;
    using eHSS = typename HostCtrlCapFields::eHSS;
    using eDMAS = typename HostCtrlCapFields::eDMAS;
    using eSRS = typename HostCtrlCapFields::eSRS;
    using eVS33 = typename HostCtrlCapFields::eVS33;
    using eVS30 = typename HostCtrlCapFields::eVS30;
    using eVS18 = typename HostCtrlCapFields::eVS18;
    using SDR50_SUPPORT = typename HostCtrlCapFields::SDR50_SUPPORT;
    using SDR104_SUPPORT = typename HostCtrlCapFields::SDR104_SUPPORT;
    using DDR50_SUPPORT = typename HostCtrlCapFields::DDR50_SUPPORT;
    using USE_TUNING_SDR50 = typename HostCtrlCapFields::USE_TUNING_SDR50;
    using MBL = typename HostCtrlCapFields::MBL;
    using ADMAS = typename HostCtrlCapFields::ADMAS;
    using HSS = typename HostCtrlCapFields::HSS;
    using DMAS = typename HostCtrlCapFields::DMAS;
    using SRS = typename HostCtrlCapFields::SRS;
    using VS33 = typename HostCtrlCapFields::VS33;
    using VS30 = typename HostCtrlCapFields::VS30;
    using VS18 = typename HostCtrlCapFields::VS18;
  };

  // Watermark Level
  struct WtmkLvlFields {
    // Read watermark level
    using RD_WML = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write watermark level
    using WR_WML = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WtmkLvlFields

  struct WTMK_LVL : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint32_t,
      0x08100810u,
      ftl::mmio::RW,
      typename WtmkLvlFields::RD_WML,
      ftl::mmio::Reserved<8, 8>,
      typename WtmkLvlFields::WR_WML,
      ftl::mmio::Reserved<8, 24>> {
    using RD_WML = typename WtmkLvlFields::RD_WML;
    using WR_WML = typename WtmkLvlFields::WR_WML;
  };

  // Mixer Control
  struct MixCtrlFields {
    enum class eDMAEN : std::uint32_t {
      // Disable
      eDMAEN_0 = 0,
      // Enable
      eDMAEN_1 = 1,
    };

    enum class eBCEN : std::uint32_t {
      // Disable
      eBCEN_0 = 0,
      // Enable
      eBCEN_1 = 1,
    };

    enum class eAC12EN : std::uint32_t {
      // Disable
      eAC12EN_0 = 0,
      // Enable
      eAC12EN_1 = 1,
    };

    enum class eDTDSEL : std::uint32_t {
      // Write (Host to card)
      eDTDSEL_0 = 0,
      // Read (Card to host)
      eDTDSEL_1 = 1,
    };

    enum class eMSBSEL : std::uint32_t {
      // Single block
      eMSBSEL_0 = 0,
      // Multiple blocks
      eMSBSEL_1 = 1,
    };

    enum class eEXE_TUNE : std::uint32_t {
      // Not tuned or tuning completed
      eEXE_TUNE_0 = 0,
      // Execute tuning
      eEXE_TUNE_1 = 1,
    };

    enum class eSMP_CLK_SEL : std::uint32_t {
      // Fixed clock is used to sample data / cmd
      eSMP_CLK_SEL_0 = 0,
      // Tuned clock is used to sample data / cmd
      eSMP_CLK_SEL_1 = 1,
    };

    enum class eAUTO_TUNE_EN : std::uint32_t {
      // Disable auto tuning
      eAUTO_TUNE_EN_0 = 0,
      // Enable auto tuning
      eAUTO_TUNE_EN_1 = 1,
    };

    enum class eFBCLK_SEL : std::uint32_t {
      // Feedback clock comes from the loopback CLK
      eFBCLK_SEL_0 = 0,
      // Feedback clock comes from the ipp_card_clk_out
      eFBCLK_SEL_1 = 1,
    };

    // DMA enable
    using DMAEN = ftl::mmio::Field<1, 0, eDMAEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Block count enable
    using BCEN = ftl::mmio::Field<1, 1, eBCEN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto CMD12 enable
    using AC12EN = ftl::mmio::Field<1, 2, eAC12EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Dual data rate mode selection
    using DDR_EN = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data transfer direction select
    using DTDSEL = ftl::mmio::Field<1, 4, eDTDSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Multi / Single block select
    using MSBSEL = ftl::mmio::Field<1, 5, eMSBSEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Nibble position indication
    using NIBBLE_POS = ftl::mmio::Field<1, 6, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto CMD23 enable
    using AC23EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Execute tuning: (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
    using EXE_TUNE = ftl::mmio::Field<1, 22, eEXE_TUNE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Clock selection
    using SMP_CLK_SEL = ftl::mmio::Field<1, 23, eSMP_CLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto tuning enable (Only used for SD3.0, SDR104 mode and and EMMC HS200 mode)
    using AUTO_TUNE_EN = ftl::mmio::Field<1, 24, eAUTO_TUNE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Feedback clock source selection (Only used for SD3.0, SDR104 mode and EMMC HS200 mode)
    using FBCLK_SEL = ftl::mmio::Field<1, 25, eFBCLK_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable HS400 mode
    using HS400_MODE = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MixCtrlFields

  struct MIX_CTRL : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      typename MixCtrlFields::DMAEN,
      typename MixCtrlFields::BCEN,
      typename MixCtrlFields::AC12EN,
      typename MixCtrlFields::DDR_EN,
      typename MixCtrlFields::DTDSEL,
      typename MixCtrlFields::MSBSEL,
      typename MixCtrlFields::NIBBLE_POS,
      typename MixCtrlFields::AC23EN,
      ftl::mmio::Reserved<14, 8>,
      typename MixCtrlFields::EXE_TUNE,
      typename MixCtrlFields::SMP_CLK_SEL,
      typename MixCtrlFields::AUTO_TUNE_EN,
      typename MixCtrlFields::FBCLK_SEL,
      typename MixCtrlFields::HS400_MODE,
      ftl::mmio::Reserved<5, 27>> {
    using eDMAEN = typename MixCtrlFields::eDMAEN;
    using eBCEN = typename MixCtrlFields::eBCEN;
    using eAC12EN = typename MixCtrlFields::eAC12EN;
    using eDTDSEL = typename MixCtrlFields::eDTDSEL;
    using eMSBSEL = typename MixCtrlFields::eMSBSEL;
    using eEXE_TUNE = typename MixCtrlFields::eEXE_TUNE;
    using eSMP_CLK_SEL = typename MixCtrlFields::eSMP_CLK_SEL;
    using eAUTO_TUNE_EN = typename MixCtrlFields::eAUTO_TUNE_EN;
    using eFBCLK_SEL = typename MixCtrlFields::eFBCLK_SEL;
    using DMAEN = typename MixCtrlFields::DMAEN;
    using BCEN = typename MixCtrlFields::BCEN;
    using AC12EN = typename MixCtrlFields::AC12EN;
    using DDR_EN = typename MixCtrlFields::DDR_EN;
    using DTDSEL = typename MixCtrlFields::DTDSEL;
    using MSBSEL = typename MixCtrlFields::MSBSEL;
    using NIBBLE_POS = typename MixCtrlFields::NIBBLE_POS;
    using AC23EN = typename MixCtrlFields::AC23EN;
    using EXE_TUNE = typename MixCtrlFields::EXE_TUNE;
    using SMP_CLK_SEL = typename MixCtrlFields::SMP_CLK_SEL;
    using AUTO_TUNE_EN = typename MixCtrlFields::AUTO_TUNE_EN;
    using FBCLK_SEL = typename MixCtrlFields::FBCLK_SEL;
    using HS400_MODE = typename MixCtrlFields::HS400_MODE;
  };

  // Force Event
  struct ForceEventFields {
    // Force event auto command 12 not executed
    using FEVTAC12NE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event auto command 12 time out error
    using FEVTAC12TOE = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event auto command 12 CRC error
    using FEVTAC12CE = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event Auto Command 12 end bit error
    using FEVTAC12EBE = ftl::mmio::Field<1, 3, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event Auto Command 12 index error
    using FEVTAC12IE = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event command not executed by Auto Command 12 error
    using FEVTCNIBAC12E = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event command time out error
    using FEVTCTOE = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event command CRC error
    using FEVTCCE = ftl::mmio::Field<1, 17, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event command end bit error
    using FEVTCEBE = ftl::mmio::Field<1, 18, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event command index error
    using FEVTCIE = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event data time out error
    using FEVTDTOE = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event data CRC error
    using FEVTDCE = ftl::mmio::Field<1, 21, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event data end bit error
    using FEVTDEBE = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event Auto Command 12 error
    using FEVTAC12E = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force tuning error
    using FEVTTNE = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event DMA error
    using FEVTDMAE = ftl::mmio::Field<1, 28, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force event card interrupt
    using FEVTCINT = ftl::mmio::Field<1, 31, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ForceEventFields

  struct FORCE_EVENT : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ForceEventFields::FEVTAC12NE,
      typename ForceEventFields::FEVTAC12TOE,
      typename ForceEventFields::FEVTAC12CE,
      typename ForceEventFields::FEVTAC12EBE,
      typename ForceEventFields::FEVTAC12IE,
      ftl::mmio::Reserved<2, 5>,
      typename ForceEventFields::FEVTCNIBAC12E,
      ftl::mmio::Reserved<8, 8>,
      typename ForceEventFields::FEVTCTOE,
      typename ForceEventFields::FEVTCCE,
      typename ForceEventFields::FEVTCEBE,
      typename ForceEventFields::FEVTCIE,
      typename ForceEventFields::FEVTDTOE,
      typename ForceEventFields::FEVTDCE,
      typename ForceEventFields::FEVTDEBE,
      ftl::mmio::Reserved<1, 23>,
      typename ForceEventFields::FEVTAC12E,
      ftl::mmio::Reserved<1, 25>,
      typename ForceEventFields::FEVTTNE,
      ftl::mmio::Reserved<1, 27>,
      typename ForceEventFields::FEVTDMAE,
      ftl::mmio::Reserved<2, 29>,
      typename ForceEventFields::FEVTCINT> {
    using FEVTAC12NE = typename ForceEventFields::FEVTAC12NE;
    using FEVTAC12TOE = typename ForceEventFields::FEVTAC12TOE;
    using FEVTAC12CE = typename ForceEventFields::FEVTAC12CE;
    using FEVTAC12EBE = typename ForceEventFields::FEVTAC12EBE;
    using FEVTAC12IE = typename ForceEventFields::FEVTAC12IE;
    using FEVTCNIBAC12E = typename ForceEventFields::FEVTCNIBAC12E;
    using FEVTCTOE = typename ForceEventFields::FEVTCTOE;
    using FEVTCCE = typename ForceEventFields::FEVTCCE;
    using FEVTCEBE = typename ForceEventFields::FEVTCEBE;
    using FEVTCIE = typename ForceEventFields::FEVTCIE;
    using FEVTDTOE = typename ForceEventFields::FEVTDTOE;
    using FEVTDCE = typename ForceEventFields::FEVTDCE;
    using FEVTDEBE = typename ForceEventFields::FEVTDEBE;
    using FEVTAC12E = typename ForceEventFields::FEVTAC12E;
    using FEVTTNE = typename ForceEventFields::FEVTTNE;
    using FEVTDMAE = typename ForceEventFields::FEVTDMAE;
    using FEVTCINT = typename ForceEventFields::FEVTCINT;
  };

  // ADMA Error Status
  struct AdmaErrStatusFields {
    enum class eADMALME : std::uint32_t {
      // No error
      eADMALME_0 = 0,
      // Error
      eADMALME_1 = 1,
    };

    enum class eADMADCE : std::uint32_t {
      // No error
      eADMADCE_0 = 0,
      // Error
      eADMADCE_1 = 1,
    };

    // ADMA error state (when ADMA error is occurred)
    using ADMAES = ftl::mmio::Field<2, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // ADMA length mismatch error
    using ADMALME = ftl::mmio::Field<1, 2, eADMALME, ftl::mmio::RO, ftl::mmio::Normal>;
    // ADMA descriptor error
    using ADMADCE = ftl::mmio::Field<1, 3, eADMADCE, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct AdmaErrStatusFields

  struct ADMA_ERR_STATUS : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename AdmaErrStatusFields::ADMAES,
      typename AdmaErrStatusFields::ADMALME,
      typename AdmaErrStatusFields::ADMADCE,
      ftl::mmio::Reserved<28, 4>> {
    using eADMALME = typename AdmaErrStatusFields::eADMALME;
    using eADMADCE = typename AdmaErrStatusFields::eADMADCE;
    using ADMAES = typename AdmaErrStatusFields::ADMAES;
    using ADMALME = typename AdmaErrStatusFields::ADMALME;
    using ADMADCE = typename AdmaErrStatusFields::ADMADCE;
  };

  // ADMA System Address
  struct AdmaSysAddrFields {
    // ADMA system address
    using ADS_ADDR = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct AdmaSysAddrFields

  struct ADMA_SYS_ADDR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename AdmaSysAddrFields::ADS_ADDR> {
    using ADS_ADDR = typename AdmaSysAddrFields::ADS_ADDR;
  };

  // DLL (Delay Line) Control
  struct DllCtrlFields {
    // DLL and delay chain
    using DLL_CTRL_ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL reset
    using DLL_CTRL_RESET = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL slave delay line
    using DLL_CTRL_SLV_FORCE_UPD = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL slave delay target0
    using DLL_CTRL_SLV_DLY_TARGET0 = ftl::mmio::Field<4, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL gate update
    using DLL_CTRL_GATE_UPDATE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL slave override
    using DLL_CTRL_SLV_OVERRIDE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL slave override val
    using DLL_CTRL_SLV_OVERRIDE_VAL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL slave delay target1
    using DLL_CTRL_SLV_DLY_TARGET1 = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Slave delay line update interval
    using DLL_CTRL_SLV_UPDATE_INT = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // DLL control loop update interval
    using DLL_CTRL_REF_UPDATE_INT = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DllCtrlFields

  struct DLL_CTRL : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DllCtrlFields::DLL_CTRL_ENABLE,
      typename DllCtrlFields::DLL_CTRL_RESET,
      typename DllCtrlFields::DLL_CTRL_SLV_FORCE_UPD,
      typename DllCtrlFields::DLL_CTRL_SLV_DLY_TARGET0,
      typename DllCtrlFields::DLL_CTRL_GATE_UPDATE,
      typename DllCtrlFields::DLL_CTRL_SLV_OVERRIDE,
      typename DllCtrlFields::DLL_CTRL_SLV_OVERRIDE_VAL,
      typename DllCtrlFields::DLL_CTRL_SLV_DLY_TARGET1,
      ftl::mmio::Reserved<1, 19>,
      typename DllCtrlFields::DLL_CTRL_SLV_UPDATE_INT,
      typename DllCtrlFields::DLL_CTRL_REF_UPDATE_INT> {
    using DLL_CTRL_ENABLE = typename DllCtrlFields::DLL_CTRL_ENABLE;
    using DLL_CTRL_RESET = typename DllCtrlFields::DLL_CTRL_RESET;
    using DLL_CTRL_SLV_FORCE_UPD = typename DllCtrlFields::DLL_CTRL_SLV_FORCE_UPD;
    using DLL_CTRL_SLV_DLY_TARGET0 = typename DllCtrlFields::DLL_CTRL_SLV_DLY_TARGET0;
    using DLL_CTRL_GATE_UPDATE = typename DllCtrlFields::DLL_CTRL_GATE_UPDATE;
    using DLL_CTRL_SLV_OVERRIDE = typename DllCtrlFields::DLL_CTRL_SLV_OVERRIDE;
    using DLL_CTRL_SLV_OVERRIDE_VAL = typename DllCtrlFields::DLL_CTRL_SLV_OVERRIDE_VAL;
    using DLL_CTRL_SLV_DLY_TARGET1 = typename DllCtrlFields::DLL_CTRL_SLV_DLY_TARGET1;
    using DLL_CTRL_SLV_UPDATE_INT = typename DllCtrlFields::DLL_CTRL_SLV_UPDATE_INT;
    using DLL_CTRL_REF_UPDATE_INT = typename DllCtrlFields::DLL_CTRL_REF_UPDATE_INT;
  };

  // DLL Status
  struct DllStatusFields {
    // Slave delay-line lock status
    using DLL_STS_SLV_LOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reference DLL lock status
    using DLL_STS_REF_LOCK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Slave delay line select status
    using DLL_STS_SLV_SEL = ftl::mmio::Field<7, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reference delay line select taps
    using DLL_STS_REF_SEL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DllStatusFields

  struct DLL_STATUS : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00000200u,
      ftl::mmio::RO,
      typename DllStatusFields::DLL_STS_SLV_LOCK,
      typename DllStatusFields::DLL_STS_REF_LOCK,
      typename DllStatusFields::DLL_STS_SLV_SEL,
      typename DllStatusFields::DLL_STS_REF_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using DLL_STS_SLV_LOCK = typename DllStatusFields::DLL_STS_SLV_LOCK;
    using DLL_STS_REF_LOCK = typename DllStatusFields::DLL_STS_REF_LOCK;
    using DLL_STS_SLV_SEL = typename DllStatusFields::DLL_STS_SLV_SEL;
    using DLL_STS_REF_SEL = typename DllStatusFields::DLL_STS_REF_SEL;
  };

  // CLK Tuning Control and Status
  struct ClkTuneCtrlStatusFields {
    // Delay cells on the feedback clock between CLK_OUT and CLK_POST
    using DLY_CELL_SET_POST = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Delay cells on the feedback clock between CLK_PRE and CLK_OUT
    using DLY_CELL_SET_OUT = ftl::mmio::Field<4, 4, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // delay cells on the feedback clock between the feedback clock and CLK_PRE
    using DLY_CELL_SET_PRE = ftl::mmio::Field<7, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // NXT error
    using NXT_ERR = ftl::mmio::Field<1, 15, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Delay cells added on the feedback clock between CLK_OUT and CLK_POST
    using TAP_SEL_POST = ftl::mmio::Field<4, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Delay cells added on the feedback clock between CLK_PRE and CLK_OUT
    using TAP_SEL_OUT = ftl::mmio::Field<4, 20, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // TAP_SEL_PRE
    using TAP_SEL_PRE = ftl::mmio::Field<7, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // PRE error
    using PRE_ERR = ftl::mmio::Field<1, 31, bool, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct ClkTuneCtrlStatusFields

  struct CLK_TUNE_CTRL_STATUS : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename ClkTuneCtrlStatusFields::DLY_CELL_SET_POST,
      typename ClkTuneCtrlStatusFields::DLY_CELL_SET_OUT,
      typename ClkTuneCtrlStatusFields::DLY_CELL_SET_PRE,
      typename ClkTuneCtrlStatusFields::NXT_ERR,
      typename ClkTuneCtrlStatusFields::TAP_SEL_POST,
      typename ClkTuneCtrlStatusFields::TAP_SEL_OUT,
      typename ClkTuneCtrlStatusFields::TAP_SEL_PRE,
      typename ClkTuneCtrlStatusFields::PRE_ERR> {
    using DLY_CELL_SET_POST = typename ClkTuneCtrlStatusFields::DLY_CELL_SET_POST;
    using DLY_CELL_SET_OUT = typename ClkTuneCtrlStatusFields::DLY_CELL_SET_OUT;
    using DLY_CELL_SET_PRE = typename ClkTuneCtrlStatusFields::DLY_CELL_SET_PRE;
    using NXT_ERR = typename ClkTuneCtrlStatusFields::NXT_ERR;
    using TAP_SEL_POST = typename ClkTuneCtrlStatusFields::TAP_SEL_POST;
    using TAP_SEL_OUT = typename ClkTuneCtrlStatusFields::TAP_SEL_OUT;
    using TAP_SEL_PRE = typename ClkTuneCtrlStatusFields::TAP_SEL_PRE;
    using PRE_ERR = typename ClkTuneCtrlStatusFields::PRE_ERR;
  };

  // Strobe DLL control
  struct StrobeDllCtrlFields {
    // Strobe DLL control enable
    using STROBE_DLL_CTRL_ENABLE = ftl::mmio::Field<1, 0, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control reset
    using STROBE_DLL_CTRL_RESET = ftl::mmio::Field<1, 1, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control slave force updated
    using STROBE_DLL_CTRL_SLV_FORCE_UPD = ftl::mmio::Field<1, 2, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL Control Slave Delay Target
    using STROBE_DLL_CTRL_SLV_DLY_TARGET = ftl::mmio::Field<4, 3, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control gate update
    using STROBE_DLL_CTRL_GATE_UPDATE = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control slave override
    using STROBE_DLL_CTRL_SLV_OVERRIDE = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control slave Override value
    using STROBE_DLL_CTRL_SLV_OVERRIDE_VAL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control slave update interval
    using STROBE_DLL_CTRL_SLV_UPDATE_INT = ftl::mmio::Field<8, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Strobe DLL control reference update interval
    using STROBE_DLL_CTRL_REF_UPDATE_INT = ftl::mmio::Field<4, 28, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct StrobeDllCtrlFields

  struct STROBE_DLL_CTRL : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_ENABLE,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_RESET,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_FORCE_UPD,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_DLY_TARGET,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_GATE_UPDATE,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_OVERRIDE,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_OVERRIDE_VAL,
      ftl::mmio::Reserved<4, 16>,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_UPDATE_INT,
      typename StrobeDllCtrlFields::STROBE_DLL_CTRL_REF_UPDATE_INT> {
    using STROBE_DLL_CTRL_ENABLE = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_ENABLE;
    using STROBE_DLL_CTRL_RESET = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_RESET;
    using STROBE_DLL_CTRL_SLV_FORCE_UPD = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_FORCE_UPD;
    using STROBE_DLL_CTRL_SLV_DLY_TARGET = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_DLY_TARGET;
    using STROBE_DLL_CTRL_GATE_UPDATE = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_GATE_UPDATE;
    using STROBE_DLL_CTRL_SLV_OVERRIDE = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_OVERRIDE;
    using STROBE_DLL_CTRL_SLV_OVERRIDE_VAL = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_OVERRIDE_VAL;
    using STROBE_DLL_CTRL_SLV_UPDATE_INT = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_SLV_UPDATE_INT;
    using STROBE_DLL_CTRL_REF_UPDATE_INT = typename StrobeDllCtrlFields::STROBE_DLL_CTRL_REF_UPDATE_INT;
  };

  // Strobe DLL status
  struct StrobeDllStatusFields {
    // Strobe DLL status slave lock
    using STROBE_DLL_STS_SLV_LOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status reference lock
    using STROBE_DLL_STS_REF_LOCK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status slave select
    using STROBE_DLL_STS_SLV_SEL = ftl::mmio::Field<7, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status reference select
    using STROBE_DLL_STS_REF_SEL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct StrobeDllStatusFields

  struct STROBE_DLL_STATUS : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00000200u,
      ftl::mmio::RO,
      typename StrobeDllStatusFields::STROBE_DLL_STS_SLV_LOCK,
      typename StrobeDllStatusFields::STROBE_DLL_STS_REF_LOCK,
      typename StrobeDllStatusFields::STROBE_DLL_STS_SLV_SEL,
      typename StrobeDllStatusFields::STROBE_DLL_STS_REF_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using STROBE_DLL_STS_SLV_LOCK = typename StrobeDllStatusFields::STROBE_DLL_STS_SLV_LOCK;
    using STROBE_DLL_STS_REF_LOCK = typename StrobeDllStatusFields::STROBE_DLL_STS_REF_LOCK;
    using STROBE_DLL_STS_SLV_SEL = typename StrobeDllStatusFields::STROBE_DLL_STS_SLV_SEL;
    using STROBE_DLL_STS_REF_SEL = typename StrobeDllStatusFields::STROBE_DLL_STS_REF_SEL;
  };

  // Vendor Specific Register
  struct VendSpecFields {
    enum class eVSELECT : std::uint32_t {
      // Change the voltage to high voltage range, around 3.0 V
      eVSELECT_0 = 0,
      // Change the voltage to low voltage range, around 1.8 V
      eVSELECT_1 = 1,
    };

    enum class eCONFLICT_CHK_EN : std::uint32_t {
      // Conflict check disable
      eCONFLICT_CHK_EN_0 = 0,
      // Conflict check enable
      eCONFLICT_CHK_EN_1 = 1,
    };

    enum class eAC12_WR_CHKBUSY_EN : std::uint32_t {
      // Do not check busy after auto CMD12 for write data packet
      eAC12_WR_CHKBUSY_EN_0 = 0,
      // Check busy after auto CMD12 for write data packet
      eAC12_WR_CHKBUSY_EN_1 = 1,
    };

    enum class eFRC_SDCLK_ON : std::uint32_t {
      // CLK active or inactive is fully controlled by the hardware.
      eFRC_SDCLK_ON_0 = 0,
      // Force CLK active
      eFRC_SDCLK_ON_1 = 1,
    };

    enum class eCRC_CHK_DIS : std::uint32_t {
      // Check CRC16 for every read data packet and check CRC fields for every write data packet
      eCRC_CHK_DIS_0 = 0,
      // Ignore CRC16 check for every read data packet and ignore CRC fields check for every write data packet
      eCRC_CHK_DIS_1 = 1,
    };

    enum class eCMD_BYTE_EN : std::uint32_t {
      // Disable
      eCMD_BYTE_EN_0 = 0,
      // Enable
      eCMD_BYTE_EN_1 = 1,
    };

    // Voltage selection
    using VSELECT = ftl::mmio::Field<1, 1, eVSELECT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Conflict check enable
    using CONFLICT_CHK_EN = ftl::mmio::Field<1, 2, eCONFLICT_CHK_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Check busy enable
    using AC12_WR_CHKBUSY_EN = ftl::mmio::Field<1, 3, eAC12_WR_CHKBUSY_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Force CLK
    using FRC_SDCLK_ON = ftl::mmio::Field<1, 8, eFRC_SDCLK_ON, ftl::mmio::RW, ftl::mmio::Normal>;
    // CRC Check Disable
    using CRC_CHK_DIS = ftl::mmio::Field<1, 15, eCRC_CHK_DIS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Byte access
    using CMD_BYTE_EN = ftl::mmio::Field<1, 31, eCMD_BYTE_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VendSpecFields

  struct VEND_SPEC : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint32_t,
      0x30007809u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename VendSpecFields::VSELECT,
      typename VendSpecFields::CONFLICT_CHK_EN,
      typename VendSpecFields::AC12_WR_CHKBUSY_EN,
      ftl::mmio::Reserved<4, 4>,
      typename VendSpecFields::FRC_SDCLK_ON,
      ftl::mmio::Reserved<6, 9>,
      typename VendSpecFields::CRC_CHK_DIS,
      ftl::mmio::Reserved<15, 16>,
      typename VendSpecFields::CMD_BYTE_EN> {
    using eVSELECT = typename VendSpecFields::eVSELECT;
    using eCONFLICT_CHK_EN = typename VendSpecFields::eCONFLICT_CHK_EN;
    using eAC12_WR_CHKBUSY_EN = typename VendSpecFields::eAC12_WR_CHKBUSY_EN;
    using eFRC_SDCLK_ON = typename VendSpecFields::eFRC_SDCLK_ON;
    using eCRC_CHK_DIS = typename VendSpecFields::eCRC_CHK_DIS;
    using eCMD_BYTE_EN = typename VendSpecFields::eCMD_BYTE_EN;
    using VSELECT = typename VendSpecFields::VSELECT;
    using CONFLICT_CHK_EN = typename VendSpecFields::CONFLICT_CHK_EN;
    using AC12_WR_CHKBUSY_EN = typename VendSpecFields::AC12_WR_CHKBUSY_EN;
    using FRC_SDCLK_ON = typename VendSpecFields::FRC_SDCLK_ON;
    using CRC_CHK_DIS = typename VendSpecFields::CRC_CHK_DIS;
    using CMD_BYTE_EN = typename VendSpecFields::CMD_BYTE_EN;
  };

  // MMC Boot
  struct MmcBootFields {
    enum class eDTOCV_ACK : std::uint32_t {
      // SDCLK x 2^14
      eDTOCV_ACK_0 = 0,
      // SDCLK x 2^15
      eDTOCV_ACK_1 = 1,
      // SDCLK x 2^16
      eDTOCV_ACK_2 = 2,
      // SDCLK x 2^17
      eDTOCV_ACK_3 = 3,
      // SDCLK x 2^18
      eDTOCV_ACK_4 = 4,
      // SDCLK x 2^19
      eDTOCV_ACK_5 = 5,
      // SDCLK x 2^20
      eDTOCV_ACK_6 = 6,
      // SDCLK x 2^21
      eDTOCV_ACK_7 = 7,
      // SDCLK x 2^28
      eDTOCV_ACK_14 = 14,
      // SDCLK x 2^29
      eDTOCV_ACK_15 = 15,
    };

    enum class eBOOT_ACK : std::uint32_t {
      // No ack
      eBOOT_ACK_0 = 0,
      // Ack
      eBOOT_ACK_1 = 1,
    };

    enum class eBOOT_MODE : std::uint32_t {
      // Normal boot
      eBOOT_MODE_0 = 0,
      // Alternative boot
      eBOOT_MODE_1 = 1,
    };

    enum class eBOOT_EN : std::uint32_t {
      // Fast boot disable
      eBOOT_EN_0 = 0,
      // Fast boot enable
      eBOOT_EN_1 = 1,
    };

    enum class eDISABLE_TIME_OUT : std::uint32_t {
      // Enable time out
      eDISABLE_TIME_OUT_0 = 0,
      // Disable time out
      eDISABLE_TIME_OUT_1 = 1,
    };

    // Boot ACK time out
    using DTOCV_ACK = ftl::mmio::Field<4, 0, eDTOCV_ACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // BOOT ACK
    using BOOT_ACK = ftl::mmio::Field<1, 4, eBOOT_ACK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Boot mode
    using BOOT_MODE = ftl::mmio::Field<1, 5, eBOOT_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Boot enable
    using BOOT_EN = ftl::mmio::Field<1, 6, eBOOT_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // Auto stop at block gap
    using AUTO_SABG_EN = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Time out
    using DISABLE_TIME_OUT = ftl::mmio::Field<1, 8, eDISABLE_TIME_OUT, ftl::mmio::RW, ftl::mmio::Normal>;
    // Stop At Block Gap value of automatic mode
    using BOOT_BLK_CNT = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct MmcBootFields

  struct MMC_BOOT : ftl::mmio::Register<
      kBase + 0xC4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MmcBootFields::DTOCV_ACK,
      typename MmcBootFields::BOOT_ACK,
      typename MmcBootFields::BOOT_MODE,
      typename MmcBootFields::BOOT_EN,
      typename MmcBootFields::AUTO_SABG_EN,
      typename MmcBootFields::DISABLE_TIME_OUT,
      ftl::mmio::Reserved<7, 9>,
      typename MmcBootFields::BOOT_BLK_CNT> {
    using eDTOCV_ACK = typename MmcBootFields::eDTOCV_ACK;
    using eBOOT_ACK = typename MmcBootFields::eBOOT_ACK;
    using eBOOT_MODE = typename MmcBootFields::eBOOT_MODE;
    using eBOOT_EN = typename MmcBootFields::eBOOT_EN;
    using eDISABLE_TIME_OUT = typename MmcBootFields::eDISABLE_TIME_OUT;
    using DTOCV_ACK = typename MmcBootFields::DTOCV_ACK;
    using BOOT_ACK = typename MmcBootFields::BOOT_ACK;
    using BOOT_MODE = typename MmcBootFields::BOOT_MODE;
    using BOOT_EN = typename MmcBootFields::BOOT_EN;
    using AUTO_SABG_EN = typename MmcBootFields::AUTO_SABG_EN;
    using DISABLE_TIME_OUT = typename MmcBootFields::DISABLE_TIME_OUT;
    using BOOT_BLK_CNT = typename MmcBootFields::BOOT_BLK_CNT;
  };

  // Vendor Specific 2 Register
  struct VendSpec2Fields {
    enum class eCARD_INT_D3_TEST : std::uint32_t {
      // Check the card interrupt only when DATA3 is high.
      eCARD_INT_D3_TEST_0 = 0,
      // Check the card interrupt by ignoring the status of DATA3.
      eCARD_INT_D3_TEST_1 = 1,
    };

    enum class eTUNING_CMD_EN : std::uint32_t {
      // Auto tuning circuit does not check the CMD line.
      eTUNING_CMD_EN_0 = 0,
      // Auto tuning circuit checks the CMD line.
      eTUNING_CMD_EN_1 = 1,
    };

    enum class eACMD23_ARGU2_EN : std::uint32_t {
      // Disable
      eACMD23_ARGU2_EN_0 = 0,
      // Argument2 register enable for ACMD23 sharing with SDMA system address register. Default is enabled.
      eACMD23_ARGU2_EN_1 = 1,
    };

    // Card interrupt detection test
    using CARD_INT_D3_TEST = ftl::mmio::Field<1, 3, eCARD_INT_D3_TEST, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning 8bit enable
    using TUNING_8bit_EN = ftl::mmio::Field<1, 4, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning 1bit enable
    using TUNING_1bit_EN = ftl::mmio::Field<1, 5, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning command enable
    using TUNING_CMD_EN = ftl::mmio::Field<1, 6, eTUNING_CMD_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // HS400 write clock stop enable
    using HS400_WR_CLK_STOP_EN = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // HS400 read clock stop enable
    using HS400_RD_CLK_STOP_EN = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Argument2 register enable for ACMD23
    using ACMD23_ARGU2_EN = ftl::mmio::Field<1, 12, eACMD23_ARGU2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VendSpec2Fields

  struct VEND_SPEC2 : ftl::mmio::Register<
      kBase + 0xC8u,
      std::uint32_t,
      0x00019006u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      typename VendSpec2Fields::CARD_INT_D3_TEST,
      typename VendSpec2Fields::TUNING_8bit_EN,
      typename VendSpec2Fields::TUNING_1bit_EN,
      typename VendSpec2Fields::TUNING_CMD_EN,
      ftl::mmio::Reserved<3, 7>,
      typename VendSpec2Fields::HS400_WR_CLK_STOP_EN,
      typename VendSpec2Fields::HS400_RD_CLK_STOP_EN,
      typename VendSpec2Fields::ACMD23_ARGU2_EN,
      ftl::mmio::Reserved<19, 13>> {
    using eCARD_INT_D3_TEST = typename VendSpec2Fields::eCARD_INT_D3_TEST;
    using eTUNING_CMD_EN = typename VendSpec2Fields::eTUNING_CMD_EN;
    using eACMD23_ARGU2_EN = typename VendSpec2Fields::eACMD23_ARGU2_EN;
    using CARD_INT_D3_TEST = typename VendSpec2Fields::CARD_INT_D3_TEST;
    using TUNING_8bit_EN = typename VendSpec2Fields::TUNING_8bit_EN;
    using TUNING_1bit_EN = typename VendSpec2Fields::TUNING_1bit_EN;
    using TUNING_CMD_EN = typename VendSpec2Fields::TUNING_CMD_EN;
    using HS400_WR_CLK_STOP_EN = typename VendSpec2Fields::HS400_WR_CLK_STOP_EN;
    using HS400_RD_CLK_STOP_EN = typename VendSpec2Fields::HS400_RD_CLK_STOP_EN;
    using ACMD23_ARGU2_EN = typename VendSpec2Fields::ACMD23_ARGU2_EN;
  };

  // Tuning Control
  struct TuningCtrlFields {
    // Tuning start
    using TUNING_START_TAP = ftl::mmio::Field<7, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Disable command check for standard tuning
    using DIS_CMD_CHK_FOR_STD_TUNING = ftl::mmio::Field<1, 7, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Tuning counter
    using TUNING_COUNTER = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TUNING_STEP
    using TUNING_STEP = ftl::mmio::Field<3, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Data window
    using TUNING_WINDOW = ftl::mmio::Field<3, 20, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Standard tuning circuit and procedure enable
    using STD_TUNING_EN = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct TuningCtrlFields

  struct TUNING_CTRL : ftl::mmio::Register<
      kBase + 0xCCu,
      std::uint32_t,
      0x00212800u,
      ftl::mmio::RW,
      typename TuningCtrlFields::TUNING_START_TAP,
      typename TuningCtrlFields::DIS_CMD_CHK_FOR_STD_TUNING,
      typename TuningCtrlFields::TUNING_COUNTER,
      typename TuningCtrlFields::TUNING_STEP,
      ftl::mmio::Reserved<1, 19>,
      typename TuningCtrlFields::TUNING_WINDOW,
      ftl::mmio::Reserved<1, 23>,
      typename TuningCtrlFields::STD_TUNING_EN,
      ftl::mmio::Reserved<7, 25>> {
    using TUNING_START_TAP = typename TuningCtrlFields::TUNING_START_TAP;
    using DIS_CMD_CHK_FOR_STD_TUNING = typename TuningCtrlFields::DIS_CMD_CHK_FOR_STD_TUNING;
    using TUNING_COUNTER = typename TuningCtrlFields::TUNING_COUNTER;
    using TUNING_STEP = typename TuningCtrlFields::TUNING_STEP;
    using TUNING_WINDOW = typename TuningCtrlFields::TUNING_WINDOW;
    using STD_TUNING_EN = typename TuningCtrlFields::STD_TUNING_EN;
  };

};

}  // namespace regs