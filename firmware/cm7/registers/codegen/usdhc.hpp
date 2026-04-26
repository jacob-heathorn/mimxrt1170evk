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
  struct DS_ADDR_fields_ {
    // System address
    using DS_ADDR = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DS_ADDR_fields_

  struct DS_ADDR : ftl::mmio::Register<
      kBase + 0x0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DS_ADDR_fields_::DS_ADDR> {
    using value_ = typename DS_ADDR_fields_::DS_ADDR;
  };

  // Block Attributes
  struct BLK_ATT_fields_ {
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
  };  // struct BLK_ATT_fields_

  struct BLK_ATT : ftl::mmio::Register<
      kBase + 0x4u,
      std::uint32_t,
      0x00010000u,
      ftl::mmio::RW,
      typename BLK_ATT_fields_::BLKSIZE,
      ftl::mmio::Reserved<3, 13>,
      typename BLK_ATT_fields_::BLKCNT> {
    using eBLKSIZE = typename BLK_ATT_fields_::eBLKSIZE;
    using eBLKCNT = typename BLK_ATT_fields_::eBLKCNT;
    using BLKSIZE = typename BLK_ATT_fields_::BLKSIZE;
    using BLKCNT = typename BLK_ATT_fields_::BLKCNT;
  };

  // Command Argument
  struct CMD_ARG_fields_ {
    // Command argument
    using CMDARG = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CMD_ARG_fields_

  struct CMD_ARG : ftl::mmio::Register<
      kBase + 0x8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CMD_ARG_fields_::CMDARG> {
    using CMDARG = typename CMD_ARG_fields_::CMDARG;
  };

  // Command Transfer Type
  struct CMD_XFR_TYP_fields_ {
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
  };  // struct CMD_XFR_TYP_fields_

  struct CMD_XFR_TYP : ftl::mmio::Register<
      kBase + 0xCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<16, 0>,
      typename CMD_XFR_TYP_fields_::RSPTYP,
      ftl::mmio::Reserved<1, 18>,
      typename CMD_XFR_TYP_fields_::CCCEN,
      typename CMD_XFR_TYP_fields_::CICEN,
      typename CMD_XFR_TYP_fields_::DPSEL,
      typename CMD_XFR_TYP_fields_::CMDTYP,
      typename CMD_XFR_TYP_fields_::CMDINX,
      ftl::mmio::Reserved<2, 30>> {
    using eRSPTYP = typename CMD_XFR_TYP_fields_::eRSPTYP;
    using eCCCEN = typename CMD_XFR_TYP_fields_::eCCCEN;
    using eCICEN = typename CMD_XFR_TYP_fields_::eCICEN;
    using eDPSEL = typename CMD_XFR_TYP_fields_::eDPSEL;
    using eCMDTYP = typename CMD_XFR_TYP_fields_::eCMDTYP;
    using RSPTYP = typename CMD_XFR_TYP_fields_::RSPTYP;
    using CCCEN = typename CMD_XFR_TYP_fields_::CCCEN;
    using CICEN = typename CMD_XFR_TYP_fields_::CICEN;
    using DPSEL = typename CMD_XFR_TYP_fields_::DPSEL;
    using CMDTYP = typename CMD_XFR_TYP_fields_::CMDTYP;
    using CMDINX = typename CMD_XFR_TYP_fields_::CMDINX;
  };

  // Command Response0
  struct CMD_RSP0_fields_ {
    // Command response 0
    using CMDRSP0 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CMD_RSP0_fields_

  struct CMD_RSP0 : ftl::mmio::Register<
      kBase + 0x10u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CMD_RSP0_fields_::CMDRSP0> {
    using CMDRSP0 = typename CMD_RSP0_fields_::CMDRSP0;
  };

  // Command Response1
  struct CMD_RSP1_fields_ {
    // Command response 1
    using CMDRSP1 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CMD_RSP1_fields_

  struct CMD_RSP1 : ftl::mmio::Register<
      kBase + 0x14u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CMD_RSP1_fields_::CMDRSP1> {
    using CMDRSP1 = typename CMD_RSP1_fields_::CMDRSP1;
  };

  // Command Response2
  struct CMD_RSP2_fields_ {
    // Command response 2
    using CMDRSP2 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CMD_RSP2_fields_

  struct CMD_RSP2 : ftl::mmio::Register<
      kBase + 0x18u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CMD_RSP2_fields_::CMDRSP2> {
    using CMDRSP2 = typename CMD_RSP2_fields_::CMDRSP2;
  };

  // Command Response3
  struct CMD_RSP3_fields_ {
    // Command response 3
    using CMDRSP3 = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct CMD_RSP3_fields_

  struct CMD_RSP3 : ftl::mmio::Register<
      kBase + 0x1Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename CMD_RSP3_fields_::CMDRSP3> {
    using CMDRSP3 = typename CMD_RSP3_fields_::CMDRSP3;
  };

  // Data Buffer Access Port
  struct DATA_BUFF_ACC_PORT_fields_ {
    // Data content
    using DATCONT = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DATA_BUFF_ACC_PORT_fields_

  struct DATA_BUFF_ACC_PORT : ftl::mmio::Register<
      kBase + 0x20u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DATA_BUFF_ACC_PORT_fields_::DATCONT> {
    using DATCONT = typename DATA_BUFF_ACC_PORT_fields_::DATCONT;
  };

  // Present State
  struct PRES_STATE_fields_ {
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
  };  // struct PRES_STATE_fields_

  struct PRES_STATE : ftl::mmio::Register<
      kBase + 0x24u,
      std::uint32_t,
      0x00008080u,
      ftl::mmio::RO,
      typename PRES_STATE_fields_::CIHB,
      typename PRES_STATE_fields_::CDIHB,
      typename PRES_STATE_fields_::DLA,
      typename PRES_STATE_fields_::SDSTB,
      typename PRES_STATE_fields_::IPGOFF,
      typename PRES_STATE_fields_::HCKOFF,
      typename PRES_STATE_fields_::PEROFF,
      typename PRES_STATE_fields_::SDOFF,
      typename PRES_STATE_fields_::WTA,
      typename PRES_STATE_fields_::RTA,
      typename PRES_STATE_fields_::BWEN,
      typename PRES_STATE_fields_::BREN,
      typename PRES_STATE_fields_::RTR,
      ftl::mmio::Reserved<2, 13>,
      typename PRES_STATE_fields_::TSCD,
      typename PRES_STATE_fields_::CINST,
      ftl::mmio::Reserved<1, 17>,
      typename PRES_STATE_fields_::CDPL,
      typename PRES_STATE_fields_::WPSPL,
      ftl::mmio::Reserved<3, 20>,
      typename PRES_STATE_fields_::CLSL,
      typename PRES_STATE_fields_::DLSL> {
    using eCIHB = typename PRES_STATE_fields_::eCIHB;
    using eCDIHB = typename PRES_STATE_fields_::eCDIHB;
    using eDLA = typename PRES_STATE_fields_::eDLA;
    using eSDSTB = typename PRES_STATE_fields_::eSDSTB;
    using eIPGOFF = typename PRES_STATE_fields_::eIPGOFF;
    using eHCKOFF = typename PRES_STATE_fields_::eHCKOFF;
    using ePEROFF = typename PRES_STATE_fields_::ePEROFF;
    using eSDOFF = typename PRES_STATE_fields_::eSDOFF;
    using eWTA = typename PRES_STATE_fields_::eWTA;
    using eRTA = typename PRES_STATE_fields_::eRTA;
    using eBWEN = typename PRES_STATE_fields_::eBWEN;
    using eBREN = typename PRES_STATE_fields_::eBREN;
    using eRTR = typename PRES_STATE_fields_::eRTR;
    using eTSCD = typename PRES_STATE_fields_::eTSCD;
    using eCINST = typename PRES_STATE_fields_::eCINST;
    using eCDPL = typename PRES_STATE_fields_::eCDPL;
    using eWPSPL = typename PRES_STATE_fields_::eWPSPL;
    using eDLSL = typename PRES_STATE_fields_::eDLSL;
    using CIHB = typename PRES_STATE_fields_::CIHB;
    using CDIHB = typename PRES_STATE_fields_::CDIHB;
    using DLA = typename PRES_STATE_fields_::DLA;
    using SDSTB = typename PRES_STATE_fields_::SDSTB;
    using IPGOFF = typename PRES_STATE_fields_::IPGOFF;
    using HCKOFF = typename PRES_STATE_fields_::HCKOFF;
    using PEROFF = typename PRES_STATE_fields_::PEROFF;
    using SDOFF = typename PRES_STATE_fields_::SDOFF;
    using WTA = typename PRES_STATE_fields_::WTA;
    using RTA = typename PRES_STATE_fields_::RTA;
    using BWEN = typename PRES_STATE_fields_::BWEN;
    using BREN = typename PRES_STATE_fields_::BREN;
    using RTR = typename PRES_STATE_fields_::RTR;
    using TSCD = typename PRES_STATE_fields_::TSCD;
    using CINST = typename PRES_STATE_fields_::CINST;
    using CDPL = typename PRES_STATE_fields_::CDPL;
    using WPSPL = typename PRES_STATE_fields_::WPSPL;
    using CLSL = typename PRES_STATE_fields_::CLSL;
    using DLSL = typename PRES_STATE_fields_::DLSL;
  };

  // Protocol Control
  struct PROT_CTRL_fields_ {
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
  };  // struct PROT_CTRL_fields_

  struct PROT_CTRL : ftl::mmio::Register<
      kBase + 0x28u,
      std::uint32_t,
      0x08800020u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename PROT_CTRL_fields_::DTW,
      typename PROT_CTRL_fields_::D3CD,
      typename PROT_CTRL_fields_::EMODE,
      typename PROT_CTRL_fields_::CDTL,
      typename PROT_CTRL_fields_::CDSS,
      typename PROT_CTRL_fields_::DMASEL,
      ftl::mmio::Reserved<6, 10>,
      typename PROT_CTRL_fields_::SABGREQ,
      typename PROT_CTRL_fields_::CREQ,
      typename PROT_CTRL_fields_::RWCTL,
      typename PROT_CTRL_fields_::IABG,
      typename PROT_CTRL_fields_::RD_DONE_NO_8CLK,
      ftl::mmio::Reserved<3, 21>,
      typename PROT_CTRL_fields_::WECINT,
      typename PROT_CTRL_fields_::WECINS,
      typename PROT_CTRL_fields_::WECRM,
      ftl::mmio::Reserved<3, 27>,
      typename PROT_CTRL_fields_::NON_EXACT_BLK_RD,
      ftl::mmio::Reserved<1, 31>> {
    using eDTW = typename PROT_CTRL_fields_::eDTW;
    using eD3CD = typename PROT_CTRL_fields_::eD3CD;
    using eEMODE = typename PROT_CTRL_fields_::eEMODE;
    using eCDTL = typename PROT_CTRL_fields_::eCDTL;
    using eCDSS = typename PROT_CTRL_fields_::eCDSS;
    using eDMASEL = typename PROT_CTRL_fields_::eDMASEL;
    using eSABGREQ = typename PROT_CTRL_fields_::eSABGREQ;
    using eCREQ = typename PROT_CTRL_fields_::eCREQ;
    using eRWCTL = typename PROT_CTRL_fields_::eRWCTL;
    using eIABG = typename PROT_CTRL_fields_::eIABG;
    using eWECINT = typename PROT_CTRL_fields_::eWECINT;
    using eWECINS = typename PROT_CTRL_fields_::eWECINS;
    using eWECRM = typename PROT_CTRL_fields_::eWECRM;
    using eNON_EXACT_BLK_RD = typename PROT_CTRL_fields_::eNON_EXACT_BLK_RD;
    using DTW = typename PROT_CTRL_fields_::DTW;
    using D3CD = typename PROT_CTRL_fields_::D3CD;
    using EMODE = typename PROT_CTRL_fields_::EMODE;
    using CDTL = typename PROT_CTRL_fields_::CDTL;
    using CDSS = typename PROT_CTRL_fields_::CDSS;
    using DMASEL = typename PROT_CTRL_fields_::DMASEL;
    using SABGREQ = typename PROT_CTRL_fields_::SABGREQ;
    using CREQ = typename PROT_CTRL_fields_::CREQ;
    using RWCTL = typename PROT_CTRL_fields_::RWCTL;
    using IABG = typename PROT_CTRL_fields_::IABG;
    using RD_DONE_NO_8CLK = typename PROT_CTRL_fields_::RD_DONE_NO_8CLK;
    using WECINT = typename PROT_CTRL_fields_::WECINT;
    using WECINS = typename PROT_CTRL_fields_::WECINS;
    using WECRM = typename PROT_CTRL_fields_::WECRM;
    using NON_EXACT_BLK_RD = typename PROT_CTRL_fields_::NON_EXACT_BLK_RD;
  };

  // System Control
  struct SYS_CTRL_fields_ {
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
  };  // struct SYS_CTRL_fields_

  struct SYS_CTRL : ftl::mmio::Register<
      kBase + 0x2Cu,
      std::uint32_t,
      0x0080800Fu,
      ftl::mmio::RW,
      ftl::mmio::Reserved<4, 0>,
      typename SYS_CTRL_fields_::DVS,
      typename SYS_CTRL_fields_::SDCLKFS,
      typename SYS_CTRL_fields_::DTOCV,
      ftl::mmio::Reserved<3, 20>,
      typename SYS_CTRL_fields_::IPP_RST_N,
      typename SYS_CTRL_fields_::RSTA,
      typename SYS_CTRL_fields_::RSTC,
      typename SYS_CTRL_fields_::RSTD,
      typename SYS_CTRL_fields_::INITA,
      typename SYS_CTRL_fields_::RSTT,
      ftl::mmio::Reserved<3, 29>> {
    using eDVS = typename SYS_CTRL_fields_::eDVS;
    using eDTOCV = typename SYS_CTRL_fields_::eDTOCV;
    using eRSTA = typename SYS_CTRL_fields_::eRSTA;
    using eRSTC = typename SYS_CTRL_fields_::eRSTC;
    using eRSTD = typename SYS_CTRL_fields_::eRSTD;
    using DVS = typename SYS_CTRL_fields_::DVS;
    using SDCLKFS = typename SYS_CTRL_fields_::SDCLKFS;
    using DTOCV = typename SYS_CTRL_fields_::DTOCV;
    using IPP_RST_N = typename SYS_CTRL_fields_::IPP_RST_N;
    using RSTA = typename SYS_CTRL_fields_::RSTA;
    using RSTC = typename SYS_CTRL_fields_::RSTC;
    using RSTD = typename SYS_CTRL_fields_::RSTD;
    using INITA = typename SYS_CTRL_fields_::INITA;
    using RSTT = typename SYS_CTRL_fields_::RSTT;
  };

  // Interrupt Status
  struct INT_STATUS_fields_ {
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
  };  // struct INT_STATUS_fields_

  struct INT_STATUS : ftl::mmio::Register<
      kBase + 0x30u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename INT_STATUS_fields_::CC,
      typename INT_STATUS_fields_::TC,
      typename INT_STATUS_fields_::BGE,
      typename INT_STATUS_fields_::DINT,
      typename INT_STATUS_fields_::BWR,
      typename INT_STATUS_fields_::BRR,
      typename INT_STATUS_fields_::CINS,
      typename INT_STATUS_fields_::CRM,
      typename INT_STATUS_fields_::CINT,
      ftl::mmio::Reserved<3, 9>,
      typename INT_STATUS_fields_::RTE,
      ftl::mmio::Reserved<1, 13>,
      typename INT_STATUS_fields_::TP,
      ftl::mmio::Reserved<1, 15>,
      typename INT_STATUS_fields_::CTOE,
      typename INT_STATUS_fields_::CCE,
      typename INT_STATUS_fields_::CEBE,
      typename INT_STATUS_fields_::CIE,
      typename INT_STATUS_fields_::DTOE,
      typename INT_STATUS_fields_::DCE,
      typename INT_STATUS_fields_::DEBE,
      ftl::mmio::Reserved<1, 23>,
      typename INT_STATUS_fields_::AC12E,
      ftl::mmio::Reserved<1, 25>,
      typename INT_STATUS_fields_::TNE,
      ftl::mmio::Reserved<1, 27>,
      typename INT_STATUS_fields_::DMAE,
      ftl::mmio::Reserved<3, 29>> {
    using eCC = typename INT_STATUS_fields_::eCC;
    using eTC = typename INT_STATUS_fields_::eTC;
    using eBGE = typename INT_STATUS_fields_::eBGE;
    using eDINT = typename INT_STATUS_fields_::eDINT;
    using eBWR = typename INT_STATUS_fields_::eBWR;
    using eBRR = typename INT_STATUS_fields_::eBRR;
    using eCINS = typename INT_STATUS_fields_::eCINS;
    using eCRM = typename INT_STATUS_fields_::eCRM;
    using eCINT = typename INT_STATUS_fields_::eCINT;
    using eRTE = typename INT_STATUS_fields_::eRTE;
    using eCTOE = typename INT_STATUS_fields_::eCTOE;
    using eCCE = typename INT_STATUS_fields_::eCCE;
    using eCEBE = typename INT_STATUS_fields_::eCEBE;
    using eCIE = typename INT_STATUS_fields_::eCIE;
    using eDTOE = typename INT_STATUS_fields_::eDTOE;
    using eDCE = typename INT_STATUS_fields_::eDCE;
    using eDEBE = typename INT_STATUS_fields_::eDEBE;
    using eAC12E = typename INT_STATUS_fields_::eAC12E;
    using eDMAE = typename INT_STATUS_fields_::eDMAE;
    using CC = typename INT_STATUS_fields_::CC;
    using TC = typename INT_STATUS_fields_::TC;
    using BGE = typename INT_STATUS_fields_::BGE;
    using DINT = typename INT_STATUS_fields_::DINT;
    using BWR = typename INT_STATUS_fields_::BWR;
    using BRR = typename INT_STATUS_fields_::BRR;
    using CINS = typename INT_STATUS_fields_::CINS;
    using CRM = typename INT_STATUS_fields_::CRM;
    using CINT = typename INT_STATUS_fields_::CINT;
    using RTE = typename INT_STATUS_fields_::RTE;
    using TP = typename INT_STATUS_fields_::TP;
    using CTOE = typename INT_STATUS_fields_::CTOE;
    using CCE = typename INT_STATUS_fields_::CCE;
    using CEBE = typename INT_STATUS_fields_::CEBE;
    using CIE = typename INT_STATUS_fields_::CIE;
    using DTOE = typename INT_STATUS_fields_::DTOE;
    using DCE = typename INT_STATUS_fields_::DCE;
    using DEBE = typename INT_STATUS_fields_::DEBE;
    using AC12E = typename INT_STATUS_fields_::AC12E;
    using TNE = typename INT_STATUS_fields_::TNE;
    using DMAE = typename INT_STATUS_fields_::DMAE;
  };

  // Interrupt Status Enable
  struct INT_STATUS_EN_fields_ {
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
  };  // struct INT_STATUS_EN_fields_

  struct INT_STATUS_EN : ftl::mmio::Register<
      kBase + 0x34u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename INT_STATUS_EN_fields_::CCSEN,
      typename INT_STATUS_EN_fields_::TCSEN,
      typename INT_STATUS_EN_fields_::BGESEN,
      typename INT_STATUS_EN_fields_::DINTSEN,
      typename INT_STATUS_EN_fields_::BWRSEN,
      typename INT_STATUS_EN_fields_::BRRSEN,
      typename INT_STATUS_EN_fields_::CINSSEN,
      typename INT_STATUS_EN_fields_::CRMSEN,
      typename INT_STATUS_EN_fields_::CINTSEN,
      ftl::mmio::Reserved<3, 9>,
      typename INT_STATUS_EN_fields_::RTESEN,
      ftl::mmio::Reserved<1, 13>,
      typename INT_STATUS_EN_fields_::TPSEN,
      ftl::mmio::Reserved<1, 15>,
      typename INT_STATUS_EN_fields_::CTOESEN,
      typename INT_STATUS_EN_fields_::CCESEN,
      typename INT_STATUS_EN_fields_::CEBESEN,
      typename INT_STATUS_EN_fields_::CIESEN,
      typename INT_STATUS_EN_fields_::DTOESEN,
      typename INT_STATUS_EN_fields_::DCESEN,
      typename INT_STATUS_EN_fields_::DEBESEN,
      ftl::mmio::Reserved<1, 23>,
      typename INT_STATUS_EN_fields_::AC12ESEN,
      ftl::mmio::Reserved<1, 25>,
      typename INT_STATUS_EN_fields_::TNESEN,
      ftl::mmio::Reserved<1, 27>,
      typename INT_STATUS_EN_fields_::DMAESEN,
      ftl::mmio::Reserved<3, 29>> {
    using eCCSEN = typename INT_STATUS_EN_fields_::eCCSEN;
    using eTCSEN = typename INT_STATUS_EN_fields_::eTCSEN;
    using eBGESEN = typename INT_STATUS_EN_fields_::eBGESEN;
    using eDINTSEN = typename INT_STATUS_EN_fields_::eDINTSEN;
    using eBWRSEN = typename INT_STATUS_EN_fields_::eBWRSEN;
    using eBRRSEN = typename INT_STATUS_EN_fields_::eBRRSEN;
    using eCINSSEN = typename INT_STATUS_EN_fields_::eCINSSEN;
    using eCRMSEN = typename INT_STATUS_EN_fields_::eCRMSEN;
    using eCINTSEN = typename INT_STATUS_EN_fields_::eCINTSEN;
    using eRTESEN = typename INT_STATUS_EN_fields_::eRTESEN;
    using eTPSEN = typename INT_STATUS_EN_fields_::eTPSEN;
    using eCTOESEN = typename INT_STATUS_EN_fields_::eCTOESEN;
    using eCCESEN = typename INT_STATUS_EN_fields_::eCCESEN;
    using eCEBESEN = typename INT_STATUS_EN_fields_::eCEBESEN;
    using eCIESEN = typename INT_STATUS_EN_fields_::eCIESEN;
    using eDTOESEN = typename INT_STATUS_EN_fields_::eDTOESEN;
    using eDCESEN = typename INT_STATUS_EN_fields_::eDCESEN;
    using eDEBESEN = typename INT_STATUS_EN_fields_::eDEBESEN;
    using eAC12ESEN = typename INT_STATUS_EN_fields_::eAC12ESEN;
    using eTNESEN = typename INT_STATUS_EN_fields_::eTNESEN;
    using eDMAESEN = typename INT_STATUS_EN_fields_::eDMAESEN;
    using CCSEN = typename INT_STATUS_EN_fields_::CCSEN;
    using TCSEN = typename INT_STATUS_EN_fields_::TCSEN;
    using BGESEN = typename INT_STATUS_EN_fields_::BGESEN;
    using DINTSEN = typename INT_STATUS_EN_fields_::DINTSEN;
    using BWRSEN = typename INT_STATUS_EN_fields_::BWRSEN;
    using BRRSEN = typename INT_STATUS_EN_fields_::BRRSEN;
    using CINSSEN = typename INT_STATUS_EN_fields_::CINSSEN;
    using CRMSEN = typename INT_STATUS_EN_fields_::CRMSEN;
    using CINTSEN = typename INT_STATUS_EN_fields_::CINTSEN;
    using RTESEN = typename INT_STATUS_EN_fields_::RTESEN;
    using TPSEN = typename INT_STATUS_EN_fields_::TPSEN;
    using CTOESEN = typename INT_STATUS_EN_fields_::CTOESEN;
    using CCESEN = typename INT_STATUS_EN_fields_::CCESEN;
    using CEBESEN = typename INT_STATUS_EN_fields_::CEBESEN;
    using CIESEN = typename INT_STATUS_EN_fields_::CIESEN;
    using DTOESEN = typename INT_STATUS_EN_fields_::DTOESEN;
    using DCESEN = typename INT_STATUS_EN_fields_::DCESEN;
    using DEBESEN = typename INT_STATUS_EN_fields_::DEBESEN;
    using AC12ESEN = typename INT_STATUS_EN_fields_::AC12ESEN;
    using TNESEN = typename INT_STATUS_EN_fields_::TNESEN;
    using DMAESEN = typename INT_STATUS_EN_fields_::DMAESEN;
  };

  // Interrupt Signal Enable
  struct INT_SIGNAL_EN_fields_ {
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
  };  // struct INT_SIGNAL_EN_fields_

  struct INT_SIGNAL_EN : ftl::mmio::Register<
      kBase + 0x38u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename INT_SIGNAL_EN_fields_::CCIEN,
      typename INT_SIGNAL_EN_fields_::TCIEN,
      typename INT_SIGNAL_EN_fields_::BGEIEN,
      typename INT_SIGNAL_EN_fields_::DINTIEN,
      typename INT_SIGNAL_EN_fields_::BWRIEN,
      typename INT_SIGNAL_EN_fields_::BRRIEN,
      typename INT_SIGNAL_EN_fields_::CINSIEN,
      typename INT_SIGNAL_EN_fields_::CRMIEN,
      typename INT_SIGNAL_EN_fields_::CINTIEN,
      ftl::mmio::Reserved<3, 9>,
      typename INT_SIGNAL_EN_fields_::RTEIEN,
      ftl::mmio::Reserved<1, 13>,
      typename INT_SIGNAL_EN_fields_::TPIEN,
      ftl::mmio::Reserved<1, 15>,
      typename INT_SIGNAL_EN_fields_::CTOEIEN,
      typename INT_SIGNAL_EN_fields_::CCEIEN,
      typename INT_SIGNAL_EN_fields_::CEBEIEN,
      typename INT_SIGNAL_EN_fields_::CIEIEN,
      typename INT_SIGNAL_EN_fields_::DTOEIEN,
      typename INT_SIGNAL_EN_fields_::DCEIEN,
      typename INT_SIGNAL_EN_fields_::DEBEIEN,
      ftl::mmio::Reserved<1, 23>,
      typename INT_SIGNAL_EN_fields_::AC12EIEN,
      ftl::mmio::Reserved<1, 25>,
      typename INT_SIGNAL_EN_fields_::TNEIEN,
      ftl::mmio::Reserved<1, 27>,
      typename INT_SIGNAL_EN_fields_::DMAEIEN,
      ftl::mmio::Reserved<3, 29>> {
    using eCCIEN = typename INT_SIGNAL_EN_fields_::eCCIEN;
    using eTCIEN = typename INT_SIGNAL_EN_fields_::eTCIEN;
    using eBGEIEN = typename INT_SIGNAL_EN_fields_::eBGEIEN;
    using eDINTIEN = typename INT_SIGNAL_EN_fields_::eDINTIEN;
    using eBWRIEN = typename INT_SIGNAL_EN_fields_::eBWRIEN;
    using eBRRIEN = typename INT_SIGNAL_EN_fields_::eBRRIEN;
    using eCINSIEN = typename INT_SIGNAL_EN_fields_::eCINSIEN;
    using eCRMIEN = typename INT_SIGNAL_EN_fields_::eCRMIEN;
    using eCINTIEN = typename INT_SIGNAL_EN_fields_::eCINTIEN;
    using eRTEIEN = typename INT_SIGNAL_EN_fields_::eRTEIEN;
    using eTPIEN = typename INT_SIGNAL_EN_fields_::eTPIEN;
    using eCTOEIEN = typename INT_SIGNAL_EN_fields_::eCTOEIEN;
    using eCCEIEN = typename INT_SIGNAL_EN_fields_::eCCEIEN;
    using eCEBEIEN = typename INT_SIGNAL_EN_fields_::eCEBEIEN;
    using eCIEIEN = typename INT_SIGNAL_EN_fields_::eCIEIEN;
    using eDTOEIEN = typename INT_SIGNAL_EN_fields_::eDTOEIEN;
    using eDCEIEN = typename INT_SIGNAL_EN_fields_::eDCEIEN;
    using eDEBEIEN = typename INT_SIGNAL_EN_fields_::eDEBEIEN;
    using eAC12EIEN = typename INT_SIGNAL_EN_fields_::eAC12EIEN;
    using eTNEIEN = typename INT_SIGNAL_EN_fields_::eTNEIEN;
    using eDMAEIEN = typename INT_SIGNAL_EN_fields_::eDMAEIEN;
    using CCIEN = typename INT_SIGNAL_EN_fields_::CCIEN;
    using TCIEN = typename INT_SIGNAL_EN_fields_::TCIEN;
    using BGEIEN = typename INT_SIGNAL_EN_fields_::BGEIEN;
    using DINTIEN = typename INT_SIGNAL_EN_fields_::DINTIEN;
    using BWRIEN = typename INT_SIGNAL_EN_fields_::BWRIEN;
    using BRRIEN = typename INT_SIGNAL_EN_fields_::BRRIEN;
    using CINSIEN = typename INT_SIGNAL_EN_fields_::CINSIEN;
    using CRMIEN = typename INT_SIGNAL_EN_fields_::CRMIEN;
    using CINTIEN = typename INT_SIGNAL_EN_fields_::CINTIEN;
    using RTEIEN = typename INT_SIGNAL_EN_fields_::RTEIEN;
    using TPIEN = typename INT_SIGNAL_EN_fields_::TPIEN;
    using CTOEIEN = typename INT_SIGNAL_EN_fields_::CTOEIEN;
    using CCEIEN = typename INT_SIGNAL_EN_fields_::CCEIEN;
    using CEBEIEN = typename INT_SIGNAL_EN_fields_::CEBEIEN;
    using CIEIEN = typename INT_SIGNAL_EN_fields_::CIEIEN;
    using DTOEIEN = typename INT_SIGNAL_EN_fields_::DTOEIEN;
    using DCEIEN = typename INT_SIGNAL_EN_fields_::DCEIEN;
    using DEBEIEN = typename INT_SIGNAL_EN_fields_::DEBEIEN;
    using AC12EIEN = typename INT_SIGNAL_EN_fields_::AC12EIEN;
    using TNEIEN = typename INT_SIGNAL_EN_fields_::TNEIEN;
    using DMAEIEN = typename INT_SIGNAL_EN_fields_::DMAEIEN;
  };

  // Auto CMD12 Error Status
  struct AUTOCMD12_ERR_STATUS_fields_ {
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
  };  // struct AUTOCMD12_ERR_STATUS_fields_

  struct AUTOCMD12_ERR_STATUS : ftl::mmio::Register<
      kBase + 0x3Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename AUTOCMD12_ERR_STATUS_fields_::AC12NE,
      typename AUTOCMD12_ERR_STATUS_fields_::AC12TOE,
      typename AUTOCMD12_ERR_STATUS_fields_::AC12EBE,
      typename AUTOCMD12_ERR_STATUS_fields_::AC12CE,
      typename AUTOCMD12_ERR_STATUS_fields_::AC12IE,
      ftl::mmio::Reserved<2, 5>,
      typename AUTOCMD12_ERR_STATUS_fields_::CNIBAC12E,
      ftl::mmio::Reserved<14, 8>,
      typename AUTOCMD12_ERR_STATUS_fields_::EXECUTE_TUNING,
      typename AUTOCMD12_ERR_STATUS_fields_::SMP_CLK_SEL,
      ftl::mmio::Reserved<8, 24>> {
    using eAC12NE = typename AUTOCMD12_ERR_STATUS_fields_::eAC12NE;
    using eAC12TOE = typename AUTOCMD12_ERR_STATUS_fields_::eAC12TOE;
    using eAC12EBE = typename AUTOCMD12_ERR_STATUS_fields_::eAC12EBE;
    using eAC12CE = typename AUTOCMD12_ERR_STATUS_fields_::eAC12CE;
    using eAC12IE = typename AUTOCMD12_ERR_STATUS_fields_::eAC12IE;
    using eCNIBAC12E = typename AUTOCMD12_ERR_STATUS_fields_::eCNIBAC12E;
    using eEXECUTE_TUNING = typename AUTOCMD12_ERR_STATUS_fields_::eEXECUTE_TUNING;
    using eSMP_CLK_SEL = typename AUTOCMD12_ERR_STATUS_fields_::eSMP_CLK_SEL;
    using AC12NE = typename AUTOCMD12_ERR_STATUS_fields_::AC12NE;
    using AC12TOE = typename AUTOCMD12_ERR_STATUS_fields_::AC12TOE;
    using AC12EBE = typename AUTOCMD12_ERR_STATUS_fields_::AC12EBE;
    using AC12CE = typename AUTOCMD12_ERR_STATUS_fields_::AC12CE;
    using AC12IE = typename AUTOCMD12_ERR_STATUS_fields_::AC12IE;
    using CNIBAC12E = typename AUTOCMD12_ERR_STATUS_fields_::CNIBAC12E;
    using EXECUTE_TUNING = typename AUTOCMD12_ERR_STATUS_fields_::EXECUTE_TUNING;
    using SMP_CLK_SEL = typename AUTOCMD12_ERR_STATUS_fields_::SMP_CLK_SEL;
  };

  // Host Controller Capabilities
  struct HOST_CTRL_CAP_fields_ {
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
  };  // struct HOST_CTRL_CAP_fields_

  struct HOST_CTRL_CAP : ftl::mmio::Register<
      kBase + 0x40u,
      std::uint32_t,
      0x07F3B407u,
      ftl::mmio::RW,
      typename HOST_CTRL_CAP_fields_::SDR50_SUPPORT,
      typename HOST_CTRL_CAP_fields_::SDR104_SUPPORT,
      typename HOST_CTRL_CAP_fields_::DDR50_SUPPORT,
      ftl::mmio::Reserved<10, 3>,
      typename HOST_CTRL_CAP_fields_::USE_TUNING_SDR50,
      ftl::mmio::Reserved<2, 14>,
      typename HOST_CTRL_CAP_fields_::MBL,
      ftl::mmio::Reserved<1, 19>,
      typename HOST_CTRL_CAP_fields_::ADMAS,
      typename HOST_CTRL_CAP_fields_::HSS,
      typename HOST_CTRL_CAP_fields_::DMAS,
      typename HOST_CTRL_CAP_fields_::SRS,
      typename HOST_CTRL_CAP_fields_::VS33,
      typename HOST_CTRL_CAP_fields_::VS30,
      typename HOST_CTRL_CAP_fields_::VS18,
      ftl::mmio::Reserved<5, 27>> {
    using eUSE_TUNING_SDR50 = typename HOST_CTRL_CAP_fields_::eUSE_TUNING_SDR50;
    using eMBL = typename HOST_CTRL_CAP_fields_::eMBL;
    using eADMAS = typename HOST_CTRL_CAP_fields_::eADMAS;
    using eHSS = typename HOST_CTRL_CAP_fields_::eHSS;
    using eDMAS = typename HOST_CTRL_CAP_fields_::eDMAS;
    using eSRS = typename HOST_CTRL_CAP_fields_::eSRS;
    using eVS33 = typename HOST_CTRL_CAP_fields_::eVS33;
    using eVS30 = typename HOST_CTRL_CAP_fields_::eVS30;
    using eVS18 = typename HOST_CTRL_CAP_fields_::eVS18;
    using SDR50_SUPPORT = typename HOST_CTRL_CAP_fields_::SDR50_SUPPORT;
    using SDR104_SUPPORT = typename HOST_CTRL_CAP_fields_::SDR104_SUPPORT;
    using DDR50_SUPPORT = typename HOST_CTRL_CAP_fields_::DDR50_SUPPORT;
    using USE_TUNING_SDR50 = typename HOST_CTRL_CAP_fields_::USE_TUNING_SDR50;
    using MBL = typename HOST_CTRL_CAP_fields_::MBL;
    using ADMAS = typename HOST_CTRL_CAP_fields_::ADMAS;
    using HSS = typename HOST_CTRL_CAP_fields_::HSS;
    using DMAS = typename HOST_CTRL_CAP_fields_::DMAS;
    using SRS = typename HOST_CTRL_CAP_fields_::SRS;
    using VS33 = typename HOST_CTRL_CAP_fields_::VS33;
    using VS30 = typename HOST_CTRL_CAP_fields_::VS30;
    using VS18 = typename HOST_CTRL_CAP_fields_::VS18;
  };

  // Watermark Level
  struct WTMK_LVL_fields_ {
    // Read watermark level
    using RD_WML = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write watermark level
    using WR_WML = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct WTMK_LVL_fields_

  struct WTMK_LVL : ftl::mmio::Register<
      kBase + 0x44u,
      std::uint32_t,
      0x08100810u,
      ftl::mmio::RW,
      typename WTMK_LVL_fields_::RD_WML,
      ftl::mmio::Reserved<8, 8>,
      typename WTMK_LVL_fields_::WR_WML,
      ftl::mmio::Reserved<8, 24>> {
    using RD_WML = typename WTMK_LVL_fields_::RD_WML;
    using WR_WML = typename WTMK_LVL_fields_::WR_WML;
  };

  // Mixer Control
  struct MIX_CTRL_fields_ {
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
  };  // struct MIX_CTRL_fields_

  struct MIX_CTRL : ftl::mmio::Register<
      kBase + 0x48u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      typename MIX_CTRL_fields_::DMAEN,
      typename MIX_CTRL_fields_::BCEN,
      typename MIX_CTRL_fields_::AC12EN,
      typename MIX_CTRL_fields_::DDR_EN,
      typename MIX_CTRL_fields_::DTDSEL,
      typename MIX_CTRL_fields_::MSBSEL,
      typename MIX_CTRL_fields_::NIBBLE_POS,
      typename MIX_CTRL_fields_::AC23EN,
      ftl::mmio::Reserved<14, 8>,
      typename MIX_CTRL_fields_::EXE_TUNE,
      typename MIX_CTRL_fields_::SMP_CLK_SEL,
      typename MIX_CTRL_fields_::AUTO_TUNE_EN,
      typename MIX_CTRL_fields_::FBCLK_SEL,
      typename MIX_CTRL_fields_::HS400_MODE,
      ftl::mmio::Reserved<5, 27>> {
    using eDMAEN = typename MIX_CTRL_fields_::eDMAEN;
    using eBCEN = typename MIX_CTRL_fields_::eBCEN;
    using eAC12EN = typename MIX_CTRL_fields_::eAC12EN;
    using eDTDSEL = typename MIX_CTRL_fields_::eDTDSEL;
    using eMSBSEL = typename MIX_CTRL_fields_::eMSBSEL;
    using eEXE_TUNE = typename MIX_CTRL_fields_::eEXE_TUNE;
    using eSMP_CLK_SEL = typename MIX_CTRL_fields_::eSMP_CLK_SEL;
    using eAUTO_TUNE_EN = typename MIX_CTRL_fields_::eAUTO_TUNE_EN;
    using eFBCLK_SEL = typename MIX_CTRL_fields_::eFBCLK_SEL;
    using DMAEN = typename MIX_CTRL_fields_::DMAEN;
    using BCEN = typename MIX_CTRL_fields_::BCEN;
    using AC12EN = typename MIX_CTRL_fields_::AC12EN;
    using DDR_EN = typename MIX_CTRL_fields_::DDR_EN;
    using DTDSEL = typename MIX_CTRL_fields_::DTDSEL;
    using MSBSEL = typename MIX_CTRL_fields_::MSBSEL;
    using NIBBLE_POS = typename MIX_CTRL_fields_::NIBBLE_POS;
    using AC23EN = typename MIX_CTRL_fields_::AC23EN;
    using EXE_TUNE = typename MIX_CTRL_fields_::EXE_TUNE;
    using SMP_CLK_SEL = typename MIX_CTRL_fields_::SMP_CLK_SEL;
    using AUTO_TUNE_EN = typename MIX_CTRL_fields_::AUTO_TUNE_EN;
    using FBCLK_SEL = typename MIX_CTRL_fields_::FBCLK_SEL;
    using HS400_MODE = typename MIX_CTRL_fields_::HS400_MODE;
  };

  // Force Event
  struct FORCE_EVENT_fields_ {
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
  };  // struct FORCE_EVENT_fields_

  struct FORCE_EVENT : ftl::mmio::Register<
      kBase + 0x50u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename FORCE_EVENT_fields_::FEVTAC12NE,
      typename FORCE_EVENT_fields_::FEVTAC12TOE,
      typename FORCE_EVENT_fields_::FEVTAC12CE,
      typename FORCE_EVENT_fields_::FEVTAC12EBE,
      typename FORCE_EVENT_fields_::FEVTAC12IE,
      ftl::mmio::Reserved<2, 5>,
      typename FORCE_EVENT_fields_::FEVTCNIBAC12E,
      ftl::mmio::Reserved<8, 8>,
      typename FORCE_EVENT_fields_::FEVTCTOE,
      typename FORCE_EVENT_fields_::FEVTCCE,
      typename FORCE_EVENT_fields_::FEVTCEBE,
      typename FORCE_EVENT_fields_::FEVTCIE,
      typename FORCE_EVENT_fields_::FEVTDTOE,
      typename FORCE_EVENT_fields_::FEVTDCE,
      typename FORCE_EVENT_fields_::FEVTDEBE,
      ftl::mmio::Reserved<1, 23>,
      typename FORCE_EVENT_fields_::FEVTAC12E,
      ftl::mmio::Reserved<1, 25>,
      typename FORCE_EVENT_fields_::FEVTTNE,
      ftl::mmio::Reserved<1, 27>,
      typename FORCE_EVENT_fields_::FEVTDMAE,
      ftl::mmio::Reserved<2, 29>,
      typename FORCE_EVENT_fields_::FEVTCINT> {
    using FEVTAC12NE = typename FORCE_EVENT_fields_::FEVTAC12NE;
    using FEVTAC12TOE = typename FORCE_EVENT_fields_::FEVTAC12TOE;
    using FEVTAC12CE = typename FORCE_EVENT_fields_::FEVTAC12CE;
    using FEVTAC12EBE = typename FORCE_EVENT_fields_::FEVTAC12EBE;
    using FEVTAC12IE = typename FORCE_EVENT_fields_::FEVTAC12IE;
    using FEVTCNIBAC12E = typename FORCE_EVENT_fields_::FEVTCNIBAC12E;
    using FEVTCTOE = typename FORCE_EVENT_fields_::FEVTCTOE;
    using FEVTCCE = typename FORCE_EVENT_fields_::FEVTCCE;
    using FEVTCEBE = typename FORCE_EVENT_fields_::FEVTCEBE;
    using FEVTCIE = typename FORCE_EVENT_fields_::FEVTCIE;
    using FEVTDTOE = typename FORCE_EVENT_fields_::FEVTDTOE;
    using FEVTDCE = typename FORCE_EVENT_fields_::FEVTDCE;
    using FEVTDEBE = typename FORCE_EVENT_fields_::FEVTDEBE;
    using FEVTAC12E = typename FORCE_EVENT_fields_::FEVTAC12E;
    using FEVTTNE = typename FORCE_EVENT_fields_::FEVTTNE;
    using FEVTDMAE = typename FORCE_EVENT_fields_::FEVTDMAE;
    using FEVTCINT = typename FORCE_EVENT_fields_::FEVTCINT;
  };

  // ADMA Error Status
  struct ADMA_ERR_STATUS_fields_ {
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
  };  // struct ADMA_ERR_STATUS_fields_

  struct ADMA_ERR_STATUS : ftl::mmio::Register<
      kBase + 0x54u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      typename ADMA_ERR_STATUS_fields_::ADMAES,
      typename ADMA_ERR_STATUS_fields_::ADMALME,
      typename ADMA_ERR_STATUS_fields_::ADMADCE,
      ftl::mmio::Reserved<28, 4>> {
    using eADMALME = typename ADMA_ERR_STATUS_fields_::eADMALME;
    using eADMADCE = typename ADMA_ERR_STATUS_fields_::eADMADCE;
    using ADMAES = typename ADMA_ERR_STATUS_fields_::ADMAES;
    using ADMALME = typename ADMA_ERR_STATUS_fields_::ADMALME;
    using ADMADCE = typename ADMA_ERR_STATUS_fields_::ADMADCE;
  };

  // ADMA System Address
  struct ADMA_SYS_ADDR_fields_ {
    // ADMA system address
    using ADS_ADDR = ftl::mmio::Field<30, 2, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ADMA_SYS_ADDR_fields_

  struct ADMA_SYS_ADDR : ftl::mmio::Register<
      kBase + 0x58u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<2, 0>,
      typename ADMA_SYS_ADDR_fields_::ADS_ADDR> {
    using ADS_ADDR = typename ADMA_SYS_ADDR_fields_::ADS_ADDR;
  };

  // DLL (Delay Line) Control
  struct DLL_CTRL_fields_ {
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
  };  // struct DLL_CTRL_fields_

  struct DLL_CTRL : ftl::mmio::Register<
      kBase + 0x60u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename DLL_CTRL_fields_::DLL_CTRL_ENABLE,
      typename DLL_CTRL_fields_::DLL_CTRL_RESET,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_FORCE_UPD,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_DLY_TARGET0,
      typename DLL_CTRL_fields_::DLL_CTRL_GATE_UPDATE,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_OVERRIDE,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_OVERRIDE_VAL,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_DLY_TARGET1,
      ftl::mmio::Reserved<1, 19>,
      typename DLL_CTRL_fields_::DLL_CTRL_SLV_UPDATE_INT,
      typename DLL_CTRL_fields_::DLL_CTRL_REF_UPDATE_INT> {
    using DLL_CTRL_ENABLE = typename DLL_CTRL_fields_::DLL_CTRL_ENABLE;
    using DLL_CTRL_RESET = typename DLL_CTRL_fields_::DLL_CTRL_RESET;
    using DLL_CTRL_SLV_FORCE_UPD = typename DLL_CTRL_fields_::DLL_CTRL_SLV_FORCE_UPD;
    using DLL_CTRL_SLV_DLY_TARGET0 = typename DLL_CTRL_fields_::DLL_CTRL_SLV_DLY_TARGET0;
    using DLL_CTRL_GATE_UPDATE = typename DLL_CTRL_fields_::DLL_CTRL_GATE_UPDATE;
    using DLL_CTRL_SLV_OVERRIDE = typename DLL_CTRL_fields_::DLL_CTRL_SLV_OVERRIDE;
    using DLL_CTRL_SLV_OVERRIDE_VAL = typename DLL_CTRL_fields_::DLL_CTRL_SLV_OVERRIDE_VAL;
    using DLL_CTRL_SLV_DLY_TARGET1 = typename DLL_CTRL_fields_::DLL_CTRL_SLV_DLY_TARGET1;
    using DLL_CTRL_SLV_UPDATE_INT = typename DLL_CTRL_fields_::DLL_CTRL_SLV_UPDATE_INT;
    using DLL_CTRL_REF_UPDATE_INT = typename DLL_CTRL_fields_::DLL_CTRL_REF_UPDATE_INT;
  };

  // DLL Status
  struct DLL_STATUS_fields_ {
    // Slave delay-line lock status
    using DLL_STS_SLV_LOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reference DLL lock status
    using DLL_STS_REF_LOCK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Slave delay line select status
    using DLL_STS_SLV_SEL = ftl::mmio::Field<7, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reference delay line select taps
    using DLL_STS_REF_SEL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct DLL_STATUS_fields_

  struct DLL_STATUS : ftl::mmio::Register<
      kBase + 0x64u,
      std::uint32_t,
      0x00000200u,
      ftl::mmio::RO,
      typename DLL_STATUS_fields_::DLL_STS_SLV_LOCK,
      typename DLL_STATUS_fields_::DLL_STS_REF_LOCK,
      typename DLL_STATUS_fields_::DLL_STS_SLV_SEL,
      typename DLL_STATUS_fields_::DLL_STS_REF_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using DLL_STS_SLV_LOCK = typename DLL_STATUS_fields_::DLL_STS_SLV_LOCK;
    using DLL_STS_REF_LOCK = typename DLL_STATUS_fields_::DLL_STS_REF_LOCK;
    using DLL_STS_SLV_SEL = typename DLL_STATUS_fields_::DLL_STS_SLV_SEL;
    using DLL_STS_REF_SEL = typename DLL_STATUS_fields_::DLL_STS_REF_SEL;
  };

  // CLK Tuning Control and Status
  struct CLK_TUNE_CTRL_STATUS_fields_ {
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
  };  // struct CLK_TUNE_CTRL_STATUS_fields_

  struct CLK_TUNE_CTRL_STATUS : ftl::mmio::Register<
      kBase + 0x68u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_POST,
      typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_OUT,
      typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_PRE,
      typename CLK_TUNE_CTRL_STATUS_fields_::NXT_ERR,
      typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_POST,
      typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_OUT,
      typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_PRE,
      typename CLK_TUNE_CTRL_STATUS_fields_::PRE_ERR> {
    using DLY_CELL_SET_POST = typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_POST;
    using DLY_CELL_SET_OUT = typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_OUT;
    using DLY_CELL_SET_PRE = typename CLK_TUNE_CTRL_STATUS_fields_::DLY_CELL_SET_PRE;
    using NXT_ERR = typename CLK_TUNE_CTRL_STATUS_fields_::NXT_ERR;
    using TAP_SEL_POST = typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_POST;
    using TAP_SEL_OUT = typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_OUT;
    using TAP_SEL_PRE = typename CLK_TUNE_CTRL_STATUS_fields_::TAP_SEL_PRE;
    using PRE_ERR = typename CLK_TUNE_CTRL_STATUS_fields_::PRE_ERR;
  };

  // Strobe DLL control
  struct STROBE_DLL_CTRL_fields_ {
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
  };  // struct STROBE_DLL_CTRL_fields_

  struct STROBE_DLL_CTRL : ftl::mmio::Register<
      kBase + 0x70u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_ENABLE,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_RESET,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_FORCE_UPD,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_DLY_TARGET,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_GATE_UPDATE,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_OVERRIDE,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_OVERRIDE_VAL,
      ftl::mmio::Reserved<4, 16>,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_UPDATE_INT,
      typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_REF_UPDATE_INT> {
    using STROBE_DLL_CTRL_ENABLE = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_ENABLE;
    using STROBE_DLL_CTRL_RESET = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_RESET;
    using STROBE_DLL_CTRL_SLV_FORCE_UPD = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_FORCE_UPD;
    using STROBE_DLL_CTRL_SLV_DLY_TARGET = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_DLY_TARGET;
    using STROBE_DLL_CTRL_GATE_UPDATE = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_GATE_UPDATE;
    using STROBE_DLL_CTRL_SLV_OVERRIDE = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_OVERRIDE;
    using STROBE_DLL_CTRL_SLV_OVERRIDE_VAL = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_OVERRIDE_VAL;
    using STROBE_DLL_CTRL_SLV_UPDATE_INT = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_SLV_UPDATE_INT;
    using STROBE_DLL_CTRL_REF_UPDATE_INT = typename STROBE_DLL_CTRL_fields_::STROBE_DLL_CTRL_REF_UPDATE_INT;
  };

  // Strobe DLL status
  struct STROBE_DLL_STATUS_fields_ {
    // Strobe DLL status slave lock
    using STROBE_DLL_STS_SLV_LOCK = ftl::mmio::Field<1, 0, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status reference lock
    using STROBE_DLL_STS_REF_LOCK = ftl::mmio::Field<1, 1, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status slave select
    using STROBE_DLL_STS_SLV_SEL = ftl::mmio::Field<7, 2, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Strobe DLL status reference select
    using STROBE_DLL_STS_REF_SEL = ftl::mmio::Field<7, 9, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct STROBE_DLL_STATUS_fields_

  struct STROBE_DLL_STATUS : ftl::mmio::Register<
      kBase + 0x74u,
      std::uint32_t,
      0x00000200u,
      ftl::mmio::RO,
      typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_SLV_LOCK,
      typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_REF_LOCK,
      typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_SLV_SEL,
      typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_REF_SEL,
      ftl::mmio::Reserved<16, 16>> {
    using STROBE_DLL_STS_SLV_LOCK = typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_SLV_LOCK;
    using STROBE_DLL_STS_REF_LOCK = typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_REF_LOCK;
    using STROBE_DLL_STS_SLV_SEL = typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_SLV_SEL;
    using STROBE_DLL_STS_REF_SEL = typename STROBE_DLL_STATUS_fields_::STROBE_DLL_STS_REF_SEL;
  };

  // Vendor Specific Register
  struct VEND_SPEC_fields_ {
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
  };  // struct VEND_SPEC_fields_

  struct VEND_SPEC : ftl::mmio::Register<
      kBase + 0xC0u,
      std::uint32_t,
      0x30007809u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<1, 0>,
      typename VEND_SPEC_fields_::VSELECT,
      typename VEND_SPEC_fields_::CONFLICT_CHK_EN,
      typename VEND_SPEC_fields_::AC12_WR_CHKBUSY_EN,
      ftl::mmio::Reserved<4, 4>,
      typename VEND_SPEC_fields_::FRC_SDCLK_ON,
      ftl::mmio::Reserved<6, 9>,
      typename VEND_SPEC_fields_::CRC_CHK_DIS,
      ftl::mmio::Reserved<15, 16>,
      typename VEND_SPEC_fields_::CMD_BYTE_EN> {
    using eVSELECT = typename VEND_SPEC_fields_::eVSELECT;
    using eCONFLICT_CHK_EN = typename VEND_SPEC_fields_::eCONFLICT_CHK_EN;
    using eAC12_WR_CHKBUSY_EN = typename VEND_SPEC_fields_::eAC12_WR_CHKBUSY_EN;
    using eFRC_SDCLK_ON = typename VEND_SPEC_fields_::eFRC_SDCLK_ON;
    using eCRC_CHK_DIS = typename VEND_SPEC_fields_::eCRC_CHK_DIS;
    using eCMD_BYTE_EN = typename VEND_SPEC_fields_::eCMD_BYTE_EN;
    using VSELECT = typename VEND_SPEC_fields_::VSELECT;
    using CONFLICT_CHK_EN = typename VEND_SPEC_fields_::CONFLICT_CHK_EN;
    using AC12_WR_CHKBUSY_EN = typename VEND_SPEC_fields_::AC12_WR_CHKBUSY_EN;
    using FRC_SDCLK_ON = typename VEND_SPEC_fields_::FRC_SDCLK_ON;
    using CRC_CHK_DIS = typename VEND_SPEC_fields_::CRC_CHK_DIS;
    using CMD_BYTE_EN = typename VEND_SPEC_fields_::CMD_BYTE_EN;
  };

  // MMC Boot
  struct MMC_BOOT_fields_ {
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
  };  // struct MMC_BOOT_fields_

  struct MMC_BOOT : ftl::mmio::Register<
      kBase + 0xC4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      typename MMC_BOOT_fields_::DTOCV_ACK,
      typename MMC_BOOT_fields_::BOOT_ACK,
      typename MMC_BOOT_fields_::BOOT_MODE,
      typename MMC_BOOT_fields_::BOOT_EN,
      typename MMC_BOOT_fields_::AUTO_SABG_EN,
      typename MMC_BOOT_fields_::DISABLE_TIME_OUT,
      ftl::mmio::Reserved<7, 9>,
      typename MMC_BOOT_fields_::BOOT_BLK_CNT> {
    using eDTOCV_ACK = typename MMC_BOOT_fields_::eDTOCV_ACK;
    using eBOOT_ACK = typename MMC_BOOT_fields_::eBOOT_ACK;
    using eBOOT_MODE = typename MMC_BOOT_fields_::eBOOT_MODE;
    using eBOOT_EN = typename MMC_BOOT_fields_::eBOOT_EN;
    using eDISABLE_TIME_OUT = typename MMC_BOOT_fields_::eDISABLE_TIME_OUT;
    using DTOCV_ACK = typename MMC_BOOT_fields_::DTOCV_ACK;
    using BOOT_ACK = typename MMC_BOOT_fields_::BOOT_ACK;
    using BOOT_MODE = typename MMC_BOOT_fields_::BOOT_MODE;
    using BOOT_EN = typename MMC_BOOT_fields_::BOOT_EN;
    using AUTO_SABG_EN = typename MMC_BOOT_fields_::AUTO_SABG_EN;
    using DISABLE_TIME_OUT = typename MMC_BOOT_fields_::DISABLE_TIME_OUT;
    using BOOT_BLK_CNT = typename MMC_BOOT_fields_::BOOT_BLK_CNT;
  };

  // Vendor Specific 2 Register
  struct VEND_SPEC2_fields_ {
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
  };  // struct VEND_SPEC2_fields_

  struct VEND_SPEC2 : ftl::mmio::Register<
      kBase + 0xC8u,
      std::uint32_t,
      0x00019006u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<3, 0>,
      typename VEND_SPEC2_fields_::CARD_INT_D3_TEST,
      typename VEND_SPEC2_fields_::TUNING_8bit_EN,
      typename VEND_SPEC2_fields_::TUNING_1bit_EN,
      typename VEND_SPEC2_fields_::TUNING_CMD_EN,
      ftl::mmio::Reserved<3, 7>,
      typename VEND_SPEC2_fields_::HS400_WR_CLK_STOP_EN,
      typename VEND_SPEC2_fields_::HS400_RD_CLK_STOP_EN,
      typename VEND_SPEC2_fields_::ACMD23_ARGU2_EN,
      ftl::mmio::Reserved<19, 13>> {
    using eCARD_INT_D3_TEST = typename VEND_SPEC2_fields_::eCARD_INT_D3_TEST;
    using eTUNING_CMD_EN = typename VEND_SPEC2_fields_::eTUNING_CMD_EN;
    using eACMD23_ARGU2_EN = typename VEND_SPEC2_fields_::eACMD23_ARGU2_EN;
    using CARD_INT_D3_TEST = typename VEND_SPEC2_fields_::CARD_INT_D3_TEST;
    using TUNING_8bit_EN = typename VEND_SPEC2_fields_::TUNING_8bit_EN;
    using TUNING_1bit_EN = typename VEND_SPEC2_fields_::TUNING_1bit_EN;
    using TUNING_CMD_EN = typename VEND_SPEC2_fields_::TUNING_CMD_EN;
    using HS400_WR_CLK_STOP_EN = typename VEND_SPEC2_fields_::HS400_WR_CLK_STOP_EN;
    using HS400_RD_CLK_STOP_EN = typename VEND_SPEC2_fields_::HS400_RD_CLK_STOP_EN;
    using ACMD23_ARGU2_EN = typename VEND_SPEC2_fields_::ACMD23_ARGU2_EN;
  };

  // Tuning Control
  struct TUNING_CTRL_fields_ {
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
  };  // struct TUNING_CTRL_fields_

  struct TUNING_CTRL : ftl::mmio::Register<
      kBase + 0xCCu,
      std::uint32_t,
      0x00212800u,
      ftl::mmio::RW,
      typename TUNING_CTRL_fields_::TUNING_START_TAP,
      typename TUNING_CTRL_fields_::DIS_CMD_CHK_FOR_STD_TUNING,
      typename TUNING_CTRL_fields_::TUNING_COUNTER,
      typename TUNING_CTRL_fields_::TUNING_STEP,
      ftl::mmio::Reserved<1, 19>,
      typename TUNING_CTRL_fields_::TUNING_WINDOW,
      ftl::mmio::Reserved<1, 23>,
      typename TUNING_CTRL_fields_::STD_TUNING_EN,
      ftl::mmio::Reserved<7, 25>> {
    using TUNING_START_TAP = typename TUNING_CTRL_fields_::TUNING_START_TAP;
    using DIS_CMD_CHK_FOR_STD_TUNING = typename TUNING_CTRL_fields_::DIS_CMD_CHK_FOR_STD_TUNING;
    using TUNING_COUNTER = typename TUNING_CTRL_fields_::TUNING_COUNTER;
    using TUNING_STEP = typename TUNING_CTRL_fields_::TUNING_STEP;
    using TUNING_WINDOW = typename TUNING_CTRL_fields_::TUNING_WINDOW;
    using STD_TUNING_EN = typename TUNING_CTRL_fields_::STD_TUNING_EN;
  };

};

}  // namespace regs